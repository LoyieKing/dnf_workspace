# makeNotifyInfo

`_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard`

`global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CGlobalEffect` | `0x084b7fbd` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7fbd  _GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard
#           global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const
# range [0x084b7fbd, 0x084b91d3]
084b7fbd +0x0000:  push   %ebp
084b7fbe +0x0001:  mov    %esp,%ebp
084b7fc0 +0x0003:  sub    $0x18,%esp
084b7fc3 +0x0006:  movl   $0xffff,0x4(%esp)
084b7fcb +0x000e:  movl   $0x1,(%esp)
084b7fd2 +0x0015:  call   084b7f7d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084b7fd7 +0x001a:  leave
084b7fd8 +0x001b:  ret
084b7fd9 +0x001c:  nop
084b7fda +0x001d:  push   %ebp
084b7fdb +0x001e:  mov    %esp,%ebp
084b7fdd +0x0020:  mov    0x8(%ebp),%eax
084b7fe0 +0x0023:  mov    (%eax),%eax
084b7fe2 +0x0025:  pop    %ebp
084b7fe3 +0x0026:  ret
084b7fe4 +0x0027:  push   %ebp
084b7fe5 +0x0028:  mov    %esp,%ebp
084b7fe7 +0x002a:  sub    $0x4,%esp
084b7fea +0x002d:  mov    0x8(%ebp),%eax
084b7fed +0x0030:  mov    0x4(%eax),%eax
084b7ff0 +0x0033:  mov    %eax,-0x4(%ebp)
084b7ff3 +0x0036:  flds   -0x4(%ebp)
084b7ff6 +0x0039:  leave
084b7ff7 +0x003a:  ret
084b7ff8 +0x003b:  push   %ebp
084b7ff9 +0x003c:  mov    %esp,%ebp
084b7ffb +0x003e:  mov    0x8(%ebp),%eax
084b7ffe +0x0041:  mov    0x28(%eax),%eax
084b8001 +0x0044:  cmp    0xc(%ebp),%eax
084b8004 +0x0047:  setle  %al
084b8007 +0x004a:  pop    %ebp
084b8008 +0x004b:  ret
084b8009 +0x004c:  nop
084b800a +0x004d:  push   %ebp
084b800b +0x004e:  mov    %esp,%ebp
084b800d +0x0050:  sub    $0x18,%esp
084b8010 +0x0053:  mov    0x8(%ebp),%eax
084b8013 +0x0056:  mov    0xc(%ebp),%edx
084b8016 +0x0059:  mov    %edx,(%eax)
084b8018 +0x005b:  mov    0x8(%ebp),%eax
084b801b +0x005e:  mov    0x10(%ebp),%edx
084b801e +0x0061:  mov    %edx,0x4(%eax)
084b8021 +0x0064:  mov    0x8(%ebp),%eax
084b8024 +0x0067:  lea    0x8(%eax),%edx
084b8027 +0x006a:  movl   $0x1e,0x8(%esp)
084b802f +0x0072:  mov    0x14(%ebp),%eax
084b8032 +0x0075:  mov    %eax,0x4(%esp)
084b8036 +0x0079:  mov    %edx,(%esp)
084b8039 +0x007c:  call   0807d8d0 <_init+0x1c8>
084b803e +0x0081:  mov    0x8(%ebp),%eax
084b8041 +0x0084:  mov    0x18(%ebp),%edx
084b8044 +0x0087:  mov    %edx,0x28(%eax)
084b8047 +0x008a:  leave
084b8048 +0x008b:  ret
084b8049 +0x008c:  nop
084b804a +0x008d:  push   %ebp
084b804b +0x008e:  mov    %esp,%ebp
084b804d +0x0090:  sub    $0x18,%esp
084b8050 +0x0093:  mov    0x8(%ebp),%eax
084b8053 +0x0096:  mov    (%eax),%eax
084b8055 +0x0098:  mov    0x10(%ebp),%edx
084b8058 +0x009b:  mov    %edx,0x8(%esp)
084b805c +0x009f:  mov    0xc(%ebp),%edx
084b805f +0x00a2:  mov    %edx,0x4(%esp)
084b8063 +0x00a6:  mov    %eax,(%esp)
084b8066 +0x00a9:  call   0858cad4 <_ZN9PacketBuf7put_intERii>  ; PacketBuf::put_int(int&, int)
084b806b +0x00ae:  leave
084b806c +0x00af:  ret
084b806d +0x00b0:  nop
084b806e +0x00b1:  push   %ebp
084b806f +0x00b2:  mov    %esp,%ebp
084b8071 +0x00b4:  sub    $0x18,%esp
084b8074 +0x00b7:  mov    0xc(%ebp),%eax
084b8077 +0x00ba:  mov    %eax,(%esp)
084b807a +0x00bd:  call   084b8372 <+0x3b5>
084b807f +0x00c2:  mov    %eax,0x4(%esp)
084b8083 +0x00c6:  mov    0x8(%ebp),%eax
084b8086 +0x00c9:  mov    %eax,(%esp)
084b8089 +0x00cc:  call   084b837a <+0x3bd>
084b808e +0x00d1:  leave
084b808f +0x00d2:  ret
084b8090 +0x00d3:  push   %ebp
084b8091 +0x00d4:  mov    %esp,%ebp
084b8093 +0x00d6:  push   %ebx
084b8094 +0x00d7:  sub    $0x14,%esp
084b8097 +0x00da:  mov    0x8(%ebp),%ebx
084b809a +0x00dd:  mov    0xc(%ebp),%eax
084b809d +0x00e0:  mov    %eax,0x4(%esp)
084b80a1 +0x00e4:  mov    %ebx,(%esp)
084b80a4 +0x00e7:  call   084b8404 <+0x447>
084b80a9 +0x00ec:  mov    %ebx,%eax
084b80ab +0x00ee:  add    $0x14,%esp
084b80ae +0x00f1:  pop    %ebx
084b80af +0x00f2:  pop    %ebp
084b80b0 +0x00f3:  ret    $0x4
084b80b3 +0x00f6:  nop
084b80b4 +0x00f7:  push   %ebp
084b80b5 +0x00f8:  mov    %esp,%ebp
084b80b7 +0x00fa:  push   %ebx
084b80b8 +0x00fb:  sub    $0x14,%esp
084b80bb +0x00fe:  mov    0x8(%ebp),%ebx
084b80be +0x0101:  mov    0xc(%ebp),%eax
084b80c1 +0x0104:  add    $0x4,%eax
084b80c4 +0x0107:  mov    %eax,0x4(%esp)
084b80c8 +0x010b:  mov    %ebx,(%esp)
084b80cb +0x010e:  call   084b8404 <+0x447>
084b80d0 +0x0113:  mov    %ebx,%eax
084b80d2 +0x0115:  add    $0x14,%esp
084b80d5 +0x0118:  pop    %ebx
084b80d6 +0x0119:  pop    %ebp
084b80d7 +0x011a:  ret    $0x4
084b80da +0x011d:  push   %ebp
084b80db +0x011e:  mov    %esp,%ebp
084b80dd +0x0120:  push   %ebx
084b80de +0x0121:  sub    $0x14,%esp
084b80e1 +0x0124:  mov    0x8(%ebp),%eax
084b80e4 +0x0127:  mov    %eax,(%esp)
084b80e7 +0x012a:  call   084b8414 <+0x457>
084b80ec +0x012f:  mov    (%eax),%ebx
084b80ee +0x0131:  mov    0xc(%ebp),%eax
084b80f1 +0x0134:  mov    %eax,(%esp)
084b80f4 +0x0137:  call   084b8414 <+0x457>
084b80f9 +0x013c:  mov    (%eax),%eax
084b80fb +0x013e:  cmp    %eax,%ebx
084b80fd +0x0140:  setne  %al
084b8100 +0x0143:  add    $0x14,%esp
084b8103 +0x0146:  pop    %ebx
084b8104 +0x0147:  pop    %ebp
084b8105 +0x0148:  ret
084b8106 +0x0149:  push   %ebp
084b8107 +0x014a:  mov    %esp,%ebp
084b8109 +0x014c:  mov    0x8(%ebp),%eax
084b810c +0x014f:  mov    (%eax),%eax
084b810e +0x0151:  pop    %ebp
084b810f +0x0152:  ret
084b8110 +0x0153:  push   %ebp
084b8111 +0x0154:  mov    %esp,%ebp
084b8113 +0x0156:  push   %ebx
084b8114 +0x0157:  sub    $0x34,%esp
084b8117 +0x015a:  mov    0x8(%ebp),%ebx
084b811a +0x015d:  lea    -0x24(%ebp),%eax
084b811d +0x0160:  mov    0xc(%ebp),%edx
084b8120 +0x0163:  mov    %edx,0x4(%esp)
084b8124 +0x0167:  mov    %eax,(%esp)
084b8127 +0x016a:  call   084b80b4 <+0xf7>
084b812c +0x016f:  sub    $0x4,%esp
084b812f +0x0172:  movl   $0x1,-0x1c(%ebp)
084b8136 +0x0179:  lea    -0x20(%ebp),%eax
084b8139 +0x017c:  lea    -0x1c(%ebp),%edx
084b813c +0x017f:  mov    %edx,0x8(%esp)
084b8140 +0x0183:  lea    0x10(%ebp),%edx
084b8143 +0x0186:  mov    %edx,0x4(%esp)
084b8147 +0x018a:  mov    %eax,(%esp)
084b814a +0x018d:  call   084b841c <+0x45f>
084b814f +0x0192:  sub    $0x4,%esp
084b8152 +0x0195:  lea    -0x24(%ebp),%eax
084b8155 +0x0198:  mov    %eax,0x4(%esp)
084b8159 +0x019c:  lea    -0x20(%ebp),%eax
084b815c +0x019f:  mov    %eax,(%esp)
084b815f +0x01a2:  call   084b80da <+0x11d>
084b8164 +0x01a7:  test   %al,%al
084b8166 +0x01a9:  je     084b81c3 <+0x206>
084b8168 +0x01ab:  lea    -0x14(%ebp),%eax
084b816b +0x01ae:  mov    0xc(%ebp),%edx
084b816e +0x01b1:  mov    %edx,0x4(%esp)
084b8172 +0x01b5:  mov    %eax,(%esp)
084b8175 +0x01b8:  call   084b80b4 <+0xf7>
084b817a +0x01bd:  sub    $0x4,%esp
084b817d +0x01c0:  movl   $0x1,-0xc(%ebp)
084b8184 +0x01c7:  lea    -0x10(%ebp),%eax
084b8187 +0x01ca:  lea    -0xc(%ebp),%edx
084b818a +0x01cd:  mov    %edx,0x8(%esp)
084b818e +0x01d1:  lea    0x10(%ebp),%edx
084b8191 +0x01d4:  mov    %edx,0x4(%esp)
084b8195 +0x01d8:  mov    %eax,(%esp)
084b8198 +0x01db:  call   084b841c <+0x45f>
084b819d +0x01e0:  sub    $0x4,%esp
084b81a0 +0x01e3:  lea    -0x18(%ebp),%eax
084b81a3 +0x01e6:  mov    0x10(%ebp),%edx
084b81a6 +0x01e9:  mov    %edx,0xc(%esp)
084b81aa +0x01ed:  mov    -0x14(%ebp),%edx
084b81ad +0x01f0:  mov    %edx,0x8(%esp)
084b81b1 +0x01f4:  mov    -0x10(%ebp),%edx
084b81b4 +0x01f7:  mov    %edx,0x4(%esp)
084b81b8 +0x01fb:  mov    %eax,(%esp)
084b81bb +0x01fe:  call   084b8452 <+0x495>
084b81c0 +0x0203:  sub    $0x4,%esp
084b81c3 +0x0206:  mov    0xc(%ebp),%eax
084b81c6 +0x0209:  mov    0x4(%eax),%eax
084b81c9 +0x020c:  lea    -0x2c(%eax),%edx
084b81cc +0x020f:  mov    0xc(%ebp),%eax
084b81cf +0x0212:  mov    %edx,0x4(%eax)
084b81d2 +0x0215:  mov    0xc(%ebp),%eax
084b81d5 +0x0218:  mov    0x4(%eax),%edx
084b81d8 +0x021b:  mov    0xc(%ebp),%eax
084b81db +0x021e:  mov    %edx,0x4(%esp)
084b81df +0x0222:  mov    %eax,(%esp)
084b81e2 +0x0225:  call   084b84b0 <+0x4f3>
084b81e7 +0x022a:  mov    0x10(%ebp),%eax
084b81ea +0x022d:  mov    %eax,(%ebx)
084b81ec +0x022f:  mov    %ebx,%eax
084b81ee +0x0231:  mov    -0x4(%ebp),%ebx
084b81f1 +0x0234:  leave
084b81f2 +0x0235:  ret    $0x4
084b81f5 +0x0238:  nop
084b81f6 +0x0239:  push   %ebp
084b81f7 +0x023a:  mov    %esp,%ebp
084b81f9 +0x023c:  mov    0x8(%ebp),%eax
084b81fc +0x023f:  mov    (%eax),%eax
084b81fe +0x0241:  lea    0x2c(%eax),%edx
084b8201 +0x0244:  mov    0x8(%ebp),%eax
084b8204 +0x0247:  mov    %edx,(%eax)
084b8206 +0x0249:  mov    0x8(%ebp),%eax
084b8209 +0x024c:  pop    %ebp
084b820a +0x024d:  ret
084b820b +0x024e:  nop
084b820c +0x024f:  push   %ebp
084b820d +0x0250:  mov    %esp,%ebp
084b820f +0x0252:  sub    $0x28,%esp
084b8212 +0x0255:  lea    -0x10(%ebp),%eax
084b8215 +0x0258:  mov    0x8(%ebp),%edx
084b8218 +0x025b:  mov    %edx,0x4(%esp)
084b821c +0x025f:  mov    %eax,(%esp)
084b821f +0x0262:  call   084b82fa <+0x33d>
084b8224 +0x0267:  sub    $0x4,%esp
084b8227 +0x026a:  lea    -0xc(%ebp),%eax
084b822a +0x026d:  mov    0x8(%ebp),%edx
084b822d +0x0270:  mov    %edx,0x4(%esp)
084b8231 +0x0274:  mov    %eax,(%esp)
084b8234 +0x0277:  call   084b82ce <+0x311>
084b8239 +0x027c:  sub    $0x4,%esp
084b823c +0x027f:  lea    -0x10(%ebp),%eax
084b823f +0x0282:  mov    %eax,0x4(%esp)
084b8243 +0x0286:  lea    -0xc(%ebp),%eax
084b8246 +0x0289:  mov    %eax,(%esp)
084b8249 +0x028c:  call   084b84c3 <+0x506>
084b824e +0x0291:  leave
084b824f +0x0292:  ret
084b8250 +0x0293:  push   %ebp
084b8251 +0x0294:  mov    %esp,%ebp
084b8253 +0x0296:  mov    0x8(%ebp),%eax
084b8256 +0x0299:  mov    (%eax),%eax
084b8258 +0x029b:  pop    %ebp
084b8259 +0x029c:  ret
084b825a +0x029d:  push   %ebp
084b825b +0x029e:  mov    %esp,%ebp
084b825d +0x02a0:  sub    $0x28,%esp
084b8260 +0x02a3:  mov    0x8(%ebp),%eax
084b8263 +0x02a6:  mov    0x4(%eax),%edx
084b8266 +0x02a9:  mov    0x8(%ebp),%eax
084b8269 +0x02ac:  mov    0x8(%eax),%eax
084b826c +0x02af:  cmp    %eax,%edx
084b826e +0x02b1:  je     084b829d <+0x2e0>
084b8270 +0x02b3:  mov    0x8(%ebp),%eax
084b8273 +0x02b6:  mov    0x4(%eax),%edx
084b8276 +0x02b9:  mov    0x8(%ebp),%eax
084b8279 +0x02bc:  mov    0xc(%ebp),%ecx
084b827c +0x02bf:  mov    %ecx,0x8(%esp)
084b8280 +0x02c3:  mov    %edx,0x4(%esp)
084b8284 +0x02c7:  mov    %eax,(%esp)
084b8287 +0x02ca:  call   084b84f0 <+0x533>
084b828c +0x02cf:  mov    0x8(%ebp),%eax
084b828f +0x02d2:  mov    0x4(%eax),%eax
084b8292 +0x02d5:  lea    0x2c(%eax),%edx
084b8295 +0x02d8:  mov    0x8(%ebp),%eax
084b8298 +0x02db:  mov    %edx,0x4(%eax)
084b829b +0x02de:  jmp    084b82cb <+0x30e>
084b829d +0x02e0:  lea    -0xc(%ebp),%eax
084b82a0 +0x02e3:  mov    0x8(%ebp),%edx
084b82a3 +0x02e6:  mov    %edx,0x4(%esp)
084b82a7 +0x02ea:  mov    %eax,(%esp)
084b82aa +0x02ed:  call   084b80b4 <+0xf7>
084b82af +0x02f2:  sub    $0x4,%esp
084b82b2 +0x02f5:  mov    0xc(%ebp),%eax
084b82b5 +0x02f8:  mov    %eax,0x8(%esp)
084b82b9 +0x02fc:  mov    -0xc(%ebp),%eax
084b82bc +0x02ff:  mov    %eax,0x4(%esp)
084b82c0 +0x0303:  mov    0x8(%ebp),%eax
084b82c3 +0x0306:  mov    %eax,(%esp)
084b82c6 +0x0309:  call   084b8554 <+0x597>
084b82cb +0x030e:  leave
084b82cc +0x030f:  ret
084b82cd +0x0310:  nop
084b82ce +0x0311:  push   %ebp
084b82cf +0x0312:  mov    %esp,%ebp
084b82d1 +0x0314:  push   %ebx
084b82d2 +0x0315:  sub    $0x24,%esp
084b82d5 +0x0318:  mov    0x8(%ebp),%ebx
084b82d8 +0x031b:  mov    0xc(%ebp),%eax
084b82db +0x031e:  mov    (%eax),%eax
084b82dd +0x0320:  mov    %eax,-0xc(%ebp)
084b82e0 +0x0323:  lea    -0xc(%ebp),%eax
084b82e3 +0x0326:  mov    %eax,0x4(%esp)
084b82e7 +0x032a:  mov    %ebx,(%esp)
084b82ea +0x032d:  call   084b8848 <+0x88b>
084b82ef +0x0332:  mov    %ebx,%eax
084b82f1 +0x0334:  add    $0x24,%esp
084b82f4 +0x0337:  pop    %ebx
084b82f5 +0x0338:  pop    %ebp
084b82f6 +0x0339:  ret    $0x4
084b82f9 +0x033c:  nop
084b82fa +0x033d:  push   %ebp
084b82fb +0x033e:  mov    %esp,%ebp
084b82fd +0x0340:  push   %ebx
084b82fe +0x0341:  sub    $0x24,%esp
084b8301 +0x0344:  mov    0x8(%ebp),%ebx
084b8304 +0x0347:  mov    0xc(%ebp),%eax
084b8307 +0x034a:  mov    0x4(%eax),%eax
084b830a +0x034d:  mov    %eax,-0xc(%ebp)
084b830d +0x0350:  lea    -0xc(%ebp),%eax
084b8310 +0x0353:  mov    %eax,0x4(%esp)
084b8314 +0x0357:  mov    %ebx,(%esp)
084b8317 +0x035a:  call   084b8848 <+0x88b>
084b831c +0x035f:  mov    %ebx,%eax
084b831e +0x0361:  add    $0x24,%esp
084b8321 +0x0364:  pop    %ebx
084b8322 +0x0365:  pop    %ebp
084b8323 +0x0366:  ret    $0x4
084b8326 +0x0369:  push   %ebp
084b8327 +0x036a:  mov    %esp,%ebp
084b8329 +0x036c:  push   %ebx
084b832a +0x036d:  sub    $0x14,%esp
084b832d +0x0370:  mov    0x8(%ebp),%eax
084b8330 +0x0373:  mov    %eax,(%esp)
084b8333 +0x0376:  call   084b8858 <+0x89b>
084b8338 +0x037b:  mov    (%eax),%ebx
084b833a +0x037d:  mov    0xc(%ebp),%eax
084b833d +0x0380:  mov    %eax,(%esp)
084b8340 +0x0383:  call   084b8858 <+0x89b>
084b8345 +0x0388:  mov    (%eax),%eax
084b8347 +0x038a:  cmp    %eax,%ebx
084b8349 +0x038c:  setne  %al
084b834c +0x038f:  add    $0x14,%esp
084b834f +0x0392:  pop    %ebx
084b8350 +0x0393:  pop    %ebp
084b8351 +0x0394:  ret
084b8352 +0x0395:  push   %ebp
084b8353 +0x0396:  mov    %esp,%ebp
084b8355 +0x0398:  mov    0x8(%ebp),%eax
084b8358 +0x039b:  mov    (%eax),%eax
084b835a +0x039d:  lea    0x2c(%eax),%edx
084b835d +0x03a0:  mov    0x8(%ebp),%eax
084b8360 +0x03a3:  mov    %edx,(%eax)
084b8362 +0x03a5:  mov    0x8(%ebp),%eax
084b8365 +0x03a8:  pop    %ebp
084b8366 +0x03a9:  ret
084b8367 +0x03aa:  nop
084b8368 +0x03ab:  push   %ebp
084b8369 +0x03ac:  mov    %esp,%ebp
084b836b +0x03ae:  mov    0x8(%ebp),%eax
084b836e +0x03b1:  mov    (%eax),%eax
084b8370 +0x03b3:  pop    %ebp
084b8371 +0x03b4:  ret
084b8372 +0x03b5:  push   %ebp
084b8373 +0x03b6:  mov    %esp,%ebp
084b8375 +0x03b8:  mov    0x8(%ebp),%eax
084b8378 +0x03bb:  pop    %ebp
084b8379 +0x03bc:  ret
084b837a +0x03bd:  push   %ebp
084b837b +0x03be:  mov    %esp,%ebp
084b837d +0x03c0:  push   %ebx
084b837e +0x03c1:  sub    $0x24,%esp
084b8381 +0x03c4:  mov    0x8(%ebp),%eax
084b8384 +0x03c7:  mov    0x4(%eax),%edx
084b8387 +0x03ca:  mov    0x8(%ebp),%eax
084b838a +0x03cd:  mov    0x8(%eax),%eax
084b838d +0x03d0:  cmp    %eax,%edx
084b838f +0x03d2:  je     084b83c6 <+0x409>
084b8391 +0x03d4:  mov    0xc(%ebp),%eax
084b8394 +0x03d7:  mov    %eax,(%esp)
084b8397 +0x03da:  call   084b8860 <+0x8a3>
084b839c +0x03df:  mov    0x8(%ebp),%edx
084b839f +0x03e2:  mov    0x4(%edx),%ecx
084b83a2 +0x03e5:  mov    0x8(%ebp),%edx
084b83a5 +0x03e8:  mov    %eax,0x8(%esp)
084b83a9 +0x03ec:  mov    %ecx,0x4(%esp)
084b83ad +0x03f0:  mov    %edx,(%esp)
084b83b0 +0x03f3:  call   084b8868 <+0x8ab>
084b83b5 +0x03f8:  mov    0x8(%ebp),%eax
084b83b8 +0x03fb:  mov    0x4(%eax),%eax
084b83bb +0x03fe:  lea    0x2c(%eax),%edx
084b83be +0x0401:  mov    0x8(%ebp),%eax
084b83c1 +0x0404:  mov    %edx,0x4(%eax)
084b83c4 +0x0407:  jmp    084b83fe <+0x441>
084b83c6 +0x0409:  mov    0xc(%ebp),%eax
084b83c9 +0x040c:  mov    %eax,(%esp)
084b83cc +0x040f:  call   084b8860 <+0x8a3>
084b83d1 +0x0414:  mov    %eax,%ebx
084b83d3 +0x0416:  lea    -0xc(%ebp),%eax
084b83d6 +0x0419:  mov    0x8(%ebp),%edx
084b83d9 +0x041c:  mov    %edx,0x4(%esp)
084b83dd +0x0420:  mov    %eax,(%esp)
084b83e0 +0x0423:  call   084b80b4 <+0xf7>
084b83e5 +0x0428:  sub    $0x4,%esp
084b83e8 +0x042b:  mov    %ebx,0x8(%esp)
084b83ec +0x042f:  mov    -0xc(%ebp),%eax
084b83ef +0x0432:  mov    %eax,0x4(%esp)
084b83f3 +0x0436:  mov    0x8(%ebp),%eax
084b83f6 +0x0439:  mov    %eax,(%esp)
084b83f9 +0x043c:  call   084b88dc <+0x91f>
084b83fe +0x0441:  mov    -0x4(%ebp),%ebx
084b8401 +0x0444:  leave
084b8402 +0x0445:  ret
084b8403 +0x0446:  nop
084b8404 +0x0447:  push   %ebp
084b8405 +0x0448:  mov    %esp,%ebp
084b8407 +0x044a:  mov    0xc(%ebp),%eax
084b840a +0x044d:  mov    (%eax),%edx
084b840c +0x044f:  mov    0x8(%ebp),%eax
084b840f +0x0452:  mov    %edx,(%eax)
084b8411 +0x0454:  pop    %ebp
084b8412 +0x0455:  ret
084b8413 +0x0456:  nop
084b8414 +0x0457:  push   %ebp
084b8415 +0x0458:  mov    %esp,%ebp
084b8417 +0x045a:  mov    0x8(%ebp),%eax
084b841a +0x045d:  pop    %ebp
084b841b +0x045e:  ret
084b841c +0x045f:  push   %ebp
084b841d +0x0460:  mov    %esp,%ebp
084b841f +0x0462:  push   %ebx
084b8420 +0x0463:  sub    $0x24,%esp
084b8423 +0x0466:  mov    0x8(%ebp),%ebx
084b8426 +0x0469:  mov    0xc(%ebp),%eax
084b8429 +0x046c:  mov    (%eax),%edx
084b842b +0x046e:  mov    0x10(%ebp),%eax
084b842e +0x0471:  mov    (%eax),%eax
084b8430 +0x0473:  imul   $0x2c,%eax,%eax
084b8433 +0x0476:  lea    (%edx,%eax,1),%eax
084b8436 +0x0479:  mov    %eax,-0xc(%ebp)
084b8439 +0x047c:  lea    -0xc(%ebp),%eax
084b843c +0x047f:  mov    %eax,0x4(%esp)
084b8440 +0x0483:  mov    %ebx,(%esp)
084b8443 +0x0486:  call   084b8404 <+0x447>
084b8448 +0x048b:  mov    %ebx,%eax
084b844a +0x048d:  add    $0x24,%esp
084b844d +0x0490:  pop    %ebx
084b844e +0x0491:  pop    %ebp
084b844f +0x0492:  ret    $0x4
084b8452 +0x0495:  push   %ebp
084b8453 +0x0496:  mov    %esp,%ebp
084b8455 +0x0498:  push   %ebx
084b8456 +0x0499:  sub    $0x24,%esp
084b8459 +0x049c:  mov    0x8(%ebp),%ebx
084b845c +0x049f:  lea    -0x10(%ebp),%eax
084b845f +0x04a2:  mov    0x10(%ebp),%edx
084b8462 +0x04a5:  mov    %edx,0x4(%esp)
084b8466 +0x04a9:  mov    %eax,(%esp)
084b8469 +0x04ac:  call   084b8bcf <+0xc12>
084b846e +0x04b1:  sub    $0x4,%esp
084b8471 +0x04b4:  lea    -0xc(%ebp),%eax
084b8474 +0x04b7:  mov    0xc(%ebp),%edx
084b8477 +0x04ba:  mov    %edx,0x4(%esp)
084b847b +0x04be:  mov    %eax,(%esp)
084b847e +0x04c1:  call   084b8bcf <+0xc12>
084b8483 +0x04c6:  sub    $0x4,%esp
084b8486 +0x04c9:  mov    0x14(%ebp),%eax
084b8489 +0x04cc:  mov    %eax,0xc(%esp)
084b848d +0x04d0:  mov    -0x10(%ebp),%eax
084b8490 +0x04d3:  mov    %eax,0x8(%esp)
084b8494 +0x04d7:  mov    -0xc(%ebp),%eax
084b8497 +0x04da:  mov    %eax,0x4(%esp)
084b849b +0x04de:  mov    %ebx,(%esp)
084b849e +0x04e1:  call   084b8bde <+0xc21>
084b84a3 +0x04e6:  sub    $0x4,%esp
084b84a6 +0x04e9:  mov    %ebx,%eax
084b84a8 +0x04eb:  mov    -0x4(%ebp),%ebx
084b84ab +0x04ee:  leave
084b84ac +0x04ef:  ret    $0x4
084b84af +0x04f2:  nop
084b84b0 +0x04f3:  push   %ebp
084b84b1 +0x04f4:  mov    %esp,%ebp
084b84b3 +0x04f6:  sub    $0x18,%esp
084b84b6 +0x04f9:  mov    0xc(%ebp),%eax
084b84b9 +0x04fc:  mov    %eax,(%esp)
084b84bc +0x04ff:  call   082a7214 <_GLOBAL__I__ZN4CLog5this_E+0x363b>  ; global constructors keyed to CLog::this_+0x363b
084b84c1 +0x0504:  leave
084b84c2 +0x0505:  ret
084b84c3 +0x0506:  push   %ebp
084b84c4 +0x0507:  mov    %esp,%ebp
084b84c6 +0x0509:  push   %ebx
084b84c7 +0x050a:  sub    $0x14,%esp
084b84ca +0x050d:  mov    0x8(%ebp),%eax
084b84cd +0x0510:  mov    %eax,(%esp)
084b84d0 +0x0513:  call   084b8858 <+0x89b>
084b84d5 +0x0518:  mov    (%eax),%ebx
084b84d7 +0x051a:  mov    0xc(%ebp),%eax
084b84da +0x051d:  mov    %eax,(%esp)
084b84dd +0x0520:  call   084b8858 <+0x89b>
084b84e2 +0x0525:  mov    (%eax),%eax
084b84e4 +0x0527:  cmp    %eax,%ebx
084b84e6 +0x0529:  sete   %al
084b84e9 +0x052c:  add    $0x14,%esp
084b84ec +0x052f:  pop    %ebx
084b84ed +0x0530:  pop    %ebp
084b84ee +0x0531:  ret
084b84ef +0x0532:  nop
084b84f0 +0x0533:  push   %ebp
084b84f1 +0x0534:  mov    %esp,%ebp
084b84f3 +0x0536:  sub    $0x18,%esp
084b84f6 +0x0539:  mov    0xc(%ebp),%eax
084b84f9 +0x053c:  mov    %eax,0x4(%esp)
084b84fd +0x0540:  movl   $0x2c,(%esp)
084b8504 +0x0547:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
084b8509 +0x054c:  mov    %eax,%edx
084b850b +0x054e:  test   %edx,%edx
084b850d +0x0550:  je     084b8552 <+0x595>
084b850f +0x0552:  mov    0x10(%ebp),%edx
084b8512 +0x0555:  mov    (%edx),%ecx
084b8514 +0x0557:  mov    %ecx,(%eax)
084b8516 +0x0559:  mov    0x4(%edx),%ecx
084b8519 +0x055c:  mov    %ecx,0x4(%eax)
084b851c +0x055f:  mov    0x8(%edx),%ecx
084b851f +0x0562:  mov    %ecx,0x8(%eax)
084b8522 +0x0565:  mov    0xc(%edx),%ecx
084b8525 +0x0568:  mov    %ecx,0xc(%eax)
084b8528 +0x056b:  mov    0x10(%edx),%ecx
084b852b +0x056e:  mov    %ecx,0x10(%eax)
084b852e +0x0571:  mov    0x14(%edx),%ecx
084b8531 +0x0574:  mov    %ecx,0x14(%eax)
084b8534 +0x0577:  mov    0x18(%edx),%ecx
084b8537 +0x057a:  mov    %ecx,0x18(%eax)
084b853a +0x057d:  mov    0x1c(%edx),%ecx
084b853d +0x0580:  mov    %ecx,0x1c(%eax)
084b8540 +0x0583:  mov    0x20(%edx),%ecx
084b8543 +0x0586:  mov    %ecx,0x20(%eax)
084b8546 +0x0589:  mov    0x24(%edx),%ecx
084b8549 +0x058c:  mov    %ecx,0x24(%eax)
084b854c +0x058f:  mov    0x28(%edx),%edx
084b854f +0x0592:  mov    %edx,0x28(%eax)
084b8552 +0x0595:  leave
084b8553 +0x0596:  ret
084b8554 +0x0597:  push   %ebp
084b8555 +0x0598:  mov    %esp,%ebp
084b8557 +0x059a:  push   %esi
084b8558 +0x059b:  push   %ebx
084b8559 +0x059c:  sub    $0x30,%esp
084b855c +0x059f:  mov    0x8(%ebp),%eax
084b855f +0x05a2:  mov    0x4(%eax),%edx
084b8562 +0x05a5:  mov    0x8(%ebp),%eax
084b8565 +0x05a8:  mov    0x8(%eax),%eax
084b8568 +0x05ab:  cmp    %eax,%edx
084b856a +0x05ad:  je     084b8635 <+0x678>
084b8570 +0x05b3:  mov    0x8(%ebp),%eax
084b8573 +0x05b6:  mov    0x4(%eax),%eax
084b8576 +0x05b9:  sub    $0x2c,%eax
084b8579 +0x05bc:  mov    %eax,(%esp)
084b857c +0x05bf:  call   084b8372 <+0x3b5>
084b8581 +0x05c4:  mov    0x8(%ebp),%edx
084b8584 +0x05c7:  mov    0x4(%edx),%ecx
084b8587 +0x05ca:  mov    0x8(%ebp),%edx
084b858a +0x05cd:  mov    %eax,0x8(%esp)
084b858e +0x05d1:  mov    %ecx,0x4(%esp)
084b8592 +0x05d5:  mov    %edx,(%esp)
084b8595 +0x05d8:  call   084b8868 <+0x8ab>
084b859a +0x05dd:  mov    0x8(%ebp),%eax
084b859d +0x05e0:  mov    0x4(%eax),%eax
084b85a0 +0x05e3:  lea    0x2c(%eax),%edx
084b85a3 +0x05e6:  mov    0x8(%ebp),%eax
084b85a6 +0x05e9:  mov    %edx,0x4(%eax)
084b85a9 +0x05ec:  mov    0x8(%ebp),%eax
084b85ac +0x05ef:  mov    0x4(%eax),%eax
084b85af +0x05f2:  lea    -0x2c(%eax),%esi
084b85b2 +0x05f5:  mov    0x8(%ebp),%eax
084b85b5 +0x05f8:  mov    0x4(%eax),%eax
084b85b8 +0x05fb:  lea    -0x58(%eax),%ebx
084b85bb +0x05fe:  lea    0xc(%ebp),%eax
084b85be +0x0601:  mov    %eax,(%esp)
084b85c1 +0x0604:  call   084b8414 <+0x457>
084b85c6 +0x0609:  mov    (%eax),%eax
084b85c8 +0x060b:  mov    %esi,0x8(%esp)
084b85cc +0x060f:  mov    %ebx,0x4(%esp)
084b85d0 +0x0613:  mov    %eax,(%esp)
084b85d3 +0x0616:  call   084b8c3d <+0xc80>
084b85d8 +0x061b:  lea    0xc(%ebp),%eax
084b85db +0x061e:  mov    %eax,(%esp)
084b85de +0x0621:  call   084b8250 <+0x293>
084b85e3 +0x0626:  mov    %eax,%ebx
084b85e5 +0x0628:  mov    0x10(%ebp),%eax
084b85e8 +0x062b:  mov    %eax,(%esp)
084b85eb +0x062e:  call   084b8c75 <+0xcb8>
084b85f0 +0x0633:  mov    (%eax),%edx
084b85f2 +0x0635:  mov    %edx,(%ebx)
084b85f4 +0x0637:  mov    0x4(%eax),%edx
084b85f7 +0x063a:  mov    %edx,0x4(%ebx)
084b85fa +0x063d:  mov    0x8(%eax),%edx
084b85fd +0x0640:  mov    %edx,0x8(%ebx)
084b8600 +0x0643:  mov    0xc(%eax),%edx
084b8603 +0x0646:  mov    %edx,0xc(%ebx)
084b8606 +0x0649:  mov    0x10(%eax),%edx
084b8609 +0x064c:  mov    %edx,0x10(%ebx)
084b860c +0x064f:  mov    0x14(%eax),%edx
084b860f +0x0652:  mov    %edx,0x14(%ebx)
084b8612 +0x0655:  mov    0x18(%eax),%edx
084b8615 +0x0658:  mov    %edx,0x18(%ebx)
084b8618 +0x065b:  mov    0x1c(%eax),%edx
084b861b +0x065e:  mov    %edx,0x1c(%ebx)
084b861e +0x0661:  mov    0x20(%eax),%edx
084b8621 +0x0664:  mov    %edx,0x20(%ebx)
084b8624 +0x0667:  mov    0x24(%eax),%edx
084b8627 +0x066a:  mov    %edx,0x24(%ebx)
084b862a +0x066d:  mov    0x28(%eax),%eax
084b862d +0x0670:  mov    %eax,0x28(%ebx)
084b8630 +0x0673:  jmp    084b883d <+0x880>
084b8635 +0x0678:  movl   $"vector::_M_insert_aux",0x8(%esp)
084b863d +0x0680:  movl   $0x1,0x4(%esp)
084b8645 +0x0688:  mov    0x8(%ebp),%eax
084b8648 +0x068b:  mov    %eax,(%esp)
084b864b +0x068e:  call   084b8c7e <+0xcc1>
084b8650 +0x0693:  mov    %eax,-0x18(%ebp)
084b8653 +0x0696:  lea    -0x1c(%ebp),%eax
084b8656 +0x0699:  mov    0x8(%ebp),%edx
084b8659 +0x069c:  mov    %edx,0x4(%esp)
084b865d +0x06a0:  mov    %eax,(%esp)
084b8660 +0x06a3:  call   084b8090 <+0xd3>
084b8665 +0x06a8:  sub    $0x4,%esp
084b8668 +0x06ab:  lea    -0x1c(%ebp),%eax
084b866b +0x06ae:  mov    %eax,0x4(%esp)
084b866f +0x06b2:  lea    0xc(%ebp),%eax
084b8672 +0x06b5:  mov    %eax,(%esp)
084b8675 +0x06b8:  call   084b8d23 <+0xd66>
084b867a +0x06bd:  mov    %eax,-0x14(%ebp)
084b867d +0x06c0:  mov    0x8(%ebp),%eax
084b8680 +0x06c3:  mov    -0x18(%ebp),%edx
084b8683 +0x06c6:  mov    %edx,0x4(%esp)
084b8687 +0x06ca:  mov    %eax,(%esp)
084b868a +0x06cd:  call   084b8d5c <+0xd9f>
084b868f +0x06d2:  mov    %eax,-0x10(%ebp)
084b8692 +0x06d5:  mov    -0x10(%ebp),%eax
084b8695 +0x06d8:  mov    %eax,-0xc(%ebp)
084b8698 +0x06db:  mov    0x10(%ebp),%eax
084b869b +0x06de:  mov    %eax,(%esp)
084b869e +0x06e1:  call   084b8c75 <+0xcb8>
084b86a3 +0x06e6:  mov    -0x14(%ebp),%edx
084b86a6 +0x06e9:  imul   $0x2c,%edx,%edx
084b86a9 +0x06ec:  mov    %edx,%ecx
084b86ab +0x06ee:  add    -0x10(%ebp),%ecx
084b86ae +0x06f1:  mov    0x8(%ebp),%edx
084b86b1 +0x06f4:  mov    %eax,0x8(%esp)
084b86b5 +0x06f8:  mov    %ecx,0x4(%esp)
084b86b9 +0x06fc:  mov    %edx,(%esp)
084b86bc +0x06ff:  call   084b84f0 <+0x533>
084b86c1 +0x0704:  movl   $0x0,-0xc(%ebp)
084b86c8 +0x070b:  mov    0x8(%ebp),%eax
084b86cb +0x070e:  mov    %eax,(%esp)
084b86ce +0x0711:  call   082b666c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8567>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8567
084b86d3 +0x0716:  mov    %eax,%ebx
084b86d5 +0x0718:  lea    0xc(%ebp),%eax
084b86d8 +0x071b:  mov    %eax,(%esp)
084b86db +0x071e:  call   084b8414 <+0x457>
084b86e0 +0x0723:  mov    (%eax),%edx
084b86e2 +0x0725:  mov    0x8(%ebp),%eax
084b86e5 +0x0728:  mov    (%eax),%eax
084b86e7 +0x072a:  mov    %ebx,0xc(%esp)
084b86eb +0x072e:  mov    -0x10(%ebp),%ecx
084b86ee +0x0731:  mov    %ecx,0x8(%esp)
084b86f2 +0x0735:  mov    %edx,0x4(%esp)
084b86f6 +0x0739:  mov    %eax,(%esp)
084b86f9 +0x073c:  call   084b8d8b <+0xdce>
084b86fe +0x0741:  mov    %eax,-0xc(%ebp)
084b8701 +0x0744:  addl   $0x2c,-0xc(%ebp)
084b8705 +0x0748:  mov    0x8(%ebp),%eax
084b8708 +0x074b:  mov    %eax,(%esp)
084b870b +0x074e:  call   082b666c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8567>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8567
084b8710 +0x0753:  mov    %eax,%ebx
084b8712 +0x0755:  mov    0x8(%ebp),%eax
084b8715 +0x0758:  mov    0x4(%eax),%esi
084b8718 +0x075b:  lea    0xc(%ebp),%eax
084b871b +0x075e:  mov    %eax,(%esp)
084b871e +0x0761:  call   084b8414 <+0x457>
084b8723 +0x0766:  mov    (%eax),%eax
084b8725 +0x0768:  mov    %ebx,0xc(%esp)
084b8729 +0x076c:  mov    -0xc(%ebp),%edx
084b872c +0x076f:  mov    %edx,0x8(%esp)
084b8730 +0x0773:  mov    %esi,0x4(%esp)
084b8734 +0x0777:  mov    %eax,(%esp)
084b8737 +0x077a:  call   084b8d8b <+0xdce>
084b873c +0x077f:  mov    %eax,-0xc(%ebp)
084b873f +0x0782:  mov    0x8(%ebp),%eax
084b8742 +0x0785:  mov    %eax,(%esp)
084b8745 +0x0788:  call   082b666c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8567>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8567
084b874a +0x078d:  mov    0x8(%ebp),%edx
084b874d +0x0790:  mov    0x4(%edx),%ecx
084b8750 +0x0793:  mov    0x8(%ebp),%edx
084b8753 +0x0796:  mov    (%edx),%edx
084b8755 +0x0798:  mov    %eax,0x8(%esp)
084b8759 +0x079c:  mov    %ecx,0x4(%esp)
084b875d +0x07a0:  mov    %edx,(%esp)
084b8760 +0x07a3:  call   082b6674 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x856f>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x856f
084b8765 +0x07a8:  mov    0x8(%ebp),%eax
084b8768 +0x07ab:  mov    0x8(%eax),%eax
084b876b +0x07ae:  mov    %eax,%edx
084b876d +0x07b0:  mov    0x8(%ebp),%eax
084b8770 +0x07b3:  mov    (%eax),%eax
084b8772 +0x07b5:  mov    %edx,%ecx
084b8774 +0x07b7:  sub    %eax,%ecx
084b8776 +0x07b9:  mov    %ecx,%eax
084b8778 +0x07bb:  sar    $0x2,%eax
084b877b +0x07be:  imul   $0xba2e8ba3,%eax,%eax
084b8781 +0x07c4:  mov    %eax,%ecx
084b8783 +0x07c6:  mov    0x8(%ebp),%eax
084b8786 +0x07c9:  mov    (%eax),%edx
084b8788 +0x07cb:  mov    0x8(%ebp),%eax
084b878b +0x07ce:  mov    %ecx,0x8(%esp)
084b878f +0x07d2:  mov    %edx,0x4(%esp)
084b8793 +0x07d6:  mov    %eax,(%esp)
084b8796 +0x07d9:  call   082bf69a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11595>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11595
084b879b +0x07de:  mov    0x8(%ebp),%eax
084b879e +0x07e1:  mov    -0x10(%ebp),%edx
084b87a1 +0x07e4:  mov    %edx,(%eax)
084b87a3 +0x07e6:  mov    0x8(%ebp),%eax
084b87a6 +0x07e9:  mov    -0xc(%ebp),%edx
084b87a9 +0x07ec:  mov    %edx,0x4(%eax)
084b87ac +0x07ef:  mov    -0x18(%ebp),%eax
084b87af +0x07f2:  imul   $0x2c,%eax,%eax
084b87b2 +0x07f5:  mov    %eax,%edx
084b87b4 +0x07f7:  add    -0x10(%ebp),%edx
084b87b7 +0x07fa:  mov    0x8(%ebp),%eax
084b87ba +0x07fd:  mov    %edx,0x8(%eax)
084b87bd +0x0800:  jmp    084b883d <+0x880>
084b87bf +0x0802:  mov    %eax,(%esp)
084b87c2 +0x0805:  call   08725ce0 <__cxa_begin_catch>
084b87c7 +0x080a:  cmpl   $0x0,-0xc(%ebp)
084b87cb +0x080e:  jne    084b87e9 <+0x82c>
084b87cd +0x0810:  mov    -0x14(%ebp),%eax
084b87d0 +0x0813:  imul   $0x2c,%eax,%eax
084b87d3 +0x0816:  mov    %eax,%edx
084b87d5 +0x0818:  add    -0x10(%ebp),%edx
084b87d8 +0x081b:  mov    0x8(%ebp),%eax
084b87db +0x081e:  mov    %edx,0x4(%esp)
084b87df +0x0822:  mov    %eax,(%esp)
084b87e2 +0x0825:  call   084b84b0 <+0x4f3>
084b87e7 +0x082a:  jmp    084b880a <+0x84d>
084b87e9 +0x082c:  mov    0x8(%ebp),%eax
084b87ec +0x082f:  mov    %eax,(%esp)
084b87ef +0x0832:  call   082b666c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8567>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8567
084b87f4 +0x0837:  mov    %eax,0x8(%esp)
084b87f8 +0x083b:  mov    -0xc(%ebp),%eax
084b87fb +0x083e:  mov    %eax,0x4(%esp)
084b87ff +0x0842:  mov    -0x10(%ebp),%eax
084b8802 +0x0845:  mov    %eax,(%esp)
084b8805 +0x0848:  call   082b6674 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x856f>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x856f
084b880a +0x084d:  mov    0x8(%ebp),%eax
084b880d +0x0850:  mov    -0x18(%ebp),%edx
084b8810 +0x0853:  mov    %edx,0x8(%esp)
084b8814 +0x0857:  mov    -0x10(%ebp),%edx
084b8817 +0x085a:  mov    %edx,0x4(%esp)
084b881b +0x085e:  mov    %eax,(%esp)
084b881e +0x0861:  call   082bf69a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11595>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11595
084b8823 +0x0866:  call   08724be0 <__cxa_rethrow>
084b8828 +0x086b:  mov    %edx,%ebx
084b882a +0x086d:  mov    %eax,%esi
084b882c +0x086f:  call   08725c30 <__cxa_end_catch>
084b8831 +0x0874:  mov    %esi,%eax
084b8833 +0x0876:  mov    %ebx,%edx
084b8835 +0x0878:  mov    %eax,(%esp)
084b8838 +0x087b:  call   08ae3750 <_Unwind_Resume>
084b883d +0x0880:  lea    -0x8(%ebp),%esp
084b8840 +0x0883:  add    $0x0,%esp
084b8843 +0x0886:  pop    %ebx
084b8844 +0x0887:  pop    %esi
084b8845 +0x0888:  pop    %ebp
084b8846 +0x0889:  ret
084b8847 +0x088a:  nop
084b8848 +0x088b:  push   %ebp
084b8849 +0x088c:  mov    %esp,%ebp
084b884b +0x088e:  mov    0xc(%ebp),%eax
084b884e +0x0891:  mov    (%eax),%edx
084b8850 +0x0893:  mov    0x8(%ebp),%eax
084b8853 +0x0896:  mov    %edx,(%eax)
084b8855 +0x0898:  pop    %ebp
084b8856 +0x0899:  ret
084b8857 +0x089a:  nop
084b8858 +0x089b:  push   %ebp
084b8859 +0x089c:  mov    %esp,%ebp
084b885b +0x089e:  mov    0x8(%ebp),%eax
084b885e +0x08a1:  pop    %ebp
084b885f +0x08a2:  ret
084b8860 +0x08a3:  push   %ebp
084b8861 +0x08a4:  mov    %esp,%ebp
084b8863 +0x08a6:  mov    0x8(%ebp),%eax
084b8866 +0x08a9:  pop    %ebp
084b8867 +0x08aa:  ret
084b8868 +0x08ab:  push   %ebp
084b8869 +0x08ac:  mov    %esp,%ebp
084b886b +0x08ae:  push   %ebx
084b886c +0x08af:  sub    $0x14,%esp
084b886f +0x08b2:  mov    0x10(%ebp),%eax
084b8872 +0x08b5:  mov    %eax,(%esp)
084b8875 +0x08b8:  call   084b8860 <+0x8a3>
084b887a +0x08bd:  mov    %eax,%ebx
084b887c +0x08bf:  mov    0xc(%ebp),%eax
084b887f +0x08c2:  mov    %eax,0x4(%esp)
084b8883 +0x08c6:  movl   $0x2c,(%esp)
084b888a +0x08cd:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
084b888f +0x08d2:  mov    %eax,%edx
084b8891 +0x08d4:  test   %edx,%edx
084b8893 +0x08d6:  je     084b88d5 <+0x918>
084b8895 +0x08d8:  mov    (%ebx),%edx
084b8897 +0x08da:  mov    %edx,(%eax)
084b8899 +0x08dc:  mov    0x4(%ebx),%edx
084b889c +0x08df:  mov    %edx,0x4(%eax)
084b889f +0x08e2:  mov    0x8(%ebx),%edx
084b88a2 +0x08e5:  mov    %edx,0x8(%eax)
084b88a5 +0x08e8:  mov    0xc(%ebx),%edx
084b88a8 +0x08eb:  mov    %edx,0xc(%eax)
084b88ab +0x08ee:  mov    0x10(%ebx),%edx
084b88ae +0x08f1:  mov    %edx,0x10(%eax)
084b88b1 +0x08f4:  mov    0x14(%ebx),%edx
084b88b4 +0x08f7:  mov    %edx,0x14(%eax)
084b88b7 +0x08fa:  mov    0x18(%ebx),%edx
084b88ba +0x08fd:  mov    %edx,0x18(%eax)
084b88bd +0x0900:  mov    0x1c(%ebx),%edx
084b88c0 +0x0903:  mov    %edx,0x1c(%eax)
084b88c3 +0x0906:  mov    0x20(%ebx),%edx
084b88c6 +0x0909:  mov    %edx,0x20(%eax)
084b88c9 +0x090c:  mov    0x24(%ebx),%edx
084b88cc +0x090f:  mov    %edx,0x24(%eax)
084b88cf +0x0912:  mov    0x28(%ebx),%edx
084b88d2 +0x0915:  mov    %edx,0x28(%eax)
084b88d5 +0x0918:  add    $0x14,%esp
084b88d8 +0x091b:  pop    %ebx
084b88d9 +0x091c:  pop    %ebp
084b88da +0x091d:  ret
084b88db +0x091e:  nop
084b88dc +0x091f:  push   %ebp
084b88dd +0x0920:  mov    %esp,%ebp
084b88df +0x0922:  push   %esi
084b88e0 +0x0923:  push   %ebx
084b88e1 +0x0924:  sub    $0x30,%esp
084b88e4 +0x0927:  mov    0x8(%ebp),%eax
084b88e7 +0x092a:  mov    0x4(%eax),%edx
084b88ea +0x092d:  mov    0x8(%ebp),%eax
084b88ed +0x0930:  mov    0x8(%eax),%eax
084b88f0 +0x0933:  cmp    %eax,%edx
084b88f2 +0x0935:  je     084b89bd <+0xa00>
084b88f8 +0x093b:  mov    0x8(%ebp),%eax
084b88fb +0x093e:  mov    0x4(%eax),%eax
084b88fe +0x0941:  sub    $0x2c,%eax
084b8901 +0x0944:  mov    %eax,(%esp)
084b8904 +0x0947:  call   084b8372 <+0x3b5>
084b8909 +0x094c:  mov    0x8(%ebp),%edx
084b890c +0x094f:  mov    0x4(%edx),%ecx
084b890f +0x0952:  mov    0x8(%ebp),%edx
084b8912 +0x0955:  mov    %eax,0x8(%esp)
084b8916 +0x0959:  mov    %ecx,0x4(%esp)
084b891a +0x095d:  mov    %edx,(%esp)
084b891d +0x0960:  call   084b8868 <+0x8ab>
084b8922 +0x0965:  mov    0x8(%ebp),%eax
084b8925 +0x0968:  mov    0x4(%eax),%eax
084b8928 +0x096b:  lea    0x2c(%eax),%edx
084b892b +0x096e:  mov    0x8(%ebp),%eax
084b892e +0x0971:  mov    %edx,0x4(%eax)
084b8931 +0x0974:  mov    0x8(%ebp),%eax
084b8934 +0x0977:  mov    0x4(%eax),%eax
084b8937 +0x097a:  lea    -0x2c(%eax),%esi
084b893a +0x097d:  mov    0x8(%ebp),%eax
084b893d +0x0980:  mov    0x4(%eax),%eax
084b8940 +0x0983:  lea    -0x58(%eax),%ebx
084b8943 +0x0986:  lea    0xc(%ebp),%eax
084b8946 +0x0989:  mov    %eax,(%esp)
084b8949 +0x098c:  call   084b8414 <+0x457>
084b894e +0x0991:  mov    (%eax),%eax
084b8950 +0x0993:  mov    %esi,0x8(%esp)
084b8954 +0x0997:  mov    %ebx,0x4(%esp)
084b8958 +0x099b:  mov    %eax,(%esp)
084b895b +0x099e:  call   084b8c3d <+0xc80>
084b8960 +0x09a3:  lea    0xc(%ebp),%eax
084b8963 +0x09a6:  mov    %eax,(%esp)
084b8966 +0x09a9:  call   084b8250 <+0x293>
084b896b +0x09ae:  mov    %eax,%ebx
084b896d +0x09b0:  mov    0x10(%ebp),%eax
084b8970 +0x09b3:  mov    %eax,(%esp)
084b8973 +0x09b6:  call   084b8860 <+0x8a3>
084b8978 +0x09bb:  mov    (%eax),%edx
084b897a +0x09bd:  mov    %edx,(%ebx)
084b897c +0x09bf:  mov    0x4(%eax),%edx
084b897f +0x09c2:  mov    %edx,0x4(%ebx)
084b8982 +0x09c5:  mov    0x8(%eax),%edx
084b8985 +0x09c8:  mov    %edx,0x8(%ebx)
084b8988 +0x09cb:  mov    0xc(%eax),%edx
084b898b +0x09ce:  mov    %edx,0xc(%ebx)
084b898e +0x09d1:  mov    0x10(%eax),%edx
084b8991 +0x09d4:  mov    %edx,0x10(%ebx)
084b8994 +0x09d7:  mov    0x14(%eax),%edx
084b8997 +0x09da:  mov    %edx,0x14(%ebx)
084b899a +0x09dd:  mov    0x18(%eax),%edx
084b899d +0x09e0:  mov    %edx,0x18(%ebx)
084b89a0 +0x09e3:  mov    0x1c(%eax),%edx
084b89a3 +0x09e6:  mov    %edx,0x1c(%ebx)
084b89a6 +0x09e9:  mov    0x20(%eax),%edx
084b89a9 +0x09ec:  mov    %edx,0x20(%ebx)
084b89ac +0x09ef:  mov    0x24(%eax),%edx
084b89af +0x09f2:  mov    %edx,0x24(%ebx)
084b89b2 +0x09f5:  mov    0x28(%eax),%eax
084b89b5 +0x09f8:  mov    %eax,0x28(%ebx)
084b89b8 +0x09fb:  jmp    084b8bc5 <+0xc08>
084b89bd +0x0a00:  movl   $"vector::_M_insert_aux",0x8(%esp)
084b89c5 +0x0a08:  movl   $0x1,0x4(%esp)
084b89cd +0x0a10:  mov    0x8(%ebp),%eax
084b89d0 +0x0a13:  mov    %eax,(%esp)
084b89d3 +0x0a16:  call   084b8c7e <+0xcc1>
084b89d8 +0x0a1b:  mov    %eax,-0x18(%ebp)
084b89db +0x0a1e:  lea    -0x1c(%ebp),%eax
084b89de +0x0a21:  mov    0x8(%ebp),%edx
084b89e1 +0x0a24:  mov    %edx,0x4(%esp)
084b89e5 +0x0a28:  mov    %eax,(%esp)
084b89e8 +0x0a2b:  call   084b8090 <+0xd3>
084b89ed +0x0a30:  sub    $0x4,%esp
084b89f0 +0x0a33:  lea    -0x1c(%ebp),%eax
084b89f3 +0x0a36:  mov    %eax,0x4(%esp)
084b89f7 +0x0a3a:  lea    0xc(%ebp),%eax
084b89fa +0x0a3d:  mov    %eax,(%esp)
084b89fd +0x0a40:  call   084b8d23 <+0xd66>
084b8a02 +0x0a45:  mov    %eax,-0x14(%ebp)
084b8a05 +0x0a48:  mov    0x8(%ebp),%eax
084b8a08 +0x0a4b:  mov    -0x18(%ebp),%edx
084b8a0b +0x0a4e:  mov    %edx,0x4(%esp)
084b8a0f +0x0a52:  mov    %eax,(%esp)
084b8a12 +0x0a55:  call   084b8d5c <+0xd9f>
084b8a17 +0x0a5a:  mov    %eax,-0x10(%ebp)
084b8a1a +0x0a5d:  mov    -0x10(%ebp),%eax
084b8a1d +0x0a60:  mov    %eax,-0xc(%ebp)
084b8a20 +0x0a63:  mov    0x10(%ebp),%eax
084b8a23 +0x0a66:  mov    %eax,(%esp)
084b8a26 +0x0a69:  call   084b8860 <+0x8a3>
084b8a2b +0x0a6e:  mov    -0x14(%ebp),%edx
084b8a2e +0x0a71:  imul   $0x2c,%edx,%edx
084b8a31 +0x0a74:  mov    %edx,%ecx
084b8a33 +0x0a76:  add    -0x10(%ebp),%ecx
084b8a36 +0x0a79:  mov    0x8(%ebp),%edx
084b8a39 +0x0a7c:  mov    %eax,0x8(%esp)
084b8a3d +0x0a80:  mov    %ecx,0x4(%esp)
084b8a41 +0x0a84:  mov    %edx,(%esp)
084b8a44 +0x0a87:  call   084b8868 <+0x8ab>
084b8a49 +0x0a8c:  movl   $0x0,-0xc(%ebp)
084b8a50 +0x0a93:  mov    0x8(%ebp),%eax
084b8a53 +0x0a96:  mov    %eax,(%esp)
084b8a56 +0x0a99:  call   082b666c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8567>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8567
084b8a5b +0x0a9e:  mov    %eax,%ebx
084b8a5d +0x0aa0:  lea    0xc(%ebp),%eax
084b8a60 +0x0aa3:  mov    %eax,(%esp)
084b8a63 +0x0aa6:  call   084b8414 <+0x457>
084b8a68 +0x0aab:  mov    (%eax),%edx
084b8a6a +0x0aad:  mov    0x8(%ebp),%eax
084b8a6d +0x0ab0:  mov    (%eax),%eax
084b8a6f +0x0ab2:  mov    %ebx,0xc(%esp)
084b8a73 +0x0ab6:  mov    -0x10(%ebp),%ecx
084b8a76 +0x0ab9:  mov    %ecx,0x8(%esp)
084b8a7a +0x0abd:  mov    %edx,0x4(%esp)
084b8a7e +0x0ac1:  mov    %eax,(%esp)
084b8a81 +0x0ac4:  call   084b8d8b <+0xdce>
084b8a86 +0x0ac9:  mov    %eax,-0xc(%ebp)
084b8a89 +0x0acc:  addl   $0x2c,-0xc(%ebp)
084b8a8d +0x0ad0:  mov    0x8(%ebp),%eax
084b8a90 +0x0ad3:  mov    %eax,(%esp)
084b8a93 +0x0ad6:  call   082b666c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8567>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8567
084b8a98 +0x0adb:  mov    %eax,%ebx
084b8a9a +0x0add:  mov    0x8(%ebp),%eax
084b8a9d +0x0ae0:  mov    0x4(%eax),%esi
084b8aa0 +0x0ae3:  lea    0xc(%ebp),%eax
084b8aa3 +0x0ae6:  mov    %eax,(%esp)
084b8aa6 +0x0ae9:  call   084b8414 <+0x457>
084b8aab +0x0aee:  mov    (%eax),%eax
084b8aad +0x0af0:  mov    %ebx,0xc(%esp)
084b8ab1 +0x0af4:  mov    -0xc(%ebp),%edx
084b8ab4 +0x0af7:  mov    %edx,0x8(%esp)
084b8ab8 +0x0afb:  mov    %esi,0x4(%esp)
084b8abc +0x0aff:  mov    %eax,(%esp)
084b8abf +0x0b02:  call   084b8d8b <+0xdce>
084b8ac4 +0x0b07:  mov    %eax,-0xc(%ebp)
084b8ac7 +0x0b0a:  mov    0x8(%ebp),%eax
084b8aca +0x0b0d:  mov    %eax,(%esp)
084b8acd +0x0b10:  call   082b666c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8567>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8567
084b8ad2 +0x0b15:  mov    0x8(%ebp),%edx
084b8ad5 +0x0b18:  mov    0x4(%edx),%ecx
084b8ad8 +0x0b1b:  mov    0x8(%ebp),%edx
084b8adb +0x0b1e:  mov    (%edx),%edx
084b8add +0x0b20:  mov    %eax,0x8(%esp)
084b8ae1 +0x0b24:  mov    %ecx,0x4(%esp)
084b8ae5 +0x0b28:  mov    %edx,(%esp)
084b8ae8 +0x0b2b:  call   082b6674 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x856f>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x856f
084b8aed +0x0b30:  mov    0x8(%ebp),%eax
084b8af0 +0x0b33:  mov    0x8(%eax),%eax
084b8af3 +0x0b36:  mov    %eax,%edx
084b8af5 +0x0b38:  mov    0x8(%ebp),%eax
084b8af8 +0x0b3b:  mov    (%eax),%eax
084b8afa +0x0b3d:  mov    %edx,%ecx
084b8afc +0x0b3f:  sub    %eax,%ecx
084b8afe +0x0b41:  mov    %ecx,%eax
084b8b00 +0x0b43:  sar    $0x2,%eax
084b8b03 +0x0b46:  imul   $0xba2e8ba3,%eax,%eax
084b8b09 +0x0b4c:  mov    %eax,%ecx
084b8b0b +0x0b4e:  mov    0x8(%ebp),%eax
084b8b0e +0x0b51:  mov    (%eax),%edx
084b8b10 +0x0b53:  mov    0x8(%ebp),%eax
084b8b13 +0x0b56:  mov    %ecx,0x8(%esp)
084b8b17 +0x0b5a:  mov    %edx,0x4(%esp)
084b8b1b +0x0b5e:  mov    %eax,(%esp)
084b8b1e +0x0b61:  call   082bf69a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11595>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11595
084b8b23 +0x0b66:  mov    0x8(%ebp),%eax
084b8b26 +0x0b69:  mov    -0x10(%ebp),%edx
084b8b29 +0x0b6c:  mov    %edx,(%eax)
084b8b2b +0x0b6e:  mov    0x8(%ebp),%eax
084b8b2e +0x0b71:  mov    -0xc(%ebp),%edx
084b8b31 +0x0b74:  mov    %edx,0x4(%eax)
084b8b34 +0x0b77:  mov    -0x18(%ebp),%eax
084b8b37 +0x0b7a:  imul   $0x2c,%eax,%eax
084b8b3a +0x0b7d:  mov    %eax,%edx
084b8b3c +0x0b7f:  add    -0x10(%ebp),%edx
084b8b3f +0x0b82:  mov    0x8(%ebp),%eax
084b8b42 +0x0b85:  mov    %edx,0x8(%eax)
084b8b45 +0x0b88:  jmp    084b8bc5 <+0xc08>
084b8b47 +0x0b8a:  mov    %eax,(%esp)
084b8b4a +0x0b8d:  call   08725ce0 <__cxa_begin_catch>
084b8b4f +0x0b92:  cmpl   $0x0,-0xc(%ebp)
084b8b53 +0x0b96:  jne    084b8b71 <+0xbb4>
084b8b55 +0x0b98:  mov    -0x14(%ebp),%eax
084b8b58 +0x0b9b:  imul   $0x2c,%eax,%eax
084b8b5b +0x0b9e:  mov    %eax,%edx
084b8b5d +0x0ba0:  add    -0x10(%ebp),%edx
084b8b60 +0x0ba3:  mov    0x8(%ebp),%eax
084b8b63 +0x0ba6:  mov    %edx,0x4(%esp)
084b8b67 +0x0baa:  mov    %eax,(%esp)
084b8b6a +0x0bad:  call   084b84b0 <+0x4f3>
084b8b6f +0x0bb2:  jmp    084b8b92 <+0xbd5>
084b8b71 +0x0bb4:  mov    0x8(%ebp),%eax
084b8b74 +0x0bb7:  mov    %eax,(%esp)
084b8b77 +0x0bba:  call   082b666c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x8567>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x8567
084b8b7c +0x0bbf:  mov    %eax,0x8(%esp)
084b8b80 +0x0bc3:  mov    -0xc(%ebp),%eax
084b8b83 +0x0bc6:  mov    %eax,0x4(%esp)
084b8b87 +0x0bca:  mov    -0x10(%ebp),%eax
084b8b8a +0x0bcd:  mov    %eax,(%esp)
084b8b8d +0x0bd0:  call   082b6674 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x856f>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x856f
084b8b92 +0x0bd5:  mov    0x8(%ebp),%eax
084b8b95 +0x0bd8:  mov    -0x18(%ebp),%edx
084b8b98 +0x0bdb:  mov    %edx,0x8(%esp)
084b8b9c +0x0bdf:  mov    -0x10(%ebp),%edx
084b8b9f +0x0be2:  mov    %edx,0x4(%esp)
084b8ba3 +0x0be6:  mov    %eax,(%esp)
084b8ba6 +0x0be9:  call   082bf69a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x11595>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x11595
084b8bab +0x0bee:  call   08724be0 <__cxa_rethrow>
084b8bb0 +0x0bf3:  mov    %edx,%ebx
084b8bb2 +0x0bf5:  mov    %eax,%esi
084b8bb4 +0x0bf7:  call   08725c30 <__cxa_end_catch>
084b8bb9 +0x0bfc:  mov    %esi,%eax
084b8bbb +0x0bfe:  mov    %ebx,%edx
084b8bbd +0x0c00:  mov    %eax,(%esp)
084b8bc0 +0x0c03:  call   08ae3750 <_Unwind_Resume>
084b8bc5 +0x0c08:  lea    -0x8(%ebp),%esp
084b8bc8 +0x0c0b:  add    $0x0,%esp
084b8bcb +0x0c0e:  pop    %ebx
084b8bcc +0x0c0f:  pop    %esi
084b8bcd +0x0c10:  pop    %ebp
084b8bce +0x0c11:  ret
084b8bcf +0x0c12:  push   %ebp
084b8bd0 +0x0c13:  mov    %esp,%ebp
084b8bd2 +0x0c15:  mov    0x8(%ebp),%eax
084b8bd5 +0x0c18:  mov    0xc(%ebp),%edx
084b8bd8 +0x0c1b:  mov    %edx,(%eax)
084b8bda +0x0c1d:  pop    %ebp
084b8bdb +0x0c1e:  ret    $0x4
084b8bde +0x0c21:  push   %ebp
084b8bdf +0x0c22:  mov    %esp,%ebp
084b8be1 +0x0c24:  push   %edi
084b8be2 +0x0c25:  push   %esi
084b8be3 +0x0c26:  push   %ebx
084b8be4 +0x0c27:  sub    $0x2c,%esp
084b8be7 +0x0c2a:  mov    0x8(%ebp),%edi
084b8bea +0x0c2d:  mov    0x14(%ebp),%eax
084b8bed +0x0c30:  mov    %eax,(%esp)
084b8bf0 +0x0c33:  call   084b8ddd <+0xe20>
084b8bf5 +0x0c38:  mov    %eax,%esi
084b8bf7 +0x0c3a:  mov    0x10(%ebp),%eax
084b8bfa +0x0c3d:  mov    %eax,(%esp)
084b8bfd +0x0c40:  call   084b8ddd <+0xe20>
084b8c02 +0x0c45:  mov    %eax,%ebx
084b8c04 +0x0c47:  mov    0xc(%ebp),%eax
084b8c07 +0x0c4a:  mov    %eax,(%esp)
084b8c0a +0x0c4d:  call   084b8ddd <+0xe20>
084b8c0f +0x0c52:  mov    %esi,0x8(%esp)
084b8c13 +0x0c56:  mov    %ebx,0x4(%esp)
084b8c17 +0x0c5a:  mov    %eax,(%esp)
084b8c1a +0x0c5d:  call   084b8df2 <+0xe35>
084b8c1f +0x0c62:  mov    %eax,-0x1c(%ebp)
084b8c22 +0x0c65:  lea    -0x1c(%ebp),%eax
084b8c25 +0x0c68:  mov    %eax,0x4(%esp)
084b8c29 +0x0c6c:  mov    %edi,(%esp)
084b8c2c +0x0c6f:  call   084b8404 <+0x447>
084b8c31 +0x0c74:  mov    %edi,%eax
084b8c33 +0x0c76:  add    $0x2c,%esp
084b8c36 +0x0c79:  pop    %ebx
084b8c37 +0x0c7a:  pop    %esi
084b8c38 +0x0c7b:  pop    %edi
084b8c39 +0x0c7c:  pop    %ebp
084b8c3a +0x0c7d:  ret    $0x4
084b8c3d +0x0c80:  push   %ebp
084b8c3e +0x0c81:  mov    %esp,%ebp
084b8c40 +0x0c83:  push   %ebx
084b8c41 +0x0c84:  sub    $0x14,%esp
084b8c44 +0x0c87:  mov    0xc(%ebp),%eax
084b8c47 +0x0c8a:  mov    %eax,(%esp)
084b8c4a +0x0c8d:  call   084b8e17 <+0xe5a>
084b8c4f +0x0c92:  mov    %eax,%ebx
084b8c51 +0x0c94:  mov    0x8(%ebp),%eax
084b8c54 +0x0c97:  mov    %eax,(%esp)
084b8c57 +0x0c9a:  call   084b8e17 <+0xe5a>
084b8c5c +0x0c9f:  mov    0x10(%ebp),%edx
084b8c5f +0x0ca2:  mov    %edx,0x8(%esp)
084b8c63 +0x0ca6:  mov    %ebx,0x4(%esp)
084b8c67 +0x0caa:  mov    %eax,(%esp)
084b8c6a +0x0cad:  call   084b8e1f <+0xe62>
084b8c6f +0x0cb2:  add    $0x14,%esp
084b8c72 +0x0cb5:  pop    %ebx
084b8c73 +0x0cb6:  pop    %ebp
084b8c74 +0x0cb7:  ret
084b8c75 +0x0cb8:  push   %ebp
084b8c76 +0x0cb9:  mov    %esp,%ebp
084b8c78 +0x0cbb:  mov    0x8(%ebp),%eax
084b8c7b +0x0cbe:  pop    %ebp
084b8c7c +0x0cbf:  ret
084b8c7d +0x0cc0:  nop
084b8c7e +0x0cc1:  push   %ebp
084b8c7f +0x0cc2:  mov    %esp,%ebp
084b8c81 +0x0cc4:  push   %ebx
084b8c82 +0x0cc5:  sub    $0x24,%esp
084b8c85 +0x0cc8:  mov    0x8(%ebp),%eax
084b8c88 +0x0ccb:  mov    %eax,(%esp)
084b8c8b +0x0cce:  call   084b8e64 <+0xea7>
084b8c90 +0x0cd3:  mov    %eax,%ebx
084b8c92 +0x0cd5:  mov    0x8(%ebp),%eax
084b8c95 +0x0cd8:  mov    %eax,(%esp)
084b8c98 +0x0cdb:  call   08236c30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc2da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc2da
084b8c9d +0x0ce0:  mov    %ebx,%edx
084b8c9f +0x0ce2:  sub    %eax,%edx
084b8ca1 +0x0ce4:  mov    0xc(%ebp),%eax
084b8ca4 +0x0ce7:  cmp    %eax,%edx
084b8ca6 +0x0ce9:  setb   %al
084b8ca9 +0x0cec:  test   %al,%al
084b8cab +0x0cee:  je     084b8cb8 <+0xcfb>
084b8cad +0x0cf0:  mov    0x10(%ebp),%eax
084b8cb0 +0x0cf3:  mov    %eax,(%esp)
084b8cb3 +0x0cf6:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
084b8cb8 +0x0cfb:  mov    0x8(%ebp),%eax
084b8cbb +0x0cfe:  mov    %eax,(%esp)
084b8cbe +0x0d01:  call   08236c30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc2da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc2da
084b8cc3 +0x0d06:  mov    %eax,%ebx
084b8cc5 +0x0d08:  mov    0x8(%ebp),%eax
084b8cc8 +0x0d0b:  mov    %eax,(%esp)
084b8ccb +0x0d0e:  call   08236c30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc2da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc2da
084b8cd0 +0x0d13:  mov    %eax,-0x10(%ebp)
084b8cd3 +0x0d16:  lea    0xc(%ebp),%eax
084b8cd6 +0x0d19:  mov    %eax,0x4(%esp)
084b8cda +0x0d1d:  lea    -0x10(%ebp),%eax
084b8cdd +0x0d20:  mov    %eax,(%esp)
084b8ce0 +0x0d23:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
084b8ce5 +0x0d28:  mov    (%eax),%eax
084b8ce7 +0x0d2a:  lea    (%ebx,%eax,1),%eax
084b8cea +0x0d2d:  mov    %eax,-0xc(%ebp)
084b8ced +0x0d30:  mov    0x8(%ebp),%eax
084b8cf0 +0x0d33:  mov    %eax,(%esp)
084b8cf3 +0x0d36:  call   08236c30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc2da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc2da
084b8cf8 +0x0d3b:  cmp    -0xc(%ebp),%eax
084b8cfb +0x0d3e:  ja     084b8d0d <+0xd50>
084b8cfd +0x0d40:  mov    0x8(%ebp),%eax
084b8d00 +0x0d43:  mov    %eax,(%esp)
084b8d03 +0x0d46:  call   084b8e64 <+0xea7>
084b8d08 +0x0d4b:  cmp    -0xc(%ebp),%eax
084b8d0b +0x0d4e:  jae    084b8d1a <+0xd5d>
084b8d0d +0x0d50:  mov    0x8(%ebp),%eax
084b8d10 +0x0d53:  mov    %eax,(%esp)
084b8d13 +0x0d56:  call   084b8e64 <+0xea7>
084b8d18 +0x0d5b:  jmp    084b8d1d <+0xd60>
084b8d1a +0x0d5d:  mov    -0xc(%ebp),%eax
084b8d1d +0x0d60:  add    $0x24,%esp
084b8d20 +0x0d63:  pop    %ebx
084b8d21 +0x0d64:  pop    %ebp
084b8d22 +0x0d65:  ret
084b8d23 +0x0d66:  push   %ebp
084b8d24 +0x0d67:  mov    %esp,%ebp
084b8d26 +0x0d69:  push   %ebx
084b8d27 +0x0d6a:  sub    $0x14,%esp
084b8d2a +0x0d6d:  mov    0x8(%ebp),%eax
084b8d2d +0x0d70:  mov    %eax,(%esp)
084b8d30 +0x0d73:  call   084b8414 <+0x457>
084b8d35 +0x0d78:  mov    (%eax),%eax
084b8d37 +0x0d7a:  mov    %eax,%ebx
084b8d39 +0x0d7c:  mov    0xc(%ebp),%eax
084b8d3c +0x0d7f:  mov    %eax,(%esp)
084b8d3f +0x0d82:  call   084b8414 <+0x457>
084b8d44 +0x0d87:  mov    (%eax),%eax
084b8d46 +0x0d89:  mov    %ebx,%edx
084b8d48 +0x0d8b:  sub    %eax,%edx
084b8d4a +0x0d8d:  mov    %edx,%eax
084b8d4c +0x0d8f:  sar    $0x2,%eax
084b8d4f +0x0d92:  imul   $0xba2e8ba3,%eax,%eax
084b8d55 +0x0d98:  add    $0x14,%esp
084b8d58 +0x0d9b:  pop    %ebx
084b8d59 +0x0d9c:  pop    %ebp
084b8d5a +0x0d9d:  ret
084b8d5b +0x0d9e:  nop
084b8d5c +0x0d9f:  push   %ebp
084b8d5d +0x0da0:  mov    %esp,%ebp
084b8d5f +0x0da2:  sub    $0x18,%esp
084b8d62 +0x0da5:  cmpl   $0x0,0xc(%ebp)
084b8d66 +0x0da9:  je     084b8d84 <+0xdc7>
084b8d68 +0x0dab:  mov    0x8(%ebp),%eax
084b8d6b +0x0dae:  movl   $0x0,0x8(%esp)
084b8d73 +0x0db6:  mov    0xc(%ebp),%edx
084b8d76 +0x0db9:  mov    %edx,0x4(%esp)
084b8d7a +0x0dbd:  mov    %eax,(%esp)
084b8d7d +0x0dc0:  call   084b8e80 <+0xec3>
084b8d82 +0x0dc5:  jmp    084b8d89 <+0xdcc>
084b8d84 +0x0dc7:  mov    $0x0,%eax
084b8d89 +0x0dcc:  leave
084b8d8a +0x0dcd:  ret
084b8d8b +0x0dce:  push   %ebp
084b8d8c +0x0dcf:  mov    %esp,%ebp
084b8d8e +0x0dd1:  sub    $0x28,%esp
084b8d91 +0x0dd4:  lea    -0x10(%ebp),%eax
084b8d94 +0x0dd7:  lea    0xc(%ebp),%edx
084b8d97 +0x0dda:  mov    %edx,0x4(%esp)
084b8d9b +0x0dde:  mov    %eax,(%esp)
084b8d9e +0x0de1:  call   084b8eb8 <+0xefb>
084b8da3 +0x0de6:  sub    $0x4,%esp
084b8da6 +0x0de9:  lea    -0xc(%ebp),%eax
084b8da9 +0x0dec:  lea    0x8(%ebp),%edx
084b8dac +0x0def:  mov    %edx,0x4(%esp)
084b8db0 +0x0df3:  mov    %eax,(%esp)
084b8db3 +0x0df6:  call   084b8eb8 <+0xefb>
084b8db8 +0x0dfb:  sub    $0x4,%esp
084b8dbb +0x0dfe:  mov    0x14(%ebp),%eax
084b8dbe +0x0e01:  mov    %eax,0xc(%esp)
084b8dc2 +0x0e05:  mov    0x10(%ebp),%eax
084b8dc5 +0x0e08:  mov    %eax,0x8(%esp)
084b8dc9 +0x0e0c:  mov    -0x10(%ebp),%eax
084b8dcc +0x0e0f:  mov    %eax,0x4(%esp)
084b8dd0 +0x0e13:  mov    -0xc(%ebp),%eax
084b8dd3 +0x0e16:  mov    %eax,(%esp)
084b8dd6 +0x0e19:  call   084b8edd <+0xf20>
084b8ddb +0x0e1e:  leave
084b8ddc +0x0e1f:  ret
084b8ddd +0x0e20:  push   %ebp
084b8dde +0x0e21:  mov    %esp,%ebp
084b8de0 +0x0e23:  sub    $0x18,%esp
084b8de3 +0x0e26:  lea    0x8(%ebp),%eax
084b8de6 +0x0e29:  mov    %eax,(%esp)
084b8de9 +0x0e2c:  call   084b8414 <+0x457>
084b8dee +0x0e31:  mov    (%eax),%eax
084b8df0 +0x0e33:  leave
084b8df1 +0x0e34:  ret
084b8df2 +0x0e35:  push   %ebp
084b8df3 +0x0e36:  mov    %esp,%ebp
084b8df5 +0x0e38:  sub    $0x28,%esp
084b8df8 +0x0e3b:  movb   $0x0,-0x9(%ebp)
084b8dfc +0x0e3f:  mov    0x10(%ebp),%eax
084b8dff +0x0e42:  mov    %eax,0x8(%esp)
084b8e03 +0x0e46:  mov    0xc(%ebp),%eax
084b8e06 +0x0e49:  mov    %eax,0x4(%esp)
084b8e0a +0x0e4d:  mov    0x8(%ebp),%eax
084b8e0d +0x0e50:  mov    %eax,(%esp)
084b8e10 +0x0e53:  call   084b8efe <+0xf41>
084b8e15 +0x0e58:  leave
084b8e16 +0x0e59:  ret
084b8e17 +0x0e5a:  push   %ebp
084b8e18 +0x0e5b:  mov    %esp,%ebp
084b8e1a +0x0e5d:  mov    0x8(%ebp),%eax
084b8e1d +0x0e60:  pop    %ebp
084b8e1e +0x0e61:  ret
084b8e1f +0x0e62:  push   %ebp
084b8e20 +0x0e63:  mov    %esp,%ebp
084b8e22 +0x0e65:  push   %esi
084b8e23 +0x0e66:  push   %ebx
084b8e24 +0x0e67:  sub    $0x10,%esp
084b8e27 +0x0e6a:  mov    0x10(%ebp),%eax
084b8e2a +0x0e6d:  mov    %eax,(%esp)
084b8e2d +0x0e70:  call   084b8f88 <+0xfcb>
084b8e32 +0x0e75:  mov    %eax,%esi
084b8e34 +0x0e77:  mov    0xc(%ebp),%eax
084b8e37 +0x0e7a:  mov    %eax,(%esp)
084b8e3a +0x0e7d:  call   084b8f88 <+0xfcb>
084b8e3f +0x0e82:  mov    %eax,%ebx
084b8e41 +0x0e84:  mov    0x8(%ebp),%eax
084b8e44 +0x0e87:  mov    %eax,(%esp)
084b8e47 +0x0e8a:  call   084b8f88 <+0xfcb>
084b8e4c +0x0e8f:  mov    %esi,0x8(%esp)
084b8e50 +0x0e93:  mov    %ebx,0x4(%esp)
084b8e54 +0x0e97:  mov    %eax,(%esp)
084b8e57 +0x0e9a:  call   084b8f90 <+0xfd3>
084b8e5c +0x0e9f:  add    $0x10,%esp
084b8e5f +0x0ea2:  pop    %ebx
084b8e60 +0x0ea3:  pop    %esi
084b8e61 +0x0ea4:  pop    %ebp
084b8e62 +0x0ea5:  ret
084b8e63 +0x0ea6:  nop
084b8e64 +0x0ea7:  push   %ebp
084b8e65 +0x0ea8:  mov    %esp,%ebp
084b8e67 +0x0eaa:  sub    $0x18,%esp
084b8e6a +0x0ead:  mov    0x8(%ebp),%eax
084b8e6d +0x0eb0:  mov    %eax,(%esp)
084b8e70 +0x0eb3:  call   084b8fb6 <+0xff9>
084b8e75 +0x0eb8:  mov    %eax,(%esp)
084b8e78 +0x0ebb:  call   084b8fbe <+0x1001>
084b8e7d +0x0ec0:  leave
084b8e7e +0x0ec1:  ret
084b8e7f +0x0ec2:  nop
084b8e80 +0x0ec3:  push   %ebp
084b8e81 +0x0ec4:  mov    %esp,%ebp
084b8e83 +0x0ec6:  sub    $0x18,%esp
084b8e86 +0x0ec9:  mov    0x8(%ebp),%eax
084b8e89 +0x0ecc:  mov    %eax,(%esp)
084b8e8c +0x0ecf:  call   084b8fbe <+0x1001>
084b8e91 +0x0ed4:  cmp    0xc(%ebp),%eax
084b8e94 +0x0ed7:  setb   %al
084b8e97 +0x0eda:  movzbl %al,%eax
084b8e9a +0x0edd:  test   %eax,%eax
084b8e9c +0x0edf:  setne  %al
084b8e9f +0x0ee2:  test   %al,%al
084b8ea1 +0x0ee4:  je     084b8ea8 <+0xeeb>
084b8ea3 +0x0ee6:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
084b8ea8 +0x0eeb:  mov    0xc(%ebp),%eax
084b8eab +0x0eee:  imul   $0x2c,%eax,%eax
084b8eae +0x0ef1:  mov    %eax,(%esp)
084b8eb1 +0x0ef4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
084b8eb6 +0x0ef9:  leave
084b8eb7 +0x0efa:  ret
084b8eb8 +0x0efb:  push   %ebp
084b8eb9 +0x0efc:  mov    %esp,%ebp
084b8ebb +0x0efe:  push   %ebx
084b8ebc +0x0eff:  sub    $0x14,%esp
084b8ebf +0x0f02:  mov    0x8(%ebp),%ebx
084b8ec2 +0x0f05:  mov    0xc(%ebp),%eax
084b8ec5 +0x0f08:  mov    (%eax),%eax
084b8ec7 +0x0f0a:  mov    %eax,0x4(%esp)
084b8ecb +0x0f0e:  mov    %ebx,(%esp)
084b8ece +0x0f11:  call   084b8fc8 <+0x100b>
084b8ed3 +0x0f16:  mov    %ebx,%eax
084b8ed5 +0x0f18:  add    $0x14,%esp
084b8ed8 +0x0f1b:  pop    %ebx
084b8ed9 +0x0f1c:  pop    %ebp
084b8eda +0x0f1d:  ret    $0x4
084b8edd +0x0f20:  push   %ebp
084b8ede +0x0f21:  mov    %esp,%ebp
084b8ee0 +0x0f23:  sub    $0x18,%esp
084b8ee3 +0x0f26:  mov    0x10(%ebp),%eax
084b8ee6 +0x0f29:  mov    %eax,0x8(%esp)
084b8eea +0x0f2d:  mov    0xc(%ebp),%eax
084b8eed +0x0f30:  mov    %eax,0x4(%esp)
084b8ef1 +0x0f34:  mov    0x8(%ebp),%eax
084b8ef4 +0x0f37:  mov    %eax,(%esp)
084b8ef7 +0x0f3a:  call   084b8fd5 <+0x1018>
084b8efc +0x0f3f:  leave
084b8efd +0x0f40:  ret
084b8efe +0x0f41:  push   %ebp
084b8eff +0x0f42:  mov    %esp,%ebp
084b8f01 +0x0f44:  sub    $0x28,%esp
084b8f04 +0x0f47:  mov    0xc(%ebp),%edx
084b8f07 +0x0f4a:  mov    0x8(%ebp),%eax
084b8f0a +0x0f4d:  mov    %edx,%ecx
084b8f0c +0x0f4f:  sub    %eax,%ecx
084b8f0e +0x0f51:  mov    %ecx,%eax
084b8f10 +0x0f53:  sar    $0x2,%eax
084b8f13 +0x0f56:  imul   $0xba2e8ba3,%eax,%eax
084b8f19 +0x0f5c:  mov    %eax,-0xc(%ebp)
084b8f1c +0x0f5f:  jmp    084b8f78 <+0xfbb>
084b8f1e +0x0f61:  mov    0x8(%ebp),%eax
084b8f21 +0x0f64:  mov    %eax,(%esp)
084b8f24 +0x0f67:  call   084b8372 <+0x3b5>
084b8f29 +0x0f6c:  mov    0x10(%ebp),%edx
084b8f2c +0x0f6f:  mov    (%eax),%ecx
084b8f2e +0x0f71:  mov    %ecx,(%edx)
084b8f30 +0x0f73:  mov    0x4(%eax),%ecx
084b8f33 +0x0f76:  mov    %ecx,0x4(%edx)
084b8f36 +0x0f79:  mov    0x8(%eax),%ecx
084b8f39 +0x0f7c:  mov    %ecx,0x8(%edx)
084b8f3c +0x0f7f:  mov    0xc(%eax),%ecx
084b8f3f +0x0f82:  mov    %ecx,0xc(%edx)
084b8f42 +0x0f85:  mov    0x10(%eax),%ecx
084b8f45 +0x0f88:  mov    %ecx,0x10(%edx)
084b8f48 +0x0f8b:  mov    0x14(%eax),%ecx
084b8f4b +0x0f8e:  mov    %ecx,0x14(%edx)
084b8f4e +0x0f91:  mov    0x18(%eax),%ecx
084b8f51 +0x0f94:  mov    %ecx,0x18(%edx)
084b8f54 +0x0f97:  mov    0x1c(%eax),%ecx
084b8f57 +0x0f9a:  mov    %ecx,0x1c(%edx)
084b8f5a +0x0f9d:  mov    0x20(%eax),%ecx
084b8f5d +0x0fa0:  mov    %ecx,0x20(%edx)
084b8f60 +0x0fa3:  mov    0x24(%eax),%ecx
084b8f63 +0x0fa6:  mov    %ecx,0x24(%edx)
084b8f66 +0x0fa9:  mov    0x28(%eax),%eax
084b8f69 +0x0fac:  mov    %eax,0x28(%edx)
084b8f6c +0x0faf:  addl   $0x2c,0x8(%ebp)
084b8f70 +0x0fb3:  addl   $0x2c,0x10(%ebp)
084b8f74 +0x0fb7:  subl   $0x1,-0xc(%ebp)
084b8f78 +0x0fbb:  cmpl   $0x0,-0xc(%ebp)
084b8f7c +0x0fbf:  setg   %al
084b8f7f +0x0fc2:  test   %al,%al
084b8f81 +0x0fc4:  jne    084b8f1e <+0xf61>
084b8f83 +0x0fc6:  mov    0x10(%ebp),%eax
084b8f86 +0x0fc9:  leave
084b8f87 +0x0fca:  ret
084b8f88 +0x0fcb:  push   %ebp
084b8f89 +0x0fcc:  mov    %esp,%ebp
084b8f8b +0x0fce:  mov    0x8(%ebp),%eax
084b8f8e +0x0fd1:  pop    %ebp
084b8f8f +0x0fd2:  ret
084b8f90 +0x0fd3:  push   %ebp
084b8f91 +0x0fd4:  mov    %esp,%ebp
084b8f93 +0x0fd6:  sub    $0x28,%esp
084b8f96 +0x0fd9:  movb   $0x0,-0x9(%ebp)
084b8f9a +0x0fdd:  mov    0x10(%ebp),%eax
084b8f9d +0x0fe0:  mov    %eax,0x8(%esp)
084b8fa1 +0x0fe4:  mov    0xc(%ebp),%eax
084b8fa4 +0x0fe7:  mov    %eax,0x4(%esp)
084b8fa8 +0x0feb:  mov    0x8(%ebp),%eax
084b8fab +0x0fee:  mov    %eax,(%esp)
084b8fae +0x0ff1:  call   084b8ff6 <+0x1039>
084b8fb3 +0x0ff6:  leave
084b8fb4 +0x0ff7:  ret
084b8fb5 +0x0ff8:  nop
084b8fb6 +0x0ff9:  push   %ebp
084b8fb7 +0x0ffa:  mov    %esp,%ebp
084b8fb9 +0x0ffc:  mov    0x8(%ebp),%eax
084b8fbc +0x0fff:  pop    %ebp
084b8fbd +0x1000:  ret
084b8fbe +0x1001:  push   %ebp
084b8fbf +0x1002:  mov    %esp,%ebp
084b8fc1 +0x1004:  mov    $0x5d1745d,%eax
084b8fc6 +0x1009:  pop    %ebp
084b8fc7 +0x100a:  ret
084b8fc8 +0x100b:  push   %ebp
084b8fc9 +0x100c:  mov    %esp,%ebp
084b8fcb +0x100e:  mov    0x8(%ebp),%eax
084b8fce +0x1011:  mov    0xc(%ebp),%edx
084b8fd1 +0x1014:  mov    %edx,(%eax)
084b8fd3 +0x1016:  pop    %ebp
084b8fd4 +0x1017:  ret
084b8fd5 +0x1018:  push   %ebp
084b8fd6 +0x1019:  mov    %esp,%ebp
084b8fd8 +0x101b:  sub    $0x18,%esp
084b8fdb +0x101e:  mov    0x10(%ebp),%eax
084b8fde +0x1021:  mov    %eax,0x8(%esp)
084b8fe2 +0x1025:  mov    0xc(%ebp),%eax
084b8fe5 +0x1028:  mov    %eax,0x4(%esp)
084b8fe9 +0x102c:  mov    0x8(%ebp),%eax
084b8fec +0x102f:  mov    %eax,(%esp)
084b8fef +0x1032:  call   084b9085 <+0x10c8>
084b8ff4 +0x1037:  leave
084b8ff5 +0x1038:  ret
084b8ff6 +0x1039:  push   %ebp
084b8ff7 +0x103a:  mov    %esp,%ebp
084b8ff9 +0x103c:  push   %ebx
084b8ffa +0x103d:  sub    $0x24,%esp
084b8ffd +0x1040:  mov    0xc(%ebp),%edx
084b9000 +0x1043:  mov    0x8(%ebp),%eax
084b9003 +0x1046:  mov    %edx,%ecx
084b9005 +0x1048:  sub    %eax,%ecx
084b9007 +0x104a:  mov    %ecx,%eax
084b9009 +0x104c:  sar    $0x2,%eax
084b900c +0x104f:  imul   $0xba2e8ba3,%eax,%eax
084b9012 +0x1055:  mov    %eax,-0xc(%ebp)
084b9015 +0x1058:  jmp    084b9071 <+0x10b4>
084b9017 +0x105a:  subl   $0x2c,0x10(%ebp)
084b901b +0x105e:  mov    0x10(%ebp),%ebx
084b901e +0x1061:  subl   $0x2c,0xc(%ebp)
084b9022 +0x1065:  mov    0xc(%ebp),%eax
084b9025 +0x1068:  mov    %eax,(%esp)
084b9028 +0x106b:  call   084b8372 <+0x3b5>
084b902d +0x1070:  mov    (%eax),%edx
084b902f +0x1072:  mov    %edx,(%ebx)
084b9031 +0x1074:  mov    0x4(%eax),%edx
084b9034 +0x1077:  mov    %edx,0x4(%ebx)
084b9037 +0x107a:  mov    0x8(%eax),%edx
084b903a +0x107d:  mov    %edx,0x8(%ebx)
084b903d +0x1080:  mov    0xc(%eax),%edx
084b9040 +0x1083:  mov    %edx,0xc(%ebx)
084b9043 +0x1086:  mov    0x10(%eax),%edx
084b9046 +0x1089:  mov    %edx,0x10(%ebx)
084b9049 +0x108c:  mov    0x14(%eax),%edx
084b904c +0x108f:  mov    %edx,0x14(%ebx)
084b904f +0x1092:  mov    0x18(%eax),%edx
084b9052 +0x1095:  mov    %edx,0x18(%ebx)
084b9055 +0x1098:  mov    0x1c(%eax),%edx
084b9058 +0x109b:  mov    %edx,0x1c(%ebx)
084b905b +0x109e:  mov    0x20(%eax),%edx
084b905e +0x10a1:  mov    %edx,0x20(%ebx)
084b9061 +0x10a4:  mov    0x24(%eax),%edx
084b9064 +0x10a7:  mov    %edx,0x24(%ebx)
084b9067 +0x10aa:  mov    0x28(%eax),%eax
084b906a +0x10ad:  mov    %eax,0x28(%ebx)
084b906d +0x10b0:  subl   $0x1,-0xc(%ebp)
084b9071 +0x10b4:  cmpl   $0x0,-0xc(%ebp)
084b9075 +0x10b8:  setg   %al
084b9078 +0x10bb:  test   %al,%al
084b907a +0x10bd:  jne    084b9017 <+0x105a>
084b907c +0x10bf:  mov    0x10(%ebp),%eax
084b907f +0x10c2:  add    $0x24,%esp
084b9082 +0x10c5:  pop    %ebx
084b9083 +0x10c6:  pop    %ebp
084b9084 +0x10c7:  ret
084b9085 +0x10c8:  push   %ebp
084b9086 +0x10c9:  mov    %esp,%ebp
084b9088 +0x10cb:  push   %esi
084b9089 +0x10cc:  push   %ebx
084b908a +0x10cd:  sub    $0x20,%esp
084b908d +0x10d0:  mov    0x10(%ebp),%eax
084b9090 +0x10d3:  mov    %eax,-0xc(%ebp)
084b9093 +0x10d6:  jmp    084b910a <+0x114d>
084b9095 +0x10d8:  lea    0x8(%ebp),%eax
084b9098 +0x10db:  mov    %eax,(%esp)
084b909b +0x10de:  call   084b9196 <+0x11d9>
084b90a0 +0x10e3:  mov    %eax,%ebx
084b90a2 +0x10e5:  mov    -0xc(%ebp),%eax
084b90a5 +0x10e8:  mov    %eax,0x4(%esp)
084b90a9 +0x10ec:  movl   $0x2c,(%esp)
084b90b0 +0x10f3:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
084b90b5 +0x10f8:  mov    %eax,%edx
084b90b7 +0x10fa:  test   %edx,%edx
084b90b9 +0x10fc:  je     084b90fb <+0x113e>
084b90bb +0x10fe:  mov    (%ebx),%edx
084b90bd +0x1100:  mov    %edx,(%eax)
084b90bf +0x1102:  mov    0x4(%ebx),%edx
084b90c2 +0x1105:  mov    %edx,0x4(%eax)
084b90c5 +0x1108:  mov    0x8(%ebx),%edx
084b90c8 +0x110b:  mov    %edx,0x8(%eax)
084b90cb +0x110e:  mov    0xc(%ebx),%edx
084b90ce +0x1111:  mov    %edx,0xc(%eax)
084b90d1 +0x1114:  mov    0x10(%ebx),%edx
084b90d4 +0x1117:  mov    %edx,0x10(%eax)
084b90d7 +0x111a:  mov    0x14(%ebx),%edx
084b90da +0x111d:  mov    %edx,0x14(%eax)
084b90dd +0x1120:  mov    0x18(%ebx),%edx
084b90e0 +0x1123:  mov    %edx,0x18(%eax)
084b90e3 +0x1126:  mov    0x1c(%ebx),%edx
084b90e6 +0x1129:  mov    %edx,0x1c(%eax)
084b90e9 +0x112c:  mov    0x20(%ebx),%edx
084b90ec +0x112f:  mov    %edx,0x20(%eax)
084b90ef +0x1132:  mov    0x24(%ebx),%edx
084b90f2 +0x1135:  mov    %edx,0x24(%eax)
084b90f5 +0x1138:  mov    0x28(%ebx),%edx
084b90f8 +0x113b:  mov    %edx,0x28(%eax)
084b90fb +0x113e:  lea    0x8(%ebp),%eax
084b90fe +0x1141:  mov    %eax,(%esp)
084b9101 +0x1144:  call   084b9180 <+0x11c3>
084b9106 +0x1149:  addl   $0x2c,-0xc(%ebp)
084b910a +0x114d:  lea    0xc(%ebp),%eax
084b910d +0x1150:  mov    %eax,0x4(%esp)
084b9111 +0x1154:  lea    0x8(%ebp),%eax
084b9114 +0x1157:  mov    %eax,(%esp)
084b9117 +0x115a:  call   084b9162 <+0x11a5>
084b911c +0x115f:  test   %al,%al
084b911e +0x1161:  jne    084b9095 <+0x10d8>
084b9124 +0x1167:  mov    -0xc(%ebp),%eax
084b9127 +0x116a:  add    $0x20,%esp
084b912a +0x116d:  pop    %ebx
084b912b +0x116e:  pop    %esi
084b912c +0x116f:  pop    %ebp
084b912d +0x1170:  ret
084b912e +0x1171:  mov    %eax,(%esp)
084b9131 +0x1174:  call   08725ce0 <__cxa_begin_catch>
084b9136 +0x1179:  mov    -0xc(%ebp),%eax
084b9139 +0x117c:  mov    %eax,0x4(%esp)
084b913d +0x1180:  mov    0x10(%ebp),%eax
084b9140 +0x1183:  mov    %eax,(%esp)
084b9143 +0x1186:  call   082bf6c1 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x115bc>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x115bc
084b9148 +0x118b:  call   08724be0 <__cxa_rethrow>
084b914d +0x1190:  mov    %edx,%ebx
084b914f +0x1192:  mov    %eax,%esi
084b9151 +0x1194:  call   08725c30 <__cxa_end_catch>
084b9156 +0x1199:  mov    %esi,%eax
084b9158 +0x119b:  mov    %ebx,%edx
084b915a +0x119d:  mov    %eax,(%esp)
084b915d +0x11a0:  call   08ae3750 <_Unwind_Resume>
084b9162 +0x11a5:  push   %ebp
084b9163 +0x11a6:  mov    %esp,%ebp
084b9165 +0x11a8:  sub    $0x18,%esp
084b9168 +0x11ab:  mov    0xc(%ebp),%eax
084b916b +0x11ae:  mov    %eax,0x4(%esp)
084b916f +0x11b2:  mov    0x8(%ebp),%eax
084b9172 +0x11b5:  mov    %eax,(%esp)
084b9175 +0x11b8:  call   084b91a0 <+0x11e3>
084b917a +0x11bd:  xor    $0x1,%eax
084b917d +0x11c0:  leave
084b917e +0x11c1:  ret
084b917f +0x11c2:  nop
084b9180 +0x11c3:  push   %ebp
084b9181 +0x11c4:  mov    %esp,%ebp
084b9183 +0x11c6:  mov    0x8(%ebp),%eax
084b9186 +0x11c9:  mov    (%eax),%eax
084b9188 +0x11cb:  lea    0x2c(%eax),%edx
084b918b +0x11ce:  mov    0x8(%ebp),%eax
084b918e +0x11d1:  mov    %edx,(%eax)
084b9190 +0x11d3:  mov    0x8(%ebp),%eax
084b9193 +0x11d6:  pop    %ebp
084b9194 +0x11d7:  ret
084b9195 +0x11d8:  nop
084b9196 +0x11d9:  push   %ebp
084b9197 +0x11da:  mov    %esp,%ebp
084b9199 +0x11dc:  mov    0x8(%ebp),%eax
084b919c +0x11df:  mov    (%eax),%eax
084b919e +0x11e1:  pop    %ebp
084b919f +0x11e2:  ret
084b91a0 +0x11e3:  push   %ebp
084b91a1 +0x11e4:  mov    %esp,%ebp
084b91a3 +0x11e6:  push   %ebx
084b91a4 +0x11e7:  sub    $0x14,%esp
084b91a7 +0x11ea:  mov    0x8(%ebp),%eax
084b91aa +0x11ed:  mov    %eax,(%esp)
084b91ad +0x11f0:  call   084b91ca <+0x120d>
084b91b2 +0x11f5:  mov    %eax,%ebx
084b91b4 +0x11f7:  mov    0xc(%ebp),%eax
084b91b7 +0x11fa:  mov    %eax,(%esp)
084b91ba +0x11fd:  call   084b91ca <+0x120d>
084b91bf +0x1202:  cmp    %eax,%ebx
084b91c1 +0x1204:  sete   %al
084b91c4 +0x1207:  add    $0x14,%esp
084b91c7 +0x120a:  pop    %ebx
084b91c8 +0x120b:  pop    %ebp
084b91c9 +0x120c:  ret
084b91ca +0x120d:  push   %ebp
084b91cb +0x120e:  mov    %esp,%ebp
084b91cd +0x1210:  mov    0x8(%ebp),%eax
084b91d0 +0x1213:  mov    (%eax),%eax
084b91d2 +0x1215:  pop    %ebp
084b91d3 +0x1216:  ret
```

## 反编译 C

```c
// <global>::global @ 0x84b7fbd

/* CGlobalEffect::makeNotifyInfo(PacketGuard&) const */

void CGlobalEffect::_GLOBAL__I_makeNotifyInfo(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
