# _ZN9TCPSocket4bindEtb

`TCPSocket::bind(unsigned short, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804f3fa` | `0xbf` | `0x8085468` | `0xc2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,49 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+push   %ebx
+sub    $0x44,%esp
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
-mov    %dx,-0x1c(%ebp)
-mov    %al,-0x20(%ebp)
+mov    %dx,-0x2c(%ebp)
+mov    %al,-0x30(%ebp)
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket15setOptReuseAdrsEb>
 movl   $0x10,0x8(%esp)
 movl   $0x0,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
-movw   $0x2,-0x18(%ebp)
-movzwl -0x1c(%ebp),%eax
+movw   $0x2,-0x1c(%ebp)
+lea    -0x1c(%ebp),%ebx
+movzwl -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <htons>
-mov    %ax,-0x16(%ebp)
-movl   $0x0,-0x14(%ebp)
-lea    -0x18(%ebp),%edx
+mov    %ax,0x2(%ebx)
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $0x10,0x8(%esp)
+lea    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <bind>
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN9TCPSocket4bindEtb+0x93>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jns    <T> <_ZN9TCPSocket4bindEtb+0x92>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket5closeEv>
 mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket4bindEtb+0xbd>
-cmpb   $0x0,-0x20(%ebp)
-je     <T> <_ZN9TCPSocket4bindEtb+0xa4>
+jmp    <T> <_ZN9TCPSocket4bindEtb+0xbc>
+cmpb   $0x0,-0x30(%ebp)
+je     <T> <_ZN9TCPSocket4bindEtb+0xa3>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket14setOptNonBlockEv>
-movzwl -0x1c(%ebp),%eax
+movzwl -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"succeeded in binding TCP socket port #%d\n",(%esp)
 call   <T> <printf>
 mov    $0x1,%eax
-leave
+add    $0x44,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::bind(unsigned short, bool) */

undefined4 __thiscall TCPSocket::_ZN9TCPSocket4bindEtb(TCPSocket *this,ushort param_1,bool param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr local_1c;
  
  _ZN9TCPSocket15setOptReuseAdrsEb(this,true);
  memset(&local_1c,0,0x10);
  local_1c.sa_family = 2;
  local_1c.sa_data._0_2_ = htons(param_1);
  local_1c.sa_data[2] = '\0';
  local_1c.sa_data[3] = '\0';
  local_1c.sa_data[4] = '\0';
  local_1c.sa_data[5] = '\0';
  iVar1 = bind(*(int *)this,&local_1c,0x10);
  if (iVar1 < 0) {
    close(this);
    uVar2 = 0;
  }
  else {
    if (param_2) {
      _ZN9TCPSocket14setOptNonBlockEv(this);
    }
    printf("succeeded in binding TCP socket port #%d\n",(uint)param_1);
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFTcpSocket.cpp](source/DNFServer/GameServer/Monitor/DNFTcpSocket.cpp)（约第 86 行）：

```cpp
char TCPSocket::bind(unsigned short port, bool flag)
{
    setOptReuseAdrs(true);
    sockaddr addr;
    memset(&addr, 0, 0x10);
    addr.sa_family = 2;
    ((RA_U16<2>*)&addr)->v = htons(port);
    int r = ::bind(m_fd, &addr, 0x10);
    if (r < 0)
    {
        close();
        return 0;
    }
    if (flag)
    {
        setOptNonBlock();
    }
    printf("succeeded in binding TCP socket port #%d\n", (unsigned int)port);
    return 1;
}
```
