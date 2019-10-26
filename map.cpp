#include "map.h"
#include <windows.h>

void Map::PrintInitmap()//绘制初始地图
{
    for (auto& point : initmap)  //范围for循环
    {
        point.Print();//打印方框地图
        Sleep(10);//调用Sleep函数可营造动画效果
    }
}
