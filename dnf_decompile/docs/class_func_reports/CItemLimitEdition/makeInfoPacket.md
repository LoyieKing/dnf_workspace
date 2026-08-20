# makeInfoPacket

`_ZNK17CItemLimitEdition14makeInfoPacketER11PacketGuard`

`CItemLimitEdition::makeInfoPacket(PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `CItemLimitEdition` | `0x085130e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085130e8  _ZNK17CItemLimitEdition14makeInfoPacketER11PacketGuard
#           CItemLimitEdition::makeInfoPacket(PacketGuard&) const
# range [0x085130e8, 0x085132c9]
085130e8 +0x000:  push   %ebp
085130e9 +0x001:  mov    %esp,%ebp
085130eb +0x003:  push   %ebx
085130ec +0x004:  sub    $0x14,%esp
085130ef +0x007:  mov    0x8(%ebp),%eax
085130f2 +0x00a:  mov    (%eax),%eax
085130f4 +0x00c:  mov    %eax,%edx
085130f6 +0x00e:  mov    0xc(%ebp),%eax
085130f9 +0x011:  mov    %edx,0x4(%esp)
085130fd +0x015:  mov    %eax,(%esp)
08513100 +0x018:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08513105 +0x01d:  mov    0x8(%ebp),%eax
08513108 +0x020:  mov    0x4(%eax),%edx
0851310b +0x023:  mov    0xc(%ebp),%eax
0851310e +0x026:  mov    %edx,0x4(%esp)
08513112 +0x02a:  mov    %eax,(%esp)
08513115 +0x02d:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
0851311a +0x032:  mov    0x8(%ebp),%eax
0851311d +0x035:  mov    0x8(%eax),%eax
08513120 +0x038:  mov    %eax,%edx
08513122 +0x03a:  mov    0xc(%ebp),%eax
08513125 +0x03d:  mov    %edx,0x4(%esp)
08513129 +0x041:  mov    %eax,(%esp)
0851312c +0x044:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08513131 +0x049:  mov    0x8(%ebp),%eax
08513134 +0x04c:  movzbl 0xc(%eax),%eax
08513138 +0x050:  movsbl %al,%edx
0851313b +0x053:  mov    0xc(%ebp),%eax
0851313e +0x056:  mov    %edx,0x4(%esp)
08513142 +0x05a:  mov    %eax,(%esp)
08513145 +0x05d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0851314a +0x062:  mov    0x8(%ebp),%eax
0851314d +0x065:  mov    0x10(%eax),%eax
08513150 +0x068:  mov    %eax,%edx
08513152 +0x06a:  mov    0xc(%ebp),%eax
08513155 +0x06d:  mov    %edx,0x4(%esp)
08513159 +0x071:  mov    %eax,(%esp)
0851315c +0x074:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08513161 +0x079:  mov    0x8(%ebp),%eax
08513164 +0x07c:  mov    0x14(%eax),%eax
08513167 +0x07f:  mov    %eax,%edx
08513169 +0x081:  mov    0xc(%ebp),%eax
0851316c +0x084:  mov    %edx,0x4(%esp)
08513170 +0x088:  mov    %eax,(%esp)
08513173 +0x08b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08513178 +0x090:  mov    0x8(%ebp),%eax
0851317b +0x093:  mov    0x48(%eax),%eax
0851317e +0x096:  mov    %eax,%edx
08513180 +0x098:  mov    0xc(%ebp),%eax
08513183 +0x09b:  mov    %edx,0x4(%esp)
08513187 +0x09f:  mov    %eax,(%esp)
0851318a +0x0a2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0851318f +0x0a7:  mov    0x8(%ebp),%eax
08513192 +0x0aa:  mov    0x1c(%eax),%edx
08513195 +0x0ad:  mov    0xc(%ebp),%eax
08513198 +0x0b0:  mov    %edx,0x4(%esp)
0851319c +0x0b4:  mov    %eax,(%esp)
0851319f +0x0b7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085131a4 +0x0bc:  mov    0x8(%ebp),%eax
085131a7 +0x0bf:  mov    0x20(%eax),%eax
085131aa +0x0c2:  mov    %eax,%edx
085131ac +0x0c4:  mov    0xc(%ebp),%eax
085131af +0x0c7:  mov    %edx,0x4(%esp)
085131b3 +0x0cb:  mov    %eax,(%esp)
085131b6 +0x0ce:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085131bb +0x0d3:  mov    0x8(%ebp),%eax
085131be +0x0d6:  mov    0x28(%eax),%ebx
085131c1 +0x0d9:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085131c8 +0x0e0:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085131cd +0x0e5:  cmp    %eax,%ebx
085131cf +0x0e7:  setle  %al
085131d2 +0x0ea:  test   %al,%al
085131d4 +0x0ec:  je     085131eb <+0x103>
085131d6 +0x0ee:  mov    0xc(%ebp),%eax
085131d9 +0x0f1:  movl   $0x0,0x4(%esp)
085131e1 +0x0f9:  mov    %eax,(%esp)
085131e4 +0x0fc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085131e9 +0x101:  jmp    08513210 <+0x128>
085131eb +0x103:  mov    0x8(%ebp),%eax
085131ee +0x106:  mov    0x28(%eax),%ebx
085131f1 +0x109:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085131f8 +0x110:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085131fd +0x115:  mov    %ebx,%edx
085131ff +0x117:  sub    %eax,%edx
08513201 +0x119:  mov    0xc(%ebp),%eax
08513204 +0x11c:  mov    %edx,0x4(%esp)
08513208 +0x120:  mov    %eax,(%esp)
0851320b +0x123:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08513210 +0x128:  mov    0x8(%ebp),%eax
08513213 +0x12b:  mov    0x2c(%eax),%eax
08513216 +0x12e:  mov    %eax,%edx
08513218 +0x130:  mov    0xc(%ebp),%eax
0851321b +0x133:  mov    %edx,0x4(%esp)
0851321f +0x137:  mov    %eax,(%esp)
08513222 +0x13a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08513227 +0x13f:  mov    0x8(%ebp),%eax
0851322a +0x142:  mov    0x30(%eax),%eax
0851322d +0x145:  mov    %eax,%edx
0851322f +0x147:  mov    0xc(%ebp),%eax
08513232 +0x14a:  mov    %edx,0x4(%esp)
08513236 +0x14e:  mov    %eax,(%esp)
08513239 +0x151:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0851323e +0x156:  mov    0x8(%ebp),%eax
08513241 +0x159:  movzwl 0x34(%eax),%eax
08513245 +0x15d:  movzwl %ax,%edx
08513248 +0x160:  mov    0xc(%ebp),%eax
0851324b +0x163:  mov    %edx,0x4(%esp)
0851324f +0x167:  mov    %eax,(%esp)
08513252 +0x16a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08513257 +0x16f:  mov    0x8(%ebp),%eax
0851325a +0x172:  movzwl 0x36(%eax),%eax
0851325e +0x176:  movzwl %ax,%edx
08513261 +0x179:  mov    0xc(%ebp),%eax
08513264 +0x17c:  mov    %edx,0x4(%esp)
08513268 +0x180:  mov    %eax,(%esp)
0851326b +0x183:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08513270 +0x188:  mov    0x8(%ebp),%eax
08513273 +0x18b:  mov    0x38(%eax),%edx
08513276 +0x18e:  mov    0xc(%ebp),%eax
08513279 +0x191:  mov    %edx,0x4(%esp)
0851327d +0x195:  mov    %eax,(%esp)
08513280 +0x198:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08513285 +0x19d:  mov    0x8(%ebp),%eax
08513288 +0x1a0:  mov    0x3c(%eax),%edx
0851328b +0x1a3:  mov    0xc(%ebp),%eax
0851328e +0x1a6:  mov    %edx,0x4(%esp)
08513292 +0x1aa:  mov    %eax,(%esp)
08513295 +0x1ad:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0851329a +0x1b2:  mov    0x8(%ebp),%eax
0851329d +0x1b5:  mov    0x40(%eax),%edx
085132a0 +0x1b8:  mov    0xc(%ebp),%eax
085132a3 +0x1bb:  mov    %edx,0x4(%esp)
085132a7 +0x1bf:  mov    %eax,(%esp)
085132aa +0x1c2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085132af +0x1c7:  mov    0x8(%ebp),%eax
085132b2 +0x1ca:  mov    0x44(%eax),%edx
085132b5 +0x1cd:  mov    0xc(%ebp),%eax
085132b8 +0x1d0:  mov    %edx,0x4(%esp)
085132bc +0x1d4:  mov    %eax,(%esp)
085132bf +0x1d7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085132c4 +0x1dc:  add    $0x14,%esp
085132c7 +0x1df:  pop    %ebx
085132c8 +0x1e0:  pop    %ebp
085132c9 +0x1e1:  ret
```

## 反编译 C

```c
// CItemLimitEdition::makeInfoPacket @ 0x85130e8

/* CItemLimitEdition::makeInfoPacket(PacketGuard&) const */

void __thiscall CItemLimitEdition::makeInfoPacket(CItemLimitEdition *this,PacketGuard *param_1)

{
  int iVar1;
  int iVar2;
  
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)this);
  InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)param_1,*(ulong *)(this + 4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 8));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)this[0xc]);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x14));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x48));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x1c));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x20));
  iVar1 = *(int *)(this + 0x28);
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar2 < iVar1) {
    iVar1 = *(int *)(this + 0x28);
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar1 - iVar2);
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x2c));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x30));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)(this + 0x34));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)(this + 0x36));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x38));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x3c));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x40));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x44));
  return;
}
```
