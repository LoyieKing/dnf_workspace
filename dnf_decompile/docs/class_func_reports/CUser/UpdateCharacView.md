# UpdateCharacView

`_ZN5CUser16UpdateCharacViewEv`

`CUser::UpdateCharacView()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08651740` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08651740  _ZN5CUser16UpdateCharacViewEv
#           CUser::UpdateCharacView()
# range [0x08651740, 0x08651b79]
08651740 +0x000:  push   %ebp
08651741 +0x001:  mov    %esp,%ebp
08651743 +0x003:  push   %esi
08651744 +0x004:  push   %ebx
08651745 +0x005:  sub    $0x30,%esp
08651748 +0x008:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0865174d +0x00d:  mov    %eax,(%esp)
08651750 +0x010:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08651755 +0x015:  cmp    $0x7,%eax
08651758 +0x018:  sete   %al
0865175b +0x01b:  test   %al,%al
0865175d +0x01d:  jne    08651b6b <+0x42b>
08651763 +0x023:  mov    0x8(%ebp),%eax
08651766 +0x026:  add    $0x796f4,%eax
0865176b +0x02b:  mov    %eax,(%esp)
0865176e +0x02e:  call   082a675e <_GLOBAL__I__ZN4CLog5this_E+0x2b85>  ; global constructors keyed to CLog::this_+0x2b85
08651773 +0x033:  xor    $0x1,%eax
08651776 +0x036:  test   %al,%al
08651778 +0x038:  jne    08651b6e <+0x42e>
0865177e +0x03e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08651783 +0x043:  movl   $0x1b1f,0x8(%esp)
0865178b +0x04b:  movl   $"user.cpp",0x4(%esp)
08651793 +0x053:  mov    %eax,(%esp)
08651796 +0x056:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0865179b +0x05b:  movl   $0x1,0x8(%esp)
086517a3 +0x063:  mov    %eax,0x4(%esp)
086517a7 +0x067:  lea    -0x20(%ebp),%eax
086517aa +0x06a:  mov    %eax,(%esp)
086517ad +0x06d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086517b2 +0x072:  lea    -0x20(%ebp),%eax
086517b5 +0x075:  mov    %eax,(%esp)
086517b8 +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086517bd +0x07d:  movl   $0x6,0x4(%esp)
086517c5 +0x085:  mov    %eax,(%esp)
086517c8 +0x088:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086517cd +0x08d:  mov    0x8(%ebp),%eax
086517d0 +0x090:  mov    %eax,(%esp)
086517d3 +0x093:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
086517d8 +0x098:  mov    %eax,%ebx
086517da +0x09a:  lea    -0x20(%ebp),%eax
086517dd +0x09d:  mov    %eax,(%esp)
086517e0 +0x0a0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086517e5 +0x0a5:  mov    %ebx,0x4(%esp)
086517e9 +0x0a9:  mov    %eax,(%esp)
086517ec +0x0ac:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086517f1 +0x0b1:  lea    -0x20(%ebp),%eax
086517f4 +0x0b4:  mov    %eax,(%esp)
086517f7 +0x0b7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086517fc +0x0bc:  mov    %eax,(%esp)
086517ff +0x0bf:  call   08699272 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5ac7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5ac7
08651804 +0x0c4:  mov    %eax,-0x10(%ebp)
08651807 +0x0c7:  movl   $0x14d8,0x8(%esp)
0865180f +0x0cf:  movl   $0x0,0x4(%esp)
08651817 +0x0d7:  mov    -0x10(%ebp),%eax
0865181a +0x0da:  mov    %eax,(%esp)
0865181d +0x0dd:  call   0807dcc0 <_init+0x5b8>
08651822 +0x0e2:  mov    0x8(%ebp),%eax
08651825 +0x0e5:  mov    %eax,(%esp)
08651828 +0x0e8:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0865182d +0x0ed:  mov    %eax,%edx
0865182f +0x0ef:  mov    -0x10(%ebp),%eax
08651832 +0x0f2:  mov    %dl,0x14d4(%eax)
08651838 +0x0f8:  mov    0x8(%ebp),%eax
0865183b +0x0fb:  mov    %eax,(%esp)
0865183e +0x0fe:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08651843 +0x103:  mov    -0x10(%ebp),%edx
08651846 +0x106:  mov    %eax,(%edx)
08651848 +0x108:  movl   $0x0,-0xc(%ebp)
0865184f +0x10f:  mov    0x8(%ebp),%eax
08651852 +0x112:  lea    0x796e8(%eax),%edx
08651858 +0x118:  lea    -0x18(%ebp),%eax
0865185b +0x11b:  mov    %edx,0x4(%esp)
0865185f +0x11f:  mov    %eax,(%esp)
08651862 +0x122:  call   08279338 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x1c>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x1c
08651867 +0x127:  sub    $0x4,%esp
0865186a +0x12a:  lea    -0x18(%ebp),%eax
0865186d +0x12d:  mov    %eax,0x4(%esp)
08651871 +0x131:  lea    -0x24(%ebp),%eax
08651874 +0x134:  mov    %eax,(%esp)
08651877 +0x137:  call   082793d0 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xb4>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xb4
0865187c +0x13c:  mov    0x8(%ebp),%eax
0865187f +0x13f:  lea    0x796e8(%eax),%edx
08651885 +0x145:  lea    -0x14(%ebp),%eax
08651888 +0x148:  mov    %edx,0x4(%esp)
0865188c +0x14c:  mov    %eax,(%esp)
0865188f +0x14f:  call   0827935c <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x40>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x40
08651894 +0x154:  sub    $0x4,%esp
08651897 +0x157:  lea    -0x14(%ebp),%eax
0865189a +0x15a:  mov    %eax,0x4(%esp)
0865189e +0x15e:  lea    -0x28(%ebp),%eax
086518a1 +0x161:  mov    %eax,(%esp)
086518a4 +0x164:  call   082793d0 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xb4>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xb4
086518a9 +0x169:  jmp    08651afd <+0x3bd>
086518ae +0x16e:  mov    -0xc(%ebp),%ebx
086518b1 +0x171:  lea    -0x24(%ebp),%eax
086518b4 +0x174:  mov    %eax,(%esp)
086518b7 +0x177:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
086518bc +0x17c:  mov    (%eax),%eax
086518be +0x17e:  mov    -0x10(%ebp),%ecx
086518c1 +0x181:  imul   $0x94,%ebx,%edx
086518c7 +0x187:  lea    (%ecx,%edx,1),%edx
086518ca +0x18a:  add    $0x4,%edx
086518cd +0x18d:  mov    %eax,(%edx)
086518cf +0x18f:  lea    -0x24(%ebp),%eax
086518d2 +0x192:  mov    %eax,(%esp)
086518d5 +0x195:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
086518da +0x19a:  add    $0x4,%eax
086518dd +0x19d:  mov    -0xc(%ebp),%edx
086518e0 +0x1a0:  imul   $0x94,%edx,%edx
086518e6 +0x1a6:  add    -0x10(%ebp),%edx
086518e9 +0x1a9:  add    $0x8,%edx
086518ec +0x1ac:  movl   $0x1e,0x8(%esp)
086518f4 +0x1b4:  mov    %eax,0x4(%esp)
086518f8 +0x1b8:  mov    %edx,(%esp)
086518fb +0x1bb:  call   0807d8d0 <_init+0x1c8>
08651900 +0x1c0:  mov    -0xc(%ebp),%ebx
08651903 +0x1c3:  lea    -0x24(%ebp),%eax
08651906 +0x1c6:  mov    %eax,(%esp)
08651909 +0x1c9:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
0865190e +0x1ce:  movzbl 0x26(%eax),%eax
08651912 +0x1d2:  mov    -0x10(%ebp),%ecx
08651915 +0x1d5:  imul   $0x94,%ebx,%edx
0865191b +0x1db:  lea    (%ecx,%edx,1),%edx
0865191e +0x1de:  add    $0x10,%edx
08651921 +0x1e1:  mov    %al,0xc(%edx)
08651924 +0x1e4:  mov    -0xc(%ebp),%ebx
08651927 +0x1e7:  lea    -0x24(%ebp),%eax
0865192a +0x1ea:  mov    %eax,(%esp)
0865192d +0x1ed:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
08651932 +0x1f2:  movzbl 0x29(%eax),%eax
08651936 +0x1f6:  mov    -0x10(%ebp),%ecx
08651939 +0x1f9:  imul   $0x94,%ebx,%edx
0865193f +0x1ff:  lea    (%ecx,%edx,1),%edx
08651942 +0x202:  add    $0x10,%edx
08651945 +0x205:  mov    %al,0xd(%edx)
08651948 +0x208:  mov    -0xc(%ebp),%ebx
0865194b +0x20b:  lea    -0x24(%ebp),%eax
0865194e +0x20e:  mov    %eax,(%esp)
08651951 +0x211:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
08651956 +0x216:  movzwl 0x27(%eax),%eax
0865195a +0x21a:  mov    -0x10(%ebp),%ecx
0865195d +0x21d:  imul   $0x94,%ebx,%edx
08651963 +0x223:  lea    (%ecx,%edx,1),%edx
08651966 +0x226:  add    $0x10,%edx
08651969 +0x229:  mov    %ax,0xe(%edx)
0865196d +0x22d:  mov    -0xc(%ebp),%eax
08651970 +0x230:  imul   $0x94,%eax,%eax
08651976 +0x236:  add    -0x10(%ebp),%eax
08651979 +0x239:  lea    0x4(%eax),%ebx
0865197c +0x23c:  lea    -0x24(%ebp),%eax
0865197f +0x23f:  mov    %eax,(%esp)
08651982 +0x242:  call   08699288 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x5add>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x5add
08651987 +0x247:  mov    %ebx,0x8(%esp)
0865198b +0x24b:  mov    %eax,0x4(%esp)
0865198f +0x24f:  mov    0x8(%ebp),%eax
08651992 +0x252:  mov    %eax,(%esp)
08651995 +0x255:  call   08651322 <_ZN5CUser27updateCharacViewVisibleDataERK12_Charac_infoR17CHARAC_LOGIN_DATA>  ; CUser::updateCharacViewVisibleData(_Charac_info const&, CHARAC_LOGIN_DATA&)
0865199a +0x25a:  mov    -0xc(%ebp),%ebx
0865199d +0x25d:  lea    -0x24(%ebp),%eax
086519a0 +0x260:  mov    %eax,(%esp)
086519a3 +0x263:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
086519a8 +0x268:  add    $0x39,%eax
086519ab +0x26b:  mov    %eax,(%esp)
086519ae +0x26e:  call   0822d1dc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2886>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2886
086519b3 +0x273:  mov    -0x10(%ebp),%ecx
086519b6 +0x276:  imul   $0x94,%ebx,%edx
086519bc +0x27c:  lea    (%ecx,%edx,1),%edx
086519bf +0x27f:  add    $0x8c,%edx
086519c5 +0x285:  mov    %eax,(%edx)
086519c7 +0x287:  mov    -0xc(%ebp),%ebx
086519ca +0x28a:  lea    -0x24(%ebp),%eax
086519cd +0x28d:  mov    %eax,(%esp)
086519d0 +0x290:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
086519d5 +0x295:  mov    0xe5d(%eax),%eax
086519db +0x29b:  mov    -0x10(%ebp),%ecx
086519de +0x29e:  imul   $0x94,%ebx,%edx
086519e4 +0x2a4:  lea    (%ecx,%edx,1),%edx
086519e7 +0x2a7:  add    $0x90,%edx
086519ed +0x2ad:  mov    %eax,(%edx)
086519ef +0x2af:  mov    -0xc(%ebp),%ebx
086519f2 +0x2b2:  lea    -0x24(%ebp),%eax
086519f5 +0x2b5:  mov    %eax,(%esp)
086519f8 +0x2b8:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
086519fd +0x2bd:  movzbl 0x1240(%eax),%eax
08651a04 +0x2c4:  test   %al,%al
08651a06 +0x2c6:  je     08651a0f <+0x2cf>
08651a08 +0x2c8:  mov    $0x1,%edx
08651a0d +0x2cd:  jmp    08651a14 <+0x2d4>
08651a0f +0x2cf:  mov    $0x0,%edx
08651a14 +0x2d4:  mov    -0x10(%ebp),%ecx
08651a17 +0x2d7:  imul   $0x94,%ebx,%eax
08651a1d +0x2dd:  lea    (%ecx,%eax,1),%eax
08651a20 +0x2e0:  add    $0x10,%eax
08651a23 +0x2e3:  mov    %edx,%ecx
08651a25 +0x2e5:  and    $0x1,%ecx
08651a28 +0x2e8:  movzbl 0x10(%eax),%edx
08651a2c +0x2ec:  and    $0xfffffffe,%edx
08651a2f +0x2ef:  or     %ecx,%edx
08651a31 +0x2f1:  mov    %dl,0x10(%eax)
08651a34 +0x2f4:  mov    -0xc(%ebp),%ebx
08651a37 +0x2f7:  lea    -0x24(%ebp),%eax
08651a3a +0x2fa:  mov    %eax,(%esp)
08651a3d +0x2fd:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
08651a42 +0x302:  movzbl 0x14b7(%eax),%eax
08651a49 +0x309:  mov    -0x10(%ebp),%ecx
08651a4c +0x30c:  imul   $0x94,%ebx,%edx
08651a52 +0x312:  lea    (%ecx,%edx,1),%edx
08651a55 +0x315:  add    $0x10,%edx
08651a58 +0x318:  mov    %al,0x11(%edx)
08651a5b +0x31b:  mov    -0xc(%ebp),%ebx
08651a5e +0x31e:  lea    -0x24(%ebp),%eax
08651a61 +0x321:  mov    %eax,(%esp)
08651a64 +0x324:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
08651a69 +0x329:  mov    0x14b8(%eax),%eax
08651a6f +0x32f:  mov    -0x10(%ebp),%ecx
08651a72 +0x332:  imul   $0x94,%ebx,%edx
08651a78 +0x338:  lea    (%ecx,%edx,1),%edx
08651a7b +0x33b:  add    $0x10,%edx
08651a7e +0x33e:  mov    %eax,0x12(%edx)
08651a81 +0x341:  mov    -0xc(%ebp),%ebx
08651a84 +0x344:  lea    -0x24(%ebp),%eax
08651a87 +0x347:  mov    %eax,(%esp)
08651a8a +0x34a:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
08651a8f +0x34f:  movzbl 0xe40(%eax),%eax
08651a96 +0x356:  shl    $0x6,%eax
08651a99 +0x359:  sar    $0x7,%al
08651a9c +0x35c:  mov    %eax,%ecx
08651a9e +0x35e:  and    $0x1,%ecx
08651aa1 +0x361:  mov    -0x10(%ebp),%edx
08651aa4 +0x364:  imul   $0x94,%ebx,%eax
08651aaa +0x36a:  lea    (%edx,%eax,1),%eax
08651aad +0x36d:  add    $0x10,%eax
08651ab0 +0x370:  mov    %ecx,%edx
08651ab2 +0x372:  and    $0x1,%edx
08651ab5 +0x375:  mov    %edx,%ecx
08651ab7 +0x377:  shl    $0x4,%ecx
08651aba +0x37a:  movzbl 0x10(%eax),%edx
08651abe +0x37e:  and    $0xffffffef,%edx
08651ac1 +0x381:  or     %ecx,%edx
08651ac3 +0x383:  mov    %dl,0x10(%eax)
08651ac6 +0x386:  mov    -0xc(%ebp),%ebx
08651ac9 +0x389:  lea    -0x24(%ebp),%eax
08651acc +0x38c:  mov    %eax,(%esp)
08651acf +0x38f:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
08651ad4 +0x394:  mov    0x12ad(%eax),%eax
08651ada +0x39a:  mov    -0x10(%ebp),%ecx
08651add +0x39d:  imul   $0x94,%ebx,%edx
08651ae3 +0x3a3:  lea    (%ecx,%edx,1),%edx
08651ae6 +0x3a6:  add    $0x94,%edx
08651aec +0x3ac:  mov    %eax,(%edx)
08651aee +0x3ae:  addl   $0x1,-0xc(%ebp)
08651af2 +0x3b2:  lea    -0x24(%ebp),%eax
08651af5 +0x3b5:  mov    %eax,(%esp)
08651af8 +0x3b8:  call   082793ae <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x92>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x92
08651afd +0x3bd:  lea    -0x28(%ebp),%eax
08651b00 +0x3c0:  mov    %eax,0x4(%esp)
08651b04 +0x3c4:  lea    -0x24(%ebp),%eax
08651b07 +0x3c7:  mov    %eax,(%esp)
08651b0a +0x3ca:  call   08279382 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x66>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x66
08651b0f +0x3cf:  test   %al,%al
08651b11 +0x3d1:  jne    086518ae <+0x16e>
08651b17 +0x3d7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08651b1c +0x3dc:  lea    -0x20(%ebp),%edx
08651b1f +0x3df:  mov    %edx,0x8(%esp)
08651b23 +0x3e3:  movl   $0x2,0x4(%esp)
08651b2b +0x3eb:  mov    %eax,(%esp)
08651b2e +0x3ee:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08651b33 +0x3f3:  mov    0x8(%ebp),%eax
08651b36 +0x3f6:  add    $0x796f4,%eax
08651b3b +0x3fb:  mov    %eax,(%esp)
08651b3e +0x3fe:  call   0869702c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3881>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3881
08651b43 +0x403:  lea    -0x20(%ebp),%eax
08651b46 +0x406:  mov    %eax,(%esp)
08651b49 +0x409:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08651b4e +0x40e:  jmp    08651b6f <+0x42f>
08651b50 +0x410:  mov    %edx,%ebx
08651b52 +0x412:  mov    %eax,%esi
08651b54 +0x414:  lea    -0x20(%ebp),%eax
08651b57 +0x417:  mov    %eax,(%esp)
08651b5a +0x41a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08651b5f +0x41f:  mov    %esi,%eax
08651b61 +0x421:  mov    %ebx,%edx
08651b63 +0x423:  mov    %eax,(%esp)
08651b66 +0x426:  call   08ae3750 <_Unwind_Resume>
08651b6b +0x42b:  nop
08651b6c +0x42c:  jmp    08651b6f <+0x42f>
08651b6e +0x42e:  nop
08651b6f +0x42f:  lea    -0x8(%ebp),%esp
08651b72 +0x432:  add    $0x0,%esp
08651b75 +0x435:  pop    %ebx
08651b76 +0x436:  pop    %esi
08651b77 +0x437:  pop    %ebp
08651b78 +0x438:  ret
08651b79 +0x439:  nop
```

## 反编译 C

```c
// CUser::UpdateCharacView @ 0x8651740

/* CUser::UpdateCharacView() */

void __thiscall CUser::UpdateCharacView(CUser *this)

{
  CHARAC_LOGIN_DATA *pCVar1;
  char cVar2;
  SIG_UPDATE_CHARAC_VIEW SVar3;
  bool bVar4;
  GameWorld *this_00;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  _Charac_info *p_Var12;
  long lVar13;
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_2c [4];
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_28 [4];
  CStreamGuard local_24 [8];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  SIG_UPDATE_CHARAC_VIEW *local_14;
  int local_10;
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar5 = GameWorld::GetChannelType(this_00);
  if ((iVar5 != 7) &&
     (cVar2 = CCharacterView::isSaveCharacView((CCharacterView *)(this + 0x796f4)), cVar2 == '\x01')
     ) {
    pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1b1f);
    CStreamGuard::CStreamGuard(local_24,pSVar6,true);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 086517c8 to 08651b32 has its CatchHandler @ 08651b50 */
    CStreamGuard::operator<<(pCVar7,6);
    iVar5 = GetUID(this);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar7,iVar5);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_24);
    local_14 = CStreamGuard::GetInBuffer<SIG_UPDATE_CHARAC_VIEW>(pCVar7);
    memset(local_14,0,0x14d8);
    SVar3 = (SIG_UPDATE_CHARAC_VIEW)GetServerGroup(this);
    local_14[0x14d4] = SVar3;
    uVar8 = get_acc_id(this);
    *(undefined4 *)local_14 = uVar8;
    local_10 = 0;
    std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
    __gnu_cxx::
    __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
    __normal_iterator<_Charac_info*>(local_28,local_1c);
    std::vector<_Charac_info,std::allocator<_Charac_info>>::end();
    __gnu_cxx::
    __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
    __normal_iterator<_Charac_info*>(local_2c,local_18);
    while (bVar4 = __gnu_cxx::operator!=(local_28,local_2c), iVar5 = local_10, bVar4) {
      puVar9 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
               ::operator->(local_28);
      *(undefined4 *)(local_14 + iVar5 * 0x94 + 4) = *puVar9;
      iVar5 = __gnu_cxx::
              __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
              ::operator->(local_28);
      strncpy((char *)(local_14 + local_10 * 0x94 + 8),(char *)(iVar5 + 4),0x1e);
      iVar5 = local_10;
      iVar10 = __gnu_cxx::
               __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
               ::operator->(local_28);
      iVar11 = local_10;
      local_14[iVar5 * 0x94 + 0x1c] = *(SIG_UPDATE_CHARAC_VIEW *)(iVar10 + 0x26);
      iVar10 = __gnu_cxx::
               __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
               ::operator->(local_28);
      iVar5 = local_10;
      local_14[iVar11 * 0x94 + 0x1d] = *(SIG_UPDATE_CHARAC_VIEW *)(iVar10 + 0x29);
      iVar11 = __gnu_cxx::
               __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
               ::operator->(local_28);
      *(undefined2 *)(local_14 + iVar5 * 0x94 + 0x1e) = *(undefined2 *)(iVar11 + 0x27);
      pCVar1 = (CHARAC_LOGIN_DATA *)(local_14 + local_10 * 0x94 + 4);
      p_Var12 = (_Charac_info *)
                __gnu_cxx::
                __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
                ::operator*(local_28);
      updateCharacViewVisibleData(this,p_Var12,pCVar1);
      iVar5 = local_10;
      iVar11 = __gnu_cxx::
               __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
               ::operator->(local_28);
      lVar13 = CommonTime::operator_cast_to_long((CommonTime *)(iVar11 + 0x39));
      iVar11 = local_10;
      *(long *)(local_14 + iVar5 * 0x94 + 0x8c) = lVar13;
      iVar10 = __gnu_cxx::
               __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
               ::operator->(local_28);
      iVar5 = local_10;
      *(undefined4 *)(local_14 + iVar11 * 0x94 + 0x90) = *(undefined4 *)(iVar10 + 0xe5d);
      iVar10 = __gnu_cxx::
               __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
               ::operator->(local_28);
      iVar11 = local_10;
      local_14[iVar5 * 0x94 + 0x20] =
           (SIG_UPDATE_CHARAC_VIEW)
           ((byte)local_14[iVar5 * 0x94 + 0x20] & 0xfe | *(char *)(iVar10 + 0x1240) != '\0');
      iVar10 = __gnu_cxx::
               __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
               ::operator->(local_28);
      iVar5 = local_10;
      local_14[iVar11 * 0x94 + 0x21] = *(SIG_UPDATE_CHARAC_VIEW *)(iVar10 + 0x14b7);
      iVar10 = __gnu_cxx::
               __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
               ::operator->(local_28);
      iVar11 = local_10;
      *(undefined4 *)(local_14 + iVar5 * 0x94 + 0x22) = *(undefined4 *)(iVar10 + 0x14b8);
      iVar10 = __gnu_cxx::
               __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
               ::operator->(local_28);
      iVar5 = local_10;
      local_14[iVar11 * 0x94 + 0x20] =
           (SIG_UPDATE_CHARAC_VIEW)
           ((byte)local_14[iVar11 * 0x94 + 0x20] & 0xef |
           ((char)(*(char *)(iVar10 + 0xe40) << 6) >> 7 & 1U) << 4);
      iVar11 = __gnu_cxx::
               __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
               ::operator->(local_28);
      *(undefined4 *)(local_14 + iVar5 * 0x94 + 0x94) = *(undefined4 *)(iVar11 + 0x12ad);
      local_10 = local_10 + 1;
      __gnu_cxx::
      __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
      ::operator++(local_28);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
    CCharacterView::disableSaveCharacView((CCharacterView *)(this + 0x796f4));
    CStreamGuard::~CStreamGuard(local_24);
  }
  return;
}
```
