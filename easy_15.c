#include <stdio.h>

// проекции кирпича
/*			b				c
   ******************************************    *****************
 a *             сторона № 2                *   a*  сторона № 1  *
   *                                        *    *               *
   ******************************************    *****************
 			b
   ******************************************
   *                                        *
   *                                        *
 c *            сторона № 3                 *
   *                                        *
   *                                        *
   ******************************************
   bx = a;
   by = b;
   bz = c
*/

int main(int argc, char** argv)  {

    int bx, by, bz; //длинна ширина высота
    int hx, hy;
    printf("enter information about brick --> ");
    scanf("%i %i %i", &bx, &by, &bz);
    printf("enter information about hole --> ");
    scanf("%i %i", &hx, &hy);
    
    int s = 4;
    if (bz <= hx && by <= hy || bz <= hy && by <= hx) {
	s = 3;
    }
    if (bx <= hx && by <= hy || bx <= hy && by <= hx) {
	s = 2;
    }
    if (bz <= hx && bx <= hy || bz <= hy && bx <= hx) {
	s = 1;
    }

    switch (s) {
	case(1):
	    printf("Brick went into the hole by the first party\n");
	    break;
 	case(2):
	    printf("Brick went into the hole by the second party\n");
            break;
	case(3):
	    printf("Brick went into the hole by the third party\n");
	    break;
	case(4):
	    printf("Brick did not pass through the hole\n");
	    break;
    }

    return 0;
}
