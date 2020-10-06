#include <wasi/api.h>
#include <stdint.h>

__wasi_errno_t __fence() {
  return __wasi_fence();
}

__wasi_errno_t __clflush(void* addr) {
  return __wasi_clflush(addr);
}

uint64_t __rdtsc() {
  uint64_t out;
   (void)__wasi_rdtsc(&out);
   return out;
}

void* __get_host_stack_ptr() {
  void *out;
  (void)__wasi_get_host_stack_ptr(&out);
  return out;
}
