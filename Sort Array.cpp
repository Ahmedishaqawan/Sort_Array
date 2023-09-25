#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class solution{
	public:
		vector<int> SortArray(vector<int> &nums){
		priority_queue<int, vector<int>, greater<int> > pq;
		for(int i=0;i<nums.size();i++){
			pq.push(nums[i]);
		}
		nums.clear();
		while(!pq.empty()){
			nums.push_back(pq.top());
			pq.pop();
		}
		return nums;
		}
};
int main(){
	int arr[50],n;
	cout<<"Enter the Size of Array";
	cin>>n;
	cout<<"Enter the Element of Array";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int j=0;j<n;j++){
		cout<<SortArray(arr[j]);
	}
}
