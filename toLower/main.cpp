#include<iostream>
#include<string>
#include <algorithm>

using namespace std;


int main () {


string str {"HeLlO"};


transform(str.begin(), str.end(), str.begin(), [](char c){
    return tolower(c);


});

cout << str ;

    return 0;
}