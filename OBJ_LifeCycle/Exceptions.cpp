//
//  Exceptions.cpp
//  OBJ_LifeCycle
//
//  Created by Lee Sheng on 2020/7/27.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

//#include <stdio.h>
//#include <stdexcept>
//#include <cstdio>
//
//struct Groucho{
//    void forget(int x){
//        if (x == 0xFACE){
//            throw std::runtime_error {"I\'d be glad to make an exception."};
//        }
//        printf("Forget 0x%x\n",x);
//    }
//};
//
//int main(){
//    Groucho groucho;
//    try {
//        groucho.forget(0xC0DE);
//        groucho.forget(0xFACE);
//        groucho.forget(0xFFBA);
//    } catch (const std::runtime_error& e) {
//        printf("exception caught with message: %s\n",e.what());
//    }
//    return 0;
//}
