# readTime

`_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs`

`global constructors keyed to CerashopAddRestrict::readTime(short*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CerashopAddRestrict` | `0x08abf80a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08abf80a  _GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs
#           global constructors keyed to CerashopAddRestrict::readTime(short*)
# range [0x08abf80a, 0x08abfff7]
08abf80a +0x000:  push   %ebp
08abf80b +0x001:  mov    %esp,%ebp
08abf80d +0x003:  sub    $0x18,%esp
08abf810 +0x006:  movl   $0xffff,0x4(%esp)
08abf818 +0x00e:  movl   $0x1,(%esp)
08abf81f +0x015:  call   08abf7ca <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08abf824 +0x01a:  leave
08abf825 +0x01b:  ret
08abf826 +0x01c:  push   %ebp
08abf827 +0x01d:  mov    %esp,%ebp
08abf829 +0x01f:  mov    0x8(%ebp),%eax
08abf82c +0x022:  mov    0xc(%ebp),%edx
08abf82f +0x025:  mov    %edx,(%eax)
08abf831 +0x027:  mov    0x8(%ebp),%eax
08abf834 +0x02a:  mov    0x10(%ebp),%edx
08abf837 +0x02d:  mov    %edx,0x4(%eax)
08abf83a +0x030:  mov    0x8(%ebp),%eax
08abf83d +0x033:  mov    0x14(%ebp),%edx
08abf840 +0x036:  mov    %edx,0x8(%eax)
08abf843 +0x039:  mov    0x8(%ebp),%eax
08abf846 +0x03c:  mov    0x18(%ebp),%edx
08abf849 +0x03f:  mov    %edx,0xc(%eax)
08abf84c +0x042:  mov    0x8(%ebp),%eax
08abf84f +0x045:  mov    0x1c(%ebp),%edx
08abf852 +0x048:  mov    %edx,0x10(%eax)
08abf855 +0x04b:  mov    0x8(%ebp),%eax
08abf858 +0x04e:  mov    0x20(%ebp),%edx
08abf85b +0x051:  mov    %edx,0x14(%eax)
08abf85e +0x054:  mov    0x8(%ebp),%eax
08abf861 +0x057:  mov    0x24(%ebp),%edx
08abf864 +0x05a:  mov    %edx,0x18(%eax)
08abf867 +0x05d:  pop    %ebp
08abf868 +0x05e:  ret
08abf869 +0x05f:  nop
08abf86a +0x060:  push   %ebp
08abf86b +0x061:  mov    %esp,%ebp
08abf86d +0x063:  push   %ebx
08abf86e +0x064:  sub    $0x14,%esp
08abf871 +0x067:  mov    0x8(%ebp),%ebx
08abf874 +0x06a:  mov    0xc(%ebp),%eax
08abf877 +0x06d:  mov    0x10(%ebp),%edx
08abf87a +0x070:  mov    %edx,0x8(%esp)
08abf87e +0x074:  mov    %eax,0x4(%esp)
08abf882 +0x078:  mov    %ebx,(%esp)
08abf885 +0x07b:  call   08abf94c <+0x142>
08abf88a +0x080:  sub    $0x4,%esp
08abf88d +0x083:  mov    %ebx,%eax
08abf88f +0x085:  mov    -0x4(%ebp),%ebx
08abf892 +0x088:  leave
08abf893 +0x089:  ret    $0x4
08abf896 +0x08c:  push   %ebp
08abf897 +0x08d:  mov    %esp,%ebp
08abf899 +0x08f:  push   %ebx
08abf89a +0x090:  sub    $0x14,%esp
08abf89d +0x093:  mov    0x8(%ebp),%ebx
08abf8a0 +0x096:  mov    0xc(%ebp),%eax
08abf8a3 +0x099:  mov    %eax,0x4(%esp)
08abf8a7 +0x09d:  mov    %ebx,(%esp)
08abf8aa +0x0a0:  call   08abfa0a <+0x200>
08abf8af +0x0a5:  sub    $0x4,%esp
08abf8b2 +0x0a8:  mov    %ebx,%eax
08abf8b4 +0x0aa:  mov    -0x4(%ebp),%ebx
08abf8b7 +0x0ad:  leave
08abf8b8 +0x0ae:  ret    $0x4
08abf8bb +0x0b1:  nop
08abf8bc +0x0b2:  push   %ebp
08abf8bd +0x0b3:  mov    %esp,%ebp
08abf8bf +0x0b5:  mov    0x8(%ebp),%eax
08abf8c2 +0x0b8:  mov    (%eax),%edx
08abf8c4 +0x0ba:  mov    0xc(%ebp),%eax
08abf8c7 +0x0bd:  mov    (%eax),%eax
08abf8c9 +0x0bf:  cmp    %eax,%edx
08abf8cb +0x0c1:  sete   %al
08abf8ce +0x0c4:  pop    %ebp
08abf8cf +0x0c5:  ret
08abf8d0 +0x0c6:  push   %ebp
08abf8d1 +0x0c7:  mov    %esp,%ebp
08abf8d3 +0x0c9:  sub    $0x18,%esp
08abf8d6 +0x0cc:  mov    0xc(%ebp),%eax
08abf8d9 +0x0cf:  mov    %eax,(%esp)
08abf8dc +0x0d2:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
08abf8e1 +0x0d7:  mov    (%eax),%edx
08abf8e3 +0x0d9:  mov    0x8(%ebp),%eax
08abf8e6 +0x0dc:  mov    %edx,(%eax)
08abf8e8 +0x0de:  mov    0x10(%ebp),%eax
08abf8eb +0x0e1:  mov    %eax,(%esp)
08abf8ee +0x0e4:  call   08abfa30 <+0x226>
08abf8f3 +0x0e9:  mov    (%eax),%edx
08abf8f5 +0x0eb:  mov    0x8(%ebp),%eax
08abf8f8 +0x0ee:  mov    %edx,0x4(%eax)
08abf8fb +0x0f1:  leave
08abf8fc +0x0f2:  ret
08abf8fd +0x0f3:  nop
08abf8fe +0x0f4:  push   %ebp
08abf8ff +0x0f5:  mov    %esp,%ebp
08abf901 +0x0f7:  push   %ebx
08abf902 +0x0f8:  sub    $0x14,%esp
08abf905 +0x0fb:  mov    0x8(%ebp),%ebx
08abf908 +0x0fe:  mov    0xc(%ebp),%eax
08abf90b +0x101:  mov    0x10(%ebp),%edx
08abf90e +0x104:  mov    %edx,0x8(%esp)
08abf912 +0x108:  mov    %eax,0x4(%esp)
08abf916 +0x10c:  mov    %ebx,(%esp)
08abf919 +0x10f:  call   08abfa38 <+0x22e>
08abf91e +0x114:  sub    $0x4,%esp
08abf921 +0x117:  mov    %ebx,%eax
08abf923 +0x119:  mov    -0x4(%ebp),%ebx
08abf926 +0x11c:  leave
08abf927 +0x11d:  ret    $0x4
08abf92a +0x120:  push   %ebp
08abf92b +0x121:  mov    %esp,%ebp
08abf92d +0x123:  mov    0x8(%ebp),%eax
08abf930 +0x126:  mov    (%eax),%edx
08abf932 +0x128:  mov    0xc(%ebp),%eax
08abf935 +0x12b:  mov    (%eax),%eax
08abf937 +0x12d:  cmp    %eax,%edx
08abf939 +0x12f:  setne  %al
08abf93c +0x132:  pop    %ebp
08abf93d +0x133:  ret
08abf93e +0x134:  push   %ebp
08abf93f +0x135:  mov    %esp,%ebp
08abf941 +0x137:  mov    0x8(%ebp),%eax
08abf944 +0x13a:  mov    (%eax),%eax
08abf946 +0x13c:  add    $0x10,%eax
08abf949 +0x13f:  pop    %ebp
08abf94a +0x140:  ret
08abf94b +0x141:  nop
08abf94c +0x142:  push   %ebp
08abf94d +0x143:  mov    %esp,%ebp
08abf94f +0x145:  push   %esi
08abf950 +0x146:  push   %ebx
08abf951 +0x147:  sub    $0x30,%esp
08abf954 +0x14a:  mov    0x8(%ebp),%ebx
08abf957 +0x14d:  mov    0xc(%ebp),%eax
08abf95a +0x150:  mov    %eax,(%esp)
08abf95d +0x153:  call   08abfc08 <+0x3fe>
08abf962 +0x158:  mov    %eax,%esi
08abf964 +0x15a:  mov    0xc(%ebp),%eax
08abf967 +0x15d:  mov    %eax,(%esp)
08abf96a +0x160:  call   080e2e00 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xba6>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xba6
08abf96f +0x165:  lea    -0x10(%ebp),%edx
08abf972 +0x168:  mov    0x10(%ebp),%ecx
08abf975 +0x16b:  mov    %ecx,0x10(%esp)
08abf979 +0x16f:  mov    %esi,0xc(%esp)
08abf97d +0x173:  mov    %eax,0x8(%esp)
08abf981 +0x177:  mov    0xc(%ebp),%eax
08abf984 +0x17a:  mov    %eax,0x4(%esp)
08abf988 +0x17e:  mov    %edx,(%esp)
08abf98b +0x181:  call   08abfc14 <+0x40a>
08abf990 +0x186:  sub    $0x4,%esp
08abf993 +0x189:  lea    -0xc(%ebp),%eax
08abf996 +0x18c:  mov    0xc(%ebp),%edx
08abf999 +0x18f:  mov    %edx,0x4(%esp)
08abf99d +0x193:  mov    %eax,(%esp)
08abf9a0 +0x196:  call   08abfa0a <+0x200>
08abf9a5 +0x19b:  sub    $0x4,%esp
08abf9a8 +0x19e:  lea    -0xc(%ebp),%eax
08abf9ab +0x1a1:  mov    %eax,0x4(%esp)
08abf9af +0x1a5:  lea    -0x10(%ebp),%eax
08abf9b2 +0x1a8:  mov    %eax,(%esp)
08abf9b5 +0x1ab:  call   08abf8bc <+0xb2>
08abf9ba +0x1b0:  test   %al,%al
08abf9bc +0x1b2:  jne    08abf9e3 <+0x1d9>
08abf9be +0x1b4:  mov    -0x10(%ebp),%eax
08abf9c1 +0x1b7:  mov    %eax,(%esp)
08abf9c4 +0x1ba:  call   08abfc90 <+0x486>
08abf9c9 +0x1bf:  mov    0xc(%ebp),%edx
08abf9cc +0x1c2:  mov    %eax,0x8(%esp)
08abf9d0 +0x1c6:  mov    0x10(%ebp),%eax
08abf9d3 +0x1c9:  mov    %eax,0x4(%esp)
08abf9d7 +0x1cd:  mov    %edx,(%esp)
08abf9da +0x1d0:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08abf9df +0x1d5:  test   %al,%al
08abf9e1 +0x1d7:  je     08abf9f7 <+0x1ed>
08abf9e3 +0x1d9:  mov    0xc(%ebp),%eax
08abf9e6 +0x1dc:  mov    %eax,0x4(%esp)
08abf9ea +0x1e0:  mov    %ebx,(%esp)
08abf9ed +0x1e3:  call   08abfa0a <+0x200>
08abf9f2 +0x1e8:  sub    $0x4,%esp
08abf9f5 +0x1eb:  jmp    08abf9fc <+0x1f2>
08abf9f7 +0x1ed:  mov    -0x10(%ebp),%eax
08abf9fa +0x1f0:  mov    %eax,(%ebx)
08abf9fc +0x1f2:  mov    %ebx,%eax
08abf9fe +0x1f4:  lea    -0x8(%ebp),%esp
08abfa01 +0x1f7:  add    $0x0,%esp
08abfa04 +0x1fa:  pop    %ebx
08abfa05 +0x1fb:  pop    %esi
08abfa06 +0x1fc:  pop    %ebp
08abfa07 +0x1fd:  ret    $0x4
08abfa0a +0x200:  push   %ebp
08abfa0b +0x201:  mov    %esp,%ebp
08abfa0d +0x203:  push   %ebx
08abfa0e +0x204:  sub    $0x14,%esp
08abfa11 +0x207:  mov    0x8(%ebp),%ebx
08abfa14 +0x20a:  mov    0xc(%ebp),%eax
08abfa17 +0x20d:  add    $0x4,%eax
08abfa1a +0x210:  mov    %eax,0x4(%esp)
08abfa1e +0x214:  mov    %ebx,(%esp)
08abfa21 +0x217:  call   08abfcb2 <+0x4a8>
08abfa26 +0x21c:  mov    %ebx,%eax
08abfa28 +0x21e:  add    $0x14,%esp
08abfa2b +0x221:  pop    %ebx
08abfa2c +0x222:  pop    %ebp
08abfa2d +0x223:  ret    $0x4
08abfa30 +0x226:  push   %ebp
08abfa31 +0x227:  mov    %esp,%ebp
08abfa33 +0x229:  mov    0x8(%ebp),%eax
08abfa36 +0x22c:  pop    %ebp
08abfa37 +0x22d:  ret
08abfa38 +0x22e:  push   %ebp
08abfa39 +0x22f:  mov    %esp,%ebp
08abfa3b +0x231:  push   %esi
08abfa3c +0x232:  push   %ebx
08abfa3d +0x233:  sub    $0x50,%esp
08abfa40 +0x236:  mov    0x8(%ebp),%ebx
08abfa43 +0x239:  mov    0xc(%ebp),%eax
08abfa46 +0x23c:  mov    %eax,(%esp)
08abfa49 +0x23f:  call   080e2e00 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xba6>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xba6
08abfa4e +0x244:  mov    %eax,-0x14(%ebp)
08abfa51 +0x247:  mov    0xc(%ebp),%eax
08abfa54 +0x24a:  mov    %eax,(%esp)
08abfa57 +0x24d:  call   08abfc08 <+0x3fe>
08abfa5c +0x252:  mov    %eax,-0x10(%ebp)
08abfa5f +0x255:  movb   $0x1,-0x9(%ebp)
08abfa63 +0x259:  jmp    08abfac1 <+0x2b7>
08abfa65 +0x25b:  mov    -0x14(%ebp),%eax
08abfa68 +0x25e:  mov    %eax,-0x10(%ebp)
08abfa6b +0x261:  mov    -0x14(%ebp),%eax
08abfa6e +0x264:  mov    %eax,(%esp)
08abfa71 +0x267:  call   08abfcc8 <+0x4be>
08abfa76 +0x26c:  mov    %eax,%esi
08abfa78 +0x26e:  mov    0x10(%ebp),%eax
08abfa7b +0x271:  mov    %eax,0x4(%esp)
08abfa7f +0x275:  lea    -0x2d(%ebp),%eax
08abfa82 +0x278:  mov    %eax,(%esp)
08abfa85 +0x27b:  call   08abfcc0 <+0x4b6>
08abfa8a +0x280:  mov    0xc(%ebp),%edx
08abfa8d +0x283:  mov    %esi,0x8(%esp)
08abfa91 +0x287:  mov    %eax,0x4(%esp)
08abfa95 +0x28b:  mov    %edx,(%esp)
08abfa98 +0x28e:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08abfa9d +0x293:  mov    %al,-0x9(%ebp)
08abfaa0 +0x296:  cmpb   $0x0,-0x9(%ebp)
08abfaa4 +0x29a:  je     08abfab3 <+0x2a9>
08abfaa6 +0x29c:  mov    -0x14(%ebp),%eax
08abfaa9 +0x29f:  mov    %eax,(%esp)
08abfaac +0x2a2:  call   080e398c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1732>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1732
08abfab1 +0x2a7:  jmp    08abfabe <+0x2b4>
08abfab3 +0x2a9:  mov    -0x14(%ebp),%eax
08abfab6 +0x2ac:  mov    %eax,(%esp)
08abfab9 +0x2af:  call   080e3981 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1727>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1727
08abfabe +0x2b4:  mov    %eax,-0x14(%ebp)
08abfac1 +0x2b7:  cmpl   $0x0,-0x14(%ebp)
08abfac5 +0x2bb:  setne  %al
08abfac8 +0x2be:  test   %al,%al
08abfaca +0x2c0:  jne    08abfa65 <+0x25b>
08abfacc +0x2c2:  mov    -0x10(%ebp),%eax
08abfacf +0x2c5:  mov    %eax,0x4(%esp)
08abfad3 +0x2c9:  lea    -0x34(%ebp),%eax
08abfad6 +0x2cc:  mov    %eax,(%esp)
08abfad9 +0x2cf:  call   08abfcb2 <+0x4a8>
08abfade +0x2d4:  cmpb   $0x0,-0x9(%ebp)
08abfae2 +0x2d8:  je     08abfb63 <+0x359>
08abfae4 +0x2da:  lea    -0x2c(%ebp),%eax
08abfae7 +0x2dd:  mov    0xc(%ebp),%edx
08abfaea +0x2e0:  mov    %edx,0x4(%esp)
08abfaee +0x2e4:  mov    %eax,(%esp)
08abfaf1 +0x2e7:  call   08abfcea <+0x4e0>
08abfaf6 +0x2ec:  sub    $0x4,%esp
08abfaf9 +0x2ef:  lea    -0x2c(%ebp),%eax
08abfafc +0x2f2:  mov    %eax,0x4(%esp)
08abfb00 +0x2f6:  lea    -0x34(%ebp),%eax
08abfb03 +0x2f9:  mov    %eax,(%esp)
08abfb06 +0x2fc:  call   08abf8bc <+0xb2>
08abfb0b +0x301:  test   %al,%al
08abfb0d +0x303:  je     08abfb58 <+0x34e>
08abfb0f +0x305:  movb   $0x1,-0x25(%ebp)
08abfb13 +0x309:  mov    -0x10(%ebp),%ecx
08abfb16 +0x30c:  mov    -0x14(%ebp),%edx
08abfb19 +0x30f:  lea    -0x24(%ebp),%eax
08abfb1c +0x312:  mov    0x10(%ebp),%esi
08abfb1f +0x315:  mov    %esi,0x10(%esp)
08abfb23 +0x319:  mov    %ecx,0xc(%esp)
08abfb27 +0x31d:  mov    %edx,0x8(%esp)
08abfb2b +0x321:  mov    0xc(%ebp),%edx
08abfb2e +0x324:  mov    %edx,0x4(%esp)
08abfb32 +0x328:  mov    %eax,(%esp)
08abfb35 +0x32b:  call   08abfd10 <+0x506>
08abfb3a +0x330:  sub    $0x4,%esp
08abfb3d +0x333:  lea    -0x25(%ebp),%eax
08abfb40 +0x336:  mov    %eax,0x8(%esp)
08abfb44 +0x33a:  lea    -0x24(%ebp),%eax
08abfb47 +0x33d:  mov    %eax,0x4(%esp)
08abfb4b +0x341:  mov    %ebx,(%esp)
08abfb4e +0x344:  call   08abfdd8 <+0x5ce>
08abfb53 +0x349:  jmp    08abfbf9 <+0x3ef>
08abfb58 +0x34e:  lea    -0x34(%ebp),%eax
08abfb5b +0x351:  mov    %eax,(%esp)
08abfb5e +0x354:  call   08abfe06 <+0x5fc>
08abfb63 +0x359:  mov    0x10(%ebp),%eax
08abfb66 +0x35c:  mov    %eax,0x4(%esp)
08abfb6a +0x360:  lea    -0x1e(%ebp),%eax
08abfb6d +0x363:  mov    %eax,(%esp)
08abfb70 +0x366:  call   08abfcc0 <+0x4b6>
08abfb75 +0x36b:  mov    %eax,%esi
08abfb77 +0x36d:  mov    -0x34(%ebp),%eax
08abfb7a +0x370:  mov    %eax,(%esp)
08abfb7d +0x373:  call   08abfc90 <+0x486>
08abfb82 +0x378:  mov    0xc(%ebp),%edx
08abfb85 +0x37b:  mov    %esi,0x8(%esp)
08abfb89 +0x37f:  mov    %eax,0x4(%esp)
08abfb8d +0x383:  mov    %edx,(%esp)
08abfb90 +0x386:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08abfb95 +0x38b:  test   %al,%al
08abfb97 +0x38d:  je     08abfbdf <+0x3d5>
08abfb99 +0x38f:  movb   $0x1,-0x1d(%ebp)
08abfb9d +0x393:  mov    -0x10(%ebp),%ecx
08abfba0 +0x396:  mov    -0x14(%ebp),%edx
08abfba3 +0x399:  lea    -0x1c(%ebp),%eax
08abfba6 +0x39c:  mov    0x10(%ebp),%esi
08abfba9 +0x39f:  mov    %esi,0x10(%esp)
08abfbad +0x3a3:  mov    %ecx,0xc(%esp)
08abfbb1 +0x3a7:  mov    %edx,0x8(%esp)
08abfbb5 +0x3ab:  mov    0xc(%ebp),%edx
08abfbb8 +0x3ae:  mov    %edx,0x4(%esp)
08abfbbc +0x3b2:  mov    %eax,(%esp)
08abfbbf +0x3b5:  call   08abfd10 <+0x506>
08abfbc4 +0x3ba:  sub    $0x4,%esp
08abfbc7 +0x3bd:  lea    -0x1d(%ebp),%eax
08abfbca +0x3c0:  mov    %eax,0x8(%esp)
08abfbce +0x3c4:  lea    -0x1c(%ebp),%eax
08abfbd1 +0x3c7:  mov    %eax,0x4(%esp)
08abfbd5 +0x3cb:  mov    %ebx,(%esp)
08abfbd8 +0x3ce:  call   08abfdd8 <+0x5ce>
08abfbdd +0x3d3:  jmp    08abfbf9 <+0x3ef>
08abfbdf +0x3d5:  movb   $0x0,-0x15(%ebp)
08abfbe3 +0x3d9:  lea    -0x15(%ebp),%eax
08abfbe6 +0x3dc:  mov    %eax,0x8(%esp)
08abfbea +0x3e0:  lea    -0x34(%ebp),%eax
08abfbed +0x3e3:  mov    %eax,0x4(%esp)
08abfbf1 +0x3e7:  mov    %ebx,(%esp)
08abfbf4 +0x3ea:  call   08abfe24 <+0x61a>
08abfbf9 +0x3ef:  mov    %ebx,%eax
08abfbfb +0x3f1:  lea    -0x8(%ebp),%esp
08abfbfe +0x3f4:  add    $0x0,%esp
08abfc01 +0x3f7:  pop    %ebx
08abfc02 +0x3f8:  pop    %esi
08abfc03 +0x3f9:  pop    %ebp
08abfc04 +0x3fa:  ret    $0x4
08abfc07 +0x3fd:  nop
08abfc08 +0x3fe:  push   %ebp
08abfc09 +0x3ff:  mov    %esp,%ebp
08abfc0b +0x401:  mov    0x8(%ebp),%eax
08abfc0e +0x404:  add    $0x4,%eax
08abfc11 +0x407:  pop    %ebp
08abfc12 +0x408:  ret
08abfc13 +0x409:  nop
08abfc14 +0x40a:  push   %ebp
08abfc15 +0x40b:  mov    %esp,%ebp
08abfc17 +0x40d:  push   %ebx
08abfc18 +0x40e:  sub    $0x14,%esp
08abfc1b +0x411:  mov    0x8(%ebp),%ebx
08abfc1e +0x414:  jmp    08abfc6c <+0x462>
08abfc20 +0x416:  mov    0x10(%ebp),%eax
08abfc23 +0x419:  mov    %eax,(%esp)
08abfc26 +0x41c:  call   08abfcc8 <+0x4be>
08abfc2b +0x421:  mov    0xc(%ebp),%edx
08abfc2e +0x424:  mov    0x18(%ebp),%ecx
08abfc31 +0x427:  mov    %ecx,0x8(%esp)
08abfc35 +0x42b:  mov    %eax,0x4(%esp)
08abfc39 +0x42f:  mov    %edx,(%esp)
08abfc3c +0x432:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08abfc41 +0x437:  xor    $0x1,%eax
08abfc44 +0x43a:  test   %al,%al
08abfc46 +0x43c:  je     08abfc5e <+0x454>
08abfc48 +0x43e:  mov    0x10(%ebp),%eax
08abfc4b +0x441:  mov    %eax,0x14(%ebp)
08abfc4e +0x444:  mov    0x10(%ebp),%eax
08abfc51 +0x447:  mov    %eax,(%esp)
08abfc54 +0x44a:  call   080e398c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1732>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1732
08abfc59 +0x44f:  mov    %eax,0x10(%ebp)
08abfc5c +0x452:  jmp    08abfc6c <+0x462>
08abfc5e +0x454:  mov    0x10(%ebp),%eax
08abfc61 +0x457:  mov    %eax,(%esp)
08abfc64 +0x45a:  call   080e3981 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1727>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1727
08abfc69 +0x45f:  mov    %eax,0x10(%ebp)
08abfc6c +0x462:  cmpl   $0x0,0x10(%ebp)
08abfc70 +0x466:  setne  %al
08abfc73 +0x469:  test   %al,%al
08abfc75 +0x46b:  jne    08abfc20 <+0x416>
08abfc77 +0x46d:  mov    0x14(%ebp),%eax
08abfc7a +0x470:  mov    %eax,0x4(%esp)
08abfc7e +0x474:  mov    %ebx,(%esp)
08abfc81 +0x477:  call   08abfcb2 <+0x4a8>
08abfc86 +0x47c:  mov    %ebx,%eax
08abfc88 +0x47e:  add    $0x14,%esp
08abfc8b +0x481:  pop    %ebx
08abfc8c +0x482:  pop    %ebp
08abfc8d +0x483:  ret    $0x4
08abfc90 +0x486:  push   %ebp
08abfc91 +0x487:  mov    %esp,%ebp
08abfc93 +0x489:  sub    $0x28,%esp
08abfc96 +0x48c:  mov    0x8(%ebp),%eax
08abfc99 +0x48f:  mov    %eax,(%esp)
08abfc9c +0x492:  call   08abfe52 <+0x648>
08abfca1 +0x497:  mov    %eax,0x4(%esp)
08abfca5 +0x49b:  lea    -0x9(%ebp),%eax
08abfca8 +0x49e:  mov    %eax,(%esp)
08abfcab +0x4a1:  call   08abfcc0 <+0x4b6>
08abfcb0 +0x4a6:  leave
08abfcb1 +0x4a7:  ret
08abfcb2 +0x4a8:  push   %ebp
08abfcb3 +0x4a9:  mov    %esp,%ebp
08abfcb5 +0x4ab:  mov    0xc(%ebp),%edx
08abfcb8 +0x4ae:  mov    0x8(%ebp),%eax
08abfcbb +0x4b1:  mov    %edx,(%eax)
08abfcbd +0x4b3:  pop    %ebp
08abfcbe +0x4b4:  ret
08abfcbf +0x4b5:  nop
08abfcc0 +0x4b6:  push   %ebp
08abfcc1 +0x4b7:  mov    %esp,%ebp
08abfcc3 +0x4b9:  mov    0xc(%ebp),%eax
08abfcc6 +0x4bc:  pop    %ebp
08abfcc7 +0x4bd:  ret
08abfcc8 +0x4be:  push   %ebp
08abfcc9 +0x4bf:  mov    %esp,%ebp
08abfccb +0x4c1:  sub    $0x28,%esp
08abfcce +0x4c4:  mov    0x8(%ebp),%eax
08abfcd1 +0x4c7:  mov    %eax,(%esp)
08abfcd4 +0x4ca:  call   08abfe5d <+0x653>
08abfcd9 +0x4cf:  mov    %eax,0x4(%esp)
08abfcdd +0x4d3:  lea    -0x9(%ebp),%eax
08abfce0 +0x4d6:  mov    %eax,(%esp)
08abfce3 +0x4d9:  call   08abfcc0 <+0x4b6>
08abfce8 +0x4de:  leave
08abfce9 +0x4df:  ret
08abfcea +0x4e0:  push   %ebp
08abfceb +0x4e1:  mov    %esp,%ebp
08abfced +0x4e3:  push   %ebx
08abfcee +0x4e4:  sub    $0x14,%esp
08abfcf1 +0x4e7:  mov    0x8(%ebp),%ebx
08abfcf4 +0x4ea:  mov    0xc(%ebp),%eax
08abfcf7 +0x4ed:  mov    0xc(%eax),%eax
08abfcfa +0x4f0:  mov    %eax,0x4(%esp)
08abfcfe +0x4f4:  mov    %ebx,(%esp)
08abfd01 +0x4f7:  call   08abfcb2 <+0x4a8>
08abfd06 +0x4fc:  mov    %ebx,%eax
08abfd08 +0x4fe:  add    $0x14,%esp
08abfd0b +0x501:  pop    %ebx
08abfd0c +0x502:  pop    %ebp
08abfd0d +0x503:  ret    $0x4
08abfd10 +0x506:  push   %ebp
08abfd11 +0x507:  mov    %esp,%ebp
08abfd13 +0x509:  push   %esi
08abfd14 +0x50a:  push   %ebx
08abfd15 +0x50b:  sub    $0x20,%esp
08abfd18 +0x50e:  mov    0x8(%ebp),%esi
08abfd1b +0x511:  cmpl   $0x0,0x10(%ebp)
08abfd1f +0x515:  jne    08abfd67 <+0x55d>
08abfd21 +0x517:  mov    0xc(%ebp),%eax
08abfd24 +0x51a:  mov    %eax,(%esp)
08abfd27 +0x51d:  call   08abfc08 <+0x3fe>
08abfd2c +0x522:  cmp    0x14(%ebp),%eax
08abfd2f +0x525:  je     08abfd67 <+0x55d>
08abfd31 +0x527:  mov    0x14(%ebp),%eax
08abfd34 +0x52a:  mov    %eax,(%esp)
08abfd37 +0x52d:  call   08abfc90 <+0x486>
08abfd3c +0x532:  mov    %eax,%ebx
08abfd3e +0x534:  mov    0x18(%ebp),%eax
08abfd41 +0x537:  mov    %eax,0x4(%esp)
08abfd45 +0x53b:  lea    -0xe(%ebp),%eax
08abfd48 +0x53e:  mov    %eax,(%esp)
08abfd4b +0x541:  call   08abfcc0 <+0x4b6>
08abfd50 +0x546:  mov    0xc(%ebp),%edx
08abfd53 +0x549:  mov    %ebx,0x8(%esp)
08abfd57 +0x54d:  mov    %eax,0x4(%esp)
08abfd5b +0x551:  mov    %edx,(%esp)
08abfd5e +0x554:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
08abfd63 +0x559:  test   %al,%al
08abfd65 +0x55b:  je     08abfd6e <+0x564>
08abfd67 +0x55d:  mov    $0x1,%eax
08abfd6c +0x562:  jmp    08abfd73 <+0x569>
08abfd6e +0x564:  mov    $0x0,%eax
08abfd73 +0x569:  mov    %al,-0xd(%ebp)
08abfd76 +0x56c:  mov    0x18(%ebp),%eax
08abfd79 +0x56f:  mov    %eax,0x4(%esp)
08abfd7d +0x573:  mov    0xc(%ebp),%eax
08abfd80 +0x576:  mov    %eax,(%esp)
08abfd83 +0x579:  call   08abfe68 <+0x65e>
08abfd88 +0x57e:  mov    %eax,-0xc(%ebp)
08abfd8b +0x581:  mov    0xc(%ebp),%eax
08abfd8e +0x584:  lea    0x4(%eax),%ecx
08abfd91 +0x587:  mov    -0xc(%ebp),%edx
08abfd94 +0x58a:  movzbl -0xd(%ebp),%eax
08abfd98 +0x58e:  mov    %ecx,0xc(%esp)
08abfd9c +0x592:  mov    0x14(%ebp),%ecx
08abfd9f +0x595:  mov    %ecx,0x8(%esp)
08abfda3 +0x599:  mov    %edx,0x4(%esp)
08abfda7 +0x59d:  mov    %eax,(%esp)
08abfdaa +0x5a0:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08abfdaf +0x5a5:  mov    0xc(%ebp),%eax
08abfdb2 +0x5a8:  mov    0x14(%eax),%eax
08abfdb5 +0x5ab:  lea    0x1(%eax),%edx
08abfdb8 +0x5ae:  mov    0xc(%ebp),%eax
08abfdbb +0x5b1:  mov    %edx,0x14(%eax)
08abfdbe +0x5b4:  mov    -0xc(%ebp),%eax
08abfdc1 +0x5b7:  mov    %eax,0x4(%esp)
08abfdc5 +0x5bb:  mov    %esi,(%esp)
08abfdc8 +0x5be:  call   08abfcb2 <+0x4a8>
08abfdcd +0x5c3:  mov    %esi,%eax
08abfdcf +0x5c5:  add    $0x20,%esp
08abfdd2 +0x5c8:  pop    %ebx
08abfdd3 +0x5c9:  pop    %esi
08abfdd4 +0x5ca:  pop    %ebp
08abfdd5 +0x5cb:  ret    $0x4
08abfdd8 +0x5ce:  push   %ebp
08abfdd9 +0x5cf:  mov    %esp,%ebp
08abfddb +0x5d1:  sub    $0x18,%esp
08abfdde +0x5d4:  mov    0xc(%ebp),%eax
08abfde1 +0x5d7:  mov    %eax,(%esp)
08abfde4 +0x5da:  call   08abfee9 <+0x6df>
08abfde9 +0x5df:  mov    0x8(%ebp),%edx
08abfdec +0x5e2:  mov    (%eax),%eax
08abfdee +0x5e4:  mov    %eax,(%edx)
08abfdf0 +0x5e6:  mov    0x10(%ebp),%eax
08abfdf3 +0x5e9:  mov    %eax,(%esp)
08abfdf6 +0x5ec:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08abfdfb +0x5f1:  movzbl (%eax),%edx
08abfdfe +0x5f4:  mov    0x8(%ebp),%eax
08abfe01 +0x5f7:  mov    %dl,0x4(%eax)
08abfe04 +0x5fa:  leave
08abfe05 +0x5fb:  ret
08abfe06 +0x5fc:  push   %ebp
08abfe07 +0x5fd:  mov    %esp,%ebp
08abfe09 +0x5ff:  sub    $0x18,%esp
08abfe0c +0x602:  mov    0x8(%ebp),%eax
08abfe0f +0x605:  mov    (%eax),%eax
08abfe11 +0x607:  mov    %eax,(%esp)
08abfe14 +0x60a:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08abfe19 +0x60f:  mov    0x8(%ebp),%edx
08abfe1c +0x612:  mov    %eax,(%edx)
08abfe1e +0x614:  mov    0x8(%ebp),%eax
08abfe21 +0x617:  leave
08abfe22 +0x618:  ret
08abfe23 +0x619:  nop
08abfe24 +0x61a:  push   %ebp
08abfe25 +0x61b:  mov    %esp,%ebp
08abfe27 +0x61d:  sub    $0x18,%esp
08abfe2a +0x620:  mov    0xc(%ebp),%eax
08abfe2d +0x623:  mov    %eax,(%esp)
08abfe30 +0x626:  call   08abfef1 <+0x6e7>
08abfe35 +0x62b:  mov    0x8(%ebp),%edx
08abfe38 +0x62e:  mov    (%eax),%eax
08abfe3a +0x630:  mov    %eax,(%edx)
08abfe3c +0x632:  mov    0x10(%ebp),%eax
08abfe3f +0x635:  mov    %eax,(%esp)
08abfe42 +0x638:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08abfe47 +0x63d:  movzbl (%eax),%edx
08abfe4a +0x640:  mov    0x8(%ebp),%eax
08abfe4d +0x643:  mov    %dl,0x4(%eax)
08abfe50 +0x646:  leave
08abfe51 +0x647:  ret
08abfe52 +0x648:  push   %ebp
08abfe53 +0x649:  mov    %esp,%ebp
08abfe55 +0x64b:  mov    0x8(%ebp),%eax
08abfe58 +0x64e:  add    $0x10,%eax
08abfe5b +0x651:  pop    %ebp
08abfe5c +0x652:  ret
08abfe5d +0x653:  push   %ebp
08abfe5e +0x654:  mov    %esp,%ebp
08abfe60 +0x656:  mov    0x8(%ebp),%eax
08abfe63 +0x659:  add    $0x10,%eax
08abfe66 +0x65c:  pop    %ebp
08abfe67 +0x65d:  ret
08abfe68 +0x65e:  push   %ebp
08abfe69 +0x65f:  mov    %esp,%ebp
08abfe6b +0x661:  push   %esi
08abfe6c +0x662:  push   %ebx
08abfe6d +0x663:  sub    $0x20,%esp
08abfe70 +0x666:  mov    0x8(%ebp),%eax
08abfe73 +0x669:  mov    %eax,(%esp)
08abfe76 +0x66c:  call   08abfefa <+0x6f0>
08abfe7b +0x671:  mov    %eax,-0xc(%ebp)
08abfe7e +0x674:  mov    0xc(%ebp),%eax
08abfe81 +0x677:  mov    %eax,(%esp)
08abfe84 +0x67a:  call   08abff1d <+0x713>
08abfe89 +0x67f:  mov    %eax,%ebx
08abfe8b +0x681:  mov    0x8(%ebp),%eax
08abfe8e +0x684:  mov    %eax,(%esp)
08abfe91 +0x687:  call   080e409a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1e40>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1e40
08abfe96 +0x68c:  mov    %ebx,0x8(%esp)
08abfe9a +0x690:  mov    -0xc(%ebp),%edx
08abfe9d +0x693:  mov    %edx,0x4(%esp)
08abfea1 +0x697:  mov    %eax,(%esp)
08abfea4 +0x69a:  call   08abff26 <+0x71c>
08abfea9 +0x69f:  jmp    08abfedf <+0x6d5>
08abfeab +0x6a1:  mov    %eax,(%esp)
08abfeae +0x6a4:  call   08725ce0 <__cxa_begin_catch>
08abfeb3 +0x6a9:  mov    -0xc(%ebp),%eax
08abfeb6 +0x6ac:  mov    %eax,0x4(%esp)
08abfeba +0x6b0:  mov    0x8(%ebp),%eax
08abfebd +0x6b3:  mov    %eax,(%esp)
08abfec0 +0x6b6:  call   080e40bc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1e62>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1e62
08abfec5 +0x6bb:  call   08724be0 <__cxa_rethrow>
08abfeca +0x6c0:  mov    %edx,%ebx
08abfecc +0x6c2:  mov    %eax,%esi
08abfece +0x6c4:  call   08725c30 <__cxa_end_catch>
08abfed3 +0x6c9:  mov    %esi,%eax
08abfed5 +0x6cb:  mov    %ebx,%edx
08abfed7 +0x6cd:  mov    %eax,(%esp)
08abfeda +0x6d0:  call   08ae3750 <_Unwind_Resume>
08abfedf +0x6d5:  mov    -0xc(%ebp),%eax
08abfee2 +0x6d8:  add    $0x20,%esp
08abfee5 +0x6db:  pop    %ebx
08abfee6 +0x6dc:  pop    %esi
08abfee7 +0x6dd:  pop    %ebp
08abfee8 +0x6de:  ret
08abfee9 +0x6df:  push   %ebp
08abfeea +0x6e0:  mov    %esp,%ebp
08abfeec +0x6e2:  mov    0x8(%ebp),%eax
08abfeef +0x6e5:  pop    %ebp
08abfef0 +0x6e6:  ret
08abfef1 +0x6e7:  push   %ebp
08abfef2 +0x6e8:  mov    %esp,%ebp
08abfef4 +0x6ea:  mov    0x8(%ebp),%eax
08abfef7 +0x6ed:  pop    %ebp
08abfef8 +0x6ee:  ret
08abfef9 +0x6ef:  nop
08abfefa +0x6f0:  push   %ebp
08abfefb +0x6f1:  mov    %esp,%ebp
08abfefd +0x6f3:  sub    $0x18,%esp
08abff00 +0x6f6:  mov    0x8(%ebp),%eax
08abff03 +0x6f9:  movl   $0x0,0x8(%esp)
08abff0b +0x701:  movl   $0x1,0x4(%esp)
08abff13 +0x709:  mov    %eax,(%esp)
08abff16 +0x70c:  call   08abff66 <+0x75c>
08abff1b +0x711:  leave
08abff1c +0x712:  ret
08abff1d +0x713:  push   %ebp
08abff1e +0x714:  mov    %esp,%ebp
08abff20 +0x716:  mov    0x8(%ebp),%eax
08abff23 +0x719:  pop    %ebp
08abff24 +0x71a:  ret
08abff25 +0x71b:  nop
08abff26 +0x71c:  push   %ebp
08abff27 +0x71d:  mov    %esp,%ebp
08abff29 +0x71f:  push   %ebx
08abff2a +0x720:  sub    $0x14,%esp
08abff2d +0x723:  mov    0x10(%ebp),%eax
08abff30 +0x726:  mov    %eax,(%esp)
08abff33 +0x729:  call   08abff1d <+0x713>
08abff38 +0x72e:  mov    %eax,%ebx
08abff3a +0x730:  mov    0xc(%ebp),%eax
08abff3d +0x733:  mov    %eax,0x4(%esp)
08abff41 +0x737:  movl   $0x18,(%esp)
08abff48 +0x73e:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08abff4d +0x743:  mov    %eax,%edx
08abff4f +0x745:  test   %edx,%edx
08abff51 +0x747:  je     08abff5f <+0x755>
08abff53 +0x749:  mov    %ebx,0x4(%esp)
08abff57 +0x74d:  mov    %eax,(%esp)
08abff5a +0x750:  call   08abffa4 <+0x79a>
08abff5f +0x755:  add    $0x14,%esp
08abff62 +0x758:  pop    %ebx
08abff63 +0x759:  pop    %ebp
08abff64 +0x75a:  ret
08abff65 +0x75b:  nop
08abff66 +0x75c:  push   %ebp
08abff67 +0x75d:  mov    %esp,%ebp
08abff69 +0x75f:  sub    $0x18,%esp
08abff6c +0x762:  mov    0x8(%ebp),%eax
08abff6f +0x765:  mov    %eax,(%esp)
08abff72 +0x768:  call   08abffec <+0x7e2>
08abff77 +0x76d:  cmp    0xc(%ebp),%eax
08abff7a +0x770:  setb   %al
08abff7d +0x773:  movzbl %al,%eax
08abff80 +0x776:  test   %eax,%eax
08abff82 +0x778:  setne  %al
08abff85 +0x77b:  test   %al,%al
08abff87 +0x77d:  je     08abff8e <+0x784>
08abff89 +0x77f:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08abff8e +0x784:  mov    0xc(%ebp),%edx
08abff91 +0x787:  mov    %edx,%eax
08abff93 +0x789:  add    %eax,%eax
08abff95 +0x78b:  add    %edx,%eax
08abff97 +0x78d:  shl    $0x3,%eax
08abff9a +0x790:  mov    %eax,(%esp)
08abff9d +0x793:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08abffa2 +0x798:  leave
08abffa3 +0x799:  ret
08abffa4 +0x79a:  push   %ebp
08abffa5 +0x79b:  mov    %esp,%ebp
08abffa7 +0x79d:  sub    $0x18,%esp
08abffaa +0x7a0:  mov    0x8(%ebp),%eax
08abffad +0x7a3:  movl   $0x0,(%eax)
08abffb3 +0x7a9:  mov    0x8(%ebp),%eax
08abffb6 +0x7ac:  movl   $0x0,0x4(%eax)
08abffbd +0x7b3:  mov    0x8(%ebp),%eax
08abffc0 +0x7b6:  movl   $0x0,0x8(%eax)
08abffc7 +0x7bd:  mov    0x8(%ebp),%eax
08abffca +0x7c0:  movl   $0x0,0xc(%eax)
08abffd1 +0x7c7:  mov    0xc(%ebp),%eax
08abffd4 +0x7ca:  mov    %eax,(%esp)
08abffd7 +0x7cd:  call   08abff1d <+0x713>
08abffdc +0x7d2:  mov    0x8(%ebp),%ecx
08abffdf +0x7d5:  mov    0x4(%eax),%edx
08abffe2 +0x7d8:  mov    (%eax),%eax
08abffe4 +0x7da:  mov    %eax,0x10(%ecx)
08abffe7 +0x7dd:  mov    %edx,0x14(%ecx)
08abffea +0x7e0:  leave
08abffeb +0x7e1:  ret
08abffec +0x7e2:  push   %ebp
08abffed +0x7e3:  mov    %esp,%ebp
08abffef +0x7e5:  mov    $0xaaaaaaa,%eax
08abfff4 +0x7ea:  pop    %ebp
08abfff5 +0x7eb:  ret
08abfff6 +0x7ec:  nop
08abfff7 +0x7ed:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8abf80a

/* CerashopAddRestrict::readTime(short*) */

void CerashopAddRestrict::_GLOBAL__I_readTime(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
