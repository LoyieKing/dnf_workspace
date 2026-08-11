# _ZNK11CUdpHandler12SendToServerEPcitPKc

`CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80609a6` | `0x27b` | `0x805e28a` | `0x275` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,149 +1,149 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x74,%esp
 mov    0x14(%ebp),%eax
 mov    %ax,-0x4c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x23>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x275>
+jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x26f>
 cmpw   $0x0,-0x4c(%ebp)
 jne    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x5d>
 cmpl   $0x0,0x18(%ebp)
 jne    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0xd2>
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 movl   $0x0,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <send>
 mov    %eax,-0x10(%ebp)
 jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0xd2>
-lea    -0x48(%ebp),%eax
 movl   $0x10,0x8(%esp)
 movl   $0x0,0x4(%esp)
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 movw   $0x2,-0x48(%ebp)
 movzwl -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <htons>
 mov    %ax,-0x46(%ebp)
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <inet_addr>
 mov    %eax,-0x44(%ebp)
 lea    -0x48(%ebp),%ecx
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 movl   $0x10,0x14(%esp)
 mov    %ecx,0x10(%esp)
 movl   $0x0,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <sendto>
 mov    %eax,-0x10(%ebp)
 cmpl   $0xffffffff,-0x10(%ebp)
-jne    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x1da>
+jne    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x1d4>
 call   <T> <_Z8getErrnov>
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    $0x61,%eax
-je     <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x143>
-cmp    $0x61,%eax
-jl     <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x182>
-sub    $0x6f,%eax
-cmp    $0x2,%eax
-ja     <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x182>
+cmpl   $0x61,-0xc(%ebp)
+jne    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x12c>
 movl   $0x1cb,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x1d0>
-movl   $0x1d1,0x8(%esp)
-movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
+jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x1ca>
+cmpl   $0x60,-0xc(%ebp)
+jle    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x13d>
 mov    -0xc(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"Error( EAFNOSUPPORT ) in send = %d\n",0x8(%esp)
-movl   $"./log/UdpErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x1d0>
+sub    $0x6f,%eax
+cmp    $0x2,%eax
+jbe    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x18d>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 movl   $0x1d7,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0x10(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"err = %d , strerror = %s in send\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x1ca>
+movl   $0x1d1,0x8(%esp)
+movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"Error( EAFNOSUPPORT ) in send = %d\n",0x8(%esp)
+movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x275>
+jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x26f>
 cmpl   $0x0,-0x10(%ebp)
-jne    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x21d>
+jne    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x217>
 movl   $0x1e0,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"no data sent in send\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x275>
+jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x26f>
 mov    0x10(%ebp),%eax
 cmp    -0x10(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x270>
+jne    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x226>
+mov    $0x1,%eax
+jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x26f>
 movl   $0x1e7,0x8(%esp)
 movl   $&_ZZNK11CUdpHandler12SendToServerEPcitPKcE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Only %d out of %d bytes sent\n",0x8(%esp)
 movl   $"./log/UdpErr",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZNK11CUdpHandler12SendToServerEPcitPKc+0x275>
-mov    $0x1,%eax
 add    $0x74,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const */

undefined4 __thiscall
CUdpHandler::_ZNK11CUdpHandler12SendToServerEPcitPKc
          (CUdpHandler *this,char *param_1,int param_2,ushort param_3,char *param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  sockaddr local_4c;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  int local_14;
  int local_10;
  
  if (*(int *)(this + 4) == -1) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 0) {
      if (param_4 == (char *)0x0) {
        local_14 = send(*(int *)(this + 4),param_1,param_2,0);
      }
    }
    else {
      memset(&local_4c,0,0x10);
      local_4c.sa_family = 2;
      local_4c.sa_data._0_2_ = htons(param_3);
      local_4c.sa_data._2_4_ = inet_addr(param_4);
      local_14 = sendto(*(int *)(this + 4),param_1,param_2,0,&local_4c,0x10);
    }
    if (local_14 == -1) {
      local_10 = getErrno();
      if (local_10 == 0x61) {
        CMyFileLog::CMyFileLog(local_34,"SendToServer",0x1d1);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/UdpErr","Error( EAFNOSUPPORT ) in send = %d\n",local_10);
      }
      else if ((local_10 < 0x61) || (2 < local_10 - 0x6fU)) {
        pcVar2 = strerror(local_10);
        CMyFileLog::CMyFileLog(local_2c,"SendToServer",0x1d7);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_2c,"./log/UdpErr","err = %d , strerror = %s in send\n",local_10,pcVar2);
      }
      else {
        CMyFileLog::CMyFileLog(local_3c,"SendToServer",0x1cb);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_3c,"./log/UdpErr","Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",
                   local_10);
      }
      uVar1 = 0;
    }
    else if (local_14 == 0) {
      CMyFileLog::CMyFileLog(local_24,"SendToServer",0x1e0);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_24,"./log/UdpErr","no data sent in send\n");
      uVar1 = 0;
    }
    else if (param_2 == local_14) {
      uVar1 = 1;
    }
    else {
      CMyFileLog::CMyFileLog(local_1c,"SendToServer",0x1e7);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_1c,"./log/UdpErr","Only %d out of %d bytes sent\n",local_14,param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFUdpHandler.cpp](source/DNFServer/GameServer/Statics/DNFUdpHandler.cpp)（约第 224 行）：

```cpp
int CUdpHandler::SendToServer(char* buf, int len, unsigned short port, char const* ip) const
{
    if (m_clientSock == -1)
    {
        return 0;
    }
    int n;
    if (port == 0)
    {
        if (ip == 0)
        {
            n = send(m_clientSock, buf, len, 0);
        }
    }
    else
    {
        sockaddr_in to;
        memset(&to, 0, 0x10);
        to.sin_family = 2;
        to.sin_port = htons(port);
        to.sin_addr.s_addr = inet_addr(ip);
        n = sendto(m_clientSock, buf, len, 0, (sockaddr*)&to, 0x10);
    }
    if (n == -1)
    {
        int err = getErrno();
        if (err == 0x61)
        {
            DNF_LOG_SCOPE_LINE(0x1cb, "./log/UdpErr", "Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n", err);
        }
        else if (err < 0x61 || 2 < err - 0x6fU)
        {
            DNF_LOG_SCOPE_LINE(0x1d7, "./log/UdpErr", "err = %d , strerror = %s in send\n", err, strerror(err));
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x1d1, "./log/UdpErr", "Error( EAFNOSUPPORT ) in send = %d\n", err);
        }
        return 0;
    }
    if (n == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1e0, "./log/UdpErr", "no data sent in send\n");
        return 0;
    }
    if (len == n)
    {
        return 1;
    }
    DNF_LOG_SCOPE_LINE(0x1e7, "./log/UdpErr", "Only %d out of %d bytes sent\n", n, len);
    return 0;
}
```
