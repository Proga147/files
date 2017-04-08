#include <iostream>
#include <fstream>
using namespace std;


int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
 ofstream text{"abc.txt"};//openfile
 
 if(text){
  
   
   text<<a<<" "<<b<<" "<<c;
   
 cout<<" File creation completed "<<endl;
  
 }
 else {
	cout<<"error opening abc.txt file";
	text.close();
}
   return 0;
}
