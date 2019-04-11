/**************************************************************************

           Copyright(C), 2016-2026, tao.jing All rights reserved

 **************************************************************************
   File   : polar_coordinates.h
   Author : tao.jing
   Date   : 19-4-11
   Brief  : 
**************************************************************************/

#ifndef LAND_PROJECT_POLAR_COORDINATES_H
#define LAND_PROJECT_POLAR_COORDINATES_H

class polar_coordinates
{
public:
  double dx;
  double dy;
  void rotate(double yaw);
  polar_coordinates(double x, double y);
private:
  double polar;
  double theta;
  void rec_coordinates2Polar();
  void Polar2rec_coordinates();
};

#endif //LAND_PROJECT_POLAR_COORDINATES_H
