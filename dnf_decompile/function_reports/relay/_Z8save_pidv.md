# _Z8save_pidv

`save_pid()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804d035` | `0x150` | `0x804f748` | `0x121` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,90 +1,64 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x240,%esp
-lea    -0x2e(%ebp),%eax
-mov    $0x1e,%ebx
-mov    $0x0,%edx
-mov    %eax,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_Z8save_pidv+0x2a>
-mov    %dx,(%eax)
-add    $0x2,%eax
-sub    $0x2,%ebx
-mov    %ebx,%esi
-and    $0xfffffffc,%esi
-mov    $0x0,%ecx
-mov    %edx,(%eax,%ecx,1)
-add    $0x4,%ecx
-cmp    %esi,%ecx
-jb     <T> <_Z8save_pidv+0x34>
-add    %ecx,%eax
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_Z8save_pidv+0x4f>
-mov    %dx,(%eax)
-add    $0x2,%eax
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_Z8save_pidv+0x5d>
-mov    %dl,(%eax)
-add    $0x1,%eax
+push   %edi
+sub    $0x244,%esp
+lea    -0x2a(%ebp),%edi
+cld
+mov    $0x1e,%ecx
+mov    $0x0,%eax
+rep stos %al,%es:(%edi)
 call   <T> <_ZN12LinuxService11getInstanceEv>
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11ServiceInfo14getPIDFileNameEv>
 mov    %eax,0xc(%esp)
 movl   $"./pid/%s.pid",0x8(%esp)
 movl   $0x1e,0x4(%esp)
-lea    -0x2e(%ebp),%eax
+lea    -0x2a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 movl   $0x1a4,0x8(%esp)
 movl   $0x42,0x4(%esp)
-lea    -0x2e(%ebp),%eax
+lea    -0x2a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <open>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jns    <T> <_Z8save_pidv+0xba>
-mov    $0x0,%eax
-jmp    <T> <_Z8save_pidv+0x146>
+jns    <T> <_Z8save_pidv+0x7c>
+movl   $0x0,-0x238(%ebp)
+jmp    <T> <_Z8save_pidv+0x112>
 movl   $0x200,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x22e(%ebp),%eax
+lea    -0x22a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 call   <T> <getpid>
 mov    %eax,0xc(%esp)
 movl   $"%ld\n",0x8(%esp)
 movl   $0x200,0x4(%esp)
-lea    -0x22e(%ebp),%eax
+lea    -0x22a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-lea    -0x22e(%ebp),%eax
+lea    -0x22a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,0x8(%esp)
-lea    -0x22e(%ebp),%eax
+lea    -0x22a(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <write>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-jns    <T> <_Z8save_pidv+0x141>
+mov    %eax,-0x8(%ebp)
+cmpl   $0x0,-0x8(%ebp)
+jns    <T> <_Z8save_pidv+0x108>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <close>
-mov    $0x0,%eax
-jmp    <T> <_Z8save_pidv+0x146>
-mov    $0x1,%eax
-add    $0x240,%esp
-pop    %ebx
-pop    %esi
+movl   $0x0,-0x238(%ebp)
+jmp    <T> <_Z8save_pidv+0x112>
+movl   $0x1,-0x238(%ebp)
+mov    -0x238(%ebp),%eax
+add    $0x244,%esp
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0804d08d) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* save_pid() */

undefined4 save_pid(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  __pid_t _Var5;
  size_t __n;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  char local_232 [512];
  char local_32 [30];
  ssize_t local_14;
  int local_10;
  
  pcVar2 = local_32;
  uVar7 = 0x1e;
  bVar8 = ((uint)pcVar2 & 2) != 0;
  if (bVar8) {
    local_32[0] = '\0';
    local_32[1] = '\0';
    pcVar2 = local_32 + 2;
    uVar7 = 0x1c;
  }
  uVar6 = 0;
  do {
    pcVar1 = pcVar2 + uVar6;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar6 = uVar6 + 4;
  } while (uVar6 < (uVar7 & 0xfffffffc));
  if (!bVar8) {
    (pcVar2 + uVar6)[0] = '\0';
    (pcVar2 + uVar6)[1] = '\0';
  }
  iVar3 = LinuxService::getInstance();
  uVar4 = ServiceInfo::getPIDFileName((ServiceInfo *)(iVar3 + 4));
  snprintf(local_32,0x1e,"./pid/%s.pid",uVar4);
  local_10 = open(local_32,0x42,0x1a4);
  if (local_10 < 0) {
    uVar4 = 0;
  }
  else {
    memset(local_232,0,0x200);
    _Var5 = getpid();
    snprintf(local_232,0x200,"%ld\n",_Var5);
    __n = strlen(local_232);
    local_14 = write(local_10,local_232,__n);
    if (local_14 < 0) {
      close(local_10);
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/PIDHelper.cpp](source/DNFServer/GameServer/Relay/PIDHelper.cpp)（约第 27 行）：

```cpp
int save_pid()
{
    char path[512];
    char tmp[30] = {0};
    snprintf(tmp, 0x1e, "./pid/%s.pid",
             LinuxService::getInstance()->getPIDFileName());
    int fd = open(tmp, 0x42, 0x1a4);
    if (fd < 0)
    {
        return 0;
    }
    memset(path, 0, 0x200);
    snprintf(path, 0x200, "%ld\n", (long)getpid());
    ssize_t n = write(fd, path, strlen(path));
    if (n < 0)
    {
        close(fd);
        return 0;
    }
    return 1;
}
```
