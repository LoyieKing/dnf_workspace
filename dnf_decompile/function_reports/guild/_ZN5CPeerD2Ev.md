# _ZN5CPeerD2Ev

`CPeer::~CPeer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8050e22` | `0x5b` | `0x8097c3a` | `0x13` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
-mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x181c(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1824(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1820(%eax)
-mov    0x8(%ebp),%eax
-lea    0x183c(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x1838(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1834(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocketD1Ev>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeer::~CPeer() */

void __thiscall CPeer::_ZN5CPeerD2Ev(CPeer *this)

{
  *(CPeer **)(this + 0x181c) = this + 0x1c;
  *(undefined4 *)(this + 0x1824) = 0;
  *(undefined4 *)(this + 0x1820) = 0;
  *(CPeer **)(this + 0x1838) = this + 0x183c;
  *(undefined4 *)(this + 0x1834) = 0;
  TCPSocket::~TCPSocket((TCPSocket *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/Peer.cpp](source/DNFServer/GameServer/Guild/Peer.cpp)（约第 120 行）：

```cpp
CPeer::~CPeer()
{
}
```
