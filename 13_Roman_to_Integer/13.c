#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int romanToInt(char * s)
{
    int i;
    /*
    for(i = 0; i < strlen(s); i++) {
        printf("%c ", s[i]);
    }
    */
    int idx = 0;
    int val = 0;
    while(1) {
        if(idx == strlen(s) - 1) {
            switch(s[idx]) {
            case 'I': val += 1; break;
            case 'V': val += 5; break;
            case 'X': val += 10; break;
            case 'L': val += 50; break;
            case 'C': val += 100; break;
            case 'D': val += 500; break;
            case 'M': val += 1000; break;
            default: val = val; break;
            }
            idx ++;
        }

	    else {
            char now = s[idx];
            char next = s[idx + 1];
            if(now == 'I') {
                if(next == 'V') {
                    val += 4;
                    idx += 2;
                }
                else if(next == 'X') {
                    val += 9;
                    idx += 2;
                }
                else {
                    val += 1;
                    idx += 1;
                }
            }


            else if(now == 'X') {
                if(next == 'L') {
                    val += 40;
                    idx += 2;
                }
                else if(next == 'C') {
                    val += 90;
                    idx += 2;
                }
                else {
                    val += 10;
                    idx += 1;
                }
            }


            else if(now == 'C') {
                if(next == 'D') {
                    val += 400;
                    idx += 2;
                }
                else if(next == 'M') {
                    val += 900;
                    idx += 2;
                }
                else {
                    val += 100;
                    idx += 1;
                }

            }
        

            else {
                switch(s[idx]) {
                    case 'I': val += 1; break;
                    case 'V': val += 5; break;
                    case 'X': val += 10; break;
                    case 'L': val += 50; break;
                    case 'C': val += 100; break;
                    case 'D': val += 500; break;
                    case 'M': val += 1000; break;
                    default: val = val; break;
                }
                idx ++;
            }
	    }
		


	    if (idx == strlen(s)) break;
	}
	return val;
	
}





int main()
{

    printf("%d\n", romanToInt("MCMXCIV"));
    // romanToInt("LVIII");
    return 0;

}

