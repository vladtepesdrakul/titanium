/**
 * Appcelerator Titanium - licensed under the Apache Public License 2
 * see LICENSE in the root folder for details on the license.
 * Copyright (c) 2008 Appcelerator, Inc. All Rights Reserved.
 */

#ifndef __KJS_BOUND_OBJECT_H__
#define __KJS_BOUND_OBJECT_H__

#include "kjs.h"

#include <vector>
#include <string>
#include <map>

class KJSBoundObject : public TiBoundObject
{
public:
	KJSBoundObject(JSContextRef context, JSObjectRef js_object);
	~KJSBoundObject();

	void Set(const char *name, TiValue* value, TiBoundObject *context);
	TiValue* Get(const char *name, TiBoundObject *context);
	std::vector<std::string> GetPropertyNames();

	JSObjectRef GetJSObject();

protected:
	JSContextRef context;
	JSObjectRef object;

};

#endif
