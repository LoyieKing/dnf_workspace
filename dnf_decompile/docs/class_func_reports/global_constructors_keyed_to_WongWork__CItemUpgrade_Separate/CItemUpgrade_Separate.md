# CItemUpgrade_Separate

`_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev`

`global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CItemUpgrade_Separate` | `0x0811ed05` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ed05  _GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev
#           global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()
# range [0x0811ed05, 0x0811fcdf]
0811ed05 +0x000:  push   %ebp
0811ed06 +0x001:  mov    %esp,%ebp
0811ed08 +0x003:  sub    $0x18,%esp
0811ed0b +0x006:  movl   $0xffff,0x4(%esp)
0811ed13 +0x00e:  movl   $0x1,(%esp)
0811ed1a +0x015:  call   0811ecc5 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0811ed1f +0x01a:  leave
0811ed20 +0x01b:  ret
0811ed21 +0x01c:  nop
0811ed22 +0x01d:  push   %ebp
0811ed23 +0x01e:  mov    %esp,%ebp
0811ed25 +0x020:  mov    0x8(%ebp),%eax
0811ed28 +0x023:  movzbl (%eax),%eax
0811ed2b +0x026:  test   %al,%al
0811ed2d +0x028:  sete   %al
0811ed30 +0x02b:  pop    %ebp
0811ed31 +0x02c:  ret
0811ed32 +0x02d:  push   %ebp
0811ed33 +0x02e:  mov    %esp,%ebp
0811ed35 +0x030:  mov    0x8(%ebp),%eax
0811ed38 +0x033:  movzbl (%eax),%eax
0811ed3b +0x036:  and    $0x1f,%eax
0811ed3e +0x039:  add    $0x1,%eax
0811ed41 +0x03c:  and    $0x1f,%eax
0811ed44 +0x03f:  mov    0x8(%ebp),%edx
0811ed47 +0x042:  mov    %eax,%ecx
0811ed49 +0x044:  and    $0x1f,%ecx
0811ed4c +0x047:  movzbl (%edx),%eax
0811ed4f +0x04a:  and    $0xffffffe0,%eax
0811ed52 +0x04d:  or     %ecx,%eax
0811ed54 +0x04f:  mov    %al,(%edx)
0811ed56 +0x051:  pop    %ebp
0811ed57 +0x052:  ret
0811ed58 +0x053:  push   %ebp
0811ed59 +0x054:  mov    %esp,%ebp
0811ed5b +0x056:  mov    0x8(%ebp),%eax
0811ed5e +0x059:  movzbl (%eax),%eax
0811ed61 +0x05c:  and    $0x1f,%eax
0811ed64 +0x05f:  pop    %ebp
0811ed65 +0x060:  ret
0811ed66 +0x061:  push   %ebp
0811ed67 +0x062:  mov    %esp,%ebp
0811ed69 +0x064:  mov    0x8(%ebp),%eax
0811ed6c +0x067:  mov    0x2(%eax),%eax
0811ed6f +0x06a:  test   %eax,%eax
0811ed71 +0x06c:  jne    0811ed7a <+0x75>
0811ed73 +0x06e:  mov    $0x1,%eax
0811ed78 +0x073:  jmp    0811ed7f <+0x7a>
0811ed7a +0x075:  mov    $0x0,%eax
0811ed7f +0x07a:  pop    %ebp
0811ed80 +0x07b:  ret
0811ed81 +0x07c:  nop
0811ed82 +0x07d:  push   %ebp
0811ed83 +0x07e:  mov    %esp,%ebp
0811ed85 +0x080:  sub    $0x18,%esp
0811ed88 +0x083:  mov    0x8(%ebp),%eax
0811ed8b +0x086:  add    $0x2c,%eax
0811ed8e +0x089:  mov    %eax,(%esp)
0811ed91 +0x08c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0811ed96 +0x091:  leave
0811ed97 +0x092:  ret
0811ed98 +0x093:  push   %ebp
0811ed99 +0x094:  mov    %esp,%ebp
0811ed9b +0x096:  mov    0x8(%ebp),%eax
0811ed9e +0x099:  mov    0x170(%eax),%eax
0811eda4 +0x09f:  pop    %ebp
0811eda5 +0x0a0:  ret
0811eda6 +0x0a1:  push   %ebp
0811eda7 +0x0a2:  mov    %esp,%ebp
0811eda9 +0x0a4:  mov    0x8(%ebp),%eax
0811edac +0x0a7:  mov    0x10(%eax),%eax
0811edaf +0x0aa:  test   %eax,%eax
0811edb1 +0x0ac:  je     0811edc2 <+0xbd>
0811edb3 +0x0ae:  mov    0x8(%ebp),%eax
0811edb6 +0x0b1:  mov    0x10(%eax),%eax
0811edb9 +0x0b4:  movzbl 0x1273(%eax),%eax
0811edc0 +0x0bb:  jmp    0811edc7 <+0xc2>
0811edc2 +0x0bd:  mov    $0x0,%eax
0811edc7 +0x0c2:  pop    %ebp
0811edc8 +0x0c3:  ret
0811edc9 +0x0c4:  nop
0811edca +0x0c5:  push   %ebp
0811edcb +0x0c6:  mov    %esp,%ebp
0811edcd +0x0c8:  mov    0x8(%ebp),%eax
0811edd0 +0x0cb:  mov    0x10(%eax),%eax
0811edd3 +0x0ce:  test   %eax,%eax
0811edd5 +0x0d0:  je     0811ede6 <+0xe1>
0811edd7 +0x0d2:  mov    0x8(%ebp),%eax
0811edda +0x0d5:  mov    0x10(%eax),%eax
0811eddd +0x0d8:  movzbl 0x1274(%eax),%eax
0811ede4 +0x0df:  jmp    0811edeb <+0xe6>
0811ede6 +0x0e1:  mov    $0x0,%eax
0811edeb +0x0e6:  pop    %ebp
0811edec +0x0e7:  ret
0811eded +0x0e8:  nop
0811edee +0x0e9:  push   %ebp
0811edef +0x0ea:  mov    %esp,%ebp
0811edf1 +0x0ec:  mov    0x8(%ebp),%eax
0811edf4 +0x0ef:  movzbl 0x711d8(%eax),%eax
0811edfb +0x0f6:  pop    %ebp
0811edfc +0x0f7:  ret
0811edfd +0x0f8:  nop
0811edfe +0x0f9:  push   %ebp
0811edff +0x0fa:  mov    %esp,%ebp
0811ee01 +0x0fc:  mov    0x8(%ebp),%eax
0811ee04 +0x0ff:  movl   $0x0,(%eax)
0811ee0a +0x105:  mov    0x8(%ebp),%eax
0811ee0d +0x108:  movl   $0x0,0x4(%eax)
0811ee14 +0x10f:  pop    %ebp
0811ee15 +0x110:  ret
0811ee16 +0x111:  push   %ebp
0811ee17 +0x112:  mov    %esp,%ebp
0811ee19 +0x114:  mov    0x8(%ebp),%eax
0811ee1c +0x117:  add    $0x4,%eax
0811ee1f +0x11a:  pop    %ebp
0811ee20 +0x11b:  ret
0811ee21 +0x11c:  nop
0811ee22 +0x11d:  push   %ebp
0811ee23 +0x11e:  mov    %esp,%ebp
0811ee25 +0x120:  sub    $0x18,%esp
0811ee28 +0x123:  mov    0x8(%ebp),%eax
0811ee2b +0x126:  mov    %eax,(%esp)
0811ee2e +0x129:  call   0811ef80 <+0x27b>
0811ee33 +0x12e:  leave
0811ee34 +0x12f:  ret
0811ee35 +0x130:  nop
0811ee36 +0x131:  push   %ebp
0811ee37 +0x132:  mov    %esp,%ebp
0811ee39 +0x134:  sub    $0x18,%esp
0811ee3c +0x137:  mov    0x8(%ebp),%eax
0811ee3f +0x13a:  mov    %eax,(%esp)
0811ee42 +0x13d:  call   0811effa <+0x2f5>
0811ee47 +0x142:  leave
0811ee48 +0x143:  ret
0811ee49 +0x144:  nop
0811ee4a +0x145:  push   %ebp
0811ee4b +0x146:  mov    %esp,%ebp
0811ee4d +0x148:  sub    $0x18,%esp
0811ee50 +0x14b:  mov    0x8(%ebp),%eax
0811ee53 +0x14e:  mov    %eax,(%esp)
0811ee56 +0x151:  call   0811f074 <+0x36f>
0811ee5b +0x156:  leave
0811ee5c +0x157:  ret
0811ee5d +0x158:  nop
0811ee5e +0x159:  push   %ebp
0811ee5f +0x15a:  mov    %esp,%ebp
0811ee61 +0x15c:  push   %esi
0811ee62 +0x15d:  push   %ebx
0811ee63 +0x15e:  sub    $0x10,%esp
0811ee66 +0x161:  mov    0x8(%ebp),%eax
0811ee69 +0x164:  add    $0x140,%eax
0811ee6e +0x169:  mov    %eax,(%esp)
0811ee71 +0x16c:  call   0811ef58 <+0x253>
0811ee76 +0x171:  mov    0x8(%ebp),%eax
0811ee79 +0x174:  add    $0x158,%eax
0811ee7e +0x179:  mov    %eax,(%esp)
0811ee81 +0x17c:  call   0811efd2 <+0x2cd>
0811ee86 +0x181:  mov    0x8(%ebp),%eax
0811ee89 +0x184:  add    $0x170,%eax
0811ee8e +0x189:  mov    %eax,(%esp)
0811ee91 +0x18c:  call   0811f04c <+0x347>
0811ee96 +0x191:  jmp    0811eed2 <+0x1cd>
0811ee98 +0x193:  mov    %edx,%ebx
0811ee9a +0x195:  mov    %eax,%esi
0811ee9c +0x197:  mov    0x8(%ebp),%eax
0811ee9f +0x19a:  add    $0x158,%eax
0811eea4 +0x19f:  mov    %eax,(%esp)
0811eea7 +0x1a2:  call   0811ee36 <+0x131>
0811eeac +0x1a7:  mov    %esi,%eax
0811eeae +0x1a9:  mov    %ebx,%edx
0811eeb0 +0x1ab:  jmp    0811eeb2 <+0x1ad>
0811eeb2 +0x1ad:  mov    %edx,%ebx
0811eeb4 +0x1af:  mov    %eax,%esi
0811eeb6 +0x1b1:  mov    0x8(%ebp),%eax
0811eeb9 +0x1b4:  add    $0x140,%eax
0811eebe +0x1b9:  mov    %eax,(%esp)
0811eec1 +0x1bc:  call   0811ee22 <+0x11d>
0811eec6 +0x1c1:  mov    %esi,%eax
0811eec8 +0x1c3:  mov    %ebx,%edx
0811eeca +0x1c5:  mov    %eax,(%esp)
0811eecd +0x1c8:  call   08ae3750 <_Unwind_Resume>
0811eed2 +0x1cd:  add    $0x10,%esp
0811eed5 +0x1d0:  pop    %ebx
0811eed6 +0x1d1:  pop    %esi
0811eed7 +0x1d2:  pop    %ebp
0811eed8 +0x1d3:  ret
0811eed9 +0x1d4:  nop
0811eeda +0x1d5:  push   %ebp
0811eedb +0x1d6:  mov    %esp,%ebp
0811eedd +0x1d8:  push   %esi
0811eede +0x1d9:  push   %ebx
0811eedf +0x1da:  sub    $0x10,%esp
0811eee2 +0x1dd:  mov    0x8(%ebp),%eax
0811eee5 +0x1e0:  add    $0x170,%eax
0811eeea +0x1e5:  mov    %eax,(%esp)
0811eeed +0x1e8:  call   0811ee4a <+0x145>
0811eef2 +0x1ed:  jmp    0811ef0e <+0x209>
0811eef4 +0x1ef:  mov    %edx,%ebx
0811eef6 +0x1f1:  mov    %eax,%esi
0811eef8 +0x1f3:  mov    0x8(%ebp),%eax
0811eefb +0x1f6:  add    $0x158,%eax
0811ef00 +0x1fb:  mov    %eax,(%esp)
0811ef03 +0x1fe:  call   0811ee36 <+0x131>
0811ef08 +0x203:  mov    %esi,%eax
0811ef0a +0x205:  mov    %ebx,%edx
0811ef0c +0x207:  jmp    0811ef20 <+0x21b>
0811ef0e +0x209:  mov    0x8(%ebp),%eax
0811ef11 +0x20c:  add    $0x158,%eax
0811ef16 +0x211:  mov    %eax,(%esp)
0811ef19 +0x214:  call   0811ee36 <+0x131>
0811ef1e +0x219:  jmp    0811ef40 <+0x23b>
0811ef20 +0x21b:  mov    %edx,%ebx
0811ef22 +0x21d:  mov    %eax,%esi
0811ef24 +0x21f:  mov    0x8(%ebp),%eax
0811ef27 +0x222:  add    $0x140,%eax
0811ef2c +0x227:  mov    %eax,(%esp)
0811ef2f +0x22a:  call   0811ee22 <+0x11d>
0811ef34 +0x22f:  mov    %esi,%eax
0811ef36 +0x231:  mov    %ebx,%edx
0811ef38 +0x233:  mov    %eax,(%esp)
0811ef3b +0x236:  call   08ae3750 <_Unwind_Resume>
0811ef40 +0x23b:  mov    0x8(%ebp),%eax
0811ef43 +0x23e:  add    $0x140,%eax
0811ef48 +0x243:  mov    %eax,(%esp)
0811ef4b +0x246:  call   0811ee22 <+0x11d>
0811ef50 +0x24b:  add    $0x10,%esp
0811ef53 +0x24e:  pop    %ebx
0811ef54 +0x24f:  pop    %esi
0811ef55 +0x250:  pop    %ebp
0811ef56 +0x251:  ret
0811ef57 +0x252:  nop
0811ef58 +0x253:  push   %ebp
0811ef59 +0x254:  mov    %esp,%ebp
0811ef5b +0x256:  sub    $0x18,%esp
0811ef5e +0x259:  mov    0x8(%ebp),%eax
0811ef61 +0x25c:  mov    %eax,(%esp)
0811ef64 +0x25f:  call   0811f376 <+0x671>
0811ef69 +0x264:  leave
0811ef6a +0x265:  ret
0811ef6b +0x266:  nop
0811ef6c +0x267:  push   %ebp
0811ef6d +0x268:  mov    %esp,%ebp
0811ef6f +0x26a:  sub    $0x18,%esp
0811ef72 +0x26d:  mov    0x8(%ebp),%eax
0811ef75 +0x270:  mov    %eax,(%esp)
0811ef78 +0x273:  call   0811f38a <+0x685>
0811ef7d +0x278:  leave
0811ef7e +0x279:  ret
0811ef7f +0x27a:  nop
0811ef80 +0x27b:  push   %ebp
0811ef81 +0x27c:  mov    %esp,%ebp
0811ef83 +0x27e:  push   %esi
0811ef84 +0x27f:  push   %ebx
0811ef85 +0x280:  sub    $0x10,%esp
0811ef88 +0x283:  mov    0x8(%ebp),%eax
0811ef8b +0x286:  mov    %eax,(%esp)
0811ef8e +0x289:  call   0811f3f4 <+0x6ef>
0811ef93 +0x28e:  mov    %eax,0x4(%esp)
0811ef97 +0x292:  mov    0x8(%ebp),%eax
0811ef9a +0x295:  mov    %eax,(%esp)
0811ef9d +0x298:  call   0811f39e <+0x699>
0811efa2 +0x29d:  jmp    0811efbf <+0x2ba>
0811efa4 +0x29f:  mov    %edx,%ebx
0811efa6 +0x2a1:  mov    %eax,%esi
0811efa8 +0x2a3:  mov    0x8(%ebp),%eax
0811efab +0x2a6:  mov    %eax,(%esp)
0811efae +0x2a9:  call   0811ef6c <+0x267>
0811efb3 +0x2ae:  mov    %esi,%eax
0811efb5 +0x2b0:  mov    %ebx,%edx
0811efb7 +0x2b2:  mov    %eax,(%esp)
0811efba +0x2b5:  call   08ae3750 <_Unwind_Resume>
0811efbf +0x2ba:  mov    0x8(%ebp),%eax
0811efc2 +0x2bd:  mov    %eax,(%esp)
0811efc5 +0x2c0:  call   0811ef6c <+0x267>
0811efca +0x2c5:  add    $0x10,%esp
0811efcd +0x2c8:  pop    %ebx
0811efce +0x2c9:  pop    %esi
0811efcf +0x2ca:  pop    %ebp
0811efd0 +0x2cb:  ret
0811efd1 +0x2cc:  nop
0811efd2 +0x2cd:  push   %ebp
0811efd3 +0x2ce:  mov    %esp,%ebp
0811efd5 +0x2d0:  sub    $0x18,%esp
0811efd8 +0x2d3:  mov    0x8(%ebp),%eax
0811efdb +0x2d6:  mov    %eax,(%esp)
0811efde +0x2d9:  call   0811f400 <+0x6fb>
0811efe3 +0x2de:  leave
0811efe4 +0x2df:  ret
0811efe5 +0x2e0:  nop
0811efe6 +0x2e1:  push   %ebp
0811efe7 +0x2e2:  mov    %esp,%ebp
0811efe9 +0x2e4:  sub    $0x18,%esp
0811efec +0x2e7:  mov    0x8(%ebp),%eax
0811efef +0x2ea:  mov    %eax,(%esp)
0811eff2 +0x2ed:  call   0811f414 <+0x70f>
0811eff7 +0x2f2:  leave
0811eff8 +0x2f3:  ret
0811eff9 +0x2f4:  nop
0811effa +0x2f5:  push   %ebp
0811effb +0x2f6:  mov    %esp,%ebp
0811effd +0x2f8:  push   %esi
0811effe +0x2f9:  push   %ebx
0811efff +0x2fa:  sub    $0x10,%esp
0811f002 +0x2fd:  mov    0x8(%ebp),%eax
0811f005 +0x300:  mov    %eax,(%esp)
0811f008 +0x303:  call   0811f47e <+0x779>
0811f00d +0x308:  mov    %eax,0x4(%esp)
0811f011 +0x30c:  mov    0x8(%ebp),%eax
0811f014 +0x30f:  mov    %eax,(%esp)
0811f017 +0x312:  call   0811f428 <+0x723>
0811f01c +0x317:  jmp    0811f039 <+0x334>
0811f01e +0x319:  mov    %edx,%ebx
0811f020 +0x31b:  mov    %eax,%esi
0811f022 +0x31d:  mov    0x8(%ebp),%eax
0811f025 +0x320:  mov    %eax,(%esp)
0811f028 +0x323:  call   0811efe6 <+0x2e1>
0811f02d +0x328:  mov    %esi,%eax
0811f02f +0x32a:  mov    %ebx,%edx
0811f031 +0x32c:  mov    %eax,(%esp)
0811f034 +0x32f:  call   08ae3750 <_Unwind_Resume>
0811f039 +0x334:  mov    0x8(%ebp),%eax
0811f03c +0x337:  mov    %eax,(%esp)
0811f03f +0x33a:  call   0811efe6 <+0x2e1>
0811f044 +0x33f:  add    $0x10,%esp
0811f047 +0x342:  pop    %ebx
0811f048 +0x343:  pop    %esi
0811f049 +0x344:  pop    %ebp
0811f04a +0x345:  ret
0811f04b +0x346:  nop
0811f04c +0x347:  push   %ebp
0811f04d +0x348:  mov    %esp,%ebp
0811f04f +0x34a:  sub    $0x18,%esp
0811f052 +0x34d:  mov    0x8(%ebp),%eax
0811f055 +0x350:  mov    %eax,(%esp)
0811f058 +0x353:  call   0811f48a <+0x785>
0811f05d +0x358:  leave
0811f05e +0x359:  ret
0811f05f +0x35a:  nop
0811f060 +0x35b:  push   %ebp
0811f061 +0x35c:  mov    %esp,%ebp
0811f063 +0x35e:  sub    $0x18,%esp
0811f066 +0x361:  mov    0x8(%ebp),%eax
0811f069 +0x364:  mov    %eax,(%esp)
0811f06c +0x367:  call   0811f49e <+0x799>
0811f071 +0x36c:  leave
0811f072 +0x36d:  ret
0811f073 +0x36e:  nop
0811f074 +0x36f:  push   %ebp
0811f075 +0x370:  mov    %esp,%ebp
0811f077 +0x372:  push   %esi
0811f078 +0x373:  push   %ebx
0811f079 +0x374:  sub    $0x10,%esp
0811f07c +0x377:  mov    0x8(%ebp),%eax
0811f07f +0x37a:  mov    %eax,(%esp)
0811f082 +0x37d:  call   0811f508 <+0x803>
0811f087 +0x382:  mov    %eax,0x4(%esp)
0811f08b +0x386:  mov    0x8(%ebp),%eax
0811f08e +0x389:  mov    %eax,(%esp)
0811f091 +0x38c:  call   0811f4b2 <+0x7ad>
0811f096 +0x391:  jmp    0811f0b3 <+0x3ae>
0811f098 +0x393:  mov    %edx,%ebx
0811f09a +0x395:  mov    %eax,%esi
0811f09c +0x397:  mov    0x8(%ebp),%eax
0811f09f +0x39a:  mov    %eax,(%esp)
0811f0a2 +0x39d:  call   0811f060 <+0x35b>
0811f0a7 +0x3a2:  mov    %esi,%eax
0811f0a9 +0x3a4:  mov    %ebx,%edx
0811f0ab +0x3a6:  mov    %eax,(%esp)
0811f0ae +0x3a9:  call   08ae3750 <_Unwind_Resume>
0811f0b3 +0x3ae:  mov    0x8(%ebp),%eax
0811f0b6 +0x3b1:  mov    %eax,(%esp)
0811f0b9 +0x3b4:  call   0811f060 <+0x35b>
0811f0be +0x3b9:  add    $0x10,%esp
0811f0c1 +0x3bc:  pop    %ebx
0811f0c2 +0x3bd:  pop    %esi
0811f0c3 +0x3be:  pop    %ebp
0811f0c4 +0x3bf:  ret
0811f0c5 +0x3c0:  nop
0811f0c6 +0x3c1:  push   %ebp
0811f0c7 +0x3c2:  mov    %esp,%ebp
0811f0c9 +0x3c4:  push   %ebx
0811f0ca +0x3c5:  sub    $0x14,%esp
0811f0cd +0x3c8:  mov    0x8(%ebp),%ebx
0811f0d0 +0x3cb:  mov    0xc(%ebp),%eax
0811f0d3 +0x3ce:  mov    0x10(%ebp),%edx
0811f0d6 +0x3d1:  mov    %edx,0x8(%esp)
0811f0da +0x3d5:  mov    %eax,0x4(%esp)
0811f0de +0x3d9:  mov    %ebx,(%esp)
0811f0e1 +0x3dc:  call   0811f514 <+0x80f>
0811f0e6 +0x3e1:  sub    $0x4,%esp
0811f0e9 +0x3e4:  mov    %ebx,%eax
0811f0eb +0x3e6:  mov    -0x4(%ebp),%ebx
0811f0ee +0x3e9:  leave
0811f0ef +0x3ea:  ret    $0x4
0811f0f2 +0x3ed:  push   %ebp
0811f0f3 +0x3ee:  mov    %esp,%ebp
0811f0f5 +0x3f0:  push   %ebx
0811f0f6 +0x3f1:  sub    $0x14,%esp
0811f0f9 +0x3f4:  mov    0x8(%ebp),%ebx
0811f0fc +0x3f7:  mov    0xc(%ebp),%eax
0811f0ff +0x3fa:  mov    %eax,0x4(%esp)
0811f103 +0x3fe:  mov    %ebx,(%esp)
0811f106 +0x401:  call   0811f5d2 <+0x8cd>
0811f10b +0x406:  sub    $0x4,%esp
0811f10e +0x409:  mov    %ebx,%eax
0811f110 +0x40b:  mov    -0x4(%ebp),%ebx
0811f113 +0x40e:  leave
0811f114 +0x40f:  ret    $0x4
0811f117 +0x412:  nop
0811f118 +0x413:  push   %ebp
0811f119 +0x414:  mov    %esp,%ebp
0811f11b +0x416:  mov    0x8(%ebp),%eax
0811f11e +0x419:  mov    (%eax),%edx
0811f120 +0x41b:  mov    0xc(%ebp),%eax
0811f123 +0x41e:  mov    (%eax),%eax
0811f125 +0x420:  cmp    %eax,%edx
0811f127 +0x422:  sete   %al
0811f12a +0x425:  pop    %ebp
0811f12b +0x426:  ret
0811f12c +0x427:  push   %ebp
0811f12d +0x428:  mov    %esp,%ebp
0811f12f +0x42a:  mov    0x8(%ebp),%eax
0811f132 +0x42d:  mov    (%eax),%eax
0811f134 +0x42f:  add    $0x10,%eax
0811f137 +0x432:  pop    %ebp
0811f138 +0x433:  ret
0811f139 +0x434:  nop
0811f13a +0x435:  push   %ebp
0811f13b +0x436:  mov    %esp,%ebp
0811f13d +0x438:  push   %ebx
0811f13e +0x439:  sub    $0x14,%esp
0811f141 +0x43c:  mov    0x8(%ebp),%ebx
0811f144 +0x43f:  mov    0xc(%ebp),%eax
0811f147 +0x442:  mov    0x10(%ebp),%edx
0811f14a +0x445:  mov    %edx,0x8(%esp)
0811f14e +0x449:  mov    %eax,0x4(%esp)
0811f152 +0x44d:  mov    %ebx,(%esp)
0811f155 +0x450:  call   0811f5f8 <+0x8f3>
0811f15a +0x455:  sub    $0x4,%esp
0811f15d +0x458:  mov    %ebx,%eax
0811f15f +0x45a:  mov    -0x4(%ebp),%ebx
0811f162 +0x45d:  leave
0811f163 +0x45e:  ret    $0x4
0811f166 +0x461:  push   %ebp
0811f167 +0x462:  mov    %esp,%ebp
0811f169 +0x464:  push   %ebx
0811f16a +0x465:  sub    $0x14,%esp
0811f16d +0x468:  mov    0x8(%ebp),%ebx
0811f170 +0x46b:  mov    0xc(%ebp),%eax
0811f173 +0x46e:  mov    %eax,0x4(%esp)
0811f177 +0x472:  mov    %ebx,(%esp)
0811f17a +0x475:  call   0811f6b6 <+0x9b1>
0811f17f +0x47a:  sub    $0x4,%esp
0811f182 +0x47d:  mov    %ebx,%eax
0811f184 +0x47f:  mov    -0x4(%ebp),%ebx
0811f187 +0x482:  leave
0811f188 +0x483:  ret    $0x4
0811f18b +0x486:  nop
0811f18c +0x487:  push   %ebp
0811f18d +0x488:  mov    %esp,%ebp
0811f18f +0x48a:  mov    0x8(%ebp),%eax
0811f192 +0x48d:  mov    (%eax),%edx
0811f194 +0x48f:  mov    0xc(%ebp),%eax
0811f197 +0x492:  mov    (%eax),%eax
0811f199 +0x494:  cmp    %eax,%edx
0811f19b +0x496:  sete   %al
0811f19e +0x499:  pop    %ebp
0811f19f +0x49a:  ret
0811f1a0 +0x49b:  push   %ebp
0811f1a1 +0x49c:  mov    %esp,%ebp
0811f1a3 +0x49e:  mov    0x8(%ebp),%eax
0811f1a6 +0x4a1:  mov    (%eax),%eax
0811f1a8 +0x4a3:  add    $0x10,%eax
0811f1ab +0x4a6:  pop    %ebp
0811f1ac +0x4a7:  ret
0811f1ad +0x4a8:  nop
0811f1ae +0x4a9:  push   %ebp
0811f1af +0x4aa:  mov    %esp,%ebp
0811f1b1 +0x4ac:  sub    $0x28,%esp
0811f1b4 +0x4af:  movl   $0x0,-0x10(%ebp)
0811f1bb +0x4b6:  mov    0xc(%ebp),%eax
0811f1be +0x4b9:  mov    %eax,(%esp)
0811f1c1 +0x4bc:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0811f1c6 +0x4c1:  mov    %eax,-0x14(%ebp)
0811f1c9 +0x4c4:  mov    0xc(%ebp),%eax
0811f1cc +0x4c7:  movl   $0x0,0x4(%esp)
0811f1d4 +0x4cf:  mov    %eax,(%esp)
0811f1d7 +0x4d2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811f1dc +0x4d7:  movl   $0x0,-0xc(%ebp)
0811f1e3 +0x4de:  jmp    0811f27b <+0x576>
0811f1e8 +0x4e3:  mov    -0xc(%ebp),%edx
0811f1eb +0x4e6:  mov    %edx,%eax
0811f1ed +0x4e8:  add    %eax,%eax
0811f1ef +0x4ea:  add    %edx,%eax
0811f1f1 +0x4ec:  add    0x8(%ebp),%eax
0811f1f4 +0x4ef:  mov    %eax,(%esp)
0811f1f7 +0x4f2:  call   0811ed22 <+0x1d>
0811f1fc +0x4f7:  xor    $0x1,%eax
0811f1ff +0x4fa:  test   %al,%al
0811f201 +0x4fc:  je     0811f277 <+0x572>
0811f203 +0x4fe:  mov    -0xc(%ebp),%edx
0811f206 +0x501:  mov    0x8(%ebp),%ecx
0811f209 +0x504:  mov    %edx,%eax
0811f20b +0x506:  add    %eax,%eax
0811f20d +0x508:  add    %edx,%eax
0811f20f +0x50a:  movzbl (%eax,%ecx,1),%eax
0811f213 +0x50e:  movzbl %al,%edx
0811f216 +0x511:  mov    0xc(%ebp),%eax
0811f219 +0x514:  mov    %edx,0x4(%esp)
0811f21d +0x518:  mov    %eax,(%esp)
0811f220 +0x51b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811f225 +0x520:  mov    -0xc(%ebp),%edx
0811f228 +0x523:  mov    0x8(%ebp),%ecx
0811f22b +0x526:  mov    %edx,%eax
0811f22d +0x528:  add    %eax,%eax
0811f22f +0x52a:  add    %edx,%eax
0811f231 +0x52c:  lea    (%ecx,%eax,1),%eax
0811f234 +0x52f:  add    $0x1,%eax
0811f237 +0x532:  movzbl (%eax),%eax
0811f23a +0x535:  movzbl %al,%edx
0811f23d +0x538:  mov    0xc(%ebp),%eax
0811f240 +0x53b:  mov    %edx,0x4(%esp)
0811f244 +0x53f:  mov    %eax,(%esp)
0811f247 +0x542:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811f24c +0x547:  mov    -0xc(%ebp),%edx
0811f24f +0x54a:  mov    0x8(%ebp),%ecx
0811f252 +0x54d:  mov    %edx,%eax
0811f254 +0x54f:  add    %eax,%eax
0811f256 +0x551:  add    %edx,%eax
0811f258 +0x553:  lea    (%ecx,%eax,1),%eax
0811f25b +0x556:  add    $0x2,%eax
0811f25e +0x559:  movzbl (%eax),%eax
0811f261 +0x55c:  movzbl %al,%edx
0811f264 +0x55f:  mov    0xc(%ebp),%eax
0811f267 +0x562:  mov    %edx,0x4(%esp)
0811f26b +0x566:  mov    %eax,(%esp)
0811f26e +0x569:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811f273 +0x56e:  addl   $0x1,-0x10(%ebp)
0811f277 +0x572:  addl   $0x1,-0xc(%ebp)
0811f27b +0x576:  cmpl   $0x2,-0xc(%ebp)
0811f27f +0x57a:  setle  %al
0811f282 +0x57d:  test   %al,%al
0811f284 +0x57f:  jne    0811f1e8 <+0x4e3>
0811f28a +0x585:  mov    0xc(%ebp),%eax
0811f28d +0x588:  mov    -0x10(%ebp),%edx
0811f290 +0x58b:  mov    %edx,0x8(%esp)
0811f294 +0x58f:  lea    -0x14(%ebp),%edx
0811f297 +0x592:  mov    %edx,0x4(%esp)
0811f29b +0x596:  mov    %eax,(%esp)
0811f29e +0x599:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0811f2a3 +0x59e:  cmpl   $0x0,-0x10(%ebp)
0811f2a7 +0x5a2:  je     0811f374 <+0x66f>
0811f2ad +0x5a8:  mov    0x8(%ebp),%eax
0811f2b0 +0x5ab:  movzbl 0x9(%eax),%eax
0811f2b4 +0x5af:  movzbl %al,%edx
0811f2b7 +0x5b2:  mov    0xc(%ebp),%eax
0811f2ba +0x5b5:  mov    %edx,0x4(%esp)
0811f2be +0x5b9:  mov    %eax,(%esp)
0811f2c1 +0x5bc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811f2c6 +0x5c1:  mov    0x8(%ebp),%eax
0811f2c9 +0x5c4:  add    $0xa,%eax
0811f2cc +0x5c7:  mov    %eax,(%esp)
0811f2cf +0x5ca:  call   0811ed22 <+0x1d>
0811f2d4 +0x5cf:  xor    $0x1,%eax
0811f2d7 +0x5d2:  test   %al,%al
0811f2d9 +0x5d4:  je     0811f361 <+0x65c>
0811f2df +0x5da:  mov    0x8(%ebp),%eax
0811f2e2 +0x5dd:  movzbl 0xd(%eax),%eax
0811f2e6 +0x5e1:  and    $0x3,%eax
0811f2e9 +0x5e4:  movzbl %al,%edx
0811f2ec +0x5e7:  mov    0xc(%ebp),%eax
0811f2ef +0x5ea:  mov    %edx,0x4(%esp)
0811f2f3 +0x5ee:  mov    %eax,(%esp)
0811f2f6 +0x5f1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811f2fb +0x5f6:  mov    0x8(%ebp),%eax
0811f2fe +0x5f9:  movzbl 0xd(%eax),%eax
0811f302 +0x5fd:  movzbl %al,%edx
0811f305 +0x600:  mov    0xc(%ebp),%eax
0811f308 +0x603:  mov    %edx,0x4(%esp)
0811f30c +0x607:  mov    %eax,(%esp)
0811f30f +0x60a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811f314 +0x60f:  mov    0x8(%ebp),%eax
0811f317 +0x612:  movzbl 0xa(%eax),%eax
0811f31b +0x616:  movzbl %al,%edx
0811f31e +0x619:  mov    0xc(%ebp),%eax
0811f321 +0x61c:  mov    %edx,0x4(%esp)
0811f325 +0x620:  mov    %eax,(%esp)
0811f328 +0x623:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811f32d +0x628:  mov    0x8(%ebp),%eax
0811f330 +0x62b:  movzbl 0xb(%eax),%eax
0811f334 +0x62f:  movzbl %al,%edx
0811f337 +0x632:  mov    0xc(%ebp),%eax
0811f33a +0x635:  mov    %edx,0x4(%esp)
0811f33e +0x639:  mov    %eax,(%esp)
0811f341 +0x63c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811f346 +0x641:  mov    0x8(%ebp),%eax
0811f349 +0x644:  movzbl 0xc(%eax),%eax
0811f34d +0x648:  movzbl %al,%edx
0811f350 +0x64b:  mov    0xc(%ebp),%eax
0811f353 +0x64e:  mov    %edx,0x4(%esp)
0811f357 +0x652:  mov    %eax,(%esp)
0811f35a +0x655:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811f35f +0x65a:  jmp    0811f374 <+0x66f>
0811f361 +0x65c:  mov    0xc(%ebp),%eax
0811f364 +0x65f:  movl   $0xffffffff,0x4(%esp)
0811f36c +0x667:  mov    %eax,(%esp)
0811f36f +0x66a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811f374 +0x66f:  leave
0811f375 +0x670:  ret
0811f376 +0x671:  push   %ebp
0811f377 +0x672:  mov    %esp,%ebp
0811f379 +0x674:  sub    $0x18,%esp
0811f37c +0x677:  mov    0x8(%ebp),%eax
0811f37f +0x67a:  mov    %eax,(%esp)
0811f382 +0x67d:  call   0811f6dc <+0x9d7>
0811f387 +0x682:  leave
0811f388 +0x683:  ret
0811f389 +0x684:  nop
0811f38a +0x685:  push   %ebp
0811f38b +0x686:  mov    %esp,%ebp
0811f38d +0x688:  sub    $0x18,%esp
0811f390 +0x68b:  mov    0x8(%ebp),%eax
0811f393 +0x68e:  mov    %eax,(%esp)
0811f396 +0x691:  call   0811f72c <+0xa27>
0811f39b +0x696:  leave
0811f39c +0x697:  ret
0811f39d +0x698:  nop
0811f39e +0x699:  push   %ebp
0811f39f +0x69a:  mov    %esp,%ebp
0811f3a1 +0x69c:  sub    $0x28,%esp
0811f3a4 +0x69f:  jmp    0811f3e6 <+0x6e1>
0811f3a6 +0x6a1:  mov    0xc(%ebp),%eax
0811f3a9 +0x6a4:  mov    %eax,(%esp)
0811f3ac +0x6a7:  call   0811f731 <+0xa2c>
0811f3b1 +0x6ac:  mov    %eax,0x4(%esp)
0811f3b5 +0x6b0:  mov    0x8(%ebp),%eax
0811f3b8 +0x6b3:  mov    %eax,(%esp)
0811f3bb +0x6b6:  call   0811f39e <+0x699>
0811f3c0 +0x6bb:  mov    0xc(%ebp),%eax
0811f3c3 +0x6be:  mov    %eax,(%esp)
0811f3c6 +0x6c1:  call   0811f73c <+0xa37>
0811f3cb +0x6c6:  mov    %eax,-0xc(%ebp)
0811f3ce +0x6c9:  mov    0xc(%ebp),%eax
0811f3d1 +0x6cc:  mov    %eax,0x4(%esp)
0811f3d5 +0x6d0:  mov    0x8(%ebp),%eax
0811f3d8 +0x6d3:  mov    %eax,(%esp)
0811f3db +0x6d6:  call   0811f748 <+0xa43>
0811f3e0 +0x6db:  mov    -0xc(%ebp),%eax
0811f3e3 +0x6de:  mov    %eax,0xc(%ebp)
0811f3e6 +0x6e1:  cmpl   $0x0,0xc(%ebp)
0811f3ea +0x6e5:  setne  %al
0811f3ed +0x6e8:  test   %al,%al
0811f3ef +0x6ea:  jne    0811f3a6 <+0x6a1>
0811f3f1 +0x6ec:  leave
0811f3f2 +0x6ed:  ret
0811f3f3 +0x6ee:  nop
0811f3f4 +0x6ef:  push   %ebp
0811f3f5 +0x6f0:  mov    %esp,%ebp
0811f3f7 +0x6f2:  mov    0x8(%ebp),%eax
0811f3fa +0x6f5:  mov    0x8(%eax),%eax
0811f3fd +0x6f8:  pop    %ebp
0811f3fe +0x6f9:  ret
0811f3ff +0x6fa:  nop
0811f400 +0x6fb:  push   %ebp
0811f401 +0x6fc:  mov    %esp,%ebp
0811f403 +0x6fe:  sub    $0x18,%esp
0811f406 +0x701:  mov    0x8(%ebp),%eax
0811f409 +0x704:  mov    %eax,(%esp)
0811f40c +0x707:  call   0811f77c <+0xa77>
0811f411 +0x70c:  leave
0811f412 +0x70d:  ret
0811f413 +0x70e:  nop
0811f414 +0x70f:  push   %ebp
0811f415 +0x710:  mov    %esp,%ebp
0811f417 +0x712:  sub    $0x18,%esp
0811f41a +0x715:  mov    0x8(%ebp),%eax
0811f41d +0x718:  mov    %eax,(%esp)
0811f420 +0x71b:  call   0811f7cc <+0xac7>
0811f425 +0x720:  leave
0811f426 +0x721:  ret
0811f427 +0x722:  nop
0811f428 +0x723:  push   %ebp
0811f429 +0x724:  mov    %esp,%ebp
0811f42b +0x726:  sub    $0x28,%esp
0811f42e +0x729:  jmp    0811f470 <+0x76b>
0811f430 +0x72b:  mov    0xc(%ebp),%eax
0811f433 +0x72e:  mov    %eax,(%esp)
0811f436 +0x731:  call   0811f7d1 <+0xacc>
0811f43b +0x736:  mov    %eax,0x4(%esp)
0811f43f +0x73a:  mov    0x8(%ebp),%eax
0811f442 +0x73d:  mov    %eax,(%esp)
0811f445 +0x740:  call   0811f428 <+0x723>
0811f44a +0x745:  mov    0xc(%ebp),%eax
0811f44d +0x748:  mov    %eax,(%esp)
0811f450 +0x74b:  call   0811f7dc <+0xad7>
0811f455 +0x750:  mov    %eax,-0xc(%ebp)
0811f458 +0x753:  mov    0xc(%ebp),%eax
0811f45b +0x756:  mov    %eax,0x4(%esp)
0811f45f +0x75a:  mov    0x8(%ebp),%eax
0811f462 +0x75d:  mov    %eax,(%esp)
0811f465 +0x760:  call   0811f7e8 <+0xae3>
0811f46a +0x765:  mov    -0xc(%ebp),%eax
0811f46d +0x768:  mov    %eax,0xc(%ebp)
0811f470 +0x76b:  cmpl   $0x0,0xc(%ebp)
0811f474 +0x76f:  setne  %al
0811f477 +0x772:  test   %al,%al
0811f479 +0x774:  jne    0811f430 <+0x72b>
0811f47b +0x776:  leave
0811f47c +0x777:  ret
0811f47d +0x778:  nop
0811f47e +0x779:  push   %ebp
0811f47f +0x77a:  mov    %esp,%ebp
0811f481 +0x77c:  mov    0x8(%ebp),%eax
0811f484 +0x77f:  mov    0x8(%eax),%eax
0811f487 +0x782:  pop    %ebp
0811f488 +0x783:  ret
0811f489 +0x784:  nop
0811f48a +0x785:  push   %ebp
0811f48b +0x786:  mov    %esp,%ebp
0811f48d +0x788:  sub    $0x18,%esp
0811f490 +0x78b:  mov    0x8(%ebp),%eax
0811f493 +0x78e:  mov    %eax,(%esp)
0811f496 +0x791:  call   0811f81c <+0xb17>
0811f49b +0x796:  leave
0811f49c +0x797:  ret
0811f49d +0x798:  nop
0811f49e +0x799:  push   %ebp
0811f49f +0x79a:  mov    %esp,%ebp
0811f4a1 +0x79c:  sub    $0x18,%esp
0811f4a4 +0x79f:  mov    0x8(%ebp),%eax
0811f4a7 +0x7a2:  mov    %eax,(%esp)
0811f4aa +0x7a5:  call   0811f86c <+0xb67>
0811f4af +0x7aa:  leave
0811f4b0 +0x7ab:  ret
0811f4b1 +0x7ac:  nop
0811f4b2 +0x7ad:  push   %ebp
0811f4b3 +0x7ae:  mov    %esp,%ebp
0811f4b5 +0x7b0:  sub    $0x28,%esp
0811f4b8 +0x7b3:  jmp    0811f4fa <+0x7f5>
0811f4ba +0x7b5:  mov    0xc(%ebp),%eax
0811f4bd +0x7b8:  mov    %eax,(%esp)
0811f4c0 +0x7bb:  call   0811f871 <+0xb6c>
0811f4c5 +0x7c0:  mov    %eax,0x4(%esp)
0811f4c9 +0x7c4:  mov    0x8(%ebp),%eax
0811f4cc +0x7c7:  mov    %eax,(%esp)
0811f4cf +0x7ca:  call   0811f4b2 <+0x7ad>
0811f4d4 +0x7cf:  mov    0xc(%ebp),%eax
0811f4d7 +0x7d2:  mov    %eax,(%esp)
0811f4da +0x7d5:  call   0811f87c <+0xb77>
0811f4df +0x7da:  mov    %eax,-0xc(%ebp)
0811f4e2 +0x7dd:  mov    0xc(%ebp),%eax
0811f4e5 +0x7e0:  mov    %eax,0x4(%esp)
0811f4e9 +0x7e4:  mov    0x8(%ebp),%eax
0811f4ec +0x7e7:  mov    %eax,(%esp)
0811f4ef +0x7ea:  call   0811f888 <+0xb83>
0811f4f4 +0x7ef:  mov    -0xc(%ebp),%eax
0811f4f7 +0x7f2:  mov    %eax,0xc(%ebp)
0811f4fa +0x7f5:  cmpl   $0x0,0xc(%ebp)
0811f4fe +0x7f9:  setne  %al
0811f501 +0x7fc:  test   %al,%al
0811f503 +0x7fe:  jne    0811f4ba <+0x7b5>
0811f505 +0x800:  leave
0811f506 +0x801:  ret
0811f507 +0x802:  nop
0811f508 +0x803:  push   %ebp
0811f509 +0x804:  mov    %esp,%ebp
0811f50b +0x806:  mov    0x8(%ebp),%eax
0811f50e +0x809:  mov    0x8(%eax),%eax
0811f511 +0x80c:  pop    %ebp
0811f512 +0x80d:  ret
0811f513 +0x80e:  nop
0811f514 +0x80f:  push   %ebp
0811f515 +0x810:  mov    %esp,%ebp
0811f517 +0x812:  push   %esi
0811f518 +0x813:  push   %ebx
0811f519 +0x814:  sub    $0x30,%esp
0811f51c +0x817:  mov    0x8(%ebp),%ebx
0811f51f +0x81a:  mov    0xc(%ebp),%eax
0811f522 +0x81d:  mov    %eax,(%esp)
0811f525 +0x820:  call   0811f8c8 <+0xbc3>
0811f52a +0x825:  mov    %eax,%esi
0811f52c +0x827:  mov    0xc(%ebp),%eax
0811f52f +0x82a:  mov    %eax,(%esp)
0811f532 +0x82d:  call   0811f8bc <+0xbb7>
0811f537 +0x832:  lea    -0x10(%ebp),%edx
0811f53a +0x835:  mov    0x10(%ebp),%ecx
0811f53d +0x838:  mov    %ecx,0x10(%esp)
0811f541 +0x83c:  mov    %esi,0xc(%esp)
0811f545 +0x840:  mov    %eax,0x8(%esp)
0811f549 +0x844:  mov    0xc(%ebp),%eax
0811f54c +0x847:  mov    %eax,0x4(%esp)
0811f550 +0x84b:  mov    %edx,(%esp)
0811f553 +0x84e:  call   0811f8d4 <+0xbcf>
0811f558 +0x853:  sub    $0x4,%esp
0811f55b +0x856:  lea    -0xc(%ebp),%eax
0811f55e +0x859:  mov    0xc(%ebp),%edx
0811f561 +0x85c:  mov    %edx,0x4(%esp)
0811f565 +0x860:  mov    %eax,(%esp)
0811f568 +0x863:  call   0811f5d2 <+0x8cd>
0811f56d +0x868:  sub    $0x4,%esp
0811f570 +0x86b:  lea    -0xc(%ebp),%eax
0811f573 +0x86e:  mov    %eax,0x4(%esp)
0811f577 +0x872:  lea    -0x10(%ebp),%eax
0811f57a +0x875:  mov    %eax,(%esp)
0811f57d +0x878:  call   0811f118 <+0x413>
0811f582 +0x87d:  test   %al,%al
0811f584 +0x87f:  jne    0811f5ab <+0x8a6>
0811f586 +0x881:  mov    -0x10(%ebp),%eax
0811f589 +0x884:  mov    %eax,(%esp)
0811f58c +0x887:  call   0811f950 <+0xc4b>
0811f591 +0x88c:  mov    0xc(%ebp),%edx
0811f594 +0x88f:  mov    %eax,0x8(%esp)
0811f598 +0x893:  mov    0x10(%ebp),%eax
0811f59b +0x896:  mov    %eax,0x4(%esp)
0811f59f +0x89a:  mov    %edx,(%esp)
0811f5a2 +0x89d:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0811f5a7 +0x8a2:  test   %al,%al
0811f5a9 +0x8a4:  je     0811f5bf <+0x8ba>
0811f5ab +0x8a6:  mov    0xc(%ebp),%eax
0811f5ae +0x8a9:  mov    %eax,0x4(%esp)
0811f5b2 +0x8ad:  mov    %ebx,(%esp)
0811f5b5 +0x8b0:  call   0811f5d2 <+0x8cd>
0811f5ba +0x8b5:  sub    $0x4,%esp
0811f5bd +0x8b8:  jmp    0811f5c4 <+0x8bf>
0811f5bf +0x8ba:  mov    -0x10(%ebp),%eax
0811f5c2 +0x8bd:  mov    %eax,(%ebx)
0811f5c4 +0x8bf:  mov    %ebx,%eax
0811f5c6 +0x8c1:  lea    -0x8(%ebp),%esp
0811f5c9 +0x8c4:  add    $0x0,%esp
0811f5cc +0x8c7:  pop    %ebx
0811f5cd +0x8c8:  pop    %esi
0811f5ce +0x8c9:  pop    %ebp
0811f5cf +0x8ca:  ret    $0x4
0811f5d2 +0x8cd:  push   %ebp
0811f5d3 +0x8ce:  mov    %esp,%ebp
0811f5d5 +0x8d0:  push   %ebx
0811f5d6 +0x8d1:  sub    $0x14,%esp
0811f5d9 +0x8d4:  mov    0x8(%ebp),%ebx
0811f5dc +0x8d7:  mov    0xc(%ebp),%eax
0811f5df +0x8da:  add    $0x4,%eax
0811f5e2 +0x8dd:  mov    %eax,0x4(%esp)
0811f5e6 +0x8e1:  mov    %ebx,(%esp)
0811f5e9 +0x8e4:  call   0811f972 <+0xc6d>
0811f5ee +0x8e9:  mov    %ebx,%eax
0811f5f0 +0x8eb:  add    $0x14,%esp
0811f5f3 +0x8ee:  pop    %ebx
0811f5f4 +0x8ef:  pop    %ebp
0811f5f5 +0x8f0:  ret    $0x4
0811f5f8 +0x8f3:  push   %ebp
0811f5f9 +0x8f4:  mov    %esp,%ebp
0811f5fb +0x8f6:  push   %esi
0811f5fc +0x8f7:  push   %ebx
0811f5fd +0x8f8:  sub    $0x30,%esp
0811f600 +0x8fb:  mov    0x8(%ebp),%ebx
0811f603 +0x8fe:  mov    0xc(%ebp),%eax
0811f606 +0x901:  mov    %eax,(%esp)
0811f609 +0x904:  call   0811f98c <+0xc87>
0811f60e +0x909:  mov    %eax,%esi
0811f610 +0x90b:  mov    0xc(%ebp),%eax
0811f613 +0x90e:  mov    %eax,(%esp)
0811f616 +0x911:  call   0811f980 <+0xc7b>
0811f61b +0x916:  lea    -0x10(%ebp),%edx
0811f61e +0x919:  mov    0x10(%ebp),%ecx
0811f621 +0x91c:  mov    %ecx,0x10(%esp)
0811f625 +0x920:  mov    %esi,0xc(%esp)
0811f629 +0x924:  mov    %eax,0x8(%esp)
0811f62d +0x928:  mov    0xc(%ebp),%eax
0811f630 +0x92b:  mov    %eax,0x4(%esp)
0811f634 +0x92f:  mov    %edx,(%esp)
0811f637 +0x932:  call   0811f998 <+0xc93>
0811f63c +0x937:  sub    $0x4,%esp
0811f63f +0x93a:  lea    -0xc(%ebp),%eax
0811f642 +0x93d:  mov    0xc(%ebp),%edx
0811f645 +0x940:  mov    %edx,0x4(%esp)
0811f649 +0x944:  mov    %eax,(%esp)
0811f64c +0x947:  call   0811f6b6 <+0x9b1>
0811f651 +0x94c:  sub    $0x4,%esp
0811f654 +0x94f:  lea    -0xc(%ebp),%eax
0811f657 +0x952:  mov    %eax,0x4(%esp)
0811f65b +0x956:  lea    -0x10(%ebp),%eax
0811f65e +0x959:  mov    %eax,(%esp)
0811f661 +0x95c:  call   0811f18c <+0x487>
0811f666 +0x961:  test   %al,%al
0811f668 +0x963:  jne    0811f68f <+0x98a>
0811f66a +0x965:  mov    -0x10(%ebp),%eax
0811f66d +0x968:  mov    %eax,(%esp)
0811f670 +0x96b:  call   0811fa14 <+0xd0f>
0811f675 +0x970:  mov    0xc(%ebp),%edx
0811f678 +0x973:  mov    %eax,0x8(%esp)
0811f67c +0x977:  mov    0x10(%ebp),%eax
0811f67f +0x97a:  mov    %eax,0x4(%esp)
0811f683 +0x97e:  mov    %edx,(%esp)
0811f686 +0x981:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0811f68b +0x986:  test   %al,%al
0811f68d +0x988:  je     0811f6a3 <+0x99e>
0811f68f +0x98a:  mov    0xc(%ebp),%eax
0811f692 +0x98d:  mov    %eax,0x4(%esp)
0811f696 +0x991:  mov    %ebx,(%esp)
0811f699 +0x994:  call   0811f6b6 <+0x9b1>
0811f69e +0x999:  sub    $0x4,%esp
0811f6a1 +0x99c:  jmp    0811f6a8 <+0x9a3>
0811f6a3 +0x99e:  mov    -0x10(%ebp),%eax
0811f6a6 +0x9a1:  mov    %eax,(%ebx)
0811f6a8 +0x9a3:  mov    %ebx,%eax
0811f6aa +0x9a5:  lea    -0x8(%ebp),%esp
0811f6ad +0x9a8:  add    $0x0,%esp
0811f6b0 +0x9ab:  pop    %ebx
0811f6b1 +0x9ac:  pop    %esi
0811f6b2 +0x9ad:  pop    %ebp
0811f6b3 +0x9ae:  ret    $0x4
0811f6b6 +0x9b1:  push   %ebp
0811f6b7 +0x9b2:  mov    %esp,%ebp
0811f6b9 +0x9b4:  push   %ebx
0811f6ba +0x9b5:  sub    $0x14,%esp
0811f6bd +0x9b8:  mov    0x8(%ebp),%ebx
0811f6c0 +0x9bb:  mov    0xc(%ebp),%eax
0811f6c3 +0x9be:  add    $0x4,%eax
0811f6c6 +0x9c1:  mov    %eax,0x4(%esp)
0811f6ca +0x9c5:  mov    %ebx,(%esp)
0811f6cd +0x9c8:  call   0811fa36 <+0xd31>
0811f6d2 +0x9cd:  mov    %ebx,%eax
0811f6d4 +0x9cf:  add    $0x14,%esp
0811f6d7 +0x9d2:  pop    %ebx
0811f6d8 +0x9d3:  pop    %ebp
0811f6d9 +0x9d4:  ret    $0x4
0811f6dc +0x9d7:  push   %ebp
0811f6dd +0x9d8:  mov    %esp,%ebp
0811f6df +0x9da:  sub    $0x18,%esp
0811f6e2 +0x9dd:  mov    0x8(%ebp),%eax
0811f6e5 +0x9e0:  mov    %eax,(%esp)
0811f6e8 +0x9e3:  call   0811fa44 <+0xd3f>
0811f6ed +0x9e8:  mov    0x8(%ebp),%eax
0811f6f0 +0x9eb:  movl   $0x0,0x4(%eax)
0811f6f7 +0x9f2:  mov    0x8(%ebp),%eax
0811f6fa +0x9f5:  movl   $0x0,0x8(%eax)
0811f701 +0x9fc:  mov    0x8(%ebp),%eax
0811f704 +0x9ff:  movl   $0x0,0xc(%eax)
0811f70b +0xa06:  mov    0x8(%ebp),%eax
0811f70e +0xa09:  movl   $0x0,0x10(%eax)
0811f715 +0xa10:  mov    0x8(%ebp),%eax
0811f718 +0xa13:  movl   $0x0,0x14(%eax)
0811f71f +0xa1a:  mov    0x8(%ebp),%eax
0811f722 +0xa1d:  mov    %eax,(%esp)
0811f725 +0xa20:  call   0811fa58 <+0xd53>
0811f72a +0xa25:  leave
0811f72b +0xa26:  ret
0811f72c +0xa27:  push   %ebp
0811f72d +0xa28:  mov    %esp,%ebp
0811f72f +0xa2a:  pop    %ebp
0811f730 +0xa2b:  ret
0811f731 +0xa2c:  push   %ebp
0811f732 +0xa2d:  mov    %esp,%ebp
0811f734 +0xa2f:  mov    0x8(%ebp),%eax
0811f737 +0xa32:  mov    0xc(%eax),%eax
0811f73a +0xa35:  pop    %ebp
0811f73b +0xa36:  ret
0811f73c +0xa37:  push   %ebp
0811f73d +0xa38:  mov    %esp,%ebp
0811f73f +0xa3a:  mov    0x8(%ebp),%eax
0811f742 +0xa3d:  mov    0x8(%eax),%eax
0811f745 +0xa40:  pop    %ebp
0811f746 +0xa41:  ret
0811f747 +0xa42:  nop
0811f748 +0xa43:  push   %ebp
0811f749 +0xa44:  mov    %esp,%ebp
0811f74b +0xa46:  sub    $0x18,%esp
0811f74e +0xa49:  mov    0x8(%ebp),%eax
0811f751 +0xa4c:  mov    %eax,(%esp)
0811f754 +0xa4f:  call   0811fa8a <+0xd85>
0811f759 +0xa54:  mov    0xc(%ebp),%edx
0811f75c +0xa57:  mov    %edx,0x4(%esp)
0811f760 +0xa5b:  mov    %eax,(%esp)
0811f763 +0xa5e:  call   0811fa98 <+0xd93>
0811f768 +0xa63:  mov    0xc(%ebp),%eax
0811f76b +0xa66:  mov    %eax,0x4(%esp)
0811f76f +0xa6a:  mov    0x8(%ebp),%eax
0811f772 +0xa6d:  mov    %eax,(%esp)
0811f775 +0xa70:  call   0811faac <+0xda7>
0811f77a +0xa75:  leave
0811f77b +0xa76:  ret
0811f77c +0xa77:  push   %ebp
0811f77d +0xa78:  mov    %esp,%ebp
0811f77f +0xa7a:  sub    $0x18,%esp
0811f782 +0xa7d:  mov    0x8(%ebp),%eax
0811f785 +0xa80:  mov    %eax,(%esp)
0811f788 +0xa83:  call   0811face <+0xdc9>
0811f78d +0xa88:  mov    0x8(%ebp),%eax
0811f790 +0xa8b:  movl   $0x0,0x4(%eax)
0811f797 +0xa92:  mov    0x8(%ebp),%eax
0811f79a +0xa95:  movl   $0x0,0x8(%eax)
0811f7a1 +0xa9c:  mov    0x8(%ebp),%eax
0811f7a4 +0xa9f:  movl   $0x0,0xc(%eax)
0811f7ab +0xaa6:  mov    0x8(%ebp),%eax
0811f7ae +0xaa9:  movl   $0x0,0x10(%eax)
0811f7b5 +0xab0:  mov    0x8(%ebp),%eax
0811f7b8 +0xab3:  movl   $0x0,0x14(%eax)
0811f7bf +0xaba:  mov    0x8(%ebp),%eax
0811f7c2 +0xabd:  mov    %eax,(%esp)
0811f7c5 +0xac0:  call   0811fae2 <+0xddd>
0811f7ca +0xac5:  leave
0811f7cb +0xac6:  ret
0811f7cc +0xac7:  push   %ebp
0811f7cd +0xac8:  mov    %esp,%ebp
0811f7cf +0xaca:  pop    %ebp
0811f7d0 +0xacb:  ret
0811f7d1 +0xacc:  push   %ebp
0811f7d2 +0xacd:  mov    %esp,%ebp
0811f7d4 +0xacf:  mov    0x8(%ebp),%eax
0811f7d7 +0xad2:  mov    0xc(%eax),%eax
0811f7da +0xad5:  pop    %ebp
0811f7db +0xad6:  ret
0811f7dc +0xad7:  push   %ebp
0811f7dd +0xad8:  mov    %esp,%ebp
0811f7df +0xada:  mov    0x8(%ebp),%eax
0811f7e2 +0xadd:  mov    0x8(%eax),%eax
0811f7e5 +0xae0:  pop    %ebp
0811f7e6 +0xae1:  ret
0811f7e7 +0xae2:  nop
0811f7e8 +0xae3:  push   %ebp
0811f7e9 +0xae4:  mov    %esp,%ebp
0811f7eb +0xae6:  sub    $0x18,%esp
0811f7ee +0xae9:  mov    0x8(%ebp),%eax
0811f7f1 +0xaec:  mov    %eax,(%esp)
0811f7f4 +0xaef:  call   0811fb14 <+0xe0f>
0811f7f9 +0xaf4:  mov    0xc(%ebp),%edx
0811f7fc +0xaf7:  mov    %edx,0x4(%esp)
0811f800 +0xafb:  mov    %eax,(%esp)
0811f803 +0xafe:  call   0811fb22 <+0xe1d>
0811f808 +0xb03:  mov    0xc(%ebp),%eax
0811f80b +0xb06:  mov    %eax,0x4(%esp)
0811f80f +0xb0a:  mov    0x8(%ebp),%eax
0811f812 +0xb0d:  mov    %eax,(%esp)
0811f815 +0xb10:  call   0811fb36 <+0xe31>
0811f81a +0xb15:  leave
0811f81b +0xb16:  ret
0811f81c +0xb17:  push   %ebp
0811f81d +0xb18:  mov    %esp,%ebp
0811f81f +0xb1a:  sub    $0x18,%esp
0811f822 +0xb1d:  mov    0x8(%ebp),%eax
0811f825 +0xb20:  mov    %eax,(%esp)
0811f828 +0xb23:  call   0811fb58 <+0xe53>
0811f82d +0xb28:  mov    0x8(%ebp),%eax
0811f830 +0xb2b:  movl   $0x0,0x4(%eax)
0811f837 +0xb32:  mov    0x8(%ebp),%eax
0811f83a +0xb35:  movl   $0x0,0x8(%eax)
0811f841 +0xb3c:  mov    0x8(%ebp),%eax
0811f844 +0xb3f:  movl   $0x0,0xc(%eax)
0811f84b +0xb46:  mov    0x8(%ebp),%eax
0811f84e +0xb49:  movl   $0x0,0x10(%eax)
0811f855 +0xb50:  mov    0x8(%ebp),%eax
0811f858 +0xb53:  movl   $0x0,0x14(%eax)
0811f85f +0xb5a:  mov    0x8(%ebp),%eax
0811f862 +0xb5d:  mov    %eax,(%esp)
0811f865 +0xb60:  call   0811fb6c <+0xe67>
0811f86a +0xb65:  leave
0811f86b +0xb66:  ret
0811f86c +0xb67:  push   %ebp
0811f86d +0xb68:  mov    %esp,%ebp
0811f86f +0xb6a:  pop    %ebp
0811f870 +0xb6b:  ret
0811f871 +0xb6c:  push   %ebp
0811f872 +0xb6d:  mov    %esp,%ebp
0811f874 +0xb6f:  mov    0x8(%ebp),%eax
0811f877 +0xb72:  mov    0xc(%eax),%eax
0811f87a +0xb75:  pop    %ebp
0811f87b +0xb76:  ret
0811f87c +0xb77:  push   %ebp
0811f87d +0xb78:  mov    %esp,%ebp
0811f87f +0xb7a:  mov    0x8(%ebp),%eax
0811f882 +0xb7d:  mov    0x8(%eax),%eax
0811f885 +0xb80:  pop    %ebp
0811f886 +0xb81:  ret
0811f887 +0xb82:  nop
0811f888 +0xb83:  push   %ebp
0811f889 +0xb84:  mov    %esp,%ebp
0811f88b +0xb86:  sub    $0x18,%esp
0811f88e +0xb89:  mov    0x8(%ebp),%eax
0811f891 +0xb8c:  mov    %eax,(%esp)
0811f894 +0xb8f:  call   0811fb9e <+0xe99>
0811f899 +0xb94:  mov    0xc(%ebp),%edx
0811f89c +0xb97:  mov    %edx,0x4(%esp)
0811f8a0 +0xb9b:  mov    %eax,(%esp)
0811f8a3 +0xb9e:  call   0811fbac <+0xea7>
0811f8a8 +0xba3:  mov    0xc(%ebp),%eax
0811f8ab +0xba6:  mov    %eax,0x4(%esp)
0811f8af +0xbaa:  mov    0x8(%ebp),%eax
0811f8b2 +0xbad:  mov    %eax,(%esp)
0811f8b5 +0xbb0:  call   0811fbc0 <+0xebb>
0811f8ba +0xbb5:  leave
0811f8bb +0xbb6:  ret
0811f8bc +0xbb7:  push   %ebp
0811f8bd +0xbb8:  mov    %esp,%ebp
0811f8bf +0xbba:  mov    0x8(%ebp),%eax
0811f8c2 +0xbbd:  mov    0x8(%eax),%eax
0811f8c5 +0xbc0:  pop    %ebp
0811f8c6 +0xbc1:  ret
0811f8c7 +0xbc2:  nop
0811f8c8 +0xbc3:  push   %ebp
0811f8c9 +0xbc4:  mov    %esp,%ebp
0811f8cb +0xbc6:  mov    0x8(%ebp),%eax
0811f8ce +0xbc9:  add    $0x4,%eax
0811f8d1 +0xbcc:  pop    %ebp
0811f8d2 +0xbcd:  ret
0811f8d3 +0xbce:  nop
0811f8d4 +0xbcf:  push   %ebp
0811f8d5 +0xbd0:  mov    %esp,%ebp
0811f8d7 +0xbd2:  push   %ebx
0811f8d8 +0xbd3:  sub    $0x14,%esp
0811f8db +0xbd6:  mov    0x8(%ebp),%ebx
0811f8de +0xbd9:  jmp    0811f92c <+0xc27>
0811f8e0 +0xbdb:  mov    0x10(%ebp),%eax
0811f8e3 +0xbde:  mov    %eax,(%esp)
0811f8e6 +0xbe1:  call   0811fbe2 <+0xedd>
0811f8eb +0xbe6:  mov    0xc(%ebp),%edx
0811f8ee +0xbe9:  mov    0x18(%ebp),%ecx
0811f8f1 +0xbec:  mov    %ecx,0x8(%esp)
0811f8f5 +0xbf0:  mov    %eax,0x4(%esp)
0811f8f9 +0xbf4:  mov    %edx,(%esp)
0811f8fc +0xbf7:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0811f901 +0xbfc:  xor    $0x1,%eax
0811f904 +0xbff:  test   %al,%al
0811f906 +0xc01:  je     0811f91e <+0xc19>
0811f908 +0xc03:  mov    0x10(%ebp),%eax
0811f90b +0xc06:  mov    %eax,0x14(%ebp)
0811f90e +0xc09:  mov    0x10(%ebp),%eax
0811f911 +0xc0c:  mov    %eax,(%esp)
0811f914 +0xc0f:  call   0811fc04 <+0xeff>
0811f919 +0xc14:  mov    %eax,0x10(%ebp)
0811f91c +0xc17:  jmp    0811f92c <+0xc27>
0811f91e +0xc19:  mov    0x10(%ebp),%eax
0811f921 +0xc1c:  mov    %eax,(%esp)
0811f924 +0xc1f:  call   0811fc0f <+0xf0a>
0811f929 +0xc24:  mov    %eax,0x10(%ebp)
0811f92c +0xc27:  cmpl   $0x0,0x10(%ebp)
0811f930 +0xc2b:  setne  %al
0811f933 +0xc2e:  test   %al,%al
0811f935 +0xc30:  jne    0811f8e0 <+0xbdb>
0811f937 +0xc32:  mov    0x14(%ebp),%eax
0811f93a +0xc35:  mov    %eax,0x4(%esp)
0811f93e +0xc39:  mov    %ebx,(%esp)
0811f941 +0xc3c:  call   0811f972 <+0xc6d>
0811f946 +0xc41:  mov    %ebx,%eax
0811f948 +0xc43:  add    $0x14,%esp
0811f94b +0xc46:  pop    %ebx
0811f94c +0xc47:  pop    %ebp
0811f94d +0xc48:  ret    $0x4
0811f950 +0xc4b:  push   %ebp
0811f951 +0xc4c:  mov    %esp,%ebp
0811f953 +0xc4e:  sub    $0x28,%esp
0811f956 +0xc51:  mov    0x8(%ebp),%eax
0811f959 +0xc54:  mov    %eax,(%esp)
0811f95c +0xc57:  call   0811fc1a <+0xf15>
0811f961 +0xc5c:  mov    %eax,0x4(%esp)
0811f965 +0xc60:  lea    -0x9(%ebp),%eax
0811f968 +0xc63:  mov    %eax,(%esp)
0811f96b +0xc66:  call   0811fc26 <+0xf21>
0811f970 +0xc6b:  leave
0811f971 +0xc6c:  ret
0811f972 +0xc6d:  push   %ebp
0811f973 +0xc6e:  mov    %esp,%ebp
0811f975 +0xc70:  mov    0xc(%ebp),%edx
0811f978 +0xc73:  mov    0x8(%ebp),%eax
0811f97b +0xc76:  mov    %edx,(%eax)
0811f97d +0xc78:  pop    %ebp
0811f97e +0xc79:  ret
0811f97f +0xc7a:  nop
0811f980 +0xc7b:  push   %ebp
0811f981 +0xc7c:  mov    %esp,%ebp
0811f983 +0xc7e:  mov    0x8(%ebp),%eax
0811f986 +0xc81:  mov    0x8(%eax),%eax
0811f989 +0xc84:  pop    %ebp
0811f98a +0xc85:  ret
0811f98b +0xc86:  nop
0811f98c +0xc87:  push   %ebp
0811f98d +0xc88:  mov    %esp,%ebp
0811f98f +0xc8a:  mov    0x8(%ebp),%eax
0811f992 +0xc8d:  add    $0x4,%eax
0811f995 +0xc90:  pop    %ebp
0811f996 +0xc91:  ret
0811f997 +0xc92:  nop
0811f998 +0xc93:  push   %ebp
0811f999 +0xc94:  mov    %esp,%ebp
0811f99b +0xc96:  push   %ebx
0811f99c +0xc97:  sub    $0x14,%esp
0811f99f +0xc9a:  mov    0x8(%ebp),%ebx
0811f9a2 +0xc9d:  jmp    0811f9f0 <+0xceb>
0811f9a4 +0xc9f:  mov    0x10(%ebp),%eax
0811f9a7 +0xca2:  mov    %eax,(%esp)
0811f9aa +0xca5:  call   0811fc2e <+0xf29>
0811f9af +0xcaa:  mov    0xc(%ebp),%edx
0811f9b2 +0xcad:  mov    0x18(%ebp),%ecx
0811f9b5 +0xcb0:  mov    %ecx,0x8(%esp)
0811f9b9 +0xcb4:  mov    %eax,0x4(%esp)
0811f9bd +0xcb8:  mov    %edx,(%esp)
0811f9c0 +0xcbb:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
0811f9c5 +0xcc0:  xor    $0x1,%eax
0811f9c8 +0xcc3:  test   %al,%al
0811f9ca +0xcc5:  je     0811f9e2 <+0xcdd>
0811f9cc +0xcc7:  mov    0x10(%ebp),%eax
0811f9cf +0xcca:  mov    %eax,0x14(%ebp)
0811f9d2 +0xccd:  mov    0x10(%ebp),%eax
0811f9d5 +0xcd0:  mov    %eax,(%esp)
0811f9d8 +0xcd3:  call   0811fc50 <+0xf4b>
0811f9dd +0xcd8:  mov    %eax,0x10(%ebp)
0811f9e0 +0xcdb:  jmp    0811f9f0 <+0xceb>
0811f9e2 +0xcdd:  mov    0x10(%ebp),%eax
0811f9e5 +0xce0:  mov    %eax,(%esp)
0811f9e8 +0xce3:  call   0811fc5b <+0xf56>
0811f9ed +0xce8:  mov    %eax,0x10(%ebp)
0811f9f0 +0xceb:  cmpl   $0x0,0x10(%ebp)
0811f9f4 +0xcef:  setne  %al
0811f9f7 +0xcf2:  test   %al,%al
0811f9f9 +0xcf4:  jne    0811f9a4 <+0xc9f>
0811f9fb +0xcf6:  mov    0x14(%ebp),%eax
0811f9fe +0xcf9:  mov    %eax,0x4(%esp)
0811fa02 +0xcfd:  mov    %ebx,(%esp)
0811fa05 +0xd00:  call   0811fa36 <+0xd31>
0811fa0a +0xd05:  mov    %ebx,%eax
0811fa0c +0xd07:  add    $0x14,%esp
0811fa0f +0xd0a:  pop    %ebx
0811fa10 +0xd0b:  pop    %ebp
0811fa11 +0xd0c:  ret    $0x4
0811fa14 +0xd0f:  push   %ebp
0811fa15 +0xd10:  mov    %esp,%ebp
0811fa17 +0xd12:  sub    $0x28,%esp
0811fa1a +0xd15:  mov    0x8(%ebp),%eax
0811fa1d +0xd18:  mov    %eax,(%esp)
0811fa20 +0xd1b:  call   0811fc66 <+0xf61>
0811fa25 +0xd20:  mov    %eax,0x4(%esp)
0811fa29 +0xd24:  lea    -0x9(%ebp),%eax
0811fa2c +0xd27:  mov    %eax,(%esp)
0811fa2f +0xd2a:  call   0811fc72 <+0xf6d>
0811fa34 +0xd2f:  leave
0811fa35 +0xd30:  ret
0811fa36 +0xd31:  push   %ebp
0811fa37 +0xd32:  mov    %esp,%ebp
0811fa39 +0xd34:  mov    0xc(%ebp),%edx
0811fa3c +0xd37:  mov    0x8(%ebp),%eax
0811fa3f +0xd3a:  mov    %edx,(%eax)
0811fa41 +0xd3c:  pop    %ebp
0811fa42 +0xd3d:  ret
0811fa43 +0xd3e:  nop
0811fa44 +0xd3f:  push   %ebp
0811fa45 +0xd40:  mov    %esp,%ebp
0811fa47 +0xd42:  sub    $0x18,%esp
0811fa4a +0xd45:  mov    0x8(%ebp),%eax
0811fa4d +0xd48:  mov    %eax,(%esp)
0811fa50 +0xd4b:  call   0811fc7a <+0xf75>
0811fa55 +0xd50:  leave
0811fa56 +0xd51:  ret
0811fa57 +0xd52:  nop
0811fa58 +0xd53:  push   %ebp
0811fa59 +0xd54:  mov    %esp,%ebp
0811fa5b +0xd56:  mov    0x8(%ebp),%eax
0811fa5e +0xd59:  movl   $0x0,0x4(%eax)
0811fa65 +0xd60:  mov    0x8(%ebp),%eax
0811fa68 +0xd63:  movl   $0x0,0x8(%eax)
0811fa6f +0xd6a:  mov    0x8(%ebp),%eax
0811fa72 +0xd6d:  lea    0x4(%eax),%edx
0811fa75 +0xd70:  mov    0x8(%ebp),%eax
0811fa78 +0xd73:  mov    %edx,0xc(%eax)
0811fa7b +0xd76:  mov    0x8(%ebp),%eax
0811fa7e +0xd79:  lea    0x4(%eax),%edx
0811fa81 +0xd7c:  mov    0x8(%ebp),%eax
0811fa84 +0xd7f:  mov    %edx,0x10(%eax)
0811fa87 +0xd82:  pop    %ebp
0811fa88 +0xd83:  ret
0811fa89 +0xd84:  nop
0811fa8a +0xd85:  push   %ebp
0811fa8b +0xd86:  mov    %esp,%ebp
0811fa8d +0xd88:  mov    0x8(%ebp),%eax
0811fa90 +0xd8b:  pop    %ebp
0811fa91 +0xd8c:  ret
0811fa92 +0xd8d:  push   %ebp
0811fa93 +0xd8e:  mov    %esp,%ebp
0811fa95 +0xd90:  pop    %ebp
0811fa96 +0xd91:  ret
0811fa97 +0xd92:  nop
0811fa98 +0xd93:  push   %ebp
0811fa99 +0xd94:  mov    %esp,%ebp
0811fa9b +0xd96:  sub    $0x18,%esp
0811fa9e +0xd99:  mov    0xc(%ebp),%eax
0811faa1 +0xd9c:  mov    %eax,(%esp)
0811faa4 +0xd9f:  call   0811fa92 <+0xd8d>
0811faa9 +0xda4:  leave
0811faaa +0xda5:  ret
0811faab +0xda6:  nop
0811faac +0xda7:  push   %ebp
0811faad +0xda8:  mov    %esp,%ebp
0811faaf +0xdaa:  sub    $0x18,%esp
0811fab2 +0xdad:  mov    0x8(%ebp),%eax
0811fab5 +0xdb0:  movl   $0x1,0x8(%esp)
0811fabd +0xdb8:  mov    0xc(%ebp),%edx
0811fac0 +0xdbb:  mov    %edx,0x4(%esp)
0811fac4 +0xdbf:  mov    %eax,(%esp)
0811fac7 +0xdc2:  call   0811fc80 <+0xf7b>
0811facc +0xdc7:  leave
0811facd +0xdc8:  ret
0811face +0xdc9:  push   %ebp
0811facf +0xdca:  mov    %esp,%ebp
0811fad1 +0xdcc:  sub    $0x18,%esp
0811fad4 +0xdcf:  mov    0x8(%ebp),%eax
0811fad7 +0xdd2:  mov    %eax,(%esp)
0811fada +0xdd5:  call   0811fc94 <+0xf8f>
0811fadf +0xdda:  leave
0811fae0 +0xddb:  ret
0811fae1 +0xddc:  nop
0811fae2 +0xddd:  push   %ebp
0811fae3 +0xdde:  mov    %esp,%ebp
0811fae5 +0xde0:  mov    0x8(%ebp),%eax
0811fae8 +0xde3:  movl   $0x0,0x4(%eax)
0811faef +0xdea:  mov    0x8(%ebp),%eax
0811faf2 +0xded:  movl   $0x0,0x8(%eax)
0811faf9 +0xdf4:  mov    0x8(%ebp),%eax
0811fafc +0xdf7:  lea    0x4(%eax),%edx
0811faff +0xdfa:  mov    0x8(%ebp),%eax
0811fb02 +0xdfd:  mov    %edx,0xc(%eax)
0811fb05 +0xe00:  mov    0x8(%ebp),%eax
0811fb08 +0xe03:  lea    0x4(%eax),%edx
0811fb0b +0xe06:  mov    0x8(%ebp),%eax
0811fb0e +0xe09:  mov    %edx,0x10(%eax)
0811fb11 +0xe0c:  pop    %ebp
0811fb12 +0xe0d:  ret
0811fb13 +0xe0e:  nop
0811fb14 +0xe0f:  push   %ebp
0811fb15 +0xe10:  mov    %esp,%ebp
0811fb17 +0xe12:  mov    0x8(%ebp),%eax
0811fb1a +0xe15:  pop    %ebp
0811fb1b +0xe16:  ret
0811fb1c +0xe17:  push   %ebp
0811fb1d +0xe18:  mov    %esp,%ebp
0811fb1f +0xe1a:  pop    %ebp
0811fb20 +0xe1b:  ret
0811fb21 +0xe1c:  nop
0811fb22 +0xe1d:  push   %ebp
0811fb23 +0xe1e:  mov    %esp,%ebp
0811fb25 +0xe20:  sub    $0x18,%esp
0811fb28 +0xe23:  mov    0xc(%ebp),%eax
0811fb2b +0xe26:  mov    %eax,(%esp)
0811fb2e +0xe29:  call   0811fb1c <+0xe17>
0811fb33 +0xe2e:  leave
0811fb34 +0xe2f:  ret
0811fb35 +0xe30:  nop
0811fb36 +0xe31:  push   %ebp
0811fb37 +0xe32:  mov    %esp,%ebp
0811fb39 +0xe34:  sub    $0x18,%esp
0811fb3c +0xe37:  mov    0x8(%ebp),%eax
0811fb3f +0xe3a:  movl   $0x1,0x8(%esp)
0811fb47 +0xe42:  mov    0xc(%ebp),%edx
0811fb4a +0xe45:  mov    %edx,0x4(%esp)
0811fb4e +0xe49:  mov    %eax,(%esp)
0811fb51 +0xe4c:  call   0811fc9a <+0xf95>
0811fb56 +0xe51:  leave
0811fb57 +0xe52:  ret
0811fb58 +0xe53:  push   %ebp
0811fb59 +0xe54:  mov    %esp,%ebp
0811fb5b +0xe56:  sub    $0x18,%esp
0811fb5e +0xe59:  mov    0x8(%ebp),%eax
0811fb61 +0xe5c:  mov    %eax,(%esp)
0811fb64 +0xe5f:  call   0811fcae <+0xfa9>
0811fb69 +0xe64:  leave
0811fb6a +0xe65:  ret
0811fb6b +0xe66:  nop
0811fb6c +0xe67:  push   %ebp
0811fb6d +0xe68:  mov    %esp,%ebp
0811fb6f +0xe6a:  mov    0x8(%ebp),%eax
0811fb72 +0xe6d:  movl   $0x0,0x4(%eax)
0811fb79 +0xe74:  mov    0x8(%ebp),%eax
0811fb7c +0xe77:  movl   $0x0,0x8(%eax)
0811fb83 +0xe7e:  mov    0x8(%ebp),%eax
0811fb86 +0xe81:  lea    0x4(%eax),%edx
0811fb89 +0xe84:  mov    0x8(%ebp),%eax
0811fb8c +0xe87:  mov    %edx,0xc(%eax)
0811fb8f +0xe8a:  mov    0x8(%ebp),%eax
0811fb92 +0xe8d:  lea    0x4(%eax),%edx
0811fb95 +0xe90:  mov    0x8(%ebp),%eax
0811fb98 +0xe93:  mov    %edx,0x10(%eax)
0811fb9b +0xe96:  pop    %ebp
0811fb9c +0xe97:  ret
0811fb9d +0xe98:  nop
0811fb9e +0xe99:  push   %ebp
0811fb9f +0xe9a:  mov    %esp,%ebp
0811fba1 +0xe9c:  mov    0x8(%ebp),%eax
0811fba4 +0xe9f:  pop    %ebp
0811fba5 +0xea0:  ret
0811fba6 +0xea1:  push   %ebp
0811fba7 +0xea2:  mov    %esp,%ebp
0811fba9 +0xea4:  pop    %ebp
0811fbaa +0xea5:  ret
0811fbab +0xea6:  nop
0811fbac +0xea7:  push   %ebp
0811fbad +0xea8:  mov    %esp,%ebp
0811fbaf +0xeaa:  sub    $0x18,%esp
0811fbb2 +0xead:  mov    0xc(%ebp),%eax
0811fbb5 +0xeb0:  mov    %eax,(%esp)
0811fbb8 +0xeb3:  call   0811fba6 <+0xea1>
0811fbbd +0xeb8:  leave
0811fbbe +0xeb9:  ret
0811fbbf +0xeba:  nop
0811fbc0 +0xebb:  push   %ebp
0811fbc1 +0xebc:  mov    %esp,%ebp
0811fbc3 +0xebe:  sub    $0x18,%esp
0811fbc6 +0xec1:  mov    0x8(%ebp),%eax
0811fbc9 +0xec4:  movl   $0x1,0x8(%esp)
0811fbd1 +0xecc:  mov    0xc(%ebp),%edx
0811fbd4 +0xecf:  mov    %edx,0x4(%esp)
0811fbd8 +0xed3:  mov    %eax,(%esp)
0811fbdb +0xed6:  call   0811fcb4 <+0xfaf>
0811fbe0 +0xedb:  leave
0811fbe1 +0xedc:  ret
0811fbe2 +0xedd:  push   %ebp
0811fbe3 +0xede:  mov    %esp,%ebp
0811fbe5 +0xee0:  sub    $0x28,%esp
0811fbe8 +0xee3:  mov    0x8(%ebp),%eax
0811fbeb +0xee6:  mov    %eax,(%esp)
0811fbee +0xee9:  call   0811fcc7 <+0xfc2>
0811fbf3 +0xeee:  mov    %eax,0x4(%esp)
0811fbf7 +0xef2:  lea    -0x9(%ebp),%eax
0811fbfa +0xef5:  mov    %eax,(%esp)
0811fbfd +0xef8:  call   0811fc26 <+0xf21>
0811fc02 +0xefd:  leave
0811fc03 +0xefe:  ret
0811fc04 +0xeff:  push   %ebp
0811fc05 +0xf00:  mov    %esp,%ebp
0811fc07 +0xf02:  mov    0x8(%ebp),%eax
0811fc0a +0xf05:  mov    0x8(%eax),%eax
0811fc0d +0xf08:  pop    %ebp
0811fc0e +0xf09:  ret
0811fc0f +0xf0a:  push   %ebp
0811fc10 +0xf0b:  mov    %esp,%ebp
0811fc12 +0xf0d:  mov    0x8(%ebp),%eax
0811fc15 +0xf10:  mov    0xc(%eax),%eax
0811fc18 +0xf13:  pop    %ebp
0811fc19 +0xf14:  ret
0811fc1a +0xf15:  push   %ebp
0811fc1b +0xf16:  mov    %esp,%ebp
0811fc1d +0xf18:  mov    0x8(%ebp),%eax
0811fc20 +0xf1b:  add    $0x10,%eax
0811fc23 +0xf1e:  pop    %ebp
0811fc24 +0xf1f:  ret
0811fc25 +0xf20:  nop
0811fc26 +0xf21:  push   %ebp
0811fc27 +0xf22:  mov    %esp,%ebp
0811fc29 +0xf24:  mov    0xc(%ebp),%eax
0811fc2c +0xf27:  pop    %ebp
0811fc2d +0xf28:  ret
0811fc2e +0xf29:  push   %ebp
0811fc2f +0xf2a:  mov    %esp,%ebp
0811fc31 +0xf2c:  sub    $0x28,%esp
0811fc34 +0xf2f:  mov    0x8(%ebp),%eax
0811fc37 +0xf32:  mov    %eax,(%esp)
0811fc3a +0xf35:  call   0811fcd2 <+0xfcd>
0811fc3f +0xf3a:  mov    %eax,0x4(%esp)
0811fc43 +0xf3e:  lea    -0x9(%ebp),%eax
0811fc46 +0xf41:  mov    %eax,(%esp)
0811fc49 +0xf44:  call   0811fc72 <+0xf6d>
0811fc4e +0xf49:  leave
0811fc4f +0xf4a:  ret
0811fc50 +0xf4b:  push   %ebp
0811fc51 +0xf4c:  mov    %esp,%ebp
0811fc53 +0xf4e:  mov    0x8(%ebp),%eax
0811fc56 +0xf51:  mov    0x8(%eax),%eax
0811fc59 +0xf54:  pop    %ebp
0811fc5a +0xf55:  ret
0811fc5b +0xf56:  push   %ebp
0811fc5c +0xf57:  mov    %esp,%ebp
0811fc5e +0xf59:  mov    0x8(%ebp),%eax
0811fc61 +0xf5c:  mov    0xc(%eax),%eax
0811fc64 +0xf5f:  pop    %ebp
0811fc65 +0xf60:  ret
0811fc66 +0xf61:  push   %ebp
0811fc67 +0xf62:  mov    %esp,%ebp
0811fc69 +0xf64:  mov    0x8(%ebp),%eax
0811fc6c +0xf67:  add    $0x10,%eax
0811fc6f +0xf6a:  pop    %ebp
0811fc70 +0xf6b:  ret
0811fc71 +0xf6c:  nop
0811fc72 +0xf6d:  push   %ebp
0811fc73 +0xf6e:  mov    %esp,%ebp
0811fc75 +0xf70:  mov    0xc(%ebp),%eax
0811fc78 +0xf73:  pop    %ebp
0811fc79 +0xf74:  ret
0811fc7a +0xf75:  push   %ebp
0811fc7b +0xf76:  mov    %esp,%ebp
0811fc7d +0xf78:  pop    %ebp
0811fc7e +0xf79:  ret
0811fc7f +0xf7a:  nop
0811fc80 +0xf7b:  push   %ebp
0811fc81 +0xf7c:  mov    %esp,%ebp
0811fc83 +0xf7e:  sub    $0x18,%esp
0811fc86 +0xf81:  mov    0xc(%ebp),%eax
0811fc89 +0xf84:  mov    %eax,(%esp)
0811fc8c +0xf87:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811fc91 +0xf8c:  leave
0811fc92 +0xf8d:  ret
0811fc93 +0xf8e:  nop
0811fc94 +0xf8f:  push   %ebp
0811fc95 +0xf90:  mov    %esp,%ebp
0811fc97 +0xf92:  pop    %ebp
0811fc98 +0xf93:  ret
0811fc99 +0xf94:  nop
0811fc9a +0xf95:  push   %ebp
0811fc9b +0xf96:  mov    %esp,%ebp
0811fc9d +0xf98:  sub    $0x18,%esp
0811fca0 +0xf9b:  mov    0xc(%ebp),%eax
0811fca3 +0xf9e:  mov    %eax,(%esp)
0811fca6 +0xfa1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811fcab +0xfa6:  leave
0811fcac +0xfa7:  ret
0811fcad +0xfa8:  nop
0811fcae +0xfa9:  push   %ebp
0811fcaf +0xfaa:  mov    %esp,%ebp
0811fcb1 +0xfac:  pop    %ebp
0811fcb2 +0xfad:  ret
0811fcb3 +0xfae:  nop
0811fcb4 +0xfaf:  push   %ebp
0811fcb5 +0xfb0:  mov    %esp,%ebp
0811fcb7 +0xfb2:  sub    $0x18,%esp
0811fcba +0xfb5:  mov    0xc(%ebp),%eax
0811fcbd +0xfb8:  mov    %eax,(%esp)
0811fcc0 +0xfbb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811fcc5 +0xfc0:  leave
0811fcc6 +0xfc1:  ret
0811fcc7 +0xfc2:  push   %ebp
0811fcc8 +0xfc3:  mov    %esp,%ebp
0811fcca +0xfc5:  mov    0x8(%ebp),%eax
0811fccd +0xfc8:  add    $0x10,%eax
0811fcd0 +0xfcb:  pop    %ebp
0811fcd1 +0xfcc:  ret
0811fcd2 +0xfcd:  push   %ebp
0811fcd3 +0xfce:  mov    %esp,%ebp
0811fcd5 +0xfd0:  mov    0x8(%ebp),%eax
0811fcd8 +0xfd3:  add    $0x10,%eax
0811fcdb +0xfd6:  pop    %ebp
0811fcdc +0xfd7:  ret
0811fcdd +0xfd8:  nop
0811fcde +0xfd9:  nop
0811fcdf +0xfda:  nop
```

## 反编译 C

```c
// <global>::global @ 0x811ed05

/* WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate() */

void WongWork::CItemUpgrade_Separate::_GLOBAL__I_CItemUpgrade_Separate(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
