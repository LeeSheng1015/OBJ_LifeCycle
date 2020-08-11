//
//  Stdmove.cpp
//  OBJ_LifeCycle
//
//  Created by Lee Sheng on 2020/7/28.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

#include <stdio.h>
#include <cstdio>
#include <utility>
void ref_x(int &x){
    printf("lvalue:%d\n",x);
}

void ref_x(int &&x){
    printf("rvalue:%D\n", x);
}

int main(){
    int x = 1;
    ref_x(std::move(x));//std::move changes lvalue reference to rvalue reference
    ref_x(1);
    ref_x(x+1);
    return 0;
}
