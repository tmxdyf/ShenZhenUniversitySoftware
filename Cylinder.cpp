//
// Created by CY on 2017/11/28.
// tmxdyf@163.com
//

#include "Cylinder.h"

/***************实验二 START**********************/

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

    float count = 0;

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

    int indexs[] = {8, 5, 5, 6, 9, 0, 3, 2, 7, 6};
    int temp;

    int arrayLength = sizeof(indexs) / sizeof(indexs[0]);

    std::cout << "数组长度：" << arrayLength << std::endl;

    for (int i = 0; i < arrayLength; ++i) {
        for (int j = i + 1; j < arrayLength; ++j) {

            if (indexs[i] > indexs[j]) {

                temp = indexs[i];
                indexs[i] = indexs[j];
                indexs[j] = temp;
            }
//
        }
    }
    for (int k = 0; k < arrayLength; ++k) {
        std::cout << "\t" << indexs[k];
    }
}


/**
 * 输入一个长度小于50的字符串，逆转字符串后输出
 */
void Cylinder::revstr() {

    using namespace std;

    char str[50], revstr[50];

    cout << "请输入字符串：" << endl;

    cin >> str;

    size_t strLength = strlen(str);

    cout << "字符串长度：" << strLength << endl;

    for (int i = 0; i < strLength; ++i) {

        revstr[i] = str[strLength - i - 1];
    }

    revstr[strLength] = '\0';

    cout << "逆转的字符串为：" << revstr << endl;
}

/***************实验二 END**********************/

/***************实验三 START**********************/

/**
 * P212 指出下列程序的运行结果
 */
void Cylinder::runResult() {

    using namespace std;

    int a = 1, b = 2;

    cout << "a=" << a << ",b=" << b << endl;

    swap(&a, b);

    cout << "a=" << a << ",b=" << b << endl;
}

/**
 * 内存地址交换
 * @param i  i为&a，即a的内存地址，*i指针指向i的值，即为1.'*'为指针运算符
 * @param j
 */
void Cylinder::swap(int *i, int &j) {
//    std::cout << "j=" << j << "  *i=" << *i << "  i=" << i << std::endl;
    int k;
    k = *i;
    *i = j;
    j = k;
}

/**
 * P213 编写一个程序，输入n个字符后按逆序排列输出
 */
void Cylinder::pointrev() {

    using namespace std;

    char *p, array[100];

    cout << "请输入字符串：" << endl;

    cin >> array;

    size_t arrayLength = strlen(array);

    p = array;//数组首地址

    cout << "字符串长度：" << arrayLength << endl;

    for (int i = 0; i < arrayLength / 2; ++i) {

        char temp = *(p + i);
        *(p + i) = *(p + arrayLength - i - 1);
        *(p + arrayLength - i - 1) = temp;
    }

    cout <<"逆序后的字符串："<< array;
}

/***************实验三 END**********************/