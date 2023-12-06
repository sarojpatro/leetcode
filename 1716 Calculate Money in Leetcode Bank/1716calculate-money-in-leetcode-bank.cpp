class Solution {
public:
    int totalMoney(int n) {
        int div = n / 7;
        int rem = n % 7;

        int total_money = (div * 28);
        
        if( div > 0)
        {
            total_money += 7 * (div *  (div -1))/2 ;
        }
         
        switch(rem)
        {
            case 0:
                return total_money;
            case 1:
                return total_money + 1 + div;
            case 2:
                return total_money + 3 + (2 * div);
            case 3:
                return total_money + 6 + (3 * div);
            case 4:
                return total_money + 10 + (4 * div);
            case 5:
                return total_money + 15 + (5 * div);
            case 6:
                return total_money + 21 + (6 * div);

        }

        // should not be called
        return total_money;
    }
};