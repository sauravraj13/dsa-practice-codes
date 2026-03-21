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
};
// contains duplicate in array leetcode 217
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }

        return false;
    }
};
//3sum leetcode 15
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int left = i+1, right = nums.size()-1;

            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];

                if(sum == 0){
                    res.push_back({nums[i], nums[left], nums[right]});
                    
                    while(left < right && nums[left] == nums[left+1]) left++;
                    while(left < right && nums[right] == nums[right-1]) right--;
                    
                    left++;
                    right--;
                }
                else if(sum < 0) left++;
                else right--;
            }
        }
        return res;
    }
};
// leetcode 238 product of array itself
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n,1);
       vector<int>suffix(n,1);
        vector<int>result(n);     
        
        for(int m=1;m<n;m++){
            prefix[m] = prefix[m-1]*nums[m-1];            
        }for(int j = n-2;j>=0;j--){
            suffix[j] = suffix[j+1]*nums[j+1];
        }for(int i =0;i<n;i++){
        result[i] = suffix[i]*prefix[i];
        }
        return result;
 
    }
};
leetcode 152 minimum in rotated sorted array ;
class Solution {
public:
    int findMin(vector<int>& nums) {
         
        int n = nums.size();
        int mini = nums[0];
        for(int i = 1; i<n;i++){
            if(nums[i]<mini){
                mini = nums[i];
            }
        }
        return mini;
        
    }
};
// leetcode 16 3 sum closest 
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int closest = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if(abs(target - sum) < abs(target - closest)) {
                    closest = sum;
                }

                if(sum < target) {
                    left++;
                } else if(sum > target) {
                    right--;
                } else {
                    return sum;
                }
            }
        }
        return closest;
    }
};
     

    
