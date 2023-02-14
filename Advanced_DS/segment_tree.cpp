#include<bits/stdc++.h>
using namespace std;

class SegmentTree{
private:
    int n;
    vector<int>seg;
    
    int Build(const vector<int> &nums, int left, int right, int i){
        if(left==right){return seg[i]=nums[left];}
        int middle = (left+right)/2;
        return seg[i] = Build(nums, left, middle, 2*i+1) + Build(nums, middle+1,right, 2*i+2);
           
    }
    int update(int idx, int val , int left, int right, int i){
        if(idx<left || idx>right){return seg[i];}
        if(left==right){return seg[i] = val;}
        int middle = (left+right)/2;
        return seg[i] = update(idx, val, left, middle, 2*i+1) + update(idx, val, middle+1,right, 2*i+2);
    }
    int sumRange(int left, int right, int ss, int se, int node){
        if(left>se || right<ss){
            return 0;
        }
        if(left<=ss && right>=se){
            return seg[node];
        }
        int middle = (ss+se)/2;
        return sumRange(left, right,ss, middle, 2*node+1) + sumRange(left, right, middle+1, se,2*node+2);
    }
    
public:
    //vector<int> nums;
    void NumArray(vector<int>& nums) {
        n = nums.size();
        //this->nums = nums;
        seg.resize(4*n);
        Build(nums, 0, n-1,0);
    }
    
    void update(int index, int val) {
        update(index, val, 0, n-1,0);
    }
    
    int sumRange(int left, int right) {
       return sumRange(left, right, 0, n-1, 0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
 int main(){
    int n;
    vector<int> v;
    v=  {1,4,6,2,5,8,9,3,10};
    int idx = 4;
    SegmentTree ob;
    ob.NumArray(v);
    ob.update(4, 7);
    cout<<ob.sumRange(0, 8)<<endl;
 }