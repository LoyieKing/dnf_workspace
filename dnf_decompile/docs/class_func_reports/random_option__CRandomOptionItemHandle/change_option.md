# change_option

`_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption`

`random_option::CRandomOptionItemHandle::change_option(unsigned long, ENUM_RARITY, int, int, int, int, RandomOption*)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f3340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f3340  _ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption
#           random_option::CRandomOptionItemHandle::change_option(unsigned long, ENUM_RARITY, int, int, int, int, RandomOption*)
# range [0x085f3340, 0x085f39d1]
085f3340 +0x000:  push   %ebp
085f3341 +0x001:  mov    %esp,%ebp
085f3343 +0x003:  push   %esi
085f3344 +0x004:  push   %ebx
085f3345 +0x005:  sub    $0xd0,%esp
085f334b +0x00b:  cmpl   $0x0,0x20(%ebp)
085f334f +0x00f:  js     085f3357 <+0x17>
085f3351 +0x011:  cmpl   $0x2,0x20(%ebp)
085f3355 +0x015:  jle    085f3361 <+0x21>
085f3357 +0x017:  mov    $0x0,%ebx
085f335c +0x01c:  jmp    085f39c6 <+0x686>
085f3361 +0x021:  movb   $0x0,-0x65(%ebp)
085f3365 +0x025:  movl   $0x0,-0x1c(%ebp)
085f336c +0x02c:  lea    -0x65(%ebp),%eax
085f336f +0x02f:  mov    %eax,0x14(%esp)
085f3373 +0x033:  mov    0x1c(%ebp),%eax
085f3376 +0x036:  mov    %eax,0x10(%esp)
085f337a +0x03a:  mov    0x14(%ebp),%eax
085f337d +0x03d:  mov    %eax,0xc(%esp)
085f3381 +0x041:  mov    0x10(%ebp),%eax
085f3384 +0x044:  mov    %eax,0x8(%esp)
085f3388 +0x048:  mov    0xc(%ebp),%eax
085f338b +0x04b:  mov    %eax,0x4(%esp)
085f338f +0x04f:  mov    0x8(%ebp),%eax
085f3392 +0x052:  mov    %eax,(%esp)
085f3395 +0x055:  call   085f2338 <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh>  ; random_option::CRandomOptionItemHandle::_get_option_type(unsigned long, ENUM_RARITY, int, int, unsigned char&)
085f339a +0x05a:  mov    %eax,-0x1c(%ebp)
085f339d +0x05d:  cmpl   $0x0,-0x1c(%ebp)
085f33a1 +0x061:  setne  %al
085f33a4 +0x064:  test   %al,%al
085f33a6 +0x066:  je     085f340c <+0xcc>
085f33a8 +0x068:  movzbl -0x65(%ebp),%eax
085f33ac +0x06c:  movzbl %al,%edx
085f33af +0x06f:  mov    0x10(%ebp),%eax
085f33b2 +0x072:  mov    -0x1c(%ebp),%ecx
085f33b5 +0x075:  mov    %ecx,0x28(%esp)
085f33b9 +0x079:  mov    %edx,0x24(%esp)
085f33bd +0x07d:  mov    0x1c(%ebp),%edx
085f33c0 +0x080:  mov    %edx,0x20(%esp)
085f33c4 +0x084:  mov    0x14(%ebp),%edx
085f33c7 +0x087:  mov    %edx,0x1c(%esp)
085f33cb +0x08b:  mov    %eax,0x18(%esp)
085f33cf +0x08f:  mov    0xc(%ebp),%eax
085f33d2 +0x092:  mov    %eax,0x14(%esp)
085f33d6 +0x096:  movl   $"_get_option_type (%d,%d,%d,%d,%d) error_line(%d)",0x10(%esp)
085f33de +0x09e:  movl   $0x356,0xc(%esp)
085f33e6 +0x0a6:  movl   $&_ZZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOptionE19__PRETTY_FUNCTION__,0x8(%esp)
085f33ee +0x0ae:  movl   $"RandomOption.cpp",0x4(%esp)
085f33f6 +0x0b6:  movl   $0x1,(%esp)
085f33fd +0x0bd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f3402 +0x0c2:  mov    $0x0,%ebx
085f3407 +0x0c7:  jmp    085f39c6 <+0x686>
085f340c +0x0cc:  movl   $0x0,-0x6c(%ebp)
085f3413 +0x0d3:  movzbl -0x65(%ebp),%eax
085f3417 +0x0d7:  movzbl %al,%eax
085f341a +0x0da:  lea    -0x6c(%ebp),%edx
085f341d +0x0dd:  mov    %edx,0x18(%esp)
085f3421 +0x0e1:  mov    %eax,0x14(%esp)
085f3425 +0x0e5:  mov    0x14(%ebp),%eax
085f3428 +0x0e8:  mov    %eax,0x10(%esp)
085f342c +0x0ec:  mov    0x18(%ebp),%eax
085f342f +0x0ef:  mov    %eax,0xc(%esp)
085f3433 +0x0f3:  mov    0x1c(%ebp),%eax
085f3436 +0x0f6:  mov    %eax,0x8(%esp)
085f343a +0x0fa:  mov    0x10(%ebp),%eax
085f343d +0x0fd:  mov    %eax,0x4(%esp)
085f3441 +0x101:  mov    0x8(%ebp),%eax
085f3444 +0x104:  mov    %eax,(%esp)
085f3447 +0x107:  call   085f2882 <_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi>  ; random_option::CRandomOptionItemHandle::_choose_option_group(ENUM_RARITY, int, int, int, int, int&)
085f344c +0x10c:  mov    %eax,-0x1c(%ebp)
085f344f +0x10f:  cmpl   $0x0,-0x1c(%ebp)
085f3453 +0x113:  setne  %al
085f3456 +0x116:  test   %al,%al
085f3458 +0x118:  je     085f34c5 <+0x185>
085f345a +0x11a:  mov    -0x6c(%ebp),%ecx
085f345d +0x11d:  movzbl -0x65(%ebp),%eax
085f3461 +0x121:  movzbl %al,%edx
085f3464 +0x124:  mov    0x10(%ebp),%eax
085f3467 +0x127:  mov    -0x1c(%ebp),%ebx
085f346a +0x12a:  mov    %ebx,0x2c(%esp)
085f346e +0x12e:  mov    %ecx,0x28(%esp)
085f3472 +0x132:  mov    %edx,0x24(%esp)
085f3476 +0x136:  mov    0x14(%ebp),%edx
085f3479 +0x139:  mov    %edx,0x20(%esp)
085f347d +0x13d:  mov    0x18(%ebp),%edx
085f3480 +0x140:  mov    %edx,0x1c(%esp)
085f3484 +0x144:  mov    0x1c(%ebp),%edx
085f3487 +0x147:  mov    %edx,0x18(%esp)
085f348b +0x14b:  mov    %eax,0x14(%esp)
085f348f +0x14f:  movl   $"_choose_option_group (%d,%d,%d,%d,%d,%d) error_line(%d)",0x10(%esp)
085f3497 +0x157:  movl   $0x35d,0xc(%esp)
085f349f +0x15f:  movl   $&_ZZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOptionE19__PRETTY_FUNCTION__,0x8(%esp)
085f34a7 +0x167:  movl   $"RandomOption.cpp",0x4(%esp)
085f34af +0x16f:  movl   $0x1,(%esp)
085f34b6 +0x176:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f34bb +0x17b:  mov    $0x0,%ebx
085f34c0 +0x180:  jmp    085f39c6 <+0x686>
085f34c5 +0x185:  lea    -0x78(%ebp),%eax
085f34c8 +0x188:  mov    %eax,(%esp)
085f34cb +0x18b:  call   085f419a <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x1b5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x1b5
085f34d0 +0x190:  mov    0x10(%ebp),%eax
085f34d3 +0x193:  mov    %al,-0x6e(%ebp)
085f34d6 +0x196:  movzbl -0x65(%ebp),%eax
085f34da +0x19a:  mov    %al,-0x6d(%ebp)
085f34dd +0x19d:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f34e2 +0x1a2:  lea    0xf4(%eax),%ecx
085f34e8 +0x1a8:  lea    -0x7c(%ebp),%eax
085f34eb +0x1ab:  lea    -0x6e(%ebp),%edx
085f34ee +0x1ae:  mov    %edx,0x8(%esp)
085f34f2 +0x1b2:  mov    %ecx,0x4(%esp)
085f34f6 +0x1b6:  mov    %eax,(%esp)
085f34f9 +0x1b9:  call   085f4710 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x72b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x72b
085f34fe +0x1be:  sub    $0x4,%esp
085f3501 +0x1c1:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f3506 +0x1c6:  lea    0xf4(%eax),%edx
085f350c +0x1cc:  lea    -0x64(%ebp),%eax
085f350f +0x1cf:  mov    %edx,0x4(%esp)
085f3513 +0x1d3:  mov    %eax,(%esp)
085f3516 +0x1d6:  call   085f473c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x757>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x757
085f351b +0x1db:  sub    $0x4,%esp
085f351e +0x1de:  lea    -0x64(%ebp),%eax
085f3521 +0x1e1:  mov    %eax,0x4(%esp)
085f3525 +0x1e5:  lea    -0x7c(%ebp),%eax
085f3528 +0x1e8:  mov    %eax,(%esp)
085f352b +0x1eb:  call   085f4762 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x77d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x77d
085f3530 +0x1f0:  test   %al,%al
085f3532 +0x1f2:  je     085f357c <+0x23c>
085f3534 +0x1f4:  movzbl -0x65(%ebp),%eax
085f3538 +0x1f8:  movzbl %al,%edx
085f353b +0x1fb:  mov    0x10(%ebp),%eax
085f353e +0x1fe:  mov    %edx,0x18(%esp)
085f3542 +0x202:  mov    %eax,0x14(%esp)
085f3546 +0x206:  movl   $"different_weight_ (%d,%d) ",0x10(%esp)
085f354e +0x20e:  movl   $0x369,0xc(%esp)
085f3556 +0x216:  movl   $&_ZZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOptionE19__PRETTY_FUNCTION__,0x8(%esp)
085f355e +0x21e:  movl   $"RandomOption.cpp",0x4(%esp)
085f3566 +0x226:  movl   $0x1,(%esp)
085f356d +0x22d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f3572 +0x232:  mov    $0x0,%ebx
085f3577 +0x237:  jmp    085f39c6 <+0x686>
085f357c +0x23c:  lea    -0x7c(%ebp),%eax
085f357f +0x23f:  mov    %eax,(%esp)
085f3582 +0x242:  call   085f4776 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x791>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x791
085f3587 +0x247:  mov    0x8(%eax),%edx
085f358a +0x24a:  mov    0x4(%eax),%eax
085f358d +0x24d:  mov    %eax,-0x78(%ebp)
085f3590 +0x250:  mov    %edx,-0x74(%ebp)
085f3593 +0x253:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f3598 +0x258:  lea    0x160(%eax),%ecx
085f359e +0x25e:  lea    -0x80(%ebp),%eax
085f35a1 +0x261:  lea    -0x6c(%ebp),%edx
085f35a4 +0x264:  mov    %edx,0x8(%esp)
085f35a8 +0x268:  mov    %ecx,0x4(%esp)
085f35ac +0x26c:  mov    %eax,(%esp)
085f35af +0x26f:  call   085f4784 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x79f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x79f
085f35b4 +0x274:  sub    $0x4,%esp
085f35b7 +0x277:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f35bc +0x27c:  lea    0x160(%eax),%edx
085f35c2 +0x282:  lea    -0x60(%ebp),%eax
085f35c5 +0x285:  mov    %edx,0x4(%esp)
085f35c9 +0x289:  mov    %eax,(%esp)
085f35cc +0x28c:  call   085f47b0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x7cb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x7cb
085f35d1 +0x291:  sub    $0x4,%esp
085f35d4 +0x294:  lea    -0x60(%ebp),%eax
085f35d7 +0x297:  mov    %eax,0x4(%esp)
085f35db +0x29b:  lea    -0x80(%ebp),%eax
085f35de +0x29e:  mov    %eax,(%esp)
085f35e1 +0x2a1:  call   085f47d6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x7f1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x7f1
085f35e6 +0x2a6:  test   %al,%al
085f35e8 +0x2a8:  je     085f3627 <+0x2e7>
085f35ea +0x2aa:  mov    -0x6c(%ebp),%eax
085f35ed +0x2ad:  mov    %eax,0x14(%esp)
085f35f1 +0x2b1:  movl   $"option_group_ (%d) ",0x10(%esp)
085f35f9 +0x2b9:  movl   $0x371,0xc(%esp)
085f3601 +0x2c1:  movl   $&_ZZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOptionE19__PRETTY_FUNCTION__,0x8(%esp)
085f3609 +0x2c9:  movl   $"RandomOption.cpp",0x4(%esp)
085f3611 +0x2d1:  movl   $0x1,(%esp)
085f3618 +0x2d8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f361d +0x2dd:  mov    $0x0,%ebx
085f3622 +0x2e2:  jmp    085f39c6 <+0x686>
085f3627 +0x2e7:  lea    -0x80(%ebp),%eax
085f362a +0x2ea:  mov    %eax,(%esp)
085f362d +0x2ed:  call   085f47ea <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x805>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x805
085f3632 +0x2f2:  mov    0x10(%eax),%eax
085f3635 +0x2f5:  mov    %eax,-0x18(%ebp)
085f3638 +0x2f8:  lea    -0x80(%ebp),%eax
085f363b +0x2fb:  mov    %eax,(%esp)
085f363e +0x2fe:  call   085f47ea <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x805>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x805
085f3643 +0x303:  add    $0x4,%eax
085f3646 +0x306:  mov    %eax,0x4(%esp)
085f364a +0x30a:  lea    -0x8c(%ebp),%eax
085f3650 +0x310:  mov    %eax,(%esp)
085f3653 +0x313:  call   085f47f8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x813>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x813
085f3658 +0x318:  movl   $0x0,-0x14(%ebp)
085f365f +0x31f:  movl   $0x0,-0x10(%ebp)
085f3666 +0x326:  lea    -0x90(%ebp),%eax
085f366c +0x32c:  mov    %eax,(%esp)
085f366f +0x32f:  call   085f48ac <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8c7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8c7
085f3674 +0x334:  movl   $0x0,-0xc(%ebp)
085f367b +0x33b:  jmp    085f3775 <+0x435>
085f3680 +0x340:  mov    0x20(%ebp),%eax
085f3683 +0x343:  cmp    -0xc(%ebp),%eax
085f3686 +0x346:  je     085f3771 <+0x431>
085f368c +0x34c:  mov    -0xc(%ebp),%edx
085f368f +0x34f:  mov    0x24(%ebp),%ecx
085f3692 +0x352:  mov    %edx,%eax
085f3694 +0x354:  add    %eax,%eax
085f3696 +0x356:  add    %edx,%eax
085f3698 +0x358:  movzbl (%eax,%ecx,1),%eax
085f369c +0x35c:  test   %al,%al
085f369e +0x35e:  je     085f3771 <+0x431>
085f36a4 +0x364:  lea    -0x94(%ebp),%eax
085f36aa +0x36a:  lea    -0x8c(%ebp),%edx
085f36b0 +0x370:  mov    %edx,0x4(%esp)
085f36b4 +0x374:  mov    %eax,(%esp)
085f36b7 +0x377:  call   085f48ba <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8d5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8d5
085f36bc +0x37c:  sub    $0x4,%esp
085f36bf +0x37f:  jmp    085f373c <+0x3fc>
085f36c1 +0x381:  lea    -0x94(%ebp),%eax
085f36c7 +0x387:  mov    %eax,(%esp)
085f36ca +0x38a:  call   085f49fc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xa17>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xa17
085f36cf +0x38f:  mov    (%eax),%ebx
085f36d1 +0x391:  mov    -0xc(%ebp),%edx
085f36d4 +0x394:  mov    0x24(%ebp),%ecx
085f36d7 +0x397:  mov    %edx,%eax
085f36d9 +0x399:  add    %eax,%eax
085f36db +0x39b:  add    %edx,%eax
085f36dd +0x39d:  movzbl (%eax,%ecx,1),%eax
085f36e1 +0x3a1:  movzbl %al,%eax
085f36e4 +0x3a4:  cmp    %eax,%ebx
085f36e6 +0x3a6:  sete   %al
085f36e9 +0x3a9:  test   %al,%al
085f36eb +0x3ab:  je     085f372e <+0x3ee>
085f36ed +0x3ad:  mov    -0x18(%ebp),%ebx
085f36f0 +0x3b0:  lea    -0x94(%ebp),%eax
085f36f6 +0x3b6:  mov    %eax,(%esp)
085f36f9 +0x3b9:  call   085f49fc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xa17>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xa17
085f36fe +0x3be:  mov    0x4(%eax),%eax
085f3701 +0x3c1:  mov    %ebx,%edx
085f3703 +0x3c3:  sub    %eax,%edx
085f3705 +0x3c5:  mov    %edx,%eax
085f3707 +0x3c7:  mov    %eax,-0x18(%ebp)
085f370a +0x3ca:  lea    -0x58(%ebp),%eax
085f370d +0x3cd:  mov    -0x94(%ebp),%edx
085f3713 +0x3d3:  mov    %edx,0x8(%esp)
085f3717 +0x3d7:  lea    -0x8c(%ebp),%edx
085f371d +0x3dd:  mov    %edx,0x4(%esp)
085f3721 +0x3e1:  mov    %eax,(%esp)
085f3724 +0x3e4:  call   085f4a06 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xa21>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xa21
085f3729 +0x3e9:  sub    $0x4,%esp
085f372c +0x3ec:  jmp    085f3771 <+0x431>
085f372e +0x3ee:  lea    -0x94(%ebp),%eax
085f3734 +0x3f4:  mov    %eax,(%esp)
085f3737 +0x3f7:  call   085f4ea4 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xebf>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xebf
085f373c +0x3fc:  lea    -0x5c(%ebp),%eax
085f373f +0x3ff:  lea    -0x8c(%ebp),%edx
085f3745 +0x405:  mov    %edx,0x4(%esp)
085f3749 +0x409:  mov    %eax,(%esp)
085f374c +0x40c:  call   085f48de <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8f9>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8f9
085f3751 +0x411:  sub    $0x4,%esp
085f3754 +0x414:  lea    -0x5c(%ebp),%eax
085f3757 +0x417:  mov    %eax,0x4(%esp)
085f375b +0x41b:  lea    -0x94(%ebp),%eax
085f3761 +0x421:  mov    %eax,(%esp)
085f3764 +0x424:  call   085f4e77 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xe92>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xe92
085f3769 +0x429:  test   %al,%al
085f376b +0x42b:  jne    085f36c1 <+0x381>
085f3771 +0x431:  addl   $0x1,-0xc(%ebp)
085f3775 +0x435:  cmpl   $0x2,-0xc(%ebp)
085f3779 +0x439:  setle  %al
085f377c +0x43c:  test   %al,%al
085f377e +0x43e:  jne    085f3680 <+0x340>
085f3784 +0x444:  mov    -0x18(%ebp),%eax
085f3787 +0x447:  mov    %eax,-0x54(%ebp)
085f378a +0x44a:  mov    0x8(%ebp),%eax
085f378d +0x44d:  mov    0x4(%eax),%eax
085f3790 +0x450:  lea    0x5808(%eax),%edx
085f3796 +0x456:  lea    -0x54(%ebp),%eax
085f3799 +0x459:  mov    %eax,0x4(%esp)
085f379d +0x45d:  mov    %edx,(%esp)
085f37a0 +0x460:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f37a5 +0x465:  mov    %eax,-0x14(%ebp)
085f37a8 +0x468:  mov    -0x14(%ebp),%eax
085f37ab +0x46b:  mov    %eax,0x4(%esp)
085f37af +0x46f:  lea    -0x40(%ebp),%eax
085f37b2 +0x472:  mov    %eax,(%esp)
085f37b5 +0x475:  call   085f4904 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x91f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x91f
085f37ba +0x47a:  lea    -0x30(%ebp),%eax
085f37bd +0x47d:  lea    -0x8c(%ebp),%edx
085f37c3 +0x483:  mov    %edx,0x4(%esp)
085f37c7 +0x487:  mov    %eax,(%esp)
085f37ca +0x48a:  call   085f48de <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8f9>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8f9
085f37cf +0x48f:  sub    $0x4,%esp
085f37d2 +0x492:  lea    -0x2c(%ebp),%eax
085f37d5 +0x495:  lea    -0x8c(%ebp),%edx
085f37db +0x49b:  mov    %edx,0x4(%esp)
085f37df +0x49f:  mov    %eax,(%esp)
085f37e2 +0x4a2:  call   085f48ba <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8d5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8d5
085f37e7 +0x4a7:  sub    $0x4,%esp
085f37ea +0x4aa:  lea    -0x50(%ebp),%eax
085f37ed +0x4ad:  mov    -0x40(%ebp),%edx
085f37f0 +0x4b0:  mov    %edx,0xc(%esp)
085f37f4 +0x4b4:  mov    -0x3c(%ebp),%edx
085f37f7 +0x4b7:  mov    %edx,0x10(%esp)
085f37fb +0x4bb:  mov    -0x38(%ebp),%edx
085f37fe +0x4be:  mov    %edx,0x14(%esp)
085f3802 +0x4c2:  mov    -0x34(%ebp),%edx
085f3805 +0x4c5:  mov    %edx,0x18(%esp)
085f3809 +0x4c9:  mov    -0x30(%ebp),%edx
085f380c +0x4cc:  mov    %edx,0x8(%esp)
085f3810 +0x4d0:  mov    -0x2c(%ebp),%edx
085f3813 +0x4d3:  mov    %edx,0x4(%esp)
085f3817 +0x4d7:  mov    %eax,(%esp)
085f381a +0x4da:  call   085f492f <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x94a>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x94a
085f381f +0x4df:  sub    $0x4,%esp
085f3822 +0x4e2:  lea    -0x50(%ebp),%eax
085f3825 +0x4e5:  mov    %eax,(%esp)
085f3828 +0x4e8:  call   085f49a0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9bb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9bb
085f382d +0x4ed:  mov    %eax,-0x10(%ebp)
085f3830 +0x4f0:  lea    -0x8c(%ebp),%eax
085f3836 +0x4f6:  mov    %eax,(%esp)
085f3839 +0x4f9:  call   085f49aa <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9c5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9c5
085f383e +0x4fe:  cmp    -0x10(%ebp),%eax
085f3841 +0x501:  setbe  %al
085f3844 +0x504:  test   %al,%al
085f3846 +0x506:  je     085f3897 <+0x557>
085f3848 +0x508:  lea    -0x8c(%ebp),%eax
085f384e +0x50e:  mov    %eax,(%esp)
085f3851 +0x511:  call   085f49aa <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9c5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9c5
085f3856 +0x516:  mov    %eax,0x18(%esp)
085f385a +0x51a:  mov    -0x10(%ebp),%eax
085f385d +0x51d:  mov    %eax,0x14(%esp)
085f3861 +0x521:  movl   $"_option_group.size() %d, %d ",0x10(%esp)
085f3869 +0x529:  movl   $0x390,0xc(%esp)
085f3871 +0x531:  movl   $&_ZZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOptionE19__PRETTY_FUNCTION__,0x8(%esp)
085f3879 +0x539:  movl   $"RandomOption.cpp",0x4(%esp)
085f3881 +0x541:  movl   $0x1,(%esp)
085f3888 +0x548:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085f388d +0x54d:  mov    $0x0,%ebx
085f3892 +0x552:  jmp    085f39b8 <+0x678>
085f3897 +0x557:  mov    -0x10(%ebp),%eax
085f389a +0x55a:  mov    %eax,-0x28(%ebp)
085f389d +0x55d:  lea    -0x24(%ebp),%eax
085f38a0 +0x560:  lea    -0x8c(%ebp),%edx
085f38a6 +0x566:  mov    %edx,0x4(%esp)
085f38aa +0x56a:  mov    %eax,(%esp)
085f38ad +0x56d:  call   085f48ba <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x8d5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x8d5
085f38b2 +0x572:  sub    $0x4,%esp
085f38b5 +0x575:  lea    -0x9c(%ebp),%eax
085f38bb +0x57b:  lea    -0x28(%ebp),%edx
085f38be +0x57e:  mov    %edx,0x8(%esp)
085f38c2 +0x582:  lea    -0x24(%ebp),%edx
085f38c5 +0x585:  mov    %edx,0x4(%esp)
085f38c9 +0x589:  mov    %eax,(%esp)
085f38cc +0x58c:  call   085f49c6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9e1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9e1
085f38d1 +0x591:  sub    $0x4,%esp
085f38d4 +0x594:  mov    -0x9c(%ebp),%eax
085f38da +0x59a:  mov    %eax,-0x90(%ebp)
085f38e0 +0x5a0:  lea    -0x90(%ebp),%eax
085f38e6 +0x5a6:  mov    %eax,(%esp)
085f38e9 +0x5a9:  call   085f49fc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xa17>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xa17
085f38ee +0x5ae:  mov    (%eax),%eax
085f38f0 +0x5b0:  mov    %eax,%edx
085f38f2 +0x5b2:  mov    0x24(%ebp),%eax
085f38f5 +0x5b5:  mov    %dl,0xa(%eax)
085f38f8 +0x5b8:  mov    -0x74(%ebp),%edx
085f38fb +0x5bb:  mov    -0x78(%ebp),%eax
085f38fe +0x5be:  mov    %edx,0x8(%esp)
085f3902 +0x5c2:  mov    %eax,0x4(%esp)
085f3906 +0x5c6:  mov    0x8(%ebp),%eax
085f3909 +0x5c9:  mov    %eax,(%esp)
085f390c +0x5cc:  call   085f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>  ; random_option::CRandomOptionItemHandle::_get_option_value(int, int)
085f3911 +0x5d1:  mov    %eax,%edx
085f3913 +0x5d3:  mov    0x24(%ebp),%eax
085f3916 +0x5d6:  mov    %dl,0xb(%eax)
085f3919 +0x5d9:  mov    -0x74(%ebp),%edx
085f391c +0x5dc:  mov    -0x78(%ebp),%eax
085f391f +0x5df:  mov    %edx,0x8(%esp)
085f3923 +0x5e3:  mov    %eax,0x4(%esp)
085f3927 +0x5e7:  mov    0x8(%ebp),%eax
085f392a +0x5ea:  mov    %eax,(%esp)
085f392d +0x5ed:  call   085f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>  ; random_option::CRandomOptionItemHandle::_get_option_value(int, int)
085f3932 +0x5f2:  mov    %eax,%edx
085f3934 +0x5f4:  mov    0x24(%ebp),%eax
085f3937 +0x5f7:  mov    %dl,0xc(%eax)
085f393a +0x5fa:  mov    0x20(%ebp),%eax
085f393d +0x5fd:  mov    %eax,%edx
085f393f +0x5ff:  and    $0x3,%edx
085f3942 +0x602:  mov    0x24(%ebp),%eax
085f3945 +0x605:  mov    %edx,%ecx
085f3947 +0x607:  and    $0x3,%ecx
085f394a +0x60a:  movzbl 0xd(%eax),%edx
085f394e +0x60e:  and    $0xfffffffc,%edx
085f3951 +0x611:  or     %ecx,%edx
085f3953 +0x613:  mov    %dl,0xd(%eax)
085f3956 +0x616:  movl   $0x40,-0x20(%ebp)
085f395d +0x61d:  mov    0x8(%ebp),%eax
085f3960 +0x620:  mov    0x4(%eax),%eax
085f3963 +0x623:  lea    0x61d0(%eax),%edx
085f3969 +0x629:  lea    -0x20(%ebp),%eax
085f396c +0x62c:  mov    %eax,0x4(%esp)
085f3970 +0x630:  mov    %edx,(%esp)
085f3973 +0x633:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f3978 +0x638:  mov    %eax,%edx
085f397a +0x63a:  and    $0x3f,%edx
085f397d +0x63d:  mov    0x24(%ebp),%eax
085f3980 +0x640:  lea    0x0(,%edx,4),%ecx
085f3987 +0x647:  movzbl 0xd(%eax),%edx
085f398b +0x64b:  and    $0x3,%edx
085f398e +0x64e:  or     %ecx,%edx
085f3990 +0x650:  mov    %dl,0xd(%eax)
085f3993 +0x653:  mov    $0x1,%ebx
085f3998 +0x658:  jmp    085f39b8 <+0x678>
085f399a +0x65a:  mov    %edx,%ebx
085f399c +0x65c:  mov    %eax,%esi
085f399e +0x65e:  lea    -0x8c(%ebp),%eax
085f39a4 +0x664:  mov    %eax,(%esp)
085f39a7 +0x667:  call   083860f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x15b94>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x15b94
085f39ac +0x66c:  mov    %esi,%eax
085f39ae +0x66e:  mov    %ebx,%edx
085f39b0 +0x670:  mov    %eax,(%esp)
085f39b3 +0x673:  call   08ae3750 <_Unwind_Resume>
085f39b8 +0x678:  lea    -0x8c(%ebp),%eax
085f39be +0x67e:  mov    %eax,(%esp)
085f39c1 +0x681:  call   083860f4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x15b94>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x15b94
085f39c6 +0x686:  mov    %ebx,%eax
085f39c8 +0x688:  lea    -0x8(%ebp),%esp
085f39cb +0x68b:  add    $0x0,%esp
085f39ce +0x68e:  pop    %ebx
085f39cf +0x68f:  pop    %esi
085f39d0 +0x690:  pop    %ebp
085f39d1 +0x691:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::change_option @ 0x85f3340

/* random_option::CRandomOptionItemHandle::change_option(unsigned long, ENUM_RARITY, int, int, int,
   int, RandomOption*) */

bool __thiscall
random_option::CRandomOptionItemHandle::change_option
          (CRandomOptionItemHandle *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined4 local_94;
  vector<OptionGroup,std::allocator<OptionGroup>> local_90 [12];
  _Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>> local_84 [4];
  _Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>> local_80 [4];
  int local_7c;
  int local_78;
  undefined1 local_72;
  byte local_71;
  undefined4 local_70;
  byte local_69;
  map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
  local_68 [4];
  map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
  local_64 [4];
  __normal_iterator local_60 [4];
  undefined1 local_5c [4];
  ulong local_58;
  CRandomList<unsigned_int> local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  int local_28 [4];
  uint local_18;
  uint local_14;
  int local_10;
  
  if ((param_7 < 0) || (2 < param_7)) {
    bVar2 = false;
  }
  else {
    local_69 = 0;
    local_28[2] = 0;
    local_28[2] = _get_option_type(this,param_1,param_3,param_4,param_6,&local_69);
    if (local_28[2] == 0) {
      local_70 = 0;
      local_28[2] = _choose_option_group(this,param_3,param_6,param_5,param_4,local_69,&local_70);
      if (local_28[2] == 0) {
        DifferentWeightValue::DifferentWeightValue((DifferentWeightValue *)&local_7c);
        local_72 = (undefined1)param_3;
        local_71 = local_69;
        GetRandomOption();
        std::
        map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
        ::find((short *)local_80);
        GetRandomOption();
        std::
        map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
        ::end(local_68);
        cVar1 = std::_Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>>::
                operator==(local_80,(_Rb_tree_const_iterator *)local_68);
        if (cVar1 == '\0') {
          iVar4 = std::_Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>>::
                  operator->(local_80);
          local_78 = *(int *)(iVar4 + 8);
          local_7c = *(int *)(iVar4 + 4);
          GetRandomOption();
          std::
          map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
          ::find((int *)local_84);
          GetRandomOption();
          std::
          map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
          ::end(local_64);
          cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator==
                            (local_84,(_Rb_tree_const_iterator *)local_64);
          if (cVar1 == '\0') {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator->
                              (local_84);
            local_28[3] = *(ulong *)(iVar4 + 0x10);
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
            for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
              if ((param_7 != local_10) && (*(char *)(local_10 * 3 + param_8) != '\0')) {
                    /* try { // try from 085f36b7 to 085f3931 has its CatchHandler @ 085f399a */
                std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
                while( true ) {
                  std::vector<OptionGroup,std::allocator<OptionGroup>>::end();
                  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,local_60);
                  if (!bVar2) break;
                  puVar5 = (uint *)__gnu_cxx::
                                   __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                   ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                                *)&local_98);
                  iVar4 = local_28[3];
                  if (*puVar5 == (uint)*(byte *)(local_10 * 3 + param_8)) {
                    iVar6 = __gnu_cxx::
                            __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                            ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                         *)&local_98);
                    local_28[3] = iVar4 - *(int *)(iVar6 + 4);
                    std::vector<OptionGroup,std::allocator<OptionGroup>>::erase
                              (local_5c,local_90,local_98);
                    break;
                  }
                  __gnu_cxx::
                  __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                  ::operator++((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                *)&local_98);
                }
              }
            }
            local_58 = local_28[3];
            local_18 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x5808),&local_58);
            CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)&local_44,local_18);
            std::vector<OptionGroup,std::allocator<OptionGroup>>::end();
            std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
            std::
            for_each<__gnu_cxx::__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>,CRandomList<unsigned_int>>
                      (local_54,local_30,local_34,local_44,local_40,local_3c,local_38);
            local_14 = CRandomList<unsigned_int>::get_value(local_54);
            uVar7 = std::vector<OptionGroup,std::allocator<OptionGroup>>::size(local_90);
            bVar2 = local_14 < uVar7;
            if (bVar2) {
              local_2c = local_14;
              std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
              __gnu_cxx::
              __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>::
              operator+((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                         *)local_a0,local_28);
              local_94 = local_a0[0];
              puVar9 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                       ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                    *)&local_94);
              *(char *)(param_8 + 10) = (char)*puVar9;
              uVar3 = _get_option_value(this,local_7c,local_78);
              *(undefined1 *)(param_8 + 0xb) = uVar3;
              uVar3 = _get_option_value(this,local_7c,local_78);
              *(undefined1 *)(param_8 + 0xc) = uVar3;
              *(byte *)(param_8 + 0xd) = *(byte *)(param_8 + 0xd) & 0xfc | (byte)param_7 & 3;
              local_28[1] = 0x40;
              cVar1 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x61d0),
                                       (ulong *)(local_28 + 1));
              *(byte *)(param_8 + 0xd) = *(byte *)(param_8 + 0xd) & 3 | cVar1 * '\x04';
            }
            else {
              uVar8 = std::vector<OptionGroup,std::allocator<OptionGroup>>::size(local_90);
              LogManager::logFormat
                        (1,"RandomOption.cpp",
                         "bool random_option::CRandomOptionItemHandle::change_option(itemIndex_t, ENUM_RARITY, int, int, int, int, RandomOption*)"
                         ,0x390,"_option_group.size() %d, %d ",local_14,uVar8);
            }
            std::vector<OptionGroup,std::allocator<OptionGroup>>::~vector(local_90);
          }
          else {
            LogManager::logFormat
                      (1,"RandomOption.cpp",
                       "bool random_option::CRandomOptionItemHandle::change_option(itemIndex_t, ENUM_RARITY, int, int, int, int, RandomOption*)"
                       ,0x371,"option_group_ (%d) ",local_70);
            bVar2 = false;
          }
        }
        else {
          LogManager::logFormat
                    (1,"RandomOption.cpp",
                     "bool random_option::CRandomOptionItemHandle::change_option(itemIndex_t, ENUM_RARITY, int, int, int, int, RandomOption*)"
                     ,0x369,"different_weight_ (%d,%d) ",param_3,(uint)local_69);
          bVar2 = false;
        }
      }
      else {
        LogManager::logFormat
                  (1,"RandomOption.cpp",
                   "bool random_option::CRandomOptionItemHandle::change_option(itemIndex_t, ENUM_RARITY, int, int, int, int, RandomOption*)"
                   ,0x35d,"_choose_option_group (%d,%d,%d,%d,%d,%d) error_line(%d)",param_3,param_6,
                   param_5,param_4,(uint)local_69,local_70,local_28[2]);
        bVar2 = false;
      }
    }
    else {
      LogManager::logFormat
                (1,"RandomOption.cpp",
                 "bool random_option::CRandomOptionItemHandle::change_option(itemIndex_t, ENUM_RARITY, int, int, int, int, RandomOption*)"
                 ,0x356,"_get_option_type (%d,%d,%d,%d,%d) error_line(%d)",param_1,param_3,param_4,
                 param_6,(uint)local_69,local_28[2]);
      bVar2 = false;
    }
  }
  return bVar2;
}
```
