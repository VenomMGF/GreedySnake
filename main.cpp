#include "controller.h"
#include <windows.h> //隐藏光标要用到的头文件
#include <mmsystem.h>//播放音乐需要用到
#pragma comment(lib, "winmm.lib")//播放音乐
//定义隐藏光标函数
void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = FALSE;
	cursor.dwSize = sizeof(cursor);
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(handle, &cursor);
}

int main()//程序入口
{
    //windows API接口 PlaySound，只能播放wav格式的声音文件
    PlaySound(TEXT("Kubbi-Bitpop.wav"),NULL,SND_ASYNC|SND_NODEFAULT|SND_LOOP);
    HideCursor();//隐藏光标
    Controller c;//声明一个Controller类
    c.Game();//整个游戏循环
    return 0;
}

