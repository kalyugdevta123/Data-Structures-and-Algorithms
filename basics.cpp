#include <bits/stdc++.h>
using namespace std;

//Input and Output

// int main(){
//     int x,y;
//     cin >>x >> y;
//     cout<< "Value of x: "<< x << " and y: " << y;
//     return 0;
// }

// Datatypes

// int main(){
//     // // int
//     // int x=10;
//     // // long
//     // long x =15;
//     // cin>>x;
    
//     // long long x=1500000000;

//     // //float,double
//     float x=5.6;
//     double y= 5;

//     cout << "Value of y: " << y;

//     return 0;
// }


// int main(){
//     // string and getline
//     string str;
//     getline(cin,str);
//     cout <<str;


//     return 0;
// }


// int main(){
//     //char
//     char ch= 'g';  // char prefered for single characters
//     cin>>ch;
//     cout <<ch;
//     return 0;
// }


//Write a program that takes an input of age
//and prints if you are adult or not
// >=18,yes
// <18,no

// int main(){
//     int age;
//     cin>>age;
//     if(age>=18){
//         cout <<"You are an adult!";
//     }
//     else if (age <10){
//         cout <<"You are not an adult";
//     }
//     return 0;
// }


/*
A school has following rules for grading systems:
a. Below 25-F
b. 25 to 44 -E
c. 45 to 49-D
d.50 to 59 -C
e.60 to 79 -B
f.80 to 100-A

Ask user to enter marks and print the corresponding grade

*/

// int main(){
//     int marks;
//     cin >>marks;
//     if(marks<25){
//         cout <<"F";
//     }
//     else if(marks <=44){
//         cout <<"E";
//     }
//     else if(marks <=49){
//         cout <<"D";
//     }
//     else if(marks <=59){
//         cout <<"C";
//     }
//     else if(marks <=79){
//         cout <<"B";
//     }
//     else if(marks <=100){
//         cout <<"A";
//     }
//     return 0;
// }


// int main(){
//     int arr[5];
//     cin >> arr[0] >>arr[1];

//     cout <<arr[1];
//     return 0;
// }


//2D Array
// int main(){
//     int arr[3][5];
//     arr[1][3]=78;
//     cout << arr[1][3];
//     return 0;
// }


// int main(){
//     string s ="Striver";
//     int len=s.size();
//     s[len-1]='z';   // "z" will not work since it's a character you have to use ''
//     cout << s[len-1];
//     return 0;
// }


// int main(){ 
//     //For loops
//     // int i;
//     // for(i=1;i<=10;i=i+1){
//     //     cout << "Striver" << endl;
//     // }

//     // cout << i <<endl;
//     // return 0;


//     //While loops
//     int i=1;
//     while(i<=5){
//         cout <<"Striver "<<i<<endl;
//         i=i+1;
//     }
// }


//Functions 
/*
Used to modularise code
Functions are used to increase readability
Functions are used to use same code multiple times*/
//void -> which does not return anything
//return
//parametrised
//non parametrised


// void printname(string name){
//     cout << "Hey " << name << endl;  
// }

// int main(){
//     string name;
//     cin>> name;
//     printname(name);


//     string name2;
//     cin >> name2;
//     printname(name2);
//     return 0;
// }

//return function
// int sum(int num1 ,int num2){
//     int num3=num1 +num2;
//     return num3;
// }

// int main(){
//     int num1,num2;
//     cin >> num1>>num2;
//     int res =sum(num1,num2);
//     cout<< res;
//     return 0;
// }


// pass by value
// void doSomething(int num){
//     cout << num << endl;
//     num+=5;
//     cout << num <<endl;
//     num+=5;
//     cout << num << endl;
// }
// int main(){
//     int num =10;
//     doSomething(num);
//     cout <<num <<endl;
    
//     return 0;
// }

void doSomething(int arr[],int n){
    arr[0]+= 100;
    cout << "value inside function: " << arr[0] << endl;
}

int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i=i+1){
        cin>>arr[i];
    }

    doSomething(arr,n);

    cout << "Value inside int main: " << arr[0] << endl;
    return 0;
}