#include<stdio.h>
#include<stdlib.h>
#include<string.h>


	struct padst1 {
		char a;
		int b;
		char c;
	};

	struct padst2 {

		char a;
		char b;
		};

	struct padst3 {
		int a;
		int b;
	};

	struct padst4 {

		int a;
		char b;
	};


	union un {
		int a;
		char c;
		char d;
		int b;
		int e;
		int f;
	
		}
	int main()  {
		struct padst1 p1;
		struct padst2 p2;
		struct padst3 p3;
		struct padst4 p4;
		union un u1;

		
		printf("size of padst1 = %d\n", sizeof(p1));

		printf("size of padst2 = %d\n", sizeof(p2));
		printf("size of padst3 = %d\n", sizeof(p3));
		printf("size of padst4 = %d\n", sizeof(p4));
		printf("size of union = %d\n", sizeof(u1));		

		return 0;
	}

//	union u1{

//	}
