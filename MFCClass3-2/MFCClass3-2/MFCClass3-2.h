
// MFCClass3-2.h : MFCClass3-2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCClass32App:
// �йش����ʵ�֣������ MFCClass3-2.cpp
//

class CMFCClass32App : public CWinAppEx
{
public:
	CMFCClass32App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCClass32App theApp;