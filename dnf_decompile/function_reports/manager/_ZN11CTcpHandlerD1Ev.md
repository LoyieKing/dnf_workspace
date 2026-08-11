# _ZN11CTcpHandlerD1Ev

`CTcpHandler::~CTcpHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x80547b6` | `0x39` | `0x8061416` | `0x39` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,24 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN11CTcpHandlerD1Ev+0x37>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN11CTcpHandlerD1Ev+0x2e>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    0x8(%ebp),%edx
+mov    (%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpHandler::~CTcpHandler() */

void __thiscall CTcpHandler::_ZN11CTcpHandlerD1Ev(CTcpHandler *this)

{
  if (*(int *)this != 0) {
    if (*(int *)this != 0) {
      (**(code **)(**(int **)this + 4))(*(undefined4 *)this);
    }
    *(undefined4 *)this = 0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp](source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp)（约第 30 行）：

```cpp
CTcpHandler::~CTcpHandler()
{
    if (m_epoll)
    {
        delete m_epoll;
        m_epoll = 0;
    }
}
```
