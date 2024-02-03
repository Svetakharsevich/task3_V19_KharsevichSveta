#include<stdio.h>
#include<conio.h>
#include<cmath>
#include <iostream>
using namespace std;
//task1
#define t 1
#define z 3
#define y sin(t)
#define x 4*pow(y,2)/(4*z-2*pow(t,3))
//task2

#define x1 1.24
#define y1 2.55
#define w(x1,y1) pow(x1,2)*sqrt(y1)-pow(y1,2)*sqrt(x1)/(pow(x1,2)-pow(y1,2))
#define f(x1,y1,z1) pow(x1+y1+pow(z1,3),2)/(x1+z1/pow(z1,2))
//task3



int main(void)
{

    setlocale(LC_ALL, "Russian");
    int menu = 0;
    do {
        cout << "Введите 1-чтобы показать первое задание;2-показать второе задание;3-показать третье задание;0-выход" << endl;
        cin >> menu;
        if (menu == 1) {
          
            cout << x << endl;
            return 0;

        }
        else if (menu == 2) {
            double z1 = w(x1, y1);
            double b = f(x1, y1, z1);
            cout <<"b= " << b << endl;
        }
        else if (menu == 3) {
            int a = 0;
            double y3 = 0;
            double p = 3.14;
            cout << "Введите a" << endl;
            cin >> a;
            y3 = sin((p/2)+3*a)/(1-sin(3*a-p));
            cout << "y= " << y3 << endl;
        }

    } while (menu != 0);
} 