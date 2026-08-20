# updatePcRoomPlayTime

`_ZN5CUser20updatePcRoomPlayTimeEv`

`CUser::updatePcRoomPlayTime()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f726` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f726  _ZN5CUser20updatePcRoomPlayTimeEv
#           CUser::updatePcRoomPlayTime()
# range [0x0868f726, 0x0868f7b9]
0868f726 +0x00:  push   %ebp
0868f727 +0x01:  mov    %esp,%ebp
0868f729 +0x03:  push   %esi
0868f72a +0x04:  push   %ebx
0868f72b +0x05:  sub    $0x20,%esp
0868f72e +0x08:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868f733 +0x0d:  mov    %eax,(%esp)
0868f736 +0x10:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
0868f73b +0x15:  movl   $0x5c,0x4(%esp)
0868f743 +0x1d:  mov    %eax,(%esp)
0868f746 +0x20:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0868f74b +0x25:  mov    %eax,-0xc(%ebp)
0868f74e +0x28:  cmpl   $0x0,-0xc(%ebp)
0868f752 +0x2c:  je     0868f7b2 <+0x8c>
0868f754 +0x2e:  mov    0x8(%ebp),%eax
0868f757 +0x31:  mov    %eax,0x4(%esp)
0868f75b +0x35:  mov    -0xc(%ebp),%eax
0868f75e +0x38:  mov    %eax,(%esp)
0868f761 +0x3b:  call   08110a38 <_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser>  ; EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(CUser*)
0868f766 +0x40:  test   %eax,%eax
0868f768 +0x42:  sete   %al
0868f76b +0x45:  test   %al,%al
0868f76d +0x47:  je     0868f7b3 <+0x8d>
0868f76f +0x49:  mov    0x8(%ebp),%eax
0868f772 +0x4c:  mov    %eax,(%esp)
0868f775 +0x4f:  call   0868f7ba <_ZN5CUser21collectPcRoomPlayTimeEv>  ; CUser::collectPcRoomPlayTime()
0868f77a +0x54:  mov    0x8(%ebp),%eax
0868f77d +0x57:  mov    %eax,(%esp)
0868f780 +0x5a:  call   08110dec <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2fe>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2fe
0868f785 +0x5f:  movzbl %al,%esi
0868f788 +0x62:  mov    0x8(%ebp),%eax
0868f78b +0x65:  mov    %eax,(%esp)
0868f78e +0x68:  call   08110e10 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x322>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x322
0868f793 +0x6d:  mov    %eax,%ebx
0868f795 +0x6f:  mov    0x8(%ebp),%eax
0868f798 +0x72:  mov    %eax,(%esp)
0868f79b +0x75:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0868f7a0 +0x7a:  mov    %esi,0x8(%esp)
0868f7a4 +0x7e:  mov    %ebx,0x4(%esp)
0868f7a8 +0x82:  mov    %eax,(%esp)
0868f7ab +0x85:  call   08447bd0 <_ZN26DB_SavePcRoomPlayTimeEvent11makeRequestEjjh>  ; DB_SavePcRoomPlayTimeEvent::makeRequest(unsigned int, unsigned int, unsigned char)
0868f7b0 +0x8a:  jmp    0868f7b3 <+0x8d>
0868f7b2 +0x8c:  nop
0868f7b3 +0x8d:  add    $0x20,%esp
0868f7b6 +0x90:  pop    %ebx
0868f7b7 +0x91:  pop    %esi
0868f7b8 +0x92:  pop    %ebp
0868f7b9 +0x93:  ret
```

## 反编译 C

```c
// CUser::updatePcRoomPlayTime @ 0x868f726

/* CUser::updatePcRoomPlayTime() */

void __thiscall CUser::updatePcRoomPlayTime(CUser *this)

{
  uchar uVar1;
  CDataManager *this_00;
  int iVar2;
  CPcRoomPlayTime *this_01;
  uint uVar3;
  uint uVar4;
  
  this_00 = (CDataManager *)G_CDataManager();
  iVar2 = CDataManager::get_event_script_mng(this_00);
  this_01 = (CPcRoomPlayTime *)EventClassify::CEventScriptMng::get_event_entity(iVar2);
  if (this_01 != (CPcRoomPlayTime *)0x0) {
    iVar2 = EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(this_01,this);
    if (iVar2 == 0) {
      collectPcRoomPlayTime(this);
      uVar1 = getPcRoomPlayTimeRewardCnt(this);
      uVar3 = getTotalPcRoomPlayTime(this);
      uVar4 = get_acc_id(this);
      DB_SavePcRoomPlayTimeEvent::makeRequest(uVar4,uVar3,uVar1);
    }
  }
  return;
}
```
