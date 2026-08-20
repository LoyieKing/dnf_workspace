# dispatch

`_ZN13NetworkThread8dispatchEPv`

`NetworkThread::dispatch(void*)`

| 类 | 地址 |
|---|---|
| `NetworkThread` | `0x0857d5be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0857d5be  _ZN13NetworkThread8dispatchEPv
#           NetworkThread::dispatch(void*)
# range [0x0857d5be, 0x0857d8ef]
0857d5be +0x000:  push   %ebp
0857d5bf +0x001:  mov    %esp,%ebp
0857d5c1 +0x003:  push   %esi
0857d5c2 +0x004:  push   %ebx
0857d5c3 +0x005:  sub    $0x60,%esp
0857d5c6 +0x008:  call   082a70ab <_GLOBAL__I__ZN4CLog5this_E+0x34d2>  ; global constructors keyed to CLog::this_+0x34d2
0857d5cb +0x00d:  mov    %eax,(%esp)
0857d5ce +0x010:  call   0848ff70 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0xc4e>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0xc4e
0857d5d3 +0x015:  mov    %eax,-0x24(%ebp)
0857d5d6 +0x018:  call   082a70ab <_GLOBAL__I__ZN4CLog5this_E+0x34d2>  ; global constructors keyed to CLog::this_+0x34d2
0857d5db +0x01d:  mov    %eax,(%esp)
0857d5de +0x020:  call   0848ff64 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0xc42>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0xc42
0857d5e3 +0x025:  mov    %eax,-0x20(%ebp)
0857d5e6 +0x028:  movl   $0x0,-0x1c(%ebp)
0857d5ed +0x02f:  movl   $0x0,-0x18(%ebp)
0857d5f4 +0x036:  jmp    0857d89d <+0x2df>
0857d5f9 +0x03b:  call   0807dd70 <_init+0x668>
0857d5fe +0x040:  movl   $0x0,(%eax)
0857d604 +0x046:  movl   $0xa,(%esp)
0857d60b +0x04d:  call   0858c4e0 <_ZN6OS_API5SleepEi>  ; OS_API::Sleep(int)
0857d610 +0x052:  movl   $&_ZN10GlobalData12s_accept_queE,(%esp)
0857d617 +0x059:  call   0857f5da <_GLOBAL__I_g_bUdp_TH_start+0x1f1>  ; global constructors keyed to g_bUdp_TH_start+0x1f1
0857d61c +0x05e:  xor    $0x1,%eax
0857d61f +0x061:  test   %al,%al
0857d621 +0x063:  je     0857d73f <+0x181>
0857d627 +0x069:  movl   $&_ZN10GlobalData13s_accept_lockE,(%esp)
0857d62e +0x070:  call   0810539e <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x1d>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x1d
0857d633 +0x075:  movl   $0x0,-0x14(%ebp)
0857d63a +0x07c:  jmp    0857d71c <+0x15e>
0857d63f +0x081:  movl   $&_ZN10GlobalData12s_accept_queE,(%esp)
0857d646 +0x088:  call   0857f5ee <_GLOBAL__I_g_bUdp_TH_start+0x205>  ; global constructors keyed to g_bUdp_TH_start+0x205
0857d64b +0x08d:  mov    (%eax),%eax
0857d64d +0x08f:  mov    %eax,-0x14(%ebp)
0857d650 +0x092:  movl   $0x0,-0x10(%ebp)
0857d657 +0x099:  mov    -0x14(%ebp),%eax
0857d65a +0x09c:  add    $0xe0,%eax
0857d65f +0x0a1:  mov    %eax,(%esp)
0857d662 +0x0a4:  call   082b2cb8 <_GLOBAL__I__ZN4CLog5this_E+0xf0df>  ; global constructors keyed to CLog::this_+0xf0df
0857d667 +0x0a9:  mov    %eax,%ebx
0857d669 +0x0ab:  call   082a70ab <_GLOBAL__I__ZN4CLog5this_E+0x34d2>  ; global constructors keyed to CLog::this_+0x34d2
0857d66e +0x0b0:  movl   $0x0,0xc(%esp)
0857d676 +0x0b8:  mov    %ebx,0x8(%esp)
0857d67a +0x0bc:  mov    -0x14(%ebp),%edx
0857d67d +0x0bf:  mov    %edx,0x4(%esp)
0857d681 +0x0c3:  mov    %eax,(%esp)
0857d684 +0x0c6:  call   0857c1c6 <_ZN12EpollHandler8SetEpollEPvib>  ; EpollHandler::SetEpoll(void*, int, bool)
0857d689 +0x0cb:  mov    %eax,-0x10(%ebp)
0857d68c +0x0ce:  cmpl   $0x0,-0x10(%ebp)
0857d690 +0x0d2:  setne  %al
0857d693 +0x0d5:  test   %al,%al
0857d695 +0x0d7:  je     0857d710 <+0x152>
0857d697 +0x0d9:  mov    -0x10(%ebp),%eax
0857d69a +0x0dc:  mov    %eax,(%esp)
0857d69d +0x0df:  call   0807d730 <_init+0x28>
0857d6a2 +0x0e4:  mov    %eax,%esi
0857d6a4 +0x0e6:  mov    -0x14(%ebp),%eax
0857d6a7 +0x0e9:  add    $0xe0,%eax
0857d6ac +0x0ee:  mov    %eax,(%esp)
0857d6af +0x0f1:  call   082b2cb8 <_GLOBAL__I__ZN4CLog5this_E+0xf0df>  ; global constructors keyed to CLog::this_+0xf0df
0857d6b4 +0x0f6:  mov    %eax,%ebx
0857d6b6 +0x0f8:  mov    -0x14(%ebp),%eax
0857d6b9 +0x0fb:  mov    %eax,(%esp)
0857d6bc +0x0fe:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0857d6c1 +0x103:  movl   $0x0,0x4(%esp)
0857d6c9 +0x10b:  mov    %eax,(%esp)
0857d6cc +0x10e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0857d6d1 +0x113:  mov    %esi,0x20(%esp)
0857d6d5 +0x117:  mov    -0x10(%ebp),%edx
0857d6d8 +0x11a:  mov    %edx,0x1c(%esp)
0857d6dc +0x11e:  mov    %ebx,0x18(%esp)
0857d6e0 +0x122:  mov    %eax,0x14(%esp)
0857d6e4 +0x126:  movl   $"(m_id: %s) G_EpollHandler()->SetEpoll(pUser->get_socket(%d)) %d(%s)",0x10(%esp)
0857d6ec +0x12e:  movl   $0x2c4,0xc(%esp)
0857d6f4 +0x136:  movl   $&_ZZN13NetworkThread8dispatchEPvE19__PRETTY_FUNCTION__,0x8(%esp)
0857d6fc +0x13e:  movl   $"NetworkThread.cpp",0x4(%esp)
0857d704 +0x146:  movl   $0x1,(%esp)
0857d70b +0x14d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0857d710 +0x152:  movl   $&_ZN10GlobalData12s_accept_queE,(%esp)
0857d717 +0x159:  call   0857f602 <_GLOBAL__I_g_bUdp_TH_start+0x219>  ; global constructors keyed to g_bUdp_TH_start+0x219
0857d71c +0x15e:  movl   $&_ZN10GlobalData12s_accept_queE,(%esp)
0857d723 +0x165:  call   0857f5da <_GLOBAL__I_g_bUdp_TH_start+0x1f1>  ; global constructors keyed to g_bUdp_TH_start+0x1f1
0857d728 +0x16a:  xor    $0x1,%eax
0857d72b +0x16d:  test   %al,%al
0857d72d +0x16f:  jne    0857d63f <+0x81>
0857d733 +0x175:  movl   $&_ZN10GlobalData13s_accept_lockE,(%esp)
0857d73a +0x17c:  call   081053b2 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x31>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x31
0857d73f +0x181:  movl   $0x64,0xc(%esp)
0857d747 +0x189:  movl   $0x258,0x8(%esp)
0857d74f +0x191:  mov    -0x24(%ebp),%eax
0857d752 +0x194:  mov    %eax,0x4(%esp)
0857d756 +0x198:  mov    -0x20(%ebp),%eax
0857d759 +0x19b:  mov    %eax,(%esp)
0857d75c +0x19e:  call   0807dc00 <_init+0x4f8>
0857d761 +0x1a3:  mov    %eax,-0x18(%ebp)
0857d764 +0x1a6:  cmpl   $0x0,-0x18(%ebp)
0857d768 +0x1aa:  je     0857d89c <+0x2de>
0857d76e +0x1b0:  cmpl   $0x0,-0x18(%ebp)
0857d772 +0x1b4:  jns    0857d78f <+0x1d1>
0857d774 +0x1b6:  call   0807dd70 <_init+0x668>
0857d779 +0x1bb:  mov    (%eax),%eax
0857d77b +0x1bd:  cmp    $0x4,%eax
0857d77e +0x1c0:  je     0857d78f <+0x1d1>
0857d780 +0x1c2:  call   0807dd70 <_init+0x668>
0857d785 +0x1c7:  mov    (%eax),%eax
0857d787 +0x1c9:  test   %eax,%eax
0857d789 +0x1cb:  jne    0857d8e7 <+0x329>
0857d78f +0x1d1:  movl   $0x0,-0xc(%ebp)
0857d796 +0x1d8:  jmp    0857d889 <+0x2cb>
0857d79b +0x1dd:  mov    -0xc(%ebp),%edx
0857d79e +0x1e0:  mov    %edx,%eax
0857d7a0 +0x1e2:  add    %eax,%eax
0857d7a2 +0x1e4:  add    %edx,%eax
0857d7a4 +0x1e6:  shl    $0x2,%eax
0857d7a7 +0x1e9:  add    -0x24(%ebp),%eax
0857d7aa +0x1ec:  mov    0x4(%eax),%eax
0857d7ad +0x1ef:  mov    %eax,-0x1c(%ebp)
0857d7b0 +0x1f2:  cmpl   $0x0,-0x1c(%ebp)
0857d7b4 +0x1f6:  je     0857d884 <+0x2c6>
0857d7ba +0x1fc:  mov    -0xc(%ebp),%edx
0857d7bd +0x1ff:  mov    %edx,%eax
0857d7bf +0x201:  add    %eax,%eax
0857d7c1 +0x203:  add    %edx,%eax
0857d7c3 +0x205:  shl    $0x2,%eax
0857d7c6 +0x208:  add    -0x24(%ebp),%eax
0857d7c9 +0x20b:  mov    (%eax),%eax
0857d7cb +0x20d:  and    $0x1,%eax
0857d7ce +0x210:  test   %al,%al
0857d7d0 +0x212:  je     0857d7dd <+0x21f>
0857d7d2 +0x214:  mov    -0x1c(%ebp),%eax
0857d7d5 +0x217:  mov    %eax,(%esp)
0857d7d8 +0x21a:  call   08647ffc <_ZN5CUser4RecvEv>  ; CUser::Recv()
0857d7dd +0x21f:  mov    -0x1c(%ebp),%eax
0857d7e0 +0x222:  mov    0x1110(%eax),%eax
0857d7e6 +0x228:  test   %eax,%eax
0857d7e8 +0x22a:  je     0857d847 <+0x289>
0857d7ea +0x22c:  mov    -0xc(%ebp),%edx
0857d7ed +0x22f:  mov    %edx,%eax
0857d7ef +0x231:  add    %eax,%eax
0857d7f1 +0x233:  add    %edx,%eax
0857d7f3 +0x235:  shl    $0x2,%eax
0857d7f6 +0x238:  add    -0x24(%ebp),%eax
0857d7f9 +0x23b:  mov    (%eax),%eax
0857d7fb +0x23d:  and    $0x4,%eax
0857d7fe +0x240:  test   %eax,%eax
0857d800 +0x242:  je     0857d847 <+0x289>
0857d802 +0x244:  mov    -0x1c(%ebp),%eax
0857d805 +0x247:  mov    0x1110(%eax),%eax
0857d80b +0x24d:  cmp    $0x6ddd0,%eax
0857d810 +0x252:  jbe    0857d837 <+0x279>
0857d812 +0x254:  movl   $0x0,0xc(%esp)
0857d81a +0x25c:  movl   $0x0,0x8(%esp)
0857d822 +0x264:  movl   $0x6,0x4(%esp)
0857d82a +0x26c:  mov    -0x1c(%ebp),%eax
0857d82d +0x26f:  mov    %eax,(%esp)
0857d830 +0x272:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
0857d835 +0x277:  jmp    0857d847 <+0x289>
0857d837 +0x279:  mov    -0x1c(%ebp),%eax
0857d83a +0x27c:  add    $0xe0,%eax
0857d83f +0x281:  mov    %eax,(%esp)
0857d842 +0x284:  call   0857f616 <_GLOBAL__I_g_bUdp_TH_start+0x22d>  ; global constructors keyed to g_bUdp_TH_start+0x22d
0857d847 +0x289:  mov    -0xc(%ebp),%edx
0857d84a +0x28c:  mov    %edx,%eax
0857d84c +0x28e:  add    %eax,%eax
0857d84e +0x290:  add    %edx,%eax
0857d850 +0x292:  shl    $0x2,%eax
0857d853 +0x295:  add    -0x24(%ebp),%eax
0857d856 +0x298:  mov    (%eax),%eax
0857d858 +0x29a:  and    $0x18,%eax
0857d85b +0x29d:  test   %eax,%eax
0857d85d +0x29f:  je     0857d885 <+0x2c7>
0857d85f +0x2a1:  movl   $0x0,0xc(%esp)
0857d867 +0x2a9:  movl   $0x0,0x8(%esp)
0857d86f +0x2b1:  movl   $0x9,0x4(%esp)
0857d877 +0x2b9:  mov    -0x1c(%ebp),%eax
0857d87a +0x2bc:  mov    %eax,(%esp)
0857d87d +0x2bf:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
0857d882 +0x2c4:  jmp    0857d885 <+0x2c7>
0857d884 +0x2c6:  nop
0857d885 +0x2c7:  addl   $0x1,-0xc(%ebp)
0857d889 +0x2cb:  mov    -0xc(%ebp),%eax
0857d88c +0x2ce:  cmp    -0x18(%ebp),%eax
0857d88f +0x2d1:  setl   %al
0857d892 +0x2d4:  test   %al,%al
0857d894 +0x2d6:  jne    0857d79b <+0x1dd>
0857d89a +0x2dc:  jmp    0857d89d <+0x2df>
0857d89c +0x2de:  nop
0857d89d +0x2df:  movzbl &_ZN10GlobalData13s_server_stopE,%eax
0857d8a4 +0x2e6:  xor    $0x1,%eax
0857d8a7 +0x2e9:  test   %al,%al
0857d8a9 +0x2eb:  jne    0857d5f9 <+0x3b>
0857d8af +0x2f1:  movl   $0x0,0xc(%esp)
0857d8b7 +0x2f9:  movl   $0x2fe,0x8(%esp)
0857d8bf +0x301:  movl   $&_ZZN13NetworkThread8dispatchEPvE19__PRETTY_FUNCTION__,0x4(%esp)
0857d8c7 +0x309:  lea    -0x34(%ebp),%eax
0857d8ca +0x30c:  mov    %eax,(%esp)
0857d8cd +0x30f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0857d8d2 +0x314:  movl   $"RecvThread Terminate",0x4(%esp)
0857d8da +0x31c:  lea    -0x34(%ebp),%eax
0857d8dd +0x31f:  mov    %eax,(%esp)
0857d8e0 +0x322:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0857d8e5 +0x327:  jmp    0857d8e8 <+0x32a>
0857d8e7 +0x329:  nop
0857d8e8 +0x32a:  add    $0x60,%esp
0857d8eb +0x32d:  pop    %ebx
0857d8ec +0x32e:  pop    %esi
0857d8ed +0x32f:  pop    %ebp
0857d8ee +0x330:  ret
0857d8ef +0x331:  nop
```

## 反编译 C

```c
// NetworkThread::dispatch @ 0x857d5be

/* NetworkThread::dispatch(void*) */

void NetworkThread::dispatch(void *param_1)

{
  char cVar1;
  EpollHandler *pEVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  cMyTrace local_38 [16];
  epoll_event *local_28;
  int local_24;
  CUser *local_20;
  int local_1c;
  CUser *local_18;
  int local_14;
  int local_10;
  
  pEVar2 = (EpollHandler *)G_EpollHandler();
  local_28 = (epoll_event *)EpollHandler::GetEpollEvents(pEVar2);
  pEVar2 = (EpollHandler *)G_EpollHandler();
  local_24 = EpollHandler::GetEpollFD(pEVar2);
  local_20 = (CUser *)0x0;
  local_1c = 0;
  while( true ) {
    do {
      if (GlobalData::s_server_stop == '\x01') {
        cMyTrace::cMyTrace(local_38,"virtual void NetworkThread::dispatch(void*)",0x2fe,0);
        cMyTrace::operator()(local_38,"RecvThread Terminate");
        return;
      }
      piVar3 = __errno_location();
      *piVar3 = 0;
      OS_API::Sleep(10);
      cVar1 = std::queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>>::empty
                        ((queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>> *)
                         GlobalData::s_accept_que);
      if (cVar1 != '\x01') {
        Mutex::lock((Mutex *)GlobalData::s_accept_lock);
        local_18 = (CUser *)0x0;
        while (cVar1 = std::queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>>::empty
                                 ((queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>> *)
                                  GlobalData::s_accept_que), cVar1 != '\x01') {
          piVar3 = (int *)std::queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>>::front();
          local_18 = (CUser *)*piVar3;
          local_14 = 0;
          iVar4 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(local_18 + 0xe0));
          pEVar2 = (EpollHandler *)G_EpollHandler();
          local_14 = EpollHandler::SetEpoll(pEVar2,local_18,iVar4,false);
          if (local_14 != 0) {
            pcVar5 = strerror(local_14);
            uVar6 = CNetwork<4096,450000>::get_socket((CNetwork<4096,450000> *)(local_18 + 0xe0));
            uVar7 = CUser::get_acc_id(local_18);
            uVar8 = NumberToString(uVar7,0);
            LogManager::logFormat
                      (1,"NetworkThread.cpp","virtual void NetworkThread::dispatch(void*)",0x2c4,
                       "(m_id: %s) G_EpollHandler()->SetEpoll(pUser->get_socket(%d)) %d(%s)",uVar8,
                       uVar6,local_14,pcVar5);
          }
          std::queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>>::pop
                    ((queue<CUser*,std::deque<CUser*,std::allocator<CUser*>>> *)
                     GlobalData::s_accept_que);
        }
        Mutex::unlock((Mutex *)GlobalData::s_accept_lock);
      }
      local_1c = epoll_wait(local_24,local_28,600,100);
    } while (local_1c == 0);
    if (((local_1c < 0) && (piVar3 = __errno_location(), *piVar3 != 4)) &&
       (piVar3 = __errno_location(), *piVar3 != 0)) break;
    for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
      local_20 = local_28[local_10].data.ptr;
      if (local_20 != (CUser *)0x0) {
        if ((local_28[local_10].events & 1) != 0) {
          CUser::Recv(local_20);
        }
        if ((*(int *)(local_20 + 0x1110) != 0) && ((local_28[local_10].events & 4) != 0)) {
          if (*(uint *)(local_20 + 0x1110) < 0x6ddd1) {
            CNetwork<4096,450000>::send_packet((CNetwork<4096,450000> *)(local_20 + 0xe0));
          }
          else {
            CUser::DisConnSig(local_20,6,0,0);
          }
        }
        if ((local_28[local_10].events & 0x18) != 0) {
          CUser::DisConnSig(local_20,9,0,0);
        }
      }
    }
  }
  return;
}
```
