#include <iostream>
#include <string>
#include <vector>

using namespace std; 


int main () {


string address {"1.1.1.1.2.4"};

size_t n = address.size();
char k{};
string ip {};
cout << " \n your address before is : " << address << " length is  " << n;


// defangle()

for (int i = 0; i < n; i++) {
if (address[i] == '.') {

   
    ip+="[.]";
   
}
else {
    ip += address[i];
}


}





cout << " \n \n your address after is  : " << ip;





return 0;
}