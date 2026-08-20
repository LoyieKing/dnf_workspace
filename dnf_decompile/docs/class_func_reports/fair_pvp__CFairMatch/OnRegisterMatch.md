# OnRegisterMatch

`_ZN8fair_pvp10CFairMatch15OnRegisterMatchEP5CUserP8PvP_Room`

`fair_pvp::CFairMatch::OnRegisterMatch(CUser*, PvP_Room*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08563bba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08563bba  _ZN8fair_pvp10CFairMatch15OnRegisterMatchEP5CUserP8PvP_Room
#           fair_pvp::CFairMatch::OnRegisterMatch(CUser*, PvP_Room*)
# range [0x08563bba, 0x08563cc5]
08563bba +0x000:  push   %ebp
08563bbb +0x001:  mov    %esp,%ebp
08563bbd +0x003:  push   %ebx
08563bbe +0x004:  sub    $0x24,%esp
08563bc1 +0x007:  mov    0x8(%ebp),%eax
08563bc4 +0x00a:  mov    0x4(%eax),%eax
08563bc7 +0x00d:  cmp    $0x1,%eax
08563bca +0x010:  jne    08563bd6 <+0x1c>
08563bcc +0x012:  mov    $0x1,%eax
08563bd1 +0x017:  jmp    08563cc0 <+0x106>
08563bd6 +0x01c:  movzbl &_ZN8fair_pvp10CFairMatch11bMatchable_E,%eax
08563bdd +0x023:  xor    $0x1,%eax
08563be0 +0x026:  test   %al,%al
08563be2 +0x028:  je     08563c09 <+0x4f>
08563be4 +0x02a:  movl   $0x13,0x8(%esp)
08563bec +0x032:  movl   $0xc7,0x4(%esp)
08563bf4 +0x03a:  mov    0xc(%ebp),%eax
08563bf7 +0x03d:  mov    %eax,(%esp)
08563bfa +0x040:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08563bff +0x045:  mov    $0x0,%eax
08563c04 +0x04a:  jmp    08563cc0 <+0x106>
08563c09 +0x04f:  movl   $0x0,-0xc(%ebp)
08563c10 +0x056:  mov    0x10(%ebp),%eax
08563c13 +0x059:  mov    %eax,0x4(%esp)
08563c17 +0x05d:  mov    0x8(%ebp),%eax
08563c1a +0x060:  mov    %eax,(%esp)
08563c1d +0x063:  call   08563a54 <_ZNK8fair_pvp10CFairMatch15_CheckMatchableEP8PvP_Room>  ; fair_pvp::CFairMatch::_CheckMatchable(PvP_Room*) const
08563c22 +0x068:  mov    %eax,-0xc(%ebp)
08563c25 +0x06b:  cmpl   $0x0,-0xc(%ebp)
08563c29 +0x06f:  setne  %al
08563c2c +0x072:  test   %al,%al
08563c2e +0x074:  je     08563c54 <+0x9a>
08563c30 +0x076:  mov    -0xc(%ebp),%eax
08563c33 +0x079:  movzbl %al,%eax
08563c36 +0x07c:  mov    %eax,0x8(%esp)
08563c3a +0x080:  movl   $0xc7,0x4(%esp)
08563c42 +0x088:  mov    0xc(%ebp),%eax
08563c45 +0x08b:  mov    %eax,(%esp)
08563c48 +0x08e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08563c4d +0x093:  mov    $0x0,%eax
08563c52 +0x098:  jmp    08563cc0 <+0x106>
08563c54 +0x09a:  mov    0x8(%ebp),%eax
08563c57 +0x09d:  mov    0x4(%eax),%eax
08563c5a +0x0a0:  cmp    $0x2,%eax
08563c5d +0x0a3:  je     08563c71 <+0xb7>
08563c5f +0x0a5:  mov    0x10(%ebp),%eax
08563c62 +0x0a8:  mov    %eax,0x4(%esp)
08563c66 +0x0ac:  mov    0x8(%ebp),%eax
08563c69 +0x0af:  mov    %eax,(%esp)
08563c6c +0x0b2:  call   08563a32 <_ZN8fair_pvp10CFairMatch20_RegisterWaitingRoomEP8PvP_Room>  ; fair_pvp::CFairMatch::_RegisterWaitingRoom(PvP_Room*)
08563c71 +0x0b7:  mov    0x8(%ebp),%eax
08563c74 +0x0ba:  movl   $0x1,0x4(%eax)
08563c7b +0x0c1:  mov    0x8(%ebp),%eax
08563c7e +0x0c4:  mov    0x18(%eax),%ebx
08563c81 +0x0c7:  mov    0x10(%ebp),%eax
08563c84 +0x0ca:  mov    %eax,(%esp)
08563c87 +0x0cd:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
08563c8c +0x0d2:  mov    %ebx,0x8(%esp)
08563c90 +0x0d6:  mov    %eax,0x4(%esp)
08563c94 +0x0da:  movl   $0xa,(%esp)
08563c9b +0x0e1:  call   08637e14 <_ZN18TimerStartMatching15registNextTimerElii>  ; TimerStartMatching::registNextTimer(long, int, int)
08563ca0 +0x0e6:  movl   $0x1,0x8(%esp)
08563ca8 +0x0ee:  movl   $0x0,0x4(%esp)
08563cb0 +0x0f6:  mov    0x8(%ebp),%eax
08563cb3 +0x0f9:  mov    %eax,(%esp)
08563cb6 +0x0fc:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
08563cbb +0x101:  mov    $0x1,%eax
08563cc0 +0x106:  add    $0x24,%esp
08563cc3 +0x109:  pop    %ebx
08563cc4 +0x10a:  pop    %ebp
08563cc5 +0x10b:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnRegisterMatch @ 0x8563bba

/* fair_pvp::CFairMatch::OnRegisterMatch(CUser*, PvP_Room*) */

undefined4 __thiscall
fair_pvp::CFairMatch::OnRegisterMatch(CFairMatch *this,CUser *param_1,PvP_Room *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(this + 4) == 1) {
    uVar2 = 1;
  }
  else if (bMatchable_ == '\x01') {
    uVar3 = _CheckMatchable(this,param_2);
    if (uVar3 == 0) {
      if (*(int *)(this + 4) != 2) {
        _RegisterWaitingRoom((PvP_Room *)this);
      }
      *(undefined4 *)(this + 4) = 1;
      iVar1 = *(int *)(this + 0x18);
      iVar4 = PvP_Room::get_index(param_2);
      TimerStartMatching::registNextTimer(10,iVar4,iVar1);
      _SendMatchStatePacket(this,0,1);
      uVar2 = 1;
    }
    else {
      CUser::SendCmdErrorPacket(param_1,199,uVar3 & 0xff);
      uVar2 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,199,0x13);
    uVar2 = 0;
  }
  return uVar2;
}
```
