# HandleWpPerMonster

`_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_`

`WarRoom::HandleWpPerMonster(CUser*, int, int, CUser*)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086c0574` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c0574  _ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_
#           WarRoom::HandleWpPerMonster(CUser*, int, int, CUser*)
# range [0x086c0574, 0x086c077d]
086c0574 +0x000:  push   %ebp
086c0575 +0x001:  mov    %esp,%ebp
086c0577 +0x003:  push   %esi
086c0578 +0x004:  push   %ebx
086c0579 +0x005:  sub    $0x390,%esp
086c057f +0x00b:  lea    -0x374(%ebp),%eax
086c0585 +0x011:  mov    %eax,(%esp)
086c0588 +0x014:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
086c058d +0x019:  mov    0x8(%ebp),%eax
086c0590 +0x01c:  mov    %eax,(%esp)
086c0593 +0x01f:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086c0598 +0x024:  mov    %eax,-0x1c(%ebp)
086c059b +0x027:  cmpl   $0x0,-0x1c(%ebp)
086c059f +0x02b:  jne    086c05ab <+0x37>
086c05a1 +0x02d:  mov    $0x3,%ebx
086c05a6 +0x032:  jmp    086c0764 <+0x1f0>
086c05ab +0x037:  movl   $0x0,-0x18(%ebp)
086c05b2 +0x03e:  movl   $0x0,-0x10(%ebp)
086c05b9 +0x045:  jmp    086c0661 <+0xed>
086c05be +0x04a:  mov    -0x10(%ebp),%edx
086c05c1 +0x04d:  mov    0x8(%ebp),%eax
086c05c4 +0x050:  add    $0x48,%edx
086c05c7 +0x053:  mov    0xc(%eax,%edx,4),%eax
086c05cb +0x057:  test   %eax,%eax
086c05cd +0x059:  je     086c065c <+0xe8>
086c05d3 +0x05f:  cmpl   $0x0,0x18(%ebp)
086c05d7 +0x063:  je     086c05f2 <+0x7e>
086c05d9 +0x065:  mov    -0x10(%ebp),%edx
086c05dc +0x068:  mov    0x8(%ebp),%eax
086c05df +0x06b:  add    $0x48,%edx
086c05e2 +0x06e:  mov    0xc(%eax,%edx,4),%eax
086c05e6 +0x072:  cmp    0x18(%ebp),%eax
086c05e9 +0x075:  jne    086c05f2 <+0x7e>
086c05eb +0x077:  mov    $0x1,%eax
086c05f0 +0x07c:  jmp    086c05f7 <+0x83>
086c05f2 +0x07e:  mov    $0x0,%eax
086c05f7 +0x083:  mov    %al,-0x9(%ebp)
086c05fa +0x086:  cmpb   $0x0,-0x9(%ebp)
086c05fe +0x08a:  je     086c065d <+0xe9>
086c0600 +0x08c:  mov    0x8(%ebp),%eax
086c0603 +0x08f:  lea    0x34(%eax),%edx
086c0606 +0x092:  lea    -0x374(%ebp),%eax
086c060c +0x098:  mov    %eax,0x10(%esp)
086c0610 +0x09c:  mov    0x14(%ebp),%eax
086c0613 +0x09f:  mov    %eax,0xc(%esp)
086c0617 +0x0a3:  mov    0x10(%ebp),%eax
086c061a +0x0a6:  mov    %eax,0x8(%esp)
086c061e +0x0aa:  mov    0x18(%ebp),%eax
086c0621 +0x0ad:  mov    %eax,0x4(%esp)
086c0625 +0x0b1:  mov    %edx,(%esp)
086c0628 +0x0b4:  call   086ba1ea <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster>  ; WarField::HandleWpPerMonster(CUser*, int, int, map_monster&)
086c062d +0x0b9:  mov    %eax,-0x18(%ebp)
086c0630 +0x0bc:  mov    -0x35c(%ebp),%ecx
086c0636 +0x0c2:  movzbl -0x36c(%ebp),%eax
086c063d +0x0c9:  movsbl %al,%edx
086c0640 +0x0cc:  mov    0x18(%ebp),%eax
086c0643 +0x0cf:  mov    %ecx,0xc(%esp)
086c0647 +0x0d3:  mov    -0x18(%ebp),%ecx
086c064a +0x0d6:  mov    %ecx,0x8(%esp)
086c064e +0x0da:  mov    %edx,0x4(%esp)
086c0652 +0x0de:  mov    %eax,(%esp)
086c0655 +0x0e1:  call   086459c4 <_ZN15CUserCharacInfo11WarAreaKillEiif>  ; CUserCharacInfo::WarAreaKill(int, int, float)
086c065a +0x0e6:  jmp    086c065d <+0xe9>
086c065c +0x0e8:  nop
086c065d +0x0e9:  addl   $0x1,-0x10(%ebp)
086c0661 +0x0ed:  cmpl   $0x5,-0x10(%ebp)
086c0665 +0x0f1:  setle  %al
086c0668 +0x0f4:  test   %al,%al
086c066a +0x0f6:  jne    086c05be <+0x4a>
086c0670 +0x0fc:  movw   $0xffff,-0x12(%ebp)
086c0676 +0x102:  cmpl   $0x0,0x18(%ebp)
086c067a +0x106:  je     086c068b <+0x117>
086c067c +0x108:  mov    0x18(%ebp),%eax
086c067f +0x10b:  mov    %eax,(%esp)
086c0682 +0x10e:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c0687 +0x113:  mov    %ax,-0x12(%ebp)
086c068b +0x117:  lea    -0x28(%ebp),%eax
086c068e +0x11a:  mov    %eax,(%esp)
086c0691 +0x11d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c0696 +0x122:  movl   $0x151,0x8(%esp)
086c069e +0x12a:  movl   $0x0,0x4(%esp)
086c06a6 +0x132:  lea    -0x28(%ebp),%eax
086c06a9 +0x135:  mov    %eax,(%esp)
086c06ac +0x138:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c06b1 +0x13d:  mov    0x10(%ebp),%eax
086c06b4 +0x140:  mov    %eax,0x4(%esp)
086c06b8 +0x144:  lea    -0x28(%ebp),%eax
086c06bb +0x147:  mov    %eax,(%esp)
086c06be +0x14a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c06c3 +0x14f:  movzwl -0x12(%ebp),%eax
086c06c7 +0x153:  mov    %eax,0x4(%esp)
086c06cb +0x157:  lea    -0x28(%ebp),%eax
086c06ce +0x15a:  mov    %eax,(%esp)
086c06d1 +0x15d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c06d6 +0x162:  mov    0x14(%ebp),%eax
086c06d9 +0x165:  mov    %eax,0x4(%esp)
086c06dd +0x169:  lea    -0x28(%ebp),%eax
086c06e0 +0x16c:  mov    %eax,(%esp)
086c06e3 +0x16f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c06e8 +0x174:  mov    -0x18(%ebp),%eax
086c06eb +0x177:  mov    %eax,0x4(%esp)
086c06ef +0x17b:  lea    -0x28(%ebp),%eax
086c06f2 +0x17e:  mov    %eax,(%esp)
086c06f5 +0x181:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c06fa +0x186:  movl   $0x1,0x4(%esp)
086c0702 +0x18e:  lea    -0x28(%ebp),%eax
086c0705 +0x191:  mov    %eax,(%esp)
086c0708 +0x194:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c070d +0x199:  lea    -0x28(%ebp),%eax
086c0710 +0x19c:  mov    %eax,0x4(%esp)
086c0714 +0x1a0:  mov    0x8(%ebp),%eax
086c0717 +0x1a3:  mov    %eax,(%esp)
086c071a +0x1a6:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086c071f +0x1ab:  mov    $0x0,%ebx
086c0724 +0x1b0:  lea    -0x28(%ebp),%eax
086c0727 +0x1b3:  mov    %eax,(%esp)
086c072a +0x1b6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c072f +0x1bb:  jmp    086c0764 <+0x1f0>
086c0731 +0x1bd:  mov    %edx,%ebx
086c0733 +0x1bf:  mov    %eax,%esi
086c0735 +0x1c1:  lea    -0x28(%ebp),%eax
086c0738 +0x1c4:  mov    %eax,(%esp)
086c073b +0x1c7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c0740 +0x1cc:  mov    %esi,%eax
086c0742 +0x1ce:  mov    %ebx,%edx
086c0744 +0x1d0:  jmp    086c0746 <+0x1d2>
086c0746 +0x1d2:  mov    %edx,%ebx
086c0748 +0x1d4:  mov    %eax,%esi
086c074a +0x1d6:  lea    -0x374(%ebp),%eax
086c0750 +0x1dc:  mov    %eax,(%esp)
086c0753 +0x1df:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086c0758 +0x1e4:  mov    %esi,%eax
086c075a +0x1e6:  mov    %ebx,%edx
086c075c +0x1e8:  mov    %eax,(%esp)
086c075f +0x1eb:  call   08ae3750 <_Unwind_Resume>
086c0764 +0x1f0:  lea    -0x374(%ebp),%eax
086c076a +0x1f6:  mov    %eax,(%esp)
086c076d +0x1f9:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086c0772 +0x1fe:  mov    %ebx,%eax
086c0774 +0x200:  add    $0x390,%esp
086c077a +0x206:  pop    %ebx
086c077b +0x207:  pop    %esi
086c077c +0x208:  pop    %ebp
086c077d +0x209:  ret
```

## 反编译 C

```c
// WarRoom::HandleWpPerMonster @ 0x86c0574

/* WarRoom::HandleWpPerMonster(CUser*, int, int, CUser*) */

undefined4 __thiscall
WarRoom::HandleWpPerMonster(WarRoom *this,CUser *param_1,int param_2,int param_3,CUser *param_4)

{
  undefined4 uVar1;
  map_monster local_378 [8];
  char local_370;
  float local_360;
  PacketGuard local_2c [12];
  int local_20;
  int local_1c;
  ushort local_16;
  int local_14;
  char local_d;
  
  map_monster::map_monster(local_378);
  local_20 = GetWaiterCount(this);
  if (local_20 == 0) {
    uVar1 = 3;
  }
  else {
    local_1c = 0;
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
        if ((param_4 == (CUser *)0x0) ||
           (*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc) != param_4)) {
          local_d = '\0';
        }
        else {
          local_d = '\x01';
        }
        if (local_d != '\0') {
                    /* try { // try from 086c0628 to 086c0695 has its CatchHandler @ 086c0746 */
          local_1c = WarField::HandleWpPerMonster
                               ((WarField *)(this + 0x34),param_4,param_2,param_3,local_378);
          CUserCharacInfo::WarAreaKill((CUserCharacInfo *)param_4,(int)local_370,local_1c,local_360)
          ;
        }
      }
    }
    local_16 = 0xffff;
    if (param_4 != (CUser *)0x0) {
      local_16 = CUser::get_unique_id(param_4);
    }
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 086c06ac to 086c071e has its CatchHandler @ 086c0731 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x151);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,param_2);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(uint)local_16);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,param_3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,local_1c);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    SendToRoom(this,local_2c);
    uVar1 = 0;
                    /* try { // try from 086c072a to 086c072e has its CatchHandler @ 086c0746 */
    PacketGuard::~PacketGuard(local_2c);
  }
  map_monster::~map_monster(local_378);
  return uVar1;
}
```
