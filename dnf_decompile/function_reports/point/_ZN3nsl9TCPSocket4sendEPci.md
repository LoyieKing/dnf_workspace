# _ZN3nsl9TCPSocket4sendEPci

`nsl::TCPSocket::send(char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80acc16` | `0x26d` | `0x809ee80` | `0x272` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,157 +1,158 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN3nsl9TCPSocket4sendEPci+0x15>
 cmpl   $0x0,0x10(%ebp)
 jg     <T> <_ZN3nsl9TCPSocket4sendEPci+0x43>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    0x10(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"buf error or size-%d error",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0x265>
+jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0x26a>
 mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <write>
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x24(%ebp)
 call   <T> <__errno_location>
 mov    (%eax),%eax
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jg     <T> <_ZN3nsl9TCPSocket4sendEPci+0x258>
-cmpl   $0xb,-0x1c(%ebp)
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jg     <T> <_ZN3nsl9TCPSocket4sendEPci+0x25d>
+cmpl   $0xb,-0x20(%ebp)
 je     <T> <_ZN3nsl9TCPSocket4sendEPci+0x8b>
-cmpl   $0x4,-0x1c(%ebp)
+cmpl   $0x4,-0x20(%ebp)
 je     <T> <_ZN3nsl9TCPSocket4sendEPci+0x8b>
-cmpl   $0xb,-0x1c(%ebp)
-jne    <T> <_ZN3nsl9TCPSocket4sendEPci+0x1e4>
-cmpl   $0xb,-0x1c(%ebp)
+cmpl   $0xb,-0x20(%ebp)
+jne    <T> <_ZN3nsl9TCPSocket4sendEPci+0x1e9>
+cmpl   $0xb,-0x20(%ebp)
 jne    <T> <_ZN3nsl9TCPSocket4sendEPci+0xb0>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"EAGAIN",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0xf8>
-cmpl   $0x4,-0x1c(%ebp)
+cmpl   $0x4,-0x20(%ebp)
 jne    <T> <_ZN3nsl9TCPSocket4sendEPci+0xd5>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"EINTR",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0xf8>
-cmpl   $0xb,-0x1c(%ebp)
+cmpl   $0xb,-0x20(%ebp)
 jne    <T> <_ZN3nsl9TCPSocket4sendEPci+0xf8>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"EWOULDBLOCK",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 cmp    $0x64,%eax
 setg   %al
-test   %al,%al
-je     <T> <_ZN3nsl9TCPSocket4sendEPci+0x19e>
+mov    %al,-0x19(%ebp)
+cmpb   $0x0,-0x19(%ebp)
+je     <T> <_ZN3nsl9TCPSocket4sendEPci+0x1a3>
 mov    0x8(%ebp),%eax
 movzwl 0x18(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x17(%eax),%eax
 movzbl %al,%eax
 mov    %eax,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x16(%eax),%eax
 movzbl %al,%edi
 mov    0x8(%ebp),%eax
 movzbl 0x15(%eax),%eax
 movzbl %al,%esi
 mov    0x8(%ebp),%eax
 movzbl 0x14(%eax),%eax
 movzbl %al,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    -0x30(%ebp),%edx
 mov    %edx,0x1c(%esp)
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"So many retry. so disconnect him, %d.%d.%d.%d:%d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1c(%eax)
 mov    $0xffffff9c,%eax
-jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0x265>
-mov    -0x1c(%ebp),%eax
+jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0x26a>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    %ebx,0x10(%esp)
-mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"tcp send retry='%d', error ='%s(%d)'",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0x265>
-cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN3nsl9TCPSocket4sendEPci+0x20e>
+jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0x26a>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN3nsl9TCPSocket4sendEPci+0x213>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"if errno == 0 then Critcal Problem!! YOU MUST CHECK THIS!!!",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0x265>
+jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0x26a>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
-mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"tcp send fail='%d', error ='%s'",0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1c(%eax)
 mov    $0xffffffff,%eax
-jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0x265>
+jmp    <T> <_ZN3nsl9TCPSocket4sendEPci+0x26a>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1c(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: int send(TCPSocket * this, char * buf, int size) */

int __thiscall nsl::TCPSocket::_ZN3nsl9TCPSocket4sendEPci(TCPSocket *this,char *buf,int size)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int __errnum;
  TraceLog *pTVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  
                    /* Unresolved local var: int n_bytes@[???]
                       Unresolved local var: int error_number@[???] */
  if ((buf == (char *)0x0) || (size < 1)) {
    pTVar6 = G_TraceLog();
    TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar6,0,"buf error or size-%d error",size);
    iVar7 = -1;
  }
  else {
    iVar7 = write(this->sock_,buf,size);
    piVar8 = __errno_location();
    __errnum = *piVar8;
    if (iVar7 < 1) {
      if (((__errnum == 0xb) || (__errnum == 4)) || (__errnum == 0xb)) {
        if (__errnum == 0xb) {
          pTVar6 = G_TraceLog();
          TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar6,0,"EAGAIN");
        }
        else if (__errnum == 4) {
          pTVar6 = G_TraceLog();
          TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar6,0,"EINTR");
        }
        else if (__errnum == 0xb) {
          pTVar6 = G_TraceLog();
          TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz(pTVar6,0,"EWOULDBLOCK");
        }
        this->mSendRetryCount = this->mSendRetryCount + 1;
        if (this->mSendRetryCount < 0x65) {
          pcVar9 = strerror(__errnum);
          pTVar6 = G_TraceLog();
          TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz
                    (pTVar6,0,"tcp send retry=\'%d\', error =\'%s(%d)\'",iVar7,pcVar9,__errnum);
          iVar7 = 0;
        }
        else {
          uVar5 = this->port_;
          bVar1 = this->c_adrs_[3];
          bVar2 = this->c_adrs_[2];
          bVar3 = this->c_adrs_[1];
          bVar4 = this->c_adrs_[0];
          pTVar6 = G_TraceLog();
          TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz
                    (pTVar6,7,"So many retry. so disconnect him, %d.%d.%d.%d:%d",(uint)bVar4,
                     (uint)bVar3,(uint)bVar2,(uint)bVar1,(uint)uVar5);
          this->mSendRetryCount = 0;
          iVar7 = -100;
        }
      }
      else if (__errnum == 0) {
        pTVar6 = G_TraceLog();
        TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz
                  (pTVar6,0,"if errno == 0 then Critcal Problem!! YOU MUST CHECK THIS!!!");
        iVar7 = 0;
      }
      else {
        piVar8 = __errno_location();
        pcVar9 = strerror(*piVar8);
        pTVar6 = G_TraceLog();
        TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz
                  (pTVar6,0,"tcp send fail=\'%d\', error =\'%s\'",iVar7,pcVar9);
        this->mSendRetryCount = 0;
        iVar7 = -1;
      }
    }
    else {
      this->mSendRetryCount = 0;
    }
  }
  return iVar7;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/Socket.cpp](source/ChannelOld/DNFChannelBridge/Socket.cpp)（约第 86 行）：

```cpp
int TCPSocket::send(char* buf, int size)
{
    if (this == NULL)
    {
        return -2;
    }
    if ((buf == NULL) || (size < 1))
    {
        GLOG(ChannelServiceApp::gFileLogInfo, "!buf or size<1 :");
        return -1;
    }
    int n_bytes = write(sock_, buf, size);
    if (n_bytes < 1)
    {
        if ((((*__errno_location() == 0xb) || (*__errno_location() == 4)) ||
             (*__errno_location() == 0xb)) || (*__errno_location() == 0))
        {
            GLOG(ChannelServiceApp::gFileLogInfo, "tcp send fail= " << n_bytes << " error = " << strerror(*__errno_location()));
            return 0;
        }
        GLOG(ChannelServiceApp::gFileLogInfo, "tcp send fail= " << n_bytes << " error = " << strerror(*__errno_location()));
        return -1;
    }
    GLOG(ChannelServiceApp::gFileLogInfo, "tcp send = " << n_bytes << " error = " << strerror(*__errno_location()));
    return n_bytes;
}
```
