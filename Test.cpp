//
// Created by cy on 17-10-31.
//

#include "Test.h"
#include <iostream>

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
