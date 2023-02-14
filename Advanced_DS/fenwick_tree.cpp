#include<bits/stdc++.h>
using namespace std;

class BITTree{
private:
    int n;
    vector<int>bit;
    vector<int> vec;
    
    void updateO(int idx, int val ){ // 1 - indexing
        for( int i = idx; i<=n;i+= (i&-i)){
            bit[i] += val;
        }
    }
    void construct(vector<int> &nums){
        for(int i=1; i<=n ;i++){
            updateO(i, vec[i]);
        }
    }
    int sumRange(int idx){
        int sum =0;
        for(int i= idx; i>0; i-=(i&-i)){
            sum += bit[i];
        }
        return sum;
    }
    
public:
    //vector<int> nums;
    void NumArray(vector<int>& nums) {
        n = nums.size();
        vec.push_back(0);
        for(int i=0; i<n; i++){vec.push_back(nums[i]);}
        bit.resize(n+1, 0);
        //for(int i=0; i<vec.size(); i++){cout<<vec[i]<<" ";}
        // change in 1-indexing;
        //vector<int> v(n+1);
        //for(int i=1;i<=n;i++){v[i]=nums[i-1];}
        construct(nums);

    }
    
    void update(int index, int val) { // val is new vlaue to be replaced.
        updateO(index+1, val-vec[index+1]);
    }
    
    int sumRange(int left, int right) {
       return (sumRange(right+1) - sumRange(left));
    }
};

int main(){
    int n;
    vector<int> v;
    v=  {1,4,6,2,5,8,9,3,10};
    int idx = 4;
    BITTree ob;
    ob.NumArray(v);
    ob.update(4, 7);
    //ob.sumRange(0, 8);
    cout<<ob.sumRange(0, 8)<<endl;
}