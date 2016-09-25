#include<iostream>
#include<cstring>
using namespace std;
void line(char, int);
char a[50],str[50];
int x,y;

char* outputStrCmp(char* str1, char* str2){
  //return strlen(str);
  switch(strcmp(str1, str2)){
    case -1:
      cout << "negative";
      break;
    case 0:
      cout << "equal";
      break;
    case 1:
      cout << "positive";
      break;
  }
    cout<<endl;
}

void outputStrCpy(char* str1, char* str2){
  strcpy(str1, str2);
    cout << str1;
    cout<<endl;
}

void outputStrCat(char* str1, char* str2){
  strcat(str1, str2);
  cout << str1; 
   cout<<endl;
}
void palindrome(){
	cout<<"\nEnter a word: ";
	gets(a);
	x=strlen(a);
	for(int j=0;j<x;j++) {
		if(a[j]!=a[x-(j+1)]) y=0;
		else y=1;
    }
    if (y==1) cout<<a<<" is a palindrome";
    else if (y==0) cout<<a<<" is not a palindrome";
    cout<<endl;
}
void output(char* str1){
	int i;
 cout<<"\nEnter string: ";
 	gets(str1);
 	strlwr(str1);
 	str1[0]-=32;
 	for(i=1;i<strlen(str1);i++){
 		if(str1[i]==' ')
 		str1[i+1]-=32;
 
 	}
 	cout<<str1;
 	cout << endl;
 	
}
void problem6() {
	cout << "\nEnter a string: ";
	gets(str);
	x = strlen(str);
	for(int i=x;i>=0;i--) {
		if (str[i]==32) {
			int j=i+1;
		while(str[j]!=32 && j < x) {
			cout << str[j];
				j++;
			}
			cout << endl;
		}
	}
	int y=0;
	while(str[y]!=32) {
		cout << str[y];
		y++;
	}
}


int main(){
  
  char str1[100]="Hello";
  char str2[100]="hi";
  char str[20];
  line('-',20);
  cout<<"STRING COMPARE"<<endl;
  line('-',20);
  outputStrCmp(str1, str2);
  line('-',20);
  cout<<"STRING CONCATENATION"<<endl;
  line('-',20);
  outputStrCat(str1, str2);
  line('-',20);
  cout<<"STRING COPY"<<endl;
  line('-',20);
  outputStrCpy(str1, str2);
  line('-',20);
  cout<<"PALINDROME"<<endl;
  line('-',20);
  palindrome();
  line('-',20);
  cout<<"PROBLEM 5"<<endl;
  line('-',20);
  output(str1);
  line('-',20);
  cout<<"PROBLEM 6"<<endl;
  line('-',20);
  problem6();
  
  
}
void line(char ch, int ctr){
	int i;
	for(i=0;i<ctr;i++)
	cout<< ch;
	cout<<endl;
}

