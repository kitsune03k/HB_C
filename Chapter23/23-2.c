#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

typedef struct
{
	Point SW;
	Point NE;
} Rectangle;

int area(Rectangle Rec)
{
	int calc = (Rec.NE.xpos-Rec.SW.xpos)*(Rec.NE.ypos-Rec.SW.ypos);
	return calc;
}


int main(void)
{
	Rectangle Rec1 = {
		{0,0}, 
		{100,100}
	};
	
	int result = area(Rec1);
	
	printf("Rec1의 넓이는 %d\n", result);
}