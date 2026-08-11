# _ZN11CTcpHandler12WaitForEventEv

`CTcpHandler::WaitForEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804ef32` | `0x2e` | `0x8086096` | `0x2e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN11CTcpHandler12WaitForEventEv+0x16>
-mov    $0xffffffff,%eax
-jmp    <T> <_ZN11CTcpHandler12WaitForEventEv+0x2c>
+je     <T> <_ZN11CTcpHandler12WaitForEventEv+0x27>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    (%eax),%eax
 add    $0x18,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    0x8(%ebp),%edx
+mov    (%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
+jmp    <T> <_ZN11CTcpHandler12WaitForEventEv+0x2c>
+mov    $0xffffffff,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpHandler::WaitForEvent() */

undefined4 __thiscall CTcpHandler::_ZN11CTcpHandler12WaitForEventEv(CTcpHandler *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(int **)this + 0x18))(*(undefined4 *)this);
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp](source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp)（约第 38 行）：

```cpp
int CTcpHandler::WaitForEvent()
{
    return m_epoll ? m_epoll->WaitForEvent() : -1;
}
```
