# getIPGStatus

`_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE`

`global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::IPG::CIPGHelper` | `0x08100fde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08100fde  _GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE
#           global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)
# range [0x08100fde, 0x081043cb]
08100fde +0x0000:  push   %ebp
08100fdf +0x0001:  mov    %esp,%ebp
08100fe1 +0x0003:  sub    $0x18,%esp
08100fe4 +0x0006:  movl   $0xffff,0x4(%esp)
08100fec +0x000e:  movl   $0x1,(%esp)
08100ff3 +0x0015:  call   08100f9e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08100ff8 +0x001a:  leave
08100ff9 +0x001b:  ret
08100ffa +0x001c:  push   %ebp
08100ffb +0x001d:  mov    %esp,%ebp
08100ffd +0x001f:  mov    0x8(%ebp),%eax
08101000 +0x0022:  mov    (%eax),%eax
08101002 +0x0024:  pop    %ebp
08101003 +0x0025:  ret
08101004 +0x0026:  push   %ebp
08101005 +0x0027:  mov    %esp,%ebp
08101007 +0x0029:  sub    $0x28,%esp
0810100a +0x002c:  mov    0xc(%ebp),%eax
0810100d +0x002f:  mov    %al,-0xc(%ebp)
08101010 +0x0032:  movsbl -0xc(%ebp),%edx
08101014 +0x0036:  mov    0x8(%ebp),%eax
08101017 +0x0039:  mov    (%eax),%eax
08101019 +0x003b:  mov    %edx,0x4(%esp)
0810101d +0x003f:  mov    %eax,(%esp)
08101020 +0x0042:  call   0861c0b2 <_ZN6StreamlsEc>  ; Stream::operator<<(char)
08101025 +0x0047:  leave
08101026 +0x0048:  ret
08101027 +0x0049:  nop
08101028 +0x004a:  push   %ebp
08101029 +0x004b:  mov    %esp,%ebp
0810102b +0x004d:  mov    0x8(%ebp),%eax
0810102e +0x0050:  mov    0x10(%eax),%eax
08101031 +0x0053:  test   %eax,%eax
08101033 +0x0055:  je     08101040 <+0x62>
08101035 +0x0057:  mov    0x8(%ebp),%eax
08101038 +0x005a:  mov    0x10(%eax),%eax
0810103b +0x005d:  add    $0x4,%eax
0810103e +0x0060:  jmp    08101045 <+0x67>
08101040 +0x0062:  mov    $"",%eax
08101045 +0x0067:  pop    %ebp
08101046 +0x0068:  ret
08101047 +0x0069:  nop
08101048 +0x006a:  push   %ebp
08101049 +0x006b:  mov    %esp,%ebp
0810104b +0x006d:  mov    0x8(%ebp),%eax
0810104e +0x0070:  add    $0x704c6,%eax
08101053 +0x0075:  pop    %ebp
08101054 +0x0076:  ret
08101055 +0x0077:  nop
08101056 +0x0078:  push   %ebp
08101057 +0x0079:  mov    %esp,%ebp
08101059 +0x007b:  mov    0x8(%ebp),%eax
0810105c +0x007e:  add    $0x70546,%eax
08101061 +0x0083:  pop    %ebp
08101062 +0x0084:  ret
08101063 +0x0085:  nop
08101064 +0x0086:  push   %ebp
08101065 +0x0087:  mov    %esp,%ebp
08101067 +0x0089:  mov    0x8(%ebp),%eax
0810106a +0x008c:  add    $0x705c6,%eax
0810106f +0x0091:  pop    %ebp
08101070 +0x0092:  ret
08101071 +0x0093:  nop
08101072 +0x0094:  push   %ebp
08101073 +0x0095:  mov    %esp,%ebp
08101075 +0x0097:  mov    0x8(%ebp),%eax
08101078 +0x009a:  add    $0x704b0,%eax
0810107d +0x009f:  pop    %ebp
0810107e +0x00a0:  ret
0810107f +0x00a1:  nop
08101080 +0x00a2:  push   %ebp
08101081 +0x00a3:  mov    %esp,%ebp
08101083 +0x00a5:  sub    $0x18,%esp
08101086 +0x00a8:  mov    0xc(%ebp),%eax
08101089 +0x00ab:  mov    %eax,(%esp)
0810108c +0x00ae:  call   08100ffa <+0x1c>
08101091 +0x00b3:  mov    %eax,0x4(%esp)
08101095 +0x00b7:  mov    0x8(%ebp),%eax
08101098 +0x00ba:  mov    %eax,(%esp)
0810109b +0x00bd:  call   0828fb28 <_ZN10StreamPool4FreeEP6Stream>  ; StreamPool::Free(Stream*)
081010a0 +0x00c2:  leave
081010a1 +0x00c3:  ret
081010a2 +0x00c4:  push   %ebp
081010a3 +0x00c5:  mov    %esp,%ebp
081010a5 +0x00c7:  mov    0x8(%ebp),%eax
081010a8 +0x00ca:  mov    0x4(%eax),%eax
081010ab +0x00cd:  pop    %ebp
081010ac +0x00ce:  ret
081010ad +0x00cf:  nop
081010ae +0x00d0:  push   %ebp
081010af +0x00d1:  mov    %esp,%ebp
081010b1 +0x00d3:  sub    $0x18,%esp
081010b4 +0x00d6:  mov    0x8(%ebp),%eax
081010b7 +0x00d9:  add    $0x5c,%eax
081010ba +0x00dc:  mov    %eax,(%esp)
081010bd +0x00df:  call   081012b6 <+0x2d8>
081010c2 +0x00e4:  mov    0xc(%ebp),%edx
081010c5 +0x00e7:  mov    %eax,(%edx)
081010c7 +0x00e9:  mov    0x8(%ebp),%eax
081010ca +0x00ec:  add    $0x5c,%eax
081010cd +0x00ef:  mov    %eax,(%esp)
081010d0 +0x00f2:  call   081012cc <+0x2ee>
081010d5 +0x00f7:  mov    0xc(%ebp),%edx
081010d8 +0x00fa:  mov    %eax,0x4(%edx)
081010db +0x00fd:  mov    0x8(%ebp),%eax
081010de +0x0100:  add    $0xc,%eax
081010e1 +0x0103:  mov    %eax,(%esp)
081010e4 +0x0106:  call   081012d8 <+0x2fa>
081010e9 +0x010b:  mov    %eax,%edx
081010eb +0x010d:  mov    0xc(%ebp),%eax
081010ee +0x0110:  mov    %edx,0x8(%eax)
081010f1 +0x0113:  leave
081010f2 +0x0114:  ret
081010f3 +0x0115:  nop
081010f4 +0x0116:  push   %ebp
081010f5 +0x0117:  mov    %esp,%ebp
081010f7 +0x0119:  sub    $0x18,%esp
081010fa +0x011c:  mov    0x8(%ebp),%eax
081010fd +0x011f:  mov    %eax,(%esp)
08101100 +0x0122:  call   08101300 <+0x322>
08101105 +0x0127:  leave
08101106 +0x0128:  ret
08101107 +0x0129:  nop
08101108 +0x012a:  push   %ebp
08101109 +0x012b:  mov    %esp,%ebp
0810110b +0x012d:  push   %esi
0810110c +0x012e:  push   %ebx
0810110d +0x012f:  sub    $0x60,%esp
08101110 +0x0132:  mov    0x8(%ebp),%eax
08101113 +0x0135:  movl   $0x0,(%eax)
08101119 +0x013b:  lea    -0x58(%ebp),%eax
0810111c +0x013e:  mov    %eax,(%esp)
0810111f +0x0141:  call   081012ec <+0x30e>
08101124 +0x0146:  mov    0x8(%ebp),%eax
08101127 +0x0149:  lea    0xc(%eax),%edx
0810112a +0x014c:  lea    -0x58(%ebp),%eax
0810112d +0x014f:  mov    %eax,0x4(%esp)
08101131 +0x0153:  mov    %edx,(%esp)
08101134 +0x0156:  call   0810138e <+0x3b0>
08101139 +0x015b:  jmp    08101156 <+0x178>
0810113b +0x015d:  mov    %edx,%ebx
0810113d +0x015f:  mov    %eax,%esi
0810113f +0x0161:  lea    -0x58(%ebp),%eax
08101142 +0x0164:  mov    %eax,(%esp)
08101145 +0x0167:  call   08101300 <+0x322>
0810114a +0x016c:  mov    %esi,%eax
0810114c +0x016e:  mov    %ebx,%edx
0810114e +0x0170:  mov    %eax,(%esp)
08101151 +0x0173:  call   08ae3750 <_Unwind_Resume>
08101156 +0x0178:  lea    -0x58(%ebp),%eax
08101159 +0x017b:  mov    %eax,(%esp)
0810115c +0x017e:  call   08101300 <+0x322>
08101161 +0x0183:  lea    -0x30(%ebp),%eax
08101164 +0x0186:  mov    %eax,(%esp)
08101167 +0x0189:  call   081012ec <+0x30e>
0810116c +0x018e:  mov    0x8(%ebp),%eax
0810116f +0x0191:  lea    0x34(%eax),%edx
08101172 +0x0194:  lea    -0x30(%ebp),%eax
08101175 +0x0197:  mov    %eax,0x4(%esp)
08101179 +0x019b:  mov    %edx,(%esp)
0810117c +0x019e:  call   0810138e <+0x3b0>
08101181 +0x01a3:  jmp    08101198 <+0x1ba>
08101183 +0x01a5:  mov    %edx,%ebx
08101185 +0x01a7:  mov    %eax,%esi
08101187 +0x01a9:  lea    -0x30(%ebp),%eax
0810118a +0x01ac:  mov    %eax,(%esp)
0810118d +0x01af:  call   08101300 <+0x322>
08101192 +0x01b4:  mov    %esi,%eax
08101194 +0x01b6:  mov    %ebx,%edx
08101196 +0x01b8:  jmp    08101204 <+0x226>
08101198 +0x01ba:  lea    -0x30(%ebp),%eax
0810119b +0x01bd:  mov    %eax,(%esp)
0810119e +0x01c0:  call   08101300 <+0x322>
081011a3 +0x01c5:  mov    0x8(%ebp),%eax
081011a6 +0x01c8:  add    $0x5c,%eax
081011a9 +0x01cb:  movl   $0x3e8,0x4(%esp)
081011b1 +0x01d3:  mov    %eax,(%esp)
081011b4 +0x01d6:  call   081013ec <+0x40e>
081011b9 +0x01db:  mov    0x8(%ebp),%eax
081011bc +0x01de:  mov    0xc(%ebp),%edx
081011bf +0x01e1:  mov    %edx,0xb8(%eax)
081011c5 +0x01e7:  mov    0x8(%ebp),%eax
081011c8 +0x01ea:  add    $0xbc,%eax
081011cd +0x01ef:  mov    %eax,(%esp)
081011d0 +0x01f2:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
081011d5 +0x01f7:  mov    0x8(%ebp),%eax
081011d8 +0x01fa:  add    $0xd4,%eax
081011dd +0x01ff:  mov    %eax,(%esp)
081011e0 +0x0202:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
081011e5 +0x0207:  add    $0x60,%esp
081011e8 +0x020a:  pop    %ebx
081011e9 +0x020b:  pop    %esi
081011ea +0x020c:  pop    %ebp
081011eb +0x020d:  ret
081011ec +0x020e:  mov    %edx,%ebx
081011ee +0x0210:  mov    %eax,%esi
081011f0 +0x0212:  mov    0x8(%ebp),%eax
081011f3 +0x0215:  add    $0x34,%eax
081011f6 +0x0218:  mov    %eax,(%esp)
081011f9 +0x021b:  call   081010f4 <+0x116>
081011fe +0x0220:  mov    %esi,%eax
08101200 +0x0222:  mov    %ebx,%edx
08101202 +0x0224:  jmp    08101204 <+0x226>
08101204 +0x0226:  mov    %edx,%ebx
08101206 +0x0228:  mov    %eax,%esi
08101208 +0x022a:  mov    0x8(%ebp),%eax
0810120b +0x022d:  add    $0xc,%eax
0810120e +0x0230:  mov    %eax,(%esp)
08101211 +0x0233:  call   081010f4 <+0x116>
08101216 +0x0238:  mov    %esi,%eax
08101218 +0x023a:  mov    %ebx,%edx
0810121a +0x023c:  mov    %eax,(%esp)
0810121d +0x023f:  call   08ae3750 <_Unwind_Resume>
08101222 +0x0244:  push   %ebp
08101223 +0x0245:  mov    %esp,%ebp
08101225 +0x0247:  push   %esi
08101226 +0x0248:  push   %ebx
08101227 +0x0249:  sub    $0x10,%esp
0810122a +0x024c:  mov    0x8(%ebp),%eax
0810122d +0x024f:  add    $0xd4,%eax
08101232 +0x0254:  mov    %eax,(%esp)
08101235 +0x0257:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0810123a +0x025c:  mov    0x8(%ebp),%eax
0810123d +0x025f:  add    $0xbc,%eax
08101242 +0x0264:  mov    %eax,(%esp)
08101245 +0x0267:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0810124a +0x026c:  mov    0x8(%ebp),%eax
0810124d +0x026f:  add    $0x5c,%eax
08101250 +0x0272:  mov    %eax,(%esp)
08101253 +0x0275:  call   0810150e <+0x530>
08101258 +0x027a:  jmp    08101272 <+0x294>
0810125a +0x027c:  mov    %edx,%ebx
0810125c +0x027e:  mov    %eax,%esi
0810125e +0x0280:  mov    0x8(%ebp),%eax
08101261 +0x0283:  add    $0x34,%eax
08101264 +0x0286:  mov    %eax,(%esp)
08101267 +0x0289:  call   081010f4 <+0x116>
0810126c +0x028e:  mov    %esi,%eax
0810126e +0x0290:  mov    %ebx,%edx
08101270 +0x0292:  jmp    08101282 <+0x2a4>
08101272 +0x0294:  mov    0x8(%ebp),%eax
08101275 +0x0297:  add    $0x34,%eax
08101278 +0x029a:  mov    %eax,(%esp)
0810127b +0x029d:  call   081010f4 <+0x116>
08101280 +0x02a2:  jmp    081012a0 <+0x2c2>
08101282 +0x02a4:  mov    %edx,%ebx
08101284 +0x02a6:  mov    %eax,%esi
08101286 +0x02a8:  mov    0x8(%ebp),%eax
08101289 +0x02ab:  add    $0xc,%eax
0810128c +0x02ae:  mov    %eax,(%esp)
0810128f +0x02b1:  call   081010f4 <+0x116>
08101294 +0x02b6:  mov    %esi,%eax
08101296 +0x02b8:  mov    %ebx,%edx
08101298 +0x02ba:  mov    %eax,(%esp)
0810129b +0x02bd:  call   08ae3750 <_Unwind_Resume>
081012a0 +0x02c2:  mov    0x8(%ebp),%eax
081012a3 +0x02c5:  add    $0xc,%eax
081012a6 +0x02c8:  mov    %eax,(%esp)
081012a9 +0x02cb:  call   081010f4 <+0x116>
081012ae +0x02d0:  add    $0x10,%esp
081012b1 +0x02d3:  pop    %ebx
081012b2 +0x02d4:  pop    %esi
081012b3 +0x02d5:  pop    %ebp
081012b4 +0x02d6:  ret
081012b5 +0x02d7:  nop
081012b6 +0x02d8:  push   %ebp
081012b7 +0x02d9:  mov    %esp,%ebp
081012b9 +0x02db:  sub    $0x18,%esp
081012bc +0x02de:  mov    0x8(%ebp),%eax
081012bf +0x02e1:  add    $0x8,%eax
081012c2 +0x02e4:  mov    %eax,(%esp)
081012c5 +0x02e7:  call   08101628 <+0x64a>
081012ca +0x02ec:  leave
081012cb +0x02ed:  ret
081012cc +0x02ee:  push   %ebp
081012cd +0x02ef:  mov    %esp,%ebp
081012cf +0x02f1:  mov    0x8(%ebp),%eax
081012d2 +0x02f4:  mov    0x38(%eax),%eax
081012d5 +0x02f7:  pop    %ebp
081012d6 +0x02f8:  ret
081012d7 +0x02f9:  nop
081012d8 +0x02fa:  push   %ebp
081012d9 +0x02fb:  mov    %esp,%ebp
081012db +0x02fd:  sub    $0x18,%esp
081012de +0x0300:  mov    0x8(%ebp),%eax
081012e1 +0x0303:  mov    %eax,(%esp)
081012e4 +0x0306:  call   0810163c <+0x65e>
081012e9 +0x030b:  leave
081012ea +0x030c:  ret
081012eb +0x030d:  nop
081012ec +0x030e:  push   %ebp
081012ed +0x030f:  mov    %esp,%ebp
081012ef +0x0311:  sub    $0x18,%esp
081012f2 +0x0314:  mov    0x8(%ebp),%eax
081012f5 +0x0317:  mov    %eax,(%esp)
081012f8 +0x031a:  call   08101670 <+0x692>
081012fd +0x031f:  leave
081012fe +0x0320:  ret
081012ff +0x0321:  nop
08101300 +0x0322:  push   %ebp
08101301 +0x0323:  mov    %esp,%ebp
08101303 +0x0325:  push   %esi
08101304 +0x0326:  push   %ebx
08101305 +0x0327:  sub    $0x30,%esp
08101308 +0x032a:  mov    0x8(%ebp),%eax
0810130b +0x032d:  mov    %eax,(%esp)
0810130e +0x0330:  call   0810178e <+0x7b0>
08101313 +0x0335:  mov    %eax,%ebx
08101315 +0x0337:  lea    -0x28(%ebp),%eax
08101318 +0x033a:  mov    0x8(%ebp),%edx
0810131b +0x033d:  mov    %edx,0x4(%esp)
0810131f +0x0341:  mov    %eax,(%esp)
08101322 +0x0344:  call   08101764 <+0x786>
08101327 +0x0349:  sub    $0x4,%esp
0810132a +0x034c:  lea    -0x18(%ebp),%eax
0810132d +0x034f:  mov    0x8(%ebp),%edx
08101330 +0x0352:  mov    %edx,0x4(%esp)
08101334 +0x0356:  mov    %eax,(%esp)
08101337 +0x0359:  call   0810173a <+0x75c>
0810133c +0x035e:  sub    $0x4,%esp
0810133f +0x0361:  mov    %ebx,0xc(%esp)
08101343 +0x0365:  lea    -0x28(%ebp),%eax
08101346 +0x0368:  mov    %eax,0x8(%esp)
0810134a +0x036c:  lea    -0x18(%ebp),%eax
0810134d +0x036f:  mov    %eax,0x4(%esp)
08101351 +0x0373:  mov    0x8(%ebp),%eax
08101354 +0x0376:  mov    %eax,(%esp)
08101357 +0x0379:  call   081017ca <+0x7ec>
0810135c +0x037e:  jmp    08101379 <+0x39b>
0810135e +0x0380:  mov    %edx,%ebx
08101360 +0x0382:  mov    %eax,%esi
08101362 +0x0384:  mov    0x8(%ebp),%eax
08101365 +0x0387:  mov    %eax,(%esp)
08101368 +0x038a:  call   081016ba <+0x6dc>
0810136d +0x038f:  mov    %esi,%eax
0810136f +0x0391:  mov    %ebx,%edx
08101371 +0x0393:  mov    %eax,(%esp)
08101374 +0x0396:  call   08ae3750 <_Unwind_Resume>
08101379 +0x039b:  mov    0x8(%ebp),%eax
0810137c +0x039e:  mov    %eax,(%esp)
0810137f +0x03a1:  call   081016ba <+0x6dc>
08101384 +0x03a6:  lea    -0x8(%ebp),%esp
08101387 +0x03a9:  add    $0x0,%esp
0810138a +0x03ac:  pop    %ebx
0810138b +0x03ad:  pop    %esi
0810138c +0x03ae:  pop    %ebp
0810138d +0x03af:  ret
0810138e +0x03b0:  push   %ebp
0810138f +0x03b1:  mov    %esp,%ebp
08101391 +0x03b3:  sub    $0x18,%esp
08101394 +0x03b6:  mov    0xc(%ebp),%eax
08101397 +0x03b9:  mov    %eax,(%esp)
0810139a +0x03bc:  call   081017d2 <+0x7f4>
0810139f +0x03c1:  mov    0x8(%ebp),%edx
081013a2 +0x03c4:  mov    %eax,0x4(%esp)
081013a6 +0x03c8:  mov    %edx,(%esp)
081013a9 +0x03cb:  call   081017da <+0x7fc>
081013ae +0x03d0:  leave
081013af +0x03d1:  ret
081013b0 +0x03d2:  push   %ebp
081013b1 +0x03d3:  mov    %esp,%ebp
081013b3 +0x03d5:  sub    $0x18,%esp
081013b6 +0x03d8:  mov    0x8(%ebp),%eax
081013b9 +0x03db:  mov    %eax,(%esp)
081013bc +0x03de:  call   08101810 <+0x832>
081013c1 +0x03e3:  leave
081013c2 +0x03e4:  ret
081013c3 +0x03e5:  nop
081013c4 +0x03e6:  push   %ebp
081013c5 +0x03e7:  mov    %esp,%ebp
081013c7 +0x03e9:  sub    $0x18,%esp
081013ca +0x03ec:  mov    0x8(%ebp),%eax
081013cd +0x03ef:  mov    %eax,(%esp)
081013d0 +0x03f2:  call   081018e8 <+0x90a>
081013d5 +0x03f7:  leave
081013d6 +0x03f8:  ret
081013d7 +0x03f9:  nop
081013d8 +0x03fa:  push   %ebp
081013d9 +0x03fb:  mov    %esp,%ebp
081013db +0x03fd:  sub    $0x18,%esp
081013de +0x0400:  mov    0x8(%ebp),%eax
081013e1 +0x0403:  mov    %eax,(%esp)
081013e4 +0x0406:  call   08101952 <+0x974>
081013e9 +0x040b:  leave
081013ea +0x040c:  ret
081013eb +0x040d:  nop
081013ec +0x040e:  push   %ebp
081013ed +0x040f:  mov    %esp,%ebp
081013ef +0x0411:  push   %esi
081013f0 +0x0412:  push   %ebx
081013f1 +0x0413:  sub    $0x40,%esp
081013f4 +0x0416:  lea    -0x30(%ebp),%eax
081013f7 +0x0419:  mov    %eax,(%esp)
081013fa +0x041c:  call   081017fc <+0x81e>
081013ff +0x0421:  mov    0x8(%ebp),%eax
08101402 +0x0424:  lea    0x8(%eax),%edx
08101405 +0x0427:  lea    -0x30(%ebp),%eax
08101408 +0x042a:  mov    %eax,0x4(%esp)
0810140c +0x042e:  mov    %edx,(%esp)
0810140f +0x0431:  call   0810189e <+0x8c0>
08101414 +0x0436:  jmp    08101431 <+0x453>
08101416 +0x0438:  mov    %edx,%ebx
08101418 +0x043a:  mov    %eax,%esi
0810141a +0x043c:  lea    -0x30(%ebp),%eax
0810141d +0x043f:  mov    %eax,(%esp)
08101420 +0x0442:  call   08101810 <+0x832>
08101425 +0x0447:  mov    %esi,%eax
08101427 +0x0449:  mov    %ebx,%edx
08101429 +0x044b:  mov    %eax,(%esp)
0810142c +0x044e:  call   08ae3750 <_Unwind_Resume>
08101431 +0x0453:  lea    -0x30(%ebp),%eax
08101434 +0x0456:  mov    %eax,(%esp)
08101437 +0x0459:  call   08101810 <+0x832>
0810143c +0x045e:  mov    0x8(%ebp),%eax
0810143f +0x0461:  add    $0x30,%eax
08101442 +0x0464:  mov    %eax,(%esp)
08101445 +0x0467:  call   081018c0 <+0x8e2>
0810144a +0x046c:  mov    0x8(%ebp),%eax
0810144d +0x046f:  movl   $0x0,0x38(%eax)
08101454 +0x0476:  mov    0x8(%ebp),%eax
08101457 +0x0479:  add    $0x44,%eax
0810145a +0x047c:  mov    %eax,(%esp)
0810145d +0x047f:  call   0810192a <+0x94c>
08101462 +0x0484:  mov    0x8(%ebp),%eax
08101465 +0x0487:  movl   $0x0,0x3c(%eax)
0810146c +0x048e:  mov    0x8(%ebp),%eax
0810146f +0x0491:  add    $0x30,%eax
08101472 +0x0494:  mov    %eax,(%esp)
08101475 +0x0497:  call   081019a4 <+0x9c6>
0810147a +0x049c:  mov    0xc(%ebp),%eax
0810147d +0x049f:  mov    %eax,%edx
0810147f +0x04a1:  mov    0x8(%ebp),%eax
08101482 +0x04a4:  mov    %dx,0x40(%eax)
08101486 +0x04a8:  mov    0x8(%ebp),%eax
08101489 +0x04ab:  movzwl 0x40(%eax),%edx
0810148d +0x04af:  mov    0x8(%ebp),%eax
08101490 +0x04b2:  mov    %dx,0x42(%eax)
08101494 +0x04b6:  mov    0xc(%ebp),%eax
08101497 +0x04b9:  mov    %eax,0x4(%esp)
0810149b +0x04bd:  mov    0x8(%ebp),%eax
0810149e +0x04c0:  mov    %eax,(%esp)
081014a1 +0x04c3:  call   081019c2 <+0x9e4>
081014a6 +0x04c8:  mov    0x8(%ebp),%eax
081014a9 +0x04cb:  movl   $0x0,0x4(%eax)
081014b0 +0x04d2:  mov    0x8(%ebp),%eax
081014b3 +0x04d5:  movl   $0x0,(%eax)
081014b9 +0x04db:  add    $0x40,%esp
081014bc +0x04de:  pop    %ebx
081014bd +0x04df:  pop    %esi
081014be +0x04e0:  pop    %ebp
081014bf +0x04e1:  ret
081014c0 +0x04e2:  mov    %edx,%ebx
081014c2 +0x04e4:  mov    %eax,%esi
081014c4 +0x04e6:  mov    0x8(%ebp),%eax
081014c7 +0x04e9:  add    $0x44,%eax
081014ca +0x04ec:  mov    %eax,(%esp)
081014cd +0x04ef:  call   081013d8 <+0x3fa>
081014d2 +0x04f4:  mov    %esi,%eax
081014d4 +0x04f6:  mov    %ebx,%edx
081014d6 +0x04f8:  jmp    081014d8 <+0x4fa>
081014d8 +0x04fa:  mov    %edx,%ebx
081014da +0x04fc:  mov    %eax,%esi
081014dc +0x04fe:  mov    0x8(%ebp),%eax
081014df +0x0501:  add    $0x30,%eax
081014e2 +0x0504:  mov    %eax,(%esp)
081014e5 +0x0507:  call   081013c4 <+0x3e6>
081014ea +0x050c:  mov    %esi,%eax
081014ec +0x050e:  mov    %ebx,%edx
081014ee +0x0510:  jmp    081014f0 <+0x512>
081014f0 +0x0512:  mov    %edx,%ebx
081014f2 +0x0514:  mov    %eax,%esi
081014f4 +0x0516:  mov    0x8(%ebp),%eax
081014f7 +0x0519:  add    $0x8,%eax
081014fa +0x051c:  mov    %eax,(%esp)
081014fd +0x051f:  call   081013b0 <+0x3d2>
08101502 +0x0524:  mov    %esi,%eax
08101504 +0x0526:  mov    %ebx,%edx
08101506 +0x0528:  mov    %eax,(%esp)
08101509 +0x052b:  call   08ae3750 <_Unwind_Resume>
0810150e +0x0530:  push   %ebp
0810150f +0x0531:  mov    %esp,%ebp
08101511 +0x0533:  push   %esi
08101512 +0x0534:  push   %ebx
08101513 +0x0535:  sub    $0x20,%esp
08101516 +0x0538:  mov    0x8(%ebp),%eax
08101519 +0x053b:  lea    0x30(%eax),%edx
0810151c +0x053e:  lea    -0x10(%ebp),%eax
0810151f +0x0541:  mov    %edx,0x4(%esp)
08101523 +0x0545:  mov    %eax,(%esp)
08101526 +0x0548:  call   08101b02 <+0xb24>
0810152b +0x054d:  sub    $0x4,%esp
0810152e +0x0550:  mov    0x8(%ebp),%eax
08101531 +0x0553:  lea    0x30(%eax),%edx
08101534 +0x0556:  lea    -0x14(%ebp),%eax
08101537 +0x0559:  mov    %edx,0x4(%esp)
0810153b +0x055d:  mov    %eax,(%esp)
0810153e +0x0560:  call   08101b28 <+0xb4a>
08101543 +0x0565:  sub    $0x4,%esp
08101546 +0x0568:  jmp    08101574 <+0x596>
08101548 +0x056a:  lea    -0x10(%ebp),%eax
0810154b +0x056d:  mov    %eax,(%esp)
0810154e +0x0570:  call   08101b74 <+0xb96>
08101553 +0x0575:  mov    (%eax),%eax
08101555 +0x0577:  mov    %eax,-0xc(%ebp)
08101558 +0x057a:  cmpl   $0x0,-0xc(%ebp)
0810155c +0x057e:  je     08101569 <+0x58b>
0810155e +0x0580:  mov    -0xc(%ebp),%eax
08101561 +0x0583:  mov    %eax,(%esp)
08101564 +0x0586:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08101569 +0x058b:  lea    -0x10(%ebp),%eax
0810156c +0x058e:  mov    %eax,(%esp)
0810156f +0x0591:  call   08101b60 <+0xb82>
08101574 +0x0596:  lea    -0x14(%ebp),%eax
08101577 +0x0599:  mov    %eax,0x4(%esp)
0810157b +0x059d:  lea    -0x10(%ebp),%eax
0810157e +0x05a0:  mov    %eax,(%esp)
08101581 +0x05a3:  call   08101b4c <+0xb6e>
08101586 +0x05a8:  test   %al,%al
08101588 +0x05aa:  jne    08101548 <+0x56a>
0810158a +0x05ac:  mov    0x8(%ebp),%eax
0810158d +0x05af:  add    $0x30,%eax
08101590 +0x05b2:  mov    %eax,(%esp)
08101593 +0x05b5:  call   081019a4 <+0x9c6>
08101598 +0x05ba:  mov    0x8(%ebp),%eax
0810159b +0x05bd:  movl   $0x0,(%eax)
081015a1 +0x05c3:  mov    0x8(%ebp),%eax
081015a4 +0x05c6:  add    $0x44,%eax
081015a7 +0x05c9:  mov    %eax,(%esp)
081015aa +0x05cc:  call   081013d8 <+0x3fa>
081015af +0x05d1:  jmp    081015e1 <+0x603>
081015b1 +0x05d3:  mov    %edx,%ebx
081015b3 +0x05d5:  mov    %eax,%esi
081015b5 +0x05d7:  mov    0x8(%ebp),%eax
081015b8 +0x05da:  add    $0x44,%eax
081015bb +0x05dd:  mov    %eax,(%esp)
081015be +0x05e0:  call   081013d8 <+0x3fa>
081015c3 +0x05e5:  mov    %esi,%eax
081015c5 +0x05e7:  mov    %ebx,%edx
081015c7 +0x05e9:  jmp    081015c9 <+0x5eb>
081015c9 +0x05eb:  mov    %edx,%ebx
081015cb +0x05ed:  mov    %eax,%esi
081015cd +0x05ef:  mov    0x8(%ebp),%eax
081015d0 +0x05f2:  add    $0x30,%eax
081015d3 +0x05f5:  mov    %eax,(%esp)
081015d6 +0x05f8:  call   081013c4 <+0x3e6>
081015db +0x05fd:  mov    %esi,%eax
081015dd +0x05ff:  mov    %ebx,%edx
081015df +0x0601:  jmp    081015f1 <+0x613>
081015e1 +0x0603:  mov    0x8(%ebp),%eax
081015e4 +0x0606:  add    $0x30,%eax
081015e7 +0x0609:  mov    %eax,(%esp)
081015ea +0x060c:  call   081013c4 <+0x3e6>
081015ef +0x0611:  jmp    0810160f <+0x631>
081015f1 +0x0613:  mov    %edx,%ebx
081015f3 +0x0615:  mov    %eax,%esi
081015f5 +0x0617:  mov    0x8(%ebp),%eax
081015f8 +0x061a:  add    $0x8,%eax
081015fb +0x061d:  mov    %eax,(%esp)
081015fe +0x0620:  call   081013b0 <+0x3d2>
08101603 +0x0625:  mov    %esi,%eax
08101605 +0x0627:  mov    %ebx,%edx
08101607 +0x0629:  mov    %eax,(%esp)
0810160a +0x062c:  call   08ae3750 <_Unwind_Resume>
0810160f +0x0631:  mov    0x8(%ebp),%eax
08101612 +0x0634:  add    $0x8,%eax
08101615 +0x0637:  mov    %eax,(%esp)
08101618 +0x063a:  call   081013b0 <+0x3d2>
0810161d +0x063f:  lea    -0x8(%ebp),%esp
08101620 +0x0642:  add    $0x0,%esp
08101623 +0x0645:  pop    %ebx
08101624 +0x0646:  pop    %esi
08101625 +0x0647:  pop    %ebp
08101626 +0x0648:  ret
08101627 +0x0649:  nop
08101628 +0x064a:  push   %ebp
08101629 +0x064b:  mov    %esp,%ebp
0810162b +0x064d:  sub    $0x18,%esp
0810162e +0x0650:  mov    0x8(%ebp),%eax
08101631 +0x0653:  mov    %eax,(%esp)
08101634 +0x0656:  call   08101b82 <+0xba4>
08101639 +0x065b:  leave
0810163a +0x065c:  ret
0810163b +0x065d:  nop
0810163c +0x065e:  push   %ebp
0810163d +0x065f:  mov    %esp,%ebp
0810163f +0x0661:  sub    $0x18,%esp
08101642 +0x0664:  mov    0x8(%ebp),%eax
08101645 +0x0667:  lea    0x8(%eax),%edx
08101648 +0x066a:  mov    0x8(%ebp),%eax
0810164b +0x066d:  add    $0x18,%eax
0810164e +0x0670:  mov    %edx,0x4(%esp)
08101652 +0x0674:  mov    %eax,(%esp)
08101655 +0x0677:  call   08101ba2 <+0xbc4>
0810165a +0x067c:  leave
0810165b +0x067d:  ret
0810165c +0x067e:  push   %ebp
0810165d +0x067f:  mov    %esp,%ebp
0810165f +0x0681:  sub    $0x18,%esp
08101662 +0x0684:  mov    0x8(%ebp),%eax
08101665 +0x0687:  mov    %eax,(%esp)
08101668 +0x068a:  call   08101c48 <+0xc6a>
0810166d +0x068f:  leave
0810166e +0x0690:  ret
0810166f +0x0691:  nop
08101670 +0x0692:  push   %ebp
08101671 +0x0693:  mov    %esp,%ebp
08101673 +0x0695:  push   %esi
08101674 +0x0696:  push   %ebx
08101675 +0x0697:  sub    $0x10,%esp
08101678 +0x069a:  mov    0x8(%ebp),%eax
0810167b +0x069d:  mov    %eax,(%esp)
0810167e +0x06a0:  call   08101c06 <+0xc28>
08101683 +0x06a5:  movl   $0x0,0x4(%esp)
0810168b +0x06ad:  mov    0x8(%ebp),%eax
0810168e +0x06b0:  mov    %eax,(%esp)
08101691 +0x06b3:  call   08101c5c <+0xc7e>
08101696 +0x06b8:  jmp    081016b3 <+0x6d5>
08101698 +0x06ba:  mov    %edx,%ebx
0810169a +0x06bc:  mov    %eax,%esi
0810169c +0x06be:  mov    0x8(%ebp),%eax
0810169f +0x06c1:  mov    %eax,(%esp)
081016a2 +0x06c4:  call   0810165c <+0x67e>
081016a7 +0x06c9:  mov    %esi,%eax
081016a9 +0x06cb:  mov    %ebx,%edx
081016ab +0x06cd:  mov    %eax,(%esp)
081016ae +0x06d0:  call   08ae3750 <_Unwind_Resume>
081016b3 +0x06d5:  add    $0x10,%esp
081016b6 +0x06d8:  pop    %ebx
081016b7 +0x06d9:  pop    %esi
081016b8 +0x06da:  pop    %ebp
081016b9 +0x06db:  ret
081016ba +0x06dc:  push   %ebp
081016bb +0x06dd:  mov    %esp,%ebp
081016bd +0x06df:  push   %esi
081016be +0x06e0:  push   %ebx
081016bf +0x06e1:  sub    $0x10,%esp
081016c2 +0x06e4:  mov    0x8(%ebp),%eax
081016c5 +0x06e7:  mov    (%eax),%eax
081016c7 +0x06e9:  test   %eax,%eax
081016c9 +0x06eb:  je     08101728 <+0x74a>
081016cb +0x06ed:  mov    0x8(%ebp),%eax
081016ce +0x06f0:  mov    0x24(%eax),%eax
081016d1 +0x06f3:  lea    0x4(%eax),%edx
081016d4 +0x06f6:  mov    0x8(%ebp),%eax
081016d7 +0x06f9:  mov    0x14(%eax),%eax
081016da +0x06fc:  mov    %edx,0x8(%esp)
081016de +0x0700:  mov    %eax,0x4(%esp)
081016e2 +0x0704:  mov    0x8(%ebp),%eax
081016e5 +0x0707:  mov    %eax,(%esp)
081016e8 +0x070a:  call   08101dcc <+0xdee>
081016ed +0x070f:  mov    0x8(%ebp),%eax
081016f0 +0x0712:  mov    0x4(%eax),%edx
081016f3 +0x0715:  mov    0x8(%ebp),%eax
081016f6 +0x0718:  mov    (%eax),%eax
081016f8 +0x071a:  mov    %edx,0x8(%esp)
081016fc +0x071e:  mov    %eax,0x4(%esp)
08101700 +0x0722:  mov    0x8(%ebp),%eax
08101703 +0x0725:  mov    %eax,(%esp)
08101706 +0x0728:  call   08101e02 <+0xe24>
0810170b +0x072d:  jmp    08101728 <+0x74a>
0810170d +0x072f:  mov    %edx,%ebx
0810170f +0x0731:  mov    %eax,%esi
08101711 +0x0733:  mov    0x8(%ebp),%eax
08101714 +0x0736:  mov    %eax,(%esp)
08101717 +0x0739:  call   0810165c <+0x67e>
0810171c +0x073e:  mov    %esi,%eax
0810171e +0x0740:  mov    %ebx,%edx
08101720 +0x0742:  mov    %eax,(%esp)
08101723 +0x0745:  call   08ae3750 <_Unwind_Resume>
08101728 +0x074a:  mov    0x8(%ebp),%eax
0810172b +0x074d:  mov    %eax,(%esp)
0810172e +0x0750:  call   0810165c <+0x67e>
08101733 +0x0755:  add    $0x10,%esp
08101736 +0x0758:  pop    %ebx
08101737 +0x0759:  pop    %esi
08101738 +0x075a:  pop    %ebp
08101739 +0x075b:  ret
0810173a +0x075c:  push   %ebp
0810173b +0x075d:  mov    %esp,%ebp
0810173d +0x075f:  push   %ebx
0810173e +0x0760:  sub    $0x14,%esp
08101741 +0x0763:  mov    0x8(%ebp),%ebx
08101744 +0x0766:  mov    %ebx,%eax
08101746 +0x0768:  mov    0xc(%ebp),%edx
08101749 +0x076b:  add    $0x8,%edx
0810174c +0x076e:  mov    %edx,0x4(%esp)
08101750 +0x0772:  mov    %eax,(%esp)
08101753 +0x0775:  call   08101796 <+0x7b8>
08101758 +0x077a:  mov    %ebx,%eax
0810175a +0x077c:  mov    %ebx,%eax
0810175c +0x077e:  add    $0x14,%esp
0810175f +0x0781:  pop    %ebx
08101760 +0x0782:  pop    %ebp
08101761 +0x0783:  ret    $0x4
08101764 +0x0786:  push   %ebp
08101765 +0x0787:  mov    %esp,%ebp
08101767 +0x0789:  push   %ebx
08101768 +0x078a:  sub    $0x14,%esp
0810176b +0x078d:  mov    0x8(%ebp),%ebx
0810176e +0x0790:  mov    %ebx,%eax
08101770 +0x0792:  mov    0xc(%ebp),%edx
08101773 +0x0795:  add    $0x18,%edx
08101776 +0x0798:  mov    %edx,0x4(%esp)
0810177a +0x079c:  mov    %eax,(%esp)
0810177d +0x079f:  call   08101796 <+0x7b8>
08101782 +0x07a4:  mov    %ebx,%eax
08101784 +0x07a6:  mov    %ebx,%eax
08101786 +0x07a8:  add    $0x14,%esp
08101789 +0x07ab:  pop    %ebx
0810178a +0x07ac:  pop    %ebp
0810178b +0x07ad:  ret    $0x4
0810178e +0x07b0:  push   %ebp
0810178f +0x07b1:  mov    %esp,%ebp
08101791 +0x07b3:  mov    0x8(%ebp),%eax
08101794 +0x07b6:  pop    %ebp
08101795 +0x07b7:  ret
08101796 +0x07b8:  push   %ebp
08101797 +0x07b9:  mov    %esp,%ebp
08101799 +0x07bb:  mov    0xc(%ebp),%eax
0810179c +0x07be:  mov    (%eax),%edx
0810179e +0x07c0:  mov    0x8(%ebp),%eax
081017a1 +0x07c3:  mov    %edx,(%eax)
081017a3 +0x07c5:  mov    0xc(%ebp),%eax
081017a6 +0x07c8:  mov    0x4(%eax),%edx
081017a9 +0x07cb:  mov    0x8(%ebp),%eax
081017ac +0x07ce:  mov    %edx,0x4(%eax)
081017af +0x07d1:  mov    0xc(%ebp),%eax
081017b2 +0x07d4:  mov    0x8(%eax),%edx
081017b5 +0x07d7:  mov    0x8(%ebp),%eax
081017b8 +0x07da:  mov    %edx,0x8(%eax)
081017bb +0x07dd:  mov    0xc(%ebp),%eax
081017be +0x07e0:  mov    0xc(%eax),%edx
081017c1 +0x07e3:  mov    0x8(%ebp),%eax
081017c4 +0x07e6:  mov    %edx,0xc(%eax)
081017c7 +0x07e9:  pop    %ebp
081017c8 +0x07ea:  ret
081017c9 +0x07eb:  nop
081017ca +0x07ec:  push   %ebp
081017cb +0x07ed:  mov    %esp,%ebp
081017cd +0x07ef:  sub    $0x20,%esp
081017d0 +0x07f2:  leave
081017d1 +0x07f3:  ret
081017d2 +0x07f4:  push   %ebp
081017d3 +0x07f5:  mov    %esp,%ebp
081017d5 +0x07f7:  mov    0x8(%ebp),%eax
081017d8 +0x07fa:  pop    %ebp
081017d9 +0x07fb:  ret
081017da +0x07fc:  push   %ebp
081017db +0x07fd:  mov    %esp,%ebp
081017dd +0x07ff:  sub    $0x18,%esp
081017e0 +0x0802:  mov    0xc(%ebp),%eax
081017e3 +0x0805:  mov    %eax,(%esp)
081017e6 +0x0808:  call   08101e43 <+0xe65>
081017eb +0x080d:  mov    0x8(%ebp),%edx
081017ee +0x0810:  mov    %eax,0x4(%esp)
081017f2 +0x0814:  mov    %edx,(%esp)
081017f5 +0x0817:  call   08101e4c <+0xe6e>
081017fa +0x081c:  leave
081017fb +0x081d:  ret
081017fc +0x081e:  push   %ebp
081017fd +0x081f:  mov    %esp,%ebp
081017ff +0x0821:  sub    $0x18,%esp
08101802 +0x0824:  mov    0x8(%ebp),%eax
08101805 +0x0827:  mov    %eax,(%esp)
08101808 +0x082a:  call   08101f1c <+0xf3e>
0810180d +0x082f:  leave
0810180e +0x0830:  ret
0810180f +0x0831:  nop
08101810 +0x0832:  push   %ebp
08101811 +0x0833:  mov    %esp,%ebp
08101813 +0x0835:  push   %esi
08101814 +0x0836:  push   %ebx
08101815 +0x0837:  sub    $0x30,%esp
08101818 +0x083a:  mov    0x8(%ebp),%eax
0810181b +0x083d:  mov    %eax,(%esp)
0810181e +0x0840:  call   0810203a <+0x105c>
08101823 +0x0845:  mov    %eax,%ebx
08101825 +0x0847:  lea    -0x28(%ebp),%eax
08101828 +0x084a:  mov    0x8(%ebp),%edx
0810182b +0x084d:  mov    %edx,0x4(%esp)
0810182f +0x0851:  mov    %eax,(%esp)
08101832 +0x0854:  call   08102010 <+0x1032>
08101837 +0x0859:  sub    $0x4,%esp
0810183a +0x085c:  lea    -0x18(%ebp),%eax
0810183d +0x085f:  mov    0x8(%ebp),%edx
08101840 +0x0862:  mov    %edx,0x4(%esp)
08101844 +0x0866:  mov    %eax,(%esp)
08101847 +0x0869:  call   08101fe6 <+0x1008>
0810184c +0x086e:  sub    $0x4,%esp
0810184f +0x0871:  mov    %ebx,0xc(%esp)
08101853 +0x0875:  lea    -0x28(%ebp),%eax
08101856 +0x0878:  mov    %eax,0x8(%esp)
0810185a +0x087c:  lea    -0x18(%ebp),%eax
0810185d +0x087f:  mov    %eax,0x4(%esp)
08101861 +0x0883:  mov    0x8(%ebp),%eax
08101864 +0x0886:  mov    %eax,(%esp)
08101867 +0x0889:  call   08102076 <+0x1098>
0810186c +0x088e:  jmp    08101889 <+0x8ab>
0810186e +0x0890:  mov    %edx,%ebx
08101870 +0x0892:  mov    %eax,%esi
08101872 +0x0894:  mov    0x8(%ebp),%eax
08101875 +0x0897:  mov    %eax,(%esp)
08101878 +0x089a:  call   08101f66 <+0xf88>
0810187d +0x089f:  mov    %esi,%eax
0810187f +0x08a1:  mov    %ebx,%edx
08101881 +0x08a3:  mov    %eax,(%esp)
08101884 +0x08a6:  call   08ae3750 <_Unwind_Resume>
08101889 +0x08ab:  mov    0x8(%ebp),%eax
0810188c +0x08ae:  mov    %eax,(%esp)
0810188f +0x08b1:  call   08101f66 <+0xf88>
08101894 +0x08b6:  lea    -0x8(%ebp),%esp
08101897 +0x08b9:  add    $0x0,%esp
0810189a +0x08bc:  pop    %ebx
0810189b +0x08bd:  pop    %esi
0810189c +0x08be:  pop    %ebp
0810189d +0x08bf:  ret
0810189e +0x08c0:  push   %ebp
0810189f +0x08c1:  mov    %esp,%ebp
081018a1 +0x08c3:  sub    $0x18,%esp
081018a4 +0x08c6:  mov    0xc(%ebp),%eax
081018a7 +0x08c9:  mov    %eax,(%esp)
081018aa +0x08cc:  call   0810207e <+0x10a0>
081018af +0x08d1:  mov    0x8(%ebp),%edx
081018b2 +0x08d4:  mov    %eax,0x4(%esp)
081018b6 +0x08d8:  mov    %edx,(%esp)
081018b9 +0x08db:  call   08102086 <+0x10a8>
081018be +0x08e0:  leave
081018bf +0x08e1:  ret
081018c0 +0x08e2:  push   %ebp
081018c1 +0x08e3:  mov    %esp,%ebp
081018c3 +0x08e5:  sub    $0x18,%esp
081018c6 +0x08e8:  mov    0x8(%ebp),%eax
081018c9 +0x08eb:  mov    %eax,(%esp)
081018cc +0x08ee:  call   081020a8 <+0x10ca>
081018d1 +0x08f3:  leave
081018d2 +0x08f4:  ret
081018d3 +0x08f5:  nop
081018d4 +0x08f6:  push   %ebp
081018d5 +0x08f7:  mov    %esp,%ebp
081018d7 +0x08f9:  sub    $0x18,%esp
081018da +0x08fc:  mov    0x8(%ebp),%eax
081018dd +0x08ff:  mov    %eax,(%esp)
081018e0 +0x0902:  call   081020c6 <+0x10e8>
081018e5 +0x0907:  leave
081018e6 +0x0908:  ret
081018e7 +0x0909:  nop
081018e8 +0x090a:  push   %ebp
081018e9 +0x090b:  mov    %esp,%ebp
081018eb +0x090d:  push   %esi
081018ec +0x090e:  push   %ebx
081018ed +0x090f:  sub    $0x10,%esp
081018f0 +0x0912:  mov    0x8(%ebp),%eax
081018f3 +0x0915:  mov    %eax,(%esp)
081018f6 +0x0918:  call   081020da <+0x10fc>
081018fb +0x091d:  jmp    08101918 <+0x93a>
081018fd +0x091f:  mov    %edx,%ebx
081018ff +0x0921:  mov    %eax,%esi
08101901 +0x0923:  mov    0x8(%ebp),%eax
08101904 +0x0926:  mov    %eax,(%esp)
08101907 +0x0929:  call   081018d4 <+0x8f6>
0810190c +0x092e:  mov    %esi,%eax
0810190e +0x0930:  mov    %ebx,%edx
08101910 +0x0932:  mov    %eax,(%esp)
08101913 +0x0935:  call   08ae3750 <_Unwind_Resume>
08101918 +0x093a:  mov    0x8(%ebp),%eax
0810191b +0x093d:  mov    %eax,(%esp)
0810191e +0x0940:  call   081018d4 <+0x8f6>
08101923 +0x0945:  add    $0x10,%esp
08101926 +0x0948:  pop    %ebx
08101927 +0x0949:  pop    %esi
08101928 +0x094a:  pop    %ebp
08101929 +0x094b:  ret
0810192a +0x094c:  push   %ebp
0810192b +0x094d:  mov    %esp,%ebp
0810192d +0x094f:  sub    $0x18,%esp
08101930 +0x0952:  mov    0x8(%ebp),%eax
08101933 +0x0955:  mov    %eax,(%esp)
08101936 +0x0958:  call   08102136 <+0x1158>
0810193b +0x095d:  leave
0810193c +0x095e:  ret
0810193d +0x095f:  nop
0810193e +0x0960:  push   %ebp
0810193f +0x0961:  mov    %esp,%ebp
08101941 +0x0963:  sub    $0x18,%esp
08101944 +0x0966:  mov    0x8(%ebp),%eax
08101947 +0x0969:  mov    %eax,(%esp)
0810194a +0x096c:  call   0810214a <+0x116c>
0810194f +0x0971:  leave
08101950 +0x0972:  ret
08101951 +0x0973:  nop
08101952 +0x0974:  push   %ebp
08101953 +0x0975:  mov    %esp,%ebp
08101955 +0x0977:  push   %esi
08101956 +0x0978:  push   %ebx
08101957 +0x0979:  sub    $0x10,%esp
0810195a +0x097c:  mov    0x8(%ebp),%eax
0810195d +0x097f:  mov    %eax,(%esp)
08101960 +0x0982:  call   081021b4 <+0x11d6>
08101965 +0x0987:  mov    %eax,0x4(%esp)
08101969 +0x098b:  mov    0x8(%ebp),%eax
0810196c +0x098e:  mov    %eax,(%esp)
0810196f +0x0991:  call   0810215e <+0x1180>
08101974 +0x0996:  jmp    08101991 <+0x9b3>
08101976 +0x0998:  mov    %edx,%ebx
08101978 +0x099a:  mov    %eax,%esi
0810197a +0x099c:  mov    0x8(%ebp),%eax
0810197d +0x099f:  mov    %eax,(%esp)
08101980 +0x09a2:  call   0810193e <+0x960>
08101985 +0x09a7:  mov    %esi,%eax
08101987 +0x09a9:  mov    %ebx,%edx
08101989 +0x09ab:  mov    %eax,(%esp)
0810198c +0x09ae:  call   08ae3750 <_Unwind_Resume>
08101991 +0x09b3:  mov    0x8(%ebp),%eax
08101994 +0x09b6:  mov    %eax,(%esp)
08101997 +0x09b9:  call   0810193e <+0x960>
0810199c +0x09be:  add    $0x10,%esp
0810199f +0x09c1:  pop    %ebx
081019a0 +0x09c2:  pop    %esi
081019a1 +0x09c3:  pop    %ebp
081019a2 +0x09c4:  ret
081019a3 +0x09c5:  nop
081019a4 +0x09c6:  push   %ebp
081019a5 +0x09c7:  mov    %esp,%ebp
081019a7 +0x09c9:  sub    $0x18,%esp
081019aa +0x09cc:  mov    0x8(%ebp),%eax
081019ad +0x09cf:  mov    %eax,(%esp)
081019b0 +0x09d2:  call   081020da <+0x10fc>
081019b5 +0x09d7:  mov    0x8(%ebp),%eax
081019b8 +0x09da:  mov    %eax,(%esp)
081019bb +0x09dd:  call   081021c0 <+0x11e2>
081019c0 +0x09e2:  leave
081019c1 +0x09e3:  ret
081019c2 +0x09e4:  push   %ebp
081019c3 +0x09e5:  mov    %esp,%ebp
081019c5 +0x09e7:  push   %edi
081019c6 +0x09e8:  push   %esi
081019c7 +0x09e9:  push   %ebx
081019c8 +0x09ea:  sub    $0x3c,%esp
081019cb +0x09ed:  mov    0xc(%ebp),%esi
081019ce +0x09f0:  imul   $0x2e4,%esi,%eax
081019d4 +0x09f6:  mov    %eax,(%esp)
081019d7 +0x09f9:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
081019dc +0x09fe:  mov    %eax,%edi
081019de +0x0a00:  mov    %edi,%eax
081019e0 +0x0a02:  mov    %eax,%ebx
081019e2 +0x0a04:  lea    -0x1(%esi),%eax
081019e5 +0x0a07:  mov    %eax,%esi
081019e7 +0x0a09:  jmp    081019fa <+0xa1c>
081019e9 +0x0a0b:  mov    %ebx,(%esp)
081019ec +0x0a0e:  call   081021d6 <+0x11f8>
081019f1 +0x0a13:  add    $0x2e4,%ebx
081019f7 +0x0a19:  sub    $0x1,%esi
081019fa +0x0a1c:  cmp    $0xffffffff,%esi
081019fd +0x0a1f:  setne  %al
08101a00 +0x0a22:  test   %al,%al
08101a02 +0x0a24:  jne    081019e9 <+0xa0b>
08101a04 +0x0a26:  mov    %edi,%eax
08101a06 +0x0a28:  mov    %eax,-0x38(%ebp)
08101a09 +0x0a2b:  mov    -0x38(%ebp),%eax
08101a0c +0x0a2e:  test   %eax,%eax
08101a0e +0x0a30:  jne    08101a60 <+0xa82>
08101a10 +0x0a32:  movl   $0x5,0xc(%esp)
08101a18 +0x0a3a:  movl   $0x2a6,0x8(%esp)
08101a20 +0x0a42:  movl   $&_ZZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE9MoreAllocEiE12__FUNCTION__,0x4(%esp)
08101a28 +0x0a4a:  lea    -0x34(%ebp),%eax
08101a2b +0x0a4d:  mov    %eax,(%esp)
08101a2e +0x0a50:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08101a33 +0x0a55:  movl   $0x2a6,0xc(%esp)
08101a3b +0x0a5d:  movl   $&_ZZN11DynamicPoolIN8WongWork3IPG8SIPGDataEE9MoreAllocEiE12__FUNCTION__,0x8(%esp)
08101a43 +0x0a65:  movl   $"DYNAMIC MEMORY_POOL Acquire error [%s][%d]",0x4(%esp)
08101a4b +0x0a6d:  lea    -0x34(%ebp),%eax
08101a4e +0x0a70:  mov    %eax,(%esp)
08101a51 +0x0a73:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08101a56 +0x0a78:  mov    $0x0,%eax
08101a5b +0x0a7d:  jmp    08101af9 <+0xb1b>
08101a60 +0x0a82:  mov    0x8(%ebp),%eax
08101a63 +0x0a85:  lea    0x30(%eax),%edx
08101a66 +0x0a88:  lea    -0x38(%ebp),%eax
08101a69 +0x0a8b:  mov    %eax,0x4(%esp)
08101a6d +0x0a8f:  mov    %edx,(%esp)
08101a70 +0x0a92:  call   0810220c <+0x122e>
08101a75 +0x0a97:  movl   $0x0,-0x1c(%ebp)
08101a7c +0x0a9e:  jmp    08101ad6 <+0xaf8>
08101a7e +0x0aa0:  mov    -0x38(%ebp),%edx
08101a81 +0x0aa3:  mov    -0x1c(%ebp),%eax
08101a84 +0x0aa6:  imul   $0x2e4,%eax,%eax
08101a8a +0x0aac:  lea    (%edx,%eax,1),%eax
08101a8d +0x0aaf:  mov    %eax,-0x24(%ebp)
08101a90 +0x0ab2:  mov    0x8(%ebp),%eax
08101a93 +0x0ab5:  lea    0x8(%eax),%edx
08101a96 +0x0ab8:  lea    -0x24(%ebp),%eax
08101a99 +0x0abb:  mov    %eax,0x4(%esp)
08101a9d +0x0abf:  mov    %edx,(%esp)
08101aa0 +0x0ac2:  call   08102242 <+0x1264>
08101aa5 +0x0ac7:  mov    -0x38(%ebp),%edx
08101aa8 +0x0aca:  mov    -0x1c(%ebp),%eax
08101aab +0x0acd:  imul   $0x2e4,%eax,%eax
08101ab1 +0x0ad3:  lea    (%edx,%eax,1),%eax
08101ab4 +0x0ad6:  mov    %eax,-0x20(%ebp)
08101ab7 +0x0ad9:  mov    0x8(%ebp),%eax
08101aba +0x0adc:  lea    0x44(%eax),%edx
08101abd +0x0adf:  lea    -0x20(%ebp),%eax
08101ac0 +0x0ae2:  mov    %eax,0x4(%esp)
08101ac4 +0x0ae6:  mov    %edx,(%esp)
08101ac7 +0x0ae9:  call   0810226c <+0x128e>
08101acc +0x0aee:  movl   $0x1,(%eax)
08101ad2 +0x0af4:  addl   $0x1,-0x1c(%ebp)
08101ad6 +0x0af8:  mov    -0x1c(%ebp),%eax
08101ad9 +0x0afb:  cmp    0xc(%ebp),%eax
08101adc +0x0afe:  setl   %al
08101adf +0x0b01:  test   %al,%al
08101ae1 +0x0b03:  jne    08101a7e <+0xaa0>
08101ae3 +0x0b05:  mov    0x8(%ebp),%eax
08101ae6 +0x0b08:  mov    0x38(%eax),%eax
08101ae9 +0x0b0b:  mov    %eax,%edx
08101aeb +0x0b0d:  add    0xc(%ebp),%edx
08101aee +0x0b10:  mov    0x8(%ebp),%eax
08101af1 +0x0b13:  mov    %edx,0x38(%eax)
08101af4 +0x0b16:  mov    $0x1,%eax
08101af9 +0x0b1b:  add    $0x3c,%esp
08101afc +0x0b1e:  pop    %ebx
08101afd +0x0b1f:  pop    %esi
08101afe +0x0b20:  pop    %edi
08101aff +0x0b21:  pop    %ebp
08101b00 +0x0b22:  ret
08101b01 +0x0b23:  nop
08101b02 +0x0b24:  push   %ebp
08101b03 +0x0b25:  mov    %esp,%ebp
08101b05 +0x0b27:  push   %ebx
08101b06 +0x0b28:  sub    $0x14,%esp
08101b09 +0x0b2b:  mov    0x8(%ebp),%ebx
08101b0c +0x0b2e:  mov    0xc(%ebp),%eax
08101b0f +0x0b31:  mov    (%eax),%eax
08101b11 +0x0b33:  mov    %eax,0x4(%esp)
08101b15 +0x0b37:  mov    %ebx,(%esp)
08101b18 +0x0b3a:  call   08102362 <+0x1384>
08101b1d +0x0b3f:  mov    %ebx,%eax
08101b1f +0x0b41:  add    $0x14,%esp
08101b22 +0x0b44:  pop    %ebx
08101b23 +0x0b45:  pop    %ebp
08101b24 +0x0b46:  ret    $0x4
08101b27 +0x0b49:  nop
08101b28 +0x0b4a:  push   %ebp
08101b29 +0x0b4b:  mov    %esp,%ebp
08101b2b +0x0b4d:  push   %ebx
08101b2c +0x0b4e:  sub    $0x14,%esp
08101b2f +0x0b51:  mov    0x8(%ebp),%ebx
08101b32 +0x0b54:  mov    0xc(%ebp),%eax
08101b35 +0x0b57:  mov    %eax,0x4(%esp)
08101b39 +0x0b5b:  mov    %ebx,(%esp)
08101b3c +0x0b5e:  call   08102362 <+0x1384>
08101b41 +0x0b63:  mov    %ebx,%eax
08101b43 +0x0b65:  add    $0x14,%esp
08101b46 +0x0b68:  pop    %ebx
08101b47 +0x0b69:  pop    %ebp
08101b48 +0x0b6a:  ret    $0x4
08101b4b +0x0b6d:  nop
08101b4c +0x0b6e:  push   %ebp
08101b4d +0x0b6f:  mov    %esp,%ebp
08101b4f +0x0b71:  mov    0x8(%ebp),%eax
08101b52 +0x0b74:  mov    (%eax),%edx
08101b54 +0x0b76:  mov    0xc(%ebp),%eax
08101b57 +0x0b79:  mov    (%eax),%eax
08101b59 +0x0b7b:  cmp    %eax,%edx
08101b5b +0x0b7d:  setne  %al
08101b5e +0x0b80:  pop    %ebp
08101b5f +0x0b81:  ret
08101b60 +0x0b82:  push   %ebp
08101b61 +0x0b83:  mov    %esp,%ebp
08101b63 +0x0b85:  mov    0x8(%ebp),%eax
08101b66 +0x0b88:  mov    (%eax),%eax
08101b68 +0x0b8a:  mov    (%eax),%edx
08101b6a +0x0b8c:  mov    0x8(%ebp),%eax
08101b6d +0x0b8f:  mov    %edx,(%eax)
08101b6f +0x0b91:  mov    0x8(%ebp),%eax
08101b72 +0x0b94:  pop    %ebp
08101b73 +0x0b95:  ret
08101b74 +0x0b96:  push   %ebp
08101b75 +0x0b97:  mov    %esp,%ebp
08101b77 +0x0b99:  mov    0x8(%ebp),%eax
08101b7a +0x0b9c:  mov    (%eax),%eax
08101b7c +0x0b9e:  add    $0x8,%eax
08101b7f +0x0ba1:  pop    %ebp
08101b80 +0x0ba2:  ret
08101b81 +0x0ba3:  nop
08101b82 +0x0ba4:  push   %ebp
08101b83 +0x0ba5:  mov    %esp,%ebp
08101b85 +0x0ba7:  sub    $0x18,%esp
08101b88 +0x0baa:  mov    0x8(%ebp),%eax
08101b8b +0x0bad:  lea    0x8(%eax),%edx
08101b8e +0x0bb0:  mov    0x8(%ebp),%eax
08101b91 +0x0bb3:  add    $0x18,%eax
08101b94 +0x0bb6:  mov    %edx,0x4(%esp)
08101b98 +0x0bba:  mov    %eax,(%esp)
08101b9b +0x0bbd:  call   0810236f <+0x1391>
08101ba0 +0x0bc2:  leave
08101ba1 +0x0bc3:  ret
08101ba2 +0x0bc4:  push   %ebp
08101ba3 +0x0bc5:  mov    %esp,%ebp
08101ba5 +0x0bc7:  push   %ebx
08101ba6 +0x0bc8:  sub    $0x4,%esp
08101ba9 +0x0bcb:  call   081023d2 <+0x13f4>
08101bae +0x0bd0:  mov    %eax,%edx
08101bb0 +0x0bd2:  mov    0x8(%ebp),%eax
08101bb3 +0x0bd5:  mov    0xc(%eax),%eax
08101bb6 +0x0bd8:  mov    %eax,%ecx
08101bb8 +0x0bda:  mov    0xc(%ebp),%eax
08101bbb +0x0bdd:  mov    0xc(%eax),%eax
08101bbe +0x0be0:  mov    %ecx,%ebx
08101bc0 +0x0be2:  sub    %eax,%ebx
08101bc2 +0x0be4:  mov    %ebx,%eax
08101bc4 +0x0be6:  sar    $0x2,%eax
08101bc7 +0x0be9:  sub    $0x1,%eax
08101bca +0x0bec:  imul   %eax,%edx
08101bcd +0x0bef:  mov    0x8(%ebp),%eax
08101bd0 +0x0bf2:  mov    (%eax),%eax
08101bd2 +0x0bf4:  mov    %eax,%ecx
08101bd4 +0x0bf6:  mov    0x8(%ebp),%eax
08101bd7 +0x0bf9:  mov    0x4(%eax),%eax
08101bda +0x0bfc:  mov    %ecx,%ebx
08101bdc +0x0bfe:  sub    %eax,%ebx
08101bde +0x0c00:  mov    %ebx,%eax
08101be0 +0x0c02:  sar    $0x2,%eax
08101be3 +0x0c05:  lea    (%edx,%eax,1),%ecx
08101be6 +0x0c08:  mov    0xc(%ebp),%eax
08101be9 +0x0c0b:  mov    0x8(%eax),%eax
08101bec +0x0c0e:  mov    %eax,%edx
08101bee +0x0c10:  mov    0xc(%ebp),%eax
08101bf1 +0x0c13:  mov    (%eax),%eax
08101bf3 +0x0c15:  mov    %edx,%ebx
08101bf5 +0x0c17:  sub    %eax,%ebx
08101bf7 +0x0c19:  mov    %ebx,%eax
08101bf9 +0x0c1b:  sar    $0x2,%eax
08101bfc +0x0c1e:  lea    (%ecx,%eax,1),%eax
08101bff +0x0c21:  add    $0x4,%esp
08101c02 +0x0c24:  pop    %ebx
08101c03 +0x0c25:  pop    %ebp
08101c04 +0x0c26:  ret
08101c05 +0x0c27:  nop
08101c06 +0x0c28:  push   %ebp
08101c07 +0x0c29:  mov    %esp,%ebp
08101c09 +0x0c2b:  sub    $0x18,%esp
08101c0c +0x0c2e:  mov    0x8(%ebp),%eax
08101c0f +0x0c31:  mov    %eax,(%esp)
08101c12 +0x0c34:  call   081023e6 <+0x1408>
08101c17 +0x0c39:  mov    0x8(%ebp),%eax
08101c1a +0x0c3c:  movl   $0x0,(%eax)
08101c20 +0x0c42:  mov    0x8(%ebp),%eax
08101c23 +0x0c45:  movl   $0x0,0x4(%eax)
08101c2a +0x0c4c:  mov    0x8(%ebp),%eax
08101c2d +0x0c4f:  add    $0x8,%eax
08101c30 +0x0c52:  mov    %eax,(%esp)
08101c33 +0x0c55:  call   081023fa <+0x141c>
08101c38 +0x0c5a:  mov    0x8(%ebp),%eax
08101c3b +0x0c5d:  add    $0x18,%eax
08101c3e +0x0c60:  mov    %eax,(%esp)
08101c41 +0x0c63:  call   081023fa <+0x141c>
08101c46 +0x0c68:  leave
08101c47 +0x0c69:  ret
08101c48 +0x0c6a:  push   %ebp
08101c49 +0x0c6b:  mov    %esp,%ebp
08101c4b +0x0c6d:  sub    $0x18,%esp
08101c4e +0x0c70:  mov    0x8(%ebp),%eax
08101c51 +0x0c73:  mov    %eax,(%esp)
08101c54 +0x0c76:  call   08102426 <+0x1448>
08101c59 +0x0c7b:  leave
08101c5a +0x0c7c:  ret
08101c5b +0x0c7d:  nop
08101c5c +0x0c7e:  push   %ebp
08101c5d +0x0c7f:  mov    %esp,%ebp
08101c5f +0x0c81:  push   %esi
08101c60 +0x0c82:  push   %ebx
08101c61 +0x0c83:  sub    $0x40,%esp
08101c64 +0x0c86:  movl   $0x4,(%esp)
08101c6b +0x0c8d:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08101c70 +0x0c92:  mov    %eax,-0x2c(%ebp)
08101c73 +0x0c95:  mov    0xc(%ebp),%eax
08101c76 +0x0c98:  mov    $0x0,%edx
08101c7b +0x0c9d:  divl   -0x2c(%ebp)
08101c7e +0x0ca0:  add    $0x1,%eax
08101c81 +0x0ca3:  mov    %eax,-0x14(%ebp)
08101c84 +0x0ca6:  mov    -0x14(%ebp),%eax
08101c87 +0x0ca9:  add    $0x2,%eax
08101c8a +0x0cac:  mov    %eax,-0x1c(%ebp)
08101c8d +0x0caf:  movl   $0x8,-0x18(%ebp)
08101c94 +0x0cb6:  lea    -0x1c(%ebp),%eax
08101c97 +0x0cb9:  mov    %eax,0x4(%esp)
08101c9b +0x0cbd:  lea    -0x18(%ebp),%eax
08101c9e +0x0cc0:  mov    %eax,(%esp)
08101ca1 +0x0cc3:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08101ca6 +0x0cc8:  mov    (%eax),%edx
08101ca8 +0x0cca:  mov    0x8(%ebp),%eax
08101cab +0x0ccd:  mov    %edx,0x4(%eax)
08101cae +0x0cd0:  mov    0x8(%ebp),%eax
08101cb1 +0x0cd3:  mov    0x4(%eax),%eax
08101cb4 +0x0cd6:  mov    %eax,0x4(%esp)
08101cb8 +0x0cda:  mov    0x8(%ebp),%eax
08101cbb +0x0cdd:  mov    %eax,(%esp)
08101cbe +0x0ce0:  call   0810242c <+0x144e>
08101cc3 +0x0ce5:  mov    0x8(%ebp),%edx
08101cc6 +0x0ce8:  mov    %eax,(%edx)
08101cc8 +0x0cea:  mov    0x8(%ebp),%eax
08101ccb +0x0ced:  mov    (%eax),%edx
08101ccd +0x0cef:  mov    0x8(%ebp),%eax
08101cd0 +0x0cf2:  mov    0x4(%eax),%eax
08101cd3 +0x0cf5:  sub    -0x14(%ebp),%eax
08101cd6 +0x0cf8:  shr    %eax
08101cd8 +0x0cfa:  shl    $0x2,%eax
08101cdb +0x0cfd:  lea    (%edx,%eax,1),%eax
08101cde +0x0d00:  mov    %eax,-0x10(%ebp)
08101ce1 +0x0d03:  mov    -0x14(%ebp),%eax
08101ce4 +0x0d06:  shl    $0x2,%eax
08101ce7 +0x0d09:  add    -0x10(%ebp),%eax
08101cea +0x0d0c:  mov    %eax,-0xc(%ebp)
08101ced +0x0d0f:  mov    -0xc(%ebp),%eax
08101cf0 +0x0d12:  mov    %eax,0x8(%esp)
08101cf4 +0x0d16:  mov    -0x10(%ebp),%eax
08101cf7 +0x0d19:  mov    %eax,0x4(%esp)
08101cfb +0x0d1d:  mov    0x8(%ebp),%eax
08101cfe +0x0d20:  mov    %eax,(%esp)
08101d01 +0x0d23:  call   08102498 <+0x14ba>
08101d06 +0x0d28:  jmp    08101d5b <+0xd7d>
08101d08 +0x0d2a:  mov    %eax,(%esp)
08101d0b +0x0d2d:  call   08725ce0 <__cxa_begin_catch>
08101d10 +0x0d32:  mov    0x8(%ebp),%eax
08101d13 +0x0d35:  mov    0x4(%eax),%edx
08101d16 +0x0d38:  mov    0x8(%ebp),%eax
08101d19 +0x0d3b:  mov    (%eax),%eax
08101d1b +0x0d3d:  mov    %edx,0x8(%esp)
08101d1f +0x0d41:  mov    %eax,0x4(%esp)
08101d23 +0x0d45:  mov    0x8(%ebp),%eax
08101d26 +0x0d48:  mov    %eax,(%esp)
08101d29 +0x0d4b:  call   08101e02 <+0xe24>
08101d2e +0x0d50:  mov    0x8(%ebp),%eax
08101d31 +0x0d53:  movl   $0x0,(%eax)
08101d37 +0x0d59:  mov    0x8(%ebp),%eax
08101d3a +0x0d5c:  movl   $0x0,0x4(%eax)
08101d41 +0x0d63:  call   08724be0 <__cxa_rethrow>
08101d46 +0x0d68:  mov    %edx,%ebx
08101d48 +0x0d6a:  mov    %eax,%esi
08101d4a +0x0d6c:  call   08725c30 <__cxa_end_catch>
08101d4f +0x0d71:  mov    %esi,%eax
08101d51 +0x0d73:  mov    %ebx,%edx
08101d53 +0x0d75:  mov    %eax,(%esp)
08101d56 +0x0d78:  call   08ae3750 <_Unwind_Resume>
08101d5b +0x0d7d:  mov    0x8(%ebp),%eax
08101d5e +0x0d80:  lea    0x8(%eax),%edx
08101d61 +0x0d83:  mov    -0x10(%ebp),%eax
08101d64 +0x0d86:  mov    %eax,0x4(%esp)
08101d68 +0x0d8a:  mov    %edx,(%esp)
08101d6b +0x0d8d:  call   0810250e <+0x1530>
08101d70 +0x0d92:  mov    -0xc(%ebp),%eax
08101d73 +0x0d95:  lea    -0x4(%eax),%edx
08101d76 +0x0d98:  mov    0x8(%ebp),%eax
08101d79 +0x0d9b:  add    $0x18,%eax
08101d7c +0x0d9e:  mov    %edx,0x4(%esp)
08101d80 +0x0da2:  mov    %eax,(%esp)
08101d83 +0x0da5:  call   0810250e <+0x1530>
08101d88 +0x0daa:  mov    0x8(%ebp),%eax
08101d8b +0x0dad:  mov    0xc(%eax),%edx
08101d8e +0x0db0:  mov    0x8(%ebp),%eax
08101d91 +0x0db3:  mov    %edx,0x8(%eax)
08101d94 +0x0db6:  mov    0x8(%ebp),%eax
08101d97 +0x0db9:  mov    0x1c(%eax),%ebx
08101d9a +0x0dbc:  movl   $0x4,(%esp)
08101da1 +0x0dc3:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08101da6 +0x0dc8:  mov    %eax,-0x2c(%ebp)
08101da9 +0x0dcb:  mov    0xc(%ebp),%eax
08101dac +0x0dce:  mov    $0x0,%edx
08101db1 +0x0dd3:  divl   -0x2c(%ebp)
08101db4 +0x0dd6:  mov    %edx,%ecx
08101db6 +0x0dd8:  mov    %ecx,%eax
08101db8 +0x0dda:  shl    $0x2,%eax
08101dbb +0x0ddd:  lea    (%ebx,%eax,1),%edx
08101dbe +0x0de0:  mov    0x8(%ebp),%eax
08101dc1 +0x0de3:  mov    %edx,0x18(%eax)
08101dc4 +0x0de6:  add    $0x40,%esp
08101dc7 +0x0de9:  pop    %ebx
08101dc8 +0x0dea:  pop    %esi
08101dc9 +0x0deb:  pop    %ebp
08101dca +0x0dec:  ret
08101dcb +0x0ded:  nop
08101dcc +0x0dee:  push   %ebp
08101dcd +0x0def:  mov    %esp,%ebp
08101dcf +0x0df1:  sub    $0x28,%esp
08101dd2 +0x0df4:  mov    0xc(%ebp),%eax
08101dd5 +0x0df7:  mov    %eax,-0xc(%ebp)
08101dd8 +0x0dfa:  jmp    08101df2 <+0xe14>
08101dda +0x0dfc:  mov    -0xc(%ebp),%eax
08101ddd +0x0dff:  mov    (%eax),%eax
08101ddf +0x0e01:  mov    %eax,0x4(%esp)
08101de3 +0x0e05:  mov    0x8(%ebp),%eax
08101de6 +0x0e08:  mov    %eax,(%esp)
08101de9 +0x0e0b:  call   08102546 <+0x1568>
08101dee +0x0e10:  addl   $0x4,-0xc(%ebp)
08101df2 +0x0e14:  mov    -0xc(%ebp),%eax
08101df5 +0x0e17:  cmp    0x10(%ebp),%eax
08101df8 +0x0e1a:  setb   %al
08101dfb +0x0e1d:  test   %al,%al
08101dfd +0x0e1f:  jne    08101dda <+0xdfc>
08101dff +0x0e21:  leave
08101e00 +0x0e22:  ret
08101e01 +0x0e23:  nop
08101e02 +0x0e24:  push   %ebp
08101e03 +0x0e25:  mov    %esp,%ebp
08101e05 +0x0e27:  sub    $0x28,%esp
08101e08 +0x0e2a:  lea    -0x9(%ebp),%eax
08101e0b +0x0e2d:  mov    0x8(%ebp),%edx
08101e0e +0x0e30:  mov    %edx,0x4(%esp)
08101e12 +0x0e34:  mov    %eax,(%esp)
08101e15 +0x0e37:  call   08102570 <+0x1592>
08101e1a +0x0e3c:  sub    $0x4,%esp
08101e1d +0x0e3f:  lea    -0x9(%ebp),%eax
08101e20 +0x0e42:  mov    0x10(%ebp),%edx
08101e23 +0x0e45:  mov    %edx,0x8(%esp)
08101e27 +0x0e49:  mov    0xc(%ebp),%edx
08101e2a +0x0e4c:  mov    %edx,0x4(%esp)
08101e2e +0x0e50:  mov    %eax,(%esp)
08101e31 +0x0e53:  call   081025b6 <+0x15d8>
08101e36 +0x0e58:  lea    -0x9(%ebp),%eax
08101e39 +0x0e5b:  mov    %eax,(%esp)
08101e3c +0x0e5e:  call   081025a2 <+0x15c4>
08101e41 +0x0e63:  leave
08101e42 +0x0e64:  ret
08101e43 +0x0e65:  push   %ebp
08101e44 +0x0e66:  mov    %esp,%ebp
08101e46 +0x0e68:  mov    0x8(%ebp),%eax
08101e49 +0x0e6b:  pop    %ebp
08101e4a +0x0e6c:  ret
08101e4b +0x0e6d:  nop
08101e4c +0x0e6e:  push   %ebp
08101e4d +0x0e6f:  mov    %esp,%ebp
08101e4f +0x0e71:  push   %esi
08101e50 +0x0e72:  push   %ebx
08101e51 +0x0e73:  sub    $0x10,%esp
08101e54 +0x0e76:  mov    0xc(%ebp),%eax
08101e57 +0x0e79:  mov    %eax,(%esp)
08101e5a +0x0e7c:  call   0810178e <+0x7b0>
08101e5f +0x0e81:  mov    0x8(%ebp),%edx
08101e62 +0x0e84:  mov    %eax,0x4(%esp)
08101e66 +0x0e88:  mov    %edx,(%esp)
08101e69 +0x0e8b:  call   081025ca <+0x15ec>
08101e6e +0x0e90:  movl   $0x0,0x4(%esp)
08101e76 +0x0e98:  mov    0x8(%ebp),%eax
08101e79 +0x0e9b:  mov    %eax,(%esp)
08101e7c +0x0e9e:  call   08101c5c <+0xc7e>
08101e81 +0x0ea3:  mov    0xc(%ebp),%eax
08101e84 +0x0ea6:  mov    (%eax),%eax
08101e86 +0x0ea8:  test   %eax,%eax
08101e88 +0x0eaa:  je     08101f01 <+0xf23>
08101e8a +0x0eac:  mov    0xc(%ebp),%eax
08101e8d +0x0eaf:  lea    0x8(%eax),%edx
08101e90 +0x0eb2:  mov    0x8(%ebp),%eax
08101e93 +0x0eb5:  add    $0x8,%eax
08101e96 +0x0eb8:  mov    %edx,0x4(%esp)
08101e9a +0x0ebc:  mov    %eax,(%esp)
08101e9d +0x0ebf:  call   08102613 <+0x1635>
08101ea2 +0x0ec4:  mov    0xc(%ebp),%eax
08101ea5 +0x0ec7:  lea    0x18(%eax),%edx
08101ea8 +0x0eca:  mov    0x8(%ebp),%eax
08101eab +0x0ecd:  add    $0x18,%eax
08101eae +0x0ed0:  mov    %edx,0x4(%esp)
08101eb2 +0x0ed4:  mov    %eax,(%esp)
08101eb5 +0x0ed7:  call   08102613 <+0x1635>
08101eba +0x0edc:  mov    0xc(%ebp),%edx
08101ebd +0x0edf:  mov    0x8(%ebp),%eax
08101ec0 +0x0ee2:  mov    %edx,0x4(%esp)
08101ec4 +0x0ee6:  mov    %eax,(%esp)
08101ec7 +0x0ee9:  call   0810267d <+0x169f>
08101ecc +0x0eee:  mov    0xc(%ebp),%eax
08101ecf +0x0ef1:  lea    0x4(%eax),%edx
08101ed2 +0x0ef4:  mov    0x8(%ebp),%eax
08101ed5 +0x0ef7:  add    $0x4,%eax
08101ed8 +0x0efa:  mov    %edx,0x4(%esp)
08101edc +0x0efe:  mov    %eax,(%esp)
08101edf +0x0f01:  call   081026b9 <+0x16db>
08101ee4 +0x0f06:  jmp    08101f01 <+0xf23>
08101ee6 +0x0f08:  mov    %edx,%ebx
08101ee8 +0x0f0a:  mov    %eax,%esi
08101eea +0x0f0c:  mov    0x8(%ebp),%eax
08101eed +0x0f0f:  mov    %eax,(%esp)
08101ef0 +0x0f12:  call   0810165c <+0x67e>
08101ef5 +0x0f17:  mov    %esi,%eax
08101ef7 +0x0f19:  mov    %ebx,%edx
08101ef9 +0x0f1b:  mov    %eax,(%esp)
08101efc +0x0f1e:  call   08ae3750 <_Unwind_Resume>
08101f01 +0x0f23:  add    $0x10,%esp
08101f04 +0x0f26:  pop    %ebx
08101f05 +0x0f27:  pop    %esi
08101f06 +0x0f28:  pop    %ebp
08101f07 +0x0f29:  ret
08101f08 +0x0f2a:  push   %ebp
08101f09 +0x0f2b:  mov    %esp,%ebp
08101f0b +0x0f2d:  sub    $0x18,%esp
08101f0e +0x0f30:  mov    0x8(%ebp),%eax
08101f11 +0x0f33:  mov    %eax,(%esp)
08101f14 +0x0f36:  call   08102738 <+0x175a>
08101f19 +0x0f3b:  leave
08101f1a +0x0f3c:  ret
08101f1b +0x0f3d:  nop
08101f1c +0x0f3e:  push   %ebp
08101f1d +0x0f3f:  mov    %esp,%ebp
08101f1f +0x0f41:  push   %esi
08101f20 +0x0f42:  push   %ebx
08101f21 +0x0f43:  sub    $0x10,%esp
08101f24 +0x0f46:  mov    0x8(%ebp),%eax
08101f27 +0x0f49:  mov    %eax,(%esp)
08101f2a +0x0f4c:  call   081026f6 <+0x1718>
08101f2f +0x0f51:  movl   $0x0,0x4(%esp)
08101f37 +0x0f59:  mov    0x8(%ebp),%eax
08101f3a +0x0f5c:  mov    %eax,(%esp)
08101f3d +0x0f5f:  call   0810274c <+0x176e>
08101f42 +0x0f64:  jmp    08101f5f <+0xf81>
08101f44 +0x0f66:  mov    %edx,%ebx
08101f46 +0x0f68:  mov    %eax,%esi
08101f48 +0x0f6a:  mov    0x8(%ebp),%eax
08101f4b +0x0f6d:  mov    %eax,(%esp)
08101f4e +0x0f70:  call   08101f08 <+0xf2a>
08101f53 +0x0f75:  mov    %esi,%eax
08101f55 +0x0f77:  mov    %ebx,%edx
08101f57 +0x0f79:  mov    %eax,(%esp)
08101f5a +0x0f7c:  call   08ae3750 <_Unwind_Resume>
08101f5f +0x0f81:  add    $0x10,%esp
08101f62 +0x0f84:  pop    %ebx
08101f63 +0x0f85:  pop    %esi
08101f64 +0x0f86:  pop    %ebp
08101f65 +0x0f87:  ret
08101f66 +0x0f88:  push   %ebp
08101f67 +0x0f89:  mov    %esp,%ebp
08101f69 +0x0f8b:  push   %esi
08101f6a +0x0f8c:  push   %ebx
08101f6b +0x0f8d:  sub    $0x10,%esp
08101f6e +0x0f90:  mov    0x8(%ebp),%eax
08101f71 +0x0f93:  mov    (%eax),%eax
08101f73 +0x0f95:  test   %eax,%eax
08101f75 +0x0f97:  je     08101fd4 <+0xff6>
08101f77 +0x0f99:  mov    0x8(%ebp),%eax
08101f7a +0x0f9c:  mov    0x24(%eax),%eax
08101f7d +0x0f9f:  lea    0x4(%eax),%edx
08101f80 +0x0fa2:  mov    0x8(%ebp),%eax
08101f83 +0x0fa5:  mov    0x14(%eax),%eax
08101f86 +0x0fa8:  mov    %edx,0x8(%esp)
08101f8a +0x0fac:  mov    %eax,0x4(%esp)
08101f8e +0x0fb0:  mov    0x8(%ebp),%eax
08101f91 +0x0fb3:  mov    %eax,(%esp)
08101f94 +0x0fb6:  call   081028bc <+0x18de>
08101f99 +0x0fbb:  mov    0x8(%ebp),%eax
08101f9c +0x0fbe:  mov    0x4(%eax),%edx
08101f9f +0x0fc1:  mov    0x8(%ebp),%eax
08101fa2 +0x0fc4:  mov    (%eax),%eax
08101fa4 +0x0fc6:  mov    %edx,0x8(%esp)
08101fa8 +0x0fca:  mov    %eax,0x4(%esp)
08101fac +0x0fce:  mov    0x8(%ebp),%eax
08101faf +0x0fd1:  mov    %eax,(%esp)
08101fb2 +0x0fd4:  call   081028f2 <+0x1914>
08101fb7 +0x0fd9:  jmp    08101fd4 <+0xff6>
08101fb9 +0x0fdb:  mov    %edx,%ebx
08101fbb +0x0fdd:  mov    %eax,%esi
08101fbd +0x0fdf:  mov    0x8(%ebp),%eax
08101fc0 +0x0fe2:  mov    %eax,(%esp)
08101fc3 +0x0fe5:  call   08101f08 <+0xf2a>
08101fc8 +0x0fea:  mov    %esi,%eax
08101fca +0x0fec:  mov    %ebx,%edx
08101fcc +0x0fee:  mov    %eax,(%esp)
08101fcf +0x0ff1:  call   08ae3750 <_Unwind_Resume>
08101fd4 +0x0ff6:  mov    0x8(%ebp),%eax
08101fd7 +0x0ff9:  mov    %eax,(%esp)
08101fda +0x0ffc:  call   08101f08 <+0xf2a>
08101fdf +0x1001:  add    $0x10,%esp
08101fe2 +0x1004:  pop    %ebx
08101fe3 +0x1005:  pop    %esi
08101fe4 +0x1006:  pop    %ebp
08101fe5 +0x1007:  ret
08101fe6 +0x1008:  push   %ebp
08101fe7 +0x1009:  mov    %esp,%ebp
08101fe9 +0x100b:  push   %ebx
08101fea +0x100c:  sub    $0x14,%esp
08101fed +0x100f:  mov    0x8(%ebp),%ebx
08101ff0 +0x1012:  mov    %ebx,%eax
08101ff2 +0x1014:  mov    0xc(%ebp),%edx
08101ff5 +0x1017:  add    $0x8,%edx
08101ff8 +0x101a:  mov    %edx,0x4(%esp)
08101ffc +0x101e:  mov    %eax,(%esp)
08101fff +0x1021:  call   08102042 <+0x1064>
08102004 +0x1026:  mov    %ebx,%eax
08102006 +0x1028:  mov    %ebx,%eax
08102008 +0x102a:  add    $0x14,%esp
0810200b +0x102d:  pop    %ebx
0810200c +0x102e:  pop    %ebp
0810200d +0x102f:  ret    $0x4
08102010 +0x1032:  push   %ebp
08102011 +0x1033:  mov    %esp,%ebp
08102013 +0x1035:  push   %ebx
08102014 +0x1036:  sub    $0x14,%esp
08102017 +0x1039:  mov    0x8(%ebp),%ebx
0810201a +0x103c:  mov    %ebx,%eax
0810201c +0x103e:  mov    0xc(%ebp),%edx
0810201f +0x1041:  add    $0x18,%edx
08102022 +0x1044:  mov    %edx,0x4(%esp)
08102026 +0x1048:  mov    %eax,(%esp)
08102029 +0x104b:  call   08102042 <+0x1064>
0810202e +0x1050:  mov    %ebx,%eax
08102030 +0x1052:  mov    %ebx,%eax
08102032 +0x1054:  add    $0x14,%esp
08102035 +0x1057:  pop    %ebx
08102036 +0x1058:  pop    %ebp
08102037 +0x1059:  ret    $0x4
0810203a +0x105c:  push   %ebp
0810203b +0x105d:  mov    %esp,%ebp
0810203d +0x105f:  mov    0x8(%ebp),%eax
08102040 +0x1062:  pop    %ebp
08102041 +0x1063:  ret
08102042 +0x1064:  push   %ebp
08102043 +0x1065:  mov    %esp,%ebp
08102045 +0x1067:  mov    0xc(%ebp),%eax
08102048 +0x106a:  mov    (%eax),%edx
0810204a +0x106c:  mov    0x8(%ebp),%eax
0810204d +0x106f:  mov    %edx,(%eax)
0810204f +0x1071:  mov    0xc(%ebp),%eax
08102052 +0x1074:  mov    0x4(%eax),%edx
08102055 +0x1077:  mov    0x8(%ebp),%eax
08102058 +0x107a:  mov    %edx,0x4(%eax)
0810205b +0x107d:  mov    0xc(%ebp),%eax
0810205e +0x1080:  mov    0x8(%eax),%edx
08102061 +0x1083:  mov    0x8(%ebp),%eax
08102064 +0x1086:  mov    %edx,0x8(%eax)
08102067 +0x1089:  mov    0xc(%ebp),%eax
0810206a +0x108c:  mov    0xc(%eax),%edx
0810206d +0x108f:  mov    0x8(%ebp),%eax
08102070 +0x1092:  mov    %edx,0xc(%eax)
08102073 +0x1095:  pop    %ebp
08102074 +0x1096:  ret
08102075 +0x1097:  nop
08102076 +0x1098:  push   %ebp
08102077 +0x1099:  mov    %esp,%ebp
08102079 +0x109b:  sub    $0x20,%esp
0810207c +0x109e:  leave
0810207d +0x109f:  ret
0810207e +0x10a0:  push   %ebp
0810207f +0x10a1:  mov    %esp,%ebp
08102081 +0x10a3:  mov    0x8(%ebp),%eax
08102084 +0x10a6:  pop    %ebp
08102085 +0x10a7:  ret
08102086 +0x10a8:  push   %ebp
08102087 +0x10a9:  mov    %esp,%ebp
08102089 +0x10ab:  sub    $0x18,%esp
0810208c +0x10ae:  mov    0xc(%ebp),%eax
0810208f +0x10b1:  mov    %eax,(%esp)
08102092 +0x10b4:  call   08102933 <+0x1955>
08102097 +0x10b9:  mov    0x8(%ebp),%edx
0810209a +0x10bc:  mov    %eax,0x4(%esp)
0810209e +0x10c0:  mov    %edx,(%esp)
081020a1 +0x10c3:  call   0810293c <+0x195e>
081020a6 +0x10c8:  leave
081020a7 +0x10c9:  ret
081020a8 +0x10ca:  push   %ebp
081020a9 +0x10cb:  mov    %esp,%ebp
081020ab +0x10cd:  sub    $0x18,%esp
081020ae +0x10d0:  mov    0x8(%ebp),%eax
081020b1 +0x10d3:  mov    %eax,(%esp)
081020b4 +0x10d6:  call   081029f8 <+0x1a1a>
081020b9 +0x10db:  mov    0x8(%ebp),%eax
081020bc +0x10de:  mov    %eax,(%esp)
081020bf +0x10e1:  call   081021c0 <+0x11e2>
081020c4 +0x10e6:  leave
081020c5 +0x10e7:  ret
081020c6 +0x10e8:  push   %ebp
081020c7 +0x10e9:  mov    %esp,%ebp
081020c9 +0x10eb:  sub    $0x18,%esp
081020cc +0x10ee:  mov    0x8(%ebp),%eax
081020cf +0x10f1:  mov    %eax,(%esp)
081020d2 +0x10f4:  call   08102a1e <+0x1a40>
081020d7 +0x10f9:  leave
081020d8 +0x10fa:  ret
081020d9 +0x10fb:  nop
081020da +0x10fc:  push   %ebp
081020db +0x10fd:  mov    %esp,%ebp
081020dd +0x10ff:  sub    $0x28,%esp
081020e0 +0x1102:  mov    0x8(%ebp),%eax
081020e3 +0x1105:  mov    (%eax),%eax
081020e5 +0x1107:  mov    %eax,-0x10(%ebp)
081020e8 +0x110a:  jmp    08102124 <+0x1146>
081020ea +0x110c:  mov    -0x10(%ebp),%eax
081020ed +0x110f:  mov    %eax,-0xc(%ebp)
081020f0 +0x1112:  mov    -0x10(%ebp),%eax
081020f3 +0x1115:  mov    (%eax),%eax
081020f5 +0x1117:  mov    %eax,-0x10(%ebp)
081020f8 +0x111a:  mov    0x8(%ebp),%eax
081020fb +0x111d:  mov    %eax,(%esp)
081020fe +0x1120:  call   08102a24 <+0x1a46>
08102103 +0x1125:  mov    -0xc(%ebp),%edx
08102106 +0x1128:  mov    %edx,0x4(%esp)
0810210a +0x112c:  mov    %eax,(%esp)
0810210d +0x112f:  call   08102a32 <+0x1a54>
08102112 +0x1134:  mov    -0xc(%ebp),%eax
08102115 +0x1137:  mov    %eax,0x4(%esp)
08102119 +0x113b:  mov    0x8(%ebp),%eax
0810211c +0x113e:  mov    %eax,(%esp)
0810211f +0x1141:  call   08102a46 <+0x1a68>
08102124 +0x1146:  mov    0x8(%ebp),%edx
08102127 +0x1149:  mov    -0x10(%ebp),%eax
0810212a +0x114c:  cmp    %eax,%edx
0810212c +0x114e:  setne  %al
0810212f +0x1151:  test   %al,%al
08102131 +0x1153:  jne    081020ea <+0x110c>
08102133 +0x1155:  leave
08102134 +0x1156:  ret
08102135 +0x1157:  nop
08102136 +0x1158:  push   %ebp
08102137 +0x1159:  mov    %esp,%ebp
08102139 +0x115b:  sub    $0x18,%esp
0810213c +0x115e:  mov    0x8(%ebp),%eax
0810213f +0x1161:  mov    %eax,(%esp)
08102142 +0x1164:  call   08102a68 <+0x1a8a>
08102147 +0x1169:  leave
08102148 +0x116a:  ret
08102149 +0x116b:  nop
0810214a +0x116c:  push   %ebp
0810214b +0x116d:  mov    %esp,%ebp
0810214d +0x116f:  sub    $0x18,%esp
08102150 +0x1172:  mov    0x8(%ebp),%eax
08102153 +0x1175:  mov    %eax,(%esp)
08102156 +0x1178:  call   08102ab8 <+0x1ada>
0810215b +0x117d:  leave
0810215c +0x117e:  ret
0810215d +0x117f:  nop
0810215e +0x1180:  push   %ebp
0810215f +0x1181:  mov    %esp,%ebp
08102161 +0x1183:  sub    $0x28,%esp
08102164 +0x1186:  jmp    081021a6 <+0x11c8>
08102166 +0x1188:  mov    0xc(%ebp),%eax
08102169 +0x118b:  mov    %eax,(%esp)
0810216c +0x118e:  call   08102abd <+0x1adf>
08102171 +0x1193:  mov    %eax,0x4(%esp)
08102175 +0x1197:  mov    0x8(%ebp),%eax
08102178 +0x119a:  mov    %eax,(%esp)
0810217b +0x119d:  call   0810215e <+0x1180>
08102180 +0x11a2:  mov    0xc(%ebp),%eax
08102183 +0x11a5:  mov    %eax,(%esp)
08102186 +0x11a8:  call   08102ac8 <+0x1aea>
0810218b +0x11ad:  mov    %eax,-0xc(%ebp)
0810218e +0x11b0:  mov    0xc(%ebp),%eax
08102191 +0x11b3:  mov    %eax,0x4(%esp)
08102195 +0x11b7:  mov    0x8(%ebp),%eax
08102198 +0x11ba:  mov    %eax,(%esp)
0810219b +0x11bd:  call   08102ad4 <+0x1af6>
081021a0 +0x11c2:  mov    -0xc(%ebp),%eax
081021a3 +0x11c5:  mov    %eax,0xc(%ebp)
081021a6 +0x11c8:  cmpl   $0x0,0xc(%ebp)
081021aa +0x11cc:  setne  %al
081021ad +0x11cf:  test   %al,%al
081021af +0x11d1:  jne    08102166 <+0x1188>
081021b1 +0x11d3:  leave
081021b2 +0x11d4:  ret
081021b3 +0x11d5:  nop
081021b4 +0x11d6:  push   %ebp
081021b5 +0x11d7:  mov    %esp,%ebp
081021b7 +0x11d9:  mov    0x8(%ebp),%eax
081021ba +0x11dc:  mov    0x8(%eax),%eax
081021bd +0x11df:  pop    %ebp
081021be +0x11e0:  ret
081021bf +0x11e1:  nop
081021c0 +0x11e2:  push   %ebp
081021c1 +0x11e3:  mov    %esp,%ebp
081021c3 +0x11e5:  mov    0x8(%ebp),%edx
081021c6 +0x11e8:  mov    0x8(%ebp),%eax
081021c9 +0x11eb:  mov    %edx,(%eax)
081021cb +0x11ed:  mov    0x8(%ebp),%edx
081021ce +0x11f0:  mov    0x8(%ebp),%eax
081021d1 +0x11f3:  mov    %edx,0x4(%eax)
081021d4 +0x11f6:  pop    %ebp
081021d5 +0x11f7:  ret
081021d6 +0x11f8:  push   %ebp
081021d7 +0x11f9:  mov    %esp,%ebp
081021d9 +0x11fb:  push   %edi
081021da +0x11fc:  push   %ebx
081021db +0x11fd:  mov    0x8(%ebp),%eax
081021de +0x1200:  mov    %eax,%ebx
081021e0 +0x1202:  mov    $0x0,%eax
081021e5 +0x1207:  mov    $0xb7,%edx
081021ea +0x120c:  mov    %ebx,%edi
081021ec +0x120e:  mov    %edx,%ecx
081021ee +0x1210:  rep stos %eax,%es:(%edi)
081021f0 +0x1212:  mov    0x8(%ebp),%eax
081021f3 +0x1215:  movl   $0x8f21,0x2dc(%eax)
081021fd +0x121f:  mov    0x8(%ebp),%eax
08102200 +0x1222:  movb   $0x0,0x2e0(%eax)
08102207 +0x1229:  pop    %ebx
08102208 +0x122a:  pop    %edi
08102209 +0x122b:  pop    %ebp
0810220a +0x122c:  ret
0810220b +0x122d:  nop
0810220c +0x122e:  push   %ebp
0810220d +0x122f:  mov    %esp,%ebp
0810220f +0x1231:  sub    $0x28,%esp
08102212 +0x1234:  lea    -0xc(%ebp),%eax
08102215 +0x1237:  mov    0x8(%ebp),%edx
08102218 +0x123a:  mov    %edx,0x4(%esp)
0810221c +0x123e:  mov    %eax,(%esp)
0810221f +0x1241:  call   08101b28 <+0xb4a>
08102224 +0x1246:  sub    $0x4,%esp
08102227 +0x1249:  mov    0xc(%ebp),%eax
0810222a +0x124c:  mov    %eax,0x8(%esp)
0810222e +0x1250:  mov    -0xc(%ebp),%eax
08102231 +0x1253:  mov    %eax,0x4(%esp)
08102235 +0x1257:  mov    0x8(%ebp),%eax
08102238 +0x125a:  mov    %eax,(%esp)
0810223b +0x125d:  call   08102b08 <+0x1b2a>
08102240 +0x1262:  leave
08102241 +0x1263:  ret
08102242 +0x1264:  push   %ebp
08102243 +0x1265:  mov    %esp,%ebp
08102245 +0x1267:  sub    $0x28,%esp
08102248 +0x126a:  mov    0xc(%ebp),%eax
0810224b +0x126d:  mov    %eax,(%esp)
0810224e +0x1270:  call   08102b3f <+0x1b61>
08102253 +0x1275:  mov    (%eax),%eax
08102255 +0x1277:  mov    %eax,-0xc(%ebp)
08102258 +0x127a:  mov    0x8(%ebp),%eax
0810225b +0x127d:  lea    -0xc(%ebp),%edx
0810225e +0x1280:  mov    %edx,0x4(%esp)
08102262 +0x1284:  mov    %eax,(%esp)
08102265 +0x1287:  call   08102b48 <+0x1b6a>
0810226a +0x128c:  leave
0810226b +0x128d:  ret
0810226c +0x128e:  push   %ebp
0810226d +0x128f:  mov    %esp,%ebp
0810226f +0x1291:  push   %ebx
08102270 +0x1292:  sub    $0x44,%esp
08102273 +0x1295:  lea    -0x20(%ebp),%eax
08102276 +0x1298:  mov    0xc(%ebp),%edx
08102279 +0x129b:  mov    %edx,0x8(%esp)
0810227d +0x129f:  mov    0x8(%ebp),%edx
08102280 +0x12a2:  mov    %edx,0x4(%esp)
08102284 +0x12a6:  mov    %eax,(%esp)
08102287 +0x12a9:  call   08102b72 <+0x1b94>
0810228c +0x12ae:  sub    $0x4,%esp
0810228f +0x12b1:  lea    -0x1c(%ebp),%eax
08102292 +0x12b4:  mov    0x8(%ebp),%edx
08102295 +0x12b7:  mov    %edx,0x4(%esp)
08102299 +0x12bb:  mov    %eax,(%esp)
0810229c +0x12be:  call   08102be6 <+0x1c08>
081022a1 +0x12c3:  sub    $0x4,%esp
081022a4 +0x12c6:  lea    -0x1c(%ebp),%eax
081022a7 +0x12c9:  mov    %eax,0x4(%esp)
081022ab +0x12cd:  lea    -0x20(%ebp),%eax
081022ae +0x12d0:  mov    %eax,(%esp)
081022b1 +0x12d3:  call   08102c0c <+0x1c2e>
081022b6 +0x12d8:  test   %al,%al
081022b8 +0x12da:  jne    081022f6 <+0x1318>
081022ba +0x12dc:  lea    -0x20(%ebp),%eax
081022bd +0x12df:  mov    %eax,(%esp)
081022c0 +0x12e2:  call   08102bc4 <+0x1be6>
081022c5 +0x12e7:  mov    %eax,%ebx
081022c7 +0x12e9:  lea    -0x15(%ebp),%eax
081022ca +0x12ec:  mov    0x8(%ebp),%edx
081022cd +0x12ef:  mov    %edx,0x4(%esp)
081022d1 +0x12f3:  mov    %eax,(%esp)
081022d4 +0x12f6:  call   08102b9e <+0x1bc0>
081022d9 +0x12fb:  sub    $0x4,%esp
081022dc +0x12fe:  mov    %ebx,0x8(%esp)
081022e0 +0x1302:  mov    0xc(%ebp),%eax
081022e3 +0x1305:  mov    %eax,0x4(%esp)
081022e7 +0x1309:  lea    -0x15(%ebp),%eax
081022ea +0x130c:  mov    %eax,(%esp)
081022ed +0x130f:  call   08102bd2 <+0x1bf4>
081022f2 +0x1314:  test   %al,%al
081022f4 +0x1316:  je     081022fd <+0x131f>
081022f6 +0x1318:  mov    $0x1,%eax
081022fb +0x131d:  jmp    08102302 <+0x1324>
081022fd +0x131f:  mov    $0x0,%eax
08102302 +0x1324:  test   %al,%al
08102304 +0x1326:  je     0810234f <+0x1371>
08102306 +0x1328:  movl   $0x0,-0xc(%ebp)
0810230d +0x132f:  lea    -0xc(%ebp),%eax
08102310 +0x1332:  mov    %eax,0x8(%esp)
08102314 +0x1336:  mov    0xc(%ebp),%eax
08102317 +0x1339:  mov    %eax,0x4(%esp)
0810231b +0x133d:  lea    -0x14(%ebp),%eax
0810231e +0x1340:  mov    %eax,(%esp)
08102321 +0x1343:  call   08102c20 <+0x1c42>
08102326 +0x1348:  lea    -0x2c(%ebp),%eax
08102329 +0x134b:  lea    -0x14(%ebp),%edx
0810232c +0x134e:  mov    %edx,0xc(%esp)
08102330 +0x1352:  mov    -0x20(%ebp),%edx
08102333 +0x1355:  mov    %edx,0x8(%esp)
08102337 +0x1359:  mov    0x8(%ebp),%edx
0810233a +0x135c:  mov    %edx,0x4(%esp)
0810233e +0x1360:  mov    %eax,(%esp)
08102341 +0x1363:  call   08102c4e <+0x1c70>
08102346 +0x1368:  sub    $0x4,%esp
08102349 +0x136b:  mov    -0x2c(%ebp),%eax
0810234c +0x136e:  mov    %eax,-0x20(%ebp)
0810234f +0x1371:  lea    -0x20(%ebp),%eax
08102352 +0x1374:  mov    %eax,(%esp)
08102355 +0x1377:  call   08102bc4 <+0x1be6>
0810235a +0x137c:  add    $0x4,%eax
0810235d +0x137f:  mov    -0x4(%ebp),%ebx
08102360 +0x1382:  leave
08102361 +0x1383:  ret
08102362 +0x1384:  push   %ebp
08102363 +0x1385:  mov    %esp,%ebp
08102365 +0x1387:  mov    0x8(%ebp),%eax
08102368 +0x138a:  mov    0xc(%ebp),%edx
0810236b +0x138d:  mov    %edx,(%eax)
0810236d +0x138f:  pop    %ebp
0810236e +0x1390:  ret
0810236f +0x1391:  push   %ebp
08102370 +0x1392:  mov    %esp,%ebp
08102372 +0x1394:  push   %ebx
08102373 +0x1395:  sub    $0x4,%esp
08102376 +0x1398:  call   08102c93 <+0x1cb5>
0810237b +0x139d:  mov    %eax,%edx
0810237d +0x139f:  mov    0x8(%ebp),%eax
08102380 +0x13a2:  mov    0xc(%eax),%eax
08102383 +0x13a5:  mov    %eax,%ecx
08102385 +0x13a7:  mov    0xc(%ebp),%eax
08102388 +0x13aa:  mov    0xc(%eax),%eax
0810238b +0x13ad:  mov    %ecx,%ebx
0810238d +0x13af:  sub    %eax,%ebx
0810238f +0x13b1:  mov    %ebx,%eax
08102391 +0x13b3:  sar    $0x2,%eax
08102394 +0x13b6:  sub    $0x1,%eax
08102397 +0x13b9:  imul   %eax,%edx
0810239a +0x13bc:  mov    0x8(%ebp),%eax
0810239d +0x13bf:  mov    (%eax),%eax
0810239f +0x13c1:  mov    %eax,%ecx
081023a1 +0x13c3:  mov    0x8(%ebp),%eax
081023a4 +0x13c6:  mov    0x4(%eax),%eax
081023a7 +0x13c9:  mov    %ecx,%ebx
081023a9 +0x13cb:  sub    %eax,%ebx
081023ab +0x13cd:  mov    %ebx,%eax
081023ad +0x13cf:  sar    $0x2,%eax
081023b0 +0x13d2:  lea    (%edx,%eax,1),%ecx
081023b3 +0x13d5:  mov    0xc(%ebp),%eax
081023b6 +0x13d8:  mov    0x8(%eax),%eax
081023b9 +0x13db:  mov    %eax,%edx
081023bb +0x13dd:  mov    0xc(%ebp),%eax
081023be +0x13e0:  mov    (%eax),%eax
081023c0 +0x13e2:  mov    %edx,%ebx
081023c2 +0x13e4:  sub    %eax,%ebx
081023c4 +0x13e6:  mov    %ebx,%eax
081023c6 +0x13e8:  sar    $0x2,%eax
081023c9 +0x13eb:  lea    (%ecx,%eax,1),%eax
081023cc +0x13ee:  add    $0x4,%esp
081023cf +0x13f1:  pop    %ebx
081023d0 +0x13f2:  pop    %ebp
081023d1 +0x13f3:  ret
081023d2 +0x13f4:  push   %ebp
081023d3 +0x13f5:  mov    %esp,%ebp
081023d5 +0x13f7:  sub    $0x18,%esp
081023d8 +0x13fa:  movl   $0x4,(%esp)
081023df +0x1401:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
081023e4 +0x1406:  leave
081023e5 +0x1407:  ret
081023e6 +0x1408:  push   %ebp
081023e7 +0x1409:  mov    %esp,%ebp
081023e9 +0x140b:  sub    $0x18,%esp
081023ec +0x140e:  mov    0x8(%ebp),%eax
081023ef +0x1411:  mov    %eax,(%esp)
081023f2 +0x1414:  call   08102ca8 <+0x1cca>
081023f7 +0x1419:  leave
081023f8 +0x141a:  ret
081023f9 +0x141b:  nop
081023fa +0x141c:  push   %ebp
081023fb +0x141d:  mov    %esp,%ebp
081023fd +0x141f:  mov    0x8(%ebp),%eax
08102400 +0x1422:  movl   $0x0,(%eax)
08102406 +0x1428:  mov    0x8(%ebp),%eax
08102409 +0x142b:  movl   $0x0,0x4(%eax)
08102410 +0x1432:  mov    0x8(%ebp),%eax
08102413 +0x1435:  movl   $0x0,0x8(%eax)
0810241a +0x143c:  mov    0x8(%ebp),%eax
0810241d +0x143f:  movl   $0x0,0xc(%eax)
08102424 +0x1446:  pop    %ebp
08102425 +0x1447:  ret
08102426 +0x1448:  push   %ebp
08102427 +0x1449:  mov    %esp,%ebp
08102429 +0x144b:  pop    %ebp
0810242a +0x144c:  ret
0810242b +0x144d:  nop
0810242c +0x144e:  push   %ebp
0810242d +0x144f:  mov    %esp,%ebp
0810242f +0x1451:  push   %esi
08102430 +0x1452:  push   %ebx
08102431 +0x1453:  sub    $0x20,%esp
08102434 +0x1456:  lea    -0x9(%ebp),%eax
08102437 +0x1459:  mov    0x8(%ebp),%edx
0810243a +0x145c:  mov    %edx,0x4(%esp)
0810243e +0x1460:  mov    %eax,(%esp)
08102441 +0x1463:  call   08102570 <+0x1592>
08102446 +0x1468:  sub    $0x4,%esp
08102449 +0x146b:  lea    -0x9(%ebp),%eax
0810244c +0x146e:  movl   $0x0,0x8(%esp)
08102454 +0x1476:  mov    0xc(%ebp),%edx
08102457 +0x1479:  mov    %edx,0x4(%esp)
0810245b +0x147d:  mov    %eax,(%esp)
0810245e +0x1480:  call   08102cae <+0x1cd0>
08102463 +0x1485:  mov    %eax,%ebx
08102465 +0x1487:  lea    -0x9(%ebp),%eax
08102468 +0x148a:  mov    %eax,(%esp)
0810246b +0x148d:  call   081025a2 <+0x15c4>
08102470 +0x1492:  mov    %ebx,%eax
08102472 +0x1494:  lea    -0x8(%ebp),%esp
08102475 +0x1497:  add    $0x0,%esp
08102478 +0x149a:  pop    %ebx
08102479 +0x149b:  pop    %esi
0810247a +0x149c:  pop    %ebp
0810247b +0x149d:  ret
0810247c +0x149e:  mov    %edx,%ebx
0810247e +0x14a0:  mov    %eax,%esi
08102480 +0x14a2:  lea    -0x9(%ebp),%eax
08102483 +0x14a5:  mov    %eax,(%esp)
08102486 +0x14a8:  call   081025a2 <+0x15c4>
0810248b +0x14ad:  mov    %esi,%eax
0810248d +0x14af:  mov    %ebx,%edx
0810248f +0x14b1:  mov    %eax,(%esp)
08102492 +0x14b4:  call   08ae3750 <_Unwind_Resume>
08102497 +0x14b9:  nop
08102498 +0x14ba:  push   %ebp
08102499 +0x14bb:  mov    %esp,%ebp
0810249b +0x14bd:  push   %esi
0810249c +0x14be:  push   %ebx
0810249d +0x14bf:  sub    $0x20,%esp
081024a0 +0x14c2:  mov    0xc(%ebp),%eax
081024a3 +0x14c5:  mov    %eax,-0xc(%ebp)
081024a6 +0x14c8:  jmp    081024bc <+0x14de>
081024a8 +0x14ca:  mov    0x8(%ebp),%eax
081024ab +0x14cd:  mov    %eax,(%esp)
081024ae +0x14d0:  call   08102ce6 <+0x1d08>
081024b3 +0x14d5:  mov    -0xc(%ebp),%edx
081024b6 +0x14d8:  mov    %eax,(%edx)
081024b8 +0x14da:  addl   $0x4,-0xc(%ebp)
081024bc +0x14de:  mov    -0xc(%ebp),%eax
081024bf +0x14e1:  cmp    0x10(%ebp),%eax
081024c2 +0x14e4:  setb   %al
081024c5 +0x14e7:  test   %al,%al
081024c7 +0x14e9:  jne    081024a8 <+0x14ca>
081024c9 +0x14eb:  jmp    08102506 <+0x1528>
081024cb +0x14ed:  mov    %eax,(%esp)
081024ce +0x14f0:  call   08725ce0 <__cxa_begin_catch>
081024d3 +0x14f5:  mov    -0xc(%ebp),%eax
081024d6 +0x14f8:  mov    %eax,0x8(%esp)
081024da +0x14fc:  mov    0xc(%ebp),%eax
081024dd +0x14ff:  mov    %eax,0x4(%esp)
081024e1 +0x1503:  mov    0x8(%ebp),%eax
081024e4 +0x1506:  mov    %eax,(%esp)
081024e7 +0x1509:  call   08101dcc <+0xdee>
081024ec +0x150e:  call   08724be0 <__cxa_rethrow>
081024f1 +0x1513:  mov    %edx,%ebx
081024f3 +0x1515:  mov    %eax,%esi
081024f5 +0x1517:  call   08725c30 <__cxa_end_catch>
081024fa +0x151c:  mov    %esi,%eax
081024fc +0x151e:  mov    %ebx,%edx
081024fe +0x1520:  mov    %eax,(%esp)
08102501 +0x1523:  call   08ae3750 <_Unwind_Resume>
08102506 +0x1528:  add    $0x20,%esp
08102509 +0x152b:  pop    %ebx
0810250a +0x152c:  pop    %esi
0810250b +0x152d:  pop    %ebp
0810250c +0x152e:  ret
0810250d +0x152f:  nop
0810250e +0x1530:  push   %ebp
0810250f +0x1531:  mov    %esp,%ebp
08102511 +0x1533:  push   %ebx
08102512 +0x1534:  sub    $0x4,%esp
08102515 +0x1537:  mov    0x8(%ebp),%eax
08102518 +0x153a:  mov    0xc(%ebp),%edx
0810251b +0x153d:  mov    %edx,0xc(%eax)
0810251e +0x1540:  mov    0xc(%ebp),%eax
08102521 +0x1543:  mov    (%eax),%edx
08102523 +0x1545:  mov    0x8(%ebp),%eax
08102526 +0x1548:  mov    %edx,0x4(%eax)
08102529 +0x154b:  mov    0x8(%ebp),%eax
0810252c +0x154e:  mov    0x4(%eax),%ebx
0810252f +0x1551:  call   081023d2 <+0x13f4>
08102534 +0x1556:  shl    $0x2,%eax
08102537 +0x1559:  lea    (%ebx,%eax,1),%edx
0810253a +0x155c:  mov    0x8(%ebp),%eax
0810253d +0x155f:  mov    %edx,0x8(%eax)
08102540 +0x1562:  add    $0x4,%esp
08102543 +0x1565:  pop    %ebx
08102544 +0x1566:  pop    %ebp
08102545 +0x1567:  ret
08102546 +0x1568:  push   %ebp
08102547 +0x1569:  mov    %esp,%ebp
08102549 +0x156b:  sub    $0x18,%esp
0810254c +0x156e:  movl   $0x4,(%esp)
08102553 +0x1575:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08102558 +0x157a:  mov    0x8(%ebp),%edx
0810255b +0x157d:  mov    %eax,0x8(%esp)
0810255f +0x1581:  mov    0xc(%ebp),%eax
08102562 +0x1584:  mov    %eax,0x4(%esp)
08102566 +0x1588:  mov    %edx,(%esp)
08102569 +0x158b:  call   08102d12 <+0x1d34>
0810256e +0x1590:  leave
0810256f +0x1591:  ret
08102570 +0x1592:  push   %ebp
08102571 +0x1593:  mov    %esp,%ebp
08102573 +0x1595:  push   %esi
08102574 +0x1596:  push   %ebx
08102575 +0x1597:  sub    $0x10,%esp
08102578 +0x159a:  mov    0x8(%ebp),%ebx
0810257b +0x159d:  mov    %ebx,%esi
0810257d +0x159f:  mov    0xc(%ebp),%eax
08102580 +0x15a2:  mov    %eax,(%esp)
08102583 +0x15a5:  call   08102d26 <+0x1d48>
08102588 +0x15aa:  mov    %eax,0x4(%esp)
0810258c +0x15ae:  mov    %esi,(%esp)
0810258f +0x15b1:  call   08102d2e <+0x1d50>
08102594 +0x15b6:  mov    %ebx,%eax
08102596 +0x15b8:  mov    %ebx,%eax
08102598 +0x15ba:  add    $0x10,%esp
0810259b +0x15bd:  pop    %ebx
0810259c +0x15be:  pop    %esi
0810259d +0x15bf:  pop    %ebp
0810259e +0x15c0:  ret    $0x4
081025a1 +0x15c3:  nop
081025a2 +0x15c4:  push   %ebp
081025a3 +0x15c5:  mov    %esp,%ebp
081025a5 +0x15c7:  sub    $0x18,%esp
081025a8 +0x15ca:  mov    0x8(%ebp),%eax
081025ab +0x15cd:  mov    %eax,(%esp)
081025ae +0x15d0:  call   08102d42 <+0x1d64>
081025b3 +0x15d5:  leave
081025b4 +0x15d6:  ret
081025b5 +0x15d7:  nop
081025b6 +0x15d8:  push   %ebp
081025b7 +0x15d9:  mov    %esp,%ebp
081025b9 +0x15db:  sub    $0x18,%esp
081025bc +0x15de:  mov    0xc(%ebp),%eax
081025bf +0x15e1:  mov    %eax,(%esp)
081025c2 +0x15e4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081025c7 +0x15e9:  leave
081025c8 +0x15ea:  ret
081025c9 +0x15eb:  nop
081025ca +0x15ec:  push   %ebp
081025cb +0x15ed:  mov    %esp,%ebp
081025cd +0x15ef:  sub    $0x18,%esp
081025d0 +0x15f2:  mov    0x8(%ebp),%eax
081025d3 +0x15f5:  mov    0xc(%ebp),%edx
081025d6 +0x15f8:  mov    %edx,0x4(%esp)
081025da +0x15fc:  mov    %eax,(%esp)
081025dd +0x15ff:  call   08102d48 <+0x1d6a>
081025e2 +0x1604:  mov    0x8(%ebp),%eax
081025e5 +0x1607:  movl   $0x0,(%eax)
081025eb +0x160d:  mov    0x8(%ebp),%eax
081025ee +0x1610:  movl   $0x0,0x4(%eax)
081025f5 +0x1617:  mov    0x8(%ebp),%eax
081025f8 +0x161a:  add    $0x8,%eax
081025fb +0x161d:  mov    %eax,(%esp)
081025fe +0x1620:  call   081023fa <+0x141c>
08102603 +0x1625:  mov    0x8(%ebp),%eax
08102606 +0x1628:  add    $0x18,%eax
08102609 +0x162b:  mov    %eax,(%esp)
0810260c +0x162e:  call   081023fa <+0x141c>
08102611 +0x1633:  leave
08102612 +0x1634:  ret
08102613 +0x1635:  push   %ebp
08102614 +0x1636:  mov    %esp,%ebp
08102616 +0x1638:  sub    $0x28,%esp
08102619 +0x163b:  mov    0x8(%ebp),%eax
0810261c +0x163e:  mov    %eax,(%esp)
0810261f +0x1641:  call   08102d62 <+0x1d84>
08102624 +0x1646:  mov    %eax,0x4(%esp)
08102628 +0x164a:  lea    -0x18(%ebp),%eax
0810262b +0x164d:  mov    %eax,(%esp)
0810262e +0x1650:  call   08101796 <+0x7b8>
08102633 +0x1655:  mov    0xc(%ebp),%eax
08102636 +0x1658:  mov    %eax,(%esp)
08102639 +0x165b:  call   08102d62 <+0x1d84>
0810263e +0x1660:  mov    0x8(%ebp),%edx
08102641 +0x1663:  mov    (%eax),%ecx
08102643 +0x1665:  mov    %ecx,(%edx)
08102645 +0x1667:  mov    0x4(%eax),%ecx
08102648 +0x166a:  mov    %ecx,0x4(%edx)
0810264b +0x166d:  mov    0x8(%eax),%ecx
0810264e +0x1670:  mov    %ecx,0x8(%edx)
08102651 +0x1673:  mov    0xc(%eax),%eax
08102654 +0x1676:  mov    %eax,0xc(%edx)
08102657 +0x1679:  lea    -0x18(%ebp),%eax
0810265a +0x167c:  mov    %eax,(%esp)
0810265d +0x167f:  call   08102d62 <+0x1d84>
08102662 +0x1684:  mov    0xc(%ebp),%edx
08102665 +0x1687:  mov    (%eax),%ecx
08102667 +0x1689:  mov    %ecx,(%edx)
08102669 +0x168b:  mov    0x4(%eax),%ecx
0810266c +0x168e:  mov    %ecx,0x4(%edx)
0810266f +0x1691:  mov    0x8(%eax),%ecx
08102672 +0x1694:  mov    %ecx,0x8(%edx)
08102675 +0x1697:  mov    0xc(%eax),%eax
08102678 +0x169a:  mov    %eax,0xc(%edx)
0810267b +0x169d:  leave
0810267c +0x169e:  ret
0810267d +0x169f:  push   %ebp
0810267e +0x16a0:  mov    %esp,%ebp
08102680 +0x16a2:  sub    $0x28,%esp
08102683 +0x16a5:  mov    0x8(%ebp),%eax
08102686 +0x16a8:  mov    %eax,(%esp)
08102689 +0x16ab:  call   08102d6a <+0x1d8c>
0810268e +0x16b0:  mov    (%eax),%eax
08102690 +0x16b2:  mov    %eax,-0xc(%ebp)
08102693 +0x16b5:  mov    0xc(%ebp),%eax
08102696 +0x16b8:  mov    %eax,(%esp)
08102699 +0x16bb:  call   08102d6a <+0x1d8c>
0810269e +0x16c0:  mov    (%eax),%edx
081026a0 +0x16c2:  mov    0x8(%ebp),%eax
081026a3 +0x16c5:  mov    %edx,(%eax)
081026a5 +0x16c7:  lea    -0xc(%ebp),%eax
081026a8 +0x16ca:  mov    %eax,(%esp)
081026ab +0x16cd:  call   08102d6a <+0x1d8c>
081026b0 +0x16d2:  mov    (%eax),%edx
081026b2 +0x16d4:  mov    0xc(%ebp),%eax
081026b5 +0x16d7:  mov    %edx,(%eax)
081026b7 +0x16d9:  leave
081026b8 +0x16da:  ret
081026b9 +0x16db:  push   %ebp
081026ba +0x16dc:  mov    %esp,%ebp
081026bc +0x16de:  sub    $0x28,%esp
081026bf +0x16e1:  mov    0x8(%ebp),%eax
081026c2 +0x16e4:  mov    %eax,(%esp)
081026c5 +0x16e7:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
081026ca +0x16ec:  mov    (%eax),%eax
081026cc +0x16ee:  mov    %eax,-0xc(%ebp)
081026cf +0x16f1:  mov    0xc(%ebp),%eax
081026d2 +0x16f4:  mov    %eax,(%esp)
081026d5 +0x16f7:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
081026da +0x16fc:  mov    (%eax),%edx
081026dc +0x16fe:  mov    0x8(%ebp),%eax
081026df +0x1701:  mov    %edx,(%eax)
081026e1 +0x1703:  lea    -0xc(%ebp),%eax
081026e4 +0x1706:  mov    %eax,(%esp)
081026e7 +0x1709:  call   080e2d71 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb17>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb17
081026ec +0x170e:  mov    (%eax),%edx
081026ee +0x1710:  mov    0xc(%ebp),%eax
081026f1 +0x1713:  mov    %edx,(%eax)
081026f3 +0x1715:  leave
081026f4 +0x1716:  ret
081026f5 +0x1717:  nop
081026f6 +0x1718:  push   %ebp
081026f7 +0x1719:  mov    %esp,%ebp
081026f9 +0x171b:  sub    $0x18,%esp
081026fc +0x171e:  mov    0x8(%ebp),%eax
081026ff +0x1721:  mov    %eax,(%esp)
08102702 +0x1724:  call   08102d72 <+0x1d94>
08102707 +0x1729:  mov    0x8(%ebp),%eax
0810270a +0x172c:  movl   $0x0,(%eax)
08102710 +0x1732:  mov    0x8(%ebp),%eax
08102713 +0x1735:  movl   $0x0,0x4(%eax)
0810271a +0x173c:  mov    0x8(%ebp),%eax
0810271d +0x173f:  add    $0x8,%eax
08102720 +0x1742:  mov    %eax,(%esp)
08102723 +0x1745:  call   08102d86 <+0x1da8>
08102728 +0x174a:  mov    0x8(%ebp),%eax
0810272b +0x174d:  add    $0x18,%eax
0810272e +0x1750:  mov    %eax,(%esp)
08102731 +0x1753:  call   08102d86 <+0x1da8>
08102736 +0x1758:  leave
08102737 +0x1759:  ret
08102738 +0x175a:  push   %ebp
08102739 +0x175b:  mov    %esp,%ebp
0810273b +0x175d:  sub    $0x18,%esp
0810273e +0x1760:  mov    0x8(%ebp),%eax
08102741 +0x1763:  mov    %eax,(%esp)
08102744 +0x1766:  call   08102db2 <+0x1dd4>
08102749 +0x176b:  leave
0810274a +0x176c:  ret
0810274b +0x176d:  nop
0810274c +0x176e:  push   %ebp
0810274d +0x176f:  mov    %esp,%ebp
0810274f +0x1771:  push   %esi
08102750 +0x1772:  push   %ebx
08102751 +0x1773:  sub    $0x40,%esp
08102754 +0x1776:  movl   $0x4,(%esp)
0810275b +0x177d:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08102760 +0x1782:  mov    %eax,-0x2c(%ebp)
08102763 +0x1785:  mov    0xc(%ebp),%eax
08102766 +0x1788:  mov    $0x0,%edx
0810276b +0x178d:  divl   -0x2c(%ebp)
0810276e +0x1790:  add    $0x1,%eax
08102771 +0x1793:  mov    %eax,-0x14(%ebp)
08102774 +0x1796:  mov    -0x14(%ebp),%eax
08102777 +0x1799:  add    $0x2,%eax
0810277a +0x179c:  mov    %eax,-0x1c(%ebp)
0810277d +0x179f:  movl   $0x8,-0x18(%ebp)
08102784 +0x17a6:  lea    -0x1c(%ebp),%eax
08102787 +0x17a9:  mov    %eax,0x4(%esp)
0810278b +0x17ad:  lea    -0x18(%ebp),%eax
0810278e +0x17b0:  mov    %eax,(%esp)
08102791 +0x17b3:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08102796 +0x17b8:  mov    (%eax),%edx
08102798 +0x17ba:  mov    0x8(%ebp),%eax
0810279b +0x17bd:  mov    %edx,0x4(%eax)
0810279e +0x17c0:  mov    0x8(%ebp),%eax
081027a1 +0x17c3:  mov    0x4(%eax),%eax
081027a4 +0x17c6:  mov    %eax,0x4(%esp)
081027a8 +0x17ca:  mov    0x8(%ebp),%eax
081027ab +0x17cd:  mov    %eax,(%esp)
081027ae +0x17d0:  call   08102db8 <+0x1dda>
081027b3 +0x17d5:  mov    0x8(%ebp),%edx
081027b6 +0x17d8:  mov    %eax,(%edx)
081027b8 +0x17da:  mov    0x8(%ebp),%eax
081027bb +0x17dd:  mov    (%eax),%edx
081027bd +0x17df:  mov    0x8(%ebp),%eax
081027c0 +0x17e2:  mov    0x4(%eax),%eax
081027c3 +0x17e5:  sub    -0x14(%ebp),%eax
081027c6 +0x17e8:  shr    %eax
081027c8 +0x17ea:  shl    $0x2,%eax
081027cb +0x17ed:  lea    (%edx,%eax,1),%eax
081027ce +0x17f0:  mov    %eax,-0x10(%ebp)
081027d1 +0x17f3:  mov    -0x14(%ebp),%eax
081027d4 +0x17f6:  shl    $0x2,%eax
081027d7 +0x17f9:  add    -0x10(%ebp),%eax
081027da +0x17fc:  mov    %eax,-0xc(%ebp)
081027dd +0x17ff:  mov    -0xc(%ebp),%eax
081027e0 +0x1802:  mov    %eax,0x8(%esp)
081027e4 +0x1806:  mov    -0x10(%ebp),%eax
081027e7 +0x1809:  mov    %eax,0x4(%esp)
081027eb +0x180d:  mov    0x8(%ebp),%eax
081027ee +0x1810:  mov    %eax,(%esp)
081027f1 +0x1813:  call   08102e24 <+0x1e46>
081027f6 +0x1818:  jmp    0810284b <+0x186d>
081027f8 +0x181a:  mov    %eax,(%esp)
081027fb +0x181d:  call   08725ce0 <__cxa_begin_catch>
08102800 +0x1822:  mov    0x8(%ebp),%eax
08102803 +0x1825:  mov    0x4(%eax),%edx
08102806 +0x1828:  mov    0x8(%ebp),%eax
08102809 +0x182b:  mov    (%eax),%eax
0810280b +0x182d:  mov    %edx,0x8(%esp)
0810280f +0x1831:  mov    %eax,0x4(%esp)
08102813 +0x1835:  mov    0x8(%ebp),%eax
08102816 +0x1838:  mov    %eax,(%esp)
08102819 +0x183b:  call   081028f2 <+0x1914>
0810281e +0x1840:  mov    0x8(%ebp),%eax
08102821 +0x1843:  movl   $0x0,(%eax)
08102827 +0x1849:  mov    0x8(%ebp),%eax
0810282a +0x184c:  movl   $0x0,0x4(%eax)
08102831 +0x1853:  call   08724be0 <__cxa_rethrow>
08102836 +0x1858:  mov    %edx,%ebx
08102838 +0x185a:  mov    %eax,%esi
0810283a +0x185c:  call   08725c30 <__cxa_end_catch>
0810283f +0x1861:  mov    %esi,%eax
08102841 +0x1863:  mov    %ebx,%edx
08102843 +0x1865:  mov    %eax,(%esp)
08102846 +0x1868:  call   08ae3750 <_Unwind_Resume>
0810284b +0x186d:  mov    0x8(%ebp),%eax
0810284e +0x1870:  lea    0x8(%eax),%edx
08102851 +0x1873:  mov    -0x10(%ebp),%eax
08102854 +0x1876:  mov    %eax,0x4(%esp)
08102858 +0x187a:  mov    %edx,(%esp)
0810285b +0x187d:  call   08102e9a <+0x1ebc>
08102860 +0x1882:  mov    -0xc(%ebp),%eax
08102863 +0x1885:  lea    -0x4(%eax),%edx
08102866 +0x1888:  mov    0x8(%ebp),%eax
08102869 +0x188b:  add    $0x18,%eax
0810286c +0x188e:  mov    %edx,0x4(%esp)
08102870 +0x1892:  mov    %eax,(%esp)
08102873 +0x1895:  call   08102e9a <+0x1ebc>
08102878 +0x189a:  mov    0x8(%ebp),%eax
0810287b +0x189d:  mov    0xc(%eax),%edx
0810287e +0x18a0:  mov    0x8(%ebp),%eax
08102881 +0x18a3:  mov    %edx,0x8(%eax)
08102884 +0x18a6:  mov    0x8(%ebp),%eax
08102887 +0x18a9:  mov    0x1c(%eax),%ebx
0810288a +0x18ac:  movl   $0x4,(%esp)
08102891 +0x18b3:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08102896 +0x18b8:  mov    %eax,-0x2c(%ebp)
08102899 +0x18bb:  mov    0xc(%ebp),%eax
0810289c +0x18be:  mov    $0x0,%edx
081028a1 +0x18c3:  divl   -0x2c(%ebp)
081028a4 +0x18c6:  mov    %edx,%ecx
081028a6 +0x18c8:  mov    %ecx,%eax
081028a8 +0x18ca:  shl    $0x2,%eax
081028ab +0x18cd:  lea    (%ebx,%eax,1),%edx
081028ae +0x18d0:  mov    0x8(%ebp),%eax
081028b1 +0x18d3:  mov    %edx,0x18(%eax)
081028b4 +0x18d6:  add    $0x40,%esp
081028b7 +0x18d9:  pop    %ebx
081028b8 +0x18da:  pop    %esi
081028b9 +0x18db:  pop    %ebp
081028ba +0x18dc:  ret
081028bb +0x18dd:  nop
081028bc +0x18de:  push   %ebp
081028bd +0x18df:  mov    %esp,%ebp
081028bf +0x18e1:  sub    $0x28,%esp
081028c2 +0x18e4:  mov    0xc(%ebp),%eax
081028c5 +0x18e7:  mov    %eax,-0xc(%ebp)
081028c8 +0x18ea:  jmp    081028e2 <+0x1904>
081028ca +0x18ec:  mov    -0xc(%ebp),%eax
081028cd +0x18ef:  mov    (%eax),%eax
081028cf +0x18f1:  mov    %eax,0x4(%esp)
081028d3 +0x18f5:  mov    0x8(%ebp),%eax
081028d6 +0x18f8:  mov    %eax,(%esp)
081028d9 +0x18fb:  call   08102ed2 <+0x1ef4>
081028de +0x1900:  addl   $0x4,-0xc(%ebp)
081028e2 +0x1904:  mov    -0xc(%ebp),%eax
081028e5 +0x1907:  cmp    0x10(%ebp),%eax
081028e8 +0x190a:  setb   %al
081028eb +0x190d:  test   %al,%al
081028ed +0x190f:  jne    081028ca <+0x18ec>
081028ef +0x1911:  leave
081028f0 +0x1912:  ret
081028f1 +0x1913:  nop
081028f2 +0x1914:  push   %ebp
081028f3 +0x1915:  mov    %esp,%ebp
081028f5 +0x1917:  sub    $0x28,%esp
081028f8 +0x191a:  lea    -0x9(%ebp),%eax
081028fb +0x191d:  mov    0x8(%ebp),%edx
081028fe +0x1920:  mov    %edx,0x4(%esp)
08102902 +0x1924:  mov    %eax,(%esp)
08102905 +0x1927:  call   08102efc <+0x1f1e>
0810290a +0x192c:  sub    $0x4,%esp
0810290d +0x192f:  lea    -0x9(%ebp),%eax
08102910 +0x1932:  mov    0x10(%ebp),%edx
08102913 +0x1935:  mov    %edx,0x8(%esp)
08102917 +0x1939:  mov    0xc(%ebp),%edx
0810291a +0x193c:  mov    %edx,0x4(%esp)
0810291e +0x1940:  mov    %eax,(%esp)
08102921 +0x1943:  call   08102f42 <+0x1f64>
08102926 +0x1948:  lea    -0x9(%ebp),%eax
08102929 +0x194b:  mov    %eax,(%esp)
0810292c +0x194e:  call   08102f2e <+0x1f50>
08102931 +0x1953:  leave
08102932 +0x1954:  ret
08102933 +0x1955:  push   %ebp
08102934 +0x1956:  mov    %esp,%ebp
08102936 +0x1958:  mov    0x8(%ebp),%eax
08102939 +0x195b:  pop    %ebp
0810293a +0x195c:  ret
0810293b +0x195d:  nop
0810293c +0x195e:  push   %ebp
0810293d +0x195f:  mov    %esp,%ebp
0810293f +0x1961:  push   %esi
08102940 +0x1962:  push   %ebx
08102941 +0x1963:  sub    $0x10,%esp
08102944 +0x1966:  mov    0xc(%ebp),%eax
08102947 +0x1969:  mov    %eax,(%esp)
0810294a +0x196c:  call   0810203a <+0x105c>
0810294f +0x1971:  mov    0x8(%ebp),%edx
08102952 +0x1974:  mov    %eax,0x4(%esp)
08102956 +0x1978:  mov    %edx,(%esp)
08102959 +0x197b:  call   08102f56 <+0x1f78>
0810295e +0x1980:  movl   $0x0,0x4(%esp)
08102966 +0x1988:  mov    0x8(%ebp),%eax
08102969 +0x198b:  mov    %eax,(%esp)
0810296c +0x198e:  call   0810274c <+0x176e>
08102971 +0x1993:  mov    0xc(%ebp),%eax
08102974 +0x1996:  mov    (%eax),%eax
08102976 +0x1998:  test   %eax,%eax
08102978 +0x199a:  je     081029f1 <+0x1a13>
0810297a +0x199c:  mov    0xc(%ebp),%eax
0810297d +0x199f:  lea    0x8(%eax),%edx
08102980 +0x19a2:  mov    0x8(%ebp),%eax
08102983 +0x19a5:  add    $0x8,%eax
08102986 +0x19a8:  mov    %edx,0x4(%esp)
0810298a +0x19ac:  mov    %eax,(%esp)
0810298d +0x19af:  call   08102f9f <+0x1fc1>
08102992 +0x19b4:  mov    0xc(%ebp),%eax
08102995 +0x19b7:  lea    0x18(%eax),%edx
08102998 +0x19ba:  mov    0x8(%ebp),%eax
0810299b +0x19bd:  add    $0x18,%eax
0810299e +0x19c0:  mov    %edx,0x4(%esp)
081029a2 +0x19c4:  mov    %eax,(%esp)
081029a5 +0x19c7:  call   08102f9f <+0x1fc1>
081029aa +0x19cc:  mov    0xc(%ebp),%edx
081029ad +0x19cf:  mov    0x8(%ebp),%eax
081029b0 +0x19d2:  mov    %edx,0x4(%esp)
081029b4 +0x19d6:  mov    %eax,(%esp)
081029b7 +0x19d9:  call   08103009 <+0x202b>
081029bc +0x19de:  mov    0xc(%ebp),%eax
081029bf +0x19e1:  lea    0x4(%eax),%edx
081029c2 +0x19e4:  mov    0x8(%ebp),%eax
081029c5 +0x19e7:  add    $0x4,%eax
081029c8 +0x19ea:  mov    %edx,0x4(%esp)
081029cc +0x19ee:  mov    %eax,(%esp)
081029cf +0x19f1:  call   081026b9 <+0x16db>
081029d4 +0x19f6:  jmp    081029f1 <+0x1a13>
081029d6 +0x19f8:  mov    %edx,%ebx
081029d8 +0x19fa:  mov    %eax,%esi
081029da +0x19fc:  mov    0x8(%ebp),%eax
081029dd +0x19ff:  mov    %eax,(%esp)
081029e0 +0x1a02:  call   08101f08 <+0xf2a>
081029e5 +0x1a07:  mov    %esi,%eax
081029e7 +0x1a09:  mov    %ebx,%edx
081029e9 +0x1a0b:  mov    %eax,(%esp)
081029ec +0x1a0e:  call   08ae3750 <_Unwind_Resume>
081029f1 +0x1a13:  add    $0x10,%esp
081029f4 +0x1a16:  pop    %ebx
081029f5 +0x1a17:  pop    %esi
081029f6 +0x1a18:  pop    %ebp
081029f7 +0x1a19:  ret
081029f8 +0x1a1a:  push   %ebp
081029f9 +0x1a1b:  mov    %esp,%ebp
081029fb +0x1a1d:  sub    $0x18,%esp
081029fe +0x1a20:  mov    0x8(%ebp),%eax
08102a01 +0x1a23:  mov    %eax,(%esp)
08102a04 +0x1a26:  call   08103046 <+0x2068>
08102a09 +0x1a2b:  mov    0x8(%ebp),%eax
08102a0c +0x1a2e:  movl   $0x0,(%eax)
08102a12 +0x1a34:  mov    0x8(%ebp),%eax
08102a15 +0x1a37:  movl   $0x0,0x4(%eax)
08102a1c +0x1a3e:  leave
08102a1d +0x1a3f:  ret
08102a1e +0x1a40:  push   %ebp
08102a1f +0x1a41:  mov    %esp,%ebp
08102a21 +0x1a43:  pop    %ebp
08102a22 +0x1a44:  ret
08102a23 +0x1a45:  nop
08102a24 +0x1a46:  push   %ebp
08102a25 +0x1a47:  mov    %esp,%ebp
08102a27 +0x1a49:  mov    0x8(%ebp),%eax
08102a2a +0x1a4c:  pop    %ebp
08102a2b +0x1a4d:  ret
08102a2c +0x1a4e:  push   %ebp
08102a2d +0x1a4f:  mov    %esp,%ebp
08102a2f +0x1a51:  pop    %ebp
08102a30 +0x1a52:  ret
08102a31 +0x1a53:  nop
08102a32 +0x1a54:  push   %ebp
08102a33 +0x1a55:  mov    %esp,%ebp
08102a35 +0x1a57:  sub    $0x18,%esp
08102a38 +0x1a5a:  mov    0xc(%ebp),%eax
08102a3b +0x1a5d:  mov    %eax,(%esp)
08102a3e +0x1a60:  call   08102a2c <+0x1a4e>
08102a43 +0x1a65:  leave
08102a44 +0x1a66:  ret
08102a45 +0x1a67:  nop
08102a46 +0x1a68:  push   %ebp
08102a47 +0x1a69:  mov    %esp,%ebp
08102a49 +0x1a6b:  sub    $0x18,%esp
08102a4c +0x1a6e:  mov    0x8(%ebp),%eax
08102a4f +0x1a71:  movl   $0x1,0x8(%esp)
08102a57 +0x1a79:  mov    0xc(%ebp),%edx
08102a5a +0x1a7c:  mov    %edx,0x4(%esp)
08102a5e +0x1a80:  mov    %eax,(%esp)
08102a61 +0x1a83:  call   0810305a <+0x207c>
08102a66 +0x1a88:  leave
08102a67 +0x1a89:  ret
08102a68 +0x1a8a:  push   %ebp
08102a69 +0x1a8b:  mov    %esp,%ebp
08102a6b +0x1a8d:  sub    $0x18,%esp
08102a6e +0x1a90:  mov    0x8(%ebp),%eax
08102a71 +0x1a93:  mov    %eax,(%esp)
08102a74 +0x1a96:  call   0810306e <+0x2090>
08102a79 +0x1a9b:  mov    0x8(%ebp),%eax
08102a7c +0x1a9e:  movl   $0x0,0x4(%eax)
08102a83 +0x1aa5:  mov    0x8(%ebp),%eax
08102a86 +0x1aa8:  movl   $0x0,0x8(%eax)
08102a8d +0x1aaf:  mov    0x8(%ebp),%eax
08102a90 +0x1ab2:  movl   $0x0,0xc(%eax)
08102a97 +0x1ab9:  mov    0x8(%ebp),%eax
08102a9a +0x1abc:  movl   $0x0,0x10(%eax)
08102aa1 +0x1ac3:  mov    0x8(%ebp),%eax
08102aa4 +0x1ac6:  movl   $0x0,0x14(%eax)
08102aab +0x1acd:  mov    0x8(%ebp),%eax
08102aae +0x1ad0:  mov    %eax,(%esp)
08102ab1 +0x1ad3:  call   08103082 <+0x20a4>
08102ab6 +0x1ad8:  leave
08102ab7 +0x1ad9:  ret
08102ab8 +0x1ada:  push   %ebp
08102ab9 +0x1adb:  mov    %esp,%ebp
08102abb +0x1add:  pop    %ebp
08102abc +0x1ade:  ret
08102abd +0x1adf:  push   %ebp
08102abe +0x1ae0:  mov    %esp,%ebp
08102ac0 +0x1ae2:  mov    0x8(%ebp),%eax
08102ac3 +0x1ae5:  mov    0xc(%eax),%eax
08102ac6 +0x1ae8:  pop    %ebp
08102ac7 +0x1ae9:  ret
08102ac8 +0x1aea:  push   %ebp
08102ac9 +0x1aeb:  mov    %esp,%ebp
08102acb +0x1aed:  mov    0x8(%ebp),%eax
08102ace +0x1af0:  mov    0x8(%eax),%eax
08102ad1 +0x1af3:  pop    %ebp
08102ad2 +0x1af4:  ret
08102ad3 +0x1af5:  nop
08102ad4 +0x1af6:  push   %ebp
08102ad5 +0x1af7:  mov    %esp,%ebp
08102ad7 +0x1af9:  sub    $0x18,%esp
08102ada +0x1afc:  mov    0x8(%ebp),%eax
08102add +0x1aff:  mov    %eax,(%esp)
08102ae0 +0x1b02:  call   081030b4 <+0x20d6>
08102ae5 +0x1b07:  mov    0xc(%ebp),%edx
08102ae8 +0x1b0a:  mov    %edx,0x4(%esp)
08102aec +0x1b0e:  mov    %eax,(%esp)
08102aef +0x1b11:  call   081030c2 <+0x20e4>
08102af4 +0x1b16:  mov    0xc(%ebp),%eax
08102af7 +0x1b19:  mov    %eax,0x4(%esp)
08102afb +0x1b1d:  mov    0x8(%ebp),%eax
08102afe +0x1b20:  mov    %eax,(%esp)
08102b01 +0x1b23:  call   081030d6 <+0x20f8>
08102b06 +0x1b28:  leave
08102b07 +0x1b29:  ret
08102b08 +0x1b2a:  push   %ebp
08102b09 +0x1b2b:  mov    %esp,%ebp
08102b0b +0x1b2d:  sub    $0x28,%esp
08102b0e +0x1b30:  mov    0x10(%ebp),%eax
08102b11 +0x1b33:  mov    %eax,(%esp)
08102b14 +0x1b36:  call   081030f8 <+0x211a>
08102b19 +0x1b3b:  mov    %eax,0x4(%esp)
08102b1d +0x1b3f:  mov    0x8(%ebp),%eax
08102b20 +0x1b42:  mov    %eax,(%esp)
08102b23 +0x1b45:  call   08103100 <+0x2122>
08102b28 +0x1b4a:  mov    %eax,-0xc(%ebp)
08102b2b +0x1b4d:  mov    0xc(%ebp),%edx
08102b2e +0x1b50:  mov    -0xc(%ebp),%eax
08102b31 +0x1b53:  mov    %edx,0x4(%esp)
08102b35 +0x1b57:  mov    %eax,(%esp)
08102b38 +0x1b5a:  call   086dad20 <_ZNSt15_List_node_base4hookEPS_>  ; std::_List_node_base::hook(std::_List_node_base*)
08102b3d +0x1b5f:  leave
08102b3e +0x1b60:  ret
08102b3f +0x1b61:  push   %ebp
08102b40 +0x1b62:  mov    %esp,%ebp
08102b42 +0x1b64:  mov    0x8(%ebp),%eax
08102b45 +0x1b67:  pop    %ebp
08102b46 +0x1b68:  ret
08102b47 +0x1b69:  nop
08102b48 +0x1b6a:  push   %ebp
08102b49 +0x1b6b:  mov    %esp,%ebp
08102b4b +0x1b6d:  sub    $0x28,%esp
08102b4e +0x1b70:  mov    0xc(%ebp),%eax
08102b51 +0x1b73:  mov    %eax,(%esp)
08102b54 +0x1b76:  call   08102b3f <+0x1b61>
08102b59 +0x1b7b:  mov    (%eax),%eax
08102b5b +0x1b7d:  mov    %eax,-0xc(%ebp)
08102b5e +0x1b80:  lea    -0xc(%ebp),%eax
08102b61 +0x1b83:  mov    %eax,0x4(%esp)
08102b65 +0x1b87:  mov    0x8(%ebp),%eax
08102b68 +0x1b8a:  mov    %eax,(%esp)
08102b6b +0x1b8d:  call   08103182 <+0x21a4>
08102b70 +0x1b92:  leave
08102b71 +0x1b93:  ret
08102b72 +0x1b94:  push   %ebp
08102b73 +0x1b95:  mov    %esp,%ebp
08102b75 +0x1b97:  push   %ebx
08102b76 +0x1b98:  sub    $0x14,%esp
08102b79 +0x1b9b:  mov    0x8(%ebp),%ebx
08102b7c +0x1b9e:  mov    0xc(%ebp),%eax
08102b7f +0x1ba1:  mov    0x10(%ebp),%edx
08102b82 +0x1ba4:  mov    %edx,0x8(%esp)
08102b86 +0x1ba8:  mov    %eax,0x4(%esp)
08102b8a +0x1bac:  mov    %ebx,(%esp)
08102b8d +0x1baf:  call   081031fc <+0x221e>
08102b92 +0x1bb4:  sub    $0x4,%esp
08102b95 +0x1bb7:  mov    %ebx,%eax
08102b97 +0x1bb9:  mov    -0x4(%ebp),%ebx
08102b9a +0x1bbc:  leave
08102b9b +0x1bbd:  ret    $0x4
08102b9e +0x1bc0:  push   %ebp
08102b9f +0x1bc1:  mov    %esp,%ebp
08102ba1 +0x1bc3:  push   %ebx
08102ba2 +0x1bc4:  sub    $0x14,%esp
08102ba5 +0x1bc7:  mov    0x8(%ebp),%ebx
08102ba8 +0x1bca:  mov    0xc(%ebp),%eax
08102bab +0x1bcd:  mov    %eax,0x4(%esp)
08102baf +0x1bd1:  mov    %ebx,(%esp)
08102bb2 +0x1bd4:  call   0810324e <+0x2270>
08102bb7 +0x1bd9:  sub    $0x4,%esp
08102bba +0x1bdc:  mov    %ebx,%eax
08102bbc +0x1bde:  mov    -0x4(%ebp),%ebx
08102bbf +0x1be1:  leave
08102bc0 +0x1be2:  ret    $0x4
08102bc3 +0x1be5:  nop
08102bc4 +0x1be6:  push   %ebp
08102bc5 +0x1be7:  mov    %esp,%ebp
08102bc7 +0x1be9:  mov    0x8(%ebp),%eax
08102bca +0x1bec:  mov    (%eax),%eax
08102bcc +0x1bee:  add    $0x10,%eax
08102bcf +0x1bf1:  pop    %ebp
08102bd0 +0x1bf2:  ret
08102bd1 +0x1bf3:  nop
08102bd2 +0x1bf4:  push   %ebp
08102bd3 +0x1bf5:  mov    %esp,%ebp
08102bd5 +0x1bf7:  mov    0xc(%ebp),%eax
08102bd8 +0x1bfa:  mov    (%eax),%edx
08102bda +0x1bfc:  mov    0x10(%ebp),%eax
08102bdd +0x1bff:  mov    (%eax),%eax
08102bdf +0x1c01:  cmp    %eax,%edx
08102be1 +0x1c03:  setb   %al
08102be4 +0x1c06:  pop    %ebp
08102be5 +0x1c07:  ret
08102be6 +0x1c08:  push   %ebp
08102be7 +0x1c09:  mov    %esp,%ebp
08102be9 +0x1c0b:  push   %ebx
08102bea +0x1c0c:  sub    $0x14,%esp
08102bed +0x1c0f:  mov    0x8(%ebp),%ebx
08102bf0 +0x1c12:  mov    0xc(%ebp),%eax
08102bf3 +0x1c15:  mov    %eax,0x4(%esp)
08102bf7 +0x1c19:  mov    %ebx,(%esp)
08102bfa +0x1c1c:  call   08103258 <+0x227a>
08102bff +0x1c21:  sub    $0x4,%esp
08102c02 +0x1c24:  mov    %ebx,%eax
08102c04 +0x1c26:  mov    -0x4(%ebp),%ebx
08102c07 +0x1c29:  leave
08102c08 +0x1c2a:  ret    $0x4
08102c0b +0x1c2d:  nop
08102c0c +0x1c2e:  push   %ebp
08102c0d +0x1c2f:  mov    %esp,%ebp
08102c0f +0x1c31:  mov    0x8(%ebp),%eax
08102c12 +0x1c34:  mov    (%eax),%edx
08102c14 +0x1c36:  mov    0xc(%ebp),%eax
08102c17 +0x1c39:  mov    (%eax),%eax
08102c19 +0x1c3b:  cmp    %eax,%edx
08102c1b +0x1c3d:  sete   %al
08102c1e +0x1c40:  pop    %ebp
08102c1f +0x1c41:  ret
08102c20 +0x1c42:  push   %ebp
08102c21 +0x1c43:  mov    %esp,%ebp
08102c23 +0x1c45:  sub    $0x18,%esp
08102c26 +0x1c48:  mov    0xc(%ebp),%eax
08102c29 +0x1c4b:  mov    %eax,(%esp)
08102c2c +0x1c4e:  call   0810327e <+0x22a0>
08102c31 +0x1c53:  mov    (%eax),%edx
08102c33 +0x1c55:  mov    0x8(%ebp),%eax
08102c36 +0x1c58:  mov    %edx,(%eax)
08102c38 +0x1c5a:  mov    0x10(%ebp),%eax
08102c3b +0x1c5d:  mov    %eax,(%esp)
08102c3e +0x1c60:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
08102c43 +0x1c65:  mov    (%eax),%edx
08102c45 +0x1c67:  mov    0x8(%ebp),%eax
08102c48 +0x1c6a:  mov    %edx,0x4(%eax)
08102c4b +0x1c6d:  leave
08102c4c +0x1c6e:  ret
08102c4d +0x1c6f:  nop
08102c4e +0x1c70:  push   %ebp
08102c4f +0x1c71:  mov    %esp,%ebp
08102c51 +0x1c73:  push   %ebx
08102c52 +0x1c74:  sub    $0x24,%esp
08102c55 +0x1c77:  mov    0x8(%ebp),%ebx
08102c58 +0x1c7a:  lea    0x10(%ebp),%eax
08102c5b +0x1c7d:  mov    %eax,0x4(%esp)
08102c5f +0x1c81:  lea    -0xc(%ebp),%eax
08102c62 +0x1c84:  mov    %eax,(%esp)
08102c65 +0x1c87:  call   08103286 <+0x22a8>
08102c6a +0x1c8c:  mov    0xc(%ebp),%eax
08102c6d +0x1c8f:  mov    0x14(%ebp),%edx
08102c70 +0x1c92:  mov    %edx,0xc(%esp)
08102c74 +0x1c96:  mov    -0xc(%ebp),%edx
08102c77 +0x1c99:  mov    %edx,0x8(%esp)
08102c7b +0x1c9d:  mov    %eax,0x4(%esp)
08102c7f +0x1ca1:  mov    %ebx,(%esp)
08102c82 +0x1ca4:  call   08103296 <+0x22b8>
08102c87 +0x1ca9:  sub    $0x4,%esp
08102c8a +0x1cac:  mov    %ebx,%eax
08102c8c +0x1cae:  mov    -0x4(%ebp),%ebx
08102c8f +0x1cb1:  leave
08102c90 +0x1cb2:  ret    $0x4
08102c93 +0x1cb5:  push   %ebp
08102c94 +0x1cb6:  mov    %esp,%ebp
08102c96 +0x1cb8:  sub    $0x18,%esp
08102c99 +0x1cbb:  movl   $0x4,(%esp)
08102ca0 +0x1cc2:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08102ca5 +0x1cc7:  leave
08102ca6 +0x1cc8:  ret
08102ca7 +0x1cc9:  nop
08102ca8 +0x1cca:  push   %ebp
08102ca9 +0x1ccb:  mov    %esp,%ebp
08102cab +0x1ccd:  pop    %ebp
08102cac +0x1cce:  ret
08102cad +0x1ccf:  nop
08102cae +0x1cd0:  push   %ebp
08102caf +0x1cd1:  mov    %esp,%ebp
08102cb1 +0x1cd3:  sub    $0x18,%esp
08102cb4 +0x1cd6:  mov    0x8(%ebp),%eax
08102cb7 +0x1cd9:  mov    %eax,(%esp)
08102cba +0x1cdc:  call   0810365c <+0x267e>
08102cbf +0x1ce1:  cmp    0xc(%ebp),%eax
08102cc2 +0x1ce4:  setb   %al
08102cc5 +0x1ce7:  movzbl %al,%eax
08102cc8 +0x1cea:  test   %eax,%eax
08102cca +0x1cec:  setne  %al
08102ccd +0x1cef:  test   %al,%al
08102ccf +0x1cf1:  je     08102cd6 <+0x1cf8>
08102cd1 +0x1cf3:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08102cd6 +0x1cf8:  mov    0xc(%ebp),%eax
08102cd9 +0x1cfb:  shl    $0x2,%eax
08102cdc +0x1cfe:  mov    %eax,(%esp)
08102cdf +0x1d01:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08102ce4 +0x1d06:  leave
08102ce5 +0x1d07:  ret
08102ce6 +0x1d08:  push   %ebp
08102ce7 +0x1d09:  mov    %esp,%ebp
08102ce9 +0x1d0b:  sub    $0x18,%esp
08102cec +0x1d0e:  movl   $0x4,(%esp)
08102cf3 +0x1d15:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08102cf8 +0x1d1a:  mov    0x8(%ebp),%edx
08102cfb +0x1d1d:  movl   $0x0,0x8(%esp)
08102d03 +0x1d25:  mov    %eax,0x4(%esp)
08102d07 +0x1d29:  mov    %edx,(%esp)
08102d0a +0x1d2c:  call   08103666 <+0x2688>
08102d0f +0x1d31:  leave
08102d10 +0x1d32:  ret
08102d11 +0x1d33:  nop
08102d12 +0x1d34:  push   %ebp
08102d13 +0x1d35:  mov    %esp,%ebp
08102d15 +0x1d37:  sub    $0x18,%esp
08102d18 +0x1d3a:  mov    0xc(%ebp),%eax
08102d1b +0x1d3d:  mov    %eax,(%esp)
08102d1e +0x1d40:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08102d23 +0x1d45:  leave
08102d24 +0x1d46:  ret
08102d25 +0x1d47:  nop
08102d26 +0x1d48:  push   %ebp
08102d27 +0x1d49:  mov    %esp,%ebp
08102d29 +0x1d4b:  mov    0x8(%ebp),%eax
08102d2c +0x1d4e:  pop    %ebp
08102d2d +0x1d4f:  ret
08102d2e +0x1d50:  push   %ebp
08102d2f +0x1d51:  mov    %esp,%ebp
08102d31 +0x1d53:  sub    $0x18,%esp
08102d34 +0x1d56:  mov    0x8(%ebp),%eax
08102d37 +0x1d59:  mov    %eax,(%esp)
08102d3a +0x1d5c:  call   0810369e <+0x26c0>
08102d3f +0x1d61:  leave
08102d40 +0x1d62:  ret
08102d41 +0x1d63:  nop
08102d42 +0x1d64:  push   %ebp
08102d43 +0x1d65:  mov    %esp,%ebp
08102d45 +0x1d67:  pop    %ebp
08102d46 +0x1d68:  ret
08102d47 +0x1d69:  nop
08102d48 +0x1d6a:  push   %ebp
08102d49 +0x1d6b:  mov    %esp,%ebp
08102d4b +0x1d6d:  sub    $0x18,%esp
08102d4e +0x1d70:  mov    0xc(%ebp),%edx
08102d51 +0x1d73:  mov    0x8(%ebp),%eax
08102d54 +0x1d76:  mov    %edx,0x4(%esp)
08102d58 +0x1d7a:  mov    %eax,(%esp)
08102d5b +0x1d7d:  call   081036a4 <+0x26c6>
08102d60 +0x1d82:  leave
08102d61 +0x1d83:  ret
08102d62 +0x1d84:  push   %ebp
08102d63 +0x1d85:  mov    %esp,%ebp
08102d65 +0x1d87:  mov    0x8(%ebp),%eax
08102d68 +0x1d8a:  pop    %ebp
08102d69 +0x1d8b:  ret
08102d6a +0x1d8c:  push   %ebp
08102d6b +0x1d8d:  mov    %esp,%ebp
08102d6d +0x1d8f:  mov    0x8(%ebp),%eax
08102d70 +0x1d92:  pop    %ebp
08102d71 +0x1d93:  ret
08102d72 +0x1d94:  push   %ebp
08102d73 +0x1d95:  mov    %esp,%ebp
08102d75 +0x1d97:  sub    $0x18,%esp
08102d78 +0x1d9a:  mov    0x8(%ebp),%eax
08102d7b +0x1d9d:  mov    %eax,(%esp)
08102d7e +0x1da0:  call   081036aa <+0x26cc>
08102d83 +0x1da5:  leave
08102d84 +0x1da6:  ret
08102d85 +0x1da7:  nop
08102d86 +0x1da8:  push   %ebp
08102d87 +0x1da9:  mov    %esp,%ebp
08102d89 +0x1dab:  mov    0x8(%ebp),%eax
08102d8c +0x1dae:  movl   $0x0,(%eax)
08102d92 +0x1db4:  mov    0x8(%ebp),%eax
08102d95 +0x1db7:  movl   $0x0,0x4(%eax)
08102d9c +0x1dbe:  mov    0x8(%ebp),%eax
08102d9f +0x1dc1:  movl   $0x0,0x8(%eax)
08102da6 +0x1dc8:  mov    0x8(%ebp),%eax
08102da9 +0x1dcb:  movl   $0x0,0xc(%eax)
08102db0 +0x1dd2:  pop    %ebp
08102db1 +0x1dd3:  ret
08102db2 +0x1dd4:  push   %ebp
08102db3 +0x1dd5:  mov    %esp,%ebp
08102db5 +0x1dd7:  pop    %ebp
08102db6 +0x1dd8:  ret
08102db7 +0x1dd9:  nop
08102db8 +0x1dda:  push   %ebp
08102db9 +0x1ddb:  mov    %esp,%ebp
08102dbb +0x1ddd:  push   %esi
08102dbc +0x1dde:  push   %ebx
08102dbd +0x1ddf:  sub    $0x20,%esp
08102dc0 +0x1de2:  lea    -0x9(%ebp),%eax
08102dc3 +0x1de5:  mov    0x8(%ebp),%edx
08102dc6 +0x1de8:  mov    %edx,0x4(%esp)
08102dca +0x1dec:  mov    %eax,(%esp)
08102dcd +0x1def:  call   08102efc <+0x1f1e>
08102dd2 +0x1df4:  sub    $0x4,%esp
08102dd5 +0x1df7:  lea    -0x9(%ebp),%eax
08102dd8 +0x1dfa:  movl   $0x0,0x8(%esp)
08102de0 +0x1e02:  mov    0xc(%ebp),%edx
08102de3 +0x1e05:  mov    %edx,0x4(%esp)
08102de7 +0x1e09:  mov    %eax,(%esp)
08102dea +0x1e0c:  call   081036b0 <+0x26d2>
08102def +0x1e11:  mov    %eax,%ebx
08102df1 +0x1e13:  lea    -0x9(%ebp),%eax
08102df4 +0x1e16:  mov    %eax,(%esp)
08102df7 +0x1e19:  call   08102f2e <+0x1f50>
08102dfc +0x1e1e:  mov    %ebx,%eax
08102dfe +0x1e20:  lea    -0x8(%ebp),%esp
08102e01 +0x1e23:  add    $0x0,%esp
08102e04 +0x1e26:  pop    %ebx
08102e05 +0x1e27:  pop    %esi
08102e06 +0x1e28:  pop    %ebp
08102e07 +0x1e29:  ret
08102e08 +0x1e2a:  mov    %edx,%ebx
08102e0a +0x1e2c:  mov    %eax,%esi
08102e0c +0x1e2e:  lea    -0x9(%ebp),%eax
08102e0f +0x1e31:  mov    %eax,(%esp)
08102e12 +0x1e34:  call   08102f2e <+0x1f50>
08102e17 +0x1e39:  mov    %esi,%eax
08102e19 +0x1e3b:  mov    %ebx,%edx
08102e1b +0x1e3d:  mov    %eax,(%esp)
08102e1e +0x1e40:  call   08ae3750 <_Unwind_Resume>
08102e23 +0x1e45:  nop
08102e24 +0x1e46:  push   %ebp
08102e25 +0x1e47:  mov    %esp,%ebp
08102e27 +0x1e49:  push   %esi
08102e28 +0x1e4a:  push   %ebx
08102e29 +0x1e4b:  sub    $0x20,%esp
08102e2c +0x1e4e:  mov    0xc(%ebp),%eax
08102e2f +0x1e51:  mov    %eax,-0xc(%ebp)
08102e32 +0x1e54:  jmp    08102e48 <+0x1e6a>
08102e34 +0x1e56:  mov    0x8(%ebp),%eax
08102e37 +0x1e59:  mov    %eax,(%esp)
08102e3a +0x1e5c:  call   081036e8 <+0x270a>
08102e3f +0x1e61:  mov    -0xc(%ebp),%edx
08102e42 +0x1e64:  mov    %eax,(%edx)
08102e44 +0x1e66:  addl   $0x4,-0xc(%ebp)
08102e48 +0x1e6a:  mov    -0xc(%ebp),%eax
08102e4b +0x1e6d:  cmp    0x10(%ebp),%eax
08102e4e +0x1e70:  setb   %al
08102e51 +0x1e73:  test   %al,%al
08102e53 +0x1e75:  jne    08102e34 <+0x1e56>
08102e55 +0x1e77:  jmp    08102e92 <+0x1eb4>
08102e57 +0x1e79:  mov    %eax,(%esp)
08102e5a +0x1e7c:  call   08725ce0 <__cxa_begin_catch>
08102e5f +0x1e81:  mov    -0xc(%ebp),%eax
08102e62 +0x1e84:  mov    %eax,0x8(%esp)
08102e66 +0x1e88:  mov    0xc(%ebp),%eax
08102e69 +0x1e8b:  mov    %eax,0x4(%esp)
08102e6d +0x1e8f:  mov    0x8(%ebp),%eax
08102e70 +0x1e92:  mov    %eax,(%esp)
08102e73 +0x1e95:  call   081028bc <+0x18de>
08102e78 +0x1e9a:  call   08724be0 <__cxa_rethrow>
08102e7d +0x1e9f:  mov    %edx,%ebx
08102e7f +0x1ea1:  mov    %eax,%esi
08102e81 +0x1ea3:  call   08725c30 <__cxa_end_catch>
08102e86 +0x1ea8:  mov    %esi,%eax
08102e88 +0x1eaa:  mov    %ebx,%edx
08102e8a +0x1eac:  mov    %eax,(%esp)
08102e8d +0x1eaf:  call   08ae3750 <_Unwind_Resume>
08102e92 +0x1eb4:  add    $0x20,%esp
08102e95 +0x1eb7:  pop    %ebx
08102e96 +0x1eb8:  pop    %esi
08102e97 +0x1eb9:  pop    %ebp
08102e98 +0x1eba:  ret
08102e99 +0x1ebb:  nop
08102e9a +0x1ebc:  push   %ebp
08102e9b +0x1ebd:  mov    %esp,%ebp
08102e9d +0x1ebf:  push   %ebx
08102e9e +0x1ec0:  sub    $0x4,%esp
08102ea1 +0x1ec3:  mov    0x8(%ebp),%eax
08102ea4 +0x1ec6:  mov    0xc(%ebp),%edx
08102ea7 +0x1ec9:  mov    %edx,0xc(%eax)
08102eaa +0x1ecc:  mov    0xc(%ebp),%eax
08102ead +0x1ecf:  mov    (%eax),%edx
08102eaf +0x1ed1:  mov    0x8(%ebp),%eax
08102eb2 +0x1ed4:  mov    %edx,0x4(%eax)
08102eb5 +0x1ed7:  mov    0x8(%ebp),%eax
08102eb8 +0x1eda:  mov    0x4(%eax),%ebx
08102ebb +0x1edd:  call   08102c93 <+0x1cb5>
08102ec0 +0x1ee2:  shl    $0x2,%eax
08102ec3 +0x1ee5:  lea    (%ebx,%eax,1),%edx
08102ec6 +0x1ee8:  mov    0x8(%ebp),%eax
08102ec9 +0x1eeb:  mov    %edx,0x8(%eax)
08102ecc +0x1eee:  add    $0x4,%esp
08102ecf +0x1ef1:  pop    %ebx
08102ed0 +0x1ef2:  pop    %ebp
08102ed1 +0x1ef3:  ret
08102ed2 +0x1ef4:  push   %ebp
08102ed3 +0x1ef5:  mov    %esp,%ebp
08102ed5 +0x1ef7:  sub    $0x18,%esp
08102ed8 +0x1efa:  movl   $0x4,(%esp)
08102edf +0x1f01:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
08102ee4 +0x1f06:  mov    0x8(%ebp),%edx
08102ee7 +0x1f09:  mov    %eax,0x8(%esp)
08102eeb +0x1f0d:  mov    0xc(%ebp),%eax
08102eee +0x1f10:  mov    %eax,0x4(%esp)
08102ef2 +0x1f14:  mov    %edx,(%esp)
08102ef5 +0x1f17:  call   08103714 <+0x2736>
08102efa +0x1f1c:  leave
08102efb +0x1f1d:  ret
08102efc +0x1f1e:  push   %ebp
08102efd +0x1f1f:  mov    %esp,%ebp
08102eff +0x1f21:  push   %esi
08102f00 +0x1f22:  push   %ebx
08102f01 +0x1f23:  sub    $0x10,%esp
08102f04 +0x1f26:  mov    0x8(%ebp),%ebx
08102f07 +0x1f29:  mov    %ebx,%esi
08102f09 +0x1f2b:  mov    0xc(%ebp),%eax
08102f0c +0x1f2e:  mov    %eax,(%esp)
08102f0f +0x1f31:  call   08103728 <+0x274a>
08102f14 +0x1f36:  mov    %eax,0x4(%esp)
08102f18 +0x1f3a:  mov    %esi,(%esp)
08102f1b +0x1f3d:  call   08103730 <+0x2752>
08102f20 +0x1f42:  mov    %ebx,%eax
08102f22 +0x1f44:  mov    %ebx,%eax
08102f24 +0x1f46:  add    $0x10,%esp
08102f27 +0x1f49:  pop    %ebx
08102f28 +0x1f4a:  pop    %esi
08102f29 +0x1f4b:  pop    %ebp
08102f2a +0x1f4c:  ret    $0x4
08102f2d +0x1f4f:  nop
08102f2e +0x1f50:  push   %ebp
08102f2f +0x1f51:  mov    %esp,%ebp
08102f31 +0x1f53:  sub    $0x18,%esp
08102f34 +0x1f56:  mov    0x8(%ebp),%eax
08102f37 +0x1f59:  mov    %eax,(%esp)
08102f3a +0x1f5c:  call   08103744 <+0x2766>
08102f3f +0x1f61:  leave
08102f40 +0x1f62:  ret
08102f41 +0x1f63:  nop
08102f42 +0x1f64:  push   %ebp
08102f43 +0x1f65:  mov    %esp,%ebp
08102f45 +0x1f67:  sub    $0x18,%esp
08102f48 +0x1f6a:  mov    0xc(%ebp),%eax
08102f4b +0x1f6d:  mov    %eax,(%esp)
08102f4e +0x1f70:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08102f53 +0x1f75:  leave
08102f54 +0x1f76:  ret
08102f55 +0x1f77:  nop
08102f56 +0x1f78:  push   %ebp
08102f57 +0x1f79:  mov    %esp,%ebp
08102f59 +0x1f7b:  sub    $0x18,%esp
08102f5c +0x1f7e:  mov    0x8(%ebp),%eax
08102f5f +0x1f81:  mov    0xc(%ebp),%edx
08102f62 +0x1f84:  mov    %edx,0x4(%esp)
08102f66 +0x1f88:  mov    %eax,(%esp)
08102f69 +0x1f8b:  call   0810374a <+0x276c>
08102f6e +0x1f90:  mov    0x8(%ebp),%eax
08102f71 +0x1f93:  movl   $0x0,(%eax)
08102f77 +0x1f99:  mov    0x8(%ebp),%eax
08102f7a +0x1f9c:  movl   $0x0,0x4(%eax)
08102f81 +0x1fa3:  mov    0x8(%ebp),%eax
08102f84 +0x1fa6:  add    $0x8,%eax
08102f87 +0x1fa9:  mov    %eax,(%esp)
08102f8a +0x1fac:  call   08102d86 <+0x1da8>
08102f8f +0x1fb1:  mov    0x8(%ebp),%eax
08102f92 +0x1fb4:  add    $0x18,%eax
08102f95 +0x1fb7:  mov    %eax,(%esp)
08102f98 +0x1fba:  call   08102d86 <+0x1da8>
08102f9d +0x1fbf:  leave
08102f9e +0x1fc0:  ret
08102f9f +0x1fc1:  push   %ebp
08102fa0 +0x1fc2:  mov    %esp,%ebp
08102fa2 +0x1fc4:  sub    $0x28,%esp
08102fa5 +0x1fc7:  mov    0x8(%ebp),%eax
08102fa8 +0x1fca:  mov    %eax,(%esp)
08102fab +0x1fcd:  call   08103764 <+0x2786>
08102fb0 +0x1fd2:  mov    %eax,0x4(%esp)
08102fb4 +0x1fd6:  lea    -0x18(%ebp),%eax
08102fb7 +0x1fd9:  mov    %eax,(%esp)
08102fba +0x1fdc:  call   08102042 <+0x1064>
08102fbf +0x1fe1:  mov    0xc(%ebp),%eax
08102fc2 +0x1fe4:  mov    %eax,(%esp)
08102fc5 +0x1fe7:  call   08103764 <+0x2786>
08102fca +0x1fec:  mov    0x8(%ebp),%edx
08102fcd +0x1fef:  mov    (%eax),%ecx
08102fcf +0x1ff1:  mov    %ecx,(%edx)
08102fd1 +0x1ff3:  mov    0x4(%eax),%ecx
08102fd4 +0x1ff6:  mov    %ecx,0x4(%edx)
08102fd7 +0x1ff9:  mov    0x8(%eax),%ecx
08102fda +0x1ffc:  mov    %ecx,0x8(%edx)
08102fdd +0x1fff:  mov    0xc(%eax),%eax
08102fe0 +0x2002:  mov    %eax,0xc(%edx)
08102fe3 +0x2005:  lea    -0x18(%ebp),%eax
08102fe6 +0x2008:  mov    %eax,(%esp)
08102fe9 +0x200b:  call   08103764 <+0x2786>
08102fee +0x2010:  mov    0xc(%ebp),%edx
08102ff1 +0x2013:  mov    (%eax),%ecx
08102ff3 +0x2015:  mov    %ecx,(%edx)
08102ff5 +0x2017:  mov    0x4(%eax),%ecx
08102ff8 +0x201a:  mov    %ecx,0x4(%edx)
08102ffb +0x201d:  mov    0x8(%eax),%ecx
08102ffe +0x2020:  mov    %ecx,0x8(%edx)
08103001 +0x2023:  mov    0xc(%eax),%eax
08103004 +0x2026:  mov    %eax,0xc(%edx)
08103007 +0x2029:  leave
08103008 +0x202a:  ret
08103009 +0x202b:  push   %ebp
0810300a +0x202c:  mov    %esp,%ebp
0810300c +0x202e:  sub    $0x28,%esp
0810300f +0x2031:  mov    0x8(%ebp),%eax
08103012 +0x2034:  mov    %eax,(%esp)
08103015 +0x2037:  call   0810376c <+0x278e>
0810301a +0x203c:  mov    (%eax),%eax
0810301c +0x203e:  mov    %eax,-0xc(%ebp)
0810301f +0x2041:  mov    0xc(%ebp),%eax
08103022 +0x2044:  mov    %eax,(%esp)
08103025 +0x2047:  call   0810376c <+0x278e>
0810302a +0x204c:  mov    (%eax),%edx
0810302c +0x204e:  mov    0x8(%ebp),%eax
0810302f +0x2051:  mov    %edx,(%eax)
08103031 +0x2053:  lea    -0xc(%ebp),%eax
08103034 +0x2056:  mov    %eax,(%esp)
08103037 +0x2059:  call   0810376c <+0x278e>
0810303c +0x205e:  mov    (%eax),%edx
0810303e +0x2060:  mov    0xc(%ebp),%eax
08103041 +0x2063:  mov    %edx,(%eax)
08103043 +0x2065:  leave
08103044 +0x2066:  ret
08103045 +0x2067:  nop
08103046 +0x2068:  push   %ebp
08103047 +0x2069:  mov    %esp,%ebp
08103049 +0x206b:  sub    $0x18,%esp
0810304c +0x206e:  mov    0x8(%ebp),%eax
0810304f +0x2071:  mov    %eax,(%esp)
08103052 +0x2074:  call   08103774 <+0x2796>
08103057 +0x2079:  leave
08103058 +0x207a:  ret
08103059 +0x207b:  nop
0810305a +0x207c:  push   %ebp
0810305b +0x207d:  mov    %esp,%ebp
0810305d +0x207f:  sub    $0x18,%esp
08103060 +0x2082:  mov    0xc(%ebp),%eax
08103063 +0x2085:  mov    %eax,(%esp)
08103066 +0x2088:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810306b +0x208d:  leave
0810306c +0x208e:  ret
0810306d +0x208f:  nop
0810306e +0x2090:  push   %ebp
0810306f +0x2091:  mov    %esp,%ebp
08103071 +0x2093:  sub    $0x18,%esp
08103074 +0x2096:  mov    0x8(%ebp),%eax
08103077 +0x2099:  mov    %eax,(%esp)
0810307a +0x209c:  call   0810377a <+0x279c>
0810307f +0x20a1:  leave
08103080 +0x20a2:  ret
08103081 +0x20a3:  nop
08103082 +0x20a4:  push   %ebp
08103083 +0x20a5:  mov    %esp,%ebp
08103085 +0x20a7:  mov    0x8(%ebp),%eax
08103088 +0x20aa:  movl   $0x0,0x4(%eax)
0810308f +0x20b1:  mov    0x8(%ebp),%eax
08103092 +0x20b4:  movl   $0x0,0x8(%eax)
08103099 +0x20bb:  mov    0x8(%ebp),%eax
0810309c +0x20be:  lea    0x4(%eax),%edx
0810309f +0x20c1:  mov    0x8(%ebp),%eax
081030a2 +0x20c4:  mov    %edx,0xc(%eax)
081030a5 +0x20c7:  mov    0x8(%ebp),%eax
081030a8 +0x20ca:  lea    0x4(%eax),%edx
081030ab +0x20cd:  mov    0x8(%ebp),%eax
081030ae +0x20d0:  mov    %edx,0x10(%eax)
081030b1 +0x20d3:  pop    %ebp
081030b2 +0x20d4:  ret
081030b3 +0x20d5:  nop
081030b4 +0x20d6:  push   %ebp
081030b5 +0x20d7:  mov    %esp,%ebp
081030b7 +0x20d9:  mov    0x8(%ebp),%eax
081030ba +0x20dc:  pop    %ebp
081030bb +0x20dd:  ret
081030bc +0x20de:  push   %ebp
081030bd +0x20df:  mov    %esp,%ebp
081030bf +0x20e1:  pop    %ebp
081030c0 +0x20e2:  ret
081030c1 +0x20e3:  nop
081030c2 +0x20e4:  push   %ebp
081030c3 +0x20e5:  mov    %esp,%ebp
081030c5 +0x20e7:  sub    $0x18,%esp
081030c8 +0x20ea:  mov    0xc(%ebp),%eax
081030cb +0x20ed:  mov    %eax,(%esp)
081030ce +0x20f0:  call   081030bc <+0x20de>
081030d3 +0x20f5:  leave
081030d4 +0x20f6:  ret
081030d5 +0x20f7:  nop
081030d6 +0x20f8:  push   %ebp
081030d7 +0x20f9:  mov    %esp,%ebp
081030d9 +0x20fb:  sub    $0x18,%esp
081030dc +0x20fe:  mov    0x8(%ebp),%eax
081030df +0x2101:  movl   $0x1,0x8(%esp)
081030e7 +0x2109:  mov    0xc(%ebp),%edx
081030ea +0x210c:  mov    %edx,0x4(%esp)
081030ee +0x2110:  mov    %eax,(%esp)
081030f1 +0x2113:  call   08103780 <+0x27a2>
081030f6 +0x2118:  leave
081030f7 +0x2119:  ret
081030f8 +0x211a:  push   %ebp
081030f9 +0x211b:  mov    %esp,%ebp
081030fb +0x211d:  mov    0x8(%ebp),%eax
081030fe +0x2120:  pop    %ebp
081030ff +0x2121:  ret
08103100 +0x2122:  push   %ebp
08103101 +0x2123:  mov    %esp,%ebp
08103103 +0x2125:  push   %esi
08103104 +0x2126:  push   %ebx
08103105 +0x2127:  sub    $0x20,%esp
08103108 +0x212a:  mov    0x8(%ebp),%eax
0810310b +0x212d:  mov    %eax,(%esp)
0810310e +0x2130:  call   08103794 <+0x27b6>
08103113 +0x2135:  mov    %eax,-0xc(%ebp)
08103116 +0x2138:  mov    0xc(%ebp),%eax
08103119 +0x213b:  mov    %eax,(%esp)
0810311c +0x213e:  call   081030f8 <+0x211a>
08103121 +0x2143:  mov    %eax,%ebx
08103123 +0x2145:  mov    0x8(%ebp),%eax
08103126 +0x2148:  mov    %eax,(%esp)
08103129 +0x214b:  call   08102a24 <+0x1a46>
0810312e +0x2150:  mov    %ebx,0x8(%esp)
08103132 +0x2154:  mov    -0xc(%ebp),%edx
08103135 +0x2157:  mov    %edx,0x4(%esp)
08103139 +0x215b:  mov    %eax,(%esp)
0810313c +0x215e:  call   081037b8 <+0x27da>
08103141 +0x2163:  jmp    08103177 <+0x2199>
08103143 +0x2165:  mov    %eax,(%esp)
08103146 +0x2168:  call   08725ce0 <__cxa_begin_catch>
0810314b +0x216d:  mov    0x8(%ebp),%eax
0810314e +0x2170:  mov    -0xc(%ebp),%edx
08103151 +0x2173:  mov    %edx,0x4(%esp)
08103155 +0x2177:  mov    %eax,(%esp)
08103158 +0x217a:  call   08102a46 <+0x1a68>
0810315d +0x217f:  call   08724be0 <__cxa_rethrow>
08103162 +0x2184:  mov    %edx,%ebx
08103164 +0x2186:  mov    %eax,%esi
08103166 +0x2188:  call   08725c30 <__cxa_end_catch>
0810316b +0x218d:  mov    %esi,%eax
0810316d +0x218f:  mov    %ebx,%edx
0810316f +0x2191:  mov    %eax,(%esp)
08103172 +0x2194:  call   08ae3750 <_Unwind_Resume>
08103177 +0x2199:  mov    -0xc(%ebp),%eax
0810317a +0x219c:  add    $0x20,%esp
0810317d +0x219f:  pop    %ebx
0810317e +0x21a0:  pop    %esi
0810317f +0x21a1:  pop    %ebp
08103180 +0x21a2:  ret
08103181 +0x21a3:  nop
08103182 +0x21a4:  push   %ebp
08103183 +0x21a5:  mov    %esp,%ebp
08103185 +0x21a7:  sub    $0x28,%esp
08103188 +0x21aa:  mov    0x8(%ebp),%eax
0810318b +0x21ad:  mov    0x18(%eax),%edx
0810318e +0x21b0:  mov    0x8(%ebp),%eax
08103191 +0x21b3:  mov    0x20(%eax),%eax
08103194 +0x21b6:  sub    $0x4,%eax
08103197 +0x21b9:  cmp    %eax,%edx
08103199 +0x21bb:  je     081031d8 <+0x21fa>
0810319b +0x21bd:  mov    0xc(%ebp),%eax
0810319e +0x21c0:  mov    %eax,(%esp)
081031a1 +0x21c3:  call   081037f7 <+0x2819>
081031a6 +0x21c8:  mov    (%eax),%eax
081031a8 +0x21ca:  mov    %eax,-0x10(%ebp)
081031ab +0x21cd:  mov    0x8(%ebp),%eax
081031ae +0x21d0:  mov    0x18(%eax),%edx
081031b1 +0x21d3:  mov    0x8(%ebp),%eax
081031b4 +0x21d6:  lea    -0x10(%ebp),%ecx
081031b7 +0x21d9:  mov    %ecx,0x8(%esp)
081031bb +0x21dd:  mov    %edx,0x4(%esp)
081031bf +0x21e1:  mov    %eax,(%esp)
081031c2 +0x21e4:  call   08103800 <+0x2822>
081031c7 +0x21e9:  mov    0x8(%ebp),%eax
081031ca +0x21ec:  mov    0x18(%eax),%eax
081031cd +0x21ef:  lea    0x4(%eax),%edx
081031d0 +0x21f2:  mov    0x8(%ebp),%eax
081031d3 +0x21f5:  mov    %edx,0x18(%eax)
081031d6 +0x21f8:  jmp    081031fa <+0x221c>
081031d8 +0x21fa:  mov    0xc(%ebp),%eax
081031db +0x21fd:  mov    %eax,(%esp)
081031de +0x2200:  call   081037f7 <+0x2819>
081031e3 +0x2205:  mov    (%eax),%eax
081031e5 +0x2207:  mov    %eax,-0xc(%ebp)
081031e8 +0x220a:  lea    -0xc(%ebp),%eax
081031eb +0x220d:  mov    %eax,0x4(%esp)
081031ef +0x2211:  mov    0x8(%ebp),%eax
081031f2 +0x2214:  mov    %eax,(%esp)
081031f5 +0x2217:  call   08103836 <+0x2858>
081031fa +0x221c:  leave
081031fb +0x221d:  ret
081031fc +0x221e:  push   %ebp
081031fd +0x221f:  mov    %esp,%ebp
081031ff +0x2221:  push   %esi
08103200 +0x2222:  push   %ebx
08103201 +0x2223:  sub    $0x20,%esp
08103204 +0x2226:  mov    0x8(%ebp),%esi
08103207 +0x2229:  mov    0xc(%ebp),%eax
0810320a +0x222c:  mov    %eax,(%esp)
0810320d +0x222f:  call   081038c0 <+0x28e2>
08103212 +0x2234:  mov    %eax,%ebx
08103214 +0x2236:  mov    0xc(%ebp),%eax
08103217 +0x2239:  mov    %eax,(%esp)
0810321a +0x223c:  call   081021b4 <+0x11d6>
0810321f +0x2241:  mov    0x10(%ebp),%edx
08103222 +0x2244:  mov    %edx,0x10(%esp)
08103226 +0x2248:  mov    %ebx,0xc(%esp)
0810322a +0x224c:  mov    %eax,0x8(%esp)
0810322e +0x2250:  mov    0xc(%ebp),%eax
08103231 +0x2253:  mov    %eax,0x4(%esp)
08103235 +0x2257:  mov    %esi,(%esp)
08103238 +0x225a:  call   081038cc <+0x28ee>
0810323d +0x225f:  sub    $0x4,%esp
08103240 +0x2262:  mov    %esi,%eax
08103242 +0x2264:  lea    -0x8(%ebp),%esp
08103245 +0x2267:  add    $0x0,%esp
08103248 +0x226a:  pop    %ebx
08103249 +0x226b:  pop    %esi
0810324a +0x226c:  pop    %ebp
0810324b +0x226d:  ret    $0x4
0810324e +0x2270:  push   %ebp
0810324f +0x2271:  mov    %esp,%ebp
08103251 +0x2273:  mov    0x8(%ebp),%eax
08103254 +0x2276:  pop    %ebp
08103255 +0x2277:  ret    $0x4
08103258 +0x227a:  push   %ebp
08103259 +0x227b:  mov    %esp,%ebp
0810325b +0x227d:  push   %ebx
0810325c +0x227e:  sub    $0x14,%esp
0810325f +0x2281:  mov    0x8(%ebp),%ebx
08103262 +0x2284:  mov    0xc(%ebp),%eax
08103265 +0x2287:  add    $0x4,%eax
08103268 +0x228a:  mov    %eax,0x4(%esp)
0810326c +0x228e:  mov    %ebx,(%esp)
0810326f +0x2291:  call   08103948 <+0x296a>
08103274 +0x2296:  mov    %ebx,%eax
08103276 +0x2298:  add    $0x14,%esp
08103279 +0x229b:  pop    %ebx
0810327a +0x229c:  pop    %ebp
0810327b +0x229d:  ret    $0x4
0810327e +0x22a0:  push   %ebp
0810327f +0x22a1:  mov    %esp,%ebp
08103281 +0x22a3:  mov    0x8(%ebp),%eax
08103284 +0x22a6:  pop    %ebp
08103285 +0x22a7:  ret
08103286 +0x22a8:  push   %ebp
08103287 +0x22a9:  mov    %esp,%ebp
08103289 +0x22ab:  mov    0xc(%ebp),%eax
0810328c +0x22ae:  mov    (%eax),%edx
0810328e +0x22b0:  mov    0x8(%ebp),%eax
08103291 +0x22b3:  mov    %edx,(%eax)
08103293 +0x22b5:  pop    %ebp
08103294 +0x22b6:  ret
08103295 +0x22b7:  nop
08103296 +0x22b8:  push   %ebp
08103297 +0x22b9:  mov    %esp,%ebp
08103299 +0x22bb:  push   %esi
0810329a +0x22bc:  push   %ebx
0810329b +0x22bd:  sub    $0x50,%esp
0810329e +0x22c0:  mov    0x8(%ebp),%ebx
081032a1 +0x22c3:  mov    0x10(%ebp),%esi
081032a4 +0x22c6:  mov    0xc(%ebp),%eax
081032a7 +0x22c9:  mov    %eax,(%esp)
081032aa +0x22cc:  call   081038c0 <+0x28e2>
081032af +0x22d1:  cmp    %eax,%esi
081032b1 +0x22d3:  sete   %al
081032b4 +0x22d6:  test   %al,%al
081032b6 +0x22d8:  je     08103378 <+0x239a>
081032bc +0x22de:  mov    0xc(%ebp),%eax
081032bf +0x22e1:  mov    %eax,(%esp)
081032c2 +0x22e4:  call   0810398c <+0x29ae>
081032c7 +0x22e9:  test   %eax,%eax
081032c9 +0x22eb:  je     08103312 <+0x2334>
081032cb +0x22ed:  mov    0x14(%ebp),%eax
081032ce +0x22f0:  mov    %eax,0x4(%esp)
081032d2 +0x22f4:  lea    -0x29(%ebp),%eax
081032d5 +0x22f7:  mov    %eax,(%esp)
081032d8 +0x22fa:  call   08103984 <+0x29a6>
081032dd +0x22ff:  mov    %eax,%esi
081032df +0x2301:  mov    0xc(%ebp),%eax
081032e2 +0x2304:  mov    %eax,(%esp)
081032e5 +0x2307:  call   08103956 <+0x2978>
081032ea +0x230c:  mov    (%eax),%eax
081032ec +0x230e:  mov    %eax,(%esp)
081032ef +0x2311:  call   08103961 <+0x2983>
081032f4 +0x2316:  mov    0xc(%ebp),%edx
081032f7 +0x2319:  mov    %esi,0x8(%esp)
081032fb +0x231d:  mov    %eax,0x4(%esp)
081032ff +0x2321:  mov    %edx,(%esp)
08103302 +0x2324:  call   08102bd2 <+0x1bf4>
08103307 +0x2329:  test   %al,%al
08103309 +0x232b:  je     08103312 <+0x2334>
0810330b +0x232d:  mov    $0x1,%eax
08103310 +0x2332:  jmp    08103317 <+0x2339>
08103312 +0x2334:  mov    $0x0,%eax
08103317 +0x2339:  test   %al,%al
08103319 +0x233b:  je     08103352 <+0x2374>
0810331b +0x233d:  mov    0xc(%ebp),%eax
0810331e +0x2340:  mov    %eax,(%esp)
08103321 +0x2343:  call   08103956 <+0x2978>
08103326 +0x2348:  mov    (%eax),%eax
08103328 +0x234a:  mov    0x14(%ebp),%edx
0810332b +0x234d:  mov    %edx,0x10(%esp)
0810332f +0x2351:  mov    %eax,0xc(%esp)
08103333 +0x2355:  movl   $0x0,0x8(%esp)
0810333b +0x235d:  mov    0xc(%ebp),%eax
0810333e +0x2360:  mov    %eax,0x4(%esp)
08103342 +0x2364:  mov    %ebx,(%esp)
08103345 +0x2367:  call   08103998 <+0x29ba>
0810334a +0x236c:  sub    $0x4,%esp
0810334d +0x236f:  jmp    0810364d <+0x266f>
08103352 +0x2374:  lea    -0x28(%ebp),%eax
08103355 +0x2377:  mov    0x14(%ebp),%edx
08103358 +0x237a:  mov    %edx,0x8(%esp)
0810335c +0x237e:  mov    0xc(%ebp),%edx
0810335f +0x2381:  mov    %edx,0x4(%esp)
08103363 +0x2385:  mov    %eax,(%esp)
08103366 +0x2388:  call   08103a60 <+0x2a82>
0810336b +0x238d:  sub    $0x4,%esp
0810336e +0x2390:  mov    -0x28(%ebp),%eax
08103371 +0x2393:  mov    %eax,(%ebx)
08103373 +0x2395:  jmp    0810364d <+0x266f>
08103378 +0x239a:  mov    0x10(%ebp),%eax
0810337b +0x239d:  mov    %eax,(%esp)
0810337e +0x23a0:  call   08103961 <+0x2983>
08103383 +0x23a5:  mov    %eax,%esi
08103385 +0x23a7:  mov    0x14(%ebp),%eax
08103388 +0x23aa:  mov    %eax,0x4(%esp)
0810338c +0x23ae:  lea    -0x1e(%ebp),%eax
0810338f +0x23b1:  mov    %eax,(%esp)
08103392 +0x23b4:  call   08103984 <+0x29a6>
08103397 +0x23b9:  mov    0xc(%ebp),%edx
0810339a +0x23bc:  mov    %esi,0x8(%esp)
0810339e +0x23c0:  mov    %eax,0x4(%esp)
081033a2 +0x23c4:  mov    %edx,(%esp)
081033a5 +0x23c7:  call   08102bd2 <+0x1bf4>
081033aa +0x23cc:  test   %al,%al
081033ac +0x23ce:  je     081034e4 <+0x2506>
081033b2 +0x23d4:  mov    0x10(%ebp),%eax
081033b5 +0x23d7:  mov    %eax,-0x30(%ebp)
081033b8 +0x23da:  mov    0x10(%ebp),%esi
081033bb +0x23dd:  mov    0xc(%ebp),%eax
081033be +0x23e0:  mov    %eax,(%esp)
081033c1 +0x23e3:  call   08103c30 <+0x2c52>
081033c6 +0x23e8:  mov    (%eax),%eax
081033c8 +0x23ea:  cmp    %eax,%esi
081033ca +0x23ec:  sete   %al
081033cd +0x23ef:  test   %al,%al
081033cf +0x23f1:  je     08103411 <+0x2433>
081033d1 +0x23f3:  mov    0xc(%ebp),%eax
081033d4 +0x23f6:  mov    %eax,(%esp)
081033d7 +0x23f9:  call   08103c30 <+0x2c52>
081033dc +0x23fe:  mov    (%eax),%esi
081033de +0x2400:  mov    0xc(%ebp),%eax
081033e1 +0x2403:  mov    %eax,(%esp)
081033e4 +0x2406:  call   08103c30 <+0x2c52>
081033e9 +0x240b:  mov    (%eax),%eax
081033eb +0x240d:  mov    0x14(%ebp),%edx
081033ee +0x2410:  mov    %edx,0x10(%esp)
081033f2 +0x2414:  mov    %esi,0xc(%esp)
081033f6 +0x2418:  mov    %eax,0x8(%esp)
081033fa +0x241c:  mov    0xc(%ebp),%eax
081033fd +0x241f:  mov    %eax,0x4(%esp)
08103401 +0x2423:  mov    %ebx,(%esp)
08103404 +0x2426:  call   08103998 <+0x29ba>
08103409 +0x242b:  sub    $0x4,%esp
0810340c +0x242e:  jmp    0810364d <+0x266f>
08103411 +0x2433:  mov    0x14(%ebp),%eax
08103414 +0x2436:  mov    %eax,0x4(%esp)
08103418 +0x243a:  lea    -0x1d(%ebp),%eax
0810341b +0x243d:  mov    %eax,(%esp)
0810341e +0x2440:  call   08103984 <+0x29a6>
08103423 +0x2445:  mov    %eax,%esi
08103425 +0x2447:  lea    -0x30(%ebp),%eax
08103428 +0x244a:  mov    %eax,(%esp)
0810342b +0x244d:  call   08103c3c <+0x2c5e>
08103430 +0x2452:  mov    (%eax),%eax
08103432 +0x2454:  mov    %eax,(%esp)
08103435 +0x2457:  call   08103961 <+0x2983>
0810343a +0x245c:  mov    0xc(%ebp),%edx
0810343d +0x245f:  mov    %esi,0x8(%esp)
08103441 +0x2463:  mov    %eax,0x4(%esp)
08103445 +0x2467:  mov    %edx,(%esp)
08103448 +0x246a:  call   08102bd2 <+0x1bf4>
0810344d +0x246f:  test   %al,%al
0810344f +0x2471:  je     081034be <+0x24e0>
08103451 +0x2473:  mov    -0x30(%ebp),%eax
08103454 +0x2476:  mov    %eax,(%esp)
08103457 +0x2479:  call   08103c59 <+0x2c7b>
0810345c +0x247e:  test   %eax,%eax
0810345e +0x2480:  sete   %al
08103461 +0x2483:  test   %al,%al
08103463 +0x2485:  je     08103492 <+0x24b4>
08103465 +0x2487:  mov    -0x30(%ebp),%eax
08103468 +0x248a:  mov    0x14(%ebp),%edx
0810346b +0x248d:  mov    %edx,0x10(%esp)
0810346f +0x2491:  mov    %eax,0xc(%esp)
08103473 +0x2495:  movl   $0x0,0x8(%esp)
0810347b +0x249d:  mov    0xc(%ebp),%eax
0810347e +0x24a0:  mov    %eax,0x4(%esp)
08103482 +0x24a4:  mov    %ebx,(%esp)
08103485 +0x24a7:  call   08103998 <+0x29ba>
0810348a +0x24ac:  sub    $0x4,%esp
0810348d +0x24af:  jmp    0810364d <+0x266f>
08103492 +0x24b4:  mov    0x10(%ebp),%edx
08103495 +0x24b7:  mov    0x10(%ebp),%eax
08103498 +0x24ba:  mov    0x14(%ebp),%ecx
0810349b +0x24bd:  mov    %ecx,0x10(%esp)
0810349f +0x24c1:  mov    %edx,0xc(%esp)
081034a3 +0x24c5:  mov    %eax,0x8(%esp)
081034a7 +0x24c9:  mov    0xc(%ebp),%eax
081034aa +0x24cc:  mov    %eax,0x4(%esp)
081034ae +0x24d0:  mov    %ebx,(%esp)
081034b1 +0x24d3:  call   08103998 <+0x29ba>
081034b6 +0x24d8:  sub    $0x4,%esp
081034b9 +0x24db:  jmp    0810364d <+0x266f>
081034be +0x24e0:  lea    -0x1c(%ebp),%eax
081034c1 +0x24e3:  mov    0x14(%ebp),%edx
081034c4 +0x24e6:  mov    %edx,0x8(%esp)
081034c8 +0x24ea:  mov    0xc(%ebp),%edx
081034cb +0x24ed:  mov    %edx,0x4(%esp)
081034cf +0x24f1:  mov    %eax,(%esp)
081034d2 +0x24f4:  call   08103a60 <+0x2a82>
081034d7 +0x24f9:  sub    $0x4,%esp
081034da +0x24fc:  mov    -0x1c(%ebp),%eax
081034dd +0x24ff:  mov    %eax,(%ebx)
081034df +0x2501:  jmp    0810364d <+0x266f>
081034e4 +0x2506:  mov    0x14(%ebp),%eax
081034e7 +0x2509:  mov    %eax,0x4(%esp)
081034eb +0x250d:  lea    -0x12(%ebp),%eax
081034ee +0x2510:  mov    %eax,(%esp)
081034f1 +0x2513:  call   08103984 <+0x29a6>
081034f6 +0x2518:  mov    %eax,%esi
081034f8 +0x251a:  mov    0x10(%ebp),%eax
081034fb +0x251d:  mov    %eax,(%esp)
081034fe +0x2520:  call   08103961 <+0x2983>
08103503 +0x2525:  mov    0xc(%ebp),%edx
08103506 +0x2528:  mov    %esi,0x8(%esp)
0810350a +0x252c:  mov    %eax,0x4(%esp)
0810350e +0x2530:  mov    %edx,(%esp)
08103511 +0x2533:  call   08102bd2 <+0x1bf4>
08103516 +0x2538:  test   %al,%al
08103518 +0x253a:  je     0810363e <+0x2660>
0810351e +0x2540:  mov    0x10(%ebp),%eax
08103521 +0x2543:  mov    %eax,-0x34(%ebp)
08103524 +0x2546:  mov    0x10(%ebp),%esi
08103527 +0x2549:  mov    0xc(%ebp),%eax
0810352a +0x254c:  mov    %eax,(%esp)
0810352d +0x254f:  call   08103956 <+0x2978>
08103532 +0x2554:  mov    (%eax),%eax
08103534 +0x2556:  cmp    %eax,%esi
08103536 +0x2558:  sete   %al
08103539 +0x255b:  test   %al,%al
0810353b +0x255d:  je     08103574 <+0x2596>
0810353d +0x255f:  mov    0xc(%ebp),%eax
08103540 +0x2562:  mov    %eax,(%esp)
08103543 +0x2565:  call   08103956 <+0x2978>
08103548 +0x256a:  mov    (%eax),%eax
0810354a +0x256c:  mov    0x14(%ebp),%edx
0810354d +0x256f:  mov    %edx,0x10(%esp)
08103551 +0x2573:  mov    %eax,0xc(%esp)
08103555 +0x2577:  movl   $0x0,0x8(%esp)
0810355d +0x257f:  mov    0xc(%ebp),%eax
08103560 +0x2582:  mov    %eax,0x4(%esp)
08103564 +0x2586:  mov    %ebx,(%esp)
08103567 +0x2589:  call   08103998 <+0x29ba>
0810356c +0x258e:  sub    $0x4,%esp
0810356f +0x2591:  jmp    0810364d <+0x266f>
08103574 +0x2596:  lea    -0x34(%ebp),%eax
08103577 +0x2599:  mov    %eax,(%esp)
0810357a +0x259c:  call   08103c64 <+0x2c86>
0810357f +0x25a1:  mov    (%eax),%eax
08103581 +0x25a3:  mov    %eax,(%esp)
08103584 +0x25a6:  call   08103961 <+0x2983>
08103589 +0x25ab:  mov    %eax,%esi
0810358b +0x25ad:  mov    0x14(%ebp),%eax
0810358e +0x25b0:  mov    %eax,0x4(%esp)
08103592 +0x25b4:  lea    -0x11(%ebp),%eax
08103595 +0x25b7:  mov    %eax,(%esp)
08103598 +0x25ba:  call   08103984 <+0x29a6>
0810359d +0x25bf:  mov    0xc(%ebp),%edx
081035a0 +0x25c2:  mov    %esi,0x8(%esp)
081035a4 +0x25c6:  mov    %eax,0x4(%esp)
081035a8 +0x25ca:  mov    %edx,(%esp)
081035ab +0x25cd:  call   08102bd2 <+0x1bf4>
081035b0 +0x25d2:  test   %al,%al
081035b2 +0x25d4:  je     0810361b <+0x263d>
081035b4 +0x25d6:  mov    0x10(%ebp),%eax
081035b7 +0x25d9:  mov    %eax,(%esp)
081035ba +0x25dc:  call   08103c59 <+0x2c7b>
081035bf +0x25e1:  test   %eax,%eax
081035c1 +0x25e3:  sete   %al
081035c4 +0x25e6:  test   %al,%al
081035c6 +0x25e8:  je     081035f2 <+0x2614>
081035c8 +0x25ea:  mov    0x10(%ebp),%eax
081035cb +0x25ed:  mov    0x14(%ebp),%edx
081035ce +0x25f0:  mov    %edx,0x10(%esp)
081035d2 +0x25f4:  mov    %eax,0xc(%esp)
081035d6 +0x25f8:  movl   $0x0,0x8(%esp)
081035de +0x2600:  mov    0xc(%ebp),%eax
081035e1 +0x2603:  mov    %eax,0x4(%esp)
081035e5 +0x2607:  mov    %ebx,(%esp)
081035e8 +0x260a:  call   08103998 <+0x29ba>
081035ed +0x260f:  sub    $0x4,%esp
081035f0 +0x2612:  jmp    0810364d <+0x266f>
081035f2 +0x2614:  mov    -0x34(%ebp),%edx
081035f5 +0x2617:  mov    -0x34(%ebp),%eax
081035f8 +0x261a:  mov    0x14(%ebp),%ecx
081035fb +0x261d:  mov    %ecx,0x10(%esp)
081035ff +0x2621:  mov    %edx,0xc(%esp)
08103603 +0x2625:  mov    %eax,0x8(%esp)
08103607 +0x2629:  mov    0xc(%ebp),%eax
0810360a +0x262c:  mov    %eax,0x4(%esp)
0810360e +0x2630:  mov    %ebx,(%esp)
08103611 +0x2633:  call   08103998 <+0x29ba>
08103616 +0x2638:  sub    $0x4,%esp
08103619 +0x263b:  jmp    0810364d <+0x266f>
0810361b +0x263d:  lea    -0x10(%ebp),%eax
0810361e +0x2640:  mov    0x14(%ebp),%edx
08103621 +0x2643:  mov    %edx,0x8(%esp)
08103625 +0x2647:  mov    0xc(%ebp),%edx
08103628 +0x264a:  mov    %edx,0x4(%esp)
0810362c +0x264e:  mov    %eax,(%esp)
0810362f +0x2651:  call   08103a60 <+0x2a82>
08103634 +0x2656:  sub    $0x4,%esp
08103637 +0x2659:  mov    -0x10(%ebp),%eax
0810363a +0x265c:  mov    %eax,(%ebx)
0810363c +0x265e:  jmp    0810364d <+0x266f>
0810363e +0x2660:  mov    0x10(%ebp),%eax
08103641 +0x2663:  mov    %eax,0x4(%esp)
08103645 +0x2667:  mov    %ebx,(%esp)
08103648 +0x266a:  call   08103948 <+0x296a>
0810364d +0x266f:  mov    %ebx,%eax
0810364f +0x2671:  lea    -0x8(%ebp),%esp
08103652 +0x2674:  add    $0x0,%esp
08103655 +0x2677:  pop    %ebx
08103656 +0x2678:  pop    %esi
08103657 +0x2679:  pop    %ebp
08103658 +0x267a:  ret    $0x4
0810365b +0x267d:  nop
0810365c +0x267e:  push   %ebp
0810365d +0x267f:  mov    %esp,%ebp
0810365f +0x2681:  mov    $0x3fffffff,%eax
08103664 +0x2686:  pop    %ebp
08103665 +0x2687:  ret
08103666 +0x2688:  push   %ebp
08103667 +0x2689:  mov    %esp,%ebp
08103669 +0x268b:  sub    $0x18,%esp
0810366c +0x268e:  mov    0x8(%ebp),%eax
0810366f +0x2691:  mov    %eax,(%esp)
08103672 +0x2694:  call   08103c82 <+0x2ca4>
08103677 +0x2699:  cmp    0xc(%ebp),%eax
0810367a +0x269c:  setb   %al
0810367d +0x269f:  movzbl %al,%eax
08103680 +0x26a2:  test   %eax,%eax
08103682 +0x26a4:  setne  %al
08103685 +0x26a7:  test   %al,%al
08103687 +0x26a9:  je     0810368e <+0x26b0>
08103689 +0x26ab:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
0810368e +0x26b0:  mov    0xc(%ebp),%eax
08103691 +0x26b3:  shl    $0x2,%eax
08103694 +0x26b6:  mov    %eax,(%esp)
08103697 +0x26b9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810369c +0x26be:  leave
0810369d +0x26bf:  ret
0810369e +0x26c0:  push   %ebp
0810369f +0x26c1:  mov    %esp,%ebp
081036a1 +0x26c3:  pop    %ebp
081036a2 +0x26c4:  ret
081036a3 +0x26c5:  nop
081036a4 +0x26c6:  push   %ebp
081036a5 +0x26c7:  mov    %esp,%ebp
081036a7 +0x26c9:  pop    %ebp
081036a8 +0x26ca:  ret
081036a9 +0x26cb:  nop
081036aa +0x26cc:  push   %ebp
081036ab +0x26cd:  mov    %esp,%ebp
081036ad +0x26cf:  pop    %ebp
081036ae +0x26d0:  ret
081036af +0x26d1:  nop
081036b0 +0x26d2:  push   %ebp
081036b1 +0x26d3:  mov    %esp,%ebp
081036b3 +0x26d5:  sub    $0x18,%esp
081036b6 +0x26d8:  mov    0x8(%ebp),%eax
081036b9 +0x26db:  mov    %eax,(%esp)
081036bc +0x26de:  call   08103c8c <+0x2cae>
081036c1 +0x26e3:  cmp    0xc(%ebp),%eax
081036c4 +0x26e6:  setb   %al
081036c7 +0x26e9:  movzbl %al,%eax
081036ca +0x26ec:  test   %eax,%eax
081036cc +0x26ee:  setne  %al
081036cf +0x26f1:  test   %al,%al
081036d1 +0x26f3:  je     081036d8 <+0x26fa>
081036d3 +0x26f5:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081036d8 +0x26fa:  mov    0xc(%ebp),%eax
081036db +0x26fd:  shl    $0x2,%eax
081036de +0x2700:  mov    %eax,(%esp)
081036e1 +0x2703:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081036e6 +0x2708:  leave
081036e7 +0x2709:  ret
081036e8 +0x270a:  push   %ebp
081036e9 +0x270b:  mov    %esp,%ebp
081036eb +0x270d:  sub    $0x18,%esp
081036ee +0x2710:  movl   $0x4,(%esp)
081036f5 +0x2717:  call   080ee3bb <_GLOBAL__I__Z26ProcessAntiBotInputWrapperv+0x1c>  ; global constructors keyed to ProcessAntiBotInputWrapper()+0x1c
081036fa +0x271c:  mov    0x8(%ebp),%edx
081036fd +0x271f:  movl   $0x0,0x8(%esp)
08103705 +0x2727:  mov    %eax,0x4(%esp)
08103709 +0x272b:  mov    %edx,(%esp)
0810370c +0x272e:  call   08103c96 <+0x2cb8>
08103711 +0x2733:  leave
08103712 +0x2734:  ret
08103713 +0x2735:  nop
08103714 +0x2736:  push   %ebp
08103715 +0x2737:  mov    %esp,%ebp
08103717 +0x2739:  sub    $0x18,%esp
0810371a +0x273c:  mov    0xc(%ebp),%eax
0810371d +0x273f:  mov    %eax,(%esp)
08103720 +0x2742:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08103725 +0x2747:  leave
08103726 +0x2748:  ret
08103727 +0x2749:  nop
08103728 +0x274a:  push   %ebp
08103729 +0x274b:  mov    %esp,%ebp
0810372b +0x274d:  mov    0x8(%ebp),%eax
0810372e +0x2750:  pop    %ebp
0810372f +0x2751:  ret
08103730 +0x2752:  push   %ebp
08103731 +0x2753:  mov    %esp,%ebp
08103733 +0x2755:  sub    $0x18,%esp
08103736 +0x2758:  mov    0x8(%ebp),%eax
08103739 +0x275b:  mov    %eax,(%esp)
0810373c +0x275e:  call   08103cce <+0x2cf0>
08103741 +0x2763:  leave
08103742 +0x2764:  ret
08103743 +0x2765:  nop
08103744 +0x2766:  push   %ebp
08103745 +0x2767:  mov    %esp,%ebp
08103747 +0x2769:  pop    %ebp
08103748 +0x276a:  ret
08103749 +0x276b:  nop
0810374a +0x276c:  push   %ebp
0810374b +0x276d:  mov    %esp,%ebp
0810374d +0x276f:  sub    $0x18,%esp
08103750 +0x2772:  mov    0xc(%ebp),%edx
08103753 +0x2775:  mov    0x8(%ebp),%eax
08103756 +0x2778:  mov    %edx,0x4(%esp)
0810375a +0x277c:  mov    %eax,(%esp)
0810375d +0x277f:  call   08103cd4 <+0x2cf6>
08103762 +0x2784:  leave
08103763 +0x2785:  ret
08103764 +0x2786:  push   %ebp
08103765 +0x2787:  mov    %esp,%ebp
08103767 +0x2789:  mov    0x8(%ebp),%eax
0810376a +0x278c:  pop    %ebp
0810376b +0x278d:  ret
0810376c +0x278e:  push   %ebp
0810376d +0x278f:  mov    %esp,%ebp
0810376f +0x2791:  mov    0x8(%ebp),%eax
08103772 +0x2794:  pop    %ebp
08103773 +0x2795:  ret
08103774 +0x2796:  push   %ebp
08103775 +0x2797:  mov    %esp,%ebp
08103777 +0x2799:  pop    %ebp
08103778 +0x279a:  ret
08103779 +0x279b:  nop
0810377a +0x279c:  push   %ebp
0810377b +0x279d:  mov    %esp,%ebp
0810377d +0x279f:  pop    %ebp
0810377e +0x27a0:  ret
0810377f +0x27a1:  nop
08103780 +0x27a2:  push   %ebp
08103781 +0x27a3:  mov    %esp,%ebp
08103783 +0x27a5:  sub    $0x18,%esp
08103786 +0x27a8:  mov    0xc(%ebp),%eax
08103789 +0x27ab:  mov    %eax,(%esp)
0810378c +0x27ae:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08103791 +0x27b3:  leave
08103792 +0x27b4:  ret
08103793 +0x27b5:  nop
08103794 +0x27b6:  push   %ebp
08103795 +0x27b7:  mov    %esp,%ebp
08103797 +0x27b9:  sub    $0x18,%esp
0810379a +0x27bc:  mov    0x8(%ebp),%eax
0810379d +0x27bf:  movl   $0x0,0x8(%esp)
081037a5 +0x27c7:  movl   $0x1,0x4(%esp)
081037ad +0x27cf:  mov    %eax,(%esp)
081037b0 +0x27d2:  call   08103cda <+0x2cfc>
081037b5 +0x27d7:  leave
081037b6 +0x27d8:  ret
081037b7 +0x27d9:  nop
081037b8 +0x27da:  push   %ebp
081037b9 +0x27db:  mov    %esp,%ebp
081037bb +0x27dd:  push   %ebx
081037bc +0x27de:  sub    $0x14,%esp
081037bf +0x27e1:  mov    0x10(%ebp),%eax
081037c2 +0x27e4:  mov    %eax,(%esp)
081037c5 +0x27e7:  call   081030f8 <+0x211a>
081037ca +0x27ec:  mov    %eax,%ebx
081037cc +0x27ee:  mov    0xc(%ebp),%eax
081037cf +0x27f1:  mov    %eax,0x4(%esp)
081037d3 +0x27f5:  movl   $0xc,(%esp)
081037da +0x27fc:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081037df +0x2801:  mov    %eax,%edx
081037e1 +0x2803:  test   %edx,%edx
081037e3 +0x2805:  je     081037f1 <+0x2813>
081037e5 +0x2807:  mov    %ebx,0x4(%esp)
081037e9 +0x280b:  mov    %eax,(%esp)
081037ec +0x280e:  call   08103d18 <+0x2d3a>
081037f1 +0x2813:  add    $0x14,%esp
081037f4 +0x2816:  pop    %ebx
081037f5 +0x2817:  pop    %ebp
081037f6 +0x2818:  ret
081037f7 +0x2819:  push   %ebp
081037f8 +0x281a:  mov    %esp,%ebp
081037fa +0x281c:  mov    0x8(%ebp),%eax
081037fd +0x281f:  pop    %ebp
081037fe +0x2820:  ret
081037ff +0x2821:  nop
08103800 +0x2822:  push   %ebp
08103801 +0x2823:  mov    %esp,%ebp
08103803 +0x2825:  push   %ebx
08103804 +0x2826:  sub    $0x14,%esp
08103807 +0x2829:  mov    0x10(%ebp),%eax
0810380a +0x282c:  mov    %eax,(%esp)
0810380d +0x282f:  call   081037f7 <+0x2819>
08103812 +0x2834:  mov    (%eax),%ebx
08103814 +0x2836:  mov    0xc(%ebp),%eax
08103817 +0x2839:  mov    %eax,0x4(%esp)
0810381b +0x283d:  movl   $0x4,(%esp)
08103822 +0x2844:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
08103827 +0x2849:  mov    %eax,%edx
08103829 +0x284b:  test   %edx,%edx
0810382b +0x284d:  je     0810382f <+0x2851>
0810382d +0x284f:  mov    %ebx,(%eax)
0810382f +0x2851:  add    $0x14,%esp
08103832 +0x2854:  pop    %ebx
08103833 +0x2855:  pop    %ebp
08103834 +0x2856:  ret
08103835 +0x2857:  nop
08103836 +0x2858:  push   %ebp
08103837 +0x2859:  mov    %esp,%ebp
08103839 +0x285b:  push   %ebx
0810383a +0x285c:  sub    $0x24,%esp
0810383d +0x285f:  movl   $0x1,0x4(%esp)
08103845 +0x2867:  mov    0x8(%ebp),%eax
08103848 +0x286a:  mov    %eax,(%esp)
0810384b +0x286d:  call   08103d46 <+0x2d68>
08103850 +0x2872:  mov    0x8(%ebp),%eax
08103853 +0x2875:  mov    0x24(%eax),%eax
08103856 +0x2878:  lea    0x4(%eax),%ebx
08103859 +0x287b:  mov    0x8(%ebp),%eax
0810385c +0x287e:  mov    %eax,(%esp)
0810385f +0x2881:  call   081036e8 <+0x270a>
08103864 +0x2886:  mov    %eax,(%ebx)
08103866 +0x2888:  mov    0xc(%ebp),%eax
08103869 +0x288b:  mov    %eax,(%esp)
0810386c +0x288e:  call   081037f7 <+0x2819>
08103871 +0x2893:  mov    (%eax),%eax
08103873 +0x2895:  mov    %eax,-0xc(%ebp)
08103876 +0x2898:  mov    0x8(%ebp),%eax
08103879 +0x289b:  mov    0x18(%eax),%edx
0810387c +0x289e:  mov    0x8(%ebp),%eax
0810387f +0x28a1:  lea    -0xc(%ebp),%ecx
08103882 +0x28a4:  mov    %ecx,0x8(%esp)
08103886 +0x28a8:  mov    %edx,0x4(%esp)
0810388a +0x28ac:  mov    %eax,(%esp)
0810388d +0x28af:  call   08103800 <+0x2822>
08103892 +0x28b4:  mov    0x8(%ebp),%eax
08103895 +0x28b7:  mov    0x24(%eax),%eax
08103898 +0x28ba:  lea    0x4(%eax),%edx
0810389b +0x28bd:  mov    0x8(%ebp),%eax
0810389e +0x28c0:  add    $0x18,%eax
081038a1 +0x28c3:  mov    %edx,0x4(%esp)
081038a5 +0x28c7:  mov    %eax,(%esp)
081038a8 +0x28ca:  call   08102e9a <+0x1ebc>
081038ad +0x28cf:  mov    0x8(%ebp),%eax
081038b0 +0x28d2:  mov    0x1c(%eax),%edx
081038b3 +0x28d5:  mov    0x8(%ebp),%eax
081038b6 +0x28d8:  mov    %edx,0x18(%eax)
081038b9 +0x28db:  add    $0x24,%esp
081038bc +0x28de:  pop    %ebx
081038bd +0x28df:  pop    %ebp
081038be +0x28e0:  ret
081038bf +0x28e1:  nop
081038c0 +0x28e2:  push   %ebp
081038c1 +0x28e3:  mov    %esp,%ebp
081038c3 +0x28e5:  mov    0x8(%ebp),%eax
081038c6 +0x28e8:  add    $0x4,%eax
081038c9 +0x28eb:  pop    %ebp
081038ca +0x28ec:  ret
081038cb +0x28ed:  nop
081038cc +0x28ee:  push   %ebp
081038cd +0x28ef:  mov    %esp,%ebp
081038cf +0x28f1:  push   %ebx
081038d0 +0x28f2:  sub    $0x14,%esp
081038d3 +0x28f5:  mov    0x8(%ebp),%ebx
081038d6 +0x28f8:  jmp    08103924 <+0x2946>
081038d8 +0x28fa:  mov    0x10(%ebp),%eax
081038db +0x28fd:  mov    %eax,(%esp)
081038de +0x2900:  call   08103d9b <+0x2dbd>
081038e3 +0x2905:  mov    0xc(%ebp),%edx
081038e6 +0x2908:  mov    0x18(%ebp),%ecx
081038e9 +0x290b:  mov    %ecx,0x8(%esp)
081038ed +0x290f:  mov    %eax,0x4(%esp)
081038f1 +0x2913:  mov    %edx,(%esp)
081038f4 +0x2916:  call   08102bd2 <+0x1bf4>
081038f9 +0x291b:  xor    $0x1,%eax
081038fc +0x291e:  test   %al,%al
081038fe +0x2920:  je     08103916 <+0x2938>
08103900 +0x2922:  mov    0x10(%ebp),%eax
08103903 +0x2925:  mov    %eax,0x14(%ebp)
08103906 +0x2928:  mov    0x10(%ebp),%eax
08103909 +0x292b:  mov    %eax,(%esp)
0810390c +0x292e:  call   08102ac8 <+0x1aea>
08103911 +0x2933:  mov    %eax,0x10(%ebp)
08103914 +0x2936:  jmp    08103924 <+0x2946>
08103916 +0x2938:  mov    0x10(%ebp),%eax
08103919 +0x293b:  mov    %eax,(%esp)
0810391c +0x293e:  call   08102abd <+0x1adf>
08103921 +0x2943:  mov    %eax,0x10(%ebp)
08103924 +0x2946:  cmpl   $0x0,0x10(%ebp)
08103928 +0x294a:  setne  %al
0810392b +0x294d:  test   %al,%al
0810392d +0x294f:  jne    081038d8 <+0x28fa>
0810392f +0x2951:  mov    0x14(%ebp),%eax
08103932 +0x2954:  mov    %eax,0x4(%esp)
08103936 +0x2958:  mov    %ebx,(%esp)
08103939 +0x295b:  call   08103948 <+0x296a>
0810393e +0x2960:  mov    %ebx,%eax
08103940 +0x2962:  add    $0x14,%esp
08103943 +0x2965:  pop    %ebx
08103944 +0x2966:  pop    %ebp
08103945 +0x2967:  ret    $0x4
08103948 +0x296a:  push   %ebp
08103949 +0x296b:  mov    %esp,%ebp
0810394b +0x296d:  mov    0xc(%ebp),%edx
0810394e +0x2970:  mov    0x8(%ebp),%eax
08103951 +0x2973:  mov    %edx,(%eax)
08103953 +0x2975:  pop    %ebp
08103954 +0x2976:  ret
08103955 +0x2977:  nop
08103956 +0x2978:  push   %ebp
08103957 +0x2979:  mov    %esp,%ebp
08103959 +0x297b:  mov    0x8(%ebp),%eax
0810395c +0x297e:  add    $0x10,%eax
0810395f +0x2981:  pop    %ebp
08103960 +0x2982:  ret
08103961 +0x2983:  push   %ebp
08103962 +0x2984:  mov    %esp,%ebp
08103964 +0x2986:  sub    $0x28,%esp
08103967 +0x2989:  mov    0x8(%ebp),%eax
0810396a +0x298c:  mov    %eax,(%esp)
0810396d +0x298f:  call   08103dbd <+0x2ddf>
08103972 +0x2994:  mov    %eax,0x4(%esp)
08103976 +0x2998:  lea    -0x9(%ebp),%eax
08103979 +0x299b:  mov    %eax,(%esp)
0810397c +0x299e:  call   08103984 <+0x29a6>
08103981 +0x29a3:  leave
08103982 +0x29a4:  ret
08103983 +0x29a5:  nop
08103984 +0x29a6:  push   %ebp
08103985 +0x29a7:  mov    %esp,%ebp
08103987 +0x29a9:  mov    0xc(%ebp),%eax
0810398a +0x29ac:  pop    %ebp
0810398b +0x29ad:  ret
0810398c +0x29ae:  push   %ebp
0810398d +0x29af:  mov    %esp,%ebp
0810398f +0x29b1:  mov    0x8(%ebp),%eax
08103992 +0x29b4:  mov    0x14(%eax),%eax
08103995 +0x29b7:  pop    %ebp
08103996 +0x29b8:  ret
08103997 +0x29b9:  nop
08103998 +0x29ba:  push   %ebp
08103999 +0x29bb:  mov    %esp,%ebp
0810399b +0x29bd:  push   %esi
0810399c +0x29be:  push   %ebx
0810399d +0x29bf:  sub    $0x20,%esp
081039a0 +0x29c2:  mov    0x8(%ebp),%esi
081039a3 +0x29c5:  cmpl   $0x0,0x10(%ebp)
081039a7 +0x29c9:  jne    081039ef <+0x2a11>
081039a9 +0x29cb:  mov    0xc(%ebp),%eax
081039ac +0x29ce:  mov    %eax,(%esp)
081039af +0x29d1:  call   081038c0 <+0x28e2>
081039b4 +0x29d6:  cmp    0x14(%ebp),%eax
081039b7 +0x29d9:  je     081039ef <+0x2a11>
081039b9 +0x29db:  mov    0x14(%ebp),%eax
081039bc +0x29de:  mov    %eax,(%esp)
081039bf +0x29e1:  call   08103961 <+0x2983>
081039c4 +0x29e6:  mov    %eax,%ebx
081039c6 +0x29e8:  mov    0x18(%ebp),%eax
081039c9 +0x29eb:  mov    %eax,0x4(%esp)
081039cd +0x29ef:  lea    -0xe(%ebp),%eax
081039d0 +0x29f2:  mov    %eax,(%esp)
081039d3 +0x29f5:  call   08103984 <+0x29a6>
081039d8 +0x29fa:  mov    0xc(%ebp),%edx
081039db +0x29fd:  mov    %ebx,0x8(%esp)
081039df +0x2a01:  mov    %eax,0x4(%esp)
081039e3 +0x2a05:  mov    %edx,(%esp)
081039e6 +0x2a08:  call   08102bd2 <+0x1bf4>
081039eb +0x2a0d:  test   %al,%al
081039ed +0x2a0f:  je     081039f6 <+0x2a18>
081039ef +0x2a11:  mov    $0x1,%eax
081039f4 +0x2a16:  jmp    081039fb <+0x2a1d>
081039f6 +0x2a18:  mov    $0x0,%eax
081039fb +0x2a1d:  mov    %al,-0xd(%ebp)
081039fe +0x2a20:  mov    0x18(%ebp),%eax
08103a01 +0x2a23:  mov    %eax,0x4(%esp)
08103a05 +0x2a27:  mov    0xc(%ebp),%eax
08103a08 +0x2a2a:  mov    %eax,(%esp)
08103a0b +0x2a2d:  call   08103dc8 <+0x2dea>
08103a10 +0x2a32:  mov    %eax,-0xc(%ebp)
08103a13 +0x2a35:  mov    0xc(%ebp),%eax
08103a16 +0x2a38:  lea    0x4(%eax),%ecx
08103a19 +0x2a3b:  mov    -0xc(%ebp),%edx
08103a1c +0x2a3e:  movzbl -0xd(%ebp),%eax
08103a20 +0x2a42:  mov    %ecx,0xc(%esp)
08103a24 +0x2a46:  mov    0x14(%ebp),%ecx
08103a27 +0x2a49:  mov    %ecx,0x8(%esp)
08103a2b +0x2a4d:  mov    %edx,0x4(%esp)
08103a2f +0x2a51:  mov    %eax,(%esp)
08103a32 +0x2a54:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
08103a37 +0x2a59:  mov    0xc(%ebp),%eax
08103a3a +0x2a5c:  mov    0x14(%eax),%eax
08103a3d +0x2a5f:  lea    0x1(%eax),%edx
08103a40 +0x2a62:  mov    0xc(%ebp),%eax
08103a43 +0x2a65:  mov    %edx,0x14(%eax)
08103a46 +0x2a68:  mov    -0xc(%ebp),%eax
08103a49 +0x2a6b:  mov    %eax,0x4(%esp)
08103a4d +0x2a6f:  mov    %esi,(%esp)
08103a50 +0x2a72:  call   08103948 <+0x296a>
08103a55 +0x2a77:  mov    %esi,%eax
08103a57 +0x2a79:  add    $0x20,%esp
08103a5a +0x2a7c:  pop    %ebx
08103a5b +0x2a7d:  pop    %esi
08103a5c +0x2a7e:  pop    %ebp
08103a5d +0x2a7f:  ret    $0x4
08103a60 +0x2a82:  push   %ebp
08103a61 +0x2a83:  mov    %esp,%ebp
08103a63 +0x2a85:  push   %esi
08103a64 +0x2a86:  push   %ebx
08103a65 +0x2a87:  sub    $0x50,%esp
08103a68 +0x2a8a:  mov    0x8(%ebp),%ebx
08103a6b +0x2a8d:  mov    0xc(%ebp),%eax
08103a6e +0x2a90:  mov    %eax,(%esp)
08103a71 +0x2a93:  call   081021b4 <+0x11d6>
08103a76 +0x2a98:  mov    %eax,-0x14(%ebp)
08103a79 +0x2a9b:  mov    0xc(%ebp),%eax
08103a7c +0x2a9e:  mov    %eax,(%esp)
08103a7f +0x2aa1:  call   081038c0 <+0x28e2>
08103a84 +0x2aa6:  mov    %eax,-0x10(%ebp)
08103a87 +0x2aa9:  movb   $0x1,-0x9(%ebp)
08103a8b +0x2aad:  jmp    08103ae9 <+0x2b0b>
08103a8d +0x2aaf:  mov    -0x14(%ebp),%eax
08103a90 +0x2ab2:  mov    %eax,-0x10(%ebp)
08103a93 +0x2ab5:  mov    -0x14(%ebp),%eax
08103a96 +0x2ab8:  mov    %eax,(%esp)
08103a99 +0x2abb:  call   08103d9b <+0x2dbd>
08103a9e +0x2ac0:  mov    %eax,%esi
08103aa0 +0x2ac2:  mov    0x10(%ebp),%eax
08103aa3 +0x2ac5:  mov    %eax,0x4(%esp)
08103aa7 +0x2ac9:  lea    -0x2d(%ebp),%eax
08103aaa +0x2acc:  mov    %eax,(%esp)
08103aad +0x2acf:  call   08103984 <+0x29a6>
08103ab2 +0x2ad4:  mov    0xc(%ebp),%edx
08103ab5 +0x2ad7:  mov    %esi,0x8(%esp)
08103ab9 +0x2adb:  mov    %eax,0x4(%esp)
08103abd +0x2adf:  mov    %edx,(%esp)
08103ac0 +0x2ae2:  call   08102bd2 <+0x1bf4>
08103ac5 +0x2ae7:  mov    %al,-0x9(%ebp)
08103ac8 +0x2aea:  cmpb   $0x0,-0x9(%ebp)
08103acc +0x2aee:  je     08103adb <+0x2afd>
08103ace +0x2af0:  mov    -0x14(%ebp),%eax
08103ad1 +0x2af3:  mov    %eax,(%esp)
08103ad4 +0x2af6:  call   08102ac8 <+0x1aea>
08103ad9 +0x2afb:  jmp    08103ae6 <+0x2b08>
08103adb +0x2afd:  mov    -0x14(%ebp),%eax
08103ade +0x2b00:  mov    %eax,(%esp)
08103ae1 +0x2b03:  call   08102abd <+0x1adf>
08103ae6 +0x2b08:  mov    %eax,-0x14(%ebp)
08103ae9 +0x2b0b:  cmpl   $0x0,-0x14(%ebp)
08103aed +0x2b0f:  setne  %al
08103af0 +0x2b12:  test   %al,%al
08103af2 +0x2b14:  jne    08103a8d <+0x2aaf>
08103af4 +0x2b16:  mov    -0x10(%ebp),%eax
08103af7 +0x2b19:  mov    %eax,0x4(%esp)
08103afb +0x2b1d:  lea    -0x34(%ebp),%eax
08103afe +0x2b20:  mov    %eax,(%esp)
08103b01 +0x2b23:  call   08103948 <+0x296a>
08103b06 +0x2b28:  cmpb   $0x0,-0x9(%ebp)
08103b0a +0x2b2c:  je     08103b8b <+0x2bad>
08103b0c +0x2b2e:  lea    -0x2c(%ebp),%eax
08103b0f +0x2b31:  mov    0xc(%ebp),%edx
08103b12 +0x2b34:  mov    %edx,0x4(%esp)
08103b16 +0x2b38:  mov    %eax,(%esp)
08103b19 +0x2b3b:  call   08103e4a <+0x2e6c>
08103b1e +0x2b40:  sub    $0x4,%esp
08103b21 +0x2b43:  lea    -0x2c(%ebp),%eax
08103b24 +0x2b46:  mov    %eax,0x4(%esp)
08103b28 +0x2b4a:  lea    -0x34(%ebp),%eax
08103b2b +0x2b4d:  mov    %eax,(%esp)
08103b2e +0x2b50:  call   08102c0c <+0x1c2e>
08103b33 +0x2b55:  test   %al,%al
08103b35 +0x2b57:  je     08103b80 <+0x2ba2>
08103b37 +0x2b59:  movb   $0x1,-0x25(%ebp)
08103b3b +0x2b5d:  mov    -0x10(%ebp),%ecx
08103b3e +0x2b60:  mov    -0x14(%ebp),%edx
08103b41 +0x2b63:  lea    -0x24(%ebp),%eax
08103b44 +0x2b66:  mov    0x10(%ebp),%esi
08103b47 +0x2b69:  mov    %esi,0x10(%esp)
08103b4b +0x2b6d:  mov    %ecx,0xc(%esp)
08103b4f +0x2b71:  mov    %edx,0x8(%esp)
08103b53 +0x2b75:  mov    0xc(%ebp),%edx
08103b56 +0x2b78:  mov    %edx,0x4(%esp)
08103b5a +0x2b7c:  mov    %eax,(%esp)
08103b5d +0x2b7f:  call   08103998 <+0x29ba>
08103b62 +0x2b84:  sub    $0x4,%esp
08103b65 +0x2b87:  lea    -0x25(%ebp),%eax
08103b68 +0x2b8a:  mov    %eax,0x8(%esp)
08103b6c +0x2b8e:  lea    -0x24(%ebp),%eax
08103b6f +0x2b91:  mov    %eax,0x4(%esp)
08103b73 +0x2b95:  mov    %ebx,(%esp)
08103b76 +0x2b98:  call   08103e70 <+0x2e92>
08103b7b +0x2b9d:  jmp    08103c21 <+0x2c43>
08103b80 +0x2ba2:  lea    -0x34(%ebp),%eax
08103b83 +0x2ba5:  mov    %eax,(%esp)
08103b86 +0x2ba8:  call   08103e9e <+0x2ec0>
08103b8b +0x2bad:  mov    0x10(%ebp),%eax
08103b8e +0x2bb0:  mov    %eax,0x4(%esp)
08103b92 +0x2bb4:  lea    -0x1e(%ebp),%eax
08103b95 +0x2bb7:  mov    %eax,(%esp)
08103b98 +0x2bba:  call   08103984 <+0x29a6>
08103b9d +0x2bbf:  mov    %eax,%esi
08103b9f +0x2bc1:  mov    -0x34(%ebp),%eax
08103ba2 +0x2bc4:  mov    %eax,(%esp)
08103ba5 +0x2bc7:  call   08103961 <+0x2983>
08103baa +0x2bcc:  mov    0xc(%ebp),%edx
08103bad +0x2bcf:  mov    %esi,0x8(%esp)
08103bb1 +0x2bd3:  mov    %eax,0x4(%esp)
08103bb5 +0x2bd7:  mov    %edx,(%esp)
08103bb8 +0x2bda:  call   08102bd2 <+0x1bf4>
08103bbd +0x2bdf:  test   %al,%al
08103bbf +0x2be1:  je     08103c07 <+0x2c29>
08103bc1 +0x2be3:  movb   $0x1,-0x1d(%ebp)
08103bc5 +0x2be7:  mov    -0x10(%ebp),%ecx
08103bc8 +0x2bea:  mov    -0x14(%ebp),%edx
08103bcb +0x2bed:  lea    -0x1c(%ebp),%eax
08103bce +0x2bf0:  mov    0x10(%ebp),%esi
08103bd1 +0x2bf3:  mov    %esi,0x10(%esp)
08103bd5 +0x2bf7:  mov    %ecx,0xc(%esp)
08103bd9 +0x2bfb:  mov    %edx,0x8(%esp)
08103bdd +0x2bff:  mov    0xc(%ebp),%edx
08103be0 +0x2c02:  mov    %edx,0x4(%esp)
08103be4 +0x2c06:  mov    %eax,(%esp)
08103be7 +0x2c09:  call   08103998 <+0x29ba>
08103bec +0x2c0e:  sub    $0x4,%esp
08103bef +0x2c11:  lea    -0x1d(%ebp),%eax
08103bf2 +0x2c14:  mov    %eax,0x8(%esp)
08103bf6 +0x2c18:  lea    -0x1c(%ebp),%eax
08103bf9 +0x2c1b:  mov    %eax,0x4(%esp)
08103bfd +0x2c1f:  mov    %ebx,(%esp)
08103c00 +0x2c22:  call   08103e70 <+0x2e92>
08103c05 +0x2c27:  jmp    08103c21 <+0x2c43>
08103c07 +0x2c29:  movb   $0x0,-0x15(%ebp)
08103c0b +0x2c2d:  lea    -0x15(%ebp),%eax
08103c0e +0x2c30:  mov    %eax,0x8(%esp)
08103c12 +0x2c34:  lea    -0x34(%ebp),%eax
08103c15 +0x2c37:  mov    %eax,0x4(%esp)
08103c19 +0x2c3b:  mov    %ebx,(%esp)
08103c1c +0x2c3e:  call   08103ebc <+0x2ede>
08103c21 +0x2c43:  mov    %ebx,%eax
08103c23 +0x2c45:  lea    -0x8(%ebp),%esp
08103c26 +0x2c48:  add    $0x0,%esp
08103c29 +0x2c4b:  pop    %ebx
08103c2a +0x2c4c:  pop    %esi
08103c2b +0x2c4d:  pop    %ebp
08103c2c +0x2c4e:  ret    $0x4
08103c2f +0x2c51:  nop
08103c30 +0x2c52:  push   %ebp
08103c31 +0x2c53:  mov    %esp,%ebp
08103c33 +0x2c55:  mov    0x8(%ebp),%eax
08103c36 +0x2c58:  add    $0xc,%eax
08103c39 +0x2c5b:  pop    %ebp
08103c3a +0x2c5c:  ret
08103c3b +0x2c5d:  nop
08103c3c +0x2c5e:  push   %ebp
08103c3d +0x2c5f:  mov    %esp,%ebp
08103c3f +0x2c61:  sub    $0x18,%esp
08103c42 +0x2c64:  mov    0x8(%ebp),%eax
08103c45 +0x2c67:  mov    (%eax),%eax
08103c47 +0x2c69:  mov    %eax,(%esp)
08103c4a +0x2c6c:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
08103c4f +0x2c71:  mov    0x8(%ebp),%edx
08103c52 +0x2c74:  mov    %eax,(%edx)
08103c54 +0x2c76:  mov    0x8(%ebp),%eax
08103c57 +0x2c79:  leave
08103c58 +0x2c7a:  ret
08103c59 +0x2c7b:  push   %ebp
08103c5a +0x2c7c:  mov    %esp,%ebp
08103c5c +0x2c7e:  mov    0x8(%ebp),%eax
08103c5f +0x2c81:  mov    0xc(%eax),%eax
08103c62 +0x2c84:  pop    %ebp
08103c63 +0x2c85:  ret
08103c64 +0x2c86:  push   %ebp
08103c65 +0x2c87:  mov    %esp,%ebp
08103c67 +0x2c89:  sub    $0x18,%esp
08103c6a +0x2c8c:  mov    0x8(%ebp),%eax
08103c6d +0x2c8f:  mov    (%eax),%eax
08103c6f +0x2c91:  mov    %eax,(%esp)
08103c72 +0x2c94:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
08103c77 +0x2c99:  mov    0x8(%ebp),%edx
08103c7a +0x2c9c:  mov    %eax,(%edx)
08103c7c +0x2c9e:  mov    0x8(%ebp),%eax
08103c7f +0x2ca1:  leave
08103c80 +0x2ca2:  ret
08103c81 +0x2ca3:  nop
08103c82 +0x2ca4:  push   %ebp
08103c83 +0x2ca5:  mov    %esp,%ebp
08103c85 +0x2ca7:  mov    $0x3fffffff,%eax
08103c8a +0x2cac:  pop    %ebp
08103c8b +0x2cad:  ret
08103c8c +0x2cae:  push   %ebp
08103c8d +0x2caf:  mov    %esp,%ebp
08103c8f +0x2cb1:  mov    $0x3fffffff,%eax
08103c94 +0x2cb6:  pop    %ebp
08103c95 +0x2cb7:  ret
08103c96 +0x2cb8:  push   %ebp
08103c97 +0x2cb9:  mov    %esp,%ebp
08103c99 +0x2cbb:  sub    $0x18,%esp
08103c9c +0x2cbe:  mov    0x8(%ebp),%eax
08103c9f +0x2cc1:  mov    %eax,(%esp)
08103ca2 +0x2cc4:  call   08103eea <+0x2f0c>
08103ca7 +0x2cc9:  cmp    0xc(%ebp),%eax
08103caa +0x2ccc:  setb   %al
08103cad +0x2ccf:  movzbl %al,%eax
08103cb0 +0x2cd2:  test   %eax,%eax
08103cb2 +0x2cd4:  setne  %al
08103cb5 +0x2cd7:  test   %al,%al
08103cb7 +0x2cd9:  je     08103cbe <+0x2ce0>
08103cb9 +0x2cdb:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08103cbe +0x2ce0:  mov    0xc(%ebp),%eax
08103cc1 +0x2ce3:  shl    $0x2,%eax
08103cc4 +0x2ce6:  mov    %eax,(%esp)
08103cc7 +0x2ce9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08103ccc +0x2cee:  leave
08103ccd +0x2cef:  ret
08103cce +0x2cf0:  push   %ebp
08103ccf +0x2cf1:  mov    %esp,%ebp
08103cd1 +0x2cf3:  pop    %ebp
08103cd2 +0x2cf4:  ret
08103cd3 +0x2cf5:  nop
08103cd4 +0x2cf6:  push   %ebp
08103cd5 +0x2cf7:  mov    %esp,%ebp
08103cd7 +0x2cf9:  pop    %ebp
08103cd8 +0x2cfa:  ret
08103cd9 +0x2cfb:  nop
08103cda +0x2cfc:  push   %ebp
08103cdb +0x2cfd:  mov    %esp,%ebp
08103cdd +0x2cff:  sub    $0x18,%esp
08103ce0 +0x2d02:  mov    0x8(%ebp),%eax
08103ce3 +0x2d05:  mov    %eax,(%esp)
08103ce6 +0x2d08:  call   08103ef4 <+0x2f16>
08103ceb +0x2d0d:  cmp    0xc(%ebp),%eax
08103cee +0x2d10:  setb   %al
08103cf1 +0x2d13:  movzbl %al,%eax
08103cf4 +0x2d16:  test   %eax,%eax
08103cf6 +0x2d18:  setne  %al
08103cf9 +0x2d1b:  test   %al,%al
08103cfb +0x2d1d:  je     08103d02 <+0x2d24>
08103cfd +0x2d1f:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08103d02 +0x2d24:  mov    0xc(%ebp),%edx
08103d05 +0x2d27:  mov    %edx,%eax
08103d07 +0x2d29:  add    %eax,%eax
08103d09 +0x2d2b:  add    %edx,%eax
08103d0b +0x2d2d:  shl    $0x2,%eax
08103d0e +0x2d30:  mov    %eax,(%esp)
08103d11 +0x2d33:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08103d16 +0x2d38:  leave
08103d17 +0x2d39:  ret
08103d18 +0x2d3a:  push   %ebp
08103d19 +0x2d3b:  mov    %esp,%ebp
08103d1b +0x2d3d:  sub    $0x18,%esp
08103d1e +0x2d40:  mov    0x8(%ebp),%eax
08103d21 +0x2d43:  movl   $0x0,(%eax)
08103d27 +0x2d49:  mov    0x8(%ebp),%eax
08103d2a +0x2d4c:  movl   $0x0,0x4(%eax)
08103d31 +0x2d53:  mov    0xc(%ebp),%eax
08103d34 +0x2d56:  mov    %eax,(%esp)
08103d37 +0x2d59:  call   081030f8 <+0x211a>
08103d3c +0x2d5e:  mov    (%eax),%edx
08103d3e +0x2d60:  mov    0x8(%ebp),%eax
08103d41 +0x2d63:  mov    %edx,0x8(%eax)
08103d44 +0x2d66:  leave
08103d45 +0x2d67:  ret
08103d46 +0x2d68:  push   %ebp
08103d47 +0x2d69:  mov    %esp,%ebp
08103d49 +0x2d6b:  push   %esi
08103d4a +0x2d6c:  push   %ebx
08103d4b +0x2d6d:  sub    $0x10,%esp
08103d4e +0x2d70:  mov    0xc(%ebp),%eax
08103d51 +0x2d73:  lea    0x1(%eax),%ebx
08103d54 +0x2d76:  mov    0x8(%ebp),%eax
08103d57 +0x2d79:  mov    0x4(%eax),%edx
08103d5a +0x2d7c:  mov    0x8(%ebp),%eax
08103d5d +0x2d7f:  mov    0x24(%eax),%eax
08103d60 +0x2d82:  mov    %eax,%ecx
08103d62 +0x2d84:  mov    0x8(%ebp),%eax
08103d65 +0x2d87:  mov    (%eax),%eax
08103d67 +0x2d89:  mov    %ecx,%esi
08103d69 +0x2d8b:  sub    %eax,%esi
08103d6b +0x2d8d:  mov    %esi,%eax
08103d6d +0x2d8f:  sar    $0x2,%eax
08103d70 +0x2d92:  mov    %edx,%ecx
08103d72 +0x2d94:  sub    %eax,%ecx
08103d74 +0x2d96:  mov    %ecx,%eax
08103d76 +0x2d98:  cmp    %eax,%ebx
08103d78 +0x2d9a:  jbe    08103d94 <+0x2db6>
08103d7a +0x2d9c:  movl   $0x0,0x8(%esp)
08103d82 +0x2da4:  mov    0xc(%ebp),%eax
08103d85 +0x2da7:  mov    %eax,0x4(%esp)
08103d89 +0x2dab:  mov    0x8(%ebp),%eax
08103d8c +0x2dae:  mov    %eax,(%esp)
08103d8f +0x2db1:  call   08103efe <+0x2f20>
08103d94 +0x2db6:  add    $0x10,%esp
08103d97 +0x2db9:  pop    %ebx
08103d98 +0x2dba:  pop    %esi
08103d99 +0x2dbb:  pop    %ebp
08103d9a +0x2dbc:  ret
08103d9b +0x2dbd:  push   %ebp
08103d9c +0x2dbe:  mov    %esp,%ebp
08103d9e +0x2dc0:  sub    $0x28,%esp
08103da1 +0x2dc3:  mov    0x8(%ebp),%eax
08103da4 +0x2dc6:  mov    %eax,(%esp)
08103da7 +0x2dc9:  call   081040ce <+0x30f0>
08103dac +0x2dce:  mov    %eax,0x4(%esp)
08103db0 +0x2dd2:  lea    -0x9(%ebp),%eax
08103db3 +0x2dd5:  mov    %eax,(%esp)
08103db6 +0x2dd8:  call   08103984 <+0x29a6>
08103dbb +0x2ddd:  leave
08103dbc +0x2dde:  ret
08103dbd +0x2ddf:  push   %ebp
08103dbe +0x2de0:  mov    %esp,%ebp
08103dc0 +0x2de2:  mov    0x8(%ebp),%eax
08103dc3 +0x2de5:  add    $0x10,%eax
08103dc6 +0x2de8:  pop    %ebp
08103dc7 +0x2de9:  ret
08103dc8 +0x2dea:  push   %ebp
08103dc9 +0x2deb:  mov    %esp,%ebp
08103dcb +0x2ded:  push   %esi
08103dcc +0x2dee:  push   %ebx
08103dcd +0x2def:  sub    $0x20,%esp
08103dd0 +0x2df2:  mov    0x8(%ebp),%eax
08103dd3 +0x2df5:  mov    %eax,(%esp)
08103dd6 +0x2df8:  call   081040da <+0x30fc>
08103ddb +0x2dfd:  mov    %eax,-0xc(%ebp)
08103dde +0x2e00:  mov    0xc(%ebp),%eax
08103de1 +0x2e03:  mov    %eax,(%esp)
08103de4 +0x2e06:  call   081040fd <+0x311f>
08103de9 +0x2e0b:  mov    %eax,%ebx
08103deb +0x2e0d:  mov    0x8(%ebp),%eax
08103dee +0x2e10:  mov    %eax,(%esp)
08103df1 +0x2e13:  call   081030b4 <+0x20d6>
08103df6 +0x2e18:  mov    %ebx,0x8(%esp)
08103dfa +0x2e1c:  mov    -0xc(%ebp),%edx
08103dfd +0x2e1f:  mov    %edx,0x4(%esp)
08103e01 +0x2e23:  mov    %eax,(%esp)
08103e04 +0x2e26:  call   08104106 <+0x3128>
08103e09 +0x2e2b:  jmp    08103e3f <+0x2e61>
08103e0b +0x2e2d:  mov    %eax,(%esp)
08103e0e +0x2e30:  call   08725ce0 <__cxa_begin_catch>
08103e13 +0x2e35:  mov    -0xc(%ebp),%eax
08103e16 +0x2e38:  mov    %eax,0x4(%esp)
08103e1a +0x2e3c:  mov    0x8(%ebp),%eax
08103e1d +0x2e3f:  mov    %eax,(%esp)
08103e20 +0x2e42:  call   081030d6 <+0x20f8>
08103e25 +0x2e47:  call   08724be0 <__cxa_rethrow>
08103e2a +0x2e4c:  mov    %edx,%ebx
08103e2c +0x2e4e:  mov    %eax,%esi
08103e2e +0x2e50:  call   08725c30 <__cxa_end_catch>
08103e33 +0x2e55:  mov    %esi,%eax
08103e35 +0x2e57:  mov    %ebx,%edx
08103e37 +0x2e59:  mov    %eax,(%esp)
08103e3a +0x2e5c:  call   08ae3750 <_Unwind_Resume>
08103e3f +0x2e61:  mov    -0xc(%ebp),%eax
08103e42 +0x2e64:  add    $0x20,%esp
08103e45 +0x2e67:  pop    %ebx
08103e46 +0x2e68:  pop    %esi
08103e47 +0x2e69:  pop    %ebp
08103e48 +0x2e6a:  ret
08103e49 +0x2e6b:  nop
08103e4a +0x2e6c:  push   %ebp
08103e4b +0x2e6d:  mov    %esp,%ebp
08103e4d +0x2e6f:  push   %ebx
08103e4e +0x2e70:  sub    $0x14,%esp
08103e51 +0x2e73:  mov    0x8(%ebp),%ebx
08103e54 +0x2e76:  mov    0xc(%ebp),%eax
08103e57 +0x2e79:  mov    0xc(%eax),%eax
08103e5a +0x2e7c:  mov    %eax,0x4(%esp)
08103e5e +0x2e80:  mov    %ebx,(%esp)
08103e61 +0x2e83:  call   08103948 <+0x296a>
08103e66 +0x2e88:  mov    %ebx,%eax
08103e68 +0x2e8a:  add    $0x14,%esp
08103e6b +0x2e8d:  pop    %ebx
08103e6c +0x2e8e:  pop    %ebp
08103e6d +0x2e8f:  ret    $0x4
08103e70 +0x2e92:  push   %ebp
08103e71 +0x2e93:  mov    %esp,%ebp
08103e73 +0x2e95:  sub    $0x18,%esp
08103e76 +0x2e98:  mov    0xc(%ebp),%eax
08103e79 +0x2e9b:  mov    %eax,(%esp)
08103e7c +0x2e9e:  call   08104145 <+0x3167>
08103e81 +0x2ea3:  mov    0x8(%ebp),%edx
08103e84 +0x2ea6:  mov    (%eax),%eax
08103e86 +0x2ea8:  mov    %eax,(%edx)
08103e88 +0x2eaa:  mov    0x10(%ebp),%eax
08103e8b +0x2ead:  mov    %eax,(%esp)
08103e8e +0x2eb0:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08103e93 +0x2eb5:  movzbl (%eax),%edx
08103e96 +0x2eb8:  mov    0x8(%ebp),%eax
08103e99 +0x2ebb:  mov    %dl,0x4(%eax)
08103e9c +0x2ebe:  leave
08103e9d +0x2ebf:  ret
08103e9e +0x2ec0:  push   %ebp
08103e9f +0x2ec1:  mov    %esp,%ebp
08103ea1 +0x2ec3:  sub    $0x18,%esp
08103ea4 +0x2ec6:  mov    0x8(%ebp),%eax
08103ea7 +0x2ec9:  mov    (%eax),%eax
08103ea9 +0x2ecb:  mov    %eax,(%esp)
08103eac +0x2ece:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
08103eb1 +0x2ed3:  mov    0x8(%ebp),%edx
08103eb4 +0x2ed6:  mov    %eax,(%edx)
08103eb6 +0x2ed8:  mov    0x8(%ebp),%eax
08103eb9 +0x2edb:  leave
08103eba +0x2edc:  ret
08103ebb +0x2edd:  nop
08103ebc +0x2ede:  push   %ebp
08103ebd +0x2edf:  mov    %esp,%ebp
08103ebf +0x2ee1:  sub    $0x18,%esp
08103ec2 +0x2ee4:  mov    0xc(%ebp),%eax
08103ec5 +0x2ee7:  mov    %eax,(%esp)
08103ec8 +0x2eea:  call   0810414d <+0x316f>
08103ecd +0x2eef:  mov    0x8(%ebp),%edx
08103ed0 +0x2ef2:  mov    (%eax),%eax
08103ed2 +0x2ef4:  mov    %eax,(%edx)
08103ed4 +0x2ef6:  mov    0x10(%ebp),%eax
08103ed7 +0x2ef9:  mov    %eax,(%esp)
08103eda +0x2efc:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
08103edf +0x2f01:  movzbl (%eax),%edx
08103ee2 +0x2f04:  mov    0x8(%ebp),%eax
08103ee5 +0x2f07:  mov    %dl,0x4(%eax)
08103ee8 +0x2f0a:  leave
08103ee9 +0x2f0b:  ret
08103eea +0x2f0c:  push   %ebp
08103eeb +0x2f0d:  mov    %esp,%ebp
08103eed +0x2f0f:  mov    $0x3fffffff,%eax
08103ef2 +0x2f14:  pop    %ebp
08103ef3 +0x2f15:  ret
08103ef4 +0x2f16:  push   %ebp
08103ef5 +0x2f17:  mov    %esp,%ebp
08103ef7 +0x2f19:  mov    $0x15555555,%eax
08103efc +0x2f1e:  pop    %ebp
08103efd +0x2f1f:  ret
08103efe +0x2f20:  push   %ebp
08103eff +0x2f21:  mov    %esp,%ebp
08103f01 +0x2f23:  push   %ebx
08103f02 +0x2f24:  sub    $0x44,%esp
08103f05 +0x2f27:  mov    0x10(%ebp),%eax
08103f08 +0x2f2a:  mov    %al,-0x2c(%ebp)
08103f0b +0x2f2d:  mov    0x8(%ebp),%eax
08103f0e +0x2f30:  mov    0x24(%eax),%eax
08103f11 +0x2f33:  mov    %eax,%edx
08103f13 +0x2f35:  mov    0x8(%ebp),%eax
08103f16 +0x2f38:  mov    0x14(%eax),%eax
08103f19 +0x2f3b:  mov    %edx,%ecx
08103f1b +0x2f3d:  sub    %eax,%ecx
08103f1d +0x2f3f:  mov    %ecx,%eax
08103f1f +0x2f41:  sar    $0x2,%eax
08103f22 +0x2f44:  add    $0x1,%eax
08103f25 +0x2f47:  mov    %eax,-0x1c(%ebp)
08103f28 +0x2f4a:  mov    0xc(%ebp),%eax
08103f2b +0x2f4d:  add    -0x1c(%ebp),%eax
08103f2e +0x2f50:  mov    %eax,-0x18(%ebp)
08103f31 +0x2f53:  mov    0x8(%ebp),%eax
08103f34 +0x2f56:  mov    0x4(%eax),%eax
08103f37 +0x2f59:  mov    -0x18(%ebp),%edx
08103f3a +0x2f5c:  add    %edx,%edx
08103f3c +0x2f5e:  cmp    %edx,%eax
08103f3e +0x2f60:  jbe    08103fd8 <+0x2ffa>
08103f44 +0x2f66:  mov    0x8(%ebp),%eax
08103f47 +0x2f69:  mov    (%eax),%edx
08103f49 +0x2f6b:  mov    0x8(%ebp),%eax
08103f4c +0x2f6e:  mov    0x4(%eax),%eax
08103f4f +0x2f71:  sub    -0x18(%ebp),%eax
08103f52 +0x2f74:  shr    %eax
08103f54 +0x2f76:  lea    0x0(,%eax,4),%ecx
08103f5b +0x2f7d:  cmpb   $0x0,-0x2c(%ebp)
08103f5f +0x2f81:  je     08103f69 <+0x2f8b>
08103f61 +0x2f83:  mov    0xc(%ebp),%eax
08103f64 +0x2f86:  shl    $0x2,%eax
08103f67 +0x2f89:  jmp    08103f6e <+0x2f90>
08103f69 +0x2f8b:  mov    $0x0,%eax
08103f6e +0x2f90:  lea    (%ecx,%eax,1),%eax
08103f71 +0x2f93:  lea    (%edx,%eax,1),%eax
08103f74 +0x2f96:  mov    %eax,-0x14(%ebp)
08103f77 +0x2f99:  mov    0x8(%ebp),%eax
08103f7a +0x2f9c:  mov    0x14(%eax),%eax
08103f7d +0x2f9f:  cmp    -0x14(%ebp),%eax
08103f80 +0x2fa2:  jbe    08103fa9 <+0x2fcb>
08103f82 +0x2fa4:  mov    0x8(%ebp),%eax
08103f85 +0x2fa7:  mov    0x24(%eax),%eax
08103f88 +0x2faa:  lea    0x4(%eax),%ecx
08103f8b +0x2fad:  mov    0x8(%ebp),%eax
08103f8e +0x2fb0:  mov    0x14(%eax),%eax
08103f91 +0x2fb3:  mov    -0x14(%ebp),%edx
08103f94 +0x2fb6:  mov    %edx,0x8(%esp)
08103f98 +0x2fba:  mov    %ecx,0x4(%esp)
08103f9c +0x2fbe:  mov    %eax,(%esp)
08103f9f +0x2fc1:  call   08104155 <+0x3177>
08103fa4 +0x2fc6:  jmp    08104095 <+0x30b7>
08103fa9 +0x2fcb:  mov    -0x1c(%ebp),%eax
08103fac +0x2fce:  shl    $0x2,%eax
08103faf +0x2fd1:  mov    %eax,%edx
08103fb1 +0x2fd3:  add    -0x14(%ebp),%edx
08103fb4 +0x2fd6:  mov    0x8(%ebp),%eax
08103fb7 +0x2fd9:  mov    0x24(%eax),%eax
08103fba +0x2fdc:  lea    0x4(%eax),%ecx
08103fbd +0x2fdf:  mov    0x8(%ebp),%eax
08103fc0 +0x2fe2:  mov    0x14(%eax),%eax
08103fc3 +0x2fe5:  mov    %edx,0x8(%esp)
08103fc7 +0x2fe9:  mov    %ecx,0x4(%esp)
08103fcb +0x2fed:  mov    %eax,(%esp)
08103fce +0x2ff0:  call   0810418d <+0x31af>
08103fd3 +0x2ff5:  jmp    08104095 <+0x30b7>
08103fd8 +0x2ffa:  mov    0x8(%ebp),%eax
08103fdb +0x2ffd:  mov    0x4(%eax),%ebx
08103fde +0x3000:  mov    0x8(%ebp),%eax
08103fe1 +0x3003:  lea    0x4(%eax),%edx
08103fe4 +0x3006:  lea    0xc(%ebp),%eax
08103fe7 +0x3009:  mov    %eax,0x4(%esp)
08103feb +0x300d:  mov    %edx,(%esp)
08103fee +0x3010:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
08103ff3 +0x3015:  mov    (%eax),%eax
08103ff5 +0x3017:  lea    (%ebx,%eax,1),%eax
08103ff8 +0x301a:  add    $0x2,%eax
08103ffb +0x301d:  mov    %eax,-0x10(%ebp)
08103ffe +0x3020:  mov    0x8(%ebp),%eax
08104001 +0x3023:  mov    -0x10(%ebp),%edx
08104004 +0x3026:  mov    %edx,0x4(%esp)
08104008 +0x302a:  mov    %eax,(%esp)
0810400b +0x302d:  call   08102db8 <+0x1dda>
08104010 +0x3032:  mov    %eax,-0xc(%ebp)
08104013 +0x3035:  mov    -0x18(%ebp),%eax
08104016 +0x3038:  mov    -0x10(%ebp),%edx
08104019 +0x303b:  mov    %edx,%ecx
0810401b +0x303d:  sub    %eax,%ecx
0810401d +0x303f:  mov    %ecx,%eax
0810401f +0x3041:  shr    %eax
08104021 +0x3043:  lea    0x0(,%eax,4),%edx
08104028 +0x304a:  cmpb   $0x0,-0x2c(%ebp)
0810402c +0x304e:  je     08104036 <+0x3058>
0810402e +0x3050:  mov    0xc(%ebp),%eax
08104031 +0x3053:  shl    $0x2,%eax
08104034 +0x3056:  jmp    0810403b <+0x305d>
08104036 +0x3058:  mov    $0x0,%eax
0810403b +0x305d:  lea    (%edx,%eax,1),%eax
0810403e +0x3060:  add    -0xc(%ebp),%eax
08104041 +0x3063:  mov    %eax,-0x14(%ebp)
08104044 +0x3066:  mov    0x8(%ebp),%eax
08104047 +0x3069:  mov    0x24(%eax),%eax
0810404a +0x306c:  lea    0x4(%eax),%ecx
0810404d +0x306f:  mov    0x8(%ebp),%eax
08104050 +0x3072:  mov    0x14(%eax),%eax
08104053 +0x3075:  mov    -0x14(%ebp),%edx
08104056 +0x3078:  mov    %edx,0x8(%esp)
0810405a +0x307c:  mov    %ecx,0x4(%esp)
0810405e +0x3080:  mov    %eax,(%esp)
08104061 +0x3083:  call   08104155 <+0x3177>
08104066 +0x3088:  mov    0x8(%ebp),%eax
08104069 +0x308b:  mov    0x4(%eax),%ecx
0810406c +0x308e:  mov    0x8(%ebp),%eax
0810406f +0x3091:  mov    (%eax),%edx
08104071 +0x3093:  mov    0x8(%ebp),%eax
08104074 +0x3096:  mov    %ecx,0x8(%esp)
08104078 +0x309a:  mov    %edx,0x4(%esp)
0810407c +0x309e:  mov    %eax,(%esp)
0810407f +0x30a1:  call   081028f2 <+0x1914>
08104084 +0x30a6:  mov    0x8(%ebp),%eax
08104087 +0x30a9:  mov    -0xc(%ebp),%edx
0810408a +0x30ac:  mov    %edx,(%eax)
0810408c +0x30ae:  mov    0x8(%ebp),%eax
0810408f +0x30b1:  mov    -0x10(%ebp),%edx
08104092 +0x30b4:  mov    %edx,0x4(%eax)
08104095 +0x30b7:  mov    0x8(%ebp),%eax
08104098 +0x30ba:  lea    0x8(%eax),%edx
0810409b +0x30bd:  mov    -0x14(%ebp),%eax
0810409e +0x30c0:  mov    %eax,0x4(%esp)
081040a2 +0x30c4:  mov    %edx,(%esp)
081040a5 +0x30c7:  call   08102e9a <+0x1ebc>
081040aa +0x30cc:  mov    -0x1c(%ebp),%eax
081040ad +0x30cf:  sub    $0x1,%eax
081040b0 +0x30d2:  shl    $0x2,%eax
081040b3 +0x30d5:  add    -0x14(%ebp),%eax
081040b6 +0x30d8:  mov    0x8(%ebp),%edx
081040b9 +0x30db:  add    $0x18,%edx
081040bc +0x30de:  mov    %eax,0x4(%esp)
081040c0 +0x30e2:  mov    %edx,(%esp)
081040c3 +0x30e5:  call   08102e9a <+0x1ebc>
081040c8 +0x30ea:  add    $0x44,%esp
081040cb +0x30ed:  pop    %ebx
081040cc +0x30ee:  pop    %ebp
081040cd +0x30ef:  ret
081040ce +0x30f0:  push   %ebp
081040cf +0x30f1:  mov    %esp,%ebp
081040d1 +0x30f3:  mov    0x8(%ebp),%eax
081040d4 +0x30f6:  add    $0x10,%eax
081040d7 +0x30f9:  pop    %ebp
081040d8 +0x30fa:  ret
081040d9 +0x30fb:  nop
081040da +0x30fc:  push   %ebp
081040db +0x30fd:  mov    %esp,%ebp
081040dd +0x30ff:  sub    $0x18,%esp
081040e0 +0x3102:  mov    0x8(%ebp),%eax
081040e3 +0x3105:  movl   $0x0,0x8(%esp)
081040eb +0x310d:  movl   $0x1,0x4(%esp)
081040f3 +0x3115:  mov    %eax,(%esp)
081040f6 +0x3118:  call   081041c6 <+0x31e8>
081040fb +0x311d:  leave
081040fc +0x311e:  ret
081040fd +0x311f:  push   %ebp
081040fe +0x3120:  mov    %esp,%ebp
08104100 +0x3122:  mov    0x8(%ebp),%eax
08104103 +0x3125:  pop    %ebp
08104104 +0x3126:  ret
08104105 +0x3127:  nop
08104106 +0x3128:  push   %ebp
08104107 +0x3129:  mov    %esp,%ebp
08104109 +0x312b:  push   %ebx
0810410a +0x312c:  sub    $0x14,%esp
0810410d +0x312f:  mov    0x10(%ebp),%eax
08104110 +0x3132:  mov    %eax,(%esp)
08104113 +0x3135:  call   081040fd <+0x311f>
08104118 +0x313a:  mov    %eax,%ebx
0810411a +0x313c:  mov    0xc(%ebp),%eax
0810411d +0x313f:  mov    %eax,0x4(%esp)
08104121 +0x3143:  movl   $0x18,(%esp)
08104128 +0x314a:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0810412d +0x314f:  mov    %eax,%edx
0810412f +0x3151:  test   %edx,%edx
08104131 +0x3153:  je     0810413f <+0x3161>
08104133 +0x3155:  mov    %ebx,0x4(%esp)
08104137 +0x3159:  mov    %eax,(%esp)
0810413a +0x315c:  call   08104204 <+0x3226>
0810413f +0x3161:  add    $0x14,%esp
08104142 +0x3164:  pop    %ebx
08104143 +0x3165:  pop    %ebp
08104144 +0x3166:  ret
08104145 +0x3167:  push   %ebp
08104146 +0x3168:  mov    %esp,%ebp
08104148 +0x316a:  mov    0x8(%ebp),%eax
0810414b +0x316d:  pop    %ebp
0810414c +0x316e:  ret
0810414d +0x316f:  push   %ebp
0810414e +0x3170:  mov    %esp,%ebp
08104150 +0x3172:  mov    0x8(%ebp),%eax
08104153 +0x3175:  pop    %ebp
08104154 +0x3176:  ret
08104155 +0x3177:  push   %ebp
08104156 +0x3178:  mov    %esp,%ebp
08104158 +0x317a:  push   %ebx
08104159 +0x317b:  sub    $0x14,%esp
0810415c +0x317e:  mov    0xc(%ebp),%eax
0810415f +0x3181:  mov    %eax,(%esp)
08104162 +0x3184:  call   0810424c <+0x326e>
08104167 +0x3189:  mov    %eax,%ebx
08104169 +0x318b:  mov    0x8(%ebp),%eax
0810416c +0x318e:  mov    %eax,(%esp)
0810416f +0x3191:  call   0810424c <+0x326e>
08104174 +0x3196:  mov    0x10(%ebp),%edx
08104177 +0x3199:  mov    %edx,0x8(%esp)
0810417b +0x319d:  mov    %ebx,0x4(%esp)
0810417f +0x31a1:  mov    %eax,(%esp)
08104182 +0x31a4:  call   08104254 <+0x3276>
08104187 +0x31a9:  add    $0x14,%esp
0810418a +0x31ac:  pop    %ebx
0810418b +0x31ad:  pop    %ebp
0810418c +0x31ae:  ret
0810418d +0x31af:  push   %ebp
0810418e +0x31b0:  mov    %esp,%ebp
08104190 +0x31b2:  push   %ebx
08104191 +0x31b3:  sub    $0x14,%esp
08104194 +0x31b6:  mov    0xc(%ebp),%eax
08104197 +0x31b9:  mov    %eax,(%esp)
0810419a +0x31bc:  call   0810424c <+0x326e>
0810419f +0x31c1:  mov    %eax,%ebx
081041a1 +0x31c3:  mov    0x8(%ebp),%eax
081041a4 +0x31c6:  mov    %eax,(%esp)
081041a7 +0x31c9:  call   0810424c <+0x326e>
081041ac +0x31ce:  mov    0x10(%ebp),%edx
081041af +0x31d1:  mov    %edx,0x8(%esp)
081041b3 +0x31d5:  mov    %ebx,0x4(%esp)
081041b7 +0x31d9:  mov    %eax,(%esp)
081041ba +0x31dc:  call   08104298 <+0x32ba>
081041bf +0x31e1:  add    $0x14,%esp
081041c2 +0x31e4:  pop    %ebx
081041c3 +0x31e5:  pop    %ebp
081041c4 +0x31e6:  ret
081041c5 +0x31e7:  nop
081041c6 +0x31e8:  push   %ebp
081041c7 +0x31e9:  mov    %esp,%ebp
081041c9 +0x31eb:  sub    $0x18,%esp
081041cc +0x31ee:  mov    0x8(%ebp),%eax
081041cf +0x31f1:  mov    %eax,(%esp)
081041d2 +0x31f4:  call   081042dc <+0x32fe>
081041d7 +0x31f9:  cmp    0xc(%ebp),%eax
081041da +0x31fc:  setb   %al
081041dd +0x31ff:  movzbl %al,%eax
081041e0 +0x3202:  test   %eax,%eax
081041e2 +0x3204:  setne  %al
081041e5 +0x3207:  test   %al,%al
081041e7 +0x3209:  je     081041ee <+0x3210>
081041e9 +0x320b:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081041ee +0x3210:  mov    0xc(%ebp),%edx
081041f1 +0x3213:  mov    %edx,%eax
081041f3 +0x3215:  add    %eax,%eax
081041f5 +0x3217:  add    %edx,%eax
081041f7 +0x3219:  shl    $0x3,%eax
081041fa +0x321c:  mov    %eax,(%esp)
081041fd +0x321f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08104202 +0x3224:  leave
08104203 +0x3225:  ret
08104204 +0x3226:  push   %ebp
08104205 +0x3227:  mov    %esp,%ebp
08104207 +0x3229:  sub    $0x18,%esp
0810420a +0x322c:  mov    0x8(%ebp),%eax
0810420d +0x322f:  movl   $0x0,(%eax)
08104213 +0x3235:  mov    0x8(%ebp),%eax
08104216 +0x3238:  movl   $0x0,0x4(%eax)
0810421d +0x323f:  mov    0x8(%ebp),%eax
08104220 +0x3242:  movl   $0x0,0x8(%eax)
08104227 +0x3249:  mov    0x8(%ebp),%eax
0810422a +0x324c:  movl   $0x0,0xc(%eax)
08104231 +0x3253:  mov    0xc(%ebp),%eax
08104234 +0x3256:  mov    %eax,(%esp)
08104237 +0x3259:  call   081040fd <+0x311f>
0810423c +0x325e:  mov    0x8(%ebp),%ecx
0810423f +0x3261:  mov    0x4(%eax),%edx
08104242 +0x3264:  mov    (%eax),%eax
08104244 +0x3266:  mov    %eax,0x10(%ecx)
08104247 +0x3269:  mov    %edx,0x14(%ecx)
0810424a +0x326c:  leave
0810424b +0x326d:  ret
0810424c +0x326e:  push   %ebp
0810424d +0x326f:  mov    %esp,%ebp
0810424f +0x3271:  mov    0x8(%ebp),%eax
08104252 +0x3274:  pop    %ebp
08104253 +0x3275:  ret
08104254 +0x3276:  push   %ebp
08104255 +0x3277:  mov    %esp,%ebp
08104257 +0x3279:  push   %esi
08104258 +0x327a:  push   %ebx
08104259 +0x327b:  sub    $0x10,%esp
0810425c +0x327e:  mov    0x10(%ebp),%eax
0810425f +0x3281:  mov    %eax,(%esp)
08104262 +0x3284:  call   081042e6 <+0x3308>
08104267 +0x3289:  mov    %eax,%esi
08104269 +0x328b:  mov    0xc(%ebp),%eax
0810426c +0x328e:  mov    %eax,(%esp)
0810426f +0x3291:  call   081042e6 <+0x3308>
08104274 +0x3296:  mov    %eax,%ebx
08104276 +0x3298:  mov    0x8(%ebp),%eax
08104279 +0x329b:  mov    %eax,(%esp)
0810427c +0x329e:  call   081042e6 <+0x3308>
08104281 +0x32a3:  mov    %esi,0x8(%esp)
08104285 +0x32a7:  mov    %ebx,0x4(%esp)
08104289 +0x32ab:  mov    %eax,(%esp)
0810428c +0x32ae:  call   081042ee <+0x3310>
08104291 +0x32b3:  add    $0x10,%esp
08104294 +0x32b6:  pop    %ebx
08104295 +0x32b7:  pop    %esi
08104296 +0x32b8:  pop    %ebp
08104297 +0x32b9:  ret
08104298 +0x32ba:  push   %ebp
08104299 +0x32bb:  mov    %esp,%ebp
0810429b +0x32bd:  push   %esi
0810429c +0x32be:  push   %ebx
0810429d +0x32bf:  sub    $0x10,%esp
081042a0 +0x32c2:  mov    0x10(%ebp),%eax
081042a3 +0x32c5:  mov    %eax,(%esp)
081042a6 +0x32c8:  call   081042e6 <+0x3308>
081042ab +0x32cd:  mov    %eax,%esi
081042ad +0x32cf:  mov    0xc(%ebp),%eax
081042b0 +0x32d2:  mov    %eax,(%esp)
081042b3 +0x32d5:  call   081042e6 <+0x3308>
081042b8 +0x32da:  mov    %eax,%ebx
081042ba +0x32dc:  mov    0x8(%ebp),%eax
081042bd +0x32df:  mov    %eax,(%esp)
081042c0 +0x32e2:  call   081042e6 <+0x3308>
081042c5 +0x32e7:  mov    %esi,0x8(%esp)
081042c9 +0x32eb:  mov    %ebx,0x4(%esp)
081042cd +0x32ef:  mov    %eax,(%esp)
081042d0 +0x32f2:  call   08104313 <+0x3335>
081042d5 +0x32f7:  add    $0x10,%esp
081042d8 +0x32fa:  pop    %ebx
081042d9 +0x32fb:  pop    %esi
081042da +0x32fc:  pop    %ebp
081042db +0x32fd:  ret
081042dc +0x32fe:  push   %ebp
081042dd +0x32ff:  mov    %esp,%ebp
081042df +0x3301:  mov    $0xaaaaaaa,%eax
081042e4 +0x3306:  pop    %ebp
081042e5 +0x3307:  ret
081042e6 +0x3308:  push   %ebp
081042e7 +0x3309:  mov    %esp,%ebp
081042e9 +0x330b:  mov    0x8(%ebp),%eax
081042ec +0x330e:  pop    %ebp
081042ed +0x330f:  ret
081042ee +0x3310:  push   %ebp
081042ef +0x3311:  mov    %esp,%ebp
081042f1 +0x3313:  sub    $0x28,%esp
081042f4 +0x3316:  movb   $0x1,-0x9(%ebp)
081042f8 +0x331a:  mov    0x10(%ebp),%eax
081042fb +0x331d:  mov    %eax,0x8(%esp)
081042ff +0x3321:  mov    0xc(%ebp),%eax
08104302 +0x3324:  mov    %eax,0x4(%esp)
08104306 +0x3328:  mov    0x8(%ebp),%eax
08104309 +0x332b:  mov    %eax,(%esp)
0810430c +0x332e:  call   08104338 <+0x335a>
08104311 +0x3333:  leave
08104312 +0x3334:  ret
08104313 +0x3335:  push   %ebp
08104314 +0x3336:  mov    %esp,%ebp
08104316 +0x3338:  sub    $0x28,%esp
08104319 +0x333b:  movb   $0x1,-0x9(%ebp)
0810431d +0x333f:  mov    0x10(%ebp),%eax
08104320 +0x3342:  mov    %eax,0x8(%esp)
08104324 +0x3346:  mov    0xc(%ebp),%eax
08104327 +0x3349:  mov    %eax,0x4(%esp)
0810432b +0x334d:  mov    0x8(%ebp),%eax
0810432e +0x3350:  mov    %eax,(%esp)
08104331 +0x3353:  call   0810437d <+0x339f>
08104336 +0x3358:  leave
08104337 +0x3359:  ret
08104338 +0x335a:  push   %ebp
08104339 +0x335b:  mov    %esp,%ebp
0810433b +0x335d:  sub    $0x18,%esp
0810433e +0x3360:  mov    0xc(%ebp),%edx
08104341 +0x3363:  mov    0x8(%ebp),%eax
08104344 +0x3366:  mov    %edx,%ecx
08104346 +0x3368:  sub    %eax,%ecx
08104348 +0x336a:  mov    %ecx,%eax
0810434a +0x336c:  sar    $0x2,%eax
0810434d +0x336f:  shl    $0x2,%eax
08104350 +0x3372:  mov    %eax,0x8(%esp)
08104354 +0x3376:  mov    0x8(%ebp),%eax
08104357 +0x3379:  mov    %eax,0x4(%esp)
0810435b +0x337d:  mov    0x10(%ebp),%eax
0810435e +0x3380:  mov    %eax,(%esp)
08104361 +0x3383:  call   0807d880 <_init+0x178>
08104366 +0x3388:  mov    0xc(%ebp),%edx
08104369 +0x338b:  mov    0x8(%ebp),%eax
0810436c +0x338e:  mov    %edx,%ecx
0810436e +0x3390:  sub    %eax,%ecx
08104370 +0x3392:  mov    %ecx,%eax
08104372 +0x3394:  sar    $0x2,%eax
08104375 +0x3397:  shl    $0x2,%eax
08104378 +0x339a:  add    0x10(%ebp),%eax
0810437b +0x339d:  leave
0810437c +0x339e:  ret
0810437d +0x339f:  push   %ebp
0810437e +0x33a0:  mov    %esp,%ebp
08104380 +0x33a2:  sub    $0x28,%esp
08104383 +0x33a5:  mov    0xc(%ebp),%edx
08104386 +0x33a8:  mov    0x8(%ebp),%eax
08104389 +0x33ab:  mov    %edx,%ecx
0810438b +0x33ad:  sub    %eax,%ecx
0810438d +0x33af:  mov    %ecx,%eax
0810438f +0x33b1:  sar    $0x2,%eax
08104392 +0x33b4:  mov    %eax,-0xc(%ebp)
08104395 +0x33b7:  mov    -0xc(%ebp),%eax
08104398 +0x33ba:  lea    0x0(,%eax,4),%edx
0810439f +0x33c1:  mov    -0xc(%ebp),%eax
081043a2 +0x33c4:  shl    $0x2,%eax
081043a5 +0x33c7:  neg    %eax
081043a7 +0x33c9:  add    0x10(%ebp),%eax
081043aa +0x33cc:  mov    %edx,0x8(%esp)
081043ae +0x33d0:  mov    0x8(%ebp),%edx
081043b1 +0x33d3:  mov    %edx,0x4(%esp)
081043b5 +0x33d7:  mov    %eax,(%esp)
081043b8 +0x33da:  call   0807d880 <_init+0x178>
081043bd +0x33df:  mov    -0xc(%ebp),%eax
081043c0 +0x33e2:  shl    $0x2,%eax
081043c3 +0x33e5:  neg    %eax
081043c5 +0x33e7:  add    0x10(%ebp),%eax
081043c8 +0x33ea:  leave
081043c9 +0x33eb:  ret
081043ca +0x33ec:  nop
081043cb +0x33ed:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8100fde

/* WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&) */

void WongWork::IPG::CIPGHelper::_GLOBAL__I_getIPGStatus(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
