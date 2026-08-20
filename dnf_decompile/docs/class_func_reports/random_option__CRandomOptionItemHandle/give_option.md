# give_option

`_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption`

`random_option::CRandomOptionItemHandle::give_option(unsigned long, ENUM_RARITY, int, int, int, RandomOption*)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f2cc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f2cc6  _ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption
#           random_option::CRandomOptionItemHandle::give_option(unsigned long, ENUM_RARITY, int, int, int, RandomOption*)
# range [0x085f2cc6, 0x085f333f]
085f2cc6 +0x000:  push   %ebp
085f2cc7 +0x001:  mov    %esp,%ebp
085f2cc9 +0x003:  push   %esi
085f2cca +0x004:  push   %ebx
085f2ccb +0x005:  sub    $0xd0,%esp
085f2cd1 +0x00b:  movb   $0x0,-0x61(%ebp)
085f2cd5 +0x00f:  movl   $0x0,-0x1c(%ebp)
085f2cdc +0x016:  lea    -0x61(%ebp),%eax
085f2cdf +0x019:  mov    %eax,0x14(%esp)
085f2ce3 +0x01d:  mov    0x1c(%ebp),%eax
085f2ce6 +0x020:  mov    %eax,0x10(%esp)
085f2cea +0x024:  mov    0x14(%ebp),%eax
085f2ced +0x027:  mov    %eax,0xc(%esp)
085f2cf1 +0x02b:  mov    0x10(%ebp),%eax
085f2cf4 +0x02e:  mov    %eax,0x8(%esp)
085f2cf8 +0x032:  mov    0xc(%ebp),%eax
085f2cfb +0x035:  mov    %eax,0x4(%esp)
085f2cff +0x039:  mov    0x8(%ebp),%eax
085f2d02 +0x03c:  mov    %eax,(%esp)
085f2d05 +0x03f:  call   085f2338 <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh>  ; random_option::CRandomOptionItemHandle::_get_option_type(unsigned long, ENUM_RARITY, int, int, unsigned char&)
085f2d0a +0x044:  mov    %eax,-0x1c(%ebp)
085f2d0d +0x047:  cmpl   $0x0,-0x1c(%ebp)
085f2d11 +0x04b:  setne  %al
085f2d14 +0x04e:  test   %al,%al
085f2d16 +0x050:  je     085f2d7c <+0xb6>
085f2d18 +0x052:  movzbl -0x61(%ebp),%eax
085f2d1c +0x056:  movzbl %al,%edx
085f2d1f +0x059:  mov    0x10(%ebp),%eax
085f2d22 +0x05c:  mov    -0x1c(%ebp),%ecx
085f2d25 +0x05f:  mov    %ecx,0x28(%esp)
085f2d29 +0x063:  mov    %edx,0x24(%esp)
085f2d2d +0x067:  mov    0x1c(%ebp),%edx
085f2d30 +0x06a:  mov    %edx,0x20(%esp)
085f2d34 +0x06e:  mov    0x14(%ebp),%edx
085f2d37 +0x071:  mov    %edx,0x1c(%esp)
085f2d3b +0x075:  mov    %eax,0x18(%esp)
085f2d3f +0x079:  mov    0xc(%ebp),%eax
085f2d42 +0x07c:  mov    %eax,0x14(%esp)
085f2d46 +0x080:  movl   $"_get_option_type (%d,%d,%d,%d,%d) error_line(%d)",0x10(%esp)
085f2d4e +0x088:  movl   $0x2f9,0xc(%esp)
085f2d56 +0x090:  movl   $&_ZZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOptionE19__PRETTY_FUNCTION__,0x8(%esp)
085f2d5e +0x098:  movl   $"RandomOption.cpp",0x4(%esp)
085f2d66 +0x0a0:  movl   $0x1,(%esp)
085f2d6d +0x0a7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f2d72 +0x0ac:  mov    $0x0,%ebx
085f2d77 +0x0b1:  jmp    085f3333 <+0x66d>
085f2d7c +0x0b6:  movl   $0x0,-0x68(%ebp)
085f2d83 +0x0bd:  movzbl -0x61(%ebp),%eax
085f2d87 +0x0c1:  movzbl %al,%eax
085f2d8a +0x0c4:  lea    -0x68(%ebp),%edx
085f2d8d +0x0c7:  mov    %edx,0x14(%esp)
085f2d91 +0x0cb:  mov    0x14(%ebp),%edx
085f2d94 +0x0ce:  mov    %edx,0x10(%esp)
085f2d98 +0x0d2:  mov    %eax,0xc(%esp)
085f2d9c +0x0d6:  mov    0x1c(%ebp),%eax
085f2d9f +0x0d9:  mov    %eax,0x8(%esp)
085f2da3 +0x0dd:  mov    0x10(%ebp),%eax
085f2da6 +0x0e0:  mov    %eax,0x4(%esp)
085f2daa +0x0e4:  mov    0x8(%ebp),%eax
085f2dad +0x0e7:  mov    %eax,(%esp)
085f2db0 +0x0ea:  call   085f25b0 <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi>  ; random_option::CRandomOptionItemHandle::_get_option_quantity(ENUM_RARITY, int, int, int, int&)
085f2db5 +0x0ef:  mov    %eax,-0x1c(%ebp)
085f2db8 +0x0f2:  cmpl   $0x0,-0x1c(%ebp)
085f2dbc +0x0f6:  setne  %al
085f2dbf +0x0f9:  test   %al,%al
085f2dc1 +0x0fb:  je     085f2e27 <+0x161>
085f2dc3 +0x0fd:  mov    -0x68(%ebp),%ecx
085f2dc6 +0x100:  movzbl -0x61(%ebp),%eax
085f2dca +0x104:  movzbl %al,%edx
085f2dcd +0x107:  mov    0x10(%ebp),%eax
085f2dd0 +0x10a:  mov    -0x1c(%ebp),%ebx
085f2dd3 +0x10d:  mov    %ebx,0x28(%esp)
085f2dd7 +0x111:  mov    %ecx,0x24(%esp)
085f2ddb +0x115:  mov    0x14(%ebp),%ecx
085f2dde +0x118:  mov    %ecx,0x20(%esp)
085f2de2 +0x11c:  mov    %edx,0x1c(%esp)
085f2de6 +0x120:  mov    0x1c(%ebp),%edx
085f2de9 +0x123:  mov    %edx,0x18(%esp)
085f2ded +0x127:  mov    %eax,0x14(%esp)
085f2df1 +0x12b:  movl   $"_get_option_quantity (%d,%d,%d,%d,%d) error_line(%d)",0x10(%esp)
085f2df9 +0x133:  movl   $0x300,0xc(%esp)
085f2e01 +0x13b:  movl   $&_ZZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOptionE19__PRETTY_FUNCTION__,0x8(%esp)
085f2e09 +0x143:  movl   $"RandomOption.cpp",0x4(%esp)
085f2e11 +0x14b:  movl   $0x1,(%esp)
085f2e18 +0x152:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f2e1d +0x157:  mov    $0x0,%ebx
085f2e22 +0x15c:  jmp    085f3333 <+0x66d>
085f2e27 +0x161:  mov    0x8(%ebp),%eax
085f2e2a +0x164:  mov    0x10(%eax),%eax
085f2e2d +0x167:  test   %eax,%eax
085f2e2f +0x169:  je     085f2e3a <+0x174>
085f2e31 +0x16b:  mov    0x8(%ebp),%eax
085f2e34 +0x16e:  mov    0x10(%eax),%eax
085f2e37 +0x171:  mov    %eax,-0x68(%ebp)
085f2e3a +0x174:  movl   $0x0,-0x6c(%ebp)
085f2e41 +0x17b:  movzbl -0x61(%ebp),%eax
085f2e45 +0x17f:  movzbl %al,%eax
085f2e48 +0x182:  lea    -0x6c(%ebp),%edx
085f2e4b +0x185:  mov    %edx,0x18(%esp)
085f2e4f +0x189:  mov    %eax,0x14(%esp)
085f2e53 +0x18d:  mov    0x14(%ebp),%eax
085f2e56 +0x190:  mov    %eax,0x10(%esp)
085f2e5a +0x194:  mov    0x18(%ebp),%eax
085f2e5d +0x197:  mov    %eax,0xc(%esp)
085f2e61 +0x19b:  mov    0x1c(%ebp),%eax
085f2e64 +0x19e:  mov    %eax,0x8(%esp)
085f2e68 +0x1a2:  mov    0x10(%ebp),%eax
085f2e6b +0x1a5:  mov    %eax,0x4(%esp)
085f2e6f +0x1a9:  mov    0x8(%ebp),%eax
085f2e72 +0x1ac:  mov    %eax,(%esp)
085f2e75 +0x1af:  call   085f2882 <_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi>  ; random_option::CRandomOptionItemHandle::_choose_option_group(ENUM_RARITY, int, int, int, int, int&)
085f2e7a +0x1b4:  mov    %eax,-0x1c(%ebp)
085f2e7d +0x1b7:  cmpl   $0x0,-0x1c(%ebp)
085f2e81 +0x1bb:  setne  %al
085f2e84 +0x1be:  test   %al,%al
085f2e86 +0x1c0:  je     085f2ef3 <+0x22d>
085f2e88 +0x1c2:  mov    -0x6c(%ebp),%ecx
085f2e8b +0x1c5:  movzbl -0x61(%ebp),%eax
085f2e8f +0x1c9:  movzbl %al,%edx
085f2e92 +0x1cc:  mov    0x10(%ebp),%eax
085f2e95 +0x1cf:  mov    -0x1c(%ebp),%ebx
085f2e98 +0x1d2:  mov    %ebx,0x2c(%esp)
085f2e9c +0x1d6:  mov    %ecx,0x28(%esp)
085f2ea0 +0x1da:  mov    %edx,0x24(%esp)
085f2ea4 +0x1de:  mov    0x14(%ebp),%edx
085f2ea7 +0x1e1:  mov    %edx,0x20(%esp)
085f2eab +0x1e5:  mov    0x18(%ebp),%edx
085f2eae +0x1e8:  mov    %edx,0x1c(%esp)
085f2eb2 +0x1ec:  mov    0x1c(%ebp),%edx
085f2eb5 +0x1ef:  mov    %edx,0x18(%esp)
085f2eb9 +0x1f3:  mov    %eax,0x14(%esp)
085f2ebd +0x1f7:  movl   $"_choose_option_group (%d,%d,%d,%d,%d,%d) error_line(%d)",0x10(%esp)
085f2ec5 +0x1ff:  movl   $0x30d,0xc(%esp)
085f2ecd +0x207:  movl   $&_ZZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOptionE19__PRETTY_FUNCTION__,0x8(%esp)
085f2ed5 +0x20f:  movl   $"RandomOption.cpp",0x4(%esp)
085f2edd +0x217:  movl   $0x1,(%esp)
085f2ee4 +0x21e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f2ee9 +0x223:  mov    $0x0,%ebx
085f2eee +0x228:  jmp    085f3333 <+0x66d>
085f2ef3 +0x22d:  lea    -0x78(%ebp),%eax
085f2ef6 +0x230:  mov    %eax,(%esp)
085f2ef9 +0x233:  call   085f419a <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x1b5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x1b5
085f2efe +0x238:  mov    0x10(%ebp),%eax
085f2f01 +0x23b:  mov    %al,-0x6e(%ebp)
085f2f04 +0x23e:  movzbl -0x61(%ebp),%eax
085f2f08 +0x242:  mov    %al,-0x6d(%ebp)
085f2f0b +0x245:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f2f10 +0x24a:  lea    0xf4(%eax),%ecx
085f2f16 +0x250:  lea    -0x7c(%ebp),%eax
085f2f19 +0x253:  lea    -0x6e(%ebp),%edx
085f2f1c +0x256:  mov    %edx,0x8(%esp)
085f2f20 +0x25a:  mov    %ecx,0x4(%esp)
085f2f24 +0x25e:  mov    %eax,(%esp)
085f2f27 +0x261:  call   085f4710 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x72b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x72b
085f2f2c +0x266:  sub    $0x4,%esp
085f2f2f +0x269:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f2f34 +0x26e:  lea    0xf4(%eax),%edx
085f2f3a +0x274:  lea    -0x60(%ebp),%eax
085f2f3d +0x277:  mov    %edx,0x4(%esp)
085f2f41 +0x27b:  mov    %eax,(%esp)
085f2f44 +0x27e:  call   085f473c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x757>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x757
085f2f49 +0x283:  sub    $0x4,%esp
085f2f4c +0x286:  lea    -0x60(%ebp),%eax
085f2f4f +0x289:  mov    %eax,0x4(%esp)
085f2f53 +0x28d:  lea    -0x7c(%ebp),%eax
085f2f56 +0x290:  mov    %eax,(%esp)
085f2f59 +0x293:  call   085f4762 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x77d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x77d
085f2f5e +0x298:  test   %al,%al
085f2f60 +0x29a:  je     085f2faa <+0x2e4>
085f2f62 +0x29c:  movzbl -0x61(%ebp),%eax
085f2f66 +0x2a0:  movzbl %al,%edx
085f2f69 +0x2a3:  mov    0x10(%ebp),%eax
085f2f6c +0x2a6:  mov    %edx,0x18(%esp)
085f2f70 +0x2aa:  mov    %eax,0x14(%esp)
085f2f74 +0x2ae:  movl   $"different_weight_ (%d,%d) ",0x10(%esp)
085f2f7c +0x2b6:  movl   $0x319,0xc(%esp)
085f2f84 +0x2be:  movl   $&_ZZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOptionE19__PRETTY_FUNCTION__,0x8(%esp)
085f2f8c +0x2c6:  movl   $"RandomOption.cpp",0x4(%esp)
085f2f94 +0x2ce:  movl   $0x1,(%esp)
085f2f9b +0x2d5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f2fa0 +0x2da:  mov    $0x0,%ebx
085f2fa5 +0x2df:  jmp    085f3333 <+0x66d>
085f2faa +0x2e4:  lea    -0x7c(%ebp),%eax
085f2fad +0x2e7:  mov    %eax,(%esp)
085f2fb0 +0x2ea:  call   085f4776 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x791>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x791
085f2fb5 +0x2ef:  mov    0x8(%eax),%edx
085f2fb8 +0x2f2:  mov    0x4(%eax),%eax
085f2fbb +0x2f5:  mov    %eax,-0x78(%ebp)
085f2fbe +0x2f8:  mov    %edx,-0x74(%ebp)
085f2fc1 +0x2fb:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f2fc6 +0x300:  lea    0x160(%eax),%ecx
085f2fcc +0x306:  lea    -0x80(%ebp),%eax
085f2fcf +0x309:  lea    -0x6c(%ebp),%edx
085f2fd2 +0x30c:  mov    %edx,0x8(%esp)
085f2fd6 +0x310:  mov    %ecx,0x4(%esp)
085f2fda +0x314:  mov    %eax,(%esp)
085f2fdd +0x317:  call   085f4784 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x79f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x79f
085f2fe2 +0x31c:  sub    $0x4,%esp
085f2fe5 +0x31f:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f2fea +0x324:  lea    0x160(%eax),%edx
085f2ff0 +0x32a:  lea    -0x5c(%ebp),%eax
085f2ff3 +0x32d:  mov    %edx,0x4(%esp)
085f2ff7 +0x331:  mov    %eax,(%esp)
085f2ffa +0x334:  call   085f47b0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x7cb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x7cb
085f2fff +0x339:  sub    $0x4,%esp
085f3002 +0x33c:  lea    -0x5c(%ebp),%eax
085f3005 +0x33f:  mov    %eax,0x4(%esp)
085f3009 +0x343:  lea    -0x80(%ebp),%eax
085f300c +0x346:  mov    %eax,(%esp)
085f300f +0x349:  call   085f47d6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x7f1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x7f1
085f3014 +0x34e:  test   %al,%al
085f3016 +0x350:  je     085f3055 <+0x38f>
085f3018 +0x352:  mov    -0x6c(%ebp),%eax
085f301b +0x355:  mov    %eax,0x14(%esp)
085f301f +0x359:  movl   $"option_group_ (%d) ",0x10(%esp)
085f3027 +0x361:  movl   $0x321,0xc(%esp)
085f302f +0x369:  movl   $&_ZZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOptionE19__PRETTY_FUNCTION__,0x8(%esp)
085f3037 +0x371:  movl   $"RandomOption.cpp",0x4(%esp)
085f303f +0x379:  movl   $0x1,(%esp)
085f3046 +0x380:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f304b +0x385:  mov    $0x0,%ebx
085f3050 +0x38a:  jmp    085f3333 <+0x66d>
085f3055 +0x38f:  lea    -0x80(%ebp),%eax
085f3058 +0x392:  mov    %eax,(%esp)
085f305b +0x395:  call   085f47ea <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x805>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x805
085f3060 +0x39a:  mov    0x10(%eax),%eax
085f3063 +0x39d:  mov    %eax,-0x18(%ebp)
085f3066 +0x3a0:  lea    -0x80(%ebp),%eax
085f3069 +0x3a3:  mov    %eax,(%esp)
085f306c +0x3a6:  call   085f47ea <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x805>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x805
085f3071 +0x3ab:  add    $0x4,%eax
085f3074 +0x3ae:  mov    %eax,0x4(%esp)
085f3078 +0x3b2:  lea    -0x8c(%ebp),%eax
085f307e +0x3b8:  mov    %eax,(%esp)
085f3081 +0x3bb:  call   085f47f8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x813>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x813
085f3086 +0x3c0:  movl   $0x0,-0x14(%ebp)
085f308d +0x3c7:  movl   $0x0,-0x10(%ebp)
085f3094 +0x3ce:  lea    -0x90(%ebp),%eax
085f309a +0x3d4:  mov    %eax,(%esp)
085f309d +0x3d7:  call   085f48ac <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8c7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8c7
085f30a2 +0x3dc:  movl   $0x0,-0xc(%ebp)
085f30a9 +0x3e3:  jmp    085f3284 <+0x5be>
085f30ae +0x3e8:  mov    -0x18(%ebp),%eax
085f30b1 +0x3eb:  mov    %eax,-0x58(%ebp)
085f30b4 +0x3ee:  mov    0x8(%ebp),%eax
085f30b7 +0x3f1:  mov    0x4(%eax),%eax
085f30ba +0x3f4:  lea    0x5808(%eax),%edx
085f30c0 +0x3fa:  lea    -0x58(%ebp),%eax
085f30c3 +0x3fd:  mov    %eax,0x4(%esp)
085f30c7 +0x401:  mov    %edx,(%esp)
085f30ca +0x404:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f30cf +0x409:  mov    %eax,-0x14(%ebp)
085f30d2 +0x40c:  mov    -0x14(%ebp),%eax
085f30d5 +0x40f:  mov    %eax,0x4(%esp)
085f30d9 +0x413:  lea    -0x44(%ebp),%eax
085f30dc +0x416:  mov    %eax,(%esp)
085f30df +0x419:  call   085f4904 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x91f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x91f
085f30e4 +0x41e:  lea    -0x34(%ebp),%eax
085f30e7 +0x421:  lea    -0x8c(%ebp),%edx
085f30ed +0x427:  mov    %edx,0x4(%esp)
085f30f1 +0x42b:  mov    %eax,(%esp)
085f30f4 +0x42e:  call   085f48de <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8f9>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8f9
085f30f9 +0x433:  sub    $0x4,%esp
085f30fc +0x436:  lea    -0x30(%ebp),%eax
085f30ff +0x439:  lea    -0x8c(%ebp),%edx
085f3105 +0x43f:  mov    %edx,0x4(%esp)
085f3109 +0x443:  mov    %eax,(%esp)
085f310c +0x446:  call   085f48ba <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8d5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8d5
085f3111 +0x44b:  sub    $0x4,%esp
085f3114 +0x44e:  lea    -0x54(%ebp),%eax
085f3117 +0x451:  mov    -0x44(%ebp),%edx
085f311a +0x454:  mov    %edx,0xc(%esp)
085f311e +0x458:  mov    -0x40(%ebp),%edx
085f3121 +0x45b:  mov    %edx,0x10(%esp)
085f3125 +0x45f:  mov    -0x3c(%ebp),%edx
085f3128 +0x462:  mov    %edx,0x14(%esp)
085f312c +0x466:  mov    -0x38(%ebp),%edx
085f312f +0x469:  mov    %edx,0x18(%esp)
085f3133 +0x46d:  mov    -0x34(%ebp),%edx
085f3136 +0x470:  mov    %edx,0x8(%esp)
085f313a +0x474:  mov    -0x30(%ebp),%edx
085f313d +0x477:  mov    %edx,0x4(%esp)
085f3141 +0x47b:  mov    %eax,(%esp)
085f3144 +0x47e:  call   085f492f <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x94a>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x94a
085f3149 +0x483:  sub    $0x4,%esp
085f314c +0x486:  lea    -0x54(%ebp),%eax
085f314f +0x489:  mov    %eax,(%esp)
085f3152 +0x48c:  call   085f49a0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9bb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9bb
085f3157 +0x491:  mov    %eax,-0x10(%ebp)
085f315a +0x494:  lea    -0x8c(%ebp),%eax
085f3160 +0x49a:  mov    %eax,(%esp)
085f3163 +0x49d:  call   085f49aa <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9c5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9c5
085f3168 +0x4a2:  cmp    -0x10(%ebp),%eax
085f316b +0x4a5:  setbe  %al
085f316e +0x4a8:  test   %al,%al
085f3170 +0x4aa:  jne    085f327f <+0x5b9>
085f3176 +0x4b0:  mov    -0x10(%ebp),%eax
085f3179 +0x4b3:  mov    %eax,-0x2c(%ebp)
085f317c +0x4b6:  lea    -0x28(%ebp),%eax
085f317f +0x4b9:  lea    -0x8c(%ebp),%edx
085f3185 +0x4bf:  mov    %edx,0x4(%esp)
085f3189 +0x4c3:  mov    %eax,(%esp)
085f318c +0x4c6:  call   085f48ba <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8d5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8d5
085f3191 +0x4cb:  sub    $0x4,%esp
085f3194 +0x4ce:  lea    -0x9c(%ebp),%eax
085f319a +0x4d4:  lea    -0x2c(%ebp),%edx
085f319d +0x4d7:  mov    %edx,0x8(%esp)
085f31a1 +0x4db:  lea    -0x28(%ebp),%edx
085f31a4 +0x4de:  mov    %edx,0x4(%esp)
085f31a8 +0x4e2:  mov    %eax,(%esp)
085f31ab +0x4e5:  call   085f49c6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9e1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9e1
085f31b0 +0x4ea:  sub    $0x4,%esp
085f31b3 +0x4ed:  mov    -0x9c(%ebp),%eax
085f31b9 +0x4f3:  mov    %eax,-0x90(%ebp)
085f31bf +0x4f9:  mov    -0xc(%ebp),%ebx
085f31c2 +0x4fc:  lea    -0x90(%ebp),%eax
085f31c8 +0x502:  mov    %eax,(%esp)
085f31cb +0x505:  call   085f49fc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xa17>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xa17
085f31d0 +0x50a:  mov    (%eax),%eax
085f31d2 +0x50c:  mov    %eax,%ecx
085f31d4 +0x50e:  mov    0x20(%ebp),%edx
085f31d7 +0x511:  mov    %ebx,%eax
085f31d9 +0x513:  add    %eax,%eax
085f31db +0x515:  add    %ebx,%eax
085f31dd +0x517:  mov    %cl,(%eax,%edx,1)
085f31e0 +0x51a:  mov    -0x18(%ebp),%ebx
085f31e3 +0x51d:  lea    -0x90(%ebp),%eax
085f31e9 +0x523:  mov    %eax,(%esp)
085f31ec +0x526:  call   085f49fc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xa17>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xa17
085f31f1 +0x52b:  mov    0x4(%eax),%eax
085f31f4 +0x52e:  mov    %ebx,%edx
085f31f6 +0x530:  sub    %eax,%edx
085f31f8 +0x532:  mov    %edx,%eax
085f31fa +0x534:  mov    %eax,-0x18(%ebp)
085f31fd +0x537:  lea    -0x24(%ebp),%eax
085f3200 +0x53a:  mov    -0x90(%ebp),%edx
085f3206 +0x540:  mov    %edx,0x8(%esp)
085f320a +0x544:  lea    -0x8c(%ebp),%edx
085f3210 +0x54a:  mov    %edx,0x4(%esp)
085f3214 +0x54e:  mov    %eax,(%esp)
085f3217 +0x551:  call   085f4a06 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xa21>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xa21
085f321c +0x556:  sub    $0x4,%esp
085f321f +0x559:  mov    -0xc(%ebp),%ebx
085f3222 +0x55c:  mov    -0x74(%ebp),%edx
085f3225 +0x55f:  mov    -0x78(%ebp),%eax
085f3228 +0x562:  mov    %edx,0x8(%esp)
085f322c +0x566:  mov    %eax,0x4(%esp)
085f3230 +0x56a:  mov    0x8(%ebp),%eax
085f3233 +0x56d:  mov    %eax,(%esp)
085f3236 +0x570:  call   085f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>  ; random_option::CRandomOptionItemHandle::_get_option_value(int, int)
085f323b +0x575:  mov    %eax,%edx
085f323d +0x577:  mov    0x20(%ebp),%ecx
085f3240 +0x57a:  mov    %ebx,%eax
085f3242 +0x57c:  add    %eax,%eax
085f3244 +0x57e:  add    %ebx,%eax
085f3246 +0x580:  lea    (%ecx,%eax,1),%eax
085f3249 +0x583:  add    $0x1,%eax
085f324c +0x586:  mov    %dl,(%eax)
085f324e +0x588:  mov    -0xc(%ebp),%ebx
085f3251 +0x58b:  mov    -0x74(%ebp),%edx
085f3254 +0x58e:  mov    -0x78(%ebp),%eax
085f3257 +0x591:  mov    %edx,0x8(%esp)
085f325b +0x595:  mov    %eax,0x4(%esp)
085f325f +0x599:  mov    0x8(%ebp),%eax
085f3262 +0x59c:  mov    %eax,(%esp)
085f3265 +0x59f:  call   085f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>  ; random_option::CRandomOptionItemHandle::_get_option_value(int, int)
085f326a +0x5a4:  mov    %eax,%edx
085f326c +0x5a6:  mov    0x20(%ebp),%ecx
085f326f +0x5a9:  mov    %ebx,%eax
085f3271 +0x5ab:  add    %eax,%eax
085f3273 +0x5ad:  add    %ebx,%eax
085f3275 +0x5af:  lea    (%ecx,%eax,1),%eax
085f3278 +0x5b2:  add    $0x2,%eax
085f327b +0x5b5:  mov    %dl,(%eax)
085f327d +0x5b7:  jmp    085f3280 <+0x5ba>
085f327f +0x5b9:  nop
085f3280 +0x5ba:  addl   $0x1,-0xc(%ebp)
085f3284 +0x5be:  mov    -0x68(%ebp),%eax
085f3287 +0x5c1:  cmp    %eax,-0xc(%ebp)
085f328a +0x5c4:  jge    085f3299 <+0x5d3>
085f328c +0x5c6:  cmpl   $0x2,-0xc(%ebp)
085f3290 +0x5ca:  jg     085f3299 <+0x5d3>
085f3292 +0x5cc:  mov    $0x1,%eax
085f3297 +0x5d1:  jmp    085f329e <+0x5d8>
085f3299 +0x5d3:  mov    $0x0,%eax
085f329e +0x5d8:  test   %al,%al
085f32a0 +0x5da:  jne    085f30ae <+0x3e8>
085f32a6 +0x5e0:  movzbl -0x61(%ebp),%eax
085f32aa +0x5e4:  mov    %eax,%edx
085f32ac +0x5e6:  and    $0x3,%edx
085f32af +0x5e9:  mov    0x20(%ebp),%eax
085f32b2 +0x5ec:  mov    %edx,%ecx
085f32b4 +0x5ee:  and    $0x3,%ecx
085f32b7 +0x5f1:  movzbl 0x9(%eax),%edx
085f32bb +0x5f5:  and    $0xfffffffc,%edx
085f32be +0x5f8:  or     %ecx,%edx
085f32c0 +0x5fa:  mov    %dl,0x9(%eax)
085f32c3 +0x5fd:  movl   $0x40,-0x20(%ebp)
085f32ca +0x604:  mov    0x8(%ebp),%eax
085f32cd +0x607:  mov    0x4(%eax),%eax
085f32d0 +0x60a:  lea    0x61d0(%eax),%edx
085f32d6 +0x610:  lea    -0x20(%ebp),%eax
085f32d9 +0x613:  mov    %eax,0x4(%esp)
085f32dd +0x617:  mov    %edx,(%esp)
085f32e0 +0x61a:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f32e5 +0x61f:  mov    %eax,%edx
085f32e7 +0x621:  and    $0x3f,%edx
085f32ea +0x624:  mov    0x20(%ebp),%eax
085f32ed +0x627:  lea    0x0(,%edx,4),%ecx
085f32f4 +0x62e:  movzbl 0x9(%eax),%edx
085f32f8 +0x632:  and    $0x3,%edx
085f32fb +0x635:  or     %ecx,%edx
085f32fd +0x637:  mov    %dl,0x9(%eax)
085f3300 +0x63a:  mov    $0x1,%ebx
085f3305 +0x63f:  lea    -0x8c(%ebp),%eax
085f330b +0x645:  mov    %eax,(%esp)
085f330e +0x648:  call   083860f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x15b94>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x15b94
085f3313 +0x64d:  jmp    085f3333 <+0x66d>
085f3315 +0x64f:  mov    %edx,%ebx
085f3317 +0x651:  mov    %eax,%esi
085f3319 +0x653:  lea    -0x8c(%ebp),%eax
085f331f +0x659:  mov    %eax,(%esp)
085f3322 +0x65c:  call   083860f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x15b94>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x15b94
085f3327 +0x661:  mov    %esi,%eax
085f3329 +0x663:  mov    %ebx,%edx
085f332b +0x665:  mov    %eax,(%esp)
085f332e +0x668:  call   08ae3750 <_Unwind_Resume>
085f3333 +0x66d:  mov    %ebx,%eax
085f3335 +0x66f:  lea    -0x8(%ebp),%esp
085f3338 +0x672:  add    $0x0,%esp
085f333b +0x675:  pop    %ebx
085f333c +0x676:  pop    %esi
085f333d +0x677:  pop    %ebp
085f333e +0x678:  ret
085f333f +0x679:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::give_option @ 0x85f2cc6

/* random_option::CRandomOptionItemHandle::give_option(unsigned long, ENUM_RARITY, int, int, int,
   RandomOption*) */

undefined4
random_option::CRandomOptionItemHandle::give_option
          (int param_1,undefined4 param_2,undefined1 param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int in_stack_0000001c;
  int local_e4 [2];
  int local_c8 [10];
  int local_a0 [3];
  int local_94;
  vector<OptionGroup,std::allocator<OptionGroup>> local_90 [12];
  _Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>> local_84 [4];
  _Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>> local_80 [4];
  undefined4 local_7c;
  int local_78;
  undefined1 local_72;
  byte local_71;
  undefined4 local_70;
  int local_6c;
  byte local_65;
  map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
  local_64 [4];
  map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
  local_60 [4];
  int local_5c;
  undefined1 local_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_65 = 0;
  local_20 = 0;
  local_20 = _get_option_type();
  if (local_20 == 0) {
    local_6c = 0;
    local_20 = _get_option_quantity();
    if (local_20 == 0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        local_6c = *(int *)(param_1 + 0x10);
      }
      local_70 = 0;
      local_20 = _choose_option_group();
      if (local_20 == 0) {
        DifferentWeightValue::DifferentWeightValue((DifferentWeightValue *)&local_7c);
        local_72 = param_3;
        local_71 = local_65;
        GetRandomOption();
        std::
        map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
        ::find((short *)local_80);
        GetRandomOption();
        std::
        map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
        ::end(local_64);
        cVar2 = std::_Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>>::
                operator==(local_80,(_Rb_tree_const_iterator *)local_64);
        if (cVar2 == '\0') {
          iVar4 = std::_Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>>::
                  operator->(local_80);
          local_78 = *(int *)(iVar4 + 8);
          local_7c = *(undefined4 *)(iVar4 + 4);
          GetRandomOption();
          std::
          map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
          ::find((int *)local_84);
          GetRandomOption();
          std::
          map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
          ::end(local_60);
          cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator==
                            (local_84,(_Rb_tree_const_iterator *)local_60);
          if (cVar2 == '\0') {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator->
                              (local_84);
            local_1c = *(int *)(iVar4 + 0x10);
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator->
                              (local_84);
            std::vector<OptionGroup,std::allocator<OptionGroup>>::vector
                      (local_90,(vector *)(iVar4 + 4));
            local_18 = 0;
            local_14 = 0;
            __gnu_cxx::
            __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>::
            __normal_iterator((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                               *)&local_94);
            local_10 = 0;
            piVar9 = (int *)&stack0xffffff24;
            while( true ) {
              if ((local_10 < local_6c) && (local_10 < 3)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (!bVar1) break;
              local_5c = local_1c;
              iVar4 = *(int *)(param_1 + 4);
              piVar9[1] = (int)&local_5c;
              *piVar9 = iVar4 + 0x5808;
              piVar9[-1] = 0x85f30cf;
              local_18 = CMTRand::randInt((CMTRand *)*piVar9,(ulong *)piVar9[1]);
              piVar9[1] = local_18;
              *piVar9 = (int)&local_48;
              piVar9[-1] = 0x85f30e4;
              CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)*piVar9,piVar9[1])
              ;
              piVar9[1] = (int)local_90;
              *piVar9 = (int)&local_38;
                    /* try { // try from 085f30f4 to 085f3269 has its CatchHandler @ 085f3315 */
              piVar9[-1] = 0x85f30f9;
              std::vector<OptionGroup,std::allocator<OptionGroup>>::end();
              piVar9[1] = (int)local_90;
              *piVar9 = (int)&local_34;
              piVar9[-1] = 0x85f3111;
              std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
              piVar9[3] = local_48;
              piVar9[4] = local_44;
              piVar9[5] = local_40;
              piVar9[6] = local_3c;
              piVar9[2] = local_38;
              piVar9[1] = local_34;
              *piVar9 = (int)local_58;
              piVar9[-1] = 0x85f3149;
              std::
              for_each<__gnu_cxx::__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>,CRandomList<unsigned_int>>
                        ();
              piVar9[-1] = (int)local_58;
              piVar9[-2] = 0x85f3157;
              local_14 = CRandomList<unsigned_int>::get_value
                                   ((CRandomList<unsigned_int> *)piVar9[-1]);
              piVar9[-1] = (int)local_90;
              piVar9[-2] = 0x85f3168;
              uVar5 = std::vector<OptionGroup,std::allocator<OptionGroup>>::size
                                ((vector<OptionGroup,std::allocator<OptionGroup>> *)piVar9[-1]);
              if (local_14 < uVar5) {
                local_30 = local_14;
                *piVar9 = (int)local_90;
                piVar9[-1] = (int)local_2c;
                piVar9[-2] = 0x85f3191;
                std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
                piVar9[1] = (int)&local_30;
                *piVar9 = (int)local_2c;
                piVar9[-1] = (int)local_a0;
                piVar9[-2] = 0x85f31b0;
                __gnu_cxx::
                __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                ::operator+((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                             *)piVar9[-1],(int *)*piVar9);
                iVar7 = local_10;
                local_94 = local_a0[0];
                piVar9[-1] = (int)&local_94;
                piVar9[-2] = 0x85f31d0;
                puVar6 = (undefined4 *)
                         __gnu_cxx::
                         __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                         ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                      *)piVar9[-1]);
                iVar4 = local_1c;
                *(char *)(iVar7 * 3 + in_stack_0000001c) = (char)*puVar6;
                piVar9[-1] = (int)&local_94;
                piVar9[-2] = 0x85f31f1;
                iVar7 = __gnu_cxx::
                        __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                        ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                     *)piVar9[-1]);
                local_1c = iVar4 - *(int *)(iVar7 + 4);
                piVar9[1] = local_94;
                *piVar9 = (int)local_90;
                piVar9[-1] = (int)local_28;
                piVar9[-2] = 0x85f321c;
                std::vector<OptionGroup,std::allocator<OptionGroup>>::erase();
                iVar4 = local_10;
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = param_1;
                piVar9[-2] = 0x85f323b;
                uVar3 = _get_option_value((CRandomOptionItemHandle *)piVar9[-1],*piVar9,piVar9[1]);
                iVar7 = local_10;
                *(undefined1 *)(in_stack_0000001c + iVar4 * 3 + 1) = uVar3;
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = param_1;
                piVar9[-2] = 0x85f326a;
                uVar3 = _get_option_value((CRandomOptionItemHandle *)piVar9[-1],*piVar9,piVar9[1]);
                *(undefined1 *)(in_stack_0000001c + iVar7 * 3 + 2) = uVar3;
              }
              local_10 = local_10 + 1;
              piVar9 = piVar9 + -1;
            }
            *(byte *)(in_stack_0000001c + 9) =
                 *(byte *)(in_stack_0000001c + 9) & 0xfc | local_65 & 3;
            local_24 = 0x40;
            iVar4 = *(int *)(param_1 + 4);
            piVar9[1] = (int)&local_24;
            *piVar9 = iVar4 + 0x61d0;
            piVar9[-1] = 0x85f32e5;
            cVar2 = CMTRand::randInt((CMTRand *)*piVar9,(ulong *)piVar9[1]);
            *(byte *)(in_stack_0000001c + 9) = *(byte *)(in_stack_0000001c + 9) & 3 | cVar2 * '\x04'
            ;
            uVar8 = 1;
            *piVar9 = (int)local_90;
            piVar9[-1] = 0x85f3313;
            std::vector<OptionGroup,std::allocator<OptionGroup>>::~vector
                      ((vector<OptionGroup,std::allocator<OptionGroup>> *)*piVar9);
          }
          else {
            LogManager::logFormat
                      (1,"RandomOption.cpp",
                       "bool random_option::CRandomOptionItemHandle::give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*)"
                       ,0x321,"option_group_ (%d) ");
            uVar8 = 0;
          }
        }
        else {
          LogManager::logFormat
                    (1,"RandomOption.cpp",
                     "bool random_option::CRandomOptionItemHandle::give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*)"
                     ,0x319,"different_weight_ (%d,%d) ");
          uVar8 = 0;
        }
      }
      else {
        LogManager::logFormat
                  (1,"RandomOption.cpp",
                   "bool random_option::CRandomOptionItemHandle::give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*)"
                   ,0x30d,"_choose_option_group (%d,%d,%d,%d,%d,%d) error_line(%d)");
        uVar8 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"RandomOption.cpp",
                 "bool random_option::CRandomOptionItemHandle::give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*)"
                 ,0x300,"_get_option_quantity (%d,%d,%d,%d,%d) error_line(%d)");
      uVar8 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"RandomOption.cpp",
               "bool random_option::CRandomOptionItemHandle::give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*)"
               ,0x2f9,"_get_option_type (%d,%d,%d,%d,%d) error_line(%d)");
    uVar8 = 0;
  }
  return uVar8;
}
```
