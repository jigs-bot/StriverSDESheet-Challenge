int helper(vector<int> &values ,vector<int>&weights ,int n,int w){
	
	if(w<0) return 0;

	if(n<0 || w==0){
		return 0;
	}
	if(weights[n]>w) return helper(values,weights,n-1,w);
	int inc = helper(values,weights,n-1,w-weights[n]) +values[n];
	// return 
	int exc =helper(values,weights,n-1,w);

	return max(inc , exc);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	// if(w<=0 || n<0) return 0;
	return helper(values,weights,n,w);
}