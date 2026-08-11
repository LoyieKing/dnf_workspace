# _ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE

`nsl::EpollReactor<nsl::TCPUser>::handleEvents(unsigned int, nsl::DataPool*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80b076e` | `0x399` | `0x80aef2c` | `0x393` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,261 +1,257 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0xc(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    0x38(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x34(%eax),%eax
 mov    %ebx,0xc(%esp)
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <epoll_wait>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
 jns    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x43>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x393>
+jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x38d>
 movl   $0x0,-0x18(%ebp)
-jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x37d>
+jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x377>
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x4,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 cmp    $0x5209,%eax
 je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0xae>
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0xae>
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%ecx
 mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    0x4(%eax),%ebx
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9getHandleEv>
 cmp    %eax,%ebx
 jne    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0xae>
 mov    $0x1,%eax
 jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0xb3>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x20a>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool13createTCPUserEv>
 mov    %eax,-0x14(%ebp)
 movl   $0x0,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser16setNeedReconnectEb>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser17setLastAccessTimeEv>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool15createTCPSocketEv>
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9setSocketEPNS_9TCPSocketE>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9getSocketEv>
 mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9getSocketEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9TCPSocket6acceptERS0_>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x146>
 mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool14destroyTCPUserEPNS_7TCPUserE>
-jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x379>
+jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x373>
 movl   $0x4,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser15setRecvDataTypeENS0_14ENUM_DATA_TYPEE>
 movl   $0x0,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser15setSendDataTypeENS0_14ENUM_DATA_TYPEE>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8DataPool15GetTcpUserCountEv>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x2,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script12findIntValueEii>
 add    $0x2,%eax
 cmp    %eax,%ebx
 setl   %al
 test   %al,%al
 je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x1ea>
 movl   $0x5,0x8(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12registHandleEPS1_j>
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9getUserIdEv>
 movl   $0x0,0xc(%esp)
 mov    -0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE16addConnectedUserEjPS1_b>
-jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x379>
+jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x373>
 movl   $0xe6,0x8(%esp)
 movl   $"../basic_header/Reactor.inl",0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci>
-jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x379>
+jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x373>
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%ecx
 mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser9getUserIdEv>
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%ecx
 mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x8,%eax
 test   %eax,%eax
 je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x292>
 movl   $0xf5,0x8(%esp)
 movl   $"../basic_header/Reactor.inl",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci>
 test   %al,%al
-je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x372>
+je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x373>
 mov    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE16delConnectedUserEjPS1_>
-jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x379>
+jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x373>
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%ecx
 mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x10,%eax
 test   %eax,%eax
 je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x2f1>
 movl   $0x103,0x8(%esp)
 movl   $"../basic_header/Reactor.inl",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci>
 test   %al,%al
-je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x375>
+je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x373>
 mov    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE16delConnectedUserEjPS1_>
-jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x379>
+jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x373>
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%ecx
 mov    -0x18(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x329>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser6onReadEv>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser14isDisconnectedEv>
 test   %al,%al
-jne    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x378>
+jne    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x372>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK3nsl7TCPUser19isAboutToDisconnectEv>
 test   %al,%al
-je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x379>
+je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x373>
 movl   $0x11e,0x8(%esp)
 movl   $"../basic_header/Reactor.inl",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TCPUser14onPassiveCloseEPci>
 test   %al,%al
-je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x379>
+je     <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x373>
 mov    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE16delConnectedUserEjPS1_>
-jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x379>
-nop
-jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x379>
-nop
-jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x379>
+jmp    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x373>
 nop
 addl   $0x1,-0x18(%ebp)
 mov    -0x18(%ebp),%eax
 cmp    -0x1c(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE+0x4f>
 mov    $0x1,%eax
 add    $0x34,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool handleEvents(EpollReactor<nsl::TCPUser> * this, uint milisec,
   DataPool * pPool) */

bool __thiscall
nsl::EpollReactor<nsl::TCPUser>::_ZN3nsl12EpollReactorINS_7TCPUserEE12handleEventsEjPNS_8DataPoolE
          (EpollReactor<nsl::TCPUser> *this,uint milisec,DataPool *pPool)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  Script *pSVar4;
  int iVar5;
  void *pvVar6;
  TCPUser *pTVar7;
  TCPSocket *pTVar8;
  TCPSocket *this_00;
  uint uVar9;
  int local_1c;
  
                    /* Unresolved local var: int n_event@[???] */
  iVar3 = epoll_wait(this->epoll_fd_,(epoll_event *)this->events_,this->max_client_,milisec);
  if (iVar3 < 0) {
    bVar2 = false;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    for (local_1c = 0; local_1c < iVar3; local_1c = local_1c + 1) {
      pSVar4 = G_Script();
      iVar5 = Script::findIntValue(pSVar4,0,4);
      if (((iVar5 == 0x5209) || (this->m_ServerSession == (TCPUser *)0x0)) ||
         (pvVar1 = this->events_[local_1c].data.ptr,
         pvVar6 = (void *)TCPUser::getHandle(this->m_ServerSession), pvVar1 != pvVar6)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
                    /* Unresolved local var: TCPUser * newSession@[???] */
        pTVar7 = DataPool::createTCPUser(pPool);
        TCPUser::setNeedReconnect(pTVar7,false);
        TCPUser::setLastAccessTime(pTVar7);
        pTVar8 = DataPool::createTCPSocket(pPool);
        TCPUser::setSocket(pTVar7,pTVar8);
        pTVar8 = TCPUser::getSocket(pTVar7);
        this_00 = TCPUser::getSocket(this->m_ServerSession);
        bVar2 = TCPSocket::accept(this_00,pTVar8);
        if (bVar2) {
          TCPUser::setRecvDataType(pTVar7,RECV_DATA_NORMAL);
          TCPUser::setSendDataType(pTVar7,SEND_DATA_NORMAL);
          uVar9 = DataPool::GetTcpUserCount(pPool);
          pSVar4 = G_Script();
          iVar5 = Script::findIntValue(pSVar4,0,2);
          if ((int)uVar9 < iVar5 + 2) {
            registHandle(this,pTVar7,5);
            uVar9 = TCPUser::getUserId(pTVar7);
            addConnectedUser(this,uVar9,pTVar7,false);
          }
          else {
            TCPUser::onPassiveClose(pTVar7,"../basic_header/Reactor.inl",0xe6);
          }
        }
        else {
          DataPool::destroyTCPUser(pPool,pTVar7);
        }
      }
      else {
                    /* Unresolved local var: TCPUser * s@[???]
                       Unresolved local var: uint session_id@[???] */
        pTVar7 = *(TCPUser **)&this->events_[local_1c].data;
        uVar9 = TCPUser::getUserId(pTVar7);
        if ((this->events_[local_1c].events & 8) == 0) {
          if ((this->events_[local_1c].events & 0x10) == 0) {
            if ((this->events_[local_1c].events & 1) != 0) {
              TCPUser::onRead(pTVar7);
              bVar2 = TCPUser::isDisconnected(pTVar7);
              if (bVar2) goto LAB_080b0ae7;
            }
            bVar2 = TCPUser::isAboutToDisconnect(pTVar7);
            if ((bVar2) &&
               (bVar2 = TCPUser::onPassiveClose(pTVar7,"../basic_header/Reactor.inl",0x11e), bVar2))
            {
              delConnectedUser(this,uVar9,pTVar7);
            }
          }
          else {
            bVar2 = TCPUser::onPassiveClose(pTVar7,"../basic_header/Reactor.inl",0x103);
            if (bVar2) {
              delConnectedUser(this,uVar9,pTVar7);
            }
          }
        }
        else {
          bVar2 = TCPUser::onPassiveClose(pTVar7,"../basic_header/Reactor.inl",0xf5);
          if (bVar2) {
            delConnectedUser(this,uVar9,pTVar7);
          }
        }
      }
LAB_080b0ae7:
    }
    bVar2 = true;
  }
  return bVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TCPThread.cpp, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/ActiveNetClose.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/CommonDataPool.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DBConnections.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DataPools.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/Dispatchers.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/EncyptTools.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/IActiveConManager.h 等 503 个文件*
