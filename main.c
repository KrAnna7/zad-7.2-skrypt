#include <stdio.h>
#include <stdlib.h>
struct trojkat{
	float a,b,c;
};

typedef struct trojkat troj;

 void fun(struct trojkat troj1, struct trojkat *troj2){
	*troj2=troj1;
}

int main() {
	struct trojkat troj1;
	troj1.a=2.4;
	troj1.b=3.7;
	troj1.c=4.5;
	struct trojkat *troj2;
	troj2=malloc(sizeof(struct trojkat));
	fun(troj1,troj2);
	printf("%f\t %f\t %f\n",troj1.a,troj1.b,troj1.c);
	printf("%f\t %f\t %f\t", troj2->a,troj2->b,troj2->c);
	free(troj2);
	return 0;
}
