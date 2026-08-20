# OnKillVillageMonster

`_ZN16village_attacked15CVillageMonster20OnKillVillageMonsterEP5CUseriiib`

`village_attacked::CVillageMonster::OnKillVillageMonster(CUser*, int, int, int, bool)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonster` | `0x086b34a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b34a0  _ZN16village_attacked15CVillageMonster20OnKillVillageMonsterEP5CUseriiib
#           village_attacked::CVillageMonster::OnKillVillageMonster(CUser*, int, int, int, bool)
# range [0x086b34a0, 0x086b359f]
086b34a0 +0x00:  push   %ebp
086b34a1 +0x01:  mov    %esp,%ebp
086b34a3 +0x03:  push   %ebx
086b34a4 +0x04:  sub    $0x34,%esp
086b34a7 +0x07:  mov    0x1c(%ebp),%eax
086b34aa +0x0a:  mov    %al,-0xc(%ebp)
086b34ad +0x0d:  mov    0x8(%ebp),%eax
086b34b0 +0x10:  mov    0x14(%eax),%eax
086b34b3 +0x13:  cmp    $0x1,%eax
086b34b6 +0x16:  je     086b34c2 <+0x22>
086b34b8 +0x18:  mov    $0x13,%eax
086b34bd +0x1d:  jmp    086b359a <+0xfa>
086b34c2 +0x22:  cmpl   $0x0,0xc(%ebp)
086b34c6 +0x26:  je     086b34ef <+0x4f>
086b34c8 +0x28:  mov    0xc(%ebp),%eax
086b34cb +0x2b:  mov    %eax,(%esp)
086b34ce +0x2e:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
086b34d3 +0x33:  movswl %ax,%edx
086b34d6 +0x36:  mov    0x8(%ebp),%eax
086b34d9 +0x39:  mov    0x18(%eax),%eax
086b34dc +0x3c:  cmp    %eax,%edx
086b34de +0x3e:  setne  %al
086b34e1 +0x41:  test   %al,%al
086b34e3 +0x43:  je     086b34ef <+0x4f>
086b34e5 +0x45:  mov    $0x13,%eax
086b34ea +0x4a:  jmp    086b359a <+0xfa>
086b34ef +0x4f:  movzbl -0xc(%ebp),%eax
086b34f3 +0x53:  xor    $0x1,%eax
086b34f6 +0x56:  test   %al,%al
086b34f8 +0x58:  je     086b352e <+0x8e>
086b34fa +0x5a:  movl   $0x0,0x4(%esp)
086b3502 +0x62:  mov    0x8(%ebp),%eax
086b3505 +0x65:  mov    %eax,(%esp)
086b3508 +0x68:  call   086b35a0 <_ZN16village_attacked15CVillageMonster13OnChangeStateENS_26ENUM_VILLAGE_MONSTER_STATEE>  ; village_attacked::CVillageMonster::OnChangeState(village_attacked::ENUM_VILLAGE_MONSTER_STATE)
086b350d +0x6d:  movzbl -0xc(%ebp),%eax
086b3511 +0x71:  mov    %eax,0x8(%esp)
086b3515 +0x75:  mov    0xc(%ebp),%eax
086b3518 +0x78:  mov    %eax,0x4(%esp)
086b351c +0x7c:  mov    0x8(%ebp),%eax
086b351f +0x7f:  mov    %eax,(%esp)
086b3522 +0x82:  call   086b330a <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb>  ; village_attacked::CVillageMonster::SendVillageMonsterFightResult(CUser*, bool)
086b3527 +0x87:  mov    $0x0,%eax
086b352c +0x8c:  jmp    086b359a <+0xfa>
086b352e +0x8e:  movl   $0x2,0x4(%esp)
086b3536 +0x96:  mov    0x8(%ebp),%eax
086b3539 +0x99:  mov    %eax,(%esp)
086b353c +0x9c:  call   086b35a0 <_ZN16village_attacked15CVillageMonster13OnChangeStateENS_26ENUM_VILLAGE_MONSTER_STATEE>  ; village_attacked::CVillageMonster::OnChangeState(village_attacked::ENUM_VILLAGE_MONSTER_STATE)
086b3541 +0xa1:  mov    0x14(%ebp),%ebx
086b3544 +0xa4:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086b3549 +0xa9:  mov    %ebx,0x18(%esp)
086b354d +0xad:  mov    0x10(%ebp),%edx
086b3550 +0xb0:  mov    %edx,0x14(%esp)
086b3554 +0xb4:  mov    0x18(%ebp),%edx
086b3557 +0xb7:  mov    %edx,0x10(%esp)
086b355b +0xbb:  movl   $0x86,0xc(%esp)
086b3563 +0xc3:  movl   $0x0,0x8(%esp)
086b356b +0xcb:  movl   $0x2,0x4(%esp)
086b3573 +0xd3:  mov    %eax,(%esp)
086b3576 +0xd6:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086b357b +0xdb:  movzbl -0xc(%ebp),%eax
086b357f +0xdf:  mov    %eax,0x8(%esp)
086b3583 +0xe3:  mov    0xc(%ebp),%eax
086b3586 +0xe6:  mov    %eax,0x4(%esp)
086b358a +0xea:  mov    0x8(%ebp),%eax
086b358d +0xed:  mov    %eax,(%esp)
086b3590 +0xf0:  call   086b330a <_ZN16village_attacked15CVillageMonster29SendVillageMonsterFightResultEP5CUserb>  ; village_attacked::CVillageMonster::SendVillageMonsterFightResult(CUser*, bool)
086b3595 +0xf5:  mov    $0x0,%eax
086b359a +0xfa:  add    $0x34,%esp
086b359d +0xfd:  pop    %ebx
086b359e +0xfe:  pop    %ebp
086b359f +0xff:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonster::OnKillVillageMonster @ 0x86b34a0

/* village_attacked::CVillageMonster::OnKillVillageMonster(CUser*, int, int, int, bool) */

undefined4 __thiscall
village_attacked::CVillageMonster::OnKillVillageMonster
          (CVillageMonster *this,CUser *param_1,int param_2,int param_3,int param_4,bool param_5)

{
  short sVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  if (*(int *)(this + 0x14) == 1) {
    if ((param_1 != (CUser *)0x0) &&
       (sVar1 = CUser::GetPartyIndex(param_1), (int)sVar1 != *(int *)(this + 0x18))) {
      return 0x13;
    }
    if (param_5) {
      OnChangeState(this,2);
      pTVar3 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar3,2,0,0x86,param_4,param_2,param_3);
      SendVillageMonsterFightResult(this,param_1,true);
      uVar2 = 0;
    }
    else {
      OnChangeState(this,0);
      SendVillageMonsterFightResult(this,param_1,false);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}
```
