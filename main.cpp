#include "controller.h"
#include <windows.h> //���ع��Ҫ�õ���ͷ�ļ�
#include <mmsystem.h>//����������Ҫ�õ�
#pragma comment(lib, "winmm.lib")//��������
//�������ع�꺯��
void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = FALSE;
	cursor.dwSize = sizeof(cursor);
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(handle, &cursor);
}

int main()//�������
{
    //windows API�ӿ� PlaySound��ֻ�ܲ���wav��ʽ�������ļ�
    PlaySound(TEXT("Kubbi-Bitpop.wav"),NULL,SND_ASYNC|SND_NODEFAULT|SND_LOOP);
    HideCursor();//���ع��
    Controller c;//����һ��Controller��
    c.Game();//������Ϸѭ��
    return 0;
}

