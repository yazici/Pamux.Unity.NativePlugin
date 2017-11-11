#pragma once

#ifdef PAMUXUNITYNATIVEPLUGIN_EXPORTS
#define  PAMUXUNITYNATIVEPLUGIN_API __declspec(dllexport) 
#else
#define PAMUXUNITYNATIVEPLUGIN_API __declspec(dllimport) 
#endif

extern "C" {

	PAMUXUNITYNATIVEPLUGIN_API float TestMultiply(float a, float b);
	PAMUXUNITYNATIVEPLUGIN_API float TestDivide(float a, float b);
}

