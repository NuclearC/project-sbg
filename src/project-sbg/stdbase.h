#pragma once

#ifndef STDBASE_H_
#define STDBASE_H_

#if defined DEBUG || defined _DEBUG
#define SBG_DEBUG
#else
#define SBG_RELEASE
#endif // defined DEBUG || defined _DEBUG

#if defined WIN32 || defined _WIN32
#define SBG_WIN

#if defined WIN64 || defined _WIN64
#define SBG_WIN64
#endif // defined WIN64 || defined _WIN64

#endif // defined WIN32 || defined _WIN32

#endif // STDBASE_H_