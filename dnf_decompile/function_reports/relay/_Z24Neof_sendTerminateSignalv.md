# _Z24Neof_sendTerminateSignalv

`Neof_sendTerminateSignal()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804c5b8` | `0x180` | `0x8057a5e` | `0x147` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,108 +1,82 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x60,%esp
+push   %edi
+sub    $0x64,%esp
 movl   $"called Neof_sendTerminateSignal",(%esp)
 call   <T> <puts>
-lea    -0x32(%ebp),%eax
-mov    $0x1e,%ebx
-mov    $0x0,%edx
-mov    %eax,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_Z24Neof_sendTerminateSignalv+0x33>
-mov    %dx,(%eax)
-add    $0x2,%eax
-sub    $0x2,%ebx
-mov    %ebx,%esi
-and    $0xfffffffc,%esi
-mov    $0x0,%ecx
-mov    %edx,(%eax,%ecx,1)
-add    $0x4,%ecx
-cmp    %esi,%ecx
-jb     <T> <_Z24Neof_sendTerminateSignalv+0x3d>
-add    %ecx,%eax
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_Z24Neof_sendTerminateSignalv+0x58>
-mov    %dx,(%eax)
-add    $0x2,%eax
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_Z24Neof_sendTerminateSignalv+0x66>
-mov    %dl,(%eax)
-add    $0x1,%eax
+lea    -0x2e(%ebp),%edi
+cld
+mov    $0x1e,%ecx
+mov    $0x0,%eax
+rep stos %al,%es:(%edi)
 call   <T> <_ZN12LinuxService11getInstanceEv>
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11ServiceInfo14getPIDFileNameEv>
 mov    %eax,0xc(%esp)
 movl   $"pid/%s.pid",0x8(%esp)
 movl   $0x1e,0x4(%esp)
-lea    -0x32(%ebp),%eax
+lea    -0x2e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 movl   $"r",0x4(%esp)
-lea    -0x32(%ebp),%eax
+lea    -0x2e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fopen>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_Z24Neof_sendTerminateSignalv+0xce>
-lea    -0x32(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_Z24Neof_sendTerminateSignalv+0x8d>
+lea    -0x2e(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"%s process id file open 실패\n",(%esp)
 call   <T> <printf>
-mov    $0x0,%eax
-jmp    <T> <_Z24Neof_sendTerminateSignalv+0x179>
-mov    -0xc(%ebp),%eax
+movl   $0x0,-0x58(%ebp)
+jmp    <T> <_Z24Neof_sendTerminateSignalv+0x13e>
+mov    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1e,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fgets>
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <atoi>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-jg     <T> <_Z24Neof_sendTerminateSignalv+0x121>
-mov    -0xc(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jg     <T> <_Z24Neof_sendTerminateSignalv+0xe2>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"%d번의 잘못된 process id\n",(%esp)
 call   <T> <printf>
-mov    $0x0,%eax
-jmp    <T> <_Z24Neof_sendTerminateSignalv+0x179>
+movl   $0x0,-0x58(%ebp)
+jmp    <T> <_Z24Neof_sendTerminateSignalv+0x13e>
 movl   $0xf,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <kill>
+mov    %eax,-0x8(%ebp)
+cmpl   $0x0,-0x8(%ebp)
+jns    <T> <_Z24Neof_sendTerminateSignalv+0x12c>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <kill>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-jns    <T> <_Z24Neof_sendTerminateSignalv+0x169>
+call   <T> <fclose>
 mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <fclose>
-mov    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"[ret = %d ]called Neof_sendTerminateSignal() : %d번 process로 종료 signal 송신 실패",(%esp)
 call   <T> <printf>
-mov    $0x0,%eax
-jmp    <T> <_Z24Neof_sendTerminateSignalv+0x179>
-mov    -0xc(%ebp),%eax
+movl   $0x0,-0x58(%ebp)
+jmp    <T> <_Z24Neof_sendTerminateSignalv+0x13e>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
-mov    $0x1,%eax
-add    $0x60,%esp
-pop    %ebx
-pop    %esi
+movl   $0x1,-0x58(%ebp)
+mov    -0x58(%ebp),%eax
+add    $0x64,%esp
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0804c619) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Neof_sendTerminateSignal() */

undefined4 Neof_sendTerminateSignal(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char local_54 [30];
  char local_36 [30];
  int local_18;
  int local_14;
  FILE *local_10;
  
  puts("called Neof_sendTerminateSignal");
  pcVar2 = local_36;
  uVar6 = 0x1e;
  bVar7 = ((uint)pcVar2 & 2) != 0;
  if (bVar7) {
    local_36[0] = '\0';
    local_36[1] = '\0';
    pcVar2 = local_36 + 2;
    uVar6 = 0x1c;
  }
  uVar5 = 0;
  do {
    pcVar1 = pcVar2 + uVar5;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar5 = uVar5 + 4;
  } while (uVar5 < (uVar6 & 0xfffffffc));
  if (!bVar7) {
    (pcVar2 + uVar5)[0] = '\0';
    (pcVar2 + uVar5)[1] = '\0';
  }
  iVar3 = LinuxService::getInstance();
  uVar4 = ServiceInfo::getPIDFileName((ServiceInfo *)(iVar3 + 4));
  snprintf(local_36,0x1e,"pid/%s.pid",uVar4);
  local_10 = fopen(local_36,"r");
  if (local_10 == (FILE *)0x0) {
    printf(&DAT_08070aad,local_36);
    uVar4 = 0;
  }
  else {
    fgets(local_54,0x1e,local_10);
    local_14 = atoi(local_54);
    if (local_14 < 1) {
      fclose(local_10);
      printf(&DAT_08070acb,local_14);
      uVar4 = 0;
    }
    else {
      local_18 = kill(local_14,0xf);
      if (local_18 < 0) {
        fclose(local_10);
        printf(&DAT_08070ae8,local_18,local_14);
        uVar4 = 0;
      }
      else {
        fclose(local_10);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/SignalHandler.cpp](source/DNFServer/GameServer/Relay/SignalHandler.cpp)（约第 131 行）：

```cpp
bool Neof_sendTerminateSignal()
{
    puts("called Neof_sendTerminateSignal");
    char path[30] = {0};
    char buf[30];
    snprintf(path, 0x1e, "pid/%s.pid",
             LinuxService::getInstance()->getPIDFileName());
    FILE* f = fopen(path, "r");
    if (f == 0)
    {
        printf("%s process id file open \xbd\xc7\xc6\xd0\n", path);
        return false;
    }
    fgets(buf, 0x1e, f);
    int pid = atoi(buf);
    if (pid < 1)
    {
        fclose(f);
        printf("%d\xb9\xf8\xc0\xc7 \xc0\xdf\xb8\xf8\xb5\xc8 process id\n", pid);
        return false;
    }
    int r = kill(pid, 0xf);
    if (r < 0)
    {
        fclose(f);
        printf("[ret = %d ]called Neof_sendTerminateSignal() : %d\xb9\xf8 process\xb7\xce \xc1\xbe\xb7\xe1 signal \xbc\xdb\xbd\xc5 \xbd\xc7\xc6\xd0", r, pid);
        return false;
    }
    fclose(f);
    return true;
}
```
