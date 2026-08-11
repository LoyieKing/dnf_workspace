# _ZN17CTcpNetworkThreadD2Ev

`CTcpNetworkThread::~CTcpNetworkThread()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x805a20c` | `0x76` | `0x80862fa` | `0x76` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,30 +1,30 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $&_ZTV17CTcpNetworkThread+0x8,(%eax)
 mov    0x8(%ebp),%eax
+movl   $0x0,0xc(%eax)
+mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x18(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x20(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x24(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x28(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16CThreadInterfaceD1Ev>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN17CTcpNetworkThreadD1Ev+0x74>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Removing unreachable block (ram,0x0805a275) */
/* CTcpNetworkThread::~CTcpNetworkThread() */

void __thiscall CTcpNetworkThread::_ZN17CTcpNetworkThreadD2Ev(CTcpNetworkThread *this)

{
  *(undefined ***)this = &PTR_stop_08119ae0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  CThreadInterface::_ZN16CThreadInterfaceD2Ev((CThreadInterface *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpNetworkThread.cpp](source/DNFServer/GameServer/DBMW/DNFTcpNetworkThread.cpp)（约第 27 行）：

```cpp
CTcpNetworkThread::~CTcpNetworkThread() {}
```
