# setCharacInfoDetail

`_ZN5CUser19setCharacInfoDetailEijP11CHARAC_DATA`

`CUser::setCharacInfoDetail(int, unsigned int, CHARAC_DATA*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864ac1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864ac1a  _ZN5CUser19setCharacInfoDetailEijP11CHARAC_DATA
#           CUser::setCharacInfoDetail(int, unsigned int, CHARAC_DATA*)
# range [0x0864ac1a, 0x0864bc03]
0864ac1a +0x000:  push   %ebp
0864ac1b +0x001:  mov    %esp,%ebp
0864ac1d +0x003:  push   %edi
0864ac1e +0x004:  push   %esi
0864ac1f +0x005:  push   %ebx
0864ac20 +0x006:  sub    $0x7c,%esp
0864ac23 +0x009:  cmpl   $0x0,0xc(%ebp)
0864ac27 +0x00d:  js     0864ac45 <+0x2b>
0864ac29 +0x00f:  mov    0x8(%ebp),%eax
0864ac2c +0x012:  add    $0x796e8,%eax
0864ac31 +0x017:  mov    %eax,(%esp)
0864ac34 +0x01a:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0864ac39 +0x01f:  cmp    0xc(%ebp),%eax
0864ac3c +0x022:  jle    0864ac45 <+0x2b>
0864ac3e +0x024:  mov    $0x1,%eax
0864ac43 +0x029:  jmp    0864ac4a <+0x30>
0864ac45 +0x02b:  mov    $0x0,%eax
0864ac4a +0x030:  test   %al,%al
0864ac4c +0x032:  je     0864bbf6 <+0xfdc>
0864ac52 +0x038:  mov    0xc(%ebp),%eax
0864ac55 +0x03b:  mov    0x8(%ebp),%edx
0864ac58 +0x03e:  add    $0x796e8,%edx
0864ac5e +0x044:  mov    %eax,0x4(%esp)
0864ac62 +0x048:  mov    %edx,(%esp)
0864ac65 +0x04b:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ac6a +0x050:  mov    (%eax),%eax
0864ac6c +0x052:  cmp    0x10(%ebp),%eax
0864ac6f +0x055:  setne  %al
0864ac72 +0x058:  test   %al,%al
0864ac74 +0x05a:  je     0864ac80 <+0x66>
0864ac76 +0x05c:  mov    $0x0,%eax
0864ac7b +0x061:  jmp    0864bbfb <+0xfe1>
0864ac80 +0x066:  mov    0xc(%ebp),%eax
0864ac83 +0x069:  mov    0x8(%ebp),%edx
0864ac86 +0x06c:  add    $0x796e8,%edx
0864ac8c +0x072:  mov    %eax,0x4(%esp)
0864ac90 +0x076:  mov    %edx,(%esp)
0864ac93 +0x079:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ac98 +0x07e:  mov    0x14(%ebp),%edx
0864ac9b +0x081:  mov    (%edx),%edx
0864ac9d +0x083:  mov    %edx,(%eax)
0864ac9f +0x085:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0864aca4 +0x08a:  mov    %eax,(%esp)
0864aca7 +0x08d:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0864acac +0x092:  cmp    $0x7,%eax
0864acaf +0x095:  sete   %al
0864acb2 +0x098:  test   %al,%al
0864acb4 +0x09a:  jne    0864aceb <+0xd1>
0864acb6 +0x09c:  mov    0x14(%ebp),%eax
0864acb9 +0x09f:  lea    0x4(%eax),%ebx
0864acbc +0x0a2:  mov    0xc(%ebp),%eax
0864acbf +0x0a5:  mov    0x8(%ebp),%edx
0864acc2 +0x0a8:  add    $0x796e8,%edx
0864acc8 +0x0ae:  mov    %eax,0x4(%esp)
0864accc +0x0b2:  mov    %edx,(%esp)
0864accf +0x0b5:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864acd4 +0x0ba:  add    $0x4,%eax
0864acd7 +0x0bd:  movl   $0x1e,0x8(%esp)
0864acdf +0x0c5:  mov    %ebx,0x4(%esp)
0864ace3 +0x0c9:  mov    %eax,(%esp)
0864ace6 +0x0cc:  call   0807d8d0 <_init+0x1c8>
0864aceb +0x0d1:  mov    0xc(%ebp),%eax
0864acee +0x0d4:  mov    0x8(%ebp),%edx
0864acf1 +0x0d7:  add    $0x796e8,%edx
0864acf7 +0x0dd:  mov    %eax,0x4(%esp)
0864acfb +0x0e1:  mov    %edx,(%esp)
0864acfe +0x0e4:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ad03 +0x0e9:  mov    0x14(%ebp),%edx
0864ad06 +0x0ec:  movzbl 0x22(%edx),%edx
0864ad0a +0x0f0:  mov    %dl,0x22(%eax)
0864ad0d +0x0f3:  mov    0x14(%ebp),%eax
0864ad10 +0x0f6:  movzbl 0x22(%eax),%eax
0864ad14 +0x0fa:  cmp    $0x7,%al
0864ad16 +0x0fc:  jne    0864ad50 <+0x136>
0864ad18 +0x0fe:  mov    0xc(%ebp),%eax
0864ad1b +0x101:  mov    0x8(%ebp),%edx
0864ad1e +0x104:  add    $0x796e8,%edx
0864ad24 +0x10a:  mov    %eax,0x4(%esp)
0864ad28 +0x10e:  mov    %edx,(%esp)
0864ad2b +0x111:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ad30 +0x116:  movb   $0x2,0x22(%eax)
0864ad34 +0x11a:  mov    0xc(%ebp),%eax
0864ad37 +0x11d:  mov    0x8(%ebp),%edx
0864ad3a +0x120:  add    $0x796e8,%edx
0864ad40 +0x126:  mov    %eax,0x4(%esp)
0864ad44 +0x12a:  mov    %edx,(%esp)
0864ad47 +0x12d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ad4c +0x132:  movb   $0x7,0x24(%eax)
0864ad50 +0x136:  mov    0x14(%ebp),%eax
0864ad53 +0x139:  movzbl 0x22(%eax),%eax
0864ad57 +0x13d:  cmp    $0x8,%al
0864ad59 +0x13f:  jne    0864ada6 <+0x18c>
0864ad5b +0x141:  mov    0x14(%ebp),%eax
0864ad5e +0x144:  movzbl 0x22(%eax),%eax
0864ad62 +0x148:  mov    %al,-0x19(%ebp)
0864ad65 +0x14b:  mov    0xc(%ebp),%eax
0864ad68 +0x14e:  mov    0x8(%ebp),%edx
0864ad6b +0x151:  add    $0x796e8,%edx
0864ad71 +0x157:  mov    %eax,0x4(%esp)
0864ad75 +0x15b:  mov    %edx,(%esp)
0864ad78 +0x15e:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ad7d +0x163:  mov    0x14(%ebp),%edx
0864ad80 +0x166:  movzbl 0x23(%edx),%edx
0864ad84 +0x16a:  mov    %dl,0x22(%eax)
0864ad87 +0x16d:  mov    0xc(%ebp),%eax
0864ad8a +0x170:  mov    0x8(%ebp),%edx
0864ad8d +0x173:  add    $0x796e8,%edx
0864ad93 +0x179:  mov    %eax,0x4(%esp)
0864ad97 +0x17d:  mov    %edx,(%esp)
0864ad9a +0x180:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ad9f +0x185:  movzbl -0x19(%ebp),%edx
0864ada3 +0x189:  mov    %dl,0x25(%eax)
0864ada6 +0x18c:  mov    0x14(%ebp),%eax
0864ada9 +0x18f:  cmpb   $0xc,0x22(%eax)
0864adad +0x193:  je     0864adb5 <+0x19b>
0864adaf +0x195:  cmpb   $0xd,0x22(%eax)
0864adb3 +0x199:  jne    0864adcd <+0x1b3>
0864adb5 +0x19b:  pop    %edx
0864adb6 +0x19c:  pop    %edx
0864adb7 +0x19d:  mov    0x8(%ebp),%edx
0864adba +0x1a0:  add    $0x796e8,%edx
0864adc0 +0x1a6:  push   0xc(%ebp)
0864adc3 +0x1a9:  push   %edx
0864adc4 +0x1aa:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864adc9 +0x1af:  movb   $0xb,0x22(%eax)
0864adcd +0x1b3:  mov    0xc(%ebp),%eax
0864add0 +0x1b6:  mov    0x8(%ebp),%edx
0864add3 +0x1b9:  add    $0x796e8,%edx
0864add9 +0x1bf:  mov    %eax,0x4(%esp)
0864addd +0x1c3:  mov    %edx,(%esp)
0864ade0 +0x1c6:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ade5 +0x1cb:  movb   $0x2,0x23(%eax)
0864ade9 +0x1cf:  mov    0xc(%ebp),%eax
0864adec +0x1d2:  mov    0x8(%ebp),%edx
0864adef +0x1d5:  add    $0x796e8,%edx
0864adf5 +0x1db:  mov    %eax,0x4(%esp)
0864adf9 +0x1df:  mov    %edx,(%esp)
0864adfc +0x1e2:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ae01 +0x1e7:  mov    0x14(%ebp),%edx
0864ae04 +0x1ea:  movzbl 0x24(%edx),%edx
0864ae08 +0x1ee:  mov    %dl,0x26(%eax)
0864ae0b +0x1f1:  mov    0xc(%ebp),%eax
0864ae0e +0x1f4:  mov    0x8(%ebp),%edx
0864ae11 +0x1f7:  add    $0x796e8,%edx
0864ae17 +0x1fd:  mov    %eax,0x4(%esp)
0864ae1b +0x201:  mov    %edx,(%esp)
0864ae1e +0x204:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ae23 +0x209:  mov    0x14(%ebp),%edx
0864ae26 +0x20c:  movzwl 0x25(%edx),%edx
0864ae2a +0x210:  mov    %dx,0x27(%eax)
0864ae2e +0x214:  mov    0xc(%ebp),%eax
0864ae31 +0x217:  mov    0x8(%ebp),%edx
0864ae34 +0x21a:  add    $0x796e8,%edx
0864ae3a +0x220:  mov    %eax,0x4(%esp)
0864ae3e +0x224:  mov    %edx,(%esp)
0864ae41 +0x227:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ae46 +0x22c:  mov    0x14(%ebp),%edx
0864ae49 +0x22f:  mov    0x28(%edx),%edx
0864ae4c +0x232:  mov    %edx,0x2b(%eax)
0864ae4f +0x235:  mov    0xc(%ebp),%eax
0864ae52 +0x238:  mov    0x8(%ebp),%edx
0864ae55 +0x23b:  add    $0x796e8,%edx
0864ae5b +0x241:  mov    %eax,0x4(%esp)
0864ae5f +0x245:  mov    %edx,(%esp)
0864ae62 +0x248:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ae67 +0x24d:  mov    0x14(%ebp),%edx
0864ae6a +0x250:  movzbl 0x27(%edx),%edx
0864ae6e +0x254:  mov    %dl,0x29(%eax)
0864ae71 +0x257:  mov    0xc(%ebp),%eax
0864ae74 +0x25a:  mov    0x8(%ebp),%edx
0864ae77 +0x25d:  add    $0x796e8,%edx
0864ae7d +0x263:  mov    %eax,0x4(%esp)
0864ae81 +0x267:  mov    %edx,(%esp)
0864ae84 +0x26a:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ae89 +0x26f:  mov    0x14(%ebp),%edx
0864ae8c +0x272:  movzbl 0xb2(%edx),%edx
0864ae93 +0x279:  mov    %dl,0x75(%eax)
0864ae96 +0x27c:  mov    0xc(%ebp),%eax
0864ae99 +0x27f:  mov    0x8(%ebp),%edx
0864ae9c +0x282:  add    $0x796e8,%edx
0864aea2 +0x288:  mov    %eax,0x4(%esp)
0864aea6 +0x28c:  mov    %edx,(%esp)
0864aea9 +0x28f:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864aeae +0x294:  mov    0x14(%ebp),%edx
0864aeb1 +0x297:  mov    0x60(%edx),%edx
0864aeb4 +0x29a:  mov    %edx,0x88(%eax)
0864aeba +0x2a0:  mov    0xc(%ebp),%eax
0864aebd +0x2a3:  mov    0x8(%ebp),%edx
0864aec0 +0x2a6:  add    $0x796e8,%edx
0864aec6 +0x2ac:  mov    %eax,0x4(%esp)
0864aeca +0x2b0:  mov    %edx,(%esp)
0864aecd +0x2b3:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864aed2 +0x2b8:  mov    0x14(%ebp),%edx
0864aed5 +0x2bb:  mov    0x64(%edx),%edx
0864aed8 +0x2be:  mov    %edx,0x8c(%eax)
0864aede +0x2c4:  mov    0xc(%ebp),%eax
0864aee1 +0x2c7:  mov    0x8(%ebp),%edx
0864aee4 +0x2ca:  add    $0x796e8,%edx
0864aeea +0x2d0:  mov    %eax,0x4(%esp)
0864aeee +0x2d4:  mov    %edx,(%esp)
0864aef1 +0x2d7:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864aef6 +0x2dc:  mov    0x14(%ebp),%edx
0864aef9 +0x2df:  movzwl 0x68(%edx),%edx
0864aefd +0x2e3:  mov    %dx,0x90(%eax)
0864af04 +0x2ea:  mov    0xc(%ebp),%eax
0864af07 +0x2ed:  mov    0x8(%ebp),%edx
0864af0a +0x2f0:  add    $0x796e8,%edx
0864af10 +0x2f6:  mov    %eax,0x4(%esp)
0864af14 +0x2fa:  mov    %edx,(%esp)
0864af17 +0x2fd:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864af1c +0x302:  mov    0x14(%ebp),%edx
0864af1f +0x305:  movzwl 0x6a(%edx),%edx
0864af23 +0x309:  mov    %dx,0x92(%eax)
0864af2a +0x310:  mov    0xc(%ebp),%eax
0864af2d +0x313:  mov    0x8(%ebp),%edx
0864af30 +0x316:  add    $0x796e8,%edx
0864af36 +0x31c:  mov    %eax,0x4(%esp)
0864af3a +0x320:  mov    %edx,(%esp)
0864af3d +0x323:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864af42 +0x328:  mov    0x14(%ebp),%edx
0864af45 +0x32b:  movzwl 0x6c(%edx),%edx
0864af49 +0x32f:  mov    %dx,0x94(%eax)
0864af50 +0x336:  mov    0xc(%ebp),%eax
0864af53 +0x339:  mov    0x8(%ebp),%edx
0864af56 +0x33c:  add    $0x796e8,%edx
0864af5c +0x342:  mov    %eax,0x4(%esp)
0864af60 +0x346:  mov    %edx,(%esp)
0864af63 +0x349:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864af68 +0x34e:  mov    0x14(%ebp),%edx
0864af6b +0x351:  movzwl 0x6e(%edx),%edx
0864af6f +0x355:  mov    %dx,0x96(%eax)
0864af76 +0x35c:  mov    0x14(%ebp),%eax
0864af79 +0x35f:  lea    0x70(%eax),%ebx
0864af7c +0x362:  mov    0xc(%ebp),%eax
0864af7f +0x365:  mov    0x8(%ebp),%edx
0864af82 +0x368:  add    $0x796e8,%edx
0864af88 +0x36e:  mov    %eax,0x4(%esp)
0864af8c +0x372:  mov    %edx,(%esp)
0864af8f +0x375:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864af94 +0x37a:  add    $0x98,%eax
0864af99 +0x37f:  movl   $0x8,0x8(%esp)
0864afa1 +0x387:  mov    %ebx,0x4(%esp)
0864afa5 +0x38b:  mov    %eax,(%esp)
0864afa8 +0x38e:  call   0807d8a0 <_init+0x198>
0864afad +0x393:  mov    0x14(%ebp),%eax
0864afb0 +0x396:  lea    0x78(%eax),%ebx
0864afb3 +0x399:  mov    0xc(%ebp),%eax
0864afb6 +0x39c:  mov    0x8(%ebp),%edx
0864afb9 +0x39f:  add    $0x796e8,%edx
0864afbf +0x3a5:  mov    %eax,0x4(%esp)
0864afc3 +0x3a9:  mov    %edx,(%esp)
0864afc6 +0x3ac:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864afcb +0x3b1:  add    $0xa0,%eax
0864afd0 +0x3b6:  movl   $0x22,0x8(%esp)
0864afd8 +0x3be:  mov    %ebx,0x4(%esp)
0864afdc +0x3c2:  mov    %eax,(%esp)
0864afdf +0x3c5:  call   0807d8a0 <_init+0x198>
0864afe4 +0x3ca:  mov    0xc(%ebp),%eax
0864afe7 +0x3cd:  mov    0x8(%ebp),%edx
0864afea +0x3d0:  add    $0x796e8,%edx
0864aff0 +0x3d6:  mov    %eax,0x4(%esp)
0864aff4 +0x3da:  mov    %edx,(%esp)
0864aff7 +0x3dd:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864affc +0x3e2:  mov    0x14(%ebp),%edx
0864afff +0x3e5:  mov    0x9a(%edx),%edx
0864b005 +0x3eb:  mov    %edx,0xc2(%eax)
0864b00b +0x3f1:  mov    0xc(%ebp),%eax
0864b00e +0x3f4:  mov    0x8(%ebp),%edx
0864b011 +0x3f7:  add    $0x796e8,%edx
0864b017 +0x3fd:  mov    %eax,0x4(%esp)
0864b01b +0x401:  mov    %edx,(%esp)
0864b01e +0x404:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b023 +0x409:  mov    0x14(%ebp),%edx
0864b026 +0x40c:  movzwl 0x9e(%edx),%edx
0864b02d +0x413:  mov    %dx,0xc6(%eax)
0864b034 +0x41a:  mov    0xc(%ebp),%eax
0864b037 +0x41d:  mov    0x8(%ebp),%edx
0864b03a +0x420:  add    $0x796e8,%edx
0864b040 +0x426:  mov    %eax,0x4(%esp)
0864b044 +0x42a:  mov    %edx,(%esp)
0864b047 +0x42d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b04c +0x432:  mov    0x14(%ebp),%edx
0864b04f +0x435:  movzwl 0xa0(%edx),%edx
0864b056 +0x43c:  mov    %dx,0xc8(%eax)
0864b05d +0x443:  mov    0xc(%ebp),%eax
0864b060 +0x446:  mov    0x8(%ebp),%edx
0864b063 +0x449:  add    $0x796e8,%edx
0864b069 +0x44f:  mov    %eax,0x4(%esp)
0864b06d +0x453:  mov    %edx,(%esp)
0864b070 +0x456:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b075 +0x45b:  mov    0x14(%ebp),%edx
0864b078 +0x45e:  mov    0xa2(%edx),%edx
0864b07e +0x464:  mov    %edx,0xca(%eax)
0864b084 +0x46a:  mov    0xc(%ebp),%eax
0864b087 +0x46d:  mov    0x8(%ebp),%edx
0864b08a +0x470:  add    $0x796e8,%edx
0864b090 +0x476:  mov    %eax,0x4(%esp)
0864b094 +0x47a:  mov    %edx,(%esp)
0864b097 +0x47d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b09c +0x482:  mov    0x14(%ebp),%edx
0864b09f +0x485:  movzwl 0xa6(%edx),%edx
0864b0a6 +0x48c:  mov    %dx,0xce(%eax)
0864b0ad +0x493:  mov    0xc(%ebp),%eax
0864b0b0 +0x496:  mov    0x8(%ebp),%edx
0864b0b3 +0x499:  add    $0x796e8,%edx
0864b0b9 +0x49f:  mov    %eax,0x4(%esp)
0864b0bd +0x4a3:  mov    %edx,(%esp)
0864b0c0 +0x4a6:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b0c5 +0x4ab:  mov    0x14(%ebp),%edx
0864b0c8 +0x4ae:  movzwl 0xa8(%edx),%edx
0864b0cf +0x4b5:  mov    %dx,0xd0(%eax)
0864b0d6 +0x4bc:  mov    0xc(%ebp),%eax
0864b0d9 +0x4bf:  mov    0x8(%ebp),%edx
0864b0dc +0x4c2:  add    $0x796e8,%edx
0864b0e2 +0x4c8:  mov    %eax,0x4(%esp)
0864b0e6 +0x4cc:  mov    %edx,(%esp)
0864b0e9 +0x4cf:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b0ee +0x4d4:  mov    0x14(%ebp),%edx
0864b0f1 +0x4d7:  movzwl 0xaa(%edx),%edx
0864b0f8 +0x4de:  mov    %dx,0xd2(%eax)
0864b0ff +0x4e5:  mov    0xc(%ebp),%eax
0864b102 +0x4e8:  mov    0x8(%ebp),%edx
0864b105 +0x4eb:  add    $0x796e8,%edx
0864b10b +0x4f1:  mov    %eax,0x4(%esp)
0864b10f +0x4f5:  mov    %edx,(%esp)
0864b112 +0x4f8:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b117 +0x4fd:  mov    0x14(%ebp),%edx
0864b11a +0x500:  movzwl 0xac(%edx),%edx
0864b121 +0x507:  mov    %dx,0xd4(%eax)
0864b128 +0x50e:  mov    0xc(%ebp),%eax
0864b12b +0x511:  mov    0x8(%ebp),%edx
0864b12e +0x514:  add    $0x796e8,%edx
0864b134 +0x51a:  mov    %eax,0x4(%esp)
0864b138 +0x51e:  mov    %edx,(%esp)
0864b13b +0x521:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b140 +0x526:  mov    0x14(%ebp),%edx
0864b143 +0x529:  mov    0xae(%edx),%edx
0864b149 +0x52f:  mov    %edx,0xd6(%eax)
0864b14f +0x535:  mov    0xc(%ebp),%eax
0864b152 +0x538:  mov    0x8(%ebp),%edx
0864b155 +0x53b:  add    $0x796e8,%edx
0864b15b +0x541:  mov    %eax,0x4(%esp)
0864b15f +0x545:  mov    %edx,(%esp)
0864b162 +0x548:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b167 +0x54d:  movzbl 0x29(%eax),%eax
0864b16b +0x551:  add    %eax,%eax
0864b16d +0x553:  sar    $0x5,%al
0864b170 +0x556:  movsbl %al,%eax
0864b173 +0x559:  mov    %eax,-0x60(%ebp)
0864b176 +0x55c:  mov    0xc(%ebp),%eax
0864b179 +0x55f:  mov    0x8(%ebp),%edx
0864b17c +0x562:  add    $0x796e8,%edx
0864b182 +0x568:  mov    %eax,0x4(%esp)
0864b186 +0x56c:  mov    %edx,(%esp)
0864b189 +0x56f:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b18e +0x574:  movzbl 0x29(%eax),%eax
0864b192 +0x578:  shl    $0x4,%eax
0864b195 +0x57b:  sar    $0x4,%al
0864b198 +0x57e:  movsbl %al,%eax
0864b19b +0x581:  mov    %eax,-0x5c(%ebp)
0864b19e +0x584:  mov    0xc(%ebp),%eax
0864b1a1 +0x587:  mov    0x8(%ebp),%edx
0864b1a4 +0x58a:  add    $0x796e8,%edx
0864b1aa +0x590:  mov    %eax,0x4(%esp)
0864b1ae +0x594:  mov    %edx,(%esp)
0864b1b1 +0x597:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b1b6 +0x59c:  movzwl 0x27(%eax),%eax
0864b1ba +0x5a0:  movswl %ax,%edi
0864b1bd +0x5a3:  mov    0xc(%ebp),%eax
0864b1c0 +0x5a6:  mov    0x8(%ebp),%edx
0864b1c3 +0x5a9:  add    $0x796e8,%edx
0864b1c9 +0x5af:  mov    %eax,0x4(%esp)
0864b1cd +0x5b3:  mov    %edx,(%esp)
0864b1d0 +0x5b6:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b1d5 +0x5bb:  movzbl 0x26(%eax),%eax
0864b1d9 +0x5bf:  movsbl %al,%esi
0864b1dc +0x5c2:  mov    0xc(%ebp),%eax
0864b1df +0x5c5:  mov    0x8(%ebp),%edx
0864b1e2 +0x5c8:  add    $0x796e8,%edx
0864b1e8 +0x5ce:  mov    %eax,0x4(%esp)
0864b1ec +0x5d2:  mov    %edx,(%esp)
0864b1ef +0x5d5:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b1f4 +0x5da:  mov    (%eax),%ebx
0864b1f6 +0x5dc:  mov    0xc(%ebp),%edx
0864b1f9 +0x5df:  mov    0x8(%ebp),%eax
0864b1fc +0x5e2:  add    $0x796e8,%eax
0864b201 +0x5e7:  mov    %edx,0x4(%esp)
0864b205 +0x5eb:  mov    %eax,(%esp)
0864b208 +0x5ee:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b20d +0x5f3:  add    $0x88,%eax
0864b212 +0x5f8:  mov    -0x60(%ebp),%edx
0864b215 +0x5fb:  mov    %edx,0x14(%esp)
0864b219 +0x5ff:  mov    -0x5c(%ebp),%ecx
0864b21c +0x602:  mov    %ecx,0x10(%esp)
0864b220 +0x606:  mov    %edi,0xc(%esp)
0864b224 +0x60a:  mov    %esi,0x8(%esp)
0864b228 +0x60e:  mov    %ebx,0x4(%esp)
0864b22c +0x612:  mov    %eax,(%esp)
0864b22f +0x615:  call   08145e64 <_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii>  ; global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)
0864b234 +0x61a:  mov    0xc(%ebp),%eax
0864b237 +0x61d:  mov    0x8(%ebp),%edx
0864b23a +0x620:  add    $0x796e8,%edx
0864b240 +0x626:  mov    %eax,0x4(%esp)
0864b244 +0x62a:  mov    %edx,(%esp)
0864b247 +0x62d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b24c +0x632:  mov    0x14(%ebp),%edx
0864b24f +0x635:  movzwl 0x2c(%edx),%edx
0864b253 +0x639:  mov    %dx,0x33(%eax)
0864b257 +0x63d:  mov    0xc(%ebp),%eax
0864b25a +0x640:  mov    0x8(%ebp),%edx
0864b25d +0x643:  add    $0x796e8,%edx
0864b263 +0x649:  mov    %eax,0x4(%esp)
0864b267 +0x64d:  mov    %edx,(%esp)
0864b26a +0x650:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b26f +0x655:  mov    0x14(%ebp),%edx
0864b272 +0x658:  movzwl 0x2e(%edx),%edx
0864b276 +0x65c:  mov    %dx,0x35(%eax)
0864b27a +0x660:  mov    0xc(%ebp),%eax
0864b27d +0x663:  mov    0x8(%ebp),%edx
0864b280 +0x666:  add    $0x796e8,%edx
0864b286 +0x66c:  mov    %eax,0x4(%esp)
0864b28a +0x670:  mov    %edx,(%esp)
0864b28d +0x673:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b292 +0x678:  mov    0x14(%ebp),%edx
0864b295 +0x67b:  movzwl 0x30(%edx),%edx
0864b299 +0x67f:  mov    %dx,0x37(%eax)
0864b29d +0x683:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0864b2a2 +0x688:  movl   $0x2,0x4(%esp)
0864b2aa +0x690:  mov    %eax,(%esp)
0864b2ad +0x693:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0864b2b2 +0x698:  mov    %eax,-0x20(%ebp)
0864b2b5 +0x69b:  cmpl   $0x0,-0x20(%ebp)
0864b2b9 +0x69f:  je     0864b34c <+0x732>
0864b2bf +0x6a5:  mov    -0x20(%ebp),%eax
0864b2c2 +0x6a8:  mov    (%eax),%eax
0864b2c4 +0x6aa:  add    $0x34,%eax
0864b2c7 +0x6ad:  mov    (%eax),%edx
0864b2c9 +0x6af:  mov    -0x20(%ebp),%eax
0864b2cc +0x6b2:  movl   $0x0,0x4(%esp)
0864b2d4 +0x6ba:  mov    %eax,(%esp)
0864b2d7 +0x6bd:  call   *%edx
0864b2d9 +0x6bf:  test   %al,%al
0864b2db +0x6c1:  je     0864b32a <+0x710>
0864b2dd +0x6c3:  mov    0xc(%ebp),%eax
0864b2e0 +0x6c6:  mov    0x8(%ebp),%edx
0864b2e3 +0x6c9:  add    $0x796e8,%edx
0864b2e9 +0x6cf:  mov    %eax,0x4(%esp)
0864b2ed +0x6d3:  mov    %edx,(%esp)
0864b2f0 +0x6d6:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b2f5 +0x6db:  mov    %eax,%ebx
0864b2f7 +0x6dd:  mov    -0x20(%ebp),%eax
0864b2fa +0x6e0:  mov    %eax,(%esp)
0864b2fd +0x6e3:  call   0812ce54 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xd0>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xd0
0864b302 +0x6e8:  mov    &DEFAULT_MAX_FATIGUE,%edx
0864b308 +0x6ee:  mov    %eax,%ecx
0864b30a +0x6f0:  imul   %edx,%ecx
0864b30d +0x6f3:  mov    $0x51eb851f,%edx
0864b312 +0x6f8:  mov    %ecx,%eax
0864b314 +0x6fa:  imul   %edx
0864b316 +0x6fc:  sar    $0x5,%edx
0864b319 +0x6ff:  mov    %ecx,%eax
0864b31b +0x701:  sar    $0x1f,%eax
0864b31e +0x704:  mov    %edx,%ecx
0864b320 +0x706:  sub    %eax,%ecx
0864b322 +0x708:  mov    %ecx,%eax
0864b324 +0x70a:  mov    %ax,0x35(%ebx)
0864b328 +0x70e:  jmp    0864b34c <+0x732>
0864b32a +0x710:  mov    0xc(%ebp),%eax
0864b32d +0x713:  mov    0x8(%ebp),%edx
0864b330 +0x716:  add    $0x796e8,%edx
0864b336 +0x71c:  mov    %eax,0x4(%esp)
0864b33a +0x720:  mov    %edx,(%esp)
0864b33d +0x723:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b342 +0x728:  mov    &DEFAULT_MAX_FATIGUE,%edx
0864b348 +0x72e:  mov    %dx,0x35(%eax)
0864b34c +0x732:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0864b351 +0x737:  movl   $0x57,0x4(%esp)
0864b359 +0x73f:  mov    %eax,(%esp)
0864b35c +0x742:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0864b361 +0x747:  mov    (%eax),%edx
0864b363 +0x749:  add    $0x34,%edx
0864b366 +0x74c:  mov    (%edx),%edx
0864b368 +0x74e:  movl   $0x0,0x4(%esp)
0864b370 +0x756:  mov    %eax,(%esp)
0864b373 +0x759:  call   *%edx
0864b375 +0x75b:  test   %al,%al
0864b377 +0x75d:  je     0864b3aa <+0x790>
0864b379 +0x75f:  mov    0xc(%ebp),%eax
0864b37c +0x762:  mov    0x8(%ebp),%edx
0864b37f +0x765:  add    $0x796e8,%edx
0864b385 +0x76b:  mov    %eax,0x4(%esp)
0864b389 +0x76f:  mov    %edx,(%esp)
0864b38c +0x772:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b391 +0x777:  mov    %eax,%ebx
0864b393 +0x779:  movzwl 0x35(%ebx),%esi
0864b397 +0x77d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864b39c +0x782:  movzwl 0x51c(%eax),%eax
0864b3a3 +0x789:  lea    (%esi,%eax,1),%eax
0864b3a6 +0x78c:  mov    %ax,0x35(%ebx)
0864b3aa +0x790:  mov    0x14(%ebp),%eax
0864b3ad +0x793:  movzwl 0x32(%eax),%eax
0864b3b1 +0x797:  test   %ax,%ax
0864b3b4 +0x79a:  js     0864b3db <+0x7c1>
0864b3b6 +0x79c:  mov    0xc(%ebp),%eax
0864b3b9 +0x79f:  mov    0x8(%ebp),%edx
0864b3bc +0x7a2:  add    $0x796e8,%edx
0864b3c2 +0x7a8:  mov    %eax,0x4(%esp)
0864b3c6 +0x7ac:  mov    %edx,(%esp)
0864b3c9 +0x7af:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b3ce +0x7b4:  mov    0x14(%ebp),%edx
0864b3d1 +0x7b7:  movzwl 0x32(%edx),%edx
0864b3d5 +0x7bb:  mov    %dx,0x4f(%eax)
0864b3d9 +0x7bf:  jmp    0864b446 <+0x82c>
0864b3db +0x7c1:  mov    0xc(%ebp),%eax
0864b3de +0x7c4:  mov    0x8(%ebp),%edx
0864b3e1 +0x7c7:  add    $0x796e8,%edx
0864b3e7 +0x7cd:  mov    %eax,0x4(%esp)
0864b3eb +0x7d1:  mov    %edx,(%esp)
0864b3ee +0x7d4:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b3f3 +0x7d9:  movw   $0x0,0x4f(%eax)
0864b3f9 +0x7df:  mov    0x14(%ebp),%eax
0864b3fc +0x7e2:  movzwl 0x32(%eax),%eax
0864b400 +0x7e6:  movswl %ax,%esi
0864b403 +0x7e9:  mov    0x14(%ebp),%eax
0864b406 +0x7ec:  mov    (%eax),%ebx
0864b408 +0x7ee:  movl   $0x0,0xc(%esp)
0864b410 +0x7f6:  movl   $0xf99,0x8(%esp)
0864b418 +0x7fe:  movl   $&_ZZN5CUser19setCharacInfoDetailEijP11CHARAC_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0864b420 +0x806:  lea    -0x50(%ebp),%eax
0864b423 +0x809:  mov    %eax,(%esp)
0864b426 +0x80c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864b42b +0x811:  mov    %esi,0xc(%esp)
0864b42f +0x815:  mov    %ebx,0x8(%esp)
0864b433 +0x819:  movl   $"FATIGUE BATTERY Error : Char No(%d) %d",0x4(%esp)
0864b43b +0x821:  lea    -0x50(%ebp),%eax
0864b43e +0x824:  mov    %eax,(%esp)
0864b441 +0x827:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864b446 +0x82c:  mov    0xc(%ebp),%eax
0864b449 +0x82f:  mov    0x8(%ebp),%edx
0864b44c +0x832:  add    $0x796e8,%edx
0864b452 +0x838:  mov    %eax,0x4(%esp)
0864b456 +0x83c:  mov    %edx,(%esp)
0864b459 +0x83f:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b45e +0x844:  movl   $0x0,0xdf4(%eax)
0864b468 +0x84e:  mov    0xc(%ebp),%eax
0864b46b +0x851:  mov    0x8(%ebp),%edx
0864b46e +0x854:  add    $0x796e8,%edx
0864b474 +0x85a:  mov    %eax,0x4(%esp)
0864b478 +0x85e:  mov    %edx,(%esp)
0864b47b +0x861:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b480 +0x866:  movl   $0x0,0xdf8(%eax)
0864b48a +0x870:  mov    0xc(%ebp),%eax
0864b48d +0x873:  mov    0x8(%ebp),%edx
0864b490 +0x876:  add    $0x796e8,%edx
0864b496 +0x87c:  mov    %eax,0x4(%esp)
0864b49a +0x880:  mov    %edx,(%esp)
0864b49d +0x883:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b4a2 +0x888:  mov    0x14(%ebp),%edx
0864b4a5 +0x88b:  mov    0x4d(%edx),%edx
0864b4a8 +0x88e:  mov    %edx,0x7b(%eax)
0864b4ab +0x891:  mov    0xc(%ebp),%eax
0864b4ae +0x894:  mov    0x8(%ebp),%edx
0864b4b1 +0x897:  add    $0x796e8,%edx
0864b4b7 +0x89d:  mov    %eax,0x4(%esp)
0864b4bb +0x8a1:  mov    %edx,(%esp)
0864b4be +0x8a4:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b4c3 +0x8a9:  mov    0x7b(%eax),%ebx
0864b4c6 +0x8ac:  movl   $0x0,0xc(%esp)
0864b4ce +0x8b4:  movl   $0xfb0,0x8(%esp)
0864b4d6 +0x8bc:  movl   $&_ZZN5CUser19setCharacInfoDetailEijP11CHARAC_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0864b4de +0x8c4:  lea    -0x40(%ebp),%eax
0864b4e1 +0x8c7:  mov    %eax,(%esp)
0864b4e4 +0x8ca:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864b4e9 +0x8cf:  mov    %ebx,0xc(%esp)
0864b4ed +0x8d3:  mov    0x10(%ebp),%eax
0864b4f0 +0x8d6:  mov    %eax,0x8(%esp)
0864b4f4 +0x8da:  movl   $"CharLastPlayTick char(%d) t(%d)",0x4(%esp)
0864b4fc +0x8e2:  lea    -0x40(%ebp),%eax
0864b4ff +0x8e5:  mov    %eax,(%esp)
0864b502 +0x8e8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864b507 +0x8ed:  mov    0xc(%ebp),%eax
0864b50a +0x8f0:  mov    0x8(%ebp),%edx
0864b50d +0x8f3:  add    $0x796e8,%edx
0864b513 +0x8f9:  mov    %eax,0x4(%esp)
0864b517 +0x8fd:  mov    %edx,(%esp)
0864b51a +0x900:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b51f +0x905:  mov    0x14(%ebp),%edx
0864b522 +0x908:  mov    0x118(%edx),%edx
0864b528 +0x90e:  mov    %edx,0x7f(%eax)
0864b52b +0x911:  mov    0xc(%ebp),%eax
0864b52e +0x914:  mov    0x8(%ebp),%edx
0864b531 +0x917:  add    $0x796e8,%edx
0864b537 +0x91d:  mov    %eax,0x4(%esp)
0864b53b +0x921:  mov    %edx,(%esp)
0864b53e +0x924:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b543 +0x929:  mov    0x14(%ebp),%edx
0864b546 +0x92c:  mov    0x56(%edx),%edx
0864b549 +0x92f:  mov    %edx,0xdbe(%eax)
0864b54f +0x935:  mov    0xc(%ebp),%eax
0864b552 +0x938:  mov    0x8(%ebp),%edx
0864b555 +0x93b:  add    $0x796e8,%edx
0864b55b +0x941:  mov    %eax,0x4(%esp)
0864b55f +0x945:  mov    %edx,(%esp)
0864b562 +0x948:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b567 +0x94d:  mov    0x14(%ebp),%edx
0864b56a +0x950:  movzbl 0x5a(%edx),%edx
0864b56e +0x954:  mov    %dl,0xdc2(%eax)
0864b574 +0x95a:  mov    0xc(%ebp),%eax
0864b577 +0x95d:  mov    0x8(%ebp),%edx
0864b57a +0x960:  add    $0x796e8,%edx
0864b580 +0x966:  mov    %eax,0x4(%esp)
0864b584 +0x96a:  mov    %edx,(%esp)
0864b587 +0x96d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b58c +0x972:  mov    0x14(%ebp),%edx
0864b58f +0x975:  movzwl 0x5b(%edx),%edx
0864b593 +0x979:  mov    %dx,0x77(%eax)
0864b597 +0x97d:  mov    0xc(%ebp),%eax
0864b59a +0x980:  mov    0x8(%ebp),%edx
0864b59d +0x983:  add    $0x796e8,%edx
0864b5a3 +0x989:  mov    %eax,0x4(%esp)
0864b5a7 +0x98d:  mov    %edx,(%esp)
0864b5aa +0x990:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b5af +0x995:  mov    0x14(%ebp),%edx
0864b5b2 +0x998:  movzwl 0x5d(%edx),%edx
0864b5b6 +0x99c:  mov    %dx,0x79(%eax)
0864b5ba +0x9a0:  mov    0x14(%ebp),%eax
0864b5bd +0x9a3:  movzbl 0x5f(%eax),%eax
0864b5c1 +0x9a7:  test   %al,%al
0864b5c3 +0x9a9:  je     0864b5ea <+0x9d0>
0864b5c5 +0x9ab:  mov    0xc(%ebp),%eax
0864b5c8 +0x9ae:  mov    0x8(%ebp),%edx
0864b5cb +0x9b1:  add    $0x796e8,%edx
0864b5d1 +0x9b7:  mov    %eax,0x4(%esp)
0864b5d5 +0x9bb:  mov    %edx,(%esp)
0864b5d8 +0x9be:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b5dd +0x9c3:  mov    0x14(%ebp),%edx
0864b5e0 +0x9c6:  mov    (%edx),%edx
0864b5e2 +0x9c8:  mov    %edx,0xe22(%eax)
0864b5e8 +0x9ce:  jmp    0864b5eb <+0x9d1>
0864b5ea +0x9d0:  nop
0864b5eb +0x9d1:  mov    0x14(%ebp),%eax
0864b5ee +0x9d4:  lea    0x34(%eax),%ebx
0864b5f1 +0x9d7:  mov    0xc(%ebp),%eax
0864b5f4 +0x9da:  mov    0x8(%ebp),%edx
0864b5f7 +0x9dd:  add    $0x796e8,%edx
0864b5fd +0x9e3:  mov    %eax,0x4(%esp)
0864b601 +0x9e7:  mov    %edx,(%esp)
0864b604 +0x9ea:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b609 +0x9ef:  add    $0x39,%eax
0864b60c +0x9f2:  mov    %ebx,0x4(%esp)
0864b610 +0x9f6:  mov    %eax,(%esp)
0864b613 +0x9f9:  call   08694884 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x10d9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x10d9
0864b618 +0x9fe:  mov    0xc(%ebp),%eax
0864b61b +0xa01:  mov    0x8(%ebp),%edx
0864b61e +0xa04:  add    $0x796e8,%edx
0864b624 +0xa0a:  mov    %eax,0x4(%esp)
0864b628 +0xa0e:  mov    %edx,(%esp)
0864b62b +0xa11:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b630 +0xa16:  mov    0x14(%ebp),%edx
0864b633 +0xa19:  movzwl 0xb3(%edx),%edx
0864b63a +0xa20:  mov    %dx,0x4d(%eax)
0864b63e +0xa24:  mov    0xc(%ebp),%eax
0864b641 +0xa27:  mov    0x8(%ebp),%edx
0864b644 +0xa2a:  add    $0x796e8,%edx
0864b64a +0xa30:  mov    %eax,0x4(%esp)
0864b64e +0xa34:  mov    %edx,(%esp)
0864b651 +0xa37:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b656 +0xa3c:  mov    0x14(%ebp),%edx
0864b659 +0xa3f:  mov    0xb5(%edx),%edx
0864b65f +0xa45:  mov    %edx,0x51(%eax)
0864b662 +0xa48:  mov    0x14(%ebp),%eax
0864b665 +0xa4b:  lea    0xb9(%eax),%ebx
0864b66b +0xa51:  mov    0xc(%ebp),%eax
0864b66e +0xa54:  mov    0x8(%ebp),%edx
0864b671 +0xa57:  add    $0x796e8,%edx
0864b677 +0xa5d:  mov    %eax,0x4(%esp)
0864b67b +0xa61:  mov    %edx,(%esp)
0864b67e +0xa64:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b683 +0xa69:  add    $0x55,%eax
0864b686 +0xa6c:  movl   $0x10,0x8(%esp)
0864b68e +0xa74:  mov    %ebx,0x4(%esp)
0864b692 +0xa78:  mov    %eax,(%esp)
0864b695 +0xa7b:  call   0807d8a0 <_init+0x198>
0864b69a +0xa80:  mov    0x14(%ebp),%eax
0864b69d +0xa83:  mov    0xd1(%eax),%edi
0864b6a3 +0xa89:  mov    0x14(%ebp),%eax
0864b6a6 +0xa8c:  mov    0xcd(%eax),%esi
0864b6ac +0xa92:  mov    0x14(%ebp),%eax
0864b6af +0xa95:  mov    0xc9(%eax),%ebx
0864b6b5 +0xa9b:  mov    0xc(%ebp),%eax
0864b6b8 +0xa9e:  mov    0x8(%ebp),%edx
0864b6bb +0xaa1:  add    $0x796e8,%edx
0864b6c1 +0xaa7:  mov    %eax,0x4(%esp)
0864b6c5 +0xaab:  mov    %edx,(%esp)
0864b6c8 +0xaae:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b6cd +0xab3:  add    $0x65,%eax
0864b6d0 +0xab6:  mov    %edi,0xc(%esp)
0864b6d4 +0xaba:  mov    %esi,0x8(%esp)
0864b6d8 +0xabe:  mov    %ebx,0x4(%esp)
0864b6dc +0xac2:  mov    %eax,(%esp)
0864b6df +0xac5:  call   086453b8 <_ZN15CReliablePerson13InitTradeGoldEjjj>  ; CReliablePerson::InitTradeGold(unsigned int, unsigned int, unsigned int)
0864b6e4 +0xaca:  mov    0x14(%ebp),%eax
0864b6e7 +0xacd:  mov    0xd1(%eax),%esi
0864b6ed +0xad3:  mov    0xc(%ebp),%eax
0864b6f0 +0xad6:  mov    0x8(%ebp),%edx
0864b6f3 +0xad9:  add    $0x796e8,%edx
0864b6f9 +0xadf:  mov    %eax,0x4(%esp)
0864b6fd +0xae3:  mov    %edx,(%esp)
0864b700 +0xae6:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b705 +0xaeb:  add    $0x4,%eax
0864b708 +0xaee:  mov    %eax,%ebx
0864b70a +0xaf0:  movl   $0x0,0xc(%esp)
0864b712 +0xaf8:  movl   $0xfd7,0x8(%esp)
0864b71a +0xb00:  movl   $&_ZZN5CUser19setCharacInfoDetailEijP11CHARAC_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0864b722 +0xb08:  lea    -0x30(%ebp),%eax
0864b725 +0xb0b:  mov    %eax,(%esp)
0864b728 +0xb0e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864b72d +0xb13:  mov    %esi,0xc(%esp)
0864b731 +0xb17:  mov    %ebx,0x8(%esp)
0864b735 +0xb1b:  movl   $"TRADE_RESTIRCTION charac_name(%s), use_gold(%u)",0x4(%esp)
0864b73d +0xb23:  lea    -0x30(%ebp),%eax
0864b740 +0xb26:  mov    %eax,(%esp)
0864b743 +0xb29:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864b748 +0xb2e:  mov    0xc(%ebp),%eax
0864b74b +0xb31:  mov    0x8(%ebp),%edx
0864b74e +0xb34:  add    $0x796e8,%edx
0864b754 +0xb3a:  mov    %eax,0x4(%esp)
0864b758 +0xb3e:  mov    %edx,(%esp)
0864b75b +0xb41:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b760 +0xb46:  mov    0x14(%ebp),%edx
0864b763 +0xb49:  mov    0xd5(%edx),%edx
0864b769 +0xb4f:  mov    %edx,0xe49(%eax)
0864b76f +0xb55:  mov    0xc(%ebp),%eax
0864b772 +0xb58:  mov    0x8(%ebp),%edx
0864b775 +0xb5b:  add    $0x796e8,%edx
0864b77b +0xb61:  mov    %eax,0x4(%esp)
0864b77f +0xb65:  mov    %edx,(%esp)
0864b782 +0xb68:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b787 +0xb6d:  mov    0x14(%ebp),%edx
0864b78a +0xb70:  mov    0xd9(%edx),%edx
0864b790 +0xb76:  mov    %edx,0xe4d(%eax)
0864b796 +0xb7c:  mov    0xc(%ebp),%eax
0864b799 +0xb7f:  mov    0x8(%ebp),%edx
0864b79c +0xb82:  add    $0x796e8,%edx
0864b7a2 +0xb88:  mov    %eax,0x4(%esp)
0864b7a6 +0xb8c:  mov    %edx,(%esp)
0864b7a9 +0xb8f:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b7ae +0xb94:  mov    0x14(%ebp),%edx
0864b7b1 +0xb97:  mov    0xdd(%edx),%edx
0864b7b7 +0xb9d:  mov    %edx,0xe51(%eax)
0864b7bd +0xba3:  mov    0xc(%ebp),%eax
0864b7c0 +0xba6:  mov    0x8(%ebp),%edx
0864b7c3 +0xba9:  add    $0x796e8,%edx
0864b7c9 +0xbaf:  mov    %eax,0x4(%esp)
0864b7cd +0xbb3:  mov    %edx,(%esp)
0864b7d0 +0xbb6:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b7d5 +0xbbb:  mov    0x14(%ebp),%edx
0864b7d8 +0xbbe:  mov    0xe1(%edx),%edx
0864b7de +0xbc4:  mov    %edx,0xe55(%eax)
0864b7e4 +0xbca:  mov    0xc(%ebp),%eax
0864b7e7 +0xbcd:  mov    0x8(%ebp),%edx
0864b7ea +0xbd0:  add    $0x796e8,%edx
0864b7f0 +0xbd6:  mov    %eax,0x4(%esp)
0864b7f4 +0xbda:  mov    %edx,(%esp)
0864b7f7 +0xbdd:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b7fc +0xbe2:  mov    0x14(%ebp),%edx
0864b7ff +0xbe5:  mov    0xe5(%edx),%edx
0864b805 +0xbeb:  mov    %edx,0xe59(%eax)
0864b80b +0xbf1:  mov    0xc(%ebp),%eax
0864b80e +0xbf4:  mov    0x8(%ebp),%edx
0864b811 +0xbf7:  add    $0x796e8,%edx
0864b817 +0xbfd:  mov    %eax,0x4(%esp)
0864b81b +0xc01:  mov    %edx,(%esp)
0864b81e +0xc04:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b823 +0xc09:  mov    0x14(%ebp),%edx
0864b826 +0xc0c:  mov    0xe9(%edx),%edx
0864b82c +0xc12:  mov    %edx,0xe5d(%eax)
0864b832 +0xc18:  mov    0xc(%ebp),%eax
0864b835 +0xc1b:  mov    0x8(%ebp),%edx
0864b838 +0xc1e:  add    $0x796e8,%edx
0864b83e +0xc24:  mov    %eax,0x4(%esp)
0864b842 +0xc28:  mov    %edx,(%esp)
0864b845 +0xc2b:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b84a +0xc30:  mov    0x14(%ebp),%edx
0864b84d +0xc33:  mov    0xed(%edx),%edx
0864b853 +0xc39:  mov    %edx,0xe45(%eax)
0864b859 +0xc3f:  mov    0xc(%ebp),%eax
0864b85c +0xc42:  mov    0x8(%ebp),%edx
0864b85f +0xc45:  add    $0x796e8,%edx
0864b865 +0xc4b:  mov    %eax,0x4(%esp)
0864b869 +0xc4f:  mov    %edx,(%esp)
0864b86c +0xc52:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b871 +0xc57:  mov    0x14(%ebp),%edx
0864b874 +0xc5a:  mov    0xf1(%edx),%edx
0864b87a +0xc60:  mov    %edx,0xe68(%eax)
0864b880 +0xc66:  mov    0xc(%ebp),%eax
0864b883 +0xc69:  mov    0x8(%ebp),%edx
0864b886 +0xc6c:  add    $0x796e8,%edx
0864b88c +0xc72:  mov    %eax,0x4(%esp)
0864b890 +0xc76:  mov    %edx,(%esp)
0864b893 +0xc79:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b898 +0xc7e:  mov    0x14(%ebp),%edx
0864b89b +0xc81:  movzbl 0xf5(%edx),%edx
0864b8a2 +0xc88:  mov    %dl,0xe70(%eax)
0864b8a8 +0xc8e:  mov    0xc(%ebp),%eax
0864b8ab +0xc91:  mov    0x8(%ebp),%edx
0864b8ae +0xc94:  add    $0x796e8,%edx
0864b8b4 +0xc9a:  mov    %eax,0x4(%esp)
0864b8b8 +0xc9e:  mov    %edx,(%esp)
0864b8bb +0xca1:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b8c0 +0xca6:  mov    0x14(%ebp),%edx
0864b8c3 +0xca9:  mov    0xf6(%edx),%edx
0864b8c9 +0xcaf:  mov    %edx,0xe71(%eax)
0864b8cf +0xcb5:  mov    0xc(%ebp),%eax
0864b8d2 +0xcb8:  mov    0x8(%ebp),%edx
0864b8d5 +0xcbb:  add    $0x796e8,%edx
0864b8db +0xcc1:  mov    %eax,0x4(%esp)
0864b8df +0xcc5:  mov    %edx,(%esp)
0864b8e2 +0xcc8:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b8e7 +0xccd:  mov    0x14(%ebp),%edx
0864b8ea +0xcd0:  mov    0xfa(%edx),%edx
0864b8f0 +0xcd6:  mov    %edx,0xe79(%eax)
0864b8f6 +0xcdc:  mov    0xc(%ebp),%eax
0864b8f9 +0xcdf:  mov    0x8(%ebp),%edx
0864b8fc +0xce2:  add    $0x796e8,%edx
0864b902 +0xce8:  mov    %eax,0x4(%esp)
0864b906 +0xcec:  mov    %edx,(%esp)
0864b909 +0xcef:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b90e +0xcf4:  mov    0x14(%ebp),%edx
0864b911 +0xcf7:  mov    0x10a(%edx),%edx
0864b917 +0xcfd:  mov    %edx,0xe81(%eax)
0864b91d +0xd03:  mov    0xc(%ebp),%eax
0864b920 +0xd06:  mov    0x8(%ebp),%edx
0864b923 +0xd09:  add    $0x796e8,%edx
0864b929 +0xd0f:  mov    %eax,0x4(%esp)
0864b92d +0xd13:  mov    %edx,(%esp)
0864b930 +0xd16:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b935 +0xd1b:  mov    0x14(%ebp),%edx
0864b938 +0xd1e:  mov    0x106(%edx),%edx
0864b93e +0xd24:  mov    %edx,0xe7d(%eax)
0864b944 +0xd2a:  mov    0xc(%ebp),%eax
0864b947 +0xd2d:  mov    0x8(%ebp),%edx
0864b94a +0xd30:  add    $0x796e8,%edx
0864b950 +0xd36:  mov    %eax,0x4(%esp)
0864b954 +0xd3a:  mov    %edx,(%esp)
0864b957 +0xd3d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b95c +0xd42:  mov    0x14(%ebp),%edx
0864b95f +0xd45:  movzwl 0x10e(%edx),%edx
0864b966 +0xd4c:  mov    %dx,0x121f(%eax)
0864b96d +0xd53:  mov    0xc(%ebp),%eax
0864b970 +0xd56:  mov    0x8(%ebp),%edx
0864b973 +0xd59:  add    $0x796e8,%edx
0864b979 +0xd5f:  mov    %eax,0x4(%esp)
0864b97d +0xd63:  mov    %edx,(%esp)
0864b980 +0xd66:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b985 +0xd6b:  mov    0x14(%ebp),%edx
0864b988 +0xd6e:  mov    0x110(%edx),%edx
0864b98e +0xd74:  mov    %edx,0x1221(%eax)
0864b994 +0xd7a:  mov    0xc(%ebp),%eax
0864b997 +0xd7d:  mov    0x8(%ebp),%edx
0864b99a +0xd80:  add    $0x796e8,%edx
0864b9a0 +0xd86:  mov    %eax,0x4(%esp)
0864b9a4 +0xd8a:  mov    %edx,(%esp)
0864b9a7 +0xd8d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b9ac +0xd92:  mov    0x14(%ebp),%edx
0864b9af +0xd95:  mov    0x114(%edx),%edx
0864b9b5 +0xd9b:  mov    %edx,0x1225(%eax)
0864b9bb +0xda1:  mov    0xc(%ebp),%eax
0864b9be +0xda4:  mov    0x8(%ebp),%edx
0864b9c1 +0xda7:  add    $0x796e8,%edx
0864b9c7 +0xdad:  mov    %eax,0x4(%esp)
0864b9cb +0xdb1:  mov    %edx,(%esp)
0864b9ce +0xdb4:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b9d3 +0xdb9:  mov    0x14(%ebp),%edx
0864b9d6 +0xdbc:  movzbl 0x11e(%edx),%edx
0864b9dd +0xdc3:  mov    %dl,0x1239(%eax)
0864b9e3 +0xdc9:  mov    0xc(%ebp),%eax
0864b9e6 +0xdcc:  mov    0x8(%ebp),%edx
0864b9e9 +0xdcf:  add    $0x796e8,%edx
0864b9ef +0xdd5:  mov    %eax,0x4(%esp)
0864b9f3 +0xdd9:  mov    %edx,(%esp)
0864b9f6 +0xddc:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864b9fb +0xde1:  mov    0x14(%ebp),%edx
0864b9fe +0xde4:  movzbl 0x11f(%edx),%edx
0864ba05 +0xdeb:  mov    %dl,0x123e(%eax)
0864ba0b +0xdf1:  mov    0xc(%ebp),%eax
0864ba0e +0xdf4:  mov    0x8(%ebp),%edx
0864ba11 +0xdf7:  add    $0x796e8,%edx
0864ba17 +0xdfd:  mov    %eax,0x4(%esp)
0864ba1b +0xe01:  mov    %edx,(%esp)
0864ba1e +0xe04:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ba23 +0xe09:  mov    0x14(%ebp),%edx
0864ba26 +0xe0c:  movzbl 0x120(%edx),%edx
0864ba2d +0xe13:  mov    %dl,0x123f(%eax)
0864ba33 +0xe19:  mov    0xc(%ebp),%eax
0864ba36 +0xe1c:  mov    0x8(%ebp),%edx
0864ba39 +0xe1f:  add    $0x796e8,%edx
0864ba3f +0xe25:  mov    %eax,0x4(%esp)
0864ba43 +0xe29:  mov    %edx,(%esp)
0864ba46 +0xe2c:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ba4b +0xe31:  mov    0x14(%ebp),%edx
0864ba4e +0xe34:  movzbl 0x121(%edx),%edx
0864ba55 +0xe3b:  test   %dl,%dl
0864ba57 +0xe3d:  setne  %dl
0864ba5a +0xe40:  mov    %dl,0x1241(%eax)
0864ba60 +0xe46:  mov    0xc(%ebp),%eax
0864ba63 +0xe49:  mov    0x8(%ebp),%edx
0864ba66 +0xe4c:  add    $0x796e8,%edx
0864ba6c +0xe52:  mov    %eax,0x4(%esp)
0864ba70 +0xe56:  mov    %edx,(%esp)
0864ba73 +0xe59:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864ba78 +0xe5e:  mov    0x14(%ebp),%edx
0864ba7b +0xe61:  movzwl 0x122(%edx),%edx
0864ba82 +0xe68:  mov    %dx,0x126c(%eax)
0864ba89 +0xe6f:  mov    0xc(%ebp),%eax
0864ba8c +0xe72:  mov    0x8(%ebp),%edx
0864ba8f +0xe75:  add    $0x796e8,%edx
0864ba95 +0xe7b:  mov    %eax,0x4(%esp)
0864ba99 +0xe7f:  mov    %edx,(%esp)
0864ba9c +0xe82:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864baa1 +0xe87:  mov    0x14(%ebp),%edx
0864baa4 +0xe8a:  movzbl 0x124(%edx),%edx
0864baab +0xe91:  mov    %dl,0x126e(%eax)
0864bab1 +0xe97:  mov    0xc(%ebp),%eax
0864bab4 +0xe9a:  mov    0x8(%ebp),%edx
0864bab7 +0xe9d:  add    $0x796e8,%edx
0864babd +0xea3:  mov    %eax,0x4(%esp)
0864bac1 +0xea7:  mov    %edx,(%esp)
0864bac4 +0xeaa:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864bac9 +0xeaf:  mov    0x14(%ebp),%edx
0864bacc +0xeb2:  mov    0x125(%edx),%edx
0864bad2 +0xeb8:  mov    %edx,0x126f(%eax)
0864bad8 +0xebe:  mov    0xc(%ebp),%eax
0864badb +0xec1:  mov    0x8(%ebp),%edx
0864bade +0xec4:  add    $0x796e8,%edx
0864bae4 +0xeca:  mov    %eax,0x4(%esp)
0864bae8 +0xece:  mov    %edx,(%esp)
0864baeb +0xed1:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864baf0 +0xed6:  mov    0x14(%ebp),%edx
0864baf3 +0xed9:  movzbl 0x129(%edx),%edx
0864bafa +0xee0:  mov    %dl,0x1275(%eax)
0864bb00 +0xee6:  mov    0xc(%ebp),%eax
0864bb03 +0xee9:  mov    0x8(%ebp),%edx
0864bb06 +0xeec:  add    $0x796e8,%edx
0864bb0c +0xef2:  mov    %eax,0x4(%esp)
0864bb10 +0xef6:  mov    %edx,(%esp)
0864bb13 +0xef9:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864bb18 +0xefe:  mov    0x14(%ebp),%edx
0864bb1b +0xf01:  movzbl 0x12a(%edx),%edx
0864bb22 +0xf08:  mov    %dl,0x1276(%eax)
0864bb28 +0xf0e:  mov    0xc(%ebp),%eax
0864bb2b +0xf11:  mov    0x8(%ebp),%edx
0864bb2e +0xf14:  add    $0x796e8,%edx
0864bb34 +0xf1a:  mov    %eax,0x4(%esp)
0864bb38 +0xf1e:  mov    %edx,(%esp)
0864bb3b +0xf21:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864bb40 +0xf26:  mov    0x14(%ebp),%edx
0864bb43 +0xf29:  movzbl 0x12b(%edx),%edx
0864bb4a +0xf30:  mov    %dl,0x1277(%eax)
0864bb50 +0xf36:  mov    0xc(%ebp),%eax
0864bb53 +0xf39:  mov    0x8(%ebp),%edx
0864bb56 +0xf3c:  add    $0x796e8,%edx
0864bb5c +0xf42:  mov    %eax,0x4(%esp)
0864bb60 +0xf46:  mov    %edx,(%esp)
0864bb63 +0xf49:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864bb68 +0xf4e:  mov    0x14(%ebp),%edx
0864bb6b +0xf51:  movzbl 0x12d(%edx),%edx
0864bb72 +0xf58:  mov    %dl,0x127a(%eax)
0864bb78 +0xf5e:  mov    0xc(%ebp),%eax
0864bb7b +0xf61:  mov    0x8(%ebp),%edx
0864bb7e +0xf64:  add    $0x796e8,%edx
0864bb84 +0xf6a:  mov    %eax,0x4(%esp)
0864bb88 +0xf6e:  mov    %edx,(%esp)
0864bb8b +0xf71:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864bb90 +0xf76:  mov    0x14(%ebp),%edx
0864bb93 +0xf79:  movzbl 0x12c(%edx),%edx
0864bb9a +0xf80:  mov    %dl,0x1278(%eax)
0864bba0 +0xf86:  mov    0xc(%ebp),%eax
0864bba3 +0xf89:  mov    0x8(%ebp),%edx
0864bba6 +0xf8c:  add    $0x796e8,%edx
0864bbac +0xf92:  mov    %eax,0x4(%esp)
0864bbb0 +0xf96:  mov    %edx,(%esp)
0864bbb3 +0xf99:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864bbb8 +0xf9e:  mov    0x14(%ebp),%edx
0864bbbb +0xfa1:  movzbl 0x12f(%edx),%edx
0864bbc2 +0xfa8:  mov    %dl,0x1280(%eax)
0864bbc8 +0xfae:  mov    0xc(%ebp),%eax
0864bbcb +0xfb1:  mov    0x8(%ebp),%edx
0864bbce +0xfb4:  add    $0x796e8,%edx
0864bbd4 +0xfba:  mov    %eax,0x4(%esp)
0864bbd8 +0xfbe:  mov    %edx,(%esp)
0864bbdb +0xfc1:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864bbe0 +0xfc6:  mov    0x14(%ebp),%edx
0864bbe3 +0xfc9:  mov    0x130(%edx),%edx
0864bbe9 +0xfcf:  mov    %edx,0x12ad(%eax)
0864bbef +0xfd5:  mov    $0x1,%eax
0864bbf4 +0xfda:  jmp    0864bbfb <+0xfe1>
0864bbf6 +0xfdc:  mov    $0x0,%eax
0864bbfb +0xfe1:  add    $0x7c,%esp
0864bbfe +0xfe4:  pop    %ebx
0864bbff +0xfe5:  pop    %esi
0864bc00 +0xfe6:  pop    %edi
0864bc01 +0xfe7:  pop    %ebp
0864bc02 +0xfe8:  ret
0864bc03 +0xfe9:  nop
```

## 反编译 C

```c
// CUser::setCharacInfoDetail @ 0x864ac1a

/* CUser::setCharacInfoDetail(int, unsigned int, CHARAC_DATA*) */

undefined4 __thiscall
CUser::setCharacInfoDetail(CUser *this,int param_1,uint param_2,CHARAC_DATA *param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  GameWorld *this_00;
  int iVar13;
  int *piVar14;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  CMaxFatigueFactorEvent *local_24;
  CHARAC_DATA local_1d;
  
  if (-1 < param_1) {
    iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
    if (param_1 < iVar9) {
      bVar7 = true;
      goto LAB_0864ac4a;
    }
  }
  bVar7 = false;
LAB_0864ac4a:
  if (bVar7) {
    puVar10 = (uint *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                 (this + 0x796e8),param_1);
    if (*puVar10 == param_2) {
      puVar12 = (undefined4 *)
                std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           param_1);
      *puVar12 = *(undefined4 *)param_3;
      this_00 = (GameWorld *)G_GameWorld();
      iVar9 = GameWorld::GetChannelType(this_00);
      if (iVar9 != 7) {
        iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           param_1);
        strncpy((char *)(iVar9 + 4),(char *)(param_3 + 4),0x1e);
      }
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x22) = param_3[0x22];
      if (param_3[0x22] == (CHARAC_DATA)0x7) {
        iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           param_1);
        *(undefined1 *)(iVar9 + 0x22) = 2;
        iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           param_1);
        *(undefined1 *)(iVar9 + 0x24) = 7;
      }
      if (param_3[0x22] == (CHARAC_DATA)0x8) {
        local_1d = param_3[0x22];
        iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           param_1);
        *(CHARAC_DATA *)(iVar9 + 0x22) = param_3[0x23];
        iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           param_1);
        *(CHARAC_DATA *)(iVar9 + 0x25) = local_1d;
      }
      if ((param_3[0x22] == (CHARAC_DATA)0xc) || (param_3[0x22] == (CHARAC_DATA)0xd)) {
        iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           param_1);
        *(undefined1 *)(iVar9 + 0x22) = 0xb;
      }
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined1 *)(iVar9 + 0x23) = 2;
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x26) = param_3[0x24];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x27) = *(undefined2 *)(param_3 + 0x25);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0x2b) = *(undefined4 *)(param_3 + 0x28);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x29) = param_3[0x27];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x75) = param_3[0xb2];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0x88) = *(undefined4 *)(param_3 + 0x60);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0x8c) = *(undefined4 *)(param_3 + 100);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x90) = *(undefined2 *)(param_3 + 0x68);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x92) = *(undefined2 *)(param_3 + 0x6a);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x94) = *(undefined2 *)(param_3 + 0x6c);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x96) = *(undefined2 *)(param_3 + 0x6e);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      memcpy((void *)(iVar9 + 0x98),param_3 + 0x70,8);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      memcpy((void *)(iVar9 + 0xa0),param_3 + 0x78,0x22);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xc2) = *(undefined4 *)(param_3 + 0x9a);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0xc6) = *(undefined2 *)(param_3 + 0x9e);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 200) = *(undefined2 *)(param_3 + 0xa0);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xca) = *(undefined4 *)(param_3 + 0xa2);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0xce) = *(undefined2 *)(param_3 + 0xa6);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0xd0) = *(undefined2 *)(param_3 + 0xa8);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0xd2) = *(undefined2 *)(param_3 + 0xaa);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0xd4) = *(undefined2 *)(param_3 + 0xac);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xd6) = *(undefined4 *)(param_3 + 0xae);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      cVar8 = *(char *)(iVar9 + 0x29);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      cVar1 = *(char *)(iVar9 + 0x29);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      sVar3 = *(short *)(iVar9 + 0x27);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      cVar2 = *(char *)(iVar9 + 0x26);
      puVar10 = (uint *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                  ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                   (this + 0x796e8),param_1);
      uVar4 = *puVar10;
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      global::tools::InitializeCharacStat::initCharacStat
                ((_Additioal_info *)(iVar9 + 0x88),uVar4,(int)cVar2,(int)sVar3,
                 (int)((char)(cVar1 << 4) >> 4),(int)((char)(cVar8 * '\x02') >> 5));
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x33) = *(undefined2 *)(param_3 + 0x2c);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x35) = *(undefined2 *)(param_3 + 0x2e);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x37) = *(undefined2 *)(param_3 + 0x30);
      local_24 = (CMaxFatigueFactorEvent *)
                 CEventManager::GetRepeatEvent(GlobalData::s_event_manager,2);
      if (local_24 != (CMaxFatigueFactorEvent *)0x0) {
        cVar8 = (**(code **)(*(int *)local_24 + 0x34))(local_24,0);
        if (cVar8 == '\0') {
          iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                             param_1);
          *(short *)(iVar9 + 0x35) = (short)DEFAULT_MAX_FATIGUE;
        }
        else {
          iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                             param_1);
          iVar13 = CMaxFatigueFactorEvent::GetMaxFatigueFactor(local_24);
          *(short *)(iVar9 + 0x35) = (short)((iVar13 * DEFAULT_MAX_FATIGUE) / 100);
        }
      }
      piVar14 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x57);
      cVar8 = (**(code **)(*piVar14 + 0x34))(piVar14,0);
      if (cVar8 != '\0') {
        iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           param_1);
        sVar3 = *(short *)(iVar9 + 0x35);
        iVar13 = G_CDataManager();
        *(short *)(iVar9 + 0x35) = sVar3 + *(short *)(iVar13 + 0x51c);
      }
      if (*(short *)(param_3 + 0x32) < 0) {
        iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           param_1);
        *(undefined2 *)(iVar9 + 0x4f) = 0;
        sVar3 = *(short *)(param_3 + 0x32);
        uVar11 = *(undefined4 *)param_3;
        cMyTrace::cMyTrace(local_54,
                           "bool CUser::setCharacInfoDetail(int, unsigned int, CHARAC_DATA*)",0xf99,
                           0);
        cMyTrace::operator()(local_54,"FATIGUE BATTERY Error : Char No(%d) %d",uVar11,(int)sVar3);
      }
      else {
        iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           param_1);
        *(undefined2 *)(iVar9 + 0x4f) = *(undefined2 *)(param_3 + 0x32);
      }
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xdf4) = 0;
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xdf8) = 0;
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0x7b) = *(undefined4 *)(param_3 + 0x4d);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      uVar11 = *(undefined4 *)(iVar9 + 0x7b);
      cMyTrace::cMyTrace(local_44,"bool CUser::setCharacInfoDetail(int, unsigned int, CHARAC_DATA*)"
                         ,0xfb0,0);
      cMyTrace::operator()(local_44,"CharLastPlayTick char(%d) t(%d)",param_2,uVar11);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0x7f) = *(undefined4 *)(param_3 + 0x118);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xdbe) = *(undefined4 *)(param_3 + 0x56);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0xdc2) = param_3[0x5a];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x77) = *(undefined2 *)(param_3 + 0x5b);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x79) = *(undefined2 *)(param_3 + 0x5d);
      if (param_3[0x5f] != (CHARAC_DATA)0x0) {
        iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                           param_1);
        *(undefined4 *)(iVar9 + 0xe22) = *(undefined4 *)param_3;
      }
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      CommonTime::SetCreateTime((CommonTime *)(iVar9 + 0x39),(char *)(param_3 + 0x34));
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x4d) = *(undefined2 *)(param_3 + 0xb3);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0x51) = *(undefined4 *)(param_3 + 0xb5);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      memcpy((void *)(iVar9 + 0x55),param_3 + 0xb9,0x10);
      uVar4 = *(uint *)(param_3 + 0xd1);
      uVar5 = *(uint *)(param_3 + 0xcd);
      uVar6 = *(uint *)(param_3 + 0xc9);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      CReliablePerson::InitTradeGold((CReliablePerson *)(iVar9 + 0x65),uVar6,uVar5,uVar4);
      uVar11 = *(undefined4 *)(param_3 + 0xd1);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      cMyTrace::cMyTrace(local_34,"bool CUser::setCharacInfoDetail(int, unsigned int, CHARAC_DATA*)"
                         ,0xfd7,0);
      cMyTrace::operator()
                (local_34,"TRADE_RESTIRCTION charac_name(%s), use_gold(%u)",iVar9 + 4,uVar11);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe49) = *(undefined4 *)(param_3 + 0xd5);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe4d) = *(undefined4 *)(param_3 + 0xd9);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe51) = *(undefined4 *)(param_3 + 0xdd);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe55) = *(undefined4 *)(param_3 + 0xe1);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe59) = *(undefined4 *)(param_3 + 0xe5);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe5d) = *(undefined4 *)(param_3 + 0xe9);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe45) = *(undefined4 *)(param_3 + 0xed);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe68) = *(undefined4 *)(param_3 + 0xf1);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0xe70) = param_3[0xf5];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe71) = *(undefined4 *)(param_3 + 0xf6);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe79) = *(undefined4 *)(param_3 + 0xfa);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe81) = *(undefined4 *)(param_3 + 0x10a);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0xe7d) = *(undefined4 *)(param_3 + 0x106);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x121f) = *(undefined2 *)(param_3 + 0x10e);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0x1221) = *(undefined4 *)(param_3 + 0x110);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0x1225) = *(undefined4 *)(param_3 + 0x114);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x1239) = param_3[0x11e];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x123e) = param_3[0x11f];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x123f) = param_3[0x120];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(bool *)(iVar9 + 0x1241) = param_3[0x121] != (CHARAC_DATA)0x0;
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(iVar9 + 0x126c) = *(undefined2 *)(param_3 + 0x122);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x126e) = param_3[0x124];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0x126f) = *(undefined4 *)(param_3 + 0x125);
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x1275) = param_3[0x129];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x1276) = param_3[0x12a];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x1277) = param_3[299];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x127a) = param_3[0x12d];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x1278) = param_3[300];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(CHARAC_DATA *)(iVar9 + 0x1280) = param_3[0x12f];
      iVar9 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(iVar9 + 0x12ad) = *(undefined4 *)(param_3 + 0x130);
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
  }
  else {
    uVar11 = 0;
  }
  return uVar11;
}
```
