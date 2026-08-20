# Divide

`_ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j`

`TaoCrypt::Divide(unsigned int*, unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875e580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875e580  _ZN8TaoCrypt6DivideEPjS0_S0_PKjjS2_j
#           TaoCrypt::Divide(unsigned int*, unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
# range [0x0875e580, 0x0875ebde]
0875e580 +0x000:  push   %ebp
0875e581 +0x001:  mov    %esp,%ebp
0875e583 +0x003:  push   %edi
0875e584 +0x004:  push   %esi
0875e585 +0x005:  push   %ebx
0875e586 +0x006:  sub    $0xbc,%esp
0875e58c +0x00c:  mov    0x18(%ebp),%eax
0875e58f +0x00f:  mov    0x10(%ebp),%ecx
0875e592 +0x012:  mov    0x10(%ebp),%edi
0875e595 +0x015:  mov    0x1c(%ebp),%edx
0875e598 +0x018:  add    $0x2,%eax
0875e59b +0x01b:  mov    0x14(%ebp),%esi
0875e59e +0x01e:  lea    (%ecx,%eax,4),%ecx
0875e5a1 +0x021:  mov    %eax,-0x40(%ebp)
0875e5a4 +0x024:  mov    0x20(%ebp),%eax
0875e5a7 +0x027:  add    -0x40(%ebp),%eax
0875e5aa +0x02a:  call   08722df8 <__i686.get_pc_thunk.bx>
0875e5af +0x02f:  add    $0xc0e5e9,%ebx
0875e5b5 +0x035:  mov    %ecx,-0x54(%ebp)
0875e5b8 +0x038:  lea    (%edi,%eax,4),%eax
0875e5bb +0x03b:  mov    %eax,-0x5c(%ebp)
0875e5be +0x03e:  mov    0x20(%ebp),%eax
0875e5c1 +0x041:  sub    $0x1,%eax
0875e5c4 +0x044:  mov    %eax,-0x94(%ebp)
0875e5ca +0x04a:  mov    (%edx,%eax,4),%eax
0875e5cd +0x04d:  mov    -0x94(%ebp),%edi
0875e5d3 +0x053:  test   %eax,%eax
0875e5d5 +0x055:  lea    (%ecx,%edi,4),%edi
0875e5d8 +0x058:  sete   %al
0875e5db +0x05b:  movl   $0x0,(%edi)
0875e5e1 +0x061:  movzbl %al,%eax
0875e5e4 +0x064:  movl   $0x0,(%ecx)
0875e5ea +0x06a:  lea    0x0(,%eax,4),%ecx
0875e5f1 +0x071:  mov    %edi,-0x48(%ebp)
0875e5f4 +0x074:  mov    0x20(%ebp),%edi
0875e5f7 +0x077:  mov    %ecx,-0x4c(%ebp)
0875e5fa +0x07a:  mov    -0x54(%ebp),%ecx
0875e5fd +0x07d:  add    -0x4c(%ebp),%ecx
0875e600 +0x080:  sub    %eax,%edi
0875e602 +0x082:  je     0875e620 <+0xa0>
0875e604 +0x084:  xor    %eax,%eax
0875e606 +0x086:  mov    %esi,-0x44(%ebp)
0875e609 +0x089:  lea    0x0(%esi,%eiz,1),%esi
0875e610 +0x090:  mov    (%edx,%eax,4),%esi
0875e613 +0x093:  mov    %esi,(%ecx,%eax,4)
0875e616 +0x096:  add    $0x1,%eax
0875e619 +0x099:  cmp    %eax,%edi
0875e61b +0x09b:  ja     0875e610 <+0x90>
0875e61d +0x09d:  mov    -0x44(%ebp),%esi
0875e620 +0x0a0:  mov    -0x48(%ebp),%edi
0875e623 +0x0a3:  mov    (%edi),%eax
0875e625 +0x0a5:  mov    %eax,(%esp)
0875e628 +0x0a8:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
0875e62d +0x0ad:  mov    %eax,-0x74(%ebp)
0875e630 +0x0b0:  mov    $0x20,%eax
0875e635 +0x0b5:  sub    -0x74(%ebp),%eax
0875e638 +0x0b8:  mov    %eax,-0x70(%ebp)
0875e63b +0x0bb:  je     0875e67f <+0xff>
0875e63d +0x0bd:  mov    0x20(%ebp),%edi
0875e640 +0x0c0:  test   %edi,%edi
0875e642 +0x0c2:  je     0875e67f <+0xff>
0875e644 +0x0c4:  mov    %esi,-0x44(%ebp)
0875e647 +0x0c7:  mov    -0x54(%ebp),%esi
0875e64a +0x0ca:  xor    %edi,%edi
0875e64c +0x0cc:  xor    %eax,%eax
0875e64e +0x0ce:  mov    %edi,-0x58(%ebp)
0875e651 +0x0d1:  lea    0x0(%esi,%eiz,1),%esi
0875e658 +0x0d8:  mov    (%esi,%eax,4),%edx
0875e65b +0x0db:  movzbl -0x70(%ebp),%ecx
0875e65f +0x0df:  mov    %edx,%edi
0875e661 +0x0e1:  shl    %cl,%edi
0875e663 +0x0e3:  mov    -0x58(%ebp),%ecx
0875e666 +0x0e6:  or     %ecx,%edi
0875e668 +0x0e8:  movzbl -0x74(%ebp),%ecx
0875e66c +0x0ec:  mov    %edi,(%esi,%eax,4)
0875e66f +0x0ef:  add    $0x1,%eax
0875e672 +0x0f2:  shr    %cl,%edx
0875e674 +0x0f4:  cmp    %eax,0x20(%ebp)
0875e677 +0x0f7:  mov    %edx,-0x58(%ebp)
0875e67a +0x0fa:  ja     0875e658 <+0xd8>
0875e67c +0x0fc:  mov    -0x44(%ebp),%esi
0875e67f +0x0ff:  mov    0x18(%ebp),%edi
0875e682 +0x102:  mov    0x10(%ebp),%eax
0875e685 +0x105:  mov    0x18(%ebp),%edx
0875e688 +0x108:  lea    (%eax,%edi,4),%edi
0875e68b +0x10b:  mov    %edi,-0x44(%ebp)
0875e68e +0x10e:  mov    -0x44(%ebp),%ecx
0875e691 +0x111:  lea    0x4(%eax,%edx,4),%edi
0875e695 +0x115:  movl   $0x0,(%edi)
0875e69b +0x11b:  movl   $0x0,(%ecx)
0875e6a1 +0x121:  movl   $0x0,(%eax)
0875e6a7 +0x127:  add    -0x4c(%ebp),%eax
0875e6aa +0x12a:  test   %edx,%edx
0875e6ac +0x12c:  mov    %eax,-0x98(%ebp)
0875e6b2 +0x132:  je     0875e6d0 <+0x150>
0875e6b4 +0x134:  mov    %eax,%ecx
0875e6b6 +0x136:  xor    %eax,%eax
0875e6b8 +0x138:  mov    %edi,-0x4c(%ebp)
0875e6bb +0x13b:  mov    %edx,%edi
0875e6bd +0x13d:  lea    0x0(%esi),%esi
0875e6c0 +0x140:  mov    (%esi,%eax,4),%edx
0875e6c3 +0x143:  mov    %edx,(%ecx,%eax,4)
0875e6c6 +0x146:  add    $0x1,%eax
0875e6c9 +0x149:  cmp    %eax,%edi
0875e6cb +0x14b:  ja     0875e6c0 <+0x140>
0875e6cd +0x14d:  mov    -0x4c(%ebp),%edi
0875e6d0 +0x150:  mov    -0x70(%ebp),%ecx
0875e6d3 +0x153:  test   %ecx,%ecx
0875e6d5 +0x155:  je     0875e717 <+0x197>
0875e6d7 +0x157:  mov    -0x40(%ebp),%edx
0875e6da +0x15a:  test   %edx,%edx
0875e6dc +0x15c:  je     0875e717 <+0x197>
0875e6de +0x15e:  xor    %esi,%esi
0875e6e0 +0x160:  xor    %eax,%eax
0875e6e2 +0x162:  mov    %esi,-0x58(%ebp)
0875e6e5 +0x165:  mov    0x10(%ebp),%esi
0875e6e8 +0x168:  mov    %edi,-0x4c(%ebp)
0875e6eb +0x16b:  nop
0875e6ec +0x16c:  lea    0x0(%esi,%eiz,1),%esi
0875e6f0 +0x170:  mov    (%esi,%eax,4),%edx
0875e6f3 +0x173:  movzbl -0x70(%ebp),%ecx
0875e6f7 +0x177:  mov    %edx,%edi
0875e6f9 +0x179:  shl    %cl,%edi
0875e6fb +0x17b:  mov    -0x58(%ebp),%ecx
0875e6fe +0x17e:  or     %ecx,%edi
0875e700 +0x180:  movzbl -0x74(%ebp),%ecx
0875e704 +0x184:  mov    %edi,(%esi,%eax,4)
0875e707 +0x187:  add    $0x1,%eax
0875e70a +0x18a:  shr    %cl,%edx
0875e70c +0x18c:  cmp    %eax,-0x40(%ebp)
0875e70f +0x18f:  mov    %edx,-0x58(%ebp)
0875e712 +0x192:  ja     0875e6f0 <+0x170>
0875e714 +0x194:  mov    -0x4c(%ebp),%edi
0875e717 +0x197:  mov    (%edi),%eax
0875e719 +0x199:  test   %eax,%eax
0875e71b +0x19b:  jne    0875e729 <+0x1a9>
0875e71d +0x19d:  mov    -0x44(%ebp),%esi
0875e720 +0x1a0:  cmpl   $0x1,(%esi)
0875e723 +0x1a3:  jbe    0875eb37 <+0x5b7>
0875e729 +0x1a9:  mov    -0x40(%ebp),%edx
0875e72c +0x1ac:  mov    %edx,0x18(%ebp)
0875e72f +0x1af:  mov    0x20(%ebp),%ecx
0875e732 +0x1b2:  mov    -0x54(%ebp),%esi
0875e735 +0x1b5:  mov    -0x48(%ebp),%edi
0875e738 +0x1b8:  mov    -0x8(%esi,%ecx,4),%eax
0875e73c +0x1bc:  mov    (%edi),%edi
0875e73e +0x1be:  add    $0x1,%eax
0875e741 +0x1c1:  mov    %eax,-0x78(%ebp)
0875e744 +0x1c4:  sete   %al
0875e747 +0x1c7:  movzbl %al,%eax
0875e74a +0x1ca:  add    %edi,%eax
0875e74c +0x1cc:  mov    %eax,-0x6c(%ebp)
0875e74f +0x1cf:  mov    0x18(%ebp),%eax
0875e752 +0x1d2:  sub    $0x2,%eax
0875e755 +0x1d5:  cmp    %eax,%ecx
0875e757 +0x1d7:  mov    %eax,-0x64(%ebp)
0875e75a +0x1da:  ja     0875e988 <+0x408>
0875e760 +0x1e0:  mov    0x18(%ebp),%eax
0875e763 +0x1e3:  mov    %ecx,%edx
0875e765 +0x1e5:  sub    0x20(%ebp),%eax
0875e768 +0x1e8:  add    $0x2,%edx
0875e76b +0x1eb:  shl    $0x2,%ecx
0875e76e +0x1ee:  mov    -0x5c(%ebp),%esi
0875e771 +0x1f1:  mov    %ecx,-0x7c(%ebp)
0875e774 +0x1f4:  mov    0x20(%ebp),%ecx
0875e777 +0x1f7:  mov    %edx,-0x80(%ebp)
0875e77a +0x1fa:  lea    -0x8(,%eax,4),%edx
0875e781 +0x201:  mov    -0x7c(%ebp),%eax
0875e784 +0x204:  mov    0x10(%ebp),%edi
0875e787 +0x207:  movl   $0x0,-0x68(%ebp)
0875e78e +0x20e:  lea    0x4(%esi,%ecx,4),%ecx
0875e792 +0x212:  mov    0x18(%ebp),%esi
0875e795 +0x215:  lea    (%edx,%eax,1),%eax
0875e798 +0x218:  add    %edi,%eax
0875e79a +0x21a:  mov    %eax,-0x48(%ebp)
0875e79d +0x21d:  mov    0x20(%ebp),%eax
0875e7a0 +0x220:  lea    -0xc(%edi,%esi,4),%esi
0875e7a4 +0x224:  add    %edx,%edi
0875e7a6 +0x226:  mov    %edi,-0x4c(%ebp)
0875e7a9 +0x229:  mov    0xc(%ebp),%edi
0875e7ac +0x22c:  mov    %esi,-0x58(%ebp)
0875e7af +0x22f:  mov    -0x7c(%ebp),%esi
0875e7b2 +0x232:  not    %eax
0875e7b4 +0x234:  add    0x18(%ebp),%eax
0875e7b7 +0x237:  add    %edi,%edx
0875e7b9 +0x239:  mov    %ecx,-0x84(%ebp)
0875e7bf +0x23f:  lea    -0x34(%ebp),%ecx
0875e7c2 +0x242:  lea    (%edi,%eax,4),%eax
0875e7c5 +0x245:  mov    -0x54(%ebp),%edi
0875e7c8 +0x248:  mov    %eax,-0x50(%ebp)
0875e7cb +0x24b:  mov    -0x6c(%ebp),%eax
0875e7ce +0x24e:  or     -0x78(%ebp),%eax
0875e7d1 +0x251:  mov    %edx,-0x44(%ebp)
0875e7d4 +0x254:  lea    -0x38(%ebp),%edx
0875e7d7 +0x257:  lea    -0x4(%edi,%esi,1),%esi
0875e7db +0x25b:  mov    %eax,-0x88(%ebp)
0875e7e1 +0x261:  mov    %edx,-0x8c(%ebp)
0875e7e7 +0x267:  mov    %ecx,-0x90(%ebp)
0875e7ed +0x26d:  mov    %esi,-0x60(%ebp)
0875e7f0 +0x270:  mov    -0x6c(%ebp),%eax
0875e7f3 +0x273:  mov    0x18(%ebp),%edx
0875e7f6 +0x276:  mov    -0x78(%ebp),%edi
0875e7f9 +0x279:  mov    %eax,-0x1c(%ebp)
0875e7fc +0x27c:  mov    0x10(%ebp),%eax
0875e7ff +0x27f:  add    -0x68(%ebp),%eax
0875e802 +0x282:  mov    %edx,%ecx
0875e804 +0x284:  mov    %edi,-0x20(%ebp)
0875e807 +0x287:  mov    %ecx,%edi
0875e809 +0x289:  mov    -0x4(%eax,%edx,4),%esi
0875e80d +0x28d:  mov    -0xc(%eax,%ecx,4),%ecx
0875e811 +0x291:  mov    -0x8(%eax,%edx,4),%edx
0875e815 +0x295:  mov    -0x10(%eax,%edi,4),%eax
0875e819 +0x299:  mov    -0x88(%ebp),%edi
0875e81f +0x29f:  test   %edi,%edi
0875e821 +0x2a1:  jne    0875ead5 <+0x555>
0875e827 +0x2a7:  mov    -0x44(%ebp),%ecx
0875e82a +0x2aa:  test   %esi,%esi
0875e82c +0x2ac:  mov    -0x50(%ebp),%edi
0875e82f +0x2af:  mov    %edx,(%ecx)
0875e831 +0x2b1:  mov    %esi,(%edi)
0875e833 +0x2b3:  je     0875ea48 <+0x4c8>
0875e839 +0x2b9:  mov    -0x84(%ebp),%eax
0875e83f +0x2bf:  mov    -0x5c(%ebp),%ecx
0875e842 +0x2c2:  mov    -0x7c(%ebp),%edx
0875e845 +0x2c5:  movl   $0x0,(%eax)
0875e84b +0x2cb:  movl   $0x0,(%ecx,%edx,1)
0875e852 +0x2d2:  mov    0x20(%ebp),%esi
0875e855 +0x2d5:  test   %esi,%esi
0875e857 +0x2d7:  je     0875e8fc <+0x37c>
0875e85d +0x2dd:  mov    -0x54(%ebp),%edi
0875e860 +0x2e0:  xor    %esi,%esi
0875e862 +0x2e2:  mov    %esi,%edx
0875e864 +0x2e4:  mov    %ecx,%esi
0875e866 +0x2e6:  mov    %edx,%eax
0875e868 +0x2e8:  mov    -0x44(%ebp),%edx
0875e86b +0x2eb:  mov    %edi,0x8(%esp)
0875e86f +0x2ef:  add    $0x10,%edi
0875e872 +0x2f2:  mov    %esi,(%esp)
0875e875 +0x2f5:  add    $0x10,%esi
0875e878 +0x2f8:  mov    %eax,-0x9c(%ebp)
0875e87e +0x2fe:  mov    %edx,0x4(%esp)
0875e882 +0x302:  call   08759530 <_ZN8TaoCrypt8Portable9Multiply2EPjPKjS3_>  ; TaoCrypt::Portable::Multiply2(unsigned int*, unsigned int const*, unsigned int const*)
0875e887 +0x307:  mov    -0x9c(%ebp),%eax
0875e88d +0x30d:  add    $0x4,%eax
0875e890 +0x310:  cmp    %eax,0x20(%ebp)
0875e893 +0x313:  ja     0875e868 <+0x2e8>
0875e895 +0x315:  cmpl   $0x2,0x20(%ebp)
0875e899 +0x319:  jbe    0875e8fc <+0x37c>
0875e89b +0x31b:  mov    -0x5c(%ebp),%esi
0875e89e +0x31e:  mov    $0x6,%edx
0875e8a3 +0x323:  mov    -0x54(%ebp),%edi
0875e8a6 +0x326:  add    $0x8,%esi
0875e8a9 +0x329:  add    $0x8,%edi
0875e8ac +0x32c:  jmp    0875e8b2 <+0x332>
0875e8ae +0x32e:  xchg   %ax,%ax
0875e8b0 +0x330:  mov    %eax,%edx
0875e8b2 +0x332:  mov    -0x44(%ebp),%ecx
0875e8b5 +0x335:  mov    %edx,-0x9c(%ebp)
0875e8bb +0x33b:  mov    %edi,0x8(%esp)
0875e8bf +0x33f:  mov    %esi,(%esp)
0875e8c2 +0x342:  mov    %ecx,0x4(%esp)
0875e8c6 +0x346:  call   087596b0 <_ZN8TaoCrypt8Portable12Multiply2AddEPjPKjS3_>  ; TaoCrypt::Portable::Multiply2Add(unsigned int*, unsigned int const*, unsigned int const*)
0875e8cb +0x34b:  mov    -0x9c(%ebp),%edx
0875e8d1 +0x351:  test   %eax,%eax
0875e8d3 +0x353:  je     0875e8ee <+0x36e>
0875e8d5 +0x355:  mov    0x10(%esi),%eax
0875e8d8 +0x358:  mov    0x14(%esi),%ecx
0875e8db +0x35b:  add    $0x1,%eax
0875e8de +0x35e:  test   %eax,%eax
0875e8e0 +0x360:  mov    %eax,0x10(%esi)
0875e8e3 +0x363:  sete   %al
0875e8e6 +0x366:  movzbl %al,%eax
0875e8e9 +0x369:  add    %ecx,%eax
0875e8eb +0x36b:  mov    %eax,0x14(%esi)
0875e8ee +0x36e:  add    $0x10,%esi
0875e8f1 +0x371:  add    $0x10,%edi
0875e8f4 +0x374:  cmp    %edx,0x20(%ebp)
0875e8f7 +0x377:  lea    0x4(%edx),%eax
0875e8fa +0x37a:  ja     0875e8b0 <+0x330>
0875e8fc +0x37c:  mov    -0x4c(%ebp),%ecx
0875e8ff +0x37f:  mov    -0x80(%ebp),%eax
0875e902 +0x382:  mov    -0x5c(%ebp),%edx
0875e905 +0x385:  mov    %ecx,0x4(%esp)
0875e909 +0x389:  mov    %eax,0xc(%esp)
0875e90d +0x38d:  mov    %edx,0x8(%esp)
0875e911 +0x391:  mov    %ecx,(%esp)
0875e914 +0x394:  call   *0x124c90(%ebx)
0875e91a +0x39a:  mov    -0x48(%ebp),%esi
0875e91d +0x39d:  lea    0x0(%esi),%esi
0875e920 +0x3a0:  mov    (%esi),%esi
0875e922 +0x3a2:  test   %esi,%esi
0875e924 +0x3a4:  mov    %esi,-0x40(%ebp)
0875e927 +0x3a7:  jne    0875e9f8 <+0x478>
0875e92d +0x3ad:  mov    -0x60(%ebp),%ecx
0875e930 +0x3b0:  mov    -0x58(%ebp),%edx
0875e933 +0x3b3:  mov    0x20(%ebp),%eax
0875e936 +0x3b6:  xchg   %ax,%ax
0875e938 +0x3b8:  test   %eax,%eax
0875e93a +0x3ba:  je     0875e9f8 <+0x478>
0875e940 +0x3c0:  mov    (%edx),%edi
0875e942 +0x3c2:  mov    (%ecx),%esi
0875e944 +0x3c4:  cmp    %esi,%edi
0875e946 +0x3c6:  ja     0875e9f8 <+0x478>
0875e94c +0x3cc:  sub    $0x1,%eax
0875e94f +0x3cf:  sub    $0x4,%edx
0875e952 +0x3d2:  sub    $0x4,%ecx
0875e955 +0x3d5:  cmp    %esi,%edi
0875e957 +0x3d7:  jae    0875e938 <+0x3b8>
0875e959 +0x3d9:  subl   $0x2,-0x64(%ebp)
0875e95d +0x3dd:  mov    -0x64(%ebp),%esi
0875e960 +0x3e0:  subl   $0x8,-0x68(%ebp)
0875e964 +0x3e4:  subl   $0x8,-0x58(%ebp)
0875e968 +0x3e8:  subl   $0x8,-0x48(%ebp)
0875e96c +0x3ec:  subl   $0x8,-0x4c(%ebp)
0875e970 +0x3f0:  subl   $0x8,-0x50(%ebp)
0875e974 +0x3f4:  subl   $0x8,-0x44(%ebp)
0875e978 +0x3f8:  cmp    %esi,0x20(%ebp)
0875e97b +0x3fb:  jbe    0875e7f0 <+0x270>
0875e981 +0x401:  mov    0x20(%ebp),%edi
0875e984 +0x404:  test   %edi,%edi
0875e986 +0x406:  je     0875e9a5 <+0x425>
0875e988 +0x408:  mov    -0x98(%ebp),%ecx
0875e98e +0x40e:  xor    %eax,%eax
0875e990 +0x410:  mov    0x8(%ebp),%esi
0875e993 +0x413:  mov    0x20(%ebp),%edi
0875e996 +0x416:  xchg   %ax,%ax
0875e998 +0x418:  mov    (%ecx,%eax,4),%edx
0875e99b +0x41b:  mov    %edx,(%esi,%eax,4)
0875e99e +0x41e:  add    $0x1,%eax
0875e9a1 +0x421:  cmp    %eax,%edi
0875e9a3 +0x423:  ja     0875e998 <+0x418>
0875e9a5 +0x425:  mov    -0x70(%ebp),%esi
0875e9a8 +0x428:  test   %esi,%esi
0875e9aa +0x42a:  je     0875e9e7 <+0x467>
0875e9ac +0x42c:  mov    -0x94(%ebp),%edi
0875e9b2 +0x432:  test   %edi,%edi
0875e9b4 +0x434:  js     0875e9e7 <+0x467>
0875e9b6 +0x436:  mov    0x20(%ebp),%esi
0875e9b9 +0x439:  mov    0x8(%ebp),%edx
0875e9bc +0x43c:  mov    %edi,-0x44(%ebp)
0875e9bf +0x43f:  lea    -0x4(%edx,%esi,4),%eax
0875e9c3 +0x443:  xor    %esi,%esi
0875e9c5 +0x445:  lea    0x0(%esi),%esi
0875e9c8 +0x448:  mov    (%eax),%edx
0875e9ca +0x44a:  movzbl -0x70(%ebp),%ecx
0875e9ce +0x44e:  mov    %edx,%edi
0875e9d0 +0x450:  shr    %cl,%edi
0875e9d2 +0x452:  movzbl -0x74(%ebp),%ecx
0875e9d6 +0x456:  or     %esi,%edi
0875e9d8 +0x458:  mov    %edx,%esi
0875e9da +0x45a:  mov    %edi,(%eax)
0875e9dc +0x45c:  sub    $0x4,%eax
0875e9df +0x45f:  shl    %cl,%esi
0875e9e1 +0x461:  subl   $0x1,-0x44(%ebp)
0875e9e5 +0x465:  jns    0875e9c8 <+0x448>
0875e9e7 +0x467:  add    $0xbc,%esp
0875e9ed +0x46d:  pop    %ebx
0875e9ee +0x46e:  pop    %esi
0875e9ef +0x46f:  pop    %edi
0875e9f0 +0x470:  pop    %ebp
0875e9f1 +0x471:  ret
0875e9f2 +0x472:  lea    0x0(%esi),%esi
0875e9f8 +0x478:  mov    -0x4c(%ebp),%edx
0875e9fb +0x47b:  mov    0x20(%ebp),%edi
0875e9fe +0x47e:  mov    -0x54(%ebp),%eax
0875ea01 +0x481:  mov    %edx,0x4(%esp)
0875ea05 +0x485:  mov    %edi,0xc(%esp)
0875ea09 +0x489:  mov    %edx,(%esp)
0875ea0c +0x48c:  mov    %eax,0x8(%esp)
0875ea10 +0x490:  call   *0x124c90(%ebx)
0875ea16 +0x496:  mov    -0x40(%ebp),%ecx
0875ea19 +0x499:  mov    -0x48(%ebp),%esi
0875ea1c +0x49c:  mov    -0x50(%ebp),%edi
0875ea1f +0x49f:  sub    %eax,%ecx
0875ea21 +0x4a1:  mov    %ecx,(%esi)
0875ea23 +0x4a3:  mov    -0x44(%ebp),%ecx
0875ea26 +0x4a6:  mov    (%edi),%edx
0875ea28 +0x4a8:  mov    (%ecx),%eax
0875ea2a +0x4aa:  add    $0x1,%eax
0875ea2d +0x4ad:  test   %eax,%eax
0875ea2f +0x4af:  mov    %eax,(%ecx)
0875ea31 +0x4b1:  sete   %al
0875ea34 +0x4b4:  movzbl %al,%eax
0875ea37 +0x4b7:  lea    (%eax,%edx,1),%edx
0875ea3a +0x4ba:  mov    %edx,(%edi)
0875ea3c +0x4bc:  jmp    0875e920 <+0x3a0>
0875ea41 +0x4c1:  lea    0x0(%esi,%eiz,1),%esi
0875ea48 +0x4c8:  mov    (%ecx),%edi
0875ea4a +0x4ca:  xor    %edx,%edx
0875ea4c +0x4cc:  xor    %eax,%eax
0875ea4e +0x4ce:  mov    0x20(%ebp),%ecx
0875ea51 +0x4d1:  test   %ecx,%ecx
0875ea53 +0x4d3:  je     0875eb32 <+0x5b2>
0875ea59 +0x4d9:  mov    %eax,-0xb4(%ebp)
0875ea5f +0x4df:  mov    %eax,%ecx
0875ea61 +0x4e1:  lea    0x0(%esi,%eiz,1),%esi
0875ea68 +0x4e8:  mov    -0x54(%ebp),%esi
0875ea6b +0x4eb:  mov    %edi,%eax
0875ea6d +0x4ed:  mov    %edx,-0xb0(%ebp)
0875ea73 +0x4f3:  movl   $0x0,-0xac(%ebp)
0875ea7d +0x4fd:  mull   (%esi,%ecx,4)
0875ea80 +0x500:  add    %eax,-0xb0(%ebp)
0875ea86 +0x506:  adc    %edx,-0xac(%ebp)
0875ea8c +0x50c:  mov    -0xac(%ebp),%edx
0875ea92 +0x512:  mov    -0xb0(%ebp),%esi
0875ea98 +0x518:  mov    -0xb0(%ebp),%eax
0875ea9e +0x51e:  mov    %edx,-0x24(%ebp)
0875eaa1 +0x521:  mov    -0x5c(%ebp),%edx
0875eaa4 +0x524:  mov    %eax,-0x28(%ebp)
0875eaa7 +0x527:  mov    %esi,(%edx,%ecx,4)
0875eaaa +0x52a:  add    $0x1,%ecx
0875eaad +0x52d:  mov    -0x24(%ebp),%edx
0875eab0 +0x530:  cmp    %ecx,0x20(%ebp)
0875eab3 +0x533:  mov    %ecx,-0xb4(%ebp)
0875eab9 +0x539:  ja     0875ea68 <+0x4e8>
0875eabb +0x53b:  mov    -0x5c(%ebp),%esi
0875eabe +0x53e:  mov    -0x7c(%ebp),%ecx
0875eac1 +0x541:  mov    -0x84(%ebp),%edi
0875eac7 +0x547:  mov    %edx,(%esi,%ecx,1)
0875eaca +0x54a:  movl   $0x0,(%edi)
0875ead0 +0x550:  jmp    0875e8fc <+0x37c>
0875ead5 +0x555:  mov    %eax,-0x38(%ebp)
0875ead8 +0x558:  mov    -0x6c(%ebp),%eax
0875eadb +0x55b:  mov    %ecx,-0x34(%ebp)
0875eade +0x55e:  mov    -0x90(%ebp),%ecx
0875eae4 +0x564:  mov    %edx,-0x30(%ebp)
0875eae7 +0x567:  mov    -0x78(%ebp),%edx
0875eaea +0x56a:  mov    %esi,-0x2c(%ebp)
0875eaed +0x56d:  movl   $0x0,0xc(%esp)
0875eaf5 +0x575:  mov    %ecx,(%esp)
0875eaf8 +0x578:  mov    %edx,0x4(%esp)
0875eafc +0x57c:  mov    %eax,0x8(%esp)
0875eb00 +0x580:  call   08763a00 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x1e0>  ; TaoCrypt::Integer::IsSquare() const+0x1e0
0875eb05 +0x585:  mov    -0x8c(%ebp),%edx
0875eb0b +0x58b:  mov    -0x6c(%ebp),%edi
0875eb0e +0x58e:  movl   $0x0,0xc(%esp)
0875eb16 +0x596:  mov    %edx,(%esp)
0875eb19 +0x599:  mov    %edi,0x8(%esp)
0875eb1d +0x59d:  mov    %eax,%esi
0875eb1f +0x59f:  mov    -0x78(%ebp),%eax
0875eb22 +0x5a2:  mov    %eax,0x4(%esp)
0875eb26 +0x5a6:  call   08763a00 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x1e0>  ; TaoCrypt::Integer::IsSquare() const+0x1e0
0875eb2b +0x5ab:  mov    %eax,%edx
0875eb2d +0x5ad:  jmp    0875e827 <+0x2a7>
0875eb32 +0x5b2:  mov    0x20(%ebp),%edx
0875eb35 +0x5b5:  jmp    0875eabb <+0x53b>
0875eb37 +0x5b7:  mov    0x18(%ebp),%eax
0875eb3a +0x5ba:  sub    0x20(%ebp),%eax
0875eb3d +0x5bd:  mov    0xc(%ebp),%edi
0875eb40 +0x5c0:  mov    0xc(%ebp),%ecx
0875eb43 +0x5c3:  lea    0x0(,%eax,4),%edx
0875eb4a +0x5ca:  add    %edx,%edi
0875eb4c +0x5cc:  movl   $0x0,(%edi)
0875eb52 +0x5d2:  movl   $0x0,0x4(%ecx,%eax,4)
0875eb5a +0x5da:  mov    0x20(%ebp),%esi
0875eb5d +0x5dd:  add    0x10(%ebp),%edx
0875eb60 +0x5e0:  mov    %edi,-0x50(%ebp)
0875eb63 +0x5e3:  mov    -0x44(%ebp),%edi
0875eb66 +0x5e6:  lea    -0x4(,%esi,4),%eax
0875eb6d +0x5ed:  mov    %edx,-0x4c(%ebp)
0875eb70 +0x5f0:  add    %eax,%edx
0875eb72 +0x5f2:  add    -0x54(%ebp),%eax
0875eb75 +0x5f5:  mov    %edx,-0x58(%ebp)
0875eb78 +0x5f8:  mov    %eax,-0x64(%ebp)
0875eb7b +0x5fb:  mov    (%edi),%edi
0875eb7d +0x5fd:  test   %edi,%edi
0875eb7f +0x5ff:  mov    %edi,-0x40(%ebp)
0875eb82 +0x602:  je     0875ebb4 <+0x634>
0875eb84 +0x604:  mov    -0x4c(%ebp),%ecx
0875eb87 +0x607:  mov    0x20(%ebp),%eax
0875eb8a +0x60a:  mov    -0x54(%ebp),%edx
0875eb8d +0x60d:  mov    %ecx,0x4(%esp)
0875eb91 +0x611:  mov    %eax,0xc(%esp)
0875eb95 +0x615:  mov    %edx,0x8(%esp)
0875eb99 +0x619:  mov    %ecx,(%esp)
0875eb9c +0x61c:  call   *0x124c90(%ebx)
0875eba2 +0x622:  mov    -0x40(%ebp),%esi
0875eba5 +0x625:  mov    -0x44(%ebp),%edi
0875eba8 +0x628:  sub    %eax,%esi
0875ebaa +0x62a:  mov    -0x50(%ebp),%eax
0875ebad +0x62d:  mov    %esi,(%edi)
0875ebaf +0x62f:  addl   $0x1,(%eax)
0875ebb2 +0x632:  jmp    0875eb7b <+0x5fb>
0875ebb4 +0x634:  mov    -0x58(%ebp),%ecx
0875ebb7 +0x637:  mov    -0x64(%ebp),%edx
0875ebba +0x63a:  mov    0x20(%ebp),%eax
0875ebbd +0x63d:  lea    0x0(%esi),%esi
0875ebc0 +0x640:  test   %eax,%eax
0875ebc2 +0x642:  je     0875eb84 <+0x604>
0875ebc4 +0x644:  mov    (%ecx),%edi
0875ebc6 +0x646:  mov    (%edx),%esi
0875ebc8 +0x648:  cmp    %esi,%edi
0875ebca +0x64a:  ja     0875eb84 <+0x604>
0875ebcc +0x64c:  sub    $0x1,%eax
0875ebcf +0x64f:  sub    $0x4,%ecx
0875ebd2 +0x652:  sub    $0x4,%edx
0875ebd5 +0x655:  cmp    %esi,%edi
0875ebd7 +0x657:  jae    0875ebc0 <+0x640>
0875ebd9 +0x659:  jmp    0875e72f <+0x1af>
0875ebde +0x65e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::Divide @ 0x875e580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Divide(unsigned int*, unsigned int*, unsigned int*, unsigned int const*, unsigned int,
   unsigned int const*, unsigned int) */

void TaoCrypt::Divide(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,
                     uint *param_6,uint param_7)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  byte local_78;
  byte local_74;
  int local_6c;
  uint local_68;
  uint *local_5c;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined8 local_2c;
  uint local_24;
  uint local_20;
  
  uVar4 = param_5 + 2;
  puVar11 = param_3 + uVar4;
  puVar1 = param_3 + param_7 + uVar4;
  iVar5 = param_7 - 1;
  uVar6 = param_6[iVar5];
  puVar13 = puVar11 + iVar5;
  *puVar13 = 0;
  uVar6 = (uint)(uVar6 == 0);
  *puVar11 = 0;
  if (param_7 != uVar6) {
    uVar7 = 0;
    do {
      puVar11[uVar6 + uVar7] = param_6[uVar7];
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_7 - uVar6);
  }
  iVar8 = BitPrecision(*puVar13);
  iVar9 = 0x20 - iVar8;
  local_74 = (byte)iVar9;
  local_78 = (byte)iVar8;
  if ((iVar9 != 0) && (param_7 != 0)) {
    uVar7 = 0;
    local_5c = (uint *)0x0;
    do {
      uVar10 = puVar11[uVar7];
      puVar11[uVar7] = uVar10 << (local_74 & 0x1f) | (uint)local_5c;
      uVar7 = uVar7 + 1;
      local_5c = (uint *)(uVar10 >> (local_78 & 0x1f));
    } while (uVar7 < param_7);
  }
  puVar16 = param_3 + param_5;
  param_3[param_5 + 1] = 0;
  *puVar16 = 0;
  *param_3 = 0;
  if (param_5 != 0) {
    uVar7 = 0;
    do {
      param_3[uVar6 + uVar7] = param_4[uVar7];
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_5);
  }
  if ((iVar9 != 0) && (uVar4 != 0)) {
    uVar7 = 0;
    local_5c = (uint *)0x0;
    do {
      uVar10 = param_3[uVar7];
      param_3[uVar7] = uVar10 << (local_74 & 0x1f) | (uint)local_5c;
      uVar7 = uVar7 + 1;
      local_5c = (uint *)(uVar10 >> (local_78 & 0x1f));
    } while (uVar7 < uVar4);
  }
  if ((param_3[param_5 + 1] != 0) || (1 < *puVar16)) {
LAB_0875e72f:
    param_5 = uVar4;
    uVar4 = puVar11[param_7 - 2] + 1;
    uVar7 = (uint)(uVar4 == 0) + *puVar13;
    local_68 = param_5 - 2;
    if (local_68 < param_7) {
LAB_0875e988:
      uVar4 = 0;
      do {
        param_1[uVar4] = param_3[uVar6 + uVar4];
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_7);
LAB_0875e9a5:
      if ((iVar9 != 0) && (-1 < iVar5)) {
        puVar11 = param_1 + (param_7 - 1);
        uVar6 = 0;
        local_48 = (uint *)iVar5;
        do {
          uVar4 = *puVar11;
          *puVar11 = uVar4 >> (local_74 & 0x1f) | uVar6;
          puVar11 = puVar11 + -1;
          uVar6 = uVar4 << (local_78 & 0x1f);
          local_48 = (uint *)((int)local_48 + -1);
        } while (-1 < (int)local_48);
      }
      return;
    }
    iVar8 = param_5 - param_7;
    local_6c = 0;
    local_4c = param_3 + param_7 + iVar8 + -2;
    local_5c = param_3 + (param_5 - 3);
    local_50 = param_3 + iVar8 + -2;
    local_48 = param_2 + iVar8 + -2;
    local_54 = param_2 + ~param_7 + param_5;
LAB_0875e7f0:
    uVar10 = *(uint *)((int)param_3 + param_5 * 4 + local_6c + -4);
    uVar12 = *(uint *)((int)param_3 + param_5 * 4 + local_6c + -8);
    local_24 = uVar4;
    local_20 = uVar7;
    if (uVar7 != 0 || uVar4 != 0) {
      local_3c = *(uint *)((int)param_3 + param_5 * 4 + local_6c + -0x10);
      local_38 = *(uint *)((int)param_3 + param_5 * 4 + local_6c + -0xc);
      local_34 = uVar12;
      local_30 = uVar10;
      uVar10 = DivideThreeWordsByTwo<unsigned_int,TaoCrypt::DWord>
                         (&local_38,uVar4,uVar7,(DWord *)0x0);
      uVar12 = DivideThreeWordsByTwo<unsigned_int,TaoCrypt::DWord>
                         (&local_3c,uVar4,uVar7,(DWord *)0x0);
    }
    *local_48 = uVar12;
    *local_54 = uVar10;
    if (uVar10 == 0) {
      uVar12 = *local_48;
      uVar10 = 0;
      if (param_7 == 0) {
        uVar10 = 0;
      }
      else {
        uVar14 = 0;
        do {
          local_2c = (ulonglong)uVar12 * (ulonglong)puVar11[uVar14] + (ulonglong)uVar10;
          uVar10 = (uint)((ulonglong)local_2c >> 0x20);
          puVar1[uVar14] = (uint)local_2c;
          uVar14 = uVar14 + 1;
        } while (uVar14 < param_7);
      }
      puVar1[param_7] = uVar10;
      puVar1[param_7 + 1] = 0;
    }
    else {
      puVar1[param_7 + 1] = 0;
      puVar1[param_7] = 0;
      if (param_7 != 0) {
        uVar10 = 0;
        puVar13 = puVar1;
        puVar16 = puVar11;
        do {
          Portable::Multiply2(puVar13,local_48,puVar16);
          uVar10 = uVar10 + 4;
          puVar13 = puVar13 + 4;
          puVar16 = puVar16 + 4;
        } while (uVar10 < param_7);
        if (2 < param_7) {
          puVar13 = puVar1 + 2;
          puVar16 = puVar11 + 2;
          uVar10 = 6;
          do {
            iVar8 = Portable::Multiply2Add(puVar13,local_48,puVar16);
            if (iVar8 != 0) {
              uVar12 = puVar13[4];
              puVar13[4] = uVar12 + 1;
              puVar13[5] = (uint)(uVar12 + 1 == 0) + puVar13[5];
            }
            puVar13 = puVar13 + 4;
            puVar16 = puVar16 + 4;
            bVar3 = uVar10 < param_7;
            uVar10 = uVar10 + 4;
          } while (bVar3);
        }
      }
    }
    (*s_pSub)(local_50,local_50,puVar1,param_7 + 2);
    do {
      uVar10 = *local_4c;
      uVar12 = param_7;
      puVar13 = puVar11 + (param_7 - 1);
      puVar16 = local_5c;
      if (uVar10 == 0) {
        while (uVar12 != 0) {
          uVar14 = *puVar16;
          uVar2 = *puVar13;
          if (uVar2 < uVar14) break;
          uVar12 = uVar12 - 1;
          puVar13 = puVar13 + -1;
          puVar16 = puVar16 + -1;
          if (uVar14 < uVar2) {
            local_68 = local_68 - 2;
            local_6c = local_6c + -8;
            local_5c = local_5c + -2;
            local_4c = local_4c + -2;
            local_50 = local_50 + -2;
            local_54 = local_54 + -2;
            local_48 = local_48 + -2;
            if (param_7 <= local_68) goto LAB_0875e7f0;
            if (param_7 == 0) goto LAB_0875e9a5;
            goto LAB_0875e988;
          }
        }
      }
      iVar8 = (*s_pSub)(local_50,local_50,puVar11,param_7);
      *local_4c = uVar10 - iVar8;
      uVar10 = *local_54;
      uVar12 = *local_48;
      *local_48 = uVar12 + 1;
      *local_54 = (uVar12 + 1 == 0) + uVar10;
    } while( true );
  }
  iVar8 = param_5 - param_7;
  puVar19 = param_2 + iVar8;
  *puVar19 = 0;
  param_2[iVar8 + 1] = 0;
  puVar17 = param_3 + iVar8;
  do {
    uVar7 = *puVar16;
    uVar10 = param_7;
    puVar15 = puVar17 + (param_7 - 1);
    puVar18 = puVar11 + (param_7 - 1);
    if (uVar7 == 0) {
      while (uVar10 != 0) {
        uVar12 = *puVar15;
        uVar14 = *puVar18;
        if (uVar14 < uVar12) break;
        uVar10 = uVar10 - 1;
        puVar15 = puVar15 + -1;
        puVar18 = puVar18 + -1;
        uVar4 = param_5;
        if (uVar12 < uVar14) goto LAB_0875e72f;
      }
    }
    iVar8 = (*s_pSub)(puVar17,puVar17,puVar11,param_7);
    *puVar16 = uVar7 - iVar8;
    *puVar19 = *puVar19 + 1;
  } while( true );
}
```
