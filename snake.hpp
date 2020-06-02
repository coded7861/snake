#include <ncurses.h>

//use include guards, #pragma once will  also do the job
#ifndef SNAKE_H
#define SNAKE_H



class Point{
    public:
        Point();
        Point( unsigned xIn, unsigned yIn );

    private:
        unsigned x, y; // x and y cordinate of the point to be displyed
};

class Snake{
    public:
        Snake();
       ~Snake();
        init(;)
    private:
        vector <Point> Points; //used to store the points of snake to be displayed
        unsigned maxX, maxY; // maximum width of the screen
        
        char dir; //the direction in which snake is moving
        
        point Food;
        
        void putFood();
        void moveSnake();
        void detetectCollision();


};









#endif

