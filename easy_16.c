#include <stdio.h>

void romb(char symbol,int height,int width)
{
    int position=0;
        for(int y=1;y<=height;++y)///высота
        {
            for(int x=1;x<=width;++x)///ширина
            {
                ///строим ромб
                if(x==(width/2+1+position)||x==(width/2+1-position))
                {
                    printf("%c", symbol);
                }
                else
                {
                    printf(" ");
                }
            }
	    printf("\n");
            if(y<height/2+1)position++;
            else position--;
        }
}

int main(int argc, char** argv) {

    printf("1 - '*'\n2 - '+'\n3 - '#'\n");
    int k;
    scanf("%i", &k);
    char c = '1';
    switch (k) {
	case(1):
	    c = '*';
	    break;
	case(2):
	    c = '+';
	    break;
	case(3):
	    c = '#';
	    break;
	
    }
    int h, s;
    scanf("%i %i", &h, &s);
    if((h+1) % 2 != 0 && (s+1) % 2 != 0) {
	printf("Error!!!\n");
	return 1;
    } 

    romb(c, h, s);

    return 0;
}
