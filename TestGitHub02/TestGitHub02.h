
// TestGitHub02.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CTestGitHub02App:
// See TestGitHub02.cpp for the implementation of this class
//

class CTestGitHub02App : public CWinApp
{
public:
	CTestGitHub02App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CTestGitHub02App theApp;
