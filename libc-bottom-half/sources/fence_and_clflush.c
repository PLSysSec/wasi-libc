#include <wasi/api.h>

__wasi_errno_t __fence() {
  return __wasi_fence();
}

__wasi_errno_t __clflush(void* addr) {
  return __wasi_clflush(addr);
}
