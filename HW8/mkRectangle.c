#include<stdio.h>

struct point {
	double x;
	double y;
};

struct rectangle {
	struct point ll;
	struct point ur;
};

struct rectangle mkRectangle1(struct point ll, struct point ur){
	struct rectangle r1;
	r1.ll = ll;
	r1.ur = ur;
	return r1;
}

struct rectangle mkRectangle2(double llx, double lly, double urx, double ury){
	struct rectangle r1;
	r1.ll.x = llx;
	r1.ll.y = lly;
	r1.ur.x = urx;
	r1.ur.y = ury;
	return r1;
}
int main(){
	double llx = 0;
	double lly = 0;
	double urx = 2;
	double ury = 1;
	struct point ll;
	struct point ur;
	ll.x = llx;
	ll.y = lly;
	ur.x = urx;
	ur.y = ury;
	struct rectangle r1 = mkRectangle1(ll,ur);
	struct rectangle r2 = mkRectangle2(llx,lly,urx,ury);
	if (r1.ll.x == r2.ll.x && r1.ll.y == r2.ll.y && r1.ur.x == r2.ur.x && r1.ur.y == r2.ur.y)
		printf("The rectangles are same\n");
	else
		printf("The rectangles are different\n");

	return 0;
}
