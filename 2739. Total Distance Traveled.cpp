class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int distance = 0 ;

        while ( mainTank ) {

            if ( mainTank / 5 ) {

                if ( additionalTank > 0 ) {
                    additionalTank--;
                    mainTank++;
                }

                distance += 50 ;
                mainTank -= 5 ;
            }
            else {
                distance += mainTank * 10 ;
                return distance ;
            }
        }

        return distance ;
    }
};
