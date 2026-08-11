# _ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb

`EpollReactor<ChannelServiceApp::TCPUser>::handleEvents(unsigned int, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | DIFF | `0x805b0f6` | `0x433` | `0x8059a18` | `0x42d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,287 +1,285 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x2c(%ebp)
 mov    0xc(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %ebx,0xc(%esp)
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <epoll_wait>
 mov    %eax,%esi
 test   %esi,%esi
 jle    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x4e>
 mov    &_ZZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjbE12last_n_event,%eax
 add    %eax,%eax
 cmp    %esi,%eax
 jge    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x4e>
 cmp    $0x64,%esi
 jg     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x6a>
 test   %esi,%esi
 jle    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0xbe>
 mov    &_ZZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjbE12last_n_event,%eax
 mov    %eax,%edx
 shr    $0x1f,%edx
 lea    (%edx,%eax,1),%eax
 sar    $1,%eax
 cmp    %esi,%eax
 jle    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0xbe>
 cmp    $0x64,%esi
 jle    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0xbe>
 mov    %esi,&_ZZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjbE12last_n_event
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 mov    &_ZZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjbE12last_n_event,%ebx
 movl   $"last_n_event: ",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEi>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 test   %esi,%esi
 jns    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x125>
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %eax,%ebx
 movl   $"[EpollReactor< TSession >::HandleEvents] epoll_wait fail : errno=",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    $0x0,%eax
-jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x428>
+jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x422>
 mov    $0x0,%edi
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x307>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%ecx
 mov    %edi,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    0x4(%eax),%eax
 mov    %eax,%ebx
 test   %ebx,%ebx
 jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x188>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"************************TSession is NULL",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%ecx
 mov    %edi,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x8,%eax
 test   %eax,%eax
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x1c2>
 movl   $0xc0,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser7onCloseEPci>
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x304>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%ecx
 mov    %edi,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x10,%eax
 test   %eax,%eax
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x1fc>
 movl   $0xc6,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser7onCloseEPci>
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x304>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%ecx
 mov    %edi,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x241>
 movl   $0xcc,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser6onReadEPci>
 mov    %ebx,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser14isDisconnectedEv>
 test   %al,%al
 jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x300>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%ecx
 mov    %edi,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x4,%eax
 test   %eax,%eax
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x271>
 mov    %ebx,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser9isToWriteEv>
 test   %al,%al
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x271>
 mov    $0x1,%eax
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x276>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x29e>
 movl   $0xd7,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser7onWriteEPci>
 mov    %ebx,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser14isDisconnectedEv>
 test   %al,%al
 jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x303>
 mov    %ebx,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser19isAboutToDisconnectEv>
 test   %al,%al
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x304>
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"isAboutToDisconnect 로 끊어진다",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp13gFileLogErrorE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 movl   $0xe6,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser7onCloseEPci>
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x304>
 nop
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x304>
 nop
 add    $0x1,%edi
 cmp    %esi,%edi
 setl   %al
 test   %al,%al
 jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x12f>
 cmpb   $0x0,-0x2c(%ebp)
-je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x423>
+je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x41d>
 mov    0x8(%ebp),%edx
-lea    -0x30(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIPN17ChannelServiceApp7TCPUserEjSt4lessIS2_ESaISt4pairIKS2_jEEE5beginEv>
 sub    $0x4,%esp
-mov    -0x30(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x3f1>
+jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x3eb>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKPN17ChannelServiceApp7TCPUserEjEEptEv>
 mov    (%eax),%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x422>
+jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x41c>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKPN17ChannelServiceApp7TCPUserEjEEptEv>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv>
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x3d4>
+je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x3ce>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE4LockEv>
 movl   $"onClose!",0x4(%esp)
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPKc>
 movl   $&_Z4endlIcER11TDebugTraceIT_ES3_,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11TDebugTraceIcElsEPFRS0_S1_E>
 movl   $&_ZN17ChannelServiceApp12gFileLogInfoE,(%esp)
 call   <T> <_ZN11TDebugTraceIcE6UnlockEv>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKPN17ChannelServiceApp7TCPUserEjEEptEv>
 mov    (%eax),%eax
 movl   $0xf3,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser7onCloseEPci>
-jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x423>
+jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x41d>
 lea    -0x1c(%ebp),%eax
 movl   $0x0,0x8(%esp)
 lea    -0x24(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKPN17ChannelServiceApp7TCPUserEjEEppEi>
 sub    $0x4,%esp
 mov    0x8(%ebp),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIPN17ChannelServiceApp7TCPUserEjSt4lessIS2_ESaISt4pairIKS2_jEEE3endEv>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKPN17ChannelServiceApp7TCPUserEjEEneERKS6_>
 test   %al,%al
-jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x33e>
-jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x423>
+jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x338>
+jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb+0x41d>
 nop
 mov    $0x1,%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool handleEvents(EpollReactor<ChannelServiceApp::TCPUser> * this, uint
   milisec, bool turn_of_idle) */

bool __thiscall
EpollReactor<ChannelServiceApp::TCPUser>::
_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEjb
          (EpollReactor<ChannelServiceApp::TCPUser> *this,uint milisec,bool turn_of_idle)

{
  TCPUser *this_00;
  bool bVar1;
  int iVar2;
  TDebugTrace<char> *pTVar3;
  int *piVar4;
  char *in_Str;
  pair<ChannelServiceApp::TCPUser*_const,_unsigned_int> *ppVar5;
  int iVar6;
  _Base_ptr local_34;
  undefined1 local_30;
  _Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_> local_28;
  _Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_> local_24;
  _Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_> local_20 [4];
  
  local_30 = turn_of_idle;
                    /* Unresolved local var: int n_event@[DW_OP_reg6(ESI)] */
  iVar2 = epoll_wait(this->epoll_fd_,(epoll_event *)this->events_,this->max_client_,milisec);
  if ((((0 < iVar2) && (handleEvents::lexical_block_0::last_n_event * 2 < iVar2)) && (100 < iVar2))
     || (((0 < iVar2 && (iVar2 < handleEvents::lexical_block_0::last_n_event / 2)) && (100 < iVar2))
        )) {
    handleEvents::lexical_block_0::last_n_event = iVar2;
    TDebugTrace<char>::Lock(&ChannelServiceApp::gFileLogInfo);
    iVar6 = handleEvents::lexical_block_0::last_n_event;
    pTVar3 = TDebugTrace<char>::operator<<(&ChannelServiceApp::gFileLogInfo,"last_n_event: ");
    pTVar3 = TDebugTrace<char>::operator<<(pTVar3,iVar6);
    TDebugTrace<char>::operator<<(pTVar3,endl<char>);
    TDebugTrace<char>::Unlock(&ChannelServiceApp::gFileLogInfo);
  }
  if (iVar2 < 0) {
    TDebugTrace<char>::Lock(&ChannelServiceApp::gFileLogError);
    piVar4 = __errno_location();
    in_Str = strerror(*piVar4);
    pTVar3 = TDebugTrace<char>::operator<<
                       (&ChannelServiceApp::gFileLogError,
                        "[EpollReactor< TSession >::HandleEvents] epoll_wait fail : errno=");
    pTVar3 = TDebugTrace<char>::operator<<(pTVar3,in_Str);
    TDebugTrace<char>::operator<<(pTVar3,endl<char>);
    TDebugTrace<char>::Unlock(&ChannelServiceApp::gFileLogError);
    bVar1 = false;
  }
  else {
                    /* Unresolved local var: int i@[DW_OP_reg7(EDI)] */
    for (iVar6 = 0; iVar6 < iVar2; iVar6 = iVar6 + 1) {
                    /* Unresolved local var: TCPUser * s@[DW_OP_reg3(EBX)] */
      this_00 = *(TCPUser **)&this->events_[iVar6].data;
      if (this_00 == (TCPUser *)0x0) {
        TDebugTrace<char>::Lock(&ChannelServiceApp::gFileLogInfo);
        pTVar3 = TDebugTrace<char>::operator<<
                           (&ChannelServiceApp::gFileLogInfo,
                            "************************TSession is NULL");
        TDebugTrace<char>::operator<<(pTVar3,endl<char>);
        TDebugTrace<char>::Unlock(&ChannelServiceApp::gFileLogInfo);
      }
      if ((this->events_[iVar6].events & 8) == 0) {
        if ((this->events_[iVar6].events & 0x10) == 0) {
          if ((this->events_[iVar6].events & 1) != 0) {
            ChannelServiceApp::TCPUser::onRead(this_00,"Reactor.inl",0xcc);
            bVar1 = ChannelServiceApp::TCPUser::isDisconnected(this_00);
            if (bVar1) goto LAB_0805b3fa;
          }
          if (((this->events_[iVar6].events & 4) == 0) ||
             (bVar1 = ChannelServiceApp::TCPUser::isToWrite(this_00), !bVar1)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            ChannelServiceApp::TCPUser::onWrite(this_00,"Reactor.inl",0xd7);
            bVar1 = ChannelServiceApp::TCPUser::isDisconnected(this_00);
            if (bVar1) goto LAB_0805b3fa;
          }
          bVar1 = ChannelServiceApp::TCPUser::isAboutToDisconnect(this_00);
          if (bVar1) {
            TDebugTrace<char>::Lock(&ChannelServiceApp::gFileLogError);
            pTVar3 = TDebugTrace<char>::operator<<(&ChannelServiceApp::gFileLogError,&DAT_0806e408);
            TDebugTrace<char>::operator<<(pTVar3,endl<char>);
            TDebugTrace<char>::Unlock(&ChannelServiceApp::gFileLogError);
            ChannelServiceApp::TCPUser::onClose(this_00,"Reactor.inl",0xe6);
          }
        }
        else {
          ChannelServiceApp::TCPUser::onClose(this_00,"Reactor.inl",0xc6);
        }
      }
      else {
        ChannelServiceApp::TCPUser::onClose(this_00,"Reactor.inl",0xc0);
      }
LAB_0805b3fa:
    }
    if (local_30 != _S_red) {
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>
                       iter@[???] */
      std::
      map<ChannelServiceApp::TCPUser*,_unsigned_int,_std::less<ChannelServiceApp::TCPUser*>,_std::allocator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>_>
      ::begin((map<ChannelServiceApp::TCPUser*,_unsigned_int,_std::less<ChannelServiceApp::TCPUser*>,_std::allocator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>_>
               *)&local_34);
      local_28._M_node = local_34;
      while( true ) {
        std::
        map<ChannelServiceApp::TCPUser*,_unsigned_int,_std::less<ChannelServiceApp::TCPUser*>,_std::allocator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>_>
        ::end((map<ChannelServiceApp::TCPUser*,_unsigned_int,_std::less<ChannelServiceApp::TCPUser*>,_std::allocator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>_>
               *)&local_24);
        bVar1 = std::_Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>
                ::operator!=(&local_28,&local_24);
        if ((!bVar1) ||
           (ppVar5 = std::
                     _Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>
                     ::operator->(&local_28), ppVar5->first == (TCPUser *)0x0)) goto LAB_0805b519;
        ppVar5 = std::_Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>
                 ::operator->(&local_28);
        bVar1 = ChannelServiceApp::TCPUser::isIdle(ppVar5->first);
        if (bVar1) break;
        std::_Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>::
        operator++(local_20,(int)&local_28);
      }
      TDebugTrace<char>::Lock(&ChannelServiceApp::gFileLogInfo);
      pTVar3 = TDebugTrace<char>::operator<<(&ChannelServiceApp::gFileLogInfo,"onClose!");
      TDebugTrace<char>::operator<<(pTVar3,endl<char>);
      TDebugTrace<char>::Unlock(&ChannelServiceApp::gFileLogInfo);
      ppVar5 = std::_Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>::
               operator->(&local_28);
      ChannelServiceApp::TCPUser::onClose(ppVar5->first,"Reactor.inl",0xf3);
    }
LAB_0805b519:
    bVar1 = true;
  }
  return bVar1;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelServer/TCPThread.cpp](source/ChannelOld/DNFChannelServer/TCPThread.cpp)（约第 178 行）：

```cpp
bool EpollReactor<TSession>::handleEvents(unsigned int milisec, bool turn_of_idle)
{
    static int last_n_event = 0;
    register int n_event = epoll_wait(epoll_fd_, events_, max_client_, (int)milisec);
    if ((((0 < n_event) && (last_n_event * 2 < n_event)) && (100 < n_event))
        || (((0 < n_event) && (n_event < last_n_event / 2)) && (100 < n_event)))
    {
        last_n_event = n_event;
        GLOG(ChannelServiceApp::gFileLogInfo, "last_n_event: " << last_n_event);
    }
    if (n_event < 0)
    {
        ChannelServiceApp::gFileLogError.Lock();
        ChannelServiceApp::gFileLogError << "[EpollReactor< TSession >::HandleEvents] epoll_wait fail : errno=" << strerror(*__errno_location()) << endl;
        ChannelServiceApp::gFileLogError.Unlock();
        return false;
    }
    for (register int i = 0; i < n_event; i++)
    {
        register TSession* s = (TSession*)events_[i].data.ptr;
        if (s == NULL)
        {
            GLOG(ChannelServiceApp::gFileLogInfo, "************************TSession is NULL");
        }
        if ((events_[i].events & 8) != 0)
        {
            s->onClose("Reactor.inl", 0xc0);
        }
        else if ((events_[i].events & 0x10) != 0)
        {
            s->onClose("Reactor.inl", 0xc6);
        }
        else
        {
            if ((events_[i].events & 1) != 0)
            {
                s->onRead("Reactor.inl", 0xcc);
                if (s->isDisconnected())
                {
                    continue;
                }
            }
            if (((events_[i].events & 4) != 0) && s->isToWrite())
            {
                s->onWrite("Reactor.inl", 0xd7);
                if (s->isDisconnected())
                {
                    continue;
                }
            }
            if (s->isAboutToDisconnect())
            {
                ChannelServiceApp::gFileLogError.Lock();
                ChannelServiceApp::gFileLogError << "isAboutToDisconnect \xb7\xce \xb2\xf7\xbe\xee\xc1\xf8\xb4\xd9" << endl;
                ChannelServiceApp::gFileLogError.Unlock();
                s->onClose("Reactor.inl", 0xe6);
            }
        }
    }
    if (turn_of_idle)
    {
        typename std::map<TSession*, unsigned int>::iterator iter = map_.begin();
        while (iter != map_.end())
        {
            if (iter->first == NULL)
            {
                goto done;
            }
            if (iter->first->isIdle())
            {
                GLOG(ChannelServiceApp::gFileLogInfo, "onClose!");
                iter->first->onClose("Reactor.inl", 0xf3);
                goto done;
            }
            iter++;
        }
    done:;
    }
    return true;
}
```
