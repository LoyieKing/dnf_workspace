# humanCertifyTable_

`_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E`

`global constructors keyed to CHumanCertifier::humanCertifyTable_`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CHumanCertifier` | `0x08083dbd` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08083dbd  _GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E
#           global constructors keyed to CHumanCertifier::humanCertifyTable_
# range [0x08083dbd, 0x080841fb]
08083dbd +0x000:  push   %ebp
08083dbe +0x001:  mov    %esp,%ebp
08083dc0 +0x003:  sub    $0x18,%esp
08083dc3 +0x006:  movl   $0xffff,0x4(%esp)
08083dcb +0x00e:  movl   $0x1,(%esp)
08083dd2 +0x015:  call   08083d54 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08083dd7 +0x01a:  leave
08083dd8 +0x01b:  ret
08083dd9 +0x01c:  nop
08083dda +0x01d:  push   %ebp
08083ddb +0x01e:  mov    %esp,%ebp
08083ddd +0x020:  push   %esi
08083dde +0x021:  push   %ebx
08083ddf +0x022:  sub    $0x10,%esp
08083de2 +0x025:  mov    0x8(%ebp),%eax
08083de5 +0x028:  mov    %eax,(%esp)
08083de8 +0x02b:  call   08083f0e <+0x151>
08083ded +0x030:  mov    0x8(%ebp),%edx
08083df0 +0x033:  mov    0x4(%edx),%ecx
08083df3 +0x036:  mov    0x8(%ebp),%edx
08083df6 +0x039:  mov    (%edx),%edx
08083df8 +0x03b:  mov    %eax,0x8(%esp)
08083dfc +0x03f:  mov    %ecx,0x4(%esp)
08083e00 +0x043:  mov    %edx,(%esp)
08083e03 +0x046:  call   08083f16 <+0x159>
08083e08 +0x04b:  jmp    08083e25 <+0x68>
08083e0a +0x04d:  mov    %edx,%ebx
08083e0c +0x04f:  mov    %eax,%esi
08083e0e +0x051:  mov    0x8(%ebp),%eax
08083e11 +0x054:  mov    %eax,(%esp)
08083e14 +0x057:  call   08083ea6 <+0xe9>
08083e19 +0x05c:  mov    %esi,%eax
08083e1b +0x05e:  mov    %ebx,%edx
08083e1d +0x060:  mov    %eax,(%esp)
08083e20 +0x063:  call   08ae3750 <_Unwind_Resume>
08083e25 +0x068:  mov    0x8(%ebp),%eax
08083e28 +0x06b:  mov    %eax,(%esp)
08083e2b +0x06e:  call   08083ea6 <+0xe9>
08083e30 +0x073:  add    $0x10,%esp
08083e33 +0x076:  pop    %ebx
08083e34 +0x077:  pop    %esi
08083e35 +0x078:  pop    %ebp
08083e36 +0x079:  ret
08083e37 +0x07a:  nop
08083e38 +0x07b:  push   %ebp
08083e39 +0x07c:  mov    %esp,%ebp
08083e3b +0x07e:  push   %esi
08083e3c +0x07f:  push   %ebx
08083e3d +0x080:  sub    $0x10,%esp
08083e40 +0x083:  mov    0x8(%ebp),%eax
08083e43 +0x086:  add    $0x4,%eax
08083e46 +0x089:  mov    %eax,(%esp)
08083e49 +0x08c:  call   08083dda <+0x1d>
08083e4e +0x091:  jmp    08083e6b <+0xae>
08083e50 +0x093:  mov    %edx,%ebx
08083e52 +0x095:  mov    %eax,%esi
08083e54 +0x097:  mov    0x8(%ebp),%eax
08083e57 +0x09a:  mov    %eax,(%esp)
08083e5a +0x09d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08083e5f +0x0a2:  mov    %esi,%eax
08083e61 +0x0a4:  mov    %ebx,%edx
08083e63 +0x0a6:  mov    %eax,(%esp)
08083e66 +0x0a9:  call   08ae3750 <_Unwind_Resume>
08083e6b +0x0ae:  mov    0x8(%ebp),%eax
08083e6e +0x0b1:  mov    %eax,(%esp)
08083e71 +0x0b4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08083e76 +0x0b9:  add    $0x10,%esp
08083e79 +0x0bc:  pop    %ebx
08083e7a +0x0bd:  pop    %esi
08083e7b +0x0be:  pop    %ebp
08083e7c +0x0bf:  ret
08083e7d +0x0c0:  nop
08083e7e +0x0c1:  push   %ebp
08083e7f +0x0c2:  mov    %esp,%ebp
08083e81 +0x0c4:  sub    $0x18,%esp
08083e84 +0x0c7:  mov    0x8(%ebp),%eax
08083e87 +0x0ca:  mov    %eax,(%esp)
08083e8a +0x0cd:  call   08083f6c <+0x1af>
08083e8f +0x0d2:  leave
08083e90 +0x0d3:  ret
08083e91 +0x0d4:  nop
08083e92 +0x0d5:  push   %ebp
08083e93 +0x0d6:  mov    %esp,%ebp
08083e95 +0x0d8:  sub    $0x18,%esp
08083e98 +0x0db:  mov    0x8(%ebp),%eax
08083e9b +0x0de:  mov    %eax,(%esp)
08083e9e +0x0e1:  call   08083fd2 <+0x215>
08083ea3 +0x0e6:  leave
08083ea4 +0x0e7:  ret
08083ea5 +0x0e8:  nop
08083ea6 +0x0e9:  push   %ebp
08083ea7 +0x0ea:  mov    %esp,%ebp
08083ea9 +0x0ec:  push   %esi
08083eaa +0x0ed:  push   %ebx
08083eab +0x0ee:  sub    $0x10,%esp
08083eae +0x0f1:  mov    0x8(%ebp),%eax
08083eb1 +0x0f4:  mov    0x8(%eax),%eax
08083eb4 +0x0f7:  mov    %eax,%edx
08083eb6 +0x0f9:  mov    0x8(%ebp),%eax
08083eb9 +0x0fc:  mov    (%eax),%eax
08083ebb +0x0fe:  mov    %edx,%ecx
08083ebd +0x100:  sub    %eax,%ecx
08083ebf +0x102:  mov    %ecx,%eax
08083ec1 +0x104:  sar    $0x2,%eax
08083ec4 +0x107:  mov    %eax,%edx
08083ec6 +0x109:  mov    0x8(%ebp),%eax
08083ec9 +0x10c:  mov    (%eax),%eax
08083ecb +0x10e:  mov    %edx,0x8(%esp)
08083ecf +0x112:  mov    %eax,0x4(%esp)
08083ed3 +0x116:  mov    0x8(%ebp),%eax
08083ed6 +0x119:  mov    %eax,(%esp)
08083ed9 +0x11c:  call   08083f30 <+0x173>
08083ede +0x121:  jmp    08083efb <+0x13e>
08083ee0 +0x123:  mov    %edx,%ebx
08083ee2 +0x125:  mov    %eax,%esi
08083ee4 +0x127:  mov    0x8(%ebp),%eax
08083ee7 +0x12a:  mov    %eax,(%esp)
08083eea +0x12d:  call   08083e92 <+0xd5>
08083eef +0x132:  mov    %esi,%eax
08083ef1 +0x134:  mov    %ebx,%edx
08083ef3 +0x136:  mov    %eax,(%esp)
08083ef6 +0x139:  call   08ae3750 <_Unwind_Resume>
08083efb +0x13e:  mov    0x8(%ebp),%eax
08083efe +0x141:  mov    %eax,(%esp)
08083f01 +0x144:  call   08083e92 <+0xd5>
08083f06 +0x149:  add    $0x10,%esp
08083f09 +0x14c:  pop    %ebx
08083f0a +0x14d:  pop    %esi
08083f0b +0x14e:  pop    %ebp
08083f0c +0x14f:  ret
08083f0d +0x150:  nop
08083f0e +0x151:  push   %ebp
08083f0f +0x152:  mov    %esp,%ebp
08083f11 +0x154:  mov    0x8(%ebp),%eax
08083f14 +0x157:  pop    %ebp
08083f15 +0x158:  ret
08083f16 +0x159:  push   %ebp
08083f17 +0x15a:  mov    %esp,%ebp
08083f19 +0x15c:  sub    $0x18,%esp
08083f1c +0x15f:  mov    0xc(%ebp),%eax
08083f1f +0x162:  mov    %eax,0x4(%esp)
08083f23 +0x166:  mov    0x8(%ebp),%eax
08083f26 +0x169:  mov    %eax,(%esp)
08083f29 +0x16c:  call   08083fe5 <+0x228>
08083f2e +0x171:  leave
08083f2f +0x172:  ret
08083f30 +0x173:  push   %ebp
08083f31 +0x174:  mov    %esp,%ebp
08083f33 +0x176:  sub    $0x18,%esp
08083f36 +0x179:  cmpl   $0x0,0xc(%ebp)
08083f3a +0x17d:  je     08083f55 <+0x198>
08083f3c +0x17f:  mov    0x8(%ebp),%eax
08083f3f +0x182:  mov    0x10(%ebp),%edx
08083f42 +0x185:  mov    %edx,0x8(%esp)
08083f46 +0x189:  mov    0xc(%ebp),%edx
08083f49 +0x18c:  mov    %edx,0x4(%esp)
08083f4d +0x190:  mov    %eax,(%esp)
08083f50 +0x193:  call   08084000 <+0x243>
08083f55 +0x198:  leave
08083f56 +0x199:  ret
08083f57 +0x19a:  nop
08083f58 +0x19b:  push   %ebp
08083f59 +0x19c:  mov    %esp,%ebp
08083f5b +0x19e:  sub    $0x18,%esp
08083f5e +0x1a1:  mov    0x8(%ebp),%eax
08083f61 +0x1a4:  mov    %eax,(%esp)
08083f64 +0x1a7:  call   08084064 <+0x2a7>
08083f69 +0x1ac:  leave
08083f6a +0x1ad:  ret
08083f6b +0x1ae:  nop
08083f6c +0x1af:  push   %ebp
08083f6d +0x1b0:  mov    %esp,%ebp
08083f6f +0x1b2:  sub    $0x18,%esp
08083f72 +0x1b5:  mov    0x8(%ebp),%eax
08083f75 +0x1b8:  mov    %eax,(%esp)
08083f78 +0x1bb:  call   08084014 <+0x257>
08083f7d +0x1c0:  leave
08083f7e +0x1c1:  ret
08083f7f +0x1c2:  nop
08083f80 +0x1c3:  push   %ebp
08083f81 +0x1c4:  mov    %esp,%ebp
08083f83 +0x1c6:  push   %esi
08083f84 +0x1c7:  push   %ebx
08083f85 +0x1c8:  sub    $0x10,%esp
08083f88 +0x1cb:  mov    0x8(%ebp),%eax
08083f8b +0x1ce:  mov    %eax,(%esp)
08083f8e +0x1d1:  call   080840ce <+0x311>
08083f93 +0x1d6:  mov    %eax,0x4(%esp)
08083f97 +0x1da:  mov    0x8(%ebp),%eax
08083f9a +0x1dd:  mov    %eax,(%esp)
08083f9d +0x1e0:  call   08084078 <+0x2bb>
08083fa2 +0x1e5:  jmp    08083fbf <+0x202>
08083fa4 +0x1e7:  mov    %edx,%ebx
08083fa6 +0x1e9:  mov    %eax,%esi
08083fa8 +0x1eb:  mov    0x8(%ebp),%eax
08083fab +0x1ee:  mov    %eax,(%esp)
08083fae +0x1f1:  call   08083f58 <+0x19b>
08083fb3 +0x1f6:  mov    %esi,%eax
08083fb5 +0x1f8:  mov    %ebx,%edx
08083fb7 +0x1fa:  mov    %eax,(%esp)
08083fba +0x1fd:  call   08ae3750 <_Unwind_Resume>
08083fbf +0x202:  mov    0x8(%ebp),%eax
08083fc2 +0x205:  mov    %eax,(%esp)
08083fc5 +0x208:  call   08083f58 <+0x19b>
08083fca +0x20d:  add    $0x10,%esp
08083fcd +0x210:  pop    %ebx
08083fce +0x211:  pop    %esi
08083fcf +0x212:  pop    %ebp
08083fd0 +0x213:  ret
08083fd1 +0x214:  nop
08083fd2 +0x215:  push   %ebp
08083fd3 +0x216:  mov    %esp,%ebp
08083fd5 +0x218:  sub    $0x18,%esp
08083fd8 +0x21b:  mov    0x8(%ebp),%eax
08083fdb +0x21e:  mov    %eax,(%esp)
08083fde +0x221:  call   080840da <+0x31d>
08083fe3 +0x226:  leave
08083fe4 +0x227:  ret
08083fe5 +0x228:  push   %ebp
08083fe6 +0x229:  mov    %esp,%ebp
08083fe8 +0x22b:  sub    $0x18,%esp
08083feb +0x22e:  mov    0xc(%ebp),%eax
08083fee +0x231:  mov    %eax,0x4(%esp)
08083ff2 +0x235:  mov    0x8(%ebp),%eax
08083ff5 +0x238:  mov    %eax,(%esp)
08083ff8 +0x23b:  call   080840df <+0x322>
08083ffd +0x240:  leave
08083ffe +0x241:  ret
08083fff +0x242:  nop
08084000 +0x243:  push   %ebp
08084001 +0x244:  mov    %esp,%ebp
08084003 +0x246:  sub    $0x18,%esp
08084006 +0x249:  mov    0xc(%ebp),%eax
08084009 +0x24c:  mov    %eax,(%esp)
0808400c +0x24f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08084011 +0x254:  leave
08084012 +0x255:  ret
08084013 +0x256:  nop
08084014 +0x257:  push   %ebp
08084015 +0x258:  mov    %esp,%ebp
08084017 +0x25a:  sub    $0x18,%esp
0808401a +0x25d:  mov    0x8(%ebp),%eax
0808401d +0x260:  mov    %eax,(%esp)
08084020 +0x263:  call   080840e4 <+0x327>
08084025 +0x268:  mov    0x8(%ebp),%eax
08084028 +0x26b:  movl   $0x0,0x4(%eax)
0808402f +0x272:  mov    0x8(%ebp),%eax
08084032 +0x275:  movl   $0x0,0x8(%eax)
08084039 +0x27c:  mov    0x8(%ebp),%eax
0808403c +0x27f:  movl   $0x0,0xc(%eax)
08084043 +0x286:  mov    0x8(%ebp),%eax
08084046 +0x289:  movl   $0x0,0x10(%eax)
0808404d +0x290:  mov    0x8(%ebp),%eax
08084050 +0x293:  movl   $0x0,0x14(%eax)
08084057 +0x29a:  mov    0x8(%ebp),%eax
0808405a +0x29d:  mov    %eax,(%esp)
0808405d +0x2a0:  call   080840f8 <+0x33b>
08084062 +0x2a5:  leave
08084063 +0x2a6:  ret
08084064 +0x2a7:  push   %ebp
08084065 +0x2a8:  mov    %esp,%ebp
08084067 +0x2aa:  sub    $0x18,%esp
0808406a +0x2ad:  mov    0x8(%ebp),%eax
0808406d +0x2b0:  mov    %eax,(%esp)
08084070 +0x2b3:  call   0808412a <+0x36d>
08084075 +0x2b8:  leave
08084076 +0x2b9:  ret
08084077 +0x2ba:  nop
08084078 +0x2bb:  push   %ebp
08084079 +0x2bc:  mov    %esp,%ebp
0808407b +0x2be:  sub    $0x28,%esp
0808407e +0x2c1:  jmp    080840c0 <+0x303>
08084080 +0x2c3:  mov    0xc(%ebp),%eax
08084083 +0x2c6:  mov    %eax,(%esp)
08084086 +0x2c9:  call   0808412f <+0x372>
0808408b +0x2ce:  mov    %eax,0x4(%esp)
0808408f +0x2d2:  mov    0x8(%ebp),%eax
08084092 +0x2d5:  mov    %eax,(%esp)
08084095 +0x2d8:  call   08084078 <+0x2bb>
0808409a +0x2dd:  mov    0xc(%ebp),%eax
0808409d +0x2e0:  mov    %eax,(%esp)
080840a0 +0x2e3:  call   0808413a <+0x37d>
080840a5 +0x2e8:  mov    %eax,-0xc(%ebp)
080840a8 +0x2eb:  mov    0xc(%ebp),%eax
080840ab +0x2ee:  mov    %eax,0x4(%esp)
080840af +0x2f2:  mov    0x8(%ebp),%eax
080840b2 +0x2f5:  mov    %eax,(%esp)
080840b5 +0x2f8:  call   08084146 <+0x389>
080840ba +0x2fd:  mov    -0xc(%ebp),%eax
080840bd +0x300:  mov    %eax,0xc(%ebp)
080840c0 +0x303:  cmpl   $0x0,0xc(%ebp)
080840c4 +0x307:  setne  %al
080840c7 +0x30a:  test   %al,%al
080840c9 +0x30c:  jne    08084080 <+0x2c3>
080840cb +0x30e:  leave
080840cc +0x30f:  ret
080840cd +0x310:  nop
080840ce +0x311:  push   %ebp
080840cf +0x312:  mov    %esp,%ebp
080840d1 +0x314:  mov    0x8(%ebp),%eax
080840d4 +0x317:  mov    0x8(%eax),%eax
080840d7 +0x31a:  pop    %ebp
080840d8 +0x31b:  ret
080840d9 +0x31c:  nop
080840da +0x31d:  push   %ebp
080840db +0x31e:  mov    %esp,%ebp
080840dd +0x320:  pop    %ebp
080840de +0x321:  ret
080840df +0x322:  push   %ebp
080840e0 +0x323:  mov    %esp,%ebp
080840e2 +0x325:  pop    %ebp
080840e3 +0x326:  ret
080840e4 +0x327:  push   %ebp
080840e5 +0x328:  mov    %esp,%ebp
080840e7 +0x32a:  sub    $0x18,%esp
080840ea +0x32d:  mov    0x8(%ebp),%eax
080840ed +0x330:  mov    %eax,(%esp)
080840f0 +0x333:  call   0808417a <+0x3bd>
080840f5 +0x338:  leave
080840f6 +0x339:  ret
080840f7 +0x33a:  nop
080840f8 +0x33b:  push   %ebp
080840f9 +0x33c:  mov    %esp,%ebp
080840fb +0x33e:  mov    0x8(%ebp),%eax
080840fe +0x341:  movl   $0x0,0x4(%eax)
08084105 +0x348:  mov    0x8(%ebp),%eax
08084108 +0x34b:  movl   $0x0,0x8(%eax)
0808410f +0x352:  mov    0x8(%ebp),%eax
08084112 +0x355:  lea    0x4(%eax),%edx
08084115 +0x358:  mov    0x8(%ebp),%eax
08084118 +0x35b:  mov    %edx,0xc(%eax)
0808411b +0x35e:  mov    0x8(%ebp),%eax
0808411e +0x361:  lea    0x4(%eax),%edx
08084121 +0x364:  mov    0x8(%ebp),%eax
08084124 +0x367:  mov    %edx,0x10(%eax)
08084127 +0x36a:  pop    %ebp
08084128 +0x36b:  ret
08084129 +0x36c:  nop
0808412a +0x36d:  push   %ebp
0808412b +0x36e:  mov    %esp,%ebp
0808412d +0x370:  pop    %ebp
0808412e +0x371:  ret
0808412f +0x372:  push   %ebp
08084130 +0x373:  mov    %esp,%ebp
08084132 +0x375:  mov    0x8(%ebp),%eax
08084135 +0x378:  mov    0xc(%eax),%eax
08084138 +0x37b:  pop    %ebp
08084139 +0x37c:  ret
0808413a +0x37d:  push   %ebp
0808413b +0x37e:  mov    %esp,%ebp
0808413d +0x380:  mov    0x8(%ebp),%eax
08084140 +0x383:  mov    0x8(%eax),%eax
08084143 +0x386:  pop    %ebp
08084144 +0x387:  ret
08084145 +0x388:  nop
08084146 +0x389:  push   %ebp
08084147 +0x38a:  mov    %esp,%ebp
08084149 +0x38c:  sub    $0x18,%esp
0808414c +0x38f:  mov    0x8(%ebp),%eax
0808414f +0x392:  mov    %eax,(%esp)
08084152 +0x395:  call   08084180 <+0x3c3>
08084157 +0x39a:  mov    0xc(%ebp),%edx
0808415a +0x39d:  mov    %edx,0x4(%esp)
0808415e +0x3a1:  mov    %eax,(%esp)
08084161 +0x3a4:  call   0808419e <+0x3e1>
08084166 +0x3a9:  mov    0xc(%ebp),%eax
08084169 +0x3ac:  mov    %eax,0x4(%esp)
0808416d +0x3b0:  mov    0x8(%ebp),%eax
08084170 +0x3b3:  mov    %eax,(%esp)
08084173 +0x3b6:  call   080841b2 <+0x3f5>
08084178 +0x3bb:  leave
08084179 +0x3bc:  ret
0808417a +0x3bd:  push   %ebp
0808417b +0x3be:  mov    %esp,%ebp
0808417d +0x3c0:  pop    %ebp
0808417e +0x3c1:  ret
0808417f +0x3c2:  nop
08084180 +0x3c3:  push   %ebp
08084181 +0x3c4:  mov    %esp,%ebp
08084183 +0x3c6:  mov    0x8(%ebp),%eax
08084186 +0x3c9:  pop    %ebp
08084187 +0x3ca:  ret
08084188 +0x3cb:  push   %ebp
08084189 +0x3cc:  mov    %esp,%ebp
0808418b +0x3ce:  sub    $0x18,%esp
0808418e +0x3d1:  mov    0x8(%ebp),%eax
08084191 +0x3d4:  add    $0x10,%eax
08084194 +0x3d7:  mov    %eax,(%esp)
08084197 +0x3da:  call   08083e38 <+0x7b>
0808419c +0x3df:  leave
0808419d +0x3e0:  ret
0808419e +0x3e1:  push   %ebp
0808419f +0x3e2:  mov    %esp,%ebp
080841a1 +0x3e4:  sub    $0x18,%esp
080841a4 +0x3e7:  mov    0xc(%ebp),%eax
080841a7 +0x3ea:  mov    %eax,(%esp)
080841aa +0x3ed:  call   08084188 <+0x3cb>
080841af +0x3f2:  leave
080841b0 +0x3f3:  ret
080841b1 +0x3f4:  nop
080841b2 +0x3f5:  push   %ebp
080841b3 +0x3f6:  mov    %esp,%ebp
080841b5 +0x3f8:  sub    $0x18,%esp
080841b8 +0x3fb:  mov    0x8(%ebp),%eax
080841bb +0x3fe:  movl   $0x1,0x8(%esp)
080841c3 +0x406:  mov    0xc(%ebp),%edx
080841c6 +0x409:  mov    %edx,0x4(%esp)
080841ca +0x40d:  mov    %eax,(%esp)
080841cd +0x410:  call   080841d4 <+0x417>
080841d2 +0x415:  leave
080841d3 +0x416:  ret
080841d4 +0x417:  push   %ebp
080841d5 +0x418:  mov    %esp,%ebp
080841d7 +0x41a:  sub    $0x18,%esp
080841da +0x41d:  mov    0xc(%ebp),%eax
080841dd +0x420:  mov    %eax,(%esp)
080841e0 +0x423:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080841e5 +0x428:  leave
080841e6 +0x429:  ret
080841e7 +0x42a:  nop
080841e8 +0x42b:  push   %ebp
080841e9 +0x42c:  mov    %esp,%ebp
080841eb +0x42e:  sub    $0x18,%esp
080841ee +0x431:  mov    0x8(%ebp),%eax
080841f1 +0x434:  mov    %eax,(%esp)
080841f4 +0x437:  call   08083f80 <+0x1c3>
080841f9 +0x43c:  leave
080841fa +0x43d:  ret
080841fb +0x43e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8083dbd

/* CHumanCertifier::humanCertifyTable_ */

void CHumanCertifier::_GLOBAL__I_humanCertifyTable_(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
