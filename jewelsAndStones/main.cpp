#include <iostream>
#include <string>

using namespace std;



int main () {


string j {"z"};
string s {"ZZ"};
int count{};

for (int i = 0; i < j.length(); i++){

    char l = j.at(i);

                    for (int k =0; k < s.length(); k++) {
                        char x = s.at(k);
                        if ( l == x) count++;
                    }
} 

cout << count ;


    return 0;
}