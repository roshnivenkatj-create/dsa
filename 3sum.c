class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> ans;
        sort(a.begin(), a.end());

        for(int i=0; i<a.size()-2; i++) {
            if(i>0 && a[i]==a[i-1]) continue;

            int l=i+1, r=a.size()-1;

            while(l<r) {
                int s=a[i]+a[l]+a[r];

                if(s==0) {
                    ans.push_back({a[i],a[l],a[r]});

                    while(l<r && a[l]==a[l+1]) l++;
                    while(l<r && a[r]==a[r-1]) r--;

                    l++;
                    r--;
                }
                else if(s<0)
                    l++;
                else
                    r--;
            }
        }
        return ans;
    }
};