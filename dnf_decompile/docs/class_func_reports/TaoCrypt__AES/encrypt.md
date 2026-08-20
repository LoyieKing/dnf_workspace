# encrypt

`_ZNK8TaoCrypt3AES7encryptEPKhS2_Ph`

`TaoCrypt::AES::encrypt(unsigned char const*, unsigned char const*, unsigned char*) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AES` | `0x087a3340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a3340  _ZNK8TaoCrypt3AES7encryptEPKhS2_Ph
#           TaoCrypt::AES::encrypt(unsigned char const*, unsigned char const*, unsigned char*) const
# range [0x087a3340, 0x087a38d9]
087a3340 +0x000:  push   %ebp
087a3341 +0x001:  mov    %esp,%ebp
087a3343 +0x003:  push   %edi
087a3344 +0x004:  push   %esi
087a3345 +0x005:  push   %ebx
087a3346 +0x006:  sub    $0x34,%esp
087a3349 +0x009:  mov    0xc(%ebp),%edx
087a334c +0x00c:  mov    0x8(%ebp),%eax
087a334f +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
087a3354 +0x014:  add    $0xbc9844,%ebx
087a335a +0x01a:  mov    (%edx),%edi
087a335c +0x01c:  add    $0x3c,%eax
087a335f +0x01f:  mov    0x4(%edx),%esi
087a3362 +0x022:  mov    %eax,-0x34(%ebp)
087a3365 +0x025:  mov    %edi,%eax
087a3367 +0x027:  ror    $0x18,%edi
087a336a +0x02a:  mov    %esi,%ecx
087a336c +0x02c:  and    $0xff00ff,%edi
087a3372 +0x032:  ror    $0x8,%eax
087a3375 +0x035:  mov    %edi,-0x18(%ebp)
087a3378 +0x038:  and    $0xff00ff00,%eax
087a337d +0x03d:  mov    0x8(%edx),%edi
087a3380 +0x040:  or     %eax,-0x18(%ebp)
087a3383 +0x043:  mov    0x8(%ebp),%eax
087a3386 +0x046:  ror    $0x18,%esi
087a3389 +0x049:  mov    %esi,-0x14(%ebp)
087a338c +0x04c:  ror    $0x8,%ecx
087a338f +0x04f:  andl   $0xff00ff,-0x14(%ebp)
087a3396 +0x056:  and    $0xff00ff00,%ecx
087a339c +0x05c:  or     %ecx,-0x14(%ebp)
087a339f +0x05f:  mov    %edi,%esi
087a33a1 +0x061:  mov    0x3c(%eax),%eax
087a33a4 +0x064:  ror    $0x18,%edi
087a33a7 +0x067:  xor    %eax,-0x18(%ebp)
087a33aa +0x06a:  and    $0xff00ff,%edi
087a33b0 +0x070:  mov    -0x34(%ebp),%ecx
087a33b3 +0x073:  ror    $0x8,%esi
087a33b6 +0x076:  mov    -0x34(%ebp),%eax
087a33b9 +0x079:  and    $0xff00ff00,%esi
087a33bf +0x07f:  mov    %edi,-0x10(%ebp)
087a33c2 +0x082:  mov    0xc(%edx),%edi
087a33c5 +0x085:  or     %esi,-0x10(%ebp)
087a33c8 +0x088:  mov    0x4(%ecx),%ecx
087a33cb +0x08b:  mov    0x8(%eax),%eax
087a33ce +0x08e:  xor    %ecx,-0x14(%ebp)
087a33d1 +0x091:  mov    %edi,%edx
087a33d3 +0x093:  xor    %eax,-0x10(%ebp)
087a33d6 +0x096:  mov    -0x28(%ebx),%eax
087a33dc +0x09c:  ror    $0x8,%edx
087a33df +0x09f:  ror    $0x18,%edi
087a33e2 +0x0a2:  mov    0x8(%ebp),%ecx
087a33e5 +0x0a5:  and    $0xff00ff00,%edx
087a33eb +0x0ab:  and    $0xff00ff,%edi
087a33f1 +0x0b1:  or     %edx,%edi
087a33f3 +0x0b3:  mov    -0x34(%ebp),%edx
087a33f6 +0x0b6:  mov    (%eax),%eax
087a33f8 +0x0b8:  mov    0x38(%ecx),%ecx
087a33fb +0x0bb:  xor    0xc(%edx),%edi
087a33fe +0x0be:  mov    %eax,-0x2c(%ebp)
087a3401 +0x0c1:  mov    -0x44(%ebx),%eax
087a3407 +0x0c7:  shr    %ecx
087a3409 +0x0c9:  mov    %edi,-0x3c(%ebp)
087a340c +0x0cc:  mov    %ecx,-0x38(%ebp)
087a340f +0x0cf:  mov    (%eax),%eax
087a3411 +0x0d1:  mov    %ecx,-0x30(%ebp)
087a3414 +0x0d4:  mov    %edx,-0x1c(%ebp)
087a3417 +0x0d7:  mov    %eax,-0x28(%ebp)
087a341a +0x0da:  mov    -0x20(%ebx),%eax
087a3420 +0x0e0:  mov    (%eax),%eax
087a3422 +0x0e2:  mov    %eax,-0x24(%ebp)
087a3425 +0x0e5:  mov    -0x43c(%ebx),%eax
087a342b +0x0eb:  mov    (%eax),%eax
087a342d +0x0ed:  mov    %eax,-0x20(%ebp)
087a3430 +0x0f0:  mov    %eax,%edi
087a3432 +0x0f2:  jmp    087a3545 <+0x205>
087a3437 +0x0f7:  nop
087a3438 +0x0f8:  mov    -0x20(%ebp),%edx
087a343b +0x0fb:  movzbl %cl,%edi
087a343e +0x0fe:  mov    (%edx,%edi,4),%edx
087a3441 +0x101:  mov    -0x1c(%ebp),%edi
087a3444 +0x104:  mov    (%edi),%edi
087a3446 +0x106:  xor    %edi,%edx
087a3448 +0x108:  mov    %esi,%edi
087a344a +0x10a:  mov    %edx,-0x18(%ebp)
087a344d +0x10d:  mov    -0x2c(%ebp),%edx
087a3450 +0x110:  shr    $0x18,%edi
087a3453 +0x113:  mov    (%edx,%edi,4),%edx
087a3456 +0x116:  mov    -0x40(%ebp),%edi
087a3459 +0x119:  xor    %edx,-0x18(%ebp)
087a345c +0x11c:  mov    -0x28(%ebp),%edx
087a345f +0x11f:  shr    $0x10,%edi
087a3462 +0x122:  and    $0xff,%edi
087a3468 +0x128:  mov    (%edx,%edi,4),%edx
087a346b +0x12b:  movzbl %ah,%edi
087a346e +0x12e:  xor    %edx,-0x18(%ebp)
087a3471 +0x131:  mov    -0x24(%ebp),%edx
087a3474 +0x134:  mov    (%edx,%edi,4),%edx
087a3477 +0x137:  xor    %edx,-0x18(%ebp)
087a347a +0x13a:  mov    %esi,%edx
087a347c +0x13c:  movzbl %dl,%edi
087a347f +0x13f:  mov    -0x20(%ebp),%edx
087a3482 +0x142:  mov    (%edx,%edi,4),%edx
087a3485 +0x145:  mov    -0x1c(%ebp),%edi
087a3488 +0x148:  mov    0x4(%edi),%edi
087a348b +0x14b:  xor    %edi,%edx
087a348d +0x14d:  mov    -0x40(%ebp),%edi
087a3490 +0x150:  mov    %edx,-0x14(%ebp)
087a3493 +0x153:  mov    -0x2c(%ebp),%edx
087a3496 +0x156:  shr    $0x18,%edi
087a3499 +0x159:  mov    (%edx,%edi,4),%edx
087a349c +0x15c:  mov    %eax,%edi
087a349e +0x15e:  xor    %edx,-0x14(%ebp)
087a34a1 +0x161:  mov    -0x28(%ebp),%edx
087a34a4 +0x164:  shr    $0x10,%edi
087a34a7 +0x167:  and    $0xff,%edi
087a34ad +0x16d:  mov    (%edx,%edi,4),%edx
087a34b0 +0x170:  movzbl %ch,%edi
087a34b3 +0x173:  xor    %edx,-0x14(%ebp)
087a34b6 +0x176:  mov    -0x24(%ebp),%edx
087a34b9 +0x179:  mov    (%edx,%edi,4),%edx
087a34bc +0x17c:  xor    %edx,-0x14(%ebp)
087a34bf +0x17f:  movzbl -0x40(%ebp),%edi
087a34c3 +0x183:  mov    -0x20(%ebp),%edx
087a34c6 +0x186:  mov    (%edx,%edi,4),%edx
087a34c9 +0x189:  mov    -0x1c(%ebp),%edi
087a34cc +0x18c:  mov    0x8(%edi),%edi
087a34cf +0x18f:  xor    %edi,%edx
087a34d1 +0x191:  mov    %eax,%edi
087a34d3 +0x193:  mov    %edx,-0x10(%ebp)
087a34d6 +0x196:  mov    -0x2c(%ebp),%edx
087a34d9 +0x199:  shr    $0x18,%edi
087a34dc +0x19c:  movzbl %al,%eax
087a34df +0x19f:  mov    (%edx,%edi,4),%edx
087a34e2 +0x1a2:  mov    %ecx,%edi
087a34e4 +0x1a4:  xor    %edx,-0x10(%ebp)
087a34e7 +0x1a7:  mov    -0x28(%ebp),%edx
087a34ea +0x1aa:  shr    $0x10,%edi
087a34ed +0x1ad:  and    $0xff,%edi
087a34f3 +0x1b3:  shr    $0x18,%ecx
087a34f6 +0x1b6:  mov    (%edx,%edi,4),%edx
087a34f9 +0x1b9:  xor    %edx,-0x10(%ebp)
087a34fc +0x1bc:  mov    %esi,%edx
087a34fe +0x1be:  movzbl %dh,%edi
087a3501 +0x1c1:  mov    -0x24(%ebp),%edx
087a3504 +0x1c4:  shr    $0x10,%esi
087a3507 +0x1c7:  and    $0xff,%esi
087a350d +0x1cd:  mov    (%edx,%edi,4),%edx
087a3510 +0x1d0:  xor    %edx,-0x10(%ebp)
087a3513 +0x1d3:  mov    -0x20(%ebp),%edi
087a3516 +0x1d6:  mov    -0x1c(%ebp),%edx
087a3519 +0x1d9:  mov    (%edi,%eax,4),%eax
087a351c +0x1dc:  mov    0xc(%edx),%edx
087a351f +0x1df:  mov    -0x2c(%ebp),%edi
087a3522 +0x1e2:  xor    %edx,%eax
087a3524 +0x1e4:  mov    -0x28(%ebp),%edx
087a3527 +0x1e7:  mov    (%edi,%ecx,4),%edi
087a352a +0x1ea:  mov    -0x40(%ebp),%ecx
087a352d +0x1ed:  mov    (%edx,%esi,4),%edx
087a3530 +0x1f0:  xor    %edi,%eax
087a3532 +0x1f2:  mov    -0x24(%ebp),%edi
087a3535 +0x1f5:  xor    %edx,%eax
087a3537 +0x1f7:  movzbl %ch,%edx
087a353a +0x1fa:  mov    (%edi,%edx,4),%edi
087a353d +0x1fd:  xor    %edi,%eax
087a353f +0x1ff:  mov    -0x20(%ebp),%edi
087a3542 +0x202:  mov    %eax,-0x3c(%ebp)
087a3545 +0x205:  movzbl -0x3c(%ebp),%eax
087a3549 +0x209:  mov    -0x2c(%ebp),%edx
087a354c +0x20c:  mov    -0x28(%ebp),%ecx
087a354f +0x20f:  mov    (%edi,%eax,4),%esi
087a3552 +0x212:  mov    -0x1c(%ebp),%eax
087a3555 +0x215:  xor    0x10(%eax),%esi
087a3558 +0x218:  mov    -0x18(%ebp),%eax
087a355b +0x21b:  shr    $0x18,%eax
087a355e +0x21e:  xor    (%edx,%eax,4),%esi
087a3561 +0x221:  mov    -0x14(%ebp),%eax
087a3564 +0x224:  mov    -0x10(%ebp),%edx
087a3567 +0x227:  shr    $0x10,%eax
087a356a +0x22a:  movzbl %al,%eax
087a356d +0x22d:  xor    (%ecx,%eax,4),%esi
087a3570 +0x230:  movzbl %dh,%eax
087a3573 +0x233:  mov    -0x24(%ebp),%ecx
087a3576 +0x236:  mov    -0x2c(%ebp),%edx
087a3579 +0x239:  xor    (%ecx,%eax,4),%esi
087a357c +0x23c:  movzbl -0x18(%ebp),%eax
087a3580 +0x240:  mov    -0x28(%ebp),%ecx
087a3583 +0x243:  mov    (%edi,%eax,4),%eax
087a3586 +0x246:  mov    -0x1c(%ebp),%edi
087a3589 +0x249:  mov    0x14(%edi),%edi
087a358c +0x24c:  xor    %edi,%eax
087a358e +0x24e:  mov    -0x20(%ebp),%edi
087a3591 +0x251:  mov    %eax,-0x40(%ebp)
087a3594 +0x254:  mov    -0x14(%ebp),%eax
087a3597 +0x257:  shr    $0x18,%eax
087a359a +0x25a:  mov    (%edx,%eax,4),%edx
087a359d +0x25d:  mov    -0x10(%ebp),%eax
087a35a0 +0x260:  xor    %edx,-0x40(%ebp)
087a35a3 +0x263:  mov    -0x3c(%ebp),%edx
087a35a6 +0x266:  shr    $0x10,%eax
087a35a9 +0x269:  movzbl %al,%eax
087a35ac +0x26c:  mov    (%ecx,%eax,4),%ecx
087a35af +0x26f:  movzbl %dh,%eax
087a35b2 +0x272:  xor    %ecx,-0x40(%ebp)
087a35b5 +0x275:  mov    -0x24(%ebp),%ecx
087a35b8 +0x278:  mov    -0x1c(%ebp),%edx
087a35bb +0x27b:  mov    (%ecx,%eax,4),%ecx
087a35be +0x27e:  movzbl -0x14(%ebp),%eax
087a35c2 +0x282:  xor    %ecx,-0x40(%ebp)
087a35c5 +0x285:  mov    -0x2c(%ebp),%ecx
087a35c8 +0x288:  mov    (%edi,%eax,4),%eax
087a35cb +0x28b:  xor    0x18(%edx),%eax
087a35ce +0x28e:  mov    -0x10(%ebp),%edx
087a35d1 +0x291:  mov    -0x28(%ebp),%edi
087a35d4 +0x294:  shr    $0x18,%edx
087a35d7 +0x297:  xor    (%ecx,%edx,4),%eax
087a35da +0x29a:  mov    -0x3c(%ebp),%ecx
087a35dd +0x29d:  shr    $0x10,%ecx
087a35e0 +0x2a0:  movzbl %cl,%edx
087a35e3 +0x2a3:  mov    -0x18(%ebp),%ecx
087a35e6 +0x2a6:  xor    (%edi,%edx,4),%eax
087a35e9 +0x2a9:  mov    -0x24(%ebp),%edi
087a35ec +0x2ac:  movzbl %ch,%edx
087a35ef +0x2af:  movzbl -0x10(%ebp),%ecx
087a35f3 +0x2b3:  xor    (%edi,%edx,4),%eax
087a35f6 +0x2b6:  mov    -0x20(%ebp),%edx
087a35f9 +0x2b9:  mov    -0x1c(%ebp),%edi
087a35fc +0x2bc:  mov    (%edx,%ecx,4),%ecx
087a35ff +0x2bf:  mov    -0x3c(%ebp),%edx
087a3602 +0x2c2:  xor    0x1c(%edi),%ecx
087a3605 +0x2c5:  mov    -0x2c(%ebp),%edi
087a3608 +0x2c8:  shr    $0x18,%edx
087a360b +0x2cb:  xor    (%edi,%edx,4),%ecx
087a360e +0x2ce:  mov    -0x18(%ebp),%edi
087a3611 +0x2d1:  shr    $0x10,%edi
087a3614 +0x2d4:  mov    %edi,%edx
087a3616 +0x2d6:  movzbl %dl,%edi
087a3619 +0x2d9:  mov    -0x28(%ebp),%edx
087a361c +0x2dc:  xor    (%edx,%edi,4),%ecx
087a361f +0x2df:  mov    -0x14(%ebp),%edx
087a3622 +0x2e2:  movzbl %dh,%edi
087a3625 +0x2e5:  mov    -0x24(%ebp),%edx
087a3628 +0x2e8:  xor    (%edx,%edi,4),%ecx
087a362b +0x2eb:  addl   $0x20,-0x1c(%ebp)
087a362f +0x2ef:  subl   $0x1,-0x30(%ebp)
087a3633 +0x2f3:  jne    087a3438 <+0xf8>
087a3639 +0x2f9:  mov    %esi,%edi
087a363b +0x2fb:  mov    %eax,%esi
087a363d +0x2fd:  mov    -0x40(%ebp),%eax
087a3640 +0x300:  mov    %edi,%edx
087a3642 +0x302:  mov    -0x38(%ebp),%edi
087a3645 +0x305:  mov    %eax,-0x24(%ebp)
087a3648 +0x308:  movzbl %cl,%eax
087a364b +0x30b:  shl    $0x5,%edi
087a364e +0x30e:  add    -0x34(%ebp),%edi
087a3651 +0x311:  mov    %edi,-0x20(%ebp)
087a3654 +0x314:  mov    -0x3e4(%ebx),%edi
087a365a +0x31a:  mov    (%edi),%edi
087a365c +0x31c:  mov    %edi,-0x10(%ebp)
087a365f +0x31f:  movzbl (%edi,%eax,4),%eax
087a3663 +0x323:  mov    -0x20(%ebp),%edi
087a3666 +0x326:  mov    (%edi),%edi
087a3668 +0x328:  xor    %edi,%eax
087a366a +0x32a:  mov    -0x10(%ebp),%edi
087a366d +0x32d:  mov    %eax,-0x1c(%ebp)
087a3670 +0x330:  mov    %edx,%eax
087a3672 +0x332:  shr    $0x18,%eax
087a3675 +0x335:  mov    (%edi,%eax,4),%eax
087a3678 +0x338:  mov    -0x24(%ebp),%edi
087a367b +0x33b:  and    $0xff000000,%eax
087a3680 +0x340:  shr    $0x10,%edi
087a3683 +0x343:  xor    %eax,-0x1c(%ebp)
087a3686 +0x346:  mov    %edi,%eax
087a3688 +0x348:  movzbl %al,%edi
087a368b +0x34b:  mov    -0x10(%ebp),%eax
087a368e +0x34e:  mov    (%eax,%edi,4),%eax
087a3691 +0x351:  and    $0xff0000,%eax
087a3696 +0x356:  xor    %eax,-0x1c(%ebp)
087a3699 +0x359:  mov    %esi,%eax
087a369b +0x35b:  movzbl %ah,%edi
087a369e +0x35e:  mov    -0x10(%ebp),%eax
087a36a1 +0x361:  mov    (%eax,%edi,4),%edi
087a36a4 +0x364:  and    $0xff00,%edi
087a36aa +0x36a:  xor    %edi,-0x1c(%ebp)
087a36ad +0x36d:  movzbl %dl,%edi
087a36b0 +0x370:  movzbl (%eax,%edi,4),%edi
087a36b4 +0x374:  mov    -0x20(%ebp),%eax
087a36b7 +0x377:  mov    0x4(%eax),%eax
087a36ba +0x37a:  xor    %eax,%edi
087a36bc +0x37c:  mov    -0x10(%ebp),%eax
087a36bf +0x37f:  mov    %edi,-0x18(%ebp)
087a36c2 +0x382:  mov    -0x24(%ebp),%edi
087a36c5 +0x385:  shr    $0x18,%edi
087a36c8 +0x388:  mov    (%eax,%edi,4),%edi
087a36cb +0x38b:  and    $0xff000000,%edi
087a36d1 +0x391:  xor    %edi,-0x18(%ebp)
087a36d4 +0x394:  mov    %esi,%edi
087a36d6 +0x396:  shr    $0x10,%edi
087a36d9 +0x399:  and    $0xff,%edi
087a36df +0x39f:  mov    (%eax,%edi,4),%edi
087a36e2 +0x3a2:  and    $0xff0000,%edi
087a36e8 +0x3a8:  xor    %edi,-0x18(%ebp)
087a36eb +0x3ab:  movzbl %ch,%edi
087a36ee +0x3ae:  mov    (%eax,%edi,4),%edi
087a36f1 +0x3b1:  and    $0xff00,%edi
087a36f7 +0x3b7:  xor    %edi,-0x18(%ebp)
087a36fa +0x3ba:  movzbl -0x24(%ebp),%edi
087a36fe +0x3be:  movzbl (%eax,%edi,4),%edi
087a3702 +0x3c2:  mov    -0x20(%ebp),%eax
087a3705 +0x3c5:  mov    0x8(%eax),%eax
087a3708 +0x3c8:  xor    %eax,%edi
087a370a +0x3ca:  mov    -0x10(%ebp),%eax
087a370d +0x3cd:  mov    %edi,-0x14(%ebp)
087a3710 +0x3d0:  mov    %esi,%edi
087a3712 +0x3d2:  and    $0xff,%esi
087a3718 +0x3d8:  shr    $0x18,%edi
087a371b +0x3db:  mov    (%eax,%edi,4),%edi
087a371e +0x3de:  movzbl (%eax,%esi,4),%esi
087a3722 +0x3e2:  and    $0xff000000,%edi
087a3728 +0x3e8:  xor    %edi,-0x14(%ebp)
087a372b +0x3eb:  mov    %ecx,%edi
087a372d +0x3ed:  shr    $0x10,%edi
087a3730 +0x3f0:  and    $0xff,%edi
087a3736 +0x3f6:  mov    (%eax,%edi,4),%edi
087a3739 +0x3f9:  and    $0xff0000,%edi
087a373f +0x3ff:  xor    %edi,-0x14(%ebp)
087a3742 +0x402:  movzbl %dh,%edi
087a3745 +0x405:  mov    (%eax,%edi,4),%edi
087a3748 +0x408:  and    $0xff00,%edi
087a374e +0x40e:  xor    %edi,-0x14(%ebp)
087a3751 +0x411:  mov    -0x20(%ebp),%edi
087a3754 +0x414:  xor    0xc(%edi),%esi
087a3757 +0x417:  shr    $0x18,%ecx
087a375a +0x41a:  mov    0x10(%ebp),%edi
087a375d +0x41d:  shr    $0x10,%edx
087a3760 +0x420:  mov    (%eax,%ecx,4),%ecx
087a3763 +0x423:  movzbl %dl,%edx
087a3766 +0x426:  mov    (%eax,%edx,4),%edx
087a3769 +0x429:  and    $0xff000000,%ecx
087a376f +0x42f:  xor    %ecx,%esi
087a3771 +0x431:  mov    -0x10(%ebp),%ecx
087a3774 +0x434:  and    $0xff0000,%edx
087a377a +0x43a:  xor    %edx,%esi
087a377c +0x43c:  mov    -0x24(%ebp),%edx
087a377f +0x43f:  movzbl %dh,%eax
087a3782 +0x442:  mov    (%ecx,%eax,4),%eax
087a3785 +0x445:  and    $0xff00,%eax
087a378a +0x44a:  xor    %eax,%esi
087a378c +0x44c:  test   %edi,%edi
087a378e +0x44e:  je     087a3850 <+0x510>
087a3794 +0x454:  mov    -0x1c(%ebp),%eax
087a3797 +0x457:  mov    -0x1c(%ebp),%edx
087a379a +0x45a:  mov    0x10(%ebp),%edi
087a379d +0x45d:  ror    $0x18,%eax
087a37a0 +0x460:  ror    $0x8,%edx
087a37a3 +0x463:  and    $0xff00ff,%eax
087a37a8 +0x468:  and    $0xff00ff00,%edx
087a37ae +0x46e:  or     %edx,%eax
087a37b0 +0x470:  mov    0x14(%ebp),%edx
087a37b3 +0x473:  xor    (%edi),%eax
087a37b5 +0x475:  mov    %eax,(%edx)
087a37b7 +0x477:  mov    %edx,%eax
087a37b9 +0x479:  add    $0x4,%eax
087a37bc +0x47c:  cmp    $0xfffffffc,%edi
087a37bf +0x47f:  je     087a3873 <+0x533>
087a37c5 +0x485:  mov    -0x18(%ebp),%eax
087a37c8 +0x488:  mov    -0x18(%ebp),%edx
087a37cb +0x48b:  ror    $0x18,%eax
087a37ce +0x48e:  ror    $0x8,%edx
087a37d1 +0x491:  and    $0xff00ff,%eax
087a37d6 +0x496:  and    $0xff00ff00,%edx
087a37dc +0x49c:  or     %edx,%eax
087a37de +0x49e:  mov    0x14(%ebp),%edx
087a37e1 +0x4a1:  xor    0x4(%edi),%eax
087a37e4 +0x4a4:  mov    %eax,0x4(%edx)
087a37e7 +0x4a7:  mov    %edx,%eax
087a37e9 +0x4a9:  add    $0x8,%eax
087a37ec +0x4ac:  cmp    $0xfffffff8,%edi
087a37ef +0x4af:  je     087a3892 <+0x552>
087a37f5 +0x4b5:  mov    -0x14(%ebp),%eax
087a37f8 +0x4b8:  mov    %edi,%ecx
087a37fa +0x4ba:  mov    -0x14(%ebp),%edx
087a37fd +0x4bd:  ror    $0x18,%eax
087a3800 +0x4c0:  ror    $0x8,%edx
087a3803 +0x4c3:  and    $0xff00ff,%eax
087a3808 +0x4c8:  and    $0xff00ff00,%edx
087a380e +0x4ce:  or     %edx,%eax
087a3810 +0x4d0:  xor    0x8(%edi),%eax
087a3813 +0x4d3:  mov    0x14(%ebp),%edi
087a3816 +0x4d6:  mov    %eax,0x8(%edi)
087a3819 +0x4d9:  mov    %edi,%eax
087a381b +0x4db:  add    $0xc,%eax
087a381e +0x4de:  cmp    $0xfffffff4,%ecx
087a3821 +0x4e1:  je     087a38b1 <+0x571>
087a3827 +0x4e7:  mov    %esi,%eax
087a3829 +0x4e9:  ror    $0x18,%eax
087a382c +0x4ec:  ror    $0x8,%esi
087a382f +0x4ef:  and    $0xff00ff,%eax
087a3834 +0x4f4:  and    $0xff00ff00,%esi
087a383a +0x4fa:  or     %esi,%eax
087a383c +0x4fc:  xor    0xc(%ecx),%eax
087a383f +0x4ff:  mov    0x14(%ebp),%ecx
087a3842 +0x502:  mov    %eax,0xc(%ecx)
087a3845 +0x505:  add    $0x34,%esp
087a3848 +0x508:  pop    %ebx
087a3849 +0x509:  pop    %esi
087a384a +0x50a:  pop    %edi
087a384b +0x50b:  pop    %ebp
087a384c +0x50c:  ret
087a384d +0x50d:  lea    0x0(%esi),%esi
087a3850 +0x510:  mov    -0x1c(%ebp),%eax
087a3853 +0x513:  mov    -0x1c(%ebp),%edx
087a3856 +0x516:  mov    0x14(%ebp),%ecx
087a3859 +0x519:  ror    $0x18,%eax
087a385c +0x51c:  ror    $0x8,%edx
087a385f +0x51f:  and    $0xff00ff,%eax
087a3864 +0x524:  and    $0xff00ff00,%edx
087a386a +0x52a:  or     %edx,%eax
087a386c +0x52c:  mov    %eax,(%ecx)
087a386e +0x52e:  mov    %ecx,%eax
087a3870 +0x530:  add    $0x4,%eax
087a3873 +0x533:  mov    -0x18(%ebp),%edx
087a3876 +0x536:  mov    -0x18(%ebp),%ecx
087a3879 +0x539:  ror    $0x18,%edx
087a387c +0x53c:  ror    $0x8,%ecx
087a387f +0x53f:  and    $0xff00ff,%edx
087a3885 +0x545:  and    $0xff00ff00,%ecx
087a388b +0x54b:  or     %ecx,%edx
087a388d +0x54d:  mov    %edx,(%eax)
087a388f +0x54f:  add    $0x4,%eax
087a3892 +0x552:  mov    -0x14(%ebp),%edx
087a3895 +0x555:  mov    -0x14(%ebp),%ecx
087a3898 +0x558:  ror    $0x18,%edx
087a389b +0x55b:  ror    $0x8,%ecx
087a389e +0x55e:  and    $0xff00ff,%edx
087a38a4 +0x564:  and    $0xff00ff00,%ecx
087a38aa +0x56a:  or     %ecx,%edx
087a38ac +0x56c:  mov    %edx,(%eax)
087a38ae +0x56e:  add    $0x4,%eax
087a38b1 +0x571:  mov    %esi,%edx
087a38b3 +0x573:  ror    $0x18,%edx
087a38b6 +0x576:  ror    $0x8,%esi
087a38b9 +0x579:  and    $0xff00ff,%edx
087a38bf +0x57f:  and    $0xff00ff00,%esi
087a38c5 +0x585:  or     %esi,%edx
087a38c7 +0x587:  mov    %edx,(%eax)
087a38c9 +0x589:  add    $0x34,%esp
087a38cc +0x58c:  pop    %ebx
087a38cd +0x58d:  pop    %esi
087a38ce +0x58e:  pop    %edi
087a38cf +0x58f:  pop    %ebp
087a38d0 +0x590:  ret
087a38d1 +0x591:  nop
087a38d2 +0x592:  lea    0x0(%esi,%eiz,1),%esi
087a38d9 +0x599:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::AES::encrypt @ 0x87a3340

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AES::encrypt(unsigned char const*, unsigned char const*, unsigned char*) const */

void __thiscall TaoCrypt::AES::encrypt(AES *this,uchar *param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  AES *pAVar16;
  uint uVar17;
  uint uVar18;
  uint local_40;
  uint local_34;
  AES *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  uVar15 = *(uint *)param_1;
  uVar11 = *(uint *)(param_1 + 4);
  uVar13 = *(uint *)(param_1 + 8);
  local_1c = (uVar15 >> 0x18 | (uVar15 & 0xff00) << 8 | uVar15 >> 8 & 0xff00ff00 | uVar15 << 0x18) ^
             *(uint *)(this + 0x3c);
  uVar15 = *(uint *)(param_1 + 0xc);
  local_18 = (uVar11 >> 0x18 | (uVar11 & 0xff00) << 8 | uVar11 >> 8 & 0xff00ff00 | uVar11 << 0x18) ^
             *(uint *)(this + 0x40);
  local_14 = (uVar13 >> 0x18 | (uVar13 & 0xff00) << 8 | uVar13 >> 8 & 0xff00ff00 | uVar13 << 0x18) ^
             *(uint *)(this + 0x44);
  iVar7 = *(int *)PTR_Te0_0936cb70;
  local_40 = (uVar15 >> 0x18 | (uVar15 & 0xff00) << 8 | uVar15 >> 8 & 0xff00ff00 | uVar15 << 0x18) ^
             *(uint *)(this + 0x48);
  iVar8 = *(int *)PTR_Te1_0936cb54;
  iVar9 = *(int *)PTR_Te2_0936cb78;
  iVar10 = *(int *)PTR_Te3_0936c75c;
  local_34 = *(uint *)(this + 0x38) >> 1;
  local_20 = this + 0x3c;
  while( true ) {
    uVar14 = *(uint *)(iVar10 + (local_40 & 0xff) * 4) ^ *(uint *)(local_20 + 0x10) ^
             *(uint *)(iVar7 + (local_1c >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_18 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_14 >> 8 & 0xff) * 4);
    uVar15 = *(uint *)(iVar10 + (local_1c & 0xff) * 4) ^ *(uint *)(local_20 + 0x14) ^
             *(uint *)(iVar7 + (local_18 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_14 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_40 >> 8 & 0xff) * 4);
    uVar11 = *(uint *)(iVar10 + (local_18 & 0xff) * 4) ^ *(uint *)(local_20 + 0x18) ^
             *(uint *)(iVar7 + (local_14 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_40 >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_1c >> 8 & 0xff) * 4);
    uVar13 = *(uint *)(iVar10 + (local_14 & 0xff) * 4) ^ *(uint *)(local_20 + 0x1c) ^
             *(uint *)(iVar7 + (local_40 >> 0x18) * 4) ^
             *(uint *)(iVar8 + (local_1c >> 0x10 & 0xff) * 4) ^
             *(uint *)(iVar9 + (local_18 >> 8 & 0xff) * 4);
    local_34 = local_34 - 1;
    if (local_34 == 0) break;
    local_1c = *(uint *)(iVar10 + (uVar13 & 0xff) * 4) ^ *(uint *)(local_20 + 0x20) ^
               *(uint *)(iVar7 + (uVar14 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar15 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar11 >> 8 & 0xff) * 4);
    local_18 = *(uint *)(iVar10 + (uVar14 & 0xff) * 4) ^ *(uint *)(local_20 + 0x24) ^
               *(uint *)(iVar7 + (uVar15 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar11 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar13 >> 8 & 0xff) * 4);
    local_14 = *(uint *)(iVar10 + (uVar15 & 0xff) * 4) ^ *(uint *)(local_20 + 0x28) ^
               *(uint *)(iVar7 + (uVar11 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar13 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar14 >> 8 & 0xff) * 4);
    local_40 = *(uint *)(iVar10 + (uVar11 & 0xff) * 4) ^ *(uint *)(local_20 + 0x2c) ^
               *(uint *)(iVar7 + (uVar13 >> 0x18) * 4) ^
               *(uint *)(iVar8 + (uVar14 >> 0x10 & 0xff) * 4) ^
               *(uint *)(iVar9 + (uVar15 >> 8 & 0xff) * 4);
    local_20 = local_20 + 0x20;
  }
  pAVar16 = this + 0x3c + (*(uint *)(this + 0x38) >> 1) * 0x20;
  iVar7 = *(int *)PTR_Te4_0936c7b4;
  uVar12 = (uint)*(byte *)(iVar7 + (uVar13 & 0xff) * 4) ^ *(uint *)pAVar16;
  uVar1 = uVar12 ^ *(uint *)(iVar7 + (uVar14 >> 0x18) * 4) & 0xff000000;
  uVar2 = uVar1 ^ *(uint *)(iVar7 + (uVar15 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar11 >> 8 & 0xff) * 4) & 0xff00;
  uVar17 = (uint)*(byte *)(iVar7 + (uVar14 & 0xff) * 4) ^ *(uint *)(pAVar16 + 4);
  uVar3 = uVar17 ^ *(uint *)(iVar7 + (uVar15 >> 0x18) * 4) & 0xff000000;
  uVar4 = uVar3 ^ *(uint *)(iVar7 + (uVar11 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar13 >> 8 & 0xff) * 4) & 0xff00;
  uVar18 = (uint)*(byte *)(iVar7 + (uVar15 & 0xff) * 4) ^ *(uint *)(pAVar16 + 8);
  uVar5 = uVar18 ^ *(uint *)(iVar7 + (uVar11 >> 0x18) * 4) & 0xff000000;
  uVar6 = uVar5 ^ *(uint *)(iVar7 + (uVar13 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(iVar7 + (uVar14 >> 8 & 0xff) * 4) & 0xff00;
  uVar11 = (uint)*(byte *)(iVar7 + (uVar11 & 0xff) * 4) ^ *(uint *)(pAVar16 + 0xc);
  uVar13 = uVar11 ^ *(uint *)(iVar7 + (uVar13 >> 0x18) * 4) & 0xff000000;
  uVar15 = uVar13 ^ *(uint *)(iVar7 + (uVar14 >> 0x10 & 0xff) * 4) & 0xff0000 ^
           *(uint *)(iVar7 + (uVar15 >> 8 & 0xff) * 4) & 0xff00;
  if (param_2 == (uchar *)0x0) {
    *(uint *)param_3 =
         uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar12 << 0x18;
LAB_087a3873:
    *(uint *)(param_3 + 4) =
         uVar3 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar17 << 0x18;
  }
  else {
    *(uint *)param_3 =
         (uVar1 >> 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00ff00 | uVar12 << 0x18) ^
         *(uint *)param_2;
    if (param_2 == (uchar *)0xfffffffc) goto LAB_087a3873;
    *(uint *)(param_3 + 4) =
         (uVar3 >> 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00ff00 | uVar17 << 0x18) ^
         *(uint *)(param_2 + 4);
    if (param_2 != (uchar *)0xfffffff8) {
      *(uint *)(param_3 + 8) =
           (uVar5 >> 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00ff00 | uVar18 << 0x18) ^
           *(uint *)(param_2 + 8);
      if (param_2 != (uchar *)0xfffffff4) {
        *(uint *)(param_3 + 0xc) =
             (uVar13 >> 0x18 | (uVar15 & 0xff00) << 8 | uVar15 >> 8 & 0xff00ff00 | uVar11 << 0x18) ^
             *(uint *)(param_2 + 0xc);
        return;
      }
      goto LAB_087a38b1;
    }
  }
  *(uint *)(param_3 + 8) =
       uVar5 >> 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00ff00 | uVar18 << 0x18;
LAB_087a38b1:
  *(uint *)(param_3 + 0xc) =
       uVar13 >> 0x18 | (uVar15 & 0xff00) << 8 | uVar15 >> 8 & 0xff00ff00 | uVar11 << 0x18;
  return;
}
```
