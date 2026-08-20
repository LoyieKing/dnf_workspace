# _reset

`_GLOBAL__I__ZN10expert_job16CCharacExpertJob6_resetEv`

`global constructors keyed to expert_job::CCharacExpertJob::_reset()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to expert_job::CCharacExpertJob` | `0x0832b69a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832b69a  _GLOBAL__I__ZN10expert_job16CCharacExpertJob6_resetEv
#           global constructors keyed to expert_job::CCharacExpertJob::_reset()
# range [0x0832b69a, 0x0832bd6f]
0832b69a +0x000:  push   %ebp
0832b69b +0x001:  mov    %esp,%ebp
0832b69d +0x003:  sub    $0x18,%esp
0832b6a0 +0x006:  movl   $0xffff,0x4(%esp)
0832b6a8 +0x00e:  movl   $0x1,(%esp)
0832b6af +0x015:  call   0832b65a <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0832b6b4 +0x01a:  leave
0832b6b5 +0x01b:  ret
0832b6b6 +0x01c:  push   %ebp
0832b6b7 +0x01d:  mov    %esp,%ebp
0832b6b9 +0x01f:  sub    $0x28,%esp
0832b6bc +0x022:  mov    0x8(%ebp),%eax
0832b6bf +0x025:  lea    0x200(%eax),%ecx
0832b6c5 +0x02b:  lea    -0x10(%ebp),%eax
0832b6c8 +0x02e:  lea    0xc(%ebp),%edx
0832b6cb +0x031:  mov    %edx,0x8(%esp)
0832b6cf +0x035:  mov    %ecx,0x4(%esp)
0832b6d3 +0x039:  mov    %eax,(%esp)
0832b6d6 +0x03c:  call   0832b796 <+0xfc>
0832b6db +0x041:  sub    $0x4,%esp
0832b6de +0x044:  mov    0x8(%ebp),%eax
0832b6e1 +0x047:  lea    0x200(%eax),%edx
0832b6e7 +0x04d:  lea    -0xc(%ebp),%eax
0832b6ea +0x050:  mov    %edx,0x4(%esp)
0832b6ee +0x054:  mov    %eax,(%esp)
0832b6f1 +0x057:  call   0832b7c2 <+0x128>
0832b6f6 +0x05c:  sub    $0x4,%esp
0832b6f9 +0x05f:  lea    -0xc(%ebp),%eax
0832b6fc +0x062:  mov    %eax,0x4(%esp)
0832b700 +0x066:  lea    -0x10(%ebp),%eax
0832b703 +0x069:  mov    %eax,(%esp)
0832b706 +0x06c:  call   0832b7e8 <+0x14e>
0832b70b +0x071:  test   %al,%al
0832b70d +0x073:  je     0832b71f <+0x85>
0832b70f +0x075:  lea    -0x10(%ebp),%eax
0832b712 +0x078:  mov    %eax,(%esp)
0832b715 +0x07b:  call   0832b7fc <+0x162>
0832b71a +0x080:  add    $0x4,%eax
0832b71d +0x083:  jmp    0832b724 <+0x8a>
0832b71f +0x085:  mov    $0x0,%eax
0832b724 +0x08a:  leave
0832b725 +0x08b:  ret
0832b726 +0x08c:  push   %ebp
0832b727 +0x08d:  mov    %esp,%ebp
0832b729 +0x08f:  sub    $0x28,%esp
0832b72c +0x092:  mov    0x8(%ebp),%eax
0832b72f +0x095:  lea    0x218(%eax),%ecx
0832b735 +0x09b:  lea    -0x10(%ebp),%eax
0832b738 +0x09e:  lea    0xc(%ebp),%edx
0832b73b +0x0a1:  mov    %edx,0x8(%esp)
0832b73f +0x0a5:  mov    %ecx,0x4(%esp)
0832b743 +0x0a9:  mov    %eax,(%esp)
0832b746 +0x0ac:  call   0832b80a <+0x170>
0832b74b +0x0b1:  sub    $0x4,%esp
0832b74e +0x0b4:  mov    0x8(%ebp),%eax
0832b751 +0x0b7:  lea    0x218(%eax),%edx
0832b757 +0x0bd:  lea    -0xc(%ebp),%eax
0832b75a +0x0c0:  mov    %edx,0x4(%esp)
0832b75e +0x0c4:  mov    %eax,(%esp)
0832b761 +0x0c7:  call   0832b836 <+0x19c>
0832b766 +0x0cc:  sub    $0x4,%esp
0832b769 +0x0cf:  lea    -0xc(%ebp),%eax
0832b76c +0x0d2:  mov    %eax,0x4(%esp)
0832b770 +0x0d6:  lea    -0x10(%ebp),%eax
0832b773 +0x0d9:  mov    %eax,(%esp)
0832b776 +0x0dc:  call   0832b85c <+0x1c2>
0832b77b +0x0e1:  test   %al,%al
0832b77d +0x0e3:  je     0832b78f <+0xf5>
0832b77f +0x0e5:  lea    -0x10(%ebp),%eax
0832b782 +0x0e8:  mov    %eax,(%esp)
0832b785 +0x0eb:  call   0832b870 <+0x1d6>
0832b78a +0x0f0:  mov    0x4(%eax),%eax
0832b78d +0x0f3:  jmp    0832b794 <+0xfa>
0832b78f +0x0f5:  mov    $0xffffffff,%eax
0832b794 +0x0fa:  leave
0832b795 +0x0fb:  ret
0832b796 +0x0fc:  push   %ebp
0832b797 +0x0fd:  mov    %esp,%ebp
0832b799 +0x0ff:  push   %ebx
0832b79a +0x100:  sub    $0x14,%esp
0832b79d +0x103:  mov    0x8(%ebp),%ebx
0832b7a0 +0x106:  mov    0xc(%ebp),%eax
0832b7a3 +0x109:  mov    0x10(%ebp),%edx
0832b7a6 +0x10c:  mov    %edx,0x8(%esp)
0832b7aa +0x110:  mov    %eax,0x4(%esp)
0832b7ae +0x114:  mov    %ebx,(%esp)
0832b7b1 +0x117:  call   0832b8ac <+0x212>
0832b7b6 +0x11c:  sub    $0x4,%esp
0832b7b9 +0x11f:  mov    %ebx,%eax
0832b7bb +0x121:  mov    -0x4(%ebp),%ebx
0832b7be +0x124:  leave
0832b7bf +0x125:  ret    $0x4
0832b7c2 +0x128:  push   %ebp
0832b7c3 +0x129:  mov    %esp,%ebp
0832b7c5 +0x12b:  push   %ebx
0832b7c6 +0x12c:  sub    $0x14,%esp
0832b7c9 +0x12f:  mov    0x8(%ebp),%ebx
0832b7cc +0x132:  mov    0xc(%ebp),%eax
0832b7cf +0x135:  mov    %eax,0x4(%esp)
0832b7d3 +0x139:  mov    %ebx,(%esp)
0832b7d6 +0x13c:  call   0832b96a <+0x2d0>
0832b7db +0x141:  sub    $0x4,%esp
0832b7de +0x144:  mov    %ebx,%eax
0832b7e0 +0x146:  mov    -0x4(%ebp),%ebx
0832b7e3 +0x149:  leave
0832b7e4 +0x14a:  ret    $0x4
0832b7e7 +0x14d:  nop
0832b7e8 +0x14e:  push   %ebp
0832b7e9 +0x14f:  mov    %esp,%ebp
0832b7eb +0x151:  mov    0x8(%ebp),%eax
0832b7ee +0x154:  mov    (%eax),%edx
0832b7f0 +0x156:  mov    0xc(%ebp),%eax
0832b7f3 +0x159:  mov    (%eax),%eax
0832b7f5 +0x15b:  cmp    %eax,%edx
0832b7f7 +0x15d:  setne  %al
0832b7fa +0x160:  pop    %ebp
0832b7fb +0x161:  ret
0832b7fc +0x162:  push   %ebp
0832b7fd +0x163:  mov    %esp,%ebp
0832b7ff +0x165:  mov    0x8(%ebp),%eax
0832b802 +0x168:  mov    (%eax),%eax
0832b804 +0x16a:  add    $0x10,%eax
0832b807 +0x16d:  pop    %ebp
0832b808 +0x16e:  ret
0832b809 +0x16f:  nop
0832b80a +0x170:  push   %ebp
0832b80b +0x171:  mov    %esp,%ebp
0832b80d +0x173:  push   %ebx
0832b80e +0x174:  sub    $0x14,%esp
0832b811 +0x177:  mov    0x8(%ebp),%ebx
0832b814 +0x17a:  mov    0xc(%ebp),%eax
0832b817 +0x17d:  mov    0x10(%ebp),%edx
0832b81a +0x180:  mov    %edx,0x8(%esp)
0832b81e +0x184:  mov    %eax,0x4(%esp)
0832b822 +0x188:  mov    %ebx,(%esp)
0832b825 +0x18b:  call   0832b990 <+0x2f6>
0832b82a +0x190:  sub    $0x4,%esp
0832b82d +0x193:  mov    %ebx,%eax
0832b82f +0x195:  mov    -0x4(%ebp),%ebx
0832b832 +0x198:  leave
0832b833 +0x199:  ret    $0x4
0832b836 +0x19c:  push   %ebp
0832b837 +0x19d:  mov    %esp,%ebp
0832b839 +0x19f:  push   %ebx
0832b83a +0x1a0:  sub    $0x14,%esp
0832b83d +0x1a3:  mov    0x8(%ebp),%ebx
0832b840 +0x1a6:  mov    0xc(%ebp),%eax
0832b843 +0x1a9:  mov    %eax,0x4(%esp)
0832b847 +0x1ad:  mov    %ebx,(%esp)
0832b84a +0x1b0:  call   0832ba4e <+0x3b4>
0832b84f +0x1b5:  sub    $0x4,%esp
0832b852 +0x1b8:  mov    %ebx,%eax
0832b854 +0x1ba:  mov    -0x4(%ebp),%ebx
0832b857 +0x1bd:  leave
0832b858 +0x1be:  ret    $0x4
0832b85b +0x1c1:  nop
0832b85c +0x1c2:  push   %ebp
0832b85d +0x1c3:  mov    %esp,%ebp
0832b85f +0x1c5:  mov    0x8(%ebp),%eax
0832b862 +0x1c8:  mov    (%eax),%edx
0832b864 +0x1ca:  mov    0xc(%ebp),%eax
0832b867 +0x1cd:  mov    (%eax),%eax
0832b869 +0x1cf:  cmp    %eax,%edx
0832b86b +0x1d1:  setne  %al
0832b86e +0x1d4:  pop    %ebp
0832b86f +0x1d5:  ret
0832b870 +0x1d6:  push   %ebp
0832b871 +0x1d7:  mov    %esp,%ebp
0832b873 +0x1d9:  mov    0x8(%ebp),%eax
0832b876 +0x1dc:  mov    (%eax),%eax
0832b878 +0x1de:  add    $0x10,%eax
0832b87b +0x1e1:  pop    %ebp
0832b87c +0x1e2:  ret
0832b87d +0x1e3:  nop
0832b87e +0x1e4:  push   %ebp
0832b87f +0x1e5:  mov    %esp,%ebp
0832b881 +0x1e7:  sub    $0x18,%esp
0832b884 +0x1ea:  mov    0x8(%ebp),%eax
0832b887 +0x1ed:  mov    (%eax),%eax
0832b889 +0x1ef:  mov    %eax,(%esp)
0832b88c +0x1f2:  call   0832ba74 <+0x3da>
0832b891 +0x1f7:  leave
0832b892 +0x1f8:  ret
0832b893 +0x1f9:  nop
0832b894 +0x1fa:  push   %ebp
0832b895 +0x1fb:  mov    %esp,%ebp
0832b897 +0x1fd:  mov    0x8(%ebp),%eax
0832b89a +0x200:  mov    0x8(%eax),%eax
0832b89d +0x203:  pop    %ebp
0832b89e +0x204:  ret
0832b89f +0x205:  nop
0832b8a0 +0x206:  push   %ebp
0832b8a1 +0x207:  mov    %esp,%ebp
0832b8a3 +0x209:  mov    0x8(%ebp),%eax
0832b8a6 +0x20c:  mov    0x8(%eax),%eax
0832b8a9 +0x20f:  pop    %ebp
0832b8aa +0x210:  ret
0832b8ab +0x211:  nop
0832b8ac +0x212:  push   %ebp
0832b8ad +0x213:  mov    %esp,%ebp
0832b8af +0x215:  push   %esi
0832b8b0 +0x216:  push   %ebx
0832b8b1 +0x217:  sub    $0x30,%esp
0832b8b4 +0x21a:  mov    0x8(%ebp),%ebx
0832b8b7 +0x21d:  mov    0xc(%ebp),%eax
0832b8ba +0x220:  mov    %eax,(%esp)
0832b8bd +0x223:  call   0832bade <+0x444>
0832b8c2 +0x228:  mov    %eax,%esi
0832b8c4 +0x22a:  mov    0xc(%ebp),%eax
0832b8c7 +0x22d:  mov    %eax,(%esp)
0832b8ca +0x230:  call   0832b894 <+0x1fa>
0832b8cf +0x235:  lea    -0x10(%ebp),%edx
0832b8d2 +0x238:  mov    0x10(%ebp),%ecx
0832b8d5 +0x23b:  mov    %ecx,0x10(%esp)
0832b8d9 +0x23f:  mov    %esi,0xc(%esp)
0832b8dd +0x243:  mov    %eax,0x8(%esp)
0832b8e1 +0x247:  mov    0xc(%ebp),%eax
0832b8e4 +0x24a:  mov    %eax,0x4(%esp)
0832b8e8 +0x24e:  mov    %edx,(%esp)
0832b8eb +0x251:  call   0832bb22 <+0x488>
0832b8f0 +0x256:  sub    $0x4,%esp
0832b8f3 +0x259:  lea    -0xc(%ebp),%eax
0832b8f6 +0x25c:  mov    0xc(%ebp),%edx
0832b8f9 +0x25f:  mov    %edx,0x4(%esp)
0832b8fd +0x263:  mov    %eax,(%esp)
0832b900 +0x266:  call   0832b96a <+0x2d0>
0832b905 +0x26b:  sub    $0x4,%esp
0832b908 +0x26e:  lea    -0xc(%ebp),%eax
0832b90b +0x271:  mov    %eax,0x4(%esp)
0832b90f +0x275:  lea    -0x10(%ebp),%eax
0832b912 +0x278:  mov    %eax,(%esp)
0832b915 +0x27b:  call   0832bbc0 <+0x526>
0832b91a +0x280:  test   %al,%al
0832b91c +0x282:  jne    0832b943 <+0x2a9>
0832b91e +0x284:  mov    -0x10(%ebp),%eax
0832b921 +0x287:  mov    %eax,(%esp)
0832b924 +0x28a:  call   0832bb9e <+0x504>
0832b929 +0x28f:  mov    0xc(%ebp),%edx
0832b92c +0x292:  mov    %eax,0x8(%esp)
0832b930 +0x296:  mov    0x10(%ebp),%eax
0832b933 +0x299:  mov    %eax,0x4(%esp)
0832b937 +0x29d:  mov    %edx,(%esp)
0832b93a +0x2a0:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0832b93f +0x2a5:  test   %al,%al
0832b941 +0x2a7:  je     0832b957 <+0x2bd>
0832b943 +0x2a9:  mov    0xc(%ebp),%eax
0832b946 +0x2ac:  mov    %eax,0x4(%esp)
0832b94a +0x2b0:  mov    %ebx,(%esp)
0832b94d +0x2b3:  call   0832b96a <+0x2d0>
0832b952 +0x2b8:  sub    $0x4,%esp
0832b955 +0x2bb:  jmp    0832b95c <+0x2c2>
0832b957 +0x2bd:  mov    -0x10(%ebp),%eax
0832b95a +0x2c0:  mov    %eax,(%ebx)
0832b95c +0x2c2:  mov    %ebx,%eax
0832b95e +0x2c4:  lea    -0x8(%ebp),%esp
0832b961 +0x2c7:  add    $0x0,%esp
0832b964 +0x2ca:  pop    %ebx
0832b965 +0x2cb:  pop    %esi
0832b966 +0x2cc:  pop    %ebp
0832b967 +0x2cd:  ret    $0x4
0832b96a +0x2d0:  push   %ebp
0832b96b +0x2d1:  mov    %esp,%ebp
0832b96d +0x2d3:  push   %ebx
0832b96e +0x2d4:  sub    $0x14,%esp
0832b971 +0x2d7:  mov    0x8(%ebp),%ebx
0832b974 +0x2da:  mov    0xc(%ebp),%eax
0832b977 +0x2dd:  add    $0x4,%eax
0832b97a +0x2e0:  mov    %eax,0x4(%esp)
0832b97e +0x2e4:  mov    %ebx,(%esp)
0832b981 +0x2e7:  call   0832bbd4 <+0x53a>
0832b986 +0x2ec:  mov    %ebx,%eax
0832b988 +0x2ee:  add    $0x14,%esp
0832b98b +0x2f1:  pop    %ebx
0832b98c +0x2f2:  pop    %ebp
0832b98d +0x2f3:  ret    $0x4
0832b990 +0x2f6:  push   %ebp
0832b991 +0x2f7:  mov    %esp,%ebp
0832b993 +0x2f9:  push   %esi
0832b994 +0x2fa:  push   %ebx
0832b995 +0x2fb:  sub    $0x30,%esp
0832b998 +0x2fe:  mov    0x8(%ebp),%ebx
0832b99b +0x301:  mov    0xc(%ebp),%eax
0832b99e +0x304:  mov    %eax,(%esp)
0832b9a1 +0x307:  call   0832baea <+0x450>
0832b9a6 +0x30c:  mov    %eax,%esi
0832b9a8 +0x30e:  mov    0xc(%ebp),%eax
0832b9ab +0x311:  mov    %eax,(%esp)
0832b9ae +0x314:  call   0832b8a0 <+0x206>
0832b9b3 +0x319:  lea    -0x10(%ebp),%edx
0832b9b6 +0x31c:  mov    0x10(%ebp),%ecx
0832b9b9 +0x31f:  mov    %ecx,0x10(%esp)
0832b9bd +0x323:  mov    %esi,0xc(%esp)
0832b9c1 +0x327:  mov    %eax,0x8(%esp)
0832b9c5 +0x32b:  mov    0xc(%ebp),%eax
0832b9c8 +0x32e:  mov    %eax,0x4(%esp)
0832b9cc +0x332:  mov    %edx,(%esp)
0832b9cf +0x335:  call   0832bbe2 <+0x548>
0832b9d4 +0x33a:  sub    $0x4,%esp
0832b9d7 +0x33d:  lea    -0xc(%ebp),%eax
0832b9da +0x340:  mov    0xc(%ebp),%edx
0832b9dd +0x343:  mov    %edx,0x4(%esp)
0832b9e1 +0x347:  mov    %eax,(%esp)
0832b9e4 +0x34a:  call   0832ba4e <+0x3b4>
0832b9e9 +0x34f:  sub    $0x4,%esp
0832b9ec +0x352:  lea    -0xc(%ebp),%eax
0832b9ef +0x355:  mov    %eax,0x4(%esp)
0832b9f3 +0x359:  lea    -0x10(%ebp),%eax
0832b9f6 +0x35c:  mov    %eax,(%esp)
0832b9f9 +0x35f:  call   0832bc80 <+0x5e6>
0832b9fe +0x364:  test   %al,%al
0832ba00 +0x366:  jne    0832ba27 <+0x38d>
0832ba02 +0x368:  mov    -0x10(%ebp),%eax
0832ba05 +0x36b:  mov    %eax,(%esp)
0832ba08 +0x36e:  call   0832bc5e <+0x5c4>
0832ba0d +0x373:  mov    0xc(%ebp),%edx
0832ba10 +0x376:  mov    %eax,0x8(%esp)
0832ba14 +0x37a:  mov    0x10(%ebp),%eax
0832ba17 +0x37d:  mov    %eax,0x4(%esp)
0832ba1b +0x381:  mov    %edx,(%esp)
0832ba1e +0x384:  call   080f5b18 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0xac9>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0xac9
0832ba23 +0x389:  test   %al,%al
0832ba25 +0x38b:  je     0832ba3b <+0x3a1>
0832ba27 +0x38d:  mov    0xc(%ebp),%eax
0832ba2a +0x390:  mov    %eax,0x4(%esp)
0832ba2e +0x394:  mov    %ebx,(%esp)
0832ba31 +0x397:  call   0832ba4e <+0x3b4>
0832ba36 +0x39c:  sub    $0x4,%esp
0832ba39 +0x39f:  jmp    0832ba40 <+0x3a6>
0832ba3b +0x3a1:  mov    -0x10(%ebp),%eax
0832ba3e +0x3a4:  mov    %eax,(%ebx)
0832ba40 +0x3a6:  mov    %ebx,%eax
0832ba42 +0x3a8:  lea    -0x8(%ebp),%esp
0832ba45 +0x3ab:  add    $0x0,%esp
0832ba48 +0x3ae:  pop    %ebx
0832ba49 +0x3af:  pop    %esi
0832ba4a +0x3b0:  pop    %ebp
0832ba4b +0x3b1:  ret    $0x4
0832ba4e +0x3b4:  push   %ebp
0832ba4f +0x3b5:  mov    %esp,%ebp
0832ba51 +0x3b7:  push   %ebx
0832ba52 +0x3b8:  sub    $0x14,%esp
0832ba55 +0x3bb:  mov    0x8(%ebp),%ebx
0832ba58 +0x3be:  mov    0xc(%ebp),%eax
0832ba5b +0x3c1:  add    $0x4,%eax
0832ba5e +0x3c4:  mov    %eax,0x4(%esp)
0832ba62 +0x3c8:  mov    %ebx,(%esp)
0832ba65 +0x3cb:  call   0832bc94 <+0x5fa>
0832ba6a +0x3d0:  mov    %ebx,%eax
0832ba6c +0x3d2:  add    $0x14,%esp
0832ba6f +0x3d5:  pop    %ebx
0832ba70 +0x3d6:  pop    %ebp
0832ba71 +0x3d7:  ret    $0x4
0832ba74 +0x3da:  push   %ebp
0832ba75 +0x3db:  mov    %esp,%ebp
0832ba77 +0x3dd:  sub    $0x28,%esp
0832ba7a +0x3e0:  jmp    0832ba98 <+0x3fe>
0832ba7c +0x3e2:  mov    0x8(%ebp),%eax
0832ba7f +0x3e5:  mov    %eax,(%esp)
0832ba82 +0x3e8:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0832ba87 +0x3ed:  add    %eax,%eax
0832ba89 +0x3ef:  mov    %eax,0x4(%esp)
0832ba8d +0x3f3:  mov    0x8(%ebp),%eax
0832ba90 +0x3f6:  mov    %eax,(%esp)
0832ba93 +0x3f9:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0832ba98 +0x3fe:  movl   $0x30,0x4(%esp)
0832baa0 +0x406:  mov    0x8(%ebp),%eax
0832baa3 +0x409:  mov    %eax,(%esp)
0832baa6 +0x40c:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0832baab +0x411:  xor    $0x1,%eax
0832baae +0x414:  test   %al,%al
0832bab0 +0x416:  jne    0832ba7c <+0x3e2>
0832bab2 +0x418:  mov    0x8(%ebp),%eax
0832bab5 +0x41b:  mov    0x8(%eax),%eax
0832bab8 +0x41e:  mov    %eax,%edx
0832baba +0x420:  mov    0x8(%ebp),%eax
0832babd +0x423:  mov    0xc(%eax),%eax
0832bac0 +0x426:  lea    (%edx,%eax,1),%eax
0832bac3 +0x429:  mov    %eax,-0xc(%ebp)
0832bac6 +0x42c:  movl   $0x30,0x4(%esp)
0832bace +0x434:  mov    0x8(%ebp),%eax
0832bad1 +0x437:  mov    %eax,(%esp)
0832bad4 +0x43a:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0832bad9 +0x43f:  mov    -0xc(%ebp),%eax
0832badc +0x442:  leave
0832badd +0x443:  ret
0832bade +0x444:  push   %ebp
0832badf +0x445:  mov    %esp,%ebp
0832bae1 +0x447:  mov    0x8(%ebp),%eax
0832bae4 +0x44a:  add    $0x4,%eax
0832bae7 +0x44d:  pop    %ebp
0832bae8 +0x44e:  ret
0832bae9 +0x44f:  nop
0832baea +0x450:  push   %ebp
0832baeb +0x451:  mov    %esp,%ebp
0832baed +0x453:  mov    0x8(%ebp),%eax
0832baf0 +0x456:  add    $0x4,%eax
0832baf3 +0x459:  pop    %ebp
0832baf4 +0x45a:  ret
0832baf5 +0x45b:  push   %ebp
0832baf6 +0x45c:  mov    %esp,%ebp
0832baf8 +0x45e:  mov    0x8(%ebp),%eax
0832bafb +0x461:  mov    0xc(%eax),%eax
0832bafe +0x464:  pop    %ebp
0832baff +0x465:  ret
0832bb00 +0x466:  push   %ebp
0832bb01 +0x467:  mov    %esp,%ebp
0832bb03 +0x469:  mov    0x8(%ebp),%eax
0832bb06 +0x46c:  mov    0x8(%eax),%eax
0832bb09 +0x46f:  pop    %ebp
0832bb0a +0x470:  ret
0832bb0b +0x471:  push   %ebp
0832bb0c +0x472:  mov    %esp,%ebp
0832bb0e +0x474:  mov    0x8(%ebp),%eax
0832bb11 +0x477:  mov    0xc(%eax),%eax
0832bb14 +0x47a:  pop    %ebp
0832bb15 +0x47b:  ret
0832bb16 +0x47c:  push   %ebp
0832bb17 +0x47d:  mov    %esp,%ebp
0832bb19 +0x47f:  mov    0x8(%ebp),%eax
0832bb1c +0x482:  mov    0x8(%eax),%eax
0832bb1f +0x485:  pop    %ebp
0832bb20 +0x486:  ret
0832bb21 +0x487:  nop
0832bb22 +0x488:  push   %ebp
0832bb23 +0x489:  mov    %esp,%ebp
0832bb25 +0x48b:  push   %ebx
0832bb26 +0x48c:  sub    $0x14,%esp
0832bb29 +0x48f:  mov    0x8(%ebp),%ebx
0832bb2c +0x492:  jmp    0832bb7a <+0x4e0>
0832bb2e +0x494:  mov    0x10(%ebp),%eax
0832bb31 +0x497:  mov    %eax,(%esp)
0832bb34 +0x49a:  call   0832bca1 <+0x607>
0832bb39 +0x49f:  mov    0xc(%ebp),%edx
0832bb3c +0x4a2:  mov    0x18(%ebp),%ecx
0832bb3f +0x4a5:  mov    %ecx,0x8(%esp)
0832bb43 +0x4a9:  mov    %eax,0x4(%esp)
0832bb47 +0x4ad:  mov    %edx,(%esp)
0832bb4a +0x4b0:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0832bb4f +0x4b5:  xor    $0x1,%eax
0832bb52 +0x4b8:  test   %al,%al
0832bb54 +0x4ba:  je     0832bb6c <+0x4d2>
0832bb56 +0x4bc:  mov    0x10(%ebp),%eax
0832bb59 +0x4bf:  mov    %eax,0x14(%ebp)
0832bb5c +0x4c2:  mov    0x10(%ebp),%eax
0832bb5f +0x4c5:  mov    %eax,(%esp)
0832bb62 +0x4c8:  call   0832bb00 <+0x466>
0832bb67 +0x4cd:  mov    %eax,0x10(%ebp)
0832bb6a +0x4d0:  jmp    0832bb7a <+0x4e0>
0832bb6c +0x4d2:  mov    0x10(%ebp),%eax
0832bb6f +0x4d5:  mov    %eax,(%esp)
0832bb72 +0x4d8:  call   0832baf5 <+0x45b>
0832bb77 +0x4dd:  mov    %eax,0x10(%ebp)
0832bb7a +0x4e0:  cmpl   $0x0,0x10(%ebp)
0832bb7e +0x4e4:  setne  %al
0832bb81 +0x4e7:  test   %al,%al
0832bb83 +0x4e9:  jne    0832bb2e <+0x494>
0832bb85 +0x4eb:  mov    0x14(%ebp),%eax
0832bb88 +0x4ee:  mov    %eax,0x4(%esp)
0832bb8c +0x4f2:  mov    %ebx,(%esp)
0832bb8f +0x4f5:  call   0832bbd4 <+0x53a>
0832bb94 +0x4fa:  mov    %ebx,%eax
0832bb96 +0x4fc:  add    $0x14,%esp
0832bb99 +0x4ff:  pop    %ebx
0832bb9a +0x500:  pop    %ebp
0832bb9b +0x501:  ret    $0x4
0832bb9e +0x504:  push   %ebp
0832bb9f +0x505:  mov    %esp,%ebp
0832bba1 +0x507:  sub    $0x28,%esp
0832bba4 +0x50a:  mov    0x8(%ebp),%eax
0832bba7 +0x50d:  mov    %eax,(%esp)
0832bbaa +0x510:  call   0832bcc3 <+0x629>
0832bbaf +0x515:  mov    %eax,0x4(%esp)
0832bbb3 +0x519:  lea    -0x9(%ebp),%eax
0832bbb6 +0x51c:  mov    %eax,(%esp)
0832bbb9 +0x51f:  call   0832bcce <+0x634>
0832bbbe +0x524:  leave
0832bbbf +0x525:  ret
0832bbc0 +0x526:  push   %ebp
0832bbc1 +0x527:  mov    %esp,%ebp
0832bbc3 +0x529:  mov    0x8(%ebp),%eax
0832bbc6 +0x52c:  mov    (%eax),%edx
0832bbc8 +0x52e:  mov    0xc(%ebp),%eax
0832bbcb +0x531:  mov    (%eax),%eax
0832bbcd +0x533:  cmp    %eax,%edx
0832bbcf +0x535:  sete   %al
0832bbd2 +0x538:  pop    %ebp
0832bbd3 +0x539:  ret
0832bbd4 +0x53a:  push   %ebp
0832bbd5 +0x53b:  mov    %esp,%ebp
0832bbd7 +0x53d:  mov    0xc(%ebp),%edx
0832bbda +0x540:  mov    0x8(%ebp),%eax
0832bbdd +0x543:  mov    %edx,(%eax)
0832bbdf +0x545:  pop    %ebp
0832bbe0 +0x546:  ret
0832bbe1 +0x547:  nop
0832bbe2 +0x548:  push   %ebp
0832bbe3 +0x549:  mov    %esp,%ebp
0832bbe5 +0x54b:  push   %ebx
0832bbe6 +0x54c:  sub    $0x14,%esp
0832bbe9 +0x54f:  mov    0x8(%ebp),%ebx
0832bbec +0x552:  jmp    0832bc3a <+0x5a0>
0832bbee +0x554:  mov    0x10(%ebp),%eax
0832bbf1 +0x557:  mov    %eax,(%esp)
0832bbf4 +0x55a:  call   0832bcd6 <+0x63c>
0832bbf9 +0x55f:  mov    0xc(%ebp),%edx
0832bbfc +0x562:  mov    0x18(%ebp),%ecx
0832bbff +0x565:  mov    %ecx,0x8(%esp)
0832bc03 +0x569:  mov    %eax,0x4(%esp)
0832bc07 +0x56d:  mov    %edx,(%esp)
0832bc0a +0x570:  call   080f5b18 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0xac9>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0xac9
0832bc0f +0x575:  xor    $0x1,%eax
0832bc12 +0x578:  test   %al,%al
0832bc14 +0x57a:  je     0832bc2c <+0x592>
0832bc16 +0x57c:  mov    0x10(%ebp),%eax
0832bc19 +0x57f:  mov    %eax,0x14(%ebp)
0832bc1c +0x582:  mov    0x10(%ebp),%eax
0832bc1f +0x585:  mov    %eax,(%esp)
0832bc22 +0x588:  call   0832bb16 <+0x47c>
0832bc27 +0x58d:  mov    %eax,0x10(%ebp)
0832bc2a +0x590:  jmp    0832bc3a <+0x5a0>
0832bc2c +0x592:  mov    0x10(%ebp),%eax
0832bc2f +0x595:  mov    %eax,(%esp)
0832bc32 +0x598:  call   0832bb0b <+0x471>
0832bc37 +0x59d:  mov    %eax,0x10(%ebp)
0832bc3a +0x5a0:  cmpl   $0x0,0x10(%ebp)
0832bc3e +0x5a4:  setne  %al
0832bc41 +0x5a7:  test   %al,%al
0832bc43 +0x5a9:  jne    0832bbee <+0x554>
0832bc45 +0x5ab:  mov    0x14(%ebp),%eax
0832bc48 +0x5ae:  mov    %eax,0x4(%esp)
0832bc4c +0x5b2:  mov    %ebx,(%esp)
0832bc4f +0x5b5:  call   0832bc94 <+0x5fa>
0832bc54 +0x5ba:  mov    %ebx,%eax
0832bc56 +0x5bc:  add    $0x14,%esp
0832bc59 +0x5bf:  pop    %ebx
0832bc5a +0x5c0:  pop    %ebp
0832bc5b +0x5c1:  ret    $0x4
0832bc5e +0x5c4:  push   %ebp
0832bc5f +0x5c5:  mov    %esp,%ebp
0832bc61 +0x5c7:  sub    $0x28,%esp
0832bc64 +0x5ca:  mov    0x8(%ebp),%eax
0832bc67 +0x5cd:  mov    %eax,(%esp)
0832bc6a +0x5d0:  call   0832bcf8 <+0x65e>
0832bc6f +0x5d5:  mov    %eax,0x4(%esp)
0832bc73 +0x5d9:  lea    -0x9(%ebp),%eax
0832bc76 +0x5dc:  mov    %eax,(%esp)
0832bc79 +0x5df:  call   0832bd04 <+0x66a>
0832bc7e +0x5e4:  leave
0832bc7f +0x5e5:  ret
0832bc80 +0x5e6:  push   %ebp
0832bc81 +0x5e7:  mov    %esp,%ebp
0832bc83 +0x5e9:  mov    0x8(%ebp),%eax
0832bc86 +0x5ec:  mov    (%eax),%edx
0832bc88 +0x5ee:  mov    0xc(%ebp),%eax
0832bc8b +0x5f1:  mov    (%eax),%eax
0832bc8d +0x5f3:  cmp    %eax,%edx
0832bc8f +0x5f5:  sete   %al
0832bc92 +0x5f8:  pop    %ebp
0832bc93 +0x5f9:  ret
0832bc94 +0x5fa:  push   %ebp
0832bc95 +0x5fb:  mov    %esp,%ebp
0832bc97 +0x5fd:  mov    0xc(%ebp),%edx
0832bc9a +0x600:  mov    0x8(%ebp),%eax
0832bc9d +0x603:  mov    %edx,(%eax)
0832bc9f +0x605:  pop    %ebp
0832bca0 +0x606:  ret
0832bca1 +0x607:  push   %ebp
0832bca2 +0x608:  mov    %esp,%ebp
0832bca4 +0x60a:  sub    $0x28,%esp
0832bca7 +0x60d:  mov    0x8(%ebp),%eax
0832bcaa +0x610:  mov    %eax,(%esp)
0832bcad +0x613:  call   0832bd0c <+0x672>
0832bcb2 +0x618:  mov    %eax,0x4(%esp)
0832bcb6 +0x61c:  lea    -0x9(%ebp),%eax
0832bcb9 +0x61f:  mov    %eax,(%esp)
0832bcbc +0x622:  call   0832bcce <+0x634>
0832bcc1 +0x627:  leave
0832bcc2 +0x628:  ret
0832bcc3 +0x629:  push   %ebp
0832bcc4 +0x62a:  mov    %esp,%ebp
0832bcc6 +0x62c:  mov    0x8(%ebp),%eax
0832bcc9 +0x62f:  add    $0x10,%eax
0832bccc +0x632:  pop    %ebp
0832bccd +0x633:  ret
0832bcce +0x634:  push   %ebp
0832bccf +0x635:  mov    %esp,%ebp
0832bcd1 +0x637:  mov    0xc(%ebp),%eax
0832bcd4 +0x63a:  pop    %ebp
0832bcd5 +0x63b:  ret
0832bcd6 +0x63c:  push   %ebp
0832bcd7 +0x63d:  mov    %esp,%ebp
0832bcd9 +0x63f:  sub    $0x28,%esp
0832bcdc +0x642:  mov    0x8(%ebp),%eax
0832bcdf +0x645:  mov    %eax,(%esp)
0832bce2 +0x648:  call   0832bd17 <+0x67d>
0832bce7 +0x64d:  mov    %eax,0x4(%esp)
0832bceb +0x651:  lea    -0x9(%ebp),%eax
0832bcee +0x654:  mov    %eax,(%esp)
0832bcf1 +0x657:  call   0832bd04 <+0x66a>
0832bcf6 +0x65c:  leave
0832bcf7 +0x65d:  ret
0832bcf8 +0x65e:  push   %ebp
0832bcf9 +0x65f:  mov    %esp,%ebp
0832bcfb +0x661:  mov    0x8(%ebp),%eax
0832bcfe +0x664:  add    $0x10,%eax
0832bd01 +0x667:  pop    %ebp
0832bd02 +0x668:  ret
0832bd03 +0x669:  nop
0832bd04 +0x66a:  push   %ebp
0832bd05 +0x66b:  mov    %esp,%ebp
0832bd07 +0x66d:  mov    0xc(%ebp),%eax
0832bd0a +0x670:  pop    %ebp
0832bd0b +0x671:  ret
0832bd0c +0x672:  push   %ebp
0832bd0d +0x673:  mov    %esp,%ebp
0832bd0f +0x675:  mov    0x8(%ebp),%eax
0832bd12 +0x678:  add    $0x10,%eax
0832bd15 +0x67b:  pop    %ebp
0832bd16 +0x67c:  ret
0832bd17 +0x67d:  push   %ebp
0832bd18 +0x67e:  mov    %esp,%ebp
0832bd1a +0x680:  mov    0x8(%ebp),%eax
0832bd1d +0x683:  add    $0x10,%eax
0832bd20 +0x686:  pop    %ebp
0832bd21 +0x687:  ret
0832bd22 +0x688:  push   %ebp
0832bd23 +0x689:  mov    %esp,%ebp
0832bd25 +0x68b:  sub    $0x18,%esp
0832bd28 +0x68e:  mov    0x8(%ebp),%eax
0832bd2b +0x691:  movl   $&_ZTVN10expert_job16CCharacExpertJobE+0x8,(%eax)
0832bd31 +0x697:  mov    0x8(%ebp),%eax
0832bd34 +0x69a:  mov    %eax,(%esp)
0832bd37 +0x69d:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0832bd3c +0x6a2:  mov    $0x0,%eax
0832bd41 +0x6a7:  test   %al,%al
0832bd43 +0x6a9:  je     0832bd50 <+0x6b6>
0832bd45 +0x6ab:  mov    0x8(%ebp),%eax
0832bd48 +0x6ae:  mov    %eax,(%esp)
0832bd4b +0x6b1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832bd50 +0x6b6:  leave
0832bd51 +0x6b7:  ret
0832bd52 +0x6b8:  push   %ebp
0832bd53 +0x6b9:  mov    %esp,%ebp
0832bd55 +0x6bb:  sub    $0x18,%esp
0832bd58 +0x6be:  mov    0x8(%ebp),%eax
0832bd5b +0x6c1:  mov    %eax,(%esp)
0832bd5e +0x6c4:  call   0832bd22 <+0x688>
0832bd63 +0x6c9:  mov    0x8(%ebp),%eax
0832bd66 +0x6cc:  mov    %eax,(%esp)
0832bd69 +0x6cf:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832bd6e +0x6d4:  leave
0832bd6f +0x6d5:  ret
```

## 反编译 C

```c
// <global>::global @ 0x832b69a

/* expert_job::CCharacExpertJob::_reset() */

void expert_job::CCharacExpertJob::_GLOBAL__I__reset(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
