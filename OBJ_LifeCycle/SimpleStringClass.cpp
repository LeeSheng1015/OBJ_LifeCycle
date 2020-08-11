//
//  SimpleStringClass.cpp
//  OBJ_LifeCycle
//
//  Created by Lee Sheng on 2020/7/27.
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
////Appending and printing
//int main(){
//    SimpleString string{115};
//    string.append_line("Starbuck, whaddya hear?");
//    string.append_line("Nothin\' but the rain.");
//    string.print("A: ");
//    string.append_line("Grab your gun and bring the cat in.");
//    string.append_line("Aye-aye sir, coming home.");
//    string.print("B: ");
//    if(!string.append_line("Galactica!")){
//        printf("String was not big enough to append another message.\n");
//    }
//    return 0;
//}
