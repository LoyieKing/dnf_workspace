# _ZN12LinuxService15checkConfigFileEv

`LinuxService::checkConfigFile()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804c738` | `0xc1` | `0x804f5be` | `0x70` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x30,%esp
-lea    -0x26(%ebp),%eax
-mov    $0x1e,%ebx
-mov    $0x0,%edx
-mov    %eax,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN12LinuxService15checkConfigFileEv+0x27>
-mov    %dx,(%eax)
-add    $0x2,%eax
-sub    $0x2,%ebx
-mov    %ebx,%esi
-and    $0xfffffffc,%esi
-mov    $0x0,%ecx
-mov    %edx,(%eax,%ecx,1)
-add    $0x4,%ecx
-cmp    %esi,%ecx
-jb     <T> <_ZN12LinuxService15checkConfigFileEv+0x31>
-add    %ecx,%eax
-mov    %ebx,%ecx
-and    $0x2,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN12LinuxService15checkConfigFileEv+0x4c>
-mov    %dx,(%eax)
-add    $0x2,%eax
-mov    %ebx,%ecx
-and    $0x1,%ecx
-test   %ecx,%ecx
-je     <T> <_ZN12LinuxService15checkConfigFileEv+0x5a>
-mov    %dl,(%eax)
-add    $0x1,%eax
+push   %edi
+sub    $0x34,%esp
+lea    -0x22(%ebp),%edi
+cld
+mov    $0x1e,%ecx
+mov    $0x0,%eax
+rep stos %al,%es:(%edi)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11ServiceInfo17getConfigFileNameEv>
 mov    %eax,0xc(%esp)
 movl   $"./cfg/%s.cfg",0x8(%esp)
 movl   $0x1e,0x4(%esp)
-lea    -0x26(%ebp),%eax
+lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-lea    -0x26(%ebp),%eax
+lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <puts>
 movl   $0x0,0x4(%esp)
-lea    -0x26(%ebp),%eax
+lea    -0x22(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <access>
 test   %eax,%eax
 sete   %al
-test   %al,%al
-je     <T> <_ZN12LinuxService15checkConfigFileEv+0xb5>
-mov    $0x1,%eax
-jmp    <T> <_ZN12LinuxService15checkConfigFileEv+0xba>
-mov    $0x0,%eax
-add    $0x30,%esp
-pop    %ebx
-pop    %esi
+movzbl %al,%eax
+add    $0x34,%esp
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0804c78d) */
/* LinuxService::checkConfigFile() */

bool __thiscall LinuxService::_ZN12LinuxService15checkConfigFileEv(LinuxService *this)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char local_2a [30];
  
  pcVar2 = local_2a;
  uVar6 = 0x1e;
  bVar7 = ((uint)pcVar2 & 2) != 0;
  if (bVar7) {
    local_2a[0] = '\0';
    local_2a[1] = '\0';
    pcVar2 = local_2a + 2;
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
  uVar3 = ServiceInfo::getConfigFileName((ServiceInfo *)(this + 4));
  snprintf(local_2a,0x1e,"./cfg/%s.cfg",uVar3);
  puts(local_2a);
  iVar4 = access(local_2a,0);
  return iVar4 == 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/LinuxService.cpp](source/DNFServer/GameServer/Relay/LinuxService.cpp)（约第 95 行）：

```cpp
bool LinuxService::checkConfigFile()
{
    char path[30] = {0};
    snprintf(path, 0x1e, "./cfg/%s.cfg", getConfigFileName());
    puts(path);
    return access(path, 0) == 0;
}
```
