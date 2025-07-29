#include <errno.h>
#include <utime.h>

#undef errno
extern int errno;

int utime(const char *filename, const struct utimbuf *buf) {
  errno = EINVAL;
  return -1;
}
