# _Z14Neof_SignalLogPKc

`Neof_SignalLog(char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804c12f` | `0x148` | `0x8057eb6` | `0x150` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,87 +1,87 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x15c,%esp
+sub    $0x13c,%esp
 call   <T> <_Z11get_ms_tickv>
 movl   $0x3e8,0x8(%esp)
 movl   $0x0,0xc(%esp)
 mov    %eax,(%esp)
 mov    %edx,0x4(%esp)
 call   <T> <__divdi3>
-mov    %eax,-0x24(%ebp)
-lea    -0x24(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0x20(%ebp)
-lea    -0x124(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x40,%edx
-mov    %ebx,%edi
-mov    %edx,%ecx
-rep stos %eax,%es:(%edi)
+mov    %eax,-0x14(%ebp)
+lea    -0x118(%ebp),%edx
+mov    $0x100,%eax
+mov    %eax,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <memset>
 call   <T> <_Z12G_ScriptDatav>
 movzwl 0x4(%eax),%eax
 movzwl %ax,%edx
-mov    -0x20(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    -0x20(%ebp),%ecx
-mov    0x10(%ecx),%ecx
-lea    0x1(%ecx),%ebx
-mov    -0x20(%ebp),%ecx
-mov    0x14(%ecx),%ecx
-add    $0x76c,%ecx
+mov    -0x14(%ebp),%eax
+mov    0xc(%eax),%ecx
+mov    -0x14(%ebp),%eax
+mov    0x10(%eax),%eax
+lea    0x1(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    0x14(%eax),%eax
+add    $0x76c,%eax
 mov    %edx,0x18(%esp)
-mov    %eax,0x14(%esp)
+mov    %ecx,0x14(%esp)
 mov    %ebx,0x10(%esp)
-mov    %ecx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"./log/Relay%4d%02d%02d_T%d.log",0x8(%esp)
 movl   $0x100,0x4(%esp)
-lea    -0x124(%ebp),%eax
+lea    -0x118(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 movl   $"a+",0x4(%esp)
-lea    -0x124(%ebp),%eax
+lea    -0x118(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fopen>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_Z14Neof_SignalLogPKc+0x13d>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0x4(%eax),%ebx
-mov    -0x20(%ebp),%eax
-mov    0x8(%eax),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xc(%eax),%edx
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_Z14Neof_SignalLogPKc+0x145>
+mov    -0x14(%ebp),%eax
+mov    (%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    0x4(%eax),%esi
+mov    -0x14(%ebp),%eax
+mov    0x8(%eax),%edi
+mov    -0x14(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,-0x120(%ebp)
+mov    -0x14(%ebp),%eax
 mov    0x10(%eax),%eax
-add    $0x1,%eax
-mov    %eax,-0x12c(%ebp)
-mov    -0x20(%ebp),%eax
+lea    0x1(%eax),%edx
+mov    -0x14(%ebp),%eax
 mov    0x14(%eax),%eax
-lea    0x76c(%eax),%edi
+lea    0x76c(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    %eax,0x20(%esp)
-mov    %esi,0x1c(%esp)
-mov    %ebx,0x18(%esp)
-mov    %ecx,0x14(%esp)
-mov    %edx,0x10(%esp)
-mov    -0x12c(%ebp),%eax
-mov    %eax,0xc(%esp)
-mov    %edi,0x8(%esp)
+mov    %ebx,0x1c(%esp)
+mov    %esi,0x18(%esp)
+mov    %edi,0x14(%esp)
+mov    -0x120(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    %edx,0xc(%esp)
+mov    %ecx,0x8(%esp)
 movl   $"[%02d/%02d/%02d %02d:%02d:%02d] Signal occured: %s\n",0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fprintf>
-mov    -0x1c(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
-add    $0x15c,%esp
+add    $0x13c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* Neof_SignalLog(char const*) */

void Neof_SignalLog(char *param_1)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  char local_128 [256];
  time_t local_28;
  tm *local_24;
  FILE *local_20;
  
  bVar3 = 0;
  uVar4 = get_ms_tick();
  local_28 = __divdi3(uVar4,1000,0);
  local_24 = localtime(&local_28);
  pcVar2 = local_128;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + ((uint)bVar3 * -2 + 1) * 4;
  }
  iVar1 = G_ScriptData();
  snprintf(local_128,0x100,"./log/Relay%4d%02d%02d_T%d.log",local_24->tm_year + 0x76c,
           local_24->tm_mon + 1,local_24->tm_mday,(uint)*(ushort *)(iVar1 + 4));
  local_20 = fopen(local_128,"a+");
  if (local_20 != (FILE *)0x0) {
    fprintf(local_20,"[%02d/%02d/%02d %02d:%02d:%02d] Signal occured: %s\n",
            local_24->tm_year + 0x76c,local_24->tm_mon + 1,local_24->tm_mday,local_24->tm_hour,
            local_24->tm_min,local_24->tm_sec,param_1);
    fclose(local_20);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/SignalHandler.cpp](source/DNFServer/GameServer/Relay/SignalHandler.cpp)（约第 14 行）：

```cpp
void Neof_SignalLog(const char* msg)
{
    time_t t = get_ms_tick() / 1000;
    struct tm* tm_now = localtime(&t);
    char filename[256] = {0};
    snprintf(filename, 0x100, "./log/Relay%4d%02d%02d_T%d.log",
             tm_now->tm_year + 1900, tm_now->tm_mon + 1, tm_now->tm_mday,
             G_ScriptData()->mPortTcp);
    FILE* f = fopen(filename, "a+");
    if (f != 0)
    {
        fprintf(f, "[%02d/%02d/%02d %02d:%02d:%02d] Signal occured: %s\n",
                tm_now->tm_year + 1900, tm_now->tm_mon + 1, tm_now->tm_mday,
                tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec, msg);
        fclose(f);
    }
}
```
