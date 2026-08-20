# create_event_entity

`_ZN13EventClassify15CEventScriptMng19create_event_entityEib`

`EventClassify::CEventScriptMng::create_event_entity(int, bool)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810b402` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b402  _ZN13EventClassify15CEventScriptMng19create_event_entityEib
#           EventClassify::CEventScriptMng::create_event_entity(int, bool)
# range [0x0810b402, 0x0810b969]
0810b402 +0x000:  push   %ebp
0810b403 +0x001:  mov    %esp,%ebp
0810b405 +0x003:  push   %edi
0810b406 +0x004:  push   %esi
0810b407 +0x005:  push   %ebx
0810b408 +0x006:  sub    $0x3c,%esp
0810b40b +0x009:  mov    0x10(%ebp),%eax
0810b40e +0x00c:  mov    %al,-0x2c(%ebp)
0810b411 +0x00f:  movl   $0x0,-0x1c(%ebp)
0810b418 +0x016:  cmpb   $0x0,-0x2c(%ebp)
0810b41c +0x01a:  je     0810b45b <+0x59>
0810b41e +0x01c:  movl   $0x1c,(%esp)
0810b425 +0x023:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b42a +0x028:  mov    %eax,%ebx
0810b42c +0x02a:  mov    %ebx,%eax
0810b42e +0x02c:  mov    %eax,(%esp)
0810b431 +0x02f:  call   0810af40 <_ZN13EventClassify12CEventEntityC1Ev>  ; EventClassify::CEventEntity::CEventEntity()
0810b436 +0x034:  jmp    0810b450 <+0x4e>
0810b438 +0x036:  mov    %edx,%esi
0810b43a +0x038:  mov    %eax,%edi
0810b43c +0x03a:  mov    %ebx,(%esp)
0810b43f +0x03d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b444 +0x042:  mov    %edi,%eax
0810b446 +0x044:  mov    %esi,%edx
0810b448 +0x046:  mov    %eax,(%esp)
0810b44b +0x049:  call   08ae3750 <_Unwind_Resume>
0810b450 +0x04e:  mov    %ebx,-0x1c(%ebp)
0810b453 +0x051:  mov    -0x1c(%ebp),%eax
0810b456 +0x054:  jmp    0810b962 <+0x560>
0810b45b +0x059:  mov    0xc(%ebp),%eax
0810b45e +0x05c:  cmp    $0x194,%eax
0810b463 +0x061:  je     0810b5bb <+0x1b9>
0810b469 +0x067:  cmp    $0x194,%eax
0810b46e +0x06c:  jg     0810b4ac <+0xaa>
0810b470 +0x06e:  cmp    $0x65,%eax
0810b473 +0x071:  je     0810b8ab <+0x4a9>
0810b479 +0x077:  cmp    $0x65,%eax
0810b47c +0x07a:  jg     0810b495 <+0x93>
0810b47e +0x07c:  cmp    $0x56,%eax
0810b481 +0x07f:  je     0810b619 <+0x217>
0810b487 +0x085:  cmp    $0x5c,%eax
0810b48a +0x088:  je     0810b84d <+0x44b>
0810b490 +0x08e:  jmp    0810b95f <+0x55d>
0810b495 +0x093:  cmp    $0x191,%eax
0810b49a +0x098:  jl     0810b95f <+0x55d>
0810b4a0 +0x09e:  cmp    $0x192,%eax
0810b4a5 +0x0a3:  jle    0810b4ff <+0xfd>
0810b4a7 +0x0a5:  jmp    0810b55d <+0x15b>
0810b4ac +0x0aa:  cmp    $0x199,%eax
0810b4b1 +0x0af:  je     0810b733 <+0x331>
0810b4b7 +0x0b5:  cmp    $0x199,%eax
0810b4bc +0x0ba:  jg     0810b4d9 <+0xd7>
0810b4be +0x0bc:  cmp    $0x196,%eax
0810b4c3 +0x0c1:  je     0810b677 <+0x275>
0810b4c9 +0x0c7:  cmp    $0x197,%eax
0810b4ce +0x0cc:  je     0810b6d5 <+0x2d3>
0810b4d4 +0x0d2:  jmp    0810b95f <+0x55d>
0810b4d9 +0x0d7:  cmp    $0x19b,%eax
0810b4de +0x0dc:  je     0810b7ef <+0x3ed>
0810b4e4 +0x0e2:  cmp    $0x19b,%eax
0810b4e9 +0x0e7:  jl     0810b791 <+0x38f>
0810b4ef +0x0ed:  cmp    $0x19c,%eax
0810b4f4 +0x0f2:  je     0810b906 <+0x504>
0810b4fa +0x0f8:  jmp    0810b95f <+0x55d>
0810b4ff +0x0fd:  movl   $0x20,(%esp)
0810b506 +0x104:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b50b +0x109:  mov    %eax,%ebx
0810b50d +0x10b:  mov    %ebx,%ecx
0810b50f +0x10d:  mov    %ecx,%edx
0810b511 +0x10f:  mov    $0x0,%esi
0810b516 +0x114:  mov    $0x20,%eax
0810b51b +0x119:  mov    %eax,%edi
0810b51d +0x11b:  and    $0xfffffffc,%edi
0810b520 +0x11e:  mov    $0x0,%eax
0810b525 +0x123:  mov    %esi,(%edx,%eax,1)
0810b528 +0x126:  add    $0x4,%eax
0810b52b +0x129:  cmp    %edi,%eax
0810b52d +0x12b:  jb     0810b525 <+0x123>
0810b52f +0x12d:  add    %eax,%edx
0810b531 +0x12f:  mov    %ecx,(%esp)
0810b534 +0x132:  call   08110f88 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x49a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x49a
0810b539 +0x137:  jmp    0810b553 <+0x151>
0810b53b +0x139:  mov    %edx,%esi
0810b53d +0x13b:  mov    %eax,%edi
0810b53f +0x13d:  mov    %ebx,(%esp)
0810b542 +0x140:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b547 +0x145:  mov    %edi,%eax
0810b549 +0x147:  mov    %esi,%edx
0810b54b +0x149:  mov    %eax,(%esp)
0810b54e +0x14c:  call   08ae3750 <_Unwind_Resume>
0810b553 +0x151:  mov    %ebx,%eax
0810b555 +0x153:  mov    %eax,-0x1c(%ebp)
0810b558 +0x156:  jmp    0810b95f <+0x55d>
0810b55d +0x15b:  movl   $0x20,(%esp)
0810b564 +0x162:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b569 +0x167:  mov    %eax,%ebx
0810b56b +0x169:  mov    %ebx,%ecx
0810b56d +0x16b:  mov    %ecx,%edx
0810b56f +0x16d:  mov    $0x0,%esi
0810b574 +0x172:  mov    $0x20,%eax
0810b579 +0x177:  mov    %eax,%edi
0810b57b +0x179:  and    $0xfffffffc,%edi
0810b57e +0x17c:  mov    $0x0,%eax
0810b583 +0x181:  mov    %esi,(%edx,%eax,1)
0810b586 +0x184:  add    $0x4,%eax
0810b589 +0x187:  cmp    %edi,%eax
0810b58b +0x189:  jb     0810b583 <+0x181>
0810b58d +0x18b:  add    %eax,%edx
0810b58f +0x18d:  mov    %ecx,(%esp)
0810b592 +0x190:  call   08110fa4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x4b6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x4b6
0810b597 +0x195:  jmp    0810b5b1 <+0x1af>
0810b599 +0x197:  mov    %edx,%esi
0810b59b +0x199:  mov    %eax,%edi
0810b59d +0x19b:  mov    %ebx,(%esp)
0810b5a0 +0x19e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b5a5 +0x1a3:  mov    %edi,%eax
0810b5a7 +0x1a5:  mov    %esi,%edx
0810b5a9 +0x1a7:  mov    %eax,(%esp)
0810b5ac +0x1aa:  call   08ae3750 <_Unwind_Resume>
0810b5b1 +0x1af:  mov    %ebx,%eax
0810b5b3 +0x1b1:  mov    %eax,-0x1c(%ebp)
0810b5b6 +0x1b4:  jmp    0810b95f <+0x55d>
0810b5bb +0x1b9:  movl   $0x20,(%esp)
0810b5c2 +0x1c0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b5c7 +0x1c5:  mov    %eax,%ebx
0810b5c9 +0x1c7:  mov    %ebx,%ecx
0810b5cb +0x1c9:  mov    %ecx,%edx
0810b5cd +0x1cb:  mov    $0x0,%esi
0810b5d2 +0x1d0:  mov    $0x20,%eax
0810b5d7 +0x1d5:  mov    %eax,%edi
0810b5d9 +0x1d7:  and    $0xfffffffc,%edi
0810b5dc +0x1da:  mov    $0x0,%eax
0810b5e1 +0x1df:  mov    %esi,(%edx,%eax,1)
0810b5e4 +0x1e2:  add    $0x4,%eax
0810b5e7 +0x1e5:  cmp    %edi,%eax
0810b5e9 +0x1e7:  jb     0810b5e1 <+0x1df>
0810b5eb +0x1e9:  add    %eax,%edx
0810b5ed +0x1eb:  mov    %ecx,(%esp)
0810b5f0 +0x1ee:  call   08110fc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x4d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x4d2
0810b5f5 +0x1f3:  jmp    0810b60f <+0x20d>
0810b5f7 +0x1f5:  mov    %edx,%esi
0810b5f9 +0x1f7:  mov    %eax,%edi
0810b5fb +0x1f9:  mov    %ebx,(%esp)
0810b5fe +0x1fc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b603 +0x201:  mov    %edi,%eax
0810b605 +0x203:  mov    %esi,%edx
0810b607 +0x205:  mov    %eax,(%esp)
0810b60a +0x208:  call   08ae3750 <_Unwind_Resume>
0810b60f +0x20d:  mov    %ebx,%eax
0810b611 +0x20f:  mov    %eax,-0x1c(%ebp)
0810b614 +0x212:  jmp    0810b95f <+0x55d>
0810b619 +0x217:  movl   $0x20,(%esp)
0810b620 +0x21e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b625 +0x223:  mov    %eax,%ebx
0810b627 +0x225:  mov    %ebx,%ecx
0810b629 +0x227:  mov    %ecx,%edx
0810b62b +0x229:  mov    $0x0,%esi
0810b630 +0x22e:  mov    $0x20,%eax
0810b635 +0x233:  mov    %eax,%edi
0810b637 +0x235:  and    $0xfffffffc,%edi
0810b63a +0x238:  mov    $0x0,%eax
0810b63f +0x23d:  mov    %esi,(%edx,%eax,1)
0810b642 +0x240:  add    $0x4,%eax
0810b645 +0x243:  cmp    %edi,%eax
0810b647 +0x245:  jb     0810b63f <+0x23d>
0810b649 +0x247:  add    %eax,%edx
0810b64b +0x249:  mov    %ecx,(%esp)
0810b64e +0x24c:  call   08110fdc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x4ee>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x4ee
0810b653 +0x251:  jmp    0810b66d <+0x26b>
0810b655 +0x253:  mov    %edx,%esi
0810b657 +0x255:  mov    %eax,%edi
0810b659 +0x257:  mov    %ebx,(%esp)
0810b65c +0x25a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b661 +0x25f:  mov    %edi,%eax
0810b663 +0x261:  mov    %esi,%edx
0810b665 +0x263:  mov    %eax,(%esp)
0810b668 +0x266:  call   08ae3750 <_Unwind_Resume>
0810b66d +0x26b:  mov    %ebx,%eax
0810b66f +0x26d:  mov    %eax,-0x1c(%ebp)
0810b672 +0x270:  jmp    0810b95f <+0x55d>
0810b677 +0x275:  movl   $0x20,(%esp)
0810b67e +0x27c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b683 +0x281:  mov    %eax,%ebx
0810b685 +0x283:  mov    %ebx,%ecx
0810b687 +0x285:  mov    %ecx,%edx
0810b689 +0x287:  mov    $0x0,%esi
0810b68e +0x28c:  mov    $0x20,%eax
0810b693 +0x291:  mov    %eax,%edi
0810b695 +0x293:  and    $0xfffffffc,%edi
0810b698 +0x296:  mov    $0x0,%eax
0810b69d +0x29b:  mov    %esi,(%edx,%eax,1)
0810b6a0 +0x29e:  add    $0x4,%eax
0810b6a3 +0x2a1:  cmp    %edi,%eax
0810b6a5 +0x2a3:  jb     0810b69d <+0x29b>
0810b6a7 +0x2a5:  add    %eax,%edx
0810b6a9 +0x2a7:  mov    %ecx,(%esp)
0810b6ac +0x2aa:  call   08110ff8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x50a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x50a
0810b6b1 +0x2af:  jmp    0810b6cb <+0x2c9>
0810b6b3 +0x2b1:  mov    %edx,%esi
0810b6b5 +0x2b3:  mov    %eax,%edi
0810b6b7 +0x2b5:  mov    %ebx,(%esp)
0810b6ba +0x2b8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b6bf +0x2bd:  mov    %edi,%eax
0810b6c1 +0x2bf:  mov    %esi,%edx
0810b6c3 +0x2c1:  mov    %eax,(%esp)
0810b6c6 +0x2c4:  call   08ae3750 <_Unwind_Resume>
0810b6cb +0x2c9:  mov    %ebx,%eax
0810b6cd +0x2cb:  mov    %eax,-0x1c(%ebp)
0810b6d0 +0x2ce:  jmp    0810b95f <+0x55d>
0810b6d5 +0x2d3:  movl   $0x20,(%esp)
0810b6dc +0x2da:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b6e1 +0x2df:  mov    %eax,%ebx
0810b6e3 +0x2e1:  mov    %ebx,%ecx
0810b6e5 +0x2e3:  mov    %ecx,%edx
0810b6e7 +0x2e5:  mov    $0x0,%esi
0810b6ec +0x2ea:  mov    $0x20,%eax
0810b6f1 +0x2ef:  mov    %eax,%edi
0810b6f3 +0x2f1:  and    $0xfffffffc,%edi
0810b6f6 +0x2f4:  mov    $0x0,%eax
0810b6fb +0x2f9:  mov    %esi,(%edx,%eax,1)
0810b6fe +0x2fc:  add    $0x4,%eax
0810b701 +0x2ff:  cmp    %edi,%eax
0810b703 +0x301:  jb     0810b6fb <+0x2f9>
0810b705 +0x303:  add    %eax,%edx
0810b707 +0x305:  mov    %ecx,(%esp)
0810b70a +0x308:  call   08111014 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x526>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x526
0810b70f +0x30d:  jmp    0810b729 <+0x327>
0810b711 +0x30f:  mov    %edx,%esi
0810b713 +0x311:  mov    %eax,%edi
0810b715 +0x313:  mov    %ebx,(%esp)
0810b718 +0x316:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b71d +0x31b:  mov    %edi,%eax
0810b71f +0x31d:  mov    %esi,%edx
0810b721 +0x31f:  mov    %eax,(%esp)
0810b724 +0x322:  call   08ae3750 <_Unwind_Resume>
0810b729 +0x327:  mov    %ebx,%eax
0810b72b +0x329:  mov    %eax,-0x1c(%ebp)
0810b72e +0x32c:  jmp    0810b95f <+0x55d>
0810b733 +0x331:  movl   $0x20,(%esp)
0810b73a +0x338:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b73f +0x33d:  mov    %eax,%ebx
0810b741 +0x33f:  mov    %ebx,%ecx
0810b743 +0x341:  mov    %ecx,%edx
0810b745 +0x343:  mov    $0x0,%esi
0810b74a +0x348:  mov    $0x20,%eax
0810b74f +0x34d:  mov    %eax,%edi
0810b751 +0x34f:  and    $0xfffffffc,%edi
0810b754 +0x352:  mov    $0x0,%eax
0810b759 +0x357:  mov    %esi,(%edx,%eax,1)
0810b75c +0x35a:  add    $0x4,%eax
0810b75f +0x35d:  cmp    %edi,%eax
0810b761 +0x35f:  jb     0810b759 <+0x357>
0810b763 +0x361:  add    %eax,%edx
0810b765 +0x363:  mov    %ecx,(%esp)
0810b768 +0x366:  call   08111030 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x542>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x542
0810b76d +0x36b:  jmp    0810b787 <+0x385>
0810b76f +0x36d:  mov    %edx,%esi
0810b771 +0x36f:  mov    %eax,%edi
0810b773 +0x371:  mov    %ebx,(%esp)
0810b776 +0x374:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b77b +0x379:  mov    %edi,%eax
0810b77d +0x37b:  mov    %esi,%edx
0810b77f +0x37d:  mov    %eax,(%esp)
0810b782 +0x380:  call   08ae3750 <_Unwind_Resume>
0810b787 +0x385:  mov    %ebx,%eax
0810b789 +0x387:  mov    %eax,-0x1c(%ebp)
0810b78c +0x38a:  jmp    0810b95f <+0x55d>
0810b791 +0x38f:  movl   $0x20,(%esp)
0810b798 +0x396:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b79d +0x39b:  mov    %eax,%ebx
0810b79f +0x39d:  mov    %ebx,%ecx
0810b7a1 +0x39f:  mov    %ecx,%edx
0810b7a3 +0x3a1:  mov    $0x0,%esi
0810b7a8 +0x3a6:  mov    $0x20,%eax
0810b7ad +0x3ab:  mov    %eax,%edi
0810b7af +0x3ad:  and    $0xfffffffc,%edi
0810b7b2 +0x3b0:  mov    $0x0,%eax
0810b7b7 +0x3b5:  mov    %esi,(%edx,%eax,1)
0810b7ba +0x3b8:  add    $0x4,%eax
0810b7bd +0x3bb:  cmp    %edi,%eax
0810b7bf +0x3bd:  jb     0810b7b7 <+0x3b5>
0810b7c1 +0x3bf:  add    %eax,%edx
0810b7c3 +0x3c1:  mov    %ecx,(%esp)
0810b7c6 +0x3c4:  call   0811104c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x55e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x55e
0810b7cb +0x3c9:  jmp    0810b7e5 <+0x3e3>
0810b7cd +0x3cb:  mov    %edx,%esi
0810b7cf +0x3cd:  mov    %eax,%edi
0810b7d1 +0x3cf:  mov    %ebx,(%esp)
0810b7d4 +0x3d2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b7d9 +0x3d7:  mov    %edi,%eax
0810b7db +0x3d9:  mov    %esi,%edx
0810b7dd +0x3db:  mov    %eax,(%esp)
0810b7e0 +0x3de:  call   08ae3750 <_Unwind_Resume>
0810b7e5 +0x3e3:  mov    %ebx,%eax
0810b7e7 +0x3e5:  mov    %eax,-0x1c(%ebp)
0810b7ea +0x3e8:  jmp    0810b95f <+0x55d>
0810b7ef +0x3ed:  movl   $0x20,(%esp)
0810b7f6 +0x3f4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b7fb +0x3f9:  mov    %eax,%ebx
0810b7fd +0x3fb:  mov    %ebx,%ecx
0810b7ff +0x3fd:  mov    %ecx,%edx
0810b801 +0x3ff:  mov    $0x0,%esi
0810b806 +0x404:  mov    $0x20,%eax
0810b80b +0x409:  mov    %eax,%edi
0810b80d +0x40b:  and    $0xfffffffc,%edi
0810b810 +0x40e:  mov    $0x0,%eax
0810b815 +0x413:  mov    %esi,(%edx,%eax,1)
0810b818 +0x416:  add    $0x4,%eax
0810b81b +0x419:  cmp    %edi,%eax
0810b81d +0x41b:  jb     0810b815 <+0x413>
0810b81f +0x41d:  add    %eax,%edx
0810b821 +0x41f:  mov    %ecx,(%esp)
0810b824 +0x422:  call   08111068 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x57a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x57a
0810b829 +0x427:  jmp    0810b843 <+0x441>
0810b82b +0x429:  mov    %edx,%esi
0810b82d +0x42b:  mov    %eax,%edi
0810b82f +0x42d:  mov    %ebx,(%esp)
0810b832 +0x430:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b837 +0x435:  mov    %edi,%eax
0810b839 +0x437:  mov    %esi,%edx
0810b83b +0x439:  mov    %eax,(%esp)
0810b83e +0x43c:  call   08ae3750 <_Unwind_Resume>
0810b843 +0x441:  mov    %ebx,%eax
0810b845 +0x443:  mov    %eax,-0x1c(%ebp)
0810b848 +0x446:  jmp    0810b95f <+0x55d>
0810b84d +0x44b:  movl   $0x20,(%esp)
0810b854 +0x452:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b859 +0x457:  mov    %eax,%ebx
0810b85b +0x459:  mov    %ebx,%ecx
0810b85d +0x45b:  mov    %ecx,%edx
0810b85f +0x45d:  mov    $0x0,%esi
0810b864 +0x462:  mov    $0x20,%eax
0810b869 +0x467:  mov    %eax,%edi
0810b86b +0x469:  and    $0xfffffffc,%edi
0810b86e +0x46c:  mov    $0x0,%eax
0810b873 +0x471:  mov    %esi,(%edx,%eax,1)
0810b876 +0x474:  add    $0x4,%eax
0810b879 +0x477:  cmp    %edi,%eax
0810b87b +0x479:  jb     0810b873 <+0x471>
0810b87d +0x47b:  add    %eax,%edx
0810b87f +0x47d:  mov    %ecx,(%esp)
0810b882 +0x480:  call   08111084 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x596>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x596
0810b887 +0x485:  jmp    0810b8a1 <+0x49f>
0810b889 +0x487:  mov    %edx,%esi
0810b88b +0x489:  mov    %eax,%edi
0810b88d +0x48b:  mov    %ebx,(%esp)
0810b890 +0x48e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b895 +0x493:  mov    %edi,%eax
0810b897 +0x495:  mov    %esi,%edx
0810b899 +0x497:  mov    %eax,(%esp)
0810b89c +0x49a:  call   08ae3750 <_Unwind_Resume>
0810b8a1 +0x49f:  mov    %ebx,%eax
0810b8a3 +0x4a1:  mov    %eax,-0x1c(%ebp)
0810b8a6 +0x4a4:  jmp    0810b95f <+0x55d>
0810b8ab +0x4a9:  movl   $0x20,(%esp)
0810b8b2 +0x4b0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b8b7 +0x4b5:  mov    %eax,%ebx
0810b8b9 +0x4b7:  mov    %ebx,%ecx
0810b8bb +0x4b9:  mov    %ecx,%edx
0810b8bd +0x4bb:  mov    $0x0,%esi
0810b8c2 +0x4c0:  mov    $0x20,%eax
0810b8c7 +0x4c5:  mov    %eax,%edi
0810b8c9 +0x4c7:  and    $0xfffffffc,%edi
0810b8cc +0x4ca:  mov    $0x0,%eax
0810b8d1 +0x4cf:  mov    %esi,(%edx,%eax,1)
0810b8d4 +0x4d2:  add    $0x4,%eax
0810b8d7 +0x4d5:  cmp    %edi,%eax
0810b8d9 +0x4d7:  jb     0810b8d1 <+0x4cf>
0810b8db +0x4d9:  add    %eax,%edx
0810b8dd +0x4db:  mov    %ecx,(%esp)
0810b8e0 +0x4de:  call   081110a0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5b2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5b2
0810b8e5 +0x4e3:  jmp    0810b8ff <+0x4fd>
0810b8e7 +0x4e5:  mov    %edx,%esi
0810b8e9 +0x4e7:  mov    %eax,%edi
0810b8eb +0x4e9:  mov    %ebx,(%esp)
0810b8ee +0x4ec:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b8f3 +0x4f1:  mov    %edi,%eax
0810b8f5 +0x4f3:  mov    %esi,%edx
0810b8f7 +0x4f5:  mov    %eax,(%esp)
0810b8fa +0x4f8:  call   08ae3750 <_Unwind_Resume>
0810b8ff +0x4fd:  mov    %ebx,%eax
0810b901 +0x4ff:  mov    %eax,-0x1c(%ebp)
0810b904 +0x502:  jmp    0810b95f <+0x55d>
0810b906 +0x504:  movl   $0x20,(%esp)
0810b90d +0x50b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810b912 +0x510:  mov    %eax,%ebx
0810b914 +0x512:  mov    %ebx,%ecx
0810b916 +0x514:  mov    %ecx,%edx
0810b918 +0x516:  mov    $0x0,%esi
0810b91d +0x51b:  mov    $0x20,%eax
0810b922 +0x520:  mov    %eax,%edi
0810b924 +0x522:  and    $0xfffffffc,%edi
0810b927 +0x525:  mov    $0x0,%eax
0810b92c +0x52a:  mov    %esi,(%edx,%eax,1)
0810b92f +0x52d:  add    $0x4,%eax
0810b932 +0x530:  cmp    %edi,%eax
0810b934 +0x532:  jb     0810b92c <+0x52a>
0810b936 +0x534:  add    %eax,%edx
0810b938 +0x536:  mov    %ecx,(%esp)
0810b93b +0x539:  call   0811110a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x61c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x61c
0810b940 +0x53e:  jmp    0810b95a <+0x558>
0810b942 +0x540:  mov    %edx,%esi
0810b944 +0x542:  mov    %eax,%edi
0810b946 +0x544:  mov    %ebx,(%esp)
0810b949 +0x547:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810b94e +0x54c:  mov    %edi,%eax
0810b950 +0x54e:  mov    %esi,%edx
0810b952 +0x550:  mov    %eax,(%esp)
0810b955 +0x553:  call   08ae3750 <_Unwind_Resume>
0810b95a +0x558:  mov    %ebx,%eax
0810b95c +0x55a:  mov    %eax,-0x1c(%ebp)
0810b95f +0x55d:  mov    -0x1c(%ebp),%eax
0810b962 +0x560:  add    $0x3c,%esp
0810b965 +0x563:  pop    %ebx
0810b966 +0x564:  pop    %esi
0810b967 +0x565:  pop    %edi
0810b968 +0x566:  pop    %ebp
0810b969 +0x567:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::create_event_entity @ 0x810b402

/* EventClassify::CEventScriptMng::create_event_entity(int, bool) */

CEventEntity * __thiscall
EventClassify::CEventScriptMng::create_event_entity(CEventScriptMng *this,int param_1,bool param_2)

{
  uint uVar1;
  CEventEntity *local_20;
  
  local_20 = (CEventEntity *)0x0;
  if (param_2) {
    local_20 = operator_new(0x1c);
                    /* try { // try from 0810b431 to 0810b435 has its CatchHandler @ 0810b438 */
    CEventEntity::CEventEntity(local_20);
  }
  else if (param_1 == 0x194) {
    local_20 = operator_new(0x20);
    uVar1 = 0;
    do {
      *(undefined4 *)(local_20 + uVar1) = 0;
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x20);
                    /* try { // try from 0810b5f0 to 0810b5f4 has its CatchHandler @ 0810b5f7 */
    CLevelUpReward::CLevelUpReward((CLevelUpReward *)local_20);
  }
  else if (param_1 < 0x195) {
    if (param_1 == 0x65) {
      local_20 = operator_new(0x20);
      uVar1 = 0;
      do {
        *(undefined4 *)(local_20 + uVar1) = 0;
        uVar1 = uVar1 + 4;
      } while (uVar1 < 0x20);
                    /* try { // try from 0810b8e0 to 0810b8e4 has its CatchHandler @ 0810b8e7 */
      CUsedFatigueGiveItem::CUsedFatigueGiveItem((CUsedFatigueGiveItem *)local_20);
    }
    else if (param_1 < 0x66) {
      if (param_1 == 0x56) {
        local_20 = operator_new(0x20);
        uVar1 = 0;
        do {
          *(undefined4 *)(local_20 + uVar1) = 0;
          uVar1 = uVar1 + 4;
        } while (uVar1 < 0x20);
                    /* try { // try from 0810b64e to 0810b652 has its CatchHandler @ 0810b655 */
        CAttendance::CAttendance((CAttendance *)local_20);
      }
      else if (param_1 == 0x5c) {
        local_20 = operator_new(0x20);
        uVar1 = 0;
        do {
          *(undefined4 *)(local_20 + uVar1) = 0;
          uVar1 = uVar1 + 4;
        } while (uVar1 < 0x20);
                    /* try { // try from 0810b882 to 0810b886 has its CatchHandler @ 0810b889 */
        CPcRoomPlayTime::CPcRoomPlayTime((CPcRoomPlayTime *)local_20);
      }
    }
    else if (400 < param_1) {
      if (param_1 < 0x193) {
        local_20 = operator_new(0x20);
        uVar1 = 0;
        do {
          *(undefined4 *)(local_20 + uVar1) = 0;
          uVar1 = uVar1 + 4;
        } while (uVar1 < 0x20);
                    /* try { // try from 0810b534 to 0810b538 has its CatchHandler @ 0810b53b */
        CAccountFirstLogin::CAccountFirstLogin((CAccountFirstLogin *)local_20);
      }
      else {
        local_20 = operator_new(0x20);
        uVar1 = 0;
        do {
          *(undefined4 *)(local_20 + uVar1) = 0;
          uVar1 = uVar1 + 4;
        } while (uVar1 < 0x20);
                    /* try { // try from 0810b592 to 0810b596 has its CatchHandler @ 0810b599 */
        CAddItemCountDB::CAddItemCountDB((CAddItemCountDB *)local_20);
      }
    }
  }
  else if (param_1 == 0x199) {
    local_20 = operator_new(0x20);
    uVar1 = 0;
    do {
      *(undefined4 *)(local_20 + uVar1) = 0;
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x20);
                    /* try { // try from 0810b768 to 0810b76c has its CatchHandler @ 0810b76f */
    CFatigueQuantity::CFatigueQuantity((CFatigueQuantity *)local_20);
  }
  else if (param_1 < 0x19a) {
    if (param_1 == 0x196) {
      local_20 = operator_new(0x20);
      uVar1 = 0;
      do {
        *(undefined4 *)(local_20 + uVar1) = 0;
        uVar1 = uVar1 + 4;
      } while (uVar1 < 0x20);
                    /* try { // try from 0810b6ac to 0810b6b0 has its CatchHandler @ 0810b6b3 */
      CExchangeRandomItemReward::CExchangeRandomItemReward((CExchangeRandomItemReward *)local_20);
    }
    else if (param_1 == 0x197) {
      local_20 = operator_new(0x20);
      uVar1 = 0;
      do {
        *(undefined4 *)(local_20 + uVar1) = 0;
        uVar1 = uVar1 + 4;
      } while (uVar1 < 0x20);
                    /* try { // try from 0810b70a to 0810b70e has its CatchHandler @ 0810b711 */
      CAvatarDisjointRandomReward::CAvatarDisjointRandomReward
                ((CAvatarDisjointRandomReward *)local_20);
    }
  }
  else if (param_1 == 0x19b) {
    local_20 = operator_new(0x20);
    uVar1 = 0;
    do {
      *(undefined4 *)(local_20 + uVar1) = 0;
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x20);
                    /* try { // try from 0810b824 to 0810b828 has its CatchHandler @ 0810b82b */
    CObjectBringUp::CObjectBringUp((CObjectBringUp *)local_20);
  }
  else if (param_1 < 0x19b) {
    local_20 = operator_new(0x20);
    uVar1 = 0;
    do {
      *(undefined4 *)(local_20 + uVar1) = 0;
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x20);
                    /* try { // try from 0810b7c6 to 0810b7ca has its CatchHandler @ 0810b7cd */
    CPurchaseCashItemBonus::CPurchaseCashItemBonus((CPurchaseCashItemBonus *)local_20);
  }
  else if (param_1 == 0x19c) {
    local_20 = operator_new(0x20);
    uVar1 = 0;
    do {
      *(undefined4 *)(local_20 + uVar1) = 0;
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x20);
                    /* try { // try from 0810b93b to 0810b93f has its CatchHandler @ 0810b942 */
    CAccountFirstLoginDaily::CAccountFirstLoginDaily((CAccountFirstLoginDaily *)local_20);
  }
  return local_20;
}
```
