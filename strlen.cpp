#include<iostream>
#include<string>

int strlen(char* p) {
  int count = 0;
    while(*p++ != '\0') {
     ++count;
    }
    return count;
 }

int main() {
  char str[] = "hello";
  int size = strlen(str);
  std::cout<<size<<std::endl;
  }
