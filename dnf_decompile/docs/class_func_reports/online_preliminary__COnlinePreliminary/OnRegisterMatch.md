# OnRegisterMatch

`_ZN18online_preliminary18COnlinePreliminary15OnRegisterMatchEP5CUserP8PvP_Room`

`online_preliminary::COnlinePreliminary::OnRegisterMatch(CUser*, PvP_Room*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085613de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085613de  _ZN18online_preliminary18COnlinePreliminary15OnRegisterMatchEP5CUserP8PvP_Room
#           online_preliminary::COnlinePreliminary::OnRegisterMatch(CUser*, PvP_Room*)
# range [0x085613de, 0x085614e9]
085613de +0x000:  push   %ebp
085613df +0x001:  mov    %esp,%ebp
085613e1 +0x003:  push   %ebx
085613e2 +0x004:  sub    $0x24,%esp
085613e5 +0x007:  mov    0x8(%ebp),%eax
085613e8 +0x00a:  mov    0x4(%eax),%eax
085613eb +0x00d:  cmp    $0x1,%eax
085613ee +0x010:  jne    085613fa <+0x1c>
085613f0 +0x012:  mov    $0x1,%eax
085613f5 +0x017:  jmp    085614e4 <+0x106>
085613fa +0x01c:  movzbl &_ZN18online_preliminary18COnlinePreliminary11bMatchable_E,%eax
08561401 +0x023:  xor    $0x1,%eax
08561404 +0x026:  test   %al,%al
08561406 +0x028:  je     0856142d <+0x4f>
08561408 +0x02a:  movl   $0x13,0x8(%esp)
08561410 +0x032:  movl   $0xc7,0x4(%esp)
08561418 +0x03a:  mov    0xc(%ebp),%eax
0856141b +0x03d:  mov    %eax,(%esp)
0856141e +0x040:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08561423 +0x045:  mov    $0x0,%eax
08561428 +0x04a:  jmp    085614e4 <+0x106>
0856142d +0x04f:  movl   $0x0,-0xc(%ebp)
08561434 +0x056:  mov    0x10(%ebp),%eax
08561437 +0x059:  mov    %eax,0x4(%esp)
0856143b +0x05d:  mov    0x8(%ebp),%eax
0856143e +0x060:  mov    %eax,(%esp)
08561441 +0x063:  call   085612c6 <_ZNK18online_preliminary18COnlinePreliminary15_CheckMatchableEP8PvP_Room>  ; online_preliminary::COnlinePreliminary::_CheckMatchable(PvP_Room*) const
08561446 +0x068:  mov    %eax,-0xc(%ebp)
08561449 +0x06b:  cmpl   $0x0,-0xc(%ebp)
0856144d +0x06f:  setne  %al
08561450 +0x072:  test   %al,%al
08561452 +0x074:  je     08561478 <+0x9a>
08561454 +0x076:  mov    -0xc(%ebp),%eax
08561457 +0x079:  movzbl %al,%eax
0856145a +0x07c:  mov    %eax,0x8(%esp)
0856145e +0x080:  movl   $0xc7,0x4(%esp)
08561466 +0x088:  mov    0xc(%ebp),%eax
08561469 +0x08b:  mov    %eax,(%esp)
0856146c +0x08e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08561471 +0x093:  mov    $0x0,%eax
08561476 +0x098:  jmp    085614e4 <+0x106>
08561478 +0x09a:  mov    0x8(%ebp),%eax
0856147b +0x09d:  mov    0x4(%eax),%eax
0856147e +0x0a0:  cmp    $0x2,%eax
08561481 +0x0a3:  je     08561495 <+0xb7>
08561483 +0x0a5:  mov    0x10(%ebp),%eax
08561486 +0x0a8:  mov    %eax,0x4(%esp)
0856148a +0x0ac:  mov    0x8(%ebp),%eax
0856148d +0x0af:  mov    %eax,(%esp)
08561490 +0x0b2:  call   085612a4 <_ZN18online_preliminary18COnlinePreliminary20_RegisterWaitingRoomEP8PvP_Room>  ; online_preliminary::COnlinePreliminary::_RegisterWaitingRoom(PvP_Room*)
08561495 +0x0b7:  mov    0x8(%ebp),%eax
08561498 +0x0ba:  movl   $0x1,0x4(%eax)
0856149f +0x0c1:  mov    0x8(%ebp),%eax
085614a2 +0x0c4:  mov    0x18(%eax),%ebx
085614a5 +0x0c7:  mov    0x10(%ebp),%eax
085614a8 +0x0ca:  mov    %eax,(%esp)
085614ab +0x0cd:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085614b0 +0x0d2:  mov    %ebx,0x8(%esp)
085614b4 +0x0d6:  mov    %eax,0x4(%esp)
085614b8 +0x0da:  movl   $0xa,(%esp)
085614bf +0x0e1:  call   08637e14 <_ZN18TimerStartMatching15registNextTimerElii>  ; TimerStartMatching::registNextTimer(long, int, int)
085614c4 +0x0e6:  movl   $0x1,0x8(%esp)
085614cc +0x0ee:  movl   $0x0,0x4(%esp)
085614d4 +0x0f6:  mov    0x8(%ebp),%eax
085614d7 +0x0f9:  mov    %eax,(%esp)
085614da +0x0fc:  call   0856214a <_ZN18online_preliminary18COnlinePreliminary21_SendMatchStatePacketEii>  ; online_preliminary::COnlinePreliminary::_SendMatchStatePacket(int, int)
085614df +0x101:  mov    $0x1,%eax
085614e4 +0x106:  add    $0x24,%esp
085614e7 +0x109:  pop    %ebx
085614e8 +0x10a:  pop    %ebp
085614e9 +0x10b:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnRegisterMatch @ 0x85613de

/* online_preliminary::COnlinePreliminary::OnRegisterMatch(CUser*, PvP_Room*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::OnRegisterMatch
          (COnlinePreliminary *this,CUser *param_1,PvP_Room *param_2)

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
