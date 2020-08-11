//
//  trace_Obj_life_cycle.cpp
//  OBJ_LifeCycle
//
//  Created by Lee Sheng on 2020/7/26.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

//#include <stdio.h>
//#include <cstdio>
//struct Tracer{
//    Tracer(const char* name): name{name} {
//        printf("%s constructed.\n", name);
//    }
//    ~Tracer(){
//        printf("%s deconstructed.\n", name);//'~' deconstruct function
//    }
//private:
//    const char* name;
//};
//
//static Tracer t1{"Static variables.\n"};
//thread_local Tracer t2{"Thread local variables.\n"};
//
//int main(){
//    printf("A\n");
//    Tracer t3{ "Automatic variable" };
//    printf("B\n");
//    const auto* t4 = new Tracer{ "Dynamic variable" };
//    printf("C\n");
////    delete t4;
//    return 0;
//}
