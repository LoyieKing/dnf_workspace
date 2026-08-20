# CheckAccountItem

`_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE`

`global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD` | `0x08197df5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197df5  _GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE
#           global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)
# range [0x08197df5, 0x081981ab]
08197df5 +0x000:  push   %ebp
08197df6 +0x001:  mov    %esp,%ebp
08197df8 +0x003:  sub    $0x18,%esp
08197dfb +0x006:  movl   $0xffff,0x4(%esp)
08197e03 +0x00e:  movl   $0x1,(%esp)
08197e0a +0x015:  call   08197db5 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08197e0f +0x01a:  leave
08197e10 +0x01b:  ret
08197e11 +0x01c:  nop
08197e12 +0x01d:  push   %ebp
08197e13 +0x01e:  mov    %esp,%ebp
08197e15 +0x020:  mov    0x8(%ebp),%eax
08197e18 +0x023:  movzbl 0x14(%eax),%eax
08197e1c +0x027:  pop    %ebp
08197e1d +0x028:  ret
08197e1e +0x029:  push   %ebp
08197e1f +0x02a:  mov    %esp,%ebp
08197e21 +0x02c:  mov    0x8(%ebp),%eax
08197e24 +0x02f:  movl   $&_ZTV10CRabbitBox+0x8,(%eax)
08197e2a +0x035:  mov    0x8(%ebp),%eax
08197e2d +0x038:  movl   $0xffffffff,0x4(%eax)
08197e34 +0x03f:  mov    0x8(%ebp),%eax
08197e37 +0x042:  mov    0x4(%eax),%edx
08197e3a +0x045:  mov    0x8(%ebp),%eax
08197e3d +0x048:  mov    %edx,0x8(%eax)
08197e40 +0x04b:  mov    0x8(%ebp),%eax
08197e43 +0x04e:  mov    0x4(%eax),%edx
08197e46 +0x051:  mov    0x8(%ebp),%eax
08197e49 +0x054:  mov    %edx,0xc(%eax)
08197e4c +0x057:  mov    0x8(%ebp),%eax
08197e4f +0x05a:  mov    0x4(%eax),%edx
08197e52 +0x05d:  mov    0x8(%ebp),%eax
08197e55 +0x060:  mov    %edx,0x10(%eax)
08197e58 +0x063:  pop    %ebp
08197e59 +0x064:  ret
08197e5a +0x065:  push   %ebp
08197e5b +0x066:  mov    %esp,%ebp
08197e5d +0x068:  sub    $0x18,%esp
08197e60 +0x06b:  mov    0x8(%ebp),%eax
08197e63 +0x06e:  movl   $&_ZTV10CRabbitBox+0x8,(%eax)
08197e69 +0x074:  mov    $0x0,%eax
08197e6e +0x079:  test   %al,%al
08197e70 +0x07b:  je     08197e7d <+0x88>
08197e72 +0x07d:  mov    0x8(%ebp),%eax
08197e75 +0x080:  mov    %eax,(%esp)
08197e78 +0x083:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08197e7d +0x088:  leave
08197e7e +0x089:  ret
08197e7f +0x08a:  nop
08197e80 +0x08b:  push   %ebp
08197e81 +0x08c:  mov    %esp,%ebp
08197e83 +0x08e:  sub    $0x18,%esp
08197e86 +0x091:  mov    0x8(%ebp),%eax
08197e89 +0x094:  mov    %eax,(%esp)
08197e8c +0x097:  call   08197e5a <+0x65>
08197e91 +0x09c:  mov    0x8(%ebp),%eax
08197e94 +0x09f:  mov    %eax,(%esp)
08197e97 +0x0a2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08197e9c +0x0a7:  leave
08197e9d +0x0a8:  ret
08197e9e +0x0a9:  push   %ebp
08197e9f +0x0aa:  mov    %esp,%ebp
08197ea1 +0x0ac:  mov    0x8(%ebp),%eax
08197ea4 +0x0af:  mov    0x8(%eax),%eax
08197ea7 +0x0b2:  pop    %ebp
08197ea8 +0x0b3:  ret
08197ea9 +0x0b4:  nop
08197eaa +0x0b5:  push   %ebp
08197eab +0x0b6:  mov    %esp,%ebp
08197ead +0x0b8:  mov    0x8(%ebp),%eax
08197eb0 +0x0bb:  mov    0xc(%eax),%eax
08197eb3 +0x0be:  pop    %ebp
08197eb4 +0x0bf:  ret
08197eb5 +0x0c0:  nop
08197eb6 +0x0c1:  push   %ebp
08197eb7 +0x0c2:  mov    %esp,%ebp
08197eb9 +0x0c4:  mov    0x8(%ebp),%eax
08197ebc +0x0c7:  add    $0x38,%eax
08197ebf +0x0ca:  pop    %ebp
08197ec0 +0x0cb:  ret
08197ec1 +0x0cc:  nop
08197ec2 +0x0cd:  push   %ebp
08197ec3 +0x0ce:  mov    %esp,%ebp
08197ec5 +0x0d0:  mov    0xc(%ebp),%eax
08197ec8 +0x0d3:  mov    0x4(%eax),%edx
08197ecb +0x0d6:  mov    0x8(%ebp),%eax
08197ece +0x0d9:  mov    %edx,0x4(%eax)
08197ed1 +0x0dc:  mov    0xc(%ebp),%eax
08197ed4 +0x0df:  mov    0x8(%eax),%edx
08197ed7 +0x0e2:  mov    0x8(%ebp),%eax
08197eda +0x0e5:  mov    %edx,0x8(%eax)
08197edd +0x0e8:  mov    0xc(%ebp),%eax
08197ee0 +0x0eb:  mov    0xc(%eax),%edx
08197ee3 +0x0ee:  mov    0x8(%ebp),%eax
08197ee6 +0x0f1:  mov    %edx,0xc(%eax)
08197ee9 +0x0f4:  mov    0xc(%ebp),%eax
08197eec +0x0f7:  mov    0x10(%eax),%edx
08197eef +0x0fa:  mov    0x8(%ebp),%eax
08197ef2 +0x0fd:  mov    %edx,0x10(%eax)
08197ef5 +0x100:  mov    0x8(%ebp),%eax
08197ef8 +0x103:  pop    %ebp
08197ef9 +0x104:  ret
08197efa +0x105:  push   %ebp
08197efb +0x106:  mov    %esp,%ebp
08197efd +0x108:  push   %edi
08197efe +0x109:  push   %esi
08197eff +0x10a:  push   %ebx
08197f00 +0x10b:  sub    $0x1c,%esp
08197f03 +0x10e:  mov    $&_ZGVZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEvE3obj,%eax
08197f08 +0x113:  movzbl (%eax),%eax
08197f0b +0x116:  test   %al,%al
08197f0d +0x118:  jne    08197f80 <+0x18b>
08197f0f +0x11a:  movl   $&_ZGVZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEvE3obj,(%esp)
08197f16 +0x121:  call   08725330 <__cxa_guard_acquire>
08197f1b +0x126:  test   %eax,%eax
08197f1d +0x128:  setne  %al
08197f20 +0x12b:  test   %al,%al
08197f22 +0x12d:  je     08197f80 <+0x18b>
08197f24 +0x12f:  mov    $0x0,%ebx
08197f29 +0x134:  movl   $&_ZZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEvE3obj,(%esp)
08197f30 +0x13b:  call   08188030 <_ZN4ARAD16Arad_DataManagerC1Ev>  ; ARAD::Arad_DataManager::Arad_DataManager()
08197f35 +0x140:  movl   $&_ZGVZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEvE3obj,(%esp)
08197f3c +0x147:  call   08725250 <__cxa_guard_release>
08197f41 +0x14c:  mov    $&_ZN4ARAD16Arad_DataManagerD1Ev,%eax
08197f46 +0x151:  movl   $&__dso_handle,0x8(%esp)
08197f4e +0x159:  movl   $&_ZZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEvE3obj,0x4(%esp)
08197f56 +0x161:  mov    %eax,(%esp)
08197f59 +0x164:  call   0807ddd0 <_init+0x6c8>
08197f5e +0x169:  jmp    08197f80 <+0x18b>
08197f60 +0x16b:  mov    %edx,%esi
08197f62 +0x16d:  mov    %eax,%edi
08197f64 +0x16f:  test   %bl,%bl
08197f66 +0x171:  jne    08197f74 <+0x17f>
08197f68 +0x173:  movl   $&_ZGVZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEvE3obj,(%esp)
08197f6f +0x17a:  call   087252c0 <__cxa_guard_abort>
08197f74 +0x17f:  mov    %edi,%eax
08197f76 +0x181:  mov    %esi,%edx
08197f78 +0x183:  mov    %eax,(%esp)
08197f7b +0x186:  call   08ae3750 <_Unwind_Resume>
08197f80 +0x18b:  mov    $&_ZZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEvE3obj,%eax
08197f85 +0x190:  add    $0x1c,%esp
08197f88 +0x193:  pop    %ebx
08197f89 +0x194:  pop    %esi
08197f8a +0x195:  pop    %edi
08197f8b +0x196:  pop    %ebp
08197f8c +0x197:  ret
08197f8d +0x198:  nop
08197f8e +0x199:  push   %ebp
08197f8f +0x19a:  mov    %esp,%ebp
08197f91 +0x19c:  sub    $0x18,%esp
08197f94 +0x19f:  mov    0x8(%ebp),%eax
08197f97 +0x1a2:  mov    (%eax),%eax
08197f99 +0x1a4:  mov    %eax,(%esp)
08197f9c +0x1a7:  call   0819808c <+0x297>
08197fa1 +0x1ac:  leave
08197fa2 +0x1ad:  ret
08197fa3 +0x1ae:  nop
08197fa4 +0x1af:  push   %ebp
08197fa5 +0x1b0:  mov    %esp,%ebp
08197fa7 +0x1b2:  sub    $0x28,%esp
08197faa +0x1b5:  lea    -0x10(%ebp),%eax
08197fad +0x1b8:  mov    0x8(%ebp),%edx
08197fb0 +0x1bb:  mov    %edx,0x4(%esp)
08197fb4 +0x1bf:  mov    %eax,(%esp)
08197fb7 +0x1c2:  call   081980f6 <+0x301>
08197fbc +0x1c7:  sub    $0x4,%esp
08197fbf +0x1ca:  lea    -0xc(%ebp),%eax
08197fc2 +0x1cd:  mov    0x8(%ebp),%edx
08197fc5 +0x1d0:  mov    %edx,0x4(%esp)
08197fc9 +0x1d4:  mov    %eax,(%esp)
08197fcc +0x1d7:  call   08198122 <+0x32d>
08197fd1 +0x1dc:  sub    $0x4,%esp
08197fd4 +0x1df:  lea    -0x10(%ebp),%eax
08197fd7 +0x1e2:  mov    %eax,0x4(%esp)
08197fdb +0x1e6:  lea    -0xc(%ebp),%eax
08197fde +0x1e9:  mov    %eax,(%esp)
08197fe1 +0x1ec:  call   0819814d <+0x358>
08197fe6 +0x1f1:  leave
08197fe7 +0x1f2:  ret
08197fe8 +0x1f3:  push   %ebp
08197fe9 +0x1f4:  mov    %esp,%ebp
08197feb +0x1f6:  mov    0x8(%ebp),%eax
08197fee +0x1f9:  movl   $0x0,(%eax)
08197ff4 +0x1ff:  pop    %ebp
08197ff5 +0x200:  ret
08197ff6 +0x201:  push   %ebp
08197ff7 +0x202:  mov    %esp,%ebp
08197ff9 +0x204:  push   %ebx
08197ffa +0x205:  sub    $0x14,%esp
08197ffd +0x208:  mov    0x8(%ebp),%ebx
08198000 +0x20b:  mov    0xc(%ebp),%eax
08198003 +0x20e:  mov    %eax,0x4(%esp)
08198007 +0x212:  mov    %ebx,(%esp)
0819800a +0x215:  call   0819817a <+0x385>
0819800f +0x21a:  mov    %ebx,%eax
08198011 +0x21c:  add    $0x14,%esp
08198014 +0x21f:  pop    %ebx
08198015 +0x220:  pop    %ebp
08198016 +0x221:  ret    $0x4
08198019 +0x224:  nop
0819801a +0x225:  push   %ebp
0819801b +0x226:  mov    %esp,%ebp
0819801d +0x228:  push   %ebx
0819801e +0x229:  sub    $0x14,%esp
08198021 +0x22c:  mov    0x8(%ebp),%ebx
08198024 +0x22f:  mov    0xc(%ebp),%eax
08198027 +0x232:  add    $0x4,%eax
0819802a +0x235:  mov    %eax,0x4(%esp)
0819802e +0x239:  mov    %ebx,(%esp)
08198031 +0x23c:  call   0819817a <+0x385>
08198036 +0x241:  mov    %ebx,%eax
08198038 +0x243:  add    $0x14,%esp
0819803b +0x246:  pop    %ebx
0819803c +0x247:  pop    %ebp
0819803d +0x248:  ret    $0x4
08198040 +0x24b:  push   %ebp
08198041 +0x24c:  mov    %esp,%ebp
08198043 +0x24e:  push   %ebx
08198044 +0x24f:  sub    $0x14,%esp
08198047 +0x252:  mov    0x8(%ebp),%eax
0819804a +0x255:  mov    %eax,(%esp)
0819804d +0x258:  call   0819818a <+0x395>
08198052 +0x25d:  mov    (%eax),%ebx
08198054 +0x25f:  mov    0xc(%ebp),%eax
08198057 +0x262:  mov    %eax,(%esp)
0819805a +0x265:  call   0819818a <+0x395>
0819805f +0x26a:  mov    (%eax),%eax
08198061 +0x26c:  cmp    %eax,%ebx
08198063 +0x26e:  setne  %al
08198066 +0x271:  add    $0x14,%esp
08198069 +0x274:  pop    %ebx
0819806a +0x275:  pop    %ebp
0819806b +0x276:  ret
0819806c +0x277:  push   %ebp
0819806d +0x278:  mov    %esp,%ebp
0819806f +0x27a:  mov    0x8(%ebp),%eax
08198072 +0x27d:  mov    (%eax),%eax
08198074 +0x27f:  lea    0x14(%eax),%edx
08198077 +0x282:  mov    0x8(%ebp),%eax
0819807a +0x285:  mov    %edx,(%eax)
0819807c +0x287:  mov    0x8(%ebp),%eax
0819807f +0x28a:  pop    %ebp
08198080 +0x28b:  ret
08198081 +0x28c:  nop
08198082 +0x28d:  push   %ebp
08198083 +0x28e:  mov    %esp,%ebp
08198085 +0x290:  mov    0x8(%ebp),%eax
08198088 +0x293:  mov    (%eax),%eax
0819808a +0x295:  pop    %ebp
0819808b +0x296:  ret
0819808c +0x297:  push   %ebp
0819808d +0x298:  mov    %esp,%ebp
0819808f +0x29a:  sub    $0x28,%esp
08198092 +0x29d:  jmp    081980b0 <+0x2bb>
08198094 +0x29f:  mov    0x8(%ebp),%eax
08198097 +0x2a2:  mov    %eax,(%esp)
0819809a +0x2a5:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0819809f +0x2aa:  add    %eax,%eax
081980a1 +0x2ac:  mov    %eax,0x4(%esp)
081980a5 +0x2b0:  mov    0x8(%ebp),%eax
081980a8 +0x2b3:  mov    %eax,(%esp)
081980ab +0x2b6:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
081980b0 +0x2bb:  movl   $0x168,0x4(%esp)
081980b8 +0x2c3:  mov    0x8(%ebp),%eax
081980bb +0x2c6:  mov    %eax,(%esp)
081980be +0x2c9:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
081980c3 +0x2ce:  xor    $0x1,%eax
081980c6 +0x2d1:  test   %al,%al
081980c8 +0x2d3:  jne    08198094 <+0x29f>
081980ca +0x2d5:  mov    0x8(%ebp),%eax
081980cd +0x2d8:  mov    0x8(%eax),%eax
081980d0 +0x2db:  mov    %eax,%edx
081980d2 +0x2dd:  mov    0x8(%ebp),%eax
081980d5 +0x2e0:  mov    0xc(%eax),%eax
081980d8 +0x2e3:  lea    (%edx,%eax,1),%eax
081980db +0x2e6:  mov    %eax,-0xc(%ebp)
081980de +0x2e9:  movl   $0x168,0x4(%esp)
081980e6 +0x2f1:  mov    0x8(%ebp),%eax
081980e9 +0x2f4:  mov    %eax,(%esp)
081980ec +0x2f7:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
081980f1 +0x2fc:  mov    -0xc(%ebp),%eax
081980f4 +0x2ff:  leave
081980f5 +0x300:  ret
081980f6 +0x301:  push   %ebp
081980f7 +0x302:  mov    %esp,%ebp
081980f9 +0x304:  push   %ebx
081980fa +0x305:  sub    $0x24,%esp
081980fd +0x308:  mov    0x8(%ebp),%ebx
08198100 +0x30b:  mov    0xc(%ebp),%eax
08198103 +0x30e:  mov    0x4(%eax),%eax
08198106 +0x311:  mov    %eax,-0xc(%ebp)
08198109 +0x314:  lea    -0xc(%ebp),%eax
0819810c +0x317:  mov    %eax,0x4(%esp)
08198110 +0x31b:  mov    %ebx,(%esp)
08198113 +0x31e:  call   08198192 <+0x39d>
08198118 +0x323:  mov    %ebx,%eax
0819811a +0x325:  add    $0x24,%esp
0819811d +0x328:  pop    %ebx
0819811e +0x329:  pop    %ebp
0819811f +0x32a:  ret    $0x4
08198122 +0x32d:  push   %ebp
08198123 +0x32e:  mov    %esp,%ebp
08198125 +0x330:  push   %ebx
08198126 +0x331:  sub    $0x24,%esp
08198129 +0x334:  mov    0x8(%ebp),%ebx
0819812c +0x337:  mov    0xc(%ebp),%eax
0819812f +0x33a:  mov    (%eax),%eax
08198131 +0x33c:  mov    %eax,-0xc(%ebp)
08198134 +0x33f:  lea    -0xc(%ebp),%eax
08198137 +0x342:  mov    %eax,0x4(%esp)
0819813b +0x346:  mov    %ebx,(%esp)
0819813e +0x349:  call   08198192 <+0x39d>
08198143 +0x34e:  mov    %ebx,%eax
08198145 +0x350:  add    $0x24,%esp
08198148 +0x353:  pop    %ebx
08198149 +0x354:  pop    %ebp
0819814a +0x355:  ret    $0x4
0819814d +0x358:  push   %ebp
0819814e +0x359:  mov    %esp,%ebp
08198150 +0x35b:  push   %ebx
08198151 +0x35c:  sub    $0x14,%esp
08198154 +0x35f:  mov    0x8(%ebp),%eax
08198157 +0x362:  mov    %eax,(%esp)
0819815a +0x365:  call   081981a2 <+0x3ad>
0819815f +0x36a:  mov    (%eax),%ebx
08198161 +0x36c:  mov    0xc(%ebp),%eax
08198164 +0x36f:  mov    %eax,(%esp)
08198167 +0x372:  call   081981a2 <+0x3ad>
0819816c +0x377:  mov    (%eax),%eax
0819816e +0x379:  cmp    %eax,%ebx
08198170 +0x37b:  sete   %al
08198173 +0x37e:  add    $0x14,%esp
08198176 +0x381:  pop    %ebx
08198177 +0x382:  pop    %ebp
08198178 +0x383:  ret
08198179 +0x384:  nop
0819817a +0x385:  push   %ebp
0819817b +0x386:  mov    %esp,%ebp
0819817d +0x388:  mov    0xc(%ebp),%eax
08198180 +0x38b:  mov    (%eax),%edx
08198182 +0x38d:  mov    0x8(%ebp),%eax
08198185 +0x390:  mov    %edx,(%eax)
08198187 +0x392:  pop    %ebp
08198188 +0x393:  ret
08198189 +0x394:  nop
0819818a +0x395:  push   %ebp
0819818b +0x396:  mov    %esp,%ebp
0819818d +0x398:  mov    0x8(%ebp),%eax
08198190 +0x39b:  pop    %ebp
08198191 +0x39c:  ret
08198192 +0x39d:  push   %ebp
08198193 +0x39e:  mov    %esp,%ebp
08198195 +0x3a0:  mov    0xc(%ebp),%eax
08198198 +0x3a3:  mov    (%eax),%edx
0819819a +0x3a5:  mov    0x8(%ebp),%eax
0819819d +0x3a8:  mov    %edx,(%eax)
0819819f +0x3aa:  pop    %ebp
081981a0 +0x3ab:  ret
081981a1 +0x3ac:  nop
081981a2 +0x3ad:  push   %ebp
081981a3 +0x3ae:  mov    %esp,%ebp
081981a5 +0x3b0:  mov    0x8(%ebp),%eax
081981a8 +0x3b3:  pop    %ebp
081981a9 +0x3b4:  ret
081981aa +0x3b5:  nop
081981ab +0x3b6:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8197df5

/* ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&) */

void ARAD::_GLOBAL__I_CheckAccountItem(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
