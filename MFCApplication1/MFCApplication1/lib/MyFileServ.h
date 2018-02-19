//MyFileServ.h
#ifndef __MYFILESERV__
#define __MYFILESERV__
//int WINAPI CopyFile( LPCTSTR lpszSrcPath, LPCTSTR lpszDstPath);
extern "C" _declspec (dllexport) int WINAPI MyCopyFile(LPCTSTR lpszSrcPath, LPCTSTR lpszDstPath);
#endif //__MYFILESERV__

#pragma once
