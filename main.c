/*
 * main.c
 *
 *  Created on: 21-Sep-2016
 *      Author: user
 */


#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t start;
	time_t t;
	time_t last;
    time(&t);

    start = ctime(&start);
    printf("Today's date and time : %s",ctime(&t));
    while()
    {

    }

    return 0;

}
