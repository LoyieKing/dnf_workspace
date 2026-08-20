# insert

`_GLOBAL__I__ZN15CRewardUserList6insertEjii`

`global constructors keyed to CRewardUserList::insert(unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CRewardUserList` | `0x081bbf66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bbf66  _GLOBAL__I__ZN15CRewardUserList6insertEjii
#           global constructors keyed to CRewardUserList::insert(unsigned int, int, int)
# range [0x081bbf66, 0x081bdab3]
081bbf66 +0x0000:  push   %ebp
081bbf67 +0x0001:  mov    %esp,%ebp
081bbf69 +0x0003:  sub    $0x18,%esp
081bbf6c +0x0006:  movl   $0xffff,0x4(%esp)
081bbf74 +0x000e:  movl   $0x1,(%esp)
081bbf7b +0x0015:  call   081bbf26 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081bbf80 +0x001a:  leave
081bbf81 +0x001b:  ret
081bbf82 +0x001c:  push   %ebp
081bbf83 +0x001d:  mov    %esp,%ebp
081bbf85 +0x001f:  mov    0x8(%ebp),%eax
081bbf88 +0x0022:  movl   $0x0,(%eax)
081bbf8e +0x0028:  mov    0x8(%ebp),%eax
081bbf91 +0x002b:  movl   $0x0,0x4(%eax)
081bbf98 +0x0032:  mov    0x8(%ebp),%eax
081bbf9b +0x0035:  movb   $0x0,0x8(%eax)
081bbf9f +0x0039:  pop    %ebp
081bbfa0 +0x003a:  ret
081bbfa1 +0x003b:  nop
081bbfa2 +0x003c:  push   %ebp
081bbfa3 +0x003d:  mov    %esp,%ebp
081bbfa5 +0x003f:  sub    $0x18,%esp
081bbfa8 +0x0042:  mov    0x8(%ebp),%eax
081bbfab +0x0045:  mov    %eax,(%esp)
081bbfae +0x0048:  call   081bc176 <+0x210>
081bbfb3 +0x004d:  leave
081bbfb4 +0x004e:  ret
081bbfb5 +0x004f:  nop
081bbfb6 +0x0050:  push   %ebp
081bbfb7 +0x0051:  mov    %esp,%ebp
081bbfb9 +0x0053:  push   %esi
081bbfba +0x0054:  push   %ebx
081bbfbb +0x0055:  sub    $0x10,%esp
081bbfbe +0x0058:  mov    0x8(%ebp),%eax
081bbfc1 +0x005b:  mov    %eax,(%esp)
081bbfc4 +0x005e:  call   081bc14e <+0x1e8>
081bbfc9 +0x0063:  mov    0x8(%ebp),%eax
081bbfcc +0x0066:  add    $0x18,%eax
081bbfcf +0x0069:  mov    %eax,(%esp)
081bbfd2 +0x006c:  call   081bc1c8 <+0x262>
081bbfd7 +0x0071:  jmp    081bbff4 <+0x8e>
081bbfd9 +0x0073:  mov    %edx,%ebx
081bbfdb +0x0075:  mov    %eax,%esi
081bbfdd +0x0077:  mov    0x8(%ebp),%eax
081bbfe0 +0x007a:  mov    %eax,(%esp)
081bbfe3 +0x007d:  call   081bbfa2 <+0x3c>
081bbfe8 +0x0082:  mov    %esi,%eax
081bbfea +0x0084:  mov    %ebx,%edx
081bbfec +0x0086:  mov    %eax,(%esp)
081bbfef +0x0089:  call   08ae3750 <_Unwind_Resume>
081bbff4 +0x008e:  add    $0x10,%esp
081bbff7 +0x0091:  pop    %ebx
081bbff8 +0x0092:  pop    %esi
081bbff9 +0x0093:  pop    %ebp
081bbffa +0x0094:  ret
081bbffb +0x0095:  nop
081bbffc +0x0096:  push   %ebp
081bbffd +0x0097:  mov    %esp,%ebp
081bbfff +0x0099:  push   %esi
081bc000 +0x009a:  push   %ebx
081bc001 +0x009b:  sub    $0x10,%esp
081bc004 +0x009e:  mov    0x8(%ebp),%eax
081bc007 +0x00a1:  add    $0x18,%eax
081bc00a +0x00a4:  mov    %eax,(%esp)
081bc00d +0x00a7:  call   081bc1dc <+0x276>
081bc012 +0x00ac:  jmp    081bc02f <+0xc9>
081bc014 +0x00ae:  mov    %edx,%ebx
081bc016 +0x00b0:  mov    %eax,%esi
081bc018 +0x00b2:  mov    0x8(%ebp),%eax
081bc01b +0x00b5:  mov    %eax,(%esp)
081bc01e +0x00b8:  call   081bbfa2 <+0x3c>
081bc023 +0x00bd:  mov    %esi,%eax
081bc025 +0x00bf:  mov    %ebx,%edx
081bc027 +0x00c1:  mov    %eax,(%esp)
081bc02a +0x00c4:  call   08ae3750 <_Unwind_Resume>
081bc02f +0x00c9:  mov    0x8(%ebp),%eax
081bc032 +0x00cc:  mov    %eax,(%esp)
081bc035 +0x00cf:  call   081bbfa2 <+0x3c>
081bc03a +0x00d4:  add    $0x10,%esp
081bc03d +0x00d7:  pop    %ebx
081bc03e +0x00d8:  pop    %esi
081bc03f +0x00d9:  pop    %ebp
081bc040 +0x00da:  ret
081bc041 +0x00db:  nop
081bc042 +0x00dc:  push   %ebp
081bc043 +0x00dd:  mov    %esp,%ebp
081bc045 +0x00df:  sub    $0x18,%esp
081bc048 +0x00e2:  mov    0x8(%ebp),%eax
081bc04b +0x00e5:  mov    %eax,(%esp)
081bc04e +0x00e8:  call   081bc26a <+0x304>
081bc053 +0x00ed:  mov    0x8(%ebp),%eax
081bc056 +0x00f0:  add    $0x18,%eax
081bc059 +0x00f3:  mov    %eax,(%esp)
081bc05c +0x00f6:  call   081bc27e <+0x318>
081bc061 +0x00fb:  leave
081bc062 +0x00fc:  ret
081bc063 +0x00fd:  nop
081bc064 +0x00fe:  push   %ebp
081bc065 +0x00ff:  mov    %esp,%ebp
081bc067 +0x0101:  sub    $0x18,%esp
081bc06a +0x0104:  mov    0x8(%ebp),%eax
081bc06d +0x0107:  add    $0x18,%eax
081bc070 +0x010a:  mov    %eax,(%esp)
081bc073 +0x010d:  call   081bc2ae <+0x348>
081bc078 +0x0112:  leave
081bc079 +0x0113:  ret
081bc07a +0x0114:  push   %ebp
081bc07b +0x0115:  mov    %esp,%ebp
081bc07d +0x0117:  push   %esi
081bc07e +0x0118:  push   %ebx
081bc07f +0x0119:  sub    $0x10,%esp
081bc082 +0x011c:  mov    0x8(%ebp),%eax
081bc085 +0x011f:  movl   $&_ZTV12COnTimeEvent+0x8,(%eax)
081bc08b +0x0125:  mov    0x8(%ebp),%eax
081bc08e +0x0128:  add    $0x14,%eax
081bc091 +0x012b:  mov    %eax,(%esp)
081bc094 +0x012e:  call   081bbffc <+0x96>
081bc099 +0x0133:  jmp    081bc0b6 <+0x150>
081bc09b +0x0135:  mov    %edx,%ebx
081bc09d +0x0137:  mov    %eax,%esi
081bc09f +0x0139:  mov    0x8(%ebp),%eax
081bc0a2 +0x013c:  mov    %eax,(%esp)
081bc0a5 +0x013f:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081bc0aa +0x0144:  mov    %esi,%eax
081bc0ac +0x0146:  mov    %ebx,%edx
081bc0ae +0x0148:  mov    %eax,(%esp)
081bc0b1 +0x014b:  call   08ae3750 <_Unwind_Resume>
081bc0b6 +0x0150:  mov    0x8(%ebp),%eax
081bc0b9 +0x0153:  mov    %eax,(%esp)
081bc0bc +0x0156:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081bc0c1 +0x015b:  mov    $0x0,%eax
081bc0c6 +0x0160:  test   %al,%al
081bc0c8 +0x0162:  je     081bc0d5 <+0x16f>
081bc0ca +0x0164:  mov    0x8(%ebp),%eax
081bc0cd +0x0167:  mov    %eax,(%esp)
081bc0d0 +0x016a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081bc0d5 +0x016f:  add    $0x10,%esp
081bc0d8 +0x0172:  pop    %ebx
081bc0d9 +0x0173:  pop    %esi
081bc0da +0x0174:  pop    %ebp
081bc0db +0x0175:  ret
081bc0dc +0x0176:  push   %ebp
081bc0dd +0x0177:  mov    %esp,%ebp
081bc0df +0x0179:  sub    $0x18,%esp
081bc0e2 +0x017c:  mov    0x8(%ebp),%eax
081bc0e5 +0x017f:  mov    %eax,(%esp)
081bc0e8 +0x0182:  call   081bc07a <+0x114>
081bc0ed +0x0187:  mov    0x8(%ebp),%eax
081bc0f0 +0x018a:  mov    %eax,(%esp)
081bc0f3 +0x018d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081bc0f8 +0x0192:  leave
081bc0f9 +0x0193:  ret
081bc0fa +0x0194:  push   %ebp
081bc0fb +0x0195:  mov    %esp,%ebp
081bc0fd +0x0197:  mov    0x8(%ebp),%eax
081bc100 +0x019a:  mov    0xc(%eax),%eax
081bc103 +0x019d:  pop    %ebp
081bc104 +0x019e:  ret
081bc105 +0x019f:  nop
081bc106 +0x01a0:  push   %ebp
081bc107 +0x01a1:  mov    %esp,%ebp
081bc109 +0x01a3:  mov    0x8(%ebp),%eax
081bc10c +0x01a6:  mov    0x58(%eax),%eax
081bc10f +0x01a9:  pop    %ebp
081bc110 +0x01aa:  ret
081bc111 +0x01ab:  nop
081bc112 +0x01ac:  push   %ebp
081bc113 +0x01ad:  mov    %esp,%ebp
081bc115 +0x01af:  mov    0x8(%ebp),%eax
081bc118 +0x01b2:  mov    0x5c(%eax),%eax
081bc11b +0x01b5:  pop    %ebp
081bc11c +0x01b6:  ret
081bc11d +0x01b7:  nop
081bc11e +0x01b8:  push   %ebp
081bc11f +0x01b9:  mov    %esp,%ebp
081bc121 +0x01bb:  mov    0x8(%ebp),%eax
081bc124 +0x01be:  mov    0xc(%ebp),%edx
081bc127 +0x01c1:  mov    %edx,0x8d248(%eax)
081bc12d +0x01c7:  pop    %ebp
081bc12e +0x01c8:  ret
081bc12f +0x01c9:  nop
081bc130 +0x01ca:  push   %ebp
081bc131 +0x01cb:  mov    %esp,%ebp
081bc133 +0x01cd:  mov    0x8(%ebp),%eax
081bc136 +0x01d0:  mov    0x8d248(%eax),%eax
081bc13c +0x01d6:  pop    %ebp
081bc13d +0x01d7:  ret
081bc13e +0x01d8:  push   %ebp
081bc13f +0x01d9:  mov    %esp,%ebp
081bc141 +0x01db:  mov    0x8(%ebp),%eax
081bc144 +0x01de:  movb   $0x1,0x8d24c(%eax)
081bc14b +0x01e5:  pop    %ebp
081bc14c +0x01e6:  ret
081bc14d +0x01e7:  nop
081bc14e +0x01e8:  push   %ebp
081bc14f +0x01e9:  mov    %esp,%ebp
081bc151 +0x01eb:  sub    $0x18,%esp
081bc154 +0x01ee:  mov    0x8(%ebp),%eax
081bc157 +0x01f1:  mov    %eax,(%esp)
081bc15a +0x01f4:  call   081bc52c <+0x5c6>
081bc15f +0x01f9:  leave
081bc160 +0x01fa:  ret
081bc161 +0x01fb:  nop
081bc162 +0x01fc:  push   %ebp
081bc163 +0x01fd:  mov    %esp,%ebp
081bc165 +0x01ff:  sub    $0x18,%esp
081bc168 +0x0202:  mov    0x8(%ebp),%eax
081bc16b +0x0205:  mov    %eax,(%esp)
081bc16e +0x0208:  call   081bc540 <+0x5da>
081bc173 +0x020d:  leave
081bc174 +0x020e:  ret
081bc175 +0x020f:  nop
081bc176 +0x0210:  push   %ebp
081bc177 +0x0211:  mov    %esp,%ebp
081bc179 +0x0213:  push   %esi
081bc17a +0x0214:  push   %ebx
081bc17b +0x0215:  sub    $0x10,%esp
081bc17e +0x0218:  mov    0x8(%ebp),%eax
081bc181 +0x021b:  mov    %eax,(%esp)
081bc184 +0x021e:  call   081bc5aa <+0x644>
081bc189 +0x0223:  mov    %eax,0x4(%esp)
081bc18d +0x0227:  mov    0x8(%ebp),%eax
081bc190 +0x022a:  mov    %eax,(%esp)
081bc193 +0x022d:  call   081bc554 <+0x5ee>
081bc198 +0x0232:  jmp    081bc1b5 <+0x24f>
081bc19a +0x0234:  mov    %edx,%ebx
081bc19c +0x0236:  mov    %eax,%esi
081bc19e +0x0238:  mov    0x8(%ebp),%eax
081bc1a1 +0x023b:  mov    %eax,(%esp)
081bc1a4 +0x023e:  call   081bc162 <+0x1fc>
081bc1a9 +0x0243:  mov    %esi,%eax
081bc1ab +0x0245:  mov    %ebx,%edx
081bc1ad +0x0247:  mov    %eax,(%esp)
081bc1b0 +0x024a:  call   08ae3750 <_Unwind_Resume>
081bc1b5 +0x024f:  mov    0x8(%ebp),%eax
081bc1b8 +0x0252:  mov    %eax,(%esp)
081bc1bb +0x0255:  call   081bc162 <+0x1fc>
081bc1c0 +0x025a:  add    $0x10,%esp
081bc1c3 +0x025d:  pop    %ebx
081bc1c4 +0x025e:  pop    %esi
081bc1c5 +0x025f:  pop    %ebp
081bc1c6 +0x0260:  ret
081bc1c7 +0x0261:  nop
081bc1c8 +0x0262:  push   %ebp
081bc1c9 +0x0263:  mov    %esp,%ebp
081bc1cb +0x0265:  sub    $0x18,%esp
081bc1ce +0x0268:  mov    0x8(%ebp),%eax
081bc1d1 +0x026b:  mov    %eax,(%esp)
081bc1d4 +0x026e:  call   081bc5ca <+0x664>
081bc1d9 +0x0273:  leave
081bc1da +0x0274:  ret
081bc1db +0x0275:  nop
081bc1dc +0x0276:  push   %ebp
081bc1dd +0x0277:  mov    %esp,%ebp
081bc1df +0x0279:  push   %esi
081bc1e0 +0x027a:  push   %ebx
081bc1e1 +0x027b:  sub    $0x30,%esp
081bc1e4 +0x027e:  mov    0x8(%ebp),%eax
081bc1e7 +0x0281:  mov    %eax,(%esp)
081bc1ea +0x0284:  call   081bc6e8 <+0x782>
081bc1ef +0x0289:  mov    %eax,%ebx
081bc1f1 +0x028b:  lea    -0x28(%ebp),%eax
081bc1f4 +0x028e:  mov    0x8(%ebp),%edx
081bc1f7 +0x0291:  mov    %edx,0x4(%esp)
081bc1fb +0x0295:  mov    %eax,(%esp)
081bc1fe +0x0298:  call   081bc6be <+0x758>
081bc203 +0x029d:  sub    $0x4,%esp
081bc206 +0x02a0:  lea    -0x18(%ebp),%eax
081bc209 +0x02a3:  mov    0x8(%ebp),%edx
081bc20c +0x02a6:  mov    %edx,0x4(%esp)
081bc210 +0x02aa:  mov    %eax,(%esp)
081bc213 +0x02ad:  call   081bc694 <+0x72e>
081bc218 +0x02b2:  sub    $0x4,%esp
081bc21b +0x02b5:  mov    %ebx,0xc(%esp)
081bc21f +0x02b9:  lea    -0x28(%ebp),%eax
081bc222 +0x02bc:  mov    %eax,0x8(%esp)
081bc226 +0x02c0:  lea    -0x18(%ebp),%eax
081bc229 +0x02c3:  mov    %eax,0x4(%esp)
081bc22d +0x02c7:  mov    0x8(%ebp),%eax
081bc230 +0x02ca:  mov    %eax,(%esp)
081bc233 +0x02cd:  call   081bc724 <+0x7be>
081bc238 +0x02d2:  jmp    081bc255 <+0x2ef>
081bc23a +0x02d4:  mov    %edx,%ebx
081bc23c +0x02d6:  mov    %eax,%esi
081bc23e +0x02d8:  mov    0x8(%ebp),%eax
081bc241 +0x02db:  mov    %eax,(%esp)
081bc244 +0x02de:  call   081bc614 <+0x6ae>
081bc249 +0x02e3:  mov    %esi,%eax
081bc24b +0x02e5:  mov    %ebx,%edx
081bc24d +0x02e7:  mov    %eax,(%esp)
081bc250 +0x02ea:  call   08ae3750 <_Unwind_Resume>
081bc255 +0x02ef:  mov    0x8(%ebp),%eax
081bc258 +0x02f2:  mov    %eax,(%esp)
081bc25b +0x02f5:  call   081bc614 <+0x6ae>
081bc260 +0x02fa:  lea    -0x8(%ebp),%esp
081bc263 +0x02fd:  add    $0x0,%esp
081bc266 +0x0300:  pop    %ebx
081bc267 +0x0301:  pop    %esi
081bc268 +0x0302:  pop    %ebp
081bc269 +0x0303:  ret
081bc26a +0x0304:  push   %ebp
081bc26b +0x0305:  mov    %esp,%ebp
081bc26d +0x0307:  sub    $0x18,%esp
081bc270 +0x030a:  mov    0x8(%ebp),%eax
081bc273 +0x030d:  mov    %eax,(%esp)
081bc276 +0x0310:  call   081bc72c <+0x7c6>
081bc27b +0x0315:  leave
081bc27c +0x0316:  ret
081bc27d +0x0317:  nop
081bc27e +0x0318:  push   %ebp
081bc27f +0x0319:  mov    %esp,%ebp
081bc281 +0x031b:  sub    $0x28,%esp
081bc284 +0x031e:  lea    -0x18(%ebp),%eax
081bc287 +0x0321:  mov    0x8(%ebp),%edx
081bc28a +0x0324:  mov    %edx,0x4(%esp)
081bc28e +0x0328:  mov    %eax,(%esp)
081bc291 +0x032b:  call   081bc694 <+0x72e>
081bc296 +0x0330:  sub    $0x4,%esp
081bc299 +0x0333:  lea    -0x18(%ebp),%eax
081bc29c +0x0336:  mov    %eax,0x4(%esp)
081bc2a0 +0x033a:  mov    0x8(%ebp),%eax
081bc2a3 +0x033d:  mov    %eax,(%esp)
081bc2a6 +0x0340:  call   081bc7a2 <+0x83c>
081bc2ab +0x0345:  leave
081bc2ac +0x0346:  ret
081bc2ad +0x0347:  nop
081bc2ae +0x0348:  push   %ebp
081bc2af +0x0349:  mov    %esp,%ebp
081bc2b1 +0x034b:  sub    $0x18,%esp
081bc2b4 +0x034e:  mov    0x8(%ebp),%eax
081bc2b7 +0x0351:  lea    0x8(%eax),%edx
081bc2ba +0x0354:  mov    0x8(%ebp),%eax
081bc2bd +0x0357:  add    $0x18,%eax
081bc2c0 +0x035a:  mov    %edx,0x4(%esp)
081bc2c4 +0x035e:  mov    %eax,(%esp)
081bc2c7 +0x0361:  call   081bc841 <+0x8db>
081bc2cc +0x0366:  leave
081bc2cd +0x0367:  ret
081bc2ce +0x0368:  push   %ebp
081bc2cf +0x0369:  mov    %esp,%ebp
081bc2d1 +0x036b:  push   %esi
081bc2d2 +0x036c:  push   %ebx
081bc2d3 +0x036d:  sub    $0x10,%esp
081bc2d6 +0x0370:  mov    0x8(%ebp),%esi
081bc2d9 +0x0373:  mov    0x10(%ebp),%eax
081bc2dc +0x0376:  mov    %eax,(%esp)
081bc2df +0x0379:  call   081bc8a4 <+0x93e>
081bc2e4 +0x037e:  mov    %eax,%ebx
081bc2e6 +0x0380:  mov    0xc(%ebp),%eax
081bc2e9 +0x0383:  mov    %eax,(%esp)
081bc2ec +0x0386:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
081bc2f1 +0x038b:  mov    %ebx,0x8(%esp)
081bc2f5 +0x038f:  mov    %eax,0x4(%esp)
081bc2f9 +0x0393:  mov    %esi,(%esp)
081bc2fc +0x0396:  call   081bc8ac <+0x946>
081bc301 +0x039b:  mov    %esi,%eax
081bc303 +0x039d:  add    $0x10,%esp
081bc306 +0x03a0:  pop    %ebx
081bc307 +0x03a1:  pop    %esi
081bc308 +0x03a2:  pop    %ebp
081bc309 +0x03a3:  ret    $0x4
081bc30c +0x03a6:  push   %ebp
081bc30d +0x03a7:  mov    %esp,%ebp
081bc30f +0x03a9:  sub    $0x18,%esp
081bc312 +0x03ac:  mov    0xc(%ebp),%eax
081bc315 +0x03af:  mov    %eax,(%esp)
081bc318 +0x03b2:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
081bc31d +0x03b7:  mov    (%eax),%edx
081bc31f +0x03b9:  mov    0x8(%ebp),%eax
081bc322 +0x03bc:  mov    %edx,(%eax)
081bc324 +0x03be:  mov    0xc(%ebp),%eax
081bc327 +0x03c1:  add    $0x4,%eax
081bc32a +0x03c4:  mov    %eax,(%esp)
081bc32d +0x03c7:  call   081bc8e6 <+0x980>
081bc332 +0x03cc:  mov    0x8(%ebp),%edx
081bc335 +0x03cf:  mov    (%eax),%ecx
081bc337 +0x03d1:  mov    %ecx,0x4(%edx)
081bc33a +0x03d4:  mov    0x4(%eax),%ecx
081bc33d +0x03d7:  mov    %ecx,0x8(%edx)
081bc340 +0x03da:  movzbl 0x8(%eax),%eax
081bc344 +0x03de:  mov    %al,0xc(%edx)
081bc347 +0x03e1:  leave
081bc348 +0x03e2:  ret
081bc349 +0x03e3:  nop
081bc34a +0x03e4:  push   %ebp
081bc34b +0x03e5:  mov    %esp,%ebp
081bc34d +0x03e7:  push   %ebx
081bc34e +0x03e8:  sub    $0x14,%esp
081bc351 +0x03eb:  mov    0x8(%ebp),%ebx
081bc354 +0x03ee:  mov    0xc(%ebp),%eax
081bc357 +0x03f1:  mov    0x10(%ebp),%edx
081bc35a +0x03f4:  mov    %edx,0x8(%esp)
081bc35e +0x03f8:  mov    %eax,0x4(%esp)
081bc362 +0x03fc:  mov    %ebx,(%esp)
081bc365 +0x03ff:  call   081bc8ee <+0x988>
081bc36a +0x0404:  sub    $0x4,%esp
081bc36d +0x0407:  mov    %ebx,%eax
081bc36f +0x0409:  mov    -0x4(%ebp),%ebx
081bc372 +0x040c:  leave
081bc373 +0x040d:  ret    $0x4
081bc376 +0x0410:  push   %ebp
081bc377 +0x0411:  mov    %esp,%ebp
081bc379 +0x0413:  sub    $0x18,%esp
081bc37c +0x0416:  mov    0x8(%ebp),%eax
081bc37f +0x0419:  mov    0x18(%eax),%edx
081bc382 +0x041c:  mov    0x8(%ebp),%eax
081bc385 +0x041f:  mov    0x20(%eax),%eax
081bc388 +0x0422:  sub    $0x4,%eax
081bc38b +0x0425:  cmp    %eax,%edx
081bc38d +0x0427:  je     081bc3bc <+0x456>
081bc38f +0x0429:  mov    0x8(%ebp),%eax
081bc392 +0x042c:  mov    0x18(%eax),%edx
081bc395 +0x042f:  mov    0x8(%ebp),%eax
081bc398 +0x0432:  mov    0xc(%ebp),%ecx
081bc39b +0x0435:  mov    %ecx,0x8(%esp)
081bc39f +0x0439:  mov    %edx,0x4(%esp)
081bc3a3 +0x043d:  mov    %eax,(%esp)
081bc3a6 +0x0440:  call   080e2a62 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x808>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x808
081bc3ab +0x0445:  mov    0x8(%ebp),%eax
081bc3ae +0x0448:  mov    0x18(%eax),%eax
081bc3b1 +0x044b:  lea    0x4(%eax),%edx
081bc3b4 +0x044e:  mov    0x8(%ebp),%eax
081bc3b7 +0x0451:  mov    %edx,0x18(%eax)
081bc3ba +0x0454:  jmp    081bc3ce <+0x468>
081bc3bc +0x0456:  mov    0xc(%ebp),%eax
081bc3bf +0x0459:  mov    %eax,0x4(%esp)
081bc3c3 +0x045d:  mov    0x8(%ebp),%eax
081bc3c6 +0x0460:  mov    %eax,(%esp)
081bc3c9 +0x0463:  call   081bcabe <+0xb58>
081bc3ce +0x0468:  leave
081bc3cf +0x0469:  ret
081bc3d0 +0x046a:  push   %ebp
081bc3d1 +0x046b:  mov    %esp,%ebp
081bc3d3 +0x046d:  push   %ebx
081bc3d4 +0x046e:  sub    $0x14,%esp
081bc3d7 +0x0471:  mov    0x8(%ebp),%ebx
081bc3da +0x0474:  mov    0xc(%ebp),%eax
081bc3dd +0x0477:  mov    0x10(%ebp),%edx
081bc3e0 +0x047a:  mov    %edx,0x8(%esp)
081bc3e4 +0x047e:  mov    %eax,0x4(%esp)
081bc3e8 +0x0482:  mov    %ebx,(%esp)
081bc3eb +0x0485:  call   081bcb40 <+0xbda>
081bc3f0 +0x048a:  sub    $0x4,%esp
081bc3f3 +0x048d:  mov    %ebx,%eax
081bc3f5 +0x048f:  mov    -0x4(%ebp),%ebx
081bc3f8 +0x0492:  leave
081bc3f9 +0x0493:  ret    $0x4
081bc3fc +0x0496:  push   %ebp
081bc3fd +0x0497:  mov    %esp,%ebp
081bc3ff +0x0499:  mov    0xc(%ebp),%eax
081bc402 +0x049c:  mov    (%eax),%edx
081bc404 +0x049e:  mov    0x8(%ebp),%eax
081bc407 +0x04a1:  mov    %edx,(%eax)
081bc409 +0x04a3:  pop    %ebp
081bc40a +0x04a4:  ret
081bc40b +0x04a5:  nop
081bc40c +0x04a6:  push   %ebp
081bc40d +0x04a7:  mov    %esp,%ebp
081bc40f +0x04a9:  push   %ebx
081bc410 +0x04aa:  sub    $0x14,%esp
081bc413 +0x04ad:  mov    0x8(%ebp),%ebx
081bc416 +0x04b0:  mov    0xc(%ebp),%eax
081bc419 +0x04b3:  mov    %eax,0x4(%esp)
081bc41d +0x04b7:  mov    %ebx,(%esp)
081bc420 +0x04ba:  call   081bcbfe <+0xc98>
081bc425 +0x04bf:  sub    $0x4,%esp
081bc428 +0x04c2:  mov    %ebx,%eax
081bc42a +0x04c4:  mov    -0x4(%ebp),%ebx
081bc42d +0x04c7:  leave
081bc42e +0x04c8:  ret    $0x4
081bc431 +0x04cb:  nop
081bc432 +0x04cc:  push   %ebp
081bc433 +0x04cd:  mov    %esp,%ebp
081bc435 +0x04cf:  mov    0x8(%ebp),%eax
081bc438 +0x04d2:  mov    (%eax),%edx
081bc43a +0x04d4:  mov    0xc(%ebp),%eax
081bc43d +0x04d7:  mov    (%eax),%eax
081bc43f +0x04d9:  cmp    %eax,%edx
081bc441 +0x04db:  sete   %al
081bc444 +0x04de:  pop    %ebp
081bc445 +0x04df:  ret
081bc446 +0x04e0:  push   %ebp
081bc447 +0x04e1:  mov    %esp,%ebp
081bc449 +0x04e3:  mov    0x8(%ebp),%eax
081bc44c +0x04e6:  mov    (%eax),%edx
081bc44e +0x04e8:  mov    0xc(%ebp),%eax
081bc451 +0x04eb:  mov    (%eax),%eax
081bc453 +0x04ed:  cmp    %eax,%edx
081bc455 +0x04ef:  setne  %al
081bc458 +0x04f2:  pop    %ebp
081bc459 +0x04f3:  ret
081bc45a +0x04f4:  push   %ebp
081bc45b +0x04f5:  mov    %esp,%ebp
081bc45d +0x04f7:  mov    0x8(%ebp),%eax
081bc460 +0x04fa:  mov    (%eax),%eax
081bc462 +0x04fc:  add    $0x10,%eax
081bc465 +0x04ff:  pop    %ebp
081bc466 +0x0500:  ret
081bc467 +0x0501:  nop
081bc468 +0x0502:  push   %ebp
081bc469 +0x0503:  mov    %esp,%ebp
081bc46b +0x0505:  mov    0x8(%ebp),%eax
081bc46e +0x0508:  movl   $0x0,(%eax)
081bc474 +0x050e:  pop    %ebp
081bc475 +0x050f:  ret
081bc476 +0x0510:  push   %ebp
081bc477 +0x0511:  mov    %esp,%ebp
081bc479 +0x0513:  sub    $0x18,%esp
081bc47c +0x0516:  mov    0x8(%ebp),%eax
081bc47f +0x0519:  lea    0x8(%eax),%edx
081bc482 +0x051c:  mov    0x8(%ebp),%eax
081bc485 +0x051f:  add    $0x18,%eax
081bc488 +0x0522:  mov    %edx,0x4(%esp)
081bc48c +0x0526:  mov    %eax,(%esp)
081bc48f +0x0529:  call   081bcc24 <+0xcbe>
081bc494 +0x052e:  leave
081bc495 +0x052f:  ret
081bc496 +0x0530:  push   %ebp
081bc497 +0x0531:  mov    %esp,%ebp
081bc499 +0x0533:  sub    $0x28,%esp
081bc49c +0x0536:  lea    -0x18(%ebp),%eax
081bc49f +0x0539:  mov    0x8(%ebp),%edx
081bc4a2 +0x053c:  mov    %edx,0x4(%esp)
081bc4a6 +0x0540:  mov    %eax,(%esp)
081bc4a9 +0x0543:  call   081bc694 <+0x72e>
081bc4ae +0x0548:  sub    $0x4,%esp
081bc4b1 +0x054b:  lea    -0x18(%ebp),%eax
081bc4b4 +0x054e:  mov    %eax,(%esp)
081bc4b7 +0x0551:  call   081bcc38 <+0xcd2>
081bc4bc +0x0556:  leave
081bc4bd +0x0557:  ret
081bc4be +0x0558:  push   %ebp
081bc4bf +0x0559:  mov    %esp,%ebp
081bc4c1 +0x055b:  mov    0x8(%ebp),%eax
081bc4c4 +0x055e:  mov    (%eax),%edx
081bc4c6 +0x0560:  mov    0xc(%ebp),%eax
081bc4c9 +0x0563:  mov    (%eax),%eax
081bc4cb +0x0565:  cmp    %eax,%edx
081bc4cd +0x0567:  setne  %al
081bc4d0 +0x056a:  pop    %ebp
081bc4d1 +0x056b:  ret
081bc4d2 +0x056c:  push   %ebp
081bc4d3 +0x056d:  mov    %esp,%ebp
081bc4d5 +0x056f:  mov    0x8(%ebp),%eax
081bc4d8 +0x0572:  mov    (%eax),%eax
081bc4da +0x0574:  add    $0x10,%eax
081bc4dd +0x0577:  pop    %ebp
081bc4de +0x0578:  ret
081bc4df +0x0579:  nop
081bc4e0 +0x057a:  push   %ebp
081bc4e1 +0x057b:  mov    %esp,%ebp
081bc4e3 +0x057d:  sub    $0x18,%esp
081bc4e6 +0x0580:  mov    0x8(%ebp),%eax
081bc4e9 +0x0583:  mov    0x8(%eax),%edx
081bc4ec +0x0586:  mov    0x8(%ebp),%eax
081bc4ef +0x0589:  mov    0x10(%eax),%eax
081bc4f2 +0x058c:  sub    $0x4,%eax
081bc4f5 +0x058f:  cmp    %eax,%edx
081bc4f7 +0x0591:  je     081bc51f <+0x5b9>
081bc4f9 +0x0593:  mov    0x8(%ebp),%eax
081bc4fc +0x0596:  mov    0x8(%eax),%edx
081bc4ff +0x0599:  mov    0x8(%ebp),%eax
081bc502 +0x059c:  mov    %edx,0x4(%esp)
081bc506 +0x05a0:  mov    %eax,(%esp)
081bc509 +0x05a3:  call   080e3926 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x16cc>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x16cc
081bc50e +0x05a8:  mov    0x8(%ebp),%eax
081bc511 +0x05ab:  mov    0x8(%eax),%eax
081bc514 +0x05ae:  lea    0x4(%eax),%edx
081bc517 +0x05b1:  mov    0x8(%ebp),%eax
081bc51a +0x05b4:  mov    %edx,0x8(%eax)
081bc51d +0x05b7:  jmp    081bc52a <+0x5c4>
081bc51f +0x05b9:  mov    0x8(%ebp),%eax
081bc522 +0x05bc:  mov    %eax,(%esp)
081bc525 +0x05bf:  call   081bcc42 <+0xcdc>
081bc52a +0x05c4:  leave
081bc52b +0x05c5:  ret
081bc52c +0x05c6:  push   %ebp
081bc52d +0x05c7:  mov    %esp,%ebp
081bc52f +0x05c9:  sub    $0x18,%esp
081bc532 +0x05cc:  mov    0x8(%ebp),%eax
081bc535 +0x05cf:  mov    %eax,(%esp)
081bc538 +0x05d2:  call   081bcc9c <+0xd36>
081bc53d +0x05d7:  leave
081bc53e +0x05d8:  ret
081bc53f +0x05d9:  nop
081bc540 +0x05da:  push   %ebp
081bc541 +0x05db:  mov    %esp,%ebp
081bc543 +0x05dd:  sub    $0x18,%esp
081bc546 +0x05e0:  mov    0x8(%ebp),%eax
081bc549 +0x05e3:  mov    %eax,(%esp)
081bc54c +0x05e6:  call   081bccec <+0xd86>
081bc551 +0x05eb:  leave
081bc552 +0x05ec:  ret
081bc553 +0x05ed:  nop
081bc554 +0x05ee:  push   %ebp
081bc555 +0x05ef:  mov    %esp,%ebp
081bc557 +0x05f1:  sub    $0x28,%esp
081bc55a +0x05f4:  jmp    081bc59c <+0x636>
081bc55c +0x05f6:  mov    0xc(%ebp),%eax
081bc55f +0x05f9:  mov    %eax,(%esp)
081bc562 +0x05fc:  call   081bccf1 <+0xd8b>
081bc567 +0x0601:  mov    %eax,0x4(%esp)
081bc56b +0x0605:  mov    0x8(%ebp),%eax
081bc56e +0x0608:  mov    %eax,(%esp)
081bc571 +0x060b:  call   081bc554 <+0x5ee>
081bc576 +0x0610:  mov    0xc(%ebp),%eax
081bc579 +0x0613:  mov    %eax,(%esp)
081bc57c +0x0616:  call   081bccfc <+0xd96>
081bc581 +0x061b:  mov    %eax,-0xc(%ebp)
081bc584 +0x061e:  mov    0xc(%ebp),%eax
081bc587 +0x0621:  mov    %eax,0x4(%esp)
081bc58b +0x0625:  mov    0x8(%ebp),%eax
081bc58e +0x0628:  mov    %eax,(%esp)
081bc591 +0x062b:  call   081bcd08 <+0xda2>
081bc596 +0x0630:  mov    -0xc(%ebp),%eax
081bc599 +0x0633:  mov    %eax,0xc(%ebp)
081bc59c +0x0636:  cmpl   $0x0,0xc(%ebp)
081bc5a0 +0x063a:  setne  %al
081bc5a3 +0x063d:  test   %al,%al
081bc5a5 +0x063f:  jne    081bc55c <+0x5f6>
081bc5a7 +0x0641:  leave
081bc5a8 +0x0642:  ret
081bc5a9 +0x0643:  nop
081bc5aa +0x0644:  push   %ebp
081bc5ab +0x0645:  mov    %esp,%ebp
081bc5ad +0x0647:  mov    0x8(%ebp),%eax
081bc5b0 +0x064a:  mov    0x8(%eax),%eax
081bc5b3 +0x064d:  pop    %ebp
081bc5b4 +0x064e:  ret
081bc5b5 +0x064f:  nop
081bc5b6 +0x0650:  push   %ebp
081bc5b7 +0x0651:  mov    %esp,%ebp
081bc5b9 +0x0653:  sub    $0x18,%esp
081bc5bc +0x0656:  mov    0x8(%ebp),%eax
081bc5bf +0x0659:  mov    %eax,(%esp)
081bc5c2 +0x065c:  call   080e365c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1402>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1402
081bc5c7 +0x0661:  leave
081bc5c8 +0x0662:  ret
081bc5c9 +0x0663:  nop
081bc5ca +0x0664:  push   %ebp
081bc5cb +0x0665:  mov    %esp,%ebp
081bc5cd +0x0667:  push   %esi
081bc5ce +0x0668:  push   %ebx
081bc5cf +0x0669:  sub    $0x10,%esp
081bc5d2 +0x066c:  mov    0x8(%ebp),%eax
081bc5d5 +0x066f:  mov    %eax,(%esp)
081bc5d8 +0x0672:  call   081bcd3c <+0xdd6>
081bc5dd +0x0677:  movl   $0x0,0x4(%esp)
081bc5e5 +0x067f:  mov    0x8(%ebp),%eax
081bc5e8 +0x0682:  mov    %eax,(%esp)
081bc5eb +0x0685:  call   081bcd7e <+0xe18>
081bc5f0 +0x068a:  jmp    081bc60d <+0x6a7>
081bc5f2 +0x068c:  mov    %edx,%ebx
081bc5f4 +0x068e:  mov    %eax,%esi
081bc5f6 +0x0690:  mov    0x8(%ebp),%eax
081bc5f9 +0x0693:  mov    %eax,(%esp)
081bc5fc +0x0696:  call   081bc5b6 <+0x650>
081bc601 +0x069b:  mov    %esi,%eax
081bc603 +0x069d:  mov    %ebx,%edx
081bc605 +0x069f:  mov    %eax,(%esp)
081bc608 +0x06a2:  call   08ae3750 <_Unwind_Resume>
081bc60d +0x06a7:  add    $0x10,%esp
081bc610 +0x06aa:  pop    %ebx
081bc611 +0x06ab:  pop    %esi
081bc612 +0x06ac:  pop    %ebp
081bc613 +0x06ad:  ret
081bc614 +0x06ae:  push   %ebp
081bc615 +0x06af:  mov    %esp,%ebp
081bc617 +0x06b1:  push   %esi
081bc618 +0x06b2:  push   %ebx
081bc619 +0x06b3:  sub    $0x10,%esp
081bc61c +0x06b6:  mov    0x8(%ebp),%eax
081bc61f +0x06b9:  mov    (%eax),%eax
081bc621 +0x06bb:  test   %eax,%eax
081bc623 +0x06bd:  je     081bc682 <+0x71c>
081bc625 +0x06bf:  mov    0x8(%ebp),%eax
081bc628 +0x06c2:  mov    0x24(%eax),%eax
081bc62b +0x06c5:  lea    0x4(%eax),%edx
081bc62e +0x06c8:  mov    0x8(%ebp),%eax
081bc631 +0x06cb:  mov    0x14(%eax),%eax
081bc634 +0x06ce:  mov    %edx,0x8(%esp)
081bc638 +0x06d2:  mov    %eax,0x4(%esp)
081bc63c +0x06d6:  mov    0x8(%ebp),%eax
081bc63f +0x06d9:  mov    %eax,(%esp)
081bc642 +0x06dc:  call   081bceee <+0xf88>
081bc647 +0x06e1:  mov    0x8(%ebp),%eax
081bc64a +0x06e4:  mov    0x4(%eax),%edx
081bc64d +0x06e7:  mov    0x8(%ebp),%eax
081bc650 +0x06ea:  mov    (%eax),%eax
081bc652 +0x06ec:  mov    %edx,0x8(%esp)
081bc656 +0x06f0:  mov    %eax,0x4(%esp)
081bc65a +0x06f4:  mov    0x8(%ebp),%eax
081bc65d +0x06f7:  mov    %eax,(%esp)
081bc660 +0x06fa:  call   081bcf24 <+0xfbe>
081bc665 +0x06ff:  jmp    081bc682 <+0x71c>
081bc667 +0x0701:  mov    %edx,%ebx
081bc669 +0x0703:  mov    %eax,%esi
081bc66b +0x0705:  mov    0x8(%ebp),%eax
081bc66e +0x0708:  mov    %eax,(%esp)
081bc671 +0x070b:  call   081bc5b6 <+0x650>
081bc676 +0x0710:  mov    %esi,%eax
081bc678 +0x0712:  mov    %ebx,%edx
081bc67a +0x0714:  mov    %eax,(%esp)
081bc67d +0x0717:  call   08ae3750 <_Unwind_Resume>
081bc682 +0x071c:  mov    0x8(%ebp),%eax
081bc685 +0x071f:  mov    %eax,(%esp)
081bc688 +0x0722:  call   081bc5b6 <+0x650>
081bc68d +0x0727:  add    $0x10,%esp
081bc690 +0x072a:  pop    %ebx
081bc691 +0x072b:  pop    %esi
081bc692 +0x072c:  pop    %ebp
081bc693 +0x072d:  ret
081bc694 +0x072e:  push   %ebp
081bc695 +0x072f:  mov    %esp,%ebp
081bc697 +0x0731:  push   %ebx
081bc698 +0x0732:  sub    $0x14,%esp
081bc69b +0x0735:  mov    0x8(%ebp),%ebx
081bc69e +0x0738:  mov    %ebx,%eax
081bc6a0 +0x073a:  mov    0xc(%ebp),%edx
081bc6a3 +0x073d:  add    $0x8,%edx
081bc6a6 +0x0740:  mov    %edx,0x4(%esp)
081bc6aa +0x0744:  mov    %eax,(%esp)
081bc6ad +0x0747:  call   081bc6f0 <+0x78a>
081bc6b2 +0x074c:  mov    %ebx,%eax
081bc6b4 +0x074e:  mov    %ebx,%eax
081bc6b6 +0x0750:  add    $0x14,%esp
081bc6b9 +0x0753:  pop    %ebx
081bc6ba +0x0754:  pop    %ebp
081bc6bb +0x0755:  ret    $0x4
081bc6be +0x0758:  push   %ebp
081bc6bf +0x0759:  mov    %esp,%ebp
081bc6c1 +0x075b:  push   %ebx
081bc6c2 +0x075c:  sub    $0x14,%esp
081bc6c5 +0x075f:  mov    0x8(%ebp),%ebx
081bc6c8 +0x0762:  mov    %ebx,%eax
081bc6ca +0x0764:  mov    0xc(%ebp),%edx
081bc6cd +0x0767:  add    $0x18,%edx
081bc6d0 +0x076a:  mov    %edx,0x4(%esp)
081bc6d4 +0x076e:  mov    %eax,(%esp)
081bc6d7 +0x0771:  call   081bc6f0 <+0x78a>
081bc6dc +0x0776:  mov    %ebx,%eax
081bc6de +0x0778:  mov    %ebx,%eax
081bc6e0 +0x077a:  add    $0x14,%esp
081bc6e3 +0x077d:  pop    %ebx
081bc6e4 +0x077e:  pop    %ebp
081bc6e5 +0x077f:  ret    $0x4
081bc6e8 +0x0782:  push   %ebp
081bc6e9 +0x0783:  mov    %esp,%ebp
081bc6eb +0x0785:  mov    0x8(%ebp),%eax
081bc6ee +0x0788:  pop    %ebp
081bc6ef +0x0789:  ret
081bc6f0 +0x078a:  push   %ebp
081bc6f1 +0x078b:  mov    %esp,%ebp
081bc6f3 +0x078d:  mov    0xc(%ebp),%eax
081bc6f6 +0x0790:  mov    (%eax),%edx
081bc6f8 +0x0792:  mov    0x8(%ebp),%eax
081bc6fb +0x0795:  mov    %edx,(%eax)
081bc6fd +0x0797:  mov    0xc(%ebp),%eax
081bc700 +0x079a:  mov    0x4(%eax),%edx
081bc703 +0x079d:  mov    0x8(%ebp),%eax
081bc706 +0x07a0:  mov    %edx,0x4(%eax)
081bc709 +0x07a3:  mov    0xc(%ebp),%eax
081bc70c +0x07a6:  mov    0x8(%eax),%edx
081bc70f +0x07a9:  mov    0x8(%ebp),%eax
081bc712 +0x07ac:  mov    %edx,0x8(%eax)
081bc715 +0x07af:  mov    0xc(%ebp),%eax
081bc718 +0x07b2:  mov    0xc(%eax),%edx
081bc71b +0x07b5:  mov    0x8(%ebp),%eax
081bc71e +0x07b8:  mov    %edx,0xc(%eax)
081bc721 +0x07bb:  pop    %ebp
081bc722 +0x07bc:  ret
081bc723 +0x07bd:  nop
081bc724 +0x07be:  push   %ebp
081bc725 +0x07bf:  mov    %esp,%ebp
081bc727 +0x07c1:  sub    $0x20,%esp
081bc72a +0x07c4:  leave
081bc72b +0x07c5:  ret
081bc72c +0x07c6:  push   %ebp
081bc72d +0x07c7:  mov    %esp,%ebp
081bc72f +0x07c9:  push   %ebx
081bc730 +0x07ca:  sub    $0x14,%esp
081bc733 +0x07cd:  mov    0x8(%ebp),%eax
081bc736 +0x07d0:  mov    %eax,(%esp)
081bc739 +0x07d3:  call   081bc5aa <+0x644>
081bc73e +0x07d8:  mov    %eax,0x4(%esp)
081bc742 +0x07dc:  mov    0x8(%ebp),%eax
081bc745 +0x07df:  mov    %eax,(%esp)
081bc748 +0x07e2:  call   081bc554 <+0x5ee>
081bc74d +0x07e7:  mov    0x8(%ebp),%eax
081bc750 +0x07ea:  mov    %eax,(%esp)
081bc753 +0x07ed:  call   081bcf72 <+0x100c>
081bc758 +0x07f2:  mov    %eax,%ebx
081bc75a +0x07f4:  mov    0x8(%ebp),%eax
081bc75d +0x07f7:  mov    %eax,(%esp)
081bc760 +0x07fa:  call   081bcf66 <+0x1000>
081bc765 +0x07ff:  mov    %eax,(%ebx)
081bc767 +0x0801:  mov    0x8(%ebp),%eax
081bc76a +0x0804:  mov    %eax,(%esp)
081bc76d +0x0807:  call   081bcf7e <+0x1018>
081bc772 +0x080c:  movl   $0x0,(%eax)
081bc778 +0x0812:  mov    0x8(%ebp),%eax
081bc77b +0x0815:  mov    %eax,(%esp)
081bc77e +0x0818:  call   081bcf8a <+0x1024>
081bc783 +0x081d:  mov    %eax,%ebx
081bc785 +0x081f:  mov    0x8(%ebp),%eax
081bc788 +0x0822:  mov    %eax,(%esp)
081bc78b +0x0825:  call   081bcf66 <+0x1000>
081bc790 +0x082a:  mov    %eax,(%ebx)
081bc792 +0x082c:  mov    0x8(%ebp),%eax
081bc795 +0x082f:  movl   $0x0,0x14(%eax)
081bc79c +0x0836:  add    $0x14,%esp
081bc79f +0x0839:  pop    %ebx
081bc7a0 +0x083a:  pop    %ebp
081bc7a1 +0x083b:  ret
081bc7a2 +0x083c:  push   %ebp
081bc7a3 +0x083d:  mov    %esp,%ebp
081bc7a5 +0x083f:  push   %ebx
081bc7a6 +0x0840:  sub    $0x34,%esp
081bc7a9 +0x0843:  mov    0x8(%ebp),%eax
081bc7ac +0x0846:  mov    %eax,(%esp)
081bc7af +0x0849:  call   081bc6e8 <+0x782>
081bc7b4 +0x084e:  mov    %eax,%ebx
081bc7b6 +0x0850:  lea    -0x28(%ebp),%eax
081bc7b9 +0x0853:  mov    0x8(%ebp),%edx
081bc7bc +0x0856:  mov    %edx,0x4(%esp)
081bc7c0 +0x085a:  mov    %eax,(%esp)
081bc7c3 +0x085d:  call   081bc6be <+0x758>
081bc7c8 +0x0862:  sub    $0x4,%esp
081bc7cb +0x0865:  mov    0xc(%ebp),%eax
081bc7ce +0x0868:  mov    %eax,0x4(%esp)
081bc7d2 +0x086c:  lea    -0x18(%ebp),%eax
081bc7d5 +0x086f:  mov    %eax,(%esp)
081bc7d8 +0x0872:  call   081bc6f0 <+0x78a>
081bc7dd +0x0877:  mov    %ebx,0xc(%esp)
081bc7e1 +0x087b:  lea    -0x28(%ebp),%eax
081bc7e4 +0x087e:  mov    %eax,0x8(%esp)
081bc7e8 +0x0882:  lea    -0x18(%ebp),%eax
081bc7eb +0x0885:  mov    %eax,0x4(%esp)
081bc7ef +0x0889:  mov    0x8(%ebp),%eax
081bc7f2 +0x088c:  mov    %eax,(%esp)
081bc7f5 +0x088f:  call   081bc724 <+0x7be>
081bc7fa +0x0894:  mov    0x8(%ebp),%eax
081bc7fd +0x0897:  mov    0x24(%eax),%eax
081bc800 +0x089a:  lea    0x4(%eax),%ecx
081bc803 +0x089d:  mov    0xc(%ebp),%eax
081bc806 +0x08a0:  mov    0xc(%eax),%eax
081bc809 +0x08a3:  lea    0x4(%eax),%edx
081bc80c +0x08a6:  mov    0x8(%ebp),%eax
081bc80f +0x08a9:  mov    %ecx,0x8(%esp)
081bc813 +0x08ad:  mov    %edx,0x4(%esp)
081bc817 +0x08b1:  mov    %eax,(%esp)
081bc81a +0x08b4:  call   081bceee <+0xf88>
081bc81f +0x08b9:  mov    0x8(%ebp),%eax
081bc822 +0x08bc:  mov    0xc(%ebp),%edx
081bc825 +0x08bf:  mov    (%edx),%ecx
081bc827 +0x08c1:  mov    %ecx,0x18(%eax)
081bc82a +0x08c4:  mov    0x4(%edx),%ecx
081bc82d +0x08c7:  mov    %ecx,0x1c(%eax)
081bc830 +0x08ca:  mov    0x8(%edx),%ecx
081bc833 +0x08cd:  mov    %ecx,0x20(%eax)
081bc836 +0x08d0:  mov    0xc(%edx),%edx
081bc839 +0x08d3:  mov    %edx,0x24(%eax)
081bc83c +0x08d6:  mov    -0x4(%ebp),%ebx
081bc83f +0x08d9:  leave
081bc840 +0x08da:  ret
081bc841 +0x08db:  push   %ebp
081bc842 +0x08dc:  mov    %esp,%ebp
081bc844 +0x08de:  push   %ebx
081bc845 +0x08df:  sub    $0x4,%esp
081bc848 +0x08e2:  call   081bcf95 <+0x102f>
081bc84d +0x08e7:  mov    %eax,%edx
081bc84f +0x08e9:  mov    0x8(%ebp),%eax
081bc852 +0x08ec:  mov    0xc(%eax),%eax
081bc855 +0x08ef:  mov    %eax,%ecx
081bc857 +0x08f1:  mov    0xc(%ebp),%eax
081bc85a +0x08f4:  mov    0xc(%eax),%eax
081bc85d +0x08f7:  mov    %ecx,%ebx
081bc85f +0x08f9:  sub    %eax,%ebx
081bc861 +0x08fb:  mov    %ebx,%eax
081bc863 +0x08fd:  sar    $0x2,%eax
081bc866 +0x0900:  sub    $0x1,%eax
081bc869 +0x0903:  imul   %eax,%edx
081bc86c +0x0906:  mov    0x8(%ebp),%eax
081bc86f +0x0909:  mov    (%eax),%eax
081bc871 +0x090b:  mov    %eax,%ecx
081bc873 +0x090d:  mov    0x8(%ebp),%eax
081bc876 +0x0910:  mov    0x4(%eax),%eax
081bc879 +0x0913:  mov    %ecx,%ebx
081bc87b +0x0915:  sub    %eax,%ebx
081bc87d +0x0917:  mov    %ebx,%eax
081bc87f +0x0919:  sar    $0x2,%eax
081bc882 +0x091c:  lea    (%edx,%eax,1),%ecx
081bc885 +0x091f:  mov    0xc(%ebp),%eax
081bc888 +0x0922:  mov    0x8(%eax),%eax
081bc88b +0x0925:  mov    %eax,%edx
081bc88d +0x0927:  mov    0xc(%ebp),%eax
081bc890 +0x092a:  mov    (%eax),%eax
081bc892 +0x092c:  mov    %edx,%ebx
081bc894 +0x092e:  sub    %eax,%ebx
081bc896 +0x0930:  mov    %ebx,%eax
081bc898 +0x0932:  sar    $0x2,%eax
081bc89b +0x0935:  lea    (%ecx,%eax,1),%eax
081bc89e +0x0938:  add    $0x4,%esp
081bc8a1 +0x093b:  pop    %ebx
081bc8a2 +0x093c:  pop    %ebp
081bc8a3 +0x093d:  ret
081bc8a4 +0x093e:  push   %ebp
081bc8a5 +0x093f:  mov    %esp,%ebp
081bc8a7 +0x0941:  mov    0x8(%ebp),%eax
081bc8aa +0x0944:  pop    %ebp
081bc8ab +0x0945:  ret
081bc8ac +0x0946:  push   %ebp
081bc8ad +0x0947:  mov    %esp,%ebp
081bc8af +0x0949:  sub    $0x18,%esp
081bc8b2 +0x094c:  mov    0xc(%ebp),%eax
081bc8b5 +0x094f:  mov    %eax,(%esp)
081bc8b8 +0x0952:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
081bc8bd +0x0957:  mov    (%eax),%edx
081bc8bf +0x0959:  mov    0x8(%ebp),%eax
081bc8c2 +0x095c:  mov    %edx,(%eax)
081bc8c4 +0x095e:  mov    0x10(%ebp),%eax
081bc8c7 +0x0961:  mov    %eax,(%esp)
081bc8ca +0x0964:  call   081bc8a4 <+0x93e>
081bc8cf +0x0969:  mov    0x8(%ebp),%edx
081bc8d2 +0x096c:  mov    (%eax),%ecx
081bc8d4 +0x096e:  mov    %ecx,0x4(%edx)
081bc8d7 +0x0971:  mov    0x4(%eax),%ecx
081bc8da +0x0974:  mov    %ecx,0x8(%edx)
081bc8dd +0x0977:  movzbl 0x8(%eax),%eax
081bc8e1 +0x097b:  mov    %al,0xc(%edx)
081bc8e4 +0x097e:  leave
081bc8e5 +0x097f:  ret
081bc8e6 +0x0980:  push   %ebp
081bc8e7 +0x0981:  mov    %esp,%ebp
081bc8e9 +0x0983:  mov    0x8(%ebp),%eax
081bc8ec +0x0986:  pop    %ebp
081bc8ed +0x0987:  ret
081bc8ee +0x0988:  push   %ebp
081bc8ef +0x0989:  mov    %esp,%ebp
081bc8f1 +0x098b:  push   %esi
081bc8f2 +0x098c:  push   %ebx
081bc8f3 +0x098d:  sub    $0x50,%esp
081bc8f6 +0x0990:  mov    0x8(%ebp),%ebx
081bc8f9 +0x0993:  mov    0xc(%ebp),%eax
081bc8fc +0x0996:  mov    %eax,(%esp)
081bc8ff +0x0999:  call   081bc5aa <+0x644>
081bc904 +0x099e:  mov    %eax,-0x14(%ebp)
081bc907 +0x09a1:  mov    0xc(%ebp),%eax
081bc90a +0x09a4:  mov    %eax,(%esp)
081bc90d +0x09a7:  call   081bcf66 <+0x1000>
081bc912 +0x09ac:  mov    %eax,-0x10(%ebp)
081bc915 +0x09af:  movb   $0x1,-0x9(%ebp)
081bc919 +0x09b3:  jmp    081bc977 <+0xa11>
081bc91b +0x09b5:  mov    -0x14(%ebp),%eax
081bc91e +0x09b8:  mov    %eax,-0x10(%ebp)
081bc921 +0x09bb:  mov    -0x14(%ebp),%eax
081bc924 +0x09be:  mov    %eax,(%esp)
081bc927 +0x09c1:  call   081bcfb2 <+0x104c>
081bc92c +0x09c6:  mov    %eax,%esi
081bc92e +0x09c8:  mov    0x10(%ebp),%eax
081bc931 +0x09cb:  mov    %eax,0x4(%esp)
081bc935 +0x09cf:  lea    -0x2d(%ebp),%eax
081bc938 +0x09d2:  mov    %eax,(%esp)
081bc93b +0x09d5:  call   081bcfaa <+0x1044>
081bc940 +0x09da:  mov    0xc(%ebp),%edx
081bc943 +0x09dd:  mov    %esi,0x8(%esp)
081bc947 +0x09e1:  mov    %eax,0x4(%esp)
081bc94b +0x09e5:  mov    %edx,(%esp)
081bc94e +0x09e8:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081bc953 +0x09ed:  mov    %al,-0x9(%ebp)
081bc956 +0x09f0:  cmpb   $0x0,-0x9(%ebp)
081bc95a +0x09f4:  je     081bc969 <+0xa03>
081bc95c +0x09f6:  mov    -0x14(%ebp),%eax
081bc95f +0x09f9:  mov    %eax,(%esp)
081bc962 +0x09fc:  call   081bccfc <+0xd96>
081bc967 +0x0a01:  jmp    081bc974 <+0xa0e>
081bc969 +0x0a03:  mov    -0x14(%ebp),%eax
081bc96c +0x0a06:  mov    %eax,(%esp)
081bc96f +0x0a09:  call   081bccf1 <+0xd8b>
081bc974 +0x0a0e:  mov    %eax,-0x14(%ebp)
081bc977 +0x0a11:  cmpl   $0x0,-0x14(%ebp)
081bc97b +0x0a15:  setne  %al
081bc97e +0x0a18:  test   %al,%al
081bc980 +0x0a1a:  jne    081bc91b <+0x9b5>
081bc982 +0x0a1c:  mov    -0x10(%ebp),%eax
081bc985 +0x0a1f:  mov    %eax,0x4(%esp)
081bc989 +0x0a23:  lea    -0x34(%ebp),%eax
081bc98c +0x0a26:  mov    %eax,(%esp)
081bc98f +0x0a29:  call   081bcfd4 <+0x106e>
081bc994 +0x0a2e:  cmpb   $0x0,-0x9(%ebp)
081bc998 +0x0a32:  je     081bca19 <+0xab3>
081bc99a +0x0a34:  lea    -0x2c(%ebp),%eax
081bc99d +0x0a37:  mov    0xc(%ebp),%edx
081bc9a0 +0x0a3a:  mov    %edx,0x4(%esp)
081bc9a4 +0x0a3e:  mov    %eax,(%esp)
081bc9a7 +0x0a41:  call   081bcfe2 <+0x107c>
081bc9ac +0x0a46:  sub    $0x4,%esp
081bc9af +0x0a49:  lea    -0x2c(%ebp),%eax
081bc9b2 +0x0a4c:  mov    %eax,0x4(%esp)
081bc9b6 +0x0a50:  lea    -0x34(%ebp),%eax
081bc9b9 +0x0a53:  mov    %eax,(%esp)
081bc9bc +0x0a56:  call   081bd008 <+0x10a2>
081bc9c1 +0x0a5b:  test   %al,%al
081bc9c3 +0x0a5d:  je     081bca0e <+0xaa8>
081bc9c5 +0x0a5f:  movb   $0x1,-0x25(%ebp)
081bc9c9 +0x0a63:  mov    -0x10(%ebp),%ecx
081bc9cc +0x0a66:  mov    -0x14(%ebp),%edx
081bc9cf +0x0a69:  lea    -0x24(%ebp),%eax
081bc9d2 +0x0a6c:  mov    0x10(%ebp),%esi
081bc9d5 +0x0a6f:  mov    %esi,0x10(%esp)
081bc9d9 +0x0a73:  mov    %ecx,0xc(%esp)
081bc9dd +0x0a77:  mov    %edx,0x8(%esp)
081bc9e1 +0x0a7b:  mov    0xc(%ebp),%edx
081bc9e4 +0x0a7e:  mov    %edx,0x4(%esp)
081bc9e8 +0x0a82:  mov    %eax,(%esp)
081bc9eb +0x0a85:  call   081bd01c <+0x10b6>
081bc9f0 +0x0a8a:  sub    $0x4,%esp
081bc9f3 +0x0a8d:  lea    -0x25(%ebp),%eax
081bc9f6 +0x0a90:  mov    %eax,0x8(%esp)
081bc9fa +0x0a94:  lea    -0x24(%ebp),%eax
081bc9fd +0x0a97:  mov    %eax,0x4(%esp)
081bca01 +0x0a9b:  mov    %ebx,(%esp)
081bca04 +0x0a9e:  call   081bd0e4 <+0x117e>
081bca09 +0x0aa3:  jmp    081bcaaf <+0xb49>
081bca0e +0x0aa8:  lea    -0x34(%ebp),%eax
081bca11 +0x0aab:  mov    %eax,(%esp)
081bca14 +0x0aae:  call   081bd112 <+0x11ac>
081bca19 +0x0ab3:  mov    0x10(%ebp),%eax
081bca1c +0x0ab6:  mov    %eax,0x4(%esp)
081bca20 +0x0aba:  lea    -0x1e(%ebp),%eax
081bca23 +0x0abd:  mov    %eax,(%esp)
081bca26 +0x0ac0:  call   081bcfaa <+0x1044>
081bca2b +0x0ac5:  mov    %eax,%esi
081bca2d +0x0ac7:  mov    -0x34(%ebp),%eax
081bca30 +0x0aca:  mov    %eax,(%esp)
081bca33 +0x0acd:  call   081bd12f <+0x11c9>
081bca38 +0x0ad2:  mov    0xc(%ebp),%edx
081bca3b +0x0ad5:  mov    %esi,0x8(%esp)
081bca3f +0x0ad9:  mov    %eax,0x4(%esp)
081bca43 +0x0add:  mov    %edx,(%esp)
081bca46 +0x0ae0:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081bca4b +0x0ae5:  test   %al,%al
081bca4d +0x0ae7:  je     081bca95 <+0xb2f>
081bca4f +0x0ae9:  movb   $0x1,-0x1d(%ebp)
081bca53 +0x0aed:  mov    -0x10(%ebp),%ecx
081bca56 +0x0af0:  mov    -0x14(%ebp),%edx
081bca59 +0x0af3:  lea    -0x1c(%ebp),%eax
081bca5c +0x0af6:  mov    0x10(%ebp),%esi
081bca5f +0x0af9:  mov    %esi,0x10(%esp)
081bca63 +0x0afd:  mov    %ecx,0xc(%esp)
081bca67 +0x0b01:  mov    %edx,0x8(%esp)
081bca6b +0x0b05:  mov    0xc(%ebp),%edx
081bca6e +0x0b08:  mov    %edx,0x4(%esp)
081bca72 +0x0b0c:  mov    %eax,(%esp)
081bca75 +0x0b0f:  call   081bd01c <+0x10b6>
081bca7a +0x0b14:  sub    $0x4,%esp
081bca7d +0x0b17:  lea    -0x1d(%ebp),%eax
081bca80 +0x0b1a:  mov    %eax,0x8(%esp)
081bca84 +0x0b1e:  lea    -0x1c(%ebp),%eax
081bca87 +0x0b21:  mov    %eax,0x4(%esp)
081bca8b +0x0b25:  mov    %ebx,(%esp)
081bca8e +0x0b28:  call   081bd0e4 <+0x117e>
081bca93 +0x0b2d:  jmp    081bcaaf <+0xb49>
081bca95 +0x0b2f:  movb   $0x0,-0x15(%ebp)
081bca99 +0x0b33:  lea    -0x15(%ebp),%eax
081bca9c +0x0b36:  mov    %eax,0x8(%esp)
081bcaa0 +0x0b3a:  lea    -0x34(%ebp),%eax
081bcaa3 +0x0b3d:  mov    %eax,0x4(%esp)
081bcaa7 +0x0b41:  mov    %ebx,(%esp)
081bcaaa +0x0b44:  call   081bd152 <+0x11ec>
081bcaaf +0x0b49:  mov    %ebx,%eax
081bcab1 +0x0b4b:  lea    -0x8(%ebp),%esp
081bcab4 +0x0b4e:  add    $0x0,%esp
081bcab7 +0x0b51:  pop    %ebx
081bcab8 +0x0b52:  pop    %esi
081bcab9 +0x0b53:  pop    %ebp
081bcaba +0x0b54:  ret    $0x4
081bcabd +0x0b57:  nop
081bcabe +0x0b58:  push   %ebp
081bcabf +0x0b59:  mov    %esp,%ebp
081bcac1 +0x0b5b:  push   %ebx
081bcac2 +0x0b5c:  sub    $0x14,%esp
081bcac5 +0x0b5f:  movl   $0x1,0x4(%esp)
081bcacd +0x0b67:  mov    0x8(%ebp),%eax
081bcad0 +0x0b6a:  mov    %eax,(%esp)
081bcad3 +0x0b6d:  call   081bd180 <+0x121a>
081bcad8 +0x0b72:  mov    0x8(%ebp),%eax
081bcadb +0x0b75:  mov    0x24(%eax),%eax
081bcade +0x0b78:  lea    0x4(%eax),%ebx
081bcae1 +0x0b7b:  mov    0x8(%ebp),%eax
081bcae4 +0x0b7e:  mov    %eax,(%esp)
081bcae7 +0x0b81:  call   081bd1d6 <+0x1270>
081bcaec +0x0b86:  mov    %eax,(%ebx)
081bcaee +0x0b88:  mov    0xc(%ebp),%eax
081bcaf1 +0x0b8b:  mov    %eax,(%esp)
081bcaf4 +0x0b8e:  call   080e3796 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x153c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x153c
081bcaf9 +0x0b93:  mov    0x8(%ebp),%edx
081bcafc +0x0b96:  mov    0x18(%edx),%ecx
081bcaff +0x0b99:  mov    0x8(%ebp),%edx
081bcb02 +0x0b9c:  mov    %eax,0x8(%esp)
081bcb06 +0x0ba0:  mov    %ecx,0x4(%esp)
081bcb0a +0x0ba4:  mov    %edx,(%esp)
081bcb0d +0x0ba7:  call   080e2a62 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x808>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x808
081bcb12 +0x0bac:  mov    0x8(%ebp),%eax
081bcb15 +0x0baf:  mov    0x24(%eax),%eax
081bcb18 +0x0bb2:  lea    0x4(%eax),%edx
081bcb1b +0x0bb5:  mov    0x8(%ebp),%eax
081bcb1e +0x0bb8:  add    $0x18,%eax
081bcb21 +0x0bbb:  mov    %edx,0x4(%esp)
081bcb25 +0x0bbf:  mov    %eax,(%esp)
081bcb28 +0x0bc2:  call   081bd202 <+0x129c>
081bcb2d +0x0bc7:  mov    0x8(%ebp),%eax
081bcb30 +0x0bca:  mov    0x1c(%eax),%edx
081bcb33 +0x0bcd:  mov    0x8(%ebp),%eax
081bcb36 +0x0bd0:  mov    %edx,0x18(%eax)
081bcb39 +0x0bd3:  add    $0x14,%esp
081bcb3c +0x0bd6:  pop    %ebx
081bcb3d +0x0bd7:  pop    %ebp
081bcb3e +0x0bd8:  ret
081bcb3f +0x0bd9:  nop
081bcb40 +0x0bda:  push   %ebp
081bcb41 +0x0bdb:  mov    %esp,%ebp
081bcb43 +0x0bdd:  push   %esi
081bcb44 +0x0bde:  push   %ebx
081bcb45 +0x0bdf:  sub    $0x30,%esp
081bcb48 +0x0be2:  mov    0x8(%ebp),%ebx
081bcb4b +0x0be5:  mov    0xc(%ebp),%eax
081bcb4e +0x0be8:  mov    %eax,(%esp)
081bcb51 +0x0beb:  call   081bcf66 <+0x1000>
081bcb56 +0x0bf0:  mov    %eax,%esi
081bcb58 +0x0bf2:  mov    0xc(%ebp),%eax
081bcb5b +0x0bf5:  mov    %eax,(%esp)
081bcb5e +0x0bf8:  call   081bc5aa <+0x644>
081bcb63 +0x0bfd:  lea    -0x10(%ebp),%edx
081bcb66 +0x0c00:  mov    0x10(%ebp),%ecx
081bcb69 +0x0c03:  mov    %ecx,0x10(%esp)
081bcb6d +0x0c07:  mov    %esi,0xc(%esp)
081bcb71 +0x0c0b:  mov    %eax,0x8(%esp)
081bcb75 +0x0c0f:  mov    0xc(%ebp),%eax
081bcb78 +0x0c12:  mov    %eax,0x4(%esp)
081bcb7c +0x0c16:  mov    %edx,(%esp)
081bcb7f +0x0c19:  call   081bd264 <+0x12fe>
081bcb84 +0x0c1e:  sub    $0x4,%esp
081bcb87 +0x0c21:  lea    -0xc(%ebp),%eax
081bcb8a +0x0c24:  mov    0xc(%ebp),%edx
081bcb8d +0x0c27:  mov    %edx,0x4(%esp)
081bcb91 +0x0c2b:  mov    %eax,(%esp)
081bcb94 +0x0c2e:  call   081bcbfe <+0xc98>
081bcb99 +0x0c33:  sub    $0x4,%esp
081bcb9c +0x0c36:  lea    -0xc(%ebp),%eax
081bcb9f +0x0c39:  mov    %eax,0x4(%esp)
081bcba3 +0x0c3d:  lea    -0x10(%ebp),%eax
081bcba6 +0x0c40:  mov    %eax,(%esp)
081bcba9 +0x0c43:  call   081bd008 <+0x10a2>
081bcbae +0x0c48:  test   %al,%al
081bcbb0 +0x0c4a:  jne    081bcbd7 <+0xc71>
081bcbb2 +0x0c4c:  mov    -0x10(%ebp),%eax
081bcbb5 +0x0c4f:  mov    %eax,(%esp)
081bcbb8 +0x0c52:  call   081bd12f <+0x11c9>
081bcbbd +0x0c57:  mov    0xc(%ebp),%edx
081bcbc0 +0x0c5a:  mov    %eax,0x8(%esp)
081bcbc4 +0x0c5e:  mov    0x10(%ebp),%eax
081bcbc7 +0x0c61:  mov    %eax,0x4(%esp)
081bcbcb +0x0c65:  mov    %edx,(%esp)
081bcbce +0x0c68:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081bcbd3 +0x0c6d:  test   %al,%al
081bcbd5 +0x0c6f:  je     081bcbeb <+0xc85>
081bcbd7 +0x0c71:  mov    0xc(%ebp),%eax
081bcbda +0x0c74:  mov    %eax,0x4(%esp)
081bcbde +0x0c78:  mov    %ebx,(%esp)
081bcbe1 +0x0c7b:  call   081bcbfe <+0xc98>
081bcbe6 +0x0c80:  sub    $0x4,%esp
081bcbe9 +0x0c83:  jmp    081bcbf0 <+0xc8a>
081bcbeb +0x0c85:  mov    -0x10(%ebp),%eax
081bcbee +0x0c88:  mov    %eax,(%ebx)
081bcbf0 +0x0c8a:  mov    %ebx,%eax
081bcbf2 +0x0c8c:  lea    -0x8(%ebp),%esp
081bcbf5 +0x0c8f:  add    $0x0,%esp
081bcbf8 +0x0c92:  pop    %ebx
081bcbf9 +0x0c93:  pop    %esi
081bcbfa +0x0c94:  pop    %ebp
081bcbfb +0x0c95:  ret    $0x4
081bcbfe +0x0c98:  push   %ebp
081bcbff +0x0c99:  mov    %esp,%ebp
081bcc01 +0x0c9b:  push   %ebx
081bcc02 +0x0c9c:  sub    $0x14,%esp
081bcc05 +0x0c9f:  mov    0x8(%ebp),%ebx
081bcc08 +0x0ca2:  mov    0xc(%ebp),%eax
081bcc0b +0x0ca5:  add    $0x4,%eax
081bcc0e +0x0ca8:  mov    %eax,0x4(%esp)
081bcc12 +0x0cac:  mov    %ebx,(%esp)
081bcc15 +0x0caf:  call   081bcfd4 <+0x106e>
081bcc1a +0x0cb4:  mov    %ebx,%eax
081bcc1c +0x0cb6:  add    $0x14,%esp
081bcc1f +0x0cb9:  pop    %ebx
081bcc20 +0x0cba:  pop    %ebp
081bcc21 +0x0cbb:  ret    $0x4
081bcc24 +0x0cbe:  push   %ebp
081bcc25 +0x0cbf:  mov    %esp,%ebp
081bcc27 +0x0cc1:  mov    0x8(%ebp),%eax
081bcc2a +0x0cc4:  mov    (%eax),%edx
081bcc2c +0x0cc6:  mov    0xc(%ebp),%eax
081bcc2f +0x0cc9:  mov    (%eax),%eax
081bcc31 +0x0ccb:  cmp    %eax,%edx
081bcc33 +0x0ccd:  sete   %al
081bcc36 +0x0cd0:  pop    %ebp
081bcc37 +0x0cd1:  ret
081bcc38 +0x0cd2:  push   %ebp
081bcc39 +0x0cd3:  mov    %esp,%ebp
081bcc3b +0x0cd5:  mov    0x8(%ebp),%eax
081bcc3e +0x0cd8:  mov    (%eax),%eax
081bcc40 +0x0cda:  pop    %ebp
081bcc41 +0x0cdb:  ret
081bcc42 +0x0cdc:  push   %ebp
081bcc43 +0x0cdd:  mov    %esp,%ebp
081bcc45 +0x0cdf:  sub    $0x18,%esp
081bcc48 +0x0ce2:  mov    0x8(%ebp),%eax
081bcc4b +0x0ce5:  mov    0x8(%eax),%edx
081bcc4e +0x0ce8:  mov    0x8(%ebp),%eax
081bcc51 +0x0ceb:  mov    %edx,0x4(%esp)
081bcc55 +0x0cef:  mov    %eax,(%esp)
081bcc58 +0x0cf2:  call   080e3926 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x16cc>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x16cc
081bcc5d +0x0cf7:  mov    0x8(%ebp),%eax
081bcc60 +0x0cfa:  mov    0xc(%eax),%edx
081bcc63 +0x0cfd:  mov    0x8(%ebp),%eax
081bcc66 +0x0d00:  mov    %edx,0x4(%esp)
081bcc6a +0x0d04:  mov    %eax,(%esp)
081bcc6d +0x0d07:  call   081bd23a <+0x12d4>
081bcc72 +0x0d0c:  mov    0x8(%ebp),%eax
081bcc75 +0x0d0f:  mov    0x14(%eax),%eax
081bcc78 +0x0d12:  lea    0x4(%eax),%edx
081bcc7b +0x0d15:  mov    0x8(%ebp),%eax
081bcc7e +0x0d18:  add    $0x8,%eax
081bcc81 +0x0d1b:  mov    %edx,0x4(%esp)
081bcc85 +0x0d1f:  mov    %eax,(%esp)
081bcc88 +0x0d22:  call   081bd202 <+0x129c>
081bcc8d +0x0d27:  mov    0x8(%ebp),%eax
081bcc90 +0x0d2a:  mov    0xc(%eax),%edx
081bcc93 +0x0d2d:  mov    0x8(%ebp),%eax
081bcc96 +0x0d30:  mov    %edx,0x8(%eax)
081bcc99 +0x0d33:  leave
081bcc9a +0x0d34:  ret
081bcc9b +0x0d35:  nop
081bcc9c +0x0d36:  push   %ebp
081bcc9d +0x0d37:  mov    %esp,%ebp
081bcc9f +0x0d39:  sub    $0x18,%esp
081bcca2 +0x0d3c:  mov    0x8(%ebp),%eax
081bcca5 +0x0d3f:  mov    %eax,(%esp)
081bcca8 +0x0d42:  call   081bd2e0 <+0x137a>
081bccad +0x0d47:  mov    0x8(%ebp),%eax
081bccb0 +0x0d4a:  movl   $0x0,0x4(%eax)
081bccb7 +0x0d51:  mov    0x8(%ebp),%eax
081bccba +0x0d54:  movl   $0x0,0x8(%eax)
081bccc1 +0x0d5b:  mov    0x8(%ebp),%eax
081bccc4 +0x0d5e:  movl   $0x0,0xc(%eax)
081bcccb +0x0d65:  mov    0x8(%ebp),%eax
081bccce +0x0d68:  movl   $0x0,0x10(%eax)
081bccd5 +0x0d6f:  mov    0x8(%ebp),%eax
081bccd8 +0x0d72:  movl   $0x0,0x14(%eax)
081bccdf +0x0d79:  mov    0x8(%ebp),%eax
081bcce2 +0x0d7c:  mov    %eax,(%esp)
081bcce5 +0x0d7f:  call   081bd2f4 <+0x138e>
081bccea +0x0d84:  leave
081bcceb +0x0d85:  ret
081bccec +0x0d86:  push   %ebp
081bcced +0x0d87:  mov    %esp,%ebp
081bccef +0x0d89:  pop    %ebp
081bccf0 +0x0d8a:  ret
081bccf1 +0x0d8b:  push   %ebp
081bccf2 +0x0d8c:  mov    %esp,%ebp
081bccf4 +0x0d8e:  mov    0x8(%ebp),%eax
081bccf7 +0x0d91:  mov    0xc(%eax),%eax
081bccfa +0x0d94:  pop    %ebp
081bccfb +0x0d95:  ret
081bccfc +0x0d96:  push   %ebp
081bccfd +0x0d97:  mov    %esp,%ebp
081bccff +0x0d99:  mov    0x8(%ebp),%eax
081bcd02 +0x0d9c:  mov    0x8(%eax),%eax
081bcd05 +0x0d9f:  pop    %ebp
081bcd06 +0x0da0:  ret
081bcd07 +0x0da1:  nop
081bcd08 +0x0da2:  push   %ebp
081bcd09 +0x0da3:  mov    %esp,%ebp
081bcd0b +0x0da5:  sub    $0x18,%esp
081bcd0e +0x0da8:  mov    0x8(%ebp),%eax
081bcd11 +0x0dab:  mov    %eax,(%esp)
081bcd14 +0x0dae:  call   081bd326 <+0x13c0>
081bcd19 +0x0db3:  mov    0xc(%ebp),%edx
081bcd1c +0x0db6:  mov    %edx,0x4(%esp)
081bcd20 +0x0dba:  mov    %eax,(%esp)
081bcd23 +0x0dbd:  call   081bd334 <+0x13ce>
081bcd28 +0x0dc2:  mov    0xc(%ebp),%eax
081bcd2b +0x0dc5:  mov    %eax,0x4(%esp)
081bcd2f +0x0dc9:  mov    0x8(%ebp),%eax
081bcd32 +0x0dcc:  mov    %eax,(%esp)
081bcd35 +0x0dcf:  call   081bd348 <+0x13e2>
081bcd3a +0x0dd4:  leave
081bcd3b +0x0dd5:  ret
081bcd3c +0x0dd6:  push   %ebp
081bcd3d +0x0dd7:  mov    %esp,%ebp
081bcd3f +0x0dd9:  sub    $0x18,%esp
081bcd42 +0x0ddc:  mov    0x8(%ebp),%eax
081bcd45 +0x0ddf:  mov    %eax,(%esp)
081bcd48 +0x0de2:  call   080e3ef8 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c9e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c9e
081bcd4d +0x0de7:  mov    0x8(%ebp),%eax
081bcd50 +0x0dea:  movl   $0x0,(%eax)
081bcd56 +0x0df0:  mov    0x8(%ebp),%eax
081bcd59 +0x0df3:  movl   $0x0,0x4(%eax)
081bcd60 +0x0dfa:  mov    0x8(%ebp),%eax
081bcd63 +0x0dfd:  add    $0x8,%eax
081bcd66 +0x0e00:  mov    %eax,(%esp)
081bcd69 +0x0e03:  call   081bd36a <+0x1404>
081bcd6e +0x0e08:  mov    0x8(%ebp),%eax
081bcd71 +0x0e0b:  add    $0x18,%eax
081bcd74 +0x0e0e:  mov    %eax,(%esp)
081bcd77 +0x0e11:  call   081bd36a <+0x1404>
081bcd7c +0x0e16:  leave
081bcd7d +0x0e17:  ret
081bcd7e +0x0e18:  push   %ebp
081bcd7f +0x0e19:  mov    %esp,%ebp
081bcd81 +0x0e1b:  push   %esi
081bcd82 +0x0e1c:  push   %ebx
081bcd83 +0x0e1d:  sub    $0x40,%esp
081bcd86 +0x0e20:  movl   $0x4,(%esp)
081bcd8d +0x0e27:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
081bcd92 +0x0e2c:  mov    %eax,-0x2c(%ebp)
081bcd95 +0x0e2f:  mov    0xc(%ebp),%eax
081bcd98 +0x0e32:  mov    $0x0,%edx
081bcd9d +0x0e37:  divl   -0x2c(%ebp)
081bcda0 +0x0e3a:  add    $0x1,%eax
081bcda3 +0x0e3d:  mov    %eax,-0x14(%ebp)
081bcda6 +0x0e40:  mov    -0x14(%ebp),%eax
081bcda9 +0x0e43:  add    $0x2,%eax
081bcdac +0x0e46:  mov    %eax,-0x1c(%ebp)
081bcdaf +0x0e49:  movl   $0x8,-0x18(%ebp)
081bcdb6 +0x0e50:  lea    -0x1c(%ebp),%eax
081bcdb9 +0x0e53:  mov    %eax,0x4(%esp)
081bcdbd +0x0e57:  lea    -0x18(%ebp),%eax
081bcdc0 +0x0e5a:  mov    %eax,(%esp)
081bcdc3 +0x0e5d:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
081bcdc8 +0x0e62:  mov    (%eax),%edx
081bcdca +0x0e64:  mov    0x8(%ebp),%eax
081bcdcd +0x0e67:  mov    %edx,0x4(%eax)
081bcdd0 +0x0e6a:  mov    0x8(%ebp),%eax
081bcdd3 +0x0e6d:  mov    0x4(%eax),%eax
081bcdd6 +0x0e70:  mov    %eax,0x4(%esp)
081bcdda +0x0e74:  mov    0x8(%ebp),%eax
081bcddd +0x0e77:  mov    %eax,(%esp)
081bcde0 +0x0e7a:  call   081bd396 <+0x1430>
081bcde5 +0x0e7f:  mov    0x8(%ebp),%edx
081bcde8 +0x0e82:  mov    %eax,(%edx)
081bcdea +0x0e84:  mov    0x8(%ebp),%eax
081bcded +0x0e87:  mov    (%eax),%edx
081bcdef +0x0e89:  mov    0x8(%ebp),%eax
081bcdf2 +0x0e8c:  mov    0x4(%eax),%eax
081bcdf5 +0x0e8f:  sub    -0x14(%ebp),%eax
081bcdf8 +0x0e92:  shr    %eax
081bcdfa +0x0e94:  shl    $0x2,%eax
081bcdfd +0x0e97:  lea    (%edx,%eax,1),%eax
081bce00 +0x0e9a:  mov    %eax,-0x10(%ebp)
081bce03 +0x0e9d:  mov    -0x14(%ebp),%eax
081bce06 +0x0ea0:  shl    $0x2,%eax
081bce09 +0x0ea3:  add    -0x10(%ebp),%eax
081bce0c +0x0ea6:  mov    %eax,-0xc(%ebp)
081bce0f +0x0ea9:  mov    -0xc(%ebp),%eax
081bce12 +0x0eac:  mov    %eax,0x8(%esp)
081bce16 +0x0eb0:  mov    -0x10(%ebp),%eax
081bce19 +0x0eb3:  mov    %eax,0x4(%esp)
081bce1d +0x0eb7:  mov    0x8(%ebp),%eax
081bce20 +0x0eba:  mov    %eax,(%esp)
081bce23 +0x0ebd:  call   081bd402 <+0x149c>
081bce28 +0x0ec2:  jmp    081bce7d <+0xf17>
081bce2a +0x0ec4:  mov    %eax,(%esp)
081bce2d +0x0ec7:  call   08725ce0 <__cxa_begin_catch>
081bce32 +0x0ecc:  mov    0x8(%ebp),%eax
081bce35 +0x0ecf:  mov    0x4(%eax),%edx
081bce38 +0x0ed2:  mov    0x8(%ebp),%eax
081bce3b +0x0ed5:  mov    (%eax),%eax
081bce3d +0x0ed7:  mov    %edx,0x8(%esp)
081bce41 +0x0edb:  mov    %eax,0x4(%esp)
081bce45 +0x0edf:  mov    0x8(%ebp),%eax
081bce48 +0x0ee2:  mov    %eax,(%esp)
081bce4b +0x0ee5:  call   081bcf24 <+0xfbe>
081bce50 +0x0eea:  mov    0x8(%ebp),%eax
081bce53 +0x0eed:  movl   $0x0,(%eax)
081bce59 +0x0ef3:  mov    0x8(%ebp),%eax
081bce5c +0x0ef6:  movl   $0x0,0x4(%eax)
081bce63 +0x0efd:  call   08724be0 <__cxa_rethrow>
081bce68 +0x0f02:  mov    %edx,%ebx
081bce6a +0x0f04:  mov    %eax,%esi
081bce6c +0x0f06:  call   08725c30 <__cxa_end_catch>
081bce71 +0x0f0b:  mov    %esi,%eax
081bce73 +0x0f0d:  mov    %ebx,%edx
081bce75 +0x0f0f:  mov    %eax,(%esp)
081bce78 +0x0f12:  call   08ae3750 <_Unwind_Resume>
081bce7d +0x0f17:  mov    0x8(%ebp),%eax
081bce80 +0x0f1a:  lea    0x8(%eax),%edx
081bce83 +0x0f1d:  mov    -0x10(%ebp),%eax
081bce86 +0x0f20:  mov    %eax,0x4(%esp)
081bce8a +0x0f24:  mov    %edx,(%esp)
081bce8d +0x0f27:  call   081bd202 <+0x129c>
081bce92 +0x0f2c:  mov    -0xc(%ebp),%eax
081bce95 +0x0f2f:  lea    -0x4(%eax),%edx
081bce98 +0x0f32:  mov    0x8(%ebp),%eax
081bce9b +0x0f35:  add    $0x18,%eax
081bce9e +0x0f38:  mov    %edx,0x4(%esp)
081bcea2 +0x0f3c:  mov    %eax,(%esp)
081bcea5 +0x0f3f:  call   081bd202 <+0x129c>
081bceaa +0x0f44:  mov    0x8(%ebp),%eax
081bcead +0x0f47:  mov    0xc(%eax),%edx
081bceb0 +0x0f4a:  mov    0x8(%ebp),%eax
081bceb3 +0x0f4d:  mov    %edx,0x8(%eax)
081bceb6 +0x0f50:  mov    0x8(%ebp),%eax
081bceb9 +0x0f53:  mov    0x1c(%eax),%ebx
081bcebc +0x0f56:  movl   $0x4,(%esp)
081bcec3 +0x0f5d:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
081bcec8 +0x0f62:  mov    %eax,-0x2c(%ebp)
081bcecb +0x0f65:  mov    0xc(%ebp),%eax
081bcece +0x0f68:  mov    $0x0,%edx
081bced3 +0x0f6d:  divl   -0x2c(%ebp)
081bced6 +0x0f70:  mov    %edx,%ecx
081bced8 +0x0f72:  mov    %ecx,%eax
081bceda +0x0f74:  shl    $0x2,%eax
081bcedd +0x0f77:  lea    (%ebx,%eax,1),%edx
081bcee0 +0x0f7a:  mov    0x8(%ebp),%eax
081bcee3 +0x0f7d:  mov    %edx,0x18(%eax)
081bcee6 +0x0f80:  add    $0x40,%esp
081bcee9 +0x0f83:  pop    %ebx
081bceea +0x0f84:  pop    %esi
081bceeb +0x0f85:  pop    %ebp
081bceec +0x0f86:  ret
081bceed +0x0f87:  nop
081bceee +0x0f88:  push   %ebp
081bceef +0x0f89:  mov    %esp,%ebp
081bcef1 +0x0f8b:  sub    $0x28,%esp
081bcef4 +0x0f8e:  mov    0xc(%ebp),%eax
081bcef7 +0x0f91:  mov    %eax,-0xc(%ebp)
081bcefa +0x0f94:  jmp    081bcf14 <+0xfae>
081bcefc +0x0f96:  mov    -0xc(%ebp),%eax
081bceff +0x0f99:  mov    (%eax),%eax
081bcf01 +0x0f9b:  mov    %eax,0x4(%esp)
081bcf05 +0x0f9f:  mov    0x8(%ebp),%eax
081bcf08 +0x0fa2:  mov    %eax,(%esp)
081bcf0b +0x0fa5:  call   081bd23a <+0x12d4>
081bcf10 +0x0faa:  addl   $0x4,-0xc(%ebp)
081bcf14 +0x0fae:  mov    -0xc(%ebp),%eax
081bcf17 +0x0fb1:  cmp    0x10(%ebp),%eax
081bcf1a +0x0fb4:  setb   %al
081bcf1d +0x0fb7:  test   %al,%al
081bcf1f +0x0fb9:  jne    081bcefc <+0xf96>
081bcf21 +0x0fbb:  leave
081bcf22 +0x0fbc:  ret
081bcf23 +0x0fbd:  nop
081bcf24 +0x0fbe:  push   %ebp
081bcf25 +0x0fbf:  mov    %esp,%ebp
081bcf27 +0x0fc1:  sub    $0x28,%esp
081bcf2a +0x0fc4:  lea    -0x9(%ebp),%eax
081bcf2d +0x0fc7:  mov    0x8(%ebp),%edx
081bcf30 +0x0fca:  mov    %edx,0x4(%esp)
081bcf34 +0x0fce:  mov    %eax,(%esp)
081bcf37 +0x0fd1:  call   081bd478 <+0x1512>
081bcf3c +0x0fd6:  sub    $0x4,%esp
081bcf3f +0x0fd9:  lea    -0x9(%ebp),%eax
081bcf42 +0x0fdc:  mov    0x10(%ebp),%edx
081bcf45 +0x0fdf:  mov    %edx,0x8(%esp)
081bcf49 +0x0fe3:  mov    0xc(%ebp),%edx
081bcf4c +0x0fe6:  mov    %edx,0x4(%esp)
081bcf50 +0x0fea:  mov    %eax,(%esp)
081bcf53 +0x0fed:  call   081bd4be <+0x1558>
081bcf58 +0x0ff2:  lea    -0x9(%ebp),%eax
081bcf5b +0x0ff5:  mov    %eax,(%esp)
081bcf5e +0x0ff8:  call   081bd4aa <+0x1544>
081bcf63 +0x0ffd:  leave
081bcf64 +0x0ffe:  ret
081bcf65 +0x0fff:  nop
081bcf66 +0x1000:  push   %ebp
081bcf67 +0x1001:  mov    %esp,%ebp
081bcf69 +0x1003:  mov    0x8(%ebp),%eax
081bcf6c +0x1006:  add    $0x4,%eax
081bcf6f +0x1009:  pop    %ebp
081bcf70 +0x100a:  ret
081bcf71 +0x100b:  nop
081bcf72 +0x100c:  push   %ebp
081bcf73 +0x100d:  mov    %esp,%ebp
081bcf75 +0x100f:  mov    0x8(%ebp),%eax
081bcf78 +0x1012:  add    $0xc,%eax
081bcf7b +0x1015:  pop    %ebp
081bcf7c +0x1016:  ret
081bcf7d +0x1017:  nop
081bcf7e +0x1018:  push   %ebp
081bcf7f +0x1019:  mov    %esp,%ebp
081bcf81 +0x101b:  mov    0x8(%ebp),%eax
081bcf84 +0x101e:  add    $0x8,%eax
081bcf87 +0x1021:  pop    %ebp
081bcf88 +0x1022:  ret
081bcf89 +0x1023:  nop
081bcf8a +0x1024:  push   %ebp
081bcf8b +0x1025:  mov    %esp,%ebp
081bcf8d +0x1027:  mov    0x8(%ebp),%eax
081bcf90 +0x102a:  add    $0x10,%eax
081bcf93 +0x102d:  pop    %ebp
081bcf94 +0x102e:  ret
081bcf95 +0x102f:  push   %ebp
081bcf96 +0x1030:  mov    %esp,%ebp
081bcf98 +0x1032:  sub    $0x18,%esp
081bcf9b +0x1035:  movl   $0x4,(%esp)
081bcfa2 +0x103c:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
081bcfa7 +0x1041:  leave
081bcfa8 +0x1042:  ret
081bcfa9 +0x1043:  nop
081bcfaa +0x1044:  push   %ebp
081bcfab +0x1045:  mov    %esp,%ebp
081bcfad +0x1047:  mov    0xc(%ebp),%eax
081bcfb0 +0x104a:  pop    %ebp
081bcfb1 +0x104b:  ret
081bcfb2 +0x104c:  push   %ebp
081bcfb3 +0x104d:  mov    %esp,%ebp
081bcfb5 +0x104f:  sub    $0x28,%esp
081bcfb8 +0x1052:  mov    0x8(%ebp),%eax
081bcfbb +0x1055:  mov    %eax,(%esp)
081bcfbe +0x1058:  call   081bd4d1 <+0x156b>
081bcfc3 +0x105d:  mov    %eax,0x4(%esp)
081bcfc7 +0x1061:  lea    -0x9(%ebp),%eax
081bcfca +0x1064:  mov    %eax,(%esp)
081bcfcd +0x1067:  call   081bcfaa <+0x1044>
081bcfd2 +0x106c:  leave
081bcfd3 +0x106d:  ret
081bcfd4 +0x106e:  push   %ebp
081bcfd5 +0x106f:  mov    %esp,%ebp
081bcfd7 +0x1071:  mov    0xc(%ebp),%edx
081bcfda +0x1074:  mov    0x8(%ebp),%eax
081bcfdd +0x1077:  mov    %edx,(%eax)
081bcfdf +0x1079:  pop    %ebp
081bcfe0 +0x107a:  ret
081bcfe1 +0x107b:  nop
081bcfe2 +0x107c:  push   %ebp
081bcfe3 +0x107d:  mov    %esp,%ebp
081bcfe5 +0x107f:  push   %ebx
081bcfe6 +0x1080:  sub    $0x14,%esp
081bcfe9 +0x1083:  mov    0x8(%ebp),%ebx
081bcfec +0x1086:  mov    0xc(%ebp),%eax
081bcfef +0x1089:  mov    0xc(%eax),%eax
081bcff2 +0x108c:  mov    %eax,0x4(%esp)
081bcff6 +0x1090:  mov    %ebx,(%esp)
081bcff9 +0x1093:  call   081bcfd4 <+0x106e>
081bcffe +0x1098:  mov    %ebx,%eax
081bd000 +0x109a:  add    $0x14,%esp
081bd003 +0x109d:  pop    %ebx
081bd004 +0x109e:  pop    %ebp
081bd005 +0x109f:  ret    $0x4
081bd008 +0x10a2:  push   %ebp
081bd009 +0x10a3:  mov    %esp,%ebp
081bd00b +0x10a5:  mov    0x8(%ebp),%eax
081bd00e +0x10a8:  mov    (%eax),%edx
081bd010 +0x10aa:  mov    0xc(%ebp),%eax
081bd013 +0x10ad:  mov    (%eax),%eax
081bd015 +0x10af:  cmp    %eax,%edx
081bd017 +0x10b1:  sete   %al
081bd01a +0x10b4:  pop    %ebp
081bd01b +0x10b5:  ret
081bd01c +0x10b6:  push   %ebp
081bd01d +0x10b7:  mov    %esp,%ebp
081bd01f +0x10b9:  push   %esi
081bd020 +0x10ba:  push   %ebx
081bd021 +0x10bb:  sub    $0x20,%esp
081bd024 +0x10be:  mov    0x8(%ebp),%esi
081bd027 +0x10c1:  cmpl   $0x0,0x10(%ebp)
081bd02b +0x10c5:  jne    081bd073 <+0x110d>
081bd02d +0x10c7:  mov    0xc(%ebp),%eax
081bd030 +0x10ca:  mov    %eax,(%esp)
081bd033 +0x10cd:  call   081bcf66 <+0x1000>
081bd038 +0x10d2:  cmp    0x14(%ebp),%eax
081bd03b +0x10d5:  je     081bd073 <+0x110d>
081bd03d +0x10d7:  mov    0x14(%ebp),%eax
081bd040 +0x10da:  mov    %eax,(%esp)
081bd043 +0x10dd:  call   081bd12f <+0x11c9>
081bd048 +0x10e2:  mov    %eax,%ebx
081bd04a +0x10e4:  mov    0x18(%ebp),%eax
081bd04d +0x10e7:  mov    %eax,0x4(%esp)
081bd051 +0x10eb:  lea    -0xe(%ebp),%eax
081bd054 +0x10ee:  mov    %eax,(%esp)
081bd057 +0x10f1:  call   081bcfaa <+0x1044>
081bd05c +0x10f6:  mov    0xc(%ebp),%edx
081bd05f +0x10f9:  mov    %ebx,0x8(%esp)
081bd063 +0x10fd:  mov    %eax,0x4(%esp)
081bd067 +0x1101:  mov    %edx,(%esp)
081bd06a +0x1104:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081bd06f +0x1109:  test   %al,%al
081bd071 +0x110b:  je     081bd07a <+0x1114>
081bd073 +0x110d:  mov    $0x1,%eax
081bd078 +0x1112:  jmp    081bd07f <+0x1119>
081bd07a +0x1114:  mov    $0x0,%eax
081bd07f +0x1119:  mov    %al,-0xd(%ebp)
081bd082 +0x111c:  mov    0x18(%ebp),%eax
081bd085 +0x111f:  mov    %eax,0x4(%esp)
081bd089 +0x1123:  mov    0xc(%ebp),%eax
081bd08c +0x1126:  mov    %eax,(%esp)
081bd08f +0x1129:  call   081bd4dc <+0x1576>
081bd094 +0x112e:  mov    %eax,-0xc(%ebp)
081bd097 +0x1131:  mov    0xc(%ebp),%eax
081bd09a +0x1134:  lea    0x4(%eax),%ecx
081bd09d +0x1137:  mov    -0xc(%ebp),%edx
081bd0a0 +0x113a:  movzbl -0xd(%ebp),%eax
081bd0a4 +0x113e:  mov    %ecx,0xc(%esp)
081bd0a8 +0x1142:  mov    0x14(%ebp),%ecx
081bd0ab +0x1145:  mov    %ecx,0x8(%esp)
081bd0af +0x1149:  mov    %edx,0x4(%esp)
081bd0b3 +0x114d:  mov    %eax,(%esp)
081bd0b6 +0x1150:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081bd0bb +0x1155:  mov    0xc(%ebp),%eax
081bd0be +0x1158:  mov    0x14(%eax),%eax
081bd0c1 +0x115b:  lea    0x1(%eax),%edx
081bd0c4 +0x115e:  mov    0xc(%ebp),%eax
081bd0c7 +0x1161:  mov    %edx,0x14(%eax)
081bd0ca +0x1164:  mov    -0xc(%ebp),%eax
081bd0cd +0x1167:  mov    %eax,0x4(%esp)
081bd0d1 +0x116b:  mov    %esi,(%esp)
081bd0d4 +0x116e:  call   081bcfd4 <+0x106e>
081bd0d9 +0x1173:  mov    %esi,%eax
081bd0db +0x1175:  add    $0x20,%esp
081bd0de +0x1178:  pop    %ebx
081bd0df +0x1179:  pop    %esi
081bd0e0 +0x117a:  pop    %ebp
081bd0e1 +0x117b:  ret    $0x4
081bd0e4 +0x117e:  push   %ebp
081bd0e5 +0x117f:  mov    %esp,%ebp
081bd0e7 +0x1181:  sub    $0x18,%esp
081bd0ea +0x1184:  mov    0xc(%ebp),%eax
081bd0ed +0x1187:  mov    %eax,(%esp)
081bd0f0 +0x118a:  call   081bd55d <+0x15f7>
081bd0f5 +0x118f:  mov    0x8(%ebp),%edx
081bd0f8 +0x1192:  mov    (%eax),%eax
081bd0fa +0x1194:  mov    %eax,(%edx)
081bd0fc +0x1196:  mov    0x10(%ebp),%eax
081bd0ff +0x1199:  mov    %eax,(%esp)
081bd102 +0x119c:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081bd107 +0x11a1:  movzbl (%eax),%edx
081bd10a +0x11a4:  mov    0x8(%ebp),%eax
081bd10d +0x11a7:  mov    %dl,0x4(%eax)
081bd110 +0x11aa:  leave
081bd111 +0x11ab:  ret
081bd112 +0x11ac:  push   %ebp
081bd113 +0x11ad:  mov    %esp,%ebp
081bd115 +0x11af:  sub    $0x18,%esp
081bd118 +0x11b2:  mov    0x8(%ebp),%eax
081bd11b +0x11b5:  mov    (%eax),%eax
081bd11d +0x11b7:  mov    %eax,(%esp)
081bd120 +0x11ba:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
081bd125 +0x11bf:  mov    0x8(%ebp),%edx
081bd128 +0x11c2:  mov    %eax,(%edx)
081bd12a +0x11c4:  mov    0x8(%ebp),%eax
081bd12d +0x11c7:  leave
081bd12e +0x11c8:  ret
081bd12f +0x11c9:  push   %ebp
081bd130 +0x11ca:  mov    %esp,%ebp
081bd132 +0x11cc:  sub    $0x28,%esp
081bd135 +0x11cf:  mov    0x8(%ebp),%eax
081bd138 +0x11d2:  mov    %eax,(%esp)
081bd13b +0x11d5:  call   081bd565 <+0x15ff>
081bd140 +0x11da:  mov    %eax,0x4(%esp)
081bd144 +0x11de:  lea    -0x9(%ebp),%eax
081bd147 +0x11e1:  mov    %eax,(%esp)
081bd14a +0x11e4:  call   081bcfaa <+0x1044>
081bd14f +0x11e9:  leave
081bd150 +0x11ea:  ret
081bd151 +0x11eb:  nop
081bd152 +0x11ec:  push   %ebp
081bd153 +0x11ed:  mov    %esp,%ebp
081bd155 +0x11ef:  sub    $0x18,%esp
081bd158 +0x11f2:  mov    0xc(%ebp),%eax
081bd15b +0x11f5:  mov    %eax,(%esp)
081bd15e +0x11f8:  call   081bd570 <+0x160a>
081bd163 +0x11fd:  mov    0x8(%ebp),%edx
081bd166 +0x1200:  mov    (%eax),%eax
081bd168 +0x1202:  mov    %eax,(%edx)
081bd16a +0x1204:  mov    0x10(%ebp),%eax
081bd16d +0x1207:  mov    %eax,(%esp)
081bd170 +0x120a:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081bd175 +0x120f:  movzbl (%eax),%edx
081bd178 +0x1212:  mov    0x8(%ebp),%eax
081bd17b +0x1215:  mov    %dl,0x4(%eax)
081bd17e +0x1218:  leave
081bd17f +0x1219:  ret
081bd180 +0x121a:  push   %ebp
081bd181 +0x121b:  mov    %esp,%ebp
081bd183 +0x121d:  push   %esi
081bd184 +0x121e:  push   %ebx
081bd185 +0x121f:  sub    $0x10,%esp
081bd188 +0x1222:  mov    0xc(%ebp),%eax
081bd18b +0x1225:  lea    0x1(%eax),%ebx
081bd18e +0x1228:  mov    0x8(%ebp),%eax
081bd191 +0x122b:  mov    0x4(%eax),%edx
081bd194 +0x122e:  mov    0x8(%ebp),%eax
081bd197 +0x1231:  mov    0x24(%eax),%eax
081bd19a +0x1234:  mov    %eax,%ecx
081bd19c +0x1236:  mov    0x8(%ebp),%eax
081bd19f +0x1239:  mov    (%eax),%eax
081bd1a1 +0x123b:  mov    %ecx,%esi
081bd1a3 +0x123d:  sub    %eax,%esi
081bd1a5 +0x123f:  mov    %esi,%eax
081bd1a7 +0x1241:  sar    $0x2,%eax
081bd1aa +0x1244:  mov    %edx,%ecx
081bd1ac +0x1246:  sub    %eax,%ecx
081bd1ae +0x1248:  mov    %ecx,%eax
081bd1b0 +0x124a:  cmp    %eax,%ebx
081bd1b2 +0x124c:  jbe    081bd1ce <+0x1268>
081bd1b4 +0x124e:  movl   $0x0,0x8(%esp)
081bd1bc +0x1256:  mov    0xc(%ebp),%eax
081bd1bf +0x1259:  mov    %eax,0x4(%esp)
081bd1c3 +0x125d:  mov    0x8(%ebp),%eax
081bd1c6 +0x1260:  mov    %eax,(%esp)
081bd1c9 +0x1263:  call   081bd578 <+0x1612>
081bd1ce +0x1268:  add    $0x10,%esp
081bd1d1 +0x126b:  pop    %ebx
081bd1d2 +0x126c:  pop    %esi
081bd1d3 +0x126d:  pop    %ebp
081bd1d4 +0x126e:  ret
081bd1d5 +0x126f:  nop
081bd1d6 +0x1270:  push   %ebp
081bd1d7 +0x1271:  mov    %esp,%ebp
081bd1d9 +0x1273:  sub    $0x18,%esp
081bd1dc +0x1276:  movl   $0x4,(%esp)
081bd1e3 +0x127d:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
081bd1e8 +0x1282:  mov    0x8(%ebp),%edx
081bd1eb +0x1285:  movl   $0x0,0x8(%esp)
081bd1f3 +0x128d:  mov    %eax,0x4(%esp)
081bd1f7 +0x1291:  mov    %edx,(%esp)
081bd1fa +0x1294:  call   080e3fd6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1d7c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1d7c
081bd1ff +0x1299:  leave
081bd200 +0x129a:  ret
081bd201 +0x129b:  nop
081bd202 +0x129c:  push   %ebp
081bd203 +0x129d:  mov    %esp,%ebp
081bd205 +0x129f:  push   %ebx
081bd206 +0x12a0:  sub    $0x4,%esp
081bd209 +0x12a3:  mov    0x8(%ebp),%eax
081bd20c +0x12a6:  mov    0xc(%ebp),%edx
081bd20f +0x12a9:  mov    %edx,0xc(%eax)
081bd212 +0x12ac:  mov    0xc(%ebp),%eax
081bd215 +0x12af:  mov    (%eax),%edx
081bd217 +0x12b1:  mov    0x8(%ebp),%eax
081bd21a +0x12b4:  mov    %edx,0x4(%eax)
081bd21d +0x12b7:  mov    0x8(%ebp),%eax
081bd220 +0x12ba:  mov    0x4(%eax),%ebx
081bd223 +0x12bd:  call   081bcf95 <+0x102f>
081bd228 +0x12c2:  shl    $0x2,%eax
081bd22b +0x12c5:  lea    (%ebx,%eax,1),%edx
081bd22e +0x12c8:  mov    0x8(%ebp),%eax
081bd231 +0x12cb:  mov    %edx,0x8(%eax)
081bd234 +0x12ce:  add    $0x4,%esp
081bd237 +0x12d1:  pop    %ebx
081bd238 +0x12d2:  pop    %ebp
081bd239 +0x12d3:  ret
081bd23a +0x12d4:  push   %ebp
081bd23b +0x12d5:  mov    %esp,%ebp
081bd23d +0x12d7:  sub    $0x18,%esp
081bd240 +0x12da:  movl   $0x4,(%esp)
081bd247 +0x12e1:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
081bd24c +0x12e6:  mov    0x8(%ebp),%edx
081bd24f +0x12e9:  mov    %eax,0x8(%esp)
081bd253 +0x12ed:  mov    0xc(%ebp),%eax
081bd256 +0x12f0:  mov    %eax,0x4(%esp)
081bd25a +0x12f4:  mov    %edx,(%esp)
081bd25d +0x12f7:  call   080e3f12 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1cb8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1cb8
081bd262 +0x12fc:  leave
081bd263 +0x12fd:  ret
081bd264 +0x12fe:  push   %ebp
081bd265 +0x12ff:  mov    %esp,%ebp
081bd267 +0x1301:  push   %ebx
081bd268 +0x1302:  sub    $0x14,%esp
081bd26b +0x1305:  mov    0x8(%ebp),%ebx
081bd26e +0x1308:  jmp    081bd2bc <+0x1356>
081bd270 +0x130a:  mov    0x10(%ebp),%eax
081bd273 +0x130d:  mov    %eax,(%esp)
081bd276 +0x1310:  call   081bcfb2 <+0x104c>
081bd27b +0x1315:  mov    0xc(%ebp),%edx
081bd27e +0x1318:  mov    0x18(%ebp),%ecx
081bd281 +0x131b:  mov    %ecx,0x8(%esp)
081bd285 +0x131f:  mov    %eax,0x4(%esp)
081bd289 +0x1323:  mov    %edx,(%esp)
081bd28c +0x1326:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
081bd291 +0x132b:  xor    $0x1,%eax
081bd294 +0x132e:  test   %al,%al
081bd296 +0x1330:  je     081bd2ae <+0x1348>
081bd298 +0x1332:  mov    0x10(%ebp),%eax
081bd29b +0x1335:  mov    %eax,0x14(%ebp)
081bd29e +0x1338:  mov    0x10(%ebp),%eax
081bd2a1 +0x133b:  mov    %eax,(%esp)
081bd2a4 +0x133e:  call   081bccfc <+0xd96>
081bd2a9 +0x1343:  mov    %eax,0x10(%ebp)
081bd2ac +0x1346:  jmp    081bd2bc <+0x1356>
081bd2ae +0x1348:  mov    0x10(%ebp),%eax
081bd2b1 +0x134b:  mov    %eax,(%esp)
081bd2b4 +0x134e:  call   081bccf1 <+0xd8b>
081bd2b9 +0x1353:  mov    %eax,0x10(%ebp)
081bd2bc +0x1356:  cmpl   $0x0,0x10(%ebp)
081bd2c0 +0x135a:  setne  %al
081bd2c3 +0x135d:  test   %al,%al
081bd2c5 +0x135f:  jne    081bd270 <+0x130a>
081bd2c7 +0x1361:  mov    0x14(%ebp),%eax
081bd2ca +0x1364:  mov    %eax,0x4(%esp)
081bd2ce +0x1368:  mov    %ebx,(%esp)
081bd2d1 +0x136b:  call   081bcfd4 <+0x106e>
081bd2d6 +0x1370:  mov    %ebx,%eax
081bd2d8 +0x1372:  add    $0x14,%esp
081bd2db +0x1375:  pop    %ebx
081bd2dc +0x1376:  pop    %ebp
081bd2dd +0x1377:  ret    $0x4
081bd2e0 +0x137a:  push   %ebp
081bd2e1 +0x137b:  mov    %esp,%ebp
081bd2e3 +0x137d:  sub    $0x18,%esp
081bd2e6 +0x1380:  mov    0x8(%ebp),%eax
081bd2e9 +0x1383:  mov    %eax,(%esp)
081bd2ec +0x1386:  call   081bd748 <+0x17e2>
081bd2f1 +0x138b:  leave
081bd2f2 +0x138c:  ret
081bd2f3 +0x138d:  nop
081bd2f4 +0x138e:  push   %ebp
081bd2f5 +0x138f:  mov    %esp,%ebp
081bd2f7 +0x1391:  mov    0x8(%ebp),%eax
081bd2fa +0x1394:  movl   $0x0,0x4(%eax)
081bd301 +0x139b:  mov    0x8(%ebp),%eax
081bd304 +0x139e:  movl   $0x0,0x8(%eax)
081bd30b +0x13a5:  mov    0x8(%ebp),%eax
081bd30e +0x13a8:  lea    0x4(%eax),%edx
081bd311 +0x13ab:  mov    0x8(%ebp),%eax
081bd314 +0x13ae:  mov    %edx,0xc(%eax)
081bd317 +0x13b1:  mov    0x8(%ebp),%eax
081bd31a +0x13b4:  lea    0x4(%eax),%edx
081bd31d +0x13b7:  mov    0x8(%ebp),%eax
081bd320 +0x13ba:  mov    %edx,0x10(%eax)
081bd323 +0x13bd:  pop    %ebp
081bd324 +0x13be:  ret
081bd325 +0x13bf:  nop
081bd326 +0x13c0:  push   %ebp
081bd327 +0x13c1:  mov    %esp,%ebp
081bd329 +0x13c3:  mov    0x8(%ebp),%eax
081bd32c +0x13c6:  pop    %ebp
081bd32d +0x13c7:  ret
081bd32e +0x13c8:  push   %ebp
081bd32f +0x13c9:  mov    %esp,%ebp
081bd331 +0x13cb:  pop    %ebp
081bd332 +0x13cc:  ret
081bd333 +0x13cd:  nop
081bd334 +0x13ce:  push   %ebp
081bd335 +0x13cf:  mov    %esp,%ebp
081bd337 +0x13d1:  sub    $0x18,%esp
081bd33a +0x13d4:  mov    0xc(%ebp),%eax
081bd33d +0x13d7:  mov    %eax,(%esp)
081bd340 +0x13da:  call   081bd32e <+0x13c8>
081bd345 +0x13df:  leave
081bd346 +0x13e0:  ret
081bd347 +0x13e1:  nop
081bd348 +0x13e2:  push   %ebp
081bd349 +0x13e3:  mov    %esp,%ebp
081bd34b +0x13e5:  sub    $0x18,%esp
081bd34e +0x13e8:  mov    0x8(%ebp),%eax
081bd351 +0x13eb:  movl   $0x1,0x8(%esp)
081bd359 +0x13f3:  mov    0xc(%ebp),%edx
081bd35c +0x13f6:  mov    %edx,0x4(%esp)
081bd360 +0x13fa:  mov    %eax,(%esp)
081bd363 +0x13fd:  call   081bd74e <+0x17e8>
081bd368 +0x1402:  leave
081bd369 +0x1403:  ret
081bd36a +0x1404:  push   %ebp
081bd36b +0x1405:  mov    %esp,%ebp
081bd36d +0x1407:  mov    0x8(%ebp),%eax
081bd370 +0x140a:  movl   $0x0,(%eax)
081bd376 +0x1410:  mov    0x8(%ebp),%eax
081bd379 +0x1413:  movl   $0x0,0x4(%eax)
081bd380 +0x141a:  mov    0x8(%ebp),%eax
081bd383 +0x141d:  movl   $0x0,0x8(%eax)
081bd38a +0x1424:  mov    0x8(%ebp),%eax
081bd38d +0x1427:  movl   $0x0,0xc(%eax)
081bd394 +0x142e:  pop    %ebp
081bd395 +0x142f:  ret
081bd396 +0x1430:  push   %ebp
081bd397 +0x1431:  mov    %esp,%ebp
081bd399 +0x1433:  push   %esi
081bd39a +0x1434:  push   %ebx
081bd39b +0x1435:  sub    $0x20,%esp
081bd39e +0x1438:  lea    -0x9(%ebp),%eax
081bd3a1 +0x143b:  mov    0x8(%ebp),%edx
081bd3a4 +0x143e:  mov    %edx,0x4(%esp)
081bd3a8 +0x1442:  mov    %eax,(%esp)
081bd3ab +0x1445:  call   081bd478 <+0x1512>
081bd3b0 +0x144a:  sub    $0x4,%esp
081bd3b3 +0x144d:  lea    -0x9(%ebp),%eax
081bd3b6 +0x1450:  movl   $0x0,0x8(%esp)
081bd3be +0x1458:  mov    0xc(%ebp),%edx
081bd3c1 +0x145b:  mov    %edx,0x4(%esp)
081bd3c5 +0x145f:  mov    %eax,(%esp)
081bd3c8 +0x1462:  call   081bd762 <+0x17fc>
081bd3cd +0x1467:  mov    %eax,%ebx
081bd3cf +0x1469:  lea    -0x9(%ebp),%eax
081bd3d2 +0x146c:  mov    %eax,(%esp)
081bd3d5 +0x146f:  call   081bd4aa <+0x1544>
081bd3da +0x1474:  mov    %ebx,%eax
081bd3dc +0x1476:  lea    -0x8(%ebp),%esp
081bd3df +0x1479:  add    $0x0,%esp
081bd3e2 +0x147c:  pop    %ebx
081bd3e3 +0x147d:  pop    %esi
081bd3e4 +0x147e:  pop    %ebp
081bd3e5 +0x147f:  ret
081bd3e6 +0x1480:  mov    %edx,%ebx
081bd3e8 +0x1482:  mov    %eax,%esi
081bd3ea +0x1484:  lea    -0x9(%ebp),%eax
081bd3ed +0x1487:  mov    %eax,(%esp)
081bd3f0 +0x148a:  call   081bd4aa <+0x1544>
081bd3f5 +0x148f:  mov    %esi,%eax
081bd3f7 +0x1491:  mov    %ebx,%edx
081bd3f9 +0x1493:  mov    %eax,(%esp)
081bd3fc +0x1496:  call   08ae3750 <_Unwind_Resume>
081bd401 +0x149b:  nop
081bd402 +0x149c:  push   %ebp
081bd403 +0x149d:  mov    %esp,%ebp
081bd405 +0x149f:  push   %esi
081bd406 +0x14a0:  push   %ebx
081bd407 +0x14a1:  sub    $0x20,%esp
081bd40a +0x14a4:  mov    0xc(%ebp),%eax
081bd40d +0x14a7:  mov    %eax,-0xc(%ebp)
081bd410 +0x14aa:  jmp    081bd426 <+0x14c0>
081bd412 +0x14ac:  mov    0x8(%ebp),%eax
081bd415 +0x14af:  mov    %eax,(%esp)
081bd418 +0x14b2:  call   081bd1d6 <+0x1270>
081bd41d +0x14b7:  mov    -0xc(%ebp),%edx
081bd420 +0x14ba:  mov    %eax,(%edx)
081bd422 +0x14bc:  addl   $0x4,-0xc(%ebp)
081bd426 +0x14c0:  mov    -0xc(%ebp),%eax
081bd429 +0x14c3:  cmp    0x10(%ebp),%eax
081bd42c +0x14c6:  setb   %al
081bd42f +0x14c9:  test   %al,%al
081bd431 +0x14cb:  jne    081bd412 <+0x14ac>
081bd433 +0x14cd:  jmp    081bd470 <+0x150a>
081bd435 +0x14cf:  mov    %eax,(%esp)
081bd438 +0x14d2:  call   08725ce0 <__cxa_begin_catch>
081bd43d +0x14d7:  mov    -0xc(%ebp),%eax
081bd440 +0x14da:  mov    %eax,0x8(%esp)
081bd444 +0x14de:  mov    0xc(%ebp),%eax
081bd447 +0x14e1:  mov    %eax,0x4(%esp)
081bd44b +0x14e5:  mov    0x8(%ebp),%eax
081bd44e +0x14e8:  mov    %eax,(%esp)
081bd451 +0x14eb:  call   081bceee <+0xf88>
081bd456 +0x14f0:  call   08724be0 <__cxa_rethrow>
081bd45b +0x14f5:  mov    %edx,%ebx
081bd45d +0x14f7:  mov    %eax,%esi
081bd45f +0x14f9:  call   08725c30 <__cxa_end_catch>
081bd464 +0x14fe:  mov    %esi,%eax
081bd466 +0x1500:  mov    %ebx,%edx
081bd468 +0x1502:  mov    %eax,(%esp)
081bd46b +0x1505:  call   08ae3750 <_Unwind_Resume>
081bd470 +0x150a:  add    $0x20,%esp
081bd473 +0x150d:  pop    %ebx
081bd474 +0x150e:  pop    %esi
081bd475 +0x150f:  pop    %ebp
081bd476 +0x1510:  ret
081bd477 +0x1511:  nop
081bd478 +0x1512:  push   %ebp
081bd479 +0x1513:  mov    %esp,%ebp
081bd47b +0x1515:  push   %esi
081bd47c +0x1516:  push   %ebx
081bd47d +0x1517:  sub    $0x10,%esp
081bd480 +0x151a:  mov    0x8(%ebp),%ebx
081bd483 +0x151d:  mov    %ebx,%esi
081bd485 +0x151f:  mov    0xc(%ebp),%eax
081bd488 +0x1522:  mov    %eax,(%esp)
081bd48b +0x1525:  call   081bd79a <+0x1834>
081bd490 +0x152a:  mov    %eax,0x4(%esp)
081bd494 +0x152e:  mov    %esi,(%esp)
081bd497 +0x1531:  call   081bd7a2 <+0x183c>
081bd49c +0x1536:  mov    %ebx,%eax
081bd49e +0x1538:  mov    %ebx,%eax
081bd4a0 +0x153a:  add    $0x10,%esp
081bd4a3 +0x153d:  pop    %ebx
081bd4a4 +0x153e:  pop    %esi
081bd4a5 +0x153f:  pop    %ebp
081bd4a6 +0x1540:  ret    $0x4
081bd4a9 +0x1543:  nop
081bd4aa +0x1544:  push   %ebp
081bd4ab +0x1545:  mov    %esp,%ebp
081bd4ad +0x1547:  sub    $0x18,%esp
081bd4b0 +0x154a:  mov    0x8(%ebp),%eax
081bd4b3 +0x154d:  mov    %eax,(%esp)
081bd4b6 +0x1550:  call   081bd7b6 <+0x1850>
081bd4bb +0x1555:  leave
081bd4bc +0x1556:  ret
081bd4bd +0x1557:  nop
081bd4be +0x1558:  push   %ebp
081bd4bf +0x1559:  mov    %esp,%ebp
081bd4c1 +0x155b:  sub    $0x18,%esp
081bd4c4 +0x155e:  mov    0xc(%ebp),%eax
081bd4c7 +0x1561:  mov    %eax,(%esp)
081bd4ca +0x1564:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081bd4cf +0x1569:  leave
081bd4d0 +0x156a:  ret
081bd4d1 +0x156b:  push   %ebp
081bd4d2 +0x156c:  mov    %esp,%ebp
081bd4d4 +0x156e:  mov    0x8(%ebp),%eax
081bd4d7 +0x1571:  add    $0x10,%eax
081bd4da +0x1574:  pop    %ebp
081bd4db +0x1575:  ret
081bd4dc +0x1576:  push   %ebp
081bd4dd +0x1577:  mov    %esp,%ebp
081bd4df +0x1579:  push   %esi
081bd4e0 +0x157a:  push   %ebx
081bd4e1 +0x157b:  sub    $0x20,%esp
081bd4e4 +0x157e:  mov    0x8(%ebp),%eax
081bd4e7 +0x1581:  mov    %eax,(%esp)
081bd4ea +0x1584:  call   081bd7bc <+0x1856>
081bd4ef +0x1589:  mov    %eax,-0xc(%ebp)
081bd4f2 +0x158c:  mov    0xc(%ebp),%eax
081bd4f5 +0x158f:  mov    %eax,(%esp)
081bd4f8 +0x1592:  call   081bd7df <+0x1879>
081bd4fd +0x1597:  mov    %eax,%ebx
081bd4ff +0x1599:  mov    0x8(%ebp),%eax
081bd502 +0x159c:  mov    %eax,(%esp)
081bd505 +0x159f:  call   081bd326 <+0x13c0>
081bd50a +0x15a4:  mov    %ebx,0x8(%esp)
081bd50e +0x15a8:  mov    -0xc(%ebp),%edx
081bd511 +0x15ab:  mov    %edx,0x4(%esp)
081bd515 +0x15af:  mov    %eax,(%esp)
081bd518 +0x15b2:  call   081bd7e8 <+0x1882>
081bd51d +0x15b7:  jmp    081bd553 <+0x15ed>
081bd51f +0x15b9:  mov    %eax,(%esp)
081bd522 +0x15bc:  call   08725ce0 <__cxa_begin_catch>
081bd527 +0x15c1:  mov    -0xc(%ebp),%eax
081bd52a +0x15c4:  mov    %eax,0x4(%esp)
081bd52e +0x15c8:  mov    0x8(%ebp),%eax
081bd531 +0x15cb:  mov    %eax,(%esp)
081bd534 +0x15ce:  call   081bd348 <+0x13e2>
081bd539 +0x15d3:  call   08724be0 <__cxa_rethrow>
081bd53e +0x15d8:  mov    %edx,%ebx
081bd540 +0x15da:  mov    %eax,%esi
081bd542 +0x15dc:  call   08725c30 <__cxa_end_catch>
081bd547 +0x15e1:  mov    %esi,%eax
081bd549 +0x15e3:  mov    %ebx,%edx
081bd54b +0x15e5:  mov    %eax,(%esp)
081bd54e +0x15e8:  call   08ae3750 <_Unwind_Resume>
081bd553 +0x15ed:  mov    -0xc(%ebp),%eax
081bd556 +0x15f0:  add    $0x20,%esp
081bd559 +0x15f3:  pop    %ebx
081bd55a +0x15f4:  pop    %esi
081bd55b +0x15f5:  pop    %ebp
081bd55c +0x15f6:  ret
081bd55d +0x15f7:  push   %ebp
081bd55e +0x15f8:  mov    %esp,%ebp
081bd560 +0x15fa:  mov    0x8(%ebp),%eax
081bd563 +0x15fd:  pop    %ebp
081bd564 +0x15fe:  ret
081bd565 +0x15ff:  push   %ebp
081bd566 +0x1600:  mov    %esp,%ebp
081bd568 +0x1602:  mov    0x8(%ebp),%eax
081bd56b +0x1605:  add    $0x10,%eax
081bd56e +0x1608:  pop    %ebp
081bd56f +0x1609:  ret
081bd570 +0x160a:  push   %ebp
081bd571 +0x160b:  mov    %esp,%ebp
081bd573 +0x160d:  mov    0x8(%ebp),%eax
081bd576 +0x1610:  pop    %ebp
081bd577 +0x1611:  ret
081bd578 +0x1612:  push   %ebp
081bd579 +0x1613:  mov    %esp,%ebp
081bd57b +0x1615:  push   %ebx
081bd57c +0x1616:  sub    $0x44,%esp
081bd57f +0x1619:  mov    0x10(%ebp),%eax
081bd582 +0x161c:  mov    %al,-0x2c(%ebp)
081bd585 +0x161f:  mov    0x8(%ebp),%eax
081bd588 +0x1622:  mov    0x24(%eax),%eax
081bd58b +0x1625:  mov    %eax,%edx
081bd58d +0x1627:  mov    0x8(%ebp),%eax
081bd590 +0x162a:  mov    0x14(%eax),%eax
081bd593 +0x162d:  mov    %edx,%ecx
081bd595 +0x162f:  sub    %eax,%ecx
081bd597 +0x1631:  mov    %ecx,%eax
081bd599 +0x1633:  sar    $0x2,%eax
081bd59c +0x1636:  add    $0x1,%eax
081bd59f +0x1639:  mov    %eax,-0x1c(%ebp)
081bd5a2 +0x163c:  mov    0xc(%ebp),%eax
081bd5a5 +0x163f:  add    -0x1c(%ebp),%eax
081bd5a8 +0x1642:  mov    %eax,-0x18(%ebp)
081bd5ab +0x1645:  mov    0x8(%ebp),%eax
081bd5ae +0x1648:  mov    0x4(%eax),%eax
081bd5b1 +0x164b:  mov    -0x18(%ebp),%edx
081bd5b4 +0x164e:  add    %edx,%edx
081bd5b6 +0x1650:  cmp    %edx,%eax
081bd5b8 +0x1652:  jbe    081bd652 <+0x16ec>
081bd5be +0x1658:  mov    0x8(%ebp),%eax
081bd5c1 +0x165b:  mov    (%eax),%edx
081bd5c3 +0x165d:  mov    0x8(%ebp),%eax
081bd5c6 +0x1660:  mov    0x4(%eax),%eax
081bd5c9 +0x1663:  sub    -0x18(%ebp),%eax
081bd5cc +0x1666:  shr    %eax
081bd5ce +0x1668:  lea    0x0(,%eax,4),%ecx
081bd5d5 +0x166f:  cmpb   $0x0,-0x2c(%ebp)
081bd5d9 +0x1673:  je     081bd5e3 <+0x167d>
081bd5db +0x1675:  mov    0xc(%ebp),%eax
081bd5de +0x1678:  shl    $0x2,%eax
081bd5e1 +0x167b:  jmp    081bd5e8 <+0x1682>
081bd5e3 +0x167d:  mov    $0x0,%eax
081bd5e8 +0x1682:  lea    (%ecx,%eax,1),%eax
081bd5eb +0x1685:  lea    (%edx,%eax,1),%eax
081bd5ee +0x1688:  mov    %eax,-0x14(%ebp)
081bd5f1 +0x168b:  mov    0x8(%ebp),%eax
081bd5f4 +0x168e:  mov    0x14(%eax),%eax
081bd5f7 +0x1691:  cmp    -0x14(%ebp),%eax
081bd5fa +0x1694:  jbe    081bd623 <+0x16bd>
081bd5fc +0x1696:  mov    0x8(%ebp),%eax
081bd5ff +0x1699:  mov    0x24(%eax),%eax
081bd602 +0x169c:  lea    0x4(%eax),%ecx
081bd605 +0x169f:  mov    0x8(%ebp),%eax
081bd608 +0x16a2:  mov    0x14(%eax),%eax
081bd60b +0x16a5:  mov    -0x14(%ebp),%edx
081bd60e +0x16a8:  mov    %edx,0x8(%esp)
081bd612 +0x16ac:  mov    %ecx,0x4(%esp)
081bd616 +0x16b0:  mov    %eax,(%esp)
081bd619 +0x16b3:  call   081bd827 <+0x18c1>
081bd61e +0x16b8:  jmp    081bd70f <+0x17a9>
081bd623 +0x16bd:  mov    -0x1c(%ebp),%eax
081bd626 +0x16c0:  shl    $0x2,%eax
081bd629 +0x16c3:  mov    %eax,%edx
081bd62b +0x16c5:  add    -0x14(%ebp),%edx
081bd62e +0x16c8:  mov    0x8(%ebp),%eax
081bd631 +0x16cb:  mov    0x24(%eax),%eax
081bd634 +0x16ce:  lea    0x4(%eax),%ecx
081bd637 +0x16d1:  mov    0x8(%ebp),%eax
081bd63a +0x16d4:  mov    0x14(%eax),%eax
081bd63d +0x16d7:  mov    %edx,0x8(%esp)
081bd641 +0x16db:  mov    %ecx,0x4(%esp)
081bd645 +0x16df:  mov    %eax,(%esp)
081bd648 +0x16e2:  call   081bd85f <+0x18f9>
081bd64d +0x16e7:  jmp    081bd70f <+0x17a9>
081bd652 +0x16ec:  mov    0x8(%ebp),%eax
081bd655 +0x16ef:  mov    0x4(%eax),%ebx
081bd658 +0x16f2:  mov    0x8(%ebp),%eax
081bd65b +0x16f5:  lea    0x4(%eax),%edx
081bd65e +0x16f8:  lea    0xc(%ebp),%eax
081bd661 +0x16fb:  mov    %eax,0x4(%esp)
081bd665 +0x16ff:  mov    %edx,(%esp)
081bd668 +0x1702:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
081bd66d +0x1707:  mov    (%eax),%eax
081bd66f +0x1709:  lea    (%ebx,%eax,1),%eax
081bd672 +0x170c:  add    $0x2,%eax
081bd675 +0x170f:  mov    %eax,-0x10(%ebp)
081bd678 +0x1712:  mov    0x8(%ebp),%eax
081bd67b +0x1715:  mov    -0x10(%ebp),%edx
081bd67e +0x1718:  mov    %edx,0x4(%esp)
081bd682 +0x171c:  mov    %eax,(%esp)
081bd685 +0x171f:  call   081bd396 <+0x1430>
081bd68a +0x1724:  mov    %eax,-0xc(%ebp)
081bd68d +0x1727:  mov    -0x18(%ebp),%eax
081bd690 +0x172a:  mov    -0x10(%ebp),%edx
081bd693 +0x172d:  mov    %edx,%ecx
081bd695 +0x172f:  sub    %eax,%ecx
081bd697 +0x1731:  mov    %ecx,%eax
081bd699 +0x1733:  shr    %eax
081bd69b +0x1735:  lea    0x0(,%eax,4),%edx
081bd6a2 +0x173c:  cmpb   $0x0,-0x2c(%ebp)
081bd6a6 +0x1740:  je     081bd6b0 <+0x174a>
081bd6a8 +0x1742:  mov    0xc(%ebp),%eax
081bd6ab +0x1745:  shl    $0x2,%eax
081bd6ae +0x1748:  jmp    081bd6b5 <+0x174f>
081bd6b0 +0x174a:  mov    $0x0,%eax
081bd6b5 +0x174f:  lea    (%edx,%eax,1),%eax
081bd6b8 +0x1752:  add    -0xc(%ebp),%eax
081bd6bb +0x1755:  mov    %eax,-0x14(%ebp)
081bd6be +0x1758:  mov    0x8(%ebp),%eax
081bd6c1 +0x175b:  mov    0x24(%eax),%eax
081bd6c4 +0x175e:  lea    0x4(%eax),%ecx
081bd6c7 +0x1761:  mov    0x8(%ebp),%eax
081bd6ca +0x1764:  mov    0x14(%eax),%eax
081bd6cd +0x1767:  mov    -0x14(%ebp),%edx
081bd6d0 +0x176a:  mov    %edx,0x8(%esp)
081bd6d4 +0x176e:  mov    %ecx,0x4(%esp)
081bd6d8 +0x1772:  mov    %eax,(%esp)
081bd6db +0x1775:  call   081bd827 <+0x18c1>
081bd6e0 +0x177a:  mov    0x8(%ebp),%eax
081bd6e3 +0x177d:  mov    0x4(%eax),%ecx
081bd6e6 +0x1780:  mov    0x8(%ebp),%eax
081bd6e9 +0x1783:  mov    (%eax),%edx
081bd6eb +0x1785:  mov    0x8(%ebp),%eax
081bd6ee +0x1788:  mov    %ecx,0x8(%esp)
081bd6f2 +0x178c:  mov    %edx,0x4(%esp)
081bd6f6 +0x1790:  mov    %eax,(%esp)
081bd6f9 +0x1793:  call   081bcf24 <+0xfbe>
081bd6fe +0x1798:  mov    0x8(%ebp),%eax
081bd701 +0x179b:  mov    -0xc(%ebp),%edx
081bd704 +0x179e:  mov    %edx,(%eax)
081bd706 +0x17a0:  mov    0x8(%ebp),%eax
081bd709 +0x17a3:  mov    -0x10(%ebp),%edx
081bd70c +0x17a6:  mov    %edx,0x4(%eax)
081bd70f +0x17a9:  mov    0x8(%ebp),%eax
081bd712 +0x17ac:  lea    0x8(%eax),%edx
081bd715 +0x17af:  mov    -0x14(%ebp),%eax
081bd718 +0x17b2:  mov    %eax,0x4(%esp)
081bd71c +0x17b6:  mov    %edx,(%esp)
081bd71f +0x17b9:  call   081bd202 <+0x129c>
081bd724 +0x17be:  mov    -0x1c(%ebp),%eax
081bd727 +0x17c1:  sub    $0x1,%eax
081bd72a +0x17c4:  shl    $0x2,%eax
081bd72d +0x17c7:  add    -0x14(%ebp),%eax
081bd730 +0x17ca:  mov    0x8(%ebp),%edx
081bd733 +0x17cd:  add    $0x18,%edx
081bd736 +0x17d0:  mov    %eax,0x4(%esp)
081bd73a +0x17d4:  mov    %edx,(%esp)
081bd73d +0x17d7:  call   081bd202 <+0x129c>
081bd742 +0x17dc:  add    $0x44,%esp
081bd745 +0x17df:  pop    %ebx
081bd746 +0x17e0:  pop    %ebp
081bd747 +0x17e1:  ret
081bd748 +0x17e2:  push   %ebp
081bd749 +0x17e3:  mov    %esp,%ebp
081bd74b +0x17e5:  pop    %ebp
081bd74c +0x17e6:  ret
081bd74d +0x17e7:  nop
081bd74e +0x17e8:  push   %ebp
081bd74f +0x17e9:  mov    %esp,%ebp
081bd751 +0x17eb:  sub    $0x18,%esp
081bd754 +0x17ee:  mov    0xc(%ebp),%eax
081bd757 +0x17f1:  mov    %eax,(%esp)
081bd75a +0x17f4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081bd75f +0x17f9:  leave
081bd760 +0x17fa:  ret
081bd761 +0x17fb:  nop
081bd762 +0x17fc:  push   %ebp
081bd763 +0x17fd:  mov    %esp,%ebp
081bd765 +0x17ff:  sub    $0x18,%esp
081bd768 +0x1802:  mov    0x8(%ebp),%eax
081bd76b +0x1805:  mov    %eax,(%esp)
081bd76e +0x1808:  call   081bd898 <+0x1932>
081bd773 +0x180d:  cmp    0xc(%ebp),%eax
081bd776 +0x1810:  setb   %al
081bd779 +0x1813:  movzbl %al,%eax
081bd77c +0x1816:  test   %eax,%eax
081bd77e +0x1818:  setne  %al
081bd781 +0x181b:  test   %al,%al
081bd783 +0x181d:  je     081bd78a <+0x1824>
081bd785 +0x181f:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081bd78a +0x1824:  mov    0xc(%ebp),%eax
081bd78d +0x1827:  shl    $0x2,%eax
081bd790 +0x182a:  mov    %eax,(%esp)
081bd793 +0x182d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081bd798 +0x1832:  leave
081bd799 +0x1833:  ret
081bd79a +0x1834:  push   %ebp
081bd79b +0x1835:  mov    %esp,%ebp
081bd79d +0x1837:  mov    0x8(%ebp),%eax
081bd7a0 +0x183a:  pop    %ebp
081bd7a1 +0x183b:  ret
081bd7a2 +0x183c:  push   %ebp
081bd7a3 +0x183d:  mov    %esp,%ebp
081bd7a5 +0x183f:  sub    $0x18,%esp
081bd7a8 +0x1842:  mov    0x8(%ebp),%eax
081bd7ab +0x1845:  mov    %eax,(%esp)
081bd7ae +0x1848:  call   081bd8a2 <+0x193c>
081bd7b3 +0x184d:  leave
081bd7b4 +0x184e:  ret
081bd7b5 +0x184f:  nop
081bd7b6 +0x1850:  push   %ebp
081bd7b7 +0x1851:  mov    %esp,%ebp
081bd7b9 +0x1853:  pop    %ebp
081bd7ba +0x1854:  ret
081bd7bb +0x1855:  nop
081bd7bc +0x1856:  push   %ebp
081bd7bd +0x1857:  mov    %esp,%ebp
081bd7bf +0x1859:  sub    $0x18,%esp
081bd7c2 +0x185c:  mov    0x8(%ebp),%eax
081bd7c5 +0x185f:  movl   $0x0,0x8(%esp)
081bd7cd +0x1867:  movl   $0x1,0x4(%esp)
081bd7d5 +0x186f:  mov    %eax,(%esp)
081bd7d8 +0x1872:  call   081bd8a8 <+0x1942>
081bd7dd +0x1877:  leave
081bd7de +0x1878:  ret
081bd7df +0x1879:  push   %ebp
081bd7e0 +0x187a:  mov    %esp,%ebp
081bd7e2 +0x187c:  mov    0x8(%ebp),%eax
081bd7e5 +0x187f:  pop    %ebp
081bd7e6 +0x1880:  ret
081bd7e7 +0x1881:  nop
081bd7e8 +0x1882:  push   %ebp
081bd7e9 +0x1883:  mov    %esp,%ebp
081bd7eb +0x1885:  push   %ebx
081bd7ec +0x1886:  sub    $0x14,%esp
081bd7ef +0x1889:  mov    0x10(%ebp),%eax
081bd7f2 +0x188c:  mov    %eax,(%esp)
081bd7f5 +0x188f:  call   081bd7df <+0x1879>
081bd7fa +0x1894:  mov    %eax,%ebx
081bd7fc +0x1896:  mov    0xc(%ebp),%eax
081bd7ff +0x1899:  mov    %eax,0x4(%esp)
081bd803 +0x189d:  movl   $0x20,(%esp)
081bd80a +0x18a4:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081bd80f +0x18a9:  mov    %eax,%edx
081bd811 +0x18ab:  test   %edx,%edx
081bd813 +0x18ad:  je     081bd821 <+0x18bb>
081bd815 +0x18af:  mov    %ebx,0x4(%esp)
081bd819 +0x18b3:  mov    %eax,(%esp)
081bd81c +0x18b6:  call   081bd8e0 <+0x197a>
081bd821 +0x18bb:  add    $0x14,%esp
081bd824 +0x18be:  pop    %ebx
081bd825 +0x18bf:  pop    %ebp
081bd826 +0x18c0:  ret
081bd827 +0x18c1:  push   %ebp
081bd828 +0x18c2:  mov    %esp,%ebp
081bd82a +0x18c4:  push   %ebx
081bd82b +0x18c5:  sub    $0x14,%esp
081bd82e +0x18c8:  mov    0xc(%ebp),%eax
081bd831 +0x18cb:  mov    %eax,(%esp)
081bd834 +0x18ce:  call   081bd934 <+0x19ce>
081bd839 +0x18d3:  mov    %eax,%ebx
081bd83b +0x18d5:  mov    0x8(%ebp),%eax
081bd83e +0x18d8:  mov    %eax,(%esp)
081bd841 +0x18db:  call   081bd934 <+0x19ce>
081bd846 +0x18e0:  mov    0x10(%ebp),%edx
081bd849 +0x18e3:  mov    %edx,0x8(%esp)
081bd84d +0x18e7:  mov    %ebx,0x4(%esp)
081bd851 +0x18eb:  mov    %eax,(%esp)
081bd854 +0x18ee:  call   081bd93c <+0x19d6>
081bd859 +0x18f3:  add    $0x14,%esp
081bd85c +0x18f6:  pop    %ebx
081bd85d +0x18f7:  pop    %ebp
081bd85e +0x18f8:  ret
081bd85f +0x18f9:  push   %ebp
081bd860 +0x18fa:  mov    %esp,%ebp
081bd862 +0x18fc:  push   %ebx
081bd863 +0x18fd:  sub    $0x14,%esp
081bd866 +0x1900:  mov    0xc(%ebp),%eax
081bd869 +0x1903:  mov    %eax,(%esp)
081bd86c +0x1906:  call   081bd934 <+0x19ce>
081bd871 +0x190b:  mov    %eax,%ebx
081bd873 +0x190d:  mov    0x8(%ebp),%eax
081bd876 +0x1910:  mov    %eax,(%esp)
081bd879 +0x1913:  call   081bd934 <+0x19ce>
081bd87e +0x1918:  mov    0x10(%ebp),%edx
081bd881 +0x191b:  mov    %edx,0x8(%esp)
081bd885 +0x191f:  mov    %ebx,0x4(%esp)
081bd889 +0x1923:  mov    %eax,(%esp)
081bd88c +0x1926:  call   081bd980 <+0x1a1a>
081bd891 +0x192b:  add    $0x14,%esp
081bd894 +0x192e:  pop    %ebx
081bd895 +0x192f:  pop    %ebp
081bd896 +0x1930:  ret
081bd897 +0x1931:  nop
081bd898 +0x1932:  push   %ebp
081bd899 +0x1933:  mov    %esp,%ebp
081bd89b +0x1935:  mov    $0x3fffffff,%eax
081bd8a0 +0x193a:  pop    %ebp
081bd8a1 +0x193b:  ret
081bd8a2 +0x193c:  push   %ebp
081bd8a3 +0x193d:  mov    %esp,%ebp
081bd8a5 +0x193f:  pop    %ebp
081bd8a6 +0x1940:  ret
081bd8a7 +0x1941:  nop
081bd8a8 +0x1942:  push   %ebp
081bd8a9 +0x1943:  mov    %esp,%ebp
081bd8ab +0x1945:  sub    $0x18,%esp
081bd8ae +0x1948:  mov    0x8(%ebp),%eax
081bd8b1 +0x194b:  mov    %eax,(%esp)
081bd8b4 +0x194e:  call   081bd9c4 <+0x1a5e>
081bd8b9 +0x1953:  cmp    0xc(%ebp),%eax
081bd8bc +0x1956:  setb   %al
081bd8bf +0x1959:  movzbl %al,%eax
081bd8c2 +0x195c:  test   %eax,%eax
081bd8c4 +0x195e:  setne  %al
081bd8c7 +0x1961:  test   %al,%al
081bd8c9 +0x1963:  je     081bd8d0 <+0x196a>
081bd8cb +0x1965:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081bd8d0 +0x196a:  mov    0xc(%ebp),%eax
081bd8d3 +0x196d:  shl    $0x5,%eax
081bd8d6 +0x1970:  mov    %eax,(%esp)
081bd8d9 +0x1973:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081bd8de +0x1978:  leave
081bd8df +0x1979:  ret
081bd8e0 +0x197a:  push   %ebp
081bd8e1 +0x197b:  mov    %esp,%ebp
081bd8e3 +0x197d:  sub    $0x18,%esp
081bd8e6 +0x1980:  mov    0x8(%ebp),%eax
081bd8e9 +0x1983:  movl   $0x0,(%eax)
081bd8ef +0x1989:  mov    0x8(%ebp),%eax
081bd8f2 +0x198c:  movl   $0x0,0x4(%eax)
081bd8f9 +0x1993:  mov    0x8(%ebp),%eax
081bd8fc +0x1996:  movl   $0x0,0x8(%eax)
081bd903 +0x199d:  mov    0x8(%ebp),%eax
081bd906 +0x19a0:  movl   $0x0,0xc(%eax)
081bd90d +0x19a7:  mov    0xc(%ebp),%eax
081bd910 +0x19aa:  mov    %eax,(%esp)
081bd913 +0x19ad:  call   081bd7df <+0x1879>
081bd918 +0x19b2:  mov    0x8(%ebp),%edx
081bd91b +0x19b5:  mov    (%eax),%ecx
081bd91d +0x19b7:  mov    %ecx,0x10(%edx)
081bd920 +0x19ba:  mov    0x4(%eax),%ecx
081bd923 +0x19bd:  mov    %ecx,0x14(%edx)
081bd926 +0x19c0:  mov    0x8(%eax),%ecx
081bd929 +0x19c3:  mov    %ecx,0x18(%edx)
081bd92c +0x19c6:  mov    0xc(%eax),%eax
081bd92f +0x19c9:  mov    %eax,0x1c(%edx)
081bd932 +0x19cc:  leave
081bd933 +0x19cd:  ret
081bd934 +0x19ce:  push   %ebp
081bd935 +0x19cf:  mov    %esp,%ebp
081bd937 +0x19d1:  mov    0x8(%ebp),%eax
081bd93a +0x19d4:  pop    %ebp
081bd93b +0x19d5:  ret
081bd93c +0x19d6:  push   %ebp
081bd93d +0x19d7:  mov    %esp,%ebp
081bd93f +0x19d9:  push   %esi
081bd940 +0x19da:  push   %ebx
081bd941 +0x19db:  sub    $0x10,%esp
081bd944 +0x19de:  mov    0x10(%ebp),%eax
081bd947 +0x19e1:  mov    %eax,(%esp)
081bd94a +0x19e4:  call   081bd9ce <+0x1a68>
081bd94f +0x19e9:  mov    %eax,%esi
081bd951 +0x19eb:  mov    0xc(%ebp),%eax
081bd954 +0x19ee:  mov    %eax,(%esp)
081bd957 +0x19f1:  call   081bd9ce <+0x1a68>
081bd95c +0x19f6:  mov    %eax,%ebx
081bd95e +0x19f8:  mov    0x8(%ebp),%eax
081bd961 +0x19fb:  mov    %eax,(%esp)
081bd964 +0x19fe:  call   081bd9ce <+0x1a68>
081bd969 +0x1a03:  mov    %esi,0x8(%esp)
081bd96d +0x1a07:  mov    %ebx,0x4(%esp)
081bd971 +0x1a0b:  mov    %eax,(%esp)
081bd974 +0x1a0e:  call   081bd9d6 <+0x1a70>
081bd979 +0x1a13:  add    $0x10,%esp
081bd97c +0x1a16:  pop    %ebx
081bd97d +0x1a17:  pop    %esi
081bd97e +0x1a18:  pop    %ebp
081bd97f +0x1a19:  ret
081bd980 +0x1a1a:  push   %ebp
081bd981 +0x1a1b:  mov    %esp,%ebp
081bd983 +0x1a1d:  push   %esi
081bd984 +0x1a1e:  push   %ebx
081bd985 +0x1a1f:  sub    $0x10,%esp
081bd988 +0x1a22:  mov    0x10(%ebp),%eax
081bd98b +0x1a25:  mov    %eax,(%esp)
081bd98e +0x1a28:  call   081bd9ce <+0x1a68>
081bd993 +0x1a2d:  mov    %eax,%esi
081bd995 +0x1a2f:  mov    0xc(%ebp),%eax
081bd998 +0x1a32:  mov    %eax,(%esp)
081bd99b +0x1a35:  call   081bd9ce <+0x1a68>
081bd9a0 +0x1a3a:  mov    %eax,%ebx
081bd9a2 +0x1a3c:  mov    0x8(%ebp),%eax
081bd9a5 +0x1a3f:  mov    %eax,(%esp)
081bd9a8 +0x1a42:  call   081bd9ce <+0x1a68>
081bd9ad +0x1a47:  mov    %esi,0x8(%esp)
081bd9b1 +0x1a4b:  mov    %ebx,0x4(%esp)
081bd9b5 +0x1a4f:  mov    %eax,(%esp)
081bd9b8 +0x1a52:  call   081bd9fb <+0x1a95>
081bd9bd +0x1a57:  add    $0x10,%esp
081bd9c0 +0x1a5a:  pop    %ebx
081bd9c1 +0x1a5b:  pop    %esi
081bd9c2 +0x1a5c:  pop    %ebp
081bd9c3 +0x1a5d:  ret
081bd9c4 +0x1a5e:  push   %ebp
081bd9c5 +0x1a5f:  mov    %esp,%ebp
081bd9c7 +0x1a61:  mov    $0x7ffffff,%eax
081bd9cc +0x1a66:  pop    %ebp
081bd9cd +0x1a67:  ret
081bd9ce +0x1a68:  push   %ebp
081bd9cf +0x1a69:  mov    %esp,%ebp
081bd9d1 +0x1a6b:  mov    0x8(%ebp),%eax
081bd9d4 +0x1a6e:  pop    %ebp
081bd9d5 +0x1a6f:  ret
081bd9d6 +0x1a70:  push   %ebp
081bd9d7 +0x1a71:  mov    %esp,%ebp
081bd9d9 +0x1a73:  sub    $0x28,%esp
081bd9dc +0x1a76:  movb   $0x1,-0x9(%ebp)
081bd9e0 +0x1a7a:  mov    0x10(%ebp),%eax
081bd9e3 +0x1a7d:  mov    %eax,0x8(%esp)
081bd9e7 +0x1a81:  mov    0xc(%ebp),%eax
081bd9ea +0x1a84:  mov    %eax,0x4(%esp)
081bd9ee +0x1a88:  mov    0x8(%ebp),%eax
081bd9f1 +0x1a8b:  mov    %eax,(%esp)
081bd9f4 +0x1a8e:  call   081bda20 <+0x1aba>
081bd9f9 +0x1a93:  leave
081bd9fa +0x1a94:  ret
081bd9fb +0x1a95:  push   %ebp
081bd9fc +0x1a96:  mov    %esp,%ebp
081bd9fe +0x1a98:  sub    $0x28,%esp
081bda01 +0x1a9b:  movb   $0x1,-0x9(%ebp)
081bda05 +0x1a9f:  mov    0x10(%ebp),%eax
081bda08 +0x1aa2:  mov    %eax,0x8(%esp)
081bda0c +0x1aa6:  mov    0xc(%ebp),%eax
081bda0f +0x1aa9:  mov    %eax,0x4(%esp)
081bda13 +0x1aad:  mov    0x8(%ebp),%eax
081bda16 +0x1ab0:  mov    %eax,(%esp)
081bda19 +0x1ab3:  call   081bda65 <+0x1aff>
081bda1e +0x1ab8:  leave
081bda1f +0x1ab9:  ret
081bda20 +0x1aba:  push   %ebp
081bda21 +0x1abb:  mov    %esp,%ebp
081bda23 +0x1abd:  sub    $0x18,%esp
081bda26 +0x1ac0:  mov    0xc(%ebp),%edx
081bda29 +0x1ac3:  mov    0x8(%ebp),%eax
081bda2c +0x1ac6:  mov    %edx,%ecx
081bda2e +0x1ac8:  sub    %eax,%ecx
081bda30 +0x1aca:  mov    %ecx,%eax
081bda32 +0x1acc:  sar    $0x2,%eax
081bda35 +0x1acf:  shl    $0x2,%eax
081bda38 +0x1ad2:  mov    %eax,0x8(%esp)
081bda3c +0x1ad6:  mov    0x8(%ebp),%eax
081bda3f +0x1ad9:  mov    %eax,0x4(%esp)
081bda43 +0x1add:  mov    0x10(%ebp),%eax
081bda46 +0x1ae0:  mov    %eax,(%esp)
081bda49 +0x1ae3:  call   0807d880 <_init+0x178>
081bda4e +0x1ae8:  mov    0xc(%ebp),%edx
081bda51 +0x1aeb:  mov    0x8(%ebp),%eax
081bda54 +0x1aee:  mov    %edx,%ecx
081bda56 +0x1af0:  sub    %eax,%ecx
081bda58 +0x1af2:  mov    %ecx,%eax
081bda5a +0x1af4:  sar    $0x2,%eax
081bda5d +0x1af7:  shl    $0x2,%eax
081bda60 +0x1afa:  add    0x10(%ebp),%eax
081bda63 +0x1afd:  leave
081bda64 +0x1afe:  ret
081bda65 +0x1aff:  push   %ebp
081bda66 +0x1b00:  mov    %esp,%ebp
081bda68 +0x1b02:  sub    $0x28,%esp
081bda6b +0x1b05:  mov    0xc(%ebp),%edx
081bda6e +0x1b08:  mov    0x8(%ebp),%eax
081bda71 +0x1b0b:  mov    %edx,%ecx
081bda73 +0x1b0d:  sub    %eax,%ecx
081bda75 +0x1b0f:  mov    %ecx,%eax
081bda77 +0x1b11:  sar    $0x2,%eax
081bda7a +0x1b14:  mov    %eax,-0xc(%ebp)
081bda7d +0x1b17:  mov    -0xc(%ebp),%eax
081bda80 +0x1b1a:  lea    0x0(,%eax,4),%edx
081bda87 +0x1b21:  mov    -0xc(%ebp),%eax
081bda8a +0x1b24:  shl    $0x2,%eax
081bda8d +0x1b27:  neg    %eax
081bda8f +0x1b29:  add    0x10(%ebp),%eax
081bda92 +0x1b2c:  mov    %edx,0x8(%esp)
081bda96 +0x1b30:  mov    0x8(%ebp),%edx
081bda99 +0x1b33:  mov    %edx,0x4(%esp)
081bda9d +0x1b37:  mov    %eax,(%esp)
081bdaa0 +0x1b3a:  call   0807d880 <_init+0x178>
081bdaa5 +0x1b3f:  mov    -0xc(%ebp),%eax
081bdaa8 +0x1b42:  shl    $0x2,%eax
081bdaab +0x1b45:  neg    %eax
081bdaad +0x1b47:  add    0x10(%ebp),%eax
081bdab0 +0x1b4a:  leave
081bdab1 +0x1b4b:  ret
081bdab2 +0x1b4c:  nop
081bdab3 +0x1b4d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81bbf66

/* CRewardUserList::insert(unsigned int, int, int) */

void CRewardUserList::_GLOBAL__I_insert(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
