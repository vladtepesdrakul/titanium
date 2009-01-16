/**
 * Appcelerator Kroll - licensed under the Apache Public License 2
 * see LICENSE in the root folder for details on the license.
 * Copyright (c) 2009 Appcelerator, Inc. All Rights Reserved.
 */
#include <kroll/kroll.h>
#include "filesystem_binding.h"
#include "file.h"

#include "Poco/TemporaryFile.h"
#include <Poco/Exception.h>

namespace ti
{
	FilesystemBinding::FilesystemBinding(BoundObject *global) : global(global)
	{
		KR_ADDREF(global);

		this->SetMethod("createTempFile",&FilesystemBinding::CreateTempFile);
		this->SetMethod("createTempDirectory",&FilesystemBinding::CreateTempDirectory);
		this->SetMethod("getFile",&FilesystemBinding::GetFile);
	}
	FilesystemBinding::~FilesystemBinding()
	{
		KR_DECREF(global);
	}
	void FilesystemBinding::CreateTempFile(const ValueList& args, Value *result)
	{
		try
		{
			Poco::TemporaryFile tempFile;
			tempFile.keepUntilExit();
			tempFile.createFile();

			ti::File* jsFile = new ti::File(this->global, tempFile.path());
			result->Set(jsFile);

			return;
		}
		catch (Poco::Exception& exc)
		{
			std::cerr << "Problem getting file info:::: " << exc.displayText() << std::endl;
		}

		// if we get here, the temp file was not created, so return null
		result->SetNull();
	}
	void FilesystemBinding::CreateTempDirectory(const ValueList& args, Value *result)
	{
		try
		{
			Poco::TemporaryFile tempDir;
			tempDir.keepUntilExit();
			tempDir.createDirectory();

			ti::File* jsFile = new ti::File(this->global, tempDir.path());
			result->Set(jsFile);

			return;
		}
		catch (Poco::Exception& exc)
		{
			std::cerr << "Problem getting file info:::: " << exc.displayText() << std::endl;
		}

		// if we get here, the temp directory was not created, so return null
		result->SetNull();
	}
	void FilesystemBinding::GetFile(const ValueList& args, Value *result)
	{
		std::string filename = args.at(0)->ToString();

		ti::File* file = new ti::File(this->global, filename);

		result->Set(file);
	}
}