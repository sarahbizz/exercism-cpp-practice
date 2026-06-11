#include <iostream>
using namespace std;

int main(int arg_count, char *args[]) {

   if (arg_count > 1){
string name(args[1]);

   }
   else{
cout << "username not supplied. exiting" << endl;
   }
   return 0;
}
