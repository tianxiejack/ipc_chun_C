
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include "errno.h"
#include <string.h>

/* Create and delete shared memory: */
key_t sharedKeyGet(char* inPath,int proj_id);
int sharedMemoryGet(key_t key, int size);
int sharedMemoryCreate(key_t key, int size);
int sharedMemoryCreateOrGet(key_t key, int size);
int sharedMemoryCreateIfGone(key_t key, int size);
int sharedMemoryDelete(int shmid);

/* Attach / detach memory from process: */
void* sharedMemoryAttach(int shmid,int shm_perm);
int sharedMemoryDetatch(const void* shmaddr);

/* Prevent shared memory from being swapped in / out: */
int sharedMemoryLock(int shmid);
int sharedMemoryUnlock(int shmid);

