# _ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj

`EpollReactor<ChannelServiceApp::TCPUser>::handleEvents(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x805dd80` | `0x343` | `0x8053172` | `0x32e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,233 +1,225 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
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
 mov    %eax,-0x18(%ebp)
 cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x27f>
+je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x27d>
 cmpl   $0x0,-0x18(%ebp)
 jns    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0xa6>
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
-jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x33e>
+jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x329>
 movl   $0x0,-0x14(%ebp)
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x26c>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%ecx
 mov    -0x14(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%ecx
 mov    -0x14(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x8,%eax
 test   %eax,%eax
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x10b>
 movl   $0x97,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser7onCloseEPci>
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x268>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%ecx
 mov    -0x14(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x10,%eax
 test   %eax,%eax
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x149>
 movl   $0x9d,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser7onCloseEPci>
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x268>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%ecx
 mov    -0x14(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x195>
 movl   $0xa3,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser6onReadEPci>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser14isDisconnectedEv>
 test   %al,%al
 jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x264>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%ecx
 mov    -0x14(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ecx,%eax,1),%eax
 mov    (%eax),%eax
 and    $0x4,%eax
 test   %eax,%eax
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x1c9>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser9isToWriteEv>
 test   %al,%al
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x1c9>
 mov    $0x1,%eax
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x1ce>
 mov    $0x0,%eax
 test   %al,%al
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x1fc>
 movl   $0xab,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser7onWriteEPci>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser14isDisconnectedEv>
 test   %al,%al
 jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x267>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser19isAboutToDisconnectEv>
 test   %al,%al
 je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x268>
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
 movl   $0xb5,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser7onCloseEPci>
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x268>
 nop
 jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x268>
 nop
 addl   $0x1,-0x14(%ebp)
 mov    -0x14(%ebp),%eax
 cmp    -0x18(%ebp),%eax
 setl   %al
 test   %al,%al
 jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0xb2>
-jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x280>
-nop
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIPN17ChannelServiceApp7TCPUserEjSt4lessIS2_ESaISt4pairIKS2_jEEE4sizeEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x339>
+je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x324>
 mov    0x8(%ebp),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIPN17ChannelServiceApp7TCPUserEjSt4lessIS2_ESaISt4pairIKS2_jEEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x30a>
+jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x2f9>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKPN17ChannelServiceApp7TCPUserEjEEptEv>
 mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKPN17ChannelServiceApp7TCPUserEjEEppEv>
-mov    (%eax),%eax
-mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x309>
+je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x2f9>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17ChannelServiceApp7TCPUser6isIdleEv>
 test   %al,%al
-je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x301>
+je     <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x2f9>
 movl   $0xc7,0x8(%esp)
 movl   $"Reactor.inl",0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ChannelServiceApp7TCPUser7onCloseEPci>
-jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x339>
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x30a>
-nop
+jmp    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x324>
 mov    0x8(%ebp),%edx
 lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIPN17ChannelServiceApp7TCPUserEjSt4lessIS2_ESaISt4pairIKS2_jEEE3endEv>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKPN17ChannelServiceApp7TCPUserEjEEneERKS6_>
 test   %al,%al
-jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x2af>
+jne    <T> <_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj+0x2ac>
 mov    $0x1,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool handleEvents(EpollReactor<ChannelServiceApp::TCPUser> * this, uint
   milisec) */

bool __thiscall
EpollReactor<ChannelServiceApp::TCPUser>::
_ZN12EpollReactorIN17ChannelServiceApp7TCPUserEE12handleEventsEj
          (EpollReactor<ChannelServiceApp::TCPUser> *this,uint milisec)

{
  _Base_ptr p_Var1;
  _Base_ptr p_Var2;
  bool bVar3;
  int *piVar4;
  char *in_Str;
  TDebugTrace<char> *pTVar5;
  size_t sVar6;
  pair<ChannelServiceApp::TCPUser*_const,_unsigned_int> *ppVar7;
  _Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_> *p_Var8;
  undefined1 local_24 [8];
  _Base_ptr local_1c;
  _Base_ptr local_18;
  TCPUser *local_14;
  TCPUser *local_10;
  
                    /* Unresolved local var: int n_event@[???] */
  local_1c = (_Base_ptr)
             epoll_wait(this->epoll_fd_,(epoll_event *)this->events_,this->max_client_,milisec);
  if (local_1c != (_Base_ptr)0x0) {
    if ((int)local_1c < 0) {
      TDebugTrace<char>::Lock(&ChannelServiceApp::gFileLogError);
      piVar4 = __errno_location();
      in_Str = strerror(*piVar4);
      pTVar5 = TDebugTrace<char>::operator<<
                         (&ChannelServiceApp::gFileLogError,
                          "[EpollReactor< TSession >::HandleEvents] epoll_wait fail : errno=");
      pTVar5 = TDebugTrace<char>::operator<<(pTVar5,in_Str);
      TDebugTrace<char>::operator<<(pTVar5,endl<char>);
      TDebugTrace<char>::Unlock(&ChannelServiceApp::gFileLogError);
      return false;
    }
                    /* Unresolved local var: int i@[???] */
    for (local_18 = (_Base_ptr)0x0; (int)local_18 < (int)local_1c;
        local_18 = (_Base_ptr)((int)&local_18->_M_color + 1)) {
                    /* Unresolved local var: TCPUser * s@[???] */
      local_14 = *(TCPUser **)&this->events_[(int)local_18].data;
      if ((this->events_[(int)local_18].events & 8) == 0) {
        if ((this->events_[(int)local_18].events & 0x10) == 0) {
          if ((this->events_[(int)local_18].events & 1) != 0) {
            ChannelServiceApp::TCPUser::onRead(local_14,"Reactor.inl",0xa3);
            bVar3 = ChannelServiceApp::TCPUser::isDisconnected(local_14);
            if (bVar3) goto LAB_0805dfe8;
          }
          if (((this->events_[(int)local_18].events & 4) == 0) ||
             (bVar3 = ChannelServiceApp::TCPUser::isToWrite(local_14), !bVar3)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            ChannelServiceApp::TCPUser::onWrite(local_14,"Reactor.inl",0xab);
            bVar3 = ChannelServiceApp::TCPUser::isDisconnected(local_14);
            if (bVar3) goto LAB_0805dfe8;
          }
          bVar3 = ChannelServiceApp::TCPUser::isAboutToDisconnect(local_14);
          if (bVar3) {
            TDebugTrace<char>::Lock(&ChannelServiceApp::gFileLogError);
            pTVar5 = TDebugTrace<char>::operator<<(&ChannelServiceApp::gFileLogError,&DAT_0812360c);
            TDebugTrace<char>::operator<<(pTVar5,endl<char>);
            TDebugTrace<char>::Unlock(&ChannelServiceApp::gFileLogError);
            ChannelServiceApp::TCPUser::onClose(local_14,"Reactor.inl",0xb5);
          }
        }
        else {
          ChannelServiceApp::TCPUser::onClose(local_14,"Reactor.inl",0x9d);
        }
      }
      else {
        ChannelServiceApp::TCPUser::onClose(local_14,"Reactor.inl",0x97);
      }
LAB_0805dfe8:
    }
  }
  sVar6 = std::
          map<ChannelServiceApp::TCPUser*,_unsigned_int,_std::less<ChannelServiceApp::TCPUser*>,_std::allocator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>_>
          ::size(&this->map_);
  if (sVar6 != 0) {
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>
                       i@[???] */
    std::
    map<ChannelServiceApp::TCPUser*,_unsigned_int,_std::less<ChannelServiceApp::TCPUser*>,_std::allocator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>_>
    ::begin((map<ChannelServiceApp::TCPUser*,_unsigned_int,_std::less<ChannelServiceApp::TCPUser*>,_std::allocator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>_>
             *)local_24);
    p_Var2 = (_Base_ptr)local_24._0_4_;
    do {
      local_24._0_4_ = p_Var2;
      std::
      map<ChannelServiceApp::TCPUser*,_unsigned_int,_std::less<ChannelServiceApp::TCPUser*>,_std::allocator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>_>
      ::end((map<ChannelServiceApp::TCPUser*,_unsigned_int,_std::less<ChannelServiceApp::TCPUser*>,_std::allocator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>_>
             *)(local_24 + 4));
      bVar3 = std::_Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>::
              operator!=((_Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>
                          *)local_24,
                         (_Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>
                          *)(local_24 + 4));
      if (!bVar3) {
        return true;
      }
                    /* Unresolved local var: TCPUser * s@[???]
                       Unresolved local var:
                       _Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>
                       next@[???] */
      ppVar7 = std::_Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>::
               operator->((_Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>
                           *)local_24);
      local_10 = ppVar7->first;
      p_Var8 = std::_Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>::
               operator++((_Rb_tree_iterator<std::pair<ChannelServiceApp::TCPUser*_const,_unsigned_int>_>
                           *)local_24);
      p_Var1 = p_Var8->_M_node;
      p_Var2 = (_Base_ptr)local_24._0_4_;
    } while ((local_10 == (TCPUser *)0x0) ||
            (bVar3 = ChannelServiceApp::TCPUser::isIdle(local_10), p_Var2 = p_Var1, !bVar3));
    ChannelServiceApp::TCPUser::onClose(local_10,"Reactor.inl",199);
  }
  return true;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/TCPThread.cpp](source/ChannelOld/DNFChannelBridge/TCPThread.cpp)（约第 45 行）：

```cpp
bool EpollReactor<TSession>::handleEvents(unsigned int milisec)
{
    int n_event = epoll_wait(epoll_fd_, events_, max_client_, (int)milisec);
    if (n_event != 0)
    {
        if (n_event < 0)
        {
            ChannelServiceApp::gFileLogError.Lock();
            ChannelServiceApp::gFileLogError << "[EpollReactor< TSession >::HandleEvents] epoll_wait fail : errno="
                                             << strerror(*__errno_location()) << endl;
            ChannelServiceApp::gFileLogError.Unlock();
            return false;
        }
        for (int i = 0; i < n_event; i++)
        {
            TSession* s = (TSession*)events_[i].data.ptr;
            if ((events_[i].events & 8) != 0)
            {
                s->onClose("Reactor.inl", 0x97);
            }
            else if ((events_[i].events & 0x10) != 0)
            {
                s->onClose("Reactor.inl", 0x9d);
            }
            else
            {
                if ((events_[i].events & 1) != 0)
                {
                    s->onRead("Reactor.inl", 0xa3);
                    if (s->isDisconnected())
                    {
                        continue;
                    }
                }
                if (((events_[i].events & 4) != 0) && s->isToWrite())
                {
                    s->onWrite("Reactor.inl", 0xab);
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
                    s->onClose("Reactor.inl", 0xb5);
                }
            }
        }
    }
    if (map_.size() != 0)
    {
        typename std::map<TSession*, unsigned int>::iterator iter = map_.begin();
        while (iter != map_.end())
        {
            TSession* s = iter->first;
            ++iter;
            if (s != NULL)
            {
                if (s->isIdle())
                {
                    s->onClose("Reactor.inl", 199);
                    break;
                }
            }
        }
    }
    return true;
}
```
