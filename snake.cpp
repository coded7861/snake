//file for definitions
#include "snake.hpp"
#include <stdlib.h>
#include <time.h>

Snake::Snake():x( 0 ), y( 0 )
{}

Snake::Snake( unsigned xIn, unsigned yIn ): x( xIN ), y( yIn )
{}

void Snake::putFood()
{
    //generate a random number and do mod with maxX and maxY
    srand( time( 0 ) );
    unsigned randX = rand() % maxX - 1;
    unsigned randY = rand() % maxY - 1;

    //the generated randX and randY can be on snake itself
    unsigned numPoints = Points.size();

    for( unsigned i = 0;i < numPoints; ++i )
    {
        if( randX == Points[i].x || randY == Points[i].y )

    }


    //display these tow points on the screen

}