//
//  CopyConstructor.cpp
//  OBJ_LifeCycle
//
//  Created by Lee Sheng on 2020/7/28.
//  Copyright © 2020 Lee Sheng. All rights reserved.
//  use default key word to set copy constructor default
// use delete key word to set constructor unable to copy

//#include <stdio.h>
//#include <cstdio>
//#include <stdexcept>
//#include <cstring>
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
//    //copy constructor
//     SimpleString(const SimpleString& other)
//    : max_size{ other.max_size },
//    buffer{ new char[other.max_size] },
//    length{ other.length } {
//    std::strncpy(buffer, other.buffer, max_size); }
//    
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
//    //members
//private:
//    size_t max_size;//size_t type is unsigned type
//    char* buffer;
//    size_t length;
//};
//void foo(SimpleString(x)){
//    x.append_line("This string is lost");
//}
//
//int main(){
//    SimpleString a{50};
//    a.append_line("We apologize for this");
//    SimpleString a_copy{a};
//    a.append_line("inconvinence");
//    a_copy.append_line("inconvinence");
//    a.print("a");
//    a_copy.print("a_copy");
//    SimpleString b{20};
//    foo(b);//invoke copy constructor
//    b.print("still empty\n");
//    return 0;
//}
