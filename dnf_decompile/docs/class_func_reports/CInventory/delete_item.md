# delete_item

`_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb`

`CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850400c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850400c  _ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb
#           CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
# range [0x0850400c, 0x085049c7]
0850400c +0x000:  push   %ebp
0850400d +0x001:  mov    %esp,%ebp
0850400f +0x003:  push   %esi
08504010 +0x004:  push   %ebx
08504011 +0x005:  sub    $0xb0,%esp
08504017 +0x00b:  mov    0x1c(%ebp),%eax
0850401a +0x00e:  mov    %al,-0x8c(%ebp)
08504020 +0x014:  mov    0xc(%ebp),%eax
08504023 +0x017:  mov    0x10(%ebp),%edx
08504026 +0x01a:  mov    %edx,0x8(%esp)
0850402a +0x01e:  mov    %eax,0x4(%esp)
0850402e +0x022:  mov    0x8(%ebp),%eax
08504031 +0x025:  mov    %eax,(%esp)
08504034 +0x028:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
08504039 +0x02d:  xor    $0x1,%eax
0850403c +0x030:  test   %al,%al
0850403e +0x032:  je     0850404a <+0x3e>
08504040 +0x034:  mov    $0x0,%eax
08504045 +0x039:  jmp    085049bd <+0x9b1>
0850404a +0x03e:  cmpl   $0x0,0x14(%ebp)
0850404e +0x042:  jg     0850405a <+0x4e>
08504050 +0x044:  mov    $0x0,%eax
08504055 +0x049:  jmp    085049bd <+0x9b1>
0850405a +0x04e:  mov    0xc(%ebp),%eax
0850405d +0x051:  cmp    $0x1,%eax
08504060 +0x054:  je     0850419b <+0x18f>
08504066 +0x05a:  cmp    $0x1,%eax
08504069 +0x05d:  jg     08504074 <+0x68>
0850406b +0x05f:  test   %eax,%eax
0850406d +0x061:  je     0850408b <+0x7f>
0850406f +0x063:  jmp    085049b8 <+0x9ac>
08504074 +0x068:  cmp    $0x2,%eax
08504077 +0x06b:  je     08504503 <+0x4f7>
0850407d +0x071:  cmp    $0x3,%eax
08504080 +0x074:  je     0850460d <+0x601>
08504086 +0x07a:  jmp    085049b8 <+0x9ac>
0850408b +0x07f:  mov    0x10(%ebp),%eax
0850408e +0x082:  mov    0x8(%ebp),%edx
08504091 +0x085:  imul   $0x3d,%eax,%eax
08504094 +0x088:  lea    (%edx,%eax,1),%eax
08504097 +0x08b:  add    $0x10,%eax
0850409a +0x08e:  mov    0xe(%eax),%eax
0850409d +0x091:  test   %eax,%eax
0850409f +0x093:  jne    085040ab <+0x9f>
085040a1 +0x095:  mov    $0x0,%eax
085040a6 +0x09a:  jmp    085049bd <+0x9b1>
085040ab +0x09f:  cmpb   $0x0,-0x8c(%ebp)
085040b2 +0x0a6:  je     08504143 <+0x137>
085040b8 +0x0ac:  mov    0x8(%ebp),%eax
085040bb +0x0af:  mov    (%eax),%eax
085040bd +0x0b1:  test   %eax,%eax
085040bf +0x0b3:  je     08504107 <+0xfb>
085040c1 +0x0b5:  mov    0x10(%ebp),%eax
085040c4 +0x0b8:  imul   $0x3d,%eax,%eax
085040c7 +0x0bb:  add    $0x10,%eax
085040ca +0x0be:  add    0x8(%ebp),%eax
085040cd +0x0c1:  lea    0xc(%eax),%ecx
085040d0 +0x0c4:  mov    0x8(%ebp),%eax
085040d3 +0x0c7:  mov    (%eax),%eax
085040d5 +0x0c9:  lea    0x79700(%eax),%edx
085040db +0x0cf:  mov    0x18(%ebp),%eax
085040de +0x0d2:  mov    %eax,0x14(%esp)
085040e2 +0x0d6:  mov    %ecx,0x10(%esp)
085040e6 +0x0da:  movl   $0x1,0xc(%esp)
085040ee +0x0e2:  movl   $0x0,0x8(%esp)
085040f6 +0x0ea:  mov    0xc(%ebp),%eax
085040f9 +0x0ed:  mov    %eax,0x4(%esp)
085040fd +0x0f1:  mov    %edx,(%esp)
08504100 +0x0f4:  call   0868340a <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason>  ; cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason)
08504105 +0x0f9:  jmp    08504143 <+0x137>
08504107 +0x0fb:  movl   $0x5,0xc(%esp)
0850410f +0x103:  movl   $0x1811,0x8(%esp)
08504117 +0x10b:  movl   $&_ZZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
0850411f +0x113:  lea    -0x88(%ebp),%eax
08504125 +0x119:  mov    %eax,(%esp)
08504128 +0x11c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0850412d +0x121:  movl   $"History ERROR, m_pParent NULL, ItemDel ",0x4(%esp)
08504135 +0x129:  lea    -0x88(%ebp),%eax
0850413b +0x12f:  mov    %eax,(%esp)
0850413e +0x132:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08504143 +0x137:  mov    0x10(%ebp),%eax
08504146 +0x13a:  imul   $0x3d,%eax,%eax
08504149 +0x13d:  add    $0x10,%eax
0850414c +0x140:  add    0x8(%ebp),%eax
0850414f +0x143:  add    $0xc,%eax
08504152 +0x146:  mov    %eax,(%esp)
08504155 +0x149:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0850415a +0x14e:  cmpl   $0x9,0x10(%ebp)
0850415e +0x152:  jg     085049b4 <+0x9a8>
08504164 +0x158:  movl   $0x0,0x14(%esp)
0850416c +0x160:  movl   $0x0,0x10(%esp)
08504174 +0x168:  movl   $0x0,0xc(%esp)
0850417c +0x170:  mov    0x10(%ebp),%eax
0850417f +0x173:  mov    %eax,0x8(%esp)
08504183 +0x177:  movl   $0x33,0x4(%esp)
0850418b +0x17f:  mov    0x8(%ebp),%eax
0850418e +0x182:  mov    %eax,(%esp)
08504191 +0x185:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
08504196 +0x18a:  jmp    085049b8 <+0x9ac>
0850419b +0x18f:  cmpl   $0x0,0x10(%ebp)
0850419f +0x193:  jne    085041cb <+0x1bf>
085041a1 +0x195:  movzbl -0x8c(%ebp),%eax
085041a8 +0x19c:  mov    %eax,0xc(%esp)
085041ac +0x1a0:  movl   $0x9,0x8(%esp)
085041b4 +0x1a8:  mov    0x14(%ebp),%eax
085041b7 +0x1ab:  mov    %eax,0x4(%esp)
085041bb +0x1af:  mov    0x8(%ebp),%eax
085041be +0x1b2:  mov    %eax,(%esp)
085041c1 +0x1b5:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
085041c6 +0x1ba:  jmp    085049bd <+0x9b1>
085041cb +0x1bf:  mov    0x8(%ebp),%eax
085041ce +0x1c2:  mov    0x650(%eax),%edx
085041d4 +0x1c8:  mov    0x10(%ebp),%eax
085041d7 +0x1cb:  imul   $0x3d,%eax,%eax
085041da +0x1ce:  lea    (%edx,%eax,1),%eax
085041dd +0x1d1:  mov    0x2(%eax),%eax
085041e0 +0x1d4:  test   %eax,%eax
085041e2 +0x1d6:  jne    085041ee <+0x1e2>
085041e4 +0x1d8:  mov    $0x0,%eax
085041e9 +0x1dd:  jmp    085049bd <+0x9b1>
085041ee +0x1e2:  mov    0x8(%ebp),%eax
085041f1 +0x1e5:  mov    0x650(%eax),%edx
085041f7 +0x1eb:  mov    0x10(%ebp),%eax
085041fa +0x1ee:  imul   $0x3d,%eax,%eax
085041fd +0x1f1:  lea    (%edx,%eax,1),%eax
08504200 +0x1f4:  movzbl 0x1(%eax),%eax
08504204 +0x1f8:  cmp    $0x1,%al
08504206 +0x1fa:  jne    085042c0 <+0x2b4>
0850420c +0x200:  cmpb   $0x0,-0x8c(%ebp)
08504213 +0x207:  je     085042a1 <+0x295>
08504219 +0x20d:  mov    0x8(%ebp),%eax
0850421c +0x210:  mov    (%eax),%eax
0850421e +0x212:  test   %eax,%eax
08504220 +0x214:  je     0850426b <+0x25f>
08504222 +0x216:  mov    0x8(%ebp),%eax
08504225 +0x219:  mov    0x650(%eax),%edx
0850422b +0x21f:  mov    0x10(%ebp),%eax
0850422e +0x222:  imul   $0x3d,%eax,%eax
08504231 +0x225:  lea    (%edx,%eax,1),%ecx
08504234 +0x228:  mov    0x8(%ebp),%eax
08504237 +0x22b:  mov    (%eax),%eax
08504239 +0x22d:  lea    0x79700(%eax),%edx
0850423f +0x233:  mov    0x18(%ebp),%eax
08504242 +0x236:  mov    %eax,0x14(%esp)
08504246 +0x23a:  mov    %ecx,0x10(%esp)
0850424a +0x23e:  movl   $0x1,0xc(%esp)
08504252 +0x246:  movl   $0x0,0x8(%esp)
0850425a +0x24e:  mov    0xc(%ebp),%eax
0850425d +0x251:  mov    %eax,0x4(%esp)
08504261 +0x255:  mov    %edx,(%esp)
08504264 +0x258:  call   0868340a <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason>  ; cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason)
08504269 +0x25d:  jmp    085042a1 <+0x295>
0850426b +0x25f:  movl   $0x5,0xc(%esp)
08504273 +0x267:  movl   $0x1831,0x8(%esp)
0850427b +0x26f:  movl   $&_ZZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
08504283 +0x277:  lea    -0x78(%ebp),%eax
08504286 +0x27a:  mov    %eax,(%esp)
08504289 +0x27d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0850428e +0x282:  movl   $"History ERROR, m_pParent NULL, ItemDel ",0x4(%esp)
08504296 +0x28a:  lea    -0x78(%ebp),%eax
08504299 +0x28d:  mov    %eax,(%esp)
0850429c +0x290:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085042a1 +0x295:  mov    0x8(%ebp),%eax
085042a4 +0x298:  mov    0x650(%eax),%edx
085042aa +0x29e:  mov    0x10(%ebp),%eax
085042ad +0x2a1:  imul   $0x3d,%eax,%eax
085042b0 +0x2a4:  lea    (%edx,%eax,1),%eax
085042b3 +0x2a7:  mov    %eax,(%esp)
085042b6 +0x2aa:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085042bb +0x2af:  jmp    085049b8 <+0x9ac>
085042c0 +0x2b4:  mov    0x8(%ebp),%eax
085042c3 +0x2b7:  mov    0x650(%eax),%edx
085042c9 +0x2bd:  mov    0x10(%ebp),%eax
085042cc +0x2c0:  imul   $0x3d,%eax,%eax
085042cf +0x2c3:  lea    (%edx,%eax,1),%eax
085042d2 +0x2c6:  mov    0x7(%eax),%eax
085042d5 +0x2c9:  cmp    0x14(%ebp),%eax
085042d8 +0x2cc:  jne    085043a3 <+0x397>
085042de +0x2d2:  cmpb   $0x0,-0x8c(%ebp)
085042e5 +0x2d9:  je     08504384 <+0x378>
085042eb +0x2df:  mov    0x8(%ebp),%eax
085042ee +0x2e2:  mov    (%eax),%eax
085042f0 +0x2e4:  test   %eax,%eax
085042f2 +0x2e6:  je     0850434e <+0x342>
085042f4 +0x2e8:  mov    0x8(%ebp),%eax
085042f7 +0x2eb:  mov    0x650(%eax),%edx
085042fd +0x2f1:  mov    0x10(%ebp),%eax
08504300 +0x2f4:  imul   $0x3d,%eax,%eax
08504303 +0x2f7:  lea    (%edx,%eax,1),%ebx
08504306 +0x2fa:  mov    0x8(%ebp),%eax
08504309 +0x2fd:  mov    0x650(%eax),%edx
0850430f +0x303:  mov    0x10(%ebp),%eax
08504312 +0x306:  imul   $0x3d,%eax,%eax
08504315 +0x309:  lea    (%edx,%eax,1),%eax
08504318 +0x30c:  mov    0x7(%eax),%eax
0850431b +0x30f:  mov    0x8(%ebp),%edx
0850431e +0x312:  mov    (%edx),%edx
08504320 +0x314:  lea    0x79700(%edx),%ecx
08504326 +0x31a:  mov    0x18(%ebp),%edx
08504329 +0x31d:  mov    %edx,0x14(%esp)
0850432d +0x321:  mov    %ebx,0x10(%esp)
08504331 +0x325:  mov    %eax,0xc(%esp)
08504335 +0x329:  movl   $0x0,0x8(%esp)
0850433d +0x331:  mov    0xc(%ebp),%eax
08504340 +0x334:  mov    %eax,0x4(%esp)
08504344 +0x338:  mov    %ecx,(%esp)
08504347 +0x33b:  call   0868340a <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason>  ; cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason)
0850434c +0x340:  jmp    08504384 <+0x378>
0850434e +0x342:  movl   $0x5,0xc(%esp)
08504356 +0x34a:  movl   $0x184d,0x8(%esp)
0850435e +0x352:  movl   $&_ZZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
08504366 +0x35a:  lea    -0x68(%ebp),%eax
08504369 +0x35d:  mov    %eax,(%esp)
0850436c +0x360:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08504371 +0x365:  movl   $"History ERROR, m_pParent NULL, ItemDel ",0x4(%esp)
08504379 +0x36d:  lea    -0x68(%ebp),%eax
0850437c +0x370:  mov    %eax,(%esp)
0850437f +0x373:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08504384 +0x378:  mov    0x8(%ebp),%eax
08504387 +0x37b:  mov    0x650(%eax),%edx
0850438d +0x381:  mov    0x10(%ebp),%eax
08504390 +0x384:  imul   $0x3d,%eax,%eax
08504393 +0x387:  lea    (%edx,%eax,1),%eax
08504396 +0x38a:  mov    %eax,(%esp)
08504399 +0x38d:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0850439e +0x392:  jmp    085049b8 <+0x9ac>
085043a3 +0x397:  mov    0x8(%ebp),%eax
085043a6 +0x39a:  mov    0x650(%eax),%edx
085043ac +0x3a0:  mov    0x10(%ebp),%eax
085043af +0x3a3:  imul   $0x3d,%eax,%eax
085043b2 +0x3a6:  lea    (%edx,%eax,1),%eax
085043b5 +0x3a9:  mov    0x7(%eax),%eax
085043b8 +0x3ac:  sub    0x14(%ebp),%eax
085043bb +0x3af:  test   %eax,%eax
085043bd +0x3b1:  jle    0850449c <+0x490>
085043c3 +0x3b7:  mov    0x8(%ebp),%eax
085043c6 +0x3ba:  mov    0x650(%eax),%edx
085043cc +0x3c0:  mov    0x10(%ebp),%eax
085043cf +0x3c3:  imul   $0x3d,%eax,%eax
085043d2 +0x3c6:  add    %eax,%edx
085043d4 +0x3c8:  mov    0x8(%ebp),%eax
085043d7 +0x3cb:  mov    0x650(%eax),%ecx
085043dd +0x3d1:  mov    0x10(%ebp),%eax
085043e0 +0x3d4:  imul   $0x3d,%eax,%eax
085043e3 +0x3d7:  lea    (%ecx,%eax,1),%eax
085043e6 +0x3da:  mov    0x7(%eax),%eax
085043e9 +0x3dd:  sub    0x14(%ebp),%eax
085043ec +0x3e0:  mov    %eax,0x7(%edx)
085043ef +0x3e3:  cmpb   $0x0,-0x8c(%ebp)
085043f6 +0x3ea:  je     085049b7 <+0x9ab>
085043fc +0x3f0:  mov    0x8(%ebp),%eax
085043ff +0x3f3:  mov    (%eax),%eax
08504401 +0x3f5:  test   %eax,%eax
08504403 +0x3f7:  je     08504461 <+0x455>
08504405 +0x3f9:  mov    0x8(%ebp),%eax
08504408 +0x3fc:  mov    0x650(%eax),%edx
0850440e +0x402:  mov    0x10(%ebp),%eax
08504411 +0x405:  imul   $0x3d,%eax,%eax
08504414 +0x408:  lea    (%edx,%eax,1),%ebx
08504417 +0x40b:  mov    0x8(%ebp),%eax
0850441a +0x40e:  mov    0x650(%eax),%edx
08504420 +0x414:  mov    0x10(%ebp),%eax
08504423 +0x417:  imul   $0x3d,%eax,%eax
08504426 +0x41a:  lea    (%edx,%eax,1),%eax
08504429 +0x41d:  mov    0x7(%eax),%eax
0850442c +0x420:  mov    0x8(%ebp),%edx
0850442f +0x423:  mov    (%edx),%edx
08504431 +0x425:  lea    0x79700(%edx),%ecx
08504437 +0x42b:  mov    0x18(%ebp),%edx
0850443a +0x42e:  mov    %edx,0x14(%esp)
0850443e +0x432:  mov    %ebx,0x10(%esp)
08504442 +0x436:  mov    0x14(%ebp),%edx
08504445 +0x439:  mov    %edx,0xc(%esp)
08504449 +0x43d:  mov    %eax,0x8(%esp)
0850444d +0x441:  mov    0xc(%ebp),%eax
08504450 +0x444:  mov    %eax,0x4(%esp)
08504454 +0x448:  mov    %ecx,(%esp)
08504457 +0x44b:  call   0868340a <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason>  ; cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason)
0850445c +0x450:  jmp    085049b8 <+0x9ac>
08504461 +0x455:  movl   $0x5,0xc(%esp)
08504469 +0x45d:  movl   $0x1868,0x8(%esp)
08504471 +0x465:  movl   $&_ZZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
08504479 +0x46d:  lea    -0x58(%ebp),%eax
0850447c +0x470:  mov    %eax,(%esp)
0850447f +0x473:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08504484 +0x478:  movl   $"History ERROR, m_pParent NULL, ItemDel ",0x4(%esp)
0850448c +0x480:  lea    -0x58(%ebp),%eax
0850448f +0x483:  mov    %eax,(%esp)
08504492 +0x486:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08504497 +0x48b:  jmp    085049b8 <+0x9ac>
0850449c +0x490:  mov    0x8(%ebp),%eax
0850449f +0x493:  mov    0x650(%eax),%edx
085044a5 +0x499:  mov    0x10(%ebp),%eax
085044a8 +0x49c:  imul   $0x3d,%eax,%eax
085044ab +0x49f:  lea    (%edx,%eax,1),%eax
085044ae +0x4a2:  mov    0x7(%eax),%ebx
085044b1 +0x4a5:  mov    0x8(%ebp),%eax
085044b4 +0x4a8:  mov    (%eax),%eax
085044b6 +0x4aa:  mov    %eax,(%esp)
085044b9 +0x4ad:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085044be +0x4b2:  mov    0x14(%ebp),%edx
085044c1 +0x4b5:  mov    %edx,0x1c(%esp)
085044c5 +0x4b9:  mov    %ebx,0x18(%esp)
085044c9 +0x4bd:  mov    %eax,0x14(%esp)
085044cd +0x4c1:  movl   $"%s - m_InvenSlot[slot_no].add_info(%d) < count(%d)",0x10(%esp)
085044d5 +0x4c9:  movl   $0x186f,0xc(%esp)
085044dd +0x4d1:  movl   $&_ZZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonbE19__PRETTY_FUNCTION__,0x8(%esp)
085044e5 +0x4d9:  movl   $"inventory.cpp",0x4(%esp)
085044ed +0x4e1:  movl   $0x1,(%esp)
085044f4 +0x4e8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085044f9 +0x4ed:  mov    $0x0,%eax
085044fe +0x4f2:  jmp    085049bd <+0x9b1>
08504503 +0x4f7:  mov    0x8(%ebp),%eax
08504506 +0x4fa:  mov    0x654(%eax),%edx
0850450c +0x500:  mov    0x10(%ebp),%eax
0850450f +0x503:  imul   $0x3d,%eax,%eax
08504512 +0x506:  lea    (%edx,%eax,1),%eax
08504515 +0x509:  mov    0x2(%eax),%eax
08504518 +0x50c:  test   %eax,%eax
0850451a +0x50e:  jne    08504526 <+0x51a>
0850451c +0x510:  mov    $0x0,%eax
08504521 +0x515:  jmp    085049bd <+0x9b1>
08504526 +0x51a:  cmpb   $0x0,-0x8c(%ebp)
0850452d +0x521:  je     085045ee <+0x5e2>
08504533 +0x527:  mov    0x8(%ebp),%eax
08504536 +0x52a:  mov    (%eax),%eax
08504538 +0x52c:  test   %eax,%eax
0850453a +0x52e:  je     085045b8 <+0x5ac>
0850453c +0x530:  mov    0x8(%ebp),%eax
0850453f +0x533:  mov    0x654(%eax),%edx
08504545 +0x539:  mov    0x10(%ebp),%eax
08504548 +0x53c:  imul   $0x3d,%eax,%eax
0850454b +0x53f:  lea    (%edx,%eax,1),%eax
0850454e +0x542:  mov    0x7(%eax),%eax
08504551 +0x545:  mov    0x8(%ebp),%edx
08504554 +0x548:  add    $0x734,%edx
0850455a +0x54e:  mov    %eax,0x4(%esp)
0850455e +0x552:  mov    %edx,(%esp)
08504561 +0x555:  call   082f98c2 <_ZNK8WongWork14CAvatarItemMgr14GetIPGAgencyNoEi>  ; WongWork::CAvatarItemMgr::GetIPGAgencyNo(int) const
08504566 +0x55a:  mov    0x8(%ebp),%edx
08504569 +0x55d:  mov    0x654(%edx),%ecx
0850456f +0x563:  mov    0x10(%ebp),%edx
08504572 +0x566:  imul   $0x3d,%edx,%edx
08504575 +0x569:  lea    (%ecx,%edx,1),%edx
08504578 +0x56c:  mov    0x7(%edx),%ecx
0850457b +0x56f:  mov    0x8(%ebp),%edx
0850457e +0x572:  mov    0x654(%edx),%ebx
08504584 +0x578:  mov    0x10(%ebp),%edx
08504587 +0x57b:  imul   $0x3d,%edx,%edx
0850458a +0x57e:  lea    (%ebx,%edx,1),%edx
0850458d +0x581:  mov    0x2(%edx),%edx
08504590 +0x584:  mov    0x8(%ebp),%ebx
08504593 +0x587:  mov    (%ebx),%ebx
08504595 +0x589:  lea    0x79700(%ebx),%esi
0850459b +0x58f:  mov    0x18(%ebp),%ebx
0850459e +0x592:  mov    %ebx,0x10(%esp)
085045a2 +0x596:  mov    %eax,0xc(%esp)
085045a6 +0x59a:  mov    %ecx,0x8(%esp)
085045aa +0x59e:  mov    %edx,0x4(%esp)
085045ae +0x5a2:  mov    %esi,(%esp)
085045b1 +0x5a5:  call   086846fa <_ZN15cUserHistoryLog13AvatarItemDelEiiPKc20eAvatarItemDelReason>  ; cUserHistoryLog::AvatarItemDel(int, int, char const*, eAvatarItemDelReason)
085045b6 +0x5aa:  jmp    085045ee <+0x5e2>
085045b8 +0x5ac:  movl   $0x5,0xc(%esp)
085045c0 +0x5b4:  movl   $0x187e,0x8(%esp)
085045c8 +0x5bc:  movl   $&_ZZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
085045d0 +0x5c4:  lea    -0x48(%ebp),%eax
085045d3 +0x5c7:  mov    %eax,(%esp)
085045d6 +0x5ca:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085045db +0x5cf:  movl   $"History ERROR, m_pParent NULL, ItemDel ",0x4(%esp)
085045e3 +0x5d7:  lea    -0x48(%ebp),%eax
085045e6 +0x5da:  mov    %eax,(%esp)
085045e9 +0x5dd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085045ee +0x5e2:  mov    0x8(%ebp),%eax
085045f1 +0x5e5:  mov    0x654(%eax),%edx
085045f7 +0x5eb:  mov    0x10(%ebp),%eax
085045fa +0x5ee:  imul   $0x3d,%eax,%eax
085045fd +0x5f1:  lea    (%edx,%eax,1),%eax
08504600 +0x5f4:  mov    %eax,(%esp)
08504603 +0x5f7:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08504608 +0x5fc:  jmp    085049b8 <+0x9ac>
0850460d +0x601:  mov    0x8(%ebp),%eax
08504610 +0x604:  mov    0x6e4(%eax),%edx
08504616 +0x60a:  mov    0x10(%ebp),%eax
08504619 +0x60d:  imul   $0x3d,%eax,%eax
0850461c +0x610:  lea    (%edx,%eax,1),%eax
0850461f +0x613:  mov    0x2(%eax),%eax
08504622 +0x616:  test   %eax,%eax
08504624 +0x618:  jne    08504630 <+0x624>
08504626 +0x61a:  mov    $0x0,%eax
0850462b +0x61f:  jmp    085049bd <+0x9b1>
08504630 +0x624:  mov    0x8(%ebp),%eax
08504633 +0x627:  mov    0x6e4(%eax),%edx
08504639 +0x62d:  mov    0x10(%ebp),%eax
0850463c +0x630:  imul   $0x3d,%eax,%eax
0850463f +0x633:  lea    (%edx,%eax,1),%eax
08504642 +0x636:  mov    %eax,(%esp)
08504645 +0x639:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0850464a +0x63e:  test   %al,%al
0850464c +0x640:  je     08504737 <+0x72b>
08504652 +0x646:  cmpb   $0x0,-0x8c(%ebp)
08504659 +0x64d:  je     08504718 <+0x70c>
0850465f +0x653:  mov    0x8(%ebp),%eax
08504662 +0x656:  mov    (%eax),%eax
08504664 +0x658:  test   %eax,%eax
08504666 +0x65a:  je     085046e2 <+0x6d6>
08504668 +0x65c:  mov    0x8(%ebp),%eax
0850466b +0x65f:  mov    0x6e4(%eax),%edx
08504671 +0x665:  mov    0x10(%ebp),%eax
08504674 +0x668:  imul   $0x3d,%eax,%eax
08504677 +0x66b:  lea    (%edx,%eax,1),%eax
0850467a +0x66e:  movzbl 0x1(%eax),%eax
0850467e +0x672:  movzbl %al,%ecx
08504681 +0x675:  mov    0x8(%ebp),%eax
08504684 +0x678:  mov    0x6e4(%eax),%edx
0850468a +0x67e:  mov    0x10(%ebp),%eax
0850468d +0x681:  imul   $0x3d,%eax,%eax
08504690 +0x684:  lea    (%edx,%eax,1),%eax
08504693 +0x687:  mov    0x7(%eax),%edx
08504696 +0x68a:  mov    0x8(%ebp),%eax
08504699 +0x68d:  mov    0x6e4(%eax),%ebx
0850469f +0x693:  mov    0x10(%ebp),%eax
085046a2 +0x696:  imul   $0x3d,%eax,%eax
085046a5 +0x699:  lea    (%ebx,%eax,1),%eax
085046a8 +0x69c:  mov    0x2(%eax),%eax
085046ab +0x69f:  mov    0x8(%ebp),%ebx
085046ae +0x6a2:  mov    (%ebx),%ebx
085046b0 +0x6a4:  lea    0x79700(%ebx),%esi
085046b6 +0x6aa:  mov    0x18(%ebp),%ebx
085046b9 +0x6ad:  mov    %ebx,0x18(%esp)
085046bd +0x6b1:  mov    %ecx,0x14(%esp)
085046c1 +0x6b5:  movl   $0x1,0x10(%esp)
085046c9 +0x6bd:  mov    %edx,0xc(%esp)
085046cd +0x6c1:  mov    %eax,0x8(%esp)
085046d1 +0x6c5:  mov    0xc(%ebp),%eax
085046d4 +0x6c8:  mov    %eax,0x4(%esp)
085046d8 +0x6cc:  mov    %esi,(%esp)
085046db +0x6cf:  call   08684f40 <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason>  ; cUserHistoryLog::CreatureItemDel(INVEN_TYPE, int, int, int, int, eItemDelReason)
085046e0 +0x6d4:  jmp    08504718 <+0x70c>
085046e2 +0x6d6:  movl   $0x5,0xc(%esp)
085046ea +0x6de:  movl   $0x18a3,0x8(%esp)
085046f2 +0x6e6:  movl   $&_ZZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
085046fa +0x6ee:  lea    -0x38(%ebp),%eax
085046fd +0x6f1:  mov    %eax,(%esp)
08504700 +0x6f4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08504705 +0x6f9:  movl   $"History ERROR, m_pParent NULL, ItemDel ",0x4(%esp)
0850470d +0x701:  lea    -0x38(%ebp),%eax
08504710 +0x704:  mov    %eax,(%esp)
08504713 +0x707:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08504718 +0x70c:  mov    0x8(%ebp),%eax
0850471b +0x70f:  mov    0x6e4(%eax),%edx
08504721 +0x715:  mov    0x10(%ebp),%eax
08504724 +0x718:  imul   $0x3d,%eax,%eax
08504727 +0x71b:  lea    (%edx,%eax,1),%eax
0850472a +0x71e:  mov    %eax,(%esp)
0850472d +0x721:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08504732 +0x726:  jmp    085049b8 <+0x9ac>
08504737 +0x72b:  mov    0x8(%ebp),%eax
0850473a +0x72e:  mov    0x6e4(%eax),%edx
08504740 +0x734:  mov    0x10(%ebp),%eax
08504743 +0x737:  imul   $0x3d,%eax,%eax
08504746 +0x73a:  lea    (%edx,%eax,1),%eax
08504749 +0x73d:  mov    0x7(%eax),%eax
0850474c +0x740:  cmp    0x14(%ebp),%eax
0850474f +0x743:  jne    0850483a <+0x82e>
08504755 +0x749:  cmpb   $0x0,-0x8c(%ebp)
0850475c +0x750:  je     0850481b <+0x80f>
08504762 +0x756:  mov    0x8(%ebp),%eax
08504765 +0x759:  mov    (%eax),%eax
08504767 +0x75b:  test   %eax,%eax
08504769 +0x75d:  je     085047e5 <+0x7d9>
0850476b +0x75f:  mov    0x8(%ebp),%eax
0850476e +0x762:  mov    0x6e4(%eax),%edx
08504774 +0x768:  mov    0x10(%ebp),%eax
08504777 +0x76b:  imul   $0x3d,%eax,%eax
0850477a +0x76e:  lea    (%edx,%eax,1),%eax
0850477d +0x771:  movzbl 0x1(%eax),%eax
08504781 +0x775:  movzbl %al,%ecx
08504784 +0x778:  mov    0x8(%ebp),%eax
08504787 +0x77b:  mov    0x6e4(%eax),%edx
0850478d +0x781:  mov    0x10(%ebp),%eax
08504790 +0x784:  imul   $0x3d,%eax,%eax
08504793 +0x787:  lea    (%edx,%eax,1),%eax
08504796 +0x78a:  mov    0x7(%eax),%edx
08504799 +0x78d:  mov    0x8(%ebp),%eax
0850479c +0x790:  mov    0x6e4(%eax),%ebx
085047a2 +0x796:  mov    0x10(%ebp),%eax
085047a5 +0x799:  imul   $0x3d,%eax,%eax
085047a8 +0x79c:  lea    (%ebx,%eax,1),%eax
085047ab +0x79f:  mov    0x2(%eax),%eax
085047ae +0x7a2:  mov    0x8(%ebp),%ebx
085047b1 +0x7a5:  mov    (%ebx),%ebx
085047b3 +0x7a7:  lea    0x79700(%ebx),%esi
085047b9 +0x7ad:  mov    0x18(%ebp),%ebx
085047bc +0x7b0:  mov    %ebx,0x18(%esp)
085047c0 +0x7b4:  mov    %ecx,0x14(%esp)
085047c4 +0x7b8:  mov    %edx,0x10(%esp)
085047c8 +0x7bc:  movl   $0x0,0xc(%esp)
085047d0 +0x7c4:  mov    %eax,0x8(%esp)
085047d4 +0x7c8:  mov    0xc(%ebp),%eax
085047d7 +0x7cb:  mov    %eax,0x4(%esp)
085047db +0x7cf:  mov    %esi,(%esp)
085047de +0x7d2:  call   08684f40 <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason>  ; cUserHistoryLog::CreatureItemDel(INVEN_TYPE, int, int, int, int, eItemDelReason)
085047e3 +0x7d7:  jmp    0850481b <+0x80f>
085047e5 +0x7d9:  movl   $0x5,0xc(%esp)
085047ed +0x7e1:  movl   $0x18bb,0x8(%esp)
085047f5 +0x7e9:  movl   $&_ZZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
085047fd +0x7f1:  lea    -0x28(%ebp),%eax
08504800 +0x7f4:  mov    %eax,(%esp)
08504803 +0x7f7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08504808 +0x7fc:  movl   $"History ERROR, m_pParent NULL, ItemDel ",0x4(%esp)
08504810 +0x804:  lea    -0x28(%ebp),%eax
08504813 +0x807:  mov    %eax,(%esp)
08504816 +0x80a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0850481b +0x80f:  mov    0x8(%ebp),%eax
0850481e +0x812:  mov    0x6e4(%eax),%edx
08504824 +0x818:  mov    0x10(%ebp),%eax
08504827 +0x81b:  imul   $0x3d,%eax,%eax
0850482a +0x81e:  lea    (%edx,%eax,1),%eax
0850482d +0x821:  mov    %eax,(%esp)
08504830 +0x824:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08504835 +0x829:  jmp    085049b8 <+0x9ac>
0850483a +0x82e:  mov    0x8(%ebp),%eax
0850483d +0x831:  mov    0x6e4(%eax),%edx
08504843 +0x837:  mov    0x10(%ebp),%eax
08504846 +0x83a:  imul   $0x3d,%eax,%eax
08504849 +0x83d:  lea    (%edx,%eax,1),%eax
0850484c +0x840:  mov    0x7(%eax),%eax
0850484f +0x843:  sub    0x14(%ebp),%eax
08504852 +0x846:  test   %eax,%eax
08504854 +0x848:  jle    08504950 <+0x944>
0850485a +0x84e:  mov    0x8(%ebp),%eax
0850485d +0x851:  mov    0x6e4(%eax),%edx
08504863 +0x857:  mov    0x10(%ebp),%eax
08504866 +0x85a:  imul   $0x3d,%eax,%eax
08504869 +0x85d:  add    %eax,%edx
0850486b +0x85f:  mov    0x8(%ebp),%eax
0850486e +0x862:  mov    0x6e4(%eax),%ecx
08504874 +0x868:  mov    0x10(%ebp),%eax
08504877 +0x86b:  imul   $0x3d,%eax,%eax
0850487a +0x86e:  lea    (%ecx,%eax,1),%eax
0850487d +0x871:  mov    0x7(%eax),%eax
08504880 +0x874:  sub    0x14(%ebp),%eax
08504883 +0x877:  mov    %eax,0x7(%edx)
08504886 +0x87a:  cmpb   $0x0,-0x8c(%ebp)
0850488d +0x881:  je     085049b8 <+0x9ac>
08504893 +0x887:  mov    0x8(%ebp),%eax
08504896 +0x88a:  mov    (%eax),%eax
08504898 +0x88c:  test   %eax,%eax
0850489a +0x88e:  je     08504918 <+0x90c>
0850489c +0x890:  mov    0x8(%ebp),%eax
0850489f +0x893:  mov    0x6e4(%eax),%edx
085048a5 +0x899:  mov    0x10(%ebp),%eax
085048a8 +0x89c:  imul   $0x3d,%eax,%eax
085048ab +0x89f:  lea    (%edx,%eax,1),%eax
085048ae +0x8a2:  movzbl 0x1(%eax),%eax
085048b2 +0x8a6:  movzbl %al,%ecx
085048b5 +0x8a9:  mov    0x8(%ebp),%eax
085048b8 +0x8ac:  mov    0x6e4(%eax),%edx
085048be +0x8b2:  mov    0x10(%ebp),%eax
085048c1 +0x8b5:  imul   $0x3d,%eax,%eax
085048c4 +0x8b8:  lea    (%edx,%eax,1),%eax
085048c7 +0x8bb:  mov    0x7(%eax),%edx
085048ca +0x8be:  mov    0x8(%ebp),%eax
085048cd +0x8c1:  mov    0x6e4(%eax),%ebx
085048d3 +0x8c7:  mov    0x10(%ebp),%eax
085048d6 +0x8ca:  imul   $0x3d,%eax,%eax
085048d9 +0x8cd:  lea    (%ebx,%eax,1),%eax
085048dc +0x8d0:  mov    0x2(%eax),%eax
085048df +0x8d3:  mov    0x8(%ebp),%ebx
085048e2 +0x8d6:  mov    (%ebx),%ebx
085048e4 +0x8d8:  lea    0x79700(%ebx),%esi
085048ea +0x8de:  mov    0x18(%ebp),%ebx
085048ed +0x8e1:  mov    %ebx,0x18(%esp)
085048f1 +0x8e5:  mov    %ecx,0x14(%esp)
085048f5 +0x8e9:  mov    0x14(%ebp),%ecx
085048f8 +0x8ec:  mov    %ecx,0x10(%esp)
085048fc +0x8f0:  mov    %edx,0xc(%esp)
08504900 +0x8f4:  mov    %eax,0x8(%esp)
08504904 +0x8f8:  mov    0xc(%ebp),%eax
08504907 +0x8fb:  mov    %eax,0x4(%esp)
0850490b +0x8ff:  mov    %esi,(%esp)
0850490e +0x902:  call   08684f40 <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason>  ; cUserHistoryLog::CreatureItemDel(INVEN_TYPE, int, int, int, int, eItemDelReason)
08504913 +0x907:  jmp    085049b8 <+0x9ac>
08504918 +0x90c:  movl   $0x5,0xc(%esp)
08504920 +0x914:  movl   $0x18d2,0x8(%esp)
08504928 +0x91c:  movl   $&_ZZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
08504930 +0x924:  lea    -0x18(%ebp),%eax
08504933 +0x927:  mov    %eax,(%esp)
08504936 +0x92a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0850493b +0x92f:  movl   $"History ERROR, m_pParent NULL, ItemDel ",0x4(%esp)
08504943 +0x937:  lea    -0x18(%ebp),%eax
08504946 +0x93a:  mov    %eax,(%esp)
08504949 +0x93d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0850494e +0x942:  jmp    085049b8 <+0x9ac>
08504950 +0x944:  mov    0x8(%ebp),%eax
08504953 +0x947:  mov    0x6e4(%eax),%edx
08504959 +0x94d:  mov    0x10(%ebp),%eax
0850495c +0x950:  imul   $0x3d,%eax,%eax
0850495f +0x953:  lea    (%edx,%eax,1),%eax
08504962 +0x956:  mov    0x7(%eax),%ebx
08504965 +0x959:  mov    0x8(%ebp),%eax
08504968 +0x95c:  mov    (%eax),%eax
0850496a +0x95e:  mov    %eax,(%esp)
0850496d +0x961:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08504972 +0x966:  mov    0x14(%ebp),%edx
08504975 +0x969:  mov    %edx,0x1c(%esp)
08504979 +0x96d:  mov    %ebx,0x18(%esp)
0850497d +0x971:  mov    %eax,0x14(%esp)
08504981 +0x975:  movl   $"%s - m_CreatureSlot[slot_no].add_info(%d) < count(%d)",0x10(%esp)
08504989 +0x97d:  movl   $0x18da,0xc(%esp)
08504991 +0x985:  movl   $&_ZZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonbE19__PRETTY_FUNCTION__,0x8(%esp)
08504999 +0x98d:  movl   $"inventory.cpp",0x4(%esp)
085049a1 +0x995:  movl   $0x1,(%esp)
085049a8 +0x99c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085049ad +0x9a1:  mov    $0x0,%eax
085049b2 +0x9a6:  jmp    085049bd <+0x9b1>
085049b4 +0x9a8:  nop
085049b5 +0x9a9:  jmp    085049b8 <+0x9ac>
085049b7 +0x9ab:  nop
085049b8 +0x9ac:  mov    $0x1,%eax
085049bd +0x9b1:  add    $0xb0,%esp
085049c3 +0x9b7:  pop    %ebx
085049c4 +0x9b8:  pop    %esi
085049c5 +0x9b9:  pop    %ebp
085049c6 +0x9ba:  ret
085049c7 +0x9bb:  nop
```

## 反编译 C

```c
// CInventory::delete_item @ 0x850400c

/* CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool) */

undefined4 __thiscall
CInventory::delete_item
          (CInventory *this,int param_2,int param_3,int param_4,undefined4 param_5,char param_6)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  cMyTrace local_1c [16];
  
  cVar2 = CheckValidSlot(this,param_2,param_3);
  if (cVar2 == '\x01') {
    if (param_4 < 1) {
      uVar3 = 0;
    }
    else {
      if (param_2 == 1) {
        if (param_3 == 0) {
          uVar3 = use_money(this,param_4,9,param_6);
          return uVar3;
        }
        if (*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 2) == 0) {
          return 0;
        }
        if (*(char *)(*(int *)(this + 0x650) + param_3 * 0x3d + 1) == '\x01') {
          if (param_6 != '\0') {
            if (*(int *)this == 0) {
              cMyTrace::cMyTrace(local_7c,
                                 "bool CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)"
                                 ,0x1831,5);
              cMyTrace::operator()(local_7c,"History ERROR, m_pParent NULL, ItemDel ");
            }
            else {
              cUserHistoryLog::ItemDel
                        ((cUserHistoryLog *)(*(int *)this + 0x79700),1,0,1,
                         *(int *)(this + 0x650) + param_3 * 0x3d,param_5);
            }
          }
          Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x650) + param_3 * 0x3d));
        }
        else if (*(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 7) == param_4) {
          if (param_6 != '\0') {
            if (*(int *)this == 0) {
              cMyTrace::cMyTrace(local_6c,
                                 "bool CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)"
                                 ,0x184d,5);
              cMyTrace::operator()(local_6c,"History ERROR, m_pParent NULL, ItemDel ");
            }
            else {
              cUserHistoryLog::ItemDel
                        ((cUserHistoryLog *)(*(int *)this + 0x79700),1,0,
                         *(undefined4 *)(*(int *)(this + 0x650) + param_3 * 0x3d + 7),
                         *(int *)(this + 0x650) + param_3 * 0x3d,param_5);
            }
          }
          Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x650) + param_3 * 0x3d));
        }
        else {
          iVar1 = *(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 7);
          if (iVar1 == param_4 || iVar1 - param_4 < 0) {
            uVar3 = *(undefined4 *)(*(int *)(this + 0x650) + param_3 * 0x3d + 7);
            uVar4 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)this);
            LogManager::logFormat
                      (1,"inventory.cpp",
                       "bool CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)",
                       0x186f,"%s - m_InvenSlot[slot_no].add_info(%d) < count(%d)",uVar4,uVar3,
                       param_4);
            return 0;
          }
          *(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 7) =
               *(int *)(*(int *)(this + 0x650) + param_3 * 0x3d + 7) - param_4;
          if (param_6 != '\0') {
            if (*(int *)this == 0) {
              cMyTrace::cMyTrace(local_5c,
                                 "bool CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)"
                                 ,0x1868,5);
              cMyTrace::operator()(local_5c,"History ERROR, m_pParent NULL, ItemDel ");
            }
            else {
              cUserHistoryLog::ItemDel
                        ((cUserHistoryLog *)(*(int *)this + 0x79700),1,
                         *(undefined4 *)(*(int *)(this + 0x650) + param_3 * 0x3d + 7),param_4,
                         *(int *)(this + 0x650) + param_3 * 0x3d,param_5);
            }
          }
        }
      }
      else if (param_2 < 2) {
        if (param_2 == 0) {
          if (*(int *)(this + param_3 * 0x3d + 0x1e) == 0) {
            return 0;
          }
          if (param_6 != '\0') {
            if (*(int *)this == 0) {
              cMyTrace::cMyTrace(local_8c,
                                 "bool CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)"
                                 ,0x1811,5);
              cMyTrace::operator()(local_8c,"History ERROR, m_pParent NULL, ItemDel ");
            }
            else {
              cUserHistoryLog::ItemDel
                        ((cUserHistoryLog *)(*(int *)this + 0x79700),0,0,1,
                         this + param_3 * 0x3d + 0x1c,param_5);
            }
          }
          Inven_Item::reset((Inven_Item *)(this + param_3 * 0x3d + 0x1c));
          if (param_3 < 10) {
            SendAvatarEvent(this,0x33,param_3,0,0,0);
          }
        }
      }
      else if (param_2 == 2) {
        if (*(int *)(*(int *)(this + 0x654) + param_3 * 0x3d + 2) == 0) {
          return 0;
        }
        if (param_6 != '\0') {
          if (*(int *)this == 0) {
            cMyTrace::cMyTrace(local_4c,
                               "bool CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)"
                               ,0x187e,5);
            cMyTrace::operator()(local_4c,"History ERROR, m_pParent NULL, ItemDel ");
          }
          else {
            uVar3 = WongWork::CAvatarItemMgr::GetIPGAgencyNo
                              ((CAvatarItemMgr *)(this + 0x734),
                               *(int *)(*(int *)(this + 0x654) + param_3 * 0x3d + 7));
            cUserHistoryLog::AvatarItemDel
                      ((cUserHistoryLog *)(*(int *)this + 0x79700),
                       *(undefined4 *)(*(int *)(this + 0x654) + param_3 * 0x3d + 2),
                       *(undefined4 *)(*(int *)(this + 0x654) + param_3 * 0x3d + 7),uVar3,param_5);
          }
        }
        Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x654) + param_3 * 0x3d));
      }
      else if (param_2 == 3) {
        if (*(int *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 2) == 0) {
          return 0;
        }
        cVar2 = Inven_Item::isEquipableItemType
                          ((Inven_Item *)(*(int *)(this + 0x6e4) + param_3 * 0x3d));
        if (cVar2 == '\0') {
          if (*(int *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 7) == param_4) {
            if (param_6 != '\0') {
              if (*(int *)this == 0) {
                cMyTrace::cMyTrace(local_2c,
                                   "bool CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)"
                                   ,0x18bb,5);
                cMyTrace::operator()(local_2c,"History ERROR, m_pParent NULL, ItemDel ");
              }
              else {
                cUserHistoryLog::CreatureItemDel
                          ((cUserHistoryLog *)(*(int *)this + 0x79700),3,
                           *(undefined4 *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 2),0,
                           *(undefined4 *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 7),
                           *(undefined1 *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 1),param_5);
              }
            }
            Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x6e4) + param_3 * 0x3d));
          }
          else {
            iVar1 = *(int *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 7);
            if (iVar1 == param_4 || iVar1 - param_4 < 0) {
              uVar3 = *(undefined4 *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 7);
              uVar4 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)this);
              LogManager::logFormat
                        (1,"inventory.cpp",
                         "bool CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)",
                         0x18da,"%s - m_CreatureSlot[slot_no].add_info(%d) < count(%d)",uVar4,uVar3,
                         param_4);
              return 0;
            }
            *(int *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 7) =
                 *(int *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 7) - param_4;
            if (param_6 != '\0') {
              if (*(int *)this == 0) {
                cMyTrace::cMyTrace(local_1c,
                                   "bool CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)"
                                   ,0x18d2,5);
                cMyTrace::operator()(local_1c,"History ERROR, m_pParent NULL, ItemDel ");
              }
              else {
                cUserHistoryLog::CreatureItemDel
                          ((cUserHistoryLog *)(*(int *)this + 0x79700),3,
                           *(undefined4 *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 2),
                           *(undefined4 *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 7),param_4,
                           *(undefined1 *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 1),param_5);
              }
            }
          }
        }
        else {
          if (param_6 != '\0') {
            if (*(int *)this == 0) {
              cMyTrace::cMyTrace(local_3c,
                                 "bool CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)"
                                 ,0x18a3,5);
              cMyTrace::operator()(local_3c,"History ERROR, m_pParent NULL, ItemDel ");
            }
            else {
              cUserHistoryLog::CreatureItemDel
                        ((cUserHistoryLog *)(*(int *)this + 0x79700),3,
                         *(undefined4 *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 2),
                         *(undefined4 *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 7),1,
                         *(undefined1 *)(*(int *)(this + 0x6e4) + param_3 * 0x3d + 1),param_5);
            }
          }
          Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x6e4) + param_3 * 0x3d));
        }
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
