// TODO: add the appropriate header files here


/**************************************************************
 *  ipc_create - creates a shared memory object called lab2 and
 *               returns a char pointer to the memory shared
 *               memory object.
 * 
 *  size - is the size of the memory object to create.
 *   
 ***************************************************************/
char* ipc_create(int size){
    /* shared memory file descriptor */
    int fd;
    /* pointer to shared memory obect */
    char* ptr;

    // TODO: create the shared memory object called lab2

    // TODO: configure the size of the shared memory object 

    // TODO: memory map the shared memory object */

    return ptr;
}


/**************************************************************
 * ipc_close - closes the ipc communication channel that was
 *             created with ipc_create.
 * 
 **************************************************************/
void ipc_close(){
    shm_unlink("lab2");
}