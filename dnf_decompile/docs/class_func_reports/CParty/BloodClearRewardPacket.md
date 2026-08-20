# BloodClearRewardPacket

`_ZN6CParty22BloodClearRewardPacketEiiiPK10Inven_ItemiS2_iS2_iS2_`

`CParty::BloodClearRewardPacket(int, int, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b8bf8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b8bf8  _ZN6CParty22BloodClearRewardPacketEiiiPK10Inven_ItemiS2_iS2_iS2_
#           CParty::BloodClearRewardPacket(int, int, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*)
# range [0x085b8bf8, 0x085b8e5b]
085b8bf8 +0x000:  push   %ebp
085b8bf9 +0x001:  mov    %esp,%ebp
085b8bfb +0x003:  push   %esi
085b8bfc +0x004:  push   %ebx
085b8bfd +0x005:  sub    $0x30,%esp
085b8c00 +0x008:  lea    -0x24(%ebp),%eax
085b8c03 +0x00b:  mov    %eax,(%esp)
085b8c06 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b8c0b +0x013:  movl   $0xd1,0x8(%esp)
085b8c13 +0x01b:  movl   $0x0,0x4(%esp)
085b8c1b +0x023:  lea    -0x24(%ebp),%eax
085b8c1e +0x026:  mov    %eax,(%esp)
085b8c21 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b8c26 +0x02e:  mov    0x10(%ebp),%eax
085b8c29 +0x031:  mov    %eax,0x4(%esp)
085b8c2d +0x035:  lea    -0x24(%ebp),%eax
085b8c30 +0x038:  mov    %eax,(%esp)
085b8c33 +0x03b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b8c38 +0x040:  mov    0x8(%ebp),%eax
085b8c3b +0x043:  add    $0xb24,%eax
085b8c40 +0x048:  mov    %eax,(%esp)
085b8c43 +0x04b:  call   0830ec12 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x7f7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x7f7
085b8c48 +0x050:  mov    %eax,0x4(%esp)
085b8c4c +0x054:  lea    -0x24(%ebp),%eax
085b8c4f +0x057:  mov    %eax,(%esp)
085b8c52 +0x05a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b8c57 +0x05f:  mov    0x14(%ebp),%eax
085b8c5a +0x062:  mov    %eax,0x4(%esp)
085b8c5e +0x066:  lea    -0x24(%ebp),%eax
085b8c61 +0x069:  mov    %eax,(%esp)
085b8c64 +0x06c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b8c69 +0x071:  movl   $0x0,-0x18(%ebp)
085b8c70 +0x078:  jmp    085b8cb1 <+0xb9>
085b8c72 +0x07a:  mov    -0x18(%ebp),%eax
085b8c75 +0x07d:  imul   $0x3d,%eax,%eax
085b8c78 +0x080:  add    0x18(%ebp),%eax
085b8c7b +0x083:  mov    0x2(%eax),%eax
085b8c7e +0x086:  mov    %eax,0x4(%esp)
085b8c82 +0x08a:  lea    -0x24(%ebp),%eax
085b8c85 +0x08d:  mov    %eax,(%esp)
085b8c88 +0x090:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b8c8d +0x095:  mov    -0x18(%ebp),%eax
085b8c90 +0x098:  imul   $0x3d,%eax,%eax
085b8c93 +0x09b:  add    0x18(%ebp),%eax
085b8c96 +0x09e:  mov    %eax,(%esp)
085b8c99 +0x0a1:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085b8c9e +0x0a6:  mov    %eax,0x4(%esp)
085b8ca2 +0x0aa:  lea    -0x24(%ebp),%eax
085b8ca5 +0x0ad:  mov    %eax,(%esp)
085b8ca8 +0x0b0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b8cad +0x0b5:  addl   $0x1,-0x18(%ebp)
085b8cb1 +0x0b9:  mov    -0x18(%ebp),%eax
085b8cb4 +0x0bc:  cmp    0x14(%ebp),%eax
085b8cb7 +0x0bf:  setl   %al
085b8cba +0x0c2:  test   %al,%al
085b8cbc +0x0c4:  jne    085b8c72 <+0x7a>
085b8cbe +0x0c6:  mov    0x1c(%ebp),%eax
085b8cc1 +0x0c9:  mov    %eax,0x4(%esp)
085b8cc5 +0x0cd:  lea    -0x24(%ebp),%eax
085b8cc8 +0x0d0:  mov    %eax,(%esp)
085b8ccb +0x0d3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b8cd0 +0x0d8:  movl   $0x0,-0x14(%ebp)
085b8cd7 +0x0df:  jmp    085b8d18 <+0x120>
085b8cd9 +0x0e1:  mov    -0x14(%ebp),%eax
085b8cdc +0x0e4:  imul   $0x3d,%eax,%eax
085b8cdf +0x0e7:  add    0x20(%ebp),%eax
085b8ce2 +0x0ea:  mov    0x2(%eax),%eax
085b8ce5 +0x0ed:  mov    %eax,0x4(%esp)
085b8ce9 +0x0f1:  lea    -0x24(%ebp),%eax
085b8cec +0x0f4:  mov    %eax,(%esp)
085b8cef +0x0f7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b8cf4 +0x0fc:  mov    -0x14(%ebp),%eax
085b8cf7 +0x0ff:  imul   $0x3d,%eax,%eax
085b8cfa +0x102:  add    0x20(%ebp),%eax
085b8cfd +0x105:  mov    %eax,(%esp)
085b8d00 +0x108:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085b8d05 +0x10d:  mov    %eax,0x4(%esp)
085b8d09 +0x111:  lea    -0x24(%ebp),%eax
085b8d0c +0x114:  mov    %eax,(%esp)
085b8d0f +0x117:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b8d14 +0x11c:  addl   $0x1,-0x14(%ebp)
085b8d18 +0x120:  mov    -0x14(%ebp),%eax
085b8d1b +0x123:  cmp    0x1c(%ebp),%eax
085b8d1e +0x126:  setl   %al
085b8d21 +0x129:  test   %al,%al
085b8d23 +0x12b:  jne    085b8cd9 <+0xe1>
085b8d25 +0x12d:  mov    0x24(%ebp),%eax
085b8d28 +0x130:  mov    %eax,0x4(%esp)
085b8d2c +0x134:  lea    -0x24(%ebp),%eax
085b8d2f +0x137:  mov    %eax,(%esp)
085b8d32 +0x13a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b8d37 +0x13f:  movl   $0x0,-0x10(%ebp)
085b8d3e +0x146:  jmp    085b8d7f <+0x187>
085b8d40 +0x148:  mov    -0x10(%ebp),%eax
085b8d43 +0x14b:  imul   $0x3d,%eax,%eax
085b8d46 +0x14e:  add    0x28(%ebp),%eax
085b8d49 +0x151:  mov    0x2(%eax),%eax
085b8d4c +0x154:  mov    %eax,0x4(%esp)
085b8d50 +0x158:  lea    -0x24(%ebp),%eax
085b8d53 +0x15b:  mov    %eax,(%esp)
085b8d56 +0x15e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b8d5b +0x163:  mov    -0x10(%ebp),%eax
085b8d5e +0x166:  imul   $0x3d,%eax,%eax
085b8d61 +0x169:  add    0x28(%ebp),%eax
085b8d64 +0x16c:  mov    %eax,(%esp)
085b8d67 +0x16f:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085b8d6c +0x174:  mov    %eax,0x4(%esp)
085b8d70 +0x178:  lea    -0x24(%ebp),%eax
085b8d73 +0x17b:  mov    %eax,(%esp)
085b8d76 +0x17e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b8d7b +0x183:  addl   $0x1,-0x10(%ebp)
085b8d7f +0x187:  mov    -0x10(%ebp),%eax
085b8d82 +0x18a:  cmp    0x24(%ebp),%eax
085b8d85 +0x18d:  setl   %al
085b8d88 +0x190:  test   %al,%al
085b8d8a +0x192:  jne    085b8d40 <+0x148>
085b8d8c +0x194:  mov    0x2c(%ebp),%eax
085b8d8f +0x197:  mov    %eax,0x4(%esp)
085b8d93 +0x19b:  lea    -0x24(%ebp),%eax
085b8d96 +0x19e:  mov    %eax,(%esp)
085b8d99 +0x1a1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b8d9e +0x1a6:  movl   $0x0,-0xc(%ebp)
085b8da5 +0x1ad:  jmp    085b8de6 <+0x1ee>
085b8da7 +0x1af:  mov    -0xc(%ebp),%eax
085b8daa +0x1b2:  imul   $0x3d,%eax,%eax
085b8dad +0x1b5:  add    0x30(%ebp),%eax
085b8db0 +0x1b8:  mov    0x2(%eax),%eax
085b8db3 +0x1bb:  mov    %eax,0x4(%esp)
085b8db7 +0x1bf:  lea    -0x24(%ebp),%eax
085b8dba +0x1c2:  mov    %eax,(%esp)
085b8dbd +0x1c5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b8dc2 +0x1ca:  mov    -0xc(%ebp),%eax
085b8dc5 +0x1cd:  imul   $0x3d,%eax,%eax
085b8dc8 +0x1d0:  add    0x30(%ebp),%eax
085b8dcb +0x1d3:  mov    %eax,(%esp)
085b8dce +0x1d6:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085b8dd3 +0x1db:  mov    %eax,0x4(%esp)
085b8dd7 +0x1df:  lea    -0x24(%ebp),%eax
085b8dda +0x1e2:  mov    %eax,(%esp)
085b8ddd +0x1e5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085b8de2 +0x1ea:  addl   $0x1,-0xc(%ebp)
085b8de6 +0x1ee:  mov    -0xc(%ebp),%eax
085b8de9 +0x1f1:  cmp    0x2c(%ebp),%eax
085b8dec +0x1f4:  setl   %al
085b8def +0x1f7:  test   %al,%al
085b8df1 +0x1f9:  jne    085b8da7 <+0x1af>
085b8df3 +0x1fb:  movl   $0x1,0x4(%esp)
085b8dfb +0x203:  lea    -0x24(%ebp),%eax
085b8dfe +0x206:  mov    %eax,(%esp)
085b8e01 +0x209:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b8e06 +0x20e:  mov    0xc(%ebp),%edx
085b8e09 +0x211:  mov    0x8(%ebp),%ecx
085b8e0c +0x214:  mov    %edx,%eax
085b8e0e +0x216:  add    %eax,%eax
085b8e10 +0x218:  add    %edx,%eax
085b8e12 +0x21a:  shl    $0x3,%eax
085b8e15 +0x21d:  lea    (%ecx,%eax,1),%eax
085b8e18 +0x220:  add    $0x78,%eax
085b8e1b +0x223:  mov    (%eax),%eax
085b8e1d +0x225:  lea    -0x24(%ebp),%edx
085b8e20 +0x228:  mov    %edx,0x4(%esp)
085b8e24 +0x22c:  mov    %eax,(%esp)
085b8e27 +0x22f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085b8e2c +0x234:  jmp    085b8e49 <+0x251>
085b8e2e +0x236:  mov    %edx,%ebx
085b8e30 +0x238:  mov    %eax,%esi
085b8e32 +0x23a:  lea    -0x24(%ebp),%eax
085b8e35 +0x23d:  mov    %eax,(%esp)
085b8e38 +0x240:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b8e3d +0x245:  mov    %esi,%eax
085b8e3f +0x247:  mov    %ebx,%edx
085b8e41 +0x249:  mov    %eax,(%esp)
085b8e44 +0x24c:  call   08ae3750 <_Unwind_Resume>
085b8e49 +0x251:  lea    -0x24(%ebp),%eax
085b8e4c +0x254:  mov    %eax,(%esp)
085b8e4f +0x257:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b8e54 +0x25c:  add    $0x30,%esp
085b8e57 +0x25f:  pop    %ebx
085b8e58 +0x260:  pop    %esi
085b8e59 +0x261:  pop    %ebp
085b8e5a +0x262:  ret
085b8e5b +0x263:  nop
```

## 反编译 C

```c
// CParty::BloodClearRewardPacket @ 0x85b8bf8

/* CParty::BloodClearRewardPacket(int, int, int, Inven_Item const*, int, Inven_Item const*, int,
   Inven_Item const*, int, Inven_Item const*) */

void __thiscall
CParty::BloodClearRewardPacket
          (CParty *this,int param_1,int param_2,int param_3,Inven_Item *param_4,int param_5,
          Inven_Item *param_6,int param_7,Inven_Item *param_8,int param_9,Inven_Item *param_10)

{
  int iVar1;
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 085b8c21 to 085b8e2b has its CatchHandler @ 085b8e2e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xd1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,param_2);
  iVar1 = CBattle_Field::getBloodMaxRound((CBattle_Field *)(this + 0xb24));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,param_3);
  for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_28,*(int *)(param_4 + local_1c * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_4 + local_1c * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,iVar1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,param_5);
  for (local_18 = 0; local_18 < param_5; local_18 = local_18 + 1) {
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_28,*(int *)(param_6 + local_18 * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_6 + local_18 * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,iVar1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,param_7);
  for (local_14 = 0; local_14 < param_7; local_14 = local_14 + 1) {
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_28,*(int *)(param_8 + local_14 * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_8 + local_14 * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,iVar1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,param_9);
  for (local_10 = 0; local_10 < param_9; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_28,*(int *)(param_10 + local_10 * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_10 + local_10 * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,iVar1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send(*(CUser **)(this + param_1 * 0x18 + 0x78),local_28);
  PacketGuard::~PacketGuard(local_28);
  return;
}
```
