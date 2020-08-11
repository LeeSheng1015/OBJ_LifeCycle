//
//  CallStack.cpp
//  OBJ_LifeCycle
//
//  Created by Lee Sheng on 2020/7/28.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//

//#include <stdio.h>
//#include <cstdio>
//#include <cstring>
//#include <stdexcept>
//
////The constructor and destructor of a simple string class
//struct SimpleString {
//    //member initializer:
//    SimpleString(size_t max_size)
//    : max_size{max_size},length{} {
//        if (max_size == 0) {
//            throw std::runtime_error{"Max size must be at least 1."};
//        }
//        buffer = new char[max_size];
//        buffer[0] = 0;
//    }
//    void print(const char* tag) const {
//        printf("%s:%s", tag, buffer);
//    }
//    bool append_line(const char* x){
//        const auto x_len = strlen(x);
//        if(x_len + length + 2 > max_size) return false;
//        std::strncpy (buffer + length, x, max_size - length);//char* std::strncpy(char* destination,const char* sourse,std::size_t num);
//        length += x_len;
//        buffer[length++] = '\n';
//        buffer[length] = 0;
//        return true;
//    }
//    //destructor:
//    ~SimpleString(){
//        delete[] buffer;
//    }
//private:
//    size_t max_size;//size_t type is unsigned type
//    char* buffer;
//    size_t length;
//};
//
////The implementation of SimpleStringOwner
//struct SimpleStringOwner {
//   SimpleStringOwner(const char* x)
//    :string{10} {
//        if (!string.append_line(x)) {
//            throw std::runtime_error {"No enough memery!"};
//        }
//        string.print("Constructed: ");
//    }
//    ~SimpleStringOwner(){
//        string.print("About to destroyed:");
//    }
//private:
//    SimpleString string;
//};
//
//void fn_c(){
//    SimpleStringOwner c{"cccccccccc"};
//}
//void fn_b(){
//    SimpleStringOwner b{"b"};
//    fn_c();
//}
//int main(){
//    try {
//        SimpleStringOwner a{"a"};
//        fn_b();
//        SimpleStringOwner d("d");
//    } catch (const std::exception&e) {
//        printf("Exceptions:%s\n", e.what());
//    }
//    return 0;
//}
