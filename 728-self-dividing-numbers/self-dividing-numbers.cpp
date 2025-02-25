class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int num = left; num <= right; num++){
            bool selfDividing = true;
            int workNum = num;
            while(workNum){
                // If the nth digit is 0 or the nth digit of "num" cannot divide "num"
                if(workNum%10==0 || num%(workNum%10)!=0){
                    selfDividing = false;
                    break;
                }
                // If workNum < 10, there won't be a next iteration
                workNum/=10;
            }
            if(selfDividing) result.push_back(num);
        }
        return result;
    }
};