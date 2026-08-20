# proceed_trade

`_ZN11CTradeSpace13proceed_tradeEv`

`CTradeSpace::proceed_trade()`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x0853087a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0853087a  _ZN11CTradeSpace13proceed_tradeEv
#           CTradeSpace::proceed_trade()
# range [0x0853087a, 0x08531f61]
0853087a +0x0000:  push   %ebp
0853087b +0x0001:  mov    %esp,%ebp
0853087d +0x0003:  push   %edi
0853087e +0x0004:  push   %esi
0853087f +0x0005:  push   %ebx
08530880 +0x0006:  sub    $0x13c,%esp
08530886 +0x000c:  mov    0x8(%ebp),%eax
08530889 +0x000f:  mov    %eax,(%esp)
0853088c +0x0012:  call   085320ee <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x14c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x14c
08530891 +0x0017:  xor    $0x1,%eax
08530894 +0x001a:  test   %al,%al
08530896 +0x001c:  je     085308a2 <+0x28>
08530898 +0x001e:  mov    $0x0,%ebx
0853089d +0x0023:  jmp    08531f55 <+0x16db>
085308a2 +0x0028:  mov    0x8(%ebp),%eax
085308a5 +0x002b:  mov    %eax,(%esp)
085308a8 +0x002e:  call   08530210 <_ZN11CTradeSpace10checkTradeEv>  ; CTradeSpace::checkTrade()
085308ad +0x0033:  xor    $0x1,%eax
085308b0 +0x0036:  test   %al,%al
085308b2 +0x0038:  je     085308be <+0x44>
085308b4 +0x003a:  mov    $0x0,%ebx
085308b9 +0x003f:  jmp    08531f55 <+0x16db>
085308be +0x0044:  movl   $0x0,-0x88(%ebp)
085308c8 +0x004e:  movl   $0x0,-0x84(%ebp)
085308d2 +0x0058:  movl   $0x0,-0x90(%ebp)
085308dc +0x0062:  movl   $0x0,-0x8c(%ebp)
085308e6 +0x006c:  lea    -0xa8(%ebp),%ebx
085308ec +0x0072:  mov    %ebx,%edi
085308ee +0x0074:  mov    $0x1,%esi
085308f3 +0x0079:  jmp    08530903 <+0x89>
085308f5 +0x007b:  mov    %edi,(%esp)
085308f8 +0x007e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085308fd +0x0083:  add    $0xc,%edi
08530900 +0x0086:  sub    $0x1,%esi
08530903 +0x0089:  cmp    $0xffffffff,%esi
08530906 +0x008c:  setne  %al
08530909 +0x008f:  test   %al,%al
0853090b +0x0091:  jne    085308f5 <+0x7b>
0853090d +0x0093:  jmp    08530951 <+0xd7>
0853090f +0x0095:  mov    %edx,%edi
08530911 +0x0097:  mov    %eax,-0xec(%ebp)
08530917 +0x009d:  test   %ebx,%ebx
08530919 +0x009f:  je     08530941 <+0xc7>
0853091b +0x00a1:  mov    $0x1,%eax
08530920 +0x00a6:  sub    %esi,%eax
08530922 +0x00a8:  mov    %eax,%edx
08530924 +0x00aa:  mov    %edx,%eax
08530926 +0x00ac:  add    %eax,%eax
08530928 +0x00ae:  add    %edx,%eax
0853092a +0x00b0:  shl    $0x2,%eax
0853092d +0x00b3:  lea    (%ebx,%eax,1),%esi
08530930 +0x00b6:  cmp    %ebx,%esi
08530932 +0x00b8:  je     08530941 <+0xc7>
08530934 +0x00ba:  sub    $0xc,%esi
08530937 +0x00bd:  mov    %esi,(%esp)
0853093a +0x00c0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0853093f +0x00c5:  jmp    08530930 <+0xb6>
08530941 +0x00c7:  mov    -0xec(%ebp),%eax
08530947 +0x00cd:  mov    %edi,%edx
08530949 +0x00cf:  mov    %eax,(%esp)
0853094c +0x00d2:  call   08ae3750 <_Unwind_Resume>
08530951 +0x00d7:  movl   $0x0,-0x68(%ebp)
08530958 +0x00de:  movl   $0x0,-0xac(%ebp)
08530962 +0x00e8:  movl   $0x0,-0x64(%ebp)
08530969 +0x00ef:  lea    -0xc4(%ebp),%eax
0853096f +0x00f5:  mov    %eax,(%esp)
08530972 +0x00f8:  call   08532126 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x184>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x184
08530977 +0x00fd:  movl   $0x0,-0x64(%ebp)
0853097e +0x0104:  jmp    08530ac3 <+0x249>
08530983 +0x0109:  mov    -0x64(%ebp),%edx
08530986 +0x010c:  mov    0x8(%ebp),%eax
08530989 +0x010f:  add    $0x8,%edx
0853098c +0x0112:  mov    (%eax,%edx,4),%eax
0853098f +0x0115:  mov    %eax,-0x60(%ebp)
08530992 +0x0118:  mov    $0x1,%eax
08530997 +0x011d:  mov    %eax,%edx
08530999 +0x011f:  sub    -0x64(%ebp),%edx
0853099c +0x0122:  mov    0x8(%ebp),%eax
0853099f +0x0125:  add    $0x8,%edx
085309a2 +0x0128:  mov    (%eax,%edx,4),%eax
085309a5 +0x012b:  mov    %eax,-0x5c(%ebp)
085309a8 +0x012e:  mov    -0x5c(%ebp),%eax
085309ab +0x0131:  mov    %eax,(%esp)
085309ae +0x0134:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
085309b3 +0x0139:  lea    -0xd4(%ebp),%edx
085309b9 +0x013f:  mov    %edx,0x4(%esp)
085309bd +0x0143:  mov    %eax,(%esp)
085309c0 +0x0146:  call   084b9774 <_ZN8XNuclear6CHades5GetIPEPc>  ; XNuclear::CHades::GetIP(char*)
085309c5 +0x014b:  mov    -0x60(%ebp),%eax
085309c8 +0x014e:  mov    %eax,(%esp)
085309cb +0x0151:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085309d0 +0x0156:  mov    %eax,(%esp)
085309d3 +0x0159:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
085309d8 +0x015e:  mov    %eax,%edi
085309da +0x0160:  mov    -0x64(%ebp),%edx
085309dd +0x0163:  mov    0x8(%ebp),%eax
085309e0 +0x0166:  add    $0x3d8,%edx
085309e6 +0x016c:  mov    (%eax,%edx,4),%eax
085309e9 +0x016f:  mov    %eax,%esi
085309eb +0x0171:  mov    -0x5c(%ebp),%eax
085309ee +0x0174:  mov    %eax,(%esp)
085309f1 +0x0177:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085309f6 +0x017c:  mov    %eax,%ebx
085309f8 +0x017e:  mov    -0x60(%ebp),%eax
085309fb +0x0181:  mov    %eax,(%esp)
085309fe +0x0184:  call   084ecb1a <_GLOBAL__I__Z7getUserj+0x3acc>  ; global constructors keyed to getUser(unsigned int)+0x3acc
08530a03 +0x0189:  lea    -0xd4(%ebp),%edx
08530a09 +0x018f:  mov    %edx,0x18(%esp)
08530a0d +0x0193:  movl   $0x0,0x14(%esp)
08530a15 +0x019b:  mov    %edi,0x10(%esp)
08530a19 +0x019f:  mov    %esi,0xc(%esp)
08530a1d +0x01a3:  mov    %ebx,0x8(%esp)
08530a21 +0x01a7:  movl   $0x0,0x4(%esp)
08530a29 +0x01af:  mov    %eax,(%esp)
08530a2c +0x01b2:  call   08278cce <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc>  ; Secu_AccountHacking::sendGold(char const*, unsigned int, unsigned int, unsigned int, unsigned char, char*)
08530a31 +0x01b7:  movl   $0x3,-0x58(%ebp)
08530a38 +0x01be:  jmp    08530ab0 <+0x236>
08530a3a +0x01c0:  mov    $0x1,%eax
08530a3f +0x01c5:  mov    %eax,%ebx
08530a41 +0x01c7:  sub    -0x64(%ebp),%ebx
08530a44 +0x01ca:  mov    -0x58(%ebp),%edx
08530a47 +0x01cd:  mov    0x8(%ebp),%ecx
08530a4a +0x01d0:  mov    %edx,%eax
08530a4c +0x01d2:  shl    $0x3,%eax
08530a4f +0x01d5:  add    %edx,%eax
08530a51 +0x01d7:  shl    $0x3,%eax
08530a54 +0x01da:  imul   $0x798,%ebx,%edx
08530a5a +0x01e0:  add    %edx,%eax
08530a5c +0x01e2:  lea    (%ecx,%eax,1),%eax
08530a5f +0x01e5:  add    $0x30,%eax
08530a62 +0x01e8:  mov    0xb(%eax),%ebx
08530a65 +0x01eb:  mov    -0x60(%ebp),%eax
08530a68 +0x01ee:  mov    %eax,(%esp)
08530a6b +0x01f1:  call   084ecb1a <_GLOBAL__I__Z7getUserj+0x3acc>  ; global constructors keyed to getUser(unsigned int)+0x3acc
08530a70 +0x01f6:  mov    %ebx,0x4(%esp)
08530a74 +0x01fa:  mov    %eax,(%esp)
08530a77 +0x01fd:  call   08278aec <_ZN19Secu_AccountHacking8isAvatarEj>  ; Secu_AccountHacking::isAvatar(unsigned int)
08530a7c +0x0202:  test   %al,%al
08530a7e +0x0204:  je     08530aac <+0x232>
08530a80 +0x0206:  mov    -0x5c(%ebp),%eax
08530a83 +0x0209:  mov    %eax,(%esp)
08530a86 +0x020c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08530a8b +0x0211:  mov    %eax,%ebx
08530a8d +0x0213:  mov    -0x60(%ebp),%eax
08530a90 +0x0216:  mov    %eax,(%esp)
08530a93 +0x0219:  call   084ecb1a <_GLOBAL__I__Z7getUserj+0x3acc>  ; global constructors keyed to getUser(unsigned int)+0x3acc
08530a98 +0x021e:  mov    %ebx,0x8(%esp)
08530a9c +0x0222:  movl   $0x0,0x4(%esp)
08530aa4 +0x022a:  mov    %eax,(%esp)
08530aa7 +0x022d:  call   08278f16 <_ZN19Secu_AccountHacking10sendAvatarEPKcj>  ; Secu_AccountHacking::sendAvatar(char const*, unsigned int)
08530aac +0x0232:  addl   $0x1,-0x58(%ebp)
08530ab0 +0x0236:  cmpl   $0x1a,-0x58(%ebp)
08530ab4 +0x023a:  setle  %al
08530ab7 +0x023d:  test   %al,%al
08530ab9 +0x023f:  jne    08530a3a <+0x1c0>
08530abf +0x0245:  addl   $0x1,-0x64(%ebp)
08530ac3 +0x0249:  cmpl   $0x1,-0x64(%ebp)
08530ac7 +0x024d:  setle  %al
08530aca +0x0250:  test   %al,%al
08530acc +0x0252:  jne    08530983 <+0x109>
08530ad2 +0x0258:  movl   $0x0,-0x64(%ebp)
08530ad9 +0x025f:  jmp    08531c7d <+0x1403>
08530ade +0x0264:  movl   $0x0,-0x68(%ebp)
08530ae5 +0x026b:  mov    -0x64(%ebp),%edx
08530ae8 +0x026e:  lea    -0xa8(%ebp),%ecx
08530aee +0x0274:  mov    %edx,%eax
08530af0 +0x0276:  add    %eax,%eax
08530af2 +0x0278:  add    %edx,%eax
08530af4 +0x027a:  shl    $0x2,%eax
08530af7 +0x027d:  lea    (%ecx,%eax,1),%eax
08530afa +0x0280:  mov    %eax,(%esp)
08530afd +0x0283:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08530b02 +0x0288:  mov    -0x64(%ebp),%edx
08530b05 +0x028b:  lea    -0xa8(%ebp),%ecx
08530b0b +0x0291:  mov    %edx,%eax
08530b0d +0x0293:  add    %eax,%eax
08530b0f +0x0295:  add    %edx,%eax
08530b11 +0x0297:  shl    $0x2,%eax
08530b14 +0x029a:  lea    (%ecx,%eax,1),%eax
08530b17 +0x029d:  movl   $0x12,0x8(%esp)
08530b1f +0x02a5:  movl   $0x0,0x4(%esp)
08530b27 +0x02ad:  mov    %eax,(%esp)
08530b2a +0x02b0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08530b2f +0x02b5:  movl   $0x3,-0x54(%ebp)
08530b36 +0x02bc:  jmp    08530b68 <+0x2ee>
08530b38 +0x02be:  mov    -0x64(%ebp),%ebx
08530b3b +0x02c1:  mov    -0x54(%ebp),%edx
08530b3e +0x02c4:  mov    0x8(%ebp),%ecx
08530b41 +0x02c7:  mov    %edx,%eax
08530b43 +0x02c9:  shl    $0x3,%eax
08530b46 +0x02cc:  add    %edx,%eax
08530b48 +0x02ce:  shl    $0x3,%eax
08530b4b +0x02d1:  imul   $0x798,%ebx,%edx
08530b51 +0x02d7:  add    %edx,%eax
08530b53 +0x02d9:  lea    (%ecx,%eax,1),%eax
08530b56 +0x02dc:  add    $0x30,%eax
08530b59 +0x02df:  mov    0xb(%eax),%eax
08530b5c +0x02e2:  test   %eax,%eax
08530b5e +0x02e4:  je     08530b64 <+0x2ea>
08530b60 +0x02e6:  addl   $0x1,-0x68(%ebp)
08530b64 +0x02ea:  addl   $0x1,-0x54(%ebp)
08530b68 +0x02ee:  cmpl   $0x1a,-0x54(%ebp)
08530b6c +0x02f2:  setle  %al
08530b6f +0x02f5:  test   %al,%al
08530b71 +0x02f7:  jne    08530b38 <+0x2be>
08530b73 +0x02f9:  mov    -0x64(%ebp),%edx
08530b76 +0x02fc:  mov    0x8(%ebp),%eax
08530b79 +0x02ff:  add    $0x3d8,%edx
08530b7f +0x0305:  mov    (%eax,%edx,4),%eax
08530b82 +0x0308:  test   %eax,%eax
08530b84 +0x030a:  jle    08531120 <+0x8a6>
08530b8a +0x0310:  addl   $0x1,-0x68(%ebp)
08530b8e +0x0314:  mov    -0x64(%ebp),%edx
08530b91 +0x0317:  lea    -0xa8(%ebp),%ecx
08530b97 +0x031d:  mov    %edx,%eax
08530b99 +0x031f:  add    %eax,%eax
08530b9b +0x0321:  add    %edx,%eax
08530b9d +0x0323:  shl    $0x2,%eax
08530ba0 +0x0326:  lea    (%ecx,%eax,1),%edx
08530ba3 +0x0329:  mov    -0x68(%ebp),%eax
08530ba6 +0x032c:  mov    %eax,0x4(%esp)
08530baa +0x0330:  mov    %edx,(%esp)
08530bad +0x0333:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08530bb2 +0x0338:  mov    -0x64(%ebp),%edx
08530bb5 +0x033b:  lea    -0xa8(%ebp),%ecx
08530bbb +0x0341:  mov    %edx,%eax
08530bbd +0x0343:  add    %eax,%eax
08530bbf +0x0345:  add    %edx,%eax
08530bc1 +0x0347:  shl    $0x2,%eax
08530bc4 +0x034a:  lea    (%ecx,%eax,1),%eax
08530bc7 +0x034d:  movl   $0x0,0x4(%esp)
08530bcf +0x0355:  mov    %eax,(%esp)
08530bd2 +0x0358:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08530bd7 +0x035d:  mov    -0x64(%ebp),%edx
08530bda +0x0360:  lea    -0xa8(%ebp),%ecx
08530be0 +0x0366:  mov    %edx,%eax
08530be2 +0x0368:  add    %eax,%eax
08530be4 +0x036a:  add    %edx,%eax
08530be6 +0x036c:  shl    $0x2,%eax
08530be9 +0x036f:  lea    (%ecx,%eax,1),%eax
08530bec +0x0372:  movl   $0x0,0x4(%esp)
08530bf4 +0x037a:  mov    %eax,(%esp)
08530bf7 +0x037d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08530bfc +0x0382:  mov    $0x1,%eax
08530c01 +0x0387:  mov    %eax,%edx
08530c03 +0x0389:  sub    -0x64(%ebp),%edx
08530c06 +0x038c:  mov    0x8(%ebp),%eax
08530c09 +0x038f:  add    $0x8,%edx
08530c0c +0x0392:  mov    (%eax,%edx,4),%eax
08530c0f +0x0395:  test   %eax,%eax
08530c11 +0x0397:  je     08530c61 <+0x3e7>
08530c13 +0x0399:  mov    -0x64(%ebp),%edx
08530c16 +0x039c:  mov    0x8(%ebp),%eax
08530c19 +0x039f:  add    $0x3d8,%edx
08530c1f +0x03a5:  mov    (%eax,%edx,4),%ebx
08530c22 +0x03a8:  mov    $0x1,%eax
08530c27 +0x03ad:  mov    %eax,%edx
08530c29 +0x03af:  sub    -0x64(%ebp),%edx
08530c2c +0x03b2:  mov    0x8(%ebp),%eax
08530c2f +0x03b5:  add    $0x8,%edx
08530c32 +0x03b8:  mov    (%eax,%edx,4),%eax
08530c35 +0x03bb:  mov    %eax,(%esp)
08530c38 +0x03be:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08530c3d +0x03c3:  movl   $0x0,0x10(%esp)
08530c45 +0x03cb:  movl   $0x1,0xc(%esp)
08530c4d +0x03d3:  movl   $0x1,0x8(%esp)
08530c55 +0x03db:  mov    %ebx,0x4(%esp)
08530c59 +0x03df:  mov    %eax,(%esp)
08530c5c +0x03e2:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
08530c61 +0x03e7:  mov    -0x64(%ebp),%edx
08530c64 +0x03ea:  mov    0x8(%ebp),%eax
08530c67 +0x03ed:  add    $0x3d8,%edx
08530c6d +0x03f3:  mov    (%eax,%edx,4),%ecx
08530c70 +0x03f6:  mov    $0x68db8bad,%edx
08530c75 +0x03fb:  mov    %ecx,%eax
08530c77 +0x03fd:  imul   %edx
08530c79 +0x03ff:  sar    $0xc,%edx
08530c7c +0x0402:  mov    %ecx,%eax
08530c7e +0x0404:  sar    $0x1f,%eax
08530c81 +0x0407:  mov    %edx,%ebx
08530c83 +0x0409:  sub    %eax,%ebx
08530c85 +0x040b:  mov    %ebx,%eax
08530c87 +0x040d:  imul   $0x2710,%eax,%eax
08530c8d +0x0413:  mov    %ecx,%edx
08530c8f +0x0415:  sub    %eax,%edx
08530c91 +0x0417:  mov    %edx,%eax
08530c93 +0x0419:  test   %eax,%eax
08530c95 +0x041b:  je     08530d30 <+0x4b6>
08530c9b +0x0421:  mov    -0x64(%ebp),%edx
08530c9e +0x0424:  mov    0x8(%ebp),%eax
08530ca1 +0x0427:  add    $0x8,%edx
08530ca4 +0x042a:  mov    (%eax,%edx,4),%eax
08530ca7 +0x042d:  mov    %eax,(%esp)
08530caa +0x0430:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08530caf +0x0435:  mov    %eax,%edx
08530cb1 +0x0437:  mov    $0x1,%eax
08530cb6 +0x043c:  mov    %eax,%ecx
08530cb8 +0x043e:  sub    -0x64(%ebp),%ecx
08530cbb +0x0441:  mov    0x8(%ebp),%eax
08530cbe +0x0444:  add    $0x8,%ecx
08530cc1 +0x0447:  mov    (%eax,%ecx,4),%eax
08530cc4 +0x044a:  mov    %edx,0x8(%esp)
08530cc8 +0x044e:  movl   $0x2c4,0x4(%esp)
08530cd0 +0x0456:  mov    %eax,(%esp)
08530cd3 +0x0459:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
08530cd8 +0x045e:  mov    %eax,%esi
08530cda +0x0460:  mov    $0x1,%eax
08530cdf +0x0465:  mov    %eax,%edx
08530ce1 +0x0467:  sub    -0x64(%ebp),%edx
08530ce4 +0x046a:  mov    0x8(%ebp),%eax
08530ce7 +0x046d:  add    $0x8,%edx
08530cea +0x0470:  mov    (%eax,%edx,4),%ebx
08530ced +0x0473:  mov    $0x1,%eax
08530cf2 +0x0478:  mov    %eax,%edx
08530cf4 +0x047a:  sub    -0x64(%ebp),%edx
08530cf7 +0x047d:  mov    0x8(%ebp),%eax
08530cfa +0x0480:  add    $0x8,%edx
08530cfd +0x0483:  mov    (%eax,%edx,4),%eax
08530d00 +0x0486:  mov    %eax,(%esp)
08530d03 +0x0489:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08530d08 +0x048e:  movl   $0x0,0x14(%esp)
08530d10 +0x0496:  mov    %esi,0x10(%esp)
08530d14 +0x049a:  movl   $0x1,0xc(%esp)
08530d1c +0x04a2:  movl   $0x2c4,0x8(%esp)
08530d24 +0x04aa:  mov    %ebx,0x4(%esp)
08530d28 +0x04ae:  mov    %eax,(%esp)
08530d2b +0x04b1:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08530d30 +0x04b6:  mov    -0x64(%ebp),%edx
08530d33 +0x04b9:  mov    0x8(%ebp),%eax
08530d36 +0x04bc:  add    $0x8,%edx
08530d39 +0x04bf:  mov    (%eax,%edx,4),%eax
08530d3c +0x04c2:  mov    %eax,(%esp)
08530d3f +0x04c5:  call   0822fd3c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53e6
08530d44 +0x04ca:  test   %al,%al
08530d46 +0x04cc:  jne    08530d60 <+0x4e6>
08530d48 +0x04ce:  mov    -0x64(%ebp),%edx
08530d4b +0x04d1:  mov    0x8(%ebp),%eax
08530d4e +0x04d4:  add    $0x8,%edx
08530d51 +0x04d7:  mov    (%eax,%edx,4),%eax
08530d54 +0x04da:  mov    %eax,(%esp)
08530d57 +0x04dd:  call   0822fd4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53f6
08530d5c +0x04e2:  test   %al,%al
08530d5e +0x04e4:  je     08530d7a <+0x500>
08530d60 +0x04e6:  mov    -0x64(%ebp),%edx
08530d63 +0x04e9:  mov    0x8(%ebp),%eax
08530d66 +0x04ec:  add    $0x3d8,%edx
08530d6c +0x04f2:  mov    (%eax,%edx,4),%eax
08530d6f +0x04f5:  test   %eax,%eax
08530d71 +0x04f7:  je     08530d7a <+0x500>
08530d73 +0x04f9:  mov    $0x1,%eax
08530d78 +0x04fe:  jmp    08530d7f <+0x505>
08530d7a +0x0500:  mov    $0x0,%eax
08530d7f +0x0505:  test   %al,%al
08530d81 +0x0507:  je     08530dec <+0x572>
08530d83 +0x0509:  mov    -0x64(%ebp),%edx
08530d86 +0x050c:  mov    0x8(%ebp),%eax
08530d89 +0x050f:  add    $0x3d8,%edx
08530d8f +0x0515:  mov    (%eax,%edx,4),%eax
08530d92 +0x0518:  mov    %eax,%ebx
08530d94 +0x051a:  mov    %eax,%esi
08530d96 +0x051c:  sar    $0x1f,%esi
08530d99 +0x051f:  mov    -0x64(%ebp),%edx
08530d9c +0x0522:  mov    0x8(%ebp),%eax
08530d9f +0x0525:  add    $0x8,%edx
08530da2 +0x0528:  mov    (%eax,%edx,4),%eax
08530da5 +0x052b:  mov    %eax,(%esp)
08530da8 +0x052e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08530dad +0x0533:  mov    $0x1,%edx
08530db2 +0x0538:  mov    %edx,%ecx
08530db4 +0x053a:  sub    -0x64(%ebp),%ecx
08530db7 +0x053d:  mov    0x8(%ebp),%edx
08530dba +0x0540:  add    $0x8,%ecx
08530dbd +0x0543:  mov    (%edx,%ecx,4),%edx
08530dc0 +0x0546:  movl   $0x0,0x14(%esp)
08530dc8 +0x054e:  movl   $0x0,0x18(%esp)
08530dd0 +0x0556:  movl   $0x1,0x10(%esp)
08530dd8 +0x055e:  mov    %ebx,0x8(%esp)
08530ddc +0x0562:  mov    %esi,0xc(%esp)
08530de0 +0x0566:  mov    %eax,0x4(%esp)
08530de4 +0x056a:  mov    %edx,(%esp)
08530de7 +0x056d:  call   0867fbba <_ZN5CUser21gainMoneyFromHackUserEjyjy>  ; CUser::gainMoneyFromHackUser(unsigned int, unsigned long long, unsigned int, unsigned long long)
08530dec +0x0572:  mov    -0x64(%ebp),%edx
08530def +0x0575:  mov    0x8(%ebp),%eax
08530df2 +0x0578:  add    $0x8,%edx
08530df5 +0x057b:  mov    (%eax,%edx,4),%eax
08530df8 +0x057e:  test   %eax,%eax
08530dfa +0x0580:  je     08530e32 <+0x5b8>
08530dfc +0x0582:  mov    $0x1,%eax
08530e01 +0x0587:  mov    %eax,%edx
08530e03 +0x0589:  sub    -0x64(%ebp),%edx
08530e06 +0x058c:  mov    0x8(%ebp),%eax
08530e09 +0x058f:  add    $0x8,%edx
08530e0c +0x0592:  mov    (%eax,%edx,4),%eax
08530e0f +0x0595:  test   %eax,%eax
08530e11 +0x0597:  je     08530e32 <+0x5b8>
08530e13 +0x0599:  mov    -0x64(%ebp),%edx
08530e16 +0x059c:  mov    0x8(%ebp),%eax
08530e19 +0x059f:  add    $0x8,%edx
08530e1c +0x05a2:  mov    (%eax,%edx,4),%eax
08530e1f +0x05a5:  mov    %eax,(%esp)
08530e22 +0x05a8:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
08530e27 +0x05ad:  test   %eax,%eax
08530e29 +0x05af:  jne    08530e32 <+0x5b8>
08530e2b +0x05b1:  mov    $0x1,%eax
08530e30 +0x05b6:  jmp    08530e37 <+0x5bd>
08530e32 +0x05b8:  mov    $0x0,%eax
08530e37 +0x05bd:  test   %al,%al
08530e39 +0x05bf:  je     0853109a <+0x820>
08530e3f +0x05c5:  mov    $0x1,%eax
08530e44 +0x05ca:  mov    %eax,%edx
08530e46 +0x05cc:  sub    -0x64(%ebp),%edx
08530e49 +0x05cf:  mov    0x8(%ebp),%eax
08530e4c +0x05d2:  add    $0x8,%edx
08530e4f +0x05d5:  mov    (%eax,%edx,4),%eax
08530e52 +0x05d8:  mov    %eax,-0x50(%ebp)
08530e55 +0x05db:  mov    -0x64(%ebp),%edx
08530e58 +0x05de:  mov    0x8(%ebp),%eax
08530e5b +0x05e1:  add    $0x8,%edx
08530e5e +0x05e4:  mov    (%eax,%edx,4),%eax
08530e61 +0x05e7:  mov    %eax,-0x4c(%ebp)
08530e64 +0x05ea:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08530e69 +0x05ef:  movl   $0xc51,0x8(%esp)
08530e71 +0x05f7:  movl   $"item_trade.cpp",0x4(%esp)
08530e79 +0x05ff:  mov    %eax,(%esp)
08530e7c +0x0602:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08530e81 +0x0607:  movl   $0x1,0x8(%esp)
08530e89 +0x060f:  mov    %eax,0x4(%esp)
08530e8d +0x0613:  lea    -0xdc(%ebp),%eax
08530e93 +0x0619:  mov    %eax,(%esp)
08530e96 +0x061c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08530e9b +0x0621:  lea    -0xdc(%ebp),%eax
08530ea1 +0x0627:  mov    %eax,(%esp)
08530ea4 +0x062a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08530ea9 +0x062f:  movl   $0xa1,0x4(%esp)
08530eb1 +0x0637:  mov    %eax,(%esp)
08530eb4 +0x063a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08530eb9 +0x063f:  lea    -0xdc(%ebp),%eax
08530ebf +0x0645:  mov    %eax,(%esp)
08530ec2 +0x0648:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08530ec7 +0x064d:  movl   $0xffffffff,0x4(%esp)
08530ecf +0x0655:  mov    %eax,(%esp)
08530ed2 +0x0658:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08530ed7 +0x065d:  lea    -0xdc(%ebp),%eax
08530edd +0x0663:  mov    %eax,(%esp)
08530ee0 +0x0666:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08530ee5 +0x066b:  mov    %eax,(%esp)
08530ee8 +0x066e:  call   085321a0 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x1fe>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x1fe
08530eed +0x0673:  mov    %eax,-0x48(%ebp)
08530ef0 +0x0676:  mov    -0x50(%ebp),%eax
08530ef3 +0x0679:  mov    %eax,(%esp)
08530ef6 +0x067c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08530efb +0x0681:  mov    -0x48(%ebp),%edx
08530efe +0x0684:  mov    %eax,(%edx)
08530f00 +0x0686:  mov    -0x50(%ebp),%eax
08530f03 +0x0689:  add    $0xe0,%eax
08530f08 +0x068e:  mov    %eax,(%esp)
08530f0b +0x0691:  call   08236d0c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3b6
08530f10 +0x0696:  mov    -0x48(%ebp),%edx
08530f13 +0x0699:  add    $0x72,%edx
08530f16 +0x069c:  movl   $0x10,0x8(%esp)
08530f1e +0x06a4:  mov    %eax,0x4(%esp)
08530f22 +0x06a8:  mov    %edx,(%esp)
08530f25 +0x06ab:  call   0807d8d0 <_init+0x1c8>
08530f2a +0x06b0:  mov    -0x48(%ebp),%eax
08530f2d +0x06b3:  lea    0x86(%eax),%edx
08530f33 +0x06b9:  mov    -0x50(%ebp),%eax
08530f36 +0x06bc:  add    $0xe0,%eax
08530f3b +0x06c1:  movl   $0x14,0x8(%esp)
08530f43 +0x06c9:  mov    %edx,0x4(%esp)
08530f47 +0x06cd:  mov    %eax,(%esp)
08530f4a +0x06d0:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
08530f4f +0x06d5:  mov    -0x50(%ebp),%eax
08530f52 +0x06d8:  add    $0xe0,%eax
08530f57 +0x06dd:  mov    %eax,(%esp)
08530f5a +0x06e0:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
08530f5f +0x06e5:  mov    %eax,%edx
08530f61 +0x06e7:  mov    -0x48(%ebp),%eax
08530f64 +0x06ea:  mov    %dl,0x9a(%eax)
08530f6a +0x06f0:  mov    -0x4c(%ebp),%eax
08530f6d +0x06f3:  mov    %eax,(%esp)
08530f70 +0x06f6:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08530f75 +0x06fb:  mov    -0x48(%ebp),%edx
08530f78 +0x06fe:  mov    %eax,0x4(%edx)
08530f7b +0x0701:  mov    -0x4c(%ebp),%eax
08530f7e +0x0704:  add    $0xe0,%eax
08530f83 +0x0709:  mov    %eax,(%esp)
08530f86 +0x070c:  call   08236d0c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3b6
08530f8b +0x0711:  mov    -0x48(%ebp),%edx
08530f8e +0x0714:  add    $0x8,%edx
08530f91 +0x0717:  movl   $0x10,0x8(%esp)
08530f99 +0x071f:  mov    %eax,0x4(%esp)
08530f9d +0x0723:  mov    %edx,(%esp)
08530fa0 +0x0726:  call   0807d8d0 <_init+0x1c8>
08530fa5 +0x072b:  mov    -0x48(%ebp),%eax
08530fa8 +0x072e:  lea    0x1c(%eax),%edx
08530fab +0x0731:  mov    -0x4c(%ebp),%eax
08530fae +0x0734:  add    $0xe0,%eax
08530fb3 +0x0739:  movl   $0x14,0x8(%esp)
08530fbb +0x0741:  mov    %edx,0x4(%esp)
08530fbf +0x0745:  mov    %eax,(%esp)
08530fc2 +0x0748:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
08530fc7 +0x074d:  mov    -0x4c(%ebp),%eax
08530fca +0x0750:  add    $0xe0,%eax
08530fcf +0x0755:  mov    %eax,(%esp)
08530fd2 +0x0758:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
08530fd7 +0x075d:  mov    %eax,%edx
08530fd9 +0x075f:  mov    -0x48(%ebp),%eax
08530fdc +0x0762:  mov    %dl,0x30(%eax)
08530fdf +0x0765:  mov    -0x50(%ebp),%eax
08530fe2 +0x0768:  add    $0xe0,%eax
08530fe7 +0x076d:  mov    %eax,(%esp)
08530fea +0x0770:  call   08288050 <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0x102>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0x102
08530fef +0x0775:  mov    -0x48(%ebp),%edx
08530ff2 +0x0778:  add    $0x9b,%edx
08530ff8 +0x077e:  movl   $0x41,0x8(%esp)
08531000 +0x0786:  mov    %eax,0x4(%esp)
08531004 +0x078a:  mov    %edx,(%esp)
08531007 +0x078d:  call   0807d8d0 <_init+0x1c8>
0853100c +0x0792:  mov    -0x4c(%ebp),%eax
0853100f +0x0795:  add    $0xe0,%eax
08531014 +0x079a:  mov    %eax,(%esp)
08531017 +0x079d:  call   08288050 <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0x102>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0x102
0853101c +0x07a2:  mov    -0x48(%ebp),%edx
0853101f +0x07a5:  add    $0x31,%edx
08531022 +0x07a8:  movl   $0x41,0x8(%esp)
0853102a +0x07b0:  mov    %eax,0x4(%esp)
0853102e +0x07b4:  mov    %edx,(%esp)
08531031 +0x07b7:  call   0807d8d0 <_init+0x1c8>
08531036 +0x07bc:  mov    -0x64(%ebp),%edx
08531039 +0x07bf:  mov    0x8(%ebp),%eax
0853103c +0x07c2:  add    $0x3d8,%edx
08531042 +0x07c8:  mov    (%eax,%edx,4),%eax
08531045 +0x07cb:  mov    %eax,%edx
08531047 +0x07cd:  mov    -0x48(%ebp),%eax
0853104a +0x07d0:  mov    %edx,0xdc(%eax)
08531050 +0x07d6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08531055 +0x07db:  lea    -0xdc(%ebp),%edx
0853105b +0x07e1:  mov    %edx,0x8(%esp)
0853105f +0x07e5:  movl   $0x4,0x4(%esp)
08531067 +0x07ed:  mov    %eax,(%esp)
0853106a +0x07f0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0853106f +0x07f5:  jmp    0853108c <+0x812>
08531071 +0x07f7:  mov    %edx,%ebx
08531073 +0x07f9:  mov    %eax,%esi
08531075 +0x07fb:  lea    -0xdc(%ebp),%eax
0853107b +0x0801:  mov    %eax,(%esp)
0853107e +0x0804:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08531083 +0x0809:  mov    %esi,%eax
08531085 +0x080b:  mov    %ebx,%edx
08531087 +0x080d:  jmp    08531edd <+0x1663>
0853108c +0x0812:  lea    -0xdc(%ebp),%eax
08531092 +0x0818:  mov    %eax,(%esp)
08531095 +0x081b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0853109a +0x0820:  mov    -0x64(%ebp),%edx
0853109d +0x0823:  mov    0x8(%ebp),%eax
085310a0 +0x0826:  add    $0x3d8,%edx
085310a6 +0x082c:  movl   $0x0,(%eax,%edx,4)
085310ad +0x0833:  mov    -0x64(%ebp),%edx
085310b0 +0x0836:  mov    0x8(%ebp),%eax
085310b3 +0x0839:  add    $0x3d8,%edx
085310b9 +0x083f:  mov    (%eax,%edx,4),%edx
085310bc +0x0842:  mov    -0x64(%ebp),%ecx
085310bf +0x0845:  mov    0x8(%ebp),%eax
085310c2 +0x0848:  add    $0x8,%ecx
085310c5 +0x084b:  mov    (%eax,%ecx,4),%eax
085310c8 +0x084e:  mov    0x796f8(%eax),%eax
085310ce +0x0854:  mov    %edx,0x8(%esp)
085310d2 +0x0858:  movl   $0x0,0x4(%esp)
085310da +0x0860:  mov    %eax,(%esp)
085310dd +0x0863:  call   084ba0e8 <_ZN10HistoryLog12WriteTradeUpEP8_IO_FILEii>  ; HistoryLog::WriteTradeUp(_IO_FILE*, int, int)
085310e2 +0x0868:  mov    -0x64(%ebp),%edx
085310e5 +0x086b:  mov    0x8(%ebp),%eax
085310e8 +0x086e:  add    $0x3d8,%edx
085310ee +0x0874:  mov    (%eax,%edx,4),%edx
085310f1 +0x0877:  mov    $0x1,%eax
085310f6 +0x087c:  mov    %eax,%ecx
085310f8 +0x087e:  sub    -0x64(%ebp),%ecx
085310fb +0x0881:  mov    0x8(%ebp),%eax
085310fe +0x0884:  add    $0x8,%ecx
08531101 +0x0887:  mov    (%eax,%ecx,4),%eax
08531104 +0x088a:  mov    0x796f8(%eax),%eax
0853110a +0x0890:  mov    %edx,0x8(%esp)
0853110e +0x0894:  movl   $0x0,0x4(%esp)
08531116 +0x089c:  mov    %eax,(%esp)
08531119 +0x089f:  call   084ba12e <_ZN10HistoryLog14WriteTradeDownEP8_IO_FILEii>  ; HistoryLog::WriteTradeDown(_IO_FILE*, int, int)
0853111e +0x08a4:  jmp    08531144 <+0x8ca>
08531120 +0x08a6:  mov    -0x64(%ebp),%edx
08531123 +0x08a9:  lea    -0xa8(%ebp),%ecx
08531129 +0x08af:  mov    %edx,%eax
0853112b +0x08b1:  add    %eax,%eax
0853112d +0x08b3:  add    %edx,%eax
0853112f +0x08b5:  shl    $0x2,%eax
08531132 +0x08b8:  lea    (%ecx,%eax,1),%edx
08531135 +0x08bb:  mov    -0x68(%ebp),%eax
08531138 +0x08be:  mov    %eax,0x4(%esp)
0853113c +0x08c2:  mov    %edx,(%esp)
0853113f +0x08c5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08531144 +0x08ca:  movl   $0x3,-0x44(%ebp)
0853114b +0x08d1:  jmp    08531c45 <+0x13cb>
08531150 +0x08d6:  mov    $0x1,%eax
08531155 +0x08db:  mov    %eax,%edx
08531157 +0x08dd:  sub    -0x64(%ebp),%edx
0853115a +0x08e0:  mov    0x8(%ebp),%eax
0853115d +0x08e3:  add    $0x8,%edx
08531160 +0x08e6:  mov    (%eax,%edx,4),%eax
08531163 +0x08e9:  test   %eax,%eax
08531165 +0x08eb:  je     08531c41 <+0x13c7>
0853116b +0x08f1:  mov    -0x64(%ebp),%ebx
0853116e +0x08f4:  mov    -0x44(%ebp),%edx
08531171 +0x08f7:  mov    0x8(%ebp),%ecx
08531174 +0x08fa:  mov    %edx,%eax
08531176 +0x08fc:  shl    $0x3,%eax
08531179 +0x08ff:  add    %edx,%eax
0853117b +0x0901:  shl    $0x3,%eax
0853117e +0x0904:  imul   $0x798,%ebx,%edx
08531184 +0x090a:  add    %edx,%eax
08531186 +0x090c:  lea    (%ecx,%eax,1),%eax
08531189 +0x090f:  add    $0x30,%eax
0853118c +0x0912:  mov    0xb(%eax),%eax
0853118f +0x0915:  test   %eax,%eax
08531191 +0x0917:  je     08531c41 <+0x13c7>
08531197 +0x091d:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0853119c +0x0922:  mov    %eax,(%esp)
0853119f +0x0925:  call   08299028 <_ZN12CGameManager29GetAuctionAveragePriceManagerEv>  ; CGameManager::GetAuctionAveragePriceManager()
085311a4 +0x092a:  mov    %eax,-0x40(%ebp)
085311a7 +0x092d:  cmpl   $0x0,-0x40(%ebp)
085311ab +0x0931:  je     0853123b <+0x9c1>
085311b1 +0x0937:  mov    -0x64(%ebp),%ecx
085311b4 +0x093a:  mov    -0x44(%ebp),%edx
085311b7 +0x093d:  mov    %edx,%eax
085311b9 +0x093f:  shl    $0x3,%eax
085311bc +0x0942:  add    %edx,%eax
085311be +0x0944:  shl    $0x3,%eax
085311c1 +0x0947:  imul   $0x798,%ecx,%edx
085311c7 +0x094d:  add    %edx,%eax
085311c9 +0x094f:  add    $0x30,%eax
085311cc +0x0952:  add    0x8(%ebp),%eax
085311cf +0x0955:  add    $0x9,%eax
085311d2 +0x0958:  mov    %eax,-0x3c(%ebp)
085311d5 +0x095b:  mov    -0x3c(%ebp),%eax
085311d8 +0x095e:  mov    %eax,(%esp)
085311db +0x0961:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
085311e0 +0x0966:  movzbl %al,%edx
085311e3 +0x0969:  mov    -0x3c(%ebp),%eax
085311e6 +0x096c:  mov    0x2(%eax),%eax
085311e9 +0x096f:  mov    %edx,0x8(%esp)
085311ed +0x0973:  mov    %eax,0x4(%esp)
085311f1 +0x0977:  mov    -0x40(%ebp),%eax
085311f4 +0x097a:  mov    %eax,(%esp)
085311f7 +0x097d:  call   082f5da8 <_ZNK20CAuctionAveragePrice15GetAveragePriceEih>  ; CAuctionAveragePrice::GetAveragePrice(int, unsigned char) const
085311fc +0x0982:  mov    %eax,-0x38(%ebp)
085311ff +0x0985:  mov    -0x3c(%ebp),%eax
08531202 +0x0988:  movzbl 0x1(%eax),%eax
08531206 +0x098c:  cmp    $0x2,%al
08531208 +0x098e:  je     08531215 <+0x99b>
0853120a +0x0990:  mov    -0x3c(%ebp),%eax
0853120d +0x0993:  movzbl 0x1(%eax),%eax
08531211 +0x0997:  cmp    $0x3,%al
08531213 +0x0999:  jne    08531224 <+0x9aa>
08531215 +0x099b:  mov    -0x3c(%ebp),%eax
08531218 +0x099e:  mov    0x7(%eax),%eax
0853121b +0x09a1:  mov    -0x38(%ebp),%edx
0853121e +0x09a4:  imul   %edx,%eax
08531221 +0x09a7:  mov    %eax,-0x38(%ebp)
08531224 +0x09aa:  mov    -0x64(%ebp),%eax
08531227 +0x09ad:  mov    -0x64(%ebp),%edx
0853122a +0x09b0:  mov    -0x90(%ebp,%edx,4),%edx
08531231 +0x09b7:  add    -0x38(%ebp),%edx
08531234 +0x09ba:  mov    %edx,-0x90(%ebp,%eax,4)
0853123b +0x09c1:  mov    -0x64(%ebp),%ebx
0853123e +0x09c4:  mov    -0x44(%ebp),%edx
08531241 +0x09c7:  mov    0x8(%ebp),%ecx
08531244 +0x09ca:  mov    %edx,%eax
08531246 +0x09cc:  shl    $0x3,%eax
08531249 +0x09cf:  add    %edx,%eax
0853124b +0x09d1:  shl    $0x3,%eax
0853124e +0x09d4:  imul   $0x798,%ebx,%edx
08531254 +0x09da:  add    %edx,%eax
08531256 +0x09dc:  lea    (%ecx,%eax,1),%eax
08531259 +0x09df:  add    $0x30,%eax
0853125c +0x09e2:  movzbl 0xa(%eax),%eax
08531260 +0x09e6:  cmp    $0x8,%al
08531262 +0x09e8:  jne    085314f1 <+0xc77>
08531268 +0x09ee:  mov    -0x64(%ebp),%esi
0853126b +0x09f1:  mov    -0x44(%ebp),%ebx
0853126e +0x09f4:  mov    $0x1,%eax
08531273 +0x09f9:  mov    %eax,%edx
08531275 +0x09fb:  sub    -0x64(%ebp),%edx
08531278 +0x09fe:  mov    0x8(%ebp),%eax
0853127b +0x0a01:  add    $0x8,%edx
0853127e +0x0a04:  mov    (%eax,%edx,4),%eax
08531281 +0x0a07:  mov    %eax,(%esp)
08531284 +0x0a0a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08531289 +0x0a0f:  mov    %eax,%edx
0853128b +0x0a11:  movl   $0x0,0x48(%esp)
08531293 +0x0a19:  movl   $0x1,0x44(%esp)
0853129b +0x0a21:  mov    0x8(%ebp),%ecx
0853129e +0x0a24:  mov    %ebx,%eax
085312a0 +0x0a26:  shl    $0x3,%eax
085312a3 +0x0a29:  add    %ebx,%eax
085312a5 +0x0a2b:  shl    $0x3,%eax
085312a8 +0x0a2e:  imul   $0x798,%esi,%ebx
085312ae +0x0a34:  add    %ebx,%eax
085312b0 +0x0a36:  lea    (%ecx,%eax,1),%eax
085312b3 +0x0a39:  add    $0x30,%eax
085312b6 +0x0a3c:  mov    0x9(%eax),%ecx
085312b9 +0x0a3f:  mov    %ecx,0x4(%esp)
085312bd +0x0a43:  mov    0xd(%eax),%ecx
085312c0 +0x0a46:  mov    %ecx,0x8(%esp)
085312c4 +0x0a4a:  mov    0x11(%eax),%ecx
085312c7 +0x0a4d:  mov    %ecx,0xc(%esp)
085312cb +0x0a51:  mov    0x15(%eax),%ecx
085312ce +0x0a54:  mov    %ecx,0x10(%esp)
085312d2 +0x0a58:  mov    0x19(%eax),%ecx
085312d5 +0x0a5b:  mov    %ecx,0x14(%esp)
085312d9 +0x0a5f:  mov    0x1d(%eax),%ecx
085312dc +0x0a62:  mov    %ecx,0x18(%esp)
085312e0 +0x0a66:  mov    0x21(%eax),%ecx
085312e3 +0x0a69:  mov    %ecx,0x1c(%esp)
085312e7 +0x0a6d:  mov    0x25(%eax),%ecx
085312ea +0x0a70:  mov    %ecx,0x20(%esp)
085312ee +0x0a74:  mov    0x29(%eax),%ecx
085312f1 +0x0a77:  mov    %ecx,0x24(%esp)
085312f5 +0x0a7b:  mov    0x2d(%eax),%ecx
085312f8 +0x0a7e:  mov    %ecx,0x28(%esp)
085312fc +0x0a82:  mov    0x31(%eax),%ecx
085312ff +0x0a85:  mov    %ecx,0x2c(%esp)
08531303 +0x0a89:  mov    0x35(%eax),%ecx
08531306 +0x0a8c:  mov    %ecx,0x30(%esp)
0853130a +0x0a90:  mov    0x39(%eax),%ecx
0853130d +0x0a93:  mov    %ecx,0x34(%esp)
08531311 +0x0a97:  mov    0x3d(%eax),%ecx
08531314 +0x0a9a:  mov    %ecx,0x38(%esp)
08531318 +0x0a9e:  mov    0x41(%eax),%ecx
0853131b +0x0aa1:  mov    %ecx,0x3c(%esp)
0853131f +0x0aa5:  movzbl 0x45(%eax),%eax
08531323 +0x0aa9:  mov    %al,0x40(%esp)
08531327 +0x0aad:  mov    %edx,(%esp)
0853132a +0x0ab0:  call   0850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>  ; CInventory::insertAvatarIntoInventory(Inven_Item, eAvatarItemAddReason, bool)
0853132f +0x0ab5:  mov    %eax,-0xac(%ebp)
08531335 +0x0abb:  mov    -0xac(%ebp),%eax
0853133b +0x0ac1:  test   %eax,%eax
0853133d +0x0ac3:  js     08531a48 <+0x11ce>
08531343 +0x0ac9:  mov    -0x64(%ebp),%ecx
08531346 +0x0acc:  mov    -0x44(%ebp),%edx
08531349 +0x0acf:  mov    %edx,%eax
0853134b +0x0ad1:  shl    $0x3,%eax
0853134e +0x0ad4:  add    %edx,%eax
08531350 +0x0ad6:  shl    $0x3,%eax
08531353 +0x0ad9:  imul   $0x798,%ecx,%edx
08531359 +0x0adf:  add    %edx,%eax
0853135b +0x0ae1:  add    $0x30,%eax
0853135e +0x0ae4:  add    0x8(%ebp),%eax
08531361 +0x0ae7:  mov    %eax,-0x34(%ebp)
08531364 +0x0aea:  mov    -0xac(%ebp),%eax
0853136a +0x0af0:  movzbl %al,%ebx
0853136d +0x0af3:  mov    $0x1,%eax
08531372 +0x0af8:  mov    %eax,%edx
08531374 +0x0afa:  sub    -0x64(%ebp),%edx
08531377 +0x0afd:  mov    0x8(%ebp),%eax
0853137a +0x0b00:  add    $0x8,%edx
0853137d +0x0b03:  mov    (%eax,%edx,4),%eax
08531380 +0x0b06:  mov    %eax,(%esp)
08531383 +0x0b09:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08531388 +0x0b0e:  mov    -0x34(%ebp),%edx
0853138b +0x0b11:  mov    0x4(%edx),%ecx
0853138e +0x0b14:  mov    -0x34(%ebp),%edx
08531391 +0x0b17:  mov    0x10(%edx),%edx
08531394 +0x0b1a:  mov    %ebx,0x10(%esp)
08531398 +0x0b1e:  mov    %eax,0xc(%esp)
0853139c +0x0b22:  mov    %ecx,0x8(%esp)
085313a0 +0x0b26:  mov    %edx,0x4(%esp)
085313a4 +0x0b2a:  mov    0x8(%ebp),%eax
085313a7 +0x0b2d:  mov    %eax,(%esp)
085313aa +0x0b30:  call   0853084a <_ZN11CTradeSpace26_SaveAvatarItemOwnerChangeEjjjh>  ; CTradeSpace::_SaveAvatarItemOwnerChange(unsigned int, unsigned int, unsigned int, unsigned char)
085313af +0x0b35:  mov    $0x1,%eax
085313b4 +0x0b3a:  mov    %eax,%edx
085313b6 +0x0b3c:  sub    -0x64(%ebp),%edx
085313b9 +0x0b3f:  mov    0x8(%ebp),%eax
085313bc +0x0b42:  add    $0x8,%edx
085313bf +0x0b45:  mov    (%eax,%edx,4),%eax
085313c2 +0x0b48:  mov    %eax,(%esp)
085313c5 +0x0b4b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085313ca +0x0b50:  mov    -0x34(%ebp),%edx
085313cd +0x0b53:  mov    0x4(%edx),%ecx
085313d0 +0x0b56:  mov    -0x34(%ebp),%edx
085313d3 +0x0b59:  mov    0x10(%edx),%edx
085313d6 +0x0b5c:  movl   $0x2,0xc(%esp)
085313de +0x0b64:  mov    %eax,0x8(%esp)
085313e2 +0x0b68:  mov    %ecx,0x4(%esp)
085313e6 +0x0b6c:  mov    %edx,(%esp)
085313e9 +0x0b6f:  call   0844511a <_ZN24DB_InsertCeraItemHistory11makeRequestEijjc>  ; DB_InsertCeraItemHistory::makeRequest(int, unsigned int, unsigned int, char)
085313ee +0x0b74:  mov    -0x34(%ebp),%eax
085313f1 +0x0b77:  mov    0x10(%eax),%ebx
085313f4 +0x0b7a:  mov    -0x64(%ebp),%edx
085313f7 +0x0b7d:  mov    0x8(%ebp),%eax
085313fa +0x0b80:  add    $0x8,%edx
085313fd +0x0b83:  mov    (%eax,%edx,4),%eax
08531400 +0x0b86:  mov    %eax,(%esp)
08531403 +0x0b89:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08531408 +0x0b8e:  mov    %eax,(%esp)
0853140b +0x0b91:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
08531410 +0x0b96:  mov    %ebx,0x4(%esp)
08531414 +0x0b9a:  mov    %eax,(%esp)
08531417 +0x0b9d:  call   082f9a42 <_ZN8WongWork14CAvatarItemMgr15EraseAvatarItemEi>  ; WongWork::CAvatarItemMgr::EraseAvatarItem(int)
0853141c +0x0ba2:  mov    %eax,-0x30(%ebp)
0853141f +0x0ba5:  mov    -0x34(%ebp),%eax
08531422 +0x0ba8:  mov    0x10(%eax),%ebx
08531425 +0x0bab:  mov    $0x1,%eax
0853142a +0x0bb0:  mov    %eax,%edx
0853142c +0x0bb2:  sub    -0x64(%ebp),%edx
0853142f +0x0bb5:  mov    0x8(%ebp),%eax
08531432 +0x0bb8:  add    $0x8,%edx
08531435 +0x0bbb:  mov    (%eax,%edx,4),%eax
08531438 +0x0bbe:  mov    %eax,(%esp)
0853143b +0x0bc1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08531440 +0x0bc6:  mov    %eax,(%esp)
08531443 +0x0bc9:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
08531448 +0x0bce:  mov    -0x30(%ebp),%edx
0853144b +0x0bd1:  mov    %edx,0x8(%esp)
0853144f +0x0bd5:  mov    %ebx,0x4(%esp)
08531453 +0x0bd9:  mov    %eax,(%esp)
08531456 +0x0bdc:  call   082f99d6 <_ZN8WongWork14CAvatarItemMgr13AddAvatarItemEiPNS_11Avatar_ItemE>  ; WongWork::CAvatarItemMgr::AddAvatarItem(int, WongWork::Avatar_Item*)
0853145b +0x0be1:  mov    -0x30(%ebp),%eax
0853145e +0x0be4:  mov    %eax,(%esp)
08531461 +0x0be7:  call   0822d202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28ac
08531466 +0x0bec:  mov    -0x34(%ebp),%edx
08531469 +0x0bef:  mov    0x10(%edx),%ecx
0853146c +0x0bf2:  mov    -0x34(%ebp),%edx
0853146f +0x0bf5:  mov    0xb(%edx),%edx
08531472 +0x0bf8:  mov    -0x64(%ebp),%esi
08531475 +0x0bfb:  mov    0x8(%ebp),%ebx
08531478 +0x0bfe:  add    $0x8,%esi
0853147b +0x0c01:  mov    (%ebx,%esi,4),%ebx
0853147e +0x0c04:  add    $0x79700,%ebx
08531484 +0x0c0a:  movl   $0x0,0x10(%esp)
0853148c +0x0c12:  mov    %eax,0xc(%esp)
08531490 +0x0c16:  mov    %ecx,0x8(%esp)
08531494 +0x0c1a:  mov    %edx,0x4(%esp)
08531498 +0x0c1e:  mov    %ebx,(%esp)
0853149b +0x0c21:  call   086846fa <_ZN15cUserHistoryLog13AvatarItemDelEiiPKc20eAvatarItemDelReason>  ; cUserHistoryLog::AvatarItemDel(int, int, char const*, eAvatarItemDelReason)
085314a0 +0x0c26:  mov    -0x30(%ebp),%eax
085314a3 +0x0c29:  mov    %eax,(%esp)
085314a6 +0x0c2c:  call   0822d202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28ac
085314ab +0x0c31:  mov    -0x34(%ebp),%edx
085314ae +0x0c34:  mov    0x10(%edx),%ecx
085314b1 +0x0c37:  mov    -0x34(%ebp),%edx
085314b4 +0x0c3a:  mov    0xb(%edx),%edx
085314b7 +0x0c3d:  mov    $0x1,%ebx
085314bc +0x0c42:  mov    %ebx,%esi
085314be +0x0c44:  sub    -0x64(%ebp),%esi
085314c1 +0x0c47:  mov    0x8(%ebp),%ebx
085314c4 +0x0c4a:  add    $0x8,%esi
085314c7 +0x0c4d:  mov    (%ebx,%esi,4),%ebx
085314ca +0x0c50:  add    $0x79700,%ebx
085314d0 +0x0c56:  movl   $0x1,0x10(%esp)
085314d8 +0x0c5e:  mov    %eax,0xc(%esp)
085314dc +0x0c62:  mov    %ecx,0x8(%esp)
085314e0 +0x0c66:  mov    %edx,0x4(%esp)
085314e4 +0x0c6a:  mov    %ebx,(%esp)
085314e7 +0x0c6d:  call   08684652 <_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason>  ; cUserHistoryLog::AvatarItemAdd(int, int, char const*, eAvatarItemAddReason)
085314ec +0x0c72:  jmp    08531a48 <+0x11ce>
085314f1 +0x0c77:  mov    -0x64(%ebp),%ebx
085314f4 +0x0c7a:  mov    -0x44(%ebp),%edx
085314f7 +0x0c7d:  mov    0x8(%ebp),%ecx
085314fa +0x0c80:  mov    %edx,%eax
085314fc +0x0c82:  shl    $0x3,%eax
085314ff +0x0c85:  add    %edx,%eax
08531501 +0x0c87:  shl    $0x3,%eax
08531504 +0x0c8a:  imul   $0x798,%ebx,%edx
0853150a +0x0c90:  add    %edx,%eax
0853150c +0x0c92:  lea    (%ecx,%eax,1),%eax
0853150f +0x0c95:  add    $0x30,%eax
08531512 +0x0c98:  movzbl 0x8(%eax),%eax
08531516 +0x0c9c:  cmp    $0x7,%al
08531518 +0x0c9e:  jne    08531883 <+0x1009>
0853151e +0x0ca4:  mov    -0x64(%ebp),%esi
08531521 +0x0ca7:  mov    -0x44(%ebp),%ebx
08531524 +0x0caa:  mov    $0x1,%eax
08531529 +0x0caf:  mov    %eax,%edx
0853152b +0x0cb1:  sub    -0x64(%ebp),%edx
0853152e +0x0cb4:  mov    0x8(%ebp),%eax
08531531 +0x0cb7:  add    $0x8,%edx
08531534 +0x0cba:  mov    (%eax,%edx,4),%eax
08531537 +0x0cbd:  mov    %eax,(%esp)
0853153a +0x0cc0:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0853153f +0x0cc5:  mov    %eax,%edx
08531541 +0x0cc7:  movl   $0x1,0x4c(%esp)
08531549 +0x0ccf:  movl   $0x0,0x48(%esp)
08531551 +0x0cd7:  movl   $0x1a,0x44(%esp)
08531559 +0x0cdf:  mov    0x8(%ebp),%ecx
0853155c +0x0ce2:  mov    %ebx,%eax
0853155e +0x0ce4:  shl    $0x3,%eax
08531561 +0x0ce7:  add    %ebx,%eax
08531563 +0x0ce9:  shl    $0x3,%eax
08531566 +0x0cec:  imul   $0x798,%esi,%ebx
0853156c +0x0cf2:  add    %ebx,%eax
0853156e +0x0cf4:  lea    (%ecx,%eax,1),%eax
08531571 +0x0cf7:  add    $0x30,%eax
08531574 +0x0cfa:  mov    0x9(%eax),%ecx
08531577 +0x0cfd:  mov    %ecx,0x4(%esp)
0853157b +0x0d01:  mov    0xd(%eax),%ecx
0853157e +0x0d04:  mov    %ecx,0x8(%esp)
08531582 +0x0d08:  mov    0x11(%eax),%ecx
08531585 +0x0d0b:  mov    %ecx,0xc(%esp)
08531589 +0x0d0f:  mov    0x15(%eax),%ecx
0853158c +0x0d12:  mov    %ecx,0x10(%esp)
08531590 +0x0d16:  mov    0x19(%eax),%ecx
08531593 +0x0d19:  mov    %ecx,0x14(%esp)
08531597 +0x0d1d:  mov    0x1d(%eax),%ecx
0853159a +0x0d20:  mov    %ecx,0x18(%esp)
0853159e +0x0d24:  mov    0x21(%eax),%ecx
085315a1 +0x0d27:  mov    %ecx,0x1c(%esp)
085315a5 +0x0d2b:  mov    0x25(%eax),%ecx
085315a8 +0x0d2e:  mov    %ecx,0x20(%esp)
085315ac +0x0d32:  mov    0x29(%eax),%ecx
085315af +0x0d35:  mov    %ecx,0x24(%esp)
085315b3 +0x0d39:  mov    0x2d(%eax),%ecx
085315b6 +0x0d3c:  mov    %ecx,0x28(%esp)
085315ba +0x0d40:  mov    0x31(%eax),%ecx
085315bd +0x0d43:  mov    %ecx,0x2c(%esp)
085315c1 +0x0d47:  mov    0x35(%eax),%ecx
085315c4 +0x0d4a:  mov    %ecx,0x30(%esp)
085315c8 +0x0d4e:  mov    0x39(%eax),%ecx
085315cb +0x0d51:  mov    %ecx,0x34(%esp)
085315cf +0x0d55:  mov    0x3d(%eax),%ecx
085315d2 +0x0d58:  mov    %ecx,0x38(%esp)
085315d6 +0x0d5c:  mov    0x41(%eax),%ecx
085315d9 +0x0d5f:  mov    %ecx,0x3c(%esp)
085315dd +0x0d63:  movzbl 0x45(%eax),%eax
085315e1 +0x0d67:  mov    %al,0x40(%esp)
085315e5 +0x0d6b:  mov    %edx,(%esp)
085315e8 +0x0d6e:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
085315ed +0x0d73:  mov    %eax,-0xac(%ebp)
085315f3 +0x0d79:  mov    -0xac(%ebp),%eax
085315f9 +0x0d7f:  test   %eax,%eax
085315fb +0x0d81:  js     08531a48 <+0x11ce>
08531601 +0x0d87:  mov    -0x64(%ebp),%ebx
08531604 +0x0d8a:  mov    -0x44(%ebp),%edx
08531607 +0x0d8d:  mov    0x8(%ebp),%ecx
0853160a +0x0d90:  mov    %edx,%eax
0853160c +0x0d92:  shl    $0x3,%eax
0853160f +0x0d95:  add    %edx,%eax
08531611 +0x0d97:  shl    $0x3,%eax
08531614 +0x0d9a:  imul   $0x798,%ebx,%edx
0853161a +0x0da0:  add    %edx,%eax
0853161c +0x0da2:  lea    (%ecx,%eax,1),%eax
0853161f +0x0da5:  add    $0x30,%eax
08531622 +0x0da8:  movzbl 0xa(%eax),%eax
08531626 +0x0dac:  cmp    $0x5,%al
08531628 +0x0dae:  jne    08531688 <+0xe0e>
0853162a +0x0db0:  mov    -0x64(%ebp),%ebx
0853162d +0x0db3:  mov    -0x44(%ebp),%edx
08531630 +0x0db6:  mov    0x8(%ebp),%ecx
08531633 +0x0db9:  mov    %edx,%eax
08531635 +0x0dbb:  shl    $0x3,%eax
08531638 +0x0dbe:  add    %edx,%eax
0853163a +0x0dc0:  shl    $0x3,%eax
0853163d +0x0dc3:  imul   $0x798,%ebx,%edx
08531643 +0x0dc9:  add    %edx,%eax
08531645 +0x0dcb:  lea    (%ecx,%eax,1),%eax
08531648 +0x0dce:  add    $0x40,%eax
0853164b +0x0dd1:  mov    (%eax),%ebx
0853164d +0x0dd3:  mov    -0x64(%ebp),%edx
08531650 +0x0dd6:  mov    0x8(%ebp),%eax
08531653 +0x0dd9:  add    $0x8,%edx
08531656 +0x0ddc:  mov    (%eax,%edx,4),%eax
08531659 +0x0ddf:  mov    %eax,(%esp)
0853165c +0x0de2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08531661 +0x0de7:  mov    %eax,(%esp)
08531664 +0x0dea:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08531669 +0x0def:  mov    %ebx,0x4(%esp)
0853166d +0x0df3:  mov    %eax,(%esp)
08531670 +0x0df6:  call   08339292 <_ZNK13user_creature12CCreatureMgr16FindCreatureItemEi>  ; user_creature::CCreatureMgr::FindCreatureItem(int) const
08531675 +0x0dfb:  test   %eax,%eax
08531677 +0x0dfd:  sete   %al
0853167a +0x0e00:  test   %al,%al
0853167c +0x0e02:  je     08531688 <+0xe0e>
0853167e +0x0e04:  mov    $0x0,%ebx
08531683 +0x0e09:  jmp    08531ef5 <+0x167b>
08531688 +0x0e0e:  mov    -0x64(%ebp),%edx
0853168b +0x0e11:  mov    0x8(%ebp),%eax
0853168e +0x0e14:  add    $0x8,%edx
08531691 +0x0e17:  mov    (%eax,%edx,4),%eax
08531694 +0x0e1a:  mov    %eax,(%esp)
08531697 +0x0e1d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0853169c +0x0e22:  mov    (%eax),%eax
0853169e +0x0e24:  mov    %eax,-0x2c(%ebp)
085316a1 +0x0e27:  mov    -0x64(%ebp),%edx
085316a4 +0x0e2a:  mov    0x8(%ebp),%eax
085316a7 +0x0e2d:  add    $0x8,%edx
085316aa +0x0e30:  mov    (%eax,%edx,4),%eax
085316ad +0x0e33:  mov    %eax,(%esp)
085316b0 +0x0e36:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085316b5 +0x0e3b:  mov    %eax,(%esp)
085316b8 +0x0e3e:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
085316bd +0x0e43:  mov    %eax,(%esp)
085316c0 +0x0e46:  call   08531fbe <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x1c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x1c
085316c5 +0x0e4b:  mov    -0x64(%ebp),%ecx
085316c8 +0x0e4e:  mov    0x8(%ebp),%edx
085316cb +0x0e51:  add    $0x3d8,%ecx
085316d1 +0x0e57:  mov    0x8(%edx,%ecx,4),%edx
085316d5 +0x0e5b:  add    %edx,%eax
085316d7 +0x0e5d:  mov    %eax,-0x28(%ebp)
085316da +0x0e60:  mov    -0xac(%ebp),%ebx
085316e0 +0x0e66:  mov    -0x64(%ebp),%ecx
085316e3 +0x0e69:  mov    -0x44(%ebp),%edx
085316e6 +0x0e6c:  mov    %edx,%eax
085316e8 +0x0e6e:  shl    $0x3,%eax
085316eb +0x0e71:  add    %edx,%eax
085316ed +0x0e73:  shl    $0x3,%eax
085316f0 +0x0e76:  imul   $0x798,%ecx,%edx
085316f6 +0x0e7c:  add    %edx,%eax
085316f8 +0x0e7e:  add    $0x30,%eax
085316fb +0x0e81:  add    0x8(%ebp),%eax
085316fe +0x0e84:  lea    0x9(%eax),%esi
08531701 +0x0e87:  mov    $0x1,%eax
08531706 +0x0e8c:  mov    %eax,%edx
08531708 +0x0e8e:  sub    -0x64(%ebp),%edx
0853170b +0x0e91:  mov    0x8(%ebp),%eax
0853170e +0x0e94:  add    $0x8,%edx
08531711 +0x0e97:  mov    (%eax,%edx,4),%eax
08531714 +0x0e9a:  mov    %eax,(%esp)
08531717 +0x0e9d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0853171c +0x0ea2:  mov    %eax,(%esp)
0853171f +0x0ea5:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
08531724 +0x0eaa:  mov    -0x28(%ebp),%edx
08531727 +0x0ead:  mov    %edx,0x14(%esp)
0853172b +0x0eb1:  mov    -0x2c(%ebp),%edx
0853172e +0x0eb4:  mov    %edx,0x10(%esp)
08531732 +0x0eb8:  movl   $0x1a,0xc(%esp)
0853173a +0x0ec0:  mov    %ebx,0x8(%esp)
0853173e +0x0ec4:  mov    %esi,0x4(%esp)
08531742 +0x0ec8:  mov    %eax,(%esp)
08531745 +0x0ecb:  call   0833ad34 <_ZN13user_creature12CCreatureMgr11ChangeOwnerEP10Inven_Itemiiii>  ; user_creature::CCreatureMgr::ChangeOwner(Inven_Item*, int, int, int, int)
0853174a +0x0ed0:  mov    $0x1,%eax
0853174f +0x0ed5:  sub    -0x64(%ebp),%eax
08531752 +0x0ed8:  mov    0x8(%ebp),%edx
08531755 +0x0edb:  lea    0x3d8(%eax),%ecx
0853175b +0x0ee1:  mov    0x8(%edx,%ecx,4),%edx
0853175f +0x0ee5:  lea    0x1(%edx),%ecx
08531762 +0x0ee8:  mov    0x8(%ebp),%edx
08531765 +0x0eeb:  add    $0x3d8,%eax
0853176a +0x0ef0:  mov    %ecx,0x8(%edx,%eax,4)
0853176e +0x0ef4:  mov    -0x64(%ebp),%ecx
08531771 +0x0ef7:  mov    -0x44(%ebp),%edx
08531774 +0x0efa:  mov    %edx,%eax
08531776 +0x0efc:  shl    $0x3,%eax
08531779 +0x0eff:  add    %edx,%eax
0853177b +0x0f01:  shl    $0x3,%eax
0853177e +0x0f04:  imul   $0x798,%ecx,%edx
08531784 +0x0f0a:  add    %edx,%eax
08531786 +0x0f0c:  add    $0x30,%eax
08531789 +0x0f0f:  add    0x8(%ebp),%eax
0853178c +0x0f12:  add    $0x9,%eax
0853178f +0x0f15:  mov    %eax,(%esp)
08531792 +0x0f18:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08531797 +0x0f1d:  mov    %eax,%ebx
08531799 +0x0f1f:  mov    -0x64(%ebp),%edx
0853179c +0x0f22:  mov    0x8(%ebp),%eax
0853179f +0x0f25:  add    $0x8,%edx
085317a2 +0x0f28:  mov    (%eax,%edx,4),%eax
085317a5 +0x0f2b:  mov    %eax,(%esp)
085317a8 +0x0f2e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085317ad +0x0f33:  mov    %eax,(%esp)
085317b0 +0x0f36:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
085317b5 +0x0f3b:  movl   $0x14,0x8(%esp)
085317bd +0x0f43:  mov    %ebx,0x4(%esp)
085317c1 +0x0f47:  mov    %eax,(%esp)
085317c4 +0x0f4a:  call   0833b606 <_ZN13user_creature12CCreatureMgr18DeleteCreatureItemEii>  ; user_creature::CCreatureMgr::DeleteCreatureItem(int, int)
085317c9 +0x0f4f:  mov    -0x64(%ebp),%ebx
085317cc +0x0f52:  mov    -0x44(%ebp),%edx
085317cf +0x0f55:  mov    0x8(%ebp),%ecx
085317d2 +0x0f58:  mov    %edx,%eax
085317d4 +0x0f5a:  shl    $0x3,%eax
085317d7 +0x0f5d:  add    %edx,%eax
085317d9 +0x0f5f:  shl    $0x3,%eax
085317dc +0x0f62:  imul   $0x798,%ebx,%edx
085317e2 +0x0f68:  add    %edx,%eax
085317e4 +0x0f6a:  lea    (%ecx,%eax,1),%eax
085317e7 +0x0f6d:  add    $0x30,%eax
085317ea +0x0f70:  movzbl 0xa(%eax),%eax
085317ee +0x0f74:  movzbl %al,%ebx
085317f1 +0x0f77:  mov    -0x64(%ebp),%ecx
085317f4 +0x0f7a:  mov    -0x44(%ebp),%edx
085317f7 +0x0f7d:  mov    %edx,%eax
085317f9 +0x0f7f:  shl    $0x3,%eax
085317fc +0x0f82:  add    %edx,%eax
085317fe +0x0f84:  shl    $0x3,%eax
08531801 +0x0f87:  imul   $0x798,%ecx,%edx
08531807 +0x0f8d:  add    %edx,%eax
08531809 +0x0f8f:  add    $0x30,%eax
0853180c +0x0f92:  add    0x8(%ebp),%eax
0853180f +0x0f95:  add    $0x9,%eax
08531812 +0x0f98:  mov    %eax,(%esp)
08531815 +0x0f9b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0853181a +0x0fa0:  mov    %eax,%ecx
0853181c +0x0fa2:  mov    -0x64(%ebp),%edi
0853181f +0x0fa5:  mov    -0x44(%ebp),%edx
08531822 +0x0fa8:  mov    0x8(%ebp),%esi
08531825 +0x0fab:  mov    %edx,%eax
08531827 +0x0fad:  shl    $0x3,%eax
0853182a +0x0fb0:  add    %edx,%eax
0853182c +0x0fb2:  shl    $0x3,%eax
0853182f +0x0fb5:  imul   $0x798,%edi,%edx
08531835 +0x0fbb:  add    %edx,%eax
08531837 +0x0fbd:  lea    (%esi,%eax,1),%eax
0853183a +0x0fc0:  add    $0x30,%eax
0853183d +0x0fc3:  mov    0xb(%eax),%eax
08531840 +0x0fc6:  mov    -0x64(%ebp),%esi
08531843 +0x0fc9:  mov    0x8(%ebp),%edx
08531846 +0x0fcc:  add    $0x8,%esi
08531849 +0x0fcf:  mov    (%edx,%esi,4),%edx
0853184c +0x0fd2:  add    $0x79700,%edx
08531852 +0x0fd8:  movl   $0x14,0x18(%esp)
0853185a +0x0fe0:  mov    %ebx,0x14(%esp)
0853185e +0x0fe4:  movl   $0x0,0x10(%esp)
08531866 +0x0fec:  mov    %ecx,0xc(%esp)
0853186a +0x0ff0:  mov    %eax,0x8(%esp)
0853186e +0x0ff4:  movl   $0x3,0x4(%esp)
08531876 +0x0ffc:  mov    %edx,(%esp)
08531879 +0x0fff:  call   08684f40 <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason>  ; cUserHistoryLog::CreatureItemDel(INVEN_TYPE, int, int, int, int, eItemDelReason)
0853187e +0x1004:  jmp    08531a48 <+0x11ce>
08531883 +0x1009:  mov    -0x64(%ebp),%ecx
08531886 +0x100c:  mov    -0x44(%ebp),%edx
08531889 +0x100f:  mov    %edx,%eax
0853188b +0x1011:  shl    $0x3,%eax
0853188e +0x1014:  add    %edx,%eax
08531890 +0x1016:  shl    $0x3,%eax
08531893 +0x1019:  imul   $0x798,%ecx,%edx
08531899 +0x101f:  add    %edx,%eax
0853189b +0x1021:  add    $0x30,%eax
0853189e +0x1024:  add    0x8(%ebp),%eax
085318a1 +0x1027:  add    $0x9,%eax
085318a4 +0x102a:  mov    %eax,(%esp)
085318a7 +0x102d:  call   081201dc <_Z26IsTradeLimitAttachTypeItemRK10Inven_Item>  ; IsTradeLimitAttachTypeItem(Inven_Item const&)
085318ac +0x1032:  test   %al,%al
085318ae +0x1034:  je     0853193e <+0x10c4>
085318b4 +0x103a:  mov    -0x64(%ebp),%ecx
085318b7 +0x103d:  mov    -0x44(%ebp),%edx
085318ba +0x1040:  mov    %edx,%eax
085318bc +0x1042:  shl    $0x3,%eax
085318bf +0x1045:  add    %edx,%eax
085318c1 +0x1047:  shl    $0x3,%eax
085318c4 +0x104a:  imul   $0x798,%ecx,%edx
085318ca +0x1050:  add    %edx,%eax
085318cc +0x1052:  add    $0x30,%eax
085318cf +0x1055:  add    0x8(%ebp),%eax
085318d2 +0x1058:  add    $0x9,%eax
085318d5 +0x105b:  mov    %eax,(%esp)
085318d8 +0x105e:  call   0812013c <_Z23DecreaseTradeLimitCountR10Inven_Item>  ; DecreaseTradeLimitCount(Inven_Item&)
085318dd +0x1063:  mov    -0x64(%ebp),%ebx
085318e0 +0x1066:  mov    -0x44(%ebp),%edx
085318e3 +0x1069:  mov    0x8(%ebp),%ecx
085318e6 +0x106c:  mov    %edx,%eax
085318e8 +0x106e:  shl    $0x3,%eax
085318eb +0x1071:  add    %edx,%eax
085318ed +0x1073:  shl    $0x3,%eax
085318f0 +0x1076:  imul   $0x798,%ebx,%edx
085318f6 +0x107c:  add    %edx,%eax
085318f8 +0x107e:  lea    (%ecx,%eax,1),%eax
085318fb +0x1081:  add    $0x30,%eax
085318fe +0x1084:  mov    0xb(%eax),%eax
08531901 +0x1087:  mov    -0x64(%ebp),%ecx
08531904 +0x108a:  mov    0x8(%ebp),%edx
08531907 +0x108d:  add    $0x8,%ecx
0853190a +0x1090:  mov    (%edx,%ecx,4),%edx
0853190d +0x1093:  add    $0x79700,%edx
08531913 +0x1099:  movl   $0x2,0x14(%esp)
0853191b +0x10a1:  movl   $0xffffffff,0x10(%esp)
08531923 +0x10a9:  mov    %eax,0xc(%esp)
08531927 +0x10ad:  mov    -0x44(%ebp),%eax
0853192a +0x10b0:  mov    %eax,0x8(%esp)
0853192e +0x10b4:  movl   $0x1,0x4(%esp)
08531936 +0x10bc:  mov    %edx,(%esp)
08531939 +0x10bf:  call   08686d54 <_ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii>  ; cUserHistoryLog::ChangeItemLimitCount(int, int, int, int, int)
0853193e +0x10c4:  mov    -0x64(%ebp),%esi
08531941 +0x10c7:  mov    -0x44(%ebp),%ebx
08531944 +0x10ca:  mov    $0x1,%eax
08531949 +0x10cf:  mov    %eax,%edx
0853194b +0x10d1:  sub    -0x64(%ebp),%edx
0853194e +0x10d4:  mov    0x8(%ebp),%eax
08531951 +0x10d7:  add    $0x8,%edx
08531954 +0x10da:  mov    (%eax,%edx,4),%eax
08531957 +0x10dd:  mov    %eax,(%esp)
0853195a +0x10e0:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0853195f +0x10e5:  mov    %eax,%edx
08531961 +0x10e7:  movl   $0x1,0x4c(%esp)
08531969 +0x10ef:  movl   $0x1,0x48(%esp)
08531971 +0x10f7:  movl   $0x1,0x44(%esp)
08531979 +0x10ff:  mov    0x8(%ebp),%ecx
0853197c +0x1102:  mov    %ebx,%eax
0853197e +0x1104:  shl    $0x3,%eax
08531981 +0x1107:  add    %ebx,%eax
08531983 +0x1109:  shl    $0x3,%eax
08531986 +0x110c:  imul   $0x798,%esi,%ebx
0853198c +0x1112:  add    %ebx,%eax
0853198e +0x1114:  lea    (%ecx,%eax,1),%eax
08531991 +0x1117:  add    $0x30,%eax
08531994 +0x111a:  mov    0x9(%eax),%ecx
08531997 +0x111d:  mov    %ecx,0x4(%esp)
0853199b +0x1121:  mov    0xd(%eax),%ecx
0853199e +0x1124:  mov    %ecx,0x8(%esp)
085319a2 +0x1128:  mov    0x11(%eax),%ecx
085319a5 +0x112b:  mov    %ecx,0xc(%esp)
085319a9 +0x112f:  mov    0x15(%eax),%ecx
085319ac +0x1132:  mov    %ecx,0x10(%esp)
085319b0 +0x1136:  mov    0x19(%eax),%ecx
085319b3 +0x1139:  mov    %ecx,0x14(%esp)
085319b7 +0x113d:  mov    0x1d(%eax),%ecx
085319ba +0x1140:  mov    %ecx,0x18(%esp)
085319be +0x1144:  mov    0x21(%eax),%ecx
085319c1 +0x1147:  mov    %ecx,0x1c(%esp)
085319c5 +0x114b:  mov    0x25(%eax),%ecx
085319c8 +0x114e:  mov    %ecx,0x20(%esp)
085319cc +0x1152:  mov    0x29(%eax),%ecx
085319cf +0x1155:  mov    %ecx,0x24(%esp)
085319d3 +0x1159:  mov    0x2d(%eax),%ecx
085319d6 +0x115c:  mov    %ecx,0x28(%esp)
085319da +0x1160:  mov    0x31(%eax),%ecx
085319dd +0x1163:  mov    %ecx,0x2c(%esp)
085319e1 +0x1167:  mov    0x35(%eax),%ecx
085319e4 +0x116a:  mov    %ecx,0x30(%esp)
085319e8 +0x116e:  mov    0x39(%eax),%ecx
085319eb +0x1171:  mov    %ecx,0x34(%esp)
085319ef +0x1175:  mov    0x3d(%eax),%ecx
085319f2 +0x1178:  mov    %ecx,0x38(%esp)
085319f6 +0x117c:  mov    0x41(%eax),%ecx
085319f9 +0x117f:  mov    %ecx,0x3c(%esp)
085319fd +0x1183:  movzbl 0x45(%eax),%eax
08531a01 +0x1187:  mov    %al,0x40(%esp)
08531a05 +0x118b:  mov    %edx,(%esp)
08531a08 +0x118e:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08531a0d +0x1193:  mov    %eax,-0xac(%ebp)
08531a13 +0x1199:  mov    $0x1,%eax
08531a18 +0x119e:  sub    -0x64(%ebp),%eax
08531a1b +0x11a1:  add    $0x8,%eax
08531a1e +0x11a4:  shl    $0x2,%eax
08531a21 +0x11a7:  add    0x8(%ebp),%eax
08531a24 +0x11aa:  mov    %eax,0x4(%esp)
08531a28 +0x11ae:  lea    -0xc4(%ebp),%eax
08531a2e +0x11b4:  mov    %eax,(%esp)
08531a31 +0x11b7:  call   085321cc <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x22a>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x22a
08531a36 +0x11bc:  lea    -0xac(%ebp),%edx
08531a3c +0x11c2:  mov    %edx,0x4(%esp)
08531a40 +0x11c6:  mov    %eax,(%esp)
08531a43 +0x11c9:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08531a48 +0x11ce:  mov    -0xac(%ebp),%eax
08531a4e +0x11d4:  test   %eax,%eax
08531a50 +0x11d6:  jns    08531ae0 <+0x1266>
08531a56 +0x11dc:  mov    $0x1,%eax
08531a5b +0x11e1:  mov    %eax,%edx
08531a5d +0x11e3:  sub    -0x64(%ebp),%edx
08531a60 +0x11e6:  mov    0x8(%ebp),%eax
08531a63 +0x11e9:  add    $0x8,%edx
08531a66 +0x11ec:  mov    (%eax,%edx,4),%eax
08531a69 +0x11ef:  mov    %eax,(%esp)
08531a6c +0x11f2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08531a71 +0x11f7:  mov    %eax,%ebx
08531a73 +0x11f9:  movl   $0x5,0xc(%esp)
08531a7b +0x1201:  movl   $0xce5,0x8(%esp)
08531a83 +0x1209:  movl   $&_ZZN11CTradeSpace13proceed_tradeEvE19__PRETTY_FUNCTION__,0x4(%esp)
08531a8b +0x1211:  lea    -0x80(%ebp),%eax
08531a8e +0x1214:  mov    %eax,(%esp)
08531a91 +0x1217:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08531a96 +0x121c:  mov    %ebx,0x8(%esp)
08531a9a +0x1220:  movl   $"insert_item(INVEN_TYPE_INVENTORY) fail - fatal! %d",0x4(%esp)
08531aa2 +0x1228:  lea    -0x80(%ebp),%eax
08531aa5 +0x122b:  mov    %eax,(%esp)
08531aa8 +0x122e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08531aad +0x1233:  mov    -0x64(%ebp),%ecx
08531ab0 +0x1236:  mov    -0x44(%ebp),%edx
08531ab3 +0x1239:  mov    %edx,%eax
08531ab5 +0x123b:  shl    $0x3,%eax
08531ab8 +0x123e:  add    %edx,%eax
08531aba +0x1240:  shl    $0x3,%eax
08531abd +0x1243:  imul   $0x798,%ecx,%edx
08531ac3 +0x1249:  add    %edx,%eax
08531ac5 +0x124b:  add    $0x30,%eax
08531ac8 +0x124e:  add    0x8(%ebp),%eax
08531acb +0x1251:  add    $0x9,%eax
08531ace +0x1254:  mov    %eax,(%esp)
08531ad1 +0x1257:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08531ad6 +0x125c:  mov    $0x0,%ebx
08531adb +0x1261:  jmp    08531ef5 <+0x167b>
08531ae0 +0x1266:  mov    -0x64(%ebp),%ecx
08531ae3 +0x1269:  mov    -0x44(%ebp),%edx
08531ae6 +0x126c:  mov    %edx,%eax
08531ae8 +0x126e:  shl    $0x3,%eax
08531aeb +0x1271:  add    %edx,%eax
08531aed +0x1273:  shl    $0x3,%eax
08531af0 +0x1276:  imul   $0x798,%ecx,%edx
08531af6 +0x127c:  add    %edx,%eax
08531af8 +0x127e:  add    $0x30,%eax
08531afb +0x1281:  add    0x8(%ebp),%eax
08531afe +0x1284:  add    $0x9,%eax
08531b01 +0x1287:  mov    %eax,(%esp)
08531b04 +0x128a:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08531b09 +0x128f:  mov    %eax,%ecx
08531b0b +0x1291:  mov    -0x64(%ebp),%esi
08531b0e +0x1294:  mov    -0x44(%ebp),%edx
08531b11 +0x1297:  mov    0x8(%ebp),%ebx
08531b14 +0x129a:  mov    %edx,%eax
08531b16 +0x129c:  shl    $0x3,%eax
08531b19 +0x129f:  add    %edx,%eax
08531b1b +0x12a1:  shl    $0x3,%eax
08531b1e +0x12a4:  imul   $0x798,%esi,%edx
08531b24 +0x12aa:  add    %edx,%eax
08531b26 +0x12ac:  lea    (%ebx,%eax,1),%eax
08531b29 +0x12af:  add    $0x30,%eax
08531b2c +0x12b2:  mov    0xb(%eax),%eax
08531b2f +0x12b5:  mov    %eax,%edx
08531b31 +0x12b7:  mov    -0x64(%ebp),%ebx
08531b34 +0x12ba:  mov    0x8(%ebp),%eax
08531b37 +0x12bd:  add    $0x8,%ebx
08531b3a +0x12c0:  mov    (%eax,%ebx,4),%eax
08531b3d +0x12c3:  mov    0x796f8(%eax),%eax
08531b43 +0x12c9:  mov    %ecx,0x8(%esp)
08531b47 +0x12cd:  mov    %edx,0x4(%esp)
08531b4b +0x12d1:  mov    %eax,(%esp)
08531b4e +0x12d4:  call   084ba0e8 <_ZN10HistoryLog12WriteTradeUpEP8_IO_FILEii>  ; HistoryLog::WriteTradeUp(_IO_FILE*, int, int)
08531b53 +0x12d9:  mov    -0x64(%ebp),%ecx
08531b56 +0x12dc:  mov    -0x44(%ebp),%edx
08531b59 +0x12df:  mov    %edx,%eax
08531b5b +0x12e1:  shl    $0x3,%eax
08531b5e +0x12e4:  add    %edx,%eax
08531b60 +0x12e6:  shl    $0x3,%eax
08531b63 +0x12e9:  imul   $0x798,%ecx,%edx
08531b69 +0x12ef:  add    %edx,%eax
08531b6b +0x12f1:  add    $0x30,%eax
08531b6e +0x12f4:  add    0x8(%ebp),%eax
08531b71 +0x12f7:  add    $0x9,%eax
08531b74 +0x12fa:  mov    %eax,(%esp)
08531b77 +0x12fd:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08531b7c +0x1302:  mov    %eax,%ecx
08531b7e +0x1304:  mov    -0x64(%ebp),%esi
08531b81 +0x1307:  mov    -0x44(%ebp),%edx
08531b84 +0x130a:  mov    0x8(%ebp),%ebx
08531b87 +0x130d:  mov    %edx,%eax
08531b89 +0x130f:  shl    $0x3,%eax
08531b8c +0x1312:  add    %edx,%eax
08531b8e +0x1314:  shl    $0x3,%eax
08531b91 +0x1317:  imul   $0x798,%esi,%edx
08531b97 +0x131d:  add    %edx,%eax
08531b99 +0x131f:  lea    (%ebx,%eax,1),%eax
08531b9c +0x1322:  add    $0x30,%eax
08531b9f +0x1325:  mov    0xb(%eax),%eax
08531ba2 +0x1328:  mov    %eax,%edx
08531ba4 +0x132a:  mov    $0x1,%eax
08531ba9 +0x132f:  mov    %eax,%ebx
08531bab +0x1331:  sub    -0x64(%ebp),%ebx
08531bae +0x1334:  mov    0x8(%ebp),%eax
08531bb1 +0x1337:  add    $0x8,%ebx
08531bb4 +0x133a:  mov    (%eax,%ebx,4),%eax
08531bb7 +0x133d:  mov    0x796f8(%eax),%eax
08531bbd +0x1343:  mov    %ecx,0x8(%esp)
08531bc1 +0x1347:  mov    %edx,0x4(%esp)
08531bc5 +0x134b:  mov    %eax,(%esp)
08531bc8 +0x134e:  call   084ba12e <_ZN10HistoryLog14WriteTradeDownEP8_IO_FILEii>  ; HistoryLog::WriteTradeDown(_IO_FILE*, int, int)
08531bcd +0x1353:  mov    -0x64(%ebp),%ecx
08531bd0 +0x1356:  mov    -0x44(%ebp),%edx
08531bd3 +0x1359:  mov    %edx,%eax
08531bd5 +0x135b:  shl    $0x3,%eax
08531bd8 +0x135e:  add    %edx,%eax
08531bda +0x1360:  shl    $0x3,%eax
08531bdd +0x1363:  imul   $0x798,%ecx,%edx
08531be3 +0x1369:  add    %edx,%eax
08531be5 +0x136b:  add    $0x30,%eax
08531be8 +0x136e:  add    0x8(%ebp),%eax
08531beb +0x1371:  add    $0x9,%eax
08531bee +0x1374:  mov    %eax,(%esp)
08531bf1 +0x1377:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08531bf6 +0x137c:  mov    -0x64(%ebp),%edx
08531bf9 +0x137f:  lea    -0xa8(%ebp),%ecx
08531bff +0x1385:  mov    %edx,%eax
08531c01 +0x1387:  add    %eax,%eax
08531c03 +0x1389:  add    %edx,%eax
08531c05 +0x138b:  shl    $0x2,%eax
08531c08 +0x138e:  lea    (%ecx,%eax,1),%edx
08531c0b +0x1391:  mov    -0x44(%ebp),%eax
08531c0e +0x1394:  mov    %eax,0x4(%esp)
08531c12 +0x1398:  mov    %edx,(%esp)
08531c15 +0x139b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08531c1a +0x13a0:  mov    -0xac(%ebp),%ecx
08531c20 +0x13a6:  mov    -0x64(%ebp),%edx
08531c23 +0x13a9:  lea    -0xa8(%ebp),%ebx
08531c29 +0x13af:  mov    %edx,%eax
08531c2b +0x13b1:  add    %eax,%eax
08531c2d +0x13b3:  add    %edx,%eax
08531c2f +0x13b5:  shl    $0x2,%eax
08531c32 +0x13b8:  lea    (%ebx,%eax,1),%eax
08531c35 +0x13bb:  mov    %ecx,0x4(%esp)
08531c39 +0x13bf:  mov    %eax,(%esp)
08531c3c +0x13c2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08531c41 +0x13c7:  addl   $0x1,-0x44(%ebp)
08531c45 +0x13cb:  cmpl   $0x1a,-0x44(%ebp)
08531c49 +0x13cf:  setle  %al
08531c4c +0x13d2:  test   %al,%al
08531c4e +0x13d4:  jne    08531150 <+0x8d6>
08531c54 +0x13da:  mov    -0x64(%ebp),%edx
08531c57 +0x13dd:  lea    -0xa8(%ebp),%ecx
08531c5d +0x13e3:  mov    %edx,%eax
08531c5f +0x13e5:  add    %eax,%eax
08531c61 +0x13e7:  add    %edx,%eax
08531c63 +0x13e9:  shl    $0x2,%eax
08531c66 +0x13ec:  lea    (%ecx,%eax,1),%eax
08531c69 +0x13ef:  movl   $0x1,0x4(%esp)
08531c71 +0x13f7:  mov    %eax,(%esp)
08531c74 +0x13fa:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08531c79 +0x13ff:  addl   $0x1,-0x64(%ebp)
08531c7d +0x1403:  cmpl   $0x1,-0x64(%ebp)
08531c81 +0x1407:  setle  %al
08531c84 +0x140a:  test   %al,%al
08531c86 +0x140c:  jne    08530ade <+0x264>
08531c8c +0x1412:  movl   $0x0,-0x64(%ebp)
08531c93 +0x1419:  jmp    08531ce8 <+0x146e>
08531c95 +0x141b:  mov    -0x64(%ebp),%edx
08531c98 +0x141e:  lea    -0xa8(%ebp),%ecx
08531c9e +0x1424:  mov    %edx,%eax
08531ca0 +0x1426:  add    %eax,%eax
08531ca2 +0x1428:  add    %edx,%eax
08531ca4 +0x142a:  shl    $0x2,%eax
08531ca7 +0x142d:  lea    (%ecx,%eax,1),%edx
08531caa +0x1430:  mov    $0x1,%eax
08531caf +0x1435:  mov    %eax,%ecx
08531cb1 +0x1437:  sub    -0x64(%ebp),%ecx
08531cb4 +0x143a:  mov    0x8(%ebp),%eax
08531cb7 +0x143d:  add    $0x8,%ecx
08531cba +0x1440:  mov    (%eax,%ecx,4),%eax
08531cbd +0x1443:  mov    %edx,0x4(%esp)
08531cc1 +0x1447:  mov    %eax,(%esp)
08531cc4 +0x144a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08531cc9 +0x144f:  mov    $0x1,%eax
08531cce +0x1454:  mov    %eax,%edx
08531cd0 +0x1456:  sub    -0x64(%ebp),%edx
08531cd3 +0x1459:  mov    0x8(%ebp),%eax
08531cd6 +0x145c:  add    $0x8,%edx
08531cd9 +0x145f:  mov    (%eax,%edx,4),%eax
08531cdc +0x1462:  mov    %eax,(%esp)
08531cdf +0x1465:  call   0853209a <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0xf8>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0xf8
08531ce4 +0x146a:  addl   $0x1,-0x64(%ebp)
08531ce8 +0x146e:  cmpl   $0x1,-0x64(%ebp)
08531cec +0x1472:  setle  %al
08531cef +0x1475:  test   %al,%al
08531cf1 +0x1477:  jne    08531c95 <+0x141b>
08531cf3 +0x1479:  lea    -0xe0(%ebp),%eax
08531cf9 +0x147f:  lea    -0xc4(%ebp),%edx
08531cff +0x1485:  mov    %edx,0x4(%esp)
08531d03 +0x1489:  mov    %eax,(%esp)
08531d06 +0x148c:  call   08532318 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x376>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x376
08531d0b +0x1491:  sub    $0x4,%esp
08531d0e +0x1494:  jmp    08531de3 <+0x1569>
08531d13 +0x1499:  lea    -0xe0(%ebp),%eax
08531d19 +0x149f:  mov    %eax,(%esp)
08531d1c +0x14a2:  call   08532396 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x3f4>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x3f4
08531d21 +0x14a7:  mov    (%eax),%eax
08531d23 +0x14a9:  mov    %eax,-0x24(%ebp)
08531d26 +0x14ac:  cmpl   $0x0,-0x24(%ebp)
08531d2a +0x14b0:  jne    08531d36 <+0x14bc>
08531d2c +0x14b2:  mov    $0x0,%ebx
08531d31 +0x14b7:  jmp    08531ef5 <+0x167b>
08531d36 +0x14bc:  lea    -0xe0(%ebp),%eax
08531d3c +0x14c2:  mov    %eax,(%esp)
08531d3f +0x14c5:  call   08532396 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x3f4>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x3f4
08531d44 +0x14ca:  add    $0x4,%eax
08531d47 +0x14cd:  mov    %eax,-0x20(%ebp)
08531d4a +0x14d0:  lea    -0xe4(%ebp),%eax
08531d50 +0x14d6:  mov    -0x20(%ebp),%edx
08531d53 +0x14d9:  mov    %edx,0x4(%esp)
08531d57 +0x14dd:  mov    %eax,(%esp)
08531d5a +0x14e0:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08531d5f +0x14e5:  sub    $0x4,%esp
08531d62 +0x14e8:  jmp    08531da7 <+0x152d>
08531d64 +0x14ea:  lea    -0xe4(%ebp),%eax
08531d6a +0x14f0:  mov    %eax,(%esp)
08531d6d +0x14f3:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
08531d72 +0x14f8:  mov    (%eax),%eax
08531d74 +0x14fa:  mov    %eax,-0x1c(%ebp)
08531d77 +0x14fd:  mov    -0x1c(%ebp),%eax
08531d7a +0x1500:  mov    %eax,0xc(%esp)
08531d7e +0x1504:  movl   $0x0,0x8(%esp)
08531d86 +0x150c:  movl   $0x1,0x4(%esp)
08531d8e +0x1514:  mov    -0x24(%ebp),%eax
08531d91 +0x1517:  mov    %eax,(%esp)
08531d94 +0x151a:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08531d99 +0x151f:  lea    -0xe4(%ebp),%eax
08531d9f +0x1525:  mov    %eax,(%esp)
08531da2 +0x1528:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
08531da7 +0x152d:  lea    -0x6c(%ebp),%eax
08531daa +0x1530:  mov    -0x20(%ebp),%edx
08531dad +0x1533:  mov    %edx,0x4(%esp)
08531db1 +0x1537:  mov    %eax,(%esp)
08531db4 +0x153a:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08531db9 +0x153f:  sub    $0x4,%esp
08531dbc +0x1542:  lea    -0x6c(%ebp),%eax
08531dbf +0x1545:  mov    %eax,0x4(%esp)
08531dc3 +0x1549:  lea    -0xe4(%ebp),%eax
08531dc9 +0x154f:  mov    %eax,(%esp)
08531dcc +0x1552:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08531dd1 +0x1557:  test   %al,%al
08531dd3 +0x1559:  jne    08531d64 <+0x14ea>
08531dd5 +0x155b:  lea    -0xe0(%ebp),%eax
08531ddb +0x1561:  mov    %eax,(%esp)
08531dde +0x1564:  call   08532378 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x3d6>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x3d6
08531de3 +0x1569:  lea    -0x70(%ebp),%eax
08531de6 +0x156c:  lea    -0xc4(%ebp),%edx
08531dec +0x1572:  mov    %edx,0x4(%esp)
08531df0 +0x1576:  mov    %eax,(%esp)
08531df3 +0x1579:  call   0853233e <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x39c>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x39c
08531df8 +0x157e:  sub    $0x4,%esp
08531dfb +0x1581:  lea    -0x70(%ebp),%eax
08531dfe +0x1584:  mov    %eax,0x4(%esp)
08531e02 +0x1588:  lea    -0xe0(%ebp),%eax
08531e08 +0x158e:  mov    %eax,(%esp)
08531e0b +0x1591:  call   08532364 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x3c2>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x3c2
08531e10 +0x1596:  test   %al,%al
08531e12 +0x1598:  jne    08531d13 <+0x1499>
08531e18 +0x159e:  movl   $0x0,-0x64(%ebp)
08531e1f +0x15a5:  jmp    08531ec7 <+0x164d>
08531e24 +0x15aa:  mov    $0x1,%eax
08531e29 +0x15af:  sub    -0x64(%ebp),%eax
08531e2c +0x15b2:  mov    -0x88(%ebp,%eax,4),%ebx
08531e33 +0x15b9:  mov    $0x1,%eax
08531e38 +0x15be:  sub    -0x64(%ebp),%eax
08531e3b +0x15c1:  mov    -0x90(%ebp,%eax,4),%ecx
08531e42 +0x15c8:  mov    -0x64(%ebp),%eax
08531e45 +0x15cb:  mov    -0x88(%ebp,%eax,4),%edx
08531e4c +0x15d2:  mov    -0x64(%ebp),%eax
08531e4f +0x15d5:  mov    -0x90(%ebp,%eax,4),%eax
08531e56 +0x15dc:  mov    -0x64(%ebp),%edi
08531e59 +0x15df:  mov    0x8(%ebp),%esi
08531e5c +0x15e2:  add    $0x8,%edi
08531e5f +0x15e5:  mov    (%esi,%edi,4),%esi
08531e62 +0x15e8:  add    $0x79700,%esi
08531e68 +0x15ee:  mov    %ebx,0x14(%esp)
08531e6c +0x15f2:  mov    %ecx,0x10(%esp)
08531e70 +0x15f6:  mov    %edx,0xc(%esp)
08531e74 +0x15fa:  mov    %eax,0x8(%esp)
08531e78 +0x15fe:  movl   $0x2,0x4(%esp)
08531e80 +0x1606:  mov    %esi,(%esp)
08531e83 +0x1609:  call   0868507c <_ZN15cUserHistoryLog8TradeEndE15eTradeEndReasoniiii>  ; cUserHistoryLog::TradeEnd(eTradeEndReason, int, int, int, int)
08531e88 +0x160e:  mov    $0x1,%eax
08531e8d +0x1613:  sub    -0x64(%ebp),%eax
08531e90 +0x1616:  mov    -0x88(%ebp,%eax,4),%edx
08531e97 +0x161d:  mov    -0x64(%ebp),%eax
08531e9a +0x1620:  mov    -0x88(%ebp,%eax,4),%eax
08531ea1 +0x1627:  mov    -0x64(%ebp),%ebx
08531ea4 +0x162a:  mov    0x8(%ebp),%ecx
08531ea7 +0x162d:  add    $0x8,%ebx
08531eaa +0x1630:  mov    (%ecx,%ebx,4),%ecx
08531ead +0x1633:  add    $0x8e980,%ecx
08531eb3 +0x1639:  mov    %edx,0x8(%esp)
08531eb7 +0x163d:  mov    %eax,0x4(%esp)
08531ebb +0x1641:  mov    %ecx,(%esp)
08531ebe +0x1644:  call   08287df2 <_ZN16Secu_GoldControl13TradeCompleteEii>  ; Secu_GoldControl::TradeComplete(int, int)
08531ec3 +0x1649:  addl   $0x1,-0x64(%ebp)
08531ec7 +0x164d:  cmpl   $0x1,-0x64(%ebp)
08531ecb +0x1651:  setle  %al
08531ece +0x1654:  test   %al,%al
08531ed0 +0x1656:  jne    08531e24 <+0x15aa>
08531ed6 +0x165c:  mov    $0x1,%ebx
08531edb +0x1661:  jmp    08531ef5 <+0x167b>
08531edd +0x1663:  mov    %edx,%ebx
08531edf +0x1665:  mov    %eax,%esi
08531ee1 +0x1667:  lea    -0xc4(%ebp),%eax
08531ee7 +0x166d:  mov    %eax,(%esp)
08531eea +0x1670:  call   08532112 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x170>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x170
08531eef +0x1675:  mov    %esi,%eax
08531ef1 +0x1677:  mov    %ebx,%edx
08531ef3 +0x1679:  jmp    08531f05 <+0x168b>
08531ef5 +0x167b:  lea    -0xc4(%ebp),%eax
08531efb +0x1681:  mov    %eax,(%esp)
08531efe +0x1684:  call   08532112 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x170>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x170
08531f03 +0x1689:  jmp    08531f35 <+0x16bb>
08531f05 +0x168b:  mov    %edx,%esi
08531f07 +0x168d:  mov    %eax,%edi
08531f09 +0x168f:  lea    -0xa8(%ebp),%eax
08531f0f +0x1695:  lea    0x18(%eax),%ebx
08531f12 +0x1698:  lea    -0xa8(%ebp),%eax
08531f18 +0x169e:  cmp    %eax,%ebx
08531f1a +0x16a0:  je     08531f29 <+0x16af>
08531f1c +0x16a2:  sub    $0xc,%ebx
08531f1f +0x16a5:  mov    %ebx,(%esp)
08531f22 +0x16a8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08531f27 +0x16ad:  jmp    08531f12 <+0x1698>
08531f29 +0x16af:  mov    %edi,%eax
08531f2b +0x16b1:  mov    %esi,%edx
08531f2d +0x16b3:  mov    %eax,(%esp)
08531f30 +0x16b6:  call   08ae3750 <_Unwind_Resume>
08531f35 +0x16bb:  lea    -0xa8(%ebp),%eax
08531f3b +0x16c1:  lea    0x18(%eax),%esi
08531f3e +0x16c4:  lea    -0xa8(%ebp),%eax
08531f44 +0x16ca:  cmp    %eax,%esi
08531f46 +0x16cc:  je     08531f55 <+0x16db>
08531f48 +0x16ce:  sub    $0xc,%esi
08531f4b +0x16d1:  mov    %esi,(%esp)
08531f4e +0x16d4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08531f53 +0x16d9:  jmp    08531f3e <+0x16c4>
08531f55 +0x16db:  mov    %ebx,%eax
08531f57 +0x16dd:  lea    -0xc(%ebp),%esp
08531f5a +0x16e0:  add    $0x0,%esp
08531f5d +0x16e3:  pop    %ebx
08531f5e +0x16e4:  pop    %esi
08531f5f +0x16e5:  pop    %edi
08531f60 +0x16e6:  pop    %ebp
08531f61 +0x16e7:  ret
```

## 反编译 C

```c
// CTradeSpace::proceed_trade @ 0x853087a

/* CTradeSpace::proceed_trade() */

undefined4 __thiscall CTradeSpace::proceed_trade(CTradeSpace *this)

{
  CTradeSpace CVar1;
  char cVar2;
  SIG_SAVE_GOLD_ZERO_TRADE_LOG SVar3;
  uchar uVar4;
  bool bVar5;
  CHades *this_00;
  uint uVar6;
  uint uVar7;
  Secu_AccountHacking *pSVar8;
  CInventory *pCVar9;
  undefined4 uVar10;
  CHackAnalyzer *pCVar11;
  Stream *pSVar12;
  CStreamGuard *pCVar13;
  char *pcVar14;
  CGameManager *this_01;
  uint uVar15;
  CAvatarItemMgr *this_02;
  CCreatureMgr *pCVar16;
  int iVar17;
  vector<int,std::allocator<int>> *this_03;
  int *piVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  PacketGuard *pPVar23;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_e8 [4];
  map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
  local_e4 [4];
  CStreamGuard local_e0 [8];
  char local_d8 [16];
  map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
  local_c8 [24];
  int local_b0;
  PacketGuard local_ac [24];
  int local_94 [4];
  cMyTrace local_84 [16];
  map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
  local_74 [4];
  __normal_iterator local_70 [4];
  int local_6c;
  int local_68;
  CUserCharacInfo *local_64;
  CUser *local_60;
  int local_5c;
  int local_58;
  CUser *local_54;
  CUser *local_50;
  SIG_SAVE_GOLD_ZERO_TRADE_LOG *local_4c;
  int local_48;
  CAuctionAveragePrice *local_44;
  Inven_Item *local_40;
  int local_3c;
  CTradeSpace *local_38;
  Avatar_Item *local_34;
  int local_30;
  int local_2c;
  CUser *local_28;
  int local_24;
  undefined4 local_20;
  
  cVar2 = IsLocked(this);
  if (cVar2 == '\x01') {
    cVar2 = checkTrade(this);
    if (cVar2 == '\x01') {
      local_94[2] = 0;
      local_94[3] = 0;
      local_94[0] = 0;
      local_94[1] = 0;
      pPVar23 = local_ac;
      for (iVar22 = 1; iVar22 != -1; iVar22 = iVar22 + -1) {
                    /* try { // try from 085308f8 to 085308fc has its CatchHandler @ 0853090f */
        PacketGuard::PacketGuard(pPVar23);
        pPVar23 = pPVar23 + 0xc;
      }
      local_6c = 0;
      local_b0 = 0;
      local_68 = 0;
                    /* try { // try from 08530972 to 08530976 has its CatchHandler @ 08531f05 */
      std::
      map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
      ::map(local_c8);
      for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
        local_64 = *(CUserCharacInfo **)(this + (local_68 + 8) * 4);
        local_60 = *(CUser **)(this + (9 - local_68) * 4);
        this_00 = (CHades *)CUser::getHades(local_60);
                    /* try { // try from 085309c0 to 08530e80 has its CatchHandler @ 08531edd */
        XNuclear::CHades::GetIP(this_00,local_d8);
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_64);
        uVar6 = CInventory::get_money(pCVar9);
        uVar15 = *(uint *)(this + (local_68 + 0x3d8) * 4);
        uVar7 = CUser::get_acc_id(local_60);
        pSVar8 = (Secu_AccountHacking *)CUser::getAcccountHackInfo((CUser *)local_64);
        Secu_AccountHacking::sendGold(pSVar8,(char *)0x0,uVar7,uVar15,uVar6,'\0',local_d8);
        for (local_5c = 3; local_5c < 0x1b; local_5c = local_5c + 1) {
          uVar15 = *(uint *)(this + local_5c * 0x48 + (1 - local_68) * 0x798 + 0x3b);
          pSVar8 = (Secu_AccountHacking *)CUser::getAcccountHackInfo((CUser *)local_64);
          cVar2 = Secu_AccountHacking::isAvatar(pSVar8,uVar15);
          if (cVar2 != '\0') {
            uVar15 = CUser::get_acc_id(local_60);
            pSVar8 = (Secu_AccountHacking *)CUser::getAcccountHackInfo((CUser *)local_64);
            Secu_AccountHacking::sendAvatar(pSVar8,(char *)0x0,uVar15);
          }
        }
      }
      for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
        local_6c = 0;
        InterfacePacketBuf::clear((InterfacePacketBuf *)(local_ac + local_68 * 0xc));
        InterfacePacketBuf::put_header((InterfacePacketBuf *)(local_ac + local_68 * 0xc),0,0x12);
        for (local_58 = 3; local_58 < 0x1b; local_58 = local_58 + 1) {
          if (*(int *)(this + local_58 * 0x48 + local_68 * 0x798 + 0x3b) != 0) {
            local_6c = local_6c + 1;
          }
        }
        if (*(int *)(this + (local_68 + 0x3d8) * 4) < 1) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_ac + local_68 * 0xc),local_6c);
        }
        else {
          local_6c = local_6c + 1;
          InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_ac + local_68 * 0xc),local_6c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_ac + local_68 * 0xc),0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)(local_ac + local_68 * 0xc),0);
          if (*(int *)(this + (9 - local_68) * 4) != 0) {
            uVar21 = *(undefined4 *)(this + (local_68 + 0x3d8) * 4);
            pCVar9 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW
                               (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
            CInventory::gain_money(pCVar9,(char)uVar21,1,1,0);
          }
          if (*(int *)(this + (local_68 + 0x3d8) * 4) !=
              (*(int *)(this + (local_68 + 0x3d8) * 4) / 10000) * 10000) {
            iVar22 = CUser::get_acc_id(*(CUser **)(this + (local_68 + 8) * 4));
            uVar10 = CUser::SetETC(*(CUser **)(this + (9 - local_68) * 4),0x2c4,iVar22);
            uVar21 = *(undefined4 *)(this + (9 - local_68) * 4);
            pCVar11 = (CHackAnalyzer *)
                      CUser::getHackAnalyzer(*(CUser **)(this + (9 - local_68) * 4));
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar11,(char)uVar21,0x2c4,1,uVar10,0);
          }
          cVar2 = CUser::isHackUser(*(CUser **)(this + (local_68 + 8) * 4));
          if (cVar2 == '\0') {
            cVar2 = CUser::isHackUserTimer(*(CUser **)(this + (local_68 + 8) * 4));
            if (cVar2 != '\0') goto LAB_08530d60;
LAB_08530d7a:
            bVar5 = false;
          }
          else {
LAB_08530d60:
            if (*(int *)(this + (local_68 + 0x3d8) * 4) == 0) goto LAB_08530d7a;
            bVar5 = true;
          }
          if (bVar5) {
            iVar22 = *(int *)(this + (local_68 + 0x3d8) * 4);
            uVar21 = CUser::get_acc_id(*(CUser **)(this + (local_68 + 8) * 4));
            CUser::gainMoneyFromHackUser
                      (*(uint *)(this + (9 - local_68) * 4),CONCAT44(iVar22,uVar21),iVar22 >> 0x1f,1
                      );
          }
          if ((*(int *)(this + (local_68 + 8) * 4) == 0) ||
             (*(int *)(this + (9 - local_68) * 4) == 0)) {
LAB_08530e32:
            bVar5 = false;
          }
          else {
            iVar22 = CUserCharacInfo::getCurCharacMoney
                               (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
            if (iVar22 != 0) goto LAB_08530e32;
            bVar5 = true;
          }
          if (bVar5) {
            local_54 = *(CUser **)(this + (9 - local_68) * 4);
            local_50 = *(CUser **)(this + (local_68 + 8) * 4);
            pSVar12 = (Stream *)
                      StreamPool::Acquire(GlobalData::s_stream_pool,"item_trade.cpp",0xc51);
            CStreamGuard::CStreamGuard(local_e0,pSVar12,true);
            pCVar13 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
                    /* try { // try from 08530eb4 to 0853106e has its CatchHandler @ 08531071 */
            CStreamGuard::operator<<(pCVar13,0xa1);
            pCVar13 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
            CStreamGuard::operator<<(pCVar13,-1);
            pCVar13 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
            local_4c = CStreamGuard::GetInBuffer<SIG_SAVE_GOLD_ZERO_TRADE_LOG>(pCVar13);
            uVar21 = CUser::get_acc_id(local_54);
            *(undefined4 *)local_4c = uVar21;
            pcVar14 = (char *)CNetwork<4096,450000>::get_str_ip
                                        ((CNetwork<4096,450000> *)(local_54 + 0xe0));
            strncpy((char *)(local_4c + 0x72),pcVar14,0x10);
            CNetwork<4096,450000>::GetPeerIP2
                      ((CNetwork<4096,450000> *)(local_54 + 0xe0),(char *)(local_4c + 0x86),0x14);
            SVar3 = (SIG_SAVE_GOLD_ZERO_TRADE_LOG)
                    CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(local_54 + 0xe0));
            local_4c[0x9a] = SVar3;
            uVar21 = CUser::get_acc_id(local_50);
            *(undefined4 *)(local_4c + 4) = uVar21;
            pcVar14 = (char *)CNetwork<4096,450000>::get_str_ip
                                        ((CNetwork<4096,450000> *)(local_50 + 0xe0));
            strncpy((char *)(local_4c + 8),pcVar14,0x10);
            CNetwork<4096,450000>::GetPeerIP2
                      ((CNetwork<4096,450000> *)(local_50 + 0xe0),(char *)(local_4c + 0x1c),0x14);
            SVar3 = (SIG_SAVE_GOLD_ZERO_TRADE_LOG)
                    CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(local_50 + 0xe0));
            local_4c[0x30] = SVar3;
            pcVar14 = (char *)CNetwork<4096,450000>::get_mac_addr
                                        ((CNetwork<4096,450000> *)(local_54 + 0xe0));
            strncpy((char *)(local_4c + 0x9b),pcVar14,0x41);
            pcVar14 = (char *)CNetwork<4096,450000>::get_mac_addr
                                        ((CNetwork<4096,450000> *)(local_50 + 0xe0));
            strncpy((char *)(local_4c + 0x31),pcVar14,0x41);
            *(undefined4 *)(local_4c + 0xdc) = *(undefined4 *)(this + (local_68 + 0x3d8) * 4);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_e0);
                    /* try { // try from 08531095 to 08531ec2 has its CatchHandler @ 08531edd */
            CStreamGuard::~CStreamGuard(local_e0);
          }
          *(undefined4 *)(this + (local_68 + 0x3d8) * 4) = 0;
          HistoryLog::WriteTradeUp
                    (*(_IO_FILE **)(*(int *)(this + (local_68 + 8) * 4) + 0x796f8),0,
                     *(int *)(this + (local_68 + 0x3d8) * 4));
          HistoryLog::WriteTradeDown
                    (*(_IO_FILE **)(*(int *)(this + (9 - local_68) * 4) + 0x796f8),0,
                     *(int *)(this + (local_68 + 0x3d8) * 4));
        }
        for (local_48 = 3; local_48 < 0x1b; local_48 = local_48 + 1) {
          if ((*(int *)(this + (9 - local_68) * 4) != 0) &&
             (*(int *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x3b) != 0)) {
            this_01 = (CGameManager *)G_CGameManager();
            local_44 = (CAuctionAveragePrice *)CGameManager::GetAuctionAveragePriceManager(this_01);
            if (local_44 != (CAuctionAveragePrice *)0x0) {
              local_40 = (Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39);
              uVar4 = Inven_Item::GetUpgrade(local_40);
              local_3c = CAuctionAveragePrice::GetAveragePrice
                                   (local_44,*(int *)(local_40 + 2),uVar4);
              if ((local_40[1] == (Inven_Item)0x2) || (local_40[1] == (Inven_Item)0x3)) {
                local_3c = *(int *)(local_40 + 7) * local_3c;
              }
              local_94[local_68] = local_94[local_68] + local_3c;
            }
            iVar17 = local_48;
            iVar22 = local_68;
            if (this[local_48 * 0x48 + local_68 * 0x798 + 0x3a] == (CTradeSpace)0x8) {
              uVar21 = CUserCharacInfo::getCurCharacInvenW
                                 (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
              iVar22 = iVar17 * 0x48 + iVar22 * 0x798;
              iVar22 = CInventory::insertAvatarIntoInventory
                                 (uVar21,(char)*(undefined4 *)(this + iVar22 + 0x39),
                                  *(undefined4 *)(this + iVar22 + 0x3d),
                                  *(undefined4 *)(this + iVar22 + 0x41),
                                  *(undefined4 *)(this + iVar22 + 0x45),
                                  *(undefined4 *)(this + iVar22 + 0x49),
                                  *(undefined4 *)(this + iVar22 + 0x4d),
                                  *(undefined4 *)(this + iVar22 + 0x51),
                                  *(undefined4 *)(this + iVar22 + 0x55),
                                  *(undefined4 *)(this + iVar22 + 0x59),
                                  *(undefined4 *)(this + iVar22 + 0x5d),
                                  *(undefined4 *)(this + iVar22 + 0x61),
                                  *(undefined4 *)(this + iVar22 + 0x65),
                                  *(undefined4 *)(this + iVar22 + 0x69),
                                  *(undefined4 *)(this + iVar22 + 0x6d),
                                  *(undefined4 *)(this + iVar22 + 0x71),this[iVar22 + 0x75],1,0);
              local_b0 = iVar22;
              if (-1 < iVar22) {
                local_38 = this + local_48 * 0x48 + local_68 * 0x798 + 0x30;
                uVar15 = CUserCharacInfo::getCurCharacNo
                                   (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
                _SaveAvatarItemOwnerChange
                          (this,*(uint *)(local_38 + 0x10),*(uint *)(local_38 + 4),uVar15,
                           (uchar)iVar22);
                uVar15 = CUserCharacInfo::getCurCharacNo
                                   (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
                DB_InsertCeraItemHistory::makeRequest
                          (*(int *)(local_38 + 0x10),*(uint *)(local_38 + 4),uVar15,'\x02');
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
                iVar22 = CInventory::GetAvatarItemMgrW(pCVar9);
                local_34 = (Avatar_Item *)WongWork::CAvatarItemMgr::EraseAvatarItem(iVar22);
                iVar22 = *(int *)(local_38 + 0x10);
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
                this_02 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar9);
                WongWork::CAvatarItemMgr::AddAvatarItem(this_02,iVar22,local_34);
                uVar21 = WongWork::Avatar_Item::GetIPGAgencyNo(local_34);
                cUserHistoryLog::AvatarItemDel
                          ((cUserHistoryLog *)(*(int *)(this + (local_68 + 8) * 4) + 0x79700),
                           (char)*(undefined4 *)(local_38 + 0xb),*(undefined4 *)(local_38 + 0x10),
                           uVar21,0);
                uVar21 = WongWork::Avatar_Item::GetIPGAgencyNo(local_34);
                cUserHistoryLog::AvatarItemAdd
                          ((cUserHistoryLog *)(*(int *)(this + (9 - local_68) * 4) + 0x79700),
                           (char)*(undefined4 *)(local_38 + 0xb),*(undefined4 *)(local_38 + 0x10),
                           uVar21,1);
              }
            }
            else if (this[local_48 * 0x48 + local_68 * 0x798 + 0x38] == (CTradeSpace)0x7) {
              uVar21 = CUserCharacInfo::getCurCharacInvenW
                                 (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
              iVar22 = iVar17 * 0x48 + iVar22 * 0x798;
              local_b0 = CInventory::insertItemIntoInventory
                                   (uVar21,(char)*(undefined4 *)(this + iVar22 + 0x39),
                                    *(undefined4 *)(this + iVar22 + 0x3d),
                                    *(undefined4 *)(this + iVar22 + 0x41),
                                    *(undefined4 *)(this + iVar22 + 0x45),
                                    *(undefined4 *)(this + iVar22 + 0x49),
                                    *(undefined4 *)(this + iVar22 + 0x4d),
                                    *(undefined4 *)(this + iVar22 + 0x51),
                                    *(undefined4 *)(this + iVar22 + 0x55),
                                    *(undefined4 *)(this + iVar22 + 0x59),
                                    *(undefined4 *)(this + iVar22 + 0x5d),
                                    *(undefined4 *)(this + iVar22 + 0x61),
                                    *(undefined4 *)(this + iVar22 + 0x65),
                                    *(undefined4 *)(this + iVar22 + 0x69),
                                    *(undefined4 *)(this + iVar22 + 0x6d),
                                    *(undefined4 *)(this + iVar22 + 0x71),this[iVar22 + 0x75],0x1a,0
                                    ,1);
              if (-1 < local_b0) {
                if (this[local_48 * 0x48 + local_68 * 0x798 + 0x3a] == (CTradeSpace)0x5) {
                  pCVar9 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW
                                     (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
                  iVar22 = CInventory::GetCreatureMgrW(pCVar9);
                  iVar22 = user_creature::CCreatureMgr::FindCreatureItem(iVar22);
                  if (iVar22 == 0) {
                    uVar21 = 0;
                    goto LAB_08531ef5;
                  }
                }
                piVar18 = (int *)CUserCharacInfo::getCurCharacR
                                           (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
                local_30 = *piVar18;
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
                pCVar16 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar9);
                local_2c = user_creature::CCreatureMgr::GetCreatureItemSize(pCVar16);
                iVar22 = local_b0;
                local_2c = local_2c + *(int *)(this + (local_68 + 0x3d8) * 4 + 8);
                iVar17 = local_48 * 0x48;
                iVar20 = local_68 * 0x798;
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
                pCVar16 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar9);
                user_creature::CCreatureMgr::ChangeOwner
                          (pCVar16,(Inven_Item *)(this + iVar17 + iVar20 + 0x39),iVar22,0x1a,
                           local_30,local_2c);
                *(int *)(this + (-local_68 + 0x3d9) * 4 + 8) =
                     *(int *)(this + (-local_68 + 0x3d9) * 4 + 8) + 1;
                iVar22 = Inven_Item::get_add_info
                                   ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39)
                                   );
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW
                                   (*(CUserCharacInfo **)(this + (local_68 + 8) * 4));
                iVar17 = CInventory::GetCreatureMgrW(pCVar9);
                user_creature::CCreatureMgr::DeleteCreatureItem(iVar17,iVar22);
                CVar1 = this[local_48 * 0x48 + local_68 * 0x798 + 0x3a];
                uVar21 = Inven_Item::get_add_info
                                   ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39)
                                   );
                cUserHistoryLog::CreatureItemDel
                          ((cUserHistoryLog *)(*(int *)(this + (local_68 + 8) * 4) + 0x79700),3,
                           *(undefined4 *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x3b),uVar21,
                           0,CVar1,0x14);
              }
            }
            else {
              cVar2 = IsTradeLimitAttachTypeItem
                                ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
              if (cVar2 != '\0') {
                DecreaseTradeLimitCount
                          ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
                cUserHistoryLog::ChangeItemLimitCount
                          ((cUserHistoryLog *)(*(int *)(this + (local_68 + 8) * 4) + 0x79700),1,
                           local_48,*(int *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x3b),-1,2)
                ;
              }
              iVar17 = local_48;
              iVar22 = local_68;
              uVar21 = CUserCharacInfo::getCurCharacInvenW
                                 (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
              iVar22 = iVar17 * 0x48 + iVar22 * 0x798;
              local_b0 = CInventory::insertItemIntoInventory
                                   (uVar21,(char)*(undefined4 *)(this + iVar22 + 0x39),
                                    *(undefined4 *)(this + iVar22 + 0x3d),
                                    *(undefined4 *)(this + iVar22 + 0x41),
                                    *(undefined4 *)(this + iVar22 + 0x45),
                                    *(undefined4 *)(this + iVar22 + 0x49),
                                    *(undefined4 *)(this + iVar22 + 0x4d),
                                    *(undefined4 *)(this + iVar22 + 0x51),
                                    *(undefined4 *)(this + iVar22 + 0x55),
                                    *(undefined4 *)(this + iVar22 + 0x59),
                                    *(undefined4 *)(this + iVar22 + 0x5d),
                                    *(undefined4 *)(this + iVar22 + 0x61),
                                    *(undefined4 *)(this + iVar22 + 0x65),
                                    *(undefined4 *)(this + iVar22 + 0x69),
                                    *(undefined4 *)(this + iVar22 + 0x6d),
                                    *(undefined4 *)(this + iVar22 + 0x71),this[iVar22 + 0x75],1,1,1)
              ;
              this_03 = (vector<int,std::allocator<int>> *)
                        std::
                        map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
                        ::operator[](local_c8,(CUser **)(this + (9 - local_68) * 4));
              std::vector<int,std::allocator<int>>::push_back(this_03,&local_b0);
            }
            if (local_b0 < 0) {
              uVar21 = CUserCharacInfo::getCurCharacNo
                                 (*(CUserCharacInfo **)(this + (9 - local_68) * 4));
              cMyTrace::cMyTrace(local_84,"bool CTradeSpace::proceed_trade()",0xce5,5);
              cMyTrace::operator()
                        (local_84,"insert_item(INVEN_TYPE_INVENTORY) fail - fatal! %d",0xbc,uVar21);
              Inven_Item::reset((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
              uVar21 = 0;
              goto LAB_08531ef5;
            }
            iVar22 = Inven_Item::get_add_info
                               ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
            HistoryLog::WriteTradeUp
                      (*(_IO_FILE **)(*(int *)(this + (local_68 + 8) * 4) + 0x796f8),
                       *(int *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x3b),iVar22);
            iVar22 = Inven_Item::get_add_info
                               ((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
            HistoryLog::WriteTradeDown
                      (*(_IO_FILE **)(*(int *)(this + (9 - local_68) * 4) + 0x796f8),
                       *(int *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x3b),iVar22);
            Inven_Item::reset((Inven_Item *)(this + local_48 * 0x48 + local_68 * 0x798 + 0x39));
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)(local_ac + local_68 * 0xc),local_48);
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)(local_ac + local_68 * 0xc),local_b0);
          }
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)(local_ac + local_68 * 0xc),true);
      }
      for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
        CUser::Send(*(CUser **)(this + (9 - local_68) * 4),local_ac + local_68 * 0xc);
        CUser::incTradeCount(*(CUser **)(this + (9 - local_68) * 4));
      }
      std::
      map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
      ::begin(local_e4);
      while( true ) {
        std::
        map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
        ::end(local_74);
        cVar2 = std::_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>
                ::operator!=((_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>
                              *)local_e4,(_Rb_tree_iterator *)local_74);
        if (cVar2 == '\0') break;
        piVar18 = (int *)std::
                         _Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>
                         ::operator*((_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>
                                      *)local_e4);
        local_28 = (CUser *)*piVar18;
        if (local_28 == (CUser *)0x0) {
          uVar21 = 0;
          goto LAB_08531ef5;
        }
        local_24 = std::
                   _Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>::
                   operator*((_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>
                              *)local_e4);
        local_24 = local_24 + 4;
        std::vector<int,std::allocator<int>>::begin();
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar5 = __gnu_cxx::operator!=(local_e8,local_70);
          if (!bVar5) break;
          puVar19 = (undefined4 *)
                    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_e8);
          local_20 = *puVar19;
          CUser::SendUpdateItemList(local_28,1,0,local_20);
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_e8);
        }
        std::_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>::
        operator++((_Rb_tree_iterator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>> *
                   )local_e4);
      }
      for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
        cUserHistoryLog::TradeEnd
                  ((cUserHistoryLog *)(*(int *)(this + (local_68 + 8) * 4) + 0x79700),2,
                   local_94[local_68],local_94[local_68 + 2],local_94[1 - local_68],
                   local_94[3 - local_68]);
        Secu_GoldControl::TradeComplete
                  ((Secu_GoldControl *)(*(int *)(this + (local_68 + 8) * 4) + 0x8e980),
                   local_94[local_68 + 2],local_94[3 - local_68]);
      }
      uVar21 = 1;
LAB_08531ef5:
                    /* try { // try from 08531efe to 08531f02 has its CatchHandler @ 08531f05 */
      std::
      map<CUser*,std::vector<int,std::allocator<int>>,std::less<CUser*>,std::allocator<std::pair<CUser*const,std::vector<int,std::allocator<int>>>>>
      ::~map(local_c8);
      pPVar23 = (PacketGuard *)local_94;
      while (pPVar23 != local_ac) {
        pPVar23 = pPVar23 + -0xc;
        PacketGuard::~PacketGuard(pPVar23);
      }
    }
    else {
      uVar21 = 0;
    }
  }
  else {
    uVar21 = 0;
  }
  return uVar21;
}
```
