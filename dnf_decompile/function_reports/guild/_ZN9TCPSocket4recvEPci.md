# _ZN9TCPSocket4recvEPci

`TCPSocket::recv(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804f460` | `0xc6` | `0x808667c` | `0xa4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,50 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN9TCPSocket4recvEPci+0x12>
 cmpl   $0x0,0x10(%ebp)
-jg     <T> <_ZN9TCPSocket4recvEPci+0x28>
+jg     <T> <_ZN9TCPSocket4recvEPci+0x25>
 movl   $"In recv : recv buffer is null",(%esp)
 call   <T> <printf>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN9TCPSocket4recvEPci+0xc4>
+jmp    <T> <_ZN9TCPSocket4recvEPci+0xa2>
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <read>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jns    <T> <_ZN9TCPSocket4recvEPci+0x82>
+jns    <T> <_ZN9TCPSocket4recvEPci+0x73>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0xb,%eax
-je     <T> <_ZN9TCPSocket4recvEPci+0x7b>
+je     <T> <_ZN9TCPSocket4recvEPci+0x6c>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0x4,%eax
-je     <T> <_ZN9TCPSocket4recvEPci+0x7b>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-cmp    $0xb,%eax
-je     <T> <_ZN9TCPSocket4recvEPci+0x7b>
+je     <T> <_ZN9TCPSocket4recvEPci+0x6c>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN9TCPSocket4recvEPci+0xae>
+jne    <T> <_ZN9TCPSocket4recvEPci+0x9f>
 mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket4recvEPci+0xc4>
+jmp    <T> <_ZN9TCPSocket4recvEPci+0xa2>
 cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN9TCPSocket4recvEPci+0xae>
+jne    <T> <_ZN9TCPSocket4recvEPci+0x9f>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x4(%esp)
 movl   $"tcp recv : FIN recv, %s",(%esp)
 call   <T> <printf>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN9TCPSocket4recvEPci+0xc4>
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-movl   $"tcp recv ='%d'",(%esp)
-call   <T> <printf>
+jmp    <T> <_ZN9TCPSocket4recvEPci+0xa2>
 mov    -0xc(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::recv(char*, int) */

ssize_t __thiscall TCPSocket::_ZN9TCPSocket4recvEPci(TCPSocket *this,char *param_1,int param_2)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  
  if ((param_1 == (char *)0x0) || (param_2 < 1)) {
    printf("In recv : recv buffer is null");
    return -1;
  }
  sVar1 = read(*(int *)this,param_1,param_2);
  if (sVar1 < 0) {
    piVar2 = __errno_location();
    if ((((*piVar2 == 0xb) || (piVar2 = __errno_location(), *piVar2 == 4)) ||
        (piVar2 = __errno_location(), *piVar2 == 0xb)) ||
       (piVar2 = __errno_location(), *piVar2 == 0)) {
      return 0;
    }
  }
  else if (sVar1 == 0) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    printf("tcp recv : FIN recv, %s",pcVar3);
    return -1;
  }
  printf("tcp recv =\'%d\'",sVar1);
  return sVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp](source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp)（约第 161 行）：

```cpp
int TCPSocket::recv(char* buf, int len)
{
    if (buf == 0 || len < 1)
    {
        printf("In recv : recv buffer is null");
        return -1;
    }
    int r = read(m_sock, buf, len);
    if (r < 0)
    {
        if (errno == EAGAIN || errno == EINTR || errno == 0)
        {
            return 0;
        }
    }
    else if (r == 0)
    {
        printf("tcp recv : FIN recv, %s", strerror(errno));
        return -1;
    }
    return r;
}
```
