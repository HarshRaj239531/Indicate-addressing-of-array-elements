#include<iostream>
using namespace std;

class harsh{
    public:
    void input(int arr[], int n){
        for (int i=0;i<n;i++){
            cout<<"Enter element"<<i<<":";
            cin>>arr[i];
        }
    }
    void display(int arr[], int n){
        for (int i=0;i<n;i++){
            cout<<i<<"\t"<<arr[i]<<"\t\t"<<&arr[i]<<endl;
        }
    }
};

int main(){
    int arr[100], n;
    harsh raj;
    cout<<"Enter how many no. do you want to take input:";
    cin>>n;
    cout<<endl<<"Taking input in array..."<<endl;
    raj.input(arr, n);
    cout<<endl<<"Entered elements in array with it's address:"<<endl;
    cout<<"Index\t"<<"Element\t"<<"\tAddress:"<<endl;
    raj.display(arr, n);
    return 0;
}