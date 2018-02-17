//MyFileServ.cpp
#include "stdafx.h"
#include "MyFileServ.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//int WINAPI CopyFile( LPCTSTR lpszSrcPath, LPCTSTR lpszDstPath)
extern "C" _declspec (dllexport) int WINAPI MyCopyFile(LPCTSTR lpszSrcPath, LPCTSTR lpszDstPath)
{
	ASSERT(lpszSrcPath && lpszDstPath); //input check
	if (NULL == lpszSrcPath || NULL == lpszDstPath)
	{
		return -1;
	}
	CFile fSrc, fDst; //create 2 file objects
	if (!fSrc.Open(lpszSrcPath, CFile::modeRead | CFile::typeBinary | CFile::shareDenyWrite))
	{
		return -2;
	}
	if (!fDst.Open(lpszDstPath, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary | CFile::shareDenyWrite))
	{
		return -3;
	}
	char szBuf[1024 * 512]; //Create a buffer and clean it to zero
	memset(szBuf, 0, sizeof(szBuf));
	int nByteRead = 1; //counter
	int nTotalByte = 0;
	while (nByteRead = fSrc.Read(szBuf, sizeof(szBuf)))
	{
		fDst.Write(szBuf, nByteRead);
		nTotalByte += nByteRead;
	}
	fSrc.Close();
	fDst.Close();
	return nTotalByte;
}