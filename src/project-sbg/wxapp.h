#pragma once

#ifndef WXAPP_H_
#define WXAPP_H_
#define __WXMSW__
#define wxUSE_WINRT 1
#define wxUSE_DBGHELP 1

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#pragma comment (lib,"Rpcrt4.lib")
#pragma comment (lib,"comctl32.lib")
#if defined SBG_DEBUG
#pragma comment (lib,"wxbase31ud.lib")
#pragma comment (lib,"wxmsw31ud_core.lib")
#pragma comment (lib,"wxexpatd.lib")
#pragma comment (lib,"wxjpegd.lib")
#pragma comment (lib,"wxpngd.lib")
#pragma comment (lib,"wxregexud.lib")
#pragma comment (lib,"wxtiffd.lib")
#pragma comment (lib,"wxzlibd.lib")
#else
#pragma comment (lib,"wxbase31u.lib")
#pragma comment (lib,"wxmsw31u_core.lib")
#pragma comment (lib,"wxexpat.lib")
#pragma comment (lib,"wxjpeg.lib")
#pragma comment (lib,"wxpng.lib")
#pragma comment (lib,"wxregexu.lib")
#pragma comment (lib,"wxtiff.lib")
#pragma comment (lib,"wxzlib.lib")
#endif // SBG_DEBUG

#endif // WXAPP_H_ 