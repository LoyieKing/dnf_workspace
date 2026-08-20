# SetPeriodCheckTimer

`_ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser`

`WongWork::CMailBoxHelper::SetPeriodCheckTimer(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x085523e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085523e2  _ZN8WongWork14CMailBoxHelper19SetPeriodCheckTimerEP5CUser
#           WongWork::CMailBoxHelper::SetPeriodCheckTimer(CUser*)
# range [0x085523e2, 0x0855254b]
085523e2 +0x000:  push   %ebp
085523e3 +0x001:  mov    %esp,%ebp
085523e5 +0x003:  push   %edi
085523e6 +0x004:  push   %esi
085523e7 +0x005:  push   %ebx
085523e8 +0x006:  sub    $0x5c,%esp
085523eb +0x009:  mov    0x8(%ebp),%eax
085523ee +0x00c:  mov    %eax,(%esp)
085523f1 +0x00f:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
085523f6 +0x014:  mov    %eax,-0x28(%ebp)
085523f9 +0x017:  cmpl   $0x0,-0x28(%ebp)
085523fd +0x01b:  je     08552540 <+0x15e>
08552403 +0x021:  movl   $0x151800,-0x24(%ebp)
0855240a +0x028:  movl   $0x151800,-0x20(%ebp)
08552411 +0x02f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08552418 +0x036:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0855241d +0x03b:  mov    %eax,-0x1c(%ebp)
08552420 +0x03e:  mov    -0x1c(%ebp),%eax
08552423 +0x041:  add    %eax,-0x20(%ebp)
08552426 +0x044:  mov    -0x20(%ebp),%eax
08552429 +0x047:  mov    %eax,-0x34(%ebp)
0855242c +0x04a:  mov    -0x28(%ebp),%eax
0855242f +0x04d:  lea    0x40(%eax),%edx
08552432 +0x050:  lea    -0x38(%ebp),%eax
08552435 +0x053:  mov    %edx,0x4(%esp)
08552439 +0x057:  mov    %eax,(%esp)
0855243c +0x05a:  call   085581cc <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd2d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd2d
08552441 +0x05f:  sub    $0x4,%esp
08552444 +0x062:  mov    -0x28(%ebp),%eax
08552447 +0x065:  lea    0x40(%eax),%edx
0855244a +0x068:  lea    -0x30(%ebp),%eax
0855244d +0x06b:  mov    %edx,0x4(%esp)
08552451 +0x06f:  mov    %eax,(%esp)
08552454 +0x072:  call   085581a6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd07>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd07
08552459 +0x077:  sub    $0x4,%esp
0855245c +0x07a:  lea    -0x30(%ebp),%eax
0855245f +0x07d:  mov    %eax,0x4(%esp)
08552463 +0x081:  lea    -0x3c(%ebp),%eax
08552466 +0x084:  mov    %eax,(%esp)
08552469 +0x087:  call   085586f8 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1259>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1259
0855246e +0x08c:  jmp    085524c8 <+0xe6>
08552470 +0x08e:  lea    -0x38(%ebp),%eax
08552473 +0x091:  mov    %eax,(%esp)
08552476 +0x094:  call   08558224 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd85>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd85
0855247b +0x099:  mov    0x4(%eax),%eax
0855247e +0x09c:  mov    %eax,(%esp)
08552481 +0x09f:  call   08557590 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf1>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf1
08552486 +0x0a4:  test   %al,%al
08552488 +0x0a6:  jne    085524bc <+0xda>
0855248a +0x0a8:  lea    -0x38(%ebp),%eax
0855248d +0x0ab:  mov    %eax,(%esp)
08552490 +0x0ae:  call   08558224 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd85>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd85
08552495 +0x0b3:  mov    0x4(%eax),%eax
08552498 +0x0b6:  mov    %eax,(%esp)
0855249b +0x0b9:  call   085574f2 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x53>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x53
085524a0 +0x0be:  mov    %eax,-0x2c(%ebp)
085524a3 +0x0c1:  lea    -0x2c(%ebp),%eax
085524a6 +0x0c4:  mov    %eax,0x4(%esp)
085524aa +0x0c8:  lea    -0x34(%ebp),%eax
085524ad +0x0cb:  mov    %eax,(%esp)
085524b0 +0x0ce:  call   08558739 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x129a>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x129a
085524b5 +0x0d3:  mov    (%eax),%eax
085524b7 +0x0d5:  mov    %eax,-0x34(%ebp)
085524ba +0x0d8:  jmp    085524bd <+0xdb>
085524bc +0x0da:  nop
085524bd +0x0db:  lea    -0x38(%ebp),%eax
085524c0 +0x0de:  mov    %eax,(%esp)
085524c3 +0x0e1:  call   08558206 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd67>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd67
085524c8 +0x0e6:  lea    -0x3c(%ebp),%eax
085524cb +0x0e9:  mov    %eax,0x4(%esp)
085524cf +0x0ed:  lea    -0x38(%ebp),%eax
085524d2 +0x0f0:  mov    %eax,(%esp)
085524d5 +0x0f3:  call   08558725 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1286>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1286
085524da +0x0f8:  test   %al,%al
085524dc +0x0fa:  jne    08552470 <+0x8e>
085524de +0x0fc:  mov    -0x34(%ebp),%eax
085524e1 +0x0ff:  cmp    -0x20(%ebp),%eax
085524e4 +0x102:  je     08552541 <+0x15f>
085524e6 +0x104:  mov    0x8(%ebp),%eax
085524e9 +0x107:  mov    %eax,(%esp)
085524ec +0x10a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085524f1 +0x10f:  mov    %eax,%edi
085524f3 +0x111:  mov    0x8(%ebp),%eax
085524f6 +0x114:  mov    %eax,(%esp)
085524f9 +0x117:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
085524fe +0x11c:  mov    %eax,%esi
08552500 +0x11e:  mov    0x8(%ebp),%eax
08552503 +0x121:  mov    %eax,(%esp)
08552506 +0x124:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0855250b +0x129:  mov    %eax,%ebx
0855250d +0x12b:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08552512 +0x130:  movl   $0x0,0x18(%esp)
0855251a +0x138:  mov    %edi,0x14(%esp)
0855251e +0x13c:  mov    %esi,0x10(%esp)
08552522 +0x140:  movl   $0x8,0xc(%esp)
0855252a +0x148:  mov    %ebx,0x8(%esp)
0855252e +0x14c:  movl   $0x0,0x4(%esp)
08552536 +0x154:  mov    %eax,(%esp)
08552539 +0x157:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0855253e +0x15c:  jmp    08552541 <+0x15f>
08552540 +0x15e:  nop
08552541 +0x15f:  lea    -0xc(%ebp),%esp
08552544 +0x162:  add    $0x0,%esp
08552547 +0x165:  pop    %ebx
08552548 +0x166:  pop    %esi
08552549 +0x167:  pop    %edi
0855254a +0x168:  pop    %ebp
0855254b +0x169:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::SetPeriodCheckTimer @ 0x85523e2

/* WongWork::CMailBoxHelper::SetPeriodCheckTimer(CUser*) */

void WongWork::CMailBoxHelper::SetPeriodCheckTimer(CUser *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TimerQueue *pTVar8;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_40 [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_3c [4];
  int local_38;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_34 [4];
  long local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  local_2c = CUser::GetMailBox(param_1);
  if (local_2c != 0) {
    local_28 = 0x151800;
    local_24 = 0x151800;
    local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_38 = local_24 + local_20;
    local_24 = local_38;
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::begin(local_3c);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::end(local_34);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    _Rb_tree_const_iterator(local_40,(_Rb_tree_iterator *)local_34);
    while( true ) {
      bVar2 = std::operator!=((_Rb_tree_iterator *)local_3c,(_Rb_tree_const_iterator *)local_40);
      if (!bVar2) break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                          *)local_3c);
      cVar1 = CMailBox::CMail::isUnlimit(*(CMail **)(iVar3 + 4));
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                            *)local_3c);
        local_30 = CMailBox::CMail::GetPeriod(*(CMail **)(iVar3 + 4));
        plVar4 = std::min<long>(&local_38,&local_30);
        local_38 = *plVar4;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                 local_3c);
    }
    if (local_38 != local_24) {
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar6 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_1);
      uVar7 = CUser::GetUID(param_1);
      pTVar8 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar8,0,uVar7,8,uVar6,uVar5,0);
    }
  }
  return;
}
```
