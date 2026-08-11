# _ZNK14CTaskScheduler10CTaskProxyltERKS0_

`CTaskScheduler::CTaskProxy::operator<(CTaskScheduler::CTaskProxy const&) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8066172` | `0x2a` | `0x80a0546` | `0x2a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,17 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x14,%esp
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK14CTaskScheduler10CTaskProxy15GetDeliveryTimeEv>
+mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK14CTaskScheduler10CTaskProxy15GetDeliveryTimeEv>
-mov    %eax,%ebx
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK14CTaskScheduler10CTaskProxy15GetDeliveryTimeEv>
 cmp    %eax,%ebx
-seta   %al
+setb   %al
 add    $0x14,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTaskScheduler::CTaskProxy::TEMPNAMEPLACEHOLDERVALUE(CTaskScheduler::CTaskProxy const&) const */

bool __thiscall
CTaskScheduler::CTaskProxy::_ZNK14CTaskScheduler10CTaskProxyltERKS0_
          (CTaskProxy *this,CTaskProxy *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = GetDeliveryTime(this);
  uVar2 = GetDeliveryTime(param_1);
  return uVar2 < uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/TaskScheduler.cpp, source/DNFServer/GameServer/Monitor/TaskScheduler.cpp, source/DNFServer/GameServer/Monitor/TaskScheduler.h, source/DNFServer/ServerCommon/DNFFileLog.h, source/DNFServer/ServerCommon/DNFFunctionLib.h, source/DNFServer/ServerCommon/Thread.h, source/DNFServer/ServerCommon/tinyxml.h, source/shared/common/include/ReverseEngineerLib.h 等 299 个文件*
