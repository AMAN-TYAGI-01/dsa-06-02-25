#include<iostream>
using namespace std;
void bubble(int arr[],int s){
    int tmp;
    bool t;
    for(int i=0;i<s;i++){
        t=true;
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                t=false;
            }
        }
        if(t==true){
            break;
        }
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[]={3,4,1,6,5,2};
    int s=sizeof(arr)/sizeof(arr[0]);
    bubble(arr,s);
}

insertion sort

#include<iostream>
using namespace std;
void insertion(int arr[],int s){
    for(int i=0;i<s;i++){
        int mn=i;
        while(mn>0&&arr[mn]<arr[mn-1]){
            int tmp;
            tmp=arr[mn];
            arr[mn]=arr[mn-1];
            arr[mn-1]=tmp;
            mn--;
        }
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[]={3,4,2,55,32,12,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    insertion(arr,s);
}

selection sort

#include<iostream>
using namespace std;
void selection(int arr[],int s){
    int chhotu;
    for(int i=0;i<s;i++){
        chhotu=i;
        for(int j=i+1;j<s;j++){
            if(arr[chhotu]>arr[j]){
                chhotu=j;
            }
        }
        if(chhotu!=i){
            int tmp;
            tmp=arr[i];
            arr[i]=arr[chhotu];
            arr[chhotu]=tmp;
        }
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int arr[]={3,4,2,9,2,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    selection(arr,s);
}

#include<iostream>
using namespace std;
void sel(int arr[],int s){
    int chhotu;
    for(int i=0;i<s;i++){
        chhotu=i;
    for(int j=i+1;j<s;j++){
        if(arr[chhotu]>arr[j]){
            chhotu=j;
        }
    }
    if(chhotu!=i){
        int tmp;
        tmp=arr[i];
        arr[i]=arr[chhotu];
        arr[chhotu]=tmp;
    }
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[]={2,3,1,4,5};
    int s=sizeof(arr)/sizeof(arr[0]);
    sel(arr,s);
}

#include<iostream>
using namespace std;
void selection(int arr[],int s){
  int chhotu;
  for(int i=0;i<s;i++){
    chhotu=i;
    for(int j=i+1;j<s;j++){
        if(arr[chhotu]>arr[j]){
            chhotu=j;
        }
    }
    if(chhotu!=1){
        int tmp;
        tmp=arr[chhotu];
        arr[chhotu]=arr[i];
        arr[i]=tmp;

    }
  }
  for(int i=0;i<s;i++){
    cout<<arr[i];
  }
}
int main(){
    int arr[]={3,4,1,9,5,2,7};
    int s=sizeof(arr)/sizeof(arr[0]);
    selection(arr,s);
}