#include<iostream>
using namespace std;


int main(){
    
    /*int arr[10]={2,17,446};

    cout<<"Address of first memory block is "<<arr<<endl; 
    cout<<"Address of first memory block is "<<&arr[0]<<" "<<&arr<<endl;

    cout<<*(&arr[2])<<endl;
    cout<<"Next "<<*arr<<endl;
    cout<<"Next "<<*arr+1<<endl;
    cout<<"Next "<<*(arr+1)<<endl;
    cout<<"Next "<<*(arr)+1<<endl;
    cout<<"Next "<<*(arr+2)+2<<endl;

    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;


    int a[5]={10,20,30,40,50};
   
    for(int i=0;i<5;i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
    // So arr[i]=*(arr+i) or i[arr]=*(i+arr)
    for(int i=0;i<5;i++){
        cout<<*(i+a)<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<i[a]<<" ";
    }*/

   /* int temp[10]={45,6,5,2,36};

    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;

    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

    int a[5]={1,2,3,4,5};
    cout<<"->"<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    
    int *p=&a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"->"<<&p<<endl;

    int *r=a;
    cout<<r<<endl;
    cout<<*r<<endl;
    cout<<&r<<endl;*/

    int arr[20]={2,4,5,6,8,75};
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    return 0;

}