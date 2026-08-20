# CConditionEventManager

`_GLOBAL__I__ZN22CConditionEventManagerC2Ev`

`global constructors keyed to CConditionEventManager::CConditionEventManager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CConditionEventManager` | `0x08335b5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08335b5a  _GLOBAL__I__ZN22CConditionEventManagerC2Ev
#           global constructors keyed to CConditionEventManager::CConditionEventManager()
# range [0x08335b5a, 0x08336b4b]
08335b5a +0x000:  push   %ebp
08335b5b +0x001:  mov    %esp,%ebp
08335b5d +0x003:  sub    $0x18,%esp
08335b60 +0x006:  movl   $0xffff,0x4(%esp)
08335b68 +0x00e:  movl   $0x1,(%esp)
08335b6f +0x015:  call   08335b1a <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08335b74 +0x01a:  leave
08335b75 +0x01b:  ret
08335b76 +0x01c:  push   %ebp
08335b77 +0x01d:  mov    %esp,%ebp
08335b79 +0x01f:  mov    0x8(%ebp),%eax
08335b7c +0x022:  movzbl 0x1(%eax),%eax
08335b80 +0x026:  cmp    $0x5,%al
08335b82 +0x028:  je     08335b9a <+0x40>
08335b84 +0x02a:  mov    0x8(%ebp),%eax
08335b87 +0x02d:  movzbl 0x1(%eax),%eax
08335b8b +0x031:  cmp    $0x7,%al
08335b8d +0x033:  je     08335b9a <+0x40>
08335b8f +0x035:  mov    0x8(%ebp),%eax
08335b92 +0x038:  movzbl 0x1(%eax),%eax
08335b96 +0x03c:  cmp    $0x6,%al
08335b98 +0x03e:  jne    08335ba1 <+0x47>
08335b9a +0x040:  mov    $0x1,%eax
08335b9f +0x045:  jmp    08335ba6 <+0x4c>
08335ba1 +0x047:  mov    $0x0,%eax
08335ba6 +0x04c:  pop    %ebp
08335ba7 +0x04d:  ret
08335ba8 +0x04e:  push   %ebp
08335ba9 +0x04f:  mov    %esp,%ebp
08335bab +0x051:  mov    0x8(%ebp),%eax
08335bae +0x054:  mov    0x10(%eax),%eax
08335bb1 +0x057:  test   %eax,%eax
08335bb3 +0x059:  je     08335bc4 <+0x6a>
08335bb5 +0x05b:  mov    0x8(%ebp),%eax
08335bb8 +0x05e:  mov    0x10(%eax),%eax
08335bbb +0x061:  movzwl 0x1232(%eax),%eax
08335bc2 +0x068:  jmp    08335bc9 <+0x6f>
08335bc4 +0x06a:  mov    $0x0,%eax
08335bc9 +0x06f:  pop    %ebp
08335bca +0x070:  ret
08335bcb +0x071:  nop
08335bcc +0x072:  push   %ebp
08335bcd +0x073:  mov    %esp,%ebp
08335bcf +0x075:  mov    0x8(%ebp),%eax
08335bd2 +0x078:  mov    0x10(%eax),%eax
08335bd5 +0x07b:  test   %eax,%eax
08335bd7 +0x07d:  je     08335c12 <+0xb8>
08335bd9 +0x07f:  mov    0x8(%ebp),%eax
08335bdc +0x082:  mov    0x10(%eax),%eax
08335bdf +0x085:  movzwl 0x1232(%eax),%edx
08335be6 +0x08c:  add    $0x1,%edx
08335be9 +0x08f:  mov    %dx,0x1232(%eax)
08335bf0 +0x096:  mov    0x8(%ebp),%eax
08335bf3 +0x099:  mov    0x10(%eax),%eax
08335bf6 +0x09c:  movzwl 0x1232(%eax),%eax
08335bfd +0x0a3:  cmp    $0xff,%ax
08335c01 +0x0a7:  jle    08335c12 <+0xb8>
08335c03 +0x0a9:  mov    0x8(%ebp),%eax
08335c06 +0x0ac:  mov    0x10(%eax),%eax
08335c09 +0x0af:  movw   $0xff,0x1232(%eax)
08335c12 +0x0b8:  pop    %ebp
08335c13 +0x0b9:  ret
08335c14 +0x0ba:  push   %ebp
08335c15 +0x0bb:  mov    %esp,%ebp
08335c17 +0x0bd:  mov    0x8(%ebp),%eax
08335c1a +0x0c0:  mov    0x10(%eax),%eax
08335c1d +0x0c3:  test   %eax,%eax
08335c1f +0x0c5:  je     08335c30 <+0xd6>
08335c21 +0x0c7:  mov    0x8(%ebp),%eax
08335c24 +0x0ca:  mov    0x10(%eax),%eax
08335c27 +0x0cd:  movzwl 0x1234(%eax),%eax
08335c2e +0x0d4:  jmp    08335c35 <+0xdb>
08335c30 +0x0d6:  mov    $0x0,%eax
08335c35 +0x0db:  pop    %ebp
08335c36 +0x0dc:  ret
08335c37 +0x0dd:  nop
08335c38 +0x0de:  push   %ebp
08335c39 +0x0df:  mov    %esp,%ebp
08335c3b +0x0e1:  mov    0x8(%ebp),%eax
08335c3e +0x0e4:  mov    0x10(%eax),%eax
08335c41 +0x0e7:  test   %eax,%eax
08335c43 +0x0e9:  je     08335c7e <+0x124>
08335c45 +0x0eb:  mov    0x8(%ebp),%eax
08335c48 +0x0ee:  mov    0x10(%eax),%eax
08335c4b +0x0f1:  movzwl 0x1234(%eax),%edx
08335c52 +0x0f8:  add    $0x1,%edx
08335c55 +0x0fb:  mov    %dx,0x1234(%eax)
08335c5c +0x102:  mov    0x8(%ebp),%eax
08335c5f +0x105:  mov    0x10(%eax),%eax
08335c62 +0x108:  movzwl 0x1234(%eax),%eax
08335c69 +0x10f:  cmp    $0xff,%ax
08335c6d +0x113:  jle    08335c7e <+0x124>
08335c6f +0x115:  mov    0x8(%ebp),%eax
08335c72 +0x118:  mov    0x10(%eax),%eax
08335c75 +0x11b:  movw   $0xff,0x1234(%eax)
08335c7e +0x124:  pop    %ebp
08335c7f +0x125:  ret
08335c80 +0x126:  push   %ebp
08335c81 +0x127:  mov    %esp,%ebp
08335c83 +0x129:  mov    0x8(%ebp),%eax
08335c86 +0x12c:  mov    0x10(%eax),%eax
08335c89 +0x12f:  test   %eax,%eax
08335c8b +0x131:  je     08335c9c <+0x142>
08335c8d +0x133:  mov    0x8(%ebp),%eax
08335c90 +0x136:  mov    0x10(%eax),%eax
08335c93 +0x139:  movzwl 0x1236(%eax),%eax
08335c9a +0x140:  jmp    08335ca1 <+0x147>
08335c9c +0x142:  mov    $0x0,%eax
08335ca1 +0x147:  pop    %ebp
08335ca2 +0x148:  ret
08335ca3 +0x149:  nop
08335ca4 +0x14a:  push   %ebp
08335ca5 +0x14b:  mov    %esp,%ebp
08335ca7 +0x14d:  mov    0x8(%ebp),%eax
08335caa +0x150:  mov    0x10(%eax),%eax
08335cad +0x153:  test   %eax,%eax
08335caf +0x155:  je     08335cc0 <+0x166>
08335cb1 +0x157:  mov    0x8(%ebp),%eax
08335cb4 +0x15a:  mov    0x10(%eax),%eax
08335cb7 +0x15d:  movzbl 0x1238(%eax),%eax
08335cbe +0x164:  jmp    08335cc5 <+0x16b>
08335cc0 +0x166:  mov    $0x0,%eax
08335cc5 +0x16b:  pop    %ebp
08335cc6 +0x16c:  ret
08335cc7 +0x16d:  nop
08335cc8 +0x16e:  push   %ebp
08335cc9 +0x16f:  mov    %esp,%ebp
08335ccb +0x171:  sub    $0x18,%esp
08335cce +0x174:  mov    0x8(%ebp),%eax
08335cd1 +0x177:  mov    %eax,(%esp)
08335cd4 +0x17a:  call   08335f68 <+0x40e>
08335cd9 +0x17f:  leave
08335cda +0x180:  ret
08335cdb +0x181:  nop
08335cdc +0x182:  push   %ebp
08335cdd +0x183:  mov    %esp,%ebp
08335cdf +0x185:  push   %esi
08335ce0 +0x186:  push   %ebx
08335ce1 +0x187:  sub    $0x10,%esp
08335ce4 +0x18a:  mov    0x8(%ebp),%eax
08335ce7 +0x18d:  mov    %eax,(%esp)
08335cea +0x190:  call   08335fea <+0x490>
08335cef +0x195:  mov    0x8(%ebp),%edx
08335cf2 +0x198:  mov    0x4(%edx),%ecx
08335cf5 +0x19b:  mov    0x8(%ebp),%edx
08335cf8 +0x19e:  mov    (%edx),%edx
08335cfa +0x1a0:  mov    %eax,0x8(%esp)
08335cfe +0x1a4:  mov    %ecx,0x4(%esp)
08335d02 +0x1a8:  mov    %edx,(%esp)
08335d05 +0x1ab:  call   08335ff2 <+0x498>
08335d0a +0x1b0:  jmp    08335d27 <+0x1cd>
08335d0c +0x1b2:  mov    %edx,%ebx
08335d0e +0x1b4:  mov    %eax,%esi
08335d10 +0x1b6:  mov    0x8(%ebp),%eax
08335d13 +0x1b9:  mov    %eax,(%esp)
08335d16 +0x1bc:  call   08335f7c <+0x422>
08335d1b +0x1c1:  mov    %esi,%eax
08335d1d +0x1c3:  mov    %ebx,%edx
08335d1f +0x1c5:  mov    %eax,(%esp)
08335d22 +0x1c8:  call   08ae3750 <_Unwind_Resume>
08335d27 +0x1cd:  mov    0x8(%ebp),%eax
08335d2a +0x1d0:  mov    %eax,(%esp)
08335d2d +0x1d3:  call   08335f7c <+0x422>
08335d32 +0x1d8:  add    $0x10,%esp
08335d35 +0x1db:  pop    %ebx
08335d36 +0x1dc:  pop    %esi
08335d37 +0x1dd:  pop    %ebp
08335d38 +0x1de:  ret
08335d39 +0x1df:  nop
08335d3a +0x1e0:  push   %ebp
08335d3b +0x1e1:  mov    %esp,%ebp
08335d3d +0x1e3:  push   %ebx
08335d3e +0x1e4:  sub    $0x14,%esp
08335d41 +0x1e7:  mov    0x8(%ebp),%ebx
08335d44 +0x1ea:  mov    0xc(%ebp),%eax
08335d47 +0x1ed:  mov    %eax,0x4(%esp)
08335d4b +0x1f1:  mov    %ebx,(%esp)
08335d4e +0x1f4:  call   0833600c <+0x4b2>
08335d53 +0x1f9:  mov    %ebx,%eax
08335d55 +0x1fb:  add    $0x14,%esp
08335d58 +0x1fe:  pop    %ebx
08335d59 +0x1ff:  pop    %ebp
08335d5a +0x200:  ret    $0x4
08335d5d +0x203:  nop
08335d5e +0x204:  push   %ebp
08335d5f +0x205:  mov    %esp,%ebp
08335d61 +0x207:  push   %ebx
08335d62 +0x208:  sub    $0x14,%esp
08335d65 +0x20b:  mov    0x8(%ebp),%ebx
08335d68 +0x20e:  mov    0xc(%ebp),%eax
08335d6b +0x211:  add    $0x4,%eax
08335d6e +0x214:  mov    %eax,0x4(%esp)
08335d72 +0x218:  mov    %ebx,(%esp)
08335d75 +0x21b:  call   0833600c <+0x4b2>
08335d7a +0x220:  mov    %ebx,%eax
08335d7c +0x222:  add    $0x14,%esp
08335d7f +0x225:  pop    %ebx
08335d80 +0x226:  pop    %ebp
08335d81 +0x227:  ret    $0x4
08335d84 +0x22a:  push   %ebp
08335d85 +0x22b:  mov    %esp,%ebp
08335d87 +0x22d:  push   %ebx
08335d88 +0x22e:  sub    $0x14,%esp
08335d8b +0x231:  mov    0x8(%ebp),%eax
08335d8e +0x234:  mov    %eax,(%esp)
08335d91 +0x237:  call   0833601c <+0x4c2>
08335d96 +0x23c:  mov    (%eax),%ebx
08335d98 +0x23e:  mov    0xc(%ebp),%eax
08335d9b +0x241:  mov    %eax,(%esp)
08335d9e +0x244:  call   0833601c <+0x4c2>
08335da3 +0x249:  mov    (%eax),%eax
08335da5 +0x24b:  cmp    %eax,%ebx
08335da7 +0x24d:  setne  %al
08335daa +0x250:  add    $0x14,%esp
08335dad +0x253:  pop    %ebx
08335dae +0x254:  pop    %ebp
08335daf +0x255:  ret
08335db0 +0x256:  push   %ebp
08335db1 +0x257:  mov    %esp,%ebp
08335db3 +0x259:  mov    0x8(%ebp),%eax
08335db6 +0x25c:  mov    (%eax),%eax
08335db8 +0x25e:  lea    0xc(%eax),%edx
08335dbb +0x261:  mov    0x8(%ebp),%eax
08335dbe +0x264:  mov    %edx,(%eax)
08335dc0 +0x266:  mov    0x8(%ebp),%eax
08335dc3 +0x269:  pop    %ebp
08335dc4 +0x26a:  ret
08335dc5 +0x26b:  nop
08335dc6 +0x26c:  push   %ebp
08335dc7 +0x26d:  mov    %esp,%ebp
08335dc9 +0x26f:  mov    0x8(%ebp),%eax
08335dcc +0x272:  mov    (%eax),%eax
08335dce +0x274:  pop    %ebp
08335dcf +0x275:  ret
08335dd0 +0x276:  push   %ebp
08335dd1 +0x277:  mov    %esp,%ebp
08335dd3 +0x279:  sub    $0x18,%esp
08335dd6 +0x27c:  mov    0x8(%ebp),%eax
08335dd9 +0x27f:  mov    (%eax),%eax
08335ddb +0x281:  mov    %eax,0x4(%esp)
08335ddf +0x285:  mov    0x8(%ebp),%eax
08335de2 +0x288:  mov    %eax,(%esp)
08335de5 +0x28b:  call   08336024 <+0x4ca>
08335dea +0x290:  leave
08335deb +0x291:  ret
08335dec +0x292:  push   %ebp
08335ded +0x293:  mov    %esp,%ebp
08335def +0x295:  push   %ebx
08335df0 +0x296:  sub    $0x14,%esp
08335df3 +0x299:  mov    0x8(%ebp),%ebx
08335df6 +0x29c:  mov    0xc(%ebp),%eax
08335df9 +0x29f:  mov    0x10(%ebp),%edx
08335dfc +0x2a2:  mov    %edx,0x8(%esp)
08335e00 +0x2a6:  mov    %eax,0x4(%esp)
08335e04 +0x2aa:  mov    %ebx,(%esp)
08335e07 +0x2ad:  call   0833605a <+0x500>
08335e0c +0x2b2:  sub    $0x4,%esp
08335e0f +0x2b5:  mov    %ebx,%eax
08335e11 +0x2b7:  mov    -0x4(%ebp),%ebx
08335e14 +0x2ba:  leave
08335e15 +0x2bb:  ret    $0x4
08335e18 +0x2be:  push   %ebp
08335e19 +0x2bf:  mov    %esp,%ebp
08335e1b +0x2c1:  push   %ebx
08335e1c +0x2c2:  sub    $0x14,%esp
08335e1f +0x2c5:  mov    0x8(%ebp),%ebx
08335e22 +0x2c8:  mov    0xc(%ebp),%eax
08335e25 +0x2cb:  mov    0x10(%ebp),%edx
08335e28 +0x2ce:  mov    %edx,0x8(%esp)
08335e2c +0x2d2:  mov    %eax,0x4(%esp)
08335e30 +0x2d6:  mov    %ebx,(%esp)
08335e33 +0x2d9:  call   083360ac <+0x552>
08335e38 +0x2de:  sub    $0x4,%esp
08335e3b +0x2e1:  mov    %ebx,%eax
08335e3d +0x2e3:  mov    -0x4(%ebp),%ebx
08335e40 +0x2e6:  leave
08335e41 +0x2e7:  ret    $0x4
08335e44 +0x2ea:  push   %ebp
08335e45 +0x2eb:  mov    %esp,%ebp
08335e47 +0x2ed:  mov    0x8(%ebp),%eax
08335e4a +0x2f0:  mov    (%eax),%edx
08335e4c +0x2f2:  mov    0xc(%ebp),%eax
08335e4f +0x2f5:  mov    (%eax),%eax
08335e51 +0x2f7:  cmp    %eax,%edx
08335e53 +0x2f9:  setne  %al
08335e56 +0x2fc:  pop    %ebp
08335e57 +0x2fd:  ret
08335e58 +0x2fe:  push   %ebp
08335e59 +0x2ff:  mov    %esp,%ebp
08335e5b +0x301:  mov    0x8(%ebp),%eax
08335e5e +0x304:  mov    (%eax),%eax
08335e60 +0x306:  add    $0x10,%eax
08335e63 +0x309:  pop    %ebp
08335e64 +0x30a:  ret
08335e65 +0x30b:  nop
08335e66 +0x30c:  push   %ebp
08335e67 +0x30d:  mov    %esp,%ebp
08335e69 +0x30f:  sub    $0x28,%esp
08335e6c +0x312:  mov    0x8(%ebp),%eax
08335e6f +0x315:  mov    0x4(%eax),%edx
08335e72 +0x318:  mov    0x8(%ebp),%eax
08335e75 +0x31b:  mov    0x8(%eax),%eax
08335e78 +0x31e:  cmp    %eax,%edx
08335e7a +0x320:  je     08335ea9 <+0x34f>
08335e7c +0x322:  mov    0x8(%ebp),%eax
08335e7f +0x325:  mov    0x4(%eax),%edx
08335e82 +0x328:  mov    0x8(%ebp),%eax
08335e85 +0x32b:  mov    0xc(%ebp),%ecx
08335e88 +0x32e:  mov    %ecx,0x8(%esp)
08335e8c +0x332:  mov    %edx,0x4(%esp)
08335e90 +0x336:  mov    %eax,(%esp)
08335e93 +0x339:  call   083360fe <+0x5a4>
08335e98 +0x33e:  mov    0x8(%ebp),%eax
08335e9b +0x341:  mov    0x4(%eax),%eax
08335e9e +0x344:  lea    0xc(%eax),%edx
08335ea1 +0x347:  mov    0x8(%ebp),%eax
08335ea4 +0x34a:  mov    %edx,0x4(%eax)
08335ea7 +0x34d:  jmp    08335ed7 <+0x37d>
08335ea9 +0x34f:  lea    -0xc(%ebp),%eax
08335eac +0x352:  mov    0x8(%ebp),%edx
08335eaf +0x355:  mov    %edx,0x4(%esp)
08335eb3 +0x359:  mov    %eax,(%esp)
08335eb6 +0x35c:  call   08335d5e <+0x204>
08335ebb +0x361:  sub    $0x4,%esp
08335ebe +0x364:  mov    0xc(%ebp),%eax
08335ec1 +0x367:  mov    %eax,0x8(%esp)
08335ec5 +0x36b:  mov    -0xc(%ebp),%eax
08335ec8 +0x36e:  mov    %eax,0x4(%esp)
08335ecc +0x372:  mov    0x8(%ebp),%eax
08335ecf +0x375:  mov    %eax,(%esp)
08335ed2 +0x378:  call   08336134 <+0x5da>
08335ed7 +0x37d:  leave
08335ed8 +0x37e:  ret
08335ed9 +0x37f:  nop
08335eda +0x380:  push   %ebp
08335edb +0x381:  mov    %esp,%ebp
08335edd +0x383:  push   %ebx
08335ede +0x384:  sub    $0x14,%esp
08335ee1 +0x387:  mov    0x8(%ebp),%ebx
08335ee4 +0x38a:  mov    0xc(%ebp),%eax
08335ee7 +0x38d:  movl   $0x4,0x8(%esp)
08335eef +0x395:  mov    %eax,0x4(%esp)
08335ef3 +0x399:  mov    %ebx,(%esp)
08335ef6 +0x39c:  call   0807d880 <_init+0x178>
08335efb +0x3a1:  mov    0xc(%ebp),%eax
08335efe +0x3a4:  mov    (%eax),%eax
08335f00 +0x3a6:  mov    %eax,(%esp)
08335f03 +0x3a9:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08335f08 +0x3ae:  mov    0xc(%ebp),%edx
08335f0b +0x3b1:  mov    %eax,(%edx)
08335f0d +0x3b3:  mov    %ebx,%eax
08335f0f +0x3b5:  add    $0x14,%esp
08335f12 +0x3b8:  pop    %ebx
08335f13 +0x3b9:  pop    %ebp
08335f14 +0x3ba:  ret    $0x4
08335f17 +0x3bd:  nop
08335f18 +0x3be:  push   %ebp
08335f19 +0x3bf:  mov    %esp,%ebp
08335f1b +0x3c1:  mov    0x8(%ebp),%eax
08335f1e +0x3c4:  mov    0x4(%eax),%eax
08335f21 +0x3c7:  mov    %eax,%edx
08335f23 +0x3c9:  mov    0x8(%ebp),%eax
08335f26 +0x3cc:  mov    (%eax),%eax
08335f28 +0x3ce:  mov    %edx,%ecx
08335f2a +0x3d0:  sub    %eax,%ecx
08335f2c +0x3d2:  mov    %ecx,%eax
08335f2e +0x3d4:  sar    $0x2,%eax
08335f31 +0x3d7:  imul   $0xaaaaaaab,%eax,%eax
08335f37 +0x3dd:  pop    %ebp
08335f38 +0x3de:  ret
08335f39 +0x3df:  nop
08335f3a +0x3e0:  push   %ebp
08335f3b +0x3e1:  mov    %esp,%ebp
08335f3d +0x3e3:  mov    0x8(%ebp),%eax
08335f40 +0x3e6:  mov    (%eax),%ecx
08335f42 +0x3e8:  mov    0xc(%ebp),%edx
08335f45 +0x3eb:  mov    %edx,%eax
08335f47 +0x3ed:  add    %eax,%eax
08335f49 +0x3ef:  add    %edx,%eax
08335f4b +0x3f1:  shl    $0x2,%eax
08335f4e +0x3f4:  lea    (%ecx,%eax,1),%eax
08335f51 +0x3f7:  pop    %ebp
08335f52 +0x3f8:  ret
08335f53 +0x3f9:  nop
08335f54 +0x3fa:  push   %ebp
08335f55 +0x3fb:  mov    %esp,%ebp
08335f57 +0x3fd:  sub    $0x18,%esp
08335f5a +0x400:  mov    0x8(%ebp),%eax
08335f5d +0x403:  mov    %eax,(%esp)
08335f60 +0x406:  call   08336460 <+0x906>
08335f65 +0x40b:  leave
08335f66 +0x40c:  ret
08335f67 +0x40d:  nop
08335f68 +0x40e:  push   %ebp
08335f69 +0x40f:  mov    %esp,%ebp
08335f6b +0x411:  sub    $0x18,%esp
08335f6e +0x414:  mov    0x8(%ebp),%eax
08335f71 +0x417:  mov    %eax,(%esp)
08335f74 +0x41a:  call   08336430 <+0x8d6>
08335f79 +0x41f:  leave
08335f7a +0x420:  ret
08335f7b +0x421:  nop
08335f7c +0x422:  push   %ebp
08335f7d +0x423:  mov    %esp,%ebp
08335f7f +0x425:  push   %esi
08335f80 +0x426:  push   %ebx
08335f81 +0x427:  sub    $0x10,%esp
08335f84 +0x42a:  mov    0x8(%ebp),%eax
08335f87 +0x42d:  mov    0x8(%eax),%eax
08335f8a +0x430:  mov    %eax,%edx
08335f8c +0x432:  mov    0x8(%ebp),%eax
08335f8f +0x435:  mov    (%eax),%eax
08335f91 +0x437:  mov    %edx,%ecx
08335f93 +0x439:  sub    %eax,%ecx
08335f95 +0x43b:  mov    %ecx,%eax
08335f97 +0x43d:  sar    $0x2,%eax
08335f9a +0x440:  imul   $0xaaaaaaab,%eax,%eax
08335fa0 +0x446:  mov    %eax,%edx
08335fa2 +0x448:  mov    0x8(%ebp),%eax
08335fa5 +0x44b:  mov    (%eax),%eax
08335fa7 +0x44d:  mov    %edx,0x8(%esp)
08335fab +0x451:  mov    %eax,0x4(%esp)
08335faf +0x455:  mov    0x8(%ebp),%eax
08335fb2 +0x458:  mov    %eax,(%esp)
08335fb5 +0x45b:  call   08336474 <+0x91a>
08335fba +0x460:  jmp    08335fd7 <+0x47d>
08335fbc +0x462:  mov    %edx,%ebx
08335fbe +0x464:  mov    %eax,%esi
08335fc0 +0x466:  mov    0x8(%ebp),%eax
08335fc3 +0x469:  mov    %eax,(%esp)
08335fc6 +0x46c:  call   08335f54 <+0x3fa>
08335fcb +0x471:  mov    %esi,%eax
08335fcd +0x473:  mov    %ebx,%edx
08335fcf +0x475:  mov    %eax,(%esp)
08335fd2 +0x478:  call   08ae3750 <_Unwind_Resume>
08335fd7 +0x47d:  mov    0x8(%ebp),%eax
08335fda +0x480:  mov    %eax,(%esp)
08335fdd +0x483:  call   08335f54 <+0x3fa>
08335fe2 +0x488:  add    $0x10,%esp
08335fe5 +0x48b:  pop    %ebx
08335fe6 +0x48c:  pop    %esi
08335fe7 +0x48d:  pop    %ebp
08335fe8 +0x48e:  ret
08335fe9 +0x48f:  nop
08335fea +0x490:  push   %ebp
08335feb +0x491:  mov    %esp,%ebp
08335fed +0x493:  mov    0x8(%ebp),%eax
08335ff0 +0x496:  pop    %ebp
08335ff1 +0x497:  ret
08335ff2 +0x498:  push   %ebp
08335ff3 +0x499:  mov    %esp,%ebp
08335ff5 +0x49b:  sub    $0x18,%esp
08335ff8 +0x49e:  mov    0xc(%ebp),%eax
08335ffb +0x4a1:  mov    %eax,0x4(%esp)
08335fff +0x4a5:  mov    0x8(%ebp),%eax
08336002 +0x4a8:  mov    %eax,(%esp)
08336005 +0x4ab:  call   0833649b <+0x941>
0833600a +0x4b0:  leave
0833600b +0x4b1:  ret
0833600c +0x4b2:  push   %ebp
0833600d +0x4b3:  mov    %esp,%ebp
0833600f +0x4b5:  mov    0xc(%ebp),%eax
08336012 +0x4b8:  mov    (%eax),%edx
08336014 +0x4ba:  mov    0x8(%ebp),%eax
08336017 +0x4bd:  mov    %edx,(%eax)
08336019 +0x4bf:  pop    %ebp
0833601a +0x4c0:  ret
0833601b +0x4c1:  nop
0833601c +0x4c2:  push   %ebp
0833601d +0x4c3:  mov    %esp,%ebp
0833601f +0x4c5:  mov    0x8(%ebp),%eax
08336022 +0x4c8:  pop    %ebp
08336023 +0x4c9:  ret
08336024 +0x4ca:  push   %ebp
08336025 +0x4cb:  mov    %esp,%ebp
08336027 +0x4cd:  sub    $0x18,%esp
0833602a +0x4d0:  mov    0x8(%ebp),%eax
0833602d +0x4d3:  mov    %eax,(%esp)
08336030 +0x4d6:  call   08335fea <+0x490>
08336035 +0x4db:  mov    0x8(%ebp),%edx
08336038 +0x4de:  mov    0x4(%edx),%edx
0833603b +0x4e1:  mov    %eax,0x8(%esp)
0833603f +0x4e5:  mov    %edx,0x4(%esp)
08336043 +0x4e9:  mov    0xc(%ebp),%eax
08336046 +0x4ec:  mov    %eax,(%esp)
08336049 +0x4ef:  call   08335ff2 <+0x498>
0833604e +0x4f4:  mov    0x8(%ebp),%eax
08336051 +0x4f7:  mov    0xc(%ebp),%edx
08336054 +0x4fa:  mov    %edx,0x4(%eax)
08336057 +0x4fd:  leave
08336058 +0x4fe:  ret
08336059 +0x4ff:  nop
0833605a +0x500:  push   %ebp
0833605b +0x501:  mov    %esp,%ebp
0833605d +0x503:  push   %esi
0833605e +0x504:  push   %ebx
0833605f +0x505:  sub    $0x20,%esp
08336062 +0x508:  mov    0x8(%ebp),%esi
08336065 +0x50b:  mov    0xc(%ebp),%eax
08336068 +0x50e:  mov    %eax,(%esp)
0833606b +0x511:  call   083364c2 <+0x968>
08336070 +0x516:  mov    %eax,%ebx
08336072 +0x518:  mov    0xc(%ebp),%eax
08336075 +0x51b:  mov    %eax,(%esp)
08336078 +0x51e:  call   083364b6 <+0x95c>
0833607d +0x523:  mov    0x10(%ebp),%edx
08336080 +0x526:  mov    %edx,0x10(%esp)
08336084 +0x52a:  mov    %ebx,0xc(%esp)
08336088 +0x52e:  mov    %eax,0x8(%esp)
0833608c +0x532:  mov    0xc(%ebp),%eax
0833608f +0x535:  mov    %eax,0x4(%esp)
08336093 +0x539:  mov    %esi,(%esp)
08336096 +0x53c:  call   083364ce <+0x974>
0833609b +0x541:  sub    $0x4,%esp
0833609e +0x544:  mov    %esi,%eax
083360a0 +0x546:  lea    -0x8(%ebp),%esp
083360a3 +0x549:  add    $0x0,%esp
083360a6 +0x54c:  pop    %ebx
083360a7 +0x54d:  pop    %esi
083360a8 +0x54e:  pop    %ebp
083360a9 +0x54f:  ret    $0x4
083360ac +0x552:  push   %ebp
083360ad +0x553:  mov    %esp,%ebp
083360af +0x555:  push   %esi
083360b0 +0x556:  push   %ebx
083360b1 +0x557:  sub    $0x20,%esp
083360b4 +0x55a:  mov    0x8(%ebp),%esi
083360b7 +0x55d:  mov    0xc(%ebp),%eax
083360ba +0x560:  mov    %eax,(%esp)
083360bd +0x563:  call   083364c2 <+0x968>
083360c2 +0x568:  mov    %eax,%ebx
083360c4 +0x56a:  mov    0xc(%ebp),%eax
083360c7 +0x56d:  mov    %eax,(%esp)
083360ca +0x570:  call   083364b6 <+0x95c>
083360cf +0x575:  mov    0x10(%ebp),%edx
083360d2 +0x578:  mov    %edx,0x10(%esp)
083360d6 +0x57c:  mov    %ebx,0xc(%esp)
083360da +0x580:  mov    %eax,0x8(%esp)
083360de +0x584:  mov    0xc(%ebp),%eax
083360e1 +0x587:  mov    %eax,0x4(%esp)
083360e5 +0x58b:  mov    %esi,(%esp)
083360e8 +0x58e:  call   0833654a <+0x9f0>
083360ed +0x593:  sub    $0x4,%esp
083360f0 +0x596:  mov    %esi,%eax
083360f2 +0x598:  lea    -0x8(%ebp),%esp
083360f5 +0x59b:  add    $0x0,%esp
083360f8 +0x59e:  pop    %ebx
083360f9 +0x59f:  pop    %esi
083360fa +0x5a0:  pop    %ebp
083360fb +0x5a1:  ret    $0x4
083360fe +0x5a4:  push   %ebp
083360ff +0x5a5:  mov    %esp,%ebp
08336101 +0x5a7:  sub    $0x18,%esp
08336104 +0x5aa:  mov    0xc(%ebp),%eax
08336107 +0x5ad:  mov    %eax,0x4(%esp)
0833610b +0x5b1:  movl   $0xc,(%esp)
08336112 +0x5b8:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08336117 +0x5bd:  mov    %eax,%edx
08336119 +0x5bf:  test   %edx,%edx
0833611b +0x5c1:  je     08336132 <+0x5d8>
0833611d +0x5c3:  mov    0x10(%ebp),%edx
08336120 +0x5c6:  mov    (%edx),%ecx
08336122 +0x5c8:  mov    %ecx,(%eax)
08336124 +0x5ca:  mov    0x4(%edx),%ecx
08336127 +0x5cd:  mov    %ecx,0x4(%eax)
0833612a +0x5d0:  movzwl 0x8(%edx),%edx
0833612e +0x5d4:  mov    %dx,0x8(%eax)
08336132 +0x5d8:  leave
08336133 +0x5d9:  ret
08336134 +0x5da:  push   %ebp
08336135 +0x5db:  mov    %esp,%ebp
08336137 +0x5dd:  push   %esi
08336138 +0x5de:  push   %ebx
08336139 +0x5df:  sub    $0x30,%esp
0833613c +0x5e2:  mov    0x8(%ebp),%eax
0833613f +0x5e5:  mov    0x4(%eax),%edx
08336142 +0x5e8:  mov    0x8(%ebp),%eax
08336145 +0x5eb:  mov    0x8(%eax),%eax
08336148 +0x5ee:  cmp    %eax,%edx
0833614a +0x5f0:  je     08336207 <+0x6ad>
08336150 +0x5f6:  mov    0x8(%ebp),%eax
08336153 +0x5f9:  mov    0x4(%eax),%eax
08336156 +0x5fc:  sub    $0xc,%eax
08336159 +0x5ff:  mov    %eax,(%esp)
0833615c +0x602:  call   083365c3 <+0xa69>
08336161 +0x607:  mov    0x8(%ebp),%edx
08336164 +0x60a:  mov    0x4(%edx),%ecx
08336167 +0x60d:  mov    0x8(%ebp),%edx
0833616a +0x610:  mov    %eax,0x8(%esp)
0833616e +0x614:  mov    %ecx,0x4(%esp)
08336172 +0x618:  mov    %edx,(%esp)
08336175 +0x61b:  call   083365cc <+0xa72>
0833617a +0x620:  mov    0x8(%ebp),%eax
0833617d +0x623:  mov    0x4(%eax),%eax
08336180 +0x626:  lea    0xc(%eax),%edx
08336183 +0x629:  mov    0x8(%ebp),%eax
08336186 +0x62c:  mov    %edx,0x4(%eax)
08336189 +0x62f:  mov    0x8(%ebp),%eax
0833618c +0x632:  mov    0x4(%eax),%eax
0833618f +0x635:  lea    -0xc(%eax),%esi
08336192 +0x638:  mov    0x8(%ebp),%eax
08336195 +0x63b:  mov    0x4(%eax),%eax
08336198 +0x63e:  lea    -0x18(%eax),%ebx
0833619b +0x641:  lea    0xc(%ebp),%eax
0833619e +0x644:  mov    %eax,(%esp)
083361a1 +0x647:  call   0833601c <+0x4c2>
083361a6 +0x64c:  mov    (%eax),%eax
083361a8 +0x64e:  mov    %esi,0x8(%esp)
083361ac +0x652:  mov    %ebx,0x4(%esp)
083361b0 +0x656:  mov    %eax,(%esp)
083361b3 +0x659:  call   08336611 <+0xab7>
083361b8 +0x65e:  lea    0xc(%ebp),%eax
083361bb +0x661:  mov    %eax,(%esp)
083361be +0x664:  call   08336652 <+0xaf8>
083361c3 +0x669:  mov    %eax,%ebx
083361c5 +0x66b:  mov    0x10(%ebp),%eax
083361c8 +0x66e:  mov    %eax,(%esp)
083361cb +0x671:  call   08336649 <+0xaef>
083361d0 +0x676:  mov    (%eax),%edx
083361d2 +0x678:  mov    %edx,-0x28(%ebp)
083361d5 +0x67b:  mov    0x4(%eax),%edx
083361d8 +0x67e:  mov    %edx,-0x24(%ebp)
083361db +0x681:  movzwl 0x8(%eax),%eax
083361df +0x685:  mov    %ax,-0x20(%ebp)
083361e3 +0x689:  lea    -0x28(%ebp),%eax
083361e6 +0x68c:  cmp    %eax,%ebx
083361e8 +0x68e:  je     08336426 <+0x8cc>
083361ee +0x694:  movl   $0xa,0x8(%esp)
083361f6 +0x69c:  mov    %eax,0x4(%esp)
083361fa +0x6a0:  mov    %ebx,(%esp)
083361fd +0x6a3:  call   0807d8a0 <_init+0x198>
08336202 +0x6a8:  jmp    08336426 <+0x8cc>
08336207 +0x6ad:  movl   $"vector::_M_insert_aux",0x8(%esp)
0833620f +0x6b5:  movl   $0x1,0x4(%esp)
08336217 +0x6bd:  mov    0x8(%ebp),%eax
0833621a +0x6c0:  mov    %eax,(%esp)
0833621d +0x6c3:  call   0833665c <+0xb02>
08336222 +0x6c8:  mov    %eax,-0x18(%ebp)
08336225 +0x6cb:  lea    -0x1c(%ebp),%eax
08336228 +0x6ce:  mov    0x8(%ebp),%edx
0833622b +0x6d1:  mov    %edx,0x4(%esp)
0833622f +0x6d5:  mov    %eax,(%esp)
08336232 +0x6d8:  call   08335d3a <+0x1e0>
08336237 +0x6dd:  sub    $0x4,%esp
0833623a +0x6e0:  lea    -0x1c(%ebp),%eax
0833623d +0x6e3:  mov    %eax,0x4(%esp)
08336241 +0x6e7:  lea    0xc(%ebp),%eax
08336244 +0x6ea:  mov    %eax,(%esp)
08336247 +0x6ed:  call   08336701 <+0xba7>
0833624c +0x6f2:  mov    %eax,-0x14(%ebp)
0833624f +0x6f5:  mov    0x8(%ebp),%eax
08336252 +0x6f8:  mov    -0x18(%ebp),%edx
08336255 +0x6fb:  mov    %edx,0x4(%esp)
08336259 +0x6ff:  mov    %eax,(%esp)
0833625c +0x702:  call   0833673a <+0xbe0>
08336261 +0x707:  mov    %eax,-0x10(%ebp)
08336264 +0x70a:  mov    -0x10(%ebp),%eax
08336267 +0x70d:  mov    %eax,-0xc(%ebp)
0833626a +0x710:  mov    0x10(%ebp),%eax
0833626d +0x713:  mov    %eax,(%esp)
08336270 +0x716:  call   08336649 <+0xaef>
08336275 +0x71b:  mov    %eax,%ecx
08336277 +0x71d:  mov    -0x14(%ebp),%edx
0833627a +0x720:  mov    %edx,%eax
0833627c +0x722:  add    %eax,%eax
0833627e +0x724:  add    %edx,%eax
08336280 +0x726:  shl    $0x2,%eax
08336283 +0x729:  mov    %eax,%edx
08336285 +0x72b:  add    -0x10(%ebp),%edx
08336288 +0x72e:  mov    0x8(%ebp),%eax
0833628b +0x731:  mov    %ecx,0x8(%esp)
0833628f +0x735:  mov    %edx,0x4(%esp)
08336293 +0x739:  mov    %eax,(%esp)
08336296 +0x73c:  call   083360fe <+0x5a4>
0833629b +0x741:  movl   $0x0,-0xc(%ebp)
083362a2 +0x748:  mov    0x8(%ebp),%eax
083362a5 +0x74b:  mov    %eax,(%esp)
083362a8 +0x74e:  call   08335fea <+0x490>
083362ad +0x753:  mov    %eax,%ebx
083362af +0x755:  lea    0xc(%ebp),%eax
083362b2 +0x758:  mov    %eax,(%esp)
083362b5 +0x75b:  call   0833601c <+0x4c2>
083362ba +0x760:  mov    (%eax),%edx
083362bc +0x762:  mov    0x8(%ebp),%eax
083362bf +0x765:  mov    (%eax),%eax
083362c1 +0x767:  mov    %ebx,0xc(%esp)
083362c5 +0x76b:  mov    -0x10(%ebp),%ecx
083362c8 +0x76e:  mov    %ecx,0x8(%esp)
083362cc +0x772:  mov    %edx,0x4(%esp)
083362d0 +0x776:  mov    %eax,(%esp)
083362d3 +0x779:  call   08336769 <+0xc0f>
083362d8 +0x77e:  mov    %eax,-0xc(%ebp)
083362db +0x781:  addl   $0xc,-0xc(%ebp)
083362df +0x785:  mov    0x8(%ebp),%eax
083362e2 +0x788:  mov    %eax,(%esp)
083362e5 +0x78b:  call   08335fea <+0x490>
083362ea +0x790:  mov    %eax,%ebx
083362ec +0x792:  mov    0x8(%ebp),%eax
083362ef +0x795:  mov    0x4(%eax),%esi
083362f2 +0x798:  lea    0xc(%ebp),%eax
083362f5 +0x79b:  mov    %eax,(%esp)
083362f8 +0x79e:  call   0833601c <+0x4c2>
083362fd +0x7a3:  mov    (%eax),%eax
083362ff +0x7a5:  mov    %ebx,0xc(%esp)
08336303 +0x7a9:  mov    -0xc(%ebp),%edx
08336306 +0x7ac:  mov    %edx,0x8(%esp)
0833630a +0x7b0:  mov    %esi,0x4(%esp)
0833630e +0x7b4:  mov    %eax,(%esp)
08336311 +0x7b7:  call   08336769 <+0xc0f>
08336316 +0x7bc:  mov    %eax,-0xc(%ebp)
08336319 +0x7bf:  mov    0x8(%ebp),%eax
0833631c +0x7c2:  mov    %eax,(%esp)
0833631f +0x7c5:  call   08335fea <+0x490>
08336324 +0x7ca:  mov    0x8(%ebp),%edx
08336327 +0x7cd:  mov    0x4(%edx),%ecx
0833632a +0x7d0:  mov    0x8(%ebp),%edx
0833632d +0x7d3:  mov    (%edx),%edx
0833632f +0x7d5:  mov    %eax,0x8(%esp)
08336333 +0x7d9:  mov    %ecx,0x4(%esp)
08336337 +0x7dd:  mov    %edx,(%esp)
0833633a +0x7e0:  call   08335ff2 <+0x498>
0833633f +0x7e5:  mov    0x8(%ebp),%eax
08336342 +0x7e8:  mov    0x8(%eax),%eax
08336345 +0x7eb:  mov    %eax,%edx
08336347 +0x7ed:  mov    0x8(%ebp),%eax
0833634a +0x7f0:  mov    (%eax),%eax
0833634c +0x7f2:  mov    %edx,%ecx
0833634e +0x7f4:  sub    %eax,%ecx
08336350 +0x7f6:  mov    %ecx,%eax
08336352 +0x7f8:  sar    $0x2,%eax
08336355 +0x7fb:  imul   $0xaaaaaaab,%eax,%eax
0833635b +0x801:  mov    %eax,%ecx
0833635d +0x803:  mov    0x8(%ebp),%eax
08336360 +0x806:  mov    (%eax),%edx
08336362 +0x808:  mov    0x8(%ebp),%eax
08336365 +0x80b:  mov    %ecx,0x8(%esp)
08336369 +0x80f:  mov    %edx,0x4(%esp)
0833636d +0x813:  mov    %eax,(%esp)
08336370 +0x816:  call   08336474 <+0x91a>
08336375 +0x81b:  mov    0x8(%ebp),%eax
08336378 +0x81e:  mov    -0x10(%ebp),%edx
0833637b +0x821:  mov    %edx,(%eax)
0833637d +0x823:  mov    0x8(%ebp),%eax
08336380 +0x826:  mov    -0xc(%ebp),%edx
08336383 +0x829:  mov    %edx,0x4(%eax)
08336386 +0x82c:  mov    -0x18(%ebp),%edx
08336389 +0x82f:  mov    %edx,%eax
0833638b +0x831:  add    %eax,%eax
0833638d +0x833:  add    %edx,%eax
0833638f +0x835:  shl    $0x2,%eax
08336392 +0x838:  mov    %eax,%edx
08336394 +0x83a:  add    -0x10(%ebp),%edx
08336397 +0x83d:  mov    0x8(%ebp),%eax
0833639a +0x840:  mov    %edx,0x8(%eax)
0833639d +0x843:  jmp    08336426 <+0x8cc>
083363a2 +0x848:  mov    %eax,(%esp)
083363a5 +0x84b:  call   08725ce0 <__cxa_begin_catch>
083363aa +0x850:  cmpl   $0x0,-0xc(%ebp)
083363ae +0x854:  jne    083363d2 <+0x878>
083363b0 +0x856:  mov    -0x14(%ebp),%edx
083363b3 +0x859:  mov    %edx,%eax
083363b5 +0x85b:  add    %eax,%eax
083363b7 +0x85d:  add    %edx,%eax
083363b9 +0x85f:  shl    $0x2,%eax
083363bc +0x862:  mov    %eax,%edx
083363be +0x864:  add    -0x10(%ebp),%edx
083363c1 +0x867:  mov    0x8(%ebp),%eax
083363c4 +0x86a:  mov    %edx,0x4(%esp)
083363c8 +0x86e:  mov    %eax,(%esp)
083363cb +0x871:  call   083367c2 <+0xc68>
083363d0 +0x876:  jmp    083363f3 <+0x899>
083363d2 +0x878:  mov    0x8(%ebp),%eax
083363d5 +0x87b:  mov    %eax,(%esp)
083363d8 +0x87e:  call   08335fea <+0x490>
083363dd +0x883:  mov    %eax,0x8(%esp)
083363e1 +0x887:  mov    -0xc(%ebp),%eax
083363e4 +0x88a:  mov    %eax,0x4(%esp)
083363e8 +0x88e:  mov    -0x10(%ebp),%eax
083363eb +0x891:  mov    %eax,(%esp)
083363ee +0x894:  call   08335ff2 <+0x498>
083363f3 +0x899:  mov    0x8(%ebp),%eax
083363f6 +0x89c:  mov    -0x18(%ebp),%edx
083363f9 +0x89f:  mov    %edx,0x8(%esp)
083363fd +0x8a3:  mov    -0x10(%ebp),%edx
08336400 +0x8a6:  mov    %edx,0x4(%esp)
08336404 +0x8aa:  mov    %eax,(%esp)
08336407 +0x8ad:  call   08336474 <+0x91a>
0833640c +0x8b2:  call   08724be0 <__cxa_rethrow>
08336411 +0x8b7:  mov    %edx,%ebx
08336413 +0x8b9:  mov    %eax,%esi
08336415 +0x8bb:  call   08725c30 <__cxa_end_catch>
0833641a +0x8c0:  mov    %esi,%eax
0833641c +0x8c2:  mov    %ebx,%edx
0833641e +0x8c4:  mov    %eax,(%esp)
08336421 +0x8c7:  call   08ae3750 <_Unwind_Resume>
08336426 +0x8cc:  lea    -0x8(%ebp),%esp
08336429 +0x8cf:  add    $0x0,%esp
0833642c +0x8d2:  pop    %ebx
0833642d +0x8d3:  pop    %esi
0833642e +0x8d4:  pop    %ebp
0833642f +0x8d5:  ret
08336430 +0x8d6:  push   %ebp
08336431 +0x8d7:  mov    %esp,%ebp
08336433 +0x8d9:  sub    $0x18,%esp
08336436 +0x8dc:  mov    0x8(%ebp),%eax
08336439 +0x8df:  mov    %eax,(%esp)
0833643c +0x8e2:  call   083367d6 <+0xc7c>
08336441 +0x8e7:  mov    0x8(%ebp),%eax
08336444 +0x8ea:  movl   $0x0,(%eax)
0833644a +0x8f0:  mov    0x8(%ebp),%eax
0833644d +0x8f3:  movl   $0x0,0x4(%eax)
08336454 +0x8fa:  mov    0x8(%ebp),%eax
08336457 +0x8fd:  movl   $0x0,0x8(%eax)
0833645e +0x904:  leave
0833645f +0x905:  ret
08336460 +0x906:  push   %ebp
08336461 +0x907:  mov    %esp,%ebp
08336463 +0x909:  sub    $0x18,%esp
08336466 +0x90c:  mov    0x8(%ebp),%eax
08336469 +0x90f:  mov    %eax,(%esp)
0833646c +0x912:  call   083367ea <+0xc90>
08336471 +0x917:  leave
08336472 +0x918:  ret
08336473 +0x919:  nop
08336474 +0x91a:  push   %ebp
08336475 +0x91b:  mov    %esp,%ebp
08336477 +0x91d:  sub    $0x18,%esp
0833647a +0x920:  cmpl   $0x0,0xc(%ebp)
0833647e +0x924:  je     08336499 <+0x93f>
08336480 +0x926:  mov    0x8(%ebp),%eax
08336483 +0x929:  mov    0x10(%ebp),%edx
08336486 +0x92c:  mov    %edx,0x8(%esp)
0833648a +0x930:  mov    0xc(%ebp),%edx
0833648d +0x933:  mov    %edx,0x4(%esp)
08336491 +0x937:  mov    %eax,(%esp)
08336494 +0x93a:  call   083367f0 <+0xc96>
08336499 +0x93f:  leave
0833649a +0x940:  ret
0833649b +0x941:  push   %ebp
0833649c +0x942:  mov    %esp,%ebp
0833649e +0x944:  sub    $0x18,%esp
083364a1 +0x947:  mov    0xc(%ebp),%eax
083364a4 +0x94a:  mov    %eax,0x4(%esp)
083364a8 +0x94e:  mov    0x8(%ebp),%eax
083364ab +0x951:  mov    %eax,(%esp)
083364ae +0x954:  call   08336803 <+0xca9>
083364b3 +0x959:  leave
083364b4 +0x95a:  ret
083364b5 +0x95b:  nop
083364b6 +0x95c:  push   %ebp
083364b7 +0x95d:  mov    %esp,%ebp
083364b9 +0x95f:  mov    0x8(%ebp),%eax
083364bc +0x962:  mov    0x8(%eax),%eax
083364bf +0x965:  pop    %ebp
083364c0 +0x966:  ret
083364c1 +0x967:  nop
083364c2 +0x968:  push   %ebp
083364c3 +0x969:  mov    %esp,%ebp
083364c5 +0x96b:  mov    0x8(%ebp),%eax
083364c8 +0x96e:  add    $0x4,%eax
083364cb +0x971:  pop    %ebp
083364cc +0x972:  ret
083364cd +0x973:  nop
083364ce +0x974:  push   %ebp
083364cf +0x975:  mov    %esp,%ebp
083364d1 +0x977:  push   %ebx
083364d2 +0x978:  sub    $0x14,%esp
083364d5 +0x97b:  mov    0x8(%ebp),%ebx
083364d8 +0x97e:  jmp    08336526 <+0x9cc>
083364da +0x980:  mov    0x10(%ebp),%eax
083364dd +0x983:  mov    %eax,(%esp)
083364e0 +0x986:  call   08336808 <+0xcae>
083364e5 +0x98b:  mov    0xc(%ebp),%edx
083364e8 +0x98e:  mov    0x18(%ebp),%ecx
083364eb +0x991:  mov    %ecx,0x8(%esp)
083364ef +0x995:  mov    %eax,0x4(%esp)
083364f3 +0x999:  mov    %edx,(%esp)
083364f6 +0x99c:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
083364fb +0x9a1:  xor    $0x1,%eax
083364fe +0x9a4:  test   %al,%al
08336500 +0x9a6:  je     08336518 <+0x9be>
08336502 +0x9a8:  mov    0x10(%ebp),%eax
08336505 +0x9ab:  mov    %eax,0x14(%ebp)
08336508 +0x9ae:  mov    0x10(%ebp),%eax
0833650b +0x9b1:  mov    %eax,(%esp)
0833650e +0x9b4:  call   0833682a <+0xcd0>
08336513 +0x9b9:  mov    %eax,0x10(%ebp)
08336516 +0x9bc:  jmp    08336526 <+0x9cc>
08336518 +0x9be:  mov    0x10(%ebp),%eax
0833651b +0x9c1:  mov    %eax,(%esp)
0833651e +0x9c4:  call   08336835 <+0xcdb>
08336523 +0x9c9:  mov    %eax,0x10(%ebp)
08336526 +0x9cc:  cmpl   $0x0,0x10(%ebp)
0833652a +0x9d0:  setne  %al
0833652d +0x9d3:  test   %al,%al
0833652f +0x9d5:  jne    083364da <+0x980>
08336531 +0x9d7:  mov    0x14(%ebp),%eax
08336534 +0x9da:  mov    %eax,0x4(%esp)
08336538 +0x9de:  mov    %ebx,(%esp)
0833653b +0x9e1:  call   08336840 <+0xce6>
08336540 +0x9e6:  mov    %ebx,%eax
08336542 +0x9e8:  add    $0x14,%esp
08336545 +0x9eb:  pop    %ebx
08336546 +0x9ec:  pop    %ebp
08336547 +0x9ed:  ret    $0x4
0833654a +0x9f0:  push   %ebp
0833654b +0x9f1:  mov    %esp,%ebp
0833654d +0x9f3:  push   %ebx
0833654e +0x9f4:  sub    $0x14,%esp
08336551 +0x9f7:  mov    0x8(%ebp),%ebx
08336554 +0x9fa:  jmp    0833659f <+0xa45>
08336556 +0x9fc:  mov    0x10(%ebp),%eax
08336559 +0x9ff:  mov    %eax,(%esp)
0833655c +0xa02:  call   08336808 <+0xcae>
08336561 +0xa07:  mov    0xc(%ebp),%edx
08336564 +0xa0a:  mov    %eax,0x8(%esp)
08336568 +0xa0e:  mov    0x18(%ebp),%eax
0833656b +0xa11:  mov    %eax,0x4(%esp)
0833656f +0xa15:  mov    %edx,(%esp)
08336572 +0xa18:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
08336577 +0xa1d:  test   %al,%al
08336579 +0xa1f:  je     08336591 <+0xa37>
0833657b +0xa21:  mov    0x10(%ebp),%eax
0833657e +0xa24:  mov    %eax,0x14(%ebp)
08336581 +0xa27:  mov    0x10(%ebp),%eax
08336584 +0xa2a:  mov    %eax,(%esp)
08336587 +0xa2d:  call   0833682a <+0xcd0>
0833658c +0xa32:  mov    %eax,0x10(%ebp)
0833658f +0xa35:  jmp    0833659f <+0xa45>
08336591 +0xa37:  mov    0x10(%ebp),%eax
08336594 +0xa3a:  mov    %eax,(%esp)
08336597 +0xa3d:  call   08336835 <+0xcdb>
0833659c +0xa42:  mov    %eax,0x10(%ebp)
0833659f +0xa45:  cmpl   $0x0,0x10(%ebp)
083365a3 +0xa49:  setne  %al
083365a6 +0xa4c:  test   %al,%al
083365a8 +0xa4e:  jne    08336556 <+0x9fc>
083365aa +0xa50:  mov    0x14(%ebp),%eax
083365ad +0xa53:  mov    %eax,0x4(%esp)
083365b1 +0xa57:  mov    %ebx,(%esp)
083365b4 +0xa5a:  call   08336840 <+0xce6>
083365b9 +0xa5f:  mov    %ebx,%eax
083365bb +0xa61:  add    $0x14,%esp
083365be +0xa64:  pop    %ebx
083365bf +0xa65:  pop    %ebp
083365c0 +0xa66:  ret    $0x4
083365c3 +0xa69:  push   %ebp
083365c4 +0xa6a:  mov    %esp,%ebp
083365c6 +0xa6c:  mov    0x8(%ebp),%eax
083365c9 +0xa6f:  pop    %ebp
083365ca +0xa70:  ret
083365cb +0xa71:  nop
083365cc +0xa72:  push   %ebp
083365cd +0xa73:  mov    %esp,%ebp
083365cf +0xa75:  push   %ebx
083365d0 +0xa76:  sub    $0x14,%esp
083365d3 +0xa79:  mov    0x10(%ebp),%eax
083365d6 +0xa7c:  mov    %eax,(%esp)
083365d9 +0xa7f:  call   0833684d <+0xcf3>
083365de +0xa84:  mov    %eax,%ebx
083365e0 +0xa86:  mov    0xc(%ebp),%eax
083365e3 +0xa89:  mov    %eax,0x4(%esp)
083365e7 +0xa8d:  movl   $0xc,(%esp)
083365ee +0xa94:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
083365f3 +0xa99:  mov    %eax,%edx
083365f5 +0xa9b:  test   %edx,%edx
083365f7 +0xa9d:  je     0833660b <+0xab1>
083365f9 +0xa9f:  mov    (%ebx),%edx
083365fb +0xaa1:  mov    %edx,(%eax)
083365fd +0xaa3:  mov    0x4(%ebx),%edx
08336600 +0xaa6:  mov    %edx,0x4(%eax)
08336603 +0xaa9:  movzwl 0x8(%ebx),%edx
08336607 +0xaad:  mov    %dx,0x8(%eax)
0833660b +0xab1:  add    $0x14,%esp
0833660e +0xab4:  pop    %ebx
0833660f +0xab5:  pop    %ebp
08336610 +0xab6:  ret
08336611 +0xab7:  push   %ebp
08336612 +0xab8:  mov    %esp,%ebp
08336614 +0xaba:  push   %ebx
08336615 +0xabb:  sub    $0x14,%esp
08336618 +0xabe:  mov    0xc(%ebp),%eax
0833661b +0xac1:  mov    %eax,(%esp)
0833661e +0xac4:  call   08336855 <+0xcfb>
08336623 +0xac9:  mov    %eax,%ebx
08336625 +0xacb:  mov    0x8(%ebp),%eax
08336628 +0xace:  mov    %eax,(%esp)
0833662b +0xad1:  call   08336855 <+0xcfb>
08336630 +0xad6:  mov    0x10(%ebp),%edx
08336633 +0xad9:  mov    %edx,0x8(%esp)
08336637 +0xadd:  mov    %ebx,0x4(%esp)
0833663b +0xae1:  mov    %eax,(%esp)
0833663e +0xae4:  call   0833685d <+0xd03>
08336643 +0xae9:  add    $0x14,%esp
08336646 +0xaec:  pop    %ebx
08336647 +0xaed:  pop    %ebp
08336648 +0xaee:  ret
08336649 +0xaef:  push   %ebp
0833664a +0xaf0:  mov    %esp,%ebp
0833664c +0xaf2:  mov    0x8(%ebp),%eax
0833664f +0xaf5:  pop    %ebp
08336650 +0xaf6:  ret
08336651 +0xaf7:  nop
08336652 +0xaf8:  push   %ebp
08336653 +0xaf9:  mov    %esp,%ebp
08336655 +0xafb:  mov    0x8(%ebp),%eax
08336658 +0xafe:  mov    (%eax),%eax
0833665a +0xb00:  pop    %ebp
0833665b +0xb01:  ret
0833665c +0xb02:  push   %ebp
0833665d +0xb03:  mov    %esp,%ebp
0833665f +0xb05:  push   %ebx
08336660 +0xb06:  sub    $0x24,%esp
08336663 +0xb09:  mov    0x8(%ebp),%eax
08336666 +0xb0c:  mov    %eax,(%esp)
08336669 +0xb0f:  call   083368a2 <+0xd48>
0833666e +0xb14:  mov    %eax,%ebx
08336670 +0xb16:  mov    0x8(%ebp),%eax
08336673 +0xb19:  mov    %eax,(%esp)
08336676 +0xb1c:  call   08335f18 <+0x3be>
0833667b +0xb21:  mov    %ebx,%edx
0833667d +0xb23:  sub    %eax,%edx
0833667f +0xb25:  mov    0xc(%ebp),%eax
08336682 +0xb28:  cmp    %eax,%edx
08336684 +0xb2a:  setb   %al
08336687 +0xb2d:  test   %al,%al
08336689 +0xb2f:  je     08336696 <+0xb3c>
0833668b +0xb31:  mov    0x10(%ebp),%eax
0833668e +0xb34:  mov    %eax,(%esp)
08336691 +0xb37:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08336696 +0xb3c:  mov    0x8(%ebp),%eax
08336699 +0xb3f:  mov    %eax,(%esp)
0833669c +0xb42:  call   08335f18 <+0x3be>
083366a1 +0xb47:  mov    %eax,%ebx
083366a3 +0xb49:  mov    0x8(%ebp),%eax
083366a6 +0xb4c:  mov    %eax,(%esp)
083366a9 +0xb4f:  call   08335f18 <+0x3be>
083366ae +0xb54:  mov    %eax,-0x10(%ebp)
083366b1 +0xb57:  lea    0xc(%ebp),%eax
083366b4 +0xb5a:  mov    %eax,0x4(%esp)
083366b8 +0xb5e:  lea    -0x10(%ebp),%eax
083366bb +0xb61:  mov    %eax,(%esp)
083366be +0xb64:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
083366c3 +0xb69:  mov    (%eax),%eax
083366c5 +0xb6b:  lea    (%ebx,%eax,1),%eax
083366c8 +0xb6e:  mov    %eax,-0xc(%ebp)
083366cb +0xb71:  mov    0x8(%ebp),%eax
083366ce +0xb74:  mov    %eax,(%esp)
083366d1 +0xb77:  call   08335f18 <+0x3be>
083366d6 +0xb7c:  cmp    -0xc(%ebp),%eax
083366d9 +0xb7f:  ja     083366eb <+0xb91>
083366db +0xb81:  mov    0x8(%ebp),%eax
083366de +0xb84:  mov    %eax,(%esp)
083366e1 +0xb87:  call   083368a2 <+0xd48>
083366e6 +0xb8c:  cmp    -0xc(%ebp),%eax
083366e9 +0xb8f:  jae    083366f8 <+0xb9e>
083366eb +0xb91:  mov    0x8(%ebp),%eax
083366ee +0xb94:  mov    %eax,(%esp)
083366f1 +0xb97:  call   083368a2 <+0xd48>
083366f6 +0xb9c:  jmp    083366fb <+0xba1>
083366f8 +0xb9e:  mov    -0xc(%ebp),%eax
083366fb +0xba1:  add    $0x24,%esp
083366fe +0xba4:  pop    %ebx
083366ff +0xba5:  pop    %ebp
08336700 +0xba6:  ret
08336701 +0xba7:  push   %ebp
08336702 +0xba8:  mov    %esp,%ebp
08336704 +0xbaa:  push   %ebx
08336705 +0xbab:  sub    $0x14,%esp
08336708 +0xbae:  mov    0x8(%ebp),%eax
0833670b +0xbb1:  mov    %eax,(%esp)
0833670e +0xbb4:  call   0833601c <+0x4c2>
08336713 +0xbb9:  mov    (%eax),%eax
08336715 +0xbbb:  mov    %eax,%ebx
08336717 +0xbbd:  mov    0xc(%ebp),%eax
0833671a +0xbc0:  mov    %eax,(%esp)
0833671d +0xbc3:  call   0833601c <+0x4c2>
08336722 +0xbc8:  mov    (%eax),%eax
08336724 +0xbca:  mov    %ebx,%edx
08336726 +0xbcc:  sub    %eax,%edx
08336728 +0xbce:  mov    %edx,%eax
0833672a +0xbd0:  sar    $0x2,%eax
0833672d +0xbd3:  imul   $0xaaaaaaab,%eax,%eax
08336733 +0xbd9:  add    $0x14,%esp
08336736 +0xbdc:  pop    %ebx
08336737 +0xbdd:  pop    %ebp
08336738 +0xbde:  ret
08336739 +0xbdf:  nop
0833673a +0xbe0:  push   %ebp
0833673b +0xbe1:  mov    %esp,%ebp
0833673d +0xbe3:  sub    $0x18,%esp
08336740 +0xbe6:  cmpl   $0x0,0xc(%ebp)
08336744 +0xbea:  je     08336762 <+0xc08>
08336746 +0xbec:  mov    0x8(%ebp),%eax
08336749 +0xbef:  movl   $0x0,0x8(%esp)
08336751 +0xbf7:  mov    0xc(%ebp),%edx
08336754 +0xbfa:  mov    %edx,0x4(%esp)
08336758 +0xbfe:  mov    %eax,(%esp)
0833675b +0xc01:  call   083368be <+0xd64>
08336760 +0xc06:  jmp    08336767 <+0xc0d>
08336762 +0xc08:  mov    $0x0,%eax
08336767 +0xc0d:  leave
08336768 +0xc0e:  ret
08336769 +0xc0f:  push   %ebp
0833676a +0xc10:  mov    %esp,%ebp
0833676c +0xc12:  sub    $0x28,%esp
0833676f +0xc15:  lea    -0x10(%ebp),%eax
08336772 +0xc18:  lea    0xc(%ebp),%edx
08336775 +0xc1b:  mov    %edx,0x4(%esp)
08336779 +0xc1f:  mov    %eax,(%esp)
0833677c +0xc22:  call   083368fc <+0xda2>
08336781 +0xc27:  sub    $0x4,%esp
08336784 +0xc2a:  lea    -0xc(%ebp),%eax
08336787 +0xc2d:  lea    0x8(%ebp),%edx
0833678a +0xc30:  mov    %edx,0x4(%esp)
0833678e +0xc34:  mov    %eax,(%esp)
08336791 +0xc37:  call   083368fc <+0xda2>
08336796 +0xc3c:  sub    $0x4,%esp
08336799 +0xc3f:  mov    0x14(%ebp),%eax
0833679c +0xc42:  mov    %eax,0xc(%esp)
083367a0 +0xc46:  mov    0x10(%ebp),%eax
083367a3 +0xc49:  mov    %eax,0x8(%esp)
083367a7 +0xc4d:  mov    -0x10(%ebp),%eax
083367aa +0xc50:  mov    %eax,0x4(%esp)
083367ae +0xc54:  mov    -0xc(%ebp),%eax
083367b1 +0xc57:  mov    %eax,(%esp)
083367b4 +0xc5a:  call   08336921 <+0xdc7>
083367b9 +0xc5f:  leave
083367ba +0xc60:  ret
083367bb +0xc61:  nop
083367bc +0xc62:  push   %ebp
083367bd +0xc63:  mov    %esp,%ebp
083367bf +0xc65:  pop    %ebp
083367c0 +0xc66:  ret
083367c1 +0xc67:  nop
083367c2 +0xc68:  push   %ebp
083367c3 +0xc69:  mov    %esp,%ebp
083367c5 +0xc6b:  sub    $0x18,%esp
083367c8 +0xc6e:  mov    0xc(%ebp),%eax
083367cb +0xc71:  mov    %eax,(%esp)
083367ce +0xc74:  call   083367bc <+0xc62>
083367d3 +0xc79:  leave
083367d4 +0xc7a:  ret
083367d5 +0xc7b:  nop
083367d6 +0xc7c:  push   %ebp
083367d7 +0xc7d:  mov    %esp,%ebp
083367d9 +0xc7f:  sub    $0x18,%esp
083367dc +0xc82:  mov    0x8(%ebp),%eax
083367df +0xc85:  mov    %eax,(%esp)
083367e2 +0xc88:  call   08336942 <+0xde8>
083367e7 +0xc8d:  leave
083367e8 +0xc8e:  ret
083367e9 +0xc8f:  nop
083367ea +0xc90:  push   %ebp
083367eb +0xc91:  mov    %esp,%ebp
083367ed +0xc93:  pop    %ebp
083367ee +0xc94:  ret
083367ef +0xc95:  nop
083367f0 +0xc96:  push   %ebp
083367f1 +0xc97:  mov    %esp,%ebp
083367f3 +0xc99:  sub    $0x18,%esp
083367f6 +0xc9c:  mov    0xc(%ebp),%eax
083367f9 +0xc9f:  mov    %eax,(%esp)
083367fc +0xca2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08336801 +0xca7:  leave
08336802 +0xca8:  ret
08336803 +0xca9:  push   %ebp
08336804 +0xcaa:  mov    %esp,%ebp
08336806 +0xcac:  pop    %ebp
08336807 +0xcad:  ret
08336808 +0xcae:  push   %ebp
08336809 +0xcaf:  mov    %esp,%ebp
0833680b +0xcb1:  sub    $0x28,%esp
0833680e +0xcb4:  mov    0x8(%ebp),%eax
08336811 +0xcb7:  mov    %eax,(%esp)
08336814 +0xcba:  call   08336947 <+0xded>
08336819 +0xcbf:  mov    %eax,0x4(%esp)
0833681d +0xcc3:  lea    -0x9(%ebp),%eax
08336820 +0xcc6:  mov    %eax,(%esp)
08336823 +0xcc9:  call   08336952 <+0xdf8>
08336828 +0xcce:  leave
08336829 +0xccf:  ret
0833682a +0xcd0:  push   %ebp
0833682b +0xcd1:  mov    %esp,%ebp
0833682d +0xcd3:  mov    0x8(%ebp),%eax
08336830 +0xcd6:  mov    0x8(%eax),%eax
08336833 +0xcd9:  pop    %ebp
08336834 +0xcda:  ret
08336835 +0xcdb:  push   %ebp
08336836 +0xcdc:  mov    %esp,%ebp
08336838 +0xcde:  mov    0x8(%ebp),%eax
0833683b +0xce1:  mov    0xc(%eax),%eax
0833683e +0xce4:  pop    %ebp
0833683f +0xce5:  ret
08336840 +0xce6:  push   %ebp
08336841 +0xce7:  mov    %esp,%ebp
08336843 +0xce9:  mov    0xc(%ebp),%edx
08336846 +0xcec:  mov    0x8(%ebp),%eax
08336849 +0xcef:  mov    %edx,(%eax)
0833684b +0xcf1:  pop    %ebp
0833684c +0xcf2:  ret
0833684d +0xcf3:  push   %ebp
0833684e +0xcf4:  mov    %esp,%ebp
08336850 +0xcf6:  mov    0x8(%ebp),%eax
08336853 +0xcf9:  pop    %ebp
08336854 +0xcfa:  ret
08336855 +0xcfb:  push   %ebp
08336856 +0xcfc:  mov    %esp,%ebp
08336858 +0xcfe:  mov    0x8(%ebp),%eax
0833685b +0xd01:  pop    %ebp
0833685c +0xd02:  ret
0833685d +0xd03:  push   %ebp
0833685e +0xd04:  mov    %esp,%ebp
08336860 +0xd06:  push   %esi
08336861 +0xd07:  push   %ebx
08336862 +0xd08:  sub    $0x10,%esp
08336865 +0xd0b:  mov    0x10(%ebp),%eax
08336868 +0xd0e:  mov    %eax,(%esp)
0833686b +0xd11:  call   0833695a <+0xe00>
08336870 +0xd16:  mov    %eax,%esi
08336872 +0xd18:  mov    0xc(%ebp),%eax
08336875 +0xd1b:  mov    %eax,(%esp)
08336878 +0xd1e:  call   0833695a <+0xe00>
0833687d +0xd23:  mov    %eax,%ebx
0833687f +0xd25:  mov    0x8(%ebp),%eax
08336882 +0xd28:  mov    %eax,(%esp)
08336885 +0xd2b:  call   0833695a <+0xe00>
0833688a +0xd30:  mov    %esi,0x8(%esp)
0833688e +0xd34:  mov    %ebx,0x4(%esp)
08336892 +0xd38:  mov    %eax,(%esp)
08336895 +0xd3b:  call   08336962 <+0xe08>
0833689a +0xd40:  add    $0x10,%esp
0833689d +0xd43:  pop    %ebx
0833689e +0xd44:  pop    %esi
0833689f +0xd45:  pop    %ebp
083368a0 +0xd46:  ret
083368a1 +0xd47:  nop
083368a2 +0xd48:  push   %ebp
083368a3 +0xd49:  mov    %esp,%ebp
083368a5 +0xd4b:  sub    $0x18,%esp
083368a8 +0xd4e:  mov    0x8(%ebp),%eax
083368ab +0xd51:  mov    %eax,(%esp)
083368ae +0xd54:  call   08336988 <+0xe2e>
083368b3 +0xd59:  mov    %eax,(%esp)
083368b6 +0xd5c:  call   08336990 <+0xe36>
083368bb +0xd61:  leave
083368bc +0xd62:  ret
083368bd +0xd63:  nop
083368be +0xd64:  push   %ebp
083368bf +0xd65:  mov    %esp,%ebp
083368c1 +0xd67:  sub    $0x18,%esp
083368c4 +0xd6a:  mov    0x8(%ebp),%eax
083368c7 +0xd6d:  mov    %eax,(%esp)
083368ca +0xd70:  call   08336990 <+0xe36>
083368cf +0xd75:  cmp    0xc(%ebp),%eax
083368d2 +0xd78:  setb   %al
083368d5 +0xd7b:  movzbl %al,%eax
083368d8 +0xd7e:  test   %eax,%eax
083368da +0xd80:  setne  %al
083368dd +0xd83:  test   %al,%al
083368df +0xd85:  je     083368e6 <+0xd8c>
083368e1 +0xd87:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
083368e6 +0xd8c:  mov    0xc(%ebp),%edx
083368e9 +0xd8f:  mov    %edx,%eax
083368eb +0xd91:  add    %eax,%eax
083368ed +0xd93:  add    %edx,%eax
083368ef +0xd95:  shl    $0x2,%eax
083368f2 +0xd98:  mov    %eax,(%esp)
083368f5 +0xd9b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083368fa +0xda0:  leave
083368fb +0xda1:  ret
083368fc +0xda2:  push   %ebp
083368fd +0xda3:  mov    %esp,%ebp
083368ff +0xda5:  push   %ebx
08336900 +0xda6:  sub    $0x14,%esp
08336903 +0xda9:  mov    0x8(%ebp),%ebx
08336906 +0xdac:  mov    0xc(%ebp),%eax
08336909 +0xdaf:  mov    (%eax),%eax
0833690b +0xdb1:  mov    %eax,0x4(%esp)
0833690f +0xdb5:  mov    %ebx,(%esp)
08336912 +0xdb8:  call   0833699a <+0xe40>
08336917 +0xdbd:  mov    %ebx,%eax
08336919 +0xdbf:  add    $0x14,%esp
0833691c +0xdc2:  pop    %ebx
0833691d +0xdc3:  pop    %ebp
0833691e +0xdc4:  ret    $0x4
08336921 +0xdc7:  push   %ebp
08336922 +0xdc8:  mov    %esp,%ebp
08336924 +0xdca:  sub    $0x18,%esp
08336927 +0xdcd:  mov    0x10(%ebp),%eax
0833692a +0xdd0:  mov    %eax,0x8(%esp)
0833692e +0xdd4:  mov    0xc(%ebp),%eax
08336931 +0xdd7:  mov    %eax,0x4(%esp)
08336935 +0xddb:  mov    0x8(%ebp),%eax
08336938 +0xdde:  mov    %eax,(%esp)
0833693b +0xde1:  call   083369a7 <+0xe4d>
08336940 +0xde6:  leave
08336941 +0xde7:  ret
08336942 +0xde8:  push   %ebp
08336943 +0xde9:  mov    %esp,%ebp
08336945 +0xdeb:  pop    %ebp
08336946 +0xdec:  ret
08336947 +0xded:  push   %ebp
08336948 +0xdee:  mov    %esp,%ebp
0833694a +0xdf0:  mov    0x8(%ebp),%eax
0833694d +0xdf3:  add    $0x10,%eax
08336950 +0xdf6:  pop    %ebp
08336951 +0xdf7:  ret
08336952 +0xdf8:  push   %ebp
08336953 +0xdf9:  mov    %esp,%ebp
08336955 +0xdfb:  mov    0xc(%ebp),%eax
08336958 +0xdfe:  pop    %ebp
08336959 +0xdff:  ret
0833695a +0xe00:  push   %ebp
0833695b +0xe01:  mov    %esp,%ebp
0833695d +0xe03:  mov    0x8(%ebp),%eax
08336960 +0xe06:  pop    %ebp
08336961 +0xe07:  ret
08336962 +0xe08:  push   %ebp
08336963 +0xe09:  mov    %esp,%ebp
08336965 +0xe0b:  sub    $0x28,%esp
08336968 +0xe0e:  movb   $0x0,-0x9(%ebp)
0833696c +0xe12:  mov    0x10(%ebp),%eax
0833696f +0xe15:  mov    %eax,0x8(%esp)
08336973 +0xe19:  mov    0xc(%ebp),%eax
08336976 +0xe1c:  mov    %eax,0x4(%esp)
0833697a +0xe20:  mov    0x8(%ebp),%eax
0833697d +0xe23:  mov    %eax,(%esp)
08336980 +0xe26:  call   083369c8 <+0xe6e>
08336985 +0xe2b:  leave
08336986 +0xe2c:  ret
08336987 +0xe2d:  nop
08336988 +0xe2e:  push   %ebp
08336989 +0xe2f:  mov    %esp,%ebp
0833698b +0xe31:  mov    0x8(%ebp),%eax
0833698e +0xe34:  pop    %ebp
0833698f +0xe35:  ret
08336990 +0xe36:  push   %ebp
08336991 +0xe37:  mov    %esp,%ebp
08336993 +0xe39:  mov    $0x15555555,%eax
08336998 +0xe3e:  pop    %ebp
08336999 +0xe3f:  ret
0833699a +0xe40:  push   %ebp
0833699b +0xe41:  mov    %esp,%ebp
0833699d +0xe43:  mov    0x8(%ebp),%eax
083369a0 +0xe46:  mov    0xc(%ebp),%edx
083369a3 +0xe49:  mov    %edx,(%eax)
083369a5 +0xe4b:  pop    %ebp
083369a6 +0xe4c:  ret
083369a7 +0xe4d:  push   %ebp
083369a8 +0xe4e:  mov    %esp,%ebp
083369aa +0xe50:  sub    $0x18,%esp
083369ad +0xe53:  mov    0x10(%ebp),%eax
083369b0 +0xe56:  mov    %eax,0x8(%esp)
083369b4 +0xe5a:  mov    0xc(%ebp),%eax
083369b7 +0xe5d:  mov    %eax,0x4(%esp)
083369bb +0xe61:  mov    0x8(%ebp),%eax
083369be +0xe64:  mov    %eax,(%esp)
083369c1 +0xe67:  call   08336a2f <+0xed5>
083369c6 +0xe6c:  leave
083369c7 +0xe6d:  ret
083369c8 +0xe6e:  push   %ebp
083369c9 +0xe6f:  mov    %esp,%ebp
083369cb +0xe71:  push   %ebx
083369cc +0xe72:  sub    $0x24,%esp
083369cf +0xe75:  mov    0xc(%ebp),%edx
083369d2 +0xe78:  mov    0x8(%ebp),%eax
083369d5 +0xe7b:  mov    %edx,%ecx
083369d7 +0xe7d:  sub    %eax,%ecx
083369d9 +0xe7f:  mov    %ecx,%eax
083369db +0xe81:  sar    $0x2,%eax
083369de +0xe84:  imul   $0xaaaaaaab,%eax,%eax
083369e4 +0xe8a:  mov    %eax,-0xc(%ebp)
083369e7 +0xe8d:  jmp    08336a1b <+0xec1>
083369e9 +0xe8f:  subl   $0xc,0x10(%ebp)
083369ed +0xe93:  mov    0x10(%ebp),%ebx
083369f0 +0xe96:  subl   $0xc,0xc(%ebp)
083369f4 +0xe9a:  mov    0xc(%ebp),%eax
083369f7 +0xe9d:  mov    %eax,(%esp)
083369fa +0xea0:  call   083365c3 <+0xa69>
083369ff +0xea5:  cmp    %eax,%ebx
08336a01 +0xea7:  je     08336a17 <+0xebd>
08336a03 +0xea9:  movl   $0xa,0x8(%esp)
08336a0b +0xeb1:  mov    %eax,0x4(%esp)
08336a0f +0xeb5:  mov    %ebx,(%esp)
08336a12 +0xeb8:  call   0807d8a0 <_init+0x198>
08336a17 +0xebd:  subl   $0x1,-0xc(%ebp)
08336a1b +0xec1:  cmpl   $0x0,-0xc(%ebp)
08336a1f +0xec5:  setg   %al
08336a22 +0xec8:  test   %al,%al
08336a24 +0xeca:  jne    083369e9 <+0xe8f>
08336a26 +0xecc:  mov    0x10(%ebp),%eax
08336a29 +0xecf:  add    $0x24,%esp
08336a2c +0xed2:  pop    %ebx
08336a2d +0xed3:  pop    %ebp
08336a2e +0xed4:  ret
08336a2f +0xed5:  push   %ebp
08336a30 +0xed6:  mov    %esp,%ebp
08336a32 +0xed8:  push   %esi
08336a33 +0xed9:  push   %ebx
08336a34 +0xeda:  sub    $0x20,%esp
08336a37 +0xedd:  mov    0x10(%ebp),%eax
08336a3a +0xee0:  mov    %eax,-0xc(%ebp)
08336a3d +0xee3:  jmp    08336a86 <+0xf2c>
08336a3f +0xee5:  lea    0x8(%ebp),%eax
08336a42 +0xee8:  mov    %eax,(%esp)
08336a45 +0xeeb:  call   08336b0e <+0xfb4>
08336a4a +0xef0:  mov    %eax,%ebx
08336a4c +0xef2:  mov    -0xc(%ebp),%eax
08336a4f +0xef5:  mov    %eax,0x4(%esp)
08336a53 +0xef9:  movl   $0xc,(%esp)
08336a5a +0xf00:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08336a5f +0xf05:  mov    %eax,%edx
08336a61 +0xf07:  test   %edx,%edx
08336a63 +0xf09:  je     08336a77 <+0xf1d>
08336a65 +0xf0b:  mov    (%ebx),%edx
08336a67 +0xf0d:  mov    %edx,(%eax)
08336a69 +0xf0f:  mov    0x4(%ebx),%edx
08336a6c +0xf12:  mov    %edx,0x4(%eax)
08336a6f +0xf15:  movzwl 0x8(%ebx),%edx
08336a73 +0xf19:  mov    %dx,0x8(%eax)
08336a77 +0xf1d:  lea    0x8(%ebp),%eax
08336a7a +0xf20:  mov    %eax,(%esp)
08336a7d +0xf23:  call   08336af8 <+0xf9e>
08336a82 +0xf28:  addl   $0xc,-0xc(%ebp)
08336a86 +0xf2c:  lea    0xc(%ebp),%eax
08336a89 +0xf2f:  mov    %eax,0x4(%esp)
08336a8d +0xf33:  lea    0x8(%ebp),%eax
08336a90 +0xf36:  mov    %eax,(%esp)
08336a93 +0xf39:  call   08336ada <+0xf80>
08336a98 +0xf3e:  test   %al,%al
08336a9a +0xf40:  jne    08336a3f <+0xee5>
08336a9c +0xf42:  mov    -0xc(%ebp),%eax
08336a9f +0xf45:  add    $0x20,%esp
08336aa2 +0xf48:  pop    %ebx
08336aa3 +0xf49:  pop    %esi
08336aa4 +0xf4a:  pop    %ebp
08336aa5 +0xf4b:  ret
08336aa6 +0xf4c:  mov    %eax,(%esp)
08336aa9 +0xf4f:  call   08725ce0 <__cxa_begin_catch>
08336aae +0xf54:  mov    -0xc(%ebp),%eax
08336ab1 +0xf57:  mov    %eax,0x4(%esp)
08336ab5 +0xf5b:  mov    0x10(%ebp),%eax
08336ab8 +0xf5e:  mov    %eax,(%esp)
08336abb +0xf61:  call   0833649b <+0x941>
08336ac0 +0xf66:  call   08724be0 <__cxa_rethrow>
08336ac5 +0xf6b:  mov    %edx,%ebx
08336ac7 +0xf6d:  mov    %eax,%esi
08336ac9 +0xf6f:  call   08725c30 <__cxa_end_catch>
08336ace +0xf74:  mov    %esi,%eax
08336ad0 +0xf76:  mov    %ebx,%edx
08336ad2 +0xf78:  mov    %eax,(%esp)
08336ad5 +0xf7b:  call   08ae3750 <_Unwind_Resume>
08336ada +0xf80:  push   %ebp
08336adb +0xf81:  mov    %esp,%ebp
08336add +0xf83:  sub    $0x18,%esp
08336ae0 +0xf86:  mov    0xc(%ebp),%eax
08336ae3 +0xf89:  mov    %eax,0x4(%esp)
08336ae7 +0xf8d:  mov    0x8(%ebp),%eax
08336aea +0xf90:  mov    %eax,(%esp)
08336aed +0xf93:  call   08336b18 <+0xfbe>
08336af2 +0xf98:  xor    $0x1,%eax
08336af5 +0xf9b:  leave
08336af6 +0xf9c:  ret
08336af7 +0xf9d:  nop
08336af8 +0xf9e:  push   %ebp
08336af9 +0xf9f:  mov    %esp,%ebp
08336afb +0xfa1:  mov    0x8(%ebp),%eax
08336afe +0xfa4:  mov    (%eax),%eax
08336b00 +0xfa6:  lea    0xc(%eax),%edx
08336b03 +0xfa9:  mov    0x8(%ebp),%eax
08336b06 +0xfac:  mov    %edx,(%eax)
08336b08 +0xfae:  mov    0x8(%ebp),%eax
08336b0b +0xfb1:  pop    %ebp
08336b0c +0xfb2:  ret
08336b0d +0xfb3:  nop
08336b0e +0xfb4:  push   %ebp
08336b0f +0xfb5:  mov    %esp,%ebp
08336b11 +0xfb7:  mov    0x8(%ebp),%eax
08336b14 +0xfba:  mov    (%eax),%eax
08336b16 +0xfbc:  pop    %ebp
08336b17 +0xfbd:  ret
08336b18 +0xfbe:  push   %ebp
08336b19 +0xfbf:  mov    %esp,%ebp
08336b1b +0xfc1:  push   %ebx
08336b1c +0xfc2:  sub    $0x14,%esp
08336b1f +0xfc5:  mov    0x8(%ebp),%eax
08336b22 +0xfc8:  mov    %eax,(%esp)
08336b25 +0xfcb:  call   08336b42 <+0xfe8>
08336b2a +0xfd0:  mov    %eax,%ebx
08336b2c +0xfd2:  mov    0xc(%ebp),%eax
08336b2f +0xfd5:  mov    %eax,(%esp)
08336b32 +0xfd8:  call   08336b42 <+0xfe8>
08336b37 +0xfdd:  cmp    %eax,%ebx
08336b39 +0xfdf:  sete   %al
08336b3c +0xfe2:  add    $0x14,%esp
08336b3f +0xfe5:  pop    %ebx
08336b40 +0xfe6:  pop    %ebp
08336b41 +0xfe7:  ret
08336b42 +0xfe8:  push   %ebp
08336b43 +0xfe9:  mov    %esp,%ebp
08336b45 +0xfeb:  mov    0x8(%ebp),%eax
08336b48 +0xfee:  mov    (%eax),%eax
08336b4a +0xff0:  pop    %ebp
08336b4b +0xff1:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8335b5a

/* CConditionEventManager::CConditionEventManager() */

void CConditionEventManager::_GLOBAL__I_CConditionEventManager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
