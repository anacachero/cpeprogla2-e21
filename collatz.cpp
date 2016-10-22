#include<iostream>
#include<fstream>
using namespace std;

int greatest = 0;
int cycle(int x,int y ){

    if(x > 1){
        if(x%2)
		 x= 3*x+1;
        else x/=2;
        y++;
        cycle(x,y);
    }
    return greatest = (y>=greatest)?y:greatest;
}
int main(){
	ifstream f("input.txt");
    int a,b;
    while(f>>a>>b){
        for(int i = a; i <= b; i++)
		greatest = cycle(i,1);
        cout << a << " " << b << " " << greatest << endl;
        greatest = 0;
    }
    return 0;
}




