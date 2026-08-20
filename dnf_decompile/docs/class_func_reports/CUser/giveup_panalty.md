# giveup_panalty

`_ZN5CUser14giveup_panaltyEv`

`CUser::giveup_panalty()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086786be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086786be  _ZN5CUser14giveup_panaltyEv
#           CUser::giveup_panalty()
# range [0x086786be, 0x086787fb]
086786be +0x000:  push   %ebp
086786bf +0x001:  mov    %esp,%ebp
086786c1 +0x003:  push   %esi
086786c2 +0x004:  push   %ebx
086786c3 +0x005:  sub    $0x20,%esp
086786c6 +0x008:  call   0822ad44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3ee
086786cb +0x00d:  test   %al,%al
086786cd +0x00f:  jne    086787e8 <+0x12a>
086786d3 +0x015:  mov    0x8(%ebp),%eax
086786d6 +0x018:  movzbl 0x711d8(%eax),%eax
086786dd +0x01f:  test   %al,%al
086786df +0x021:  jne    086787eb <+0x12d>
086786e5 +0x027:  movl   $0xc,0x4(%esp)
086786ed +0x02f:  mov    0x8(%ebp),%eax
086786f0 +0x032:  mov    %eax,(%esp)
086786f3 +0x035:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
086786f8 +0x03a:  test   %al,%al
086786fa +0x03c:  jne    086787ee <+0x130>
08678700 +0x042:  mov    0x8(%ebp),%eax
08678703 +0x045:  mov    %eax,(%esp)
08678706 +0x048:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867870b +0x04d:  cmp    $0x11,%eax
0867870e +0x050:  setle  %al
08678711 +0x053:  test   %al,%al
08678713 +0x055:  jne    086787f1 <+0x133>
08678719 +0x05b:  movl   $0xc,0x4(%esp)
08678721 +0x063:  mov    0x8(%ebp),%eax
08678724 +0x066:  mov    %eax,(%esp)
08678727 +0x069:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
0867872c +0x06e:  test   %al,%al
0867872e +0x070:  jne    086787f4 <+0x136>
08678734 +0x076:  mov    0x8(%ebp),%eax
08678737 +0x079:  mov    %eax,(%esp)
0867873a +0x07c:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
0867873f +0x081:  cmp    $0x1,%eax
08678742 +0x084:  setne  %al
08678745 +0x087:  test   %al,%al
08678747 +0x089:  je     086787f5 <+0x137>
0867874d +0x08f:  lea    -0x14(%ebp),%eax
08678750 +0x092:  mov    %eax,(%esp)
08678753 +0x095:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08678758 +0x09a:  movl   $0x21,0x8(%esp)
08678760 +0x0a2:  movl   $0x0,0x4(%esp)
08678768 +0x0aa:  lea    -0x14(%ebp),%eax
0867876b +0x0ad:  mov    %eax,(%esp)
0867876e +0x0b0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08678773 +0x0b5:  mov    0x8(%ebp),%eax
08678776 +0x0b8:  movl   $0xa,0x4(%esp)
0867877e +0x0c0:  mov    %eax,(%esp)
08678781 +0x0c3:  call   082f0914 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x698>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x698
08678786 +0x0c8:  movl   $0xa,0x4(%esp)
0867878e +0x0d0:  lea    -0x14(%ebp),%eax
08678791 +0x0d3:  mov    %eax,(%esp)
08678794 +0x0d6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08678799 +0x0db:  movl   $0x1,0x4(%esp)
086787a1 +0x0e3:  lea    -0x14(%ebp),%eax
086787a4 +0x0e6:  mov    %eax,(%esp)
086787a7 +0x0e9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086787ac +0x0ee:  lea    -0x14(%ebp),%eax
086787af +0x0f1:  mov    %eax,0x4(%esp)
086787b3 +0x0f5:  mov    0x8(%ebp),%eax
086787b6 +0x0f8:  mov    %eax,(%esp)
086787b9 +0x0fb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086787be +0x100:  jmp    086787db <+0x11d>
086787c0 +0x102:  mov    %edx,%ebx
086787c2 +0x104:  mov    %eax,%esi
086787c4 +0x106:  lea    -0x14(%ebp),%eax
086787c7 +0x109:  mov    %eax,(%esp)
086787ca +0x10c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086787cf +0x111:  mov    %esi,%eax
086787d1 +0x113:  mov    %ebx,%edx
086787d3 +0x115:  mov    %eax,(%esp)
086787d6 +0x118:  call   08ae3750 <_Unwind_Resume>
086787db +0x11d:  lea    -0x14(%ebp),%eax
086787de +0x120:  mov    %eax,(%esp)
086787e1 +0x123:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086787e6 +0x128:  jmp    086787f5 <+0x137>
086787e8 +0x12a:  nop
086787e9 +0x12b:  jmp    086787f5 <+0x137>
086787eb +0x12d:  nop
086787ec +0x12e:  jmp    086787f5 <+0x137>
086787ee +0x130:  nop
086787ef +0x131:  jmp    086787f5 <+0x137>
086787f1 +0x133:  nop
086787f2 +0x134:  jmp    086787f5 <+0x137>
086787f4 +0x136:  nop
086787f5 +0x137:  add    $0x20,%esp
086787f8 +0x13a:  pop    %ebx
086787f9 +0x13b:  pop    %esi
086787fa +0x13c:  pop    %ebp
086787fb +0x13d:  ret
```

## 反编译 C

```c
// CUser::giveup_panalty @ 0x86786be

/* CUser::giveup_panalty() */

void __thiscall CUser::giveup_panalty(CUser *this)

{
  char cVar1;
  int iVar2;
  PacketGuard local_18 [12];
  
  cVar1 = IsLightServer();
  if ((((cVar1 == '\0') && (this[0x711d8] == (CUser)0x0)) &&
      (cVar1 = isAffectedPremium(this,0xc), cVar1 == '\0')) &&
     (((iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this), 0x11 < iVar2 &&
       (cVar1 = isAffectedPremium(this,0xc), cVar1 == '\0')) &&
      (iVar2 = getMoveSpace(this), iVar2 != 1)))) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0867876e to 086787bd has its CatchHandler @ 086787c0 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x21);
    CUserCharacInfo::setCurCharacStamina((CUserCharacInfo *)this,'\n');
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    Send(this,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
