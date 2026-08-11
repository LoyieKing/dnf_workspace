# _ZN12LinuxServiceD1Ev

`LinuxService::~LinuxService()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804c5aa` | `0xe` | `0x804ee48` | `0xf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,6 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
+mov    $&_ZTV12LinuxService+0x8,%edx
 mov    0x8(%ebp),%eax
-movl   $&_ZTV12LinuxService+0x8,(%eax)
+mov    %edx,(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* LinuxService::~LinuxService() */

void __thiscall LinuxService::_ZN12LinuxServiceD1Ev(LinuxService *this)

{
  *(undefined ***)this = &PTR__ZN12LinuxService15checkConfigFileEv_08070da8;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/LinuxService.cpp](source/DNFServer/GameServer/Relay/LinuxService.cpp)（约第 86 行）：

```cpp
LinuxService::~LinuxService()
{
}
```
