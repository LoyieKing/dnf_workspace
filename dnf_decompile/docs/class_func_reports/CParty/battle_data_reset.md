# battle_data_reset

`_ZN6CParty17battle_data_resetEv`

`CParty::battle_data_reset()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859aec2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859aec2  _ZN6CParty17battle_data_resetEv
#           CParty::battle_data_reset()
# range [0x0859aec2, 0x0859b141]
0859aec2 +0x000:  push   %ebp
0859aec3 +0x001:  mov    %esp,%ebp
0859aec5 +0x003:  sub    $0x28,%esp
0859aec8 +0x006:  mov    0x8(%ebp),%eax
0859aecb +0x009:  add    $0x210,%eax
0859aed0 +0x00e:  mov    %eax,(%esp)
0859aed3 +0x011:  call   08599cb2 <_ZN16CTraceMobDieHack14reportHackInfoEv>  ; CTraceMobDieHack::reportHackInfo()
0859aed8 +0x016:  mov    0x8(%ebp),%eax
0859aedb +0x019:  add    $0x210,%eax
0859aee0 +0x01e:  mov    %eax,(%esp)
0859aee3 +0x021:  call   082a50b0 <_GLOBAL__I__ZN4CLog5this_E+0x14d7>  ; global constructors keyed to CLog::this_+0x14d7
0859aee8 +0x026:  movl   $0x0,-0x10(%ebp)
0859aeef +0x02d:  jmp    0859af5f <+0x9d>
0859aef1 +0x02f:  mov    -0x10(%ebp),%eax
0859aef4 +0x032:  mov    %eax,0x4(%esp)
0859aef8 +0x036:  mov    0x8(%ebp),%eax
0859aefb +0x039:  mov    %eax,(%esp)
0859aefe +0x03c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859af03 +0x041:  xor    $0x1,%eax
0859af06 +0x044:  test   %al,%al
0859af08 +0x046:  jne    0859af5a <+0x98>
0859af0a +0x048:  mov    -0x10(%ebp),%edx
0859af0d +0x04b:  mov    0x8(%ebp),%ecx
0859af10 +0x04e:  mov    %edx,%eax
0859af12 +0x050:  add    %eax,%eax
0859af14 +0x052:  add    %edx,%eax
0859af16 +0x054:  shl    $0x3,%eax
0859af19 +0x057:  lea    (%ecx,%eax,1),%eax
0859af1c +0x05a:  add    $0x78,%eax
0859af1f +0x05d:  mov    (%eax),%eax
0859af21 +0x05f:  mov    %eax,(%esp)
0859af24 +0x062:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0859af29 +0x067:  mov    %eax,(%esp)
0859af2c +0x06a:  call   080f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>  ; WongWork::CHackAnalyzer::reportHackInfo()
0859af31 +0x06f:  mov    -0x10(%ebp),%edx
0859af34 +0x072:  mov    0x8(%ebp),%ecx
0859af37 +0x075:  mov    %edx,%eax
0859af39 +0x077:  add    %eax,%eax
0859af3b +0x079:  add    %edx,%eax
0859af3d +0x07b:  shl    $0x3,%eax
0859af40 +0x07e:  lea    (%ecx,%eax,1),%eax
0859af43 +0x081:  add    $0x78,%eax
0859af46 +0x084:  mov    (%eax),%eax
0859af48 +0x086:  mov    %eax,(%esp)
0859af4b +0x089:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0859af50 +0x08e:  mov    %eax,(%esp)
0859af53 +0x091:  call   080f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>  ; WongWork::CHackAnalyzer::resetHackInfo()
0859af58 +0x096:  jmp    0859af5b <+0x99>
0859af5a +0x098:  nop
0859af5b +0x099:  addl   $0x1,-0x10(%ebp)
0859af5f +0x09d:  cmpl   $0x3,-0x10(%ebp)
0859af63 +0x0a1:  setle  %al
0859af66 +0x0a4:  test   %al,%al
0859af68 +0x0a6:  jne    0859aef1 <+0x2f>
0859af6a +0x0a8:  movl   $0x0,-0xc(%ebp)
0859af71 +0x0af:  jmp    0859b05d <+0x19b>
0859af76 +0x0b4:  mov    -0xc(%ebp),%eax
0859af79 +0x0b7:  mov    %eax,0x4(%esp)
0859af7d +0x0bb:  mov    0x8(%ebp),%eax
0859af80 +0x0be:  mov    %eax,(%esp)
0859af83 +0x0c1:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859af88 +0x0c6:  xor    $0x1,%eax
0859af8b +0x0c9:  test   %al,%al
0859af8d +0x0cb:  jne    0859b058 <+0x196>
0859af93 +0x0d1:  mov    -0xc(%ebp),%edx
0859af96 +0x0d4:  mov    0x8(%ebp),%ecx
0859af99 +0x0d7:  mov    %edx,%eax
0859af9b +0x0d9:  add    %eax,%eax
0859af9d +0x0db:  add    %edx,%eax
0859af9f +0x0dd:  shl    $0x3,%eax
0859afa2 +0x0e0:  lea    (%ecx,%eax,1),%eax
0859afa5 +0x0e3:  add    $0x78,%eax
0859afa8 +0x0e6:  mov    (%eax),%eax
0859afaa +0x0e8:  movl   $0x3,0x4(%esp)
0859afb2 +0x0f0:  mov    %eax,(%esp)
0859afb5 +0x0f3:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
0859afba +0x0f8:  mov    -0xc(%ebp),%edx
0859afbd +0x0fb:  mov    0x8(%ebp),%ecx
0859afc0 +0x0fe:  mov    %edx,%eax
0859afc2 +0x100:  add    %eax,%eax
0859afc4 +0x102:  add    %edx,%eax
0859afc6 +0x104:  shl    $0x3,%eax
0859afc9 +0x107:  lea    (%ecx,%eax,1),%eax
0859afcc +0x10a:  add    $0x78,%eax
0859afcf +0x10d:  mov    (%eax),%eax
0859afd1 +0x10f:  movl   $0x0,0x4(%esp)
0859afd9 +0x117:  mov    %eax,(%esp)
0859afdc +0x11a:  call   084699e6 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xc9>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xc9
0859afe1 +0x11f:  mov    -0xc(%ebp),%edx
0859afe4 +0x122:  mov    0x8(%ebp),%ecx
0859afe7 +0x125:  mov    %edx,%eax
0859afe9 +0x127:  add    %eax,%eax
0859afeb +0x129:  add    %edx,%eax
0859afed +0x12b:  shl    $0x3,%eax
0859aff0 +0x12e:  lea    (%ecx,%eax,1),%eax
0859aff3 +0x131:  add    $0x78,%eax
0859aff6 +0x134:  mov    (%eax),%eax
0859aff8 +0x136:  movl   $0x0,0x4(%esp)
0859b000 +0x13e:  mov    %eax,(%esp)
0859b003 +0x141:  call   08469a20 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x103>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x103
0859b008 +0x146:  mov    -0xc(%ebp),%edx
0859b00b +0x149:  mov    0x8(%ebp),%ecx
0859b00e +0x14c:  mov    %edx,%eax
0859b010 +0x14e:  add    %eax,%eax
0859b012 +0x150:  add    %edx,%eax
0859b014 +0x152:  shl    $0x3,%eax
0859b017 +0x155:  lea    (%ecx,%eax,1),%eax
0859b01a +0x158:  add    $0x78,%eax
0859b01d +0x15b:  mov    (%eax),%eax
0859b01f +0x15d:  movl   $0x0,0x4(%esp)
0859b027 +0x165:  mov    %eax,(%esp)
0859b02a +0x168:  call   08469a02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0xe5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0xe5
0859b02f +0x16d:  mov    -0xc(%ebp),%edx
0859b032 +0x170:  mov    0x8(%ebp),%ecx
0859b035 +0x173:  mov    %edx,%eax
0859b037 +0x175:  add    %eax,%eax
0859b039 +0x177:  add    %edx,%eax
0859b03b +0x179:  shl    $0x3,%eax
0859b03e +0x17c:  lea    (%ecx,%eax,1),%eax
0859b041 +0x17f:  add    $0x78,%eax
0859b044 +0x182:  mov    (%eax),%eax
0859b046 +0x184:  movl   $0x0,0x4(%esp)
0859b04e +0x18c:  mov    %eax,(%esp)
0859b051 +0x18f:  call   08469a3e <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x121>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x121
0859b056 +0x194:  jmp    0859b059 <+0x197>
0859b058 +0x196:  nop
0859b059 +0x197:  addl   $0x1,-0xc(%ebp)
0859b05d +0x19b:  cmpl   $0x3,-0xc(%ebp)
0859b061 +0x19f:  setle  %al
0859b064 +0x1a2:  test   %al,%al
0859b066 +0x1a4:  jne    0859af76 <+0xb4>
0859b06c +0x1aa:  mov    0x8(%ebp),%eax
0859b06f +0x1ad:  add    $0x32c,%eax
0859b074 +0x1b2:  mov    %eax,(%esp)
0859b077 +0x1b5:  call   082a4e8a <_GLOBAL__I__ZN4CLog5this_E+0x12b1>  ; global constructors keyed to CLog::this_+0x12b1
0859b07c +0x1ba:  mov    0x8(%ebp),%eax
0859b07f +0x1bd:  add    $0xb24,%eax
0859b084 +0x1c2:  mov    %eax,(%esp)
0859b087 +0x1c5:  call   0830a1f6 <_ZN13CBattle_Field11reset_fieldEv>  ; CBattle_Field::reset_field()
0859b08c +0x1ca:  mov    0x8(%ebp),%eax
0859b08f +0x1cd:  movb   $0x1,0x6a(%eax)
0859b093 +0x1d1:  movl   $0x0,0x4(%esp)
0859b09b +0x1d9:  mov    0x8(%ebp),%eax
0859b09e +0x1dc:  mov    %eax,(%esp)
0859b0a1 +0x1df:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
0859b0a6 +0x1e4:  movl   $0xffffffff,0x4(%esp)
0859b0ae +0x1ec:  mov    0x8(%ebp),%eax
0859b0b1 +0x1ef:  mov    %eax,(%esp)
0859b0b4 +0x1f2:  call   08145828 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2ab>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2ab
0859b0b9 +0x1f7:  mov    0x8(%ebp),%eax
0859b0bc +0x1fa:  movb   $0x0,0x1e0(%eax)
0859b0c3 +0x201:  mov    0x8(%ebp),%eax
0859b0c6 +0x204:  movl   $0xffffffff,0x298(%eax)
0859b0d0 +0x20e:  mov    0x8(%ebp),%eax
0859b0d3 +0x211:  add    $0x1844,%eax
0859b0d8 +0x216:  mov    %eax,(%esp)
0859b0db +0x219:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0859b0e0 +0x21e:  mov    0x8(%ebp),%eax
0859b0e3 +0x221:  add    $0x2a4,%eax
0859b0e8 +0x226:  mov    %eax,(%esp)
0859b0eb +0x229:  call   08ab14b8 <_ZN10secretshop16SECRET_SHOP_DATA5clearEv>  ; secretshop::SECRET_SHOP_DATA::clear()
0859b0f0 +0x22e:  mov    0x8(%ebp),%eax
0859b0f3 +0x231:  mov    %eax,(%esp)
0859b0f6 +0x234:  call   085bf82a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd88>  ; global constructors keyed to CParty::cMember::cMember()+0xd88
0859b0fb +0x239:  mov    0x8(%ebp),%eax
0859b0fe +0x23c:  mov    %eax,(%esp)
0859b101 +0x23f:  call   085bf718 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xc76>  ; global constructors keyed to CParty::cMember::cMember()+0xc76
0859b106 +0x244:  mov    0x8(%ebp),%eax
0859b109 +0x247:  mov    %eax,(%esp)
0859b10c +0x24a:  call   085bf748 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xca6>  ; global constructors keyed to CParty::cMember::cMember()+0xca6
0859b111 +0x24f:  mov    0x8(%ebp),%eax
0859b114 +0x252:  movb   $0x0,0x20c(%eax)
0859b11b +0x259:  mov    0x8(%ebp),%eax
0859b11e +0x25c:  mov    %eax,(%esp)
0859b121 +0x25f:  call   0859b3e4 <_ZN6CParty21init_quick_party_dataEv>  ; CParty::init_quick_party_data()
0859b126 +0x264:  mov    0x8(%ebp),%eax
0859b129 +0x267:  movb   $0x0,0x1af1(%eax)
0859b130 +0x26e:  mov    0x8(%ebp),%eax
0859b133 +0x271:  add    $0x1af4,%eax
0859b138 +0x276:  mov    %eax,(%esp)
0859b13b +0x279:  call   084b4710 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x7c3>  ; global constructors keyed to game_master::CMacro::Reset()+0x7c3
0859b140 +0x27e:  leave
0859b141 +0x27f:  ret
```

## 反编译 C

```c
// CParty::battle_data_reset @ 0x859aec2

/* CParty::battle_data_reset() */

void __thiscall CParty::battle_data_reset(CParty *this)

{
  char cVar1;
  CHackAnalyzer *this_00;
  int local_14;
  int local_10;
  
  CTraceMobDieHack::reportHackInfo((CTraceMobDieHack *)(this + 0x210));
  CTraceMobDieHack::reset((CTraceMobDieHack *)(this + 0x210));
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    cVar1 = _checkValidUser(this,local_14);
    if (cVar1 == '\x01') {
      CUser::getHackAnalyzer(*(CUser **)(this + local_14 * 0x18 + 0x78));
      WongWork::CHackAnalyzer::reportHackInfo();
      this_00 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + local_14 * 0x18 + 0x78));
      WongWork::CHackAnalyzer::resetHackInfo(this_00);
    }
  }
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 == '\x01') {
      CUser::set_state(*(CUser **)(this + local_10 * 0x18 + 0x78),3);
      CUserCharacInfo::set_charac_party_bonus_exp
                (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78),0);
      CUserCharacInfo::set_charac_member_bonus_exp
                (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78),0);
      CUserCharacInfo::set_charac_fatigue_buf_bonus_exp
                (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78),0);
      CUserCharacInfo::set_charac_seria_buf_bonus_exp
                (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78),0);
    }
  }
  BattleData::Reset((BattleData *)(this + 0x32c));
  CBattle_Field::reset_field((CBattle_Field *)(this + 0xb24));
  this[0x6a] = (CParty)0x1;
  SetEPLPState(this,'\0');
  SetSelectedEPLPCmd(this,-1);
  this[0x1e0] = (CParty)0x0;
  *(undefined4 *)(this + 0x298) = 0xffffffff;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1844)
            );
  secretshop::SECRET_SHOP_DATA::clear((SECRET_SHOP_DATA *)(this + 0x2a4));
  SetEndRouting(this);
  ResetPremiumGoldCardParty(this);
  ResetPremiumGoldCardDefaultItem(this);
  this[0x20c] = (CParty)0x0;
  init_quick_party_data(this);
  this[0x1af1] = (CParty)0x0;
  std::vector<MapInfo,std::allocator<MapInfo>>::clear
            ((vector<MapInfo,std::allocator<MapInfo>> *)(this + 0x1af4));
  return;
}
```
