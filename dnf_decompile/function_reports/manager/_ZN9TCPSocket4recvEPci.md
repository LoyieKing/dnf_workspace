# _ZN9TCPSocket4recvEPci

`TCPSocket::recv(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8054da4` | `0xc6` | `0x8061f76` | `0xbf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,58 +1,56 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN9TCPSocket4recvEPci+0x12>
 cmpl   $0x0,0x10(%ebp)
 jg     <T> <_ZN9TCPSocket4recvEPci+0x28>
 movl   $"In recv : recv buffer is null",(%esp)
 call   <T> <printf>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN9TCPSocket4recvEPci+0xc4>
+jmp    <T> <_ZN9TCPSocket4recvEPci+0xbd>
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <read>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jns    <T> <_ZN9TCPSocket4recvEPci+0x82>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jns    <T> <_ZN9TCPSocket4recvEPci+0xa7>
 call   <T> <__errno_location>
 mov    (%eax),%eax
-cmp    $0xb,%eax
-je     <T> <_ZN9TCPSocket4recvEPci+0x7b>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-cmp    $0x4,%eax
-je     <T> <_ZN9TCPSocket4recvEPci+0x7b>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-cmp    $0xb,%eax
-je     <T> <_ZN9TCPSocket4recvEPci+0x7b>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN9TCPSocket4recvEPci+0xae>
-mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket4recvEPci+0xc4>
-cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN9TCPSocket4recvEPci+0xae>
-call   <T> <__errno_location>
-mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0xb,-0xc(%ebp)
+je     <T> <_ZN9TCPSocket4recvEPci+0x68>
+cmpl   $0x4,-0xc(%ebp)
+je     <T> <_ZN9TCPSocket4recvEPci+0x68>
+cmpl   $0xb,-0xc(%ebp)
+jne    <T> <_ZN9TCPSocket4recvEPci+0x95>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN9TCPSocket4recvEPci+0x73>
+mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN9TCPSocket4recvEPci+0xbd>
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x4(%esp)
 movl   $"tcp recv : FIN recv, %s",(%esp)
 call   <T> <printf>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN9TCPSocket4recvEPci+0xc4>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN9TCPSocket4recvEPci+0xbd>
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN9TCPSocket4recvEPci+0xa0>
+mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN9TCPSocket4recvEPci+0xbd>
+mov    $0x0,%eax
+jmp    <T> <_ZN9TCPSocket4recvEPci+0xbd>
+mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"tcp recv ='%d'",(%esp)
 call   <T> <printf>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
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

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp](source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp)（约第 91 行）：

```cpp
int TCPSocket::recv(char* buf, int len)
{
    if (!buf || len <= 0)
    {
        printf("In recv : recv buffer is null");
        return -1;
    }
    int n = read(m_fd, buf, len);
    if (n < 0)
    {
        int e = errno;
        if (e == 0xb || e == 0x4 || e == 0xb)
        {
            if (n != 0)
                return n;
            printf("tcp recv : FIN recv, %s", strerror(e));
            return -1;
        }
        if (e != 0)
            return n;
        return 0;
    }
    printf("tcp recv ='%d'", n);
    return n;
}
```
