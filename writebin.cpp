#include <iostream>
using namespace std;
#include <fstream>

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
 ofstream binfile{"abc.bin",ios::binary};//openfile
 if(binfile){
cout<<" File creation completed ";

binfile.write(reinterpret_cast<char*>(&a),sizeof(a));
binfile.write(reinterpret_cast<char*>(&b),sizeof(b));
binfile.write(reinterpret_cast<char*>(&c),sizeof(c));

  
 }
 else {
	cout<<"error opening abc.txt file";
	binfile.close();
}
   return 0;
}
