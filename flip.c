// program to flip bits of a number

#include <stdio.h>


void binary (int n ) {
	
	if ( n == 0 ) {
		return;
	}
	else {
		if ( n % 2 == 0 ) {
			binary(n/2);
			printf("0");
		}
		else {
			binary(n/2);
			printf("1");
		}
	}
	
}

void flip_all ( int n ) {
	
	int i = 1;
	int n1 = n;
	binary(n1);	
	printf("\n");
	do {
		n1 = n1 ^ i;	
		i = i << 1;
	}while( i <= n );
	binary(n1);	
	printf("\n");
}	
void flip_one ( int n, int x ) {
	
	binary(n);
	printf("\n");
	n =  n ^ ( 1 << ( x - 1 ) );
	binary(n);
	printf("\n%d\n",n);
}
void check ( int n, int x ) {
	
	binary(n);
	printf("\n");
	if ( ( n & ( 1 << ( x - 1 ) ) )  != 0 ) {
		printf("ON\n");
	}
	else {
		printf("OFF\n");
	}

	
}
void position ( int n ) {	// position of only set bit
	
	int i = 1, pos = 0;
	while ( ( n & i ) == 0 ) {
		i = i << 1;
		pos++;
	}
	printf("\n%d\n",pos);
}
void main () {

	int n = 0;
	printf("enter a numbr\n");
	scanf("%d",&n);
	//flip_one(n,3);
	//flip_all(n);
	//check(n,3);
	position(n);
}
