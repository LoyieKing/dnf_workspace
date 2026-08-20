# init

`_ZN6CParty4initEv`

`CParty::init()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a974` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a974  _ZN6CParty4initEv
#           CParty::init()
# range [0x0859a974, 0x0859ac7b]
0859a974 +0x000:  push   %ebp
0859a975 +0x001:  mov    %esp,%ebp
0859a977 +0x003:  sub    $0x38,%esp
0859a97a +0x006:  mov    0x8(%ebp),%eax
0859a97d +0x009:  add    $0x210,%eax
0859a982 +0x00e:  mov    %eax,(%esp)
0859a985 +0x011:  call   08599cb2 <_ZN16CTraceMobDieHack14reportHackInfoEv>  ; CTraceMobDieHack::reportHackInfo()
0859a98a +0x016:  mov    0x8(%ebp),%eax
0859a98d +0x019:  add    $0x210,%eax
0859a992 +0x01e:  mov    %eax,(%esp)
0859a995 +0x021:  call   082a50b0 <_GLOBAL__I__ZN4CLog5this_E+0x14d7>  ; global constructors keyed to CLog::this_+0x14d7
0859a99a +0x026:  movl   $0x0,-0x1c(%ebp)
0859a9a1 +0x02d:  jmp    0859aa11 <+0x9d>
0859a9a3 +0x02f:  mov    -0x1c(%ebp),%eax
0859a9a6 +0x032:  mov    %eax,0x4(%esp)
0859a9aa +0x036:  mov    0x8(%ebp),%eax
0859a9ad +0x039:  mov    %eax,(%esp)
0859a9b0 +0x03c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859a9b5 +0x041:  xor    $0x1,%eax
0859a9b8 +0x044:  test   %al,%al
0859a9ba +0x046:  jne    0859aa0c <+0x98>
0859a9bc +0x048:  mov    -0x1c(%ebp),%edx
0859a9bf +0x04b:  mov    0x8(%ebp),%ecx
0859a9c2 +0x04e:  mov    %edx,%eax
0859a9c4 +0x050:  add    %eax,%eax
0859a9c6 +0x052:  add    %edx,%eax
0859a9c8 +0x054:  shl    $0x3,%eax
0859a9cb +0x057:  lea    (%ecx,%eax,1),%eax
0859a9ce +0x05a:  add    $0x78,%eax
0859a9d1 +0x05d:  mov    (%eax),%eax
0859a9d3 +0x05f:  mov    %eax,(%esp)
0859a9d6 +0x062:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0859a9db +0x067:  mov    %eax,(%esp)
0859a9de +0x06a:  call   080f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>  ; WongWork::CHackAnalyzer::reportHackInfo()
0859a9e3 +0x06f:  mov    -0x1c(%ebp),%edx
0859a9e6 +0x072:  mov    0x8(%ebp),%ecx
0859a9e9 +0x075:  mov    %edx,%eax
0859a9eb +0x077:  add    %eax,%eax
0859a9ed +0x079:  add    %edx,%eax
0859a9ef +0x07b:  shl    $0x3,%eax
0859a9f2 +0x07e:  lea    (%ecx,%eax,1),%eax
0859a9f5 +0x081:  add    $0x78,%eax
0859a9f8 +0x084:  mov    (%eax),%eax
0859a9fa +0x086:  mov    %eax,(%esp)
0859a9fd +0x089:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0859aa02 +0x08e:  mov    %eax,(%esp)
0859aa05 +0x091:  call   080f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>  ; WongWork::CHackAnalyzer::resetHackInfo()
0859aa0a +0x096:  jmp    0859aa0d <+0x99>
0859aa0c +0x098:  nop
0859aa0d +0x099:  addl   $0x1,-0x1c(%ebp)
0859aa11 +0x09d:  cmpl   $0x3,-0x1c(%ebp)
0859aa15 +0x0a1:  setle  %al
0859aa18 +0x0a4:  test   %al,%al
0859aa1a +0x0a6:  jne    0859a9a3 <+0x2f>
0859aa1c +0x0a8:  mov    0x8(%ebp),%eax
0859aa1f +0x0ab:  movl   $0xffffffff,0x298(%eax)
0859aa29 +0x0b5:  mov    0x8(%ebp),%eax
0859aa2c +0x0b8:  movb   $0x0,0x118(%eax)
0859aa33 +0x0bf:  mov    0x8(%ebp),%eax
0859aa36 +0x0c2:  add    $0x11c,%eax
0859aa3b +0x0c7:  movl   $0x20,0x8(%esp)
0859aa43 +0x0cf:  movl   $0x0,0x4(%esp)
0859aa4b +0x0d7:  mov    %eax,(%esp)
0859aa4e +0x0da:  call   0807dcc0 <_init+0x5b8>
0859aa53 +0x0df:  movl   $0xff,(%esp)
0859aa5a +0x0e6:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0859aa5f +0x0eb:  lea    0x1(%eax),%edx
0859aa62 +0x0ee:  mov    0x8(%ebp),%eax
0859aa65 +0x0f1:  mov    %dl,0x11b(%eax)
0859aa6b +0x0f7:  mov    0x8(%ebp),%eax
0859aa6e +0x0fa:  movb   $0x4,0x13d(%eax)
0859aa75 +0x101:  mov    0x8(%ebp),%eax
0859aa78 +0x104:  movw   $0xffff,0x13e(%eax)
0859aa81 +0x10d:  mov    0x8(%ebp),%eax
0859aa84 +0x110:  movb   $0xff,0x140(%eax)
0859aa8b +0x117:  mov    0x8(%ebp),%eax
0859aa8e +0x11a:  movb   $0x0,0x68(%eax)
0859aa92 +0x11e:  mov    0x8(%ebp),%eax
0859aa95 +0x121:  movb   $0x0,0x6a(%eax)
0859aa99 +0x125:  mov    0x8(%ebp),%eax
0859aa9c +0x128:  movb   $0x0,0x69(%eax)
0859aaa0 +0x12c:  mov    0x8(%ebp),%eax
0859aaa3 +0x12f:  movb   $0x0,0x13c(%eax)
0859aaaa +0x136:  movl   $0x0,0x4(%esp)
0859aab2 +0x13e:  mov    0x8(%ebp),%eax
0859aab5 +0x141:  mov    %eax,(%esp)
0859aab8 +0x144:  call   0814578c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x20f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x20f
0859aabd +0x149:  mov    0x8(%ebp),%eax
0859aac0 +0x14c:  movb   $0xff,0x6c(%eax)
0859aac4 +0x150:  movl   $0x0,0x4(%esp)
0859aacc +0x158:  mov    0x8(%ebp),%eax
0859aacf +0x15b:  mov    %eax,(%esp)
0859aad2 +0x15e:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
0859aad7 +0x163:  movl   $0x0,-0x18(%ebp)
0859aade +0x16a:  jmp    0859ab3d <+0x1c9>
0859aae0 +0x16c:  mov    -0x18(%ebp),%edx
0859aae3 +0x16f:  mov    %edx,%eax
0859aae5 +0x171:  add    %eax,%eax
0859aae7 +0x173:  add    %edx,%eax
0859aae9 +0x175:  shl    $0x3,%eax
0859aaec +0x178:  add    $0x70,%eax
0859aaef +0x17b:  add    0x8(%ebp),%eax
0859aaf2 +0x17e:  add    $0x8,%eax
0859aaf5 +0x181:  mov    %eax,(%esp)
0859aaf8 +0x184:  call   08599a28 <_ZN6CParty7cMember4InitEv>  ; CParty::cMember::Init()
0859aafd +0x189:  movl   $0x0,-0x14(%ebp)
0859ab04 +0x190:  jmp    0859ab24 <+0x1b0>
0859ab06 +0x192:  mov    -0x14(%ebp),%ecx
0859ab09 +0x195:  mov    -0x18(%ebp),%eax
0859ab0c +0x198:  mov    0x8(%ebp),%edx
0859ab0f +0x19b:  shl    $0x2,%ecx
0859ab12 +0x19e:  add    %ecx,%edx
0859ab14 +0x1a0:  lea    (%edx,%eax,1),%eax
0859ab17 +0x1a3:  add    $0x200,%eax
0859ab1c +0x1a8:  movb   $0xff,0x4(%eax)
0859ab20 +0x1ac:  addl   $0x1,-0x14(%ebp)
0859ab24 +0x1b0:  cmpl   $0x1,-0x14(%ebp)
0859ab28 +0x1b4:  setle  %al
0859ab2b +0x1b7:  test   %al,%al
0859ab2d +0x1b9:  jne    0859ab06 <+0x192>
0859ab2f +0x1bb:  mov    0x8(%ebp),%eax
0859ab32 +0x1be:  movb   $0x0,0x1e0(%eax)
0859ab39 +0x1c5:  addl   $0x1,-0x18(%ebp)
0859ab3d +0x1c9:  cmpl   $0x3,-0x18(%ebp)
0859ab41 +0x1cd:  setle  %al
0859ab44 +0x1d0:  test   %al,%al
0859ab46 +0x1d2:  jne    0859aae0 <+0x16c>
0859ab48 +0x1d4:  movl   $0x0,-0x10(%ebp)
0859ab4f +0x1db:  jmp    0859ab87 <+0x213>
0859ab51 +0x1dd:  movl   $0x0,-0xc(%ebp)
0859ab58 +0x1e4:  jmp    0859ab78 <+0x204>
0859ab5a +0x1e6:  mov    -0x10(%ebp),%ecx
0859ab5d +0x1e9:  mov    -0xc(%ebp),%edx
0859ab60 +0x1ec:  mov    0x8(%ebp),%eax
0859ab63 +0x1ef:  shl    $0x2,%ecx
0859ab66 +0x1f2:  lea    (%ecx,%edx,1),%edx
0859ab69 +0x1f5:  add    $0x78,%edx
0859ab6c +0x1f8:  movl   $0x0,0x4(%eax,%edx,4)
0859ab74 +0x200:  addl   $0x1,-0xc(%ebp)
0859ab78 +0x204:  cmpl   $0x3,-0xc(%ebp)
0859ab7c +0x208:  setle  %al
0859ab7f +0x20b:  test   %al,%al
0859ab81 +0x20d:  jne    0859ab5a <+0x1e6>
0859ab83 +0x20f:  addl   $0x1,-0x10(%ebp)
0859ab87 +0x213:  cmpl   $0x1,-0x10(%ebp)
0859ab8b +0x217:  setle  %al
0859ab8e +0x21a:  test   %al,%al
0859ab90 +0x21c:  jne    0859ab51 <+0x1dd>
0859ab92 +0x21e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0859ab97 +0x223:  mov    %eax,(%esp)
0859ab9a +0x226:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
0859ab9f +0x22b:  mov    0x8(%eax),%eax
0859aba2 +0x22e:  mov    0x8(%ebp),%edx
0859aba5 +0x231:  add    $0x32c,%edx
0859abab +0x237:  mov    %eax,0x4(%esp)
0859abaf +0x23b:  mov    %edx,(%esp)
0859abb2 +0x23e:  call   0822d7b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e5c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e5c
0859abb7 +0x243:  mov    0x8(%ebp),%eax
0859abba +0x246:  add    $0xb24,%eax
0859abbf +0x24b:  mov    %eax,(%esp)
0859abc2 +0x24e:  call   0830a57c <_ZN13CBattle_Field22reset_hell_party_valueEv>  ; CBattle_Field::reset_hell_party_value()
0859abc7 +0x253:  mov    0x8(%ebp),%eax
0859abca +0x256:  add    $0x32c,%eax
0859abcf +0x25b:  mov    %eax,(%esp)
0859abd2 +0x25e:  call   082a4e8a <_GLOBAL__I__ZN4CLog5this_E+0x12b1>  ; global constructors keyed to CLog::this_+0x12b1
0859abd7 +0x263:  mov    0x8(%ebp),%eax
0859abda +0x266:  add    $0xb24,%eax
0859abdf +0x26b:  mov    %eax,(%esp)
0859abe2 +0x26e:  call   0830a1f6 <_ZN13CBattle_Field11reset_fieldEv>  ; CBattle_Field::reset_field()
0859abe7 +0x273:  mov    0x8(%ebp),%eax
0859abea +0x276:  add    $0x1dc,%eax
0859abef +0x27b:  mov    %eax,(%esp)
0859abf2 +0x27e:  call   082a4cc6 <_GLOBAL__I__ZN4CLog5this_E+0x10ed>  ; global constructors keyed to CLog::this_+0x10ed
0859abf7 +0x283:  mov    0x8(%ebp),%eax
0859abfa +0x286:  movl   $0x0,0x1860(%eax)
0859ac04 +0x290:  mov    0x8(%ebp),%eax
0859ac07 +0x293:  movl   $0x0,0x1868(%eax)
0859ac11 +0x29d:  mov    0x8(%ebp),%eax
0859ac14 +0x2a0:  movw   $0x0,0x29c(%eax)
0859ac1d +0x2a9:  mov    0x8(%ebp),%eax
0859ac20 +0x2ac:  add    $0x2a4,%eax
0859ac25 +0x2b1:  mov    %eax,(%esp)
0859ac28 +0x2b4:  call   08ab14b8 <_ZN10secretshop16SECRET_SHOP_DATA5clearEv>  ; secretshop::SECRET_SHOP_DATA::clear()
0859ac2d +0x2b9:  mov    0x8(%ebp),%eax
0859ac30 +0x2bc:  mov    %eax,(%esp)
0859ac33 +0x2bf:  call   085bf718 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xc76>  ; global constructors keyed to CParty::cMember::cMember()+0xc76
0859ac38 +0x2c4:  mov    0x8(%ebp),%eax
0859ac3b +0x2c7:  mov    %eax,(%esp)
0859ac3e +0x2ca:  call   085bf748 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xca6>  ; global constructors keyed to CParty::cMember::cMember()+0xca6
0859ac43 +0x2cf:  mov    0x8(%ebp),%eax
0859ac46 +0x2d2:  movb   $0x0,0x1af0(%eax)
0859ac4d +0x2d9:  mov    0x8(%ebp),%eax
0859ac50 +0x2dc:  movl   $0xb,0x1aec(%eax)
0859ac5a +0x2e6:  mov    0x8(%ebp),%eax
0859ac5d +0x2e9:  mov    %eax,(%esp)
0859ac60 +0x2ec:  call   0859b3e4 <_ZN6CParty21init_quick_party_dataEv>  ; CParty::init_quick_party_data()
0859ac65 +0x2f1:  mov    0x8(%ebp),%eax
0859ac68 +0x2f4:  movb   $0x0,0x20c(%eax)
0859ac6f +0x2fb:  mov    0x8(%ebp),%eax
0859ac72 +0x2fe:  movb   $0x0,0x1af1(%eax)
0859ac79 +0x305:  leave
0859ac7a +0x306:  ret
0859ac7b +0x307:  nop
```

## 反编译 C

```c
// CParty::init @ 0x859a974

/* CParty::init() */

void __thiscall CParty::init(CParty *this)

{
  char cVar1;
  CHackAnalyzer *this_00;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  CTraceMobDieHack::reportHackInfo((CTraceMobDieHack *)(this + 0x210));
  CTraceMobDieHack::reset((CTraceMobDieHack *)(this + 0x210));
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    cVar1 = _checkValidUser(this,local_20);
    if (cVar1 == '\x01') {
      CUser::getHackAnalyzer(*(CUser **)(this + local_20 * 0x18 + 0x78));
      WongWork::CHackAnalyzer::reportHackInfo();
      this_00 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + local_20 * 0x18 + 0x78));
      WongWork::CHackAnalyzer::resetHackInfo(this_00);
    }
  }
  *(undefined4 *)(this + 0x298) = 0xffffffff;
  this[0x118] = (CParty)0x0;
  memset(this + 0x11c,0,0x20);
  cVar1 = get_rand_int(0xff);
  this[0x11b] = (CParty)(cVar1 + '\x01');
  this[0x13d] = (CParty)0x4;
  *(undefined2 *)(this + 0x13e) = 0xffff;
  this[0x140] = (CParty)0xff;
  this[0x68] = (CParty)0x0;
  this[0x6a] = (CParty)0x0;
  this[0x69] = (CParty)0x0;
  this[0x13c] = (CParty)0x0;
  SetEPLPState(this,'\0');
  this[0x6c] = (CParty)0xff;
  SetAssaultState(this,'\0');
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    cMember::Init((cMember *)(this + local_1c * 0x18 + 0x78));
    for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
      this[local_1c + local_18 * 4 + 0x204] = (CParty)0xff;
    }
    this[0x1e0] = (CParty)0x0;
  }
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      *(undefined4 *)(this + (local_14 * 4 + local_10 + 0x78) * 4 + 4) = 0;
    }
  }
  G_CDataManager();
  iVar2 = CDataManager::get_hellparty_script_values();
  BattleData::SetHellPartyValueTotal((BattleData *)(this + 0x32c),*(int *)(iVar2 + 8));
  CBattle_Field::reset_hell_party_value((CBattle_Field *)(this + 0xb24));
  BattleData::Reset((BattleData *)(this + 0x32c));
  CBattle_Field::reset_field((CBattle_Field *)(this + 0xb24));
  CPartyResultRecvFlag::Clear((CPartyResultRecvFlag *)(this + 0x1dc));
  *(undefined4 *)(this + 0x1860) = 0;
  *(undefined4 *)(this + 0x1868) = 0;
  *(undefined2 *)(this + 0x29c) = 0;
  secretshop::SECRET_SHOP_DATA::clear((SECRET_SHOP_DATA *)(this + 0x2a4));
  ResetPremiumGoldCardParty(this);
  ResetPremiumGoldCardDefaultItem(this);
  this[0x1af0] = (CParty)0x0;
  *(undefined4 *)(this + 0x1aec) = 0xb;
  init_quick_party_data(this);
  this[0x20c] = (CParty)0x0;
  this[0x1af1] = (CParty)0x0;
  return;
}
```
