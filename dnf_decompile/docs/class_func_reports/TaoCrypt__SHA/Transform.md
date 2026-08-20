# Transform

`_ZN8TaoCrypt3SHA9TransformEv`

`TaoCrypt::SHA::Transform()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA` | `0x0876e390` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0876e390  _ZN8TaoCrypt3SHA9TransformEv
#           TaoCrypt::SHA::Transform()
# range [0x0876e390, 0x0876f8bc]
0876e390 +0x0000:  push   %ebp
0876e391 +0x0001:  mov    %esp,%ebp
0876e393 +0x0003:  push   %edi
0876e394 +0x0004:  push   %esi
0876e395 +0x0005:  sub    $0xdc,%esp
0876e39b +0x000b:  mov    0x8(%ebp),%edx
0876e39e +0x000e:  mov    0x8(%ebp),%eax
0876e3a1 +0x0011:  mov    0x30(%edx),%esi
0876e3a4 +0x0014:  mov    0x10(%eax),%eax
0876e3a7 +0x0017:  mov    0x1c(%edx),%ecx
0876e3aa +0x001a:  mov    0x14(%edx),%edi
0876e3ad +0x001d:  mov    %esi,-0xdc(%ebp)
0876e3b3 +0x0023:  mov    %eax,-0x9c(%ebp)
0876e3b9 +0x0029:  mov    0x18(%edx),%eax
0876e3bc +0x002c:  add    0x20(%edx),%esi
0876e3bf +0x002f:  mov    -0x9c(%ebp),%edx
0876e3c5 +0x0035:  ror    $0x1b,%edx
0876e3c8 +0x0038:  lea    0x5a827999(%esi,%edx,1),%esi
0876e3cf +0x003f:  mov    %ecx,%edx
0876e3d1 +0x0041:  xor    %eax,%edx
0876e3d3 +0x0043:  and    %edi,%edx
0876e3d5 +0x0045:  xor    %ecx,%edx
0876e3d7 +0x0047:  lea    (%esi,%edx,1),%edx
0876e3da +0x004a:  mov    %edx,-0x4c(%ebp)
0876e3dd +0x004d:  mov    0x8(%ebp),%edx
0876e3e0 +0x0050:  ror    $0x2,%edi
0876e3e3 +0x0053:  mov    -0x4c(%ebp),%esi
0876e3e6 +0x0056:  mov    0x34(%edx),%edx
0876e3e9 +0x0059:  ror    $0x1b,%esi
0876e3ec +0x005c:  mov    %edx,-0xd8(%ebp)
0876e3f2 +0x0062:  lea    0x5a827999(%ecx,%edx,1),%edx
0876e3f9 +0x0069:  mov    %edi,%ecx
0876e3fb +0x006b:  xor    %eax,%ecx
0876e3fd +0x006d:  and    -0x9c(%ebp),%ecx
0876e403 +0x0073:  xor    %eax,%ecx
0876e405 +0x0075:  lea    (%edx,%ecx,1),%ecx
0876e408 +0x0078:  mov    0x8(%ebp),%edx
0876e40b +0x007b:  add    %esi,%ecx
0876e40d +0x007d:  mov    -0x9c(%ebp),%esi
0876e413 +0x0083:  mov    0x38(%edx),%edx
0876e416 +0x0086:  ror    $0x2,%esi
0876e419 +0x0089:  lea    0x5a827999(%eax,%edx,1),%eax
0876e420 +0x0090:  mov    %eax,-0x54(%ebp)
0876e423 +0x0093:  mov    %esi,%eax
0876e425 +0x0095:  xor    %edi,%eax
0876e427 +0x0097:  and    -0x4c(%ebp),%eax
0876e42a +0x009a:  mov    %edx,-0xd4(%ebp)
0876e430 +0x00a0:  mov    %ecx,%edx
0876e432 +0x00a2:  ror    $0x1b,%edx
0876e435 +0x00a5:  xor    %edi,%eax
0876e437 +0x00a7:  add    -0x54(%ebp),%eax
0876e43a +0x00aa:  add    %edx,%eax
0876e43c +0x00ac:  mov    0x8(%ebp),%edx
0876e43f +0x00af:  mov    %eax,-0x5c(%ebp)
0876e442 +0x00b2:  mov    -0x4c(%ebp),%eax
0876e445 +0x00b5:  mov    0x3c(%edx),%edx
0876e448 +0x00b8:  ror    $0x2,%eax
0876e44b +0x00bb:  mov    %edx,-0xd0(%ebp)
0876e451 +0x00c1:  lea    0x5a827999(%edi,%edx,1),%edi
0876e458 +0x00c8:  mov    %eax,%edx
0876e45a +0x00ca:  xor    %esi,%edx
0876e45c +0x00cc:  and    %ecx,%edx
0876e45e +0x00ce:  xor    %esi,%edx
0876e460 +0x00d0:  lea    (%edi,%edx,1),%edx
0876e463 +0x00d3:  mov    -0x5c(%ebp),%edi
0876e466 +0x00d6:  ror    $0x2,%ecx
0876e469 +0x00d9:  ror    $0x1b,%edi
0876e46c +0x00dc:  lea    (%edx,%edi,1),%edi
0876e46f +0x00df:  mov    0x8(%ebp),%edx
0876e472 +0x00e2:  mov    0x40(%edx),%edx
0876e475 +0x00e5:  mov    %edx,-0xcc(%ebp)
0876e47b +0x00eb:  lea    0x5a827999(%esi,%edx,1),%esi
0876e482 +0x00f2:  mov    %ecx,%edx
0876e484 +0x00f4:  xor    %eax,%edx
0876e486 +0x00f6:  and    -0x5c(%ebp),%edx
0876e489 +0x00f9:  xor    %eax,%edx
0876e48b +0x00fb:  lea    (%esi,%edx,1),%edx
0876e48e +0x00fe:  mov    %edi,%esi
0876e490 +0x0100:  ror    $0x1b,%esi
0876e493 +0x0103:  lea    (%edx,%esi,1),%esi
0876e496 +0x0106:  mov    -0x5c(%ebp),%edx
0876e499 +0x0109:  mov    %esi,-0x54(%ebp)
0876e49c +0x010c:  mov    0x8(%ebp),%esi
0876e49f +0x010f:  ror    $0x2,%edx
0876e4a2 +0x0112:  mov    0x44(%esi),%esi
0876e4a5 +0x0115:  lea    0x5a827999(%eax,%esi,1),%eax
0876e4ac +0x011c:  mov    %eax,-0x4c(%ebp)
0876e4af +0x011f:  mov    %edx,%eax
0876e4b1 +0x0121:  mov    %esi,-0xc8(%ebp)
0876e4b7 +0x0127:  xor    %ecx,%eax
0876e4b9 +0x0129:  mov    -0x54(%ebp),%esi
0876e4bc +0x012c:  and    %edi,%eax
0876e4be +0x012e:  xor    %ecx,%eax
0876e4c0 +0x0130:  add    -0x4c(%ebp),%eax
0876e4c3 +0x0133:  ror    $0x1b,%esi
0876e4c6 +0x0136:  ror    $0x2,%edi
0876e4c9 +0x0139:  lea    (%eax,%esi,1),%esi
0876e4cc +0x013c:  mov    0x8(%ebp),%eax
0876e4cf +0x013f:  mov    %esi,-0x4c(%ebp)
0876e4d2 +0x0142:  ror    $0x1b,%esi
0876e4d5 +0x0145:  mov    0x48(%eax),%eax
0876e4d8 +0x0148:  mov    %eax,-0xc4(%ebp)
0876e4de +0x014e:  lea    0x5a827999(%ecx,%eax,1),%eax
0876e4e5 +0x0155:  mov    %edi,%ecx
0876e4e7 +0x0157:  xor    %edx,%ecx
0876e4e9 +0x0159:  and    -0x54(%ebp),%ecx
0876e4ec +0x015c:  xor    %edx,%ecx
0876e4ee +0x015e:  lea    (%eax,%ecx,1),%ecx
0876e4f1 +0x0161:  mov    0x8(%ebp),%eax
0876e4f4 +0x0164:  add    %esi,%ecx
0876e4f6 +0x0166:  mov    -0x54(%ebp),%esi
0876e4f9 +0x0169:  mov    0x4c(%eax),%eax
0876e4fc +0x016c:  ror    $0x2,%esi
0876e4ff +0x016f:  lea    0x5a827999(%edx,%eax,1),%edx
0876e506 +0x0176:  mov    %edx,-0x54(%ebp)
0876e509 +0x0179:  mov    %esi,%edx
0876e50b +0x017b:  xor    %edi,%edx
0876e50d +0x017d:  and    -0x4c(%ebp),%edx
0876e510 +0x0180:  mov    %eax,-0xc0(%ebp)
0876e516 +0x0186:  mov    %ecx,%eax
0876e518 +0x0188:  ror    $0x1b,%eax
0876e51b +0x018b:  xor    %edi,%edx
0876e51d +0x018d:  add    -0x54(%ebp),%edx
0876e520 +0x0190:  add    %eax,%edx
0876e522 +0x0192:  mov    -0x4c(%ebp),%eax
0876e525 +0x0195:  mov    %edx,-0x54(%ebp)
0876e528 +0x0198:  mov    0x8(%ebp),%edx
0876e52b +0x019b:  ror    $0x2,%eax
0876e52e +0x019e:  mov    0x50(%edx),%edx
0876e531 +0x01a1:  mov    %edx,-0xbc(%ebp)
0876e537 +0x01a7:  lea    0x5a827999(%edi,%edx,1),%edi
0876e53e +0x01ae:  mov    %eax,%edx
0876e540 +0x01b0:  xor    %esi,%edx
0876e542 +0x01b2:  and    %ecx,%edx
0876e544 +0x01b4:  xor    %esi,%edx
0876e546 +0x01b6:  lea    (%edi,%edx,1),%edx
0876e549 +0x01b9:  mov    -0x54(%ebp),%edi
0876e54c +0x01bc:  ror    $0x2,%ecx
0876e54f +0x01bf:  ror    $0x1b,%edi
0876e552 +0x01c2:  lea    (%edx,%edi,1),%edi
0876e555 +0x01c5:  mov    0x8(%ebp),%edx
0876e558 +0x01c8:  mov    0x54(%edx),%edx
0876e55b +0x01cb:  mov    %edx,-0xb8(%ebp)
0876e561 +0x01d1:  lea    0x5a827999(%esi,%edx,1),%esi
0876e568 +0x01d8:  mov    %ecx,%edx
0876e56a +0x01da:  xor    %eax,%edx
0876e56c +0x01dc:  and    -0x54(%ebp),%edx
0876e56f +0x01df:  xor    %eax,%edx
0876e571 +0x01e1:  lea    (%esi,%edx,1),%edx
0876e574 +0x01e4:  mov    %edi,%esi
0876e576 +0x01e6:  ror    $0x1b,%esi
0876e579 +0x01e9:  lea    (%edx,%esi,1),%esi
0876e57c +0x01ec:  mov    -0x54(%ebp),%edx
0876e57f +0x01ef:  mov    %esi,-0x4c(%ebp)
0876e582 +0x01f2:  mov    0x8(%ebp),%esi
0876e585 +0x01f5:  ror    $0x2,%edx
0876e588 +0x01f8:  mov    0x58(%esi),%esi
0876e58b +0x01fb:  lea    0x5a827999(%eax,%esi,1),%eax
0876e592 +0x0202:  mov    %esi,-0xb4(%ebp)
0876e598 +0x0208:  mov    -0x4c(%ebp),%esi
0876e59b +0x020b:  mov    %eax,-0x68(%ebp)
0876e59e +0x020e:  mov    %edx,%eax
0876e5a0 +0x0210:  xor    %ecx,%eax
0876e5a2 +0x0212:  and    %edi,%eax
0876e5a4 +0x0214:  xor    %ecx,%eax
0876e5a6 +0x0216:  add    -0x68(%ebp),%eax
0876e5a9 +0x0219:  ror    $0x1b,%esi
0876e5ac +0x021c:  ror    $0x2,%edi
0876e5af +0x021f:  add    %esi,%eax
0876e5b1 +0x0221:  mov    -0x4c(%ebp),%esi
0876e5b4 +0x0224:  mov    %eax,-0x68(%ebp)
0876e5b7 +0x0227:  mov    0x8(%ebp),%eax
0876e5ba +0x022a:  mov    0x5c(%eax),%eax
0876e5bd +0x022d:  mov    %eax,-0xb0(%ebp)
0876e5c3 +0x0233:  lea    0x5a827999(%ecx,%eax,1),%ecx
0876e5ca +0x023a:  mov    %edi,%eax
0876e5cc +0x023c:  xor    %edx,%eax
0876e5ce +0x023e:  and    -0x4c(%ebp),%eax
0876e5d1 +0x0241:  ror    $0x2,%esi
0876e5d4 +0x0244:  xor    %edx,%eax
0876e5d6 +0x0246:  lea    (%ecx,%eax,1),%eax
0876e5d9 +0x0249:  mov    -0x68(%ebp),%ecx
0876e5dc +0x024c:  ror    $0x1b,%ecx
0876e5df +0x024f:  lea    (%eax,%ecx,1),%ecx
0876e5e2 +0x0252:  mov    0x8(%ebp),%eax
0876e5e5 +0x0255:  mov    0x60(%eax),%eax
0876e5e8 +0x0258:  mov    %eax,-0xac(%ebp)
0876e5ee +0x025e:  lea    0x5a827999(%edx,%eax,1),%edx
0876e5f5 +0x0265:  mov    %esi,%eax
0876e5f7 +0x0267:  xor    %edi,%eax
0876e5f9 +0x0269:  and    -0x68(%ebp),%eax
0876e5fc +0x026c:  xor    %edi,%eax
0876e5fe +0x026e:  lea    (%edx,%eax,1),%eax
0876e601 +0x0271:  mov    %ecx,%edx
0876e603 +0x0273:  ror    $0x1b,%edx
0876e606 +0x0276:  lea    (%eax,%edx,1),%edx
0876e609 +0x0279:  mov    -0x68(%ebp),%eax
0876e60c +0x027c:  mov    %edx,-0x50(%ebp)
0876e60f +0x027f:  mov    0x8(%ebp),%edx
0876e612 +0x0282:  ror    $0x2,%eax
0876e615 +0x0285:  mov    0x64(%edx),%edx
0876e618 +0x0288:  lea    0x5a827999(%edi,%edx,1),%edi
0876e61f +0x028f:  mov    %edi,-0x68(%ebp)
0876e622 +0x0292:  mov    %eax,%edi
0876e624 +0x0294:  mov    %edx,-0xa8(%ebp)
0876e62a +0x029a:  xor    %esi,%edi
0876e62c +0x029c:  mov    -0x50(%ebp),%edx
0876e62f +0x029f:  and    %ecx,%edi
0876e631 +0x02a1:  xor    %esi,%edi
0876e633 +0x02a3:  add    -0x68(%ebp),%edi
0876e636 +0x02a6:  ror    $0x1b,%edx
0876e639 +0x02a9:  ror    $0x2,%ecx
0876e63c +0x02ac:  add    %edx,%edi
0876e63e +0x02ae:  mov    -0x50(%ebp),%edx
0876e641 +0x02b1:  mov    %edi,-0x4c(%ebp)
0876e644 +0x02b4:  mov    0x8(%ebp),%edi
0876e647 +0x02b7:  ror    $0x2,%edx
0876e64a +0x02ba:  mov    0x68(%edi),%edi
0876e64d +0x02bd:  mov    %edi,-0xa4(%ebp)
0876e653 +0x02c3:  lea    0x5a827999(%esi,%edi,1),%edi
0876e65a +0x02ca:  mov    %ecx,%esi
0876e65c +0x02cc:  xor    %eax,%esi
0876e65e +0x02ce:  and    -0x50(%ebp),%esi
0876e661 +0x02d1:  xor    %eax,%esi
0876e663 +0x02d3:  lea    (%edi,%esi,1),%esi
0876e666 +0x02d6:  mov    -0x4c(%ebp),%edi
0876e669 +0x02d9:  ror    $0x1b,%edi
0876e66c +0x02dc:  add    %edi,%esi
0876e66e +0x02de:  mov    0x8(%ebp),%edi
0876e671 +0x02e1:  mov    0x6c(%edi),%edi
0876e674 +0x02e4:  lea    0x5a827999(%eax,%edi,1),%eax
0876e67b +0x02eb:  mov    %eax,-0x50(%ebp)
0876e67e +0x02ee:  mov    %edx,%eax
0876e680 +0x02f0:  xor    %ecx,%eax
0876e682 +0x02f2:  and    -0x4c(%ebp),%eax
0876e685 +0x02f5:  mov    %edi,-0xa0(%ebp)
0876e68b +0x02fb:  mov    %esi,%edi
0876e68d +0x02fd:  ror    $0x1b,%edi
0876e690 +0x0300:  xor    %ecx,%eax
0876e692 +0x0302:  add    -0x50(%ebp),%eax
0876e695 +0x0305:  lea    (%eax,%edi,1),%edi
0876e698 +0x0308:  mov    %edi,-0x54(%ebp)
0876e69b +0x030b:  mov    -0xd4(%ebp),%eax
0876e6a1 +0x0311:  xor    -0xdc(%ebp),%eax
0876e6a7 +0x0317:  mov    -0x4c(%ebp),%edi
0876e6aa +0x031a:  mov    %eax,-0x7c(%ebp)
0876e6ad +0x031d:  mov    -0xbc(%ebp),%eax
0876e6b3 +0x0323:  xor    %eax,-0x7c(%ebp)
0876e6b6 +0x0326:  mov    -0xa8(%ebp),%eax
0876e6bc +0x032c:  ror    $0x2,%edi
0876e6bf +0x032f:  xor    %eax,-0x7c(%ebp)
0876e6c2 +0x0332:  rorl   $0x1f,-0x7c(%ebp)
0876e6c6 +0x0336:  mov    -0x7c(%ebp),%eax
0876e6c9 +0x0339:  lea    0x5a827999(%ecx,%eax,1),%ecx
0876e6d0 +0x0340:  mov    -0x54(%ebp),%eax
0876e6d3 +0x0343:  mov    %ecx,-0x4c(%ebp)
0876e6d6 +0x0346:  mov    %edi,%ecx
0876e6d8 +0x0348:  xor    %edx,%ecx
0876e6da +0x034a:  and    %esi,%ecx
0876e6dc +0x034c:  xor    %edx,%ecx
0876e6de +0x034e:  add    -0x4c(%ebp),%ecx
0876e6e1 +0x0351:  ror    $0x1b,%eax
0876e6e4 +0x0354:  ror    $0x2,%esi
0876e6e7 +0x0357:  add    %eax,%ecx
0876e6e9 +0x0359:  mov    -0xb8(%ebp),%eax
0876e6ef +0x035f:  mov    %ecx,-0x4c(%ebp)
0876e6f2 +0x0362:  mov    -0xd0(%ebp),%ecx
0876e6f8 +0x0368:  xor    -0xd8(%ebp),%ecx
0876e6fe +0x036e:  xor    %eax,%ecx
0876e700 +0x0370:  mov    -0xa4(%ebp),%eax
0876e706 +0x0376:  xor    %eax,%ecx
0876e708 +0x0378:  mov    -0x54(%ebp),%eax
0876e70b +0x037b:  ror    $0x1f,%ecx
0876e70e +0x037e:  mov    %ecx,-0x78(%ebp)
0876e711 +0x0381:  lea    0x5a827999(%edx,%ecx,1),%ecx
0876e718 +0x0388:  mov    %esi,%edx
0876e71a +0x038a:  xor    %edi,%edx
0876e71c +0x038c:  and    -0x54(%ebp),%edx
0876e71f +0x038f:  ror    $0x2,%eax
0876e722 +0x0392:  xor    %edi,%edx
0876e724 +0x0394:  lea    (%ecx,%edx,1),%edx
0876e727 +0x0397:  mov    -0x4c(%ebp),%ecx
0876e72a +0x039a:  ror    $0x1b,%ecx
0876e72d +0x039d:  lea    (%edx,%ecx,1),%ecx
0876e730 +0x03a0:  mov    -0xcc(%ebp),%edx
0876e736 +0x03a6:  mov    %ecx,-0x50(%ebp)
0876e739 +0x03a9:  mov    -0xb4(%ebp),%ecx
0876e73f +0x03af:  xor    -0xd4(%ebp),%edx
0876e745 +0x03b5:  xor    %ecx,%edx
0876e747 +0x03b7:  mov    -0xa0(%ebp),%ecx
0876e74d +0x03bd:  xor    %ecx,%edx
0876e74f +0x03bf:  mov    %eax,%ecx
0876e751 +0x03c1:  xor    %esi,%ecx
0876e753 +0x03c3:  and    -0x4c(%ebp),%ecx
0876e756 +0x03c6:  ror    $0x1f,%edx
0876e759 +0x03c9:  lea    0x5a827999(%edi,%edx,1),%edi
0876e760 +0x03d0:  xor    %esi,%ecx
0876e762 +0x03d2:  lea    (%edi,%ecx,1),%ecx
0876e765 +0x03d5:  mov    -0x50(%ebp),%edi
0876e768 +0x03d8:  mov    %edx,-0x64(%ebp)
0876e76b +0x03db:  mov    -0xc8(%ebp),%edx
0876e771 +0x03e1:  xor    -0xd0(%ebp),%edx
0876e777 +0x03e7:  ror    $0x1b,%edi
0876e77a +0x03ea:  lea    (%ecx,%edi,1),%edi
0876e77d +0x03ed:  mov    -0x4c(%ebp),%ecx
0876e780 +0x03f0:  mov    %edx,-0x6c(%ebp)
0876e783 +0x03f3:  mov    -0xb0(%ebp),%edx
0876e789 +0x03f9:  xor    %edx,-0x6c(%ebp)
0876e78c +0x03fc:  mov    -0x7c(%ebp),%edx
0876e78f +0x03ff:  xor    %edx,-0x6c(%ebp)
0876e792 +0x0402:  rorl   $0x1f,-0x6c(%ebp)
0876e796 +0x0406:  mov    -0x6c(%ebp),%edx
0876e799 +0x0409:  ror    $0x2,%ecx
0876e79c +0x040c:  lea    0x5a827999(%esi,%edx,1),%esi
0876e7a3 +0x0413:  mov    %edi,%edx
0876e7a5 +0x0415:  mov    %esi,-0x4c(%ebp)
0876e7a8 +0x0418:  mov    %ecx,%esi
0876e7aa +0x041a:  xor    %eax,%esi
0876e7ac +0x041c:  and    -0x50(%ebp),%esi
0876e7af +0x041f:  xor    %eax,%esi
0876e7b1 +0x0421:  add    -0x4c(%ebp),%esi
0876e7b4 +0x0424:  ror    $0x1b,%edx
0876e7b7 +0x0427:  add    %edx,%esi
0876e7b9 +0x0429:  mov    -0x50(%ebp),%edx
0876e7bc +0x042c:  mov    %esi,-0x4c(%ebp)
0876e7bf +0x042f:  mov    -0xc4(%ebp),%esi
0876e7c5 +0x0435:  xor    -0xcc(%ebp),%esi
0876e7cb +0x043b:  ror    $0x2,%edx
0876e7ce +0x043e:  mov    %esi,-0x80(%ebp)
0876e7d1 +0x0441:  mov    -0xac(%ebp),%esi
0876e7d7 +0x0447:  xor    %esi,-0x80(%ebp)
0876e7da +0x044a:  mov    -0x78(%ebp),%esi
0876e7dd +0x044d:  xor    %esi,-0x80(%ebp)
0876e7e0 +0x0450:  rorl   $0x1f,-0x80(%ebp)
0876e7e4 +0x0454:  mov    -0x80(%ebp),%esi
0876e7e7 +0x0457:  lea    0x6ed9eba1(%eax,%esi,1),%eax
0876e7ee +0x045e:  mov    -0x4c(%ebp),%esi
0876e7f1 +0x0461:  mov    %eax,-0x50(%ebp)
0876e7f4 +0x0464:  mov    %edx,%eax
0876e7f6 +0x0466:  xor    %ecx,%eax
0876e7f8 +0x0468:  xor    %edi,%eax
0876e7fa +0x046a:  add    -0x50(%ebp),%eax
0876e7fd +0x046d:  ror    $0x1b,%esi
0876e800 +0x0470:  ror    $0x2,%edi
0876e803 +0x0473:  lea    (%eax,%esi,1),%esi
0876e806 +0x0476:  mov    -0xc0(%ebp),%eax
0876e80c +0x047c:  xor    -0xc8(%ebp),%eax
0876e812 +0x0482:  mov    %eax,-0x58(%ebp)
0876e815 +0x0485:  mov    -0xa8(%ebp),%eax
0876e81b +0x048b:  xor    %eax,-0x58(%ebp)
0876e81e +0x048e:  mov    -0x64(%ebp),%eax
0876e821 +0x0491:  xor    %eax,-0x58(%ebp)
0876e824 +0x0494:  rorl   $0x1f,-0x58(%ebp)
0876e828 +0x0498:  mov    -0x58(%ebp),%eax
0876e82b +0x049b:  lea    0x6ed9eba1(%ecx,%eax,1),%ecx
0876e832 +0x04a2:  mov    %edi,%eax
0876e834 +0x04a4:  xor    %edx,%eax
0876e836 +0x04a6:  xor    -0x4c(%ebp),%eax
0876e839 +0x04a9:  lea    (%ecx,%eax,1),%eax
0876e83c +0x04ac:  mov    %esi,%ecx
0876e83e +0x04ae:  ror    $0x1b,%ecx
0876e841 +0x04b1:  lea    (%eax,%ecx,1),%ecx
0876e844 +0x04b4:  mov    -0xbc(%ebp),%eax
0876e84a +0x04ba:  xor    -0xc4(%ebp),%eax
0876e850 +0x04c0:  mov    %ecx,-0x54(%ebp)
0876e853 +0x04c3:  mov    -0x4c(%ebp),%ecx
0876e856 +0x04c6:  mov    %eax,-0x50(%ebp)
0876e859 +0x04c9:  mov    -0xa4(%ebp),%eax
0876e85f +0x04cf:  xor    %eax,-0x50(%ebp)
0876e862 +0x04d2:  mov    -0x6c(%ebp),%eax
0876e865 +0x04d5:  ror    $0x2,%ecx
0876e868 +0x04d8:  xor    %eax,-0x50(%ebp)
0876e86b +0x04db:  rorl   $0x1f,-0x50(%ebp)
0876e86f +0x04df:  mov    -0x50(%ebp),%eax
0876e872 +0x04e2:  lea    0x6ed9eba1(%edx,%eax,1),%edx
0876e879 +0x04e9:  mov    -0x54(%ebp),%eax
0876e87c +0x04ec:  mov    %edx,-0x4c(%ebp)
0876e87f +0x04ef:  mov    %ecx,%edx
0876e881 +0x04f1:  xor    %edi,%edx
0876e883 +0x04f3:  xor    %esi,%edx
0876e885 +0x04f5:  add    -0x4c(%ebp),%edx
0876e888 +0x04f8:  ror    $0x1b,%eax
0876e88b +0x04fb:  ror    $0x2,%esi
0876e88e +0x04fe:  add    %eax,%edx
0876e890 +0x0500:  mov    -0xa0(%ebp),%eax
0876e896 +0x0506:  mov    %edx,-0x4c(%ebp)
0876e899 +0x0509:  mov    -0xb8(%ebp),%edx
0876e89f +0x050f:  xor    -0xc0(%ebp),%edx
0876e8a5 +0x0515:  xor    %eax,%edx
0876e8a7 +0x0517:  mov    -0x80(%ebp),%eax
0876e8aa +0x051a:  xor    %eax,%edx
0876e8ac +0x051c:  mov    -0x54(%ebp),%eax
0876e8af +0x051f:  ror    $0x1f,%edx
0876e8b2 +0x0522:  mov    %edx,-0x74(%ebp)
0876e8b5 +0x0525:  lea    0x6ed9eba1(%edi,%edx,1),%edi
0876e8bc +0x052c:  mov    %esi,%edx
0876e8be +0x052e:  xor    %ecx,%edx
0876e8c0 +0x0530:  xor    -0x54(%ebp),%edx
0876e8c3 +0x0533:  ror    $0x2,%eax
0876e8c6 +0x0536:  lea    (%edi,%edx,1),%edx
0876e8c9 +0x0539:  mov    -0x4c(%ebp),%edi
0876e8cc +0x053c:  ror    $0x1b,%edi
0876e8cf +0x053f:  lea    (%edx,%edi,1),%edi
0876e8d2 +0x0542:  mov    -0xb4(%ebp),%edx
0876e8d8 +0x0548:  xor    -0xbc(%ebp),%edx
0876e8de +0x054e:  mov    %edx,-0x60(%ebp)
0876e8e1 +0x0551:  mov    -0x7c(%ebp),%edx
0876e8e4 +0x0554:  xor    %edx,-0x60(%ebp)
0876e8e7 +0x0557:  mov    -0x58(%ebp),%edx
0876e8ea +0x055a:  xor    %edx,-0x60(%ebp)
0876e8ed +0x055d:  rorl   $0x1f,-0x60(%ebp)
0876e8f1 +0x0561:  mov    -0x60(%ebp),%edx
0876e8f4 +0x0564:  lea    0x6ed9eba1(%ecx,%edx,1),%ecx
0876e8fb +0x056b:  mov    %eax,%edx
0876e8fd +0x056d:  xor    %esi,%edx
0876e8ff +0x056f:  xor    -0x4c(%ebp),%edx
0876e902 +0x0572:  lea    (%ecx,%edx,1),%edx
0876e905 +0x0575:  mov    %edi,%ecx
0876e907 +0x0577:  ror    $0x1b,%ecx
0876e90a +0x057a:  lea    (%edx,%ecx,1),%ecx
0876e90d +0x057d:  mov    -0x4c(%ebp),%edx
0876e910 +0x0580:  mov    %ecx,-0x68(%ebp)
0876e913 +0x0583:  mov    -0xb0(%ebp),%ecx
0876e919 +0x0589:  xor    -0xb8(%ebp),%ecx
0876e91f +0x058f:  ror    $0x2,%edx
0876e922 +0x0592:  mov    %ecx,-0x5c(%ebp)
0876e925 +0x0595:  mov    -0x78(%ebp),%ecx
0876e928 +0x0598:  xor    %ecx,-0x5c(%ebp)
0876e92b +0x059b:  mov    -0x50(%ebp),%ecx
0876e92e +0x059e:  xor    %ecx,-0x5c(%ebp)
0876e931 +0x05a1:  rorl   $0x1f,-0x5c(%ebp)
0876e935 +0x05a5:  mov    -0x5c(%ebp),%ecx
0876e938 +0x05a8:  lea    0x6ed9eba1(%esi,%ecx,1),%esi
0876e93f +0x05af:  mov    -0x68(%ebp),%ecx
0876e942 +0x05b2:  mov    %esi,-0x4c(%ebp)
0876e945 +0x05b5:  mov    %edx,%esi
0876e947 +0x05b7:  xor    %eax,%esi
0876e949 +0x05b9:  xor    %edi,%esi
0876e94b +0x05bb:  add    -0x4c(%ebp),%esi
0876e94e +0x05be:  ror    $0x1b,%ecx
0876e951 +0x05c1:  ror    $0x2,%edi
0876e954 +0x05c4:  add    %ecx,%esi
0876e956 +0x05c6:  mov    -0x64(%ebp),%ecx
0876e959 +0x05c9:  mov    %esi,-0x4c(%ebp)
0876e95c +0x05cc:  mov    -0xac(%ebp),%esi
0876e962 +0x05d2:  xor    -0xb4(%ebp),%esi
0876e968 +0x05d8:  xor    %ecx,%esi
0876e96a +0x05da:  mov    -0x74(%ebp),%ecx
0876e96d +0x05dd:  xor    %ecx,%esi
0876e96f +0x05df:  ror    $0x1f,%esi
0876e972 +0x05e2:  mov    %esi,-0x54(%ebp)
0876e975 +0x05e5:  lea    0x6ed9eba1(%eax,%esi,1),%esi
0876e97c +0x05ec:  mov    %edi,%eax
0876e97e +0x05ee:  xor    %edx,%eax
0876e980 +0x05f0:  xor    -0x68(%ebp),%eax
0876e983 +0x05f3:  lea    (%esi,%eax,1),%eax
0876e986 +0x05f6:  mov    -0x4c(%ebp),%esi
0876e989 +0x05f9:  ror    $0x1b,%esi
0876e98c +0x05fc:  lea    (%eax,%esi,1),%esi
0876e98f +0x05ff:  mov    %esi,-0x70(%ebp)
0876e992 +0x0602:  mov    -0x6c(%ebp),%eax
0876e995 +0x0605:  mov    -0xa8(%ebp),%esi
0876e99b +0x060b:  xor    -0xb0(%ebp),%esi
0876e9a1 +0x0611:  mov    -0x68(%ebp),%ecx
0876e9a4 +0x0614:  xor    %eax,%esi
0876e9a6 +0x0616:  mov    -0x60(%ebp),%eax
0876e9a9 +0x0619:  ror    $0x2,%ecx
0876e9ac +0x061c:  xor    %eax,%esi
0876e9ae +0x061e:  ror    $0x1f,%esi
0876e9b1 +0x0621:  lea    0x6ed9eba1(%edx,%esi,1),%eax
0876e9b8 +0x0628:  mov    %ecx,%edx
0876e9ba +0x062a:  mov    %esi,-0x90(%ebp)
0876e9c0 +0x0630:  mov    -0x70(%ebp),%esi
0876e9c3 +0x0633:  xor    %edi,%edx
0876e9c5 +0x0635:  xor    -0x4c(%ebp),%edx
0876e9c8 +0x0638:  ror    $0x1b,%esi
0876e9cb +0x063b:  lea    (%eax,%edx,1),%edx
0876e9ce +0x063e:  mov    -0x80(%ebp),%eax
0876e9d1 +0x0641:  lea    (%edx,%esi,1),%esi
0876e9d4 +0x0644:  mov    -0xa4(%ebp),%edx
0876e9da +0x064a:  xor    -0xac(%ebp),%edx
0876e9e0 +0x0650:  mov    %esi,-0x68(%ebp)
0876e9e3 +0x0653:  mov    -0x4c(%ebp),%esi
0876e9e6 +0x0656:  xor    %eax,%edx
0876e9e8 +0x0658:  mov    -0x5c(%ebp),%eax
0876e9eb +0x065b:  ror    $0x2,%esi
0876e9ee +0x065e:  xor    %eax,%edx
0876e9f0 +0x0660:  mov    -0x70(%ebp),%eax
0876e9f3 +0x0663:  ror    $0x1f,%edx
0876e9f6 +0x0666:  mov    %edx,-0x8c(%ebp)
0876e9fc +0x066c:  lea    0x6ed9eba1(%edi,%edx,1),%edx
0876ea03 +0x0673:  mov    %esi,%edi
0876ea05 +0x0675:  xor    %ecx,%edi
0876ea07 +0x0677:  xor    -0x70(%ebp),%edi
0876ea0a +0x067a:  ror    $0x2,%eax
0876ea0d +0x067d:  add    %edx,%edi
0876ea0f +0x067f:  mov    -0x68(%ebp),%edx
0876ea12 +0x0682:  ror    $0x1b,%edx
0876ea15 +0x0685:  add    %edx,%edi
0876ea17 +0x0687:  mov    -0xa0(%ebp),%edx
0876ea1d +0x068d:  xor    -0xa8(%ebp),%edx
0876ea23 +0x0693:  mov    %edx,-0x88(%ebp)
0876ea29 +0x0699:  mov    -0x58(%ebp),%edx
0876ea2c +0x069c:  xor    %edx,-0x88(%ebp)
0876ea32 +0x06a2:  mov    -0x54(%ebp),%edx
0876ea35 +0x06a5:  xor    %edx,-0x88(%ebp)
0876ea3b +0x06ab:  rorl   $0x1f,-0x88(%ebp)
0876ea42 +0x06b2:  mov    -0x88(%ebp),%edx
0876ea48 +0x06b8:  lea    0x6ed9eba1(%ecx,%edx,1),%ecx
0876ea4f +0x06bf:  mov    %edi,%edx
0876ea51 +0x06c1:  mov    %ecx,-0x4c(%ebp)
0876ea54 +0x06c4:  mov    %eax,%ecx
0876ea56 +0x06c6:  xor    %esi,%ecx
0876ea58 +0x06c8:  xor    -0x68(%ebp),%ecx
0876ea5b +0x06cb:  add    -0x4c(%ebp),%ecx
0876ea5e +0x06ce:  ror    $0x1b,%edx
0876ea61 +0x06d1:  add    %edx,%ecx
0876ea63 +0x06d3:  mov    %ecx,-0x70(%ebp)
0876ea66 +0x06d6:  mov    -0x7c(%ebp),%ecx
0876ea69 +0x06d9:  xor    -0xa4(%ebp),%ecx
0876ea6f +0x06df:  mov    -0x68(%ebp),%edx
0876ea72 +0x06e2:  mov    %ecx,-0x84(%ebp)
0876ea78 +0x06e8:  mov    -0x50(%ebp),%ecx
0876ea7b +0x06eb:  xor    %ecx,-0x84(%ebp)
0876ea81 +0x06f1:  mov    -0x90(%ebp),%ecx
0876ea87 +0x06f7:  ror    $0x2,%edx
0876ea8a +0x06fa:  xor    %ecx,-0x84(%ebp)
0876ea90 +0x0700:  rorl   $0x1f,-0x84(%ebp)
0876ea97 +0x0707:  mov    -0x84(%ebp),%ecx
0876ea9d +0x070d:  lea    0x6ed9eba1(%esi,%ecx,1),%esi
0876eaa4 +0x0714:  mov    -0x70(%ebp),%ecx
0876eaa7 +0x0717:  mov    %esi,-0x4c(%ebp)
0876eaaa +0x071a:  mov    %edx,%esi
0876eaac +0x071c:  xor    %eax,%esi
0876eaae +0x071e:  xor    %edi,%esi
0876eab0 +0x0720:  add    -0x4c(%ebp),%esi
0876eab3 +0x0723:  ror    $0x1b,%ecx
0876eab6 +0x0726:  ror    $0x2,%edi
0876eab9 +0x0729:  add    %ecx,%esi
0876eabb +0x072b:  mov    -0x78(%ebp),%ecx
0876eabe +0x072e:  xor    -0xa0(%ebp),%ecx
0876eac4 +0x0734:  mov    %ecx,-0x68(%ebp)
0876eac7 +0x0737:  mov    -0x74(%ebp),%ecx
0876eaca +0x073a:  xor    %ecx,-0x68(%ebp)
0876eacd +0x073d:  mov    -0x8c(%ebp),%ecx
0876ead3 +0x0743:  xor    %ecx,-0x68(%ebp)
0876ead6 +0x0746:  rorl   $0x1f,-0x68(%ebp)
0876eada +0x074a:  mov    -0x68(%ebp),%ecx
0876eadd +0x074d:  lea    0x6ed9eba1(%eax,%ecx,1),%eax
0876eae4 +0x0754:  mov    %esi,%ecx
0876eae6 +0x0756:  mov    %eax,-0x4c(%ebp)
0876eae9 +0x0759:  mov    %edi,%eax
0876eaeb +0x075b:  xor    %edx,%eax
0876eaed +0x075d:  xor    -0x70(%ebp),%eax
0876eaf0 +0x0760:  add    -0x4c(%ebp),%eax
0876eaf3 +0x0763:  ror    $0x1b,%ecx
0876eaf6 +0x0766:  add    %ecx,%eax
0876eaf8 +0x0768:  mov    -0x70(%ebp),%ecx
0876eafb +0x076b:  mov    %eax,-0x94(%ebp)
0876eb01 +0x0771:  mov    -0x64(%ebp),%eax
0876eb04 +0x0774:  xor    -0x7c(%ebp),%eax
0876eb07 +0x0777:  ror    $0x2,%ecx
0876eb0a +0x077a:  mov    %eax,-0x7c(%ebp)
0876eb0d +0x077d:  mov    -0x60(%ebp),%eax
0876eb10 +0x0780:  xor    %eax,-0x7c(%ebp)
0876eb13 +0x0783:  mov    -0x88(%ebp),%eax
0876eb19 +0x0789:  xor    %eax,-0x7c(%ebp)
0876eb1c +0x078c:  rorl   $0x1f,-0x7c(%ebp)
0876eb20 +0x0790:  mov    -0x7c(%ebp),%eax
0876eb23 +0x0793:  lea    0x6ed9eba1(%edx,%eax,1),%edx
0876eb2a +0x079a:  mov    -0x94(%ebp),%eax
0876eb30 +0x07a0:  mov    %edx,-0x4c(%ebp)
0876eb33 +0x07a3:  mov    %ecx,%edx
0876eb35 +0x07a5:  xor    %edi,%edx
0876eb37 +0x07a7:  xor    %esi,%edx
0876eb39 +0x07a9:  add    -0x4c(%ebp),%edx
0876eb3c +0x07ac:  ror    $0x1b,%eax
0876eb3f +0x07af:  ror    $0x2,%esi
0876eb42 +0x07b2:  add    %eax,%edx
0876eb44 +0x07b4:  mov    -0x5c(%ebp),%eax
0876eb47 +0x07b7:  mov    %edx,-0x70(%ebp)
0876eb4a +0x07ba:  mov    -0x6c(%ebp),%edx
0876eb4d +0x07bd:  xor    -0x78(%ebp),%edx
0876eb50 +0x07c0:  xor    %eax,%edx
0876eb52 +0x07c2:  mov    -0x84(%ebp),%eax
0876eb58 +0x07c8:  xor    %eax,%edx
0876eb5a +0x07ca:  mov    -0x94(%ebp),%eax
0876eb60 +0x07d0:  ror    $0x1f,%edx
0876eb63 +0x07d3:  mov    %edx,-0x78(%ebp)
0876eb66 +0x07d6:  lea    0x6ed9eba1(%edi,%edx,1),%edx
0876eb6d +0x07dd:  mov    %esi,%edi
0876eb6f +0x07df:  xor    %ecx,%edi
0876eb71 +0x07e1:  xor    -0x94(%ebp),%edi
0876eb77 +0x07e7:  ror    $0x2,%eax
0876eb7a +0x07ea:  add    %edx,%edi
0876eb7c +0x07ec:  mov    -0x70(%ebp),%edx
0876eb7f +0x07ef:  ror    $0x1b,%edx
0876eb82 +0x07f2:  add    %edx,%edi
0876eb84 +0x07f4:  mov    -0x80(%ebp),%edx
0876eb87 +0x07f7:  xor    -0x64(%ebp),%edx
0876eb8a +0x07fa:  mov    %edx,-0x64(%ebp)
0876eb8d +0x07fd:  mov    -0x54(%ebp),%edx
0876eb90 +0x0800:  xor    %edx,-0x64(%ebp)
0876eb93 +0x0803:  mov    -0x68(%ebp),%edx
0876eb96 +0x0806:  xor    %edx,-0x64(%ebp)
0876eb99 +0x0809:  rorl   $0x1f,-0x64(%ebp)
0876eb9d +0x080d:  mov    -0x64(%ebp),%edx
0876eba0 +0x0810:  lea    0x6ed9eba1(%ecx,%edx,1),%ecx
0876eba7 +0x0817:  mov    %edi,%edx
0876eba9 +0x0819:  mov    %ecx,-0x4c(%ebp)
0876ebac +0x081c:  mov    %eax,%ecx
0876ebae +0x081e:  xor    %esi,%ecx
0876ebb0 +0x0820:  xor    -0x70(%ebp),%ecx
0876ebb3 +0x0823:  add    -0x4c(%ebp),%ecx
0876ebb6 +0x0826:  ror    $0x1b,%edx
0876ebb9 +0x0829:  add    %edx,%ecx
0876ebbb +0x082b:  mov    -0x70(%ebp),%edx
0876ebbe +0x082e:  mov    %ecx,-0x94(%ebp)
0876ebc4 +0x0834:  mov    -0x58(%ebp),%ecx
0876ebc7 +0x0837:  xor    -0x6c(%ebp),%ecx
0876ebca +0x083a:  ror    $0x2,%edx
0876ebcd +0x083d:  mov    %ecx,-0x6c(%ebp)
0876ebd0 +0x0840:  mov    -0x90(%ebp),%ecx
0876ebd6 +0x0846:  xor    %ecx,-0x6c(%ebp)
0876ebd9 +0x0849:  mov    -0x7c(%ebp),%ecx
0876ebdc +0x084c:  xor    %ecx,-0x6c(%ebp)
0876ebdf +0x084f:  rorl   $0x1f,-0x6c(%ebp)
0876ebe3 +0x0853:  mov    -0x6c(%ebp),%ecx
0876ebe6 +0x0856:  lea    0x6ed9eba1(%esi,%ecx,1),%esi
0876ebed +0x085d:  mov    -0x94(%ebp),%ecx
0876ebf3 +0x0863:  mov    %esi,-0x4c(%ebp)
0876ebf6 +0x0866:  mov    %edx,%esi
0876ebf8 +0x0868:  xor    %eax,%esi
0876ebfa +0x086a:  xor    %edi,%esi
0876ebfc +0x086c:  add    -0x4c(%ebp),%esi
0876ebff +0x086f:  ror    $0x1b,%ecx
0876ec02 +0x0872:  ror    $0x2,%edi
0876ec05 +0x0875:  add    %ecx,%esi
0876ec07 +0x0877:  mov    -0x50(%ebp),%ecx
0876ec0a +0x087a:  xor    -0x80(%ebp),%ecx
0876ec0d +0x087d:  mov    %ecx,-0x80(%ebp)
0876ec10 +0x0880:  mov    -0x8c(%ebp),%ecx
0876ec16 +0x0886:  xor    %ecx,-0x80(%ebp)
0876ec19 +0x0889:  mov    -0x78(%ebp),%ecx
0876ec1c +0x088c:  xor    %ecx,-0x80(%ebp)
0876ec1f +0x088f:  rorl   $0x1f,-0x80(%ebp)
0876ec23 +0x0893:  mov    -0x80(%ebp),%ecx
0876ec26 +0x0896:  lea    0x6ed9eba1(%eax,%ecx,1),%eax
0876ec2d +0x089d:  mov    %esi,%ecx
0876ec2f +0x089f:  mov    %eax,-0x4c(%ebp)
0876ec32 +0x08a2:  mov    %edi,%eax
0876ec34 +0x08a4:  xor    %edx,%eax
0876ec36 +0x08a6:  xor    -0x94(%ebp),%eax
0876ec3c +0x08ac:  add    -0x4c(%ebp),%eax
0876ec3f +0x08af:  ror    $0x1b,%ecx
0876ec42 +0x08b2:  add    %ecx,%eax
0876ec44 +0x08b4:  mov    %eax,-0x70(%ebp)
0876ec47 +0x08b7:  mov    -0x74(%ebp),%eax
0876ec4a +0x08ba:  xor    -0x58(%ebp),%eax
0876ec4d +0x08bd:  mov    -0x94(%ebp),%ecx
0876ec53 +0x08c3:  mov    %eax,-0x58(%ebp)
0876ec56 +0x08c6:  mov    -0x88(%ebp),%eax
0876ec5c +0x08cc:  xor    %eax,-0x58(%ebp)
0876ec5f +0x08cf:  mov    -0x64(%ebp),%eax
0876ec62 +0x08d2:  ror    $0x2,%ecx
0876ec65 +0x08d5:  xor    %eax,-0x58(%ebp)
0876ec68 +0x08d8:  rorl   $0x1f,-0x58(%ebp)
0876ec6c +0x08dc:  mov    -0x58(%ebp),%eax
0876ec6f +0x08df:  lea    0x6ed9eba1(%edx,%eax,1),%edx
0876ec76 +0x08e6:  mov    -0x70(%ebp),%eax
0876ec79 +0x08e9:  mov    %edx,-0x4c(%ebp)
0876ec7c +0x08ec:  mov    %ecx,%edx
0876ec7e +0x08ee:  xor    %edi,%edx
0876ec80 +0x08f0:  xor    %esi,%edx
0876ec82 +0x08f2:  add    -0x4c(%ebp),%edx
0876ec85 +0x08f5:  ror    $0x1b,%eax
0876ec88 +0x08f8:  ror    $0x2,%esi
0876ec8b +0x08fb:  add    %eax,%edx
0876ec8d +0x08fd:  mov    -0x84(%ebp),%eax
0876ec93 +0x0903:  mov    %edx,-0x4c(%ebp)
0876ec96 +0x0906:  mov    -0x60(%ebp),%edx
0876ec99 +0x0909:  xor    -0x50(%ebp),%edx
0876ec9c +0x090c:  xor    %eax,%edx
0876ec9e +0x090e:  mov    -0x6c(%ebp),%eax
0876eca1 +0x0911:  xor    %eax,%edx
0876eca3 +0x0913:  mov    -0x5c(%ebp),%eax
0876eca6 +0x0916:  ror    $0x1f,%edx
0876eca9 +0x0919:  mov    %edx,-0x50(%ebp)
0876ecac +0x091c:  lea    0x6ed9eba1(%edi,%edx,1),%edi
0876ecb3 +0x0923:  mov    %esi,%edx
0876ecb5 +0x0925:  xor    %ecx,%edx
0876ecb7 +0x0927:  xor    -0x70(%ebp),%edx
0876ecba +0x092a:  xor    -0x74(%ebp),%eax
0876ecbd +0x092d:  add    %edx,%edi
0876ecbf +0x092f:  mov    -0x4c(%ebp),%edx
0876ecc2 +0x0932:  ror    $0x1b,%edx
0876ecc5 +0x0935:  add    %edx,%edi
0876ecc7 +0x0937:  mov    -0x70(%ebp),%edx
0876ecca +0x093a:  ror    $0x2,%edx
0876eccd +0x093d:  mov    %edx,-0x94(%ebp)
0876ecd3 +0x0943:  mov    -0x68(%ebp),%edx
0876ecd6 +0x0946:  xor    %edx,%eax
0876ecd8 +0x0948:  mov    -0x80(%ebp),%edx
0876ecdb +0x094b:  xor    %edx,%eax
0876ecdd +0x094d:  mov    -0x94(%ebp),%edx
0876ece3 +0x0953:  ror    $0x1f,%eax
0876ece6 +0x0956:  lea    0x6ed9eba1(%ecx,%eax,1),%ecx
0876eced +0x095d:  mov    %eax,-0x74(%ebp)
0876ecf0 +0x0960:  xor    %esi,%edx
0876ecf2 +0x0962:  xor    -0x4c(%ebp),%edx
0876ecf5 +0x0965:  add    %edx,%ecx
0876ecf7 +0x0967:  mov    %edi,%edx
0876ecf9 +0x0969:  ror    $0x1b,%edx
0876ecfc +0x096c:  lea    (%ecx,%edx,1),%edx
0876ecff +0x096f:  mov    %edx,-0x98(%ebp)
0876ed05 +0x0975:  mov    -0x54(%ebp),%ecx
0876ed08 +0x0978:  mov    -0x7c(%ebp),%eax
0876ed0b +0x097b:  xor    -0x60(%ebp),%ecx
0876ed0e +0x097e:  mov    -0x4c(%ebp),%edx
0876ed11 +0x0981:  xor    %eax,%ecx
0876ed13 +0x0983:  mov    -0x58(%ebp),%eax
0876ed16 +0x0986:  ror    $0x2,%edx
0876ed19 +0x0989:  xor    %eax,%ecx
0876ed1b +0x098b:  mov    -0x78(%ebp),%eax
0876ed1e +0x098e:  ror    $0x1f,%ecx
0876ed21 +0x0991:  lea    -0x70e44324(%esi,%ecx,1),%esi
0876ed28 +0x0998:  mov    %esi,-0x4c(%ebp)
0876ed2b +0x099b:  mov    %edi,%esi
0876ed2d +0x099d:  or     %edx,%esi
0876ed2f +0x099f:  and    -0x94(%ebp),%esi
0876ed35 +0x09a5:  mov    %ecx,-0x60(%ebp)
0876ed38 +0x09a8:  mov    %edi,%ecx
0876ed3a +0x09aa:  and    %edx,%ecx
0876ed3c +0x09ac:  or     %ecx,%esi
0876ed3e +0x09ae:  mov    -0x98(%ebp),%ecx
0876ed44 +0x09b4:  add    -0x4c(%ebp),%esi
0876ed47 +0x09b7:  ror    $0x2,%edi
0876ed4a +0x09ba:  ror    $0x1b,%ecx
0876ed4d +0x09bd:  add    %ecx,%esi
0876ed4f +0x09bf:  mov    -0x90(%ebp),%ecx
0876ed55 +0x09c5:  xor    -0x5c(%ebp),%ecx
0876ed58 +0x09c8:  xor    %eax,%ecx
0876ed5a +0x09ca:  mov    -0x50(%ebp),%eax
0876ed5d +0x09cd:  xor    %eax,%ecx
0876ed5f +0x09cf:  mov    -0x94(%ebp),%eax
0876ed65 +0x09d5:  ror    $0x1f,%ecx
0876ed68 +0x09d8:  mov    %ecx,-0x5c(%ebp)
0876ed6b +0x09db:  lea    -0x70e44324(%eax,%ecx,1),%eax
0876ed72 +0x09e2:  mov    -0x98(%ebp),%ecx
0876ed78 +0x09e8:  mov    %eax,-0x4c(%ebp)
0876ed7b +0x09eb:  mov    -0x98(%ebp),%eax
0876ed81 +0x09f1:  and    %edi,%ecx
0876ed83 +0x09f3:  or     %edi,%eax
0876ed85 +0x09f5:  and    %edx,%eax
0876ed87 +0x09f7:  or     %ecx,%eax
0876ed89 +0x09f9:  mov    %esi,%ecx
0876ed8b +0x09fb:  add    -0x4c(%ebp),%eax
0876ed8e +0x09fe:  ror    $0x1b,%ecx
0876ed91 +0x0a01:  add    %ecx,%eax
0876ed93 +0x0a03:  mov    -0x98(%ebp),%ecx
0876ed99 +0x0a09:  mov    %eax,-0x70(%ebp)
0876ed9c +0x0a0c:  mov    -0x8c(%ebp),%eax
0876eda2 +0x0a12:  xor    -0x54(%ebp),%eax
0876eda5 +0x0a15:  ror    $0x2,%ecx
0876eda8 +0x0a18:  mov    %eax,-0x54(%ebp)
0876edab +0x0a1b:  mov    -0x64(%ebp),%eax
0876edae +0x0a1e:  xor    %eax,-0x54(%ebp)
0876edb1 +0x0a21:  mov    -0x74(%ebp),%eax
0876edb4 +0x0a24:  xor    %eax,-0x54(%ebp)
0876edb7 +0x0a27:  rorl   $0x1f,-0x54(%ebp)
0876edbb +0x0a2b:  mov    -0x54(%ebp),%eax
0876edbe +0x0a2e:  lea    -0x70e44324(%edx,%eax,1),%edx
0876edc5 +0x0a35:  mov    %esi,%eax
0876edc7 +0x0a37:  mov    %edx,-0x94(%ebp)
0876edcd +0x0a3d:  or     %ecx,%eax
0876edcf +0x0a3f:  mov    %esi,%edx
0876edd1 +0x0a41:  and    %ecx,%edx
0876edd3 +0x0a43:  and    %edi,%eax
0876edd5 +0x0a45:  or     %edx,%eax
0876edd7 +0x0a47:  mov    -0x70(%ebp),%edx
0876edda +0x0a4a:  add    -0x94(%ebp),%eax
0876ede0 +0x0a50:  ror    $0x2,%esi
0876ede3 +0x0a53:  ror    $0x1b,%edx
0876ede6 +0x0a56:  lea    (%eax,%edx,1),%edx
0876ede9 +0x0a59:  mov    -0x88(%ebp),%eax
0876edef +0x0a5f:  xor    -0x90(%ebp),%eax
0876edf5 +0x0a65:  mov    %eax,-0x90(%ebp)
0876edfb +0x0a6b:  mov    -0x6c(%ebp),%eax
0876edfe +0x0a6e:  xor    %eax,-0x90(%ebp)
0876ee04 +0x0a74:  mov    -0x60(%ebp),%eax
0876ee07 +0x0a77:  xor    %eax,-0x90(%ebp)
0876ee0d +0x0a7d:  rorl   $0x1f,-0x90(%ebp)
0876ee14 +0x0a84:  mov    -0x90(%ebp),%eax
0876ee1a +0x0a8a:  lea    -0x70e44324(%edi,%eax,1),%edi
0876ee21 +0x0a91:  mov    -0x70(%ebp),%eax
0876ee24 +0x0a94:  mov    %edi,-0x94(%ebp)
0876ee2a +0x0a9a:  mov    -0x70(%ebp),%edi
0876ee2d +0x0a9d:  or     %esi,%eax
0876ee2f +0x0a9f:  and    %ecx,%eax
0876ee31 +0x0aa1:  and    %esi,%edi
0876ee33 +0x0aa3:  or     %edi,%eax
0876ee35 +0x0aa5:  mov    %edx,%edi
0876ee37 +0x0aa7:  add    -0x94(%ebp),%eax
0876ee3d +0x0aad:  ror    $0x1b,%edi
0876ee40 +0x0ab0:  lea    (%eax,%edi,1),%edi
0876ee43 +0x0ab3:  mov    -0x70(%ebp),%eax
0876ee46 +0x0ab6:  mov    %edi,-0x4c(%ebp)
0876ee49 +0x0ab9:  mov    -0x84(%ebp),%edi
0876ee4f +0x0abf:  xor    -0x8c(%ebp),%edi
0876ee55 +0x0ac5:  ror    $0x2,%eax
0876ee58 +0x0ac8:  mov    %edi,-0x8c(%ebp)
0876ee5e +0x0ace:  mov    -0x80(%ebp),%edi
0876ee61 +0x0ad1:  xor    %edi,-0x8c(%ebp)
0876ee67 +0x0ad7:  mov    -0x5c(%ebp),%edi
0876ee6a +0x0ada:  xor    %edi,-0x8c(%ebp)
0876ee70 +0x0ae0:  rorl   $0x1f,-0x8c(%ebp)
0876ee77 +0x0ae7:  mov    -0x8c(%ebp),%edi
0876ee7d +0x0aed:  lea    -0x70e44324(%ecx,%edi,1),%ecx
0876ee84 +0x0af4:  mov    %edx,%edi
0876ee86 +0x0af6:  mov    %ecx,-0x94(%ebp)
0876ee8c +0x0afc:  mov    %edx,%ecx
0876ee8e +0x0afe:  and    %eax,%edi
0876ee90 +0x0b00:  or     %eax,%ecx
0876ee92 +0x0b02:  and    %esi,%ecx
0876ee94 +0x0b04:  or     %edi,%ecx
0876ee96 +0x0b06:  mov    -0x4c(%ebp),%edi
0876ee99 +0x0b09:  add    -0x94(%ebp),%ecx
0876ee9f +0x0b0f:  ror    $0x2,%edx
0876eea2 +0x0b12:  ror    $0x1b,%edi
0876eea5 +0x0b15:  lea    (%ecx,%edi,1),%edi
0876eea8 +0x0b18:  mov    %edi,-0x94(%ebp)
0876eeae +0x0b1e:  mov    -0x68(%ebp),%ecx
0876eeb1 +0x0b21:  mov    -0x58(%ebp),%edi
0876eeb4 +0x0b24:  xor    -0x88(%ebp),%ecx
0876eeba +0x0b2a:  xor    %edi,%ecx
0876eebc +0x0b2c:  mov    -0x54(%ebp),%edi
0876eebf +0x0b2f:  xor    %edi,%ecx
0876eec1 +0x0b31:  mov    -0x4c(%ebp),%edi
0876eec4 +0x0b34:  ror    $0x1f,%ecx
0876eec7 +0x0b37:  mov    %ecx,-0x88(%ebp)
0876eecd +0x0b3d:  lea    -0x70e44324(%esi,%ecx,1),%ecx
0876eed4 +0x0b44:  mov    -0x4c(%ebp),%esi
0876eed7 +0x0b47:  and    %edx,%edi
0876eed9 +0x0b49:  or     %edx,%esi
0876eedb +0x0b4b:  and    %eax,%esi
0876eedd +0x0b4d:  or     %edi,%esi
0876eedf +0x0b4f:  mov    -0x94(%ebp),%edi
0876eee5 +0x0b55:  lea    (%ecx,%esi,1),%esi
0876eee8 +0x0b58:  mov    -0x7c(%ebp),%ecx
0876eeeb +0x0b5b:  xor    -0x84(%ebp),%ecx
0876eef1 +0x0b61:  ror    $0x1b,%edi
0876eef4 +0x0b64:  mov    %ecx,-0x84(%ebp)
0876eefa +0x0b6a:  mov    -0x50(%ebp),%ecx
0876eefd +0x0b6d:  add    %edi,%esi
0876eeff +0x0b6f:  xor    %ecx,-0x84(%ebp)
0876ef05 +0x0b75:  mov    -0x90(%ebp),%ecx
0876ef0b +0x0b7b:  xor    %ecx,-0x84(%ebp)
0876ef11 +0x0b81:  rorl   $0x1f,-0x84(%ebp)
0876ef18 +0x0b88:  mov    -0x84(%ebp),%ecx
0876ef1e +0x0b8e:  mov    -0x4c(%ebp),%edi
0876ef21 +0x0b91:  lea    -0x70e44324(%eax,%ecx,1),%eax
0876ef28 +0x0b98:  mov    -0x94(%ebp),%ecx
0876ef2e +0x0b9e:  mov    %eax,-0x4c(%ebp)
0876ef31 +0x0ba1:  mov    -0x94(%ebp),%eax
0876ef37 +0x0ba7:  ror    $0x2,%edi
0876ef3a +0x0baa:  or     %edi,%eax
0876ef3c +0x0bac:  and    %edx,%eax
0876ef3e +0x0bae:  and    %edi,%ecx
0876ef40 +0x0bb0:  or     %ecx,%eax
0876ef42 +0x0bb2:  mov    %esi,%ecx
0876ef44 +0x0bb4:  add    -0x4c(%ebp),%eax
0876ef47 +0x0bb7:  ror    $0x1b,%ecx
0876ef4a +0x0bba:  add    %ecx,%eax
0876ef4c +0x0bbc:  mov    -0x94(%ebp),%ecx
0876ef52 +0x0bc2:  mov    %eax,-0x4c(%ebp)
0876ef55 +0x0bc5:  mov    -0x78(%ebp),%eax
0876ef58 +0x0bc8:  xor    -0x68(%ebp),%eax
0876ef5b +0x0bcb:  ror    $0x2,%ecx
0876ef5e +0x0bce:  mov    %eax,-0x68(%ebp)
0876ef61 +0x0bd1:  mov    -0x74(%ebp),%eax
0876ef64 +0x0bd4:  xor    %eax,-0x68(%ebp)
0876ef67 +0x0bd7:  mov    -0x8c(%ebp),%eax
0876ef6d +0x0bdd:  xor    %eax,-0x68(%ebp)
0876ef70 +0x0be0:  rorl   $0x1f,-0x68(%ebp)
0876ef74 +0x0be4:  mov    -0x68(%ebp),%eax
0876ef77 +0x0be7:  lea    -0x70e44324(%edx,%eax,1),%edx
0876ef7e +0x0bee:  mov    %esi,%eax
0876ef80 +0x0bf0:  mov    %edx,-0x94(%ebp)
0876ef86 +0x0bf6:  or     %ecx,%eax
0876ef88 +0x0bf8:  mov    %esi,%edx
0876ef8a +0x0bfa:  and    %ecx,%edx
0876ef8c +0x0bfc:  and    %edi,%eax
0876ef8e +0x0bfe:  or     %edx,%eax
0876ef90 +0x0c00:  mov    -0x94(%ebp),%edx
0876ef96 +0x0c06:  ror    $0x2,%esi
0876ef99 +0x0c09:  add    %eax,%edx
0876ef9b +0x0c0b:  mov    -0x4c(%ebp),%eax
0876ef9e +0x0c0e:  ror    $0x1b,%eax
0876efa1 +0x0c11:  lea    (%edx,%eax,1),%eax
0876efa4 +0x0c14:  mov    -0x60(%ebp),%edx
0876efa7 +0x0c17:  mov    %eax,-0x94(%ebp)
0876efad +0x0c1d:  mov    -0x64(%ebp),%eax
0876efb0 +0x0c20:  xor    -0x7c(%ebp),%eax
0876efb3 +0x0c23:  xor    %edx,%eax
0876efb5 +0x0c25:  mov    -0x88(%ebp),%edx
0876efbb +0x0c2b:  xor    %edx,%eax
0876efbd +0x0c2d:  ror    $0x1f,%eax
0876efc0 +0x0c30:  lea    -0x70e44324(%edi,%eax,1),%edx
0876efc7 +0x0c37:  mov    -0x4c(%ebp),%edi
0876efca +0x0c3a:  mov    %eax,-0x7c(%ebp)
0876efcd +0x0c3d:  mov    -0x4c(%ebp),%eax
0876efd0 +0x0c40:  and    %esi,%edi
0876efd2 +0x0c42:  or     %esi,%eax
0876efd4 +0x0c44:  and    %ecx,%eax
0876efd6 +0x0c46:  or     %edi,%eax
0876efd8 +0x0c48:  lea    (%edx,%eax,1),%edi
0876efdb +0x0c4b:  mov    -0x6c(%ebp),%edx
0876efde +0x0c4e:  xor    -0x78(%ebp),%edx
0876efe1 +0x0c51:  mov    -0x94(%ebp),%eax
0876efe7 +0x0c57:  mov    %edx,-0x78(%ebp)
0876efea +0x0c5a:  mov    -0x5c(%ebp),%edx
0876efed +0x0c5d:  xor    %edx,-0x78(%ebp)
0876eff0 +0x0c60:  mov    -0x84(%ebp),%edx
0876eff6 +0x0c66:  ror    $0x1b,%eax
0876eff9 +0x0c69:  xor    %edx,-0x78(%ebp)
0876effc +0x0c6c:  add    %eax,%edi
0876effe +0x0c6e:  rorl   $0x1f,-0x78(%ebp)
0876f002 +0x0c72:  mov    -0x78(%ebp),%edx
0876f005 +0x0c75:  mov    -0x4c(%ebp),%eax
0876f008 +0x0c78:  lea    -0x70e44324(%ecx,%edx,1),%ecx
0876f00f +0x0c7f:  mov    -0x94(%ebp),%edx
0876f015 +0x0c85:  mov    %ecx,-0x4c(%ebp)
0876f018 +0x0c88:  mov    -0x94(%ebp),%ecx
0876f01e +0x0c8e:  ror    $0x2,%eax
0876f021 +0x0c91:  or     %eax,%ecx
0876f023 +0x0c93:  and    %eax,%edx
0876f025 +0x0c95:  and    %esi,%ecx
0876f027 +0x0c97:  or     %edx,%ecx
0876f029 +0x0c99:  mov    %edi,%edx
0876f02b +0x0c9b:  add    -0x4c(%ebp),%ecx
0876f02e +0x0c9e:  ror    $0x1b,%edx
0876f031 +0x0ca1:  add    %edx,%ecx
0876f033 +0x0ca3:  mov    %ecx,-0x4c(%ebp)
0876f036 +0x0ca6:  mov    -0x80(%ebp),%ecx
0876f039 +0x0ca9:  xor    -0x64(%ebp),%ecx
0876f03c +0x0cac:  mov    -0x94(%ebp),%edx
0876f042 +0x0cb2:  mov    %ecx,-0x64(%ebp)
0876f045 +0x0cb5:  mov    -0x54(%ebp),%ecx
0876f048 +0x0cb8:  xor    %ecx,-0x64(%ebp)
0876f04b +0x0cbb:  mov    -0x68(%ebp),%ecx
0876f04e +0x0cbe:  ror    $0x2,%edx
0876f051 +0x0cc1:  xor    %ecx,-0x64(%ebp)
0876f054 +0x0cc4:  rorl   $0x1f,-0x64(%ebp)
0876f058 +0x0cc8:  mov    -0x64(%ebp),%ecx
0876f05b +0x0ccb:  lea    -0x70e44324(%esi,%ecx,1),%esi
0876f062 +0x0cd2:  mov    %edi,%ecx
0876f064 +0x0cd4:  mov    %esi,-0x94(%ebp)
0876f06a +0x0cda:  or     %edx,%ecx
0876f06c +0x0cdc:  mov    %edi,%esi
0876f06e +0x0cde:  and    %edx,%esi
0876f070 +0x0ce0:  and    %eax,%ecx
0876f072 +0x0ce2:  or     %esi,%ecx
0876f074 +0x0ce4:  mov    -0x94(%ebp),%esi
0876f07a +0x0cea:  ror    $0x2,%edi
0876f07d +0x0ced:  add    %ecx,%esi
0876f07f +0x0cef:  mov    -0x4c(%ebp),%ecx
0876f082 +0x0cf2:  ror    $0x1b,%ecx
0876f085 +0x0cf5:  add    %ecx,%esi
0876f087 +0x0cf7:  mov    -0x58(%ebp),%ecx
0876f08a +0x0cfa:  xor    -0x6c(%ebp),%ecx
0876f08d +0x0cfd:  mov    %ecx,-0x6c(%ebp)
0876f090 +0x0d00:  mov    -0x90(%ebp),%ecx
0876f096 +0x0d06:  xor    %ecx,-0x6c(%ebp)
0876f099 +0x0d09:  mov    -0x7c(%ebp),%ecx
0876f09c +0x0d0c:  xor    %ecx,-0x6c(%ebp)
0876f09f +0x0d0f:  rorl   $0x1f,-0x6c(%ebp)
0876f0a3 +0x0d13:  mov    -0x6c(%ebp),%ecx
0876f0a6 +0x0d16:  lea    -0x70e44324(%eax,%ecx,1),%eax
0876f0ad +0x0d1d:  mov    -0x4c(%ebp),%ecx
0876f0b0 +0x0d20:  mov    %eax,-0x94(%ebp)
0876f0b6 +0x0d26:  mov    -0x4c(%ebp),%eax
0876f0b9 +0x0d29:  and    %edi,%ecx
0876f0bb +0x0d2b:  or     %edi,%eax
0876f0bd +0x0d2d:  and    %edx,%eax
0876f0bf +0x0d2f:  or     %ecx,%eax
0876f0c1 +0x0d31:  mov    %esi,%ecx
0876f0c3 +0x0d33:  add    -0x94(%ebp),%eax
0876f0c9 +0x0d39:  ror    $0x1b,%ecx
0876f0cc +0x0d3c:  lea    (%eax,%ecx,1),%ecx
0876f0cf +0x0d3f:  mov    -0x50(%ebp),%eax
0876f0d2 +0x0d42:  xor    -0x80(%ebp),%eax
0876f0d5 +0x0d45:  mov    %ecx,-0x94(%ebp)
0876f0db +0x0d4b:  mov    -0x4c(%ebp),%ecx
0876f0de +0x0d4e:  mov    %eax,-0x80(%ebp)
0876f0e1 +0x0d51:  mov    -0x8c(%ebp),%eax
0876f0e7 +0x0d57:  xor    %eax,-0x80(%ebp)
0876f0ea +0x0d5a:  mov    -0x78(%ebp),%eax
0876f0ed +0x0d5d:  ror    $0x2,%ecx
0876f0f0 +0x0d60:  xor    %eax,-0x80(%ebp)
0876f0f3 +0x0d63:  rorl   $0x1f,-0x80(%ebp)
0876f0f7 +0x0d67:  mov    -0x80(%ebp),%eax
0876f0fa +0x0d6a:  lea    -0x70e44324(%edx,%eax,1),%edx
0876f101 +0x0d71:  mov    %esi,%eax
0876f103 +0x0d73:  mov    %edx,-0x4c(%ebp)
0876f106 +0x0d76:  mov    %esi,%edx
0876f108 +0x0d78:  and    %ecx,%eax
0876f10a +0x0d7a:  or     %ecx,%edx
0876f10c +0x0d7c:  and    %edi,%edx
0876f10e +0x0d7e:  or     %eax,%edx
0876f110 +0x0d80:  mov    -0x94(%ebp),%eax
0876f116 +0x0d86:  add    -0x4c(%ebp),%edx
0876f119 +0x0d89:  ror    $0x2,%esi
0876f11c +0x0d8c:  ror    $0x1b,%eax
0876f11f +0x0d8f:  add    %eax,%edx
0876f121 +0x0d91:  mov    -0x88(%ebp),%eax
0876f127 +0x0d97:  mov    %edx,-0x4c(%ebp)
0876f12a +0x0d9a:  mov    -0x74(%ebp),%edx
0876f12d +0x0d9d:  xor    -0x58(%ebp),%edx
0876f130 +0x0da0:  xor    %eax,%edx
0876f132 +0x0da2:  mov    -0x64(%ebp),%eax
0876f135 +0x0da5:  xor    %eax,%edx
0876f137 +0x0da7:  mov    -0x94(%ebp),%eax
0876f13d +0x0dad:  ror    $0x1f,%edx
0876f140 +0x0db0:  mov    %edx,-0x58(%ebp)
0876f143 +0x0db3:  lea    -0x70e44324(%edi,%edx,1),%edi
0876f14a +0x0dba:  mov    -0x94(%ebp),%edx
0876f150 +0x0dc0:  and    %esi,%eax
0876f152 +0x0dc2:  or     %esi,%edx
0876f154 +0x0dc4:  and    %ecx,%edx
0876f156 +0x0dc6:  or     %eax,%edx
0876f158 +0x0dc8:  mov    -0x94(%ebp),%eax
0876f15e +0x0dce:  add    %edx,%edi
0876f160 +0x0dd0:  mov    -0x4c(%ebp),%edx
0876f163 +0x0dd3:  ror    $0x2,%eax
0876f166 +0x0dd6:  ror    $0x1b,%edx
0876f169 +0x0dd9:  add    %edx,%edi
0876f16b +0x0ddb:  mov    -0x60(%ebp),%edx
0876f16e +0x0dde:  xor    -0x50(%ebp),%edx
0876f171 +0x0de1:  mov    %edx,-0x50(%ebp)
0876f174 +0x0de4:  mov    -0x84(%ebp),%edx
0876f17a +0x0dea:  xor    %edx,-0x50(%ebp)
0876f17d +0x0ded:  mov    -0x6c(%ebp),%edx
0876f180 +0x0df0:  xor    %edx,-0x50(%ebp)
0876f183 +0x0df3:  rorl   $0x1f,-0x50(%ebp)
0876f187 +0x0df7:  mov    -0x50(%ebp),%edx
0876f18a +0x0dfa:  lea    -0x70e44324(%ecx,%edx,1),%ecx
0876f191 +0x0e01:  mov    %ecx,-0x94(%ebp)
0876f197 +0x0e07:  mov    -0x4c(%ebp),%edx
0876f19a +0x0e0a:  mov    -0x4c(%ebp),%ecx
0876f19d +0x0e0d:  or     %eax,%edx
0876f19f +0x0e0f:  and    %eax,%ecx
0876f1a1 +0x0e11:  and    %esi,%edx
0876f1a3 +0x0e13:  or     %ecx,%edx
0876f1a5 +0x0e15:  mov    -0x94(%ebp),%ecx
0876f1ab +0x0e1b:  add    %edx,%ecx
0876f1ad +0x0e1d:  mov    %edi,%edx
0876f1af +0x0e1f:  ror    $0x1b,%edx
0876f1b2 +0x0e22:  lea    (%ecx,%edx,1),%edx
0876f1b5 +0x0e25:  mov    -0x5c(%ebp),%ecx
0876f1b8 +0x0e28:  mov    %edx,-0x98(%ebp)
0876f1be +0x0e2e:  mov    -0x4c(%ebp),%edx
0876f1c1 +0x0e31:  ror    $0x2,%edx
0876f1c4 +0x0e34:  xor    -0x74(%ebp),%ecx
0876f1c7 +0x0e37:  mov    %ecx,-0x74(%ebp)
0876f1ca +0x0e3a:  mov    -0x68(%ebp),%ecx
0876f1cd +0x0e3d:  xor    %ecx,-0x74(%ebp)
0876f1d0 +0x0e40:  mov    -0x80(%ebp),%ecx
0876f1d3 +0x0e43:  xor    %ecx,-0x74(%ebp)
0876f1d6 +0x0e46:  rorl   $0x1f,-0x74(%ebp)
0876f1da +0x0e4a:  mov    -0x74(%ebp),%ecx
0876f1dd +0x0e4d:  lea    -0x70e44324(%esi,%ecx,1),%esi
0876f1e4 +0x0e54:  mov    %edi,%ecx
0876f1e6 +0x0e56:  mov    %esi,-0x4c(%ebp)
0876f1e9 +0x0e59:  mov    %edi,%esi
0876f1eb +0x0e5b:  and    %edx,%ecx
0876f1ed +0x0e5d:  or     %edx,%esi
0876f1ef +0x0e5f:  and    %eax,%esi
0876f1f1 +0x0e61:  or     %ecx,%esi
0876f1f3 +0x0e63:  mov    -0x98(%ebp),%ecx
0876f1f9 +0x0e69:  add    -0x4c(%ebp),%esi
0876f1fc +0x0e6c:  ror    $0x2,%edi
0876f1ff +0x0e6f:  ror    $0x1b,%ecx
0876f202 +0x0e72:  add    %ecx,%esi
0876f204 +0x0e74:  mov    -0x7c(%ebp),%ecx
0876f207 +0x0e77:  mov    %esi,-0x4c(%ebp)
0876f20a +0x0e7a:  mov    -0x54(%ebp),%esi
0876f20d +0x0e7d:  xor    -0x60(%ebp),%esi
0876f210 +0x0e80:  xor    %ecx,%esi
0876f212 +0x0e82:  mov    -0x58(%ebp),%ecx
0876f215 +0x0e85:  xor    %ecx,%esi
0876f217 +0x0e87:  mov    -0x98(%ebp),%ecx
0876f21d +0x0e8d:  ror    $0x1f,%esi
0876f220 +0x0e90:  mov    %esi,-0x60(%ebp)
0876f223 +0x0e93:  lea    -0x70e44324(%eax,%esi,1),%esi
0876f22a +0x0e9a:  mov    -0x98(%ebp),%eax
0876f230 +0x0ea0:  and    %edi,%ecx
0876f232 +0x0ea2:  or     %edi,%eax
0876f234 +0x0ea4:  and    %edx,%eax
0876f236 +0x0ea6:  or     %ecx,%eax
0876f238 +0x0ea8:  mov    -0x98(%ebp),%ecx
0876f23e +0x0eae:  lea    (%esi,%eax,1),%eax
0876f241 +0x0eb1:  mov    -0x4c(%ebp),%esi
0876f244 +0x0eb4:  ror    $0x2,%ecx
0876f247 +0x0eb7:  ror    $0x1b,%esi
0876f24a +0x0eba:  lea    (%eax,%esi,1),%esi
0876f24d +0x0ebd:  mov    -0x78(%ebp),%eax
0876f250 +0x0ec0:  mov    %esi,-0x94(%ebp)
0876f256 +0x0ec6:  mov    -0x90(%ebp),%esi
0876f25c +0x0ecc:  xor    -0x5c(%ebp),%esi
0876f25f +0x0ecf:  xor    %eax,%esi
0876f261 +0x0ed1:  mov    -0x50(%ebp),%eax
0876f264 +0x0ed4:  xor    %eax,%esi
0876f266 +0x0ed6:  ror    $0x1f,%esi
0876f269 +0x0ed9:  mov    %esi,-0x5c(%ebp)
0876f26c +0x0edc:  lea    -0x70e44324(%edx,%esi,1),%eax
0876f273 +0x0ee3:  mov    -0x4c(%ebp),%edx
0876f276 +0x0ee6:  mov    -0x4c(%ebp),%esi
0876f279 +0x0ee9:  or     %ecx,%edx
0876f27b +0x0eeb:  and    %ecx,%esi
0876f27d +0x0eed:  and    %edi,%edx
0876f27f +0x0eef:  or     %esi,%edx
0876f281 +0x0ef1:  mov    -0x94(%ebp),%esi
0876f287 +0x0ef7:  lea    (%eax,%edx,1),%edx
0876f28a +0x0efa:  mov    -0x8c(%ebp),%eax
0876f290 +0x0f00:  ror    $0x1b,%esi
0876f293 +0x0f03:  add    %esi,%edx
0876f295 +0x0f05:  mov    -0x4c(%ebp),%esi
0876f298 +0x0f08:  ror    $0x2,%esi
0876f29b +0x0f0b:  xor    -0x54(%ebp),%eax
0876f29e +0x0f0e:  mov    %eax,-0x54(%ebp)
0876f2a1 +0x0f11:  mov    -0x64(%ebp),%eax
0876f2a4 +0x0f14:  xor    %eax,-0x54(%ebp)
0876f2a7 +0x0f17:  mov    -0x74(%ebp),%eax
0876f2aa +0x0f1a:  xor    %eax,-0x54(%ebp)
0876f2ad +0x0f1d:  rorl   $0x1f,-0x54(%ebp)
0876f2b1 +0x0f21:  mov    -0x54(%ebp),%eax
0876f2b4 +0x0f24:  lea    -0x70e44324(%edi,%eax,1),%edi
0876f2bb +0x0f2b:  mov    -0x94(%ebp),%eax
0876f2c1 +0x0f31:  mov    %edi,-0x4c(%ebp)
0876f2c4 +0x0f34:  mov    -0x94(%ebp),%edi
0876f2ca +0x0f3a:  and    %esi,%eax
0876f2cc +0x0f3c:  or     %esi,%edi
0876f2ce +0x0f3e:  and    %ecx,%edi
0876f2d0 +0x0f40:  or     %eax,%edi
0876f2d2 +0x0f42:  mov    %edx,%eax
0876f2d4 +0x0f44:  add    -0x4c(%ebp),%edi
0876f2d7 +0x0f47:  ror    $0x1b,%eax
0876f2da +0x0f4a:  add    %eax,%edi
0876f2dc +0x0f4c:  mov    -0x94(%ebp),%eax
0876f2e2 +0x0f52:  mov    %edi,-0x70(%ebp)
0876f2e5 +0x0f55:  mov    -0x88(%ebp),%edi
0876f2eb +0x0f5b:  xor    -0x90(%ebp),%edi
0876f2f1 +0x0f61:  ror    $0x2,%eax
0876f2f4 +0x0f64:  mov    %edi,-0x90(%ebp)
0876f2fa +0x0f6a:  mov    -0x6c(%ebp),%edi
0876f2fd +0x0f6d:  xor    %edi,-0x90(%ebp)
0876f303 +0x0f73:  mov    -0x60(%ebp),%edi
0876f306 +0x0f76:  xor    %edi,-0x90(%ebp)
0876f30c +0x0f7c:  rorl   $0x1f,-0x90(%ebp)
0876f313 +0x0f83:  mov    -0x90(%ebp),%edi
0876f319 +0x0f89:  lea    -0x70e44324(%ecx,%edi,1),%ecx
0876f320 +0x0f90:  mov    %edx,%edi
0876f322 +0x0f92:  mov    %ecx,-0x94(%ebp)
0876f328 +0x0f98:  mov    %edx,%ecx
0876f32a +0x0f9a:  and    %eax,%edi
0876f32c +0x0f9c:  or     %eax,%ecx
0876f32e +0x0f9e:  and    %esi,%ecx
0876f330 +0x0fa0:  or     %edi,%ecx
0876f332 +0x0fa2:  mov    -0x70(%ebp),%edi
0876f335 +0x0fa5:  add    -0x94(%ebp),%ecx
0876f33b +0x0fab:  ror    $0x2,%edx
0876f33e +0x0fae:  ror    $0x1b,%edi
0876f341 +0x0fb1:  add    %edi,%ecx
0876f343 +0x0fb3:  mov    -0x84(%ebp),%edi
0876f349 +0x0fb9:  xor    -0x8c(%ebp),%edi
0876f34f +0x0fbf:  mov    %edi,-0x8c(%ebp)
0876f355 +0x0fc5:  mov    -0x80(%ebp),%edi
0876f358 +0x0fc8:  xor    %edi,-0x8c(%ebp)
0876f35e +0x0fce:  mov    -0x5c(%ebp),%edi
0876f361 +0x0fd1:  xor    %edi,-0x8c(%ebp)
0876f367 +0x0fd7:  rorl   $0x1f,-0x8c(%ebp)
0876f36e +0x0fde:  mov    -0x8c(%ebp),%edi
0876f374 +0x0fe4:  lea    -0x359d3e2a(%esi,%edi,1),%esi
0876f37b +0x0feb:  mov    %ecx,%edi
0876f37d +0x0fed:  mov    %esi,-0x4c(%ebp)
0876f380 +0x0ff0:  mov    %edx,%esi
0876f382 +0x0ff2:  xor    %eax,%esi
0876f384 +0x0ff4:  xor    -0x70(%ebp),%esi
0876f387 +0x0ff7:  add    -0x4c(%ebp),%esi
0876f38a +0x0ffa:  ror    $0x1b,%edi
0876f38d +0x0ffd:  lea    (%esi,%edi,1),%edi
0876f390 +0x1000:  mov    -0x68(%ebp),%esi
0876f393 +0x1003:  mov    %edi,-0x4c(%ebp)
0876f396 +0x1006:  mov    -0x70(%ebp),%edi
0876f399 +0x1009:  ror    $0x2,%edi
0876f39c +0x100c:  xor    -0x88(%ebp),%esi
0876f3a2 +0x1012:  mov    %esi,-0x88(%ebp)
0876f3a8 +0x1018:  mov    -0x58(%ebp),%esi
0876f3ab +0x101b:  xor    %esi,-0x88(%ebp)
0876f3b1 +0x1021:  mov    -0x54(%ebp),%esi
0876f3b4 +0x1024:  xor    %esi,-0x88(%ebp)
0876f3ba +0x102a:  rorl   $0x1f,-0x88(%ebp)
0876f3c1 +0x1031:  mov    -0x88(%ebp),%esi
0876f3c7 +0x1037:  lea    -0x359d3e2a(%eax,%esi,1),%eax
0876f3ce +0x103e:  mov    -0x4c(%ebp),%esi
0876f3d1 +0x1041:  mov    %eax,-0x70(%ebp)
0876f3d4 +0x1044:  mov    %edi,%eax
0876f3d6 +0x1046:  xor    %edx,%eax
0876f3d8 +0x1048:  xor    %ecx,%eax
0876f3da +0x104a:  add    -0x70(%ebp),%eax
0876f3dd +0x104d:  ror    $0x1b,%esi
0876f3e0 +0x1050:  ror    $0x2,%ecx
0876f3e3 +0x1053:  lea    (%eax,%esi,1),%esi
0876f3e6 +0x1056:  mov    -0x7c(%ebp),%eax
0876f3e9 +0x1059:  xor    -0x84(%ebp),%eax
0876f3ef +0x105f:  mov    %eax,-0x84(%ebp)
0876f3f5 +0x1065:  mov    -0x50(%ebp),%eax
0876f3f8 +0x1068:  xor    %eax,-0x84(%ebp)
0876f3fe +0x106e:  mov    -0x90(%ebp),%eax
0876f404 +0x1074:  xor    %eax,-0x84(%ebp)
0876f40a +0x107a:  rorl   $0x1f,-0x84(%ebp)
0876f411 +0x1081:  mov    -0x84(%ebp),%eax
0876f417 +0x1087:  lea    -0x359d3e2a(%edx,%eax,1),%edx
0876f41e +0x108e:  mov    %ecx,%eax
0876f420 +0x1090:  xor    %edi,%eax
0876f422 +0x1092:  xor    -0x4c(%ebp),%eax
0876f425 +0x1095:  add    %eax,%edx
0876f427 +0x1097:  mov    %esi,%eax
0876f429 +0x1099:  ror    $0x1b,%eax
0876f42c +0x109c:  lea    (%edx,%eax,1),%eax
0876f42f +0x109f:  mov    -0x78(%ebp),%edx
0876f432 +0x10a2:  xor    -0x68(%ebp),%edx
0876f435 +0x10a5:  mov    %eax,-0x70(%ebp)
0876f438 +0x10a8:  mov    -0x4c(%ebp),%eax
0876f43b +0x10ab:  mov    %edx,-0x68(%ebp)
0876f43e +0x10ae:  mov    -0x74(%ebp),%edx
0876f441 +0x10b1:  xor    %edx,-0x68(%ebp)
0876f444 +0x10b4:  mov    -0x8c(%ebp),%edx
0876f44a +0x10ba:  ror    $0x2,%eax
0876f44d +0x10bd:  xor    %edx,-0x68(%ebp)
0876f450 +0x10c0:  rorl   $0x1f,-0x68(%ebp)
0876f454 +0x10c4:  mov    -0x68(%ebp),%edx
0876f457 +0x10c7:  lea    -0x359d3e2a(%edi,%edx,1),%edi
0876f45e +0x10ce:  mov    -0x70(%ebp),%edx
0876f461 +0x10d1:  mov    %edi,-0x4c(%ebp)
0876f464 +0x10d4:  mov    %eax,%edi
0876f466 +0x10d6:  xor    %ecx,%edi
0876f468 +0x10d8:  xor    %esi,%edi
0876f46a +0x10da:  add    -0x4c(%ebp),%edi
0876f46d +0x10dd:  ror    $0x1b,%edx
0876f470 +0x10e0:  ror    $0x2,%esi
0876f473 +0x10e3:  add    %edx,%edi
0876f475 +0x10e5:  mov    -0x60(%ebp),%edx
0876f478 +0x10e8:  mov    %edi,-0x4c(%ebp)
0876f47b +0x10eb:  mov    -0x64(%ebp),%edi
0876f47e +0x10ee:  xor    -0x7c(%ebp),%edi
0876f481 +0x10f1:  xor    %edx,%edi
0876f483 +0x10f3:  mov    -0x88(%ebp),%edx
0876f489 +0x10f9:  xor    %edx,%edi
0876f48b +0x10fb:  mov    -0x70(%ebp),%edx
0876f48e +0x10fe:  ror    $0x1f,%edi
0876f491 +0x1101:  mov    %edi,-0x7c(%ebp)
0876f494 +0x1104:  lea    -0x359d3e2a(%ecx,%edi,1),%edi
0876f49b +0x110b:  mov    %esi,%ecx
0876f49d +0x110d:  xor    %eax,%ecx
0876f49f +0x110f:  xor    -0x70(%ebp),%ecx
0876f4a2 +0x1112:  ror    $0x2,%edx
0876f4a5 +0x1115:  lea    (%edi,%ecx,1),%ecx
0876f4a8 +0x1118:  mov    -0x4c(%ebp),%edi
0876f4ab +0x111b:  ror    $0x1b,%edi
0876f4ae +0x111e:  add    %edi,%ecx
0876f4b0 +0x1120:  mov    -0x6c(%ebp),%edi
0876f4b3 +0x1123:  xor    -0x78(%ebp),%edi
0876f4b6 +0x1126:  mov    %edi,-0x78(%ebp)
0876f4b9 +0x1129:  mov    -0x5c(%ebp),%edi
0876f4bc +0x112c:  xor    %edi,-0x78(%ebp)
0876f4bf +0x112f:  mov    -0x84(%ebp),%edi
0876f4c5 +0x1135:  xor    %edi,-0x78(%ebp)
0876f4c8 +0x1138:  rorl   $0x1f,-0x78(%ebp)
0876f4cc +0x113c:  mov    -0x78(%ebp),%edi
0876f4cf +0x113f:  lea    -0x359d3e2a(%eax,%edi,1),%eax
0876f4d6 +0x1146:  mov    %ecx,%edi
0876f4d8 +0x1148:  mov    %eax,-0x70(%ebp)
0876f4db +0x114b:  mov    %edx,%eax
0876f4dd +0x114d:  xor    %esi,%eax
0876f4df +0x114f:  xor    -0x4c(%ebp),%eax
0876f4e2 +0x1152:  add    -0x70(%ebp),%eax
0876f4e5 +0x1155:  ror    $0x1b,%edi
0876f4e8 +0x1158:  add    %edi,%eax
0876f4ea +0x115a:  mov    -0x4c(%ebp),%edi
0876f4ed +0x115d:  ror    $0x2,%edi
0876f4f0 +0x1160:  mov    %edi,-0x4c(%ebp)
0876f4f3 +0x1163:  mov    -0x80(%ebp),%edi
0876f4f6 +0x1166:  xor    -0x64(%ebp),%edi
0876f4f9 +0x1169:  xor    -0x54(%ebp),%edi
0876f4fc +0x116c:  xor    -0x68(%ebp),%edi
0876f4ff +0x116f:  ror    $0x1f,%edi
0876f502 +0x1172:  lea    -0x359d3e2a(%esi,%edi,1),%esi
0876f509 +0x1179:  mov    %esi,-0x64(%ebp)
0876f50c +0x117c:  mov    -0x4c(%ebp),%esi
0876f50f +0x117f:  xor    %edx,%esi
0876f511 +0x1181:  xor    %ecx,%esi
0876f513 +0x1183:  add    -0x64(%ebp),%esi
0876f516 +0x1186:  ror    $0x2,%ecx
0876f519 +0x1189:  mov    %esi,-0x70(%ebp)
0876f51c +0x118c:  mov    %eax,%esi
0876f51e +0x118e:  ror    $0x1b,%esi
0876f521 +0x1191:  mov    %esi,-0x64(%ebp)
0876f524 +0x1194:  mov    -0x70(%ebp),%esi
0876f527 +0x1197:  add    -0x64(%ebp),%esi
0876f52a +0x119a:  mov    %ecx,-0x64(%ebp)
0876f52d +0x119d:  mov    %esi,-0x98(%ebp)
0876f533 +0x11a3:  mov    -0x58(%ebp),%esi
0876f536 +0x11a6:  xor    -0x6c(%ebp),%esi
0876f539 +0x11a9:  xor    -0x90(%ebp),%esi
0876f53f +0x11af:  xor    -0x7c(%ebp),%esi
0876f542 +0x11b2:  ror    $0x1f,%esi
0876f545 +0x11b5:  lea    -0x359d3e2a(%edx,%esi,1),%ecx
0876f54c +0x11bc:  mov    -0x64(%ebp),%edx
0876f54f +0x11bf:  xor    -0x4c(%ebp),%edx
0876f552 +0x11c2:  xor    %eax,%edx
0876f554 +0x11c4:  lea    (%ecx,%edx,1),%edx
0876f557 +0x11c7:  mov    -0x98(%ebp),%ecx
0876f55d +0x11cd:  ror    $0x2,%eax
0876f560 +0x11d0:  ror    $0x1b,%ecx
0876f563 +0x11d3:  lea    (%edx,%ecx,1),%ecx
0876f566 +0x11d6:  mov    %ecx,-0x94(%ebp)
0876f56c +0x11dc:  mov    -0x50(%ebp),%ecx
0876f56f +0x11df:  mov    %eax,-0x6c(%ebp)
0876f572 +0x11e2:  mov    -0x4c(%ebp),%eax
0876f575 +0x11e5:  xor    -0x80(%ebp),%ecx
0876f578 +0x11e8:  xor    -0x8c(%ebp),%ecx
0876f57e +0x11ee:  xor    -0x78(%ebp),%ecx
0876f581 +0x11f1:  ror    $0x1f,%ecx
0876f584 +0x11f4:  lea    -0x359d3e2a(%eax,%ecx,1),%edx
0876f58b +0x11fb:  mov    -0x6c(%ebp),%eax
0876f58e +0x11fe:  xor    -0x64(%ebp),%eax
0876f591 +0x1201:  xor    -0x98(%ebp),%eax
0876f597 +0x1207:  lea    (%edx,%eax,1),%eax
0876f59a +0x120a:  mov    -0x94(%ebp),%edx
0876f5a0 +0x1210:  ror    $0x1b,%edx
0876f5a3 +0x1213:  lea    (%eax,%edx,1),%edx
0876f5a6 +0x1216:  mov    -0x74(%ebp),%eax
0876f5a9 +0x1219:  mov    %edx,-0x70(%ebp)
0876f5ac +0x121c:  mov    -0x98(%ebp),%edx
0876f5b2 +0x1222:  xor    -0x58(%ebp),%eax
0876f5b5 +0x1225:  ror    $0x2,%edx
0876f5b8 +0x1228:  mov    %edx,-0x98(%ebp)
0876f5be +0x122e:  mov    -0x88(%ebp),%edx
0876f5c4 +0x1234:  xor    %edx,%eax
0876f5c6 +0x1236:  mov    -0x64(%ebp),%edx
0876f5c9 +0x1239:  xor    %edi,%eax
0876f5cb +0x123b:  ror    $0x1f,%eax
0876f5ce +0x123e:  mov    %eax,-0xe4(%ebp)
0876f5d4 +0x1244:  lea    -0x359d3e2a(%edx,%eax,1),%edx
0876f5db +0x124b:  mov    -0x98(%ebp),%eax
0876f5e1 +0x1251:  xor    -0x6c(%ebp),%eax
0876f5e4 +0x1254:  xor    -0x94(%ebp),%eax
0876f5ea +0x125a:  lea    (%eax,%edx,1),%edx
0876f5ed +0x125d:  mov    -0x70(%ebp),%eax
0876f5f0 +0x1260:  ror    $0x1b,%eax
0876f5f3 +0x1263:  add    %eax,%edx
0876f5f5 +0x1265:  mov    -0x60(%ebp),%eax
0876f5f8 +0x1268:  mov    %edx,-0x4c(%ebp)
0876f5fb +0x126b:  mov    -0x94(%ebp),%edx
0876f601 +0x1271:  xor    -0x50(%ebp),%eax
0876f604 +0x1274:  ror    $0x2,%edx
0876f607 +0x1277:  mov    %edx,-0x94(%ebp)
0876f60d +0x127d:  mov    -0x84(%ebp),%edx
0876f613 +0x1283:  xor    %edx,%eax
0876f615 +0x1285:  mov    -0x6c(%ebp),%edx
0876f618 +0x1288:  xor    %esi,%eax
0876f61a +0x128a:  ror    $0x1f,%eax
0876f61d +0x128d:  mov    %eax,-0xe0(%ebp)
0876f623 +0x1293:  lea    -0x359d3e2a(%edx,%eax,1),%edx
0876f62a +0x129a:  mov    %edx,-0x58(%ebp)
0876f62d +0x129d:  mov    -0x94(%ebp),%edx
0876f633 +0x12a3:  xor    -0x98(%ebp),%edx
0876f639 +0x12a9:  xor    -0x70(%ebp),%edx
0876f63c +0x12ac:  add    -0x58(%ebp),%edx
0876f63f +0x12af:  mov    %edx,-0x50(%ebp)
0876f642 +0x12b2:  mov    -0x4c(%ebp),%edx
0876f645 +0x12b5:  mov    -0x70(%ebp),%eax
0876f648 +0x12b8:  ror    $0x1b,%edx
0876f64b +0x12bb:  add    -0x50(%ebp),%edx
0876f64e +0x12be:  ror    $0x2,%eax
0876f651 +0x12c1:  mov    %eax,-0x70(%ebp)
0876f654 +0x12c4:  mov    -0x68(%ebp),%eax
0876f657 +0x12c7:  mov    %edx,-0x64(%ebp)
0876f65a +0x12ca:  mov    -0x5c(%ebp),%edx
0876f65d +0x12cd:  xor    -0x74(%ebp),%edx
0876f660 +0x12d0:  xor    %eax,%edx
0876f662 +0x12d2:  mov    -0x98(%ebp),%eax
0876f668 +0x12d8:  xor    %ecx,%edx
0876f66a +0x12da:  ror    $0x1f,%edx
0876f66d +0x12dd:  mov    %edx,-0x74(%ebp)
0876f670 +0x12e0:  lea    -0x359d3e2a(%eax,%edx,1),%eax
0876f677 +0x12e7:  mov    -0x70(%ebp),%edx
0876f67a +0x12ea:  xor    -0x94(%ebp),%edx
0876f680 +0x12f0:  xor    -0x4c(%ebp),%edx
0876f683 +0x12f3:  add    %eax,%edx
0876f685 +0x12f5:  mov    -0x54(%ebp),%eax
0876f688 +0x12f8:  mov    %edx,-0x50(%ebp)
0876f68b +0x12fb:  mov    -0x64(%ebp),%edx
0876f68e +0x12fe:  ror    $0x1b,%edx
0876f691 +0x1301:  add    -0x50(%ebp),%edx
0876f694 +0x1304:  xor    -0x60(%ebp),%eax
0876f697 +0x1307:  mov    %edx,-0x6c(%ebp)
0876f69a +0x130a:  mov    -0x4c(%ebp),%edx
0876f69d +0x130d:  ror    $0x2,%edx
0876f6a0 +0x1310:  mov    %edx,-0x4c(%ebp)
0876f6a3 +0x1313:  mov    -0x7c(%ebp),%edx
0876f6a6 +0x1316:  xor    %edx,%eax
0876f6a8 +0x1318:  mov    -0xe4(%ebp),%edx
0876f6ae +0x131e:  xor    %edx,%eax
0876f6b0 +0x1320:  mov    -0x94(%ebp),%edx
0876f6b6 +0x1326:  ror    $0x1f,%eax
0876f6b9 +0x1329:  mov    %eax,-0x60(%ebp)
0876f6bc +0x132c:  lea    -0x359d3e2a(%edx,%eax,1),%edx
0876f6c3 +0x1333:  mov    %edx,-0x58(%ebp)
0876f6c6 +0x1336:  mov    -0x4c(%ebp),%edx
0876f6c9 +0x1339:  xor    -0x70(%ebp),%edx
0876f6cc +0x133c:  xor    -0x64(%ebp),%edx
0876f6cf +0x133f:  add    -0x58(%ebp),%edx
0876f6d2 +0x1342:  mov    %edx,-0x50(%ebp)
0876f6d5 +0x1345:  mov    -0x6c(%ebp),%edx
0876f6d8 +0x1348:  ror    $0x1b,%edx
0876f6db +0x134b:  add    -0x50(%ebp),%edx
0876f6de +0x134e:  mov    %edx,-0x80(%ebp)
0876f6e1 +0x1351:  mov    -0x64(%ebp),%eax
0876f6e4 +0x1354:  mov    -0x90(%ebp),%edx
0876f6ea +0x135a:  xor    -0x5c(%ebp),%edx
0876f6ed +0x135d:  ror    $0x2,%eax
0876f6f0 +0x1360:  mov    %eax,-0x64(%ebp)
0876f6f3 +0x1363:  mov    -0x78(%ebp),%eax
0876f6f6 +0x1366:  xor    %eax,%edx
0876f6f8 +0x1368:  mov    -0xe0(%ebp),%eax
0876f6fe +0x136e:  xor    %eax,%edx
0876f700 +0x1370:  mov    -0x70(%ebp),%eax
0876f703 +0x1373:  ror    $0x1f,%edx
0876f706 +0x1376:  mov    %edx,-0x5c(%ebp)
0876f709 +0x1379:  lea    -0x359d3e2a(%eax,%edx,1),%eax
0876f710 +0x1380:  mov    -0x64(%ebp),%edx
0876f713 +0x1383:  xor    -0x4c(%ebp),%edx
0876f716 +0x1386:  xor    -0x6c(%ebp),%edx
0876f719 +0x1389:  add    %eax,%edx
0876f71b +0x138b:  mov    -0x8c(%ebp),%eax
0876f721 +0x1391:  mov    %edx,-0x50(%ebp)
0876f724 +0x1394:  mov    -0x80(%ebp),%edx
0876f727 +0x1397:  xor    -0x54(%ebp),%eax
0876f72a +0x139a:  ror    $0x1b,%edx
0876f72d +0x139d:  xor    %edi,%eax
0876f72f +0x139f:  mov    -0x4c(%ebp),%edi
0876f732 +0x13a2:  add    -0x50(%ebp),%edx
0876f735 +0x13a5:  mov    %edx,-0x58(%ebp)
0876f738 +0x13a8:  mov    -0x6c(%ebp),%edx
0876f73b +0x13ab:  ror    $0x2,%edx
0876f73e +0x13ae:  mov    %edx,-0x6c(%ebp)
0876f741 +0x13b1:  mov    -0x74(%ebp),%edx
0876f744 +0x13b4:  xor    %edx,%eax
0876f746 +0x13b6:  mov    -0x58(%ebp),%edx
0876f749 +0x13b9:  ror    $0x1f,%eax
0876f74c +0x13bc:  lea    -0x359d3e2a(%edi,%eax,1),%edi
0876f753 +0x13c3:  mov    %edi,-0x50(%ebp)
0876f756 +0x13c6:  mov    -0x6c(%ebp),%edi
0876f759 +0x13c9:  xor    -0x64(%ebp),%edi
0876f75c +0x13cc:  xor    -0x80(%ebp),%edi
0876f75f +0x13cf:  add    -0x50(%ebp),%edi
0876f762 +0x13d2:  ror    $0x1b,%edx
0876f765 +0x13d5:  mov    %eax,-0x54(%ebp)
0876f768 +0x13d8:  mov    -0x80(%ebp),%eax
0876f76b +0x13db:  lea    (%edi,%edx,1),%edx
0876f76e +0x13de:  mov    -0x88(%ebp),%edi
0876f774 +0x13e4:  xor    -0x90(%ebp),%edi
0876f77a +0x13ea:  mov    %edx,-0x50(%ebp)
0876f77d +0x13ed:  ror    $0x2,%eax
0876f780 +0x13f0:  xor    %esi,%edi
0876f782 +0x13f2:  mov    -0x64(%ebp),%esi
0876f785 +0x13f5:  xor    -0x60(%ebp),%edi
0876f788 +0x13f8:  mov    %eax,-0x80(%ebp)
0876f78b +0x13fb:  ror    $0x1f,%edi
0876f78e +0x13fe:  lea    -0x359d3e2a(%esi,%edi,1),%edx
0876f795 +0x1405:  mov    -0x6c(%ebp),%esi
0876f798 +0x1408:  xor    %eax,%esi
0876f79a +0x140a:  xor    -0x58(%ebp),%esi
0876f79d +0x140d:  add    %edx,%esi
0876f79f +0x140f:  mov    -0x50(%ebp),%edx
0876f7a2 +0x1412:  ror    $0x1b,%edx
0876f7a5 +0x1415:  lea    (%esi,%edx,1),%edx
0876f7a8 +0x1418:  mov    %edx,-0x60(%ebp)
0876f7ab +0x141b:  mov    -0x84(%ebp),%esi
0876f7b1 +0x1421:  xor    -0x8c(%ebp),%esi
0876f7b7 +0x1427:  mov    -0x58(%ebp),%eax
0876f7ba +0x142a:  xor    %ecx,%esi
0876f7bc +0x142c:  mov    -0x6c(%ebp),%ecx
0876f7bf +0x142f:  xor    -0x5c(%ebp),%esi
0876f7c2 +0x1432:  ror    $0x2,%eax
0876f7c5 +0x1435:  mov    %eax,-0x58(%ebp)
0876f7c8 +0x1438:  ror    $0x1f,%esi
0876f7cb +0x143b:  lea    -0x359d3e2a(%ecx,%esi,1),%edx
0876f7d2 +0x1442:  mov    -0x80(%ebp),%ecx
0876f7d5 +0x1445:  xor    %eax,%ecx
0876f7d7 +0x1447:  mov    -0x50(%ebp),%eax
0876f7da +0x144a:  xor    -0x50(%ebp),%ecx
0876f7dd +0x144d:  add    %edx,%ecx
0876f7df +0x144f:  mov    -0x60(%ebp),%edx
0876f7e2 +0x1452:  ror    $0x2,%eax
0876f7e5 +0x1455:  mov    %eax,-0x50(%ebp)
0876f7e8 +0x1458:  ror    $0x1b,%edx
0876f7eb +0x145b:  lea    (%ecx,%edx,1),%edx
0876f7ee +0x145e:  mov    -0x68(%ebp),%ecx
0876f7f1 +0x1461:  mov    %edx,-0x5c(%ebp)
0876f7f4 +0x1464:  mov    -0x80(%ebp),%edx
0876f7f7 +0x1467:  xor    -0x88(%ebp),%ecx
0876f7fd +0x146d:  xor    -0xe4(%ebp),%ecx
0876f803 +0x1473:  xor    -0x54(%ebp),%ecx
0876f806 +0x1476:  ror    $0x1f,%ecx
0876f809 +0x1479:  lea    -0x359d3e2a(%edx,%ecx,1),%ecx
0876f810 +0x1480:  mov    -0x58(%ebp),%edx
0876f813 +0x1483:  xor    %eax,%edx
0876f815 +0x1485:  mov    -0x50(%ebp),%eax
0876f818 +0x1488:  xor    -0x60(%ebp),%edx
0876f81b +0x148b:  lea    (%ecx,%edx,1),%edx
0876f81e +0x148e:  mov    -0x5c(%ebp),%ecx
0876f821 +0x1491:  ror    $0x1b,%ecx
0876f824 +0x1494:  lea    (%edx,%ecx,1),%ecx
0876f827 +0x1497:  mov    -0x7c(%ebp),%edx
0876f82a +0x149a:  mov    %ecx,-0x54(%ebp)
0876f82d +0x149d:  mov    -0x60(%ebp),%ecx
0876f830 +0x14a0:  xor    -0x84(%ebp),%edx
0876f836 +0x14a6:  xor    -0xe0(%ebp),%edx
0876f83c +0x14ac:  ror    $0x2,%ecx
0876f83f +0x14af:  xor    %edi,%edx
0876f841 +0x14b1:  mov    -0x58(%ebp),%edi
0876f844 +0x14b4:  xor    %ecx,%eax
0876f846 +0x14b6:  mov    %ecx,-0x60(%ebp)
0876f849 +0x14b9:  mov    -0x54(%ebp),%ecx
0876f84c +0x14bc:  ror    $0x1f,%edx
0876f84f +0x14bf:  xor    -0x5c(%ebp),%eax
0876f852 +0x14c2:  lea    -0x359d3e2a(%edi,%edx,1),%edx
0876f859 +0x14c9:  mov    -0x9c(%ebp),%edi
0876f85f +0x14cf:  add    %eax,%edx
0876f861 +0x14d1:  mov    -0x78(%ebp),%eax
0876f864 +0x14d4:  ror    $0x1b,%ecx
0876f867 +0x14d7:  add    %ecx,%edx
0876f869 +0x14d9:  mov    -0x5c(%ebp),%ecx
0876f86c +0x14dc:  xor    -0x68(%ebp),%eax
0876f86f +0x14df:  xor    -0x74(%ebp),%eax
0876f872 +0x14e2:  ror    $0x2,%ecx
0876f875 +0x14e5:  xor    %esi,%eax
0876f877 +0x14e7:  ror    $0x1f,%eax
0876f87a +0x14ea:  lea    -0x359d3e2a(%eax,%edi,1),%esi
0876f881 +0x14f1:  mov    -0x60(%ebp),%eax
0876f884 +0x14f4:  add    -0x50(%ebp),%esi
0876f887 +0x14f7:  xor    %ecx,%eax
0876f889 +0x14f9:  xor    -0x54(%ebp),%eax
0876f88c +0x14fc:  lea    (%esi,%eax,1),%eax
0876f88f +0x14ff:  mov    %edx,%esi
0876f891 +0x1501:  ror    $0x1b,%esi
0876f894 +0x1504:  add    %esi,%eax
0876f896 +0x1506:  mov    0x8(%ebp),%esi
0876f899 +0x1509:  mov    %eax,0x10(%esi)
0876f89c +0x150c:  mov    -0x60(%ebp),%edi
0876f89f +0x150f:  add    %edx,0x14(%esi)
0876f8a2 +0x1512:  mov    -0x54(%ebp),%edx
0876f8a5 +0x1515:  add    %ecx,0x1c(%esi)
0876f8a8 +0x1518:  add    %edi,0x20(%esi)
0876f8ab +0x151b:  ror    $0x2,%edx
0876f8ae +0x151e:  add    %edx,0x18(%esi)
0876f8b1 +0x1521:  add    $0xdc,%esp
0876f8b7 +0x1527:  pop    %esi
0876f8b8 +0x1528:  pop    %edi
0876f8b9 +0x1529:  pop    %ebp
0876f8ba +0x152a:  ret
0876f8bb +0x152b:  nop
0876f8bc +0x152c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::SHA::Transform @ 0x876e390

/* TaoCrypt::SHA::Transform() */

void __thiscall TaoCrypt::SHA::Transform(SHA *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  uVar1 = *(uint *)(this + 0x10);
  uVar7 = *(uint *)(this + 0x1c);
  uVar12 = *(uint *)(this + 0x14);
  uVar6 = *(uint *)(this + 0x18);
  uVar16 = *(uint *)(this + 0x30) + *(int *)(this + 0x20) + 0x5a827999 +
           (uVar1 >> 0x1b | uVar1 << 5) + ((uVar7 ^ uVar6) & uVar12 ^ uVar7);
  uVar23 = uVar12 >> 2 | uVar12 << 0x1e;
  uVar7 = uVar7 + 0x5a827999 + *(uint *)(this + 0x34) + ((uVar23 ^ uVar6) & uVar1 ^ uVar6) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar12 = *(uint *)(this + 0x38);
  uVar18 = uVar1 >> 2 | uVar1 << 0x1e;
  uVar2 = ((uVar18 ^ uVar23) & uVar16 ^ uVar23) + uVar6 + 0x5a827999 + uVar12 +
          (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar6 = *(uint *)(this + 0x3c);
  uVar3 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar8 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = uVar23 + 0x5a827999 + uVar6 + ((uVar3 ^ uVar18) & uVar7 ^ uVar18) +
           (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar23 = *(uint *)(this + 0x40);
  uVar7 = uVar18 + 0x5a827999 + uVar23 + ((uVar8 ^ uVar3) & uVar2 ^ uVar3) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar18 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = *(uint *)(this + 0x44);
  uVar24 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = ((uVar18 ^ uVar8) & uVar16 ^ uVar8) + uVar3 + 0x5a827999 + uVar2 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar3 = *(uint *)(this + 0x48);
  uVar9 = uVar8 + 0x5a827999 + uVar3 + ((uVar24 ^ uVar18) & uVar7 ^ uVar18) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar8 = *(uint *)(this + 0x4c);
  uVar7 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar13 = ((uVar7 ^ uVar24) & uVar16 ^ uVar24) + uVar18 + 0x5a827999 + uVar8 +
           (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar4 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar18 = *(uint *)(this + 0x50);
  uVar10 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar16 = uVar24 + 0x5a827999 + uVar18 + ((uVar4 ^ uVar7) & uVar9 ^ uVar7) +
           (uVar13 >> 0x1b | uVar13 * 0x20);
  uVar9 = *(uint *)(this + 0x54);
  uVar7 = uVar7 + 0x5a827999 + uVar9 + ((uVar10 ^ uVar4) & uVar13 ^ uVar4) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar14 = uVar13 >> 2 | uVar13 * 0x40000000;
  uVar13 = *(uint *)(this + 0x58);
  uVar25 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar24 = ((uVar14 ^ uVar10) & uVar16 ^ uVar10) + uVar4 + 0x5a827999 + uVar13 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar4 = *(uint *)(this + 0x5c);
  uVar19 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = uVar10 + 0x5a827999 + uVar4 + ((uVar25 ^ uVar14) & uVar7 ^ uVar14) +
           (uVar24 >> 0x1b | uVar24 * 0x20);
  uVar10 = *(uint *)(this + 0x60);
  uVar7 = uVar14 + 0x5a827999 + uVar10 + ((uVar19 ^ uVar25) & uVar24 ^ uVar25) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar5 = uVar24 >> 2 | uVar24 * 0x40000000;
  uVar24 = *(uint *)(this + 100);
  uVar11 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar26 = ((uVar5 ^ uVar19) & uVar16 ^ uVar19) + uVar25 + 0x5a827999 + uVar24 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar15 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar14 = *(uint *)(this + 0x68);
  uVar25 = uVar19 + 0x5a827999 + uVar14 + ((uVar11 ^ uVar5) & uVar7 ^ uVar5) +
           (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar19 = *(uint *)(this + 0x6c);
  uVar16 = ((uVar15 ^ uVar11) & uVar26 ^ uVar11) + uVar5 + 0x5a827999 + uVar19 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar27 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar7 = uVar12 ^ *(uint *)(this + 0x30) ^ uVar18 ^ uVar24;
  uVar5 = uVar7 >> 0x1f | uVar7 << 1;
  uVar20 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar25 = ((uVar27 ^ uVar15) & uVar25 ^ uVar15) + uVar11 + 0x5a827999 + uVar5 +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar7 = uVar6 ^ *(uint *)(this + 0x34) ^ uVar9 ^ uVar14;
  uVar26 = uVar7 >> 0x1f | uVar7 << 1;
  uVar11 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar15 + 0x5a827999 + uVar26 + ((uVar20 ^ uVar27) & uVar16 ^ uVar27) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar7 = uVar23 ^ uVar12 ^ uVar13 ^ uVar19;
  uVar15 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar27 + 0x5a827999 + uVar15 + ((uVar11 ^ uVar20) & uVar25 ^ uVar20) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar12 = uVar2 ^ uVar6 ^ uVar4 ^ uVar5;
  uVar6 = uVar12 >> 0x1f | uVar12 << 1;
  uVar12 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar25 = ((uVar12 ^ uVar11) & uVar16 ^ uVar11) + uVar20 + 0x5a827999 + uVar6 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar20 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar3 ^ uVar23 ^ uVar10 ^ uVar26;
  uVar23 = uVar16 >> 0x1f | uVar16 << 1;
  uVar28 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = (uVar20 ^ uVar12 ^ uVar7) + uVar11 + 0x6ed9eba1 + uVar23 +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar7 = uVar8 ^ uVar2 ^ uVar24 ^ uVar15;
  uVar2 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar12 + 0x6ed9eba1 + uVar2 + (uVar28 ^ uVar20 ^ uVar25) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar25 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar12 = uVar18 ^ uVar3 ^ uVar14 ^ uVar6;
  uVar3 = uVar12 >> 0x1f | uVar12 << 1;
  uVar27 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar12 = (uVar25 ^ uVar28 ^ uVar16) + uVar20 + 0x6ed9eba1 + uVar3 + (uVar7 >> 0x1b | uVar7 * 0x20)
  ;
  uVar16 = uVar9 ^ uVar8 ^ uVar19 ^ uVar23;
  uVar20 = uVar16 >> 0x1f | uVar16 << 1;
  uVar11 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = uVar28 + 0x6ed9eba1 + uVar20 + (uVar27 ^ uVar25 ^ uVar7) +
           (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar7 = uVar13 ^ uVar18 ^ uVar5 ^ uVar2;
  uVar8 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar25 + 0x6ed9eba1 + uVar8 + (uVar11 ^ uVar27 ^ uVar12) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar12 = uVar4 ^ uVar9 ^ uVar26 ^ uVar3;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar28 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar25 = (uVar18 ^ uVar11 ^ uVar16) + uVar27 + 0x6ed9eba1 + uVar12 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar16 = uVar10 ^ uVar13 ^ uVar15 ^ uVar20;
  uVar21 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = uVar11 + 0x6ed9eba1 + uVar21 + (uVar28 ^ uVar18 ^ uVar7) +
           (uVar25 >> 0x1b | uVar25 * 0x20);
  uVar9 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = uVar24 ^ uVar4 ^ uVar6 ^ uVar8;
  uVar22 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar18 + 0x6ed9eba1 + uVar22 + (uVar9 ^ uVar28 ^ uVar25) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar13 = uVar25 >> 2 | uVar25 * 0x40000000;
  uVar18 = uVar14 ^ uVar10 ^ uVar23 ^ uVar12;
  uVar27 = uVar18 >> 0x1f | uVar18 << 1;
  uVar4 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar11 = (uVar13 ^ uVar9 ^ uVar16) + uVar28 + 0x6ed9eba1 + uVar27 + (uVar7 >> 0x1b | uVar7 * 0x20)
  ;
  uVar16 = uVar19 ^ uVar24 ^ uVar2 ^ uVar21;
  uVar18 = uVar16 >> 0x1f | uVar16 << 1;
  uVar10 = (uVar4 ^ uVar13 ^ uVar7) + uVar9 + 0x6ed9eba1 + uVar18 + (uVar11 >> 0x1b | uVar11 * 0x20)
  ;
  uVar24 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = uVar5 ^ uVar14 ^ uVar3 ^ uVar22;
  uVar9 = uVar16 >> 0x1f | uVar16 << 1;
  uVar25 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar11 = (uVar24 ^ uVar4 ^ uVar11) + uVar13 + 0x6ed9eba1 + uVar9 +
           (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar16 = uVar26 ^ uVar19 ^ uVar20 ^ uVar27;
  uVar13 = uVar16 >> 0x1f | uVar16 << 1;
  uVar7 = (uVar25 ^ uVar24 ^ uVar10) + uVar4 + 0x6ed9eba1 + uVar13 +
          (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar14 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar16 = uVar15 ^ uVar5 ^ uVar8 ^ uVar18;
  uVar4 = uVar16 >> 0x1f | uVar16 << 1;
  uVar5 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar19 = (uVar14 ^ uVar25 ^ uVar11) + uVar24 + 0x6ed9eba1 + uVar4 + (uVar7 >> 0x1b | uVar7 * 0x20)
  ;
  uVar16 = uVar6 ^ uVar26 ^ uVar12 ^ uVar9;
  uVar28 = uVar16 >> 0x1f | uVar16 << 1;
  uVar24 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = (uVar5 ^ uVar14 ^ uVar7) + uVar25 + 0x6ed9eba1 + uVar28 + (uVar19 >> 0x1b | uVar19 * 0x20)
  ;
  uVar16 = uVar23 ^ uVar15 ^ uVar21 ^ uVar13;
  uVar10 = uVar16 >> 0x1f | uVar16 << 1;
  uVar14 = (uVar24 ^ uVar5 ^ uVar19) + uVar14 + 0x6ed9eba1 + uVar10 + (uVar7 >> 0x1b | uVar7 * 0x20)
  ;
  uVar19 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar16 = uVar2 ^ uVar6 ^ uVar22 ^ uVar4;
  uVar6 = uVar16 >> 0x1f | uVar16 << 1;
  uVar11 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar5 = (uVar19 ^ uVar24 ^ uVar7) + uVar5 + 0x6ed9eba1 + uVar6 + (uVar14 >> 0x1b | uVar14 * 0x20);
  uVar16 = uVar3 ^ uVar23 ^ uVar27 ^ uVar28;
  uVar23 = uVar16 >> 0x1f | uVar16 << 1;
  uVar7 = (uVar11 ^ uVar19 ^ uVar14) + uVar24 + 0x6ed9eba1 + uVar23 + (uVar5 >> 0x1b | uVar5 * 0x20)
  ;
  uVar24 = uVar14 >> 2 | uVar14 * 0x40000000;
  uVar16 = uVar20 ^ uVar2 ^ uVar18 ^ uVar10;
  uVar2 = uVar16 >> 0x1f | uVar16 << 1;
  uVar25 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar19 = (uVar24 ^ uVar11 ^ uVar5) + uVar19 + 0x6ed9eba1 + uVar2 + (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar16 = uVar8 ^ uVar3 ^ uVar9 ^ uVar6;
  uVar17 = uVar16 >> 0x1f | uVar16 << 1;
  uVar5 = uVar11 + 0x6ed9eba1 + uVar17 + (uVar25 ^ uVar24 ^ uVar7) +
          (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar3 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar16 = uVar12 ^ uVar20 ^ uVar13 ^ uVar23;
  uVar14 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = uVar24 + 0x6ed9eba1 + uVar14 + (uVar3 ^ uVar25 ^ uVar19) + (uVar5 >> 0x1b | uVar5 * 0x20)
  ;
  uVar24 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar7 = uVar21 ^ uVar8 ^ uVar4 ^ uVar2;
  uVar11 = uVar7 >> 0x1f | uVar7 << 1;
  uVar19 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar8 = ((uVar5 | uVar24) & uVar3 | uVar5 & uVar24) + uVar25 + 0x8f1bbcdc + uVar11 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar7 = uVar22 ^ uVar12 ^ uVar28 ^ uVar17;
  uVar25 = uVar7 >> 0x1f | uVar7 << 1;
  uVar12 = ((uVar16 | uVar19) & uVar24 | uVar16 & uVar19) + uVar3 + 0x8f1bbcdc + uVar25 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar5 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar27 ^ uVar21 ^ uVar10 ^ uVar14;
  uVar3 = uVar16 >> 0x1f | uVar16 << 1;
  uVar15 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar16 = ((uVar8 | uVar5) & uVar19 | uVar8 & uVar5) + uVar24 + 0x8f1bbcdc + uVar3 +
           (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar7 = uVar18 ^ uVar22 ^ uVar6 ^ uVar11;
  uVar8 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = ((uVar12 | uVar15) & uVar5 | uVar12 & uVar15) + uVar19 + 0x8f1bbcdc + uVar8 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar19 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar12 = uVar9 ^ uVar27 ^ uVar23 ^ uVar25;
  uVar24 = uVar12 >> 0x1f | uVar12 << 1;
  uVar20 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = ((uVar16 | uVar19) & uVar15 | uVar16 & uVar19) + uVar5 + 0x8f1bbcdc + uVar24 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar12 = uVar13 ^ uVar18 ^ uVar2 ^ uVar3;
  uVar26 = uVar12 >> 0x1f | uVar12 << 1;
  uVar5 = uVar15 + 0x8f1bbcdc + uVar26 + ((uVar7 | uVar20) & uVar19 | uVar7 & uVar20) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar12 = uVar4 ^ uVar9 ^ uVar17 ^ uVar8;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar9 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar19 = ((uVar16 | uVar9) & uVar20 | uVar16 & uVar9) + uVar19 + 0x8f1bbcdc + uVar12 +
           (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar15 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar28 ^ uVar13 ^ uVar14 ^ uVar24;
  uVar18 = uVar16 >> 0x1f | uVar16 << 1;
  uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar16 = uVar20 + 0x8f1bbcdc + uVar18 + ((uVar5 | uVar15) & uVar9 | uVar5 & uVar15) +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar7 = uVar10 ^ uVar4 ^ uVar11 ^ uVar26;
  uVar5 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar6 ^ uVar28 ^ uVar25 ^ uVar12;
  uVar20 = uVar9 + 0x8f1bbcdc + uVar5 + ((uVar19 | uVar27) & uVar15 | uVar19 & uVar27) +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar9 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar4 = ((uVar16 | uVar7) & uVar27 | uVar16 & uVar7) + uVar15 + 0x8f1bbcdc + uVar9 +
          (uVar20 >> 0x1b | uVar20 * 0x20);
  uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar23 ^ uVar10 ^ uVar3 ^ uVar18;
  uVar13 = uVar16 >> 0x1f | uVar16 << 1;
  uVar28 = uVar20 >> 2 | uVar20 * 0x40000000;
  uVar10 = uVar27 + 0x8f1bbcdc + uVar13 + ((uVar20 | uVar19) & uVar7 | uVar20 & uVar19) +
           (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar16 = uVar2 ^ uVar6 ^ uVar8 ^ uVar5;
  uVar6 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = ((uVar4 | uVar28) & uVar19 | uVar4 & uVar28) + uVar7 + 0x8f1bbcdc + uVar6 +
           (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar4 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar7 = uVar17 ^ uVar23 ^ uVar24 ^ uVar9;
  uVar23 = uVar7 >> 0x1f | uVar7 << 1;
  uVar27 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar7 = ((uVar10 | uVar4) & uVar28 | uVar10 & uVar4) + uVar19 + 0x8f1bbcdc + uVar23 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar2 = uVar14 ^ uVar2 ^ uVar26 ^ uVar13;
  uVar15 = uVar2 >> 0x1f | uVar2 << 1;
  uVar10 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar19 = uVar28 + 0x8f1bbcdc + uVar15 + ((uVar16 | uVar27) & uVar4 | uVar16 & uVar27) +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar16 = uVar11 ^ uVar17 ^ uVar12 ^ uVar6;
  uVar2 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = uVar4 + 0x8f1bbcdc + uVar2 + ((uVar7 | uVar10) & uVar27 | uVar7 & uVar10) +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar20 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = uVar25 ^ uVar14 ^ uVar18 ^ uVar23;
  uVar4 = uVar7 >> 0x1f | uVar7 << 1;
  uVar17 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar7 = ((uVar19 | uVar20) & uVar10 | uVar19 & uVar20) + uVar27 + 0x8f1bbcdc + uVar4 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar14 = uVar3 ^ uVar11 ^ uVar5 ^ uVar15;
  uVar27 = uVar14 >> 0x1f | uVar14 << 1;
  uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar10 + 0x8f1bbcdc + uVar27 + ((uVar16 | uVar17) & uVar20 | uVar16 & uVar17) +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar10 = uVar8 ^ uVar25 ^ uVar9 ^ uVar2;
  uVar28 = uVar10 >> 0x1f | uVar10 << 1;
  uVar10 = uVar20 + 0x8f1bbcdc + uVar28 + ((uVar7 | uVar19) & uVar17 | uVar7 & uVar19) +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar11 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = uVar24 ^ uVar3 ^ uVar13 ^ uVar4;
  uVar3 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = ((uVar16 | uVar11) & uVar19 | uVar16 & uVar11) + uVar17 + 0x8f1bbcdc + uVar3 +
          (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar14 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar26 ^ uVar8 ^ uVar6 ^ uVar27;
  uVar8 = uVar16 >> 0x1f | uVar16 << 1;
  uVar25 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar19 = ((uVar10 | uVar14) & uVar11 | uVar10 & uVar14) + uVar19 + 0x8f1bbcdc + uVar8 +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar16 = uVar12 ^ uVar24 ^ uVar23 ^ uVar28;
  uVar10 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = (uVar25 ^ uVar14 ^ uVar7) + uVar11 + 0xca62c1d6 + uVar10 +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar20 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = uVar18 ^ uVar26 ^ uVar15 ^ uVar3;
  uVar24 = uVar7 >> 0x1f | uVar7 << 1;
  uVar11 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar7 = (uVar20 ^ uVar25 ^ uVar19) + uVar14 + 0xca62c1d6 + uVar24 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar12 = uVar5 ^ uVar12 ^ uVar2 ^ uVar8;
  uVar14 = uVar12 >> 0x1f | uVar12 << 1;
  uVar12 = uVar25 + 0xca62c1d6 + uVar14 + (uVar11 ^ uVar20 ^ uVar16) +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar9 ^ uVar18 ^ uVar4 ^ uVar10;
  uVar18 = uVar16 >> 0x1f | uVar16 << 1;
  uVar25 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar26 = (uVar19 ^ uVar11 ^ uVar7) + uVar20 + 0xca62c1d6 + uVar18 +
           (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar16 = uVar13 ^ uVar5 ^ uVar27 ^ uVar24;
  uVar17 = uVar16 >> 0x1f | uVar16 << 1;
  uVar5 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar7 = uVar11 + 0xca62c1d6 + uVar17 + (uVar25 ^ uVar19 ^ uVar12) +
          (uVar26 >> 0x1b | uVar26 * 0x20);
  uVar16 = uVar6 ^ uVar9 ^ uVar28 ^ uVar14;
  uVar9 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = (uVar5 ^ uVar25 ^ uVar26) + uVar19 + 0xca62c1d6 + uVar9 + (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar26 = uVar26 >> 2 | uVar26 * 0x40000000;
  uVar12 = uVar23 ^ uVar13 ^ uVar3 ^ uVar18;
  uVar21 = uVar12 >> 0x1f | uVar12 << 1;
  uVar13 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar11 = (uVar26 ^ uVar5 ^ uVar7) + uVar25 + 0xca62c1d6 + uVar21 +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar7 = uVar15 ^ uVar6 ^ uVar8 ^ uVar17;
  uVar20 = uVar7 >> 0x1f | uVar7 << 1;
  uVar12 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar5 + 0xca62c1d6 + uVar20 + (uVar13 ^ uVar26 ^ uVar16) +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar7 = uVar2 ^ uVar23 ^ uVar10 ^ uVar9;
  uVar19 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = uVar26 + 0xca62c1d6 + uVar19 + (uVar12 ^ uVar13 ^ uVar11) +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar5 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar6 = uVar4 ^ uVar15 ^ uVar24 ^ uVar21;
  uVar6 = uVar6 >> 0x1f | uVar6 << 1;
  uVar13 = (uVar5 ^ uVar12 ^ uVar16) + uVar13 + 0xca62c1d6 + uVar6 + (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar11 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = uVar27 ^ uVar2 ^ uVar14 ^ uVar20;
  uVar23 = uVar16 >> 0x1f | uVar16 << 1;
  uVar12 = (uVar13 >> 0x1b | uVar13 * 0x20) +
           (uVar11 ^ uVar5 ^ uVar7) + uVar12 + 0xca62c1d6 + uVar23;
  uVar16 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar7 = uVar28 ^ uVar4 ^ uVar18 ^ uVar19;
  uVar25 = uVar7 >> 0x1f | uVar7 << 1;
  uVar2 = (uVar12 >> 0x1b | uVar12 * 0x20) +
          (uVar16 ^ uVar11 ^ uVar13) + uVar5 + 0xca62c1d6 + uVar25;
  uVar13 = uVar13 >> 2 | uVar13 * 0x40000000;
  uVar7 = uVar3 ^ uVar27 ^ uVar17 ^ uVar6;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar4 = (uVar2 >> 0x1b | uVar2 * 0x20) + (uVar13 ^ uVar16 ^ uVar12) + uVar11 + 0xca62c1d6 + uVar7;
  uVar12 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar5 = uVar8 ^ uVar28 ^ uVar9 ^ uVar23;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar11 = (uVar4 >> 0x1b | uVar4 * 0x20) + (uVar12 ^ uVar13 ^ uVar2) + uVar16 + 0xca62c1d6 + uVar5;
  uVar26 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar16 = uVar10 ^ uVar3 ^ uVar21 ^ uVar25;
  uVar2 = uVar16 >> 0x1f | uVar16 << 1;
  uVar16 = (uVar26 ^ uVar12 ^ uVar4) + uVar13 + 0xca62c1d6 + uVar2 +
           (uVar11 >> 0x1b | uVar11 * 0x20);
  uVar3 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar7 = uVar24 ^ uVar8 ^ uVar20 ^ uVar7;
  uVar15 = uVar7 >> 0x1f | uVar7 << 1;
  uVar7 = (uVar26 ^ uVar3 ^ uVar11) + uVar12 + 0xca62c1d6 + uVar15 +
          (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar5 = uVar14 ^ uVar10 ^ uVar19 ^ uVar5;
  uVar8 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar4 = uVar5 >> 0x1f | uVar5 << 1;
  uVar13 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar16 = (uVar3 ^ uVar8 ^ uVar16) + uVar26 + 0xca62c1d6 + uVar4 + (uVar7 >> 0x1b | uVar7 * 0x20);
  uVar2 = uVar18 ^ uVar24 ^ uVar6 ^ uVar2;
  uVar12 = uVar3 + 0xca62c1d6 + (uVar2 >> 0x1f | uVar2 << 1) + (uVar8 ^ uVar13 ^ uVar7) +
           (uVar16 >> 0x1b | uVar16 * 0x20);
  uVar7 = uVar7 >> 2 | uVar7 * 0x40000000;
  uVar15 = uVar17 ^ uVar14 ^ uVar23 ^ uVar15;
  uVar6 = uVar8 + 0xca62c1d6 + (uVar15 >> 0x1f | uVar15 << 1) + (uVar13 ^ uVar7 ^ uVar16) +
          (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar16 = uVar16 >> 2 | uVar16 * 0x40000000;
  uVar4 = uVar9 ^ uVar18 ^ uVar25 ^ uVar4;
  *(uint *)(this + 0x10) =
       (uVar4 >> 0x1f | uVar4 << 1) + 0xca62c1d6 + uVar1 + uVar13 + (uVar7 ^ uVar16 ^ uVar12) +
       (uVar6 >> 0x1b | uVar6 * 0x20);
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + uVar6;
  *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar16;
  *(uint *)(this + 0x20) = *(int *)(this + 0x20) + uVar7;
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + (uVar12 >> 2 | uVar12 * 0x40000000);
  return;
}
```
