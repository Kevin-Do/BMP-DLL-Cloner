// Lab_HQ_3DLLStatic.h : main header file for the Lab_HQ_3DLLStatic DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CLabHQ3DLLStaticApp
// See Lab_HQ_3DLLStatic.cpp for the implementation of this class
//

class CLabHQ3DLLStaticApp : public CWinApp
{
public:
	CLabHQ3DLLStaticApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
