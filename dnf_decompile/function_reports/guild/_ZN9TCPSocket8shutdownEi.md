# _ZN9TCPSocket8shutdownEi

`TCPSocket::shutdown(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804f530` | `0xd` | `0x8086a12` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,6 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-cmp    $0xffffffff,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::shutdown(int) */

undefined4 TCPSocket::_ZN9TCPSocket8shutdownEi(int param_1)

{
  return *(undefined4 *)param_1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp](source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp)（约第 189 行）：

```cpp
int TCPSocket::shutdown(int how)
{
    m_sock == -1;
    return m_sock;
}
```
