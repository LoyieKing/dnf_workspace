# CItemUpgrade

`_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev`

`global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CItemUpgrade` | `0x0854b178` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854b178  _GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev
#           global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()
# range [0x0854b178, 0x0854c3cf]
0854b178 +0x0000:  push   %ebp
0854b179 +0x0001:  mov    %esp,%ebp
0854b17b +0x0003:  sub    $0x18,%esp
0854b17e +0x0006:  movl   $0xffff,0x4(%esp)
0854b186 +0x000e:  movl   $0x1,(%esp)
0854b18d +0x0015:  call   0854b138 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0854b192 +0x001a:  leave
0854b193 +0x001b:  ret
0854b194 +0x001c:  push   %ebp
0854b195 +0x001d:  mov    %esp,%ebp
0854b197 +0x001f:  sub    $0x18,%esp
0854b19a +0x0022:  mov    0x8(%ebp),%eax
0854b19d +0x0025:  mov    %eax,(%esp)
0854b1a0 +0x0028:  call   0854b1a8 <+0x30>
0854b1a5 +0x002d:  leave
0854b1a6 +0x002e:  ret
0854b1a7 +0x002f:  nop
0854b1a8 +0x0030:  push   %ebp
0854b1a9 +0x0031:  mov    %esp,%ebp
0854b1ab +0x0033:  mov    0x8(%ebp),%eax
0854b1ae +0x0036:  movl   $0x0,(%eax)
0854b1b4 +0x003c:  mov    0x8(%ebp),%eax
0854b1b7 +0x003f:  movb   $0x0,0x4(%eax)
0854b1bb +0x0043:  mov    0x8(%ebp),%eax
0854b1be +0x0046:  movl   $0x0,0x8(%eax)
0854b1c5 +0x004d:  pop    %ebp
0854b1c6 +0x004e:  ret
0854b1c7 +0x004f:  nop
0854b1c8 +0x0050:  push   %ebp
0854b1c9 +0x0051:  mov    %esp,%ebp
0854b1cb +0x0053:  mov    0x8(%ebp),%eax
0854b1ce +0x0056:  mov    (%eax),%eax
0854b1d0 +0x0058:  mov    %eax,%edx
0854b1d2 +0x005a:  mov    0xc(%ebp),%eax
0854b1d5 +0x005d:  mov    (%eax),%eax
0854b1d7 +0x005f:  cmp    %eax,%edx
0854b1d9 +0x0061:  jge    0854b1e5 <+0x6d>
0854b1db +0x0063:  mov    $0x1,%eax
0854b1e0 +0x0068:  jmp    0854b265 <+0xed>
0854b1e5 +0x006d:  mov    0x8(%ebp),%eax
0854b1e8 +0x0070:  mov    (%eax),%edx
0854b1ea +0x0072:  mov    0xc(%ebp),%eax
0854b1ed +0x0075:  mov    (%eax),%eax
0854b1ef +0x0077:  cmp    %eax,%edx
0854b1f1 +0x0079:  jne    0854b260 <+0xe8>
0854b1f3 +0x007b:  mov    0x8(%ebp),%eax
0854b1f6 +0x007e:  movzbl 0x4(%eax),%edx
0854b1fa +0x0082:  mov    0xc(%ebp),%eax
0854b1fd +0x0085:  movzbl 0x4(%eax),%eax
0854b201 +0x0089:  cmp    %al,%dl
0854b203 +0x008b:  jge    0854b20c <+0x94>
0854b205 +0x008d:  mov    $0x1,%eax
0854b20a +0x0092:  jmp    0854b265 <+0xed>
0854b20c +0x0094:  mov    0x8(%ebp),%eax
0854b20f +0x0097:  movzbl 0x4(%eax),%edx
0854b213 +0x009b:  mov    0xc(%ebp),%eax
0854b216 +0x009e:  movzbl 0x4(%eax),%eax
0854b21a +0x00a2:  cmp    %al,%dl
0854b21c +0x00a4:  jne    0854b260 <+0xe8>
0854b21e +0x00a6:  mov    0x8(%ebp),%eax
0854b221 +0x00a9:  mov    0x8(%eax),%eax
0854b224 +0x00ac:  mov    %eax,%edx
0854b226 +0x00ae:  mov    0xc(%ebp),%eax
0854b229 +0x00b1:  mov    0x8(%eax),%eax
0854b22c +0x00b4:  cmp    %eax,%edx
0854b22e +0x00b6:  jge    0854b237 <+0xbf>
0854b230 +0x00b8:  mov    $0x1,%eax
0854b235 +0x00bd:  jmp    0854b265 <+0xed>
0854b237 +0x00bf:  mov    0x8(%ebp),%eax
0854b23a +0x00c2:  mov    0x8(%eax),%edx
0854b23d +0x00c5:  mov    0xc(%ebp),%eax
0854b240 +0x00c8:  mov    0x8(%eax),%eax
0854b243 +0x00cb:  cmp    %eax,%edx
0854b245 +0x00cd:  jne    0854b260 <+0xe8>
0854b247 +0x00cf:  mov    0x8(%ebp),%eax
0854b24a +0x00d2:  movzbl 0xc(%eax),%edx
0854b24e +0x00d6:  mov    0xc(%ebp),%eax
0854b251 +0x00d9:  movzbl 0xc(%eax),%eax
0854b255 +0x00dd:  cmp    %al,%dl
0854b257 +0x00df:  jae    0854b260 <+0xe8>
0854b259 +0x00e1:  mov    $0x1,%eax
0854b25e +0x00e6:  jmp    0854b265 <+0xed>
0854b260 +0x00e8:  mov    $0x0,%eax
0854b265 +0x00ed:  pop    %ebp
0854b266 +0x00ee:  ret
0854b267 +0x00ef:  nop
0854b268 +0x00f0:  push   %ebp
0854b269 +0x00f1:  mov    %esp,%ebp
0854b26b +0x00f3:  sub    $0x18,%esp
0854b26e +0x00f6:  mov    0x8(%ebp),%eax
0854b271 +0x00f9:  mov    %eax,(%esp)
0854b274 +0x00fc:  call   0854b194 <+0x1c>
0854b279 +0x0101:  mov    0x8(%ebp),%eax
0854b27c +0x0104:  movb   $0x0,0xc(%eax)
0854b280 +0x0108:  leave
0854b281 +0x0109:  ret
0854b282 +0x010a:  push   %ebp
0854b283 +0x010b:  mov    %esp,%ebp
0854b285 +0x010d:  sub    $0x10,%esp
0854b288 +0x0110:  mov    0x8(%ebp),%eax
0854b28b +0x0113:  mov    $0x0,%edx
0854b290 +0x0118:  mov    %edx,(%eax)
0854b292 +0x011a:  mov    0x8(%ebp),%eax
0854b295 +0x011d:  mov    $0x0,%edx
0854b29a +0x0122:  mov    %edx,0x4(%eax)
0854b29d +0x0125:  mov    0x8(%ebp),%eax
0854b2a0 +0x0128:  mov    $0x0,%edx
0854b2a5 +0x012d:  mov    %edx,0x8(%eax)
0854b2a8 +0x0130:  mov    0x8(%ebp),%eax
0854b2ab +0x0133:  mov    $0x0,%edx
0854b2b0 +0x0138:  mov    %edx,0xc(%eax)
0854b2b3 +0x013b:  mov    0x8(%ebp),%eax
0854b2b6 +0x013e:  mov    $0x0,%edx
0854b2bb +0x0143:  mov    %edx,0x10(%eax)
0854b2be +0x0146:  mov    0x8(%ebp),%eax
0854b2c1 +0x0149:  mov    $0x0,%edx
0854b2c6 +0x014e:  mov    %edx,0x14(%eax)
0854b2c9 +0x0151:  mov    0x8(%ebp),%eax
0854b2cc +0x0154:  mov    $0x0,%edx
0854b2d1 +0x0159:  mov    %edx,0x18(%eax)
0854b2d4 +0x015c:  mov    0x8(%ebp),%eax
0854b2d7 +0x015f:  mov    $0x0,%edx
0854b2dc +0x0164:  mov    %edx,0x1c(%eax)
0854b2df +0x0167:  mov    0x8(%ebp),%eax
0854b2e2 +0x016a:  movl   $0x0,0x20(%eax)
0854b2e9 +0x0171:  mov    0x8(%ebp),%eax
0854b2ec +0x0174:  movl   $0x0,0x24(%eax)
0854b2f3 +0x017b:  mov    0x8(%ebp),%eax
0854b2f6 +0x017e:  movl   $0x0,0x28(%eax)
0854b2fd +0x0185:  mov    0x8(%ebp),%eax
0854b300 +0x0188:  movl   $0x0,0x2c(%eax)
0854b307 +0x018f:  mov    0x8(%ebp),%eax
0854b30a +0x0192:  movl   $0x0,0x30(%eax)
0854b311 +0x0199:  mov    0x8(%ebp),%eax
0854b314 +0x019c:  movl   $0x0,0x34(%eax)
0854b31b +0x01a3:  movl   $0x0,-0x8(%ebp)
0854b322 +0x01aa:  jmp    0854b339 <+0x1c1>
0854b324 +0x01ac:  mov    -0x8(%ebp),%edx
0854b327 +0x01af:  mov    0x8(%ebp),%eax
0854b32a +0x01b2:  add    $0xc,%edx
0854b32d +0x01b5:  movl   $0x0,0x8(%eax,%edx,4)
0854b335 +0x01bd:  addl   $0x1,-0x8(%ebp)
0854b339 +0x01c1:  cmpl   $0x4,-0x8(%ebp)
0854b33d +0x01c5:  setle  %al
0854b340 +0x01c8:  test   %al,%al
0854b342 +0x01ca:  jne    0854b324 <+0x1ac>
0854b344 +0x01cc:  movl   $0x0,-0x4(%ebp)
0854b34b +0x01d3:  jmp    0854b375 <+0x1fd>
0854b34d +0x01d5:  mov    -0x4(%ebp),%edx
0854b350 +0x01d8:  mov    0x8(%ebp),%eax
0854b353 +0x01db:  lea    0x10(%edx),%ecx
0854b356 +0x01de:  mov    $0x0,%edx
0854b35b +0x01e3:  mov    %edx,0xc(%eax,%ecx,4)
0854b35f +0x01e7:  mov    -0x4(%ebp),%edx
0854b362 +0x01ea:  mov    0x8(%ebp),%eax
0854b365 +0x01ed:  lea    0x14(%edx),%ecx
0854b368 +0x01f0:  mov    $0x0,%edx
0854b36d +0x01f5:  mov    %edx,0xc(%eax,%ecx,4)
0854b371 +0x01f9:  addl   $0x1,-0x4(%ebp)
0854b375 +0x01fd:  cmpl   $0x3,-0x4(%ebp)
0854b379 +0x0201:  setle  %al
0854b37c +0x0204:  test   %al,%al
0854b37e +0x0206:  jne    0854b34d <+0x1d5>
0854b380 +0x0208:  leave
0854b381 +0x0209:  ret
0854b382 +0x020a:  push   %ebp
0854b383 +0x020b:  mov    %esp,%ebp
0854b385 +0x020d:  mov    0x8(%ebp),%eax
0854b388 +0x0210:  pop    %ebp
0854b389 +0x0211:  ret
0854b38a +0x0212:  push   %ebp
0854b38b +0x0213:  mov    %esp,%ebp
0854b38d +0x0215:  sub    $0x18,%esp
0854b390 +0x0218:  mov    0x8(%ebp),%eax
0854b393 +0x021b:  mov    %eax,0x4(%esp)
0854b397 +0x021f:  mov    0xc(%ebp),%eax
0854b39a +0x0222:  mov    %eax,(%esp)
0854b39d +0x0225:  call   08900c26 <_Z18importUpgradeTablePKcP15upgrade_table_t>  ; importUpgradeTable(char const*, upgrade_table_t*)
0854b3a2 +0x022a:  leave
0854b3a3 +0x022b:  ret
0854b3a4 +0x022c:  push   %ebp
0854b3a5 +0x022d:  mov    %esp,%ebp
0854b3a7 +0x022f:  sub    $0x18,%esp
0854b3aa +0x0232:  mov    0x8(%ebp),%eax
0854b3ad +0x0235:  add    $0x5c,%eax
0854b3b0 +0x0238:  mov    %eax,(%esp)
0854b3b3 +0x023b:  call   0854b5a4 <+0x42c>
0854b3b8 +0x0240:  leave
0854b3b9 +0x0241:  ret
0854b3ba +0x0242:  push   %ebp
0854b3bb +0x0243:  mov    %esp,%ebp
0854b3bd +0x0245:  sub    $0x18,%esp
0854b3c0 +0x0248:  mov    0x8(%ebp),%eax
0854b3c3 +0x024b:  mov    %eax,(%esp)
0854b3c6 +0x024e:  call   0854b696 <+0x51e>
0854b3cb +0x0253:  leave
0854b3cc +0x0254:  ret
0854b3cd +0x0255:  nop
0854b3ce +0x0256:  push   %ebp
0854b3cf +0x0257:  mov    %esp,%ebp
0854b3d1 +0x0259:  sub    $0x18,%esp
0854b3d4 +0x025c:  mov    0x8(%ebp),%eax
0854b3d7 +0x025f:  mov    %eax,(%esp)
0854b3da +0x0262:  call   0854b6e8 <+0x570>
0854b3df +0x0267:  leave
0854b3e0 +0x0268:  ret
0854b3e1 +0x0269:  nop
0854b3e2 +0x026a:  push   %ebp
0854b3e3 +0x026b:  mov    %esp,%ebp
0854b3e5 +0x026d:  sub    $0x18,%esp
0854b3e8 +0x0270:  mov    0x8(%ebp),%eax
0854b3eb +0x0273:  mov    %eax,(%esp)
0854b3ee +0x0276:  call   0854b3ce <+0x256>
0854b3f3 +0x027b:  leave
0854b3f4 +0x027c:  ret
0854b3f5 +0x027d:  nop
0854b3f6 +0x027e:  push   %ebp
0854b3f7 +0x027f:  mov    %esp,%ebp
0854b3f9 +0x0281:  push   %esi
0854b3fa +0x0282:  push   %ebx
0854b3fb +0x0283:  sub    $0x10,%esp
0854b3fe +0x0286:  mov    0x8(%ebp),%eax
0854b401 +0x0289:  add    $0x4c4,%eax
0854b406 +0x028e:  mov    %eax,(%esp)
0854b409 +0x0291:  call   0854b3e2 <+0x26a>
0854b40e +0x0296:  jmp    0854b42a <+0x2b2>
0854b410 +0x0298:  mov    %edx,%ebx
0854b412 +0x029a:  mov    %eax,%esi
0854b414 +0x029c:  mov    0x8(%ebp),%eax
0854b417 +0x029f:  add    $0x49c,%eax
0854b41c +0x02a4:  mov    %eax,(%esp)
0854b41f +0x02a7:  call   0854b3ba <+0x242>
0854b424 +0x02ac:  mov    %esi,%eax
0854b426 +0x02ae:  mov    %ebx,%edx
0854b428 +0x02b0:  jmp    0854b43c <+0x2c4>
0854b42a +0x02b2:  mov    0x8(%ebp),%eax
0854b42d +0x02b5:  add    $0x49c,%eax
0854b432 +0x02ba:  mov    %eax,(%esp)
0854b435 +0x02bd:  call   0854b3ba <+0x242>
0854b43a +0x02c2:  jmp    0854b456 <+0x2de>
0854b43c +0x02c4:  mov    %edx,%ebx
0854b43e +0x02c6:  mov    %eax,%esi
0854b440 +0x02c8:  mov    0x8(%ebp),%eax
0854b443 +0x02cb:  add    $0x434,%eax
0854b448 +0x02d0:  mov    %eax,(%esp)
0854b44b +0x02d3:  call   0854b3a4 <+0x22c>
0854b450 +0x02d8:  mov    %esi,%eax
0854b452 +0x02da:  mov    %ebx,%edx
0854b454 +0x02dc:  jmp    0854b468 <+0x2f0>
0854b456 +0x02de:  mov    0x8(%ebp),%eax
0854b459 +0x02e1:  add    $0x434,%eax
0854b45e +0x02e6:  mov    %eax,(%esp)
0854b461 +0x02e9:  call   0854b3a4 <+0x22c>
0854b466 +0x02ee:  jmp    0854b483 <+0x30b>
0854b468 +0x02f0:  mov    %edx,%ebx
0854b46a +0x02f2:  mov    %eax,%esi
0854b46c +0x02f4:  mov    0x8(%ebp),%eax
0854b46f +0x02f7:  mov    %eax,(%esp)
0854b472 +0x02fa:  call   0854b624 <+0x4ac>
0854b477 +0x02ff:  mov    %esi,%eax
0854b479 +0x0301:  mov    %ebx,%edx
0854b47b +0x0303:  mov    %eax,(%esp)
0854b47e +0x0306:  call   08ae3750 <_Unwind_Resume>
0854b483 +0x030b:  mov    0x8(%ebp),%eax
0854b486 +0x030e:  mov    %eax,(%esp)
0854b489 +0x0311:  call   0854b624 <+0x4ac>
0854b48e +0x0316:  add    $0x10,%esp
0854b491 +0x0319:  pop    %ebx
0854b492 +0x031a:  pop    %esi
0854b493 +0x031b:  pop    %ebp
0854b494 +0x031c:  ret
0854b495 +0x031d:  nop
0854b496 +0x031e:  push   %ebp
0854b497 +0x031f:  mov    %esp,%ebp
0854b499 +0x0321:  sub    $0x18,%esp
0854b49c +0x0324:  mov    0x8(%ebp),%eax
0854b49f +0x0327:  mov    %eax,(%esp)
0854b4a2 +0x032a:  call   089000ca <_ZN15upgrade_table_tC1Ev>  ; upgrade_table_t::upgrade_table_t()
0854b4a7 +0x032f:  leave
0854b4a8 +0x0330:  ret
0854b4a9 +0x0331:  nop
0854b4aa +0x0332:  push   %ebp
0854b4ab +0x0333:  mov    %esp,%ebp
0854b4ad +0x0335:  sub    $0x18,%esp
0854b4b0 +0x0338:  mov    0x8(%ebp),%eax
0854b4b3 +0x033b:  mov    %eax,(%esp)
0854b4b6 +0x033e:  call   0854b3f6 <+0x27e>
0854b4bb +0x0343:  leave
0854b4bc +0x0344:  ret
0854b4bd +0x0345:  nop
0854b4be +0x0346:  push   %ebp
0854b4bf +0x0347:  mov    %esp,%ebp
0854b4c1 +0x0349:  mov    0x8(%ebp),%eax
0854b4c4 +0x034c:  movzbl 0x6(%eax),%eax
0854b4c8 +0x0350:  and    $0x1f,%eax
0854b4cb +0x0353:  add    $0x1,%eax
0854b4ce +0x0356:  and    $0x1f,%eax
0854b4d1 +0x0359:  mov    0x8(%ebp),%edx
0854b4d4 +0x035c:  mov    %eax,%ecx
0854b4d6 +0x035e:  and    $0x1f,%ecx
0854b4d9 +0x0361:  movzbl 0x6(%edx),%eax
0854b4dd +0x0365:  and    $0xffffffe0,%eax
0854b4e0 +0x0368:  or     %ecx,%eax
0854b4e2 +0x036a:  mov    %al,0x6(%edx)
0854b4e5 +0x036d:  pop    %ebp
0854b4e6 +0x036e:  ret
0854b4e7 +0x036f:  nop
0854b4e8 +0x0370:  push   %ebp
0854b4e9 +0x0371:  mov    %esp,%ebp
0854b4eb +0x0373:  mov    0x8(%ebp),%eax
0854b4ee +0x0376:  movzwl 0x2ee(%eax),%eax
0854b4f5 +0x037d:  pop    %ebp
0854b4f6 +0x037e:  ret
0854b4f7 +0x037f:  nop
0854b4f8 +0x0380:  push   %ebp
0854b4f9 +0x0381:  mov    %esp,%ebp
0854b4fb +0x0383:  mov    0x8(%ebp),%eax
0854b4fe +0x0386:  movzwl 0x310(%eax),%eax
0854b505 +0x038d:  pop    %ebp
0854b506 +0x038e:  ret
0854b507 +0x038f:  nop
0854b508 +0x0390:  push   %ebp
0854b509 +0x0391:  mov    %esp,%ebp
0854b50b +0x0393:  mov    0x8(%ebp),%eax
0854b50e +0x0396:  movzwl 0x314(%eax),%eax
0854b515 +0x039d:  pop    %ebp
0854b516 +0x039e:  ret
0854b517 +0x039f:  nop
0854b518 +0x03a0:  push   %ebp
0854b519 +0x03a1:  mov    %esp,%ebp
0854b51b +0x03a3:  mov    0x8(%ebp),%eax
0854b51e +0x03a6:  movzbl 0x344(%eax),%eax
0854b525 +0x03ad:  pop    %ebp
0854b526 +0x03ae:  ret
0854b527 +0x03af:  nop
0854b528 +0x03b0:  push   %ebp
0854b529 +0x03b1:  mov    %esp,%ebp
0854b52b +0x03b3:  mov    0x8(%ebp),%eax
0854b52e +0x03b6:  add    $0x198,%eax
0854b533 +0x03bb:  pop    %ebp
0854b534 +0x03bc:  ret
0854b535 +0x03bd:  nop
0854b536 +0x03be:  push   %ebp
0854b537 +0x03bf:  mov    %esp,%ebp
0854b539 +0x03c1:  mov    0x8(%ebp),%eax
0854b53c +0x03c4:  add    $0x1a4,%eax
0854b541 +0x03c9:  pop    %ebp
0854b542 +0x03ca:  ret
0854b543 +0x03cb:  nop
0854b544 +0x03cc:  push   %ebp
0854b545 +0x03cd:  mov    %esp,%ebp
0854b547 +0x03cf:  mov    0x8(%ebp),%eax
0854b54a +0x03d2:  add    $0x1b0,%eax
0854b54f +0x03d7:  pop    %ebp
0854b550 +0x03d8:  ret
0854b551 +0x03d9:  nop
0854b552 +0x03da:  push   %ebp
0854b553 +0x03db:  mov    %esp,%ebp
0854b555 +0x03dd:  mov    0x8(%ebp),%eax
0854b558 +0x03e0:  mov    0x1d0(%eax),%eax
0854b55e +0x03e6:  pop    %ebp
0854b55f +0x03e7:  ret
0854b560 +0x03e8:  push   %ebp
0854b561 +0x03e9:  mov    %esp,%ebp
0854b563 +0x03eb:  mov    0x8(%ebp),%eax
0854b566 +0x03ee:  add    $0x100,%eax
0854b56b +0x03f3:  pop    %ebp
0854b56c +0x03f4:  ret
0854b56d +0x03f5:  nop
0854b56e +0x03f6:  push   %ebp
0854b56f +0x03f7:  mov    %esp,%ebp
0854b571 +0x03f9:  mov    0x8(%ebp),%eax
0854b574 +0x03fc:  movzwl 0x4(%eax),%eax
0854b578 +0x0400:  cwtl
0854b579 +0x0401:  pop    %ebp
0854b57a +0x0402:  ret
0854b57b +0x0403:  nop
0854b57c +0x0404:  push   %ebp
0854b57d +0x0405:  mov    %esp,%ebp
0854b57f +0x0407:  mov    0x8(%ebp),%eax
0854b582 +0x040a:  mov    0x84(%eax),%eax
0854b588 +0x0410:  cmp    $0x1,%eax
0854b58b +0x0413:  sete   %al
0854b58e +0x0416:  pop    %ebp
0854b58f +0x0417:  ret
0854b590 +0x0418:  push   %ebp
0854b591 +0x0419:  mov    %esp,%ebp
0854b593 +0x041b:  mov    0x8(%ebp),%eax
0854b596 +0x041e:  mov    0x84(%eax),%eax
0854b59c +0x0424:  cmp    $0x2,%eax
0854b59f +0x0427:  sete   %al
0854b5a2 +0x042a:  pop    %ebp
0854b5a3 +0x042b:  ret
0854b5a4 +0x042c:  push   %ebp
0854b5a5 +0x042d:  mov    %esp,%ebp
0854b5a7 +0x042f:  push   %esi
0854b5a8 +0x0430:  push   %ebx
0854b5a9 +0x0431:  sub    $0x10,%esp
0854b5ac +0x0434:  mov    0x8(%ebp),%eax
0854b5af +0x0437:  mov    %eax,(%esp)
0854b5b2 +0x043a:  call   0854ba84 <+0x90c>
0854b5b7 +0x043f:  mov    0x8(%ebp),%edx
0854b5ba +0x0442:  mov    0x4(%edx),%ecx
0854b5bd +0x0445:  mov    0x8(%ebp),%edx
0854b5c0 +0x0448:  mov    (%edx),%edx
0854b5c2 +0x044a:  mov    %eax,0x8(%esp)
0854b5c6 +0x044e:  mov    %ecx,0x4(%esp)
0854b5ca +0x0452:  mov    %edx,(%esp)
0854b5cd +0x0455:  call   0854ba8c <+0x914>
0854b5d2 +0x045a:  jmp    0854b5ef <+0x477>
0854b5d4 +0x045c:  mov    %edx,%ebx
0854b5d6 +0x045e:  mov    %eax,%esi
0854b5d8 +0x0460:  mov    0x8(%ebp),%eax
0854b5db +0x0463:  mov    %eax,(%esp)
0854b5de +0x0466:  call   0854ba18 <+0x8a0>
0854b5e3 +0x046b:  mov    %esi,%eax
0854b5e5 +0x046d:  mov    %ebx,%edx
0854b5e7 +0x046f:  mov    %eax,(%esp)
0854b5ea +0x0472:  call   08ae3750 <_Unwind_Resume>
0854b5ef +0x0477:  mov    0x8(%ebp),%eax
0854b5f2 +0x047a:  mov    %eax,(%esp)
0854b5f5 +0x047d:  call   0854ba18 <+0x8a0>
0854b5fa +0x0482:  add    $0x10,%esp
0854b5fd +0x0485:  pop    %ebx
0854b5fe +0x0486:  pop    %esi
0854b5ff +0x0487:  pop    %ebp
0854b600 +0x0488:  ret
0854b601 +0x0489:  nop
0854b602 +0x048a:  push   %ebp
0854b603 +0x048b:  mov    %esp,%ebp
0854b605 +0x048d:  mov    0x8(%ebp),%eax
0854b608 +0x0490:  mov    0x4(%eax),%eax
0854b60b +0x0493:  mov    %eax,%edx
0854b60d +0x0495:  mov    0x8(%ebp),%eax
0854b610 +0x0498:  mov    (%eax),%eax
0854b612 +0x049a:  mov    %edx,%ecx
0854b614 +0x049c:  sub    %eax,%ecx
0854b616 +0x049e:  mov    %ecx,%eax
0854b618 +0x04a0:  sar    $0x2,%eax
0854b61b +0x04a3:  imul   $0x684bda13,%eax,%eax
0854b621 +0x04a9:  pop    %ebp
0854b622 +0x04aa:  ret
0854b623 +0x04ab:  nop
0854b624 +0x04ac:  push   %ebp
0854b625 +0x04ad:  mov    %esp,%ebp
0854b627 +0x04af:  push   %esi
0854b628 +0x04b0:  push   %ebx
0854b629 +0x04b1:  sub    $0x10,%esp
0854b62c +0x04b4:  mov    0x8(%ebp),%eax
0854b62f +0x04b7:  mov    %eax,(%esp)
0854b632 +0x04ba:  call   0854bb28 <+0x9b0>
0854b637 +0x04bf:  mov    0x8(%ebp),%edx
0854b63a +0x04c2:  mov    0x4(%edx),%ecx
0854b63d +0x04c5:  mov    0x8(%ebp),%edx
0854b640 +0x04c8:  mov    (%edx),%edx
0854b642 +0x04ca:  mov    %eax,0x8(%esp)
0854b646 +0x04ce:  mov    %ecx,0x4(%esp)
0854b64a +0x04d2:  mov    %edx,(%esp)
0854b64d +0x04d5:  call   0854bb30 <+0x9b8>
0854b652 +0x04da:  jmp    0854b66f <+0x4f7>
0854b654 +0x04dc:  mov    %edx,%ebx
0854b656 +0x04de:  mov    %eax,%esi
0854b658 +0x04e0:  mov    0x8(%ebp),%eax
0854b65b +0x04e3:  mov    %eax,(%esp)
0854b65e +0x04e6:  call   0854baba <+0x942>
0854b663 +0x04eb:  mov    %esi,%eax
0854b665 +0x04ed:  mov    %ebx,%edx
0854b667 +0x04ef:  mov    %eax,(%esp)
0854b66a +0x04f2:  call   08ae3750 <_Unwind_Resume>
0854b66f +0x04f7:  mov    0x8(%ebp),%eax
0854b672 +0x04fa:  mov    %eax,(%esp)
0854b675 +0x04fd:  call   0854baba <+0x942>
0854b67a +0x0502:  add    $0x10,%esp
0854b67d +0x0505:  pop    %ebx
0854b67e +0x0506:  pop    %esi
0854b67f +0x0507:  pop    %ebp
0854b680 +0x0508:  ret
0854b681 +0x0509:  nop
0854b682 +0x050a:  push   %ebp
0854b683 +0x050b:  mov    %esp,%ebp
0854b685 +0x050d:  sub    $0x18,%esp
0854b688 +0x0510:  mov    0x8(%ebp),%eax
0854b68b +0x0513:  mov    %eax,(%esp)
0854b68e +0x0516:  call   0854bb4a <+0x9d2>
0854b693 +0x051b:  leave
0854b694 +0x051c:  ret
0854b695 +0x051d:  nop
0854b696 +0x051e:  push   %ebp
0854b697 +0x051f:  mov    %esp,%ebp
0854b699 +0x0521:  push   %esi
0854b69a +0x0522:  push   %ebx
0854b69b +0x0523:  sub    $0x10,%esp
0854b69e +0x0526:  mov    0x8(%ebp),%eax
0854b6a1 +0x0529:  mov    %eax,(%esp)
0854b6a4 +0x052c:  call   08096fc8 <_GLOBAL__I_g_maxTotalDefenseRate+0x5b8>  ; global constructors keyed to g_maxTotalDefenseRate+0x5b8
0854b6a9 +0x0531:  mov    %eax,0x4(%esp)
0854b6ad +0x0535:  mov    0x8(%ebp),%eax
0854b6b0 +0x0538:  mov    %eax,(%esp)
0854b6b3 +0x053b:  call   0854bb5e <+0x9e6>
0854b6b8 +0x0540:  jmp    0854b6d5 <+0x55d>
0854b6ba +0x0542:  mov    %edx,%ebx
0854b6bc +0x0544:  mov    %eax,%esi
0854b6be +0x0546:  mov    0x8(%ebp),%eax
0854b6c1 +0x0549:  mov    %eax,(%esp)
0854b6c4 +0x054c:  call   0854b682 <+0x50a>
0854b6c9 +0x0551:  mov    %esi,%eax
0854b6cb +0x0553:  mov    %ebx,%edx
0854b6cd +0x0555:  mov    %eax,(%esp)
0854b6d0 +0x0558:  call   08ae3750 <_Unwind_Resume>
0854b6d5 +0x055d:  mov    0x8(%ebp),%eax
0854b6d8 +0x0560:  mov    %eax,(%esp)
0854b6db +0x0563:  call   0854b682 <+0x50a>
0854b6e0 +0x0568:  add    $0x10,%esp
0854b6e3 +0x056b:  pop    %ebx
0854b6e4 +0x056c:  pop    %esi
0854b6e5 +0x056d:  pop    %ebp
0854b6e6 +0x056e:  ret
0854b6e7 +0x056f:  nop
0854b6e8 +0x0570:  push   %ebp
0854b6e9 +0x0571:  mov    %esp,%ebp
0854b6eb +0x0573:  push   %esi
0854b6ec +0x0574:  push   %ebx
0854b6ed +0x0575:  sub    $0x10,%esp
0854b6f0 +0x0578:  mov    0x8(%ebp),%eax
0854b6f3 +0x057b:  mov    %eax,(%esp)
0854b6f6 +0x057e:  call   0854bbc8 <+0xa50>
0854b6fb +0x0583:  mov    0x8(%ebp),%eax
0854b6fe +0x0586:  mov    0xc(%eax),%edx
0854b701 +0x0589:  mov    0x8(%ebp),%eax
0854b704 +0x058c:  mov    0x8(%eax),%eax
0854b707 +0x058f:  mov    %edx,0x8(%esp)
0854b70b +0x0593:  mov    %eax,0x4(%esp)
0854b70f +0x0597:  mov    0x8(%ebp),%eax
0854b712 +0x059a:  mov    %eax,(%esp)
0854b715 +0x059d:  call   0854bbfa <+0xa82>
0854b71a +0x05a2:  jmp    0854b73a <+0x5c2>
0854b71c +0x05a4:  mov    %edx,%ebx
0854b71e +0x05a6:  mov    %eax,%esi
0854b720 +0x05a8:  mov    0x8(%ebp),%eax
0854b723 +0x05ab:  add    $0x4,%eax
0854b726 +0x05ae:  mov    %eax,(%esp)
0854b729 +0x05b1:  call   0854bbb4 <+0xa3c>
0854b72e +0x05b6:  mov    %esi,%eax
0854b730 +0x05b8:  mov    %ebx,%edx
0854b732 +0x05ba:  mov    %eax,(%esp)
0854b735 +0x05bd:  call   08ae3750 <_Unwind_Resume>
0854b73a +0x05c2:  mov    0x8(%ebp),%eax
0854b73d +0x05c5:  add    $0x4,%eax
0854b740 +0x05c8:  mov    %eax,(%esp)
0854b743 +0x05cb:  call   0854bbb4 <+0xa3c>
0854b748 +0x05d0:  add    $0x10,%esp
0854b74b +0x05d3:  pop    %ebx
0854b74c +0x05d4:  pop    %esi
0854b74d +0x05d5:  pop    %ebp
0854b74e +0x05d6:  ret
0854b74f +0x05d7:  push   %ebp
0854b750 +0x05d8:  mov    %esp,%ebp
0854b752 +0x05da:  push   %esi
0854b753 +0x05db:  push   %ebx
0854b754 +0x05dc:  sub    $0x10,%esp
0854b757 +0x05df:  mov    0x8(%ebp),%esi
0854b75a +0x05e2:  mov    0x10(%ebp),%eax
0854b75d +0x05e5:  mov    %eax,(%esp)
0854b760 +0x05e8:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0854b765 +0x05ed:  mov    %eax,%ebx
0854b767 +0x05ef:  mov    0xc(%ebp),%eax
0854b76a +0x05f2:  mov    %eax,(%esp)
0854b76d +0x05f5:  call   0811244a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x195c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x195c
0854b772 +0x05fa:  mov    %ebx,0x8(%esp)
0854b776 +0x05fe:  mov    %eax,0x4(%esp)
0854b77a +0x0602:  mov    %esi,(%esp)
0854b77d +0x0605:  call   0854bc3e <+0xac6>
0854b782 +0x060a:  mov    %esi,%eax
0854b784 +0x060c:  add    $0x10,%esp
0854b787 +0x060f:  pop    %ebx
0854b788 +0x0610:  pop    %esi
0854b789 +0x0611:  pop    %ebp
0854b78a +0x0612:  ret    $0x4
0854b78d +0x0615:  nop
0854b78e +0x0616:  push   %ebp
0854b78f +0x0617:  mov    %esp,%ebp
0854b791 +0x0619:  sub    $0x18,%esp
0854b794 +0x061c:  mov    0xc(%ebp),%eax
0854b797 +0x061f:  mov    %eax,(%esp)
0854b79a +0x0622:  call   08080fec <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1012>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1012
0854b79f +0x0627:  mov    (%eax),%eax
0854b7a1 +0x0629:  mov    %eax,%edx
0854b7a3 +0x062b:  mov    0x8(%ebp),%eax
0854b7a6 +0x062e:  mov    %edx,(%eax)
0854b7a8 +0x0630:  mov    0xc(%ebp),%eax
0854b7ab +0x0633:  add    $0x4,%eax
0854b7ae +0x0636:  mov    %eax,(%esp)
0854b7b1 +0x0639:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
0854b7b6 +0x063e:  mov    (%eax),%eax
0854b7b8 +0x0640:  mov    %eax,%edx
0854b7ba +0x0642:  mov    0x8(%ebp),%eax
0854b7bd +0x0645:  mov    %edx,0x4(%eax)
0854b7c0 +0x0648:  leave
0854b7c1 +0x0649:  ret
0854b7c2 +0x064a:  push   %ebp
0854b7c3 +0x064b:  mov    %esp,%ebp
0854b7c5 +0x064d:  sub    $0x18,%esp
0854b7c8 +0x0650:  mov    0xc(%ebp),%eax
0854b7cb +0x0653:  mov    %eax,0x4(%esp)
0854b7cf +0x0657:  mov    0x8(%ebp),%eax
0854b7d2 +0x065a:  mov    %eax,(%esp)
0854b7d5 +0x065d:  call   0854bc6c <+0xaf4>
0854b7da +0x0662:  mov    0xc(%ebp),%eax
0854b7dd +0x0665:  mov    %eax,0x4(%esp)
0854b7e1 +0x0669:  mov    0x8(%ebp),%eax
0854b7e4 +0x066c:  mov    %eax,(%esp)
0854b7e7 +0x066f:  call   0854bc96 <+0xb1e>
0854b7ec +0x0674:  leave
0854b7ed +0x0675:  ret
0854b7ee +0x0676:  push   %ebp
0854b7ef +0x0677:  mov    %esp,%ebp
0854b7f1 +0x0679:  sub    $0x28,%esp
0854b7f4 +0x067c:  mov    0x8(%ebp),%eax
0854b7f7 +0x067f:  mov    %eax,(%esp)
0854b7fa +0x0682:  call   080ddffe <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb47>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb47
0854b7ff +0x0687:  cmp    0xc(%ebp),%eax
0854b802 +0x068a:  setb   %al
0854b805 +0x068d:  test   %al,%al
0854b807 +0x068f:  je     0854b815 <+0x69d>
0854b809 +0x0691:  movl   $"vector::reserve",(%esp)
0854b810 +0x0698:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0854b815 +0x069d:  mov    0x8(%ebp),%eax
0854b818 +0x06a0:  mov    %eax,(%esp)
0854b81b +0x06a3:  call   083120ba <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3c9f>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3c9f
0854b820 +0x06a8:  cmp    0xc(%ebp),%eax
0854b823 +0x06ab:  setb   %al
0854b826 +0x06ae:  test   %al,%al
0854b828 +0x06b0:  je     0854b90f <+0x797>
0854b82e +0x06b6:  mov    0x8(%ebp),%eax
0854b831 +0x06b9:  mov    %eax,(%esp)
0854b834 +0x06bc:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0854b839 +0x06c1:  mov    %eax,-0x10(%ebp)
0854b83c +0x06c4:  mov    0x8(%ebp),%eax
0854b83f +0x06c7:  lea    0x4(%eax),%edx
0854b842 +0x06ca:  lea    -0x18(%ebp),%eax
0854b845 +0x06cd:  mov    %edx,0x4(%esp)
0854b849 +0x06d1:  mov    %eax,(%esp)
0854b84c +0x06d4:  call   080ddf74 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xabd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xabd
0854b851 +0x06d9:  sub    $0x4,%esp
0854b854 +0x06dc:  mov    0x8(%ebp),%edx
0854b857 +0x06df:  lea    -0x14(%ebp),%eax
0854b85a +0x06e2:  mov    %edx,0x4(%esp)
0854b85e +0x06e6:  mov    %eax,(%esp)
0854b861 +0x06e9:  call   080ddf74 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xabd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xabd
0854b866 +0x06ee:  sub    $0x4,%esp
0854b869 +0x06f1:  mov    -0x18(%ebp),%eax
0854b86c +0x06f4:  mov    %eax,0xc(%esp)
0854b870 +0x06f8:  mov    -0x14(%ebp),%eax
0854b873 +0x06fb:  mov    %eax,0x8(%esp)
0854b877 +0x06ff:  mov    0xc(%ebp),%eax
0854b87a +0x0702:  mov    %eax,0x4(%esp)
0854b87e +0x0706:  mov    0x8(%ebp),%eax
0854b881 +0x0709:  mov    %eax,(%esp)
0854b884 +0x070c:  call   0854bcae <+0xb36>
0854b889 +0x0711:  mov    %eax,-0xc(%ebp)
0854b88c +0x0714:  mov    0x8(%ebp),%eax
0854b88f +0x0717:  mov    %eax,(%esp)
0854b892 +0x071a:  call   080dd7f2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x33b>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x33b
0854b897 +0x071f:  mov    0x8(%ebp),%edx
0854b89a +0x0722:  mov    0x4(%edx),%ecx
0854b89d +0x0725:  mov    0x8(%ebp),%edx
0854b8a0 +0x0728:  mov    (%edx),%edx
0854b8a2 +0x072a:  mov    %eax,0x8(%esp)
0854b8a6 +0x072e:  mov    %ecx,0x4(%esp)
0854b8aa +0x0732:  mov    %edx,(%esp)
0854b8ad +0x0735:  call   080dd7fa <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x343>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x343
0854b8b2 +0x073a:  mov    0x8(%ebp),%eax
0854b8b5 +0x073d:  mov    0x8(%eax),%eax
0854b8b8 +0x0740:  mov    %eax,%edx
0854b8ba +0x0742:  mov    0x8(%ebp),%eax
0854b8bd +0x0745:  mov    (%eax),%eax
0854b8bf +0x0747:  mov    %edx,%ecx
0854b8c1 +0x0749:  sub    %eax,%ecx
0854b8c3 +0x074b:  mov    %ecx,%eax
0854b8c5 +0x074d:  sar    $0x3,%eax
0854b8c8 +0x0750:  mov    %eax,%ecx
0854b8ca +0x0752:  mov    0x8(%ebp),%eax
0854b8cd +0x0755:  mov    (%eax),%edx
0854b8cf +0x0757:  mov    0x8(%ebp),%eax
0854b8d2 +0x075a:  mov    %ecx,0x8(%esp)
0854b8d6 +0x075e:  mov    %edx,0x4(%esp)
0854b8da +0x0762:  mov    %eax,(%esp)
0854b8dd +0x0765:  call   080dd830 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x379>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x379
0854b8e2 +0x076a:  mov    0x8(%ebp),%eax
0854b8e5 +0x076d:  mov    -0xc(%ebp),%edx
0854b8e8 +0x0770:  mov    %edx,(%eax)
0854b8ea +0x0772:  mov    -0x10(%ebp),%eax
0854b8ed +0x0775:  shl    $0x3,%eax
0854b8f0 +0x0778:  mov    %eax,%edx
0854b8f2 +0x077a:  add    -0xc(%ebp),%edx
0854b8f5 +0x077d:  mov    0x8(%ebp),%eax
0854b8f8 +0x0780:  mov    %edx,0x4(%eax)
0854b8fb +0x0783:  mov    0x8(%ebp),%eax
0854b8fe +0x0786:  mov    (%eax),%eax
0854b900 +0x0788:  mov    0xc(%ebp),%edx
0854b903 +0x078b:  shl    $0x3,%edx
0854b906 +0x078e:  lea    (%eax,%edx,1),%edx
0854b909 +0x0791:  mov    0x8(%ebp),%eax
0854b90c +0x0794:  mov    %edx,0x8(%eax)
0854b90f +0x0797:  leave
0854b910 +0x0798:  ret
0854b911 +0x0799:  nop
0854b912 +0x079a:  push   %ebp
0854b913 +0x079b:  mov    %esp,%ebp
0854b915 +0x079d:  push   %ebx
0854b916 +0x079e:  sub    $0x14,%esp
0854b919 +0x07a1:  mov    0x8(%ebp),%ebx
0854b91c +0x07a4:  mov    0xc(%ebp),%eax
0854b91f +0x07a7:  mov    0x10(%ebp),%edx
0854b922 +0x07aa:  mov    %edx,0x8(%esp)
0854b926 +0x07ae:  mov    %eax,0x4(%esp)
0854b92a +0x07b2:  mov    %ebx,(%esp)
0854b92d +0x07b5:  call   0854bd38 <+0xbc0>
0854b932 +0x07ba:  sub    $0x4,%esp
0854b935 +0x07bd:  mov    %ebx,%eax
0854b937 +0x07bf:  mov    -0x4(%ebp),%ebx
0854b93a +0x07c2:  leave
0854b93b +0x07c3:  ret    $0x4
0854b93e +0x07c6:  push   %ebp
0854b93f +0x07c7:  mov    %esp,%ebp
0854b941 +0x07c9:  push   %ebx
0854b942 +0x07ca:  sub    $0x14,%esp
0854b945 +0x07cd:  mov    0x8(%ebp),%ebx
0854b948 +0x07d0:  mov    0xc(%ebp),%eax
0854b94b +0x07d3:  mov    %eax,0x4(%esp)
0854b94f +0x07d7:  mov    %ebx,(%esp)
0854b952 +0x07da:  call   0854bdf6 <+0xc7e>
0854b957 +0x07df:  sub    $0x4,%esp
0854b95a +0x07e2:  mov    %ebx,%eax
0854b95c +0x07e4:  mov    -0x4(%ebp),%ebx
0854b95f +0x07e7:  leave
0854b960 +0x07e8:  ret    $0x4
0854b963 +0x07eb:  nop
0854b964 +0x07ec:  push   %ebp
0854b965 +0x07ed:  mov    %esp,%ebp
0854b967 +0x07ef:  mov    0x8(%ebp),%eax
0854b96a +0x07f2:  mov    (%eax),%edx
0854b96c +0x07f4:  mov    0xc(%ebp),%eax
0854b96f +0x07f7:  mov    (%eax),%eax
0854b971 +0x07f9:  cmp    %eax,%edx
0854b973 +0x07fb:  sete   %al
0854b976 +0x07fe:  pop    %ebp
0854b977 +0x07ff:  ret
0854b978 +0x0800:  push   %ebp
0854b979 +0x0801:  mov    %esp,%ebp
0854b97b +0x0803:  mov    0x8(%ebp),%eax
0854b97e +0x0806:  mov    (%eax),%eax
0854b980 +0x0808:  add    $0x10,%eax
0854b983 +0x080b:  pop    %ebp
0854b984 +0x080c:  ret
0854b985 +0x080d:  nop
0854b986 +0x080e:  push   %ebp
0854b987 +0x080f:  mov    %esp,%ebp
0854b989 +0x0811:  mov    0x8(%ebp),%eax
0854b98c +0x0814:  mov    (%eax),%eax
0854b98e +0x0816:  pop    %ebp
0854b98f +0x0817:  ret
0854b990 +0x0818:  push   %ebp
0854b991 +0x0819:  mov    %esp,%ebp
0854b993 +0x081b:  push   %ebx
0854b994 +0x081c:  sub    $0x14,%esp
0854b997 +0x081f:  mov    0x8(%ebp),%ebx
0854b99a +0x0822:  mov    0xc(%ebp),%eax
0854b99d +0x0825:  mov    0x10(%ebp),%edx
0854b9a0 +0x0828:  mov    %edx,0x8(%esp)
0854b9a4 +0x082c:  mov    %eax,0x4(%esp)
0854b9a8 +0x0830:  mov    %ebx,(%esp)
0854b9ab +0x0833:  call   0854be1c <+0xca4>
0854b9b0 +0x0838:  sub    $0x4,%esp
0854b9b3 +0x083b:  mov    %ebx,%eax
0854b9b5 +0x083d:  mov    -0x4(%ebp),%ebx
0854b9b8 +0x0840:  leave
0854b9b9 +0x0841:  ret    $0x4
0854b9bc +0x0844:  push   %ebp
0854b9bd +0x0845:  mov    %esp,%ebp
0854b9bf +0x0847:  push   %ebx
0854b9c0 +0x0848:  sub    $0x14,%esp
0854b9c3 +0x084b:  mov    0x8(%ebp),%ebx
0854b9c6 +0x084e:  mov    0xc(%ebp),%eax
0854b9c9 +0x0851:  mov    %eax,0x4(%esp)
0854b9cd +0x0855:  mov    %ebx,(%esp)
0854b9d0 +0x0858:  call   0854beda <+0xd62>
0854b9d5 +0x085d:  sub    $0x4,%esp
0854b9d8 +0x0860:  mov    %ebx,%eax
0854b9da +0x0862:  mov    -0x4(%ebp),%ebx
0854b9dd +0x0865:  leave
0854b9de +0x0866:  ret    $0x4
0854b9e1 +0x0869:  nop
0854b9e2 +0x086a:  push   %ebp
0854b9e3 +0x086b:  mov    %esp,%ebp
0854b9e5 +0x086d:  mov    0x8(%ebp),%eax
0854b9e8 +0x0870:  mov    (%eax),%edx
0854b9ea +0x0872:  mov    0xc(%ebp),%eax
0854b9ed +0x0875:  mov    (%eax),%eax
0854b9ef +0x0877:  cmp    %eax,%edx
0854b9f1 +0x0879:  setne  %al
0854b9f4 +0x087c:  pop    %ebp
0854b9f5 +0x087d:  ret
0854b9f6 +0x087e:  push   %ebp
0854b9f7 +0x087f:  mov    %esp,%ebp
0854b9f9 +0x0881:  mov    0x8(%ebp),%eax
0854b9fc +0x0884:  mov    (%eax),%eax
0854b9fe +0x0886:  add    $0x10,%eax
0854ba01 +0x0889:  pop    %ebp
0854ba02 +0x088a:  ret
0854ba03 +0x088b:  nop
0854ba04 +0x088c:  push   %ebp
0854ba05 +0x088d:  mov    %esp,%ebp
0854ba07 +0x088f:  sub    $0x18,%esp
0854ba0a +0x0892:  mov    0x8(%ebp),%eax
0854ba0d +0x0895:  mov    %eax,(%esp)
0854ba10 +0x0898:  call   0854bf00 <+0xd88>
0854ba15 +0x089d:  leave
0854ba16 +0x089e:  ret
0854ba17 +0x089f:  nop
0854ba18 +0x08a0:  push   %ebp
0854ba19 +0x08a1:  mov    %esp,%ebp
0854ba1b +0x08a3:  push   %esi
0854ba1c +0x08a4:  push   %ebx
0854ba1d +0x08a5:  sub    $0x10,%esp
0854ba20 +0x08a8:  mov    0x8(%ebp),%eax
0854ba23 +0x08ab:  mov    0x8(%eax),%eax
0854ba26 +0x08ae:  mov    %eax,%edx
0854ba28 +0x08b0:  mov    0x8(%ebp),%eax
0854ba2b +0x08b3:  mov    (%eax),%eax
0854ba2d +0x08b5:  mov    %edx,%ecx
0854ba2f +0x08b7:  sub    %eax,%ecx
0854ba31 +0x08b9:  mov    %ecx,%eax
0854ba33 +0x08bb:  sar    %eax
0854ba35 +0x08bd:  imul   $0xaaaaaaab,%eax,%eax
0854ba3b +0x08c3:  mov    %eax,%edx
0854ba3d +0x08c5:  mov    0x8(%ebp),%eax
0854ba40 +0x08c8:  mov    (%eax),%eax
0854ba42 +0x08ca:  mov    %edx,0x8(%esp)
0854ba46 +0x08ce:  mov    %eax,0x4(%esp)
0854ba4a +0x08d2:  mov    0x8(%ebp),%eax
0854ba4d +0x08d5:  mov    %eax,(%esp)
0854ba50 +0x08d8:  call   0854bf14 <+0xd9c>
0854ba55 +0x08dd:  jmp    0854ba72 <+0x8fa>
0854ba57 +0x08df:  mov    %edx,%ebx
0854ba59 +0x08e1:  mov    %eax,%esi
0854ba5b +0x08e3:  mov    0x8(%ebp),%eax
0854ba5e +0x08e6:  mov    %eax,(%esp)
0854ba61 +0x08e9:  call   0854ba04 <+0x88c>
0854ba66 +0x08ee:  mov    %esi,%eax
0854ba68 +0x08f0:  mov    %ebx,%edx
0854ba6a +0x08f2:  mov    %eax,(%esp)
0854ba6d +0x08f5:  call   08ae3750 <_Unwind_Resume>
0854ba72 +0x08fa:  mov    0x8(%ebp),%eax
0854ba75 +0x08fd:  mov    %eax,(%esp)
0854ba78 +0x0900:  call   0854ba04 <+0x88c>
0854ba7d +0x0905:  add    $0x10,%esp
0854ba80 +0x0908:  pop    %ebx
0854ba81 +0x0909:  pop    %esi
0854ba82 +0x090a:  pop    %ebp
0854ba83 +0x090b:  ret
0854ba84 +0x090c:  push   %ebp
0854ba85 +0x090d:  mov    %esp,%ebp
0854ba87 +0x090f:  mov    0x8(%ebp),%eax
0854ba8a +0x0912:  pop    %ebp
0854ba8b +0x0913:  ret
0854ba8c +0x0914:  push   %ebp
0854ba8d +0x0915:  mov    %esp,%ebp
0854ba8f +0x0917:  sub    $0x18,%esp
0854ba92 +0x091a:  mov    0xc(%ebp),%eax
0854ba95 +0x091d:  mov    %eax,0x4(%esp)
0854ba99 +0x0921:  mov    0x8(%ebp),%eax
0854ba9c +0x0924:  mov    %eax,(%esp)
0854ba9f +0x0927:  call   0854bf3b <+0xdc3>
0854baa4 +0x092c:  leave
0854baa5 +0x092d:  ret
0854baa6 +0x092e:  push   %ebp
0854baa7 +0x092f:  mov    %esp,%ebp
0854baa9 +0x0931:  sub    $0x18,%esp
0854baac +0x0934:  mov    0x8(%ebp),%eax
0854baaf +0x0937:  mov    %eax,(%esp)
0854bab2 +0x093a:  call   0854bf56 <+0xdde>
0854bab7 +0x093f:  leave
0854bab8 +0x0940:  ret
0854bab9 +0x0941:  nop
0854baba +0x0942:  push   %ebp
0854babb +0x0943:  mov    %esp,%ebp
0854babd +0x0945:  push   %esi
0854babe +0x0946:  push   %ebx
0854babf +0x0947:  sub    $0x10,%esp
0854bac2 +0x094a:  mov    0x8(%ebp),%eax
0854bac5 +0x094d:  mov    0x8(%eax),%eax
0854bac8 +0x0950:  mov    %eax,%edx
0854baca +0x0952:  mov    0x8(%ebp),%eax
0854bacd +0x0955:  mov    (%eax),%eax
0854bacf +0x0957:  mov    %edx,%ecx
0854bad1 +0x0959:  sub    %eax,%ecx
0854bad3 +0x095b:  mov    %ecx,%eax
0854bad5 +0x095d:  sar    $0x2,%eax
0854bad8 +0x0960:  imul   $0x684bda13,%eax,%eax
0854bade +0x0966:  mov    %eax,%edx
0854bae0 +0x0968:  mov    0x8(%ebp),%eax
0854bae3 +0x096b:  mov    (%eax),%eax
0854bae5 +0x096d:  mov    %edx,0x8(%esp)
0854bae9 +0x0971:  mov    %eax,0x4(%esp)
0854baed +0x0975:  mov    0x8(%ebp),%eax
0854baf0 +0x0978:  mov    %eax,(%esp)
0854baf3 +0x097b:  call   0854bf6a <+0xdf2>
0854baf8 +0x0980:  jmp    0854bb15 <+0x99d>
0854bafa +0x0982:  mov    %edx,%ebx
0854bafc +0x0984:  mov    %eax,%esi
0854bafe +0x0986:  mov    0x8(%ebp),%eax
0854bb01 +0x0989:  mov    %eax,(%esp)
0854bb04 +0x098c:  call   0854baa6 <+0x92e>
0854bb09 +0x0991:  mov    %esi,%eax
0854bb0b +0x0993:  mov    %ebx,%edx
0854bb0d +0x0995:  mov    %eax,(%esp)
0854bb10 +0x0998:  call   08ae3750 <_Unwind_Resume>
0854bb15 +0x099d:  mov    0x8(%ebp),%eax
0854bb18 +0x09a0:  mov    %eax,(%esp)
0854bb1b +0x09a3:  call   0854baa6 <+0x92e>
0854bb20 +0x09a8:  add    $0x10,%esp
0854bb23 +0x09ab:  pop    %ebx
0854bb24 +0x09ac:  pop    %esi
0854bb25 +0x09ad:  pop    %ebp
0854bb26 +0x09ae:  ret
0854bb27 +0x09af:  nop
0854bb28 +0x09b0:  push   %ebp
0854bb29 +0x09b1:  mov    %esp,%ebp
0854bb2b +0x09b3:  mov    0x8(%ebp),%eax
0854bb2e +0x09b6:  pop    %ebp
0854bb2f +0x09b7:  ret
0854bb30 +0x09b8:  push   %ebp
0854bb31 +0x09b9:  mov    %esp,%ebp
0854bb33 +0x09bb:  sub    $0x18,%esp
0854bb36 +0x09be:  mov    0xc(%ebp),%eax
0854bb39 +0x09c1:  mov    %eax,0x4(%esp)
0854bb3d +0x09c5:  mov    0x8(%ebp),%eax
0854bb40 +0x09c8:  mov    %eax,(%esp)
0854bb43 +0x09cb:  call   0854bf91 <+0xe19>
0854bb48 +0x09d0:  leave
0854bb49 +0x09d1:  ret
0854bb4a +0x09d2:  push   %ebp
0854bb4b +0x09d3:  mov    %esp,%ebp
0854bb4d +0x09d5:  sub    $0x18,%esp
0854bb50 +0x09d8:  mov    0x8(%ebp),%eax
0854bb53 +0x09db:  mov    %eax,(%esp)
0854bb56 +0x09de:  call   0854bfac <+0xe34>
0854bb5b +0x09e3:  leave
0854bb5c +0x09e4:  ret
0854bb5d +0x09e5:  nop
0854bb5e +0x09e6:  push   %ebp
0854bb5f +0x09e7:  mov    %esp,%ebp
0854bb61 +0x09e9:  sub    $0x28,%esp
0854bb64 +0x09ec:  jmp    0854bba6 <+0xa2e>
0854bb66 +0x09ee:  mov    0xc(%ebp),%eax
0854bb69 +0x09f1:  mov    %eax,(%esp)
0854bb6c +0x09f4:  call   08097117 <_GLOBAL__I_g_maxTotalDefenseRate+0x707>  ; global constructors keyed to g_maxTotalDefenseRate+0x707
0854bb71 +0x09f9:  mov    %eax,0x4(%esp)
0854bb75 +0x09fd:  mov    0x8(%ebp),%eax
0854bb78 +0x0a00:  mov    %eax,(%esp)
0854bb7b +0x0a03:  call   0854bb5e <+0x9e6>
0854bb80 +0x0a08:  mov    0xc(%ebp),%eax
0854bb83 +0x0a0b:  mov    %eax,(%esp)
0854bb86 +0x0a0e:  call   0809710c <_GLOBAL__I_g_maxTotalDefenseRate+0x6fc>  ; global constructors keyed to g_maxTotalDefenseRate+0x6fc
0854bb8b +0x0a13:  mov    %eax,-0xc(%ebp)
0854bb8e +0x0a16:  mov    0xc(%ebp),%eax
0854bb91 +0x0a19:  mov    %eax,0x4(%esp)
0854bb95 +0x0a1d:  mov    0x8(%ebp),%eax
0854bb98 +0x0a20:  mov    %eax,(%esp)
0854bb9b +0x0a23:  call   0854bfb2 <+0xe3a>
0854bba0 +0x0a28:  mov    -0xc(%ebp),%eax
0854bba3 +0x0a2b:  mov    %eax,0xc(%ebp)
0854bba6 +0x0a2e:  cmpl   $0x0,0xc(%ebp)
0854bbaa +0x0a32:  setne  %al
0854bbad +0x0a35:  test   %al,%al
0854bbaf +0x0a37:  jne    0854bb66 <+0x9ee>
0854bbb1 +0x0a39:  leave
0854bbb2 +0x0a3a:  ret
0854bbb3 +0x0a3b:  nop
0854bbb4 +0x0a3c:  push   %ebp
0854bbb5 +0x0a3d:  mov    %esp,%ebp
0854bbb7 +0x0a3f:  sub    $0x18,%esp
0854bbba +0x0a42:  mov    0x8(%ebp),%eax
0854bbbd +0x0a45:  mov    %eax,(%esp)
0854bbc0 +0x0a48:  call   0854bfe6 <+0xe6e>
0854bbc5 +0x0a4d:  leave
0854bbc6 +0x0a4e:  ret
0854bbc7 +0x0a4f:  nop
0854bbc8 +0x0a50:  push   %ebp
0854bbc9 +0x0a51:  mov    %esp,%ebp
0854bbcb +0x0a53:  sub    $0x18,%esp
0854bbce +0x0a56:  mov    0x8(%ebp),%eax
0854bbd1 +0x0a59:  mov    0xc(%eax),%edx
0854bbd4 +0x0a5c:  mov    0x8(%ebp),%eax
0854bbd7 +0x0a5f:  mov    0x8(%eax),%eax
0854bbda +0x0a62:  mov    %edx,0x8(%esp)
0854bbde +0x0a66:  mov    %eax,0x4(%esp)
0854bbe2 +0x0a6a:  mov    0x8(%ebp),%eax
0854bbe5 +0x0a6d:  mov    %eax,(%esp)
0854bbe8 +0x0a70:  call   0854bfec <+0xe74>
0854bbed +0x0a75:  mov    0x8(%ebp),%eax
0854bbf0 +0x0a78:  movl   $0x0,0x10(%eax)
0854bbf7 +0x0a7f:  leave
0854bbf8 +0x0a80:  ret
0854bbf9 +0x0a81:  nop
0854bbfa +0x0a82:  push   %ebp
0854bbfb +0x0a83:  mov    %esp,%ebp
0854bbfd +0x0a85:  sub    $0x28,%esp
0854bc00 +0x0a88:  mov    0x8(%ebp),%eax
0854bc03 +0x0a8b:  add    $0x4,%eax
0854bc06 +0x0a8e:  mov    %eax,0x4(%esp)
0854bc0a +0x0a92:  lea    -0x9(%ebp),%eax
0854bc0d +0x0a95:  mov    %eax,(%esp)
0854bc10 +0x0a98:  call   0854c05a <+0xee2>
0854bc15 +0x0a9d:  mov    0x10(%ebp),%eax
0854bc18 +0x0aa0:  lea    0x1(%eax),%edx
0854bc1b +0x0aa3:  lea    -0x9(%ebp),%eax
0854bc1e +0x0aa6:  mov    %edx,0x8(%esp)
0854bc22 +0x0aaa:  mov    0xc(%ebp),%edx
0854bc25 +0x0aad:  mov    %edx,0x4(%esp)
0854bc29 +0x0ab1:  mov    %eax,(%esp)
0854bc2c +0x0ab4:  call   0854c082 <+0xf0a>
0854bc31 +0x0ab9:  lea    -0x9(%ebp),%eax
0854bc34 +0x0abc:  mov    %eax,(%esp)
0854bc37 +0x0abf:  call   0854c06e <+0xef6>
0854bc3c +0x0ac4:  leave
0854bc3d +0x0ac5:  ret
0854bc3e +0x0ac6:  push   %ebp
0854bc3f +0x0ac7:  mov    %esp,%ebp
0854bc41 +0x0ac9:  sub    $0x18,%esp
0854bc44 +0x0acc:  mov    0xc(%ebp),%eax
0854bc47 +0x0acf:  mov    %eax,(%esp)
0854bc4a +0x0ad2:  call   0811244a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x195c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x195c
0854bc4f +0x0ad7:  mov    (%eax),%edx
0854bc51 +0x0ad9:  mov    0x8(%ebp),%eax
0854bc54 +0x0adc:  mov    %edx,(%eax)
0854bc56 +0x0ade:  mov    0x10(%ebp),%eax
0854bc59 +0x0ae1:  mov    %eax,(%esp)
0854bc5c +0x0ae4:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0854bc61 +0x0ae9:  mov    (%eax),%edx
0854bc63 +0x0aeb:  mov    0x8(%ebp),%eax
0854bc66 +0x0aee:  mov    %edx,0x4(%eax)
0854bc69 +0x0af1:  leave
0854bc6a +0x0af2:  ret
0854bc6b +0x0af3:  nop
0854bc6c +0x0af4:  push   %ebp
0854bc6d +0x0af5:  mov    %esp,%ebp
0854bc6f +0x0af7:  sub    $0x18,%esp
0854bc72 +0x0afa:  mov    0x8(%ebp),%eax
0854bc75 +0x0afd:  mov    %eax,(%esp)
0854bc78 +0x0b00:  call   0854c096 <+0xf1e>
0854bc7d +0x0b05:  cmp    0xc(%ebp),%eax
0854bc80 +0x0b08:  setbe  %al
0854bc83 +0x0b0b:  test   %al,%al
0854bc85 +0x0b0d:  je     0854bc93 <+0xb1b>
0854bc87 +0x0b0f:  movl   $"vector::_M_range_check",(%esp)
0854bc8e +0x0b16:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
0854bc93 +0x0b1b:  leave
0854bc94 +0x0b1c:  ret
0854bc95 +0x0b1d:  nop
0854bc96 +0x0b1e:  push   %ebp
0854bc97 +0x0b1f:  mov    %esp,%ebp
0854bc99 +0x0b21:  mov    0x8(%ebp),%eax
0854bc9c +0x0b24:  mov    (%eax),%ecx
0854bc9e +0x0b26:  mov    0xc(%ebp),%edx
0854bca1 +0x0b29:  mov    %edx,%eax
0854bca3 +0x0b2b:  add    %eax,%eax
0854bca5 +0x0b2d:  add    %edx,%eax
0854bca7 +0x0b2f:  add    %eax,%eax
0854bca9 +0x0b31:  lea    (%ecx,%eax,1),%eax
0854bcac +0x0b34:  pop    %ebp
0854bcad +0x0b35:  ret
0854bcae +0x0b36:  push   %ebp
0854bcaf +0x0b37:  mov    %esp,%ebp
0854bcb1 +0x0b39:  push   %esi
0854bcb2 +0x0b3a:  push   %ebx
0854bcb3 +0x0b3b:  sub    $0x20,%esp
0854bcb6 +0x0b3e:  mov    0x8(%ebp),%eax
0854bcb9 +0x0b41:  mov    0xc(%ebp),%edx
0854bcbc +0x0b44:  mov    %edx,0x4(%esp)
0854bcc0 +0x0b48:  mov    %eax,(%esp)
0854bcc3 +0x0b4b:  call   080dd9ec <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x535>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x535
0854bcc8 +0x0b50:  mov    %eax,-0xc(%ebp)
0854bccb +0x0b53:  mov    0x8(%ebp),%eax
0854bcce +0x0b56:  mov    %eax,(%esp)
0854bcd1 +0x0b59:  call   080dd7f2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x33b>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x33b
0854bcd6 +0x0b5e:  mov    %eax,0xc(%esp)
0854bcda +0x0b62:  mov    -0xc(%ebp),%eax
0854bcdd +0x0b65:  mov    %eax,0x8(%esp)
0854bce1 +0x0b69:  mov    0x14(%ebp),%eax
0854bce4 +0x0b6c:  mov    %eax,0x4(%esp)
0854bce8 +0x0b70:  mov    0x10(%ebp),%eax
0854bceb +0x0b73:  mov    %eax,(%esp)
0854bcee +0x0b76:  call   080ddf99 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xae2>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xae2
0854bcf3 +0x0b7b:  mov    -0xc(%ebp),%eax
0854bcf6 +0x0b7e:  add    $0x20,%esp
0854bcf9 +0x0b81:  pop    %ebx
0854bcfa +0x0b82:  pop    %esi
0854bcfb +0x0b83:  pop    %ebp
0854bcfc +0x0b84:  ret
0854bcfd +0x0b85:  mov    %eax,(%esp)
0854bd00 +0x0b88:  call   08725ce0 <__cxa_begin_catch>
0854bd05 +0x0b8d:  mov    0x8(%ebp),%eax
0854bd08 +0x0b90:  mov    0xc(%ebp),%edx
0854bd0b +0x0b93:  mov    %edx,0x8(%esp)
0854bd0f +0x0b97:  mov    -0xc(%ebp),%edx
0854bd12 +0x0b9a:  mov    %edx,0x4(%esp)
0854bd16 +0x0b9e:  mov    %eax,(%esp)
0854bd19 +0x0ba1:  call   080dd830 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x379>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x379
0854bd1e +0x0ba6:  call   08724be0 <__cxa_rethrow>
0854bd23 +0x0bab:  mov    %edx,%ebx
0854bd25 +0x0bad:  mov    %eax,%esi
0854bd27 +0x0baf:  call   08725c30 <__cxa_end_catch>
0854bd2c +0x0bb4:  mov    %esi,%eax
0854bd2e +0x0bb6:  mov    %ebx,%edx
0854bd30 +0x0bb8:  mov    %eax,(%esp)
0854bd33 +0x0bbb:  call   08ae3750 <_Unwind_Resume>
0854bd38 +0x0bc0:  push   %ebp
0854bd39 +0x0bc1:  mov    %esp,%ebp
0854bd3b +0x0bc3:  push   %esi
0854bd3c +0x0bc4:  push   %ebx
0854bd3d +0x0bc5:  sub    $0x30,%esp
0854bd40 +0x0bc8:  mov    0x8(%ebp),%ebx
0854bd43 +0x0bcb:  mov    0xc(%ebp),%eax
0854bd46 +0x0bce:  mov    %eax,(%esp)
0854bd49 +0x0bd1:  call   0854c0b6 <+0xf3e>
0854bd4e +0x0bd6:  mov    %eax,%esi
0854bd50 +0x0bd8:  mov    0xc(%ebp),%eax
0854bd53 +0x0bdb:  mov    %eax,(%esp)
0854bd56 +0x0bde:  call   0839caa0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x453c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x453c
0854bd5b +0x0be3:  lea    -0x10(%ebp),%edx
0854bd5e +0x0be6:  mov    0x10(%ebp),%ecx
0854bd61 +0x0be9:  mov    %ecx,0x10(%esp)
0854bd65 +0x0bed:  mov    %esi,0xc(%esp)
0854bd69 +0x0bf1:  mov    %eax,0x8(%esp)
0854bd6d +0x0bf5:  mov    0xc(%ebp),%eax
0854bd70 +0x0bf8:  mov    %eax,0x4(%esp)
0854bd74 +0x0bfc:  mov    %edx,(%esp)
0854bd77 +0x0bff:  call   0854c0c2 <+0xf4a>
0854bd7c +0x0c04:  sub    $0x4,%esp
0854bd7f +0x0c07:  lea    -0xc(%ebp),%eax
0854bd82 +0x0c0a:  mov    0xc(%ebp),%edx
0854bd85 +0x0c0d:  mov    %edx,0x4(%esp)
0854bd89 +0x0c11:  mov    %eax,(%esp)
0854bd8c +0x0c14:  call   0854bdf6 <+0xc7e>
0854bd91 +0x0c19:  sub    $0x4,%esp
0854bd94 +0x0c1c:  lea    -0xc(%ebp),%eax
0854bd97 +0x0c1f:  mov    %eax,0x4(%esp)
0854bd9b +0x0c23:  lea    -0x10(%ebp),%eax
0854bd9e +0x0c26:  mov    %eax,(%esp)
0854bda1 +0x0c29:  call   0854b964 <+0x7ec>
0854bda6 +0x0c2e:  test   %al,%al
0854bda8 +0x0c30:  jne    0854bdcf <+0xc57>
0854bdaa +0x0c32:  mov    -0x10(%ebp),%eax
0854bdad +0x0c35:  mov    %eax,(%esp)
0854bdb0 +0x0c38:  call   0854c13e <+0xfc6>
0854bdb5 +0x0c3d:  mov    0xc(%ebp),%edx
0854bdb8 +0x0c40:  mov    %eax,0x8(%esp)
0854bdbc +0x0c44:  mov    0x10(%ebp),%eax
0854bdbf +0x0c47:  mov    %eax,0x4(%esp)
0854bdc3 +0x0c4b:  mov    %edx,(%esp)
0854bdc6 +0x0c4e:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0854bdcb +0x0c53:  test   %al,%al
0854bdcd +0x0c55:  je     0854bde3 <+0xc6b>
0854bdcf +0x0c57:  mov    0xc(%ebp),%eax
0854bdd2 +0x0c5a:  mov    %eax,0x4(%esp)
0854bdd6 +0x0c5e:  mov    %ebx,(%esp)
0854bdd9 +0x0c61:  call   0854bdf6 <+0xc7e>
0854bdde +0x0c66:  sub    $0x4,%esp
0854bde1 +0x0c69:  jmp    0854bde8 <+0xc70>
0854bde3 +0x0c6b:  mov    -0x10(%ebp),%eax
0854bde6 +0x0c6e:  mov    %eax,(%ebx)
0854bde8 +0x0c70:  mov    %ebx,%eax
0854bdea +0x0c72:  lea    -0x8(%ebp),%esp
0854bded +0x0c75:  add    $0x0,%esp
0854bdf0 +0x0c78:  pop    %ebx
0854bdf1 +0x0c79:  pop    %esi
0854bdf2 +0x0c7a:  pop    %ebp
0854bdf3 +0x0c7b:  ret    $0x4
0854bdf6 +0x0c7e:  push   %ebp
0854bdf7 +0x0c7f:  mov    %esp,%ebp
0854bdf9 +0x0c81:  push   %ebx
0854bdfa +0x0c82:  sub    $0x14,%esp
0854bdfd +0x0c85:  mov    0x8(%ebp),%ebx
0854be00 +0x0c88:  mov    0xc(%ebp),%eax
0854be03 +0x0c8b:  add    $0x4,%eax
0854be06 +0x0c8e:  mov    %eax,0x4(%esp)
0854be0a +0x0c92:  mov    %ebx,(%esp)
0854be0d +0x0c95:  call   0854c160 <+0xfe8>
0854be12 +0x0c9a:  mov    %ebx,%eax
0854be14 +0x0c9c:  add    $0x14,%esp
0854be17 +0x0c9f:  pop    %ebx
0854be18 +0x0ca0:  pop    %ebp
0854be19 +0x0ca1:  ret    $0x4
0854be1c +0x0ca4:  push   %ebp
0854be1d +0x0ca5:  mov    %esp,%ebp
0854be1f +0x0ca7:  push   %esi
0854be20 +0x0ca8:  push   %ebx
0854be21 +0x0ca9:  sub    $0x30,%esp
0854be24 +0x0cac:  mov    0x8(%ebp),%ebx
0854be27 +0x0caf:  mov    0xc(%ebp),%eax
0854be2a +0x0cb2:  mov    %eax,(%esp)
0854be2d +0x0cb5:  call   0851d8e4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x9f19>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x9f19
0854be32 +0x0cba:  mov    %eax,%esi
0854be34 +0x0cbc:  mov    0xc(%ebp),%eax
0854be37 +0x0cbf:  mov    %eax,(%esp)
0854be3a +0x0cc2:  call   085193ae <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x59e3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x59e3
0854be3f +0x0cc7:  lea    -0x10(%ebp),%edx
0854be42 +0x0cca:  mov    0x10(%ebp),%ecx
0854be45 +0x0ccd:  mov    %ecx,0x10(%esp)
0854be49 +0x0cd1:  mov    %esi,0xc(%esp)
0854be4d +0x0cd5:  mov    %eax,0x8(%esp)
0854be51 +0x0cd9:  mov    0xc(%ebp),%eax
0854be54 +0x0cdc:  mov    %eax,0x4(%esp)
0854be58 +0x0ce0:  mov    %edx,(%esp)
0854be5b +0x0ce3:  call   0854c16e <+0xff6>
0854be60 +0x0ce8:  sub    $0x4,%esp
0854be63 +0x0ceb:  lea    -0xc(%ebp),%eax
0854be66 +0x0cee:  mov    0xc(%ebp),%edx
0854be69 +0x0cf1:  mov    %edx,0x4(%esp)
0854be6d +0x0cf5:  mov    %eax,(%esp)
0854be70 +0x0cf8:  call   0854beda <+0xd62>
0854be75 +0x0cfd:  sub    $0x4,%esp
0854be78 +0x0d00:  lea    -0xc(%ebp),%eax
0854be7b +0x0d03:  mov    %eax,0x4(%esp)
0854be7f +0x0d07:  lea    -0x10(%ebp),%eax
0854be82 +0x0d0a:  mov    %eax,(%esp)
0854be85 +0x0d0d:  call   0854c226 <+0x10ae>
0854be8a +0x0d12:  test   %al,%al
0854be8c +0x0d14:  jne    0854beb3 <+0xd3b>
0854be8e +0x0d16:  mov    -0x10(%ebp),%eax
0854be91 +0x0d19:  mov    %eax,(%esp)
0854be94 +0x0d1c:  call   0854c1ea <+0x1072>
0854be99 +0x0d21:  mov    0xc(%ebp),%edx
0854be9c +0x0d24:  mov    %eax,0x8(%esp)
0854bea0 +0x0d28:  mov    0x10(%ebp),%eax
0854bea3 +0x0d2b:  mov    %eax,0x4(%esp)
0854bea7 +0x0d2f:  mov    %edx,(%esp)
0854beaa +0x0d32:  call   0854c20c <+0x1094>
0854beaf +0x0d37:  test   %al,%al
0854beb1 +0x0d39:  je     0854bec7 <+0xd4f>
0854beb3 +0x0d3b:  mov    0xc(%ebp),%eax
0854beb6 +0x0d3e:  mov    %eax,0x4(%esp)
0854beba +0x0d42:  mov    %ebx,(%esp)
0854bebd +0x0d45:  call   0854beda <+0xd62>
0854bec2 +0x0d4a:  sub    $0x4,%esp
0854bec5 +0x0d4d:  jmp    0854becc <+0xd54>
0854bec7 +0x0d4f:  mov    -0x10(%ebp),%eax
0854beca +0x0d52:  mov    %eax,(%ebx)
0854becc +0x0d54:  mov    %ebx,%eax
0854bece +0x0d56:  lea    -0x8(%ebp),%esp
0854bed1 +0x0d59:  add    $0x0,%esp
0854bed4 +0x0d5c:  pop    %ebx
0854bed5 +0x0d5d:  pop    %esi
0854bed6 +0x0d5e:  pop    %ebp
0854bed7 +0x0d5f:  ret    $0x4
0854beda +0x0d62:  push   %ebp
0854bedb +0x0d63:  mov    %esp,%ebp
0854bedd +0x0d65:  push   %ebx
0854bede +0x0d66:  sub    $0x14,%esp
0854bee1 +0x0d69:  mov    0x8(%ebp),%ebx
0854bee4 +0x0d6c:  mov    0xc(%ebp),%eax
0854bee7 +0x0d6f:  add    $0x4,%eax
0854beea +0x0d72:  mov    %eax,0x4(%esp)
0854beee +0x0d76:  mov    %ebx,(%esp)
0854bef1 +0x0d79:  call   0854c23a <+0x10c2>
0854bef6 +0x0d7e:  mov    %ebx,%eax
0854bef8 +0x0d80:  add    $0x14,%esp
0854befb +0x0d83:  pop    %ebx
0854befc +0x0d84:  pop    %ebp
0854befd +0x0d85:  ret    $0x4
0854bf00 +0x0d88:  push   %ebp
0854bf01 +0x0d89:  mov    %esp,%ebp
0854bf03 +0x0d8b:  sub    $0x18,%esp
0854bf06 +0x0d8e:  mov    0x8(%ebp),%eax
0854bf09 +0x0d91:  mov    %eax,(%esp)
0854bf0c +0x0d94:  call   0854c248 <+0x10d0>
0854bf11 +0x0d99:  leave
0854bf12 +0x0d9a:  ret
0854bf13 +0x0d9b:  nop
0854bf14 +0x0d9c:  push   %ebp
0854bf15 +0x0d9d:  mov    %esp,%ebp
0854bf17 +0x0d9f:  sub    $0x18,%esp
0854bf1a +0x0da2:  cmpl   $0x0,0xc(%ebp)
0854bf1e +0x0da6:  je     0854bf39 <+0xdc1>
0854bf20 +0x0da8:  mov    0x8(%ebp),%eax
0854bf23 +0x0dab:  mov    0x10(%ebp),%edx
0854bf26 +0x0dae:  mov    %edx,0x8(%esp)
0854bf2a +0x0db2:  mov    0xc(%ebp),%edx
0854bf2d +0x0db5:  mov    %edx,0x4(%esp)
0854bf31 +0x0db9:  mov    %eax,(%esp)
0854bf34 +0x0dbc:  call   0854c24e <+0x10d6>
0854bf39 +0x0dc1:  leave
0854bf3a +0x0dc2:  ret
0854bf3b +0x0dc3:  push   %ebp
0854bf3c +0x0dc4:  mov    %esp,%ebp
0854bf3e +0x0dc6:  sub    $0x18,%esp
0854bf41 +0x0dc9:  mov    0xc(%ebp),%eax
0854bf44 +0x0dcc:  mov    %eax,0x4(%esp)
0854bf48 +0x0dd0:  mov    0x8(%ebp),%eax
0854bf4b +0x0dd3:  mov    %eax,(%esp)
0854bf4e +0x0dd6:  call   0854c261 <+0x10e9>
0854bf53 +0x0ddb:  leave
0854bf54 +0x0ddc:  ret
0854bf55 +0x0ddd:  nop
0854bf56 +0x0dde:  push   %ebp
0854bf57 +0x0ddf:  mov    %esp,%ebp
0854bf59 +0x0de1:  sub    $0x18,%esp
0854bf5c +0x0de4:  mov    0x8(%ebp),%eax
0854bf5f +0x0de7:  mov    %eax,(%esp)
0854bf62 +0x0dea:  call   0854c266 <+0x10ee>
0854bf67 +0x0def:  leave
0854bf68 +0x0df0:  ret
0854bf69 +0x0df1:  nop
0854bf6a +0x0df2:  push   %ebp
0854bf6b +0x0df3:  mov    %esp,%ebp
0854bf6d +0x0df5:  sub    $0x18,%esp
0854bf70 +0x0df8:  cmpl   $0x0,0xc(%ebp)
0854bf74 +0x0dfc:  je     0854bf8f <+0xe17>
0854bf76 +0x0dfe:  mov    0x8(%ebp),%eax
0854bf79 +0x0e01:  mov    0x10(%ebp),%edx
0854bf7c +0x0e04:  mov    %edx,0x8(%esp)
0854bf80 +0x0e08:  mov    0xc(%ebp),%edx
0854bf83 +0x0e0b:  mov    %edx,0x4(%esp)
0854bf87 +0x0e0f:  mov    %eax,(%esp)
0854bf8a +0x0e12:  call   0854c26c <+0x10f4>
0854bf8f +0x0e17:  leave
0854bf90 +0x0e18:  ret
0854bf91 +0x0e19:  push   %ebp
0854bf92 +0x0e1a:  mov    %esp,%ebp
0854bf94 +0x0e1c:  sub    $0x18,%esp
0854bf97 +0x0e1f:  mov    0xc(%ebp),%eax
0854bf9a +0x0e22:  mov    %eax,0x4(%esp)
0854bf9e +0x0e26:  mov    0x8(%ebp),%eax
0854bfa1 +0x0e29:  mov    %eax,(%esp)
0854bfa4 +0x0e2c:  call   0854c27f <+0x1107>
0854bfa9 +0x0e31:  leave
0854bfaa +0x0e32:  ret
0854bfab +0x0e33:  nop
0854bfac +0x0e34:  push   %ebp
0854bfad +0x0e35:  mov    %esp,%ebp
0854bfaf +0x0e37:  pop    %ebp
0854bfb0 +0x0e38:  ret
0854bfb1 +0x0e39:  nop
0854bfb2 +0x0e3a:  push   %ebp
0854bfb3 +0x0e3b:  mov    %esp,%ebp
0854bfb5 +0x0e3d:  sub    $0x18,%esp
0854bfb8 +0x0e40:  mov    0x8(%ebp),%eax
0854bfbb +0x0e43:  mov    %eax,(%esp)
0854bfbe +0x0e46:  call   0854c284 <+0x110c>
0854bfc3 +0x0e4b:  mov    0xc(%ebp),%edx
0854bfc6 +0x0e4e:  mov    %edx,0x4(%esp)
0854bfca +0x0e52:  mov    %eax,(%esp)
0854bfcd +0x0e55:  call   0854c292 <+0x111a>
0854bfd2 +0x0e5a:  mov    0xc(%ebp),%eax
0854bfd5 +0x0e5d:  mov    %eax,0x4(%esp)
0854bfd9 +0x0e61:  mov    0x8(%ebp),%eax
0854bfdc +0x0e64:  mov    %eax,(%esp)
0854bfdf +0x0e67:  call   0854c2a6 <+0x112e>
0854bfe4 +0x0e6c:  leave
0854bfe5 +0x0e6d:  ret
0854bfe6 +0x0e6e:  push   %ebp
0854bfe7 +0x0e6f:  mov    %esp,%ebp
0854bfe9 +0x0e71:  pop    %ebp
0854bfea +0x0e72:  ret
0854bfeb +0x0e73:  nop
0854bfec +0x0e74:  push   %ebp
0854bfed +0x0e75:  mov    %esp,%ebp
0854bfef +0x0e77:  sub    $0x28,%esp
0854bff2 +0x0e7a:  movl   $0x0,-0x14(%ebp)
0854bff9 +0x0e81:  jmp    0854c04a <+0xed2>
0854bffb +0x0e83:  mov    -0x14(%ebp),%eax
0854bffe +0x0e86:  shl    $0x2,%eax
0854c001 +0x0e89:  add    0xc(%ebp),%eax
0854c004 +0x0e8c:  mov    (%eax),%eax
0854c006 +0x0e8e:  mov    %eax,-0x10(%ebp)
0854c009 +0x0e91:  jmp    0854c02c <+0xeb4>
0854c00b +0x0e93:  mov    -0x10(%ebp),%eax
0854c00e +0x0e96:  mov    %eax,-0xc(%ebp)
0854c011 +0x0e99:  mov    -0x10(%ebp),%eax
0854c014 +0x0e9c:  mov    0x18(%eax),%eax
0854c017 +0x0e9f:  mov    %eax,-0x10(%ebp)
0854c01a +0x0ea2:  mov    -0xc(%ebp),%eax
0854c01d +0x0ea5:  mov    %eax,0x4(%esp)
0854c021 +0x0ea9:  mov    0x8(%ebp),%eax
0854c024 +0x0eac:  mov    %eax,(%esp)
0854c027 +0x0eaf:  call   0854c2c8 <+0x1150>
0854c02c +0x0eb4:  cmpl   $0x0,-0x10(%ebp)
0854c030 +0x0eb8:  setne  %al
0854c033 +0x0ebb:  test   %al,%al
0854c035 +0x0ebd:  jne    0854c00b <+0xe93>
0854c037 +0x0ebf:  mov    -0x14(%ebp),%eax
0854c03a +0x0ec2:  shl    $0x2,%eax
0854c03d +0x0ec5:  add    0xc(%ebp),%eax
0854c040 +0x0ec8:  movl   $0x0,(%eax)
0854c046 +0x0ece:  addl   $0x1,-0x14(%ebp)
0854c04a +0x0ed2:  mov    -0x14(%ebp),%eax
0854c04d +0x0ed5:  cmp    0x10(%ebp),%eax
0854c050 +0x0ed8:  setb   %al
0854c053 +0x0edb:  test   %al,%al
0854c055 +0x0edd:  jne    0854bffb <+0xe83>
0854c057 +0x0edf:  leave
0854c058 +0x0ee0:  ret
0854c059 +0x0ee1:  nop
0854c05a +0x0ee2:  push   %ebp
0854c05b +0x0ee3:  mov    %esp,%ebp
0854c05d +0x0ee5:  sub    $0x18,%esp
0854c060 +0x0ee8:  mov    0x8(%ebp),%eax
0854c063 +0x0eeb:  mov    %eax,(%esp)
0854c066 +0x0eee:  call   0854c302 <+0x118a>
0854c06b +0x0ef3:  leave
0854c06c +0x0ef4:  ret
0854c06d +0x0ef5:  nop
0854c06e +0x0ef6:  push   %ebp
0854c06f +0x0ef7:  mov    %esp,%ebp
0854c071 +0x0ef9:  sub    $0x18,%esp
0854c074 +0x0efc:  mov    0x8(%ebp),%eax
0854c077 +0x0eff:  mov    %eax,(%esp)
0854c07a +0x0f02:  call   0854c308 <+0x1190>
0854c07f +0x0f07:  leave
0854c080 +0x0f08:  ret
0854c081 +0x0f09:  nop
0854c082 +0x0f0a:  push   %ebp
0854c083 +0x0f0b:  mov    %esp,%ebp
0854c085 +0x0f0d:  sub    $0x18,%esp
0854c088 +0x0f10:  mov    0xc(%ebp),%eax
0854c08b +0x0f13:  mov    %eax,(%esp)
0854c08e +0x0f16:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0854c093 +0x0f1b:  leave
0854c094 +0x0f1c:  ret
0854c095 +0x0f1d:  nop
0854c096 +0x0f1e:  push   %ebp
0854c097 +0x0f1f:  mov    %esp,%ebp
0854c099 +0x0f21:  mov    0x8(%ebp),%eax
0854c09c +0x0f24:  mov    0x4(%eax),%eax
0854c09f +0x0f27:  mov    %eax,%edx
0854c0a1 +0x0f29:  mov    0x8(%ebp),%eax
0854c0a4 +0x0f2c:  mov    (%eax),%eax
0854c0a6 +0x0f2e:  mov    %edx,%ecx
0854c0a8 +0x0f30:  sub    %eax,%ecx
0854c0aa +0x0f32:  mov    %ecx,%eax
0854c0ac +0x0f34:  sar    %eax
0854c0ae +0x0f36:  imul   $0xaaaaaaab,%eax,%eax
0854c0b4 +0x0f3c:  pop    %ebp
0854c0b5 +0x0f3d:  ret
0854c0b6 +0x0f3e:  push   %ebp
0854c0b7 +0x0f3f:  mov    %esp,%ebp
0854c0b9 +0x0f41:  mov    0x8(%ebp),%eax
0854c0bc +0x0f44:  add    $0x4,%eax
0854c0bf +0x0f47:  pop    %ebp
0854c0c0 +0x0f48:  ret
0854c0c1 +0x0f49:  nop
0854c0c2 +0x0f4a:  push   %ebp
0854c0c3 +0x0f4b:  mov    %esp,%ebp
0854c0c5 +0x0f4d:  push   %ebx
0854c0c6 +0x0f4e:  sub    $0x14,%esp
0854c0c9 +0x0f51:  mov    0x8(%ebp),%ebx
0854c0cc +0x0f54:  jmp    0854c11a <+0xfa2>
0854c0ce +0x0f56:  mov    0x10(%ebp),%eax
0854c0d1 +0x0f59:  mov    %eax,(%esp)
0854c0d4 +0x0f5c:  call   0854c30d <+0x1195>
0854c0d9 +0x0f61:  mov    0xc(%ebp),%edx
0854c0dc +0x0f64:  mov    0x18(%ebp),%ecx
0854c0df +0x0f67:  mov    %ecx,0x8(%esp)
0854c0e3 +0x0f6b:  mov    %eax,0x4(%esp)
0854c0e7 +0x0f6f:  mov    %edx,(%esp)
0854c0ea +0x0f72:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
0854c0ef +0x0f77:  xor    $0x1,%eax
0854c0f2 +0x0f7a:  test   %al,%al
0854c0f4 +0x0f7c:  je     0854c10c <+0xf94>
0854c0f6 +0x0f7e:  mov    0x10(%ebp),%eax
0854c0f9 +0x0f81:  mov    %eax,0x14(%ebp)
0854c0fc +0x0f84:  mov    0x10(%ebp),%eax
0854c0ff +0x0f87:  mov    %eax,(%esp)
0854c102 +0x0f8a:  call   083b81ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x521b8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x521b8
0854c107 +0x0f8f:  mov    %eax,0x10(%ebp)
0854c10a +0x0f92:  jmp    0854c11a <+0xfa2>
0854c10c +0x0f94:  mov    0x10(%ebp),%eax
0854c10f +0x0f97:  mov    %eax,(%esp)
0854c112 +0x0f9a:  call   083b81e1 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x521ad>  ; global constructors keyed to CServerEvent::m_nExpRate+0x521ad
0854c117 +0x0f9f:  mov    %eax,0x10(%ebp)
0854c11a +0x0fa2:  cmpl   $0x0,0x10(%ebp)
0854c11e +0x0fa6:  setne  %al
0854c121 +0x0fa9:  test   %al,%al
0854c123 +0x0fab:  jne    0854c0ce <+0xf56>
0854c125 +0x0fad:  mov    0x14(%ebp),%eax
0854c128 +0x0fb0:  mov    %eax,0x4(%esp)
0854c12c +0x0fb4:  mov    %ebx,(%esp)
0854c12f +0x0fb7:  call   0854c160 <+0xfe8>
0854c134 +0x0fbc:  mov    %ebx,%eax
0854c136 +0x0fbe:  add    $0x14,%esp
0854c139 +0x0fc1:  pop    %ebx
0854c13a +0x0fc2:  pop    %ebp
0854c13b +0x0fc3:  ret    $0x4
0854c13e +0x0fc6:  push   %ebp
0854c13f +0x0fc7:  mov    %esp,%ebp
0854c141 +0x0fc9:  sub    $0x28,%esp
0854c144 +0x0fcc:  mov    0x8(%ebp),%eax
0854c147 +0x0fcf:  mov    %eax,(%esp)
0854c14a +0x0fd2:  call   0854c32f <+0x11b7>
0854c14f +0x0fd7:  mov    %eax,0x4(%esp)
0854c153 +0x0fdb:  lea    -0x9(%ebp),%eax
0854c156 +0x0fde:  mov    %eax,(%esp)
0854c159 +0x0fe1:  call   0854c33a <+0x11c2>
0854c15e +0x0fe6:  leave
0854c15f +0x0fe7:  ret
0854c160 +0x0fe8:  push   %ebp
0854c161 +0x0fe9:  mov    %esp,%ebp
0854c163 +0x0feb:  mov    0xc(%ebp),%edx
0854c166 +0x0fee:  mov    0x8(%ebp),%eax
0854c169 +0x0ff1:  mov    %edx,(%eax)
0854c16b +0x0ff3:  pop    %ebp
0854c16c +0x0ff4:  ret
0854c16d +0x0ff5:  nop
0854c16e +0x0ff6:  push   %ebp
0854c16f +0x0ff7:  mov    %esp,%ebp
0854c171 +0x0ff9:  push   %ebx
0854c172 +0x0ffa:  sub    $0x14,%esp
0854c175 +0x0ffd:  mov    0x8(%ebp),%ebx
0854c178 +0x1000:  jmp    0854c1c6 <+0x104e>
0854c17a +0x1002:  mov    0x10(%ebp),%eax
0854c17d +0x1005:  mov    %eax,(%esp)
0854c180 +0x1008:  call   0854c342 <+0x11ca>
0854c185 +0x100d:  mov    0xc(%ebp),%edx
0854c188 +0x1010:  mov    0x18(%ebp),%ecx
0854c18b +0x1013:  mov    %ecx,0x8(%esp)
0854c18f +0x1017:  mov    %eax,0x4(%esp)
0854c193 +0x101b:  mov    %edx,(%esp)
0854c196 +0x101e:  call   0854c20c <+0x1094>
0854c19b +0x1023:  xor    $0x1,%eax
0854c19e +0x1026:  test   %al,%al
0854c1a0 +0x1028:  je     0854c1b8 <+0x1040>
0854c1a2 +0x102a:  mov    0x10(%ebp),%eax
0854c1a5 +0x102d:  mov    %eax,0x14(%ebp)
0854c1a8 +0x1030:  mov    0x10(%ebp),%eax
0854c1ab +0x1033:  mov    %eax,(%esp)
0854c1ae +0x1036:  call   0851d8a4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x9ed9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x9ed9
0854c1b3 +0x103b:  mov    %eax,0x10(%ebp)
0854c1b6 +0x103e:  jmp    0854c1c6 <+0x104e>
0854c1b8 +0x1040:  mov    0x10(%ebp),%eax
0854c1bb +0x1043:  mov    %eax,(%esp)
0854c1be +0x1046:  call   0851d899 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x9ece>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x9ece
0854c1c3 +0x104b:  mov    %eax,0x10(%ebp)
0854c1c6 +0x104e:  cmpl   $0x0,0x10(%ebp)
0854c1ca +0x1052:  setne  %al
0854c1cd +0x1055:  test   %al,%al
0854c1cf +0x1057:  jne    0854c17a <+0x1002>
0854c1d1 +0x1059:  mov    0x14(%ebp),%eax
0854c1d4 +0x105c:  mov    %eax,0x4(%esp)
0854c1d8 +0x1060:  mov    %ebx,(%esp)
0854c1db +0x1063:  call   0854c23a <+0x10c2>
0854c1e0 +0x1068:  mov    %ebx,%eax
0854c1e2 +0x106a:  add    $0x14,%esp
0854c1e5 +0x106d:  pop    %ebx
0854c1e6 +0x106e:  pop    %ebp
0854c1e7 +0x106f:  ret    $0x4
0854c1ea +0x1072:  push   %ebp
0854c1eb +0x1073:  mov    %esp,%ebp
0854c1ed +0x1075:  sub    $0x28,%esp
0854c1f0 +0x1078:  mov    0x8(%ebp),%eax
0854c1f3 +0x107b:  mov    %eax,(%esp)
0854c1f6 +0x107e:  call   0854c364 <+0x11ec>
0854c1fb +0x1083:  mov    %eax,0x4(%esp)
0854c1ff +0x1087:  lea    -0x9(%ebp),%eax
0854c202 +0x108a:  mov    %eax,(%esp)
0854c205 +0x108d:  call   0854c370 <+0x11f8>
0854c20a +0x1092:  leave
0854c20b +0x1093:  ret
0854c20c +0x1094:  push   %ebp
0854c20d +0x1095:  mov    %esp,%ebp
0854c20f +0x1097:  sub    $0x18,%esp
0854c212 +0x109a:  mov    0x10(%ebp),%eax
0854c215 +0x109d:  mov    %eax,0x4(%esp)
0854c219 +0x10a1:  mov    0xc(%ebp),%eax
0854c21c +0x10a4:  mov    %eax,(%esp)
0854c21f +0x10a7:  call   0854b1c8 <+0x50>
0854c224 +0x10ac:  leave
0854c225 +0x10ad:  ret
0854c226 +0x10ae:  push   %ebp
0854c227 +0x10af:  mov    %esp,%ebp
0854c229 +0x10b1:  mov    0x8(%ebp),%eax
0854c22c +0x10b4:  mov    (%eax),%edx
0854c22e +0x10b6:  mov    0xc(%ebp),%eax
0854c231 +0x10b9:  mov    (%eax),%eax
0854c233 +0x10bb:  cmp    %eax,%edx
0854c235 +0x10bd:  sete   %al
0854c238 +0x10c0:  pop    %ebp
0854c239 +0x10c1:  ret
0854c23a +0x10c2:  push   %ebp
0854c23b +0x10c3:  mov    %esp,%ebp
0854c23d +0x10c5:  mov    0xc(%ebp),%edx
0854c240 +0x10c8:  mov    0x8(%ebp),%eax
0854c243 +0x10cb:  mov    %edx,(%eax)
0854c245 +0x10cd:  pop    %ebp
0854c246 +0x10ce:  ret
0854c247 +0x10cf:  nop
0854c248 +0x10d0:  push   %ebp
0854c249 +0x10d1:  mov    %esp,%ebp
0854c24b +0x10d3:  pop    %ebp
0854c24c +0x10d4:  ret
0854c24d +0x10d5:  nop
0854c24e +0x10d6:  push   %ebp
0854c24f +0x10d7:  mov    %esp,%ebp
0854c251 +0x10d9:  sub    $0x18,%esp
0854c254 +0x10dc:  mov    0xc(%ebp),%eax
0854c257 +0x10df:  mov    %eax,(%esp)
0854c25a +0x10e2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0854c25f +0x10e7:  leave
0854c260 +0x10e8:  ret
0854c261 +0x10e9:  push   %ebp
0854c262 +0x10ea:  mov    %esp,%ebp
0854c264 +0x10ec:  pop    %ebp
0854c265 +0x10ed:  ret
0854c266 +0x10ee:  push   %ebp
0854c267 +0x10ef:  mov    %esp,%ebp
0854c269 +0x10f1:  pop    %ebp
0854c26a +0x10f2:  ret
0854c26b +0x10f3:  nop
0854c26c +0x10f4:  push   %ebp
0854c26d +0x10f5:  mov    %esp,%ebp
0854c26f +0x10f7:  sub    $0x18,%esp
0854c272 +0x10fa:  mov    0xc(%ebp),%eax
0854c275 +0x10fd:  mov    %eax,(%esp)
0854c278 +0x1100:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0854c27d +0x1105:  leave
0854c27e +0x1106:  ret
0854c27f +0x1107:  push   %ebp
0854c280 +0x1108:  mov    %esp,%ebp
0854c282 +0x110a:  pop    %ebp
0854c283 +0x110b:  ret
0854c284 +0x110c:  push   %ebp
0854c285 +0x110d:  mov    %esp,%ebp
0854c287 +0x110f:  mov    0x8(%ebp),%eax
0854c28a +0x1112:  pop    %ebp
0854c28b +0x1113:  ret
0854c28c +0x1114:  push   %ebp
0854c28d +0x1115:  mov    %esp,%ebp
0854c28f +0x1117:  pop    %ebp
0854c290 +0x1118:  ret
0854c291 +0x1119:  nop
0854c292 +0x111a:  push   %ebp
0854c293 +0x111b:  mov    %esp,%ebp
0854c295 +0x111d:  sub    $0x18,%esp
0854c298 +0x1120:  mov    0xc(%ebp),%eax
0854c29b +0x1123:  mov    %eax,(%esp)
0854c29e +0x1126:  call   0854c28c <+0x1114>
0854c2a3 +0x112b:  leave
0854c2a4 +0x112c:  ret
0854c2a5 +0x112d:  nop
0854c2a6 +0x112e:  push   %ebp
0854c2a7 +0x112f:  mov    %esp,%ebp
0854c2a9 +0x1131:  sub    $0x18,%esp
0854c2ac +0x1134:  mov    0x8(%ebp),%eax
0854c2af +0x1137:  movl   $0x1,0x8(%esp)
0854c2b7 +0x113f:  mov    0xc(%ebp),%edx
0854c2ba +0x1142:  mov    %edx,0x4(%esp)
0854c2be +0x1146:  mov    %eax,(%esp)
0854c2c1 +0x1149:  call   0854c378 <+0x1200>
0854c2c6 +0x114e:  leave
0854c2c7 +0x114f:  ret
0854c2c8 +0x1150:  push   %ebp
0854c2c9 +0x1151:  mov    %esp,%ebp
0854c2cb +0x1153:  sub    $0x18,%esp
0854c2ce +0x1156:  mov    0x8(%ebp),%eax
0854c2d1 +0x1159:  add    $0x4,%eax
0854c2d4 +0x115c:  mov    0xc(%ebp),%edx
0854c2d7 +0x115f:  mov    %edx,0x4(%esp)
0854c2db +0x1163:  mov    %eax,(%esp)
0854c2de +0x1166:  call   0854c392 <+0x121a>
0854c2e3 +0x116b:  mov    0x8(%ebp),%eax
0854c2e6 +0x116e:  add    $0x4,%eax
0854c2e9 +0x1171:  movl   $0x1,0x8(%esp)
0854c2f1 +0x1179:  mov    0xc(%ebp),%edx
0854c2f4 +0x117c:  mov    %edx,0x4(%esp)
0854c2f8 +0x1180:  mov    %eax,(%esp)
0854c2fb +0x1183:  call   0854c3a6 <+0x122e>
0854c300 +0x1188:  leave
0854c301 +0x1189:  ret
0854c302 +0x118a:  push   %ebp
0854c303 +0x118b:  mov    %esp,%ebp
0854c305 +0x118d:  pop    %ebp
0854c306 +0x118e:  ret
0854c307 +0x118f:  nop
0854c308 +0x1190:  push   %ebp
0854c309 +0x1191:  mov    %esp,%ebp
0854c30b +0x1193:  pop    %ebp
0854c30c +0x1194:  ret
0854c30d +0x1195:  push   %ebp
0854c30e +0x1196:  mov    %esp,%ebp
0854c310 +0x1198:  sub    $0x28,%esp
0854c313 +0x119b:  mov    0x8(%ebp),%eax
0854c316 +0x119e:  mov    %eax,(%esp)
0854c319 +0x11a1:  call   0854c3b9 <+0x1241>
0854c31e +0x11a6:  mov    %eax,0x4(%esp)
0854c322 +0x11aa:  lea    -0x9(%ebp),%eax
0854c325 +0x11ad:  mov    %eax,(%esp)
0854c328 +0x11b0:  call   0854c33a <+0x11c2>
0854c32d +0x11b5:  leave
0854c32e +0x11b6:  ret
0854c32f +0x11b7:  push   %ebp
0854c330 +0x11b8:  mov    %esp,%ebp
0854c332 +0x11ba:  mov    0x8(%ebp),%eax
0854c335 +0x11bd:  add    $0x10,%eax
0854c338 +0x11c0:  pop    %ebp
0854c339 +0x11c1:  ret
0854c33a +0x11c2:  push   %ebp
0854c33b +0x11c3:  mov    %esp,%ebp
0854c33d +0x11c5:  mov    0xc(%ebp),%eax
0854c340 +0x11c8:  pop    %ebp
0854c341 +0x11c9:  ret
0854c342 +0x11ca:  push   %ebp
0854c343 +0x11cb:  mov    %esp,%ebp
0854c345 +0x11cd:  sub    $0x28,%esp
0854c348 +0x11d0:  mov    0x8(%ebp),%eax
0854c34b +0x11d3:  mov    %eax,(%esp)
0854c34e +0x11d6:  call   0854c3c4 <+0x124c>
0854c353 +0x11db:  mov    %eax,0x4(%esp)
0854c357 +0x11df:  lea    -0x9(%ebp),%eax
0854c35a +0x11e2:  mov    %eax,(%esp)
0854c35d +0x11e5:  call   0854c370 <+0x11f8>
0854c362 +0x11ea:  leave
0854c363 +0x11eb:  ret
0854c364 +0x11ec:  push   %ebp
0854c365 +0x11ed:  mov    %esp,%ebp
0854c367 +0x11ef:  mov    0x8(%ebp),%eax
0854c36a +0x11f2:  add    $0x10,%eax
0854c36d +0x11f5:  pop    %ebp
0854c36e +0x11f6:  ret
0854c36f +0x11f7:  nop
0854c370 +0x11f8:  push   %ebp
0854c371 +0x11f9:  mov    %esp,%ebp
0854c373 +0x11fb:  mov    0xc(%ebp),%eax
0854c376 +0x11fe:  pop    %ebp
0854c377 +0x11ff:  ret
0854c378 +0x1200:  push   %ebp
0854c379 +0x1201:  mov    %esp,%ebp
0854c37b +0x1203:  sub    $0x18,%esp
0854c37e +0x1206:  mov    0xc(%ebp),%eax
0854c381 +0x1209:  mov    %eax,(%esp)
0854c384 +0x120c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0854c389 +0x1211:  leave
0854c38a +0x1212:  ret
0854c38b +0x1213:  nop
0854c38c +0x1214:  push   %ebp
0854c38d +0x1215:  mov    %esp,%ebp
0854c38f +0x1217:  pop    %ebp
0854c390 +0x1218:  ret
0854c391 +0x1219:  nop
0854c392 +0x121a:  push   %ebp
0854c393 +0x121b:  mov    %esp,%ebp
0854c395 +0x121d:  sub    $0x18,%esp
0854c398 +0x1220:  mov    0xc(%ebp),%eax
0854c39b +0x1223:  mov    %eax,(%esp)
0854c39e +0x1226:  call   0854c38c <+0x1214>
0854c3a3 +0x122b:  leave
0854c3a4 +0x122c:  ret
0854c3a5 +0x122d:  nop
0854c3a6 +0x122e:  push   %ebp
0854c3a7 +0x122f:  mov    %esp,%ebp
0854c3a9 +0x1231:  sub    $0x18,%esp
0854c3ac +0x1234:  mov    0xc(%ebp),%eax
0854c3af +0x1237:  mov    %eax,(%esp)
0854c3b2 +0x123a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0854c3b7 +0x123f:  leave
0854c3b8 +0x1240:  ret
0854c3b9 +0x1241:  push   %ebp
0854c3ba +0x1242:  mov    %esp,%ebp
0854c3bc +0x1244:  mov    0x8(%ebp),%eax
0854c3bf +0x1247:  add    $0x10,%eax
0854c3c2 +0x124a:  pop    %ebp
0854c3c3 +0x124b:  ret
0854c3c4 +0x124c:  push   %ebp
0854c3c5 +0x124d:  mov    %esp,%ebp
0854c3c7 +0x124f:  mov    0x8(%ebp),%eax
0854c3ca +0x1252:  add    $0x10,%eax
0854c3cd +0x1255:  pop    %ebp
0854c3ce +0x1256:  ret
0854c3cf +0x1257:  nop
```

## 反编译 C

```c
// <global>::global @ 0x854b178

/* WongWork::CItemUpgrade::CItemUpgrade() */

void WongWork::CItemUpgrade::_GLOBAL__I_CItemUpgrade(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
