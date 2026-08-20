# instance

`_GLOBAL__I__ZN16CSyncSlangFilter8instanceE`

`global constructors keyed to CSyncSlangFilter::instance`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CSyncSlangFilter` | `0x0862e8df` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862e8df  _GLOBAL__I__ZN16CSyncSlangFilter8instanceE
#           global constructors keyed to CSyncSlangFilter::instance
# range [0x0862e8df, 0x08630b23]
0862e8df +0x0000:  push   %ebp
0862e8e0 +0x0001:  mov    %esp,%ebp
0862e8e2 +0x0003:  sub    $0x18,%esp
0862e8e5 +0x0006:  movl   $0xffff,0x4(%esp)
0862e8ed +0x000e:  movl   $0x1,(%esp)
0862e8f4 +0x0015:  call   0862e89f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0862e8f9 +0x001a:  leave
0862e8fa +0x001b:  ret
0862e8fb +0x001c:  nop
0862e8fc +0x001d:  push   %ebp
0862e8fd +0x001e:  mov    %esp,%ebp
0862e8ff +0x0020:  sub    $0x18,%esp
0862e902 +0x0023:  mov    0x8(%ebp),%eax
0862e905 +0x0026:  mov    %eax,(%esp)
0862e908 +0x0029:  call   0862ec4c <+0x36d>
0862e90d +0x002e:  leave
0862e90e +0x002f:  ret
0862e90f +0x0030:  nop
0862e910 +0x0031:  push   %ebp
0862e911 +0x0032:  mov    %esp,%ebp
0862e913 +0x0034:  sub    $0x18,%esp
0862e916 +0x0037:  mov    0x8(%ebp),%eax
0862e919 +0x003a:  mov    %eax,(%esp)
0862e91c +0x003d:  call   0862ebe2 <+0x303>
0862e921 +0x0042:  mov    0x8(%ebp),%eax
0862e924 +0x0045:  movb   $0x0,0x14(%eax)
0862e928 +0x0049:  leave
0862e929 +0x004a:  ret
0862e92a +0x004b:  push   %ebp
0862e92b +0x004c:  mov    %esp,%ebp
0862e92d +0x004e:  push   %esi
0862e92e +0x004f:  push   %ebx
0862e92f +0x0050:  sub    $0x30,%esp
0862e932 +0x0053:  lea    -0x18(%ebp),%eax
0862e935 +0x0056:  mov    %eax,(%esp)
0862e938 +0x0059:  call   0862ecb6 <+0x3d7>
0862e93d +0x005e:  mov    0x8(%ebp),%edx
0862e940 +0x0061:  lea    -0x20(%ebp),%eax
0862e943 +0x0064:  mov    %edx,0x4(%esp)
0862e947 +0x0068:  mov    %eax,(%esp)
0862e94a +0x006b:  call   0862ecbc <+0x3dd>
0862e94f +0x0070:  sub    $0x4,%esp
0862e952 +0x0073:  mov    -0x20(%ebp),%eax
0862e955 +0x0076:  mov    -0x1c(%ebp),%edx
0862e958 +0x0079:  mov    %eax,-0x18(%ebp)
0862e95b +0x007c:  mov    %edx,-0x14(%ebp)
0862e95e +0x007f:  jmp    0862e98d <+0xae>
0862e960 +0x0081:  lea    -0x18(%ebp),%eax
0862e963 +0x0084:  mov    %eax,(%esp)
0862e966 +0x0087:  call   0862edb4 <+0x4d5>
0862e96b +0x008c:  mov    0x4(%eax),%ebx
0862e96e +0x008f:  test   %ebx,%ebx
0862e970 +0x0091:  je     0862e982 <+0xa3>
0862e972 +0x0093:  mov    %ebx,(%esp)
0862e975 +0x0096:  call   0862e92a <+0x4b>
0862e97a +0x009b:  mov    %ebx,(%esp)
0862e97d +0x009e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0862e982 +0x00a3:  lea    -0x18(%ebp),%eax
0862e985 +0x00a6:  mov    %eax,(%esp)
0862e988 +0x00a9:  call   0862ed1c <+0x43d>
0862e98d +0x00ae:  mov    0x8(%ebp),%edx
0862e990 +0x00b1:  lea    -0x10(%ebp),%eax
0862e993 +0x00b4:  mov    %edx,0x4(%esp)
0862e997 +0x00b8:  mov    %eax,(%esp)
0862e99a +0x00bb:  call   0862ece2 <+0x403>
0862e99f +0x00c0:  sub    $0x4,%esp
0862e9a2 +0x00c3:  lea    -0x10(%ebp),%eax
0862e9a5 +0x00c6:  mov    %eax,0x4(%esp)
0862e9a9 +0x00ca:  lea    -0x18(%ebp),%eax
0862e9ac +0x00cd:  mov    %eax,(%esp)
0862e9af +0x00d0:  call   0862ed08 <+0x429>
0862e9b4 +0x00d5:  test   %al,%al
0862e9b6 +0x00d7:  jne    0862e960 <+0x81>
0862e9b8 +0x00d9:  mov    0x8(%ebp),%eax
0862e9bb +0x00dc:  mov    %eax,(%esp)
0862e9be +0x00df:  call   0862edc8 <+0x4e9>
0862e9c3 +0x00e4:  jmp    0862e9e0 <+0x101>
0862e9c5 +0x00e6:  mov    %edx,%ebx
0862e9c7 +0x00e8:  mov    %eax,%esi
0862e9c9 +0x00ea:  mov    0x8(%ebp),%eax
0862e9cc +0x00ed:  mov    %eax,(%esp)
0862e9cf +0x00f0:  call   0862e8fc <+0x1d>
0862e9d4 +0x00f5:  mov    %esi,%eax
0862e9d6 +0x00f7:  mov    %ebx,%edx
0862e9d8 +0x00f9:  mov    %eax,(%esp)
0862e9db +0x00fc:  call   08ae3750 <_Unwind_Resume>
0862e9e0 +0x0101:  mov    0x8(%ebp),%eax
0862e9e3 +0x0104:  mov    %eax,(%esp)
0862e9e6 +0x0107:  call   0862e8fc <+0x1d>
0862e9eb +0x010c:  lea    -0x8(%ebp),%esp
0862e9ee +0x010f:  add    $0x0,%esp
0862e9f1 +0x0112:  pop    %ebx
0862e9f2 +0x0113:  pop    %esi
0862e9f3 +0x0114:  pop    %ebp
0862e9f4 +0x0115:  ret
0862e9f5 +0x0116:  nop
0862e9f6 +0x0117:  push   %ebp
0862e9f7 +0x0118:  mov    %esp,%ebp
0862e9f9 +0x011a:  sub    $0x28,%esp
0862e9fc +0x011d:  mov    0x8(%ebp),%edx
0862e9ff +0x0120:  lea    -0x18(%ebp),%eax
0862ea02 +0x0123:  lea    0xc(%ebp),%ecx
0862ea05 +0x0126:  mov    %ecx,0x8(%esp)
0862ea09 +0x012a:  mov    %edx,0x4(%esp)
0862ea0d +0x012e:  mov    %eax,(%esp)
0862ea10 +0x0131:  call   0862eddc <+0x4fd>
0862ea15 +0x0136:  sub    $0x4,%esp
0862ea18 +0x0139:  mov    0x8(%ebp),%edx
0862ea1b +0x013c:  lea    -0x10(%ebp),%eax
0862ea1e +0x013f:  mov    %edx,0x4(%esp)
0862ea22 +0x0143:  mov    %eax,(%esp)
0862ea25 +0x0146:  call   0862ee08 <+0x529>
0862ea2a +0x014b:  sub    $0x4,%esp
0862ea2d +0x014e:  lea    -0x10(%ebp),%eax
0862ea30 +0x0151:  mov    %eax,0x4(%esp)
0862ea34 +0x0155:  lea    -0x18(%ebp),%eax
0862ea37 +0x0158:  mov    %eax,(%esp)
0862ea3a +0x015b:  call   0862ee2e <+0x54f>
0862ea3f +0x0160:  test   %al,%al
0862ea41 +0x0162:  je     0862ea53 <+0x174>
0862ea43 +0x0164:  lea    -0x18(%ebp),%eax
0862ea46 +0x0167:  mov    %eax,(%esp)
0862ea49 +0x016a:  call   0862ee42 <+0x563>
0862ea4e +0x016f:  mov    0x4(%eax),%eax
0862ea51 +0x0172:  jmp    0862ea58 <+0x179>
0862ea53 +0x0174:  mov    $0x0,%eax
0862ea58 +0x0179:  leave
0862ea59 +0x017a:  ret
0862ea5a +0x017b:  push   %ebp
0862ea5b +0x017c:  mov    %esp,%ebp
0862ea5d +0x017e:  push   %edi
0862ea5e +0x017f:  push   %esi
0862ea5f +0x0180:  push   %ebx
0862ea60 +0x0181:  sub    $0x4c,%esp
0862ea63 +0x0184:  mov    0x8(%ebp),%edx
0862ea66 +0x0187:  lea    -0x40(%ebp),%eax
0862ea69 +0x018a:  lea    0xc(%ebp),%ecx
0862ea6c +0x018d:  mov    %ecx,0x8(%esp)
0862ea70 +0x0191:  mov    %edx,0x4(%esp)
0862ea74 +0x0195:  mov    %eax,(%esp)
0862ea77 +0x0198:  call   0862ee56 <+0x577>
0862ea7c +0x019d:  sub    $0x4,%esp
0862ea7f +0x01a0:  mov    0x8(%ebp),%edx
0862ea82 +0x01a3:  lea    -0x38(%ebp),%eax
0862ea85 +0x01a6:  mov    %edx,0x4(%esp)
0862ea89 +0x01aa:  mov    %eax,(%esp)
0862ea8c +0x01ad:  call   0862ece2 <+0x403>
0862ea91 +0x01b2:  sub    $0x4,%esp
0862ea94 +0x01b5:  lea    -0x38(%ebp),%eax
0862ea97 +0x01b8:  mov    %eax,0x4(%esp)
0862ea9b +0x01bc:  lea    -0x40(%ebp),%eax
0862ea9e +0x01bf:  mov    %eax,(%esp)
0862eaa1 +0x01c2:  call   0862ee82 <+0x5a3>
0862eaa6 +0x01c7:  test   %al,%al
0862eaa8 +0x01c9:  je     0862eb22 <+0x243>
0862eaaa +0x01cb:  movl   $0x18,(%esp)
0862eab1 +0x01d2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0862eab6 +0x01d7:  mov    %eax,%ebx
0862eab8 +0x01d9:  mov    %ebx,%eax
0862eaba +0x01db:  mov    %eax,(%esp)
0862eabd +0x01de:  call   0862e910 <+0x31>
0862eac2 +0x01e3:  jmp    0862eadc <+0x1fd>
0862eac4 +0x01e5:  mov    %edx,%esi
0862eac6 +0x01e7:  mov    %eax,%edi
0862eac8 +0x01e9:  mov    %ebx,(%esp)
0862eacb +0x01ec:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0862ead0 +0x01f1:  mov    %edi,%eax
0862ead2 +0x01f3:  mov    %esi,%edx
0862ead4 +0x01f5:  mov    %eax,(%esp)
0862ead7 +0x01f8:  call   08ae3750 <_Unwind_Resume>
0862eadc +0x01fd:  mov    %ebx,%eax
0862eade +0x01ff:  mov    %eax,-0x1c(%ebp)
0862eae1 +0x0202:  lea    -0x1c(%ebp),%eax
0862eae4 +0x0205:  mov    %eax,0x8(%esp)
0862eae8 +0x0209:  lea    0xc(%ebp),%eax
0862eaeb +0x020c:  mov    %eax,0x4(%esp)
0862eaef +0x0210:  lea    -0x24(%ebp),%eax
0862eaf2 +0x0213:  mov    %eax,(%esp)
0862eaf5 +0x0216:  call   0862ee96 <+0x5b7>
0862eafa +0x021b:  mov    0x8(%ebp),%edx
0862eafd +0x021e:  lea    -0x30(%ebp),%eax
0862eb00 +0x0221:  lea    -0x24(%ebp),%ecx
0862eb03 +0x0224:  mov    %ecx,0x8(%esp)
0862eb07 +0x0228:  mov    %edx,0x4(%esp)
0862eb0b +0x022c:  mov    %eax,(%esp)
0862eb0e +0x022f:  call   0862eec4 <+0x5e5>
0862eb13 +0x0234:  sub    $0x4,%esp
0862eb16 +0x0237:  mov    -0x30(%ebp),%eax
0862eb19 +0x023a:  mov    -0x2c(%ebp),%edx
0862eb1c +0x023d:  mov    %eax,-0x40(%ebp)
0862eb1f +0x0240:  mov    %edx,-0x3c(%ebp)
0862eb22 +0x0243:  lea    -0x40(%ebp),%eax
0862eb25 +0x0246:  mov    %eax,(%esp)
0862eb28 +0x0249:  call   0862edb4 <+0x4d5>
0862eb2d +0x024e:  mov    0x4(%eax),%eax
0862eb30 +0x0251:  lea    -0xc(%ebp),%esp
0862eb33 +0x0254:  add    $0x0,%esp
0862eb36 +0x0257:  pop    %ebx
0862eb37 +0x0258:  pop    %esi
0862eb38 +0x0259:  pop    %edi
0862eb39 +0x025a:  pop    %ebp
0862eb3a +0x025b:  ret
0862eb3b +0x025c:  nop
0862eb3c +0x025d:  push   %ebp
0862eb3d +0x025e:  mov    %esp,%ebp
0862eb3f +0x0260:  mov    0x8(%ebp),%eax
0862eb42 +0x0263:  movzbl 0x14(%eax),%eax
0862eb46 +0x0267:  pop    %ebp
0862eb47 +0x0268:  ret
0862eb48 +0x0269:  push   %ebp
0862eb49 +0x026a:  mov    %esp,%ebp
0862eb4b +0x026c:  sub    $0x4,%esp
0862eb4e +0x026f:  mov    0xc(%ebp),%eax
0862eb51 +0x0272:  mov    %al,-0x4(%ebp)
0862eb54 +0x0275:  mov    0x8(%ebp),%eax
0862eb57 +0x0278:  movzbl -0x4(%ebp),%edx
0862eb5b +0x027c:  mov    %dl,0x14(%eax)
0862eb5e +0x027f:  leave
0862eb5f +0x0280:  ret
0862eb60 +0x0281:  push   %ebp
0862eb61 +0x0282:  mov    %esp,%ebp
0862eb63 +0x0284:  push   %edi
0862eb64 +0x0285:  push   %esi
0862eb65 +0x0286:  push   %ebx
0862eb66 +0x0287:  sub    $0x1c,%esp
0862eb69 +0x028a:  movl   $0x18,(%esp)
0862eb70 +0x0291:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0862eb75 +0x0296:  mov    %eax,%ebx
0862eb77 +0x0298:  mov    %ebx,%eax
0862eb79 +0x029a:  mov    %eax,(%esp)
0862eb7c +0x029d:  call   0862e910 <+0x31>
0862eb81 +0x02a2:  jmp    0862eb9b <+0x2bc>
0862eb83 +0x02a4:  mov    %edx,%esi
0862eb85 +0x02a6:  mov    %eax,%edi
0862eb87 +0x02a8:  mov    %ebx,(%esp)
0862eb8a +0x02ab:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0862eb8f +0x02b0:  mov    %edi,%eax
0862eb91 +0x02b2:  mov    %esi,%edx
0862eb93 +0x02b4:  mov    %eax,(%esp)
0862eb96 +0x02b7:  call   08ae3750 <_Unwind_Resume>
0862eb9b +0x02bc:  mov    %ebx,%edx
0862eb9d +0x02be:  mov    0x8(%ebp),%eax
0862eba0 +0x02c1:  mov    %edx,(%eax)
0862eba2 +0x02c3:  add    $0x1c,%esp
0862eba5 +0x02c6:  pop    %ebx
0862eba6 +0x02c7:  pop    %esi
0862eba7 +0x02c8:  pop    %edi
0862eba8 +0x02c9:  pop    %ebp
0862eba9 +0x02ca:  ret
0862ebaa +0x02cb:  push   %ebp
0862ebab +0x02cc:  mov    %esp,%ebp
0862ebad +0x02ce:  push   %ebx
0862ebae +0x02cf:  sub    $0x14,%esp
0862ebb1 +0x02d2:  mov    0x8(%ebp),%eax
0862ebb4 +0x02d5:  mov    (%eax),%eax
0862ebb6 +0x02d7:  test   %eax,%eax
0862ebb8 +0x02d9:  je     0862ebdc <+0x2fd>
0862ebba +0x02db:  mov    0x8(%ebp),%eax
0862ebbd +0x02de:  mov    (%eax),%ebx
0862ebbf +0x02e0:  test   %ebx,%ebx
0862ebc1 +0x02e2:  je     0862ebd3 <+0x2f4>
0862ebc3 +0x02e4:  mov    %ebx,(%esp)
0862ebc6 +0x02e7:  call   0862e92a <+0x4b>
0862ebcb +0x02ec:  mov    %ebx,(%esp)
0862ebce +0x02ef:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0862ebd3 +0x02f4:  mov    0x8(%ebp),%eax
0862ebd6 +0x02f7:  movl   $0x0,(%eax)
0862ebdc +0x02fd:  add    $0x14,%esp
0862ebdf +0x0300:  pop    %ebx
0862ebe0 +0x0301:  pop    %ebp
0862ebe1 +0x0302:  ret
0862ebe2 +0x0303:  push   %ebp
0862ebe3 +0x0304:  mov    %esp,%ebp
0862ebe5 +0x0306:  push   %esi
0862ebe6 +0x0307:  push   %ebx
0862ebe7 +0x0308:  sub    $0x30,%esp
0862ebea +0x030b:  lea    -0xb(%ebp),%eax
0862ebed +0x030e:  mov    %eax,(%esp)
0862ebf0 +0x0311:  call   0862eef0 <+0x611>
0862ebf5 +0x0316:  mov    0x8(%ebp),%eax
0862ebf8 +0x0319:  lea    -0xb(%ebp),%edx
0862ebfb +0x031c:  mov    %edx,0x10(%esp)
0862ebff +0x0320:  lea    -0xa(%ebp),%edx
0862ec02 +0x0323:  mov    %edx,0xc(%esp)
0862ec06 +0x0327:  lea    -0x9(%ebp),%edx
0862ec09 +0x032a:  mov    %edx,0x8(%esp)
0862ec0d +0x032e:  movl   $0x64,0x4(%esp)
0862ec15 +0x0336:  mov    %eax,(%esp)
0862ec18 +0x0339:  call   0862ef18 <+0x639>
0862ec1d +0x033e:  jmp    0862ec3a <+0x35b>
0862ec1f +0x0340:  mov    %edx,%ebx
0862ec21 +0x0342:  mov    %eax,%esi
0862ec23 +0x0344:  lea    -0xb(%ebp),%eax
0862ec26 +0x0347:  mov    %eax,(%esp)
0862ec29 +0x034a:  call   0862ef04 <+0x625>
0862ec2e +0x034f:  mov    %esi,%eax
0862ec30 +0x0351:  mov    %ebx,%edx
0862ec32 +0x0353:  mov    %eax,(%esp)
0862ec35 +0x0356:  call   08ae3750 <_Unwind_Resume>
0862ec3a +0x035b:  lea    -0xb(%ebp),%eax
0862ec3d +0x035e:  mov    %eax,(%esp)
0862ec40 +0x0361:  call   0862ef04 <+0x625>
0862ec45 +0x0366:  add    $0x30,%esp
0862ec48 +0x0369:  pop    %ebx
0862ec49 +0x036a:  pop    %esi
0862ec4a +0x036b:  pop    %ebp
0862ec4b +0x036c:  ret
0862ec4c +0x036d:  push   %ebp
0862ec4d +0x036e:  mov    %esp,%ebp
0862ec4f +0x0370:  push   %esi
0862ec50 +0x0371:  push   %ebx
0862ec51 +0x0372:  sub    $0x10,%esp
0862ec54 +0x0375:  mov    0x8(%ebp),%eax
0862ec57 +0x0378:  mov    %eax,(%esp)
0862ec5a +0x037b:  call   0862f044 <+0x765>
0862ec5f +0x0380:  jmp    0862ec79 <+0x39a>
0862ec61 +0x0382:  mov    %edx,%ebx
0862ec63 +0x0384:  mov    %eax,%esi
0862ec65 +0x0386:  mov    0x8(%ebp),%eax
0862ec68 +0x0389:  add    $0x4,%eax
0862ec6b +0x038c:  mov    %eax,(%esp)
0862ec6e +0x038f:  call   0862efe6 <+0x707>
0862ec73 +0x0394:  mov    %esi,%eax
0862ec75 +0x0396:  mov    %ebx,%edx
0862ec77 +0x0398:  jmp    0862ec89 <+0x3aa>
0862ec79 +0x039a:  mov    0x8(%ebp),%eax
0862ec7c +0x039d:  add    $0x4,%eax
0862ec7f +0x03a0:  mov    %eax,(%esp)
0862ec82 +0x03a3:  call   0862efe6 <+0x707>
0862ec87 +0x03a8:  jmp    0862eca4 <+0x3c5>
0862ec89 +0x03aa:  mov    %edx,%ebx
0862ec8b +0x03ac:  mov    %eax,%esi
0862ec8d +0x03ae:  mov    0x8(%ebp),%eax
0862ec90 +0x03b1:  mov    %eax,(%esp)
0862ec93 +0x03b4:  call   0862efd2 <+0x6f3>
0862ec98 +0x03b9:  mov    %esi,%eax
0862ec9a +0x03bb:  mov    %ebx,%edx
0862ec9c +0x03bd:  mov    %eax,(%esp)
0862ec9f +0x03c0:  call   08ae3750 <_Unwind_Resume>
0862eca4 +0x03c5:  mov    0x8(%ebp),%eax
0862eca7 +0x03c8:  mov    %eax,(%esp)
0862ecaa +0x03cb:  call   0862efd2 <+0x6f3>
0862ecaf +0x03d0:  add    $0x10,%esp
0862ecb2 +0x03d3:  pop    %ebx
0862ecb3 +0x03d4:  pop    %esi
0862ecb4 +0x03d5:  pop    %ebp
0862ecb5 +0x03d6:  ret
0862ecb6 +0x03d7:  push   %ebp
0862ecb7 +0x03d8:  mov    %esp,%ebp
0862ecb9 +0x03da:  pop    %ebp
0862ecba +0x03db:  ret
0862ecbb +0x03dc:  nop
0862ecbc +0x03dd:  push   %ebp
0862ecbd +0x03de:  mov    %esp,%ebp
0862ecbf +0x03e0:  push   %ebx
0862ecc0 +0x03e1:  sub    $0x14,%esp
0862ecc3 +0x03e4:  mov    0x8(%ebp),%ebx
0862ecc6 +0x03e7:  mov    0xc(%ebp),%eax
0862ecc9 +0x03ea:  mov    %eax,0x4(%esp)
0862eccd +0x03ee:  mov    %ebx,(%esp)
0862ecd0 +0x03f1:  call   0862f0de <+0x7ff>
0862ecd5 +0x03f6:  sub    $0x4,%esp
0862ecd8 +0x03f9:  mov    %ebx,%eax
0862ecda +0x03fb:  mov    -0x4(%ebp),%ebx
0862ecdd +0x03fe:  leave
0862ecde +0x03ff:  ret    $0x4
0862ece1 +0x0402:  nop
0862ece2 +0x0403:  push   %ebp
0862ece3 +0x0404:  mov    %esp,%ebp
0862ece5 +0x0406:  push   %ebx
0862ece6 +0x0407:  sub    $0x14,%esp
0862ece9 +0x040a:  mov    0x8(%ebp),%ebx
0862ecec +0x040d:  mov    0xc(%ebp),%eax
0862ecef +0x0410:  mov    %eax,0x4(%esp)
0862ecf3 +0x0414:  mov    %ebx,(%esp)
0862ecf6 +0x0417:  call   0862f174 <+0x895>
0862ecfb +0x041c:  sub    $0x4,%esp
0862ecfe +0x041f:  mov    %ebx,%eax
0862ed00 +0x0421:  mov    -0x4(%ebp),%ebx
0862ed03 +0x0424:  leave
0862ed04 +0x0425:  ret    $0x4
0862ed07 +0x0428:  nop
0862ed08 +0x0429:  push   %ebp
0862ed09 +0x042a:  mov    %esp,%ebp
0862ed0b +0x042c:  mov    0x8(%ebp),%eax
0862ed0e +0x042f:  mov    (%eax),%edx
0862ed10 +0x0431:  mov    0xc(%ebp),%eax
0862ed13 +0x0434:  mov    (%eax),%eax
0862ed15 +0x0436:  cmp    %eax,%edx
0862ed17 +0x0438:  setne  %al
0862ed1a +0x043b:  pop    %ebp
0862ed1b +0x043c:  ret
0862ed1c +0x043d:  push   %ebp
0862ed1d +0x043e:  mov    %esp,%ebp
0862ed1f +0x0440:  sub    $0x28,%esp
0862ed22 +0x0443:  mov    0x8(%ebp),%eax
0862ed25 +0x0446:  mov    (%eax),%eax
0862ed27 +0x0448:  mov    %eax,-0x10(%ebp)
0862ed2a +0x044b:  mov    0x8(%ebp),%eax
0862ed2d +0x044e:  mov    (%eax),%eax
0862ed2f +0x0450:  mov    (%eax),%edx
0862ed31 +0x0452:  mov    0x8(%ebp),%eax
0862ed34 +0x0455:  mov    %edx,(%eax)
0862ed36 +0x0457:  mov    0x8(%ebp),%eax
0862ed39 +0x045a:  mov    (%eax),%eax
0862ed3b +0x045c:  test   %eax,%eax
0862ed3d +0x045e:  jne    0862edae <+0x4cf>
0862ed3f +0x0460:  mov    -0x10(%ebp),%eax
0862ed42 +0x0463:  lea    0x4(%eax),%edx
0862ed45 +0x0466:  mov    0x8(%ebp),%eax
0862ed48 +0x0469:  mov    0x4(%eax),%eax
0862ed4b +0x046c:  mov    %edx,0x4(%esp)
0862ed4f +0x0470:  mov    %eax,(%esp)
0862ed52 +0x0473:  call   0862f1a0 <+0x8c1>
0862ed57 +0x0478:  mov    %eax,-0xc(%ebp)
0862ed5a +0x047b:  jmp    0862ed7b <+0x49c>
0862ed5c +0x047d:  mov    0x8(%ebp),%eax
0862ed5f +0x0480:  mov    0x4(%eax),%eax
0862ed62 +0x0483:  lea    0x4(%eax),%edx
0862ed65 +0x0486:  mov    -0xc(%ebp),%eax
0862ed68 +0x0489:  mov    %eax,0x4(%esp)
0862ed6c +0x048d:  mov    %edx,(%esp)
0862ed6f +0x0490:  call   0862f1e8 <+0x909>
0862ed74 +0x0495:  mov    (%eax),%edx
0862ed76 +0x0497:  mov    0x8(%ebp),%eax
0862ed79 +0x049a:  mov    %edx,(%eax)
0862ed7b +0x049c:  mov    0x8(%ebp),%eax
0862ed7e +0x049f:  mov    (%eax),%eax
0862ed80 +0x04a1:  test   %eax,%eax
0862ed82 +0x04a3:  jne    0862eda5 <+0x4c6>
0862ed84 +0x04a5:  addl   $0x1,-0xc(%ebp)
0862ed88 +0x04a9:  mov    0x8(%ebp),%eax
0862ed8b +0x04ac:  mov    0x4(%eax),%eax
0862ed8e +0x04af:  add    $0x4,%eax
0862ed91 +0x04b2:  mov    %eax,(%esp)
0862ed94 +0x04b5:  call   0862f1cc <+0x8ed>
0862ed99 +0x04ba:  cmp    %eax,-0xc(%ebp)
0862ed9c +0x04bd:  jae    0862eda5 <+0x4c6>
0862ed9e +0x04bf:  mov    $0x1,%eax
0862eda3 +0x04c4:  jmp    0862edaa <+0x4cb>
0862eda5 +0x04c6:  mov    $0x0,%eax
0862edaa +0x04cb:  test   %al,%al
0862edac +0x04cd:  jne    0862ed5c <+0x47d>
0862edae +0x04cf:  mov    0x8(%ebp),%eax
0862edb1 +0x04d2:  leave
0862edb2 +0x04d3:  ret
0862edb3 +0x04d4:  nop
0862edb4 +0x04d5:  push   %ebp
0862edb5 +0x04d6:  mov    %esp,%ebp
0862edb7 +0x04d8:  sub    $0x18,%esp
0862edba +0x04db:  mov    0x8(%ebp),%eax
0862edbd +0x04de:  mov    %eax,(%esp)
0862edc0 +0x04e1:  call   0862f1fa <+0x91b>
0862edc5 +0x04e6:  leave
0862edc6 +0x04e7:  ret
0862edc7 +0x04e8:  nop
0862edc8 +0x04e9:  push   %ebp
0862edc9 +0x04ea:  mov    %esp,%ebp
0862edcb +0x04ec:  sub    $0x18,%esp
0862edce +0x04ef:  mov    0x8(%ebp),%eax
0862edd1 +0x04f2:  mov    %eax,(%esp)
0862edd4 +0x04f5:  call   0862f044 <+0x765>
0862edd9 +0x04fa:  leave
0862edda +0x04fb:  ret
0862eddb +0x04fc:  nop
0862eddc +0x04fd:  push   %ebp
0862eddd +0x04fe:  mov    %esp,%ebp
0862eddf +0x0500:  push   %ebx
0862ede0 +0x0501:  sub    $0x14,%esp
0862ede3 +0x0504:  mov    0x8(%ebp),%ebx
0862ede6 +0x0507:  mov    0xc(%ebp),%eax
0862ede9 +0x050a:  mov    0x10(%ebp),%edx
0862edec +0x050d:  mov    %edx,0x8(%esp)
0862edf0 +0x0511:  mov    %eax,0x4(%esp)
0862edf4 +0x0515:  mov    %ebx,(%esp)
0862edf7 +0x0518:  call   0862f208 <+0x929>
0862edfc +0x051d:  sub    $0x4,%esp
0862edff +0x0520:  mov    %ebx,%eax
0862ee01 +0x0522:  mov    -0x4(%ebp),%ebx
0862ee04 +0x0525:  leave
0862ee05 +0x0526:  ret    $0x4
0862ee08 +0x0529:  push   %ebp
0862ee09 +0x052a:  mov    %esp,%ebp
0862ee0b +0x052c:  push   %ebx
0862ee0c +0x052d:  sub    $0x14,%esp
0862ee0f +0x0530:  mov    0x8(%ebp),%ebx
0862ee12 +0x0533:  mov    0xc(%ebp),%eax
0862ee15 +0x0536:  mov    %eax,0x4(%esp)
0862ee19 +0x053a:  mov    %ebx,(%esp)
0862ee1c +0x053d:  call   0862f2ba <+0x9db>
0862ee21 +0x0542:  sub    $0x4,%esp
0862ee24 +0x0545:  mov    %ebx,%eax
0862ee26 +0x0547:  mov    -0x4(%ebp),%ebx
0862ee29 +0x054a:  leave
0862ee2a +0x054b:  ret    $0x4
0862ee2d +0x054e:  nop
0862ee2e +0x054f:  push   %ebp
0862ee2f +0x0550:  mov    %esp,%ebp
0862ee31 +0x0552:  mov    0x8(%ebp),%eax
0862ee34 +0x0555:  mov    (%eax),%edx
0862ee36 +0x0557:  mov    0xc(%ebp),%eax
0862ee39 +0x055a:  mov    (%eax),%eax
0862ee3b +0x055c:  cmp    %eax,%edx
0862ee3d +0x055e:  setne  %al
0862ee40 +0x0561:  pop    %ebp
0862ee41 +0x0562:  ret
0862ee42 +0x0563:  push   %ebp
0862ee43 +0x0564:  mov    %esp,%ebp
0862ee45 +0x0566:  sub    $0x18,%esp
0862ee48 +0x0569:  mov    0x8(%ebp),%eax
0862ee4b +0x056c:  mov    %eax,(%esp)
0862ee4e +0x056f:  call   0862f2e6 <+0xa07>
0862ee53 +0x0574:  leave
0862ee54 +0x0575:  ret
0862ee55 +0x0576:  nop
0862ee56 +0x0577:  push   %ebp
0862ee57 +0x0578:  mov    %esp,%ebp
0862ee59 +0x057a:  push   %ebx
0862ee5a +0x057b:  sub    $0x14,%esp
0862ee5d +0x057e:  mov    0x8(%ebp),%ebx
0862ee60 +0x0581:  mov    0xc(%ebp),%eax
0862ee63 +0x0584:  mov    0x10(%ebp),%edx
0862ee66 +0x0587:  mov    %edx,0x8(%esp)
0862ee6a +0x058b:  mov    %eax,0x4(%esp)
0862ee6e +0x058f:  mov    %ebx,(%esp)
0862ee71 +0x0592:  call   0862f2f4 <+0xa15>
0862ee76 +0x0597:  sub    $0x4,%esp
0862ee79 +0x059a:  mov    %ebx,%eax
0862ee7b +0x059c:  mov    -0x4(%ebp),%ebx
0862ee7e +0x059f:  leave
0862ee7f +0x05a0:  ret    $0x4
0862ee82 +0x05a3:  push   %ebp
0862ee83 +0x05a4:  mov    %esp,%ebp
0862ee85 +0x05a6:  mov    0x8(%ebp),%eax
0862ee88 +0x05a9:  mov    (%eax),%edx
0862ee8a +0x05ab:  mov    0xc(%ebp),%eax
0862ee8d +0x05ae:  mov    (%eax),%eax
0862ee8f +0x05b0:  cmp    %eax,%edx
0862ee91 +0x05b2:  sete   %al
0862ee94 +0x05b5:  pop    %ebp
0862ee95 +0x05b6:  ret
0862ee96 +0x05b7:  push   %ebp
0862ee97 +0x05b8:  mov    %esp,%ebp
0862ee99 +0x05ba:  sub    $0x18,%esp
0862ee9c +0x05bd:  mov    0xc(%ebp),%eax
0862ee9f +0x05c0:  mov    %eax,(%esp)
0862eea2 +0x05c3:  call   080e2d79 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0xb1f>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0xb1f
0862eea7 +0x05c8:  mov    (%eax),%edx
0862eea9 +0x05ca:  mov    0x8(%ebp),%eax
0862eeac +0x05cd:  mov    %edx,(%eax)
0862eeae +0x05cf:  mov    0x10(%ebp),%eax
0862eeb1 +0x05d2:  mov    %eax,(%esp)
0862eeb4 +0x05d5:  call   0862f3a5 <+0xac6>
0862eeb9 +0x05da:  mov    (%eax),%edx
0862eebb +0x05dc:  mov    0x8(%ebp),%eax
0862eebe +0x05df:  mov    %edx,0x4(%eax)
0862eec1 +0x05e2:  leave
0862eec2 +0x05e3:  ret
0862eec3 +0x05e4:  nop
0862eec4 +0x05e5:  push   %ebp
0862eec5 +0x05e6:  mov    %esp,%ebp
0862eec7 +0x05e8:  push   %ebx
0862eec8 +0x05e9:  sub    $0x14,%esp
0862eecb +0x05ec:  mov    0x8(%ebp),%ebx
0862eece +0x05ef:  mov    0xc(%ebp),%eax
0862eed1 +0x05f2:  mov    0x10(%ebp),%edx
0862eed4 +0x05f5:  mov    %edx,0x8(%esp)
0862eed8 +0x05f9:  mov    %eax,0x4(%esp)
0862eedc +0x05fd:  mov    %ebx,(%esp)
0862eedf +0x0600:  call   0862f3ae <+0xacf>
0862eee4 +0x0605:  sub    $0x4,%esp
0862eee7 +0x0608:  mov    %ebx,%eax
0862eee9 +0x060a:  mov    -0x4(%ebp),%ebx
0862eeec +0x060d:  leave
0862eeed +0x060e:  ret    $0x4
0862eef0 +0x0611:  push   %ebp
0862eef1 +0x0612:  mov    %esp,%ebp
0862eef3 +0x0614:  sub    $0x18,%esp
0862eef6 +0x0617:  mov    0x8(%ebp),%eax
0862eef9 +0x061a:  mov    %eax,(%esp)
0862eefc +0x061d:  call   0862f3f2 <+0xb13>
0862ef01 +0x0622:  leave
0862ef02 +0x0623:  ret
0862ef03 +0x0624:  nop
0862ef04 +0x0625:  push   %ebp
0862ef05 +0x0626:  mov    %esp,%ebp
0862ef07 +0x0628:  sub    $0x18,%esp
0862ef0a +0x062b:  mov    0x8(%ebp),%eax
0862ef0d +0x062e:  mov    %eax,(%esp)
0862ef10 +0x0631:  call   0862f3f8 <+0xb19>
0862ef15 +0x0636:  leave
0862ef16 +0x0637:  ret
0862ef17 +0x0638:  nop
0862ef18 +0x0639:  push   %ebp
0862ef19 +0x063a:  mov    %esp,%ebp
0862ef1b +0x063c:  push   %esi
0862ef1c +0x063d:  push   %ebx
0862ef1d +0x063e:  sub    $0x20,%esp
0862ef20 +0x0641:  mov    0x8(%ebp),%eax
0862ef23 +0x0644:  mov    0x18(%ebp),%edx
0862ef26 +0x0647:  mov    %edx,0x4(%esp)
0862ef2a +0x064b:  mov    %eax,(%esp)
0862ef2d +0x064e:  call   0862f3fe <+0xb1f>
0862ef32 +0x0653:  mov    0x18(%ebp),%eax
0862ef35 +0x0656:  mov    %eax,0x4(%esp)
0862ef39 +0x065a:  lea    -0x9(%ebp),%eax
0862ef3c +0x065d:  mov    %eax,(%esp)
0862ef3f +0x0660:  call   0862f412 <+0xb33>
0862ef44 +0x0665:  mov    0x8(%ebp),%eax
0862ef47 +0x0668:  lea    0x4(%eax),%edx
0862ef4a +0x066b:  lea    -0x9(%ebp),%eax
0862ef4d +0x066e:  mov    %eax,0x4(%esp)
0862ef51 +0x0672:  mov    %edx,(%esp)
0862ef54 +0x0675:  call   0862f43a <+0xb5b>
0862ef59 +0x067a:  jmp    0862ef70 <+0x691>
0862ef5b +0x067c:  mov    %edx,%ebx
0862ef5d +0x067e:  mov    %eax,%esi
0862ef5f +0x0680:  lea    -0x9(%ebp),%eax
0862ef62 +0x0683:  mov    %eax,(%esp)
0862ef65 +0x0686:  call   0862f426 <+0xb47>
0862ef6a +0x068b:  mov    %esi,%eax
0862ef6c +0x068d:  mov    %ebx,%edx
0862ef6e +0x068f:  jmp    0862efaf <+0x6d0>
0862ef70 +0x0691:  lea    -0x9(%ebp),%eax
0862ef73 +0x0694:  mov    %eax,(%esp)
0862ef76 +0x0697:  call   0862f426 <+0xb47>
0862ef7b +0x069c:  mov    0x8(%ebp),%eax
0862ef7e +0x069f:  movl   $0x0,0x10(%eax)
0862ef85 +0x06a6:  mov    0xc(%ebp),%eax
0862ef88 +0x06a9:  mov    %eax,0x4(%esp)
0862ef8c +0x06ad:  mov    0x8(%ebp),%eax
0862ef8f +0x06b0:  mov    %eax,(%esp)
0862ef92 +0x06b3:  call   0862f454 <+0xb75>
0862ef97 +0x06b8:  jmp    0862efca <+0x6eb>
0862ef99 +0x06ba:  mov    %edx,%ebx
0862ef9b +0x06bc:  mov    %eax,%esi
0862ef9d +0x06be:  mov    0x8(%ebp),%eax
0862efa0 +0x06c1:  add    $0x4,%eax
0862efa3 +0x06c4:  mov    %eax,(%esp)
0862efa6 +0x06c7:  call   0862efe6 <+0x707>
0862efab +0x06cc:  mov    %esi,%eax
0862efad +0x06ce:  mov    %ebx,%edx
0862efaf +0x06d0:  mov    %edx,%ebx
0862efb1 +0x06d2:  mov    %eax,%esi
0862efb3 +0x06d4:  mov    0x8(%ebp),%eax
0862efb6 +0x06d7:  mov    %eax,(%esp)
0862efb9 +0x06da:  call   0862efd2 <+0x6f3>
0862efbe +0x06df:  mov    %esi,%eax
0862efc0 +0x06e1:  mov    %ebx,%edx
0862efc2 +0x06e3:  mov    %eax,(%esp)
0862efc5 +0x06e6:  call   08ae3750 <_Unwind_Resume>
0862efca +0x06eb:  add    $0x20,%esp
0862efcd +0x06ee:  pop    %ebx
0862efce +0x06ef:  pop    %esi
0862efcf +0x06f0:  pop    %ebp
0862efd0 +0x06f1:  ret
0862efd1 +0x06f2:  nop
0862efd2 +0x06f3:  push   %ebp
0862efd3 +0x06f4:  mov    %esp,%ebp
0862efd5 +0x06f6:  sub    $0x18,%esp
0862efd8 +0x06f9:  mov    0x8(%ebp),%eax
0862efdb +0x06fc:  mov    %eax,(%esp)
0862efde +0x06ff:  call   0862f4d2 <+0xbf3>
0862efe3 +0x0704:  leave
0862efe4 +0x0705:  ret
0862efe5 +0x0706:  nop
0862efe6 +0x0707:  push   %ebp
0862efe7 +0x0708:  mov    %esp,%ebp
0862efe9 +0x070a:  push   %esi
0862efea +0x070b:  push   %ebx
0862efeb +0x070c:  sub    $0x10,%esp
0862efee +0x070f:  mov    0x8(%ebp),%eax
0862eff1 +0x0712:  mov    %eax,(%esp)
0862eff4 +0x0715:  call   0862f554 <+0xc75>
0862eff9 +0x071a:  mov    0x8(%ebp),%edx
0862effc +0x071d:  mov    0x4(%edx),%ecx
0862efff +0x0720:  mov    0x8(%ebp),%edx
0862f002 +0x0723:  mov    (%edx),%edx
0862f004 +0x0725:  mov    %eax,0x8(%esp)
0862f008 +0x0729:  mov    %ecx,0x4(%esp)
0862f00c +0x072d:  mov    %edx,(%esp)
0862f00f +0x0730:  call   0862f55c <+0xc7d>
0862f014 +0x0735:  jmp    0862f031 <+0x752>
0862f016 +0x0737:  mov    %edx,%ebx
0862f018 +0x0739:  mov    %eax,%esi
0862f01a +0x073b:  mov    0x8(%ebp),%eax
0862f01d +0x073e:  mov    %eax,(%esp)
0862f020 +0x0741:  call   0862f4ec <+0xc0d>
0862f025 +0x0746:  mov    %esi,%eax
0862f027 +0x0748:  mov    %ebx,%edx
0862f029 +0x074a:  mov    %eax,(%esp)
0862f02c +0x074d:  call   08ae3750 <_Unwind_Resume>
0862f031 +0x0752:  mov    0x8(%ebp),%eax
0862f034 +0x0755:  mov    %eax,(%esp)
0862f037 +0x0758:  call   0862f4ec <+0xc0d>
0862f03c +0x075d:  add    $0x10,%esp
0862f03f +0x0760:  pop    %ebx
0862f040 +0x0761:  pop    %esi
0862f041 +0x0762:  pop    %ebp
0862f042 +0x0763:  ret
0862f043 +0x0764:  nop
0862f044 +0x0765:  push   %ebp
0862f045 +0x0766:  mov    %esp,%ebp
0862f047 +0x0768:  sub    $0x28,%esp
0862f04a +0x076b:  movl   $0x0,-0x14(%ebp)
0862f051 +0x0772:  jmp    0862f0b9 <+0x7da>
0862f053 +0x0774:  mov    0x8(%ebp),%eax
0862f056 +0x0777:  lea    0x4(%eax),%edx
0862f059 +0x077a:  mov    -0x14(%ebp),%eax
0862f05c +0x077d:  mov    %eax,0x4(%esp)
0862f060 +0x0781:  mov    %edx,(%esp)
0862f063 +0x0784:  call   0862f1e8 <+0x909>
0862f068 +0x0789:  mov    (%eax),%eax
0862f06a +0x078b:  mov    %eax,-0x10(%ebp)
0862f06d +0x078e:  jmp    0862f08f <+0x7b0>
0862f06f +0x0790:  mov    -0x10(%ebp),%eax
0862f072 +0x0793:  mov    (%eax),%eax
0862f074 +0x0795:  mov    %eax,-0xc(%ebp)
0862f077 +0x0798:  mov    -0x10(%ebp),%eax
0862f07a +0x079b:  mov    %eax,0x4(%esp)
0862f07e +0x079f:  mov    0x8(%ebp),%eax
0862f081 +0x07a2:  mov    %eax,(%esp)
0862f084 +0x07a5:  call   0862f576 <+0xc97>
0862f089 +0x07aa:  mov    -0xc(%ebp),%eax
0862f08c +0x07ad:  mov    %eax,-0x10(%ebp)
0862f08f +0x07b0:  cmpl   $0x0,-0x10(%ebp)
0862f093 +0x07b4:  setne  %al
0862f096 +0x07b7:  test   %al,%al
0862f098 +0x07b9:  jne    0862f06f <+0x790>
0862f09a +0x07bb:  mov    0x8(%ebp),%eax
0862f09d +0x07be:  lea    0x4(%eax),%edx
0862f0a0 +0x07c1:  mov    -0x14(%ebp),%eax
0862f0a3 +0x07c4:  mov    %eax,0x4(%esp)
0862f0a7 +0x07c8:  mov    %edx,(%esp)
0862f0aa +0x07cb:  call   0862f1e8 <+0x909>
0862f0af +0x07d0:  movl   $0x0,(%eax)
0862f0b5 +0x07d6:  addl   $0x1,-0x14(%ebp)
0862f0b9 +0x07da:  mov    0x8(%ebp),%eax
0862f0bc +0x07dd:  add    $0x4,%eax
0862f0bf +0x07e0:  mov    %eax,(%esp)
0862f0c2 +0x07e3:  call   0862f1cc <+0x8ed>
0862f0c7 +0x07e8:  cmp    -0x14(%ebp),%eax
0862f0ca +0x07eb:  seta   %al
0862f0cd +0x07ee:  test   %al,%al
0862f0cf +0x07f0:  jne    0862f053 <+0x774>
0862f0d1 +0x07f2:  mov    0x8(%ebp),%eax
0862f0d4 +0x07f5:  movl   $0x0,0x10(%eax)
0862f0db +0x07fc:  leave
0862f0dc +0x07fd:  ret
0862f0dd +0x07fe:  nop
0862f0de +0x07ff:  push   %ebp
0862f0df +0x0800:  mov    %esp,%ebp
0862f0e1 +0x0802:  push   %ebx
0862f0e2 +0x0803:  sub    $0x24,%esp
0862f0e5 +0x0806:  mov    0x8(%ebp),%ebx
0862f0e8 +0x0809:  movl   $0x0,-0xc(%ebp)
0862f0ef +0x0810:  jmp    0862f141 <+0x862>
0862f0f1 +0x0812:  mov    0xc(%ebp),%eax
0862f0f4 +0x0815:  lea    0x4(%eax),%edx
0862f0f7 +0x0818:  mov    -0xc(%ebp),%eax
0862f0fa +0x081b:  mov    %eax,0x4(%esp)
0862f0fe +0x081f:  mov    %edx,(%esp)
0862f101 +0x0822:  call   0862f1e8 <+0x909>
0862f106 +0x0827:  mov    (%eax),%eax
0862f108 +0x0829:  test   %eax,%eax
0862f10a +0x082b:  setne  %al
0862f10d +0x082e:  test   %al,%al
0862f10f +0x0830:  je     0862f13d <+0x85e>
0862f111 +0x0832:  mov    0xc(%ebp),%eax
0862f114 +0x0835:  lea    0x4(%eax),%edx
0862f117 +0x0838:  mov    -0xc(%ebp),%eax
0862f11a +0x083b:  mov    %eax,0x4(%esp)
0862f11e +0x083f:  mov    %edx,(%esp)
0862f121 +0x0842:  call   0862f1e8 <+0x909>
0862f126 +0x0847:  mov    (%eax),%eax
0862f128 +0x0849:  mov    0xc(%ebp),%edx
0862f12b +0x084c:  mov    %edx,0x8(%esp)
0862f12f +0x0850:  mov    %eax,0x4(%esp)
0862f133 +0x0854:  mov    %ebx,(%esp)
0862f136 +0x0857:  call   0862f5ca <+0xceb>
0862f13b +0x085c:  jmp    0862f16b <+0x88c>
0862f13d +0x085e:  addl   $0x1,-0xc(%ebp)
0862f141 +0x0862:  mov    0xc(%ebp),%eax
0862f144 +0x0865:  add    $0x4,%eax
0862f147 +0x0868:  mov    %eax,(%esp)
0862f14a +0x086b:  call   0862f1cc <+0x8ed>
0862f14f +0x0870:  cmp    -0xc(%ebp),%eax
0862f152 +0x0873:  seta   %al
0862f155 +0x0876:  test   %al,%al
0862f157 +0x0878:  jne    0862f0f1 <+0x812>
0862f159 +0x087a:  mov    0xc(%ebp),%eax
0862f15c +0x087d:  mov    %eax,0x4(%esp)
0862f160 +0x0881:  mov    %ebx,(%esp)
0862f163 +0x0884:  call   0862f174 <+0x895>
0862f168 +0x0889:  sub    $0x4,%esp
0862f16b +0x088c:  mov    %ebx,%eax
0862f16d +0x088e:  mov    -0x4(%ebp),%ebx
0862f170 +0x0891:  leave
0862f171 +0x0892:  ret    $0x4
0862f174 +0x0895:  push   %ebp
0862f175 +0x0896:  mov    %esp,%ebp
0862f177 +0x0898:  push   %ebx
0862f178 +0x0899:  sub    $0x14,%esp
0862f17b +0x089c:  mov    0x8(%ebp),%ebx
0862f17e +0x089f:  mov    0xc(%ebp),%eax
0862f181 +0x08a2:  mov    %eax,0x8(%esp)
0862f185 +0x08a6:  movl   $0x0,0x4(%esp)
0862f18d +0x08ae:  mov    %ebx,(%esp)
0862f190 +0x08b1:  call   0862f5ca <+0xceb>
0862f195 +0x08b6:  mov    %ebx,%eax
0862f197 +0x08b8:  add    $0x14,%esp
0862f19a +0x08bb:  pop    %ebx
0862f19b +0x08bc:  pop    %ebp
0862f19c +0x08bd:  ret    $0x4
0862f19f +0x08c0:  nop
0862f1a0 +0x08c1:  push   %ebp
0862f1a1 +0x08c2:  mov    %esp,%ebp
0862f1a3 +0x08c4:  sub    $0x18,%esp
0862f1a6 +0x08c7:  mov    0x8(%ebp),%eax
0862f1a9 +0x08ca:  lea    0x3(%eax),%edx
0862f1ac +0x08cd:  mov    0xc(%ebp),%eax
0862f1af +0x08d0:  mov    %eax,0x4(%esp)
0862f1b3 +0x08d4:  mov    %edx,(%esp)
0862f1b6 +0x08d7:  call   0862f5e0 <+0xd01>
0862f1bb +0x08dc:  mov    %eax,0x4(%esp)
0862f1bf +0x08e0:  mov    0x8(%ebp),%eax
0862f1c2 +0x08e3:  mov    %eax,(%esp)
0862f1c5 +0x08e6:  call   0862f5e8 <+0xd09>
0862f1ca +0x08eb:  leave
0862f1cb +0x08ec:  ret
0862f1cc +0x08ed:  push   %ebp
0862f1cd +0x08ee:  mov    %esp,%ebp
0862f1cf +0x08f0:  mov    0x8(%ebp),%eax
0862f1d2 +0x08f3:  mov    0x4(%eax),%eax
0862f1d5 +0x08f6:  mov    %eax,%edx
0862f1d7 +0x08f8:  mov    0x8(%ebp),%eax
0862f1da +0x08fb:  mov    (%eax),%eax
0862f1dc +0x08fd:  mov    %edx,%ecx
0862f1de +0x08ff:  sub    %eax,%ecx
0862f1e0 +0x0901:  mov    %ecx,%eax
0862f1e2 +0x0903:  sar    $0x2,%eax
0862f1e5 +0x0906:  pop    %ebp
0862f1e6 +0x0907:  ret
0862f1e7 +0x0908:  nop
0862f1e8 +0x0909:  push   %ebp
0862f1e9 +0x090a:  mov    %esp,%ebp
0862f1eb +0x090c:  mov    0x8(%ebp),%eax
0862f1ee +0x090f:  mov    (%eax),%eax
0862f1f0 +0x0911:  mov    0xc(%ebp),%edx
0862f1f3 +0x0914:  shl    $0x2,%edx
0862f1f6 +0x0917:  add    %edx,%eax
0862f1f8 +0x0919:  pop    %ebp
0862f1f9 +0x091a:  ret
0862f1fa +0x091b:  push   %ebp
0862f1fb +0x091c:  mov    %esp,%ebp
0862f1fd +0x091e:  mov    0x8(%ebp),%eax
0862f200 +0x0921:  mov    (%eax),%eax
0862f202 +0x0923:  add    $0x4,%eax
0862f205 +0x0926:  pop    %ebp
0862f206 +0x0927:  ret
0862f207 +0x0928:  nop
0862f208 +0x0929:  push   %ebp
0862f209 +0x092a:  mov    %esp,%ebp
0862f20b +0x092c:  push   %ebx
0862f20c +0x092d:  sub    $0x24,%esp
0862f20f +0x0930:  mov    0x8(%ebp),%ebx
0862f212 +0x0933:  mov    0x10(%ebp),%eax
0862f215 +0x0936:  mov    %eax,0x4(%esp)
0862f219 +0x093a:  mov    0xc(%ebp),%eax
0862f21c +0x093d:  mov    %eax,(%esp)
0862f21f +0x0940:  call   0862f5e8 <+0xd09>
0862f224 +0x0945:  mov    %eax,-0x10(%ebp)
0862f227 +0x0948:  mov    0xc(%ebp),%eax
0862f22a +0x094b:  lea    0x4(%eax),%edx
0862f22d +0x094e:  mov    -0x10(%ebp),%eax
0862f230 +0x0951:  mov    %eax,0x4(%esp)
0862f234 +0x0955:  mov    %edx,(%esp)
0862f237 +0x0958:  call   0862f614 <+0xd35>
0862f23c +0x095d:  mov    (%eax),%eax
0862f23e +0x095f:  mov    %eax,-0xc(%ebp)
0862f241 +0x0962:  jmp    0862f24b <+0x96c>
0862f243 +0x0964:  mov    -0xc(%ebp),%eax
0862f246 +0x0967:  mov    (%eax),%eax
0862f248 +0x0969:  mov    %eax,-0xc(%ebp)
0862f24b +0x096c:  cmpl   $0x0,-0xc(%ebp)
0862f24f +0x0970:  je     0862f290 <+0x9b1>
0862f251 +0x0972:  mov    -0xc(%ebp),%eax
0862f254 +0x0975:  lea    0x4(%eax),%edx
0862f257 +0x0978:  mov    0xc(%ebp),%eax
0862f25a +0x097b:  add    $0x3,%eax
0862f25d +0x097e:  mov    %edx,0x4(%esp)
0862f261 +0x0982:  mov    %eax,(%esp)
0862f264 +0x0985:  call   0862f5e0 <+0xd01>
0862f269 +0x098a:  mov    0xc(%ebp),%edx
0862f26c +0x098d:  lea    0x2(%edx),%ecx
0862f26f +0x0990:  mov    0x10(%ebp),%edx
0862f272 +0x0993:  mov    %edx,0x8(%esp)
0862f276 +0x0997:  mov    %eax,0x4(%esp)
0862f27a +0x099b:  mov    %ecx,(%esp)
0862f27d +0x099e:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0862f282 +0x09a3:  xor    $0x1,%eax
0862f285 +0x09a6:  test   %al,%al
0862f287 +0x09a8:  je     0862f290 <+0x9b1>
0862f289 +0x09aa:  mov    $0x1,%eax
0862f28e +0x09af:  jmp    0862f295 <+0x9b6>
0862f290 +0x09b1:  mov    $0x0,%eax
0862f295 +0x09b6:  test   %al,%al
0862f297 +0x09b8:  jne    0862f243 <+0x964>
0862f299 +0x09ba:  mov    0xc(%ebp),%eax
0862f29c +0x09bd:  mov    %eax,0x8(%esp)
0862f2a0 +0x09c1:  mov    -0xc(%ebp),%eax
0862f2a3 +0x09c4:  mov    %eax,0x4(%esp)
0862f2a7 +0x09c8:  mov    %ebx,(%esp)
0862f2aa +0x09cb:  call   0862f626 <+0xd47>
0862f2af +0x09d0:  mov    %ebx,%eax
0862f2b1 +0x09d2:  add    $0x24,%esp
0862f2b4 +0x09d5:  pop    %ebx
0862f2b5 +0x09d6:  pop    %ebp
0862f2b6 +0x09d7:  ret    $0x4
0862f2b9 +0x09da:  nop
0862f2ba +0x09db:  push   %ebp
0862f2bb +0x09dc:  mov    %esp,%ebp
0862f2bd +0x09de:  push   %ebx
0862f2be +0x09df:  sub    $0x14,%esp
0862f2c1 +0x09e2:  mov    0x8(%ebp),%ebx
0862f2c4 +0x09e5:  mov    0xc(%ebp),%eax
0862f2c7 +0x09e8:  mov    %eax,0x8(%esp)
0862f2cb +0x09ec:  movl   $0x0,0x4(%esp)
0862f2d3 +0x09f4:  mov    %ebx,(%esp)
0862f2d6 +0x09f7:  call   0862f626 <+0xd47>
0862f2db +0x09fc:  mov    %ebx,%eax
0862f2dd +0x09fe:  add    $0x14,%esp
0862f2e0 +0x0a01:  pop    %ebx
0862f2e1 +0x0a02:  pop    %ebp
0862f2e2 +0x0a03:  ret    $0x4
0862f2e5 +0x0a06:  nop
0862f2e6 +0x0a07:  push   %ebp
0862f2e7 +0x0a08:  mov    %esp,%ebp
0862f2e9 +0x0a0a:  mov    0x8(%ebp),%eax
0862f2ec +0x0a0d:  mov    (%eax),%eax
0862f2ee +0x0a0f:  add    $0x4,%eax
0862f2f1 +0x0a12:  pop    %ebp
0862f2f2 +0x0a13:  ret
0862f2f3 +0x0a14:  nop
0862f2f4 +0x0a15:  push   %ebp
0862f2f5 +0x0a16:  mov    %esp,%ebp
0862f2f7 +0x0a18:  push   %ebx
0862f2f8 +0x0a19:  sub    $0x24,%esp
0862f2fb +0x0a1c:  mov    0x8(%ebp),%ebx
0862f2fe +0x0a1f:  mov    0x10(%ebp),%eax
0862f301 +0x0a22:  mov    %eax,0x4(%esp)
0862f305 +0x0a26:  mov    0xc(%ebp),%eax
0862f308 +0x0a29:  mov    %eax,(%esp)
0862f30b +0x0a2c:  call   0862f5e8 <+0xd09>
0862f310 +0x0a31:  mov    %eax,-0x10(%ebp)
0862f313 +0x0a34:  mov    0xc(%ebp),%eax
0862f316 +0x0a37:  lea    0x4(%eax),%edx
0862f319 +0x0a3a:  mov    -0x10(%ebp),%eax
0862f31c +0x0a3d:  mov    %eax,0x4(%esp)
0862f320 +0x0a41:  mov    %edx,(%esp)
0862f323 +0x0a44:  call   0862f1e8 <+0x909>
0862f328 +0x0a49:  mov    (%eax),%eax
0862f32a +0x0a4b:  mov    %eax,-0xc(%ebp)
0862f32d +0x0a4e:  jmp    0862f337 <+0xa58>
0862f32f +0x0a50:  mov    -0xc(%ebp),%eax
0862f332 +0x0a53:  mov    (%eax),%eax
0862f334 +0x0a55:  mov    %eax,-0xc(%ebp)
0862f337 +0x0a58:  cmpl   $0x0,-0xc(%ebp)
0862f33b +0x0a5c:  je     0862f37c <+0xa9d>
0862f33d +0x0a5e:  mov    -0xc(%ebp),%eax
0862f340 +0x0a61:  lea    0x4(%eax),%edx
0862f343 +0x0a64:  mov    0xc(%ebp),%eax
0862f346 +0x0a67:  add    $0x3,%eax
0862f349 +0x0a6a:  mov    %edx,0x4(%esp)
0862f34d +0x0a6e:  mov    %eax,(%esp)
0862f350 +0x0a71:  call   0862f63c <+0xd5d>
0862f355 +0x0a76:  mov    0xc(%ebp),%edx
0862f358 +0x0a79:  lea    0x2(%edx),%ecx
0862f35b +0x0a7c:  mov    0x10(%ebp),%edx
0862f35e +0x0a7f:  mov    %edx,0x8(%esp)
0862f362 +0x0a83:  mov    %eax,0x4(%esp)
0862f366 +0x0a87:  mov    %ecx,(%esp)
0862f369 +0x0a8a:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0862f36e +0x0a8f:  xor    $0x1,%eax
0862f371 +0x0a92:  test   %al,%al
0862f373 +0x0a94:  je     0862f37c <+0xa9d>
0862f375 +0x0a96:  mov    $0x1,%eax
0862f37a +0x0a9b:  jmp    0862f381 <+0xaa2>
0862f37c +0x0a9d:  mov    $0x0,%eax
0862f381 +0x0aa2:  test   %al,%al
0862f383 +0x0aa4:  jne    0862f32f <+0xa50>
0862f385 +0x0aa6:  mov    0xc(%ebp),%eax
0862f388 +0x0aa9:  mov    %eax,0x8(%esp)
0862f38c +0x0aad:  mov    -0xc(%ebp),%eax
0862f38f +0x0ab0:  mov    %eax,0x4(%esp)
0862f393 +0x0ab4:  mov    %ebx,(%esp)
0862f396 +0x0ab7:  call   0862f5ca <+0xceb>
0862f39b +0x0abc:  mov    %ebx,%eax
0862f39d +0x0abe:  add    $0x24,%esp
0862f3a0 +0x0ac1:  pop    %ebx
0862f3a1 +0x0ac2:  pop    %ebp
0862f3a2 +0x0ac3:  ret    $0x4
0862f3a5 +0x0ac6:  push   %ebp
0862f3a6 +0x0ac7:  mov    %esp,%ebp
0862f3a8 +0x0ac9:  mov    0x8(%ebp),%eax
0862f3ab +0x0acc:  pop    %ebp
0862f3ac +0x0acd:  ret
0862f3ad +0x0ace:  nop
0862f3ae +0x0acf:  push   %ebp
0862f3af +0x0ad0:  mov    %esp,%ebp
0862f3b1 +0x0ad2:  push   %ebx
0862f3b2 +0x0ad3:  sub    $0x14,%esp
0862f3b5 +0x0ad6:  mov    0x8(%ebp),%ebx
0862f3b8 +0x0ad9:  mov    0xc(%ebp),%eax
0862f3bb +0x0adc:  mov    0x10(%eax),%eax
0862f3be +0x0adf:  add    $0x1,%eax
0862f3c1 +0x0ae2:  mov    %eax,0x4(%esp)
0862f3c5 +0x0ae6:  mov    0xc(%ebp),%eax
0862f3c8 +0x0ae9:  mov    %eax,(%esp)
0862f3cb +0x0aec:  call   0862f644 <+0xd65>
0862f3d0 +0x0af1:  mov    0x10(%ebp),%eax
0862f3d3 +0x0af4:  mov    %eax,0x8(%esp)
0862f3d7 +0x0af8:  mov    0xc(%ebp),%eax
0862f3da +0x0afb:  mov    %eax,0x4(%esp)
0862f3de +0x0aff:  mov    %ebx,(%esp)
0862f3e1 +0x0b02:  call   0862f8bc <+0xfdd>
0862f3e6 +0x0b07:  sub    $0x4,%esp
0862f3e9 +0x0b0a:  mov    %ebx,%eax
0862f3eb +0x0b0c:  mov    -0x4(%ebp),%ebx
0862f3ee +0x0b0f:  leave
0862f3ef +0x0b10:  ret    $0x4
0862f3f2 +0x0b13:  push   %ebp
0862f3f3 +0x0b14:  mov    %esp,%ebp
0862f3f5 +0x0b16:  pop    %ebp
0862f3f6 +0x0b17:  ret
0862f3f7 +0x0b18:  nop
0862f3f8 +0x0b19:  push   %ebp
0862f3f9 +0x0b1a:  mov    %esp,%ebp
0862f3fb +0x0b1c:  pop    %ebp
0862f3fc +0x0b1d:  ret
0862f3fd +0x0b1e:  nop
0862f3fe +0x0b1f:  push   %ebp
0862f3ff +0x0b20:  mov    %esp,%ebp
0862f401 +0x0b22:  sub    $0x18,%esp
0862f404 +0x0b25:  mov    0x8(%ebp),%eax
0862f407 +0x0b28:  mov    %eax,(%esp)
0862f40a +0x0b2b:  call   0862fa1e <+0x113f>
0862f40f +0x0b30:  leave
0862f410 +0x0b31:  ret
0862f411 +0x0b32:  nop
0862f412 +0x0b33:  push   %ebp
0862f413 +0x0b34:  mov    %esp,%ebp
0862f415 +0x0b36:  sub    $0x18,%esp
0862f418 +0x0b39:  mov    0x8(%ebp),%eax
0862f41b +0x0b3c:  mov    %eax,(%esp)
0862f41e +0x0b3f:  call   0862fa24 <+0x1145>
0862f423 +0x0b44:  leave
0862f424 +0x0b45:  ret
0862f425 +0x0b46:  nop
0862f426 +0x0b47:  push   %ebp
0862f427 +0x0b48:  mov    %esp,%ebp
0862f429 +0x0b4a:  sub    $0x18,%esp
0862f42c +0x0b4d:  mov    0x8(%ebp),%eax
0862f42f +0x0b50:  mov    %eax,(%esp)
0862f432 +0x0b53:  call   0862fa2a <+0x114b>
0862f437 +0x0b58:  leave
0862f438 +0x0b59:  ret
0862f439 +0x0b5a:  nop
0862f43a +0x0b5b:  push   %ebp
0862f43b +0x0b5c:  mov    %esp,%ebp
0862f43d +0x0b5e:  sub    $0x18,%esp
0862f440 +0x0b61:  mov    0x8(%ebp),%eax
0862f443 +0x0b64:  mov    0xc(%ebp),%edx
0862f446 +0x0b67:  mov    %edx,0x4(%esp)
0862f44a +0x0b6b:  mov    %eax,(%esp)
0862f44d +0x0b6e:  call   0862fa30 <+0x1151>
0862f452 +0x0b73:  leave
0862f453 +0x0b74:  ret
0862f454 +0x0b75:  push   %ebp
0862f455 +0x0b76:  mov    %esp,%ebp
0862f457 +0x0b78:  sub    $0x28,%esp
0862f45a +0x0b7b:  mov    0xc(%ebp),%eax
0862f45d +0x0b7e:  mov    %eax,0x4(%esp)
0862f461 +0x0b82:  mov    0x8(%ebp),%eax
0862f464 +0x0b85:  mov    %eax,(%esp)
0862f467 +0x0b88:  call   0862fa4a <+0x116b>
0862f46c +0x0b8d:  mov    %eax,-0xc(%ebp)
0862f46f +0x0b90:  mov    0x8(%ebp),%eax
0862f472 +0x0b93:  lea    0x4(%eax),%edx
0862f475 +0x0b96:  mov    -0xc(%ebp),%eax
0862f478 +0x0b99:  mov    %eax,0x4(%esp)
0862f47c +0x0b9d:  mov    %edx,(%esp)
0862f47f +0x0ba0:  call   0862fa5e <+0x117f>
0862f484 +0x0ba5:  movl   $0x0,-0x14(%ebp)
0862f48b +0x0bac:  mov    0x8(%ebp),%eax
0862f48e +0x0baf:  lea    0x4(%eax),%edx
0862f491 +0x0bb2:  lea    -0x10(%ebp),%eax
0862f494 +0x0bb5:  mov    %edx,0x4(%esp)
0862f498 +0x0bb9:  mov    %eax,(%esp)
0862f49b +0x0bbc:  call   0862fb82 <+0x12a3>
0862f4a0 +0x0bc1:  sub    $0x4,%esp
0862f4a3 +0x0bc4:  mov    0x8(%ebp),%eax
0862f4a6 +0x0bc7:  lea    0x4(%eax),%edx
0862f4a9 +0x0bca:  lea    -0x14(%ebp),%eax
0862f4ac +0x0bcd:  mov    %eax,0xc(%esp)
0862f4b0 +0x0bd1:  mov    -0xc(%ebp),%eax
0862f4b3 +0x0bd4:  mov    %eax,0x8(%esp)
0862f4b7 +0x0bd8:  mov    -0x10(%ebp),%eax
0862f4ba +0x0bdb:  mov    %eax,0x4(%esp)
0862f4be +0x0bdf:  mov    %edx,(%esp)
0862f4c1 +0x0be2:  call   0862fba8 <+0x12c9>
0862f4c6 +0x0be7:  mov    0x8(%ebp),%eax
0862f4c9 +0x0bea:  movl   $0x0,0x10(%eax)
0862f4d0 +0x0bf1:  leave
0862f4d1 +0x0bf2:  ret
0862f4d2 +0x0bf3:  push   %ebp
0862f4d3 +0x0bf4:  mov    %esp,%ebp
0862f4d5 +0x0bf6:  pop    %ebp
0862f4d6 +0x0bf7:  ret
0862f4d7 +0x0bf8:  nop
0862f4d8 +0x0bf9:  push   %ebp
0862f4d9 +0x0bfa:  mov    %esp,%ebp
0862f4db +0x0bfc:  sub    $0x18,%esp
0862f4de +0x0bff:  mov    0x8(%ebp),%eax
0862f4e1 +0x0c02:  mov    %eax,(%esp)
0862f4e4 +0x0c05:  call   0862f426 <+0xb47>
0862f4e9 +0x0c0a:  leave
0862f4ea +0x0c0b:  ret
0862f4eb +0x0c0c:  nop
0862f4ec +0x0c0d:  push   %ebp
0862f4ed +0x0c0e:  mov    %esp,%ebp
0862f4ef +0x0c10:  push   %esi
0862f4f0 +0x0c11:  push   %ebx
0862f4f1 +0x0c12:  sub    $0x10,%esp
0862f4f4 +0x0c15:  mov    0x8(%ebp),%eax
0862f4f7 +0x0c18:  mov    0x8(%eax),%eax
0862f4fa +0x0c1b:  mov    %eax,%edx
0862f4fc +0x0c1d:  mov    0x8(%ebp),%eax
0862f4ff +0x0c20:  mov    (%eax),%eax
0862f501 +0x0c22:  mov    %edx,%ecx
0862f503 +0x0c24:  sub    %eax,%ecx
0862f505 +0x0c26:  mov    %ecx,%eax
0862f507 +0x0c28:  sar    $0x2,%eax
0862f50a +0x0c2b:  mov    %eax,%edx
0862f50c +0x0c2d:  mov    0x8(%ebp),%eax
0862f50f +0x0c30:  mov    (%eax),%eax
0862f511 +0x0c32:  mov    %edx,0x8(%esp)
0862f515 +0x0c36:  mov    %eax,0x4(%esp)
0862f519 +0x0c3a:  mov    0x8(%ebp),%eax
0862f51c +0x0c3d:  mov    %eax,(%esp)
0862f51f +0x0c40:  call   0862fbd0 <+0x12f1>
0862f524 +0x0c45:  jmp    0862f541 <+0xc62>
0862f526 +0x0c47:  mov    %edx,%ebx
0862f528 +0x0c49:  mov    %eax,%esi
0862f52a +0x0c4b:  mov    0x8(%ebp),%eax
0862f52d +0x0c4e:  mov    %eax,(%esp)
0862f530 +0x0c51:  call   0862f4d8 <+0xbf9>
0862f535 +0x0c56:  mov    %esi,%eax
0862f537 +0x0c58:  mov    %ebx,%edx
0862f539 +0x0c5a:  mov    %eax,(%esp)
0862f53c +0x0c5d:  call   08ae3750 <_Unwind_Resume>
0862f541 +0x0c62:  mov    0x8(%ebp),%eax
0862f544 +0x0c65:  mov    %eax,(%esp)
0862f547 +0x0c68:  call   0862f4d8 <+0xbf9>
0862f54c +0x0c6d:  add    $0x10,%esp
0862f54f +0x0c70:  pop    %ebx
0862f550 +0x0c71:  pop    %esi
0862f551 +0x0c72:  pop    %ebp
0862f552 +0x0c73:  ret
0862f553 +0x0c74:  nop
0862f554 +0x0c75:  push   %ebp
0862f555 +0x0c76:  mov    %esp,%ebp
0862f557 +0x0c78:  mov    0x8(%ebp),%eax
0862f55a +0x0c7b:  pop    %ebp
0862f55b +0x0c7c:  ret
0862f55c +0x0c7d:  push   %ebp
0862f55d +0x0c7e:  mov    %esp,%ebp
0862f55f +0x0c80:  sub    $0x18,%esp
0862f562 +0x0c83:  mov    0xc(%ebp),%eax
0862f565 +0x0c86:  mov    %eax,0x4(%esp)
0862f569 +0x0c8a:  mov    0x8(%ebp),%eax
0862f56c +0x0c8d:  mov    %eax,(%esp)
0862f56f +0x0c90:  call   0862fbf7 <+0x1318>
0862f574 +0x0c95:  leave
0862f575 +0x0c96:  ret
0862f576 +0x0c97:  push   %ebp
0862f577 +0x0c98:  mov    %esp,%ebp
0862f579 +0x0c9a:  push   %ebx
0862f57a +0x0c9b:  sub    $0x24,%esp
0862f57d +0x0c9e:  mov    0xc(%ebp),%eax
0862f580 +0x0ca1:  lea    0x4(%eax),%ebx
0862f583 +0x0ca4:  lea    -0x9(%ebp),%eax
0862f586 +0x0ca7:  mov    0x8(%ebp),%edx
0862f589 +0x0caa:  mov    %edx,0x4(%esp)
0862f58d +0x0cae:  mov    %eax,(%esp)
0862f590 +0x0cb1:  call   0862fc12 <+0x1333>
0862f595 +0x0cb6:  sub    $0x4,%esp
0862f598 +0x0cb9:  lea    -0x9(%ebp),%eax
0862f59b +0x0cbc:  mov    %ebx,0x4(%esp)
0862f59f +0x0cc0:  mov    %eax,(%esp)
0862f5a2 +0x0cc3:  call   0862fc40 <+0x1361>
0862f5a7 +0x0cc8:  lea    -0x9(%ebp),%eax
0862f5aa +0x0ccb:  mov    %eax,(%esp)
0862f5ad +0x0cce:  call   0862ef04 <+0x625>
0862f5b2 +0x0cd3:  mov    0xc(%ebp),%eax
0862f5b5 +0x0cd6:  mov    %eax,0x4(%esp)
0862f5b9 +0x0cda:  mov    0x8(%ebp),%eax
0862f5bc +0x0cdd:  mov    %eax,(%esp)
0862f5bf +0x0ce0:  call   0862fc54 <+0x1375>
0862f5c4 +0x0ce5:  mov    -0x4(%ebp),%ebx
0862f5c7 +0x0ce8:  leave
0862f5c8 +0x0ce9:  ret
0862f5c9 +0x0cea:  nop
0862f5ca +0x0ceb:  push   %ebp
0862f5cb +0x0cec:  mov    %esp,%ebp
0862f5cd +0x0cee:  mov    0x8(%ebp),%eax
0862f5d0 +0x0cf1:  mov    0xc(%ebp),%edx
0862f5d3 +0x0cf4:  mov    %edx,(%eax)
0862f5d5 +0x0cf6:  mov    0x8(%ebp),%eax
0862f5d8 +0x0cf9:  mov    0x10(%ebp),%edx
0862f5db +0x0cfc:  mov    %edx,0x4(%eax)
0862f5de +0x0cff:  pop    %ebp
0862f5df +0x0d00:  ret
0862f5e0 +0x0d01:  push   %ebp
0862f5e1 +0x0d02:  mov    %esp,%ebp
0862f5e3 +0x0d04:  mov    0xc(%ebp),%eax
0862f5e6 +0x0d07:  pop    %ebp
0862f5e7 +0x0d08:  ret
0862f5e8 +0x0d09:  push   %ebp
0862f5e9 +0x0d0a:  mov    %esp,%ebp
0862f5eb +0x0d0c:  sub    $0x18,%esp
0862f5ee +0x0d0f:  mov    0x8(%ebp),%eax
0862f5f1 +0x0d12:  add    $0x4,%eax
0862f5f4 +0x0d15:  mov    %eax,(%esp)
0862f5f7 +0x0d18:  call   0862f1cc <+0x8ed>
0862f5fc +0x0d1d:  mov    %eax,0x8(%esp)
0862f600 +0x0d21:  mov    0xc(%ebp),%eax
0862f603 +0x0d24:  mov    %eax,0x4(%esp)
0862f607 +0x0d28:  mov    0x8(%ebp),%eax
0862f60a +0x0d2b:  mov    %eax,(%esp)
0862f60d +0x0d2e:  call   0862fc76 <+0x1397>
0862f612 +0x0d33:  leave
0862f613 +0x0d34:  ret
0862f614 +0x0d35:  push   %ebp
0862f615 +0x0d36:  mov    %esp,%ebp
0862f617 +0x0d38:  mov    0x8(%ebp),%eax
0862f61a +0x0d3b:  mov    (%eax),%eax
0862f61c +0x0d3d:  mov    0xc(%ebp),%edx
0862f61f +0x0d40:  shl    $0x2,%edx
0862f622 +0x0d43:  add    %edx,%eax
0862f624 +0x0d45:  pop    %ebp
0862f625 +0x0d46:  ret
0862f626 +0x0d47:  push   %ebp
0862f627 +0x0d48:  mov    %esp,%ebp
0862f629 +0x0d4a:  mov    0x8(%ebp),%eax
0862f62c +0x0d4d:  mov    0xc(%ebp),%edx
0862f62f +0x0d50:  mov    %edx,(%eax)
0862f631 +0x0d52:  mov    0x8(%ebp),%eax
0862f634 +0x0d55:  mov    0x10(%ebp),%edx
0862f637 +0x0d58:  mov    %edx,0x4(%eax)
0862f63a +0x0d5b:  pop    %ebp
0862f63b +0x0d5c:  ret
0862f63c +0x0d5d:  push   %ebp
0862f63d +0x0d5e:  mov    %esp,%ebp
0862f63f +0x0d60:  mov    0xc(%ebp),%eax
0862f642 +0x0d63:  pop    %ebp
0862f643 +0x0d64:  ret
0862f644 +0x0d65:  push   %ebp
0862f645 +0x0d66:  mov    %esp,%ebp
0862f647 +0x0d68:  push   %esi
0862f648 +0x0d69:  push   %ebx
0862f649 +0x0d6a:  sub    $0x40,%esp
0862f64c +0x0d6d:  mov    0x8(%ebp),%eax
0862f64f +0x0d70:  add    $0x4,%eax
0862f652 +0x0d73:  mov    %eax,(%esp)
0862f655 +0x0d76:  call   0862f1cc <+0x8ed>
0862f65a +0x0d7b:  mov    %eax,-0x24(%ebp)
0862f65d +0x0d7e:  mov    0xc(%ebp),%eax
0862f660 +0x0d81:  cmp    -0x24(%ebp),%eax
0862f663 +0x0d84:  jbe    0862f8b1 <+0xfd2>
0862f669 +0x0d8a:  mov    0xc(%ebp),%eax
0862f66c +0x0d8d:  mov    %eax,0x4(%esp)
0862f670 +0x0d91:  mov    0x8(%ebp),%eax
0862f673 +0x0d94:  mov    %eax,(%esp)
0862f676 +0x0d97:  call   0862fa4a <+0x116b>
0862f67b +0x0d9c:  mov    %eax,-0x20(%ebp)
0862f67e +0x0d9f:  mov    -0x20(%ebp),%eax
0862f681 +0x0da2:  cmp    -0x24(%ebp),%eax
0862f684 +0x0da5:  jbe    0862f8b1 <+0xfd2>
0862f68a +0x0dab:  mov    0x8(%ebp),%eax
0862f68d +0x0dae:  lea    0x4(%eax),%edx
0862f690 +0x0db1:  lea    -0x29(%ebp),%eax
0862f693 +0x0db4:  mov    %edx,0x4(%esp)
0862f697 +0x0db8:  mov    %eax,(%esp)
0862f69a +0x0dbb:  call   0862fca0 <+0x13c1>
0862f69f +0x0dc0:  sub    $0x4,%esp
0862f6a2 +0x0dc3:  movl   $0x0,-0x28(%ebp)
0862f6a9 +0x0dca:  lea    -0x29(%ebp),%eax
0862f6ac +0x0dcd:  mov    %eax,0xc(%esp)
0862f6b0 +0x0dd1:  lea    -0x28(%ebp),%eax
0862f6b3 +0x0dd4:  mov    %eax,0x8(%esp)
0862f6b7 +0x0dd8:  mov    -0x20(%ebp),%eax
0862f6ba +0x0ddb:  mov    %eax,0x4(%esp)
0862f6be +0x0ddf:  lea    -0x38(%ebp),%eax
0862f6c1 +0x0de2:  mov    %eax,(%esp)
0862f6c4 +0x0de5:  call   0862fcd2 <+0x13f3>
0862f6c9 +0x0dea:  jmp    0862f6e6 <+0xe07>
0862f6cb +0x0dec:  mov    %edx,%ebx
0862f6cd +0x0dee:  mov    %eax,%esi
0862f6cf +0x0df0:  lea    -0x29(%ebp),%eax
0862f6d2 +0x0df3:  mov    %eax,(%esp)
0862f6d5 +0x0df6:  call   0862f426 <+0xb47>
0862f6da +0x0dfb:  mov    %esi,%eax
0862f6dc +0x0dfd:  mov    %ebx,%edx
0862f6de +0x0dff:  mov    %eax,(%esp)
0862f6e1 +0x0e02:  call   08ae3750 <_Unwind_Resume>
0862f6e6 +0x0e07:  lea    -0x29(%ebp),%eax
0862f6e9 +0x0e0a:  mov    %eax,(%esp)
0862f6ec +0x0e0d:  call   0862f426 <+0xb47>
0862f6f1 +0x0e12:  movl   $0x0,-0x1c(%ebp)
0862f6f8 +0x0e19:  jmp    0862f7b4 <+0xed5>
0862f6fd +0x0e1e:  mov    0x8(%ebp),%eax
0862f700 +0x0e21:  lea    0x4(%eax),%edx
0862f703 +0x0e24:  mov    -0x1c(%ebp),%eax
0862f706 +0x0e27:  mov    %eax,0x4(%esp)
0862f70a +0x0e2b:  mov    %edx,(%esp)
0862f70d +0x0e2e:  call   0862f1e8 <+0x909>
0862f712 +0x0e33:  mov    (%eax),%eax
0862f714 +0x0e35:  mov    %eax,-0x18(%ebp)
0862f717 +0x0e38:  jmp    0862f7a1 <+0xec2>
0862f71c +0x0e3d:  mov    -0x18(%ebp),%eax
0862f71f +0x0e40:  lea    0x4(%eax),%edx
0862f722 +0x0e43:  mov    -0x20(%ebp),%eax
0862f725 +0x0e46:  mov    %eax,0x8(%esp)
0862f729 +0x0e4a:  mov    %edx,0x4(%esp)
0862f72d +0x0e4e:  mov    0x8(%ebp),%eax
0862f730 +0x0e51:  mov    %eax,(%esp)
0862f733 +0x0e54:  call   0862fd30 <+0x1451>
0862f738 +0x0e59:  mov    %eax,-0x14(%ebp)
0862f73b +0x0e5c:  mov    0x8(%ebp),%eax
0862f73e +0x0e5f:  lea    0x4(%eax),%edx
0862f741 +0x0e62:  mov    -0x1c(%ebp),%eax
0862f744 +0x0e65:  mov    %eax,0x4(%esp)
0862f748 +0x0e69:  mov    %edx,(%esp)
0862f74b +0x0e6c:  call   0862f1e8 <+0x909>
0862f750 +0x0e71:  mov    -0x18(%ebp),%edx
0862f753 +0x0e74:  mov    (%edx),%edx
0862f755 +0x0e76:  mov    %edx,(%eax)
0862f757 +0x0e78:  mov    -0x14(%ebp),%eax
0862f75a +0x0e7b:  mov    %eax,0x4(%esp)
0862f75e +0x0e7f:  lea    -0x38(%ebp),%eax
0862f761 +0x0e82:  mov    %eax,(%esp)
0862f764 +0x0e85:  call   0862f1e8 <+0x909>
0862f769 +0x0e8a:  mov    (%eax),%edx
0862f76b +0x0e8c:  mov    -0x18(%ebp),%eax
0862f76e +0x0e8f:  mov    %edx,(%eax)
0862f770 +0x0e91:  mov    -0x14(%ebp),%eax
0862f773 +0x0e94:  mov    %eax,0x4(%esp)
0862f777 +0x0e98:  lea    -0x38(%ebp),%eax
0862f77a +0x0e9b:  mov    %eax,(%esp)
0862f77d +0x0e9e:  call   0862f1e8 <+0x909>
0862f782 +0x0ea3:  mov    -0x18(%ebp),%edx
0862f785 +0x0ea6:  mov    %edx,(%eax)
0862f787 +0x0ea8:  mov    0x8(%ebp),%eax
0862f78a +0x0eab:  lea    0x4(%eax),%edx
0862f78d +0x0eae:  mov    -0x1c(%ebp),%eax
0862f790 +0x0eb1:  mov    %eax,0x4(%esp)
0862f794 +0x0eb5:  mov    %edx,(%esp)
0862f797 +0x0eb8:  call   0862f1e8 <+0x909>
0862f79c +0x0ebd:  mov    (%eax),%eax
0862f79e +0x0ebf:  mov    %eax,-0x18(%ebp)
0862f7a1 +0x0ec2:  cmpl   $0x0,-0x18(%ebp)
0862f7a5 +0x0ec6:  setne  %al
0862f7a8 +0x0ec9:  test   %al,%al
0862f7aa +0x0ecb:  jne    0862f71c <+0xe3d>
0862f7b0 +0x0ed1:  addl   $0x1,-0x1c(%ebp)
0862f7b4 +0x0ed5:  mov    -0x1c(%ebp),%eax
0862f7b7 +0x0ed8:  cmp    -0x24(%ebp),%eax
0862f7ba +0x0edb:  setb   %al
0862f7bd +0x0ede:  test   %al,%al
0862f7bf +0x0ee0:  jne    0862f6fd <+0xe1e>
0862f7c5 +0x0ee6:  mov    0x8(%ebp),%eax
0862f7c8 +0x0ee9:  lea    0x4(%eax),%edx
0862f7cb +0x0eec:  lea    -0x38(%ebp),%eax
0862f7ce +0x0eef:  mov    %eax,0x4(%esp)
0862f7d2 +0x0ef3:  mov    %edx,(%esp)
0862f7d5 +0x0ef6:  call   0862fd64 <+0x1485>
0862f7da +0x0efb:  jmp    0862f8a6 <+0xfc7>
0862f7df +0x0f00:  mov    %eax,(%esp)
0862f7e2 +0x0f03:  call   08725ce0 <__cxa_begin_catch>
0862f7e7 +0x0f08:  movl   $0x0,-0x10(%ebp)
0862f7ee +0x0f0f:  jmp    0862f864 <+0xf85>
0862f7f0 +0x0f11:  mov    -0x10(%ebp),%eax
0862f7f3 +0x0f14:  mov    %eax,0x4(%esp)
0862f7f7 +0x0f18:  lea    -0x38(%ebp),%eax
0862f7fa +0x0f1b:  mov    %eax,(%esp)
0862f7fd +0x0f1e:  call   0862f1e8 <+0x909>
0862f802 +0x0f23:  mov    (%eax),%eax
0862f804 +0x0f25:  mov    (%eax),%eax
0862f806 +0x0f27:  mov    %eax,-0xc(%ebp)
0862f809 +0x0f2a:  mov    -0x10(%ebp),%eax
0862f80c +0x0f2d:  mov    %eax,0x4(%esp)
0862f810 +0x0f31:  lea    -0x38(%ebp),%eax
0862f813 +0x0f34:  mov    %eax,(%esp)
0862f816 +0x0f37:  call   0862f1e8 <+0x909>
0862f81b +0x0f3c:  mov    (%eax),%eax
0862f81d +0x0f3e:  mov    %eax,0x4(%esp)
0862f821 +0x0f42:  mov    0x8(%ebp),%eax
0862f824 +0x0f45:  mov    %eax,(%esp)
0862f827 +0x0f48:  call   0862f576 <+0xc97>
0862f82c +0x0f4d:  mov    -0x10(%ebp),%eax
0862f82f +0x0f50:  mov    %eax,0x4(%esp)
0862f833 +0x0f54:  lea    -0x38(%ebp),%eax
0862f836 +0x0f57:  mov    %eax,(%esp)
0862f839 +0x0f5a:  call   0862f1e8 <+0x909>
0862f83e +0x0f5f:  mov    -0xc(%ebp),%edx
0862f841 +0x0f62:  mov    %edx,(%eax)
0862f843 +0x0f64:  mov    -0x10(%ebp),%eax
0862f846 +0x0f67:  mov    %eax,0x4(%esp)
0862f84a +0x0f6b:  lea    -0x38(%ebp),%eax
0862f84d +0x0f6e:  mov    %eax,(%esp)
0862f850 +0x0f71:  call   0862f1e8 <+0x909>
0862f855 +0x0f76:  mov    (%eax),%eax
0862f857 +0x0f78:  test   %eax,%eax
0862f859 +0x0f7a:  setne  %al
0862f85c +0x0f7d:  test   %al,%al
0862f85e +0x0f7f:  jne    0862f7f0 <+0xf11>
0862f860 +0x0f81:  addl   $0x1,-0x10(%ebp)
0862f864 +0x0f85:  lea    -0x38(%ebp),%eax
0862f867 +0x0f88:  mov    %eax,(%esp)
0862f86a +0x0f8b:  call   0862f1cc <+0x8ed>
0862f86f +0x0f90:  cmp    -0x10(%ebp),%eax
0862f872 +0x0f93:  seta   %al
0862f875 +0x0f96:  test   %al,%al
0862f877 +0x0f98:  jne    0862f843 <+0xf64>
0862f879 +0x0f9a:  call   08724be0 <__cxa_rethrow>
0862f87e +0x0f9f:  mov    %edx,%ebx
0862f880 +0x0fa1:  mov    %eax,%esi
0862f882 +0x0fa3:  call   08725c30 <__cxa_end_catch>
0862f887 +0x0fa8:  mov    %esi,%eax
0862f889 +0x0faa:  mov    %ebx,%edx
0862f88b +0x0fac:  mov    %edx,%ebx
0862f88d +0x0fae:  mov    %eax,%esi
0862f88f +0x0fb0:  lea    -0x38(%ebp),%eax
0862f892 +0x0fb3:  mov    %eax,(%esp)
0862f895 +0x0fb6:  call   0862efe6 <+0x707>
0862f89a +0x0fbb:  mov    %esi,%eax
0862f89c +0x0fbd:  mov    %ebx,%edx
0862f89e +0x0fbf:  mov    %eax,(%esp)
0862f8a1 +0x0fc2:  call   08ae3750 <_Unwind_Resume>
0862f8a6 +0x0fc7:  lea    -0x38(%ebp),%eax
0862f8a9 +0x0fca:  mov    %eax,(%esp)
0862f8ac +0x0fcd:  call   0862efe6 <+0x707>
0862f8b1 +0x0fd2:  lea    -0x8(%ebp),%esp
0862f8b4 +0x0fd5:  add    $0x0,%esp
0862f8b7 +0x0fd8:  pop    %ebx
0862f8b8 +0x0fd9:  pop    %esi
0862f8b9 +0x0fda:  pop    %ebp
0862f8ba +0x0fdb:  ret
0862f8bb +0x0fdc:  nop
0862f8bc +0x0fdd:  push   %ebp
0862f8bd +0x0fde:  mov    %esp,%ebp
0862f8bf +0x0fe0:  push   %esi
0862f8c0 +0x0fe1:  push   %ebx
0862f8c1 +0x0fe2:  sub    $0x40,%esp
0862f8c4 +0x0fe5:  mov    0x8(%ebp),%ebx
0862f8c7 +0x0fe8:  mov    0x10(%ebp),%eax
0862f8ca +0x0feb:  mov    %eax,0x4(%esp)
0862f8ce +0x0fef:  mov    0xc(%ebp),%eax
0862f8d1 +0x0ff2:  mov    %eax,(%esp)
0862f8d4 +0x0ff5:  call   0862f1a0 <+0x8c1>
0862f8d9 +0x0ffa:  mov    %eax,-0x18(%ebp)
0862f8dc +0x0ffd:  mov    0xc(%ebp),%eax
0862f8df +0x1000:  lea    0x4(%eax),%edx
0862f8e2 +0x1003:  mov    -0x18(%ebp),%eax
0862f8e5 +0x1006:  mov    %eax,0x4(%esp)
0862f8e9 +0x100a:  mov    %edx,(%esp)
0862f8ec +0x100d:  call   0862f1e8 <+0x909>
0862f8f1 +0x1012:  mov    (%eax),%eax
0862f8f3 +0x1014:  mov    %eax,-0x14(%ebp)
0862f8f6 +0x1017:  mov    -0x14(%ebp),%eax
0862f8f9 +0x101a:  mov    %eax,-0xc(%ebp)
0862f8fc +0x101d:  jmp    0862f98a <+0x10ab>
0862f901 +0x1022:  mov    0xc(%ebp),%eax
0862f904 +0x1025:  lea    0x3(%eax),%edx
0862f907 +0x1028:  mov    0x10(%ebp),%eax
0862f90a +0x102b:  mov    %eax,0x4(%esp)
0862f90e +0x102f:  mov    %edx,(%esp)
0862f911 +0x1032:  call   0862f5e0 <+0xd01>
0862f916 +0x1037:  mov    %eax,%esi
0862f918 +0x1039:  mov    -0xc(%ebp),%eax
0862f91b +0x103c:  lea    0x4(%eax),%edx
0862f91e +0x103f:  mov    0xc(%ebp),%eax
0862f921 +0x1042:  add    $0x3,%eax
0862f924 +0x1045:  mov    %edx,0x4(%esp)
0862f928 +0x1049:  mov    %eax,(%esp)
0862f92b +0x104c:  call   0862f63c <+0xd5d>
0862f930 +0x1051:  mov    0xc(%ebp),%edx
0862f933 +0x1054:  add    $0x2,%edx
0862f936 +0x1057:  mov    %esi,0x8(%esp)
0862f93a +0x105b:  mov    %eax,0x4(%esp)
0862f93e +0x105f:  mov    %edx,(%esp)
0862f941 +0x1062:  call   0817ad7c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xdfa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0xdfa
0862f946 +0x1067:  test   %al,%al
0862f948 +0x1069:  je     0862f982 <+0x10a3>
0862f94a +0x106b:  movb   $0x0,-0x2d(%ebp)
0862f94e +0x106f:  mov    0xc(%ebp),%eax
0862f951 +0x1072:  mov    %eax,0x8(%esp)
0862f955 +0x1076:  mov    -0xc(%ebp),%eax
0862f958 +0x1079:  mov    %eax,0x4(%esp)
0862f95c +0x107d:  lea    -0x2c(%ebp),%eax
0862f95f +0x1080:  mov    %eax,(%esp)
0862f962 +0x1083:  call   0862f5ca <+0xceb>
0862f967 +0x1088:  lea    -0x2d(%ebp),%eax
0862f96a +0x108b:  mov    %eax,0x8(%esp)
0862f96e +0x108f:  lea    -0x2c(%ebp),%eax
0862f971 +0x1092:  mov    %eax,0x4(%esp)
0862f975 +0x1096:  mov    %ebx,(%esp)
0862f978 +0x1099:  call   0862fdd8 <+0x14f9>
0862f97d +0x109e:  jmp    0862fa12 <+0x1133>
0862f982 +0x10a3:  mov    -0xc(%ebp),%eax
0862f985 +0x10a6:  mov    (%eax),%eax
0862f987 +0x10a8:  mov    %eax,-0xc(%ebp)
0862f98a +0x10ab:  cmpl   $0x0,-0xc(%ebp)
0862f98e +0x10af:  setne  %al
0862f991 +0x10b2:  test   %al,%al
0862f993 +0x10b4:  jne    0862f901 <+0x1022>
0862f999 +0x10ba:  mov    0x10(%ebp),%eax
0862f99c +0x10bd:  mov    %eax,0x4(%esp)
0862f9a0 +0x10c1:  mov    0xc(%ebp),%eax
0862f9a3 +0x10c4:  mov    %eax,(%esp)
0862f9a6 +0x10c7:  call   0862fe0c <+0x152d>
0862f9ab +0x10cc:  mov    %eax,-0x10(%ebp)
0862f9ae +0x10cf:  mov    -0x10(%ebp),%eax
0862f9b1 +0x10d2:  mov    -0x14(%ebp),%edx
0862f9b4 +0x10d5:  mov    %edx,(%eax)
0862f9b6 +0x10d7:  mov    0xc(%ebp),%eax
0862f9b9 +0x10da:  lea    0x4(%eax),%edx
0862f9bc +0x10dd:  mov    -0x18(%ebp),%eax
0862f9bf +0x10e0:  mov    %eax,0x4(%esp)
0862f9c3 +0x10e4:  mov    %edx,(%esp)
0862f9c6 +0x10e7:  call   0862f1e8 <+0x909>
0862f9cb +0x10ec:  mov    -0x10(%ebp),%edx
0862f9ce +0x10ef:  mov    %edx,(%eax)
0862f9d0 +0x10f1:  mov    0xc(%ebp),%eax
0862f9d3 +0x10f4:  mov    0x10(%eax),%eax
0862f9d6 +0x10f7:  lea    0x1(%eax),%edx
0862f9d9 +0x10fa:  mov    0xc(%ebp),%eax
0862f9dc +0x10fd:  mov    %edx,0x10(%eax)
0862f9df +0x1100:  movb   $0x1,-0x21(%ebp)
0862f9e3 +0x1104:  mov    0xc(%ebp),%eax
0862f9e6 +0x1107:  mov    %eax,0x8(%esp)
0862f9ea +0x110b:  mov    -0x10(%ebp),%eax
0862f9ed +0x110e:  mov    %eax,0x4(%esp)
0862f9f1 +0x1112:  lea    -0x20(%ebp),%eax
0862f9f4 +0x1115:  mov    %eax,(%esp)
0862f9f7 +0x1118:  call   0862f5ca <+0xceb>
0862f9fc +0x111d:  lea    -0x21(%ebp),%eax
0862f9ff +0x1120:  mov    %eax,0x8(%esp)
0862fa03 +0x1124:  lea    -0x20(%ebp),%eax
0862fa06 +0x1127:  mov    %eax,0x4(%esp)
0862fa0a +0x112b:  mov    %ebx,(%esp)
0862fa0d +0x112e:  call   0862fdd8 <+0x14f9>
0862fa12 +0x1133:  mov    %ebx,%eax
0862fa14 +0x1135:  add    $0x40,%esp
0862fa17 +0x1138:  pop    %ebx
0862fa18 +0x1139:  pop    %esi
0862fa19 +0x113a:  pop    %ebp
0862fa1a +0x113b:  ret    $0x4
0862fa1d +0x113e:  nop
0862fa1e +0x113f:  push   %ebp
0862fa1f +0x1140:  mov    %esp,%ebp
0862fa21 +0x1142:  pop    %ebp
0862fa22 +0x1143:  ret
0862fa23 +0x1144:  nop
0862fa24 +0x1145:  push   %ebp
0862fa25 +0x1146:  mov    %esp,%ebp
0862fa27 +0x1148:  pop    %ebp
0862fa28 +0x1149:  ret
0862fa29 +0x114a:  nop
0862fa2a +0x114b:  push   %ebp
0862fa2b +0x114c:  mov    %esp,%ebp
0862fa2d +0x114e:  pop    %ebp
0862fa2e +0x114f:  ret
0862fa2f +0x1150:  nop
0862fa30 +0x1151:  push   %ebp
0862fa31 +0x1152:  mov    %esp,%ebp
0862fa33 +0x1154:  sub    $0x18,%esp
0862fa36 +0x1157:  mov    0x8(%ebp),%eax
0862fa39 +0x115a:  mov    0xc(%ebp),%edx
0862fa3c +0x115d:  mov    %edx,0x4(%esp)
0862fa40 +0x1161:  mov    %eax,(%esp)
0862fa43 +0x1164:  call   0862fe6e <+0x158f>
0862fa48 +0x1169:  leave
0862fa49 +0x116a:  ret
0862fa4a +0x116b:  push   %ebp
0862fa4b +0x116c:  mov    %esp,%ebp
0862fa4d +0x116e:  sub    $0x18,%esp
0862fa50 +0x1171:  mov    0xc(%ebp),%eax
0862fa53 +0x1174:  mov    %eax,(%esp)
0862fa56 +0x1177:  call   082a3bfe <_GLOBAL__I__ZN4CLog5this_E+0x25>  ; global constructors keyed to CLog::this_+0x25
0862fa5b +0x117c:  leave
0862fa5c +0x117d:  ret
0862fa5d +0x117e:  nop
0862fa5e +0x117f:  push   %ebp
0862fa5f +0x1180:  mov    %esp,%ebp
0862fa61 +0x1182:  sub    $0x28,%esp
0862fa64 +0x1185:  mov    0x8(%ebp),%eax
0862fa67 +0x1188:  mov    %eax,(%esp)
0862fa6a +0x118b:  call   0862fea6 <+0x15c7>
0862fa6f +0x1190:  cmp    0xc(%ebp),%eax
0862fa72 +0x1193:  setb   %al
0862fa75 +0x1196:  test   %al,%al
0862fa77 +0x1198:  je     0862fa85 <+0x11a6>
0862fa79 +0x119a:  movl   $"vector::reserve",(%esp)
0862fa80 +0x11a1:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
0862fa85 +0x11a6:  mov    0x8(%ebp),%eax
0862fa88 +0x11a9:  mov    %eax,(%esp)
0862fa8b +0x11ac:  call   0862fec2 <+0x15e3>
0862fa90 +0x11b1:  cmp    0xc(%ebp),%eax
0862fa93 +0x11b4:  setb   %al
0862fa96 +0x11b7:  test   %al,%al
0862fa98 +0x11b9:  je     0862fb7f <+0x12a0>
0862fa9e +0x11bf:  mov    0x8(%ebp),%eax
0862faa1 +0x11c2:  mov    %eax,(%esp)
0862faa4 +0x11c5:  call   0862f1cc <+0x8ed>
0862faa9 +0x11ca:  mov    %eax,-0x10(%ebp)
0862faac +0x11cd:  mov    0x8(%ebp),%eax
0862faaf +0x11d0:  lea    0x4(%eax),%edx
0862fab2 +0x11d3:  lea    -0x18(%ebp),%eax
0862fab5 +0x11d6:  mov    %edx,0x4(%esp)
0862fab9 +0x11da:  mov    %eax,(%esp)
0862fabc +0x11dd:  call   0862fedd <+0x15fe>
0862fac1 +0x11e2:  sub    $0x4,%esp
0862fac4 +0x11e5:  mov    0x8(%ebp),%edx
0862fac7 +0x11e8:  lea    -0x14(%ebp),%eax
0862faca +0x11eb:  mov    %edx,0x4(%esp)
0862face +0x11ef:  mov    %eax,(%esp)
0862fad1 +0x11f2:  call   0862fedd <+0x15fe>
0862fad6 +0x11f7:  sub    $0x4,%esp
0862fad9 +0x11fa:  mov    -0x18(%ebp),%eax
0862fadc +0x11fd:  mov    %eax,0xc(%esp)
0862fae0 +0x1201:  mov    -0x14(%ebp),%eax
0862fae3 +0x1204:  mov    %eax,0x8(%esp)
0862fae7 +0x1208:  mov    0xc(%ebp),%eax
0862faea +0x120b:  mov    %eax,0x4(%esp)
0862faee +0x120f:  mov    0x8(%ebp),%eax
0862faf1 +0x1212:  mov    %eax,(%esp)
0862faf4 +0x1215:  call   0862ff02 <+0x1623>
0862faf9 +0x121a:  mov    %eax,-0xc(%ebp)
0862fafc +0x121d:  mov    0x8(%ebp),%eax
0862faff +0x1220:  mov    %eax,(%esp)
0862fb02 +0x1223:  call   0862f554 <+0xc75>
0862fb07 +0x1228:  mov    0x8(%ebp),%edx
0862fb0a +0x122b:  mov    0x4(%edx),%ecx
0862fb0d +0x122e:  mov    0x8(%ebp),%edx
0862fb10 +0x1231:  mov    (%edx),%edx
0862fb12 +0x1233:  mov    %eax,0x8(%esp)
0862fb16 +0x1237:  mov    %ecx,0x4(%esp)
0862fb1a +0x123b:  mov    %edx,(%esp)
0862fb1d +0x123e:  call   0862f55c <+0xc7d>
0862fb22 +0x1243:  mov    0x8(%ebp),%eax
0862fb25 +0x1246:  mov    0x8(%eax),%eax
0862fb28 +0x1249:  mov    %eax,%edx
0862fb2a +0x124b:  mov    0x8(%ebp),%eax
0862fb2d +0x124e:  mov    (%eax),%eax
0862fb2f +0x1250:  mov    %edx,%ecx
0862fb31 +0x1252:  sub    %eax,%ecx
0862fb33 +0x1254:  mov    %ecx,%eax
0862fb35 +0x1256:  sar    $0x2,%eax
0862fb38 +0x1259:  mov    %eax,%ecx
0862fb3a +0x125b:  mov    0x8(%ebp),%eax
0862fb3d +0x125e:  mov    (%eax),%edx
0862fb3f +0x1260:  mov    0x8(%ebp),%eax
0862fb42 +0x1263:  mov    %ecx,0x8(%esp)
0862fb46 +0x1267:  mov    %edx,0x4(%esp)
0862fb4a +0x126b:  mov    %eax,(%esp)
0862fb4d +0x126e:  call   0862fbd0 <+0x12f1>
0862fb52 +0x1273:  mov    0x8(%ebp),%eax
0862fb55 +0x1276:  mov    -0xc(%ebp),%edx
0862fb58 +0x1279:  mov    %edx,(%eax)
0862fb5a +0x127b:  mov    -0x10(%ebp),%eax
0862fb5d +0x127e:  shl    $0x2,%eax
0862fb60 +0x1281:  mov    %eax,%edx
0862fb62 +0x1283:  add    -0xc(%ebp),%edx
0862fb65 +0x1286:  mov    0x8(%ebp),%eax
0862fb68 +0x1289:  mov    %edx,0x4(%eax)
0862fb6b +0x128c:  mov    0x8(%ebp),%eax
0862fb6e +0x128f:  mov    (%eax),%eax
0862fb70 +0x1291:  mov    0xc(%ebp),%edx
0862fb73 +0x1294:  shl    $0x2,%edx
0862fb76 +0x1297:  lea    (%eax,%edx,1),%edx
0862fb79 +0x129a:  mov    0x8(%ebp),%eax
0862fb7c +0x129d:  mov    %edx,0x8(%eax)
0862fb7f +0x12a0:  leave
0862fb80 +0x12a1:  ret
0862fb81 +0x12a2:  nop
0862fb82 +0x12a3:  push   %ebp
0862fb83 +0x12a4:  mov    %esp,%ebp
0862fb85 +0x12a6:  push   %ebx
0862fb86 +0x12a7:  sub    $0x14,%esp
0862fb89 +0x12aa:  mov    0x8(%ebp),%ebx
0862fb8c +0x12ad:  mov    0xc(%ebp),%eax
0862fb8f +0x12b0:  add    $0x4,%eax
0862fb92 +0x12b3:  mov    %eax,0x4(%esp)
0862fb96 +0x12b7:  mov    %ebx,(%esp)
0862fb99 +0x12ba:  call   0862ff8c <+0x16ad>
0862fb9e +0x12bf:  mov    %ebx,%eax
0862fba0 +0x12c1:  add    $0x14,%esp
0862fba3 +0x12c4:  pop    %ebx
0862fba4 +0x12c5:  pop    %ebp
0862fba5 +0x12c6:  ret    $0x4
0862fba8 +0x12c9:  push   %ebp
0862fba9 +0x12ca:  mov    %esp,%ebp
0862fbab +0x12cc:  sub    $0x18,%esp
0862fbae +0x12cf:  mov    0x14(%ebp),%eax
0862fbb1 +0x12d2:  mov    %eax,0xc(%esp)
0862fbb5 +0x12d6:  mov    0x10(%ebp),%eax
0862fbb8 +0x12d9:  mov    %eax,0x8(%esp)
0862fbbc +0x12dd:  mov    0xc(%ebp),%eax
0862fbbf +0x12e0:  mov    %eax,0x4(%esp)
0862fbc3 +0x12e4:  mov    0x8(%ebp),%eax
0862fbc6 +0x12e7:  mov    %eax,(%esp)
0862fbc9 +0x12ea:  call   0862ff9c <+0x16bd>
0862fbce +0x12ef:  leave
0862fbcf +0x12f0:  ret
0862fbd0 +0x12f1:  push   %ebp
0862fbd1 +0x12f2:  mov    %esp,%ebp
0862fbd3 +0x12f4:  sub    $0x18,%esp
0862fbd6 +0x12f7:  cmpl   $0x0,0xc(%ebp)
0862fbda +0x12fb:  je     0862fbf5 <+0x1316>
0862fbdc +0x12fd:  mov    0x8(%ebp),%eax
0862fbdf +0x1300:  mov    0x10(%ebp),%edx
0862fbe2 +0x1303:  mov    %edx,0x8(%esp)
0862fbe6 +0x1307:  mov    0xc(%ebp),%edx
0862fbe9 +0x130a:  mov    %edx,0x4(%esp)
0862fbed +0x130e:  mov    %eax,(%esp)
0862fbf0 +0x1311:  call   086303c2 <+0x1ae3>
0862fbf5 +0x1316:  leave
0862fbf6 +0x1317:  ret
0862fbf7 +0x1318:  push   %ebp
0862fbf8 +0x1319:  mov    %esp,%ebp
0862fbfa +0x131b:  sub    $0x18,%esp
0862fbfd +0x131e:  mov    0xc(%ebp),%eax
0862fc00 +0x1321:  mov    %eax,0x4(%esp)
0862fc04 +0x1325:  mov    0x8(%ebp),%eax
0862fc07 +0x1328:  mov    %eax,(%esp)
0862fc0a +0x132b:  call   086303d5 <+0x1af6>
0862fc0f +0x1330:  leave
0862fc10 +0x1331:  ret
0862fc11 +0x1332:  nop
0862fc12 +0x1333:  push   %ebp
0862fc13 +0x1334:  mov    %esp,%ebp
0862fc15 +0x1336:  push   %ebx
0862fc16 +0x1337:  sub    $0x14,%esp
0862fc19 +0x133a:  mov    0x8(%ebp),%ebx
0862fc1c +0x133d:  mov    %ebx,%eax
0862fc1e +0x133f:  mov    0xc(%ebp),%edx
0862fc21 +0x1342:  mov    %edx,0x4(%esp)
0862fc25 +0x1346:  mov    %eax,(%esp)
0862fc28 +0x1349:  call   086303da <+0x1afb>
0862fc2d +0x134e:  mov    %ebx,%eax
0862fc2f +0x1350:  mov    %ebx,%eax
0862fc31 +0x1352:  add    $0x14,%esp
0862fc34 +0x1355:  pop    %ebx
0862fc35 +0x1356:  pop    %ebp
0862fc36 +0x1357:  ret    $0x4
0862fc39 +0x135a:  nop
0862fc3a +0x135b:  push   %ebp
0862fc3b +0x135c:  mov    %esp,%ebp
0862fc3d +0x135e:  pop    %ebp
0862fc3e +0x135f:  ret
0862fc3f +0x1360:  nop
0862fc40 +0x1361:  push   %ebp
0862fc41 +0x1362:  mov    %esp,%ebp
0862fc43 +0x1364:  sub    $0x18,%esp
0862fc46 +0x1367:  mov    0xc(%ebp),%eax
0862fc49 +0x136a:  mov    %eax,(%esp)
0862fc4c +0x136d:  call   0862fc3a <+0x135b>
0862fc51 +0x1372:  leave
0862fc52 +0x1373:  ret
0862fc53 +0x1374:  nop
0862fc54 +0x1375:  push   %ebp
0862fc55 +0x1376:  mov    %esp,%ebp
0862fc57 +0x1378:  sub    $0x18,%esp
0862fc5a +0x137b:  mov    0x8(%ebp),%eax
0862fc5d +0x137e:  movl   $0x1,0x8(%esp)
0862fc65 +0x1386:  mov    0xc(%ebp),%edx
0862fc68 +0x1389:  mov    %edx,0x4(%esp)
0862fc6c +0x138d:  mov    %eax,(%esp)
0862fc6f +0x1390:  call   086303ee <+0x1b0f>
0862fc74 +0x1395:  leave
0862fc75 +0x1396:  ret
0862fc76 +0x1397:  push   %ebp
0862fc77 +0x1398:  mov    %esp,%ebp
0862fc79 +0x139a:  sub    $0x18,%esp
0862fc7c +0x139d:  mov    0xc(%ebp),%eax
0862fc7f +0x13a0:  mov    (%eax),%eax
0862fc81 +0x13a2:  mov    0x8(%ebp),%edx
0862fc84 +0x13a5:  add    $0x1,%edx
0862fc87 +0x13a8:  mov    %eax,0x4(%esp)
0862fc8b +0x13ac:  mov    %edx,(%esp)
0862fc8e +0x13af:  call   08179f9e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1c>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1c
0862fc93 +0x13b4:  mov    $0x0,%edx
0862fc98 +0x13b9:  divl   0x10(%ebp)
0862fc9b +0x13bc:  mov    %edx,%eax
0862fc9d +0x13be:  leave
0862fc9e +0x13bf:  ret
0862fc9f +0x13c0:  nop
0862fca0 +0x13c1:  push   %ebp
0862fca1 +0x13c2:  mov    %esp,%ebp
0862fca3 +0x13c4:  push   %esi
0862fca4 +0x13c5:  push   %ebx
0862fca5 +0x13c6:  sub    $0x10,%esp
0862fca8 +0x13c9:  mov    0x8(%ebp),%ebx
0862fcab +0x13cc:  mov    %ebx,%esi
0862fcad +0x13ce:  mov    0xc(%ebp),%eax
0862fcb0 +0x13d1:  mov    %eax,(%esp)
0862fcb3 +0x13d4:  call   08630402 <+0x1b23>
0862fcb8 +0x13d9:  mov    %eax,0x4(%esp)
0862fcbc +0x13dd:  mov    %esi,(%esp)
0862fcbf +0x13e0:  call   0863040a <+0x1b2b>
0862fcc4 +0x13e5:  mov    %ebx,%eax
0862fcc6 +0x13e7:  mov    %ebx,%eax
0862fcc8 +0x13e9:  add    $0x10,%esp
0862fccb +0x13ec:  pop    %ebx
0862fccc +0x13ed:  pop    %esi
0862fccd +0x13ee:  pop    %ebp
0862fcce +0x13ef:  ret    $0x4
0862fcd1 +0x13f2:  nop
0862fcd2 +0x13f3:  push   %ebp
0862fcd3 +0x13f4:  mov    %esp,%ebp
0862fcd5 +0x13f6:  push   %esi
0862fcd6 +0x13f7:  push   %ebx
0862fcd7 +0x13f8:  sub    $0x10,%esp
0862fcda +0x13fb:  mov    0x8(%ebp),%eax
0862fcdd +0x13fe:  mov    0x14(%ebp),%edx
0862fce0 +0x1401:  mov    %edx,0x8(%esp)
0862fce4 +0x1405:  mov    0xc(%ebp),%edx
0862fce7 +0x1408:  mov    %edx,0x4(%esp)
0862fceb +0x140c:  mov    %eax,(%esp)
0862fcee +0x140f:  call   08630424 <+0x1b45>
0862fcf3 +0x1414:  mov    0x10(%ebp),%eax
0862fcf6 +0x1417:  mov    %eax,0x8(%esp)
0862fcfa +0x141b:  mov    0xc(%ebp),%eax
0862fcfd +0x141e:  mov    %eax,0x4(%esp)
0862fd01 +0x1422:  mov    0x8(%ebp),%eax
0862fd04 +0x1425:  mov    %eax,(%esp)
0862fd07 +0x1428:  call   08630496 <+0x1bb7>
0862fd0c +0x142d:  jmp    0862fd29 <+0x144a>
0862fd0e +0x142f:  mov    %edx,%ebx
0862fd10 +0x1431:  mov    %eax,%esi
0862fd12 +0x1433:  mov    0x8(%ebp),%eax
0862fd15 +0x1436:  mov    %eax,(%esp)
0862fd18 +0x1439:  call   0862f4ec <+0xc0d>
0862fd1d +0x143e:  mov    %esi,%eax
0862fd1f +0x1440:  mov    %ebx,%edx
0862fd21 +0x1442:  mov    %eax,(%esp)
0862fd24 +0x1445:  call   08ae3750 <_Unwind_Resume>
0862fd29 +0x144a:  add    $0x10,%esp
0862fd2c +0x144d:  pop    %ebx
0862fd2d +0x144e:  pop    %esi
0862fd2e +0x144f:  pop    %ebp
0862fd2f +0x1450:  ret
0862fd30 +0x1451:  push   %ebp
0862fd31 +0x1452:  mov    %esp,%ebp
0862fd33 +0x1454:  sub    $0x18,%esp
0862fd36 +0x1457:  mov    0x8(%ebp),%eax
0862fd39 +0x145a:  lea    0x3(%eax),%edx
0862fd3c +0x145d:  mov    0xc(%ebp),%eax
0862fd3f +0x1460:  mov    %eax,0x4(%esp)
0862fd43 +0x1464:  mov    %edx,(%esp)
0862fd46 +0x1467:  call   0862f5e0 <+0xd01>
0862fd4b +0x146c:  mov    0x10(%ebp),%edx
0862fd4e +0x146f:  mov    %edx,0x8(%esp)
0862fd52 +0x1473:  mov    %eax,0x4(%esp)
0862fd56 +0x1477:  mov    0x8(%ebp),%eax
0862fd59 +0x147a:  mov    %eax,(%esp)
0862fd5c +0x147d:  call   0862fc76 <+0x1397>
0862fd61 +0x1482:  leave
0862fd62 +0x1483:  ret
0862fd63 +0x1484:  nop
0862fd64 +0x1485:  push   %ebp
0862fd65 +0x1486:  mov    %esp,%ebp
0862fd67 +0x1488:  push   %ebx
0862fd68 +0x1489:  sub    $0x14,%esp
0862fd6b +0x148c:  mov    0xc(%ebp),%edx
0862fd6e +0x148f:  mov    0x8(%ebp),%eax
0862fd71 +0x1492:  mov    %edx,0x4(%esp)
0862fd75 +0x1496:  mov    %eax,(%esp)
0862fd78 +0x1499:  call   086304d4 <+0x1bf5>
0862fd7d +0x149e:  mov    0xc(%ebp),%eax
0862fd80 +0x14a1:  lea    0x4(%eax),%edx
0862fd83 +0x14a4:  mov    0x8(%ebp),%eax
0862fd86 +0x14a7:  add    $0x4,%eax
0862fd89 +0x14aa:  mov    %edx,0x4(%esp)
0862fd8d +0x14ae:  mov    %eax,(%esp)
0862fd90 +0x14b1:  call   086304d4 <+0x1bf5>
0862fd95 +0x14b6:  mov    0xc(%ebp),%eax
0862fd98 +0x14b9:  lea    0x8(%eax),%edx
0862fd9b +0x14bc:  mov    0x8(%ebp),%eax
0862fd9e +0x14bf:  add    $0x8,%eax
0862fda1 +0x14c2:  mov    %edx,0x4(%esp)
0862fda5 +0x14c6:  mov    %eax,(%esp)
0862fda8 +0x14c9:  call   086304d4 <+0x1bf5>
0862fdad +0x14ce:  mov    0xc(%ebp),%eax
0862fdb0 +0x14d1:  mov    %eax,(%esp)
0862fdb3 +0x14d4:  call   0862f554 <+0xc75>
0862fdb8 +0x14d9:  mov    %eax,%ebx
0862fdba +0x14db:  mov    0x8(%ebp),%eax
0862fdbd +0x14de:  mov    %eax,(%esp)
0862fdc0 +0x14e1:  call   0862f554 <+0xc75>
0862fdc5 +0x14e6:  mov    %ebx,0x4(%esp)
0862fdc9 +0x14ea:  mov    %eax,(%esp)
0862fdcc +0x14ed:  call   08630510 <+0x1c31>
0862fdd1 +0x14f2:  add    $0x14,%esp
0862fdd4 +0x14f5:  pop    %ebx
0862fdd5 +0x14f6:  pop    %ebp
0862fdd6 +0x14f7:  ret
0862fdd7 +0x14f8:  nop
0862fdd8 +0x14f9:  push   %ebp
0862fdd9 +0x14fa:  mov    %esp,%ebp
0862fddb +0x14fc:  sub    $0x18,%esp
0862fdde +0x14ff:  mov    0xc(%ebp),%eax
0862fde1 +0x1502:  mov    %eax,(%esp)
0862fde4 +0x1505:  call   08630515 <+0x1c36>
0862fde9 +0x150a:  mov    0x8(%ebp),%ecx
0862fdec +0x150d:  mov    0x4(%eax),%edx
0862fdef +0x1510:  mov    (%eax),%eax
0862fdf1 +0x1512:  mov    %eax,(%ecx)
0862fdf3 +0x1514:  mov    %edx,0x4(%ecx)
0862fdf6 +0x1517:  mov    0x10(%ebp),%eax
0862fdf9 +0x151a:  mov    %eax,(%esp)
0862fdfc +0x151d:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
0862fe01 +0x1522:  movzbl (%eax),%edx
0862fe04 +0x1525:  mov    0x8(%ebp),%eax
0862fe07 +0x1528:  mov    %dl,0x8(%eax)
0862fe0a +0x152b:  leave
0862fe0b +0x152c:  ret
0862fe0c +0x152d:  push   %ebp
0862fe0d +0x152e:  mov    %esp,%ebp
0862fe0f +0x1530:  push   %ebx
0862fe10 +0x1531:  sub    $0x24,%esp
0862fe13 +0x1534:  mov    0x8(%ebp),%eax
0862fe16 +0x1537:  mov    %eax,(%esp)
0862fe19 +0x153a:  call   0863051e <+0x1c3f>
0862fe1e +0x153f:  mov    %eax,-0xc(%ebp)
0862fe21 +0x1542:  mov    -0xc(%ebp),%eax
0862fe24 +0x1545:  movl   $0x0,(%eax)
0862fe2a +0x154b:  mov    -0xc(%ebp),%eax
0862fe2d +0x154e:  lea    0x4(%eax),%ebx
0862fe30 +0x1551:  lea    -0xd(%ebp),%eax
0862fe33 +0x1554:  mov    0x8(%ebp),%edx
0862fe36 +0x1557:  mov    %edx,0x4(%esp)
0862fe3a +0x155b:  mov    %eax,(%esp)
0862fe3d +0x155e:  call   0862fc12 <+0x1333>
0862fe42 +0x1563:  sub    $0x4,%esp
0862fe45 +0x1566:  lea    -0xd(%ebp),%eax
0862fe48 +0x1569:  mov    0xc(%ebp),%edx
0862fe4b +0x156c:  mov    %edx,0x8(%esp)
0862fe4f +0x1570:  mov    %ebx,0x4(%esp)
0862fe53 +0x1574:  mov    %eax,(%esp)
0862fe56 +0x1577:  call   08630542 <+0x1c63>
0862fe5b +0x157c:  lea    -0xd(%ebp),%eax
0862fe5e +0x157f:  mov    %eax,(%esp)
0862fe61 +0x1582:  call   0862ef04 <+0x625>
0862fe66 +0x1587:  mov    -0xc(%ebp),%eax
0862fe69 +0x158a:  mov    -0x4(%ebp),%ebx
0862fe6c +0x158d:  leave
0862fe6d +0x158e:  ret
0862fe6e +0x158f:  push   %ebp
0862fe6f +0x1590:  mov    %esp,%ebp
0862fe71 +0x1592:  sub    $0x18,%esp
0862fe74 +0x1595:  mov    0x8(%ebp),%eax
0862fe77 +0x1598:  mov    0xc(%ebp),%edx
0862fe7a +0x159b:  mov    %edx,0x4(%esp)
0862fe7e +0x159f:  mov    %eax,(%esp)
0862fe81 +0x15a2:  call   0863040a <+0x1b2b>
0862fe86 +0x15a7:  mov    0x8(%ebp),%eax
0862fe89 +0x15aa:  movl   $0x0,(%eax)
0862fe8f +0x15b0:  mov    0x8(%ebp),%eax
0862fe92 +0x15b3:  movl   $0x0,0x4(%eax)
0862fe99 +0x15ba:  mov    0x8(%ebp),%eax
0862fe9c +0x15bd:  movl   $0x0,0x8(%eax)
0862fea3 +0x15c4:  leave
0862fea4 +0x15c5:  ret
0862fea5 +0x15c6:  nop
0862fea6 +0x15c7:  push   %ebp
0862fea7 +0x15c8:  mov    %esp,%ebp
0862fea9 +0x15ca:  sub    $0x18,%esp
0862feac +0x15cd:  mov    0x8(%ebp),%eax
0862feaf +0x15d0:  mov    %eax,(%esp)
0862feb2 +0x15d3:  call   08630402 <+0x1b23>
0862feb7 +0x15d8:  mov    %eax,(%esp)
0862feba +0x15db:  call   08630572 <+0x1c93>
0862febf +0x15e0:  leave
0862fec0 +0x15e1:  ret
0862fec1 +0x15e2:  nop
0862fec2 +0x15e3:  push   %ebp
0862fec3 +0x15e4:  mov    %esp,%ebp
0862fec5 +0x15e6:  mov    0x8(%ebp),%eax
0862fec8 +0x15e9:  mov    0x8(%eax),%eax
0862fecb +0x15ec:  mov    %eax,%edx
0862fecd +0x15ee:  mov    0x8(%ebp),%eax
0862fed0 +0x15f1:  mov    (%eax),%eax
0862fed2 +0x15f3:  mov    %edx,%ecx
0862fed4 +0x15f5:  sub    %eax,%ecx
0862fed6 +0x15f7:  mov    %ecx,%eax
0862fed8 +0x15f9:  sar    $0x2,%eax
0862fedb +0x15fc:  pop    %ebp
0862fedc +0x15fd:  ret
0862fedd +0x15fe:  push   %ebp
0862fede +0x15ff:  mov    %esp,%ebp
0862fee0 +0x1601:  push   %ebx
0862fee1 +0x1602:  sub    $0x14,%esp
0862fee4 +0x1605:  mov    0x8(%ebp),%ebx
0862fee7 +0x1608:  mov    0xc(%ebp),%eax
0862feea +0x160b:  mov    (%eax),%eax
0862feec +0x160d:  mov    %eax,0x4(%esp)
0862fef0 +0x1611:  mov    %ebx,(%esp)
0862fef3 +0x1614:  call   0863057c <+0x1c9d>
0862fef8 +0x1619:  mov    %ebx,%eax
0862fefa +0x161b:  add    $0x14,%esp
0862fefd +0x161e:  pop    %ebx
0862fefe +0x161f:  pop    %ebp
0862feff +0x1620:  ret    $0x4
0862ff02 +0x1623:  push   %ebp
0862ff03 +0x1624:  mov    %esp,%ebp
0862ff05 +0x1626:  push   %esi
0862ff06 +0x1627:  push   %ebx
0862ff07 +0x1628:  sub    $0x20,%esp
0862ff0a +0x162b:  mov    0x8(%ebp),%eax
0862ff0d +0x162e:  mov    0xc(%ebp),%edx
0862ff10 +0x1631:  mov    %edx,0x4(%esp)
0862ff14 +0x1635:  mov    %eax,(%esp)
0862ff17 +0x1638:  call   0863058a <+0x1cab>
0862ff1c +0x163d:  mov    %eax,-0xc(%ebp)
0862ff1f +0x1640:  mov    0x8(%ebp),%eax
0862ff22 +0x1643:  mov    %eax,(%esp)
0862ff25 +0x1646:  call   0862f554 <+0xc75>
0862ff2a +0x164b:  mov    %eax,0xc(%esp)
0862ff2e +0x164f:  mov    -0xc(%ebp),%eax
0862ff31 +0x1652:  mov    %eax,0x8(%esp)
0862ff35 +0x1656:  mov    0x14(%ebp),%eax
0862ff38 +0x1659:  mov    %eax,0x4(%esp)
0862ff3c +0x165d:  mov    0x10(%ebp),%eax
0862ff3f +0x1660:  mov    %eax,(%esp)
0862ff42 +0x1663:  call   086305b9 <+0x1cda>
0862ff47 +0x1668:  mov    -0xc(%ebp),%eax
0862ff4a +0x166b:  add    $0x20,%esp
0862ff4d +0x166e:  pop    %ebx
0862ff4e +0x166f:  pop    %esi
0862ff4f +0x1670:  pop    %ebp
0862ff50 +0x1671:  ret
0862ff51 +0x1672:  mov    %eax,(%esp)
0862ff54 +0x1675:  call   08725ce0 <__cxa_begin_catch>
0862ff59 +0x167a:  mov    0x8(%ebp),%eax
0862ff5c +0x167d:  mov    0xc(%ebp),%edx
0862ff5f +0x1680:  mov    %edx,0x8(%esp)
0862ff63 +0x1684:  mov    -0xc(%ebp),%edx
0862ff66 +0x1687:  mov    %edx,0x4(%esp)
0862ff6a +0x168b:  mov    %eax,(%esp)
0862ff6d +0x168e:  call   0862fbd0 <+0x12f1>
0862ff72 +0x1693:  call   08724be0 <__cxa_rethrow>
0862ff77 +0x1698:  mov    %edx,%ebx
0862ff79 +0x169a:  mov    %eax,%esi
0862ff7b +0x169c:  call   08725c30 <__cxa_end_catch>
0862ff80 +0x16a1:  mov    %esi,%eax
0862ff82 +0x16a3:  mov    %ebx,%edx
0862ff84 +0x16a5:  mov    %eax,(%esp)
0862ff87 +0x16a8:  call   08ae3750 <_Unwind_Resume>
0862ff8c +0x16ad:  push   %ebp
0862ff8d +0x16ae:  mov    %esp,%ebp
0862ff8f +0x16b0:  mov    0xc(%ebp),%eax
0862ff92 +0x16b3:  mov    (%eax),%edx
0862ff94 +0x16b5:  mov    0x8(%ebp),%eax
0862ff97 +0x16b8:  mov    %edx,(%eax)
0862ff99 +0x16ba:  pop    %ebp
0862ff9a +0x16bb:  ret
0862ff9b +0x16bc:  nop
0862ff9c +0x16bd:  push   %ebp
0862ff9d +0x16be:  mov    %esp,%ebp
0862ff9f +0x16c0:  push   %esi
0862ffa0 +0x16c1:  push   %ebx
0862ffa1 +0x16c2:  sub    $0x40,%esp
0862ffa4 +0x16c5:  cmpl   $0x0,0x10(%ebp)
0862ffa8 +0x16c9:  je     086303b8 <+0x1ad9>
0862ffae +0x16cf:  mov    0x8(%ebp),%eax
0862ffb1 +0x16d2:  mov    0x8(%eax),%eax
0862ffb4 +0x16d5:  mov    %eax,%edx
0862ffb6 +0x16d7:  mov    0x8(%ebp),%eax
0862ffb9 +0x16da:  mov    0x4(%eax),%eax
0862ffbc +0x16dd:  mov    %edx,%ecx
0862ffbe +0x16df:  sub    %eax,%ecx
0862ffc0 +0x16e1:  mov    %ecx,%eax
0862ffc2 +0x16e3:  sar    $0x2,%eax
0862ffc5 +0x16e6:  cmp    0x10(%ebp),%eax
0862ffc8 +0x16e9:  jb     0863018f <+0x18b0>
0862ffce +0x16ef:  mov    0x14(%ebp),%eax
0862ffd1 +0x16f2:  mov    (%eax),%eax
0862ffd3 +0x16f4:  mov    %eax,-0x2c(%ebp)
0862ffd6 +0x16f7:  lea    -0x28(%ebp),%eax
0862ffd9 +0x16fa:  mov    0x8(%ebp),%edx
0862ffdc +0x16fd:  mov    %edx,0x4(%esp)
0862ffe0 +0x1701:  mov    %eax,(%esp)
0862ffe3 +0x1704:  call   0862fb82 <+0x12a3>
0862ffe8 +0x1709:  sub    $0x4,%esp
0862ffeb +0x170c:  lea    0xc(%ebp),%eax
0862ffee +0x170f:  mov    %eax,0x4(%esp)
0862fff2 +0x1713:  lea    -0x28(%ebp),%eax
0862fff5 +0x1716:  mov    %eax,(%esp)
0862fff8 +0x1719:  call   086305da <+0x1cfb>
0862fffd +0x171e:  mov    %eax,-0x20(%ebp)
08630000 +0x1721:  mov    0x8(%ebp),%eax
08630003 +0x1724:  mov    0x4(%eax),%eax
08630006 +0x1727:  mov    %eax,-0x1c(%ebp)
08630009 +0x172a:  mov    -0x20(%ebp),%eax
0863000c +0x172d:  cmp    0x10(%ebp),%eax
0863000f +0x1730:  jbe    086300cd <+0x17ee>
08630015 +0x1736:  mov    0x8(%ebp),%eax
08630018 +0x1739:  mov    %eax,(%esp)
0863001b +0x173c:  call   0862f554 <+0xc75>
08630020 +0x1741:  mov    0x8(%ebp),%edx
08630023 +0x1744:  mov    0x4(%edx),%ecx
08630026 +0x1747:  mov    0x8(%ebp),%edx
08630029 +0x174a:  mov    0x4(%edx),%edx
0863002c +0x174d:  mov    0x8(%ebp),%ebx
0863002f +0x1750:  mov    0x4(%ebx),%ebx
08630032 +0x1753:  mov    0x10(%ebp),%esi
08630035 +0x1756:  shl    $0x2,%esi
08630038 +0x1759:  neg    %esi
0863003a +0x175b:  add    %esi,%ebx
0863003c +0x175d:  mov    %eax,0xc(%esp)
08630040 +0x1761:  mov    %ecx,0x8(%esp)
08630044 +0x1765:  mov    %edx,0x4(%esp)
08630048 +0x1769:  mov    %ebx,(%esp)
0863004b +0x176c:  call   0863060c <+0x1d2d>
08630050 +0x1771:  mov    0x8(%ebp),%eax
08630053 +0x1774:  mov    0x4(%eax),%eax
08630056 +0x1777:  mov    0x10(%ebp),%edx
08630059 +0x177a:  shl    $0x2,%edx
0863005c +0x177d:  lea    (%eax,%edx,1),%edx
0863005f +0x1780:  mov    0x8(%ebp),%eax
08630062 +0x1783:  mov    %edx,0x4(%eax)
08630065 +0x1786:  mov    0x10(%ebp),%eax
08630068 +0x1789:  shl    $0x2,%eax
0863006b +0x178c:  neg    %eax
0863006d +0x178e:  mov    %eax,%ebx
0863006f +0x1790:  add    -0x1c(%ebp),%ebx
08630072 +0x1793:  lea    0xc(%ebp),%eax
08630075 +0x1796:  mov    %eax,(%esp)
08630078 +0x1799:  call   0863065e <+0x1d7f>
0863007d +0x179e:  mov    (%eax),%eax
0863007f +0x17a0:  mov    -0x1c(%ebp),%edx
08630082 +0x17a3:  mov    %edx,0x8(%esp)
08630086 +0x17a7:  mov    %ebx,0x4(%esp)
0863008a +0x17ab:  mov    %eax,(%esp)
0863008d +0x17ae:  call   08630666 <+0x1d87>
08630092 +0x17b3:  lea    0xc(%ebp),%eax
08630095 +0x17b6:  mov    %eax,(%esp)
08630098 +0x17b9:  call   0863065e <+0x1d7f>
0863009d +0x17be:  mov    (%eax),%eax
0863009f +0x17c0:  mov    0x10(%ebp),%edx
086300a2 +0x17c3:  shl    $0x2,%edx
086300a5 +0x17c6:  lea    (%eax,%edx,1),%ebx
086300a8 +0x17c9:  lea    0xc(%ebp),%eax
086300ab +0x17cc:  mov    %eax,(%esp)
086300ae +0x17cf:  call   0863065e <+0x1d7f>
086300b3 +0x17d4:  mov    (%eax),%eax
086300b5 +0x17d6:  lea    -0x2c(%ebp),%edx
086300b8 +0x17d9:  mov    %edx,0x8(%esp)
086300bc +0x17dd:  mov    %ebx,0x4(%esp)
086300c0 +0x17e1:  mov    %eax,(%esp)
086300c3 +0x17e4:  call   0863069e <+0x1dbf>
086300c8 +0x17e9:  jmp    086303b8 <+0x1ad9>
086300cd +0x17ee:  mov    0x8(%ebp),%eax
086300d0 +0x17f1:  mov    %eax,(%esp)
086300d3 +0x17f4:  call   0862f554 <+0xc75>
086300d8 +0x17f9:  mov    -0x20(%ebp),%edx
086300db +0x17fc:  mov    0x10(%ebp),%ecx
086300de +0x17ff:  sub    %edx,%ecx
086300e0 +0x1801:  mov    0x8(%ebp),%edx
086300e3 +0x1804:  mov    0x4(%edx),%edx
086300e6 +0x1807:  mov    %eax,0xc(%esp)
086300ea +0x180b:  lea    -0x2c(%ebp),%eax
086300ed +0x180e:  mov    %eax,0x8(%esp)
086300f1 +0x1812:  mov    %ecx,0x4(%esp)
086300f5 +0x1816:  mov    %edx,(%esp)
086300f8 +0x1819:  call   086306d6 <+0x1df7>
086300fd +0x181e:  mov    0x8(%ebp),%eax
08630100 +0x1821:  mov    0x4(%eax),%eax
08630103 +0x1824:  mov    -0x20(%ebp),%edx
08630106 +0x1827:  mov    0x10(%ebp),%ecx
08630109 +0x182a:  mov    %ecx,%ebx
0863010b +0x182c:  sub    %edx,%ebx
0863010d +0x182e:  mov    %ebx,%edx
0863010f +0x1830:  shl    $0x2,%edx
08630112 +0x1833:  lea    (%eax,%edx,1),%edx
08630115 +0x1836:  mov    0x8(%ebp),%eax
08630118 +0x1839:  mov    %edx,0x4(%eax)
0863011b +0x183c:  mov    0x8(%ebp),%eax
0863011e +0x183f:  mov    %eax,(%esp)
08630121 +0x1842:  call   0862f554 <+0xc75>
08630126 +0x1847:  mov    %eax,%ebx
08630128 +0x1849:  mov    0x8(%ebp),%eax
0863012b +0x184c:  mov    0x4(%eax),%esi
0863012e +0x184f:  lea    0xc(%ebp),%eax
08630131 +0x1852:  mov    %eax,(%esp)
08630134 +0x1855:  call   0863065e <+0x1d7f>
08630139 +0x185a:  mov    (%eax),%eax
0863013b +0x185c:  mov    %ebx,0xc(%esp)
0863013f +0x1860:  mov    %esi,0x8(%esp)
08630143 +0x1864:  mov    -0x1c(%ebp),%edx
08630146 +0x1867:  mov    %edx,0x4(%esp)
0863014a +0x186b:  mov    %eax,(%esp)
0863014d +0x186e:  call   0863060c <+0x1d2d>
08630152 +0x1873:  mov    0x8(%ebp),%eax
08630155 +0x1876:  mov    0x4(%eax),%eax
08630158 +0x1879:  mov    -0x20(%ebp),%edx
0863015b +0x187c:  shl    $0x2,%edx
0863015e +0x187f:  lea    (%eax,%edx,1),%edx
08630161 +0x1882:  mov    0x8(%ebp),%eax
08630164 +0x1885:  mov    %edx,0x4(%eax)
08630167 +0x1888:  lea    0xc(%ebp),%eax
0863016a +0x188b:  mov    %eax,(%esp)
0863016d +0x188e:  call   0863065e <+0x1d7f>
08630172 +0x1893:  mov    (%eax),%eax
08630174 +0x1895:  lea    -0x2c(%ebp),%edx
08630177 +0x1898:  mov    %edx,0x8(%esp)
0863017b +0x189c:  mov    -0x1c(%ebp),%edx
0863017e +0x189f:  mov    %edx,0x4(%esp)
08630182 +0x18a3:  mov    %eax,(%esp)
08630185 +0x18a6:  call   0863069e <+0x1dbf>
0863018a +0x18ab:  jmp    086303b8 <+0x1ad9>
0863018f +0x18b0:  movl   $"vector::_M_fill_insert",0x8(%esp)
08630197 +0x18b8:  mov    0x10(%ebp),%eax
0863019a +0x18bb:  mov    %eax,0x4(%esp)
0863019e +0x18bf:  mov    0x8(%ebp),%eax
086301a1 +0x18c2:  mov    %eax,(%esp)
086301a4 +0x18c5:  call   086306f8 <+0x1e19>
086301a9 +0x18ca:  mov    %eax,-0x18(%ebp)
086301ac +0x18cd:  lea    -0x24(%ebp),%eax
086301af +0x18d0:  mov    0x8(%ebp),%edx
086301b2 +0x18d3:  mov    %edx,0x4(%esp)
086301b6 +0x18d7:  mov    %eax,(%esp)
086301b9 +0x18da:  call   0863079e <+0x1ebf>
086301be +0x18df:  sub    $0x4,%esp
086301c1 +0x18e2:  lea    -0x24(%ebp),%eax
086301c4 +0x18e5:  mov    %eax,0x4(%esp)
086301c8 +0x18e9:  lea    0xc(%ebp),%eax
086301cb +0x18ec:  mov    %eax,(%esp)
086301ce +0x18ef:  call   086305da <+0x1cfb>
086301d3 +0x18f4:  mov    %eax,-0x14(%ebp)
086301d6 +0x18f7:  mov    0x8(%ebp),%eax
086301d9 +0x18fa:  mov    -0x18(%ebp),%edx
086301dc +0x18fd:  mov    %edx,0x4(%esp)
086301e0 +0x1901:  mov    %eax,(%esp)
086301e3 +0x1904:  call   0863058a <+0x1cab>
086301e8 +0x1909:  mov    %eax,-0x10(%ebp)
086301eb +0x190c:  mov    -0x10(%ebp),%eax
086301ee +0x190f:  mov    %eax,-0xc(%ebp)
086301f1 +0x1912:  mov    0x8(%ebp),%eax
086301f4 +0x1915:  mov    %eax,(%esp)
086301f7 +0x1918:  call   0862f554 <+0xc75>
086301fc +0x191d:  mov    -0x14(%ebp),%edx
086301ff +0x1920:  shl    $0x2,%edx
08630202 +0x1923:  add    -0x10(%ebp),%edx
08630205 +0x1926:  mov    %eax,0xc(%esp)
08630209 +0x192a:  mov    0x14(%ebp),%eax
0863020c +0x192d:  mov    %eax,0x8(%esp)
08630210 +0x1931:  mov    0x10(%ebp),%eax
08630213 +0x1934:  mov    %eax,0x4(%esp)
08630217 +0x1938:  mov    %edx,(%esp)
0863021a +0x193b:  call   086306d6 <+0x1df7>
0863021f +0x1940:  movl   $0x0,-0xc(%ebp)
08630226 +0x1947:  mov    0x8(%ebp),%eax
08630229 +0x194a:  mov    %eax,(%esp)
0863022c +0x194d:  call   0862f554 <+0xc75>
08630231 +0x1952:  mov    %eax,%ebx
08630233 +0x1954:  lea    0xc(%ebp),%eax
08630236 +0x1957:  mov    %eax,(%esp)
08630239 +0x195a:  call   0863065e <+0x1d7f>
0863023e +0x195f:  mov    (%eax),%edx
08630240 +0x1961:  mov    0x8(%ebp),%eax
08630243 +0x1964:  mov    (%eax),%eax
08630245 +0x1966:  mov    %ebx,0xc(%esp)
08630249 +0x196a:  mov    -0x10(%ebp),%ecx
0863024c +0x196d:  mov    %ecx,0x8(%esp)
08630250 +0x1971:  mov    %edx,0x4(%esp)
08630254 +0x1975:  mov    %eax,(%esp)
08630257 +0x1978:  call   0863060c <+0x1d2d>
0863025c +0x197d:  mov    %eax,-0xc(%ebp)
0863025f +0x1980:  mov    0x10(%ebp),%eax
08630262 +0x1983:  shl    $0x2,%eax
08630265 +0x1986:  add    %eax,-0xc(%ebp)
08630268 +0x1989:  mov    0x8(%ebp),%eax
0863026b +0x198c:  mov    %eax,(%esp)
0863026e +0x198f:  call   0862f554 <+0xc75>
08630273 +0x1994:  mov    %eax,%ebx
08630275 +0x1996:  mov    0x8(%ebp),%eax
08630278 +0x1999:  mov    0x4(%eax),%esi
0863027b +0x199c:  lea    0xc(%ebp),%eax
0863027e +0x199f:  mov    %eax,(%esp)
08630281 +0x19a2:  call   0863065e <+0x1d7f>
08630286 +0x19a7:  mov    (%eax),%eax
08630288 +0x19a9:  mov    %ebx,0xc(%esp)
0863028c +0x19ad:  mov    -0xc(%ebp),%edx
0863028f +0x19b0:  mov    %edx,0x8(%esp)
08630293 +0x19b4:  mov    %esi,0x4(%esp)
08630297 +0x19b8:  mov    %eax,(%esp)
0863029a +0x19bb:  call   0863060c <+0x1d2d>
0863029f +0x19c0:  mov    %eax,-0xc(%ebp)
086302a2 +0x19c3:  mov    0x8(%ebp),%eax
086302a5 +0x19c6:  mov    %eax,(%esp)
086302a8 +0x19c9:  call   0862f554 <+0xc75>
086302ad +0x19ce:  mov    0x8(%ebp),%edx
086302b0 +0x19d1:  mov    0x4(%edx),%ecx
086302b3 +0x19d4:  mov    0x8(%ebp),%edx
086302b6 +0x19d7:  mov    (%edx),%edx
086302b8 +0x19d9:  mov    %eax,0x8(%esp)
086302bc +0x19dd:  mov    %ecx,0x4(%esp)
086302c0 +0x19e1:  mov    %edx,(%esp)
086302c3 +0x19e4:  call   0862f55c <+0xc7d>
086302c8 +0x19e9:  mov    0x8(%ebp),%eax
086302cb +0x19ec:  mov    0x8(%eax),%eax
086302ce +0x19ef:  mov    %eax,%edx
086302d0 +0x19f1:  mov    0x8(%ebp),%eax
086302d3 +0x19f4:  mov    (%eax),%eax
086302d5 +0x19f6:  mov    %edx,%ecx
086302d7 +0x19f8:  sub    %eax,%ecx
086302d9 +0x19fa:  mov    %ecx,%eax
086302db +0x19fc:  sar    $0x2,%eax
086302de +0x19ff:  mov    %eax,%ecx
086302e0 +0x1a01:  mov    0x8(%ebp),%eax
086302e3 +0x1a04:  mov    (%eax),%edx
086302e5 +0x1a06:  mov    0x8(%ebp),%eax
086302e8 +0x1a09:  mov    %ecx,0x8(%esp)
086302ec +0x1a0d:  mov    %edx,0x4(%esp)
086302f0 +0x1a11:  mov    %eax,(%esp)
086302f3 +0x1a14:  call   0862fbd0 <+0x12f1>
086302f8 +0x1a19:  mov    0x8(%ebp),%eax
086302fb +0x1a1c:  mov    -0x10(%ebp),%edx
086302fe +0x1a1f:  mov    %edx,(%eax)
08630300 +0x1a21:  mov    0x8(%ebp),%eax
08630303 +0x1a24:  mov    -0xc(%ebp),%edx
08630306 +0x1a27:  mov    %edx,0x4(%eax)
08630309 +0x1a2a:  mov    -0x18(%ebp),%eax
0863030c +0x1a2d:  shl    $0x2,%eax
0863030f +0x1a30:  mov    %eax,%edx
08630311 +0x1a32:  add    -0x10(%ebp),%edx
08630314 +0x1a35:  mov    0x8(%ebp),%eax
08630317 +0x1a38:  mov    %edx,0x8(%eax)
0863031a +0x1a3b:  jmp    086303b8 <+0x1ad9>
0863031f +0x1a40:  mov    %eax,(%esp)
08630322 +0x1a43:  call   08725ce0 <__cxa_begin_catch>
08630327 +0x1a48:  cmpl   $0x0,-0xc(%ebp)
0863032b +0x1a4c:  jne    08630364 <+0x1a85>
0863032d +0x1a4e:  mov    0x8(%ebp),%eax
08630330 +0x1a51:  mov    %eax,(%esp)
08630333 +0x1a54:  call   0862f554 <+0xc75>
08630338 +0x1a59:  mov    0x10(%ebp),%edx
0863033b +0x1a5c:  mov    -0x14(%ebp),%ecx
0863033e +0x1a5f:  lea    (%ecx,%edx,1),%edx
08630341 +0x1a62:  shl    $0x2,%edx
08630344 +0x1a65:  mov    %edx,%ecx
08630346 +0x1a67:  add    -0x10(%ebp),%ecx
08630349 +0x1a6a:  mov    -0x14(%ebp),%edx
0863034c +0x1a6d:  shl    $0x2,%edx
0863034f +0x1a70:  add    -0x10(%ebp),%edx
08630352 +0x1a73:  mov    %eax,0x8(%esp)
08630356 +0x1a77:  mov    %ecx,0x4(%esp)
0863035a +0x1a7b:  mov    %edx,(%esp)
0863035d +0x1a7e:  call   0862f55c <+0xc7d>
08630362 +0x1a83:  jmp    08630385 <+0x1aa6>
08630364 +0x1a85:  mov    0x8(%ebp),%eax
08630367 +0x1a88:  mov    %eax,(%esp)
0863036a +0x1a8b:  call   0862f554 <+0xc75>
0863036f +0x1a90:  mov    %eax,0x8(%esp)
08630373 +0x1a94:  mov    -0xc(%ebp),%eax
08630376 +0x1a97:  mov    %eax,0x4(%esp)
0863037a +0x1a9b:  mov    -0x10(%ebp),%eax
0863037d +0x1a9e:  mov    %eax,(%esp)
08630380 +0x1aa1:  call   0862f55c <+0xc7d>
08630385 +0x1aa6:  mov    0x8(%ebp),%eax
08630388 +0x1aa9:  mov    -0x18(%ebp),%edx
0863038b +0x1aac:  mov    %edx,0x8(%esp)
0863038f +0x1ab0:  mov    -0x10(%ebp),%edx
08630392 +0x1ab3:  mov    %edx,0x4(%esp)
08630396 +0x1ab7:  mov    %eax,(%esp)
08630399 +0x1aba:  call   0862fbd0 <+0x12f1>
0863039e +0x1abf:  call   08724be0 <__cxa_rethrow>
086303a3 +0x1ac4:  mov    %edx,%ebx
086303a5 +0x1ac6:  mov    %eax,%esi
086303a7 +0x1ac8:  call   08725c30 <__cxa_end_catch>
086303ac +0x1acd:  mov    %esi,%eax
086303ae +0x1acf:  mov    %ebx,%edx
086303b0 +0x1ad1:  mov    %eax,(%esp)
086303b3 +0x1ad4:  call   08ae3750 <_Unwind_Resume>
086303b8 +0x1ad9:  lea    -0x8(%ebp),%esp
086303bb +0x1adc:  add    $0x0,%esp
086303be +0x1adf:  pop    %ebx
086303bf +0x1ae0:  pop    %esi
086303c0 +0x1ae1:  pop    %ebp
086303c1 +0x1ae2:  ret
086303c2 +0x1ae3:  push   %ebp
086303c3 +0x1ae4:  mov    %esp,%ebp
086303c5 +0x1ae6:  sub    $0x18,%esp
086303c8 +0x1ae9:  mov    0xc(%ebp),%eax
086303cb +0x1aec:  mov    %eax,(%esp)
086303ce +0x1aef:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086303d3 +0x1af4:  leave
086303d4 +0x1af5:  ret
086303d5 +0x1af6:  push   %ebp
086303d6 +0x1af7:  mov    %esp,%ebp
086303d8 +0x1af9:  pop    %ebp
086303d9 +0x1afa:  ret
086303da +0x1afb:  push   %ebp
086303db +0x1afc:  mov    %esp,%ebp
086303dd +0x1afe:  sub    $0x18,%esp
086303e0 +0x1b01:  mov    0x8(%ebp),%eax
086303e3 +0x1b04:  mov    %eax,(%esp)
086303e6 +0x1b07:  call   0862f3f2 <+0xb13>
086303eb +0x1b0c:  leave
086303ec +0x1b0d:  ret
086303ed +0x1b0e:  nop
086303ee +0x1b0f:  push   %ebp
086303ef +0x1b10:  mov    %esp,%ebp
086303f1 +0x1b12:  sub    $0x18,%esp
086303f4 +0x1b15:  mov    0xc(%ebp),%eax
086303f7 +0x1b18:  mov    %eax,(%esp)
086303fa +0x1b1b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
086303ff +0x1b20:  leave
08630400 +0x1b21:  ret
08630401 +0x1b22:  nop
08630402 +0x1b23:  push   %ebp
08630403 +0x1b24:  mov    %esp,%ebp
08630405 +0x1b26:  mov    0x8(%ebp),%eax
08630408 +0x1b29:  pop    %ebp
08630409 +0x1b2a:  ret
0863040a +0x1b2b:  push   %ebp
0863040b +0x1b2c:  mov    %esp,%ebp
0863040d +0x1b2e:  sub    $0x18,%esp
08630410 +0x1b31:  mov    0xc(%ebp),%edx
08630413 +0x1b34:  mov    0x8(%ebp),%eax
08630416 +0x1b37:  mov    %edx,0x4(%esp)
0863041a +0x1b3b:  mov    %eax,(%esp)
0863041d +0x1b3e:  call   086307c2 <+0x1ee3>
08630422 +0x1b43:  leave
08630423 +0x1b44:  ret
08630424 +0x1b45:  push   %ebp
08630425 +0x1b46:  mov    %esp,%ebp
08630427 +0x1b48:  push   %esi
08630428 +0x1b49:  push   %ebx
08630429 +0x1b4a:  sub    $0x10,%esp
0863042c +0x1b4d:  mov    0x8(%ebp),%eax
0863042f +0x1b50:  mov    0x10(%ebp),%edx
08630432 +0x1b53:  mov    %edx,0x4(%esp)
08630436 +0x1b57:  mov    %eax,(%esp)
08630439 +0x1b5a:  call   0862fe6e <+0x158f>
0863043e +0x1b5f:  mov    0xc(%ebp),%eax
08630441 +0x1b62:  mov    %eax,0x4(%esp)
08630445 +0x1b66:  mov    0x8(%ebp),%eax
08630448 +0x1b69:  mov    %eax,(%esp)
0863044b +0x1b6c:  call   0863058a <+0x1cab>
08630450 +0x1b71:  mov    0x8(%ebp),%edx
08630453 +0x1b74:  mov    %eax,(%edx)
08630455 +0x1b76:  mov    0x8(%ebp),%eax
08630458 +0x1b79:  mov    (%eax),%edx
0863045a +0x1b7b:  mov    0x8(%ebp),%eax
0863045d +0x1b7e:  mov    %edx,0x4(%eax)
08630460 +0x1b81:  mov    0x8(%ebp),%eax
08630463 +0x1b84:  mov    (%eax),%eax
08630465 +0x1b86:  mov    0xc(%ebp),%edx
08630468 +0x1b89:  shl    $0x2,%edx
0863046b +0x1b8c:  lea    (%eax,%edx,1),%edx
0863046e +0x1b8f:  mov    0x8(%ebp),%eax
08630471 +0x1b92:  mov    %edx,0x8(%eax)
08630474 +0x1b95:  add    $0x10,%esp
08630477 +0x1b98:  pop    %ebx
08630478 +0x1b99:  pop    %esi
08630479 +0x1b9a:  pop    %ebp
0863047a +0x1b9b:  ret
0863047b +0x1b9c:  mov    %edx,%ebx
0863047d +0x1b9e:  mov    %eax,%esi
0863047f +0x1ba0:  mov    0x8(%ebp),%eax
08630482 +0x1ba3:  mov    %eax,(%esp)
08630485 +0x1ba6:  call   0862f4d8 <+0xbf9>
0863048a +0x1bab:  mov    %esi,%eax
0863048c +0x1bad:  mov    %ebx,%edx
0863048e +0x1baf:  mov    %eax,(%esp)
08630491 +0x1bb2:  call   08ae3750 <_Unwind_Resume>
08630496 +0x1bb7:  push   %ebp
08630497 +0x1bb8:  mov    %esp,%ebp
08630499 +0x1bba:  sub    $0x18,%esp
0863049c +0x1bbd:  mov    0x8(%ebp),%eax
0863049f +0x1bc0:  mov    %eax,(%esp)
086304a2 +0x1bc3:  call   0862f554 <+0xc75>
086304a7 +0x1bc8:  mov    0x8(%ebp),%edx
086304aa +0x1bcb:  mov    (%edx),%edx
086304ac +0x1bcd:  mov    %eax,0xc(%esp)
086304b0 +0x1bd1:  mov    0x10(%ebp),%eax
086304b3 +0x1bd4:  mov    %eax,0x8(%esp)
086304b7 +0x1bd8:  mov    0xc(%ebp),%eax
086304ba +0x1bdb:  mov    %eax,0x4(%esp)
086304be +0x1bdf:  mov    %edx,(%esp)
086304c1 +0x1be2:  call   086306d6 <+0x1df7>
086304c6 +0x1be7:  mov    0x8(%ebp),%eax
086304c9 +0x1bea:  mov    0x8(%eax),%edx
086304cc +0x1bed:  mov    0x8(%ebp),%eax
086304cf +0x1bf0:  mov    %edx,0x4(%eax)
086304d2 +0x1bf3:  leave
086304d3 +0x1bf4:  ret
086304d4 +0x1bf5:  push   %ebp
086304d5 +0x1bf6:  mov    %esp,%ebp
086304d7 +0x1bf8:  sub    $0x28,%esp
086304da +0x1bfb:  mov    0x8(%ebp),%eax
086304dd +0x1bfe:  mov    %eax,(%esp)
086304e0 +0x1c01:  call   086307c7 <+0x1ee8>
086304e5 +0x1c06:  mov    (%eax),%eax
086304e7 +0x1c08:  mov    %eax,-0xc(%ebp)
086304ea +0x1c0b:  mov    0xc(%ebp),%eax
086304ed +0x1c0e:  mov    %eax,(%esp)
086304f0 +0x1c11:  call   086307c7 <+0x1ee8>
086304f5 +0x1c16:  mov    (%eax),%edx
086304f7 +0x1c18:  mov    0x8(%ebp),%eax
086304fa +0x1c1b:  mov    %edx,(%eax)
086304fc +0x1c1d:  lea    -0xc(%ebp),%eax
086304ff +0x1c20:  mov    %eax,(%esp)
08630502 +0x1c23:  call   086307c7 <+0x1ee8>
08630507 +0x1c28:  mov    (%eax),%edx
08630509 +0x1c2a:  mov    0xc(%ebp),%eax
0863050c +0x1c2d:  mov    %edx,(%eax)
0863050e +0x1c2f:  leave
0863050f +0x1c30:  ret
08630510 +0x1c31:  push   %ebp
08630511 +0x1c32:  mov    %esp,%ebp
08630513 +0x1c34:  pop    %ebp
08630514 +0x1c35:  ret
08630515 +0x1c36:  push   %ebp
08630516 +0x1c37:  mov    %esp,%ebp
08630518 +0x1c39:  mov    0x8(%ebp),%eax
0863051b +0x1c3c:  pop    %ebp
0863051c +0x1c3d:  ret
0863051d +0x1c3e:  nop
0863051e +0x1c3f:  push   %ebp
0863051f +0x1c40:  mov    %esp,%ebp
08630521 +0x1c42:  sub    $0x18,%esp
08630524 +0x1c45:  mov    0x8(%ebp),%eax
08630527 +0x1c48:  movl   $0x0,0x8(%esp)
0863052f +0x1c50:  movl   $0x1,0x4(%esp)
08630537 +0x1c58:  mov    %eax,(%esp)
0863053a +0x1c5b:  call   086307d0 <+0x1ef1>
0863053f +0x1c60:  leave
08630540 +0x1c61:  ret
08630541 +0x1c62:  nop
08630542 +0x1c63:  push   %ebp
08630543 +0x1c64:  mov    %esp,%ebp
08630545 +0x1c66:  sub    $0x18,%esp
08630548 +0x1c69:  mov    0xc(%ebp),%eax
0863054b +0x1c6c:  mov    %eax,0x4(%esp)
0863054f +0x1c70:  movl   $0x8,(%esp)
08630556 +0x1c77:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
0863055b +0x1c7c:  mov    %eax,%edx
0863055d +0x1c7e:  test   %edx,%edx
0863055f +0x1c80:  je     08630570 <+0x1c91>
08630561 +0x1c82:  mov    %eax,%ecx
08630563 +0x1c84:  mov    0x10(%ebp),%eax
08630566 +0x1c87:  mov    0x4(%eax),%edx
08630569 +0x1c8a:  mov    (%eax),%eax
0863056b +0x1c8c:  mov    %eax,(%ecx)
0863056d +0x1c8e:  mov    %edx,0x4(%ecx)
08630570 +0x1c91:  leave
08630571 +0x1c92:  ret
08630572 +0x1c93:  push   %ebp
08630573 +0x1c94:  mov    %esp,%ebp
08630575 +0x1c96:  mov    $0x3fffffff,%eax
0863057a +0x1c9b:  pop    %ebp
0863057b +0x1c9c:  ret
0863057c +0x1c9d:  push   %ebp
0863057d +0x1c9e:  mov    %esp,%ebp
0863057f +0x1ca0:  mov    0x8(%ebp),%eax
08630582 +0x1ca3:  mov    0xc(%ebp),%edx
08630585 +0x1ca6:  mov    %edx,(%eax)
08630587 +0x1ca8:  pop    %ebp
08630588 +0x1ca9:  ret
08630589 +0x1caa:  nop
0863058a +0x1cab:  push   %ebp
0863058b +0x1cac:  mov    %esp,%ebp
0863058d +0x1cae:  sub    $0x18,%esp
08630590 +0x1cb1:  cmpl   $0x0,0xc(%ebp)
08630594 +0x1cb5:  je     086305b2 <+0x1cd3>
08630596 +0x1cb7:  mov    0x8(%ebp),%eax
08630599 +0x1cba:  movl   $0x0,0x8(%esp)
086305a1 +0x1cc2:  mov    0xc(%ebp),%edx
086305a4 +0x1cc5:  mov    %edx,0x4(%esp)
086305a8 +0x1cc9:  mov    %eax,(%esp)
086305ab +0x1ccc:  call   0863080e <+0x1f2f>
086305b0 +0x1cd1:  jmp    086305b7 <+0x1cd8>
086305b2 +0x1cd3:  mov    $0x0,%eax
086305b7 +0x1cd8:  leave
086305b8 +0x1cd9:  ret
086305b9 +0x1cda:  push   %ebp
086305ba +0x1cdb:  mov    %esp,%ebp
086305bc +0x1cdd:  sub    $0x18,%esp
086305bf +0x1ce0:  mov    0x10(%ebp),%eax
086305c2 +0x1ce3:  mov    %eax,0x8(%esp)
086305c6 +0x1ce7:  mov    0xc(%ebp),%eax
086305c9 +0x1cea:  mov    %eax,0x4(%esp)
086305cd +0x1cee:  mov    0x8(%ebp),%eax
086305d0 +0x1cf1:  mov    %eax,(%esp)
086305d3 +0x1cf4:  call   08630846 <+0x1f67>
086305d8 +0x1cf9:  leave
086305d9 +0x1cfa:  ret
086305da +0x1cfb:  push   %ebp
086305db +0x1cfc:  mov    %esp,%ebp
086305dd +0x1cfe:  push   %ebx
086305de +0x1cff:  sub    $0x14,%esp
086305e1 +0x1d02:  mov    0x8(%ebp),%eax
086305e4 +0x1d05:  mov    %eax,(%esp)
086305e7 +0x1d08:  call   0863065e <+0x1d7f>
086305ec +0x1d0d:  mov    (%eax),%eax
086305ee +0x1d0f:  mov    %eax,%ebx
086305f0 +0x1d11:  mov    0xc(%ebp),%eax
086305f3 +0x1d14:  mov    %eax,(%esp)
086305f6 +0x1d17:  call   0863065e <+0x1d7f>
086305fb +0x1d1c:  mov    (%eax),%eax
086305fd +0x1d1e:  mov    %ebx,%edx
086305ff +0x1d20:  sub    %eax,%edx
08630601 +0x1d22:  mov    %edx,%eax
08630603 +0x1d24:  sar    $0x2,%eax
08630606 +0x1d27:  add    $0x14,%esp
08630609 +0x1d2a:  pop    %ebx
0863060a +0x1d2b:  pop    %ebp
0863060b +0x1d2c:  ret
0863060c +0x1d2d:  push   %ebp
0863060d +0x1d2e:  mov    %esp,%ebp
0863060f +0x1d30:  sub    $0x28,%esp
08630612 +0x1d33:  lea    -0x10(%ebp),%eax
08630615 +0x1d36:  lea    0xc(%ebp),%edx
08630618 +0x1d39:  mov    %edx,0x4(%esp)
0863061c +0x1d3d:  mov    %eax,(%esp)
0863061f +0x1d40:  call   0862fedd <+0x15fe>
08630624 +0x1d45:  sub    $0x4,%esp
08630627 +0x1d48:  lea    -0xc(%ebp),%eax
0863062a +0x1d4b:  lea    0x8(%ebp),%edx
0863062d +0x1d4e:  mov    %edx,0x4(%esp)
08630631 +0x1d52:  mov    %eax,(%esp)
08630634 +0x1d55:  call   0862fedd <+0x15fe>
08630639 +0x1d5a:  sub    $0x4,%esp
0863063c +0x1d5d:  mov    0x14(%ebp),%eax
0863063f +0x1d60:  mov    %eax,0xc(%esp)
08630643 +0x1d64:  mov    0x10(%ebp),%eax
08630646 +0x1d67:  mov    %eax,0x8(%esp)
0863064a +0x1d6b:  mov    -0x10(%ebp),%eax
0863064d +0x1d6e:  mov    %eax,0x4(%esp)
08630651 +0x1d72:  mov    -0xc(%ebp),%eax
08630654 +0x1d75:  mov    %eax,(%esp)
08630657 +0x1d78:  call   086305b9 <+0x1cda>
0863065c +0x1d7d:  leave
0863065d +0x1d7e:  ret
0863065e +0x1d7f:  push   %ebp
0863065f +0x1d80:  mov    %esp,%ebp
08630661 +0x1d82:  mov    0x8(%ebp),%eax
08630664 +0x1d85:  pop    %ebp
08630665 +0x1d86:  ret
08630666 +0x1d87:  push   %ebp
08630667 +0x1d88:  mov    %esp,%ebp
08630669 +0x1d8a:  push   %ebx
0863066a +0x1d8b:  sub    $0x14,%esp
0863066d +0x1d8e:  mov    0xc(%ebp),%eax
08630670 +0x1d91:  mov    %eax,(%esp)
08630673 +0x1d94:  call   08630867 <+0x1f88>
08630678 +0x1d99:  mov    %eax,%ebx
0863067a +0x1d9b:  mov    0x8(%ebp),%eax
0863067d +0x1d9e:  mov    %eax,(%esp)
08630680 +0x1da1:  call   08630867 <+0x1f88>
08630685 +0x1da6:  mov    0x10(%ebp),%edx
08630688 +0x1da9:  mov    %edx,0x8(%esp)
0863068c +0x1dad:  mov    %ebx,0x4(%esp)
08630690 +0x1db1:  mov    %eax,(%esp)
08630693 +0x1db4:  call   0863086f <+0x1f90>
08630698 +0x1db9:  add    $0x14,%esp
0863069b +0x1dbc:  pop    %ebx
0863069c +0x1dbd:  pop    %ebp
0863069d +0x1dbe:  ret
0863069e +0x1dbf:  push   %ebp
0863069f +0x1dc0:  mov    %esp,%ebp
086306a1 +0x1dc2:  push   %ebx
086306a2 +0x1dc3:  sub    $0x14,%esp
086306a5 +0x1dc6:  mov    0xc(%ebp),%eax
086306a8 +0x1dc9:  mov    %eax,(%esp)
086306ab +0x1dcc:  call   086308b3 <+0x1fd4>
086306b0 +0x1dd1:  mov    %eax,%ebx
086306b2 +0x1dd3:  mov    0x8(%ebp),%eax
086306b5 +0x1dd6:  mov    %eax,(%esp)
086306b8 +0x1dd9:  call   086308b3 <+0x1fd4>
086306bd +0x1dde:  mov    0x10(%ebp),%edx
086306c0 +0x1de1:  mov    %edx,0x8(%esp)
086306c4 +0x1de5:  mov    %ebx,0x4(%esp)
086306c8 +0x1de9:  mov    %eax,(%esp)
086306cb +0x1dec:  call   086308bb <+0x1fdc>
086306d0 +0x1df1:  add    $0x14,%esp
086306d3 +0x1df4:  pop    %ebx
086306d4 +0x1df5:  pop    %ebp
086306d5 +0x1df6:  ret
086306d6 +0x1df7:  push   %ebp
086306d7 +0x1df8:  mov    %esp,%ebp
086306d9 +0x1dfa:  sub    $0x18,%esp
086306dc +0x1dfd:  mov    0x10(%ebp),%eax
086306df +0x1e00:  mov    %eax,0x8(%esp)
086306e3 +0x1e04:  mov    0xc(%ebp),%eax
086306e6 +0x1e07:  mov    %eax,0x4(%esp)
086306ea +0x1e0b:  mov    0x8(%ebp),%eax
086306ed +0x1e0e:  mov    %eax,(%esp)
086306f0 +0x1e11:  call   086308e6 <+0x2007>
086306f5 +0x1e16:  leave
086306f6 +0x1e17:  ret
086306f7 +0x1e18:  nop
086306f8 +0x1e19:  push   %ebp
086306f9 +0x1e1a:  mov    %esp,%ebp
086306fb +0x1e1c:  push   %ebx
086306fc +0x1e1d:  sub    $0x24,%esp
086306ff +0x1e20:  mov    0x8(%ebp),%eax
08630702 +0x1e23:  mov    %eax,(%esp)
08630705 +0x1e26:  call   0862fea6 <+0x15c7>
0863070a +0x1e2b:  mov    %eax,%ebx
0863070c +0x1e2d:  mov    0x8(%ebp),%eax
0863070f +0x1e30:  mov    %eax,(%esp)
08630712 +0x1e33:  call   0862f1cc <+0x8ed>
08630717 +0x1e38:  mov    %ebx,%edx
08630719 +0x1e3a:  sub    %eax,%edx
0863071b +0x1e3c:  mov    0xc(%ebp),%eax
0863071e +0x1e3f:  cmp    %eax,%edx
08630720 +0x1e41:  setb   %al
08630723 +0x1e44:  test   %al,%al
08630725 +0x1e46:  je     08630732 <+0x1e53>
08630727 +0x1e48:  mov    0x10(%ebp),%eax
0863072a +0x1e4b:  mov    %eax,(%esp)
0863072d +0x1e4e:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
08630732 +0x1e53:  mov    0x8(%ebp),%eax
08630735 +0x1e56:  mov    %eax,(%esp)
08630738 +0x1e59:  call   0862f1cc <+0x8ed>
0863073d +0x1e5e:  mov    %eax,%ebx
0863073f +0x1e60:  mov    0x8(%ebp),%eax
08630742 +0x1e63:  mov    %eax,(%esp)
08630745 +0x1e66:  call   0862f1cc <+0x8ed>
0863074a +0x1e6b:  mov    %eax,-0x10(%ebp)
0863074d +0x1e6e:  lea    0xc(%ebp),%eax
08630750 +0x1e71:  mov    %eax,0x4(%esp)
08630754 +0x1e75:  lea    -0x10(%ebp),%eax
08630757 +0x1e78:  mov    %eax,(%esp)
0863075a +0x1e7b:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0863075f +0x1e80:  mov    (%eax),%eax
08630761 +0x1e82:  lea    (%ebx,%eax,1),%eax
08630764 +0x1e85:  mov    %eax,-0xc(%ebp)
08630767 +0x1e88:  mov    0x8(%ebp),%eax
0863076a +0x1e8b:  mov    %eax,(%esp)
0863076d +0x1e8e:  call   0862f1cc <+0x8ed>
08630772 +0x1e93:  cmp    -0xc(%ebp),%eax
08630775 +0x1e96:  ja     08630787 <+0x1ea8>
08630777 +0x1e98:  mov    0x8(%ebp),%eax
0863077a +0x1e9b:  mov    %eax,(%esp)
0863077d +0x1e9e:  call   0862fea6 <+0x15c7>
08630782 +0x1ea3:  cmp    -0xc(%ebp),%eax
08630785 +0x1ea6:  jae    08630794 <+0x1eb5>
08630787 +0x1ea8:  mov    0x8(%ebp),%eax
0863078a +0x1eab:  mov    %eax,(%esp)
0863078d +0x1eae:  call   0862fea6 <+0x15c7>
08630792 +0x1eb3:  jmp    08630797 <+0x1eb8>
08630794 +0x1eb5:  mov    -0xc(%ebp),%eax
08630797 +0x1eb8:  add    $0x24,%esp
0863079a +0x1ebb:  pop    %ebx
0863079b +0x1ebc:  pop    %ebp
0863079c +0x1ebd:  ret
0863079d +0x1ebe:  nop
0863079e +0x1ebf:  push   %ebp
0863079f +0x1ec0:  mov    %esp,%ebp
086307a1 +0x1ec2:  push   %ebx
086307a2 +0x1ec3:  sub    $0x14,%esp
086307a5 +0x1ec6:  mov    0x8(%ebp),%ebx
086307a8 +0x1ec9:  mov    0xc(%ebp),%eax
086307ab +0x1ecc:  mov    %eax,0x4(%esp)
086307af +0x1ed0:  mov    %ebx,(%esp)
086307b2 +0x1ed3:  call   0862ff8c <+0x16ad>
086307b7 +0x1ed8:  mov    %ebx,%eax
086307b9 +0x1eda:  add    $0x14,%esp
086307bc +0x1edd:  pop    %ebx
086307bd +0x1ede:  pop    %ebp
086307be +0x1edf:  ret    $0x4
086307c1 +0x1ee2:  nop
086307c2 +0x1ee3:  push   %ebp
086307c3 +0x1ee4:  mov    %esp,%ebp
086307c5 +0x1ee6:  pop    %ebp
086307c6 +0x1ee7:  ret
086307c7 +0x1ee8:  push   %ebp
086307c8 +0x1ee9:  mov    %esp,%ebp
086307ca +0x1eeb:  mov    0x8(%ebp),%eax
086307cd +0x1eee:  pop    %ebp
086307ce +0x1eef:  ret
086307cf +0x1ef0:  nop
086307d0 +0x1ef1:  push   %ebp
086307d1 +0x1ef2:  mov    %esp,%ebp
086307d3 +0x1ef4:  sub    $0x18,%esp
086307d6 +0x1ef7:  mov    0x8(%ebp),%eax
086307d9 +0x1efa:  mov    %eax,(%esp)
086307dc +0x1efd:  call   08630908 <+0x2029>
086307e1 +0x1f02:  cmp    0xc(%ebp),%eax
086307e4 +0x1f05:  setb   %al
086307e7 +0x1f08:  movzbl %al,%eax
086307ea +0x1f0b:  test   %eax,%eax
086307ec +0x1f0d:  setne  %al
086307ef +0x1f10:  test   %al,%al
086307f1 +0x1f12:  je     086307f8 <+0x1f19>
086307f3 +0x1f14:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
086307f8 +0x1f19:  mov    0xc(%ebp),%edx
086307fb +0x1f1c:  mov    %edx,%eax
086307fd +0x1f1e:  add    %eax,%eax
086307ff +0x1f20:  add    %edx,%eax
08630801 +0x1f22:  shl    $0x2,%eax
08630804 +0x1f25:  mov    %eax,(%esp)
08630807 +0x1f28:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0863080c +0x1f2d:  leave
0863080d +0x1f2e:  ret
0863080e +0x1f2f:  push   %ebp
0863080f +0x1f30:  mov    %esp,%ebp
08630811 +0x1f32:  sub    $0x18,%esp
08630814 +0x1f35:  mov    0x8(%ebp),%eax
08630817 +0x1f38:  mov    %eax,(%esp)
0863081a +0x1f3b:  call   08630572 <+0x1c93>
0863081f +0x1f40:  cmp    0xc(%ebp),%eax
08630822 +0x1f43:  setb   %al
08630825 +0x1f46:  movzbl %al,%eax
08630828 +0x1f49:  test   %eax,%eax
0863082a +0x1f4b:  setne  %al
0863082d +0x1f4e:  test   %al,%al
0863082f +0x1f50:  je     08630836 <+0x1f57>
08630831 +0x1f52:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08630836 +0x1f57:  mov    0xc(%ebp),%eax
08630839 +0x1f5a:  shl    $0x2,%eax
0863083c +0x1f5d:  mov    %eax,(%esp)
0863083f +0x1f60:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08630844 +0x1f65:  leave
08630845 +0x1f66:  ret
08630846 +0x1f67:  push   %ebp
08630847 +0x1f68:  mov    %esp,%ebp
08630849 +0x1f6a:  sub    $0x18,%esp
0863084c +0x1f6d:  mov    0x10(%ebp),%eax
0863084f +0x1f70:  mov    %eax,0x8(%esp)
08630853 +0x1f74:  mov    0xc(%ebp),%eax
08630856 +0x1f77:  mov    %eax,0x4(%esp)
0863085a +0x1f7b:  mov    0x8(%ebp),%eax
0863085d +0x1f7e:  mov    %eax,(%esp)
08630860 +0x1f81:  call   08630912 <+0x2033>
08630865 +0x1f86:  leave
08630866 +0x1f87:  ret
08630867 +0x1f88:  push   %ebp
08630868 +0x1f89:  mov    %esp,%ebp
0863086a +0x1f8b:  mov    0x8(%ebp),%eax
0863086d +0x1f8e:  pop    %ebp
0863086e +0x1f8f:  ret
0863086f +0x1f90:  push   %ebp
08630870 +0x1f91:  mov    %esp,%ebp
08630872 +0x1f93:  push   %esi
08630873 +0x1f94:  push   %ebx
08630874 +0x1f95:  sub    $0x10,%esp
08630877 +0x1f98:  mov    0x10(%ebp),%eax
0863087a +0x1f9b:  mov    %eax,(%esp)
0863087d +0x1f9e:  call   086308b3 <+0x1fd4>
08630882 +0x1fa3:  mov    %eax,%esi
08630884 +0x1fa5:  mov    0xc(%ebp),%eax
08630887 +0x1fa8:  mov    %eax,(%esp)
0863088a +0x1fab:  call   086308b3 <+0x1fd4>
0863088f +0x1fb0:  mov    %eax,%ebx
08630891 +0x1fb2:  mov    0x8(%ebp),%eax
08630894 +0x1fb5:  mov    %eax,(%esp)
08630897 +0x1fb8:  call   086308b3 <+0x1fd4>
0863089c +0x1fbd:  mov    %esi,0x8(%esp)
086308a0 +0x1fc1:  mov    %ebx,0x4(%esp)
086308a4 +0x1fc5:  mov    %eax,(%esp)
086308a7 +0x1fc8:  call   08630933 <+0x2054>
086308ac +0x1fcd:  add    $0x10,%esp
086308af +0x1fd0:  pop    %ebx
086308b0 +0x1fd1:  pop    %esi
086308b1 +0x1fd2:  pop    %ebp
086308b2 +0x1fd3:  ret
086308b3 +0x1fd4:  push   %ebp
086308b4 +0x1fd5:  mov    %esp,%ebp
086308b6 +0x1fd7:  mov    0x8(%ebp),%eax
086308b9 +0x1fda:  pop    %ebp
086308ba +0x1fdb:  ret
086308bb +0x1fdc:  push   %ebp
086308bc +0x1fdd:  mov    %esp,%ebp
086308be +0x1fdf:  sub    $0x10,%esp
086308c1 +0x1fe2:  mov    0x10(%ebp),%eax
086308c4 +0x1fe5:  mov    (%eax),%eax
086308c6 +0x1fe7:  mov    %eax,-0x4(%ebp)
086308c9 +0x1fea:  jmp    086308d7 <+0x1ff8>
086308cb +0x1fec:  mov    0x8(%ebp),%eax
086308ce +0x1fef:  mov    -0x4(%ebp),%edx
086308d1 +0x1ff2:  mov    %edx,(%eax)
086308d3 +0x1ff4:  addl   $0x4,0x8(%ebp)
086308d7 +0x1ff8:  mov    0x8(%ebp),%eax
086308da +0x1ffb:  cmp    0xc(%ebp),%eax
086308dd +0x1ffe:  setne  %al
086308e0 +0x2001:  test   %al,%al
086308e2 +0x2003:  jne    086308cb <+0x1fec>
086308e4 +0x2005:  leave
086308e5 +0x2006:  ret
086308e6 +0x2007:  push   %ebp
086308e7 +0x2008:  mov    %esp,%ebp
086308e9 +0x200a:  sub    $0x18,%esp
086308ec +0x200d:  mov    0x10(%ebp),%eax
086308ef +0x2010:  mov    %eax,0x8(%esp)
086308f3 +0x2014:  mov    0xc(%ebp),%eax
086308f6 +0x2017:  mov    %eax,0x4(%esp)
086308fa +0x201b:  mov    0x8(%ebp),%eax
086308fd +0x201e:  mov    %eax,(%esp)
08630900 +0x2021:  call   08630958 <+0x2079>
08630905 +0x2026:  leave
08630906 +0x2027:  ret
08630907 +0x2028:  nop
08630908 +0x2029:  push   %ebp
08630909 +0x202a:  mov    %esp,%ebp
0863090b +0x202c:  mov    $0x15555555,%eax
08630910 +0x2031:  pop    %ebp
08630911 +0x2032:  ret
08630912 +0x2033:  push   %ebp
08630913 +0x2034:  mov    %esp,%ebp
08630915 +0x2036:  sub    $0x18,%esp
08630918 +0x2039:  mov    0x10(%ebp),%eax
0863091b +0x203c:  mov    %eax,0x8(%esp)
0863091f +0x2040:  mov    0xc(%ebp),%eax
08630922 +0x2043:  mov    %eax,0x4(%esp)
08630926 +0x2047:  mov    0x8(%ebp),%eax
08630929 +0x204a:  mov    %eax,(%esp)
0863092c +0x204d:  call   08630979 <+0x209a>
08630931 +0x2052:  leave
08630932 +0x2053:  ret
08630933 +0x2054:  push   %ebp
08630934 +0x2055:  mov    %esp,%ebp
08630936 +0x2057:  sub    $0x28,%esp
08630939 +0x205a:  movb   $0x1,-0x9(%ebp)
0863093d +0x205e:  mov    0x10(%ebp),%eax
08630940 +0x2061:  mov    %eax,0x8(%esp)
08630944 +0x2065:  mov    0xc(%ebp),%eax
08630947 +0x2068:  mov    %eax,0x4(%esp)
0863094b +0x206c:  mov    0x8(%ebp),%eax
0863094e +0x206f:  mov    %eax,(%esp)
08630951 +0x2072:  call   086309b1 <+0x20d2>
08630956 +0x2077:  leave
08630957 +0x2078:  ret
08630958 +0x2079:  push   %ebp
08630959 +0x207a:  mov    %esp,%ebp
0863095b +0x207c:  sub    $0x18,%esp
0863095e +0x207f:  mov    0x10(%ebp),%eax
08630961 +0x2082:  mov    %eax,0x8(%esp)
08630965 +0x2086:  mov    0xc(%ebp),%eax
08630968 +0x2089:  mov    %eax,0x4(%esp)
0863096c +0x208d:  mov    0x8(%ebp),%eax
0863096f +0x2090:  mov    %eax,(%esp)
08630972 +0x2093:  call   086309fe <+0x211f>
08630977 +0x2098:  leave
08630978 +0x2099:  ret
08630979 +0x209a:  push   %ebp
0863097a +0x209b:  mov    %esp,%ebp
0863097c +0x209d:  push   %ebx
0863097d +0x209e:  sub    $0x14,%esp
08630980 +0x20a1:  mov    0xc(%ebp),%eax
08630983 +0x20a4:  mov    %eax,(%esp)
08630986 +0x20a7:  call   08630a27 <+0x2148>
0863098b +0x20ac:  mov    %eax,%ebx
0863098d +0x20ae:  mov    0x8(%ebp),%eax
08630990 +0x20b1:  mov    %eax,(%esp)
08630993 +0x20b4:  call   08630a27 <+0x2148>
08630998 +0x20b9:  mov    0x10(%ebp),%edx
0863099b +0x20bc:  mov    %edx,0x8(%esp)
0863099f +0x20c0:  mov    %ebx,0x4(%esp)
086309a3 +0x20c4:  mov    %eax,(%esp)
086309a6 +0x20c7:  call   08630a3a <+0x215b>
086309ab +0x20cc:  add    $0x14,%esp
086309ae +0x20cf:  pop    %ebx
086309af +0x20d0:  pop    %ebp
086309b0 +0x20d1:  ret
086309b1 +0x20d2:  push   %ebp
086309b2 +0x20d3:  mov    %esp,%ebp
086309b4 +0x20d5:  sub    $0x28,%esp
086309b7 +0x20d8:  mov    0xc(%ebp),%edx
086309ba +0x20db:  mov    0x8(%ebp),%eax
086309bd +0x20de:  mov    %edx,%ecx
086309bf +0x20e0:  sub    %eax,%ecx
086309c1 +0x20e2:  mov    %ecx,%eax
086309c3 +0x20e4:  sar    $0x2,%eax
086309c6 +0x20e7:  mov    %eax,-0xc(%ebp)
086309c9 +0x20ea:  mov    -0xc(%ebp),%eax
086309cc +0x20ed:  lea    0x0(,%eax,4),%edx
086309d3 +0x20f4:  mov    -0xc(%ebp),%eax
086309d6 +0x20f7:  shl    $0x2,%eax
086309d9 +0x20fa:  neg    %eax
086309db +0x20fc:  add    0x10(%ebp),%eax
086309de +0x20ff:  mov    %edx,0x8(%esp)
086309e2 +0x2103:  mov    0x8(%ebp),%edx
086309e5 +0x2106:  mov    %edx,0x4(%esp)
086309e9 +0x210a:  mov    %eax,(%esp)
086309ec +0x210d:  call   0807d880 <_init+0x178>
086309f1 +0x2112:  mov    -0xc(%ebp),%eax
086309f4 +0x2115:  shl    $0x2,%eax
086309f7 +0x2118:  neg    %eax
086309f9 +0x211a:  add    0x10(%ebp),%eax
086309fc +0x211d:  leave
086309fd +0x211e:  ret
086309fe +0x211f:  push   %ebp
086309ff +0x2120:  mov    %esp,%ebp
08630a01 +0x2122:  sub    $0x18,%esp
08630a04 +0x2125:  mov    0x8(%ebp),%eax
08630a07 +0x2128:  mov    %eax,(%esp)
08630a0a +0x212b:  call   086308b3 <+0x1fd4>
08630a0f +0x2130:  mov    0x10(%ebp),%edx
08630a12 +0x2133:  mov    %edx,0x8(%esp)
08630a16 +0x2137:  mov    0xc(%ebp),%edx
08630a19 +0x213a:  mov    %edx,0x4(%esp)
08630a1d +0x213e:  mov    %eax,(%esp)
08630a20 +0x2141:  call   08630a7e <+0x219f>
08630a25 +0x2146:  leave
08630a26 +0x2147:  ret
08630a27 +0x2148:  push   %ebp
08630a28 +0x2149:  mov    %esp,%ebp
08630a2a +0x214b:  sub    $0x18,%esp
08630a2d +0x214e:  lea    0x8(%ebp),%eax
08630a30 +0x2151:  mov    %eax,(%esp)
08630a33 +0x2154:  call   08630aae <+0x21cf>
08630a38 +0x2159:  leave
08630a39 +0x215a:  ret
08630a3a +0x215b:  push   %ebp
08630a3b +0x215c:  mov    %esp,%ebp
08630a3d +0x215e:  push   %esi
08630a3e +0x215f:  push   %ebx
08630a3f +0x2160:  sub    $0x10,%esp
08630a42 +0x2163:  mov    0x10(%ebp),%eax
08630a45 +0x2166:  mov    %eax,(%esp)
08630a48 +0x2169:  call   086308b3 <+0x1fd4>
08630a4d +0x216e:  mov    %eax,%esi
08630a4f +0x2170:  mov    0xc(%ebp),%eax
08630a52 +0x2173:  mov    %eax,(%esp)
08630a55 +0x2176:  call   086308b3 <+0x1fd4>
08630a5a +0x217b:  mov    %eax,%ebx
08630a5c +0x217d:  mov    0x8(%ebp),%eax
08630a5f +0x2180:  mov    %eax,(%esp)
08630a62 +0x2183:  call   086308b3 <+0x1fd4>
08630a67 +0x2188:  mov    %esi,0x8(%esp)
08630a6b +0x218c:  mov    %ebx,0x4(%esp)
08630a6f +0x2190:  mov    %eax,(%esp)
08630a72 +0x2193:  call   08630ab8 <+0x21d9>
08630a77 +0x2198:  add    $0x10,%esp
08630a7a +0x219b:  pop    %ebx
08630a7b +0x219c:  pop    %esi
08630a7c +0x219d:  pop    %ebp
08630a7d +0x219e:  ret
08630a7e +0x219f:  push   %ebp
08630a7f +0x21a0:  mov    %esp,%ebp
08630a81 +0x21a2:  sub    $0x10,%esp
08630a84 +0x21a5:  mov    0x10(%ebp),%eax
08630a87 +0x21a8:  mov    (%eax),%eax
08630a89 +0x21aa:  mov    %eax,-0x4(%ebp)
08630a8c +0x21ad:  jmp    08630a9e <+0x21bf>
08630a8e +0x21af:  mov    0x8(%ebp),%eax
08630a91 +0x21b2:  mov    -0x4(%ebp),%edx
08630a94 +0x21b5:  mov    %edx,(%eax)
08630a96 +0x21b7:  subl   $0x1,0xc(%ebp)
08630a9a +0x21bb:  addl   $0x4,0x8(%ebp)
08630a9e +0x21bf:  cmpl   $0x0,0xc(%ebp)
08630aa2 +0x21c3:  setne  %al
08630aa5 +0x21c6:  test   %al,%al
08630aa7 +0x21c8:  jne    08630a8e <+0x21af>
08630aa9 +0x21ca:  mov    0x8(%ebp),%eax
08630aac +0x21cd:  leave
08630aad +0x21ce:  ret
08630aae +0x21cf:  push   %ebp
08630aaf +0x21d0:  mov    %esp,%ebp
08630ab1 +0x21d2:  mov    0x8(%ebp),%eax
08630ab4 +0x21d5:  mov    (%eax),%eax
08630ab6 +0x21d7:  pop    %ebp
08630ab7 +0x21d8:  ret
08630ab8 +0x21d9:  push   %ebp
08630ab9 +0x21da:  mov    %esp,%ebp
08630abb +0x21dc:  sub    $0x28,%esp
08630abe +0x21df:  movb   $0x1,-0x9(%ebp)
08630ac2 +0x21e3:  mov    0x10(%ebp),%eax
08630ac5 +0x21e6:  mov    %eax,0x8(%esp)
08630ac9 +0x21ea:  mov    0xc(%ebp),%eax
08630acc +0x21ed:  mov    %eax,0x4(%esp)
08630ad0 +0x21f1:  mov    0x8(%ebp),%eax
08630ad3 +0x21f4:  mov    %eax,(%esp)
08630ad6 +0x21f7:  call   08630add <+0x21fe>
08630adb +0x21fc:  leave
08630adc +0x21fd:  ret
08630add +0x21fe:  push   %ebp
08630ade +0x21ff:  mov    %esp,%ebp
08630ae0 +0x2201:  sub    $0x18,%esp
08630ae3 +0x2204:  mov    0xc(%ebp),%edx
08630ae6 +0x2207:  mov    0x8(%ebp),%eax
08630ae9 +0x220a:  mov    %edx,%ecx
08630aeb +0x220c:  sub    %eax,%ecx
08630aed +0x220e:  mov    %ecx,%eax
08630aef +0x2210:  sar    $0x2,%eax
08630af2 +0x2213:  shl    $0x2,%eax
08630af5 +0x2216:  mov    %eax,0x8(%esp)
08630af9 +0x221a:  mov    0x8(%ebp),%eax
08630afc +0x221d:  mov    %eax,0x4(%esp)
08630b00 +0x2221:  mov    0x10(%ebp),%eax
08630b03 +0x2224:  mov    %eax,(%esp)
08630b06 +0x2227:  call   0807d880 <_init+0x178>
08630b0b +0x222c:  mov    0xc(%ebp),%edx
08630b0e +0x222f:  mov    0x8(%ebp),%eax
08630b11 +0x2232:  mov    %edx,%ecx
08630b13 +0x2234:  sub    %eax,%ecx
08630b15 +0x2236:  mov    %ecx,%eax
08630b17 +0x2238:  sar    $0x2,%eax
08630b1a +0x223b:  shl    $0x2,%eax
08630b1d +0x223e:  add    0x10(%ebp),%eax
08630b20 +0x2241:  leave
08630b21 +0x2242:  ret
08630b22 +0x2243:  nop
08630b23 +0x2244:  nop
```

## 反编译 C

```c
// <global>::global @ 0x862e8df

/* CSyncSlangFilter::instance */

void CSyncSlangFilter::_GLOBAL__I_instance(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
