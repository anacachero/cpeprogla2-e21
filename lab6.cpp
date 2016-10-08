#include<iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(){
    ifstream f("sample.txt");
    
    int x, y;
    
    while (f >> x >> y) {
          cout << abs(x-y);  
		  cout<<endl;    
    }
   
    //fclose(f);
    //system("pause");
    return 0;
}  
