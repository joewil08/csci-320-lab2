/**************************************************************
 *  ipc_create - creates a shared memory object called lab2 and
 *               returns a char pointer to the memory shared
 *               memory object.
 * 
 *  size - is the size of the memory object to create.
 *   
 ***************************************************************/
char* ipc_create(int size);


/****************************************************************
 *  elapsed_time - calculates the elapsed time given a start_time
 *                 and an end_time.
 * 
 *  start_time - is a start time given as a timeval 
 *               structure (see sys/time.h).
 * 
 *  end_time - is a end time given as a timeval structure 
 * 
 * For example:
 * 
 *      struct timeval current;
 *      gettimeofday(&current,NULL);
 * 
 *      // current.tv_sec  represents seconds
 *      // current.tv_usec represents microseconds
 *   
 *****************************************************************/
double elapsed_time(struct timeval* start_time, struct timeval* end_time);

/**************************************************************
 * ipc_close - closes the ipc communication channel that was
 *             created with ipc_create.
 * 
 **************************************************************/
void ipc_close();