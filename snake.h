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
    enum ö����{ ö��ֵ�� };
    enum��ö���� union�ǹ����壬��Ա����һ��������������
    ö��ֵ�ǳ��������Ǳ���
    ö��Ԫ�ر�����ϵͳ������һ����ʾ��ŵ���ֵ����0��ʼ˳����Ϊ0��1��2����
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
    std::deque<Point> snake;//����Point�Ķ���

    Direction direction;
    friend class Food;//��Food����Ϊ��Ԫ���Ա������˽��Ԫ��
};
#endif // SNAKE_H
