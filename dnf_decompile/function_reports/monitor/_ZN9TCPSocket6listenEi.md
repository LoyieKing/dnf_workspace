# _ZN9TCPSocket6listenEi

`TCPSocket::listen(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804f4ba` | `0x3a` | `0x8085528` | `0x38` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <listen>
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN9TCPSocket6listenEi+0x33>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jns    <T> <_ZN9TCPSocket6listenEi+0x2e>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket5closeEv>
-mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket6listenEi+0x38>
-mov    $0x1,%eax
+mov    -0xc(%ebp),%eax
+not    %eax
+shr    $0x1f,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::listen(int) */

bool __thiscall TCPSocket::_ZN9TCPSocket6listenEi(TCPSocket *this,int param_1)

{
  int iVar1;
  
  iVar1 = listen(*(int *)this,param_1);
  if (-1 >= iVar1) {
    _ZN9TCPSocket5closeEv(this);
  }
  return -1 < iVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp](source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp)（约第 262 行）：

```cpp
char TCPSocket::listen(int backlog)
{
    if (::listen(m_fd, backlog) < 0)
    {
        close();
        return 0;
    }
    return 1;
}
```
