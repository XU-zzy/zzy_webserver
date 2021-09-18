//
// Latest edit by TeeKee on 2017/7/23.
//

#ifndef RIO_H
#define RIO_H

#include <sys/types.h>
#define RIO_BUFSIZE 8192

typedef struct{
    int rio_fd;             /* descriptor for this internal buf */
    ssize_t rio_cnt;        /* unread bytes in internal buf */
    char *rio_bufptr;       /* next unread byte in internal buf */
    char rio_buf[RIO_BUFSIZE]; /* internal buffer */
}rio_t;

ssize_t rio_readn(int fd, void *usrbuf, size_t n);
ssize_t rio_writen(int fd, void *usrbuf, size_t n);
void rio_readinitb(rio_t *rp, int fd); 
ssize_t rio_readnb(rio_t *rp, void *usrbuf, size_t n);
ssize_t rio_readlineb(rio_t *rp, void *usrbuf, size_t maxlen);

#endif
