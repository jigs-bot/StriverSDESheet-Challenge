//LINK : https://www.codingninjas.com/codestudio/problems/single-element-in-a-sorted-array_8230826?challengeSlug=striver-sde-challenge

int singleNonDuplicate(vector<int>& arr)
{
	int ans =0;
	for(auto i : arr){
		ans^=i;
	}
	return ans;
}