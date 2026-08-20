# _send_result

`_ZN31Dispatcher_Compound_ExtreamItem12_send_resultEv`

`Dispatcher_Compound_ExtreamItem::_send_result()`

| 类 | 地址 |
|---|---|
| `Dispatcher_Compound_ExtreamItem` | `0x08225c54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08225c54  _ZN31Dispatcher_Compound_ExtreamItem12_send_resultEv
#           Dispatcher_Compound_ExtreamItem::_send_result()
# range [0x08225c54, 0x08225ec3]
08225c54 +0x000:  push   %ebp
08225c55 +0x001:  mov    %esp,%ebp
08225c57 +0x003:  push   %esi
08225c58 +0x004:  push   %ebx
08225c59 +0x005:  sub    $0x20,%esp
08225c5c +0x008:  lea    -0x18(%ebp),%eax
08225c5f +0x00b:  mov    %eax,(%esp)
08225c62 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08225c67 +0x013:  movl   $0x146,0x8(%esp)
08225c6f +0x01b:  movl   $0x1,0x4(%esp)
08225c77 +0x023:  lea    -0x18(%ebp),%eax
08225c7a +0x026:  mov    %eax,(%esp)
08225c7d +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08225c82 +0x02e:  movl   $0x1,0x4(%esp)
08225c8a +0x036:  lea    -0x18(%ebp),%eax
08225c8d +0x039:  mov    %eax,(%esp)
08225c90 +0x03c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08225c95 +0x041:  movl   $0x0,-0xc(%ebp)
08225c9c +0x048:  jmp    08225ce5 <+0x91>
08225c9e +0x04a:  movl   $0x0,0x4(%esp)
08225ca6 +0x052:  lea    -0x18(%ebp),%eax
08225ca9 +0x055:  mov    %eax,(%esp)
08225cac +0x058:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08225cb1 +0x05d:  mov    -0xc(%ebp),%edx
08225cb4 +0x060:  mov    0x8(%ebp),%eax
08225cb7 +0x063:  movzwl 0x8(%eax,%edx,2),%eax
08225cbc +0x068:  movzwl %ax,%eax
08225cbf +0x06b:  mov    %eax,0x4(%esp)
08225cc3 +0x06f:  lea    -0x18(%ebp),%eax
08225cc6 +0x072:  mov    %eax,(%esp)
08225cc9 +0x075:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08225cce +0x07a:  movl   $0x1,0x4(%esp)
08225cd6 +0x082:  lea    -0x18(%ebp),%eax
08225cd9 +0x085:  mov    %eax,(%esp)
08225cdc +0x088:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08225ce1 +0x08d:  addl   $0x1,-0xc(%ebp)
08225ce5 +0x091:  cmpl   $0x1,-0xc(%ebp)
08225ce9 +0x095:  setle  %al
08225cec +0x098:  test   %al,%al
08225cee +0x09a:  jne    08225c9e <+0x4a>
08225cf0 +0x09c:  movl   $0x0,0x4(%esp)
08225cf8 +0x0a4:  lea    -0x18(%ebp),%eax
08225cfb +0x0a7:  mov    %eax,(%esp)
08225cfe +0x0aa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08225d03 +0x0af:  mov    0x8(%ebp),%eax
08225d06 +0x0b2:  movzwl 0x4(%eax),%eax
08225d0a +0x0b6:  movzwl %ax,%eax
08225d0d +0x0b9:  mov    %eax,0x4(%esp)
08225d11 +0x0bd:  lea    -0x18(%ebp),%eax
08225d14 +0x0c0:  mov    %eax,(%esp)
08225d17 +0x0c3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08225d1c +0x0c8:  movl   $0x1,0x4(%esp)
08225d24 +0x0d0:  lea    -0x18(%ebp),%eax
08225d27 +0x0d3:  mov    %eax,(%esp)
08225d2a +0x0d6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08225d2f +0x0db:  mov    0x8(%ebp),%eax
08225d32 +0x0de:  movzwl 0x6(%eax),%eax
08225d36 +0x0e2:  cwtl
08225d37 +0x0e3:  mov    %eax,0x4(%esp)
08225d3b +0x0e7:  lea    -0x18(%ebp),%eax
08225d3e +0x0ea:  mov    %eax,(%esp)
08225d41 +0x0ed:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08225d46 +0x0f2:  mov    0x8(%ebp),%eax
08225d49 +0x0f5:  mov    0x92(%eax),%eax
08225d4f +0x0fb:  mov    %eax,0x4(%esp)
08225d53 +0x0ff:  lea    -0x18(%ebp),%eax
08225d56 +0x102:  mov    %eax,(%esp)
08225d59 +0x105:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08225d5e +0x10a:  mov    0x8(%ebp),%eax
08225d61 +0x10d:  mov    0x97(%eax),%eax
08225d67 +0x113:  mov    %eax,0x4(%esp)
08225d6b +0x117:  lea    -0x18(%ebp),%eax
08225d6e +0x11a:  mov    %eax,(%esp)
08225d71 +0x11d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08225d76 +0x122:  mov    0x8(%ebp),%eax
08225d79 +0x125:  add    $0x90,%eax
08225d7e +0x12a:  mov    %eax,(%esp)
08225d81 +0x12d:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
08225d86 +0x132:  movzbl %al,%eax
08225d89 +0x135:  mov    %eax,0x4(%esp)
08225d8d +0x139:  lea    -0x18(%ebp),%eax
08225d90 +0x13c:  mov    %eax,(%esp)
08225d93 +0x13f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08225d98 +0x144:  mov    0x8(%ebp),%eax
08225d9b +0x147:  movzwl 0x9b(%eax),%eax
08225da2 +0x14e:  movzwl %ax,%eax
08225da5 +0x151:  mov    %eax,0x4(%esp)
08225da9 +0x155:  lea    -0x18(%ebp),%eax
08225dac +0x158:  mov    %eax,(%esp)
08225daf +0x15b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08225db4 +0x160:  mov    0x8(%ebp),%eax
08225db7 +0x163:  movzbl 0x90(%eax),%eax
08225dbe +0x16a:  movzbl %al,%eax
08225dc1 +0x16d:  mov    %eax,0x4(%esp)
08225dc5 +0x171:  lea    -0x18(%ebp),%eax
08225dc8 +0x174:  mov    %eax,(%esp)
08225dcb +0x177:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08225dd0 +0x17c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08225dd5 +0x181:  mov    %eax,(%esp)
08225dd8 +0x184:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
08225ddd +0x189:  test   %al,%al
08225ddf +0x18b:  je     08225df6 <+0x1a2>
08225de1 +0x18d:  movl   $0x0,0x4(%esp)
08225de9 +0x195:  lea    -0x18(%ebp),%eax
08225dec +0x198:  mov    %eax,(%esp)
08225def +0x19b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08225df4 +0x1a0:  jmp    08225e0e <+0x1ba>
08225df6 +0x1a2:  mov    0x8(%ebp),%eax
08225df9 +0x1a5:  mov    0x9d(%eax),%eax
08225dff +0x1ab:  mov    %eax,0x4(%esp)
08225e03 +0x1af:  lea    -0x18(%ebp),%eax
08225e06 +0x1b2:  mov    %eax,(%esp)
08225e09 +0x1b5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08225e0e +0x1ba:  mov    0x8(%ebp),%eax
08225e11 +0x1bd:  add    $0xa1,%eax
08225e16 +0x1c2:  mov    %eax,(%esp)
08225e19 +0x1c5:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08225e1e +0x1ca:  movzbl %al,%eax
08225e21 +0x1cd:  mov    %eax,0x4(%esp)
08225e25 +0x1d1:  lea    -0x18(%ebp),%eax
08225e28 +0x1d4:  mov    %eax,(%esp)
08225e2b +0x1d7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08225e30 +0x1dc:  mov    0x8(%ebp),%eax
08225e33 +0x1df:  add    $0xa1,%eax
08225e38 +0x1e4:  mov    %eax,(%esp)
08225e3b +0x1e7:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
08225e40 +0x1ec:  movzwl %ax,%eax
08225e43 +0x1ef:  mov    %eax,0x4(%esp)
08225e47 +0x1f3:  lea    -0x18(%ebp),%eax
08225e4a +0x1f6:  mov    %eax,(%esp)
08225e4d +0x1f9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08225e52 +0x1fe:  mov    0x8(%ebp),%eax
08225e55 +0x201:  add    $0x90,%eax
08225e5a +0x206:  mov    %eax,0x4(%esp)
08225e5e +0x20a:  lea    -0x18(%ebp),%eax
08225e61 +0x20d:  mov    %eax,(%esp)
08225e64 +0x210:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
08225e69 +0x215:  movl   $0x1,0x4(%esp)
08225e71 +0x21d:  lea    -0x18(%ebp),%eax
08225e74 +0x220:  mov    %eax,(%esp)
08225e77 +0x223:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08225e7c +0x228:  mov    0x8(%ebp),%eax
08225e7f +0x22b:  mov    0xd0(%eax),%eax
08225e85 +0x231:  lea    -0x18(%ebp),%edx
08225e88 +0x234:  mov    %edx,0x4(%esp)
08225e8c +0x238:  mov    %eax,(%esp)
08225e8f +0x23b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08225e94 +0x240:  jmp    08225eb1 <+0x25d>
08225e96 +0x242:  mov    %edx,%ebx
08225e98 +0x244:  mov    %eax,%esi
08225e9a +0x246:  lea    -0x18(%ebp),%eax
08225e9d +0x249:  mov    %eax,(%esp)
08225ea0 +0x24c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08225ea5 +0x251:  mov    %esi,%eax
08225ea7 +0x253:  mov    %ebx,%edx
08225ea9 +0x255:  mov    %eax,(%esp)
08225eac +0x258:  call   08ae3750 <_Unwind_Resume>
08225eb1 +0x25d:  lea    -0x18(%ebp),%eax
08225eb4 +0x260:  mov    %eax,(%esp)
08225eb7 +0x263:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08225ebc +0x268:  add    $0x20,%esp
08225ebf +0x26b:  pop    %ebx
08225ec0 +0x26c:  pop    %esi
08225ec1 +0x26d:  pop    %ebp
08225ec2 +0x26e:  ret
08225ec3 +0x26f:  nop
```

## 反编译 C

```c
// Dispatcher_Compound_ExtreamItem::_send_result @ 0x8225c54

/* Dispatcher_Compound_ExtreamItem::_send_result() */

void __thiscall Dispatcher_Compound_ExtreamItem::_send_result(Dispatcher_Compound_ExtreamItem *this)

{
  char cVar1;
  uint uVar2;
  GameWorld *this_00;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08225c7d to 08225e93 has its CatchHandler @ 08225e96 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x146);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(this + local_10 * 2 + 8));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(this + 4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(this + 6));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x92));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x97));
  uVar2 = Inven_Item::GetItemAttr((Inven_Item *)(this + 0x90));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar2 & 0xff);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(this + 0x9b));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)this[0x90]);
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsEnchantRevisionChannel(this_00);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x9d));
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
  }
  uVar2 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(this + 0xa1));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar2 & 0xff);
  uVar2 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(this + 0xa1));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
  InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_1c,(Inven_Item *)(this + 0x90));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(*(CUser **)(this + 0xd0),local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
