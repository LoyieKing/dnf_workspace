# TaiwanInternalDispatcher

`_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev`

`global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TaiwanInternalDispatcher` | `0x08161d92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08161d92  _GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev
#           global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()
# range [0x08161d92, 0x0816393b]
08161d92 +0x0000:  push   %ebp
08161d93 +0x0001:  mov    %esp,%ebp
08161d95 +0x0003:  sub    $0x18,%esp
08161d98 +0x0006:  movl   $0xffff,0x4(%esp)
08161da0 +0x000e:  movl   $0x1,(%esp)
08161da7 +0x0015:  call   08161d52 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08161dac +0x001a:  leave
08161dad +0x001b:  ret
08161dae +0x001c:  push   %ebp
08161daf +0x001d:  mov    %esp,%ebp
08161db1 +0x001f:  sub    $0x18,%esp
08161db4 +0x0022:  mov    0x8(%ebp),%eax
08161db7 +0x0025:  movl   $0x35,0x8(%esp)
08161dbf +0x002d:  movl   $0x27fd,0x4(%esp)
08161dc7 +0x0035:  mov    %eax,(%esp)
08161dca +0x0038:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
08161dcf +0x003d:  mov    0x8(%ebp),%eax
08161dd2 +0x0040:  movw   $0x0,0xa(%eax)
08161dd8 +0x0046:  mov    0x8(%ebp),%eax
08161ddb +0x0049:  movb   $0xff,0xc(%eax)
08161ddf +0x004d:  mov    0x8(%ebp),%eax
08161de2 +0x0050:  movl   $0x0,0xd(%eax)
08161de9 +0x0057:  mov    0x8(%ebp),%eax
08161dec +0x005a:  movl   $0x0,0x11(%eax)
08161df3 +0x0061:  mov    0x8(%ebp),%eax
08161df6 +0x0064:  add    $0x15,%eax
08161df9 +0x0067:  movl   $0x10,0x8(%esp)
08161e01 +0x006f:  movl   $0x0,0x4(%esp)
08161e09 +0x0077:  mov    %eax,(%esp)
08161e0c +0x007a:  call   0807dcc0 <_init+0x5b8>
08161e11 +0x007f:  mov    0x8(%ebp),%eax
08161e14 +0x0082:  add    $0x25,%eax
08161e17 +0x0085:  movl   $0x10,0x8(%esp)
08161e1f +0x008d:  movl   $0x0,0x4(%esp)
08161e27 +0x0095:  mov    %eax,(%esp)
08161e2a +0x0098:  call   0807dcc0 <_init+0x5b8>
08161e2f +0x009d:  leave
08161e30 +0x009e:  ret
08161e31 +0x009f:  nop
08161e32 +0x00a0:  push   %ebp
08161e33 +0x00a1:  mov    %esp,%ebp
08161e35 +0x00a3:  mov    0x8(%ebp),%eax
08161e38 +0x00a6:  movl   $&_ZTV30TaiwanInterfaceInterDispatcher+0x8,(%eax)
08161e3e +0x00ac:  mov    0x8(%ebp),%eax
08161e41 +0x00af:  mov    0xc(%ebp),%edx
08161e44 +0x00b2:  mov    %edx,0x4(%eax)
08161e47 +0x00b5:  pop    %ebp
08161e48 +0x00b6:  ret
08161e49 +0x00b7:  nop
08161e4a +0x00b8:  push   %ebp
08161e4b +0x00b9:  mov    %esp,%ebp
08161e4d +0x00bb:  sub    $0x18,%esp
08161e50 +0x00be:  mov    0x8(%ebp),%eax
08161e53 +0x00c1:  movl   $&_ZTV30TaiwanInterfaceInterDispatcher+0x8,(%eax)
08161e59 +0x00c7:  mov    $0x0,%eax
08161e5e +0x00cc:  test   %al,%al
08161e60 +0x00ce:  je     08161e6d <+0xdb>
08161e62 +0x00d0:  mov    0x8(%ebp),%eax
08161e65 +0x00d3:  mov    %eax,(%esp)
08161e68 +0x00d6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08161e6d +0x00db:  leave
08161e6e +0x00dc:  ret
08161e6f +0x00dd:  nop
08161e70 +0x00de:  push   %ebp
08161e71 +0x00df:  mov    %esp,%ebp
08161e73 +0x00e1:  sub    $0x18,%esp
08161e76 +0x00e4:  mov    0x8(%ebp),%eax
08161e79 +0x00e7:  mov    %eax,(%esp)
08161e7c +0x00ea:  call   08161e4a <+0xb8>
08161e81 +0x00ef:  mov    0x8(%ebp),%eax
08161e84 +0x00f2:  mov    %eax,(%esp)
08161e87 +0x00f5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08161e8c +0x00fa:  leave
08161e8d +0x00fb:  ret
08161e8e +0x00fc:  push   %ebp
08161e8f +0x00fd:  mov    %esp,%ebp
08161e91 +0x00ff:  mov    0x8(%ebp),%eax
08161e94 +0x0102:  mov    0x4(%eax),%eax
08161e97 +0x0105:  pop    %ebp
08161e98 +0x0106:  ret
08161e99 +0x0107:  nop
08161e9a +0x0108:  push   %ebp
08161e9b +0x0109:  mov    %esp,%ebp
08161e9d +0x010b:  sub    $0x18,%esp
08161ea0 +0x010e:  mov    0xc(%ebp),%eax
08161ea3 +0x0111:  mov    0x4(%eax),%eax
08161ea6 +0x0114:  test   %eax,%eax
08161ea8 +0x0116:  je     08161ec2 <+0x130>
08161eaa +0x0118:  mov    0xc(%ebp),%eax
08161ead +0x011b:  mov    0x4(%eax),%eax
08161eb0 +0x011e:  mov    (%eax),%eax
08161eb2 +0x0120:  add    $0x4,%eax
08161eb5 +0x0123:  mov    (%eax),%edx
08161eb7 +0x0125:  mov    0xc(%ebp),%eax
08161eba +0x0128:  mov    0x4(%eax),%eax
08161ebd +0x012b:  mov    %eax,(%esp)
08161ec0 +0x012e:  call   *%edx
08161ec2 +0x0130:  leave
08161ec3 +0x0131:  ret
08161ec4 +0x0132:  push   %ebp
08161ec5 +0x0133:  mov    %esp,%ebp
08161ec7 +0x0135:  sub    $0x18,%esp
08161eca +0x0138:  mov    0x8(%ebp),%eax
08161ecd +0x013b:  movl   $0x1,0x4(%esp)
08161ed5 +0x0143:  mov    %eax,(%esp)
08161ed8 +0x0146:  call   08161e32 <+0xa0>
08161edd +0x014b:  mov    0x8(%ebp),%eax
08161ee0 +0x014e:  movl   $&_ZTV30InterLoadServiceRestrictPolicy+0x8,(%eax)
08161ee6 +0x0154:  leave
08161ee7 +0x0155:  ret
08161ee8 +0x0156:  push   %ebp
08161ee9 +0x0157:  mov    %esp,%ebp
08161eeb +0x0159:  sub    $0x18,%esp
08161eee +0x015c:  mov    0x8(%ebp),%eax
08161ef1 +0x015f:  movl   $&_ZTV30InterLoadServiceRestrictPolicy+0x8,(%eax)
08161ef7 +0x0165:  mov    0x8(%ebp),%eax
08161efa +0x0168:  mov    %eax,(%esp)
08161efd +0x016b:  call   08161e4a <+0xb8>
08161f02 +0x0170:  mov    $0x0,%eax
08161f07 +0x0175:  test   %al,%al
08161f09 +0x0177:  je     08161f16 <+0x184>
08161f0b +0x0179:  mov    0x8(%ebp),%eax
08161f0e +0x017c:  mov    %eax,(%esp)
08161f11 +0x017f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08161f16 +0x0184:  leave
08161f17 +0x0185:  ret
08161f18 +0x0186:  push   %ebp
08161f19 +0x0187:  mov    %esp,%ebp
08161f1b +0x0189:  sub    $0x18,%esp
08161f1e +0x018c:  mov    0x8(%ebp),%eax
08161f21 +0x018f:  mov    %eax,(%esp)
08161f24 +0x0192:  call   08161ee8 <+0x156>
08161f29 +0x0197:  mov    0x8(%ebp),%eax
08161f2c +0x019a:  mov    %eax,(%esp)
08161f2f +0x019d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08161f34 +0x01a2:  leave
08161f35 +0x01a3:  ret
08161f36 +0x01a4:  push   %ebp
08161f37 +0x01a5:  mov    %esp,%ebp
08161f39 +0x01a7:  sub    $0x18,%esp
08161f3c +0x01aa:  mov    0x8(%ebp),%eax
08161f3f +0x01ad:  movl   $0x4,0x4(%esp)
08161f47 +0x01b5:  mov    %eax,(%esp)
08161f4a +0x01b8:  call   08161e32 <+0xa0>
08161f4f +0x01bd:  mov    0x8(%ebp),%eax
08161f52 +0x01c0:  movl   $&_ZTV20InterLoadGeolocation+0x8,(%eax)
08161f58 +0x01c6:  leave
08161f59 +0x01c7:  ret
08161f5a +0x01c8:  push   %ebp
08161f5b +0x01c9:  mov    %esp,%ebp
08161f5d +0x01cb:  sub    $0x18,%esp
08161f60 +0x01ce:  mov    0x8(%ebp),%eax
08161f63 +0x01d1:  movl   $&_ZTV20InterLoadGeolocation+0x8,(%eax)
08161f69 +0x01d7:  mov    0x8(%ebp),%eax
08161f6c +0x01da:  mov    %eax,(%esp)
08161f6f +0x01dd:  call   08161e4a <+0xb8>
08161f74 +0x01e2:  mov    $0x0,%eax
08161f79 +0x01e7:  test   %al,%al
08161f7b +0x01e9:  je     08161f88 <+0x1f6>
08161f7d +0x01eb:  mov    0x8(%ebp),%eax
08161f80 +0x01ee:  mov    %eax,(%esp)
08161f83 +0x01f1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08161f88 +0x01f6:  leave
08161f89 +0x01f7:  ret
08161f8a +0x01f8:  push   %ebp
08161f8b +0x01f9:  mov    %esp,%ebp
08161f8d +0x01fb:  sub    $0x18,%esp
08161f90 +0x01fe:  mov    0x8(%ebp),%eax
08161f93 +0x0201:  mov    %eax,(%esp)
08161f96 +0x0204:  call   08161f5a <+0x1c8>
08161f9b +0x0209:  mov    0x8(%ebp),%eax
08161f9e +0x020c:  mov    %eax,(%esp)
08161fa1 +0x020f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08161fa6 +0x0214:  leave
08161fa7 +0x0215:  ret
08161fa8 +0x0216:  push   %ebp
08161fa9 +0x0217:  mov    %esp,%ebp
08161fab +0x0219:  sub    $0x18,%esp
08161fae +0x021c:  mov    0x8(%ebp),%eax
08161fb1 +0x021f:  movl   $0x5,0x4(%esp)
08161fb9 +0x0227:  mov    %eax,(%esp)
08161fbc +0x022a:  call   08161e32 <+0xa0>
08161fc1 +0x022f:  mov    0x8(%ebp),%eax
08161fc4 +0x0232:  movl   $&_ZTV23InterCheckStayTimeEvent+0x8,(%eax)
08161fca +0x0238:  leave
08161fcb +0x0239:  ret
08161fcc +0x023a:  push   %ebp
08161fcd +0x023b:  mov    %esp,%ebp
08161fcf +0x023d:  sub    $0x18,%esp
08161fd2 +0x0240:  mov    0x8(%ebp),%eax
08161fd5 +0x0243:  movl   $&_ZTV23InterCheckStayTimeEvent+0x8,(%eax)
08161fdb +0x0249:  mov    0x8(%ebp),%eax
08161fde +0x024c:  mov    %eax,(%esp)
08161fe1 +0x024f:  call   08161e4a <+0xb8>
08161fe6 +0x0254:  mov    $0x0,%eax
08161feb +0x0259:  test   %al,%al
08161fed +0x025b:  je     08161ffa <+0x268>
08161fef +0x025d:  mov    0x8(%ebp),%eax
08161ff2 +0x0260:  mov    %eax,(%esp)
08161ff5 +0x0263:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08161ffa +0x0268:  leave
08161ffb +0x0269:  ret
08161ffc +0x026a:  push   %ebp
08161ffd +0x026b:  mov    %esp,%ebp
08161fff +0x026d:  sub    $0x18,%esp
08162002 +0x0270:  mov    0x8(%ebp),%eax
08162005 +0x0273:  mov    %eax,(%esp)
08162008 +0x0276:  call   08161fcc <+0x23a>
0816200d +0x027b:  mov    0x8(%ebp),%eax
08162010 +0x027e:  mov    %eax,(%esp)
08162013 +0x0281:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08162018 +0x0286:  leave
08162019 +0x0287:  ret
0816201a +0x0288:  push   %ebp
0816201b +0x0289:  mov    %esp,%ebp
0816201d +0x028b:  sub    $0x18,%esp
08162020 +0x028e:  mov    0x8(%ebp),%eax
08162023 +0x0291:  movl   $0x9,0x4(%esp)
0816202b +0x0299:  mov    %eax,(%esp)
0816202e +0x029c:  call   08161e32 <+0xa0>
08162033 +0x02a1:  mov    0x8(%ebp),%eax
08162036 +0x02a4:  movl   $&_ZTV29InterSelectCreateDnfEventInfo+0x8,(%eax)
0816203c +0x02aa:  leave
0816203d +0x02ab:  ret
0816203e +0x02ac:  push   %ebp
0816203f +0x02ad:  mov    %esp,%ebp
08162041 +0x02af:  sub    $0x18,%esp
08162044 +0x02b2:  mov    0x8(%ebp),%eax
08162047 +0x02b5:  movl   $&_ZTV29InterSelectCreateDnfEventInfo+0x8,(%eax)
0816204d +0x02bb:  mov    0x8(%ebp),%eax
08162050 +0x02be:  mov    %eax,(%esp)
08162053 +0x02c1:  call   08161e4a <+0xb8>
08162058 +0x02c6:  mov    $0x0,%eax
0816205d +0x02cb:  test   %al,%al
0816205f +0x02cd:  je     0816206c <+0x2da>
08162061 +0x02cf:  mov    0x8(%ebp),%eax
08162064 +0x02d2:  mov    %eax,(%esp)
08162067 +0x02d5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816206c +0x02da:  leave
0816206d +0x02db:  ret
0816206e +0x02dc:  push   %ebp
0816206f +0x02dd:  mov    %esp,%ebp
08162071 +0x02df:  sub    $0x18,%esp
08162074 +0x02e2:  mov    0x8(%ebp),%eax
08162077 +0x02e5:  mov    %eax,(%esp)
0816207a +0x02e8:  call   0816203e <+0x2ac>
0816207f +0x02ed:  mov    0x8(%ebp),%eax
08162082 +0x02f0:  mov    %eax,(%esp)
08162085 +0x02f3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816208a +0x02f8:  leave
0816208b +0x02f9:  ret
0816208c +0x02fa:  push   %ebp
0816208d +0x02fb:  mov    %esp,%ebp
0816208f +0x02fd:  sub    $0x18,%esp
08162092 +0x0300:  mov    0x8(%ebp),%eax
08162095 +0x0303:  movl   $0xa,0x4(%esp)
0816209d +0x030b:  mov    %eax,(%esp)
081620a0 +0x030e:  call   08161e32 <+0xa0>
081620a5 +0x0313:  mov    0x8(%ebp),%eax
081620a8 +0x0316:  movl   $&_ZTV28InterSelectCreateDnfUserInfo+0x8,(%eax)
081620ae +0x031c:  leave
081620af +0x031d:  ret
081620b0 +0x031e:  push   %ebp
081620b1 +0x031f:  mov    %esp,%ebp
081620b3 +0x0321:  sub    $0x18,%esp
081620b6 +0x0324:  mov    0x8(%ebp),%eax
081620b9 +0x0327:  movl   $&_ZTV28InterSelectCreateDnfUserInfo+0x8,(%eax)
081620bf +0x032d:  mov    0x8(%ebp),%eax
081620c2 +0x0330:  mov    %eax,(%esp)
081620c5 +0x0333:  call   08161e4a <+0xb8>
081620ca +0x0338:  mov    $0x0,%eax
081620cf +0x033d:  test   %al,%al
081620d1 +0x033f:  je     081620de <+0x34c>
081620d3 +0x0341:  mov    0x8(%ebp),%eax
081620d6 +0x0344:  mov    %eax,(%esp)
081620d9 +0x0347:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081620de +0x034c:  leave
081620df +0x034d:  ret
081620e0 +0x034e:  push   %ebp
081620e1 +0x034f:  mov    %esp,%ebp
081620e3 +0x0351:  sub    $0x18,%esp
081620e6 +0x0354:  mov    0x8(%ebp),%eax
081620e9 +0x0357:  mov    %eax,(%esp)
081620ec +0x035a:  call   081620b0 <+0x31e>
081620f1 +0x035f:  mov    0x8(%ebp),%eax
081620f4 +0x0362:  mov    %eax,(%esp)
081620f7 +0x0365:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081620fc +0x036a:  leave
081620fd +0x036b:  ret
081620fe +0x036c:  push   %ebp
081620ff +0x036d:  mov    %esp,%ebp
08162101 +0x036f:  sub    $0x18,%esp
08162104 +0x0372:  mov    0x8(%ebp),%eax
08162107 +0x0375:  movl   $0xc,0x4(%esp)
0816210f +0x037d:  mov    %eax,(%esp)
08162112 +0x0380:  call   08161e32 <+0xa0>
08162117 +0x0385:  mov    0x8(%ebp),%eax
0816211a +0x0388:  movl   $&_ZTV27InterSelectMobileAuthReward+0x8,(%eax)
08162120 +0x038e:  leave
08162121 +0x038f:  ret
08162122 +0x0390:  push   %ebp
08162123 +0x0391:  mov    %esp,%ebp
08162125 +0x0393:  sub    $0x18,%esp
08162128 +0x0396:  mov    0x8(%ebp),%eax
0816212b +0x0399:  movl   $&_ZTV27InterSelectMobileAuthReward+0x8,(%eax)
08162131 +0x039f:  mov    0x8(%ebp),%eax
08162134 +0x03a2:  mov    %eax,(%esp)
08162137 +0x03a5:  call   08161e4a <+0xb8>
0816213c +0x03aa:  mov    $0x0,%eax
08162141 +0x03af:  test   %al,%al
08162143 +0x03b1:  je     08162150 <+0x3be>
08162145 +0x03b3:  mov    0x8(%ebp),%eax
08162148 +0x03b6:  mov    %eax,(%esp)
0816214b +0x03b9:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08162150 +0x03be:  leave
08162151 +0x03bf:  ret
08162152 +0x03c0:  push   %ebp
08162153 +0x03c1:  mov    %esp,%ebp
08162155 +0x03c3:  sub    $0x18,%esp
08162158 +0x03c6:  mov    0x8(%ebp),%eax
0816215b +0x03c9:  mov    %eax,(%esp)
0816215e +0x03cc:  call   08162122 <+0x390>
08162163 +0x03d1:  mov    0x8(%ebp),%eax
08162166 +0x03d4:  mov    %eax,(%esp)
08162169 +0x03d7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816216e +0x03dc:  leave
0816216f +0x03dd:  ret
08162170 +0x03de:  push   %ebp
08162171 +0x03df:  mov    %esp,%ebp
08162173 +0x03e1:  sub    $0x18,%esp
08162176 +0x03e4:  mov    0x8(%ebp),%eax
08162179 +0x03e7:  movl   $0xd,0x4(%esp)
08162181 +0x03ef:  mov    %eax,(%esp)
08162184 +0x03f2:  call   08161e32 <+0xa0>
08162189 +0x03f7:  mov    0x8(%ebp),%eax
0816218c +0x03fa:  movl   $&_ZTV28InterSelectPcroomDailyReward+0x8,(%eax)
08162192 +0x0400:  leave
08162193 +0x0401:  ret
08162194 +0x0402:  push   %ebp
08162195 +0x0403:  mov    %esp,%ebp
08162197 +0x0405:  sub    $0x18,%esp
0816219a +0x0408:  mov    0x8(%ebp),%eax
0816219d +0x040b:  movl   $&_ZTV28InterSelectPcroomDailyReward+0x8,(%eax)
081621a3 +0x0411:  mov    0x8(%ebp),%eax
081621a6 +0x0414:  mov    %eax,(%esp)
081621a9 +0x0417:  call   08161e4a <+0xb8>
081621ae +0x041c:  mov    $0x0,%eax
081621b3 +0x0421:  test   %al,%al
081621b5 +0x0423:  je     081621c2 <+0x430>
081621b7 +0x0425:  mov    0x8(%ebp),%eax
081621ba +0x0428:  mov    %eax,(%esp)
081621bd +0x042b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081621c2 +0x0430:  leave
081621c3 +0x0431:  ret
081621c4 +0x0432:  push   %ebp
081621c5 +0x0433:  mov    %esp,%ebp
081621c7 +0x0435:  sub    $0x18,%esp
081621ca +0x0438:  mov    0x8(%ebp),%eax
081621cd +0x043b:  mov    %eax,(%esp)
081621d0 +0x043e:  call   08162194 <+0x402>
081621d5 +0x0443:  mov    0x8(%ebp),%eax
081621d8 +0x0446:  mov    %eax,(%esp)
081621db +0x0449:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081621e0 +0x044e:  leave
081621e1 +0x044f:  ret
081621e2 +0x0450:  push   %ebp
081621e3 +0x0451:  mov    %esp,%ebp
081621e5 +0x0453:  sub    $0x18,%esp
081621e8 +0x0456:  mov    0x8(%ebp),%eax
081621eb +0x0459:  movl   $0xf,0x4(%esp)
081621f3 +0x0461:  mov    %eax,(%esp)
081621f6 +0x0464:  call   08161e32 <+0xa0>
081621fb +0x0469:  mov    0x8(%ebp),%eax
081621fe +0x046c:  movl   $&_ZTV31InterUpdateP2pHolePunchingState+0x8,(%eax)
08162204 +0x0472:  leave
08162205 +0x0473:  ret
08162206 +0x0474:  push   %ebp
08162207 +0x0475:  mov    %esp,%ebp
08162209 +0x0477:  sub    $0x18,%esp
0816220c +0x047a:  mov    0x8(%ebp),%eax
0816220f +0x047d:  movl   $&_ZTV31InterUpdateP2pHolePunchingState+0x8,(%eax)
08162215 +0x0483:  mov    0x8(%ebp),%eax
08162218 +0x0486:  mov    %eax,(%esp)
0816221b +0x0489:  call   08161e4a <+0xb8>
08162220 +0x048e:  mov    $0x0,%eax
08162225 +0x0493:  test   %al,%al
08162227 +0x0495:  je     08162234 <+0x4a2>
08162229 +0x0497:  mov    0x8(%ebp),%eax
0816222c +0x049a:  mov    %eax,(%esp)
0816222f +0x049d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08162234 +0x04a2:  leave
08162235 +0x04a3:  ret
08162236 +0x04a4:  push   %ebp
08162237 +0x04a5:  mov    %esp,%ebp
08162239 +0x04a7:  sub    $0x18,%esp
0816223c +0x04aa:  mov    0x8(%ebp),%eax
0816223f +0x04ad:  mov    %eax,(%esp)
08162242 +0x04b0:  call   08162206 <+0x474>
08162247 +0x04b5:  mov    0x8(%ebp),%eax
0816224a +0x04b8:  mov    %eax,(%esp)
0816224d +0x04bb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08162252 +0x04c0:  leave
08162253 +0x04c1:  ret
08162254 +0x04c2:  push   %ebp
08162255 +0x04c3:  mov    %esp,%ebp
08162257 +0x04c5:  sub    $0x18,%esp
0816225a +0x04c8:  mov    0x8(%ebp),%eax
0816225d +0x04cb:  movl   $0x10,0x4(%esp)
08162265 +0x04d3:  mov    %eax,(%esp)
08162268 +0x04d6:  call   08161e32 <+0xa0>
0816226d +0x04db:  mov    0x8(%ebp),%eax
08162270 +0x04de:  movl   $&_ZTV29InterInsertGiveBoxEventReward+0x8,(%eax)
08162276 +0x04e4:  leave
08162277 +0x04e5:  ret
08162278 +0x04e6:  push   %ebp
08162279 +0x04e7:  mov    %esp,%ebp
0816227b +0x04e9:  sub    $0x18,%esp
0816227e +0x04ec:  mov    0x8(%ebp),%eax
08162281 +0x04ef:  movl   $&_ZTV29InterInsertGiveBoxEventReward+0x8,(%eax)
08162287 +0x04f5:  mov    0x8(%ebp),%eax
0816228a +0x04f8:  mov    %eax,(%esp)
0816228d +0x04fb:  call   08161e4a <+0xb8>
08162292 +0x0500:  mov    $0x0,%eax
08162297 +0x0505:  test   %al,%al
08162299 +0x0507:  je     081622a6 <+0x514>
0816229b +0x0509:  mov    0x8(%ebp),%eax
0816229e +0x050c:  mov    %eax,(%esp)
081622a1 +0x050f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081622a6 +0x0514:  leave
081622a7 +0x0515:  ret
081622a8 +0x0516:  push   %ebp
081622a9 +0x0517:  mov    %esp,%ebp
081622ab +0x0519:  sub    $0x18,%esp
081622ae +0x051c:  mov    0x8(%ebp),%eax
081622b1 +0x051f:  mov    %eax,(%esp)
081622b4 +0x0522:  call   08162278 <+0x4e6>
081622b9 +0x0527:  mov    0x8(%ebp),%eax
081622bc +0x052a:  mov    %eax,(%esp)
081622bf +0x052d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081622c4 +0x0532:  leave
081622c5 +0x0533:  ret
081622c6 +0x0534:  push   %ebp
081622c7 +0x0535:  mov    %esp,%ebp
081622c9 +0x0537:  sub    $0x18,%esp
081622cc +0x053a:  mov    0x8(%ebp),%eax
081622cf +0x053d:  movl   $0x12,0x4(%esp)
081622d7 +0x0545:  mov    %eax,(%esp)
081622da +0x0548:  call   08161e32 <+0xa0>
081622df +0x054d:  mov    0x8(%ebp),%eax
081622e2 +0x0550:  movl   $&_ZTV29InterLoadHeroMissionEventData+0x8,(%eax)
081622e8 +0x0556:  leave
081622e9 +0x0557:  ret
081622ea +0x0558:  push   %ebp
081622eb +0x0559:  mov    %esp,%ebp
081622ed +0x055b:  sub    $0x18,%esp
081622f0 +0x055e:  mov    0x8(%ebp),%eax
081622f3 +0x0561:  movl   $&_ZTV29InterLoadHeroMissionEventData+0x8,(%eax)
081622f9 +0x0567:  mov    0x8(%ebp),%eax
081622fc +0x056a:  mov    %eax,(%esp)
081622ff +0x056d:  call   08161e4a <+0xb8>
08162304 +0x0572:  mov    $0x0,%eax
08162309 +0x0577:  test   %al,%al
0816230b +0x0579:  je     08162318 <+0x586>
0816230d +0x057b:  mov    0x8(%ebp),%eax
08162310 +0x057e:  mov    %eax,(%esp)
08162313 +0x0581:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08162318 +0x0586:  leave
08162319 +0x0587:  ret
0816231a +0x0588:  push   %ebp
0816231b +0x0589:  mov    %esp,%ebp
0816231d +0x058b:  sub    $0x18,%esp
08162320 +0x058e:  mov    0x8(%ebp),%eax
08162323 +0x0591:  mov    %eax,(%esp)
08162326 +0x0594:  call   081622ea <+0x558>
0816232b +0x0599:  mov    0x8(%ebp),%eax
0816232e +0x059c:  mov    %eax,(%esp)
08162331 +0x059f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08162336 +0x05a4:  leave
08162337 +0x05a5:  ret
08162338 +0x05a6:  push   %ebp
08162339 +0x05a7:  mov    %esp,%ebp
0816233b +0x05a9:  mov    0x8(%ebp),%eax
0816233e +0x05ac:  mov    0x10(%eax),%eax
08162341 +0x05af:  movzbl 0xeb7(%eax),%eax
08162348 +0x05b6:  pop    %ebp
08162349 +0x05b7:  ret
0816234a +0x05b8:  push   %ebp
0816234b +0x05b9:  mov    %esp,%ebp
0816234d +0x05bb:  sub    $0x18,%esp
08162350 +0x05be:  mov    0x8(%ebp),%eax
08162353 +0x05c1:  mov    %eax,(%esp)
08162356 +0x05c4:  call   08162386 <+0x5f4>
0816235b +0x05c9:  leave
0816235c +0x05ca:  ret
0816235d +0x05cb:  nop
0816235e +0x05cc:  push   %ebp
0816235f +0x05cd:  mov    %esp,%ebp
08162361 +0x05cf:  sub    $0x18,%esp
08162364 +0x05d2:  mov    0x8(%ebp),%eax
08162367 +0x05d5:  mov    %eax,(%esp)
0816236a +0x05d8:  call   081628b4 <+0xb22>
0816236f +0x05dd:  leave
08162370 +0x05de:  ret
08162371 +0x05df:  nop
08162372 +0x05e0:  push   %ebp
08162373 +0x05e1:  mov    %esp,%ebp
08162375 +0x05e3:  sub    $0x18,%esp
08162378 +0x05e6:  mov    0x8(%ebp),%eax
0816237b +0x05e9:  mov    %eax,(%esp)
0816237e +0x05ec:  call   081628c8 <+0xb36>
08162383 +0x05f1:  leave
08162384 +0x05f2:  ret
08162385 +0x05f3:  nop
08162386 +0x05f4:  push   %ebp
08162387 +0x05f5:  mov    %esp,%ebp
08162389 +0x05f7:  push   %esi
0816238a +0x05f8:  push   %ebx
0816238b +0x05f9:  sub    $0x10,%esp
0816238e +0x05fc:  mov    0x8(%ebp),%eax
08162391 +0x05ff:  mov    %eax,(%esp)
08162394 +0x0602:  call   08162932 <+0xba0>
08162399 +0x0607:  mov    %eax,0x4(%esp)
0816239d +0x060b:  mov    0x8(%ebp),%eax
081623a0 +0x060e:  mov    %eax,(%esp)
081623a3 +0x0611:  call   081628dc <+0xb4a>
081623a8 +0x0616:  jmp    081623c5 <+0x633>
081623aa +0x0618:  mov    %edx,%ebx
081623ac +0x061a:  mov    %eax,%esi
081623ae +0x061c:  mov    0x8(%ebp),%eax
081623b1 +0x061f:  mov    %eax,(%esp)
081623b4 +0x0622:  call   08162372 <+0x5e0>
081623b9 +0x0627:  mov    %esi,%eax
081623bb +0x0629:  mov    %ebx,%edx
081623bd +0x062b:  mov    %eax,(%esp)
081623c0 +0x062e:  call   08ae3750 <_Unwind_Resume>
081623c5 +0x0633:  mov    0x8(%ebp),%eax
081623c8 +0x0636:  mov    %eax,(%esp)
081623cb +0x0639:  call   08162372 <+0x5e0>
081623d0 +0x063e:  add    $0x10,%esp
081623d3 +0x0641:  pop    %ebx
081623d4 +0x0642:  pop    %esi
081623d5 +0x0643:  pop    %ebp
081623d6 +0x0644:  ret
081623d7 +0x0645:  nop
081623d8 +0x0646:  push   %ebp
081623d9 +0x0647:  mov    %esp,%ebp
081623db +0x0649:  sub    $0x18,%esp
081623de +0x064c:  mov    0x8(%ebp),%eax
081623e1 +0x064f:  mov    %eax,(%esp)
081623e4 +0x0652:  call   0816293e <+0xbac>
081623e9 +0x0657:  leave
081623ea +0x0658:  ret
081623eb +0x0659:  nop
081623ec +0x065a:  push   %ebp
081623ed +0x065b:  mov    %esp,%ebp
081623ef +0x065d:  push   %ebx
081623f0 +0x065e:  sub    $0x14,%esp
081623f3 +0x0661:  mov    0x8(%ebp),%ebx
081623f6 +0x0664:  mov    0xc(%ebp),%eax
081623f9 +0x0667:  mov    %eax,0x4(%esp)
081623fd +0x066b:  mov    %ebx,(%esp)
08162400 +0x066e:  call   081629b4 <+0xc22>
08162405 +0x0673:  sub    $0x4,%esp
08162408 +0x0676:  mov    %ebx,%eax
0816240a +0x0678:  mov    -0x4(%ebp),%ebx
0816240d +0x067b:  leave
0816240e +0x067c:  ret    $0x4
08162411 +0x067f:  nop
08162412 +0x0680:  push   %ebp
08162413 +0x0681:  mov    %esp,%ebp
08162415 +0x0683:  push   %ebx
08162416 +0x0684:  sub    $0x14,%esp
08162419 +0x0687:  mov    0x8(%ebp),%ebx
0816241c +0x068a:  mov    0xc(%ebp),%eax
0816241f +0x068d:  mov    %eax,0x4(%esp)
08162423 +0x0691:  mov    %ebx,(%esp)
08162426 +0x0694:  call   081629da <+0xc48>
0816242b +0x0699:  sub    $0x4,%esp
0816242e +0x069c:  mov    %ebx,%eax
08162430 +0x069e:  mov    -0x4(%ebp),%ebx
08162433 +0x06a1:  leave
08162434 +0x06a2:  ret    $0x4
08162437 +0x06a5:  push   %ebp
08162438 +0x06a6:  mov    %esp,%ebp
0816243a +0x06a8:  push   %ebx
0816243b +0x06a9:  sub    $0x14,%esp
0816243e +0x06ac:  mov    0x8(%ebp),%ebx
08162441 +0x06af:  jmp    08162468 <+0x6d6>
08162443 +0x06b1:  lea    0xc(%ebp),%eax
08162446 +0x06b4:  mov    %eax,(%esp)
08162449 +0x06b7:  call   08162a1e <+0xc8c>
0816244e +0x06bc:  mov    %eax,0x4(%esp)
08162452 +0x06c0:  lea    0x14(%ebp),%eax
08162455 +0x06c3:  mov    %eax,(%esp)
08162458 +0x06c6:  call   08161e9a <+0x108>
0816245d +0x06cb:  lea    0xc(%ebp),%eax
08162460 +0x06ce:  mov    %eax,(%esp)
08162463 +0x06d1:  call   08162a00 <+0xc6e>
08162468 +0x06d6:  lea    0x10(%ebp),%eax
0816246b +0x06d9:  mov    %eax,0x4(%esp)
0816246f +0x06dd:  lea    0xc(%ebp),%eax
08162472 +0x06e0:  mov    %eax,(%esp)
08162475 +0x06e3:  call   081624b4 <+0x722>
0816247a +0x06e8:  test   %al,%al
0816247c +0x06ea:  jne    08162443 <+0x6b1>
0816247e +0x06ec:  mov    %ebx,%eax
08162480 +0x06ee:  add    $0x14,%esp
08162483 +0x06f1:  pop    %ebx
08162484 +0x06f2:  pop    %ebp
08162485 +0x06f3:  ret    $0x4
08162488 +0x06f6:  push   %ebp
08162489 +0x06f7:  mov    %esp,%ebp
0816248b +0x06f9:  push   %ebx
0816248c +0x06fa:  sub    $0x14,%esp
0816248f +0x06fd:  mov    0x8(%ebp),%ebx
08162492 +0x0700:  mov    0xc(%ebp),%eax
08162495 +0x0703:  mov    0x10(%ebp),%edx
08162498 +0x0706:  mov    %edx,0x8(%esp)
0816249c +0x070a:  mov    %eax,0x4(%esp)
081624a0 +0x070e:  mov    %ebx,(%esp)
081624a3 +0x0711:  call   08162a2c <+0xc9a>
081624a8 +0x0716:  sub    $0x4,%esp
081624ab +0x0719:  mov    %ebx,%eax
081624ad +0x071b:  mov    -0x4(%ebp),%ebx
081624b0 +0x071e:  leave
081624b1 +0x071f:  ret    $0x4
081624b4 +0x0722:  push   %ebp
081624b5 +0x0723:  mov    %esp,%ebp
081624b7 +0x0725:  mov    0x8(%ebp),%eax
081624ba +0x0728:  mov    (%eax),%edx
081624bc +0x072a:  mov    0xc(%ebp),%eax
081624bf +0x072d:  mov    (%eax),%eax
081624c1 +0x072f:  cmp    %eax,%edx
081624c3 +0x0731:  setne  %al
081624c6 +0x0734:  pop    %ebp
081624c7 +0x0735:  ret
081624c8 +0x0736:  push   %ebp
081624c9 +0x0737:  mov    %esp,%ebp
081624cb +0x0739:  mov    0x8(%ebp),%eax
081624ce +0x073c:  mov    (%eax),%eax
081624d0 +0x073e:  add    $0x10,%eax
081624d3 +0x0741:  pop    %ebp
081624d4 +0x0742:  ret
081624d5 +0x0743:  nop
081624d6 +0x0744:  push   %ebp
081624d7 +0x0745:  mov    %esp,%ebp
081624d9 +0x0747:  push   %ebx
081624da +0x0748:  sub    $0x44,%esp
081624dd +0x074b:  lea    -0x20(%ebp),%eax
081624e0 +0x074e:  mov    0xc(%ebp),%edx
081624e3 +0x0751:  mov    %edx,0x8(%esp)
081624e7 +0x0755:  mov    0x8(%ebp),%edx
081624ea +0x0758:  mov    %edx,0x4(%esp)
081624ee +0x075c:  mov    %eax,(%esp)
081624f1 +0x075f:  call   08162aea <+0xd58>
081624f6 +0x0764:  sub    $0x4,%esp
081624f9 +0x0767:  lea    -0x1c(%ebp),%eax
081624fc +0x076a:  mov    0x8(%ebp),%edx
081624ff +0x076d:  mov    %edx,0x4(%esp)
08162503 +0x0771:  mov    %eax,(%esp)
08162506 +0x0774:  call   08162412 <+0x680>
0816250b +0x0779:  sub    $0x4,%esp
0816250e +0x077c:  lea    -0x1c(%ebp),%eax
08162511 +0x077f:  mov    %eax,0x4(%esp)
08162515 +0x0783:  lea    -0x20(%ebp),%eax
08162518 +0x0786:  mov    %eax,(%esp)
0816251b +0x0789:  call   08162b3c <+0xdaa>
08162520 +0x078e:  test   %al,%al
08162522 +0x0790:  jne    08162560 <+0x7ce>
08162524 +0x0792:  lea    -0x20(%ebp),%eax
08162527 +0x0795:  mov    %eax,(%esp)
0816252a +0x0798:  call   08162a1e <+0xc8c>
0816252f +0x079d:  mov    %eax,%ebx
08162531 +0x079f:  lea    -0x15(%ebp),%eax
08162534 +0x07a2:  mov    0x8(%ebp),%edx
08162537 +0x07a5:  mov    %edx,0x4(%esp)
0816253b +0x07a9:  mov    %eax,(%esp)
0816253e +0x07ac:  call   08162b16 <+0xd84>
08162543 +0x07b1:  sub    $0x4,%esp
08162546 +0x07b4:  mov    %ebx,0x8(%esp)
0816254a +0x07b8:  mov    0xc(%ebp),%eax
0816254d +0x07bb:  mov    %eax,0x4(%esp)
08162551 +0x07bf:  lea    -0x15(%ebp),%eax
08162554 +0x07c2:  mov    %eax,(%esp)
08162557 +0x07c5:  call   0815f0b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x132c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x132c
0816255c +0x07ca:  test   %al,%al
0816255e +0x07cc:  je     08162567 <+0x7d5>
08162560 +0x07ce:  mov    $0x1,%eax
08162565 +0x07d3:  jmp    0816256c <+0x7da>
08162567 +0x07d5:  mov    $0x0,%eax
0816256c +0x07da:  test   %al,%al
0816256e +0x07dc:  je     081625b9 <+0x827>
08162570 +0x07de:  movl   $0x0,-0xc(%ebp)
08162577 +0x07e5:  lea    -0xc(%ebp),%eax
0816257a +0x07e8:  mov    %eax,0x8(%esp)
0816257e +0x07ec:  mov    0xc(%ebp),%eax
08162581 +0x07ef:  mov    %eax,0x4(%esp)
08162585 +0x07f3:  lea    -0x14(%ebp),%eax
08162588 +0x07f6:  mov    %eax,(%esp)
0816258b +0x07f9:  call   08162b50 <+0xdbe>
08162590 +0x07fe:  lea    -0x2c(%ebp),%eax
08162593 +0x0801:  lea    -0x14(%ebp),%edx
08162596 +0x0804:  mov    %edx,0xc(%esp)
0816259a +0x0808:  mov    -0x20(%ebp),%edx
0816259d +0x080b:  mov    %edx,0x8(%esp)
081625a1 +0x080f:  mov    0x8(%ebp),%edx
081625a4 +0x0812:  mov    %edx,0x4(%esp)
081625a8 +0x0816:  mov    %eax,(%esp)
081625ab +0x0819:  call   08162b7e <+0xdec>
081625b0 +0x081e:  sub    $0x4,%esp
081625b3 +0x0821:  mov    -0x2c(%ebp),%eax
081625b6 +0x0824:  mov    %eax,-0x20(%ebp)
081625b9 +0x0827:  lea    -0x20(%ebp),%eax
081625bc +0x082a:  mov    %eax,(%esp)
081625bf +0x082d:  call   08162a1e <+0xc8c>
081625c4 +0x0832:  add    $0x4,%eax
081625c7 +0x0835:  mov    -0x4(%ebp),%ebx
081625ca +0x0838:  leave
081625cb +0x0839:  ret
081625cc +0x083a:  push   %ebp
081625cd +0x083b:  mov    %esp,%ebp
081625cf +0x083d:  sub    $0x18,%esp
081625d2 +0x0840:  mov    0x8(%ebp),%eax
081625d5 +0x0843:  mov    0xc(%ebp),%edx
081625d8 +0x0846:  mov    %edx,0x4(%esp)
081625dc +0x084a:  mov    %eax,(%esp)
081625df +0x084d:  call   08162bc4 <+0xe32>
081625e4 +0x0852:  leave
081625e5 +0x0853:  ret
081625e6 +0x0854:  push   %ebp
081625e7 +0x0855:  mov    %esp,%ebp
081625e9 +0x0857:  push   %edi
081625ea +0x0858:  push   %esi
081625eb +0x0859:  push   %ebx
081625ec +0x085a:  sub    $0x1c,%esp
081625ef +0x085d:  mov    $&_ZGVZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEvE3obj,%eax
081625f4 +0x0862:  movzbl (%eax),%eax
081625f7 +0x0865:  test   %al,%al
081625f9 +0x0867:  jne    0816266c <+0x8da>
081625fb +0x0869:  movl   $&_ZGVZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEvE3obj,(%esp)
08162602 +0x0870:  call   08725330 <__cxa_guard_acquire>
08162607 +0x0875:  test   %eax,%eax
08162609 +0x0877:  setne  %al
0816260c +0x087a:  test   %al,%al
0816260e +0x087c:  je     0816266c <+0x8da>
08162610 +0x087e:  mov    $0x0,%ebx
08162615 +0x0883:  movl   $&_ZZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEvE3obj,(%esp)
0816261c +0x088a:  call   0816e272 <_ZN22ServiceRestrictManagerC1Ev>  ; ServiceRestrictManager::ServiceRestrictManager()
08162621 +0x088f:  movl   $&_ZGVZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEvE3obj,(%esp)
08162628 +0x0896:  call   08725250 <__cxa_guard_release>
0816262d +0x089b:  mov    $&_ZN22ServiceRestrictManagerD1Ev,%eax
08162632 +0x08a0:  movl   $&__dso_handle,0x8(%esp)
0816263a +0x08a8:  movl   $&_ZZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEvE3obj,0x4(%esp)
08162642 +0x08b0:  mov    %eax,(%esp)
08162645 +0x08b3:  call   0807ddd0 <_init+0x6c8>
0816264a +0x08b8:  jmp    0816266c <+0x8da>
0816264c +0x08ba:  mov    %edx,%esi
0816264e +0x08bc:  mov    %eax,%edi
08162650 +0x08be:  test   %bl,%bl
08162652 +0x08c0:  jne    08162660 <+0x8ce>
08162654 +0x08c2:  movl   $&_ZGVZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEvE3obj,(%esp)
0816265b +0x08c9:  call   087252c0 <__cxa_guard_abort>
08162660 +0x08ce:  mov    %edi,%eax
08162662 +0x08d0:  mov    %esi,%edx
08162664 +0x08d2:  mov    %eax,(%esp)
08162667 +0x08d5:  call   08ae3750 <_Unwind_Resume>
0816266c +0x08da:  mov    $&_ZZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEvE3obj,%eax
08162671 +0x08df:  add    $0x1c,%esp
08162674 +0x08e2:  pop    %ebx
08162675 +0x08e3:  pop    %esi
08162676 +0x08e4:  pop    %edi
08162677 +0x08e5:  pop    %ebp
08162678 +0x08e6:  ret
08162679 +0x08e7:  push   %ebp
0816267a +0x08e8:  mov    %esp,%ebp
0816267c +0x08ea:  push   %edi
0816267d +0x08eb:  push   %esi
0816267e +0x08ec:  push   %ebx
0816267f +0x08ed:  sub    $0x1c,%esp
08162682 +0x08f0:  mov    $&_ZGVZN4ARAD9SingletonI19RestrictGeolocationE3GetEvE3obj,%eax
08162687 +0x08f5:  movzbl (%eax),%eax
0816268a +0x08f8:  test   %al,%al
0816268c +0x08fa:  jne    081626ff <+0x96d>
0816268e +0x08fc:  movl   $&_ZGVZN4ARAD9SingletonI19RestrictGeolocationE3GetEvE3obj,(%esp)
08162695 +0x0903:  call   08725330 <__cxa_guard_acquire>
0816269a +0x0908:  test   %eax,%eax
0816269c +0x090a:  setne  %al
0816269f +0x090d:  test   %al,%al
081626a1 +0x090f:  je     081626ff <+0x96d>
081626a3 +0x0911:  mov    $0x0,%ebx
081626a8 +0x0916:  movl   $&_ZZN4ARAD9SingletonI19RestrictGeolocationE3GetEvE3obj,(%esp)
081626af +0x091d:  call   0817097c <_ZN19RestrictGeolocationC1Ev>  ; RestrictGeolocation::RestrictGeolocation()
081626b4 +0x0922:  movl   $&_ZGVZN4ARAD9SingletonI19RestrictGeolocationE3GetEvE3obj,(%esp)
081626bb +0x0929:  call   08725250 <__cxa_guard_release>
081626c0 +0x092e:  mov    $&_ZN19RestrictGeolocationD1Ev,%eax
081626c5 +0x0933:  movl   $&__dso_handle,0x8(%esp)
081626cd +0x093b:  movl   $&_ZZN4ARAD9SingletonI19RestrictGeolocationE3GetEvE3obj,0x4(%esp)
081626d5 +0x0943:  mov    %eax,(%esp)
081626d8 +0x0946:  call   0807ddd0 <_init+0x6c8>
081626dd +0x094b:  jmp    081626ff <+0x96d>
081626df +0x094d:  mov    %edx,%esi
081626e1 +0x094f:  mov    %eax,%edi
081626e3 +0x0951:  test   %bl,%bl
081626e5 +0x0953:  jne    081626f3 <+0x961>
081626e7 +0x0955:  movl   $&_ZGVZN4ARAD9SingletonI19RestrictGeolocationE3GetEvE3obj,(%esp)
081626ee +0x095c:  call   087252c0 <__cxa_guard_abort>
081626f3 +0x0961:  mov    %edi,%eax
081626f5 +0x0963:  mov    %esi,%edx
081626f7 +0x0965:  mov    %eax,(%esp)
081626fa +0x0968:  call   08ae3750 <_Unwind_Resume>
081626ff +0x096d:  mov    $&_ZZN4ARAD9SingletonI19RestrictGeolocationE3GetEvE3obj,%eax
08162704 +0x0972:  add    $0x1c,%esp
08162707 +0x0975:  pop    %ebx
08162708 +0x0976:  pop    %esi
08162709 +0x0977:  pop    %edi
0816270a +0x0978:  pop    %ebp
0816270b +0x0979:  ret
0816270c +0x097a:  push   %ebp
0816270d +0x097b:  mov    %esp,%ebp
0816270f +0x097d:  sub    $0x28,%esp
08162712 +0x0980:  mov    0x8(%ebp),%eax
08162715 +0x0983:  lea    0x134(%eax),%edx
0816271b +0x0989:  lea    -0x14(%ebp),%eax
0816271e +0x098c:  mov    %edx,0x4(%esp)
08162722 +0x0990:  mov    %eax,(%esp)
08162725 +0x0993:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
0816272a +0x0998:  sub    $0x4,%esp
0816272d +0x099b:  jmp    08162775 <+0x9e3>
0816272f +0x099d:  lea    -0x14(%ebp),%eax
08162732 +0x09a0:  mov    %eax,(%esp)
08162735 +0x09a3:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
0816273a +0x09a8:  mov    0x4(%eax),%eax
0816273d +0x09ab:  mov    %eax,-0xc(%ebp)
08162740 +0x09ae:  mov    -0xc(%ebp),%eax
08162743 +0x09b1:  mov    %eax,(%esp)
08162746 +0x09b4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0816274b +0x09b9:  cmp    $0x2,%eax
0816274e +0x09bc:  setle  %al
08162751 +0x09bf:  test   %al,%al
08162753 +0x09c1:  jne    08162769 <+0x9d7>
08162755 +0x09c3:  mov    -0xc(%ebp),%eax
08162758 +0x09c6:  mov    %eax,0x4(%esp)
0816275c +0x09ca:  lea    0xc(%ebp),%eax
0816275f +0x09cd:  mov    %eax,(%esp)
08162762 +0x09d0:  call   08160c6e <_ZN29InterSelectCreateDnfEventInfo6RewardclEP5CUser>  ; InterSelectCreateDnfEventInfo::Reward::operator()(CUser*)
08162767 +0x09d5:  jmp    0816276a <+0x9d8>
08162769 +0x09d7:  nop
0816276a +0x09d8:  lea    -0x14(%ebp),%eax
0816276d +0x09db:  mov    %eax,(%esp)
08162770 +0x09de:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
08162775 +0x09e3:  mov    0x8(%ebp),%eax
08162778 +0x09e6:  lea    0x134(%eax),%edx
0816277e +0x09ec:  lea    -0x10(%ebp),%eax
08162781 +0x09ef:  mov    %edx,0x4(%esp)
08162785 +0x09f3:  mov    %eax,(%esp)
08162788 +0x09f6:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
0816278d +0x09fb:  sub    $0x4,%esp
08162790 +0x09fe:  lea    -0x10(%ebp),%eax
08162793 +0x0a01:  mov    %eax,0x4(%esp)
08162797 +0x0a05:  lea    -0x14(%ebp),%eax
0816279a +0x0a08:  mov    %eax,(%esp)
0816279d +0x0a0b:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
081627a2 +0x0a10:  test   %al,%al
081627a4 +0x0a12:  jne    0816272f <+0x99d>
081627a6 +0x0a14:  leave
081627a7 +0x0a15:  ret
081627a8 +0x0a16:  push   %ebp
081627a9 +0x0a17:  mov    %esp,%ebp
081627ab +0x0a19:  sub    $0x18,%esp
081627ae +0x0a1c:  mov    0x8(%ebp),%eax
081627b1 +0x0a1f:  mov    (%eax),%eax
081627b3 +0x0a21:  mov    %eax,(%esp)
081627b6 +0x0a24:  call   08162c06 <+0xe74>
081627bb +0x0a29:  leave
081627bc +0x0a2a:  ret
081627bd +0x0a2b:  nop
081627be +0x0a2c:  push   %ebp
081627bf +0x0a2d:  mov    %esp,%ebp
081627c1 +0x0a2f:  sub    $0x18,%esp
081627c4 +0x0a32:  mov    0x8(%ebp),%eax
081627c7 +0x0a35:  mov    (%eax),%eax
081627c9 +0x0a37:  mov    %eax,(%esp)
081627cc +0x0a3a:  call   08162c70 <+0xede>
081627d1 +0x0a3f:  leave
081627d2 +0x0a40:  ret
081627d3 +0x0a41:  nop
081627d4 +0x0a42:  push   %ebp
081627d5 +0x0a43:  mov    %esp,%ebp
081627d7 +0x0a45:  sub    $0x18,%esp
081627da +0x0a48:  mov    0xc(%ebp),%eax
081627dd +0x0a4b:  mov    %eax,(%esp)
081627e0 +0x0a4e:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
081627e5 +0x0a53:  mov    (%eax),%edx
081627e7 +0x0a55:  mov    0x8(%ebp),%eax
081627ea +0x0a58:  mov    %edx,(%eax)
081627ec +0x0a5a:  mov    0x10(%ebp),%eax
081627ef +0x0a5d:  mov    %eax,(%esp)
081627f2 +0x0a60:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
081627f7 +0x0a65:  mov    (%eax),%edx
081627f9 +0x0a67:  mov    0x8(%ebp),%eax
081627fc +0x0a6a:  mov    %edx,0x4(%eax)
081627ff +0x0a6d:  leave
08162800 +0x0a6e:  ret
08162801 +0x0a6f:  nop
08162802 +0x0a70:  push   %ebp
08162803 +0x0a71:  mov    %esp,%ebp
08162805 +0x0a73:  sub    $0x18,%esp
08162808 +0x0a76:  mov    0x8(%ebp),%eax
0816280b +0x0a79:  mov    (%eax),%eax
0816280d +0x0a7b:  mov    %eax,(%esp)
08162810 +0x0a7e:  call   08162cda <+0xf48>
08162815 +0x0a83:  leave
08162816 +0x0a84:  ret
08162817 +0x0a85:  nop
08162818 +0x0a86:  push   %ebp
08162819 +0x0a87:  mov    %esp,%ebp
0816281b +0x0a89:  sub    $0x18,%esp
0816281e +0x0a8c:  mov    0x8(%ebp),%eax
08162821 +0x0a8f:  mov    (%eax),%eax
08162823 +0x0a91:  mov    %eax,(%esp)
08162826 +0x0a94:  call   08162d44 <+0xfb2>
0816282b +0x0a99:  leave
0816282c +0x0a9a:  ret
0816282d +0x0a9b:  nop
0816282e +0x0a9c:  push   %ebp
0816282f +0x0a9d:  mov    %esp,%ebp
08162831 +0x0a9f:  sub    $0x38,%esp
08162834 +0x0aa2:  movl   $0x10,-0xc(%ebp)
0816283b +0x0aa9:  mov    0x10(%ebp),%eax
0816283e +0x0aac:  mov    %eax,0x8(%esp)
08162842 +0x0ab0:  movl   $0x0,0x4(%esp)
0816284a +0x0ab8:  mov    0xc(%ebp),%eax
0816284d +0x0abb:  mov    %eax,(%esp)
08162850 +0x0abe:  call   0807dcc0 <_init+0x5b8>
08162855 +0x0ac3:  cmpl   $0xf,0x10(%ebp)
08162859 +0x0ac7:  jg     08162862 <+0xad0>
0816285b +0x0ac9:  mov    $"",%eax
08162860 +0x0ace:  jmp    081628b2 <+0xb20>
08162862 +0x0ad0:  lea    -0x1c(%ebp),%edx
08162865 +0x0ad3:  mov    0x8(%ebp),%eax
08162868 +0x0ad6:  mov    (%eax),%eax
0816286a +0x0ad8:  lea    -0xc(%ebp),%ecx
0816286d +0x0adb:  mov    %ecx,0x8(%esp)
08162871 +0x0adf:  mov    %edx,0x4(%esp)
08162875 +0x0ae3:  mov    %eax,(%esp)
08162878 +0x0ae6:  call   0807e690 <_init+0xf88>
0816287d +0x0aeb:  test   %eax,%eax
0816287f +0x0aed:  setne  %al
08162882 +0x0af0:  test   %al,%al
08162884 +0x0af2:  je     0816288d <+0xafb>
08162886 +0x0af4:  mov    $"",%eax
0816288b +0x0af9:  jmp    081628b2 <+0xb20>
0816288d +0x0afb:  mov    -0x18(%ebp),%eax
08162890 +0x0afe:  mov    %eax,(%esp)
08162893 +0x0b01:  call   0807ddc0 <_init+0x6b8>
08162898 +0x0b06:  movl   $0x10,0x8(%esp)
081628a0 +0x0b0e:  mov    %eax,0x4(%esp)
081628a4 +0x0b12:  mov    0xc(%ebp),%eax
081628a7 +0x0b15:  mov    %eax,(%esp)
081628aa +0x0b18:  call   0807d8d0 <_init+0x1c8>
081628af +0x0b1d:  mov    0xc(%ebp),%eax
081628b2 +0x0b20:  leave
081628b3 +0x0b21:  ret
081628b4 +0x0b22:  push   %ebp
081628b5 +0x0b23:  mov    %esp,%ebp
081628b7 +0x0b25:  sub    $0x18,%esp
081628ba +0x0b28:  mov    0x8(%ebp),%eax
081628bd +0x0b2b:  mov    %eax,(%esp)
081628c0 +0x0b2e:  call   08162dae <+0x101c>
081628c5 +0x0b33:  leave
081628c6 +0x0b34:  ret
081628c7 +0x0b35:  nop
081628c8 +0x0b36:  push   %ebp
081628c9 +0x0b37:  mov    %esp,%ebp
081628cb +0x0b39:  sub    $0x18,%esp
081628ce +0x0b3c:  mov    0x8(%ebp),%eax
081628d1 +0x0b3f:  mov    %eax,(%esp)
081628d4 +0x0b42:  call   08162dfe <+0x106c>
081628d9 +0x0b47:  leave
081628da +0x0b48:  ret
081628db +0x0b49:  nop
081628dc +0x0b4a:  push   %ebp
081628dd +0x0b4b:  mov    %esp,%ebp
081628df +0x0b4d:  sub    $0x28,%esp
081628e2 +0x0b50:  jmp    08162924 <+0xb92>
081628e4 +0x0b52:  mov    0xc(%ebp),%eax
081628e7 +0x0b55:  mov    %eax,(%esp)
081628ea +0x0b58:  call   08162e03 <+0x1071>
081628ef +0x0b5d:  mov    %eax,0x4(%esp)
081628f3 +0x0b61:  mov    0x8(%ebp),%eax
081628f6 +0x0b64:  mov    %eax,(%esp)
081628f9 +0x0b67:  call   081628dc <+0xb4a>
081628fe +0x0b6c:  mov    0xc(%ebp),%eax
08162901 +0x0b6f:  mov    %eax,(%esp)
08162904 +0x0b72:  call   08162e0e <+0x107c>
08162909 +0x0b77:  mov    %eax,-0xc(%ebp)
0816290c +0x0b7a:  mov    0xc(%ebp),%eax
0816290f +0x0b7d:  mov    %eax,0x4(%esp)
08162913 +0x0b81:  mov    0x8(%ebp),%eax
08162916 +0x0b84:  mov    %eax,(%esp)
08162919 +0x0b87:  call   08162e1a <+0x1088>
0816291e +0x0b8c:  mov    -0xc(%ebp),%eax
08162921 +0x0b8f:  mov    %eax,0xc(%ebp)
08162924 +0x0b92:  cmpl   $0x0,0xc(%ebp)
08162928 +0x0b96:  setne  %al
0816292b +0x0b99:  test   %al,%al
0816292d +0x0b9b:  jne    081628e4 <+0xb52>
0816292f +0x0b9d:  leave
08162930 +0x0b9e:  ret
08162931 +0x0b9f:  nop
08162932 +0x0ba0:  push   %ebp
08162933 +0x0ba1:  mov    %esp,%ebp
08162935 +0x0ba3:  mov    0x8(%ebp),%eax
08162938 +0x0ba6:  mov    0x8(%eax),%eax
0816293b +0x0ba9:  pop    %ebp
0816293c +0x0baa:  ret
0816293d +0x0bab:  nop
0816293e +0x0bac:  push   %ebp
0816293f +0x0bad:  mov    %esp,%ebp
08162941 +0x0baf:  push   %ebx
08162942 +0x0bb0:  sub    $0x14,%esp
08162945 +0x0bb3:  mov    0x8(%ebp),%eax
08162948 +0x0bb6:  mov    %eax,(%esp)
0816294b +0x0bb9:  call   08162932 <+0xba0>
08162950 +0x0bbe:  mov    %eax,0x4(%esp)
08162954 +0x0bc2:  mov    0x8(%ebp),%eax
08162957 +0x0bc5:  mov    %eax,(%esp)
0816295a +0x0bc8:  call   081628dc <+0xb4a>
0816295f +0x0bcd:  mov    0x8(%ebp),%eax
08162962 +0x0bd0:  mov    %eax,(%esp)
08162965 +0x0bd3:  call   08162e5a <+0x10c8>
0816296a +0x0bd8:  mov    %eax,%ebx
0816296c +0x0bda:  mov    0x8(%ebp),%eax
0816296f +0x0bdd:  mov    %eax,(%esp)
08162972 +0x0be0:  call   08162e4e <+0x10bc>
08162977 +0x0be5:  mov    %eax,(%ebx)
08162979 +0x0be7:  mov    0x8(%ebp),%eax
0816297c +0x0bea:  mov    %eax,(%esp)
0816297f +0x0bed:  call   08162e66 <+0x10d4>
08162984 +0x0bf2:  movl   $0x0,(%eax)
0816298a +0x0bf8:  mov    0x8(%ebp),%eax
0816298d +0x0bfb:  mov    %eax,(%esp)
08162990 +0x0bfe:  call   08162e72 <+0x10e0>
08162995 +0x0c03:  mov    %eax,%ebx
08162997 +0x0c05:  mov    0x8(%ebp),%eax
0816299a +0x0c08:  mov    %eax,(%esp)
0816299d +0x0c0b:  call   08162e4e <+0x10bc>
081629a2 +0x0c10:  mov    %eax,(%ebx)
081629a4 +0x0c12:  mov    0x8(%ebp),%eax
081629a7 +0x0c15:  movl   $0x0,0x14(%eax)
081629ae +0x0c1c:  add    $0x14,%esp
081629b1 +0x0c1f:  pop    %ebx
081629b2 +0x0c20:  pop    %ebp
081629b3 +0x0c21:  ret
081629b4 +0x0c22:  push   %ebp
081629b5 +0x0c23:  mov    %esp,%ebp
081629b7 +0x0c25:  push   %ebx
081629b8 +0x0c26:  sub    $0x14,%esp
081629bb +0x0c29:  mov    0x8(%ebp),%ebx
081629be +0x0c2c:  mov    0xc(%ebp),%eax
081629c1 +0x0c2f:  mov    0xc(%eax),%eax
081629c4 +0x0c32:  mov    %eax,0x4(%esp)
081629c8 +0x0c36:  mov    %ebx,(%esp)
081629cb +0x0c39:  call   08162e7e <+0x10ec>
081629d0 +0x0c3e:  mov    %ebx,%eax
081629d2 +0x0c40:  add    $0x14,%esp
081629d5 +0x0c43:  pop    %ebx
081629d6 +0x0c44:  pop    %ebp
081629d7 +0x0c45:  ret    $0x4
081629da +0x0c48:  push   %ebp
081629db +0x0c49:  mov    %esp,%ebp
081629dd +0x0c4b:  push   %ebx
081629de +0x0c4c:  sub    $0x14,%esp
081629e1 +0x0c4f:  mov    0x8(%ebp),%ebx
081629e4 +0x0c52:  mov    0xc(%ebp),%eax
081629e7 +0x0c55:  add    $0x4,%eax
081629ea +0x0c58:  mov    %eax,0x4(%esp)
081629ee +0x0c5c:  mov    %ebx,(%esp)
081629f1 +0x0c5f:  call   08162e7e <+0x10ec>
081629f6 +0x0c64:  mov    %ebx,%eax
081629f8 +0x0c66:  add    $0x14,%esp
081629fb +0x0c69:  pop    %ebx
081629fc +0x0c6a:  pop    %ebp
081629fd +0x0c6b:  ret    $0x4
08162a00 +0x0c6e:  push   %ebp
08162a01 +0x0c6f:  mov    %esp,%ebp
08162a03 +0x0c71:  sub    $0x18,%esp
08162a06 +0x0c74:  mov    0x8(%ebp),%eax
08162a09 +0x0c77:  mov    (%eax),%eax
08162a0b +0x0c79:  mov    %eax,(%esp)
08162a0e +0x0c7c:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
08162a13 +0x0c81:  mov    0x8(%ebp),%edx
08162a16 +0x0c84:  mov    %eax,(%edx)
08162a18 +0x0c86:  mov    0x8(%ebp),%eax
08162a1b +0x0c89:  leave
08162a1c +0x0c8a:  ret
08162a1d +0x0c8b:  nop
08162a1e +0x0c8c:  push   %ebp
08162a1f +0x0c8d:  mov    %esp,%ebp
08162a21 +0x0c8f:  mov    0x8(%ebp),%eax
08162a24 +0x0c92:  mov    (%eax),%eax
08162a26 +0x0c94:  add    $0x10,%eax
08162a29 +0x0c97:  pop    %ebp
08162a2a +0x0c98:  ret
08162a2b +0x0c99:  nop
08162a2c +0x0c9a:  push   %ebp
08162a2d +0x0c9b:  mov    %esp,%ebp
08162a2f +0x0c9d:  push   %esi
08162a30 +0x0c9e:  push   %ebx
08162a31 +0x0c9f:  sub    $0x30,%esp
08162a34 +0x0ca2:  mov    0x8(%ebp),%ebx
08162a37 +0x0ca5:  mov    0xc(%ebp),%eax
08162a3a +0x0ca8:  mov    %eax,(%esp)
08162a3d +0x0cab:  call   08162e4e <+0x10bc>
08162a42 +0x0cb0:  mov    %eax,%esi
08162a44 +0x0cb2:  mov    0xc(%ebp),%eax
08162a47 +0x0cb5:  mov    %eax,(%esp)
08162a4a +0x0cb8:  call   08162932 <+0xba0>
08162a4f +0x0cbd:  lea    -0x10(%ebp),%edx
08162a52 +0x0cc0:  mov    0x10(%ebp),%ecx
08162a55 +0x0cc3:  mov    %ecx,0x10(%esp)
08162a59 +0x0cc7:  mov    %esi,0xc(%esp)
08162a5d +0x0ccb:  mov    %eax,0x8(%esp)
08162a61 +0x0ccf:  mov    0xc(%ebp),%eax
08162a64 +0x0cd2:  mov    %eax,0x4(%esp)
08162a68 +0x0cd6:  mov    %edx,(%esp)
08162a6b +0x0cd9:  call   08162e8c <+0x10fa>
08162a70 +0x0cde:  sub    $0x4,%esp
08162a73 +0x0ce1:  lea    -0xc(%ebp),%eax
08162a76 +0x0ce4:  mov    0xc(%ebp),%edx
08162a79 +0x0ce7:  mov    %edx,0x4(%esp)
08162a7d +0x0ceb:  mov    %eax,(%esp)
08162a80 +0x0cee:  call   081629da <+0xc48>
08162a85 +0x0cf3:  sub    $0x4,%esp
08162a88 +0x0cf6:  lea    -0xc(%ebp),%eax
08162a8b +0x0cf9:  mov    %eax,0x4(%esp)
08162a8f +0x0cfd:  lea    -0x10(%ebp),%eax
08162a92 +0x0d00:  mov    %eax,(%esp)
08162a95 +0x0d03:  call   08162b3c <+0xdaa>
08162a9a +0x0d08:  test   %al,%al
08162a9c +0x0d0a:  jne    08162ac3 <+0xd31>
08162a9e +0x0d0c:  mov    -0x10(%ebp),%eax
08162aa1 +0x0d0f:  mov    %eax,(%esp)
08162aa4 +0x0d12:  call   08162f08 <+0x1176>
08162aa9 +0x0d17:  mov    0xc(%ebp),%edx
08162aac +0x0d1a:  mov    %eax,0x8(%esp)
08162ab0 +0x0d1e:  mov    0x10(%ebp),%eax
08162ab3 +0x0d21:  mov    %eax,0x4(%esp)
08162ab7 +0x0d25:  mov    %edx,(%esp)
08162aba +0x0d28:  call   0815f0b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x132c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x132c
08162abf +0x0d2d:  test   %al,%al
08162ac1 +0x0d2f:  je     08162ad7 <+0xd45>
08162ac3 +0x0d31:  mov    0xc(%ebp),%eax
08162ac6 +0x0d34:  mov    %eax,0x4(%esp)
08162aca +0x0d38:  mov    %ebx,(%esp)
08162acd +0x0d3b:  call   081629da <+0xc48>
08162ad2 +0x0d40:  sub    $0x4,%esp
08162ad5 +0x0d43:  jmp    08162adc <+0xd4a>
08162ad7 +0x0d45:  mov    -0x10(%ebp),%eax
08162ada +0x0d48:  mov    %eax,(%ebx)
08162adc +0x0d4a:  mov    %ebx,%eax
08162ade +0x0d4c:  lea    -0x8(%ebp),%esp
08162ae1 +0x0d4f:  add    $0x0,%esp
08162ae4 +0x0d52:  pop    %ebx
08162ae5 +0x0d53:  pop    %esi
08162ae6 +0x0d54:  pop    %ebp
08162ae7 +0x0d55:  ret    $0x4
08162aea +0x0d58:  push   %ebp
08162aeb +0x0d59:  mov    %esp,%ebp
08162aed +0x0d5b:  push   %ebx
08162aee +0x0d5c:  sub    $0x14,%esp
08162af1 +0x0d5f:  mov    0x8(%ebp),%ebx
08162af4 +0x0d62:  mov    0xc(%ebp),%eax
08162af7 +0x0d65:  mov    0x10(%ebp),%edx
08162afa +0x0d68:  mov    %edx,0x8(%esp)
08162afe +0x0d6c:  mov    %eax,0x4(%esp)
08162b02 +0x0d70:  mov    %ebx,(%esp)
08162b05 +0x0d73:  call   08162f2a <+0x1198>
08162b0a +0x0d78:  sub    $0x4,%esp
08162b0d +0x0d7b:  mov    %ebx,%eax
08162b0f +0x0d7d:  mov    -0x4(%ebp),%ebx
08162b12 +0x0d80:  leave
08162b13 +0x0d81:  ret    $0x4
08162b16 +0x0d84:  push   %ebp
08162b17 +0x0d85:  mov    %esp,%ebp
08162b19 +0x0d87:  push   %ebx
08162b1a +0x0d88:  sub    $0x14,%esp
08162b1d +0x0d8b:  mov    0x8(%ebp),%ebx
08162b20 +0x0d8e:  mov    0xc(%ebp),%eax
08162b23 +0x0d91:  mov    %eax,0x4(%esp)
08162b27 +0x0d95:  mov    %ebx,(%esp)
08162b2a +0x0d98:  call   08162f7c <+0x11ea>
08162b2f +0x0d9d:  sub    $0x4,%esp
08162b32 +0x0da0:  mov    %ebx,%eax
08162b34 +0x0da2:  mov    -0x4(%ebp),%ebx
08162b37 +0x0da5:  leave
08162b38 +0x0da6:  ret    $0x4
08162b3b +0x0da9:  nop
08162b3c +0x0daa:  push   %ebp
08162b3d +0x0dab:  mov    %esp,%ebp
08162b3f +0x0dad:  mov    0x8(%ebp),%eax
08162b42 +0x0db0:  mov    (%eax),%edx
08162b44 +0x0db2:  mov    0xc(%ebp),%eax
08162b47 +0x0db5:  mov    (%eax),%eax
08162b49 +0x0db7:  cmp    %eax,%edx
08162b4b +0x0db9:  sete   %al
08162b4e +0x0dbc:  pop    %ebp
08162b4f +0x0dbd:  ret
08162b50 +0x0dbe:  push   %ebp
08162b51 +0x0dbf:  mov    %esp,%ebp
08162b53 +0x0dc1:  sub    $0x18,%esp
08162b56 +0x0dc4:  mov    0xc(%ebp),%eax
08162b59 +0x0dc7:  mov    %eax,(%esp)
08162b5c +0x0dca:  call   0815f7fe <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x1a72>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x1a72
08162b61 +0x0dcf:  mov    (%eax),%edx
08162b63 +0x0dd1:  mov    0x8(%ebp),%eax
08162b66 +0x0dd4:  mov    %edx,(%eax)
08162b68 +0x0dd6:  mov    0x10(%ebp),%eax
08162b6b +0x0dd9:  mov    %eax,(%esp)
08162b6e +0x0ddc:  call   08162f86 <+0x11f4>
08162b73 +0x0de1:  mov    (%eax),%edx
08162b75 +0x0de3:  mov    0x8(%ebp),%eax
08162b78 +0x0de6:  mov    %edx,0x4(%eax)
08162b7b +0x0de9:  leave
08162b7c +0x0dea:  ret
08162b7d +0x0deb:  nop
08162b7e +0x0dec:  push   %ebp
08162b7f +0x0ded:  mov    %esp,%ebp
08162b81 +0x0def:  push   %ebx
08162b82 +0x0df0:  sub    $0x24,%esp
08162b85 +0x0df3:  mov    0x8(%ebp),%ebx
08162b88 +0x0df6:  lea    0x10(%ebp),%eax
08162b8b +0x0df9:  mov    %eax,0x4(%esp)
08162b8f +0x0dfd:  lea    -0xc(%ebp),%eax
08162b92 +0x0e00:  mov    %eax,(%esp)
08162b95 +0x0e03:  call   08162f8e <+0x11fc>
08162b9a +0x0e08:  mov    0xc(%ebp),%eax
08162b9d +0x0e0b:  mov    0x14(%ebp),%edx
08162ba0 +0x0e0e:  mov    %edx,0xc(%esp)
08162ba4 +0x0e12:  mov    -0xc(%ebp),%edx
08162ba7 +0x0e15:  mov    %edx,0x8(%esp)
08162bab +0x0e19:  mov    %eax,0x4(%esp)
08162baf +0x0e1d:  mov    %ebx,(%esp)
08162bb2 +0x0e20:  call   08162f9e <+0x120c>
08162bb7 +0x0e25:  sub    $0x4,%esp
08162bba +0x0e28:  mov    %ebx,%eax
08162bbc +0x0e2a:  mov    -0x4(%ebp),%ebx
08162bbf +0x0e2d:  leave
08162bc0 +0x0e2e:  ret    $0x4
08162bc3 +0x0e31:  nop
08162bc4 +0x0e32:  push   %ebp
08162bc5 +0x0e33:  mov    %esp,%ebp
08162bc7 +0x0e35:  sub    $0x28,%esp
08162bca +0x0e38:  mov    0x8(%ebp),%eax
08162bcd +0x0e3b:  lea    0x4(%eax),%edx
08162bd0 +0x0e3e:  mov    0xc(%ebp),%eax
08162bd3 +0x0e41:  mov    %edx,0x4(%esp)
08162bd7 +0x0e45:  mov    %eax,(%esp)
08162bda +0x0e48:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08162bdf +0x0e4d:  mov    %eax,-0xc(%ebp)
08162be2 +0x0e50:  mov    -0xc(%ebp),%eax
08162be5 +0x0e53:  mov    %eax,0x4(%esp)
08162be9 +0x0e57:  mov    0x8(%ebp),%eax
08162bec +0x0e5a:  mov    %eax,(%esp)
08162bef +0x0e5d:  call   08162e1a <+0x1088>
08162bf4 +0x0e62:  mov    0x8(%ebp),%eax
08162bf7 +0x0e65:  mov    0x14(%eax),%eax
08162bfa +0x0e68:  lea    -0x1(%eax),%edx
08162bfd +0x0e6b:  mov    0x8(%ebp),%eax
08162c00 +0x0e6e:  mov    %edx,0x14(%eax)
08162c03 +0x0e71:  leave
08162c04 +0x0e72:  ret
08162c05 +0x0e73:  nop
08162c06 +0x0e74:  push   %ebp
08162c07 +0x0e75:  mov    %esp,%ebp
08162c09 +0x0e77:  sub    $0x28,%esp
08162c0c +0x0e7a:  jmp    08162c2a <+0xe98>
08162c0e +0x0e7c:  mov    0x8(%ebp),%eax
08162c11 +0x0e7f:  mov    %eax,(%esp)
08162c14 +0x0e82:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08162c19 +0x0e87:  add    %eax,%eax
08162c1b +0x0e89:  mov    %eax,0x4(%esp)
08162c1f +0x0e8d:  mov    0x8(%ebp),%eax
08162c22 +0x0e90:  mov    %eax,(%esp)
08162c25 +0x0e93:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
08162c2a +0x0e98:  movl   $0xc,0x4(%esp)
08162c32 +0x0ea0:  mov    0x8(%ebp),%eax
08162c35 +0x0ea3:  mov    %eax,(%esp)
08162c38 +0x0ea6:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08162c3d +0x0eab:  xor    $0x1,%eax
08162c40 +0x0eae:  test   %al,%al
08162c42 +0x0eb0:  jne    08162c0e <+0xe7c>
08162c44 +0x0eb2:  mov    0x8(%ebp),%eax
08162c47 +0x0eb5:  mov    0x8(%eax),%eax
08162c4a +0x0eb8:  mov    %eax,%edx
08162c4c +0x0eba:  mov    0x8(%ebp),%eax
08162c4f +0x0ebd:  mov    0xc(%eax),%eax
08162c52 +0x0ec0:  lea    (%edx,%eax,1),%eax
08162c55 +0x0ec3:  mov    %eax,-0xc(%ebp)
08162c58 +0x0ec6:  movl   $0xc,0x4(%esp)
08162c60 +0x0ece:  mov    0x8(%ebp),%eax
08162c63 +0x0ed1:  mov    %eax,(%esp)
08162c66 +0x0ed4:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
08162c6b +0x0ed9:  mov    -0xc(%ebp),%eax
08162c6e +0x0edc:  leave
08162c6f +0x0edd:  ret
08162c70 +0x0ede:  push   %ebp
08162c71 +0x0edf:  mov    %esp,%ebp
08162c73 +0x0ee1:  sub    $0x28,%esp
08162c76 +0x0ee4:  jmp    08162c94 <+0xf02>
08162c78 +0x0ee6:  mov    0x8(%ebp),%eax
08162c7b +0x0ee9:  mov    %eax,(%esp)
08162c7e +0x0eec:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08162c83 +0x0ef1:  add    %eax,%eax
08162c85 +0x0ef3:  mov    %eax,0x4(%esp)
08162c89 +0x0ef7:  mov    0x8(%ebp),%eax
08162c8c +0x0efa:  mov    %eax,(%esp)
08162c8f +0x0efd:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
08162c94 +0x0f02:  movl   $0x8,0x4(%esp)
08162c9c +0x0f0a:  mov    0x8(%ebp),%eax
08162c9f +0x0f0d:  mov    %eax,(%esp)
08162ca2 +0x0f10:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08162ca7 +0x0f15:  xor    $0x1,%eax
08162caa +0x0f18:  test   %al,%al
08162cac +0x0f1a:  jne    08162c78 <+0xee6>
08162cae +0x0f1c:  mov    0x8(%ebp),%eax
08162cb1 +0x0f1f:  mov    0x8(%eax),%eax
08162cb4 +0x0f22:  mov    %eax,%edx
08162cb6 +0x0f24:  mov    0x8(%ebp),%eax
08162cb9 +0x0f27:  mov    0xc(%eax),%eax
08162cbc +0x0f2a:  lea    (%edx,%eax,1),%eax
08162cbf +0x0f2d:  mov    %eax,-0xc(%ebp)
08162cc2 +0x0f30:  movl   $0x8,0x4(%esp)
08162cca +0x0f38:  mov    0x8(%ebp),%eax
08162ccd +0x0f3b:  mov    %eax,(%esp)
08162cd0 +0x0f3e:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
08162cd5 +0x0f43:  mov    -0xc(%ebp),%eax
08162cd8 +0x0f46:  leave
08162cd9 +0x0f47:  ret
08162cda +0x0f48:  push   %ebp
08162cdb +0x0f49:  mov    %esp,%ebp
08162cdd +0x0f4b:  sub    $0x28,%esp
08162ce0 +0x0f4e:  jmp    08162cfe <+0xf6c>
08162ce2 +0x0f50:  mov    0x8(%ebp),%eax
08162ce5 +0x0f53:  mov    %eax,(%esp)
08162ce8 +0x0f56:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08162ced +0x0f5b:  add    %eax,%eax
08162cef +0x0f5d:  mov    %eax,0x4(%esp)
08162cf3 +0x0f61:  mov    0x8(%ebp),%eax
08162cf6 +0x0f64:  mov    %eax,(%esp)
08162cf9 +0x0f67:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
08162cfe +0x0f6c:  movl   $0x8,0x4(%esp)
08162d06 +0x0f74:  mov    0x8(%ebp),%eax
08162d09 +0x0f77:  mov    %eax,(%esp)
08162d0c +0x0f7a:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08162d11 +0x0f7f:  xor    $0x1,%eax
08162d14 +0x0f82:  test   %al,%al
08162d16 +0x0f84:  jne    08162ce2 <+0xf50>
08162d18 +0x0f86:  mov    0x8(%ebp),%eax
08162d1b +0x0f89:  mov    0x8(%eax),%eax
08162d1e +0x0f8c:  mov    %eax,%edx
08162d20 +0x0f8e:  mov    0x8(%ebp),%eax
08162d23 +0x0f91:  mov    0xc(%eax),%eax
08162d26 +0x0f94:  lea    (%edx,%eax,1),%eax
08162d29 +0x0f97:  mov    %eax,-0xc(%ebp)
08162d2c +0x0f9a:  movl   $0x8,0x4(%esp)
08162d34 +0x0fa2:  mov    0x8(%ebp),%eax
08162d37 +0x0fa5:  mov    %eax,(%esp)
08162d3a +0x0fa8:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
08162d3f +0x0fad:  mov    -0xc(%ebp),%eax
08162d42 +0x0fb0:  leave
08162d43 +0x0fb1:  ret
08162d44 +0x0fb2:  push   %ebp
08162d45 +0x0fb3:  mov    %esp,%ebp
08162d47 +0x0fb5:  sub    $0x28,%esp
08162d4a +0x0fb8:  jmp    08162d68 <+0xfd6>
08162d4c +0x0fba:  mov    0x8(%ebp),%eax
08162d4f +0x0fbd:  mov    %eax,(%esp)
08162d52 +0x0fc0:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08162d57 +0x0fc5:  add    %eax,%eax
08162d59 +0x0fc7:  mov    %eax,0x4(%esp)
08162d5d +0x0fcb:  mov    0x8(%ebp),%eax
08162d60 +0x0fce:  mov    %eax,(%esp)
08162d63 +0x0fd1:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
08162d68 +0x0fd6:  movl   $0x8,0x4(%esp)
08162d70 +0x0fde:  mov    0x8(%ebp),%eax
08162d73 +0x0fe1:  mov    %eax,(%esp)
08162d76 +0x0fe4:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08162d7b +0x0fe9:  xor    $0x1,%eax
08162d7e +0x0fec:  test   %al,%al
08162d80 +0x0fee:  jne    08162d4c <+0xfba>
08162d82 +0x0ff0:  mov    0x8(%ebp),%eax
08162d85 +0x0ff3:  mov    0x8(%eax),%eax
08162d88 +0x0ff6:  mov    %eax,%edx
08162d8a +0x0ff8:  mov    0x8(%ebp),%eax
08162d8d +0x0ffb:  mov    0xc(%eax),%eax
08162d90 +0x0ffe:  lea    (%edx,%eax,1),%eax
08162d93 +0x1001:  mov    %eax,-0xc(%ebp)
08162d96 +0x1004:  movl   $0x8,0x4(%esp)
08162d9e +0x100c:  mov    0x8(%ebp),%eax
08162da1 +0x100f:  mov    %eax,(%esp)
08162da4 +0x1012:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
08162da9 +0x1017:  mov    -0xc(%ebp),%eax
08162dac +0x101a:  leave
08162dad +0x101b:  ret
08162dae +0x101c:  push   %ebp
08162daf +0x101d:  mov    %esp,%ebp
08162db1 +0x101f:  sub    $0x18,%esp
08162db4 +0x1022:  mov    0x8(%ebp),%eax
08162db7 +0x1025:  mov    %eax,(%esp)
08162dba +0x1028:  call   08163364 <+0x15d2>
08162dbf +0x102d:  mov    0x8(%ebp),%eax
08162dc2 +0x1030:  movl   $0x0,0x4(%eax)
08162dc9 +0x1037:  mov    0x8(%ebp),%eax
08162dcc +0x103a:  movl   $0x0,0x8(%eax)
08162dd3 +0x1041:  mov    0x8(%ebp),%eax
08162dd6 +0x1044:  movl   $0x0,0xc(%eax)
08162ddd +0x104b:  mov    0x8(%ebp),%eax
08162de0 +0x104e:  movl   $0x0,0x10(%eax)
08162de7 +0x1055:  mov    0x8(%ebp),%eax
08162dea +0x1058:  movl   $0x0,0x14(%eax)
08162df1 +0x105f:  mov    0x8(%ebp),%eax
08162df4 +0x1062:  mov    %eax,(%esp)
08162df7 +0x1065:  call   08163378 <+0x15e6>
08162dfc +0x106a:  leave
08162dfd +0x106b:  ret
08162dfe +0x106c:  push   %ebp
08162dff +0x106d:  mov    %esp,%ebp
08162e01 +0x106f:  pop    %ebp
08162e02 +0x1070:  ret
08162e03 +0x1071:  push   %ebp
08162e04 +0x1072:  mov    %esp,%ebp
08162e06 +0x1074:  mov    0x8(%ebp),%eax
08162e09 +0x1077:  mov    0xc(%eax),%eax
08162e0c +0x107a:  pop    %ebp
08162e0d +0x107b:  ret
08162e0e +0x107c:  push   %ebp
08162e0f +0x107d:  mov    %esp,%ebp
08162e11 +0x107f:  mov    0x8(%ebp),%eax
08162e14 +0x1082:  mov    0x8(%eax),%eax
08162e17 +0x1085:  pop    %ebp
08162e18 +0x1086:  ret
08162e19 +0x1087:  nop
08162e1a +0x1088:  push   %ebp
08162e1b +0x1089:  mov    %esp,%ebp
08162e1d +0x108b:  sub    $0x18,%esp
08162e20 +0x108e:  mov    0x8(%ebp),%eax
08162e23 +0x1091:  mov    %eax,(%esp)
08162e26 +0x1094:  call   081633aa <+0x1618>
08162e2b +0x1099:  mov    0xc(%ebp),%edx
08162e2e +0x109c:  mov    %edx,0x4(%esp)
08162e32 +0x10a0:  mov    %eax,(%esp)
08162e35 +0x10a3:  call   081633b8 <+0x1626>
08162e3a +0x10a8:  mov    0xc(%ebp),%eax
08162e3d +0x10ab:  mov    %eax,0x4(%esp)
08162e41 +0x10af:  mov    0x8(%ebp),%eax
08162e44 +0x10b2:  mov    %eax,(%esp)
08162e47 +0x10b5:  call   081633cc <+0x163a>
08162e4c +0x10ba:  leave
08162e4d +0x10bb:  ret
08162e4e +0x10bc:  push   %ebp
08162e4f +0x10bd:  mov    %esp,%ebp
08162e51 +0x10bf:  mov    0x8(%ebp),%eax
08162e54 +0x10c2:  add    $0x4,%eax
08162e57 +0x10c5:  pop    %ebp
08162e58 +0x10c6:  ret
08162e59 +0x10c7:  nop
08162e5a +0x10c8:  push   %ebp
08162e5b +0x10c9:  mov    %esp,%ebp
08162e5d +0x10cb:  mov    0x8(%ebp),%eax
08162e60 +0x10ce:  add    $0xc,%eax
08162e63 +0x10d1:  pop    %ebp
08162e64 +0x10d2:  ret
08162e65 +0x10d3:  nop
08162e66 +0x10d4:  push   %ebp
08162e67 +0x10d5:  mov    %esp,%ebp
08162e69 +0x10d7:  mov    0x8(%ebp),%eax
08162e6c +0x10da:  add    $0x8,%eax
08162e6f +0x10dd:  pop    %ebp
08162e70 +0x10de:  ret
08162e71 +0x10df:  nop
08162e72 +0x10e0:  push   %ebp
08162e73 +0x10e1:  mov    %esp,%ebp
08162e75 +0x10e3:  mov    0x8(%ebp),%eax
08162e78 +0x10e6:  add    $0x10,%eax
08162e7b +0x10e9:  pop    %ebp
08162e7c +0x10ea:  ret
08162e7d +0x10eb:  nop
08162e7e +0x10ec:  push   %ebp
08162e7f +0x10ed:  mov    %esp,%ebp
08162e81 +0x10ef:  mov    0xc(%ebp),%edx
08162e84 +0x10f2:  mov    0x8(%ebp),%eax
08162e87 +0x10f5:  mov    %edx,(%eax)
08162e89 +0x10f7:  pop    %ebp
08162e8a +0x10f8:  ret
08162e8b +0x10f9:  nop
08162e8c +0x10fa:  push   %ebp
08162e8d +0x10fb:  mov    %esp,%ebp
08162e8f +0x10fd:  push   %ebx
08162e90 +0x10fe:  sub    $0x14,%esp
08162e93 +0x1101:  mov    0x8(%ebp),%ebx
08162e96 +0x1104:  jmp    08162ee4 <+0x1152>
08162e98 +0x1106:  mov    0x10(%ebp),%eax
08162e9b +0x1109:  mov    %eax,(%esp)
08162e9e +0x110c:  call   081633ee <+0x165c>
08162ea3 +0x1111:  mov    0xc(%ebp),%edx
08162ea6 +0x1114:  mov    0x18(%ebp),%ecx
08162ea9 +0x1117:  mov    %ecx,0x8(%esp)
08162ead +0x111b:  mov    %eax,0x4(%esp)
08162eb1 +0x111f:  mov    %edx,(%esp)
08162eb4 +0x1122:  call   0815f0b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x132c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x132c
08162eb9 +0x1127:  xor    $0x1,%eax
08162ebc +0x112a:  test   %al,%al
08162ebe +0x112c:  je     08162ed6 <+0x1144>
08162ec0 +0x112e:  mov    0x10(%ebp),%eax
08162ec3 +0x1131:  mov    %eax,0x14(%ebp)
08162ec6 +0x1134:  mov    0x10(%ebp),%eax
08162ec9 +0x1137:  mov    %eax,(%esp)
08162ecc +0x113a:  call   08162e0e <+0x107c>
08162ed1 +0x113f:  mov    %eax,0x10(%ebp)
08162ed4 +0x1142:  jmp    08162ee4 <+0x1152>
08162ed6 +0x1144:  mov    0x10(%ebp),%eax
08162ed9 +0x1147:  mov    %eax,(%esp)
08162edc +0x114a:  call   08162e03 <+0x1071>
08162ee1 +0x114f:  mov    %eax,0x10(%ebp)
08162ee4 +0x1152:  cmpl   $0x0,0x10(%ebp)
08162ee8 +0x1156:  setne  %al
08162eeb +0x1159:  test   %al,%al
08162eed +0x115b:  jne    08162e98 <+0x1106>
08162eef +0x115d:  mov    0x14(%ebp),%eax
08162ef2 +0x1160:  mov    %eax,0x4(%esp)
08162ef6 +0x1164:  mov    %ebx,(%esp)
08162ef9 +0x1167:  call   08162e7e <+0x10ec>
08162efe +0x116c:  mov    %ebx,%eax
08162f00 +0x116e:  add    $0x14,%esp
08162f03 +0x1171:  pop    %ebx
08162f04 +0x1172:  pop    %ebp
08162f05 +0x1173:  ret    $0x4
08162f08 +0x1176:  push   %ebp
08162f09 +0x1177:  mov    %esp,%ebp
08162f0b +0x1179:  sub    $0x28,%esp
08162f0e +0x117c:  mov    0x8(%ebp),%eax
08162f11 +0x117f:  mov    %eax,(%esp)
08162f14 +0x1182:  call   08163410 <+0x167e>
08162f19 +0x1187:  mov    %eax,0x4(%esp)
08162f1d +0x118b:  lea    -0x9(%ebp),%eax
08162f20 +0x118e:  mov    %eax,(%esp)
08162f23 +0x1191:  call   0816341c <+0x168a>
08162f28 +0x1196:  leave
08162f29 +0x1197:  ret
08162f2a +0x1198:  push   %ebp
08162f2b +0x1199:  mov    %esp,%ebp
08162f2d +0x119b:  push   %esi
08162f2e +0x119c:  push   %ebx
08162f2f +0x119d:  sub    $0x20,%esp
08162f32 +0x11a0:  mov    0x8(%ebp),%esi
08162f35 +0x11a3:  mov    0xc(%ebp),%eax
08162f38 +0x11a6:  mov    %eax,(%esp)
08162f3b +0x11a9:  call   08162e4e <+0x10bc>
08162f40 +0x11ae:  mov    %eax,%ebx
08162f42 +0x11b0:  mov    0xc(%ebp),%eax
08162f45 +0x11b3:  mov    %eax,(%esp)
08162f48 +0x11b6:  call   08162932 <+0xba0>
08162f4d +0x11bb:  mov    0x10(%ebp),%edx
08162f50 +0x11be:  mov    %edx,0x10(%esp)
08162f54 +0x11c2:  mov    %ebx,0xc(%esp)
08162f58 +0x11c6:  mov    %eax,0x8(%esp)
08162f5c +0x11ca:  mov    0xc(%ebp),%eax
08162f5f +0x11cd:  mov    %eax,0x4(%esp)
08162f63 +0x11d1:  mov    %esi,(%esp)
08162f66 +0x11d4:  call   08162e8c <+0x10fa>
08162f6b +0x11d9:  sub    $0x4,%esp
08162f6e +0x11dc:  mov    %esi,%eax
08162f70 +0x11de:  lea    -0x8(%ebp),%esp
08162f73 +0x11e1:  add    $0x0,%esp
08162f76 +0x11e4:  pop    %ebx
08162f77 +0x11e5:  pop    %esi
08162f78 +0x11e6:  pop    %ebp
08162f79 +0x11e7:  ret    $0x4
08162f7c +0x11ea:  push   %ebp
08162f7d +0x11eb:  mov    %esp,%ebp
08162f7f +0x11ed:  mov    0x8(%ebp),%eax
08162f82 +0x11f0:  pop    %ebp
08162f83 +0x11f1:  ret    $0x4
08162f86 +0x11f4:  push   %ebp
08162f87 +0x11f5:  mov    %esp,%ebp
08162f89 +0x11f7:  mov    0x8(%ebp),%eax
08162f8c +0x11fa:  pop    %ebp
08162f8d +0x11fb:  ret
08162f8e +0x11fc:  push   %ebp
08162f8f +0x11fd:  mov    %esp,%ebp
08162f91 +0x11ff:  mov    0xc(%ebp),%eax
08162f94 +0x1202:  mov    (%eax),%edx
08162f96 +0x1204:  mov    0x8(%ebp),%eax
08162f99 +0x1207:  mov    %edx,(%eax)
08162f9b +0x1209:  pop    %ebp
08162f9c +0x120a:  ret
08162f9d +0x120b:  nop
08162f9e +0x120c:  push   %ebp
08162f9f +0x120d:  mov    %esp,%ebp
08162fa1 +0x120f:  push   %esi
08162fa2 +0x1210:  push   %ebx
08162fa3 +0x1211:  sub    $0x50,%esp
08162fa6 +0x1214:  mov    0x8(%ebp),%ebx
08162fa9 +0x1217:  mov    0x10(%ebp),%esi
08162fac +0x121a:  mov    0xc(%ebp),%eax
08162faf +0x121d:  mov    %eax,(%esp)
08162fb2 +0x1220:  call   08162e4e <+0x10bc>
08162fb7 +0x1225:  cmp    %eax,%esi
08162fb9 +0x1227:  sete   %al
08162fbc +0x122a:  test   %al,%al
08162fbe +0x122c:  je     08163080 <+0x12ee>
08162fc4 +0x1232:  mov    0xc(%ebp),%eax
08162fc7 +0x1235:  mov    %eax,(%esp)
08162fca +0x1238:  call   08163424 <+0x1692>
08162fcf +0x123d:  test   %eax,%eax
08162fd1 +0x123f:  je     0816301a <+0x1288>
08162fd3 +0x1241:  mov    0x14(%ebp),%eax
08162fd6 +0x1244:  mov    %eax,0x4(%esp)
08162fda +0x1248:  lea    -0x29(%ebp),%eax
08162fdd +0x124b:  mov    %eax,(%esp)
08162fe0 +0x124e:  call   0816341c <+0x168a>
08162fe5 +0x1253:  mov    %eax,%esi
08162fe7 +0x1255:  mov    0xc(%ebp),%eax
08162fea +0x1258:  mov    %eax,(%esp)
08162fed +0x125b:  call   08162e72 <+0x10e0>
08162ff2 +0x1260:  mov    (%eax),%eax
08162ff4 +0x1262:  mov    %eax,(%esp)
08162ff7 +0x1265:  call   08162f08 <+0x1176>
08162ffc +0x126a:  mov    0xc(%ebp),%edx
08162fff +0x126d:  mov    %esi,0x8(%esp)
08163003 +0x1271:  mov    %eax,0x4(%esp)
08163007 +0x1275:  mov    %edx,(%esp)
0816300a +0x1278:  call   0815f0b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x132c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x132c
0816300f +0x127d:  test   %al,%al
08163011 +0x127f:  je     0816301a <+0x1288>
08163013 +0x1281:  mov    $0x1,%eax
08163018 +0x1286:  jmp    0816301f <+0x128d>
0816301a +0x1288:  mov    $0x0,%eax
0816301f +0x128d:  test   %al,%al
08163021 +0x128f:  je     0816305a <+0x12c8>
08163023 +0x1291:  mov    0xc(%ebp),%eax
08163026 +0x1294:  mov    %eax,(%esp)
08163029 +0x1297:  call   08162e72 <+0x10e0>
0816302e +0x129c:  mov    (%eax),%eax
08163030 +0x129e:  mov    0x14(%ebp),%edx
08163033 +0x12a1:  mov    %edx,0x10(%esp)
08163037 +0x12a5:  mov    %eax,0xc(%esp)
0816303b +0x12a9:  movl   $0x0,0x8(%esp)
08163043 +0x12b1:  mov    0xc(%ebp),%eax
08163046 +0x12b4:  mov    %eax,0x4(%esp)
0816304a +0x12b8:  mov    %ebx,(%esp)
0816304d +0x12bb:  call   08163430 <+0x169e>
08163052 +0x12c0:  sub    $0x4,%esp
08163055 +0x12c3:  jmp    08163355 <+0x15c3>
0816305a +0x12c8:  lea    -0x28(%ebp),%eax
0816305d +0x12cb:  mov    0x14(%ebp),%edx
08163060 +0x12ce:  mov    %edx,0x8(%esp)
08163064 +0x12d2:  mov    0xc(%ebp),%edx
08163067 +0x12d5:  mov    %edx,0x4(%esp)
0816306b +0x12d9:  mov    %eax,(%esp)
0816306e +0x12dc:  call   081634f8 <+0x1766>
08163073 +0x12e1:  sub    $0x4,%esp
08163076 +0x12e4:  mov    -0x28(%ebp),%eax
08163079 +0x12e7:  mov    %eax,(%ebx)
0816307b +0x12e9:  jmp    08163355 <+0x15c3>
08163080 +0x12ee:  mov    0x10(%ebp),%eax
08163083 +0x12f1:  mov    %eax,(%esp)
08163086 +0x12f4:  call   08162f08 <+0x1176>
0816308b +0x12f9:  mov    %eax,%esi
0816308d +0x12fb:  mov    0x14(%ebp),%eax
08163090 +0x12fe:  mov    %eax,0x4(%esp)
08163094 +0x1302:  lea    -0x1e(%ebp),%eax
08163097 +0x1305:  mov    %eax,(%esp)
0816309a +0x1308:  call   0816341c <+0x168a>
0816309f +0x130d:  mov    0xc(%ebp),%edx
081630a2 +0x1310:  mov    %esi,0x8(%esp)
081630a6 +0x1314:  mov    %eax,0x4(%esp)
081630aa +0x1318:  mov    %edx,(%esp)
081630ad +0x131b:  call   0815f0b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x132c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x132c
081630b2 +0x1320:  test   %al,%al
081630b4 +0x1322:  je     081631ec <+0x145a>
081630ba +0x1328:  mov    0x10(%ebp),%eax
081630bd +0x132b:  mov    %eax,-0x30(%ebp)
081630c0 +0x132e:  mov    0x10(%ebp),%esi
081630c3 +0x1331:  mov    0xc(%ebp),%eax
081630c6 +0x1334:  mov    %eax,(%esp)
081630c9 +0x1337:  call   08162e5a <+0x10c8>
081630ce +0x133c:  mov    (%eax),%eax
081630d0 +0x133e:  cmp    %eax,%esi
081630d2 +0x1340:  sete   %al
081630d5 +0x1343:  test   %al,%al
081630d7 +0x1345:  je     08163119 <+0x1387>
081630d9 +0x1347:  mov    0xc(%ebp),%eax
081630dc +0x134a:  mov    %eax,(%esp)
081630df +0x134d:  call   08162e5a <+0x10c8>
081630e4 +0x1352:  mov    (%eax),%esi
081630e6 +0x1354:  mov    0xc(%ebp),%eax
081630e9 +0x1357:  mov    %eax,(%esp)
081630ec +0x135a:  call   08162e5a <+0x10c8>
081630f1 +0x135f:  mov    (%eax),%eax
081630f3 +0x1361:  mov    0x14(%ebp),%edx
081630f6 +0x1364:  mov    %edx,0x10(%esp)
081630fa +0x1368:  mov    %esi,0xc(%esp)
081630fe +0x136c:  mov    %eax,0x8(%esp)
08163102 +0x1370:  mov    0xc(%ebp),%eax
08163105 +0x1373:  mov    %eax,0x4(%esp)
08163109 +0x1377:  mov    %ebx,(%esp)
0816310c +0x137a:  call   08163430 <+0x169e>
08163111 +0x137f:  sub    $0x4,%esp
08163114 +0x1382:  jmp    08163355 <+0x15c3>
08163119 +0x1387:  mov    0x14(%ebp),%eax
0816311c +0x138a:  mov    %eax,0x4(%esp)
08163120 +0x138e:  lea    -0x1d(%ebp),%eax
08163123 +0x1391:  mov    %eax,(%esp)
08163126 +0x1394:  call   0816341c <+0x168a>
0816312b +0x1399:  mov    %eax,%esi
0816312d +0x139b:  lea    -0x30(%ebp),%eax
08163130 +0x139e:  mov    %eax,(%esp)
08163133 +0x13a1:  call   081636c8 <+0x1936>
08163138 +0x13a6:  mov    (%eax),%eax
0816313a +0x13a8:  mov    %eax,(%esp)
0816313d +0x13ab:  call   08162f08 <+0x1176>
08163142 +0x13b0:  mov    0xc(%ebp),%edx
08163145 +0x13b3:  mov    %esi,0x8(%esp)
08163149 +0x13b7:  mov    %eax,0x4(%esp)
0816314d +0x13bb:  mov    %edx,(%esp)
08163150 +0x13be:  call   0815f0b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x132c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x132c
08163155 +0x13c3:  test   %al,%al
08163157 +0x13c5:  je     081631c6 <+0x1434>
08163159 +0x13c7:  mov    -0x30(%ebp),%eax
0816315c +0x13ca:  mov    %eax,(%esp)
0816315f +0x13cd:  call   081636e5 <+0x1953>
08163164 +0x13d2:  test   %eax,%eax
08163166 +0x13d4:  sete   %al
08163169 +0x13d7:  test   %al,%al
0816316b +0x13d9:  je     0816319a <+0x1408>
0816316d +0x13db:  mov    -0x30(%ebp),%eax
08163170 +0x13de:  mov    0x14(%ebp),%edx
08163173 +0x13e1:  mov    %edx,0x10(%esp)
08163177 +0x13e5:  mov    %eax,0xc(%esp)
0816317b +0x13e9:  movl   $0x0,0x8(%esp)
08163183 +0x13f1:  mov    0xc(%ebp),%eax
08163186 +0x13f4:  mov    %eax,0x4(%esp)
0816318a +0x13f8:  mov    %ebx,(%esp)
0816318d +0x13fb:  call   08163430 <+0x169e>
08163192 +0x1400:  sub    $0x4,%esp
08163195 +0x1403:  jmp    08163355 <+0x15c3>
0816319a +0x1408:  mov    0x10(%ebp),%edx
0816319d +0x140b:  mov    0x10(%ebp),%eax
081631a0 +0x140e:  mov    0x14(%ebp),%ecx
081631a3 +0x1411:  mov    %ecx,0x10(%esp)
081631a7 +0x1415:  mov    %edx,0xc(%esp)
081631ab +0x1419:  mov    %eax,0x8(%esp)
081631af +0x141d:  mov    0xc(%ebp),%eax
081631b2 +0x1420:  mov    %eax,0x4(%esp)
081631b6 +0x1424:  mov    %ebx,(%esp)
081631b9 +0x1427:  call   08163430 <+0x169e>
081631be +0x142c:  sub    $0x4,%esp
081631c1 +0x142f:  jmp    08163355 <+0x15c3>
081631c6 +0x1434:  lea    -0x1c(%ebp),%eax
081631c9 +0x1437:  mov    0x14(%ebp),%edx
081631cc +0x143a:  mov    %edx,0x8(%esp)
081631d0 +0x143e:  mov    0xc(%ebp),%edx
081631d3 +0x1441:  mov    %edx,0x4(%esp)
081631d7 +0x1445:  mov    %eax,(%esp)
081631da +0x1448:  call   081634f8 <+0x1766>
081631df +0x144d:  sub    $0x4,%esp
081631e2 +0x1450:  mov    -0x1c(%ebp),%eax
081631e5 +0x1453:  mov    %eax,(%ebx)
081631e7 +0x1455:  jmp    08163355 <+0x15c3>
081631ec +0x145a:  mov    0x14(%ebp),%eax
081631ef +0x145d:  mov    %eax,0x4(%esp)
081631f3 +0x1461:  lea    -0x12(%ebp),%eax
081631f6 +0x1464:  mov    %eax,(%esp)
081631f9 +0x1467:  call   0816341c <+0x168a>
081631fe +0x146c:  mov    %eax,%esi
08163200 +0x146e:  mov    0x10(%ebp),%eax
08163203 +0x1471:  mov    %eax,(%esp)
08163206 +0x1474:  call   08162f08 <+0x1176>
0816320b +0x1479:  mov    0xc(%ebp),%edx
0816320e +0x147c:  mov    %esi,0x8(%esp)
08163212 +0x1480:  mov    %eax,0x4(%esp)
08163216 +0x1484:  mov    %edx,(%esp)
08163219 +0x1487:  call   0815f0b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x132c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x132c
0816321e +0x148c:  test   %al,%al
08163220 +0x148e:  je     08163346 <+0x15b4>
08163226 +0x1494:  mov    0x10(%ebp),%eax
08163229 +0x1497:  mov    %eax,-0x34(%ebp)
0816322c +0x149a:  mov    0x10(%ebp),%esi
0816322f +0x149d:  mov    0xc(%ebp),%eax
08163232 +0x14a0:  mov    %eax,(%esp)
08163235 +0x14a3:  call   08162e72 <+0x10e0>
0816323a +0x14a8:  mov    (%eax),%eax
0816323c +0x14aa:  cmp    %eax,%esi
0816323e +0x14ac:  sete   %al
08163241 +0x14af:  test   %al,%al
08163243 +0x14b1:  je     0816327c <+0x14ea>
08163245 +0x14b3:  mov    0xc(%ebp),%eax
08163248 +0x14b6:  mov    %eax,(%esp)
0816324b +0x14b9:  call   08162e72 <+0x10e0>
08163250 +0x14be:  mov    (%eax),%eax
08163252 +0x14c0:  mov    0x14(%ebp),%edx
08163255 +0x14c3:  mov    %edx,0x10(%esp)
08163259 +0x14c7:  mov    %eax,0xc(%esp)
0816325d +0x14cb:  movl   $0x0,0x8(%esp)
08163265 +0x14d3:  mov    0xc(%ebp),%eax
08163268 +0x14d6:  mov    %eax,0x4(%esp)
0816326c +0x14da:  mov    %ebx,(%esp)
0816326f +0x14dd:  call   08163430 <+0x169e>
08163274 +0x14e2:  sub    $0x4,%esp
08163277 +0x14e5:  jmp    08163355 <+0x15c3>
0816327c +0x14ea:  lea    -0x34(%ebp),%eax
0816327f +0x14ed:  mov    %eax,(%esp)
08163282 +0x14f0:  call   081636f0 <+0x195e>
08163287 +0x14f5:  mov    (%eax),%eax
08163289 +0x14f7:  mov    %eax,(%esp)
0816328c +0x14fa:  call   08162f08 <+0x1176>
08163291 +0x14ff:  mov    %eax,%esi
08163293 +0x1501:  mov    0x14(%ebp),%eax
08163296 +0x1504:  mov    %eax,0x4(%esp)
0816329a +0x1508:  lea    -0x11(%ebp),%eax
0816329d +0x150b:  mov    %eax,(%esp)
081632a0 +0x150e:  call   0816341c <+0x168a>
081632a5 +0x1513:  mov    0xc(%ebp),%edx
081632a8 +0x1516:  mov    %esi,0x8(%esp)
081632ac +0x151a:  mov    %eax,0x4(%esp)
081632b0 +0x151e:  mov    %edx,(%esp)
081632b3 +0x1521:  call   0815f0b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x132c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x132c
081632b8 +0x1526:  test   %al,%al
081632ba +0x1528:  je     08163323 <+0x1591>
081632bc +0x152a:  mov    0x10(%ebp),%eax
081632bf +0x152d:  mov    %eax,(%esp)
081632c2 +0x1530:  call   081636e5 <+0x1953>
081632c7 +0x1535:  test   %eax,%eax
081632c9 +0x1537:  sete   %al
081632cc +0x153a:  test   %al,%al
081632ce +0x153c:  je     081632fa <+0x1568>
081632d0 +0x153e:  mov    0x10(%ebp),%eax
081632d3 +0x1541:  mov    0x14(%ebp),%edx
081632d6 +0x1544:  mov    %edx,0x10(%esp)
081632da +0x1548:  mov    %eax,0xc(%esp)
081632de +0x154c:  movl   $0x0,0x8(%esp)
081632e6 +0x1554:  mov    0xc(%ebp),%eax
081632e9 +0x1557:  mov    %eax,0x4(%esp)
081632ed +0x155b:  mov    %ebx,(%esp)
081632f0 +0x155e:  call   08163430 <+0x169e>
081632f5 +0x1563:  sub    $0x4,%esp
081632f8 +0x1566:  jmp    08163355 <+0x15c3>
081632fa +0x1568:  mov    -0x34(%ebp),%edx
081632fd +0x156b:  mov    -0x34(%ebp),%eax
08163300 +0x156e:  mov    0x14(%ebp),%ecx
08163303 +0x1571:  mov    %ecx,0x10(%esp)
08163307 +0x1575:  mov    %edx,0xc(%esp)
0816330b +0x1579:  mov    %eax,0x8(%esp)
0816330f +0x157d:  mov    0xc(%ebp),%eax
08163312 +0x1580:  mov    %eax,0x4(%esp)
08163316 +0x1584:  mov    %ebx,(%esp)
08163319 +0x1587:  call   08163430 <+0x169e>
0816331e +0x158c:  sub    $0x4,%esp
08163321 +0x158f:  jmp    08163355 <+0x15c3>
08163323 +0x1591:  lea    -0x10(%ebp),%eax
08163326 +0x1594:  mov    0x14(%ebp),%edx
08163329 +0x1597:  mov    %edx,0x8(%esp)
0816332d +0x159b:  mov    0xc(%ebp),%edx
08163330 +0x159e:  mov    %edx,0x4(%esp)
08163334 +0x15a2:  mov    %eax,(%esp)
08163337 +0x15a5:  call   081634f8 <+0x1766>
0816333c +0x15aa:  sub    $0x4,%esp
0816333f +0x15ad:  mov    -0x10(%ebp),%eax
08163342 +0x15b0:  mov    %eax,(%ebx)
08163344 +0x15b2:  jmp    08163355 <+0x15c3>
08163346 +0x15b4:  mov    0x10(%ebp),%eax
08163349 +0x15b7:  mov    %eax,0x4(%esp)
0816334d +0x15bb:  mov    %ebx,(%esp)
08163350 +0x15be:  call   08162e7e <+0x10ec>
08163355 +0x15c3:  mov    %ebx,%eax
08163357 +0x15c5:  lea    -0x8(%ebp),%esp
0816335a +0x15c8:  add    $0x0,%esp
0816335d +0x15cb:  pop    %ebx
0816335e +0x15cc:  pop    %esi
0816335f +0x15cd:  pop    %ebp
08163360 +0x15ce:  ret    $0x4
08163363 +0x15d1:  nop
08163364 +0x15d2:  push   %ebp
08163365 +0x15d3:  mov    %esp,%ebp
08163367 +0x15d5:  sub    $0x18,%esp
0816336a +0x15d8:  mov    0x8(%ebp),%eax
0816336d +0x15db:  mov    %eax,(%esp)
08163370 +0x15de:  call   0816370e <+0x197c>
08163375 +0x15e3:  leave
08163376 +0x15e4:  ret
08163377 +0x15e5:  nop
08163378 +0x15e6:  push   %ebp
08163379 +0x15e7:  mov    %esp,%ebp
0816337b +0x15e9:  mov    0x8(%ebp),%eax
0816337e +0x15ec:  movl   $0x0,0x4(%eax)
08163385 +0x15f3:  mov    0x8(%ebp),%eax
08163388 +0x15f6:  movl   $0x0,0x8(%eax)
0816338f +0x15fd:  mov    0x8(%ebp),%eax
08163392 +0x1600:  lea    0x4(%eax),%edx
08163395 +0x1603:  mov    0x8(%ebp),%eax
08163398 +0x1606:  mov    %edx,0xc(%eax)
0816339b +0x1609:  mov    0x8(%ebp),%eax
0816339e +0x160c:  lea    0x4(%eax),%edx
081633a1 +0x160f:  mov    0x8(%ebp),%eax
081633a4 +0x1612:  mov    %edx,0x10(%eax)
081633a7 +0x1615:  pop    %ebp
081633a8 +0x1616:  ret
081633a9 +0x1617:  nop
081633aa +0x1618:  push   %ebp
081633ab +0x1619:  mov    %esp,%ebp
081633ad +0x161b:  mov    0x8(%ebp),%eax
081633b0 +0x161e:  pop    %ebp
081633b1 +0x161f:  ret
081633b2 +0x1620:  push   %ebp
081633b3 +0x1621:  mov    %esp,%ebp
081633b5 +0x1623:  pop    %ebp
081633b6 +0x1624:  ret
081633b7 +0x1625:  nop
081633b8 +0x1626:  push   %ebp
081633b9 +0x1627:  mov    %esp,%ebp
081633bb +0x1629:  sub    $0x18,%esp
081633be +0x162c:  mov    0xc(%ebp),%eax
081633c1 +0x162f:  mov    %eax,(%esp)
081633c4 +0x1632:  call   081633b2 <+0x1620>
081633c9 +0x1637:  leave
081633ca +0x1638:  ret
081633cb +0x1639:  nop
081633cc +0x163a:  push   %ebp
081633cd +0x163b:  mov    %esp,%ebp
081633cf +0x163d:  sub    $0x18,%esp
081633d2 +0x1640:  mov    0x8(%ebp),%eax
081633d5 +0x1643:  movl   $0x1,0x8(%esp)
081633dd +0x164b:  mov    0xc(%ebp),%edx
081633e0 +0x164e:  mov    %edx,0x4(%esp)
081633e4 +0x1652:  mov    %eax,(%esp)
081633e7 +0x1655:  call   08163714 <+0x1982>
081633ec +0x165a:  leave
081633ed +0x165b:  ret
081633ee +0x165c:  push   %ebp
081633ef +0x165d:  mov    %esp,%ebp
081633f1 +0x165f:  sub    $0x28,%esp
081633f4 +0x1662:  mov    0x8(%ebp),%eax
081633f7 +0x1665:  mov    %eax,(%esp)
081633fa +0x1668:  call   08163727 <+0x1995>
081633ff +0x166d:  mov    %eax,0x4(%esp)
08163403 +0x1671:  lea    -0x9(%ebp),%eax
08163406 +0x1674:  mov    %eax,(%esp)
08163409 +0x1677:  call   0816341c <+0x168a>
0816340e +0x167c:  leave
0816340f +0x167d:  ret
08163410 +0x167e:  push   %ebp
08163411 +0x167f:  mov    %esp,%ebp
08163413 +0x1681:  mov    0x8(%ebp),%eax
08163416 +0x1684:  add    $0x10,%eax
08163419 +0x1687:  pop    %ebp
0816341a +0x1688:  ret
0816341b +0x1689:  nop
0816341c +0x168a:  push   %ebp
0816341d +0x168b:  mov    %esp,%ebp
0816341f +0x168d:  mov    0xc(%ebp),%eax
08163422 +0x1690:  pop    %ebp
08163423 +0x1691:  ret
08163424 +0x1692:  push   %ebp
08163425 +0x1693:  mov    %esp,%ebp
08163427 +0x1695:  mov    0x8(%ebp),%eax
0816342a +0x1698:  mov    0x14(%eax),%eax
0816342d +0x169b:  pop    %ebp
0816342e +0x169c:  ret
0816342f +0x169d:  nop
08163430 +0x169e:  push   %ebp
08163431 +0x169f:  mov    %esp,%ebp
08163433 +0x16a1:  push   %esi
08163434 +0x16a2:  push   %ebx
08163435 +0x16a3:  sub    $0x20,%esp
08163438 +0x16a6:  mov    0x8(%ebp),%esi
0816343b +0x16a9:  cmpl   $0x0,0x10(%ebp)
0816343f +0x16ad:  jne    08163487 <+0x16f5>
08163441 +0x16af:  mov    0xc(%ebp),%eax
08163444 +0x16b2:  mov    %eax,(%esp)
08163447 +0x16b5:  call   08162e4e <+0x10bc>
0816344c +0x16ba:  cmp    0x14(%ebp),%eax
0816344f +0x16bd:  je     08163487 <+0x16f5>
08163451 +0x16bf:  mov    0x14(%ebp),%eax
08163454 +0x16c2:  mov    %eax,(%esp)
08163457 +0x16c5:  call   08162f08 <+0x1176>
0816345c +0x16ca:  mov    %eax,%ebx
0816345e +0x16cc:  mov    0x18(%ebp),%eax
08163461 +0x16cf:  mov    %eax,0x4(%esp)
08163465 +0x16d3:  lea    -0xe(%ebp),%eax
08163468 +0x16d6:  mov    %eax,(%esp)
0816346b +0x16d9:  call   0816341c <+0x168a>
08163470 +0x16de:  mov    0xc(%ebp),%edx
08163473 +0x16e1:  mov    %ebx,0x8(%esp)
08163477 +0x16e5:  mov    %eax,0x4(%esp)
0816347b +0x16e9:  mov    %edx,(%esp)
0816347e +0x16ec:  call   0815f0b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x132c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x132c
08163483 +0x16f1:  test   %al,%al
08163485 +0x16f3:  je     0816348e <+0x16fc>
08163487 +0x16f5:  mov    $0x1,%eax
0816348c +0x16fa:  jmp    08163493 <+0x1701>
0816348e +0x16fc:  mov    $0x0,%eax
08163493 +0x1701:  mov    %al,-0xd(%ebp)
08163496 +0x1704:  mov    0x18(%ebp),%eax
08163499 +0x1707:  mov    %eax,0x4(%esp)
0816349d +0x170b:  mov    0xc(%ebp),%eax
081634a0 +0x170e:  mov    %eax,(%esp)
081634a3 +0x1711:  call   08163732 <+0x19a0>
081634a8 +0x1716:  mov    %eax,-0xc(%ebp)
081634ab +0x1719:  mov    0xc(%ebp),%eax
081634ae +0x171c:  lea    0x4(%eax),%ecx
081634b1 +0x171f:  mov    -0xc(%ebp),%edx
081634b4 +0x1722:  movzbl -0xd(%ebp),%eax
081634b8 +0x1726:  mov    %ecx,0xc(%esp)
081634bc +0x172a:  mov    0x14(%ebp),%ecx
081634bf +0x172d:  mov    %ecx,0x8(%esp)
081634c3 +0x1731:  mov    %edx,0x4(%esp)
081634c7 +0x1735:  mov    %eax,(%esp)
081634ca +0x1738:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081634cf +0x173d:  mov    0xc(%ebp),%eax
081634d2 +0x1740:  mov    0x14(%eax),%eax
081634d5 +0x1743:  lea    0x1(%eax),%edx
081634d8 +0x1746:  mov    0xc(%ebp),%eax
081634db +0x1749:  mov    %edx,0x14(%eax)
081634de +0x174c:  mov    -0xc(%ebp),%eax
081634e1 +0x174f:  mov    %eax,0x4(%esp)
081634e5 +0x1753:  mov    %esi,(%esp)
081634e8 +0x1756:  call   08162e7e <+0x10ec>
081634ed +0x175b:  mov    %esi,%eax
081634ef +0x175d:  add    $0x20,%esp
081634f2 +0x1760:  pop    %ebx
081634f3 +0x1761:  pop    %esi
081634f4 +0x1762:  pop    %ebp
081634f5 +0x1763:  ret    $0x4
081634f8 +0x1766:  push   %ebp
081634f9 +0x1767:  mov    %esp,%ebp
081634fb +0x1769:  push   %esi
081634fc +0x176a:  push   %ebx
081634fd +0x176b:  sub    $0x50,%esp
08163500 +0x176e:  mov    0x8(%ebp),%ebx
08163503 +0x1771:  mov    0xc(%ebp),%eax
08163506 +0x1774:  mov    %eax,(%esp)
08163509 +0x1777:  call   08162932 <+0xba0>
0816350e +0x177c:  mov    %eax,-0x14(%ebp)
08163511 +0x177f:  mov    0xc(%ebp),%eax
08163514 +0x1782:  mov    %eax,(%esp)
08163517 +0x1785:  call   08162e4e <+0x10bc>
0816351c +0x178a:  mov    %eax,-0x10(%ebp)
0816351f +0x178d:  movb   $0x1,-0x9(%ebp)
08163523 +0x1791:  jmp    08163581 <+0x17ef>
08163525 +0x1793:  mov    -0x14(%ebp),%eax
08163528 +0x1796:  mov    %eax,-0x10(%ebp)
0816352b +0x1799:  mov    -0x14(%ebp),%eax
0816352e +0x179c:  mov    %eax,(%esp)
08163531 +0x179f:  call   081633ee <+0x165c>
08163536 +0x17a4:  mov    %eax,%esi
08163538 +0x17a6:  mov    0x10(%ebp),%eax
0816353b +0x17a9:  mov    %eax,0x4(%esp)
0816353f +0x17ad:  lea    -0x2d(%ebp),%eax
08163542 +0x17b0:  mov    %eax,(%esp)
08163545 +0x17b3:  call   0816341c <+0x168a>
0816354a +0x17b8:  mov    0xc(%ebp),%edx
0816354d +0x17bb:  mov    %esi,0x8(%esp)
08163551 +0x17bf:  mov    %eax,0x4(%esp)
08163555 +0x17c3:  mov    %edx,(%esp)
08163558 +0x17c6:  call   0815f0b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x132c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x132c
0816355d +0x17cb:  mov    %al,-0x9(%ebp)
08163560 +0x17ce:  cmpb   $0x0,-0x9(%ebp)
08163564 +0x17d2:  je     08163573 <+0x17e1>
08163566 +0x17d4:  mov    -0x14(%ebp),%eax
08163569 +0x17d7:  mov    %eax,(%esp)
0816356c +0x17da:  call   08162e0e <+0x107c>
08163571 +0x17df:  jmp    0816357e <+0x17ec>
08163573 +0x17e1:  mov    -0x14(%ebp),%eax
08163576 +0x17e4:  mov    %eax,(%esp)
08163579 +0x17e7:  call   08162e03 <+0x1071>
0816357e +0x17ec:  mov    %eax,-0x14(%ebp)
08163581 +0x17ef:  cmpl   $0x0,-0x14(%ebp)
08163585 +0x17f3:  setne  %al
08163588 +0x17f6:  test   %al,%al
0816358a +0x17f8:  jne    08163525 <+0x1793>
0816358c +0x17fa:  mov    -0x10(%ebp),%eax
0816358f +0x17fd:  mov    %eax,0x4(%esp)
08163593 +0x1801:  lea    -0x34(%ebp),%eax
08163596 +0x1804:  mov    %eax,(%esp)
08163599 +0x1807:  call   08162e7e <+0x10ec>
0816359e +0x180c:  cmpb   $0x0,-0x9(%ebp)
081635a2 +0x1810:  je     08163623 <+0x1891>
081635a4 +0x1812:  lea    -0x2c(%ebp),%eax
081635a7 +0x1815:  mov    0xc(%ebp),%edx
081635aa +0x1818:  mov    %edx,0x4(%esp)
081635ae +0x181c:  mov    %eax,(%esp)
081635b1 +0x181f:  call   081629b4 <+0xc22>
081635b6 +0x1824:  sub    $0x4,%esp
081635b9 +0x1827:  lea    -0x2c(%ebp),%eax
081635bc +0x182a:  mov    %eax,0x4(%esp)
081635c0 +0x182e:  lea    -0x34(%ebp),%eax
081635c3 +0x1831:  mov    %eax,(%esp)
081635c6 +0x1834:  call   08162b3c <+0xdaa>
081635cb +0x1839:  test   %al,%al
081635cd +0x183b:  je     08163618 <+0x1886>
081635cf +0x183d:  movb   $0x1,-0x25(%ebp)
081635d3 +0x1841:  mov    -0x10(%ebp),%ecx
081635d6 +0x1844:  mov    -0x14(%ebp),%edx
081635d9 +0x1847:  lea    -0x24(%ebp),%eax
081635dc +0x184a:  mov    0x10(%ebp),%esi
081635df +0x184d:  mov    %esi,0x10(%esp)
081635e3 +0x1851:  mov    %ecx,0xc(%esp)
081635e7 +0x1855:  mov    %edx,0x8(%esp)
081635eb +0x1859:  mov    0xc(%ebp),%edx
081635ee +0x185c:  mov    %edx,0x4(%esp)
081635f2 +0x1860:  mov    %eax,(%esp)
081635f5 +0x1863:  call   08163430 <+0x169e>
081635fa +0x1868:  sub    $0x4,%esp
081635fd +0x186b:  lea    -0x25(%ebp),%eax
08163600 +0x186e:  mov    %eax,0x8(%esp)
08163604 +0x1872:  lea    -0x24(%ebp),%eax
08163607 +0x1875:  mov    %eax,0x4(%esp)
0816360b +0x1879:  mov    %ebx,(%esp)
0816360e +0x187c:  call   081637b4 <+0x1a22>
08163613 +0x1881:  jmp    081636b9 <+0x1927>
08163618 +0x1886:  lea    -0x34(%ebp),%eax
0816361b +0x1889:  mov    %eax,(%esp)
0816361e +0x188c:  call   081637e2 <+0x1a50>
08163623 +0x1891:  mov    0x10(%ebp),%eax
08163626 +0x1894:  mov    %eax,0x4(%esp)
0816362a +0x1898:  lea    -0x1e(%ebp),%eax
0816362d +0x189b:  mov    %eax,(%esp)
08163630 +0x189e:  call   0816341c <+0x168a>
08163635 +0x18a3:  mov    %eax,%esi
08163637 +0x18a5:  mov    -0x34(%ebp),%eax
0816363a +0x18a8:  mov    %eax,(%esp)
0816363d +0x18ab:  call   08162f08 <+0x1176>
08163642 +0x18b0:  mov    0xc(%ebp),%edx
08163645 +0x18b3:  mov    %esi,0x8(%esp)
08163649 +0x18b7:  mov    %eax,0x4(%esp)
0816364d +0x18bb:  mov    %edx,(%esp)
08163650 +0x18be:  call   0815f0b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x132c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x132c
08163655 +0x18c3:  test   %al,%al
08163657 +0x18c5:  je     0816369f <+0x190d>
08163659 +0x18c7:  movb   $0x1,-0x1d(%ebp)
0816365d +0x18cb:  mov    -0x10(%ebp),%ecx
08163660 +0x18ce:  mov    -0x14(%ebp),%edx
08163663 +0x18d1:  lea    -0x1c(%ebp),%eax
08163666 +0x18d4:  mov    0x10(%ebp),%esi
08163669 +0x18d7:  mov    %esi,0x10(%esp)
0816366d +0x18db:  mov    %ecx,0xc(%esp)
08163671 +0x18df:  mov    %edx,0x8(%esp)
08163675 +0x18e3:  mov    0xc(%ebp),%edx
08163678 +0x18e6:  mov    %edx,0x4(%esp)
0816367c +0x18ea:  mov    %eax,(%esp)
0816367f +0x18ed:  call   08163430 <+0x169e>
08163684 +0x18f2:  sub    $0x4,%esp
08163687 +0x18f5:  lea    -0x1d(%ebp),%eax
0816368a +0x18f8:  mov    %eax,0x8(%esp)
0816368e +0x18fc:  lea    -0x1c(%ebp),%eax
08163691 +0x18ff:  mov    %eax,0x4(%esp)
08163695 +0x1903:  mov    %ebx,(%esp)
08163698 +0x1906:  call   081637b4 <+0x1a22>
0816369d +0x190b:  jmp    081636b9 <+0x1927>
0816369f +0x190d:  movb   $0x0,-0x15(%ebp)
081636a3 +0x1911:  lea    -0x15(%ebp),%eax
081636a6 +0x1914:  mov    %eax,0x8(%esp)
081636aa +0x1918:  lea    -0x34(%ebp),%eax
081636ad +0x191b:  mov    %eax,0x4(%esp)
081636b1 +0x191f:  mov    %ebx,(%esp)
081636b4 +0x1922:  call   08163800 <+0x1a6e>
081636b9 +0x1927:  mov    %ebx,%eax
081636bb +0x1929:  lea    -0x8(%ebp),%esp
081636be +0x192c:  add    $0x0,%esp
081636c1 +0x192f:  pop    %ebx
081636c2 +0x1930:  pop    %esi
081636c3 +0x1931:  pop    %ebp
081636c4 +0x1932:  ret    $0x4
081636c7 +0x1935:  nop
081636c8 +0x1936:  push   %ebp
081636c9 +0x1937:  mov    %esp,%ebp
081636cb +0x1939:  sub    $0x18,%esp
081636ce +0x193c:  mov    0x8(%ebp),%eax
081636d1 +0x193f:  mov    (%eax),%eax
081636d3 +0x1941:  mov    %eax,(%esp)
081636d6 +0x1944:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
081636db +0x1949:  mov    0x8(%ebp),%edx
081636de +0x194c:  mov    %eax,(%edx)
081636e0 +0x194e:  mov    0x8(%ebp),%eax
081636e3 +0x1951:  leave
081636e4 +0x1952:  ret
081636e5 +0x1953:  push   %ebp
081636e6 +0x1954:  mov    %esp,%ebp
081636e8 +0x1956:  mov    0x8(%ebp),%eax
081636eb +0x1959:  mov    0xc(%eax),%eax
081636ee +0x195c:  pop    %ebp
081636ef +0x195d:  ret
081636f0 +0x195e:  push   %ebp
081636f1 +0x195f:  mov    %esp,%ebp
081636f3 +0x1961:  sub    $0x18,%esp
081636f6 +0x1964:  mov    0x8(%ebp),%eax
081636f9 +0x1967:  mov    (%eax),%eax
081636fb +0x1969:  mov    %eax,(%esp)
081636fe +0x196c:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
08163703 +0x1971:  mov    0x8(%ebp),%edx
08163706 +0x1974:  mov    %eax,(%edx)
08163708 +0x1976:  mov    0x8(%ebp),%eax
0816370b +0x1979:  leave
0816370c +0x197a:  ret
0816370d +0x197b:  nop
0816370e +0x197c:  push   %ebp
0816370f +0x197d:  mov    %esp,%ebp
08163711 +0x197f:  pop    %ebp
08163712 +0x1980:  ret
08163713 +0x1981:  nop
08163714 +0x1982:  push   %ebp
08163715 +0x1983:  mov    %esp,%ebp
08163717 +0x1985:  sub    $0x18,%esp
0816371a +0x1988:  mov    0xc(%ebp),%eax
0816371d +0x198b:  mov    %eax,(%esp)
08163720 +0x198e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08163725 +0x1993:  leave
08163726 +0x1994:  ret
08163727 +0x1995:  push   %ebp
08163728 +0x1996:  mov    %esp,%ebp
0816372a +0x1998:  mov    0x8(%ebp),%eax
0816372d +0x199b:  add    $0x10,%eax
08163730 +0x199e:  pop    %ebp
08163731 +0x199f:  ret
08163732 +0x19a0:  push   %ebp
08163733 +0x19a1:  mov    %esp,%ebp
08163735 +0x19a3:  push   %esi
08163736 +0x19a4:  push   %ebx
08163737 +0x19a5:  sub    $0x20,%esp
0816373a +0x19a8:  mov    0x8(%ebp),%eax
0816373d +0x19ab:  mov    %eax,(%esp)
08163740 +0x19ae:  call   0816382e <+0x1a9c>
08163745 +0x19b3:  mov    %eax,-0xc(%ebp)
08163748 +0x19b6:  mov    0xc(%ebp),%eax
0816374b +0x19b9:  mov    %eax,(%esp)
0816374e +0x19bc:  call   08163851 <+0x1abf>
08163753 +0x19c1:  mov    %eax,%ebx
08163755 +0x19c3:  mov    0x8(%ebp),%eax
08163758 +0x19c6:  mov    %eax,(%esp)
0816375b +0x19c9:  call   081633aa <+0x1618>
08163760 +0x19ce:  mov    %ebx,0x8(%esp)
08163764 +0x19d2:  mov    -0xc(%ebp),%edx
08163767 +0x19d5:  mov    %edx,0x4(%esp)
0816376b +0x19d9:  mov    %eax,(%esp)
0816376e +0x19dc:  call   0816385a <+0x1ac8>
08163773 +0x19e1:  jmp    081637a9 <+0x1a17>
08163775 +0x19e3:  mov    %eax,(%esp)
08163778 +0x19e6:  call   08725ce0 <__cxa_begin_catch>
0816377d +0x19eb:  mov    -0xc(%ebp),%eax
08163780 +0x19ee:  mov    %eax,0x4(%esp)
08163784 +0x19f2:  mov    0x8(%ebp),%eax
08163787 +0x19f5:  mov    %eax,(%esp)
0816378a +0x19f8:  call   081633cc <+0x163a>
0816378f +0x19fd:  call   08724be0 <__cxa_rethrow>
08163794 +0x1a02:  mov    %edx,%ebx
08163796 +0x1a04:  mov    %eax,%esi
08163798 +0x1a06:  call   08725c30 <__cxa_end_catch>
0816379d +0x1a0b:  mov    %esi,%eax
0816379f +0x1a0d:  mov    %ebx,%edx
081637a1 +0x1a0f:  mov    %eax,(%esp)
081637a4 +0x1a12:  call   08ae3750 <_Unwind_Resume>
081637a9 +0x1a17:  mov    -0xc(%ebp),%eax
081637ac +0x1a1a:  add    $0x20,%esp
081637af +0x1a1d:  pop    %ebx
081637b0 +0x1a1e:  pop    %esi
081637b1 +0x1a1f:  pop    %ebp
081637b2 +0x1a20:  ret
081637b3 +0x1a21:  nop
081637b4 +0x1a22:  push   %ebp
081637b5 +0x1a23:  mov    %esp,%ebp
081637b7 +0x1a25:  sub    $0x18,%esp
081637ba +0x1a28:  mov    0xc(%ebp),%eax
081637bd +0x1a2b:  mov    %eax,(%esp)
081637c0 +0x1a2e:  call   08163899 <+0x1b07>
081637c5 +0x1a33:  mov    0x8(%ebp),%edx
081637c8 +0x1a36:  mov    (%eax),%eax
081637ca +0x1a38:  mov    %eax,(%edx)
081637cc +0x1a3a:  mov    0x10(%ebp),%eax
081637cf +0x1a3d:  mov    %eax,(%esp)
081637d2 +0x1a40:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081637d7 +0x1a45:  movzbl (%eax),%edx
081637da +0x1a48:  mov    0x8(%ebp),%eax
081637dd +0x1a4b:  mov    %dl,0x4(%eax)
081637e0 +0x1a4e:  leave
081637e1 +0x1a4f:  ret
081637e2 +0x1a50:  push   %ebp
081637e3 +0x1a51:  mov    %esp,%ebp
081637e5 +0x1a53:  sub    $0x18,%esp
081637e8 +0x1a56:  mov    0x8(%ebp),%eax
081637eb +0x1a59:  mov    (%eax),%eax
081637ed +0x1a5b:  mov    %eax,(%esp)
081637f0 +0x1a5e:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
081637f5 +0x1a63:  mov    0x8(%ebp),%edx
081637f8 +0x1a66:  mov    %eax,(%edx)
081637fa +0x1a68:  mov    0x8(%ebp),%eax
081637fd +0x1a6b:  leave
081637fe +0x1a6c:  ret
081637ff +0x1a6d:  nop
08163800 +0x1a6e:  push   %ebp
08163801 +0x1a6f:  mov    %esp,%ebp
08163803 +0x1a71:  sub    $0x18,%esp
08163806 +0x1a74:  mov    0xc(%ebp),%eax
08163809 +0x1a77:  mov    %eax,(%esp)
0816380c +0x1a7a:  call   081638a1 <+0x1b0f>
08163811 +0x1a7f:  mov    0x8(%ebp),%edx
08163814 +0x1a82:  mov    (%eax),%eax
08163816 +0x1a84:  mov    %eax,(%edx)
08163818 +0x1a86:  mov    0x10(%ebp),%eax
0816381b +0x1a89:  mov    %eax,(%esp)
0816381e +0x1a8c:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08163823 +0x1a91:  movzbl (%eax),%edx
08163826 +0x1a94:  mov    0x8(%ebp),%eax
08163829 +0x1a97:  mov    %dl,0x4(%eax)
0816382c +0x1a9a:  leave
0816382d +0x1a9b:  ret
0816382e +0x1a9c:  push   %ebp
0816382f +0x1a9d:  mov    %esp,%ebp
08163831 +0x1a9f:  sub    $0x18,%esp
08163834 +0x1aa2:  mov    0x8(%ebp),%eax
08163837 +0x1aa5:  movl   $0x0,0x8(%esp)
0816383f +0x1aad:  movl   $0x1,0x4(%esp)
08163847 +0x1ab5:  mov    %eax,(%esp)
0816384a +0x1ab8:  call   081638aa <+0x1b18>
0816384f +0x1abd:  leave
08163850 +0x1abe:  ret
08163851 +0x1abf:  push   %ebp
08163852 +0x1ac0:  mov    %esp,%ebp
08163854 +0x1ac2:  mov    0x8(%ebp),%eax
08163857 +0x1ac5:  pop    %ebp
08163858 +0x1ac6:  ret
08163859 +0x1ac7:  nop
0816385a +0x1ac8:  push   %ebp
0816385b +0x1ac9:  mov    %esp,%ebp
0816385d +0x1acb:  push   %ebx
0816385e +0x1acc:  sub    $0x14,%esp
08163861 +0x1acf:  mov    0x10(%ebp),%eax
08163864 +0x1ad2:  mov    %eax,(%esp)
08163867 +0x1ad5:  call   08163851 <+0x1abf>
0816386c +0x1ada:  mov    %eax,%ebx
0816386e +0x1adc:  mov    0xc(%ebp),%eax
08163871 +0x1adf:  mov    %eax,0x4(%esp)
08163875 +0x1ae3:  movl   $0x18,(%esp)
0816387c +0x1aea:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08163881 +0x1aef:  mov    %eax,%edx
08163883 +0x1af1:  test   %edx,%edx
08163885 +0x1af3:  je     08163893 <+0x1b01>
08163887 +0x1af5:  mov    %ebx,0x4(%esp)
0816388b +0x1af9:  mov    %eax,(%esp)
0816388e +0x1afc:  call   081638e8 <+0x1b56>
08163893 +0x1b01:  add    $0x14,%esp
08163896 +0x1b04:  pop    %ebx
08163897 +0x1b05:  pop    %ebp
08163898 +0x1b06:  ret
08163899 +0x1b07:  push   %ebp
0816389a +0x1b08:  mov    %esp,%ebp
0816389c +0x1b0a:  mov    0x8(%ebp),%eax
0816389f +0x1b0d:  pop    %ebp
081638a0 +0x1b0e:  ret
081638a1 +0x1b0f:  push   %ebp
081638a2 +0x1b10:  mov    %esp,%ebp
081638a4 +0x1b12:  mov    0x8(%ebp),%eax
081638a7 +0x1b15:  pop    %ebp
081638a8 +0x1b16:  ret
081638a9 +0x1b17:  nop
081638aa +0x1b18:  push   %ebp
081638ab +0x1b19:  mov    %esp,%ebp
081638ad +0x1b1b:  sub    $0x18,%esp
081638b0 +0x1b1e:  mov    0x8(%ebp),%eax
081638b3 +0x1b21:  mov    %eax,(%esp)
081638b6 +0x1b24:  call   08163930 <+0x1b9e>
081638bb +0x1b29:  cmp    0xc(%ebp),%eax
081638be +0x1b2c:  setb   %al
081638c1 +0x1b2f:  movzbl %al,%eax
081638c4 +0x1b32:  test   %eax,%eax
081638c6 +0x1b34:  setne  %al
081638c9 +0x1b37:  test   %al,%al
081638cb +0x1b39:  je     081638d2 <+0x1b40>
081638cd +0x1b3b:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081638d2 +0x1b40:  mov    0xc(%ebp),%edx
081638d5 +0x1b43:  mov    %edx,%eax
081638d7 +0x1b45:  add    %eax,%eax
081638d9 +0x1b47:  add    %edx,%eax
081638db +0x1b49:  shl    $0x3,%eax
081638de +0x1b4c:  mov    %eax,(%esp)
081638e1 +0x1b4f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081638e6 +0x1b54:  leave
081638e7 +0x1b55:  ret
081638e8 +0x1b56:  push   %ebp
081638e9 +0x1b57:  mov    %esp,%ebp
081638eb +0x1b59:  sub    $0x18,%esp
081638ee +0x1b5c:  mov    0x8(%ebp),%eax
081638f1 +0x1b5f:  movl   $0x0,(%eax)
081638f7 +0x1b65:  mov    0x8(%ebp),%eax
081638fa +0x1b68:  movl   $0x0,0x4(%eax)
08163901 +0x1b6f:  mov    0x8(%ebp),%eax
08163904 +0x1b72:  movl   $0x0,0x8(%eax)
0816390b +0x1b79:  mov    0x8(%ebp),%eax
0816390e +0x1b7c:  movl   $0x0,0xc(%eax)
08163915 +0x1b83:  mov    0xc(%ebp),%eax
08163918 +0x1b86:  mov    %eax,(%esp)
0816391b +0x1b89:  call   08163851 <+0x1abf>
08163920 +0x1b8e:  mov    0x8(%ebp),%ecx
08163923 +0x1b91:  mov    0x4(%eax),%edx
08163926 +0x1b94:  mov    (%eax),%eax
08163928 +0x1b96:  mov    %eax,0x10(%ecx)
0816392b +0x1b99:  mov    %edx,0x14(%ecx)
0816392e +0x1b9c:  leave
0816392f +0x1b9d:  ret
08163930 +0x1b9e:  push   %ebp
08163931 +0x1b9f:  mov    %esp,%ebp
08163933 +0x1ba1:  mov    $0xaaaaaaa,%eax
08163938 +0x1ba6:  pop    %ebp
08163939 +0x1ba7:  ret
0816393a +0x1ba8:  nop
0816393b +0x1ba9:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8161d92

/* TaiwanInternalDispatcher::TaiwanInternalDispatcher() */

void TaiwanInternalDispatcher::_GLOBAL__I_TaiwanInternalDispatcher(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
