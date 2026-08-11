# _ZN17CUdpNetworkThreadC2Ev

`CUdpNetworkThread::CUdpNetworkThread()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80971f4` | `0x44` | `0x8063a7e` | `0x1c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterfaceC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV17CUdpNetworkThread+0x8,(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x10(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x14(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x18(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUdpNetworkThread::CUdpNetworkThread() */

void __thiscall CUdpNetworkThread::_ZN17CUdpNetworkThreadC2Ev(CUdpNetworkThread *this)

{
  CThreadInterface::_ZN16CThreadInterfaceC2Ev((CThreadInterface *)this);
  *(undefined ***)this = &PTR__ZN16CThreadInterface4stopEv_08131c00;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFNetworkThread.cpp](source/DNFServer/GameServer/Guild/DNFNetworkThread.cpp)（约第 70 行）：

```cpp
CUdpNetworkThread::CUdpNetworkThread()
{
    m_app = 0;
    m_queue = 0;
    m_lock = 0;
    m_bLock = 0;
}
```
