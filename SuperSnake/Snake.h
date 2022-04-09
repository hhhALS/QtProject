#ifndef SNAKE_H
#define SNAKE_H

#include <Point.h>
#include <vector>
#include <QColor>

using std::vector;

// 定義【方向】的枚舉值
enum direction{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

class Snake
{
public:
    Snake(int snakeNum,int snakeSize);
    int getSize()const;  //獲取蛇的大小
    int getNum()const;  //獲取蛇的節數
    int getDir()const; //獲取蛇當前的運動方向
    QColor getSnakeColor()const;
    void setDir(direction dir); //設置蛇的方向
    void setSnakeColor(QColor color);
    std::vector<Point> getCoords(); //獲取蛇的座標
    void move();  //讓蛇移動的函數
    void addNum();
    void init(); //將蛇初始化到基本形態

private:
    vector<Point> coordinates; //儲存蛇座標的數組
    int s_num; //儲存蛇的節數
    int s_size; //儲存蛇的大小( 每節蛇身都為正方形 )
    int dir; //蛇的方向
    QColor snakeColor; //蛇的顏色

};

#endif // SNAKE_H
