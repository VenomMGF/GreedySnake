#ifndef SNAKE_H
#define SNAKE_H

#include <deque>
#include "point.h"
#include "food.h"

class Food;
class Snake
{
public:
    enum Direction {UP, DOWN, LEFT, RIGHT};
    /*
    enum 枚举名{ 枚举值表 };
    enum是枚举型 union是共用体，成员共用一个变量缓冲区。
    枚举值是常量，不是变量
    枚举元素本身由系统定义了一个表示序号的数值，从0开始顺序定义为0，1，2…。
    */

    Snake() {
        snake.emplace_back(14, 8);
        snake.emplace_back(15, 8);
        snake.emplace_back(16, 8);
        direction = Direction::DOWN;
    }
    void InitSnake();
    void Move();
    void NormalMove();
    bool OverEdge();
    bool HitItself();
    bool ChangeDirection();
    bool GetFood(const Food&);
    bool GetBigFood(Food&);
private:
    std::deque<Point> snake;//蛇是Point的队列

    Direction direction;
    friend class Food;//将Food类置为友元，以便访问其私有元素
};
#endif // SNAKE_H
