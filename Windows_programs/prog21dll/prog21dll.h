#pragma once
#ifdef PROG21DLL_EXPORTS
#define MYLIBAPI extern "C" __declspec(dllexport)
#else
#define MYLIBAPI extern "C" __declspec(dllimport)
#endif
MYLIBAPI int add1(int x, int y);
MYLIBAPI int sub1(int x, int y);
MYLIBAPI int mul1(int x, int y);
MYLIBAPI int div1(int x, int y);
