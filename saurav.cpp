#include <bits/stdc++.h>
using namespace std;
/*int main() {
    int x;
    cin>>x;
    if(x>=18){
        cout<<"you are an adult"<<endl;}
    else{
        cout<<"you are not an adult"<<endl;

    }
   return 0;
    }
    
   // ...existing code...
int main(){
    int  arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    for(int i = 0;i<3;i++){
        cout<<arr[i]<<"\n";
    }
    return 0 ;
}
int main(){
    string s = "saurav";
    int len = s.size();
    cout<<s[len - 1];
}
int adition(int num1, int num2){
    int num3=  num1 +  num2;
    return num3;
}
int main(){
    int num1, num2;

}
int doSum(int arr[],int n){
    arr[1]= 100;
    cout<<"changed value  at index 1 is "<<arr[1];

}
int main(){
int n=5;
    int arr[n];

for(int i =0; i<n;i++){
    cin>>arr[i];
    
}
for (int i = 0;i<n;i++){
    cout<<arr[i]<<" "<<endl;}

    doSum(arr, n);

}

int main(){
    vector<int>vec;
    int n, value;
     cout<<"enter the number of elements"<<endl;
     cin>>n;
     vec.resize(n);
    
    for(int i =0;i<n;i++){
        cin>>vec[i];
              
        
    }
    cout<<"vector elements are "<<endl;
    for(int i = 0;i<n;i++){
        cout<<vec[i]<<"\n";
    }
    cout<<"vector is "<<vec[1]<<endl;
    vector<int>::iterator it = vec.begin();
    it= it+1;
    cout<<"iterating 1st element in vector "<<*(it);
}

int main(){
    int n;
    cout<<"enter the number of stars you want to print"<<endl;
    cin>>n;
    for(int i =0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<"*";
            
        }
        cout<<" "<<endl;
    }
}
int main(){
    int n;h
    cout<<"enter the number u want to start from"<<endl;
    cin>>n;
    for(int i =1;i<=n;i++){
    for(int j = 1;j<=i;j++){
        cout<<i;
    
    }
    cout<<" "<<endl;
    }
}
    int main(){
    int n;
    cout<<"enter the number you want to start the decrement from"<<endl;
    cin>>n;
    for(int i =0;i<n;i++){
        for (int j = 0; j<n-i+1;j++){
            cout<<j; //enter j for number like 54321 4321 321 21 1

        }
        cout<<endl;
    }
}  
// two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i =0;i<n;i++){
            for(int j = 0;j<n;j++)
            if(i==j){
            continue;
        }
        {
                if(nums[i]+arr[j]== target){
                    return {i,j};
                }
            }
        }
        return {};
        

    }
};
// two sum with sorted array leetcode 167
// best time to buy and sell stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int price = 0;

        for(int i = 1; i < prices.size(); i++){ // O(n)
            if(buy > prices[i]){
                buy = prices[i];
            }
            price = max(price, (prices[i] - buy));
        }

        return price;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
leetcode 83
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        while(p!=NULL && p->next!=NULL){
            if(p->val== p->next->val){
                p->next=p->next->next;
            }
            else{
                p=p->next;
            }
            
            
        }
        return head;
        
    
}
};*/

    
