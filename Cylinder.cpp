//
// Created by CY on 2017/11/28.
//

#include "Cylinder.h"

/**
 * 编写一个程序，计算圆柱体的体积与表面积
 */
void Cylinder::calculate() {

    std::cout << "请输入圆柱体的半径与高度以空格隔开:" << std::endl;
    float r, h;
    std::cin >> r >> h;

    double PI = 3.1415926;
    double circleArea = PI * r * r;//计算圆的面积

    double bulk = circleArea * h;//计算圆柱体的体积
    double circumference = 2 * PI * r;//计算圆周长
    double area = circumference * h + circleArea * 2;//计算圆柱体的面积

    std::cout << "圆柱半径：" << r << "\n圆柱高度：" << h << "\n圆柱的体积为：" << bulk << "\n圆柱的面积为：" << area << std::endl;


}


/**
 * 计算某同学7门课程的平均成绩
 */
void Cylinder::average() {

    using namespace std;

    cout << "请输入该同学的7门成绩，以空格间隔：" << endl;

    float m[7];//,m2,m3,m4,m5,m6,m7;

    cin >> m[0] >> m[1] >> m[2] >> m[3] >> m[4] >> m[5] >> m[6];

    float count=0;

    for (int i = 0; i < 7; ++i) {

        count += m[i];
    }

    float average = count / 7;

    cout << "该同学的平均成绩为：" << average << endl;
}


/**
 * 冒泡排序，对10个数字进行从小到大排序
 */
void Cylinder::sequence() {

    int indexs[]={8,5,5,6,9,0,3,2,7,6};

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {

//            indexs[i]
        }
    }

}