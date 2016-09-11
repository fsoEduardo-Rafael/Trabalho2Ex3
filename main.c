#include "util.h"


int main(){

	pthread_create(&q03a, NULL, qa, NULL);
	pthread_join(q03a, NULL);
}