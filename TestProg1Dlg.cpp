
// TestProg1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "TestProg1.h"
#include "TestProg1Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestProg1Dlg dialog

CTestProg1Dlg::CTestProg1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TESTPROG1_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTestProg1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CTestProg1Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CTestProg1Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_CHECK1, &CTestProg1Dlg::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_BUTTON2, &CTestProg1Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CTestProg1Dlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// CTestProg1Dlg message handlers

BOOL CTestProg1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTestProg1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTestProg1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CTestProg1Dlg::OnBnClickedButton1()
{
	int f;
}


void CTestProg1Dlg::OnBnClickedCheck1()
{
	// TODO: Add your control notification handler code here
}


void CTestProg1Dlg::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
}


void CTestProg1Dlg::OnBnClickedButton3()
{
	// TODO: Add your control notification handler code here
}
