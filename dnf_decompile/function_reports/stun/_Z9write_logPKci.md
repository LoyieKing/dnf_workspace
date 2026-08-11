# _Z9write_logPKci

`write_log(char const*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| stun | DIFF | `0x40215c` | `0x198` | `0x402e02` | `0x19b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,99 +1,100 @@
 push   %rbp
 mov    %rsp,%rbp
 push   %rbx
 sub    $0x158,%rsp
 mov    %rdi,-0x138(%rbp)
 mov    %esi,-0x13c(%rbp)
 mov    $0x0,%edi
 call   <T> <time>
 mov    %rax,-0x28(%rbp)
 lea    -0x28(%rbp),%rdi
 call   <T> <localtime>
 mov    %rax,-0x20(%rbp)
-lea    -0x130(%rbp),%rdi
+lea    -0x130(%rbp),%rax
+mov    %rax,%rdi
 mov    $0x100,%edx
 mov    $0x0,%esi
 call   <T> <memset>
 mov    -0x20(%rbp),%rax
 mov    0xc(%rax),%ecx
 mov    -0x20(%rbp),%rax
 mov    0x10(%rax),%eax
 lea    0x1(%rax),%esi
 mov    -0x20(%rbp),%rax
 mov    0x14(%rax),%eax
 lea    0x76c(%rax),%edx
 lea    -0x130(%rbp),%rdi
 mov    %ecx,%r8d
 mov    %esi,%ecx
 mov    $"./log/STUN%4d%02d%02d.log",%esi
 mov    $0x0,%eax
 call   <T> <sprintf>
 lea    -0x130(%rbp),%rdi
 mov    $"a+",%esi
 call   <T> <fopen>
 mov    %rax,-0x18(%rbp)
 cmpq   $0x0,-0x18(%rbp)
-je     <T> <_Z9write_logPKci+0x18e>
+je     <T> <_Z9write_logPKci+0x191>
 cmpl   $0x0,-0x13c(%rbp)
-je     <T> <_Z9write_logPKci+0x121>
+je     <T> <_Z9write_logPKci+0x124>
 mov    -0x20(%rbp),%rax
 mov    (%rax),%edx
 mov    -0x20(%rbp),%rax
 mov    0x4(%rax),%ecx
 mov    -0x20(%rbp),%rax
 mov    0x8(%rax),%esi
 mov    -0x20(%rbp),%rax
 mov    0xc(%rax),%edi
 mov    -0x20(%rbp),%rax
 mov    0x10(%rax),%eax
 lea    0x1(%rax),%r10d
 mov    -0x20(%rbp),%rax
 mov    0x14(%rax),%eax
 lea    0x76c(%rax),%r11d
 mov    -0x18(%rbp),%rbx
 mov    -0x13c(%rbp),%eax
 mov    %eax,0x18(%rsp)
 mov    -0x138(%rbp),%rax
 mov    %rax,0x10(%rsp)
 mov    %edx,0x8(%rsp)
 mov    %ecx,(%rsp)
 mov    %esi,%r9d
 mov    %edi,%r8d
 mov    %r10d,%ecx
 mov    %r11d,%edx
 mov    $"[%02d/%02d/%02d %02d:%02d:%02d] %s(%d)\n",%esi
 mov    %rbx,%rdi
 mov    $0x0,%eax
 call   <T> <fprintf>
-jmp    <T> <_Z9write_logPKci+0x185>
+jmp    <T> <_Z9write_logPKci+0x188>
 mov    -0x20(%rbp),%rax
 mov    (%rax),%ecx
 mov    -0x20(%rbp),%rax
 mov    0x4(%rax),%esi
 mov    -0x20(%rbp),%rax
 mov    0x8(%rax),%r8d
 mov    -0x20(%rbp),%rax
 mov    0xc(%rax),%r10d
 mov    -0x20(%rbp),%rax
 mov    0x10(%rax),%eax
 lea    0x1(%rax),%r11d
 mov    -0x20(%rbp),%rax
 mov    0x14(%rax),%eax
 lea    0x76c(%rax),%edx
 mov    -0x18(%rbp),%rdi
 mov    -0x138(%rbp),%rax
 mov    %rax,0x10(%rsp)
 mov    %ecx,0x8(%rsp)
 mov    %esi,(%rsp)
 mov    %r8d,%r9d
 mov    %r10d,%r8d
 mov    %r11d,%ecx
 mov    $"[%02d/%02d/%02d %02d:%02d:%02d] %s\n",%esi
 mov    $0x0,%eax
 call   <T> <fprintf>
 mov    -0x18(%rbp),%rdi
 call   <T> <fclose>
 add    $0x158,%rsp
 pop    %rbx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

void write_log(char *pLog,int argv)

{
  char local_138 [264];
  time_t local_30;
  tm *local_28;
  FILE *local_20;
  
                    /* Unresolved local var: time_t currentTime@[???]
                       Unresolved local var: tm * currentTm@[???]
                       Unresolved local var: char[256] logFileName@[???]
                       Unresolved local var: FILE * pFile@[???] */
  local_30 = time((time_t *)0x0);
  local_28 = localtime(&local_30);
  memset(local_138,0,0x100);
  sprintf(local_138,"./log/STUN%4d%02d%02d.log",(ulong)(local_28->tm_year + 0x76c),
          (ulong)(local_28->tm_mon + 1),(ulong)(uint)local_28->tm_mday);
  local_20 = fopen(local_138,"a+");
  if (local_20 != (FILE *)0x0) {
    if (argv == 0) {
      fprintf(local_20,"[%02d/%02d/%02d %02d:%02d:%02d] %s\n",(ulong)(local_28->tm_year + 0x76c),
              (ulong)(local_28->tm_mon + 1),(ulong)(uint)local_28->tm_mday,
              (ulong)(uint)local_28->tm_hour,local_28->tm_min,local_28->tm_sec,pLog);
    }
    else {
      fprintf(local_20,"[%02d/%02d/%02d %02d:%02d:%02d] %s(%d)\n",(ulong)(local_28->tm_year + 0x76c)
              ,(ulong)(local_28->tm_mon + 1),(ulong)(uint)local_28->tm_mday,
              (ulong)(uint)local_28->tm_hour,local_28->tm_min,local_28->tm_sec,pLog,argv);
    }
    fclose(local_20);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/StunServer/stun_server/global_func.cpp](source/DNFServer/StunServer/stun_server/global_func.cpp)（约第 276 行）：

```cpp
void write_log(const char* pLog, int argv)
{
    time_t currentTime = time(NULL);
    tm* currentTm = localtime(&currentTime);

    char logFileName[256];
    memset(logFileName, 0, sizeof(logFileName));
    sprintf(logFileName, "./log/STUN%4d%02d%02d.log", currentTm->tm_year + 1900, currentTm->tm_mon + 1, currentTm->tm_mday);

    FILE* pFile = fopen(logFileName, "a+");
    if (pFile != NULL)
    {
        if (argv != 0)
        {
            fprintf(pFile, "[%02d/%02d/%02d %02d:%02d:%02d] %s(%d)\n", currentTm->tm_year + 1900, currentTm->tm_mon + 1, currentTm->tm_mday, currentTm->tm_hour, currentTm->tm_min, currentTm->tm_sec, pLog, argv);
        }
        else
        {
            fprintf(pFile, "[%02d/%02d/%02d %02d:%02d:%02d] %s\n", currentTm->tm_year + 1900, currentTm->tm_mon + 1, currentTm->tm_mday, currentTm->tm_hour, currentTm->tm_min, currentTm->tm_sec, pLog);
        }
        fclose(pFile);
    }
}
```
