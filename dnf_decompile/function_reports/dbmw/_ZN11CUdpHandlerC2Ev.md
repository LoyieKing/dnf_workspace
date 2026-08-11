# _ZN11CUdpHandlerC2Ev

`CUdpHandler::CUdpHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8058d9c` | `0x18` | `0x8091ea2` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0x8(%ebp),%eax
-movl   $0xffffffff,(%eax)
-mov    0x8(%ebp),%eax
-movl   $0xffffffff,0x4(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUdpHandler::CUdpHandler() */

void __thiscall CUdpHandler::_ZN11CUdpHandlerC2Ev(CUdpHandler *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFUdpHandler.cpp](source/DNFServer/GameServer/COServer/DNFUdpHandler.cpp)（约第 18 行）：

```cpp
CUdpHandler::CUdpHandler()
{
    m_sock = -1;
    m_clientSock = -1;
}
```
