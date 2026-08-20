# sendPacket

`_ZN25Inter_NpcLimitBuyItemInfo10sendPacketEP5CUser`

`Inter_NpcLimitBuyItemInfo::sendPacket(CUser*)`

| 类 | 地址 |
|---|---|
| `Inter_NpcLimitBuyItemInfo` | `0x084e6c42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e6c42  _ZN25Inter_NpcLimitBuyItemInfo10sendPacketEP5CUser
#           Inter_NpcLimitBuyItemInfo::sendPacket(CUser*)
# range [0x084e6c42, 0x084e6e19]
084e6c42 +0x000:  push   %ebp
084e6c43 +0x001:  mov    %esp,%ebp
084e6c45 +0x003:  push   %esi
084e6c46 +0x004:  push   %ebx
084e6c47 +0x005:  sub    $0x20,%esp
084e6c4a +0x008:  lea    -0x18(%ebp),%eax
084e6c4d +0x00b:  mov    %eax,(%esp)
084e6c50 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e6c55 +0x013:  movl   $0x1d1,0x8(%esp)
084e6c5d +0x01b:  movl   $0x1,0x4(%esp)
084e6c65 +0x023:  lea    -0x18(%ebp),%eax
084e6c68 +0x026:  mov    %eax,(%esp)
084e6c6b +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e6c70 +0x02e:  movl   $0x1,0x4(%esp)
084e6c78 +0x036:  lea    -0x18(%ebp),%eax
084e6c7b +0x039:  mov    %eax,(%esp)
084e6c7e +0x03c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e6c83 +0x041:  mov    0x8(%ebp),%eax
084e6c86 +0x044:  movzbl 0x1c(%eax),%eax
084e6c8a +0x048:  movsbl %al,%eax
084e6c8d +0x04b:  mov    %eax,0x4(%esp)
084e6c91 +0x04f:  lea    -0x18(%ebp),%eax
084e6c94 +0x052:  mov    %eax,(%esp)
084e6c97 +0x055:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e6c9c +0x05a:  mov    0x8(%ebp),%eax
084e6c9f +0x05d:  movzbl 0x1c(%eax),%eax
084e6ca3 +0x061:  test   %al,%al
084e6ca5 +0x063:  jne    084e6d58 <+0x116>
084e6cab +0x069:  mov    0x8(%ebp),%eax
084e6cae +0x06c:  mov    0x10(%eax),%eax
084e6cb1 +0x06f:  mov    %eax,0x4(%esp)
084e6cb5 +0x073:  lea    -0x18(%ebp),%eax
084e6cb8 +0x076:  mov    %eax,(%esp)
084e6cbb +0x079:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e6cc0 +0x07e:  mov    0x8(%ebp),%eax
084e6cc3 +0x081:  mov    0x1f(%eax),%eax
084e6cc6 +0x084:  mov    %eax,0x4(%esp)
084e6cca +0x088:  lea    -0x18(%ebp),%eax
084e6ccd +0x08b:  mov    %eax,(%esp)
084e6cd0 +0x08e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6cd5 +0x093:  mov    0x8(%ebp),%eax
084e6cd8 +0x096:  mov    0x24(%eax),%eax
084e6cdb +0x099:  mov    %eax,0x4(%esp)
084e6cdf +0x09d:  lea    -0x18(%ebp),%eax
084e6ce2 +0x0a0:  mov    %eax,(%esp)
084e6ce5 +0x0a3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6cea +0x0a8:  mov    0x8(%ebp),%eax
084e6ced +0x0ab:  movzwl 0x28(%eax),%eax
084e6cf1 +0x0af:  movzwl %ax,%eax
084e6cf4 +0x0b2:  mov    %eax,0x4(%esp)
084e6cf8 +0x0b6:  lea    -0x18(%ebp),%eax
084e6cfb +0x0b9:  mov    %eax,(%esp)
084e6cfe +0x0bc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e6d03 +0x0c1:  mov    0x8(%ebp),%eax
084e6d06 +0x0c4:  add    $0x2e,%eax
084e6d09 +0x0c7:  mov    %eax,(%esp)
084e6d0c +0x0ca:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
084e6d11 +0x0cf:  movzbl %al,%eax
084e6d14 +0x0d2:  mov    %eax,0x4(%esp)
084e6d18 +0x0d6:  lea    -0x18(%ebp),%eax
084e6d1b +0x0d9:  mov    %eax,(%esp)
084e6d1e +0x0dc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e6d23 +0x0e1:  mov    0x8(%ebp),%eax
084e6d26 +0x0e4:  add    $0x2e,%eax
084e6d29 +0x0e7:  mov    %eax,(%esp)
084e6d2c +0x0ea:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
084e6d31 +0x0ef:  movzwl %ax,%eax
084e6d34 +0x0f2:  mov    %eax,0x4(%esp)
084e6d38 +0x0f6:  lea    -0x18(%ebp),%eax
084e6d3b +0x0f9:  mov    %eax,(%esp)
084e6d3e +0x0fc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e6d43 +0x101:  mov    0x8(%ebp),%eax
084e6d46 +0x104:  add    $0x1d,%eax
084e6d49 +0x107:  mov    %eax,0x4(%esp)
084e6d4d +0x10b:  lea    -0x18(%ebp),%eax
084e6d50 +0x10e:  mov    %eax,(%esp)
084e6d53 +0x111:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
084e6d58 +0x116:  mov    0x8(%ebp),%eax
084e6d5b +0x119:  mov    0x5c(%eax),%eax
084e6d5e +0x11c:  mov    %eax,0x4(%esp)
084e6d62 +0x120:  lea    -0x18(%ebp),%eax
084e6d65 +0x123:  mov    %eax,(%esp)
084e6d68 +0x126:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6d6d +0x12b:  mov    0x8(%ebp),%eax
084e6d70 +0x12e:  mov    0x14(%eax),%ebx
084e6d73 +0x131:  mov    0xc(%ebp),%eax
084e6d76 +0x134:  mov    %eax,(%esp)
084e6d79 +0x137:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084e6d7e +0x13c:  mov    %ebx,0x8(%esp)
084e6d82 +0x140:  movl   $0x1,0x4(%esp)
084e6d8a +0x148:  mov    %eax,(%esp)
084e6d8d +0x14b:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
084e6d92 +0x150:  mov    %eax,-0xc(%ebp)
084e6d95 +0x153:  cmpl   $0x0,-0xc(%ebp)
084e6d99 +0x157:  jne    084e6db0 <+0x16e>
084e6d9b +0x159:  movl   $0x0,0x4(%esp)
084e6da3 +0x161:  lea    -0x18(%ebp),%eax
084e6da6 +0x164:  mov    %eax,(%esp)
084e6da9 +0x167:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6dae +0x16c:  jmp    084e6dc5 <+0x183>
084e6db0 +0x16e:  mov    -0xc(%ebp),%eax
084e6db3 +0x171:  mov    0x7(%eax),%eax
084e6db6 +0x174:  mov    %eax,0x4(%esp)
084e6dba +0x178:  lea    -0x18(%ebp),%eax
084e6dbd +0x17b:  mov    %eax,(%esp)
084e6dc0 +0x17e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e6dc5 +0x183:  movl   $0x1,0x4(%esp)
084e6dcd +0x18b:  lea    -0x18(%ebp),%eax
084e6dd0 +0x18e:  mov    %eax,(%esp)
084e6dd3 +0x191:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e6dd8 +0x196:  lea    -0x18(%ebp),%eax
084e6ddb +0x199:  mov    %eax,0x4(%esp)
084e6ddf +0x19d:  mov    0xc(%ebp),%eax
084e6de2 +0x1a0:  mov    %eax,(%esp)
084e6de5 +0x1a3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e6dea +0x1a8:  jmp    084e6e07 <+0x1c5>
084e6dec +0x1aa:  mov    %edx,%ebx
084e6dee +0x1ac:  mov    %eax,%esi
084e6df0 +0x1ae:  lea    -0x18(%ebp),%eax
084e6df3 +0x1b1:  mov    %eax,(%esp)
084e6df6 +0x1b4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e6dfb +0x1b9:  mov    %esi,%eax
084e6dfd +0x1bb:  mov    %ebx,%edx
084e6dff +0x1bd:  mov    %eax,(%esp)
084e6e02 +0x1c0:  call   08ae3750 <_Unwind_Resume>
084e6e07 +0x1c5:  lea    -0x18(%ebp),%eax
084e6e0a +0x1c8:  mov    %eax,(%esp)
084e6e0d +0x1cb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e6e12 +0x1d0:  add    $0x20,%esp
084e6e15 +0x1d3:  pop    %ebx
084e6e16 +0x1d4:  pop    %esi
084e6e17 +0x1d5:  pop    %ebp
084e6e18 +0x1d6:  ret
084e6e19 +0x1d7:  nop
```

## 反编译 C

```c
// Inter_NpcLimitBuyItemInfo::sendPacket @ 0x84e6c42

/* Inter_NpcLimitBuyItemInfo::sendPacket(CUser*) */

void __thiscall
Inter_NpcLimitBuyItemInfo::sendPacket(Inter_NpcLimitBuyItemInfo *this,CUser *param_1)

{
  int iVar1;
  uint uVar2;
  CInventory *this_00;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e6c6b to 084e6de9 has its CatchHandler @ 084e6dec */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1d1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)this[0x1c]);
  if (this[0x1c] == (Inter_NpcLimitBuyItemInfo)0x0) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(this + 0x10));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x1f));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x24));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(this + 0x28));
    uVar2 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(this + 0x2e));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar2 & 0xff);
    uVar2 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(this + 0x2e));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_1c,(Inven_Item *)(this + 0x1d));
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x5c));
  iVar1 = *(int *)(this + 0x14);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  local_10 = CInventory::GetInvenRef(this_00,1,iVar1);
  if (local_10 == 0) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 7));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
