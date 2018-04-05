#include<iostream>
using namespace std;
#include "polygon.h"
int main()
{
  polygon p1;
  p1.add(*(new point(13.4,15.0)));
  p1.add(*(new point(1.5,12.3)));
  p1.add(*(new point(1.4,145.60)));
  p1.add(*(new point(13.4,166.0)));
  p1.add(*(new point(12.4,152.0)));
  p1.add(*(new point(14.4,152.0)));
  p1.add(*(new point(19.4,153.0)));
  p1.add(*(new point(100.4,154.0)));
  p1.display();
  system("pause");
  
};