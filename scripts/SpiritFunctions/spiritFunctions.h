#ifndef PROJECT_NAME_SPIRITFUNCTIONS_H
#define PROJECT_NAME_SPIRITFUNCTIONS_H

void setSpiritX(int x);
void setSpiritY(int y);
void ValidatePosition();
void ValidateDirection();
void MoveNSteps(double n);
void TurnNDegrees(int n);
void TurnRight();
void TurnLeft();
void GoToXY(int x,int y);
void PointInDirection(int direction);
void ChangeXBy(int x);
void ChangeYBy(int y);
void IfOnEdge();
void goToRandomPosition();
void nextCostume();
void changeCostume(int n);
void ValidateSize();
void changeSizeBy(int n);
void setSize(int n);
void show();
void hide();
void spiritCostume();
void spiritSize();

#endif //PROJECT_NAME_SPIRITFUNCTIONS_H