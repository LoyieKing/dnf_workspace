# _ZN11CArchiveLog8WriteLogEPKc

`CArchiveLog::WriteLog(char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x804ad58` | `0x11b` | `0x804ac98` | `0x121` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,84 +1,86 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN11CArchiveLog8WriteLogEPKc+0x1b>
 mov    $0x0,%eax
-jmp    <T> <_ZN11CArchiveLog8WriteLogEPKc+0x114>
+jmp    <T> <_ZN11CArchiveLog8WriteLogEPKc+0x11a>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8DateTimeC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8DateTime7DiffDayERS_>
 test   %al,%al
 je     <T> <_ZN11CArchiveLog8WriteLogEPKc+0x6d>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CArchiveLog9CloseFileEv>
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CArchiveLog13CreateLogFileER8DateTime>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN11CArchiveLog8WriteLogEPKc+0x6d>
 mov    $0x0,%eax
-jmp    <T> <_ZN11CArchiveLog8WriteLogEPKc+0x114>
+jmp    <T> <_ZN11CArchiveLog8WriteLogEPKc+0x11a>
 mov    0x8(%ebp),%eax
-add    $0x4,%eax
-lea    -0x10(%ebp),%edx
-cmp    %edx,%eax
-je     <T> <_ZN11CArchiveLog8WriteLogEPKc+0x91>
+lea    0x4(%eax),%edx
+lea    -0x10(%ebp),%eax
+cmp    %eax,%edx
+je     <T> <_ZN11CArchiveLog8WriteLogEPKc+0x97>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
 movl   $0x7,0x8(%esp)
-lea    -0x10(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <memcpy>
 movzbl -0xa(%ebp),%eax
 movsbl %al,%ebx
 movzbl -0xb(%ebp),%eax
 movsbl %al,%ecx
 movzbl -0xc(%ebp),%eax
 movsbl %al,%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    0xc(%ebp),%esi
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $"[%02d:%02d:%02d] %s\r\n",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <fprintf>
 movzbl -0xa(%ebp),%eax
 movsbl %al,%ecx
 movzbl -0xb(%ebp),%eax
 movsbl %al,%edx
 movzbl -0xc(%ebp),%eax
 movsbl %al,%eax
 mov    0xc(%ebp),%ebx
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"[%02d:%02d:%02d] %s\r\n",(%esp)
 call   <T> <printf>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <fflush>
 mov    $0x1,%eax
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CArchiveLog::WriteLog(char const*) */

undefined4 __thiscall CArchiveLog::_ZN11CArchiveLog8WriteLogEPKc(CArchiveLog *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  DateTime local_14 [4];
  char local_10;
  char local_f;
  char local_e;
  
  if (*(int *)this == 0) {
    uVar2 = 0;
  }
  else {
    DateTime::DateTime(local_14);
    cVar1 = DateTime::DiffDay(local_14,(DateTime *)(this + 4));
    if (cVar1 != '\0') {
      CloseFile(this);
      cVar1 = _ZN11CArchiveLog13CreateLogFileER8DateTime(this,local_14);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    if ((DateTime *)(this + 4) != local_14) {
      memcpy((DateTime *)(this + 4),local_14,7);
    }
    fprintf(*(FILE **)this,"[%02d:%02d:%02d] %s\r\n",(int)local_10,(int)local_f,(int)local_e,param_1
           );
    printf("[%02d:%02d:%02d] %s\r\n",(int)local_10,(int)local_f,(int)local_e,param_1);
    fflush(*(FILE **)this);
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/Community/ArchiveLog.cpp](source/Community/ArchiveLog.cpp)（约第 74 行）：

```cpp
int CArchiveLog::WriteLog(const char *log) {
    if (logFile == NULL) {
        return 0;
    }

    DateTime now;
    if (now.DiffDay(this->time)) {
        // not today
        CloseFile();
        if (CreateLogFile(now) == false) {
            return 0;
        }
    }
    // 原始：仅复制 7 字节（year..sec）。
    if (&this->time != &now) {
        memcpy(&this->time, &now, 7);
    }
    fprintf(this->logFile, "[%02d:%02d:%02d] %s\r\n", (int)now.hour, (int)now.min, (int)now.sec, log);
    printf("[%02d:%02d:%02d] %s\r\n", (int)now.hour, (int)now.min, (int)now.sec, log);
    fflush(this->logFile);

    return 1;
}
```
