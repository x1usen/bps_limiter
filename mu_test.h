 /* file: minunit.h */
 #ifndef _MU_ASSERT_H_
 #define _MU_ASSERT_H_

 #define mu_assert(message, test) do { if (!(test)) return message; } while (0)
 #define mu_run_test(test) do { char *message = test(); \
                                if (message) return message; } while (0)
 #endif
