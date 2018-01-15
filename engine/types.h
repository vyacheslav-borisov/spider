#ifndef PEGAS_TYPES_H
#define PEGAS_TYPES_H
#pragma once

namespace Pegas
{
	typedef int CURCOORD;
	typedef int RESOURCEID;
	typedef unsigned long FLAGSET;
	
	typedef int FONTSIZE;
	typedef unsigned int RGBCOLOR;

#ifdef _UNICODE
	
	typedef std::wstring String;
	typedef wchar_t tchar;

#define _text(str) L##str

#else
	
	typedef std::string String;
	typedef char tchar;

#define _text(str) str

#endif

	typedef int ANIMATIONID;
	typedef int MILLISECONDS;
 

}

#endif //PEGAS_TYPES_H