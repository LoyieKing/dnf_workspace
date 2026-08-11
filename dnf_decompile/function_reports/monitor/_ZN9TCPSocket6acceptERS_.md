# _ZN9TCPSocket6acceptERS_

`TCPSocket::accept(TCPSocket&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804fee0` | `0x11d` | `0x8085ac4` | `0x121` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,80 +1,81 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
-movl   $0x10,-0x14(%ebp)
+movl   $0x10,-0x18(%ebp)
 mov    0xc(%ebp),%eax
-add    $0x4,%eax
-mov    %eax,%edx
+lea    0x4(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-lea    -0x14(%ebp),%ecx
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+lea    -0x18(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <accept>
-mov    0xc(%ebp),%edx
-mov    %eax,(%edx)
+mov    %eax,-0x14(%ebp)
+mov    0xc(%ebp),%eax
+mov    -0x14(%ebp),%edx
+mov    %edx,(%eax)
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN9TCPSocket6acceptERS_+0x7f>
+jne    <T> <_ZN9TCPSocket6acceptERS_+0x83>
 movl   $"a+",0x4(%esp)
 movl   $"log.txt",(%esp)
 call   <T> <fopen>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN9TCPSocket6acceptERS_+0x7f>
+je     <T> <_ZN9TCPSocket6acceptERS_+0x83>
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x8(%esp)
 movl   $"[TCPSocket::Accept] Accept fail[%d]\n",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fprintf>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-js     <T> <_ZN9TCPSocket6acceptERS_+0x92>
+js     <T> <_ZN9TCPSocket6acceptERS_+0x96>
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN9TCPSocket6acceptERS_+0xdd>
+jne    <T> <_ZN9TCPSocket6acceptERS_+0xe1>
 movl   $"a+",0x4(%esp)
 movl   $"log.txt",(%esp)
 call   <T> <fopen>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN9TCPSocket6acceptERS_+0xd6>
+je     <T> <_ZN9TCPSocket6acceptERS_+0xda>
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x8(%esp)
 movl   $"[TCPSocket::Accept] Accept fail[%d]\n",0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fprintf>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <fclose>
 mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket6acceptERS_+0x11b>
+jmp    <T> <_ZN9TCPSocket6acceptERS_+0x11f>
 mov    0xc(%ebp),%eax
 lea    0x8(%eax),%edx
 mov    0xc(%ebp),%eax
 add    $0x14,%eax
 movl   $0x4,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0xc(%ebp),%eax
-movzwl 0x6(%eax),%edx
-mov    0xc(%ebp),%eax
+mov    0xc(%ebp),%edx
+movzwl 0x6(%edx),%edx
 mov    %dx,0x18(%eax)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket14setOptNonBlockEv>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::accept(TCPSocket&) */

undefined4 __thiscall TCPSocket::_ZN9TCPSocket6acceptERS_(TCPSocket *this,TCPSocket *param_1)

{
  int iVar1;
  undefined4 uVar2;
  socklen_t local_18;
  FILE *local_14;
  FILE *local_10;
  
  local_18 = 0x10;
  iVar1 = accept(*(int *)this,(sockaddr *)(param_1 + 4),&local_18);
  *(int *)param_1 = iVar1;
  if (*(int *)param_1 == 0) {
    local_14 = fopen("log.txt","a+");
    if (local_14 != (FILE *)0x0) {
      fprintf(local_14,"[TCPSocket::Accept] Accept fail[%d]\n",*(undefined4 *)param_1);
      fclose(local_14);
    }
  }
  if ((*(int *)param_1 < 0) || (*(int *)param_1 == -1)) {
    local_10 = fopen("log.txt","a+");
    if (local_10 != (FILE *)0x0) {
      fprintf(local_10,"[TCPSocket::Accept] Accept fail[%d]\n",*(undefined4 *)param_1);
      fclose(local_10);
    }
    uVar2 = 0;
  }
  else {
    memcpy(param_1 + 0x14,param_1 + 8,4);
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_1 + 6);
    _ZN9TCPSocket14setOptNonBlockEv(param_1);
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFTcpSocket.cpp](source/DNFServer/GameServer/Monitor/DNFTcpSocket.cpp)（约第 227 行）：

```cpp
char TCPSocket::accept(TCPSocket& sock)
{
    socklen_t len = 0x10;
    int fd = ::accept(m_fd, (sockaddr*)((char*)&sock + 4), &len);
    sock.m_fd = fd;
    if (sock.m_fd == 0)
    {
        FILE* f = fopen("log.txt", "a+");
        if (f != 0)
        {
            fprintf(f, "[TCPSocket::Accept] Accept fail[%d]\n", sock.m_fd);
            fclose(f);
        }
    }
    if (sock.m_fd < 0 || sock.m_fd == -1)
    {
        FILE* f = fopen("log.txt", "a+");
        if (f != 0)
        {
            fprintf(f, "[TCPSocket::Accept] Accept fail[%d]\n", sock.m_fd);
            fclose(f);
        }
        return 0;
    }
    memcpy((char*)&sock + 0x14, (char*)&sock + 8, 4);
    ((RA_U16<24>*)&sock)->v = ((RA_U16<6>*)&sock)->v;
    sock.setOptNonBlock();
    return 1;
}
```
