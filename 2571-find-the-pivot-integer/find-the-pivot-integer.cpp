class Solution {
public:
    int pivotInteger(int n) {
        int start=1;
        int end=n;
        int ls=start;
        int rs=end;
        if(n==1)return n;
        while(start<end){
            if(ls<rs){
                ls+=++start;
            }
            else{
                rs+=--end;
            }
        
        if(ls==rs && start+1==end-1){
            return start+1;
        }
    }
        return -1;
    }

};