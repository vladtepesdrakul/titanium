/**
 * Appcelerator Titanium - licensed under the Apache Public License 2
 * see LICENSE in the root folder for details on the license.
 * Copyright (c) 2008 Appcelerator, Inc. All Rights Reserved.
 */
#import "app_protocol.h"
#import <WebKit/WebKit.h>

@implementation AppProtocol

+ (NSString*) specialProtocolScheme 
{
	return @"app";
}

+ (void) registerSpecialProtocol 
{
	static BOOL inited = NO;
	if ( ! inited ) 
	{
		[NSURLProtocol registerClass:[AppProtocol class]];
		// SECURITY FLAG: this will allow apps to have the same security
		// as local files (like cross-domain XHR requests).  we should 
		// make sure this is part of the upcoming security work
		[WebView registerURLSchemeAsLocal:[self specialProtocolScheme]];
		inited = YES;
	}
}

+ (BOOL)canInitWithRequest:(NSURLRequest *)theRequest 
{
	NSString *theScheme = [[theRequest URL] scheme];
	return [theScheme isEqual:@"app"];
}

+ (NSString*)getPath:(NSURL*)url
{
	NSString *s = [url path];
	
	// this happens when the app uses a resource like app://foo.html
	// in which we need to assume that the hostname is the actual 
	// path we need to use
	if (!s || [s isEqual:@""])
	{
		s = [NSString stringWithFormat:@"/%@",[url host]];
	}
	else
	{
		// if (![[url host] isEqual:[[TiController instance] appID]])
		// {
		// 	// this means we have multiple paths and the first part of the path
		// 	// is sitting in the host field
		// 	s = [NSString stringWithFormat:@"%@/%@",[url host],[url path]];
		// }
		// else
		// {
		// 	if (![s hasPrefix:@"/"])
		// 	{
		// 		s = [NSString stringWithFormat:@"/%@",s];
		// 	}
		// }
	}
	return s;
}

+(NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)request {
    return request;
}

+ (NSString *)mimeTypeFromExtension:(NSString *)ext
{
	NSString *mime = @"application/octet-stream";
	
	if ([ext isEqualToString:@"png"])
	{
		mime = @"image/png";
	}
	else if ([ext isEqualToString:@"gif"])
	{
		mime = @"image/gif"; 
	}
	else if ([ext isEqualToString:@"jpg"])
	{
		mime = @"image/jpeg";
	}
	else if ([ext isEqualToString:@"jpeg"])
	{
		mime = @"image/jpeg";
	}
	else if ([ext isEqualToString:@"ico"])
	{
		mime = @"image/x-icon";
	}
	else if ([ext isEqualToString:@"html"])
	{
		mime = @"text/html";
	}
	else if ([ext isEqualToString:@"htm"])
	{
		mime = @"text/html";
	}
	else if ([ext isEqualToString:@"text"])
	{
		mime = @"text/plain";
	}
	else if ([ext isEqualToString:@"js"])
	{
		mime = @"text/javascript";
	}
	else if ([ext isEqualToString:@"css"])
	{
		mime = @"text/css";
	}
	else if ([ext isEqualToString:@"xml"])
	{
		mime = @"text/xml";
	}
	return mime;
}

- (void)startLoading
{
    id<NSURLProtocolClient> client = [self client];
    NSURLRequest *request = [self request];
	
	NSURL *url = [request URL];
	NSString *s = [AppProtocol getPath:url];
	NSString *basePath = [[NSBundle mainBundle] resourcePath];
	NSString *resourcePath = [basePath stringByAppendingPathComponent:s];
	
	// support loading app://blank as a special url to an empty page
	if ([s isEqualToString:@"/blank"])
	{
		NSData *data = [[NSString stringWithString:@"<html></html>"] dataUsingEncoding:NSUTF8StringEncoding];
		NSHTTPURLResponse *response = [[NSHTTPURLResponse alloc] initWithURL:url MIMEType:@"text/html" expectedContentLength:-1 textEncodingName:@"utf-8"];
		[client URLProtocol:self didReceiveResponse:response cacheStoragePolicy:NSURLCacheStorageNotAllowed];
		[client URLProtocol:self didLoadData:data];
		[client URLProtocolDidFinishLoading:self];
		[response release];
		return;
	}
	
	// we're going to ignore any load for app://gears_init.js in case the developer left it in
	if ([[resourcePath lastPathComponent] isEqualToString:@"gears_init.js"])
	{
		NSError *error = [NSError errorWithDomain:@"titanium" code:-1 userInfo:nil];
		[client URLProtocol:self didFailWithError:error];
		[client URLProtocolDidFinishLoading:self];
		return;
	}
	
	// TiAppArguments *args = (TiAppArguments *)[[TiController instance] arguments];
	// 
	// if ([args devLaunch]) 
	// {
	// 	char *cwd = getcwd(NULL, 0);
	// 	
	// 	NSString *currentPath = [NSString stringWithCString:cwd length:strlen(cwd)];
	// 	resourcePath = [currentPath stringByAppendingPathComponent:s];
	// }
	
	NSError *error;
	NSData *data = [NSData dataWithContentsOfFile:resourcePath options:0 error:&error];
	
	if (data == nil)
	{
		// File doesn't exist
		[client URLProtocol:self didFailWithError:error];
		[client URLProtocolDidFinishLoading:self];
		return;
	}
	
	NSString *ext = [resourcePath pathExtension];
	NSString *mime = [AppProtocol mimeTypeFromExtension:ext];
	
	NSHTTPURLResponse *response = [[NSHTTPURLResponse alloc] initWithURL:url MIMEType:mime expectedContentLength:[data length] textEncodingName:@"utf-8"];
	
	[client URLProtocol:self didReceiveResponse:response cacheStoragePolicy:NSURLCacheStorageAllowed];
	[client URLProtocol:self didLoadData:data];
	[client URLProtocolDidFinishLoading:self];
	
	[response release];
}

- (void)stopLoading 
{
}

@end
