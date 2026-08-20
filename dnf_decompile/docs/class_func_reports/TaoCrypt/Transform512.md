# Transform512

`_ZN8TaoCryptL12Transform512EPyS0_`

`TaoCrypt::Transform512(unsigned long long*, unsigned long long*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08769570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08769570  _ZN8TaoCryptL12Transform512EPyS0_
#           TaoCrypt::Transform512(unsigned long long*, unsigned long long*)
# range [0x08769570, 0x0876d45f]
08769570 +0x0000:  push   %ebp
08769571 +0x0001:  mov    %esp,%ebp
08769573 +0x0003:  push   %edi
08769574 +0x0004:  push   %esi
08769575 +0x0005:  push   %ebx
08769576 +0x0006:  sub    $0x444,%esp
0876957c +0x000c:  mov    %edx,-0x144(%ebp)
08769582 +0x0012:  mov    %eax,%edx
08769584 +0x0014:  mov    %eax,-0x148(%ebp)
0876958a +0x001a:  mov    (%eax),%eax
0876958c +0x001c:  call   08722df8 <__i686.get_pc_thunk.bx>
08769591 +0x0021:  add    $0xc03607,%ebx
08769597 +0x0027:  mov    %eax,-0x50(%ebp)
0876959a +0x002a:  mov    0x4(%edx),%eax
0876959d +0x002d:  mov    %eax,-0x4c(%ebp)
087695a0 +0x0030:  mov    0x8(%edx),%eax
087695a3 +0x0033:  mov    %eax,-0x48(%ebp)
087695a6 +0x0036:  mov    0xc(%edx),%eax
087695a9 +0x0039:  mov    %eax,-0x44(%ebp)
087695ac +0x003c:  mov    0x10(%edx),%eax
087695af +0x003f:  mov    %eax,-0x40(%ebp)
087695b2 +0x0042:  mov    0x14(%edx),%eax
087695b5 +0x0045:  mov    %eax,-0x3c(%ebp)
087695b8 +0x0048:  mov    0x18(%edx),%eax
087695bb +0x004b:  mov    %eax,-0x38(%ebp)
087695be +0x004e:  mov    0x1c(%edx),%eax
087695c1 +0x0051:  mov    %eax,-0x34(%ebp)
087695c4 +0x0054:  mov    0x20(%edx),%eax
087695c7 +0x0057:  mov    %eax,-0x30(%ebp)
087695ca +0x005a:  mov    0x24(%edx),%eax
087695cd +0x005d:  mov    %eax,-0x2c(%ebp)
087695d0 +0x0060:  mov    0x28(%edx),%eax
087695d3 +0x0063:  mov    %eax,-0x28(%ebp)
087695d6 +0x0066:  mov    0x2c(%edx),%eax
087695d9 +0x0069:  mov    %eax,-0x24(%ebp)
087695dc +0x006c:  mov    0x30(%edx),%eax
087695df +0x006f:  mov    %eax,-0x20(%ebp)
087695e2 +0x0072:  mov    0x34(%edx),%eax
087695e5 +0x0075:  mov    %eax,-0x1c(%ebp)
087695e8 +0x0078:  mov    0x38(%edx),%eax
087695eb +0x007b:  mov    -0x24(%ebp),%ecx
087695ee +0x007e:  mov    %eax,-0x18(%ebp)
087695f1 +0x0081:  mov    0x3c(%edx),%eax
087695f4 +0x0084:  mov    -0x2c(%ebp),%edx
087695f7 +0x0087:  mov    -0x18(%ebp),%esi
087695fa +0x008a:  movl   $0x0,-0x134(%ebp)
08769604 +0x0094:  mov    %eax,-0x14(%ebp)
08769607 +0x0097:  mov    -0x14(%ebp),%edi
0876960a +0x009a:  mov    %edx,-0xd4(%ebp)
08769610 +0x00a0:  mov    -0x30(%ebp),%eax
08769613 +0x00a3:  mov    %edx,-0xf4(%ebp)
08769619 +0x00a9:  mov    -0x28(%ebp),%edx
0876961c +0x00ac:  mov    %esi,-0x108(%ebp)
08769622 +0x00b2:  mov    -0x20(%ebp),%esi
08769625 +0x00b5:  mov    %edi,-0x104(%ebp)
0876962b +0x00bb:  mov    -0x1c(%ebp),%edi
0876962e +0x00be:  mov    %eax,-0xd8(%ebp)
08769634 +0x00c4:  mov    %edx,-0x120(%ebp)
0876963a +0x00ca:  mov    %edx,-0x118(%ebp)
08769640 +0x00d0:  mov    -0x134(%ebp),%edx
08769646 +0x00d6:  mov    %edi,-0x124(%ebp)
0876964c +0x00dc:  mov    %edi,-0xe4(%ebp)
08769652 +0x00e2:  lea    -0x667738(%ebx),%edi
08769658 +0x00e8:  mov    %eax,-0xf8(%ebp)
0876965e +0x00ee:  mov    %edi,%eax
08769660 +0x00f0:  test   %edx,%edx
08769662 +0x00f2:  mov    %esi,-0x128(%ebp)
08769668 +0x00f8:  mov    %esi,-0xe8(%ebp)
0876966e +0x00fe:  mov    (%eax),%esi
08769670 +0x0100:  mov    %edi,-0x138(%ebp)
08769676 +0x0106:  mov    0x4(%eax),%edi
08769679 +0x0109:  mov    %ecx,-0x11c(%ebp)
0876967f +0x010f:  mov    %ecx,-0x114(%ebp)
08769685 +0x0115:  je     0876d123 <+0x3bb3>
0876968b +0x011b:  mov    -0x88(%ebp),%edx
08769691 +0x0121:  mov    -0x84(%ebp),%ecx
08769697 +0x0127:  mov    -0xd0(%ebp),%eax
0876969d +0x012d:  mov    %edx,-0xe0(%ebp)
087696a3 +0x0133:  mov    -0xcc(%ebp),%edx
087696a9 +0x0139:  add    %eax,-0xe0(%ebp)
087696af +0x013f:  mov    %ecx,-0xdc(%ebp)
087696b5 +0x0145:  mov    -0x5c(%ebp),%ecx
087696b8 +0x0148:  adc    %edx,-0xdc(%ebp)
087696be +0x014e:  mov    -0x60(%ebp),%edx
087696c1 +0x0151:  mov    %edx,%eax
087696c3 +0x0153:  shrd   $0x13,%ecx,%edx
087696c7 +0x0157:  shrd   $0x13,%eax,%ecx
087696cb +0x015b:  mov    %edx,-0xf0(%ebp)
087696d1 +0x0161:  mov    -0x60(%ebp),%edx
087696d4 +0x0164:  mov    %ecx,-0xec(%ebp)
087696da +0x016a:  mov    -0x5c(%ebp),%ecx
087696dd +0x016d:  mov    -0xec(%ebp),%eax
087696e3 +0x0173:  shrd   $0x6,%ecx,%edx
087696e7 +0x0177:  shr    $0x6,%ecx
087696ea +0x017a:  mov    %ecx,-0x10c(%ebp)
087696f0 +0x0180:  mov    -0xf0(%ebp),%ecx
087696f6 +0x0186:  xor    -0x10c(%ebp),%eax
087696fc +0x018c:  mov    %eax,-0xf0(%ebp)
08769702 +0x0192:  mov    -0x60(%ebp),%eax
08769705 +0x0195:  xor    %edx,%ecx
08769707 +0x0197:  mov    -0x5c(%ebp),%edx
0876970a +0x019a:  mov    %ecx,-0x130(%ebp)
08769710 +0x01a0:  mov    %eax,%ecx
08769712 +0x01a2:  shld   $0x3,%edx,%eax
08769716 +0x01a6:  shld   $0x3,%ecx,%edx
0876971a +0x01aa:  mov    -0x130(%ebp),%ecx
08769720 +0x01b0:  xor    %eax,%ecx
08769722 +0x01b2:  mov    %ecx,-0x350(%ebp)
08769728 +0x01b8:  mov    -0xf0(%ebp),%ecx
0876972e +0x01be:  mov    -0x350(%ebp),%eax
08769734 +0x01c4:  xor    %edx,%ecx
08769736 +0x01c6:  mov    %ecx,-0x34c(%ebp)
0876973c +0x01cc:  mov    -0x34c(%ebp),%edx
08769742 +0x01d2:  add    %eax,-0xe0(%ebp)
08769748 +0x01d8:  adc    %edx,-0xdc(%ebp)
0876974e +0x01de:  mov    -0xc8(%ebp),%edx
08769754 +0x01e4:  mov    -0xc4(%ebp),%ecx
0876975a +0x01ea:  mov    %edx,%eax
0876975c +0x01ec:  shrd   $0x1,%ecx,%edx
08769760 +0x01f0:  shrd   $0x1,%eax,%ecx
08769764 +0x01f4:  mov    -0xc8(%ebp),%eax
0876976a +0x01fa:  mov    %edx,-0x100(%ebp)
08769770 +0x0200:  mov    -0xc8(%ebp),%edx
08769776 +0x0206:  mov    %ecx,-0xfc(%ebp)
0876977c +0x020c:  mov    -0xc4(%ebp),%ecx
08769782 +0x0212:  shrd   $0x7,%ecx,%edx
08769786 +0x0216:  xor    -0x100(%ebp),%edx
0876978c +0x021c:  shr    $0x7,%ecx
0876978f +0x021f:  xor    -0xfc(%ebp),%ecx
08769795 +0x0225:  mov    %edx,-0x110(%ebp)
0876979b +0x022b:  mov    -0xc4(%ebp),%edx
087697a1 +0x0231:  mov    %ecx,-0xf0(%ebp)
087697a7 +0x0237:  mov    %eax,%ecx
087697a9 +0x0239:  shrd   $0x8,%edx,%eax
087697ad +0x023d:  shrd   $0x8,%ecx,%edx
087697b1 +0x0241:  mov    -0x110(%ebp),%ecx
087697b7 +0x0247:  xor    %eax,%ecx
087697b9 +0x0249:  mov    %ecx,-0x358(%ebp)
087697bf +0x024f:  mov    -0xf0(%ebp),%ecx
087697c5 +0x0255:  mov    -0x358(%ebp),%eax
087697cb +0x025b:  xor    %edx,%ecx
087697cd +0x025d:  mov    %ecx,-0x354(%ebp)
087697d3 +0x0263:  mov    -0x354(%ebp),%edx
087697d9 +0x0269:  add    %eax,-0xe0(%ebp)
087697df +0x026f:  adc    %edx,-0xdc(%ebp)
087697e5 +0x0275:  mov    -0xdc(%ebp),%ecx
087697eb +0x027b:  mov    -0xe0(%ebp),%edx
087697f1 +0x0281:  mov    %ecx,-0xcc(%ebp)
087697f7 +0x0287:  mov    %edx,-0xd0(%ebp)
087697fd +0x028d:  mov    -0x108(%ebp),%eax
08769803 +0x0293:  mov    -0x104(%ebp),%edx
08769809 +0x0299:  add    %esi,%eax
0876980b +0x029b:  mov    -0xf8(%ebp),%esi
08769811 +0x02a1:  adc    %edi,%edx
08769813 +0x02a3:  mov    -0xf4(%ebp),%edi
08769819 +0x02a9:  mov    %esi,%ecx
0876981b +0x02ab:  shrd   $0x12,%edi,%esi
0876981f +0x02af:  shrd   $0x12,%ecx,%edi
08769823 +0x02b3:  mov    %esi,-0xf0(%ebp)
08769829 +0x02b9:  mov    -0xf8(%ebp),%esi
0876982f +0x02bf:  mov    %edi,-0xec(%ebp)
08769835 +0x02c5:  mov    -0xf4(%ebp),%edi
0876983b +0x02cb:  mov    %esi,%ecx
0876983d +0x02cd:  shrd   $0xe,%edi,%esi
08769841 +0x02d1:  xor    -0xf0(%ebp),%esi
08769847 +0x02d7:  shrd   $0xe,%ecx,%edi
0876984b +0x02db:  xor    -0xec(%ebp),%edi
08769851 +0x02e1:  mov    %esi,-0x100(%ebp)
08769857 +0x02e7:  mov    -0xf8(%ebp),%esi
0876985d +0x02ed:  mov    %edi,-0xf0(%ebp)
08769863 +0x02f3:  mov    -0xf4(%ebp),%edi
08769869 +0x02f9:  mov    %esi,%ecx
0876986b +0x02fb:  shld   $0x17,%edi,%esi
0876986f +0x02ff:  shld   $0x17,%ecx,%edi
08769873 +0x0303:  mov    -0x100(%ebp),%ecx
08769879 +0x0309:  xor    %esi,%ecx
0876987b +0x030b:  mov    -0xe4(%ebp),%esi
08769881 +0x0311:  mov    %ecx,-0x150(%ebp)
08769887 +0x0317:  mov    -0xf0(%ebp),%ecx
0876988d +0x031d:  xor    %edi,%ecx
0876988f +0x031f:  mov    %ecx,-0x14c(%ebp)
08769895 +0x0325:  mov    -0xe8(%ebp),%ecx
0876989b +0x032b:  add    -0x150(%ebp),%eax
087698a1 +0x0331:  adc    -0x14c(%ebp),%edx
087698a7 +0x0337:  xor    -0x118(%ebp),%ecx
087698ad +0x033d:  xor    -0x114(%ebp),%esi
087698b3 +0x0343:  and    -0xf8(%ebp),%ecx
087698b9 +0x0349:  and    -0xf4(%ebp),%esi
087698bf +0x034f:  xor    -0xe8(%ebp),%ecx
087698c5 +0x0355:  xor    -0xe4(%ebp),%esi
087698cb +0x035b:  mov    %ecx,-0x158(%ebp)
087698d1 +0x0361:  mov    %esi,-0x154(%ebp)
087698d7 +0x0367:  add    -0x158(%ebp),%eax
087698dd +0x036d:  adc    -0x154(%ebp),%edx
087698e3 +0x0373:  add    -0xe0(%ebp),%eax
087698e9 +0x0379:  adc    -0xdc(%ebp),%edx
087698ef +0x037f:  mov    %eax,%esi
087698f1 +0x0381:  mov    %edx,%edi
087698f3 +0x0383:  add    -0x38(%ebp),%esi
087698f6 +0x0386:  adc    -0x34(%ebp),%edi
087698f9 +0x0389:  mov    %esi,-0x110(%ebp)
087698ff +0x038f:  mov    -0x4c(%ebp),%ecx
08769902 +0x0392:  mov    %edi,-0x10c(%ebp)
08769908 +0x0398:  mov    -0x44(%ebp),%edi
0876990b +0x039b:  mov    -0x48(%ebp),%esi
0876990e +0x039e:  or     -0x50(%ebp),%esi
08769911 +0x03a1:  and    -0x40(%ebp),%esi
08769914 +0x03a4:  or     %edi,%ecx
08769916 +0x03a6:  mov    %ecx,-0x108(%ebp)
0876991c +0x03ac:  mov    -0x3c(%ebp),%ecx
0876991f +0x03af:  and    %ecx,-0x108(%ebp)
08769925 +0x03b5:  mov    -0x48(%ebp),%ecx
08769928 +0x03b8:  and    -0x50(%ebp),%ecx
0876992b +0x03bb:  and    -0x4c(%ebp),%edi
0876992e +0x03be:  or     -0x108(%ebp),%edi
08769934 +0x03c4:  or     %ecx,%esi
08769936 +0x03c6:  mov    %esi,-0x160(%ebp)
0876993c +0x03cc:  mov    -0x50(%ebp),%esi
0876993f +0x03cf:  mov    %edi,-0x15c(%ebp)
08769945 +0x03d5:  mov    -0x4c(%ebp),%edi
08769948 +0x03d8:  mov    %esi,%ecx
0876994a +0x03da:  shld   $0x1e,%edi,%esi
0876994e +0x03de:  mov    %esi,-0x108(%ebp)
08769954 +0x03e4:  shld   $0x1e,%ecx,%edi
08769958 +0x03e8:  mov    -0x50(%ebp),%esi
0876995b +0x03eb:  mov    %edi,-0x104(%ebp)
08769961 +0x03f1:  mov    -0x4c(%ebp),%edi
08769964 +0x03f4:  mov    %esi,%ecx
08769966 +0x03f6:  shrd   $0x1c,%edi,%esi
0876996a +0x03fa:  shrd   $0x1c,%ecx,%edi
0876996e +0x03fe:  mov    -0x104(%ebp),%ecx
08769974 +0x0404:  mov    %edi,-0xe4(%ebp)
0876997a +0x040a:  mov    -0x108(%ebp),%edi
08769980 +0x0410:  xor    -0xe4(%ebp),%ecx
08769986 +0x0416:  xor    %esi,%edi
08769988 +0x0418:  mov    -0x50(%ebp),%esi
0876998b +0x041b:  mov    %edi,-0xe0(%ebp)
08769991 +0x0421:  mov    -0x4c(%ebp),%edi
08769994 +0x0424:  mov    %ecx,-0xe8(%ebp)
0876999a +0x042a:  mov    %esi,%ecx
0876999c +0x042c:  shld   $0x19,%edi,%esi
087699a0 +0x0430:  shld   $0x19,%ecx,%edi
087699a4 +0x0434:  mov    -0xe0(%ebp),%ecx
087699aa +0x043a:  xor    %esi,%ecx
087699ac +0x043c:  mov    %ecx,-0x168(%ebp)
087699b2 +0x0442:  mov    -0xe8(%ebp),%ecx
087699b8 +0x0448:  xor    %edi,%ecx
087699ba +0x044a:  mov    %ecx,-0x164(%ebp)
087699c0 +0x0450:  mov    -0x160(%ebp),%esi
087699c6 +0x0456:  add    -0x168(%ebp),%esi
087699cc +0x045c:  mov    -0x15c(%ebp),%edi
087699d2 +0x0462:  adc    -0x164(%ebp),%edi
087699d8 +0x0468:  mov    %esi,-0x108(%ebp)
087699de +0x046e:  mov    -0x24(%ebp),%ecx
087699e1 +0x0471:  add    %eax,-0x108(%ebp)
087699e7 +0x0477:  mov    -0x2c(%ebp),%eax
087699ea +0x047a:  mov    %edi,-0x104(%ebp)
087699f0 +0x0480:  mov    -0x30(%ebp),%edi
087699f3 +0x0483:  adc    %edx,-0x104(%ebp)
087699f9 +0x0489:  mov    -0x28(%ebp),%edx
087699fc +0x048c:  mov    %eax,-0xf8(%ebp)
08769a02 +0x0492:  mov    -0x138(%ebp),%eax
08769a08 +0x0498:  mov    %edi,-0x100(%ebp)
08769a0e +0x049e:  mov    %ecx,-0xf0(%ebp)
08769a14 +0x04a4:  mov    %edx,-0xe0(%ebp)
08769a1a +0x04aa:  mov    -0x134(%ebp),%edx
08769a20 +0x04b0:  mov    0x8(%eax),%esi
08769a23 +0x04b3:  mov    0xc(%eax),%edi
08769a26 +0x04b6:  test   %edx,%edx
08769a28 +0x04b8:  je     0876d3c0 <+0x3e50>
08769a2e +0x04be:  mov    -0x80(%ebp),%edx
08769a31 +0x04c1:  mov    -0x7c(%ebp),%ecx
08769a34 +0x04c4:  mov    -0xc8(%ebp),%eax
08769a3a +0x04ca:  mov    %edx,-0xe8(%ebp)
08769a40 +0x04d0:  mov    -0xc4(%ebp),%edx
08769a46 +0x04d6:  add    %eax,-0xe8(%ebp)
08769a4c +0x04dc:  mov    %ecx,-0xe4(%ebp)
08769a52 +0x04e2:  mov    -0x54(%ebp),%ecx
08769a55 +0x04e5:  adc    %edx,-0xe4(%ebp)
08769a5b +0x04eb:  mov    -0x58(%ebp),%edx
08769a5e +0x04ee:  mov    %edx,%eax
08769a60 +0x04f0:  shrd   $0x13,%ecx,%edx
08769a64 +0x04f4:  shrd   $0x13,%eax,%ecx
08769a68 +0x04f8:  mov    %edx,-0x130(%ebp)
08769a6e +0x04fe:  mov    -0x58(%ebp),%edx
08769a71 +0x0501:  mov    %ecx,-0x12c(%ebp)
08769a77 +0x0507:  mov    -0x54(%ebp),%ecx
08769a7a +0x050a:  mov    -0x12c(%ebp),%eax
08769a80 +0x0510:  shrd   $0x6,%ecx,%edx
08769a84 +0x0514:  shr    $0x6,%ecx
08769a87 +0x0517:  mov    %ecx,-0x13c(%ebp)
08769a8d +0x051d:  mov    -0x130(%ebp),%ecx
08769a93 +0x0523:  xor    -0x13c(%ebp),%eax
08769a99 +0x0529:  mov    %eax,-0x118(%ebp)
08769a9f +0x052f:  mov    -0x58(%ebp),%eax
08769aa2 +0x0532:  xor    %edx,%ecx
08769aa4 +0x0534:  mov    -0x54(%ebp),%edx
08769aa7 +0x0537:  mov    %ecx,-0x44c(%ebp)
08769aad +0x053d:  mov    %eax,%ecx
08769aaf +0x053f:  shld   $0x3,%edx,%eax
08769ab3 +0x0543:  shld   $0x3,%ecx,%edx
08769ab7 +0x0547:  mov    -0x44c(%ebp),%ecx
08769abd +0x054d:  xor    %eax,%ecx
08769abf +0x054f:  mov    %ecx,-0x360(%ebp)
08769ac5 +0x0555:  mov    -0x118(%ebp),%ecx
08769acb +0x055b:  mov    -0x360(%ebp),%eax
08769ad1 +0x0561:  xor    %edx,%ecx
08769ad3 +0x0563:  mov    %ecx,-0x35c(%ebp)
08769ad9 +0x0569:  mov    -0x35c(%ebp),%edx
08769adf +0x056f:  add    %eax,-0xe8(%ebp)
08769ae5 +0x0575:  adc    %edx,-0xe4(%ebp)
08769aeb +0x057b:  mov    -0xc0(%ebp),%edx
08769af1 +0x0581:  mov    -0xbc(%ebp),%ecx
08769af7 +0x0587:  mov    %edx,%eax
08769af9 +0x0589:  shrd   $0x1,%ecx,%edx
08769afd +0x058d:  shrd   $0x1,%eax,%ecx
08769b01 +0x0591:  mov    -0xc0(%ebp),%eax
08769b07 +0x0597:  mov    %edx,-0x118(%ebp)
08769b0d +0x059d:  mov    -0xc0(%ebp),%edx
08769b13 +0x05a3:  mov    %ecx,-0x114(%ebp)
08769b19 +0x05a9:  mov    -0xbc(%ebp),%ecx
08769b1f +0x05af:  shrd   $0x7,%ecx,%edx
08769b23 +0x05b3:  mov    %edx,-0x130(%ebp)
08769b29 +0x05b9:  shr    $0x7,%ecx
08769b2c +0x05bc:  xor    -0x118(%ebp),%edx
08769b32 +0x05c2:  mov    %ecx,-0x12c(%ebp)
08769b38 +0x05c8:  xor    -0x114(%ebp),%ecx
08769b3e +0x05ce:  mov    %edx,-0x140(%ebp)
08769b44 +0x05d4:  mov    -0xbc(%ebp),%edx
08769b4a +0x05da:  mov    %ecx,-0x118(%ebp)
08769b50 +0x05e0:  mov    %eax,%ecx
08769b52 +0x05e2:  shrd   $0x8,%edx,%eax
08769b56 +0x05e6:  shrd   $0x8,%ecx,%edx
08769b5a +0x05ea:  mov    -0x140(%ebp),%ecx
08769b60 +0x05f0:  xor    %eax,%ecx
08769b62 +0x05f2:  mov    %ecx,-0x368(%ebp)
08769b68 +0x05f8:  mov    -0x118(%ebp),%ecx
08769b6e +0x05fe:  mov    -0x368(%ebp),%eax
08769b74 +0x0604:  xor    %edx,%ecx
08769b76 +0x0606:  mov    %ecx,-0x364(%ebp)
08769b7c +0x060c:  mov    -0x364(%ebp),%edx
08769b82 +0x0612:  add    %eax,-0xe8(%ebp)
08769b88 +0x0618:  adc    %edx,-0xe4(%ebp)
08769b8e +0x061e:  mov    -0xe4(%ebp),%ecx
08769b94 +0x0624:  mov    -0xe8(%ebp),%edx
08769b9a +0x062a:  mov    %ecx,-0xc4(%ebp)
08769ba0 +0x0630:  mov    %edx,-0xc8(%ebp)
08769ba6 +0x0636:  mov    -0x128(%ebp),%eax
08769bac +0x063c:  mov    -0x124(%ebp),%edx
08769bb2 +0x0642:  mov    -0xe0(%ebp),%ecx
08769bb8 +0x0648:  add    %esi,%eax
08769bba +0x064a:  mov    -0xf0(%ebp),%esi
08769bc0 +0x0650:  adc    %edi,%edx
08769bc2 +0x0652:  mov    -0x10c(%ebp),%edi
08769bc8 +0x0658:  xor    -0xf8(%ebp),%esi
08769bce +0x065e:  and    -0x10c(%ebp),%esi
08769bd4 +0x0664:  xor    -0xf0(%ebp),%esi
08769bda +0x066a:  xor    -0x100(%ebp),%ecx
08769be0 +0x0670:  and    -0x110(%ebp),%ecx
08769be6 +0x0676:  mov    %esi,-0x16c(%ebp)
08769bec +0x067c:  mov    -0x110(%ebp),%esi
08769bf2 +0x0682:  xor    -0xe0(%ebp),%ecx
08769bf8 +0x0688:  mov    %ecx,-0x170(%ebp)
08769bfe +0x068e:  mov    %esi,%ecx
08769c00 +0x0690:  add    -0x170(%ebp),%eax
08769c06 +0x0696:  adc    -0x16c(%ebp),%edx
08769c0c +0x069c:  shrd   $0x12,%edi,%esi
08769c10 +0x06a0:  mov    %esi,-0x118(%ebp)
08769c16 +0x06a6:  shrd   $0x12,%ecx,%edi
08769c1a +0x06aa:  mov    -0x110(%ebp),%esi
08769c20 +0x06b0:  mov    %edi,-0x114(%ebp)
08769c26 +0x06b6:  mov    -0x10c(%ebp),%edi
08769c2c +0x06bc:  mov    %esi,%ecx
08769c2e +0x06be:  shrd   $0xe,%edi,%esi
08769c32 +0x06c2:  shrd   $0xe,%ecx,%edi
08769c36 +0x06c6:  xor    -0x118(%ebp),%esi
08769c3c +0x06cc:  mov    %edi,-0xdc(%ebp)
08769c42 +0x06d2:  xor    -0x114(%ebp),%edi
08769c48 +0x06d8:  mov    %esi,-0xf0(%ebp)
08769c4e +0x06de:  mov    -0x110(%ebp),%esi
08769c54 +0x06e4:  mov    %edi,-0xe0(%ebp)
08769c5a +0x06ea:  mov    -0x10c(%ebp),%edi
08769c60 +0x06f0:  mov    %esi,%ecx
08769c62 +0x06f2:  shld   $0x17,%edi,%esi
08769c66 +0x06f6:  shld   $0x17,%ecx,%edi
08769c6a +0x06fa:  mov    -0xf0(%ebp),%ecx
08769c70 +0x0700:  xor    %esi,%ecx
08769c72 +0x0702:  mov    %ecx,-0x178(%ebp)
08769c78 +0x0708:  mov    -0xe0(%ebp),%ecx
08769c7e +0x070e:  xor    %edi,%ecx
08769c80 +0x0710:  mov    %ecx,-0x174(%ebp)
08769c86 +0x0716:  add    -0x178(%ebp),%eax
08769c8c +0x071c:  adc    -0x174(%ebp),%edx
08769c92 +0x0722:  add    -0xe8(%ebp),%eax
08769c98 +0x0728:  adc    -0xe4(%ebp),%edx
08769c9e +0x072e:  mov    %eax,%esi
08769ca0 +0x0730:  mov    %edx,%edi
08769ca2 +0x0732:  add    -0x40(%ebp),%esi
08769ca5 +0x0735:  adc    -0x3c(%ebp),%edi
08769ca8 +0x0738:  mov    %esi,-0xf0(%ebp)
08769cae +0x073e:  mov    -0x108(%ebp),%esi
08769cb4 +0x0744:  mov    %edi,-0xec(%ebp)
08769cba +0x074a:  mov    -0x50(%ebp),%edi
08769cbd +0x074d:  mov    -0x104(%ebp),%ecx
08769cc3 +0x0753:  or     -0x4c(%ebp),%ecx
08769cc6 +0x0756:  and    -0x44(%ebp),%ecx
08769cc9 +0x0759:  or     %edi,%esi
08769ccb +0x075b:  and    -0x108(%ebp),%edi
08769cd1 +0x0761:  and    -0x48(%ebp),%esi
08769cd4 +0x0764:  mov    %edi,-0xe0(%ebp)
08769cda +0x076a:  mov    -0x104(%ebp),%edi
08769ce0 +0x0770:  or     -0xe0(%ebp),%esi
08769ce6 +0x0776:  and    -0x4c(%ebp),%edi
08769ce9 +0x0779:  mov    %esi,-0x180(%ebp)
08769cef +0x077f:  mov    -0x108(%ebp),%esi
08769cf5 +0x0785:  or     %edi,%ecx
08769cf7 +0x0787:  mov    -0x104(%ebp),%edi
08769cfd +0x078d:  mov    %ecx,-0x17c(%ebp)
08769d03 +0x0793:  mov    %esi,%ecx
08769d05 +0x0795:  shld   $0x1e,%edi,%esi
08769d09 +0x0799:  shld   $0x1e,%ecx,%edi
08769d0d +0x079d:  mov    %esi,-0x118(%ebp)
08769d13 +0x07a3:  mov    -0x108(%ebp),%esi
08769d19 +0x07a9:  mov    %edi,-0x114(%ebp)
08769d1f +0x07af:  mov    -0x104(%ebp),%edi
08769d25 +0x07b5:  mov    %esi,%ecx
08769d27 +0x07b7:  shrd   $0x1c,%edi,%esi
08769d2b +0x07bb:  xor    -0x118(%ebp),%esi
08769d31 +0x07c1:  shrd   $0x1c,%ecx,%edi
08769d35 +0x07c5:  xor    -0x114(%ebp),%edi
08769d3b +0x07cb:  mov    %esi,-0xe0(%ebp)
08769d41 +0x07d1:  mov    -0x108(%ebp),%esi
08769d47 +0x07d7:  mov    %edi,-0xe8(%ebp)
08769d4d +0x07dd:  mov    -0x104(%ebp),%edi
08769d53 +0x07e3:  mov    %esi,%ecx
08769d55 +0x07e5:  shld   $0x19,%edi,%esi
08769d59 +0x07e9:  shld   $0x19,%ecx,%edi
08769d5d +0x07ed:  mov    -0xe0(%ebp),%ecx
08769d63 +0x07f3:  xor    %esi,%ecx
08769d65 +0x07f5:  mov    -0x180(%ebp),%esi
08769d6b +0x07fb:  mov    %ecx,-0x188(%ebp)
08769d71 +0x0801:  mov    -0xe8(%ebp),%ecx
08769d77 +0x0807:  xor    %edi,%ecx
08769d79 +0x0809:  mov    -0x17c(%ebp),%edi
08769d7f +0x080f:  add    -0x188(%ebp),%esi
08769d85 +0x0815:  mov    %ecx,-0x184(%ebp)
08769d8b +0x081b:  adc    -0x184(%ebp),%edi
08769d91 +0x0821:  mov    %esi,-0xe8(%ebp)
08769d97 +0x0827:  add    %eax,-0xe8(%ebp)
08769d9d +0x082d:  mov    -0x138(%ebp),%eax
08769da3 +0x0833:  mov    %edi,-0xe4(%ebp)
08769da9 +0x0839:  adc    %edx,-0xe4(%ebp)
08769daf +0x083f:  mov    -0x134(%ebp),%edx
08769db5 +0x0845:  mov    0x10(%eax),%esi
08769db8 +0x0848:  mov    0x14(%eax),%edi
08769dbb +0x084b:  test   %edx,%edx
08769dbd +0x084d:  je     0876d390 <+0x3e20>
08769dc3 +0x0853:  mov    -0x78(%ebp),%edx
08769dc6 +0x0856:  mov    -0x74(%ebp),%ecx
08769dc9 +0x0859:  mov    -0xc0(%ebp),%eax
08769dcf +0x085f:  mov    %edx,-0xe0(%ebp)
08769dd5 +0x0865:  mov    -0xbc(%ebp),%edx
08769ddb +0x086b:  add    %eax,-0xe0(%ebp)
08769de1 +0x0871:  mov    %ecx,-0xdc(%ebp)
08769de7 +0x0877:  mov    -0xcc(%ebp),%ecx
08769ded +0x087d:  adc    %edx,-0xdc(%ebp)
08769df3 +0x0883:  mov    -0xd0(%ebp),%edx
08769df9 +0x0889:  mov    %edx,%eax
08769dfb +0x088b:  shrd   $0x13,%ecx,%edx
08769dff +0x088f:  shrd   $0x13,%eax,%ecx
08769e03 +0x0893:  mov    %edx,-0x128(%ebp)
08769e09 +0x0899:  mov    -0xd0(%ebp),%edx
08769e0f +0x089f:  mov    %ecx,-0x124(%ebp)
08769e15 +0x08a5:  mov    -0xcc(%ebp),%ecx
08769e1b +0x08ab:  mov    -0x124(%ebp),%eax
08769e21 +0x08b1:  shrd   $0x6,%ecx,%edx
08769e25 +0x08b5:  shr    $0x6,%ecx
08769e28 +0x08b8:  mov    %ecx,-0x12c(%ebp)
08769e2e +0x08be:  mov    -0x128(%ebp),%ecx
08769e34 +0x08c4:  xor    -0x12c(%ebp),%eax
08769e3a +0x08ca:  mov    %eax,-0x118(%ebp)
08769e40 +0x08d0:  mov    -0xd0(%ebp),%eax
08769e46 +0x08d6:  xor    %edx,%ecx
08769e48 +0x08d8:  mov    -0xcc(%ebp),%edx
08769e4e +0x08de:  mov    %ecx,-0x140(%ebp)
08769e54 +0x08e4:  mov    %eax,%ecx
08769e56 +0x08e6:  shld   $0x3,%edx,%eax
08769e5a +0x08ea:  shld   $0x3,%ecx,%edx
08769e5e +0x08ee:  mov    -0x140(%ebp),%ecx
08769e64 +0x08f4:  xor    %eax,%ecx
08769e66 +0x08f6:  mov    %ecx,-0x370(%ebp)
08769e6c +0x08fc:  mov    -0x118(%ebp),%ecx
08769e72 +0x0902:  mov    -0x370(%ebp),%eax
08769e78 +0x0908:  xor    %edx,%ecx
08769e7a +0x090a:  mov    %ecx,-0x36c(%ebp)
08769e80 +0x0910:  mov    -0x36c(%ebp),%edx
08769e86 +0x0916:  add    %eax,-0xe0(%ebp)
08769e8c +0x091c:  adc    %edx,-0xdc(%ebp)
08769e92 +0x0922:  mov    -0xb8(%ebp),%edx
08769e98 +0x0928:  mov    -0xb4(%ebp),%ecx
08769e9e +0x092e:  mov    %edx,%eax
08769ea0 +0x0930:  shrd   $0x1,%ecx,%edx
08769ea4 +0x0934:  shrd   $0x1,%eax,%ecx
08769ea8 +0x0938:  mov    -0xb8(%ebp),%eax
08769eae +0x093e:  mov    %edx,-0x118(%ebp)
08769eb4 +0x0944:  mov    -0xb8(%ebp),%edx
08769eba +0x094a:  mov    %ecx,-0x114(%ebp)
08769ec0 +0x0950:  mov    -0xb4(%ebp),%ecx
08769ec6 +0x0956:  shrd   $0x7,%ecx,%edx
08769eca +0x095a:  mov    %edx,-0x128(%ebp)
08769ed0 +0x0960:  shr    $0x7,%ecx
08769ed3 +0x0963:  xor    -0x118(%ebp),%edx
08769ed9 +0x0969:  mov    %ecx,-0x124(%ebp)
08769edf +0x096f:  xor    -0x114(%ebp),%ecx
08769ee5 +0x0975:  mov    %edx,-0x130(%ebp)
08769eeb +0x097b:  mov    -0xb4(%ebp),%edx
08769ef1 +0x0981:  mov    %ecx,-0x118(%ebp)
08769ef7 +0x0987:  mov    %eax,%ecx
08769ef9 +0x0989:  shrd   $0x8,%edx,%eax
08769efd +0x098d:  shrd   $0x8,%ecx,%edx
08769f01 +0x0991:  mov    -0x130(%ebp),%ecx
08769f07 +0x0997:  xor    %eax,%ecx
08769f09 +0x0999:  mov    %ecx,-0x378(%ebp)
08769f0f +0x099f:  mov    -0x118(%ebp),%ecx
08769f15 +0x09a5:  mov    -0x378(%ebp),%eax
08769f1b +0x09ab:  xor    %edx,%ecx
08769f1d +0x09ad:  mov    %ecx,-0x374(%ebp)
08769f23 +0x09b3:  mov    -0x374(%ebp),%edx
08769f29 +0x09b9:  add    %eax,-0xe0(%ebp)
08769f2f +0x09bf:  adc    %edx,-0xdc(%ebp)
08769f35 +0x09c5:  mov    -0xdc(%ebp),%ecx
08769f3b +0x09cb:  mov    -0xe0(%ebp),%edx
08769f41 +0x09d1:  mov    %ecx,-0xbc(%ebp)
08769f47 +0x09d7:  mov    %edx,-0xc0(%ebp)
08769f4d +0x09dd:  mov    -0x120(%ebp),%eax
08769f53 +0x09e3:  mov    -0x11c(%ebp),%edx
08769f59 +0x09e9:  mov    -0x100(%ebp),%ecx
08769f5f +0x09ef:  add    %esi,%eax
08769f61 +0x09f1:  mov    -0xf8(%ebp),%esi
08769f67 +0x09f7:  adc    %edi,%edx
08769f69 +0x09f9:  mov    -0xec(%ebp),%edi
08769f6f +0x09ff:  xor    -0x10c(%ebp),%esi
08769f75 +0x0a05:  and    -0xec(%ebp),%esi
08769f7b +0x0a0b:  xor    -0xf8(%ebp),%esi
08769f81 +0x0a11:  xor    -0x110(%ebp),%ecx
08769f87 +0x0a17:  and    -0xf0(%ebp),%ecx
08769f8d +0x0a1d:  mov    %esi,-0x18c(%ebp)
08769f93 +0x0a23:  mov    -0xf0(%ebp),%esi
08769f99 +0x0a29:  xor    -0x100(%ebp),%ecx
08769f9f +0x0a2f:  mov    %ecx,-0x190(%ebp)
08769fa5 +0x0a35:  mov    %esi,%ecx
08769fa7 +0x0a37:  add    -0x190(%ebp),%eax
08769fad +0x0a3d:  adc    -0x18c(%ebp),%edx
08769fb3 +0x0a43:  shrd   $0x12,%edi,%esi
08769fb7 +0x0a47:  shrd   $0x12,%ecx,%edi
08769fbb +0x0a4b:  mov    %esi,-0x118(%ebp)
08769fc1 +0x0a51:  mov    -0xf0(%ebp),%esi
08769fc7 +0x0a57:  mov    %edi,-0x114(%ebp)
08769fcd +0x0a5d:  mov    -0xec(%ebp),%edi
08769fd3 +0x0a63:  mov    %esi,%ecx
08769fd5 +0x0a65:  shrd   $0xe,%edi,%esi
08769fd9 +0x0a69:  xor    -0x118(%ebp),%esi
08769fdf +0x0a6f:  shrd   $0xe,%ecx,%edi
08769fe3 +0x0a73:  xor    -0x114(%ebp),%edi
08769fe9 +0x0a79:  mov    %esi,-0xf8(%ebp)
08769fef +0x0a7f:  mov    -0xf0(%ebp),%esi
08769ff5 +0x0a85:  mov    %edi,-0x100(%ebp)
08769ffb +0x0a8b:  mov    -0xec(%ebp),%edi
0876a001 +0x0a91:  mov    %esi,%ecx
0876a003 +0x0a93:  shld   $0x17,%edi,%esi
0876a007 +0x0a97:  shld   $0x17,%ecx,%edi
0876a00b +0x0a9b:  mov    -0xf8(%ebp),%ecx
0876a011 +0x0aa1:  xor    %esi,%ecx
0876a013 +0x0aa3:  mov    %ecx,-0x198(%ebp)
0876a019 +0x0aa9:  mov    -0x100(%ebp),%ecx
0876a01f +0x0aaf:  xor    %edi,%ecx
0876a021 +0x0ab1:  mov    %ecx,-0x194(%ebp)
0876a027 +0x0ab7:  add    -0x198(%ebp),%eax
0876a02d +0x0abd:  adc    -0x194(%ebp),%edx
0876a033 +0x0ac3:  add    -0xe0(%ebp),%eax
0876a039 +0x0ac9:  adc    -0xdc(%ebp),%edx
0876a03f +0x0acf:  mov    %eax,%esi
0876a041 +0x0ad1:  mov    %edx,%edi
0876a043 +0x0ad3:  add    -0x48(%ebp),%esi
0876a046 +0x0ad6:  adc    -0x44(%ebp),%edi
0876a049 +0x0ad9:  mov    %esi,-0x100(%ebp)
0876a04f +0x0adf:  mov    -0xe8(%ebp),%esi
0876a055 +0x0ae5:  mov    %edi,-0xfc(%ebp)
0876a05b +0x0aeb:  mov    -0xe8(%ebp),%edi
0876a061 +0x0af1:  and    -0x108(%ebp),%edi
0876a067 +0x0af7:  mov    -0xe4(%ebp),%ecx
0876a06d +0x0afd:  or     -0x108(%ebp),%esi
0876a073 +0x0b03:  mov    %edi,-0xf8(%ebp)
0876a079 +0x0b09:  mov    -0xe4(%ebp),%edi
0876a07f +0x0b0f:  and    -0x104(%ebp),%edi
0876a085 +0x0b15:  or     -0x104(%ebp),%ecx
0876a08b +0x0b1b:  and    -0x50(%ebp),%esi
0876a08e +0x0b1e:  and    -0x4c(%ebp),%ecx
0876a091 +0x0b21:  or     -0xf8(%ebp),%esi
0876a097 +0x0b27:  or     %edi,%ecx
0876a099 +0x0b29:  mov    -0xe4(%ebp),%edi
0876a09f +0x0b2f:  mov    %esi,-0x1a0(%ebp)
0876a0a5 +0x0b35:  mov    -0xe8(%ebp),%esi
0876a0ab +0x0b3b:  mov    %ecx,-0x19c(%ebp)
0876a0b1 +0x0b41:  mov    %esi,%ecx
0876a0b3 +0x0b43:  shld   $0x1e,%edi,%esi
0876a0b7 +0x0b47:  mov    %esi,-0x118(%ebp)
0876a0bd +0x0b4d:  shld   $0x1e,%ecx,%edi
0876a0c1 +0x0b51:  mov    -0xe8(%ebp),%esi
0876a0c7 +0x0b57:  mov    %edi,-0x114(%ebp)
0876a0cd +0x0b5d:  mov    -0xe4(%ebp),%edi
0876a0d3 +0x0b63:  mov    %esi,%ecx
0876a0d5 +0x0b65:  shrd   $0x1c,%edi,%esi
0876a0d9 +0x0b69:  shrd   $0x1c,%ecx,%edi
0876a0dd +0x0b6d:  xor    -0x118(%ebp),%esi
0876a0e3 +0x0b73:  mov    %edi,-0xdc(%ebp)
0876a0e9 +0x0b79:  xor    -0x114(%ebp),%edi
0876a0ef +0x0b7f:  mov    %esi,-0xf8(%ebp)
0876a0f5 +0x0b85:  mov    -0xe8(%ebp),%esi
0876a0fb +0x0b8b:  mov    %edi,-0xe0(%ebp)
0876a101 +0x0b91:  mov    -0xe4(%ebp),%edi
0876a107 +0x0b97:  mov    %esi,%ecx
0876a109 +0x0b99:  shld   $0x19,%edi,%esi
0876a10d +0x0b9d:  shld   $0x19,%ecx,%edi
0876a111 +0x0ba1:  mov    -0xf8(%ebp),%ecx
0876a117 +0x0ba7:  xor    %esi,%ecx
0876a119 +0x0ba9:  mov    -0x1a0(%ebp),%esi
0876a11f +0x0baf:  mov    %ecx,-0x1a8(%ebp)
0876a125 +0x0bb5:  mov    -0xe0(%ebp),%ecx
0876a12b +0x0bbb:  xor    %edi,%ecx
0876a12d +0x0bbd:  mov    -0x19c(%ebp),%edi
0876a133 +0x0bc3:  add    -0x1a8(%ebp),%esi
0876a139 +0x0bc9:  mov    %ecx,-0x1a4(%ebp)
0876a13f +0x0bcf:  adc    -0x1a4(%ebp),%edi
0876a145 +0x0bd5:  mov    %esi,-0x118(%ebp)
0876a14b +0x0bdb:  add    %eax,-0x118(%ebp)
0876a151 +0x0be1:  mov    -0x138(%ebp),%eax
0876a157 +0x0be7:  mov    %edi,-0x114(%ebp)
0876a15d +0x0bed:  adc    %edx,-0x114(%ebp)
0876a163 +0x0bf3:  mov    -0x134(%ebp),%edx
0876a169 +0x0bf9:  mov    0x18(%eax),%esi
0876a16c +0x0bfc:  mov    0x1c(%eax),%edi
0876a16f +0x0bff:  test   %edx,%edx
0876a171 +0x0c01:  je     0876d360 <+0x3df0>
0876a177 +0x0c07:  mov    -0x70(%ebp),%edx
0876a17a +0x0c0a:  mov    -0x6c(%ebp),%ecx
0876a17d +0x0c0d:  mov    -0xb8(%ebp),%eax
0876a183 +0x0c13:  mov    %edx,-0xe0(%ebp)
0876a189 +0x0c19:  mov    -0xb4(%ebp),%edx
0876a18f +0x0c1f:  add    %eax,-0xe0(%ebp)
0876a195 +0x0c25:  mov    %ecx,-0xdc(%ebp)
0876a19b +0x0c2b:  mov    -0xc4(%ebp),%ecx
0876a1a1 +0x0c31:  adc    %edx,-0xdc(%ebp)
0876a1a7 +0x0c37:  mov    -0xc8(%ebp),%edx
0876a1ad +0x0c3d:  mov    %edx,%eax
0876a1af +0x0c3f:  shrd   $0x13,%ecx,%edx
0876a1b3 +0x0c43:  shrd   $0x13,%eax,%ecx
0876a1b7 +0x0c47:  mov    %edx,-0x120(%ebp)
0876a1bd +0x0c4d:  mov    -0xc8(%ebp),%edx
0876a1c3 +0x0c53:  mov    %ecx,-0x11c(%ebp)
0876a1c9 +0x0c59:  mov    -0xc4(%ebp),%ecx
0876a1cf +0x0c5f:  mov    -0x11c(%ebp),%eax
0876a1d5 +0x0c65:  shrd   $0x6,%ecx,%edx
0876a1d9 +0x0c69:  shr    $0x6,%ecx
0876a1dc +0x0c6c:  mov    %ecx,-0x124(%ebp)
0876a1e2 +0x0c72:  mov    -0x120(%ebp),%ecx
0876a1e8 +0x0c78:  xor    -0x124(%ebp),%eax
0876a1ee +0x0c7e:  mov    %eax,-0xf8(%ebp)
0876a1f4 +0x0c84:  mov    -0xc8(%ebp),%eax
0876a1fa +0x0c8a:  xor    %edx,%ecx
0876a1fc +0x0c8c:  mov    -0xc4(%ebp),%edx
0876a202 +0x0c92:  mov    %ecx,-0x130(%ebp)
0876a208 +0x0c98:  mov    %eax,%ecx
0876a20a +0x0c9a:  shld   $0x3,%edx,%eax
0876a20e +0x0c9e:  shld   $0x3,%ecx,%edx
0876a212 +0x0ca2:  mov    -0x130(%ebp),%ecx
0876a218 +0x0ca8:  xor    %eax,%ecx
0876a21a +0x0caa:  mov    %ecx,-0x380(%ebp)
0876a220 +0x0cb0:  mov    -0xf8(%ebp),%ecx
0876a226 +0x0cb6:  mov    -0x380(%ebp),%eax
0876a22c +0x0cbc:  xor    %edx,%ecx
0876a22e +0x0cbe:  mov    %ecx,-0x37c(%ebp)
0876a234 +0x0cc4:  mov    -0x37c(%ebp),%edx
0876a23a +0x0cca:  add    %eax,-0xe0(%ebp)
0876a240 +0x0cd0:  adc    %edx,-0xdc(%ebp)
0876a246 +0x0cd6:  mov    -0xb0(%ebp),%edx
0876a24c +0x0cdc:  mov    -0xac(%ebp),%ecx
0876a252 +0x0ce2:  mov    %edx,%eax
0876a254 +0x0ce4:  shrd   $0x1,%ecx,%edx
0876a258 +0x0ce8:  shrd   $0x1,%eax,%ecx
0876a25c +0x0cec:  mov    -0xb0(%ebp),%eax
0876a262 +0x0cf2:  mov    %edx,-0xf8(%ebp)
0876a268 +0x0cf8:  mov    -0xb0(%ebp),%edx
0876a26e +0x0cfe:  mov    %ecx,-0xf4(%ebp)
0876a274 +0x0d04:  mov    -0xac(%ebp),%ecx
0876a27a +0x0d0a:  shrd   $0x7,%ecx,%edx
0876a27e +0x0d0e:  xor    -0xf8(%ebp),%edx
0876a284 +0x0d14:  shr    $0x7,%ecx
0876a287 +0x0d17:  xor    -0xf4(%ebp),%ecx
0876a28d +0x0d1d:  mov    %edx,-0x128(%ebp)
0876a293 +0x0d23:  mov    -0xac(%ebp),%edx
0876a299 +0x0d29:  mov    %ecx,-0xf8(%ebp)
0876a29f +0x0d2f:  mov    %eax,%ecx
0876a2a1 +0x0d31:  shrd   $0x8,%edx,%eax
0876a2a5 +0x0d35:  shrd   $0x8,%ecx,%edx
0876a2a9 +0x0d39:  mov    -0x128(%ebp),%ecx
0876a2af +0x0d3f:  xor    %eax,%ecx
0876a2b1 +0x0d41:  mov    %ecx,-0x388(%ebp)
0876a2b7 +0x0d47:  mov    -0xf8(%ebp),%ecx
0876a2bd +0x0d4d:  mov    -0x388(%ebp),%eax
0876a2c3 +0x0d53:  xor    %edx,%ecx
0876a2c5 +0x0d55:  mov    %ecx,-0x384(%ebp)
0876a2cb +0x0d5b:  mov    -0x384(%ebp),%edx
0876a2d1 +0x0d61:  add    %eax,-0xe0(%ebp)
0876a2d7 +0x0d67:  adc    %edx,-0xdc(%ebp)
0876a2dd +0x0d6d:  mov    -0xdc(%ebp),%ecx
0876a2e3 +0x0d73:  mov    -0xe0(%ebp),%edx
0876a2e9 +0x0d79:  mov    %ecx,-0xb4(%ebp)
0876a2ef +0x0d7f:  mov    %edx,-0xb8(%ebp)
0876a2f5 +0x0d85:  mov    -0xd8(%ebp),%eax
0876a2fb +0x0d8b:  mov    -0xd4(%ebp),%edx
0876a301 +0x0d91:  mov    -0xf0(%ebp),%ecx
0876a307 +0x0d97:  add    %esi,%eax
0876a309 +0x0d99:  mov    -0xec(%ebp),%esi
0876a30f +0x0d9f:  adc    %edi,%edx
0876a311 +0x0da1:  mov    -0xfc(%ebp),%edi
0876a317 +0x0da7:  xor    -0x10c(%ebp),%esi
0876a31d +0x0dad:  and    -0xfc(%ebp),%esi
0876a323 +0x0db3:  xor    -0x10c(%ebp),%esi
0876a329 +0x0db9:  xor    -0x110(%ebp),%ecx
0876a32f +0x0dbf:  and    -0x100(%ebp),%ecx
0876a335 +0x0dc5:  mov    %esi,-0x1ac(%ebp)
0876a33b +0x0dcb:  mov    -0x100(%ebp),%esi
0876a341 +0x0dd1:  xor    -0x110(%ebp),%ecx
0876a347 +0x0dd7:  mov    %ecx,-0x1b0(%ebp)
0876a34d +0x0ddd:  mov    %esi,%ecx
0876a34f +0x0ddf:  add    -0x1b0(%ebp),%eax
0876a355 +0x0de5:  adc    -0x1ac(%ebp),%edx
0876a35b +0x0deb:  shrd   $0x12,%edi,%esi
0876a35f +0x0def:  shrd   $0x12,%ecx,%edi
0876a363 +0x0df3:  mov    %esi,-0x120(%ebp)
0876a369 +0x0df9:  mov    -0x100(%ebp),%esi
0876a36f +0x0dff:  mov    %edi,-0x11c(%ebp)
0876a375 +0x0e05:  mov    -0xfc(%ebp),%edi
0876a37b +0x0e0b:  mov    %esi,%ecx
0876a37d +0x0e0d:  shrd   $0xe,%edi,%esi
0876a381 +0x0e11:  xor    -0x120(%ebp),%esi
0876a387 +0x0e17:  shrd   $0xe,%ecx,%edi
0876a38b +0x0e1b:  xor    -0x11c(%ebp),%edi
0876a391 +0x0e21:  mov    %esi,-0xd8(%ebp)
0876a397 +0x0e27:  mov    -0x100(%ebp),%esi
0876a39d +0x0e2d:  mov    %edi,-0xf8(%ebp)
0876a3a3 +0x0e33:  mov    -0xfc(%ebp),%edi
0876a3a9 +0x0e39:  mov    %esi,%ecx
0876a3ab +0x0e3b:  shld   $0x17,%edi,%esi
0876a3af +0x0e3f:  shld   $0x17,%ecx,%edi
0876a3b3 +0x0e43:  mov    -0xd8(%ebp),%ecx
0876a3b9 +0x0e49:  xor    %esi,%ecx
0876a3bb +0x0e4b:  mov    %ecx,-0x1b8(%ebp)
0876a3c1 +0x0e51:  mov    -0xf8(%ebp),%ecx
0876a3c7 +0x0e57:  xor    %edi,%ecx
0876a3c9 +0x0e59:  mov    %ecx,-0x1b4(%ebp)
0876a3cf +0x0e5f:  add    -0x1b8(%ebp),%eax
0876a3d5 +0x0e65:  adc    -0x1b4(%ebp),%edx
0876a3db +0x0e6b:  add    -0xe0(%ebp),%eax
0876a3e1 +0x0e71:  adc    -0xdc(%ebp),%edx
0876a3e7 +0x0e77:  mov    %eax,%esi
0876a3e9 +0x0e79:  mov    %edx,%edi
0876a3eb +0x0e7b:  add    -0x50(%ebp),%esi
0876a3ee +0x0e7e:  adc    -0x4c(%ebp),%edi
0876a3f1 +0x0e81:  mov    %esi,-0xe0(%ebp)
0876a3f7 +0x0e87:  mov    -0x118(%ebp),%esi
0876a3fd +0x0e8d:  mov    %edi,-0xdc(%ebp)
0876a403 +0x0e93:  mov    -0x118(%ebp),%edi
0876a409 +0x0e99:  and    -0xe8(%ebp),%edi
0876a40f +0x0e9f:  or     -0xe8(%ebp),%esi
0876a415 +0x0ea5:  mov    -0x114(%ebp),%ecx
0876a41b +0x0eab:  mov    %edi,-0xd8(%ebp)
0876a421 +0x0eb1:  mov    -0x114(%ebp),%edi
0876a427 +0x0eb7:  and    -0x108(%ebp),%esi
0876a42d +0x0ebd:  or     -0xd8(%ebp),%esi
0876a433 +0x0ec3:  and    -0xe4(%ebp),%edi
0876a439 +0x0ec9:  or     -0xe4(%ebp),%ecx
0876a43f +0x0ecf:  and    -0x104(%ebp),%ecx
0876a445 +0x0ed5:  mov    %esi,-0x1c0(%ebp)
0876a44b +0x0edb:  mov    -0x118(%ebp),%esi
0876a451 +0x0ee1:  or     %edi,%ecx
0876a453 +0x0ee3:  mov    -0x114(%ebp),%edi
0876a459 +0x0ee9:  mov    %ecx,-0x1bc(%ebp)
0876a45f +0x0eef:  mov    %esi,%ecx
0876a461 +0x0ef1:  shld   $0x1e,%edi,%esi
0876a465 +0x0ef5:  shld   $0x1e,%ecx,%edi
0876a469 +0x0ef9:  mov    %esi,-0x120(%ebp)
0876a46f +0x0eff:  mov    -0x118(%ebp),%esi
0876a475 +0x0f05:  mov    %edi,-0x11c(%ebp)
0876a47b +0x0f0b:  mov    -0x114(%ebp),%edi
0876a481 +0x0f11:  mov    %esi,%ecx
0876a483 +0x0f13:  shrd   $0x1c,%edi,%esi
0876a487 +0x0f17:  xor    -0x120(%ebp),%esi
0876a48d +0x0f1d:  shrd   $0x1c,%ecx,%edi
0876a491 +0x0f21:  xor    -0x11c(%ebp),%edi
0876a497 +0x0f27:  mov    %esi,-0xd8(%ebp)
0876a49d +0x0f2d:  mov    -0x118(%ebp),%esi
0876a4a3 +0x0f33:  mov    %edi,-0xf8(%ebp)
0876a4a9 +0x0f39:  mov    -0x114(%ebp),%edi
0876a4af +0x0f3f:  mov    %esi,%ecx
0876a4b1 +0x0f41:  shld   $0x19,%edi,%esi
0876a4b5 +0x0f45:  shld   $0x19,%ecx,%edi
0876a4b9 +0x0f49:  mov    -0xd8(%ebp),%ecx
0876a4bf +0x0f4f:  xor    %esi,%ecx
0876a4c1 +0x0f51:  mov    -0x1c0(%ebp),%esi
0876a4c7 +0x0f57:  mov    %ecx,-0x1c8(%ebp)
0876a4cd +0x0f5d:  mov    -0xf8(%ebp),%ecx
0876a4d3 +0x0f63:  xor    %edi,%ecx
0876a4d5 +0x0f65:  mov    -0x1bc(%ebp),%edi
0876a4db +0x0f6b:  add    -0x1c8(%ebp),%esi
0876a4e1 +0x0f71:  mov    %ecx,-0x1c4(%ebp)
0876a4e7 +0x0f77:  adc    -0x1c4(%ebp),%edi
0876a4ed +0x0f7d:  mov    %esi,-0xf8(%ebp)
0876a4f3 +0x0f83:  add    %eax,-0xf8(%ebp)
0876a4f9 +0x0f89:  mov    -0x138(%ebp),%eax
0876a4ff +0x0f8f:  mov    %edi,-0xf4(%ebp)
0876a505 +0x0f95:  adc    %edx,-0xf4(%ebp)
0876a50b +0x0f9b:  mov    -0x134(%ebp),%edx
0876a511 +0x0fa1:  mov    0x20(%eax),%esi
0876a514 +0x0fa4:  mov    0x24(%eax),%edi
0876a517 +0x0fa7:  test   %edx,%edx
0876a519 +0x0fa9:  je     0876d330 <+0x3dc0>
0876a51f +0x0faf:  mov    -0x68(%ebp),%edx
0876a522 +0x0fb2:  mov    -0x64(%ebp),%ecx
0876a525 +0x0fb5:  mov    -0xb0(%ebp),%eax
0876a52b +0x0fbb:  mov    %edx,-0xd8(%ebp)
0876a531 +0x0fc1:  mov    -0xac(%ebp),%edx
0876a537 +0x0fc7:  add    %eax,-0xd8(%ebp)
0876a53d +0x0fcd:  mov    %ecx,-0xd4(%ebp)
0876a543 +0x0fd3:  mov    -0xbc(%ebp),%ecx
0876a549 +0x0fd9:  adc    %edx,-0xd4(%ebp)
0876a54f +0x0fdf:  mov    -0xc0(%ebp),%edx
0876a555 +0x0fe5:  mov    %edx,%eax
0876a557 +0x0fe7:  shrd   $0x13,%ecx,%edx
0876a55b +0x0feb:  shrd   $0x13,%eax,%ecx
0876a55f +0x0fef:  mov    %edx,-0x128(%ebp)
0876a565 +0x0ff5:  mov    -0xc0(%ebp),%edx
0876a56b +0x0ffb:  mov    %ecx,-0x124(%ebp)
0876a571 +0x1001:  mov    -0xbc(%ebp),%ecx
0876a577 +0x1007:  mov    -0x124(%ebp),%eax
0876a57d +0x100d:  shrd   $0x6,%ecx,%edx
0876a581 +0x1011:  shr    $0x6,%ecx
0876a584 +0x1014:  mov    %ecx,-0x12c(%ebp)
0876a58a +0x101a:  mov    -0x128(%ebp),%ecx
0876a590 +0x1020:  xor    -0x12c(%ebp),%eax
0876a596 +0x1026:  mov    %eax,-0x120(%ebp)
0876a59c +0x102c:  mov    -0xc0(%ebp),%eax
0876a5a2 +0x1032:  xor    %edx,%ecx
0876a5a4 +0x1034:  mov    -0xbc(%ebp),%edx
0876a5aa +0x103a:  mov    %ecx,-0x140(%ebp)
0876a5b0 +0x1040:  mov    %eax,%ecx
0876a5b2 +0x1042:  shld   $0x3,%edx,%eax
0876a5b6 +0x1046:  shld   $0x3,%ecx,%edx
0876a5ba +0x104a:  mov    -0x140(%ebp),%ecx
0876a5c0 +0x1050:  xor    %eax,%ecx
0876a5c2 +0x1052:  mov    %ecx,-0x390(%ebp)
0876a5c8 +0x1058:  mov    -0x120(%ebp),%ecx
0876a5ce +0x105e:  mov    -0x390(%ebp),%eax
0876a5d4 +0x1064:  xor    %edx,%ecx
0876a5d6 +0x1066:  mov    %ecx,-0x38c(%ebp)
0876a5dc +0x106c:  mov    -0x38c(%ebp),%edx
0876a5e2 +0x1072:  add    %eax,-0xd8(%ebp)
0876a5e8 +0x1078:  adc    %edx,-0xd4(%ebp)
0876a5ee +0x107e:  mov    -0xa8(%ebp),%edx
0876a5f4 +0x1084:  mov    -0xa4(%ebp),%ecx
0876a5fa +0x108a:  mov    %edx,%eax
0876a5fc +0x108c:  shrd   $0x1,%ecx,%edx
0876a600 +0x1090:  shrd   $0x1,%eax,%ecx
0876a604 +0x1094:  mov    -0xa8(%ebp),%eax
0876a60a +0x109a:  mov    %edx,-0x120(%ebp)
0876a610 +0x10a0:  mov    -0xa8(%ebp),%edx
0876a616 +0x10a6:  mov    %ecx,-0x11c(%ebp)
0876a61c +0x10ac:  mov    -0xa4(%ebp),%ecx
0876a622 +0x10b2:  shrd   $0x7,%ecx,%edx
0876a626 +0x10b6:  xor    -0x120(%ebp),%edx
0876a62c +0x10bc:  shr    $0x7,%ecx
0876a62f +0x10bf:  xor    -0x11c(%ebp),%ecx
0876a635 +0x10c5:  mov    %edx,-0x130(%ebp)
0876a63b +0x10cb:  mov    -0xa4(%ebp),%edx
0876a641 +0x10d1:  mov    %ecx,-0x120(%ebp)
0876a647 +0x10d7:  mov    %eax,%ecx
0876a649 +0x10d9:  shrd   $0x8,%edx,%eax
0876a64d +0x10dd:  shrd   $0x8,%ecx,%edx
0876a651 +0x10e1:  mov    -0x130(%ebp),%ecx
0876a657 +0x10e7:  xor    %eax,%ecx
0876a659 +0x10e9:  mov    %ecx,-0x398(%ebp)
0876a65f +0x10ef:  mov    -0x120(%ebp),%ecx
0876a665 +0x10f5:  mov    -0x398(%ebp),%eax
0876a66b +0x10fb:  xor    %edx,%ecx
0876a66d +0x10fd:  mov    %ecx,-0x394(%ebp)
0876a673 +0x1103:  mov    -0x394(%ebp),%edx
0876a679 +0x1109:  add    %eax,-0xd8(%ebp)
0876a67f +0x110f:  adc    %edx,-0xd4(%ebp)
0876a685 +0x1115:  mov    -0xd4(%ebp),%ecx
0876a68b +0x111b:  mov    -0xd8(%ebp),%edx
0876a691 +0x1121:  mov    %ecx,-0xac(%ebp)
0876a697 +0x1127:  mov    %edx,-0xb0(%ebp)
0876a69d +0x112d:  mov    -0x110(%ebp),%eax
0876a6a3 +0x1133:  mov    -0x10c(%ebp),%edx
0876a6a9 +0x1139:  mov    -0x100(%ebp),%ecx
0876a6af +0x113f:  add    %esi,%eax
0876a6b1 +0x1141:  mov    -0xfc(%ebp),%esi
0876a6b7 +0x1147:  adc    %edi,%edx
0876a6b9 +0x1149:  mov    -0xdc(%ebp),%edi
0876a6bf +0x114f:  xor    -0xec(%ebp),%esi
0876a6c5 +0x1155:  and    -0xdc(%ebp),%esi
0876a6cb +0x115b:  xor    -0xec(%ebp),%esi
0876a6d1 +0x1161:  xor    -0xf0(%ebp),%ecx
0876a6d7 +0x1167:  and    -0xe0(%ebp),%ecx
0876a6dd +0x116d:  mov    %esi,-0x1cc(%ebp)
0876a6e3 +0x1173:  mov    -0xe0(%ebp),%esi
0876a6e9 +0x1179:  xor    -0xf0(%ebp),%ecx
0876a6ef +0x117f:  mov    %ecx,-0x1d0(%ebp)
0876a6f5 +0x1185:  mov    %esi,%ecx
0876a6f7 +0x1187:  add    -0x1d0(%ebp),%eax
0876a6fd +0x118d:  adc    -0x1cc(%ebp),%edx
0876a703 +0x1193:  shrd   $0x12,%edi,%esi
0876a707 +0x1197:  shrd   $0x12,%ecx,%edi
0876a70b +0x119b:  mov    %esi,-0x128(%ebp)
0876a711 +0x11a1:  mov    -0xe0(%ebp),%esi
0876a717 +0x11a7:  mov    %edi,-0x124(%ebp)
0876a71d +0x11ad:  mov    -0xdc(%ebp),%edi
0876a723 +0x11b3:  mov    %esi,%ecx
0876a725 +0x11b5:  shrd   $0xe,%edi,%esi
0876a729 +0x11b9:  xor    -0x128(%ebp),%esi
0876a72f +0x11bf:  shrd   $0xe,%ecx,%edi
0876a733 +0x11c3:  xor    -0x124(%ebp),%edi
0876a739 +0x11c9:  mov    %esi,-0x120(%ebp)
0876a73f +0x11cf:  mov    -0xe0(%ebp),%esi
0876a745 +0x11d5:  mov    %edi,-0x110(%ebp)
0876a74b +0x11db:  mov    -0xdc(%ebp),%edi
0876a751 +0x11e1:  mov    %esi,%ecx
0876a753 +0x11e3:  shld   $0x17,%edi,%esi
0876a757 +0x11e7:  shld   $0x17,%ecx,%edi
0876a75b +0x11eb:  mov    -0x120(%ebp),%ecx
0876a761 +0x11f1:  xor    %esi,%ecx
0876a763 +0x11f3:  mov    -0x108(%ebp),%esi
0876a769 +0x11f9:  mov    %ecx,-0x1d8(%ebp)
0876a76f +0x11ff:  mov    -0x110(%ebp),%ecx
0876a775 +0x1205:  xor    %edi,%ecx
0876a777 +0x1207:  mov    -0x104(%ebp),%edi
0876a77d +0x120d:  mov    %ecx,-0x1d4(%ebp)
0876a783 +0x1213:  add    -0x1d8(%ebp),%eax
0876a789 +0x1219:  adc    -0x1d4(%ebp),%edx
0876a78f +0x121f:  add    -0xd8(%ebp),%eax
0876a795 +0x1225:  adc    -0xd4(%ebp),%edx
0876a79b +0x122b:  add    %eax,%esi
0876a79d +0x122d:  adc    %edx,%edi
0876a79f +0x122f:  mov    %esi,-0x108(%ebp)
0876a7a5 +0x1235:  mov    -0xf8(%ebp),%esi
0876a7ab +0x123b:  mov    %edi,-0x104(%ebp)
0876a7b1 +0x1241:  mov    -0xf8(%ebp),%edi
0876a7b7 +0x1247:  and    -0x118(%ebp),%edi
0876a7bd +0x124d:  or     -0x118(%ebp),%esi
0876a7c3 +0x1253:  mov    -0xf4(%ebp),%ecx
0876a7c9 +0x1259:  mov    %edi,-0xd8(%ebp)
0876a7cf +0x125f:  mov    -0xf4(%ebp),%edi
0876a7d5 +0x1265:  and    -0xe8(%ebp),%esi
0876a7db +0x126b:  or     -0xd8(%ebp),%esi
0876a7e1 +0x1271:  and    -0x114(%ebp),%edi
0876a7e7 +0x1277:  or     -0x114(%ebp),%ecx
0876a7ed +0x127d:  and    -0xe4(%ebp),%ecx
0876a7f3 +0x1283:  mov    %esi,-0x1e0(%ebp)
0876a7f9 +0x1289:  mov    -0xf8(%ebp),%esi
0876a7ff +0x128f:  or     %edi,%ecx
0876a801 +0x1291:  mov    -0xf4(%ebp),%edi
0876a807 +0x1297:  mov    %ecx,-0x1dc(%ebp)
0876a80d +0x129d:  mov    %esi,%ecx
0876a80f +0x129f:  shld   $0x1e,%edi,%esi
0876a813 +0x12a3:  shld   $0x1e,%ecx,%edi
0876a817 +0x12a7:  mov    %esi,-0x120(%ebp)
0876a81d +0x12ad:  mov    -0xf8(%ebp),%esi
0876a823 +0x12b3:  mov    %edi,-0x11c(%ebp)
0876a829 +0x12b9:  mov    -0xf4(%ebp),%edi
0876a82f +0x12bf:  mov    %esi,%ecx
0876a831 +0x12c1:  shrd   $0x1c,%edi,%esi
0876a835 +0x12c5:  xor    -0x120(%ebp),%esi
0876a83b +0x12cb:  shrd   $0x1c,%ecx,%edi
0876a83f +0x12cf:  xor    -0x11c(%ebp),%edi
0876a845 +0x12d5:  mov    %esi,-0xd8(%ebp)
0876a84b +0x12db:  mov    -0xf8(%ebp),%esi
0876a851 +0x12e1:  mov    %edi,-0x110(%ebp)
0876a857 +0x12e7:  mov    -0xf4(%ebp),%edi
0876a85d +0x12ed:  mov    %esi,%ecx
0876a85f +0x12ef:  shld   $0x19,%edi,%esi
0876a863 +0x12f3:  shld   $0x19,%ecx,%edi
0876a867 +0x12f7:  mov    -0xd8(%ebp),%ecx
0876a86d +0x12fd:  xor    %esi,%ecx
0876a86f +0x12ff:  mov    -0x1e0(%ebp),%esi
0876a875 +0x1305:  mov    %ecx,-0x1e8(%ebp)
0876a87b +0x130b:  mov    -0x110(%ebp),%ecx
0876a881 +0x1311:  xor    %edi,%ecx
0876a883 +0x1313:  mov    -0x1dc(%ebp),%edi
0876a889 +0x1319:  add    -0x1e8(%ebp),%esi
0876a88f +0x131f:  mov    %ecx,-0x1e4(%ebp)
0876a895 +0x1325:  adc    -0x1e4(%ebp),%edi
0876a89b +0x132b:  mov    %esi,-0x110(%ebp)
0876a8a1 +0x1331:  add    %eax,-0x110(%ebp)
0876a8a7 +0x1337:  mov    -0x138(%ebp),%eax
0876a8ad +0x133d:  mov    %edi,-0x10c(%ebp)
0876a8b3 +0x1343:  adc    %edx,-0x10c(%ebp)
0876a8b9 +0x1349:  mov    -0x134(%ebp),%edx
0876a8bf +0x134f:  mov    0x28(%eax),%esi
0876a8c2 +0x1352:  mov    0x2c(%eax),%edi
0876a8c5 +0x1355:  test   %edx,%edx
0876a8c7 +0x1357:  je     0876d300 <+0x3d90>
0876a8cd +0x135d:  mov    -0x60(%ebp),%edx
0876a8d0 +0x1360:  mov    -0x5c(%ebp),%ecx
0876a8d3 +0x1363:  mov    -0xa8(%ebp),%eax
0876a8d9 +0x1369:  mov    %edx,-0xd8(%ebp)
0876a8df +0x136f:  mov    -0xa4(%ebp),%edx
0876a8e5 +0x1375:  add    %eax,-0xd8(%ebp)
0876a8eb +0x137b:  mov    %ecx,-0xd4(%ebp)
0876a8f1 +0x1381:  mov    -0xb4(%ebp),%ecx
0876a8f7 +0x1387:  adc    %edx,-0xd4(%ebp)
0876a8fd +0x138d:  mov    -0xb8(%ebp),%edx
0876a903 +0x1393:  mov    %edx,%eax
0876a905 +0x1395:  shrd   $0x13,%ecx,%edx
0876a909 +0x1399:  shrd   $0x13,%eax,%ecx
0876a90d +0x139d:  mov    %edx,-0x128(%ebp)
0876a913 +0x13a3:  mov    -0xb8(%ebp),%edx
0876a919 +0x13a9:  mov    %ecx,-0x124(%ebp)
0876a91f +0x13af:  mov    -0xb4(%ebp),%ecx
0876a925 +0x13b5:  mov    -0x124(%ebp),%eax
0876a92b +0x13bb:  shrd   $0x6,%ecx,%edx
0876a92f +0x13bf:  shr    $0x6,%ecx
0876a932 +0x13c2:  mov    %ecx,-0x12c(%ebp)
0876a938 +0x13c8:  mov    -0x128(%ebp),%ecx
0876a93e +0x13ce:  xor    -0x12c(%ebp),%eax
0876a944 +0x13d4:  mov    %eax,-0x120(%ebp)
0876a94a +0x13da:  mov    -0xb8(%ebp),%eax
0876a950 +0x13e0:  xor    %edx,%ecx
0876a952 +0x13e2:  mov    -0xb4(%ebp),%edx
0876a958 +0x13e8:  mov    %ecx,-0x140(%ebp)
0876a95e +0x13ee:  mov    %eax,%ecx
0876a960 +0x13f0:  shld   $0x3,%edx,%eax
0876a964 +0x13f4:  shld   $0x3,%ecx,%edx
0876a968 +0x13f8:  mov    -0x140(%ebp),%ecx
0876a96e +0x13fe:  xor    %eax,%ecx
0876a970 +0x1400:  mov    %ecx,-0x3a0(%ebp)
0876a976 +0x1406:  mov    -0x120(%ebp),%ecx
0876a97c +0x140c:  mov    -0x3a0(%ebp),%eax
0876a982 +0x1412:  xor    %edx,%ecx
0876a984 +0x1414:  mov    %ecx,-0x39c(%ebp)
0876a98a +0x141a:  mov    -0x39c(%ebp),%edx
0876a990 +0x1420:  add    %eax,-0xd8(%ebp)
0876a996 +0x1426:  adc    %edx,-0xd4(%ebp)
0876a99c +0x142c:  mov    -0xa0(%ebp),%edx
0876a9a2 +0x1432:  mov    -0x9c(%ebp),%ecx
0876a9a8 +0x1438:  mov    %edx,%eax
0876a9aa +0x143a:  shrd   $0x1,%ecx,%edx
0876a9ae +0x143e:  shrd   $0x1,%eax,%ecx
0876a9b2 +0x1442:  mov    -0xa0(%ebp),%eax
0876a9b8 +0x1448:  mov    %edx,-0x120(%ebp)
0876a9be +0x144e:  mov    -0xa0(%ebp),%edx
0876a9c4 +0x1454:  mov    %ecx,-0x11c(%ebp)
0876a9ca +0x145a:  mov    -0x9c(%ebp),%ecx
0876a9d0 +0x1460:  shrd   $0x7,%ecx,%edx
0876a9d4 +0x1464:  xor    -0x120(%ebp),%edx
0876a9da +0x146a:  shr    $0x7,%ecx
0876a9dd +0x146d:  xor    -0x11c(%ebp),%ecx
0876a9e3 +0x1473:  mov    %edx,-0x130(%ebp)
0876a9e9 +0x1479:  mov    -0x9c(%ebp),%edx
0876a9ef +0x147f:  mov    %ecx,-0x120(%ebp)
0876a9f5 +0x1485:  mov    %eax,%ecx
0876a9f7 +0x1487:  shrd   $0x8,%edx,%eax
0876a9fb +0x148b:  shrd   $0x8,%ecx,%edx
0876a9ff +0x148f:  mov    -0x130(%ebp),%ecx
0876aa05 +0x1495:  xor    %eax,%ecx
0876aa07 +0x1497:  mov    %ecx,-0x3a8(%ebp)
0876aa0d +0x149d:  mov    -0x120(%ebp),%ecx
0876aa13 +0x14a3:  mov    -0x3a8(%ebp),%eax
0876aa19 +0x14a9:  xor    %edx,%ecx
0876aa1b +0x14ab:  mov    %ecx,-0x3a4(%ebp)
0876aa21 +0x14b1:  mov    -0x3a4(%ebp),%edx
0876aa27 +0x14b7:  add    %eax,-0xd8(%ebp)
0876aa2d +0x14bd:  adc    %edx,-0xd4(%ebp)
0876aa33 +0x14c3:  mov    -0xd4(%ebp),%ecx
0876aa39 +0x14c9:  mov    -0xd8(%ebp),%edx
0876aa3f +0x14cf:  mov    %ecx,-0xa4(%ebp)
0876aa45 +0x14d5:  mov    %edx,-0xa8(%ebp)
0876aa4b +0x14db:  mov    -0xf0(%ebp),%eax
0876aa51 +0x14e1:  mov    -0xec(%ebp),%edx
0876aa57 +0x14e7:  mov    -0xe0(%ebp),%ecx
0876aa5d +0x14ed:  add    %esi,%eax
0876aa5f +0x14ef:  mov    -0xdc(%ebp),%esi
0876aa65 +0x14f5:  adc    %edi,%edx
0876aa67 +0x14f7:  mov    -0x104(%ebp),%edi
0876aa6d +0x14fd:  xor    -0xfc(%ebp),%esi
0876aa73 +0x1503:  and    -0x104(%ebp),%esi
0876aa79 +0x1509:  xor    -0xfc(%ebp),%esi
0876aa7f +0x150f:  xor    -0x100(%ebp),%ecx
0876aa85 +0x1515:  and    -0x108(%ebp),%ecx
0876aa8b +0x151b:  mov    %esi,-0x1ec(%ebp)
0876aa91 +0x1521:  mov    -0x108(%ebp),%esi
0876aa97 +0x1527:  xor    -0x100(%ebp),%ecx
0876aa9d +0x152d:  mov    %ecx,-0x1f0(%ebp)
0876aaa3 +0x1533:  mov    %esi,%ecx
0876aaa5 +0x1535:  add    -0x1f0(%ebp),%eax
0876aaab +0x153b:  adc    -0x1ec(%ebp),%edx
0876aab1 +0x1541:  shrd   $0x12,%edi,%esi
0876aab5 +0x1545:  shrd   $0x12,%ecx,%edi
0876aab9 +0x1549:  mov    %esi,-0x128(%ebp)
0876aabf +0x154f:  mov    -0x108(%ebp),%esi
0876aac5 +0x1555:  mov    %edi,-0x124(%ebp)
0876aacb +0x155b:  mov    -0x104(%ebp),%edi
0876aad1 +0x1561:  mov    %esi,%ecx
0876aad3 +0x1563:  shrd   $0xe,%edi,%esi
0876aad7 +0x1567:  xor    -0x128(%ebp),%esi
0876aadd +0x156d:  shrd   $0xe,%ecx,%edi
0876aae1 +0x1571:  xor    -0x124(%ebp),%edi
0876aae7 +0x1577:  mov    %esi,-0x120(%ebp)
0876aaed +0x157d:  mov    -0x108(%ebp),%esi
0876aaf3 +0x1583:  mov    %edi,-0xf0(%ebp)
0876aaf9 +0x1589:  mov    -0x104(%ebp),%edi
0876aaff +0x158f:  mov    %esi,%ecx
0876ab01 +0x1591:  shld   $0x17,%edi,%esi
0876ab05 +0x1595:  shld   $0x17,%ecx,%edi
0876ab09 +0x1599:  mov    -0x120(%ebp),%ecx
0876ab0f +0x159f:  xor    %esi,%ecx
0876ab11 +0x15a1:  mov    -0xe8(%ebp),%esi
0876ab17 +0x15a7:  mov    %ecx,-0x1f8(%ebp)
0876ab1d +0x15ad:  mov    -0xf0(%ebp),%ecx
0876ab23 +0x15b3:  xor    %edi,%ecx
0876ab25 +0x15b5:  mov    -0xe4(%ebp),%edi
0876ab2b +0x15bb:  mov    %ecx,-0x1f4(%ebp)
0876ab31 +0x15c1:  add    -0x1f8(%ebp),%eax
0876ab37 +0x15c7:  adc    -0x1f4(%ebp),%edx
0876ab3d +0x15cd:  add    -0xd8(%ebp),%eax
0876ab43 +0x15d3:  adc    -0xd4(%ebp),%edx
0876ab49 +0x15d9:  add    %eax,%esi
0876ab4b +0x15db:  adc    %edx,%edi
0876ab4d +0x15dd:  mov    %esi,-0xe8(%ebp)
0876ab53 +0x15e3:  mov    -0x110(%ebp),%esi
0876ab59 +0x15e9:  mov    %edi,-0xe4(%ebp)
0876ab5f +0x15ef:  mov    -0x110(%ebp),%edi
0876ab65 +0x15f5:  and    -0xf8(%ebp),%edi
0876ab6b +0x15fb:  or     -0xf8(%ebp),%esi
0876ab71 +0x1601:  mov    -0x10c(%ebp),%ecx
0876ab77 +0x1607:  mov    %edi,-0xd8(%ebp)
0876ab7d +0x160d:  mov    -0x10c(%ebp),%edi
0876ab83 +0x1613:  and    -0x118(%ebp),%esi
0876ab89 +0x1619:  or     -0xd8(%ebp),%esi
0876ab8f +0x161f:  and    -0xf4(%ebp),%edi
0876ab95 +0x1625:  or     -0xf4(%ebp),%ecx
0876ab9b +0x162b:  and    -0x114(%ebp),%ecx
0876aba1 +0x1631:  mov    %esi,-0x200(%ebp)
0876aba7 +0x1637:  mov    -0x110(%ebp),%esi
0876abad +0x163d:  or     %edi,%ecx
0876abaf +0x163f:  mov    -0x10c(%ebp),%edi
0876abb5 +0x1645:  mov    %ecx,-0x1fc(%ebp)
0876abbb +0x164b:  mov    %esi,%ecx
0876abbd +0x164d:  shld   $0x1e,%edi,%esi
0876abc1 +0x1651:  shld   $0x1e,%ecx,%edi
0876abc5 +0x1655:  mov    %esi,-0x120(%ebp)
0876abcb +0x165b:  mov    -0x110(%ebp),%esi
0876abd1 +0x1661:  mov    %edi,-0x11c(%ebp)
0876abd7 +0x1667:  mov    -0x10c(%ebp),%edi
0876abdd +0x166d:  mov    %esi,%ecx
0876abdf +0x166f:  shrd   $0x1c,%edi,%esi
0876abe3 +0x1673:  xor    -0x120(%ebp),%esi
0876abe9 +0x1679:  shrd   $0x1c,%ecx,%edi
0876abed +0x167d:  xor    -0x11c(%ebp),%edi
0876abf3 +0x1683:  mov    %esi,-0xd8(%ebp)
0876abf9 +0x1689:  mov    -0x110(%ebp),%esi
0876abff +0x168f:  mov    %edi,-0xf0(%ebp)
0876ac05 +0x1695:  mov    -0x10c(%ebp),%edi
0876ac0b +0x169b:  mov    %esi,%ecx
0876ac0d +0x169d:  shld   $0x19,%edi,%esi
0876ac11 +0x16a1:  shld   $0x19,%ecx,%edi
0876ac15 +0x16a5:  mov    -0xd8(%ebp),%ecx
0876ac1b +0x16ab:  xor    %esi,%ecx
0876ac1d +0x16ad:  mov    -0x200(%ebp),%esi
0876ac23 +0x16b3:  mov    %ecx,-0x208(%ebp)
0876ac29 +0x16b9:  mov    -0xf0(%ebp),%ecx
0876ac2f +0x16bf:  xor    %edi,%ecx
0876ac31 +0x16c1:  mov    -0x1fc(%ebp),%edi
0876ac37 +0x16c7:  add    -0x208(%ebp),%esi
0876ac3d +0x16cd:  mov    %ecx,-0x204(%ebp)
0876ac43 +0x16d3:  adc    -0x204(%ebp),%edi
0876ac49 +0x16d9:  mov    %esi,-0xf0(%ebp)
0876ac4f +0x16df:  add    %eax,-0xf0(%ebp)
0876ac55 +0x16e5:  mov    -0x138(%ebp),%eax
0876ac5b +0x16eb:  mov    %edi,-0xec(%ebp)
0876ac61 +0x16f1:  adc    %edx,-0xec(%ebp)
0876ac67 +0x16f7:  mov    -0x134(%ebp),%edx
0876ac6d +0x16fd:  mov    0x30(%eax),%esi
0876ac70 +0x1700:  mov    0x34(%eax),%edi
0876ac73 +0x1703:  test   %edx,%edx
0876ac75 +0x1705:  je     0876d2d0 <+0x3d60>
0876ac7b +0x170b:  mov    -0x58(%ebp),%edx
0876ac7e +0x170e:  mov    -0x54(%ebp),%ecx
0876ac81 +0x1711:  mov    -0xa0(%ebp),%eax
0876ac87 +0x1717:  mov    %edx,-0xd8(%ebp)
0876ac8d +0x171d:  mov    -0x9c(%ebp),%edx
0876ac93 +0x1723:  add    %eax,-0xd8(%ebp)
0876ac99 +0x1729:  mov    %ecx,-0xd4(%ebp)
0876ac9f +0x172f:  mov    -0xac(%ebp),%ecx
0876aca5 +0x1735:  adc    %edx,-0xd4(%ebp)
0876acab +0x173b:  mov    -0xb0(%ebp),%edx
0876acb1 +0x1741:  mov    %edx,%eax
0876acb3 +0x1743:  shrd   $0x13,%ecx,%edx
0876acb7 +0x1747:  shrd   $0x13,%eax,%ecx
0876acbb +0x174b:  mov    %edx,-0x128(%ebp)
0876acc1 +0x1751:  mov    -0xb0(%ebp),%edx
0876acc7 +0x1757:  mov    %ecx,-0x124(%ebp)
0876accd +0x175d:  mov    -0xac(%ebp),%ecx
0876acd3 +0x1763:  mov    -0x124(%ebp),%eax
0876acd9 +0x1769:  shrd   $0x6,%ecx,%edx
0876acdd +0x176d:  shr    $0x6,%ecx
0876ace0 +0x1770:  mov    %ecx,-0x12c(%ebp)
0876ace6 +0x1776:  mov    -0x128(%ebp),%ecx
0876acec +0x177c:  xor    -0x12c(%ebp),%eax
0876acf2 +0x1782:  mov    %eax,-0x120(%ebp)
0876acf8 +0x1788:  mov    -0xb0(%ebp),%eax
0876acfe +0x178e:  xor    %edx,%ecx
0876ad00 +0x1790:  mov    -0xac(%ebp),%edx
0876ad06 +0x1796:  mov    %ecx,-0x140(%ebp)
0876ad0c +0x179c:  mov    %eax,%ecx
0876ad0e +0x179e:  shld   $0x3,%edx,%eax
0876ad12 +0x17a2:  shld   $0x3,%ecx,%edx
0876ad16 +0x17a6:  mov    -0x140(%ebp),%ecx
0876ad1c +0x17ac:  xor    %eax,%ecx
0876ad1e +0x17ae:  mov    %ecx,-0x3b0(%ebp)
0876ad24 +0x17b4:  mov    -0x120(%ebp),%ecx
0876ad2a +0x17ba:  mov    -0x3b0(%ebp),%eax
0876ad30 +0x17c0:  xor    %edx,%ecx
0876ad32 +0x17c2:  mov    %ecx,-0x3ac(%ebp)
0876ad38 +0x17c8:  mov    -0x3ac(%ebp),%edx
0876ad3e +0x17ce:  add    %eax,-0xd8(%ebp)
0876ad44 +0x17d4:  adc    %edx,-0xd4(%ebp)
0876ad4a +0x17da:  mov    -0x98(%ebp),%edx
0876ad50 +0x17e0:  mov    -0x94(%ebp),%ecx
0876ad56 +0x17e6:  mov    %edx,%eax
0876ad58 +0x17e8:  shrd   $0x1,%ecx,%edx
0876ad5c +0x17ec:  shrd   $0x1,%eax,%ecx
0876ad60 +0x17f0:  mov    -0x98(%ebp),%eax
0876ad66 +0x17f6:  mov    %edx,-0x120(%ebp)
0876ad6c +0x17fc:  mov    -0x98(%ebp),%edx
0876ad72 +0x1802:  mov    %ecx,-0x11c(%ebp)
0876ad78 +0x1808:  mov    -0x94(%ebp),%ecx
0876ad7e +0x180e:  shrd   $0x7,%ecx,%edx
0876ad82 +0x1812:  xor    -0x120(%ebp),%edx
0876ad88 +0x1818:  shr    $0x7,%ecx
0876ad8b +0x181b:  xor    -0x11c(%ebp),%ecx
0876ad91 +0x1821:  mov    %edx,-0x130(%ebp)
0876ad97 +0x1827:  mov    -0x94(%ebp),%edx
0876ad9d +0x182d:  mov    %ecx,-0x120(%ebp)
0876ada3 +0x1833:  mov    %eax,%ecx
0876ada5 +0x1835:  shrd   $0x8,%edx,%eax
0876ada9 +0x1839:  shrd   $0x8,%ecx,%edx
0876adad +0x183d:  mov    -0x130(%ebp),%ecx
0876adb3 +0x1843:  xor    %eax,%ecx
0876adb5 +0x1845:  mov    %ecx,-0x3b8(%ebp)
0876adbb +0x184b:  mov    -0x120(%ebp),%ecx
0876adc1 +0x1851:  mov    -0x3b8(%ebp),%eax
0876adc7 +0x1857:  xor    %edx,%ecx
0876adc9 +0x1859:  mov    %ecx,-0x3b4(%ebp)
0876adcf +0x185f:  mov    -0x3b4(%ebp),%edx
0876add5 +0x1865:  add    %eax,-0xd8(%ebp)
0876addb +0x186b:  adc    %edx,-0xd4(%ebp)
0876ade1 +0x1871:  mov    -0xd4(%ebp),%ecx
0876ade7 +0x1877:  mov    -0xd8(%ebp),%edx
0876aded +0x187d:  mov    %ecx,-0x9c(%ebp)
0876adf3 +0x1883:  mov    %edx,-0xa0(%ebp)
0876adf9 +0x1889:  mov    -0x100(%ebp),%eax
0876adff +0x188f:  mov    -0xfc(%ebp),%edx
0876ae05 +0x1895:  mov    -0x108(%ebp),%ecx
0876ae0b +0x189b:  add    %esi,%eax
0876ae0d +0x189d:  mov    -0x104(%ebp),%esi
0876ae13 +0x18a3:  adc    %edi,%edx
0876ae15 +0x18a5:  mov    -0xe4(%ebp),%edi
0876ae1b +0x18ab:  xor    -0xdc(%ebp),%esi
0876ae21 +0x18b1:  and    -0xe4(%ebp),%esi
0876ae27 +0x18b7:  xor    -0xdc(%ebp),%esi
0876ae2d +0x18bd:  xor    -0xe0(%ebp),%ecx
0876ae33 +0x18c3:  and    -0xe8(%ebp),%ecx
0876ae39 +0x18c9:  mov    %esi,-0x20c(%ebp)
0876ae3f +0x18cf:  mov    -0xe8(%ebp),%esi
0876ae45 +0x18d5:  xor    -0xe0(%ebp),%ecx
0876ae4b +0x18db:  mov    %ecx,-0x210(%ebp)
0876ae51 +0x18e1:  mov    %esi,%ecx
0876ae53 +0x18e3:  add    -0x210(%ebp),%eax
0876ae59 +0x18e9:  adc    -0x20c(%ebp),%edx
0876ae5f +0x18ef:  shrd   $0x12,%edi,%esi
0876ae63 +0x18f3:  shrd   $0x12,%ecx,%edi
0876ae67 +0x18f7:  mov    %esi,-0x128(%ebp)
0876ae6d +0x18fd:  mov    -0xe8(%ebp),%esi
0876ae73 +0x1903:  mov    %edi,-0x124(%ebp)
0876ae79 +0x1909:  mov    -0xe4(%ebp),%edi
0876ae7f +0x190f:  mov    %esi,%ecx
0876ae81 +0x1911:  shrd   $0xe,%edi,%esi
0876ae85 +0x1915:  xor    -0x128(%ebp),%esi
0876ae8b +0x191b:  shrd   $0xe,%ecx,%edi
0876ae8f +0x191f:  xor    -0x124(%ebp),%edi
0876ae95 +0x1925:  mov    %esi,-0x120(%ebp)
0876ae9b +0x192b:  mov    -0xe8(%ebp),%esi
0876aea1 +0x1931:  mov    %edi,-0x100(%ebp)
0876aea7 +0x1937:  mov    -0xe4(%ebp),%edi
0876aead +0x193d:  mov    %esi,%ecx
0876aeaf +0x193f:  shld   $0x17,%edi,%esi
0876aeb3 +0x1943:  shld   $0x17,%ecx,%edi
0876aeb7 +0x1947:  mov    -0x120(%ebp),%ecx
0876aebd +0x194d:  xor    %esi,%ecx
0876aebf +0x194f:  mov    -0x118(%ebp),%esi
0876aec5 +0x1955:  mov    %ecx,-0x218(%ebp)
0876aecb +0x195b:  mov    -0x100(%ebp),%ecx
0876aed1 +0x1961:  xor    %edi,%ecx
0876aed3 +0x1963:  mov    -0x114(%ebp),%edi
0876aed9 +0x1969:  mov    %ecx,-0x214(%ebp)
0876aedf +0x196f:  add    -0x218(%ebp),%eax
0876aee5 +0x1975:  adc    -0x214(%ebp),%edx
0876aeeb +0x197b:  add    -0xd8(%ebp),%eax
0876aef1 +0x1981:  adc    -0xd4(%ebp),%edx
0876aef7 +0x1987:  add    %eax,%esi
0876aef9 +0x1989:  adc    %edx,%edi
0876aefb +0x198b:  mov    %esi,-0x118(%ebp)
0876af01 +0x1991:  mov    -0xf0(%ebp),%esi
0876af07 +0x1997:  mov    %edi,-0x114(%ebp)
0876af0d +0x199d:  mov    -0xf0(%ebp),%edi
0876af13 +0x19a3:  and    -0x110(%ebp),%edi
0876af19 +0x19a9:  or     -0x110(%ebp),%esi
0876af1f +0x19af:  mov    -0xec(%ebp),%ecx
0876af25 +0x19b5:  mov    %edi,-0xd8(%ebp)
0876af2b +0x19bb:  mov    -0xec(%ebp),%edi
0876af31 +0x19c1:  and    -0xf8(%ebp),%esi
0876af37 +0x19c7:  or     -0xd8(%ebp),%esi
0876af3d +0x19cd:  and    -0x10c(%ebp),%edi
0876af43 +0x19d3:  or     -0x10c(%ebp),%ecx
0876af49 +0x19d9:  and    -0xf4(%ebp),%ecx
0876af4f +0x19df:  mov    %esi,-0x220(%ebp)
0876af55 +0x19e5:  mov    -0xf0(%ebp),%esi
0876af5b +0x19eb:  or     %edi,%ecx
0876af5d +0x19ed:  mov    -0xec(%ebp),%edi
0876af63 +0x19f3:  mov    %ecx,-0x21c(%ebp)
0876af69 +0x19f9:  mov    %esi,%ecx
0876af6b +0x19fb:  shld   $0x1e,%edi,%esi
0876af6f +0x19ff:  shld   $0x1e,%ecx,%edi
0876af73 +0x1a03:  mov    %esi,-0x120(%ebp)
0876af79 +0x1a09:  mov    -0xf0(%ebp),%esi
0876af7f +0x1a0f:  mov    %edi,-0x11c(%ebp)
0876af85 +0x1a15:  mov    -0xec(%ebp),%edi
0876af8b +0x1a1b:  mov    %esi,%ecx
0876af8d +0x1a1d:  shrd   $0x1c,%edi,%esi
0876af91 +0x1a21:  xor    -0x120(%ebp),%esi
0876af97 +0x1a27:  shrd   $0x1c,%ecx,%edi
0876af9b +0x1a2b:  xor    -0x11c(%ebp),%edi
0876afa1 +0x1a31:  mov    %esi,-0xd8(%ebp)
0876afa7 +0x1a37:  mov    -0xf0(%ebp),%esi
0876afad +0x1a3d:  mov    %edi,-0x100(%ebp)
0876afb3 +0x1a43:  mov    -0xec(%ebp),%edi
0876afb9 +0x1a49:  mov    %esi,%ecx
0876afbb +0x1a4b:  shld   $0x19,%edi,%esi
0876afbf +0x1a4f:  shld   $0x19,%ecx,%edi
0876afc3 +0x1a53:  mov    -0xd8(%ebp),%ecx
0876afc9 +0x1a59:  xor    %esi,%ecx
0876afcb +0x1a5b:  mov    -0x220(%ebp),%esi
0876afd1 +0x1a61:  mov    %ecx,-0x228(%ebp)
0876afd7 +0x1a67:  mov    -0x100(%ebp),%ecx
0876afdd +0x1a6d:  xor    %edi,%ecx
0876afdf +0x1a6f:  mov    -0x21c(%ebp),%edi
0876afe5 +0x1a75:  add    -0x228(%ebp),%esi
0876afeb +0x1a7b:  mov    %ecx,-0x224(%ebp)
0876aff1 +0x1a81:  adc    -0x224(%ebp),%edi
0876aff7 +0x1a87:  mov    %esi,-0x100(%ebp)
0876affd +0x1a8d:  add    %eax,-0x100(%ebp)
0876b003 +0x1a93:  mov    -0x138(%ebp),%eax
0876b009 +0x1a99:  mov    %edi,-0xfc(%ebp)
0876b00f +0x1a9f:  adc    %edx,-0xfc(%ebp)
0876b015 +0x1aa5:  mov    -0x134(%ebp),%edx
0876b01b +0x1aab:  mov    0x38(%eax),%esi
0876b01e +0x1aae:  mov    0x3c(%eax),%edi
0876b021 +0x1ab1:  test   %edx,%edx
0876b023 +0x1ab3:  je     0876d2a0 <+0x3d30>
0876b029 +0x1ab9:  mov    -0xd0(%ebp),%edx
0876b02f +0x1abf:  mov    -0xcc(%ebp),%ecx
0876b035 +0x1ac5:  mov    -0x98(%ebp),%eax
0876b03b +0x1acb:  mov    %edx,-0xd8(%ebp)
0876b041 +0x1ad1:  mov    -0x94(%ebp),%edx
0876b047 +0x1ad7:  add    %eax,-0xd8(%ebp)
0876b04d +0x1add:  mov    %ecx,-0xd4(%ebp)
0876b053 +0x1ae3:  mov    -0xa4(%ebp),%ecx
0876b059 +0x1ae9:  adc    %edx,-0xd4(%ebp)
0876b05f +0x1aef:  mov    -0xa8(%ebp),%edx
0876b065 +0x1af5:  mov    %edx,%eax
0876b067 +0x1af7:  shrd   $0x13,%ecx,%edx
0876b06b +0x1afb:  shrd   $0x13,%eax,%ecx
0876b06f +0x1aff:  mov    %edx,-0x128(%ebp)
0876b075 +0x1b05:  mov    -0xa8(%ebp),%edx
0876b07b +0x1b0b:  mov    %ecx,-0x124(%ebp)
0876b081 +0x1b11:  mov    -0xa4(%ebp),%ecx
0876b087 +0x1b17:  mov    -0x124(%ebp),%eax
0876b08d +0x1b1d:  shrd   $0x6,%ecx,%edx
0876b091 +0x1b21:  shr    $0x6,%ecx
0876b094 +0x1b24:  mov    %ecx,-0x12c(%ebp)
0876b09a +0x1b2a:  mov    -0x128(%ebp),%ecx
0876b0a0 +0x1b30:  xor    -0x12c(%ebp),%eax
0876b0a6 +0x1b36:  mov    %eax,-0x120(%ebp)
0876b0ac +0x1b3c:  mov    -0xa8(%ebp),%eax
0876b0b2 +0x1b42:  xor    %edx,%ecx
0876b0b4 +0x1b44:  mov    -0xa4(%ebp),%edx
0876b0ba +0x1b4a:  mov    %ecx,-0x140(%ebp)
0876b0c0 +0x1b50:  mov    %eax,%ecx
0876b0c2 +0x1b52:  shld   $0x3,%edx,%eax
0876b0c6 +0x1b56:  shld   $0x3,%ecx,%edx
0876b0ca +0x1b5a:  mov    -0x140(%ebp),%ecx
0876b0d0 +0x1b60:  xor    %eax,%ecx
0876b0d2 +0x1b62:  mov    %ecx,-0x3c0(%ebp)
0876b0d8 +0x1b68:  mov    -0x120(%ebp),%ecx
0876b0de +0x1b6e:  mov    -0x3c0(%ebp),%eax
0876b0e4 +0x1b74:  xor    %edx,%ecx
0876b0e6 +0x1b76:  mov    %ecx,-0x3bc(%ebp)
0876b0ec +0x1b7c:  mov    -0x3bc(%ebp),%edx
0876b0f2 +0x1b82:  add    %eax,-0xd8(%ebp)
0876b0f8 +0x1b88:  adc    %edx,-0xd4(%ebp)
0876b0fe +0x1b8e:  mov    -0x90(%ebp),%edx
0876b104 +0x1b94:  mov    -0x8c(%ebp),%ecx
0876b10a +0x1b9a:  mov    %edx,%eax
0876b10c +0x1b9c:  shrd   $0x1,%ecx,%edx
0876b110 +0x1ba0:  shrd   $0x1,%eax,%ecx
0876b114 +0x1ba4:  mov    -0x90(%ebp),%eax
0876b11a +0x1baa:  mov    %edx,-0x120(%ebp)
0876b120 +0x1bb0:  mov    -0x90(%ebp),%edx
0876b126 +0x1bb6:  mov    %ecx,-0x11c(%ebp)
0876b12c +0x1bbc:  mov    -0x8c(%ebp),%ecx
0876b132 +0x1bc2:  shrd   $0x7,%ecx,%edx
0876b136 +0x1bc6:  xor    -0x120(%ebp),%edx
0876b13c +0x1bcc:  shr    $0x7,%ecx
0876b13f +0x1bcf:  xor    -0x11c(%ebp),%ecx
0876b145 +0x1bd5:  mov    %edx,-0x130(%ebp)
0876b14b +0x1bdb:  mov    -0x8c(%ebp),%edx
0876b151 +0x1be1:  mov    %ecx,-0x120(%ebp)
0876b157 +0x1be7:  mov    %eax,%ecx
0876b159 +0x1be9:  shrd   $0x8,%edx,%eax
0876b15d +0x1bed:  shrd   $0x8,%ecx,%edx
0876b161 +0x1bf1:  mov    -0x130(%ebp),%ecx
0876b167 +0x1bf7:  xor    %eax,%ecx
0876b169 +0x1bf9:  mov    %ecx,-0x3c8(%ebp)
0876b16f +0x1bff:  mov    -0x120(%ebp),%ecx
0876b175 +0x1c05:  mov    -0x3c8(%ebp),%eax
0876b17b +0x1c0b:  xor    %edx,%ecx
0876b17d +0x1c0d:  mov    %ecx,-0x3c4(%ebp)
0876b183 +0x1c13:  mov    -0x3c4(%ebp),%edx
0876b189 +0x1c19:  add    %eax,-0xd8(%ebp)
0876b18f +0x1c1f:  adc    %edx,-0xd4(%ebp)
0876b195 +0x1c25:  mov    -0xd4(%ebp),%ecx
0876b19b +0x1c2b:  mov    -0xd8(%ebp),%edx
0876b1a1 +0x1c31:  mov    %ecx,-0x94(%ebp)
0876b1a7 +0x1c37:  mov    %edx,-0x98(%ebp)
0876b1ad +0x1c3d:  mov    -0xe0(%ebp),%eax
0876b1b3 +0x1c43:  mov    -0xdc(%ebp),%edx
0876b1b9 +0x1c49:  mov    -0xe8(%ebp),%ecx
0876b1bf +0x1c4f:  add    %esi,%eax
0876b1c1 +0x1c51:  mov    -0xe4(%ebp),%esi
0876b1c7 +0x1c57:  adc    %edi,%edx
0876b1c9 +0x1c59:  mov    -0x114(%ebp),%edi
0876b1cf +0x1c5f:  xor    -0x104(%ebp),%esi
0876b1d5 +0x1c65:  and    -0x114(%ebp),%esi
0876b1db +0x1c6b:  xor    -0x104(%ebp),%esi
0876b1e1 +0x1c71:  xor    -0x108(%ebp),%ecx
0876b1e7 +0x1c77:  and    -0x118(%ebp),%ecx
0876b1ed +0x1c7d:  mov    %esi,-0x22c(%ebp)
0876b1f3 +0x1c83:  mov    -0x118(%ebp),%esi
0876b1f9 +0x1c89:  xor    -0x108(%ebp),%ecx
0876b1ff +0x1c8f:  mov    %ecx,-0x230(%ebp)
0876b205 +0x1c95:  mov    %esi,%ecx
0876b207 +0x1c97:  add    -0x230(%ebp),%eax
0876b20d +0x1c9d:  adc    -0x22c(%ebp),%edx
0876b213 +0x1ca3:  shrd   $0x12,%edi,%esi
0876b217 +0x1ca7:  shrd   $0x12,%ecx,%edi
0876b21b +0x1cab:  mov    %esi,-0x128(%ebp)
0876b221 +0x1cb1:  mov    -0x118(%ebp),%esi
0876b227 +0x1cb7:  mov    %edi,-0x124(%ebp)
0876b22d +0x1cbd:  mov    -0x114(%ebp),%edi
0876b233 +0x1cc3:  mov    %esi,%ecx
0876b235 +0x1cc5:  shrd   $0xe,%edi,%esi
0876b239 +0x1cc9:  xor    -0x128(%ebp),%esi
0876b23f +0x1ccf:  shrd   $0xe,%ecx,%edi
0876b243 +0x1cd3:  xor    -0x124(%ebp),%edi
0876b249 +0x1cd9:  mov    %esi,-0x120(%ebp)
0876b24f +0x1cdf:  mov    -0x118(%ebp),%esi
0876b255 +0x1ce5:  mov    %edi,-0xe0(%ebp)
0876b25b +0x1ceb:  mov    -0x114(%ebp),%edi
0876b261 +0x1cf1:  mov    %esi,%ecx
0876b263 +0x1cf3:  shld   $0x17,%edi,%esi
0876b267 +0x1cf7:  shld   $0x17,%ecx,%edi
0876b26b +0x1cfb:  mov    -0x120(%ebp),%ecx
0876b271 +0x1d01:  xor    %esi,%ecx
0876b273 +0x1d03:  mov    -0xf8(%ebp),%esi
0876b279 +0x1d09:  mov    %ecx,-0x238(%ebp)
0876b27f +0x1d0f:  mov    -0xe0(%ebp),%ecx
0876b285 +0x1d15:  xor    %edi,%ecx
0876b287 +0x1d17:  mov    -0xf4(%ebp),%edi
0876b28d +0x1d1d:  mov    %ecx,-0x234(%ebp)
0876b293 +0x1d23:  add    -0x238(%ebp),%eax
0876b299 +0x1d29:  adc    -0x234(%ebp),%edx
0876b29f +0x1d2f:  add    -0xd8(%ebp),%eax
0876b2a5 +0x1d35:  adc    -0xd4(%ebp),%edx
0876b2ab +0x1d3b:  add    %eax,%esi
0876b2ad +0x1d3d:  adc    %edx,%edi
0876b2af +0x1d3f:  mov    %esi,-0xf8(%ebp)
0876b2b5 +0x1d45:  mov    -0x100(%ebp),%esi
0876b2bb +0x1d4b:  mov    %edi,-0xf4(%ebp)
0876b2c1 +0x1d51:  mov    -0x100(%ebp),%edi
0876b2c7 +0x1d57:  and    -0xf0(%ebp),%edi
0876b2cd +0x1d5d:  or     -0xf0(%ebp),%esi
0876b2d3 +0x1d63:  mov    -0xfc(%ebp),%ecx
0876b2d9 +0x1d69:  mov    %edi,-0xd8(%ebp)
0876b2df +0x1d6f:  mov    -0xfc(%ebp),%edi
0876b2e5 +0x1d75:  and    -0x110(%ebp),%esi
0876b2eb +0x1d7b:  or     -0xd8(%ebp),%esi
0876b2f1 +0x1d81:  and    -0xec(%ebp),%edi
0876b2f7 +0x1d87:  or     -0xec(%ebp),%ecx
0876b2fd +0x1d8d:  and    -0x10c(%ebp),%ecx
0876b303 +0x1d93:  mov    %esi,-0x240(%ebp)
0876b309 +0x1d99:  mov    -0x100(%ebp),%esi
0876b30f +0x1d9f:  or     %edi,%ecx
0876b311 +0x1da1:  mov    -0xfc(%ebp),%edi
0876b317 +0x1da7:  mov    %ecx,-0x23c(%ebp)
0876b31d +0x1dad:  mov    %esi,%ecx
0876b31f +0x1daf:  shld   $0x1e,%edi,%esi
0876b323 +0x1db3:  shld   $0x1e,%ecx,%edi
0876b327 +0x1db7:  mov    %esi,-0x120(%ebp)
0876b32d +0x1dbd:  mov    -0x100(%ebp),%esi
0876b333 +0x1dc3:  mov    %edi,-0x11c(%ebp)
0876b339 +0x1dc9:  mov    -0xfc(%ebp),%edi
0876b33f +0x1dcf:  mov    %esi,%ecx
0876b341 +0x1dd1:  shrd   $0x1c,%edi,%esi
0876b345 +0x1dd5:  xor    -0x120(%ebp),%esi
0876b34b +0x1ddb:  shrd   $0x1c,%ecx,%edi
0876b34f +0x1ddf:  xor    -0x11c(%ebp),%edi
0876b355 +0x1de5:  mov    %esi,-0xd8(%ebp)
0876b35b +0x1deb:  mov    -0x100(%ebp),%esi
0876b361 +0x1df1:  mov    %edi,-0xe0(%ebp)
0876b367 +0x1df7:  mov    -0xfc(%ebp),%edi
0876b36d +0x1dfd:  mov    %esi,%ecx
0876b36f +0x1dff:  shld   $0x19,%edi,%esi
0876b373 +0x1e03:  shld   $0x19,%ecx,%edi
0876b377 +0x1e07:  mov    -0xd8(%ebp),%ecx
0876b37d +0x1e0d:  xor    %esi,%ecx
0876b37f +0x1e0f:  mov    -0x240(%ebp),%esi
0876b385 +0x1e15:  mov    %ecx,-0x248(%ebp)
0876b38b +0x1e1b:  mov    -0xe0(%ebp),%ecx
0876b391 +0x1e21:  xor    %edi,%ecx
0876b393 +0x1e23:  mov    -0x23c(%ebp),%edi
0876b399 +0x1e29:  add    -0x248(%ebp),%esi
0876b39f +0x1e2f:  mov    %ecx,-0x244(%ebp)
0876b3a5 +0x1e35:  adc    -0x244(%ebp),%edi
0876b3ab +0x1e3b:  mov    %esi,-0xe0(%ebp)
0876b3b1 +0x1e41:  add    %eax,-0xe0(%ebp)
0876b3b7 +0x1e47:  mov    -0x138(%ebp),%eax
0876b3bd +0x1e4d:  mov    %edi,-0xdc(%ebp)
0876b3c3 +0x1e53:  adc    %edx,-0xdc(%ebp)
0876b3c9 +0x1e59:  mov    -0x134(%ebp),%edx
0876b3cf +0x1e5f:  mov    0x40(%eax),%esi
0876b3d2 +0x1e62:  mov    0x44(%eax),%edi
0876b3d5 +0x1e65:  test   %edx,%edx
0876b3d7 +0x1e67:  je     0876d270 <+0x3d00>
0876b3dd +0x1e6d:  mov    -0xc8(%ebp),%edx
0876b3e3 +0x1e73:  mov    -0xc4(%ebp),%ecx
0876b3e9 +0x1e79:  mov    -0x90(%ebp),%eax
0876b3ef +0x1e7f:  mov    %edx,-0xd8(%ebp)
0876b3f5 +0x1e85:  mov    -0x8c(%ebp),%edx
0876b3fb +0x1e8b:  add    %eax,-0xd8(%ebp)
0876b401 +0x1e91:  mov    %ecx,-0xd4(%ebp)
0876b407 +0x1e97:  mov    -0x9c(%ebp),%ecx
0876b40d +0x1e9d:  adc    %edx,-0xd4(%ebp)
0876b413 +0x1ea3:  mov    -0xa0(%ebp),%edx
0876b419 +0x1ea9:  mov    %edx,%eax
0876b41b +0x1eab:  shrd   $0x13,%ecx,%edx
0876b41f +0x1eaf:  shrd   $0x13,%eax,%ecx
0876b423 +0x1eb3:  mov    %edx,-0x128(%ebp)
0876b429 +0x1eb9:  mov    -0xa0(%ebp),%edx
0876b42f +0x1ebf:  mov    %ecx,-0x124(%ebp)
0876b435 +0x1ec5:  mov    -0x9c(%ebp),%ecx
0876b43b +0x1ecb:  mov    -0x124(%ebp),%eax
0876b441 +0x1ed1:  shrd   $0x6,%ecx,%edx
0876b445 +0x1ed5:  shr    $0x6,%ecx
0876b448 +0x1ed8:  mov    %ecx,-0x12c(%ebp)
0876b44e +0x1ede:  mov    -0x128(%ebp),%ecx
0876b454 +0x1ee4:  xor    -0x12c(%ebp),%eax
0876b45a +0x1eea:  mov    %eax,-0x120(%ebp)
0876b460 +0x1ef0:  mov    -0xa0(%ebp),%eax
0876b466 +0x1ef6:  xor    %edx,%ecx
0876b468 +0x1ef8:  mov    -0x9c(%ebp),%edx
0876b46e +0x1efe:  mov    %ecx,-0x140(%ebp)
0876b474 +0x1f04:  mov    %eax,%ecx
0876b476 +0x1f06:  shld   $0x3,%edx,%eax
0876b47a +0x1f0a:  shld   $0x3,%ecx,%edx
0876b47e +0x1f0e:  mov    -0x140(%ebp),%ecx
0876b484 +0x1f14:  xor    %eax,%ecx
0876b486 +0x1f16:  mov    %ecx,-0x3d0(%ebp)
0876b48c +0x1f1c:  mov    -0x120(%ebp),%ecx
0876b492 +0x1f22:  mov    -0x3d0(%ebp),%eax
0876b498 +0x1f28:  xor    %edx,%ecx
0876b49a +0x1f2a:  mov    %ecx,-0x3cc(%ebp)
0876b4a0 +0x1f30:  mov    -0x3cc(%ebp),%edx
0876b4a6 +0x1f36:  add    %eax,-0xd8(%ebp)
0876b4ac +0x1f3c:  adc    %edx,-0xd4(%ebp)
0876b4b2 +0x1f42:  mov    -0x88(%ebp),%edx
0876b4b8 +0x1f48:  mov    -0x84(%ebp),%ecx
0876b4be +0x1f4e:  mov    %edx,%eax
0876b4c0 +0x1f50:  shrd   $0x1,%ecx,%edx
0876b4c4 +0x1f54:  shrd   $0x1,%eax,%ecx
0876b4c8 +0x1f58:  mov    -0x88(%ebp),%eax
0876b4ce +0x1f5e:  mov    %edx,-0x120(%ebp)
0876b4d4 +0x1f64:  mov    -0x88(%ebp),%edx
0876b4da +0x1f6a:  mov    %ecx,-0x11c(%ebp)
0876b4e0 +0x1f70:  mov    -0x84(%ebp),%ecx
0876b4e6 +0x1f76:  shrd   $0x7,%ecx,%edx
0876b4ea +0x1f7a:  xor    -0x120(%ebp),%edx
0876b4f0 +0x1f80:  shr    $0x7,%ecx
0876b4f3 +0x1f83:  xor    -0x11c(%ebp),%ecx
0876b4f9 +0x1f89:  mov    %edx,-0x130(%ebp)
0876b4ff +0x1f8f:  mov    -0x84(%ebp),%edx
0876b505 +0x1f95:  mov    %ecx,-0x120(%ebp)
0876b50b +0x1f9b:  mov    %eax,%ecx
0876b50d +0x1f9d:  shrd   $0x8,%edx,%eax
0876b511 +0x1fa1:  shrd   $0x8,%ecx,%edx
0876b515 +0x1fa5:  mov    -0x130(%ebp),%ecx
0876b51b +0x1fab:  xor    %eax,%ecx
0876b51d +0x1fad:  mov    %ecx,-0x3d8(%ebp)
0876b523 +0x1fb3:  mov    -0x120(%ebp),%ecx
0876b529 +0x1fb9:  mov    -0x3d8(%ebp),%eax
0876b52f +0x1fbf:  xor    %edx,%ecx
0876b531 +0x1fc1:  mov    %ecx,-0x3d4(%ebp)
0876b537 +0x1fc7:  mov    -0x3d4(%ebp),%edx
0876b53d +0x1fcd:  add    %eax,-0xd8(%ebp)
0876b543 +0x1fd3:  adc    %edx,-0xd4(%ebp)
0876b549 +0x1fd9:  mov    -0xd4(%ebp),%ecx
0876b54f +0x1fdf:  mov    -0xd8(%ebp),%edx
0876b555 +0x1fe5:  mov    %ecx,-0x8c(%ebp)
0876b55b +0x1feb:  mov    %edx,-0x90(%ebp)
0876b561 +0x1ff1:  mov    -0x108(%ebp),%eax
0876b567 +0x1ff7:  mov    -0x104(%ebp),%edx
0876b56d +0x1ffd:  mov    -0x118(%ebp),%ecx
0876b573 +0x2003:  add    %esi,%eax
0876b575 +0x2005:  mov    -0x114(%ebp),%esi
0876b57b +0x200b:  adc    %edi,%edx
0876b57d +0x200d:  mov    -0xf4(%ebp),%edi
0876b583 +0x2013:  xor    -0xe4(%ebp),%esi
0876b589 +0x2019:  and    -0xf4(%ebp),%esi
0876b58f +0x201f:  xor    -0xe4(%ebp),%esi
0876b595 +0x2025:  xor    -0xe8(%ebp),%ecx
0876b59b +0x202b:  and    -0xf8(%ebp),%ecx
0876b5a1 +0x2031:  mov    %esi,-0x24c(%ebp)
0876b5a7 +0x2037:  mov    -0xf8(%ebp),%esi
0876b5ad +0x203d:  xor    -0xe8(%ebp),%ecx
0876b5b3 +0x2043:  mov    %ecx,-0x250(%ebp)
0876b5b9 +0x2049:  mov    %esi,%ecx
0876b5bb +0x204b:  add    -0x250(%ebp),%eax
0876b5c1 +0x2051:  adc    -0x24c(%ebp),%edx
0876b5c7 +0x2057:  shrd   $0x12,%edi,%esi
0876b5cb +0x205b:  shrd   $0x12,%ecx,%edi
0876b5cf +0x205f:  mov    %esi,-0x128(%ebp)
0876b5d5 +0x2065:  mov    -0xf8(%ebp),%esi
0876b5db +0x206b:  mov    %edi,-0x124(%ebp)
0876b5e1 +0x2071:  mov    -0xf4(%ebp),%edi
0876b5e7 +0x2077:  mov    %esi,%ecx
0876b5e9 +0x2079:  shrd   $0xe,%edi,%esi
0876b5ed +0x207d:  xor    -0x128(%ebp),%esi
0876b5f3 +0x2083:  shrd   $0xe,%ecx,%edi
0876b5f7 +0x2087:  xor    -0x124(%ebp),%edi
0876b5fd +0x208d:  mov    %esi,-0x120(%ebp)
0876b603 +0x2093:  mov    -0xf8(%ebp),%esi
0876b609 +0x2099:  mov    %edi,-0x108(%ebp)
0876b60f +0x209f:  mov    -0xf4(%ebp),%edi
0876b615 +0x20a5:  mov    %esi,%ecx
0876b617 +0x20a7:  shld   $0x17,%edi,%esi
0876b61b +0x20ab:  shld   $0x17,%ecx,%edi
0876b61f +0x20af:  mov    -0x120(%ebp),%ecx
0876b625 +0x20b5:  xor    %esi,%ecx
0876b627 +0x20b7:  mov    -0x110(%ebp),%esi
0876b62d +0x20bd:  mov    %ecx,-0x258(%ebp)
0876b633 +0x20c3:  mov    -0x108(%ebp),%ecx
0876b639 +0x20c9:  xor    %edi,%ecx
0876b63b +0x20cb:  mov    -0x10c(%ebp),%edi
0876b641 +0x20d1:  mov    %ecx,-0x254(%ebp)
0876b647 +0x20d7:  add    -0x258(%ebp),%eax
0876b64d +0x20dd:  adc    -0x254(%ebp),%edx
0876b653 +0x20e3:  add    -0xd8(%ebp),%eax
0876b659 +0x20e9:  adc    -0xd4(%ebp),%edx
0876b65f +0x20ef:  add    %eax,%esi
0876b661 +0x20f1:  adc    %edx,%edi
0876b663 +0x20f3:  mov    %esi,-0x110(%ebp)
0876b669 +0x20f9:  mov    -0xe0(%ebp),%esi
0876b66f +0x20ff:  mov    %edi,-0x10c(%ebp)
0876b675 +0x2105:  mov    -0xe0(%ebp),%edi
0876b67b +0x210b:  and    -0x100(%ebp),%edi
0876b681 +0x2111:  or     -0x100(%ebp),%esi
0876b687 +0x2117:  mov    -0xdc(%ebp),%ecx
0876b68d +0x211d:  mov    %edi,-0xd8(%ebp)
0876b693 +0x2123:  mov    -0xdc(%ebp),%edi
0876b699 +0x2129:  and    -0xf0(%ebp),%esi
0876b69f +0x212f:  or     -0xd8(%ebp),%esi
0876b6a5 +0x2135:  and    -0xfc(%ebp),%edi
0876b6ab +0x213b:  or     -0xfc(%ebp),%ecx
0876b6b1 +0x2141:  and    -0xec(%ebp),%ecx
0876b6b7 +0x2147:  mov    %esi,-0x260(%ebp)
0876b6bd +0x214d:  mov    -0xe0(%ebp),%esi
0876b6c3 +0x2153:  or     %edi,%ecx
0876b6c5 +0x2155:  mov    -0xdc(%ebp),%edi
0876b6cb +0x215b:  mov    %ecx,-0x25c(%ebp)
0876b6d1 +0x2161:  mov    %esi,%ecx
0876b6d3 +0x2163:  shld   $0x1e,%edi,%esi
0876b6d7 +0x2167:  shld   $0x1e,%ecx,%edi
0876b6db +0x216b:  mov    %esi,-0x120(%ebp)
0876b6e1 +0x2171:  mov    -0xe0(%ebp),%esi
0876b6e7 +0x2177:  mov    %edi,-0x11c(%ebp)
0876b6ed +0x217d:  mov    -0xdc(%ebp),%edi
0876b6f3 +0x2183:  mov    %esi,%ecx
0876b6f5 +0x2185:  shrd   $0x1c,%edi,%esi
0876b6f9 +0x2189:  xor    -0x120(%ebp),%esi
0876b6ff +0x218f:  shrd   $0x1c,%ecx,%edi
0876b703 +0x2193:  xor    -0x11c(%ebp),%edi
0876b709 +0x2199:  mov    %esi,-0xd8(%ebp)
0876b70f +0x219f:  mov    -0xe0(%ebp),%esi
0876b715 +0x21a5:  mov    %edi,-0x108(%ebp)
0876b71b +0x21ab:  mov    -0xdc(%ebp),%edi
0876b721 +0x21b1:  mov    %esi,%ecx
0876b723 +0x21b3:  shld   $0x19,%edi,%esi
0876b727 +0x21b7:  shld   $0x19,%ecx,%edi
0876b72b +0x21bb:  mov    -0xd8(%ebp),%ecx
0876b731 +0x21c1:  xor    %esi,%ecx
0876b733 +0x21c3:  mov    -0x260(%ebp),%esi
0876b739 +0x21c9:  mov    %ecx,-0x268(%ebp)
0876b73f +0x21cf:  mov    -0x108(%ebp),%ecx
0876b745 +0x21d5:  xor    %edi,%ecx
0876b747 +0x21d7:  mov    -0x25c(%ebp),%edi
0876b74d +0x21dd:  add    -0x268(%ebp),%esi
0876b753 +0x21e3:  mov    %ecx,-0x264(%ebp)
0876b759 +0x21e9:  adc    -0x264(%ebp),%edi
0876b75f +0x21ef:  mov    %esi,-0x108(%ebp)
0876b765 +0x21f5:  add    %eax,-0x108(%ebp)
0876b76b +0x21fb:  mov    -0x138(%ebp),%eax
0876b771 +0x2201:  mov    %edi,-0x104(%ebp)
0876b777 +0x2207:  adc    %edx,-0x104(%ebp)
0876b77d +0x220d:  mov    -0x134(%ebp),%edx
0876b783 +0x2213:  mov    0x48(%eax),%esi
0876b786 +0x2216:  mov    0x4c(%eax),%edi
0876b789 +0x2219:  test   %edx,%edx
0876b78b +0x221b:  je     0876d240 <+0x3cd0>
0876b791 +0x2221:  mov    -0xc0(%ebp),%edx
0876b797 +0x2227:  mov    -0xbc(%ebp),%ecx
0876b79d +0x222d:  mov    -0x88(%ebp),%eax
0876b7a3 +0x2233:  mov    %edx,-0xd8(%ebp)
0876b7a9 +0x2239:  mov    -0x84(%ebp),%edx
0876b7af +0x223f:  add    %eax,-0xd8(%ebp)
0876b7b5 +0x2245:  mov    %ecx,-0xd4(%ebp)
0876b7bb +0x224b:  mov    -0x94(%ebp),%ecx
0876b7c1 +0x2251:  adc    %edx,-0xd4(%ebp)
0876b7c7 +0x2257:  mov    -0x98(%ebp),%edx
0876b7cd +0x225d:  mov    %edx,%eax
0876b7cf +0x225f:  shrd   $0x13,%ecx,%edx
0876b7d3 +0x2263:  shrd   $0x13,%eax,%ecx
0876b7d7 +0x2267:  mov    %edx,-0x128(%ebp)
0876b7dd +0x226d:  mov    -0x98(%ebp),%edx
0876b7e3 +0x2273:  mov    %ecx,-0x124(%ebp)
0876b7e9 +0x2279:  mov    -0x94(%ebp),%ecx
0876b7ef +0x227f:  mov    -0x124(%ebp),%eax
0876b7f5 +0x2285:  shrd   $0x6,%ecx,%edx
0876b7f9 +0x2289:  shr    $0x6,%ecx
0876b7fc +0x228c:  mov    %ecx,-0x12c(%ebp)
0876b802 +0x2292:  mov    -0x128(%ebp),%ecx
0876b808 +0x2298:  xor    -0x12c(%ebp),%eax
0876b80e +0x229e:  mov    %eax,-0x120(%ebp)
0876b814 +0x22a4:  mov    -0x98(%ebp),%eax
0876b81a +0x22aa:  xor    %edx,%ecx
0876b81c +0x22ac:  mov    -0x94(%ebp),%edx
0876b822 +0x22b2:  mov    %ecx,-0x140(%ebp)
0876b828 +0x22b8:  mov    %eax,%ecx
0876b82a +0x22ba:  shld   $0x3,%edx,%eax
0876b82e +0x22be:  shld   $0x3,%ecx,%edx
0876b832 +0x22c2:  mov    -0x140(%ebp),%ecx
0876b838 +0x22c8:  xor    %eax,%ecx
0876b83a +0x22ca:  mov    %ecx,-0x3e0(%ebp)
0876b840 +0x22d0:  mov    -0x120(%ebp),%ecx
0876b846 +0x22d6:  mov    -0x3e0(%ebp),%eax
0876b84c +0x22dc:  xor    %edx,%ecx
0876b84e +0x22de:  mov    %ecx,-0x3dc(%ebp)
0876b854 +0x22e4:  mov    -0x3dc(%ebp),%edx
0876b85a +0x22ea:  add    %eax,-0xd8(%ebp)
0876b860 +0x22f0:  adc    %edx,-0xd4(%ebp)
0876b866 +0x22f6:  mov    -0x80(%ebp),%edx
0876b869 +0x22f9:  mov    -0x7c(%ebp),%ecx
0876b86c +0x22fc:  mov    %edx,%eax
0876b86e +0x22fe:  shrd   $0x1,%ecx,%edx
0876b872 +0x2302:  shrd   $0x1,%eax,%ecx
0876b876 +0x2306:  mov    -0x80(%ebp),%eax
0876b879 +0x2309:  mov    %edx,-0x120(%ebp)
0876b87f +0x230f:  mov    -0x80(%ebp),%edx
0876b882 +0x2312:  mov    %ecx,-0x11c(%ebp)
0876b888 +0x2318:  mov    -0x7c(%ebp),%ecx
0876b88b +0x231b:  shrd   $0x7,%ecx,%edx
0876b88f +0x231f:  xor    -0x120(%ebp),%edx
0876b895 +0x2325:  shr    $0x7,%ecx
0876b898 +0x2328:  xor    -0x11c(%ebp),%ecx
0876b89e +0x232e:  mov    %edx,-0x130(%ebp)
0876b8a4 +0x2334:  mov    -0x7c(%ebp),%edx
0876b8a7 +0x2337:  mov    %ecx,-0x120(%ebp)
0876b8ad +0x233d:  mov    %eax,%ecx
0876b8af +0x233f:  shrd   $0x8,%edx,%eax
0876b8b3 +0x2343:  shrd   $0x8,%ecx,%edx
0876b8b7 +0x2347:  mov    -0x130(%ebp),%ecx
0876b8bd +0x234d:  xor    %eax,%ecx
0876b8bf +0x234f:  mov    %ecx,-0x3e8(%ebp)
0876b8c5 +0x2355:  mov    -0x120(%ebp),%ecx
0876b8cb +0x235b:  mov    -0x3e8(%ebp),%eax
0876b8d1 +0x2361:  xor    %edx,%ecx
0876b8d3 +0x2363:  mov    %ecx,-0x3e4(%ebp)
0876b8d9 +0x2369:  mov    -0x3e4(%ebp),%edx
0876b8df +0x236f:  add    %eax,-0xd8(%ebp)
0876b8e5 +0x2375:  adc    %edx,-0xd4(%ebp)
0876b8eb +0x237b:  mov    -0xd4(%ebp),%ecx
0876b8f1 +0x2381:  mov    -0xd8(%ebp),%edx
0876b8f7 +0x2387:  mov    %ecx,-0x84(%ebp)
0876b8fd +0x238d:  mov    %edx,-0x88(%ebp)
0876b903 +0x2393:  mov    -0xe8(%ebp),%eax
0876b909 +0x2399:  mov    -0xe4(%ebp),%edx
0876b90f +0x239f:  mov    -0xf8(%ebp),%ecx
0876b915 +0x23a5:  add    %esi,%eax
0876b917 +0x23a7:  mov    -0xf4(%ebp),%esi
0876b91d +0x23ad:  adc    %edi,%edx
0876b91f +0x23af:  mov    -0x10c(%ebp),%edi
0876b925 +0x23b5:  xor    -0x114(%ebp),%esi
0876b92b +0x23bb:  and    -0x10c(%ebp),%esi
0876b931 +0x23c1:  xor    -0x114(%ebp),%esi
0876b937 +0x23c7:  xor    -0x118(%ebp),%ecx
0876b93d +0x23cd:  and    -0x110(%ebp),%ecx
0876b943 +0x23d3:  mov    %esi,-0x26c(%ebp)
0876b949 +0x23d9:  mov    -0x110(%ebp),%esi
0876b94f +0x23df:  xor    -0x118(%ebp),%ecx
0876b955 +0x23e5:  mov    %ecx,-0x270(%ebp)
0876b95b +0x23eb:  mov    %esi,%ecx
0876b95d +0x23ed:  add    -0x270(%ebp),%eax
0876b963 +0x23f3:  adc    -0x26c(%ebp),%edx
0876b969 +0x23f9:  shrd   $0x12,%edi,%esi
0876b96d +0x23fd:  shrd   $0x12,%ecx,%edi
0876b971 +0x2401:  mov    %esi,-0x128(%ebp)
0876b977 +0x2407:  mov    -0x110(%ebp),%esi
0876b97d +0x240d:  mov    %edi,-0x124(%ebp)
0876b983 +0x2413:  mov    -0x10c(%ebp),%edi
0876b989 +0x2419:  mov    %esi,%ecx
0876b98b +0x241b:  shrd   $0xe,%edi,%esi
0876b98f +0x241f:  xor    -0x128(%ebp),%esi
0876b995 +0x2425:  shrd   $0xe,%ecx,%edi
0876b999 +0x2429:  xor    -0x124(%ebp),%edi
0876b99f +0x242f:  mov    %esi,-0x120(%ebp)
0876b9a5 +0x2435:  mov    -0x110(%ebp),%esi
0876b9ab +0x243b:  mov    %edi,-0xe8(%ebp)
0876b9b1 +0x2441:  mov    -0x10c(%ebp),%edi
0876b9b7 +0x2447:  mov    %esi,%ecx
0876b9b9 +0x2449:  shld   $0x17,%edi,%esi
0876b9bd +0x244d:  shld   $0x17,%ecx,%edi
0876b9c1 +0x2451:  mov    -0x120(%ebp),%ecx
0876b9c7 +0x2457:  xor    %esi,%ecx
0876b9c9 +0x2459:  mov    -0xf0(%ebp),%esi
0876b9cf +0x245f:  mov    %ecx,-0x278(%ebp)
0876b9d5 +0x2465:  mov    -0xe8(%ebp),%ecx
0876b9db +0x246b:  xor    %edi,%ecx
0876b9dd +0x246d:  mov    -0xec(%ebp),%edi
0876b9e3 +0x2473:  mov    %ecx,-0x274(%ebp)
0876b9e9 +0x2479:  add    -0x278(%ebp),%eax
0876b9ef +0x247f:  adc    -0x274(%ebp),%edx
0876b9f5 +0x2485:  add    -0xd8(%ebp),%eax
0876b9fb +0x248b:  adc    -0xd4(%ebp),%edx
0876ba01 +0x2491:  add    %eax,%esi
0876ba03 +0x2493:  adc    %edx,%edi
0876ba05 +0x2495:  mov    %esi,-0xf0(%ebp)
0876ba0b +0x249b:  mov    -0x108(%ebp),%esi
0876ba11 +0x24a1:  mov    %edi,-0xec(%ebp)
0876ba17 +0x24a7:  mov    -0x108(%ebp),%edi
0876ba1d +0x24ad:  and    -0xe0(%ebp),%edi
0876ba23 +0x24b3:  or     -0xe0(%ebp),%esi
0876ba29 +0x24b9:  mov    -0x104(%ebp),%ecx
0876ba2f +0x24bf:  mov    %edi,-0xd8(%ebp)
0876ba35 +0x24c5:  mov    -0x104(%ebp),%edi
0876ba3b +0x24cb:  and    -0x100(%ebp),%esi
0876ba41 +0x24d1:  or     -0xd8(%ebp),%esi
0876ba47 +0x24d7:  and    -0xdc(%ebp),%edi
0876ba4d +0x24dd:  or     -0xdc(%ebp),%ecx
0876ba53 +0x24e3:  and    -0xfc(%ebp),%ecx
0876ba59 +0x24e9:  mov    %esi,-0x280(%ebp)
0876ba5f +0x24ef:  mov    -0x108(%ebp),%esi
0876ba65 +0x24f5:  or     %edi,%ecx
0876ba67 +0x24f7:  mov    -0x104(%ebp),%edi
0876ba6d +0x24fd:  mov    %ecx,-0x27c(%ebp)
0876ba73 +0x2503:  mov    %esi,%ecx
0876ba75 +0x2505:  shld   $0x1e,%edi,%esi
0876ba79 +0x2509:  shld   $0x1e,%ecx,%edi
0876ba7d +0x250d:  mov    %esi,-0x120(%ebp)
0876ba83 +0x2513:  mov    -0x108(%ebp),%esi
0876ba89 +0x2519:  mov    %edi,-0x11c(%ebp)
0876ba8f +0x251f:  mov    -0x104(%ebp),%edi
0876ba95 +0x2525:  mov    %esi,%ecx
0876ba97 +0x2527:  shrd   $0x1c,%edi,%esi
0876ba9b +0x252b:  xor    -0x120(%ebp),%esi
0876baa1 +0x2531:  shrd   $0x1c,%ecx,%edi
0876baa5 +0x2535:  xor    -0x11c(%ebp),%edi
0876baab +0x253b:  mov    %esi,-0xd8(%ebp)
0876bab1 +0x2541:  mov    -0x108(%ebp),%esi
0876bab7 +0x2547:  mov    %edi,-0xe8(%ebp)
0876babd +0x254d:  mov    -0x104(%ebp),%edi
0876bac3 +0x2553:  mov    %esi,%ecx
0876bac5 +0x2555:  shld   $0x19,%edi,%esi
0876bac9 +0x2559:  shld   $0x19,%ecx,%edi
0876bacd +0x255d:  mov    -0xd8(%ebp),%ecx
0876bad3 +0x2563:  xor    %esi,%ecx
0876bad5 +0x2565:  mov    -0x280(%ebp),%esi
0876badb +0x256b:  mov    %ecx,-0x288(%ebp)
0876bae1 +0x2571:  mov    -0xe8(%ebp),%ecx
0876bae7 +0x2577:  xor    %edi,%ecx
0876bae9 +0x2579:  mov    -0x27c(%ebp),%edi
0876baef +0x257f:  add    -0x288(%ebp),%esi
0876baf5 +0x2585:  mov    %ecx,-0x284(%ebp)
0876bafb +0x258b:  adc    -0x284(%ebp),%edi
0876bb01 +0x2591:  mov    %esi,-0xe8(%ebp)
0876bb07 +0x2597:  add    %eax,-0xe8(%ebp)
0876bb0d +0x259d:  mov    -0x138(%ebp),%eax
0876bb13 +0x25a3:  mov    %edi,-0xe4(%ebp)
0876bb19 +0x25a9:  adc    %edx,-0xe4(%ebp)
0876bb1f +0x25af:  mov    -0x134(%ebp),%edx
0876bb25 +0x25b5:  mov    0x50(%eax),%esi
0876bb28 +0x25b8:  mov    0x54(%eax),%edi
0876bb2b +0x25bb:  test   %edx,%edx
0876bb2d +0x25bd:  je     0876d218 <+0x3ca8>
0876bb33 +0x25c3:  mov    -0xb8(%ebp),%edx
0876bb39 +0x25c9:  mov    -0xb4(%ebp),%ecx
0876bb3f +0x25cf:  mov    -0x80(%ebp),%eax
0876bb42 +0x25d2:  mov    %edx,-0xd8(%ebp)
0876bb48 +0x25d8:  mov    -0x7c(%ebp),%edx
0876bb4b +0x25db:  add    %eax,-0xd8(%ebp)
0876bb51 +0x25e1:  mov    %ecx,-0xd4(%ebp)
0876bb57 +0x25e7:  mov    -0x8c(%ebp),%ecx
0876bb5d +0x25ed:  adc    %edx,-0xd4(%ebp)
0876bb63 +0x25f3:  mov    -0x90(%ebp),%edx
0876bb69 +0x25f9:  mov    %edx,%eax
0876bb6b +0x25fb:  shrd   $0x13,%ecx,%edx
0876bb6f +0x25ff:  shrd   $0x13,%eax,%ecx
0876bb73 +0x2603:  mov    %edx,-0x128(%ebp)
0876bb79 +0x2609:  mov    -0x90(%ebp),%edx
0876bb7f +0x260f:  mov    %ecx,-0x124(%ebp)
0876bb85 +0x2615:  mov    -0x8c(%ebp),%ecx
0876bb8b +0x261b:  mov    -0x124(%ebp),%eax
0876bb91 +0x2621:  shrd   $0x6,%ecx,%edx
0876bb95 +0x2625:  shr    $0x6,%ecx
0876bb98 +0x2628:  mov    %ecx,-0x12c(%ebp)
0876bb9e +0x262e:  mov    -0x128(%ebp),%ecx
0876bba4 +0x2634:  xor    -0x12c(%ebp),%eax
0876bbaa +0x263a:  mov    %eax,-0x120(%ebp)
0876bbb0 +0x2640:  mov    -0x90(%ebp),%eax
0876bbb6 +0x2646:  xor    %edx,%ecx
0876bbb8 +0x2648:  mov    -0x8c(%ebp),%edx
0876bbbe +0x264e:  mov    %ecx,-0x140(%ebp)
0876bbc4 +0x2654:  mov    %eax,%ecx
0876bbc6 +0x2656:  shld   $0x3,%edx,%eax
0876bbca +0x265a:  shld   $0x3,%ecx,%edx
0876bbce +0x265e:  mov    -0x140(%ebp),%ecx
0876bbd4 +0x2664:  xor    %eax,%ecx
0876bbd6 +0x2666:  mov    %ecx,-0x3f0(%ebp)
0876bbdc +0x266c:  mov    -0x120(%ebp),%ecx
0876bbe2 +0x2672:  mov    -0x3f0(%ebp),%eax
0876bbe8 +0x2678:  xor    %edx,%ecx
0876bbea +0x267a:  mov    %ecx,-0x3ec(%ebp)
0876bbf0 +0x2680:  mov    -0x3ec(%ebp),%edx
0876bbf6 +0x2686:  add    %eax,-0xd8(%ebp)
0876bbfc +0x268c:  adc    %edx,-0xd4(%ebp)
0876bc02 +0x2692:  mov    -0x78(%ebp),%edx
0876bc05 +0x2695:  mov    -0x74(%ebp),%ecx
0876bc08 +0x2698:  mov    %edx,%eax
0876bc0a +0x269a:  shrd   $0x1,%ecx,%edx
0876bc0e +0x269e:  shrd   $0x1,%eax,%ecx
0876bc12 +0x26a2:  mov    -0x78(%ebp),%eax
0876bc15 +0x26a5:  mov    %edx,-0x120(%ebp)
0876bc1b +0x26ab:  mov    -0x78(%ebp),%edx
0876bc1e +0x26ae:  mov    %ecx,-0x11c(%ebp)
0876bc24 +0x26b4:  mov    -0x74(%ebp),%ecx
0876bc27 +0x26b7:  shrd   $0x7,%ecx,%edx
0876bc2b +0x26bb:  xor    -0x120(%ebp),%edx
0876bc31 +0x26c1:  shr    $0x7,%ecx
0876bc34 +0x26c4:  xor    -0x11c(%ebp),%ecx
0876bc3a +0x26ca:  mov    %edx,-0x130(%ebp)
0876bc40 +0x26d0:  mov    -0x74(%ebp),%edx
0876bc43 +0x26d3:  mov    %ecx,-0x120(%ebp)
0876bc49 +0x26d9:  mov    %eax,%ecx
0876bc4b +0x26db:  shrd   $0x8,%edx,%eax
0876bc4f +0x26df:  shrd   $0x8,%ecx,%edx
0876bc53 +0x26e3:  mov    -0x130(%ebp),%ecx
0876bc59 +0x26e9:  xor    %eax,%ecx
0876bc5b +0x26eb:  mov    %ecx,-0x3f8(%ebp)
0876bc61 +0x26f1:  mov    -0x120(%ebp),%ecx
0876bc67 +0x26f7:  mov    -0x3f8(%ebp),%eax
0876bc6d +0x26fd:  xor    %edx,%ecx
0876bc6f +0x26ff:  mov    %ecx,-0x3f4(%ebp)
0876bc75 +0x2705:  mov    -0x3f4(%ebp),%edx
0876bc7b +0x270b:  add    %eax,-0xd8(%ebp)
0876bc81 +0x2711:  adc    %edx,-0xd4(%ebp)
0876bc87 +0x2717:  mov    -0xd4(%ebp),%ecx
0876bc8d +0x271d:  mov    -0xd8(%ebp),%edx
0876bc93 +0x2723:  mov    %ecx,-0x7c(%ebp)
0876bc96 +0x2726:  mov    %edx,-0x80(%ebp)
0876bc99 +0x2729:  mov    -0x118(%ebp),%eax
0876bc9f +0x272f:  mov    -0x114(%ebp),%edx
0876bca5 +0x2735:  mov    -0x110(%ebp),%ecx
0876bcab +0x273b:  add    %esi,%eax
0876bcad +0x273d:  mov    -0x10c(%ebp),%esi
0876bcb3 +0x2743:  adc    %edi,%edx
0876bcb5 +0x2745:  mov    -0xec(%ebp),%edi
0876bcbb +0x274b:  xor    -0xf4(%ebp),%esi
0876bcc1 +0x2751:  and    -0xec(%ebp),%esi
0876bcc7 +0x2757:  xor    -0xf4(%ebp),%esi
0876bccd +0x275d:  xor    -0xf8(%ebp),%ecx
0876bcd3 +0x2763:  and    -0xf0(%ebp),%ecx
0876bcd9 +0x2769:  mov    %esi,-0x28c(%ebp)
0876bcdf +0x276f:  mov    -0xf0(%ebp),%esi
0876bce5 +0x2775:  xor    -0xf8(%ebp),%ecx
0876bceb +0x277b:  mov    %ecx,-0x290(%ebp)
0876bcf1 +0x2781:  mov    %esi,%ecx
0876bcf3 +0x2783:  add    -0x290(%ebp),%eax
0876bcf9 +0x2789:  adc    -0x28c(%ebp),%edx
0876bcff +0x278f:  shrd   $0x12,%edi,%esi
0876bd03 +0x2793:  shrd   $0x12,%ecx,%edi
0876bd07 +0x2797:  mov    %esi,-0x128(%ebp)
0876bd0d +0x279d:  mov    -0xf0(%ebp),%esi
0876bd13 +0x27a3:  mov    %edi,-0x124(%ebp)
0876bd19 +0x27a9:  mov    -0xec(%ebp),%edi
0876bd1f +0x27af:  mov    %esi,%ecx
0876bd21 +0x27b1:  shrd   $0xe,%edi,%esi
0876bd25 +0x27b5:  xor    -0x128(%ebp),%esi
0876bd2b +0x27bb:  shrd   $0xe,%ecx,%edi
0876bd2f +0x27bf:  xor    -0x124(%ebp),%edi
0876bd35 +0x27c5:  mov    %esi,-0x120(%ebp)
0876bd3b +0x27cb:  mov    -0xf0(%ebp),%esi
0876bd41 +0x27d1:  mov    %edi,-0x118(%ebp)
0876bd47 +0x27d7:  mov    -0xec(%ebp),%edi
0876bd4d +0x27dd:  mov    %esi,%ecx
0876bd4f +0x27df:  shld   $0x17,%edi,%esi
0876bd53 +0x27e3:  shld   $0x17,%ecx,%edi
0876bd57 +0x27e7:  mov    -0x120(%ebp),%ecx
0876bd5d +0x27ed:  xor    %esi,%ecx
0876bd5f +0x27ef:  mov    -0x100(%ebp),%esi
0876bd65 +0x27f5:  mov    %ecx,-0x298(%ebp)
0876bd6b +0x27fb:  mov    -0x118(%ebp),%ecx
0876bd71 +0x2801:  xor    %edi,%ecx
0876bd73 +0x2803:  mov    -0xfc(%ebp),%edi
0876bd79 +0x2809:  mov    %ecx,-0x294(%ebp)
0876bd7f +0x280f:  add    -0x298(%ebp),%eax
0876bd85 +0x2815:  adc    -0x294(%ebp),%edx
0876bd8b +0x281b:  add    -0xd8(%ebp),%eax
0876bd91 +0x2821:  adc    -0xd4(%ebp),%edx
0876bd97 +0x2827:  add    %eax,%esi
0876bd99 +0x2829:  adc    %edx,%edi
0876bd9b +0x282b:  mov    %esi,-0x100(%ebp)
0876bda1 +0x2831:  mov    -0xe8(%ebp),%esi
0876bda7 +0x2837:  mov    %edi,-0xfc(%ebp)
0876bdad +0x283d:  mov    -0xe8(%ebp),%edi
0876bdb3 +0x2843:  and    -0x108(%ebp),%edi
0876bdb9 +0x2849:  or     -0x108(%ebp),%esi
0876bdbf +0x284f:  mov    -0xe4(%ebp),%ecx
0876bdc5 +0x2855:  mov    %edi,-0xd8(%ebp)
0876bdcb +0x285b:  mov    -0xe4(%ebp),%edi
0876bdd1 +0x2861:  and    -0xe0(%ebp),%esi
0876bdd7 +0x2867:  or     -0xd8(%ebp),%esi
0876bddd +0x286d:  and    -0x104(%ebp),%edi
0876bde3 +0x2873:  or     -0x104(%ebp),%ecx
0876bde9 +0x2879:  and    -0xdc(%ebp),%ecx
0876bdef +0x287f:  mov    %esi,-0x2a0(%ebp)
0876bdf5 +0x2885:  mov    -0xe8(%ebp),%esi
0876bdfb +0x288b:  or     %edi,%ecx
0876bdfd +0x288d:  mov    -0xe4(%ebp),%edi
0876be03 +0x2893:  mov    %ecx,-0x29c(%ebp)
0876be09 +0x2899:  mov    %esi,%ecx
0876be0b +0x289b:  shld   $0x1e,%edi,%esi
0876be0f +0x289f:  shld   $0x1e,%ecx,%edi
0876be13 +0x28a3:  mov    %esi,-0x120(%ebp)
0876be19 +0x28a9:  mov    -0xe8(%ebp),%esi
0876be1f +0x28af:  mov    %edi,-0x11c(%ebp)
0876be25 +0x28b5:  mov    -0xe4(%ebp),%edi
0876be2b +0x28bb:  mov    %esi,%ecx
0876be2d +0x28bd:  shrd   $0x1c,%edi,%esi
0876be31 +0x28c1:  xor    -0x120(%ebp),%esi
0876be37 +0x28c7:  shrd   $0x1c,%ecx,%edi
0876be3b +0x28cb:  xor    -0x11c(%ebp),%edi
0876be41 +0x28d1:  mov    %esi,-0xd8(%ebp)
0876be47 +0x28d7:  mov    -0xe8(%ebp),%esi
0876be4d +0x28dd:  mov    %edi,-0x118(%ebp)
0876be53 +0x28e3:  mov    -0xe4(%ebp),%edi
0876be59 +0x28e9:  mov    %esi,%ecx
0876be5b +0x28eb:  shld   $0x19,%edi,%esi
0876be5f +0x28ef:  shld   $0x19,%ecx,%edi
0876be63 +0x28f3:  mov    -0xd8(%ebp),%ecx
0876be69 +0x28f9:  xor    %esi,%ecx
0876be6b +0x28fb:  mov    -0x2a0(%ebp),%esi
0876be71 +0x2901:  mov    %ecx,-0x2a8(%ebp)
0876be77 +0x2907:  mov    -0x118(%ebp),%ecx
0876be7d +0x290d:  xor    %edi,%ecx
0876be7f +0x290f:  mov    -0x29c(%ebp),%edi
0876be85 +0x2915:  add    -0x2a8(%ebp),%esi
0876be8b +0x291b:  mov    %ecx,-0x2a4(%ebp)
0876be91 +0x2921:  adc    -0x2a4(%ebp),%edi
0876be97 +0x2927:  mov    %esi,-0x118(%ebp)
0876be9d +0x292d:  add    %eax,-0x118(%ebp)
0876bea3 +0x2933:  mov    -0x138(%ebp),%eax
0876bea9 +0x2939:  mov    %edi,-0x114(%ebp)
0876beaf +0x293f:  adc    %edx,-0x114(%ebp)
0876beb5 +0x2945:  mov    -0x134(%ebp),%edx
0876bebb +0x294b:  mov    0x58(%eax),%esi
0876bebe +0x294e:  mov    0x5c(%eax),%edi
0876bec1 +0x2951:  test   %edx,%edx
0876bec3 +0x2953:  je     0876d1f0 <+0x3c80>
0876bec9 +0x2959:  mov    -0xb0(%ebp),%edx
0876becf +0x295f:  mov    -0xac(%ebp),%ecx
0876bed5 +0x2965:  mov    -0x78(%ebp),%eax
0876bed8 +0x2968:  mov    %edx,-0xd8(%ebp)
0876bede +0x296e:  mov    -0x74(%ebp),%edx
0876bee1 +0x2971:  add    %eax,-0xd8(%ebp)
0876bee7 +0x2977:  mov    %ecx,-0xd4(%ebp)
0876beed +0x297d:  mov    -0x84(%ebp),%ecx
0876bef3 +0x2983:  adc    %edx,-0xd4(%ebp)
0876bef9 +0x2989:  mov    -0x88(%ebp),%edx
0876beff +0x298f:  mov    %edx,%eax
0876bf01 +0x2991:  shrd   $0x13,%ecx,%edx
0876bf05 +0x2995:  shrd   $0x13,%eax,%ecx
0876bf09 +0x2999:  mov    %edx,-0x128(%ebp)
0876bf0f +0x299f:  mov    -0x88(%ebp),%edx
0876bf15 +0x29a5:  mov    %ecx,-0x124(%ebp)
0876bf1b +0x29ab:  mov    -0x84(%ebp),%ecx
0876bf21 +0x29b1:  mov    -0x124(%ebp),%eax
0876bf27 +0x29b7:  shrd   $0x6,%ecx,%edx
0876bf2b +0x29bb:  shr    $0x6,%ecx
0876bf2e +0x29be:  mov    %ecx,-0x12c(%ebp)
0876bf34 +0x29c4:  mov    -0x128(%ebp),%ecx
0876bf3a +0x29ca:  xor    -0x12c(%ebp),%eax
0876bf40 +0x29d0:  mov    %eax,-0x120(%ebp)
0876bf46 +0x29d6:  mov    -0x88(%ebp),%eax
0876bf4c +0x29dc:  xor    %edx,%ecx
0876bf4e +0x29de:  mov    -0x84(%ebp),%edx
0876bf54 +0x29e4:  mov    %ecx,-0x140(%ebp)
0876bf5a +0x29ea:  mov    %eax,%ecx
0876bf5c +0x29ec:  shld   $0x3,%edx,%eax
0876bf60 +0x29f0:  shld   $0x3,%ecx,%edx
0876bf64 +0x29f4:  mov    -0x140(%ebp),%ecx
0876bf6a +0x29fa:  xor    %eax,%ecx
0876bf6c +0x29fc:  mov    %ecx,-0x400(%ebp)
0876bf72 +0x2a02:  mov    -0x120(%ebp),%ecx
0876bf78 +0x2a08:  mov    -0x400(%ebp),%eax
0876bf7e +0x2a0e:  xor    %edx,%ecx
0876bf80 +0x2a10:  mov    %ecx,-0x3fc(%ebp)
0876bf86 +0x2a16:  mov    -0x3fc(%ebp),%edx
0876bf8c +0x2a1c:  add    %eax,-0xd8(%ebp)
0876bf92 +0x2a22:  adc    %edx,-0xd4(%ebp)
0876bf98 +0x2a28:  mov    -0x70(%ebp),%edx
0876bf9b +0x2a2b:  mov    -0x6c(%ebp),%ecx
0876bf9e +0x2a2e:  mov    %edx,%eax
0876bfa0 +0x2a30:  shrd   $0x1,%ecx,%edx
0876bfa4 +0x2a34:  shrd   $0x1,%eax,%ecx
0876bfa8 +0x2a38:  mov    -0x70(%ebp),%eax
0876bfab +0x2a3b:  mov    %edx,-0x120(%ebp)
0876bfb1 +0x2a41:  mov    -0x70(%ebp),%edx
0876bfb4 +0x2a44:  mov    %ecx,-0x11c(%ebp)
0876bfba +0x2a4a:  mov    -0x6c(%ebp),%ecx
0876bfbd +0x2a4d:  shrd   $0x7,%ecx,%edx
0876bfc1 +0x2a51:  xor    -0x120(%ebp),%edx
0876bfc7 +0x2a57:  shr    $0x7,%ecx
0876bfca +0x2a5a:  xor    -0x11c(%ebp),%ecx
0876bfd0 +0x2a60:  mov    %edx,-0x130(%ebp)
0876bfd6 +0x2a66:  mov    -0x6c(%ebp),%edx
0876bfd9 +0x2a69:  mov    %ecx,-0x120(%ebp)
0876bfdf +0x2a6f:  mov    %eax,%ecx
0876bfe1 +0x2a71:  shrd   $0x8,%edx,%eax
0876bfe5 +0x2a75:  shrd   $0x8,%ecx,%edx
0876bfe9 +0x2a79:  mov    -0x130(%ebp),%ecx
0876bfef +0x2a7f:  xor    %eax,%ecx
0876bff1 +0x2a81:  mov    %ecx,-0x408(%ebp)
0876bff7 +0x2a87:  mov    -0x120(%ebp),%ecx
0876bffd +0x2a8d:  mov    -0x408(%ebp),%eax
0876c003 +0x2a93:  xor    %edx,%ecx
0876c005 +0x2a95:  mov    %ecx,-0x404(%ebp)
0876c00b +0x2a9b:  mov    -0x404(%ebp),%edx
0876c011 +0x2aa1:  add    %eax,-0xd8(%ebp)
0876c017 +0x2aa7:  adc    %edx,-0xd4(%ebp)
0876c01d +0x2aad:  mov    -0xd4(%ebp),%ecx
0876c023 +0x2ab3:  mov    -0xd8(%ebp),%edx
0876c029 +0x2ab9:  mov    %ecx,-0x74(%ebp)
0876c02c +0x2abc:  mov    %edx,-0x78(%ebp)
0876c02f +0x2abf:  mov    -0xf8(%ebp),%eax
0876c035 +0x2ac5:  mov    -0xf4(%ebp),%edx
0876c03b +0x2acb:  mov    -0xf0(%ebp),%ecx
0876c041 +0x2ad1:  add    %esi,%eax
0876c043 +0x2ad3:  mov    -0xec(%ebp),%esi
0876c049 +0x2ad9:  adc    %edi,%edx
0876c04b +0x2adb:  mov    -0xfc(%ebp),%edi
0876c051 +0x2ae1:  xor    -0x10c(%ebp),%esi
0876c057 +0x2ae7:  and    -0xfc(%ebp),%esi
0876c05d +0x2aed:  xor    -0x10c(%ebp),%esi
0876c063 +0x2af3:  xor    -0x110(%ebp),%ecx
0876c069 +0x2af9:  and    -0x100(%ebp),%ecx
0876c06f +0x2aff:  mov    %esi,-0x2ac(%ebp)
0876c075 +0x2b05:  mov    -0x100(%ebp),%esi
0876c07b +0x2b0b:  xor    -0x110(%ebp),%ecx
0876c081 +0x2b11:  mov    %ecx,-0x2b0(%ebp)
0876c087 +0x2b17:  mov    %esi,%ecx
0876c089 +0x2b19:  add    -0x2b0(%ebp),%eax
0876c08f +0x2b1f:  adc    -0x2ac(%ebp),%edx
0876c095 +0x2b25:  shrd   $0x12,%edi,%esi
0876c099 +0x2b29:  shrd   $0x12,%ecx,%edi
0876c09d +0x2b2d:  mov    %esi,-0x128(%ebp)
0876c0a3 +0x2b33:  mov    -0x100(%ebp),%esi
0876c0a9 +0x2b39:  mov    %edi,-0x124(%ebp)
0876c0af +0x2b3f:  mov    -0xfc(%ebp),%edi
0876c0b5 +0x2b45:  mov    %esi,%ecx
0876c0b7 +0x2b47:  shrd   $0xe,%edi,%esi
0876c0bb +0x2b4b:  xor    -0x128(%ebp),%esi
0876c0c1 +0x2b51:  shrd   $0xe,%ecx,%edi
0876c0c5 +0x2b55:  xor    -0x124(%ebp),%edi
0876c0cb +0x2b5b:  mov    %esi,-0x120(%ebp)
0876c0d1 +0x2b61:  mov    -0x100(%ebp),%esi
0876c0d7 +0x2b67:  mov    %edi,-0xf8(%ebp)
0876c0dd +0x2b6d:  mov    -0xfc(%ebp),%edi
0876c0e3 +0x2b73:  mov    %esi,%ecx
0876c0e5 +0x2b75:  shld   $0x17,%edi,%esi
0876c0e9 +0x2b79:  shld   $0x17,%ecx,%edi
0876c0ed +0x2b7d:  mov    -0x120(%ebp),%ecx
0876c0f3 +0x2b83:  xor    %esi,%ecx
0876c0f5 +0x2b85:  mov    -0xe0(%ebp),%esi
0876c0fb +0x2b8b:  mov    %ecx,-0x2b8(%ebp)
0876c101 +0x2b91:  mov    -0xf8(%ebp),%ecx
0876c107 +0x2b97:  xor    %edi,%ecx
0876c109 +0x2b99:  mov    -0xdc(%ebp),%edi
0876c10f +0x2b9f:  mov    %ecx,-0x2b4(%ebp)
0876c115 +0x2ba5:  add    -0x2b8(%ebp),%eax
0876c11b +0x2bab:  adc    -0x2b4(%ebp),%edx
0876c121 +0x2bb1:  add    -0xd8(%ebp),%eax
0876c127 +0x2bb7:  adc    -0xd4(%ebp),%edx
0876c12d +0x2bbd:  add    %eax,%esi
0876c12f +0x2bbf:  adc    %edx,%edi
0876c131 +0x2bc1:  mov    %esi,-0xe0(%ebp)
0876c137 +0x2bc7:  mov    -0x118(%ebp),%esi
0876c13d +0x2bcd:  mov    %edi,-0xdc(%ebp)
0876c143 +0x2bd3:  mov    -0x118(%ebp),%edi
0876c149 +0x2bd9:  and    -0xe8(%ebp),%edi
0876c14f +0x2bdf:  or     -0xe8(%ebp),%esi
0876c155 +0x2be5:  mov    -0x114(%ebp),%ecx
0876c15b +0x2beb:  mov    %edi,-0xd8(%ebp)
0876c161 +0x2bf1:  mov    -0x114(%ebp),%edi
0876c167 +0x2bf7:  and    -0x108(%ebp),%esi
0876c16d +0x2bfd:  or     -0xd8(%ebp),%esi
0876c173 +0x2c03:  and    -0xe4(%ebp),%edi
0876c179 +0x2c09:  or     -0xe4(%ebp),%ecx
0876c17f +0x2c0f:  and    -0x104(%ebp),%ecx
0876c185 +0x2c15:  mov    %esi,-0x2c0(%ebp)
0876c18b +0x2c1b:  mov    -0x118(%ebp),%esi
0876c191 +0x2c21:  or     %edi,%ecx
0876c193 +0x2c23:  mov    -0x114(%ebp),%edi
0876c199 +0x2c29:  mov    %ecx,-0x2bc(%ebp)
0876c19f +0x2c2f:  mov    %esi,%ecx
0876c1a1 +0x2c31:  shld   $0x1e,%edi,%esi
0876c1a5 +0x2c35:  shld   $0x1e,%ecx,%edi
0876c1a9 +0x2c39:  mov    %esi,-0x120(%ebp)
0876c1af +0x2c3f:  mov    -0x118(%ebp),%esi
0876c1b5 +0x2c45:  mov    %edi,-0x11c(%ebp)
0876c1bb +0x2c4b:  mov    -0x114(%ebp),%edi
0876c1c1 +0x2c51:  mov    %esi,%ecx
0876c1c3 +0x2c53:  shrd   $0x1c,%edi,%esi
0876c1c7 +0x2c57:  xor    -0x120(%ebp),%esi
0876c1cd +0x2c5d:  shrd   $0x1c,%ecx,%edi
0876c1d1 +0x2c61:  xor    -0x11c(%ebp),%edi
0876c1d7 +0x2c67:  mov    %esi,-0xd8(%ebp)
0876c1dd +0x2c6d:  mov    -0x118(%ebp),%esi
0876c1e3 +0x2c73:  mov    %edi,-0xf8(%ebp)
0876c1e9 +0x2c79:  mov    -0x114(%ebp),%edi
0876c1ef +0x2c7f:  mov    %esi,%ecx
0876c1f1 +0x2c81:  shld   $0x19,%edi,%esi
0876c1f5 +0x2c85:  shld   $0x19,%ecx,%edi
0876c1f9 +0x2c89:  mov    -0xd8(%ebp),%ecx
0876c1ff +0x2c8f:  xor    %esi,%ecx
0876c201 +0x2c91:  mov    -0x2c0(%ebp),%esi
0876c207 +0x2c97:  mov    %ecx,-0x2c8(%ebp)
0876c20d +0x2c9d:  mov    -0xf8(%ebp),%ecx
0876c213 +0x2ca3:  xor    %edi,%ecx
0876c215 +0x2ca5:  mov    -0x2bc(%ebp),%edi
0876c21b +0x2cab:  add    -0x2c8(%ebp),%esi
0876c221 +0x2cb1:  mov    %ecx,-0x2c4(%ebp)
0876c227 +0x2cb7:  adc    -0x2c4(%ebp),%edi
0876c22d +0x2cbd:  mov    %esi,-0xf8(%ebp)
0876c233 +0x2cc3:  add    %eax,-0xf8(%ebp)
0876c239 +0x2cc9:  mov    -0x138(%ebp),%eax
0876c23f +0x2ccf:  mov    %edi,-0xf4(%ebp)
0876c245 +0x2cd5:  adc    %edx,-0xf4(%ebp)
0876c24b +0x2cdb:  mov    -0x134(%ebp),%edx
0876c251 +0x2ce1:  mov    0x60(%eax),%esi
0876c254 +0x2ce4:  mov    0x64(%eax),%edi
0876c257 +0x2ce7:  test   %edx,%edx
0876c259 +0x2ce9:  je     0876d1c8 <+0x3c58>
0876c25f +0x2cef:  mov    -0xa8(%ebp),%edx
0876c265 +0x2cf5:  mov    -0xa4(%ebp),%ecx
0876c26b +0x2cfb:  mov    -0x70(%ebp),%eax
0876c26e +0x2cfe:  mov    %edx,-0xd8(%ebp)
0876c274 +0x2d04:  mov    -0x6c(%ebp),%edx
0876c277 +0x2d07:  add    %eax,-0xd8(%ebp)
0876c27d +0x2d0d:  mov    %ecx,-0xd4(%ebp)
0876c283 +0x2d13:  mov    -0x7c(%ebp),%ecx
0876c286 +0x2d16:  adc    %edx,-0xd4(%ebp)
0876c28c +0x2d1c:  mov    -0x80(%ebp),%edx
0876c28f +0x2d1f:  mov    %edx,%eax
0876c291 +0x2d21:  shrd   $0x13,%ecx,%edx
0876c295 +0x2d25:  shrd   $0x13,%eax,%ecx
0876c299 +0x2d29:  mov    %edx,-0x128(%ebp)
0876c29f +0x2d2f:  mov    -0x80(%ebp),%edx
0876c2a2 +0x2d32:  mov    %ecx,-0x124(%ebp)
0876c2a8 +0x2d38:  mov    -0x7c(%ebp),%ecx
0876c2ab +0x2d3b:  mov    -0x124(%ebp),%eax
0876c2b1 +0x2d41:  shrd   $0x6,%ecx,%edx
0876c2b5 +0x2d45:  shr    $0x6,%ecx
0876c2b8 +0x2d48:  mov    %ecx,-0x12c(%ebp)
0876c2be +0x2d4e:  mov    -0x128(%ebp),%ecx
0876c2c4 +0x2d54:  xor    -0x12c(%ebp),%eax
0876c2ca +0x2d5a:  mov    %eax,-0x120(%ebp)
0876c2d0 +0x2d60:  mov    -0x80(%ebp),%eax
0876c2d3 +0x2d63:  xor    %edx,%ecx
0876c2d5 +0x2d65:  mov    -0x7c(%ebp),%edx
0876c2d8 +0x2d68:  mov    %ecx,-0x140(%ebp)
0876c2de +0x2d6e:  mov    %eax,%ecx
0876c2e0 +0x2d70:  shld   $0x3,%edx,%eax
0876c2e4 +0x2d74:  shld   $0x3,%ecx,%edx
0876c2e8 +0x2d78:  mov    -0x140(%ebp),%ecx
0876c2ee +0x2d7e:  xor    %eax,%ecx
0876c2f0 +0x2d80:  mov    %ecx,-0x410(%ebp)
0876c2f6 +0x2d86:  mov    -0x120(%ebp),%ecx
0876c2fc +0x2d8c:  mov    -0x410(%ebp),%eax
0876c302 +0x2d92:  xor    %edx,%ecx
0876c304 +0x2d94:  mov    %ecx,-0x40c(%ebp)
0876c30a +0x2d9a:  mov    -0x40c(%ebp),%edx
0876c310 +0x2da0:  add    %eax,-0xd8(%ebp)
0876c316 +0x2da6:  adc    %edx,-0xd4(%ebp)
0876c31c +0x2dac:  mov    -0x68(%ebp),%edx
0876c31f +0x2daf:  mov    -0x64(%ebp),%ecx
0876c322 +0x2db2:  mov    %edx,%eax
0876c324 +0x2db4:  shrd   $0x1,%ecx,%edx
0876c328 +0x2db8:  shrd   $0x1,%eax,%ecx
0876c32c +0x2dbc:  mov    -0x68(%ebp),%eax
0876c32f +0x2dbf:  mov    %edx,-0x120(%ebp)
0876c335 +0x2dc5:  mov    -0x68(%ebp),%edx
0876c338 +0x2dc8:  mov    %ecx,-0x11c(%ebp)
0876c33e +0x2dce:  mov    -0x64(%ebp),%ecx
0876c341 +0x2dd1:  shrd   $0x7,%ecx,%edx
0876c345 +0x2dd5:  xor    -0x120(%ebp),%edx
0876c34b +0x2ddb:  shr    $0x7,%ecx
0876c34e +0x2dde:  xor    -0x11c(%ebp),%ecx
0876c354 +0x2de4:  mov    %edx,-0x130(%ebp)
0876c35a +0x2dea:  mov    -0x64(%ebp),%edx
0876c35d +0x2ded:  mov    %ecx,-0x120(%ebp)
0876c363 +0x2df3:  mov    %eax,%ecx
0876c365 +0x2df5:  shrd   $0x8,%edx,%eax
0876c369 +0x2df9:  shrd   $0x8,%ecx,%edx
0876c36d +0x2dfd:  mov    -0x130(%ebp),%ecx
0876c373 +0x2e03:  xor    %eax,%ecx
0876c375 +0x2e05:  mov    %ecx,-0x418(%ebp)
0876c37b +0x2e0b:  mov    -0x120(%ebp),%ecx
0876c381 +0x2e11:  mov    -0x418(%ebp),%eax
0876c387 +0x2e17:  xor    %edx,%ecx
0876c389 +0x2e19:  mov    %ecx,-0x414(%ebp)
0876c38f +0x2e1f:  mov    -0x414(%ebp),%edx
0876c395 +0x2e25:  add    %eax,-0xd8(%ebp)
0876c39b +0x2e2b:  adc    %edx,-0xd4(%ebp)
0876c3a1 +0x2e31:  mov    -0xd4(%ebp),%ecx
0876c3a7 +0x2e37:  mov    -0xd8(%ebp),%edx
0876c3ad +0x2e3d:  mov    %ecx,-0x6c(%ebp)
0876c3b0 +0x2e40:  mov    %edx,-0x70(%ebp)
0876c3b3 +0x2e43:  mov    -0x110(%ebp),%eax
0876c3b9 +0x2e49:  mov    -0x10c(%ebp),%edx
0876c3bf +0x2e4f:  mov    -0x100(%ebp),%ecx
0876c3c5 +0x2e55:  add    %esi,%eax
0876c3c7 +0x2e57:  mov    -0xfc(%ebp),%esi
0876c3cd +0x2e5d:  adc    %edi,%edx
0876c3cf +0x2e5f:  mov    -0xdc(%ebp),%edi
0876c3d5 +0x2e65:  xor    -0xec(%ebp),%esi
0876c3db +0x2e6b:  and    -0xdc(%ebp),%esi
0876c3e1 +0x2e71:  xor    -0xec(%ebp),%esi
0876c3e7 +0x2e77:  xor    -0xf0(%ebp),%ecx
0876c3ed +0x2e7d:  and    -0xe0(%ebp),%ecx
0876c3f3 +0x2e83:  mov    %esi,-0x2cc(%ebp)
0876c3f9 +0x2e89:  mov    -0xe0(%ebp),%esi
0876c3ff +0x2e8f:  xor    -0xf0(%ebp),%ecx
0876c405 +0x2e95:  mov    %ecx,-0x2d0(%ebp)
0876c40b +0x2e9b:  mov    %esi,%ecx
0876c40d +0x2e9d:  add    -0x2d0(%ebp),%eax
0876c413 +0x2ea3:  adc    -0x2cc(%ebp),%edx
0876c419 +0x2ea9:  shrd   $0x12,%edi,%esi
0876c41d +0x2ead:  shrd   $0x12,%ecx,%edi
0876c421 +0x2eb1:  mov    %esi,-0x128(%ebp)
0876c427 +0x2eb7:  mov    -0xe0(%ebp),%esi
0876c42d +0x2ebd:  mov    %edi,-0x124(%ebp)
0876c433 +0x2ec3:  mov    -0xdc(%ebp),%edi
0876c439 +0x2ec9:  mov    %esi,%ecx
0876c43b +0x2ecb:  shrd   $0xe,%edi,%esi
0876c43f +0x2ecf:  xor    -0x128(%ebp),%esi
0876c445 +0x2ed5:  shrd   $0xe,%ecx,%edi
0876c449 +0x2ed9:  xor    -0x124(%ebp),%edi
0876c44f +0x2edf:  mov    %esi,-0x120(%ebp)
0876c455 +0x2ee5:  mov    -0xe0(%ebp),%esi
0876c45b +0x2eeb:  mov    %edi,-0x110(%ebp)
0876c461 +0x2ef1:  mov    -0xdc(%ebp),%edi
0876c467 +0x2ef7:  mov    %esi,%ecx
0876c469 +0x2ef9:  shld   $0x17,%edi,%esi
0876c46d +0x2efd:  shld   $0x17,%ecx,%edi
0876c471 +0x2f01:  mov    -0x120(%ebp),%ecx
0876c477 +0x2f07:  xor    %esi,%ecx
0876c479 +0x2f09:  mov    -0x108(%ebp),%esi
0876c47f +0x2f0f:  mov    %ecx,-0x2d8(%ebp)
0876c485 +0x2f15:  mov    -0x110(%ebp),%ecx
0876c48b +0x2f1b:  xor    %edi,%ecx
0876c48d +0x2f1d:  mov    -0x104(%ebp),%edi
0876c493 +0x2f23:  mov    %ecx,-0x2d4(%ebp)
0876c499 +0x2f29:  add    -0x2d8(%ebp),%eax
0876c49f +0x2f2f:  adc    -0x2d4(%ebp),%edx
0876c4a5 +0x2f35:  add    -0xd8(%ebp),%eax
0876c4ab +0x2f3b:  adc    -0xd4(%ebp),%edx
0876c4b1 +0x2f41:  add    %eax,%esi
0876c4b3 +0x2f43:  adc    %edx,%edi
0876c4b5 +0x2f45:  mov    %esi,-0x108(%ebp)
0876c4bb +0x2f4b:  mov    -0xf4(%ebp),%ecx
0876c4c1 +0x2f51:  mov    %edi,-0x104(%ebp)
0876c4c7 +0x2f57:  mov    %edi,-0x14(%ebp)
0876c4ca +0x2f5a:  mov    -0xf8(%ebp),%edi
0876c4d0 +0x2f60:  and    -0x118(%ebp),%edi
0876c4d6 +0x2f66:  mov    %esi,-0x18(%ebp)
0876c4d9 +0x2f69:  mov    -0xf8(%ebp),%esi
0876c4df +0x2f6f:  or     -0x118(%ebp),%esi
0876c4e5 +0x2f75:  mov    %edi,-0xd8(%ebp)
0876c4eb +0x2f7b:  mov    -0xf4(%ebp),%edi
0876c4f1 +0x2f81:  and    -0xe8(%ebp),%esi
0876c4f7 +0x2f87:  or     -0xd8(%ebp),%esi
0876c4fd +0x2f8d:  and    -0x114(%ebp),%edi
0876c503 +0x2f93:  or     -0x114(%ebp),%ecx
0876c509 +0x2f99:  and    -0xe4(%ebp),%ecx
0876c50f +0x2f9f:  mov    %esi,-0x2e0(%ebp)
0876c515 +0x2fa5:  mov    -0xf8(%ebp),%esi
0876c51b +0x2fab:  or     %edi,%ecx
0876c51d +0x2fad:  mov    -0xf4(%ebp),%edi
0876c523 +0x2fb3:  mov    %ecx,-0x2dc(%ebp)
0876c529 +0x2fb9:  mov    %esi,%ecx
0876c52b +0x2fbb:  shld   $0x1e,%edi,%esi
0876c52f +0x2fbf:  shld   $0x1e,%ecx,%edi
0876c533 +0x2fc3:  mov    %esi,-0x120(%ebp)
0876c539 +0x2fc9:  mov    -0xf8(%ebp),%esi
0876c53f +0x2fcf:  mov    %edi,-0x11c(%ebp)
0876c545 +0x2fd5:  mov    -0xf4(%ebp),%edi
0876c54b +0x2fdb:  mov    %esi,%ecx
0876c54d +0x2fdd:  shrd   $0x1c,%edi,%esi
0876c551 +0x2fe1:  xor    -0x120(%ebp),%esi
0876c557 +0x2fe7:  shrd   $0x1c,%ecx,%edi
0876c55b +0x2feb:  xor    -0x11c(%ebp),%edi
0876c561 +0x2ff1:  mov    %esi,-0xd8(%ebp)
0876c567 +0x2ff7:  mov    -0xf8(%ebp),%esi
0876c56d +0x2ffd:  mov    %edi,-0x110(%ebp)
0876c573 +0x3003:  mov    -0xf4(%ebp),%edi
0876c579 +0x3009:  mov    %esi,%ecx
0876c57b +0x300b:  shld   $0x19,%edi,%esi
0876c57f +0x300f:  shld   $0x19,%ecx,%edi
0876c583 +0x3013:  mov    -0xd8(%ebp),%ecx
0876c589 +0x3019:  xor    %esi,%ecx
0876c58b +0x301b:  mov    -0x2e0(%ebp),%esi
0876c591 +0x3021:  mov    %ecx,-0x2e8(%ebp)
0876c597 +0x3027:  mov    -0x110(%ebp),%ecx
0876c59d +0x302d:  xor    %edi,%ecx
0876c59f +0x302f:  mov    -0x2dc(%ebp),%edi
0876c5a5 +0x3035:  add    -0x2e8(%ebp),%esi
0876c5ab +0x303b:  mov    %ecx,-0x2e4(%ebp)
0876c5b1 +0x3041:  adc    -0x2e4(%ebp),%edi
0876c5b7 +0x3047:  mov    %esi,-0x110(%ebp)
0876c5bd +0x304d:  add    %eax,-0x110(%ebp)
0876c5c3 +0x3053:  mov    -0x110(%ebp),%eax
0876c5c9 +0x3059:  mov    %edi,-0x10c(%ebp)
0876c5cf +0x305f:  adc    %edx,-0x10c(%ebp)
0876c5d5 +0x3065:  mov    -0x10c(%ebp),%edx
0876c5db +0x306b:  mov    %eax,-0x38(%ebp)
0876c5de +0x306e:  mov    -0x134(%ebp),%eax
0876c5e4 +0x3074:  mov    %edx,-0x34(%ebp)
0876c5e7 +0x3077:  mov    -0x138(%ebp),%edx
0876c5ed +0x307d:  test   %eax,%eax
0876c5ef +0x307f:  mov    0x68(%edx),%esi
0876c5f2 +0x3082:  mov    0x6c(%edx),%edi
0876c5f5 +0x3085:  je     0876d1a0 <+0x3c30>
0876c5fb +0x308b:  mov    -0xa0(%ebp),%eax
0876c601 +0x3091:  mov    -0x9c(%ebp),%edx
0876c607 +0x3097:  mov    -0x64(%ebp),%ecx
0876c60a +0x309a:  mov    %eax,-0xd8(%ebp)
0876c610 +0x30a0:  mov    -0x78(%ebp),%eax
0876c613 +0x30a3:  mov    %edx,-0xd4(%ebp)
0876c619 +0x30a9:  mov    -0x68(%ebp),%edx
0876c61c +0x30ac:  add    %edx,-0xd8(%ebp)
0876c622 +0x30b2:  mov    -0x74(%ebp),%edx
0876c625 +0x30b5:  adc    %ecx,-0xd4(%ebp)
0876c62b +0x30bb:  mov    %eax,%ecx
0876c62d +0x30bd:  shrd   $0x13,%edx,%eax
0876c631 +0x30c1:  shrd   $0x13,%ecx,%edx
0876c635 +0x30c5:  mov    %eax,-0x128(%ebp)
0876c63b +0x30cb:  mov    -0x78(%ebp),%eax
0876c63e +0x30ce:  mov    %edx,-0x124(%ebp)
0876c644 +0x30d4:  mov    -0x74(%ebp),%edx
0876c647 +0x30d7:  mov    -0x124(%ebp),%ecx
0876c64d +0x30dd:  shrd   $0x6,%edx,%eax
0876c651 +0x30e1:  shr    $0x6,%edx
0876c654 +0x30e4:  mov    %edx,-0x12c(%ebp)
0876c65a +0x30ea:  mov    -0x128(%ebp),%edx
0876c660 +0x30f0:  xor    -0x12c(%ebp),%ecx
0876c666 +0x30f6:  xor    %eax,%edx
0876c668 +0x30f8:  mov    -0x78(%ebp),%eax
0876c66b +0x30fb:  mov    %edx,-0x140(%ebp)
0876c671 +0x3101:  mov    -0x74(%ebp),%edx
0876c674 +0x3104:  mov    %ecx,-0x120(%ebp)
0876c67a +0x310a:  mov    %eax,%ecx
0876c67c +0x310c:  shld   $0x3,%edx,%eax
0876c680 +0x3110:  shld   $0x3,%ecx,%edx
0876c684 +0x3114:  mov    -0x140(%ebp),%ecx
0876c68a +0x311a:  xor    %eax,%ecx
0876c68c +0x311c:  mov    %ecx,-0x420(%ebp)
0876c692 +0x3122:  mov    -0x120(%ebp),%ecx
0876c698 +0x3128:  mov    -0x420(%ebp),%eax
0876c69e +0x312e:  xor    %edx,%ecx
0876c6a0 +0x3130:  mov    %ecx,-0x41c(%ebp)
0876c6a6 +0x3136:  mov    -0x41c(%ebp),%edx
0876c6ac +0x313c:  add    %eax,-0xd8(%ebp)
0876c6b2 +0x3142:  adc    %edx,-0xd4(%ebp)
0876c6b8 +0x3148:  mov    -0x60(%ebp),%edx
0876c6bb +0x314b:  mov    -0x5c(%ebp),%ecx
0876c6be +0x314e:  mov    %edx,%eax
0876c6c0 +0x3150:  shrd   $0x1,%ecx,%edx
0876c6c4 +0x3154:  shrd   $0x1,%eax,%ecx
0876c6c8 +0x3158:  mov    -0x60(%ebp),%eax
0876c6cb +0x315b:  mov    %edx,-0x120(%ebp)
0876c6d1 +0x3161:  mov    -0x60(%ebp),%edx
0876c6d4 +0x3164:  mov    %ecx,-0x11c(%ebp)
0876c6da +0x316a:  mov    -0x5c(%ebp),%ecx
0876c6dd +0x316d:  shrd   $0x7,%ecx,%edx
0876c6e1 +0x3171:  xor    -0x120(%ebp),%edx
0876c6e7 +0x3177:  shr    $0x7,%ecx
0876c6ea +0x317a:  xor    -0x11c(%ebp),%ecx
0876c6f0 +0x3180:  mov    %edx,-0x130(%ebp)
0876c6f6 +0x3186:  mov    -0x5c(%ebp),%edx
0876c6f9 +0x3189:  mov    %ecx,-0x120(%ebp)
0876c6ff +0x318f:  mov    %eax,%ecx
0876c701 +0x3191:  shrd   $0x8,%edx,%eax
0876c705 +0x3195:  shrd   $0x8,%ecx,%edx
0876c709 +0x3199:  mov    -0x130(%ebp),%ecx
0876c70f +0x319f:  xor    %eax,%ecx
0876c711 +0x31a1:  mov    %ecx,-0x428(%ebp)
0876c717 +0x31a7:  mov    -0x120(%ebp),%ecx
0876c71d +0x31ad:  mov    -0x428(%ebp),%eax
0876c723 +0x31b3:  xor    %edx,%ecx
0876c725 +0x31b5:  mov    %ecx,-0x424(%ebp)
0876c72b +0x31bb:  mov    -0x424(%ebp),%edx
0876c731 +0x31c1:  add    %eax,-0xd8(%ebp)
0876c737 +0x31c7:  adc    %edx,-0xd4(%ebp)
0876c73d +0x31cd:  mov    -0xd4(%ebp),%ecx
0876c743 +0x31d3:  mov    -0xd8(%ebp),%edx
0876c749 +0x31d9:  mov    %ecx,-0x64(%ebp)
0876c74c +0x31dc:  mov    %edx,-0x68(%ebp)
0876c74f +0x31df:  mov    -0xf0(%ebp),%eax
0876c755 +0x31e5:  mov    -0xec(%ebp),%edx
0876c75b +0x31eb:  mov    -0xe0(%ebp),%ecx
0876c761 +0x31f1:  add    %esi,%eax
0876c763 +0x31f3:  mov    -0xdc(%ebp),%esi
0876c769 +0x31f9:  adc    %edi,%edx
0876c76b +0x31fb:  mov    -0x104(%ebp),%edi
0876c771 +0x3201:  xor    -0xfc(%ebp),%esi
0876c777 +0x3207:  and    -0x104(%ebp),%esi
0876c77d +0x320d:  xor    -0xfc(%ebp),%esi
0876c783 +0x3213:  xor    -0x100(%ebp),%ecx
0876c789 +0x3219:  and    -0x108(%ebp),%ecx
0876c78f +0x321f:  mov    %esi,-0x2ec(%ebp)
0876c795 +0x3225:  mov    -0x108(%ebp),%esi
0876c79b +0x322b:  xor    -0x100(%ebp),%ecx
0876c7a1 +0x3231:  mov    %ecx,-0x2f0(%ebp)
0876c7a7 +0x3237:  mov    %esi,%ecx
0876c7a9 +0x3239:  add    -0x2f0(%ebp),%eax
0876c7af +0x323f:  adc    -0x2ec(%ebp),%edx
0876c7b5 +0x3245:  shrd   $0x12,%edi,%esi
0876c7b9 +0x3249:  shrd   $0x12,%ecx,%edi
0876c7bd +0x324d:  mov    %esi,-0x128(%ebp)
0876c7c3 +0x3253:  mov    -0x108(%ebp),%esi
0876c7c9 +0x3259:  mov    %edi,-0x124(%ebp)
0876c7cf +0x325f:  mov    -0x104(%ebp),%edi
0876c7d5 +0x3265:  mov    %esi,%ecx
0876c7d7 +0x3267:  shrd   $0xe,%edi,%esi
0876c7db +0x326b:  xor    -0x128(%ebp),%esi
0876c7e1 +0x3271:  shrd   $0xe,%ecx,%edi
0876c7e5 +0x3275:  xor    -0x124(%ebp),%edi
0876c7eb +0x327b:  mov    %esi,-0x120(%ebp)
0876c7f1 +0x3281:  mov    -0x108(%ebp),%esi
0876c7f7 +0x3287:  mov    %edi,-0xf0(%ebp)
0876c7fd +0x328d:  mov    -0x104(%ebp),%edi
0876c803 +0x3293:  mov    %esi,%ecx
0876c805 +0x3295:  shld   $0x17,%edi,%esi
0876c809 +0x3299:  shld   $0x17,%ecx,%edi
0876c80d +0x329d:  mov    -0x120(%ebp),%ecx
0876c813 +0x32a3:  xor    %esi,%ecx
0876c815 +0x32a5:  mov    -0xe8(%ebp),%esi
0876c81b +0x32ab:  mov    %ecx,-0x2f8(%ebp)
0876c821 +0x32b1:  mov    -0xf0(%ebp),%ecx
0876c827 +0x32b7:  xor    %edi,%ecx
0876c829 +0x32b9:  mov    -0xe4(%ebp),%edi
0876c82f +0x32bf:  mov    %ecx,-0x2f4(%ebp)
0876c835 +0x32c5:  add    -0x2f8(%ebp),%eax
0876c83b +0x32cb:  adc    -0x2f4(%ebp),%edx
0876c841 +0x32d1:  add    -0xd8(%ebp),%eax
0876c847 +0x32d7:  adc    -0xd4(%ebp),%edx
0876c84d +0x32dd:  add    %eax,%esi
0876c84f +0x32df:  adc    %edx,%edi
0876c851 +0x32e1:  mov    %esi,-0xe8(%ebp)
0876c857 +0x32e7:  mov    -0x10c(%ebp),%ecx
0876c85d +0x32ed:  mov    %edi,-0xe4(%ebp)
0876c863 +0x32f3:  mov    %edi,-0x1c(%ebp)
0876c866 +0x32f6:  mov    -0x110(%ebp),%edi
0876c86c +0x32fc:  and    -0xf8(%ebp),%edi
0876c872 +0x3302:  mov    %esi,-0x20(%ebp)
0876c875 +0x3305:  mov    -0x110(%ebp),%esi
0876c87b +0x330b:  or     -0xf8(%ebp),%esi
0876c881 +0x3311:  mov    %edi,-0xd8(%ebp)
0876c887 +0x3317:  mov    -0x10c(%ebp),%edi
0876c88d +0x331d:  and    -0x118(%ebp),%esi
0876c893 +0x3323:  or     -0xd8(%ebp),%esi
0876c899 +0x3329:  and    -0xf4(%ebp),%edi
0876c89f +0x332f:  or     -0xf4(%ebp),%ecx
0876c8a5 +0x3335:  and    -0x114(%ebp),%ecx
0876c8ab +0x333b:  mov    %esi,-0x300(%ebp)
0876c8b1 +0x3341:  mov    -0x110(%ebp),%esi
0876c8b7 +0x3347:  or     %edi,%ecx
0876c8b9 +0x3349:  mov    -0x10c(%ebp),%edi
0876c8bf +0x334f:  mov    %ecx,-0x2fc(%ebp)
0876c8c5 +0x3355:  mov    %esi,%ecx
0876c8c7 +0x3357:  shld   $0x1e,%edi,%esi
0876c8cb +0x335b:  shld   $0x1e,%ecx,%edi
0876c8cf +0x335f:  mov    %esi,-0x120(%ebp)
0876c8d5 +0x3365:  mov    -0x110(%ebp),%esi
0876c8db +0x336b:  mov    %edi,-0x11c(%ebp)
0876c8e1 +0x3371:  mov    -0x10c(%ebp),%edi
0876c8e7 +0x3377:  mov    %esi,%ecx
0876c8e9 +0x3379:  shrd   $0x1c,%edi,%esi
0876c8ed +0x337d:  xor    -0x120(%ebp),%esi
0876c8f3 +0x3383:  shrd   $0x1c,%ecx,%edi
0876c8f7 +0x3387:  xor    -0x11c(%ebp),%edi
0876c8fd +0x338d:  mov    %esi,-0xd8(%ebp)
0876c903 +0x3393:  mov    -0x110(%ebp),%esi
0876c909 +0x3399:  mov    %edi,-0xf0(%ebp)
0876c90f +0x339f:  mov    -0x10c(%ebp),%edi
0876c915 +0x33a5:  mov    %esi,%ecx
0876c917 +0x33a7:  shld   $0x19,%edi,%esi
0876c91b +0x33ab:  shld   $0x19,%ecx,%edi
0876c91f +0x33af:  mov    -0xd8(%ebp),%ecx
0876c925 +0x33b5:  xor    %esi,%ecx
0876c927 +0x33b7:  mov    -0x300(%ebp),%esi
0876c92d +0x33bd:  mov    %ecx,-0x308(%ebp)
0876c933 +0x33c3:  mov    -0xf0(%ebp),%ecx
0876c939 +0x33c9:  xor    %edi,%ecx
0876c93b +0x33cb:  mov    -0x2fc(%ebp),%edi
0876c941 +0x33d1:  add    -0x308(%ebp),%esi
0876c947 +0x33d7:  mov    %ecx,-0x304(%ebp)
0876c94d +0x33dd:  adc    -0x304(%ebp),%edi
0876c953 +0x33e3:  mov    %esi,-0xf0(%ebp)
0876c959 +0x33e9:  add    %eax,-0xf0(%ebp)
0876c95f +0x33ef:  mov    -0xf0(%ebp),%eax
0876c965 +0x33f5:  mov    %edi,-0xec(%ebp)
0876c96b +0x33fb:  adc    %edx,-0xec(%ebp)
0876c971 +0x3401:  mov    -0xec(%ebp),%edx
0876c977 +0x3407:  mov    %eax,-0x40(%ebp)
0876c97a +0x340a:  mov    -0x134(%ebp),%eax
0876c980 +0x3410:  mov    %edx,-0x3c(%ebp)
0876c983 +0x3413:  mov    -0x138(%ebp),%edx
0876c989 +0x3419:  test   %eax,%eax
0876c98b +0x341b:  mov    0x70(%edx),%esi
0876c98e +0x341e:  mov    0x74(%edx),%edi
0876c991 +0x3421:  je     0876d178 <+0x3c08>
0876c997 +0x3427:  mov    -0x98(%ebp),%eax
0876c99d +0x342d:  mov    -0x94(%ebp),%edx
0876c9a3 +0x3433:  mov    -0x5c(%ebp),%ecx
0876c9a6 +0x3436:  mov    %eax,-0xd8(%ebp)
0876c9ac +0x343c:  mov    -0x70(%ebp),%eax
0876c9af +0x343f:  mov    %edx,-0xd4(%ebp)
0876c9b5 +0x3445:  mov    -0x60(%ebp),%edx
0876c9b8 +0x3448:  add    %edx,-0xd8(%ebp)
0876c9be +0x344e:  mov    -0x6c(%ebp),%edx
0876c9c1 +0x3451:  adc    %ecx,-0xd4(%ebp)
0876c9c7 +0x3457:  mov    %eax,%ecx
0876c9c9 +0x3459:  shrd   $0x13,%edx,%eax
0876c9cd +0x345d:  shrd   $0x13,%ecx,%edx
0876c9d1 +0x3461:  mov    %eax,-0x128(%ebp)
0876c9d7 +0x3467:  mov    -0x70(%ebp),%eax
0876c9da +0x346a:  mov    %edx,-0x124(%ebp)
0876c9e0 +0x3470:  mov    -0x6c(%ebp),%edx
0876c9e3 +0x3473:  mov    -0x124(%ebp),%ecx
0876c9e9 +0x3479:  shrd   $0x6,%edx,%eax
0876c9ed +0x347d:  shr    $0x6,%edx
0876c9f0 +0x3480:  mov    %edx,-0x12c(%ebp)
0876c9f6 +0x3486:  mov    -0x128(%ebp),%edx
0876c9fc +0x348c:  xor    -0x12c(%ebp),%ecx
0876ca02 +0x3492:  xor    %eax,%edx
0876ca04 +0x3494:  mov    -0x70(%ebp),%eax
0876ca07 +0x3497:  mov    %edx,-0x140(%ebp)
0876ca0d +0x349d:  mov    -0x6c(%ebp),%edx
0876ca10 +0x34a0:  mov    %ecx,-0x120(%ebp)
0876ca16 +0x34a6:  mov    %eax,%ecx
0876ca18 +0x34a8:  shld   $0x3,%edx,%eax
0876ca1c +0x34ac:  shld   $0x3,%ecx,%edx
0876ca20 +0x34b0:  mov    -0x140(%ebp),%ecx
0876ca26 +0x34b6:  xor    %eax,%ecx
0876ca28 +0x34b8:  mov    %ecx,-0x430(%ebp)
0876ca2e +0x34be:  mov    -0x120(%ebp),%ecx
0876ca34 +0x34c4:  mov    -0x430(%ebp),%eax
0876ca3a +0x34ca:  xor    %edx,%ecx
0876ca3c +0x34cc:  mov    %ecx,-0x42c(%ebp)
0876ca42 +0x34d2:  mov    -0x42c(%ebp),%edx
0876ca48 +0x34d8:  add    %eax,-0xd8(%ebp)
0876ca4e +0x34de:  adc    %edx,-0xd4(%ebp)
0876ca54 +0x34e4:  mov    -0x58(%ebp),%edx
0876ca57 +0x34e7:  mov    -0x54(%ebp),%ecx
0876ca5a +0x34ea:  mov    %edx,%eax
0876ca5c +0x34ec:  shrd   $0x1,%ecx,%edx
0876ca60 +0x34f0:  shrd   $0x1,%eax,%ecx
0876ca64 +0x34f4:  mov    -0x58(%ebp),%eax
0876ca67 +0x34f7:  mov    %edx,-0x120(%ebp)
0876ca6d +0x34fd:  mov    -0x58(%ebp),%edx
0876ca70 +0x3500:  mov    %ecx,-0x11c(%ebp)
0876ca76 +0x3506:  mov    -0x54(%ebp),%ecx
0876ca79 +0x3509:  shrd   $0x7,%ecx,%edx
0876ca7d +0x350d:  xor    -0x120(%ebp),%edx
0876ca83 +0x3513:  shr    $0x7,%ecx
0876ca86 +0x3516:  xor    -0x11c(%ebp),%ecx
0876ca8c +0x351c:  mov    %edx,-0x130(%ebp)
0876ca92 +0x3522:  mov    -0x54(%ebp),%edx
0876ca95 +0x3525:  mov    %ecx,-0x120(%ebp)
0876ca9b +0x352b:  mov    %eax,%ecx
0876ca9d +0x352d:  shrd   $0x8,%edx,%eax
0876caa1 +0x3531:  shrd   $0x8,%ecx,%edx
0876caa5 +0x3535:  mov    -0x130(%ebp),%ecx
0876caab +0x353b:  xor    %eax,%ecx
0876caad +0x353d:  mov    %ecx,-0x438(%ebp)
0876cab3 +0x3543:  mov    -0x120(%ebp),%ecx
0876cab9 +0x3549:  mov    -0x438(%ebp),%eax
0876cabf +0x354f:  xor    %edx,%ecx
0876cac1 +0x3551:  mov    %ecx,-0x434(%ebp)
0876cac7 +0x3557:  mov    -0x434(%ebp),%edx
0876cacd +0x355d:  add    %eax,-0xd8(%ebp)
0876cad3 +0x3563:  adc    %edx,-0xd4(%ebp)
0876cad9 +0x3569:  mov    -0xd4(%ebp),%ecx
0876cadf +0x356f:  mov    -0xd8(%ebp),%edx
0876cae5 +0x3575:  mov    %ecx,-0x5c(%ebp)
0876cae8 +0x3578:  mov    %edx,-0x60(%ebp)
0876caeb +0x357b:  mov    -0x100(%ebp),%eax
0876caf1 +0x3581:  mov    -0xfc(%ebp),%edx
0876caf7 +0x3587:  mov    -0x108(%ebp),%ecx
0876cafd +0x358d:  add    %esi,%eax
0876caff +0x358f:  mov    -0x104(%ebp),%esi
0876cb05 +0x3595:  adc    %edi,%edx
0876cb07 +0x3597:  mov    -0xe4(%ebp),%edi
0876cb0d +0x359d:  xor    -0xdc(%ebp),%esi
0876cb13 +0x35a3:  and    -0xe4(%ebp),%esi
0876cb19 +0x35a9:  xor    -0xdc(%ebp),%esi
0876cb1f +0x35af:  xor    -0xe0(%ebp),%ecx
0876cb25 +0x35b5:  and    -0xe8(%ebp),%ecx
0876cb2b +0x35bb:  mov    %esi,-0x30c(%ebp)
0876cb31 +0x35c1:  mov    -0xe8(%ebp),%esi
0876cb37 +0x35c7:  xor    -0xe0(%ebp),%ecx
0876cb3d +0x35cd:  mov    %ecx,-0x310(%ebp)
0876cb43 +0x35d3:  mov    %esi,%ecx
0876cb45 +0x35d5:  add    -0x310(%ebp),%eax
0876cb4b +0x35db:  adc    -0x30c(%ebp),%edx
0876cb51 +0x35e1:  shrd   $0x12,%edi,%esi
0876cb55 +0x35e5:  shrd   $0x12,%ecx,%edi
0876cb59 +0x35e9:  mov    %esi,-0x128(%ebp)
0876cb5f +0x35ef:  mov    -0xe8(%ebp),%esi
0876cb65 +0x35f5:  mov    %edi,-0x124(%ebp)
0876cb6b +0x35fb:  mov    -0xe4(%ebp),%edi
0876cb71 +0x3601:  mov    %esi,%ecx
0876cb73 +0x3603:  shrd   $0xe,%edi,%esi
0876cb77 +0x3607:  xor    -0x128(%ebp),%esi
0876cb7d +0x360d:  shrd   $0xe,%ecx,%edi
0876cb81 +0x3611:  xor    -0x124(%ebp),%edi
0876cb87 +0x3617:  mov    %esi,-0x120(%ebp)
0876cb8d +0x361d:  mov    -0xe8(%ebp),%esi
0876cb93 +0x3623:  mov    %edi,-0x100(%ebp)
0876cb99 +0x3629:  mov    -0xe4(%ebp),%edi
0876cb9f +0x362f:  mov    %esi,%ecx
0876cba1 +0x3631:  shld   $0x17,%edi,%esi
0876cba5 +0x3635:  shld   $0x17,%ecx,%edi
0876cba9 +0x3639:  mov    -0x120(%ebp),%ecx
0876cbaf +0x363f:  xor    %esi,%ecx
0876cbb1 +0x3641:  mov    -0x118(%ebp),%esi
0876cbb7 +0x3647:  mov    %ecx,-0x318(%ebp)
0876cbbd +0x364d:  mov    -0x100(%ebp),%ecx
0876cbc3 +0x3653:  xor    %edi,%ecx
0876cbc5 +0x3655:  mov    -0x114(%ebp),%edi
0876cbcb +0x365b:  mov    %ecx,-0x314(%ebp)
0876cbd1 +0x3661:  add    -0x318(%ebp),%eax
0876cbd7 +0x3667:  adc    -0x314(%ebp),%edx
0876cbdd +0x366d:  add    -0xd8(%ebp),%eax
0876cbe3 +0x3673:  adc    -0xd4(%ebp),%edx
0876cbe9 +0x3679:  add    %eax,%esi
0876cbeb +0x367b:  adc    %edx,%edi
0876cbed +0x367d:  mov    %esi,-0x118(%ebp)
0876cbf3 +0x3683:  mov    -0xec(%ebp),%ecx
0876cbf9 +0x3689:  mov    %edi,-0x114(%ebp)
0876cbff +0x368f:  mov    %edi,-0x24(%ebp)
0876cc02 +0x3692:  mov    -0xf0(%ebp),%edi
0876cc08 +0x3698:  and    -0x110(%ebp),%edi
0876cc0e +0x369e:  mov    %esi,-0x28(%ebp)
0876cc11 +0x36a1:  mov    -0xf0(%ebp),%esi
0876cc17 +0x36a7:  or     -0x110(%ebp),%esi
0876cc1d +0x36ad:  mov    %edi,-0xd8(%ebp)
0876cc23 +0x36b3:  mov    -0xec(%ebp),%edi
0876cc29 +0x36b9:  and    -0xf8(%ebp),%esi
0876cc2f +0x36bf:  or     -0xd8(%ebp),%esi
0876cc35 +0x36c5:  and    -0x10c(%ebp),%edi
0876cc3b +0x36cb:  or     -0x10c(%ebp),%ecx
0876cc41 +0x36d1:  and    -0xf4(%ebp),%ecx
0876cc47 +0x36d7:  mov    %esi,-0x320(%ebp)
0876cc4d +0x36dd:  mov    -0xf0(%ebp),%esi
0876cc53 +0x36e3:  or     %edi,%ecx
0876cc55 +0x36e5:  mov    -0xec(%ebp),%edi
0876cc5b +0x36eb:  mov    %ecx,-0x31c(%ebp)
0876cc61 +0x36f1:  mov    %esi,%ecx
0876cc63 +0x36f3:  shld   $0x1e,%edi,%esi
0876cc67 +0x36f7:  shld   $0x1e,%ecx,%edi
0876cc6b +0x36fb:  mov    %esi,-0x120(%ebp)
0876cc71 +0x3701:  mov    -0xf0(%ebp),%esi
0876cc77 +0x3707:  mov    %edi,-0x11c(%ebp)
0876cc7d +0x370d:  mov    -0xec(%ebp),%edi
0876cc83 +0x3713:  mov    %esi,%ecx
0876cc85 +0x3715:  shrd   $0x1c,%edi,%esi
0876cc89 +0x3719:  xor    -0x120(%ebp),%esi
0876cc8f +0x371f:  shrd   $0x1c,%ecx,%edi
0876cc93 +0x3723:  xor    -0x11c(%ebp),%edi
0876cc99 +0x3729:  mov    %esi,-0xd8(%ebp)
0876cc9f +0x372f:  mov    -0xf0(%ebp),%esi
0876cca5 +0x3735:  mov    %edi,-0x100(%ebp)
0876ccab +0x373b:  mov    -0xec(%ebp),%edi
0876ccb1 +0x3741:  mov    %esi,%ecx
0876ccb3 +0x3743:  shld   $0x19,%edi,%esi
0876ccb7 +0x3747:  shld   $0x19,%ecx,%edi
0876ccbb +0x374b:  mov    -0xd8(%ebp),%ecx
0876ccc1 +0x3751:  xor    %esi,%ecx
0876ccc3 +0x3753:  mov    -0x320(%ebp),%esi
0876ccc9 +0x3759:  mov    %ecx,-0x328(%ebp)
0876cccf +0x375f:  mov    -0x100(%ebp),%ecx
0876ccd5 +0x3765:  xor    %edi,%ecx
0876ccd7 +0x3767:  mov    -0x31c(%ebp),%edi
0876ccdd +0x376d:  add    -0x328(%ebp),%esi
0876cce3 +0x3773:  mov    %ecx,-0x324(%ebp)
0876cce9 +0x3779:  adc    -0x324(%ebp),%edi
0876ccef +0x377f:  mov    %esi,-0x100(%ebp)
0876ccf5 +0x3785:  add    %eax,-0x100(%ebp)
0876ccfb +0x378b:  mov    -0x100(%ebp),%eax
0876cd01 +0x3791:  mov    %edi,-0xfc(%ebp)
0876cd07 +0x3797:  adc    %edx,-0xfc(%ebp)
0876cd0d +0x379d:  mov    -0xfc(%ebp),%edx
0876cd13 +0x37a3:  mov    %eax,-0x48(%ebp)
0876cd16 +0x37a6:  mov    -0x134(%ebp),%eax
0876cd1c +0x37ac:  mov    %edx,-0x44(%ebp)
0876cd1f +0x37af:  mov    -0x138(%ebp),%edx
0876cd25 +0x37b5:  test   %eax,%eax
0876cd27 +0x37b7:  mov    0x78(%edx),%esi
0876cd2a +0x37ba:  mov    0x7c(%edx),%edi
0876cd2d +0x37bd:  je     0876d150 <+0x3be0>
0876cd33 +0x37c3:  mov    -0x90(%ebp),%eax
0876cd39 +0x37c9:  mov    -0x8c(%ebp),%edx
0876cd3f +0x37cf:  mov    -0x54(%ebp),%ecx
0876cd42 +0x37d2:  mov    %eax,-0xd8(%ebp)
0876cd48 +0x37d8:  mov    -0x68(%ebp),%eax
0876cd4b +0x37db:  mov    %edx,-0xd4(%ebp)
0876cd51 +0x37e1:  mov    -0x58(%ebp),%edx
0876cd54 +0x37e4:  add    %edx,-0xd8(%ebp)
0876cd5a +0x37ea:  mov    -0x64(%ebp),%edx
0876cd5d +0x37ed:  adc    %ecx,-0xd4(%ebp)
0876cd63 +0x37f3:  mov    %eax,%ecx
0876cd65 +0x37f5:  shrd   $0x13,%edx,%eax
0876cd69 +0x37f9:  shrd   $0x13,%ecx,%edx
0876cd6d +0x37fd:  mov    %eax,-0x128(%ebp)
0876cd73 +0x3803:  mov    -0x68(%ebp),%eax
0876cd76 +0x3806:  mov    %edx,-0x124(%ebp)
0876cd7c +0x380c:  mov    -0x64(%ebp),%edx
0876cd7f +0x380f:  mov    -0x124(%ebp),%ecx
0876cd85 +0x3815:  shrd   $0x6,%edx,%eax
0876cd89 +0x3819:  shr    $0x6,%edx
0876cd8c +0x381c:  mov    %edx,-0x12c(%ebp)
0876cd92 +0x3822:  mov    -0x128(%ebp),%edx
0876cd98 +0x3828:  xor    -0x12c(%ebp),%ecx
0876cd9e +0x382e:  xor    %eax,%edx
0876cda0 +0x3830:  mov    -0x68(%ebp),%eax
0876cda3 +0x3833:  mov    %edx,-0x140(%ebp)
0876cda9 +0x3839:  mov    -0x64(%ebp),%edx
0876cdac +0x383c:  mov    %ecx,-0x120(%ebp)
0876cdb2 +0x3842:  mov    %eax,%ecx
0876cdb4 +0x3844:  shld   $0x3,%edx,%eax
0876cdb8 +0x3848:  shld   $0x3,%ecx,%edx
0876cdbc +0x384c:  mov    -0x140(%ebp),%ecx
0876cdc2 +0x3852:  xor    %eax,%ecx
0876cdc4 +0x3854:  mov    %ecx,-0x440(%ebp)
0876cdca +0x385a:  mov    -0x120(%ebp),%ecx
0876cdd0 +0x3860:  mov    -0x440(%ebp),%eax
0876cdd6 +0x3866:  xor    %edx,%ecx
0876cdd8 +0x3868:  mov    %ecx,-0x43c(%ebp)
0876cdde +0x386e:  mov    -0x43c(%ebp),%edx
0876cde4 +0x3874:  add    %eax,-0xd8(%ebp)
0876cdea +0x387a:  adc    %edx,-0xd4(%ebp)
0876cdf0 +0x3880:  mov    -0xd0(%ebp),%edx
0876cdf6 +0x3886:  mov    -0xcc(%ebp),%ecx
0876cdfc +0x388c:  mov    %edx,%eax
0876cdfe +0x388e:  shrd   $0x1,%ecx,%edx
0876ce02 +0x3892:  shrd   $0x1,%eax,%ecx
0876ce06 +0x3896:  mov    -0xd0(%ebp),%eax
0876ce0c +0x389c:  mov    %edx,-0x120(%ebp)
0876ce12 +0x38a2:  mov    -0xd0(%ebp),%edx
0876ce18 +0x38a8:  mov    %ecx,-0x11c(%ebp)
0876ce1e +0x38ae:  mov    -0xcc(%ebp),%ecx
0876ce24 +0x38b4:  shrd   $0x7,%ecx,%edx
0876ce28 +0x38b8:  xor    -0x120(%ebp),%edx
0876ce2e +0x38be:  shr    $0x7,%ecx
0876ce31 +0x38c1:  xor    -0x11c(%ebp),%ecx
0876ce37 +0x38c7:  mov    %edx,-0x130(%ebp)
0876ce3d +0x38cd:  mov    -0xcc(%ebp),%edx
0876ce43 +0x38d3:  mov    %ecx,-0x120(%ebp)
0876ce49 +0x38d9:  mov    %eax,%ecx
0876ce4b +0x38db:  shrd   $0x8,%edx,%eax
0876ce4f +0x38df:  shrd   $0x8,%ecx,%edx
0876ce53 +0x38e3:  mov    -0x130(%ebp),%ecx
0876ce59 +0x38e9:  xor    %eax,%ecx
0876ce5b +0x38eb:  mov    %ecx,-0x448(%ebp)
0876ce61 +0x38f1:  mov    -0x120(%ebp),%ecx
0876ce67 +0x38f7:  mov    -0x448(%ebp),%eax
0876ce6d +0x38fd:  xor    %edx,%ecx
0876ce6f +0x38ff:  mov    %ecx,-0x444(%ebp)
0876ce75 +0x3905:  mov    -0x444(%ebp),%edx
0876ce7b +0x390b:  add    %eax,-0xd8(%ebp)
0876ce81 +0x3911:  adc    %edx,-0xd4(%ebp)
0876ce87 +0x3917:  mov    -0xd4(%ebp),%ecx
0876ce8d +0x391d:  mov    -0xd8(%ebp),%edx
0876ce93 +0x3923:  mov    %ecx,-0x54(%ebp)
0876ce96 +0x3926:  mov    %edx,-0x58(%ebp)
0876ce99 +0x3929:  mov    -0xe0(%ebp),%eax
0876ce9f +0x392f:  mov    -0xdc(%ebp),%edx
0876cea5 +0x3935:  mov    -0xe8(%ebp),%ecx
0876ceab +0x393b:  add    %esi,%eax
0876cead +0x393d:  mov    -0xe4(%ebp),%esi
0876ceb3 +0x3943:  adc    %edi,%edx
0876ceb5 +0x3945:  mov    -0x114(%ebp),%edi
0876cebb +0x394b:  xor    -0x104(%ebp),%esi
0876cec1 +0x3951:  and    -0x114(%ebp),%esi
0876cec7 +0x3957:  xor    -0x104(%ebp),%esi
0876cecd +0x395d:  xor    -0x108(%ebp),%ecx
0876ced3 +0x3963:  and    -0x118(%ebp),%ecx
0876ced9 +0x3969:  mov    %esi,-0x32c(%ebp)
0876cedf +0x396f:  mov    -0x118(%ebp),%esi
0876cee5 +0x3975:  xor    -0x108(%ebp),%ecx
0876ceeb +0x397b:  mov    %ecx,-0x330(%ebp)
0876cef1 +0x3981:  mov    %esi,%ecx
0876cef3 +0x3983:  add    -0x330(%ebp),%eax
0876cef9 +0x3989:  adc    -0x32c(%ebp),%edx
0876ceff +0x398f:  shrd   $0x12,%edi,%esi
0876cf03 +0x3993:  shrd   $0x12,%ecx,%edi
0876cf07 +0x3997:  mov    %esi,-0x128(%ebp)
0876cf0d +0x399d:  mov    -0x118(%ebp),%esi
0876cf13 +0x39a3:  mov    %edi,-0x124(%ebp)
0876cf19 +0x39a9:  mov    -0x114(%ebp),%edi
0876cf1f +0x39af:  mov    %esi,%ecx
0876cf21 +0x39b1:  shrd   $0xe,%edi,%esi
0876cf25 +0x39b5:  xor    -0x128(%ebp),%esi
0876cf2b +0x39bb:  shrd   $0xe,%ecx,%edi
0876cf2f +0x39bf:  xor    -0x124(%ebp),%edi
0876cf35 +0x39c5:  mov    %esi,-0x120(%ebp)
0876cf3b +0x39cb:  mov    -0x118(%ebp),%esi
0876cf41 +0x39d1:  mov    %edi,-0xe0(%ebp)
0876cf47 +0x39d7:  mov    -0x114(%ebp),%edi
0876cf4d +0x39dd:  mov    %esi,%ecx
0876cf4f +0x39df:  shld   $0x17,%edi,%esi
0876cf53 +0x39e3:  shld   $0x17,%ecx,%edi
0876cf57 +0x39e7:  mov    -0x120(%ebp),%ecx
0876cf5d +0x39ed:  xor    %esi,%ecx
0876cf5f +0x39ef:  mov    -0xf8(%ebp),%esi
0876cf65 +0x39f5:  mov    %ecx,-0x338(%ebp)
0876cf6b +0x39fb:  mov    -0xe0(%ebp),%ecx
0876cf71 +0x3a01:  xor    %edi,%ecx
0876cf73 +0x3a03:  mov    -0xf4(%ebp),%edi
0876cf79 +0x3a09:  mov    %ecx,-0x334(%ebp)
0876cf7f +0x3a0f:  add    -0x338(%ebp),%eax
0876cf85 +0x3a15:  adc    -0x334(%ebp),%edx
0876cf8b +0x3a1b:  add    -0xd8(%ebp),%eax
0876cf91 +0x3a21:  adc    -0xd4(%ebp),%edx
0876cf97 +0x3a27:  add    %eax,%esi
0876cf99 +0x3a29:  adc    %edx,%edi
0876cf9b +0x3a2b:  mov    %esi,-0xf8(%ebp)
0876cfa1 +0x3a31:  mov    -0x100(%ebp),%ecx
0876cfa7 +0x3a37:  mov    %edi,-0xf4(%ebp)
0876cfad +0x3a3d:  mov    %edi,-0x2c(%ebp)
0876cfb0 +0x3a40:  mov    -0x100(%ebp),%edi
0876cfb6 +0x3a46:  and    -0xf0(%ebp),%edi
0876cfbc +0x3a4c:  mov    %esi,-0x30(%ebp)
0876cfbf +0x3a4f:  mov    -0xfc(%ebp),%esi
0876cfc5 +0x3a55:  or     -0xec(%ebp),%esi
0876cfcb +0x3a5b:  mov    %edi,-0xe0(%ebp)
0876cfd1 +0x3a61:  mov    -0xfc(%ebp),%edi
0876cfd7 +0x3a67:  and    -0xec(%ebp),%edi
0876cfdd +0x3a6d:  and    -0x10c(%ebp),%esi
0876cfe3 +0x3a73:  or     -0xf0(%ebp),%ecx
0876cfe9 +0x3a79:  and    -0x110(%ebp),%ecx
0876cfef +0x3a7f:  or     %edi,%esi
0876cff1 +0x3a81:  mov    -0xfc(%ebp),%edi
0876cff7 +0x3a87:  mov    %esi,-0x33c(%ebp)
0876cffd +0x3a8d:  mov    -0x100(%ebp),%esi
0876d003 +0x3a93:  or     -0xe0(%ebp),%ecx
0876d009 +0x3a99:  mov    %ecx,-0x340(%ebp)
0876d00f +0x3a9f:  mov    %esi,%ecx
0876d011 +0x3aa1:  shld   $0x1e,%edi,%esi
0876d015 +0x3aa5:  shld   $0x1e,%ecx,%edi
0876d019 +0x3aa9:  mov    %esi,-0xd8(%ebp)
0876d01f +0x3aaf:  mov    -0x100(%ebp),%esi
0876d025 +0x3ab5:  mov    %edi,-0xd4(%ebp)
0876d02b +0x3abb:  mov    -0xfc(%ebp),%edi
0876d031 +0x3ac1:  mov    %esi,%ecx
0876d033 +0x3ac3:  shrd   $0x1c,%edi,%esi
0876d037 +0x3ac7:  mov    %esi,-0xe0(%ebp)
0876d03d +0x3acd:  shrd   $0x1c,%ecx,%edi
0876d041 +0x3ad1:  xor    -0xd8(%ebp),%esi
0876d047 +0x3ad7:  mov    %edi,-0xdc(%ebp)
0876d04d +0x3add:  xor    -0xd4(%ebp),%edi
0876d053 +0x3ae3:  mov    %esi,-0xf0(%ebp)
0876d059 +0x3ae9:  mov    -0x100(%ebp),%esi
0876d05f +0x3aef:  mov    %edi,-0xd8(%ebp)
0876d065 +0x3af5:  mov    -0xfc(%ebp),%edi
0876d06b +0x3afb:  mov    %esi,%ecx
0876d06d +0x3afd:  shld   $0x19,%edi,%esi
0876d071 +0x3b01:  shld   $0x19,%ecx,%edi
0876d075 +0x3b05:  mov    -0xf0(%ebp),%ecx
0876d07b +0x3b0b:  xor    %esi,%ecx
0876d07d +0x3b0d:  mov    %ecx,-0x348(%ebp)
0876d083 +0x3b13:  mov    -0xd8(%ebp),%ecx
0876d089 +0x3b19:  xor    %edi,%ecx
0876d08b +0x3b1b:  mov    %ecx,-0x344(%ebp)
0876d091 +0x3b21:  mov    -0x340(%ebp),%esi
0876d097 +0x3b27:  add    -0x348(%ebp),%esi
0876d09d +0x3b2d:  mov    -0x33c(%ebp),%edi
0876d0a3 +0x3b33:  adc    -0x344(%ebp),%edi
0876d0a9 +0x3b39:  add    %eax,%esi
0876d0ab +0x3b3b:  mov    %esi,-0x50(%ebp)
0876d0ae +0x3b3e:  adc    %edx,%edi
0876d0b0 +0x3b40:  addl   $0x10,-0x134(%ebp)
0876d0b7 +0x3b47:  subl   $0xffffff80,-0x138(%ebp)
0876d0be +0x3b4e:  cmpl   $0x50,-0x134(%ebp)
0876d0c5 +0x3b55:  mov    %edi,-0x4c(%ebp)
0876d0c8 +0x3b58:  je     0876d3f0 <+0x3e80>
0876d0ce +0x3b5e:  mov    -0x24(%ebp),%edx
0876d0d1 +0x3b61:  mov    -0x28(%ebp),%eax
0876d0d4 +0x3b64:  mov    -0xf8(%ebp),%esi
0876d0da +0x3b6a:  mov    -0xf4(%ebp),%edi
0876d0e0 +0x3b70:  mov    %edx,-0x11c(%ebp)
0876d0e6 +0x3b76:  mov    -0x20(%ebp),%edx
0876d0e9 +0x3b79:  mov    %eax,-0x120(%ebp)
0876d0ef +0x3b7f:  mov    -0x1c(%ebp),%ecx
0876d0f2 +0x3b82:  mov    -0x138(%ebp),%eax
0876d0f8 +0x3b88:  mov    %esi,-0xd8(%ebp)
0876d0fe +0x3b8e:  mov    %edx,-0x128(%ebp)
0876d104 +0x3b94:  mov    -0x134(%ebp),%edx
0876d10a +0x3b9a:  mov    %edi,-0xd4(%ebp)
0876d110 +0x3ba0:  mov    %ecx,-0x124(%ebp)
0876d116 +0x3ba6:  mov    (%eax),%esi
0876d118 +0x3ba8:  mov    0x4(%eax),%edi
0876d11b +0x3bab:  test   %edx,%edx
0876d11d +0x3bad:  jne    0876968b <+0x11b>
0876d123 +0x3bb3:  mov    -0x144(%ebp),%edx
0876d129 +0x3bb9:  mov    (%edx),%eax
0876d12b +0x3bbb:  mov    0x4(%edx),%edx
0876d12e +0x3bbe:  mov    %eax,-0xe0(%ebp)
0876d134 +0x3bc4:  mov    %edx,-0xdc(%ebp)
0876d13a +0x3bca:  mov    %eax,-0xd0(%ebp)
0876d140 +0x3bd0:  mov    %edx,-0xcc(%ebp)
0876d146 +0x3bd6:  jmp    087697fd <+0x28d>
0876d14b +0x3bdb:  nop
0876d14c +0x3bdc:  lea    0x0(%esi,%eiz,1),%esi
0876d150 +0x3be0:  mov    -0x144(%ebp),%edx
0876d156 +0x3be6:  mov    0x78(%edx),%eax
0876d159 +0x3be9:  mov    0x7c(%edx),%edx
0876d15c +0x3bec:  mov    %eax,-0xd8(%ebp)
0876d162 +0x3bf2:  mov    %edx,-0xd4(%ebp)
0876d168 +0x3bf8:  mov    %eax,-0x58(%ebp)
0876d16b +0x3bfb:  mov    %edx,-0x54(%ebp)
0876d16e +0x3bfe:  jmp    0876ce99 <+0x3929>
0876d173 +0x3c03:  nop
0876d174 +0x3c04:  lea    0x0(%esi,%eiz,1),%esi
0876d178 +0x3c08:  mov    -0x144(%ebp),%edx
0876d17e +0x3c0e:  mov    0x70(%edx),%eax
0876d181 +0x3c11:  mov    0x74(%edx),%edx
0876d184 +0x3c14:  mov    %eax,-0xd8(%ebp)
0876d18a +0x3c1a:  mov    %edx,-0xd4(%ebp)
0876d190 +0x3c20:  mov    %eax,-0x60(%ebp)
0876d193 +0x3c23:  mov    %edx,-0x5c(%ebp)
0876d196 +0x3c26:  jmp    0876caeb <+0x357b>
0876d19b +0x3c2b:  nop
0876d19c +0x3c2c:  lea    0x0(%esi,%eiz,1),%esi
0876d1a0 +0x3c30:  mov    -0x144(%ebp),%edx
0876d1a6 +0x3c36:  mov    0x68(%edx),%eax
0876d1a9 +0x3c39:  mov    0x6c(%edx),%edx
0876d1ac +0x3c3c:  mov    %eax,-0xd8(%ebp)
0876d1b2 +0x3c42:  mov    %edx,-0xd4(%ebp)
0876d1b8 +0x3c48:  mov    %eax,-0x68(%ebp)
0876d1bb +0x3c4b:  mov    %edx,-0x64(%ebp)
0876d1be +0x3c4e:  jmp    0876c74f <+0x31df>
0876d1c3 +0x3c53:  nop
0876d1c4 +0x3c54:  lea    0x0(%esi,%eiz,1),%esi
0876d1c8 +0x3c58:  mov    -0x144(%ebp),%edx
0876d1ce +0x3c5e:  mov    0x60(%edx),%eax
0876d1d1 +0x3c61:  mov    0x64(%edx),%edx
0876d1d4 +0x3c64:  mov    %eax,-0xd8(%ebp)
0876d1da +0x3c6a:  mov    %edx,-0xd4(%ebp)
0876d1e0 +0x3c70:  mov    %eax,-0x70(%ebp)
0876d1e3 +0x3c73:  mov    %edx,-0x6c(%ebp)
0876d1e6 +0x3c76:  jmp    0876c3b3 <+0x2e43>
0876d1eb +0x3c7b:  nop
0876d1ec +0x3c7c:  lea    0x0(%esi,%eiz,1),%esi
0876d1f0 +0x3c80:  mov    -0x144(%ebp),%edx
0876d1f6 +0x3c86:  mov    0x58(%edx),%eax
0876d1f9 +0x3c89:  mov    0x5c(%edx),%edx
0876d1fc +0x3c8c:  mov    %eax,-0xd8(%ebp)
0876d202 +0x3c92:  mov    %edx,-0xd4(%ebp)
0876d208 +0x3c98:  mov    %eax,-0x78(%ebp)
0876d20b +0x3c9b:  mov    %edx,-0x74(%ebp)
0876d20e +0x3c9e:  jmp    0876c02f <+0x2abf>
0876d213 +0x3ca3:  nop
0876d214 +0x3ca4:  lea    0x0(%esi,%eiz,1),%esi
0876d218 +0x3ca8:  mov    -0x144(%ebp),%edx
0876d21e +0x3cae:  mov    0x50(%edx),%eax
0876d221 +0x3cb1:  mov    0x54(%edx),%edx
0876d224 +0x3cb4:  mov    %eax,-0xd8(%ebp)
0876d22a +0x3cba:  mov    %edx,-0xd4(%ebp)
0876d230 +0x3cc0:  mov    %eax,-0x80(%ebp)
0876d233 +0x3cc3:  mov    %edx,-0x7c(%ebp)
0876d236 +0x3cc6:  jmp    0876bc99 <+0x2729>
0876d23b +0x3ccb:  nop
0876d23c +0x3ccc:  lea    0x0(%esi,%eiz,1),%esi
0876d240 +0x3cd0:  mov    -0x144(%ebp),%edx
0876d246 +0x3cd6:  mov    0x48(%edx),%eax
0876d249 +0x3cd9:  mov    0x4c(%edx),%edx
0876d24c +0x3cdc:  mov    %eax,-0xd8(%ebp)
0876d252 +0x3ce2:  mov    %edx,-0xd4(%ebp)
0876d258 +0x3ce8:  mov    %eax,-0x88(%ebp)
0876d25e +0x3cee:  mov    %edx,-0x84(%ebp)
0876d264 +0x3cf4:  jmp    0876b903 <+0x2393>
0876d269 +0x3cf9:  lea    0x0(%esi,%eiz,1),%esi
0876d270 +0x3d00:  mov    -0x144(%ebp),%edx
0876d276 +0x3d06:  mov    0x40(%edx),%eax
0876d279 +0x3d09:  mov    0x44(%edx),%edx
0876d27c +0x3d0c:  mov    %eax,-0xd8(%ebp)
0876d282 +0x3d12:  mov    %edx,-0xd4(%ebp)
0876d288 +0x3d18:  mov    %eax,-0x90(%ebp)
0876d28e +0x3d1e:  mov    %edx,-0x8c(%ebp)
0876d294 +0x3d24:  jmp    0876b561 <+0x1ff1>
0876d299 +0x3d29:  lea    0x0(%esi,%eiz,1),%esi
0876d2a0 +0x3d30:  mov    -0x144(%ebp),%edx
0876d2a6 +0x3d36:  mov    0x38(%edx),%eax
0876d2a9 +0x3d39:  mov    0x3c(%edx),%edx
0876d2ac +0x3d3c:  mov    %eax,-0xd8(%ebp)
0876d2b2 +0x3d42:  mov    %edx,-0xd4(%ebp)
0876d2b8 +0x3d48:  mov    %eax,-0x98(%ebp)
0876d2be +0x3d4e:  mov    %edx,-0x94(%ebp)
0876d2c4 +0x3d54:  jmp    0876b1ad <+0x1c3d>
0876d2c9 +0x3d59:  lea    0x0(%esi,%eiz,1),%esi
0876d2d0 +0x3d60:  mov    -0x144(%ebp),%edx
0876d2d6 +0x3d66:  mov    0x30(%edx),%eax
0876d2d9 +0x3d69:  mov    0x34(%edx),%edx
0876d2dc +0x3d6c:  mov    %eax,-0xd8(%ebp)
0876d2e2 +0x3d72:  mov    %edx,-0xd4(%ebp)
0876d2e8 +0x3d78:  mov    %eax,-0xa0(%ebp)
0876d2ee +0x3d7e:  mov    %edx,-0x9c(%ebp)
0876d2f4 +0x3d84:  jmp    0876adf9 <+0x1889>
0876d2f9 +0x3d89:  lea    0x0(%esi,%eiz,1),%esi
0876d300 +0x3d90:  mov    -0x144(%ebp),%edx
0876d306 +0x3d96:  mov    0x28(%edx),%eax
0876d309 +0x3d99:  mov    0x2c(%edx),%edx
0876d30c +0x3d9c:  mov    %eax,-0xd8(%ebp)
0876d312 +0x3da2:  mov    %edx,-0xd4(%ebp)
0876d318 +0x3da8:  mov    %eax,-0xa8(%ebp)
0876d31e +0x3dae:  mov    %edx,-0xa4(%ebp)
0876d324 +0x3db4:  jmp    0876aa4b <+0x14db>
0876d329 +0x3db9:  lea    0x0(%esi,%eiz,1),%esi
0876d330 +0x3dc0:  mov    -0x144(%ebp),%edx
0876d336 +0x3dc6:  mov    0x20(%edx),%eax
0876d339 +0x3dc9:  mov    0x24(%edx),%edx
0876d33c +0x3dcc:  mov    %eax,-0xd8(%ebp)
0876d342 +0x3dd2:  mov    %edx,-0xd4(%ebp)
0876d348 +0x3dd8:  mov    %eax,-0xb0(%ebp)
0876d34e +0x3dde:  mov    %edx,-0xac(%ebp)
0876d354 +0x3de4:  jmp    0876a69d <+0x112d>
0876d359 +0x3de9:  lea    0x0(%esi,%eiz,1),%esi
0876d360 +0x3df0:  mov    -0x144(%ebp),%edx
0876d366 +0x3df6:  mov    0x18(%edx),%eax
0876d369 +0x3df9:  mov    0x1c(%edx),%edx
0876d36c +0x3dfc:  mov    %eax,-0xe0(%ebp)
0876d372 +0x3e02:  mov    %edx,-0xdc(%ebp)
0876d378 +0x3e08:  mov    %eax,-0xb8(%ebp)
0876d37e +0x3e0e:  mov    %edx,-0xb4(%ebp)
0876d384 +0x3e14:  jmp    0876a2f5 <+0xd85>
0876d389 +0x3e19:  lea    0x0(%esi,%eiz,1),%esi
0876d390 +0x3e20:  mov    -0x144(%ebp),%edx
0876d396 +0x3e26:  mov    0x10(%edx),%eax
0876d399 +0x3e29:  mov    0x14(%edx),%edx
0876d39c +0x3e2c:  mov    %eax,-0xe0(%ebp)
0876d3a2 +0x3e32:  mov    %edx,-0xdc(%ebp)
0876d3a8 +0x3e38:  mov    %eax,-0xc0(%ebp)
0876d3ae +0x3e3e:  mov    %edx,-0xbc(%ebp)
0876d3b4 +0x3e44:  jmp    08769f4d <+0x9dd>
0876d3b9 +0x3e49:  lea    0x0(%esi,%eiz,1),%esi
0876d3c0 +0x3e50:  mov    -0x144(%ebp),%edx
0876d3c6 +0x3e56:  mov    0x8(%edx),%eax
0876d3c9 +0x3e59:  mov    0xc(%edx),%edx
0876d3cc +0x3e5c:  mov    %eax,-0xe8(%ebp)
0876d3d2 +0x3e62:  mov    %edx,-0xe4(%ebp)
0876d3d8 +0x3e68:  mov    %eax,-0xc8(%ebp)
0876d3de +0x3e6e:  mov    %edx,-0xc4(%ebp)
0876d3e4 +0x3e74:  jmp    08769ba6 <+0x636>
0876d3e9 +0x3e79:  lea    0x0(%esi,%eiz,1),%esi
0876d3f0 +0x3e80:  mov    -0x148(%ebp),%ecx
0876d3f6 +0x3e86:  add    %esi,(%ecx)
0876d3f8 +0x3e88:  adc    %edi,0x4(%ecx)
0876d3fb +0x3e8b:  mov    -0x48(%ebp),%eax
0876d3fe +0x3e8e:  mov    -0x44(%ebp),%edx
0876d401 +0x3e91:  add    %eax,0x8(%ecx)
0876d404 +0x3e94:  adc    %edx,0xc(%ecx)
0876d407 +0x3e97:  mov    -0x40(%ebp),%eax
0876d40a +0x3e9a:  mov    -0x3c(%ebp),%edx
0876d40d +0x3e9d:  add    %eax,0x10(%ecx)
0876d410 +0x3ea0:  adc    %edx,0x14(%ecx)
0876d413 +0x3ea3:  mov    -0x38(%ebp),%eax
0876d416 +0x3ea6:  mov    -0x34(%ebp),%edx
0876d419 +0x3ea9:  mov    -0xf8(%ebp),%esi
0876d41f +0x3eaf:  add    %eax,0x18(%ecx)
0876d422 +0x3eb2:  adc    %edx,0x1c(%ecx)
0876d425 +0x3eb5:  mov    -0xf4(%ebp),%edi
0876d42b +0x3ebb:  add    %esi,0x20(%ecx)
0876d42e +0x3ebe:  adc    %edi,0x24(%ecx)
0876d431 +0x3ec1:  mov    -0x28(%ebp),%eax
0876d434 +0x3ec4:  mov    -0x24(%ebp),%edx
0876d437 +0x3ec7:  add    %eax,0x28(%ecx)
0876d43a +0x3eca:  adc    %edx,0x2c(%ecx)
0876d43d +0x3ecd:  mov    -0x20(%ebp),%eax
0876d440 +0x3ed0:  mov    -0x1c(%ebp),%edx
0876d443 +0x3ed3:  add    %eax,0x30(%ecx)
0876d446 +0x3ed6:  adc    %edx,0x34(%ecx)
0876d449 +0x3ed9:  mov    -0x18(%ebp),%eax
0876d44c +0x3edc:  mov    -0x14(%ebp),%edx
0876d44f +0x3edf:  add    %eax,0x38(%ecx)
0876d452 +0x3ee2:  adc    %edx,0x3c(%ecx)
0876d455 +0x3ee5:  add    $0x444,%esp
0876d45b +0x3eeb:  pop    %ebx
0876d45c +0x3eec:  pop    %esi
0876d45d +0x3eed:  pop    %edi
0876d45e +0x3eee:  pop    %ebp
0876d45f +0x3eef:  ret
```

## 反编译 C

```c
// TaoCrypt::Transform512 @ 0x8769570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Transform512(unsigned long long*, unsigned long long*) */

void __regparm3 TaoCrypt::Transform512(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
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
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  uint *local_13c;
  int local_138;
  uint local_10c;
  uint local_108;
  uint local_ec;
  uint local_e8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_54 = (uint)*param_1;
  local_50 = *(uint *)((int)param_1 + 4);
  local_4c = (uint)param_1[1];
  local_48 = *(uint *)((int)param_1 + 0xc);
  local_44 = (uint)param_1[2];
  local_40 = *(uint *)((int)param_1 + 0x14);
  local_3c = (uint)param_1[3];
  local_38 = *(uint *)((int)param_1 + 0x1c);
  local_34 = (uint)param_1[4];
  local_30 = *(uint *)((int)param_1 + 0x24);
  local_2c = (uint)param_1[5];
  local_28 = *(uint *)((int)param_1 + 0x2c);
  local_ec = (uint)param_1[6];
  local_e8 = *(uint *)((int)param_1 + 0x34);
  local_10c = (uint)param_1[7];
  local_108 = *(uint *)((int)param_1 + 0x3c);
  local_138 = 0;
  uVar22 = K512;
  uVar9 = DAT_08d05464;
  local_13c = &K512;
  do {
    local_d4 = (uint)*param_2;
    local_d0 = *(uint *)((int)param_2 + 4);
    while( true ) {
      uVar7 = (local_34 >> 0xe | local_30 << 0x12) ^ (local_34 >> 0x12 | local_30 << 0xe) ^
              (local_34 << 0x17 | local_30 >> 9);
      uVar4 = local_10c + uVar22 + uVar7;
      uVar8 = (local_ec ^ local_2c) & local_34 ^ local_ec;
      uVar5 = uVar4 + uVar8;
      uVar6 = uVar5 + local_d4;
      iVar23 = local_108 + uVar9 + (uint)CARRY4(local_10c,uVar22) +
               ((local_30 >> 0xe | local_34 << 0x12) ^ (local_30 >> 0x12 | local_34 << 0xe) ^
               (local_30 << 0x17 | local_34 >> 9)) + (uint)CARRY4(local_10c + uVar22,uVar7) +
               ((local_e8 ^ local_28) & local_30 ^ local_e8) + (uint)CARRY4(uVar4,uVar8) + local_d0
               + (uint)CARRY4(uVar5,local_d4);
      uVar4 = uVar6 + local_3c;
      uVar8 = iVar23 + local_38 + (uint)CARRY4(uVar6,local_3c);
      uVar5 = (local_4c | local_54) & local_44 | local_4c & local_54;
      uVar9 = (local_54 << 0x1e | local_50 >> 2) ^ (local_54 >> 0x1c | local_50 << 4) ^
              (local_54 << 0x19 | local_50 >> 7);
      uVar7 = uVar5 + uVar9;
      uVar22 = uVar7 + uVar6;
      uVar9 = (local_48 & local_50 | (local_50 | local_48) & local_40) +
              ((local_50 << 0x1e | local_54 >> 2) ^ (local_50 >> 0x1c | local_54 << 4) ^
              (local_50 << 0x19 | local_54 >> 7)) + (uint)CARRY4(uVar5,uVar9) + iVar23 +
              (uint)CARRY4(uVar7,uVar6);
      if (local_138 == 0) {
        local_cc = (uint)param_2[1];
        local_c8 = *(uint *)((int)param_2 + 0xc);
      }
      else {
        bVar27 = CARRY4(local_84,local_cc);
        uVar5 = local_84 + local_cc;
        uVar7 = (local_5c >> 0x13 | local_58 << 0xd) ^ (local_5c >> 6 | local_58 << 0x1a) ^
                (local_5c << 3 | local_58 >> 0x1d);
        uVar6 = uVar5 + uVar7;
        uVar10 = (local_c4 >> 7 | local_c0 << 0x19) ^ (local_c4 >> 1 | local_c0 << 0x1f) ^
                 (local_c4 >> 8 | local_c0 << 0x18);
        local_cc = uVar6 + uVar10;
        local_c8 = local_80 + local_c8 + (uint)bVar27 +
                   ((local_58 >> 0x13 | local_5c << 0xd) ^ local_58 >> 6 ^
                   (local_58 << 3 | local_5c >> 0x1d)) + (uint)CARRY4(uVar5,uVar7) +
                   (local_c0 >> 7 ^ (local_c0 >> 1 | local_c4 << 0x1f) ^
                   (local_c0 >> 8 | local_c4 << 0x18)) + (uint)CARRY4(uVar6,uVar10);
      }
      uVar5 = local_ec + local_13c[2];
      uVar11 = (local_2c ^ local_34) & uVar4 ^ local_2c;
      uVar6 = uVar5 + uVar11;
      uVar12 = (uVar4 >> 0xe | uVar8 * 0x40000) ^ (uVar4 >> 0x12 | uVar8 * 0x4000) ^
               (uVar4 * 0x800000 | uVar8 >> 9);
      uVar7 = uVar6 + uVar12;
      uVar10 = uVar7 + local_cc;
      iVar23 = local_e8 + local_13c[3] + (uint)CARRY4(local_ec,local_13c[2]) +
               ((local_28 ^ local_30) & uVar8 ^ local_28) + (uint)CARRY4(uVar5,uVar11) +
               ((uVar8 >> 0xe | uVar4 * 0x40000) ^ (uVar8 >> 0x12 | uVar4 * 0x4000) ^
               (uVar8 * 0x800000 | uVar4 >> 9)) + (uint)CARRY4(uVar6,uVar12) + local_c8 +
               (uint)CARRY4(uVar7,local_cc);
      uVar7 = uVar10 + local_44;
      uVar24 = iVar23 + local_40 + (uint)CARRY4(uVar10,local_44);
      uVar11 = (uVar22 | local_54) & local_4c | local_54 & uVar22;
      uVar6 = (uVar22 >> 0x1c | uVar9 * 0x10) ^ (uVar22 * 0x40000000 | uVar9 >> 2) ^
              (uVar22 * 0x2000000 | uVar9 >> 7);
      uVar12 = uVar11 + uVar6;
      uVar5 = uVar12 + uVar10;
      uVar6 = ((uVar9 | local_50) & local_48 | uVar9 & local_50) +
              ((uVar9 >> 0x1c | uVar22 * 0x10) ^ (uVar9 * 0x40000000 | uVar22 >> 2) ^
              (uVar9 * 0x2000000 | uVar22 >> 7)) + (uint)CARRY4(uVar11,uVar6) + iVar23 +
              (uint)CARRY4(uVar12,uVar10);
      if (local_138 == 0) {
        local_c4 = (uint)param_2[2];
        local_c0 = *(uint *)((int)param_2 + 0x14);
      }
      else {
        bVar27 = CARRY4(local_7c,local_c4);
        uVar10 = local_7c + local_c4;
        uVar12 = (local_d4 >> 0x13 | local_d0 << 0xd) ^ (local_d4 >> 6 | local_d0 << 0x1a) ^
                 (local_d4 << 3 | local_d0 >> 0x1d);
        uVar11 = uVar10 + uVar12;
        uVar13 = (local_bc >> 7 | local_b8 << 0x19) ^ (local_bc >> 1 | local_b8 << 0x1f) ^
                 (local_bc >> 8 | local_b8 << 0x18);
        local_c4 = uVar11 + uVar13;
        local_c0 = local_78 + local_c0 + (uint)bVar27 +
                   ((local_d0 >> 0x13 | local_d4 << 0xd) ^ local_d0 >> 6 ^
                   (local_d0 << 3 | local_d4 >> 0x1d)) + (uint)CARRY4(uVar10,uVar12) +
                   (local_b8 >> 7 ^ (local_b8 >> 1 | local_bc << 0x1f) ^
                   (local_b8 >> 8 | local_bc << 0x18)) + (uint)CARRY4(uVar11,uVar13);
      }
      uVar10 = local_2c + local_13c[4];
      uVar14 = (local_34 ^ uVar4) & uVar7 ^ local_34;
      uVar11 = uVar10 + uVar14;
      uVar15 = (uVar7 >> 0xe | uVar24 * 0x40000) ^ (uVar7 >> 0x12 | uVar24 * 0x4000) ^
               (uVar7 * 0x800000 | uVar24 >> 9);
      uVar12 = uVar11 + uVar15;
      uVar13 = uVar12 + local_c4;
      iVar23 = local_28 + local_13c[5] + (uint)CARRY4(local_2c,local_13c[4]) +
               ((local_30 ^ uVar8) & uVar24 ^ local_30) + (uint)CARRY4(uVar10,uVar14) +
               ((uVar24 >> 0xe | uVar7 * 0x40000) ^ (uVar24 >> 0x12 | uVar7 * 0x4000) ^
               (uVar24 * 0x800000 | uVar7 >> 9)) + (uint)CARRY4(uVar11,uVar15) + local_c0 +
               (uint)CARRY4(uVar12,local_c4);
      uVar12 = uVar13 + local_4c;
      uVar25 = iVar23 + local_48 + (uint)CARRY4(uVar13,local_4c);
      uVar14 = (uVar5 | uVar22) & local_54 | uVar5 & uVar22;
      uVar11 = (uVar5 >> 0x1c | uVar6 * 0x10) ^ (uVar5 * 0x40000000 | uVar6 >> 2) ^
               (uVar5 * 0x2000000 | uVar6 >> 7);
      uVar15 = uVar14 + uVar11;
      uVar10 = uVar15 + uVar13;
      uVar11 = ((uVar6 | uVar9) & local_50 | uVar6 & uVar9) +
               ((uVar6 >> 0x1c | uVar5 * 0x10) ^ (uVar6 * 0x40000000 | uVar5 >> 2) ^
               (uVar6 * 0x2000000 | uVar5 >> 7)) + (uint)CARRY4(uVar14,uVar11) + iVar23 +
               (uint)CARRY4(uVar15,uVar13);
      if (local_138 == 0) {
        local_bc = (uint)param_2[3];
        local_b8 = *(uint *)((int)param_2 + 0x1c);
      }
      else {
        bVar27 = CARRY4(local_74,local_bc);
        uVar13 = local_74 + local_bc;
        uVar15 = (local_cc >> 0x13 | local_c8 << 0xd) ^ (local_cc >> 6 | local_c8 << 0x1a) ^
                 (local_cc << 3 | local_c8 >> 0x1d);
        uVar14 = uVar13 + uVar15;
        uVar16 = (local_b4 >> 7 | local_b0 << 0x19) ^ (local_b4 >> 1 | local_b0 << 0x1f) ^
                 (local_b4 >> 8 | local_b0 << 0x18);
        local_bc = uVar14 + uVar16;
        local_b8 = local_70 + local_b8 + (uint)bVar27 +
                   ((local_c8 >> 0x13 | local_cc << 0xd) ^ local_c8 >> 6 ^
                   (local_c8 << 3 | local_cc >> 0x1d)) + (uint)CARRY4(uVar13,uVar15) +
                   (local_b0 >> 7 ^ (local_b0 >> 1 | local_b4 << 0x1f) ^
                   (local_b0 >> 8 | local_b4 << 0x18)) + (uint)CARRY4(uVar14,uVar16);
      }
      uVar13 = local_34 + local_13c[6];
      uVar17 = (uVar7 ^ uVar4) & uVar12 ^ uVar4;
      uVar14 = uVar13 + uVar17;
      uVar18 = (uVar12 >> 0xe | uVar25 * 0x40000) ^ (uVar12 >> 0x12 | uVar25 * 0x4000) ^
               (uVar12 * 0x800000 | uVar25 >> 9);
      uVar15 = uVar14 + uVar18;
      uVar16 = uVar15 + local_bc;
      iVar23 = local_30 + local_13c[7] + (uint)CARRY4(local_34,local_13c[6]) +
               ((uVar24 ^ uVar8) & uVar25 ^ uVar8) + (uint)CARRY4(uVar13,uVar17) +
               ((uVar25 >> 0xe | uVar12 * 0x40000) ^ (uVar25 >> 0x12 | uVar12 * 0x4000) ^
               (uVar25 * 0x800000 | uVar12 >> 9)) + (uint)CARRY4(uVar14,uVar18) + local_b8 +
               (uint)CARRY4(uVar15,local_bc);
      uVar15 = uVar16 + local_54;
      uVar26 = iVar23 + local_50 + (uint)CARRY4(uVar16,local_54);
      uVar17 = (uVar10 | uVar5) & uVar22 | uVar10 & uVar5;
      uVar14 = (uVar10 >> 0x1c | uVar11 * 0x10) ^ (uVar10 * 0x40000000 | uVar11 >> 2) ^
               (uVar10 * 0x2000000 | uVar11 >> 7);
      uVar18 = uVar17 + uVar14;
      uVar13 = uVar18 + uVar16;
      uVar14 = ((uVar11 | uVar6) & uVar9 | uVar11 & uVar6) +
               ((uVar11 >> 0x1c | uVar10 * 0x10) ^ (uVar11 * 0x40000000 | uVar10 >> 2) ^
               (uVar11 * 0x2000000 | uVar10 >> 7)) + (uint)CARRY4(uVar17,uVar14) + iVar23 +
               (uint)CARRY4(uVar18,uVar16);
      if (local_138 == 0) {
        local_b4 = (uint)param_2[4];
        local_b0 = *(uint *)((int)param_2 + 0x24);
      }
      else {
        bVar27 = CARRY4(local_6c,local_b4);
        uVar16 = local_6c + local_b4;
        uVar18 = (local_c4 >> 0x13 | local_c0 << 0xd) ^ (local_c4 >> 6 | local_c0 << 0x1a) ^
                 (local_c4 << 3 | local_c0 >> 0x1d);
        uVar17 = uVar16 + uVar18;
        uVar19 = (local_ac >> 7 | local_a8 << 0x19) ^ (local_ac >> 1 | local_a8 << 0x1f) ^
                 (local_ac >> 8 | local_a8 << 0x18);
        local_b4 = uVar17 + uVar19;
        local_b0 = local_68 + local_b0 + (uint)bVar27 +
                   ((local_c0 >> 0x13 | local_c4 << 0xd) ^ local_c0 >> 6 ^
                   (local_c0 << 3 | local_c4 >> 0x1d)) + (uint)CARRY4(uVar16,uVar18) +
                   (local_a8 >> 7 ^ (local_a8 >> 1 | local_ac << 0x1f) ^
                   (local_a8 >> 8 | local_ac << 0x18)) + (uint)CARRY4(uVar17,uVar19);
      }
      uVar16 = uVar4 + local_13c[8];
      uVar20 = (uVar12 ^ uVar7) & uVar15 ^ uVar7;
      uVar17 = uVar16 + uVar20;
      uVar21 = (uVar15 >> 0xe | uVar26 * 0x40000) ^ (uVar15 >> 0x12 | uVar26 * 0x4000) ^
               (uVar15 * 0x800000 | uVar26 >> 9);
      uVar18 = uVar17 + uVar21;
      uVar19 = uVar18 + local_b4;
      iVar23 = uVar8 + local_13c[9] + (uint)CARRY4(uVar4,local_13c[8]) +
               ((uVar25 ^ uVar24) & uVar26 ^ uVar24) + (uint)CARRY4(uVar16,uVar20) +
               ((uVar26 >> 0xe | uVar15 * 0x40000) ^ (uVar26 >> 0x12 | uVar15 * 0x4000) ^
               (uVar26 * 0x800000 | uVar15 >> 9)) + (uint)CARRY4(uVar17,uVar21) + local_b0 +
               (uint)CARRY4(uVar18,local_b4);
      uVar4 = uVar22 + uVar19;
      uVar17 = uVar9 + iVar23 + (uint)CARRY4(uVar22,uVar19);
      uVar8 = (uVar13 | uVar10) & uVar5 | uVar13 & uVar10;
      uVar9 = (uVar13 >> 0x1c | uVar14 * 0x10) ^ (uVar13 * 0x40000000 | uVar14 >> 2) ^
              (uVar13 * 0x2000000 | uVar14 >> 7);
      uVar16 = uVar8 + uVar9;
      uVar22 = uVar16 + uVar19;
      uVar9 = ((uVar14 | uVar11) & uVar6 | uVar14 & uVar11) +
              ((uVar14 >> 0x1c | uVar13 * 0x10) ^ (uVar14 * 0x40000000 | uVar13 >> 2) ^
              (uVar14 * 0x2000000 | uVar13 >> 7)) + (uint)CARRY4(uVar8,uVar9) + iVar23 +
              (uint)CARRY4(uVar16,uVar19);
      if (local_138 == 0) {
        local_ac = (uint)param_2[5];
        local_a8 = *(uint *)((int)param_2 + 0x2c);
      }
      else {
        bVar27 = CARRY4(local_64,local_ac);
        uVar8 = local_64 + local_ac;
        uVar18 = (local_bc >> 0x13 | local_b8 << 0xd) ^ (local_bc >> 6 | local_b8 << 0x1a) ^
                 (local_bc << 3 | local_b8 >> 0x1d);
        uVar16 = uVar8 + uVar18;
        uVar19 = (local_a4 >> 7 | local_a0 << 0x19) ^ (local_a4 >> 1 | local_a0 << 0x1f) ^
                 (local_a4 >> 8 | local_a0 << 0x18);
        local_ac = uVar16 + uVar19;
        local_a8 = local_60 + local_a8 + (uint)bVar27 +
                   ((local_b8 >> 0x13 | local_bc << 0xd) ^ local_b8 >> 6 ^
                   (local_b8 << 3 | local_bc >> 0x1d)) + (uint)CARRY4(uVar8,uVar18) +
                   (local_a0 >> 7 ^ (local_a0 >> 1 | local_a4 << 0x1f) ^
                   (local_a0 >> 8 | local_a4 << 0x18)) + (uint)CARRY4(uVar16,uVar19);
      }
      uVar8 = uVar7 + local_13c[10];
      uVar20 = (uVar15 ^ uVar12) & uVar4 ^ uVar12;
      uVar16 = uVar8 + uVar20;
      uVar21 = (uVar4 >> 0xe | uVar17 * 0x40000) ^ (uVar4 >> 0x12 | uVar17 * 0x4000) ^
               (uVar4 * 0x800000 | uVar17 >> 9);
      uVar18 = uVar16 + uVar21;
      uVar19 = uVar18 + local_ac;
      iVar23 = uVar24 + local_13c[0xb] + (uint)CARRY4(uVar7,local_13c[10]) +
               ((uVar26 ^ uVar25) & uVar17 ^ uVar25) + (uint)CARRY4(uVar8,uVar20) +
               ((uVar17 >> 0xe | uVar4 * 0x40000) ^ (uVar17 >> 0x12 | uVar4 * 0x4000) ^
               (uVar17 * 0x800000 | uVar4 >> 9)) + (uint)CARRY4(uVar16,uVar21) + local_a8 +
               (uint)CARRY4(uVar18,local_ac);
      uVar7 = uVar5 + uVar19;
      uVar16 = uVar6 + iVar23 + (uint)CARRY4(uVar5,uVar19);
      uVar8 = (uVar22 | uVar13) & uVar10 | uVar22 & uVar13;
      uVar6 = (uVar22 >> 0x1c | uVar9 * 0x10) ^ (uVar22 * 0x40000000 | uVar9 >> 2) ^
              (uVar22 * 0x2000000 | uVar9 >> 7);
      uVar24 = uVar8 + uVar6;
      uVar5 = uVar24 + uVar19;
      uVar6 = ((uVar9 | uVar14) & uVar11 | uVar9 & uVar14) +
              ((uVar9 >> 0x1c | uVar22 * 0x10) ^ (uVar9 * 0x40000000 | uVar22 >> 2) ^
              (uVar9 * 0x2000000 | uVar22 >> 7)) + (uint)CARRY4(uVar8,uVar6) + iVar23 +
              (uint)CARRY4(uVar24,uVar19);
      if (local_138 == 0) {
        local_a4 = (uint)param_2[6];
        local_a0 = *(uint *)((int)param_2 + 0x34);
      }
      else {
        bVar27 = CARRY4(local_5c,local_a4);
        uVar8 = local_5c + local_a4;
        uVar18 = (local_b4 >> 0x13 | local_b0 << 0xd) ^ (local_b4 >> 6 | local_b0 << 0x1a) ^
                 (local_b4 << 3 | local_b0 >> 0x1d);
        uVar24 = uVar8 + uVar18;
        uVar19 = (local_9c >> 7 | local_98 << 0x19) ^ (local_9c >> 1 | local_98 << 0x1f) ^
                 (local_9c >> 8 | local_98 << 0x18);
        local_a4 = uVar24 + uVar19;
        local_a0 = local_58 + local_a0 + (uint)bVar27 +
                   ((local_b0 >> 0x13 | local_b4 << 0xd) ^ local_b0 >> 6 ^
                   (local_b0 << 3 | local_b4 >> 0x1d)) + (uint)CARRY4(uVar8,uVar18) +
                   (local_98 >> 7 ^ (local_98 >> 1 | local_9c << 0x1f) ^
                   (local_98 >> 8 | local_9c << 0x18)) + (uint)CARRY4(uVar24,uVar19);
      }
      uVar8 = uVar12 + local_13c[0xc];
      uVar20 = (uVar4 ^ uVar15) & uVar7 ^ uVar15;
      uVar24 = uVar8 + uVar20;
      uVar21 = (uVar7 >> 0xe | uVar16 * 0x40000) ^ (uVar7 >> 0x12 | uVar16 * 0x4000) ^
               (uVar7 * 0x800000 | uVar16 >> 9);
      uVar18 = uVar24 + uVar21;
      uVar19 = uVar18 + local_a4;
      iVar23 = uVar25 + local_13c[0xd] + (uint)CARRY4(uVar12,local_13c[0xc]) +
               ((uVar17 ^ uVar26) & uVar16 ^ uVar26) + (uint)CARRY4(uVar8,uVar20) +
               ((uVar16 >> 0xe | uVar7 * 0x40000) ^ (uVar16 >> 0x12 | uVar7 * 0x4000) ^
               (uVar16 * 0x800000 | uVar7 >> 9)) + (uint)CARRY4(uVar24,uVar21) + local_a0 +
               (uint)CARRY4(uVar18,local_a4);
      uVar12 = uVar10 + uVar19;
      uVar25 = uVar11 + iVar23 + (uint)CARRY4(uVar10,uVar19);
      uVar11 = (uVar5 | uVar22) & uVar13 | uVar5 & uVar22;
      uVar10 = (uVar5 >> 0x1c | uVar6 * 0x10) ^ (uVar5 * 0x40000000 | uVar6 >> 2) ^
               (uVar5 * 0x2000000 | uVar6 >> 7);
      uVar24 = uVar11 + uVar10;
      uVar8 = uVar24 + uVar19;
      uVar10 = ((uVar6 | uVar9) & uVar14 | uVar6 & uVar9) +
               ((uVar6 >> 0x1c | uVar5 * 0x10) ^ (uVar6 * 0x40000000 | uVar5 >> 2) ^
               (uVar6 * 0x2000000 | uVar5 >> 7)) + (uint)CARRY4(uVar11,uVar10) + iVar23 +
               (uint)CARRY4(uVar24,uVar19);
      if (local_138 == 0) {
        local_9c = (uint)param_2[7];
        local_98 = *(uint *)((int)param_2 + 0x3c);
      }
      else {
        bVar27 = CARRY4(local_d4,local_9c);
        uVar11 = local_d4 + local_9c;
        uVar18 = (local_ac >> 0x13 | local_a8 << 0xd) ^ (local_ac >> 6 | local_a8 << 0x1a) ^
                 (local_ac << 3 | local_a8 >> 0x1d);
        uVar24 = uVar11 + uVar18;
        uVar19 = (local_94 >> 7 | local_90 << 0x19) ^ (local_94 >> 1 | local_90 << 0x1f) ^
                 (local_94 >> 8 | local_90 << 0x18);
        local_9c = uVar24 + uVar19;
        local_98 = local_d0 + local_98 + (uint)bVar27 +
                   ((local_a8 >> 0x13 | local_ac << 0xd) ^ local_a8 >> 6 ^
                   (local_a8 << 3 | local_ac >> 0x1d)) + (uint)CARRY4(uVar11,uVar18) +
                   (local_90 >> 7 ^ (local_90 >> 1 | local_94 << 0x1f) ^
                   (local_90 >> 8 | local_94 << 0x18)) + (uint)CARRY4(uVar24,uVar19);
      }
      uVar11 = uVar15 + local_13c[0xe];
      uVar20 = (uVar7 ^ uVar4) & uVar12 ^ uVar4;
      uVar24 = uVar11 + uVar20;
      uVar21 = (uVar12 >> 0xe | uVar25 * 0x40000) ^ (uVar12 >> 0x12 | uVar25 * 0x4000) ^
               (uVar12 * 0x800000 | uVar25 >> 9);
      uVar18 = uVar24 + uVar21;
      uVar19 = uVar18 + local_9c;
      iVar23 = uVar26 + local_13c[0xf] + (uint)CARRY4(uVar15,local_13c[0xe]) +
               ((uVar16 ^ uVar17) & uVar25 ^ uVar17) + (uint)CARRY4(uVar11,uVar20) +
               ((uVar25 >> 0xe | uVar12 * 0x40000) ^ (uVar25 >> 0x12 | uVar12 * 0x4000) ^
               (uVar25 * 0x800000 | uVar12 >> 9)) + (uint)CARRY4(uVar24,uVar21) + local_98 +
               (uint)CARRY4(uVar18,local_9c);
      uVar15 = uVar13 + uVar19;
      uVar18 = uVar14 + iVar23 + (uint)CARRY4(uVar13,uVar19);
      uVar13 = (uVar8 | uVar5) & uVar22 | uVar8 & uVar5;
      uVar24 = (uVar8 >> 0x1c | uVar10 * 0x10) ^ (uVar8 * 0x40000000 | uVar10 >> 2) ^
               (uVar8 * 0x2000000 | uVar10 >> 7);
      uVar14 = uVar13 + uVar24;
      uVar11 = uVar14 + uVar19;
      uVar24 = ((uVar10 | uVar6) & uVar9 | uVar10 & uVar6) +
               ((uVar10 >> 0x1c | uVar8 * 0x10) ^ (uVar10 * 0x40000000 | uVar8 >> 2) ^
               (uVar10 * 0x2000000 | uVar8 >> 7)) + (uint)CARRY4(uVar13,uVar24) + iVar23 +
               (uint)CARRY4(uVar14,uVar19);
      if (local_138 == 0) {
        local_94 = (uint)param_2[8];
        local_90 = *(uint *)((int)param_2 + 0x44);
      }
      else {
        bVar27 = CARRY4(local_cc,local_94);
        uVar13 = local_cc + local_94;
        uVar26 = (local_a4 >> 0x13 | local_a0 << 0xd) ^ (local_a4 >> 6 | local_a0 << 0x1a) ^
                 (local_a4 << 3 | local_a0 >> 0x1d);
        uVar14 = uVar13 + uVar26;
        uVar19 = (local_8c >> 7 | local_88 << 0x19) ^ (local_8c >> 1 | local_88 << 0x1f) ^
                 (local_8c >> 8 | local_88 << 0x18);
        local_94 = uVar14 + uVar19;
        local_90 = local_c8 + local_90 + (uint)bVar27 +
                   ((local_a0 >> 0x13 | local_a4 << 0xd) ^ local_a0 >> 6 ^
                   (local_a0 << 3 | local_a4 >> 0x1d)) + (uint)CARRY4(uVar13,uVar26) +
                   (local_88 >> 7 ^ (local_88 >> 1 | local_8c << 0x1f) ^
                   (local_88 >> 8 | local_8c << 0x18)) + (uint)CARRY4(uVar14,uVar19);
      }
      uVar13 = uVar4 + local_13c[0x10];
      uVar20 = (uVar12 ^ uVar7) & uVar15 ^ uVar7;
      uVar14 = uVar13 + uVar20;
      uVar21 = (uVar15 >> 0xe | uVar18 * 0x40000) ^ (uVar15 >> 0x12 | uVar18 * 0x4000) ^
               (uVar15 * 0x800000 | uVar18 >> 9);
      uVar26 = uVar14 + uVar21;
      uVar19 = uVar26 + local_94;
      iVar23 = uVar17 + local_13c[0x11] + (uint)CARRY4(uVar4,local_13c[0x10]) +
               ((uVar25 ^ uVar16) & uVar18 ^ uVar16) + (uint)CARRY4(uVar13,uVar20) +
               ((uVar18 >> 0xe | uVar15 * 0x40000) ^ (uVar18 >> 0x12 | uVar15 * 0x4000) ^
               (uVar18 * 0x800000 | uVar15 >> 9)) + (uint)CARRY4(uVar14,uVar21) + local_90 +
               (uint)CARRY4(uVar26,local_94);
      uVar4 = uVar22 + uVar19;
      uVar17 = uVar9 + iVar23 + (uint)CARRY4(uVar22,uVar19);
      uVar13 = (uVar11 | uVar8) & uVar5 | uVar11 & uVar8;
      uVar9 = (uVar11 >> 0x1c | uVar24 * 0x10) ^ (uVar11 * 0x40000000 | uVar24 >> 2) ^
              (uVar11 * 0x2000000 | uVar24 >> 7);
      uVar14 = uVar13 + uVar9;
      uVar22 = uVar14 + uVar19;
      uVar9 = ((uVar24 | uVar10) & uVar6 | uVar24 & uVar10) +
              ((uVar24 >> 0x1c | uVar11 * 0x10) ^ (uVar24 * 0x40000000 | uVar11 >> 2) ^
              (uVar24 * 0x2000000 | uVar11 >> 7)) + (uint)CARRY4(uVar13,uVar9) + iVar23 +
              (uint)CARRY4(uVar14,uVar19);
      if (local_138 == 0) {
        local_8c = (uint)param_2[9];
        local_88 = *(uint *)((int)param_2 + 0x4c);
      }
      else {
        bVar27 = CARRY4(local_c4,local_8c);
        uVar13 = local_c4 + local_8c;
        uVar26 = (local_9c >> 0x13 | local_98 << 0xd) ^ (local_9c >> 6 | local_98 << 0x1a) ^
                 (local_9c << 3 | local_98 >> 0x1d);
        uVar14 = uVar13 + uVar26;
        uVar19 = (local_84 >> 7 | local_80 << 0x19) ^ (local_84 >> 1 | local_80 << 0x1f) ^
                 (local_84 >> 8 | local_80 << 0x18);
        local_8c = uVar14 + uVar19;
        local_88 = local_c0 + local_88 + (uint)bVar27 +
                   ((local_98 >> 0x13 | local_9c << 0xd) ^ local_98 >> 6 ^
                   (local_98 << 3 | local_9c >> 0x1d)) + (uint)CARRY4(uVar13,uVar26) +
                   (local_80 >> 7 ^ (local_80 >> 1 | local_84 << 0x1f) ^
                   (local_80 >> 8 | local_84 << 0x18)) + (uint)CARRY4(uVar14,uVar19);
      }
      uVar13 = uVar7 + local_13c[0x12];
      uVar20 = (uVar15 ^ uVar12) & uVar4 ^ uVar12;
      uVar14 = uVar13 + uVar20;
      uVar21 = (uVar4 >> 0xe | uVar17 * 0x40000) ^ (uVar4 >> 0x12 | uVar17 * 0x4000) ^
               (uVar4 * 0x800000 | uVar17 >> 9);
      uVar26 = uVar14 + uVar21;
      uVar19 = uVar26 + local_8c;
      iVar23 = uVar16 + local_13c[0x13] + (uint)CARRY4(uVar7,local_13c[0x12]) +
               ((uVar18 ^ uVar25) & uVar17 ^ uVar25) + (uint)CARRY4(uVar13,uVar20) +
               ((uVar17 >> 0xe | uVar4 * 0x40000) ^ (uVar17 >> 0x12 | uVar4 * 0x4000) ^
               (uVar17 * 0x800000 | uVar4 >> 9)) + (uint)CARRY4(uVar14,uVar21) + local_88 +
               (uint)CARRY4(uVar26,local_8c);
      uVar7 = uVar5 + uVar19;
      uVar16 = uVar6 + iVar23 + (uint)CARRY4(uVar5,uVar19);
      uVar13 = (uVar22 | uVar11) & uVar8 | uVar22 & uVar11;
      uVar6 = (uVar22 >> 0x1c | uVar9 * 0x10) ^ (uVar22 * 0x40000000 | uVar9 >> 2) ^
              (uVar22 * 0x2000000 | uVar9 >> 7);
      uVar14 = uVar13 + uVar6;
      uVar5 = uVar14 + uVar19;
      uVar6 = ((uVar9 | uVar24) & uVar10 | uVar9 & uVar24) +
              ((uVar9 >> 0x1c | uVar22 * 0x10) ^ (uVar9 * 0x40000000 | uVar22 >> 2) ^
              (uVar9 * 0x2000000 | uVar22 >> 7)) + (uint)CARRY4(uVar13,uVar6) + iVar23 +
              (uint)CARRY4(uVar14,uVar19);
      if (local_138 == 0) {
        local_84 = (uint)param_2[10];
        local_80 = *(uint *)((int)param_2 + 0x54);
      }
      else {
        bVar27 = CARRY4(local_bc,local_84);
        uVar13 = local_bc + local_84;
        uVar26 = (local_94 >> 0x13 | local_90 << 0xd) ^ (local_94 >> 6 | local_90 << 0x1a) ^
                 (local_94 << 3 | local_90 >> 0x1d);
        uVar14 = uVar13 + uVar26;
        uVar19 = (local_7c >> 7 | local_78 << 0x19) ^ (local_7c >> 1 | local_78 << 0x1f) ^
                 (local_7c >> 8 | local_78 << 0x18);
        local_84 = uVar14 + uVar19;
        local_80 = local_b8 + local_80 + (uint)bVar27 +
                   ((local_90 >> 0x13 | local_94 << 0xd) ^ local_90 >> 6 ^
                   (local_90 << 3 | local_94 >> 0x1d)) + (uint)CARRY4(uVar13,uVar26) +
                   (local_78 >> 7 ^ (local_78 >> 1 | local_7c << 0x1f) ^
                   (local_78 >> 8 | local_7c << 0x18)) + (uint)CARRY4(uVar14,uVar19);
      }
      uVar13 = uVar12 + local_13c[0x14];
      uVar20 = (uVar4 ^ uVar15) & uVar7 ^ uVar15;
      uVar14 = uVar13 + uVar20;
      uVar21 = (uVar7 >> 0xe | uVar16 * 0x40000) ^ (uVar7 >> 0x12 | uVar16 * 0x4000) ^
               (uVar7 * 0x800000 | uVar16 >> 9);
      uVar26 = uVar14 + uVar21;
      uVar19 = uVar26 + local_84;
      iVar23 = uVar25 + local_13c[0x15] + (uint)CARRY4(uVar12,local_13c[0x14]) +
               ((uVar17 ^ uVar18) & uVar16 ^ uVar18) + (uint)CARRY4(uVar13,uVar20) +
               ((uVar16 >> 0xe | uVar7 * 0x40000) ^ (uVar16 >> 0x12 | uVar7 * 0x4000) ^
               (uVar16 * 0x800000 | uVar7 >> 9)) + (uint)CARRY4(uVar14,uVar21) + local_80 +
               (uint)CARRY4(uVar26,local_84);
      uVar12 = uVar8 + uVar19;
      uVar25 = uVar10 + iVar23 + (uint)CARRY4(uVar8,uVar19);
      uVar13 = (uVar5 | uVar22) & uVar11 | uVar5 & uVar22;
      uVar10 = (uVar5 >> 0x1c | uVar6 * 0x10) ^ (uVar5 * 0x40000000 | uVar6 >> 2) ^
               (uVar5 * 0x2000000 | uVar6 >> 7);
      uVar14 = uVar13 + uVar10;
      uVar8 = uVar14 + uVar19;
      uVar10 = ((uVar6 | uVar9) & uVar24 | uVar6 & uVar9) +
               ((uVar6 >> 0x1c | uVar5 * 0x10) ^ (uVar6 * 0x40000000 | uVar5 >> 2) ^
               (uVar6 * 0x2000000 | uVar5 >> 7)) + (uint)CARRY4(uVar13,uVar10) + iVar23 +
               (uint)CARRY4(uVar14,uVar19);
      if (local_138 == 0) {
        local_7c = (uint)param_2[0xb];
        local_78 = *(uint *)((int)param_2 + 0x5c);
      }
      else {
        bVar27 = CARRY4(local_b4,local_7c);
        uVar13 = local_b4 + local_7c;
        uVar26 = (local_8c >> 0x13 | local_88 << 0xd) ^ (local_8c >> 6 | local_88 << 0x1a) ^
                 (local_8c << 3 | local_88 >> 0x1d);
        uVar14 = uVar13 + uVar26;
        uVar19 = (local_74 >> 7 | local_70 << 0x19) ^ (local_74 >> 1 | local_70 << 0x1f) ^
                 (local_74 >> 8 | local_70 << 0x18);
        local_7c = uVar14 + uVar19;
        local_78 = local_b0 + local_78 + (uint)bVar27 +
                   ((local_88 >> 0x13 | local_8c << 0xd) ^ local_88 >> 6 ^
                   (local_88 << 3 | local_8c >> 0x1d)) + (uint)CARRY4(uVar13,uVar26) +
                   (local_70 >> 7 ^ (local_70 >> 1 | local_74 << 0x1f) ^
                   (local_70 >> 8 | local_74 << 0x18)) + (uint)CARRY4(uVar14,uVar19);
      }
      uVar13 = uVar15 + local_13c[0x16];
      uVar20 = (uVar7 ^ uVar4) & uVar12 ^ uVar4;
      uVar14 = uVar13 + uVar20;
      uVar21 = (uVar12 >> 0xe | uVar25 * 0x40000) ^ (uVar12 >> 0x12 | uVar25 * 0x4000) ^
               (uVar12 * 0x800000 | uVar25 >> 9);
      uVar26 = uVar14 + uVar21;
      uVar19 = uVar26 + local_7c;
      iVar23 = uVar18 + local_13c[0x17] + (uint)CARRY4(uVar15,local_13c[0x16]) +
               ((uVar16 ^ uVar17) & uVar25 ^ uVar17) + (uint)CARRY4(uVar13,uVar20) +
               ((uVar25 >> 0xe | uVar12 * 0x40000) ^ (uVar25 >> 0x12 | uVar12 * 0x4000) ^
               (uVar25 * 0x800000 | uVar12 >> 9)) + (uint)CARRY4(uVar14,uVar21) + local_78 +
               (uint)CARRY4(uVar26,local_7c);
      uVar13 = uVar11 + uVar19;
      uVar18 = uVar24 + iVar23 + (uint)CARRY4(uVar11,uVar19);
      uVar14 = (uVar8 | uVar5) & uVar22 | uVar8 & uVar5;
      uVar24 = (uVar8 >> 0x1c | uVar10 * 0x10) ^ (uVar8 * 0x40000000 | uVar10 >> 2) ^
               (uVar8 * 0x2000000 | uVar10 >> 7);
      uVar15 = uVar14 + uVar24;
      uVar11 = uVar15 + uVar19;
      uVar24 = ((uVar10 | uVar6) & uVar9 | uVar10 & uVar6) +
               ((uVar10 >> 0x1c | uVar8 * 0x10) ^ (uVar10 * 0x40000000 | uVar8 >> 2) ^
               (uVar10 * 0x2000000 | uVar8 >> 7)) + (uint)CARRY4(uVar14,uVar24) + iVar23 +
               (uint)CARRY4(uVar15,uVar19);
      if (local_138 == 0) {
        local_74 = (uint)param_2[0xc];
        local_70 = *(uint *)((int)param_2 + 100);
      }
      else {
        bVar27 = CARRY4(local_ac,local_74);
        uVar14 = local_ac + local_74;
        uVar26 = (local_84 >> 0x13 | local_80 << 0xd) ^ (local_84 >> 6 | local_80 << 0x1a) ^
                 (local_84 << 3 | local_80 >> 0x1d);
        uVar15 = uVar14 + uVar26;
        uVar19 = (local_6c >> 7 | local_68 << 0x19) ^ (local_6c >> 1 | local_68 << 0x1f) ^
                 (local_6c >> 8 | local_68 << 0x18);
        local_74 = uVar15 + uVar19;
        local_70 = local_a8 + local_70 + (uint)bVar27 +
                   ((local_80 >> 0x13 | local_84 << 0xd) ^ local_80 >> 6 ^
                   (local_80 << 3 | local_84 >> 0x1d)) + (uint)CARRY4(uVar14,uVar26) +
                   (local_68 >> 7 ^ (local_68 >> 1 | local_6c << 0x1f) ^
                   (local_68 >> 8 | local_6c << 0x18)) + (uint)CARRY4(uVar15,uVar19);
      }
      uVar14 = uVar4 + local_13c[0x18];
      uVar20 = (uVar12 ^ uVar7) & uVar13 ^ uVar7;
      uVar15 = uVar14 + uVar20;
      uVar21 = (uVar13 >> 0xe | uVar18 * 0x40000) ^ (uVar13 >> 0x12 | uVar18 * 0x4000) ^
               (uVar13 * 0x800000 | uVar18 >> 9);
      uVar26 = uVar15 + uVar21;
      uVar19 = uVar26 + local_74;
      iVar23 = uVar17 + local_13c[0x19] + (uint)CARRY4(uVar4,local_13c[0x18]) +
               ((uVar25 ^ uVar16) & uVar18 ^ uVar16) + (uint)CARRY4(uVar14,uVar20) +
               ((uVar18 >> 0xe | uVar13 * 0x40000) ^ (uVar18 >> 0x12 | uVar13 * 0x4000) ^
               (uVar18 * 0x800000 | uVar13 >> 9)) + (uint)CARRY4(uVar15,uVar21) + local_70 +
               (uint)CARRY4(uVar26,local_74);
      local_10c = uVar22 + uVar19;
      local_108 = uVar9 + iVar23 + (uint)CARRY4(uVar22,uVar19);
      uVar9 = (uVar11 | uVar8) & uVar5 | uVar11 & uVar8;
      uVar22 = (uVar11 >> 0x1c | uVar24 * 0x10) ^ (uVar11 * 0x40000000 | uVar24 >> 2) ^
               (uVar11 * 0x2000000 | uVar24 >> 7);
      uVar4 = uVar9 + uVar22;
      local_3c = uVar4 + uVar19;
      local_38 = ((uVar24 | uVar10) & uVar6 | uVar24 & uVar10) +
                 ((uVar24 >> 0x1c | uVar11 * 0x10) ^ (uVar24 * 0x40000000 | uVar11 >> 2) ^
                 (uVar24 * 0x2000000 | uVar11 >> 7)) + (uint)CARRY4(uVar9,uVar22) + iVar23 +
                 (uint)CARRY4(uVar4,uVar19);
      if (local_138 == 0) {
        local_6c = (uint)param_2[0xd];
        local_68 = *(uint *)((int)param_2 + 0x6c);
      }
      else {
        bVar27 = CARRY4(local_a4,local_6c);
        uVar22 = local_a4 + local_6c;
        uVar4 = (local_7c >> 0x13 | local_78 << 0xd) ^ (local_7c >> 6 | local_78 << 0x1a) ^
                (local_7c << 3 | local_78 >> 0x1d);
        uVar9 = uVar22 + uVar4;
        uVar14 = (local_64 >> 7 | local_60 << 0x19) ^ (local_64 >> 1 | local_60 << 0x1f) ^
                 (local_64 >> 8 | local_60 << 0x18);
        local_6c = uVar9 + uVar14;
        local_68 = local_a0 + local_68 + (uint)bVar27 +
                   ((local_78 >> 0x13 | local_7c << 0xd) ^ local_78 >> 6 ^
                   (local_78 << 3 | local_7c >> 0x1d)) + (uint)CARRY4(uVar22,uVar4) +
                   (local_60 >> 7 ^ (local_60 >> 1 | local_64 << 0x1f) ^
                   (local_60 >> 8 | local_64 << 0x18)) + (uint)CARRY4(uVar9,uVar14);
      }
      uVar22 = uVar7 + local_13c[0x1a];
      uVar15 = (uVar13 ^ uVar12) & local_10c ^ uVar12;
      uVar9 = uVar22 + uVar15;
      uVar17 = (local_10c >> 0xe | local_108 * 0x40000) ^ (local_10c >> 0x12 | local_108 * 0x4000) ^
               (local_10c * 0x800000 | local_108 >> 9);
      uVar4 = uVar9 + uVar17;
      uVar14 = uVar4 + local_6c;
      iVar23 = uVar16 + local_13c[0x1b] + (uint)CARRY4(uVar7,local_13c[0x1a]) +
               ((uVar18 ^ uVar25) & local_108 ^ uVar25) + (uint)CARRY4(uVar22,uVar15) +
               ((local_108 >> 0xe | local_10c * 0x40000) ^ (local_108 >> 0x12 | local_10c * 0x4000)
               ^ (local_108 * 0x800000 | local_10c >> 9)) + (uint)CARRY4(uVar9,uVar17) + local_68 +
               (uint)CARRY4(uVar4,local_6c);
      local_ec = uVar5 + uVar14;
      local_e8 = uVar6 + iVar23 + (uint)CARRY4(uVar5,uVar14);
      uVar9 = (local_3c | uVar11) & uVar8 | local_3c & uVar11;
      uVar22 = (local_3c >> 0x1c | local_38 * 0x10) ^ (local_3c * 0x40000000 | local_38 >> 2) ^
               (local_3c * 0x2000000 | local_38 >> 7);
      uVar4 = uVar9 + uVar22;
      local_44 = uVar4 + uVar14;
      local_40 = ((local_38 | uVar24) & uVar10 | local_38 & uVar24) +
                 ((local_38 >> 0x1c | local_3c * 0x10) ^ (local_38 * 0x40000000 | local_3c >> 2) ^
                 (local_38 * 0x2000000 | local_3c >> 7)) + (uint)CARRY4(uVar9,uVar22) + iVar23 +
                 (uint)CARRY4(uVar4,uVar14);
      if (local_138 == 0) {
        local_64 = (uint)param_2[0xe];
        local_60 = *(uint *)((int)param_2 + 0x74);
      }
      else {
        bVar27 = CARRY4(local_9c,local_64);
        uVar22 = local_9c + local_64;
        uVar4 = (local_74 >> 0x13 | local_70 << 0xd) ^ (local_74 >> 6 | local_70 << 0x1a) ^
                (local_74 << 3 | local_70 >> 0x1d);
        uVar9 = uVar22 + uVar4;
        uVar5 = (local_5c >> 7 | local_58 << 0x19) ^ (local_5c >> 1 | local_58 << 0x1f) ^
                (local_5c >> 8 | local_58 << 0x18);
        local_64 = uVar9 + uVar5;
        local_60 = local_98 + local_60 + (uint)bVar27 +
                   ((local_70 >> 0x13 | local_74 << 0xd) ^ local_70 >> 6 ^
                   (local_70 << 3 | local_74 >> 0x1d)) + (uint)CARRY4(uVar22,uVar4) +
                   (local_58 >> 7 ^ (local_58 >> 1 | local_5c << 0x1f) ^
                   (local_58 >> 8 | local_5c << 0x18)) + (uint)CARRY4(uVar9,uVar5);
      }
      uVar22 = uVar12 + local_13c[0x1c];
      uVar6 = (local_10c ^ uVar13) & local_ec ^ uVar13;
      uVar9 = uVar22 + uVar6;
      uVar7 = (local_ec >> 0xe | local_e8 * 0x40000) ^ (local_ec >> 0x12 | local_e8 * 0x4000) ^
              (local_ec * 0x800000 | local_e8 >> 9);
      uVar4 = uVar9 + uVar7;
      uVar5 = uVar4 + local_64;
      iVar23 = uVar25 + local_13c[0x1d] + (uint)CARRY4(uVar12,local_13c[0x1c]) +
               ((local_108 ^ uVar18) & local_e8 ^ uVar18) + (uint)CARRY4(uVar22,uVar6) +
               ((local_e8 >> 0xe | local_ec * 0x40000) ^ (local_e8 >> 0x12 | local_ec * 0x4000) ^
               (local_e8 * 0x800000 | local_ec >> 9)) + (uint)CARRY4(uVar9,uVar7) + local_60 +
               (uint)CARRY4(uVar4,local_64);
      local_2c = uVar8 + uVar5;
      local_28 = uVar10 + iVar23 + (uint)CARRY4(uVar8,uVar5);
      uVar9 = (local_44 | local_3c) & uVar11 | local_44 & local_3c;
      uVar22 = (local_44 >> 0x1c | local_40 * 0x10) ^ (local_44 * 0x40000000 | local_40 >> 2) ^
               (local_44 * 0x2000000 | local_40 >> 7);
      uVar4 = uVar9 + uVar22;
      local_4c = uVar4 + uVar5;
      local_48 = ((local_40 | local_38) & uVar24 | local_40 & local_38) +
                 ((local_40 >> 0x1c | local_44 * 0x10) ^ (local_40 * 0x40000000 | local_44 >> 2) ^
                 (local_40 * 0x2000000 | local_44 >> 7)) + (uint)CARRY4(uVar9,uVar22) + iVar23 +
                 (uint)CARRY4(uVar4,uVar5);
      if (local_138 == 0) {
        local_5c = (uint)param_2[0xf];
        local_58 = *(uint *)((int)param_2 + 0x7c);
      }
      else {
        bVar27 = CARRY4(local_94,local_5c);
        uVar22 = local_94 + local_5c;
        uVar4 = (local_6c >> 0x13 | local_68 << 0xd) ^ (local_6c >> 6 | local_68 << 0x1a) ^
                (local_6c << 3 | local_68 >> 0x1d);
        uVar9 = uVar22 + uVar4;
        uVar5 = (local_d4 >> 7 | local_d0 << 0x19) ^ (local_d4 >> 1 | local_d0 << 0x1f) ^
                (local_d4 >> 8 | local_d0 << 0x18);
        local_5c = uVar9 + uVar5;
        local_58 = local_90 + local_58 + (uint)bVar27 +
                   ((local_68 >> 0x13 | local_6c << 0xd) ^ local_68 >> 6 ^
                   (local_68 << 3 | local_6c >> 0x1d)) + (uint)CARRY4(uVar22,uVar4) +
                   (local_d0 >> 7 ^ (local_d0 >> 1 | local_d4 << 0x1f) ^
                   (local_d0 >> 8 | local_d4 << 0x18)) + (uint)CARRY4(uVar9,uVar5);
      }
      uVar22 = uVar13 + local_13c[0x1e];
      uVar6 = (local_ec ^ local_10c) & local_2c ^ local_10c;
      uVar9 = uVar22 + uVar6;
      uVar7 = (local_2c >> 0xe | local_28 * 0x40000) ^ (local_2c >> 0x12 | local_28 * 0x4000) ^
              (local_2c * 0x800000 | local_28 >> 9);
      uVar4 = uVar9 + uVar7;
      uVar5 = uVar4 + local_5c;
      iVar23 = uVar18 + local_13c[0x1f] + (uint)CARRY4(uVar13,local_13c[0x1e]) +
               ((local_e8 ^ local_108) & local_28 ^ local_108) + (uint)CARRY4(uVar22,uVar6) +
               ((local_28 >> 0xe | local_2c * 0x40000) ^ (local_28 >> 0x12 | local_2c * 0x4000) ^
               (local_28 * 0x800000 | local_2c >> 9)) + (uint)CARRY4(uVar9,uVar7) + local_58 +
               (uint)CARRY4(uVar4,local_5c);
      local_34 = uVar11 + uVar5;
      local_30 = uVar24 + iVar23 + (uint)CARRY4(uVar11,uVar5);
      uVar22 = (local_4c | local_44) & local_3c | local_4c & local_44;
      uVar9 = (local_4c >> 0x1c | local_48 * 0x10) ^ (local_4c * 0x40000000 | local_48 >> 2) ^
              (local_4c * 0x2000000 | local_48 >> 7);
      uVar4 = uVar22 + uVar9;
      local_54 = uVar4 + uVar5;
      local_50 = ((local_48 | local_40) & local_38 | local_48 & local_40) +
                 ((local_48 >> 0x1c | local_4c * 0x10) ^ (local_48 * 0x40000000 | local_4c >> 2) ^
                 (local_48 * 0x2000000 | local_4c >> 7)) + (uint)CARRY4(uVar22,uVar9) + iVar23 +
                 (uint)CARRY4(uVar4,uVar5);
      local_138 = local_138 + 0x10;
      puVar2 = local_13c + 0x20;
      if (local_138 == 0x50) {
        uVar3 = *param_1;
        *(uint *)param_1 = (int)*param_1 + local_54;
        *(int *)((int)param_1 + 4) =
             *(int *)((int)param_1 + 4) + local_50 + (uint)CARRY4((uint)uVar3,local_54);
        puVar1 = param_1 + 1;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_4c;
        *(int *)((int)param_1 + 0xc) =
             *(int *)((int)param_1 + 0xc) + local_48 + (uint)CARRY4((uint)uVar3,local_4c);
        puVar1 = param_1 + 2;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_44;
        *(int *)((int)param_1 + 0x14) =
             *(int *)((int)param_1 + 0x14) + local_40 + (uint)CARRY4((uint)uVar3,local_44);
        puVar1 = param_1 + 3;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_3c;
        *(int *)((int)param_1 + 0x1c) =
             *(int *)((int)param_1 + 0x1c) + local_38 + (uint)CARRY4((uint)uVar3,local_3c);
        puVar1 = param_1 + 4;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_34;
        *(int *)((int)param_1 + 0x24) =
             *(int *)((int)param_1 + 0x24) + local_30 + (uint)CARRY4((uint)uVar3,local_34);
        puVar1 = param_1 + 5;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_2c;
        *(int *)((int)param_1 + 0x2c) =
             *(int *)((int)param_1 + 0x2c) + local_28 + (uint)CARRY4((uint)uVar3,local_2c);
        puVar1 = param_1 + 6;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_ec;
        *(int *)((int)param_1 + 0x34) =
             *(int *)((int)param_1 + 0x34) + local_e8 + (uint)CARRY4((uint)uVar3,local_ec);
        puVar1 = param_1 + 7;
        uVar3 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + local_10c;
        *(int *)((int)param_1 + 0x3c) =
             *(int *)((int)param_1 + 0x3c) + local_108 + (uint)CARRY4((uint)uVar3,local_10c);
        return;
      }
      uVar22 = *puVar2;
      uVar9 = local_13c[0x21];
      local_13c = puVar2;
      if (local_138 == 0) break;
      bVar27 = CARRY4(local_8c,local_d4);
      uVar4 = local_8c + local_d4;
      uVar6 = (local_64 >> 0x13 | local_60 << 0xd) ^ (local_64 >> 6 | local_60 << 0x1a) ^
              (local_64 << 3 | local_60 >> 0x1d);
      uVar5 = uVar4 + uVar6;
      uVar7 = (local_cc >> 7 | local_c8 << 0x19) ^ (local_cc >> 1 | local_c8 << 0x1f) ^
              (local_cc >> 8 | local_c8 << 0x18);
      local_d4 = uVar5 + uVar7;
      local_d0 = local_88 + local_d0 + (uint)bVar27 +
                 ((local_60 >> 0x13 | local_64 << 0xd) ^ local_60 >> 6 ^
                 (local_60 << 3 | local_64 >> 0x1d)) + (uint)CARRY4(uVar4,uVar6) +
                 (local_c8 >> 7 ^ (local_c8 >> 1 | local_cc << 0x1f) ^
                 (local_c8 >> 8 | local_cc << 0x18)) + (uint)CARRY4(uVar5,uVar7);
    }
  } while( true );
}
```
