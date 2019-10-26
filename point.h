#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point(){}
    Point(const int x, const int y) : x(x), y(y) {}//初始化列表并不是简单的给了一种方便的写法, 填充内存时会先用初始化列表对成员赋初值, 再执行构筑函数体里的赋值语句, 于是初始化列表会比构造函数里的赋值语句要快, 同时如果把成员属性声明为const或者成员属性的类型把operator=拷贝赋值操作符"禁用"了那么就只能用初始化列表赋初值而不能在函数体内赋值
    void Print();
    void PrintCircular();
    void Clear();
    void ChangePosition(const int x, const int y);
    bool operator== (const Point& point) { return (point.x == this->x) && (point.y == this->y); }
    int GetX(){ return this->x; }
    int GetY(){ return this->y; }
private:
    int x, y;
};
#endif // POINT_H
