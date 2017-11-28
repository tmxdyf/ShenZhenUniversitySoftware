//
// Created by CY on 2017/11/28.
//

#include "Cylinder.h"

/**
 * 编写一个程序，计算圆柱体的体积与表面积
 */
void Cylinder::calculate(){

    std::cout << "请输入圆柱体的半径与高度以空格隔开:" << std::endl;
    float r,h;
    std::cin >> r >> h;

    double PI=3.1415926;
    double circleArea=PI*r*r;//计算圆的面积

    double bulk=circleArea*h;//计算圆柱体的体积
    double circumference=2*PI*r;//计算圆周长
    double area=circumference*h+circleArea*2;//计算圆柱体的面积

    std::cout<<"圆柱半径："<<r<<"\n圆柱高度："<<h<<"\n圆柱的体积为："<<bulk<<"\n圆柱的面积为："<<area<<std::endl;


}