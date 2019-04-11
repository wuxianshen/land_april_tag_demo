/**************************************************************************

           Copyright(C), 2016-2026, tao.jing All rights reserved

 **************************************************************************
   File   : polar_coordinates.cpp
   Author : tao.jing
   Date   : 19-4-11
   Brief  :
**************************************************************************/
#include "polar_coordinates.h"
#include <math.h>

void polar_coordinates::rec_coordinates2Polar()
{
  polar = sqrt(pow(dx, 2) + pow(dy, 2));
  theta = atan2(dx, dy);
}

void polar_coordinates::Polar2rec_coordinates()
{
  dx = polar*sin(theta);
  dy = polar*cos(theta);
}

void polar_coordinates::rotate(double yaw)
{
  rec_coordinates2Polar();
  theta = theta + yaw;
  Polar2rec_coordinates();
}

polar_coordinates::polar_coordinates(double x, double y)
{
  dx = x;
  dy = y;
}