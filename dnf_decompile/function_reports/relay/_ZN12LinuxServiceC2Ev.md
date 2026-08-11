# _ZN12LinuxServiceC2Ev

`LinuxService::LinuxService()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804c540` | `0x69` | `0x804f698` | `0x6a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
-call   <T> <_ZN11ServiceInfoC1Ev>
+call   <T> <_ZN11ServiceInfoC2Ev>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN8IServiceC1Ev>
+call   <T> <_ZN8IServiceC2Ev>
+mov    $&_ZTV12LinuxService+0x8,%edx
 mov    0x8(%ebp),%eax
-movl   $&_ZTV12LinuxService+0x8,(%eax)
+mov    %edx,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x70d(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x710(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,&_ZN12LinuxService11theInstanceE
 mov    0x8(%ebp),%eax
 add    $0x714,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* LinuxService::LinuxService() */

void __thiscall LinuxService::_ZN12LinuxServiceC2Ev(LinuxService *this)

{
  ServiceInfo::ServiceInfo((ServiceInfo *)(this + 4));
  IService::IService((IService *)this);
  *(undefined ***)this = &PTR__ZN12LinuxService15checkConfigFileEv_08070da8;
  this[0x70d] = (LinuxService)0x0;
  *(undefined4 *)(this + 0x710) = 0;
  theInstance = this;
  memset(this + 0x714,0,0x1e);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/LinuxService.cpp](source/DNFServer/GameServer/Relay/LinuxService.cpp)（约第 77 行）：

```cpp
LinuxService::LinuxService()
    : ServiceInfo(), IService()
{
    m_terminated = false;
    m_dwServiceState = 0;
    theInstance = this;
    memset(m_command, 0, 0x1e);
}
```
