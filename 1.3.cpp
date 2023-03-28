#include<stdio.h>
#include<conio.h>

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void NhapDiem(DIEM&);
void XuatDiem(DIEM);

void NhapDiem(DIEM& d)
{
	float temp;
	printf("\nNh?p x= ");
	scanf_s("%f", &temp);
	d.x = temp;

	printf("\nNh?p y= ");
	scanf_s("%f", &temp);
	d.y = temp;
	}
void XuatDiem(DIEM d)
{
	printf("(%8.3f, %8.3f)", d.x, d.y);
	}
int main()
{
	DIEM d;
	NhapDiem(d);
	XuatDiem(d);

	_getch()
	return 0;

}