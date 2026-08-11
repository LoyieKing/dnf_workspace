# _ZN11CTcpHandler7SetPeerEPvib

`CTcpHandler::SetPeer(void*, int, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x804eeac` | `0x4a` | `0x8086016` | `0x4a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x14(%ebp),%eax
 mov    %al,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN11CTcpHandler7SetPeerEPvib+0x1c>
 mov    $0xffffffff,%eax
 jmp    <T> <_ZN11CTcpHandler7SetPeerEPvib+0x48>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    (%eax),%eax
 add    $0xc,%eax
-mov    (%eax),%ecx
-movzbl -0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-mov    %edx,0xc(%esp)
-mov    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   *%ecx
+movzbl -0xc(%ebp),%ecx
+mov    0x8(%ebp),%edx
+mov    (%edx),%edx
+mov    %ecx,0xc(%esp)
+mov    0x10(%ebp),%ecx
+mov    %ecx,0x8(%esp)
+mov    0xc(%ebp),%ecx
+mov    %ecx,0x4(%esp)
+mov    %edx,(%esp)
+call   *%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpHandler::SetPeer(void*, int, bool) */

undefined4 __thiscall
CTcpHandler::_ZN11CTcpHandler7SetPeerEPvib(CTcpHandler *this,void *param_1,int param_2,bool param_3)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(int **)this + 0xc))(*(undefined4 *)this,param_1,param_2,param_3);
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp](source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp)（约第 46 行）：

```cpp
int CTcpHandler::SetPeer(void* peer, int fd, bool flag)
{
    return m_epoll ? m_epoll->SetEpoll(peer, fd, flag) : -1;
}
```
