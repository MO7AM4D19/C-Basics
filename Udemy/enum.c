#include <stdio.h>
void main()
{
    enum company{GOOGLE, FACEBOOK, XEROX, YAHOO,EBAY, MICROSOFT};
    enum company one = XEROX, two = GOOGLE, three = EBAY;
    printf("%d \n %d \n %d \n",one,two,three);
}