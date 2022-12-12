#include <stdio.h>
#include <math.h>

struct_point{
float x; 
float y;
};
typedef struct _point Point;

Point input();
void dist(Point a, Point b,float*res);
void output(Point a, Point b, floatres);

Point input()
{
  Point a;
  printf("enter the points ");
  scanf("%f %f",&a.x,&a.y);
  return a;
    
}
void dist(Point a, Point b,float*res)
{
  *res = sqrt(((b.x-a.x)(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));
}
void output(Point a, Point b, float res)
{
 printf("%.2f", res);
}
int main()
{
  Point p,q;
  float r;
  p=input();
  q=input();
  dist(p,q, &r);
  output(p,q,r);
}