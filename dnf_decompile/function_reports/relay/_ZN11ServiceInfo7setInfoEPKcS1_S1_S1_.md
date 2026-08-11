# _ZN11ServiceInfo7setInfoEPKcS1_S1_S1_

`ServiceInfo::setInfo(char const*, char const*, char const*, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804cade` | `0x10f` | `0x804ef00` | `0x10c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,67 +1,67 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x38>
+je     <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x37>
 mov    0x8(%ebp),%eax
-lea    0x100(%eax),%edx
+add    $0x100,%eax
 movl   $0xff,0x8(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x1ff(%eax)
-jmp    <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x42>
+jmp    <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x41>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x100(%eax)
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x74>
+je     <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x72>
 mov    0x8(%ebp),%eax
-lea    0x200(%eax),%edx
+add    $0x200,%eax
 movl   $0xff,0x8(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x2ff(%eax)
-jmp    <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x7e>
+jmp    <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x7c>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x200(%eax)
 cmpl   $0x0,0x14(%ebp)
-je     <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0xb0>
+je     <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0xad>
 mov    0x8(%ebp),%eax
-lea    0x300(%eax),%edx
+add    $0x300,%eax
 movl   $0xff,0x8(%esp)
-mov    0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    0x14(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x3ff(%eax)
-jmp    <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0xba>
+jmp    <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0xb7>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x300(%eax)
 cmpl   $0x0,0x18(%ebp)
-je     <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x103>
-mov    0x8(%ebp),%eax
-lea    0x400(%eax),%edx
+je     <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x100>
+mov    0x8(%ebp),%edx
+add    $0x400,%edx
 movl   $0xff,0x8(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x4ff(%eax)
 mov    0x8(%ebp),%eax
 add    $0x400,%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11ServiceInfo14setPIDFileNameEPKc>
-jmp    <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x10d>
+jmp    <T> <_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_+0x10a>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x400(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* ServiceInfo::setInfo(char const*, char const*, char const*, char const*) */

void __thiscall
ServiceInfo::_ZN11ServiceInfo7setInfoEPKcS1_S1_S1_
          (ServiceInfo *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  if (param_1 == (char *)0x0) {
    this[0x100] = (ServiceInfo)0x0;
  }
  else {
    strncpy((char *)(this + 0x100),param_1,0xff);
    this[0x1ff] = (ServiceInfo)0x0;
  }
  if (param_2 == (char *)0x0) {
    this[0x200] = (ServiceInfo)0x0;
  }
  else {
    strncpy((char *)(this + 0x200),param_2,0xff);
    this[0x2ff] = (ServiceInfo)0x0;
  }
  if (param_3 == (char *)0x0) {
    this[0x300] = (ServiceInfo)0x0;
  }
  else {
    strncpy((char *)(this + 0x300),param_3,0xff);
    this[0x3ff] = (ServiceInfo)0x0;
  }
  if (param_4 == (char *)0x0) {
    this[0x400] = (ServiceInfo)0x0;
  }
  else {
    strncpy((char *)(this + 0x400),param_4,0xff);
    this[0x4ff] = (ServiceInfo)0x0;
    _ZN11ServiceInfo14setPIDFileNameEPKc(this,(char *)(this + 0x400));
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/ChannelOld/DNFChannelBridge/LinuxService.cpp, source/ChannelOld/DNFChannelServer/LinuxService.cpp, source/DNFServer/GameServer/Relay/LinuxService.cpp, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/LinuxService.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h 等 340 个文件*
