// PciinfDll.cpp : 定義 DLL 的初始化常式。
//

#include "stdafx.h"
#include "PciinfDll.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//	注意!
//
//		如果這個 DLL 是動態地對 MFC DLL 連結，那麼從這個 DLL 匯出的任何會呼叫
//		MFC 內部的函式，都必須在函式一開頭加上 AFX_MANAGE_STATE 巨集。
//
//		例如:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// 此處為正常函式主體
//		}
//
//		這個巨集一定要出現在每一個函式中，才能夠呼叫 MFC 的內部。
//		這意味著它必須顯示為函式內的第一個陳述式，甚至必須在
//		任何物件變數宣告的前面，因為它們的建構函式可能會產生對
//		MFC DLL 內部的呼叫。
//
//		如需詳細資訊，請參閱 MFC 技術提示 33 和 58。
//

// CPciinfDllApp

BEGIN_MESSAGE_MAP(CPciinfDllApp, CWinApp)
END_MESSAGE_MAP()


// CPciinfDllApp 建構

CPciinfDllApp::CPciinfDllApp()
{
	// TODO: 在此加入建構程式碼，
	// 將所有重要的初始設定加入 InitInstance 中
}


// 僅有的一個 CPciinfDllApp 物件

CPciinfDllApp theApp;


// CPciinfDllApp 初始設定

BOOL CPciinfDllApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
