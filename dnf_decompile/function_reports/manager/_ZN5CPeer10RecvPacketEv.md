# _ZN5CPeer10RecvPacketEv

`CPeer::RecvPacket()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x8056834` | `0x196` | `0x8064e50` | `0x196` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,100 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer11recv_packetEv>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
 jle    <T> <_ZN5CPeer10RecvPacketEv+0x9a>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer7parsingEi>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN5CPeer10RecvPacketEv+0x90>
 movl   $0x4d,0x8(%esp)
 movl   $&_ZZN5CPeer10RecvPacketEvE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"CPeer::Recv (false == parsing( size:%d ) )",0x8(%esp)
 movl   $"./log/TcpRecv",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"CPeer::Recv (false == parsing( size:%d ) )\n",(%esp)
 call   <T> <printf>
 mov    $0x1,%eax
 jmp    <T> <_ZN5CPeer10RecvPacketEv+0x18e>
 mov    $0x1,%eax
 jmp    <T> <_ZN5CPeer10RecvPacketEv+0x18e>
 cmpl   $0x0,-0x1c(%ebp)
 jns    <T> <_ZN5CPeer10RecvPacketEv+0x147>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket11getPeerPortEv>
 movzwl %ax,%edi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZN9TCPSocket11getPeerAdrsEv>
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CPeer12GetTcpSocketEv>
 mov    %eax,(%esp)
 call   <T> <_ZNK9TCPSocket9getHandleEv>
 mov    %eax,%ebx
 movl   $0x59,0x8(%esp)
 movl   $&_ZZN5CPeer10RecvPacketEvE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Maybe Peer is disconnect!(%d), socket no(%d), addr(%s), port(%d)",0x8(%esp)
 movl   $"./log/TcpRecv",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"CPeer::Recv (size(%d) < 0)\n",(%esp)
 call   <T> <printf>
 mov    $0x0,%eax
 jmp    <T> <_ZN5CPeer10RecvPacketEv+0x18e>
 movl   $0x63,0x8(%esp)
 movl   $&_ZZN5CPeer10RecvPacketEvE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"Maybe Peer is disconnect!(size == 0)",0x8(%esp)
 movl   $"./log/TcpRecv",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $"CPeer::Recv (size == 0)",(%esp)
 call   <T> <puts>
 mov    $0x1,%eax
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPeer::RecvPacket() */

undefined4 __thiscall CPeer::_ZN5CPeer10RecvPacketEv(CPeer *this)

{
  char cVar1;
  undefined4 uVar2;
  TCPSocket *pTVar3;
  uint uVar4;
  undefined4 uVar5;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  int local_20;
  
  local_20 = recv_packet(this);
  if (local_20 < 1) {
    if (local_20 < 0) {
      pTVar3 = (TCPSocket *)GetTcpSocket(this);
      uVar4 = TCPSocket::getPeerPort(pTVar3);
      pTVar3 = (TCPSocket *)GetTcpSocket(this);
      uVar2 = TCPSocket::getPeerAdrs(pTVar3);
      pTVar3 = (TCPSocket *)GetTcpSocket(this);
      uVar5 = TCPSocket::getHandle(pTVar3);
      CMyFileLog::CMyFileLog(local_30,"RecvPacket",0x59);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/TcpRecv",
                 "Maybe Peer is disconnect!(%d), socket no(%d), addr(%s), port(%d)",local_20,uVar5,
                 uVar2,uVar4 & 0xffff);
      printf("CPeer::Recv (size(%d) < 0)\n",local_20);
      uVar2 = 0;
    }
    else {
      CMyFileLog::CMyFileLog(local_28,"RecvPacket",99);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_28,"./log/TcpRecv","Maybe Peer is disconnect!(size == 0)");
      puts("CPeer::Recv (size == 0)");
      uVar2 = 1;
    }
  }
  else {
    cVar1 = parsing(this,local_20);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      CMyFileLog::CMyFileLog(local_38,"RecvPacket",0x4d);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/TcpRecv","CPeer::Recv (false == parsing( size:%d ) )",local_20);
      printf("CPeer::Recv (false == parsing( size:%d ) )\n",local_20);
      uVar2 = 1;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/Peer.cpp](source/DNFServer/GameServer/Manager/Peer.cpp)（约第 283 行）：

```cpp
char CPeer::RecvPacket()
{
    int ret = recv_packet();
    if (ret > 0)
    {
        if (!parsing(ret))
        {
            CMyFileLog log(__FUNCTION__, 0x4d);
            // ORIG 实测：日志文案无结尾 \n（printf 有 \n）。
            log("./log/TcpRecv", "CPeer::Recv (false == parsing( size:%d ) )", ret);
            printf("CPeer::Recv (false == parsing( size:%d ) )\n", ret);
            return 1;
        }
        return 1;
    }
    if (ret < 0)
    {
        // ORIG：三个 getter 在 CMyFileLog 构造前求值（callee-saved 预装载），
        // 求值顺序 port -> adrs -> handle；port 以 int 形式入栈槽。
        register int p = GetTcpSocket()->getPeerPort();
        register char* a = GetTcpSocket()->getPeerAdrs();
        register int h = GetTcpSocket()->getHandle();
        CMyFileLog log(__FUNCTION__, 0x59);
        log("./log/TcpRecv",
            "Maybe Peer is disconnect!(%d), socket no(%d), addr(%s), port(%d)",
            ret, h, a, p);
        printf("CPeer::Recv (size(%d) < 0)\n", ret);
        return 0;
    }
    CMyFileLog log(__FUNCTION__, 0x63);
    log("./log/TcpRecv", "Maybe Peer is disconnect!(size == 0)");
    puts("CPeer::Recv (size == 0)");
    return 1;
}
```
