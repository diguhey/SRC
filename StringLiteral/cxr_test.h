/////////////////////////////////////////////////////////////
// cxr_test.h
//
// This file was generated by CXR, the literal string encryptor.
// CXR, Copyright 2002, Smaller Animals Software, Inc., all rights reserved.
//
// Please do not edit this file. Any changes here will be overwritten on the next compile.
// If you wish to make changes to a string, please edit:
//     test.cxr
//

/////////////////////////////////////////////////////////////

#pragma once
#include "cxr_inc.h"

// cxr 적용 테스트입니당

///////////////////////////
#ifdef _USING_CXR
#define STR_CXRTEST1 	_CXR("\x89\x8a\x89\x86\x8a\x86\x8a\x8b\x89\x83\x8e\x8f\x84\x8b\x8f\x85\x86\x8f\x8d\x85\x8b\x82\x88\x8d\x8e\x84\x8a\x82\x8f\x8b\x89\x81\x85\x88\x8d\x81\x87\x8a\x8a\x80\x88\x8d\x8b\x85\x8d\x88\x80\x80\x8e\x89\x84\x8c\x8c\x84\x8e\x8a\x8d\x85\x87\x80\x8b\x83\x8b\x8b\x89\x8c")
#else
#define STR_CXRTEST1 _CXR("Your all bases are belong to us.")
#endif

///////////////////////////
#ifdef _USING_CXR
#define STR_CXRTEST2 	_CXR("\x8a\x82\x8c\x82\x81\x8e\x88\x82\x83\x88\x8d\x89\x88\x85\x83\x89\x8c\x82\x80\x8b")// 디파인 뒤에 주석이 달린 경우를 테스트
#else
#define STR_CXRTEST2 _CXR("It's You!")// 디파인 뒤에 주석이 달린 경우를 테스트
#endif

///////////////////////////
#ifdef _USING_CXR
#define STR_CXRTEST3 	_CXR("\x83\x82\x82\x80\x81\x89\x8b\x83\x81\x8a")		// 디파인 뒤에 공백을 두고 주석이 달린 경우를 테스트
#else
#define STR_CXRTEST3 _CXR("Aye.")		// 디파인 뒤에 공백을 두고 주석이 달린 경우를 테스트
#endif


