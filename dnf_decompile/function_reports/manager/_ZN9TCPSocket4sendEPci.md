# _ZN9TCPSocket4sendEPci

`TCPSocket::send(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8054c8c` | `0x117` | `0x8061e48` | `0x12e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,76 +1,79 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN9TCPSocket4sendEPci+0x12>
 cmpl   $0x0,0x10(%ebp)
 jg     <T> <_ZN9TCPSocket4sendEPci+0x2f>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"buf error or size-%d error",(%esp)
 call   <T> <printf>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN9TCPSocket4sendEPci+0x115>
+jmp    <T> <_ZN9TCPSocket4sendEPci+0x12c>
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <write>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jg     <T> <_ZN9TCPSocket4sendEPci+0xec>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jg     <T> <_ZN9TCPSocket4sendEPci+0x103>
 call   <T> <__errno_location>
 mov    (%eax),%eax
-cmp    $0xb,%eax
-je     <T> <_ZN9TCPSocket4sendEPci+0x86>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-cmp    $0x4,%eax
-je     <T> <_ZN9TCPSocket4sendEPci+0x86>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-cmp    $0xb,%eax
-je     <T> <_ZN9TCPSocket4sendEPci+0x86>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN9TCPSocket4sendEPci+0xbf>
-movl   $&data#fbafe398(.rodata),(%esp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0xb,-0xc(%ebp)
+je     <T> <_ZN9TCPSocket4sendEPci+0x73>
+cmpl   $0x4,-0xc(%ebp)
+je     <T> <_ZN9TCPSocket4sendEPci+0x73>
+cmpl   $0xb,-0xc(%ebp)
+jne    <T> <_ZN9TCPSocket4sendEPci+0x9f>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strerror>
+mov    %eax,0x8(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $"tcp send fail='%d', error ='%s'",(%esp)
 call   <T> <printf>
+mov    $0xffffffff,%eax
+jmp    <T> <_ZN9TCPSocket4sendEPci+0x12c>
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN9TCPSocket4sendEPci+0xce>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strerror>
+mov    %eax,0x8(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $"tcp send retry='%d', error ='%s'",(%esp)
+call   <T> <printf>
+mov    $0x0,%eax
+jmp    <T> <_ZN9TCPSocket4sendEPci+0x12c>
+movl   $"send error no 0",(%esp)
+call   <T> <printf>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <strerror>
+mov    %eax,0x8(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $"tcp send retry='%d', error ='%s'",(%esp)
+call   <T> <printf>
+mov    $0x0,%eax
+jmp    <T> <_ZN9TCPSocket4sendEPci+0x12c>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-movl   $"tcp send retry='%d', error ='%s'",(%esp)
+movl   $"tcp send='%d', error ='%s'",(%esp)
 call   <T> <printf>
-mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket4sendEPci+0x115>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-mov    %eax,(%esp)
-call   <T> <strerror>
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-movl   $"tcp send fail='%d', error ='%s'",(%esp)
-call   <T> <printf>
-mov    $0xffffffff,%eax
-jmp    <T> <_ZN9TCPSocket4sendEPci+0x115>
-call   <T> <__errno_location>
-mov    (%eax),%eax
-mov    %eax,(%esp)
-call   <T> <strerror>
-mov    %eax,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-movl   $"1.tcp send='%d', error ='%s'",(%esp)
-call   <T> <printf>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::send(char*, int) */

ssize_t __thiscall TCPSocket::_ZN9TCPSocket4sendEPci(TCPSocket *this,char *param_1,int param_2)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  
  if ((param_1 == (char *)0x0) || (param_2 < 1)) {
    printf("buf error or size-%d error",param_2);
    sVar1 = -1;
  }
  else {
    sVar1 = write(*(int *)this,param_1,param_2);
    if (sVar1 < 1) {
      piVar2 = __errno_location();
      if ((((*piVar2 != 0xb) && (piVar2 = __errno_location(), *piVar2 != 4)) &&
          (piVar2 = __errno_location(), *piVar2 != 0xb)) &&
         (piVar2 = __errno_location(), *piVar2 != 0)) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        printf("tcp send fail=\'%d\', error =\'%s\'",sVar1,pcVar3);
        return -1;
      }
      printf(&DAT_08153050);
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      printf("tcp send retry=\'%d\', error =\'%s\'",sVar1,pcVar3);
      sVar1 = 0;
    }
    else {
      piVar2 = __errno_location();
      pcVar3 = strerror(*piVar2);
      printf("1.tcp send=\'%d\', error =\'%s\'",sVar1,pcVar3);
    }
  }
  return sVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp](source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp)（约第 63 行）：

```cpp
int TCPSocket::send(char* buf, int len)
{
    if (!buf || len <= 0)
    {
        printf("buf error or size-%d error", len);
        return -1;
    }
    int n = write(m_fd, buf, len);
    if (n <= 0)
    {
        int e = errno;
        if (e == 0xb || e == 0x4 || e == 0xb)
        {
            printf("tcp send fail='%d', error ='%s'", n, strerror(e));
            return -1;
        }
        if (e != 0)
        {
            printf("tcp send retry='%d', error ='%s'", n, strerror(e));
            return 0;
        }
        printf("send error no 0");
        printf("tcp send retry='%d', error ='%s'", n, strerror(e));
        return 0;
    }
    printf("tcp send='%d', error ='%s'", n, strerror(errno));
    return n;
}
```
