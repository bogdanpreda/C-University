#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2, b=2, c=1, d=0, e=4, i = 2, j = 4;
    printf("%d\n", a++ / ++c * --e );
    printf("%d\n",  --b * c++ -a  );
    printf("%d\n",  -b - --c  );
    printf("%d\n",  e / --a * b++ /c++);
    printf("%d\n",  e / --a * b++ / c++  );
    printf("%d\n", a %= b = d = 1 + e /2  );
    printf("%d\n", a++ / ++c * --e );
    return 0;
}
