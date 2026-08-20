# AsymmetricMultiply

`_ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j`

`TaoCrypt::AsymmetricMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875c610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875c610  _ZN8TaoCrypt18AsymmetricMultiplyEPjS0_PKjjS2_j
#           TaoCrypt::AsymmetricMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
# range [0x0875c610, 0x0875c97f]
0875c610 +0x000:  push   %ebp
0875c611 +0x001:  mov    %esp,%ebp
0875c613 +0x003:  push   %edi
0875c614 +0x004:  push   %esi
0875c615 +0x005:  push   %ebx
0875c616 +0x006:  sub    $0x6c,%esp
0875c619 +0x009:  mov    0x14(%ebp),%esi
0875c61c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875c621 +0x011:  add    $0xc10577,%ebx
0875c627 +0x017:  cmp    %esi,0x1c(%ebp)
0875c62a +0x01a:  je     0875c830 <+0x220>
0875c630 +0x020:  jae    0875c646 <+0x36>
0875c632 +0x022:  mov    %esi,%eax
0875c634 +0x024:  mov    0x18(%ebp),%ecx
0875c637 +0x027:  mov    0x1c(%ebp),%esi
0875c63a +0x02a:  mov    %eax,0x1c(%ebp)
0875c63d +0x02d:  mov    0x10(%ebp),%eax
0875c640 +0x030:  mov    %ecx,0x10(%ebp)
0875c643 +0x033:  mov    %eax,0x18(%ebp)
0875c646 +0x036:  cmp    $0x2,%esi
0875c649 +0x039:  je     0875c7f8 <+0x1e8>
0875c64f +0x03f:  mov    0x18(%ebp),%eax
0875c652 +0x042:  mov    0x10(%ebp),%edx
0875c655 +0x045:  mov    0xc(%ebp),%ecx
0875c658 +0x048:  mov    %esi,0x10(%esp)
0875c65c +0x04c:  mov    %eax,0xc(%esp)
0875c660 +0x050:  mov    0x8(%ebp),%eax
0875c663 +0x053:  mov    %edx,0x8(%esp)
0875c667 +0x057:  mov    %ecx,0x4(%esp)
0875c66b +0x05b:  mov    %eax,(%esp)
0875c66e +0x05e:  call   0875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875c673 +0x063:  mov    0x8(%ebp),%edx
0875c676 +0x066:  test   %esi,%esi
0875c678 +0x068:  mov    0xc(%ebp),%ecx
0875c67b +0x06b:  lea    (%edx,%esi,4),%edx
0875c67e +0x06e:  lea    (%ecx,%esi,8),%ecx
0875c681 +0x071:  mov    %edx,-0x40(%ebp)
0875c684 +0x074:  mov    %ecx,-0x44(%ebp)
0875c687 +0x077:  je     0875c69d <+0x8d>
0875c689 +0x079:  mov    -0x40(%ebp),%edi
0875c68c +0x07c:  xor    %eax,%eax
0875c68e +0x07e:  xchg   %ax,%ax
0875c690 +0x080:  mov    (%edi,%eax,4),%edx
0875c693 +0x083:  mov    %edx,(%ecx,%eax,4)
0875c696 +0x086:  add    $0x1,%eax
0875c699 +0x089:  cmp    %eax,%esi
0875c69b +0x08b:  ja     0875c690 <+0x80>
0875c69d +0x08d:  lea    (%esi,%esi,1),%edi
0875c6a0 +0x090:  cmp    0x1c(%ebp),%edi
0875c6a3 +0x093:  jae    0875c718 <+0x108>
0875c6a5 +0x095:  mov    0xc(%ebp),%ecx
0875c6a8 +0x098:  lea    0x0(,%esi,4),%eax
0875c6af +0x09f:  mov    %eax,-0x30(%ebp)
0875c6b2 +0x0a2:  lea    0x0(,%esi,8),%edx
0875c6b9 +0x0a9:  lea    (%edi,%esi,1),%eax
0875c6bc +0x0ac:  mov    %edx,-0x2c(%ebp)
0875c6bf +0x0af:  lea    (%ecx,%eax,4),%edx
0875c6c2 +0x0b2:  mov    0x18(%ebp),%eax
0875c6c5 +0x0b5:  add    -0x2c(%ebp),%eax
0875c6c8 +0x0b8:  mov    -0x30(%ebp),%ecx
0875c6cb +0x0bb:  mov    %esi,-0x3c(%ebp)
0875c6ce +0x0be:  mov    %edi,-0x30(%ebp)
0875c6d1 +0x0c1:  mov    %eax,%esi
0875c6d3 +0x0c3:  mov    %edx,%edi
0875c6d5 +0x0c5:  lea    0x0(%esi),%esi
0875c6d8 +0x0c8:  mov    -0x3c(%ebp),%eax
0875c6db +0x0cb:  mov    0x10(%ebp),%edx
0875c6de +0x0ce:  mov    %esi,0xc(%esp)
0875c6e2 +0x0d2:  mov    %edi,(%esp)
0875c6e5 +0x0d5:  mov    %eax,0x10(%esp)
0875c6e9 +0x0d9:  mov    0xc(%ebp),%eax
0875c6ec +0x0dc:  mov    %ecx,-0x48(%ebp)
0875c6ef +0x0df:  mov    %edx,0x8(%esp)
0875c6f3 +0x0e3:  mov    %eax,0x4(%esp)
0875c6f7 +0x0e7:  call   0875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875c6fc +0x0ec:  mov    -0x48(%ebp),%ecx
0875c6ff +0x0ef:  add    -0x30(%ebp),%ecx
0875c702 +0x0f2:  add    -0x2c(%ebp),%edi
0875c705 +0x0f5:  add    -0x2c(%ebp),%esi
0875c708 +0x0f8:  mov    %ecx,%eax
0875c70a +0x0fa:  sub    -0x30(%ebp),%eax
0875c70d +0x0fd:  cmp    %eax,0x1c(%ebp)
0875c710 +0x100:  ja     0875c6d8 <+0xc8>
0875c712 +0x102:  mov    -0x30(%ebp),%edi
0875c715 +0x105:  mov    -0x3c(%ebp),%esi
0875c718 +0x108:  cmp    0x1c(%ebp),%esi
0875c71b +0x10b:  jae    0875c785 <+0x175>
0875c71d +0x10d:  lea    0x0(,%edi,4),%edx
0875c724 +0x114:  mov    %edx,-0x2c(%ebp)
0875c727 +0x117:  mov    0x8(%ebp),%edx
0875c72a +0x11a:  lea    0x0(,%esi,4),%eax
0875c731 +0x121:  lea    (%edi,%esi,1),%ecx
0875c734 +0x124:  mov    %edi,-0x30(%ebp)
0875c737 +0x127:  mov    %esi,-0x3c(%ebp)
0875c73a +0x12a:  add    %eax,%edx
0875c73c +0x12c:  add    0x18(%ebp),%eax
0875c73f +0x12f:  mov    %edx,%edi
0875c741 +0x131:  mov    %eax,%esi
0875c743 +0x133:  nop
0875c744 +0x134:  lea    0x0(%esi,%eiz,1),%esi
0875c748 +0x138:  mov    -0x3c(%ebp),%eax
0875c74b +0x13b:  mov    0x10(%ebp),%edx
0875c74e +0x13e:  mov    %esi,0xc(%esp)
0875c752 +0x142:  mov    %edi,(%esp)
0875c755 +0x145:  mov    %eax,0x10(%esp)
0875c759 +0x149:  mov    0xc(%ebp),%eax
0875c75c +0x14c:  mov    %ecx,-0x48(%ebp)
0875c75f +0x14f:  mov    %edx,0x8(%esp)
0875c763 +0x153:  mov    %eax,0x4(%esp)
0875c767 +0x157:  call   0875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875c76c +0x15c:  mov    -0x48(%ebp),%ecx
0875c76f +0x15f:  add    -0x30(%ebp),%ecx
0875c772 +0x162:  add    -0x2c(%ebp),%edi
0875c775 +0x165:  add    -0x2c(%ebp),%esi
0875c778 +0x168:  mov    %ecx,%eax
0875c77a +0x16a:  sub    -0x30(%ebp),%eax
0875c77d +0x16d:  cmp    %eax,0x1c(%ebp)
0875c780 +0x170:  ja     0875c748 <+0x138>
0875c782 +0x172:  mov    -0x3c(%ebp),%esi
0875c785 +0x175:  mov    0x1c(%ebp),%eax
0875c788 +0x178:  mov    -0x40(%ebp),%ecx
0875c78b +0x17b:  mov    -0x44(%ebp),%edx
0875c78e +0x17e:  sub    %esi,%eax
0875c790 +0x180:  mov    %eax,0xc(%esp)
0875c794 +0x184:  mov    %edx,0x8(%esp)
0875c798 +0x188:  mov    %ecx,0x4(%esp)
0875c79c +0x18c:  mov    %ecx,(%esp)
0875c79f +0x18f:  call   *0x124c8c(%ebx)
0875c7a5 +0x195:  test   %eax,%eax
0875c7a7 +0x197:  je     0875c7f0 <+0x1e0>
0875c7a9 +0x199:  mov    0x1c(%ebp),%eax
0875c7ac +0x19c:  mov    0x8(%ebp),%edx
0875c7af +0x19f:  lea    (%edx,%eax,4),%ecx
0875c7b2 +0x1a2:  mov    (%ecx),%edx
0875c7b4 +0x1a4:  lea    0x1(%edx),%eax
0875c7b7 +0x1a7:  cmp    %eax,%edx
0875c7b9 +0x1a9:  mov    %eax,(%ecx)
0875c7bb +0x1ab:  jbe    0875c7f0 <+0x1e0>
0875c7bd +0x1ad:  cmp    $0x1,%esi
0875c7c0 +0x1b0:  jbe    0875c7f0 <+0x1e0>
0875c7c2 +0x1b2:  mov    0x4(%ecx),%edx
0875c7c5 +0x1b5:  mov    $0x1,%eax
0875c7ca +0x1ba:  add    $0x1,%edx
0875c7cd +0x1bd:  test   %edx,%edx
0875c7cf +0x1bf:  mov    %edx,0x4(%ecx)
0875c7d2 +0x1c2:  je     0875c7e5 <+0x1d5>
0875c7d4 +0x1c4:  jmp    0875c7f0 <+0x1e0>
0875c7d6 +0x1c6:  xchg   %ax,%ax
0875c7d8 +0x1c8:  mov    (%ecx,%eax,4),%edx
0875c7db +0x1cb:  add    $0x1,%edx
0875c7de +0x1ce:  test   %edx,%edx
0875c7e0 +0x1d0:  mov    %edx,(%ecx,%eax,4)
0875c7e3 +0x1d3:  jne    0875c7f0 <+0x1e0>
0875c7e5 +0x1d5:  add    $0x1,%eax
0875c7e8 +0x1d8:  cmp    %eax,%esi
0875c7ea +0x1da:  ja     0875c7d8 <+0x1c8>
0875c7ec +0x1dc:  lea    0x0(%esi,%eiz,1),%esi
0875c7f0 +0x1e0:  add    $0x6c,%esp
0875c7f3 +0x1e3:  pop    %ebx
0875c7f4 +0x1e4:  pop    %esi
0875c7f5 +0x1e5:  pop    %edi
0875c7f6 +0x1e6:  pop    %ebp
0875c7f7 +0x1e7:  ret
0875c7f8 +0x1e8:  mov    0x10(%ebp),%eax
0875c7fb +0x1eb:  mov    0x4(%eax),%edi
0875c7fe +0x1ee:  test   %edi,%edi
0875c800 +0x1f0:  jne    0875c868 <+0x258>
0875c802 +0x1f2:  mov    (%eax),%edi
0875c804 +0x1f4:  test   %edi,%edi
0875c806 +0x1f6:  jne    0875c8a8 <+0x298>
0875c80c +0x1fc:  mov    0x1c(%ebp),%edx
0875c80f +0x1ff:  add    $0x2,%edx
0875c812 +0x202:  je     0875c7f0 <+0x1e0>
0875c814 +0x204:  mov    0x8(%ebp),%ecx
0875c817 +0x207:  xor    %eax,%eax
0875c819 +0x209:  lea    0x0(%esi,%eiz,1),%esi
0875c820 +0x210:  movl   $0x0,(%ecx,%eax,4)
0875c827 +0x217:  add    $0x1,%eax
0875c82a +0x21a:  cmp    %eax,%edx
0875c82c +0x21c:  ja     0875c820 <+0x210>
0875c82e +0x21e:  jmp    0875c7f0 <+0x1e0>
0875c830 +0x220:  mov    0x18(%ebp),%eax
0875c833 +0x223:  cmp    %eax,0x10(%ebp)
0875c836 +0x226:  je     0875c947 <+0x337>
0875c83c +0x22c:  mov    0x1c(%ebp),%edx
0875c83f +0x22f:  mov    0x10(%ebp),%esi
0875c842 +0x232:  mov    %eax,0xc(%esp)
0875c846 +0x236:  mov    0xc(%ebp),%eax
0875c849 +0x239:  mov    %edx,0x10(%esp)
0875c84d +0x23d:  mov    0x8(%ebp),%edx
0875c850 +0x240:  mov    %esi,0x8(%esp)
0875c854 +0x244:  mov    %eax,0x4(%esp)
0875c858 +0x248:  mov    %edx,(%esp)
0875c85b +0x24b:  call   0875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875c860 +0x250:  add    $0x6c,%esp
0875c863 +0x253:  pop    %ebx
0875c864 +0x254:  pop    %esi
0875c865 +0x255:  pop    %edi
0875c866 +0x256:  pop    %ebp
0875c867 +0x257:  ret
0875c868 +0x258:  mov    0x18(%ebp),%ecx
0875c86b +0x25b:  mov    0xc(%ebp),%edx
0875c86e +0x25e:  mov    %eax,0x8(%esp)
0875c872 +0x262:  movl   $0x2,0x10(%esp)
0875c87a +0x26a:  mov    %ecx,0xc(%esp)
0875c87e +0x26e:  mov    0x8(%ebp),%ecx
0875c881 +0x271:  mov    %edx,0x4(%esp)
0875c885 +0x275:  mov    %ecx,(%esp)
0875c888 +0x278:  call   0875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875c88d +0x27d:  mov    0x8(%ebp),%eax
0875c890 +0x280:  mov    0xc(%ebp),%edx
0875c893 +0x283:  add    $0x8,%eax
0875c896 +0x286:  add    $0x10,%edx
0875c899 +0x289:  mov    %eax,-0x40(%ebp)
0875c89c +0x28c:  mov    %edx,%ecx
0875c89e +0x28e:  mov    %edx,-0x44(%ebp)
0875c8a1 +0x291:  jmp    0875c689 <+0x79>
0875c8a6 +0x296:  xchg   %ax,%ax
0875c8a8 +0x298:  cmp    $0x1,%edi
0875c8ab +0x29b:  je     0875c90e <+0x2fe>
0875c8ad +0x29d:  mov    0x1c(%ebp),%edx
0875c8b0 +0x2a0:  xor    %eax,%eax
0875c8b2 +0x2a2:  xor    %ecx,%ecx
0875c8b4 +0x2a4:  test   %edx,%edx
0875c8b6 +0x2a6:  je     0875c96c <+0x35c>
0875c8bc +0x2ac:  lea    0x0(%esi,%eiz,1),%esi
0875c8c0 +0x2b0:  mov    0x18(%ebp),%esi
0875c8c3 +0x2b3:  mov    %eax,-0x50(%ebp)
0875c8c6 +0x2b6:  mov    %edi,%eax
0875c8c8 +0x2b8:  movl   $0x0,-0x4c(%ebp)
0875c8cf +0x2bf:  mull   (%esi,%ecx,4)
0875c8d2 +0x2c2:  add    %eax,-0x50(%ebp)
0875c8d5 +0x2c5:  adc    %edx,-0x4c(%ebp)
0875c8d8 +0x2c8:  mov    -0x4c(%ebp),%edx
0875c8db +0x2cb:  mov    -0x50(%ebp),%eax
0875c8de +0x2ce:  mov    -0x50(%ebp),%esi
0875c8e1 +0x2d1:  mov    %edx,-0x1c(%ebp)
0875c8e4 +0x2d4:  mov    0x8(%ebp),%edx
0875c8e7 +0x2d7:  mov    %eax,-0x20(%ebp)
0875c8ea +0x2da:  mov    %esi,(%edx,%ecx,4)
0875c8ed +0x2dd:  add    $0x1,%ecx
0875c8f0 +0x2e0:  mov    -0x1c(%ebp),%eax
0875c8f3 +0x2e3:  cmp    0x1c(%ebp),%ecx
0875c8f6 +0x2e6:  jb     0875c8c0 <+0x2b0>
0875c8f8 +0x2e8:  mov    0x1c(%ebp),%ecx
0875c8fb +0x2eb:  mov    0x8(%ebp),%esi
0875c8fe +0x2ee:  mov    %eax,(%esi,%ecx,4)
0875c901 +0x2f1:  movl   $0x0,0x4(%esi,%ecx,4)
0875c909 +0x2f9:  jmp    0875c7f0 <+0x1e0>
0875c90e +0x2fe:  mov    0x1c(%ebp),%ecx
0875c911 +0x301:  xor    %eax,%eax
0875c913 +0x303:  test   %ecx,%ecx
0875c915 +0x305:  je     0875c92d <+0x31d>
0875c917 +0x307:  mov    0x8(%ebp),%ecx
0875c91a +0x30a:  mov    0x18(%ebp),%esi
0875c91d +0x30d:  mov    0x1c(%ebp),%edi
0875c920 +0x310:  mov    (%esi,%eax,4),%edx
0875c923 +0x313:  mov    %edx,(%ecx,%eax,4)
0875c926 +0x316:  add    $0x1,%eax
0875c929 +0x319:  cmp    %edi,%eax
0875c92b +0x31b:  jb     0875c920 <+0x310>
0875c92d +0x31d:  mov    0x1c(%ebp),%edx
0875c930 +0x320:  mov    0x8(%ebp),%ecx
0875c933 +0x323:  movl   $0x0,0x4(%ecx,%edx,4)
0875c93b +0x32b:  movl   $0x0,(%ecx,%edx,4)
0875c942 +0x332:  jmp    0875c7f0 <+0x1e0>
0875c947 +0x337:  mov    0x1c(%ebp),%edx
0875c94a +0x33a:  mov    0x10(%ebp),%ecx
0875c94d +0x33d:  mov    0xc(%ebp),%esi
0875c950 +0x340:  mov    0x8(%ebp),%eax
0875c953 +0x343:  mov    %edx,0xc(%esp)
0875c957 +0x347:  mov    %ecx,0x8(%esp)
0875c95b +0x34b:  mov    %esi,0x4(%esp)
0875c95f +0x34f:  mov    %eax,(%esp)
0875c962 +0x352:  call   0875c310 <_ZN8TaoCrypt15RecursiveSquareEPjS0_PKjj>  ; TaoCrypt::RecursiveSquare(unsigned int*, unsigned int*, unsigned int const*, unsigned int)
0875c967 +0x357:  jmp    0875c7f0 <+0x1e0>
0875c96c +0x35c:  mov    0x1c(%ebp),%eax
0875c96f +0x35f:  jmp    0875c8f8 <+0x2e8>
0875c971 +0x361:  jmp    0875c980 <_ZN8TaoCrypt13AlmostInverseEPjS0_PKjjS2_j>  ; TaoCrypt::AlmostInverse(unsigned int*, unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
0875c973 +0x363:  nop
0875c974 +0x364:  nop
0875c975 +0x365:  nop
0875c976 +0x366:  nop
0875c977 +0x367:  nop
0875c978 +0x368:  nop
0875c979 +0x369:  nop
0875c97a +0x36a:  nop
0875c97b +0x36b:  nop
0875c97c +0x36c:  nop
0875c97d +0x36d:  nop
0875c97e +0x36e:  nop
0875c97f +0x36f:  nop
```

## 反编译 C

```c
// TaoCrypt::AsymmetricMultiply @ 0x875c610

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AsymmetricMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int,
   unsigned int const*, unsigned int) */

void TaoCrypt::AsymmetricMultiply
               (uint *param_1,uint *param_2,uint *param_3,uint param_4,uint *param_5,uint param_6)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *local_48;
  uint *local_44;
  
  uVar2 = param_6;
  puVar6 = param_3;
  if (param_6 == param_4) {
    if (param_3 == param_5) {
      RecursiveSquare(param_1,param_2,param_3,param_6);
      return;
    }
    RecursiveMultiply(param_1,param_2,param_3,param_5,param_6);
    return;
  }
  if (param_6 < param_4) {
    param_6 = param_4;
    param_3 = param_5;
    param_5 = puVar6;
    param_4 = uVar2;
  }
  if (param_4 == 2) {
    if (param_3[1] == 0) {
      uVar2 = *param_3;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          uVar5 = 0;
          uVar4 = 0;
          if (param_6 == 0) {
            uVar5 = 0;
          }
          else {
            do {
              lVar1 = (ulonglong)uVar2 * (ulonglong)param_5[uVar4] + (ulonglong)uVar5;
              uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
              param_1[uVar4] = (uint)lVar1;
              uVar4 = uVar4 + 1;
            } while (uVar4 < param_6);
          }
          param_1[param_6] = uVar5;
          param_1[param_6 + 1] = 0;
          return;
        }
        uVar2 = 0;
        if (param_6 != 0) {
          do {
            param_1[uVar2] = param_5[uVar2];
            uVar2 = uVar2 + 1;
          } while (uVar2 < param_6);
        }
        param_1[param_6 + 1] = 0;
        param_1[param_6] = 0;
        return;
      }
      if (param_6 == 0xfffffffe) {
        return;
      }
      uVar2 = 0;
      do {
        param_1[uVar2] = 0;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_6 + 2);
      return;
    }
    RecursiveMultiply(param_1,param_2,param_3,param_5,2);
    local_44 = param_1 + 2;
    local_48 = param_2 + 4;
  }
  else {
    RecursiveMultiply(param_1,param_2,param_3,param_5,param_4);
    local_44 = param_1 + param_4;
    local_48 = param_2 + param_4 * 2;
    if (param_4 == 0) goto LAB_0875c69d;
  }
  uVar2 = 0;
  do {
    local_48[uVar2] = local_44[uVar2];
    uVar2 = uVar2 + 1;
  } while (uVar2 < param_4);
LAB_0875c69d:
  uVar2 = param_4 * 2;
  if (uVar2 < param_6) {
    iVar3 = param_4 * 4;
    puVar6 = param_2 + param_4 * 3;
    puVar7 = param_5;
    do {
      puVar7 = puVar7 + param_4 * 2;
      RecursiveMultiply(puVar6,param_2,param_3,puVar7,param_4);
      iVar3 = iVar3 + uVar2;
      puVar6 = puVar6 + param_4 * 2;
    } while (iVar3 + param_4 * -2 < param_6);
  }
  if (param_4 < param_6) {
    iVar3 = param_4 * 3;
    puVar7 = param_1 + param_4;
    puVar6 = param_5 + param_4;
    do {
      RecursiveMultiply(puVar7,param_2,param_3,puVar6,param_4);
      iVar3 = iVar3 + uVar2;
      puVar7 = puVar7 + param_4 * 2;
      puVar6 = puVar6 + param_4 * 2;
    } while (iVar3 + param_4 * -2 < param_6);
  }
  iVar3 = (*s_pAdd)(local_44,local_44,local_48,param_6 - param_4);
  if (iVar3 != 0) {
    puVar6 = param_1 + param_6;
    uVar5 = *puVar6;
    uVar2 = uVar5 + 1;
    *puVar6 = uVar2;
    if ((uVar2 < uVar5) && (1 < param_4)) {
      uVar2 = 1;
      uVar5 = puVar6[1] + 1;
      puVar6[1] = uVar5;
      while ((uVar5 == 0 && (uVar2 = uVar2 + 1, uVar2 < param_4))) {
        uVar5 = puVar6[uVar2] + 1;
        puVar6[uVar2] = uVar5;
      }
    }
  }
  return;
}
```
