# _ZN12CApplication15Get_ServerGroupEv

`CApplication::Get_ServerGroup()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806361e` | `0x16` | `0x804f01c` | `0x27` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,9 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    0x5c(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN12CApplication15Get_ServerGroupEv+0x20>
+mov    0x8(%ebp),%eax
+mov    0x5c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig15Get_ServerGroupEv>
+jmp    <T> <_ZN12CApplication15Get_ServerGroupEv+0x25>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::Get_ServerGroup() */

void __thiscall CApplication::_ZN12CApplication15Get_ServerGroupEv(CApplication *this)

{
  CAppConfig::_ZN10CAppConfig15Get_ServerGroupEv(*(CAppConfig **)(this + 0x5c));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFApplication.cpp](source/DNFServer/GameServer/Guild/DNFApplication.cpp)（约第 436 行）：

```cpp
unsigned char CApplication::Get_ServerGroup()
{
    return m_appConfig ? m_appConfig->Get_ServerGroup() : 0;
}
```
