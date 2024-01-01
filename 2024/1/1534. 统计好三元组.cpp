class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ans=0;
        int len = arr.size();
        for(int i=0;i<=len;i++){
            for(int j=i+1;j<len;j++){
                for(int k=j+1;k<len;k++){
                    vector<int> tmp;
                    tmp.push_back(arr[i]);
                    tmp.push_back(arr[j]);
                    tmp.push_back(arr[k]);
                    if(checkTriple(tmp,a,b,c)){
                        ans += 1;
                    }
                    tmp.clear();
                }
            }
        }
        return ans;
    }
    bool checkTriple(vector<int>& arr,int a,int b,int c){
        if(abs(arr[0]-arr[1])<=a && abs(arr[1]-arr[2])<=b&&abs(arr[0]-arr[2])<=c){
            return true;
        }else{
            return false;
        }
    }
};