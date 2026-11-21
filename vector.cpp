#include<iostream>
#include<vector>

using namespace std;
    
bool searchNumber(vector<int> numbers, int target) {

    for(int i=0; i< numbers.size(); i++){
        if(numbers[i]== target) {
            return true;
        }
    }
    return false;
}
int main(){

    vector<int> numbers;

    for(int i = 0;i<5;i++){
        int num;

        cout<<"Enter a number: ";
        cin>> num;

        numbers.push_back(num);
    }
    int target;
    cout<<"\nEnter the number you want to search: ";
    cin>> target;
    
        if(searchNumber(numbers, target)) {
            cout<<"Number found!";
        }else{
            cout<<"NUmber not found!";
        }
    return 0;
}