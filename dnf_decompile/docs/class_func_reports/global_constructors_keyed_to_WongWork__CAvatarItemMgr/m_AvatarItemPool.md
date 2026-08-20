# m_AvatarItemPool

`_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE`

`global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CAvatarItemMgr` | `0x082fa1ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fa1ce  _GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE
#           global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool
# range [0x082fa1ce, 0x082fd33b]
082fa1ce +0x0000:  push   %ebp
082fa1cf +0x0001:  mov    %esp,%ebp
082fa1d1 +0x0003:  sub    $0x18,%esp
082fa1d4 +0x0006:  movl   $0xffff,0x4(%esp)
082fa1dc +0x000e:  movl   $0x1,(%esp)
082fa1e3 +0x0015:  call   082fa155 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082fa1e8 +0x001a:  leave
082fa1e9 +0x001b:  ret
082fa1ea +0x001c:  push   %ebp
082fa1eb +0x001d:  mov    %esp,%ebp
082fa1ed +0x001f:  mov    0x8(%ebp),%eax
082fa1f0 +0x0022:  mov    (%eax),%eax
082fa1f2 +0x0024:  pop    %ebp
082fa1f3 +0x0025:  ret
082fa1f4 +0x0026:  push   %ebp
082fa1f5 +0x0027:  mov    %esp,%ebp
082fa1f7 +0x0029:  sub    $0x10,%esp
082fa1fa +0x002c:  mov    0x8(%ebp),%eax
082fa1fd +0x002f:  mov    (%eax),%eax
082fa1ff +0x0031:  test   %eax,%eax
082fa201 +0x0033:  jle    082fa220 <+0x52>
082fa203 +0x0035:  mov    0x8(%ebp),%eax
082fa206 +0x0038:  mov    (%eax),%eax
082fa208 +0x003a:  sub    0xc(%ebp),%eax
082fa20b +0x003d:  mov    %eax,-0x4(%ebp)
082fa20e +0x0040:  cmpl   $0x0,-0x4(%ebp)
082fa212 +0x0044:  jne    082fa21b <+0x4d>
082fa214 +0x0046:  mov    $0x1,%eax
082fa219 +0x004b:  jmp    082fa225 <+0x57>
082fa21b +0x004d:  mov    -0x4(%ebp),%eax
082fa21e +0x0050:  jmp    082fa225 <+0x57>
082fa220 +0x0052:  mov    0x8(%ebp),%eax
082fa223 +0x0055:  mov    (%eax),%eax
082fa225 +0x0057:  leave
082fa226 +0x0058:  ret
082fa227 +0x0059:  nop
082fa228 +0x005a:  push   %ebp
082fa229 +0x005b:  mov    %esp,%ebp
082fa22b +0x005d:  mov    0x8(%ebp),%eax
082fa22e +0x0060:  mov    0x4(%eax),%eax
082fa231 +0x0063:  pop    %ebp
082fa232 +0x0064:  ret
082fa233 +0x0065:  nop
082fa234 +0x0066:  push   %ebp
082fa235 +0x0067:  mov    %esp,%ebp
082fa237 +0x0069:  sub    $0x18,%esp
082fa23a +0x006c:  mov    0x8(%ebp),%eax
082fa23d +0x006f:  mov    0xc(%ebp),%edx
082fa240 +0x0072:  mov    %edx,(%eax)
082fa242 +0x0074:  mov    0x8(%ebp),%eax
082fa245 +0x0077:  mov    0x10(%ebp),%edx
082fa248 +0x007a:  mov    %edx,0x4(%eax)
082fa24b +0x007d:  mov    0x8(%ebp),%eax
082fa24e +0x0080:  lea    0x8(%eax),%edx
082fa251 +0x0083:  movl   $0x18,0x8(%esp)
082fa259 +0x008b:  mov    0x14(%ebp),%eax
082fa25c +0x008e:  mov    %eax,0x4(%esp)
082fa260 +0x0092:  mov    %edx,(%esp)
082fa263 +0x0095:  call   0807d8d0 <_init+0x1c8>
082fa268 +0x009a:  leave
082fa269 +0x009b:  ret
082fa26a +0x009c:  push   %ebp
082fa26b +0x009d:  mov    %esp,%ebp
082fa26d +0x009f:  mov    0x8(%ebp),%eax
082fa270 +0x00a2:  mov    0xc(%ebp),%edx
082fa273 +0x00a5:  mov    (%edx),%ecx
082fa275 +0x00a7:  mov    %ecx,0x21(%eax)
082fa278 +0x00aa:  mov    0x4(%edx),%ecx
082fa27b +0x00ad:  mov    %ecx,0x25(%eax)
082fa27e +0x00b0:  mov    0x8(%edx),%ecx
082fa281 +0x00b3:  mov    %ecx,0x29(%eax)
082fa284 +0x00b6:  mov    0xc(%edx),%ecx
082fa287 +0x00b9:  mov    %ecx,0x2d(%eax)
082fa28a +0x00bc:  mov    0x10(%edx),%ecx
082fa28d +0x00bf:  mov    %ecx,0x31(%eax)
082fa290 +0x00c2:  mov    0x14(%edx),%ecx
082fa293 +0x00c5:  mov    %ecx,0x35(%eax)
082fa296 +0x00c8:  mov    0x18(%edx),%ecx
082fa299 +0x00cb:  mov    %ecx,0x39(%eax)
082fa29c +0x00ce:  movzwl 0x1c(%edx),%edx
082fa2a0 +0x00d2:  mov    %dx,0x3d(%eax)
082fa2a4 +0x00d6:  pop    %ebp
082fa2a5 +0x00d7:  ret
082fa2a6 +0x00d8:  push   %ebp
082fa2a7 +0x00d9:  mov    %esp,%ebp
082fa2a9 +0x00db:  mov    0xc(%ebp),%edx
082fa2ac +0x00de:  mov    0x8(%ebp),%ecx
082fa2af +0x00e1:  mov    %edx,%eax
082fa2b1 +0x00e3:  add    %eax,%eax
082fa2b3 +0x00e5:  add    %edx,%eax
082fa2b5 +0x00e7:  add    %eax,%eax
082fa2b7 +0x00e9:  lea    (%ecx,%eax,1),%eax
082fa2ba +0x00ec:  add    $0x20,%eax
082fa2bd +0x00ef:  movzwl 0x1(%eax),%eax
082fa2c1 +0x00f3:  test   %ax,%ax
082fa2c4 +0x00f6:  jne    082fa2cd <+0xff>
082fa2c6 +0x00f8:  mov    $0x0,%eax
082fa2cb +0x00fd:  jmp    082fa2ec <+0x11e>
082fa2cd +0x00ff:  mov    0xc(%ebp),%edx
082fa2d0 +0x0102:  mov    0x8(%ebp),%ecx
082fa2d3 +0x0105:  mov    %edx,%eax
082fa2d5 +0x0107:  add    %eax,%eax
082fa2d7 +0x0109:  add    %edx,%eax
082fa2d9 +0x010b:  add    %eax,%eax
082fa2db +0x010d:  lea    (%ecx,%eax,1),%eax
082fa2de +0x0110:  lea    0x20(%eax),%edx
082fa2e1 +0x0113:  mov    0x10(%ebp),%eax
082fa2e4 +0x0116:  mov    %eax,0x3(%edx)
082fa2e7 +0x0119:  mov    $0x1,%eax
082fa2ec +0x011e:  pop    %ebp
082fa2ed +0x011f:  ret
082fa2ee +0x0120:  push   %ebp
082fa2ef +0x0121:  mov    %esp,%ebp
082fa2f1 +0x0123:  mov    0x8(%ebp),%eax
082fa2f4 +0x0126:  add    $0x21,%eax
082fa2f7 +0x0129:  pop    %ebp
082fa2f8 +0x012a:  ret
082fa2f9 +0x012b:  nop
082fa2fa +0x012c:  push   %ebp
082fa2fb +0x012d:  mov    %esp,%ebp
082fa2fd +0x012f:  sub    $0x8,%esp
082fa300 +0x0132:  mov    0xc(%ebp),%edx
082fa303 +0x0135:  mov    0x10(%ebp),%eax
082fa306 +0x0138:  mov    %dx,-0x4(%ebp)
082fa30a +0x013c:  mov    %ax,-0x8(%ebp)
082fa30e +0x0140:  mov    0x8(%ebp),%eax
082fa311 +0x0143:  movzwl -0x4(%ebp),%edx
082fa315 +0x0147:  mov    %dx,0x3f(%eax)
082fa319 +0x014b:  mov    0x8(%ebp),%eax
082fa31c +0x014e:  movzwl -0x8(%ebp),%edx
082fa320 +0x0152:  mov    %dx,0x41(%eax)
082fa324 +0x0156:  leave
082fa325 +0x0157:  ret
082fa326 +0x0158:  push   %ebp
082fa327 +0x0159:  mov    %esp,%ebp
082fa329 +0x015b:  mov    0x8(%ebp),%eax
082fa32c +0x015e:  mov    0xc(%ebp),%edx
082fa32f +0x0161:  mov    (%edx),%edx
082fa331 +0x0163:  mov    %edx,0x3f(%eax)
082fa334 +0x0166:  pop    %ebp
082fa335 +0x0167:  ret
082fa336 +0x0168:  push   %ebp
082fa337 +0x0169:  mov    %esp,%ebp
082fa339 +0x016b:  mov    0x8(%ebp),%eax
082fa33c +0x016e:  add    $0x3f,%eax
082fa33f +0x0171:  pop    %ebp
082fa340 +0x0172:  ret
082fa341 +0x0173:  nop
082fa342 +0x0174:  push   %ebp
082fa343 +0x0175:  mov    %esp,%ebp
082fa345 +0x0177:  mov    0x8(%ebp),%eax
082fa348 +0x017a:  add    $0x3f,%eax
082fa34b +0x017d:  pop    %ebp
082fa34c +0x017e:  ret
082fa34d +0x017f:  nop
082fa34e +0x0180:  push   %ebp
082fa34f +0x0181:  mov    %esp,%ebp
082fa351 +0x0183:  pop    %ebp
082fa352 +0x0184:  ret
082fa353 +0x0185:  nop
082fa354 +0x0186:  push   %ebp
082fa355 +0x0187:  mov    %esp,%ebp
082fa357 +0x0189:  pop    %ebp
082fa358 +0x018a:  ret
082fa359 +0x018b:  nop
082fa35a +0x018c:  push   %ebp
082fa35b +0x018d:  mov    %esp,%ebp
082fa35d +0x018f:  sub    $0x18,%esp
082fa360 +0x0192:  mov    0x8(%ebp),%eax
082fa363 +0x0195:  movl   $0x0,(%eax)
082fa369 +0x019b:  mov    0x8(%ebp),%eax
082fa36c +0x019e:  movl   $0x0,0x4(%eax)
082fa373 +0x01a5:  mov    0x8(%ebp),%eax
082fa376 +0x01a8:  add    $0x8,%eax
082fa379 +0x01ab:  movl   $0x19,0x8(%esp)
082fa381 +0x01b3:  movl   $0x0,0x4(%esp)
082fa389 +0x01bb:  mov    %eax,(%esp)
082fa38c +0x01be:  call   0807dcc0 <_init+0x5b8>
082fa391 +0x01c3:  mov    0x8(%ebp),%eax
082fa394 +0x01c6:  add    $0x3f,%eax
082fa397 +0x01c9:  movl   $0x4,0x8(%esp)
082fa39f +0x01d1:  movl   $0x0,0x4(%esp)
082fa3a7 +0x01d9:  mov    %eax,(%esp)
082fa3aa +0x01dc:  call   0807dcc0 <_init+0x5b8>
082fa3af +0x01e1:  leave
082fa3b0 +0x01e2:  ret
082fa3b1 +0x01e3:  nop
082fa3b2 +0x01e4:  push   %ebp
082fa3b3 +0x01e5:  mov    %esp,%ebp
082fa3b5 +0x01e7:  mov    0xc(%ebp),%eax
082fa3b8 +0x01ea:  or     $0x80000000,%eax
082fa3bd +0x01ef:  pop    %ebp
082fa3be +0x01f0:  ret
082fa3bf +0x01f1:  nop
082fa3c0 +0x01f2:  push   %ebp
082fa3c1 +0x01f3:  mov    %esp,%ebp
082fa3c3 +0x01f5:  sub    $0x18,%esp
082fa3c6 +0x01f8:  mov    0x8(%ebp),%eax
082fa3c9 +0x01fb:  mov    %eax,(%esp)
082fa3cc +0x01fe:  call   081b8e4e <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x655>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x655
082fa3d1 +0x0203:  leave
082fa3d2 +0x0204:  ret
082fa3d3 +0x0205:  nop
082fa3d4 +0x0206:  push   %ebp
082fa3d5 +0x0207:  mov    %esp,%ebp
082fa3d7 +0x0209:  sub    $0x18,%esp
082fa3da +0x020c:  mov    0x8(%ebp),%eax
082fa3dd +0x020f:  mov    %eax,(%esp)
082fa3e0 +0x0212:  call   082fab02 <+0x934>
082fa3e5 +0x0217:  leave
082fa3e6 +0x0218:  ret
082fa3e7 +0x0219:  nop
082fa3e8 +0x021a:  push   %ebp
082fa3e9 +0x021b:  mov    %esp,%ebp
082fa3eb +0x021d:  sub    $0x18,%esp
082fa3ee +0x0220:  mov    0x8(%ebp),%eax
082fa3f1 +0x0223:  mov    %eax,(%esp)
082fa3f4 +0x0226:  call   082fabda <+0xa0c>
082fa3f9 +0x022b:  leave
082fa3fa +0x022c:  ret
082fa3fb +0x022d:  nop
082fa3fc +0x022e:  push   %ebp
082fa3fd +0x022f:  mov    %esp,%ebp
082fa3ff +0x0231:  push   %esi
082fa400 +0x0232:  push   %ebx
082fa401 +0x0233:  sub    $0x40,%esp
082fa404 +0x0236:  lea    -0x30(%ebp),%eax
082fa407 +0x0239:  mov    %eax,(%esp)
082fa40a +0x023c:  call   082faaee <+0x920>
082fa40f +0x0241:  mov    0x8(%ebp),%eax
082fa412 +0x0244:  lea    0x8(%eax),%edx
082fa415 +0x0247:  lea    -0x30(%ebp),%eax
082fa418 +0x024a:  mov    %eax,0x4(%esp)
082fa41c +0x024e:  mov    %edx,(%esp)
082fa41f +0x0251:  call   082fab90 <+0x9c2>
082fa424 +0x0256:  jmp    082fa441 <+0x273>
082fa426 +0x0258:  mov    %edx,%ebx
082fa428 +0x025a:  mov    %eax,%esi
082fa42a +0x025c:  lea    -0x30(%ebp),%eax
082fa42d +0x025f:  mov    %eax,(%esp)
082fa430 +0x0262:  call   082fab02 <+0x934>
082fa435 +0x0267:  mov    %esi,%eax
082fa437 +0x0269:  mov    %ebx,%edx
082fa439 +0x026b:  mov    %eax,(%esp)
082fa43c +0x026e:  call   08ae3750 <_Unwind_Resume>
082fa441 +0x0273:  lea    -0x30(%ebp),%eax
082fa444 +0x0276:  mov    %eax,(%esp)
082fa447 +0x0279:  call   082fab02 <+0x934>
082fa44c +0x027e:  mov    0x8(%ebp),%eax
082fa44f +0x0281:  add    $0x30,%eax
082fa452 +0x0284:  mov    %eax,(%esp)
082fa455 +0x0287:  call   082fabb2 <+0x9e4>
082fa45a +0x028c:  mov    0x8(%ebp),%eax
082fa45d +0x028f:  movl   $0x0,0x38(%eax)
082fa464 +0x0296:  mov    0x8(%ebp),%eax
082fa467 +0x0299:  add    $0x44,%eax
082fa46a +0x029c:  mov    %eax,(%esp)
082fa46d +0x029f:  call   0810192a <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94c>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94c
082fa472 +0x02a4:  mov    0x8(%ebp),%eax
082fa475 +0x02a7:  movl   $0x0,0x3c(%eax)
082fa47c +0x02ae:  mov    0x8(%ebp),%eax
082fa47f +0x02b1:  add    $0x30,%eax
082fa482 +0x02b4:  mov    %eax,(%esp)
082fa485 +0x02b7:  call   082fac1c <+0xa4e>
082fa48a +0x02bc:  mov    0xc(%ebp),%eax
082fa48d +0x02bf:  mov    %eax,%edx
082fa48f +0x02c1:  mov    0x8(%ebp),%eax
082fa492 +0x02c4:  mov    %dx,0x40(%eax)
082fa496 +0x02c8:  mov    0x10(%ebp),%eax
082fa499 +0x02cb:  mov    %eax,%edx
082fa49b +0x02cd:  mov    0x8(%ebp),%eax
082fa49e +0x02d0:  mov    %dx,0x42(%eax)
082fa4a2 +0x02d4:  mov    0xc(%ebp),%eax
082fa4a5 +0x02d7:  mov    %eax,0x4(%esp)
082fa4a9 +0x02db:  mov    0x8(%ebp),%eax
082fa4ac +0x02de:  mov    %eax,(%esp)
082fa4af +0x02e1:  call   082fac4e <+0xa80>
082fa4b4 +0x02e6:  mov    0x8(%ebp),%eax
082fa4b7 +0x02e9:  movl   $0x0,0x4(%eax)
082fa4be +0x02f0:  mov    0x8(%ebp),%eax
082fa4c1 +0x02f3:  movl   $0x0,(%eax)
082fa4c7 +0x02f9:  add    $0x40,%esp
082fa4ca +0x02fc:  pop    %ebx
082fa4cb +0x02fd:  pop    %esi
082fa4cc +0x02fe:  pop    %ebp
082fa4cd +0x02ff:  ret
082fa4ce +0x0300:  mov    %edx,%ebx
082fa4d0 +0x0302:  mov    %eax,%esi
082fa4d2 +0x0304:  mov    0x8(%ebp),%eax
082fa4d5 +0x0307:  add    $0x44,%eax
082fa4d8 +0x030a:  mov    %eax,(%esp)
082fa4db +0x030d:  call   081013d8 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x3fa>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x3fa
082fa4e0 +0x0312:  mov    %esi,%eax
082fa4e2 +0x0314:  mov    %ebx,%edx
082fa4e4 +0x0316:  jmp    082fa4e6 <+0x318>
082fa4e6 +0x0318:  mov    %edx,%ebx
082fa4e8 +0x031a:  mov    %eax,%esi
082fa4ea +0x031c:  mov    0x8(%ebp),%eax
082fa4ed +0x031f:  add    $0x30,%eax
082fa4f0 +0x0322:  mov    %eax,(%esp)
082fa4f3 +0x0325:  call   082fa3e8 <+0x21a>
082fa4f8 +0x032a:  mov    %esi,%eax
082fa4fa +0x032c:  mov    %ebx,%edx
082fa4fc +0x032e:  jmp    082fa4fe <+0x330>
082fa4fe +0x0330:  mov    %edx,%ebx
082fa500 +0x0332:  mov    %eax,%esi
082fa502 +0x0334:  mov    0x8(%ebp),%eax
082fa505 +0x0337:  add    $0x8,%eax
082fa508 +0x033a:  mov    %eax,(%esp)
082fa50b +0x033d:  call   082fa3d4 <+0x206>
082fa510 +0x0342:  mov    %esi,%eax
082fa512 +0x0344:  mov    %ebx,%edx
082fa514 +0x0346:  mov    %eax,(%esp)
082fa517 +0x0349:  call   08ae3750 <_Unwind_Resume>
082fa51c +0x034e:  push   %ebp
082fa51d +0x034f:  mov    %esp,%ebp
082fa51f +0x0351:  push   %ebx
082fa520 +0x0352:  sub    $0x74,%esp
082fa523 +0x0355:  mov    0x8(%ebp),%eax
082fa526 +0x0358:  add    $0x8,%eax
082fa529 +0x035b:  mov    %eax,(%esp)
082fa52c +0x035e:  call   082fad9a <+0xbcc>
082fa531 +0x0363:  test   %al,%al
082fa533 +0x0365:  je     082fa5cd <+0x3ff>
082fa539 +0x036b:  mov    0x8(%ebp),%eax
082fa53c +0x036e:  movzwl 0x42(%eax),%eax
082fa540 +0x0372:  movzwl %ax,%eax
082fa543 +0x0375:  mov    %eax,0x4(%esp)
082fa547 +0x0379:  mov    0x8(%ebp),%eax
082fa54a +0x037c:  mov    %eax,(%esp)
082fa54d +0x037f:  call   082fac4e <+0xa80>
082fa552 +0x0384:  mov    0x8(%ebp),%eax
082fa555 +0x0387:  add    $0x8,%eax
082fa558 +0x038a:  mov    %eax,(%esp)
082fa55b +0x038d:  call   080ee55a <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1bb>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1bb
082fa560 +0x0392:  mov    0x8(%ebp),%edx
082fa563 +0x0395:  movzwl 0x42(%edx),%edx
082fa567 +0x0399:  movzwl %dx,%edx
082fa56a +0x039c:  cmp    %edx,%eax
082fa56c +0x039e:  seta   %al
082fa56f +0x03a1:  test   %al,%al
082fa571 +0x03a3:  je     082fa5bd <+0x3ef>
082fa573 +0x03a5:  mov    0x8(%ebp),%eax
082fa576 +0x03a8:  add    $0x8,%eax
082fa579 +0x03ab:  mov    %eax,(%esp)
082fa57c +0x03ae:  call   080ee55a <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1bb>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1bb
082fa581 +0x03b3:  mov    %eax,%ebx
082fa583 +0x03b5:  movl   $0x0,0xc(%esp)
082fa58b +0x03bd:  movl   $0x19c,0x8(%esp)
082fa593 +0x03c5:  movl   $&_ZZN11DynamicPoolIN8WongWork11Avatar_ItemEE7AcquireEvE12__FUNCTION__,0x4(%esp)
082fa59b +0x03cd:  lea    -0x50(%ebp),%eax
082fa59e +0x03d0:  mov    %eax,(%esp)
082fa5a1 +0x03d3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fa5a6 +0x03d8:  mov    %ebx,0x8(%esp)
082fa5aa +0x03dc:  movl   $"DYNAMIC MEMORY_POOL More Alloc Size(%d)",0x4(%esp)
082fa5b2 +0x03e4:  lea    -0x50(%ebp),%eax
082fa5b5 +0x03e7:  mov    %eax,(%esp)
082fa5b8 +0x03ea:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fa5bd +0x03ef:  mov    0x8(%ebp),%eax
082fa5c0 +0x03f2:  mov    (%eax),%eax
082fa5c2 +0x03f4:  test   %eax,%eax
082fa5c4 +0x03f6:  je     082fa5cd <+0x3ff>
082fa5c6 +0x03f8:  mov    0x8(%ebp),%eax
082fa5c9 +0x03fb:  mov    (%eax),%eax
082fa5cb +0x03fd:  call   *%eax
082fa5cd +0x03ff:  mov    0x8(%ebp),%eax
082fa5d0 +0x0402:  add    $0x8,%eax
082fa5d3 +0x0405:  mov    %eax,(%esp)
082fa5d6 +0x0408:  call   082fad9a <+0xbcc>
082fa5db +0x040d:  test   %al,%al
082fa5dd +0x040f:  je     082fa615 <+0x447>
082fa5df +0x0411:  movl   $"[Pool Err] Insufficient memory!",0x10(%esp)
082fa5e7 +0x0419:  movl   $0x1a6,0xc(%esp)
082fa5ef +0x0421:  movl   $&_ZZN11DynamicPoolIN8WongWork11Avatar_ItemEE7AcquireEvE12__FUNCTION__,0x8(%esp)
082fa5f7 +0x0429:  movl   $"Container.h",0x4(%esp)
082fa5ff +0x0431:  movl   $0x1,(%esp)
082fa606 +0x0438:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082fa60b +0x043d:  mov    $0x0,%eax
082fa610 +0x0442:  jmp    082fa759 <+0x58b>
082fa615 +0x0447:  mov    0x8(%ebp),%eax
082fa618 +0x044a:  add    $0x8,%eax
082fa61b +0x044d:  mov    %eax,(%esp)
082fa61e +0x0450:  call   082fadae <+0xbe0>
082fa623 +0x0455:  mov    (%eax),%eax
082fa625 +0x0457:  mov    %eax,-0x10(%ebp)
082fa628 +0x045a:  mov    -0x10(%ebp),%eax
082fa62b +0x045d:  mov    %eax,-0xc(%ebp)
082fa62e +0x0460:  mov    -0x10(%ebp),%eax
082fa631 +0x0463:  mov    0x44(%eax),%eax
082fa634 +0x0466:  cmp    $0x8f21,%eax
082fa639 +0x046b:  je     082fa68c <+0x4be>
082fa63b +0x046d:  mov    -0x10(%ebp),%eax
082fa63e +0x0470:  mov    0x44(%eax),%ebx
082fa641 +0x0473:  movl   $0x0,0xc(%esp)
082fa649 +0x047b:  movl   $0x1b3,0x8(%esp)
082fa651 +0x0483:  movl   $&_ZZN11DynamicPoolIN8WongWork11Avatar_ItemEE7AcquireEvE12__FUNCTION__,0x4(%esp)
082fa659 +0x048b:  lea    -0x40(%ebp),%eax
082fa65c +0x048e:  mov    %eax,(%esp)
082fa65f +0x0491:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fa664 +0x0496:  mov    -0x10(%ebp),%eax
082fa667 +0x0499:  mov    %eax,0xc(%esp)
082fa66b +0x049d:  mov    %ebx,0x8(%esp)
082fa66f +0x04a1:  movl   $"DYNAMIC MEMORY_POOL Acquire error dummy(%x), node(%x)",0x4(%esp)
082fa677 +0x04a9:  lea    -0x40(%ebp),%eax
082fa67a +0x04ac:  mov    %eax,(%esp)
082fa67d +0x04af:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fa682 +0x04b4:  mov    0x8(%ebp),%eax
082fa685 +0x04b7:  movl   $0x3,0x4(%eax)
082fa68c +0x04be:  mov    -0x10(%ebp),%eax
082fa68f +0x04c1:  movzbl 0x48(%eax),%eax
082fa693 +0x04c5:  test   %al,%al
082fa695 +0x04c7:  je     082fa6ec <+0x51e>
082fa697 +0x04c9:  mov    -0x10(%ebp),%eax
082fa69a +0x04cc:  movzbl 0x48(%eax),%eax
082fa69e +0x04d0:  movsbl %al,%ebx
082fa6a1 +0x04d3:  movl   $0x0,0xc(%esp)
082fa6a9 +0x04db:  movl   $0x1b9,0x8(%esp)
082fa6b1 +0x04e3:  movl   $&_ZZN11DynamicPoolIN8WongWork11Avatar_ItemEE7AcquireEvE12__FUNCTION__,0x4(%esp)
082fa6b9 +0x04eb:  lea    -0x30(%ebp),%eax
082fa6bc +0x04ee:  mov    %eax,(%esp)
082fa6bf +0x04f1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fa6c4 +0x04f6:  mov    -0x10(%ebp),%eax
082fa6c7 +0x04f9:  mov    %eax,0xc(%esp)
082fa6cb +0x04fd:  mov    %ebx,0x8(%esp)
082fa6cf +0x0501:  movl   $"DYNAMIC MEMORY_POOL Acquire error reference count(%d), node(%x)",0x4(%esp)
082fa6d7 +0x0509:  lea    -0x30(%ebp),%eax
082fa6da +0x050c:  mov    %eax,(%esp)
082fa6dd +0x050f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fa6e2 +0x0514:  mov    0x8(%ebp),%eax
082fa6e5 +0x0517:  movl   $0x4,0x4(%eax)
082fa6ec +0x051e:  mov    -0x10(%ebp),%eax
082fa6ef +0x0521:  movzbl 0x48(%eax),%eax
082fa6f3 +0x0525:  lea    0x1(%eax),%edx
082fa6f6 +0x0528:  mov    -0x10(%ebp),%eax
082fa6f9 +0x052b:  mov    %dl,0x48(%eax)
082fa6fc +0x052e:  cmpl   $0x0,-0xc(%ebp)
082fa700 +0x0532:  jne    082fa748 <+0x57a>
082fa702 +0x0534:  movl   $0x5,0xc(%esp)
082fa70a +0x053c:  movl   $0x1c4,0x8(%esp)
082fa712 +0x0544:  movl   $&_ZZN11DynamicPoolIN8WongWork11Avatar_ItemEE7AcquireEvE12__FUNCTION__,0x4(%esp)
082fa71a +0x054c:  lea    -0x20(%ebp),%eax
082fa71d +0x054f:  mov    %eax,(%esp)
082fa720 +0x0552:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fa725 +0x0557:  movl   $0x1c4,0xc(%esp)
082fa72d +0x055f:  movl   $&_ZZN11DynamicPoolIN8WongWork11Avatar_ItemEE7AcquireEvE12__FUNCTION__,0x8(%esp)
082fa735 +0x0567:  movl   $"DYNAMIC MEMORY_POOL Acquire error [%s][%d]",0x4(%esp)
082fa73d +0x056f:  lea    -0x20(%ebp),%eax
082fa740 +0x0572:  mov    %eax,(%esp)
082fa743 +0x0575:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fa748 +0x057a:  mov    0x8(%ebp),%eax
082fa74b +0x057d:  add    $0x8,%eax
082fa74e +0x0580:  mov    %eax,(%esp)
082fa751 +0x0583:  call   082fadc2 <+0xbf4>
082fa756 +0x0588:  mov    -0xc(%ebp),%eax
082fa759 +0x058b:  add    $0x74,%esp
082fa75c +0x058e:  pop    %ebx
082fa75d +0x058f:  pop    %ebp
082fa75e +0x0590:  ret
082fa75f +0x0591:  push   %ebp
082fa760 +0x0592:  mov    %esp,%ebp
082fa762 +0x0594:  push   %esi
082fa763 +0x0595:  push   %ebx
082fa764 +0x0596:  sub    $0x10,%esp
082fa767 +0x0599:  mov    0x8(%ebp),%esi
082fa76a +0x059c:  mov    0x10(%ebp),%eax
082fa76d +0x059f:  mov    %eax,(%esp)
082fa770 +0x05a2:  call   082fadd5 <+0xc07>
082fa775 +0x05a7:  mov    %eax,%ebx
082fa777 +0x05a9:  mov    0xc(%ebp),%eax
082fa77a +0x05ac:  mov    %eax,(%esp)
082fa77d +0x05af:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
082fa782 +0x05b4:  mov    %ebx,0x8(%esp)
082fa786 +0x05b8:  mov    %eax,0x4(%esp)
082fa78a +0x05bc:  mov    %esi,(%esp)
082fa78d +0x05bf:  call   082fadde <+0xc10>
082fa792 +0x05c4:  mov    %esi,%eax
082fa794 +0x05c6:  add    $0x10,%esp
082fa797 +0x05c9:  pop    %ebx
082fa798 +0x05ca:  pop    %esi
082fa799 +0x05cb:  pop    %ebp
082fa79a +0x05cc:  ret    $0x4
082fa79d +0x05cf:  nop
082fa79e +0x05d0:  push   %ebp
082fa79f +0x05d1:  mov    %esp,%ebp
082fa7a1 +0x05d3:  sub    $0x18,%esp
082fa7a4 +0x05d6:  mov    0xc(%ebp),%eax
082fa7a7 +0x05d9:  mov    %eax,(%esp)
082fa7aa +0x05dc:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
082fa7af +0x05e1:  mov    (%eax),%edx
082fa7b1 +0x05e3:  mov    0x8(%ebp),%eax
082fa7b4 +0x05e6:  mov    %edx,(%eax)
082fa7b6 +0x05e8:  mov    0xc(%ebp),%eax
082fa7b9 +0x05eb:  add    $0x4,%eax
082fa7bc +0x05ee:  mov    %eax,(%esp)
082fa7bf +0x05f1:  call   082fae0b <+0xc3d>
082fa7c4 +0x05f6:  mov    (%eax),%edx
082fa7c6 +0x05f8:  mov    0x8(%ebp),%eax
082fa7c9 +0x05fb:  mov    %edx,0x4(%eax)
082fa7cc +0x05fe:  leave
082fa7cd +0x05ff:  ret
082fa7ce +0x0600:  push   %ebp
082fa7cf +0x0601:  mov    %esp,%ebp
082fa7d1 +0x0603:  push   %ebx
082fa7d2 +0x0604:  sub    $0x14,%esp
082fa7d5 +0x0607:  mov    0x8(%ebp),%ebx
082fa7d8 +0x060a:  mov    0xc(%ebp),%eax
082fa7db +0x060d:  mov    0x10(%ebp),%edx
082fa7de +0x0610:  mov    %edx,0x8(%esp)
082fa7e2 +0x0614:  mov    %eax,0x4(%esp)
082fa7e6 +0x0618:  mov    %ebx,(%esp)
082fa7e9 +0x061b:  call   082fae14 <+0xc46>
082fa7ee +0x0620:  sub    $0x4,%esp
082fa7f1 +0x0623:  mov    %ebx,%eax
082fa7f3 +0x0625:  mov    -0x4(%ebp),%ebx
082fa7f6 +0x0628:  leave
082fa7f7 +0x0629:  ret    $0x4
082fa7fa +0x062c:  push   %ebp
082fa7fb +0x062d:  mov    %esp,%ebp
082fa7fd +0x062f:  push   %ebx
082fa7fe +0x0630:  sub    $0x14,%esp
082fa801 +0x0633:  mov    0x8(%ebp),%ebx
082fa804 +0x0636:  mov    0xc(%ebp),%eax
082fa807 +0x0639:  mov    %eax,0x4(%esp)
082fa80b +0x063d:  mov    %ebx,(%esp)
082fa80e +0x0640:  call   082fafe4 <+0xe16>
082fa813 +0x0645:  sub    $0x4,%esp
082fa816 +0x0648:  mov    %ebx,%eax
082fa818 +0x064a:  mov    -0x4(%ebp),%ebx
082fa81b +0x064d:  leave
082fa81c +0x064e:  ret    $0x4
082fa81f +0x0651:  nop
082fa820 +0x0652:  push   %ebp
082fa821 +0x0653:  mov    %esp,%ebp
082fa823 +0x0655:  push   %ebx
082fa824 +0x0656:  sub    $0x14,%esp
082fa827 +0x0659:  mov    0x8(%ebp),%ebx
082fa82a +0x065c:  mov    0xc(%ebp),%eax
082fa82d +0x065f:  mov    %eax,0x4(%esp)
082fa831 +0x0663:  mov    %ebx,(%esp)
082fa834 +0x0666:  call   082fb00a <+0xe3c>
082fa839 +0x066b:  sub    $0x4,%esp
082fa83c +0x066e:  mov    %ebx,%eax
082fa83e +0x0670:  mov    -0x4(%ebp),%ebx
082fa841 +0x0673:  leave
082fa842 +0x0674:  ret    $0x4
082fa845 +0x0677:  nop
082fa846 +0x0678:  push   %ebp
082fa847 +0x0679:  mov    %esp,%ebp
082fa849 +0x067b:  mov    0x8(%ebp),%eax
082fa84c +0x067e:  mov    (%eax),%edx
082fa84e +0x0680:  mov    0xc(%ebp),%eax
082fa851 +0x0683:  mov    (%eax),%eax
082fa853 +0x0685:  cmp    %eax,%edx
082fa855 +0x0687:  setne  %al
082fa858 +0x068a:  pop    %ebp
082fa859 +0x068b:  ret
082fa85a +0x068c:  push   %ebp
082fa85b +0x068d:  mov    %esp,%ebp
082fa85d +0x068f:  sub    $0x18,%esp
082fa860 +0x0692:  mov    0x8(%ebp),%eax
082fa863 +0x0695:  mov    (%eax),%eax
082fa865 +0x0697:  mov    %eax,(%esp)
082fa868 +0x069a:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
082fa86d +0x069f:  mov    0x8(%ebp),%edx
082fa870 +0x06a2:  mov    %eax,(%edx)
082fa872 +0x06a4:  mov    0x8(%ebp),%eax
082fa875 +0x06a7:  leave
082fa876 +0x06a8:  ret
082fa877 +0x06a9:  nop
082fa878 +0x06aa:  push   %ebp
082fa879 +0x06ab:  mov    %esp,%ebp
082fa87b +0x06ad:  mov    0x8(%ebp),%eax
082fa87e +0x06b0:  mov    (%eax),%eax
082fa880 +0x06b2:  add    $0x10,%eax
082fa883 +0x06b5:  pop    %ebp
082fa884 +0x06b6:  ret
082fa885 +0x06b7:  nop
082fa886 +0x06b8:  push   %ebp
082fa887 +0x06b9:  mov    %esp,%ebp
082fa889 +0x06bb:  sub    $0x18,%esp
082fa88c +0x06be:  mov    0x8(%ebp),%eax
082fa88f +0x06c1:  mov    0xc(%ebp),%edx
082fa892 +0x06c4:  mov    %edx,0x4(%esp)
082fa896 +0x06c8:  mov    %eax,(%esp)
082fa899 +0x06cb:  call   082fb030 <+0xe62>
082fa89e +0x06d0:  leave
082fa89f +0x06d1:  ret
082fa8a0 +0x06d2:  push   %ebp
082fa8a1 +0x06d3:  mov    %esp,%ebp
082fa8a3 +0x06d5:  push   %esi
082fa8a4 +0x06d6:  push   %ebx
082fa8a5 +0x06d7:  sub    $0x40,%esp
082fa8a8 +0x06da:  cmpl   $0x0,0xc(%ebp)
082fa8ac +0x06de:  jne    082fa8b8 <+0x6ea>
082fa8ae +0x06e0:  mov    $0x0,%eax
082fa8b3 +0x06e5:  jmp    082fa9a8 <+0x7da>
082fa8b8 +0x06ea:  mov    0xc(%ebp),%eax
082fa8bb +0x06ed:  mov    %eax,-0x2c(%ebp)
082fa8be +0x06f0:  mov    0x8(%ebp),%eax
082fa8c1 +0x06f3:  lea    0x8(%eax),%edx
082fa8c4 +0x06f6:  lea    -0x2c(%ebp),%eax
082fa8c7 +0x06f9:  mov    %eax,0x4(%esp)
082fa8cb +0x06fd:  mov    %edx,(%esp)
082fa8ce +0x0700:  call   082fb090 <+0xec2>
082fa8d3 +0x0705:  mov    -0x2c(%ebp),%eax
082fa8d6 +0x0708:  mov    0x44(%eax),%eax
082fa8d9 +0x070b:  cmp    $0x8f21,%eax
082fa8de +0x0710:  je     082fa931 <+0x763>
082fa8e0 +0x0712:  mov    -0x2c(%ebp),%esi
082fa8e3 +0x0715:  mov    -0x2c(%ebp),%eax
082fa8e6 +0x0718:  mov    0x44(%eax),%ebx
082fa8e9 +0x071b:  movl   $0x0,0xc(%esp)
082fa8f1 +0x0723:  movl   $0x269,0x8(%esp)
082fa8f9 +0x072b:  movl   $&_ZZN11DynamicPoolIN8WongWork11Avatar_ItemEE4FreeEPS1_E12__FUNCTION__,0x4(%esp)
082fa901 +0x0733:  lea    -0x28(%ebp),%eax
082fa904 +0x0736:  mov    %eax,(%esp)
082fa907 +0x0739:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fa90c +0x073e:  mov    %esi,0xc(%esp)
082fa910 +0x0742:  mov    %ebx,0x8(%esp)
082fa914 +0x0746:  movl   $"DYNAMIC MEMORY_POOL Free error dummy(%x), node(%x)",0x4(%esp)
082fa91c +0x074e:  lea    -0x28(%ebp),%eax
082fa91f +0x0751:  mov    %eax,(%esp)
082fa922 +0x0754:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fa927 +0x0759:  mov    0x8(%ebp),%eax
082fa92a +0x075c:  movl   $0x5,0x4(%eax)
082fa931 +0x0763:  mov    -0x2c(%ebp),%eax
082fa934 +0x0766:  movzbl 0x48(%eax),%eax
082fa938 +0x076a:  cmp    $0x1,%al
082fa93a +0x076c:  je     082fa996 <+0x7c8>
082fa93c +0x076e:  mov    -0x2c(%ebp),%esi
082fa93f +0x0771:  mov    -0x2c(%ebp),%eax
082fa942 +0x0774:  movzbl 0x48(%eax),%eax
082fa946 +0x0778:  movsbl %al,%ebx
082fa949 +0x077b:  movl   $0x0,0xc(%esp)
082fa951 +0x0783:  movl   $0x26f,0x8(%esp)
082fa959 +0x078b:  movl   $&_ZZN11DynamicPoolIN8WongWork11Avatar_ItemEE4FreeEPS1_E12__FUNCTION__,0x4(%esp)
082fa961 +0x0793:  lea    -0x18(%ebp),%eax
082fa964 +0x0796:  mov    %eax,(%esp)
082fa967 +0x0799:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082fa96c +0x079e:  mov    %esi,0xc(%esp)
082fa970 +0x07a2:  mov    %ebx,0x8(%esp)
082fa974 +0x07a6:  movl   $"DYNAMIC MEMORY_POOL Free error reference count(%d), node(%x)",0x4(%esp)
082fa97c +0x07ae:  lea    -0x18(%ebp),%eax
082fa97f +0x07b1:  mov    %eax,(%esp)
082fa982 +0x07b4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082fa987 +0x07b9:  mov    0x8(%ebp),%eax
082fa98a +0x07bc:  movl   $0x6,0x4(%eax)
082fa991 +0x07c3:  call   08108f9c <_Z14PrintBackTracev>  ; PrintBackTrace()
082fa996 +0x07c8:  mov    -0x2c(%ebp),%eax
082fa999 +0x07cb:  movzbl 0x48(%eax),%edx
082fa99d +0x07cf:  sub    $0x1,%edx
082fa9a0 +0x07d2:  mov    %dl,0x48(%eax)
082fa9a3 +0x07d5:  mov    $0x1,%eax
082fa9a8 +0x07da:  add    $0x40,%esp
082fa9ab +0x07dd:  pop    %ebx
082fa9ac +0x07de:  pop    %esi
082fa9ad +0x07df:  pop    %ebp
082fa9ae +0x07e0:  ret
082fa9af +0x07e1:  nop
082fa9b0 +0x07e2:  push   %ebp
082fa9b1 +0x07e3:  mov    %esp,%ebp
082fa9b3 +0x07e5:  sub    $0x18,%esp
082fa9b6 +0x07e8:  mov    0x8(%ebp),%eax
082fa9b9 +0x07eb:  mov    0xc(%ebp),%edx
082fa9bc +0x07ee:  mov    %edx,0x4(%esp)
082fa9c0 +0x07f2:  mov    %eax,(%esp)
082fa9c3 +0x07f5:  call   082fb0aa <+0xedc>
082fa9c8 +0x07fa:  leave
082fa9c9 +0x07fb:  ret
082fa9ca +0x07fc:  push   %ebp
082fa9cb +0x07fd:  mov    %esp,%ebp
082fa9cd +0x07ff:  sub    $0x18,%esp
082fa9d0 +0x0802:  mov    0x8(%ebp),%eax
082fa9d3 +0x0805:  mov    %eax,(%esp)
082fa9d6 +0x0808:  call   082fb10a <+0xf3c>
082fa9db +0x080d:  leave
082fa9dc +0x080e:  ret
082fa9dd +0x080f:  nop
082fa9de +0x0810:  push   %ebp
082fa9df +0x0811:  mov    %esp,%ebp
082fa9e1 +0x0813:  push   %ebx
082fa9e2 +0x0814:  sub    $0x14,%esp
082fa9e5 +0x0817:  mov    0x8(%ebp),%ebx
082fa9e8 +0x081a:  mov    0xc(%ebp),%eax
082fa9eb +0x081d:  mov    %eax,0x4(%esp)
082fa9ef +0x0821:  mov    %ebx,(%esp)
082fa9f2 +0x0824:  call   082fb11a <+0xf4c>
082fa9f7 +0x0829:  sub    $0x4,%esp
082fa9fa +0x082c:  mov    %ebx,%eax
082fa9fc +0x082e:  mov    -0x4(%ebp),%ebx
082fa9ff +0x0831:  leave
082faa00 +0x0832:  ret    $0x4
082faa03 +0x0835:  nop
082faa04 +0x0836:  push   %ebp
082faa05 +0x0837:  mov    %esp,%ebp
082faa07 +0x0839:  mov    0xc(%ebp),%eax
082faa0a +0x083c:  mov    (%eax),%edx
082faa0c +0x083e:  mov    0x8(%ebp),%eax
082faa0f +0x0841:  mov    %edx,(%eax)
082faa11 +0x0843:  pop    %ebp
082faa12 +0x0844:  ret
082faa13 +0x0845:  nop
082faa14 +0x0846:  push   %ebp
082faa15 +0x0847:  mov    %esp,%ebp
082faa17 +0x0849:  push   %ebx
082faa18 +0x084a:  sub    $0x14,%esp
082faa1b +0x084d:  mov    0x8(%ebp),%ebx
082faa1e +0x0850:  mov    0xc(%ebp),%eax
082faa21 +0x0853:  mov    %eax,0x4(%esp)
082faa25 +0x0857:  mov    %ebx,(%esp)
082faa28 +0x085a:  call   082fb140 <+0xf72>
082faa2d +0x085f:  sub    $0x4,%esp
082faa30 +0x0862:  mov    %ebx,%eax
082faa32 +0x0864:  mov    -0x4(%ebp),%ebx
082faa35 +0x0867:  leave
082faa36 +0x0868:  ret    $0x4
082faa39 +0x086b:  nop
082faa3a +0x086c:  push   %ebp
082faa3b +0x086d:  mov    %esp,%ebp
082faa3d +0x086f:  sub    $0x18,%esp
082faa40 +0x0872:  mov    0x8(%ebp),%eax
082faa43 +0x0875:  mov    %eax,(%esp)
082faa46 +0x0878:  call   082fb166 <+0xf98>
082faa4b +0x087d:  leave
082faa4c +0x087e:  ret
082faa4d +0x087f:  nop
082faa4e +0x0880:  push   %ebp
082faa4f +0x0881:  mov    %esp,%ebp
082faa51 +0x0883:  push   %ebx
082faa52 +0x0884:  sub    $0x14,%esp
082faa55 +0x0887:  mov    0x8(%ebp),%ebx
082faa58 +0x088a:  mov    0xc(%ebp),%eax
082faa5b +0x088d:  mov    0x10(%ebp),%edx
082faa5e +0x0890:  mov    %edx,0x8(%esp)
082faa62 +0x0894:  mov    %eax,0x4(%esp)
082faa66 +0x0898:  mov    %ebx,(%esp)
082faa69 +0x089b:  call   082fb1dc <+0x100e>
082faa6e +0x08a0:  sub    $0x4,%esp
082faa71 +0x08a3:  mov    %ebx,%eax
082faa73 +0x08a5:  mov    -0x4(%ebp),%ebx
082faa76 +0x08a8:  leave
082faa77 +0x08a9:  ret    $0x4
082faa7a +0x08ac:  push   %ebp
082faa7b +0x08ad:  mov    %esp,%ebp
082faa7d +0x08af:  mov    0x8(%ebp),%eax
082faa80 +0x08b2:  mov    (%eax),%edx
082faa82 +0x08b4:  mov    0xc(%ebp),%eax
082faa85 +0x08b7:  mov    (%eax),%eax
082faa87 +0x08b9:  cmp    %eax,%edx
082faa89 +0x08bb:  sete   %al
082faa8c +0x08be:  pop    %ebp
082faa8d +0x08bf:  ret
082faa8e +0x08c0:  push   %ebp
082faa8f +0x08c1:  mov    %esp,%ebp
082faa91 +0x08c3:  sub    $0x18,%esp
082faa94 +0x08c6:  mov    0xc(%ebp),%eax
082faa97 +0x08c9:  mov    %eax,(%esp)
082faa9a +0x08cc:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
082faa9f +0x08d1:  mov    (%eax),%edx
082faaa1 +0x08d3:  mov    0x8(%ebp),%eax
082faaa4 +0x08d6:  mov    %edx,(%eax)
082faaa6 +0x08d8:  mov    0x10(%ebp),%eax
082faaa9 +0x08db:  mov    %eax,(%esp)
082faaac +0x08de:  call   080f59f2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x9a3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x9a3
082faab1 +0x08e3:  movzwl (%eax),%eax
082faab4 +0x08e6:  movswl %ax,%edx
082faab7 +0x08e9:  mov    0x8(%ebp),%eax
082faaba +0x08ec:  mov    %edx,0x4(%eax)
082faabd +0x08ef:  leave
082faabe +0x08f0:  ret
082faabf +0x08f1:  nop
082faac0 +0x08f2:  push   %ebp
082faac1 +0x08f3:  mov    %esp,%ebp
082faac3 +0x08f5:  sub    $0x18,%esp
082faac6 +0x08f8:  mov    0xc(%ebp),%eax
082faac9 +0x08fb:  mov    %eax,(%esp)
082faacc +0x08fe:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
082faad1 +0x0903:  mov    (%eax),%edx
082faad3 +0x0905:  mov    0x8(%ebp),%eax
082faad6 +0x0908:  mov    %edx,(%eax)
082faad8 +0x090a:  mov    0x10(%ebp),%eax
082faadb +0x090d:  mov    %eax,(%esp)
082faade +0x0910:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
082faae3 +0x0915:  mov    (%eax),%edx
082faae5 +0x0917:  mov    0x8(%ebp),%eax
082faae8 +0x091a:  mov    %edx,0x4(%eax)
082faaeb +0x091d:  leave
082faaec +0x091e:  ret
082faaed +0x091f:  nop
082faaee +0x0920:  push   %ebp
082faaef +0x0921:  mov    %esp,%ebp
082faaf1 +0x0923:  sub    $0x18,%esp
082faaf4 +0x0926:  mov    0x8(%ebp),%eax
082faaf7 +0x0929:  mov    %eax,(%esp)
082faafa +0x092c:  call   082fb2ae <+0x10e0>
082faaff +0x0931:  leave
082fab00 +0x0932:  ret
082fab01 +0x0933:  nop
082fab02 +0x0934:  push   %ebp
082fab03 +0x0935:  mov    %esp,%ebp
082fab05 +0x0937:  push   %esi
082fab06 +0x0938:  push   %ebx
082fab07 +0x0939:  sub    $0x30,%esp
082fab0a +0x093c:  mov    0x8(%ebp),%eax
082fab0d +0x093f:  mov    %eax,(%esp)
082fab10 +0x0942:  call   082fb3cc <+0x11fe>
082fab15 +0x0947:  mov    %eax,%ebx
082fab17 +0x0949:  lea    -0x28(%ebp),%eax
082fab1a +0x094c:  mov    0x8(%ebp),%edx
082fab1d +0x094f:  mov    %edx,0x4(%esp)
082fab21 +0x0953:  mov    %eax,(%esp)
082fab24 +0x0956:  call   082fb3a2 <+0x11d4>
082fab29 +0x095b:  sub    $0x4,%esp
082fab2c +0x095e:  lea    -0x18(%ebp),%eax
082fab2f +0x0961:  mov    0x8(%ebp),%edx
082fab32 +0x0964:  mov    %edx,0x4(%esp)
082fab36 +0x0968:  mov    %eax,(%esp)
082fab39 +0x096b:  call   082fb378 <+0x11aa>
082fab3e +0x0970:  sub    $0x4,%esp
082fab41 +0x0973:  mov    %ebx,0xc(%esp)
082fab45 +0x0977:  lea    -0x28(%ebp),%eax
082fab48 +0x097a:  mov    %eax,0x8(%esp)
082fab4c +0x097e:  lea    -0x18(%ebp),%eax
082fab4f +0x0981:  mov    %eax,0x4(%esp)
082fab53 +0x0985:  mov    0x8(%ebp),%eax
082fab56 +0x0988:  mov    %eax,(%esp)
082fab59 +0x098b:  call   082fb408 <+0x123a>
082fab5e +0x0990:  jmp    082fab7b <+0x9ad>
082fab60 +0x0992:  mov    %edx,%ebx
082fab62 +0x0994:  mov    %eax,%esi
082fab64 +0x0996:  mov    0x8(%ebp),%eax
082fab67 +0x0999:  mov    %eax,(%esp)
082fab6a +0x099c:  call   082fb2f8 <+0x112a>
082fab6f +0x09a1:  mov    %esi,%eax
082fab71 +0x09a3:  mov    %ebx,%edx
082fab73 +0x09a5:  mov    %eax,(%esp)
082fab76 +0x09a8:  call   08ae3750 <_Unwind_Resume>
082fab7b +0x09ad:  mov    0x8(%ebp),%eax
082fab7e +0x09b0:  mov    %eax,(%esp)
082fab81 +0x09b3:  call   082fb2f8 <+0x112a>
082fab86 +0x09b8:  lea    -0x8(%ebp),%esp
082fab89 +0x09bb:  add    $0x0,%esp
082fab8c +0x09be:  pop    %ebx
082fab8d +0x09bf:  pop    %esi
082fab8e +0x09c0:  pop    %ebp
082fab8f +0x09c1:  ret
082fab90 +0x09c2:  push   %ebp
082fab91 +0x09c3:  mov    %esp,%ebp
082fab93 +0x09c5:  sub    $0x18,%esp
082fab96 +0x09c8:  mov    0xc(%ebp),%eax
082fab99 +0x09cb:  mov    %eax,(%esp)
082fab9c +0x09ce:  call   082fb410 <+0x1242>
082faba1 +0x09d3:  mov    0x8(%ebp),%edx
082faba4 +0x09d6:  mov    %eax,0x4(%esp)
082faba8 +0x09da:  mov    %edx,(%esp)
082fabab +0x09dd:  call   082fb418 <+0x124a>
082fabb0 +0x09e2:  leave
082fabb1 +0x09e3:  ret
082fabb2 +0x09e4:  push   %ebp
082fabb3 +0x09e5:  mov    %esp,%ebp
082fabb5 +0x09e7:  sub    $0x18,%esp
082fabb8 +0x09ea:  mov    0x8(%ebp),%eax
082fabbb +0x09ed:  mov    %eax,(%esp)
082fabbe +0x09f0:  call   082fb43a <+0x126c>
082fabc3 +0x09f5:  leave
082fabc4 +0x09f6:  ret
082fabc5 +0x09f7:  nop
082fabc6 +0x09f8:  push   %ebp
082fabc7 +0x09f9:  mov    %esp,%ebp
082fabc9 +0x09fb:  sub    $0x18,%esp
082fabcc +0x09fe:  mov    0x8(%ebp),%eax
082fabcf +0x0a01:  mov    %eax,(%esp)
082fabd2 +0x0a04:  call   082fb458 <+0x128a>
082fabd7 +0x0a09:  leave
082fabd8 +0x0a0a:  ret
082fabd9 +0x0a0b:  nop
082fabda +0x0a0c:  push   %ebp
082fabdb +0x0a0d:  mov    %esp,%ebp
082fabdd +0x0a0f:  push   %esi
082fabde +0x0a10:  push   %ebx
082fabdf +0x0a11:  sub    $0x10,%esp
082fabe2 +0x0a14:  mov    0x8(%ebp),%eax
082fabe5 +0x0a17:  mov    %eax,(%esp)
082fabe8 +0x0a1a:  call   082fb46c <+0x129e>
082fabed +0x0a1f:  jmp    082fac0a <+0xa3c>
082fabef +0x0a21:  mov    %edx,%ebx
082fabf1 +0x0a23:  mov    %eax,%esi
082fabf3 +0x0a25:  mov    0x8(%ebp),%eax
082fabf6 +0x0a28:  mov    %eax,(%esp)
082fabf9 +0x0a2b:  call   082fabc6 <+0x9f8>
082fabfe +0x0a30:  mov    %esi,%eax
082fac00 +0x0a32:  mov    %ebx,%edx
082fac02 +0x0a34:  mov    %eax,(%esp)
082fac05 +0x0a37:  call   08ae3750 <_Unwind_Resume>
082fac0a +0x0a3c:  mov    0x8(%ebp),%eax
082fac0d +0x0a3f:  mov    %eax,(%esp)
082fac10 +0x0a42:  call   082fabc6 <+0x9f8>
082fac15 +0x0a47:  add    $0x10,%esp
082fac18 +0x0a4a:  pop    %ebx
082fac19 +0x0a4b:  pop    %esi
082fac1a +0x0a4c:  pop    %ebp
082fac1b +0x0a4d:  ret
082fac1c +0x0a4e:  push   %ebp
082fac1d +0x0a4f:  mov    %esp,%ebp
082fac1f +0x0a51:  sub    $0x18,%esp
082fac22 +0x0a54:  mov    0x8(%ebp),%eax
082fac25 +0x0a57:  mov    %eax,(%esp)
082fac28 +0x0a5a:  call   082fb46c <+0x129e>
082fac2d +0x0a5f:  mov    0x8(%ebp),%eax
082fac30 +0x0a62:  mov    %eax,(%esp)
082fac33 +0x0a65:  call   082fb4c8 <+0x12fa>
082fac38 +0x0a6a:  leave
082fac39 +0x0a6b:  ret
082fac3a +0x0a6c:  push   %ebp
082fac3b +0x0a6d:  mov    %esp,%ebp
082fac3d +0x0a6f:  sub    $0x18,%esp
082fac40 +0x0a72:  mov    0x8(%ebp),%eax
082fac43 +0x0a75:  mov    %eax,(%esp)
082fac46 +0x0a78:  call   082fa354 <+0x186>
082fac4b +0x0a7d:  leave
082fac4c +0x0a7e:  ret
082fac4d +0x0a7f:  nop
082fac4e +0x0a80:  push   %ebp
082fac4f +0x0a81:  mov    %esp,%ebp
082fac51 +0x0a83:  push   %edi
082fac52 +0x0a84:  push   %esi
082fac53 +0x0a85:  push   %ebx
082fac54 +0x0a86:  sub    $0x3c,%esp
082fac57 +0x0a89:  mov    0xc(%ebp),%ebx
082fac5a +0x0a8c:  mov    %ebx,%eax
082fac5c +0x0a8e:  shl    $0x3,%eax
082fac5f +0x0a91:  add    %ebx,%eax
082fac61 +0x0a93:  add    %eax,%eax
082fac63 +0x0a95:  add    %ebx,%eax
082fac65 +0x0a97:  add    $0x1,%eax
082fac68 +0x0a9a:  shl    $0x2,%eax
082fac6b +0x0a9d:  mov    %eax,(%esp)
082fac6e +0x0aa0:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
082fac73 +0x0aa5:  mov    %eax,%edi
082fac75 +0x0aa7:  mov    %edi,%eax
082fac77 +0x0aa9:  mov    %ebx,(%eax)
082fac79 +0x0aab:  mov    %edi,%eax
082fac7b +0x0aad:  add    $0x4,%eax
082fac7e +0x0ab0:  mov    %eax,%esi
082fac80 +0x0ab2:  lea    -0x1(%ebx),%eax
082fac83 +0x0ab5:  mov    %eax,%ebx
082fac85 +0x0ab7:  jmp    082fac95 <+0xac7>
082fac87 +0x0ab9:  mov    %esi,(%esp)
082fac8a +0x0abc:  call   082fb4de <+0x1310>
082fac8f +0x0ac1:  add    $0x4c,%esi
082fac92 +0x0ac4:  sub    $0x1,%ebx
082fac95 +0x0ac7:  cmp    $0xffffffff,%ebx
082fac98 +0x0aca:  setne  %al
082fac9b +0x0acd:  test   %al,%al
082fac9d +0x0acf:  jne    082fac87 <+0xab9>
082fac9f +0x0ad1:  mov    %edi,%eax
082faca1 +0x0ad3:  add    $0x4,%eax
082faca4 +0x0ad6:  mov    %eax,-0x38(%ebp)
082faca7 +0x0ad9:  mov    -0x38(%ebp),%eax
082facaa +0x0adc:  test   %eax,%eax
082facac +0x0ade:  jne    082facfe <+0xb30>
082facae +0x0ae0:  movl   $0x5,0xc(%esp)
082facb6 +0x0ae8:  movl   $0x2a6,0x8(%esp)
082facbe +0x0af0:  movl   $&_ZZN11DynamicPoolIN8WongWork11Avatar_ItemEE9MoreAllocEiE12__FUNCTION__,0x4(%esp)
082facc6 +0x0af8:  lea    -0x34(%ebp),%eax
082facc9 +0x0afb:  mov    %eax,(%esp)
082faccc +0x0afe:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082facd1 +0x0b03:  movl   $0x2a6,0xc(%esp)
082facd9 +0x0b0b:  movl   $&_ZZN11DynamicPoolIN8WongWork11Avatar_ItemEE9MoreAllocEiE12__FUNCTION__,0x8(%esp)
082face1 +0x0b13:  movl   $"DYNAMIC MEMORY_POOL Acquire error [%s][%d]",0x4(%esp)
082face9 +0x0b1b:  lea    -0x34(%ebp),%eax
082facec +0x0b1e:  mov    %eax,(%esp)
082facef +0x0b21:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082facf4 +0x0b26:  mov    $0x0,%eax
082facf9 +0x0b2b:  jmp    082fad91 <+0xbc3>
082facfe +0x0b30:  mov    0x8(%ebp),%eax
082fad01 +0x0b33:  lea    0x30(%eax),%edx
082fad04 +0x0b36:  lea    -0x38(%ebp),%eax
082fad07 +0x0b39:  mov    %eax,0x4(%esp)
082fad0b +0x0b3d:  mov    %edx,(%esp)
082fad0e +0x0b40:  call   082fb502 <+0x1334>
082fad13 +0x0b45:  movl   $0x0,-0x1c(%ebp)
082fad1a +0x0b4c:  jmp    082fad6e <+0xba0>
082fad1c +0x0b4e:  mov    -0x38(%ebp),%edx
082fad1f +0x0b51:  mov    -0x1c(%ebp),%eax
082fad22 +0x0b54:  imul   $0x4c,%eax,%eax
082fad25 +0x0b57:  lea    (%edx,%eax,1),%eax
082fad28 +0x0b5a:  mov    %eax,-0x24(%ebp)
082fad2b +0x0b5d:  mov    0x8(%ebp),%eax
082fad2e +0x0b60:  lea    0x8(%eax),%edx
082fad31 +0x0b63:  lea    -0x24(%ebp),%eax
082fad34 +0x0b66:  mov    %eax,0x4(%esp)
082fad38 +0x0b6a:  mov    %edx,(%esp)
082fad3b +0x0b6d:  call   082fb538 <+0x136a>
082fad40 +0x0b72:  mov    -0x38(%ebp),%edx
082fad43 +0x0b75:  mov    -0x1c(%ebp),%eax
082fad46 +0x0b78:  imul   $0x4c,%eax,%eax
082fad49 +0x0b7b:  lea    (%edx,%eax,1),%eax
082fad4c +0x0b7e:  mov    %eax,-0x20(%ebp)
082fad4f +0x0b81:  mov    0x8(%ebp),%eax
082fad52 +0x0b84:  lea    0x44(%eax),%edx
082fad55 +0x0b87:  lea    -0x20(%ebp),%eax
082fad58 +0x0b8a:  mov    %eax,0x4(%esp)
082fad5c +0x0b8e:  mov    %edx,(%esp)
082fad5f +0x0b91:  call   0810226c <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x128e>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x128e
082fad64 +0x0b96:  movl   $0x1,(%eax)
082fad6a +0x0b9c:  addl   $0x1,-0x1c(%ebp)
082fad6e +0x0ba0:  mov    -0x1c(%ebp),%eax
082fad71 +0x0ba3:  cmp    0xc(%ebp),%eax
082fad74 +0x0ba6:  setl   %al
082fad77 +0x0ba9:  test   %al,%al
082fad79 +0x0bab:  jne    082fad1c <+0xb4e>
082fad7b +0x0bad:  mov    0x8(%ebp),%eax
082fad7e +0x0bb0:  mov    0x38(%eax),%eax
082fad81 +0x0bb3:  mov    %eax,%edx
082fad83 +0x0bb5:  add    0xc(%ebp),%edx
082fad86 +0x0bb8:  mov    0x8(%ebp),%eax
082fad89 +0x0bbb:  mov    %edx,0x38(%eax)
082fad8c +0x0bbe:  mov    $0x1,%eax
082fad91 +0x0bc3:  add    $0x3c,%esp
082fad94 +0x0bc6:  pop    %ebx
082fad95 +0x0bc7:  pop    %esi
082fad96 +0x0bc8:  pop    %edi
082fad97 +0x0bc9:  pop    %ebp
082fad98 +0x0bca:  ret
082fad99 +0x0bcb:  nop
082fad9a +0x0bcc:  push   %ebp
082fad9b +0x0bcd:  mov    %esp,%ebp
082fad9d +0x0bcf:  sub    $0x18,%esp
082fada0 +0x0bd2:  mov    0x8(%ebp),%eax
082fada3 +0x0bd5:  mov    %eax,(%esp)
082fada6 +0x0bd8:  call   082fb562 <+0x1394>
082fadab +0x0bdd:  leave
082fadac +0x0bde:  ret
082fadad +0x0bdf:  nop
082fadae +0x0be0:  push   %ebp
082fadaf +0x0be1:  mov    %esp,%ebp
082fadb1 +0x0be3:  sub    $0x18,%esp
082fadb4 +0x0be6:  mov    0x8(%ebp),%eax
082fadb7 +0x0be9:  mov    %eax,(%esp)
082fadba +0x0bec:  call   082fb582 <+0x13b4>
082fadbf +0x0bf1:  leave
082fadc0 +0x0bf2:  ret
082fadc1 +0x0bf3:  nop
082fadc2 +0x0bf4:  push   %ebp
082fadc3 +0x0bf5:  mov    %esp,%ebp
082fadc5 +0x0bf7:  sub    $0x18,%esp
082fadc8 +0x0bfa:  mov    0x8(%ebp),%eax
082fadcb +0x0bfd:  mov    %eax,(%esp)
082fadce +0x0c00:  call   082fb5aa <+0x13dc>
082fadd3 +0x0c05:  leave
082fadd4 +0x0c06:  ret
082fadd5 +0x0c07:  push   %ebp
082fadd6 +0x0c08:  mov    %esp,%ebp
082fadd8 +0x0c0a:  mov    0x8(%ebp),%eax
082faddb +0x0c0d:  pop    %ebp
082faddc +0x0c0e:  ret
082faddd +0x0c0f:  nop
082fadde +0x0c10:  push   %ebp
082faddf +0x0c11:  mov    %esp,%ebp
082fade1 +0x0c13:  sub    $0x18,%esp
082fade4 +0x0c16:  mov    0xc(%ebp),%eax
082fade7 +0x0c19:  mov    %eax,(%esp)
082fadea +0x0c1c:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
082fadef +0x0c21:  mov    (%eax),%edx
082fadf1 +0x0c23:  mov    0x8(%ebp),%eax
082fadf4 +0x0c26:  mov    %edx,(%eax)
082fadf6 +0x0c28:  mov    0x10(%ebp),%eax
082fadf9 +0x0c2b:  mov    %eax,(%esp)
082fadfc +0x0c2e:  call   082fadd5 <+0xc07>
082fae01 +0x0c33:  mov    (%eax),%edx
082fae03 +0x0c35:  mov    0x8(%ebp),%eax
082fae06 +0x0c38:  mov    %edx,0x4(%eax)
082fae09 +0x0c3b:  leave
082fae0a +0x0c3c:  ret
082fae0b +0x0c3d:  push   %ebp
082fae0c +0x0c3e:  mov    %esp,%ebp
082fae0e +0x0c40:  mov    0x8(%ebp),%eax
082fae11 +0x0c43:  pop    %ebp
082fae12 +0x0c44:  ret
082fae13 +0x0c45:  nop
082fae14 +0x0c46:  push   %ebp
082fae15 +0x0c47:  mov    %esp,%ebp
082fae17 +0x0c49:  push   %esi
082fae18 +0x0c4a:  push   %ebx
082fae19 +0x0c4b:  sub    $0x50,%esp
082fae1c +0x0c4e:  mov    0x8(%ebp),%ebx
082fae1f +0x0c51:  mov    0xc(%ebp),%eax
082fae22 +0x0c54:  mov    %eax,(%esp)
082fae25 +0x0c57:  call   08238f6a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe614>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe614
082fae2a +0x0c5c:  mov    %eax,-0x14(%ebp)
082fae2d +0x0c5f:  mov    0xc(%ebp),%eax
082fae30 +0x0c62:  mov    %eax,(%esp)
082fae33 +0x0c65:  call   082fb5f6 <+0x1428>
082fae38 +0x0c6a:  mov    %eax,-0x10(%ebp)
082fae3b +0x0c6d:  movb   $0x1,-0x9(%ebp)
082fae3f +0x0c71:  jmp    082fae9d <+0xccf>
082fae41 +0x0c73:  mov    -0x14(%ebp),%eax
082fae44 +0x0c76:  mov    %eax,-0x10(%ebp)
082fae47 +0x0c79:  mov    -0x14(%ebp),%eax
082fae4a +0x0c7c:  mov    %eax,(%esp)
082fae4d +0x0c7f:  call   082fb60a <+0x143c>
082fae52 +0x0c84:  mov    %eax,%esi
082fae54 +0x0c86:  mov    0x10(%ebp),%eax
082fae57 +0x0c89:  mov    %eax,0x4(%esp)
082fae5b +0x0c8d:  lea    -0x2d(%ebp),%eax
082fae5e +0x0c90:  mov    %eax,(%esp)
082fae61 +0x0c93:  call   082fb602 <+0x1434>
082fae66 +0x0c98:  mov    0xc(%ebp),%edx
082fae69 +0x0c9b:  mov    %esi,0x8(%esp)
082fae6d +0x0c9f:  mov    %eax,0x4(%esp)
082fae71 +0x0ca3:  mov    %edx,(%esp)
082fae74 +0x0ca6:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082fae79 +0x0cab:  mov    %al,-0x9(%ebp)
082fae7c +0x0cae:  cmpb   $0x0,-0x9(%ebp)
082fae80 +0x0cb2:  je     082fae8f <+0xcc1>
082fae82 +0x0cb4:  mov    -0x14(%ebp),%eax
082fae85 +0x0cb7:  mov    %eax,(%esp)
082fae88 +0x0cba:  call   0823c43a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x75b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x75b8
082fae8d +0x0cbf:  jmp    082fae9a <+0xccc>
082fae8f +0x0cc1:  mov    -0x14(%ebp),%eax
082fae92 +0x0cc4:  mov    %eax,(%esp)
082fae95 +0x0cc7:  call   0823c42f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x75ad>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x75ad
082fae9a +0x0ccc:  mov    %eax,-0x14(%ebp)
082fae9d +0x0ccf:  cmpl   $0x0,-0x14(%ebp)
082faea1 +0x0cd3:  setne  %al
082faea4 +0x0cd6:  test   %al,%al
082faea6 +0x0cd8:  jne    082fae41 <+0xc73>
082faea8 +0x0cda:  mov    -0x10(%ebp),%eax
082faeab +0x0cdd:  mov    %eax,0x4(%esp)
082faeaf +0x0ce1:  lea    -0x34(%ebp),%eax
082faeb2 +0x0ce4:  mov    %eax,(%esp)
082faeb5 +0x0ce7:  call   082fb62c <+0x145e>
082faeba +0x0cec:  cmpb   $0x0,-0x9(%ebp)
082faebe +0x0cf0:  je     082faf3f <+0xd71>
082faec0 +0x0cf2:  lea    -0x2c(%ebp),%eax
082faec3 +0x0cf5:  mov    0xc(%ebp),%edx
082faec6 +0x0cf8:  mov    %edx,0x4(%esp)
082faeca +0x0cfc:  mov    %eax,(%esp)
082faecd +0x0cff:  call   082fb140 <+0xf72>
082faed2 +0x0d04:  sub    $0x4,%esp
082faed5 +0x0d07:  lea    -0x2c(%ebp),%eax
082faed8 +0x0d0a:  mov    %eax,0x4(%esp)
082faedc +0x0d0e:  lea    -0x34(%ebp),%eax
082faedf +0x0d11:  mov    %eax,(%esp)
082faee2 +0x0d14:  call   082fb63a <+0x146c>
082faee7 +0x0d19:  test   %al,%al
082faee9 +0x0d1b:  je     082faf34 <+0xd66>
082faeeb +0x0d1d:  movb   $0x1,-0x25(%ebp)
082faeef +0x0d21:  mov    -0x10(%ebp),%ecx
082faef2 +0x0d24:  mov    -0x14(%ebp),%edx
082faef5 +0x0d27:  lea    -0x24(%ebp),%eax
082faef8 +0x0d2a:  mov    0x10(%ebp),%esi
082faefb +0x0d2d:  mov    %esi,0x10(%esp)
082faeff +0x0d31:  mov    %ecx,0xc(%esp)
082faf03 +0x0d35:  mov    %edx,0x8(%esp)
082faf07 +0x0d39:  mov    0xc(%ebp),%edx
082faf0a +0x0d3c:  mov    %edx,0x4(%esp)
082faf0e +0x0d40:  mov    %eax,(%esp)
082faf11 +0x0d43:  call   082fb64e <+0x1480>
082faf16 +0x0d48:  sub    $0x4,%esp
082faf19 +0x0d4b:  lea    -0x25(%ebp),%eax
082faf1c +0x0d4e:  mov    %eax,0x8(%esp)
082faf20 +0x0d52:  lea    -0x24(%ebp),%eax
082faf23 +0x0d55:  mov    %eax,0x4(%esp)
082faf27 +0x0d59:  mov    %ebx,(%esp)
082faf2a +0x0d5c:  call   082fb716 <+0x1548>
082faf2f +0x0d61:  jmp    082fafd5 <+0xe07>
082faf34 +0x0d66:  lea    -0x34(%ebp),%eax
082faf37 +0x0d69:  mov    %eax,(%esp)
082faf3a +0x0d6c:  call   082fb744 <+0x1576>
082faf3f +0x0d71:  mov    0x10(%ebp),%eax
082faf42 +0x0d74:  mov    %eax,0x4(%esp)
082faf46 +0x0d78:  lea    -0x1e(%ebp),%eax
082faf49 +0x0d7b:  mov    %eax,(%esp)
082faf4c +0x0d7e:  call   082fb602 <+0x1434>
082faf51 +0x0d83:  mov    %eax,%esi
082faf53 +0x0d85:  mov    -0x34(%ebp),%eax
082faf56 +0x0d88:  mov    %eax,(%esp)
082faf59 +0x0d8b:  call   082fb761 <+0x1593>
082faf5e +0x0d90:  mov    0xc(%ebp),%edx
082faf61 +0x0d93:  mov    %esi,0x8(%esp)
082faf65 +0x0d97:  mov    %eax,0x4(%esp)
082faf69 +0x0d9b:  mov    %edx,(%esp)
082faf6c +0x0d9e:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082faf71 +0x0da3:  test   %al,%al
082faf73 +0x0da5:  je     082fafbb <+0xded>
082faf75 +0x0da7:  movb   $0x1,-0x1d(%ebp)
082faf79 +0x0dab:  mov    -0x10(%ebp),%ecx
082faf7c +0x0dae:  mov    -0x14(%ebp),%edx
082faf7f +0x0db1:  lea    -0x1c(%ebp),%eax
082faf82 +0x0db4:  mov    0x10(%ebp),%esi
082faf85 +0x0db7:  mov    %esi,0x10(%esp)
082faf89 +0x0dbb:  mov    %ecx,0xc(%esp)
082faf8d +0x0dbf:  mov    %edx,0x8(%esp)
082faf91 +0x0dc3:  mov    0xc(%ebp),%edx
082faf94 +0x0dc6:  mov    %edx,0x4(%esp)
082faf98 +0x0dca:  mov    %eax,(%esp)
082faf9b +0x0dcd:  call   082fb64e <+0x1480>
082fafa0 +0x0dd2:  sub    $0x4,%esp
082fafa3 +0x0dd5:  lea    -0x1d(%ebp),%eax
082fafa6 +0x0dd8:  mov    %eax,0x8(%esp)
082fafaa +0x0ddc:  lea    -0x1c(%ebp),%eax
082fafad +0x0ddf:  mov    %eax,0x4(%esp)
082fafb1 +0x0de3:  mov    %ebx,(%esp)
082fafb4 +0x0de6:  call   082fb716 <+0x1548>
082fafb9 +0x0deb:  jmp    082fafd5 <+0xe07>
082fafbb +0x0ded:  movb   $0x0,-0x15(%ebp)
082fafbf +0x0df1:  lea    -0x15(%ebp),%eax
082fafc2 +0x0df4:  mov    %eax,0x8(%esp)
082fafc6 +0x0df8:  lea    -0x34(%ebp),%eax
082fafc9 +0x0dfb:  mov    %eax,0x4(%esp)
082fafcd +0x0dff:  mov    %ebx,(%esp)
082fafd0 +0x0e02:  call   082fb784 <+0x15b6>
082fafd5 +0x0e07:  mov    %ebx,%eax
082fafd7 +0x0e09:  lea    -0x8(%ebp),%esp
082fafda +0x0e0c:  add    $0x0,%esp
082fafdd +0x0e0f:  pop    %ebx
082fafde +0x0e10:  pop    %esi
082fafdf +0x0e11:  pop    %ebp
082fafe0 +0x0e12:  ret    $0x4
082fafe3 +0x0e15:  nop
082fafe4 +0x0e16:  push   %ebp
082fafe5 +0x0e17:  mov    %esp,%ebp
082fafe7 +0x0e19:  push   %ebx
082fafe8 +0x0e1a:  sub    $0x14,%esp
082fafeb +0x0e1d:  mov    0x8(%ebp),%ebx
082fafee +0x0e20:  mov    0xc(%ebp),%eax
082faff1 +0x0e23:  mov    0xc(%eax),%eax
082faff4 +0x0e26:  mov    %eax,0x4(%esp)
082faff8 +0x0e2a:  mov    %ebx,(%esp)
082faffb +0x0e2d:  call   082fb7b2 <+0x15e4>
082fb000 +0x0e32:  mov    %ebx,%eax
082fb002 +0x0e34:  add    $0x14,%esp
082fb005 +0x0e37:  pop    %ebx
082fb006 +0x0e38:  pop    %ebp
082fb007 +0x0e39:  ret    $0x4
082fb00a +0x0e3c:  push   %ebp
082fb00b +0x0e3d:  mov    %esp,%ebp
082fb00d +0x0e3f:  push   %ebx
082fb00e +0x0e40:  sub    $0x14,%esp
082fb011 +0x0e43:  mov    0x8(%ebp),%ebx
082fb014 +0x0e46:  mov    0xc(%ebp),%eax
082fb017 +0x0e49:  add    $0x4,%eax
082fb01a +0x0e4c:  mov    %eax,0x4(%esp)
082fb01e +0x0e50:  mov    %ebx,(%esp)
082fb021 +0x0e53:  call   082fb7b2 <+0x15e4>
082fb026 +0x0e58:  mov    %ebx,%eax
082fb028 +0x0e5a:  add    $0x14,%esp
082fb02b +0x0e5d:  pop    %ebx
082fb02c +0x0e5e:  pop    %ebp
082fb02d +0x0e5f:  ret    $0x4
082fb030 +0x0e62:  push   %ebp
082fb031 +0x0e63:  mov    %esp,%ebp
082fb033 +0x0e65:  sub    $0x28,%esp
082fb036 +0x0e68:  lea    -0x14(%ebp),%eax
082fb039 +0x0e6b:  mov    0xc(%ebp),%edx
082fb03c +0x0e6e:  mov    %edx,0x8(%esp)
082fb040 +0x0e72:  mov    0x8(%ebp),%edx
082fb043 +0x0e75:  mov    %edx,0x4(%esp)
082fb047 +0x0e79:  mov    %eax,(%esp)
082fb04a +0x0e7c:  call   082fb7c0 <+0x15f2>
082fb04f +0x0e81:  sub    $0x4,%esp
082fb052 +0x0e84:  mov    0x8(%ebp),%eax
082fb055 +0x0e87:  mov    %eax,(%esp)
082fb058 +0x0e8a:  call   082fb94e <+0x1780>
082fb05d +0x0e8f:  mov    %eax,-0xc(%ebp)
082fb060 +0x0e92:  mov    -0x10(%ebp),%eax
082fb063 +0x0e95:  mov    %eax,0x8(%esp)
082fb067 +0x0e99:  mov    -0x14(%ebp),%eax
082fb06a +0x0e9c:  mov    %eax,0x4(%esp)
082fb06e +0x0ea0:  mov    0x8(%ebp),%eax
082fb071 +0x0ea3:  mov    %eax,(%esp)
082fb074 +0x0ea6:  call   082fb95a <+0x178c>
082fb079 +0x0eab:  mov    0x8(%ebp),%eax
082fb07c +0x0eae:  mov    %eax,(%esp)
082fb07f +0x0eb1:  call   082fb94e <+0x1780>
082fb084 +0x0eb6:  mov    -0xc(%ebp),%edx
082fb087 +0x0eb9:  mov    %edx,%ecx
082fb089 +0x0ebb:  sub    %eax,%ecx
082fb08b +0x0ebd:  mov    %ecx,%eax
082fb08d +0x0ebf:  leave
082fb08e +0x0ec0:  ret
082fb08f +0x0ec1:  nop
082fb090 +0x0ec2:  push   %ebp
082fb091 +0x0ec3:  mov    %esp,%ebp
082fb093 +0x0ec5:  sub    $0x18,%esp
082fb096 +0x0ec8:  mov    0x8(%ebp),%eax
082fb099 +0x0ecb:  mov    0xc(%ebp),%edx
082fb09c +0x0ece:  mov    %edx,0x4(%esp)
082fb0a0 +0x0ed2:  mov    %eax,(%esp)
082fb0a3 +0x0ed5:  call   082fba1a <+0x184c>
082fb0a8 +0x0eda:  leave
082fb0a9 +0x0edb:  ret
082fb0aa +0x0edc:  push   %ebp
082fb0ab +0x0edd:  mov    %esp,%ebp
082fb0ad +0x0edf:  sub    $0x28,%esp
082fb0b0 +0x0ee2:  lea    -0x14(%ebp),%eax
082fb0b3 +0x0ee5:  mov    0xc(%ebp),%edx
082fb0b6 +0x0ee8:  mov    %edx,0x8(%esp)
082fb0ba +0x0eec:  mov    0x8(%ebp),%edx
082fb0bd +0x0eef:  mov    %edx,0x4(%esp)
082fb0c1 +0x0ef3:  mov    %eax,(%esp)
082fb0c4 +0x0ef6:  call   082fba74 <+0x18a6>
082fb0c9 +0x0efb:  sub    $0x4,%esp
082fb0cc +0x0efe:  mov    0x8(%ebp),%eax
082fb0cf +0x0f01:  mov    %eax,(%esp)
082fb0d2 +0x0f04:  call   0819391c <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x584>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x584
082fb0d7 +0x0f09:  mov    %eax,-0xc(%ebp)
082fb0da +0x0f0c:  mov    -0x10(%ebp),%eax
082fb0dd +0x0f0f:  mov    %eax,0x8(%esp)
082fb0e1 +0x0f13:  mov    -0x14(%ebp),%eax
082fb0e4 +0x0f16:  mov    %eax,0x4(%esp)
082fb0e8 +0x0f1a:  mov    0x8(%ebp),%eax
082fb0eb +0x0f1d:  mov    %eax,(%esp)
082fb0ee +0x0f20:  call   082fbc02 <+0x1a34>
082fb0f3 +0x0f25:  mov    0x8(%ebp),%eax
082fb0f6 +0x0f28:  mov    %eax,(%esp)
082fb0f9 +0x0f2b:  call   0819391c <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x584>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x584
082fb0fe +0x0f30:  mov    -0xc(%ebp),%edx
082fb101 +0x0f33:  mov    %edx,%ecx
082fb103 +0x0f35:  sub    %eax,%ecx
082fb105 +0x0f37:  mov    %ecx,%eax
082fb107 +0x0f39:  leave
082fb108 +0x0f3a:  ret
082fb109 +0x0f3b:  nop
082fb10a +0x0f3c:  push   %ebp
082fb10b +0x0f3d:  mov    %esp,%ebp
082fb10d +0x0f3f:  mov    0x8(%ebp),%eax
082fb110 +0x0f42:  mov    0x14(%eax),%eax
082fb113 +0x0f45:  test   %eax,%eax
082fb115 +0x0f47:  sete   %al
082fb118 +0x0f4a:  pop    %ebp
082fb119 +0x0f4b:  ret
082fb11a +0x0f4c:  push   %ebp
082fb11b +0x0f4d:  mov    %esp,%ebp
082fb11d +0x0f4f:  push   %ebx
082fb11e +0x0f50:  sub    $0x14,%esp
082fb121 +0x0f53:  mov    0x8(%ebp),%ebx
082fb124 +0x0f56:  mov    0xc(%ebp),%eax
082fb127 +0x0f59:  add    $0x4,%eax
082fb12a +0x0f5c:  mov    %eax,0x4(%esp)
082fb12e +0x0f60:  mov    %ebx,(%esp)
082fb131 +0x0f63:  call   082fb62c <+0x145e>
082fb136 +0x0f68:  mov    %ebx,%eax
082fb138 +0x0f6a:  add    $0x14,%esp
082fb13b +0x0f6d:  pop    %ebx
082fb13c +0x0f6e:  pop    %ebp
082fb13d +0x0f6f:  ret    $0x4
082fb140 +0x0f72:  push   %ebp
082fb141 +0x0f73:  mov    %esp,%ebp
082fb143 +0x0f75:  push   %ebx
082fb144 +0x0f76:  sub    $0x14,%esp
082fb147 +0x0f79:  mov    0x8(%ebp),%ebx
082fb14a +0x0f7c:  mov    0xc(%ebp),%eax
082fb14d +0x0f7f:  mov    0xc(%eax),%eax
082fb150 +0x0f82:  mov    %eax,0x4(%esp)
082fb154 +0x0f86:  mov    %ebx,(%esp)
082fb157 +0x0f89:  call   082fb62c <+0x145e>
082fb15c +0x0f8e:  mov    %ebx,%eax
082fb15e +0x0f90:  add    $0x14,%esp
082fb161 +0x0f93:  pop    %ebx
082fb162 +0x0f94:  pop    %ebp
082fb163 +0x0f95:  ret    $0x4
082fb166 +0x0f98:  push   %ebp
082fb167 +0x0f99:  mov    %esp,%ebp
082fb169 +0x0f9b:  push   %ebx
082fb16a +0x0f9c:  sub    $0x14,%esp
082fb16d +0x0f9f:  mov    0x8(%ebp),%eax
082fb170 +0x0fa2:  mov    %eax,(%esp)
082fb173 +0x0fa5:  call   08238f6a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe614>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe614
082fb178 +0x0faa:  mov    %eax,0x4(%esp)
082fb17c +0x0fae:  mov    0x8(%ebp),%eax
082fb17f +0x0fb1:  mov    %eax,(%esp)
082fb182 +0x0fb4:  call   08238f14 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe5be>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe5be
082fb187 +0x0fb9:  mov    0x8(%ebp),%eax
082fb18a +0x0fbc:  mov    %eax,(%esp)
082fb18d +0x0fbf:  call   082fbcc2 <+0x1af4>
082fb192 +0x0fc4:  mov    %eax,%ebx
082fb194 +0x0fc6:  mov    0x8(%ebp),%eax
082fb197 +0x0fc9:  mov    %eax,(%esp)
082fb19a +0x0fcc:  call   082fb5f6 <+0x1428>
082fb19f +0x0fd1:  mov    %eax,(%ebx)
082fb1a1 +0x0fd3:  mov    0x8(%ebp),%eax
082fb1a4 +0x0fd6:  mov    %eax,(%esp)
082fb1a7 +0x0fd9:  call   082fbcce <+0x1b00>
082fb1ac +0x0fde:  movl   $0x0,(%eax)
082fb1b2 +0x0fe4:  mov    0x8(%ebp),%eax
082fb1b5 +0x0fe7:  mov    %eax,(%esp)
082fb1b8 +0x0fea:  call   082fbcda <+0x1b0c>
082fb1bd +0x0fef:  mov    %eax,%ebx
082fb1bf +0x0ff1:  mov    0x8(%ebp),%eax
082fb1c2 +0x0ff4:  mov    %eax,(%esp)
082fb1c5 +0x0ff7:  call   082fb5f6 <+0x1428>
082fb1ca +0x0ffc:  mov    %eax,(%ebx)
082fb1cc +0x0ffe:  mov    0x8(%ebp),%eax
082fb1cf +0x1001:  movl   $0x0,0x14(%eax)
082fb1d6 +0x1008:  add    $0x14,%esp
082fb1d9 +0x100b:  pop    %ebx
082fb1da +0x100c:  pop    %ebp
082fb1db +0x100d:  ret
082fb1dc +0x100e:  push   %ebp
082fb1dd +0x100f:  mov    %esp,%ebp
082fb1df +0x1011:  push   %esi
082fb1e0 +0x1012:  push   %ebx
082fb1e1 +0x1013:  sub    $0x30,%esp
082fb1e4 +0x1016:  mov    0x8(%ebp),%ebx
082fb1e7 +0x1019:  mov    0xc(%ebp),%eax
082fb1ea +0x101c:  mov    %eax,(%esp)
082fb1ed +0x101f:  call   082fbcf2 <+0x1b24>
082fb1f2 +0x1024:  mov    %eax,%esi
082fb1f4 +0x1026:  mov    0xc(%ebp),%eax
082fb1f7 +0x1029:  mov    %eax,(%esp)
082fb1fa +0x102c:  call   082fbce6 <+0x1b18>
082fb1ff +0x1031:  lea    -0x10(%ebp),%edx
082fb202 +0x1034:  mov    0x10(%ebp),%ecx
082fb205 +0x1037:  mov    %ecx,0x10(%esp)
082fb209 +0x103b:  mov    %esi,0xc(%esp)
082fb20d +0x103f:  mov    %eax,0x8(%esp)
082fb211 +0x1043:  mov    0xc(%ebp),%eax
082fb214 +0x1046:  mov    %eax,0x4(%esp)
082fb218 +0x104a:  mov    %edx,(%esp)
082fb21b +0x104d:  call   082fbcfe <+0x1b30>
082fb220 +0x1052:  sub    $0x4,%esp
082fb223 +0x1055:  lea    -0xc(%ebp),%eax
082fb226 +0x1058:  mov    0xc(%ebp),%edx
082fb229 +0x105b:  mov    %edx,0x4(%esp)
082fb22d +0x105f:  mov    %eax,(%esp)
082fb230 +0x1062:  call   082fb00a <+0xe3c>
082fb235 +0x1067:  sub    $0x4,%esp
082fb238 +0x106a:  lea    -0xc(%ebp),%eax
082fb23b +0x106d:  mov    %eax,0x4(%esp)
082fb23f +0x1071:  lea    -0x10(%ebp),%eax
082fb242 +0x1074:  mov    %eax,(%esp)
082fb245 +0x1077:  call   082faa7a <+0x8ac>
082fb24a +0x107c:  test   %al,%al
082fb24c +0x107e:  jne    082fb273 <+0x10a5>
082fb24e +0x1080:  mov    -0x10(%ebp),%eax
082fb251 +0x1083:  mov    %eax,(%esp)
082fb254 +0x1086:  call   082fb761 <+0x1593>
082fb259 +0x108b:  mov    0xc(%ebp),%edx
082fb25c +0x108e:  mov    %eax,0x8(%esp)
082fb260 +0x1092:  mov    0x10(%ebp),%eax
082fb263 +0x1095:  mov    %eax,0x4(%esp)
082fb267 +0x1099:  mov    %edx,(%esp)
082fb26a +0x109c:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082fb26f +0x10a1:  test   %al,%al
082fb271 +0x10a3:  je     082fb287 <+0x10b9>
082fb273 +0x10a5:  mov    0xc(%ebp),%eax
082fb276 +0x10a8:  mov    %eax,0x4(%esp)
082fb27a +0x10ac:  mov    %ebx,(%esp)
082fb27d +0x10af:  call   082fb00a <+0xe3c>
082fb282 +0x10b4:  sub    $0x4,%esp
082fb285 +0x10b7:  jmp    082fb28c <+0x10be>
082fb287 +0x10b9:  mov    -0x10(%ebp),%eax
082fb28a +0x10bc:  mov    %eax,(%ebx)
082fb28c +0x10be:  mov    %ebx,%eax
082fb28e +0x10c0:  lea    -0x8(%ebp),%esp
082fb291 +0x10c3:  add    $0x0,%esp
082fb294 +0x10c6:  pop    %ebx
082fb295 +0x10c7:  pop    %esi
082fb296 +0x10c8:  pop    %ebp
082fb297 +0x10c9:  ret    $0x4
082fb29a +0x10cc:  push   %ebp
082fb29b +0x10cd:  mov    %esp,%ebp
082fb29d +0x10cf:  sub    $0x18,%esp
082fb2a0 +0x10d2:  mov    0x8(%ebp),%eax
082fb2a3 +0x10d5:  mov    %eax,(%esp)
082fb2a6 +0x10d8:  call   082fbdbc <+0x1bee>
082fb2ab +0x10dd:  leave
082fb2ac +0x10de:  ret
082fb2ad +0x10df:  nop
082fb2ae +0x10e0:  push   %ebp
082fb2af +0x10e1:  mov    %esp,%ebp
082fb2b1 +0x10e3:  push   %esi
082fb2b2 +0x10e4:  push   %ebx
082fb2b3 +0x10e5:  sub    $0x10,%esp
082fb2b6 +0x10e8:  mov    0x8(%ebp),%eax
082fb2b9 +0x10eb:  mov    %eax,(%esp)
082fb2bc +0x10ee:  call   082fbd7a <+0x1bac>
082fb2c1 +0x10f3:  movl   $0x0,0x4(%esp)
082fb2c9 +0x10fb:  mov    0x8(%ebp),%eax
082fb2cc +0x10fe:  mov    %eax,(%esp)
082fb2cf +0x1101:  call   082fbdd0 <+0x1c02>
082fb2d4 +0x1106:  jmp    082fb2f1 <+0x1123>
082fb2d6 +0x1108:  mov    %edx,%ebx
082fb2d8 +0x110a:  mov    %eax,%esi
082fb2da +0x110c:  mov    0x8(%ebp),%eax
082fb2dd +0x110f:  mov    %eax,(%esp)
082fb2e0 +0x1112:  call   082fb29a <+0x10cc>
082fb2e5 +0x1117:  mov    %esi,%eax
082fb2e7 +0x1119:  mov    %ebx,%edx
082fb2e9 +0x111b:  mov    %eax,(%esp)
082fb2ec +0x111e:  call   08ae3750 <_Unwind_Resume>
082fb2f1 +0x1123:  add    $0x10,%esp
082fb2f4 +0x1126:  pop    %ebx
082fb2f5 +0x1127:  pop    %esi
082fb2f6 +0x1128:  pop    %ebp
082fb2f7 +0x1129:  ret
082fb2f8 +0x112a:  push   %ebp
082fb2f9 +0x112b:  mov    %esp,%ebp
082fb2fb +0x112d:  push   %esi
082fb2fc +0x112e:  push   %ebx
082fb2fd +0x112f:  sub    $0x10,%esp
082fb300 +0x1132:  mov    0x8(%ebp),%eax
082fb303 +0x1135:  mov    (%eax),%eax
082fb305 +0x1137:  test   %eax,%eax
082fb307 +0x1139:  je     082fb366 <+0x1198>
082fb309 +0x113b:  mov    0x8(%ebp),%eax
082fb30c +0x113e:  mov    0x24(%eax),%eax
082fb30f +0x1141:  lea    0x4(%eax),%edx
082fb312 +0x1144:  mov    0x8(%ebp),%eax
082fb315 +0x1147:  mov    0x14(%eax),%eax
082fb318 +0x114a:  mov    %edx,0x8(%esp)
082fb31c +0x114e:  mov    %eax,0x4(%esp)
082fb320 +0x1152:  mov    0x8(%ebp),%eax
082fb323 +0x1155:  mov    %eax,(%esp)
082fb326 +0x1158:  call   082fbf40 <+0x1d72>
082fb32b +0x115d:  mov    0x8(%ebp),%eax
082fb32e +0x1160:  mov    0x4(%eax),%edx
082fb331 +0x1163:  mov    0x8(%ebp),%eax
082fb334 +0x1166:  mov    (%eax),%eax
082fb336 +0x1168:  mov    %edx,0x8(%esp)
082fb33a +0x116c:  mov    %eax,0x4(%esp)
082fb33e +0x1170:  mov    0x8(%ebp),%eax
082fb341 +0x1173:  mov    %eax,(%esp)
082fb344 +0x1176:  call   082fbf76 <+0x1da8>
082fb349 +0x117b:  jmp    082fb366 <+0x1198>
082fb34b +0x117d:  mov    %edx,%ebx
082fb34d +0x117f:  mov    %eax,%esi
082fb34f +0x1181:  mov    0x8(%ebp),%eax
082fb352 +0x1184:  mov    %eax,(%esp)
082fb355 +0x1187:  call   082fb29a <+0x10cc>
082fb35a +0x118c:  mov    %esi,%eax
082fb35c +0x118e:  mov    %ebx,%edx
082fb35e +0x1190:  mov    %eax,(%esp)
082fb361 +0x1193:  call   08ae3750 <_Unwind_Resume>
082fb366 +0x1198:  mov    0x8(%ebp),%eax
082fb369 +0x119b:  mov    %eax,(%esp)
082fb36c +0x119e:  call   082fb29a <+0x10cc>
082fb371 +0x11a3:  add    $0x10,%esp
082fb374 +0x11a6:  pop    %ebx
082fb375 +0x11a7:  pop    %esi
082fb376 +0x11a8:  pop    %ebp
082fb377 +0x11a9:  ret
082fb378 +0x11aa:  push   %ebp
082fb379 +0x11ab:  mov    %esp,%ebp
082fb37b +0x11ad:  push   %ebx
082fb37c +0x11ae:  sub    $0x14,%esp
082fb37f +0x11b1:  mov    0x8(%ebp),%ebx
082fb382 +0x11b4:  mov    %ebx,%eax
082fb384 +0x11b6:  mov    0xc(%ebp),%edx
082fb387 +0x11b9:  add    $0x8,%edx
082fb38a +0x11bc:  mov    %edx,0x4(%esp)
082fb38e +0x11c0:  mov    %eax,(%esp)
082fb391 +0x11c3:  call   082fb3d4 <+0x1206>
082fb396 +0x11c8:  mov    %ebx,%eax
082fb398 +0x11ca:  mov    %ebx,%eax
082fb39a +0x11cc:  add    $0x14,%esp
082fb39d +0x11cf:  pop    %ebx
082fb39e +0x11d0:  pop    %ebp
082fb39f +0x11d1:  ret    $0x4
082fb3a2 +0x11d4:  push   %ebp
082fb3a3 +0x11d5:  mov    %esp,%ebp
082fb3a5 +0x11d7:  push   %ebx
082fb3a6 +0x11d8:  sub    $0x14,%esp
082fb3a9 +0x11db:  mov    0x8(%ebp),%ebx
082fb3ac +0x11de:  mov    %ebx,%eax
082fb3ae +0x11e0:  mov    0xc(%ebp),%edx
082fb3b1 +0x11e3:  add    $0x18,%edx
082fb3b4 +0x11e6:  mov    %edx,0x4(%esp)
082fb3b8 +0x11ea:  mov    %eax,(%esp)
082fb3bb +0x11ed:  call   082fb3d4 <+0x1206>
082fb3c0 +0x11f2:  mov    %ebx,%eax
082fb3c2 +0x11f4:  mov    %ebx,%eax
082fb3c4 +0x11f6:  add    $0x14,%esp
082fb3c7 +0x11f9:  pop    %ebx
082fb3c8 +0x11fa:  pop    %ebp
082fb3c9 +0x11fb:  ret    $0x4
082fb3cc +0x11fe:  push   %ebp
082fb3cd +0x11ff:  mov    %esp,%ebp
082fb3cf +0x1201:  mov    0x8(%ebp),%eax
082fb3d2 +0x1204:  pop    %ebp
082fb3d3 +0x1205:  ret
082fb3d4 +0x1206:  push   %ebp
082fb3d5 +0x1207:  mov    %esp,%ebp
082fb3d7 +0x1209:  mov    0xc(%ebp),%eax
082fb3da +0x120c:  mov    (%eax),%edx
082fb3dc +0x120e:  mov    0x8(%ebp),%eax
082fb3df +0x1211:  mov    %edx,(%eax)
082fb3e1 +0x1213:  mov    0xc(%ebp),%eax
082fb3e4 +0x1216:  mov    0x4(%eax),%edx
082fb3e7 +0x1219:  mov    0x8(%ebp),%eax
082fb3ea +0x121c:  mov    %edx,0x4(%eax)
082fb3ed +0x121f:  mov    0xc(%ebp),%eax
082fb3f0 +0x1222:  mov    0x8(%eax),%edx
082fb3f3 +0x1225:  mov    0x8(%ebp),%eax
082fb3f6 +0x1228:  mov    %edx,0x8(%eax)
082fb3f9 +0x122b:  mov    0xc(%ebp),%eax
082fb3fc +0x122e:  mov    0xc(%eax),%edx
082fb3ff +0x1231:  mov    0x8(%ebp),%eax
082fb402 +0x1234:  mov    %edx,0xc(%eax)
082fb405 +0x1237:  pop    %ebp
082fb406 +0x1238:  ret
082fb407 +0x1239:  nop
082fb408 +0x123a:  push   %ebp
082fb409 +0x123b:  mov    %esp,%ebp
082fb40b +0x123d:  sub    $0x20,%esp
082fb40e +0x1240:  leave
082fb40f +0x1241:  ret
082fb410 +0x1242:  push   %ebp
082fb411 +0x1243:  mov    %esp,%ebp
082fb413 +0x1245:  mov    0x8(%ebp),%eax
082fb416 +0x1248:  pop    %ebp
082fb417 +0x1249:  ret
082fb418 +0x124a:  push   %ebp
082fb419 +0x124b:  mov    %esp,%ebp
082fb41b +0x124d:  sub    $0x18,%esp
082fb41e +0x1250:  mov    0xc(%ebp),%eax
082fb421 +0x1253:  mov    %eax,(%esp)
082fb424 +0x1256:  call   082fbfb7 <+0x1de9>
082fb429 +0x125b:  mov    0x8(%ebp),%edx
082fb42c +0x125e:  mov    %eax,0x4(%esp)
082fb430 +0x1262:  mov    %edx,(%esp)
082fb433 +0x1265:  call   082fbfc0 <+0x1df2>
082fb438 +0x126a:  leave
082fb439 +0x126b:  ret
082fb43a +0x126c:  push   %ebp
082fb43b +0x126d:  mov    %esp,%ebp
082fb43d +0x126f:  sub    $0x18,%esp
082fb440 +0x1272:  mov    0x8(%ebp),%eax
082fb443 +0x1275:  mov    %eax,(%esp)
082fb446 +0x1278:  call   082fc07c <+0x1eae>
082fb44b +0x127d:  mov    0x8(%ebp),%eax
082fb44e +0x1280:  mov    %eax,(%esp)
082fb451 +0x1283:  call   082fb4c8 <+0x12fa>
082fb456 +0x1288:  leave
082fb457 +0x1289:  ret
082fb458 +0x128a:  push   %ebp
082fb459 +0x128b:  mov    %esp,%ebp
082fb45b +0x128d:  sub    $0x18,%esp
082fb45e +0x1290:  mov    0x8(%ebp),%eax
082fb461 +0x1293:  mov    %eax,(%esp)
082fb464 +0x1296:  call   082fc0a2 <+0x1ed4>
082fb469 +0x129b:  leave
082fb46a +0x129c:  ret
082fb46b +0x129d:  nop
082fb46c +0x129e:  push   %ebp
082fb46d +0x129f:  mov    %esp,%ebp
082fb46f +0x12a1:  sub    $0x28,%esp
082fb472 +0x12a4:  mov    0x8(%ebp),%eax
082fb475 +0x12a7:  mov    (%eax),%eax
082fb477 +0x12a9:  mov    %eax,-0x10(%ebp)
082fb47a +0x12ac:  jmp    082fb4b6 <+0x12e8>
082fb47c +0x12ae:  mov    -0x10(%ebp),%eax
082fb47f +0x12b1:  mov    %eax,-0xc(%ebp)
082fb482 +0x12b4:  mov    -0x10(%ebp),%eax
082fb485 +0x12b7:  mov    (%eax),%eax
082fb487 +0x12b9:  mov    %eax,-0x10(%ebp)
082fb48a +0x12bc:  mov    0x8(%ebp),%eax
082fb48d +0x12bf:  mov    %eax,(%esp)
082fb490 +0x12c2:  call   082fc0a8 <+0x1eda>
082fb495 +0x12c7:  mov    -0xc(%ebp),%edx
082fb498 +0x12ca:  mov    %edx,0x4(%esp)
082fb49c +0x12ce:  mov    %eax,(%esp)
082fb49f +0x12d1:  call   082fc0b6 <+0x1ee8>
082fb4a4 +0x12d6:  mov    -0xc(%ebp),%eax
082fb4a7 +0x12d9:  mov    %eax,0x4(%esp)
082fb4ab +0x12dd:  mov    0x8(%ebp),%eax
082fb4ae +0x12e0:  mov    %eax,(%esp)
082fb4b1 +0x12e3:  call   082fc0ca <+0x1efc>
082fb4b6 +0x12e8:  mov    0x8(%ebp),%edx
082fb4b9 +0x12eb:  mov    -0x10(%ebp),%eax
082fb4bc +0x12ee:  cmp    %eax,%edx
082fb4be +0x12f0:  setne  %al
082fb4c1 +0x12f3:  test   %al,%al
082fb4c3 +0x12f5:  jne    082fb47c <+0x12ae>
082fb4c5 +0x12f7:  leave
082fb4c6 +0x12f8:  ret
082fb4c7 +0x12f9:  nop
082fb4c8 +0x12fa:  push   %ebp
082fb4c9 +0x12fb:  mov    %esp,%ebp
082fb4cb +0x12fd:  mov    0x8(%ebp),%edx
082fb4ce +0x1300:  mov    0x8(%ebp),%eax
082fb4d1 +0x1303:  mov    %edx,(%eax)
082fb4d3 +0x1305:  mov    0x8(%ebp),%edx
082fb4d6 +0x1308:  mov    0x8(%ebp),%eax
082fb4d9 +0x130b:  mov    %edx,0x4(%eax)
082fb4dc +0x130e:  pop    %ebp
082fb4dd +0x130f:  ret
082fb4de +0x1310:  push   %ebp
082fb4df +0x1311:  mov    %esp,%ebp
082fb4e1 +0x1313:  sub    $0x18,%esp
082fb4e4 +0x1316:  mov    0x8(%ebp),%eax
082fb4e7 +0x1319:  mov    %eax,(%esp)
082fb4ea +0x131c:  call   082fa34e <+0x180>
082fb4ef +0x1321:  mov    0x8(%ebp),%eax
082fb4f2 +0x1324:  movl   $0x8f21,0x44(%eax)
082fb4f9 +0x132b:  mov    0x8(%ebp),%eax
082fb4fc +0x132e:  movb   $0x0,0x48(%eax)
082fb500 +0x1332:  leave
082fb501 +0x1333:  ret
082fb502 +0x1334:  push   %ebp
082fb503 +0x1335:  mov    %esp,%ebp
082fb505 +0x1337:  sub    $0x28,%esp
082fb508 +0x133a:  lea    -0xc(%ebp),%eax
082fb50b +0x133d:  mov    0x8(%ebp),%edx
082fb50e +0x1340:  mov    %edx,0x4(%esp)
082fb512 +0x1344:  mov    %eax,(%esp)
082fb515 +0x1347:  call   082fc0ec <+0x1f1e>
082fb51a +0x134c:  sub    $0x4,%esp
082fb51d +0x134f:  mov    0xc(%ebp),%eax
082fb520 +0x1352:  mov    %eax,0x8(%esp)
082fb524 +0x1356:  mov    -0xc(%ebp),%eax
082fb527 +0x1359:  mov    %eax,0x4(%esp)
082fb52b +0x135d:  mov    0x8(%ebp),%eax
082fb52e +0x1360:  mov    %eax,(%esp)
082fb531 +0x1363:  call   082fc110 <+0x1f42>
082fb536 +0x1368:  leave
082fb537 +0x1369:  ret
082fb538 +0x136a:  push   %ebp
082fb539 +0x136b:  mov    %esp,%ebp
082fb53b +0x136d:  sub    $0x28,%esp
082fb53e +0x1370:  mov    0xc(%ebp),%eax
082fb541 +0x1373:  mov    %eax,(%esp)
082fb544 +0x1376:  call   082fc147 <+0x1f79>
082fb549 +0x137b:  mov    (%eax),%eax
082fb54b +0x137d:  mov    %eax,-0xc(%ebp)
082fb54e +0x1380:  mov    0x8(%ebp),%eax
082fb551 +0x1383:  lea    -0xc(%ebp),%edx
082fb554 +0x1386:  mov    %edx,0x4(%esp)
082fb558 +0x138a:  mov    %eax,(%esp)
082fb55b +0x138d:  call   082fc150 <+0x1f82>
082fb560 +0x1392:  leave
082fb561 +0x1393:  ret
082fb562 +0x1394:  push   %ebp
082fb563 +0x1395:  mov    %esp,%ebp
082fb565 +0x1397:  sub    $0x18,%esp
082fb568 +0x139a:  mov    0x8(%ebp),%eax
082fb56b +0x139d:  lea    0x8(%eax),%edx
082fb56e +0x13a0:  mov    0x8(%ebp),%eax
082fb571 +0x13a3:  add    $0x18,%eax
082fb574 +0x13a6:  mov    %edx,0x4(%esp)
082fb578 +0x13aa:  mov    %eax,(%esp)
082fb57b +0x13ad:  call   082fc17a <+0x1fac>
082fb580 +0x13b2:  leave
082fb581 +0x13b3:  ret
082fb582 +0x13b4:  push   %ebp
082fb583 +0x13b5:  mov    %esp,%ebp
082fb585 +0x13b7:  sub    $0x28,%esp
082fb588 +0x13ba:  lea    -0x18(%ebp),%eax
082fb58b +0x13bd:  mov    0x8(%ebp),%edx
082fb58e +0x13c0:  mov    %edx,0x4(%esp)
082fb592 +0x13c4:  mov    %eax,(%esp)
082fb595 +0x13c7:  call   082fb378 <+0x11aa>
082fb59a +0x13cc:  sub    $0x4,%esp
082fb59d +0x13cf:  lea    -0x18(%ebp),%eax
082fb5a0 +0x13d2:  mov    %eax,(%esp)
082fb5a3 +0x13d5:  call   082fc18e <+0x1fc0>
082fb5a8 +0x13da:  leave
082fb5a9 +0x13db:  ret
082fb5aa +0x13dc:  push   %ebp
082fb5ab +0x13dd:  mov    %esp,%ebp
082fb5ad +0x13df:  sub    $0x18,%esp
082fb5b0 +0x13e2:  mov    0x8(%ebp),%eax
082fb5b3 +0x13e5:  mov    0x8(%eax),%edx
082fb5b6 +0x13e8:  mov    0x8(%ebp),%eax
082fb5b9 +0x13eb:  mov    0x10(%eax),%eax
082fb5bc +0x13ee:  sub    $0x4,%eax
082fb5bf +0x13f1:  cmp    %eax,%edx
082fb5c1 +0x13f3:  je     082fb5e9 <+0x141b>
082fb5c3 +0x13f5:  mov    0x8(%ebp),%eax
082fb5c6 +0x13f8:  mov    0x8(%eax),%edx
082fb5c9 +0x13fb:  mov    0x8(%ebp),%eax
082fb5cc +0x13fe:  mov    %edx,0x4(%esp)
082fb5d0 +0x1402:  mov    %eax,(%esp)
082fb5d3 +0x1405:  call   082fc198 <+0x1fca>
082fb5d8 +0x140a:  mov    0x8(%ebp),%eax
082fb5db +0x140d:  mov    0x8(%eax),%eax
082fb5de +0x1410:  lea    0x4(%eax),%edx
082fb5e1 +0x1413:  mov    0x8(%ebp),%eax
082fb5e4 +0x1416:  mov    %edx,0x8(%eax)
082fb5e7 +0x1419:  jmp    082fb5f4 <+0x1426>
082fb5e9 +0x141b:  mov    0x8(%ebp),%eax
082fb5ec +0x141e:  mov    %eax,(%esp)
082fb5ef +0x1421:  call   082fc19e <+0x1fd0>
082fb5f4 +0x1426:  leave
082fb5f5 +0x1427:  ret
082fb5f6 +0x1428:  push   %ebp
082fb5f7 +0x1429:  mov    %esp,%ebp
082fb5f9 +0x142b:  mov    0x8(%ebp),%eax
082fb5fc +0x142e:  add    $0x4,%eax
082fb5ff +0x1431:  pop    %ebp
082fb600 +0x1432:  ret
082fb601 +0x1433:  nop
082fb602 +0x1434:  push   %ebp
082fb603 +0x1435:  mov    %esp,%ebp
082fb605 +0x1437:  mov    0xc(%ebp),%eax
082fb608 +0x143a:  pop    %ebp
082fb609 +0x143b:  ret
082fb60a +0x143c:  push   %ebp
082fb60b +0x143d:  mov    %esp,%ebp
082fb60d +0x143f:  sub    $0x28,%esp
082fb610 +0x1442:  mov    0x8(%ebp),%eax
082fb613 +0x1445:  mov    %eax,(%esp)
082fb616 +0x1448:  call   082fc1f7 <+0x2029>
082fb61b +0x144d:  mov    %eax,0x4(%esp)
082fb61f +0x1451:  lea    -0x9(%ebp),%eax
082fb622 +0x1454:  mov    %eax,(%esp)
082fb625 +0x1457:  call   082fb602 <+0x1434>
082fb62a +0x145c:  leave
082fb62b +0x145d:  ret
082fb62c +0x145e:  push   %ebp
082fb62d +0x145f:  mov    %esp,%ebp
082fb62f +0x1461:  mov    0xc(%ebp),%edx
082fb632 +0x1464:  mov    0x8(%ebp),%eax
082fb635 +0x1467:  mov    %edx,(%eax)
082fb637 +0x1469:  pop    %ebp
082fb638 +0x146a:  ret
082fb639 +0x146b:  nop
082fb63a +0x146c:  push   %ebp
082fb63b +0x146d:  mov    %esp,%ebp
082fb63d +0x146f:  mov    0x8(%ebp),%eax
082fb640 +0x1472:  mov    (%eax),%edx
082fb642 +0x1474:  mov    0xc(%ebp),%eax
082fb645 +0x1477:  mov    (%eax),%eax
082fb647 +0x1479:  cmp    %eax,%edx
082fb649 +0x147b:  sete   %al
082fb64c +0x147e:  pop    %ebp
082fb64d +0x147f:  ret
082fb64e +0x1480:  push   %ebp
082fb64f +0x1481:  mov    %esp,%ebp
082fb651 +0x1483:  push   %esi
082fb652 +0x1484:  push   %ebx
082fb653 +0x1485:  sub    $0x20,%esp
082fb656 +0x1488:  mov    0x8(%ebp),%esi
082fb659 +0x148b:  cmpl   $0x0,0x10(%ebp)
082fb65d +0x148f:  jne    082fb6a5 <+0x14d7>
082fb65f +0x1491:  mov    0xc(%ebp),%eax
082fb662 +0x1494:  mov    %eax,(%esp)
082fb665 +0x1497:  call   082fb5f6 <+0x1428>
082fb66a +0x149c:  cmp    0x14(%ebp),%eax
082fb66d +0x149f:  je     082fb6a5 <+0x14d7>
082fb66f +0x14a1:  mov    0x14(%ebp),%eax
082fb672 +0x14a4:  mov    %eax,(%esp)
082fb675 +0x14a7:  call   082fb761 <+0x1593>
082fb67a +0x14ac:  mov    %eax,%ebx
082fb67c +0x14ae:  mov    0x18(%ebp),%eax
082fb67f +0x14b1:  mov    %eax,0x4(%esp)
082fb683 +0x14b5:  lea    -0xe(%ebp),%eax
082fb686 +0x14b8:  mov    %eax,(%esp)
082fb689 +0x14bb:  call   082fb602 <+0x1434>
082fb68e +0x14c0:  mov    0xc(%ebp),%edx
082fb691 +0x14c3:  mov    %ebx,0x8(%esp)
082fb695 +0x14c7:  mov    %eax,0x4(%esp)
082fb699 +0x14cb:  mov    %edx,(%esp)
082fb69c +0x14ce:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082fb6a1 +0x14d3:  test   %al,%al
082fb6a3 +0x14d5:  je     082fb6ac <+0x14de>
082fb6a5 +0x14d7:  mov    $0x1,%eax
082fb6aa +0x14dc:  jmp    082fb6b1 <+0x14e3>
082fb6ac +0x14de:  mov    $0x0,%eax
082fb6b1 +0x14e3:  mov    %al,-0xd(%ebp)
082fb6b4 +0x14e6:  mov    0x18(%ebp),%eax
082fb6b7 +0x14e9:  mov    %eax,0x4(%esp)
082fb6bb +0x14ed:  mov    0xc(%ebp),%eax
082fb6be +0x14f0:  mov    %eax,(%esp)
082fb6c1 +0x14f3:  call   082fc202 <+0x2034>
082fb6c6 +0x14f8:  mov    %eax,-0xc(%ebp)
082fb6c9 +0x14fb:  mov    0xc(%ebp),%eax
082fb6cc +0x14fe:  lea    0x4(%eax),%ecx
082fb6cf +0x1501:  mov    -0xc(%ebp),%edx
082fb6d2 +0x1504:  movzbl -0xd(%ebp),%eax
082fb6d6 +0x1508:  mov    %ecx,0xc(%esp)
082fb6da +0x150c:  mov    0x14(%ebp),%ecx
082fb6dd +0x150f:  mov    %ecx,0x8(%esp)
082fb6e1 +0x1513:  mov    %edx,0x4(%esp)
082fb6e5 +0x1517:  mov    %eax,(%esp)
082fb6e8 +0x151a:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
082fb6ed +0x151f:  mov    0xc(%ebp),%eax
082fb6f0 +0x1522:  mov    0x14(%eax),%eax
082fb6f3 +0x1525:  lea    0x1(%eax),%edx
082fb6f6 +0x1528:  mov    0xc(%ebp),%eax
082fb6f9 +0x152b:  mov    %edx,0x14(%eax)
082fb6fc +0x152e:  mov    -0xc(%ebp),%eax
082fb6ff +0x1531:  mov    %eax,0x4(%esp)
082fb703 +0x1535:  mov    %esi,(%esp)
082fb706 +0x1538:  call   082fb62c <+0x145e>
082fb70b +0x153d:  mov    %esi,%eax
082fb70d +0x153f:  add    $0x20,%esp
082fb710 +0x1542:  pop    %ebx
082fb711 +0x1543:  pop    %esi
082fb712 +0x1544:  pop    %ebp
082fb713 +0x1545:  ret    $0x4
082fb716 +0x1548:  push   %ebp
082fb717 +0x1549:  mov    %esp,%ebp
082fb719 +0x154b:  sub    $0x18,%esp
082fb71c +0x154e:  mov    0xc(%ebp),%eax
082fb71f +0x1551:  mov    %eax,(%esp)
082fb722 +0x1554:  call   082fc283 <+0x20b5>
082fb727 +0x1559:  mov    0x8(%ebp),%edx
082fb72a +0x155c:  mov    (%eax),%eax
082fb72c +0x155e:  mov    %eax,(%edx)
082fb72e +0x1560:  mov    0x10(%ebp),%eax
082fb731 +0x1563:  mov    %eax,(%esp)
082fb734 +0x1566:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
082fb739 +0x156b:  movzbl (%eax),%edx
082fb73c +0x156e:  mov    0x8(%ebp),%eax
082fb73f +0x1571:  mov    %dl,0x4(%eax)
082fb742 +0x1574:  leave
082fb743 +0x1575:  ret
082fb744 +0x1576:  push   %ebp
082fb745 +0x1577:  mov    %esp,%ebp
082fb747 +0x1579:  sub    $0x18,%esp
082fb74a +0x157c:  mov    0x8(%ebp),%eax
082fb74d +0x157f:  mov    (%eax),%eax
082fb74f +0x1581:  mov    %eax,(%esp)
082fb752 +0x1584:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
082fb757 +0x1589:  mov    0x8(%ebp),%edx
082fb75a +0x158c:  mov    %eax,(%edx)
082fb75c +0x158e:  mov    0x8(%ebp),%eax
082fb75f +0x1591:  leave
082fb760 +0x1592:  ret
082fb761 +0x1593:  push   %ebp
082fb762 +0x1594:  mov    %esp,%ebp
082fb764 +0x1596:  sub    $0x28,%esp
082fb767 +0x1599:  mov    0x8(%ebp),%eax
082fb76a +0x159c:  mov    %eax,(%esp)
082fb76d +0x159f:  call   082fc28b <+0x20bd>
082fb772 +0x15a4:  mov    %eax,0x4(%esp)
082fb776 +0x15a8:  lea    -0x9(%ebp),%eax
082fb779 +0x15ab:  mov    %eax,(%esp)
082fb77c +0x15ae:  call   082fb602 <+0x1434>
082fb781 +0x15b3:  leave
082fb782 +0x15b4:  ret
082fb783 +0x15b5:  nop
082fb784 +0x15b6:  push   %ebp
082fb785 +0x15b7:  mov    %esp,%ebp
082fb787 +0x15b9:  sub    $0x18,%esp
082fb78a +0x15bc:  mov    0xc(%ebp),%eax
082fb78d +0x15bf:  mov    %eax,(%esp)
082fb790 +0x15c2:  call   082fc296 <+0x20c8>
082fb795 +0x15c7:  mov    0x8(%ebp),%edx
082fb798 +0x15ca:  mov    (%eax),%eax
082fb79a +0x15cc:  mov    %eax,(%edx)
082fb79c +0x15ce:  mov    0x10(%ebp),%eax
082fb79f +0x15d1:  mov    %eax,(%esp)
082fb7a2 +0x15d4:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
082fb7a7 +0x15d9:  movzbl (%eax),%edx
082fb7aa +0x15dc:  mov    0x8(%ebp),%eax
082fb7ad +0x15df:  mov    %dl,0x4(%eax)
082fb7b0 +0x15e2:  leave
082fb7b1 +0x15e3:  ret
082fb7b2 +0x15e4:  push   %ebp
082fb7b3 +0x15e5:  mov    %esp,%ebp
082fb7b5 +0x15e7:  mov    0xc(%ebp),%edx
082fb7b8 +0x15ea:  mov    0x8(%ebp),%eax
082fb7bb +0x15ed:  mov    %edx,(%eax)
082fb7bd +0x15ef:  pop    %ebp
082fb7be +0x15f0:  ret
082fb7bf +0x15f1:  nop
082fb7c0 +0x15f2:  push   %ebp
082fb7c1 +0x15f3:  mov    %esp,%ebp
082fb7c3 +0x15f5:  push   %ebx
082fb7c4 +0x15f6:  sub    $0x44,%esp
082fb7c7 +0x15f9:  mov    0x8(%ebp),%ebx
082fb7ca +0x15fc:  mov    0xc(%ebp),%eax
082fb7cd +0x15ff:  mov    %eax,(%esp)
082fb7d0 +0x1602:  call   08238f6a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe614>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe614
082fb7d5 +0x1607:  mov    %eax,-0x18(%ebp)
082fb7d8 +0x160a:  mov    0xc(%ebp),%eax
082fb7db +0x160d:  mov    %eax,(%esp)
082fb7de +0x1610:  call   082fb5f6 <+0x1428>
082fb7e3 +0x1615:  mov    %eax,-0x14(%ebp)
082fb7e6 +0x1618:  jmp    082fb8fb <+0x172d>
082fb7eb +0x161d:  mov    -0x18(%ebp),%eax
082fb7ee +0x1620:  mov    %eax,(%esp)
082fb7f1 +0x1623:  call   082fb60a <+0x143c>
082fb7f6 +0x1628:  mov    0xc(%ebp),%edx
082fb7f9 +0x162b:  mov    0x10(%ebp),%ecx
082fb7fc +0x162e:  mov    %ecx,0x8(%esp)
082fb800 +0x1632:  mov    %eax,0x4(%esp)
082fb804 +0x1636:  mov    %edx,(%esp)
082fb807 +0x1639:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082fb80c +0x163e:  test   %al,%al
082fb80e +0x1640:  je     082fb823 <+0x1655>
082fb810 +0x1642:  mov    -0x18(%ebp),%eax
082fb813 +0x1645:  mov    %eax,(%esp)
082fb816 +0x1648:  call   0823c42f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x75ad>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x75ad
082fb81b +0x164d:  mov    %eax,-0x18(%ebp)
082fb81e +0x1650:  jmp    082fb8fb <+0x172d>
082fb823 +0x1655:  mov    -0x18(%ebp),%eax
082fb826 +0x1658:  mov    %eax,(%esp)
082fb829 +0x165b:  call   082fb60a <+0x143c>
082fb82e +0x1660:  mov    0xc(%ebp),%edx
082fb831 +0x1663:  mov    %eax,0x8(%esp)
082fb835 +0x1667:  mov    0x10(%ebp),%eax
082fb838 +0x166a:  mov    %eax,0x4(%esp)
082fb83c +0x166e:  mov    %edx,(%esp)
082fb83f +0x1671:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082fb844 +0x1676:  test   %al,%al
082fb846 +0x1678:  je     082fb861 <+0x1693>
082fb848 +0x167a:  mov    -0x18(%ebp),%eax
082fb84b +0x167d:  mov    %eax,-0x14(%ebp)
082fb84e +0x1680:  mov    -0x18(%ebp),%eax
082fb851 +0x1683:  mov    %eax,(%esp)
082fb854 +0x1686:  call   0823c43a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x75b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x75b8
082fb859 +0x168b:  mov    %eax,-0x18(%ebp)
082fb85c +0x168e:  jmp    082fb8fb <+0x172d>
082fb861 +0x1693:  mov    -0x18(%ebp),%eax
082fb864 +0x1696:  mov    %eax,-0x10(%ebp)
082fb867 +0x1699:  mov    -0x14(%ebp),%eax
082fb86a +0x169c:  mov    %eax,-0xc(%ebp)
082fb86d +0x169f:  mov    -0x18(%ebp),%eax
082fb870 +0x16a2:  mov    %eax,-0x14(%ebp)
082fb873 +0x16a5:  mov    -0x18(%ebp),%eax
082fb876 +0x16a8:  mov    %eax,(%esp)
082fb879 +0x16ab:  call   0823c43a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x75b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x75b8
082fb87e +0x16b0:  mov    %eax,-0x18(%ebp)
082fb881 +0x16b3:  mov    -0x10(%ebp),%eax
082fb884 +0x16b6:  mov    %eax,(%esp)
082fb887 +0x16b9:  call   0823c42f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x75ad>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x75ad
082fb88c +0x16be:  mov    %eax,-0x10(%ebp)
082fb88f +0x16c1:  lea    -0x28(%ebp),%eax
082fb892 +0x16c4:  mov    0x10(%ebp),%edx
082fb895 +0x16c7:  mov    %edx,0x10(%esp)
082fb899 +0x16cb:  mov    -0xc(%ebp),%edx
082fb89c +0x16ce:  mov    %edx,0xc(%esp)
082fb8a0 +0x16d2:  mov    -0x10(%ebp),%edx
082fb8a3 +0x16d5:  mov    %edx,0x8(%esp)
082fb8a7 +0x16d9:  mov    0xc(%ebp),%edx
082fb8aa +0x16dc:  mov    %edx,0x4(%esp)
082fb8ae +0x16e0:  mov    %eax,(%esp)
082fb8b1 +0x16e3:  call   082fc31a <+0x214c>
082fb8b6 +0x16e8:  sub    $0x4,%esp
082fb8b9 +0x16eb:  lea    -0x24(%ebp),%eax
082fb8bc +0x16ee:  mov    0x10(%ebp),%edx
082fb8bf +0x16f1:  mov    %edx,0x10(%esp)
082fb8c3 +0x16f5:  mov    -0x14(%ebp),%edx
082fb8c6 +0x16f8:  mov    %edx,0xc(%esp)
082fb8ca +0x16fc:  mov    -0x18(%ebp),%edx
082fb8cd +0x16ff:  mov    %edx,0x8(%esp)
082fb8d1 +0x1703:  mov    0xc(%ebp),%edx
082fb8d4 +0x1706:  mov    %edx,0x4(%esp)
082fb8d8 +0x170a:  mov    %eax,(%esp)
082fb8db +0x170d:  call   082fc29e <+0x20d0>
082fb8e0 +0x1712:  sub    $0x4,%esp
082fb8e3 +0x1715:  lea    -0x28(%ebp),%eax
082fb8e6 +0x1718:  mov    %eax,0x8(%esp)
082fb8ea +0x171c:  lea    -0x24(%ebp),%eax
082fb8ed +0x171f:  mov    %eax,0x4(%esp)
082fb8f1 +0x1723:  mov    %ebx,(%esp)
082fb8f4 +0x1726:  call   082fc394 <+0x21c6>
082fb8f9 +0x172b:  jmp    082fb944 <+0x1776>
082fb8fb +0x172d:  cmpl   $0x0,-0x18(%ebp)
082fb8ff +0x1731:  setne  %al
082fb902 +0x1734:  test   %al,%al
082fb904 +0x1736:  jne    082fb7eb <+0x161d>
082fb90a +0x173c:  mov    -0x14(%ebp),%eax
082fb90d +0x173f:  mov    %eax,0x4(%esp)
082fb911 +0x1743:  lea    -0x20(%ebp),%eax
082fb914 +0x1746:  mov    %eax,(%esp)
082fb917 +0x1749:  call   082fb62c <+0x145e>
082fb91c +0x174e:  mov    -0x14(%ebp),%eax
082fb91f +0x1751:  mov    %eax,0x4(%esp)
082fb923 +0x1755:  lea    -0x1c(%ebp),%eax
082fb926 +0x1758:  mov    %eax,(%esp)
082fb929 +0x175b:  call   082fb62c <+0x145e>
082fb92e +0x1760:  lea    -0x20(%ebp),%eax
082fb931 +0x1763:  mov    %eax,0x8(%esp)
082fb935 +0x1767:  lea    -0x1c(%ebp),%eax
082fb938 +0x176a:  mov    %eax,0x4(%esp)
082fb93c +0x176e:  mov    %ebx,(%esp)
082fb93f +0x1771:  call   082fc394 <+0x21c6>
082fb944 +0x1776:  mov    %ebx,%eax
082fb946 +0x1778:  mov    -0x4(%ebp),%ebx
082fb949 +0x177b:  leave
082fb94a +0x177c:  ret    $0x4
082fb94d +0x177f:  nop
082fb94e +0x1780:  push   %ebp
082fb94f +0x1781:  mov    %esp,%ebp
082fb951 +0x1783:  mov    0x8(%ebp),%eax
082fb954 +0x1786:  mov    0x14(%eax),%eax
082fb957 +0x1789:  pop    %ebp
082fb958 +0x178a:  ret
082fb959 +0x178b:  nop
082fb95a +0x178c:  push   %ebp
082fb95b +0x178d:  mov    %esp,%ebp
082fb95d +0x178f:  sub    $0x28,%esp
082fb960 +0x1792:  lea    -0x14(%ebp),%eax
082fb963 +0x1795:  mov    0x8(%ebp),%edx
082fb966 +0x1798:  mov    %edx,0x4(%esp)
082fb96a +0x179c:  mov    %eax,(%esp)
082fb96d +0x179f:  call   082fb140 <+0xf72>
082fb972 +0x17a4:  sub    $0x4,%esp
082fb975 +0x17a7:  lea    -0x14(%ebp),%eax
082fb978 +0x17aa:  mov    %eax,0x4(%esp)
082fb97c +0x17ae:  lea    0xc(%ebp),%eax
082fb97f +0x17b1:  mov    %eax,(%esp)
082fb982 +0x17b4:  call   082fb63a <+0x146c>
082fb987 +0x17b9:  test   %al,%al
082fb989 +0x17bb:  je     082fb9bd <+0x17ef>
082fb98b +0x17bd:  lea    -0x10(%ebp),%eax
082fb98e +0x17c0:  mov    0x8(%ebp),%edx
082fb991 +0x17c3:  mov    %edx,0x4(%esp)
082fb995 +0x17c7:  mov    %eax,(%esp)
082fb998 +0x17ca:  call   082fb11a <+0xf4c>
082fb99d +0x17cf:  sub    $0x4,%esp
082fb9a0 +0x17d2:  lea    -0x10(%ebp),%eax
082fb9a3 +0x17d5:  mov    %eax,0x4(%esp)
082fb9a7 +0x17d9:  lea    0x10(%ebp),%eax
082fb9aa +0x17dc:  mov    %eax,(%esp)
082fb9ad +0x17df:  call   082fb63a <+0x146c>
082fb9b2 +0x17e4:  test   %al,%al
082fb9b4 +0x17e6:  je     082fb9bd <+0x17ef>
082fb9b6 +0x17e8:  mov    $0x1,%eax
082fb9bb +0x17ed:  jmp    082fb9c2 <+0x17f4>
082fb9bd +0x17ef:  mov    $0x0,%eax
082fb9c2 +0x17f4:  test   %al,%al
082fb9c4 +0x17f6:  je     082fba02 <+0x1834>
082fb9c6 +0x17f8:  mov    0x8(%ebp),%eax
082fb9c9 +0x17fb:  mov    %eax,(%esp)
082fb9cc +0x17fe:  call   082fb166 <+0xf98>
082fb9d1 +0x1803:  jmp    082fba18 <+0x184a>
082fb9d3 +0x1805:  lea    -0xc(%ebp),%eax
082fb9d6 +0x1808:  movl   $0x0,0x8(%esp)
082fb9de +0x1810:  lea    0xc(%ebp),%edx
082fb9e1 +0x1813:  mov    %edx,0x4(%esp)
082fb9e5 +0x1817:  mov    %eax,(%esp)
082fb9e8 +0x181a:  call   082fc3d6 <+0x2208>
082fb9ed +0x181f:  sub    $0x4,%esp
082fb9f0 +0x1822:  mov    -0xc(%ebp),%eax
082fb9f3 +0x1825:  mov    %eax,0x4(%esp)
082fb9f7 +0x1829:  mov    0x8(%ebp),%eax
082fb9fa +0x182c:  mov    %eax,(%esp)
082fb9fd +0x182f:  call   082fc414 <+0x2246>
082fba02 +0x1834:  lea    0x10(%ebp),%eax
082fba05 +0x1837:  mov    %eax,0x4(%esp)
082fba09 +0x183b:  lea    0xc(%ebp),%eax
082fba0c +0x183e:  mov    %eax,(%esp)
082fba0f +0x1841:  call   082fc3c2 <+0x21f4>
082fba14 +0x1846:  test   %al,%al
082fba16 +0x1848:  jne    082fb9d3 <+0x1805>
082fba18 +0x184a:  leave
082fba19 +0x184b:  ret
082fba1a +0x184c:  push   %ebp
082fba1b +0x184d:  mov    %esp,%ebp
082fba1d +0x184f:  sub    $0x18,%esp
082fba20 +0x1852:  mov    0x8(%ebp),%eax
082fba23 +0x1855:  mov    0x18(%eax),%edx
082fba26 +0x1858:  mov    0x8(%ebp),%eax
082fba29 +0x185b:  mov    0x20(%eax),%eax
082fba2c +0x185e:  sub    $0x4,%eax
082fba2f +0x1861:  cmp    %eax,%edx
082fba31 +0x1863:  je     082fba60 <+0x1892>
082fba33 +0x1865:  mov    0x8(%ebp),%eax
082fba36 +0x1868:  mov    0x18(%eax),%edx
082fba39 +0x186b:  mov    0x8(%ebp),%eax
082fba3c +0x186e:  mov    0xc(%ebp),%ecx
082fba3f +0x1871:  mov    %ecx,0x8(%esp)
082fba43 +0x1875:  mov    %edx,0x4(%esp)
082fba47 +0x1879:  mov    %eax,(%esp)
082fba4a +0x187c:  call   082fc456 <+0x2288>
082fba4f +0x1881:  mov    0x8(%ebp),%eax
082fba52 +0x1884:  mov    0x18(%eax),%eax
082fba55 +0x1887:  lea    0x4(%eax),%edx
082fba58 +0x188a:  mov    0x8(%ebp),%eax
082fba5b +0x188d:  mov    %edx,0x18(%eax)
082fba5e +0x1890:  jmp    082fba72 <+0x18a4>
082fba60 +0x1892:  mov    0xc(%ebp),%eax
082fba63 +0x1895:  mov    %eax,0x4(%esp)
082fba67 +0x1899:  mov    0x8(%ebp),%eax
082fba6a +0x189c:  mov    %eax,(%esp)
082fba6d +0x189f:  call   082fc47e <+0x22b0>
082fba72 +0x18a4:  leave
082fba73 +0x18a5:  ret
082fba74 +0x18a6:  push   %ebp
082fba75 +0x18a7:  mov    %esp,%ebp
082fba77 +0x18a9:  push   %ebx
082fba78 +0x18aa:  sub    $0x44,%esp
082fba7b +0x18ad:  mov    0x8(%ebp),%ebx
082fba7e +0x18b0:  mov    0xc(%ebp),%eax
082fba81 +0x18b3:  mov    %eax,(%esp)
082fba84 +0x18b6:  call   080c70d6 <_GLOBAL__I_g_ServerString_+0x641>  ; global constructors keyed to g_ServerString_+0x641
082fba89 +0x18bb:  mov    %eax,-0x18(%ebp)
082fba8c +0x18be:  mov    0xc(%ebp),%eax
082fba8f +0x18c1:  mov    %eax,(%esp)
082fba92 +0x18c4:  call   080c7862 <_GLOBAL__I_g_ServerString_+0xdcd>  ; global constructors keyed to g_ServerString_+0xdcd
082fba97 +0x18c9:  mov    %eax,-0x14(%ebp)
082fba9a +0x18cc:  jmp    082fbbaf <+0x19e1>
082fba9f +0x18d1:  mov    -0x18(%ebp),%eax
082fbaa2 +0x18d4:  mov    %eax,(%esp)
082fbaa5 +0x18d7:  call   080c789a <_GLOBAL__I_g_ServerString_+0xe05>  ; global constructors keyed to g_ServerString_+0xe05
082fbaaa +0x18dc:  mov    0xc(%ebp),%edx
082fbaad +0x18df:  mov    0x10(%ebp),%ecx
082fbab0 +0x18e2:  mov    %ecx,0x8(%esp)
082fbab4 +0x18e6:  mov    %eax,0x4(%esp)
082fbab8 +0x18ea:  mov    %edx,(%esp)
082fbabb +0x18ed:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082fbac0 +0x18f2:  test   %al,%al
082fbac2 +0x18f4:  je     082fbad7 <+0x1909>
082fbac4 +0x18f6:  mov    -0x18(%ebp),%eax
082fbac7 +0x18f9:  mov    %eax,(%esp)
082fbaca +0x18fc:  call   080c7817 <_GLOBAL__I_g_ServerString_+0xd82>  ; global constructors keyed to g_ServerString_+0xd82
082fbacf +0x1901:  mov    %eax,-0x18(%ebp)
082fbad2 +0x1904:  jmp    082fbbaf <+0x19e1>
082fbad7 +0x1909:  mov    -0x18(%ebp),%eax
082fbada +0x190c:  mov    %eax,(%esp)
082fbadd +0x190f:  call   080c789a <_GLOBAL__I_g_ServerString_+0xe05>  ; global constructors keyed to g_ServerString_+0xe05
082fbae2 +0x1914:  mov    0xc(%ebp),%edx
082fbae5 +0x1917:  mov    %eax,0x8(%esp)
082fbae9 +0x191b:  mov    0x10(%ebp),%eax
082fbaec +0x191e:  mov    %eax,0x4(%esp)
082fbaf0 +0x1922:  mov    %edx,(%esp)
082fbaf3 +0x1925:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082fbaf8 +0x192a:  test   %al,%al
082fbafa +0x192c:  je     082fbb15 <+0x1947>
082fbafc +0x192e:  mov    -0x18(%ebp),%eax
082fbaff +0x1931:  mov    %eax,-0x14(%ebp)
082fbb02 +0x1934:  mov    -0x18(%ebp),%eax
082fbb05 +0x1937:  mov    %eax,(%esp)
082fbb08 +0x193a:  call   080c7822 <_GLOBAL__I_g_ServerString_+0xd8d>  ; global constructors keyed to g_ServerString_+0xd8d
082fbb0d +0x193f:  mov    %eax,-0x18(%ebp)
082fbb10 +0x1942:  jmp    082fbbaf <+0x19e1>
082fbb15 +0x1947:  mov    -0x18(%ebp),%eax
082fbb18 +0x194a:  mov    %eax,-0x10(%ebp)
082fbb1b +0x194d:  mov    -0x14(%ebp),%eax
082fbb1e +0x1950:  mov    %eax,-0xc(%ebp)
082fbb21 +0x1953:  mov    -0x18(%ebp),%eax
082fbb24 +0x1956:  mov    %eax,-0x14(%ebp)
082fbb27 +0x1959:  mov    -0x18(%ebp),%eax
082fbb2a +0x195c:  mov    %eax,(%esp)
082fbb2d +0x195f:  call   080c7822 <_GLOBAL__I_g_ServerString_+0xd8d>  ; global constructors keyed to g_ServerString_+0xd8d
082fbb32 +0x1964:  mov    %eax,-0x18(%ebp)
082fbb35 +0x1967:  mov    -0x10(%ebp),%eax
082fbb38 +0x196a:  mov    %eax,(%esp)
082fbb3b +0x196d:  call   080c7817 <_GLOBAL__I_g_ServerString_+0xd82>  ; global constructors keyed to g_ServerString_+0xd82
082fbb40 +0x1972:  mov    %eax,-0x10(%ebp)
082fbb43 +0x1975:  lea    -0x28(%ebp),%eax
082fbb46 +0x1978:  mov    0x10(%ebp),%edx
082fbb49 +0x197b:  mov    %edx,0x10(%esp)
082fbb4d +0x197f:  mov    -0xc(%ebp),%edx
082fbb50 +0x1982:  mov    %edx,0xc(%esp)
082fbb54 +0x1986:  mov    -0x10(%ebp),%edx
082fbb57 +0x1989:  mov    %edx,0x8(%esp)
082fbb5b +0x198d:  mov    0xc(%ebp),%edx
082fbb5e +0x1990:  mov    %edx,0x4(%esp)
082fbb62 +0x1994:  mov    %eax,(%esp)
082fbb65 +0x1997:  call   08154ef6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x482b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x482b
082fbb6a +0x199c:  sub    $0x4,%esp
082fbb6d +0x199f:  lea    -0x24(%ebp),%eax
082fbb70 +0x19a2:  mov    0x10(%ebp),%edx
082fbb73 +0x19a5:  mov    %edx,0x10(%esp)
082fbb77 +0x19a9:  mov    -0x14(%ebp),%edx
082fbb7a +0x19ac:  mov    %edx,0xc(%esp)
082fbb7e +0x19b0:  mov    -0x18(%ebp),%edx
082fbb81 +0x19b3:  mov    %edx,0x8(%esp)
082fbb85 +0x19b7:  mov    0xc(%ebp),%edx
082fbb88 +0x19ba:  mov    %edx,0x4(%esp)
082fbb8c +0x19be:  mov    %eax,(%esp)
082fbb8f +0x19c1:  call   080d11b4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6001>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6001
082fbb94 +0x19c6:  sub    $0x4,%esp
082fbb97 +0x19c9:  lea    -0x28(%ebp),%eax
082fbb9a +0x19cc:  mov    %eax,0x8(%esp)
082fbb9e +0x19d0:  lea    -0x24(%ebp),%eax
082fbba1 +0x19d3:  mov    %eax,0x4(%esp)
082fbba5 +0x19d7:  mov    %ebx,(%esp)
082fbba8 +0x19da:  call   082fc53e <+0x2370>
082fbbad +0x19df:  jmp    082fbbf8 <+0x1a2a>
082fbbaf +0x19e1:  cmpl   $0x0,-0x18(%ebp)
082fbbb3 +0x19e5:  setne  %al
082fbbb6 +0x19e8:  test   %al,%al
082fbbb8 +0x19ea:  jne    082fba9f <+0x18d1>
082fbbbe +0x19f0:  mov    -0x14(%ebp),%eax
082fbbc1 +0x19f3:  mov    %eax,0x4(%esp)
082fbbc5 +0x19f7:  lea    -0x20(%ebp),%eax
082fbbc8 +0x19fa:  mov    %eax,(%esp)
082fbbcb +0x19fd:  call   080c78bc <_GLOBAL__I_g_ServerString_+0xe27>  ; global constructors keyed to g_ServerString_+0xe27
082fbbd0 +0x1a02:  mov    -0x14(%ebp),%eax
082fbbd3 +0x1a05:  mov    %eax,0x4(%esp)
082fbbd7 +0x1a09:  lea    -0x1c(%ebp),%eax
082fbbda +0x1a0c:  mov    %eax,(%esp)
082fbbdd +0x1a0f:  call   080c78bc <_GLOBAL__I_g_ServerString_+0xe27>  ; global constructors keyed to g_ServerString_+0xe27
082fbbe2 +0x1a14:  lea    -0x20(%ebp),%eax
082fbbe5 +0x1a17:  mov    %eax,0x8(%esp)
082fbbe9 +0x1a1b:  lea    -0x1c(%ebp),%eax
082fbbec +0x1a1e:  mov    %eax,0x4(%esp)
082fbbf0 +0x1a22:  mov    %ebx,(%esp)
082fbbf3 +0x1a25:  call   082fc53e <+0x2370>
082fbbf8 +0x1a2a:  mov    %ebx,%eax
082fbbfa +0x1a2c:  mov    -0x4(%ebp),%ebx
082fbbfd +0x1a2f:  leave
082fbbfe +0x1a30:  ret    $0x4
082fbc01 +0x1a33:  nop
082fbc02 +0x1a34:  push   %ebp
082fbc03 +0x1a35:  mov    %esp,%ebp
082fbc05 +0x1a37:  sub    $0x28,%esp
082fbc08 +0x1a3a:  lea    -0x14(%ebp),%eax
082fbc0b +0x1a3d:  mov    0x8(%ebp),%edx
082fbc0e +0x1a40:  mov    %edx,0x4(%esp)
082fbc12 +0x1a44:  mov    %eax,(%esp)
082fbc15 +0x1a47:  call   080c78ca <_GLOBAL__I_g_ServerString_+0xe35>  ; global constructors keyed to g_ServerString_+0xe35
082fbc1a +0x1a4c:  sub    $0x4,%esp
082fbc1d +0x1a4f:  lea    -0x14(%ebp),%eax
082fbc20 +0x1a52:  mov    %eax,0x4(%esp)
082fbc24 +0x1a56:  lea    0xc(%ebp),%eax
082fbc27 +0x1a59:  mov    %eax,(%esp)
082fbc2a +0x1a5c:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
082fbc2f +0x1a61:  test   %al,%al
082fbc31 +0x1a63:  je     082fbc65 <+0x1a97>
082fbc33 +0x1a65:  lea    -0x10(%ebp),%eax
082fbc36 +0x1a68:  mov    0x8(%ebp),%edx
082fbc39 +0x1a6b:  mov    %edx,0x4(%esp)
082fbc3d +0x1a6f:  mov    %eax,(%esp)
082fbc40 +0x1a72:  call   080cedf0 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3c3d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3c3d
082fbc45 +0x1a77:  sub    $0x4,%esp
082fbc48 +0x1a7a:  lea    -0x10(%ebp),%eax
082fbc4b +0x1a7d:  mov    %eax,0x4(%esp)
082fbc4f +0x1a81:  lea    0x10(%ebp),%eax
082fbc52 +0x1a84:  mov    %eax,(%esp)
082fbc55 +0x1a87:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
082fbc5a +0x1a8c:  test   %al,%al
082fbc5c +0x1a8e:  je     082fbc65 <+0x1a97>
082fbc5e +0x1a90:  mov    $0x1,%eax
082fbc63 +0x1a95:  jmp    082fbc6a <+0x1a9c>
082fbc65 +0x1a97:  mov    $0x0,%eax
082fbc6a +0x1a9c:  test   %al,%al
082fbc6c +0x1a9e:  je     082fbcaa <+0x1adc>
082fbc6e +0x1aa0:  mov    0x8(%ebp),%eax
082fbc71 +0x1aa3:  mov    %eax,(%esp)
082fbc74 +0x1aa6:  call   080c70e2 <_GLOBAL__I_g_ServerString_+0x64d>  ; global constructors keyed to g_ServerString_+0x64d
082fbc79 +0x1aab:  jmp    082fbcc0 <+0x1af2>
082fbc7b +0x1aad:  lea    -0xc(%ebp),%eax
082fbc7e +0x1ab0:  movl   $0x0,0x8(%esp)
082fbc86 +0x1ab8:  lea    0xc(%ebp),%edx
082fbc89 +0x1abb:  mov    %edx,0x4(%esp)
082fbc8d +0x1abf:  mov    %eax,(%esp)
082fbc90 +0x1ac2:  call   081b8d04 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x50b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x50b
082fbc95 +0x1ac7:  sub    $0x4,%esp
082fbc98 +0x1aca:  mov    -0xc(%ebp),%eax
082fbc9b +0x1acd:  mov    %eax,0x4(%esp)
082fbc9f +0x1ad1:  mov    0x8(%ebp),%eax
082fbca2 +0x1ad4:  mov    %eax,(%esp)
082fbca5 +0x1ad7:  call   082fc56c <+0x239e>
082fbcaa +0x1adc:  lea    0x10(%ebp),%eax
082fbcad +0x1adf:  mov    %eax,0x4(%esp)
082fbcb1 +0x1ae3:  lea    0xc(%ebp),%eax
082fbcb4 +0x1ae6:  mov    %eax,(%esp)
082fbcb7 +0x1ae9:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
082fbcbc +0x1aee:  test   %al,%al
082fbcbe +0x1af0:  jne    082fbc7b <+0x1aad>
082fbcc0 +0x1af2:  leave
082fbcc1 +0x1af3:  ret
082fbcc2 +0x1af4:  push   %ebp
082fbcc3 +0x1af5:  mov    %esp,%ebp
082fbcc5 +0x1af7:  mov    0x8(%ebp),%eax
082fbcc8 +0x1afa:  add    $0xc,%eax
082fbccb +0x1afd:  pop    %ebp
082fbccc +0x1afe:  ret
082fbccd +0x1aff:  nop
082fbcce +0x1b00:  push   %ebp
082fbccf +0x1b01:  mov    %esp,%ebp
082fbcd1 +0x1b03:  mov    0x8(%ebp),%eax
082fbcd4 +0x1b06:  add    $0x8,%eax
082fbcd7 +0x1b09:  pop    %ebp
082fbcd8 +0x1b0a:  ret
082fbcd9 +0x1b0b:  nop
082fbcda +0x1b0c:  push   %ebp
082fbcdb +0x1b0d:  mov    %esp,%ebp
082fbcdd +0x1b0f:  mov    0x8(%ebp),%eax
082fbce0 +0x1b12:  add    $0x10,%eax
082fbce3 +0x1b15:  pop    %ebp
082fbce4 +0x1b16:  ret
082fbce5 +0x1b17:  nop
082fbce6 +0x1b18:  push   %ebp
082fbce7 +0x1b19:  mov    %esp,%ebp
082fbce9 +0x1b1b:  mov    0x8(%ebp),%eax
082fbcec +0x1b1e:  mov    0x8(%eax),%eax
082fbcef +0x1b21:  pop    %ebp
082fbcf0 +0x1b22:  ret
082fbcf1 +0x1b23:  nop
082fbcf2 +0x1b24:  push   %ebp
082fbcf3 +0x1b25:  mov    %esp,%ebp
082fbcf5 +0x1b27:  mov    0x8(%ebp),%eax
082fbcf8 +0x1b2a:  add    $0x4,%eax
082fbcfb +0x1b2d:  pop    %ebp
082fbcfc +0x1b2e:  ret
082fbcfd +0x1b2f:  nop
082fbcfe +0x1b30:  push   %ebp
082fbcff +0x1b31:  mov    %esp,%ebp
082fbd01 +0x1b33:  push   %ebx
082fbd02 +0x1b34:  sub    $0x14,%esp
082fbd05 +0x1b37:  mov    0x8(%ebp),%ebx
082fbd08 +0x1b3a:  jmp    082fbd56 <+0x1b88>
082fbd0a +0x1b3c:  mov    0x10(%ebp),%eax
082fbd0d +0x1b3f:  mov    %eax,(%esp)
082fbd10 +0x1b42:  call   082fb60a <+0x143c>
082fbd15 +0x1b47:  mov    0xc(%ebp),%edx
082fbd18 +0x1b4a:  mov    0x18(%ebp),%ecx
082fbd1b +0x1b4d:  mov    %ecx,0x8(%esp)
082fbd1f +0x1b51:  mov    %eax,0x4(%esp)
082fbd23 +0x1b55:  mov    %edx,(%esp)
082fbd26 +0x1b58:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082fbd2b +0x1b5d:  xor    $0x1,%eax
082fbd2e +0x1b60:  test   %al,%al
082fbd30 +0x1b62:  je     082fbd48 <+0x1b7a>
082fbd32 +0x1b64:  mov    0x10(%ebp),%eax
082fbd35 +0x1b67:  mov    %eax,0x14(%ebp)
082fbd38 +0x1b6a:  mov    0x10(%ebp),%eax
082fbd3b +0x1b6d:  mov    %eax,(%esp)
082fbd3e +0x1b70:  call   082fc5ad <+0x23df>
082fbd43 +0x1b75:  mov    %eax,0x10(%ebp)
082fbd46 +0x1b78:  jmp    082fbd56 <+0x1b88>
082fbd48 +0x1b7a:  mov    0x10(%ebp),%eax
082fbd4b +0x1b7d:  mov    %eax,(%esp)
082fbd4e +0x1b80:  call   082fc5b8 <+0x23ea>
082fbd53 +0x1b85:  mov    %eax,0x10(%ebp)
082fbd56 +0x1b88:  cmpl   $0x0,0x10(%ebp)
082fbd5a +0x1b8c:  setne  %al
082fbd5d +0x1b8f:  test   %al,%al
082fbd5f +0x1b91:  jne    082fbd0a <+0x1b3c>
082fbd61 +0x1b93:  mov    0x14(%ebp),%eax
082fbd64 +0x1b96:  mov    %eax,0x4(%esp)
082fbd68 +0x1b9a:  mov    %ebx,(%esp)
082fbd6b +0x1b9d:  call   082fb7b2 <+0x15e4>
082fbd70 +0x1ba2:  mov    %ebx,%eax
082fbd72 +0x1ba4:  add    $0x14,%esp
082fbd75 +0x1ba7:  pop    %ebx
082fbd76 +0x1ba8:  pop    %ebp
082fbd77 +0x1ba9:  ret    $0x4
082fbd7a +0x1bac:  push   %ebp
082fbd7b +0x1bad:  mov    %esp,%ebp
082fbd7d +0x1baf:  sub    $0x18,%esp
082fbd80 +0x1bb2:  mov    0x8(%ebp),%eax
082fbd83 +0x1bb5:  mov    %eax,(%esp)
082fbd86 +0x1bb8:  call   082fc5c4 <+0x23f6>
082fbd8b +0x1bbd:  mov    0x8(%ebp),%eax
082fbd8e +0x1bc0:  movl   $0x0,(%eax)
082fbd94 +0x1bc6:  mov    0x8(%ebp),%eax
082fbd97 +0x1bc9:  movl   $0x0,0x4(%eax)
082fbd9e +0x1bd0:  mov    0x8(%ebp),%eax
082fbda1 +0x1bd3:  add    $0x8,%eax
082fbda4 +0x1bd6:  mov    %eax,(%esp)
082fbda7 +0x1bd9:  call   082fc5d8 <+0x240a>
082fbdac +0x1bde:  mov    0x8(%ebp),%eax
082fbdaf +0x1be1:  add    $0x18,%eax
082fbdb2 +0x1be4:  mov    %eax,(%esp)
082fbdb5 +0x1be7:  call   082fc5d8 <+0x240a>
082fbdba +0x1bec:  leave
082fbdbb +0x1bed:  ret
082fbdbc +0x1bee:  push   %ebp
082fbdbd +0x1bef:  mov    %esp,%ebp
082fbdbf +0x1bf1:  sub    $0x18,%esp
082fbdc2 +0x1bf4:  mov    0x8(%ebp),%eax
082fbdc5 +0x1bf7:  mov    %eax,(%esp)
082fbdc8 +0x1bfa:  call   082fc604 <+0x2436>
082fbdcd +0x1bff:  leave
082fbdce +0x1c00:  ret
082fbdcf +0x1c01:  nop
082fbdd0 +0x1c02:  push   %ebp
082fbdd1 +0x1c03:  mov    %esp,%ebp
082fbdd3 +0x1c05:  push   %esi
082fbdd4 +0x1c06:  push   %ebx
082fbdd5 +0x1c07:  sub    $0x40,%esp
082fbdd8 +0x1c0a:  movl   $0x4,(%esp)
082fbddf +0x1c11:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
082fbde4 +0x1c16:  mov    %eax,-0x2c(%ebp)
082fbde7 +0x1c19:  mov    0xc(%ebp),%eax
082fbdea +0x1c1c:  mov    $0x0,%edx
082fbdef +0x1c21:  divl   -0x2c(%ebp)
082fbdf2 +0x1c24:  add    $0x1,%eax
082fbdf5 +0x1c27:  mov    %eax,-0x14(%ebp)
082fbdf8 +0x1c2a:  mov    -0x14(%ebp),%eax
082fbdfb +0x1c2d:  add    $0x2,%eax
082fbdfe +0x1c30:  mov    %eax,-0x1c(%ebp)
082fbe01 +0x1c33:  movl   $0x8,-0x18(%ebp)
082fbe08 +0x1c3a:  lea    -0x1c(%ebp),%eax
082fbe0b +0x1c3d:  mov    %eax,0x4(%esp)
082fbe0f +0x1c41:  lea    -0x18(%ebp),%eax
082fbe12 +0x1c44:  mov    %eax,(%esp)
082fbe15 +0x1c47:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
082fbe1a +0x1c4c:  mov    (%eax),%edx
082fbe1c +0x1c4e:  mov    0x8(%ebp),%eax
082fbe1f +0x1c51:  mov    %edx,0x4(%eax)
082fbe22 +0x1c54:  mov    0x8(%ebp),%eax
082fbe25 +0x1c57:  mov    0x4(%eax),%eax
082fbe28 +0x1c5a:  mov    %eax,0x4(%esp)
082fbe2c +0x1c5e:  mov    0x8(%ebp),%eax
082fbe2f +0x1c61:  mov    %eax,(%esp)
082fbe32 +0x1c64:  call   082fc60a <+0x243c>
082fbe37 +0x1c69:  mov    0x8(%ebp),%edx
082fbe3a +0x1c6c:  mov    %eax,(%edx)
082fbe3c +0x1c6e:  mov    0x8(%ebp),%eax
082fbe3f +0x1c71:  mov    (%eax),%edx
082fbe41 +0x1c73:  mov    0x8(%ebp),%eax
082fbe44 +0x1c76:  mov    0x4(%eax),%eax
082fbe47 +0x1c79:  sub    -0x14(%ebp),%eax
082fbe4a +0x1c7c:  shr    %eax
082fbe4c +0x1c7e:  shl    $0x2,%eax
082fbe4f +0x1c81:  lea    (%edx,%eax,1),%eax
082fbe52 +0x1c84:  mov    %eax,-0x10(%ebp)
082fbe55 +0x1c87:  mov    -0x14(%ebp),%eax
082fbe58 +0x1c8a:  shl    $0x2,%eax
082fbe5b +0x1c8d:  add    -0x10(%ebp),%eax
082fbe5e +0x1c90:  mov    %eax,-0xc(%ebp)
082fbe61 +0x1c93:  mov    -0xc(%ebp),%eax
082fbe64 +0x1c96:  mov    %eax,0x8(%esp)
082fbe68 +0x1c9a:  mov    -0x10(%ebp),%eax
082fbe6b +0x1c9d:  mov    %eax,0x4(%esp)
082fbe6f +0x1ca1:  mov    0x8(%ebp),%eax
082fbe72 +0x1ca4:  mov    %eax,(%esp)
082fbe75 +0x1ca7:  call   082fc676 <+0x24a8>
082fbe7a +0x1cac:  jmp    082fbecf <+0x1d01>
082fbe7c +0x1cae:  mov    %eax,(%esp)
082fbe7f +0x1cb1:  call   08725ce0 <__cxa_begin_catch>
082fbe84 +0x1cb6:  mov    0x8(%ebp),%eax
082fbe87 +0x1cb9:  mov    0x4(%eax),%edx
082fbe8a +0x1cbc:  mov    0x8(%ebp),%eax
082fbe8d +0x1cbf:  mov    (%eax),%eax
082fbe8f +0x1cc1:  mov    %edx,0x8(%esp)
082fbe93 +0x1cc5:  mov    %eax,0x4(%esp)
082fbe97 +0x1cc9:  mov    0x8(%ebp),%eax
082fbe9a +0x1ccc:  mov    %eax,(%esp)
082fbe9d +0x1ccf:  call   082fbf76 <+0x1da8>
082fbea2 +0x1cd4:  mov    0x8(%ebp),%eax
082fbea5 +0x1cd7:  movl   $0x0,(%eax)
082fbeab +0x1cdd:  mov    0x8(%ebp),%eax
082fbeae +0x1ce0:  movl   $0x0,0x4(%eax)
082fbeb5 +0x1ce7:  call   08724be0 <__cxa_rethrow>
082fbeba +0x1cec:  mov    %edx,%ebx
082fbebc +0x1cee:  mov    %eax,%esi
082fbebe +0x1cf0:  call   08725c30 <__cxa_end_catch>
082fbec3 +0x1cf5:  mov    %esi,%eax
082fbec5 +0x1cf7:  mov    %ebx,%edx
082fbec7 +0x1cf9:  mov    %eax,(%esp)
082fbeca +0x1cfc:  call   08ae3750 <_Unwind_Resume>
082fbecf +0x1d01:  mov    0x8(%ebp),%eax
082fbed2 +0x1d04:  lea    0x8(%eax),%edx
082fbed5 +0x1d07:  mov    -0x10(%ebp),%eax
082fbed8 +0x1d0a:  mov    %eax,0x4(%esp)
082fbedc +0x1d0e:  mov    %edx,(%esp)
082fbedf +0x1d11:  call   082fc6ec <+0x251e>
082fbee4 +0x1d16:  mov    -0xc(%ebp),%eax
082fbee7 +0x1d19:  lea    -0x4(%eax),%edx
082fbeea +0x1d1c:  mov    0x8(%ebp),%eax
082fbeed +0x1d1f:  add    $0x18,%eax
082fbef0 +0x1d22:  mov    %edx,0x4(%esp)
082fbef4 +0x1d26:  mov    %eax,(%esp)
082fbef7 +0x1d29:  call   082fc6ec <+0x251e>
082fbefc +0x1d2e:  mov    0x8(%ebp),%eax
082fbeff +0x1d31:  mov    0xc(%eax),%edx
082fbf02 +0x1d34:  mov    0x8(%ebp),%eax
082fbf05 +0x1d37:  mov    %edx,0x8(%eax)
082fbf08 +0x1d3a:  mov    0x8(%ebp),%eax
082fbf0b +0x1d3d:  mov    0x1c(%eax),%ebx
082fbf0e +0x1d40:  movl   $0x4,(%esp)
082fbf15 +0x1d47:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
082fbf1a +0x1d4c:  mov    %eax,-0x2c(%ebp)
082fbf1d +0x1d4f:  mov    0xc(%ebp),%eax
082fbf20 +0x1d52:  mov    $0x0,%edx
082fbf25 +0x1d57:  divl   -0x2c(%ebp)
082fbf28 +0x1d5a:  mov    %edx,%ecx
082fbf2a +0x1d5c:  mov    %ecx,%eax
082fbf2c +0x1d5e:  shl    $0x2,%eax
082fbf2f +0x1d61:  lea    (%ebx,%eax,1),%edx
082fbf32 +0x1d64:  mov    0x8(%ebp),%eax
082fbf35 +0x1d67:  mov    %edx,0x18(%eax)
082fbf38 +0x1d6a:  add    $0x40,%esp
082fbf3b +0x1d6d:  pop    %ebx
082fbf3c +0x1d6e:  pop    %esi
082fbf3d +0x1d6f:  pop    %ebp
082fbf3e +0x1d70:  ret
082fbf3f +0x1d71:  nop
082fbf40 +0x1d72:  push   %ebp
082fbf41 +0x1d73:  mov    %esp,%ebp
082fbf43 +0x1d75:  sub    $0x28,%esp
082fbf46 +0x1d78:  mov    0xc(%ebp),%eax
082fbf49 +0x1d7b:  mov    %eax,-0xc(%ebp)
082fbf4c +0x1d7e:  jmp    082fbf66 <+0x1d98>
082fbf4e +0x1d80:  mov    -0xc(%ebp),%eax
082fbf51 +0x1d83:  mov    (%eax),%eax
082fbf53 +0x1d85:  mov    %eax,0x4(%esp)
082fbf57 +0x1d89:  mov    0x8(%ebp),%eax
082fbf5a +0x1d8c:  mov    %eax,(%esp)
082fbf5d +0x1d8f:  call   082fc724 <+0x2556>
082fbf62 +0x1d94:  addl   $0x4,-0xc(%ebp)
082fbf66 +0x1d98:  mov    -0xc(%ebp),%eax
082fbf69 +0x1d9b:  cmp    0x10(%ebp),%eax
082fbf6c +0x1d9e:  setb   %al
082fbf6f +0x1da1:  test   %al,%al
082fbf71 +0x1da3:  jne    082fbf4e <+0x1d80>
082fbf73 +0x1da5:  leave
082fbf74 +0x1da6:  ret
082fbf75 +0x1da7:  nop
082fbf76 +0x1da8:  push   %ebp
082fbf77 +0x1da9:  mov    %esp,%ebp
082fbf79 +0x1dab:  sub    $0x28,%esp
082fbf7c +0x1dae:  lea    -0x9(%ebp),%eax
082fbf7f +0x1db1:  mov    0x8(%ebp),%edx
082fbf82 +0x1db4:  mov    %edx,0x4(%esp)
082fbf86 +0x1db8:  mov    %eax,(%esp)
082fbf89 +0x1dbb:  call   082fc74e <+0x2580>
082fbf8e +0x1dc0:  sub    $0x4,%esp
082fbf91 +0x1dc3:  lea    -0x9(%ebp),%eax
082fbf94 +0x1dc6:  mov    0x10(%ebp),%edx
082fbf97 +0x1dc9:  mov    %edx,0x8(%esp)
082fbf9b +0x1dcd:  mov    0xc(%ebp),%edx
082fbf9e +0x1dd0:  mov    %edx,0x4(%esp)
082fbfa2 +0x1dd4:  mov    %eax,(%esp)
082fbfa5 +0x1dd7:  call   082fc794 <+0x25c6>
082fbfaa +0x1ddc:  lea    -0x9(%ebp),%eax
082fbfad +0x1ddf:  mov    %eax,(%esp)
082fbfb0 +0x1de2:  call   082fc780 <+0x25b2>
082fbfb5 +0x1de7:  leave
082fbfb6 +0x1de8:  ret
082fbfb7 +0x1de9:  push   %ebp
082fbfb8 +0x1dea:  mov    %esp,%ebp
082fbfba +0x1dec:  mov    0x8(%ebp),%eax
082fbfbd +0x1def:  pop    %ebp
082fbfbe +0x1df0:  ret
082fbfbf +0x1df1:  nop
082fbfc0 +0x1df2:  push   %ebp
082fbfc1 +0x1df3:  mov    %esp,%ebp
082fbfc3 +0x1df5:  push   %esi
082fbfc4 +0x1df6:  push   %ebx
082fbfc5 +0x1df7:  sub    $0x10,%esp
082fbfc8 +0x1dfa:  mov    0xc(%ebp),%eax
082fbfcb +0x1dfd:  mov    %eax,(%esp)
082fbfce +0x1e00:  call   082fb3cc <+0x11fe>
082fbfd3 +0x1e05:  mov    0x8(%ebp),%edx
082fbfd6 +0x1e08:  mov    %eax,0x4(%esp)
082fbfda +0x1e0c:  mov    %edx,(%esp)
082fbfdd +0x1e0f:  call   082fc7a8 <+0x25da>
082fbfe2 +0x1e14:  movl   $0x0,0x4(%esp)
082fbfea +0x1e1c:  mov    0x8(%ebp),%eax
082fbfed +0x1e1f:  mov    %eax,(%esp)
082fbff0 +0x1e22:  call   082fbdd0 <+0x1c02>
082fbff5 +0x1e27:  mov    0xc(%ebp),%eax
082fbff8 +0x1e2a:  mov    (%eax),%eax
082fbffa +0x1e2c:  test   %eax,%eax
082fbffc +0x1e2e:  je     082fc075 <+0x1ea7>
082fbffe +0x1e30:  mov    0xc(%ebp),%eax
082fc001 +0x1e33:  lea    0x8(%eax),%edx
082fc004 +0x1e36:  mov    0x8(%ebp),%eax
082fc007 +0x1e39:  add    $0x8,%eax
082fc00a +0x1e3c:  mov    %edx,0x4(%esp)
082fc00e +0x1e40:  mov    %eax,(%esp)
082fc011 +0x1e43:  call   082fc7f1 <+0x2623>
082fc016 +0x1e48:  mov    0xc(%ebp),%eax
082fc019 +0x1e4b:  lea    0x18(%eax),%edx
082fc01c +0x1e4e:  mov    0x8(%ebp),%eax
082fc01f +0x1e51:  add    $0x18,%eax
082fc022 +0x1e54:  mov    %edx,0x4(%esp)
082fc026 +0x1e58:  mov    %eax,(%esp)
082fc029 +0x1e5b:  call   082fc7f1 <+0x2623>
082fc02e +0x1e60:  mov    0xc(%ebp),%edx
082fc031 +0x1e63:  mov    0x8(%ebp),%eax
082fc034 +0x1e66:  mov    %edx,0x4(%esp)
082fc038 +0x1e6a:  mov    %eax,(%esp)
082fc03b +0x1e6d:  call   082fc85b <+0x268d>
082fc040 +0x1e72:  mov    0xc(%ebp),%eax
082fc043 +0x1e75:  lea    0x4(%eax),%edx
082fc046 +0x1e78:  mov    0x8(%ebp),%eax
082fc049 +0x1e7b:  add    $0x4,%eax
082fc04c +0x1e7e:  mov    %edx,0x4(%esp)
082fc050 +0x1e82:  mov    %eax,(%esp)
082fc053 +0x1e85:  call   081026b9 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x16db>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x16db
082fc058 +0x1e8a:  jmp    082fc075 <+0x1ea7>
082fc05a +0x1e8c:  mov    %edx,%ebx
082fc05c +0x1e8e:  mov    %eax,%esi
082fc05e +0x1e90:  mov    0x8(%ebp),%eax
082fc061 +0x1e93:  mov    %eax,(%esp)
082fc064 +0x1e96:  call   082fb29a <+0x10cc>
082fc069 +0x1e9b:  mov    %esi,%eax
082fc06b +0x1e9d:  mov    %ebx,%edx
082fc06d +0x1e9f:  mov    %eax,(%esp)
082fc070 +0x1ea2:  call   08ae3750 <_Unwind_Resume>
082fc075 +0x1ea7:  add    $0x10,%esp
082fc078 +0x1eaa:  pop    %ebx
082fc079 +0x1eab:  pop    %esi
082fc07a +0x1eac:  pop    %ebp
082fc07b +0x1ead:  ret
082fc07c +0x1eae:  push   %ebp
082fc07d +0x1eaf:  mov    %esp,%ebp
082fc07f +0x1eb1:  sub    $0x18,%esp
082fc082 +0x1eb4:  mov    0x8(%ebp),%eax
082fc085 +0x1eb7:  mov    %eax,(%esp)
082fc088 +0x1eba:  call   082fc898 <+0x26ca>
082fc08d +0x1ebf:  mov    0x8(%ebp),%eax
082fc090 +0x1ec2:  movl   $0x0,(%eax)
082fc096 +0x1ec8:  mov    0x8(%ebp),%eax
082fc099 +0x1ecb:  movl   $0x0,0x4(%eax)
082fc0a0 +0x1ed2:  leave
082fc0a1 +0x1ed3:  ret
082fc0a2 +0x1ed4:  push   %ebp
082fc0a3 +0x1ed5:  mov    %esp,%ebp
082fc0a5 +0x1ed7:  pop    %ebp
082fc0a6 +0x1ed8:  ret
082fc0a7 +0x1ed9:  nop
082fc0a8 +0x1eda:  push   %ebp
082fc0a9 +0x1edb:  mov    %esp,%ebp
082fc0ab +0x1edd:  mov    0x8(%ebp),%eax
082fc0ae +0x1ee0:  pop    %ebp
082fc0af +0x1ee1:  ret
082fc0b0 +0x1ee2:  push   %ebp
082fc0b1 +0x1ee3:  mov    %esp,%ebp
082fc0b3 +0x1ee5:  pop    %ebp
082fc0b4 +0x1ee6:  ret
082fc0b5 +0x1ee7:  nop
082fc0b6 +0x1ee8:  push   %ebp
082fc0b7 +0x1ee9:  mov    %esp,%ebp
082fc0b9 +0x1eeb:  sub    $0x18,%esp
082fc0bc +0x1eee:  mov    0xc(%ebp),%eax
082fc0bf +0x1ef1:  mov    %eax,(%esp)
082fc0c2 +0x1ef4:  call   082fc0b0 <+0x1ee2>
082fc0c7 +0x1ef9:  leave
082fc0c8 +0x1efa:  ret
082fc0c9 +0x1efb:  nop
082fc0ca +0x1efc:  push   %ebp
082fc0cb +0x1efd:  mov    %esp,%ebp
082fc0cd +0x1eff:  sub    $0x18,%esp
082fc0d0 +0x1f02:  mov    0x8(%ebp),%eax
082fc0d3 +0x1f05:  movl   $0x1,0x8(%esp)
082fc0db +0x1f0d:  mov    0xc(%ebp),%edx
082fc0de +0x1f10:  mov    %edx,0x4(%esp)
082fc0e2 +0x1f14:  mov    %eax,(%esp)
082fc0e5 +0x1f17:  call   082fc8ac <+0x26de>
082fc0ea +0x1f1c:  leave
082fc0eb +0x1f1d:  ret
082fc0ec +0x1f1e:  push   %ebp
082fc0ed +0x1f1f:  mov    %esp,%ebp
082fc0ef +0x1f21:  push   %ebx
082fc0f0 +0x1f22:  sub    $0x14,%esp
082fc0f3 +0x1f25:  mov    0x8(%ebp),%ebx
082fc0f6 +0x1f28:  mov    0xc(%ebp),%eax
082fc0f9 +0x1f2b:  mov    %eax,0x4(%esp)
082fc0fd +0x1f2f:  mov    %ebx,(%esp)
082fc100 +0x1f32:  call   082fc8c0 <+0x26f2>
082fc105 +0x1f37:  mov    %ebx,%eax
082fc107 +0x1f39:  add    $0x14,%esp
082fc10a +0x1f3c:  pop    %ebx
082fc10b +0x1f3d:  pop    %ebp
082fc10c +0x1f3e:  ret    $0x4
082fc10f +0x1f41:  nop
082fc110 +0x1f42:  push   %ebp
082fc111 +0x1f43:  mov    %esp,%ebp
082fc113 +0x1f45:  sub    $0x28,%esp
082fc116 +0x1f48:  mov    0x10(%ebp),%eax
082fc119 +0x1f4b:  mov    %eax,(%esp)
082fc11c +0x1f4e:  call   082fc8cd <+0x26ff>
082fc121 +0x1f53:  mov    %eax,0x4(%esp)
082fc125 +0x1f57:  mov    0x8(%ebp),%eax
082fc128 +0x1f5a:  mov    %eax,(%esp)
082fc12b +0x1f5d:  call   082fc8d6 <+0x2708>
082fc130 +0x1f62:  mov    %eax,-0xc(%ebp)
082fc133 +0x1f65:  mov    0xc(%ebp),%edx
082fc136 +0x1f68:  mov    -0xc(%ebp),%eax
082fc139 +0x1f6b:  mov    %edx,0x4(%esp)
082fc13d +0x1f6f:  mov    %eax,(%esp)
082fc140 +0x1f72:  call   086dad20 <_ZNSt15_List_node_base4hookEPS_>  ; std::_List_node_base::hook(std::_List_node_base*)
082fc145 +0x1f77:  leave
082fc146 +0x1f78:  ret
082fc147 +0x1f79:  push   %ebp
082fc148 +0x1f7a:  mov    %esp,%ebp
082fc14a +0x1f7c:  mov    0x8(%ebp),%eax
082fc14d +0x1f7f:  pop    %ebp
082fc14e +0x1f80:  ret
082fc14f +0x1f81:  nop
082fc150 +0x1f82:  push   %ebp
082fc151 +0x1f83:  mov    %esp,%ebp
082fc153 +0x1f85:  sub    $0x28,%esp
082fc156 +0x1f88:  mov    0xc(%ebp),%eax
082fc159 +0x1f8b:  mov    %eax,(%esp)
082fc15c +0x1f8e:  call   082fc147 <+0x1f79>
082fc161 +0x1f93:  mov    (%eax),%eax
082fc163 +0x1f95:  mov    %eax,-0xc(%ebp)
082fc166 +0x1f98:  lea    -0xc(%ebp),%eax
082fc169 +0x1f9b:  mov    %eax,0x4(%esp)
082fc16d +0x1f9f:  mov    0x8(%ebp),%eax
082fc170 +0x1fa2:  mov    %eax,(%esp)
082fc173 +0x1fa5:  call   082fc958 <+0x278a>
082fc178 +0x1faa:  leave
082fc179 +0x1fab:  ret
082fc17a +0x1fac:  push   %ebp
082fc17b +0x1fad:  mov    %esp,%ebp
082fc17d +0x1faf:  mov    0x8(%ebp),%eax
082fc180 +0x1fb2:  mov    (%eax),%edx
082fc182 +0x1fb4:  mov    0xc(%ebp),%eax
082fc185 +0x1fb7:  mov    (%eax),%eax
082fc187 +0x1fb9:  cmp    %eax,%edx
082fc189 +0x1fbb:  sete   %al
082fc18c +0x1fbe:  pop    %ebp
082fc18d +0x1fbf:  ret
082fc18e +0x1fc0:  push   %ebp
082fc18f +0x1fc1:  mov    %esp,%ebp
082fc191 +0x1fc3:  mov    0x8(%ebp),%eax
082fc194 +0x1fc6:  mov    (%eax),%eax
082fc196 +0x1fc8:  pop    %ebp
082fc197 +0x1fc9:  ret
082fc198 +0x1fca:  push   %ebp
082fc199 +0x1fcb:  mov    %esp,%ebp
082fc19b +0x1fcd:  pop    %ebp
082fc19c +0x1fce:  ret
082fc19d +0x1fcf:  nop
082fc19e +0x1fd0:  push   %ebp
082fc19f +0x1fd1:  mov    %esp,%ebp
082fc1a1 +0x1fd3:  sub    $0x18,%esp
082fc1a4 +0x1fd6:  mov    0x8(%ebp),%eax
082fc1a7 +0x1fd9:  mov    0x8(%eax),%edx
082fc1aa +0x1fdc:  mov    0x8(%ebp),%eax
082fc1ad +0x1fdf:  mov    %edx,0x4(%esp)
082fc1b1 +0x1fe3:  mov    %eax,(%esp)
082fc1b4 +0x1fe6:  call   082fc198 <+0x1fca>
082fc1b9 +0x1feb:  mov    0x8(%ebp),%eax
082fc1bc +0x1fee:  mov    0xc(%eax),%edx
082fc1bf +0x1ff1:  mov    0x8(%ebp),%eax
082fc1c2 +0x1ff4:  mov    %edx,0x4(%esp)
082fc1c6 +0x1ff8:  mov    %eax,(%esp)
082fc1c9 +0x1ffb:  call   082fc724 <+0x2556>
082fc1ce +0x2000:  mov    0x8(%ebp),%eax
082fc1d1 +0x2003:  mov    0x14(%eax),%eax
082fc1d4 +0x2006:  lea    0x4(%eax),%edx
082fc1d7 +0x2009:  mov    0x8(%ebp),%eax
082fc1da +0x200c:  add    $0x8,%eax
082fc1dd +0x200f:  mov    %edx,0x4(%esp)
082fc1e1 +0x2013:  mov    %eax,(%esp)
082fc1e4 +0x2016:  call   082fc6ec <+0x251e>
082fc1e9 +0x201b:  mov    0x8(%ebp),%eax
082fc1ec +0x201e:  mov    0xc(%eax),%edx
082fc1ef +0x2021:  mov    0x8(%ebp),%eax
082fc1f2 +0x2024:  mov    %edx,0x8(%eax)
082fc1f5 +0x2027:  leave
082fc1f6 +0x2028:  ret
082fc1f7 +0x2029:  push   %ebp
082fc1f8 +0x202a:  mov    %esp,%ebp
082fc1fa +0x202c:  mov    0x8(%ebp),%eax
082fc1fd +0x202f:  add    $0x10,%eax
082fc200 +0x2032:  pop    %ebp
082fc201 +0x2033:  ret
082fc202 +0x2034:  push   %ebp
082fc203 +0x2035:  mov    %esp,%ebp
082fc205 +0x2037:  push   %esi
082fc206 +0x2038:  push   %ebx
082fc207 +0x2039:  sub    $0x20,%esp
082fc20a +0x203c:  mov    0x8(%ebp),%eax
082fc20d +0x203f:  mov    %eax,(%esp)
082fc210 +0x2042:  call   082fc9d2 <+0x2804>
082fc215 +0x2047:  mov    %eax,-0xc(%ebp)
082fc218 +0x204a:  mov    0xc(%ebp),%eax
082fc21b +0x204d:  mov    %eax,(%esp)
082fc21e +0x2050:  call   082fc9f5 <+0x2827>
082fc223 +0x2055:  mov    %eax,%ebx
082fc225 +0x2057:  mov    0x8(%ebp),%eax
082fc228 +0x205a:  mov    %eax,(%esp)
082fc22b +0x205d:  call   0823e524 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x96a2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x96a2
082fc230 +0x2062:  mov    %ebx,0x8(%esp)
082fc234 +0x2066:  mov    -0xc(%ebp),%edx
082fc237 +0x2069:  mov    %edx,0x4(%esp)
082fc23b +0x206d:  mov    %eax,(%esp)
082fc23e +0x2070:  call   082fc9fe <+0x2830>
082fc243 +0x2075:  jmp    082fc279 <+0x20ab>
082fc245 +0x2077:  mov    %eax,(%esp)
082fc248 +0x207a:  call   08725ce0 <__cxa_begin_catch>
082fc24d +0x207f:  mov    -0xc(%ebp),%eax
082fc250 +0x2082:  mov    %eax,0x4(%esp)
082fc254 +0x2086:  mov    0x8(%ebp),%eax
082fc257 +0x2089:  mov    %eax,(%esp)
082fc25a +0x208c:  call   0823e546 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x96c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x96c4
082fc25f +0x2091:  call   08724be0 <__cxa_rethrow>
082fc264 +0x2096:  mov    %edx,%ebx
082fc266 +0x2098:  mov    %eax,%esi
082fc268 +0x209a:  call   08725c30 <__cxa_end_catch>
082fc26d +0x209f:  mov    %esi,%eax
082fc26f +0x20a1:  mov    %ebx,%edx
082fc271 +0x20a3:  mov    %eax,(%esp)
082fc274 +0x20a6:  call   08ae3750 <_Unwind_Resume>
082fc279 +0x20ab:  mov    -0xc(%ebp),%eax
082fc27c +0x20ae:  add    $0x20,%esp
082fc27f +0x20b1:  pop    %ebx
082fc280 +0x20b2:  pop    %esi
082fc281 +0x20b3:  pop    %ebp
082fc282 +0x20b4:  ret
082fc283 +0x20b5:  push   %ebp
082fc284 +0x20b6:  mov    %esp,%ebp
082fc286 +0x20b8:  mov    0x8(%ebp),%eax
082fc289 +0x20bb:  pop    %ebp
082fc28a +0x20bc:  ret
082fc28b +0x20bd:  push   %ebp
082fc28c +0x20be:  mov    %esp,%ebp
082fc28e +0x20c0:  mov    0x8(%ebp),%eax
082fc291 +0x20c3:  add    $0x10,%eax
082fc294 +0x20c6:  pop    %ebp
082fc295 +0x20c7:  ret
082fc296 +0x20c8:  push   %ebp
082fc297 +0x20c9:  mov    %esp,%ebp
082fc299 +0x20cb:  mov    0x8(%ebp),%eax
082fc29c +0x20ce:  pop    %ebp
082fc29d +0x20cf:  ret
082fc29e +0x20d0:  push   %ebp
082fc29f +0x20d1:  mov    %esp,%ebp
082fc2a1 +0x20d3:  push   %ebx
082fc2a2 +0x20d4:  sub    $0x14,%esp
082fc2a5 +0x20d7:  mov    0x8(%ebp),%ebx
082fc2a8 +0x20da:  jmp    082fc2f6 <+0x2128>
082fc2aa +0x20dc:  mov    0x10(%ebp),%eax
082fc2ad +0x20df:  mov    %eax,(%esp)
082fc2b0 +0x20e2:  call   082fb60a <+0x143c>
082fc2b5 +0x20e7:  mov    0xc(%ebp),%edx
082fc2b8 +0x20ea:  mov    0x18(%ebp),%ecx
082fc2bb +0x20ed:  mov    %ecx,0x8(%esp)
082fc2bf +0x20f1:  mov    %eax,0x4(%esp)
082fc2c3 +0x20f5:  mov    %edx,(%esp)
082fc2c6 +0x20f8:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082fc2cb +0x20fd:  xor    $0x1,%eax
082fc2ce +0x2100:  test   %al,%al
082fc2d0 +0x2102:  je     082fc2e8 <+0x211a>
082fc2d2 +0x2104:  mov    0x10(%ebp),%eax
082fc2d5 +0x2107:  mov    %eax,0x14(%ebp)
082fc2d8 +0x210a:  mov    0x10(%ebp),%eax
082fc2db +0x210d:  mov    %eax,(%esp)
082fc2de +0x2110:  call   0823c43a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x75b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x75b8
082fc2e3 +0x2115:  mov    %eax,0x10(%ebp)
082fc2e6 +0x2118:  jmp    082fc2f6 <+0x2128>
082fc2e8 +0x211a:  mov    0x10(%ebp),%eax
082fc2eb +0x211d:  mov    %eax,(%esp)
082fc2ee +0x2120:  call   0823c42f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x75ad>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x75ad
082fc2f3 +0x2125:  mov    %eax,0x10(%ebp)
082fc2f6 +0x2128:  cmpl   $0x0,0x10(%ebp)
082fc2fa +0x212c:  setne  %al
082fc2fd +0x212f:  test   %al,%al
082fc2ff +0x2131:  jne    082fc2aa <+0x20dc>
082fc301 +0x2133:  mov    0x14(%ebp),%eax
082fc304 +0x2136:  mov    %eax,0x4(%esp)
082fc308 +0x213a:  mov    %ebx,(%esp)
082fc30b +0x213d:  call   082fb62c <+0x145e>
082fc310 +0x2142:  mov    %ebx,%eax
082fc312 +0x2144:  add    $0x14,%esp
082fc315 +0x2147:  pop    %ebx
082fc316 +0x2148:  pop    %ebp
082fc317 +0x2149:  ret    $0x4
082fc31a +0x214c:  push   %ebp
082fc31b +0x214d:  mov    %esp,%ebp
082fc31d +0x214f:  push   %ebx
082fc31e +0x2150:  sub    $0x14,%esp
082fc321 +0x2153:  mov    0x8(%ebp),%ebx
082fc324 +0x2156:  jmp    082fc36f <+0x21a1>
082fc326 +0x2158:  mov    0x10(%ebp),%eax
082fc329 +0x215b:  mov    %eax,(%esp)
082fc32c +0x215e:  call   082fb60a <+0x143c>
082fc331 +0x2163:  mov    0xc(%ebp),%edx
082fc334 +0x2166:  mov    %eax,0x8(%esp)
082fc338 +0x216a:  mov    0x18(%ebp),%eax
082fc33b +0x216d:  mov    %eax,0x4(%esp)
082fc33f +0x2171:  mov    %edx,(%esp)
082fc342 +0x2174:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082fc347 +0x2179:  test   %al,%al
082fc349 +0x217b:  je     082fc361 <+0x2193>
082fc34b +0x217d:  mov    0x10(%ebp),%eax
082fc34e +0x2180:  mov    %eax,0x14(%ebp)
082fc351 +0x2183:  mov    0x10(%ebp),%eax
082fc354 +0x2186:  mov    %eax,(%esp)
082fc357 +0x2189:  call   0823c43a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x75b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x75b8
082fc35c +0x218e:  mov    %eax,0x10(%ebp)
082fc35f +0x2191:  jmp    082fc36f <+0x21a1>
082fc361 +0x2193:  mov    0x10(%ebp),%eax
082fc364 +0x2196:  mov    %eax,(%esp)
082fc367 +0x2199:  call   0823c42f <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x75ad>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x75ad
082fc36c +0x219e:  mov    %eax,0x10(%ebp)
082fc36f +0x21a1:  cmpl   $0x0,0x10(%ebp)
082fc373 +0x21a5:  setne  %al
082fc376 +0x21a8:  test   %al,%al
082fc378 +0x21aa:  jne    082fc326 <+0x2158>
082fc37a +0x21ac:  mov    0x14(%ebp),%eax
082fc37d +0x21af:  mov    %eax,0x4(%esp)
082fc381 +0x21b3:  mov    %ebx,(%esp)
082fc384 +0x21b6:  call   082fb62c <+0x145e>
082fc389 +0x21bb:  mov    %ebx,%eax
082fc38b +0x21bd:  add    $0x14,%esp
082fc38e +0x21c0:  pop    %ebx
082fc38f +0x21c1:  pop    %ebp
082fc390 +0x21c2:  ret    $0x4
082fc393 +0x21c5:  nop
082fc394 +0x21c6:  push   %ebp
082fc395 +0x21c7:  mov    %esp,%ebp
082fc397 +0x21c9:  sub    $0x18,%esp
082fc39a +0x21cc:  mov    0xc(%ebp),%eax
082fc39d +0x21cf:  mov    %eax,(%esp)
082fc3a0 +0x21d2:  call   082fc283 <+0x20b5>
082fc3a5 +0x21d7:  mov    0x8(%ebp),%edx
082fc3a8 +0x21da:  mov    (%eax),%eax
082fc3aa +0x21dc:  mov    %eax,(%edx)
082fc3ac +0x21de:  mov    0x10(%ebp),%eax
082fc3af +0x21e1:  mov    %eax,(%esp)
082fc3b2 +0x21e4:  call   082fc283 <+0x20b5>
082fc3b7 +0x21e9:  mov    0x8(%ebp),%edx
082fc3ba +0x21ec:  mov    (%eax),%eax
082fc3bc +0x21ee:  mov    %eax,0x4(%edx)
082fc3bf +0x21f1:  leave
082fc3c0 +0x21f2:  ret
082fc3c1 +0x21f3:  nop
082fc3c2 +0x21f4:  push   %ebp
082fc3c3 +0x21f5:  mov    %esp,%ebp
082fc3c5 +0x21f7:  mov    0x8(%ebp),%eax
082fc3c8 +0x21fa:  mov    (%eax),%edx
082fc3ca +0x21fc:  mov    0xc(%ebp),%eax
082fc3cd +0x21ff:  mov    (%eax),%eax
082fc3cf +0x2201:  cmp    %eax,%edx
082fc3d1 +0x2203:  setne  %al
082fc3d4 +0x2206:  pop    %ebp
082fc3d5 +0x2207:  ret
082fc3d6 +0x2208:  push   %ebp
082fc3d7 +0x2209:  mov    %esp,%ebp
082fc3d9 +0x220b:  push   %ebx
082fc3da +0x220c:  sub    $0x14,%esp
082fc3dd +0x220f:  mov    0x8(%ebp),%ebx
082fc3e0 +0x2212:  mov    0xc(%ebp),%eax
082fc3e3 +0x2215:  movl   $0x4,0x8(%esp)
082fc3eb +0x221d:  mov    %eax,0x4(%esp)
082fc3ef +0x2221:  mov    %ebx,(%esp)
082fc3f2 +0x2224:  call   0807d880 <_init+0x178>
082fc3f7 +0x2229:  mov    0xc(%ebp),%eax
082fc3fa +0x222c:  mov    (%eax),%eax
082fc3fc +0x222e:  mov    %eax,(%esp)
082fc3ff +0x2231:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
082fc404 +0x2236:  mov    0xc(%ebp),%edx
082fc407 +0x2239:  mov    %eax,(%edx)
082fc409 +0x223b:  mov    %ebx,%eax
082fc40b +0x223d:  add    $0x14,%esp
082fc40e +0x2240:  pop    %ebx
082fc40f +0x2241:  pop    %ebp
082fc410 +0x2242:  ret    $0x4
082fc413 +0x2245:  nop
082fc414 +0x2246:  push   %ebp
082fc415 +0x2247:  mov    %esp,%ebp
082fc417 +0x2249:  sub    $0x28,%esp
082fc41a +0x224c:  mov    0x8(%ebp),%eax
082fc41d +0x224f:  lea    0x4(%eax),%edx
082fc420 +0x2252:  mov    0xc(%ebp),%eax
082fc423 +0x2255:  mov    %edx,0x4(%esp)
082fc427 +0x2259:  mov    %eax,(%esp)
082fc42a +0x225c:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
082fc42f +0x2261:  mov    %eax,-0xc(%ebp)
082fc432 +0x2264:  mov    -0xc(%ebp),%eax
082fc435 +0x2267:  mov    %eax,0x4(%esp)
082fc439 +0x226b:  mov    0x8(%ebp),%eax
082fc43c +0x226e:  mov    %eax,(%esp)
082fc43f +0x2271:  call   0823c446 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x75c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x75c4
082fc444 +0x2276:  mov    0x8(%ebp),%eax
082fc447 +0x2279:  mov    0x14(%eax),%eax
082fc44a +0x227c:  lea    -0x1(%eax),%edx
082fc44d +0x227f:  mov    0x8(%ebp),%eax
082fc450 +0x2282:  mov    %edx,0x14(%eax)
082fc453 +0x2285:  leave
082fc454 +0x2286:  ret
082fc455 +0x2287:  nop
082fc456 +0x2288:  push   %ebp
082fc457 +0x2289:  mov    %esp,%ebp
082fc459 +0x228b:  sub    $0x18,%esp
082fc45c +0x228e:  mov    0xc(%ebp),%eax
082fc45f +0x2291:  mov    %eax,0x4(%esp)
082fc463 +0x2295:  movl   $0x4,(%esp)
082fc46a +0x229c:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082fc46f +0x22a1:  mov    %eax,%edx
082fc471 +0x22a3:  test   %edx,%edx
082fc473 +0x22a5:  je     082fc47c <+0x22ae>
082fc475 +0x22a7:  mov    0x10(%ebp),%edx
082fc478 +0x22aa:  mov    (%edx),%edx
082fc47a +0x22ac:  mov    %edx,(%eax)
082fc47c +0x22ae:  leave
082fc47d +0x22af:  ret
082fc47e +0x22b0:  push   %ebp
082fc47f +0x22b1:  mov    %esp,%ebp
082fc481 +0x22b3:  push   %esi
082fc482 +0x22b4:  push   %ebx
082fc483 +0x22b5:  sub    $0x10,%esp
082fc486 +0x22b8:  movl   $0x1,0x4(%esp)
082fc48e +0x22c0:  mov    0x8(%ebp),%eax
082fc491 +0x22c3:  mov    %eax,(%esp)
082fc494 +0x22c6:  call   082fca3e <+0x2870>
082fc499 +0x22cb:  mov    0x8(%ebp),%eax
082fc49c +0x22ce:  mov    0x24(%eax),%eax
082fc49f +0x22d1:  lea    0x4(%eax),%ebx
082fc4a2 +0x22d4:  mov    0x8(%ebp),%eax
082fc4a5 +0x22d7:  mov    %eax,(%esp)
082fc4a8 +0x22da:  call   082fca94 <+0x28c6>
082fc4ad +0x22df:  mov    %eax,(%ebx)
082fc4af +0x22e1:  mov    0xc(%ebp),%eax
082fc4b2 +0x22e4:  mov    %eax,(%esp)
082fc4b5 +0x22e7:  call   082fc8cd <+0x26ff>
082fc4ba +0x22ec:  mov    0x8(%ebp),%edx
082fc4bd +0x22ef:  mov    0x18(%edx),%ecx
082fc4c0 +0x22f2:  mov    0x8(%ebp),%edx
082fc4c3 +0x22f5:  mov    %eax,0x8(%esp)
082fc4c7 +0x22f9:  mov    %ecx,0x4(%esp)
082fc4cb +0x22fd:  mov    %edx,(%esp)
082fc4ce +0x2300:  call   082fc456 <+0x2288>
082fc4d3 +0x2305:  mov    0x8(%ebp),%eax
082fc4d6 +0x2308:  mov    0x24(%eax),%eax
082fc4d9 +0x230b:  lea    0x4(%eax),%edx
082fc4dc +0x230e:  mov    0x8(%ebp),%eax
082fc4df +0x2311:  add    $0x18,%eax
082fc4e2 +0x2314:  mov    %edx,0x4(%esp)
082fc4e6 +0x2318:  mov    %eax,(%esp)
082fc4e9 +0x231b:  call   082fc6ec <+0x251e>
082fc4ee +0x2320:  mov    0x8(%ebp),%eax
082fc4f1 +0x2323:  mov    0x1c(%eax),%edx
082fc4f4 +0x2326:  mov    0x8(%ebp),%eax
082fc4f7 +0x2329:  mov    %edx,0x18(%eax)
082fc4fa +0x232c:  add    $0x10,%esp
082fc4fd +0x232f:  pop    %ebx
082fc4fe +0x2330:  pop    %esi
082fc4ff +0x2331:  pop    %ebp
082fc500 +0x2332:  ret
082fc501 +0x2333:  mov    %eax,(%esp)
082fc504 +0x2336:  call   08725ce0 <__cxa_begin_catch>
082fc509 +0x233b:  mov    0x8(%ebp),%eax
082fc50c +0x233e:  mov    0x24(%eax),%eax
082fc50f +0x2341:  add    $0x4,%eax
082fc512 +0x2344:  mov    (%eax),%edx
082fc514 +0x2346:  mov    0x8(%ebp),%eax
082fc517 +0x2349:  mov    %edx,0x4(%esp)
082fc51b +0x234d:  mov    %eax,(%esp)
082fc51e +0x2350:  call   082fc724 <+0x2556>
082fc523 +0x2355:  call   08724be0 <__cxa_rethrow>
082fc528 +0x235a:  mov    %edx,%ebx
082fc52a +0x235c:  mov    %eax,%esi
082fc52c +0x235e:  call   08725c30 <__cxa_end_catch>
082fc531 +0x2363:  mov    %esi,%eax
082fc533 +0x2365:  mov    %ebx,%edx
082fc535 +0x2367:  mov    %eax,(%esp)
082fc538 +0x236a:  call   08ae3750 <_Unwind_Resume>
082fc53d +0x236f:  nop
082fc53e +0x2370:  push   %ebp
082fc53f +0x2371:  mov    %esp,%ebp
082fc541 +0x2373:  sub    $0x18,%esp
082fc544 +0x2376:  mov    0xc(%ebp),%eax
082fc547 +0x2379:  mov    %eax,(%esp)
082fc54a +0x237c:  call   080c7f1d <_GLOBAL__I_g_ServerString_+0x1488>  ; global constructors keyed to g_ServerString_+0x1488
082fc54f +0x2381:  mov    0x8(%ebp),%edx
082fc552 +0x2384:  mov    (%eax),%eax
082fc554 +0x2386:  mov    %eax,(%edx)
082fc556 +0x2388:  mov    0x10(%ebp),%eax
082fc559 +0x238b:  mov    %eax,(%esp)
082fc55c +0x238e:  call   080c7f1d <_GLOBAL__I_g_ServerString_+0x1488>  ; global constructors keyed to g_ServerString_+0x1488
082fc561 +0x2393:  mov    0x8(%ebp),%edx
082fc564 +0x2396:  mov    (%eax),%eax
082fc566 +0x2398:  mov    %eax,0x4(%edx)
082fc569 +0x239b:  leave
082fc56a +0x239c:  ret
082fc56b +0x239d:  nop
082fc56c +0x239e:  push   %ebp
082fc56d +0x239f:  mov    %esp,%ebp
082fc56f +0x23a1:  sub    $0x28,%esp
082fc572 +0x23a4:  mov    0x8(%ebp),%eax
082fc575 +0x23a7:  lea    0x4(%eax),%edx
082fc578 +0x23aa:  mov    0xc(%ebp),%eax
082fc57b +0x23ad:  mov    %edx,0x4(%esp)
082fc57f +0x23b1:  mov    %eax,(%esp)
082fc582 +0x23b4:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
082fc587 +0x23b9:  mov    %eax,-0xc(%ebp)
082fc58a +0x23bc:  mov    -0xc(%ebp),%eax
082fc58d +0x23bf:  mov    %eax,0x4(%esp)
082fc591 +0x23c3:  mov    0x8(%ebp),%eax
082fc594 +0x23c6:  mov    %eax,(%esp)
082fc597 +0x23c9:  call   080c782e <_GLOBAL__I_g_ServerString_+0xd99>  ; global constructors keyed to g_ServerString_+0xd99
082fc59c +0x23ce:  mov    0x8(%ebp),%eax
082fc59f +0x23d1:  mov    0x14(%eax),%eax
082fc5a2 +0x23d4:  lea    -0x1(%eax),%edx
082fc5a5 +0x23d7:  mov    0x8(%ebp),%eax
082fc5a8 +0x23da:  mov    %edx,0x14(%eax)
082fc5ab +0x23dd:  leave
082fc5ac +0x23de:  ret
082fc5ad +0x23df:  push   %ebp
082fc5ae +0x23e0:  mov    %esp,%ebp
082fc5b0 +0x23e2:  mov    0x8(%ebp),%eax
082fc5b3 +0x23e5:  mov    0x8(%eax),%eax
082fc5b6 +0x23e8:  pop    %ebp
082fc5b7 +0x23e9:  ret
082fc5b8 +0x23ea:  push   %ebp
082fc5b9 +0x23eb:  mov    %esp,%ebp
082fc5bb +0x23ed:  mov    0x8(%ebp),%eax
082fc5be +0x23f0:  mov    0xc(%eax),%eax
082fc5c1 +0x23f3:  pop    %ebp
082fc5c2 +0x23f4:  ret
082fc5c3 +0x23f5:  nop
082fc5c4 +0x23f6:  push   %ebp
082fc5c5 +0x23f7:  mov    %esp,%ebp
082fc5c7 +0x23f9:  sub    $0x18,%esp
082fc5ca +0x23fc:  mov    0x8(%ebp),%eax
082fc5cd +0x23ff:  mov    %eax,(%esp)
082fc5d0 +0x2402:  call   082fcac0 <+0x28f2>
082fc5d5 +0x2407:  leave
082fc5d6 +0x2408:  ret
082fc5d7 +0x2409:  nop
082fc5d8 +0x240a:  push   %ebp
082fc5d9 +0x240b:  mov    %esp,%ebp
082fc5db +0x240d:  mov    0x8(%ebp),%eax
082fc5de +0x2410:  movl   $0x0,(%eax)
082fc5e4 +0x2416:  mov    0x8(%ebp),%eax
082fc5e7 +0x2419:  movl   $0x0,0x4(%eax)
082fc5ee +0x2420:  mov    0x8(%ebp),%eax
082fc5f1 +0x2423:  movl   $0x0,0x8(%eax)
082fc5f8 +0x242a:  mov    0x8(%ebp),%eax
082fc5fb +0x242d:  movl   $0x0,0xc(%eax)
082fc602 +0x2434:  pop    %ebp
082fc603 +0x2435:  ret
082fc604 +0x2436:  push   %ebp
082fc605 +0x2437:  mov    %esp,%ebp
082fc607 +0x2439:  pop    %ebp
082fc608 +0x243a:  ret
082fc609 +0x243b:  nop
082fc60a +0x243c:  push   %ebp
082fc60b +0x243d:  mov    %esp,%ebp
082fc60d +0x243f:  push   %esi
082fc60e +0x2440:  push   %ebx
082fc60f +0x2441:  sub    $0x20,%esp
082fc612 +0x2444:  lea    -0x9(%ebp),%eax
082fc615 +0x2447:  mov    0x8(%ebp),%edx
082fc618 +0x244a:  mov    %edx,0x4(%esp)
082fc61c +0x244e:  mov    %eax,(%esp)
082fc61f +0x2451:  call   082fc74e <+0x2580>
082fc624 +0x2456:  sub    $0x4,%esp
082fc627 +0x2459:  lea    -0x9(%ebp),%eax
082fc62a +0x245c:  movl   $0x0,0x8(%esp)
082fc632 +0x2464:  mov    0xc(%ebp),%edx
082fc635 +0x2467:  mov    %edx,0x4(%esp)
082fc639 +0x246b:  mov    %eax,(%esp)
082fc63c +0x246e:  call   082fcac6 <+0x28f8>
082fc641 +0x2473:  mov    %eax,%ebx
082fc643 +0x2475:  lea    -0x9(%ebp),%eax
082fc646 +0x2478:  mov    %eax,(%esp)
082fc649 +0x247b:  call   082fc780 <+0x25b2>
082fc64e +0x2480:  mov    %ebx,%eax
082fc650 +0x2482:  lea    -0x8(%ebp),%esp
082fc653 +0x2485:  add    $0x0,%esp
082fc656 +0x2488:  pop    %ebx
082fc657 +0x2489:  pop    %esi
082fc658 +0x248a:  pop    %ebp
082fc659 +0x248b:  ret
082fc65a +0x248c:  mov    %edx,%ebx
082fc65c +0x248e:  mov    %eax,%esi
082fc65e +0x2490:  lea    -0x9(%ebp),%eax
082fc661 +0x2493:  mov    %eax,(%esp)
082fc664 +0x2496:  call   082fc780 <+0x25b2>
082fc669 +0x249b:  mov    %esi,%eax
082fc66b +0x249d:  mov    %ebx,%edx
082fc66d +0x249f:  mov    %eax,(%esp)
082fc670 +0x24a2:  call   08ae3750 <_Unwind_Resume>
082fc675 +0x24a7:  nop
082fc676 +0x24a8:  push   %ebp
082fc677 +0x24a9:  mov    %esp,%ebp
082fc679 +0x24ab:  push   %esi
082fc67a +0x24ac:  push   %ebx
082fc67b +0x24ad:  sub    $0x20,%esp
082fc67e +0x24b0:  mov    0xc(%ebp),%eax
082fc681 +0x24b3:  mov    %eax,-0xc(%ebp)
082fc684 +0x24b6:  jmp    082fc69a <+0x24cc>
082fc686 +0x24b8:  mov    0x8(%ebp),%eax
082fc689 +0x24bb:  mov    %eax,(%esp)
082fc68c +0x24be:  call   082fca94 <+0x28c6>
082fc691 +0x24c3:  mov    -0xc(%ebp),%edx
082fc694 +0x24c6:  mov    %eax,(%edx)
082fc696 +0x24c8:  addl   $0x4,-0xc(%ebp)
082fc69a +0x24cc:  mov    -0xc(%ebp),%eax
082fc69d +0x24cf:  cmp    0x10(%ebp),%eax
082fc6a0 +0x24d2:  setb   %al
082fc6a3 +0x24d5:  test   %al,%al
082fc6a5 +0x24d7:  jne    082fc686 <+0x24b8>
082fc6a7 +0x24d9:  jmp    082fc6e4 <+0x2516>
082fc6a9 +0x24db:  mov    %eax,(%esp)
082fc6ac +0x24de:  call   08725ce0 <__cxa_begin_catch>
082fc6b1 +0x24e3:  mov    -0xc(%ebp),%eax
082fc6b4 +0x24e6:  mov    %eax,0x8(%esp)
082fc6b8 +0x24ea:  mov    0xc(%ebp),%eax
082fc6bb +0x24ed:  mov    %eax,0x4(%esp)
082fc6bf +0x24f1:  mov    0x8(%ebp),%eax
082fc6c2 +0x24f4:  mov    %eax,(%esp)
082fc6c5 +0x24f7:  call   082fbf40 <+0x1d72>
082fc6ca +0x24fc:  call   08724be0 <__cxa_rethrow>
082fc6cf +0x2501:  mov    %edx,%ebx
082fc6d1 +0x2503:  mov    %eax,%esi
082fc6d3 +0x2505:  call   08725c30 <__cxa_end_catch>
082fc6d8 +0x250a:  mov    %esi,%eax
082fc6da +0x250c:  mov    %ebx,%edx
082fc6dc +0x250e:  mov    %eax,(%esp)
082fc6df +0x2511:  call   08ae3750 <_Unwind_Resume>
082fc6e4 +0x2516:  add    $0x20,%esp
082fc6e7 +0x2519:  pop    %ebx
082fc6e8 +0x251a:  pop    %esi
082fc6e9 +0x251b:  pop    %ebp
082fc6ea +0x251c:  ret
082fc6eb +0x251d:  nop
082fc6ec +0x251e:  push   %ebp
082fc6ed +0x251f:  mov    %esp,%ebp
082fc6ef +0x2521:  push   %ebx
082fc6f0 +0x2522:  sub    $0x4,%esp
082fc6f3 +0x2525:  mov    0x8(%ebp),%eax
082fc6f6 +0x2528:  mov    0xc(%ebp),%edx
082fc6f9 +0x252b:  mov    %edx,0xc(%eax)
082fc6fc +0x252e:  mov    0xc(%ebp),%eax
082fc6ff +0x2531:  mov    (%eax),%edx
082fc701 +0x2533:  mov    0x8(%ebp),%eax
082fc704 +0x2536:  mov    %edx,0x4(%eax)
082fc707 +0x2539:  mov    0x8(%ebp),%eax
082fc70a +0x253c:  mov    0x4(%eax),%ebx
082fc70d +0x253f:  call   080ee97b <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x5dc>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x5dc
082fc712 +0x2544:  shl    $0x2,%eax
082fc715 +0x2547:  lea    (%ebx,%eax,1),%edx
082fc718 +0x254a:  mov    0x8(%ebp),%eax
082fc71b +0x254d:  mov    %edx,0x8(%eax)
082fc71e +0x2550:  add    $0x4,%esp
082fc721 +0x2553:  pop    %ebx
082fc722 +0x2554:  pop    %ebp
082fc723 +0x2555:  ret
082fc724 +0x2556:  push   %ebp
082fc725 +0x2557:  mov    %esp,%ebp
082fc727 +0x2559:  sub    $0x18,%esp
082fc72a +0x255c:  movl   $0x4,(%esp)
082fc731 +0x2563:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
082fc736 +0x2568:  mov    0x8(%ebp),%edx
082fc739 +0x256b:  mov    %eax,0x8(%esp)
082fc73d +0x256f:  mov    0xc(%ebp),%eax
082fc740 +0x2572:  mov    %eax,0x4(%esp)
082fc744 +0x2576:  mov    %edx,(%esp)
082fc747 +0x2579:  call   082fcafe <+0x2930>
082fc74c +0x257e:  leave
082fc74d +0x257f:  ret
082fc74e +0x2580:  push   %ebp
082fc74f +0x2581:  mov    %esp,%ebp
082fc751 +0x2583:  push   %esi
082fc752 +0x2584:  push   %ebx
082fc753 +0x2585:  sub    $0x10,%esp
082fc756 +0x2588:  mov    0x8(%ebp),%ebx
082fc759 +0x258b:  mov    %ebx,%esi
082fc75b +0x258d:  mov    0xc(%ebp),%eax
082fc75e +0x2590:  mov    %eax,(%esp)
082fc761 +0x2593:  call   082fcb12 <+0x2944>
082fc766 +0x2598:  mov    %eax,0x4(%esp)
082fc76a +0x259c:  mov    %esi,(%esp)
082fc76d +0x259f:  call   082fcb1a <+0x294c>
082fc772 +0x25a4:  mov    %ebx,%eax
082fc774 +0x25a6:  mov    %ebx,%eax
082fc776 +0x25a8:  add    $0x10,%esp
082fc779 +0x25ab:  pop    %ebx
082fc77a +0x25ac:  pop    %esi
082fc77b +0x25ad:  pop    %ebp
082fc77c +0x25ae:  ret    $0x4
082fc77f +0x25b1:  nop
082fc780 +0x25b2:  push   %ebp
082fc781 +0x25b3:  mov    %esp,%ebp
082fc783 +0x25b5:  sub    $0x18,%esp
082fc786 +0x25b8:  mov    0x8(%ebp),%eax
082fc789 +0x25bb:  mov    %eax,(%esp)
082fc78c +0x25be:  call   082fcb2e <+0x2960>
082fc791 +0x25c3:  leave
082fc792 +0x25c4:  ret
082fc793 +0x25c5:  nop
082fc794 +0x25c6:  push   %ebp
082fc795 +0x25c7:  mov    %esp,%ebp
082fc797 +0x25c9:  sub    $0x18,%esp
082fc79a +0x25cc:  mov    0xc(%ebp),%eax
082fc79d +0x25cf:  mov    %eax,(%esp)
082fc7a0 +0x25d2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082fc7a5 +0x25d7:  leave
082fc7a6 +0x25d8:  ret
082fc7a7 +0x25d9:  nop
082fc7a8 +0x25da:  push   %ebp
082fc7a9 +0x25db:  mov    %esp,%ebp
082fc7ab +0x25dd:  sub    $0x18,%esp
082fc7ae +0x25e0:  mov    0x8(%ebp),%eax
082fc7b1 +0x25e3:  mov    0xc(%ebp),%edx
082fc7b4 +0x25e6:  mov    %edx,0x4(%esp)
082fc7b8 +0x25ea:  mov    %eax,(%esp)
082fc7bb +0x25ed:  call   082fcb34 <+0x2966>
082fc7c0 +0x25f2:  mov    0x8(%ebp),%eax
082fc7c3 +0x25f5:  movl   $0x0,(%eax)
082fc7c9 +0x25fb:  mov    0x8(%ebp),%eax
082fc7cc +0x25fe:  movl   $0x0,0x4(%eax)
082fc7d3 +0x2605:  mov    0x8(%ebp),%eax
082fc7d6 +0x2608:  add    $0x8,%eax
082fc7d9 +0x260b:  mov    %eax,(%esp)
082fc7dc +0x260e:  call   082fc5d8 <+0x240a>
082fc7e1 +0x2613:  mov    0x8(%ebp),%eax
082fc7e4 +0x2616:  add    $0x18,%eax
082fc7e7 +0x2619:  mov    %eax,(%esp)
082fc7ea +0x261c:  call   082fc5d8 <+0x240a>
082fc7ef +0x2621:  leave
082fc7f0 +0x2622:  ret
082fc7f1 +0x2623:  push   %ebp
082fc7f2 +0x2624:  mov    %esp,%ebp
082fc7f4 +0x2626:  sub    $0x28,%esp
082fc7f7 +0x2629:  mov    0x8(%ebp),%eax
082fc7fa +0x262c:  mov    %eax,(%esp)
082fc7fd +0x262f:  call   082fcb4e <+0x2980>
082fc802 +0x2634:  mov    %eax,0x4(%esp)
082fc806 +0x2638:  lea    -0x18(%ebp),%eax
082fc809 +0x263b:  mov    %eax,(%esp)
082fc80c +0x263e:  call   082fb3d4 <+0x1206>
082fc811 +0x2643:  mov    0xc(%ebp),%eax
082fc814 +0x2646:  mov    %eax,(%esp)
082fc817 +0x2649:  call   082fcb4e <+0x2980>
082fc81c +0x264e:  mov    0x8(%ebp),%edx
082fc81f +0x2651:  mov    (%eax),%ecx
082fc821 +0x2653:  mov    %ecx,(%edx)
082fc823 +0x2655:  mov    0x4(%eax),%ecx
082fc826 +0x2658:  mov    %ecx,0x4(%edx)
082fc829 +0x265b:  mov    0x8(%eax),%ecx
082fc82c +0x265e:  mov    %ecx,0x8(%edx)
082fc82f +0x2661:  mov    0xc(%eax),%eax
082fc832 +0x2664:  mov    %eax,0xc(%edx)
082fc835 +0x2667:  lea    -0x18(%ebp),%eax
082fc838 +0x266a:  mov    %eax,(%esp)
082fc83b +0x266d:  call   082fcb4e <+0x2980>
082fc840 +0x2672:  mov    0xc(%ebp),%edx
082fc843 +0x2675:  mov    (%eax),%ecx
082fc845 +0x2677:  mov    %ecx,(%edx)
082fc847 +0x2679:  mov    0x4(%eax),%ecx
082fc84a +0x267c:  mov    %ecx,0x4(%edx)
082fc84d +0x267f:  mov    0x8(%eax),%ecx
082fc850 +0x2682:  mov    %ecx,0x8(%edx)
082fc853 +0x2685:  mov    0xc(%eax),%eax
082fc856 +0x2688:  mov    %eax,0xc(%edx)
082fc859 +0x268b:  leave
082fc85a +0x268c:  ret
082fc85b +0x268d:  push   %ebp
082fc85c +0x268e:  mov    %esp,%ebp
082fc85e +0x2690:  sub    $0x28,%esp
082fc861 +0x2693:  mov    0x8(%ebp),%eax
082fc864 +0x2696:  mov    %eax,(%esp)
082fc867 +0x2699:  call   082fcb56 <+0x2988>
082fc86c +0x269e:  mov    (%eax),%eax
082fc86e +0x26a0:  mov    %eax,-0xc(%ebp)
082fc871 +0x26a3:  mov    0xc(%ebp),%eax
082fc874 +0x26a6:  mov    %eax,(%esp)
082fc877 +0x26a9:  call   082fcb56 <+0x2988>
082fc87c +0x26ae:  mov    (%eax),%edx
082fc87e +0x26b0:  mov    0x8(%ebp),%eax
082fc881 +0x26b3:  mov    %edx,(%eax)
082fc883 +0x26b5:  lea    -0xc(%ebp),%eax
082fc886 +0x26b8:  mov    %eax,(%esp)
082fc889 +0x26bb:  call   082fcb56 <+0x2988>
082fc88e +0x26c0:  mov    (%eax),%edx
082fc890 +0x26c2:  mov    0xc(%ebp),%eax
082fc893 +0x26c5:  mov    %edx,(%eax)
082fc895 +0x26c7:  leave
082fc896 +0x26c8:  ret
082fc897 +0x26c9:  nop
082fc898 +0x26ca:  push   %ebp
082fc899 +0x26cb:  mov    %esp,%ebp
082fc89b +0x26cd:  sub    $0x18,%esp
082fc89e +0x26d0:  mov    0x8(%ebp),%eax
082fc8a1 +0x26d3:  mov    %eax,(%esp)
082fc8a4 +0x26d6:  call   082fcb5e <+0x2990>
082fc8a9 +0x26db:  leave
082fc8aa +0x26dc:  ret
082fc8ab +0x26dd:  nop
082fc8ac +0x26de:  push   %ebp
082fc8ad +0x26df:  mov    %esp,%ebp
082fc8af +0x26e1:  sub    $0x18,%esp
082fc8b2 +0x26e4:  mov    0xc(%ebp),%eax
082fc8b5 +0x26e7:  mov    %eax,(%esp)
082fc8b8 +0x26ea:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082fc8bd +0x26ef:  leave
082fc8be +0x26f0:  ret
082fc8bf +0x26f1:  nop
082fc8c0 +0x26f2:  push   %ebp
082fc8c1 +0x26f3:  mov    %esp,%ebp
082fc8c3 +0x26f5:  mov    0x8(%ebp),%eax
082fc8c6 +0x26f8:  mov    0xc(%ebp),%edx
082fc8c9 +0x26fb:  mov    %edx,(%eax)
082fc8cb +0x26fd:  pop    %ebp
082fc8cc +0x26fe:  ret
082fc8cd +0x26ff:  push   %ebp
082fc8ce +0x2700:  mov    %esp,%ebp
082fc8d0 +0x2702:  mov    0x8(%ebp),%eax
082fc8d3 +0x2705:  pop    %ebp
082fc8d4 +0x2706:  ret
082fc8d5 +0x2707:  nop
082fc8d6 +0x2708:  push   %ebp
082fc8d7 +0x2709:  mov    %esp,%ebp
082fc8d9 +0x270b:  push   %esi
082fc8da +0x270c:  push   %ebx
082fc8db +0x270d:  sub    $0x20,%esp
082fc8de +0x2710:  mov    0x8(%ebp),%eax
082fc8e1 +0x2713:  mov    %eax,(%esp)
082fc8e4 +0x2716:  call   082fcb64 <+0x2996>
082fc8e9 +0x271b:  mov    %eax,-0xc(%ebp)
082fc8ec +0x271e:  mov    0xc(%ebp),%eax
082fc8ef +0x2721:  mov    %eax,(%esp)
082fc8f2 +0x2724:  call   082fc8cd <+0x26ff>
082fc8f7 +0x2729:  mov    %eax,%ebx
082fc8f9 +0x272b:  mov    0x8(%ebp),%eax
082fc8fc +0x272e:  mov    %eax,(%esp)
082fc8ff +0x2731:  call   082fc0a8 <+0x1eda>
082fc904 +0x2736:  mov    %ebx,0x8(%esp)
082fc908 +0x273a:  mov    -0xc(%ebp),%edx
082fc90b +0x273d:  mov    %edx,0x4(%esp)
082fc90f +0x2741:  mov    %eax,(%esp)
082fc912 +0x2744:  call   082fcb88 <+0x29ba>
082fc917 +0x2749:  jmp    082fc94d <+0x277f>
082fc919 +0x274b:  mov    %eax,(%esp)
082fc91c +0x274e:  call   08725ce0 <__cxa_begin_catch>
082fc921 +0x2753:  mov    0x8(%ebp),%eax
082fc924 +0x2756:  mov    -0xc(%ebp),%edx
082fc927 +0x2759:  mov    %edx,0x4(%esp)
082fc92b +0x275d:  mov    %eax,(%esp)
082fc92e +0x2760:  call   082fc0ca <+0x1efc>
082fc933 +0x2765:  call   08724be0 <__cxa_rethrow>
082fc938 +0x276a:  mov    %edx,%ebx
082fc93a +0x276c:  mov    %eax,%esi
082fc93c +0x276e:  call   08725c30 <__cxa_end_catch>
082fc941 +0x2773:  mov    %esi,%eax
082fc943 +0x2775:  mov    %ebx,%edx
082fc945 +0x2777:  mov    %eax,(%esp)
082fc948 +0x277a:  call   08ae3750 <_Unwind_Resume>
082fc94d +0x277f:  mov    -0xc(%ebp),%eax
082fc950 +0x2782:  add    $0x20,%esp
082fc953 +0x2785:  pop    %ebx
082fc954 +0x2786:  pop    %esi
082fc955 +0x2787:  pop    %ebp
082fc956 +0x2788:  ret
082fc957 +0x2789:  nop
082fc958 +0x278a:  push   %ebp
082fc959 +0x278b:  mov    %esp,%ebp
082fc95b +0x278d:  sub    $0x28,%esp
082fc95e +0x2790:  mov    0x8(%ebp),%eax
082fc961 +0x2793:  mov    0x18(%eax),%edx
082fc964 +0x2796:  mov    0x8(%ebp),%eax
082fc967 +0x2799:  mov    0x20(%eax),%eax
082fc96a +0x279c:  sub    $0x4,%eax
082fc96d +0x279f:  cmp    %eax,%edx
082fc96f +0x27a1:  je     082fc9ae <+0x27e0>
082fc971 +0x27a3:  mov    0xc(%ebp),%eax
082fc974 +0x27a6:  mov    %eax,(%esp)
082fc977 +0x27a9:  call   082fcbc7 <+0x29f9>
082fc97c +0x27ae:  mov    (%eax),%eax
082fc97e +0x27b0:  mov    %eax,-0x10(%ebp)
082fc981 +0x27b3:  mov    0x8(%ebp),%eax
082fc984 +0x27b6:  mov    0x18(%eax),%edx
082fc987 +0x27b9:  mov    0x8(%ebp),%eax
082fc98a +0x27bc:  lea    -0x10(%ebp),%ecx
082fc98d +0x27bf:  mov    %ecx,0x8(%esp)
082fc991 +0x27c3:  mov    %edx,0x4(%esp)
082fc995 +0x27c7:  mov    %eax,(%esp)
082fc998 +0x27ca:  call   082fcbd0 <+0x2a02>
082fc99d +0x27cf:  mov    0x8(%ebp),%eax
082fc9a0 +0x27d2:  mov    0x18(%eax),%eax
082fc9a3 +0x27d5:  lea    0x4(%eax),%edx
082fc9a6 +0x27d8:  mov    0x8(%ebp),%eax
082fc9a9 +0x27db:  mov    %edx,0x18(%eax)
082fc9ac +0x27de:  jmp    082fc9d0 <+0x2802>
082fc9ae +0x27e0:  mov    0xc(%ebp),%eax
082fc9b1 +0x27e3:  mov    %eax,(%esp)
082fc9b4 +0x27e6:  call   082fcbc7 <+0x29f9>
082fc9b9 +0x27eb:  mov    (%eax),%eax
082fc9bb +0x27ed:  mov    %eax,-0xc(%ebp)
082fc9be +0x27f0:  lea    -0xc(%ebp),%eax
082fc9c1 +0x27f3:  mov    %eax,0x4(%esp)
082fc9c5 +0x27f7:  mov    0x8(%ebp),%eax
082fc9c8 +0x27fa:  mov    %eax,(%esp)
082fc9cb +0x27fd:  call   082fcc06 <+0x2a38>
082fc9d0 +0x2802:  leave
082fc9d1 +0x2803:  ret
082fc9d2 +0x2804:  push   %ebp
082fc9d3 +0x2805:  mov    %esp,%ebp
082fc9d5 +0x2807:  sub    $0x18,%esp
082fc9d8 +0x280a:  mov    0x8(%ebp),%eax
082fc9db +0x280d:  movl   $0x0,0x8(%esp)
082fc9e3 +0x2815:  movl   $0x1,0x4(%esp)
082fc9eb +0x281d:  mov    %eax,(%esp)
082fc9ee +0x2820:  call   082fcc90 <+0x2ac2>
082fc9f3 +0x2825:  leave
082fc9f4 +0x2826:  ret
082fc9f5 +0x2827:  push   %ebp
082fc9f6 +0x2828:  mov    %esp,%ebp
082fc9f8 +0x282a:  mov    0x8(%ebp),%eax
082fc9fb +0x282d:  pop    %ebp
082fc9fc +0x282e:  ret
082fc9fd +0x282f:  nop
082fc9fe +0x2830:  push   %ebp
082fc9ff +0x2831:  mov    %esp,%ebp
082fca01 +0x2833:  push   %ebx
082fca02 +0x2834:  sub    $0x14,%esp
082fca05 +0x2837:  mov    0x10(%ebp),%eax
082fca08 +0x283a:  mov    %eax,(%esp)
082fca0b +0x283d:  call   082fc9f5 <+0x2827>
082fca10 +0x2842:  mov    %eax,%ebx
082fca12 +0x2844:  mov    0xc(%ebp),%eax
082fca15 +0x2847:  mov    %eax,0x4(%esp)
082fca19 +0x284b:  movl   $0x18,(%esp)
082fca20 +0x2852:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082fca25 +0x2857:  mov    %eax,%edx
082fca27 +0x2859:  test   %edx,%edx
082fca29 +0x285b:  je     082fca37 <+0x2869>
082fca2b +0x285d:  mov    %ebx,0x4(%esp)
082fca2f +0x2861:  mov    %eax,(%esp)
082fca32 +0x2864:  call   082fccce <+0x2b00>
082fca37 +0x2869:  add    $0x14,%esp
082fca3a +0x286c:  pop    %ebx
082fca3b +0x286d:  pop    %ebp
082fca3c +0x286e:  ret
082fca3d +0x286f:  nop
082fca3e +0x2870:  push   %ebp
082fca3f +0x2871:  mov    %esp,%ebp
082fca41 +0x2873:  push   %esi
082fca42 +0x2874:  push   %ebx
082fca43 +0x2875:  sub    $0x10,%esp
082fca46 +0x2878:  mov    0xc(%ebp),%eax
082fca49 +0x287b:  lea    0x1(%eax),%ebx
082fca4c +0x287e:  mov    0x8(%ebp),%eax
082fca4f +0x2881:  mov    0x4(%eax),%edx
082fca52 +0x2884:  mov    0x8(%ebp),%eax
082fca55 +0x2887:  mov    0x24(%eax),%eax
082fca58 +0x288a:  mov    %eax,%ecx
082fca5a +0x288c:  mov    0x8(%ebp),%eax
082fca5d +0x288f:  mov    (%eax),%eax
082fca5f +0x2891:  mov    %ecx,%esi
082fca61 +0x2893:  sub    %eax,%esi
082fca63 +0x2895:  mov    %esi,%eax
082fca65 +0x2897:  sar    $0x2,%eax
082fca68 +0x289a:  mov    %edx,%ecx
082fca6a +0x289c:  sub    %eax,%ecx
082fca6c +0x289e:  mov    %ecx,%eax
082fca6e +0x28a0:  cmp    %eax,%ebx
082fca70 +0x28a2:  jbe    082fca8c <+0x28be>
082fca72 +0x28a4:  movl   $0x0,0x8(%esp)
082fca7a +0x28ac:  mov    0xc(%ebp),%eax
082fca7d +0x28af:  mov    %eax,0x4(%esp)
082fca81 +0x28b3:  mov    0x8(%ebp),%eax
082fca84 +0x28b6:  mov    %eax,(%esp)
082fca87 +0x28b9:  call   082fcd16 <+0x2b48>
082fca8c +0x28be:  add    $0x10,%esp
082fca8f +0x28c1:  pop    %ebx
082fca90 +0x28c2:  pop    %esi
082fca91 +0x28c3:  pop    %ebp
082fca92 +0x28c4:  ret
082fca93 +0x28c5:  nop
082fca94 +0x28c6:  push   %ebp
082fca95 +0x28c7:  mov    %esp,%ebp
082fca97 +0x28c9:  sub    $0x18,%esp
082fca9a +0x28cc:  movl   $0x4,(%esp)
082fcaa1 +0x28d3:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
082fcaa6 +0x28d8:  mov    0x8(%ebp),%edx
082fcaa9 +0x28db:  movl   $0x0,0x8(%esp)
082fcab1 +0x28e3:  mov    %eax,0x4(%esp)
082fcab5 +0x28e7:  mov    %edx,(%esp)
082fcab8 +0x28ea:  call   082fcee6 <+0x2d18>
082fcabd +0x28ef:  leave
082fcabe +0x28f0:  ret
082fcabf +0x28f1:  nop
082fcac0 +0x28f2:  push   %ebp
082fcac1 +0x28f3:  mov    %esp,%ebp
082fcac3 +0x28f5:  pop    %ebp
082fcac4 +0x28f6:  ret
082fcac5 +0x28f7:  nop
082fcac6 +0x28f8:  push   %ebp
082fcac7 +0x28f9:  mov    %esp,%ebp
082fcac9 +0x28fb:  sub    $0x18,%esp
082fcacc +0x28fe:  mov    0x8(%ebp),%eax
082fcacf +0x2901:  mov    %eax,(%esp)
082fcad2 +0x2904:  call   082fcf1e <+0x2d50>
082fcad7 +0x2909:  cmp    0xc(%ebp),%eax
082fcada +0x290c:  setb   %al
082fcadd +0x290f:  movzbl %al,%eax
082fcae0 +0x2912:  test   %eax,%eax
082fcae2 +0x2914:  setne  %al
082fcae5 +0x2917:  test   %al,%al
082fcae7 +0x2919:  je     082fcaee <+0x2920>
082fcae9 +0x291b:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082fcaee +0x2920:  mov    0xc(%ebp),%eax
082fcaf1 +0x2923:  shl    $0x2,%eax
082fcaf4 +0x2926:  mov    %eax,(%esp)
082fcaf7 +0x2929:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082fcafc +0x292e:  leave
082fcafd +0x292f:  ret
082fcafe +0x2930:  push   %ebp
082fcaff +0x2931:  mov    %esp,%ebp
082fcb01 +0x2933:  sub    $0x18,%esp
082fcb04 +0x2936:  mov    0xc(%ebp),%eax
082fcb07 +0x2939:  mov    %eax,(%esp)
082fcb0a +0x293c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082fcb0f +0x2941:  leave
082fcb10 +0x2942:  ret
082fcb11 +0x2943:  nop
082fcb12 +0x2944:  push   %ebp
082fcb13 +0x2945:  mov    %esp,%ebp
082fcb15 +0x2947:  mov    0x8(%ebp),%eax
082fcb18 +0x294a:  pop    %ebp
082fcb19 +0x294b:  ret
082fcb1a +0x294c:  push   %ebp
082fcb1b +0x294d:  mov    %esp,%ebp
082fcb1d +0x294f:  sub    $0x18,%esp
082fcb20 +0x2952:  mov    0x8(%ebp),%eax
082fcb23 +0x2955:  mov    %eax,(%esp)
082fcb26 +0x2958:  call   082fcf28 <+0x2d5a>
082fcb2b +0x295d:  leave
082fcb2c +0x295e:  ret
082fcb2d +0x295f:  nop
082fcb2e +0x2960:  push   %ebp
082fcb2f +0x2961:  mov    %esp,%ebp
082fcb31 +0x2963:  pop    %ebp
082fcb32 +0x2964:  ret
082fcb33 +0x2965:  nop
082fcb34 +0x2966:  push   %ebp
082fcb35 +0x2967:  mov    %esp,%ebp
082fcb37 +0x2969:  sub    $0x18,%esp
082fcb3a +0x296c:  mov    0xc(%ebp),%edx
082fcb3d +0x296f:  mov    0x8(%ebp),%eax
082fcb40 +0x2972:  mov    %edx,0x4(%esp)
082fcb44 +0x2976:  mov    %eax,(%esp)
082fcb47 +0x2979:  call   082fcf2e <+0x2d60>
082fcb4c +0x297e:  leave
082fcb4d +0x297f:  ret
082fcb4e +0x2980:  push   %ebp
082fcb4f +0x2981:  mov    %esp,%ebp
082fcb51 +0x2983:  mov    0x8(%ebp),%eax
082fcb54 +0x2986:  pop    %ebp
082fcb55 +0x2987:  ret
082fcb56 +0x2988:  push   %ebp
082fcb57 +0x2989:  mov    %esp,%ebp
082fcb59 +0x298b:  mov    0x8(%ebp),%eax
082fcb5c +0x298e:  pop    %ebp
082fcb5d +0x298f:  ret
082fcb5e +0x2990:  push   %ebp
082fcb5f +0x2991:  mov    %esp,%ebp
082fcb61 +0x2993:  pop    %ebp
082fcb62 +0x2994:  ret
082fcb63 +0x2995:  nop
082fcb64 +0x2996:  push   %ebp
082fcb65 +0x2997:  mov    %esp,%ebp
082fcb67 +0x2999:  sub    $0x18,%esp
082fcb6a +0x299c:  mov    0x8(%ebp),%eax
082fcb6d +0x299f:  movl   $0x0,0x8(%esp)
082fcb75 +0x29a7:  movl   $0x1,0x4(%esp)
082fcb7d +0x29af:  mov    %eax,(%esp)
082fcb80 +0x29b2:  call   082fcf34 <+0x2d66>
082fcb85 +0x29b7:  leave
082fcb86 +0x29b8:  ret
082fcb87 +0x29b9:  nop
082fcb88 +0x29ba:  push   %ebp
082fcb89 +0x29bb:  mov    %esp,%ebp
082fcb8b +0x29bd:  push   %ebx
082fcb8c +0x29be:  sub    $0x14,%esp
082fcb8f +0x29c1:  mov    0x10(%ebp),%eax
082fcb92 +0x29c4:  mov    %eax,(%esp)
082fcb95 +0x29c7:  call   082fc8cd <+0x26ff>
082fcb9a +0x29cc:  mov    %eax,%ebx
082fcb9c +0x29ce:  mov    0xc(%ebp),%eax
082fcb9f +0x29d1:  mov    %eax,0x4(%esp)
082fcba3 +0x29d5:  movl   $0xc,(%esp)
082fcbaa +0x29dc:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082fcbaf +0x29e1:  mov    %eax,%edx
082fcbb1 +0x29e3:  test   %edx,%edx
082fcbb3 +0x29e5:  je     082fcbc1 <+0x29f3>
082fcbb5 +0x29e7:  mov    %ebx,0x4(%esp)
082fcbb9 +0x29eb:  mov    %eax,(%esp)
082fcbbc +0x29ee:  call   082fcf72 <+0x2da4>
082fcbc1 +0x29f3:  add    $0x14,%esp
082fcbc4 +0x29f6:  pop    %ebx
082fcbc5 +0x29f7:  pop    %ebp
082fcbc6 +0x29f8:  ret
082fcbc7 +0x29f9:  push   %ebp
082fcbc8 +0x29fa:  mov    %esp,%ebp
082fcbca +0x29fc:  mov    0x8(%ebp),%eax
082fcbcd +0x29ff:  pop    %ebp
082fcbce +0x2a00:  ret
082fcbcf +0x2a01:  nop
082fcbd0 +0x2a02:  push   %ebp
082fcbd1 +0x2a03:  mov    %esp,%ebp
082fcbd3 +0x2a05:  push   %ebx
082fcbd4 +0x2a06:  sub    $0x14,%esp
082fcbd7 +0x2a09:  mov    0x10(%ebp),%eax
082fcbda +0x2a0c:  mov    %eax,(%esp)
082fcbdd +0x2a0f:  call   082fcbc7 <+0x29f9>
082fcbe2 +0x2a14:  mov    (%eax),%ebx
082fcbe4 +0x2a16:  mov    0xc(%ebp),%eax
082fcbe7 +0x2a19:  mov    %eax,0x4(%esp)
082fcbeb +0x2a1d:  movl   $0x4,(%esp)
082fcbf2 +0x2a24:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082fcbf7 +0x2a29:  mov    %eax,%edx
082fcbf9 +0x2a2b:  test   %edx,%edx
082fcbfb +0x2a2d:  je     082fcbff <+0x2a31>
082fcbfd +0x2a2f:  mov    %ebx,(%eax)
082fcbff +0x2a31:  add    $0x14,%esp
082fcc02 +0x2a34:  pop    %ebx
082fcc03 +0x2a35:  pop    %ebp
082fcc04 +0x2a36:  ret
082fcc05 +0x2a37:  nop
082fcc06 +0x2a38:  push   %ebp
082fcc07 +0x2a39:  mov    %esp,%ebp
082fcc09 +0x2a3b:  push   %ebx
082fcc0a +0x2a3c:  sub    $0x24,%esp
082fcc0d +0x2a3f:  movl   $0x1,0x4(%esp)
082fcc15 +0x2a47:  mov    0x8(%ebp),%eax
082fcc18 +0x2a4a:  mov    %eax,(%esp)
082fcc1b +0x2a4d:  call   082fca3e <+0x2870>
082fcc20 +0x2a52:  mov    0x8(%ebp),%eax
082fcc23 +0x2a55:  mov    0x24(%eax),%eax
082fcc26 +0x2a58:  lea    0x4(%eax),%ebx
082fcc29 +0x2a5b:  mov    0x8(%ebp),%eax
082fcc2c +0x2a5e:  mov    %eax,(%esp)
082fcc2f +0x2a61:  call   082fca94 <+0x28c6>
082fcc34 +0x2a66:  mov    %eax,(%ebx)
082fcc36 +0x2a68:  mov    0xc(%ebp),%eax
082fcc39 +0x2a6b:  mov    %eax,(%esp)
082fcc3c +0x2a6e:  call   082fcbc7 <+0x29f9>
082fcc41 +0x2a73:  mov    (%eax),%eax
082fcc43 +0x2a75:  mov    %eax,-0xc(%ebp)
082fcc46 +0x2a78:  mov    0x8(%ebp),%eax
082fcc49 +0x2a7b:  mov    0x18(%eax),%edx
082fcc4c +0x2a7e:  mov    0x8(%ebp),%eax
082fcc4f +0x2a81:  lea    -0xc(%ebp),%ecx
082fcc52 +0x2a84:  mov    %ecx,0x8(%esp)
082fcc56 +0x2a88:  mov    %edx,0x4(%esp)
082fcc5a +0x2a8c:  mov    %eax,(%esp)
082fcc5d +0x2a8f:  call   082fcbd0 <+0x2a02>
082fcc62 +0x2a94:  mov    0x8(%ebp),%eax
082fcc65 +0x2a97:  mov    0x24(%eax),%eax
082fcc68 +0x2a9a:  lea    0x4(%eax),%edx
082fcc6b +0x2a9d:  mov    0x8(%ebp),%eax
082fcc6e +0x2aa0:  add    $0x18,%eax
082fcc71 +0x2aa3:  mov    %edx,0x4(%esp)
082fcc75 +0x2aa7:  mov    %eax,(%esp)
082fcc78 +0x2aaa:  call   082fc6ec <+0x251e>
082fcc7d +0x2aaf:  mov    0x8(%ebp),%eax
082fcc80 +0x2ab2:  mov    0x1c(%eax),%edx
082fcc83 +0x2ab5:  mov    0x8(%ebp),%eax
082fcc86 +0x2ab8:  mov    %edx,0x18(%eax)
082fcc89 +0x2abb:  add    $0x24,%esp
082fcc8c +0x2abe:  pop    %ebx
082fcc8d +0x2abf:  pop    %ebp
082fcc8e +0x2ac0:  ret
082fcc8f +0x2ac1:  nop
082fcc90 +0x2ac2:  push   %ebp
082fcc91 +0x2ac3:  mov    %esp,%ebp
082fcc93 +0x2ac5:  sub    $0x18,%esp
082fcc96 +0x2ac8:  mov    0x8(%ebp),%eax
082fcc99 +0x2acb:  mov    %eax,(%esp)
082fcc9c +0x2ace:  call   082fcfa0 <+0x2dd2>
082fcca1 +0x2ad3:  cmp    0xc(%ebp),%eax
082fcca4 +0x2ad6:  setb   %al
082fcca7 +0x2ad9:  movzbl %al,%eax
082fccaa +0x2adc:  test   %eax,%eax
082fccac +0x2ade:  setne  %al
082fccaf +0x2ae1:  test   %al,%al
082fccb1 +0x2ae3:  je     082fccb8 <+0x2aea>
082fccb3 +0x2ae5:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082fccb8 +0x2aea:  mov    0xc(%ebp),%edx
082fccbb +0x2aed:  mov    %edx,%eax
082fccbd +0x2aef:  add    %eax,%eax
082fccbf +0x2af1:  add    %edx,%eax
082fccc1 +0x2af3:  shl    $0x3,%eax
082fccc4 +0x2af6:  mov    %eax,(%esp)
082fccc7 +0x2af9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082fcccc +0x2afe:  leave
082fcccd +0x2aff:  ret
082fccce +0x2b00:  push   %ebp
082fcccf +0x2b01:  mov    %esp,%ebp
082fccd1 +0x2b03:  sub    $0x18,%esp
082fccd4 +0x2b06:  mov    0x8(%ebp),%eax
082fccd7 +0x2b09:  movl   $0x0,(%eax)
082fccdd +0x2b0f:  mov    0x8(%ebp),%eax
082fcce0 +0x2b12:  movl   $0x0,0x4(%eax)
082fcce7 +0x2b19:  mov    0x8(%ebp),%eax
082fccea +0x2b1c:  movl   $0x0,0x8(%eax)
082fccf1 +0x2b23:  mov    0x8(%ebp),%eax
082fccf4 +0x2b26:  movl   $0x0,0xc(%eax)
082fccfb +0x2b2d:  mov    0xc(%ebp),%eax
082fccfe +0x2b30:  mov    %eax,(%esp)
082fcd01 +0x2b33:  call   082fc9f5 <+0x2827>
082fcd06 +0x2b38:  mov    0x8(%ebp),%ecx
082fcd09 +0x2b3b:  mov    0x4(%eax),%edx
082fcd0c +0x2b3e:  mov    (%eax),%eax
082fcd0e +0x2b40:  mov    %eax,0x10(%ecx)
082fcd11 +0x2b43:  mov    %edx,0x14(%ecx)
082fcd14 +0x2b46:  leave
082fcd15 +0x2b47:  ret
082fcd16 +0x2b48:  push   %ebp
082fcd17 +0x2b49:  mov    %esp,%ebp
082fcd19 +0x2b4b:  push   %ebx
082fcd1a +0x2b4c:  sub    $0x44,%esp
082fcd1d +0x2b4f:  mov    0x10(%ebp),%eax
082fcd20 +0x2b52:  mov    %al,-0x2c(%ebp)
082fcd23 +0x2b55:  mov    0x8(%ebp),%eax
082fcd26 +0x2b58:  mov    0x24(%eax),%eax
082fcd29 +0x2b5b:  mov    %eax,%edx
082fcd2b +0x2b5d:  mov    0x8(%ebp),%eax
082fcd2e +0x2b60:  mov    0x14(%eax),%eax
082fcd31 +0x2b63:  mov    %edx,%ecx
082fcd33 +0x2b65:  sub    %eax,%ecx
082fcd35 +0x2b67:  mov    %ecx,%eax
082fcd37 +0x2b69:  sar    $0x2,%eax
082fcd3a +0x2b6c:  add    $0x1,%eax
082fcd3d +0x2b6f:  mov    %eax,-0x1c(%ebp)
082fcd40 +0x2b72:  mov    0xc(%ebp),%eax
082fcd43 +0x2b75:  add    -0x1c(%ebp),%eax
082fcd46 +0x2b78:  mov    %eax,-0x18(%ebp)
082fcd49 +0x2b7b:  mov    0x8(%ebp),%eax
082fcd4c +0x2b7e:  mov    0x4(%eax),%eax
082fcd4f +0x2b81:  mov    -0x18(%ebp),%edx
082fcd52 +0x2b84:  add    %edx,%edx
082fcd54 +0x2b86:  cmp    %edx,%eax
082fcd56 +0x2b88:  jbe    082fcdf0 <+0x2c22>
082fcd5c +0x2b8e:  mov    0x8(%ebp),%eax
082fcd5f +0x2b91:  mov    (%eax),%edx
082fcd61 +0x2b93:  mov    0x8(%ebp),%eax
082fcd64 +0x2b96:  mov    0x4(%eax),%eax
082fcd67 +0x2b99:  sub    -0x18(%ebp),%eax
082fcd6a +0x2b9c:  shr    %eax
082fcd6c +0x2b9e:  lea    0x0(,%eax,4),%ecx
082fcd73 +0x2ba5:  cmpb   $0x0,-0x2c(%ebp)
082fcd77 +0x2ba9:  je     082fcd81 <+0x2bb3>
082fcd79 +0x2bab:  mov    0xc(%ebp),%eax
082fcd7c +0x2bae:  shl    $0x2,%eax
082fcd7f +0x2bb1:  jmp    082fcd86 <+0x2bb8>
082fcd81 +0x2bb3:  mov    $0x0,%eax
082fcd86 +0x2bb8:  lea    (%ecx,%eax,1),%eax
082fcd89 +0x2bbb:  lea    (%edx,%eax,1),%eax
082fcd8c +0x2bbe:  mov    %eax,-0x14(%ebp)
082fcd8f +0x2bc1:  mov    0x8(%ebp),%eax
082fcd92 +0x2bc4:  mov    0x14(%eax),%eax
082fcd95 +0x2bc7:  cmp    -0x14(%ebp),%eax
082fcd98 +0x2bca:  jbe    082fcdc1 <+0x2bf3>
082fcd9a +0x2bcc:  mov    0x8(%ebp),%eax
082fcd9d +0x2bcf:  mov    0x24(%eax),%eax
082fcda0 +0x2bd2:  lea    0x4(%eax),%ecx
082fcda3 +0x2bd5:  mov    0x8(%ebp),%eax
082fcda6 +0x2bd8:  mov    0x14(%eax),%eax
082fcda9 +0x2bdb:  mov    -0x14(%ebp),%edx
082fcdac +0x2bde:  mov    %edx,0x8(%esp)
082fcdb0 +0x2be2:  mov    %ecx,0x4(%esp)
082fcdb4 +0x2be6:  mov    %eax,(%esp)
082fcdb7 +0x2be9:  call   082fcfaa <+0x2ddc>
082fcdbc +0x2bee:  jmp    082fcead <+0x2cdf>
082fcdc1 +0x2bf3:  mov    -0x1c(%ebp),%eax
082fcdc4 +0x2bf6:  shl    $0x2,%eax
082fcdc7 +0x2bf9:  mov    %eax,%edx
082fcdc9 +0x2bfb:  add    -0x14(%ebp),%edx
082fcdcc +0x2bfe:  mov    0x8(%ebp),%eax
082fcdcf +0x2c01:  mov    0x24(%eax),%eax
082fcdd2 +0x2c04:  lea    0x4(%eax),%ecx
082fcdd5 +0x2c07:  mov    0x8(%ebp),%eax
082fcdd8 +0x2c0a:  mov    0x14(%eax),%eax
082fcddb +0x2c0d:  mov    %edx,0x8(%esp)
082fcddf +0x2c11:  mov    %ecx,0x4(%esp)
082fcde3 +0x2c15:  mov    %eax,(%esp)
082fcde6 +0x2c18:  call   082fcfe2 <+0x2e14>
082fcdeb +0x2c1d:  jmp    082fcead <+0x2cdf>
082fcdf0 +0x2c22:  mov    0x8(%ebp),%eax
082fcdf3 +0x2c25:  mov    0x4(%eax),%ebx
082fcdf6 +0x2c28:  mov    0x8(%ebp),%eax
082fcdf9 +0x2c2b:  lea    0x4(%eax),%edx
082fcdfc +0x2c2e:  lea    0xc(%ebp),%eax
082fcdff +0x2c31:  mov    %eax,0x4(%esp)
082fce03 +0x2c35:  mov    %edx,(%esp)
082fce06 +0x2c38:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
082fce0b +0x2c3d:  mov    (%eax),%eax
082fce0d +0x2c3f:  lea    (%ebx,%eax,1),%eax
082fce10 +0x2c42:  add    $0x2,%eax
082fce13 +0x2c45:  mov    %eax,-0x10(%ebp)
082fce16 +0x2c48:  mov    0x8(%ebp),%eax
082fce19 +0x2c4b:  mov    -0x10(%ebp),%edx
082fce1c +0x2c4e:  mov    %edx,0x4(%esp)
082fce20 +0x2c52:  mov    %eax,(%esp)
082fce23 +0x2c55:  call   082fc60a <+0x243c>
082fce28 +0x2c5a:  mov    %eax,-0xc(%ebp)
082fce2b +0x2c5d:  mov    -0x18(%ebp),%eax
082fce2e +0x2c60:  mov    -0x10(%ebp),%edx
082fce31 +0x2c63:  mov    %edx,%ecx
082fce33 +0x2c65:  sub    %eax,%ecx
082fce35 +0x2c67:  mov    %ecx,%eax
082fce37 +0x2c69:  shr    %eax
082fce39 +0x2c6b:  lea    0x0(,%eax,4),%edx
082fce40 +0x2c72:  cmpb   $0x0,-0x2c(%ebp)
082fce44 +0x2c76:  je     082fce4e <+0x2c80>
082fce46 +0x2c78:  mov    0xc(%ebp),%eax
082fce49 +0x2c7b:  shl    $0x2,%eax
082fce4c +0x2c7e:  jmp    082fce53 <+0x2c85>
082fce4e +0x2c80:  mov    $0x0,%eax
082fce53 +0x2c85:  lea    (%edx,%eax,1),%eax
082fce56 +0x2c88:  add    -0xc(%ebp),%eax
082fce59 +0x2c8b:  mov    %eax,-0x14(%ebp)
082fce5c +0x2c8e:  mov    0x8(%ebp),%eax
082fce5f +0x2c91:  mov    0x24(%eax),%eax
082fce62 +0x2c94:  lea    0x4(%eax),%ecx
082fce65 +0x2c97:  mov    0x8(%ebp),%eax
082fce68 +0x2c9a:  mov    0x14(%eax),%eax
082fce6b +0x2c9d:  mov    -0x14(%ebp),%edx
082fce6e +0x2ca0:  mov    %edx,0x8(%esp)
082fce72 +0x2ca4:  mov    %ecx,0x4(%esp)
082fce76 +0x2ca8:  mov    %eax,(%esp)
082fce79 +0x2cab:  call   082fcfaa <+0x2ddc>
082fce7e +0x2cb0:  mov    0x8(%ebp),%eax
082fce81 +0x2cb3:  mov    0x4(%eax),%ecx
082fce84 +0x2cb6:  mov    0x8(%ebp),%eax
082fce87 +0x2cb9:  mov    (%eax),%edx
082fce89 +0x2cbb:  mov    0x8(%ebp),%eax
082fce8c +0x2cbe:  mov    %ecx,0x8(%esp)
082fce90 +0x2cc2:  mov    %edx,0x4(%esp)
082fce94 +0x2cc6:  mov    %eax,(%esp)
082fce97 +0x2cc9:  call   082fbf76 <+0x1da8>
082fce9c +0x2cce:  mov    0x8(%ebp),%eax
082fce9f +0x2cd1:  mov    -0xc(%ebp),%edx
082fcea2 +0x2cd4:  mov    %edx,(%eax)
082fcea4 +0x2cd6:  mov    0x8(%ebp),%eax
082fcea7 +0x2cd9:  mov    -0x10(%ebp),%edx
082fceaa +0x2cdc:  mov    %edx,0x4(%eax)
082fcead +0x2cdf:  mov    0x8(%ebp),%eax
082fceb0 +0x2ce2:  lea    0x8(%eax),%edx
082fceb3 +0x2ce5:  mov    -0x14(%ebp),%eax
082fceb6 +0x2ce8:  mov    %eax,0x4(%esp)
082fceba +0x2cec:  mov    %edx,(%esp)
082fcebd +0x2cef:  call   082fc6ec <+0x251e>
082fcec2 +0x2cf4:  mov    -0x1c(%ebp),%eax
082fcec5 +0x2cf7:  sub    $0x1,%eax
082fcec8 +0x2cfa:  shl    $0x2,%eax
082fcecb +0x2cfd:  add    -0x14(%ebp),%eax
082fcece +0x2d00:  mov    0x8(%ebp),%edx
082fced1 +0x2d03:  add    $0x18,%edx
082fced4 +0x2d06:  mov    %eax,0x4(%esp)
082fced8 +0x2d0a:  mov    %edx,(%esp)
082fcedb +0x2d0d:  call   082fc6ec <+0x251e>
082fcee0 +0x2d12:  add    $0x44,%esp
082fcee3 +0x2d15:  pop    %ebx
082fcee4 +0x2d16:  pop    %ebp
082fcee5 +0x2d17:  ret
082fcee6 +0x2d18:  push   %ebp
082fcee7 +0x2d19:  mov    %esp,%ebp
082fcee9 +0x2d1b:  sub    $0x18,%esp
082fceec +0x2d1e:  mov    0x8(%ebp),%eax
082fceef +0x2d21:  mov    %eax,(%esp)
082fcef2 +0x2d24:  call   082fd01a <+0x2e4c>
082fcef7 +0x2d29:  cmp    0xc(%ebp),%eax
082fcefa +0x2d2c:  setb   %al
082fcefd +0x2d2f:  movzbl %al,%eax
082fcf00 +0x2d32:  test   %eax,%eax
082fcf02 +0x2d34:  setne  %al
082fcf05 +0x2d37:  test   %al,%al
082fcf07 +0x2d39:  je     082fcf0e <+0x2d40>
082fcf09 +0x2d3b:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082fcf0e +0x2d40:  mov    0xc(%ebp),%eax
082fcf11 +0x2d43:  shl    $0x2,%eax
082fcf14 +0x2d46:  mov    %eax,(%esp)
082fcf17 +0x2d49:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082fcf1c +0x2d4e:  leave
082fcf1d +0x2d4f:  ret
082fcf1e +0x2d50:  push   %ebp
082fcf1f +0x2d51:  mov    %esp,%ebp
082fcf21 +0x2d53:  mov    $0x3fffffff,%eax
082fcf26 +0x2d58:  pop    %ebp
082fcf27 +0x2d59:  ret
082fcf28 +0x2d5a:  push   %ebp
082fcf29 +0x2d5b:  mov    %esp,%ebp
082fcf2b +0x2d5d:  pop    %ebp
082fcf2c +0x2d5e:  ret
082fcf2d +0x2d5f:  nop
082fcf2e +0x2d60:  push   %ebp
082fcf2f +0x2d61:  mov    %esp,%ebp
082fcf31 +0x2d63:  pop    %ebp
082fcf32 +0x2d64:  ret
082fcf33 +0x2d65:  nop
082fcf34 +0x2d66:  push   %ebp
082fcf35 +0x2d67:  mov    %esp,%ebp
082fcf37 +0x2d69:  sub    $0x18,%esp
082fcf3a +0x2d6c:  mov    0x8(%ebp),%eax
082fcf3d +0x2d6f:  mov    %eax,(%esp)
082fcf40 +0x2d72:  call   082fd024 <+0x2e56>
082fcf45 +0x2d77:  cmp    0xc(%ebp),%eax
082fcf48 +0x2d7a:  setb   %al
082fcf4b +0x2d7d:  movzbl %al,%eax
082fcf4e +0x2d80:  test   %eax,%eax
082fcf50 +0x2d82:  setne  %al
082fcf53 +0x2d85:  test   %al,%al
082fcf55 +0x2d87:  je     082fcf5c <+0x2d8e>
082fcf57 +0x2d89:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082fcf5c +0x2d8e:  mov    0xc(%ebp),%edx
082fcf5f +0x2d91:  mov    %edx,%eax
082fcf61 +0x2d93:  add    %eax,%eax
082fcf63 +0x2d95:  add    %edx,%eax
082fcf65 +0x2d97:  shl    $0x2,%eax
082fcf68 +0x2d9a:  mov    %eax,(%esp)
082fcf6b +0x2d9d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082fcf70 +0x2da2:  leave
082fcf71 +0x2da3:  ret
082fcf72 +0x2da4:  push   %ebp
082fcf73 +0x2da5:  mov    %esp,%ebp
082fcf75 +0x2da7:  sub    $0x18,%esp
082fcf78 +0x2daa:  mov    0x8(%ebp),%eax
082fcf7b +0x2dad:  movl   $0x0,(%eax)
082fcf81 +0x2db3:  mov    0x8(%ebp),%eax
082fcf84 +0x2db6:  movl   $0x0,0x4(%eax)
082fcf8b +0x2dbd:  mov    0xc(%ebp),%eax
082fcf8e +0x2dc0:  mov    %eax,(%esp)
082fcf91 +0x2dc3:  call   082fc8cd <+0x26ff>
082fcf96 +0x2dc8:  mov    (%eax),%edx
082fcf98 +0x2dca:  mov    0x8(%ebp),%eax
082fcf9b +0x2dcd:  mov    %edx,0x8(%eax)
082fcf9e +0x2dd0:  leave
082fcf9f +0x2dd1:  ret
082fcfa0 +0x2dd2:  push   %ebp
082fcfa1 +0x2dd3:  mov    %esp,%ebp
082fcfa3 +0x2dd5:  mov    $0xaaaaaaa,%eax
082fcfa8 +0x2dda:  pop    %ebp
082fcfa9 +0x2ddb:  ret
082fcfaa +0x2ddc:  push   %ebp
082fcfab +0x2ddd:  mov    %esp,%ebp
082fcfad +0x2ddf:  push   %ebx
082fcfae +0x2de0:  sub    $0x14,%esp
082fcfb1 +0x2de3:  mov    0xc(%ebp),%eax
082fcfb4 +0x2de6:  mov    %eax,(%esp)
082fcfb7 +0x2de9:  call   082fd02e <+0x2e60>
082fcfbc +0x2dee:  mov    %eax,%ebx
082fcfbe +0x2df0:  mov    0x8(%ebp),%eax
082fcfc1 +0x2df3:  mov    %eax,(%esp)
082fcfc4 +0x2df6:  call   082fd02e <+0x2e60>
082fcfc9 +0x2dfb:  mov    0x10(%ebp),%edx
082fcfcc +0x2dfe:  mov    %edx,0x8(%esp)
082fcfd0 +0x2e02:  mov    %ebx,0x4(%esp)
082fcfd4 +0x2e06:  mov    %eax,(%esp)
082fcfd7 +0x2e09:  call   082fd036 <+0x2e68>
082fcfdc +0x2e0e:  add    $0x14,%esp
082fcfdf +0x2e11:  pop    %ebx
082fcfe0 +0x2e12:  pop    %ebp
082fcfe1 +0x2e13:  ret
082fcfe2 +0x2e14:  push   %ebp
082fcfe3 +0x2e15:  mov    %esp,%ebp
082fcfe5 +0x2e17:  push   %ebx
082fcfe6 +0x2e18:  sub    $0x14,%esp
082fcfe9 +0x2e1b:  mov    0xc(%ebp),%eax
082fcfec +0x2e1e:  mov    %eax,(%esp)
082fcfef +0x2e21:  call   082fd02e <+0x2e60>
082fcff4 +0x2e26:  mov    %eax,%ebx
082fcff6 +0x2e28:  mov    0x8(%ebp),%eax
082fcff9 +0x2e2b:  mov    %eax,(%esp)
082fcffc +0x2e2e:  call   082fd02e <+0x2e60>
082fd001 +0x2e33:  mov    0x10(%ebp),%edx
082fd004 +0x2e36:  mov    %edx,0x8(%esp)
082fd008 +0x2e3a:  mov    %ebx,0x4(%esp)
082fd00c +0x2e3e:  mov    %eax,(%esp)
082fd00f +0x2e41:  call   082fd07a <+0x2eac>
082fd014 +0x2e46:  add    $0x14,%esp
082fd017 +0x2e49:  pop    %ebx
082fd018 +0x2e4a:  pop    %ebp
082fd019 +0x2e4b:  ret
082fd01a +0x2e4c:  push   %ebp
082fd01b +0x2e4d:  mov    %esp,%ebp
082fd01d +0x2e4f:  mov    $0x3fffffff,%eax
082fd022 +0x2e54:  pop    %ebp
082fd023 +0x2e55:  ret
082fd024 +0x2e56:  push   %ebp
082fd025 +0x2e57:  mov    %esp,%ebp
082fd027 +0x2e59:  mov    $0x15555555,%eax
082fd02c +0x2e5e:  pop    %ebp
082fd02d +0x2e5f:  ret
082fd02e +0x2e60:  push   %ebp
082fd02f +0x2e61:  mov    %esp,%ebp
082fd031 +0x2e63:  mov    0x8(%ebp),%eax
082fd034 +0x2e66:  pop    %ebp
082fd035 +0x2e67:  ret
082fd036 +0x2e68:  push   %ebp
082fd037 +0x2e69:  mov    %esp,%ebp
082fd039 +0x2e6b:  push   %esi
082fd03a +0x2e6c:  push   %ebx
082fd03b +0x2e6d:  sub    $0x10,%esp
082fd03e +0x2e70:  mov    0x10(%ebp),%eax
082fd041 +0x2e73:  mov    %eax,(%esp)
082fd044 +0x2e76:  call   082fd0be <+0x2ef0>
082fd049 +0x2e7b:  mov    %eax,%esi
082fd04b +0x2e7d:  mov    0xc(%ebp),%eax
082fd04e +0x2e80:  mov    %eax,(%esp)
082fd051 +0x2e83:  call   082fd0be <+0x2ef0>
082fd056 +0x2e88:  mov    %eax,%ebx
082fd058 +0x2e8a:  mov    0x8(%ebp),%eax
082fd05b +0x2e8d:  mov    %eax,(%esp)
082fd05e +0x2e90:  call   082fd0be <+0x2ef0>
082fd063 +0x2e95:  mov    %esi,0x8(%esp)
082fd067 +0x2e99:  mov    %ebx,0x4(%esp)
082fd06b +0x2e9d:  mov    %eax,(%esp)
082fd06e +0x2ea0:  call   082fd0c6 <+0x2ef8>
082fd073 +0x2ea5:  add    $0x10,%esp
082fd076 +0x2ea8:  pop    %ebx
082fd077 +0x2ea9:  pop    %esi
082fd078 +0x2eaa:  pop    %ebp
082fd079 +0x2eab:  ret
082fd07a +0x2eac:  push   %ebp
082fd07b +0x2ead:  mov    %esp,%ebp
082fd07d +0x2eaf:  push   %esi
082fd07e +0x2eb0:  push   %ebx
082fd07f +0x2eb1:  sub    $0x10,%esp
082fd082 +0x2eb4:  mov    0x10(%ebp),%eax
082fd085 +0x2eb7:  mov    %eax,(%esp)
082fd088 +0x2eba:  call   082fd0be <+0x2ef0>
082fd08d +0x2ebf:  mov    %eax,%esi
082fd08f +0x2ec1:  mov    0xc(%ebp),%eax
082fd092 +0x2ec4:  mov    %eax,(%esp)
082fd095 +0x2ec7:  call   082fd0be <+0x2ef0>
082fd09a +0x2ecc:  mov    %eax,%ebx
082fd09c +0x2ece:  mov    0x8(%ebp),%eax
082fd09f +0x2ed1:  mov    %eax,(%esp)
082fd0a2 +0x2ed4:  call   082fd0be <+0x2ef0>
082fd0a7 +0x2ed9:  mov    %esi,0x8(%esp)
082fd0ab +0x2edd:  mov    %ebx,0x4(%esp)
082fd0af +0x2ee1:  mov    %eax,(%esp)
082fd0b2 +0x2ee4:  call   082fd0eb <+0x2f1d>
082fd0b7 +0x2ee9:  add    $0x10,%esp
082fd0ba +0x2eec:  pop    %ebx
082fd0bb +0x2eed:  pop    %esi
082fd0bc +0x2eee:  pop    %ebp
082fd0bd +0x2eef:  ret
082fd0be +0x2ef0:  push   %ebp
082fd0bf +0x2ef1:  mov    %esp,%ebp
082fd0c1 +0x2ef3:  mov    0x8(%ebp),%eax
082fd0c4 +0x2ef6:  pop    %ebp
082fd0c5 +0x2ef7:  ret
082fd0c6 +0x2ef8:  push   %ebp
082fd0c7 +0x2ef9:  mov    %esp,%ebp
082fd0c9 +0x2efb:  sub    $0x28,%esp
082fd0cc +0x2efe:  movb   $0x1,-0x9(%ebp)
082fd0d0 +0x2f02:  mov    0x10(%ebp),%eax
082fd0d3 +0x2f05:  mov    %eax,0x8(%esp)
082fd0d7 +0x2f09:  mov    0xc(%ebp),%eax
082fd0da +0x2f0c:  mov    %eax,0x4(%esp)
082fd0de +0x2f10:  mov    0x8(%ebp),%eax
082fd0e1 +0x2f13:  mov    %eax,(%esp)
082fd0e4 +0x2f16:  call   082fd110 <+0x2f42>
082fd0e9 +0x2f1b:  leave
082fd0ea +0x2f1c:  ret
082fd0eb +0x2f1d:  push   %ebp
082fd0ec +0x2f1e:  mov    %esp,%ebp
082fd0ee +0x2f20:  sub    $0x28,%esp
082fd0f1 +0x2f23:  movb   $0x1,-0x9(%ebp)
082fd0f5 +0x2f27:  mov    0x10(%ebp),%eax
082fd0f8 +0x2f2a:  mov    %eax,0x8(%esp)
082fd0fc +0x2f2e:  mov    0xc(%ebp),%eax
082fd0ff +0x2f31:  mov    %eax,0x4(%esp)
082fd103 +0x2f35:  mov    0x8(%ebp),%eax
082fd106 +0x2f38:  mov    %eax,(%esp)
082fd109 +0x2f3b:  call   082fd155 <+0x2f87>
082fd10e +0x2f40:  leave
082fd10f +0x2f41:  ret
082fd110 +0x2f42:  push   %ebp
082fd111 +0x2f43:  mov    %esp,%ebp
082fd113 +0x2f45:  sub    $0x18,%esp
082fd116 +0x2f48:  mov    0xc(%ebp),%edx
082fd119 +0x2f4b:  mov    0x8(%ebp),%eax
082fd11c +0x2f4e:  mov    %edx,%ecx
082fd11e +0x2f50:  sub    %eax,%ecx
082fd120 +0x2f52:  mov    %ecx,%eax
082fd122 +0x2f54:  sar    $0x2,%eax
082fd125 +0x2f57:  shl    $0x2,%eax
082fd128 +0x2f5a:  mov    %eax,0x8(%esp)
082fd12c +0x2f5e:  mov    0x8(%ebp),%eax
082fd12f +0x2f61:  mov    %eax,0x4(%esp)
082fd133 +0x2f65:  mov    0x10(%ebp),%eax
082fd136 +0x2f68:  mov    %eax,(%esp)
082fd139 +0x2f6b:  call   0807d880 <_init+0x178>
082fd13e +0x2f70:  mov    0xc(%ebp),%edx
082fd141 +0x2f73:  mov    0x8(%ebp),%eax
082fd144 +0x2f76:  mov    %edx,%ecx
082fd146 +0x2f78:  sub    %eax,%ecx
082fd148 +0x2f7a:  mov    %ecx,%eax
082fd14a +0x2f7c:  sar    $0x2,%eax
082fd14d +0x2f7f:  shl    $0x2,%eax
082fd150 +0x2f82:  add    0x10(%ebp),%eax
082fd153 +0x2f85:  leave
082fd154 +0x2f86:  ret
082fd155 +0x2f87:  push   %ebp
082fd156 +0x2f88:  mov    %esp,%ebp
082fd158 +0x2f8a:  sub    $0x28,%esp
082fd15b +0x2f8d:  mov    0xc(%ebp),%edx
082fd15e +0x2f90:  mov    0x8(%ebp),%eax
082fd161 +0x2f93:  mov    %edx,%ecx
082fd163 +0x2f95:  sub    %eax,%ecx
082fd165 +0x2f97:  mov    %ecx,%eax
082fd167 +0x2f99:  sar    $0x2,%eax
082fd16a +0x2f9c:  mov    %eax,-0xc(%ebp)
082fd16d +0x2f9f:  mov    -0xc(%ebp),%eax
082fd170 +0x2fa2:  lea    0x0(,%eax,4),%edx
082fd177 +0x2fa9:  mov    -0xc(%ebp),%eax
082fd17a +0x2fac:  shl    $0x2,%eax
082fd17d +0x2faf:  neg    %eax
082fd17f +0x2fb1:  add    0x10(%ebp),%eax
082fd182 +0x2fb4:  mov    %edx,0x8(%esp)
082fd186 +0x2fb8:  mov    0x8(%ebp),%edx
082fd189 +0x2fbb:  mov    %edx,0x4(%esp)
082fd18d +0x2fbf:  mov    %eax,(%esp)
082fd190 +0x2fc2:  call   0807d880 <_init+0x178>
082fd195 +0x2fc7:  mov    -0xc(%ebp),%eax
082fd198 +0x2fca:  shl    $0x2,%eax
082fd19b +0x2fcd:  neg    %eax
082fd19d +0x2fcf:  add    0x10(%ebp),%eax
082fd1a0 +0x2fd2:  leave
082fd1a1 +0x2fd3:  ret
082fd1a2 +0x2fd4:  push   %ebp
082fd1a3 +0x2fd5:  mov    %esp,%ebp
082fd1a5 +0x2fd7:  push   %esi
082fd1a6 +0x2fd8:  push   %ebx
082fd1a7 +0x2fd9:  sub    $0x20,%esp
082fd1aa +0x2fdc:  mov    0x8(%ebp),%eax
082fd1ad +0x2fdf:  lea    0x30(%eax),%edx
082fd1b0 +0x2fe2:  lea    -0x10(%ebp),%eax
082fd1b3 +0x2fe5:  mov    %edx,0x4(%esp)
082fd1b7 +0x2fe9:  mov    %eax,(%esp)
082fd1ba +0x2fec:  call   082fd2e0 <+0x3112>
082fd1bf +0x2ff1:  sub    $0x4,%esp
082fd1c2 +0x2ff4:  mov    0x8(%ebp),%eax
082fd1c5 +0x2ff7:  lea    0x30(%eax),%edx
082fd1c8 +0x2ffa:  lea    -0x14(%ebp),%eax
082fd1cb +0x2ffd:  mov    %edx,0x4(%esp)
082fd1cf +0x3001:  mov    %eax,(%esp)
082fd1d2 +0x3004:  call   082fc0ec <+0x1f1e>
082fd1d7 +0x3009:  sub    $0x4,%esp
082fd1da +0x300c:  jmp    082fd22d <+0x305f>
082fd1dc +0x300e:  lea    -0x10(%ebp),%eax
082fd1df +0x3011:  mov    %eax,(%esp)
082fd1e2 +0x3014:  call   082fd32e <+0x3160>
082fd1e7 +0x3019:  mov    (%eax),%eax
082fd1e9 +0x301b:  mov    %eax,-0xc(%ebp)
082fd1ec +0x301e:  cmpl   $0x0,-0xc(%ebp)
082fd1f0 +0x3022:  je     082fd222 <+0x3054>
082fd1f2 +0x3024:  mov    -0xc(%ebp),%eax
082fd1f5 +0x3027:  sub    $0x4,%eax
082fd1f8 +0x302a:  mov    (%eax),%eax
082fd1fa +0x302c:  imul   $0x4c,%eax,%eax
082fd1fd +0x302f:  mov    %eax,%ebx
082fd1ff +0x3031:  add    -0xc(%ebp),%ebx
082fd202 +0x3034:  cmp    -0xc(%ebp),%ebx
082fd205 +0x3037:  je     082fd214 <+0x3046>
082fd207 +0x3039:  sub    $0x4c,%ebx
082fd20a +0x303c:  mov    %ebx,(%esp)
082fd20d +0x303f:  call   082fac3a <+0xa6c>
082fd212 +0x3044:  jmp    082fd202 <+0x3034>
082fd214 +0x3046:  mov    -0xc(%ebp),%eax
082fd217 +0x3049:  sub    $0x4,%eax
082fd21a +0x304c:  mov    %eax,(%esp)
082fd21d +0x304f:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
082fd222 +0x3054:  lea    -0x10(%ebp),%eax
082fd225 +0x3057:  mov    %eax,(%esp)
082fd228 +0x305a:  call   082fd31a <+0x314c>
082fd22d +0x305f:  lea    -0x14(%ebp),%eax
082fd230 +0x3062:  mov    %eax,0x4(%esp)
082fd234 +0x3066:  lea    -0x10(%ebp),%eax
082fd237 +0x3069:  mov    %eax,(%esp)
082fd23a +0x306c:  call   082fd306 <+0x3138>
082fd23f +0x3071:  test   %al,%al
082fd241 +0x3073:  jne    082fd1dc <+0x300e>
082fd243 +0x3075:  mov    0x8(%ebp),%eax
082fd246 +0x3078:  add    $0x30,%eax
082fd249 +0x307b:  mov    %eax,(%esp)
082fd24c +0x307e:  call   082fac1c <+0xa4e>
082fd251 +0x3083:  mov    0x8(%ebp),%eax
082fd254 +0x3086:  movl   $0x0,(%eax)
082fd25a +0x308c:  mov    0x8(%ebp),%eax
082fd25d +0x308f:  add    $0x44,%eax
082fd260 +0x3092:  mov    %eax,(%esp)
082fd263 +0x3095:  call   081013d8 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x3fa>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x3fa
082fd268 +0x309a:  jmp    082fd29a <+0x30cc>
082fd26a +0x309c:  mov    %edx,%ebx
082fd26c +0x309e:  mov    %eax,%esi
082fd26e +0x30a0:  mov    0x8(%ebp),%eax
082fd271 +0x30a3:  add    $0x44,%eax
082fd274 +0x30a6:  mov    %eax,(%esp)
082fd277 +0x30a9:  call   081013d8 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x3fa>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x3fa
082fd27c +0x30ae:  mov    %esi,%eax
082fd27e +0x30b0:  mov    %ebx,%edx
082fd280 +0x30b2:  jmp    082fd282 <+0x30b4>
082fd282 +0x30b4:  mov    %edx,%ebx
082fd284 +0x30b6:  mov    %eax,%esi
082fd286 +0x30b8:  mov    0x8(%ebp),%eax
082fd289 +0x30bb:  add    $0x30,%eax
082fd28c +0x30be:  mov    %eax,(%esp)
082fd28f +0x30c1:  call   082fa3e8 <+0x21a>
082fd294 +0x30c6:  mov    %esi,%eax
082fd296 +0x30c8:  mov    %ebx,%edx
082fd298 +0x30ca:  jmp    082fd2aa <+0x30dc>
082fd29a +0x30cc:  mov    0x8(%ebp),%eax
082fd29d +0x30cf:  add    $0x30,%eax
082fd2a0 +0x30d2:  mov    %eax,(%esp)
082fd2a3 +0x30d5:  call   082fa3e8 <+0x21a>
082fd2a8 +0x30da:  jmp    082fd2c8 <+0x30fa>
082fd2aa +0x30dc:  mov    %edx,%ebx
082fd2ac +0x30de:  mov    %eax,%esi
082fd2ae +0x30e0:  mov    0x8(%ebp),%eax
082fd2b1 +0x30e3:  add    $0x8,%eax
082fd2b4 +0x30e6:  mov    %eax,(%esp)
082fd2b7 +0x30e9:  call   082fa3d4 <+0x206>
082fd2bc +0x30ee:  mov    %esi,%eax
082fd2be +0x30f0:  mov    %ebx,%edx
082fd2c0 +0x30f2:  mov    %eax,(%esp)
082fd2c3 +0x30f5:  call   08ae3750 <_Unwind_Resume>
082fd2c8 +0x30fa:  mov    0x8(%ebp),%eax
082fd2cb +0x30fd:  add    $0x8,%eax
082fd2ce +0x3100:  mov    %eax,(%esp)
082fd2d1 +0x3103:  call   082fa3d4 <+0x206>
082fd2d6 +0x3108:  lea    -0x8(%ebp),%esp
082fd2d9 +0x310b:  add    $0x0,%esp
082fd2dc +0x310e:  pop    %ebx
082fd2dd +0x310f:  pop    %esi
082fd2de +0x3110:  pop    %ebp
082fd2df +0x3111:  ret
082fd2e0 +0x3112:  push   %ebp
082fd2e1 +0x3113:  mov    %esp,%ebp
082fd2e3 +0x3115:  push   %ebx
082fd2e4 +0x3116:  sub    $0x14,%esp
082fd2e7 +0x3119:  mov    0x8(%ebp),%ebx
082fd2ea +0x311c:  mov    0xc(%ebp),%eax
082fd2ed +0x311f:  mov    (%eax),%eax
082fd2ef +0x3121:  mov    %eax,0x4(%esp)
082fd2f3 +0x3125:  mov    %ebx,(%esp)
082fd2f6 +0x3128:  call   082fc8c0 <+0x26f2>
082fd2fb +0x312d:  mov    %ebx,%eax
082fd2fd +0x312f:  add    $0x14,%esp
082fd300 +0x3132:  pop    %ebx
082fd301 +0x3133:  pop    %ebp
082fd302 +0x3134:  ret    $0x4
082fd305 +0x3137:  nop
082fd306 +0x3138:  push   %ebp
082fd307 +0x3139:  mov    %esp,%ebp
082fd309 +0x313b:  mov    0x8(%ebp),%eax
082fd30c +0x313e:  mov    (%eax),%edx
082fd30e +0x3140:  mov    0xc(%ebp),%eax
082fd311 +0x3143:  mov    (%eax),%eax
082fd313 +0x3145:  cmp    %eax,%edx
082fd315 +0x3147:  setne  %al
082fd318 +0x314a:  pop    %ebp
082fd319 +0x314b:  ret
082fd31a +0x314c:  push   %ebp
082fd31b +0x314d:  mov    %esp,%ebp
082fd31d +0x314f:  mov    0x8(%ebp),%eax
082fd320 +0x3152:  mov    (%eax),%eax
082fd322 +0x3154:  mov    (%eax),%edx
082fd324 +0x3156:  mov    0x8(%ebp),%eax
082fd327 +0x3159:  mov    %edx,(%eax)
082fd329 +0x315b:  mov    0x8(%ebp),%eax
082fd32c +0x315e:  pop    %ebp
082fd32d +0x315f:  ret
082fd32e +0x3160:  push   %ebp
082fd32f +0x3161:  mov    %esp,%ebp
082fd331 +0x3163:  mov    0x8(%ebp),%eax
082fd334 +0x3166:  mov    (%eax),%eax
082fd336 +0x3168:  add    $0x8,%eax
082fd339 +0x316b:  pop    %ebp
082fd33a +0x316c:  ret
082fd33b +0x316d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x82fa1ce

/* WongWork::CAvatarItemMgr::m_AvatarItemPool */

void WongWork::CAvatarItemMgr::_GLOBAL__I_m_AvatarItemPool(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
