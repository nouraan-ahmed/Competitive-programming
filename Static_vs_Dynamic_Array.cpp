#include <iostream>

using namespace std;


void dynamic_arr_leak(int i){
int *arr;
arr=new int[1000000];
for(int j=0;j<1000000;j++){
    arr[j]=i+j;
}
cout<<arr[0]<<endl;

}


void dynamic_arr_clean(int i){
int *arr;
arr=new int[1000000];
for(int j=0;j<1000000;j++){
    arr[j]=i+j;
}
cout<<arr[0]<<endl;
delete [] arr;
}


void static_arr(int i){
int arr[1000000];
for(int j=0;j<1000000;j++){
    arr[j]=i+j;
}
cout<<arr[0]<<endl;
}


int main()
{
   for(int i=0;i<10;i++){
    static_arr(i);
   }
   for(int i=0;i<10;i++){
    dynamic_arr_leak(1);
   }
    for(int i=0;i<10;i++){
    dynamic_arr_clean(1);
   }
   return 0;
}
