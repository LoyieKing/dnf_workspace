# sendBringUpReward

`_ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh`

`EventClassify::CObjectBringUp::sendBringUpReward(CUser*, std::vector<int, std::allocator<int> >&, unsigned char&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CObjectBringUp` | `0x0810fe90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810fe90  _ZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERh
#           EventClassify::CObjectBringUp::sendBringUpReward(CUser*, std::vector<int, std::allocator<int> >&, unsigned char&)
# range [0x0810fe90, 0x08110385]
0810fe90 +0x000:  push   %ebp
0810fe91 +0x001:  mov    %esp,%ebp
0810fe93 +0x003:  push   %esi
0810fe94 +0x004:  push   %ebx
0810fe95 +0x005:  sub    $0x60,%esp
0810fe98 +0x008:  cmpl   $0x0,0xc(%ebp)
0810fe9c +0x00c:  jne    0810fed4 <+0x44>
0810fe9e +0x00e:  movl   $"CObjectBringUp::sendBringUpReward(pUser(NULL))",0x10(%esp)
0810fea6 +0x016:  movl   $0x7ad,0xc(%esp)
0810feae +0x01e:  movl   $&_ZZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERhE19__PRETTY_FUNCTION__,0x8(%esp)
0810feb6 +0x026:  movl   $"EventClassify.cpp",0x4(%esp)
0810febe +0x02e:  movl   $0x1,(%esp)
0810fec5 +0x035:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0810feca +0x03a:  mov    $0x0,%eax
0810fecf +0x03f:  jmp    0811037c <+0x4ec>
0810fed4 +0x044:  movl   $0x0,-0x14(%ebp)
0810fedb +0x04b:  movl   $0x1,-0x10(%ebp)
0810fee2 +0x052:  mov    0x8(%ebp),%eax
0810fee5 +0x055:  mov    0x1c(%eax),%eax
0810fee8 +0x058:  lea    0x28(%eax),%edx
0810feeb +0x05b:  lea    -0x40(%ebp),%eax
0810feee +0x05e:  mov    %edx,0x4(%esp)
0810fef2 +0x062:  mov    %eax,(%esp)
0810fef5 +0x065:  call   08111e6a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x137c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x137c
0810fefa +0x06a:  sub    $0x4,%esp
0810fefd +0x06d:  jmp    08110342 <+0x4b2>
0810ff02 +0x072:  mov    0xc(%ebp),%eax
0810ff05 +0x075:  mov    %eax,(%esp)
0810ff08 +0x078:  call   08110d12 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x224>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x224
0810ff0d +0x07d:  movzbl %al,%ebx
0810ff10 +0x080:  lea    -0x40(%ebp),%eax
0810ff13 +0x083:  mov    %eax,(%esp)
0810ff16 +0x086:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
0810ff1b +0x08b:  mov    %ebx,0x8(%esp)
0810ff1f +0x08f:  mov    %eax,0x4(%esp)
0810ff23 +0x093:  mov    0x8(%ebp),%eax
0810ff26 +0x096:  mov    %eax,(%esp)
0810ff29 +0x099:  call   0810fe1a <_ZN13EventClassify14CObjectBringUp23verifyGiveBringUpRewardERN19ObjectBringUpScript17ObjectBringUpRuleEi>  ; EventClassify::CObjectBringUp::verifyGiveBringUpReward(ObjectBringUpScript::ObjectBringUpRule&, int)
0810ff2e +0x09e:  xor    $0x1,%eax
0810ff31 +0x0a1:  test   %al,%al
0810ff33 +0x0a3:  jne    08110333 <+0x4a3>
0810ff39 +0x0a9:  mov    0x8(%ebp),%eax
0810ff3c +0x0ac:  mov    0x1c(%eax),%eax
0810ff3f +0x0af:  add    $0x28,%eax
0810ff42 +0x0b2:  movl   $0x1,0x4(%esp)
0810ff4a +0x0ba:  mov    %eax,(%esp)
0810ff4d +0x0bd:  call   08111f00 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1412>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1412
0810ff52 +0x0c2:  mov    0x2c(%eax),%ebx
0810ff55 +0x0c5:  lea    -0x40(%ebp),%eax
0810ff58 +0x0c8:  mov    %eax,(%esp)
0810ff5b +0x0cb:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
0810ff60 +0x0d0:  mov    0x2c(%eax),%eax
0810ff63 +0x0d3:  cmp    %eax,%ebx
0810ff65 +0x0d5:  sete   %al
0810ff68 +0x0d8:  test   %al,%al
0810ff6a +0x0da:  je     081101f8 <+0x368>
0810ff70 +0x0e0:  mov    0xc(%ebp),%eax
0810ff73 +0x0e3:  mov    %eax,(%esp)
0810ff76 +0x0e6:  call   08110d76 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x288>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x288
0810ff7b +0x0eb:  test   %al,%al
0810ff7d +0x0ed:  jne    08110336 <+0x4a6>
0810ff83 +0x0f3:  lea    -0x40(%ebp),%eax
0810ff86 +0x0f6:  mov    %eax,(%esp)
0810ff89 +0x0f9:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
0810ff8e +0x0fe:  add    $0xc,%eax
0810ff91 +0x101:  movl   $0x0,0xc(%esp)
0810ff99 +0x109:  mov    %eax,0x8(%esp)
0810ff9d +0x10d:  mov    0xc(%ebp),%eax
0810ffa0 +0x110:  mov    %eax,0x4(%esp)
0810ffa4 +0x114:  lea    -0x39(%ebp),%eax
0810ffa7 +0x117:  mov    %eax,(%esp)
0810ffaa +0x11a:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
0810ffaf +0x11f:  mov    %eax,-0x14(%ebp)
0810ffb2 +0x122:  cmpl   $0x0,-0x14(%ebp)
0810ffb6 +0x126:  je     08110020 <+0x190>
0810ffb8 +0x128:  lea    -0x40(%ebp),%eax
0810ffbb +0x12b:  mov    %eax,(%esp)
0810ffbe +0x12e:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
0810ffc3 +0x133:  mov    0x2c(%eax),%esi
0810ffc6 +0x136:  mov    0xc(%ebp),%eax
0810ffc9 +0x139:  mov    %eax,(%esp)
0810ffcc +0x13c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810ffd1 +0x141:  mov    %eax,%ebx
0810ffd3 +0x143:  mov    0xc(%ebp),%eax
0810ffd6 +0x146:  mov    %eax,(%esp)
0810ffd9 +0x149:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0810ffde +0x14e:  mov    %esi,0x1c(%esp)
0810ffe2 +0x152:  mov    %ebx,0x18(%esp)
0810ffe6 +0x156:  mov    %eax,0x14(%esp)
0810ffea +0x15a:  movl   $"CObjectBringUp::sendBringUpReward(m_id:%d, charac_no:%d, reward:%d)",0x10(%esp)
0810fff2 +0x162:  movl   $0x7c3,0xc(%esp)
0810fffa +0x16a:  movl   $&_ZZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERhE19__PRETTY_FUNCTION__,0x8(%esp)
08110002 +0x172:  movl   $"EventClassify.cpp",0x4(%esp)
0811000a +0x17a:  movl   $0x1,(%esp)
08110011 +0x181:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08110016 +0x186:  mov    $0x0,%eax
0811001b +0x18b:  jmp    0811037c <+0x4ec>
08110020 +0x190:  lea    -0x30(%ebp),%eax
08110023 +0x193:  mov    0x10(%ebp),%edx
08110026 +0x196:  mov    %edx,0x4(%esp)
0811002a +0x19a:  mov    %eax,(%esp)
0811002d +0x19d:  call   08111f1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x142c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x142c
08110032 +0x1a2:  sub    $0x4,%esp
08110035 +0x1a5:  lea    -0x40(%ebp),%eax
08110038 +0x1a8:  mov    %eax,(%esp)
0811003b +0x1ab:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
08110040 +0x1b0:  lea    0x44(%eax),%edx
08110043 +0x1b3:  lea    -0x2c(%ebp),%eax
08110046 +0x1b6:  mov    %edx,0x4(%esp)
0811004a +0x1ba:  mov    %eax,(%esp)
0811004d +0x1bd:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08110052 +0x1c2:  sub    $0x4,%esp
08110055 +0x1c5:  lea    -0x40(%ebp),%eax
08110058 +0x1c8:  mov    %eax,(%esp)
0811005b +0x1cb:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
08110060 +0x1d0:  lea    0x44(%eax),%edx
08110063 +0x1d3:  lea    -0x28(%ebp),%eax
08110066 +0x1d6:  mov    %edx,0x4(%esp)
0811006a +0x1da:  mov    %eax,(%esp)
0811006d +0x1dd:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08110072 +0x1e2:  sub    $0x4,%esp
08110075 +0x1e5:  lea    -0x34(%ebp),%eax
08110078 +0x1e8:  mov    -0x30(%ebp),%edx
0811007b +0x1eb:  mov    %edx,0xc(%esp)
0811007f +0x1ef:  mov    -0x2c(%ebp),%edx
08110082 +0x1f2:  mov    %edx,0x8(%esp)
08110086 +0x1f6:  mov    -0x28(%ebp),%edx
08110089 +0x1f9:  mov    %edx,0x4(%esp)
0811008d +0x1fd:  mov    %eax,(%esp)
08110090 +0x200:  call   08111f3d <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x144f>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x144f
08110095 +0x205:  sub    $0x4,%esp
08110098 +0x208:  lea    -0x40(%ebp),%eax
0811009b +0x20b:  mov    %eax,(%esp)
0811009e +0x20e:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
081100a3 +0x213:  add    $0x44,%eax
081100a6 +0x216:  mov    %eax,(%esp)
081100a9 +0x219:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
081100ae +0x21e:  mov    0x14(%ebp),%eax
081100b1 +0x221:  movzbl (%eax),%eax
081100b4 +0x224:  lea    0x1(%eax),%edx
081100b7 +0x227:  mov    0x14(%ebp),%eax
081100ba +0x22a:  mov    %dl,(%eax)
081100bc +0x22c:  mov    0xc(%ebp),%eax
081100bf +0x22f:  movl   $0x1,0x4(%esp)
081100c7 +0x237:  mov    %eax,(%esp)
081100ca +0x23a:  call   08110d9a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2ac
081100cf +0x23f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081100d4 +0x244:  movl   $0x7cc,0x8(%esp)
081100dc +0x24c:  movl   $"EventClassify.cpp",0x4(%esp)
081100e4 +0x254:  mov    %eax,(%esp)
081100e7 +0x257:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081100ec +0x25c:  movl   $0x1,0x8(%esp)
081100f4 +0x264:  mov    %eax,0x4(%esp)
081100f8 +0x268:  lea    -0x48(%ebp),%eax
081100fb +0x26b:  mov    %eax,(%esp)
081100fe +0x26e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08110103 +0x273:  lea    -0x48(%ebp),%eax
08110106 +0x276:  mov    %eax,(%esp)
08110109 +0x279:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0811010e +0x27e:  movl   $0x2ca,0x4(%esp)
08110116 +0x286:  mov    %eax,(%esp)
08110119 +0x289:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0811011e +0x28e:  lea    -0x48(%ebp),%eax
08110121 +0x291:  mov    %eax,(%esp)
08110124 +0x294:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08110129 +0x299:  movl   $0xffffffff,0x4(%esp)
08110131 +0x2a1:  mov    %eax,(%esp)
08110134 +0x2a4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08110139 +0x2a9:  lea    -0x48(%ebp),%eax
0811013c +0x2ac:  mov    %eax,(%esp)
0811013f +0x2af:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08110144 +0x2b4:  mov    %eax,(%esp)
08110147 +0x2b7:  call   08111f9a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x14ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x14ac
0811014c +0x2bc:  mov    %eax,-0xc(%ebp)
0811014f +0x2bf:  mov    0xc(%ebp),%eax
08110152 +0x2c2:  mov    %eax,(%esp)
08110155 +0x2c5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0811015a +0x2ca:  mov    -0xc(%ebp),%edx
0811015d +0x2cd:  mov    %eax,(%edx)
0811015f +0x2cf:  mov    0xc(%ebp),%eax
08110162 +0x2d2:  mov    %eax,(%esp)
08110165 +0x2d5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0811016a +0x2da:  mov    -0xc(%ebp),%edx
0811016d +0x2dd:  mov    %eax,0x4(%edx)
08110170 +0x2e0:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08110175 +0x2e5:  mov    0x378(%eax),%eax
0811017b +0x2eb:  movzbl %al,%edx
0811017e +0x2ee:  mov    -0xc(%ebp),%eax
08110181 +0x2f1:  mov    %edx,0x8(%eax)
08110184 +0x2f4:  mov    0xc(%ebp),%eax
08110187 +0x2f7:  mov    %eax,(%esp)
0811018a +0x2fa:  call   08110d52 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x264>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x264
0811018f +0x2ff:  mov    -0xc(%ebp),%edx
08110192 +0x302:  mov    %al,0xc(%edx)
08110195 +0x305:  mov    0xc(%ebp),%eax
08110198 +0x308:  mov    %eax,(%esp)
0811019b +0x30b:  call   08110d76 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x288>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x288
081101a0 +0x310:  mov    -0xc(%ebp),%edx
081101a3 +0x313:  mov    %al,0xd(%edx)
081101a6 +0x316:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081101ab +0x31b:  lea    -0x48(%ebp),%edx
081101ae +0x31e:  mov    %edx,0x8(%esp)
081101b2 +0x322:  movl   $0x2,0x4(%esp)
081101ba +0x32a:  mov    %eax,(%esp)
081101bd +0x32d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081101c2 +0x332:  mov    0xc(%ebp),%eax
081101c5 +0x335:  mov    %eax,(%esp)
081101c8 +0x338:  call   08110d36 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x248>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x248
081101cd +0x33d:  lea    -0x48(%ebp),%eax
081101d0 +0x340:  mov    %eax,(%esp)
081101d3 +0x343:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081101d8 +0x348:  jmp    08110337 <+0x4a7>
081101dd +0x34d:  mov    %edx,%ebx
081101df +0x34f:  mov    %eax,%esi
081101e1 +0x351:  lea    -0x48(%ebp),%eax
081101e4 +0x354:  mov    %eax,(%esp)
081101e7 +0x357:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081101ec +0x35c:  mov    %esi,%eax
081101ee +0x35e:  mov    %ebx,%edx
081101f0 +0x360:  mov    %eax,(%esp)
081101f3 +0x363:  call   08ae3750 <_Unwind_Resume>
081101f8 +0x368:  lea    -0x40(%ebp),%eax
081101fb +0x36b:  mov    %eax,(%esp)
081101fe +0x36e:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
08110203 +0x373:  add    $0xc,%eax
08110206 +0x376:  movl   $0x0,0xc(%esp)
0811020e +0x37e:  mov    %eax,0x8(%esp)
08110212 +0x382:  mov    0xc(%ebp),%eax
08110215 +0x385:  mov    %eax,0x4(%esp)
08110219 +0x389:  lea    -0x39(%ebp),%eax
0811021c +0x38c:  mov    %eax,(%esp)
0811021f +0x38f:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
08110224 +0x394:  mov    %eax,-0x14(%ebp)
08110227 +0x397:  cmpl   $0x0,-0x14(%ebp)
0811022b +0x39b:  je     08110295 <+0x405>
0811022d +0x39d:  lea    -0x40(%ebp),%eax
08110230 +0x3a0:  mov    %eax,(%esp)
08110233 +0x3a3:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
08110238 +0x3a8:  mov    0x2c(%eax),%esi
0811023b +0x3ab:  mov    0xc(%ebp),%eax
0811023e +0x3ae:  mov    %eax,(%esp)
08110241 +0x3b1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08110246 +0x3b6:  mov    %eax,%ebx
08110248 +0x3b8:  mov    0xc(%ebp),%eax
0811024b +0x3bb:  mov    %eax,(%esp)
0811024e +0x3be:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08110253 +0x3c3:  mov    %esi,0x1c(%esp)
08110257 +0x3c7:  mov    %ebx,0x18(%esp)
0811025b +0x3cb:  mov    %eax,0x14(%esp)
0811025f +0x3cf:  movl   $"CObjectBringUp::sendBringUpReward(m_id:%d, charac_no:%d, reward:%d)",0x10(%esp)
08110267 +0x3d7:  movl   $0x7e2,0xc(%esp)
0811026f +0x3df:  movl   $&_ZZN13EventClassify14CObjectBringUp17sendBringUpRewardEP5CUserRSt6vectorIiSaIiEERhE19__PRETTY_FUNCTION__,0x8(%esp)
08110277 +0x3e7:  movl   $"EventClassify.cpp",0x4(%esp)
0811027f +0x3ef:  movl   $0x1,(%esp)
08110286 +0x3f6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0811028b +0x3fb:  mov    $0x0,%eax
08110290 +0x400:  jmp    0811037c <+0x4ec>
08110295 +0x405:  lea    -0x20(%ebp),%eax
08110298 +0x408:  mov    0x10(%ebp),%edx
0811029b +0x40b:  mov    %edx,0x4(%esp)
0811029f +0x40f:  mov    %eax,(%esp)
081102a2 +0x412:  call   08111f1a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x142c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x142c
081102a7 +0x417:  sub    $0x4,%esp
081102aa +0x41a:  lea    -0x40(%ebp),%eax
081102ad +0x41d:  mov    %eax,(%esp)
081102b0 +0x420:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
081102b5 +0x425:  lea    0x44(%eax),%edx
081102b8 +0x428:  lea    -0x1c(%ebp),%eax
081102bb +0x42b:  mov    %edx,0x4(%esp)
081102bf +0x42f:  mov    %eax,(%esp)
081102c2 +0x432:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
081102c7 +0x437:  sub    $0x4,%esp
081102ca +0x43a:  lea    -0x40(%ebp),%eax
081102cd +0x43d:  mov    %eax,(%esp)
081102d0 +0x440:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
081102d5 +0x445:  lea    0x44(%eax),%edx
081102d8 +0x448:  lea    -0x18(%ebp),%eax
081102db +0x44b:  mov    %edx,0x4(%esp)
081102df +0x44f:  mov    %eax,(%esp)
081102e2 +0x452:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
081102e7 +0x457:  sub    $0x4,%esp
081102ea +0x45a:  lea    -0x24(%ebp),%eax
081102ed +0x45d:  mov    -0x20(%ebp),%edx
081102f0 +0x460:  mov    %edx,0xc(%esp)
081102f4 +0x464:  mov    -0x1c(%ebp),%edx
081102f7 +0x467:  mov    %edx,0x8(%esp)
081102fb +0x46b:  mov    -0x18(%ebp),%edx
081102fe +0x46e:  mov    %edx,0x4(%esp)
08110302 +0x472:  mov    %eax,(%esp)
08110305 +0x475:  call   08111f3d <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x144f>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x144f
0811030a +0x47a:  sub    $0x4,%esp
0811030d +0x47d:  lea    -0x40(%ebp),%eax
08110310 +0x480:  mov    %eax,(%esp)
08110313 +0x483:  call   08111ef6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1408>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1408
08110318 +0x488:  add    $0x44,%eax
0811031b +0x48b:  mov    %eax,(%esp)
0811031e +0x48e:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08110323 +0x493:  mov    0x14(%ebp),%eax
08110326 +0x496:  movzbl (%eax),%eax
08110329 +0x499:  lea    0x1(%eax),%edx
0811032c +0x49c:  mov    0x14(%ebp),%eax
0811032f +0x49f:  mov    %dl,(%eax)
08110331 +0x4a1:  jmp    08110337 <+0x4a7>
08110333 +0x4a3:  nop
08110334 +0x4a4:  jmp    08110337 <+0x4a7>
08110336 +0x4a6:  nop
08110337 +0x4a7:  lea    -0x40(%ebp),%eax
0811033a +0x4aa:  mov    %eax,(%esp)
0811033d +0x4ad:  call   08111ee0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x13f2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x13f2
08110342 +0x4b2:  mov    0x8(%ebp),%eax
08110345 +0x4b5:  mov    0x1c(%eax),%eax
08110348 +0x4b8:  lea    0x28(%eax),%edx
0811034b +0x4bb:  lea    -0x38(%ebp),%eax
0811034e +0x4be:  mov    %edx,0x4(%esp)
08110352 +0x4c2:  mov    %eax,(%esp)
08110355 +0x4c5:  call   08111e8e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x13a0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x13a0
0811035a +0x4ca:  sub    $0x4,%esp
0811035d +0x4cd:  lea    -0x38(%ebp),%eax
08110360 +0x4d0:  mov    %eax,0x4(%esp)
08110364 +0x4d4:  lea    -0x40(%ebp),%eax
08110367 +0x4d7:  mov    %eax,(%esp)
0811036a +0x4da:  call   08111eb4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x13c6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x13c6
0811036f +0x4df:  test   %al,%al
08110371 +0x4e1:  jne    0810ff02 <+0x72>
08110377 +0x4e7:  mov    $0x1,%eax
0811037c +0x4ec:  lea    -0x8(%ebp),%esp
0811037f +0x4ef:  add    $0x0,%esp
08110382 +0x4f2:  pop    %ebx
08110383 +0x4f3:  pop    %esi
08110384 +0x4f4:  pop    %ebp
08110385 +0x4f5:  ret
```

## 反编译 C

```c
// EventClassify::CObjectBringUp::sendBringUpReward @ 0x810fe90

/* EventClassify::CObjectBringUp::sendBringUpReward(CUser*, std::vector<int, std::allocator<int> >&,
   unsigned char&) */

undefined4 __thiscall
EventClassify::CObjectBringUp::sendBringUpReward
          (CObjectBringUp *this,CUser *param_1,vector *param_2,uchar *param_3)

{
  char cVar1;
  SIG_OBJECT_BRING_UP SVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_74 [2];
  int local_58 [3];
  undefined1 local_4c [8];
  undefined1 local_44 [7];
  undefined1 local_3d;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  SIG_OBJECT_BRING_UP *local_10;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"EventClassify.cpp",
               "bool EventClassify::CObjectBringUp::sendBringUpReward(CUser*, IntVector&, unsigned char&)"
               ,0x7ad,"CObjectBringUp::sendBringUpReward(pUser(NULL))");
    uVar4 = 0;
  }
  else {
    local_18 = 0;
    local_14 = 1;
    std::
    vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>
    ::begin();
    piVar9 = (int *)&stack0xffffff94;
    while( true ) {
      piVar9[1] = *(int *)(this + 0x1c) + 0x28;
      *piVar9 = (int)local_3c;
      piVar9[-1] = 0x811035a;
      std::
      vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>
      ::end();
      piVar9[1] = (int)local_3c;
      *piVar9 = (int)local_44;
      piVar9[-1] = 0x811036f;
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)*piVar9,(__normal_iterator *)piVar9[1]);
      if (!bVar3) break;
      *piVar9 = (int)param_1;
      piVar9[-1] = 0x810ff0d;
      uVar5 = CUserCharacInfo::getCurUseBringUpMaterialTotal((CUserCharacInfo *)*piVar9);
      *piVar9 = (int)local_44;
      piVar9[-1] = 0x810ff1b;
      iVar6 = __gnu_cxx::
              __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
              ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                            *)*piVar9);
      piVar9[2] = uVar5 & 0xff;
      piVar9[1] = iVar6;
      *piVar9 = (int)this;
      piVar9[-1] = 0x810ff2e;
      cVar1 = verifyGiveBringUpReward
                        ((CObjectBringUp *)*piVar9,(ObjectBringUpRule *)piVar9[1],piVar9[2]);
      if (cVar1 == '\x01') {
        iVar6 = *(int *)(this + 0x1c);
        piVar9[1] = 1;
        *piVar9 = iVar6 + 0x28;
        piVar9[-1] = 0x810ff52;
        iVar6 = std::
                vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>
                ::operator[]((vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>
                              *)*piVar9,piVar9[1]);
        iVar6 = *(int *)(iVar6 + 0x2c);
        *piVar9 = (int)local_44;
        piVar9[-1] = 0x810ff60;
        iVar7 = __gnu_cxx::
                __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                              *)*piVar9);
        if (iVar6 == *(int *)(iVar7 + 0x2c)) {
          *piVar9 = (int)param_1;
          piVar9[-1] = 0x810ff7b;
          cVar1 = CUserCharacInfo::getBringUpRewardFlag((CUserCharacInfo *)*piVar9);
          if (cVar1 == '\0') {
            *piVar9 = (int)local_44;
            piVar9[-1] = 0x810ff8e;
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                  *)*piVar9);
            piVar9[3] = 0;
            piVar9[2] = iVar6 + 0xc;
            piVar9[1] = (int)param_1;
            *piVar9 = (int)&local_3d;
            piVar9[-1] = 0x810ffaf;
            local_18 = CEventActionMng::process_action_send_mail
                                 ((CEventActionMng *)*piVar9,(CUser *)piVar9[1],
                                  (Action_SendMail *)piVar9[2],SUB41(piVar9[3],0));
            if (local_18 != 0) {
              *piVar9 = (int)local_44;
              piVar9[-1] = 0x810ffc3;
              iVar6 = __gnu_cxx::
                      __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                      ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                    *)*piVar9);
              iVar6 = *(int *)(iVar6 + 0x2c);
              *piVar9 = (int)param_1;
              piVar9[-1] = 0x810ffd1;
              iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*piVar9);
              *piVar9 = (int)param_1;
              piVar9[-1] = 0x810ffde;
              iVar8 = CUser::get_acc_id((CUser *)*piVar9);
              piVar9[7] = iVar6;
              piVar9[6] = iVar7;
              piVar9[5] = iVar8;
              piVar9[4] = (int)"CObjectBringUp::sendBringUpReward(m_id:%d, charac_no:%d, reward:%d)"
              ;
              piVar9[3] = 0x7c3;
              piVar9[2] = (int)
                          "bool EventClassify::CObjectBringUp::sendBringUpReward(CUser*, IntVector&, unsigned char&)"
              ;
              piVar9[1] = (int)"EventClassify.cpp";
              *piVar9 = 1;
              piVar9[-1] = 0x8110016;
              LogManager::logFormat
                        (*piVar9,(char *)piVar9[1],(char *)piVar9[2],piVar9[3],(char *)piVar9[4]);
              return 0;
            }
            piVar9[1] = (int)param_2;
            *piVar9 = (int)&local_34;
            piVar9[-1] = 0x8110032;
            std::back_inserter<std::vector<int,std::allocator<int>>>((vector *)*piVar9);
            *piVar9 = (int)local_44;
            piVar9[-1] = 0x8110040;
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                  *)*piVar9);
            piVar9[1] = iVar6 + 0x44;
            *piVar9 = (int)&local_30;
            piVar9[-1] = 0x8110052;
            std::vector<int,std::allocator<int>>::end();
            *piVar9 = (int)local_44;
            piVar9[-1] = 0x8110060;
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                  *)*piVar9);
            piVar9[1] = iVar6 + 0x44;
            *piVar9 = (int)&local_2c;
            piVar9[-1] = 0x8110072;
            std::vector<int,std::allocator<int>>::begin();
            piVar9[3] = local_34;
            piVar9[2] = local_30;
            piVar9[1] = local_2c;
            *piVar9 = (int)local_38;
            piVar9[-1] = 0x8110095;
            std::
            copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::back_insert_iterator<std::vector<int,std::allocator<int>>>>
                      ();
            piVar9[-1] = (int)local_44;
            piVar9[-2] = 0x81100a3;
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                  *)piVar9[-1]);
            piVar9[-1] = iVar6 + 0x44;
            piVar9[-2] = 0x81100ae;
            std::vector<int,std::allocator<int>>::clear
                      ((vector<int,std::allocator<int>> *)piVar9[-1]);
            *param_3 = *param_3 + '\x01';
            *piVar9 = 1;
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x81100cf;
            CUserCharacInfo::setBringUpRewardFlag((CUserCharacInfo *)piVar9[-1],SUB41(*piVar9,0));
            piVar9[1] = 0x7cc;
            *piVar9 = (int)"EventClassify.cpp";
            piVar9[-1] = GlobalData::s_stream_pool;
            piVar9[-2] = 0x81100ec;
            uVar4 = StreamPool::Acquire((StreamPool *)piVar9[-1],(char *)*piVar9,piVar9[1]);
            piVar9[1] = 1;
            *piVar9 = uVar4;
            piVar9[-1] = (int)local_4c;
            piVar9[-2] = 0x8110103;
            CStreamGuard::CStreamGuard
                      ((CStreamGuard *)piVar9[-1],(Stream *)*piVar9,SUB41(piVar9[1],0));
            piVar9[-1] = (int)local_4c;
            piVar9[-2] = 0x811010e;
            uVar4 = CStreamGuard::operator*((CStreamGuard *)piVar9[-1]);
            *piVar9 = 0x2ca;
            piVar9[-1] = uVar4;
                    /* try { // try from 08110119 to 081101c1 has its CatchHandler @ 081101dd */
            piVar9[-2] = 0x811011e;
            CStreamGuard::operator<<((CStreamGuard *)piVar9[-1],*piVar9);
            piVar9[-1] = (int)local_4c;
            piVar9[-2] = 0x8110129;
            uVar4 = CStreamGuard::operator*((CStreamGuard *)piVar9[-1]);
            *piVar9 = 0xffffffff;
            piVar9[-1] = uVar4;
            piVar9[-2] = 0x8110139;
            CStreamGuard::operator<<((CStreamGuard *)piVar9[-1],*piVar9);
            piVar9[-1] = (int)local_4c;
            piVar9[-2] = 0x8110144;
            uVar4 = CStreamGuard::operator->((CStreamGuard *)piVar9[-1]);
            piVar9[-1] = uVar4;
            piVar9[-2] = 0x811014c;
            local_10 = CStreamGuard::GetInBuffer<SIG_OBJECT_BRING_UP>((CStreamGuard *)piVar9[-1]);
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x811015a;
            uVar4 = CUser::get_acc_id((CUser *)piVar9[-1]);
            *(undefined4 *)local_10 = uVar4;
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x811016a;
            uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)piVar9[-1]);
            *(undefined4 *)(local_10 + 4) = uVar4;
            piVar9[-2] = 0x8110175;
            iVar6 = G_CEnvironment();
            *(uint *)(local_10 + 8) = *(uint *)(iVar6 + 0x378) & 0xff;
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x811018f;
            SVar2 = (SIG_OBJECT_BRING_UP)
                    CUserCharacInfo::getCurUseBringUpMaterialCount((CUserCharacInfo *)piVar9[-1]);
            local_10[0xc] = SVar2;
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x81101a0;
            SVar2 = (SIG_OBJECT_BRING_UP)
                    CUserCharacInfo::getBringUpRewardFlag((CUserCharacInfo *)piVar9[-1]);
            local_10[0xd] = SVar2;
            piVar9[1] = (int)local_4c;
            *piVar9 = 2;
            piVar9[-1] = GlobalData::s_msgq_mgr;
            piVar9[-2] = 0x81101c2;
            MsgQueueMgr::put();
            piVar9[-1] = (int)param_1;
            piVar9[-2] = 0x81101cd;
            CUserCharacInfo::resetCurUseBringUpMaterialCount((CUserCharacInfo *)piVar9[-1]);
            piVar9[-1] = (int)local_4c;
            piVar9[-2] = 0x81101d8;
            CStreamGuard::~CStreamGuard((CStreamGuard *)piVar9[-1]);
            piVar9 = piVar9 + -1;
          }
        }
        else {
          *piVar9 = (int)local_44;
          piVar9[-1] = 0x8110203;
          iVar6 = __gnu_cxx::
                  __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                  ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                *)*piVar9);
          piVar9[3] = 0;
          piVar9[2] = iVar6 + 0xc;
          piVar9[1] = (int)param_1;
          *piVar9 = (int)&local_3d;
          piVar9[-1] = 0x8110224;
          local_18 = CEventActionMng::process_action_send_mail
                               ((CEventActionMng *)*piVar9,(CUser *)piVar9[1],
                                (Action_SendMail *)piVar9[2],SUB41(piVar9[3],0));
          if (local_18 != 0) {
            *piVar9 = (int)local_44;
            piVar9[-1] = 0x8110238;
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                  *)*piVar9);
            iVar6 = *(int *)(iVar6 + 0x2c);
            *piVar9 = (int)param_1;
            piVar9[-1] = 0x8110246;
            iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*piVar9);
            *piVar9 = (int)param_1;
            piVar9[-1] = 0x8110253;
            iVar8 = CUser::get_acc_id((CUser *)*piVar9);
            piVar9[7] = iVar6;
            piVar9[6] = iVar7;
            piVar9[5] = iVar8;
            piVar9[4] = (int)"CObjectBringUp::sendBringUpReward(m_id:%d, charac_no:%d, reward:%d)";
            piVar9[3] = 0x7e2;
            piVar9[2] = (int)
                        "bool EventClassify::CObjectBringUp::sendBringUpReward(CUser*, IntVector&, unsigned char&)"
            ;
            piVar9[1] = (int)"EventClassify.cpp";
            *piVar9 = 1;
            piVar9[-1] = 0x811028b;
            LogManager::logFormat
                      (*piVar9,(char *)piVar9[1],(char *)piVar9[2],piVar9[3],(char *)piVar9[4]);
            return 0;
          }
          piVar9[1] = (int)param_2;
          *piVar9 = (int)&local_24;
          piVar9[-1] = 0x81102a7;
          std::back_inserter<std::vector<int,std::allocator<int>>>((vector *)*piVar9);
          *piVar9 = (int)local_44;
          piVar9[-1] = 0x81102b5;
          iVar6 = __gnu_cxx::
                  __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                  ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                *)*piVar9);
          piVar9[1] = iVar6 + 0x44;
          *piVar9 = (int)&local_20;
          piVar9[-1] = 0x81102c7;
          std::vector<int,std::allocator<int>>::end();
          *piVar9 = (int)local_44;
          piVar9[-1] = 0x81102d5;
          iVar6 = __gnu_cxx::
                  __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                  ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                *)*piVar9);
          piVar9[1] = iVar6 + 0x44;
          *piVar9 = (int)&local_1c;
          piVar9[-1] = 0x81102e7;
          std::vector<int,std::allocator<int>>::begin();
          piVar9[3] = local_24;
          piVar9[2] = local_20;
          piVar9[1] = local_1c;
          *piVar9 = (int)local_28;
          piVar9[-1] = 0x811030a;
          std::
          copy<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,std::back_insert_iterator<std::vector<int,std::allocator<int>>>>
                    ();
          piVar9[-1] = (int)local_44;
          piVar9[-2] = 0x8110318;
          iVar6 = __gnu_cxx::
                  __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                  ::operator->((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                                *)piVar9[-1]);
          piVar9[-1] = iVar6 + 0x44;
          piVar9[-2] = 0x8110323;
          std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)piVar9[-1])
          ;
          *param_3 = *param_3 + '\x01';
          piVar9 = piVar9 + -1;
        }
      }
      *piVar9 = (int)local_44;
      piVar9[-1] = 0x8110342;
      __gnu_cxx::
      __normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
      ::operator++((__normal_iterator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>*,std::vector<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>,std::allocator<std::pair<ObjectBringUpScript::ObjectBringUpRule,Action_SendMail>>>>
                    *)*piVar9);
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
