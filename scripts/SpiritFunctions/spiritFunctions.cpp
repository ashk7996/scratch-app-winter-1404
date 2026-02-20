#include "spiritFunctions.h"
#include "../Common/common.h"
#include <cmath>

// <<--------------------------------------------- Motion Commands --------------------------------------------->>
void setSpiritX(int x) {

    scratchApp.spirit.spiritX = x;
}

void setSpiritY(int y){

    scratchApp.spirit.spiritY = y;
}

void ValidatePosition(){

    if (scratchApp.spirit.spiritX >= scratchApp.DW)
        scratchApp.spirit.spiritX = scratchApp.DW - 1;
    else if(scratchApp.spirit.spiritX <= 0)
        scratchApp.spirit.spiritX = 0;
    if(scratchApp.spirit.spiritY >= scratchApp.DH)
        scratchApp.spirit.spiritY = scratchApp.DH - 1;
    else if(scratchApp.spirit.spiritY <= 0)
        scratchApp.spirit.spiritY = 0;
}

void ValidateDirection(){

    if(scratchApp.spirit.direction >= 360) {
        int q = scratchApp.spirit.direction % 360;
        scratchApp.spirit.direction -= q*360;
    } else if(scratchApp.spirit.direction <= -360) {
        int q = scratchApp.spirit.direction % 360;
        scratchApp.spirit.direction -= q*360;
    }
}

void MoveNSteps(int n){

    double degree = scratchApp.spirit.direction*M_PI/180;
    double dx = n*cos(degree);
    double dy = -n*sin(degree);
    scratchApp.spirit.spiritX += dx;
    scratchApp.spirit.spiritY += dy;
    ValidatePosition();
    }

void TurnNDegrees(int n){

    scratchApp.spirit.direction +=n;
    ValidateDirection();
}

void TurnRight(){

    scratchApp.spirit.direction = 90;
}

void TurnLeft(){

    scratchApp.spirit.direction = -90;
}

void GoToXY(int x,int y){

    scratchApp.spirit.spiritX = x;
    scratchApp.spirit.spiritY = y;
    ValidatePosition();
    }

void PointInDirection(int direction){

    scratchApp.spirit.direction = direction;
    ValidateDirection();
}

void ChangeXBy(int x){

    scratchApp.spirit.spiritX += x;
    ValidatePosition();
}

void ChangeYBy(int y){

    scratchApp.spirit.spiritY += y;
    ValidatePosition();
}

void IfOnEdge(){

    if(scratchApp.spirit.spiritX >= scratchApp.DW || scratchApp.spirit.spiritX <=0 || scratchApp.spirit.spiritY >= scratchApp.DH || scratchApp.spirit.spiritY <= 0 )
        scratchApp.spirit.direction += 180;
    ValidateDirection();
}

void goToRandomPosition(){

    int x = rand() % (scratchApp.DW + 1);
    int y = rand() % (scratchApp.DH + 1);
    setSpiritX(x);
    setSpiritY(y);
}
// <<--------------------------------------------- Looks Commands --------------------------------------------->>

