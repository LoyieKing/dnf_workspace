#!/usr/bin/env python3
"""df_game_r 全量 identical 判定（df_game_r ORIG 直接参照，2026-08-16 口径）：
- 参照：dnf_installer ORIG df_game_r（同二进制同编译器）
- 归一化：分支/调用目标 → <T>；大绝对地址(数据引用) → <A>；去 @plt 后缀；
  剥离两侧尾部 nop（链接对齐伪影）
- 范围：两二进制共有符号（排除 libc/libstdc++/ld 等三方；nsl 部分见
  compare_game_nsl.py，以 point 为参照）
用法：compare_game_full.py [--detail]
"""
import re, subprocess, sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from compare_common import load_disasm_cached, norm_line, norm_identical_ext

ROOT = Path('/home/loyieking/dnf_workspace')
GAME_NEW = ROOT / 'dnf_decompile/build/game/df_game_r'
GAME_ORIG = ROOT / 'dnf_installer/build/dnf_data/home/template/init/df_game_r'

PLT_RE = re.compile(r'@plt')
EXTERN_PREFIXES = ('_Znwm', '_Znam', '_ZdlPv', '_ZdaPv', '_ZSt', '_ZNSs',
                   '_ZNSt', '_ZNKSt', '_ZN3nsl', '_ZNK3nsl', '_ZTVN10__cxxab',
                   '_ZTI', '_ZTS', '_Unwind_', '__gxx_personality', '_init', '_fini',
                   '_start', 'main', '_GLOBAL__sub_I', '__libc_', '_dl_', 'printf',
                   'puts', 'putchar', 'fprintf', 'sprintf', 'snprintf', 'memcpy',
                   'memset', 'memmove', 'strcmp', 'strcpy', 'strncpy', 'strlen',
                   'strcat', 'strchr', 'strrchr', 'strstr', 'strtol', 'strtoul',
                   'malloc', 'free', 'realloc', 'calloc', 'abort', 'exit', 'rand',
                   'srand', 'time', 'localtime', 'gmtime', 'mktime', 'clock',
                   'gettimeofday', 'usleep', 'sleep', 'select', 'socket', 'bind',
                   'listen', 'accept', 'connect', 'send', 'recv', 'close', 'read',
                   'write', 'open', 'fcntl', 'ioctl', 'mmap', 'munmap', 'stat',
                   'fstat', 'lstat', 'getpid', 'getppid', 'fork', 'waitpid',
                   'pthread_', 'dlopen', 'dlsym', 'dlclose', 'dlerror', 'signal',
                   'sigaction', 'raise', 'kill', 'syslog', 'openlog', 'closelog',
                   'gethostbyname', 'getaddrinfo', 'freeaddrinfo', 'inet_', 'htons',
                   'ntohs', 'htonl', 'ntohl', 'setsockopt', 'getsockopt', 'shutdown',
                   'epoll_', 'eventfd', 'timerfd_', 'pipe', 'dup', 'dup2', 'chdir',
                   'getcwd', 'unlink', 'rename', 'access', 'mkdir', 'rmdir',
                   'setenv', 'getenv', 'unsetenv', 'isatty', 'fileno', 'fflush',
                   'fopen', 'fclose', 'fread', 'fwrite', 'fseek', 'ftell', 'rewind',
                   'feof', 'ferror', 'remove', 'tmpfile', 'tmpnam', 'atexit',
                   'atof', 'atoi', 'atol', 'strtod', 'strtof', 'strtoll', 'strtoull',
                   'abs', 'labs', 'div', 'ldiv', 'qsort', 'bsearch', 'tolower',
                   'toupper', 'isalpha', 'isdigit', 'isalnum', 'isspace', 'isupper',
                   'islower', 'isprint', 'iscntrl', 'isgraph', 'ispunct', 'isxdigit',
                   'floor', 'ceil', 'sqrt', 'pow', 'fabs', 'fmod', 'sin', 'cos',
                   'tan', 'asin', 'acos', 'atan', 'atan2', 'exp', 'log', 'log10',
                   'modf', 'frexp', 'ldexp', 'strftime', 'gmtime_r', 'localtime_r',
                   'asctime', 'ctime', 'difftime', 'rand_r', 'srand48', 'lrand48',
                   'drand48', 'mrand48', 'srandom', 'random', 'bcopy', 'bzero',
                   'index', 'rindex', 'strncat', 'strncmp', 'strcasecmp', 'strncasecmp',
                   'memcmp', 'strspn', 'strcspn', 'strpbrk', 'strtok', 'strerror',
                   'perror', 'vprintf', 'vfprintf', 'vsprintf', 'vsnprintf', 'sscanf',
                   'fscanf', 'scanf', 'snprintf', 'vscanf', 'vsscanf', 'vfscanf',
                   '_IO_', '__errno_location', '__stack_chk', '__assert', '__cxa_',
                   '_ZThn', '_ZTh8_', '_ZTh12_', '_ZTh16_', '_ZTh20_', '_ZTh24_',
                   '_ZTh28_', '_ZTh32_', '_ZTh36_', '_ZTh40_', '_ZTh44_', '_ZTh48_',
                   '_ZTh52_', '_ZTh56_', '_ZTh60_', '_ZTh64_', '_ZTVN5boost',
                   '_ZN5boost', '_ZNK5boost', '_ZN9__gnu_cxx', '_ZSt9', '_ZSt17',
                   '_ZN12_GLOBAL__N_1', '_GLOBAL__sub_I', 'std::', '_ZNSt8ios_base',
                   '_ZNSt9basic_ios', '_ZNSi', '_ZNSols', '_ZSt4cout', '_ZSt4cerr',
                   '_ZSt4endl', '_ZSt4cin', '_ZSt3cin', '_ZSt3cout', '_ZSt3cerr')


def text_syms(binp):
    out = subprocess.check_output(f"nm -S --defined-only '{binp}'", shell=True, text=True,
                                  stderr=subprocess.DEVNULL)
    r = {}
    for line in out.splitlines():
        p = line.split(None, 3)
        if len(p) < 4:
            continue
        if p[2] not in 'tTwW' or p[3].startswith('.L'):
            continue
        if p[3].startswith(EXTERN_PREFIXES):
            continue
        r[p[3]] = (int(p[1], 16), int(p[0], 16))
    return r


def clean(lines):
    """AE 归一化 + 去 @plt + 剥离尾部 nop。"""
    out = [PLT_RE.sub('', norm_identical_ext([x])[0]) for x in lines]
    while out and out[-1] == 'nop':
        out.pop()
    return out


def main():
    detail = '--detail' in sys.argv
    go = text_syms(GAME_ORIG)
    gn = text_syms(GAME_NEW)
    gd = load_disasm_cached(str(GAME_ORIG))
    nd = load_disasm_cached(str(GAME_NEW))
    common = sorted(set(gn) & set(go))
    only_orig = sorted(set(go) - set(gn))
    only_new = sorted(set(gn) - set(go))
    strict = ae = near = diff = 0
    real = []
    for name in common:
        ol = [t for a, t in gd.get(name, [])]
        nl = [t for a, t in nd.get(name, [])]
        os = [norm_line(x) for x in ol]
        ns = [norm_line(x) for x in nl]
        oe = clean(ol)
        ne = clean(nl)
        if os == ns:
            strict += 1
        elif oe == ne:
            ae += 1
        elif len(oe) == len(ne) and all(a.split()[0] == b.split()[0] for a, b in zip(oe, ne)):
            near += 1
            if detail:
                real.append((name, 'NEAR', oe, ne))
        else:
            diff += 1
            if detail:
                real.append((name, 'DIFF', oe, ne))
    print(f"共同 {len(common)}: strict={strict} ae={ae} (合计 identical={strict+ae}) "
          f"near={near} diff={diff} 非identical={len(common)-strict-ae} "
          f"仅ORIG={len(only_orig)} 仅NEW={len(only_new)}")
    if detail:
        for name, kind, oe, ne in real:
            print(f"  {kind} {name}  (orig={len(oe)} ours={len(ne)})")
    return 0


if __name__ == '__main__':
    sys.exit(main())
