# dispatch_sig

`_ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BuyCeraShopItem` | `0x081fd396` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fd396  _ZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x081fd396, 0x081fe4b7]
081fd396 +0x0000:  push   %ebp
081fd397 +0x0001:  mov    %esp,%ebp
081fd399 +0x0003:  push   %edi
081fd39a +0x0004:  push   %esi
081fd39b +0x0005:  push   %ebx
081fd39c +0x0006:  sub    $0x7fbc,%esp
081fd3a2 +0x000c:  mov    0xc(%ebp),%eax
081fd3a5 +0x000f:  mov    %eax,(%esp)
081fd3a8 +0x0012:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fd3ad +0x0017:  movl   $0x0,0x4(%esp)
081fd3b5 +0x001f:  mov    %eax,(%esp)
081fd3b8 +0x0022:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081fd3bd +0x0027:  mov    %eax,%ebx
081fd3bf +0x0029:  movl   $0x0,0xc(%esp)
081fd3c7 +0x0031:  movl   $0x8f66,0x8(%esp)
081fd3cf +0x0039:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd3d7 +0x0041:  lea    -0x74(%ebp),%eax
081fd3da +0x0044:  mov    %eax,(%esp)
081fd3dd +0x0047:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fd3e2 +0x004c:  mov    %ebx,0x8(%esp)
081fd3e6 +0x0050:  movl   $"Dispatcher_BuyCeraShopItem(m_id(%s))",0x4(%esp)
081fd3ee +0x0058:  lea    -0x74(%ebp),%eax
081fd3f1 +0x005b:  mov    %eax,(%esp)
081fd3f4 +0x005e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fd3f9 +0x0063:  cmpl   $0x0,0xc(%ebp)
081fd3fd +0x0067:  je     081fd40e <+0x78>
081fd3ff +0x0069:  mov    0xc(%ebp),%eax
081fd402 +0x006c:  mov    %eax,(%esp)
081fd405 +0x006f:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081fd40a +0x0074:  test   %al,%al
081fd40c +0x0076:  je     081fd415 <+0x7f>
081fd40e +0x0078:  mov    $0x1,%eax
081fd413 +0x007d:  jmp    081fd41a <+0x84>
081fd415 +0x007f:  mov    $0x0,%eax
081fd41a +0x0084:  test   %al,%al
081fd41c +0x0086:  je     081fd428 <+0x92>
081fd41e +0x0088:  mov    $0x0,%ebx
081fd423 +0x008d:  jmp    081fe4aa <+0x1114>
081fd428 +0x0092:  mov    0xc(%ebp),%eax
081fd42b +0x0095:  mov    %eax,(%esp)
081fd42e +0x0098:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081fd433 +0x009d:  cmp    $0x2,%eax
081fd436 +0x00a0:  jle    081fd447 <+0xb1>
081fd438 +0x00a2:  mov    0xc(%ebp),%eax
081fd43b +0x00a5:  mov    %eax,(%esp)
081fd43e +0x00a8:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081fd443 +0x00ad:  test   %eax,%eax
081fd445 +0x00af:  jne    081fd44e <+0xb8>
081fd447 +0x00b1:  mov    $0x1,%eax
081fd44c +0x00b6:  jmp    081fd453 <+0xbd>
081fd44e +0x00b8:  mov    $0x0,%eax
081fd453 +0x00bd:  test   %al,%al
081fd455 +0x00bf:  je     081fd482 <+0xec>
081fd457 +0x00c1:  movl   $0x0,0xc(%esp)
081fd45f +0x00c9:  movl   $0x0,0x8(%esp)
081fd467 +0x00d1:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd46f +0x00d9:  movl   $0x8f7b,(%esp)
081fd476 +0x00e0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fd47b +0x00e5:  mov    %eax,%ebx
081fd47d +0x00e7:  jmp    081fe4aa <+0x1114>
081fd482 +0x00ec:  lea    -0x80(%ebp),%eax
081fd485 +0x00ef:  mov    %eax,(%esp)
081fd488 +0x00f2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081fd48d +0x00f7:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081fd492 +0x00fc:  mov    0xc(%ebp),%edx
081fd495 +0x00ff:  mov    %edx,0x4(%esp)
081fd499 +0x0103:  mov    %eax,(%esp)
081fd49c +0x0106:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081fd4a1 +0x010b:  test   %al,%al
081fd4a3 +0x010d:  je     081fd4f3 <+0x15d>
081fd4a5 +0x010f:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fd4aa +0x0114:  movl   $0x0,0x1c(%esp)
081fd4b2 +0x011c:  movl   $0x1,0x18(%esp)
081fd4ba +0x0124:  movl   $0x1,0x14(%esp)
081fd4c2 +0x012c:  movl   $0x0,0x10(%esp)
081fd4ca +0x0134:  movl   $0x0,0xc(%esp)
081fd4d2 +0x013c:  movl   $0x3c,0x8(%esp)
081fd4da +0x0144:  mov    0xc(%ebp),%edx
081fd4dd +0x0147:  mov    %edx,0x4(%esp)
081fd4e1 +0x014b:  mov    %eax,(%esp)
081fd4e4 +0x014e:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fd4e9 +0x0153:  mov    $0x0,%ebx
081fd4ee +0x0158:  jmp    081fe49f <+0x1109>
081fd4f3 +0x015d:  mov    0xc(%ebp),%eax
081fd4f6 +0x0160:  mov    %eax,(%esp)
081fd4f9 +0x0163:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081fd4fe +0x0168:  test   %al,%al
081fd500 +0x016a:  je     081fd550 <+0x1ba>
081fd502 +0x016c:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fd507 +0x0171:  movl   $0x0,0x1c(%esp)
081fd50f +0x0179:  movl   $0x1,0x18(%esp)
081fd517 +0x0181:  movl   $0x1,0x14(%esp)
081fd51f +0x0189:  movl   $0x0,0x10(%esp)
081fd527 +0x0191:  movl   $0x0,0xc(%esp)
081fd52f +0x0199:  movl   $0x13,0x8(%esp)
081fd537 +0x01a1:  mov    0xc(%ebp),%edx
081fd53a +0x01a4:  mov    %edx,0x4(%esp)
081fd53e +0x01a8:  mov    %eax,(%esp)
081fd541 +0x01ab:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fd546 +0x01b0:  mov    $0x0,%ebx
081fd54b +0x01b5:  jmp    081fe49f <+0x1109>
081fd550 +0x01ba:  lea    -0x4008(%ebp),%eax
081fd556 +0x01c0:  add    $0xd,%eax
081fd559 +0x01c3:  mov    %eax,0x4(%esp)
081fd55d +0x01c7:  mov    0x10(%ebp),%eax
081fd560 +0x01ca:  mov    %eax,(%esp)
081fd563 +0x01cd:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081fd568 +0x01d2:  xor    $0x1,%eax
081fd56b +0x01d5:  test   %al,%al
081fd56d +0x01d7:  je     081fd59a <+0x204>
081fd56f +0x01d9:  movl   $0x0,0xc(%esp)
081fd577 +0x01e1:  movl   $0x0,0x8(%esp)
081fd57f +0x01e9:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd587 +0x01f1:  movl   $0x8fa9,(%esp)
081fd58e +0x01f8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fd593 +0x01fd:  mov    %eax,%ebx
081fd595 +0x01ff:  jmp    081fe49f <+0x1109>
081fd59a +0x0204:  movzwl -0x3ffb(%ebp),%eax
081fd5a1 +0x020b:  test   %ax,%ax
081fd5a4 +0x020e:  js     081fd5b3 <+0x21d>
081fd5a6 +0x0210:  movzwl -0x3ffb(%ebp),%eax
081fd5ad +0x0217:  cmp    $0x1,%ax
081fd5b1 +0x021b:  jle    081fd5de <+0x248>
081fd5b3 +0x021d:  movl   $0x0,0xc(%esp)
081fd5bb +0x0225:  movl   $0x0,0x8(%esp)
081fd5c3 +0x022d:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd5cb +0x0235:  movl   $0x8fad,(%esp)
081fd5d2 +0x023c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fd5d7 +0x0241:  mov    %eax,%ebx
081fd5d9 +0x0243:  jmp    081fe49f <+0x1109>
081fd5de +0x0248:  lea    -0x4008(%ebp),%eax
081fd5e4 +0x024e:  add    $0xf,%eax
081fd5e7 +0x0251:  mov    %eax,0x4(%esp)
081fd5eb +0x0255:  mov    0x10(%ebp),%eax
081fd5ee +0x0258:  mov    %eax,(%esp)
081fd5f1 +0x025b:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081fd5f6 +0x0260:  xor    $0x1,%eax
081fd5f9 +0x0263:  test   %al,%al
081fd5fb +0x0265:  je     081fd628 <+0x292>
081fd5fd +0x0267:  movl   $0x0,0xc(%esp)
081fd605 +0x026f:  movl   $0x0,0x8(%esp)
081fd60d +0x0277:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd615 +0x027f:  movl   $0x8fb7,(%esp)
081fd61c +0x0286:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fd621 +0x028b:  mov    %eax,%ebx
081fd623 +0x028d:  jmp    081fe49f <+0x1109>
081fd628 +0x0292:  movzbl -0x3ff9(%ebp),%eax
081fd62f +0x0299:  cmp    $0x1,%al
081fd631 +0x029b:  jne    081fd6e4 <+0x34e>
081fd637 +0x02a1:  movl   $0x0,-0x84(%ebp)
081fd641 +0x02ab:  lea    -0x84(%ebp),%eax
081fd647 +0x02b1:  mov    %eax,0x4(%esp)
081fd64b +0x02b5:  mov    0x10(%ebp),%eax
081fd64e +0x02b8:  mov    %eax,(%esp)
081fd651 +0x02bb:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081fd656 +0x02c0:  xor    $0x1,%eax
081fd659 +0x02c3:  test   %al,%al
081fd65b +0x02c5:  je     081fd688 <+0x2f2>
081fd65d +0x02c7:  movl   $0x0,0xc(%esp)
081fd665 +0x02cf:  movl   $0x0,0x8(%esp)
081fd66d +0x02d7:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd675 +0x02df:  movl   $0x8fbb,(%esp)
081fd67c +0x02e6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fd681 +0x02eb:  mov    %eax,%ebx
081fd683 +0x02ed:  jmp    081fe49f <+0x1109>
081fd688 +0x02f2:  mov    -0x84(%ebp),%eax
081fd68e +0x02f8:  mov    %eax,0xc(%esp)
081fd692 +0x02fc:  movl   $0x1e,0x8(%esp)
081fd69a +0x0304:  lea    -0x4008(%ebp),%eax
081fd6a0 +0x030a:  add    $0x10,%eax
081fd6a3 +0x030d:  mov    %eax,0x4(%esp)
081fd6a7 +0x0311:  mov    0x10(%ebp),%eax
081fd6aa +0x0314:  mov    %eax,(%esp)
081fd6ad +0x0317:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081fd6b2 +0x031c:  xor    $0x1,%eax
081fd6b5 +0x031f:  test   %al,%al
081fd6b7 +0x0321:  je     081fd6e4 <+0x34e>
081fd6b9 +0x0323:  movl   $0x0,0xc(%esp)
081fd6c1 +0x032b:  movl   $0x0,0x8(%esp)
081fd6c9 +0x0333:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd6d1 +0x033b:  movl   $0x8fbc,(%esp)
081fd6d8 +0x0342:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fd6dd +0x0347:  mov    %eax,%ebx
081fd6df +0x0349:  jmp    081fe49f <+0x1109>
081fd6e4 +0x034e:  movzbl -0x3ff9(%ebp),%eax
081fd6eb +0x0355:  cmp    $0x1,%al
081fd6ed +0x0357:  jne    081fd727 <+0x391>
081fd6ef +0x0359:  movzwl -0x3ffb(%ebp),%eax
081fd6f6 +0x0360:  cmp    $0x1,%ax
081fd6fa +0x0364:  jne    081fd727 <+0x391>
081fd6fc +0x0366:  movl   $0x0,0xc(%esp)
081fd704 +0x036e:  movl   $0x0,0x8(%esp)
081fd70c +0x0376:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd714 +0x037e:  movl   $0x8fc2,(%esp)
081fd71b +0x0385:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fd720 +0x038a:  mov    %eax,%ebx
081fd722 +0x038c:  jmp    081fe49f <+0x1109>
081fd727 +0x0391:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fd72c +0x0396:  mov    %eax,(%esp)
081fd72f +0x0399:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081fd734 +0x039e:  test   %al,%al
081fd736 +0x03a0:  je     081fd7fe <+0x468>
081fd73c +0x03a6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081fd741 +0x03ab:  mov    %eax,(%esp)
081fd744 +0x03ae:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
081fd749 +0x03b3:  cmp    $0xf,%eax
081fd74c +0x03b6:  sete   %al
081fd74f +0x03b9:  test   %al,%al
081fd751 +0x03bb:  je     081fd7b0 <+0x41a>
081fd753 +0x03bd:  movzbl -0x3ff9(%ebp),%eax
081fd75a +0x03c4:  cmp    $0x1,%al
081fd75c +0x03c6:  jne    081fd7fe <+0x468>
081fd762 +0x03cc:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fd767 +0x03d1:  movl   $0x0,0x1c(%esp)
081fd76f +0x03d9:  movl   $0x1,0x18(%esp)
081fd777 +0x03e1:  movl   $0x1,0x14(%esp)
081fd77f +0x03e9:  movl   $0x0,0x10(%esp)
081fd787 +0x03f1:  movl   $0x0,0xc(%esp)
081fd78f +0x03f9:  movl   $0x3c,0x8(%esp)
081fd797 +0x0401:  mov    0xc(%ebp),%edx
081fd79a +0x0404:  mov    %edx,0x4(%esp)
081fd79e +0x0408:  mov    %eax,(%esp)
081fd7a1 +0x040b:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fd7a6 +0x0410:  mov    $0x0,%ebx
081fd7ab +0x0415:  jmp    081fe49f <+0x1109>
081fd7b0 +0x041a:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fd7b5 +0x041f:  movl   $0x0,0x1c(%esp)
081fd7bd +0x0427:  movl   $0x1,0x18(%esp)
081fd7c5 +0x042f:  movl   $0x1,0x14(%esp)
081fd7cd +0x0437:  movl   $0x0,0x10(%esp)
081fd7d5 +0x043f:  movl   $0x0,0xc(%esp)
081fd7dd +0x0447:  movl   $0x3c,0x8(%esp)
081fd7e5 +0x044f:  mov    0xc(%ebp),%edx
081fd7e8 +0x0452:  mov    %edx,0x4(%esp)
081fd7ec +0x0456:  mov    %eax,(%esp)
081fd7ef +0x0459:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fd7f4 +0x045e:  mov    $0x0,%ebx
081fd7f9 +0x0463:  jmp    081fe49f <+0x1109>
081fd7fe +0x0468:  movzbl -0x3ff9(%ebp),%eax
081fd805 +0x046f:  movzbl %al,%eax
081fd808 +0x0472:  mov    %eax,-0x7fa4(%ebp)
081fd80e +0x0478:  mov    0xc(%ebp),%eax
081fd811 +0x047b:  mov    %eax,(%esp)
081fd814 +0x047e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fd819 +0x0483:  mov    %eax,%edi
081fd81b +0x0485:  mov    0xc(%ebp),%eax
081fd81e +0x0488:  mov    %eax,(%esp)
081fd821 +0x048b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081fd826 +0x0490:  mov    %eax,%esi
081fd828 +0x0492:  mov    0xc(%ebp),%eax
081fd82b +0x0495:  mov    %eax,(%esp)
081fd82e +0x0498:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fd833 +0x049d:  movl   $0x0,0x4(%esp)
081fd83b +0x04a5:  mov    %eax,(%esp)
081fd83e +0x04a8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081fd843 +0x04ad:  mov    %eax,%ebx
081fd845 +0x04af:  movl   $0x0,0xc(%esp)
081fd84d +0x04b7:  movl   $0x9004,0x8(%esp)
081fd855 +0x04bf:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd85d +0x04c7:  lea    -0x64(%ebp),%eax
081fd860 +0x04ca:  mov    %eax,(%esp)
081fd863 +0x04cd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fd868 +0x04d2:  mov    -0x7fa4(%ebp),%eax
081fd86e +0x04d8:  mov    %eax,0x14(%esp)
081fd872 +0x04dc:  mov    %edi,0x10(%esp)
081fd876 +0x04e0:  mov    %esi,0xc(%esp)
081fd87a +0x04e4:  mov    %ebx,0x8(%esp)
081fd87e +0x04e8:  movl   $"NEXON BILLING : BuyCeraShopItem m_id(%s), charac_no(%d), charac_name(%s), buytype(%d)",0x4(%esp)
081fd886 +0x04f0:  lea    -0x64(%ebp),%eax
081fd889 +0x04f3:  mov    %eax,(%esp)
081fd88c +0x04f6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fd891 +0x04fb:  lea    -0x4008(%ebp),%eax
081fd897 +0x0501:  add    $0x36,%eax
081fd89a +0x0504:  mov    %eax,0x4(%esp)
081fd89e +0x0508:  mov    0x10(%ebp),%eax
081fd8a1 +0x050b:  mov    %eax,(%esp)
081fd8a4 +0x050e:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081fd8a9 +0x0513:  xor    $0x1,%eax
081fd8ac +0x0516:  test   %al,%al
081fd8ae +0x0518:  jne    081fd8c6 <+0x530>
081fd8b0 +0x051a:  movzbl -0x3fd2(%ebp),%eax
081fd8b7 +0x0521:  test   %al,%al
081fd8b9 +0x0523:  je     081fd8c6 <+0x530>
081fd8bb +0x0525:  movzbl -0x3fd2(%ebp),%eax
081fd8c2 +0x052c:  cmp    $0x23,%al
081fd8c4 +0x052e:  jbe    081fd8cd <+0x537>
081fd8c6 +0x0530:  mov    $0x1,%eax
081fd8cb +0x0535:  jmp    081fd8d2 <+0x53c>
081fd8cd +0x0537:  mov    $0x0,%eax
081fd8d2 +0x053c:  test   %al,%al
081fd8d4 +0x053e:  je     081fd926 <+0x590>
081fd8d6 +0x0540:  mov    -0x3fcf(%ebp),%edx
081fd8dc +0x0546:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fd8e1 +0x054b:  movl   $0x0,0x1c(%esp)
081fd8e9 +0x0553:  movl   $0x1,0x18(%esp)
081fd8f1 +0x055b:  movl   $0x1,0x14(%esp)
081fd8f9 +0x0563:  mov    %edx,0x10(%esp)
081fd8fd +0x0567:  movl   $0x0,0xc(%esp)
081fd905 +0x056f:  movl   $0x1,0x8(%esp)
081fd90d +0x0577:  mov    0xc(%ebp),%edx
081fd910 +0x057a:  mov    %edx,0x4(%esp)
081fd914 +0x057e:  mov    %eax,(%esp)
081fd917 +0x0581:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fd91c +0x0586:  mov    $0x0,%ebx
081fd921 +0x058b:  jmp    081fe49f <+0x1109>
081fd926 +0x0590:  movl   $0x0,-0x40(%ebp)
081fd92d +0x0597:  jmp    081fe1e7 <+0xe51>
081fd932 +0x059c:  mov    -0x40(%ebp),%edx
081fd935 +0x059f:  lea    -0x4008(%ebp),%eax
081fd93b +0x05a5:  imul   $0x1cf,%edx,%edx
081fd941 +0x05ab:  add    $0x30,%edx
081fd944 +0x05ae:  add    %edx,%eax
081fd946 +0x05b0:  add    $0x7,%eax
081fd949 +0x05b3:  mov    %eax,0x4(%esp)
081fd94d +0x05b7:  mov    0x10(%ebp),%eax
081fd950 +0x05ba:  mov    %eax,(%esp)
081fd953 +0x05bd:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081fd958 +0x05c2:  xor    $0x1,%eax
081fd95b +0x05c5:  test   %al,%al
081fd95d +0x05c7:  je     081fd98a <+0x5f4>
081fd95f +0x05c9:  movl   $0x0,0xc(%esp)
081fd967 +0x05d1:  movl   $0x0,0x8(%esp)
081fd96f +0x05d9:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd977 +0x05e1:  movl   $0x9017,(%esp)
081fd97e +0x05e8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fd983 +0x05ed:  mov    %eax,%ebx
081fd985 +0x05ef:  jmp    081fe49f <+0x1109>
081fd98a +0x05f4:  mov    -0x40(%ebp),%edx
081fd98d +0x05f7:  lea    -0x4008(%ebp),%eax
081fd993 +0x05fd:  imul   $0x1cf,%edx,%edx
081fd999 +0x0603:  add    $0x30,%edx
081fd99c +0x0606:  add    %edx,%eax
081fd99e +0x0608:  add    $0x8,%eax
081fd9a1 +0x060b:  mov    %eax,0x4(%esp)
081fd9a5 +0x060f:  mov    0x10(%ebp),%eax
081fd9a8 +0x0612:  mov    %eax,(%esp)
081fd9ab +0x0615:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081fd9b0 +0x061a:  xor    $0x1,%eax
081fd9b3 +0x061d:  test   %al,%al
081fd9b5 +0x061f:  je     081fd9e2 <+0x64c>
081fd9b7 +0x0621:  movl   $0x0,0xc(%esp)
081fd9bf +0x0629:  movl   $0x0,0x8(%esp)
081fd9c7 +0x0631:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd9cf +0x0639:  movl   $0x9018,(%esp)
081fd9d6 +0x0640:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fd9db +0x0645:  mov    %eax,%ebx
081fd9dd +0x0647:  jmp    081fe49f <+0x1109>
081fd9e2 +0x064c:  mov    -0x40(%ebp),%edx
081fd9e5 +0x064f:  lea    -0x4008(%ebp),%eax
081fd9eb +0x0655:  imul   $0x1cf,%edx,%edx
081fd9f1 +0x065b:  add    $0x30,%edx
081fd9f4 +0x065e:  add    %edx,%eax
081fd9f6 +0x0660:  add    $0x9,%eax
081fd9f9 +0x0663:  mov    %eax,0x4(%esp)
081fd9fd +0x0667:  mov    0x10(%ebp),%eax
081fda00 +0x066a:  mov    %eax,(%esp)
081fda03 +0x066d:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081fda08 +0x0672:  xor    $0x1,%eax
081fda0b +0x0675:  test   %al,%al
081fda0d +0x0677:  je     081fda3a <+0x6a4>
081fda0f +0x0679:  movl   $0x0,0xc(%esp)
081fda17 +0x0681:  movl   $0x0,0x8(%esp)
081fda1f +0x0689:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fda27 +0x0691:  movl   $0x9019,(%esp)
081fda2e +0x0698:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fda33 +0x069d:  mov    %eax,%ebx
081fda35 +0x069f:  jmp    081fe49f <+0x1109>
081fda3a +0x06a4:  mov    -0x40(%ebp),%edx
081fda3d +0x06a7:  lea    -0x4008(%ebp),%eax
081fda43 +0x06ad:  imul   $0x1cf,%edx,%edx
081fda49 +0x06b3:  add    $0x30,%edx
081fda4c +0x06b6:  add    %edx,%eax
081fda4e +0x06b8:  add    $0xd,%eax
081fda51 +0x06bb:  mov    %eax,0x4(%esp)
081fda55 +0x06bf:  mov    0x10(%ebp),%eax
081fda58 +0x06c2:  mov    %eax,(%esp)
081fda5b +0x06c5:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081fda60 +0x06ca:  xor    $0x1,%eax
081fda63 +0x06cd:  test   %al,%al
081fda65 +0x06cf:  je     081fdab7 <+0x721>
081fda67 +0x06d1:  mov    -0x3fcf(%ebp),%edx
081fda6d +0x06d7:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fda72 +0x06dc:  movl   $0x0,0x1c(%esp)
081fda7a +0x06e4:  movl   $0x1,0x18(%esp)
081fda82 +0x06ec:  movl   $0x1,0x14(%esp)
081fda8a +0x06f4:  mov    %edx,0x10(%esp)
081fda8e +0x06f8:  movl   $0x0,0xc(%esp)
081fda96 +0x0700:  movl   $0x1,0x8(%esp)
081fda9e +0x0708:  mov    0xc(%ebp),%edx
081fdaa1 +0x070b:  mov    %edx,0x4(%esp)
081fdaa5 +0x070f:  mov    %eax,(%esp)
081fdaa8 +0x0712:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fdaad +0x0717:  mov    $0x0,%ebx
081fdab2 +0x071c:  jmp    081fe49f <+0x1109>
081fdab7 +0x0721:  mov    -0x40(%ebp),%eax
081fdaba +0x0724:  imul   $0x1cf,%eax,%eax
081fdac0 +0x072a:  lea    -0x18(%ebp),%edx
081fdac3 +0x072d:  lea    (%edx,%eax,1),%eax
081fdac6 +0x0730:  sub    $0x3fc0,%eax
081fdacb +0x0735:  movzbl 0xd(%eax),%eax
081fdacf +0x0739:  cmp    $0x23,%al
081fdad1 +0x073b:  jbe    081fdb23 <+0x78d>
081fdad3 +0x073d:  mov    -0x3fcf(%ebp),%edx
081fdad9 +0x0743:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fdade +0x0748:  movl   $0x0,0x1c(%esp)
081fdae6 +0x0750:  movl   $0x1,0x18(%esp)
081fdaee +0x0758:  movl   $0x1,0x14(%esp)
081fdaf6 +0x0760:  mov    %edx,0x10(%esp)
081fdafa +0x0764:  movl   $0x0,0xc(%esp)
081fdb02 +0x076c:  movl   $0x1,0x8(%esp)
081fdb0a +0x0774:  mov    0xc(%ebp),%edx
081fdb0d +0x0777:  mov    %edx,0x4(%esp)
081fdb11 +0x077b:  mov    %eax,(%esp)
081fdb14 +0x077e:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fdb19 +0x0783:  mov    $0x0,%ebx
081fdb1e +0x0788:  jmp    081fe49f <+0x1109>
081fdb23 +0x078d:  mov    -0x40(%ebp),%eax
081fdb26 +0x0790:  imul   $0x1cf,%eax,%eax
081fdb2c +0x0796:  lea    -0x18(%ebp),%ecx
081fdb2f +0x0799:  lea    (%ecx,%eax,1),%eax
081fdb32 +0x079c:  sub    $0x3fc0,%eax
081fdb37 +0x07a1:  movzbl 0x7(%eax),%eax
081fdb3b +0x07a5:  cmp    $0xff,%al
081fdb3d +0x07a7:  jne    081fdc45 <+0x8af>
081fdb43 +0x07ad:  mov    -0x40(%ebp),%eax
081fdb46 +0x07b0:  imul   $0x1cf,%eax,%eax
081fdb4c +0x07b6:  lea    -0x18(%ebp),%edx
081fdb4f +0x07b9:  lea    (%edx,%eax,1),%eax
081fdb52 +0x07bc:  sub    $0x3fc0,%eax
081fdb57 +0x07c1:  movzbl 0xd(%eax),%eax
081fdb5b +0x07c5:  test   %al,%al
081fdb5d +0x07c7:  jne    081fdc45 <+0x8af>
081fdb63 +0x07cd:  mov    -0x40(%ebp),%eax
081fdb66 +0x07d0:  imul   $0x1cf,%eax,%eax
081fdb6c +0x07d6:  lea    -0x18(%ebp),%ecx
081fdb6f +0x07d9:  lea    (%ecx,%eax,1),%eax
081fdb72 +0x07dc:  sub    $0x3fc0,%eax
081fdb77 +0x07e1:  mov    0x9(%eax),%eax
081fdb7a +0x07e4:  mov    %eax,%ebx
081fdb7c +0x07e6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081fdb81 +0x07eb:  mov    %ebx,0x4(%esp)
081fdb85 +0x07ef:  mov    %eax,(%esp)
081fdb88 +0x07f2:  call   0835fde4 <_ZNK12CDataManager9FindGoodsEi>  ; CDataManager::FindGoods(int) const
081fdb8d +0x07f7:  mov    %eax,-0x38(%ebp)
081fdb90 +0x07fa:  cmpl   $0x0,-0x38(%ebp)
081fdb94 +0x07fe:  jne    081fdbc1 <+0x82b>
081fdb96 +0x0800:  movl   $0x0,0xc(%esp)
081fdb9e +0x0808:  movl   $0x0,0x8(%esp)
081fdba6 +0x0810:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fdbae +0x0818:  movl   $0x9032,(%esp)
081fdbb5 +0x081f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fdbba +0x0824:  mov    %eax,%ebx
081fdbbc +0x0826:  jmp    081fe49f <+0x1109>
081fdbc1 +0x082b:  mov    -0x38(%ebp),%eax
081fdbc4 +0x082e:  mov    %eax,(%esp)
081fdbc7 +0x0831:  call   08179ff6 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x74>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x74
081fdbcc +0x0836:  mov    %eax,%ebx
081fdbce +0x0838:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081fdbd3 +0x083d:  mov    %ebx,0x4(%esp)
081fdbd7 +0x0841:  mov    %eax,(%esp)
081fdbda +0x0844:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081fdbdf +0x0849:  mov    %eax,-0x34(%ebp)
081fdbe2 +0x084c:  cmpl   $0x0,-0x34(%ebp)
081fdbe6 +0x0850:  je     081fdc05 <+0x86f>
081fdbe8 +0x0852:  mov    -0x34(%ebp),%eax
081fdbeb +0x0855:  mov    (%eax),%eax
081fdbed +0x0857:  add    $0x10,%eax
081fdbf0 +0x085a:  mov    (%eax),%edx
081fdbf2 +0x085c:  mov    -0x34(%ebp),%eax
081fdbf5 +0x085f:  mov    %eax,(%esp)
081fdbf8 +0x0862:  call   *%edx
081fdbfa +0x0864:  test   %al,%al
081fdbfc +0x0866:  je     081fdc05 <+0x86f>
081fdbfe +0x0868:  mov    $0x1,%eax
081fdc03 +0x086d:  jmp    081fdc0a <+0x874>
081fdc05 +0x086f:  mov    $0x0,%eax
081fdc0a +0x0874:  test   %al,%al
081fdc0c +0x0876:  je     081fdc45 <+0x8af>
081fdc0e +0x0878:  mov    -0x34(%ebp),%eax
081fdc11 +0x087b:  mov    %eax,(%esp)
081fdc14 +0x087e:  call   081803bc <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x53>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x53
081fdc19 +0x0883:  mov    %eax,(%esp)
081fdc1c +0x0886:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
081fdc21 +0x088b:  mov    %eax,-0x30(%ebp)
081fdc24 +0x088e:  cmpl   $0x63,-0x30(%ebp)
081fdc28 +0x0892:  jg     081fdc45 <+0x8af>
081fdc2a +0x0894:  mov    -0x40(%ebp),%edx
081fdc2d +0x0897:  mov    -0x30(%ebp),%eax
081fdc30 +0x089a:  imul   $0x1cf,%edx,%edx
081fdc36 +0x08a0:  lea    -0x18(%ebp),%ecx
081fdc39 +0x08a3:  lea    (%ecx,%edx,1),%edx
081fdc3c +0x08a6:  sub    $0x3fc0,%edx
081fdc42 +0x08ac:  mov    %al,0x7(%edx)
081fdc45 +0x08af:  movl   $0x0,-0x2c(%ebp)
081fdc4c +0x08b6:  jmp    081fdd1f <+0x989>
081fdc51 +0x08bb:  mov    -0x40(%ebp),%ebx
081fdc54 +0x08be:  mov    -0x2c(%ebp),%edx
081fdc57 +0x08c1:  lea    -0x4008(%ebp),%ecx
081fdc5d +0x08c7:  mov    %edx,%eax
081fdc5f +0x08c9:  shl    $0x2,%eax
081fdc62 +0x08cc:  add    %edx,%eax
081fdc64 +0x08ce:  imul   $0x1cf,%ebx,%edx
081fdc6a +0x08d4:  add    %edx,%eax
081fdc6c +0x08d6:  add    $0x30,%eax
081fdc6f +0x08d9:  lea    (%ecx,%eax,1),%eax
081fdc72 +0x08dc:  add    $0xe,%eax
081fdc75 +0x08df:  mov    %eax,0x4(%esp)
081fdc79 +0x08e3:  mov    0x10(%ebp),%eax
081fdc7c +0x08e6:  mov    %eax,(%esp)
081fdc7f +0x08e9:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081fdc84 +0x08ee:  xor    $0x1,%eax
081fdc87 +0x08f1:  test   %al,%al
081fdc89 +0x08f3:  je     081fdcb6 <+0x920>
081fdc8b +0x08f5:  movl   $0x0,0xc(%esp)
081fdc93 +0x08fd:  movl   $0x0,0x8(%esp)
081fdc9b +0x0905:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fdca3 +0x090d:  movl   $0x9045,(%esp)
081fdcaa +0x0914:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fdcaf +0x0919:  mov    %eax,%ebx
081fdcb1 +0x091b:  jmp    081fe49f <+0x1109>
081fdcb6 +0x0920:  mov    -0x40(%ebp),%ebx
081fdcb9 +0x0923:  mov    -0x2c(%ebp),%edx
081fdcbc +0x0926:  lea    -0x4008(%ebp),%ecx
081fdcc2 +0x092c:  mov    %edx,%eax
081fdcc4 +0x092e:  shl    $0x2,%eax
081fdcc7 +0x0931:  add    %edx,%eax
081fdcc9 +0x0933:  imul   $0x1cf,%ebx,%edx
081fdccf +0x0939:  add    %edx,%eax
081fdcd1 +0x093b:  add    $0x30,%eax
081fdcd4 +0x093e:  lea    (%ecx,%eax,1),%eax
081fdcd7 +0x0941:  add    $0x12,%eax
081fdcda +0x0944:  mov    %eax,0x4(%esp)
081fdcde +0x0948:  mov    0x10(%ebp),%eax
081fdce1 +0x094b:  mov    %eax,(%esp)
081fdce4 +0x094e:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081fdce9 +0x0953:  xor    $0x1,%eax
081fdcec +0x0956:  test   %al,%al
081fdcee +0x0958:  je     081fdd1b <+0x985>
081fdcf0 +0x095a:  movl   $0x0,0xc(%esp)
081fdcf8 +0x0962:  movl   $0x0,0x8(%esp)
081fdd00 +0x096a:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fdd08 +0x0972:  movl   $0x9046,(%esp)
081fdd0f +0x0979:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fdd14 +0x097e:  mov    %eax,%ebx
081fdd16 +0x0980:  jmp    081fe49f <+0x1109>
081fdd1b +0x0985:  addl   $0x1,-0x2c(%ebp)
081fdd1f +0x0989:  mov    -0x40(%ebp),%eax
081fdd22 +0x098c:  imul   $0x1cf,%eax,%eax
081fdd28 +0x0992:  lea    -0x18(%ebp),%edx
081fdd2b +0x0995:  lea    (%edx,%eax,1),%eax
081fdd2e +0x0998:  sub    $0x3fc0,%eax
081fdd33 +0x099d:  movzbl 0xd(%eax),%eax
081fdd37 +0x09a1:  movzbl %al,%eax
081fdd3a +0x09a4:  cmp    -0x2c(%ebp),%eax
081fdd3d +0x09a7:  setg   %al
081fdd40 +0x09aa:  test   %al,%al
081fdd42 +0x09ac:  jne    081fdc51 <+0x8bb>
081fdd48 +0x09b2:  mov    -0x40(%ebp),%edx
081fdd4b +0x09b5:  lea    -0x4008(%ebp),%eax
081fdd51 +0x09bb:  imul   $0x1cf,%edx,%edx
081fdd57 +0x09c1:  add    $0xe0,%edx
081fdd5d +0x09c7:  add    %edx,%eax
081fdd5f +0x09c9:  add    $0xd,%eax
081fdd62 +0x09cc:  mov    %eax,0x4(%esp)
081fdd66 +0x09d0:  mov    0x10(%ebp),%eax
081fdd69 +0x09d3:  mov    %eax,(%esp)
081fdd6c +0x09d6:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081fdd71 +0x09db:  xor    $0x1,%eax
081fdd74 +0x09de:  test   %al,%al
081fdd76 +0x09e0:  jne    081fdd94 <+0x9fe>
081fdd78 +0x09e2:  mov    -0x40(%ebp),%eax
081fdd7b +0x09e5:  imul   $0x1cf,%eax,%eax
081fdd81 +0x09eb:  lea    -0x18(%ebp),%ecx
081fdd84 +0x09ee:  lea    (%ecx,%eax,1),%eax
081fdd87 +0x09f1:  sub    $0x3f10,%eax
081fdd8c +0x09f6:  movzbl 0xd(%eax),%eax
081fdd90 +0x09fa:  cmp    $0x23,%al
081fdd92 +0x09fc:  jbe    081fdd9b <+0xa05>
081fdd94 +0x09fe:  mov    $0x1,%eax
081fdd99 +0x0a03:  jmp    081fdda0 <+0xa0a>
081fdd9b +0x0a05:  mov    $0x0,%eax
081fdda0 +0x0a0a:  test   %al,%al
081fdda2 +0x0a0c:  je     081fddf4 <+0xa5e>
081fdda4 +0x0a0e:  mov    -0x3fcf(%ebp),%edx
081fddaa +0x0a14:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fddaf +0x0a19:  movl   $0x0,0x1c(%esp)
081fddb7 +0x0a21:  movl   $0x1,0x18(%esp)
081fddbf +0x0a29:  movl   $0x1,0x14(%esp)
081fddc7 +0x0a31:  mov    %edx,0x10(%esp)
081fddcb +0x0a35:  movl   $0x0,0xc(%esp)
081fddd3 +0x0a3d:  movl   $0x1,0x8(%esp)
081fdddb +0x0a45:  mov    0xc(%ebp),%edx
081fddde +0x0a48:  mov    %edx,0x4(%esp)
081fdde2 +0x0a4c:  mov    %eax,(%esp)
081fdde5 +0x0a4f:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fddea +0x0a54:  mov    $0x0,%ebx
081fddef +0x0a59:  jmp    081fe49f <+0x1109>
081fddf4 +0x0a5e:  movl   $0x0,-0x28(%ebp)
081fddfb +0x0a65:  jmp    081fdf30 <+0xb9a>
081fde00 +0x0a6a:  mov    -0x40(%ebp),%edx
081fde03 +0x0a6d:  mov    -0x28(%ebp),%ecx
081fde06 +0x0a70:  lea    -0x4008(%ebp),%eax
081fde0c +0x0a76:  add    $0x16,%ecx
081fde0f +0x0a79:  shl    $0x3,%ecx
081fde12 +0x0a7c:  imul   $0x1cf,%edx,%edx
081fde18 +0x0a82:  lea    (%ecx,%edx,1),%edx
081fde1b +0x0a85:  add    $0x30,%edx
081fde1e +0x0a88:  add    %edx,%eax
081fde20 +0x0a8a:  add    $0xe,%eax
081fde23 +0x0a8d:  mov    %eax,0x4(%esp)
081fde27 +0x0a91:  mov    0x10(%ebp),%eax
081fde2a +0x0a94:  mov    %eax,(%esp)
081fde2d +0x0a97:  call   0822b6e8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd92>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd92
081fde32 +0x0a9c:  xor    $0x1,%eax
081fde35 +0x0a9f:  test   %al,%al
081fde37 +0x0aa1:  je     081fde64 <+0xace>
081fde39 +0x0aa3:  movl   $0x0,0xc(%esp)
081fde41 +0x0aab:  movl   $0x0,0x8(%esp)
081fde49 +0x0ab3:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fde51 +0x0abb:  movl   $0x9053,(%esp)
081fde58 +0x0ac2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fde5d +0x0ac7:  mov    %eax,%ebx
081fde5f +0x0ac9:  jmp    081fe49f <+0x1109>
081fde64 +0x0ace:  mov    -0x40(%ebp),%edx
081fde67 +0x0ad1:  mov    -0x28(%ebp),%ecx
081fde6a +0x0ad4:  lea    -0x4008(%ebp),%eax
081fde70 +0x0ada:  add    $0x16,%ecx
081fde73 +0x0add:  shl    $0x3,%ecx
081fde76 +0x0ae0:  imul   $0x1cf,%edx,%edx
081fde7c +0x0ae6:  lea    (%ecx,%edx,1),%edx
081fde7f +0x0ae9:  add    $0x30,%edx
081fde82 +0x0aec:  add    %edx,%eax
081fde84 +0x0aee:  add    $0x12,%eax
081fde87 +0x0af1:  mov    %eax,0x4(%esp)
081fde8b +0x0af5:  mov    0x10(%ebp),%eax
081fde8e +0x0af8:  mov    %eax,(%esp)
081fde91 +0x0afb:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081fde96 +0x0b00:  xor    $0x1,%eax
081fde99 +0x0b03:  test   %al,%al
081fde9b +0x0b05:  je     081fdec8 <+0xb32>
081fde9d +0x0b07:  movl   $0x0,0xc(%esp)
081fdea5 +0x0b0f:  movl   $0x0,0x8(%esp)
081fdead +0x0b17:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fdeb5 +0x0b1f:  movl   $0x9054,(%esp)
081fdebc +0x0b26:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fdec1 +0x0b2b:  mov    %eax,%ebx
081fdec3 +0x0b2d:  jmp    081fe49f <+0x1109>
081fdec8 +0x0b32:  mov    -0x40(%ebp),%edx
081fdecb +0x0b35:  mov    -0x28(%ebp),%ecx
081fdece +0x0b38:  lea    -0x4008(%ebp),%eax
081fded4 +0x0b3e:  add    $0x16,%ecx
081fded7 +0x0b41:  shl    $0x3,%ecx
081fdeda +0x0b44:  imul   $0x1cf,%edx,%edx
081fdee0 +0x0b4a:  lea    (%ecx,%edx,1),%edx
081fdee3 +0x0b4d:  add    $0x30,%edx
081fdee6 +0x0b50:  add    %edx,%eax
081fdee8 +0x0b52:  add    $0x14,%eax
081fdeeb +0x0b55:  mov    %eax,0x4(%esp)
081fdeef +0x0b59:  mov    0x10(%ebp),%eax
081fdef2 +0x0b5c:  mov    %eax,(%esp)
081fdef5 +0x0b5f:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081fdefa +0x0b64:  xor    $0x1,%eax
081fdefd +0x0b67:  test   %al,%al
081fdeff +0x0b69:  je     081fdf2c <+0xb96>
081fdf01 +0x0b6b:  movl   $0x0,0xc(%esp)
081fdf09 +0x0b73:  movl   $0x0,0x8(%esp)
081fdf11 +0x0b7b:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fdf19 +0x0b83:  movl   $0x9055,(%esp)
081fdf20 +0x0b8a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fdf25 +0x0b8f:  mov    %eax,%ebx
081fdf27 +0x0b91:  jmp    081fe49f <+0x1109>
081fdf2c +0x0b96:  addl   $0x1,-0x28(%ebp)
081fdf30 +0x0b9a:  mov    -0x40(%ebp),%eax
081fdf33 +0x0b9d:  imul   $0x1cf,%eax,%eax
081fdf39 +0x0ba3:  lea    -0x18(%ebp),%edx
081fdf3c +0x0ba6:  lea    (%edx,%eax,1),%eax
081fdf3f +0x0ba9:  sub    $0x3f10,%eax
081fdf44 +0x0bae:  movzbl 0xd(%eax),%eax
081fdf48 +0x0bb2:  movzbl %al,%eax
081fdf4b +0x0bb5:  cmp    -0x28(%ebp),%eax
081fdf4e +0x0bb8:  setg   %al
081fdf51 +0x0bbb:  test   %al,%al
081fdf53 +0x0bbd:  jne    081fde00 <+0xa6a>
081fdf59 +0x0bc3:  movl   $0x0,-0x24(%ebp)
081fdf60 +0x0bca:  jmp    081fe066 <+0xcd0>
081fdf65 +0x0bcf:  mov    -0x24(%ebp),%eax
081fdf68 +0x0bd2:  add    $0x1,%eax
081fdf6b +0x0bd5:  mov    %eax,-0x20(%ebp)
081fdf6e +0x0bd8:  jmp    081fe039 <+0xca3>
081fdf73 +0x0bdd:  mov    -0x40(%ebp),%eax
081fdf76 +0x0be0:  mov    -0x24(%ebp),%edx
081fdf79 +0x0be3:  add    $0x16,%edx
081fdf7c +0x0be6:  shl    $0x3,%edx
081fdf7f +0x0be9:  imul   $0x1cf,%eax,%eax
081fdf85 +0x0bef:  lea    (%edx,%eax,1),%eax
081fdf88 +0x0bf2:  lea    -0x18(%ebp),%ecx
081fdf8b +0x0bf5:  lea    (%ecx,%eax,1),%eax
081fdf8e +0x0bf8:  sub    $0x3fc0,%eax
081fdf93 +0x0bfd:  mov    0xe(%eax),%edx
081fdf96 +0x0c00:  mov    -0x40(%ebp),%eax
081fdf99 +0x0c03:  mov    -0x20(%ebp),%ecx
081fdf9c +0x0c06:  add    $0x16,%ecx
081fdf9f +0x0c09:  shl    $0x3,%ecx
081fdfa2 +0x0c0c:  imul   $0x1cf,%eax,%eax
081fdfa8 +0x0c12:  lea    (%ecx,%eax,1),%eax
081fdfab +0x0c15:  lea    -0x18(%ebp),%ecx
081fdfae +0x0c18:  lea    (%ecx,%eax,1),%eax
081fdfb1 +0x0c1b:  sub    $0x3fc0,%eax
081fdfb6 +0x0c20:  mov    0xe(%eax),%eax
081fdfb9 +0x0c23:  cmp    %eax,%edx
081fdfbb +0x0c25:  jne    081fe035 <+0xc9f>
081fdfbd +0x0c27:  mov    -0x40(%ebp),%eax
081fdfc0 +0x0c2a:  mov    -0x24(%ebp),%edx
081fdfc3 +0x0c2d:  add    $0x16,%edx
081fdfc6 +0x0c30:  shl    $0x3,%edx
081fdfc9 +0x0c33:  imul   $0x1cf,%eax,%eax
081fdfcf +0x0c39:  lea    (%edx,%eax,1),%eax
081fdfd2 +0x0c3c:  lea    -0x18(%ebp),%edx
081fdfd5 +0x0c3f:  lea    (%edx,%eax,1),%eax
081fdfd8 +0x0c42:  sub    $0x3fc0,%eax
081fdfdd +0x0c47:  movzwl 0x12(%eax),%edx
081fdfe1 +0x0c4b:  mov    -0x40(%ebp),%eax
081fdfe4 +0x0c4e:  mov    -0x20(%ebp),%ecx
081fdfe7 +0x0c51:  add    $0x16,%ecx
081fdfea +0x0c54:  shl    $0x3,%ecx
081fdfed +0x0c57:  imul   $0x1cf,%eax,%eax
081fdff3 +0x0c5d:  lea    (%ecx,%eax,1),%eax
081fdff6 +0x0c60:  lea    -0x18(%ebp),%ecx
081fdff9 +0x0c63:  lea    (%ecx,%eax,1),%eax
081fdffc +0x0c66:  sub    $0x3fc0,%eax
081fe001 +0x0c6b:  movzwl 0x12(%eax),%eax
081fe005 +0x0c6f:  cmp    %ax,%dx
081fe008 +0x0c72:  jne    081fe035 <+0xc9f>
081fe00a +0x0c74:  movl   $0x0,0xc(%esp)
081fe012 +0x0c7c:  movl   $0x0,0x8(%esp)
081fe01a +0x0c84:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fe022 +0x0c8c:  movl   $0x905e,(%esp)
081fe029 +0x0c93:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fe02e +0x0c98:  mov    %eax,%ebx
081fe030 +0x0c9a:  jmp    081fe49f <+0x1109>
081fe035 +0x0c9f:  addl   $0x1,-0x20(%ebp)
081fe039 +0x0ca3:  mov    -0x40(%ebp),%eax
081fe03c +0x0ca6:  imul   $0x1cf,%eax,%eax
081fe042 +0x0cac:  lea    -0x18(%ebp),%edx
081fe045 +0x0caf:  lea    (%edx,%eax,1),%eax
081fe048 +0x0cb2:  sub    $0x3f10,%eax
081fe04d +0x0cb7:  movzbl 0xd(%eax),%eax
081fe051 +0x0cbb:  movzbl %al,%eax
081fe054 +0x0cbe:  cmp    -0x20(%ebp),%eax
081fe057 +0x0cc1:  setg   %al
081fe05a +0x0cc4:  test   %al,%al
081fe05c +0x0cc6:  jne    081fdf73 <+0xbdd>
081fe062 +0x0ccc:  addl   $0x1,-0x24(%ebp)
081fe066 +0x0cd0:  mov    -0x40(%ebp),%eax
081fe069 +0x0cd3:  imul   $0x1cf,%eax,%eax
081fe06f +0x0cd9:  lea    -0x18(%ebp),%ecx
081fe072 +0x0cdc:  lea    (%ecx,%eax,1),%eax
081fe075 +0x0cdf:  sub    $0x3f10,%eax
081fe07a +0x0ce4:  movzbl 0xd(%eax),%eax
081fe07e +0x0ce8:  movzbl %al,%eax
081fe081 +0x0ceb:  cmp    -0x24(%ebp),%eax
081fe084 +0x0cee:  setg   %al
081fe087 +0x0cf1:  test   %al,%al
081fe089 +0x0cf3:  jne    081fdf65 <+0xbcf>
081fe08f +0x0cf9:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081fe094 +0x0cfe:  mov    0xc(%ebp),%edx
081fe097 +0x0d01:  mov    %edx,0x4(%esp)
081fe09b +0x0d05:  mov    %eax,(%esp)
081fe09e +0x0d08:  call   085ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FindStoreSeller(CUser*)
081fe0a3 +0x0d0d:  mov    %eax,-0x3c(%ebp)
081fe0a6 +0x0d10:  cmpl   $0x0,-0x3c(%ebp)
081fe0aa +0x0d14:  je     081fe129 <+0xd93>
081fe0ac +0x0d16:  mov    -0x3c(%ebp),%eax
081fe0af +0x0d19:  mov    %eax,(%esp)
081fe0b2 +0x0d1c:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
081fe0b7 +0x0d21:  test   %al,%al
081fe0b9 +0x0d23:  je     081fe129 <+0xd93>
081fe0bb +0x0d25:  mov    -0x40(%ebp),%eax
081fe0be +0x0d28:  imul   $0x1cf,%eax,%eax
081fe0c4 +0x0d2e:  lea    -0x18(%ebp),%edx
081fe0c7 +0x0d31:  lea    (%edx,%eax,1),%eax
081fe0ca +0x0d34:  sub    $0x3fc0,%eax
081fe0cf +0x0d39:  mov    0x9(%eax),%eax
081fe0d2 +0x0d3c:  cmp    $&_ZL14gUnicodeBuffer+0x12581,%eax
081fe0d7 +0x0d41:  jne    081fe129 <+0xd93>
081fe0d9 +0x0d43:  mov    -0x3fcf(%ebp),%edx
081fe0df +0x0d49:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fe0e4 +0x0d4e:  movl   $0x0,0x1c(%esp)
081fe0ec +0x0d56:  movl   $0x1,0x18(%esp)
081fe0f4 +0x0d5e:  movl   $0x1,0x14(%esp)
081fe0fc +0x0d66:  mov    %edx,0x10(%esp)
081fe100 +0x0d6a:  movl   $0x0,0xc(%esp)
081fe108 +0x0d72:  movl   $0xe7,0x8(%esp)
081fe110 +0x0d7a:  mov    0xc(%ebp),%edx
081fe113 +0x0d7d:  mov    %edx,0x4(%esp)
081fe117 +0x0d81:  mov    %eax,(%esp)
081fe11a +0x0d84:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fe11f +0x0d89:  mov    $0x0,%ebx
081fe124 +0x0d8e:  jmp    081fe49f <+0x1109>
081fe129 +0x0d93:  mov    -0x40(%ebp),%eax
081fe12c +0x0d96:  imul   $0x1cf,%eax,%eax
081fe132 +0x0d9c:  lea    -0x18(%ebp),%ecx
081fe135 +0x0d9f:  lea    (%ecx,%eax,1),%eax
081fe138 +0x0da2:  sub    $0x3fc0,%eax
081fe13d +0x0da7:  mov    0x9(%eax),%eax
081fe140 +0x0daa:  mov    %eax,-0x7fa0(%ebp)
081fe146 +0x0db0:  movzbl -0x3ff9(%ebp),%eax
081fe14d +0x0db7:  movzbl %al,%eax
081fe150 +0x0dba:  mov    %eax,-0x7f9c(%ebp)
081fe156 +0x0dc0:  mov    0xc(%ebp),%eax
081fe159 +0x0dc3:  mov    %eax,(%esp)
081fe15c +0x0dc6:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fe161 +0x0dcb:  mov    %eax,%edi
081fe163 +0x0dcd:  mov    0xc(%ebp),%eax
081fe166 +0x0dd0:  mov    %eax,(%esp)
081fe169 +0x0dd3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081fe16e +0x0dd8:  mov    %eax,%esi
081fe170 +0x0dda:  mov    0xc(%ebp),%eax
081fe173 +0x0ddd:  mov    %eax,(%esp)
081fe176 +0x0de0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081fe17b +0x0de5:  movl   $0x0,0x4(%esp)
081fe183 +0x0ded:  mov    %eax,(%esp)
081fe186 +0x0df0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081fe18b +0x0df5:  mov    %eax,%ebx
081fe18d +0x0df7:  movl   $0x0,0xc(%esp)
081fe195 +0x0dff:  movl   $0x9070,0x8(%esp)
081fe19d +0x0e07:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fe1a5 +0x0e0f:  lea    -0x54(%ebp),%eax
081fe1a8 +0x0e12:  mov    %eax,(%esp)
081fe1ab +0x0e15:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fe1b0 +0x0e1a:  mov    -0x7fa0(%ebp),%eax
081fe1b6 +0x0e20:  mov    %eax,0x18(%esp)
081fe1ba +0x0e24:  mov    -0x7f9c(%ebp),%edx
081fe1c0 +0x0e2a:  mov    %edx,0x14(%esp)
081fe1c4 +0x0e2e:  mov    %edi,0x10(%esp)
081fe1c8 +0x0e32:  mov    %esi,0xc(%esp)
081fe1cc +0x0e36:  mov    %ebx,0x8(%esp)
081fe1d0 +0x0e3a:  movl   $"NEXON BILLING : BuyCeraShopItem m_id(%s), charac_no(%d), charac_name(%s), buytype(%d), product_no(%d)",0x4(%esp)
081fe1d8 +0x0e42:  lea    -0x54(%ebp),%eax
081fe1db +0x0e45:  mov    %eax,(%esp)
081fe1de +0x0e48:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fe1e3 +0x0e4d:  addl   $0x1,-0x40(%ebp)
081fe1e7 +0x0e51:  movzbl -0x3fd2(%ebp),%eax
081fe1ee +0x0e58:  movzbl %al,%eax
081fe1f1 +0x0e5b:  cmp    -0x40(%ebp),%eax
081fe1f4 +0x0e5e:  setg   %al
081fe1f7 +0x0e61:  test   %al,%al
081fe1f9 +0x0e63:  jne    081fd932 <+0x59c>
081fe1ff +0x0e69:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081fe204 +0x0e6e:  movl   $0x11,0xc(%esp)
081fe20c +0x0e76:  movl   $0x1,0x8(%esp)
081fe214 +0x0e7e:  mov    0xc(%ebp),%edx
081fe217 +0x0e81:  mov    %edx,0x4(%esp)
081fe21b +0x0e85:  mov    %eax,(%esp)
081fe21e +0x0e88:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081fe223 +0x0e8d:  test   %al,%al
081fe225 +0x0e8f:  je     081fe27d <+0xee7>
081fe227 +0x0e91:  movzbl -0x3ff9(%ebp),%eax
081fe22e +0x0e98:  movsbl %al,%ecx
081fe231 +0x0e9b:  mov    -0x3fcf(%ebp),%edx
081fe237 +0x0ea1:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fe23c +0x0ea6:  mov    %ecx,0x1c(%esp)
081fe240 +0x0eaa:  movl   $0x1,0x18(%esp)
081fe248 +0x0eb2:  movl   $0x1,0x14(%esp)
081fe250 +0x0eba:  mov    %edx,0x10(%esp)
081fe254 +0x0ebe:  movl   $0x0,0xc(%esp)
081fe25c +0x0ec6:  movl   $0xd1,0x8(%esp)
081fe264 +0x0ece:  mov    0xc(%ebp),%edx
081fe267 +0x0ed1:  mov    %edx,0x4(%esp)
081fe26b +0x0ed5:  mov    %eax,(%esp)
081fe26e +0x0ed8:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fe273 +0x0edd:  mov    $0x0,%ebx
081fe278 +0x0ee2:  jmp    081fe49f <+0x1109>
081fe27d +0x0ee7:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081fe282 +0x0eec:  movl   $0x38,0x8(%esp)
081fe28a +0x0ef4:  mov    0xc(%ebp),%edx
081fe28d +0x0ef7:  mov    %edx,0x4(%esp)
081fe291 +0x0efb:  mov    %eax,(%esp)
081fe294 +0x0efe:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081fe299 +0x0f03:  mov    %eax,-0x44(%ebp)
081fe29c +0x0f06:  cmpl   $0x0,-0x44(%ebp)
081fe2a0 +0x0f0a:  je     081fe305 <+0xf6f>
081fe2a2 +0x0f0c:  mov    -0x3fcf(%ebp),%ebx
081fe2a8 +0x0f12:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081fe2ad +0x0f17:  mov    -0x44(%ebp),%edx
081fe2b0 +0x0f1a:  mov    %edx,0x4(%esp)
081fe2b4 +0x0f1e:  mov    %eax,(%esp)
081fe2b7 +0x0f21:  call   082881a2 <_ZN21CSecu_ProtectionField14GetCashShopErrEi>  ; CSecu_ProtectionField::GetCashShopErr(int)
081fe2bc +0x0f26:  movzwl %ax,%edx
081fe2bf +0x0f29:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fe2c4 +0x0f2e:  movl   $0x0,0x1c(%esp)
081fe2cc +0x0f36:  movl   $0x1,0x18(%esp)
081fe2d4 +0x0f3e:  movl   $0x1,0x14(%esp)
081fe2dc +0x0f46:  mov    %ebx,0x10(%esp)
081fe2e0 +0x0f4a:  movl   $0x0,0xc(%esp)
081fe2e8 +0x0f52:  mov    %edx,0x8(%esp)
081fe2ec +0x0f56:  mov    0xc(%ebp),%edx
081fe2ef +0x0f59:  mov    %edx,0x4(%esp)
081fe2f3 +0x0f5d:  mov    %eax,(%esp)
081fe2f6 +0x0f60:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fe2fb +0x0f65:  mov    $0x0,%ebx
081fe300 +0x0f6a:  jmp    081fe49f <+0x1109>
081fe305 +0x0f6f:  lea    -0x4008(%ebp),%eax
081fe30b +0x0f75:  mov    %eax,0x8(%esp)
081fe30f +0x0f79:  mov    0xc(%ebp),%eax
081fe312 +0x0f7c:  mov    %eax,0x4(%esp)
081fe316 +0x0f80:  mov    0x8(%ebp),%eax
081fe319 +0x0f83:  mov    %eax,(%esp)
081fe31c +0x0f86:  call   081fe4b8 <_ZN26Dispatcher_BuyCeraShopItem33useCountDownCoinInFreeCoinDungeonEP5CUserRK21MSG_BUY_CERASHOP_ITEM>  ; Dispatcher_BuyCeraShopItem::useCountDownCoinInFreeCoinDungeon(CUser*, MSG_BUY_CERASHOP_ITEM const&)
081fe321 +0x0f8b:  test   %al,%al
081fe323 +0x0f8d:  je     081fe373 <+0xfdd>
081fe325 +0x0f8f:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
081fe32a +0x0f94:  movl   $0x0,0x1c(%esp)
081fe332 +0x0f9c:  movl   $0x1,0x18(%esp)
081fe33a +0x0fa4:  movl   $0x1,0x14(%esp)
081fe342 +0x0fac:  movl   $0x0,0x10(%esp)
081fe34a +0x0fb4:  movl   $0x0,0xc(%esp)
081fe352 +0x0fbc:  movl   $0x13,0x8(%esp)
081fe35a +0x0fc4:  mov    0xc(%ebp),%edx
081fe35d +0x0fc7:  mov    %edx,0x4(%esp)
081fe361 +0x0fcb:  mov    %eax,(%esp)
081fe364 +0x0fce:  call   08323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>  ; WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char)
081fe369 +0x0fd3:  mov    $0x0,%ebx
081fe36e +0x0fd8:  jmp    081fe49f <+0x1109>
081fe373 +0x0fdd:  movzbl -0x3ff9(%ebp),%eax
081fe37a +0x0fe4:  cmp    $0x1,%al
081fe37c +0x0fe6:  jne    081fe433 <+0x109d>
081fe382 +0x0fec:  lea    -0x4008(%ebp),%eax
081fe388 +0x0ff2:  mov    %eax,0x4(%esp)
081fe38c +0x0ff6:  lea    -0x7f90(%ebp),%eax
081fe392 +0x0ffc:  mov    %eax,(%esp)
081fe395 +0x0fff:  call   082378ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcf98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcf98
081fe39a +0x1004:  lea    -0x7f90(%ebp),%eax
081fe3a0 +0x100a:  mov    %eax,0x8(%esp)
081fe3a4 +0x100e:  lea    -0x4008(%ebp),%eax
081fe3aa +0x1014:  add    $0x10,%eax
081fe3ad +0x1017:  mov    %eax,0x4(%esp)
081fe3b1 +0x101b:  mov    0xc(%ebp),%eax
081fe3b4 +0x101e:  mov    %eax,(%esp)
081fe3b7 +0x1021:  call   08555464 <_ZN8WongWork14CMailBoxHelper18ReqDBCheckReceiverEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER>  ; WongWork::CMailBoxHelper::ReqDBCheckReceiver(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*)
081fe3bc +0x1026:  mov    %eax,-0x1c(%ebp)
081fe3bf +0x1029:  cmpl   $0x0,-0x1c(%ebp)
081fe3c3 +0x102d:  je     081fe42c <+0x1096>
081fe3c5 +0x102f:  mov    -0x1c(%ebp),%ebx
081fe3c8 +0x1032:  movl   $0xffffffff,0x4(%esp)
081fe3d0 +0x103a:  mov    0xc(%ebp),%eax
081fe3d3 +0x103d:  mov    %eax,(%esp)
081fe3d6 +0x1040:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081fe3db +0x1045:  mov    %ebx,0x18(%esp)
081fe3df +0x1049:  mov    %eax,0x14(%esp)
081fe3e3 +0x104d:  movl   $"[ITEM_GIFT] Fail charac_no[%u] error_code[%d]",0x10(%esp)
081fe3eb +0x1055:  movl   $0x90c2,0xc(%esp)
081fe3f3 +0x105d:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
081fe3fb +0x1065:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081fe403 +0x106d:  movl   $0x1,(%esp)
081fe40a +0x1074:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081fe40f +0x1079:  mov    -0x1c(%ebp),%eax
081fe412 +0x107c:  movzwl %ax,%eax
081fe415 +0x107f:  mov    %eax,0x8(%esp)
081fe419 +0x1083:  movl   $0x43,0x4(%esp)
081fe421 +0x108b:  mov    0xc(%ebp),%eax
081fe424 +0x108e:  mov    %eax,(%esp)
081fe427 +0x1091:  call   0867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>  ; CUser::SendCmdErrorPacket2Byte(ENUM_CMDPACKET, unsigned short)
081fe42c +0x1096:  mov    $0x0,%ebx
081fe431 +0x109b:  jmp    081fe49f <+0x1109>
081fe433 +0x109d:  mov    &_ZN10GlobalData21s_pItemVendingMachineE,%eax
081fe438 +0x10a2:  lea    -0x4008(%ebp),%edx
081fe43e +0x10a8:  mov    %edx,0x8(%esp)
081fe442 +0x10ac:  mov    0xc(%ebp),%edx
081fe445 +0x10af:  mov    %edx,0x4(%esp)
081fe449 +0x10b3:  mov    %eax,(%esp)
081fe44c +0x10b6:  call   0854c4d0 <_ZN18ItemVendingMachine7BuyItemEP5CUserRK21MSG_BUY_CERASHOP_ITEM>  ; ItemVendingMachine::BuyItem(CUser*, MSG_BUY_CERASHOP_ITEM const&)
081fe451 +0x10bb:  test   %al,%al
081fe453 +0x10bd:  je     081fe45c <+0x10c6>
081fe455 +0x10bf:  mov    $0x0,%eax
081fe45a +0x10c4:  jmp    081fe480 <+0x10ea>
081fe45c +0x10c6:  movl   $0x0,0xc(%esp)
081fe464 +0x10ce:  movl   $0x0,0x8(%esp)
081fe46c +0x10d6:  movl   $&_ZZN26Dispatcher_BuyCeraShopItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fe474 +0x10de:  movl   $0x90ce,(%esp)
081fe47b +0x10e5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fe480 +0x10ea:  mov    %eax,%ebx
081fe482 +0x10ec:  jmp    081fe49f <+0x1109>
081fe484 +0x10ee:  mov    %edx,%ebx
081fe486 +0x10f0:  mov    %eax,%esi
081fe488 +0x10f2:  lea    -0x80(%ebp),%eax
081fe48b +0x10f5:  mov    %eax,(%esp)
081fe48e +0x10f8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fe493 +0x10fd:  mov    %esi,%eax
081fe495 +0x10ff:  mov    %ebx,%edx
081fe497 +0x1101:  mov    %eax,(%esp)
081fe49a +0x1104:  call   08ae3750 <_Unwind_Resume>
081fe49f +0x1109:  lea    -0x80(%ebp),%eax
081fe4a2 +0x110c:  mov    %eax,(%esp)
081fe4a5 +0x110f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081fe4aa +0x1114:  mov    %ebx,%eax
081fe4ac +0x1116:  add    $0x7fbc,%esp
081fe4b2 +0x111c:  pop    %ebx
081fe4b3 +0x111d:  pop    %esi
081fe4b4 +0x111e:  pop    %edi
081fe4b5 +0x111f:  pop    %ebp
081fe4b6 +0x1120:  ret
081fe4b7 +0x1121:  nop
```

## 反编译 C

```c
// Dispatcher_BuyCeraShopItem::dispatch_sig @ 0x81fd396

/* Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BuyCeraShopItem::dispatch_sig
          (Dispatcher_BuyCeraShopItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  CPrivateStoreMgr *pCVar8;
  GameWorld *pGVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  CDataManager *this_00;
  undefined4 uVar13;
  ServiceRestrictManager *pSVar14;
  MSG_CHECK_MAIL_RECEIVER local_7f94 [16264];
  MSG_BUY_CERASHOP_ITEM local_400c [13];
  short local_3fff;
  byte local_3ffd;
  char acStack_3ffc [38];
  byte local_3fd6;
  uchar auStack_3fd5 [2];
  uint local_3fd3;
  byte bStack_3fcf;
  ulong uStack_3fce;
  ushort auStack_3fca [85];
  byte abStack_3f1f [16023];
  int local_88;
  PacketGuard local_84 [12];
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  int local_48;
  int local_44;
  CPrivateStore *local_40;
  CCeraShopGoods *local_3c;
  CEquipItem *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  uVar5 = CUser::get_acc_id(param_1);
  uVar6 = NumberToString(uVar5,0);
  cMyTrace::cMyTrace(local_78,
                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)",
                     0x8f66,0);
  cMyTrace::operator()(local_78,"Dispatcher_BuyCeraShopItem(m_id(%s))",uVar6);
  if ((param_1 == (CUser *)0x0) || (cVar3 = CUser::CheckInTrade(param_1), cVar3 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  iVar7 = CUser::get_state(param_1);
  if ((iVar7 < 3) ||
     (iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar7 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar6 = LineFunc(0x8f7b,
                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar6;
  }
  PacketGuard::PacketGuard(local_84);
                    /* try { // try from 081fd48d to 081fe47f has its CatchHandler @ 081fe484 */
  pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
  cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(pCVar8,param_1);
  if (cVar3 == '\0') {
    cVar3 = CUser::CheckInTrade(param_1);
    if (cVar3 == '\0') {
      cVar3 = PacketBuf::get_short(param_2,&local_3fff);
      if (cVar3 == '\x01') {
        if ((local_3fff < 0) || (1 < local_3fff)) {
          uVar6 = LineFunc(0x8fad,
                           "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
        else {
          cVar3 = PacketBuf::get_byte(param_2,&local_3ffd);
          if (cVar3 == '\x01') {
            if (local_3ffd == 1) {
              local_88 = 0;
              cVar3 = PacketBuf::get_int(param_2,&local_88);
              if (cVar3 != '\x01') {
                uVar6 = LineFunc(0x8fbb,
                                 "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                goto LAB_081fe49f;
              }
              cVar3 = PacketBuf::get_str(param_2,acStack_3ffc,0x1e,local_88);
              if (cVar3 != '\x01') {
                uVar6 = LineFunc(0x8fbc,
                                 "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
                goto LAB_081fe49f;
              }
            }
            if ((local_3ffd == 1) && (local_3fff == 1)) {
              uVar6 = LineFunc(0x8fc2,
                               "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
            else {
              pGVar9 = (GameWorld *)G_GameWorld();
              cVar3 = GameWorld::IsIntegratedPvPBaseChannel(pGVar9);
              if (cVar3 != '\0') {
                pGVar9 = (GameWorld *)G_GameWorld();
                iVar7 = GameWorld::GetChannelType(pGVar9);
                if (iVar7 != 0xf) {
                  WongWork::CCeraShop::ProcessError
                            (GlobalData::s_pCeraShop,param_1,0x3c,0,0,1,1,'\0');
                  uVar6 = 0;
                  goto LAB_081fe49f;
                }
                if (local_3ffd == 1) {
                  WongWork::CCeraShop::ProcessError
                            (GlobalData::s_pCeraShop,param_1,0x3c,0,0,1,1,'\0');
                  uVar6 = 0;
                  goto LAB_081fe49f;
                }
              }
              uVar5 = (uint)local_3ffd;
              uVar6 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              uVar11 = CUser::get_acc_id(param_1);
              uVar12 = NumberToString(uVar11,0);
              cMyTrace::cMyTrace(local_68,
                                 "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x9004,0);
              cMyTrace::operator()
                        (local_68,
                         "NEXON BILLING : BuyCeraShopItem m_id(%s), charac_no(%d), charac_name(%s), buytype(%d)"
                         ,uVar12,uVar10,uVar6,uVar5);
              cVar3 = PacketBuf::get_byte(param_2,&local_3fd6);
              if (((cVar3 == '\x01') && (local_3fd6 != 0)) && (local_3fd6 < 0x24)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                WongWork::CCeraShop::ProcessError
                          (GlobalData::s_pCeraShop,param_1,1,0,local_3fd3,1,1,'\0');
                uVar6 = 0;
              }
              else {
                for (local_44 = 0; local_44 < (int)(uint)local_3fd6; local_44 = local_44 + 1) {
                  cVar3 = PacketBuf::get_byte(param_2,auStack_3fd5 + local_44 * 0x1cf);
                  if (cVar3 != '\x01') {
                    uVar6 = LineFunc(0x9017,
                                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                    goto LAB_081fe49f;
                  }
                  cVar3 = PacketBuf::get_byte(param_2,(char *)(auStack_3fd5 + local_44 * 0x1cf + 1))
                  ;
                  if (cVar3 != '\x01') {
                    uVar6 = LineFunc(0x9018,
                                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                    goto LAB_081fe49f;
                  }
                  cVar3 = PacketBuf::get_int(param_2,(uint *)((int)&local_3fd3 + local_44 * 0x1cf));
                  if (cVar3 != '\x01') {
                    uVar6 = LineFunc(0x9019,
                                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                    goto LAB_081fe49f;
                  }
                  cVar3 = PacketBuf::get_byte(param_2,&bStack_3fcf + local_44 * 0x1cf);
                  if (cVar3 != '\x01') {
                    WongWork::CCeraShop::ProcessError
                              (GlobalData::s_pCeraShop,param_1,1,0,local_3fd3,1,1,'\0');
                    uVar6 = 0;
                    goto LAB_081fe49f;
                  }
                  if (0x23 < (&bStack_3fcf)[local_44 * 0x1cf]) {
                    WongWork::CCeraShop::ProcessError
                              (GlobalData::s_pCeraShop,param_1,1,0,local_3fd3,1,1,'\0');
                    uVar6 = 0;
                    goto LAB_081fe49f;
                  }
                  if ((auStack_3fd5[local_44 * 0x1cf] == 0xff) &&
                     ((&bStack_3fcf)[local_44 * 0x1cf] == 0)) {
                    iVar7 = G_CDataManager();
                    local_3c = (CCeraShopGoods *)CDataManager::FindGoods(iVar7);
                    if (local_3c == (CCeraShopGoods *)0x0) {
                      uVar6 = LineFunc(0x9032,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                    iVar7 = CCeraShopGoods::GetItemIdx(local_3c);
                    this_00 = (CDataManager *)G_CDataManager();
                    local_38 = (CEquipItem *)CDataManager::find_item(this_00,iVar7);
                    if ((local_38 == (CEquipItem *)0x0) ||
                       (cVar3 = (**(code **)(*(int *)local_38 + 0x10))(local_38), cVar3 == '\0')) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      iVar7 = CEquipItem::getAvatarOptionSize(local_38);
                      local_34 = get_rand_int(iVar7);
                      if (local_34 < 100) {
                        auStack_3fd5[local_44 * 0x1cf] = (uchar)local_34;
                      }
                    }
                  }
                  for (local_30 = 0; local_30 < (int)(uint)(&bStack_3fcf)[local_44 * 0x1cf];
                      local_30 = local_30 + 1) {
                    cVar3 = PacketBuf::get_int(param_2,(ulong *)((int)auStack_3fca +
                                                                local_30 * 5 + local_44 * 0x1cf + -4
                                                                ));
                    if (cVar3 != '\x01') {
                      uVar6 = LineFunc(0x9045,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                    cVar3 = PacketBuf::get_byte(param_2,(uchar *)((int)auStack_3fca +
                                                                 local_30 * 5 + local_44 * 0x1cf));
                    if (cVar3 != '\x01') {
                      uVar6 = LineFunc(0x9046,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                  }
                  cVar3 = PacketBuf::get_byte(param_2,abStack_3f1f + local_44 * 0x1cf);
                  if ((cVar3 == '\x01') && (abStack_3f1f[local_44 * 0x1cf] < 0x24)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    WongWork::CCeraShop::ProcessError
                              (GlobalData::s_pCeraShop,param_1,1,0,local_3fd3,1,1,'\0');
                    uVar6 = 0;
                    goto LAB_081fe49f;
                  }
                  for (local_2c = 0; local_2c < (int)(uint)abStack_3f1f[local_44 * 0x1cf];
                      local_2c = local_2c + 1) {
                    cVar3 = PacketBuf::get_item_idx
                                      (param_2,(ulong *)((int)auStack_3fca +
                                                        (local_2c + 0x16) * 8 + local_44 * 0x1cf +
                                                        -4));
                    if (cVar3 != '\x01') {
                      uVar6 = LineFunc(0x9053,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                    cVar3 = PacketBuf::get_short
                                      (param_2,(ushort *)
                                               ((int)auStack_3fca +
                                               (local_2c + 0x16) * 8 + local_44 * 0x1cf));
                    if (cVar3 != '\x01') {
                      uVar6 = LineFunc(0x9054,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                    cVar3 = PacketBuf::get_short
                                      (param_2,(ushort *)
                                               ((int)auStack_3fca +
                                               (local_2c + 0x16) * 8 + local_44 * 0x1cf + 2));
                    if (cVar3 != '\x01') {
                      uVar6 = LineFunc(0x9055,
                                       "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      goto LAB_081fe49f;
                    }
                  }
                  for (local_28 = 0; iVar7 = local_28,
                      local_28 < (int)(uint)abStack_3f1f[local_44 * 0x1cf]; local_28 = local_28 + 1)
                  {
                    while (iVar2 = iVar7, local_24 = iVar2 + 1,
                          local_24 < (int)(uint)abStack_3f1f[local_44 * 0x1cf]) {
                      iVar7 = local_24;
                      if ((*(int *)((int)auStack_3fca +
                                   (local_28 + 0x16) * 8 + local_44 * 0x1cf + -4) ==
                           *(int *)((int)auStack_3fca + (iVar2 + 0x17) * 8 + local_44 * 0x1cf + -4))
                         && (iVar7 = local_24,
                            *(short *)((int)auStack_3fca + (local_28 + 0x16) * 8 + local_44 * 0x1cf)
                            == *(short *)((int)auStack_3fca + (iVar2 + 0x17) * 8 + local_44 * 0x1cf)
                            )) {
                        uVar6 = LineFunc(0x905e,
                                         "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        goto LAB_081fe49f;
                      }
                    }
                  }
                  pCVar8 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
                  local_40 = (CPrivateStore *)
                             private_store::CPrivateStoreMgr::FindStoreSeller(pCVar8,param_1);
                  if (((local_40 != (CPrivateStore *)0x0) &&
                      (cVar3 = private_store::CPrivateStore::isDollCreated(local_40), cVar3 != '\0')
                      ) && (*(int *)((int)&local_3fd3 + local_44 * 0x1cf) == 0x1caad)) {
                    WongWork::CCeraShop::ProcessError
                              (GlobalData::s_pCeraShop,param_1,0xe7,0,local_3fd3,1,1,'\0');
                    uVar6 = 0;
                    goto LAB_081fe49f;
                  }
                  uVar6 = *(undefined4 *)((int)&local_3fd3 + local_44 * 0x1cf);
                  uVar5 = (uint)local_3ffd;
                  uVar10 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar12 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  uVar11 = CUser::get_acc_id(param_1);
                  uVar13 = NumberToString(uVar11,0);
                  cMyTrace::cMyTrace(local_58,
                                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x9070,0);
                  cMyTrace::operator()
                            (local_58,
                             "NEXON BILLING : BuyCeraShopItem m_id(%s), charac_no(%d), charac_name(%s), buytype(%d), product_no(%d)"
                             ,uVar13,uVar12,uVar10,uVar5,uVar6);
                }
                pSVar14 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
                cVar3 = ServiceRestrictManager::isRestricted(pSVar14,param_1,1,0x11);
                if (cVar3 == '\0') {
                  local_48 = CSecu_ProtectionField::Check
                                       (GlobalData::s_pSecuProtectionField,param_1,0x38);
                  if (local_48 == 0) {
                    cVar3 = useCountDownCoinInFreeCoinDungeon(this,param_1,local_400c);
                    if (cVar3 == '\0') {
                      if (local_3ffd == 1) {
                        MSG_CHECK_MAIL_RECEIVER::
                        set<(MSG_CHECK_MAIL_RECEIVER::ENUM_MAILBOX_CHECKTYPE)1,MSG_BUY_CERASHOP_ITEM>
                                  (local_7f94,local_400c);
                        uVar5 = WongWork::CMailBoxHelper::ReqDBCheckReceiver
                                          (param_1,acStack_3ffc,local_7f94);
                        local_20 = uVar5;
                        if (uVar5 != 0) {
                          uVar6 = CUser::get_charac_no(param_1,-1);
                          LogManager::logFormat
                                    (1,"PacketDispatcher_Impl_1.cpp",
                                     "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x90c2,"[ITEM_GIFT] Fail charac_no[%u] error_code[%d]",uVar6,
                                     uVar5);
                          CUser::SendCmdErrorPacket2Byte(param_1,0x43,local_20 & 0xffff);
                        }
                        uVar6 = 0;
                      }
                      else {
                        cVar3 = ItemVendingMachine::BuyItem
                                          (GlobalData::s_pItemVendingMachine,param_1,local_400c);
                        if (cVar3 == '\0') {
                          uVar6 = LineFunc(0x90ce,
                                           "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                                           ,0,0);
                        }
                        else {
                          uVar6 = 0;
                        }
                      }
                    }
                    else {
                      WongWork::CCeraShop::ProcessError
                                (GlobalData::s_pCeraShop,param_1,0x13,0,0,1,1,'\0');
                      uVar6 = 0;
                    }
                  }
                  else {
                    uVar4 = CSecu_ProtectionField::GetCashShopErr
                                      (GlobalData::s_pSecuProtectionField,local_48);
                    WongWork::CCeraShop::ProcessError
                              (GlobalData::s_pCeraShop,param_1,uVar4,0,local_3fd3,1,1,'\0');
                    uVar6 = 0;
                  }
                }
                else {
                  WongWork::CCeraShop::ProcessError
                            (GlobalData::s_pCeraShop,param_1,0xd1,0,local_3fd3,1,1,local_3ffd);
                  uVar6 = 0;
                }
              }
            }
          }
          else {
            uVar6 = LineFunc(0x8fb7,
                             "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
      }
      else {
        uVar6 = LineFunc(0x8fa9,
                         "virtual int Dispatcher_BuyCeraShopItem::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      WongWork::CCeraShop::ProcessError(GlobalData::s_pCeraShop,param_1,0x13,0,0,1,1,'\0');
      uVar6 = 0;
    }
  }
  else {
    WongWork::CCeraShop::ProcessError(GlobalData::s_pCeraShop,param_1,0x3c,0,0,1,1,'\0');
    uVar6 = 0;
  }
LAB_081fe49f:
  PacketGuard::~PacketGuard(local_84);
  return uVar6;
}
```
