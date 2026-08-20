# dispatch_sig

`_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeItem` | `0x082006d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082006d0  _ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x082006d0, 0x08200b07]
082006d0 +0x000:  push   %ebp
082006d1 +0x001:  mov    %esp,%ebp
082006d3 +0x003:  push   %edi
082006d4 +0x004:  push   %ebx
082006d5 +0x005:  sub    $0x150,%esp
082006db +0x00b:  cmpl   $0x0,0xc(%ebp)
082006df +0x00f:  je     082006f0 <+0x20>
082006e1 +0x011:  mov    0xc(%ebp),%eax
082006e4 +0x014:  mov    %eax,(%esp)
082006e7 +0x017:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
082006ec +0x01c:  test   %al,%al
082006ee +0x01e:  je     082006f7 <+0x27>
082006f0 +0x020:  mov    $0x1,%eax
082006f5 +0x025:  jmp    082006fc <+0x2c>
082006f7 +0x027:  mov    $0x0,%eax
082006fc +0x02c:  test   %al,%al
082006fe +0x02e:  je     0820070a <+0x3a>
08200700 +0x030:  mov    $0x0,%eax
08200705 +0x035:  jmp    08200afe <+0x42e>
0820070a +0x03a:  mov    0xc(%ebp),%eax
0820070d +0x03d:  mov    %eax,(%esp)
08200710 +0x040:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08200715 +0x045:  cmp    $0x3,%eax
08200718 +0x048:  jne    08200729 <+0x59>
0820071a +0x04a:  mov    0xc(%ebp),%eax
0820071d +0x04d:  mov    %eax,(%esp)
08200720 +0x050:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08200725 +0x055:  test   %eax,%eax
08200727 +0x057:  jne    08200730 <+0x60>
08200729 +0x059:  mov    $0x1,%eax
0820072e +0x05e:  jmp    08200735 <+0x65>
08200730 +0x060:  mov    $0x0,%eax
08200735 +0x065:  test   %al,%al
08200737 +0x067:  je     08200762 <+0x92>
08200739 +0x069:  movl   $0x0,0xc(%esp)
08200741 +0x071:  movl   $0x0,0x8(%esp)
08200749 +0x079:  movl   $&_ZZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08200751 +0x081:  movl   $0x9518,(%esp)
08200758 +0x088:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820075d +0x08d:  jmp    08200afe <+0x42e>
08200762 +0x092:  mov    0xc(%ebp),%eax
08200765 +0x095:  mov    %eax,(%esp)
08200768 +0x098:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0820076d +0x09d:  test   %al,%al
0820076f +0x09f:  je     0820077b <+0xab>
08200771 +0x0a1:  mov    $0x0,%eax
08200776 +0x0a6:  jmp    08200afe <+0x42e>
0820077b +0x0ab:  lea    -0x13e(%ebp),%eax
08200781 +0x0b1:  mov    %eax,(%esp)
08200784 +0x0b4:  call   0822dcea <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3394>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3394
08200789 +0x0b9:  lea    -0x13e(%ebp),%eax
0820078f +0x0bf:  add    $0x1a,%eax
08200792 +0x0c2:  mov    %eax,0x4(%esp)
08200796 +0x0c6:  mov    0x10(%ebp),%eax
08200799 +0x0c9:  mov    %eax,(%esp)
0820079c +0x0cc:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082007a1 +0x0d1:  xor    $0x1,%eax
082007a4 +0x0d4:  test   %al,%al
082007a6 +0x0d6:  je     082007d1 <+0x101>
082007a8 +0x0d8:  movl   $0x0,0xc(%esp)
082007b0 +0x0e0:  movl   $0x0,0x8(%esp)
082007b8 +0x0e8:  movl   $&_ZZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082007c0 +0x0f0:  movl   $0x9530,(%esp)
082007c7 +0x0f7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082007cc +0x0fc:  jmp    08200afe <+0x42e>
082007d1 +0x101:  lea    -0x13e(%ebp),%eax
082007d7 +0x107:  add    $0x1b,%eax
082007da +0x10a:  mov    %eax,0x4(%esp)
082007de +0x10e:  mov    0x10(%ebp),%eax
082007e1 +0x111:  mov    %eax,(%esp)
082007e4 +0x114:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
082007e9 +0x119:  xor    $0x1,%eax
082007ec +0x11c:  test   %al,%al
082007ee +0x11e:  je     08200819 <+0x149>
082007f0 +0x120:  movl   $0x0,0xc(%esp)
082007f8 +0x128:  movl   $0x0,0x8(%esp)
08200800 +0x130:  movl   $&_ZZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08200808 +0x138:  movl   $0x9532,(%esp)
0820080f +0x13f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08200814 +0x144:  jmp    08200afe <+0x42e>
08200819 +0x149:  lea    -0x13e(%ebp),%eax
0820081f +0x14f:  add    $0x1d,%eax
08200822 +0x152:  mov    %eax,0x4(%esp)
08200826 +0x156:  mov    0x10(%ebp),%eax
08200829 +0x159:  mov    %eax,(%esp)
0820082c +0x15c:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
08200831 +0x161:  xor    $0x1,%eax
08200834 +0x164:  test   %al,%al
08200836 +0x166:  je     08200861 <+0x191>
08200838 +0x168:  movl   $0x0,0xc(%esp)
08200840 +0x170:  movl   $0x0,0x8(%esp)
08200848 +0x178:  movl   $&_ZZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08200850 +0x180:  movl   $0x9534,(%esp)
08200857 +0x187:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820085c +0x18c:  jmp    08200afe <+0x42e>
08200861 +0x191:  lea    -0x13e(%ebp),%eax
08200867 +0x197:  add    $0x23,%eax
0820086a +0x19a:  mov    %eax,0x4(%esp)
0820086e +0x19e:  mov    0x10(%ebp),%eax
08200871 +0x1a1:  mov    %eax,(%esp)
08200874 +0x1a4:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08200879 +0x1a9:  xor    $0x1,%eax
0820087c +0x1ac:  test   %al,%al
0820087e +0x1ae:  je     082008a9 <+0x1d9>
08200880 +0x1b0:  movl   $0x0,0xc(%esp)
08200888 +0x1b8:  movl   $0x0,0x8(%esp)
08200890 +0x1c0:  movl   $&_ZZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08200898 +0x1c8:  movl   $0x9536,(%esp)
0820089f +0x1cf:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082008a4 +0x1d4:  jmp    08200afe <+0x42e>
082008a9 +0x1d9:  lea    -0x13e(%ebp),%eax
082008af +0x1df:  add    $0x21,%eax
082008b2 +0x1e2:  mov    %eax,0x4(%esp)
082008b6 +0x1e6:  mov    0x10(%ebp),%eax
082008b9 +0x1e9:  mov    %eax,(%esp)
082008bc +0x1ec:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
082008c1 +0x1f1:  xor    $0x1,%eax
082008c4 +0x1f4:  test   %al,%al
082008c6 +0x1f6:  je     082008f1 <+0x221>
082008c8 +0x1f8:  movl   $0x0,0xc(%esp)
082008d0 +0x200:  movl   $0x0,0x8(%esp)
082008d8 +0x208:  movl   $&_ZZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082008e0 +0x210:  movl   $0x9539,(%esp)
082008e7 +0x217:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082008ec +0x21c:  jmp    08200afe <+0x42e>
082008f1 +0x221:  movl   $0x80,-0x10(%ebp)
082008f8 +0x228:  movl   $0x0,-0x14(%ebp)
082008ff +0x22f:  lea    -0x95(%ebp),%edx
08200905 +0x235:  mov    $0x81,%ebx
0820090a +0x23a:  mov    $0x0,%eax
0820090f +0x23f:  mov    %edx,%ecx
08200911 +0x241:  and    $0x1,%ecx
08200914 +0x244:  test   %ecx,%ecx
08200916 +0x246:  je     08200920 <+0x250>
08200918 +0x248:  mov    %al,(%edx)
0820091a +0x24a:  add    $0x1,%edx
0820091d +0x24d:  sub    $0x1,%ebx
08200920 +0x250:  mov    %edx,%ecx
08200922 +0x252:  and    $0x2,%ecx
08200925 +0x255:  test   %ecx,%ecx
08200927 +0x257:  je     08200932 <+0x262>
08200929 +0x259:  mov    %ax,(%edx)
0820092c +0x25c:  add    $0x2,%edx
0820092f +0x25f:  sub    $0x2,%ebx
08200932 +0x262:  mov    %ebx,%ecx
08200934 +0x264:  shr    $0x2,%ecx
08200937 +0x267:  mov    %edx,%edi
08200939 +0x269:  rep stos %eax,%es:(%edi)
0820093b +0x26b:  mov    %edi,%edx
0820093d +0x26d:  mov    %ebx,%ecx
0820093f +0x26f:  and    $0x2,%ecx
08200942 +0x272:  test   %ecx,%ecx
08200944 +0x274:  je     0820094c <+0x27c>
08200946 +0x276:  mov    %ax,(%edx)
08200949 +0x279:  add    $0x2,%edx
0820094c +0x27c:  mov    %ebx,%ecx
0820094e +0x27e:  and    $0x1,%ecx
08200951 +0x281:  test   %ecx,%ecx
08200953 +0x283:  je     0820095a <+0x28a>
08200955 +0x285:  mov    %al,(%edx)
08200957 +0x287:  add    $0x1,%edx
0820095a +0x28a:  lea    -0x14(%ebp),%eax
0820095d +0x28d:  mov    %eax,0x4(%esp)
08200961 +0x291:  mov    0x10(%ebp),%eax
08200964 +0x294:  mov    %eax,(%esp)
08200967 +0x297:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0820096c +0x29c:  xor    $0x1,%eax
0820096f +0x29f:  test   %al,%al
08200971 +0x2a1:  je     0820099c <+0x2cc>
08200973 +0x2a3:  movl   $0x0,0xc(%esp)
0820097b +0x2ab:  movl   $0x0,0x8(%esp)
08200983 +0x2b3:  movl   $&_ZZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820098b +0x2bb:  movl   $0x9540,(%esp)
08200992 +0x2c2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08200997 +0x2c7:  jmp    08200afe <+0x42e>
0820099c +0x2cc:  mov    -0x14(%ebp),%eax
0820099f +0x2cf:  mov    %eax,0xc(%esp)
082009a3 +0x2d3:  movl   $0x81,0x8(%esp)
082009ab +0x2db:  lea    -0x13e(%ebp),%eax
082009b1 +0x2e1:  add    $0x28,%eax
082009b4 +0x2e4:  mov    %eax,0x4(%esp)
082009b8 +0x2e8:  mov    0x10(%ebp),%eax
082009bb +0x2eb:  mov    %eax,(%esp)
082009be +0x2ee:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
082009c3 +0x2f3:  xor    $0x1,%eax
082009c6 +0x2f6:  test   %al,%al
082009c8 +0x2f8:  je     082009f3 <+0x323>
082009ca +0x2fa:  movl   $0x0,0xc(%esp)
082009d2 +0x302:  movl   $0x0,0x8(%esp)
082009da +0x30a:  movl   $&_ZZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082009e2 +0x312:  movl   $0x9542,(%esp)
082009e9 +0x319:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082009ee +0x31e:  jmp    08200afe <+0x42e>
082009f3 +0x323:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
082009f8 +0x328:  movl   $0x7,0xc(%esp)
08200a00 +0x330:  movl   $0x1,0x8(%esp)
08200a08 +0x338:  mov    0xc(%ebp),%edx
08200a0b +0x33b:  mov    %edx,0x4(%esp)
08200a0f +0x33f:  mov    %eax,(%esp)
08200a12 +0x342:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
08200a17 +0x347:  test   %al,%al
08200a19 +0x349:  je     08200a40 <+0x370>
08200a1b +0x34b:  movl   $0xd1,0x8(%esp)
08200a23 +0x353:  movl   $0x53,0x4(%esp)
08200a2b +0x35b:  mov    0xc(%ebp),%eax
08200a2e +0x35e:  mov    %eax,(%esp)
08200a31 +0x361:  call   0867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>  ; CUser::SendCmdErrorPacket2Byte(ENUM_CMDPACKET, unsigned short)
08200a36 +0x366:  mov    $0x0,%eax
08200a3b +0x36b:  jmp    08200afe <+0x42e>
08200a40 +0x370:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08200a45 +0x375:  movl   $0x25,0x8(%esp)
08200a4d +0x37d:  mov    0xc(%ebp),%edx
08200a50 +0x380:  mov    %edx,0x4(%esp)
08200a54 +0x384:  mov    %eax,(%esp)
08200a57 +0x387:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08200a5c +0x38c:  mov    %eax,-0xc(%ebp)
08200a5f +0x38f:  cmpl   $0x0,-0xc(%ebp)
08200a63 +0x393:  je     08200a89 <+0x3b9>
08200a65 +0x395:  mov    -0xc(%ebp),%eax
08200a68 +0x398:  movzwl %ax,%eax
08200a6b +0x39b:  mov    %eax,0x8(%esp)
08200a6f +0x39f:  movl   $0x53,0x4(%esp)
08200a77 +0x3a7:  mov    0xc(%ebp),%eax
08200a7a +0x3aa:  mov    %eax,(%esp)
08200a7d +0x3ad:  call   0867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>  ; CUser::SendCmdErrorPacket2Byte(ENUM_CMDPACKET, unsigned short)
08200a82 +0x3b2:  mov    $0x0,%eax
08200a87 +0x3b7:  jmp    08200afe <+0x42e>
08200a89 +0x3b9:  movzwl -0x123(%ebp),%eax
08200a90 +0x3c0:  movzwl %ax,%eax
08200a93 +0x3c3:  mov    %eax,0x8(%esp)
08200a97 +0x3c7:  movl   $0x1,0x4(%esp)
08200a9f +0x3cf:  mov    0xc(%ebp),%eax
08200aa2 +0x3d2:  mov    %eax,(%esp)
08200aa5 +0x3d5:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08200aaa +0x3da:  test   %al,%al
08200aac +0x3dc:  je     08200ad0 <+0x400>
08200aae +0x3de:  movl   $0xd5,0x8(%esp)
08200ab6 +0x3e6:  movl   $0x53,0x4(%esp)
08200abe +0x3ee:  mov    0xc(%ebp),%eax
08200ac1 +0x3f1:  mov    %eax,(%esp)
08200ac4 +0x3f4:  call   0867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>  ; CUser::SendCmdErrorPacket2Byte(ENUM_CMDPACKET, unsigned short)
08200ac9 +0x3f9:  mov    $0x0,%eax
08200ace +0x3fe:  jmp    08200afe <+0x42e>
08200ad0 +0x400:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08200ad5 +0x405:  mov    0x20(%eax),%eax
08200ad8 +0x408:  movl   $0x53,0xc(%esp)
08200ae0 +0x410:  lea    -0x13e(%ebp),%edx
08200ae6 +0x416:  mov    %edx,0x8(%esp)
08200aea +0x41a:  mov    0xc(%ebp),%edx
08200aed +0x41d:  mov    %edx,0x4(%esp)
08200af1 +0x421:  mov    %eax,(%esp)
08200af4 +0x424:  call   080fc850 <_ZN8WongWork12IItemUpgrade19item_upgrade_systemEP5CUserP16MSG_ITEM_UPGRADEi>  ; WongWork::IItemUpgrade::item_upgrade_system(CUser*, MSG_ITEM_UPGRADE*, int)
08200af9 +0x429:  mov    $0x0,%eax
08200afe +0x42e:  add    $0x150,%esp
08200b04 +0x434:  pop    %ebx
08200b05 +0x435:  pop    %edi
08200b06 +0x436:  pop    %ebp
08200b07 +0x437:  ret
```

## 反编译 C

```c
// Dispatcher_UpgradeItem::dispatch_sig @ 0x82006d0

/* Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UpgradeItem::dispatch_sig(Dispatcher_UpgradeItem *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ServiceRestrictManager *pSVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  MSG_ITEM_UPGRADE local_142 [26];
  uchar uStack_128;
  ushort local_127;
  ulong uStack_125;
  ushort uStack_121;
  ushort auStack_11f [2];
  char acStack_11a [129];
  undefined1 local_99;
  undefined4 local_98 [32];
  uint local_18 [3];
  
  bVar9 = 0;
  if ((param_1 == (CUser *)0x0) || (cVar1 = CUser::CheckInTrade(param_1), cVar1 != '\0')) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (!bVar8) {
    iVar2 = CUser::get_state(param_1);
    if ((iVar2 == 3) &&
       (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar2 != 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      uVar3 = LineFunc(0x9518,"virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      cVar1 = CUser::CheckInTrade(param_1);
      if (cVar1 == '\0') {
        MSG_ITEM_UPGRADE::MSG_ITEM_UPGRADE(local_142);
        cVar1 = PacketBuf::get_byte(param_2,&uStack_128);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,&local_127);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_2,&uStack_125);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_2,auStack_11f);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_short(param_2,&uStack_121);
                if (cVar1 == '\x01') {
                  local_18[1] = 0x80;
                  local_18[0] = 0;
                  puVar6 = (undefined4 *)&local_99;
                  uVar7 = 0x81;
                  bVar8 = ((uint)puVar6 & 1) != 0;
                  if (bVar8) {
                    local_99 = 0;
                    puVar6 = local_98;
                    uVar7 = 0x80;
                  }
                  if (((uint)puVar6 & 2) != 0) {
                    *(undefined2 *)puVar6 = 0;
                    puVar6 = (undefined4 *)((int)puVar6 + 2);
                    uVar7 = uVar7 - 2;
                  }
                  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar6 = 0;
                    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
                  }
                  if ((uVar7 & 2) != 0) {
                    *(undefined2 *)puVar6 = 0;
                    puVar6 = (undefined4 *)((int)puVar6 + 2);
                  }
                  if (!bVar8) {
                    *(undefined1 *)puVar6 = 0;
                  }
                  cVar1 = PacketBuf::get_int(param_2,local_18);
                  if (cVar1 == '\x01') {
                    cVar1 = PacketBuf::get_str(param_2,acStack_11a,0x81,local_18[0]);
                    if (cVar1 == '\x01') {
                      pSVar4 = (ServiceRestrictManager *)
                               ARAD::Singleton<ServiceRestrictManager>::Get();
                      cVar1 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,7);
                      if (cVar1 == '\0') {
                        local_18[2] = CSecu_ProtectionField::Check
                                                (GlobalData::s_pSecuProtectionField,param_1,0x25);
                        if (local_18[2] == 0) {
                          cVar1 = CUser::CheckItemLock(param_1,1,(uint)local_127);
                          if (cVar1 == '\0') {
                            iVar2 = G_CDataManager();
                            WongWork::IItemUpgrade::item_upgrade_system
                                      (*(IItemUpgrade **)(iVar2 + 0x20),param_1,local_142,0x53);
                            uVar3 = 0;
                          }
                          else {
                            CUser::SendCmdErrorPacket2Byte(param_1,0x53,0xd5);
                            uVar3 = 0;
                          }
                        }
                        else {
                          CUser::SendCmdErrorPacket2Byte(param_1,0x53,local_18[2] & 0xffff);
                          uVar3 = 0;
                        }
                      }
                      else {
                        CUser::SendCmdErrorPacket2Byte(param_1,0x53,0xd1);
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = LineFunc(0x9542,
                                       "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar3 = LineFunc(0x9540,
                                     "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar3 = LineFunc(0x9539,
                                   "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar3 = LineFunc(0x9536,
                                 "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0x9534,
                               "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0x9532,
                             "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)",
                             0,0);
          }
        }
        else {
          uVar3 = LineFunc(0x9530,
                           "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)",0,
                           0);
        }
      }
      else {
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 0;
}
```
