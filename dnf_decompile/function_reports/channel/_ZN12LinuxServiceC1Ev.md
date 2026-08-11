# _ZN12LinuxServiceC1Ev

`LinuxService::LinuxService()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | NEAR | `0x804b094` | `0x3c` | `0x8050598` | `0x3c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,18 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11ServiceInfoC1Ev>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8IServiceC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV12LinuxService+0x8,(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,&_ZN12LinuxService11theInstanceE
 mov    0x8(%ebp),%eax
 movb   $0x0,0x70d(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "LinuxService": ignoring overlapping field "isTerminated_" */
/* DWARF original prototype: void LinuxService(LinuxService * this) */

void __thiscall LinuxService::_ZN12LinuxServiceC1Ev(LinuxService *this)

{
  ServiceInfo::ServiceInfo(&this->super_ServiceInfo);
  IService::IService(&this->super_IService);
  (this->super_IService)._vptr_IService =
       (_func_int_varargs **)&PTR__ZN12LinuxService15checkConfigFileEv_0806ca68;
  theInstance = this;
  (this->super_ServiceInfo).field_0x709 = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Service.cpp](source/ChannelOld/DNFChannelBridge/Service.cpp)（约第 93 行）：

```cpp
LinuxService::LinuxService()
{
    theInstance = this;
    isTerminated_ = 0;
}
```
