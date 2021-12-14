
#INCLUDE "fatt.h"

long int fatt(long int n){
		IF (N==1) {
		RETURN 1;
		}

	ELSE {

	RETURN fatt(n*fatt(n-1));
		} 
}
