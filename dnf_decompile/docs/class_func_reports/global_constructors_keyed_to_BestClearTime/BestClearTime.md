# BestClearTime

`_GLOBAL__I__ZN13BestClearTimeC2Ev`

`global constructors keyed to BestClearTime::BestClearTime()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to BestClearTime` | `0x080c8ba8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c8ba8  _GLOBAL__I__ZN13BestClearTimeC2Ev
#           global constructors keyed to BestClearTime::BestClearTime()
# range [0x080c8ba8, 0x080c996f]
080c8ba8 +0x000:  push   %ebp
080c8ba9 +0x001:  mov    %esp,%ebp
080c8bab +0x003:  sub    $0x18,%esp
080c8bae +0x006:  movl   $0xffff,0x4(%esp)
080c8bb6 +0x00e:  movl   $0x1,(%esp)
080c8bbd +0x015:  call   080c8b68 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080c8bc2 +0x01a:  leave
080c8bc3 +0x01b:  ret
080c8bc4 +0x01c:  push   %ebp
080c8bc5 +0x01d:  mov    %esp,%ebp
080c8bc7 +0x01f:  mov    0x8(%ebp),%eax
080c8bca +0x022:  movb   $0x1,0x4(%eax)
080c8bce +0x026:  pop    %ebp
080c8bcf +0x027:  ret
080c8bd0 +0x028:  push   %ebp
080c8bd1 +0x029:  mov    %esp,%ebp
080c8bd3 +0x02b:  pop    %ebp
080c8bd4 +0x02c:  ret
080c8bd5 +0x02d:  nop
080c8bd6 +0x02e:  push   %ebp
080c8bd7 +0x02f:  mov    %esp,%ebp
080c8bd9 +0x031:  pop    %ebp
080c8bda +0x032:  ret
080c8bdb +0x033:  nop
080c8bdc +0x034:  push   %ebp
080c8bdd +0x035:  mov    %esp,%ebp
080c8bdf +0x037:  pop    %ebp
080c8be0 +0x038:  ret
080c8be1 +0x039:  nop
080c8be2 +0x03a:  push   %ebp
080c8be3 +0x03b:  mov    %esp,%ebp
080c8be5 +0x03d:  sub    $0x18,%esp
080c8be8 +0x040:  mov    0x8(%ebp),%eax
080c8beb +0x043:  movl   $&_ZTVN13charac_expand5CDataE+0x8,(%eax)
080c8bf1 +0x049:  mov    $0x0,%eax
080c8bf6 +0x04e:  test   %al,%al
080c8bf8 +0x050:  je     080c8c05 <+0x5d>
080c8bfa +0x052:  mov    0x8(%ebp),%eax
080c8bfd +0x055:  mov    %eax,(%esp)
080c8c00 +0x058:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c8c05 +0x05d:  leave
080c8c06 +0x05e:  ret
080c8c07 +0x05f:  nop
080c8c08 +0x060:  push   %ebp
080c8c09 +0x061:  mov    %esp,%ebp
080c8c0b +0x063:  sub    $0x18,%esp
080c8c0e +0x066:  mov    0x8(%ebp),%eax
080c8c11 +0x069:  mov    %eax,(%esp)
080c8c14 +0x06c:  call   080c8be2 <+0x3a>
080c8c19 +0x071:  mov    0x8(%ebp),%eax
080c8c1c +0x074:  mov    %eax,(%esp)
080c8c1f +0x077:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c8c24 +0x07c:  leave
080c8c25 +0x07d:  ret
080c8c26 +0x07e:  push   %ebp
080c8c27 +0x07f:  mov    %esp,%ebp
080c8c29 +0x081:  sub    $0x4,%esp
080c8c2c +0x084:  mov    0x10(%ebp),%eax
080c8c2f +0x087:  mov    %al,-0x4(%ebp)
080c8c32 +0x08a:  mov    0x8(%ebp),%eax
080c8c35 +0x08d:  mov    0xc(%ebp),%edx
080c8c38 +0x090:  mov    %edx,(%eax)
080c8c3a +0x092:  mov    0x8(%ebp),%eax
080c8c3d +0x095:  movzbl -0x4(%ebp),%edx
080c8c41 +0x099:  mov    %dl,0x4(%eax)
080c8c44 +0x09c:  leave
080c8c45 +0x09d:  ret
080c8c46 +0x09e:  push   %ebp
080c8c47 +0x09f:  mov    %esp,%ebp
080c8c49 +0x0a1:  mov    0x8(%ebp),%eax
080c8c4c +0x0a4:  pop    %ebp
080c8c4d +0x0a5:  ret
080c8c4e +0x0a6:  push   %ebp
080c8c4f +0x0a7:  mov    %esp,%ebp
080c8c51 +0x0a9:  mov    0x8(%ebp),%eax
080c8c54 +0x0ac:  pop    %ebp
080c8c55 +0x0ad:  ret
080c8c56 +0x0ae:  push   %ebp
080c8c57 +0x0af:  mov    %esp,%ebp
080c8c59 +0x0b1:  sub    $0x18,%esp
080c8c5c +0x0b4:  mov    0x8(%ebp),%eax
080c8c5f +0x0b7:  mov    (%eax),%eax
080c8c61 +0x0b9:  mov    0xc(%ebp),%edx
080c8c64 +0x0bc:  mov    %edx,0x4(%esp)
080c8c68 +0x0c0:  mov    %eax,(%esp)
080c8c6b +0x0c3:  call   0861c1bc <_ZN6StreamlsEi>  ; Stream::operator<<(int)
080c8c70 +0x0c8:  leave
080c8c71 +0x0c9:  ret
080c8c72 +0x0ca:  push   %ebp
080c8c73 +0x0cb:  mov    %esp,%ebp
080c8c75 +0x0cd:  sub    $0x18,%esp
080c8c78 +0x0d0:  mov    0x8(%ebp),%eax
080c8c7b +0x0d3:  movl   $0x14,0x8(%esp)
080c8c83 +0x0db:  movl   $0x0,0x4(%esp)
080c8c8b +0x0e3:  mov    %eax,(%esp)
080c8c8e +0x0e6:  call   0807dcc0 <_init+0x5b8>
080c8c93 +0x0eb:  leave
080c8c94 +0x0ec:  ret
080c8c95 +0x0ed:  nop
080c8c96 +0x0ee:  push   %ebp
080c8c97 +0x0ef:  mov    %esp,%ebp
080c8c99 +0x0f1:  mov    0x8(%ebp),%eax
080c8c9c +0x0f4:  movzwl 0x704a6(%eax),%eax
080c8ca3 +0x0fb:  cwtl
080c8ca4 +0x0fc:  movzwl %ax,%edx
080c8ca7 +0x0ff:  mov    0x8(%ebp),%eax
080c8caa +0x102:  movzwl 0x704a4(%eax),%eax
080c8cb1 +0x109:  cwtl
080c8cb2 +0x10a:  shl    $0x10,%eax
080c8cb5 +0x10d:  or     %edx,%eax
080c8cb7 +0x10f:  pop    %ebp
080c8cb8 +0x110:  ret
080c8cb9 +0x111:  nop
080c8cba +0x112:  push   %ebp
080c8cbb +0x113:  mov    %esp,%ebp
080c8cbd +0x115:  mov    0x8(%ebp),%eax
080c8cc0 +0x118:  movl   $&_ZTVN13charac_expand5CDataE+0x8,(%eax)
080c8cc6 +0x11e:  pop    %ebp
080c8cc7 +0x11f:  ret
080c8cc8 +0x120:  push   %ebp
080c8cc9 +0x121:  mov    %esp,%ebp
080c8ccb +0x123:  sub    $0x18,%esp
080c8cce +0x126:  mov    0x8(%ebp),%eax
080c8cd1 +0x129:  mov    %eax,(%esp)
080c8cd4 +0x12c:  call   080c8d04 <+0x15c>
080c8cd9 +0x131:  leave
080c8cda +0x132:  ret
080c8cdb +0x133:  nop
080c8cdc +0x134:  push   %ebp
080c8cdd +0x135:  mov    %esp,%ebp
080c8cdf +0x137:  sub    $0x18,%esp
080c8ce2 +0x13a:  mov    0x8(%ebp),%eax
080c8ce5 +0x13d:  mov    %eax,(%esp)
080c8ce8 +0x140:  call   080c8f32 <+0x38a>
080c8ced +0x145:  leave
080c8cee +0x146:  ret
080c8cef +0x147:  nop
080c8cf0 +0x148:  push   %ebp
080c8cf1 +0x149:  mov    %esp,%ebp
080c8cf3 +0x14b:  sub    $0x18,%esp
080c8cf6 +0x14e:  mov    0x8(%ebp),%eax
080c8cf9 +0x151:  mov    %eax,(%esp)
080c8cfc +0x154:  call   080c8f46 <+0x39e>
080c8d01 +0x159:  leave
080c8d02 +0x15a:  ret
080c8d03 +0x15b:  nop
080c8d04 +0x15c:  push   %ebp
080c8d05 +0x15d:  mov    %esp,%ebp
080c8d07 +0x15f:  push   %esi
080c8d08 +0x160:  push   %ebx
080c8d09 +0x161:  sub    $0x10,%esp
080c8d0c +0x164:  mov    0x8(%ebp),%eax
080c8d0f +0x167:  mov    %eax,(%esp)
080c8d12 +0x16a:  call   080c8fb0 <+0x408>
080c8d17 +0x16f:  mov    %eax,0x4(%esp)
080c8d1b +0x173:  mov    0x8(%ebp),%eax
080c8d1e +0x176:  mov    %eax,(%esp)
080c8d21 +0x179:  call   080c8f5a <+0x3b2>
080c8d26 +0x17e:  jmp    080c8d43 <+0x19b>
080c8d28 +0x180:  mov    %edx,%ebx
080c8d2a +0x182:  mov    %eax,%esi
080c8d2c +0x184:  mov    0x8(%ebp),%eax
080c8d2f +0x187:  mov    %eax,(%esp)
080c8d32 +0x18a:  call   080c8cf0 <+0x148>
080c8d37 +0x18f:  mov    %esi,%eax
080c8d39 +0x191:  mov    %ebx,%edx
080c8d3b +0x193:  mov    %eax,(%esp)
080c8d3e +0x196:  call   08ae3750 <_Unwind_Resume>
080c8d43 +0x19b:  mov    0x8(%ebp),%eax
080c8d46 +0x19e:  mov    %eax,(%esp)
080c8d49 +0x1a1:  call   080c8cf0 <+0x148>
080c8d4e +0x1a6:  add    $0x10,%esp
080c8d51 +0x1a9:  pop    %ebx
080c8d52 +0x1aa:  pop    %esi
080c8d53 +0x1ab:  pop    %ebp
080c8d54 +0x1ac:  ret
080c8d55 +0x1ad:  nop
080c8d56 +0x1ae:  push   %ebp
080c8d57 +0x1af:  mov    %esp,%ebp
080c8d59 +0x1b1:  sub    $0x18,%esp
080c8d5c +0x1b4:  mov    0x8(%ebp),%eax
080c8d5f +0x1b7:  mov    %eax,(%esp)
080c8d62 +0x1ba:  call   080c8fbc <+0x414>
080c8d67 +0x1bf:  leave
080c8d68 +0x1c0:  ret
080c8d69 +0x1c1:  nop
080c8d6a +0x1c2:  push   %ebp
080c8d6b +0x1c3:  mov    %esp,%ebp
080c8d6d +0x1c5:  sub    $0x18,%esp
080c8d70 +0x1c8:  mov    0x8(%ebp),%eax
080c8d73 +0x1cb:  mov    (%eax),%eax
080c8d75 +0x1cd:  mov    %eax,(%esp)
080c8d78 +0x1d0:  call   080c9032 <+0x48a>
080c8d7d +0x1d5:  leave
080c8d7e +0x1d6:  ret
080c8d7f +0x1d7:  push   %ebp
080c8d80 +0x1d8:  mov    %esp,%ebp
080c8d82 +0x1da:  push   %esi
080c8d83 +0x1db:  push   %ebx
080c8d84 +0x1dc:  sub    $0x10,%esp
080c8d87 +0x1df:  mov    0x8(%ebp),%esi
080c8d8a +0x1e2:  mov    0x10(%ebp),%eax
080c8d8d +0x1e5:  mov    %eax,(%esp)
080c8d90 +0x1e8:  call   080c909c <+0x4f4>
080c8d95 +0x1ed:  mov    %eax,%ebx
080c8d97 +0x1ef:  mov    0xc(%ebp),%eax
080c8d9a +0x1f2:  mov    %eax,(%esp)
080c8d9d +0x1f5:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
080c8da2 +0x1fa:  mov    %ebx,0x8(%esp)
080c8da6 +0x1fe:  mov    %eax,0x4(%esp)
080c8daa +0x202:  mov    %esi,(%esp)
080c8dad +0x205:  call   080c90a4 <+0x4fc>
080c8db2 +0x20a:  mov    %esi,%eax
080c8db4 +0x20c:  add    $0x10,%esp
080c8db7 +0x20f:  pop    %ebx
080c8db8 +0x210:  pop    %esi
080c8db9 +0x211:  pop    %ebp
080c8dba +0x212:  ret    $0x4
080c8dbd +0x215:  nop
080c8dbe +0x216:  push   %ebp
080c8dbf +0x217:  mov    %esp,%ebp
080c8dc1 +0x219:  sub    $0x18,%esp
080c8dc4 +0x21c:  mov    0xc(%ebp),%eax
080c8dc7 +0x21f:  mov    %eax,(%esp)
080c8dca +0x222:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
080c8dcf +0x227:  mov    (%eax),%edx
080c8dd1 +0x229:  mov    0x8(%ebp),%eax
080c8dd4 +0x22c:  mov    %edx,(%eax)
080c8dd6 +0x22e:  mov    0xc(%ebp),%eax
080c8dd9 +0x231:  add    $0x4,%eax
080c8ddc +0x234:  mov    %eax,(%esp)
080c8ddf +0x237:  call   080c90e9 <+0x541>
080c8de4 +0x23c:  mov    0x8(%ebp),%edx
080c8de7 +0x23f:  mov    (%eax),%ecx
080c8de9 +0x241:  mov    %ecx,0x4(%edx)
080c8dec +0x244:  mov    0x4(%eax),%ecx
080c8def +0x247:  mov    %ecx,0x8(%edx)
080c8df2 +0x24a:  mov    0x8(%eax),%ecx
080c8df5 +0x24d:  mov    %ecx,0xc(%edx)
080c8df8 +0x250:  mov    0xc(%eax),%ecx
080c8dfb +0x253:  mov    %ecx,0x10(%edx)
080c8dfe +0x256:  mov    0x10(%eax),%eax
080c8e01 +0x259:  mov    %eax,0x14(%edx)
080c8e04 +0x25c:  leave
080c8e05 +0x25d:  ret
080c8e06 +0x25e:  push   %ebp
080c8e07 +0x25f:  mov    %esp,%ebp
080c8e09 +0x261:  push   %ebx
080c8e0a +0x262:  sub    $0x14,%esp
080c8e0d +0x265:  mov    0x8(%ebp),%ebx
080c8e10 +0x268:  mov    0xc(%ebp),%eax
080c8e13 +0x26b:  mov    0x10(%ebp),%edx
080c8e16 +0x26e:  mov    %edx,0x8(%esp)
080c8e1a +0x272:  mov    %eax,0x4(%esp)
080c8e1e +0x276:  mov    %ebx,(%esp)
080c8e21 +0x279:  call   080c90f2 <+0x54a>
080c8e26 +0x27e:  sub    $0x4,%esp
080c8e29 +0x281:  mov    %ebx,%eax
080c8e2b +0x283:  mov    -0x4(%ebp),%ebx
080c8e2e +0x286:  leave
080c8e2f +0x287:  ret    $0x4
080c8e32 +0x28a:  push   %ebp
080c8e33 +0x28b:  mov    %esp,%ebp
080c8e35 +0x28d:  push   %ebx
080c8e36 +0x28e:  sub    $0x14,%esp
080c8e39 +0x291:  mov    0x8(%ebp),%ebx
080c8e3c +0x294:  mov    0xc(%ebp),%eax
080c8e3f +0x297:  mov    %eax,0x4(%esp)
080c8e43 +0x29b:  mov    %ebx,(%esp)
080c8e46 +0x29e:  call   080c92c2 <+0x71a>
080c8e4b +0x2a3:  sub    $0x4,%esp
080c8e4e +0x2a6:  mov    %ebx,%eax
080c8e50 +0x2a8:  mov    -0x4(%ebp),%ebx
080c8e53 +0x2ab:  leave
080c8e54 +0x2ac:  ret    $0x4
080c8e57 +0x2af:  nop
080c8e58 +0x2b0:  push   %ebp
080c8e59 +0x2b1:  mov    %esp,%ebp
080c8e5b +0x2b3:  push   %ebx
080c8e5c +0x2b4:  sub    $0x14,%esp
080c8e5f +0x2b7:  mov    0x8(%ebp),%ebx
080c8e62 +0x2ba:  mov    0xc(%ebp),%eax
080c8e65 +0x2bd:  mov    %eax,0x4(%esp)
080c8e69 +0x2c1:  mov    %ebx,(%esp)
080c8e6c +0x2c4:  call   080c92e8 <+0x740>
080c8e71 +0x2c9:  sub    $0x4,%esp
080c8e74 +0x2cc:  mov    %ebx,%eax
080c8e76 +0x2ce:  mov    -0x4(%ebp),%ebx
080c8e79 +0x2d1:  leave
080c8e7a +0x2d2:  ret    $0x4
080c8e7d +0x2d5:  nop
080c8e7e +0x2d6:  push   %ebp
080c8e7f +0x2d7:  mov    %esp,%ebp
080c8e81 +0x2d9:  mov    0x8(%ebp),%eax
080c8e84 +0x2dc:  mov    (%eax),%edx
080c8e86 +0x2de:  mov    0xc(%ebp),%eax
080c8e89 +0x2e1:  mov    (%eax),%eax
080c8e8b +0x2e3:  cmp    %eax,%edx
080c8e8d +0x2e5:  setne  %al
080c8e90 +0x2e8:  pop    %ebp
080c8e91 +0x2e9:  ret
080c8e92 +0x2ea:  push   %ebp
080c8e93 +0x2eb:  mov    %esp,%ebp
080c8e95 +0x2ed:  mov    0x8(%ebp),%eax
080c8e98 +0x2f0:  mov    (%eax),%eax
080c8e9a +0x2f2:  add    $0x10,%eax
080c8e9d +0x2f5:  pop    %ebp
080c8e9e +0x2f6:  ret
080c8e9f +0x2f7:  nop
080c8ea0 +0x2f8:  push   %ebp
080c8ea1 +0x2f9:  mov    %esp,%ebp
080c8ea3 +0x2fb:  sub    $0x18,%esp
080c8ea6 +0x2fe:  mov    0x8(%ebp),%eax
080c8ea9 +0x301:  mov    (%eax),%eax
080c8eab +0x303:  mov    %eax,(%esp)
080c8eae +0x306:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
080c8eb3 +0x30b:  mov    0x8(%ebp),%edx
080c8eb6 +0x30e:  mov    %eax,(%edx)
080c8eb8 +0x310:  mov    0x8(%ebp),%eax
080c8ebb +0x313:  leave
080c8ebc +0x314:  ret
080c8ebd +0x315:  nop
080c8ebe +0x316:  push   %ebp
080c8ebf +0x317:  mov    %esp,%ebp
080c8ec1 +0x319:  push   %ebx
080c8ec2 +0x31a:  sub    $0x14,%esp
080c8ec5 +0x31d:  mov    0x8(%ebp),%ebx
080c8ec8 +0x320:  mov    0xc(%ebp),%eax
080c8ecb +0x323:  mov    0x10(%ebp),%edx
080c8ece +0x326:  mov    %edx,0x8(%esp)
080c8ed2 +0x32a:  mov    %eax,0x4(%esp)
080c8ed6 +0x32e:  mov    %ebx,(%esp)
080c8ed9 +0x331:  call   080c930e <+0x766>
080c8ede +0x336:  sub    $0x4,%esp
080c8ee1 +0x339:  mov    %ebx,%eax
080c8ee3 +0x33b:  mov    -0x4(%ebp),%ebx
080c8ee6 +0x33e:  leave
080c8ee7 +0x33f:  ret    $0x4
080c8eea +0x342:  push   %ebp
080c8eeb +0x343:  mov    %esp,%ebp
080c8eed +0x345:  push   %ebx
080c8eee +0x346:  sub    $0x14,%esp
080c8ef1 +0x349:  mov    0x8(%ebp),%ebx
080c8ef4 +0x34c:  mov    0xc(%ebp),%eax
080c8ef7 +0x34f:  mov    %eax,0x4(%esp)
080c8efb +0x353:  mov    %ebx,(%esp)
080c8efe +0x356:  call   080c93cc <+0x824>
080c8f03 +0x35b:  sub    $0x4,%esp
080c8f06 +0x35e:  mov    %ebx,%eax
080c8f08 +0x360:  mov    -0x4(%ebp),%ebx
080c8f0b +0x363:  leave
080c8f0c +0x364:  ret    $0x4
080c8f0f +0x367:  nop
080c8f10 +0x368:  push   %ebp
080c8f11 +0x369:  mov    %esp,%ebp
080c8f13 +0x36b:  mov    0x8(%ebp),%eax
080c8f16 +0x36e:  mov    (%eax),%edx
080c8f18 +0x370:  mov    0xc(%ebp),%eax
080c8f1b +0x373:  mov    (%eax),%eax
080c8f1d +0x375:  cmp    %eax,%edx
080c8f1f +0x377:  sete   %al
080c8f22 +0x37a:  pop    %ebp
080c8f23 +0x37b:  ret
080c8f24 +0x37c:  push   %ebp
080c8f25 +0x37d:  mov    %esp,%ebp
080c8f27 +0x37f:  mov    0x8(%ebp),%eax
080c8f2a +0x382:  mov    (%eax),%eax
080c8f2c +0x384:  add    $0x10,%eax
080c8f2f +0x387:  pop    %ebp
080c8f30 +0x388:  ret
080c8f31 +0x389:  nop
080c8f32 +0x38a:  push   %ebp
080c8f33 +0x38b:  mov    %esp,%ebp
080c8f35 +0x38d:  sub    $0x18,%esp
080c8f38 +0x390:  mov    0x8(%ebp),%eax
080c8f3b +0x393:  mov    %eax,(%esp)
080c8f3e +0x396:  call   080c93f2 <+0x84a>
080c8f43 +0x39b:  leave
080c8f44 +0x39c:  ret
080c8f45 +0x39d:  nop
080c8f46 +0x39e:  push   %ebp
080c8f47 +0x39f:  mov    %esp,%ebp
080c8f49 +0x3a1:  sub    $0x18,%esp
080c8f4c +0x3a4:  mov    0x8(%ebp),%eax
080c8f4f +0x3a7:  mov    %eax,(%esp)
080c8f52 +0x3aa:  call   080c9442 <+0x89a>
080c8f57 +0x3af:  leave
080c8f58 +0x3b0:  ret
080c8f59 +0x3b1:  nop
080c8f5a +0x3b2:  push   %ebp
080c8f5b +0x3b3:  mov    %esp,%ebp
080c8f5d +0x3b5:  sub    $0x28,%esp
080c8f60 +0x3b8:  jmp    080c8fa2 <+0x3fa>
080c8f62 +0x3ba:  mov    0xc(%ebp),%eax
080c8f65 +0x3bd:  mov    %eax,(%esp)
080c8f68 +0x3c0:  call   080c9447 <+0x89f>
080c8f6d +0x3c5:  mov    %eax,0x4(%esp)
080c8f71 +0x3c9:  mov    0x8(%ebp),%eax
080c8f74 +0x3cc:  mov    %eax,(%esp)
080c8f77 +0x3cf:  call   080c8f5a <+0x3b2>
080c8f7c +0x3d4:  mov    0xc(%ebp),%eax
080c8f7f +0x3d7:  mov    %eax,(%esp)
080c8f82 +0x3da:  call   080c9452 <+0x8aa>
080c8f87 +0x3df:  mov    %eax,-0xc(%ebp)
080c8f8a +0x3e2:  mov    0xc(%ebp),%eax
080c8f8d +0x3e5:  mov    %eax,0x4(%esp)
080c8f91 +0x3e9:  mov    0x8(%ebp),%eax
080c8f94 +0x3ec:  mov    %eax,(%esp)
080c8f97 +0x3ef:  call   080c945e <+0x8b6>
080c8f9c +0x3f4:  mov    -0xc(%ebp),%eax
080c8f9f +0x3f7:  mov    %eax,0xc(%ebp)
080c8fa2 +0x3fa:  cmpl   $0x0,0xc(%ebp)
080c8fa6 +0x3fe:  setne  %al
080c8fa9 +0x401:  test   %al,%al
080c8fab +0x403:  jne    080c8f62 <+0x3ba>
080c8fad +0x405:  leave
080c8fae +0x406:  ret
080c8faf +0x407:  nop
080c8fb0 +0x408:  push   %ebp
080c8fb1 +0x409:  mov    %esp,%ebp
080c8fb3 +0x40b:  mov    0x8(%ebp),%eax
080c8fb6 +0x40e:  mov    0x8(%eax),%eax
080c8fb9 +0x411:  pop    %ebp
080c8fba +0x412:  ret
080c8fbb +0x413:  nop
080c8fbc +0x414:  push   %ebp
080c8fbd +0x415:  mov    %esp,%ebp
080c8fbf +0x417:  push   %ebx
080c8fc0 +0x418:  sub    $0x14,%esp
080c8fc3 +0x41b:  mov    0x8(%ebp),%eax
080c8fc6 +0x41e:  mov    %eax,(%esp)
080c8fc9 +0x421:  call   080c8fb0 <+0x408>
080c8fce +0x426:  mov    %eax,0x4(%esp)
080c8fd2 +0x42a:  mov    0x8(%ebp),%eax
080c8fd5 +0x42d:  mov    %eax,(%esp)
080c8fd8 +0x430:  call   080c8f5a <+0x3b2>
080c8fdd +0x435:  mov    0x8(%ebp),%eax
080c8fe0 +0x438:  mov    %eax,(%esp)
080c8fe3 +0x43b:  call   080c949e <+0x8f6>
080c8fe8 +0x440:  mov    %eax,%ebx
080c8fea +0x442:  mov    0x8(%ebp),%eax
080c8fed +0x445:  mov    %eax,(%esp)
080c8ff0 +0x448:  call   080c9492 <+0x8ea>
080c8ff5 +0x44d:  mov    %eax,(%ebx)
080c8ff7 +0x44f:  mov    0x8(%ebp),%eax
080c8ffa +0x452:  mov    %eax,(%esp)
080c8ffd +0x455:  call   080c94aa <+0x902>
080c9002 +0x45a:  movl   $0x0,(%eax)
080c9008 +0x460:  mov    0x8(%ebp),%eax
080c900b +0x463:  mov    %eax,(%esp)
080c900e +0x466:  call   080c94b6 <+0x90e>
080c9013 +0x46b:  mov    %eax,%ebx
080c9015 +0x46d:  mov    0x8(%ebp),%eax
080c9018 +0x470:  mov    %eax,(%esp)
080c901b +0x473:  call   080c9492 <+0x8ea>
080c9020 +0x478:  mov    %eax,(%ebx)
080c9022 +0x47a:  mov    0x8(%ebp),%eax
080c9025 +0x47d:  movl   $0x0,0x14(%eax)
080c902c +0x484:  add    $0x14,%esp
080c902f +0x487:  pop    %ebx
080c9030 +0x488:  pop    %ebp
080c9031 +0x489:  ret
080c9032 +0x48a:  push   %ebp
080c9033 +0x48b:  mov    %esp,%ebp
080c9035 +0x48d:  sub    $0x28,%esp
080c9038 +0x490:  jmp    080c9056 <+0x4ae>
080c903a +0x492:  mov    0x8(%ebp),%eax
080c903d +0x495:  mov    %eax,(%esp)
080c9040 +0x498:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
080c9045 +0x49d:  add    %eax,%eax
080c9047 +0x49f:  mov    %eax,0x4(%esp)
080c904b +0x4a3:  mov    0x8(%ebp),%eax
080c904e +0x4a6:  mov    %eax,(%esp)
080c9051 +0x4a9:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
080c9056 +0x4ae:  movl   $0x5dc8,0x4(%esp)
080c905e +0x4b6:  mov    0x8(%ebp),%eax
080c9061 +0x4b9:  mov    %eax,(%esp)
080c9064 +0x4bc:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
080c9069 +0x4c1:  xor    $0x1,%eax
080c906c +0x4c4:  test   %al,%al
080c906e +0x4c6:  jne    080c903a <+0x492>
080c9070 +0x4c8:  mov    0x8(%ebp),%eax
080c9073 +0x4cb:  mov    0x8(%eax),%eax
080c9076 +0x4ce:  mov    %eax,%edx
080c9078 +0x4d0:  mov    0x8(%ebp),%eax
080c907b +0x4d3:  mov    0xc(%eax),%eax
080c907e +0x4d6:  lea    (%edx,%eax,1),%eax
080c9081 +0x4d9:  mov    %eax,-0xc(%ebp)
080c9084 +0x4dc:  movl   $0x5dc8,0x4(%esp)
080c908c +0x4e4:  mov    0x8(%ebp),%eax
080c908f +0x4e7:  mov    %eax,(%esp)
080c9092 +0x4ea:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
080c9097 +0x4ef:  mov    -0xc(%ebp),%eax
080c909a +0x4f2:  leave
080c909b +0x4f3:  ret
080c909c +0x4f4:  push   %ebp
080c909d +0x4f5:  mov    %esp,%ebp
080c909f +0x4f7:  mov    0x8(%ebp),%eax
080c90a2 +0x4fa:  pop    %ebp
080c90a3 +0x4fb:  ret
080c90a4 +0x4fc:  push   %ebp
080c90a5 +0x4fd:  mov    %esp,%ebp
080c90a7 +0x4ff:  sub    $0x18,%esp
080c90aa +0x502:  mov    0xc(%ebp),%eax
080c90ad +0x505:  mov    %eax,(%esp)
080c90b0 +0x508:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
080c90b5 +0x50d:  mov    (%eax),%edx
080c90b7 +0x50f:  mov    0x8(%ebp),%eax
080c90ba +0x512:  mov    %edx,(%eax)
080c90bc +0x514:  mov    0x10(%ebp),%eax
080c90bf +0x517:  mov    %eax,(%esp)
080c90c2 +0x51a:  call   080c909c <+0x4f4>
080c90c7 +0x51f:  mov    0x8(%ebp),%edx
080c90ca +0x522:  mov    (%eax),%ecx
080c90cc +0x524:  mov    %ecx,0x4(%edx)
080c90cf +0x527:  mov    0x4(%eax),%ecx
080c90d2 +0x52a:  mov    %ecx,0x8(%edx)
080c90d5 +0x52d:  mov    0x8(%eax),%ecx
080c90d8 +0x530:  mov    %ecx,0xc(%edx)
080c90db +0x533:  mov    0xc(%eax),%ecx
080c90de +0x536:  mov    %ecx,0x10(%edx)
080c90e1 +0x539:  mov    0x10(%eax),%eax
080c90e4 +0x53c:  mov    %eax,0x14(%edx)
080c90e7 +0x53f:  leave
080c90e8 +0x540:  ret
080c90e9 +0x541:  push   %ebp
080c90ea +0x542:  mov    %esp,%ebp
080c90ec +0x544:  mov    0x8(%ebp),%eax
080c90ef +0x547:  pop    %ebp
080c90f0 +0x548:  ret
080c90f1 +0x549:  nop
080c90f2 +0x54a:  push   %ebp
080c90f3 +0x54b:  mov    %esp,%ebp
080c90f5 +0x54d:  push   %esi
080c90f6 +0x54e:  push   %ebx
080c90f7 +0x54f:  sub    $0x50,%esp
080c90fa +0x552:  mov    0x8(%ebp),%ebx
080c90fd +0x555:  mov    0xc(%ebp),%eax
080c9100 +0x558:  mov    %eax,(%esp)
080c9103 +0x55b:  call   080c8fb0 <+0x408>
080c9108 +0x560:  mov    %eax,-0x14(%ebp)
080c910b +0x563:  mov    0xc(%ebp),%eax
080c910e +0x566:  mov    %eax,(%esp)
080c9111 +0x569:  call   080c9492 <+0x8ea>
080c9116 +0x56e:  mov    %eax,-0x10(%ebp)
080c9119 +0x571:  movb   $0x1,-0x9(%ebp)
080c911d +0x575:  jmp    080c917b <+0x5d3>
080c911f +0x577:  mov    -0x14(%ebp),%eax
080c9122 +0x57a:  mov    %eax,-0x10(%ebp)
080c9125 +0x57d:  mov    -0x14(%ebp),%eax
080c9128 +0x580:  mov    %eax,(%esp)
080c912b +0x583:  call   080c94ca <+0x922>
080c9130 +0x588:  mov    %eax,%esi
080c9132 +0x58a:  mov    0x10(%ebp),%eax
080c9135 +0x58d:  mov    %eax,0x4(%esp)
080c9139 +0x591:  lea    -0x2d(%ebp),%eax
080c913c +0x594:  mov    %eax,(%esp)
080c913f +0x597:  call   080c94c2 <+0x91a>
080c9144 +0x59c:  mov    0xc(%ebp),%edx
080c9147 +0x59f:  mov    %esi,0x8(%esp)
080c914b +0x5a3:  mov    %eax,0x4(%esp)
080c914f +0x5a7:  mov    %edx,(%esp)
080c9152 +0x5aa:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080c9157 +0x5af:  mov    %al,-0x9(%ebp)
080c915a +0x5b2:  cmpb   $0x0,-0x9(%ebp)
080c915e +0x5b6:  je     080c916d <+0x5c5>
080c9160 +0x5b8:  mov    -0x14(%ebp),%eax
080c9163 +0x5bb:  mov    %eax,(%esp)
080c9166 +0x5be:  call   080c9452 <+0x8aa>
080c916b +0x5c3:  jmp    080c9178 <+0x5d0>
080c916d +0x5c5:  mov    -0x14(%ebp),%eax
080c9170 +0x5c8:  mov    %eax,(%esp)
080c9173 +0x5cb:  call   080c9447 <+0x89f>
080c9178 +0x5d0:  mov    %eax,-0x14(%ebp)
080c917b +0x5d3:  cmpl   $0x0,-0x14(%ebp)
080c917f +0x5d7:  setne  %al
080c9182 +0x5da:  test   %al,%al
080c9184 +0x5dc:  jne    080c911f <+0x577>
080c9186 +0x5de:  mov    -0x10(%ebp),%eax
080c9189 +0x5e1:  mov    %eax,0x4(%esp)
080c918d +0x5e5:  lea    -0x34(%ebp),%eax
080c9190 +0x5e8:  mov    %eax,(%esp)
080c9193 +0x5eb:  call   080c94ec <+0x944>
080c9198 +0x5f0:  cmpb   $0x0,-0x9(%ebp)
080c919c +0x5f4:  je     080c921d <+0x675>
080c919e +0x5f6:  lea    -0x2c(%ebp),%eax
080c91a1 +0x5f9:  mov    0xc(%ebp),%edx
080c91a4 +0x5fc:  mov    %edx,0x4(%esp)
080c91a8 +0x600:  mov    %eax,(%esp)
080c91ab +0x603:  call   080c94fa <+0x952>
080c91b0 +0x608:  sub    $0x4,%esp
080c91b3 +0x60b:  lea    -0x2c(%ebp),%eax
080c91b6 +0x60e:  mov    %eax,0x4(%esp)
080c91ba +0x612:  lea    -0x34(%ebp),%eax
080c91bd +0x615:  mov    %eax,(%esp)
080c91c0 +0x618:  call   080c8f10 <+0x368>
080c91c5 +0x61d:  test   %al,%al
080c91c7 +0x61f:  je     080c9212 <+0x66a>
080c91c9 +0x621:  movb   $0x1,-0x25(%ebp)
080c91cd +0x625:  mov    -0x10(%ebp),%ecx
080c91d0 +0x628:  mov    -0x14(%ebp),%edx
080c91d3 +0x62b:  lea    -0x24(%ebp),%eax
080c91d6 +0x62e:  mov    0x10(%ebp),%esi
080c91d9 +0x631:  mov    %esi,0x10(%esp)
080c91dd +0x635:  mov    %ecx,0xc(%esp)
080c91e1 +0x639:  mov    %edx,0x8(%esp)
080c91e5 +0x63d:  mov    0xc(%ebp),%edx
080c91e8 +0x640:  mov    %edx,0x4(%esp)
080c91ec +0x644:  mov    %eax,(%esp)
080c91ef +0x647:  call   080c9520 <+0x978>
080c91f4 +0x64c:  sub    $0x4,%esp
080c91f7 +0x64f:  lea    -0x25(%ebp),%eax
080c91fa +0x652:  mov    %eax,0x8(%esp)
080c91fe +0x656:  lea    -0x24(%ebp),%eax
080c9201 +0x659:  mov    %eax,0x4(%esp)
080c9205 +0x65d:  mov    %ebx,(%esp)
080c9208 +0x660:  call   080c95e8 <+0xa40>
080c920d +0x665:  jmp    080c92b3 <+0x70b>
080c9212 +0x66a:  lea    -0x34(%ebp),%eax
080c9215 +0x66d:  mov    %eax,(%esp)
080c9218 +0x670:  call   080c9616 <+0xa6e>
080c921d +0x675:  mov    0x10(%ebp),%eax
080c9220 +0x678:  mov    %eax,0x4(%esp)
080c9224 +0x67c:  lea    -0x1e(%ebp),%eax
080c9227 +0x67f:  mov    %eax,(%esp)
080c922a +0x682:  call   080c94c2 <+0x91a>
080c922f +0x687:  mov    %eax,%esi
080c9231 +0x689:  mov    -0x34(%ebp),%eax
080c9234 +0x68c:  mov    %eax,(%esp)
080c9237 +0x68f:  call   080c9633 <+0xa8b>
080c923c +0x694:  mov    0xc(%ebp),%edx
080c923f +0x697:  mov    %esi,0x8(%esp)
080c9243 +0x69b:  mov    %eax,0x4(%esp)
080c9247 +0x69f:  mov    %edx,(%esp)
080c924a +0x6a2:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080c924f +0x6a7:  test   %al,%al
080c9251 +0x6a9:  je     080c9299 <+0x6f1>
080c9253 +0x6ab:  movb   $0x1,-0x1d(%ebp)
080c9257 +0x6af:  mov    -0x10(%ebp),%ecx
080c925a +0x6b2:  mov    -0x14(%ebp),%edx
080c925d +0x6b5:  lea    -0x1c(%ebp),%eax
080c9260 +0x6b8:  mov    0x10(%ebp),%esi
080c9263 +0x6bb:  mov    %esi,0x10(%esp)
080c9267 +0x6bf:  mov    %ecx,0xc(%esp)
080c926b +0x6c3:  mov    %edx,0x8(%esp)
080c926f +0x6c7:  mov    0xc(%ebp),%edx
080c9272 +0x6ca:  mov    %edx,0x4(%esp)
080c9276 +0x6ce:  mov    %eax,(%esp)
080c9279 +0x6d1:  call   080c9520 <+0x978>
080c927e +0x6d6:  sub    $0x4,%esp
080c9281 +0x6d9:  lea    -0x1d(%ebp),%eax
080c9284 +0x6dc:  mov    %eax,0x8(%esp)
080c9288 +0x6e0:  lea    -0x1c(%ebp),%eax
080c928b +0x6e3:  mov    %eax,0x4(%esp)
080c928f +0x6e7:  mov    %ebx,(%esp)
080c9292 +0x6ea:  call   080c95e8 <+0xa40>
080c9297 +0x6ef:  jmp    080c92b3 <+0x70b>
080c9299 +0x6f1:  movb   $0x0,-0x15(%ebp)
080c929d +0x6f5:  lea    -0x15(%ebp),%eax
080c92a0 +0x6f8:  mov    %eax,0x8(%esp)
080c92a4 +0x6fc:  lea    -0x34(%ebp),%eax
080c92a7 +0x6ff:  mov    %eax,0x4(%esp)
080c92ab +0x703:  mov    %ebx,(%esp)
080c92ae +0x706:  call   080c9656 <+0xaae>
080c92b3 +0x70b:  mov    %ebx,%eax
080c92b5 +0x70d:  lea    -0x8(%ebp),%esp
080c92b8 +0x710:  add    $0x0,%esp
080c92bb +0x713:  pop    %ebx
080c92bc +0x714:  pop    %esi
080c92bd +0x715:  pop    %ebp
080c92be +0x716:  ret    $0x4
080c92c1 +0x719:  nop
080c92c2 +0x71a:  push   %ebp
080c92c3 +0x71b:  mov    %esp,%ebp
080c92c5 +0x71d:  push   %ebx
080c92c6 +0x71e:  sub    $0x14,%esp
080c92c9 +0x721:  mov    0x8(%ebp),%ebx
080c92cc +0x724:  mov    0xc(%ebp),%eax
080c92cf +0x727:  mov    0xc(%eax),%eax
080c92d2 +0x72a:  mov    %eax,0x4(%esp)
080c92d6 +0x72e:  mov    %ebx,(%esp)
080c92d9 +0x731:  call   080c9684 <+0xadc>
080c92de +0x736:  mov    %ebx,%eax
080c92e0 +0x738:  add    $0x14,%esp
080c92e3 +0x73b:  pop    %ebx
080c92e4 +0x73c:  pop    %ebp
080c92e5 +0x73d:  ret    $0x4
080c92e8 +0x740:  push   %ebp
080c92e9 +0x741:  mov    %esp,%ebp
080c92eb +0x743:  push   %ebx
080c92ec +0x744:  sub    $0x14,%esp
080c92ef +0x747:  mov    0x8(%ebp),%ebx
080c92f2 +0x74a:  mov    0xc(%ebp),%eax
080c92f5 +0x74d:  add    $0x4,%eax
080c92f8 +0x750:  mov    %eax,0x4(%esp)
080c92fc +0x754:  mov    %ebx,(%esp)
080c92ff +0x757:  call   080c9684 <+0xadc>
080c9304 +0x75c:  mov    %ebx,%eax
080c9306 +0x75e:  add    $0x14,%esp
080c9309 +0x761:  pop    %ebx
080c930a +0x762:  pop    %ebp
080c930b +0x763:  ret    $0x4
080c930e +0x766:  push   %ebp
080c930f +0x767:  mov    %esp,%ebp
080c9311 +0x769:  push   %esi
080c9312 +0x76a:  push   %ebx
080c9313 +0x76b:  sub    $0x30,%esp
080c9316 +0x76e:  mov    0x8(%ebp),%ebx
080c9319 +0x771:  mov    0xc(%ebp),%eax
080c931c +0x774:  mov    %eax,(%esp)
080c931f +0x777:  call   080c9492 <+0x8ea>
080c9324 +0x77c:  mov    %eax,%esi
080c9326 +0x77e:  mov    0xc(%ebp),%eax
080c9329 +0x781:  mov    %eax,(%esp)
080c932c +0x784:  call   080c8fb0 <+0x408>
080c9331 +0x789:  lea    -0x10(%ebp),%edx
080c9334 +0x78c:  mov    0x10(%ebp),%ecx
080c9337 +0x78f:  mov    %ecx,0x10(%esp)
080c933b +0x793:  mov    %esi,0xc(%esp)
080c933f +0x797:  mov    %eax,0x8(%esp)
080c9343 +0x79b:  mov    0xc(%ebp),%eax
080c9346 +0x79e:  mov    %eax,0x4(%esp)
080c934a +0x7a2:  mov    %edx,(%esp)
080c934d +0x7a5:  call   080c9692 <+0xaea>
080c9352 +0x7aa:  sub    $0x4,%esp
080c9355 +0x7ad:  lea    -0xc(%ebp),%eax
080c9358 +0x7b0:  mov    0xc(%ebp),%edx
080c935b +0x7b3:  mov    %edx,0x4(%esp)
080c935f +0x7b7:  mov    %eax,(%esp)
080c9362 +0x7ba:  call   080c93cc <+0x824>
080c9367 +0x7bf:  sub    $0x4,%esp
080c936a +0x7c2:  lea    -0xc(%ebp),%eax
080c936d +0x7c5:  mov    %eax,0x4(%esp)
080c9371 +0x7c9:  lea    -0x10(%ebp),%eax
080c9374 +0x7cc:  mov    %eax,(%esp)
080c9377 +0x7cf:  call   080c8f10 <+0x368>
080c937c +0x7d4:  test   %al,%al
080c937e +0x7d6:  jne    080c93a5 <+0x7fd>
080c9380 +0x7d8:  mov    -0x10(%ebp),%eax
080c9383 +0x7db:  mov    %eax,(%esp)
080c9386 +0x7de:  call   080c9633 <+0xa8b>
080c938b +0x7e3:  mov    0xc(%ebp),%edx
080c938e +0x7e6:  mov    %eax,0x8(%esp)
080c9392 +0x7ea:  mov    0x10(%ebp),%eax
080c9395 +0x7ed:  mov    %eax,0x4(%esp)
080c9399 +0x7f1:  mov    %edx,(%esp)
080c939c +0x7f4:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080c93a1 +0x7f9:  test   %al,%al
080c93a3 +0x7fb:  je     080c93b9 <+0x811>
080c93a5 +0x7fd:  mov    0xc(%ebp),%eax
080c93a8 +0x800:  mov    %eax,0x4(%esp)
080c93ac +0x804:  mov    %ebx,(%esp)
080c93af +0x807:  call   080c93cc <+0x824>
080c93b4 +0x80c:  sub    $0x4,%esp
080c93b7 +0x80f:  jmp    080c93be <+0x816>
080c93b9 +0x811:  mov    -0x10(%ebp),%eax
080c93bc +0x814:  mov    %eax,(%ebx)
080c93be +0x816:  mov    %ebx,%eax
080c93c0 +0x818:  lea    -0x8(%ebp),%esp
080c93c3 +0x81b:  add    $0x0,%esp
080c93c6 +0x81e:  pop    %ebx
080c93c7 +0x81f:  pop    %esi
080c93c8 +0x820:  pop    %ebp
080c93c9 +0x821:  ret    $0x4
080c93cc +0x824:  push   %ebp
080c93cd +0x825:  mov    %esp,%ebp
080c93cf +0x827:  push   %ebx
080c93d0 +0x828:  sub    $0x14,%esp
080c93d3 +0x82b:  mov    0x8(%ebp),%ebx
080c93d6 +0x82e:  mov    0xc(%ebp),%eax
080c93d9 +0x831:  add    $0x4,%eax
080c93dc +0x834:  mov    %eax,0x4(%esp)
080c93e0 +0x838:  mov    %ebx,(%esp)
080c93e3 +0x83b:  call   080c94ec <+0x944>
080c93e8 +0x840:  mov    %ebx,%eax
080c93ea +0x842:  add    $0x14,%esp
080c93ed +0x845:  pop    %ebx
080c93ee +0x846:  pop    %ebp
080c93ef +0x847:  ret    $0x4
080c93f2 +0x84a:  push   %ebp
080c93f3 +0x84b:  mov    %esp,%ebp
080c93f5 +0x84d:  sub    $0x18,%esp
080c93f8 +0x850:  mov    0x8(%ebp),%eax
080c93fb +0x853:  mov    %eax,(%esp)
080c93fe +0x856:  call   080c970e <+0xb66>
080c9403 +0x85b:  mov    0x8(%ebp),%eax
080c9406 +0x85e:  movl   $0x0,0x4(%eax)
080c940d +0x865:  mov    0x8(%ebp),%eax
080c9410 +0x868:  movl   $0x0,0x8(%eax)
080c9417 +0x86f:  mov    0x8(%ebp),%eax
080c941a +0x872:  movl   $0x0,0xc(%eax)
080c9421 +0x879:  mov    0x8(%ebp),%eax
080c9424 +0x87c:  movl   $0x0,0x10(%eax)
080c942b +0x883:  mov    0x8(%ebp),%eax
080c942e +0x886:  movl   $0x0,0x14(%eax)
080c9435 +0x88d:  mov    0x8(%ebp),%eax
080c9438 +0x890:  mov    %eax,(%esp)
080c943b +0x893:  call   080c9722 <+0xb7a>
080c9440 +0x898:  leave
080c9441 +0x899:  ret
080c9442 +0x89a:  push   %ebp
080c9443 +0x89b:  mov    %esp,%ebp
080c9445 +0x89d:  pop    %ebp
080c9446 +0x89e:  ret
080c9447 +0x89f:  push   %ebp
080c9448 +0x8a0:  mov    %esp,%ebp
080c944a +0x8a2:  mov    0x8(%ebp),%eax
080c944d +0x8a5:  mov    0xc(%eax),%eax
080c9450 +0x8a8:  pop    %ebp
080c9451 +0x8a9:  ret
080c9452 +0x8aa:  push   %ebp
080c9453 +0x8ab:  mov    %esp,%ebp
080c9455 +0x8ad:  mov    0x8(%ebp),%eax
080c9458 +0x8b0:  mov    0x8(%eax),%eax
080c945b +0x8b3:  pop    %ebp
080c945c +0x8b4:  ret
080c945d +0x8b5:  nop
080c945e +0x8b6:  push   %ebp
080c945f +0x8b7:  mov    %esp,%ebp
080c9461 +0x8b9:  sub    $0x18,%esp
080c9464 +0x8bc:  mov    0x8(%ebp),%eax
080c9467 +0x8bf:  mov    %eax,(%esp)
080c946a +0x8c2:  call   080c9754 <+0xbac>
080c946f +0x8c7:  mov    0xc(%ebp),%edx
080c9472 +0x8ca:  mov    %edx,0x4(%esp)
080c9476 +0x8ce:  mov    %eax,(%esp)
080c9479 +0x8d1:  call   080c9762 <+0xbba>
080c947e +0x8d6:  mov    0xc(%ebp),%eax
080c9481 +0x8d9:  mov    %eax,0x4(%esp)
080c9485 +0x8dd:  mov    0x8(%ebp),%eax
080c9488 +0x8e0:  mov    %eax,(%esp)
080c948b +0x8e3:  call   080c9776 <+0xbce>
080c9490 +0x8e8:  leave
080c9491 +0x8e9:  ret
080c9492 +0x8ea:  push   %ebp
080c9493 +0x8eb:  mov    %esp,%ebp
080c9495 +0x8ed:  mov    0x8(%ebp),%eax
080c9498 +0x8f0:  add    $0x4,%eax
080c949b +0x8f3:  pop    %ebp
080c949c +0x8f4:  ret
080c949d +0x8f5:  nop
080c949e +0x8f6:  push   %ebp
080c949f +0x8f7:  mov    %esp,%ebp
080c94a1 +0x8f9:  mov    0x8(%ebp),%eax
080c94a4 +0x8fc:  add    $0xc,%eax
080c94a7 +0x8ff:  pop    %ebp
080c94a8 +0x900:  ret
080c94a9 +0x901:  nop
080c94aa +0x902:  push   %ebp
080c94ab +0x903:  mov    %esp,%ebp
080c94ad +0x905:  mov    0x8(%ebp),%eax
080c94b0 +0x908:  add    $0x8,%eax
080c94b3 +0x90b:  pop    %ebp
080c94b4 +0x90c:  ret
080c94b5 +0x90d:  nop
080c94b6 +0x90e:  push   %ebp
080c94b7 +0x90f:  mov    %esp,%ebp
080c94b9 +0x911:  mov    0x8(%ebp),%eax
080c94bc +0x914:  add    $0x10,%eax
080c94bf +0x917:  pop    %ebp
080c94c0 +0x918:  ret
080c94c1 +0x919:  nop
080c94c2 +0x91a:  push   %ebp
080c94c3 +0x91b:  mov    %esp,%ebp
080c94c5 +0x91d:  mov    0xc(%ebp),%eax
080c94c8 +0x920:  pop    %ebp
080c94c9 +0x921:  ret
080c94ca +0x922:  push   %ebp
080c94cb +0x923:  mov    %esp,%ebp
080c94cd +0x925:  sub    $0x28,%esp
080c94d0 +0x928:  mov    0x8(%ebp),%eax
080c94d3 +0x92b:  mov    %eax,(%esp)
080c94d6 +0x92e:  call   080c9798 <+0xbf0>
080c94db +0x933:  mov    %eax,0x4(%esp)
080c94df +0x937:  lea    -0x9(%ebp),%eax
080c94e2 +0x93a:  mov    %eax,(%esp)
080c94e5 +0x93d:  call   080c94c2 <+0x91a>
080c94ea +0x942:  leave
080c94eb +0x943:  ret
080c94ec +0x944:  push   %ebp
080c94ed +0x945:  mov    %esp,%ebp
080c94ef +0x947:  mov    0xc(%ebp),%edx
080c94f2 +0x94a:  mov    0x8(%ebp),%eax
080c94f5 +0x94d:  mov    %edx,(%eax)
080c94f7 +0x94f:  pop    %ebp
080c94f8 +0x950:  ret
080c94f9 +0x951:  nop
080c94fa +0x952:  push   %ebp
080c94fb +0x953:  mov    %esp,%ebp
080c94fd +0x955:  push   %ebx
080c94fe +0x956:  sub    $0x14,%esp
080c9501 +0x959:  mov    0x8(%ebp),%ebx
080c9504 +0x95c:  mov    0xc(%ebp),%eax
080c9507 +0x95f:  mov    0xc(%eax),%eax
080c950a +0x962:  mov    %eax,0x4(%esp)
080c950e +0x966:  mov    %ebx,(%esp)
080c9511 +0x969:  call   080c94ec <+0x944>
080c9516 +0x96e:  mov    %ebx,%eax
080c9518 +0x970:  add    $0x14,%esp
080c951b +0x973:  pop    %ebx
080c951c +0x974:  pop    %ebp
080c951d +0x975:  ret    $0x4
080c9520 +0x978:  push   %ebp
080c9521 +0x979:  mov    %esp,%ebp
080c9523 +0x97b:  push   %esi
080c9524 +0x97c:  push   %ebx
080c9525 +0x97d:  sub    $0x20,%esp
080c9528 +0x980:  mov    0x8(%ebp),%esi
080c952b +0x983:  cmpl   $0x0,0x10(%ebp)
080c952f +0x987:  jne    080c9577 <+0x9cf>
080c9531 +0x989:  mov    0xc(%ebp),%eax
080c9534 +0x98c:  mov    %eax,(%esp)
080c9537 +0x98f:  call   080c9492 <+0x8ea>
080c953c +0x994:  cmp    0x14(%ebp),%eax
080c953f +0x997:  je     080c9577 <+0x9cf>
080c9541 +0x999:  mov    0x14(%ebp),%eax
080c9544 +0x99c:  mov    %eax,(%esp)
080c9547 +0x99f:  call   080c9633 <+0xa8b>
080c954c +0x9a4:  mov    %eax,%ebx
080c954e +0x9a6:  mov    0x18(%ebp),%eax
080c9551 +0x9a9:  mov    %eax,0x4(%esp)
080c9555 +0x9ad:  lea    -0xe(%ebp),%eax
080c9558 +0x9b0:  mov    %eax,(%esp)
080c955b +0x9b3:  call   080c94c2 <+0x91a>
080c9560 +0x9b8:  mov    0xc(%ebp),%edx
080c9563 +0x9bb:  mov    %ebx,0x8(%esp)
080c9567 +0x9bf:  mov    %eax,0x4(%esp)
080c956b +0x9c3:  mov    %edx,(%esp)
080c956e +0x9c6:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080c9573 +0x9cb:  test   %al,%al
080c9575 +0x9cd:  je     080c957e <+0x9d6>
080c9577 +0x9cf:  mov    $0x1,%eax
080c957c +0x9d4:  jmp    080c9583 <+0x9db>
080c957e +0x9d6:  mov    $0x0,%eax
080c9583 +0x9db:  mov    %al,-0xd(%ebp)
080c9586 +0x9de:  mov    0x18(%ebp),%eax
080c9589 +0x9e1:  mov    %eax,0x4(%esp)
080c958d +0x9e5:  mov    0xc(%ebp),%eax
080c9590 +0x9e8:  mov    %eax,(%esp)
080c9593 +0x9eb:  call   080c97a4 <+0xbfc>
080c9598 +0x9f0:  mov    %eax,-0xc(%ebp)
080c959b +0x9f3:  mov    0xc(%ebp),%eax
080c959e +0x9f6:  lea    0x4(%eax),%ecx
080c95a1 +0x9f9:  mov    -0xc(%ebp),%edx
080c95a4 +0x9fc:  movzbl -0xd(%ebp),%eax
080c95a8 +0xa00:  mov    %ecx,0xc(%esp)
080c95ac +0xa04:  mov    0x14(%ebp),%ecx
080c95af +0xa07:  mov    %ecx,0x8(%esp)
080c95b3 +0xa0b:  mov    %edx,0x4(%esp)
080c95b7 +0xa0f:  mov    %eax,(%esp)
080c95ba +0xa12:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
080c95bf +0xa17:  mov    0xc(%ebp),%eax
080c95c2 +0xa1a:  mov    0x14(%eax),%eax
080c95c5 +0xa1d:  lea    0x1(%eax),%edx
080c95c8 +0xa20:  mov    0xc(%ebp),%eax
080c95cb +0xa23:  mov    %edx,0x14(%eax)
080c95ce +0xa26:  mov    -0xc(%ebp),%eax
080c95d1 +0xa29:  mov    %eax,0x4(%esp)
080c95d5 +0xa2d:  mov    %esi,(%esp)
080c95d8 +0xa30:  call   080c94ec <+0x944>
080c95dd +0xa35:  mov    %esi,%eax
080c95df +0xa37:  add    $0x20,%esp
080c95e2 +0xa3a:  pop    %ebx
080c95e3 +0xa3b:  pop    %esi
080c95e4 +0xa3c:  pop    %ebp
080c95e5 +0xa3d:  ret    $0x4
080c95e8 +0xa40:  push   %ebp
080c95e9 +0xa41:  mov    %esp,%ebp
080c95eb +0xa43:  sub    $0x18,%esp
080c95ee +0xa46:  mov    0xc(%ebp),%eax
080c95f1 +0xa49:  mov    %eax,(%esp)
080c95f4 +0xa4c:  call   080c9825 <+0xc7d>
080c95f9 +0xa51:  mov    0x8(%ebp),%edx
080c95fc +0xa54:  mov    (%eax),%eax
080c95fe +0xa56:  mov    %eax,(%edx)
080c9600 +0xa58:  mov    0x10(%ebp),%eax
080c9603 +0xa5b:  mov    %eax,(%esp)
080c9606 +0xa5e:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080c960b +0xa63:  movzbl (%eax),%edx
080c960e +0xa66:  mov    0x8(%ebp),%eax
080c9611 +0xa69:  mov    %dl,0x4(%eax)
080c9614 +0xa6c:  leave
080c9615 +0xa6d:  ret
080c9616 +0xa6e:  push   %ebp
080c9617 +0xa6f:  mov    %esp,%ebp
080c9619 +0xa71:  sub    $0x18,%esp
080c961c +0xa74:  mov    0x8(%ebp),%eax
080c961f +0xa77:  mov    (%eax),%eax
080c9621 +0xa79:  mov    %eax,(%esp)
080c9624 +0xa7c:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
080c9629 +0xa81:  mov    0x8(%ebp),%edx
080c962c +0xa84:  mov    %eax,(%edx)
080c962e +0xa86:  mov    0x8(%ebp),%eax
080c9631 +0xa89:  leave
080c9632 +0xa8a:  ret
080c9633 +0xa8b:  push   %ebp
080c9634 +0xa8c:  mov    %esp,%ebp
080c9636 +0xa8e:  sub    $0x28,%esp
080c9639 +0xa91:  mov    0x8(%ebp),%eax
080c963c +0xa94:  mov    %eax,(%esp)
080c963f +0xa97:  call   080c982d <+0xc85>
080c9644 +0xa9c:  mov    %eax,0x4(%esp)
080c9648 +0xaa0:  lea    -0x9(%ebp),%eax
080c964b +0xaa3:  mov    %eax,(%esp)
080c964e +0xaa6:  call   080c94c2 <+0x91a>
080c9653 +0xaab:  leave
080c9654 +0xaac:  ret
080c9655 +0xaad:  nop
080c9656 +0xaae:  push   %ebp
080c9657 +0xaaf:  mov    %esp,%ebp
080c9659 +0xab1:  sub    $0x18,%esp
080c965c +0xab4:  mov    0xc(%ebp),%eax
080c965f +0xab7:  mov    %eax,(%esp)
080c9662 +0xaba:  call   080c9838 <+0xc90>
080c9667 +0xabf:  mov    0x8(%ebp),%edx
080c966a +0xac2:  mov    (%eax),%eax
080c966c +0xac4:  mov    %eax,(%edx)
080c966e +0xac6:  mov    0x10(%ebp),%eax
080c9671 +0xac9:  mov    %eax,(%esp)
080c9674 +0xacc:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
080c9679 +0xad1:  movzbl (%eax),%edx
080c967c +0xad4:  mov    0x8(%ebp),%eax
080c967f +0xad7:  mov    %dl,0x4(%eax)
080c9682 +0xada:  leave
080c9683 +0xadb:  ret
080c9684 +0xadc:  push   %ebp
080c9685 +0xadd:  mov    %esp,%ebp
080c9687 +0xadf:  mov    0xc(%ebp),%edx
080c968a +0xae2:  mov    0x8(%ebp),%eax
080c968d +0xae5:  mov    %edx,(%eax)
080c968f +0xae7:  pop    %ebp
080c9690 +0xae8:  ret
080c9691 +0xae9:  nop
080c9692 +0xaea:  push   %ebp
080c9693 +0xaeb:  mov    %esp,%ebp
080c9695 +0xaed:  push   %ebx
080c9696 +0xaee:  sub    $0x14,%esp
080c9699 +0xaf1:  mov    0x8(%ebp),%ebx
080c969c +0xaf4:  jmp    080c96ea <+0xb42>
080c969e +0xaf6:  mov    0x10(%ebp),%eax
080c96a1 +0xaf9:  mov    %eax,(%esp)
080c96a4 +0xafc:  call   080c94ca <+0x922>
080c96a9 +0xb01:  mov    0xc(%ebp),%edx
080c96ac +0xb04:  mov    0x18(%ebp),%ecx
080c96af +0xb07:  mov    %ecx,0x8(%esp)
080c96b3 +0xb0b:  mov    %eax,0x4(%esp)
080c96b7 +0xb0f:  mov    %edx,(%esp)
080c96ba +0xb12:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080c96bf +0xb17:  xor    $0x1,%eax
080c96c2 +0xb1a:  test   %al,%al
080c96c4 +0xb1c:  je     080c96dc <+0xb34>
080c96c6 +0xb1e:  mov    0x10(%ebp),%eax
080c96c9 +0xb21:  mov    %eax,0x14(%ebp)
080c96cc +0xb24:  mov    0x10(%ebp),%eax
080c96cf +0xb27:  mov    %eax,(%esp)
080c96d2 +0xb2a:  call   080c9452 <+0x8aa>
080c96d7 +0xb2f:  mov    %eax,0x10(%ebp)
080c96da +0xb32:  jmp    080c96ea <+0xb42>
080c96dc +0xb34:  mov    0x10(%ebp),%eax
080c96df +0xb37:  mov    %eax,(%esp)
080c96e2 +0xb3a:  call   080c9447 <+0x89f>
080c96e7 +0xb3f:  mov    %eax,0x10(%ebp)
080c96ea +0xb42:  cmpl   $0x0,0x10(%ebp)
080c96ee +0xb46:  setne  %al
080c96f1 +0xb49:  test   %al,%al
080c96f3 +0xb4b:  jne    080c969e <+0xaf6>
080c96f5 +0xb4d:  mov    0x14(%ebp),%eax
080c96f8 +0xb50:  mov    %eax,0x4(%esp)
080c96fc +0xb54:  mov    %ebx,(%esp)
080c96ff +0xb57:  call   080c94ec <+0x944>
080c9704 +0xb5c:  mov    %ebx,%eax
080c9706 +0xb5e:  add    $0x14,%esp
080c9709 +0xb61:  pop    %ebx
080c970a +0xb62:  pop    %ebp
080c970b +0xb63:  ret    $0x4
080c970e +0xb66:  push   %ebp
080c970f +0xb67:  mov    %esp,%ebp
080c9711 +0xb69:  sub    $0x18,%esp
080c9714 +0xb6c:  mov    0x8(%ebp),%eax
080c9717 +0xb6f:  mov    %eax,(%esp)
080c971a +0xb72:  call   080c9840 <+0xc98>
080c971f +0xb77:  leave
080c9720 +0xb78:  ret
080c9721 +0xb79:  nop
080c9722 +0xb7a:  push   %ebp
080c9723 +0xb7b:  mov    %esp,%ebp
080c9725 +0xb7d:  mov    0x8(%ebp),%eax
080c9728 +0xb80:  movl   $0x0,0x4(%eax)
080c972f +0xb87:  mov    0x8(%ebp),%eax
080c9732 +0xb8a:  movl   $0x0,0x8(%eax)
080c9739 +0xb91:  mov    0x8(%ebp),%eax
080c973c +0xb94:  lea    0x4(%eax),%edx
080c973f +0xb97:  mov    0x8(%ebp),%eax
080c9742 +0xb9a:  mov    %edx,0xc(%eax)
080c9745 +0xb9d:  mov    0x8(%ebp),%eax
080c9748 +0xba0:  lea    0x4(%eax),%edx
080c974b +0xba3:  mov    0x8(%ebp),%eax
080c974e +0xba6:  mov    %edx,0x10(%eax)
080c9751 +0xba9:  pop    %ebp
080c9752 +0xbaa:  ret
080c9753 +0xbab:  nop
080c9754 +0xbac:  push   %ebp
080c9755 +0xbad:  mov    %esp,%ebp
080c9757 +0xbaf:  mov    0x8(%ebp),%eax
080c975a +0xbb2:  pop    %ebp
080c975b +0xbb3:  ret
080c975c +0xbb4:  push   %ebp
080c975d +0xbb5:  mov    %esp,%ebp
080c975f +0xbb7:  pop    %ebp
080c9760 +0xbb8:  ret
080c9761 +0xbb9:  nop
080c9762 +0xbba:  push   %ebp
080c9763 +0xbbb:  mov    %esp,%ebp
080c9765 +0xbbd:  sub    $0x18,%esp
080c9768 +0xbc0:  mov    0xc(%ebp),%eax
080c976b +0xbc3:  mov    %eax,(%esp)
080c976e +0xbc6:  call   080c975c <+0xbb4>
080c9773 +0xbcb:  leave
080c9774 +0xbcc:  ret
080c9775 +0xbcd:  nop
080c9776 +0xbce:  push   %ebp
080c9777 +0xbcf:  mov    %esp,%ebp
080c9779 +0xbd1:  sub    $0x18,%esp
080c977c +0xbd4:  mov    0x8(%ebp),%eax
080c977f +0xbd7:  movl   $0x1,0x8(%esp)
080c9787 +0xbdf:  mov    0xc(%ebp),%edx
080c978a +0xbe2:  mov    %edx,0x4(%esp)
080c978e +0xbe6:  mov    %eax,(%esp)
080c9791 +0xbe9:  call   080c9846 <+0xc9e>
080c9796 +0xbee:  leave
080c9797 +0xbef:  ret
080c9798 +0xbf0:  push   %ebp
080c9799 +0xbf1:  mov    %esp,%ebp
080c979b +0xbf3:  mov    0x8(%ebp),%eax
080c979e +0xbf6:  add    $0x10,%eax
080c97a1 +0xbf9:  pop    %ebp
080c97a2 +0xbfa:  ret
080c97a3 +0xbfb:  nop
080c97a4 +0xbfc:  push   %ebp
080c97a5 +0xbfd:  mov    %esp,%ebp
080c97a7 +0xbff:  push   %esi
080c97a8 +0xc00:  push   %ebx
080c97a9 +0xc01:  sub    $0x20,%esp
080c97ac +0xc04:  mov    0x8(%ebp),%eax
080c97af +0xc07:  mov    %eax,(%esp)
080c97b2 +0xc0a:  call   080c985a <+0xcb2>
080c97b7 +0xc0f:  mov    %eax,-0xc(%ebp)
080c97ba +0xc12:  mov    0xc(%ebp),%eax
080c97bd +0xc15:  mov    %eax,(%esp)
080c97c0 +0xc18:  call   080c987d <+0xcd5>
080c97c5 +0xc1d:  mov    %eax,%ebx
080c97c7 +0xc1f:  mov    0x8(%ebp),%eax
080c97ca +0xc22:  mov    %eax,(%esp)
080c97cd +0xc25:  call   080c9754 <+0xbac>
080c97d2 +0xc2a:  mov    %ebx,0x8(%esp)
080c97d6 +0xc2e:  mov    -0xc(%ebp),%edx
080c97d9 +0xc31:  mov    %edx,0x4(%esp)
080c97dd +0xc35:  mov    %eax,(%esp)
080c97e0 +0xc38:  call   080c9886 <+0xcde>
080c97e5 +0xc3d:  jmp    080c981b <+0xc73>
080c97e7 +0xc3f:  mov    %eax,(%esp)
080c97ea +0xc42:  call   08725ce0 <__cxa_begin_catch>
080c97ef +0xc47:  mov    -0xc(%ebp),%eax
080c97f2 +0xc4a:  mov    %eax,0x4(%esp)
080c97f6 +0xc4e:  mov    0x8(%ebp),%eax
080c97f9 +0xc51:  mov    %eax,(%esp)
080c97fc +0xc54:  call   080c9776 <+0xbce>
080c9801 +0xc59:  call   08724be0 <__cxa_rethrow>
080c9806 +0xc5e:  mov    %edx,%ebx
080c9808 +0xc60:  mov    %eax,%esi
080c980a +0xc62:  call   08725c30 <__cxa_end_catch>
080c980f +0xc67:  mov    %esi,%eax
080c9811 +0xc69:  mov    %ebx,%edx
080c9813 +0xc6b:  mov    %eax,(%esp)
080c9816 +0xc6e:  call   08ae3750 <_Unwind_Resume>
080c981b +0xc73:  mov    -0xc(%ebp),%eax
080c981e +0xc76:  add    $0x20,%esp
080c9821 +0xc79:  pop    %ebx
080c9822 +0xc7a:  pop    %esi
080c9823 +0xc7b:  pop    %ebp
080c9824 +0xc7c:  ret
080c9825 +0xc7d:  push   %ebp
080c9826 +0xc7e:  mov    %esp,%ebp
080c9828 +0xc80:  mov    0x8(%ebp),%eax
080c982b +0xc83:  pop    %ebp
080c982c +0xc84:  ret
080c982d +0xc85:  push   %ebp
080c982e +0xc86:  mov    %esp,%ebp
080c9830 +0xc88:  mov    0x8(%ebp),%eax
080c9833 +0xc8b:  add    $0x10,%eax
080c9836 +0xc8e:  pop    %ebp
080c9837 +0xc8f:  ret
080c9838 +0xc90:  push   %ebp
080c9839 +0xc91:  mov    %esp,%ebp
080c983b +0xc93:  mov    0x8(%ebp),%eax
080c983e +0xc96:  pop    %ebp
080c983f +0xc97:  ret
080c9840 +0xc98:  push   %ebp
080c9841 +0xc99:  mov    %esp,%ebp
080c9843 +0xc9b:  pop    %ebp
080c9844 +0xc9c:  ret
080c9845 +0xc9d:  nop
080c9846 +0xc9e:  push   %ebp
080c9847 +0xc9f:  mov    %esp,%ebp
080c9849 +0xca1:  sub    $0x18,%esp
080c984c +0xca4:  mov    0xc(%ebp),%eax
080c984f +0xca7:  mov    %eax,(%esp)
080c9852 +0xcaa:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c9857 +0xcaf:  leave
080c9858 +0xcb0:  ret
080c9859 +0xcb1:  nop
080c985a +0xcb2:  push   %ebp
080c985b +0xcb3:  mov    %esp,%ebp
080c985d +0xcb5:  sub    $0x18,%esp
080c9860 +0xcb8:  mov    0x8(%ebp),%eax
080c9863 +0xcbb:  movl   $0x0,0x8(%esp)
080c986b +0xcc3:  movl   $0x1,0x4(%esp)
080c9873 +0xccb:  mov    %eax,(%esp)
080c9876 +0xcce:  call   080c98c6 <+0xd1e>
080c987b +0xcd3:  leave
080c987c +0xcd4:  ret
080c987d +0xcd5:  push   %ebp
080c987e +0xcd6:  mov    %esp,%ebp
080c9880 +0xcd8:  mov    0x8(%ebp),%eax
080c9883 +0xcdb:  pop    %ebp
080c9884 +0xcdc:  ret
080c9885 +0xcdd:  nop
080c9886 +0xcde:  push   %ebp
080c9887 +0xcdf:  mov    %esp,%ebp
080c9889 +0xce1:  push   %ebx
080c988a +0xce2:  sub    $0x14,%esp
080c988d +0xce5:  mov    0x10(%ebp),%eax
080c9890 +0xce8:  mov    %eax,(%esp)
080c9893 +0xceb:  call   080c987d <+0xcd5>
080c9898 +0xcf0:  mov    %eax,%ebx
080c989a +0xcf2:  mov    0xc(%ebp),%eax
080c989d +0xcf5:  mov    %eax,0x4(%esp)
080c98a1 +0xcf9:  movl   $0x28,(%esp)
080c98a8 +0xd00:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
080c98ad +0xd05:  mov    %eax,%edx
080c98af +0xd07:  test   %edx,%edx
080c98b1 +0xd09:  je     080c98bf <+0xd17>
080c98b3 +0xd0b:  mov    %ebx,0x4(%esp)
080c98b7 +0xd0f:  mov    %eax,(%esp)
080c98ba +0xd12:  call   080c9906 <+0xd5e>
080c98bf +0xd17:  add    $0x14,%esp
080c98c2 +0xd1a:  pop    %ebx
080c98c3 +0xd1b:  pop    %ebp
080c98c4 +0xd1c:  ret
080c98c5 +0xd1d:  nop
080c98c6 +0xd1e:  push   %ebp
080c98c7 +0xd1f:  mov    %esp,%ebp
080c98c9 +0xd21:  sub    $0x18,%esp
080c98cc +0xd24:  mov    0x8(%ebp),%eax
080c98cf +0xd27:  mov    %eax,(%esp)
080c98d2 +0xd2a:  call   080c9966 <+0xdbe>
080c98d7 +0xd2f:  cmp    0xc(%ebp),%eax
080c98da +0xd32:  setb   %al
080c98dd +0xd35:  movzbl %al,%eax
080c98e0 +0xd38:  test   %eax,%eax
080c98e2 +0xd3a:  setne  %al
080c98e5 +0xd3d:  test   %al,%al
080c98e7 +0xd3f:  je     080c98ee <+0xd46>
080c98e9 +0xd41:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
080c98ee +0xd46:  mov    0xc(%ebp),%edx
080c98f1 +0xd49:  mov    %edx,%eax
080c98f3 +0xd4b:  shl    $0x2,%eax
080c98f6 +0xd4e:  add    %edx,%eax
080c98f8 +0xd50:  shl    $0x3,%eax
080c98fb +0xd53:  mov    %eax,(%esp)
080c98fe +0xd56:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080c9903 +0xd5b:  leave
080c9904 +0xd5c:  ret
080c9905 +0xd5d:  nop
080c9906 +0xd5e:  push   %ebp
080c9907 +0xd5f:  mov    %esp,%ebp
080c9909 +0xd61:  sub    $0x18,%esp
080c990c +0xd64:  mov    0x8(%ebp),%eax
080c990f +0xd67:  movl   $0x0,(%eax)
080c9915 +0xd6d:  mov    0x8(%ebp),%eax
080c9918 +0xd70:  movl   $0x0,0x4(%eax)
080c991f +0xd77:  mov    0x8(%ebp),%eax
080c9922 +0xd7a:  movl   $0x0,0x8(%eax)
080c9929 +0xd81:  mov    0x8(%ebp),%eax
080c992c +0xd84:  movl   $0x0,0xc(%eax)
080c9933 +0xd8b:  mov    0xc(%ebp),%eax
080c9936 +0xd8e:  mov    %eax,(%esp)
080c9939 +0xd91:  call   080c987d <+0xcd5>
080c993e +0xd96:  mov    0x8(%ebp),%edx
080c9941 +0xd99:  mov    (%eax),%ecx
080c9943 +0xd9b:  mov    %ecx,0x10(%edx)
080c9946 +0xd9e:  mov    0x4(%eax),%ecx
080c9949 +0xda1:  mov    %ecx,0x14(%edx)
080c994c +0xda4:  mov    0x8(%eax),%ecx
080c994f +0xda7:  mov    %ecx,0x18(%edx)
080c9952 +0xdaa:  mov    0xc(%eax),%ecx
080c9955 +0xdad:  mov    %ecx,0x1c(%edx)
080c9958 +0xdb0:  mov    0x10(%eax),%ecx
080c995b +0xdb3:  mov    %ecx,0x20(%edx)
080c995e +0xdb6:  mov    0x14(%eax),%eax
080c9961 +0xdb9:  mov    %eax,0x24(%edx)
080c9964 +0xdbc:  leave
080c9965 +0xdbd:  ret
080c9966 +0xdbe:  push   %ebp
080c9967 +0xdbf:  mov    %esp,%ebp
080c9969 +0xdc1:  mov    $0x6666666,%eax
080c996e +0xdc6:  pop    %ebp
080c996f +0xdc7:  ret
```

## 反编译 C

```c
// <global>::global @ 0x80c8ba8

/* BestClearTime::BestClearTime() */

void BestClearTime::_GLOBAL__I_BestClearTime(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
