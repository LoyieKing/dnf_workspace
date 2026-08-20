# _putItemData

`_ZN10CTitleBook12_putItemDataER11PacketGuardsR10Inven_Item`

`CTitleBook::_putItemData(PacketGuard&, short, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641a6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641a6a  _ZN10CTitleBook12_putItemDataER11PacketGuardsR10Inven_Item
#           CTitleBook::_putItemData(PacketGuard&, short, Inven_Item&)
# range [0x08641a6a, 0x08641b83]
08641a6a +0x000:  push   %ebp
08641a6b +0x001:  mov    %esp,%ebp
08641a6d +0x003:  sub    $0x28,%esp
08641a70 +0x006:  mov    0x10(%ebp),%eax
08641a73 +0x009:  mov    %ax,-0xc(%ebp)
08641a77 +0x00d:  movswl -0xc(%ebp),%edx
08641a7b +0x011:  mov    0xc(%ebp),%eax
08641a7e +0x014:  mov    %edx,0x4(%esp)
08641a82 +0x018:  mov    %eax,(%esp)
08641a85 +0x01b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08641a8a +0x020:  mov    0x14(%ebp),%eax
08641a8d +0x023:  mov    0x2(%eax),%eax
08641a90 +0x026:  mov    %eax,%edx
08641a92 +0x028:  mov    0xc(%ebp),%eax
08641a95 +0x02b:  mov    %edx,0x4(%esp)
08641a99 +0x02f:  mov    %eax,(%esp)
08641a9c +0x032:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08641aa1 +0x037:  mov    0x14(%ebp),%eax
08641aa4 +0x03a:  mov    0x7(%eax),%edx
08641aa7 +0x03d:  mov    0xc(%ebp),%eax
08641aaa +0x040:  mov    %edx,0x4(%esp)
08641aae +0x044:  mov    %eax,(%esp)
08641ab1 +0x047:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08641ab6 +0x04c:  mov    0x14(%ebp),%eax
08641ab9 +0x04f:  mov    %eax,(%esp)
08641abc +0x052:  call   084fc5ff <_Z24GetIntegratedPvPItemAttrRK10Inven_Item>  ; GetIntegratedPvPItemAttr(Inven_Item const&)
08641ac1 +0x057:  movzbl %al,%edx
08641ac4 +0x05a:  mov    0xc(%ebp),%eax
08641ac7 +0x05d:  mov    %edx,0x4(%esp)
08641acb +0x061:  mov    %eax,(%esp)
08641ace +0x064:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08641ad3 +0x069:  mov    0x14(%ebp),%eax
08641ad6 +0x06c:  movzwl 0xb(%eax),%eax
08641ada +0x070:  movzwl %ax,%edx
08641add +0x073:  mov    0xc(%ebp),%eax
08641ae0 +0x076:  mov    %edx,0x4(%esp)
08641ae4 +0x07a:  mov    %eax,(%esp)
08641ae7 +0x07d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08641aec +0x082:  mov    0x14(%ebp),%eax
08641aef +0x085:  movzbl (%eax),%eax
08641af2 +0x088:  movzbl %al,%edx
08641af5 +0x08b:  mov    0xc(%ebp),%eax
08641af8 +0x08e:  mov    %edx,0x4(%esp)
08641afc +0x092:  mov    %eax,(%esp)
08641aff +0x095:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08641b04 +0x09a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08641b09 +0x09f:  mov    %eax,(%esp)
08641b0c +0x0a2:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
08641b11 +0x0a7:  test   %al,%al
08641b13 +0x0a9:  je     08641b2a <+0xc0>
08641b15 +0x0ab:  mov    0xc(%ebp),%eax
08641b18 +0x0ae:  movl   $0x0,0x4(%esp)
08641b20 +0x0b6:  mov    %eax,(%esp)
08641b23 +0x0b9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08641b28 +0x0be:  jmp    08641b41 <+0xd7>
08641b2a +0x0c0:  mov    0x14(%ebp),%eax
08641b2d +0x0c3:  mov    0xd(%eax),%eax
08641b30 +0x0c6:  mov    %eax,%edx
08641b32 +0x0c8:  mov    0xc(%ebp),%eax
08641b35 +0x0cb:  mov    %edx,0x4(%esp)
08641b39 +0x0cf:  mov    %eax,(%esp)
08641b3c +0x0d2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08641b41 +0x0d7:  mov    0x14(%ebp),%eax
08641b44 +0x0da:  add    $0x11,%eax
08641b47 +0x0dd:  mov    %eax,(%esp)
08641b4a +0x0e0:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08641b4f +0x0e5:  movzbl %al,%edx
08641b52 +0x0e8:  mov    0xc(%ebp),%eax
08641b55 +0x0eb:  mov    %edx,0x4(%esp)
08641b59 +0x0ef:  mov    %eax,(%esp)
08641b5c +0x0f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08641b61 +0x0f7:  mov    0x14(%ebp),%eax
08641b64 +0x0fa:  add    $0x11,%eax
08641b67 +0x0fd:  mov    %eax,(%esp)
08641b6a +0x100:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
08641b6f +0x105:  movzwl %ax,%edx
08641b72 +0x108:  mov    0xc(%ebp),%eax
08641b75 +0x10b:  mov    %edx,0x4(%esp)
08641b79 +0x10f:  mov    %eax,(%esp)
08641b7c +0x112:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08641b81 +0x117:  leave
08641b82 +0x118:  ret
08641b83 +0x119:  nop
```

## 反编译 C

```c
// CTitleBook::_putItemData @ 0x8641a6a

/* CTitleBook::_putItemData(PacketGuard&, short, Inven_Item&) */

void __thiscall
CTitleBook::_putItemData(CTitleBook *this,PacketGuard *param_1,short param_2,Inven_Item *param_3)

{
  char cVar1;
  uint uVar2;
  GameWorld *this_00;
  
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(param_3 + 2));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(param_3 + 7));
  uVar2 = GetIntegratedPvPItemAttr(param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar2 & 0xff);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)(param_3 + 0xb));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)*param_3);
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsEnchantRevisionChannel(this_00);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(param_3 + 0xd));
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
  }
  uVar2 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(param_3 + 0x11));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar2 & 0xff);
  uVar2 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(param_3 + 0x11));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
  return;
}
```
