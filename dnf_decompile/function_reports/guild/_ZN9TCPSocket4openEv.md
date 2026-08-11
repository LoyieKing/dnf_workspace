# _ZN9TCPSocket4openEv

`TCPSocket::open()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804f1f2` | `0x5c` | `0x8086424` | `0x60` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 movl   $0x0,0x8(%esp)
 movl   $0x1,0x4(%esp)
 movl   $0x2,(%esp)
 call   <T> <socket>
 mov    0x8(%ebp),%edx
 mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN9TCPSocket4openEv+0x55>
+jne    <T> <_ZN9TCPSocket4openEv+0x48>
 call   <T> <__errno_location>
 mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"Could not create a TDP socket : %d\n",(%esp)
 call   <T> <printf>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+cmp    $0xffffffff,%eax
+je     <T> <_ZN9TCPSocket4openEv+0x59>
+mov    $0x1,%eax
+jmp    <T> <_ZN9TCPSocket4openEv+0x5e>
 mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket4openEv+0x5a>
-mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::open() */

bool __thiscall TCPSocket::_ZN9TCPSocket4openEv(TCPSocket *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = socket(2,1,0);
  *(int *)this = iVar1;
  iVar1 = *(int *)this;
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    printf("Could not create a TDP socket : %d\n",*piVar2);
  }
  return iVar1 != -1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp](source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp)（约第 94 行）：

```cpp
bool TCPSocket::open()
{
    m_sock = socket(2, 1, 0);
    if (m_sock == -1)
    {
        printf("Could not create a TDP socket : %d\n", errno);
    }
    if (m_sock != -1)
    {
        return true;
    }
    return false;
}
```
