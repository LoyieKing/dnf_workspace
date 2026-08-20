# do_after_dungeon_start_checkndelete_item

`_ZN6CParty40do_after_dungeon_start_checkndelete_itemERK12RequiredItemP5CUser`

`CParty::do_after_dungeon_start_checkndelete_item(RequiredItem const&, CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a0756` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a0756  _ZN6CParty40do_after_dungeon_start_checkndelete_itemERK12RequiredItemP5CUser
#           CParty::do_after_dungeon_start_checkndelete_item(RequiredItem const&, CUser*)
# range [0x085a0756, 0x085a0953]
085a0756 +0x000:  push   %ebp
085a0757 +0x001:  mov    %esp,%ebp
085a0759 +0x003:  push   %esi
085a075a +0x004:  push   %ebx
085a075b +0x005:  add    $0xffffff80,%esp
085a075e +0x008:  movl   $0x0,-0xc(%ebp)
085a0765 +0x00f:  mov    0xc(%ebp),%eax
085a0768 +0x012:  mov    (%eax),%ebx
085a076a +0x014:  mov    0x10(%ebp),%eax
085a076d +0x017:  mov    %eax,(%esp)
085a0770 +0x01a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a0775 +0x01f:  mov    %ebx,0x4(%esp)
085a0779 +0x023:  mov    %eax,(%esp)
085a077c +0x026:  jmp    085a0881 <+0x12b>
085a0781 +0x02b:  mov    %eax,-0xc(%ebp)
085a0784 +0x02e:  cmpl   $0xffffffff,-0xc(%ebp)
085a0788 +0x032:  sete   %al
085a078b +0x035:  test   %al,%al
085a078d +0x037:  je     085a0799 <+0x43>
085a078f +0x039:  mov    $0x11,%ebx
085a0794 +0x03e:  jmp    085a0948 <+0x1f2>
085a0799 +0x043:  mov    0x10(%ebp),%eax
085a079c +0x046:  mov    %eax,(%esp)
085a079f +0x049:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a07a4 +0x04e:  lea    -0x65(%ebp),%edx
085a07a7 +0x051:  mov    -0xc(%ebp),%ecx
085a07aa +0x054:  mov    %ecx,0xc(%esp)
085a07ae +0x058:  movl   $0x1,0x8(%esp)
085a07b6 +0x060:  mov    %eax,0x4(%esp)
085a07ba +0x064:  mov    %edx,(%esp)
085a07bd +0x067:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085a07c2 +0x06c:  sub    $0x4,%esp
085a07c5 +0x06f:  mov    -0x5e(%ebp),%edx
085a07c8 +0x072:  mov    0xc(%ebp),%eax
085a07cb +0x075:  mov    0x4(%eax),%eax
085a07ce +0x078:  cmp    %eax,%edx
085a07d0 +0x07a:  jge    085a07dc <+0x86>
085a07d2 +0x07c:  mov    $0x11,%ebx
085a07d7 +0x081:  jmp    085a0948 <+0x1f2>
085a07dc +0x086:  mov    0xc(%ebp),%eax
085a07df +0x089:  mov    0x4(%eax),%ebx
085a07e2 +0x08c:  mov    0x10(%ebp),%eax
085a07e5 +0x08f:  mov    %eax,(%esp)
085a07e8 +0x092:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a07ed +0x097:  movl   $0x1,0x14(%esp)
085a07f5 +0x09f:  movl   $0xe,0x10(%esp)
085a07fd +0x0a7:  mov    %ebx,0xc(%esp)
085a0801 +0x0ab:  mov    -0xc(%ebp),%edx
085a0804 +0x0ae:  mov    %edx,0x8(%esp)
085a0808 +0x0b2:  movl   $0x1,0x4(%esp)
085a0810 +0x0ba:  mov    %eax,(%esp)
085a0813 +0x0bd:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085a0818 +0x0c2:  xor    $0x1,%eax
085a081b +0x0c5:  test   %al,%al
085a081d +0x0c7:  je     085a0881 <+0x12b>
085a081f +0x0c9:  mov    0xc(%ebp),%eax
085a0822 +0x0cc:  mov    0x4(%eax),%esi
085a0825 +0x0cf:  mov    0x10(%ebp),%eax
085a0828 +0x0d2:  mov    %eax,(%esp)
085a082b +0x0d5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085a0830 +0x0da:  mov    %eax,%ebx
085a0832 +0x0dc:  movl   $0x5,0xc(%esp)
085a083a +0x0e4:  movl   $0xdfa,0x8(%esp)
085a0842 +0x0ec:  movl   $&_ZZN6CParty40do_after_dungeon_start_checkndelete_itemERK12RequiredItemP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085a084a +0x0f4:  lea    -0x1c(%ebp),%eax
085a084d +0x0f7:  mov    %eax,(%esp)
085a0850 +0x0fa:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a0855 +0x0ff:  mov    %esi,0x10(%esp)
085a0859 +0x103:  mov    -0xc(%ebp),%eax
085a085c +0x106:  mov    %eax,0xc(%esp)
085a0860 +0x10a:  mov    %ebx,0x8(%esp)
085a0864 +0x10e:  movl   $"CParty::isEventDungeon, delete_item failed , User ch=%d , %d %d",0x4(%esp)
085a086c +0x116:  lea    -0x1c(%ebp),%eax
085a086f +0x119:  mov    %eax,(%esp)
085a0872 +0x11c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a0877 +0x121:  mov    $0x11,%ebx
085a087c +0x126:  jmp    085a0948 <+0x1f2>
085a0881 +0x12b:  lea    -0x28(%ebp),%eax
085a0884 +0x12e:  mov    %eax,(%esp)
085a0887 +0x131:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a088c +0x136:  movl   $0xe,0x8(%esp)
085a0894 +0x13e:  movl   $0x0,0x4(%esp)
085a089c +0x146:  lea    -0x28(%ebp),%eax
085a089f +0x149:  mov    %eax,(%esp)
085a08a2 +0x14c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a08a7 +0x151:  movl   $0x0,0x4(%esp)
085a08af +0x159:  lea    -0x28(%ebp),%eax
085a08b2 +0x15c:  mov    %eax,(%esp)
085a08b5 +0x15f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a08ba +0x164:  movl   $0x1,0x4(%esp)
085a08c2 +0x16c:  lea    -0x28(%ebp),%eax
085a08c5 +0x16f:  mov    %eax,(%esp)
085a08c8 +0x172:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a08cd +0x177:  mov    0x10(%ebp),%eax
085a08d0 +0x17a:  mov    %eax,(%esp)
085a08d3 +0x17d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a08d8 +0x182:  lea    -0x28(%ebp),%edx
085a08db +0x185:  mov    %edx,0xc(%esp)
085a08df +0x189:  mov    -0xc(%ebp),%edx
085a08e2 +0x18c:  mov    %edx,0x8(%esp)
085a08e6 +0x190:  movl   $0x1,0x4(%esp)
085a08ee +0x198:  mov    %eax,(%esp)
085a08f1 +0x19b:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
085a08f6 +0x1a0:  movl   $0x1,0x4(%esp)
085a08fe +0x1a8:  lea    -0x28(%ebp),%eax
085a0901 +0x1ab:  mov    %eax,(%esp)
085a0904 +0x1ae:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a0909 +0x1b3:  lea    -0x28(%ebp),%eax
085a090c +0x1b6:  mov    %eax,0x4(%esp)
085a0910 +0x1ba:  mov    0x10(%ebp),%eax
085a0913 +0x1bd:  mov    %eax,(%esp)
085a0916 +0x1c0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085a091b +0x1c5:  mov    $0x0,%ebx
085a0920 +0x1ca:  lea    -0x28(%ebp),%eax
085a0923 +0x1cd:  mov    %eax,(%esp)
085a0926 +0x1d0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a092b +0x1d5:  jmp    085a0948 <+0x1f2>
085a092d +0x1d7:  mov    %edx,%ebx
085a092f +0x1d9:  mov    %eax,%esi
085a0931 +0x1db:  lea    -0x28(%ebp),%eax
085a0934 +0x1de:  mov    %eax,(%esp)
085a0937 +0x1e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a093c +0x1e6:  mov    %esi,%eax
085a093e +0x1e8:  mov    %ebx,%edx
085a0940 +0x1ea:  mov    %eax,(%esp)
085a0943 +0x1ed:  call   08ae3750 <_Unwind_Resume>
085a0948 +0x1f2:  mov    %ebx,%eax
085a094a +0x1f4:  lea    -0x8(%ebp),%esp
085a094d +0x1f7:  add    $0x0,%esp
085a0950 +0x1fa:  pop    %ebx
085a0951 +0x1fb:  pop    %esi
085a0952 +0x1fc:  pop    %ebp
085a0953 +0x1fd:  ret
```

## 反编译 C

```c
// CParty::do_after_dungeon_start_checkndelete_item @ 0x85a0756

/* CParty::do_after_dungeon_start_checkndelete_item(RequiredItem const&, CUser*) */

undefined4 __thiscall
CParty::do_after_dungeon_start_checkndelete_item(CParty *this,RequiredItem *param_1,CUser *param_2)

{
  CInventory *pCVar1;
  PacketGuard local_2c [28];
  undefined4 local_10;
  
  local_10 = 0;
  CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
  PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 085a08a2 to 085a091a has its CatchHandler @ 085a092d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
  CInventory::MakeItemPacket(pCVar1,1,local_10,local_2c);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
  CUser::Send(param_2,local_2c);
  PacketGuard::~PacketGuard(local_2c);
  return 0;
}
```
