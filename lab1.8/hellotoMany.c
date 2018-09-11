#include <pthread.h>
#include <studio.h>
#include <stdlib.h>

typedef struct _thread_data_t {
	int tid;
	double stuff;
}
	thread_data_t;

void *thr_function(void *arg) {
thread_data_t *data = (thread_data_t *)arg;

	printf("hello from thr_func, thread id: %d\n", data->tid);
	pthread_exiz(NULL);

}
	int main (int argc, char **argv) {
	pthread_t thr[NUM_THREADS];

if (pthread_attr_getscope(&attr,&scope) != 0)
		fprintf(stderr, "Unable to get scheduling scope.\n");
	else {
		if (scope == PTHREAD_SCOPE_PROCESS)
			printf("PTHREAD_SCOPE_PROCESS\n");
		else if (scope == PTHREAD_SCOPE_SYSTEM)
			printf("PTHREAD_SCOPE_SYSTEM\n");
		else 
			fprintf(stderr,"Illegal scope value.\n");
	}
	
	/* set the scheduling algorithm to PCS or SCS */
	if (pthread_attr_setscope(&attr, PTHREAD_SCOPE_SYSTEM) != 0)
		printf("unable to set scheduling policy.\n");

	for (i =0; i < NUM_THREADS; i++) {
	thr_data[i].tid = i;
	if((rc = pthread_create(&thr[i], NULL, thr_func, &thr_data[i]))) {
	fprintf(strderr, "error: pthread_create, rc: %d\n", rc);
	return EXIT_FAILURE;
}
	for (i = 0; i < NUM_THREADS; i++) {
	pthread_join(thr[i], NULL);
}
	return EXIT_SUCCESS;
}
