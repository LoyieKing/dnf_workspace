# dispatch_sig

`_ZN12TimerStamina12dispatch_sigEiij`

`TimerStamina::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerStamina` | `0x08633cbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08633cbc  _ZN12TimerStamina12dispatch_sigEiij
#           TimerStamina::dispatch_sig(int, int, unsigned int)
# range [0x08633cbc, 0x08633e13]
08633cbc +0x000:  push   %ebp
08633cbd +0x001:  mov    %esp,%ebp
08633cbf +0x003:  push   %edi
08633cc0 +0x004:  push   %esi
08633cc1 +0x005:  push   %ebx
08633cc2 +0x006:  sub    $0x3c,%esp
08633cc5 +0x009:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08633cca +0x00e:  movl   $0x4,0x8(%esp)
08633cd2 +0x016:  mov    0xc(%ebp),%edx
08633cd5 +0x019:  mov    %edx,0x4(%esp)
08633cd9 +0x01d:  mov    %eax,(%esp)
08633cdc +0x020:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08633ce1 +0x025:  mov    %eax,-0x1c(%ebp)
08633ce4 +0x028:  cmpl   $0x0,-0x1c(%ebp)
08633ce8 +0x02c:  jne    08633cf4 <+0x38>
08633cea +0x02e:  mov    $0x0,%eax
08633cef +0x033:  jmp    08633e0c <+0x150>
08633cf4 +0x038:  mov    -0x1c(%ebp),%eax
08633cf7 +0x03b:  mov    %eax,(%esp)
08633cfa +0x03e:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08633cff +0x043:  cmp    0x10(%ebp),%eax
08633d02 +0x046:  setne  %al
08633d05 +0x049:  test   %al,%al
08633d07 +0x04b:  je     08633d13 <+0x57>
08633d09 +0x04d:  mov    $0x0,%eax
08633d0e +0x052:  jmp    08633e0c <+0x150>
08633d13 +0x057:  cmpl   $0x0,0x14(%ebp)
08633d17 +0x05b:  je     08633d38 <+0x7c>
08633d19 +0x05d:  movl   $0xffffffff,0x4(%esp)
08633d21 +0x065:  mov    -0x1c(%ebp),%eax
08633d24 +0x068:  mov    %eax,(%esp)
08633d27 +0x06b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08633d2c +0x070:  cmp    0x14(%ebp),%eax
08633d2f +0x073:  je     08633d38 <+0x7c>
08633d31 +0x075:  mov    $0x1,%eax
08633d36 +0x07a:  jmp    08633d3d <+0x81>
08633d38 +0x07c:  mov    $0x0,%eax
08633d3d +0x081:  test   %al,%al
08633d3f +0x083:  je     08633d4b <+0x8f>
08633d41 +0x085:  mov    $0x0,%eax
08633d46 +0x08a:  jmp    08633e0c <+0x150>
08633d4b +0x08f:  mov    -0x1c(%ebp),%eax
08633d4e +0x092:  mov    %eax,(%esp)
08633d51 +0x095:  call   0865784e <_ZN5CUser15recover_staminaEv>  ; CUser::recover_stamina()
08633d56 +0x09a:  mov    -0x1c(%ebp),%eax
08633d59 +0x09d:  mov    %eax,(%esp)
08633d5c +0x0a0:  call   0863bdf2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x303>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x303
08633d61 +0x0a5:  mov    -0x1c(%ebp),%eax
08633d64 +0x0a8:  mov    %eax,(%esp)
08633d67 +0x0ab:  call   0863bdd0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x2e1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x2e1
08633d6c +0x0b0:  mov    %eax,%ebx
08633d6e +0x0b2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08633d73 +0x0b7:  mov    0xec(%eax),%eax
08633d79 +0x0bd:  cmp    %eax,%ebx
08633d7b +0x0bf:  setge  %al
08633d7e +0x0c2:  test   %al,%al
08633d80 +0x0c4:  je     08633daf <+0xf3>
08633d82 +0x0c6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08633d87 +0x0cb:  mov    0xe8(%eax),%edx
08633d8d +0x0d1:  mov    -0x1c(%ebp),%eax
08633d90 +0x0d4:  mov    %edx,0x4(%esp)
08633d94 +0x0d8:  mov    %eax,(%esp)
08633d97 +0x0db:  call   0822f84a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ef4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ef4
08633d9c +0x0e0:  mov    -0x1c(%ebp),%eax
08633d9f +0x0e3:  movl   $0x0,0x4(%esp)
08633da7 +0x0eb:  mov    %eax,(%esp)
08633daa +0x0ee:  call   084ec30c <_GLOBAL__I__Z7getUserj+0x32be>  ; global constructors keyed to getUser(unsigned int)+0x32be
08633daf +0x0f3:  mov    -0x1c(%ebp),%eax
08633db2 +0x0f6:  mov    %eax,(%esp)
08633db5 +0x0f9:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08633dba +0x0fe:  mov    %eax,%edi
08633dbc +0x100:  mov    -0x1c(%ebp),%eax
08633dbf +0x103:  mov    %eax,(%esp)
08633dc2 +0x106:  call   0822f692 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d3c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d3c
08633dc7 +0x10b:  mov    %eax,%esi
08633dc9 +0x10d:  mov    -0x1c(%ebp),%eax
08633dcc +0x110:  mov    %eax,(%esp)
08633dcf +0x113:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08633dd4 +0x118:  mov    %eax,%ebx
08633dd6 +0x11a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08633ddb +0x11f:  mov    %edi,0x18(%esp)
08633ddf +0x123:  mov    %esi,0x14(%esp)
08633de3 +0x127:  movl   $0x3c,0x10(%esp)
08633deb +0x12f:  movl   $0x2,0xc(%esp)
08633df3 +0x137:  mov    %ebx,0x8(%esp)
08633df7 +0x13b:  movl   $0x0,0x4(%esp)
08633dff +0x143:  mov    %eax,(%esp)
08633e02 +0x146:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08633e07 +0x14b:  mov    $0x1,%eax
08633e0c +0x150:  add    $0x3c,%esp
08633e0f +0x153:  pop    %ebx
08633e10 +0x154:  pop    %esi
08633e11 +0x155:  pop    %edi
08633e12 +0x156:  pop    %ebp
08633e13 +0x157:  ret
```

## 反编译 C

```c
// TimerStamina::dispatch_sig @ 0x8633cbc

/* TimerStamina::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerStamina::dispatch_sig(TimerStamina *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  CUserCharacInfo *this_00;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TimerQueue *pTVar8;
  
  iVar2 = G_CGameManager();
  this_00 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUserCharacInfo *)0x0) {
    return 0;
  }
  iVar2 = CUserCharacInfo::GetLoginTick(this_00);
  if (iVar2 == param_2) {
    if ((param_3 == 0) || (uVar3 = CUser::get_charac_no((CUser *)this_00,-1), uVar3 == param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      CUser::recover_stamina((CUser *)this_00);
      CUserCharacInfo::IncCurCharacLuckPointUpdateTimeCount(this_00);
      iVar2 = CUserCharacInfo::GetCurCharacLuckPointUpdateTimeCount(this_00);
      iVar5 = G_CDataManager();
      if (*(int *)(iVar5 + 0xec) <= iVar2) {
        iVar2 = G_CDataManager();
        CUserCharacInfo::IncCurCharacLuckPoint(this_00,*(int *)(iVar2 + 0xe8));
        CUserCharacInfo::SetCurCharacLuckPointUpdateTimeCount(this_00,0);
      }
      uVar4 = CUserCharacInfo::getCurCharacNo(this_00);
      uVar6 = CUserCharacInfo::GetLoginTick(this_00);
      uVar7 = CUser::GetUID((CUser *)this_00);
      pTVar8 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar8,0,uVar7,2,0x3c,uVar6,uVar4);
      uVar4 = 1;
    }
    return uVar4;
  }
  return 0;
}
```
