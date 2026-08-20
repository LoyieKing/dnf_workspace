# RegenVer_give_option

`_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi`

`random_option::CRandomOptionItemHandle::RegenVer_give_option(unsigned long, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f1bb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f1bb0  _ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi
#           random_option::CRandomOptionItemHandle::RegenVer_give_option(unsigned long, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)
# range [0x085f1bb0, 0x085f2337]
085f1bb0 +0x000:  push   %ebp
085f1bb1 +0x001:  mov    %esp,%ebp
085f1bb3 +0x003:  push   %esi
085f1bb4 +0x004:  push   %ebx
085f1bb5 +0x005:  sub    $0xd0,%esp
085f1bbb +0x00b:  movb   $0x0,-0x61(%ebp)
085f1bbf +0x00f:  movl   $0x0,-0x1c(%ebp)
085f1bc6 +0x016:  lea    -0x61(%ebp),%eax
085f1bc9 +0x019:  mov    %eax,0x14(%esp)
085f1bcd +0x01d:  mov    0x1c(%ebp),%eax
085f1bd0 +0x020:  mov    %eax,0x10(%esp)
085f1bd4 +0x024:  mov    0x14(%ebp),%eax
085f1bd7 +0x027:  mov    %eax,0xc(%esp)
085f1bdb +0x02b:  mov    0x10(%ebp),%eax
085f1bde +0x02e:  mov    %eax,0x8(%esp)
085f1be2 +0x032:  mov    0xc(%ebp),%eax
085f1be5 +0x035:  mov    %eax,0x4(%esp)
085f1be9 +0x039:  mov    0x8(%ebp),%eax
085f1bec +0x03c:  mov    %eax,(%esp)
085f1bef +0x03f:  call   085f2338 <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh>  ; random_option::CRandomOptionItemHandle::_get_option_type(unsigned long, ENUM_RARITY, int, int, unsigned char&)
085f1bf4 +0x044:  mov    %eax,-0x1c(%ebp)
085f1bf7 +0x047:  cmpl   $0x0,-0x1c(%ebp)
085f1bfb +0x04b:  setne  %al
085f1bfe +0x04e:  test   %al,%al
085f1c00 +0x050:  je     085f1c66 <+0xb6>
085f1c02 +0x052:  movzbl -0x61(%ebp),%eax
085f1c06 +0x056:  movzbl %al,%edx
085f1c09 +0x059:  mov    0x10(%ebp),%eax
085f1c0c +0x05c:  mov    -0x1c(%ebp),%ecx
085f1c0f +0x05f:  mov    %ecx,0x28(%esp)
085f1c13 +0x063:  mov    %edx,0x24(%esp)
085f1c17 +0x067:  mov    0x1c(%ebp),%edx
085f1c1a +0x06a:  mov    %edx,0x20(%esp)
085f1c1e +0x06e:  mov    0x14(%ebp),%edx
085f1c21 +0x071:  mov    %edx,0x1c(%esp)
085f1c25 +0x075:  mov    %eax,0x18(%esp)
085f1c29 +0x079:  mov    0xc(%ebp),%eax
085f1c2c +0x07c:  mov    %eax,0x14(%esp)
085f1c30 +0x080:  movl   $"_get_option_type (%d,%d,%d,%d,%d) error_line(%d)",0x10(%esp)
085f1c38 +0x088:  movl   $0x1d8,0xc(%esp)
085f1c40 +0x090:  movl   $&_ZZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIiE19__PRETTY_FUNCTION__,0x8(%esp)
085f1c48 +0x098:  movl   $"RandomOption.cpp",0x4(%esp)
085f1c50 +0x0a0:  movl   $0x1,(%esp)
085f1c57 +0x0a7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f1c5c +0x0ac:  mov    $0x0,%ebx
085f1c61 +0x0b1:  jmp    085f232c <+0x77c>
085f1c66 +0x0b6:  movl   $0x0,-0x68(%ebp)
085f1c6d +0x0bd:  cmpl   $0x65,0x28(%ebp)
085f1c71 +0x0c1:  jne    085f1d26 <+0x176>
085f1c77 +0x0c7:  movzbl -0x61(%ebp),%eax
085f1c7b +0x0cb:  movzbl %al,%eax
085f1c7e +0x0ce:  mov    0x24(%ebp),%edx
085f1c81 +0x0d1:  mov    %edx,0x18(%esp)
085f1c85 +0x0d5:  lea    -0x68(%ebp),%edx
085f1c88 +0x0d8:  mov    %edx,0x14(%esp)
085f1c8c +0x0dc:  mov    0x14(%ebp),%edx
085f1c8f +0x0df:  mov    %edx,0x10(%esp)
085f1c93 +0x0e3:  mov    %eax,0xc(%esp)
085f1c97 +0x0e7:  mov    0x1c(%ebp),%eax
085f1c9a +0x0ea:  mov    %eax,0x8(%esp)
085f1c9e +0x0ee:  mov    0x10(%ebp),%eax
085f1ca1 +0x0f1:  mov    %eax,0x4(%esp)
085f1ca5 +0x0f5:  mov    0x8(%ebp),%eax
085f1ca8 +0x0f8:  mov    %eax,(%esp)
085f1cab +0x0fb:  call   085f1a62 <_ZN13random_option23CRandomOptionItemHandle28RegenVer_get_option_quantityE11ENUM_RARITYiiiRiP15RegenerationROI>  ; random_option::CRandomOptionItemHandle::RegenVer_get_option_quantity(ENUM_RARITY, int, int, int, int&, RegenerationROI*)
085f1cb0 +0x100:  mov    %eax,-0x1c(%ebp)
085f1cb3 +0x103:  cmpl   $0x0,-0x1c(%ebp)
085f1cb7 +0x107:  setne  %al
085f1cba +0x10a:  test   %al,%al
085f1cbc +0x10c:  je     085f1dca <+0x21a>
085f1cc2 +0x112:  mov    -0x68(%ebp),%ecx
085f1cc5 +0x115:  movzbl -0x61(%ebp),%eax
085f1cc9 +0x119:  movzbl %al,%edx
085f1ccc +0x11c:  mov    0x10(%ebp),%eax
085f1ccf +0x11f:  mov    -0x1c(%ebp),%ebx
085f1cd2 +0x122:  mov    %ebx,0x28(%esp)
085f1cd6 +0x126:  mov    %ecx,0x24(%esp)
085f1cda +0x12a:  mov    0x14(%ebp),%ecx
085f1cdd +0x12d:  mov    %ecx,0x20(%esp)
085f1ce1 +0x131:  mov    %edx,0x1c(%esp)
085f1ce5 +0x135:  mov    0x1c(%ebp),%edx
085f1ce8 +0x138:  mov    %edx,0x18(%esp)
085f1cec +0x13c:  mov    %eax,0x14(%esp)
085f1cf0 +0x140:  movl   $"_get_option_quantity (%d,%d,%d,%d,%d) error_line(%d)",0x10(%esp)
085f1cf8 +0x148:  movl   $0x1e2,0xc(%esp)
085f1d00 +0x150:  movl   $&_ZZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIiE19__PRETTY_FUNCTION__,0x8(%esp)
085f1d08 +0x158:  movl   $"RandomOption.cpp",0x4(%esp)
085f1d10 +0x160:  movl   $0x1,(%esp)
085f1d17 +0x167:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f1d1c +0x16c:  mov    $0x0,%ebx
085f1d21 +0x171:  jmp    085f232c <+0x77c>
085f1d26 +0x176:  movzbl -0x61(%ebp),%eax
085f1d2a +0x17a:  movzbl %al,%eax
085f1d2d +0x17d:  lea    -0x68(%ebp),%edx
085f1d30 +0x180:  mov    %edx,0x14(%esp)
085f1d34 +0x184:  mov    0x14(%ebp),%edx
085f1d37 +0x187:  mov    %edx,0x10(%esp)
085f1d3b +0x18b:  mov    %eax,0xc(%esp)
085f1d3f +0x18f:  mov    0x1c(%ebp),%eax
085f1d42 +0x192:  mov    %eax,0x8(%esp)
085f1d46 +0x196:  mov    0x10(%ebp),%eax
085f1d49 +0x199:  mov    %eax,0x4(%esp)
085f1d4d +0x19d:  mov    0x8(%ebp),%eax
085f1d50 +0x1a0:  mov    %eax,(%esp)
085f1d53 +0x1a3:  call   085f25b0 <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi>  ; random_option::CRandomOptionItemHandle::_get_option_quantity(ENUM_RARITY, int, int, int, int&)
085f1d58 +0x1a8:  mov    %eax,-0x1c(%ebp)
085f1d5b +0x1ab:  cmpl   $0x0,-0x1c(%ebp)
085f1d5f +0x1af:  setne  %al
085f1d62 +0x1b2:  test   %al,%al
085f1d64 +0x1b4:  je     085f1dca <+0x21a>
085f1d66 +0x1b6:  mov    -0x68(%ebp),%ecx
085f1d69 +0x1b9:  movzbl -0x61(%ebp),%eax
085f1d6d +0x1bd:  movzbl %al,%edx
085f1d70 +0x1c0:  mov    0x10(%ebp),%eax
085f1d73 +0x1c3:  mov    -0x1c(%ebp),%ebx
085f1d76 +0x1c6:  mov    %ebx,0x28(%esp)
085f1d7a +0x1ca:  mov    %ecx,0x24(%esp)
085f1d7e +0x1ce:  mov    0x14(%ebp),%ecx
085f1d81 +0x1d1:  mov    %ecx,0x20(%esp)
085f1d85 +0x1d5:  mov    %edx,0x1c(%esp)
085f1d89 +0x1d9:  mov    0x1c(%ebp),%edx
085f1d8c +0x1dc:  mov    %edx,0x18(%esp)
085f1d90 +0x1e0:  mov    %eax,0x14(%esp)
085f1d94 +0x1e4:  movl   $"_get_option_quantity (%d,%d,%d,%d,%d) error_line(%d)",0x10(%esp)
085f1d9c +0x1ec:  movl   $0x1ea,0xc(%esp)
085f1da4 +0x1f4:  movl   $&_ZZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIiE19__PRETTY_FUNCTION__,0x8(%esp)
085f1dac +0x1fc:  movl   $"RandomOption.cpp",0x4(%esp)
085f1db4 +0x204:  movl   $0x1,(%esp)
085f1dbb +0x20b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f1dc0 +0x210:  mov    $0x0,%ebx
085f1dc5 +0x215:  jmp    085f232c <+0x77c>
085f1dca +0x21a:  movl   $0x0,-0x6c(%ebp)
085f1dd1 +0x221:  movzbl -0x61(%ebp),%eax
085f1dd5 +0x225:  movzbl %al,%eax
085f1dd8 +0x228:  lea    -0x6c(%ebp),%edx
085f1ddb +0x22b:  mov    %edx,0x18(%esp)
085f1ddf +0x22f:  mov    %eax,0x14(%esp)
085f1de3 +0x233:  mov    0x14(%ebp),%eax
085f1de6 +0x236:  mov    %eax,0x10(%esp)
085f1dea +0x23a:  mov    0x18(%ebp),%eax
085f1ded +0x23d:  mov    %eax,0xc(%esp)
085f1df1 +0x241:  mov    0x1c(%ebp),%eax
085f1df4 +0x244:  mov    %eax,0x8(%esp)
085f1df8 +0x248:  mov    0x10(%ebp),%eax
085f1dfb +0x24b:  mov    %eax,0x4(%esp)
085f1dff +0x24f:  mov    0x8(%ebp),%eax
085f1e02 +0x252:  mov    %eax,(%esp)
085f1e05 +0x255:  call   085f2882 <_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi>  ; random_option::CRandomOptionItemHandle::_choose_option_group(ENUM_RARITY, int, int, int, int, int&)
085f1e0a +0x25a:  mov    %eax,-0x1c(%ebp)
085f1e0d +0x25d:  cmpl   $0x0,-0x1c(%ebp)
085f1e11 +0x261:  setne  %al
085f1e14 +0x264:  test   %al,%al
085f1e16 +0x266:  je     085f1e83 <+0x2d3>
085f1e18 +0x268:  mov    -0x6c(%ebp),%ecx
085f1e1b +0x26b:  movzbl -0x61(%ebp),%eax
085f1e1f +0x26f:  movzbl %al,%edx
085f1e22 +0x272:  mov    0x10(%ebp),%eax
085f1e25 +0x275:  mov    -0x1c(%ebp),%ebx
085f1e28 +0x278:  mov    %ebx,0x2c(%esp)
085f1e2c +0x27c:  mov    %ecx,0x28(%esp)
085f1e30 +0x280:  mov    %edx,0x24(%esp)
085f1e34 +0x284:  mov    0x14(%ebp),%edx
085f1e37 +0x287:  mov    %edx,0x20(%esp)
085f1e3b +0x28b:  mov    0x18(%ebp),%edx
085f1e3e +0x28e:  mov    %edx,0x1c(%esp)
085f1e42 +0x292:  mov    0x1c(%ebp),%edx
085f1e45 +0x295:  mov    %edx,0x18(%esp)
085f1e49 +0x299:  mov    %eax,0x14(%esp)
085f1e4d +0x29d:  movl   $"_choose_option_group (%d,%d,%d,%d,%d,%d) error_line(%d)",0x10(%esp)
085f1e55 +0x2a5:  movl   $0x1f2,0xc(%esp)
085f1e5d +0x2ad:  movl   $&_ZZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIiE19__PRETTY_FUNCTION__,0x8(%esp)
085f1e65 +0x2b5:  movl   $"RandomOption.cpp",0x4(%esp)
085f1e6d +0x2bd:  movl   $0x1,(%esp)
085f1e74 +0x2c4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f1e79 +0x2c9:  mov    $0x0,%ebx
085f1e7e +0x2ce:  jmp    085f232c <+0x77c>
085f1e83 +0x2d3:  lea    -0x78(%ebp),%eax
085f1e86 +0x2d6:  mov    %eax,(%esp)
085f1e89 +0x2d9:  call   085f419a <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x1b5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x1b5
085f1e8e +0x2de:  mov    0x10(%ebp),%eax
085f1e91 +0x2e1:  mov    %al,-0x6e(%ebp)
085f1e94 +0x2e4:  movzbl -0x61(%ebp),%eax
085f1e98 +0x2e8:  mov    %al,-0x6d(%ebp)
085f1e9b +0x2eb:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f1ea0 +0x2f0:  lea    0xf4(%eax),%ecx
085f1ea6 +0x2f6:  lea    -0x7c(%ebp),%eax
085f1ea9 +0x2f9:  lea    -0x6e(%ebp),%edx
085f1eac +0x2fc:  mov    %edx,0x8(%esp)
085f1eb0 +0x300:  mov    %ecx,0x4(%esp)
085f1eb4 +0x304:  mov    %eax,(%esp)
085f1eb7 +0x307:  call   085f4710 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x72b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x72b
085f1ebc +0x30c:  sub    $0x4,%esp
085f1ebf +0x30f:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f1ec4 +0x314:  lea    0xf4(%eax),%edx
085f1eca +0x31a:  lea    -0x60(%ebp),%eax
085f1ecd +0x31d:  mov    %edx,0x4(%esp)
085f1ed1 +0x321:  mov    %eax,(%esp)
085f1ed4 +0x324:  call   085f473c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x757>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x757
085f1ed9 +0x329:  sub    $0x4,%esp
085f1edc +0x32c:  lea    -0x60(%ebp),%eax
085f1edf +0x32f:  mov    %eax,0x4(%esp)
085f1ee3 +0x333:  lea    -0x7c(%ebp),%eax
085f1ee6 +0x336:  mov    %eax,(%esp)
085f1ee9 +0x339:  call   085f4762 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x77d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x77d
085f1eee +0x33e:  test   %al,%al
085f1ef0 +0x340:  je     085f1f3a <+0x38a>
085f1ef2 +0x342:  movzbl -0x61(%ebp),%eax
085f1ef6 +0x346:  movzbl %al,%edx
085f1ef9 +0x349:  mov    0x10(%ebp),%eax
085f1efc +0x34c:  mov    %edx,0x18(%esp)
085f1f00 +0x350:  mov    %eax,0x14(%esp)
085f1f04 +0x354:  movl   $"different_weight_ (%d,%d) ",0x10(%esp)
085f1f0c +0x35c:  movl   $0x1fe,0xc(%esp)
085f1f14 +0x364:  movl   $&_ZZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIiE19__PRETTY_FUNCTION__,0x8(%esp)
085f1f1c +0x36c:  movl   $"RandomOption.cpp",0x4(%esp)
085f1f24 +0x374:  movl   $0x1,(%esp)
085f1f2b +0x37b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f1f30 +0x380:  mov    $0x0,%ebx
085f1f35 +0x385:  jmp    085f232c <+0x77c>
085f1f3a +0x38a:  lea    -0x7c(%ebp),%eax
085f1f3d +0x38d:  mov    %eax,(%esp)
085f1f40 +0x390:  call   085f4776 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x791>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x791
085f1f45 +0x395:  mov    0x8(%eax),%edx
085f1f48 +0x398:  mov    0x4(%eax),%eax
085f1f4b +0x39b:  mov    %eax,-0x78(%ebp)
085f1f4e +0x39e:  mov    %edx,-0x74(%ebp)
085f1f51 +0x3a1:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f1f56 +0x3a6:  lea    0x160(%eax),%ecx
085f1f5c +0x3ac:  lea    -0x80(%ebp),%eax
085f1f5f +0x3af:  lea    -0x6c(%ebp),%edx
085f1f62 +0x3b2:  mov    %edx,0x8(%esp)
085f1f66 +0x3b6:  mov    %ecx,0x4(%esp)
085f1f6a +0x3ba:  mov    %eax,(%esp)
085f1f6d +0x3bd:  call   085f4784 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x79f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x79f
085f1f72 +0x3c2:  sub    $0x4,%esp
085f1f75 +0x3c5:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f1f7a +0x3ca:  lea    0x160(%eax),%edx
085f1f80 +0x3d0:  lea    -0x5c(%ebp),%eax
085f1f83 +0x3d3:  mov    %edx,0x4(%esp)
085f1f87 +0x3d7:  mov    %eax,(%esp)
085f1f8a +0x3da:  call   085f47b0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x7cb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x7cb
085f1f8f +0x3df:  sub    $0x4,%esp
085f1f92 +0x3e2:  lea    -0x5c(%ebp),%eax
085f1f95 +0x3e5:  mov    %eax,0x4(%esp)
085f1f99 +0x3e9:  lea    -0x80(%ebp),%eax
085f1f9c +0x3ec:  mov    %eax,(%esp)
085f1f9f +0x3ef:  call   085f47d6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x7f1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x7f1
085f1fa4 +0x3f4:  test   %al,%al
085f1fa6 +0x3f6:  je     085f1fe5 <+0x435>
085f1fa8 +0x3f8:  mov    -0x6c(%ebp),%eax
085f1fab +0x3fb:  mov    %eax,0x14(%esp)
085f1faf +0x3ff:  movl   $"option_group_ (%d) ",0x10(%esp)
085f1fb7 +0x407:  movl   $0x206,0xc(%esp)
085f1fbf +0x40f:  movl   $&_ZZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIiE19__PRETTY_FUNCTION__,0x8(%esp)
085f1fc7 +0x417:  movl   $"RandomOption.cpp",0x4(%esp)
085f1fcf +0x41f:  movl   $0x1,(%esp)
085f1fd6 +0x426:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f1fdb +0x42b:  mov    $0x0,%ebx
085f1fe0 +0x430:  jmp    085f232c <+0x77c>
085f1fe5 +0x435:  lea    -0x80(%ebp),%eax
085f1fe8 +0x438:  mov    %eax,(%esp)
085f1feb +0x43b:  call   085f47ea <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x805>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x805
085f1ff0 +0x440:  mov    0x10(%eax),%eax
085f1ff3 +0x443:  mov    %eax,-0x18(%ebp)
085f1ff6 +0x446:  lea    -0x80(%ebp),%eax
085f1ff9 +0x449:  mov    %eax,(%esp)
085f1ffc +0x44c:  call   085f47ea <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x805>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x805
085f2001 +0x451:  add    $0x4,%eax
085f2004 +0x454:  mov    %eax,0x4(%esp)
085f2008 +0x458:  lea    -0x8c(%ebp),%eax
085f200e +0x45e:  mov    %eax,(%esp)
085f2011 +0x461:  call   085f47f8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x813>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x813
085f2016 +0x466:  movl   $0x0,-0x14(%ebp)
085f201d +0x46d:  movl   $0x0,-0x10(%ebp)
085f2024 +0x474:  lea    -0x90(%ebp),%eax
085f202a +0x47a:  mov    %eax,(%esp)
085f202d +0x47d:  call   085f48ac <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8c7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8c7
085f2032 +0x482:  movl   $0x0,-0xc(%ebp)
085f2039 +0x489:  jmp    085f227d <+0x6cd>
085f203e +0x48e:  mov    -0x18(%ebp),%eax
085f2041 +0x491:  mov    %eax,-0x58(%ebp)
085f2044 +0x494:  mov    0x8(%ebp),%eax
085f2047 +0x497:  mov    0x4(%eax),%eax
085f204a +0x49a:  lea    0x5808(%eax),%edx
085f2050 +0x4a0:  lea    -0x58(%ebp),%eax
085f2053 +0x4a3:  mov    %eax,0x4(%esp)
085f2057 +0x4a7:  mov    %edx,(%esp)
085f205a +0x4aa:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f205f +0x4af:  mov    %eax,-0x14(%ebp)
085f2062 +0x4b2:  mov    -0x14(%ebp),%eax
085f2065 +0x4b5:  mov    %eax,0x4(%esp)
085f2069 +0x4b9:  lea    -0x44(%ebp),%eax
085f206c +0x4bc:  mov    %eax,(%esp)
085f206f +0x4bf:  call   085f4904 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x91f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x91f
085f2074 +0x4c4:  lea    -0x34(%ebp),%eax
085f2077 +0x4c7:  lea    -0x8c(%ebp),%edx
085f207d +0x4cd:  mov    %edx,0x4(%esp)
085f2081 +0x4d1:  mov    %eax,(%esp)
085f2084 +0x4d4:  call   085f48de <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8f9>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8f9
085f2089 +0x4d9:  sub    $0x4,%esp
085f208c +0x4dc:  lea    -0x30(%ebp),%eax
085f208f +0x4df:  lea    -0x8c(%ebp),%edx
085f2095 +0x4e5:  mov    %edx,0x4(%esp)
085f2099 +0x4e9:  mov    %eax,(%esp)
085f209c +0x4ec:  call   085f48ba <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8d5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8d5
085f20a1 +0x4f1:  sub    $0x4,%esp
085f20a4 +0x4f4:  lea    -0x54(%ebp),%eax
085f20a7 +0x4f7:  mov    -0x44(%ebp),%edx
085f20aa +0x4fa:  mov    %edx,0xc(%esp)
085f20ae +0x4fe:  mov    -0x40(%ebp),%edx
085f20b1 +0x501:  mov    %edx,0x10(%esp)
085f20b5 +0x505:  mov    -0x3c(%ebp),%edx
085f20b8 +0x508:  mov    %edx,0x14(%esp)
085f20bc +0x50c:  mov    -0x38(%ebp),%edx
085f20bf +0x50f:  mov    %edx,0x18(%esp)
085f20c3 +0x513:  mov    -0x34(%ebp),%edx
085f20c6 +0x516:  mov    %edx,0x8(%esp)
085f20ca +0x51a:  mov    -0x30(%ebp),%edx
085f20cd +0x51d:  mov    %edx,0x4(%esp)
085f20d1 +0x521:  mov    %eax,(%esp)
085f20d4 +0x524:  call   085f492f <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x94a>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x94a
085f20d9 +0x529:  sub    $0x4,%esp
085f20dc +0x52c:  lea    -0x54(%ebp),%eax
085f20df +0x52f:  mov    %eax,(%esp)
085f20e2 +0x532:  call   085f49a0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9bb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9bb
085f20e7 +0x537:  mov    %eax,-0x10(%ebp)
085f20ea +0x53a:  lea    -0x8c(%ebp),%eax
085f20f0 +0x540:  mov    %eax,(%esp)
085f20f3 +0x543:  call   085f49aa <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9c5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9c5
085f20f8 +0x548:  cmp    -0x10(%ebp),%eax
085f20fb +0x54b:  setbe  %al
085f20fe +0x54e:  test   %al,%al
085f2100 +0x550:  jne    085f2278 <+0x6c8>
085f2106 +0x556:  mov    -0x10(%ebp),%eax
085f2109 +0x559:  mov    %eax,-0x2c(%ebp)
085f210c +0x55c:  lea    -0x28(%ebp),%eax
085f210f +0x55f:  lea    -0x8c(%ebp),%edx
085f2115 +0x565:  mov    %edx,0x4(%esp)
085f2119 +0x569:  mov    %eax,(%esp)
085f211c +0x56c:  call   085f48ba <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8d5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8d5
085f2121 +0x571:  sub    $0x4,%esp
085f2124 +0x574:  lea    -0x9c(%ebp),%eax
085f212a +0x57a:  lea    -0x2c(%ebp),%edx
085f212d +0x57d:  mov    %edx,0x8(%esp)
085f2131 +0x581:  lea    -0x28(%ebp),%edx
085f2134 +0x584:  mov    %edx,0x4(%esp)
085f2138 +0x588:  mov    %eax,(%esp)
085f213b +0x58b:  call   085f49c6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9e1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9e1
085f2140 +0x590:  sub    $0x4,%esp
085f2143 +0x593:  mov    -0x9c(%ebp),%eax
085f2149 +0x599:  mov    %eax,-0x90(%ebp)
085f214f +0x59f:  mov    -0xc(%ebp),%ebx
085f2152 +0x5a2:  lea    -0x90(%ebp),%eax
085f2158 +0x5a8:  mov    %eax,(%esp)
085f215b +0x5ab:  call   085f49fc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xa17>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xa17
085f2160 +0x5b0:  mov    (%eax),%eax
085f2162 +0x5b2:  mov    %eax,%ecx
085f2164 +0x5b4:  mov    0x20(%ebp),%edx
085f2167 +0x5b7:  mov    %ebx,%eax
085f2169 +0x5b9:  add    %eax,%eax
085f216b +0x5bb:  add    %ebx,%eax
085f216d +0x5bd:  mov    %cl,(%eax,%edx,1)
085f2170 +0x5c0:  mov    -0x18(%ebp),%ebx
085f2173 +0x5c3:  lea    -0x90(%ebp),%eax
085f2179 +0x5c9:  mov    %eax,(%esp)
085f217c +0x5cc:  call   085f49fc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xa17>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xa17
085f2181 +0x5d1:  mov    0x4(%eax),%eax
085f2184 +0x5d4:  mov    %ebx,%edx
085f2186 +0x5d6:  sub    %eax,%edx
085f2188 +0x5d8:  mov    %edx,%eax
085f218a +0x5da:  mov    %eax,-0x18(%ebp)
085f218d +0x5dd:  lea    -0x24(%ebp),%eax
085f2190 +0x5e0:  mov    -0x90(%ebp),%edx
085f2196 +0x5e6:  mov    %edx,0x8(%esp)
085f219a +0x5ea:  lea    -0x8c(%ebp),%edx
085f21a0 +0x5f0:  mov    %edx,0x4(%esp)
085f21a4 +0x5f4:  mov    %eax,(%esp)
085f21a7 +0x5f7:  call   085f4a06 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xa21>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xa21
085f21ac +0x5fc:  sub    $0x4,%esp
085f21af +0x5ff:  cmpl   $0xc9,0x28(%ebp)
085f21b6 +0x606:  jne    085f2218 <+0x668>
085f21b8 +0x608:  mov    -0xc(%ebp),%ebx
085f21bb +0x60b:  mov    -0x74(%ebp),%edx
085f21be +0x60e:  mov    -0x78(%ebp),%eax
085f21c1 +0x611:  mov    %edx,0x8(%esp)
085f21c5 +0x615:  mov    %eax,0x4(%esp)
085f21c9 +0x619:  mov    0x24(%ebp),%eax
085f21cc +0x61c:  mov    %eax,(%esp)
085f21cf +0x61f:  call   085f8da6 <_ZN15RegenerationROI25RegenVer_get_option_valueEii>  ; RegenerationROI::RegenVer_get_option_value(int, int)
085f21d4 +0x624:  mov    %eax,%edx
085f21d6 +0x626:  mov    0x20(%ebp),%ecx
085f21d9 +0x629:  mov    %ebx,%eax
085f21db +0x62b:  add    %eax,%eax
085f21dd +0x62d:  add    %ebx,%eax
085f21df +0x62f:  lea    (%ecx,%eax,1),%eax
085f21e2 +0x632:  add    $0x1,%eax
085f21e5 +0x635:  mov    %dl,(%eax)
085f21e7 +0x637:  mov    -0xc(%ebp),%ebx
085f21ea +0x63a:  mov    -0x74(%ebp),%edx
085f21ed +0x63d:  mov    -0x78(%ebp),%eax
085f21f0 +0x640:  mov    %edx,0x8(%esp)
085f21f4 +0x644:  mov    %eax,0x4(%esp)
085f21f8 +0x648:  mov    0x24(%ebp),%eax
085f21fb +0x64b:  mov    %eax,(%esp)
085f21fe +0x64e:  call   085f8da6 <_ZN15RegenerationROI25RegenVer_get_option_valueEii>  ; RegenerationROI::RegenVer_get_option_value(int, int)
085f2203 +0x653:  mov    %eax,%edx
085f2205 +0x655:  mov    0x20(%ebp),%ecx
085f2208 +0x658:  mov    %ebx,%eax
085f220a +0x65a:  add    %eax,%eax
085f220c +0x65c:  add    %ebx,%eax
085f220e +0x65e:  lea    (%ecx,%eax,1),%eax
085f2211 +0x661:  add    $0x2,%eax
085f2214 +0x664:  mov    %dl,(%eax)
085f2216 +0x666:  jmp    085f2279 <+0x6c9>
085f2218 +0x668:  mov    -0xc(%ebp),%ebx
085f221b +0x66b:  mov    -0x74(%ebp),%edx
085f221e +0x66e:  mov    -0x78(%ebp),%eax
085f2221 +0x671:  mov    %edx,0x8(%esp)
085f2225 +0x675:  mov    %eax,0x4(%esp)
085f2229 +0x679:  mov    0x8(%ebp),%eax
085f222c +0x67c:  mov    %eax,(%esp)
085f222f +0x67f:  call   085f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>  ; random_option::CRandomOptionItemHandle::_get_option_value(int, int)
085f2234 +0x684:  mov    %eax,%edx
085f2236 +0x686:  mov    0x20(%ebp),%ecx
085f2239 +0x689:  mov    %ebx,%eax
085f223b +0x68b:  add    %eax,%eax
085f223d +0x68d:  add    %ebx,%eax
085f223f +0x68f:  lea    (%ecx,%eax,1),%eax
085f2242 +0x692:  add    $0x1,%eax
085f2245 +0x695:  mov    %dl,(%eax)
085f2247 +0x697:  mov    -0xc(%ebp),%ebx
085f224a +0x69a:  mov    -0x74(%ebp),%edx
085f224d +0x69d:  mov    -0x78(%ebp),%eax
085f2250 +0x6a0:  mov    %edx,0x8(%esp)
085f2254 +0x6a4:  mov    %eax,0x4(%esp)
085f2258 +0x6a8:  mov    0x8(%ebp),%eax
085f225b +0x6ab:  mov    %eax,(%esp)
085f225e +0x6ae:  call   085f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>  ; random_option::CRandomOptionItemHandle::_get_option_value(int, int)
085f2263 +0x6b3:  mov    %eax,%edx
085f2265 +0x6b5:  mov    0x20(%ebp),%ecx
085f2268 +0x6b8:  mov    %ebx,%eax
085f226a +0x6ba:  add    %eax,%eax
085f226c +0x6bc:  add    %ebx,%eax
085f226e +0x6be:  lea    (%ecx,%eax,1),%eax
085f2271 +0x6c1:  add    $0x2,%eax
085f2274 +0x6c4:  mov    %dl,(%eax)
085f2276 +0x6c6:  jmp    085f2279 <+0x6c9>
085f2278 +0x6c8:  nop
085f2279 +0x6c9:  addl   $0x1,-0xc(%ebp)
085f227d +0x6cd:  mov    -0x68(%ebp),%eax
085f2280 +0x6d0:  cmp    %eax,-0xc(%ebp)
085f2283 +0x6d3:  jge    085f2292 <+0x6e2>
085f2285 +0x6d5:  cmpl   $0x2,-0xc(%ebp)
085f2289 +0x6d9:  jg     085f2292 <+0x6e2>
085f228b +0x6db:  mov    $0x1,%eax
085f2290 +0x6e0:  jmp    085f2297 <+0x6e7>
085f2292 +0x6e2:  mov    $0x0,%eax
085f2297 +0x6e7:  test   %al,%al
085f2299 +0x6e9:  jne    085f203e <+0x48e>
085f229f +0x6ef:  movzbl -0x61(%ebp),%eax
085f22a3 +0x6f3:  mov    %eax,%edx
085f22a5 +0x6f5:  and    $0x3,%edx
085f22a8 +0x6f8:  mov    0x20(%ebp),%eax
085f22ab +0x6fb:  mov    %edx,%ecx
085f22ad +0x6fd:  and    $0x3,%ecx
085f22b0 +0x700:  movzbl 0x9(%eax),%edx
085f22b4 +0x704:  and    $0xfffffffc,%edx
085f22b7 +0x707:  or     %ecx,%edx
085f22b9 +0x709:  mov    %dl,0x9(%eax)
085f22bc +0x70c:  movl   $0x40,-0x20(%ebp)
085f22c3 +0x713:  mov    0x8(%ebp),%eax
085f22c6 +0x716:  mov    0x4(%eax),%eax
085f22c9 +0x719:  lea    0x61d0(%eax),%edx
085f22cf +0x71f:  lea    -0x20(%ebp),%eax
085f22d2 +0x722:  mov    %eax,0x4(%esp)
085f22d6 +0x726:  mov    %edx,(%esp)
085f22d9 +0x729:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f22de +0x72e:  mov    %eax,%edx
085f22e0 +0x730:  and    $0x3f,%edx
085f22e3 +0x733:  mov    0x20(%ebp),%eax
085f22e6 +0x736:  lea    0x0(,%edx,4),%ecx
085f22ed +0x73d:  movzbl 0x9(%eax),%edx
085f22f1 +0x741:  and    $0x3,%edx
085f22f4 +0x744:  or     %ecx,%edx
085f22f6 +0x746:  mov    %dl,0x9(%eax)
085f22f9 +0x749:  mov    $0x1,%ebx
085f22fe +0x74e:  lea    -0x8c(%ebp),%eax
085f2304 +0x754:  mov    %eax,(%esp)
085f2307 +0x757:  call   083860f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x15b94>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x15b94
085f230c +0x75c:  jmp    085f232c <+0x77c>
085f230e +0x75e:  mov    %edx,%ebx
085f2310 +0x760:  mov    %eax,%esi
085f2312 +0x762:  lea    -0x8c(%ebp),%eax
085f2318 +0x768:  mov    %eax,(%esp)
085f231b +0x76b:  call   083860f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x15b94>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x15b94
085f2320 +0x770:  mov    %esi,%eax
085f2322 +0x772:  mov    %ebx,%edx
085f2324 +0x774:  mov    %eax,(%esp)
085f2327 +0x777:  call   08ae3750 <_Unwind_Resume>
085f232c +0x77c:  mov    %ebx,%eax
085f232e +0x77e:  lea    -0x8(%ebp),%esp
085f2331 +0x781:  add    $0x0,%esp
085f2334 +0x784:  pop    %ebx
085f2335 +0x785:  pop    %esi
085f2336 +0x786:  pop    %ebp
085f2337 +0x787:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::RegenVer_give_option @ 0x85f1bb0

/* random_option::CRandomOptionItemHandle::RegenVer_give_option(unsigned long, ENUM_RARITY, int,
   int, int, RandomOption*, RegenerationROI*, int) */

undefined4
random_option::CRandomOptionItemHandle::RegenVer_give_option
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
  undefined4 in_stack_00000020;
  int in_stack_00000024;
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
    if (in_stack_00000024 == 0x65) {
      local_20 = RegenVer_get_option_quantity();
      if (local_20 != 0) {
        LogManager::logFormat
                  (1,"RandomOption.cpp",
                   "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
                   ,0x1e2,"_get_option_quantity (%d,%d,%d,%d,%d) error_line(%d)");
        return 0;
      }
    }
    else {
      local_20 = _get_option_quantity();
      if (local_20 != 0) {
        LogManager::logFormat
                  (1,"RandomOption.cpp",
                   "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
                   ,0x1ea,"_get_option_quantity (%d,%d,%d,%d,%d) error_line(%d)");
        return 0;
      }
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
      cVar2 = std::_Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>>::operator==
                        (local_80,(_Rb_tree_const_iterator *)local_64);
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
            piVar9[-1] = 0x85f205f;
            local_18 = CMTRand::randInt((CMTRand *)*piVar9,(ulong *)piVar9[1]);
            piVar9[1] = local_18;
            *piVar9 = (int)&local_48;
            piVar9[-1] = 0x85f2074;
            CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)*piVar9,piVar9[1]);
            piVar9[1] = (int)local_90;
            *piVar9 = (int)&local_38;
                    /* try { // try from 085f2084 to 085f2262 has its CatchHandler @ 085f230e */
            piVar9[-1] = 0x85f2089;
            std::vector<OptionGroup,std::allocator<OptionGroup>>::end();
            piVar9[1] = (int)local_90;
            *piVar9 = (int)&local_34;
            piVar9[-1] = 0x85f20a1;
            std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
            piVar9[3] = local_48;
            piVar9[4] = local_44;
            piVar9[5] = local_40;
            piVar9[6] = local_3c;
            piVar9[2] = local_38;
            piVar9[1] = local_34;
            *piVar9 = (int)local_58;
            piVar9[-1] = 0x85f20d9;
            std::
            for_each<__gnu_cxx::__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>,CRandomList<unsigned_int>>
                      ();
            piVar9[-1] = (int)local_58;
            piVar9[-2] = 0x85f20e7;
            local_14 = CRandomList<unsigned_int>::get_value((CRandomList<unsigned_int> *)piVar9[-1])
            ;
            piVar9[-1] = (int)local_90;
            piVar9[-2] = 0x85f20f8;
            uVar5 = std::vector<OptionGroup,std::allocator<OptionGroup>>::size
                              ((vector<OptionGroup,std::allocator<OptionGroup>> *)piVar9[-1]);
            if (local_14 < uVar5) {
              local_30 = local_14;
              *piVar9 = (int)local_90;
              piVar9[-1] = (int)local_2c;
              piVar9[-2] = 0x85f2121;
              std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
              piVar9[1] = (int)&local_30;
              *piVar9 = (int)local_2c;
              piVar9[-1] = (int)local_a0;
              piVar9[-2] = 0x85f2140;
              __gnu_cxx::
              __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>::
              operator+((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                         *)piVar9[-1],(int *)*piVar9);
              iVar7 = local_10;
              local_94 = local_a0[0];
              piVar9[-1] = (int)&local_94;
              piVar9[-2] = 0x85f2160;
              puVar6 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                       ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                    *)piVar9[-1]);
              iVar4 = local_1c;
              *(char *)(iVar7 * 3 + in_stack_0000001c) = (char)*puVar6;
              piVar9[-1] = (int)&local_94;
              piVar9[-2] = 0x85f2181;
              iVar7 = __gnu_cxx::
                      __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                      ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                   *)piVar9[-1]);
              local_1c = iVar4 - *(int *)(iVar7 + 4);
              piVar9[1] = local_94;
              *piVar9 = (int)local_90;
              piVar9[-1] = (int)local_28;
              piVar9[-2] = 0x85f21ac;
              std::vector<OptionGroup,std::allocator<OptionGroup>>::erase();
              iVar4 = local_10;
              if (in_stack_00000024 == 0xc9) {
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = in_stack_00000020;
                piVar9[-2] = 0x85f21d4;
                uVar3 = RegenerationROI::RegenVer_get_option_value
                                  ((RegenerationROI *)piVar9[-1],*piVar9,piVar9[1]);
                iVar7 = local_10;
                *(undefined1 *)(in_stack_0000001c + iVar4 * 3 + 1) = uVar3;
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = in_stack_00000020;
                piVar9[-2] = 0x85f2203;
                uVar3 = RegenerationROI::RegenVer_get_option_value
                                  ((RegenerationROI *)piVar9[-1],*piVar9,piVar9[1]);
                *(undefined1 *)(in_stack_0000001c + iVar7 * 3 + 2) = uVar3;
              }
              else {
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = param_1;
                piVar9[-2] = 0x85f2234;
                uVar3 = _get_option_value((CRandomOptionItemHandle *)piVar9[-1],*piVar9,piVar9[1]);
                iVar7 = local_10;
                *(undefined1 *)(in_stack_0000001c + iVar4 * 3 + 1) = uVar3;
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = param_1;
                piVar9[-2] = 0x85f2263;
                uVar3 = _get_option_value((CRandomOptionItemHandle *)piVar9[-1],*piVar9,piVar9[1]);
                *(undefined1 *)(in_stack_0000001c + iVar7 * 3 + 2) = uVar3;
              }
            }
            local_10 = local_10 + 1;
            piVar9 = piVar9 + -1;
          }
          *(byte *)(in_stack_0000001c + 9) = *(byte *)(in_stack_0000001c + 9) & 0xfc | local_65 & 3;
          local_24 = 0x40;
          iVar4 = *(int *)(param_1 + 4);
          piVar9[1] = (int)&local_24;
          *piVar9 = iVar4 + 0x61d0;
          piVar9[-1] = 0x85f22de;
          cVar2 = CMTRand::randInt((CMTRand *)*piVar9,(ulong *)piVar9[1]);
          *(byte *)(in_stack_0000001c + 9) = *(byte *)(in_stack_0000001c + 9) & 3 | cVar2 * '\x04';
          uVar8 = 1;
          *piVar9 = (int)local_90;
          piVar9[-1] = 0x85f230c;
          std::vector<OptionGroup,std::allocator<OptionGroup>>::~vector
                    ((vector<OptionGroup,std::allocator<OptionGroup>> *)*piVar9);
        }
        else {
          LogManager::logFormat
                    (1,"RandomOption.cpp",
                     "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
                     ,0x206,"option_group_ (%d) ");
          uVar8 = 0;
        }
      }
      else {
        LogManager::logFormat
                  (1,"RandomOption.cpp",
                   "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
                   ,0x1fe,"different_weight_ (%d,%d) ");
        uVar8 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"RandomOption.cpp",
                 "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
                 ,0x1f2,"_choose_option_group (%d,%d,%d,%d,%d,%d) error_line(%d)");
      uVar8 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"RandomOption.cpp",
               "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
               ,0x1d8,"_get_option_type (%d,%d,%d,%d,%d) error_line(%d)");
    uVar8 = 0;
  }
  return uVar8;
}
```
