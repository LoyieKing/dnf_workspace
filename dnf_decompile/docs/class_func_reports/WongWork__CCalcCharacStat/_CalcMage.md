# _CalcMage

`_ZN8WongWork15CCalcCharacStat9_CalcMageEP15_Additioal_infoii`

`WongWork::CCalcCharacStat::_CalcMage(_Additioal_info*, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCalcCharacStat` | `0x0831fc3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831fc3a  _ZN8WongWork15CCalcCharacStat9_CalcMageEP15_Additioal_infoii
#           WongWork::CCalcCharacStat::_CalcMage(_Additioal_info*, int, int)
# range [0x0831fc3a, 0x083201b3]
0831fc3a +0x000:  push   %ebp
0831fc3b +0x001:  mov    %esp,%ebp
0831fc3d +0x003:  cmpl   $0x4,0xc(%ebp)
0831fc41 +0x007:  ja     083201af <+0x575>
0831fc47 +0x00d:  mov    0xc(%ebp),%eax
0831fc4a +0x010:  shl    $0x2,%eax
0831fc4d +0x013:  mov    &data#47eb97dc(.rodata)(%eax),%eax
0831fc53 +0x019:  jmp    *%eax
0831fc55 +0x01b:  mov    0x10(%ebp),%eax
0831fc58 +0x01e:  sub    $0x1,%eax
0831fc5b +0x021:  imul   $0x145,%eax,%eax
0831fc61 +0x027:  add    $0x3e8,%eax
0831fc66 +0x02c:  mov    %eax,%edx
0831fc68 +0x02e:  mov    0x8(%ebp),%eax
0831fc6b +0x031:  mov    %edx,(%eax)
0831fc6d +0x033:  mov    0x10(%ebp),%eax
0831fc70 +0x036:  sub    $0x1,%eax
0831fc73 +0x039:  imul   $0x177,%eax,%eax
0831fc79 +0x03f:  add    $0x7d0,%eax
0831fc7e +0x044:  mov    %eax,%edx
0831fc80 +0x046:  mov    0x8(%ebp),%eax
0831fc83 +0x049:  mov    %edx,0x4(%eax)
0831fc86 +0x04c:  mov    0x10(%ebp),%eax
0831fc89 +0x04f:  sub    $0x1,%eax
0831fc8c +0x052:  mov    %eax,%edx
0831fc8e +0x054:  mov    %edx,%eax
0831fc90 +0x056:  shl    $0x2,%eax
0831fc93 +0x059:  add    %edx,%eax
0831fc95 +0x05b:  shl    $0x2,%eax
0831fc98 +0x05e:  lea    0x1e(%eax),%edx
0831fc9b +0x061:  mov    0x8(%ebp),%eax
0831fc9e +0x064:  mov    %dx,0x8(%eax)
0831fca2 +0x068:  mov    0x10(%ebp),%eax
0831fca5 +0x06b:  sub    $0x1,%eax
0831fca8 +0x06e:  mov    %eax,%edx
0831fcaa +0x070:  mov    %edx,%eax
0831fcac +0x072:  shl    $0x2,%eax
0831fcaf +0x075:  add    %edx,%eax
0831fcb1 +0x077:  shl    $0x2,%eax
0831fcb4 +0x07a:  lea    0x1e(%eax),%edx
0831fcb7 +0x07d:  mov    0x8(%ebp),%eax
0831fcba +0x080:  mov    %dx,0xa(%eax)
0831fcbe +0x084:  mov    0x10(%ebp),%eax
0831fcc1 +0x087:  sub    $0x1,%eax
0831fcc4 +0x08a:  mov    %eax,%edx
0831fcc6 +0x08c:  mov    %edx,%eax
0831fcc8 +0x08e:  shl    $0x2,%eax
0831fccb +0x091:  add    %edx,%eax
0831fccd +0x093:  shl    $0x3,%eax
0831fcd0 +0x096:  lea    0x50(%eax),%edx
0831fcd3 +0x099:  mov    0x8(%ebp),%eax
0831fcd6 +0x09c:  mov    %dx,0xc(%eax)
0831fcda +0x0a0:  mov    0x10(%ebp),%eax
0831fcdd +0x0a3:  sub    $0x1,%eax
0831fce0 +0x0a6:  mov    %eax,%edx
0831fce2 +0x0a8:  mov    %edx,%eax
0831fce4 +0x0aa:  shl    $0x2,%eax
0831fce7 +0x0ad:  add    %edx,%eax
0831fce9 +0x0af:  shl    $0x3,%eax
0831fcec +0x0b2:  lea    0x46(%eax),%edx
0831fcef +0x0b5:  mov    0x8(%ebp),%eax
0831fcf2 +0x0b8:  mov    %dx,0xe(%eax)
0831fcf6 +0x0bc:  mov    0x10(%ebp),%eax
0831fcf9 +0x0bf:  sub    $0x1,%eax
0831fcfc +0x0c2:  imul   $0x9c4,%eax,%eax
0831fd02 +0x0c8:  lea    0x445c0(%eax),%edx
0831fd08 +0x0ce:  mov    0x8(%ebp),%eax
0831fd0b +0x0d1:  mov    %edx,0x3a(%eax)
0831fd0e +0x0d4:  mov    0x10(%ebp),%eax
0831fd11 +0x0d7:  sub    $0x1,%eax
0831fd14 +0x0da:  mov    %eax,%edx
0831fd16 +0x0dc:  mov    %edx,%eax
0831fd18 +0x0de:  shl    $0x2,%eax
0831fd1b +0x0e1:  add    %edx,%eax
0831fd1d +0x0e3:  add    %eax,%eax
0831fd1f +0x0e5:  add    $0xc8,%ax
0831fd23 +0x0e9:  mov    %eax,%edx
0831fd25 +0x0eb:  mov    0x8(%ebp),%eax
0831fd28 +0x0ee:  mov    %dx,0x40(%eax)
0831fd2c +0x0f2:  mov    0x10(%ebp),%eax
0831fd2f +0x0f5:  sub    $0x1,%eax
0831fd32 +0x0f8:  mov    %eax,%edx
0831fd34 +0x0fa:  mov    %edx,%eax
0831fd36 +0x0fc:  shl    $0x2,%eax
0831fd39 +0x0ff:  add    %edx,%eax
0831fd3b +0x101:  add    %eax,%eax
0831fd3d +0x103:  add    $0x1388,%ax
0831fd41 +0x107:  mov    %eax,%edx
0831fd43 +0x109:  mov    0x8(%ebp),%eax
0831fd46 +0x10c:  mov    %dx,0x4a(%eax)
0831fd4a +0x110:  jmp    083201af <+0x575>
0831fd4f +0x115:  mov    0x10(%ebp),%eax
0831fd52 +0x118:  imul   $0x113,%eax,%eax
0831fd58 +0x11e:  add    $0x627,%eax
0831fd5d +0x123:  mov    %eax,%edx
0831fd5f +0x125:  mov    0x8(%ebp),%eax
0831fd62 +0x128:  mov    %edx,(%eax)
0831fd64 +0x12a:  mov    0x10(%ebp),%eax
0831fd67 +0x12d:  imul   $0x1a9,%eax,%eax
0831fd6d +0x133:  add    $0x2d5,%eax
0831fd72 +0x138:  mov    %eax,%edx
0831fd74 +0x13a:  mov    0x8(%ebp),%eax
0831fd77 +0x13d:  mov    %edx,0x4(%eax)
0831fd7a +0x140:  mov    0x10(%ebp),%eax
0831fd7d +0x143:  mov    %eax,%edx
0831fd7f +0x145:  mov    %edx,%eax
0831fd81 +0x147:  shl    $0x4,%eax
0831fd84 +0x14a:  sub    %dx,%ax
0831fd87 +0x14d:  lea    0x64(%eax),%edx
0831fd8a +0x150:  mov    0x8(%ebp),%eax
0831fd8d +0x153:  mov    %dx,0x8(%eax)
0831fd91 +0x157:  mov    0x10(%ebp),%eax
0831fd94 +0x15a:  mov    %eax,%edx
0831fd96 +0x15c:  mov    %edx,%eax
0831fd98 +0x15e:  shl    $0x4,%eax
0831fd9b +0x161:  sub    %dx,%ax
0831fd9e +0x164:  lea    0x64(%eax),%edx
0831fda1 +0x167:  mov    0x8(%ebp),%eax
0831fda4 +0x16a:  mov    %dx,0xa(%eax)
0831fda8 +0x16e:  mov    0x10(%ebp),%eax
0831fdab +0x171:  mov    %eax,%edx
0831fdad +0x173:  mov    %edx,%eax
0831fdaf +0x175:  add    %eax,%eax
0831fdb1 +0x177:  add    %edx,%eax
0831fdb3 +0x179:  mov    %eax,%edx
0831fdb5 +0x17b:  shl    $0x4,%edx
0831fdb8 +0x17e:  mov    %edx,%ecx
0831fdba +0x180:  sub    %ax,%cx
0831fdbd +0x183:  mov    %ecx,%eax
0831fdbf +0x185:  lea    -0x32(%eax),%edx
0831fdc2 +0x188:  mov    0x8(%ebp),%eax
0831fdc5 +0x18b:  mov    %dx,0xc(%eax)
0831fdc9 +0x18f:  mov    0x10(%ebp),%eax
0831fdcc +0x192:  mov    %eax,%edx
0831fdce +0x194:  mov    %edx,%eax
0831fdd0 +0x196:  add    %eax,%eax
0831fdd2 +0x198:  add    %edx,%eax
0831fdd4 +0x19a:  mov    %eax,%edx
0831fdd6 +0x19c:  shl    $0x4,%edx
0831fdd9 +0x19f:  mov    %edx,%ecx
0831fddb +0x1a1:  sub    %ax,%cx
0831fdde +0x1a4:  mov    %ecx,%eax
0831fde0 +0x1a6:  lea    -0x3c(%eax),%edx
0831fde3 +0x1a9:  mov    0x8(%ebp),%eax
0831fde6 +0x1ac:  mov    %dx,0xe(%eax)
0831fdea +0x1b0:  mov    0x10(%ebp),%eax
0831fded +0x1b3:  imul   $0x9c4,%eax,%eax
0831fdf3 +0x1b9:  lea    0x43bfc(%eax),%edx
0831fdf9 +0x1bf:  mov    0x8(%ebp),%eax
0831fdfc +0x1c2:  mov    %edx,0x3a(%eax)
0831fdff +0x1c5:  mov    0x10(%ebp),%eax
0831fe02 +0x1c8:  mov    %eax,%edx
0831fe04 +0x1ca:  mov    %edx,%eax
0831fe06 +0x1cc:  shl    $0x2,%eax
0831fe09 +0x1cf:  add    %edx,%eax
0831fe0b +0x1d1:  shl    $0x2,%eax
0831fe0e +0x1d4:  add    $0xa,%eax
0831fe11 +0x1d7:  mov    %eax,%edx
0831fe13 +0x1d9:  mov    0x8(%ebp),%eax
0831fe16 +0x1dc:  mov    %dx,0x40(%eax)
0831fe1a +0x1e0:  mov    0x10(%ebp),%eax
0831fe1d +0x1e3:  mov    %eax,%edx
0831fe1f +0x1e5:  mov    %edx,%eax
0831fe21 +0x1e7:  shl    $0x2,%eax
0831fe24 +0x1ea:  add    %edx,%eax
0831fe26 +0x1ec:  shl    $0x2,%eax
0831fe29 +0x1ef:  lea    0x25a8(%eax),%edx
0831fe2f +0x1f5:  mov    0x8(%ebp),%eax
0831fe32 +0x1f8:  mov    %dx,0x48(%eax)
0831fe36 +0x1fc:  mov    0x10(%ebp),%eax
0831fe39 +0x1ff:  mov    %eax,%edx
0831fe3b +0x201:  mov    %edx,%eax
0831fe3d +0x203:  shl    $0x2,%eax
0831fe40 +0x206:  add    %edx,%eax
0831fe42 +0x208:  add    %eax,%eax
0831fe44 +0x20a:  add    $0x137e,%ax
0831fe48 +0x20e:  mov    %eax,%edx
0831fe4a +0x210:  mov    0x8(%ebp),%eax
0831fe4d +0x213:  mov    %dx,0x4a(%eax)
0831fe51 +0x217:  jmp    083201af <+0x575>
0831fe56 +0x21c:  mov    0x10(%ebp),%eax
0831fe59 +0x21f:  imul   $0x12c,%eax,%eax
0831fe5f +0x225:  add    $0x465,%eax
0831fe64 +0x22a:  mov    %eax,%edx
0831fe66 +0x22c:  mov    0x8(%ebp),%eax
0831fe69 +0x22f:  mov    %edx,(%eax)
0831fe6b +0x231:  mov    0x10(%ebp),%eax
0831fe6e +0x234:  imul   $0x190,%eax,%eax
0831fe74 +0x23a:  add    $0x497,%eax
0831fe79 +0x23f:  mov    %eax,%edx
0831fe7b +0x241:  mov    0x8(%ebp),%eax
0831fe7e +0x244:  mov    %edx,0x4(%eax)
0831fe81 +0x247:  mov    0x10(%ebp),%eax
0831fe84 +0x24a:  mov    %eax,%edx
0831fe86 +0x24c:  mov    %edx,%eax
0831fe88 +0x24e:  shl    $0x2,%eax
0831fe8b +0x251:  add    %edx,%eax
0831fe8d +0x253:  shl    $0x2,%eax
0831fe90 +0x256:  lea    0xa(%eax),%edx
0831fe93 +0x259:  mov    0x8(%ebp),%eax
0831fe96 +0x25c:  mov    %dx,0x8(%eax)
0831fe9a +0x260:  mov    0x10(%ebp),%eax
0831fe9d +0x263:  mov    %eax,%edx
0831fe9f +0x265:  mov    %edx,%eax
0831fea1 +0x267:  shl    $0x2,%eax
0831fea4 +0x26a:  add    %edx,%eax
0831fea6 +0x26c:  shl    $0x2,%eax
0831fea9 +0x26f:  lea    0xa(%eax),%edx
0831feac +0x272:  mov    0x8(%ebp),%eax
0831feaf +0x275:  mov    %dx,0xa(%eax)
0831feb3 +0x279:  mov    0x10(%ebp),%eax
0831feb6 +0x27c:  add    $0x1,%eax
0831feb9 +0x27f:  mov    %eax,%edx
0831febb +0x281:  mov    %edx,%eax
0831febd +0x283:  shl    $0x2,%eax
0831fec0 +0x286:  add    %edx,%eax
0831fec2 +0x288:  shl    $0x3,%eax
0831fec5 +0x28b:  mov    %eax,%edx
0831fec7 +0x28d:  mov    0x8(%ebp),%eax
0831feca +0x290:  mov    %dx,0xc(%eax)
0831fece +0x294:  mov    0x10(%ebp),%eax
0831fed1 +0x297:  mov    %eax,%edx
0831fed3 +0x299:  mov    %edx,%eax
0831fed5 +0x29b:  shl    $0x2,%eax
0831fed8 +0x29e:  add    %edx,%eax
0831feda +0x2a0:  shl    $0x3,%eax
0831fedd +0x2a3:  lea    0x1e(%eax),%edx
0831fee0 +0x2a6:  mov    0x8(%ebp),%eax
0831fee3 +0x2a9:  mov    %dx,0xe(%eax)
0831fee7 +0x2ad:  mov    0x10(%ebp),%eax
0831feea +0x2b0:  imul   $0x9c4,%eax,%eax
0831fef0 +0x2b6:  lea    0x43bfc(%eax),%edx
0831fef6 +0x2bc:  mov    0x8(%ebp),%eax
0831fef9 +0x2bf:  mov    %edx,0x3a(%eax)
0831fefc +0x2c2:  mov    0x10(%ebp),%eax
0831feff +0x2c5:  mov    %eax,%edx
0831ff01 +0x2c7:  mov    %edx,%eax
0831ff03 +0x2c9:  shl    $0x2,%eax
0831ff06 +0x2cc:  add    %edx,%eax
0831ff08 +0x2ce:  shl    $0x2,%eax
0831ff0b +0x2d1:  add    $0xa,%eax
0831ff0e +0x2d4:  mov    %eax,%edx
0831ff10 +0x2d6:  mov    0x8(%ebp),%eax
0831ff13 +0x2d9:  mov    %dx,0x40(%eax)
0831ff17 +0x2dd:  mov    0x10(%ebp),%eax
0831ff1a +0x2e0:  mov    %eax,%edx
0831ff1c +0x2e2:  mov    %edx,%eax
0831ff1e +0x2e4:  shl    $0x2,%eax
0831ff21 +0x2e7:  add    %edx,%eax
0831ff23 +0x2e9:  shl    $0x2,%eax
0831ff26 +0x2ec:  lea    0x25a8(%eax),%edx
0831ff2c +0x2f2:  mov    0x8(%ebp),%eax
0831ff2f +0x2f5:  mov    %dx,0x48(%eax)
0831ff33 +0x2f9:  mov    0x10(%ebp),%eax
0831ff36 +0x2fc:  mov    %eax,%edx
0831ff38 +0x2fe:  mov    %edx,%eax
0831ff3a +0x300:  shl    $0x2,%eax
0831ff3d +0x303:  add    %edx,%eax
0831ff3f +0x305:  add    %eax,%eax
0831ff41 +0x307:  add    $0x137e,%ax
0831ff45 +0x30b:  mov    %eax,%edx
0831ff47 +0x30d:  mov    0x8(%ebp),%eax
0831ff4a +0x310:  mov    %dx,0x4a(%eax)
0831ff4e +0x314:  jmp    083201af <+0x575>
0831ff53 +0x319:  mov    0x10(%ebp),%eax
0831ff56 +0x31c:  imul   $0x190,%eax,%eax
0831ff5c +0x322:  sub    $0x2a3,%eax
0831ff61 +0x327:  mov    %eax,%edx
0831ff63 +0x329:  mov    0x8(%ebp),%eax
0831ff66 +0x32c:  mov    %edx,(%eax)
0831ff68 +0x32e:  mov    0x10(%ebp),%eax
0831ff6b +0x331:  imul   $0x12c,%eax,%eax
0831ff71 +0x337:  add    $0xb9f,%eax
0831ff76 +0x33c:  mov    %eax,%edx
0831ff78 +0x33e:  mov    0x8(%ebp),%eax
0831ff7b +0x341:  mov    %edx,0x4(%eax)
0831ff7e +0x344:  mov    0x10(%ebp),%eax
0831ff81 +0x347:  mov    %eax,%edx
0831ff83 +0x349:  mov    %edx,%eax
0831ff85 +0x34b:  shl    $0x2,%eax
0831ff88 +0x34e:  add    %edx,%eax
0831ff8a +0x350:  lea    0x0(,%eax,8),%edx
0831ff91 +0x357:  mov    %edx,%ecx
0831ff93 +0x359:  sub    %ax,%cx
0831ff96 +0x35c:  mov    %ecx,%eax
0831ff98 +0x35e:  lea    -0x104(%eax),%edx
0831ff9e +0x364:  mov    0x8(%ebp),%eax
0831ffa1 +0x367:  mov    %dx,0x8(%eax)
0831ffa5 +0x36b:  mov    0x10(%ebp),%eax
0831ffa8 +0x36e:  mov    %eax,%edx
0831ffaa +0x370:  mov    %edx,%eax
0831ffac +0x372:  shl    $0x2,%eax
0831ffaf +0x375:  add    %edx,%eax
0831ffb1 +0x377:  lea    0x0(,%eax,4),%edx
0831ffb8 +0x37e:  add    %edx,%eax
0831ffba +0x380:  lea    -0x50(%eax),%edx
0831ffbd +0x383:  mov    0x8(%ebp),%eax
0831ffc0 +0x386:  mov    %dx,0xa(%eax)
0831ffc4 +0x38a:  mov    0x10(%ebp),%eax
0831ffc7 +0x38d:  mov    %eax,%edx
0831ffc9 +0x38f:  mov    %edx,%eax
0831ffcb +0x391:  shl    $0x2,%eax
0831ffce +0x394:  add    %edx,%eax
0831ffd0 +0x396:  lea    0x0(,%eax,8),%edx
0831ffd7 +0x39d:  mov    %edx,%ecx
0831ffd9 +0x39f:  sub    %ax,%cx
0831ffdc +0x3a2:  mov    %ecx,%eax
0831ffde +0x3a4:  lea    0x82(%eax),%edx
0831ffe4 +0x3aa:  mov    0x8(%ebp),%eax
0831ffe7 +0x3ad:  mov    %dx,0xc(%eax)
0831ffeb +0x3b1:  mov    0x10(%ebp),%eax
0831ffee +0x3b4:  mov    %eax,%edx
0831fff0 +0x3b6:  mov    %edx,%eax
0831fff2 +0x3b8:  shl    $0x2,%eax
0831fff5 +0x3bb:  add    %edx,%eax
0831fff7 +0x3bd:  lea    0x0(,%eax,4),%edx
0831fffe +0x3c4:  add    %edx,%eax
08320000 +0x3c6:  lea    0x12c(%eax),%edx
08320006 +0x3cc:  mov    0x8(%ebp),%eax
08320009 +0x3cf:  mov    %dx,0xe(%eax)
0832000d +0x3d3:  mov    0x10(%ebp),%eax
08320010 +0x3d6:  imul   $0x9c4,%eax,%eax
08320016 +0x3dc:  lea    0x43bfc(%eax),%edx
0832001c +0x3e2:  mov    0x8(%ebp),%eax
0832001f +0x3e5:  mov    %edx,0x3a(%eax)
08320022 +0x3e8:  mov    0x10(%ebp),%eax
08320025 +0x3eb:  mov    %eax,%edx
08320027 +0x3ed:  mov    %edx,%eax
08320029 +0x3ef:  shl    $0x2,%eax
0832002c +0x3f2:  add    %edx,%eax
0832002e +0x3f4:  add    %eax,%eax
08320030 +0x3f6:  lea    0x265c(%eax),%edx
08320036 +0x3fc:  mov    0x8(%ebp),%eax
08320039 +0x3ff:  mov    %dx,0x46(%eax)
0832003d +0x403:  mov    0x10(%ebp),%edx
08320040 +0x406:  mov    %edx,%eax
08320042 +0x408:  shl    $0x2,%eax
08320045 +0x40b:  add    %edx,%eax
08320047 +0x40d:  add    %eax,%eax
08320049 +0x40f:  add    $0x265c,%eax
0832004e +0x414:  mov    %eax,%edx
08320050 +0x416:  mov    0x8(%ebp),%eax
08320053 +0x419:  mov    %edx,0x42(%eax)
08320056 +0x41c:  mov    0x10(%ebp),%eax
08320059 +0x41f:  add    %eax,%eax
0832005b +0x421:  mov    %eax,%edx
0832005d +0x423:  shl    $0x4,%edx
08320060 +0x426:  mov    %edx,%ecx
08320062 +0x428:  sub    %ax,%cx
08320065 +0x42b:  mov    %ecx,%eax
08320067 +0x42d:  add    $0x1216,%ax
0832006b +0x431:  mov    %eax,%edx
0832006d +0x433:  mov    0x8(%ebp),%eax
08320070 +0x436:  mov    %dx,0x4a(%eax)
08320074 +0x43a:  mov    0x10(%ebp),%eax
08320077 +0x43d:  mov    %eax,%edx
08320079 +0x43f:  mov    %edx,%eax
0832007b +0x441:  shl    $0x2,%eax
0832007e +0x444:  add    %edx,%eax
08320080 +0x446:  add    %eax,%eax
08320082 +0x448:  add    $0xbe,%ax
08320086 +0x44c:  mov    %eax,%edx
08320088 +0x44e:  mov    0x8(%ebp),%eax
0832008b +0x451:  mov    %dx,0x40(%eax)
0832008f +0x455:  jmp    083201af <+0x575>
08320094 +0x45a:  mov    0x10(%ebp),%eax
08320097 +0x45d:  imul   $0x15e,%eax,%eax
0832009d +0x463:  add    $0xe1,%eax
083200a2 +0x468:  mov    %eax,%edx
083200a4 +0x46a:  mov    0x8(%ebp),%eax
083200a7 +0x46d:  mov    %edx,(%eax)
083200a9 +0x46f:  mov    0x10(%ebp),%eax
083200ac +0x472:  imul   $0x15e,%eax,%eax
083200b2 +0x478:  add    $0x81b,%eax
083200b7 +0x47d:  mov    %eax,%edx
083200b9 +0x47f:  mov    0x8(%ebp),%eax
083200bc +0x482:  mov    %edx,0x4(%eax)
083200bf +0x485:  mov    0x10(%ebp),%eax
083200c2 +0x488:  mov    %eax,%edx
083200c4 +0x48a:  mov    %edx,%eax
083200c6 +0x48c:  shl    $0x2,%eax
083200c9 +0x48f:  add    %edx,%eax
083200cb +0x491:  lea    0x0(,%eax,4),%edx
083200d2 +0x498:  add    %edx,%eax
083200d4 +0x49a:  lea    -0x50(%eax),%edx
083200d7 +0x49d:  mov    0x8(%ebp),%eax
083200da +0x4a0:  mov    %dx,0x8(%eax)
083200de +0x4a4:  mov    0x10(%ebp),%eax
083200e1 +0x4a7:  mov    %eax,%edx
083200e3 +0x4a9:  mov    %edx,%eax
083200e5 +0x4ab:  shl    $0x2,%eax
083200e8 +0x4ae:  add    %edx,%eax
083200ea +0x4b0:  lea    0x0(,%eax,4),%edx
083200f1 +0x4b7:  add    %edx,%eax
083200f3 +0x4b9:  lea    -0x50(%eax),%edx
083200f6 +0x4bc:  mov    0x8(%ebp),%eax
083200f9 +0x4bf:  mov    %dx,0xa(%eax)
083200fd +0x4c3:  mov    0x10(%ebp),%eax
08320100 +0x4c6:  mov    %eax,%edx
08320102 +0x4c8:  mov    %edx,%eax
08320104 +0x4ca:  shl    $0x2,%eax
08320107 +0x4cd:  add    %edx,%eax
08320109 +0x4cf:  lea    0x0(,%eax,8),%edx
08320110 +0x4d6:  mov    %edx,%ecx
08320112 +0x4d8:  sub    %ax,%cx
08320115 +0x4db:  mov    %ecx,%eax
08320117 +0x4dd:  lea    0x82(%eax),%edx
0832011d +0x4e3:  mov    0x8(%ebp),%eax
08320120 +0x4e6:  mov    %dx,0xc(%eax)
08320124 +0x4ea:  mov    0x10(%ebp),%eax
08320127 +0x4ed:  mov    %eax,%edx
08320129 +0x4ef:  mov    %edx,%eax
0832012b +0x4f1:  shl    $0x2,%eax
0832012e +0x4f4:  add    %edx,%eax
08320130 +0x4f6:  lea    0x0(,%eax,8),%edx
08320137 +0x4fd:  mov    %edx,%ecx
08320139 +0x4ff:  sub    %ax,%cx
0832013c +0x502:  mov    %ecx,%eax
0832013e +0x504:  lea    0x78(%eax),%edx
08320141 +0x507:  mov    0x8(%ebp),%eax
08320144 +0x50a:  mov    %dx,0xe(%eax)
08320148 +0x50e:  mov    0x10(%ebp),%eax
0832014b +0x511:  imul   $0x9c4,%eax,%eax
08320151 +0x517:  lea    0x43bfc(%eax),%edx
08320157 +0x51d:  mov    0x8(%ebp),%eax
0832015a +0x520:  mov    %edx,0x3a(%eax)
0832015d +0x523:  mov    0x10(%ebp),%eax
08320160 +0x526:  mov    %eax,%edx
08320162 +0x528:  mov    %edx,%eax
08320164 +0x52a:  shl    $0x2,%eax
08320167 +0x52d:  add    %edx,%eax
08320169 +0x52f:  shl    $0x2,%eax
0832016c +0x532:  add    $0xa,%eax
0832016f +0x535:  mov    %eax,%edx
08320171 +0x537:  mov    0x8(%ebp),%eax
08320174 +0x53a:  mov    %dx,0x40(%eax)
08320178 +0x53e:  mov    0x10(%ebp),%eax
0832017b +0x541:  mov    %eax,%edx
0832017d +0x543:  mov    %edx,%eax
0832017f +0x545:  shl    $0x2,%eax
08320182 +0x548:  add    %edx,%eax
08320184 +0x54a:  add    %eax,%eax
08320186 +0x54c:  lea    0x265c(%eax),%edx
0832018c +0x552:  mov    0x8(%ebp),%eax
0832018f +0x555:  mov    %dx,0x48(%eax)
08320193 +0x559:  mov    0x10(%ebp),%eax
08320196 +0x55c:  mov    %eax,%edx
08320198 +0x55e:  mov    %edx,%eax
0832019a +0x560:  shl    $0x2,%eax
0832019d +0x563:  add    %edx,%eax
0832019f +0x565:  shl    $0x2,%eax
083201a2 +0x568:  add    $0x12ca,%ax
083201a6 +0x56c:  mov    %eax,%edx
083201a8 +0x56e:  mov    0x8(%ebp),%eax
083201ab +0x571:  mov    %dx,0x4a(%eax)
083201af +0x575:  mov    0x8(%ebp),%eax
083201b2 +0x578:  pop    %ebp
083201b3 +0x579:  ret
```

## 反编译 C

```c
// WongWork::CCalcCharacStat::_CalcMage @ 0x831fc3a

/* WongWork::CCalcCharacStat::_CalcMage(_Additioal_info*, int, int) */

_Additioal_info *
WongWork::CCalcCharacStat::_CalcMage(_Additioal_info *param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = (short)param_3;
  switch(param_2) {
  case 0:
    *(int *)param_1 = (param_3 + -1) * 0x145 + 1000;
    *(int *)(param_1 + 4) = (param_3 + -1) * 0x177 + 2000;
    *(short *)(param_1 + 8) = (sVar1 + -1) * 0x14 + 0x1e;
    *(short *)(param_1 + 10) = (sVar1 + -1) * 0x14 + 0x1e;
    *(short *)(param_1 + 0xc) = (sVar1 + -1) * 0x28 + 0x50;
    *(short *)(param_1 + 0xe) = (sVar1 + -1) * 0x28 + 0x46;
    *(int *)(param_1 + 0x3a) = (param_3 + -1) * 0x9c4 + 280000;
    *(short *)(param_1 + 0x40) = (sVar1 + -1) * 10 + 200;
    *(short *)(param_1 + 0x4a) = (sVar1 + -1) * 10 + 5000;
    break;
  case 1:
    *(int *)param_1 = param_3 * 0x113 + 0x627;
    *(int *)(param_1 + 4) = param_3 * 0x1a9 + 0x2d5;
    *(short *)(param_1 + 8) = ((short)(param_3 << 4) - sVar1) + 100;
    *(short *)(param_1 + 10) = ((short)(param_3 << 4) - sVar1) + 100;
    *(short *)(param_1 + 0xc) = sVar1 * 0x2d + -0x32;
    *(short *)(param_1 + 0xe) = sVar1 * 0x2d + -0x3c;
    *(int *)(param_1 + 0x3a) = param_3 * 0x9c4 + 0x43bfc;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + 10;
    *(short *)(param_1 + 0x48) = ((short)(param_3 << 2) + sVar1) * 4 + 0x25a8;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 2 + 0x137e;
    break;
  case 2:
    *(int *)param_1 = param_3 * 300 + 0x465;
    *(int *)(param_1 + 4) = param_3 * 400 + 0x497;
    *(short *)(param_1 + 8) = ((short)(param_3 << 2) + sVar1) * 4 + 10;
    *(short *)(param_1 + 10) = ((short)(param_3 << 2) + sVar1) * 4 + 10;
    *(short *)(param_1 + 0xc) = (sVar1 + 1) * 0x28;
    *(short *)(param_1 + 0xe) = ((short)(param_3 << 2) + sVar1) * 8 + 0x1e;
    *(int *)(param_1 + 0x3a) = param_3 * 0x9c4 + 0x43bfc;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + 10;
    *(short *)(param_1 + 0x48) = ((short)(param_3 << 2) + sVar1) * 4 + 0x25a8;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 2 + 0x137e;
    break;
  case 3:
    *(int *)param_1 = param_3 * 400 + -0x2a3;
    *(int *)(param_1 + 4) = param_3 * 300 + 0xb9f;
    *(short *)(param_1 + 8) = sVar1 * 0x23 + -0x104;
    *(short *)(param_1 + 10) = sVar1 * 0x19 + -0x50;
    *(short *)(param_1 + 0xc) = sVar1 * 0x23 + 0x82;
    *(short *)(param_1 + 0xe) = sVar1 * 0x19 + 300;
    *(int *)(param_1 + 0x3a) = param_3 * 0x9c4 + 0x43bfc;
    *(short *)(param_1 + 0x46) = sVar1 * 10 + 0x265c;
    *(int *)(param_1 + 0x42) = param_3 * 10 + 0x265c;
    *(short *)(param_1 + 0x4a) = (short)(param_3 << 5) + sVar1 * -2 + 0x1216;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 2 + 0xbe;
    break;
  case 4:
    *(int *)param_1 = param_3 * 0x15e + 0xe1;
    *(int *)(param_1 + 4) = param_3 * 0x15e + 0x81b;
    *(short *)(param_1 + 8) = sVar1 * 0x19 + -0x50;
    *(short *)(param_1 + 10) = sVar1 * 0x19 + -0x50;
    *(short *)(param_1 + 0xc) = sVar1 * 0x23 + 0x82;
    *(short *)(param_1 + 0xe) = sVar1 * 0x23 + 0x78;
    *(int *)(param_1 + 0x3a) = param_3 * 0x9c4 + 0x43bfc;
    *(short *)(param_1 + 0x40) = ((short)(param_3 << 2) + sVar1) * 4 + 10;
    *(short *)(param_1 + 0x48) = sVar1 * 10 + 0x265c;
    *(short *)(param_1 + 0x4a) = ((short)(param_3 << 2) + sVar1) * 4 + 0x12ca;
  }
  return param_1;
}
```
