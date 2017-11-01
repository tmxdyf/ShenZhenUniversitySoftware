//
// Created by cy on 17-10-31.
//

#include "Test.h"
#include <iostream>

//用if语句模拟计算
void Test::ifsum(){//::表示ifsum函数为Test类中的函数

    using namespace std;//使用std命名空间

    cout << "请输入数字："<<endl;

    float a;

    cin >> a;//输入a

    cout << "请输入运算符：‘+’、‘-’、‘×’、‘/’" << endl;//输入运算符

    char b;

    cin>>b;//输入b

    cout << "请输入数字：" << endl;

    float c;

    cin >> c;

    float sum=0;

    if (b == '+'){

        sum=a+=c;
    }else if(b=='-'){

        sum=a-=c;
    }else if(b=='*'){

        sum=a*=c;
    }else if(b=='/'){

        sum=a/=c;
    }else{
        cout<<"不支持 "<<b<<" 运算符"<<endl;
        return;
    }


    cout<<"结果："<<sum<<endl;
}


/**
 * 编写一个程序，输入两个正整数，输出它的最大公约数
 * 辗转相除法
 * @author CY
 * @return 返回最大公约数
 */
int Test::maxDivisor(){

    using namespace std;

    cout<<"请输入两个正整数以空格间隔例如：10 12"<<endl;

    int a,b;

    cin>>a>>b;

    int temp;
    while (true){//辗转相除法，当余数为0时，被除数为最大公约数

        temp=a%b;// 求余数

        if (temp==0){
            cout<<"最大公约数为："<<b<<endl;
            return b;
        }

        a=b;
        b=temp;
    }

}