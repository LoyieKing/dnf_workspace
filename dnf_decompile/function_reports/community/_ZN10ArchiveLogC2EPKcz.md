# _ZN10ArchiveLogC2EPKcz

`ArchiveLog::ArchiveLog(char const*, ...)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | NEAR | `0x804aa78` | `0xe0` | `0x804aa6a` | `0xe0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x1028,%esp
 mov    $&_ZGVZN10ArchiveLogC1EPKczE11archive_log,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_ZN10ArchiveLogC1EPKcz+0x5f>
 movl   $&_ZGVZN10ArchiveLogC1EPKczE11archive_log,(%esp)
 call   <T> <__cxa_guard_acquire>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN10ArchiveLogC1EPKcz+0x5f>
 movl   $&_ZZN10ArchiveLogC1EPKczE11archive_log,(%esp)
 call   <T> <_ZN11CArchiveLogC1Ev>
 movl   $&_ZGVZN10ArchiveLogC1EPKczE11archive_log,(%esp)
 call   <T> <__cxa_guard_release>
 mov    $&_ZN11CArchiveLogD2Ev,%eax
-movl   $&data#09e56f88(.rodata),0x8(%esp)
+movl   $&data#a8fb72ec(.data),0x8(%esp)
 movl   $&_ZZN10ArchiveLogC1EPKczE11archive_log,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_atexit>
 movzbl &_ZZN10ArchiveLogC1EPKczE11bArchiveLog,%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10ArchiveLogC1EPKcz+0x88>
 movl   $"log/Log",0x4(%esp)
 movl   $&_ZZN10ArchiveLogC1EPKczE11archive_log,(%esp)
 call   <T> <_ZN11CArchiveLog13CreateLogFileEPKc>
 movb   $0x1,&_ZZN10ArchiveLogC1EPKczE11bArchiveLog
 movl   $0x1000,0x8(%esp)
 movl   $0x0,0x4(%esp)
 lea    -0x100c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 lea    0x10(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x100c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <vsprintf>
 lea    -0x100c(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $&_ZZN10ArchiveLogC1EPKczE11archive_log,(%esp)
 call   <T> <_ZN11CArchiveLog8WriteLogEPKc>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* ArchiveLog::ArchiveLog(char const*, ...) */

void __thiscall ArchiveLog::_ZN10ArchiveLogC2EPKcz(ArchiveLog *this,char *param_1,...)

{
  int iVar1;
  char local_1010 [4096];
  undefined1 *local_10;
  
  if (ArchiveLog(char_const*,...)::archive_log == '\0') {
    iVar1 = __cxa_guard_acquire(&ArchiveLog(char_const*,...)::archive_log);
    if (iVar1 != 0) {
      CArchiveLog::CArchiveLog((CArchiveLog *)ArchiveLog(char_const*,...)::archive_log);
      __cxa_guard_release(&ArchiveLog(char_const*,...)::archive_log);
      __cxa_atexit(CArchiveLog::~CArchiveLog,ArchiveLog(char_const*,...)::archive_log,&__dso_handle)
      ;
    }
  }
  if (ArchiveLog(char_const*,...)::bArchiveLog != '\x01') {
    CArchiveLog::CreateLogFile((CArchiveLog *)ArchiveLog(char_const*,...)::archive_log,"log/Log");
    ArchiveLog(char_const*,...)::bArchiveLog = '\x01';
  }
  memset(local_1010,0,0x1000);
  local_10 = &stack0x0000000c;
  vsprintf(local_1010,param_1,local_10);
  CArchiveLog::WriteLog((CArchiveLog *)ArchiveLog(char_const*,...)::archive_log,local_1010);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/Community/ArchiveLog.cpp](source/Community/ArchiveLog.cpp)（约第 20 行）：

```cpp
ArchiveLog::ArchiveLog(const char *log, ...) {
    char buffer[LINE_SIZE];
    static CArchiveLog archive_log;
    static bool bArchiveLog;

    if (!bArchiveLog) {
        archive_log.CreateLogFile("log/Log");
        bArchiveLog = true;
    }

    memset(buffer, 0, 4096);

    va_list args;
    va_start(args, log);
    vsprintf(buffer, log, args);
    va_end(args);

    archive_log.WriteLog(buffer);
}
```
