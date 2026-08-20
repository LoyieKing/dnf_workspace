# dispatch_sig

`_ZN13TimerDBUpdate12dispatch_sigEiij`

`TimerDBUpdate::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerDBUpdate` | `0x08632f5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08632f5a  _ZN13TimerDBUpdate12dispatch_sigEiij
#           TimerDBUpdate::dispatch_sig(int, int, unsigned int)
# range [0x08632f5a, 0x08633107]
08632f5a +0x000:  push   %ebp
08632f5b +0x001:  mov    %esp,%ebp
08632f5d +0x003:  push   %edi
08632f5e +0x004:  push   %esi
08632f5f +0x005:  push   %ebx
08632f60 +0x006:  sub    $0x4c,%esp
08632f63 +0x009:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08632f68 +0x00e:  movl   $0x3,0x8(%esp)
08632f70 +0x016:  mov    0xc(%ebp),%edx
08632f73 +0x019:  mov    %edx,0x4(%esp)
08632f77 +0x01d:  mov    %eax,(%esp)
08632f7a +0x020:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08632f7f +0x025:  mov    %eax,-0x28(%ebp)
08632f82 +0x028:  cmpl   $0x0,-0x28(%ebp)
08632f86 +0x02c:  jne    08632f92 <+0x38>
08632f88 +0x02e:  mov    $0x0,%eax
08632f8d +0x033:  jmp    086330ff <+0x1a5>
08632f92 +0x038:  mov    -0x28(%ebp),%eax
08632f95 +0x03b:  mov    %eax,(%esp)
08632f98 +0x03e:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08632f9d +0x043:  mov    %eax,-0x24(%ebp)
08632fa0 +0x046:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08632fa7 +0x04d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08632fac +0x052:  mov    %eax,-0x20(%ebp)
08632faf +0x055:  mov    -0x24(%ebp),%eax
08632fb2 +0x058:  mov    -0x20(%ebp),%edx
08632fb5 +0x05b:  mov    %edx,%ecx
08632fb7 +0x05d:  sub    %eax,%ecx
08632fb9 +0x05f:  mov    $0x91a2b3c5,%edx
08632fbe +0x064:  mov    %ecx,%eax
08632fc0 +0x066:  imul   %edx
08632fc2 +0x068:  lea    (%edx,%ecx,1),%eax
08632fc5 +0x06b:  mov    %eax,%edx
08632fc7 +0x06d:  sar    $0xb,%edx
08632fca +0x070:  mov    %ecx,%eax
08632fcc +0x072:  sar    $0x1f,%eax
08632fcf +0x075:  mov    %edx,%ecx
08632fd1 +0x077:  sub    %eax,%ecx
08632fd3 +0x079:  mov    %ecx,%eax
08632fd5 +0x07b:  mov    %eax,-0x1c(%ebp)
08632fd8 +0x07e:  cmpl   $0x0,-0x1c(%ebp)
08632fdc +0x082:  jle    08633009 <+0xaf>
08632fde +0x084:  cmpl   $0x1,-0x1c(%ebp)
08632fe2 +0x088:  jg     08633009 <+0xaf>
08632fe4 +0x08a:  movl   $0x0,0xc(%esp)
08632fec +0x092:  movl   $0x0,0x8(%esp)
08632ff4 +0x09a:  movl   $0x23,0x4(%esp)
08632ffc +0x0a2:  mov    -0x28(%ebp),%eax
08632fff +0x0a5:  mov    %eax,(%esp)
08633002 +0x0a8:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
08633007 +0x0ad:  jmp    08633038 <+0xde>
08633009 +0x0af:  cmpl   $0xb,-0x1c(%ebp)
0863300d +0x0b3:  jle    08633038 <+0xde>
0863300f +0x0b5:  cmpl   $0xc,-0x1c(%ebp)
08633013 +0x0b9:  jg     08633038 <+0xde>
08633015 +0x0bb:  movl   $0x0,0xc(%esp)
0863301d +0x0c3:  movl   $0x0,0x8(%esp)
08633025 +0x0cb:  movl   $0x24,0x4(%esp)
0863302d +0x0d3:  mov    -0x28(%ebp),%eax
08633030 +0x0d6:  mov    %eax,(%esp)
08633033 +0x0d9:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
08633038 +0x0de:  mov    -0x28(%ebp),%eax
0863303b +0x0e1:  mov    %eax,(%esp)
0863303e +0x0e4:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08633043 +0x0e9:  cmp    0x10(%ebp),%eax
08633046 +0x0ec:  setne  %al
08633049 +0x0ef:  test   %al,%al
0863304b +0x0f1:  je     08633057 <+0xfd>
0863304d +0x0f3:  mov    $0x0,%eax
08633052 +0x0f8:  jmp    086330ff <+0x1a5>
08633057 +0x0fd:  cmpl   $0x0,0x14(%ebp)
0863305b +0x101:  je     08633074 <+0x11a>
0863305d +0x103:  mov    -0x28(%ebp),%eax
08633060 +0x106:  mov    %eax,(%esp)
08633063 +0x109:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08633068 +0x10e:  cmp    0x14(%ebp),%eax
0863306b +0x111:  je     08633074 <+0x11a>
0863306d +0x113:  mov    $0x1,%eax
08633072 +0x118:  jmp    08633079 <+0x11f>
08633074 +0x11a:  mov    $0x0,%eax
08633079 +0x11f:  test   %al,%al
0863307b +0x121:  je     08633084 <+0x12a>
0863307d +0x123:  mov    $0x0,%eax
08633082 +0x128:  jmp    086330ff <+0x1a5>
08633084 +0x12a:  mov    -0x28(%ebp),%eax
08633087 +0x12d:  mov    %eax,(%esp)
0863308a +0x130:  call   08653270 <_ZN5CUser10UpdateDataEv>  ; CUser::UpdateData()
0863308f +0x135:  mov    -0x28(%ebp),%eax
08633092 +0x138:  mov    %eax,(%esp)
08633095 +0x13b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0863309a +0x140:  mov    %eax,%edi
0863309c +0x142:  mov    -0x28(%ebp),%eax
0863309f +0x145:  mov    %eax,(%esp)
086330a2 +0x148:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
086330a7 +0x14d:  mov    %eax,%esi
086330a9 +0x14f:  movl   $0x12c,(%esp)
086330b0 +0x156:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086330b5 +0x15b:  add    $0x258,%eax
086330ba +0x160:  mov    %eax,-0x2c(%ebp)
086330bd +0x163:  mov    -0x28(%ebp),%eax
086330c0 +0x166:  mov    %eax,(%esp)
086330c3 +0x169:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086330c8 +0x16e:  mov    %eax,%ebx
086330ca +0x170:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086330cf +0x175:  mov    %edi,0x18(%esp)
086330d3 +0x179:  mov    %esi,0x14(%esp)
086330d7 +0x17d:  mov    -0x2c(%ebp),%edx
086330da +0x180:  mov    %edx,0x10(%esp)
086330de +0x184:  movl   $0x1,0xc(%esp)
086330e6 +0x18c:  mov    %ebx,0x8(%esp)
086330ea +0x190:  movl   $0x0,0x4(%esp)
086330f2 +0x198:  mov    %eax,(%esp)
086330f5 +0x19b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086330fa +0x1a0:  mov    $0x1,%eax
086330ff +0x1a5:  add    $0x4c,%esp
08633102 +0x1a8:  pop    %ebx
08633103 +0x1a9:  pop    %esi
08633104 +0x1aa:  pop    %edi
08633105 +0x1ab:  pop    %ebp
08633106 +0x1ac:  ret
08633107 +0x1ad:  nop
```

## 反编译 C

```c
// TimerDBUpdate::dispatch_sig @ 0x8632f5a

/* TimerDBUpdate::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerDBUpdate::dispatch_sig(TimerDBUpdate *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  CUserCharacInfo *this_00;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TimerQueue *pTVar8;
  
  iVar2 = G_CGameManager();
  this_00 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUserCharacInfo *)0x0) {
    return false;
  }
  iVar2 = CUserCharacInfo::GetLoginTick(this_00);
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar2 = (iVar3 - iVar2) / 0xe10;
  if ((iVar2 < 1) || (1 < iVar2)) {
    if ((0xb < iVar2) && (iVar2 < 0xd)) {
      APSystem::CUserProc::ClearActionAndSendtoUser(this_00,0x24,0,0);
    }
  }
  else {
    APSystem::CUserProc::ClearActionAndSendtoUser(this_00,0x23,0,0);
  }
  iVar2 = CUserCharacInfo::GetLoginTick(this_00);
  if (iVar2 != param_2) {
    return false;
  }
  if ((param_3 == 0) || (uVar4 = CUserCharacInfo::getCurCharacNo(this_00), uVar4 == param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    CUser::UpdateData((CUser *)this_00);
    uVar5 = CUserCharacInfo::getCurCharacNo(this_00);
    uVar6 = CUserCharacInfo::GetLoginTick(this_00);
    iVar2 = get_rand_int(300);
    uVar7 = CUser::GetUID((CUser *)this_00);
    pTVar8 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar8,0,uVar7,1,iVar2 + 600,uVar6,uVar5);
  }
  return !bVar1;
}
```
