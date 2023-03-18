#include<iostream>
#include<iterator>
using namespace std;
int main(){
    cout<< "Hello World"<<endl;
    cout << "This is just a try!" << endl;
    char arr[] = "Hello";
    char * str = arr;
    char *begin = str;
    char *endll = end(arr);
    cout << endll - begin<<endl << *(--endll) <<endl;
}