# dispatch_sig

`_ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_Login` | `0x081e8c78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e8c78  _ZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)
# range [0x081e8c78, 0x081e9e83]
081e8c78 +0x0000:  push   %ebp
081e8c79 +0x0001:  mov    %esp,%ebp
081e8c7b +0x0003:  push   %esi
081e8c7c +0x0004:  push   %ebx
081e8c7d +0x0005:  sub    $0x1c0,%esp
081e8c83 +0x000b:  mov    0xc(%ebp),%eax
081e8c86 +0x000e:  mov    %eax,(%esp)
081e8c89 +0x0011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e8c8e +0x0016:  cmp    $0x1,%eax
081e8c91 +0x0019:  setne  %al
081e8c94 +0x001c:  test   %al,%al
081e8c96 +0x001e:  je     081e8d3f <+0xc7>
081e8c9c +0x0024:  lea    -0xc4(%ebp),%eax
081e8ca2 +0x002a:  mov    %eax,(%esp)
081e8ca5 +0x002d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e8caa +0x0032:  movl   $0x3,0x8(%esp)
081e8cb2 +0x003a:  movl   $0x1,0x4(%esp)
081e8cba +0x0042:  lea    -0xc4(%ebp),%eax
081e8cc0 +0x0048:  mov    %eax,(%esp)
081e8cc3 +0x004b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e8cc8 +0x0050:  movl   $0x1,0x4(%esp)
081e8cd0 +0x0058:  lea    -0xc4(%ebp),%eax
081e8cd6 +0x005e:  mov    %eax,(%esp)
081e8cd9 +0x0061:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e8cde +0x0066:  movl   $0x1,0x4(%esp)
081e8ce6 +0x006e:  lea    -0xc4(%ebp),%eax
081e8cec +0x0074:  mov    %eax,(%esp)
081e8cef +0x0077:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e8cf4 +0x007c:  lea    -0xc4(%ebp),%eax
081e8cfa +0x0082:  mov    %eax,0x4(%esp)
081e8cfe +0x0086:  mov    0xc(%ebp),%eax
081e8d01 +0x0089:  mov    %eax,(%esp)
081e8d04 +0x008c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e8d09 +0x0091:  mov    $0x0,%ebx
081e8d0e +0x0096:  lea    -0xc4(%ebp),%eax
081e8d14 +0x009c:  mov    %eax,(%esp)
081e8d17 +0x009f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e8d1c +0x00a4:  jmp    081e9e77 <+0x11ff>
081e8d21 +0x00a9:  mov    %edx,%ebx
081e8d23 +0x00ab:  mov    %eax,%esi
081e8d25 +0x00ad:  lea    -0xc4(%ebp),%eax
081e8d2b +0x00b3:  mov    %eax,(%esp)
081e8d2e +0x00b6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e8d33 +0x00bb:  mov    %esi,%eax
081e8d35 +0x00bd:  mov    %ebx,%edx
081e8d37 +0x00bf:  mov    %eax,(%esp)
081e8d3a +0x00c2:  call   08ae3750 <_Unwind_Resume>
081e8d3f +0x00c7:  mov    0xc(%ebp),%eax
081e8d42 +0x00ca:  mov    %eax,(%esp)
081e8d45 +0x00cd:  call   08230246 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58f0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58f0
081e8d4a +0x00d2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081e8d4f +0x00d7:  mov    %eax,(%esp)
081e8d52 +0x00da:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
081e8d57 +0x00df:  cmp    $0x6,%eax
081e8d5a +0x00e2:  sete   %al
081e8d5d +0x00e5:  test   %al,%al
081e8d5f +0x00e7:  je     081e8eab <+0x233>
081e8d65 +0x00ed:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e8d6a +0x00f2:  movl   $0x21,0x4(%esp)
081e8d72 +0x00fa:  mov    %eax,(%esp)
081e8d75 +0x00fd:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e8d7a +0x0102:  mov    (%eax),%edx
081e8d7c +0x0104:  add    $0x34,%edx
081e8d7f +0x0107:  mov    (%edx),%edx
081e8d81 +0x0109:  movl   $0x0,0x4(%esp)
081e8d89 +0x0111:  mov    %eax,(%esp)
081e8d8c +0x0114:  call   *%edx
081e8d8e +0x0116:  xor    $0x1,%eax
081e8d91 +0x0119:  test   %al,%al
081e8d93 +0x011b:  je     081e8eab <+0x233>
081e8d99 +0x0121:  lea    -0xd0(%ebp),%eax
081e8d9f +0x0127:  mov    %eax,(%esp)
081e8da2 +0x012a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e8da7 +0x012f:  movl   $0x1,0x8(%esp)
081e8daf +0x0137:  movl   $0x1,0x4(%esp)
081e8db7 +0x013f:  lea    -0xd0(%ebp),%eax
081e8dbd +0x0145:  mov    %eax,(%esp)
081e8dc0 +0x0148:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e8dc5 +0x014d:  movl   $0x0,0x4(%esp)
081e8dcd +0x0155:  lea    -0xd0(%ebp),%eax
081e8dd3 +0x015b:  mov    %eax,(%esp)
081e8dd6 +0x015e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e8ddb +0x0163:  movl   $0x42,0x4(%esp)
081e8de3 +0x016b:  lea    -0xd0(%ebp),%eax
081e8de9 +0x0171:  mov    %eax,(%esp)
081e8dec +0x0174:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e8df1 +0x0179:  movl   $0x1,0x4(%esp)
081e8df9 +0x0181:  lea    -0xd0(%ebp),%eax
081e8dff +0x0187:  mov    %eax,(%esp)
081e8e02 +0x018a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e8e07 +0x018f:  lea    -0xd0(%ebp),%eax
081e8e0d +0x0195:  mov    %eax,0x4(%esp)
081e8e11 +0x0199:  mov    0xc(%ebp),%eax
081e8e14 +0x019c:  mov    %eax,(%esp)
081e8e17 +0x019f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e8e1c +0x01a4:  movl   $0x0,0xc(%esp)
081e8e24 +0x01ac:  movl   $0x65f4,0x8(%esp)
081e8e2c +0x01b4:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e8e34 +0x01bc:  lea    -0x80(%ebp),%eax
081e8e37 +0x01bf:  mov    %eax,(%esp)
081e8e3a +0x01c2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e8e3f +0x01c7:  movl   $"Can't Enter Into Guild War Channel ",0x4(%esp)
081e8e47 +0x01cf:  lea    -0x80(%ebp),%eax
081e8e4a +0x01d2:  mov    %eax,(%esp)
081e8e4d +0x01d5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e8e52 +0x01da:  movl   $0x0,0xc(%esp)
081e8e5a +0x01e2:  movl   $0x1,0x8(%esp)
081e8e62 +0x01ea:  movl   $0x16,0x4(%esp)
081e8e6a +0x01f2:  mov    0xc(%ebp),%eax
081e8e6d +0x01f5:  mov    %eax,(%esp)
081e8e70 +0x01f8:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
081e8e75 +0x01fd:  mov    $0x0,%ebx
081e8e7a +0x0202:  lea    -0xd0(%ebp),%eax
081e8e80 +0x0208:  mov    %eax,(%esp)
081e8e83 +0x020b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e8e88 +0x0210:  jmp    081e9e77 <+0x11ff>
081e8e8d +0x0215:  mov    %edx,%ebx
081e8e8f +0x0217:  mov    %eax,%esi
081e8e91 +0x0219:  lea    -0xd0(%ebp),%eax
081e8e97 +0x021f:  mov    %eax,(%esp)
081e8e9a +0x0222:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e8e9f +0x0227:  mov    %esi,%eax
081e8ea1 +0x0229:  mov    %ebx,%edx
081e8ea3 +0x022b:  mov    %eax,(%esp)
081e8ea6 +0x022e:  call   08ae3750 <_Unwind_Resume>
081e8eab +0x0233:  movl   $0xbf,0x8(%esp)
081e8eb3 +0x023b:  movl   $0x0,0x4(%esp)
081e8ebb +0x0243:  lea    -0x1a7(%ebp),%eax
081e8ec1 +0x0249:  mov    %eax,(%esp)
081e8ec4 +0x024c:  call   0807dcc0 <_init+0x5b8>
081e8ec9 +0x0251:  movl   $0x0,-0x84(%ebp)
081e8ed3 +0x025b:  lea    -0x84(%ebp),%eax
081e8ed9 +0x0261:  mov    %eax,0x4(%esp)
081e8edd +0x0265:  mov    0x10(%ebp),%eax
081e8ee0 +0x0268:  mov    %eax,(%esp)
081e8ee3 +0x026b:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081e8ee8 +0x0270:  xor    $0x1,%eax
081e8eeb +0x0273:  test   %al,%al
081e8eed +0x0275:  je     081e8f1a <+0x2a2>
081e8eef +0x0277:  movl   $0x0,0xc(%esp)
081e8ef7 +0x027f:  movl   $0x0,0x8(%esp)
081e8eff +0x0287:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e8f07 +0x028f:  movl   $0x6601,(%esp)
081e8f0e +0x0296:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e8f13 +0x029b:  mov    %eax,%ebx
081e8f15 +0x029d:  jmp    081e9e77 <+0x11ff>
081e8f1a +0x02a2:  mov    -0x84(%ebp),%eax
081e8f20 +0x02a8:  cmp    $0xe10,%eax
081e8f25 +0x02ad:  jbe    081e8f9a <+0x322>
081e8f27 +0x02af:  mov    -0x84(%ebp),%ebx
081e8f2d +0x02b5:  movl   $0x5,0xc(%esp)
081e8f35 +0x02bd:  movl   $0x6605,0x8(%esp)
081e8f3d +0x02c5:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e8f45 +0x02cd:  lea    -0x70(%ebp),%eax
081e8f48 +0x02d0:  mov    %eax,(%esp)
081e8f4b +0x02d3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e8f50 +0x02d8:  movl   $0xe10,0xc(%esp)
081e8f58 +0x02e0:  mov    %ebx,0x8(%esp)
081e8f5c +0x02e4:  movl   $"[Taiwan, Auth] Invalid patch time. (time:%d,limit:%d)",0x4(%esp)
081e8f64 +0x02ec:  lea    -0x70(%ebp),%eax
081e8f67 +0x02ef:  mov    %eax,(%esp)
081e8f6a +0x02f2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e8f6f +0x02f7:  movl   $0x0,0xc(%esp)
081e8f77 +0x02ff:  movl   $0x0,0x8(%esp)
081e8f7f +0x0307:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e8f87 +0x030f:  movl   $0x6607,(%esp)
081e8f8e +0x0316:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e8f93 +0x031b:  mov    %eax,%ebx
081e8f95 +0x031d:  jmp    081e9e77 <+0x11ff>
081e8f9a +0x0322:  movl   $0x0,-0x88(%ebp)
081e8fa4 +0x032c:  lea    -0x88(%ebp),%eax
081e8faa +0x0332:  mov    %eax,0x4(%esp)
081e8fae +0x0336:  mov    0x10(%ebp),%eax
081e8fb1 +0x0339:  mov    %eax,(%esp)
081e8fb4 +0x033c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081e8fb9 +0x0341:  xor    $0x1,%eax
081e8fbc +0x0344:  test   %al,%al
081e8fbe +0x0346:  je     081e8feb <+0x373>
081e8fc0 +0x0348:  movl   $0x0,0xc(%esp)
081e8fc8 +0x0350:  movl   $0x0,0x8(%esp)
081e8fd0 +0x0358:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e8fd8 +0x0360:  movl   $0x660d,(%esp)
081e8fdf +0x0367:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e8fe4 +0x036c:  mov    %eax,%ebx
081e8fe6 +0x036e:  jmp    081e9e77 <+0x11ff>
081e8feb +0x0373:  movl   $0x801,0x8(%esp)
081e8ff3 +0x037b:  movl   $0x0,0x4(%esp)
081e8ffb +0x0383:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE11garenaToken,(%esp)
081e9002 +0x038a:  call   0807dcc0 <_init+0x5b8>
081e9007 +0x038f:  mov    -0x88(%ebp),%eax
081e900d +0x0395:  mov    %eax,0xc(%esp)
081e9011 +0x0399:  movl   $0x801,0x8(%esp)
081e9019 +0x03a1:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE11garenaToken,0x4(%esp)
081e9021 +0x03a9:  mov    0x10(%ebp),%eax
081e9024 +0x03ac:  mov    %eax,(%esp)
081e9027 +0x03af:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081e902c +0x03b4:  xor    $0x1,%eax
081e902f +0x03b7:  test   %al,%al
081e9031 +0x03b9:  je     081e905e <+0x3e6>
081e9033 +0x03bb:  movl   $0x0,0xc(%esp)
081e903b +0x03c3:  movl   $0x0,0x8(%esp)
081e9043 +0x03cb:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e904b +0x03d3:  movl   $0x6612,(%esp)
081e9052 +0x03da:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e9057 +0x03df:  mov    %eax,%ebx
081e9059 +0x03e1:  jmp    081e9e77 <+0x11ff>
081e905e +0x03e6:  mov    0xc(%ebp),%eax
081e9061 +0x03e9:  mov    %eax,(%esp)
081e9064 +0x03ec:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
081e9069 +0x03f1:  mov    -0x88(%ebp),%edx
081e906f +0x03f7:  mov    %eax,0x8(%esp)
081e9073 +0x03fb:  mov    %edx,0x4(%esp)
081e9077 +0x03ff:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE11garenaToken,(%esp)
081e907e +0x0406:  call   081731f2 <_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE>  ; Taiwan::AuthGarenaToken::decrypt(char const*, int, Taiwan::GarenaAuthData&)
081e9083 +0x040b:  test   %eax,%eax
081e9085 +0x040d:  setne  %al
081e9088 +0x0410:  test   %al,%al
081e908a +0x0412:  je     081e90f5 <+0x47d>
081e908c +0x0414:  movl   $0x5,0xc(%esp)
081e9094 +0x041c:  movl   $0x6617,0x8(%esp)
081e909c +0x0424:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e90a4 +0x042c:  lea    -0x60(%ebp),%eax
081e90a7 +0x042f:  mov    %eax,(%esp)
081e90aa +0x0432:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e90af +0x0437:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE11garenaToken,0x8(%esp)
081e90b7 +0x043f:  movl   $"[Taiwan, Auth] Fail decrypt:%s",0x4(%esp)
081e90bf +0x0447:  lea    -0x60(%ebp),%eax
081e90c2 +0x044a:  mov    %eax,(%esp)
081e90c5 +0x044d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e90ca +0x0452:  movl   $0x0,0xc(%esp)
081e90d2 +0x045a:  movl   $0x0,0x8(%esp)
081e90da +0x0462:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e90e2 +0x046a:  movl   $0x6618,(%esp)
081e90e9 +0x0471:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e90ee +0x0476:  mov    %eax,%ebx
081e90f0 +0x0478:  jmp    081e9e77 <+0x11ff>
081e90f5 +0x047d:  mov    -0x84(%ebp),%ebx
081e90fb +0x0483:  mov    0xc(%ebp),%eax
081e90fe +0x0486:  mov    %eax,(%esp)
081e9101 +0x0489:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
081e9106 +0x048e:  mov    %ebx,0x4(%esp)
081e910a +0x0492:  mov    %eax,(%esp)
081e910d +0x0495:  call   08173034 <_ZN6Taiwan14GarenaAuthData12setPatchTimeEj>  ; Taiwan::GarenaAuthData::setPatchTime(unsigned int)
081e9112 +0x049a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081e9119 +0x04a1:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081e911e +0x04a6:  mov    %eax,-0x10(%ebp)
081e9121 +0x04a9:  mov    0xc(%ebp),%eax
081e9124 +0x04ac:  mov    %eax,(%esp)
081e9127 +0x04af:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
081e912c +0x04b4:  mov    %eax,(%esp)
081e912f +0x04b7:  call   08173042 <_ZN6Taiwan14GarenaAuthData12getPatchTimeEv>  ; Taiwan::GarenaAuthData::getPatchTime()
081e9134 +0x04bc:  mov    %eax,%esi
081e9136 +0x04be:  mov    0xc(%ebp),%eax
081e9139 +0x04c1:  mov    %eax,(%esp)
081e913c +0x04c4:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
081e9141 +0x04c9:  mov    %eax,(%esp)
081e9144 +0x04cc:  call   08172fea <_ZN6Taiwan14GarenaAuthData12getTimeStampEv>  ; Taiwan::GarenaAuthData::getTimeStamp()
081e9149 +0x04d1:  mov    %eax,%ebx
081e914b +0x04d3:  movl   $0x0,0xc(%esp)
081e9153 +0x04db:  movl   $0x661e,0x8(%esp)
081e915b +0x04e3:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9163 +0x04eb:  lea    -0x50(%ebp),%eax
081e9166 +0x04ee:  mov    %eax,(%esp)
081e9169 +0x04f1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e916e +0x04f6:  mov    %esi,0x10(%esp)
081e9172 +0x04fa:  mov    -0x10(%ebp),%eax
081e9175 +0x04fd:  mov    %eax,0xc(%esp)
081e9179 +0x0501:  mov    %ebx,0x8(%esp)
081e917d +0x0505:  movl   $"[Taiwan, Auth] Token timestamp info. (token_time:%u, current_time:%u, patch_time:%d)",0x4(%esp)
081e9185 +0x050d:  lea    -0x50(%ebp),%eax
081e9188 +0x0510:  mov    %eax,(%esp)
081e918b +0x0513:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e9190 +0x0518:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
081e9195 +0x051d:  movl   $0x21,0xc(%esp)
081e919d +0x0525:  movl   $0x1,0x8(%esp)
081e91a5 +0x052d:  mov    0xc(%ebp),%edx
081e91a8 +0x0530:  mov    %edx,0x4(%esp)
081e91ac +0x0534:  mov    %eax,(%esp)
081e91af +0x0537:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
081e91b4 +0x053c:  test   %al,%al
081e91b6 +0x053e:  je     081e91dd <+0x565>
081e91b8 +0x0540:  movl   $0xd1,0x8(%esp)
081e91c0 +0x0548:  movl   $0x1,0x4(%esp)
081e91c8 +0x0550:  mov    0xc(%ebp),%eax
081e91cb +0x0553:  mov    %eax,(%esp)
081e91ce +0x0556:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e91d3 +0x055b:  mov    $0x0,%ebx
081e91d8 +0x0560:  jmp    081e9e77 <+0x11ff>
081e91dd +0x0565:  lea    -0x1a7(%ebp),%eax
081e91e3 +0x056b:  add    $0xd,%eax
081e91e6 +0x056e:  mov    %eax,0x4(%esp)
081e91ea +0x0572:  mov    0x10(%ebp),%eax
081e91ed +0x0575:  mov    %eax,(%esp)
081e91f0 +0x0578:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081e91f5 +0x057d:  xor    $0x1,%eax
081e91f8 +0x0580:  test   %al,%al
081e91fa +0x0582:  je     081e9227 <+0x5af>
081e91fc +0x0584:  movl   $0x0,0xc(%esp)
081e9204 +0x058c:  movl   $0x0,0x8(%esp)
081e920c +0x0594:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9214 +0x059c:  movl   $0x665f,(%esp)
081e921b +0x05a3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e9220 +0x05a8:  mov    %eax,%ebx
081e9222 +0x05aa:  jmp    081e9e77 <+0x11ff>
081e9227 +0x05af:  mov    -0x19a(%ebp),%eax
081e922d +0x05b5:  mov    %eax,0xc(%esp)
081e9231 +0x05b9:  movl   $0x18,0x8(%esp)
081e9239 +0x05c1:  lea    -0x1a7(%ebp),%eax
081e923f +0x05c7:  add    $0x11,%eax
081e9242 +0x05ca:  mov    %eax,0x4(%esp)
081e9246 +0x05ce:  mov    0x10(%ebp),%eax
081e9249 +0x05d1:  mov    %eax,(%esp)
081e924c +0x05d4:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081e9251 +0x05d9:  xor    $0x1,%eax
081e9254 +0x05dc:  test   %al,%al
081e9256 +0x05de:  je     081e9283 <+0x60b>
081e9258 +0x05e0:  movl   $0x0,0xc(%esp)
081e9260 +0x05e8:  movl   $0x0,0x8(%esp)
081e9268 +0x05f0:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9270 +0x05f8:  movl   $0x667d,(%esp)
081e9277 +0x05ff:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e927c +0x0604:  mov    %eax,%ebx
081e927e +0x0606:  jmp    081e9e77 <+0x11ff>
081e9283 +0x060b:  lea    -0x1a7(%ebp),%eax
081e9289 +0x0611:  add    $0x29,%eax
081e928c +0x0614:  mov    %eax,0x4(%esp)
081e9290 +0x0618:  mov    0x10(%ebp),%eax
081e9293 +0x061b:  mov    %eax,(%esp)
081e9296 +0x061e:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081e929b +0x0623:  xor    $0x1,%eax
081e929e +0x0626:  test   %al,%al
081e92a0 +0x0628:  je     081e92cd <+0x655>
081e92a2 +0x062a:  movl   $0x0,0xc(%esp)
081e92aa +0x0632:  movl   $0x0,0x8(%esp)
081e92b2 +0x063a:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e92ba +0x0642:  movl   $0x6692,(%esp)
081e92c1 +0x0649:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e92c6 +0x064e:  mov    %eax,%ebx
081e92c8 +0x0650:  jmp    081e9e77 <+0x11ff>
081e92cd +0x0655:  mov    -0x17e(%ebp),%eax
081e92d3 +0x065b:  cmp    $0x83,%eax
081e92d8 +0x0660:  jbe    081e9305 <+0x68d>
081e92da +0x0662:  movl   $0x0,0xc(%esp)
081e92e2 +0x066a:  movl   $0x0,0x8(%esp)
081e92ea +0x0672:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e92f2 +0x067a:  movl   $0x6698,(%esp)
081e92f9 +0x0681:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e92fe +0x0686:  mov    %eax,%ebx
081e9300 +0x0688:  jmp    081e9e77 <+0x11ff>
081e9305 +0x068d:  mov    -0x17e(%ebp),%eax
081e930b +0x0693:  mov    %eax,0xc(%esp)
081e930f +0x0697:  movl   $0x84,0x8(%esp)
081e9317 +0x069f:  lea    -0x1a7(%ebp),%eax
081e931d +0x06a5:  add    $0x2d,%eax
081e9320 +0x06a8:  mov    %eax,0x4(%esp)
081e9324 +0x06ac:  mov    0x10(%ebp),%eax
081e9327 +0x06af:  mov    %eax,(%esp)
081e932a +0x06b2:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081e932f +0x06b7:  xor    $0x1,%eax
081e9332 +0x06ba:  test   %al,%al
081e9334 +0x06bc:  je     081e9361 <+0x6e9>
081e9336 +0x06be:  movl   $0x0,0xc(%esp)
081e933e +0x06c6:  movl   $0x0,0x8(%esp)
081e9346 +0x06ce:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e934e +0x06d6:  movl   $0x66a8,(%esp)
081e9355 +0x06dd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e935a +0x06e2:  mov    %eax,%ebx
081e935c +0x06e4:  jmp    081e9e77 <+0x11ff>
081e9361 +0x06e9:  lea    -0x1a7(%ebp),%eax
081e9367 +0x06ef:  add    $0xb1,%eax
081e936c +0x06f4:  mov    %eax,0x4(%esp)
081e9370 +0x06f8:  mov    0x10(%ebp),%eax
081e9373 +0x06fb:  mov    %eax,(%esp)
081e9376 +0x06fe:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e937b +0x0703:  xor    $0x1,%eax
081e937e +0x0706:  test   %al,%al
081e9380 +0x0708:  je     081e93ad <+0x735>
081e9382 +0x070a:  movl   $0x0,0xc(%esp)
081e938a +0x0712:  movl   $0x0,0x8(%esp)
081e9392 +0x071a:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e939a +0x0722:  movl   $0x6734,(%esp)
081e93a1 +0x0729:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e93a6 +0x072e:  mov    %eax,%ebx
081e93a8 +0x0730:  jmp    081e9e77 <+0x11ff>
081e93ad +0x0735:  movzbl -0xf6(%ebp),%eax
081e93b4 +0x073c:  test   %al,%al
081e93b6 +0x073e:  je     081e9400 <+0x788>
081e93b8 +0x0740:  movzbl -0xf6(%ebp),%eax
081e93bf +0x0747:  cmp    $0x1,%al
081e93c1 +0x0749:  je     081e9400 <+0x788>
081e93c3 +0x074b:  movzbl -0xf6(%ebp),%eax
081e93ca +0x0752:  cmp    $0x2,%al
081e93cc +0x0754:  je     081e9400 <+0x788>
081e93ce +0x0756:  mov    0xc(%ebp),%eax
081e93d1 +0x0759:  mov    %eax,(%esp)
081e93d4 +0x075c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e93d9 +0x0761:  mov    %eax,0xc(%esp)
081e93dd +0x0765:  movl   $0x0,0x8(%esp)
081e93e5 +0x076d:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e93ed +0x0775:  movl   $0x6738,(%esp)
081e93f4 +0x077c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e93f9 +0x0781:  mov    %eax,%ebx
081e93fb +0x0783:  jmp    081e9e77 <+0x11ff>
081e9400 +0x0788:  movl   $0x0,-0x8c(%ebp)
081e940a +0x0792:  lea    -0x8c(%ebp),%eax
081e9410 +0x0798:  mov    %eax,0x4(%esp)
081e9414 +0x079c:  mov    0x10(%ebp),%eax
081e9417 +0x079f:  mov    %eax,(%esp)
081e941a +0x07a2:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e941f +0x07a7:  xor    $0x1,%eax
081e9422 +0x07aa:  test   %al,%al
081e9424 +0x07ac:  je     081e9458 <+0x7e0>
081e9426 +0x07ae:  mov    0xc(%ebp),%eax
081e9429 +0x07b1:  mov    %eax,(%esp)
081e942c +0x07b4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e9431 +0x07b9:  mov    %eax,0xc(%esp)
081e9435 +0x07bd:  movl   $0x0,0x8(%esp)
081e943d +0x07c5:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9445 +0x07cd:  movl   $0x673f,(%esp)
081e944c +0x07d4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e9451 +0x07d9:  mov    %eax,%ebx
081e9453 +0x07db:  jmp    081e9e77 <+0x11ff>
081e9458 +0x07e0:  mov    -0x8c(%ebp),%eax
081e945e +0x07e6:  cmp    $0x8,%eax
081e9461 +0x07e9:  je     081e9495 <+0x81d>
081e9463 +0x07eb:  mov    0xc(%ebp),%eax
081e9466 +0x07ee:  mov    %eax,(%esp)
081e9469 +0x07f1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e946e +0x07f6:  mov    %eax,0xc(%esp)
081e9472 +0x07fa:  movl   $0x0,0x8(%esp)
081e947a +0x0802:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9482 +0x080a:  movl   $0x6741,(%esp)
081e9489 +0x0811:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e948e +0x0816:  mov    %eax,%ebx
081e9490 +0x0818:  jmp    081e9e77 <+0x11ff>
081e9495 +0x081d:  movl   $0x8,0x8(%esp)
081e949d +0x0825:  lea    -0x1a7(%ebp),%eax
081e94a3 +0x082b:  add    $0xb6,%eax
081e94a8 +0x0830:  mov    %eax,0x4(%esp)
081e94ac +0x0834:  mov    0x10(%ebp),%eax
081e94af +0x0837:  mov    %eax,(%esp)
081e94b2 +0x083a:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081e94b7 +0x083f:  xor    $0x1,%eax
081e94ba +0x0842:  test   %al,%al
081e94bc +0x0844:  je     081e94e9 <+0x871>
081e94be +0x0846:  movl   $0x0,0xc(%esp)
081e94c6 +0x084e:  movl   $0x0,0x8(%esp)
081e94ce +0x0856:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e94d6 +0x085e:  movl   $0x6742,(%esp)
081e94dd +0x0865:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e94e2 +0x086a:  mov    %eax,%ebx
081e94e4 +0x086c:  jmp    081e9e77 <+0x11ff>
081e94e9 +0x0871:  mov    -0x8c(%ebp),%eax
081e94ef +0x0877:  mov    %eax,0x8(%esp)
081e94f3 +0x087b:  lea    -0x94(%ebp),%eax
081e94f9 +0x0881:  mov    %eax,0x4(%esp)
081e94fd +0x0885:  lea    -0x1a7(%ebp),%eax
081e9503 +0x088b:  add    $0xb6,%eax
081e9508 +0x0890:  mov    %eax,(%esp)
081e950b +0x0893:  call   0826333a <_ZN24Dispatcher_MouseRegister15decryptPasswordEPKcPcj>  ; Dispatcher_MouseRegister::decryptPassword(char const*, char*, unsigned int)
081e9510 +0x0898:  xor    $0x1,%eax
081e9513 +0x089b:  test   %al,%al
081e9515 +0x089d:  je     081e9564 <+0x8ec>
081e9517 +0x089f:  movl   $0x1,0x8(%esp)
081e951f +0x08a7:  movl   $0x1,0x4(%esp)
081e9527 +0x08af:  mov    0xc(%ebp),%eax
081e952a +0x08b2:  mov    %eax,(%esp)
081e952d +0x08b5:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e9532 +0x08ba:  mov    0xc(%ebp),%eax
081e9535 +0x08bd:  mov    %eax,(%esp)
081e9538 +0x08c0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e953d +0x08c5:  mov    %eax,0xc(%esp)
081e9541 +0x08c9:  movl   $0x0,0x8(%esp)
081e9549 +0x08d1:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9551 +0x08d9:  movl   $0x674e,(%esp)
081e9558 +0x08e0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e955d +0x08e5:  mov    %eax,%ebx
081e955f +0x08e7:  jmp    081e9e77 <+0x11ff>
081e9564 +0x08ec:  lea    -0x94(%ebp),%eax
081e956a +0x08f2:  mov    %eax,(%esp)
081e956d +0x08f5:  call   082632ca <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc>  ; Dispatcher_MouseRegister::checkValiedPassword(char const*)
081e9572 +0x08fa:  xor    $0x1,%eax
081e9575 +0x08fd:  test   %al,%al
081e9577 +0x08ff:  je     081e95c6 <+0x94e>
081e9579 +0x0901:  movl   $0x1,0x8(%esp)
081e9581 +0x0909:  movl   $0x1,0x4(%esp)
081e9589 +0x0911:  mov    0xc(%ebp),%eax
081e958c +0x0914:  mov    %eax,(%esp)
081e958f +0x0917:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e9594 +0x091c:  mov    0xc(%ebp),%eax
081e9597 +0x091f:  mov    %eax,(%esp)
081e959a +0x0922:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e959f +0x0927:  mov    %eax,0xc(%esp)
081e95a3 +0x092b:  movl   $0x0,0x8(%esp)
081e95ab +0x0933:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e95b3 +0x093b:  movl   $0x6754,(%esp)
081e95ba +0x0942:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e95bf +0x0947:  mov    %eax,%ebx
081e95c1 +0x0949:  jmp    081e9e77 <+0x11ff>
081e95c6 +0x094e:  movl   $0x7,0x8(%esp)
081e95ce +0x0956:  lea    -0x94(%ebp),%eax
081e95d4 +0x095c:  mov    %eax,0x4(%esp)
081e95d8 +0x0960:  lea    -0x1a7(%ebp),%eax
081e95de +0x0966:  add    $0xb6,%eax
081e95e3 +0x096b:  mov    %eax,(%esp)
081e95e6 +0x096e:  call   0807d8a0 <_init+0x198>
081e95eb +0x0973:  lea    -0x98(%ebp),%eax
081e95f1 +0x0979:  mov    %eax,0x4(%esp)
081e95f5 +0x097d:  mov    0x10(%ebp),%eax
081e95f8 +0x0980:  mov    %eax,(%esp)
081e95fb +0x0983:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081e9600 +0x0988:  xor    $0x1,%eax
081e9603 +0x098b:  test   %al,%al
081e9605 +0x098d:  je     081e9632 <+0x9ba>
081e9607 +0x098f:  movl   $0x0,0xc(%esp)
081e960f +0x0997:  movl   $0x0,0x8(%esp)
081e9617 +0x099f:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e961f +0x09a7:  movl   $0x675c,(%esp)
081e9626 +0x09ae:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e962b +0x09b3:  mov    %eax,%ebx
081e962d +0x09b5:  jmp    081e9e77 <+0x11ff>
081e9632 +0x09ba:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e9637 +0x09bf:  mov    0x3c0(%eax),%edx
081e963d +0x09c5:  mov    -0x98(%ebp),%eax
081e9643 +0x09cb:  cmp    %eax,%edx
081e9645 +0x09cd:  setne  %al
081e9648 +0x09d0:  test   %al,%al
081e964a +0x09d2:  je     081e977b <+0xb03>
081e9650 +0x09d8:  lea    -0xdc(%ebp),%eax
081e9656 +0x09de:  mov    %eax,(%esp)
081e9659 +0x09e1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e965e +0x09e6:  movl   $0x1,0x8(%esp)
081e9666 +0x09ee:  movl   $0x1,0x4(%esp)
081e966e +0x09f6:  lea    -0xdc(%ebp),%eax
081e9674 +0x09fc:  mov    %eax,(%esp)
081e9677 +0x09ff:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e967c +0x0a04:  movl   $0x0,0x4(%esp)
081e9684 +0x0a0c:  lea    -0xdc(%ebp),%eax
081e968a +0x0a12:  mov    %eax,(%esp)
081e968d +0x0a15:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e9692 +0x0a1a:  movl   $0x17,0x4(%esp)
081e969a +0x0a22:  lea    -0xdc(%ebp),%eax
081e96a0 +0x0a28:  mov    %eax,(%esp)
081e96a3 +0x0a2b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e96a8 +0x0a30:  movl   $0x1,0x4(%esp)
081e96b0 +0x0a38:  lea    -0xdc(%ebp),%eax
081e96b6 +0x0a3e:  mov    %eax,(%esp)
081e96b9 +0x0a41:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e96be +0x0a46:  lea    -0xdc(%ebp),%eax
081e96c4 +0x0a4c:  mov    %eax,0x4(%esp)
081e96c8 +0x0a50:  mov    0xc(%ebp),%eax
081e96cb +0x0a53:  mov    %eax,(%esp)
081e96ce +0x0a56:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e96d3 +0x0a5b:  mov    0x8(%ebp),%eax
081e96d6 +0x0a5e:  mov    0x4(%eax),%eax
081e96d9 +0x0a61:  lea    0x1(%eax),%edx
081e96dc +0x0a64:  mov    0x8(%ebp),%eax
081e96df +0x0a67:  mov    %edx,0x4(%eax)
081e96e2 +0x0a6a:  mov    0x8(%ebp),%eax
081e96e5 +0x0a6d:  mov    0x4(%eax),%ebx
081e96e8 +0x0a70:  movl   $0x0,0xc(%esp)
081e96f0 +0x0a78:  movl   $0x6813,0x8(%esp)
081e96f8 +0x0a80:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9700 +0x0a88:  lea    -0x40(%ebp),%eax
081e9703 +0x0a8b:  mov    %eax,(%esp)
081e9706 +0x0a8e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e970b +0x0a93:  mov    %ebx,0x8(%esp)
081e970f +0x0a97:  movl   $"version dismatched: count(%d)",0x4(%esp)
081e9717 +0x0a9f:  lea    -0x40(%ebp),%eax
081e971a +0x0aa2:  mov    %eax,(%esp)
081e971d +0x0aa5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e9722 +0x0aaa:  movl   $0x0,0xc(%esp)
081e972a +0x0ab2:  movl   $0x0,0x8(%esp)
081e9732 +0x0aba:  movl   $0x19,0x4(%esp)
081e973a +0x0ac2:  mov    0xc(%ebp),%eax
081e973d +0x0ac5:  mov    %eax,(%esp)
081e9740 +0x0ac8:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
081e9745 +0x0acd:  mov    $0x0,%ebx
081e974a +0x0ad2:  lea    -0xdc(%ebp),%eax
081e9750 +0x0ad8:  mov    %eax,(%esp)
081e9753 +0x0adb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e9758 +0x0ae0:  jmp    081e9e77 <+0x11ff>
081e975d +0x0ae5:  mov    %edx,%ebx
081e975f +0x0ae7:  mov    %eax,%esi
081e9761 +0x0ae9:  lea    -0xdc(%ebp),%eax
081e9767 +0x0aef:  mov    %eax,(%esp)
081e976a +0x0af2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e976f +0x0af7:  mov    %esi,%eax
081e9771 +0x0af9:  mov    %ebx,%edx
081e9773 +0x0afb:  mov    %eax,(%esp)
081e9776 +0x0afe:  call   08ae3750 <_Unwind_Resume>
081e977b +0x0b03:  movl   $0x0,-0x9c(%ebp)
081e9785 +0x0b0d:  lea    -0x9c(%ebp),%eax
081e978b +0x0b13:  mov    %eax,0x4(%esp)
081e978f +0x0b17:  mov    0x10(%ebp),%eax
081e9792 +0x0b1a:  mov    %eax,(%esp)
081e9795 +0x0b1d:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081e979a +0x0b22:  xor    $0x1,%eax
081e979d +0x0b25:  test   %al,%al
081e979f +0x0b27:  je     081e97cc <+0xb54>
081e97a1 +0x0b29:  movl   $0x0,0xc(%esp)
081e97a9 +0x0b31:  movl   $0x0,0x8(%esp)
081e97b1 +0x0b39:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e97b9 +0x0b41:  movl   $0x681b,(%esp)
081e97c0 +0x0b48:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e97c5 +0x0b4d:  mov    %eax,%ebx
081e97c7 +0x0b4f:  jmp    081e9e77 <+0x11ff>
081e97cc +0x0b54:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
081e97d1 +0x0b59:  movl   $0x6972,0x8(%esp)
081e97d9 +0x0b61:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081e97e1 +0x0b69:  mov    %eax,(%esp)
081e97e4 +0x0b6c:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
081e97e9 +0x0b71:  movl   $0x1,0x8(%esp)
081e97f1 +0x0b79:  mov    %eax,0x4(%esp)
081e97f5 +0x0b7d:  lea    -0xa4(%ebp),%eax
081e97fb +0x0b83:  mov    %eax,(%esp)
081e97fe +0x0b86:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081e9803 +0x0b8b:  lea    -0xa4(%ebp),%eax
081e9809 +0x0b91:  mov    %eax,(%esp)
081e980c +0x0b94:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081e9811 +0x0b99:  movl   $0x3,0x4(%esp)
081e9819 +0x0ba1:  mov    %eax,(%esp)
081e981c +0x0ba4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081e9821 +0x0ba9:  mov    0xc(%ebp),%eax
081e9824 +0x0bac:  mov    %eax,(%esp)
081e9827 +0x0baf:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081e982c +0x0bb4:  mov    %eax,%ebx
081e982e +0x0bb6:  lea    -0xa4(%ebp),%eax
081e9834 +0x0bbc:  mov    %eax,(%esp)
081e9837 +0x0bbf:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081e983c +0x0bc4:  mov    %ebx,0x4(%esp)
081e9840 +0x0bc8:  mov    %eax,(%esp)
081e9843 +0x0bcb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081e9848 +0x0bd0:  lea    -0xa4(%ebp),%eax
081e984e +0x0bd6:  mov    %eax,(%esp)
081e9851 +0x0bd9:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081e9856 +0x0bde:  mov    %eax,(%esp)
081e9859 +0x0be1:  call   08237712 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcdbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcdbc
081e985e +0x0be6:  mov    %eax,-0xc(%ebp)
081e9861 +0x0be9:  movl   $0x4358,0x8(%esp)
081e9869 +0x0bf1:  movl   $0x0,0x4(%esp)
081e9871 +0x0bf9:  mov    -0xc(%ebp),%eax
081e9874 +0x0bfc:  mov    %eax,(%esp)
081e9877 +0x0bff:  call   0807dcc0 <_init+0x5b8>
081e987c +0x0c04:  mov    -0xc(%ebp),%eax
081e987f +0x0c07:  add    $0x3a38,%eax
081e9884 +0x0c0c:  mov    %eax,0x4(%esp)
081e9888 +0x0c10:  mov    0x10(%ebp),%eax
081e988b +0x0c13:  mov    %eax,(%esp)
081e988e +0x0c16:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081e9893 +0x0c1b:  xor    $0x1,%eax
081e9896 +0x0c1e:  test   %al,%al
081e9898 +0x0c20:  je     081e98c5 <+0xc4d>
081e989a +0x0c22:  movl   $0x0,0xc(%esp)
081e98a2 +0x0c2a:  movl   $0x0,0x8(%esp)
081e98aa +0x0c32:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e98b2 +0x0c3a:  movl   $0x6980,(%esp)
081e98b9 +0x0c41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e98be +0x0c46:  mov    %eax,%ebx
081e98c0 +0x0c48:  jmp    081e9e69 <+0x11f1>
081e98c5 +0x0c4d:  mov    -0xc(%ebp),%eax
081e98c8 +0x0c50:  movzwl 0x3a38(%eax),%eax
081e98cf +0x0c57:  test   %ax,%ax
081e98d2 +0x0c5a:  js     081e98e4 <+0xc6c>
081e98d4 +0x0c5c:  mov    -0xc(%ebp),%eax
081e98d7 +0x0c5f:  movzwl 0x3a38(%eax),%eax
081e98de +0x0c66:  cmp    $0x11,%ax
081e98e2 +0x0c6a:  jle    081e98f0 <+0xc78>
081e98e4 +0x0c6c:  mov    -0xc(%ebp),%eax
081e98e7 +0x0c6f:  movw   $0x0,0x3a38(%eax)
081e98f0 +0x0c78:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081e98f5 +0x0c7d:  mov    %eax,(%esp)
081e98f8 +0x0c80:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081e98fd +0x0c85:  xor    $0x1,%eax
081e9900 +0x0c88:  test   %al,%al
081e9902 +0x0c8a:  je     081e9915 <+0xc9d>
081e9904 +0x0c8c:  mov    -0xc(%ebp),%eax
081e9907 +0x0c8f:  movw   $0x0,0x3a38(%eax)
081e9910 +0x0c98:  jmp    081e99ba <+0xd42>
081e9915 +0x0c9d:  mov    -0xc(%ebp),%eax
081e9918 +0x0ca0:  movzwl 0x3a38(%eax),%eax
081e991f +0x0ca7:  movswl %ax,%ebx
081e9922 +0x0caa:  movl   $0x0,0xc(%esp)
081e992a +0x0cb2:  movl   $0x699a,0x8(%esp)
081e9932 +0x0cba:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e993a +0x0cc2:  lea    -0x30(%ebp),%eax
081e993d +0x0cc5:  mov    %eax,(%esp)
081e9940 +0x0cc8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e9945 +0x0ccd:  mov    %ebx,0xc(%esp)
081e9949 +0x0cd1:  lea    -0x1a7(%ebp),%eax
081e994f +0x0cd7:  add    $0x11,%eax
081e9952 +0x0cda:  mov    %eax,0x8(%esp)
081e9956 +0x0cde:  movl   $"CheckLoginServerGroup user_id(%s), server_group(%d)",0x4(%esp)
081e995e +0x0ce6:  lea    -0x30(%ebp),%eax
081e9961 +0x0ce9:  mov    %eax,(%esp)
081e9964 +0x0cec:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e9969 +0x0cf1:  mov    -0xc(%ebp),%eax
081e996c +0x0cf4:  movzwl 0x3a38(%eax),%eax
081e9973 +0x0cfb:  cwtl
081e9974 +0x0cfc:  cmp    $0xa,%eax
081e9977 +0x0cff:  ja     081e99ba <+0xd42>
081e9979 +0x0d01:  mov    $0x1,%edx
081e997e +0x0d06:  mov    %edx,%ebx
081e9980 +0x0d08:  mov    %eax,%ecx
081e9982 +0x0d0a:  shl    %cl,%ebx
081e9984 +0x0d0c:  mov    %ebx,%eax
081e9986 +0x0d0e:  and    $0x580,%eax
081e998b +0x0d13:  test   %eax,%eax
081e998d +0x0d15:  je     081e99ba <+0xd42>
081e998f +0x0d17:  movl   $0x0,0xc(%esp)
081e9997 +0x0d1f:  movl   $0x0,0x8(%esp)
081e999f +0x0d27:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e99a7 +0x0d2f:  movl   $0x69a2,(%esp)
081e99ae +0x0d36:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e99b3 +0x0d3b:  mov    %eax,%ebx
081e99b5 +0x0d3d:  jmp    081e9e69 <+0x11f1>
081e99ba +0x0d42:  mov    -0xc(%ebp),%eax
081e99bd +0x0d45:  movzwl 0x3a38(%eax),%eax
081e99c4 +0x0d4c:  cwtl
081e99c5 +0x0d4d:  mov    %eax,0x4(%esp)
081e99c9 +0x0d51:  mov    0xc(%ebp),%eax
081e99cc +0x0d54:  mov    %eax,(%esp)
081e99cf +0x0d57:  call   082300ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5756>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5756
081e99d4 +0x0d5c:  movl   $0x0,-0xa8(%ebp)
081e99de +0x0d66:  lea    -0xa8(%ebp),%eax
081e99e4 +0x0d6c:  mov    %eax,0x4(%esp)
081e99e8 +0x0d70:  mov    0x10(%ebp),%eax
081e99eb +0x0d73:  mov    %eax,(%esp)
081e99ee +0x0d76:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e99f3 +0x0d7b:  xor    $0x1,%eax
081e99f6 +0x0d7e:  test   %al,%al
081e99f8 +0x0d80:  je     081e9a25 <+0xdad>
081e99fa +0x0d82:  movl   $0x0,0xc(%esp)
081e9a02 +0x0d8a:  movl   $0x0,0x8(%esp)
081e9a0a +0x0d92:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9a12 +0x0d9a:  movl   $0x69cf,(%esp)
081e9a19 +0x0da1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e9a1e +0x0da6:  mov    %eax,%ebx
081e9a20 +0x0da8:  jmp    081e9e69 <+0x11f1>
081e9a25 +0x0dad:  mov    -0xa8(%ebp),%eax
081e9a2b +0x0db3:  mov    %eax,0x4(%esp)
081e9a2f +0x0db7:  mov    0xc(%ebp),%eax
081e9a32 +0x0dba:  mov    %eax,(%esp)
081e9a35 +0x0dbd:  call   0822fd00 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53aa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53aa
081e9a3a +0x0dc2:  movb   $0x0,-0xa9(%ebp)
081e9a41 +0x0dc9:  lea    -0xa9(%ebp),%eax
081e9a47 +0x0dcf:  mov    %eax,0x4(%esp)
081e9a4b +0x0dd3:  mov    0x10(%ebp),%eax
081e9a4e +0x0dd6:  mov    %eax,(%esp)
081e9a51 +0x0dd9:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e9a56 +0x0dde:  xor    $0x1,%eax
081e9a59 +0x0de1:  test   %al,%al
081e9a5b +0x0de3:  je     081e9a64 <+0xdec>
081e9a5d +0x0de5:  movb   $0x0,-0xa9(%ebp)
081e9a64 +0x0dec:  movzbl -0xa9(%ebp),%eax
081e9a6b +0x0df3:  movzbl %al,%eax
081e9a6e +0x0df6:  mov    %eax,0x4(%esp)
081e9a72 +0x0dfa:  mov    0xc(%ebp),%eax
081e9a75 +0x0dfd:  mov    %eax,(%esp)
081e9a78 +0x0e00:  call   0822fe22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54cc
081e9a7d +0x0e05:  mov    0xc(%ebp),%eax
081e9a80 +0x0e08:  mov    %eax,(%esp)
081e9a83 +0x0e0b:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
081e9a88 +0x0e10:  mov    %eax,(%esp)
081e9a8b +0x0e13:  call   08172fc8 <_ZN6Taiwan14GarenaAuthData6getUidEv>  ; Taiwan::GarenaAuthData::getUid()
081e9a90 +0x0e18:  movl   $0x0,0x4(%esp)
081e9a98 +0x0e20:  mov    %eax,(%esp)
081e9a9b +0x0e23:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081e9aa0 +0x0e28:  mov    -0xc(%ebp),%edx
081e9aa3 +0x0e2b:  movl   $0x18,0x8(%esp)
081e9aab +0x0e33:  mov    %eax,0x4(%esp)
081e9aaf +0x0e37:  mov    %edx,(%esp)
081e9ab2 +0x0e3a:  call   0807d8d0 <_init+0x1c8>
081e9ab7 +0x0e3f:  mov    -0xc(%ebp),%eax
081e9aba +0x0e42:  add    $0x18,%eax
081e9abd +0x0e45:  movl   $0x84,0x8(%esp)
081e9ac5 +0x0e4d:  movl   $0x0,0x4(%esp)
081e9acd +0x0e55:  mov    %eax,(%esp)
081e9ad0 +0x0e58:  call   0807dcc0 <_init+0x5b8>
081e9ad5 +0x0e5d:  mov    0xc(%ebp),%eax
081e9ad8 +0x0e60:  mov    %eax,(%esp)
081e9adb +0x0e63:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
081e9ae0 +0x0e68:  mov    %eax,(%esp)
081e9ae3 +0x0e6b:  call   08172fea <_ZN6Taiwan14GarenaAuthData12getTimeStampEv>  ; Taiwan::GarenaAuthData::getTimeStamp()
081e9ae8 +0x0e70:  mov    -0xc(%ebp),%edx
081e9aeb +0x0e73:  mov    %eax,0x3a30(%edx)
081e9af1 +0x0e79:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081e9af6 +0x0e7e:  mov    %eax,(%esp)
081e9af9 +0x0e81:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
081e9afe +0x0e86:  test   %al,%al
081e9b00 +0x0e88:  je     081e9b2b <+0xeb3>
081e9b02 +0x0e8a:  mov    -0xc(%ebp),%eax
081e9b05 +0x0e8d:  movzwl 0x3a38(%eax),%eax
081e9b0c +0x0e94:  movswl %ax,%ebx
081e9b0f +0x0e97:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081e9b14 +0x0e9c:  mov    %ebx,0x4(%esp)
081e9b18 +0x0ea0:  mov    %eax,(%esp)
081e9b1b +0x0ea3:  call   08234524 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bce>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bce
081e9b20 +0x0ea8:  mov    -0xc(%ebp),%edx
081e9b23 +0x0eab:  mov    %eax,0x9c(%edx)
081e9b29 +0x0eb1:  jmp    081e9b3f <+0xec7>
081e9b2b +0x0eb3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081e9b30 +0x0eb8:  mov    0x198(%eax),%edx
081e9b36 +0x0ebe:  mov    -0xc(%ebp),%eax
081e9b39 +0x0ec1:  mov    %edx,0x9c(%eax)
081e9b3f +0x0ec7:  mov    -0xc(%ebp),%eax
081e9b42 +0x0eca:  lea    0xa1(%eax),%edx
081e9b48 +0x0ed0:  mov    0xc(%ebp),%eax
081e9b4b +0x0ed3:  add    $0xe0,%eax
081e9b50 +0x0ed8:  movl   $0x14,0x8(%esp)
081e9b58 +0x0ee0:  mov    %edx,0x4(%esp)
081e9b5c +0x0ee4:  mov    %eax,(%esp)
081e9b5f +0x0ee7:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
081e9b64 +0x0eec:  movzbl -0xf6(%ebp),%edx
081e9b6b +0x0ef3:  mov    -0xc(%ebp),%eax
081e9b6e +0x0ef6:  mov    %dl,0xa0(%eax)
081e9b74 +0x0efc:  mov    -0xc(%ebp),%eax
081e9b77 +0x0eff:  add    $0x3905,%eax
081e9b7c +0x0f04:  movl   $0x7,0x8(%esp)
081e9b84 +0x0f0c:  lea    -0x1a7(%ebp),%edx
081e9b8a +0x0f12:  add    $0xb6,%edx
081e9b90 +0x0f18:  mov    %edx,0x4(%esp)
081e9b94 +0x0f1c:  mov    %eax,(%esp)
081e9b97 +0x0f1f:  call   0807d8d0 <_init+0x1c8>
081e9b9c +0x0f24:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081e9ba3 +0x0f2b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081e9ba8 +0x0f30:  mov    %eax,0x4(%esp)
081e9bac +0x0f34:  mov    0xc(%ebp),%eax
081e9baf +0x0f37:  mov    %eax,(%esp)
081e9bb2 +0x0f3a:  call   0822fe10 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ba
081e9bb7 +0x0f3f:  mov    -0x9c(%ebp),%edx
081e9bbd +0x0f45:  mov    -0xc(%ebp),%eax
081e9bc0 +0x0f48:  mov    %edx,0x3a34(%eax)
081e9bc6 +0x0f4e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081e9bcd +0x0f55:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081e9bd2 +0x0f5a:  mov    0xc(%ebp),%edx
081e9bd5 +0x0f5d:  mov    %eax,0x8e414(%edx)
081e9bdb +0x0f63:  mov    0xc(%ebp),%eax
081e9bde +0x0f66:  lea    0x8e418(%eax),%edx
081e9be4 +0x0f6c:  mov    0xc(%ebp),%eax
081e9be7 +0x0f6f:  add    $0xe0,%eax
081e9bec +0x0f74:  movl   $0x14,0x8(%esp)
081e9bf4 +0x0f7c:  mov    %edx,0x4(%esp)
081e9bf8 +0x0f80:  mov    %eax,(%esp)
081e9bfb +0x0f83:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
081e9c00 +0x0f88:  mov    0xc(%ebp),%eax
081e9c03 +0x0f8b:  movb   $0x0,0x8e410(%eax)
081e9c0a +0x0f92:  mov    0xc(%ebp),%eax
081e9c0d +0x0f95:  movl   $0x0,0x8e430(%eax)
081e9c17 +0x0f9f:  mov    0xc(%ebp),%eax
081e9c1a +0x0fa2:  movl   $0x0,0x8e42c(%eax)
081e9c24 +0x0fac:  mov    0xc(%ebp),%eax
081e9c27 +0x0faf:  movl   $0x0,0x8e440(%eax)
081e9c31 +0x0fb9:  lea    -0xb8(%ebp),%eax
081e9c37 +0x0fbf:  mov    %eax,(%esp)
081e9c3a +0x0fc2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e9c3f +0x0fc7:  movl   $0xb7,0x8(%esp)
081e9c47 +0x0fcf:  movl   $0x0,0x4(%esp)
081e9c4f +0x0fd7:  lea    -0xb8(%ebp),%eax
081e9c55 +0x0fdd:  mov    %eax,(%esp)
081e9c58 +0x0fe0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e9c5d +0x0fe5:  movl   $0x0,0x4(%esp)
081e9c65 +0x0fed:  lea    -0xb8(%ebp),%eax
081e9c6b +0x0ff3:  mov    %eax,(%esp)
081e9c6e +0x0ff6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e9c73 +0x0ffb:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
081e9c78 +0x1000:  mov    %eax,(%esp)
081e9c7b +0x1003:  call   08234f44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5ee
081e9c80 +0x1008:  test   %al,%al
081e9c82 +0x100a:  je     081e9c9c <+0x1024>
081e9c84 +0x100c:  movl   $0x1,0x4(%esp)
081e9c8c +0x1014:  lea    -0xb8(%ebp),%eax
081e9c92 +0x101a:  mov    %eax,(%esp)
081e9c95 +0x101d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e9c9a +0x1022:  jmp    081e9cb2 <+0x103a>
081e9c9c +0x1024:  movl   $0x0,0x4(%esp)
081e9ca4 +0x102c:  lea    -0xb8(%ebp),%eax
081e9caa +0x1032:  mov    %eax,(%esp)
081e9cad +0x1035:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e9cb2 +0x103a:  movl   $0x1,0x4(%esp)
081e9cba +0x1042:  lea    -0xb8(%ebp),%eax
081e9cc0 +0x1048:  mov    %eax,(%esp)
081e9cc3 +0x104b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e9cc8 +0x1050:  lea    -0xb8(%ebp),%eax
081e9cce +0x1056:  mov    %eax,0x4(%esp)
081e9cd2 +0x105a:  mov    0xc(%ebp),%eax
081e9cd5 +0x105d:  mov    %eax,(%esp)
081e9cd8 +0x1060:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e9cdd +0x1065:  lea    -0xe8(%ebp),%eax
081e9ce3 +0x106b:  mov    %eax,(%esp)
081e9ce6 +0x106e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e9ceb +0x1073:  movl   $0xb7,0x8(%esp)
081e9cf3 +0x107b:  movl   $0x0,0x4(%esp)
081e9cfb +0x1083:  lea    -0xe8(%ebp),%eax
081e9d01 +0x1089:  mov    %eax,(%esp)
081e9d04 +0x108c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e9d09 +0x1091:  movl   $0x1,0x4(%esp)
081e9d11 +0x1099:  lea    -0xe8(%ebp),%eax
081e9d17 +0x109f:  mov    %eax,(%esp)
081e9d1a +0x10a2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e9d1f +0x10a7:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
081e9d24 +0x10ac:  mov    %eax,(%esp)
081e9d27 +0x10af:  call   08234f54 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5fe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5fe
081e9d2c +0x10b4:  test   %al,%al
081e9d2e +0x10b6:  je     081e9d54 <+0x10dc>
081e9d30 +0x10b8:  movl   $0x1,0x4(%esp)
081e9d38 +0x10c0:  lea    -0xe8(%ebp),%eax
081e9d3e +0x10c6:  mov    %eax,(%esp)
081e9d41 +0x10c9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e9d46 +0x10ce:  movl   $"\n\nInter_AuctionNotifyAuctionService::dispatch_sig : point opened\n",(%esp)
081e9d4d +0x10d5:  call   0807e570 <_init+0xe68>
081e9d52 +0x10da:  jmp    081e9d76 <+0x10fe>
081e9d54 +0x10dc:  movl   $0x0,0x4(%esp)
081e9d5c +0x10e4:  lea    -0xe8(%ebp),%eax
081e9d62 +0x10ea:  mov    %eax,(%esp)
081e9d65 +0x10ed:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e9d6a +0x10f2:  movl   $"\n\nInter_AuctionNotifyAuctionService::dispatch_sig : point closed\n",(%esp)
081e9d71 +0x10f9:  call   0807e570 <_init+0xe68>
081e9d76 +0x10fe:  movl   $0x1,0x4(%esp)
081e9d7e +0x1106:  lea    -0xe8(%ebp),%eax
081e9d84 +0x110c:  mov    %eax,(%esp)
081e9d87 +0x110f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e9d8c +0x1114:  lea    -0xe8(%ebp),%eax
081e9d92 +0x111a:  mov    %eax,0x4(%esp)
081e9d96 +0x111e:  mov    0xc(%ebp),%eax
081e9d99 +0x1121:  mov    %eax,(%esp)
081e9d9c +0x1124:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e9da1 +0x1129:  movl   $0x0,0xc(%esp)
081e9da9 +0x1131:  movl   $0x6a7b,0x8(%esp)
081e9db1 +0x1139:  movl   $&_ZZN16DisPatcher_Login12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081e9db9 +0x1141:  lea    -0x20(%ebp),%eax
081e9dbc +0x1144:  mov    %eax,(%esp)
081e9dbf +0x1147:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e9dc4 +0x114c:  movl   $"USER LOGINED! SEND ENUM_NOTIPACKET_AUCTION_NOTIFY_AUCTION_SERVICE",0x4(%esp)
081e9dcc +0x1154:  lea    -0x20(%ebp),%eax
081e9dcf +0x1157:  mov    %eax,(%esp)
081e9dd2 +0x115a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e9dd7 +0x115f:  jmp    081e9df1 <+0x1179>
081e9dd9 +0x1161:  mov    %edx,%ebx
081e9ddb +0x1163:  mov    %eax,%esi
081e9ddd +0x1165:  lea    -0xe8(%ebp),%eax
081e9de3 +0x116b:  mov    %eax,(%esp)
081e9de6 +0x116e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e9deb +0x1173:  mov    %esi,%eax
081e9ded +0x1175:  mov    %ebx,%edx
081e9def +0x1177:  jmp    081e9e33 <+0x11bb>
081e9df1 +0x1179:  lea    -0xe8(%ebp),%eax
081e9df7 +0x117f:  mov    %eax,(%esp)
081e9dfa +0x1182:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e9dff +0x1187:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081e9e04 +0x118c:  lea    -0xa4(%ebp),%edx
081e9e0a +0x1192:  mov    %edx,0x8(%esp)
081e9e0e +0x1196:  movl   $0x2,0x4(%esp)
081e9e16 +0x119e:  mov    %eax,(%esp)
081e9e19 +0x11a1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081e9e1e +0x11a6:  mov    $0x0,%ebx
081e9e23 +0x11ab:  lea    -0xb8(%ebp),%eax
081e9e29 +0x11b1:  mov    %eax,(%esp)
081e9e2c +0x11b4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e9e31 +0x11b9:  jmp    081e9e69 <+0x11f1>
081e9e33 +0x11bb:  mov    %edx,%ebx
081e9e35 +0x11bd:  mov    %eax,%esi
081e9e37 +0x11bf:  lea    -0xb8(%ebp),%eax
081e9e3d +0x11c5:  mov    %eax,(%esp)
081e9e40 +0x11c8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e9e45 +0x11cd:  mov    %esi,%eax
081e9e47 +0x11cf:  mov    %ebx,%edx
081e9e49 +0x11d1:  jmp    081e9e4b <+0x11d3>
081e9e4b +0x11d3:  mov    %edx,%ebx
081e9e4d +0x11d5:  mov    %eax,%esi
081e9e4f +0x11d7:  lea    -0xa4(%ebp),%eax
081e9e55 +0x11dd:  mov    %eax,(%esp)
081e9e58 +0x11e0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081e9e5d +0x11e5:  mov    %esi,%eax
081e9e5f +0x11e7:  mov    %ebx,%edx
081e9e61 +0x11e9:  mov    %eax,(%esp)
081e9e64 +0x11ec:  call   08ae3750 <_Unwind_Resume>
081e9e69 +0x11f1:  lea    -0xa4(%ebp),%eax
081e9e6f +0x11f7:  mov    %eax,(%esp)
081e9e72 +0x11fa:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081e9e77 +0x11ff:  mov    %ebx,%eax
081e9e79 +0x1201:  add    $0x1c0,%esp
081e9e7f +0x1207:  pop    %ebx
081e9e80 +0x1208:  pop    %esi
081e9e81 +0x1209:  pop    %ebp
081e9e82 +0x120a:  ret
081e9e83 +0x120b:  nop
```

## 反编译 C

```c
// DisPatcher_Login::dispatch_sig @ 0x81e8c78

/* DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_Login::dispatch_sig(DisPatcher_Login *this,CUser *param_1,PacketBuf *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  int *piVar5;
  undefined4 uVar6;
  GarenaAuthData *pGVar7;
  undefined4 uVar8;
  ServiceRestrictManager *pSVar9;
  uint uVar10;
  Stream *pSVar11;
  CStreamGuard *pCVar12;
  char *__src;
  CEnvironment *pCVar13;
  long lVar14;
  undefined1 local_1ab [13];
  uint local_19e;
  char acStack_19a [24];
  uint local_182;
  char acStack_17e [132];
  SIG_LOGIN_DATA local_fa [5];
  char acStack_f5 [9];
  PacketGuard local_ec [12];
  PacketGuard local_e0 [12];
  PacketGuard local_d4 [12];
  PacketGuard local_c8 [12];
  PacketGuard local_bc [15];
  uchar local_ad;
  int local_ac;
  CStreamGuard local_a8 [8];
  uint local_a0;
  uint local_9c;
  char local_98 [8];
  uint local_90;
  uint local_8c;
  uint local_88;
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  undefined4 local_14;
  SIG_LOGIN_DATA *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 1) {
    PacketGuard::PacketGuard(local_c8);
                    /* try { // try from 081e8cc3 to 081e8d08 has its CatchHandler @ 081e8d21 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_c8,1,3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_c8,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_c8,true);
    CUser::Send(param_1,local_c8);
    PacketGuard::~PacketGuard(local_c8);
    return 0;
  }
  CUser::OnRecvEvent(param_1);
  pGVar4 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(pGVar4);
  if (iVar3 == 6) {
    piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x21);
    cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
    if (cVar2 != '\x01') {
      PacketGuard::PacketGuard(local_d4);
                    /* try { // try from 081e8dc0 to 081e8e74 has its CatchHandler @ 081e8e8d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d4,1,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d4,0x42);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d4,true);
      CUser::Send(param_1,local_d4);
      cMyTrace::cMyTrace(local_84,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                         0x65f4,0);
      cMyTrace::operator()(local_84,"Can\'t Enter Into Guild War Channel ");
      CUser::DisConnSig(param_1,0x16,1,0);
      PacketGuard::~PacketGuard(local_d4);
      return 0;
    }
  }
  memset(local_1ab,0,0xbf);
  local_88 = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_88);
  uVar10 = local_88;
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x6601,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  if (0xe10 < local_88) {
    cMyTrace::cMyTrace(local_74,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                       0x6605,5);
    cMyTrace::operator()
              (local_74,"[Taiwan, Auth] Invalid patch time. (time:%d,limit:%d)",uVar10,0xe10);
    uVar6 = LineFunc(0x6607,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  local_8c = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_8c);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x660d,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  memset(dispatch_sig(CUser*,PacketBuf&)::garenaToken,0,0x801);
  cVar2 = PacketBuf::get_str(param_2,dispatch_sig(CUser*,PacketBuf&)::garenaToken,0x801,local_8c);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x6612,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
  iVar3 = Taiwan::AuthGarenaToken::decrypt
                    (dispatch_sig(CUser*,PacketBuf&)::garenaToken,local_8c,pGVar7);
  uVar10 = local_88;
  if (iVar3 != 0) {
    cMyTrace::cMyTrace(local_64,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                       0x6617,5);
    cMyTrace::operator()
              (local_64,"[Taiwan, Auth] Fail decrypt:%s",
               dispatch_sig(CUser*,PacketBuf&)::garenaToken);
    uVar6 = LineFunc(0x6618,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
  Taiwan::GarenaAuthData::setPatchTime(pGVar7,uVar10);
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
  uVar6 = Taiwan::GarenaAuthData::getPatchTime(pGVar7);
  pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
  uVar8 = Taiwan::GarenaAuthData::getTimeStamp(pGVar7);
  cMyTrace::cMyTrace(local_54,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                     0x661e,0);
  cMyTrace::operator()
            (local_54,
             "[Taiwan, Auth] Token timestamp info. (token_time:%u, current_time:%u, patch_time:%d)",
             uVar8,local_14,uVar6);
  pSVar9 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
  cVar2 = ServiceRestrictManager::isRestricted(pSVar9,param_1,1,0x21);
  if (cVar2 != '\0') {
    CUser::SendCmdErrorPacket(param_1,1,0xd1);
    return 0;
  }
  cVar2 = PacketBuf::get_int(param_2,&local_19e);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x665f,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = PacketBuf::get_str(param_2,acStack_19a,0x18,local_19e);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x667d,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = PacketBuf::get_int(param_2,&local_182);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x6692,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  if (0x83 < local_182) {
    uVar6 = LineFunc(0x6698,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = PacketBuf::get_str(param_2,acStack_17e,0x84,local_182);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x66a8,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = PacketBuf::get_byte(param_2,(uchar *)local_fa);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x6734,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  if (((local_fa[0] != (SIG_LOGIN_DATA)0x0) && (local_fa[0] != (SIG_LOGIN_DATA)0x1)) &&
     (local_fa[0] != (SIG_LOGIN_DATA)0x2)) {
    uVar10 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x6738,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,
                     uVar10);
    return uVar6;
  }
  local_90 = 0;
  cVar2 = PacketBuf::get_int(param_2,(int *)&local_90);
  if (cVar2 != '\x01') {
    uVar10 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x673f,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,
                     uVar10);
    return uVar6;
  }
  if (local_90 != 8) {
    uVar10 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x6741,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,
                     uVar10);
    return uVar6;
  }
  cVar2 = PacketBuf::get_binary(param_2,acStack_f5,8);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x6742,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  cVar2 = Dispatcher_MouseRegister::decryptPassword(acStack_f5,local_98,local_90);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,1,1);
    uVar10 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x674e,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,
                     uVar10);
    return uVar6;
  }
  cVar2 = Dispatcher_MouseRegister::checkValiedPassword(local_98);
  if (cVar2 != '\x01') {
    CUser::SendCmdErrorPacket(param_1,1,1);
    uVar10 = CUser::get_acc_id(param_1);
    uVar6 = LineFunc(0x6754,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,
                     uVar10);
    return uVar6;
  }
  memcpy(acStack_f5,local_98,7);
  cVar2 = PacketBuf::get_int(param_2,&local_9c);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x675c,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  iVar3 = G_CDataManager();
  if (*(uint *)(iVar3 + 0x3c0) != local_9c) {
    PacketGuard::PacketGuard(local_e0);
                    /* try { // try from 081e9677 to 081e9744 has its CatchHandler @ 081e975d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_e0,1,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e0,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_e0,0x17);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_e0,true);
    CUser::Send(param_1,local_e0);
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    uVar6 = *(undefined4 *)(this + 4);
    cMyTrace::cMyTrace(local_44,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                       0x6813,0);
    cMyTrace::operator()(local_44,"version dismatched: count(%d)",uVar6);
    CUser::DisConnSig(param_1,0x19,0,0);
    PacketGuard::~PacketGuard(local_e0);
    return 0;
  }
  local_a0 = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_a0);
  if (cVar2 != '\x01') {
    uVar6 = LineFunc(0x681b,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    return uVar6;
  }
  pSVar11 = (Stream *)
            BigStreamPool::Acquire
                      (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x6972);
  CStreamGuard::CStreamGuard(local_a8,pSVar11,true);
  pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
                    /* try { // try from 081e981c to 081e9c3e has its CatchHandler @ 081e9e4b */
  CStreamGuard::operator<<(pCVar12,3);
  iVar3 = CUser::GetUID(param_1);
  pCVar12 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
  CStreamGuard::operator<<(pCVar12,iVar3);
  pCVar12 = (CStreamGuard *)CStreamGuard::operator->(local_a8);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOGIN_DATA>(pCVar12);
  memset(local_10,0,0x4358);
  cVar2 = PacketBuf::get_short(param_2,(short *)(local_10 + 0x3a38));
  if (cVar2 == '\x01') {
    if ((*(short *)(local_10 + 0x3a38) < 0) || (0x11 < *(short *)(local_10 + 0x3a38))) {
      *(undefined2 *)(local_10 + 0x3a38) = 0;
    }
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar4);
    if (cVar2 == '\x01') {
      sVar1 = *(short *)(local_10 + 0x3a38);
      cMyTrace::cMyTrace(local_34,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                         0x699a,0);
      cMyTrace::operator()
                (local_34,"CheckLoginServerGroup user_id(%s), server_group(%d)",acStack_19a,
                 (int)sVar1);
      if ((*(ushort *)(local_10 + 0x3a38) < 0xb) &&
         ((1 << ((byte)*(ushort *)(local_10 + 0x3a38) & 0x1f) & 0x580U) != 0)) {
        uVar6 = LineFunc(0x69a2,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
        goto LAB_081e9e69;
      }
    }
    else {
      *(undefined2 *)(local_10 + 0x3a38) = 0;
    }
    CUser::SetServerGroup(param_1,(int)*(short *)(local_10 + 0x3a38));
    local_ac = 0;
    cVar2 = PacketBuf::get_int(param_2,&local_ac);
    if (cVar2 == '\x01') {
      CUser::set_local_ip_address(param_1,local_ac);
      local_ad = '\0';
      cVar2 = PacketBuf::get_byte(param_2,&local_ad);
      if (cVar2 != '\x01') {
        local_ad = '\0';
      }
      CUser::SetLogInOutState(param_1,local_ad);
      pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
      uVar10 = Taiwan::GarenaAuthData::getUid(pGVar7);
      __src = (char *)NumberToString(uVar10,0);
      strncpy((char *)local_10,__src,0x18);
      memset(local_10 + 0x18,0,0x84);
      pGVar7 = (GarenaAuthData *)CUser::getGarenaAuthData(param_1);
      uVar6 = Taiwan::GarenaAuthData::getTimeStamp(pGVar7);
      *(undefined4 *)(local_10 + 0x3a30) = uVar6;
      pGVar4 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsIntegratedPvPBaseChannel(pGVar4);
      if (cVar2 == '\0') {
        iVar3 = G_CEnvironment();
        *(undefined4 *)(local_10 + 0x9c) = *(undefined4 *)(iVar3 + 0x198);
      }
      else {
        sVar1 = *(short *)(local_10 + 0x3a38);
        pCVar13 = (CEnvironment *)G_CEnvironment();
        uVar6 = CEnvironment::get_gc_no_hardcode(pCVar13,(int)sVar1);
        *(undefined4 *)(local_10 + 0x9c) = uVar6;
      }
      CNetwork<4096,450000>::GetPeerIP2
                ((CNetwork<4096,450000> *)(param_1 + 0xe0),(char *)(local_10 + 0xa1),0x14);
      local_10[0xa0] = local_fa[0];
      strncpy((char *)(local_10 + 0x3905),acStack_f5,7);
      lVar14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CUser::SetLoginTime(param_1,lVar14);
      *(uint *)(local_10 + 0x3a34) = local_a0;
      uVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      *(undefined4 *)(param_1 + 0x8e414) = uVar6;
      CNetwork<4096,450000>::GetPeerIP2
                ((CNetwork<4096,450000> *)(param_1 + 0xe0),(char *)(param_1 + 0x8e418),0x14);
      param_1[0x8e410] = (CUser)0x0;
      *(undefined4 *)(param_1 + 0x8e430) = 0;
      *(undefined4 *)(param_1 + 0x8e42c) = 0;
      *(undefined4 *)(param_1 + 0x8e440) = 0;
      PacketGuard::PacketGuard(local_bc);
                    /* try { // try from 081e9c58 to 081e9cea has its CatchHandler @ 081e9e33 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_bc,0,0xb7);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
      cVar2 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_bc,1);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_bc,true);
      CUser::Send(param_1,local_bc);
      PacketGuard::PacketGuard(local_ec);
                    /* try { // try from 081e9d04 to 081e9dd6 has its CatchHandler @ 081e9dd9 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_ec,0,0xb7);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ec,1);
      cVar2 = CCeraAuctionServerProxy::IsRunning(GlobalData::s_cera_auction_proxy);
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ec,0);
        puts("\n\nInter_AuctionNotifyAuctionService::dispatch_sig : point closed\n");
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_ec,1);
        puts("\n\nInter_AuctionNotifyAuctionService::dispatch_sig : point opened\n");
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_ec,true);
      CUser::Send(param_1,local_ec);
      cMyTrace::cMyTrace(local_24,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",
                         0x6a7b,0);
      cMyTrace::operator()
                (local_24,"USER LOGINED! SEND ENUM_NOTIPACKET_AUCTION_NOTIFY_AUCTION_SERVICE");
                    /* try { // try from 081e9dfa to 081e9e1d has its CatchHandler @ 081e9e33 */
      PacketGuard::~PacketGuard(local_ec);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_a8);
      uVar6 = 0;
                    /* try { // try from 081e9e2c to 081e9e30 has its CatchHandler @ 081e9e4b */
      PacketGuard::~PacketGuard(local_bc);
    }
    else {
      uVar6 = LineFunc(0x69cf,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
  }
  else {
    uVar6 = LineFunc(0x6980,"virtual int DisPatcher_Login::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
LAB_081e9e69:
  CStreamGuard::~CStreamGuard(local_a8);
  return uVar6;
}
```
