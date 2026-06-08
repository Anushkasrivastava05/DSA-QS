class Solution {
public:
bool isreqsame(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
      int freq[26]={0};
      for(int i=0;i<s1.length();i++){
          int idx=s1[i]-'a';
          freq[s1[i]-'a']++;
      }
      int winsz=s1.length();

      for(int i=0;i<s2.length();i++){
        int windi=0,indx=i;
        int windf[26]={0};
        while(windi<winsz && indx<s2.length()){
             windf[s2[indx]-'a']++;
             windi++;
             indx++;
        }
        if(isreqsame(freq,windf)){
            return true;
        }
        }
        return false;      
    }
};