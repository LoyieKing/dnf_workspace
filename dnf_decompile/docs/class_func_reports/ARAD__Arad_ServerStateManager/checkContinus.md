# checkContinus

`_ZN4ARAD23Arad_ServerStateManager13checkContinusEv`

`ARAD::Arad_ServerStateManager::checkContinus()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a95dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a95dc  _ZN4ARAD23Arad_ServerStateManager13checkContinusEv
#           ARAD::Arad_ServerStateManager::checkContinus()
# range [0x081a95dc, 0x081a97f7]
081a95dc +0x000:  push   %ebp
081a95dd +0x001:  mov    %esp,%ebp
081a95df +0x003:  push   %esi
081a95e0 +0x004:  push   %ebx
081a95e1 +0x005:  sub    $0x50,%esp
081a95e4 +0x008:  mov    0x8(%ebp),%eax
081a95e7 +0x00b:  add    $0x4,%eax
081a95ea +0x00e:  mov    %eax,0x4(%esp)
081a95ee +0x012:  lea    -0x28(%ebp),%eax
081a95f1 +0x015:  mov    %eax,(%esp)
081a95f4 +0x018:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
081a95f9 +0x01d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081a9600 +0x024:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081a9605 +0x029:  mov    %eax,-0xc(%ebp)
081a9608 +0x02c:  mov    0x8(%ebp),%eax
081a960b +0x02f:  lea    0x1c(%eax),%edx
081a960e +0x032:  lea    -0x2c(%ebp),%eax
081a9611 +0x035:  mov    %edx,0x4(%esp)
081a9615 +0x039:  mov    %eax,(%esp)
081a9618 +0x03c:  call   081a9e9a <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x195>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x195
081a961d +0x041:  sub    $0x4,%esp
081a9620 +0x044:  jmp    081a9788 <+0x1ac>
081a9625 +0x049:  lea    -0x2c(%ebp),%eax
081a9628 +0x04c:  mov    %eax,(%esp)
081a962b +0x04f:  call   081a9f56 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x251>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x251
081a9630 +0x054:  mov    0x6(%eax),%eax
081a9633 +0x057:  cmp    -0xc(%ebp),%eax
081a9636 +0x05a:  ja     081a9654 <+0x78>
081a9638 +0x05c:  lea    -0x2c(%ebp),%eax
081a963b +0x05f:  mov    %eax,(%esp)
081a963e +0x062:  call   081a9f56 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x251>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x251
081a9643 +0x067:  movzwl 0x4(%eax),%eax
081a9647 +0x06b:  cmp    $0x1,%ax
081a964b +0x06f:  jne    081a9654 <+0x78>
081a964d +0x071:  mov    $0x1,%eax
081a9652 +0x076:  jmp    081a9659 <+0x7d>
081a9654 +0x078:  mov    $0x0,%eax
081a9659 +0x07d:  test   %al,%al
081a965b +0x07f:  je     081a977d <+0x1a1>
081a9661 +0x085:  lea    -0x2c(%ebp),%eax
081a9664 +0x088:  mov    %eax,(%esp)
081a9667 +0x08b:  call   081a9f56 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x251>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x251
081a966c +0x090:  movw   $0x0,0x4(%eax)
081a9672 +0x096:  lea    -0x2c(%ebp),%eax
081a9675 +0x099:  mov    %eax,(%esp)
081a9678 +0x09c:  call   081a9f56 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x251>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x251
081a967d +0x0a1:  lea    0x4(%eax),%ebx
081a9680 +0x0a4:  lea    -0x2c(%ebp),%eax
081a9683 +0x0a7:  mov    %eax,(%esp)
081a9686 +0x0aa:  call   081a9f56 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x251>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x251
081a968b +0x0af:  mov    (%eax),%eax
081a968d +0x0b1:  movl   $0x0,0xc(%esp)
081a9695 +0x0b9:  mov    %ebx,0x8(%esp)
081a9699 +0x0bd:  mov    %eax,0x4(%esp)
081a969d +0x0c1:  mov    0x8(%ebp),%eax
081a96a0 +0x0c4:  mov    %eax,(%esp)
081a96a3 +0x0c7:  call   081a9a1c <_ZN4ARAD23Arad_ServerStateManager16sendEffectPacketE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageP5CUser>  ; ARAD::Arad_ServerStateManager::sendEffectPacket(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, CUser*)
081a96a8 +0x0cc:  lea    -0x2c(%ebp),%eax
081a96ab +0x0cf:  mov    %eax,(%esp)
081a96ae +0x0d2:  call   081a9f56 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x251>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x251
081a96b3 +0x0d7:  lea    0x4(%eax),%ebx
081a96b6 +0x0da:  lea    -0x2c(%ebp),%eax
081a96b9 +0x0dd:  mov    %eax,(%esp)
081a96bc +0x0e0:  call   081a9f56 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x251>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x251
081a96c1 +0x0e5:  mov    (%eax),%eax
081a96c3 +0x0e7:  movl   $0x0,0x10(%esp)
081a96cb +0x0ef:  mov    %ebx,0xc(%esp)
081a96cf +0x0f3:  mov    %eax,0x8(%esp)
081a96d3 +0x0f7:  movl   $0x1,0x4(%esp)
081a96db +0x0ff:  mov    0x8(%ebp),%eax
081a96de +0x102:  mov    %eax,(%esp)
081a96e1 +0x105:  call   081a9afa <_ZN4ARAD23Arad_ServerStateManager15saveServerStateE26ENUM_NOTIFY_EVENT_CATEGORY23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageb>  ; ARAD::Arad_ServerStateManager::saveServerState(ENUM_NOTIFY_EVENT_CATEGORY, ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, bool)
081a96e6 +0x10a:  lea    -0x2c(%ebp),%eax
081a96e9 +0x10d:  mov    %eax,(%esp)
081a96ec +0x110:  call   081a9f56 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x251>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x251
081a96f1 +0x115:  mov    0x6(%eax),%esi
081a96f4 +0x118:  lea    -0x2c(%ebp),%eax
081a96f7 +0x11b:  mov    %eax,(%esp)
081a96fa +0x11e:  call   081a9f56 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x251>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x251
081a96ff +0x123:  mov    (%eax),%eax
081a9701 +0x125:  mov    %eax,%ebx
081a9703 +0x127:  movl   $0x0,0xc(%esp)
081a970b +0x12f:  movl   $0x56,0x8(%esp)
081a9713 +0x137:  movl   $&_ZZN4ARAD23Arad_ServerStateManager13checkContinusEvE19__PRETTY_FUNCTION__,0x4(%esp)
081a971b +0x13f:  lea    -0x20(%ebp),%eax
081a971e +0x142:  mov    %eax,(%esp)
081a9721 +0x145:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081a9726 +0x14a:  mov    %esi,0x10(%esp)
081a972a +0x14e:  mov    %ebx,0xc(%esp)
081a972e +0x152:  movl   $0x1,0x8(%esp)
081a9736 +0x15a:  movl   $"[SERVER_STAT] delete server stat. (category:%d, code:%d, end:%u)",0x4(%esp)
081a973e +0x162:  lea    -0x20(%ebp),%eax
081a9741 +0x165:  mov    %eax,(%esp)
081a9744 +0x168:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081a9749 +0x16d:  lea    -0x10(%ebp),%eax
081a974c +0x170:  movl   $0x0,0x8(%esp)
081a9754 +0x178:  lea    -0x2c(%ebp),%edx
081a9757 +0x17b:  mov    %edx,0x4(%esp)
081a975b +0x17f:  mov    %eax,(%esp)
081a975e +0x182:  call   081a9f64 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x25f>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x25f
081a9763 +0x187:  sub    $0x4,%esp
081a9766 +0x18a:  mov    0x8(%ebp),%eax
081a9769 +0x18d:  lea    0x1c(%eax),%edx
081a976c +0x190:  mov    -0x10(%ebp),%eax
081a976f +0x193:  mov    %eax,0x4(%esp)
081a9773 +0x197:  mov    %edx,(%esp)
081a9776 +0x19a:  call   081a9fa2 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x29d>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x29d
081a977b +0x19f:  jmp    081a9788 <+0x1ac>
081a977d +0x1a1:  lea    -0x2c(%ebp),%eax
081a9780 +0x1a4:  mov    %eax,(%esp)
081a9783 +0x1a7:  call   081a9fbc <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x2b7>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x2b7
081a9788 +0x1ac:  mov    0x8(%ebp),%eax
081a978b +0x1af:  lea    0x1c(%eax),%edx
081a978e +0x1b2:  lea    -0x24(%ebp),%eax
081a9791 +0x1b5:  mov    %edx,0x4(%esp)
081a9795 +0x1b9:  mov    %eax,(%esp)
081a9798 +0x1bc:  call   081a9ec0 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x1bb>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x1bb
081a979d +0x1c1:  sub    $0x4,%esp
081a97a0 +0x1c4:  lea    -0x24(%ebp),%eax
081a97a3 +0x1c7:  mov    %eax,0x4(%esp)
081a97a7 +0x1cb:  lea    -0x2c(%ebp),%eax
081a97aa +0x1ce:  mov    %eax,(%esp)
081a97ad +0x1d1:  call   081a9f42 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x23d>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x23d
081a97b2 +0x1d6:  test   %al,%al
081a97b4 +0x1d8:  jne    081a9625 <+0x49>
081a97ba +0x1de:  mov    0x8(%ebp),%eax
081a97bd +0x1e1:  mov    %eax,(%esp)
081a97c0 +0x1e4:  call   081a98d4 <_ZN4ARAD23Arad_ServerStateManager11attachTimerEv>  ; ARAD::Arad_ServerStateManager::attachTimer()
081a97c5 +0x1e9:  jmp    081a97e2 <+0x206>
081a97c7 +0x1eb:  mov    %edx,%ebx
081a97c9 +0x1ed:  mov    %eax,%esi
081a97cb +0x1ef:  lea    -0x28(%ebp),%eax
081a97ce +0x1f2:  mov    %eax,(%esp)
081a97d1 +0x1f5:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081a97d6 +0x1fa:  mov    %esi,%eax
081a97d8 +0x1fc:  mov    %ebx,%edx
081a97da +0x1fe:  mov    %eax,(%esp)
081a97dd +0x201:  call   08ae3750 <_Unwind_Resume>
081a97e2 +0x206:  lea    -0x28(%ebp),%eax
081a97e5 +0x209:  mov    %eax,(%esp)
081a97e8 +0x20c:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
081a97ed +0x211:  lea    -0x8(%ebp),%esp
081a97f0 +0x214:  add    $0x0,%esp
081a97f3 +0x217:  pop    %ebx
081a97f4 +0x218:  pop    %esi
081a97f5 +0x219:  pop    %ebp
081a97f6 +0x21a:  ret
081a97f7 +0x21b:  nop
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::checkContinus @ 0x81a95dc

/* ARAD::Arad_ServerStateManager::checkContinus() */

void __thiscall ARAD::Arad_ServerStateManager::checkContinus(Arad_ServerStateManager *this)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  local_30 [4];
  Guard<Mutex> local_2c [4];
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  local_28 [4];
  cMyTrace local_24 [16];
  undefined4 local_14;
  uint local_10;
  
  Guard<Mutex>::Guard(local_2c,(Mutex *)(this + 4));
  local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    /* try { // try from 081a9618 to 081a97c4 has its CatchHandler @ 081a97c7 */
  std::
  map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
  ::begin(local_30);
  do {
    std::
    map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
    ::end(local_28);
    cVar3 = std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
            ::operator!=((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30,(_Rb_tree_iterator *)local_28);
    if (cVar3 == '\0') {
      attachTimer();
      Guard<Mutex>::~Guard(local_2c);
      return;
    }
    iVar4 = std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
            ::operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
    if (local_10 < *(uint *)(iVar4 + 6)) {
LAB_081a9654:
      bVar2 = false;
    }
    else {
      iVar4 = std::
              _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
      if (*(short *)(iVar4 + 4) != 1) goto LAB_081a9654;
      bVar2 = true;
    }
    if (bVar2) {
      iVar4 = std::
              _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
      *(undefined2 *)(iVar4 + 4) = 0;
      iVar4 = std::
              _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
      puVar5 = (undefined4 *)
               std::
               _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
               operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                           *)local_30);
      sendEffectPacket(this,*puVar5,iVar4 + 4,0);
      iVar4 = std::
              _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
      puVar5 = (undefined4 *)
               std::
               _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
               operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                           *)local_30);
      saveServerState(this,1,*puVar5,iVar4 + 4,0);
      iVar4 = std::
              _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
              operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                          *)local_30);
      uVar6 = *(undefined4 *)(iVar4 + 6);
      puVar5 = (undefined4 *)
               std::
               _Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
               operator->((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                           *)local_30);
      uVar1 = *puVar5;
      cMyTrace::cMyTrace(local_24,"void ARAD::Arad_ServerStateManager::checkContinus()",0x56,0);
      cMyTrace::operator()
                (local_24,"[SERVER_STAT] delete server stat. (category:%d, code:%d, end:%u)",1,uVar1
                 ,uVar6);
      uVar6 = 0;
      std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
      operator++((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                  *)&local_14,(int)local_30);
      std::
      map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
      ::erase((map<ENUM_GLOBAL_EFFECT_ARAD,AradServerStateMessage,std::less<ENUM_GLOBAL_EFFECT_ARAD>,std::allocator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>>
               *)(this + 0x1c),local_14,uVar6);
    }
    else {
      std::_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>::
      operator++((_Rb_tree_iterator<std::pair<ENUM_GLOBAL_EFFECT_ARAD_const,AradServerStateMessage>>
                  *)local_30);
    }
  } while( true );
}
```
