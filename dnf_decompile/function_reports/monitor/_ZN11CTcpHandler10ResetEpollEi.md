# _ZN11CTcpHandler10ResetEpollEi

`CTcpHandler::ResetEpoll(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804f0a2` | `0x3b` | `0x8084ac6` | `0x35` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN11CTcpHandler10ResetEpollEi+0x16>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN11CTcpHandler10ResetEpollEi+0x39>
+jmp    <T> <_ZN11CTcpHandler10ResetEpollEi+0x33>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    (%eax),%eax
 add    $0x10,%eax
-mov    (%eax),%ecx
-mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   *%ecx
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    (%edx),%edx
+mov    0xc(%ebp),%ecx
+mov    %ecx,0x4(%esp)
+mov    %edx,(%esp)
+call   *%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpHandler::ResetEpoll(int) */

undefined4 __thiscall CTcpHandler::_ZN11CTcpHandler10ResetEpollEi(CTcpHandler *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(int **)this + 0x10))(*(undefined4 *)this,param_1);
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp](source/DNFServer/GameServer/DBMW/DNFTcpHandler.cpp)（约第 42 行）：

```cpp
int CTcpHandler::ResetEpoll(int flag)
{
    return m_epoll ? m_epoll->ResetEpoll(flag) : -1;
}
```
