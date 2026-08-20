# IncreaseItemLockTimer

`_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser`

`global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to item_lock::CItemLockTimer` | `0x0854301e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854301e  _GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser
#           global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)
# range [0x0854301e, 0x085450f3]
0854301e +0x0000:  push   %ebp
0854301f +0x0001:  mov    %esp,%ebp
08543021 +0x0003:  sub    $0x18,%esp
08543024 +0x0006:  movl   $0xffff,0x4(%esp)
0854302c +0x000e:  movl   $0x1,(%esp)
08543033 +0x0015:  call   08542fde <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08543038 +0x001a:  leave
08543039 +0x001b:  ret
0854303a +0x001c:  push   %ebp
0854303b +0x001d:  mov    %esp,%ebp
0854303d +0x001f:  mov    0x8(%ebp),%eax
08543040 +0x0022:  mov    (%eax),%eax
08543042 +0x0024:  pop    %ebp
08543043 +0x0025:  ret
08543044 +0x0026:  push   %ebp
08543045 +0x0027:  mov    %esp,%ebp
08543047 +0x0029:  mov    0x8(%ebp),%eax
0854304a +0x002c:  movl   $0x0,(%eax)
08543050 +0x0032:  pop    %ebp
08543051 +0x0033:  ret
08543052 +0x0034:  push   %ebp
08543053 +0x0035:  mov    %esp,%ebp
08543055 +0x0037:  mov    0x8(%ebp),%eax
08543058 +0x003a:  movl   $0x0,(%eax)
0854305e +0x0040:  pop    %ebp
0854305f +0x0041:  ret
08543060 +0x0042:  push   %ebp
08543061 +0x0043:  mov    %esp,%ebp
08543063 +0x0045:  sub    $0x18,%esp
08543066 +0x0048:  mov    0x8(%ebp),%eax
08543069 +0x004b:  mov    %eax,(%esp)
0854306c +0x004e:  call   085430b0 <+0x92>
08543071 +0x0053:  leave
08543072 +0x0054:  ret
08543073 +0x0055:  nop
08543074 +0x0056:  push   %ebp
08543075 +0x0057:  mov    %esp,%ebp
08543077 +0x0059:  sub    $0x18,%esp
0854307a +0x005c:  mov    0x8(%ebp),%eax
0854307d +0x005f:  mov    %eax,(%esp)
08543080 +0x0062:  call   08543116 <+0xf8>
08543085 +0x0067:  leave
08543086 +0x0068:  ret
08543087 +0x0069:  nop
08543088 +0x006a:  push   %ebp
08543089 +0x006b:  mov    %esp,%ebp
0854308b +0x006d:  sub    $0x18,%esp
0854308e +0x0070:  mov    0x8(%ebp),%eax
08543091 +0x0073:  mov    %eax,(%esp)
08543094 +0x0076:  call   0854357c <+0x55e>
08543099 +0x007b:  leave
0854309a +0x007c:  ret
0854309b +0x007d:  nop
0854309c +0x007e:  push   %ebp
0854309d +0x007f:  mov    %esp,%ebp
0854309f +0x0081:  sub    $0x18,%esp
085430a2 +0x0084:  mov    0x8(%ebp),%eax
085430a5 +0x0087:  mov    %eax,(%esp)
085430a8 +0x008a:  call   08543590 <+0x572>
085430ad +0x008f:  leave
085430ae +0x0090:  ret
085430af +0x0091:  nop
085430b0 +0x0092:  push   %ebp
085430b1 +0x0093:  mov    %esp,%ebp
085430b3 +0x0095:  push   %esi
085430b4 +0x0096:  push   %ebx
085430b5 +0x0097:  sub    $0x10,%esp
085430b8 +0x009a:  mov    0x8(%ebp),%eax
085430bb +0x009d:  mov    %eax,(%esp)
085430be +0x00a0:  call   085435fa <+0x5dc>
085430c3 +0x00a5:  mov    %eax,0x4(%esp)
085430c7 +0x00a9:  mov    0x8(%ebp),%eax
085430ca +0x00ac:  mov    %eax,(%esp)
085430cd +0x00af:  call   085435a4 <+0x586>
085430d2 +0x00b4:  jmp    085430ef <+0xd1>
085430d4 +0x00b6:  mov    %edx,%ebx
085430d6 +0x00b8:  mov    %eax,%esi
085430d8 +0x00ba:  mov    0x8(%ebp),%eax
085430db +0x00bd:  mov    %eax,(%esp)
085430de +0x00c0:  call   0854309c <+0x7e>
085430e3 +0x00c5:  mov    %esi,%eax
085430e5 +0x00c7:  mov    %ebx,%edx
085430e7 +0x00c9:  mov    %eax,(%esp)
085430ea +0x00cc:  call   08ae3750 <_Unwind_Resume>
085430ef +0x00d1:  mov    0x8(%ebp),%eax
085430f2 +0x00d4:  mov    %eax,(%esp)
085430f5 +0x00d7:  call   0854309c <+0x7e>
085430fa +0x00dc:  add    $0x10,%esp
085430fd +0x00df:  pop    %ebx
085430fe +0x00e0:  pop    %esi
085430ff +0x00e1:  pop    %ebp
08543100 +0x00e2:  ret
08543101 +0x00e3:  nop
08543102 +0x00e4:  push   %ebp
08543103 +0x00e5:  mov    %esp,%ebp
08543105 +0x00e7:  sub    $0x18,%esp
08543108 +0x00ea:  mov    0x8(%ebp),%eax
0854310b +0x00ed:  mov    %eax,(%esp)
0854310e +0x00f0:  call   0854361a <+0x5fc>
08543113 +0x00f5:  leave
08543114 +0x00f6:  ret
08543115 +0x00f7:  nop
08543116 +0x00f8:  push   %ebp
08543117 +0x00f9:  mov    %esp,%ebp
08543119 +0x00fb:  push   %esi
0854311a +0x00fc:  push   %ebx
0854311b +0x00fd:  sub    $0x30,%esp
0854311e +0x0100:  mov    0x8(%ebp),%eax
08543121 +0x0103:  mov    %eax,(%esp)
08543124 +0x0106:  call   08543738 <+0x71a>
08543129 +0x010b:  mov    %eax,%ebx
0854312b +0x010d:  lea    -0x28(%ebp),%eax
0854312e +0x0110:  mov    0x8(%ebp),%edx
08543131 +0x0113:  mov    %edx,0x4(%esp)
08543135 +0x0117:  mov    %eax,(%esp)
08543138 +0x011a:  call   0854370e <+0x6f0>
0854313d +0x011f:  sub    $0x4,%esp
08543140 +0x0122:  lea    -0x18(%ebp),%eax
08543143 +0x0125:  mov    0x8(%ebp),%edx
08543146 +0x0128:  mov    %edx,0x4(%esp)
0854314a +0x012c:  mov    %eax,(%esp)
0854314d +0x012f:  call   085436e4 <+0x6c6>
08543152 +0x0134:  sub    $0x4,%esp
08543155 +0x0137:  mov    %ebx,0xc(%esp)
08543159 +0x013b:  lea    -0x28(%ebp),%eax
0854315c +0x013e:  mov    %eax,0x8(%esp)
08543160 +0x0142:  lea    -0x18(%ebp),%eax
08543163 +0x0145:  mov    %eax,0x4(%esp)
08543167 +0x0149:  mov    0x8(%ebp),%eax
0854316a +0x014c:  mov    %eax,(%esp)
0854316d +0x014f:  call   08543774 <+0x756>
08543172 +0x0154:  jmp    0854318f <+0x171>
08543174 +0x0156:  mov    %edx,%ebx
08543176 +0x0158:  mov    %eax,%esi
08543178 +0x015a:  mov    0x8(%ebp),%eax
0854317b +0x015d:  mov    %eax,(%esp)
0854317e +0x0160:  call   08543664 <+0x646>
08543183 +0x0165:  mov    %esi,%eax
08543185 +0x0167:  mov    %ebx,%edx
08543187 +0x0169:  mov    %eax,(%esp)
0854318a +0x016c:  call   08ae3750 <_Unwind_Resume>
0854318f +0x0171:  mov    0x8(%ebp),%eax
08543192 +0x0174:  mov    %eax,(%esp)
08543195 +0x0177:  call   08543664 <+0x646>
0854319a +0x017c:  lea    -0x8(%ebp),%esp
0854319d +0x017f:  add    $0x0,%esp
085431a0 +0x0182:  pop    %ebx
085431a1 +0x0183:  pop    %esi
085431a2 +0x0184:  pop    %ebp
085431a3 +0x0185:  ret
085431a4 +0x0186:  push   %ebp
085431a5 +0x0187:  mov    %esp,%ebp
085431a7 +0x0189:  sub    $0x18,%esp
085431aa +0x018c:  mov    0xc(%ebp),%eax
085431ad +0x018f:  mov    %eax,(%esp)
085431b0 +0x0192:  call   0854377c <+0x75e>
085431b5 +0x0197:  mov    0x8(%ebp),%edx
085431b8 +0x019a:  mov    %eax,0x4(%esp)
085431bc +0x019e:  mov    %edx,(%esp)
085431bf +0x01a1:  call   08543784 <+0x766>
085431c4 +0x01a6:  leave
085431c5 +0x01a7:  ret
085431c6 +0x01a8:  push   %ebp
085431c7 +0x01a9:  mov    %esp,%ebp
085431c9 +0x01ab:  sub    $0x18,%esp
085431cc +0x01ae:  mov    0x8(%ebp),%eax
085431cf +0x01b1:  mov    %eax,(%esp)
085431d2 +0x01b4:  call   085437ba <+0x79c>
085431d7 +0x01b9:  leave
085431d8 +0x01ba:  ret
085431d9 +0x01bb:  nop
085431da +0x01bc:  push   %ebp
085431db +0x01bd:  mov    %esp,%ebp
085431dd +0x01bf:  push   %esi
085431de +0x01c0:  push   %ebx
085431df +0x01c1:  sub    $0x10,%esp
085431e2 +0x01c4:  mov    0x8(%ebp),%eax
085431e5 +0x01c7:  mov    %eax,(%esp)
085431e8 +0x01ca:  call   084f41f8 <_GLOBAL__I__Z7getUserj+0xb1aa>  ; global constructors keyed to getUser(unsigned int)+0xb1aa
085431ed +0x01cf:  mov    0x8(%ebp),%edx
085431f0 +0x01d2:  mov    0x4(%edx),%ecx
085431f3 +0x01d5:  mov    0x8(%ebp),%edx
085431f6 +0x01d8:  mov    (%edx),%edx
085431f8 +0x01da:  mov    %eax,0x8(%esp)
085431fc +0x01de:  mov    %ecx,0x4(%esp)
08543200 +0x01e2:  mov    %edx,(%esp)
08543203 +0x01e5:  call   084f426b <_GLOBAL__I__Z7getUserj+0xb21d>  ; global constructors keyed to getUser(unsigned int)+0xb21d
08543208 +0x01ea:  jmp    08543225 <+0x207>
0854320a +0x01ec:  mov    %edx,%ebx
0854320c +0x01ee:  mov    %eax,%esi
0854320e +0x01f0:  mov    0x8(%ebp),%eax
08543211 +0x01f3:  mov    %eax,(%esp)
08543214 +0x01f6:  call   085437ce <+0x7b0>
08543219 +0x01fb:  mov    %esi,%eax
0854321b +0x01fd:  mov    %ebx,%edx
0854321d +0x01ff:  mov    %eax,(%esp)
08543220 +0x0202:  call   08ae3750 <_Unwind_Resume>
08543225 +0x0207:  mov    0x8(%ebp),%eax
08543228 +0x020a:  mov    %eax,(%esp)
0854322b +0x020d:  call   085437ce <+0x7b0>
08543230 +0x0212:  add    $0x10,%esp
08543233 +0x0215:  pop    %ebx
08543234 +0x0216:  pop    %esi
08543235 +0x0217:  pop    %ebp
08543236 +0x0218:  ret
08543237 +0x0219:  nop
08543238 +0x021a:  push   %ebp
08543239 +0x021b:  mov    %esp,%ebp
0854323b +0x021d:  sub    $0x18,%esp
0854323e +0x0220:  mov    0x8(%ebp),%eax
08543241 +0x0223:  mov    (%eax),%eax
08543243 +0x0225:  mov    %eax,(%esp)
08543246 +0x0228:  call   08543836 <+0x818>
0854324b +0x022d:  leave
0854324c +0x022e:  ret
0854324d +0x022f:  nop
0854324e +0x0230:  push   %ebp
0854324f +0x0231:  mov    %esp,%ebp
08543251 +0x0233:  push   %ebx
08543252 +0x0234:  sub    $0x14,%esp
08543255 +0x0237:  mov    0x8(%ebp),%ebx
08543258 +0x023a:  mov    0xc(%ebp),%eax
0854325b +0x023d:  mov    %eax,0x4(%esp)
0854325f +0x0241:  mov    %ebx,(%esp)
08543262 +0x0244:  call   085438a0 <+0x882>
08543267 +0x0249:  sub    $0x4,%esp
0854326a +0x024c:  mov    %ebx,%eax
0854326c +0x024e:  mov    -0x4(%ebp),%ebx
0854326f +0x0251:  leave
08543270 +0x0252:  ret    $0x4
08543273 +0x0255:  nop
08543274 +0x0256:  push   %ebp
08543275 +0x0257:  mov    %esp,%ebp
08543277 +0x0259:  push   %ebx
08543278 +0x025a:  sub    $0x14,%esp
0854327b +0x025d:  mov    0x8(%ebp),%ebx
0854327e +0x0260:  mov    0xc(%ebp),%eax
08543281 +0x0263:  mov    %eax,0x4(%esp)
08543285 +0x0267:  mov    %ebx,(%esp)
08543288 +0x026a:  call   085438c6 <+0x8a8>
0854328d +0x026f:  sub    $0x4,%esp
08543290 +0x0272:  mov    %ebx,%eax
08543292 +0x0274:  mov    -0x4(%ebp),%ebx
08543295 +0x0277:  leave
08543296 +0x0278:  ret    $0x4
08543299 +0x027b:  nop
0854329a +0x027c:  push   %ebp
0854329b +0x027d:  mov    %esp,%ebp
0854329d +0x027f:  mov    0x8(%ebp),%eax
085432a0 +0x0282:  mov    (%eax),%edx
085432a2 +0x0284:  mov    0xc(%ebp),%eax
085432a5 +0x0287:  mov    (%eax),%eax
085432a7 +0x0289:  cmp    %eax,%edx
085432a9 +0x028b:  setne  %al
085432ac +0x028e:  pop    %ebp
085432ad +0x028f:  ret
085432ae +0x0290:  push   %ebp
085432af +0x0291:  mov    %esp,%ebp
085432b1 +0x0293:  sub    $0x18,%esp
085432b4 +0x0296:  mov    0x8(%ebp),%eax
085432b7 +0x0299:  mov    (%eax),%eax
085432b9 +0x029b:  mov    %eax,(%esp)
085432bc +0x029e:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
085432c1 +0x02a3:  mov    0x8(%ebp),%edx
085432c4 +0x02a6:  mov    %eax,(%edx)
085432c6 +0x02a8:  mov    0x8(%ebp),%eax
085432c9 +0x02ab:  leave
085432ca +0x02ac:  ret
085432cb +0x02ad:  nop
085432cc +0x02ae:  push   %ebp
085432cd +0x02af:  mov    %esp,%ebp
085432cf +0x02b1:  mov    0x8(%ebp),%eax
085432d2 +0x02b4:  mov    (%eax),%eax
085432d4 +0x02b6:  add    $0x10,%eax
085432d7 +0x02b9:  pop    %ebp
085432d8 +0x02ba:  ret
085432d9 +0x02bb:  nop
085432da +0x02bc:  push   %ebp
085432db +0x02bd:  mov    %esp,%ebp
085432dd +0x02bf:  push   %ebx
085432de +0x02c0:  sub    $0x14,%esp
085432e1 +0x02c3:  mov    0x8(%ebp),%ebx
085432e4 +0x02c6:  mov    0xc(%ebp),%eax
085432e7 +0x02c9:  mov    %eax,0x4(%esp)
085432eb +0x02cd:  mov    %ebx,(%esp)
085432ee +0x02d0:  call   085438ec <+0x8ce>
085432f3 +0x02d5:  sub    $0x4,%esp
085432f6 +0x02d8:  mov    %ebx,%eax
085432f8 +0x02da:  mov    -0x4(%ebp),%ebx
085432fb +0x02dd:  leave
085432fc +0x02de:  ret    $0x4
085432ff +0x02e1:  nop
08543300 +0x02e2:  push   %ebp
08543301 +0x02e3:  mov    %esp,%ebp
08543303 +0x02e5:  push   %ebx
08543304 +0x02e6:  sub    $0x14,%esp
08543307 +0x02e9:  mov    0x8(%ebp),%ebx
0854330a +0x02ec:  mov    0xc(%ebp),%eax
0854330d +0x02ef:  mov    %eax,0x4(%esp)
08543311 +0x02f3:  mov    %ebx,(%esp)
08543314 +0x02f6:  call   08543912 <+0x8f4>
08543319 +0x02fb:  sub    $0x4,%esp
0854331c +0x02fe:  mov    %ebx,%eax
0854331e +0x0300:  mov    -0x4(%ebp),%ebx
08543321 +0x0303:  leave
08543322 +0x0304:  ret    $0x4
08543325 +0x0307:  nop
08543326 +0x0308:  push   %ebp
08543327 +0x0309:  mov    %esp,%ebp
08543329 +0x030b:  mov    0x8(%ebp),%eax
0854332c +0x030e:  mov    (%eax),%edx
0854332e +0x0310:  mov    0xc(%ebp),%eax
08543331 +0x0313:  mov    (%eax),%eax
08543333 +0x0315:  cmp    %eax,%edx
08543335 +0x0317:  setne  %al
08543338 +0x031a:  pop    %ebp
08543339 +0x031b:  ret
0854333a +0x031c:  push   %ebp
0854333b +0x031d:  mov    %esp,%ebp
0854333d +0x031f:  sub    $0x18,%esp
08543340 +0x0322:  mov    0x8(%ebp),%eax
08543343 +0x0325:  mov    (%eax),%eax
08543345 +0x0327:  mov    %eax,(%esp)
08543348 +0x032a:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
0854334d +0x032f:  mov    0x8(%ebp),%edx
08543350 +0x0332:  mov    %eax,(%edx)
08543352 +0x0334:  mov    0x8(%ebp),%eax
08543355 +0x0337:  leave
08543356 +0x0338:  ret
08543357 +0x0339:  nop
08543358 +0x033a:  push   %ebp
08543359 +0x033b:  mov    %esp,%ebp
0854335b +0x033d:  mov    0x8(%ebp),%eax
0854335e +0x0340:  mov    (%eax),%eax
08543360 +0x0342:  add    $0x10,%eax
08543363 +0x0345:  pop    %ebp
08543364 +0x0346:  ret
08543365 +0x0347:  nop
08543366 +0x0348:  push   %ebp
08543367 +0x0349:  mov    %esp,%ebp
08543369 +0x034b:  sub    $0x18,%esp
0854336c +0x034e:  mov    0x8(%ebp),%eax
0854336f +0x0351:  mov    %eax,(%esp)
08543372 +0x0354:  call   08543938 <+0x91a>
08543377 +0x0359:  leave
08543378 +0x035a:  ret
08543379 +0x035b:  nop
0854337a +0x035c:  push   %ebp
0854337b +0x035d:  mov    %esp,%ebp
0854337d +0x035f:  sub    $0x18,%esp
08543380 +0x0362:  mov    0x8(%ebp),%eax
08543383 +0x0365:  mov    (%eax),%eax
08543385 +0x0367:  mov    %eax,0x4(%esp)
08543389 +0x036b:  mov    0x8(%ebp),%eax
0854338c +0x036e:  mov    %eax,(%esp)
0854338f +0x0371:  call   085439ae <+0x990>
08543394 +0x0376:  leave
08543395 +0x0377:  ret
08543396 +0x0378:  push   %ebp
08543397 +0x0379:  mov    %esp,%ebp
08543399 +0x037b:  sub    $0x18,%esp
0854339c +0x037e:  mov    0x8(%ebp),%eax
0854339f +0x0381:  mov    %eax,(%esp)
085433a2 +0x0384:  call   085439e4 <+0x9c6>
085433a7 +0x0389:  leave
085433a8 +0x038a:  ret
085433a9 +0x038b:  nop
085433aa +0x038c:  push   %ebp
085433ab +0x038d:  mov    %esp,%ebp
085433ad +0x038f:  sub    $0x18,%esp
085433b0 +0x0392:  mov    0x8(%ebp),%eax
085433b3 +0x0395:  mov    %eax,(%esp)
085433b6 +0x0398:  call   08543a04 <+0x9e6>
085433bb +0x039d:  leave
085433bc +0x039e:  ret
085433bd +0x039f:  nop
085433be +0x03a0:  push   %ebp
085433bf +0x03a1:  mov    %esp,%ebp
085433c1 +0x03a3:  push   %ebx
085433c2 +0x03a4:  sub    $0x14,%esp
085433c5 +0x03a7:  mov    0x8(%ebp),%ebx
085433c8 +0x03aa:  mov    0xc(%ebp),%eax
085433cb +0x03ad:  mov    0x10(%ebp),%edx
085433ce +0x03b0:  mov    %edx,0x8(%esp)
085433d2 +0x03b4:  mov    %eax,0x4(%esp)
085433d6 +0x03b8:  mov    %ebx,(%esp)
085433d9 +0x03bb:  call   08543a4e <+0xa30>
085433de +0x03c0:  sub    $0x4,%esp
085433e1 +0x03c3:  mov    %ebx,%eax
085433e3 +0x03c5:  mov    -0x4(%ebp),%ebx
085433e6 +0x03c8:  leave
085433e7 +0x03c9:  ret    $0x4
085433ea +0x03cc:  push   %ebp
085433eb +0x03cd:  mov    %esp,%ebp
085433ed +0x03cf:  mov    0x8(%ebp),%eax
085433f0 +0x03d2:  mov    (%eax),%edx
085433f2 +0x03d4:  mov    0xc(%ebp),%eax
085433f5 +0x03d7:  mov    (%eax),%eax
085433f7 +0x03d9:  cmp    %eax,%edx
085433f9 +0x03db:  sete   %al
085433fc +0x03de:  pop    %ebp
085433fd +0x03df:  ret
085433fe +0x03e0:  push   %ebp
085433ff +0x03e1:  mov    %esp,%ebp
08543401 +0x03e3:  sub    $0x18,%esp
08543404 +0x03e6:  mov    0x8(%ebp),%eax
08543407 +0x03e9:  mov    %eax,(%esp)
0854340a +0x03ec:  call   08543b0c <+0xaee>
0854340f +0x03f1:  leave
08543410 +0x03f2:  ret
08543411 +0x03f3:  push   %ebp
08543412 +0x03f4:  mov    %esp,%ebp
08543414 +0x03f6:  push   %esi
08543415 +0x03f7:  push   %ebx
08543416 +0x03f8:  sub    $0x10,%esp
08543419 +0x03fb:  mov    0x8(%ebp),%esi
0854341c +0x03fe:  mov    0x10(%ebp),%eax
0854341f +0x0401:  mov    %eax,(%esp)
08543422 +0x0404:  call   08543b3f <+0xb21>
08543427 +0x0409:  mov    %eax,%ebx
08543429 +0x040b:  mov    0xc(%ebp),%eax
0854342c +0x040e:  mov    %eax,(%esp)
0854342f +0x0411:  call   08138740 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4347>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4347
08543434 +0x0416:  mov    %ebx,0x8(%esp)
08543438 +0x041a:  mov    %eax,0x4(%esp)
0854343c +0x041e:  mov    %esi,(%esp)
0854343f +0x0421:  call   08543b48 <+0xb2a>
08543444 +0x0426:  mov    %esi,%eax
08543446 +0x0428:  add    $0x10,%esp
08543449 +0x042b:  pop    %ebx
0854344a +0x042c:  pop    %esi
0854344b +0x042d:  pop    %ebp
0854344c +0x042e:  ret    $0x4
0854344f +0x0431:  nop
08543450 +0x0432:  push   %ebp
08543451 +0x0433:  mov    %esp,%ebp
08543453 +0x0435:  sub    $0x18,%esp
08543456 +0x0438:  mov    0xc(%ebp),%eax
08543459 +0x043b:  mov    %eax,(%esp)
0854345c +0x043e:  call   0807f2d7 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3a7>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a7
08543461 +0x0443:  movzbl (%eax),%edx
08543464 +0x0446:  mov    0x8(%ebp),%eax
08543467 +0x0449:  mov    %dl,(%eax)
08543469 +0x044b:  mov    0xc(%ebp),%eax
0854346c +0x044e:  add    $0x4,%eax
0854346f +0x0451:  mov    %eax,(%esp)
08543472 +0x0454:  call   08543b7c <+0xb5e>
08543477 +0x0459:  mov    0x8(%ebp),%ecx
0854347a +0x045c:  mov    0x4(%eax),%edx
0854347d +0x045f:  mov    (%eax),%eax
0854347f +0x0461:  mov    %eax,0x4(%ecx)
08543482 +0x0464:  mov    %edx,0x8(%ecx)
08543485 +0x0467:  leave
08543486 +0x0468:  ret
08543487 +0x0469:  nop
08543488 +0x046a:  push   %ebp
08543489 +0x046b:  mov    %esp,%ebp
0854348b +0x046d:  push   %ebx
0854348c +0x046e:  sub    $0x14,%esp
0854348f +0x0471:  mov    0x8(%ebp),%ebx
08543492 +0x0474:  mov    0xc(%ebp),%eax
08543495 +0x0477:  mov    0x10(%ebp),%edx
08543498 +0x047a:  mov    %edx,0x8(%esp)
0854349c +0x047e:  mov    %eax,0x4(%esp)
085434a0 +0x0482:  mov    %ebx,(%esp)
085434a3 +0x0485:  call   08543b84 <+0xb66>
085434a8 +0x048a:  sub    $0x4,%esp
085434ab +0x048d:  mov    %ebx,%eax
085434ad +0x048f:  mov    -0x4(%ebp),%ebx
085434b0 +0x0492:  leave
085434b1 +0x0493:  ret    $0x4
085434b4 +0x0496:  push   %ebp
085434b5 +0x0497:  mov    %esp,%ebp
085434b7 +0x0499:  push   %ebx
085434b8 +0x049a:  sub    $0x14,%esp
085434bb +0x049d:  mov    0x8(%ebp),%ebx
085434be +0x04a0:  mov    0xc(%ebp),%eax
085434c1 +0x04a3:  mov    0x10(%ebp),%edx
085434c4 +0x04a6:  mov    %edx,0x8(%esp)
085434c8 +0x04aa:  mov    %eax,0x4(%esp)
085434cc +0x04ae:  mov    %ebx,(%esp)
085434cf +0x04b1:  call   08543d54 <+0xd36>
085434d4 +0x04b6:  sub    $0x4,%esp
085434d7 +0x04b9:  mov    %ebx,%eax
085434d9 +0x04bb:  mov    -0x4(%ebp),%ebx
085434dc +0x04be:  leave
085434dd +0x04bf:  ret    $0x4
085434e0 +0x04c2:  push   %ebp
085434e1 +0x04c3:  mov    %esp,%ebp
085434e3 +0x04c5:  mov    0x8(%ebp),%eax
085434e6 +0x04c8:  mov    (%eax),%edx
085434e8 +0x04ca:  mov    0xc(%ebp),%eax
085434eb +0x04cd:  mov    (%eax),%eax
085434ed +0x04cf:  cmp    %eax,%edx
085434ef +0x04d1:  sete   %al
085434f2 +0x04d4:  pop    %ebp
085434f3 +0x04d5:  ret
085434f4 +0x04d6:  push   %ebp
085434f5 +0x04d7:  mov    %esp,%ebp
085434f7 +0x04d9:  mov    0x8(%ebp),%eax
085434fa +0x04dc:  mov    (%eax),%eax
085434fc +0x04de:  lea    0x4(%eax),%edx
085434ff +0x04e1:  mov    0x8(%ebp),%eax
08543502 +0x04e4:  mov    %edx,(%eax)
08543504 +0x04e6:  mov    0x8(%ebp),%eax
08543507 +0x04e9:  pop    %ebp
08543508 +0x04ea:  ret
08543509 +0x04eb:  nop
0854350a +0x04ec:  push   %ebp
0854350b +0x04ed:  mov    %esp,%ebp
0854350d +0x04ef:  sub    $0x18,%esp
08543510 +0x04f2:  mov    0x8(%ebp),%eax
08543513 +0x04f5:  mov    0xc(%ebp),%edx
08543516 +0x04f8:  mov    %edx,0x4(%esp)
0854351a +0x04fc:  mov    %eax,(%esp)
0854351d +0x04ff:  call   08543e12 <+0xdf4>
08543522 +0x0504:  leave
08543523 +0x0505:  ret
08543524 +0x0506:  push   %ebp
08543525 +0x0507:  mov    %esp,%ebp
08543527 +0x0509:  push   %ebx
08543528 +0x050a:  sub    $0x14,%esp
0854352b +0x050d:  mov    0x8(%ebp),%ebx
0854352e +0x0510:  mov    0xc(%ebp),%eax
08543531 +0x0513:  movl   $0x4,0x8(%esp)
08543539 +0x051b:  mov    %eax,0x4(%esp)
0854353d +0x051f:  mov    %ebx,(%esp)
08543540 +0x0522:  call   0807d880 <_init+0x178>
08543545 +0x0527:  mov    0xc(%ebp),%eax
08543548 +0x052a:  mov    (%eax),%eax
0854354a +0x052c:  mov    %eax,(%esp)
0854354d +0x052f:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08543552 +0x0534:  mov    0xc(%ebp),%edx
08543555 +0x0537:  mov    %eax,(%edx)
08543557 +0x0539:  mov    %ebx,%eax
08543559 +0x053b:  add    $0x14,%esp
0854355c +0x053e:  pop    %ebx
0854355d +0x053f:  pop    %ebp
0854355e +0x0540:  ret    $0x4
08543561 +0x0543:  nop
08543562 +0x0544:  push   %ebp
08543563 +0x0545:  mov    %esp,%ebp
08543565 +0x0547:  sub    $0x18,%esp
08543568 +0x054a:  mov    0x8(%ebp),%eax
0854356b +0x054d:  mov    0xc(%ebp),%edx
0854356e +0x0550:  mov    %edx,0x4(%esp)
08543572 +0x0554:  mov    %eax,(%esp)
08543575 +0x0557:  call   08543e6c <+0xe4e>
0854357a +0x055c:  leave
0854357b +0x055d:  ret
0854357c +0x055e:  push   %ebp
0854357d +0x055f:  mov    %esp,%ebp
0854357f +0x0561:  sub    $0x18,%esp
08543582 +0x0564:  mov    0x8(%ebp),%eax
08543585 +0x0567:  mov    %eax,(%esp)
08543588 +0x056a:  call   08543eae <+0xe90>
0854358d +0x056f:  leave
0854358e +0x0570:  ret
0854358f +0x0571:  nop
08543590 +0x0572:  push   %ebp
08543591 +0x0573:  mov    %esp,%ebp
08543593 +0x0575:  sub    $0x18,%esp
08543596 +0x0578:  mov    0x8(%ebp),%eax
08543599 +0x057b:  mov    %eax,(%esp)
0854359c +0x057e:  call   08543efe <+0xee0>
085435a1 +0x0583:  leave
085435a2 +0x0584:  ret
085435a3 +0x0585:  nop
085435a4 +0x0586:  push   %ebp
085435a5 +0x0587:  mov    %esp,%ebp
085435a7 +0x0589:  sub    $0x28,%esp
085435aa +0x058c:  jmp    085435ec <+0x5ce>
085435ac +0x058e:  mov    0xc(%ebp),%eax
085435af +0x0591:  mov    %eax,(%esp)
085435b2 +0x0594:  call   08543f03 <+0xee5>
085435b7 +0x0599:  mov    %eax,0x4(%esp)
085435bb +0x059d:  mov    0x8(%ebp),%eax
085435be +0x05a0:  mov    %eax,(%esp)
085435c1 +0x05a3:  call   085435a4 <+0x586>
085435c6 +0x05a8:  mov    0xc(%ebp),%eax
085435c9 +0x05ab:  mov    %eax,(%esp)
085435cc +0x05ae:  call   08543f0e <+0xef0>
085435d1 +0x05b3:  mov    %eax,-0xc(%ebp)
085435d4 +0x05b6:  mov    0xc(%ebp),%eax
085435d7 +0x05b9:  mov    %eax,0x4(%esp)
085435db +0x05bd:  mov    0x8(%ebp),%eax
085435de +0x05c0:  mov    %eax,(%esp)
085435e1 +0x05c3:  call   08543f1a <+0xefc>
085435e6 +0x05c8:  mov    -0xc(%ebp),%eax
085435e9 +0x05cb:  mov    %eax,0xc(%ebp)
085435ec +0x05ce:  cmpl   $0x0,0xc(%ebp)
085435f0 +0x05d2:  setne  %al
085435f3 +0x05d5:  test   %al,%al
085435f5 +0x05d7:  jne    085435ac <+0x58e>
085435f7 +0x05d9:  leave
085435f8 +0x05da:  ret
085435f9 +0x05db:  nop
085435fa +0x05dc:  push   %ebp
085435fb +0x05dd:  mov    %esp,%ebp
085435fd +0x05df:  mov    0x8(%ebp),%eax
08543600 +0x05e2:  mov    0x8(%eax),%eax
08543603 +0x05e5:  pop    %ebp
08543604 +0x05e6:  ret
08543605 +0x05e7:  nop
08543606 +0x05e8:  push   %ebp
08543607 +0x05e9:  mov    %esp,%ebp
08543609 +0x05eb:  sub    $0x18,%esp
0854360c +0x05ee:  mov    0x8(%ebp),%eax
0854360f +0x05f1:  mov    %eax,(%esp)
08543612 +0x05f4:  call   080e4fc6 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x2ec>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x2ec
08543617 +0x05f9:  leave
08543618 +0x05fa:  ret
08543619 +0x05fb:  nop
0854361a +0x05fc:  push   %ebp
0854361b +0x05fd:  mov    %esp,%ebp
0854361d +0x05ff:  push   %esi
0854361e +0x0600:  push   %ebx
0854361f +0x0601:  sub    $0x10,%esp
08543622 +0x0604:  mov    0x8(%ebp),%eax
08543625 +0x0607:  mov    %eax,(%esp)
08543628 +0x060a:  call   08543f4e <+0xf30>
0854362d +0x060f:  movl   $0x0,0x4(%esp)
08543635 +0x0617:  mov    0x8(%ebp),%eax
08543638 +0x061a:  mov    %eax,(%esp)
0854363b +0x061d:  call   08543f90 <+0xf72>
08543640 +0x0622:  jmp    0854365d <+0x63f>
08543642 +0x0624:  mov    %edx,%ebx
08543644 +0x0626:  mov    %eax,%esi
08543646 +0x0628:  mov    0x8(%ebp),%eax
08543649 +0x062b:  mov    %eax,(%esp)
0854364c +0x062e:  call   08543606 <+0x5e8>
08543651 +0x0633:  mov    %esi,%eax
08543653 +0x0635:  mov    %ebx,%edx
08543655 +0x0637:  mov    %eax,(%esp)
08543658 +0x063a:  call   08ae3750 <_Unwind_Resume>
0854365d +0x063f:  add    $0x10,%esp
08543660 +0x0642:  pop    %ebx
08543661 +0x0643:  pop    %esi
08543662 +0x0644:  pop    %ebp
08543663 +0x0645:  ret
08543664 +0x0646:  push   %ebp
08543665 +0x0647:  mov    %esp,%ebp
08543667 +0x0649:  push   %esi
08543668 +0x064a:  push   %ebx
08543669 +0x064b:  sub    $0x10,%esp
0854366c +0x064e:  mov    0x8(%ebp),%eax
0854366f +0x0651:  mov    (%eax),%eax
08543671 +0x0653:  test   %eax,%eax
08543673 +0x0655:  je     085436d2 <+0x6b4>
08543675 +0x0657:  mov    0x8(%ebp),%eax
08543678 +0x065a:  mov    0x24(%eax),%eax
0854367b +0x065d:  lea    0x4(%eax),%edx
0854367e +0x0660:  mov    0x8(%ebp),%eax
08543681 +0x0663:  mov    0x14(%eax),%eax
08543684 +0x0666:  mov    %edx,0x8(%esp)
08543688 +0x066a:  mov    %eax,0x4(%esp)
0854368c +0x066e:  mov    0x8(%ebp),%eax
0854368f +0x0671:  mov    %eax,(%esp)
08543692 +0x0674:  call   085440fc <+0x10de>
08543697 +0x0679:  mov    0x8(%ebp),%eax
0854369a +0x067c:  mov    0x4(%eax),%edx
0854369d +0x067f:  mov    0x8(%ebp),%eax
085436a0 +0x0682:  mov    (%eax),%eax
085436a2 +0x0684:  mov    %edx,0x8(%esp)
085436a6 +0x0688:  mov    %eax,0x4(%esp)
085436aa +0x068c:  mov    0x8(%ebp),%eax
085436ad +0x068f:  mov    %eax,(%esp)
085436b0 +0x0692:  call   08544132 <+0x1114>
085436b5 +0x0697:  jmp    085436d2 <+0x6b4>
085436b7 +0x0699:  mov    %edx,%ebx
085436b9 +0x069b:  mov    %eax,%esi
085436bb +0x069d:  mov    0x8(%ebp),%eax
085436be +0x06a0:  mov    %eax,(%esp)
085436c1 +0x06a3:  call   08543606 <+0x5e8>
085436c6 +0x06a8:  mov    %esi,%eax
085436c8 +0x06aa:  mov    %ebx,%edx
085436ca +0x06ac:  mov    %eax,(%esp)
085436cd +0x06af:  call   08ae3750 <_Unwind_Resume>
085436d2 +0x06b4:  mov    0x8(%ebp),%eax
085436d5 +0x06b7:  mov    %eax,(%esp)
085436d8 +0x06ba:  call   08543606 <+0x5e8>
085436dd +0x06bf:  add    $0x10,%esp
085436e0 +0x06c2:  pop    %ebx
085436e1 +0x06c3:  pop    %esi
085436e2 +0x06c4:  pop    %ebp
085436e3 +0x06c5:  ret
085436e4 +0x06c6:  push   %ebp
085436e5 +0x06c7:  mov    %esp,%ebp
085436e7 +0x06c9:  push   %ebx
085436e8 +0x06ca:  sub    $0x14,%esp
085436eb +0x06cd:  mov    0x8(%ebp),%ebx
085436ee +0x06d0:  mov    %ebx,%eax
085436f0 +0x06d2:  mov    0xc(%ebp),%edx
085436f3 +0x06d5:  add    $0x8,%edx
085436f6 +0x06d8:  mov    %edx,0x4(%esp)
085436fa +0x06dc:  mov    %eax,(%esp)
085436fd +0x06df:  call   08543740 <+0x722>
08543702 +0x06e4:  mov    %ebx,%eax
08543704 +0x06e6:  mov    %ebx,%eax
08543706 +0x06e8:  add    $0x14,%esp
08543709 +0x06eb:  pop    %ebx
0854370a +0x06ec:  pop    %ebp
0854370b +0x06ed:  ret    $0x4
0854370e +0x06f0:  push   %ebp
0854370f +0x06f1:  mov    %esp,%ebp
08543711 +0x06f3:  push   %ebx
08543712 +0x06f4:  sub    $0x14,%esp
08543715 +0x06f7:  mov    0x8(%ebp),%ebx
08543718 +0x06fa:  mov    %ebx,%eax
0854371a +0x06fc:  mov    0xc(%ebp),%edx
0854371d +0x06ff:  add    $0x18,%edx
08543720 +0x0702:  mov    %edx,0x4(%esp)
08543724 +0x0706:  mov    %eax,(%esp)
08543727 +0x0709:  call   08543740 <+0x722>
0854372c +0x070e:  mov    %ebx,%eax
0854372e +0x0710:  mov    %ebx,%eax
08543730 +0x0712:  add    $0x14,%esp
08543733 +0x0715:  pop    %ebx
08543734 +0x0716:  pop    %ebp
08543735 +0x0717:  ret    $0x4
08543738 +0x071a:  push   %ebp
08543739 +0x071b:  mov    %esp,%ebp
0854373b +0x071d:  mov    0x8(%ebp),%eax
0854373e +0x0720:  pop    %ebp
0854373f +0x0721:  ret
08543740 +0x0722:  push   %ebp
08543741 +0x0723:  mov    %esp,%ebp
08543743 +0x0725:  mov    0xc(%ebp),%eax
08543746 +0x0728:  mov    (%eax),%edx
08543748 +0x072a:  mov    0x8(%ebp),%eax
0854374b +0x072d:  mov    %edx,(%eax)
0854374d +0x072f:  mov    0xc(%ebp),%eax
08543750 +0x0732:  mov    0x4(%eax),%edx
08543753 +0x0735:  mov    0x8(%ebp),%eax
08543756 +0x0738:  mov    %edx,0x4(%eax)
08543759 +0x073b:  mov    0xc(%ebp),%eax
0854375c +0x073e:  mov    0x8(%eax),%edx
0854375f +0x0741:  mov    0x8(%ebp),%eax
08543762 +0x0744:  mov    %edx,0x8(%eax)
08543765 +0x0747:  mov    0xc(%ebp),%eax
08543768 +0x074a:  mov    0xc(%eax),%edx
0854376b +0x074d:  mov    0x8(%ebp),%eax
0854376e +0x0750:  mov    %edx,0xc(%eax)
08543771 +0x0753:  pop    %ebp
08543772 +0x0754:  ret
08543773 +0x0755:  nop
08543774 +0x0756:  push   %ebp
08543775 +0x0757:  mov    %esp,%ebp
08543777 +0x0759:  sub    $0x20,%esp
0854377a +0x075c:  leave
0854377b +0x075d:  ret
0854377c +0x075e:  push   %ebp
0854377d +0x075f:  mov    %esp,%ebp
0854377f +0x0761:  mov    0x8(%ebp),%eax
08543782 +0x0764:  pop    %ebp
08543783 +0x0765:  ret
08543784 +0x0766:  push   %ebp
08543785 +0x0767:  mov    %esp,%ebp
08543787 +0x0769:  sub    $0x18,%esp
0854378a +0x076c:  mov    0xc(%ebp),%eax
0854378d +0x076f:  mov    %eax,(%esp)
08543790 +0x0772:  call   08544173 <+0x1155>
08543795 +0x0777:  mov    0x8(%ebp),%edx
08543798 +0x077a:  mov    %eax,0x4(%esp)
0854379c +0x077e:  mov    %edx,(%esp)
0854379f +0x0781:  call   0854417c <+0x115e>
085437a4 +0x0786:  leave
085437a5 +0x0787:  ret
085437a6 +0x0788:  push   %ebp
085437a7 +0x0789:  mov    %esp,%ebp
085437a9 +0x078b:  sub    $0x18,%esp
085437ac +0x078e:  mov    0x8(%ebp),%eax
085437af +0x0791:  mov    %eax,(%esp)
085437b2 +0x0794:  call   08544268 <+0x124a>
085437b7 +0x0799:  leave
085437b8 +0x079a:  ret
085437b9 +0x079b:  nop
085437ba +0x079c:  push   %ebp
085437bb +0x079d:  mov    %esp,%ebp
085437bd +0x079f:  sub    $0x18,%esp
085437c0 +0x07a2:  mov    0x8(%ebp),%eax
085437c3 +0x07a5:  mov    %eax,(%esp)
085437c6 +0x07a8:  call   08544238 <+0x121a>
085437cb +0x07ad:  leave
085437cc +0x07ae:  ret
085437cd +0x07af:  nop
085437ce +0x07b0:  push   %ebp
085437cf +0x07b1:  mov    %esp,%ebp
085437d1 +0x07b3:  push   %esi
085437d2 +0x07b4:  push   %ebx
085437d3 +0x07b5:  sub    $0x10,%esp
085437d6 +0x07b8:  mov    0x8(%ebp),%eax
085437d9 +0x07bb:  mov    0x8(%eax),%eax
085437dc +0x07be:  mov    %eax,%edx
085437de +0x07c0:  mov    0x8(%ebp),%eax
085437e1 +0x07c3:  mov    (%eax),%eax
085437e3 +0x07c5:  mov    %edx,%ecx
085437e5 +0x07c7:  sub    %eax,%ecx
085437e7 +0x07c9:  mov    %ecx,%eax
085437e9 +0x07cb:  sar    $0x2,%eax
085437ec +0x07ce:  mov    %eax,%edx
085437ee +0x07d0:  mov    0x8(%ebp),%eax
085437f1 +0x07d3:  mov    (%eax),%eax
085437f3 +0x07d5:  mov    %edx,0x8(%esp)
085437f7 +0x07d9:  mov    %eax,0x4(%esp)
085437fb +0x07dd:  mov    0x8(%ebp),%eax
085437fe +0x07e0:  mov    %eax,(%esp)
08543801 +0x07e3:  call   084f4286 <_GLOBAL__I__Z7getUserj+0xb238>  ; global constructors keyed to getUser(unsigned int)+0xb238
08543806 +0x07e8:  jmp    08543823 <+0x805>
08543808 +0x07ea:  mov    %edx,%ebx
0854380a +0x07ec:  mov    %eax,%esi
0854380c +0x07ee:  mov    0x8(%ebp),%eax
0854380f +0x07f1:  mov    %eax,(%esp)
08543812 +0x07f4:  call   085437a6 <+0x788>
08543817 +0x07f9:  mov    %esi,%eax
08543819 +0x07fb:  mov    %ebx,%edx
0854381b +0x07fd:  mov    %eax,(%esp)
0854381e +0x0800:  call   08ae3750 <_Unwind_Resume>
08543823 +0x0805:  mov    0x8(%ebp),%eax
08543826 +0x0808:  mov    %eax,(%esp)
08543829 +0x080b:  call   085437a6 <+0x788>
0854382e +0x0810:  add    $0x10,%esp
08543831 +0x0813:  pop    %ebx
08543832 +0x0814:  pop    %esi
08543833 +0x0815:  pop    %ebp
08543834 +0x0816:  ret
08543835 +0x0817:  nop
08543836 +0x0818:  push   %ebp
08543837 +0x0819:  mov    %esp,%ebp
08543839 +0x081b:  sub    $0x28,%esp
0854383c +0x081e:  jmp    0854385a <+0x83c>
0854383e +0x0820:  mov    0x8(%ebp),%eax
08543841 +0x0823:  mov    %eax,(%esp)
08543844 +0x0826:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08543849 +0x082b:  add    %eax,%eax
0854384b +0x082d:  mov    %eax,0x4(%esp)
0854384f +0x0831:  mov    0x8(%ebp),%eax
08543852 +0x0834:  mov    %eax,(%esp)
08543855 +0x0837:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0854385a +0x083c:  movl   $0x324,0x4(%esp)
08543862 +0x0844:  mov    0x8(%ebp),%eax
08543865 +0x0847:  mov    %eax,(%esp)
08543868 +0x084a:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0854386d +0x084f:  xor    $0x1,%eax
08543870 +0x0852:  test   %al,%al
08543872 +0x0854:  jne    0854383e <+0x820>
08543874 +0x0856:  mov    0x8(%ebp),%eax
08543877 +0x0859:  mov    0x8(%eax),%eax
0854387a +0x085c:  mov    %eax,%edx
0854387c +0x085e:  mov    0x8(%ebp),%eax
0854387f +0x0861:  mov    0xc(%eax),%eax
08543882 +0x0864:  lea    (%edx,%eax,1),%eax
08543885 +0x0867:  mov    %eax,-0xc(%ebp)
08543888 +0x086a:  movl   $0x324,0x4(%esp)
08543890 +0x0872:  mov    0x8(%ebp),%eax
08543893 +0x0875:  mov    %eax,(%esp)
08543896 +0x0878:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0854389b +0x087d:  mov    -0xc(%ebp),%eax
0854389e +0x0880:  leave
0854389f +0x0881:  ret
085438a0 +0x0882:  push   %ebp
085438a1 +0x0883:  mov    %esp,%ebp
085438a3 +0x0885:  push   %ebx
085438a4 +0x0886:  sub    $0x14,%esp
085438a7 +0x0889:  mov    0x8(%ebp),%ebx
085438aa +0x088c:  mov    0xc(%ebp),%eax
085438ad +0x088f:  mov    0xc(%eax),%eax
085438b0 +0x0892:  mov    %eax,0x4(%esp)
085438b4 +0x0896:  mov    %ebx,(%esp)
085438b7 +0x0899:  call   0854427c <+0x125e>
085438bc +0x089e:  mov    %ebx,%eax
085438be +0x08a0:  add    $0x14,%esp
085438c1 +0x08a3:  pop    %ebx
085438c2 +0x08a4:  pop    %ebp
085438c3 +0x08a5:  ret    $0x4
085438c6 +0x08a8:  push   %ebp
085438c7 +0x08a9:  mov    %esp,%ebp
085438c9 +0x08ab:  push   %ebx
085438ca +0x08ac:  sub    $0x14,%esp
085438cd +0x08af:  mov    0x8(%ebp),%ebx
085438d0 +0x08b2:  mov    0xc(%ebp),%eax
085438d3 +0x08b5:  add    $0x4,%eax
085438d6 +0x08b8:  mov    %eax,0x4(%esp)
085438da +0x08bc:  mov    %ebx,(%esp)
085438dd +0x08bf:  call   0854427c <+0x125e>
085438e2 +0x08c4:  mov    %ebx,%eax
085438e4 +0x08c6:  add    $0x14,%esp
085438e7 +0x08c9:  pop    %ebx
085438e8 +0x08ca:  pop    %ebp
085438e9 +0x08cb:  ret    $0x4
085438ec +0x08ce:  push   %ebp
085438ed +0x08cf:  mov    %esp,%ebp
085438ef +0x08d1:  push   %ebx
085438f0 +0x08d2:  sub    $0x14,%esp
085438f3 +0x08d5:  mov    0x8(%ebp),%ebx
085438f6 +0x08d8:  mov    0xc(%ebp),%eax
085438f9 +0x08db:  mov    0xc(%eax),%eax
085438fc +0x08de:  mov    %eax,0x4(%esp)
08543900 +0x08e2:  mov    %ebx,(%esp)
08543903 +0x08e5:  call   0854428a <+0x126c>
08543908 +0x08ea:  mov    %ebx,%eax
0854390a +0x08ec:  add    $0x14,%esp
0854390d +0x08ef:  pop    %ebx
0854390e +0x08f0:  pop    %ebp
0854390f +0x08f1:  ret    $0x4
08543912 +0x08f4:  push   %ebp
08543913 +0x08f5:  mov    %esp,%ebp
08543915 +0x08f7:  push   %ebx
08543916 +0x08f8:  sub    $0x14,%esp
08543919 +0x08fb:  mov    0x8(%ebp),%ebx
0854391c +0x08fe:  mov    0xc(%ebp),%eax
0854391f +0x0901:  add    $0x4,%eax
08543922 +0x0904:  mov    %eax,0x4(%esp)
08543926 +0x0908:  mov    %ebx,(%esp)
08543929 +0x090b:  call   0854428a <+0x126c>
0854392e +0x0910:  mov    %ebx,%eax
08543930 +0x0912:  add    $0x14,%esp
08543933 +0x0915:  pop    %ebx
08543934 +0x0916:  pop    %ebp
08543935 +0x0917:  ret    $0x4
08543938 +0x091a:  push   %ebp
08543939 +0x091b:  mov    %esp,%ebp
0854393b +0x091d:  push   %ebx
0854393c +0x091e:  sub    $0x14,%esp
0854393f +0x0921:  mov    0x8(%ebp),%eax
08543942 +0x0924:  mov    %eax,(%esp)
08543945 +0x0927:  call   085435fa <+0x5dc>
0854394a +0x092c:  mov    %eax,0x4(%esp)
0854394e +0x0930:  mov    0x8(%ebp),%eax
08543951 +0x0933:  mov    %eax,(%esp)
08543954 +0x0936:  call   085435a4 <+0x586>
08543959 +0x093b:  mov    0x8(%ebp),%eax
0854395c +0x093e:  mov    %eax,(%esp)
0854395f +0x0941:  call   085442a4 <+0x1286>
08543964 +0x0946:  mov    %eax,%ebx
08543966 +0x0948:  mov    0x8(%ebp),%eax
08543969 +0x094b:  mov    %eax,(%esp)
0854396c +0x094e:  call   08544298 <+0x127a>
08543971 +0x0953:  mov    %eax,(%ebx)
08543973 +0x0955:  mov    0x8(%ebp),%eax
08543976 +0x0958:  mov    %eax,(%esp)
08543979 +0x095b:  call   085442b0 <+0x1292>
0854397e +0x0960:  movl   $0x0,(%eax)
08543984 +0x0966:  mov    0x8(%ebp),%eax
08543987 +0x0969:  mov    %eax,(%esp)
0854398a +0x096c:  call   085442bc <+0x129e>
0854398f +0x0971:  mov    %eax,%ebx
08543991 +0x0973:  mov    0x8(%ebp),%eax
08543994 +0x0976:  mov    %eax,(%esp)
08543997 +0x0979:  call   08544298 <+0x127a>
0854399c +0x097e:  mov    %eax,(%ebx)
0854399e +0x0980:  mov    0x8(%ebp),%eax
085439a1 +0x0983:  movl   $0x0,0x14(%eax)
085439a8 +0x098a:  add    $0x14,%esp
085439ab +0x098d:  pop    %ebx
085439ac +0x098e:  pop    %ebp
085439ad +0x098f:  ret
085439ae +0x0990:  push   %ebp
085439af +0x0991:  mov    %esp,%ebp
085439b1 +0x0993:  sub    $0x18,%esp
085439b4 +0x0996:  mov    0x8(%ebp),%eax
085439b7 +0x0999:  mov    %eax,(%esp)
085439ba +0x099c:  call   084f41f8 <_GLOBAL__I__Z7getUserj+0xb1aa>  ; global constructors keyed to getUser(unsigned int)+0xb1aa
085439bf +0x09a1:  mov    0x8(%ebp),%edx
085439c2 +0x09a4:  mov    0x4(%edx),%edx
085439c5 +0x09a7:  mov    %eax,0x8(%esp)
085439c9 +0x09ab:  mov    %edx,0x4(%esp)
085439cd +0x09af:  mov    0xc(%ebp),%eax
085439d0 +0x09b2:  mov    %eax,(%esp)
085439d3 +0x09b5:  call   084f426b <_GLOBAL__I__Z7getUserj+0xb21d>  ; global constructors keyed to getUser(unsigned int)+0xb21d
085439d8 +0x09ba:  mov    0x8(%ebp),%eax
085439db +0x09bd:  mov    0xc(%ebp),%edx
085439de +0x09c0:  mov    %edx,0x4(%eax)
085439e1 +0x09c3:  leave
085439e2 +0x09c4:  ret
085439e3 +0x09c5:  nop
085439e4 +0x09c6:  push   %ebp
085439e5 +0x09c7:  mov    %esp,%ebp
085439e7 +0x09c9:  sub    $0x18,%esp
085439ea +0x09cc:  mov    0x8(%ebp),%eax
085439ed +0x09cf:  lea    0x8(%eax),%edx
085439f0 +0x09d2:  mov    0x8(%ebp),%eax
085439f3 +0x09d5:  add    $0x18,%eax
085439f6 +0x09d8:  mov    %edx,0x4(%esp)
085439fa +0x09dc:  mov    %eax,(%esp)
085439fd +0x09df:  call   085442c7 <+0x12a9>
08543a02 +0x09e4:  leave
08543a03 +0x09e5:  ret
08543a04 +0x09e6:  push   %ebp
08543a05 +0x09e7:  mov    %esp,%ebp
08543a07 +0x09e9:  sub    $0x18,%esp
08543a0a +0x09ec:  mov    0x8(%ebp),%eax
08543a0d +0x09ef:  mov    0x18(%eax),%edx
08543a10 +0x09f2:  mov    0x8(%ebp),%eax
08543a13 +0x09f5:  mov    0x1c(%eax),%eax
08543a16 +0x09f8:  cmp    %eax,%edx
08543a18 +0x09fa:  je     08543a40 <+0xa22>
08543a1a +0x09fc:  mov    0x8(%ebp),%eax
08543a1d +0x09ff:  mov    0x18(%eax),%eax
08543a20 +0x0a02:  lea    -0x1(%eax),%edx
08543a23 +0x0a05:  mov    0x8(%ebp),%eax
08543a26 +0x0a08:  mov    %edx,0x18(%eax)
08543a29 +0x0a0b:  mov    0x8(%ebp),%eax
08543a2c +0x0a0e:  mov    0x18(%eax),%edx
08543a2f +0x0a11:  mov    0x8(%ebp),%eax
08543a32 +0x0a14:  mov    %edx,0x4(%esp)
08543a36 +0x0a18:  mov    %eax,(%esp)
08543a39 +0x0a1b:  call   0807f4ea <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5ba>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5ba
08543a3e +0x0a20:  jmp    08543a4b <+0xa2d>
08543a40 +0x0a22:  mov    0x8(%ebp),%eax
08543a43 +0x0a25:  mov    %eax,(%esp)
08543a46 +0x0a28:  call   085442dc <+0x12be>
08543a4b +0x0a2d:  leave
08543a4c +0x0a2e:  ret
08543a4d +0x0a2f:  nop
08543a4e +0x0a30:  push   %ebp
08543a4f +0x0a31:  mov    %esp,%ebp
08543a51 +0x0a33:  push   %esi
08543a52 +0x0a34:  push   %ebx
08543a53 +0x0a35:  sub    $0x30,%esp
08543a56 +0x0a38:  mov    0x8(%ebp),%ebx
08543a59 +0x0a3b:  mov    0xc(%ebp),%eax
08543a5c +0x0a3e:  mov    %eax,(%esp)
08543a5f +0x0a41:  call   08544344 <+0x1326>
08543a64 +0x0a46:  mov    %eax,%esi
08543a66 +0x0a48:  mov    0xc(%ebp),%eax
08543a69 +0x0a4b:  mov    %eax,(%esp)
08543a6c +0x0a4e:  call   08544338 <+0x131a>
08543a71 +0x0a53:  lea    -0x10(%ebp),%edx
08543a74 +0x0a56:  mov    0x10(%ebp),%ecx
08543a77 +0x0a59:  mov    %ecx,0x10(%esp)
08543a7b +0x0a5d:  mov    %esi,0xc(%esp)
08543a7f +0x0a61:  mov    %eax,0x8(%esp)
08543a83 +0x0a65:  mov    0xc(%ebp),%eax
08543a86 +0x0a68:  mov    %eax,0x4(%esp)
08543a8a +0x0a6c:  mov    %edx,(%esp)
08543a8d +0x0a6f:  call   08544350 <+0x1332>
08543a92 +0x0a74:  sub    $0x4,%esp
08543a95 +0x0a77:  lea    -0xc(%ebp),%eax
08543a98 +0x0a7a:  mov    0xc(%ebp),%edx
08543a9b +0x0a7d:  mov    %edx,0x4(%esp)
08543a9f +0x0a81:  mov    %eax,(%esp)
08543aa2 +0x0a84:  call   08543912 <+0x8f4>
08543aa7 +0x0a89:  sub    $0x4,%esp
08543aaa +0x0a8c:  lea    -0xc(%ebp),%eax
08543aad +0x0a8f:  mov    %eax,0x4(%esp)
08543ab1 +0x0a93:  lea    -0x10(%ebp),%eax
08543ab4 +0x0a96:  mov    %eax,(%esp)
08543ab7 +0x0a99:  call   085433ea <+0x3cc>
08543abc +0x0a9e:  test   %al,%al
08543abe +0x0aa0:  jne    08543ae5 <+0xac7>
08543ac0 +0x0aa2:  mov    -0x10(%ebp),%eax
08543ac3 +0x0aa5:  mov    %eax,(%esp)
08543ac6 +0x0aa8:  call   085443cc <+0x13ae>
08543acb +0x0aad:  mov    0xc(%ebp),%edx
08543ace +0x0ab0:  mov    %eax,0x8(%esp)
08543ad2 +0x0ab4:  mov    0x10(%ebp),%eax
08543ad5 +0x0ab7:  mov    %eax,0x4(%esp)
08543ad9 +0x0abb:  mov    %edx,(%esp)
08543adc +0x0abe:  call   08139ac8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x56cf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x56cf
08543ae1 +0x0ac3:  test   %al,%al
08543ae3 +0x0ac5:  je     08543af9 <+0xadb>
08543ae5 +0x0ac7:  mov    0xc(%ebp),%eax
08543ae8 +0x0aca:  mov    %eax,0x4(%esp)
08543aec +0x0ace:  mov    %ebx,(%esp)
08543aef +0x0ad1:  call   08543912 <+0x8f4>
08543af4 +0x0ad6:  sub    $0x4,%esp
08543af7 +0x0ad9:  jmp    08543afe <+0xae0>
08543af9 +0x0adb:  mov    -0x10(%ebp),%eax
08543afc +0x0ade:  mov    %eax,(%ebx)
08543afe +0x0ae0:  mov    %ebx,%eax
08543b00 +0x0ae2:  lea    -0x8(%ebp),%esp
08543b03 +0x0ae5:  add    $0x0,%esp
08543b06 +0x0ae8:  pop    %ebx
08543b07 +0x0ae9:  pop    %esi
08543b08 +0x0aea:  pop    %ebp
08543b09 +0x0aeb:  ret    $0x4
08543b0c +0x0aee:  push   %ebp
08543b0d +0x0aef:  mov    %esp,%ebp
08543b0f +0x0af1:  sub    $0x28,%esp
08543b12 +0x0af4:  lea    -0x18(%ebp),%eax
08543b15 +0x0af7:  mov    0x8(%ebp),%edx
08543b18 +0x0afa:  mov    %edx,0x4(%esp)
08543b1c +0x0afe:  mov    %eax,(%esp)
08543b1f +0x0b01:  call   0854370e <+0x6f0>
08543b24 +0x0b06:  sub    $0x4,%esp
08543b27 +0x0b09:  lea    -0x18(%ebp),%eax
08543b2a +0x0b0c:  mov    %eax,(%esp)
08543b2d +0x0b0f:  call   085443ee <+0x13d0>
08543b32 +0x0b14:  lea    -0x18(%ebp),%eax
08543b35 +0x0b17:  mov    %eax,(%esp)
08543b38 +0x0b1a:  call   08544438 <+0x141a>
08543b3d +0x0b1f:  leave
08543b3e +0x0b20:  ret
08543b3f +0x0b21:  push   %ebp
08543b40 +0x0b22:  mov    %esp,%ebp
08543b42 +0x0b24:  mov    0x8(%ebp),%eax
08543b45 +0x0b27:  pop    %ebp
08543b46 +0x0b28:  ret
08543b47 +0x0b29:  nop
08543b48 +0x0b2a:  push   %ebp
08543b49 +0x0b2b:  mov    %esp,%ebp
08543b4b +0x0b2d:  sub    $0x18,%esp
08543b4e +0x0b30:  mov    0xc(%ebp),%eax
08543b51 +0x0b33:  mov    %eax,(%esp)
08543b54 +0x0b36:  call   08138740 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4347>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4347
08543b59 +0x0b3b:  movzbl (%eax),%edx
08543b5c +0x0b3e:  mov    0x8(%ebp),%eax
08543b5f +0x0b41:  mov    %dl,(%eax)
08543b61 +0x0b43:  mov    0x10(%ebp),%eax
08543b64 +0x0b46:  mov    %eax,(%esp)
08543b67 +0x0b49:  call   08543b3f <+0xb21>
08543b6c +0x0b4e:  mov    0x8(%ebp),%ecx
08543b6f +0x0b51:  mov    0x4(%eax),%edx
08543b72 +0x0b54:  mov    (%eax),%eax
08543b74 +0x0b56:  mov    %eax,0x4(%ecx)
08543b77 +0x0b59:  mov    %edx,0x8(%ecx)
08543b7a +0x0b5c:  leave
08543b7b +0x0b5d:  ret
08543b7c +0x0b5e:  push   %ebp
08543b7d +0x0b5f:  mov    %esp,%ebp
08543b7f +0x0b61:  mov    0x8(%ebp),%eax
08543b82 +0x0b64:  pop    %ebp
08543b83 +0x0b65:  ret
08543b84 +0x0b66:  push   %ebp
08543b85 +0x0b67:  mov    %esp,%ebp
08543b87 +0x0b69:  push   %esi
08543b88 +0x0b6a:  push   %ebx
08543b89 +0x0b6b:  sub    $0x50,%esp
08543b8c +0x0b6e:  mov    0x8(%ebp),%ebx
08543b8f +0x0b71:  mov    0xc(%ebp),%eax
08543b92 +0x0b74:  mov    %eax,(%esp)
08543b95 +0x0b77:  call   085435fa <+0x5dc>
08543b9a +0x0b7c:  mov    %eax,-0x14(%ebp)
08543b9d +0x0b7f:  mov    0xc(%ebp),%eax
08543ba0 +0x0b82:  mov    %eax,(%esp)
08543ba3 +0x0b85:  call   08544298 <+0x127a>
08543ba8 +0x0b8a:  mov    %eax,-0x10(%ebp)
08543bab +0x0b8d:  movb   $0x1,-0x9(%ebp)
08543baf +0x0b91:  jmp    08543c0d <+0xbef>
08543bb1 +0x0b93:  mov    -0x14(%ebp),%eax
08543bb4 +0x0b96:  mov    %eax,-0x10(%ebp)
08543bb7 +0x0b99:  mov    -0x14(%ebp),%eax
08543bba +0x0b9c:  mov    %eax,(%esp)
08543bbd +0x0b9f:  call   0854444a <+0x142c>
08543bc2 +0x0ba4:  mov    %eax,%esi
08543bc4 +0x0ba6:  mov    0x10(%ebp),%eax
08543bc7 +0x0ba9:  mov    %eax,0x4(%esp)
08543bcb +0x0bad:  lea    -0x2d(%ebp),%eax
08543bce +0x0bb0:  mov    %eax,(%esp)
08543bd1 +0x0bb3:  call   08544442 <+0x1424>
08543bd6 +0x0bb8:  mov    0xc(%ebp),%edx
08543bd9 +0x0bbb:  mov    %esi,0x8(%esp)
08543bdd +0x0bbf:  mov    %eax,0x4(%esp)
08543be1 +0x0bc3:  mov    %edx,(%esp)
08543be4 +0x0bc6:  call   08139ac8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x56cf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x56cf
08543be9 +0x0bcb:  mov    %al,-0x9(%ebp)
08543bec +0x0bce:  cmpb   $0x0,-0x9(%ebp)
08543bf0 +0x0bd2:  je     08543bff <+0xbe1>
08543bf2 +0x0bd4:  mov    -0x14(%ebp),%eax
08543bf5 +0x0bd7:  mov    %eax,(%esp)
08543bf8 +0x0bda:  call   08543f0e <+0xef0>
08543bfd +0x0bdf:  jmp    08543c0a <+0xbec>
08543bff +0x0be1:  mov    -0x14(%ebp),%eax
08543c02 +0x0be4:  mov    %eax,(%esp)
08543c05 +0x0be7:  call   08543f03 <+0xee5>
08543c0a +0x0bec:  mov    %eax,-0x14(%ebp)
08543c0d +0x0bef:  cmpl   $0x0,-0x14(%ebp)
08543c11 +0x0bf3:  setne  %al
08543c14 +0x0bf6:  test   %al,%al
08543c16 +0x0bf8:  jne    08543bb1 <+0xb93>
08543c18 +0x0bfa:  mov    -0x10(%ebp),%eax
08543c1b +0x0bfd:  mov    %eax,0x4(%esp)
08543c1f +0x0c01:  lea    -0x34(%ebp),%eax
08543c22 +0x0c04:  mov    %eax,(%esp)
08543c25 +0x0c07:  call   0854427c <+0x125e>
08543c2a +0x0c0c:  cmpb   $0x0,-0x9(%ebp)
08543c2e +0x0c10:  je     08543caf <+0xc91>
08543c30 +0x0c12:  lea    -0x2c(%ebp),%eax
08543c33 +0x0c15:  mov    0xc(%ebp),%edx
08543c36 +0x0c18:  mov    %edx,0x4(%esp)
08543c3a +0x0c1c:  mov    %eax,(%esp)
08543c3d +0x0c1f:  call   085438a0 <+0x882>
08543c42 +0x0c24:  sub    $0x4,%esp
08543c45 +0x0c27:  lea    -0x2c(%ebp),%eax
08543c48 +0x0c2a:  mov    %eax,0x4(%esp)
08543c4c +0x0c2e:  lea    -0x34(%ebp),%eax
08543c4f +0x0c31:  mov    %eax,(%esp)
08543c52 +0x0c34:  call   085434e0 <+0x4c2>
08543c57 +0x0c39:  test   %al,%al
08543c59 +0x0c3b:  je     08543ca4 <+0xc86>
08543c5b +0x0c3d:  movb   $0x1,-0x25(%ebp)
08543c5f +0x0c41:  mov    -0x10(%ebp),%ecx
08543c62 +0x0c44:  mov    -0x14(%ebp),%edx
08543c65 +0x0c47:  lea    -0x24(%ebp),%eax
08543c68 +0x0c4a:  mov    0x10(%ebp),%esi
08543c6b +0x0c4d:  mov    %esi,0x10(%esp)
08543c6f +0x0c51:  mov    %ecx,0xc(%esp)
08543c73 +0x0c55:  mov    %edx,0x8(%esp)
08543c77 +0x0c59:  mov    0xc(%ebp),%edx
08543c7a +0x0c5c:  mov    %edx,0x4(%esp)
08543c7e +0x0c60:  mov    %eax,(%esp)
08543c81 +0x0c63:  call   0854446c <+0x144e>
08543c86 +0x0c68:  sub    $0x4,%esp
08543c89 +0x0c6b:  lea    -0x25(%ebp),%eax
08543c8c +0x0c6e:  mov    %eax,0x8(%esp)
08543c90 +0x0c72:  lea    -0x24(%ebp),%eax
08543c93 +0x0c75:  mov    %eax,0x4(%esp)
08543c97 +0x0c79:  mov    %ebx,(%esp)
08543c9a +0x0c7c:  call   08544534 <+0x1516>
08543c9f +0x0c81:  jmp    08543d45 <+0xd27>
08543ca4 +0x0c86:  lea    -0x34(%ebp),%eax
08543ca7 +0x0c89:  mov    %eax,(%esp)
08543caa +0x0c8c:  call   08544562 <+0x1544>
08543caf +0x0c91:  mov    0x10(%ebp),%eax
08543cb2 +0x0c94:  mov    %eax,0x4(%esp)
08543cb6 +0x0c98:  lea    -0x1e(%ebp),%eax
08543cb9 +0x0c9b:  mov    %eax,(%esp)
08543cbc +0x0c9e:  call   08544442 <+0x1424>
08543cc1 +0x0ca3:  mov    %eax,%esi
08543cc3 +0x0ca5:  mov    -0x34(%ebp),%eax
08543cc6 +0x0ca8:  mov    %eax,(%esp)
08543cc9 +0x0cab:  call   085443cc <+0x13ae>
08543cce +0x0cb0:  mov    0xc(%ebp),%edx
08543cd1 +0x0cb3:  mov    %esi,0x8(%esp)
08543cd5 +0x0cb7:  mov    %eax,0x4(%esp)
08543cd9 +0x0cbb:  mov    %edx,(%esp)
08543cdc +0x0cbe:  call   08139ac8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x56cf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x56cf
08543ce1 +0x0cc3:  test   %al,%al
08543ce3 +0x0cc5:  je     08543d2b <+0xd0d>
08543ce5 +0x0cc7:  movb   $0x1,-0x1d(%ebp)
08543ce9 +0x0ccb:  mov    -0x10(%ebp),%ecx
08543cec +0x0cce:  mov    -0x14(%ebp),%edx
08543cef +0x0cd1:  lea    -0x1c(%ebp),%eax
08543cf2 +0x0cd4:  mov    0x10(%ebp),%esi
08543cf5 +0x0cd7:  mov    %esi,0x10(%esp)
08543cf9 +0x0cdb:  mov    %ecx,0xc(%esp)
08543cfd +0x0cdf:  mov    %edx,0x8(%esp)
08543d01 +0x0ce3:  mov    0xc(%ebp),%edx
08543d04 +0x0ce6:  mov    %edx,0x4(%esp)
08543d08 +0x0cea:  mov    %eax,(%esp)
08543d0b +0x0ced:  call   0854446c <+0x144e>
08543d10 +0x0cf2:  sub    $0x4,%esp
08543d13 +0x0cf5:  lea    -0x1d(%ebp),%eax
08543d16 +0x0cf8:  mov    %eax,0x8(%esp)
08543d1a +0x0cfc:  lea    -0x1c(%ebp),%eax
08543d1d +0x0cff:  mov    %eax,0x4(%esp)
08543d21 +0x0d03:  mov    %ebx,(%esp)
08543d24 +0x0d06:  call   08544534 <+0x1516>
08543d29 +0x0d0b:  jmp    08543d45 <+0xd27>
08543d2b +0x0d0d:  movb   $0x0,-0x15(%ebp)
08543d2f +0x0d11:  lea    -0x15(%ebp),%eax
08543d32 +0x0d14:  mov    %eax,0x8(%esp)
08543d36 +0x0d18:  lea    -0x34(%ebp),%eax
08543d39 +0x0d1b:  mov    %eax,0x4(%esp)
08543d3d +0x0d1f:  mov    %ebx,(%esp)
08543d40 +0x0d22:  call   08544580 <+0x1562>
08543d45 +0x0d27:  mov    %ebx,%eax
08543d47 +0x0d29:  lea    -0x8(%ebp),%esp
08543d4a +0x0d2c:  add    $0x0,%esp
08543d4d +0x0d2f:  pop    %ebx
08543d4e +0x0d30:  pop    %esi
08543d4f +0x0d31:  pop    %ebp
08543d50 +0x0d32:  ret    $0x4
08543d53 +0x0d35:  nop
08543d54 +0x0d36:  push   %ebp
08543d55 +0x0d37:  mov    %esp,%ebp
08543d57 +0x0d39:  push   %esi
08543d58 +0x0d3a:  push   %ebx
08543d59 +0x0d3b:  sub    $0x30,%esp
08543d5c +0x0d3e:  mov    0x8(%ebp),%ebx
08543d5f +0x0d41:  mov    0xc(%ebp),%eax
08543d62 +0x0d44:  mov    %eax,(%esp)
08543d65 +0x0d47:  call   08544298 <+0x127a>
08543d6a +0x0d4c:  mov    %eax,%esi
08543d6c +0x0d4e:  mov    0xc(%ebp),%eax
08543d6f +0x0d51:  mov    %eax,(%esp)
08543d72 +0x0d54:  call   085435fa <+0x5dc>
08543d77 +0x0d59:  lea    -0x10(%ebp),%edx
08543d7a +0x0d5c:  mov    0x10(%ebp),%ecx
08543d7d +0x0d5f:  mov    %ecx,0x10(%esp)
08543d81 +0x0d63:  mov    %esi,0xc(%esp)
08543d85 +0x0d67:  mov    %eax,0x8(%esp)
08543d89 +0x0d6b:  mov    0xc(%ebp),%eax
08543d8c +0x0d6e:  mov    %eax,0x4(%esp)
08543d90 +0x0d72:  mov    %edx,(%esp)
08543d93 +0x0d75:  call   085445ae <+0x1590>
08543d98 +0x0d7a:  sub    $0x4,%esp
08543d9b +0x0d7d:  lea    -0xc(%ebp),%eax
08543d9e +0x0d80:  mov    0xc(%ebp),%edx
08543da1 +0x0d83:  mov    %edx,0x4(%esp)
08543da5 +0x0d87:  mov    %eax,(%esp)
08543da8 +0x0d8a:  call   085438c6 <+0x8a8>
08543dad +0x0d8f:  sub    $0x4,%esp
08543db0 +0x0d92:  lea    -0xc(%ebp),%eax
08543db3 +0x0d95:  mov    %eax,0x4(%esp)
08543db7 +0x0d99:  lea    -0x10(%ebp),%eax
08543dba +0x0d9c:  mov    %eax,(%esp)
08543dbd +0x0d9f:  call   085434e0 <+0x4c2>
08543dc2 +0x0da4:  test   %al,%al
08543dc4 +0x0da6:  jne    08543deb <+0xdcd>
08543dc6 +0x0da8:  mov    -0x10(%ebp),%eax
08543dc9 +0x0dab:  mov    %eax,(%esp)
08543dcc +0x0dae:  call   085443cc <+0x13ae>
08543dd1 +0x0db3:  mov    0xc(%ebp),%edx
08543dd4 +0x0db6:  mov    %eax,0x8(%esp)
08543dd8 +0x0dba:  mov    0x10(%ebp),%eax
08543ddb +0x0dbd:  mov    %eax,0x4(%esp)
08543ddf +0x0dc1:  mov    %edx,(%esp)
08543de2 +0x0dc4:  call   08139ac8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x56cf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x56cf
08543de7 +0x0dc9:  test   %al,%al
08543de9 +0x0dcb:  je     08543dff <+0xde1>
08543deb +0x0dcd:  mov    0xc(%ebp),%eax
08543dee +0x0dd0:  mov    %eax,0x4(%esp)
08543df2 +0x0dd4:  mov    %ebx,(%esp)
08543df5 +0x0dd7:  call   085438c6 <+0x8a8>
08543dfa +0x0ddc:  sub    $0x4,%esp
08543dfd +0x0ddf:  jmp    08543e04 <+0xde6>
08543dff +0x0de1:  mov    -0x10(%ebp),%eax
08543e02 +0x0de4:  mov    %eax,(%ebx)
08543e04 +0x0de6:  mov    %ebx,%eax
08543e06 +0x0de8:  lea    -0x8(%ebp),%esp
08543e09 +0x0deb:  add    $0x0,%esp
08543e0c +0x0dee:  pop    %ebx
08543e0d +0x0def:  pop    %esi
08543e0e +0x0df0:  pop    %ebp
08543e0f +0x0df1:  ret    $0x4
08543e12 +0x0df4:  push   %ebp
08543e13 +0x0df5:  mov    %esp,%ebp
08543e15 +0x0df7:  sub    $0x18,%esp
08543e18 +0x0dfa:  mov    0x8(%ebp),%eax
08543e1b +0x0dfd:  mov    0x18(%eax),%edx
08543e1e +0x0e00:  mov    0x8(%ebp),%eax
08543e21 +0x0e03:  mov    0x20(%eax),%eax
08543e24 +0x0e06:  sub    $0x1,%eax
08543e27 +0x0e09:  cmp    %eax,%edx
08543e29 +0x0e0b:  je     08543e58 <+0xe3a>
08543e2b +0x0e0d:  mov    0x8(%ebp),%eax
08543e2e +0x0e10:  mov    0x18(%eax),%edx
08543e31 +0x0e13:  mov    0x8(%ebp),%eax
08543e34 +0x0e16:  mov    0xc(%ebp),%ecx
08543e37 +0x0e19:  mov    %ecx,0x8(%esp)
08543e3b +0x0e1d:  mov    %edx,0x4(%esp)
08543e3f +0x0e21:  mov    %eax,(%esp)
08543e42 +0x0e24:  call   0807efc8 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x98>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x98
08543e47 +0x0e29:  mov    0x8(%ebp),%eax
08543e4a +0x0e2c:  mov    0x18(%eax),%eax
08543e4d +0x0e2f:  lea    0x1(%eax),%edx
08543e50 +0x0e32:  mov    0x8(%ebp),%eax
08543e53 +0x0e35:  mov    %edx,0x18(%eax)
08543e56 +0x0e38:  jmp    08543e6a <+0xe4c>
08543e58 +0x0e3a:  mov    0xc(%ebp),%eax
08543e5b +0x0e3d:  mov    %eax,0x4(%esp)
08543e5f +0x0e41:  mov    0x8(%ebp),%eax
08543e62 +0x0e44:  mov    %eax,(%esp)
08543e65 +0x0e47:  call   0854462a <+0x160c>
08543e6a +0x0e4c:  leave
08543e6b +0x0e4d:  ret
08543e6c +0x0e4e:  push   %ebp
08543e6d +0x0e4f:  mov    %esp,%ebp
08543e6f +0x0e51:  sub    $0x28,%esp
08543e72 +0x0e54:  mov    0x8(%ebp),%eax
08543e75 +0x0e57:  lea    0x4(%eax),%edx
08543e78 +0x0e5a:  mov    0xc(%ebp),%eax
08543e7b +0x0e5d:  mov    %edx,0x4(%esp)
08543e7f +0x0e61:  mov    %eax,(%esp)
08543e82 +0x0e64:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08543e87 +0x0e69:  mov    %eax,-0xc(%ebp)
08543e8a +0x0e6c:  mov    -0xc(%ebp),%eax
08543e8d +0x0e6f:  mov    %eax,0x4(%esp)
08543e91 +0x0e73:  mov    0x8(%ebp),%eax
08543e94 +0x0e76:  mov    %eax,(%esp)
08543e97 +0x0e79:  call   08543f1a <+0xefc>
08543e9c +0x0e7e:  mov    0x8(%ebp),%eax
08543e9f +0x0e81:  mov    0x14(%eax),%eax
08543ea2 +0x0e84:  lea    -0x1(%eax),%edx
08543ea5 +0x0e87:  mov    0x8(%ebp),%eax
08543ea8 +0x0e8a:  mov    %edx,0x14(%eax)
08543eab +0x0e8d:  leave
08543eac +0x0e8e:  ret
08543ead +0x0e8f:  nop
08543eae +0x0e90:  push   %ebp
08543eaf +0x0e91:  mov    %esp,%ebp
08543eb1 +0x0e93:  sub    $0x18,%esp
08543eb4 +0x0e96:  mov    0x8(%ebp),%eax
08543eb7 +0x0e99:  mov    %eax,(%esp)
08543eba +0x0e9c:  call   085446ea <+0x16cc>
08543ebf +0x0ea1:  mov    0x8(%ebp),%eax
08543ec2 +0x0ea4:  movl   $0x0,0x4(%eax)
08543ec9 +0x0eab:  mov    0x8(%ebp),%eax
08543ecc +0x0eae:  movl   $0x0,0x8(%eax)
08543ed3 +0x0eb5:  mov    0x8(%ebp),%eax
08543ed6 +0x0eb8:  movl   $0x0,0xc(%eax)
08543edd +0x0ebf:  mov    0x8(%ebp),%eax
08543ee0 +0x0ec2:  movl   $0x0,0x10(%eax)
08543ee7 +0x0ec9:  mov    0x8(%ebp),%eax
08543eea +0x0ecc:  movl   $0x0,0x14(%eax)
08543ef1 +0x0ed3:  mov    0x8(%ebp),%eax
08543ef4 +0x0ed6:  mov    %eax,(%esp)
08543ef7 +0x0ed9:  call   085446fe <+0x16e0>
08543efc +0x0ede:  leave
08543efd +0x0edf:  ret
08543efe +0x0ee0:  push   %ebp
08543eff +0x0ee1:  mov    %esp,%ebp
08543f01 +0x0ee3:  pop    %ebp
08543f02 +0x0ee4:  ret
08543f03 +0x0ee5:  push   %ebp
08543f04 +0x0ee6:  mov    %esp,%ebp
08543f06 +0x0ee8:  mov    0x8(%ebp),%eax
08543f09 +0x0eeb:  mov    0xc(%eax),%eax
08543f0c +0x0eee:  pop    %ebp
08543f0d +0x0eef:  ret
08543f0e +0x0ef0:  push   %ebp
08543f0f +0x0ef1:  mov    %esp,%ebp
08543f11 +0x0ef3:  mov    0x8(%ebp),%eax
08543f14 +0x0ef6:  mov    0x8(%eax),%eax
08543f17 +0x0ef9:  pop    %ebp
08543f18 +0x0efa:  ret
08543f19 +0x0efb:  nop
08543f1a +0x0efc:  push   %ebp
08543f1b +0x0efd:  mov    %esp,%ebp
08543f1d +0x0eff:  sub    $0x18,%esp
08543f20 +0x0f02:  mov    0x8(%ebp),%eax
08543f23 +0x0f05:  mov    %eax,(%esp)
08543f26 +0x0f08:  call   08544730 <+0x1712>
08543f2b +0x0f0d:  mov    0xc(%ebp),%edx
08543f2e +0x0f10:  mov    %edx,0x4(%esp)
08543f32 +0x0f14:  mov    %eax,(%esp)
08543f35 +0x0f17:  call   0854473e <+0x1720>
08543f3a +0x0f1c:  mov    0xc(%ebp),%eax
08543f3d +0x0f1f:  mov    %eax,0x4(%esp)
08543f41 +0x0f23:  mov    0x8(%ebp),%eax
08543f44 +0x0f26:  mov    %eax,(%esp)
08543f47 +0x0f29:  call   08544752 <+0x1734>
08543f4c +0x0f2e:  leave
08543f4d +0x0f2f:  ret
08543f4e +0x0f30:  push   %ebp
08543f4f +0x0f31:  mov    %esp,%ebp
08543f51 +0x0f33:  sub    $0x18,%esp
08543f54 +0x0f36:  mov    0x8(%ebp),%eax
08543f57 +0x0f39:  mov    %eax,(%esp)
08543f5a +0x0f3c:  call   080e5294 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x5ba>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x5ba
08543f5f +0x0f41:  mov    0x8(%ebp),%eax
08543f62 +0x0f44:  movl   $0x0,(%eax)
08543f68 +0x0f4a:  mov    0x8(%ebp),%eax
08543f6b +0x0f4d:  movl   $0x0,0x4(%eax)
08543f72 +0x0f54:  mov    0x8(%ebp),%eax
08543f75 +0x0f57:  add    $0x8,%eax
08543f78 +0x0f5a:  mov    %eax,(%esp)
08543f7b +0x0f5d:  call   08544774 <+0x1756>
08543f80 +0x0f62:  mov    0x8(%ebp),%eax
08543f83 +0x0f65:  add    $0x18,%eax
08543f86 +0x0f68:  mov    %eax,(%esp)
08543f89 +0x0f6b:  call   08544774 <+0x1756>
08543f8e +0x0f70:  leave
08543f8f +0x0f71:  ret
08543f90 +0x0f72:  push   %ebp
08543f91 +0x0f73:  mov    %esp,%ebp
08543f93 +0x0f75:  push   %esi
08543f94 +0x0f76:  push   %ebx
08543f95 +0x0f77:  sub    $0x40,%esp
08543f98 +0x0f7a:  movl   $0x1,(%esp)
08543f9f +0x0f81:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08543fa4 +0x0f86:  mov    %eax,-0x2c(%ebp)
08543fa7 +0x0f89:  mov    0xc(%ebp),%eax
08543faa +0x0f8c:  mov    $0x0,%edx
08543faf +0x0f91:  divl   -0x2c(%ebp)
08543fb2 +0x0f94:  add    $0x1,%eax
08543fb5 +0x0f97:  mov    %eax,-0x14(%ebp)
08543fb8 +0x0f9a:  mov    -0x14(%ebp),%eax
08543fbb +0x0f9d:  add    $0x2,%eax
08543fbe +0x0fa0:  mov    %eax,-0x1c(%ebp)
08543fc1 +0x0fa3:  movl   $0x8,-0x18(%ebp)
08543fc8 +0x0faa:  lea    -0x1c(%ebp),%eax
08543fcb +0x0fad:  mov    %eax,0x4(%esp)
08543fcf +0x0fb1:  lea    -0x18(%ebp),%eax
08543fd2 +0x0fb4:  mov    %eax,(%esp)
08543fd5 +0x0fb7:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08543fda +0x0fbc:  mov    (%eax),%edx
08543fdc +0x0fbe:  mov    0x8(%ebp),%eax
08543fdf +0x0fc1:  mov    %edx,0x4(%eax)
08543fe2 +0x0fc4:  mov    0x8(%ebp),%eax
08543fe5 +0x0fc7:  mov    0x4(%eax),%eax
08543fe8 +0x0fca:  mov    %eax,0x4(%esp)
08543fec +0x0fce:  mov    0x8(%ebp),%eax
08543fef +0x0fd1:  mov    %eax,(%esp)
08543ff2 +0x0fd4:  call   085447a0 <+0x1782>
08543ff7 +0x0fd9:  mov    0x8(%ebp),%edx
08543ffa +0x0fdc:  mov    %eax,(%edx)
08543ffc +0x0fde:  mov    0x8(%ebp),%eax
08543fff +0x0fe1:  mov    (%eax),%edx
08544001 +0x0fe3:  mov    0x8(%ebp),%eax
08544004 +0x0fe6:  mov    0x4(%eax),%eax
08544007 +0x0fe9:  sub    -0x14(%ebp),%eax
0854400a +0x0fec:  shr    %eax
0854400c +0x0fee:  shl    $0x2,%eax
0854400f +0x0ff1:  lea    (%edx,%eax,1),%eax
08544012 +0x0ff4:  mov    %eax,-0x10(%ebp)
08544015 +0x0ff7:  mov    -0x14(%ebp),%eax
08544018 +0x0ffa:  shl    $0x2,%eax
0854401b +0x0ffd:  add    -0x10(%ebp),%eax
0854401e +0x1000:  mov    %eax,-0xc(%ebp)
08544021 +0x1003:  mov    -0xc(%ebp),%eax
08544024 +0x1006:  mov    %eax,0x8(%esp)
08544028 +0x100a:  mov    -0x10(%ebp),%eax
0854402b +0x100d:  mov    %eax,0x4(%esp)
0854402f +0x1011:  mov    0x8(%ebp),%eax
08544032 +0x1014:  mov    %eax,(%esp)
08544035 +0x1017:  call   0854480c <+0x17ee>
0854403a +0x101c:  jmp    0854408f <+0x1071>
0854403c +0x101e:  mov    %eax,(%esp)
0854403f +0x1021:  call   08725ce0 <__cxa_begin_catch>
08544044 +0x1026:  mov    0x8(%ebp),%eax
08544047 +0x1029:  mov    0x4(%eax),%edx
0854404a +0x102c:  mov    0x8(%ebp),%eax
0854404d +0x102f:  mov    (%eax),%eax
0854404f +0x1031:  mov    %edx,0x8(%esp)
08544053 +0x1035:  mov    %eax,0x4(%esp)
08544057 +0x1039:  mov    0x8(%ebp),%eax
0854405a +0x103c:  mov    %eax,(%esp)
0854405d +0x103f:  call   08544132 <+0x1114>
08544062 +0x1044:  mov    0x8(%ebp),%eax
08544065 +0x1047:  movl   $0x0,(%eax)
0854406b +0x104d:  mov    0x8(%ebp),%eax
0854406e +0x1050:  movl   $0x0,0x4(%eax)
08544075 +0x1057:  call   08724be0 <__cxa_rethrow>
0854407a +0x105c:  mov    %edx,%ebx
0854407c +0x105e:  mov    %eax,%esi
0854407e +0x1060:  call   08725c30 <__cxa_end_catch>
08544083 +0x1065:  mov    %esi,%eax
08544085 +0x1067:  mov    %ebx,%edx
08544087 +0x1069:  mov    %eax,(%esp)
0854408a +0x106c:  call   08ae3750 <_Unwind_Resume>
0854408f +0x1071:  mov    0x8(%ebp),%eax
08544092 +0x1074:  lea    0x8(%eax),%edx
08544095 +0x1077:  mov    -0x10(%ebp),%eax
08544098 +0x107a:  mov    %eax,0x4(%esp)
0854409c +0x107e:  mov    %edx,(%esp)
0854409f +0x1081:  call   08544882 <+0x1864>
085440a4 +0x1086:  mov    -0xc(%ebp),%eax
085440a7 +0x1089:  lea    -0x4(%eax),%edx
085440aa +0x108c:  mov    0x8(%ebp),%eax
085440ad +0x108f:  add    $0x18,%eax
085440b0 +0x1092:  mov    %edx,0x4(%esp)
085440b4 +0x1096:  mov    %eax,(%esp)
085440b7 +0x1099:  call   08544882 <+0x1864>
085440bc +0x109e:  mov    0x8(%ebp),%eax
085440bf +0x10a1:  mov    0xc(%eax),%edx
085440c2 +0x10a4:  mov    0x8(%ebp),%eax
085440c5 +0x10a7:  mov    %edx,0x8(%eax)
085440c8 +0x10aa:  mov    0x8(%ebp),%eax
085440cb +0x10ad:  mov    0x1c(%eax),%ebx
085440ce +0x10b0:  movl   $0x1,(%esp)
085440d5 +0x10b7:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
085440da +0x10bc:  mov    %eax,-0x2c(%ebp)
085440dd +0x10bf:  mov    0xc(%ebp),%eax
085440e0 +0x10c2:  mov    $0x0,%edx
085440e5 +0x10c7:  divl   -0x2c(%ebp)
085440e8 +0x10ca:  mov    %edx,%ecx
085440ea +0x10cc:  mov    %ecx,%eax
085440ec +0x10ce:  lea    (%ebx,%eax,1),%edx
085440ef +0x10d1:  mov    0x8(%ebp),%eax
085440f2 +0x10d4:  mov    %edx,0x18(%eax)
085440f5 +0x10d7:  add    $0x40,%esp
085440f8 +0x10da:  pop    %ebx
085440f9 +0x10db:  pop    %esi
085440fa +0x10dc:  pop    %ebp
085440fb +0x10dd:  ret
085440fc +0x10de:  push   %ebp
085440fd +0x10df:  mov    %esp,%ebp
085440ff +0x10e1:  sub    $0x28,%esp
08544102 +0x10e4:  mov    0xc(%ebp),%eax
08544105 +0x10e7:  mov    %eax,-0xc(%ebp)
08544108 +0x10ea:  jmp    08544122 <+0x1104>
0854410a +0x10ec:  mov    -0xc(%ebp),%eax
0854410d +0x10ef:  mov    (%eax),%eax
0854410f +0x10f1:  mov    %eax,0x4(%esp)
08544113 +0x10f5:  mov    0x8(%ebp),%eax
08544116 +0x10f8:  mov    %eax,(%esp)
08544119 +0x10fb:  call   085448b8 <+0x189a>
0854411e +0x1100:  addl   $0x4,-0xc(%ebp)
08544122 +0x1104:  mov    -0xc(%ebp),%eax
08544125 +0x1107:  cmp    0x10(%ebp),%eax
08544128 +0x110a:  setb   %al
0854412b +0x110d:  test   %al,%al
0854412d +0x110f:  jne    0854410a <+0x10ec>
0854412f +0x1111:  leave
08544130 +0x1112:  ret
08544131 +0x1113:  nop
08544132 +0x1114:  push   %ebp
08544133 +0x1115:  mov    %esp,%ebp
08544135 +0x1117:  sub    $0x28,%esp
08544138 +0x111a:  lea    -0x9(%ebp),%eax
0854413b +0x111d:  mov    0x8(%ebp),%edx
0854413e +0x1120:  mov    %edx,0x4(%esp)
08544142 +0x1124:  mov    %eax,(%esp)
08544145 +0x1127:  call   085448e2 <+0x18c4>
0854414a +0x112c:  sub    $0x4,%esp
0854414d +0x112f:  lea    -0x9(%ebp),%eax
08544150 +0x1132:  mov    0x10(%ebp),%edx
08544153 +0x1135:  mov    %edx,0x8(%esp)
08544157 +0x1139:  mov    0xc(%ebp),%edx
0854415a +0x113c:  mov    %edx,0x4(%esp)
0854415e +0x1140:  mov    %eax,(%esp)
08544161 +0x1143:  call   08544928 <+0x190a>
08544166 +0x1148:  lea    -0x9(%ebp),%eax
08544169 +0x114b:  mov    %eax,(%esp)
0854416c +0x114e:  call   08544914 <+0x18f6>
08544171 +0x1153:  leave
08544172 +0x1154:  ret
08544173 +0x1155:  push   %ebp
08544174 +0x1156:  mov    %esp,%ebp
08544176 +0x1158:  mov    0x8(%ebp),%eax
08544179 +0x115b:  pop    %ebp
0854417a +0x115c:  ret
0854417b +0x115d:  nop
0854417c +0x115e:  push   %ebp
0854417d +0x115f:  mov    %esp,%ebp
0854417f +0x1161:  push   %esi
08544180 +0x1162:  push   %ebx
08544181 +0x1163:  sub    $0x10,%esp
08544184 +0x1166:  mov    0xc(%ebp),%eax
08544187 +0x1169:  mov    %eax,(%esp)
0854418a +0x116c:  call   08543738 <+0x71a>
0854418f +0x1171:  mov    0x8(%ebp),%edx
08544192 +0x1174:  mov    %eax,0x4(%esp)
08544196 +0x1178:  mov    %edx,(%esp)
08544199 +0x117b:  call   0854493c <+0x191e>
0854419e +0x1180:  movl   $0x0,0x4(%esp)
085441a6 +0x1188:  mov    0x8(%ebp),%eax
085441a9 +0x118b:  mov    %eax,(%esp)
085441ac +0x118e:  call   08543f90 <+0xf72>
085441b1 +0x1193:  mov    0xc(%ebp),%eax
085441b4 +0x1196:  mov    (%eax),%eax
085441b6 +0x1198:  test   %eax,%eax
085441b8 +0x119a:  je     08544231 <+0x1213>
085441ba +0x119c:  mov    0xc(%ebp),%eax
085441bd +0x119f:  lea    0x8(%eax),%edx
085441c0 +0x11a2:  mov    0x8(%ebp),%eax
085441c3 +0x11a5:  add    $0x8,%eax
085441c6 +0x11a8:  mov    %edx,0x4(%esp)
085441ca +0x11ac:  mov    %eax,(%esp)
085441cd +0x11af:  call   08544985 <+0x1967>
085441d2 +0x11b4:  mov    0xc(%ebp),%eax
085441d5 +0x11b7:  lea    0x18(%eax),%edx
085441d8 +0x11ba:  mov    0x8(%ebp),%eax
085441db +0x11bd:  add    $0x18,%eax
085441de +0x11c0:  mov    %edx,0x4(%esp)
085441e2 +0x11c4:  mov    %eax,(%esp)
085441e5 +0x11c7:  call   08544985 <+0x1967>
085441ea +0x11cc:  mov    0xc(%ebp),%edx
085441ed +0x11cf:  mov    0x8(%ebp),%eax
085441f0 +0x11d2:  mov    %edx,0x4(%esp)
085441f4 +0x11d6:  mov    %eax,(%esp)
085441f7 +0x11d9:  call   085449ef <+0x19d1>
085441fc +0x11de:  mov    0xc(%ebp),%eax
085441ff +0x11e1:  lea    0x4(%eax),%edx
08544202 +0x11e4:  mov    0x8(%ebp),%eax
08544205 +0x11e7:  add    $0x4,%eax
08544208 +0x11ea:  mov    %edx,0x4(%esp)
0854420c +0x11ee:  mov    %eax,(%esp)
0854420f +0x11f1:  call   081026b9 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x16db>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x16db
08544214 +0x11f6:  jmp    08544231 <+0x1213>
08544216 +0x11f8:  mov    %edx,%ebx
08544218 +0x11fa:  mov    %eax,%esi
0854421a +0x11fc:  mov    0x8(%ebp),%eax
0854421d +0x11ff:  mov    %eax,(%esp)
08544220 +0x1202:  call   08543606 <+0x5e8>
08544225 +0x1207:  mov    %esi,%eax
08544227 +0x1209:  mov    %ebx,%edx
08544229 +0x120b:  mov    %eax,(%esp)
0854422c +0x120e:  call   08ae3750 <_Unwind_Resume>
08544231 +0x1213:  add    $0x10,%esp
08544234 +0x1216:  pop    %ebx
08544235 +0x1217:  pop    %esi
08544236 +0x1218:  pop    %ebp
08544237 +0x1219:  ret
08544238 +0x121a:  push   %ebp
08544239 +0x121b:  mov    %esp,%ebp
0854423b +0x121d:  sub    $0x18,%esp
0854423e +0x1220:  mov    0x8(%ebp),%eax
08544241 +0x1223:  mov    %eax,(%esp)
08544244 +0x1226:  call   08544a2c <+0x1a0e>
08544249 +0x122b:  mov    0x8(%ebp),%eax
0854424c +0x122e:  movl   $0x0,(%eax)
08544252 +0x1234:  mov    0x8(%ebp),%eax
08544255 +0x1237:  movl   $0x0,0x4(%eax)
0854425c +0x123e:  mov    0x8(%ebp),%eax
0854425f +0x1241:  movl   $0x0,0x8(%eax)
08544266 +0x1248:  leave
08544267 +0x1249:  ret
08544268 +0x124a:  push   %ebp
08544269 +0x124b:  mov    %esp,%ebp
0854426b +0x124d:  sub    $0x18,%esp
0854426e +0x1250:  mov    0x8(%ebp),%eax
08544271 +0x1253:  mov    %eax,(%esp)
08544274 +0x1256:  call   08544a40 <+0x1a22>
08544279 +0x125b:  leave
0854427a +0x125c:  ret
0854427b +0x125d:  nop
0854427c +0x125e:  push   %ebp
0854427d +0x125f:  mov    %esp,%ebp
0854427f +0x1261:  mov    0xc(%ebp),%edx
08544282 +0x1264:  mov    0x8(%ebp),%eax
08544285 +0x1267:  mov    %edx,(%eax)
08544287 +0x1269:  pop    %ebp
08544288 +0x126a:  ret
08544289 +0x126b:  nop
0854428a +0x126c:  push   %ebp
0854428b +0x126d:  mov    %esp,%ebp
0854428d +0x126f:  mov    0xc(%ebp),%edx
08544290 +0x1272:  mov    0x8(%ebp),%eax
08544293 +0x1275:  mov    %edx,(%eax)
08544295 +0x1277:  pop    %ebp
08544296 +0x1278:  ret
08544297 +0x1279:  nop
08544298 +0x127a:  push   %ebp
08544299 +0x127b:  mov    %esp,%ebp
0854429b +0x127d:  mov    0x8(%ebp),%eax
0854429e +0x1280:  add    $0x4,%eax
085442a1 +0x1283:  pop    %ebp
085442a2 +0x1284:  ret
085442a3 +0x1285:  nop
085442a4 +0x1286:  push   %ebp
085442a5 +0x1287:  mov    %esp,%ebp
085442a7 +0x1289:  mov    0x8(%ebp),%eax
085442aa +0x128c:  add    $0xc,%eax
085442ad +0x128f:  pop    %ebp
085442ae +0x1290:  ret
085442af +0x1291:  nop
085442b0 +0x1292:  push   %ebp
085442b1 +0x1293:  mov    %esp,%ebp
085442b3 +0x1295:  mov    0x8(%ebp),%eax
085442b6 +0x1298:  add    $0x8,%eax
085442b9 +0x129b:  pop    %ebp
085442ba +0x129c:  ret
085442bb +0x129d:  nop
085442bc +0x129e:  push   %ebp
085442bd +0x129f:  mov    %esp,%ebp
085442bf +0x12a1:  mov    0x8(%ebp),%eax
085442c2 +0x12a4:  add    $0x10,%eax
085442c5 +0x12a7:  pop    %ebp
085442c6 +0x12a8:  ret
085442c7 +0x12a9:  push   %ebp
085442c8 +0x12aa:  mov    %esp,%ebp
085442ca +0x12ac:  mov    0x8(%ebp),%eax
085442cd +0x12af:  mov    (%eax),%edx
085442cf +0x12b1:  mov    0xc(%ebp),%eax
085442d2 +0x12b4:  mov    (%eax),%eax
085442d4 +0x12b6:  cmp    %eax,%edx
085442d6 +0x12b8:  sete   %al
085442d9 +0x12bb:  pop    %ebp
085442da +0x12bc:  ret
085442db +0x12bd:  nop
085442dc +0x12be:  push   %ebp
085442dd +0x12bf:  mov    %esp,%ebp
085442df +0x12c1:  sub    $0x18,%esp
085442e2 +0x12c4:  mov    0x8(%ebp),%eax
085442e5 +0x12c7:  mov    0x1c(%eax),%edx
085442e8 +0x12ca:  mov    0x8(%ebp),%eax
085442eb +0x12cd:  mov    %edx,0x4(%esp)
085442ef +0x12d1:  mov    %eax,(%esp)
085442f2 +0x12d4:  call   085448b8 <+0x189a>
085442f7 +0x12d9:  mov    0x8(%ebp),%eax
085442fa +0x12dc:  mov    0x24(%eax),%eax
085442fd +0x12df:  lea    -0x4(%eax),%edx
08544300 +0x12e2:  mov    0x8(%ebp),%eax
08544303 +0x12e5:  add    $0x18,%eax
08544306 +0x12e8:  mov    %edx,0x4(%esp)
0854430a +0x12ec:  mov    %eax,(%esp)
0854430d +0x12ef:  call   08544882 <+0x1864>
08544312 +0x12f4:  mov    0x8(%ebp),%eax
08544315 +0x12f7:  mov    0x20(%eax),%eax
08544318 +0x12fa:  lea    -0x1(%eax),%edx
0854431b +0x12fd:  mov    0x8(%ebp),%eax
0854431e +0x1300:  mov    %edx,0x18(%eax)
08544321 +0x1303:  mov    0x8(%ebp),%eax
08544324 +0x1306:  mov    0x18(%eax),%edx
08544327 +0x1309:  mov    0x8(%ebp),%eax
0854432a +0x130c:  mov    %edx,0x4(%esp)
0854432e +0x1310:  mov    %eax,(%esp)
08544331 +0x1313:  call   0807f4ea <_GLOBAL__I__Z13base64_encodePKhjRSs+0x5ba>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x5ba
08544336 +0x1318:  leave
08544337 +0x1319:  ret
08544338 +0x131a:  push   %ebp
08544339 +0x131b:  mov    %esp,%ebp
0854433b +0x131d:  mov    0x8(%ebp),%eax
0854433e +0x1320:  mov    0x8(%eax),%eax
08544341 +0x1323:  pop    %ebp
08544342 +0x1324:  ret
08544343 +0x1325:  nop
08544344 +0x1326:  push   %ebp
08544345 +0x1327:  mov    %esp,%ebp
08544347 +0x1329:  mov    0x8(%ebp),%eax
0854434a +0x132c:  add    $0x4,%eax
0854434d +0x132f:  pop    %ebp
0854434e +0x1330:  ret
0854434f +0x1331:  nop
08544350 +0x1332:  push   %ebp
08544351 +0x1333:  mov    %esp,%ebp
08544353 +0x1335:  push   %ebx
08544354 +0x1336:  sub    $0x14,%esp
08544357 +0x1339:  mov    0x8(%ebp),%ebx
0854435a +0x133c:  jmp    085443a8 <+0x138a>
0854435c +0x133e:  mov    0x10(%ebp),%eax
0854435f +0x1341:  mov    %eax,(%esp)
08544362 +0x1344:  call   0854444a <+0x142c>
08544367 +0x1349:  mov    0xc(%ebp),%edx
0854436a +0x134c:  mov    0x18(%ebp),%ecx
0854436d +0x134f:  mov    %ecx,0x8(%esp)
08544371 +0x1353:  mov    %eax,0x4(%esp)
08544375 +0x1357:  mov    %edx,(%esp)
08544378 +0x135a:  call   08139ac8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x56cf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x56cf
0854437d +0x135f:  xor    $0x1,%eax
08544380 +0x1362:  test   %al,%al
08544382 +0x1364:  je     0854439a <+0x137c>
08544384 +0x1366:  mov    0x10(%ebp),%eax
08544387 +0x1369:  mov    %eax,0x14(%ebp)
0854438a +0x136c:  mov    0x10(%ebp),%eax
0854438d +0x136f:  mov    %eax,(%esp)
08544390 +0x1372:  call   08544a45 <+0x1a27>
08544395 +0x1377:  mov    %eax,0x10(%ebp)
08544398 +0x137a:  jmp    085443a8 <+0x138a>
0854439a +0x137c:  mov    0x10(%ebp),%eax
0854439d +0x137f:  mov    %eax,(%esp)
085443a0 +0x1382:  call   08544a50 <+0x1a32>
085443a5 +0x1387:  mov    %eax,0x10(%ebp)
085443a8 +0x138a:  cmpl   $0x0,0x10(%ebp)
085443ac +0x138e:  setne  %al
085443af +0x1391:  test   %al,%al
085443b1 +0x1393:  jne    0854435c <+0x133e>
085443b3 +0x1395:  mov    0x14(%ebp),%eax
085443b6 +0x1398:  mov    %eax,0x4(%esp)
085443ba +0x139c:  mov    %ebx,(%esp)
085443bd +0x139f:  call   0854428a <+0x126c>
085443c2 +0x13a4:  mov    %ebx,%eax
085443c4 +0x13a6:  add    $0x14,%esp
085443c7 +0x13a9:  pop    %ebx
085443c8 +0x13aa:  pop    %ebp
085443c9 +0x13ab:  ret    $0x4
085443cc +0x13ae:  push   %ebp
085443cd +0x13af:  mov    %esp,%ebp
085443cf +0x13b1:  sub    $0x28,%esp
085443d2 +0x13b4:  mov    0x8(%ebp),%eax
085443d5 +0x13b7:  mov    %eax,(%esp)
085443d8 +0x13ba:  call   08544a5b <+0x1a3d>
085443dd +0x13bf:  mov    %eax,0x4(%esp)
085443e1 +0x13c3:  lea    -0x9(%ebp),%eax
085443e4 +0x13c6:  mov    %eax,(%esp)
085443e7 +0x13c9:  call   08544442 <+0x1424>
085443ec +0x13ce:  leave
085443ed +0x13cf:  ret
085443ee +0x13d0:  push   %ebp
085443ef +0x13d1:  mov    %esp,%ebp
085443f1 +0x13d3:  sub    $0x18,%esp
085443f4 +0x13d6:  mov    0x8(%ebp),%eax
085443f7 +0x13d9:  mov    (%eax),%edx
085443f9 +0x13db:  mov    0x8(%ebp),%eax
085443fc +0x13de:  mov    0x4(%eax),%eax
085443ff +0x13e1:  cmp    %eax,%edx
08544401 +0x13e3:  jne    08544426 <+0x1408>
08544403 +0x13e5:  mov    0x8(%ebp),%eax
08544406 +0x13e8:  mov    0xc(%eax),%eax
08544409 +0x13eb:  sub    $0x4,%eax
0854440c +0x13ee:  mov    %eax,0x4(%esp)
08544410 +0x13f2:  mov    0x8(%ebp),%eax
08544413 +0x13f5:  mov    %eax,(%esp)
08544416 +0x13f8:  call   08544882 <+0x1864>
0854441b +0x13fd:  mov    0x8(%ebp),%eax
0854441e +0x1400:  mov    0x8(%eax),%edx
08544421 +0x1403:  mov    0x8(%ebp),%eax
08544424 +0x1406:  mov    %edx,(%eax)
08544426 +0x1408:  mov    0x8(%ebp),%eax
08544429 +0x140b:  mov    (%eax),%eax
0854442b +0x140d:  lea    -0x1(%eax),%edx
0854442e +0x1410:  mov    0x8(%ebp),%eax
08544431 +0x1413:  mov    %edx,(%eax)
08544433 +0x1415:  mov    0x8(%ebp),%eax
08544436 +0x1418:  leave
08544437 +0x1419:  ret
08544438 +0x141a:  push   %ebp
08544439 +0x141b:  mov    %esp,%ebp
0854443b +0x141d:  mov    0x8(%ebp),%eax
0854443e +0x1420:  mov    (%eax),%eax
08544440 +0x1422:  pop    %ebp
08544441 +0x1423:  ret
08544442 +0x1424:  push   %ebp
08544443 +0x1425:  mov    %esp,%ebp
08544445 +0x1427:  mov    0xc(%ebp),%eax
08544448 +0x142a:  pop    %ebp
08544449 +0x142b:  ret
0854444a +0x142c:  push   %ebp
0854444b +0x142d:  mov    %esp,%ebp
0854444d +0x142f:  sub    $0x28,%esp
08544450 +0x1432:  mov    0x8(%ebp),%eax
08544453 +0x1435:  mov    %eax,(%esp)
08544456 +0x1438:  call   08544a66 <+0x1a48>
0854445b +0x143d:  mov    %eax,0x4(%esp)
0854445f +0x1441:  lea    -0x9(%ebp),%eax
08544462 +0x1444:  mov    %eax,(%esp)
08544465 +0x1447:  call   08544442 <+0x1424>
0854446a +0x144c:  leave
0854446b +0x144d:  ret
0854446c +0x144e:  push   %ebp
0854446d +0x144f:  mov    %esp,%ebp
0854446f +0x1451:  push   %esi
08544470 +0x1452:  push   %ebx
08544471 +0x1453:  sub    $0x20,%esp
08544474 +0x1456:  mov    0x8(%ebp),%esi
08544477 +0x1459:  cmpl   $0x0,0x10(%ebp)
0854447b +0x145d:  jne    085444c3 <+0x14a5>
0854447d +0x145f:  mov    0xc(%ebp),%eax
08544480 +0x1462:  mov    %eax,(%esp)
08544483 +0x1465:  call   08544298 <+0x127a>
08544488 +0x146a:  cmp    0x14(%ebp),%eax
0854448b +0x146d:  je     085444c3 <+0x14a5>
0854448d +0x146f:  mov    0x14(%ebp),%eax
08544490 +0x1472:  mov    %eax,(%esp)
08544493 +0x1475:  call   085443cc <+0x13ae>
08544498 +0x147a:  mov    %eax,%ebx
0854449a +0x147c:  mov    0x18(%ebp),%eax
0854449d +0x147f:  mov    %eax,0x4(%esp)
085444a1 +0x1483:  lea    -0xe(%ebp),%eax
085444a4 +0x1486:  mov    %eax,(%esp)
085444a7 +0x1489:  call   08544442 <+0x1424>
085444ac +0x148e:  mov    0xc(%ebp),%edx
085444af +0x1491:  mov    %ebx,0x8(%esp)
085444b3 +0x1495:  mov    %eax,0x4(%esp)
085444b7 +0x1499:  mov    %edx,(%esp)
085444ba +0x149c:  call   08139ac8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x56cf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x56cf
085444bf +0x14a1:  test   %al,%al
085444c1 +0x14a3:  je     085444ca <+0x14ac>
085444c3 +0x14a5:  mov    $0x1,%eax
085444c8 +0x14aa:  jmp    085444cf <+0x14b1>
085444ca +0x14ac:  mov    $0x0,%eax
085444cf +0x14b1:  mov    %al,-0xd(%ebp)
085444d2 +0x14b4:  mov    0x18(%ebp),%eax
085444d5 +0x14b7:  mov    %eax,0x4(%esp)
085444d9 +0x14bb:  mov    0xc(%ebp),%eax
085444dc +0x14be:  mov    %eax,(%esp)
085444df +0x14c1:  call   08544a72 <+0x1a54>
085444e4 +0x14c6:  mov    %eax,-0xc(%ebp)
085444e7 +0x14c9:  mov    0xc(%ebp),%eax
085444ea +0x14cc:  lea    0x4(%eax),%ecx
085444ed +0x14cf:  mov    -0xc(%ebp),%edx
085444f0 +0x14d2:  movzbl -0xd(%ebp),%eax
085444f4 +0x14d6:  mov    %ecx,0xc(%esp)
085444f8 +0x14da:  mov    0x14(%ebp),%ecx
085444fb +0x14dd:  mov    %ecx,0x8(%esp)
085444ff +0x14e1:  mov    %edx,0x4(%esp)
08544503 +0x14e5:  mov    %eax,(%esp)
08544506 +0x14e8:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
0854450b +0x14ed:  mov    0xc(%ebp),%eax
0854450e +0x14f0:  mov    0x14(%eax),%eax
08544511 +0x14f3:  lea    0x1(%eax),%edx
08544514 +0x14f6:  mov    0xc(%ebp),%eax
08544517 +0x14f9:  mov    %edx,0x14(%eax)
0854451a +0x14fc:  mov    -0xc(%ebp),%eax
0854451d +0x14ff:  mov    %eax,0x4(%esp)
08544521 +0x1503:  mov    %esi,(%esp)
08544524 +0x1506:  call   0854427c <+0x125e>
08544529 +0x150b:  mov    %esi,%eax
0854452b +0x150d:  add    $0x20,%esp
0854452e +0x1510:  pop    %ebx
0854452f +0x1511:  pop    %esi
08544530 +0x1512:  pop    %ebp
08544531 +0x1513:  ret    $0x4
08544534 +0x1516:  push   %ebp
08544535 +0x1517:  mov    %esp,%ebp
08544537 +0x1519:  sub    $0x18,%esp
0854453a +0x151c:  mov    0xc(%ebp),%eax
0854453d +0x151f:  mov    %eax,(%esp)
08544540 +0x1522:  call   08544af3 <+0x1ad5>
08544545 +0x1527:  mov    0x8(%ebp),%edx
08544548 +0x152a:  mov    (%eax),%eax
0854454a +0x152c:  mov    %eax,(%edx)
0854454c +0x152e:  mov    0x10(%ebp),%eax
0854454f +0x1531:  mov    %eax,(%esp)
08544552 +0x1534:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08544557 +0x1539:  movzbl (%eax),%edx
0854455a +0x153c:  mov    0x8(%ebp),%eax
0854455d +0x153f:  mov    %dl,0x4(%eax)
08544560 +0x1542:  leave
08544561 +0x1543:  ret
08544562 +0x1544:  push   %ebp
08544563 +0x1545:  mov    %esp,%ebp
08544565 +0x1547:  sub    $0x18,%esp
08544568 +0x154a:  mov    0x8(%ebp),%eax
0854456b +0x154d:  mov    (%eax),%eax
0854456d +0x154f:  mov    %eax,(%esp)
08544570 +0x1552:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08544575 +0x1557:  mov    0x8(%ebp),%edx
08544578 +0x155a:  mov    %eax,(%edx)
0854457a +0x155c:  mov    0x8(%ebp),%eax
0854457d +0x155f:  leave
0854457e +0x1560:  ret
0854457f +0x1561:  nop
08544580 +0x1562:  push   %ebp
08544581 +0x1563:  mov    %esp,%ebp
08544583 +0x1565:  sub    $0x18,%esp
08544586 +0x1568:  mov    0xc(%ebp),%eax
08544589 +0x156b:  mov    %eax,(%esp)
0854458c +0x156e:  call   08544afb <+0x1add>
08544591 +0x1573:  mov    0x8(%ebp),%edx
08544594 +0x1576:  mov    (%eax),%eax
08544596 +0x1578:  mov    %eax,(%edx)
08544598 +0x157a:  mov    0x10(%ebp),%eax
0854459b +0x157d:  mov    %eax,(%esp)
0854459e +0x1580:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
085445a3 +0x1585:  movzbl (%eax),%edx
085445a6 +0x1588:  mov    0x8(%ebp),%eax
085445a9 +0x158b:  mov    %dl,0x4(%eax)
085445ac +0x158e:  leave
085445ad +0x158f:  ret
085445ae +0x1590:  push   %ebp
085445af +0x1591:  mov    %esp,%ebp
085445b1 +0x1593:  push   %ebx
085445b2 +0x1594:  sub    $0x14,%esp
085445b5 +0x1597:  mov    0x8(%ebp),%ebx
085445b8 +0x159a:  jmp    08544606 <+0x15e8>
085445ba +0x159c:  mov    0x10(%ebp),%eax
085445bd +0x159f:  mov    %eax,(%esp)
085445c0 +0x15a2:  call   0854444a <+0x142c>
085445c5 +0x15a7:  mov    0xc(%ebp),%edx
085445c8 +0x15aa:  mov    0x18(%ebp),%ecx
085445cb +0x15ad:  mov    %ecx,0x8(%esp)
085445cf +0x15b1:  mov    %eax,0x4(%esp)
085445d3 +0x15b5:  mov    %edx,(%esp)
085445d6 +0x15b8:  call   08139ac8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x56cf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x56cf
085445db +0x15bd:  xor    $0x1,%eax
085445de +0x15c0:  test   %al,%al
085445e0 +0x15c2:  je     085445f8 <+0x15da>
085445e2 +0x15c4:  mov    0x10(%ebp),%eax
085445e5 +0x15c7:  mov    %eax,0x14(%ebp)
085445e8 +0x15ca:  mov    0x10(%ebp),%eax
085445eb +0x15cd:  mov    %eax,(%esp)
085445ee +0x15d0:  call   08543f0e <+0xef0>
085445f3 +0x15d5:  mov    %eax,0x10(%ebp)
085445f6 +0x15d8:  jmp    08544606 <+0x15e8>
085445f8 +0x15da:  mov    0x10(%ebp),%eax
085445fb +0x15dd:  mov    %eax,(%esp)
085445fe +0x15e0:  call   08543f03 <+0xee5>
08544603 +0x15e5:  mov    %eax,0x10(%ebp)
08544606 +0x15e8:  cmpl   $0x0,0x10(%ebp)
0854460a +0x15ec:  setne  %al
0854460d +0x15ef:  test   %al,%al
0854460f +0x15f1:  jne    085445ba <+0x159c>
08544611 +0x15f3:  mov    0x14(%ebp),%eax
08544614 +0x15f6:  mov    %eax,0x4(%esp)
08544618 +0x15fa:  mov    %ebx,(%esp)
0854461b +0x15fd:  call   0854427c <+0x125e>
08544620 +0x1602:  mov    %ebx,%eax
08544622 +0x1604:  add    $0x14,%esp
08544625 +0x1607:  pop    %ebx
08544626 +0x1608:  pop    %ebp
08544627 +0x1609:  ret    $0x4
0854462a +0x160c:  push   %ebp
0854462b +0x160d:  mov    %esp,%ebp
0854462d +0x160f:  push   %esi
0854462e +0x1610:  push   %ebx
0854462f +0x1611:  sub    $0x10,%esp
08544632 +0x1614:  movl   $0x1,0x4(%esp)
0854463a +0x161c:  mov    0x8(%ebp),%eax
0854463d +0x161f:  mov    %eax,(%esp)
08544640 +0x1622:  call   08544b04 <+0x1ae6>
08544645 +0x1627:  mov    0x8(%ebp),%eax
08544648 +0x162a:  mov    0x24(%eax),%eax
0854464b +0x162d:  lea    0x4(%eax),%ebx
0854464e +0x1630:  mov    0x8(%ebp),%eax
08544651 +0x1633:  mov    %eax,(%esp)
08544654 +0x1636:  call   08544b5a <+0x1b3c>
08544659 +0x163b:  mov    %eax,(%ebx)
0854465b +0x163d:  mov    0xc(%ebp),%eax
0854465e +0x1640:  mov    %eax,(%esp)
08544661 +0x1643:  call   0807f356 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x426>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x426
08544666 +0x1648:  mov    0x8(%ebp),%edx
08544669 +0x164b:  mov    0x18(%edx),%ecx
0854466c +0x164e:  mov    0x8(%ebp),%edx
0854466f +0x1651:  mov    %eax,0x8(%esp)
08544673 +0x1655:  mov    %ecx,0x4(%esp)
08544677 +0x1659:  mov    %edx,(%esp)
0854467a +0x165c:  call   0807efc8 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x98>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x98
0854467f +0x1661:  mov    0x8(%ebp),%eax
08544682 +0x1664:  mov    0x24(%eax),%eax
08544685 +0x1667:  lea    0x4(%eax),%edx
08544688 +0x166a:  mov    0x8(%ebp),%eax
0854468b +0x166d:  add    $0x18,%eax
0854468e +0x1670:  mov    %edx,0x4(%esp)
08544692 +0x1674:  mov    %eax,(%esp)
08544695 +0x1677:  call   08544882 <+0x1864>
0854469a +0x167c:  mov    0x8(%ebp),%eax
0854469d +0x167f:  mov    0x1c(%eax),%edx
085446a0 +0x1682:  mov    0x8(%ebp),%eax
085446a3 +0x1685:  mov    %edx,0x18(%eax)
085446a6 +0x1688:  add    $0x10,%esp
085446a9 +0x168b:  pop    %ebx
085446aa +0x168c:  pop    %esi
085446ab +0x168d:  pop    %ebp
085446ac +0x168e:  ret
085446ad +0x168f:  mov    %eax,(%esp)
085446b0 +0x1692:  call   08725ce0 <__cxa_begin_catch>
085446b5 +0x1697:  mov    0x8(%ebp),%eax
085446b8 +0x169a:  mov    0x24(%eax),%eax
085446bb +0x169d:  add    $0x4,%eax
085446be +0x16a0:  mov    (%eax),%edx
085446c0 +0x16a2:  mov    0x8(%ebp),%eax
085446c3 +0x16a5:  mov    %edx,0x4(%esp)
085446c7 +0x16a9:  mov    %eax,(%esp)
085446ca +0x16ac:  call   085448b8 <+0x189a>
085446cf +0x16b1:  call   08724be0 <__cxa_rethrow>
085446d4 +0x16b6:  mov    %edx,%ebx
085446d6 +0x16b8:  mov    %eax,%esi
085446d8 +0x16ba:  call   08725c30 <__cxa_end_catch>
085446dd +0x16bf:  mov    %esi,%eax
085446df +0x16c1:  mov    %ebx,%edx
085446e1 +0x16c3:  mov    %eax,(%esp)
085446e4 +0x16c6:  call   08ae3750 <_Unwind_Resume>
085446e9 +0x16cb:  nop
085446ea +0x16cc:  push   %ebp
085446eb +0x16cd:  mov    %esp,%ebp
085446ed +0x16cf:  sub    $0x18,%esp
085446f0 +0x16d2:  mov    0x8(%ebp),%eax
085446f3 +0x16d5:  mov    %eax,(%esp)
085446f6 +0x16d8:  call   08544b86 <+0x1b68>
085446fb +0x16dd:  leave
085446fc +0x16de:  ret
085446fd +0x16df:  nop
085446fe +0x16e0:  push   %ebp
085446ff +0x16e1:  mov    %esp,%ebp
08544701 +0x16e3:  mov    0x8(%ebp),%eax
08544704 +0x16e6:  movl   $0x0,0x4(%eax)
0854470b +0x16ed:  mov    0x8(%ebp),%eax
0854470e +0x16f0:  movl   $0x0,0x8(%eax)
08544715 +0x16f7:  mov    0x8(%ebp),%eax
08544718 +0x16fa:  lea    0x4(%eax),%edx
0854471b +0x16fd:  mov    0x8(%ebp),%eax
0854471e +0x1700:  mov    %edx,0xc(%eax)
08544721 +0x1703:  mov    0x8(%ebp),%eax
08544724 +0x1706:  lea    0x4(%eax),%edx
08544727 +0x1709:  mov    0x8(%ebp),%eax
0854472a +0x170c:  mov    %edx,0x10(%eax)
0854472d +0x170f:  pop    %ebp
0854472e +0x1710:  ret
0854472f +0x1711:  nop
08544730 +0x1712:  push   %ebp
08544731 +0x1713:  mov    %esp,%ebp
08544733 +0x1715:  mov    0x8(%ebp),%eax
08544736 +0x1718:  pop    %ebp
08544737 +0x1719:  ret
08544738 +0x171a:  push   %ebp
08544739 +0x171b:  mov    %esp,%ebp
0854473b +0x171d:  pop    %ebp
0854473c +0x171e:  ret
0854473d +0x171f:  nop
0854473e +0x1720:  push   %ebp
0854473f +0x1721:  mov    %esp,%ebp
08544741 +0x1723:  sub    $0x18,%esp
08544744 +0x1726:  mov    0xc(%ebp),%eax
08544747 +0x1729:  mov    %eax,(%esp)
0854474a +0x172c:  call   08544738 <+0x171a>
0854474f +0x1731:  leave
08544750 +0x1732:  ret
08544751 +0x1733:  nop
08544752 +0x1734:  push   %ebp
08544753 +0x1735:  mov    %esp,%ebp
08544755 +0x1737:  sub    $0x18,%esp
08544758 +0x173a:  mov    0x8(%ebp),%eax
0854475b +0x173d:  movl   $0x1,0x8(%esp)
08544763 +0x1745:  mov    0xc(%ebp),%edx
08544766 +0x1748:  mov    %edx,0x4(%esp)
0854476a +0x174c:  mov    %eax,(%esp)
0854476d +0x174f:  call   08544b8c <+0x1b6e>
08544772 +0x1754:  leave
08544773 +0x1755:  ret
08544774 +0x1756:  push   %ebp
08544775 +0x1757:  mov    %esp,%ebp
08544777 +0x1759:  mov    0x8(%ebp),%eax
0854477a +0x175c:  movl   $0x0,(%eax)
08544780 +0x1762:  mov    0x8(%ebp),%eax
08544783 +0x1765:  movl   $0x0,0x4(%eax)
0854478a +0x176c:  mov    0x8(%ebp),%eax
0854478d +0x176f:  movl   $0x0,0x8(%eax)
08544794 +0x1776:  mov    0x8(%ebp),%eax
08544797 +0x1779:  movl   $0x0,0xc(%eax)
0854479e +0x1780:  pop    %ebp
0854479f +0x1781:  ret
085447a0 +0x1782:  push   %ebp
085447a1 +0x1783:  mov    %esp,%ebp
085447a3 +0x1785:  push   %esi
085447a4 +0x1786:  push   %ebx
085447a5 +0x1787:  sub    $0x20,%esp
085447a8 +0x178a:  lea    -0x9(%ebp),%eax
085447ab +0x178d:  mov    0x8(%ebp),%edx
085447ae +0x1790:  mov    %edx,0x4(%esp)
085447b2 +0x1794:  mov    %eax,(%esp)
085447b5 +0x1797:  call   085448e2 <+0x18c4>
085447ba +0x179c:  sub    $0x4,%esp
085447bd +0x179f:  lea    -0x9(%ebp),%eax
085447c0 +0x17a2:  movl   $0x0,0x8(%esp)
085447c8 +0x17aa:  mov    0xc(%ebp),%edx
085447cb +0x17ad:  mov    %edx,0x4(%esp)
085447cf +0x17b1:  mov    %eax,(%esp)
085447d2 +0x17b4:  call   08544ba0 <+0x1b82>
085447d7 +0x17b9:  mov    %eax,%ebx
085447d9 +0x17bb:  lea    -0x9(%ebp),%eax
085447dc +0x17be:  mov    %eax,(%esp)
085447df +0x17c1:  call   08544914 <+0x18f6>
085447e4 +0x17c6:  mov    %ebx,%eax
085447e6 +0x17c8:  lea    -0x8(%ebp),%esp
085447e9 +0x17cb:  add    $0x0,%esp
085447ec +0x17ce:  pop    %ebx
085447ed +0x17cf:  pop    %esi
085447ee +0x17d0:  pop    %ebp
085447ef +0x17d1:  ret
085447f0 +0x17d2:  mov    %edx,%ebx
085447f2 +0x17d4:  mov    %eax,%esi
085447f4 +0x17d6:  lea    -0x9(%ebp),%eax
085447f7 +0x17d9:  mov    %eax,(%esp)
085447fa +0x17dc:  call   08544914 <+0x18f6>
085447ff +0x17e1:  mov    %esi,%eax
08544801 +0x17e3:  mov    %ebx,%edx
08544803 +0x17e5:  mov    %eax,(%esp)
08544806 +0x17e8:  call   08ae3750 <_Unwind_Resume>
0854480b +0x17ed:  nop
0854480c +0x17ee:  push   %ebp
0854480d +0x17ef:  mov    %esp,%ebp
0854480f +0x17f1:  push   %esi
08544810 +0x17f2:  push   %ebx
08544811 +0x17f3:  sub    $0x20,%esp
08544814 +0x17f6:  mov    0xc(%ebp),%eax
08544817 +0x17f9:  mov    %eax,-0xc(%ebp)
0854481a +0x17fc:  jmp    08544830 <+0x1812>
0854481c +0x17fe:  mov    0x8(%ebp),%eax
0854481f +0x1801:  mov    %eax,(%esp)
08544822 +0x1804:  call   08544b5a <+0x1b3c>
08544827 +0x1809:  mov    -0xc(%ebp),%edx
0854482a +0x180c:  mov    %eax,(%edx)
0854482c +0x180e:  addl   $0x4,-0xc(%ebp)
08544830 +0x1812:  mov    -0xc(%ebp),%eax
08544833 +0x1815:  cmp    0x10(%ebp),%eax
08544836 +0x1818:  setb   %al
08544839 +0x181b:  test   %al,%al
0854483b +0x181d:  jne    0854481c <+0x17fe>
0854483d +0x181f:  jmp    0854487a <+0x185c>
0854483f +0x1821:  mov    %eax,(%esp)
08544842 +0x1824:  call   08725ce0 <__cxa_begin_catch>
08544847 +0x1829:  mov    -0xc(%ebp),%eax
0854484a +0x182c:  mov    %eax,0x8(%esp)
0854484e +0x1830:  mov    0xc(%ebp),%eax
08544851 +0x1833:  mov    %eax,0x4(%esp)
08544855 +0x1837:  mov    0x8(%ebp),%eax
08544858 +0x183a:  mov    %eax,(%esp)
0854485b +0x183d:  call   085440fc <+0x10de>
08544860 +0x1842:  call   08724be0 <__cxa_rethrow>
08544865 +0x1847:  mov    %edx,%ebx
08544867 +0x1849:  mov    %eax,%esi
08544869 +0x184b:  call   08725c30 <__cxa_end_catch>
0854486e +0x1850:  mov    %esi,%eax
08544870 +0x1852:  mov    %ebx,%edx
08544872 +0x1854:  mov    %eax,(%esp)
08544875 +0x1857:  call   08ae3750 <_Unwind_Resume>
0854487a +0x185c:  add    $0x20,%esp
0854487d +0x185f:  pop    %ebx
0854487e +0x1860:  pop    %esi
0854487f +0x1861:  pop    %ebp
08544880 +0x1862:  ret
08544881 +0x1863:  nop
08544882 +0x1864:  push   %ebp
08544883 +0x1865:  mov    %esp,%ebp
08544885 +0x1867:  push   %ebx
08544886 +0x1868:  sub    $0x4,%esp
08544889 +0x186b:  mov    0x8(%ebp),%eax
0854488c +0x186e:  mov    0xc(%ebp),%edx
0854488f +0x1871:  mov    %edx,0xc(%eax)
08544892 +0x1874:  mov    0xc(%ebp),%eax
08544895 +0x1877:  mov    (%eax),%edx
08544897 +0x1879:  mov    0x8(%ebp),%eax
0854489a +0x187c:  mov    %edx,0x4(%eax)
0854489d +0x187f:  mov    0x8(%ebp),%eax
085448a0 +0x1882:  mov    0x4(%eax),%ebx
085448a3 +0x1885:  call   08544bd8 <+0x1bba>
085448a8 +0x188a:  lea    (%ebx,%eax,1),%edx
085448ab +0x188d:  mov    0x8(%ebp),%eax
085448ae +0x1890:  mov    %edx,0x8(%eax)
085448b1 +0x1893:  add    $0x4,%esp
085448b4 +0x1896:  pop    %ebx
085448b5 +0x1897:  pop    %ebp
085448b6 +0x1898:  ret
085448b7 +0x1899:  nop
085448b8 +0x189a:  push   %ebp
085448b9 +0x189b:  mov    %esp,%ebp
085448bb +0x189d:  sub    $0x18,%esp
085448be +0x18a0:  movl   $0x1,(%esp)
085448c5 +0x18a7:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
085448ca +0x18ac:  mov    0x8(%ebp),%edx
085448cd +0x18af:  mov    %eax,0x8(%esp)
085448d1 +0x18b3:  mov    0xc(%ebp),%eax
085448d4 +0x18b6:  mov    %eax,0x4(%esp)
085448d8 +0x18ba:  mov    %edx,(%esp)
085448db +0x18bd:  call   0807f66a <_GLOBAL__I__Z13base64_encodePKhjRSs+0x73a>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x73a
085448e0 +0x18c2:  leave
085448e1 +0x18c3:  ret
085448e2 +0x18c4:  push   %ebp
085448e3 +0x18c5:  mov    %esp,%ebp
085448e5 +0x18c7:  push   %esi
085448e6 +0x18c8:  push   %ebx
085448e7 +0x18c9:  sub    $0x10,%esp
085448ea +0x18cc:  mov    0x8(%ebp),%ebx
085448ed +0x18cf:  mov    %ebx,%esi
085448ef +0x18d1:  mov    0xc(%ebp),%eax
085448f2 +0x18d4:  mov    %eax,(%esp)
085448f5 +0x18d7:  call   08544bec <+0x1bce>
085448fa +0x18dc:  mov    %eax,0x4(%esp)
085448fe +0x18e0:  mov    %esi,(%esp)
08544901 +0x18e3:  call   08544bf4 <+0x1bd6>
08544906 +0x18e8:  mov    %ebx,%eax
08544908 +0x18ea:  mov    %ebx,%eax
0854490a +0x18ec:  add    $0x10,%esp
0854490d +0x18ef:  pop    %ebx
0854490e +0x18f0:  pop    %esi
0854490f +0x18f1:  pop    %ebp
08544910 +0x18f2:  ret    $0x4
08544913 +0x18f5:  nop
08544914 +0x18f6:  push   %ebp
08544915 +0x18f7:  mov    %esp,%ebp
08544917 +0x18f9:  sub    $0x18,%esp
0854491a +0x18fc:  mov    0x8(%ebp),%eax
0854491d +0x18ff:  mov    %eax,(%esp)
08544920 +0x1902:  call   08544c08 <+0x1bea>
08544925 +0x1907:  leave
08544926 +0x1908:  ret
08544927 +0x1909:  nop
08544928 +0x190a:  push   %ebp
08544929 +0x190b:  mov    %esp,%ebp
0854492b +0x190d:  sub    $0x18,%esp
0854492e +0x1910:  mov    0xc(%ebp),%eax
08544931 +0x1913:  mov    %eax,(%esp)
08544934 +0x1916:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08544939 +0x191b:  leave
0854493a +0x191c:  ret
0854493b +0x191d:  nop
0854493c +0x191e:  push   %ebp
0854493d +0x191f:  mov    %esp,%ebp
0854493f +0x1921:  sub    $0x18,%esp
08544942 +0x1924:  mov    0x8(%ebp),%eax
08544945 +0x1927:  mov    0xc(%ebp),%edx
08544948 +0x192a:  mov    %edx,0x4(%esp)
0854494c +0x192e:  mov    %eax,(%esp)
0854494f +0x1931:  call   083d2f44 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x6cf10>  ; global constructors keyed to CServerEvent::m_nExpRate+0x6cf10
08544954 +0x1936:  mov    0x8(%ebp),%eax
08544957 +0x1939:  movl   $0x0,(%eax)
0854495d +0x193f:  mov    0x8(%ebp),%eax
08544960 +0x1942:  movl   $0x0,0x4(%eax)
08544967 +0x1949:  mov    0x8(%ebp),%eax
0854496a +0x194c:  add    $0x8,%eax
0854496d +0x194f:  mov    %eax,(%esp)
08544970 +0x1952:  call   08544774 <+0x1756>
08544975 +0x1957:  mov    0x8(%ebp),%eax
08544978 +0x195a:  add    $0x18,%eax
0854497b +0x195d:  mov    %eax,(%esp)
0854497e +0x1960:  call   08544774 <+0x1756>
08544983 +0x1965:  leave
08544984 +0x1966:  ret
08544985 +0x1967:  push   %ebp
08544986 +0x1968:  mov    %esp,%ebp
08544988 +0x196a:  sub    $0x28,%esp
0854498b +0x196d:  mov    0x8(%ebp),%eax
0854498e +0x1970:  mov    %eax,(%esp)
08544991 +0x1973:  call   08544c0d <+0x1bef>
08544996 +0x1978:  mov    %eax,0x4(%esp)
0854499a +0x197c:  lea    -0x18(%ebp),%eax
0854499d +0x197f:  mov    %eax,(%esp)
085449a0 +0x1982:  call   08543740 <+0x722>
085449a5 +0x1987:  mov    0xc(%ebp),%eax
085449a8 +0x198a:  mov    %eax,(%esp)
085449ab +0x198d:  call   08544c0d <+0x1bef>
085449b0 +0x1992:  mov    0x8(%ebp),%edx
085449b3 +0x1995:  mov    (%eax),%ecx
085449b5 +0x1997:  mov    %ecx,(%edx)
085449b7 +0x1999:  mov    0x4(%eax),%ecx
085449ba +0x199c:  mov    %ecx,0x4(%edx)
085449bd +0x199f:  mov    0x8(%eax),%ecx
085449c0 +0x19a2:  mov    %ecx,0x8(%edx)
085449c3 +0x19a5:  mov    0xc(%eax),%eax
085449c6 +0x19a8:  mov    %eax,0xc(%edx)
085449c9 +0x19ab:  lea    -0x18(%ebp),%eax
085449cc +0x19ae:  mov    %eax,(%esp)
085449cf +0x19b1:  call   08544c0d <+0x1bef>
085449d4 +0x19b6:  mov    0xc(%ebp),%edx
085449d7 +0x19b9:  mov    (%eax),%ecx
085449d9 +0x19bb:  mov    %ecx,(%edx)
085449db +0x19bd:  mov    0x4(%eax),%ecx
085449de +0x19c0:  mov    %ecx,0x4(%edx)
085449e1 +0x19c3:  mov    0x8(%eax),%ecx
085449e4 +0x19c6:  mov    %ecx,0x8(%edx)
085449e7 +0x19c9:  mov    0xc(%eax),%eax
085449ea +0x19cc:  mov    %eax,0xc(%edx)
085449ed +0x19cf:  leave
085449ee +0x19d0:  ret
085449ef +0x19d1:  push   %ebp
085449f0 +0x19d2:  mov    %esp,%ebp
085449f2 +0x19d4:  sub    $0x28,%esp
085449f5 +0x19d7:  mov    0x8(%ebp),%eax
085449f8 +0x19da:  mov    %eax,(%esp)
085449fb +0x19dd:  call   08544c15 <+0x1bf7>
08544a00 +0x19e2:  mov    (%eax),%eax
08544a02 +0x19e4:  mov    %eax,-0xc(%ebp)
08544a05 +0x19e7:  mov    0xc(%ebp),%eax
08544a08 +0x19ea:  mov    %eax,(%esp)
08544a0b +0x19ed:  call   08544c15 <+0x1bf7>
08544a10 +0x19f2:  mov    (%eax),%edx
08544a12 +0x19f4:  mov    0x8(%ebp),%eax
08544a15 +0x19f7:  mov    %edx,(%eax)
08544a17 +0x19f9:  lea    -0xc(%ebp),%eax
08544a1a +0x19fc:  mov    %eax,(%esp)
08544a1d +0x19ff:  call   08544c15 <+0x1bf7>
08544a22 +0x1a04:  mov    (%eax),%edx
08544a24 +0x1a06:  mov    0xc(%ebp),%eax
08544a27 +0x1a09:  mov    %edx,(%eax)
08544a29 +0x1a0b:  leave
08544a2a +0x1a0c:  ret
08544a2b +0x1a0d:  nop
08544a2c +0x1a0e:  push   %ebp
08544a2d +0x1a0f:  mov    %esp,%ebp
08544a2f +0x1a11:  sub    $0x18,%esp
08544a32 +0x1a14:  mov    0x8(%ebp),%eax
08544a35 +0x1a17:  mov    %eax,(%esp)
08544a38 +0x1a1a:  call   08544c1e <+0x1c00>
08544a3d +0x1a1f:  leave
08544a3e +0x1a20:  ret
08544a3f +0x1a21:  nop
08544a40 +0x1a22:  push   %ebp
08544a41 +0x1a23:  mov    %esp,%ebp
08544a43 +0x1a25:  pop    %ebp
08544a44 +0x1a26:  ret
08544a45 +0x1a27:  push   %ebp
08544a46 +0x1a28:  mov    %esp,%ebp
08544a48 +0x1a2a:  mov    0x8(%ebp),%eax
08544a4b +0x1a2d:  mov    0x8(%eax),%eax
08544a4e +0x1a30:  pop    %ebp
08544a4f +0x1a31:  ret
08544a50 +0x1a32:  push   %ebp
08544a51 +0x1a33:  mov    %esp,%ebp
08544a53 +0x1a35:  mov    0x8(%ebp),%eax
08544a56 +0x1a38:  mov    0xc(%eax),%eax
08544a59 +0x1a3b:  pop    %ebp
08544a5a +0x1a3c:  ret
08544a5b +0x1a3d:  push   %ebp
08544a5c +0x1a3e:  mov    %esp,%ebp
08544a5e +0x1a40:  mov    0x8(%ebp),%eax
08544a61 +0x1a43:  add    $0x10,%eax
08544a64 +0x1a46:  pop    %ebp
08544a65 +0x1a47:  ret
08544a66 +0x1a48:  push   %ebp
08544a67 +0x1a49:  mov    %esp,%ebp
08544a69 +0x1a4b:  mov    0x8(%ebp),%eax
08544a6c +0x1a4e:  add    $0x10,%eax
08544a6f +0x1a51:  pop    %ebp
08544a70 +0x1a52:  ret
08544a71 +0x1a53:  nop
08544a72 +0x1a54:  push   %ebp
08544a73 +0x1a55:  mov    %esp,%ebp
08544a75 +0x1a57:  push   %esi
08544a76 +0x1a58:  push   %ebx
08544a77 +0x1a59:  sub    $0x20,%esp
08544a7a +0x1a5c:  mov    0x8(%ebp),%eax
08544a7d +0x1a5f:  mov    %eax,(%esp)
08544a80 +0x1a62:  call   08544c24 <+0x1c06>
08544a85 +0x1a67:  mov    %eax,-0xc(%ebp)
08544a88 +0x1a6a:  mov    0xc(%ebp),%eax
08544a8b +0x1a6d:  mov    %eax,(%esp)
08544a8e +0x1a70:  call   08544c47 <+0x1c29>
08544a93 +0x1a75:  mov    %eax,%ebx
08544a95 +0x1a77:  mov    0x8(%ebp),%eax
08544a98 +0x1a7a:  mov    %eax,(%esp)
08544a9b +0x1a7d:  call   08544730 <+0x1712>
08544aa0 +0x1a82:  mov    %ebx,0x8(%esp)
08544aa4 +0x1a86:  mov    -0xc(%ebp),%edx
08544aa7 +0x1a89:  mov    %edx,0x4(%esp)
08544aab +0x1a8d:  mov    %eax,(%esp)
08544aae +0x1a90:  call   08544c50 <+0x1c32>
08544ab3 +0x1a95:  jmp    08544ae9 <+0x1acb>
08544ab5 +0x1a97:  mov    %eax,(%esp)
08544ab8 +0x1a9a:  call   08725ce0 <__cxa_begin_catch>
08544abd +0x1a9f:  mov    -0xc(%ebp),%eax
08544ac0 +0x1aa2:  mov    %eax,0x4(%esp)
08544ac4 +0x1aa6:  mov    0x8(%ebp),%eax
08544ac7 +0x1aa9:  mov    %eax,(%esp)
08544aca +0x1aac:  call   08544752 <+0x1734>
08544acf +0x1ab1:  call   08724be0 <__cxa_rethrow>
08544ad4 +0x1ab6:  mov    %edx,%ebx
08544ad6 +0x1ab8:  mov    %eax,%esi
08544ad8 +0x1aba:  call   08725c30 <__cxa_end_catch>
08544add +0x1abf:  mov    %esi,%eax
08544adf +0x1ac1:  mov    %ebx,%edx
08544ae1 +0x1ac3:  mov    %eax,(%esp)
08544ae4 +0x1ac6:  call   08ae3750 <_Unwind_Resume>
08544ae9 +0x1acb:  mov    -0xc(%ebp),%eax
08544aec +0x1ace:  add    $0x20,%esp
08544aef +0x1ad1:  pop    %ebx
08544af0 +0x1ad2:  pop    %esi
08544af1 +0x1ad3:  pop    %ebp
08544af2 +0x1ad4:  ret
08544af3 +0x1ad5:  push   %ebp
08544af4 +0x1ad6:  mov    %esp,%ebp
08544af6 +0x1ad8:  mov    0x8(%ebp),%eax
08544af9 +0x1adb:  pop    %ebp
08544afa +0x1adc:  ret
08544afb +0x1add:  push   %ebp
08544afc +0x1ade:  mov    %esp,%ebp
08544afe +0x1ae0:  mov    0x8(%ebp),%eax
08544b01 +0x1ae3:  pop    %ebp
08544b02 +0x1ae4:  ret
08544b03 +0x1ae5:  nop
08544b04 +0x1ae6:  push   %ebp
08544b05 +0x1ae7:  mov    %esp,%ebp
08544b07 +0x1ae9:  push   %esi
08544b08 +0x1aea:  push   %ebx
08544b09 +0x1aeb:  sub    $0x10,%esp
08544b0c +0x1aee:  mov    0xc(%ebp),%eax
08544b0f +0x1af1:  lea    0x1(%eax),%ebx
08544b12 +0x1af4:  mov    0x8(%ebp),%eax
08544b15 +0x1af7:  mov    0x4(%eax),%edx
08544b18 +0x1afa:  mov    0x8(%ebp),%eax
08544b1b +0x1afd:  mov    0x24(%eax),%eax
08544b1e +0x1b00:  mov    %eax,%ecx
08544b20 +0x1b02:  mov    0x8(%ebp),%eax
08544b23 +0x1b05:  mov    (%eax),%eax
08544b25 +0x1b07:  mov    %ecx,%esi
08544b27 +0x1b09:  sub    %eax,%esi
08544b29 +0x1b0b:  mov    %esi,%eax
08544b2b +0x1b0d:  sar    $0x2,%eax
08544b2e +0x1b10:  mov    %edx,%ecx
08544b30 +0x1b12:  sub    %eax,%ecx
08544b32 +0x1b14:  mov    %ecx,%eax
08544b34 +0x1b16:  cmp    %eax,%ebx
08544b36 +0x1b18:  jbe    08544b52 <+0x1b34>
08544b38 +0x1b1a:  movl   $0x0,0x8(%esp)
08544b40 +0x1b22:  mov    0xc(%ebp),%eax
08544b43 +0x1b25:  mov    %eax,0x4(%esp)
08544b47 +0x1b29:  mov    0x8(%ebp),%eax
08544b4a +0x1b2c:  mov    %eax,(%esp)
08544b4d +0x1b2f:  call   08544c90 <+0x1c72>
08544b52 +0x1b34:  add    $0x10,%esp
08544b55 +0x1b37:  pop    %ebx
08544b56 +0x1b38:  pop    %esi
08544b57 +0x1b39:  pop    %ebp
08544b58 +0x1b3a:  ret
08544b59 +0x1b3b:  nop
08544b5a +0x1b3c:  push   %ebp
08544b5b +0x1b3d:  mov    %esp,%ebp
08544b5d +0x1b3f:  sub    $0x18,%esp
08544b60 +0x1b42:  movl   $0x1,(%esp)
08544b67 +0x1b49:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08544b6c +0x1b4e:  mov    0x8(%ebp),%edx
08544b6f +0x1b51:  movl   $0x0,0x8(%esp)
08544b77 +0x1b59:  mov    %eax,0x4(%esp)
08544b7b +0x1b5d:  mov    %edx,(%esp)
08544b7e +0x1b60:  call   0807f5d4 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x6a4>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x6a4
08544b83 +0x1b65:  leave
08544b84 +0x1b66:  ret
08544b85 +0x1b67:  nop
08544b86 +0x1b68:  push   %ebp
08544b87 +0x1b69:  mov    %esp,%ebp
08544b89 +0x1b6b:  pop    %ebp
08544b8a +0x1b6c:  ret
08544b8b +0x1b6d:  nop
08544b8c +0x1b6e:  push   %ebp
08544b8d +0x1b6f:  mov    %esp,%ebp
08544b8f +0x1b71:  sub    $0x18,%esp
08544b92 +0x1b74:  mov    0xc(%ebp),%eax
08544b95 +0x1b77:  mov    %eax,(%esp)
08544b98 +0x1b7a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08544b9d +0x1b7f:  leave
08544b9e +0x1b80:  ret
08544b9f +0x1b81:  nop
08544ba0 +0x1b82:  push   %ebp
08544ba1 +0x1b83:  mov    %esp,%ebp
08544ba3 +0x1b85:  sub    $0x18,%esp
08544ba6 +0x1b88:  mov    0x8(%ebp),%eax
08544ba9 +0x1b8b:  mov    %eax,(%esp)
08544bac +0x1b8e:  call   08544e60 <+0x1e42>
08544bb1 +0x1b93:  cmp    0xc(%ebp),%eax
08544bb4 +0x1b96:  setb   %al
08544bb7 +0x1b99:  movzbl %al,%eax
08544bba +0x1b9c:  test   %eax,%eax
08544bbc +0x1b9e:  setne  %al
08544bbf +0x1ba1:  test   %al,%al
08544bc1 +0x1ba3:  je     08544bc8 <+0x1baa>
08544bc3 +0x1ba5:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08544bc8 +0x1baa:  mov    0xc(%ebp),%eax
08544bcb +0x1bad:  shl    $0x2,%eax
08544bce +0x1bb0:  mov    %eax,(%esp)
08544bd1 +0x1bb3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08544bd6 +0x1bb8:  leave
08544bd7 +0x1bb9:  ret
08544bd8 +0x1bba:  push   %ebp
08544bd9 +0x1bbb:  mov    %esp,%ebp
08544bdb +0x1bbd:  sub    $0x18,%esp
08544bde +0x1bc0:  movl   $0x1,(%esp)
08544be5 +0x1bc7:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08544bea +0x1bcc:  leave
08544beb +0x1bcd:  ret
08544bec +0x1bce:  push   %ebp
08544bed +0x1bcf:  mov    %esp,%ebp
08544bef +0x1bd1:  mov    0x8(%ebp),%eax
08544bf2 +0x1bd4:  pop    %ebp
08544bf3 +0x1bd5:  ret
08544bf4 +0x1bd6:  push   %ebp
08544bf5 +0x1bd7:  mov    %esp,%ebp
08544bf7 +0x1bd9:  sub    $0x18,%esp
08544bfa +0x1bdc:  mov    0x8(%ebp),%eax
08544bfd +0x1bdf:  mov    %eax,(%esp)
08544c00 +0x1be2:  call   08544e6a <+0x1e4c>
08544c05 +0x1be7:  leave
08544c06 +0x1be8:  ret
08544c07 +0x1be9:  nop
08544c08 +0x1bea:  push   %ebp
08544c09 +0x1beb:  mov    %esp,%ebp
08544c0b +0x1bed:  pop    %ebp
08544c0c +0x1bee:  ret
08544c0d +0x1bef:  push   %ebp
08544c0e +0x1bf0:  mov    %esp,%ebp
08544c10 +0x1bf2:  mov    0x8(%ebp),%eax
08544c13 +0x1bf5:  pop    %ebp
08544c14 +0x1bf6:  ret
08544c15 +0x1bf7:  push   %ebp
08544c16 +0x1bf8:  mov    %esp,%ebp
08544c18 +0x1bfa:  mov    0x8(%ebp),%eax
08544c1b +0x1bfd:  pop    %ebp
08544c1c +0x1bfe:  ret
08544c1d +0x1bff:  nop
08544c1e +0x1c00:  push   %ebp
08544c1f +0x1c01:  mov    %esp,%ebp
08544c21 +0x1c03:  pop    %ebp
08544c22 +0x1c04:  ret
08544c23 +0x1c05:  nop
08544c24 +0x1c06:  push   %ebp
08544c25 +0x1c07:  mov    %esp,%ebp
08544c27 +0x1c09:  sub    $0x18,%esp
08544c2a +0x1c0c:  mov    0x8(%ebp),%eax
08544c2d +0x1c0f:  movl   $0x0,0x8(%esp)
08544c35 +0x1c17:  movl   $0x1,0x4(%esp)
08544c3d +0x1c1f:  mov    %eax,(%esp)
08544c40 +0x1c22:  call   08544e70 <+0x1e52>
08544c45 +0x1c27:  leave
08544c46 +0x1c28:  ret
08544c47 +0x1c29:  push   %ebp
08544c48 +0x1c2a:  mov    %esp,%ebp
08544c4a +0x1c2c:  mov    0x8(%ebp),%eax
08544c4d +0x1c2f:  pop    %ebp
08544c4e +0x1c30:  ret
08544c4f +0x1c31:  nop
08544c50 +0x1c32:  push   %ebp
08544c51 +0x1c33:  mov    %esp,%ebp
08544c53 +0x1c35:  push   %ebx
08544c54 +0x1c36:  sub    $0x14,%esp
08544c57 +0x1c39:  mov    0x10(%ebp),%eax
08544c5a +0x1c3c:  mov    %eax,(%esp)
08544c5d +0x1c3f:  call   08544c47 <+0x1c29>
08544c62 +0x1c44:  mov    %eax,%ebx
08544c64 +0x1c46:  mov    0xc(%ebp),%eax
08544c67 +0x1c49:  mov    %eax,0x4(%esp)
08544c6b +0x1c4d:  movl   $0x1c,(%esp)
08544c72 +0x1c54:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08544c77 +0x1c59:  mov    %eax,%edx
08544c79 +0x1c5b:  test   %edx,%edx
08544c7b +0x1c5d:  je     08544c89 <+0x1c6b>
08544c7d +0x1c5f:  mov    %ebx,0x4(%esp)
08544c81 +0x1c63:  mov    %eax,(%esp)
08544c84 +0x1c66:  call   08544eb6 <+0x1e98>
08544c89 +0x1c6b:  add    $0x14,%esp
08544c8c +0x1c6e:  pop    %ebx
08544c8d +0x1c6f:  pop    %ebp
08544c8e +0x1c70:  ret
08544c8f +0x1c71:  nop
08544c90 +0x1c72:  push   %ebp
08544c91 +0x1c73:  mov    %esp,%ebp
08544c93 +0x1c75:  push   %ebx
08544c94 +0x1c76:  sub    $0x44,%esp
08544c97 +0x1c79:  mov    0x10(%ebp),%eax
08544c9a +0x1c7c:  mov    %al,-0x2c(%ebp)
08544c9d +0x1c7f:  mov    0x8(%ebp),%eax
08544ca0 +0x1c82:  mov    0x24(%eax),%eax
08544ca3 +0x1c85:  mov    %eax,%edx
08544ca5 +0x1c87:  mov    0x8(%ebp),%eax
08544ca8 +0x1c8a:  mov    0x14(%eax),%eax
08544cab +0x1c8d:  mov    %edx,%ecx
08544cad +0x1c8f:  sub    %eax,%ecx
08544caf +0x1c91:  mov    %ecx,%eax
08544cb1 +0x1c93:  sar    $0x2,%eax
08544cb4 +0x1c96:  add    $0x1,%eax
08544cb7 +0x1c99:  mov    %eax,-0x1c(%ebp)
08544cba +0x1c9c:  mov    0xc(%ebp),%eax
08544cbd +0x1c9f:  add    -0x1c(%ebp),%eax
08544cc0 +0x1ca2:  mov    %eax,-0x18(%ebp)
08544cc3 +0x1ca5:  mov    0x8(%ebp),%eax
08544cc6 +0x1ca8:  mov    0x4(%eax),%eax
08544cc9 +0x1cab:  mov    -0x18(%ebp),%edx
08544ccc +0x1cae:  add    %edx,%edx
08544cce +0x1cb0:  cmp    %edx,%eax
08544cd0 +0x1cb2:  jbe    08544d6a <+0x1d4c>
08544cd6 +0x1cb8:  mov    0x8(%ebp),%eax
08544cd9 +0x1cbb:  mov    (%eax),%edx
08544cdb +0x1cbd:  mov    0x8(%ebp),%eax
08544cde +0x1cc0:  mov    0x4(%eax),%eax
08544ce1 +0x1cc3:  sub    -0x18(%ebp),%eax
08544ce4 +0x1cc6:  shr    %eax
08544ce6 +0x1cc8:  lea    0x0(,%eax,4),%ecx
08544ced +0x1ccf:  cmpb   $0x0,-0x2c(%ebp)
08544cf1 +0x1cd3:  je     08544cfb <+0x1cdd>
08544cf3 +0x1cd5:  mov    0xc(%ebp),%eax
08544cf6 +0x1cd8:  shl    $0x2,%eax
08544cf9 +0x1cdb:  jmp    08544d00 <+0x1ce2>
08544cfb +0x1cdd:  mov    $0x0,%eax
08544d00 +0x1ce2:  lea    (%ecx,%eax,1),%eax
08544d03 +0x1ce5:  lea    (%edx,%eax,1),%eax
08544d06 +0x1ce8:  mov    %eax,-0x14(%ebp)
08544d09 +0x1ceb:  mov    0x8(%ebp),%eax
08544d0c +0x1cee:  mov    0x14(%eax),%eax
08544d0f +0x1cf1:  cmp    -0x14(%ebp),%eax
08544d12 +0x1cf4:  jbe    08544d3b <+0x1d1d>
08544d14 +0x1cf6:  mov    0x8(%ebp),%eax
08544d17 +0x1cf9:  mov    0x24(%eax),%eax
08544d1a +0x1cfc:  lea    0x4(%eax),%ecx
08544d1d +0x1cff:  mov    0x8(%ebp),%eax
08544d20 +0x1d02:  mov    0x14(%eax),%eax
08544d23 +0x1d05:  mov    -0x14(%ebp),%edx
08544d26 +0x1d08:  mov    %edx,0x8(%esp)
08544d2a +0x1d0c:  mov    %ecx,0x4(%esp)
08544d2e +0x1d10:  mov    %eax,(%esp)
08544d31 +0x1d13:  call   08544f04 <+0x1ee6>
08544d36 +0x1d18:  jmp    08544e27 <+0x1e09>
08544d3b +0x1d1d:  mov    -0x1c(%ebp),%eax
08544d3e +0x1d20:  shl    $0x2,%eax
08544d41 +0x1d23:  mov    %eax,%edx
08544d43 +0x1d25:  add    -0x14(%ebp),%edx
08544d46 +0x1d28:  mov    0x8(%ebp),%eax
08544d49 +0x1d2b:  mov    0x24(%eax),%eax
08544d4c +0x1d2e:  lea    0x4(%eax),%ecx
08544d4f +0x1d31:  mov    0x8(%ebp),%eax
08544d52 +0x1d34:  mov    0x14(%eax),%eax
08544d55 +0x1d37:  mov    %edx,0x8(%esp)
08544d59 +0x1d3b:  mov    %ecx,0x4(%esp)
08544d5d +0x1d3f:  mov    %eax,(%esp)
08544d60 +0x1d42:  call   08544f3c <+0x1f1e>
08544d65 +0x1d47:  jmp    08544e27 <+0x1e09>
08544d6a +0x1d4c:  mov    0x8(%ebp),%eax
08544d6d +0x1d4f:  mov    0x4(%eax),%ebx
08544d70 +0x1d52:  mov    0x8(%ebp),%eax
08544d73 +0x1d55:  lea    0x4(%eax),%edx
08544d76 +0x1d58:  lea    0xc(%ebp),%eax
08544d79 +0x1d5b:  mov    %eax,0x4(%esp)
08544d7d +0x1d5f:  mov    %edx,(%esp)
08544d80 +0x1d62:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08544d85 +0x1d67:  mov    (%eax),%eax
08544d87 +0x1d69:  lea    (%ebx,%eax,1),%eax
08544d8a +0x1d6c:  add    $0x2,%eax
08544d8d +0x1d6f:  mov    %eax,-0x10(%ebp)
08544d90 +0x1d72:  mov    0x8(%ebp),%eax
08544d93 +0x1d75:  mov    -0x10(%ebp),%edx
08544d96 +0x1d78:  mov    %edx,0x4(%esp)
08544d9a +0x1d7c:  mov    %eax,(%esp)
08544d9d +0x1d7f:  call   085447a0 <+0x1782>
08544da2 +0x1d84:  mov    %eax,-0xc(%ebp)
08544da5 +0x1d87:  mov    -0x18(%ebp),%eax
08544da8 +0x1d8a:  mov    -0x10(%ebp),%edx
08544dab +0x1d8d:  mov    %edx,%ecx
08544dad +0x1d8f:  sub    %eax,%ecx
08544daf +0x1d91:  mov    %ecx,%eax
08544db1 +0x1d93:  shr    %eax
08544db3 +0x1d95:  lea    0x0(,%eax,4),%edx
08544dba +0x1d9c:  cmpb   $0x0,-0x2c(%ebp)
08544dbe +0x1da0:  je     08544dc8 <+0x1daa>
08544dc0 +0x1da2:  mov    0xc(%ebp),%eax
08544dc3 +0x1da5:  shl    $0x2,%eax
08544dc6 +0x1da8:  jmp    08544dcd <+0x1daf>
08544dc8 +0x1daa:  mov    $0x0,%eax
08544dcd +0x1daf:  lea    (%edx,%eax,1),%eax
08544dd0 +0x1db2:  add    -0xc(%ebp),%eax
08544dd3 +0x1db5:  mov    %eax,-0x14(%ebp)
08544dd6 +0x1db8:  mov    0x8(%ebp),%eax
08544dd9 +0x1dbb:  mov    0x24(%eax),%eax
08544ddc +0x1dbe:  lea    0x4(%eax),%ecx
08544ddf +0x1dc1:  mov    0x8(%ebp),%eax
08544de2 +0x1dc4:  mov    0x14(%eax),%eax
08544de5 +0x1dc7:  mov    -0x14(%ebp),%edx
08544de8 +0x1dca:  mov    %edx,0x8(%esp)
08544dec +0x1dce:  mov    %ecx,0x4(%esp)
08544df0 +0x1dd2:  mov    %eax,(%esp)
08544df3 +0x1dd5:  call   08544f04 <+0x1ee6>
08544df8 +0x1dda:  mov    0x8(%ebp),%eax
08544dfb +0x1ddd:  mov    0x4(%eax),%ecx
08544dfe +0x1de0:  mov    0x8(%ebp),%eax
08544e01 +0x1de3:  mov    (%eax),%edx
08544e03 +0x1de5:  mov    0x8(%ebp),%eax
08544e06 +0x1de8:  mov    %ecx,0x8(%esp)
08544e0a +0x1dec:  mov    %edx,0x4(%esp)
08544e0e +0x1df0:  mov    %eax,(%esp)
08544e11 +0x1df3:  call   08544132 <+0x1114>
08544e16 +0x1df8:  mov    0x8(%ebp),%eax
08544e19 +0x1dfb:  mov    -0xc(%ebp),%edx
08544e1c +0x1dfe:  mov    %edx,(%eax)
08544e1e +0x1e00:  mov    0x8(%ebp),%eax
08544e21 +0x1e03:  mov    -0x10(%ebp),%edx
08544e24 +0x1e06:  mov    %edx,0x4(%eax)
08544e27 +0x1e09:  mov    0x8(%ebp),%eax
08544e2a +0x1e0c:  lea    0x8(%eax),%edx
08544e2d +0x1e0f:  mov    -0x14(%ebp),%eax
08544e30 +0x1e12:  mov    %eax,0x4(%esp)
08544e34 +0x1e16:  mov    %edx,(%esp)
08544e37 +0x1e19:  call   08544882 <+0x1864>
08544e3c +0x1e1e:  mov    -0x1c(%ebp),%eax
08544e3f +0x1e21:  sub    $0x1,%eax
08544e42 +0x1e24:  shl    $0x2,%eax
08544e45 +0x1e27:  add    -0x14(%ebp),%eax
08544e48 +0x1e2a:  mov    0x8(%ebp),%edx
08544e4b +0x1e2d:  add    $0x18,%edx
08544e4e +0x1e30:  mov    %eax,0x4(%esp)
08544e52 +0x1e34:  mov    %edx,(%esp)
08544e55 +0x1e37:  call   08544882 <+0x1864>
08544e5a +0x1e3c:  add    $0x44,%esp
08544e5d +0x1e3f:  pop    %ebx
08544e5e +0x1e40:  pop    %ebp
08544e5f +0x1e41:  ret
08544e60 +0x1e42:  push   %ebp
08544e61 +0x1e43:  mov    %esp,%ebp
08544e63 +0x1e45:  mov    $0x3fffffff,%eax
08544e68 +0x1e4a:  pop    %ebp
08544e69 +0x1e4b:  ret
08544e6a +0x1e4c:  push   %ebp
08544e6b +0x1e4d:  mov    %esp,%ebp
08544e6d +0x1e4f:  pop    %ebp
08544e6e +0x1e50:  ret
08544e6f +0x1e51:  nop
08544e70 +0x1e52:  push   %ebp
08544e71 +0x1e53:  mov    %esp,%ebp
08544e73 +0x1e55:  sub    $0x18,%esp
08544e76 +0x1e58:  mov    0x8(%ebp),%eax
08544e79 +0x1e5b:  mov    %eax,(%esp)
08544e7c +0x1e5e:  call   08544f74 <+0x1f56>
08544e81 +0x1e63:  cmp    0xc(%ebp),%eax
08544e84 +0x1e66:  setb   %al
08544e87 +0x1e69:  movzbl %al,%eax
08544e8a +0x1e6c:  test   %eax,%eax
08544e8c +0x1e6e:  setne  %al
08544e8f +0x1e71:  test   %al,%al
08544e91 +0x1e73:  je     08544e98 <+0x1e7a>
08544e93 +0x1e75:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08544e98 +0x1e7a:  mov    0xc(%ebp),%eax
08544e9b +0x1e7d:  shl    $0x2,%eax
08544e9e +0x1e80:  lea    0x0(,%eax,8),%edx
08544ea5 +0x1e87:  mov    %edx,%ecx
08544ea7 +0x1e89:  sub    %eax,%ecx
08544ea9 +0x1e8b:  mov    %ecx,%eax
08544eab +0x1e8d:  mov    %eax,(%esp)
08544eae +0x1e90:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08544eb3 +0x1e95:  leave
08544eb4 +0x1e96:  ret
08544eb5 +0x1e97:  nop
08544eb6 +0x1e98:  push   %ebp
08544eb7 +0x1e99:  mov    %esp,%ebp
08544eb9 +0x1e9b:  sub    $0x18,%esp
08544ebc +0x1e9e:  mov    0x8(%ebp),%eax
08544ebf +0x1ea1:  movl   $0x0,(%eax)
08544ec5 +0x1ea7:  mov    0x8(%ebp),%eax
08544ec8 +0x1eaa:  movl   $0x0,0x4(%eax)
08544ecf +0x1eb1:  mov    0x8(%ebp),%eax
08544ed2 +0x1eb4:  movl   $0x0,0x8(%eax)
08544ed9 +0x1ebb:  mov    0x8(%ebp),%eax
08544edc +0x1ebe:  movl   $0x0,0xc(%eax)
08544ee3 +0x1ec5:  mov    0xc(%ebp),%eax
08544ee6 +0x1ec8:  mov    %eax,(%esp)
08544ee9 +0x1ecb:  call   08544c47 <+0x1c29>
08544eee +0x1ed0:  mov    0x8(%ebp),%edx
08544ef1 +0x1ed3:  mov    (%eax),%ecx
08544ef3 +0x1ed5:  mov    %ecx,0x10(%edx)
08544ef6 +0x1ed8:  mov    0x4(%eax),%ecx
08544ef9 +0x1edb:  mov    %ecx,0x14(%edx)
08544efc +0x1ede:  mov    0x8(%eax),%eax
08544eff +0x1ee1:  mov    %eax,0x18(%edx)
08544f02 +0x1ee4:  leave
08544f03 +0x1ee5:  ret
08544f04 +0x1ee6:  push   %ebp
08544f05 +0x1ee7:  mov    %esp,%ebp
08544f07 +0x1ee9:  push   %ebx
08544f08 +0x1eea:  sub    $0x14,%esp
08544f0b +0x1eed:  mov    0xc(%ebp),%eax
08544f0e +0x1ef0:  mov    %eax,(%esp)
08544f11 +0x1ef3:  call   08544f7e <+0x1f60>
08544f16 +0x1ef8:  mov    %eax,%ebx
08544f18 +0x1efa:  mov    0x8(%ebp),%eax
08544f1b +0x1efd:  mov    %eax,(%esp)
08544f1e +0x1f00:  call   08544f7e <+0x1f60>
08544f23 +0x1f05:  mov    0x10(%ebp),%edx
08544f26 +0x1f08:  mov    %edx,0x8(%esp)
08544f2a +0x1f0c:  mov    %ebx,0x4(%esp)
08544f2e +0x1f10:  mov    %eax,(%esp)
08544f31 +0x1f13:  call   08544f86 <+0x1f68>
08544f36 +0x1f18:  add    $0x14,%esp
08544f39 +0x1f1b:  pop    %ebx
08544f3a +0x1f1c:  pop    %ebp
08544f3b +0x1f1d:  ret
08544f3c +0x1f1e:  push   %ebp
08544f3d +0x1f1f:  mov    %esp,%ebp
08544f3f +0x1f21:  push   %ebx
08544f40 +0x1f22:  sub    $0x14,%esp
08544f43 +0x1f25:  mov    0xc(%ebp),%eax
08544f46 +0x1f28:  mov    %eax,(%esp)
08544f49 +0x1f2b:  call   08544f7e <+0x1f60>
08544f4e +0x1f30:  mov    %eax,%ebx
08544f50 +0x1f32:  mov    0x8(%ebp),%eax
08544f53 +0x1f35:  mov    %eax,(%esp)
08544f56 +0x1f38:  call   08544f7e <+0x1f60>
08544f5b +0x1f3d:  mov    0x10(%ebp),%edx
08544f5e +0x1f40:  mov    %edx,0x8(%esp)
08544f62 +0x1f44:  mov    %ebx,0x4(%esp)
08544f66 +0x1f48:  mov    %eax,(%esp)
08544f69 +0x1f4b:  call   08544fca <+0x1fac>
08544f6e +0x1f50:  add    $0x14,%esp
08544f71 +0x1f53:  pop    %ebx
08544f72 +0x1f54:  pop    %ebp
08544f73 +0x1f55:  ret
08544f74 +0x1f56:  push   %ebp
08544f75 +0x1f57:  mov    %esp,%ebp
08544f77 +0x1f59:  mov    $"}p�.",%eax
08544f7c +0x1f5e:  pop    %ebp
08544f7d +0x1f5f:  ret
08544f7e +0x1f60:  push   %ebp
08544f7f +0x1f61:  mov    %esp,%ebp
08544f81 +0x1f63:  mov    0x8(%ebp),%eax
08544f84 +0x1f66:  pop    %ebp
08544f85 +0x1f67:  ret
08544f86 +0x1f68:  push   %ebp
08544f87 +0x1f69:  mov    %esp,%ebp
08544f89 +0x1f6b:  push   %esi
08544f8a +0x1f6c:  push   %ebx
08544f8b +0x1f6d:  sub    $0x10,%esp
08544f8e +0x1f70:  mov    0x10(%ebp),%eax
08544f91 +0x1f73:  mov    %eax,(%esp)
08544f94 +0x1f76:  call   0854500e <+0x1ff0>
08544f99 +0x1f7b:  mov    %eax,%esi
08544f9b +0x1f7d:  mov    0xc(%ebp),%eax
08544f9e +0x1f80:  mov    %eax,(%esp)
08544fa1 +0x1f83:  call   0854500e <+0x1ff0>
08544fa6 +0x1f88:  mov    %eax,%ebx
08544fa8 +0x1f8a:  mov    0x8(%ebp),%eax
08544fab +0x1f8d:  mov    %eax,(%esp)
08544fae +0x1f90:  call   0854500e <+0x1ff0>
08544fb3 +0x1f95:  mov    %esi,0x8(%esp)
08544fb7 +0x1f99:  mov    %ebx,0x4(%esp)
08544fbb +0x1f9d:  mov    %eax,(%esp)
08544fbe +0x1fa0:  call   08545016 <+0x1ff8>
08544fc3 +0x1fa5:  add    $0x10,%esp
08544fc6 +0x1fa8:  pop    %ebx
08544fc7 +0x1fa9:  pop    %esi
08544fc8 +0x1faa:  pop    %ebp
08544fc9 +0x1fab:  ret
08544fca +0x1fac:  push   %ebp
08544fcb +0x1fad:  mov    %esp,%ebp
08544fcd +0x1faf:  push   %esi
08544fce +0x1fb0:  push   %ebx
08544fcf +0x1fb1:  sub    $0x10,%esp
08544fd2 +0x1fb4:  mov    0x10(%ebp),%eax
08544fd5 +0x1fb7:  mov    %eax,(%esp)
08544fd8 +0x1fba:  call   0854500e <+0x1ff0>
08544fdd +0x1fbf:  mov    %eax,%esi
08544fdf +0x1fc1:  mov    0xc(%ebp),%eax
08544fe2 +0x1fc4:  mov    %eax,(%esp)
08544fe5 +0x1fc7:  call   0854500e <+0x1ff0>
08544fea +0x1fcc:  mov    %eax,%ebx
08544fec +0x1fce:  mov    0x8(%ebp),%eax
08544fef +0x1fd1:  mov    %eax,(%esp)
08544ff2 +0x1fd4:  call   0854500e <+0x1ff0>
08544ff7 +0x1fd9:  mov    %esi,0x8(%esp)
08544ffb +0x1fdd:  mov    %ebx,0x4(%esp)
08544fff +0x1fe1:  mov    %eax,(%esp)
08545002 +0x1fe4:  call   0854503b <+0x201d>
08545007 +0x1fe9:  add    $0x10,%esp
0854500a +0x1fec:  pop    %ebx
0854500b +0x1fed:  pop    %esi
0854500c +0x1fee:  pop    %ebp
0854500d +0x1fef:  ret
0854500e +0x1ff0:  push   %ebp
0854500f +0x1ff1:  mov    %esp,%ebp
08545011 +0x1ff3:  mov    0x8(%ebp),%eax
08545014 +0x1ff6:  pop    %ebp
08545015 +0x1ff7:  ret
08545016 +0x1ff8:  push   %ebp
08545017 +0x1ff9:  mov    %esp,%ebp
08545019 +0x1ffb:  sub    $0x28,%esp
0854501c +0x1ffe:  movb   $0x1,-0x9(%ebp)
08545020 +0x2002:  mov    0x10(%ebp),%eax
08545023 +0x2005:  mov    %eax,0x8(%esp)
08545027 +0x2009:  mov    0xc(%ebp),%eax
0854502a +0x200c:  mov    %eax,0x4(%esp)
0854502e +0x2010:  mov    0x8(%ebp),%eax
08545031 +0x2013:  mov    %eax,(%esp)
08545034 +0x2016:  call   08545060 <+0x2042>
08545039 +0x201b:  leave
0854503a +0x201c:  ret
0854503b +0x201d:  push   %ebp
0854503c +0x201e:  mov    %esp,%ebp
0854503e +0x2020:  sub    $0x28,%esp
08545041 +0x2023:  movb   $0x1,-0x9(%ebp)
08545045 +0x2027:  mov    0x10(%ebp),%eax
08545048 +0x202a:  mov    %eax,0x8(%esp)
0854504c +0x202e:  mov    0xc(%ebp),%eax
0854504f +0x2031:  mov    %eax,0x4(%esp)
08545053 +0x2035:  mov    0x8(%ebp),%eax
08545056 +0x2038:  mov    %eax,(%esp)
08545059 +0x203b:  call   085450a5 <+0x2087>
0854505e +0x2040:  leave
0854505f +0x2041:  ret
08545060 +0x2042:  push   %ebp
08545061 +0x2043:  mov    %esp,%ebp
08545063 +0x2045:  sub    $0x18,%esp
08545066 +0x2048:  mov    0xc(%ebp),%edx
08545069 +0x204b:  mov    0x8(%ebp),%eax
0854506c +0x204e:  mov    %edx,%ecx
0854506e +0x2050:  sub    %eax,%ecx
08545070 +0x2052:  mov    %ecx,%eax
08545072 +0x2054:  sar    $0x2,%eax
08545075 +0x2057:  shl    $0x2,%eax
08545078 +0x205a:  mov    %eax,0x8(%esp)
0854507c +0x205e:  mov    0x8(%ebp),%eax
0854507f +0x2061:  mov    %eax,0x4(%esp)
08545083 +0x2065:  mov    0x10(%ebp),%eax
08545086 +0x2068:  mov    %eax,(%esp)
08545089 +0x206b:  call   0807d880 <_init+0x178>
0854508e +0x2070:  mov    0xc(%ebp),%edx
08545091 +0x2073:  mov    0x8(%ebp),%eax
08545094 +0x2076:  mov    %edx,%ecx
08545096 +0x2078:  sub    %eax,%ecx
08545098 +0x207a:  mov    %ecx,%eax
0854509a +0x207c:  sar    $0x2,%eax
0854509d +0x207f:  shl    $0x2,%eax
085450a0 +0x2082:  add    0x10(%ebp),%eax
085450a3 +0x2085:  leave
085450a4 +0x2086:  ret
085450a5 +0x2087:  push   %ebp
085450a6 +0x2088:  mov    %esp,%ebp
085450a8 +0x208a:  sub    $0x28,%esp
085450ab +0x208d:  mov    0xc(%ebp),%edx
085450ae +0x2090:  mov    0x8(%ebp),%eax
085450b1 +0x2093:  mov    %edx,%ecx
085450b3 +0x2095:  sub    %eax,%ecx
085450b5 +0x2097:  mov    %ecx,%eax
085450b7 +0x2099:  sar    $0x2,%eax
085450ba +0x209c:  mov    %eax,-0xc(%ebp)
085450bd +0x209f:  mov    -0xc(%ebp),%eax
085450c0 +0x20a2:  lea    0x0(,%eax,4),%edx
085450c7 +0x20a9:  mov    -0xc(%ebp),%eax
085450ca +0x20ac:  shl    $0x2,%eax
085450cd +0x20af:  neg    %eax
085450cf +0x20b1:  add    0x10(%ebp),%eax
085450d2 +0x20b4:  mov    %edx,0x8(%esp)
085450d6 +0x20b8:  mov    0x8(%ebp),%edx
085450d9 +0x20bb:  mov    %edx,0x4(%esp)
085450dd +0x20bf:  mov    %eax,(%esp)
085450e0 +0x20c2:  call   0807d880 <_init+0x178>
085450e5 +0x20c7:  mov    -0xc(%ebp),%eax
085450e8 +0x20ca:  shl    $0x2,%eax
085450eb +0x20cd:  neg    %eax
085450ed +0x20cf:  add    0x10(%ebp),%eax
085450f0 +0x20d2:  leave
085450f1 +0x20d3:  ret
085450f2 +0x20d4:  nop
085450f3 +0x20d5:  nop
```

## 反编译 C

```c
// <global>::global @ 0x854301e

/* item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*) */

void item_lock::CItemLockTimer::_GLOBAL__I_IncreaseItemLockTimer(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
