# operator()

`_GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj`

`global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::FnRewardInterface` | `0x08195c40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08195c40  _GLOBAL__I__ZN4ARAD17FnRewardInterfaceclEimsj
#           global constructors keyed to ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int)
# range [0x08195c40, 0x08196ab3]
08195c40 +0x000:  push   %ebp
08195c41 +0x001:  mov    %esp,%ebp
08195c43 +0x003:  sub    $0x18,%esp
08195c46 +0x006:  movl   $0xffff,0x4(%esp)
08195c4e +0x00e:  movl   $0x1,(%esp)
08195c55 +0x015:  call   08195c00 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08195c5a +0x01a:  leave
08195c5b +0x01b:  ret
08195c5c +0x01c:  push   %ebp
08195c5d +0x01d:  mov    %esp,%ebp
08195c5f +0x01f:  sub    $0x18,%esp
08195c62 +0x022:  mov    0x8(%ebp),%eax
08195c65 +0x025:  movl   $&_ZTVN4ARAD24Arad_InterfaceGameScriptE+0x8,(%eax)
08195c6b +0x02b:  mov    0x8(%ebp),%eax
08195c6e +0x02e:  lea    0x4(%eax),%edx
08195c71 +0x031:  mov    0xc(%ebp),%eax
08195c74 +0x034:  mov    %eax,0x4(%esp)
08195c78 +0x038:  mov    %edx,(%esp)
08195c7b +0x03b:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08195c80 +0x040:  leave
08195c81 +0x041:  ret
08195c82 +0x042:  push   %ebp
08195c83 +0x043:  mov    %esp,%ebp
08195c85 +0x045:  sub    $0x18,%esp
08195c88 +0x048:  mov    0x8(%ebp),%eax
08195c8b +0x04b:  movl   $&_ZTVN4ARAD24Arad_InterfaceGameScriptE+0x8,(%eax)
08195c91 +0x051:  mov    0x8(%ebp),%eax
08195c94 +0x054:  add    $0x4,%eax
08195c97 +0x057:  mov    %eax,(%esp)
08195c9a +0x05a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08195c9f +0x05f:  mov    $0x0,%eax
08195ca4 +0x064:  test   %al,%al
08195ca6 +0x066:  je     08195cb3 <+0x73>
08195ca8 +0x068:  mov    0x8(%ebp),%eax
08195cab +0x06b:  mov    %eax,(%esp)
08195cae +0x06e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08195cb3 +0x073:  leave
08195cb4 +0x074:  ret
08195cb5 +0x075:  nop
08195cb6 +0x076:  push   %ebp
08195cb7 +0x077:  mov    %esp,%ebp
08195cb9 +0x079:  sub    $0x18,%esp
08195cbc +0x07c:  mov    0x8(%ebp),%eax
08195cbf +0x07f:  mov    %eax,(%esp)
08195cc2 +0x082:  call   08195c82 <+0x42>
08195cc7 +0x087:  mov    0x8(%ebp),%eax
08195cca +0x08a:  mov    %eax,(%esp)
08195ccd +0x08d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08195cd2 +0x092:  leave
08195cd3 +0x093:  ret
08195cd4 +0x094:  push   %ebp
08195cd5 +0x095:  mov    %esp,%ebp
08195cd7 +0x097:  sub    $0x18,%esp
08195cda +0x09a:  mov    0x8(%ebp),%eax
08195cdd +0x09d:  mov    %eax,(%esp)
08195ce0 +0x0a0:  call   08195ce8 <+0xa8>
08195ce5 +0x0a5:  leave
08195ce6 +0x0a6:  ret
08195ce7 +0x0a7:  nop
08195ce8 +0x0a8:  push   %ebp
08195ce9 +0x0a9:  mov    %esp,%ebp
08195ceb +0x0ab:  sub    $0x28,%esp
08195cee +0x0ae:  movl   $0x0,0x18(%esp)
08195cf6 +0x0b6:  movl   $0x0,0x14(%esp)
08195cfe +0x0be:  movl   $0x0,0x10(%esp)
08195d06 +0x0c6:  movl   $0x0,0xc(%esp)
08195d0e +0x0ce:  movl   $0x0,0x8(%esp)
08195d16 +0x0d6:  movl   $0x0,0x4(%esp)
08195d1e +0x0de:  mov    0x8(%ebp),%eax
08195d21 +0x0e1:  mov    %eax,(%esp)
08195d24 +0x0e4:  call   08195d2c <+0xec>
08195d29 +0x0e9:  leave
08195d2a +0x0ea:  ret
08195d2b +0x0eb:  nop
08195d2c +0x0ec:  push   %ebp
08195d2d +0x0ed:  mov    %esp,%ebp
08195d2f +0x0ef:  sub    $0x4,%esp
08195d32 +0x0f2:  mov    0x1c(%ebp),%eax
08195d35 +0x0f5:  mov    %ax,-0x4(%ebp)
08195d39 +0x0f9:  mov    0x8(%ebp),%eax
08195d3c +0x0fc:  mov    0xc(%ebp),%edx
08195d3f +0x0ff:  mov    %edx,(%eax)
08195d41 +0x101:  mov    0x8(%ebp),%eax
08195d44 +0x104:  mov    0x10(%ebp),%edx
08195d47 +0x107:  mov    %edx,0x4(%eax)
08195d4a +0x10a:  mov    0x8(%ebp),%eax
08195d4d +0x10d:  mov    0x14(%ebp),%edx
08195d50 +0x110:  mov    %edx,0x8(%eax)
08195d53 +0x113:  mov    0x8(%ebp),%eax
08195d56 +0x116:  mov    0x18(%ebp),%edx
08195d59 +0x119:  mov    %edx,0x10(%eax)
08195d5c +0x11c:  mov    0x8(%ebp),%eax
08195d5f +0x11f:  movzwl -0x4(%ebp),%edx
08195d63 +0x123:  mov    %dx,0x14(%eax)
08195d67 +0x127:  mov    0x8(%ebp),%eax
08195d6a +0x12a:  mov    0x20(%ebp),%edx
08195d6d +0x12d:  mov    %edx,0xc(%eax)
08195d70 +0x130:  leave
08195d71 +0x131:  ret
08195d72 +0x132:  push   %ebp
08195d73 +0x133:  mov    %esp,%ebp
08195d75 +0x135:  mov    0x8(%ebp),%eax
08195d78 +0x138:  mov    0xc(%ebp),%edx
08195d7b +0x13b:  mov    %edx,(%eax)
08195d7d +0x13d:  pop    %ebp
08195d7e +0x13e:  ret
08195d7f +0x13f:  nop
08195d80 +0x140:  push   %ebp
08195d81 +0x141:  mov    %esp,%ebp
08195d83 +0x143:  mov    0xc(%ebp),%eax
08195d86 +0x146:  mov    (%eax),%edx
08195d88 +0x148:  mov    0x8(%ebp),%eax
08195d8b +0x14b:  mov    (%eax),%eax
08195d8d +0x14d:  cmp    %eax,%edx
08195d8f +0x14f:  sete   %al
08195d92 +0x152:  pop    %ebp
08195d93 +0x153:  ret
08195d94 +0x154:  push   %ebp
08195d95 +0x155:  mov    %esp,%ebp
08195d97 +0x157:  mov    0x8(%ebp),%eax
08195d9a +0x15a:  mov    0xc(%ebp),%edx
08195d9d +0x15d:  mov    %edx,(%eax)
08195d9f +0x15f:  mov    0x8(%ebp),%eax
08195da2 +0x162:  mov    0x10(%ebp),%edx
08195da5 +0x165:  mov    %edx,0x4(%eax)
08195da8 +0x168:  mov    0x8(%ebp),%eax
08195dab +0x16b:  mov    0x14(%ebp),%edx
08195dae +0x16e:  mov    %edx,0x8(%eax)
08195db1 +0x171:  pop    %ebp
08195db2 +0x172:  ret
08195db3 +0x173:  nop
08195db4 +0x174:  push   %ebp
08195db5 +0x175:  mov    %esp,%ebp
08195db7 +0x177:  mov    0x8(%ebp),%eax
08195dba +0x17a:  mov    (%eax),%edx
08195dbc +0x17c:  mov    0xc(%ebp),%eax
08195dbf +0x17f:  mov    (%eax),%eax
08195dc1 +0x181:  cmp    %eax,%edx
08195dc3 +0x183:  jne    08195dec <+0x1ac>
08195dc5 +0x185:  mov    0x8(%ebp),%eax
08195dc8 +0x188:  mov    0x4(%eax),%edx
08195dcb +0x18b:  mov    0xc(%ebp),%eax
08195dce +0x18e:  mov    0x4(%eax),%eax
08195dd1 +0x191:  cmp    %eax,%edx
08195dd3 +0x193:  jne    08195dec <+0x1ac>
08195dd5 +0x195:  mov    0x8(%ebp),%eax
08195dd8 +0x198:  mov    0x8(%eax),%edx
08195ddb +0x19b:  mov    0xc(%ebp),%eax
08195dde +0x19e:  mov    0x8(%eax),%eax
08195de1 +0x1a1:  cmp    %eax,%edx
08195de3 +0x1a3:  jne    08195dec <+0x1ac>
08195de5 +0x1a5:  mov    $0x1,%eax
08195dea +0x1aa:  jmp    08195df1 <+0x1b1>
08195dec +0x1ac:  mov    $0x0,%eax
08195df1 +0x1b1:  pop    %ebp
08195df2 +0x1b2:  ret
08195df3 +0x1b3:  nop
08195df4 +0x1b4:  push   %ebp
08195df5 +0x1b5:  mov    %esp,%ebp
08195df7 +0x1b7:  sub    $0x18,%esp
08195dfa +0x1ba:  mov    0x8(%ebp),%eax
08195dfd +0x1bd:  mov    %eax,(%esp)
08195e00 +0x1c0:  call   08195f14 <+0x2d4>
08195e05 +0x1c5:  leave
08195e06 +0x1c6:  ret
08195e07 +0x1c7:  nop
08195e08 +0x1c8:  push   %ebp
08195e09 +0x1c9:  mov    %esp,%ebp
08195e0b +0x1cb:  sub    $0x18,%esp
08195e0e +0x1ce:  mov    0x8(%ebp),%eax
08195e11 +0x1d1:  mov    %eax,(%esp)
08195e14 +0x1d4:  call   0819619c <+0x55c>
08195e19 +0x1d9:  leave
08195e1a +0x1da:  ret
08195e1b +0x1db:  nop
08195e1c +0x1dc:  push   %ebp
08195e1d +0x1dd:  mov    %esp,%ebp
08195e1f +0x1df:  push   %esi
08195e20 +0x1e0:  push   %ebx
08195e21 +0x1e1:  sub    $0x10,%esp
08195e24 +0x1e4:  mov    0x8(%ebp),%eax
08195e27 +0x1e7:  mov    %eax,(%esp)
08195e2a +0x1ea:  call   0819621e <+0x5de>
08195e2f +0x1ef:  mov    0x8(%ebp),%edx
08195e32 +0x1f2:  mov    0x4(%edx),%ecx
08195e35 +0x1f5:  mov    0x8(%ebp),%edx
08195e38 +0x1f8:  mov    (%edx),%edx
08195e3a +0x1fa:  mov    %eax,0x8(%esp)
08195e3e +0x1fe:  mov    %ecx,0x4(%esp)
08195e42 +0x202:  mov    %edx,(%esp)
08195e45 +0x205:  call   08196226 <+0x5e6>
08195e4a +0x20a:  jmp    08195e67 <+0x227>
08195e4c +0x20c:  mov    %edx,%ebx
08195e4e +0x20e:  mov    %eax,%esi
08195e50 +0x210:  mov    0x8(%ebp),%eax
08195e53 +0x213:  mov    %eax,(%esp)
08195e56 +0x216:  call   081961b0 <+0x570>
08195e5b +0x21b:  mov    %esi,%eax
08195e5d +0x21d:  mov    %ebx,%edx
08195e5f +0x21f:  mov    %eax,(%esp)
08195e62 +0x222:  call   08ae3750 <_Unwind_Resume>
08195e67 +0x227:  mov    0x8(%ebp),%eax
08195e6a +0x22a:  mov    %eax,(%esp)
08195e6d +0x22d:  call   081961b0 <+0x570>
08195e72 +0x232:  add    $0x10,%esp
08195e75 +0x235:  pop    %ebx
08195e76 +0x236:  pop    %esi
08195e77 +0x237:  pop    %ebp
08195e78 +0x238:  ret
08195e79 +0x239:  nop
08195e7a +0x23a:  push   %ebp
08195e7b +0x23b:  mov    %esp,%ebp
08195e7d +0x23d:  sub    $0x18,%esp
08195e80 +0x240:  mov    0x8(%ebp),%eax
08195e83 +0x243:  mov    %eax,(%esp)
08195e86 +0x246:  call   08196254 <+0x614>
08195e8b +0x24b:  leave
08195e8c +0x24c:  ret
08195e8d +0x24d:  nop
08195e8e +0x24e:  push   %ebp
08195e8f +0x24f:  mov    %esp,%ebp
08195e91 +0x251:  push   %esi
08195e92 +0x252:  push   %ebx
08195e93 +0x253:  sub    $0x10,%esp
08195e96 +0x256:  mov    0x8(%ebp),%eax
08195e99 +0x259:  mov    %eax,(%esp)
08195e9c +0x25c:  call   081962d6 <+0x696>
08195ea1 +0x261:  mov    0x8(%ebp),%edx
08195ea4 +0x264:  mov    0x4(%edx),%ecx
08195ea7 +0x267:  mov    0x8(%ebp),%edx
08195eaa +0x26a:  mov    (%edx),%edx
08195eac +0x26c:  mov    %eax,0x8(%esp)
08195eb0 +0x270:  mov    %ecx,0x4(%esp)
08195eb4 +0x274:  mov    %edx,(%esp)
08195eb7 +0x277:  call   081962de <+0x69e>
08195ebc +0x27c:  jmp    08195ed9 <+0x299>
08195ebe +0x27e:  mov    %edx,%ebx
08195ec0 +0x280:  mov    %eax,%esi
08195ec2 +0x282:  mov    0x8(%ebp),%eax
08195ec5 +0x285:  mov    %eax,(%esp)
08195ec8 +0x288:  call   08196268 <+0x628>
08195ecd +0x28d:  mov    %esi,%eax
08195ecf +0x28f:  mov    %ebx,%edx
08195ed1 +0x291:  mov    %eax,(%esp)
08195ed4 +0x294:  call   08ae3750 <_Unwind_Resume>
08195ed9 +0x299:  mov    0x8(%ebp),%eax
08195edc +0x29c:  mov    %eax,(%esp)
08195edf +0x29f:  call   08196268 <+0x628>
08195ee4 +0x2a4:  add    $0x10,%esp
08195ee7 +0x2a7:  pop    %ebx
08195ee8 +0x2a8:  pop    %esi
08195ee9 +0x2a9:  pop    %ebp
08195eea +0x2aa:  ret
08195eeb +0x2ab:  nop
08195eec +0x2ac:  push   %ebp
08195eed +0x2ad:  mov    %esp,%ebp
08195eef +0x2af:  sub    $0x18,%esp
08195ef2 +0x2b2:  mov    0x8(%ebp),%eax
08195ef5 +0x2b5:  mov    %eax,(%esp)
08195ef8 +0x2b8:  call   081962f8 <+0x6b8>
08195efd +0x2bd:  leave
08195efe +0x2be:  ret
08195eff +0x2bf:  nop
08195f00 +0x2c0:  push   %ebp
08195f01 +0x2c1:  mov    %esp,%ebp
08195f03 +0x2c3:  sub    $0x18,%esp
08195f06 +0x2c6:  mov    0x8(%ebp),%eax
08195f09 +0x2c9:  mov    %eax,(%esp)
08195f0c +0x2cc:  call   08196316 <+0x6d6>
08195f11 +0x2d1:  leave
08195f12 +0x2d2:  ret
08195f13 +0x2d3:  nop
08195f14 +0x2d4:  push   %ebp
08195f15 +0x2d5:  mov    %esp,%ebp
08195f17 +0x2d7:  push   %esi
08195f18 +0x2d8:  push   %ebx
08195f19 +0x2d9:  sub    $0x10,%esp
08195f1c +0x2dc:  mov    0x8(%ebp),%eax
08195f1f +0x2df:  mov    %eax,(%esp)
08195f22 +0x2e2:  call   0819632a <+0x6ea>
08195f27 +0x2e7:  jmp    08195f44 <+0x304>
08195f29 +0x2e9:  mov    %edx,%ebx
08195f2b +0x2eb:  mov    %eax,%esi
08195f2d +0x2ed:  mov    0x8(%ebp),%eax
08195f30 +0x2f0:  mov    %eax,(%esp)
08195f33 +0x2f3:  call   08195f00 <+0x2c0>
08195f38 +0x2f8:  mov    %esi,%eax
08195f3a +0x2fa:  mov    %ebx,%edx
08195f3c +0x2fc:  mov    %eax,(%esp)
08195f3f +0x2ff:  call   08ae3750 <_Unwind_Resume>
08195f44 +0x304:  mov    0x8(%ebp),%eax
08195f47 +0x307:  mov    %eax,(%esp)
08195f4a +0x30a:  call   08195f00 <+0x2c0>
08195f4f +0x30f:  add    $0x10,%esp
08195f52 +0x312:  pop    %ebx
08195f53 +0x313:  pop    %esi
08195f54 +0x314:  pop    %ebp
08195f55 +0x315:  ret
08195f56 +0x316:  push   %ebp
08195f57 +0x317:  mov    %esp,%ebp
08195f59 +0x319:  sub    $0x18,%esp
08195f5c +0x31c:  mov    0x8(%ebp),%eax
08195f5f +0x31f:  mov    (%eax),%eax
08195f61 +0x321:  mov    %eax,0x4(%esp)
08195f65 +0x325:  mov    0x8(%ebp),%eax
08195f68 +0x328:  mov    %eax,(%esp)
08195f6b +0x32b:  call   08196386 <+0x746>
08195f70 +0x330:  leave
08195f71 +0x331:  ret
08195f72 +0x332:  push   %ebp
08195f73 +0x333:  mov    %esp,%ebp
08195f75 +0x335:  push   %ebx
08195f76 +0x336:  sub    $0x14,%esp
08195f79 +0x339:  mov    0x8(%ebp),%ebx
08195f7c +0x33c:  mov    0xc(%ebp),%eax
08195f7f +0x33f:  mov    %eax,0x4(%esp)
08195f83 +0x343:  mov    %ebx,(%esp)
08195f86 +0x346:  call   081963bc <+0x77c>
08195f8b +0x34b:  mov    %ebx,%eax
08195f8d +0x34d:  add    $0x14,%esp
08195f90 +0x350:  pop    %ebx
08195f91 +0x351:  pop    %ebp
08195f92 +0x352:  ret    $0x4
08195f95 +0x355:  nop
08195f96 +0x356:  push   %ebp
08195f97 +0x357:  mov    %esp,%ebp
08195f99 +0x359:  push   %ebx
08195f9a +0x35a:  sub    $0x14,%esp
08195f9d +0x35d:  mov    0x8(%ebp),%ebx
08195fa0 +0x360:  mov    0xc(%ebp),%eax
08195fa3 +0x363:  add    $0x4,%eax
08195fa6 +0x366:  mov    %eax,0x4(%esp)
08195faa +0x36a:  mov    %ebx,(%esp)
08195fad +0x36d:  call   081963bc <+0x77c>
08195fb2 +0x372:  mov    %ebx,%eax
08195fb4 +0x374:  add    $0x14,%esp
08195fb7 +0x377:  pop    %ebx
08195fb8 +0x378:  pop    %ebp
08195fb9 +0x379:  ret    $0x4
08195fbc +0x37c:  push   %ebp
08195fbd +0x37d:  mov    %esp,%ebp
08195fbf +0x37f:  push   %esi
08195fc0 +0x380:  push   %ebx
08195fc1 +0x381:  sub    $0x30,%esp
08195fc4 +0x384:  mov    0x8(%ebp),%ebx
08195fc7 +0x387:  lea    -0x9(%ebp),%eax
08195fca +0x38a:  lea    0xc(%ebp),%edx
08195fcd +0x38d:  mov    %edx,0x4(%esp)
08195fd1 +0x391:  mov    %eax,(%esp)
08195fd4 +0x394:  call   081963cb <+0x78b>
08195fd9 +0x399:  sub    $0x4,%esp
08195fdc +0x39c:  mov    %esi,%eax
08195fde +0x39e:  mov    %al,0x10(%esp)
08195fe2 +0x3a2:  mov    0x14(%ebp),%eax
08195fe5 +0x3a5:  mov    %eax,0xc(%esp)
08195fe9 +0x3a9:  mov    0x10(%ebp),%eax
08195fec +0x3ac:  mov    %eax,0x8(%esp)
08195ff0 +0x3b0:  mov    0xc(%ebp),%eax
08195ff3 +0x3b3:  mov    %eax,0x4(%esp)
08195ff7 +0x3b7:  mov    %ebx,(%esp)
08195ffa +0x3ba:  call   081963d5 <+0x795>
08195fff +0x3bf:  sub    $0x4,%esp
08196002 +0x3c2:  mov    %ebx,%eax
08196004 +0x3c4:  lea    -0x8(%ebp),%esp
08196007 +0x3c7:  add    $0x0,%esp
0819600a +0x3ca:  pop    %ebx
0819600b +0x3cb:  pop    %esi
0819600c +0x3cc:  pop    %ebp
0819600d +0x3cd:  ret    $0x4
08196010 +0x3d0:  push   %ebp
08196011 +0x3d1:  mov    %esp,%ebp
08196013 +0x3d3:  push   %ebx
08196014 +0x3d4:  sub    $0x14,%esp
08196017 +0x3d7:  mov    0x8(%ebp),%eax
0819601a +0x3da:  mov    %eax,(%esp)
0819601d +0x3dd:  call   081965a0 <+0x960>
08196022 +0x3e2:  mov    (%eax),%ebx
08196024 +0x3e4:  mov    0xc(%ebp),%eax
08196027 +0x3e7:  mov    %eax,(%esp)
0819602a +0x3ea:  call   081965a0 <+0x960>
0819602f +0x3ef:  mov    (%eax),%eax
08196031 +0x3f1:  cmp    %eax,%ebx
08196033 +0x3f3:  setne  %al
08196036 +0x3f6:  add    $0x14,%esp
08196039 +0x3f9:  pop    %ebx
0819603a +0x3fa:  pop    %ebp
0819603b +0x3fb:  ret
0819603c +0x3fc:  push   %ebp
0819603d +0x3fd:  mov    %esp,%ebp
0819603f +0x3ff:  mov    0x8(%ebp),%eax
08196042 +0x402:  mov    (%eax),%eax
08196044 +0x404:  pop    %ebp
08196045 +0x405:  ret
08196046 +0x406:  push   %ebp
08196047 +0x407:  mov    %esp,%ebp
08196049 +0x409:  push   %ebx
0819604a +0x40a:  sub    $0x14,%esp
0819604d +0x40d:  mov    0x8(%ebp),%ebx
08196050 +0x410:  mov    0xc(%ebp),%eax
08196053 +0x413:  mov    (%eax),%eax
08196055 +0x415:  mov    %eax,0x4(%esp)
08196059 +0x419:  mov    %ebx,(%esp)
0819605c +0x41c:  call   081965a8 <+0x968>
08196061 +0x421:  mov    %ebx,%eax
08196063 +0x423:  add    $0x14,%esp
08196066 +0x426:  pop    %ebx
08196067 +0x427:  pop    %ebp
08196068 +0x428:  ret    $0x4
0819606b +0x42b:  nop
0819606c +0x42c:  push   %ebp
0819606d +0x42d:  mov    %esp,%ebp
0819606f +0x42f:  push   %ebx
08196070 +0x430:  sub    $0x14,%esp
08196073 +0x433:  mov    0x8(%ebp),%ebx
08196076 +0x436:  mov    0xc(%ebp),%eax
08196079 +0x439:  mov    %eax,0x4(%esp)
0819607d +0x43d:  mov    %ebx,(%esp)
08196080 +0x440:  call   081965a8 <+0x968>
08196085 +0x445:  mov    %ebx,%eax
08196087 +0x447:  add    $0x14,%esp
0819608a +0x44a:  pop    %ebx
0819608b +0x44b:  pop    %ebp
0819608c +0x44c:  ret    $0x4
0819608f +0x44f:  push   %ebp
08196090 +0x450:  mov    %esp,%ebp
08196092 +0x452:  push   %esi
08196093 +0x453:  push   %ebx
08196094 +0x454:  sub    $0x30,%esp
08196097 +0x457:  mov    0x8(%ebp),%ebx
0819609a +0x45a:  lea    -0x9(%ebp),%eax
0819609d +0x45d:  lea    0xc(%ebp),%edx
081960a0 +0x460:  mov    %edx,0x4(%esp)
081960a4 +0x464:  mov    %eax,(%esp)
081960a7 +0x467:  call   081965b5 <+0x975>
081960ac +0x46c:  sub    $0x4,%esp
081960af +0x46f:  mov    %esi,%eax
081960b1 +0x471:  mov    %al,0x10(%esp)
081960b5 +0x475:  mov    0x14(%ebp),%eax
081960b8 +0x478:  mov    %eax,0xc(%esp)
081960bc +0x47c:  mov    0x10(%ebp),%eax
081960bf +0x47f:  mov    %eax,0x8(%esp)
081960c3 +0x483:  mov    0xc(%ebp),%eax
081960c6 +0x486:  mov    %eax,0x4(%esp)
081960ca +0x48a:  mov    %ebx,(%esp)
081960cd +0x48d:  call   081965bf <+0x97f>
081960d2 +0x492:  sub    $0x4,%esp
081960d5 +0x495:  mov    %ebx,%eax
081960d7 +0x497:  lea    -0x8(%ebp),%esp
081960da +0x49a:  add    $0x0,%esp
081960dd +0x49d:  pop    %ebx
081960de +0x49e:  pop    %esi
081960df +0x49f:  pop    %ebp
081960e0 +0x4a0:  ret    $0x4
081960e3 +0x4a3:  nop
081960e4 +0x4a4:  push   %ebp
081960e5 +0x4a5:  mov    %esp,%ebp
081960e7 +0x4a7:  mov    0x8(%ebp),%eax
081960ea +0x4aa:  mov    (%eax),%edx
081960ec +0x4ac:  mov    0xc(%ebp),%eax
081960ef +0x4af:  mov    (%eax),%eax
081960f1 +0x4b1:  cmp    %eax,%edx
081960f3 +0x4b3:  setne  %al
081960f6 +0x4b6:  pop    %ebp
081960f7 +0x4b7:  ret
081960f8 +0x4b8:  push   %ebp
081960f9 +0x4b9:  mov    %esp,%ebp
081960fb +0x4bb:  sub    $0x28,%esp
081960fe +0x4be:  lea    -0xc(%ebp),%eax
08196101 +0x4c1:  mov    0x8(%ebp),%edx
08196104 +0x4c4:  mov    %edx,0x4(%esp)
08196108 +0x4c8:  mov    %eax,(%esp)
0819610b +0x4cb:  call   0819606c <+0x42c>
08196110 +0x4d0:  sub    $0x4,%esp
08196113 +0x4d3:  mov    0xc(%ebp),%eax
08196116 +0x4d6:  mov    %eax,0x8(%esp)
0819611a +0x4da:  mov    -0xc(%ebp),%eax
0819611d +0x4dd:  mov    %eax,0x4(%esp)
08196121 +0x4e1:  mov    0x8(%ebp),%eax
08196124 +0x4e4:  mov    %eax,(%esp)
08196127 +0x4e7:  call   0819662c <+0x9ec>
0819612c +0x4ec:  leave
0819612d +0x4ed:  ret
0819612e +0x4ee:  push   %ebp
0819612f +0x4ef:  mov    %esp,%ebp
08196131 +0x4f1:  mov    0x8(%ebp),%eax
08196134 +0x4f4:  mov    (%eax),%eax
08196136 +0x4f6:  add    $0x8,%eax
08196139 +0x4f9:  pop    %ebp
0819613a +0x4fa:  ret
0819613b +0x4fb:  nop
0819613c +0x4fc:  push   %ebp
0819613d +0x4fd:  mov    %esp,%ebp
0819613f +0x4ff:  mov    0x8(%ebp),%eax
08196142 +0x502:  mov    (%eax),%eax
08196144 +0x504:  mov    (%eax),%edx
08196146 +0x506:  mov    0x8(%ebp),%eax
08196149 +0x509:  mov    %edx,(%eax)
0819614b +0x50b:  mov    0x8(%ebp),%eax
0819614e +0x50e:  pop    %ebp
0819614f +0x50f:  ret
08196150 +0x510:  push   %ebp
08196151 +0x511:  mov    %esp,%ebp
08196153 +0x513:  push   %ebx
08196154 +0x514:  sub    $0x14,%esp
08196157 +0x517:  mov    0x8(%ebp),%ebx
0819615a +0x51a:  mov    0x10(%ebp),%eax
0819615d +0x51d:  mov    (%eax),%eax
0819615f +0x51f:  mov    %eax,0x4(%esp)
08196163 +0x523:  mov    %ebx,(%esp)
08196166 +0x526:  call   081965a8 <+0x968>
0819616b +0x52b:  mov    0x10(%ebp),%eax
0819616e +0x52e:  mov    %eax,0x4(%esp)
08196172 +0x532:  mov    0xc(%ebp),%eax
08196175 +0x535:  mov    %eax,(%esp)
08196178 +0x538:  call   08196664 <+0xa24>
0819617d +0x53d:  mov    %ebx,%eax
0819617f +0x53f:  add    $0x14,%esp
08196182 +0x542:  pop    %ebx
08196183 +0x543:  pop    %ebp
08196184 +0x544:  ret    $0x4
08196187 +0x547:  nop
08196188 +0x548:  push   %ebp
08196189 +0x549:  mov    %esp,%ebp
0819618b +0x54b:  sub    $0x18,%esp
0819618e +0x54e:  mov    0x8(%ebp),%eax
08196191 +0x551:  mov    %eax,(%esp)
08196194 +0x554:  call   081966da <+0xa9a>
08196199 +0x559:  leave
0819619a +0x55a:  ret
0819619b +0x55b:  nop
0819619c +0x55c:  push   %ebp
0819619d +0x55d:  mov    %esp,%ebp
0819619f +0x55f:  sub    $0x18,%esp
081961a2 +0x562:  mov    0x8(%ebp),%eax
081961a5 +0x565:  mov    %eax,(%esp)
081961a8 +0x568:  call   081966aa <+0xa6a>
081961ad +0x56d:  leave
081961ae +0x56e:  ret
081961af +0x56f:  nop
081961b0 +0x570:  push   %ebp
081961b1 +0x571:  mov    %esp,%ebp
081961b3 +0x573:  push   %esi
081961b4 +0x574:  push   %ebx
081961b5 +0x575:  sub    $0x10,%esp
081961b8 +0x578:  mov    0x8(%ebp),%eax
081961bb +0x57b:  mov    0x8(%eax),%eax
081961be +0x57e:  mov    %eax,%edx
081961c0 +0x580:  mov    0x8(%ebp),%eax
081961c3 +0x583:  mov    (%eax),%eax
081961c5 +0x585:  mov    %edx,%ecx
081961c7 +0x587:  sub    %eax,%ecx
081961c9 +0x589:  mov    %ecx,%eax
081961cb +0x58b:  sar    $0x2,%eax
081961ce +0x58e:  imul   $0xaaaaaaab,%eax,%eax
081961d4 +0x594:  mov    %eax,%edx
081961d6 +0x596:  mov    0x8(%ebp),%eax
081961d9 +0x599:  mov    (%eax),%eax
081961db +0x59b:  mov    %edx,0x8(%esp)
081961df +0x59f:  mov    %eax,0x4(%esp)
081961e3 +0x5a3:  mov    0x8(%ebp),%eax
081961e6 +0x5a6:  mov    %eax,(%esp)
081961e9 +0x5a9:  call   081966ee <+0xaae>
081961ee +0x5ae:  jmp    0819620b <+0x5cb>
081961f0 +0x5b0:  mov    %edx,%ebx
081961f2 +0x5b2:  mov    %eax,%esi
081961f4 +0x5b4:  mov    0x8(%ebp),%eax
081961f7 +0x5b7:  mov    %eax,(%esp)
081961fa +0x5ba:  call   08196188 <+0x548>
081961ff +0x5bf:  mov    %esi,%eax
08196201 +0x5c1:  mov    %ebx,%edx
08196203 +0x5c3:  mov    %eax,(%esp)
08196206 +0x5c6:  call   08ae3750 <_Unwind_Resume>
0819620b +0x5cb:  mov    0x8(%ebp),%eax
0819620e +0x5ce:  mov    %eax,(%esp)
08196211 +0x5d1:  call   08196188 <+0x548>
08196216 +0x5d6:  add    $0x10,%esp
08196219 +0x5d9:  pop    %ebx
0819621a +0x5da:  pop    %esi
0819621b +0x5db:  pop    %ebp
0819621c +0x5dc:  ret
0819621d +0x5dd:  nop
0819621e +0x5de:  push   %ebp
0819621f +0x5df:  mov    %esp,%ebp
08196221 +0x5e1:  mov    0x8(%ebp),%eax
08196224 +0x5e4:  pop    %ebp
08196225 +0x5e5:  ret
08196226 +0x5e6:  push   %ebp
08196227 +0x5e7:  mov    %esp,%ebp
08196229 +0x5e9:  sub    $0x18,%esp
0819622c +0x5ec:  mov    0xc(%ebp),%eax
0819622f +0x5ef:  mov    %eax,0x4(%esp)
08196233 +0x5f3:  mov    0x8(%ebp),%eax
08196236 +0x5f6:  mov    %eax,(%esp)
08196239 +0x5f9:  call   08196715 <+0xad5>
0819623e +0x5fe:  leave
0819623f +0x5ff:  ret
08196240 +0x600:  push   %ebp
08196241 +0x601:  mov    %esp,%ebp
08196243 +0x603:  sub    $0x18,%esp
08196246 +0x606:  mov    0x8(%ebp),%eax
08196249 +0x609:  mov    %eax,(%esp)
0819624c +0x60c:  call   08196760 <+0xb20>
08196251 +0x611:  leave
08196252 +0x612:  ret
08196253 +0x613:  nop
08196254 +0x614:  push   %ebp
08196255 +0x615:  mov    %esp,%ebp
08196257 +0x617:  sub    $0x18,%esp
0819625a +0x61a:  mov    0x8(%ebp),%eax
0819625d +0x61d:  mov    %eax,(%esp)
08196260 +0x620:  call   08196730 <+0xaf0>
08196265 +0x625:  leave
08196266 +0x626:  ret
08196267 +0x627:  nop
08196268 +0x628:  push   %ebp
08196269 +0x629:  mov    %esp,%ebp
0819626b +0x62b:  push   %esi
0819626c +0x62c:  push   %ebx
0819626d +0x62d:  sub    $0x10,%esp
08196270 +0x630:  mov    0x8(%ebp),%eax
08196273 +0x633:  mov    0x8(%eax),%eax
08196276 +0x636:  mov    %eax,%edx
08196278 +0x638:  mov    0x8(%ebp),%eax
0819627b +0x63b:  mov    (%eax),%eax
0819627d +0x63d:  mov    %edx,%ecx
0819627f +0x63f:  sub    %eax,%ecx
08196281 +0x641:  mov    %ecx,%eax
08196283 +0x643:  sar    $0x2,%eax
08196286 +0x646:  imul   $0xcccccccd,%eax,%eax
0819628c +0x64c:  mov    %eax,%edx
0819628e +0x64e:  mov    0x8(%ebp),%eax
08196291 +0x651:  mov    (%eax),%eax
08196293 +0x653:  mov    %edx,0x8(%esp)
08196297 +0x657:  mov    %eax,0x4(%esp)
0819629b +0x65b:  mov    0x8(%ebp),%eax
0819629e +0x65e:  mov    %eax,(%esp)
081962a1 +0x661:  call   08196774 <+0xb34>
081962a6 +0x666:  jmp    081962c3 <+0x683>
081962a8 +0x668:  mov    %edx,%ebx
081962aa +0x66a:  mov    %eax,%esi
081962ac +0x66c:  mov    0x8(%ebp),%eax
081962af +0x66f:  mov    %eax,(%esp)
081962b2 +0x672:  call   08196240 <+0x600>
081962b7 +0x677:  mov    %esi,%eax
081962b9 +0x679:  mov    %ebx,%edx
081962bb +0x67b:  mov    %eax,(%esp)
081962be +0x67e:  call   08ae3750 <_Unwind_Resume>
081962c3 +0x683:  mov    0x8(%ebp),%eax
081962c6 +0x686:  mov    %eax,(%esp)
081962c9 +0x689:  call   08196240 <+0x600>
081962ce +0x68e:  add    $0x10,%esp
081962d1 +0x691:  pop    %ebx
081962d2 +0x692:  pop    %esi
081962d3 +0x693:  pop    %ebp
081962d4 +0x694:  ret
081962d5 +0x695:  nop
081962d6 +0x696:  push   %ebp
081962d7 +0x697:  mov    %esp,%ebp
081962d9 +0x699:  mov    0x8(%ebp),%eax
081962dc +0x69c:  pop    %ebp
081962dd +0x69d:  ret
081962de +0x69e:  push   %ebp
081962df +0x69f:  mov    %esp,%ebp
081962e1 +0x6a1:  sub    $0x18,%esp
081962e4 +0x6a4:  mov    0xc(%ebp),%eax
081962e7 +0x6a7:  mov    %eax,0x4(%esp)
081962eb +0x6ab:  mov    0x8(%ebp),%eax
081962ee +0x6ae:  mov    %eax,(%esp)
081962f1 +0x6b1:  call   0819679b <+0xb5b>
081962f6 +0x6b6:  leave
081962f7 +0x6b7:  ret
081962f8 +0x6b8:  push   %ebp
081962f9 +0x6b9:  mov    %esp,%ebp
081962fb +0x6bb:  sub    $0x18,%esp
081962fe +0x6be:  mov    0x8(%ebp),%eax
08196301 +0x6c1:  mov    %eax,(%esp)
08196304 +0x6c4:  call   081967b6 <+0xb76>
08196309 +0x6c9:  mov    0x8(%ebp),%eax
0819630c +0x6cc:  mov    %eax,(%esp)
0819630f +0x6cf:  call   081967dc <+0xb9c>
08196314 +0x6d4:  leave
08196315 +0x6d5:  ret
08196316 +0x6d6:  push   %ebp
08196317 +0x6d7:  mov    %esp,%ebp
08196319 +0x6d9:  sub    $0x18,%esp
0819631c +0x6dc:  mov    0x8(%ebp),%eax
0819631f +0x6df:  mov    %eax,(%esp)
08196322 +0x6e2:  call   081967f2 <+0xbb2>
08196327 +0x6e7:  leave
08196328 +0x6e8:  ret
08196329 +0x6e9:  nop
0819632a +0x6ea:  push   %ebp
0819632b +0x6eb:  mov    %esp,%ebp
0819632d +0x6ed:  sub    $0x28,%esp
08196330 +0x6f0:  mov    0x8(%ebp),%eax
08196333 +0x6f3:  mov    (%eax),%eax
08196335 +0x6f5:  mov    %eax,-0x10(%ebp)
08196338 +0x6f8:  jmp    08196374 <+0x734>
0819633a +0x6fa:  mov    -0x10(%ebp),%eax
0819633d +0x6fd:  mov    %eax,-0xc(%ebp)
08196340 +0x700:  mov    -0x10(%ebp),%eax
08196343 +0x703:  mov    (%eax),%eax
08196345 +0x705:  mov    %eax,-0x10(%ebp)
08196348 +0x708:  mov    0x8(%ebp),%eax
0819634b +0x70b:  mov    %eax,(%esp)
0819634e +0x70e:  call   081967f8 <+0xbb8>
08196353 +0x713:  mov    -0xc(%ebp),%edx
08196356 +0x716:  mov    %edx,0x4(%esp)
0819635a +0x71a:  mov    %eax,(%esp)
0819635d +0x71d:  call   08196806 <+0xbc6>
08196362 +0x722:  mov    -0xc(%ebp),%eax
08196365 +0x725:  mov    %eax,0x4(%esp)
08196369 +0x729:  mov    0x8(%ebp),%eax
0819636c +0x72c:  mov    %eax,(%esp)
0819636f +0x72f:  call   0819681a <+0xbda>
08196374 +0x734:  mov    0x8(%ebp),%edx
08196377 +0x737:  mov    -0x10(%ebp),%eax
0819637a +0x73a:  cmp    %eax,%edx
0819637c +0x73c:  setne  %al
0819637f +0x73f:  test   %al,%al
08196381 +0x741:  jne    0819633a <+0x6fa>
08196383 +0x743:  leave
08196384 +0x744:  ret
08196385 +0x745:  nop
08196386 +0x746:  push   %ebp
08196387 +0x747:  mov    %esp,%ebp
08196389 +0x749:  sub    $0x18,%esp
0819638c +0x74c:  mov    0x8(%ebp),%eax
0819638f +0x74f:  mov    %eax,(%esp)
08196392 +0x752:  call   0819621e <+0x5de>
08196397 +0x757:  mov    0x8(%ebp),%edx
0819639a +0x75a:  mov    0x4(%edx),%edx
0819639d +0x75d:  mov    %eax,0x8(%esp)
081963a1 +0x761:  mov    %edx,0x4(%esp)
081963a5 +0x765:  mov    0xc(%ebp),%eax
081963a8 +0x768:  mov    %eax,(%esp)
081963ab +0x76b:  call   08196226 <+0x5e6>
081963b0 +0x770:  mov    0x8(%ebp),%eax
081963b3 +0x773:  mov    0xc(%ebp),%edx
081963b6 +0x776:  mov    %edx,0x4(%eax)
081963b9 +0x779:  leave
081963ba +0x77a:  ret
081963bb +0x77b:  nop
081963bc +0x77c:  push   %ebp
081963bd +0x77d:  mov    %esp,%ebp
081963bf +0x77f:  mov    0xc(%ebp),%eax
081963c2 +0x782:  mov    (%eax),%edx
081963c4 +0x784:  mov    0x8(%ebp),%eax
081963c7 +0x787:  mov    %edx,(%eax)
081963c9 +0x789:  pop    %ebp
081963ca +0x78a:  ret
081963cb +0x78b:  push   %ebp
081963cc +0x78c:  mov    %esp,%ebp
081963ce +0x78e:  mov    0x8(%ebp),%eax
081963d1 +0x791:  pop    %ebp
081963d2 +0x792:  ret    $0x4
081963d5 +0x795:  push   %ebp
081963d6 +0x796:  mov    %esp,%ebp
081963d8 +0x798:  push   %ebx
081963d9 +0x799:  sub    $0x24,%esp
081963dc +0x79c:  mov    0x8(%ebp),%ebx
081963df +0x79f:  lea    0xc(%ebp),%eax
081963e2 +0x7a2:  mov    %eax,0x4(%esp)
081963e6 +0x7a6:  lea    0x10(%ebp),%eax
081963e9 +0x7a9:  mov    %eax,(%esp)
081963ec +0x7ac:  call   0819683c <+0xbfc>
081963f1 +0x7b1:  sar    $0x2,%eax
081963f4 +0x7b4:  mov    %eax,-0xc(%ebp)
081963f7 +0x7b7:  jmp    081964cc <+0x88c>
081963fc +0x7bc:  lea    0xc(%ebp),%eax
081963ff +0x7bf:  mov    %eax,(%esp)
08196402 +0x7c2:  call   08196874 <+0xc34>
08196407 +0x7c7:  mov    %eax,0x4(%esp)
0819640b +0x7cb:  lea    0x14(%ebp),%eax
0819640e +0x7ce:  mov    %eax,(%esp)
08196411 +0x7d1:  call   08195d80 <+0x140>
08196416 +0x7d6:  test   %al,%al
08196418 +0x7d8:  je     08196424 <+0x7e4>
0819641a +0x7da:  mov    0xc(%ebp),%eax
0819641d +0x7dd:  mov    %eax,(%ebx)
0819641f +0x7df:  jmp    08196596 <+0x956>
08196424 +0x7e4:  lea    0xc(%ebp),%eax
08196427 +0x7e7:  mov    %eax,(%esp)
0819642a +0x7ea:  call   0819687e <+0xc3e>
0819642f +0x7ef:  lea    0xc(%ebp),%eax
08196432 +0x7f2:  mov    %eax,(%esp)
08196435 +0x7f5:  call   08196874 <+0xc34>
0819643a +0x7fa:  mov    %eax,0x4(%esp)
0819643e +0x7fe:  lea    0x14(%ebp),%eax
08196441 +0x801:  mov    %eax,(%esp)
08196444 +0x804:  call   08195d80 <+0x140>
08196449 +0x809:  test   %al,%al
0819644b +0x80b:  je     08196457 <+0x817>
0819644d +0x80d:  mov    0xc(%ebp),%eax
08196450 +0x810:  mov    %eax,(%ebx)
08196452 +0x812:  jmp    08196596 <+0x956>
08196457 +0x817:  lea    0xc(%ebp),%eax
0819645a +0x81a:  mov    %eax,(%esp)
0819645d +0x81d:  call   0819687e <+0xc3e>
08196462 +0x822:  lea    0xc(%ebp),%eax
08196465 +0x825:  mov    %eax,(%esp)
08196468 +0x828:  call   08196874 <+0xc34>
0819646d +0x82d:  mov    %eax,0x4(%esp)
08196471 +0x831:  lea    0x14(%ebp),%eax
08196474 +0x834:  mov    %eax,(%esp)
08196477 +0x837:  call   08195d80 <+0x140>
0819647c +0x83c:  test   %al,%al
0819647e +0x83e:  je     0819648a <+0x84a>
08196480 +0x840:  mov    0xc(%ebp),%eax
08196483 +0x843:  mov    %eax,(%ebx)
08196485 +0x845:  jmp    08196596 <+0x956>
0819648a +0x84a:  lea    0xc(%ebp),%eax
0819648d +0x84d:  mov    %eax,(%esp)
08196490 +0x850:  call   0819687e <+0xc3e>
08196495 +0x855:  lea    0xc(%ebp),%eax
08196498 +0x858:  mov    %eax,(%esp)
0819649b +0x85b:  call   08196874 <+0xc34>
081964a0 +0x860:  mov    %eax,0x4(%esp)
081964a4 +0x864:  lea    0x14(%ebp),%eax
081964a7 +0x867:  mov    %eax,(%esp)
081964aa +0x86a:  call   08195d80 <+0x140>
081964af +0x86f:  test   %al,%al
081964b1 +0x871:  je     081964bd <+0x87d>
081964b3 +0x873:  mov    0xc(%ebp),%eax
081964b6 +0x876:  mov    %eax,(%ebx)
081964b8 +0x878:  jmp    08196596 <+0x956>
081964bd +0x87d:  lea    0xc(%ebp),%eax
081964c0 +0x880:  mov    %eax,(%esp)
081964c3 +0x883:  call   0819687e <+0xc3e>
081964c8 +0x888:  subl   $0x1,-0xc(%ebp)
081964cc +0x88c:  cmpl   $0x0,-0xc(%ebp)
081964d0 +0x890:  setg   %al
081964d3 +0x893:  test   %al,%al
081964d5 +0x895:  jne    081963fc <+0x7bc>
081964db +0x89b:  lea    0xc(%ebp),%eax
081964de +0x89e:  mov    %eax,0x4(%esp)
081964e2 +0x8a2:  lea    0x10(%ebp),%eax
081964e5 +0x8a5:  mov    %eax,(%esp)
081964e8 +0x8a8:  call   0819683c <+0xbfc>
081964ed +0x8ad:  cmp    $0x2,%eax
081964f0 +0x8b0:  je     08196531 <+0x8f1>
081964f2 +0x8b2:  cmp    $0x3,%eax
081964f5 +0x8b5:  je     08196501 <+0x8c1>
081964f7 +0x8b7:  cmp    $0x1,%eax
081964fa +0x8ba:  je     08196561 <+0x921>
081964fc +0x8bc:  jmp    08196591 <+0x951>
08196501 +0x8c1:  lea    0xc(%ebp),%eax
08196504 +0x8c4:  mov    %eax,(%esp)
08196507 +0x8c7:  call   08196874 <+0xc34>
0819650c +0x8cc:  mov    %eax,0x4(%esp)
08196510 +0x8d0:  lea    0x14(%ebp),%eax
08196513 +0x8d3:  mov    %eax,(%esp)
08196516 +0x8d6:  call   08195d80 <+0x140>
0819651b +0x8db:  test   %al,%al
0819651d +0x8dd:  je     08196526 <+0x8e6>
0819651f +0x8df:  mov    0xc(%ebp),%eax
08196522 +0x8e2:  mov    %eax,(%ebx)
08196524 +0x8e4:  jmp    08196596 <+0x956>
08196526 +0x8e6:  lea    0xc(%ebp),%eax
08196529 +0x8e9:  mov    %eax,(%esp)
0819652c +0x8ec:  call   0819687e <+0xc3e>
08196531 +0x8f1:  lea    0xc(%ebp),%eax
08196534 +0x8f4:  mov    %eax,(%esp)
08196537 +0x8f7:  call   08196874 <+0xc34>
0819653c +0x8fc:  mov    %eax,0x4(%esp)
08196540 +0x900:  lea    0x14(%ebp),%eax
08196543 +0x903:  mov    %eax,(%esp)
08196546 +0x906:  call   08195d80 <+0x140>
0819654b +0x90b:  test   %al,%al
0819654d +0x90d:  je     08196556 <+0x916>
0819654f +0x90f:  mov    0xc(%ebp),%eax
08196552 +0x912:  mov    %eax,(%ebx)
08196554 +0x914:  jmp    08196596 <+0x956>
08196556 +0x916:  lea    0xc(%ebp),%eax
08196559 +0x919:  mov    %eax,(%esp)
0819655c +0x91c:  call   0819687e <+0xc3e>
08196561 +0x921:  lea    0xc(%ebp),%eax
08196564 +0x924:  mov    %eax,(%esp)
08196567 +0x927:  call   08196874 <+0xc34>
0819656c +0x92c:  mov    %eax,0x4(%esp)
08196570 +0x930:  lea    0x14(%ebp),%eax
08196573 +0x933:  mov    %eax,(%esp)
08196576 +0x936:  call   08195d80 <+0x140>
0819657b +0x93b:  test   %al,%al
0819657d +0x93d:  je     08196586 <+0x946>
0819657f +0x93f:  mov    0xc(%ebp),%eax
08196582 +0x942:  mov    %eax,(%ebx)
08196584 +0x944:  jmp    08196596 <+0x956>
08196586 +0x946:  lea    0xc(%ebp),%eax
08196589 +0x949:  mov    %eax,(%esp)
0819658c +0x94c:  call   0819687e <+0xc3e>
08196591 +0x951:  mov    0x10(%ebp),%eax
08196594 +0x954:  mov    %eax,(%ebx)
08196596 +0x956:  mov    %ebx,%eax
08196598 +0x958:  add    $0x24,%esp
0819659b +0x95b:  pop    %ebx
0819659c +0x95c:  pop    %ebp
0819659d +0x95d:  ret    $0x4
081965a0 +0x960:  push   %ebp
081965a1 +0x961:  mov    %esp,%ebp
081965a3 +0x963:  mov    0x8(%ebp),%eax
081965a6 +0x966:  pop    %ebp
081965a7 +0x967:  ret
081965a8 +0x968:  push   %ebp
081965a9 +0x969:  mov    %esp,%ebp
081965ab +0x96b:  mov    0x8(%ebp),%eax
081965ae +0x96e:  mov    0xc(%ebp),%edx
081965b1 +0x971:  mov    %edx,(%eax)
081965b3 +0x973:  pop    %ebp
081965b4 +0x974:  ret
081965b5 +0x975:  push   %ebp
081965b6 +0x976:  mov    %esp,%ebp
081965b8 +0x978:  mov    0x8(%ebp),%eax
081965bb +0x97b:  pop    %ebp
081965bc +0x97c:  ret    $0x4
081965bf +0x97f:  push   %ebp
081965c0 +0x980:  mov    %esp,%ebp
081965c2 +0x982:  push   %ebx
081965c3 +0x983:  sub    $0x14,%esp
081965c6 +0x986:  mov    0x8(%ebp),%ebx
081965c9 +0x989:  jmp    081965d6 <+0x996>
081965cb +0x98b:  lea    0xc(%ebp),%eax
081965ce +0x98e:  mov    %eax,(%esp)
081965d1 +0x991:  call   0819613c <+0x4fc>
081965d6 +0x996:  lea    0x10(%ebp),%eax
081965d9 +0x999:  mov    %eax,0x4(%esp)
081965dd +0x99d:  lea    0xc(%ebp),%eax
081965e0 +0x9a0:  mov    %eax,(%esp)
081965e3 +0x9a3:  call   081960e4 <+0x4a4>
081965e8 +0x9a8:  test   %al,%al
081965ea +0x9aa:  je     08196614 <+0x9d4>
081965ec +0x9ac:  lea    0xc(%ebp),%eax
081965ef +0x9af:  mov    %eax,(%esp)
081965f2 +0x9b2:  call   08196894 <+0xc54>
081965f7 +0x9b7:  mov    0x14(%ebp),%edx
081965fa +0x9ba:  mov    %edx,0x4(%esp)
081965fe +0x9be:  mov    %eax,(%esp)
08196601 +0x9c1:  call   08195db4 <+0x174>
08196606 +0x9c6:  xor    $0x1,%eax
08196609 +0x9c9:  test   %al,%al
0819660b +0x9cb:  je     08196614 <+0x9d4>
0819660d +0x9cd:  mov    $0x1,%eax
08196612 +0x9d2:  jmp    08196619 <+0x9d9>
08196614 +0x9d4:  mov    $0x0,%eax
08196619 +0x9d9:  test   %al,%al
0819661b +0x9db:  jne    081965cb <+0x98b>
0819661d +0x9dd:  mov    0xc(%ebp),%eax
08196620 +0x9e0:  mov    %eax,(%ebx)
08196622 +0x9e2:  mov    %ebx,%eax
08196624 +0x9e4:  add    $0x14,%esp
08196627 +0x9e7:  pop    %ebx
08196628 +0x9e8:  pop    %ebp
08196629 +0x9e9:  ret    $0x4
0819662c +0x9ec:  push   %ebp
0819662d +0x9ed:  mov    %esp,%ebp
0819662f +0x9ef:  sub    $0x28,%esp
08196632 +0x9f2:  mov    0x10(%ebp),%eax
08196635 +0x9f5:  mov    %eax,(%esp)
08196638 +0x9f8:  call   081968a1 <+0xc61>
0819663d +0x9fd:  mov    %eax,0x4(%esp)
08196641 +0xa01:  mov    0x8(%ebp),%eax
08196644 +0xa04:  mov    %eax,(%esp)
08196647 +0xa07:  call   081968aa <+0xc6a>
0819664c +0xa0c:  mov    %eax,-0xc(%ebp)
0819664f +0xa0f:  mov    0xc(%ebp),%edx
08196652 +0xa12:  mov    -0xc(%ebp),%eax
08196655 +0xa15:  mov    %edx,0x4(%esp)
08196659 +0xa19:  mov    %eax,(%esp)
0819665c +0xa1c:  call   086dad20 <_ZNSt15_List_node_base4hookEPS_>  ; std::_List_node_base::hook(std::_List_node_base*)
08196661 +0xa21:  leave
08196662 +0xa22:  ret
08196663 +0xa23:  nop
08196664 +0xa24:  push   %ebp
08196665 +0xa25:  mov    %esp,%ebp
08196667 +0xa27:  sub    $0x28,%esp
0819666a +0xa2a:  mov    0xc(%ebp),%eax
0819666d +0xa2d:  mov    %eax,(%esp)
08196670 +0xa30:  call   086dad40 <_ZNSt15_List_node_base6unhookEv>  ; std::_List_node_base::unhook()
08196675 +0xa35:  mov    0xc(%ebp),%eax
08196678 +0xa38:  mov    %eax,-0xc(%ebp)
0819667b +0xa3b:  mov    0x8(%ebp),%eax
0819667e +0xa3e:  mov    %eax,(%esp)
08196681 +0xa41:  call   081967f8 <+0xbb8>
08196686 +0xa46:  mov    -0xc(%ebp),%edx
08196689 +0xa49:  mov    %edx,0x4(%esp)
0819668d +0xa4d:  mov    %eax,(%esp)
08196690 +0xa50:  call   08196806 <+0xbc6>
08196695 +0xa55:  mov    0x8(%ebp),%eax
08196698 +0xa58:  mov    -0xc(%ebp),%edx
0819669b +0xa5b:  mov    %edx,0x4(%esp)
0819669f +0xa5f:  mov    %eax,(%esp)
081966a2 +0xa62:  call   0819681a <+0xbda>
081966a7 +0xa67:  leave
081966a8 +0xa68:  ret
081966a9 +0xa69:  nop
081966aa +0xa6a:  push   %ebp
081966ab +0xa6b:  mov    %esp,%ebp
081966ad +0xa6d:  sub    $0x18,%esp
081966b0 +0xa70:  mov    0x8(%ebp),%eax
081966b3 +0xa73:  mov    %eax,(%esp)
081966b6 +0xa76:  call   0819692c <+0xcec>
081966bb +0xa7b:  mov    0x8(%ebp),%eax
081966be +0xa7e:  movl   $0x0,(%eax)
081966c4 +0xa84:  mov    0x8(%ebp),%eax
081966c7 +0xa87:  movl   $0x0,0x4(%eax)
081966ce +0xa8e:  mov    0x8(%ebp),%eax
081966d1 +0xa91:  movl   $0x0,0x8(%eax)
081966d8 +0xa98:  leave
081966d9 +0xa99:  ret
081966da +0xa9a:  push   %ebp
081966db +0xa9b:  mov    %esp,%ebp
081966dd +0xa9d:  sub    $0x18,%esp
081966e0 +0xaa0:  mov    0x8(%ebp),%eax
081966e3 +0xaa3:  mov    %eax,(%esp)
081966e6 +0xaa6:  call   08196940 <+0xd00>
081966eb +0xaab:  leave
081966ec +0xaac:  ret
081966ed +0xaad:  nop
081966ee +0xaae:  push   %ebp
081966ef +0xaaf:  mov    %esp,%ebp
081966f1 +0xab1:  sub    $0x18,%esp
081966f4 +0xab4:  cmpl   $0x0,0xc(%ebp)
081966f8 +0xab8:  je     08196713 <+0xad3>
081966fa +0xaba:  mov    0x8(%ebp),%eax
081966fd +0xabd:  mov    0x10(%ebp),%edx
08196700 +0xac0:  mov    %edx,0x8(%esp)
08196704 +0xac4:  mov    0xc(%ebp),%edx
08196707 +0xac7:  mov    %edx,0x4(%esp)
0819670b +0xacb:  mov    %eax,(%esp)
0819670e +0xace:  call   08196946 <+0xd06>
08196713 +0xad3:  leave
08196714 +0xad4:  ret
08196715 +0xad5:  push   %ebp
08196716 +0xad6:  mov    %esp,%ebp
08196718 +0xad8:  sub    $0x18,%esp
0819671b +0xadb:  mov    0xc(%ebp),%eax
0819671e +0xade:  mov    %eax,0x4(%esp)
08196722 +0xae2:  mov    0x8(%ebp),%eax
08196725 +0xae5:  mov    %eax,(%esp)
08196728 +0xae8:  call   08196959 <+0xd19>
0819672d +0xaed:  leave
0819672e +0xaee:  ret
0819672f +0xaef:  nop
08196730 +0xaf0:  push   %ebp
08196731 +0xaf1:  mov    %esp,%ebp
08196733 +0xaf3:  sub    $0x18,%esp
08196736 +0xaf6:  mov    0x8(%ebp),%eax
08196739 +0xaf9:  mov    %eax,(%esp)
0819673c +0xafc:  call   0819695e <+0xd1e>
08196741 +0xb01:  mov    0x8(%ebp),%eax
08196744 +0xb04:  movl   $0x0,(%eax)
0819674a +0xb0a:  mov    0x8(%ebp),%eax
0819674d +0xb0d:  movl   $0x0,0x4(%eax)
08196754 +0xb14:  mov    0x8(%ebp),%eax
08196757 +0xb17:  movl   $0x0,0x8(%eax)
0819675e +0xb1e:  leave
0819675f +0xb1f:  ret
08196760 +0xb20:  push   %ebp
08196761 +0xb21:  mov    %esp,%ebp
08196763 +0xb23:  sub    $0x18,%esp
08196766 +0xb26:  mov    0x8(%ebp),%eax
08196769 +0xb29:  mov    %eax,(%esp)
0819676c +0xb2c:  call   08196972 <+0xd32>
08196771 +0xb31:  leave
08196772 +0xb32:  ret
08196773 +0xb33:  nop
08196774 +0xb34:  push   %ebp
08196775 +0xb35:  mov    %esp,%ebp
08196777 +0xb37:  sub    $0x18,%esp
0819677a +0xb3a:  cmpl   $0x0,0xc(%ebp)
0819677e +0xb3e:  je     08196799 <+0xb59>
08196780 +0xb40:  mov    0x8(%ebp),%eax
08196783 +0xb43:  mov    0x10(%ebp),%edx
08196786 +0xb46:  mov    %edx,0x8(%esp)
0819678a +0xb4a:  mov    0xc(%ebp),%edx
0819678d +0xb4d:  mov    %edx,0x4(%esp)
08196791 +0xb51:  mov    %eax,(%esp)
08196794 +0xb54:  call   08196978 <+0xd38>
08196799 +0xb59:  leave
0819679a +0xb5a:  ret
0819679b +0xb5b:  push   %ebp
0819679c +0xb5c:  mov    %esp,%ebp
0819679e +0xb5e:  sub    $0x18,%esp
081967a1 +0xb61:  mov    0xc(%ebp),%eax
081967a4 +0xb64:  mov    %eax,0x4(%esp)
081967a8 +0xb68:  mov    0x8(%ebp),%eax
081967ab +0xb6b:  mov    %eax,(%esp)
081967ae +0xb6e:  call   0819698b <+0xd4b>
081967b3 +0xb73:  leave
081967b4 +0xb74:  ret
081967b5 +0xb75:  nop
081967b6 +0xb76:  push   %ebp
081967b7 +0xb77:  mov    %esp,%ebp
081967b9 +0xb79:  sub    $0x18,%esp
081967bc +0xb7c:  mov    0x8(%ebp),%eax
081967bf +0xb7f:  mov    %eax,(%esp)
081967c2 +0xb82:  call   08196990 <+0xd50>
081967c7 +0xb87:  mov    0x8(%ebp),%eax
081967ca +0xb8a:  movl   $0x0,(%eax)
081967d0 +0xb90:  mov    0x8(%ebp),%eax
081967d3 +0xb93:  movl   $0x0,0x4(%eax)
081967da +0xb9a:  leave
081967db +0xb9b:  ret
081967dc +0xb9c:  push   %ebp
081967dd +0xb9d:  mov    %esp,%ebp
081967df +0xb9f:  mov    0x8(%ebp),%edx
081967e2 +0xba2:  mov    0x8(%ebp),%eax
081967e5 +0xba5:  mov    %edx,(%eax)
081967e7 +0xba7:  mov    0x8(%ebp),%edx
081967ea +0xbaa:  mov    0x8(%ebp),%eax
081967ed +0xbad:  mov    %edx,0x4(%eax)
081967f0 +0xbb0:  pop    %ebp
081967f1 +0xbb1:  ret
081967f2 +0xbb2:  push   %ebp
081967f3 +0xbb3:  mov    %esp,%ebp
081967f5 +0xbb5:  pop    %ebp
081967f6 +0xbb6:  ret
081967f7 +0xbb7:  nop
081967f8 +0xbb8:  push   %ebp
081967f9 +0xbb9:  mov    %esp,%ebp
081967fb +0xbbb:  mov    0x8(%ebp),%eax
081967fe +0xbbe:  pop    %ebp
081967ff +0xbbf:  ret
08196800 +0xbc0:  push   %ebp
08196801 +0xbc1:  mov    %esp,%ebp
08196803 +0xbc3:  pop    %ebp
08196804 +0xbc4:  ret
08196805 +0xbc5:  nop
08196806 +0xbc6:  push   %ebp
08196807 +0xbc7:  mov    %esp,%ebp
08196809 +0xbc9:  sub    $0x18,%esp
0819680c +0xbcc:  mov    0xc(%ebp),%eax
0819680f +0xbcf:  mov    %eax,(%esp)
08196812 +0xbd2:  call   08196800 <+0xbc0>
08196817 +0xbd7:  leave
08196818 +0xbd8:  ret
08196819 +0xbd9:  nop
0819681a +0xbda:  push   %ebp
0819681b +0xbdb:  mov    %esp,%ebp
0819681d +0xbdd:  sub    $0x18,%esp
08196820 +0xbe0:  mov    0x8(%ebp),%eax
08196823 +0xbe3:  movl   $0x1,0x8(%esp)
0819682b +0xbeb:  mov    0xc(%ebp),%edx
0819682e +0xbee:  mov    %edx,0x4(%esp)
08196832 +0xbf2:  mov    %eax,(%esp)
08196835 +0xbf5:  call   081969a4 <+0xd64>
0819683a +0xbfa:  leave
0819683b +0xbfb:  ret
0819683c +0xbfc:  push   %ebp
0819683d +0xbfd:  mov    %esp,%ebp
0819683f +0xbff:  push   %ebx
08196840 +0xc00:  sub    $0x14,%esp
08196843 +0xc03:  mov    0x8(%ebp),%eax
08196846 +0xc06:  mov    %eax,(%esp)
08196849 +0xc09:  call   081965a0 <+0x960>
0819684e +0xc0e:  mov    (%eax),%eax
08196850 +0xc10:  mov    %eax,%ebx
08196852 +0xc12:  mov    0xc(%ebp),%eax
08196855 +0xc15:  mov    %eax,(%esp)
08196858 +0xc18:  call   081965a0 <+0x960>
0819685d +0xc1d:  mov    (%eax),%eax
0819685f +0xc1f:  mov    %ebx,%edx
08196861 +0xc21:  sub    %eax,%edx
08196863 +0xc23:  mov    %edx,%eax
08196865 +0xc25:  sar    $0x2,%eax
08196868 +0xc28:  imul   $0xaaaaaaab,%eax,%eax
0819686e +0xc2e:  add    $0x14,%esp
08196871 +0xc31:  pop    %ebx
08196872 +0xc32:  pop    %ebp
08196873 +0xc33:  ret
08196874 +0xc34:  push   %ebp
08196875 +0xc35:  mov    %esp,%ebp
08196877 +0xc37:  mov    0x8(%ebp),%eax
0819687a +0xc3a:  mov    (%eax),%eax
0819687c +0xc3c:  pop    %ebp
0819687d +0xc3d:  ret
0819687e +0xc3e:  push   %ebp
0819687f +0xc3f:  mov    %esp,%ebp
08196881 +0xc41:  mov    0x8(%ebp),%eax
08196884 +0xc44:  mov    (%eax),%eax
08196886 +0xc46:  lea    0xc(%eax),%edx
08196889 +0xc49:  mov    0x8(%ebp),%eax
0819688c +0xc4c:  mov    %edx,(%eax)
0819688e +0xc4e:  mov    0x8(%ebp),%eax
08196891 +0xc51:  pop    %ebp
08196892 +0xc52:  ret
08196893 +0xc53:  nop
08196894 +0xc54:  push   %ebp
08196895 +0xc55:  mov    %esp,%ebp
08196897 +0xc57:  mov    0x8(%ebp),%eax
0819689a +0xc5a:  mov    (%eax),%eax
0819689c +0xc5c:  add    $0x8,%eax
0819689f +0xc5f:  pop    %ebp
081968a0 +0xc60:  ret
081968a1 +0xc61:  push   %ebp
081968a2 +0xc62:  mov    %esp,%ebp
081968a4 +0xc64:  mov    0x8(%ebp),%eax
081968a7 +0xc67:  pop    %ebp
081968a8 +0xc68:  ret
081968a9 +0xc69:  nop
081968aa +0xc6a:  push   %ebp
081968ab +0xc6b:  mov    %esp,%ebp
081968ad +0xc6d:  push   %esi
081968ae +0xc6e:  push   %ebx
081968af +0xc6f:  sub    $0x20,%esp
081968b2 +0xc72:  mov    0x8(%ebp),%eax
081968b5 +0xc75:  mov    %eax,(%esp)
081968b8 +0xc78:  call   081969b8 <+0xd78>
081968bd +0xc7d:  mov    %eax,-0xc(%ebp)
081968c0 +0xc80:  mov    0xc(%ebp),%eax
081968c3 +0xc83:  mov    %eax,(%esp)
081968c6 +0xc86:  call   081968a1 <+0xc61>
081968cb +0xc8b:  mov    %eax,%ebx
081968cd +0xc8d:  mov    0x8(%ebp),%eax
081968d0 +0xc90:  mov    %eax,(%esp)
081968d3 +0xc93:  call   081967f8 <+0xbb8>
081968d8 +0xc98:  mov    %ebx,0x8(%esp)
081968dc +0xc9c:  mov    -0xc(%ebp),%edx
081968df +0xc9f:  mov    %edx,0x4(%esp)
081968e3 +0xca3:  mov    %eax,(%esp)
081968e6 +0xca6:  call   081969dc <+0xd9c>
081968eb +0xcab:  jmp    08196921 <+0xce1>
081968ed +0xcad:  mov    %eax,(%esp)
081968f0 +0xcb0:  call   08725ce0 <__cxa_begin_catch>
081968f5 +0xcb5:  mov    0x8(%ebp),%eax
081968f8 +0xcb8:  mov    -0xc(%ebp),%edx
081968fb +0xcbb:  mov    %edx,0x4(%esp)
081968ff +0xcbf:  mov    %eax,(%esp)
08196902 +0xcc2:  call   0819681a <+0xbda>
08196907 +0xcc7:  call   08724be0 <__cxa_rethrow>
0819690c +0xccc:  mov    %edx,%ebx
0819690e +0xcce:  mov    %eax,%esi
08196910 +0xcd0:  call   08725c30 <__cxa_end_catch>
08196915 +0xcd5:  mov    %esi,%eax
08196917 +0xcd7:  mov    %ebx,%edx
08196919 +0xcd9:  mov    %eax,(%esp)
0819691c +0xcdc:  call   08ae3750 <_Unwind_Resume>
08196921 +0xce1:  mov    -0xc(%ebp),%eax
08196924 +0xce4:  add    $0x20,%esp
08196927 +0xce7:  pop    %ebx
08196928 +0xce8:  pop    %esi
08196929 +0xce9:  pop    %ebp
0819692a +0xcea:  ret
0819692b +0xceb:  nop
0819692c +0xcec:  push   %ebp
0819692d +0xced:  mov    %esp,%ebp
0819692f +0xcef:  sub    $0x18,%esp
08196932 +0xcf2:  mov    0x8(%ebp),%eax
08196935 +0xcf5:  mov    %eax,(%esp)
08196938 +0xcf8:  call   08196a1c <+0xddc>
0819693d +0xcfd:  leave
0819693e +0xcfe:  ret
0819693f +0xcff:  nop
08196940 +0xd00:  push   %ebp
08196941 +0xd01:  mov    %esp,%ebp
08196943 +0xd03:  pop    %ebp
08196944 +0xd04:  ret
08196945 +0xd05:  nop
08196946 +0xd06:  push   %ebp
08196947 +0xd07:  mov    %esp,%ebp
08196949 +0xd09:  sub    $0x18,%esp
0819694c +0xd0c:  mov    0xc(%ebp),%eax
0819694f +0xd0f:  mov    %eax,(%esp)
08196952 +0xd12:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08196957 +0xd17:  leave
08196958 +0xd18:  ret
08196959 +0xd19:  push   %ebp
0819695a +0xd1a:  mov    %esp,%ebp
0819695c +0xd1c:  pop    %ebp
0819695d +0xd1d:  ret
0819695e +0xd1e:  push   %ebp
0819695f +0xd1f:  mov    %esp,%ebp
08196961 +0xd21:  sub    $0x18,%esp
08196964 +0xd24:  mov    0x8(%ebp),%eax
08196967 +0xd27:  mov    %eax,(%esp)
0819696a +0xd2a:  call   08196a22 <+0xde2>
0819696f +0xd2f:  leave
08196970 +0xd30:  ret
08196971 +0xd31:  nop
08196972 +0xd32:  push   %ebp
08196973 +0xd33:  mov    %esp,%ebp
08196975 +0xd35:  pop    %ebp
08196976 +0xd36:  ret
08196977 +0xd37:  nop
08196978 +0xd38:  push   %ebp
08196979 +0xd39:  mov    %esp,%ebp
0819697b +0xd3b:  sub    $0x18,%esp
0819697e +0xd3e:  mov    0xc(%ebp),%eax
08196981 +0xd41:  mov    %eax,(%esp)
08196984 +0xd44:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08196989 +0xd49:  leave
0819698a +0xd4a:  ret
0819698b +0xd4b:  push   %ebp
0819698c +0xd4c:  mov    %esp,%ebp
0819698e +0xd4e:  pop    %ebp
0819698f +0xd4f:  ret
08196990 +0xd50:  push   %ebp
08196991 +0xd51:  mov    %esp,%ebp
08196993 +0xd53:  sub    $0x18,%esp
08196996 +0xd56:  mov    0x8(%ebp),%eax
08196999 +0xd59:  mov    %eax,(%esp)
0819699c +0xd5c:  call   08196a28 <+0xde8>
081969a1 +0xd61:  leave
081969a2 +0xd62:  ret
081969a3 +0xd63:  nop
081969a4 +0xd64:  push   %ebp
081969a5 +0xd65:  mov    %esp,%ebp
081969a7 +0xd67:  sub    $0x18,%esp
081969aa +0xd6a:  mov    0xc(%ebp),%eax
081969ad +0xd6d:  mov    %eax,(%esp)
081969b0 +0xd70:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081969b5 +0xd75:  leave
081969b6 +0xd76:  ret
081969b7 +0xd77:  nop
081969b8 +0xd78:  push   %ebp
081969b9 +0xd79:  mov    %esp,%ebp
081969bb +0xd7b:  sub    $0x18,%esp
081969be +0xd7e:  mov    0x8(%ebp),%eax
081969c1 +0xd81:  movl   $0x0,0x8(%esp)
081969c9 +0xd89:  movl   $0x1,0x4(%esp)
081969d1 +0xd91:  mov    %eax,(%esp)
081969d4 +0xd94:  call   08196a2e <+0xdee>
081969d9 +0xd99:  leave
081969da +0xd9a:  ret
081969db +0xd9b:  nop
081969dc +0xd9c:  push   %ebp
081969dd +0xd9d:  mov    %esp,%ebp
081969df +0xd9f:  push   %ebx
081969e0 +0xda0:  sub    $0x14,%esp
081969e3 +0xda3:  mov    0x10(%ebp),%eax
081969e6 +0xda6:  mov    %eax,(%esp)
081969e9 +0xda9:  call   081968a1 <+0xc61>
081969ee +0xdae:  mov    %eax,%ebx
081969f0 +0xdb0:  mov    0xc(%ebp),%eax
081969f3 +0xdb3:  mov    %eax,0x4(%esp)
081969f7 +0xdb7:  movl   $0x14,(%esp)
081969fe +0xdbe:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08196a03 +0xdc3:  mov    %eax,%edx
08196a05 +0xdc5:  test   %edx,%edx
08196a07 +0xdc7:  je     08196a15 <+0xdd5>
08196a09 +0xdc9:  mov    %ebx,0x4(%esp)
08196a0d +0xdcd:  mov    %eax,(%esp)
08196a10 +0xdd0:  call   08196a6e <+0xe2e>
08196a15 +0xdd5:  add    $0x14,%esp
08196a18 +0xdd8:  pop    %ebx
08196a19 +0xdd9:  pop    %ebp
08196a1a +0xdda:  ret
08196a1b +0xddb:  nop
08196a1c +0xddc:  push   %ebp
08196a1d +0xddd:  mov    %esp,%ebp
08196a1f +0xddf:  pop    %ebp
08196a20 +0xde0:  ret
08196a21 +0xde1:  nop
08196a22 +0xde2:  push   %ebp
08196a23 +0xde3:  mov    %esp,%ebp
08196a25 +0xde5:  pop    %ebp
08196a26 +0xde6:  ret
08196a27 +0xde7:  nop
08196a28 +0xde8:  push   %ebp
08196a29 +0xde9:  mov    %esp,%ebp
08196a2b +0xdeb:  pop    %ebp
08196a2c +0xdec:  ret
08196a2d +0xded:  nop
08196a2e +0xdee:  push   %ebp
08196a2f +0xdef:  mov    %esp,%ebp
08196a31 +0xdf1:  sub    $0x18,%esp
08196a34 +0xdf4:  mov    0x8(%ebp),%eax
08196a37 +0xdf7:  mov    %eax,(%esp)
08196a3a +0xdfa:  call   08196aa8 <+0xe68>
08196a3f +0xdff:  cmp    0xc(%ebp),%eax
08196a42 +0xe02:  setb   %al
08196a45 +0xe05:  movzbl %al,%eax
08196a48 +0xe08:  test   %eax,%eax
08196a4a +0xe0a:  setne  %al
08196a4d +0xe0d:  test   %al,%al
08196a4f +0xe0f:  je     08196a56 <+0xe16>
08196a51 +0xe11:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08196a56 +0xe16:  mov    0xc(%ebp),%edx
08196a59 +0xe19:  mov    %edx,%eax
08196a5b +0xe1b:  shl    $0x2,%eax
08196a5e +0xe1e:  add    %edx,%eax
08196a60 +0xe20:  shl    $0x2,%eax
08196a63 +0xe23:  mov    %eax,(%esp)
08196a66 +0xe26:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08196a6b +0xe2b:  leave
08196a6c +0xe2c:  ret
08196a6d +0xe2d:  nop
08196a6e +0xe2e:  push   %ebp
08196a6f +0xe2f:  mov    %esp,%ebp
08196a71 +0xe31:  sub    $0x18,%esp
08196a74 +0xe34:  mov    0x8(%ebp),%eax
08196a77 +0xe37:  movl   $0x0,(%eax)
08196a7d +0xe3d:  mov    0x8(%ebp),%eax
08196a80 +0xe40:  movl   $0x0,0x4(%eax)
08196a87 +0xe47:  mov    0xc(%ebp),%eax
08196a8a +0xe4a:  mov    %eax,(%esp)
08196a8d +0xe4d:  call   081968a1 <+0xc61>
08196a92 +0xe52:  mov    0x8(%ebp),%edx
08196a95 +0xe55:  mov    (%eax),%ecx
08196a97 +0xe57:  mov    %ecx,0x8(%edx)
08196a9a +0xe5a:  mov    0x4(%eax),%ecx
08196a9d +0xe5d:  mov    %ecx,0xc(%edx)
08196aa0 +0xe60:  mov    0x8(%eax),%eax
08196aa3 +0xe63:  mov    %eax,0x10(%edx)
08196aa6 +0xe66:  leave
08196aa7 +0xe67:  ret
08196aa8 +0xe68:  push   %ebp
08196aa9 +0xe69:  mov    %esp,%ebp
08196aab +0xe6b:  mov    $0xccccccc,%eax
08196ab0 +0xe70:  pop    %ebp
08196ab1 +0xe71:  ret
08196ab2 +0xe72:  nop
08196ab3 +0xe73:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8195c40

/* ARAD::FnRewardInterface::operator()(int, unsigned long, short, unsigned int) */

void ARAD::FnRewardInterface::_GLOBAL__I_operator__(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
