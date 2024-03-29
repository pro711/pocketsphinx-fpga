/* include/config.h.  Generated from config.h.in by configure.  */
/* include/config.h.in.  Generated from configure.in by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Use ALSA library for sound I/O */
/* #define AD_BACKEND_ALSA */

/* No interface for sound I/O */
#undef AD_BACKEND_NONE

/* Use OSS for sound I/O */
/* #undef AD_BACKEND_OSS */

/* Use WinMM interface for sound I/O */
/* #undef AD_BACKEND_WIN32 */

/* Default radix point for fixed-point */
/* #undef DEFAULT_RADIX */

/* Enable thread safety */
//#define ENABLE_THREADS /**/

/* Use Q15 fixed-point computation */
//#define FIXED16

/* Use fixed-point computation */
#define FIXED_POINT

/* Define to 1 if you have the <dlfcn.h> header file. */
//#define HAVE_DLFCN_H 1

/* Define if you have the iconv() function. */
/* #define HAVE_ICONV 1 */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `asound' library (-lasound). */
/* #define HAVE_LIBASOUND 1 */

/* Define to 1 if you have the `blas' library (-lblas). */
/* #define HAVE_LIBBLAS 1 */

/* Define to 1 if you have the `lapack' library (-llapack). */
/* #define HAVE_LIBLAPACK 1 */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `pthread' library (-lpthread). */
//#define HAVE_LIBPTHREAD 1

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* Define to 1 if you have the <memory.h> header file. */
//#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `perror' function. */
#define HAVE_PERROR 1

/* Define to 1 if you have the `popen' function. */
//#define HAVE_POPEN 1

/* Define to 1 if you have the <pthread.h> header file. */
//#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the <sndfile.h> header file. */
//#define HAVE_SNDFILE_H 1

/* Define to 1 if you have the `snprintf' function. */
//#define HAVE_SNPRINTF 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
//#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
//#define HAVE_UNISTD_H 1

/* Define as const if the declaration of iconv() needs const. */
//#define ICONV_CONST 

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* Enable debugging output */
/* #undef SPHINX_DEBUG */
#define SPHINX_DEBUG

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable matrix algebra with LAPACK */
/* #define WITH_LAPACK */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
#	define WORDS_BIGENDIAN 1
# endif
#endif


// use mfs file system
#include <mfs.h>
