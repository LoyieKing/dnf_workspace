# _ZN3AppC1Ev

`App::App()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | NEAR | `0x804a21c` | `0x1c` | `0x804db26` | `0x1c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN12LinuxServiceC1Ev>
+call   <T> <_ZN12LinuxServiceC2Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV3App+0x8,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* App::App() */

void __thiscall App::_ZN3AppC1Ev(App *this)

{
  LinuxService::_ZN12LinuxServiceC2Ev((LinuxService *)this);
  *(undefined ***)this = &PTR__ZN12LinuxService15checkConfigFileEv_08070568;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/DNFRelayServer.cpp](source/DNFServer/GameServer/Relay/DNFRelayServer.cpp)（约第 18 行）：

```cpp
App::App()
    : LinuxService()
{
}
```
