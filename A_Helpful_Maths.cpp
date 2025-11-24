#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    fgets(str,100,stdin);

    char arr[100];
    int c = 0;

    // take digits from string
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != '+' && str[i]!='\n'){
            arr[c++] = str[i];
        }
    }

    // sort digits ASCENDING
    for(int i = 0; i < c-1; i++){
        for(int j = 0; j < c-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    // print result correctly
    for(int i = 0; i<c; i++){
        cout<<arr[i];
        if(i!=c-1){
        	cout<<"+";
		}
    }
}
