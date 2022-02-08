//using digital root logic

class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        if(num%9 == 0) return 9;
        return num%9;
        
        
    }
};

//another logic 
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while(num>0){
            sum += num%10;
            num = num/10;
           if(num == 0 && sum >9){
                num = sum;
                sum = 0;
        }
        }
        return sum;
    }
};
