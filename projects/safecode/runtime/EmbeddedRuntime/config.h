/* include/safecode/Config/config.h.  Generated from config.h.in by configure.  */
/* include/llvm/Config/config.h.in.  Generated from autoconf/configure.ac by autoheader.  */

/* Define if dlopen(0) will open the symbols of the program */
/* #undef CAN_DLOPEN_SELF */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define if threads enabled */
/* #undef ENABLE_THREADS */

/* Define to 1 if you have `alloca', as a function or macro. */
/* #undef HAVE_ALLOCA */

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have the `argz_append' function. */
/* #undef HAVE_ARGZ_APPEND */

/* Define to 1 if you have the `argz_create_sep' function. */
/* #undef HAVE_ARGZ_CREATE_SEP */

/* Define to 1 if you have the <argz.h> header file. */
/* #undef HAVE_ARGZ_H */

/* Define to 1 if you have the `argz_insert' function. */
/* #undef HAVE_ARGZ_INSERT */

/* Define to 1 if you have the `argz_next' function. */
/* #undef HAVE_ARGZ_NEXT */

/* Define to 1 if you have the `argz_stringify' function. */
/* #undef HAVE_ARGZ_STRINGIFY */

/* Define to 1 if you have the <assert.h> header file. */
/* #undef HAVE_ASSERT_H */

/* Define to 1 if you have the `backtrace' function. */
/* #undef HAVE_BACKTRACE */

/* Define to 1 if you have the `bcopy' function. */
/* #undef HAVE_BCOPY */

/* Does not have bi-directional iterator */
/* #undef HAVE_BI_ITERATOR */

/* Define to 1 if you have the `ceilf' function. */
/* #undef HAVE_CEILF */

/* Define to 1 if you have the `closedir' function. */
/* #undef HAVE_CLOSEDIR */

/* Define to 1 if you have the <ctype.h> header file. */
/* #undef HAVE_CTYPE_H */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_DIRENT_H */

/* Define if you have the GNU dld library. */
/* #undef HAVE_DLD */

/* Define to 1 if you have the <dld.h> header file. */
/* #undef HAVE_DLD_H */

/* Define to 1 if you have the `dlerror' function. */
/* #undef HAVE_DLERROR */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define if dlopen() is available on this platform. */
/* #undef HAVE_DLOPEN */

/* Define to 1 if you have the <dl.h> header file. */
/* #undef HAVE_DL_H */

/* Define if you have the _dyld_func_lookup function. */
/* #undef HAVE_DYLD */

/* Define to 1 if you have the <errno.h> header file. */
/* #undef HAVE_ERRNO_H */

/* Define to 1 if the system has the type `error_t'. */
/* #undef HAVE_ERROR_T */

/* Define to 1 if you have the <execinfo.h> header file. */
/* #undef HAVE_EXECINFO_H */

/* Define to 1 if you have the <fcntl.h> header file. */
/* #undef HAVE_FCNTL_H */

/* Define to 1 if you have the `fgetc_unlocked' function. */
/*#define HAVE_FGETC_UNLOCKED 1*/

/* Define to 1 if you have the `fwrite_unlocked' function. */
/*#define HAVE_FWRITE_UNLOCKED 1*/

/* Define to 1 if you have the `mempcpy' function. */
#define HAVE_MEMPCPY 1

/* Define to 1 if you have the `strcasestr' function. */
/*#define HAVE_STRCASESTR 1*/

/* Define to 1 if you have the `stpcpy' function. */
/*#define HAVE_STPCPY 1*/

/* Define to 1 if you have the `strnlen' function. */
/*#define HAVE_STRNLEN 1*/

/* Set to 1 if the finite function is found in <ieeefp.h> */
/* #undef HAVE_FINITE_IN_IEEEFP_H */

/* Define to 1 if you have the `floorf' function. */
/* #undef HAVE_FLOORF */

/* Does not have forward iterator */
/* #undef HAVE_FWD_ITERATOR */

/* Define to 1 if you have the `getcwd' function. */
/* #undef HAVE_GETCWD */

/* Define to 1 if you have the `getpagesize' function. */
/* #undef HAVE_GETPAGESIZE */

/* Define to 1 if you have the `getrusage' function. */
/* #undef HAVE_GETRUSAGE */

/* Define to 1 if you have the `gettimeofday' function. */
/* #undef HAVE_GETTIMEOFDAY */

/* Does not have <hash_map> */
/* #undef HAVE_GLOBAL_HASH_MAP */

/* Does not have hash_set in global namespace */
/* #undef HAVE_GLOBAL_HASH_SET */

/* Does not have ext/hash_map */
/* #undef HAVE_GNU_EXT_HASH_MAP */

/* Does not have hash_set in gnu namespace */
/* #undef HAVE_GNU_EXT_HASH_SET */

/* Define if the Graphviz program is available */
/* #undef HAVE_GRAPHVIZ */

/* Define if the gv program is available */
/* #undef HAVE_GV */

/* Define to 1 if you have the `index' function. */
/* #undef HAVE_INDEX */

/* Define to 1 if the system has the type `int64_t'. */
/* #undef HAVE_INT64_T */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `isatty' function. */
/* #undef HAVE_ISATTY */

/* Set to 1 if the isinf function is found in <cmath> */
/* #undef HAVE_ISINF_IN_CMATH */

/* Set to 1 if the isinf function is found in <math.h> */
/* #undef HAVE_ISINF_IN_MATH_H */

/* Set to 1 if the isnan function is found in <cmath> */
/* #undef HAVE_ISNAN_IN_CMATH */

/* Set to 1 if the isnan function is found in <math.h> */
/* #undef HAVE_ISNAN_IN_MATH_H */

/* Define if you have the libdl library or equivalent. */
/* #undef HAVE_LIBDL */

/* Define to 1 if you have the `elf' library (-lelf). */
/* #undef HAVE_LIBELF */

/* Define to 1 if you have the `m' library (-lm). */
/* #undef HAVE_LIBM */

/* Define to 1 if you have the `pthread' library (-lpthread). */
/* #undef HAVE_LIBPTHREAD */

/* Define to 1 if you have the <limits.h> header file. */
/* #undef HAVE_LIMITS_H */

/* Define to 1 if you have the <link.h> header file. */
/* #undef HAVE_LINK_H */

/* Define if you can use -Wl,-R. to pass -R. to the linker, in order to add
   the current directory to the dynamic linker search path. */
/* #undef HAVE_LINK_R */

/* Define if lt_dlopen() is available on this platform */
/* #undef HAVE_LT_DLOPEN */

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
/* #undef HAVE_MACH_O_DYLD_H */

/* Define if mallinfo() is available on this platform. */
/* #undef HAVE_MALLINFO */

/* Define to 1 if you have the <malloc.h> header file. */
/* #undef HAVE_MALLOC_H */

/* Define to 1 if you have the <malloc/malloc.h> header file. */
/* #undef HAVE_MALLOC_MALLOC_H */

/* Define to 1 if you have the `malloc_zone_statistics' function. */
/* #undef HAVE_MALLOC_ZONE_STATISTICS */

/* Define to 1 if you have the `memcpy' function. */
/* #undef HAVE_MEMCPY */

/* Define to 1 if you have the `memmove' function. */
/* #undef HAVE_MEMMOVE */

/* Define to 1 if you have the <memory.h> header file. */
/*#define HAVE_MEMORY_H 1*/

/* Define to 1 if you have the `mkdtemp' function. */
/* #undef HAVE_MKDTEMP */

/* Define to 1 if you have the `mkstemp' function. */
/* #undef HAVE_MKSTEMP */

/* Define to 1 if you have the `mktemp' function. */
/* #undef HAVE_MKTEMP */

/* Define to 1 if you have a working `mmap' system call. */
/* #undef HAVE_MMAP */

/* Define if mmap() uses MAP_ANONYMOUS to map anonymous pages, or undefine if
   it uses MAP_ANON */
/* #undef HAVE_MMAP_ANONYMOUS */

/* Define if mmap() can map files into memory */
/* #undef HAVE_MMAP_FILE */

/* define if the compiler implements namespaces */
/* #undef HAVE_NAMESPACES */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the `nearbyintf' function. */
/* #undef HAVE_NEARBYINTF */

/* Define to 1 if you have the `opendir' function. */
/* #undef HAVE_OPENDIR */

/* Define if libtool can extract symbol lists from object files. */
/* #undef HAVE_PRELOADED_SYMBOLS */

/* Define to have the %a format string */
/* #undef HAVE_PRINTF_A */

/* Define to 1 if you have the <pthread.h> header file. */
/* #undef HAVE_PTHREAD_H */

/* Have pthread_mutex_lock */
/* #undef HAVE_PTHREAD_MUTEX_LOCK */

/* Define to 1 if srand48/lrand48/drand48 exist in <stdlib.h> */
/* #undef HAVE_RAND48 */

/* Define to 1 if you have the `readdir' function. */
/* #undef HAVE_READDIR */

/* Define to 1 if you have the `realpath' function. */
/* #undef HAVE_REALPATH */

/* Define to 1 if you have the `rindex' function. */
/* #undef HAVE_RINDEX */

/* Define to 1 if you have the `rintf' function. */
/* #undef HAVE_RINTF */

/* Define to 1 if you have the `roundf' function. */
/* #undef HAVE_ROUNDF */

/* Define to 1 if you have the `sbrk' function. */
/* #undef HAVE_SBRK */

/* Define to 1 if you have the `setrlimit' function. */
/* #undef HAVE_SETRLIMIT */

/* Define if you have the shl_load function. */
/* #undef HAVE_SHL_LOAD */

/* Define to 1 if you have the <signal.h> header file. */
/* #undef HAVE_SIGNAL_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
/* #undef HAVE_STDIO_H */

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Does not have ext/hash_map> */
/* #undef HAVE_STD_EXT_HASH_MAP */

/* Does not have hash_set in std namespace */
/* #undef HAVE_STD_EXT_HASH_SET */

/* Set to 1 if the std::isinf function is found in <cmath> */
/* #undef HAVE_STD_ISINF_IN_CMATH */

/* Set to 1 if the std::isnan function is found in <cmath> */
/* #undef HAVE_STD_ISNAN_IN_CMATH */

/* Does not have std namespace iterator */
/* #undef HAVE_STD_ITERATOR */

/* Define to 1 if you have the `strchr' function. */
/* #undef HAVE_STRCHR */

/* Define to 1 if you have the `strcmp' function. */
/* #undef HAVE_STRCMP */

/* Define to 1 if you have the `strdup' function. */
/* #undef HAVE_STRDUP */

/* Define to 1 if you have the `strerror' function. */
/* #undef HAVE_STRERROR */

/* Define to 1 if you have the `strerror_r' function. */
/* #undef HAVE_STRERROR_R */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strrchr' function. */
/* #undef HAVE_STRRCHR */

/* Define to 1 if you have the `strtoll' function. */
/* #undef HAVE_STRTOLL */

/* Define to 1 if you have the `strtoq' function. */
/* #undef HAVE_STRTOQ */

/* Define to 1 if you have the `sysconf' function. */
/* #undef HAVE_SYSCONF */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/dl.h> header file. */
/* #undef HAVE_SYS_DL_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#undef HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if the system has the type `uint64_t'. */
/* #undef HAVE_UINT64_T */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <utime.h> header file. */
#undef HAVE_UTIME_H

/* Define to 1 if the system has the type `u_int64_t'. */
/* #undef HAVE_U_INT64_T */

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Installation directory for binary executables */
/* #undef LLVM_BINDIR */

/* Time at which LLVM was configured */
/* #undef LLVM_CONFIGTIME */

/* Installation directory for documentation */
/* #undef LLVM_DATADIR */

/* Installation directory for config files */
/* #undef LLVM_ETCDIR */

/* Installation directory for include files */
/* #undef LLVM_INCLUDEDIR */

/* Installation directory for .info files */
/* #undef LLVM_INFODIR */

/* Installation directory for libraries */
/* #undef LLVM_LIBDIR */

/* Installation directory for man pages */
/* #undef LLVM_MANDIR */

/* Define if this is Unixish platform */
/* #undef LLVM_ON_UNIX */

/* Define if this is Win32ish platform */
/* #undef LLVM_ON_WIN32 */

/* Define to path to Graphviz program if found or 'echo Graphviz' otherwise */
/* #undef LLVM_PATH_GRAPHVIZ */

/* Define to path to gv program if found or 'echo gv' otherwise */
/* #undef LLVM_PATH_GV */

/* Installation prefix directory */
/* #undef LLVM_PREFIX */

/* Define if the OS needs help to load dependent libraries for dlopen(). */
/* #undef LTDL_DLOPEN_DEPLIBS */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
/* #undef LTDL_OBJDIR */

/* Define to the name of the environment variable that determines the dynamic
   library search path. */
/* #undef LTDL_SHLIBPATH_VAR */

/* Define to the extension used for shared libraries, say, ".so". */
/* #undef LTDL_SHLIB_EXT */

/* Define to the system default library search path. */
/* #undef LTDL_SYSSEARCHPATH */

/* Define if /dev/zero should be used when mapping RWX memory, or undefine if
   its not necessary */
/* #undef NEED_DEV_ZERO_FOR_MMAP */

/* Define if dlsym() requires a leading underscore in symbol names. */
/* #undef NEED_USCORE */

/* Define to the address where bug reports for this package should be sent. */
/* #undef SC_PACKAGE_BUGREPORT */

/* Define to the full name of this package. */
/* #undef SC_PACKAGE_NAME */

/* Define to the full name and version of this package. */
/* #undef SC_PACKAGE_STRING */

/* Define to the one symbol short name of this package. */
/* #undef SC_PACKAGE_TARNAME */

/* Define to the version of this package. */
/* #undef SC_PACKAGE_VERSION */

/* Define as the return type of signal handlers (`int' or `void'). */
/* #undef RETSIGTYPE */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
/* #undef TIME_WITH_SYS_TIME */

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to a type to use for `error_t' if it is not otherwise available. */
/* #undef error_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to 1 if fopen64() is available */
/*#define HAVE_FOPEN64 1*/

/* Define to 1 if libgmp is available */
/* #undef HAVE_LIBGMP */

/* Define to 1 if libcvc3 is available */
/* #undef HAVE_LIBCVC3 */

/* Define to 1 if building for use with the Linux kernel */
/* #undef LLVA_KERNEL */

/* Define to 1 if iconv.h is available */
#define HAVE_ICONV_H 1

/* Define to 1 to enable Automatic Pool Allocation support in libLTO */
/* #undef HAVE_POOLALLOC */

