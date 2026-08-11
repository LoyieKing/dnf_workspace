# _ZN13CTcpNetSystem12WaitForEventEv

`CTcpNetSystem::WaitForEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8053154` | `0x15` | `0x80a7f3a` | `0x28` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,9 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN13CTcpNetSystem12WaitForEventEv+0x21>
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CTcpHandler12WaitForEventEv>
+jmp    <T> <_ZN13CTcpNetSystem12WaitForEventEv+0x26>
+mov    $0xffffffff,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpNetSystem::WaitForEvent() */

void __thiscall CTcpNetSystem::_ZN13CTcpNetSystem12WaitForEventEv(CTcpNetSystem *this)

{
  CTcpHandler::_ZN11CTcpHandler12WaitForEventEv(*(CTcpHandler **)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp](source/DNFServer/GameServer/DBMW/TcpNetSystem.cpp)（约第 246 行）：

```cpp
int CTcpNetSystem::WaitForEvent()
{
    return m_tcpHandler->WaitForEvent();
}
```
