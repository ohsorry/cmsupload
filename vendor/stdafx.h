#pragma once

// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
#define _CRT_SECURE_NO_WARNINGS
#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 从 Windows 头中排除极少使用的资料
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 某些 CString 构造函数将是显式的

#include <afxctl.h>         // ActiveX 控件的 MFC 支持
#include <afxext.h>         // MFC 扩展
#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC 对 Internet Explorer 4 公共控件的支持
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>                     // MFC 对 Windows 公共控件的支持
#endif // _AFX_NO_AFXCMN_SUPPORT

// 如果不希望使用 MFC 数据库类，
//  请删除下面的两个包含文件
#ifndef _WIN64

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>                      // MFC ODBC 数据库类
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>                     // MFC DAO 数据库类
#endif // _AFX_NO_DAO_SUPPORT

#endif // _WIN64
#define STATUS_LINE_SEP 20
#include <afxwin.h>
#include <afxmt.h>
//#include "CIconv.h"
typedef char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#define SAFE_DELETE(p) if(p!=NULL)\
{\
	delete p;\
	p=NULL;\
}
class CCMSInterfaceCtrl;
class CCMSFormView;
void ErrorExit(LPTSTR lpszFunction);

typedef struct _ST_STATUS{
   CStatic *pre; 
   CProgressCtrl *m_Progress;
   CStatic *next;
   INT percent;
   CString s_percent;
}ST_STATUS;
extern CCriticalSection g_Map_Lock;