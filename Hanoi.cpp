//
// Created by cy on 17-11-1.
// 汉诺塔
//

#include "Hanoi.h"
#include <iostream>

void Hanoi::hanoiMain(){

    using namespace std;

    int n;

    cout<<"请输入A柱子上盘子的数量：";

    cin>>n;

    cout<<"移动"<<n<<"个盘子的步骤为："<<endl;

    hanoi(n,'A','B','C');
}

void Hanoi::hanoi(int n,char n1,char n2,char n3){

    if (n==1){
        move(n1,n3);//每一次递归结束
    }else{
        hanoi(n-1,n1,n3,n2);//开始递归,将A柱上的盘子移动至B柱上
        move(n1,n3);//执行A移动至C动作
        hanoi(n-1,n2,n1,n3);//开始递归，将B柱上的盘子移动至C柱上
    }
}

void Hanoi::move(char n1,char n2){
    std::cout << n1 <<"->"<< n2 <<std::endl;
}