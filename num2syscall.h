
#ifndef _NUM_SYSCALL_H

#define _NUM_SYSCALL_H

#if defined(X86)
#if !defined(X64)
// x86
#define MAX_SC_NO 376
const char *num2syscall[] = {
    "restart_syscall",
    "exit",
    "fork",
    "read",
    "write",
    "open",
    "close",
    "waitpid",
    "creat",
    "link",
    "unlink",
    "execve",
    "chdir",
    "time",
    "mknod",
    "chmod",
    "lchown",
    "break",
    "oldstat",
    "lseek",
    "getpid",
    "mount",
    "umount",
    "setuid",
    "getuid",
    "stime",
    "ptrace",
    "alarm",
    "oldfstat",
    "pause",
    "utime",
    "stty",
    "gtty",
    "access",
    "nice",
    "ftime",
    "sync",
    "kill",
    "rename",
    "mkdir",
    "rmdir",
    "dup",
    "pipe",
    "times",
    "prof",
    "brk",
    "setgid",
    "getgid",
    "signal",
    "geteuid",
    "getegid",
    "acct",
    "umount2",
    "lock",
    "ioctl",
    "fcntl",
    "mpx",
    "setpgid",
    "ulimit",
    "oldolduname",
    "umask",
    "chroot",
    "ustat",
    "dup2",
    "getppid",
    "getpgrp",
    "setsid",
    "sigaction",
    "sgetmask",
    "ssetmask",
    "setreuid",
    "setregid",
    "sigsuspend",
    "sigpending",
    "sethostname",
    "setrlimit",
    "getrlimit",
    "getrusage",
    "gettimeofday",
    "settimeofday",
    "getgroups",
    "setgroups",
    "select",
    "symlink",
    "oldlstat",
    "readlink",
    "uselib",
    "swapon",
    "reboot",
    "readdir",
    "mmap",
    "munmap",
    "truncate",
    "ftruncate",
    "fchmod",
    "fchown",
    "getpriority",
    "setpriority",
    "profil",
    "statfs",
    "fstatfs",
    "ioperm",
    "socketcall",
    "syslog",
    "setitimer",
    "getitimer",
    "stat",
    "lstat",
    "fstat",
    "olduname",
    "iopl",
    "vhangup",
    "idle",
    "vm86old",
    "wait4",
    "swapoff",
    "sysinfo",
    "ipc",
    "fsync",
    "sigreturn",
    "clone",
    "setdomainname",
    "uname",
    "modify_ldt",
    "adjtimex",
    "mprotect",
    "sigprocmask",
    "create_module",
    "init_module",
    "delete_module",
    "get_kernel_syms",
    "quotactl",
    "getpgid",
    "fchdir",
    "bdflush",
    "sysfs",
    "personality",
    "afs_syscall",
    "setfsuid",
    "setfsgid",
    "_llseek",
    "getdents",
    "_newselect",
    "flock",
    "msync",
    "readv",
    "writev",
    "getsid",
    "fdatasync",
    "_sysctl",
    "mlock",
    "munlock",
    "mlockall",
    "munlockall",
    "sched_setparam",
    "sched_getparam",
    "sched_setscheduler",
    "sched_getscheduler",
    "sched_yield",
    "sched_get_priority_max",
    "sched_get_priority_min",
    "sched_rr_get_interval",
    "nanosleep",
    "mremap",
    "setresuid",
    "getresuid",
    "vm86",
    "query_module",
    "poll",
    "nfsservctl",
    "setresgid",
    "getresgid",
    "prctl",
    "rt_sigreturn",
    "rt_sigaction",
    "rt_sigprocmask",
    "rt_sigpending",
    "rt_sigtimedwait",
    "rt_sigqueueinfo",
    "rt_sigsuspend",
    "pread64",
    "pwrite64",
    "chown",
    "getcwd",
    "capget",
    "capset",
    "sigaltstack",
    "sendfile",
    "getpmsg",
    "putpmsg",
    "vfork",
    "ugetrlimit",
    "mmap2",
    "truncate64",
    "ftruncate64",
    "stat64",
    "lstat64",
    "fstat64",
    "lchown32",
    "getuid32",
    "getgid32",
    "geteuid32",
    "getegid32",
    "setreuid32",
    "setregid32",
    "getgroups32",
    "setgroups32",
    "fchown32",
    "setresuid32",
    "getresuid32",
    "setresgid32",
    "getresgid32",
    "chown32",
    "setuid32",
    "setgid32",
    "setfsuid32",
    "setfsgid32",
    "pivot_root",
    "mincore",
    "madvise",
    "madvise1",
    "getdents64",
    "fcntl64",
    "",
    "gettid",
    "readahead",
    "setxattr",
    "lsetxattr",
    "fsetxattr",
    "getxattr",
    "lgetxattr",
    "fgetxattr",
    "listxattr",
    "llistxattr",
    "flistxattr",
    "removexattr",
    "lremovexattr",
    "fremovexattr",
    "tkill",
    "sendfile64",
    "futex",
    "sched_setaffinity",
    "sched_getaffinity",
    "set_thread_area",
    "get_thread_area",
    "io_setup",
    "io_destroy",
    "io_getevents",
    "io_submit",
    "io_cancel",
    "fadvise64",
    "set_zone_reclaim",
    "exit_group",
    "lookup_dcookie",
    "epoll_create",
    "epoll_ctl",
    "epoll_wait",
    "remap_file_pages",
    "set_tid_address",
    "timer_create",
    "timer_settime",
    "timer_gettime",
    "timer_getoverrun",
    "timer_delete",
    "clock_settime",
    "clock_gettime",
    "clock_getres",
    "clock_nanosleep",
    "statfs64",
    "fstatfs64",
    "tgkill",
    "utimes",
    "fadvise64_64",
    "vserver",
    "mbind",
    "get_mempolicy",
    "set_mempolicy",
    "mq_open",
    "mq_unlink",
    "mq_timedsend",
    "mq_timedreceive",
    "mq_notify",
    "mq_getsetattr",
    "sys_kexec_load",
    "waitid",
    "",
    "add_key",
    "request_key",
    "keyctl",
    "ioprio_set",
    "ioprio_get",
    "inotify_init",
    "inotify_add_watch",
    "inotify_rm_watch",
    "migrate_pages",
    "openat",
    "mkdirat",
    "mknodat",
    "fchownat",
    "futimesat",
    "fstatat64",
    "unlinkat",
    "renameat",
    "linkat",
    "symlinkat",
    "readlinkat",
    "fchmodat",
    "faccessat",
    "pselect6",
    "ppoll",
    "unshare",
    "set_robust_list",
    "get_robust_list",
    "splice",
    "sync_file_range",
    "tee",
    "vmsplice",
    "move_pages",
    "getcpu",
    "epoll_pwait",
    "utimensat",
    "signalfd",
    "timerfd_create",
    "eventfd",
    "fallocate",
    "timerfd_settime",
    "timerfd_gettime",
    "signalfd4",
    "eventfd2",
    "epoll_create1",
    "dup3",
    "pipe2",
    "inotify_init1",
    "preadv",
    "pwritev",
    "rt_tgsigqueueinfo",
    "perf_event_open",
    "recvmmsg",
    "fanotify_init",
    "fanotify_mark",
    "prlimit64",
    "name_to_handle_at",
    "open_by_handle_at",
    "clock_adjtime",
    "syncfs",
    "sendmmsg",
    "setns",
    "process_vm_readv",
    "process_vm_writev",
    "kcmp",
    "finit_module",
    "sched_setattr",
    "sched_getattr",
    "renameat2",
    "seccomp",
    "getrandom",
    "memfd_create",
    "bpf",
    "execveat",
    "socket",
    "socketpair",
    "bind",
    "connect",
    "listen",
    "accept4",
    "getsockopt",
    "setsockopt",
    "getsockname",
    "getpeername",
    "sendto",
    "sendmsg",
    "recvfrom",
    "recvmsg",
    "shutdown",
    "userfaultfd",
    "membarrier",
    "mlock2",
};
#else
// x64
#define MAX_SC_NO 231
const char *num2syscall[] = {"read",
                             "write",
                             "open",
                             "close",
                             "stat",
                             "fstat",
                             "lstat",
                             "poll",
                             "lseek",
                             "mmap",
                             "mprotect",
                             "munmap",
                             "brk",
                             "rt_sigaction",
                             "rt_sigprocmask",
                             "rt_sigreturn",
                             "ioctl",
                             "pread64",
                             "pwrite64",
                             "readv",
                             "writev",
                             "access",
                             "pipe",
                             "select",
                             "sched_yield",
                             "mremap",
                             "msync",
                             "mincore",
                             "madvise",
                             "shmget",
                             "shmat",
                             "shmctl",
                             "dup",
                             "dup2",
                             "pause",
                             "nanosleep",
                             "getitimer",
                             "alarm",
                             "setitimer",
                             "getpid",
                             "sendfile",
                             "socket",
                             "connect",
                             "accept",
                             "sendto",
                             "recvfrom",
                             "sendmsg",
                             "recvmsg",
                             "shutdown",
                             "bind",
                             "listen",
                             "getsockname",
                             "getpeername",
                             "socketpair",
                             "setsockopt",
                             "getsockopt",
                             "clone",
                             "fork",
                             "vfork",
                             "execve",
                             "exit",
                             "wait4",
                             "kill",
                             "uname",
                             "semget",
                             "semop",
                             "semctl",
                             "shmdt",
                             "msgget",
                             "msgsnd",
                             "msgrcv",
                             "msgctl",
                             "fcntl",
                             "flock",
                             "fsync",
                             "fdatasync",
                             "truncate",
                             "ftruncate",
                             "getdents",
                             "getcwd",
                             "chdir",
                             "fchdir",
                             "rename",
                             "mkdir",
                             "rmdir",
                             "creat",
                             "link",
                             "unlink",
                             "symlink",
                             "readlink",
                             "chmod",
                             "fchmod",
                             "chown",
                             "fchown",
                             "lchown",
                             "umask",
                             "gettimeofday",
                             "getrlimit",
                             "getrusage",
                             "sysinfo",
                             "times",
                             "ptrace",
                             "getuid",
                             "syslog",
                             "getgid",
                             "setuid",
                             "setgid",
                             "geteuid",
                             "getegid",
                             "setpgid",
                             "getppid",
                             "getpgrp",
                             "setsid",
                             "setreuid",
                             "setregid",
                             "getgroups",
                             "setgroups",
                             "setresuid",
                             "getresuid",
                             "setresgid",
                             "getresgid",
                             "getpgid",
                             "setfsuid",
                             "setfsgid",
                             "getsid",
                             "capget",
                             "capset",
                             "rt_sigpending",
                             "rt_sigtimedwait",
                             "rt_sigqueueinfo",
                             "rt_sigsuspend",
                             "sigaltstack",
                             "utime",
                             "mknod",
                             "uselib",
                             "personality",
                             "ustat",
                             "statfs",
                             "fstatfs",
                             "sysfs",
                             "getpriority",
                             "setpriority",
                             "sched_setparam",
                             "sched_getparam",
                             "sched_setscheduler",
                             "sched_getscheduler",
                             "sched_get_priority_max",
                             "sched_get_priority_min",
                             "sched_rr_get_interval",
                             "mlock",
                             "munlock",
                             "mlockall",
                             "munlockall",
                             "vhangup",
                             "modify_ldt",
                             "pivot_root",
                             "_sysctl",
                             "prctl",
                             "arch_prctl",
                             "adjtimex",
                             "setrlimit",
                             "chroot",
                             "sync",
                             "acct",
                             "settimeofday",
                             "mount",
                             "umount2",
                             "swapon",
                             "swapoff",
                             "reboot",
                             "sethostname",
                             "setdomainname",
                             "iopl",
                             "ioperm",
                             "create_module",
                             "init_module",
                             "delete_module",
                             "get_kernel_syms",
                             "query_module",
                             "quotactl",
                             "nfsservctl",
                             "getpmsg",
                             "putpmsg",
                             "afs_syscall",
                             "tuxcall",
                             "security",
                             "gettid",
                             "readahead",
                             "setxattr",
                             "lsetxattr",
                             "fsetxattr",
                             "getxattr",
                             "lgetxattr",
                             "fgetxattr",
                             "listxattr",
                             "llistxattr",
                             "flistxattr",
                             "removexattr",
                             "lremovexattr",
                             "fremovexattr",
                             "tkill",
                             "time",
                             "futex",
                             "sched_setaffinity",
                             "sched_getaffinity",
                             "set_thread_area",
                             "io_setup",
                             "io_destroy",
                             "io_getevents",
                             "io_submit",
                             "io_cancel",
                             "get_thread_area",
                             "lookup_dcookie",
                             "epoll_create",
                             "epoll_ctl_old",
                             "epoll_wait_old",
                             "remap_file_pages",
                             "getdents64",
                             "set_tid_address",
                             "restart_syscall",
                             "semtimedop",
                             "fadvise64",
                             "timer_create",
                             "timer_settime",
                             "timer_gettime",
                             "timer_getoverrun",
                             "timer_delete",
                             "clock_settime",
                             "clock_gettime",
                             "clock_getres",
                             "clock_nanosleep",
                             "exit_group",
                             "epoll_wait",
                             "epoll_ctl",
                             "tgkill",
                             "utimes",
                             "vserver",
                             "mbind",
                             "set_mempolicy",
                             "get_mempolicy",
                             "mq_open",
                             "mq_unlink",
                             "mq_timedsend",
                             "mq_timedreceive",
                             "mq_notify",
                             "mq_getsetattr",
                             "kexec_load",
                             "waitid",
                             "add_key",
                             "request_key",
                             "keyctl",
                             "ioprio_set",
                             "ioprio_get",
                             "inotify_init",
                             "inotify_add_watch",
                             "inotify_rm_watch",
                             "migrate_pages",
                             "openat",
                             "mkdirat",
                             "mknodat",
                             "fchownat",
                             "futimesat",
                             "newfstatat",
                             "unlinkat",
                             "renameat",
                             "linkat",
                             "symlinkat",
                             "readlinkat",
                             "fchmodat",
                             "faccessat",
                             "pselect6",
                             "ppoll",
                             "unshare",
                             "set_robust_list",
                             "get_robust_list",
                             "splice",
                             "tee",
                             "sync_file_range",
                             "vmsplice",
                             "move_pages",
                             "utimensat",
                             "epoll_pwait",
                             "signalfd",
                             "timerfd_create",
                             "eventfd",
                             "fallocate",
                             "timerfd_settime",
                             "timerfd_gettime",
                             "accept4",
                             "signalfd4",
                             "eventfd2",
                             "epoll_create1",
                             "dup3",
                             "pipe2",
                             "inotify_init1",
                             "preadv",
                             "pwritev",
                             "rt_tgsigqueueinfo",
                             "perf_event_open",
                             "recvmmsg",
                             "fanotify_init",
                             "fanotify_mark",
                             "prlimit64",
                             "name_to_handle_at",
                             "open_by_handle_at",
                             "clock_adjtime",
                             "syncfs",
                             "sendmmsg",
                             "setns",
                             "getcpu",
                             "process_vm_readv",
                             "process_vm_writev",
                             "kcmp",
                             "finit_module",
                             "sched_setattr",
                             "sched_getattr",
                             "renameat2",
                             "seccomp",
                             "getrandom",
                             "memfd_create",
                             "kexec_file_load",
                             "bpf"};
#endif
#else
#ifdef AARCH64
// arm64
#define MAX_SC_NO 280
const char *num2syscall[] = {
    "io_setup",
    "io_destroy",
    "io_submit",
    "io_cancel",
    "io_getevents",
    "setxattr",
    "lsetxattr",
    "fsetxattr",
    "getxattr",
    "lgetxattr",
    "fgetxattr",
    "listxattr",
    "llistxattr",
    "flistxattr",
    "removexattr",
    "lremovexattr",
    "fremovexattr",
    "getcwd",
    "lookup_dcookie",
    "eventfd2",
    "epoll_create1",
    "epoll_ctl",
    "epoll_pwait",
    "dup",
    "dup3",
    "__NR3264_fcntl",
    "inotify_init1",
    "inotify_add_watch",
    "inotify_rm_watch",
    "ioctl",
    "ioprio_set",
    "ioprio_get",
    "flock",
    "mknodat",
    "mkdirat",
    "unlinkat",
    "symlinkat",
    "linkat",
    "renameat",
    "umount2",
    "mount",
    "pivot_root",
    "nfsservctl",
    "__NR3264_statfs",
    "__NR3264_fstatfs",
    "__NR3264_truncate",
    "__NR3264_ftruncate",
    "fallocate",
    "faccessat",
    "chdir",
    "fchdir",
    "chroot",
    "fchmod",
    "fchmodat",
    "fchownat",
    "fchown",
    "openat",
    "close",
    "vhangup",
    "pipe2",
    "quotactl",
    "getdents64",
    "__NR3264_lseek",
    "read",
    "write",
    "readv",
    "writev",
    "pread64",
    "pwrite64",
    "preadv",
    "pwritev",
    "__NR3264_sendfile",
    "pselect6",
    "ppoll",
    "signalfd4",
    "vmsplice",
    "splice",
    "tee",
    "readlinkat",
    "__NR3264_fstatat",
    "__NR3264_fstat",
    "sync",
    "fsync",
    "fdatasync",
    "sync_file_range",
    "timerfd_create",
    "timerfd_settime",
    "timerfd_gettime",
    "utimensat",
    "acct",
    "capget",
    "capset",
    "personality",
    "exit",
    "exit_group",
    "waitid",
    "set_tid_address",
    "unshare",
    "futex",
    "set_robust_list",
    "get_robust_list",
    "nanosleep",
    "getitimer",
    "setitimer",
    "kexec_load",
    "init_module",
    "delete_module",
    "timer_create",
    "timer_gettime",
    "timer_getoverrun",
    "timer_settime",
    "timer_delete",
    "clock_settime",
    "clock_gettime",
    "clock_getres",
    "clock_nanosleep",
    "syslog",
    "ptrace",
    "sched_setparam",
    "sched_setscheduler",
    "sched_getscheduler",
    "sched_getparam",
    "sched_setaffinity",
    "sched_getaffinity",
    "sched_yield",
    "sched_get_priority_max",
    "sched_get_priority_min",
    "sched_rr_get_interval",
    "restart_syscall",
    "kill",
    "tkill",
    "tgkill",
    "sigaltstack",
    "rt_sigsuspend",
    "rt_sigaction",
    "rt_sigprocmask",
    "rt_sigpending",
    "rt_sigtimedwait",
    "rt_sigqueueinfo",
    "rt_sigreturn",
    "setpriority",
    "getpriority",
    "reboot",
    "setregid",
    "setgid",
    "setreuid",
    "setuid",
    "setresuid",
    "getresuid",
    "setresgid",
    "getresgid",
    "setfsuid",
    "setfsgid",
    "times",
    "setpgid",
    "getpgid",
    "getsid",
    "setsid",
    "getgroups",
    "setgroups",
    "uname",
    "sethostname",
    "setdomainname",
    "getrlimit",
    "setrlimit",
    "getrusage",
    "umask",
    "prctl",
    "getcpu",
    "gettimeofday",
    "settimeofday",
    "adjtimex",
    "getpid",
    "getppid",
    "getuid",
    "geteuid",
    "getgid",
    "getegid",
    "gettid",
    "sysinfo",
    "mq_open",
    "mq_unlink",
    "mq_timedsend",
    "mq_timedreceive",
    "mq_notify",
    "mq_getsetattr",
    "msgget",
    "msgctl",
    "msgrcv",
    "msgsnd",
    "semget",
    "semctl",
    "semtimedop",
    "semop",
    "shmget",
    "shmctl",
    "shmat",
    "shmdt",
    "socket",
    "socketpair",
    "bind",
    "listen",
    "accept",
    "connect",
    "getsockname",
    "getpeername",
    "sendto",
    "recvfrom",
    "setsockopt",
    "getsockopt",
    "shutdown",
    "sendmsg",
    "recvmsg",
    "readahead",
    "brk",
    "munmap",
    "mremap",
    "add_key",
    "request_key",
    "keyctl",
    "clone",
    "execve",
    "__NR3264_mmap",
    "__NR3264_fadvise64",
    "swapon",
    "swapoff",
    "mprotect",
    "msync",
    "mlock",
    "munlock",
    "mlockall",
    "munlockall",
    "mincore",
    "madvise",
    "remap_file_pages",
    "mbind",
    "get_mempolicy",
    "set_mempolicy",
    "migrate_pages",
    "move_pages",
    "rt_tgsigqueueinfo",
    "perf_event_open",
    "accept4",
    "recvmmsg",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "wait4",
    "prlimit64",
    "fanotify_init",
    "fanotify_mark",
    "name_to_handle_at",
    "open_by_handle_at",
    "clock_adjtime",
    "syncfs",
    "setns",
    "sendmmsg",
    "process_vm_readv",
    "process_vm_writev",
    "kcmp",
    "finit_module",
    "sched_setattr",
    "sched_getattr",
    "renameat2",
    "seccomp",
    "getrandom",
    "memfd_create",
    "bpf",
};
#else
// arm
#define MAX_SC_NO 385
const char *num2syscall[] = {
    "restart_syscall",
    "exit",
    "fork",
    "read",
    "write",
    "open",
    "close",
    "",
    "creat",
    "link",
    "unlink",
    "execve",
    "chdir",
    "time",
    "mknod",
    "chmod",
    "lchown",
    "",
    "",
    "lseek",
    "getpid",
    "mount",
    "umount",
    "setuid",
    "getuid",
    "stime",
    "ptrace",
    "alarm",
    "",
    "pause",
    "utime",
    "",
    "",
    "access",
    "nice",
    "",
    "sync",
    "kill",
    "rename",
    "mkdir",
    "rmdir",
    "dup",
    "pipe",
    "times",
    "",
    "brk",
    "setgid",
    "getgid",
    "",
    "geteuid",
    "getegid",
    "acct",
    "umount2",
    "",
    "ioctl",
    "fcntl",
    "",
    "setpgid",
    "",
    "",
    "umask",
    "chroot",
    "ustat",
    "dup2",
    "getppid",
    "getpgrp",
    "setsid",
    "sigaction",
    "",
    "",
    "setreuid",
    "setregid",
    "sigsuspend",
    "sigpending",
    "sethostname",
    "setrlimit",
    "getrlimit",
    "getrusage",
    "gettimeofday",
    "settimeofday",
    "getgroups",
    "setgroups",
    "select",
    "symlink",
    "",
    "readlink",
    "uselib",
    "swapon",
    "reboot",
    "readdir",
    "mmap",
    "munmap",
    "truncate",
    "ftruncate",
    "fchmod",
    "fchown",
    "getpriority",
    "setpriority",
    "",
    "statfs",
    "fstatfs",
    "",
    "socketcall",
    "syslog",
    "setitimer",
    "getitimer",
    "stat",
    "lstat",
    "fstat",
    "",
    "",
    "vhangup",
    "",
    "syscall",
    "wait4",
    "swapoff",
    "sysinfo",
    "ipc",
    "fsync",
    "sigreturn",
    "clone",
    "setdomainname",
    "uname",
    "",
    "adjtimex",
    "mprotect",
    "sigprocmask",
    "",
    "init_module",
    "delete_module",
    "",
    "quotactl",
    "getpgid",
    "fchdir",
    "bdflush",
    "sysfs",
    "personality",
    "",
    "setfsuid",
    "setfsgid",
    "_llseek",
    "getdents",
    "_newselect",
    "flock",
    "msync",
    "readv",
    "writev",
    "getsid",
    "fdatasync",
    "_sysctl",
    "mlock",
    "munlock",
    "mlockall",
    "munlockall",
    "sched_setparam",
    "sched_getparam",
    "sched_setscheduler",
    "sched_getscheduler",
    "sched_yield",
    "sched_get_priority_max",
    "sched_get_priority_min",
    "sched_rr_get_interval",
    "nanosleep",
    "mremap",
    "setresuid",
    "getresuid",
    "",
    "",
    "poll",
    "nfsservctl",
    "setresgid",
    "getresgid",
    "prctl",
    "rt_sigreturn",
    "rt_sigaction",
    "rt_sigprocmask",
    "rt_sigpending",
    "rt_sigtimedwait",
    "rt_sigqueueinfo",
    "rt_sigsuspend",
    "pread64",
    "pwrite64",
    "chown",
    "getcwd",
    "capget",
    "capset",
    "sigaltstack",
    "sendfile",
    "",
    "",
    "vfork",
    "ugetrlimit",
    "mmap2",
    "truncate64",
    "ftruncate64",
    "stat64",
    "lstat64",
    "fstat64",
    "lchown32",
    "getuid32",
    "getgid32",
    "geteuid32",
    "getegid32",
    "setreuid32",
    "setregid32",
    "getgroups32",
    "setgroups32",
    "fchown32",
    "setresuid32",
    "getresuid32",
    "setresgid32",
    "getresgid32",
    "chown32",
    "setuid32",
    "setgid32",
    "setfsuid32",
    "setfsgid32",
    "getdents64",
    "pivot_root",
    "mincore",
    "madvise",
    "fcntl64",
    "",
    "",
    "gettid",
    "readahead",
    "setxattr",
    "lsetxattr",
    "fsetxattr",
    "getxattr",
    "lgetxattr",
    "fgetxattr",
    "listxattr",
    "llistxattr",
    "flistxattr",
    "removexattr",
    "lremovexattr",
    "fremovexattr",
    "tkill",
    "sendfile64",
    "futex",
    "sched_setaffinity",
    "sched_getaffinity",
    "io_setup",
    "io_destroy",
    "io_getevents",
    "io_submit",
    "io_cancel",
    "exit_group",
    "lookup_dcookie",
    "epoll_create",
    "epoll_ctl",
    "epoll_wait",
    "remap_file_pages",
    "",
    "",
    "set_tid_address",
    "timer_create",
    "timer_settime",
    "timer_gettime",
    "timer_getoverrun",
    "timer_delete",
    "clock_settime",
    "clock_gettime",
    "clock_getres",
    "clock_nanosleep",
    "statfs64",
    "fstatfs64",
    "tgkill",
    "utimes",
    "fadvise64",
    "pciconfig_iobase",
    "pciconfig_read",
    "pciconfig_write",
    "mq_open",
    "mq_unlink",
    "mq_timedsend",
    "mq_timedreceive",
    "mq_notify",
    "mq_getsetattr",
    "waitid",
    "socket",
    "bind",
    "connect",
    "listen",
    "accept",
    "getsockname",
    "getpeername",
    "socketpair",
    "send",
    "sendto",
    "recv",
    "recvfrom",
    "shutdown",
    "setsockopt",
    "getsockopt",
    "sendmsg",
    "recvmsg",
    "semop",
    "semget",
    "semctl",
    "msgsnd",
    "msgrcv",
    "msgget",
    "msgctl",
    "shmat",
    "shmdt",
    "shmget",
    "shmctl",
    "add_key",
    "request_key",
    "keyctl",
    "semtimedop",
    "vserver",
    "ioprio_set",
    "ioprio_get",
    "inotify_init",
    "inotify_add_watch",
    "inotify_rm_watch",
    "mbind",
    "get_mempolicy",
    "set_mempolicy",
    "openat",
    "mkdirat",
    "mknodat",
    "fchownat",
    "futimesat",
    "fstatat64",
    "unlinkat",
    "renameat",
    "linkat",
    "symlinkat",
    "readlinkat",
    "fchmodat",
    "faccessat",
    "pselect6",
    "ppoll",
    "unshare",
    "set_robust_list",
    "get_robust_list",
    "splice",
    "arm_sync_file_range",
    "tee",
    "vmsplice",
    "move_pages",
    "getcpu",
    "epoll_pwait",
    "kexec_load",
    "utimensat",
    "signalfd",
    "timerfd_create",
    "eventfd",
    "fallocate",
    "timerfd_settime",
    "timerfd_gettime",
    "signalfd4",
    "eventfd2",
    "epoll_create1",
    "dup3",
    "pipe2",
    "inotify_init1",
    "preadv",
    "pwritev",
    "rt_tgsigqueueinfo",
    "perf_event_open",
    "recvmmsg",
    "accept4",
    "fanotify_init",
    "fanotify_mark",
    "prlimit64",
    "name_to_handle_at",
    "open_by_handle_at",
    "clock_adjtime",
    "syncfs",
    "sendmmsg",
    "setns",
    "process_vm_readv",
    "process_vm_writev",
    "kcmp",
    "finit_module",
    "sched_setattr",
    "sched_getattr",
    "renameat2",
    "seccomp",
    "getrandom",
    "memfd_create",
};
#endif
#endif

#endif
