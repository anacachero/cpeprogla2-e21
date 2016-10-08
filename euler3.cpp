#include<iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(){
    ifstream f("input.txt");
    
    int x, sum;
    
    while (f >> x) {
    	for(int i=0;i<x;i++){
         if((i % 3==0 || i % 5==0)){
         sum=sum+i;
    }   
}
cout<<sum;  
}
    //fclose(f);
    //system("pause");
    return 0;
}  

