# _ZN17ChannelServiceApp7UDPUserC1Ev

`ChannelServiceApp::UDPUser::UDPUser()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | NEAR | `0x805f8e8` | `0x13` | `0x8056442` | `0x13` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp13UDPUserStatesC1Ev>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void UDPUser(UDPUser * this) */

void __thiscall ChannelServiceApp::UDPUser::_ZN17ChannelServiceApp7UDPUserC1Ev(UDPUser *this)

{
  UDPUserStates::UDPUserStates(&this->super_UDPUserStates);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelServer/UDPUser.cpp](source/ChannelOld/DNFChannelServer/UDPUser.cpp)（约第 7 行）：

```cpp
ChannelServiceApp::UDPUser::UDPUser()
{
}
```
