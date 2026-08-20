# process

`_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BlueMarbleConfirmInfo` | `0x081e62da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e62da  _ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e62da, 0x081e68c7]
081e62da +0x000:  push   %ebp
081e62db +0x001:  mov    %esp,%ebp
081e62dd +0x003:  push   %edi
081e62de +0x004:  push   %esi
081e62df +0x005:  push   %ebx
081e62e0 +0x006:  sub    $0x4bc,%esp
081e62e6 +0x00c:  mov    0x14(%ebp),%eax
081e62e9 +0x00f:  mov    %eax,-0x30(%ebp)
081e62ec +0x012:  mov    0x10(%ebp),%eax
081e62ef +0x015:  mov    %eax,0x8(%esp)
081e62f3 +0x019:  mov    0xc(%ebp),%eax
081e62f6 +0x01c:  mov    %eax,0x4(%esp)
081e62fa +0x020:  mov    0x8(%ebp),%eax
081e62fd +0x023:  mov    %eax,(%esp)
081e6300 +0x026:  call   081e68c8 <_ZN32Dispatcher_BlueMarbleConfirmInfo11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_BlueMarbleConfirmInfo::check_error(CUser*, MSG_BASE&)
081e6305 +0x02b:  mov    -0x30(%ebp),%edx
081e6308 +0x02e:  mov    %eax,0x4(%edx)
081e630b +0x031:  mov    -0x30(%ebp),%eax
081e630e +0x034:  mov    0x4(%eax),%eax
081e6311 +0x037:  test   %eax,%eax
081e6313 +0x039:  jle    081e631f <+0x45>
081e6315 +0x03b:  mov    $0x0,%eax
081e631a +0x040:  jmp    081e68bd <+0x5e3>
081e631f +0x045:  mov    -0x30(%ebp),%eax
081e6322 +0x048:  mov    0x4(%eax),%eax
081e6325 +0x04b:  test   %eax,%eax
081e6327 +0x04d:  jns    081e6354 <+0x7a>
081e6329 +0x04f:  mov    -0x30(%ebp),%eax
081e632c +0x052:  mov    0x4(%eax),%eax
081e632f +0x055:  movl   $0x0,0xc(%esp)
081e6337 +0x05d:  mov    %eax,0x8(%esp)
081e633b +0x061:  movl   $&_ZZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e6343 +0x069:  movl   $0x611f,(%esp)
081e634a +0x070:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e634f +0x075:  jmp    081e68bd <+0x5e3>
081e6354 +0x07a:  mov    0x10(%ebp),%eax
081e6357 +0x07d:  mov    %eax,-0x2c(%ebp)
081e635a +0x080:  lea    -0x458(%ebp),%ebx
081e6360 +0x086:  mov    $0x0,%eax
081e6365 +0x08b:  mov    $0x100,%edx
081e636a +0x090:  mov    %ebx,%edi
081e636c +0x092:  mov    %edx,%ecx
081e636e +0x094:  rep stos %eax,%es:(%edi)
081e6370 +0x096:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081e6375 +0x09b:  mov    %eax,(%esp)
081e6378 +0x09e:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
081e637d +0x0a3:  mov    %eax,0x8(%esp)
081e6381 +0x0a7:  movl   $"./log/%s/BlueMarbleConfirmInfo",0x4(%esp)
081e6389 +0x0af:  lea    -0x458(%ebp),%eax
081e638f +0x0b5:  mov    %eax,(%esp)
081e6392 +0x0b8:  call   0807e440 <_init+0xd38>
081e6397 +0x0bd:  mov    0xc(%ebp),%eax
081e639a +0x0c0:  mov    %eax,(%esp)
081e639d +0x0c3:  call   080da35e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4fb>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4fb
081e63a2 +0x0c8:  cwtl
081e63a3 +0x0c9:  mov    %eax,-0x494(%ebp)
081e63a9 +0x0cf:  mov    -0x2c(%ebp),%eax
081e63ac +0x0d2:  movzwl 0xe(%eax),%eax
081e63b0 +0x0d6:  cwtl
081e63b1 +0x0d7:  mov    %eax,-0x490(%ebp)
081e63b7 +0x0dd:  mov    0xc(%ebp),%eax
081e63ba +0x0e0:  mov    %eax,(%esp)
081e63bd +0x0e3:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
081e63c2 +0x0e8:  mov    %eax,-0x48c(%ebp)
081e63c8 +0x0ee:  mov    0xc(%ebp),%eax
081e63cb +0x0f1:  mov    %eax,(%esp)
081e63ce +0x0f4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e63d3 +0x0f9:  mov    %eax,%edi
081e63d5 +0x0fb:  movl   $0xffffffff,0x4(%esp)
081e63dd +0x103:  mov    0xc(%ebp),%eax
081e63e0 +0x106:  mov    %eax,(%esp)
081e63e3 +0x109:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081e63e8 +0x10e:  mov    %eax,%esi
081e63ea +0x110:  mov    0xc(%ebp),%eax
081e63ed +0x113:  mov    %eax,(%esp)
081e63f0 +0x116:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e63f5 +0x11b:  movl   $0x0,0x4(%esp)
081e63fd +0x123:  mov    %eax,(%esp)
081e6400 +0x126:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081e6405 +0x12b:  mov    %eax,%ebx
081e6407 +0x12d:  movl   $0x6127,0x8(%esp)
081e640f +0x135:  movl   $&_ZZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e6417 +0x13d:  lea    -0x58(%ebp),%eax
081e641a +0x140:  mov    %eax,(%esp)
081e641d +0x143:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
081e6422 +0x148:  mov    -0x494(%ebp),%eax
081e6428 +0x14e:  mov    %eax,0x20(%esp)
081e642c +0x152:  mov    -0x490(%ebp),%ecx
081e6432 +0x158:  mov    %ecx,0x1c(%esp)
081e6436 +0x15c:  mov    -0x48c(%ebp),%eax
081e643c +0x162:  mov    %eax,0x18(%esp)
081e6440 +0x166:  mov    %edi,0x14(%esp)
081e6444 +0x16a:  mov    %esi,0x10(%esp)
081e6448 +0x16e:  mov    %ebx,0xc(%esp)
081e644c +0x172:  movl   $"Client m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)",0x8(%esp)
081e6454 +0x17a:  lea    -0x458(%ebp),%eax
081e645a +0x180:  mov    %eax,0x4(%esp)
081e645e +0x184:  lea    -0x58(%ebp),%eax
081e6461 +0x187:  mov    %eax,(%esp)
081e6464 +0x18a:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
081e6469 +0x18f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e646e +0x194:  mov    %eax,(%esp)
081e6471 +0x197:  call   08365eea <_ZN12CDataManager19getBlueMarbleScriptEv>  ; CDataManager::getBlueMarbleScript()
081e6476 +0x19c:  mov    0x30(%eax),%eax
081e6479 +0x19f:  mov    %eax,-0x28(%ebp)
081e647c +0x1a2:  movl   $0x0,-0x24(%ebp)
081e6483 +0x1a9:  mov    -0x2c(%ebp),%eax
081e6486 +0x1ac:  movzbl 0xd(%eax),%eax
081e648a +0x1b0:  test   %al,%al
081e648c +0x1b2:  jne    081e67c0 <+0x4e6>
081e6492 +0x1b8:  mov    -0x2c(%ebp),%eax
081e6495 +0x1bb:  movzwl 0xe(%eax),%ebx
081e6499 +0x1bf:  mov    0xc(%ebp),%eax
081e649c +0x1c2:  mov    %eax,(%esp)
081e649f +0x1c5:  call   080da35e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4fb>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4fb
081e64a4 +0x1ca:  cmp    %ax,%bx
081e64a7 +0x1cd:  setne  %al
081e64aa +0x1d0:  test   %al,%al
081e64ac +0x1d2:  je     081e66bf <+0x3e5>
081e64b2 +0x1d8:  mov    -0x2c(%ebp),%eax
081e64b5 +0x1db:  movzwl 0xe(%eax),%eax
081e64b9 +0x1df:  movswl %ax,%ebx
081e64bc +0x1e2:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081e64c1 +0x1e7:  mov    %ebx,0x4(%esp)
081e64c5 +0x1eb:  mov    %eax,(%esp)
081e64c8 +0x1ee:  call   082a239e <_ZN12CGameManager13getBlueMarbleEi>  ; CGameManager::getBlueMarble(int)
081e64cd +0x1f3:  mov    %eax,-0x24(%ebp)
081e64d0 +0x1f6:  cmpl   $0x0,-0x24(%ebp)
081e64d4 +0x1fa:  je     081e65be <+0x2e4>
081e64da +0x200:  mov    0xc(%ebp),%eax
081e64dd +0x203:  mov    %eax,(%esp)
081e64e0 +0x206:  call   080da35e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4fb>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4fb
081e64e5 +0x20b:  cwtl
081e64e6 +0x20c:  mov    %eax,-0x488(%ebp)
081e64ec +0x212:  mov    -0x2c(%ebp),%eax
081e64ef +0x215:  movzwl 0xe(%eax),%eax
081e64f3 +0x219:  cwtl
081e64f4 +0x21a:  mov    %eax,-0x484(%ebp)
081e64fa +0x220:  mov    0xc(%ebp),%eax
081e64fd +0x223:  mov    %eax,(%esp)
081e6500 +0x226:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
081e6505 +0x22b:  mov    %eax,-0x480(%ebp)
081e650b +0x231:  mov    0xc(%ebp),%eax
081e650e +0x234:  mov    %eax,(%esp)
081e6511 +0x237:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e6516 +0x23c:  mov    %eax,%edi
081e6518 +0x23e:  movl   $0xffffffff,0x4(%esp)
081e6520 +0x246:  mov    0xc(%ebp),%eax
081e6523 +0x249:  mov    %eax,(%esp)
081e6526 +0x24c:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081e652b +0x251:  mov    %eax,%esi
081e652d +0x253:  mov    0xc(%ebp),%eax
081e6530 +0x256:  mov    %eax,(%esp)
081e6533 +0x259:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e6538 +0x25e:  movl   $0x0,0x4(%esp)
081e6540 +0x266:  mov    %eax,(%esp)
081e6543 +0x269:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081e6548 +0x26e:  mov    %eax,%ebx
081e654a +0x270:  movl   $0x6135,0x8(%esp)
081e6552 +0x278:  movl   $&_ZZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e655a +0x280:  lea    -0x50(%ebp),%eax
081e655d +0x283:  mov    %eax,(%esp)
081e6560 +0x286:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
081e6565 +0x28b:  mov    -0x488(%ebp),%ecx
081e656b +0x291:  mov    %ecx,0x20(%esp)
081e656f +0x295:  mov    -0x484(%ebp),%eax
081e6575 +0x29b:  mov    %eax,0x1c(%esp)
081e6579 +0x29f:  mov    -0x480(%ebp),%ecx
081e657f +0x2a5:  mov    %ecx,0x18(%esp)
081e6583 +0x2a9:  mov    %edi,0x14(%esp)
081e6587 +0x2ad:  mov    %esi,0x10(%esp)
081e658b +0x2b1:  mov    %ebx,0xc(%esp)
081e658f +0x2b5:  movl   $"OverLap User index different m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)",0x8(%esp)
081e6597 +0x2bd:  lea    -0x458(%ebp),%eax
081e659d +0x2c3:  mov    %eax,0x4(%esp)
081e65a1 +0x2c7:  lea    -0x50(%ebp),%eax
081e65a4 +0x2ca:  mov    %eax,(%esp)
081e65a7 +0x2cd:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
081e65ac +0x2d2:  mov    0xc(%ebp),%eax
081e65af +0x2d5:  mov    %eax,0x4(%esp)
081e65b3 +0x2d9:  mov    -0x24(%ebp),%eax
081e65b6 +0x2dc:  mov    %eax,(%esp)
081e65b9 +0x2df:  call   080d9c12 <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser>  ; BlueMarble::checkBlueMarbleUserConfirm(CUser*)
081e65be +0x2e4:  mov    0xc(%ebp),%eax
081e65c1 +0x2e7:  mov    %eax,(%esp)
081e65c4 +0x2ea:  call   086552e6 <_ZN5CUser13getBlueMarbleEv>  ; CUser::getBlueMarble()
081e65c9 +0x2ef:  mov    %eax,-0x24(%ebp)
081e65cc +0x2f2:  cmpl   $0x0,-0x24(%ebp)
081e65d0 +0x2f6:  je     081e68b8 <+0x5de>
081e65d6 +0x2fc:  mov    0xc(%ebp),%eax
081e65d9 +0x2ff:  mov    %eax,(%esp)
081e65dc +0x302:  call   080da35e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4fb>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4fb
081e65e1 +0x307:  cwtl
081e65e2 +0x308:  mov    %eax,-0x47c(%ebp)
081e65e8 +0x30e:  mov    -0x2c(%ebp),%eax
081e65eb +0x311:  movzwl 0xe(%eax),%eax
081e65ef +0x315:  cwtl
081e65f0 +0x316:  mov    %eax,-0x478(%ebp)
081e65f6 +0x31c:  mov    0xc(%ebp),%eax
081e65f9 +0x31f:  mov    %eax,(%esp)
081e65fc +0x322:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
081e6601 +0x327:  mov    %eax,-0x474(%ebp)
081e6607 +0x32d:  mov    0xc(%ebp),%eax
081e660a +0x330:  mov    %eax,(%esp)
081e660d +0x333:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e6612 +0x338:  mov    %eax,%edi
081e6614 +0x33a:  movl   $0xffffffff,0x4(%esp)
081e661c +0x342:  mov    0xc(%ebp),%eax
081e661f +0x345:  mov    %eax,(%esp)
081e6622 +0x348:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081e6627 +0x34d:  mov    %eax,%esi
081e6629 +0x34f:  mov    0xc(%ebp),%eax
081e662c +0x352:  mov    %eax,(%esp)
081e662f +0x355:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e6634 +0x35a:  movl   $0x0,0x4(%esp)
081e663c +0x362:  mov    %eax,(%esp)
081e663f +0x365:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081e6644 +0x36a:  mov    %eax,%ebx
081e6646 +0x36c:  movl   $0x6140,0x8(%esp)
081e664e +0x374:  movl   $&_ZZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e6656 +0x37c:  lea    -0x48(%ebp),%eax
081e6659 +0x37f:  mov    %eax,(%esp)
081e665c +0x382:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
081e6661 +0x387:  mov    -0x47c(%ebp),%eax
081e6667 +0x38d:  mov    %eax,0x20(%esp)
081e666b +0x391:  mov    -0x478(%ebp),%ecx
081e6671 +0x397:  mov    %ecx,0x1c(%esp)
081e6675 +0x39b:  mov    -0x474(%ebp),%eax
081e667b +0x3a1:  mov    %eax,0x18(%esp)
081e667f +0x3a5:  mov    %edi,0x14(%esp)
081e6683 +0x3a9:  mov    %esi,0x10(%esp)
081e6687 +0x3ad:  mov    %ebx,0xc(%esp)
081e668b +0x3b1:  movl   $"OverLap User index different m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)",0x8(%esp)
081e6693 +0x3b9:  lea    -0x458(%ebp),%eax
081e6699 +0x3bf:  mov    %eax,0x4(%esp)
081e669d +0x3c3:  lea    -0x48(%ebp),%eax
081e66a0 +0x3c6:  mov    %eax,(%esp)
081e66a3 +0x3c9:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
081e66a8 +0x3ce:  mov    0xc(%ebp),%eax
081e66ab +0x3d1:  mov    %eax,0x4(%esp)
081e66af +0x3d5:  mov    -0x24(%ebp),%eax
081e66b2 +0x3d8:  mov    %eax,(%esp)
081e66b5 +0x3db:  call   080d9c12 <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser>  ; BlueMarble::checkBlueMarbleUserConfirm(CUser*)
081e66ba +0x3e0:  jmp    081e68b8 <+0x5de>
081e66bf +0x3e5:  mov    0xc(%ebp),%eax
081e66c2 +0x3e8:  mov    %eax,(%esp)
081e66c5 +0x3eb:  call   086552e6 <_ZN5CUser13getBlueMarbleEv>  ; CUser::getBlueMarble()
081e66ca +0x3f0:  mov    %eax,-0x20(%ebp)
081e66cd +0x3f3:  cmpl   $0x0,-0x20(%ebp)
081e66d1 +0x3f7:  je     081e68b8 <+0x5de>
081e66d7 +0x3fd:  mov    0xc(%ebp),%eax
081e66da +0x400:  mov    %eax,(%esp)
081e66dd +0x403:  call   080da35e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4fb>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4fb
081e66e2 +0x408:  cwtl
081e66e3 +0x409:  mov    %eax,-0x470(%ebp)
081e66e9 +0x40f:  mov    -0x2c(%ebp),%eax
081e66ec +0x412:  movzwl 0xe(%eax),%eax
081e66f0 +0x416:  cwtl
081e66f1 +0x417:  mov    %eax,-0x46c(%ebp)
081e66f7 +0x41d:  mov    0xc(%ebp),%eax
081e66fa +0x420:  mov    %eax,(%esp)
081e66fd +0x423:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
081e6702 +0x428:  mov    %eax,-0x468(%ebp)
081e6708 +0x42e:  mov    0xc(%ebp),%eax
081e670b +0x431:  mov    %eax,(%esp)
081e670e +0x434:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e6713 +0x439:  mov    %eax,%edi
081e6715 +0x43b:  movl   $0xffffffff,0x4(%esp)
081e671d +0x443:  mov    0xc(%ebp),%eax
081e6720 +0x446:  mov    %eax,(%esp)
081e6723 +0x449:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081e6728 +0x44e:  mov    %eax,%esi
081e672a +0x450:  mov    0xc(%ebp),%eax
081e672d +0x453:  mov    %eax,(%esp)
081e6730 +0x456:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e6735 +0x45b:  movl   $0x0,0x4(%esp)
081e673d +0x463:  mov    %eax,(%esp)
081e6740 +0x466:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081e6745 +0x46b:  mov    %eax,%ebx
081e6747 +0x46d:  movl   $0x614d,0x8(%esp)
081e674f +0x475:  movl   $&_ZZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e6757 +0x47d:  lea    -0x40(%ebp),%eax
081e675a +0x480:  mov    %eax,(%esp)
081e675d +0x483:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
081e6762 +0x488:  mov    -0x470(%ebp),%ecx
081e6768 +0x48e:  mov    %ecx,0x20(%esp)
081e676c +0x492:  mov    -0x46c(%ebp),%eax
081e6772 +0x498:  mov    %eax,0x1c(%esp)
081e6776 +0x49c:  mov    -0x468(%ebp),%ecx
081e677c +0x4a2:  mov    %ecx,0x18(%esp)
081e6780 +0x4a6:  mov    %edi,0x14(%esp)
081e6784 +0x4aa:  mov    %esi,0x10(%esp)
081e6788 +0x4ae:  mov    %ebx,0xc(%esp)
081e678c +0x4b2:  movl   $"OverLap User index same m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)",0x8(%esp)
081e6794 +0x4ba:  lea    -0x458(%ebp),%eax
081e679a +0x4c0:  mov    %eax,0x4(%esp)
081e679e +0x4c4:  lea    -0x40(%ebp),%eax
081e67a1 +0x4c7:  mov    %eax,(%esp)
081e67a4 +0x4ca:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
081e67a9 +0x4cf:  mov    0xc(%ebp),%eax
081e67ac +0x4d2:  mov    %eax,0x4(%esp)
081e67b0 +0x4d6:  mov    -0x20(%ebp),%eax
081e67b3 +0x4d9:  mov    %eax,(%esp)
081e67b6 +0x4dc:  call   080d9c12 <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser>  ; BlueMarble::checkBlueMarbleUserConfirm(CUser*)
081e67bb +0x4e1:  jmp    081e68b8 <+0x5de>
081e67c0 +0x4e6:  mov    0xc(%ebp),%eax
081e67c3 +0x4e9:  mov    %eax,(%esp)
081e67c6 +0x4ec:  call   080da35e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4fb>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4fb
081e67cb +0x4f1:  cwtl
081e67cc +0x4f2:  mov    %eax,-0x464(%ebp)
081e67d2 +0x4f8:  mov    -0x2c(%ebp),%eax
081e67d5 +0x4fb:  movzwl 0xe(%eax),%eax
081e67d9 +0x4ff:  cwtl
081e67da +0x500:  mov    %eax,-0x460(%ebp)
081e67e0 +0x506:  mov    0xc(%ebp),%eax
081e67e3 +0x509:  mov    %eax,(%esp)
081e67e6 +0x50c:  call   08690eca <_ZNK5CUser12getMoveSpaceEv>  ; CUser::getMoveSpace() const
081e67eb +0x511:  mov    %eax,-0x45c(%ebp)
081e67f1 +0x517:  mov    0xc(%ebp),%eax
081e67f4 +0x51a:  mov    %eax,(%esp)
081e67f7 +0x51d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e67fc +0x522:  mov    %eax,%edi
081e67fe +0x524:  movl   $0xffffffff,0x4(%esp)
081e6806 +0x52c:  mov    0xc(%ebp),%eax
081e6809 +0x52f:  mov    %eax,(%esp)
081e680c +0x532:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081e6811 +0x537:  mov    %eax,%esi
081e6813 +0x539:  mov    0xc(%ebp),%eax
081e6816 +0x53c:  mov    %eax,(%esp)
081e6819 +0x53f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e681e +0x544:  movl   $0x0,0x4(%esp)
081e6826 +0x54c:  mov    %eax,(%esp)
081e6829 +0x54f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081e682e +0x554:  mov    %eax,%ebx
081e6830 +0x556:  movl   $0x6158,0x8(%esp)
081e6838 +0x55e:  movl   $&_ZZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e6840 +0x566:  lea    -0x38(%ebp),%eax
081e6843 +0x569:  mov    %eax,(%esp)
081e6846 +0x56c:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
081e684b +0x571:  mov    -0x464(%ebp),%eax
081e6851 +0x577:  mov    %eax,0x20(%esp)
081e6855 +0x57b:  mov    -0x460(%ebp),%ecx
081e685b +0x581:  mov    %ecx,0x1c(%esp)
081e685f +0x585:  mov    -0x45c(%ebp),%eax
081e6865 +0x58b:  mov    %eax,0x18(%esp)
081e6869 +0x58f:  mov    %edi,0x14(%esp)
081e686d +0x593:  mov    %esi,0x10(%esp)
081e6871 +0x597:  mov    %ebx,0xc(%esp)
081e6875 +0x59b:  movl   $"Not Exist User m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)",0x8(%esp)
081e687d +0x5a3:  lea    -0x458(%ebp),%eax
081e6883 +0x5a9:  mov    %eax,0x4(%esp)
081e6887 +0x5ad:  lea    -0x38(%ebp),%eax
081e688a +0x5b0:  mov    %eax,(%esp)
081e688d +0x5b3:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
081e6892 +0x5b8:  mov    0xc(%ebp),%eax
081e6895 +0x5bb:  mov    %eax,(%esp)
081e6898 +0x5be:  call   086552e6 <_ZN5CUser13getBlueMarbleEv>  ; CUser::getBlueMarble()
081e689d +0x5c3:  mov    %eax,-0x1c(%ebp)
081e68a0 +0x5c6:  cmpl   $0x0,-0x1c(%ebp)
081e68a4 +0x5ca:  je     081e68b8 <+0x5de>
081e68a6 +0x5cc:  mov    0xc(%ebp),%eax
081e68a9 +0x5cf:  mov    %eax,0x4(%esp)
081e68ad +0x5d3:  mov    -0x1c(%ebp),%eax
081e68b0 +0x5d6:  mov    %eax,(%esp)
081e68b3 +0x5d9:  call   080d9c12 <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser>  ; BlueMarble::checkBlueMarbleUserConfirm(CUser*)
081e68b8 +0x5de:  mov    $0x0,%eax
081e68bd +0x5e3:  add    $0x4bc,%esp
081e68c3 +0x5e9:  pop    %ebx
081e68c4 +0x5ea:  pop    %esi
081e68c5 +0x5eb:  pop    %edi
081e68c6 +0x5ec:  pop    %ebp
081e68c7 +0x5ed:  ret
```

## 反编译 C

```c
// Dispatcher_BlueMarbleConfirmInfo::process @ 0x81e62da

/* Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BlueMarbleConfirmInfo::process
          (Dispatcher_BlueMarbleConfirmInfo *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  CEnvironment *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  CDataManager *this_01;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  char local_45c [1024];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  ParamBase *local_34;
  MSG_BASE *local_30;
  undefined4 local_2c;
  BlueMarble *local_28;
  BlueMarble *local_24;
  BlueMarble *local_20;
  
  bVar10 = 0;
  local_34 = param_3;
  uVar3 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_34 + 4) = uVar3;
  if (*(int *)(local_34 + 4) < 1) {
    if (*(int *)(local_34 + 4) < 0) {
      uVar3 = LineFunc(0x611f,
                       "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_34 + 4),0);
    }
    else {
      local_30 = param_2;
      pcVar9 = local_45c;
      for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
      }
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar3 = CEnvironment::get_file_name(this_00);
      sprintf(local_45c,"./log/%s/BlueMarbleConfirmInfo",uVar3);
      sVar2 = CUser::getBlueMarbleIndex(param_1);
      sVar1 = *(short *)(local_30 + 0xe);
      uVar3 = CUser::getMoveSpace(param_1);
      uVar4 = CUser::get_state(param_1);
      uVar5 = CUser::get_charac_no(param_1,-1);
      uVar6 = CUser::get_acc_id(param_1);
      uVar7 = NumberToString(uVar6,0);
      CMyFileLog::CMyFileLog
                (local_5c,
                 "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                 ,0x6127);
      CMyFileLog::operator()
                (local_5c,local_45c,
                 "Client m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)"
                 ,uVar7,uVar5,uVar4,uVar3,(int)sVar1,(int)sVar2);
      this_01 = (CDataManager *)G_CDataManager();
      iVar8 = CDataManager::getBlueMarbleScript(this_01);
      local_2c = *(undefined4 *)(iVar8 + 0x30);
      local_28 = (BlueMarble *)0x0;
      if (local_30[0xd] == (MSG_BASE)0x0) {
        sVar1 = *(short *)(local_30 + 0xe);
        sVar2 = CUser::getBlueMarbleIndex(param_1);
        if (sVar1 == sVar2) {
          local_24 = (BlueMarble *)CUser::getBlueMarble(param_1);
          if (local_24 != (BlueMarble *)0x0) {
            sVar2 = CUser::getBlueMarbleIndex(param_1);
            sVar1 = *(short *)(local_30 + 0xe);
            uVar3 = CUser::getMoveSpace(param_1);
            uVar4 = CUser::get_state(param_1);
            uVar5 = CUser::get_charac_no(param_1,-1);
            uVar6 = CUser::get_acc_id(param_1);
            uVar7 = NumberToString(uVar6,0);
            CMyFileLog::CMyFileLog
                      (local_44,
                       "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0x614d);
            CMyFileLog::operator()
                      (local_44,local_45c,
                       "OverLap User index same m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)"
                       ,uVar7,uVar5,uVar4,uVar3,(int)sVar1,(int)sVar2);
            BlueMarble::checkBlueMarbleUserConfirm(local_24,param_1);
          }
        }
        else {
          iVar8 = G_CGameManager();
          local_28 = (BlueMarble *)CGameManager::getBlueMarble(iVar8);
          if (local_28 != (BlueMarble *)0x0) {
            sVar2 = CUser::getBlueMarbleIndex(param_1);
            sVar1 = *(short *)(local_30 + 0xe);
            uVar3 = CUser::getMoveSpace(param_1);
            uVar4 = CUser::get_state(param_1);
            uVar5 = CUser::get_charac_no(param_1,-1);
            uVar6 = CUser::get_acc_id(param_1);
            uVar7 = NumberToString(uVar6,0);
            CMyFileLog::CMyFileLog
                      (local_54,
                       "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0x6135);
            CMyFileLog::operator()
                      (local_54,local_45c,
                       "OverLap User index different m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)"
                       ,uVar7,uVar5,uVar4,uVar3,(int)sVar1,(int)sVar2);
            BlueMarble::checkBlueMarbleUserConfirm(local_28,param_1);
          }
          local_28 = (BlueMarble *)CUser::getBlueMarble(param_1);
          if (local_28 != (BlueMarble *)0x0) {
            sVar2 = CUser::getBlueMarbleIndex(param_1);
            sVar1 = *(short *)(local_30 + 0xe);
            uVar3 = CUser::getMoveSpace(param_1);
            uVar4 = CUser::get_state(param_1);
            uVar5 = CUser::get_charac_no(param_1,-1);
            uVar6 = CUser::get_acc_id(param_1);
            uVar7 = NumberToString(uVar6,0);
            CMyFileLog::CMyFileLog
                      (local_4c,
                       "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0x6140);
            CMyFileLog::operator()
                      (local_4c,local_45c,
                       "OverLap User index different m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)"
                       ,uVar7,uVar5,uVar4,uVar3,(int)sVar1,(int)sVar2);
            BlueMarble::checkBlueMarbleUserConfirm(local_28,param_1);
          }
        }
      }
      else {
        sVar2 = CUser::getBlueMarbleIndex(param_1);
        sVar1 = *(short *)(local_30 + 0xe);
        uVar3 = CUser::getMoveSpace(param_1);
        uVar4 = CUser::get_state(param_1);
        uVar5 = CUser::get_charac_no(param_1,-1);
        uVar6 = CUser::get_acc_id(param_1);
        uVar7 = NumberToString(uVar6,0);
        CMyFileLog::CMyFileLog
                  (local_3c,
                   "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                   ,0x6158);
        CMyFileLog::operator()
                  (local_3c,local_45c,
                   "Not Exist User m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)"
                   ,uVar7,uVar5,uVar4,uVar3,(int)sVar1,(int)sVar2);
        local_20 = (BlueMarble *)CUser::getBlueMarble(param_1);
        if (local_20 != (BlueMarble *)0x0) {
          BlueMarble::checkBlueMarbleUserConfirm(local_20,param_1);
        }
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
