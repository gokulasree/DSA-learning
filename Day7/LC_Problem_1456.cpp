class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' ||ch=='i' || ch=='o'||ch=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int n=s.size();
        int maxcount=INT_MIN;
        int count=0;
        int i=0;
        int j=0; 
        while(j<n){
            // sliding window solution (opti. soln)
            if(isVowel(s[j])){
                count++;
            }
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                maxcount=max(count,maxcount);
                if(isVowel(s[i])){
                  count--;
                }
            i++;
            j++;
            }
        }
        return maxcount;
        // brute force solution
        // for(int i=0;i<n-k;i++){
        //     int count=0;
        //     for(int j=i;j<i+k;j++){
        //         if(isVowel(s[j])){
        //             count++;
        //         }
        //         maxcount=max(count,maxcount);
        //     }
        // }
        // return maxcount;
    }
};