////
////  CopyAndMove.cpp
////  OBJ_LifeCycle
////
////  Created by Lee Sheng on 2020/7/28.
////  Copyright © 2020 Lee Sheng. All rights reserved.
////
//
//#include <stdio.h>
//#include <cstdio>
//#include <stdexcept>
//#include <cstring>
//#include <utility>
//
//struct Simplestring {
//    //initialization
//    Simplestring(size_t max_size)
//    :max_size{max_size}, length{} {
//        if (max_size == 0){
//            throw std::runtime_error{"Max size must be at least 1!\n"};
//        }
//        buffer = new char[max_size];
//        buffer[0] = 0;
//    }
//    
//    //destruction
//    ~Simplestring(){
//        delete[] buffer;
//    }
//    
//    //copy constructor initialization
//    Simplestring(const Simplestring& other)
//    :max_size{other.max_size },
//    buffer{new char[max_size]},
//    length{other.length} {
//        std::strncpy(buffer, other.buffer, max_size);
//    }
//    
//    //move constructor
//    Simplestring(const Simplestring&& other) noexcept
//    :max_size(max_size),
//    buffer{new char[max_size]},
//    length{other.length}{
//        other.length = 0;
//        other.buffer = nullptr;
//        other.max_size = 0;
//    }
//    
//    //copy operater
//    Simplestring& operater = (const Simplestring& other) {
//        if(this == &other) return *this;
//        const auto new_buffer = new char[other.max_size];
//        delete[] buffer;
//        buffer = new_buffer;
//        length = other.length;
//        max_size = other.max_size;
//        std::strncpy(buffer, other.buffer, max_size);
//        return *this;
//    }
//    
//    //move operater
//    Simplestring& operator = (const Simplestring&& other) noexcept {
//        if(this == &other) return *this;
//        delete[] buffer;
//        buffer = other.buffer;
//        length = other.length;
//        max_size = other.max_size;
//        other.buffer = nullptr;
//        other.length = 0;
//        other.max_size = 0;
//        return *this;
//    }
//    void print(const char* tag) const {
//        printf("%s: %s", tag, buffer);
//    }
//    bool append_line(const char* x) {
//        const auto x_len = strlen(x);
//        if (x_len + length + 2 > max_size) return false;
//        std::strncpy(buffer + length, x, max_size - length);
//        length += x_len;
//        buffer[length++] = '\n';
//        buffer[length] = 0;
//        return true;
//    }
//private:
//    size_t max_size;
//    char* buffer;
//    size_t length;
//    
//};
