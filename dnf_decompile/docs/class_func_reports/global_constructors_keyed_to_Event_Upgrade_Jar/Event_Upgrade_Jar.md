# Event_Upgrade_Jar

`_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev`

`global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Event_Upgrade_Jar` | `0x080f504f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f504f  _GLOBAL__I__ZN17Event_Upgrade_JarC2Ev
#           global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()
# range [0x080f504f, 0x080f61a3]
080f504f +0x0000:  push   %ebp
080f5050 +0x0001:  mov    %esp,%ebp
080f5052 +0x0003:  sub    $0x18,%esp
080f5055 +0x0006:  movl   $0xffff,0x4(%esp)
080f505d +0x000e:  movl   $0x1,(%esp)
080f5064 +0x0015:  call   080f500f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080f5069 +0x001a:  leave
080f506a +0x001b:  ret
080f506b +0x001c:  nop
080f506c +0x001d:  push   %ebp
080f506d +0x001e:  mov    %esp,%ebp
080f506f +0x0020:  mov    0x8(%ebp),%eax
080f5072 +0x0023:  movzbl 0x6(%eax),%eax
080f5076 +0x0027:  and    $0x1f,%eax
080f5079 +0x002a:  pop    %ebp
080f507a +0x002b:  ret
080f507b +0x002c:  nop
080f507c +0x002d:  push   %ebp
080f507d +0x002e:  mov    %esp,%ebp
080f507f +0x0030:  sub    $0x18,%esp
080f5082 +0x0033:  mov    0x8(%ebp),%eax
080f5085 +0x0036:  mov    %eax,(%esp)
080f5088 +0x0039:  call   080f52f6 <+0x2a7>
080f508d +0x003e:  leave
080f508e +0x003f:  ret
080f508f +0x0040:  nop
080f5090 +0x0041:  push   %ebp
080f5091 +0x0042:  mov    %esp,%ebp
080f5093 +0x0044:  sub    $0x18,%esp
080f5096 +0x0047:  mov    0x8(%ebp),%eax
080f5099 +0x004a:  mov    %eax,(%esp)
080f509c +0x004d:  call   080f5370 <+0x321>
080f50a1 +0x0052:  leave
080f50a2 +0x0053:  ret
080f50a3 +0x0054:  nop
080f50a4 +0x0055:  push   %ebp
080f50a5 +0x0056:  mov    %esp,%ebp
080f50a7 +0x0058:  push   %edi
080f50a8 +0x0059:  push   %esi
080f50a9 +0x005a:  push   %ebx
080f50aa +0x005b:  sub    $0x2c,%esp
080f50ad +0x005e:  mov    0x8(%ebp),%eax
080f50b0 +0x0061:  add    $0x4,%eax
080f50b3 +0x0064:  mov    %eax,(%esp)
080f50b6 +0x0067:  call   080f52ce <+0x27f>
080f50bb +0x006c:  mov    0x8(%ebp),%eax
080f50be +0x006f:  add    $0x1c,%eax
080f50c1 +0x0072:  mov    %eax,(%esp)
080f50c4 +0x0075:  call   080f5348 <+0x2f9>
080f50c9 +0x007a:  mov    0x8(%ebp),%eax
080f50cc +0x007d:  add    $0x34,%eax
080f50cf +0x0080:  mov    %eax,(%esp)
080f50d2 +0x0083:  call   080f53c2 <+0x373>
080f50d7 +0x0088:  mov    0x8(%ebp),%eax
080f50da +0x008b:  lea    0x40(%eax),%esi
080f50dd +0x008e:  mov    %esi,%edi
080f50df +0x0090:  mov    $0x3,%ebx
080f50e4 +0x0095:  jmp    080f50f4 <+0xa5>
080f50e6 +0x0097:  mov    %edi,(%esp)
080f50e9 +0x009a:  call   080e247e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x224>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x224
080f50ee +0x009f:  add    $0xc,%edi
080f50f1 +0x00a2:  sub    $0x1,%ebx
080f50f4 +0x00a5:  cmp    $0xffffffff,%ebx
080f50f7 +0x00a8:  setne  %al
080f50fa +0x00ab:  test   %al,%al
080f50fc +0x00ad:  jne    080f50e6 <+0x97>
080f50fe +0x00af:  jmp    080f5136 <+0xe7>
080f5100 +0x00b1:  mov    %edx,%edi
080f5102 +0x00b3:  mov    %eax,-0x1c(%ebp)
080f5105 +0x00b6:  test   %esi,%esi
080f5107 +0x00b8:  je     080f512f <+0xe0>
080f5109 +0x00ba:  mov    $0x3,%eax
080f510e +0x00bf:  sub    %ebx,%eax
080f5110 +0x00c1:  mov    %eax,%edx
080f5112 +0x00c3:  mov    %edx,%eax
080f5114 +0x00c5:  add    %eax,%eax
080f5116 +0x00c7:  add    %edx,%eax
080f5118 +0x00c9:  shl    $0x2,%eax
080f511b +0x00cc:  lea    (%esi,%eax,1),%ebx
080f511e +0x00cf:  cmp    %esi,%ebx
080f5120 +0x00d1:  je     080f512f <+0xe0>
080f5122 +0x00d3:  sub    $0xc,%ebx
080f5125 +0x00d6:  mov    %ebx,(%esp)
080f5128 +0x00d9:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
080f512d +0x00de:  jmp    080f511e <+0xcf>
080f512f +0x00e0:  mov    -0x1c(%ebp),%eax
080f5132 +0x00e3:  mov    %edi,%edx
080f5134 +0x00e5:  jmp    080f517b <+0x12c>
080f5136 +0x00e7:  mov    0x8(%ebp),%eax
080f5139 +0x00ea:  add    $0x74,%eax
080f513c +0x00ed:  mov    %eax,(%esp)
080f513f +0x00f0:  call   080f5434 <+0x3e5>
080f5144 +0x00f5:  jmp    080f51c9 <+0x17a>
080f5149 +0x00fa:  mov    %edx,%esi
080f514b +0x00fc:  mov    %eax,%edi
080f514d +0x00fe:  mov    0x8(%ebp),%eax
080f5150 +0x0101:  add    $0x40,%eax
080f5153 +0x0104:  test   %eax,%eax
080f5155 +0x0106:  je     080f5177 <+0x128>
080f5157 +0x0108:  mov    0x8(%ebp),%eax
080f515a +0x010b:  add    $0x40,%eax
080f515d +0x010e:  lea    0x30(%eax),%ebx
080f5160 +0x0111:  mov    0x8(%ebp),%eax
080f5163 +0x0114:  add    $0x40,%eax
080f5166 +0x0117:  cmp    %eax,%ebx
080f5168 +0x0119:  je     080f5177 <+0x128>
080f516a +0x011b:  sub    $0xc,%ebx
080f516d +0x011e:  mov    %ebx,(%esp)
080f5170 +0x0121:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
080f5175 +0x0126:  jmp    080f5160 <+0x111>
080f5177 +0x0128:  mov    %edi,%eax
080f5179 +0x012a:  mov    %esi,%edx
080f517b +0x012c:  mov    %edx,%ebx
080f517d +0x012e:  mov    %eax,%esi
080f517f +0x0130:  mov    0x8(%ebp),%eax
080f5182 +0x0133:  add    $0x34,%eax
080f5185 +0x0136:  mov    %eax,(%esp)
080f5188 +0x0139:  call   080f53d6 <+0x387>
080f518d +0x013e:  mov    %esi,%eax
080f518f +0x0140:  mov    %ebx,%edx
080f5191 +0x0142:  jmp    080f5193 <+0x144>
080f5193 +0x0144:  mov    %edx,%ebx
080f5195 +0x0146:  mov    %eax,%esi
080f5197 +0x0148:  mov    0x8(%ebp),%eax
080f519a +0x014b:  add    $0x1c,%eax
080f519d +0x014e:  mov    %eax,(%esp)
080f51a0 +0x0151:  call   080f5090 <+0x41>
080f51a5 +0x0156:  mov    %esi,%eax
080f51a7 +0x0158:  mov    %ebx,%edx
080f51a9 +0x015a:  jmp    080f51ab <+0x15c>
080f51ab +0x015c:  mov    %edx,%ebx
080f51ad +0x015e:  mov    %eax,%esi
080f51af +0x0160:  mov    0x8(%ebp),%eax
080f51b2 +0x0163:  add    $0x4,%eax
080f51b5 +0x0166:  mov    %eax,(%esp)
080f51b8 +0x0169:  call   080f507c <+0x2d>
080f51bd +0x016e:  mov    %esi,%eax
080f51bf +0x0170:  mov    %ebx,%edx
080f51c1 +0x0172:  mov    %eax,(%esp)
080f51c4 +0x0175:  call   08ae3750 <_Unwind_Resume>
080f51c9 +0x017a:  add    $0x2c,%esp
080f51cc +0x017d:  pop    %ebx
080f51cd +0x017e:  pop    %esi
080f51ce +0x017f:  pop    %edi
080f51cf +0x0180:  pop    %ebp
080f51d0 +0x0181:  ret
080f51d1 +0x0182:  nop
080f51d2 +0x0183:  push   %ebp
080f51d3 +0x0184:  mov    %esp,%ebp
080f51d5 +0x0186:  push   %edi
080f51d6 +0x0187:  push   %esi
080f51d7 +0x0188:  push   %ebx
080f51d8 +0x0189:  sub    $0x1c,%esp
080f51db +0x018c:  mov    0x8(%ebp),%eax
080f51de +0x018f:  add    $0x74,%eax
080f51e1 +0x0192:  mov    %eax,(%esp)
080f51e4 +0x0195:  call   080f5448 <+0x3f9>
080f51e9 +0x019a:  jmp    080f521f <+0x1d0>
080f51eb +0x019c:  mov    %edx,%esi
080f51ed +0x019e:  mov    %eax,%edi
080f51ef +0x01a0:  mov    0x8(%ebp),%eax
080f51f2 +0x01a3:  add    $0x40,%eax
080f51f5 +0x01a6:  test   %eax,%eax
080f51f7 +0x01a8:  je     080f5219 <+0x1ca>
080f51f9 +0x01aa:  mov    0x8(%ebp),%eax
080f51fc +0x01ad:  add    $0x40,%eax
080f51ff +0x01b0:  lea    0x30(%eax),%ebx
080f5202 +0x01b3:  mov    0x8(%ebp),%eax
080f5205 +0x01b6:  add    $0x40,%eax
080f5208 +0x01b9:  cmp    %eax,%ebx
080f520a +0x01bb:  je     080f5219 <+0x1ca>
080f520c +0x01bd:  sub    $0xc,%ebx
080f520f +0x01c0:  mov    %ebx,(%esp)
080f5212 +0x01c3:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
080f5217 +0x01c8:  jmp    080f5202 <+0x1b3>
080f5219 +0x01ca:  mov    %edi,%eax
080f521b +0x01cc:  mov    %esi,%edx
080f521d +0x01ce:  jmp    080f5249 <+0x1fa>
080f521f +0x01d0:  mov    0x8(%ebp),%eax
080f5222 +0x01d3:  add    $0x40,%eax
080f5225 +0x01d6:  test   %eax,%eax
080f5227 +0x01d8:  je     080f5261 <+0x212>
080f5229 +0x01da:  mov    0x8(%ebp),%eax
080f522c +0x01dd:  add    $0x40,%eax
080f522f +0x01e0:  lea    0x30(%eax),%ebx
080f5232 +0x01e3:  mov    0x8(%ebp),%eax
080f5235 +0x01e6:  add    $0x40,%eax
080f5238 +0x01e9:  cmp    %eax,%ebx
080f523a +0x01eb:  je     080f5261 <+0x212>
080f523c +0x01ed:  sub    $0xc,%ebx
080f523f +0x01f0:  mov    %ebx,(%esp)
080f5242 +0x01f3:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
080f5247 +0x01f8:  jmp    080f5232 <+0x1e3>
080f5249 +0x01fa:  mov    %edx,%ebx
080f524b +0x01fc:  mov    %eax,%esi
080f524d +0x01fe:  mov    0x8(%ebp),%eax
080f5250 +0x0201:  add    $0x34,%eax
080f5253 +0x0204:  mov    %eax,(%esp)
080f5256 +0x0207:  call   080f53d6 <+0x387>
080f525b +0x020c:  mov    %esi,%eax
080f525d +0x020e:  mov    %ebx,%edx
080f525f +0x0210:  jmp    080f5271 <+0x222>
080f5261 +0x0212:  mov    0x8(%ebp),%eax
080f5264 +0x0215:  add    $0x34,%eax
080f5267 +0x0218:  mov    %eax,(%esp)
080f526a +0x021b:  call   080f53d6 <+0x387>
080f526f +0x0220:  jmp    080f5289 <+0x23a>
080f5271 +0x0222:  mov    %edx,%ebx
080f5273 +0x0224:  mov    %eax,%esi
080f5275 +0x0226:  mov    0x8(%ebp),%eax
080f5278 +0x0229:  add    $0x1c,%eax
080f527b +0x022c:  mov    %eax,(%esp)
080f527e +0x022f:  call   080f5090 <+0x41>
080f5283 +0x0234:  mov    %esi,%eax
080f5285 +0x0236:  mov    %ebx,%edx
080f5287 +0x0238:  jmp    080f5299 <+0x24a>
080f5289 +0x023a:  mov    0x8(%ebp),%eax
080f528c +0x023d:  add    $0x1c,%eax
080f528f +0x0240:  mov    %eax,(%esp)
080f5292 +0x0243:  call   080f5090 <+0x41>
080f5297 +0x0248:  jmp    080f52b7 <+0x268>
080f5299 +0x024a:  mov    %edx,%ebx
080f529b +0x024c:  mov    %eax,%esi
080f529d +0x024e:  mov    0x8(%ebp),%eax
080f52a0 +0x0251:  add    $0x4,%eax
080f52a3 +0x0254:  mov    %eax,(%esp)
080f52a6 +0x0257:  call   080f507c <+0x2d>
080f52ab +0x025c:  mov    %esi,%eax
080f52ad +0x025e:  mov    %ebx,%edx
080f52af +0x0260:  mov    %eax,(%esp)
080f52b2 +0x0263:  call   08ae3750 <_Unwind_Resume>
080f52b7 +0x0268:  mov    0x8(%ebp),%eax
080f52ba +0x026b:  add    $0x4,%eax
080f52bd +0x026e:  mov    %eax,(%esp)
080f52c0 +0x0271:  call   080f507c <+0x2d>
080f52c5 +0x0276:  add    $0x1c,%esp
080f52c8 +0x0279:  pop    %ebx
080f52c9 +0x027a:  pop    %esi
080f52ca +0x027b:  pop    %edi
080f52cb +0x027c:  pop    %ebp
080f52cc +0x027d:  ret
080f52cd +0x027e:  nop
080f52ce +0x027f:  push   %ebp
080f52cf +0x0280:  mov    %esp,%ebp
080f52d1 +0x0282:  sub    $0x18,%esp
080f52d4 +0x0285:  mov    0x8(%ebp),%eax
080f52d7 +0x0288:  mov    %eax,(%esp)
080f52da +0x028b:  call   080f5696 <+0x647>
080f52df +0x0290:  leave
080f52e0 +0x0291:  ret
080f52e1 +0x0292:  nop
080f52e2 +0x0293:  push   %ebp
080f52e3 +0x0294:  mov    %esp,%ebp
080f52e5 +0x0296:  sub    $0x18,%esp
080f52e8 +0x0299:  mov    0x8(%ebp),%eax
080f52eb +0x029c:  mov    %eax,(%esp)
080f52ee +0x029f:  call   080f56aa <+0x65b>
080f52f3 +0x02a4:  leave
080f52f4 +0x02a5:  ret
080f52f5 +0x02a6:  nop
080f52f6 +0x02a7:  push   %ebp
080f52f7 +0x02a8:  mov    %esp,%ebp
080f52f9 +0x02aa:  push   %esi
080f52fa +0x02ab:  push   %ebx
080f52fb +0x02ac:  sub    $0x10,%esp
080f52fe +0x02af:  mov    0x8(%ebp),%eax
080f5301 +0x02b2:  mov    %eax,(%esp)
080f5304 +0x02b5:  call   080f5714 <+0x6c5>
080f5309 +0x02ba:  mov    %eax,0x4(%esp)
080f530d +0x02be:  mov    0x8(%ebp),%eax
080f5310 +0x02c1:  mov    %eax,(%esp)
080f5313 +0x02c4:  call   080f56be <+0x66f>
080f5318 +0x02c9:  jmp    080f5335 <+0x2e6>
080f531a +0x02cb:  mov    %edx,%ebx
080f531c +0x02cd:  mov    %eax,%esi
080f531e +0x02cf:  mov    0x8(%ebp),%eax
080f5321 +0x02d2:  mov    %eax,(%esp)
080f5324 +0x02d5:  call   080f52e2 <+0x293>
080f5329 +0x02da:  mov    %esi,%eax
080f532b +0x02dc:  mov    %ebx,%edx
080f532d +0x02de:  mov    %eax,(%esp)
080f5330 +0x02e1:  call   08ae3750 <_Unwind_Resume>
080f5335 +0x02e6:  mov    0x8(%ebp),%eax
080f5338 +0x02e9:  mov    %eax,(%esp)
080f533b +0x02ec:  call   080f52e2 <+0x293>
080f5340 +0x02f1:  add    $0x10,%esp
080f5343 +0x02f4:  pop    %ebx
080f5344 +0x02f5:  pop    %esi
080f5345 +0x02f6:  pop    %ebp
080f5346 +0x02f7:  ret
080f5347 +0x02f8:  nop
080f5348 +0x02f9:  push   %ebp
080f5349 +0x02fa:  mov    %esp,%ebp
080f534b +0x02fc:  sub    $0x18,%esp
080f534e +0x02ff:  mov    0x8(%ebp),%eax
080f5351 +0x0302:  mov    %eax,(%esp)
080f5354 +0x0305:  call   080f5720 <+0x6d1>
080f5359 +0x030a:  leave
080f535a +0x030b:  ret
080f535b +0x030c:  nop
080f535c +0x030d:  push   %ebp
080f535d +0x030e:  mov    %esp,%ebp
080f535f +0x0310:  sub    $0x18,%esp
080f5362 +0x0313:  mov    0x8(%ebp),%eax
080f5365 +0x0316:  mov    %eax,(%esp)
080f5368 +0x0319:  call   080f5734 <+0x6e5>
080f536d +0x031e:  leave
080f536e +0x031f:  ret
080f536f +0x0320:  nop
080f5370 +0x0321:  push   %ebp
080f5371 +0x0322:  mov    %esp,%ebp
080f5373 +0x0324:  push   %esi
080f5374 +0x0325:  push   %ebx
080f5375 +0x0326:  sub    $0x10,%esp
080f5378 +0x0329:  mov    0x8(%ebp),%eax
080f537b +0x032c:  mov    %eax,(%esp)
080f537e +0x032f:  call   080f579e <+0x74f>
080f5383 +0x0334:  mov    %eax,0x4(%esp)
080f5387 +0x0338:  mov    0x8(%ebp),%eax
080f538a +0x033b:  mov    %eax,(%esp)
080f538d +0x033e:  call   080f5748 <+0x6f9>
080f5392 +0x0343:  jmp    080f53af <+0x360>
080f5394 +0x0345:  mov    %edx,%ebx
080f5396 +0x0347:  mov    %eax,%esi
080f5398 +0x0349:  mov    0x8(%ebp),%eax
080f539b +0x034c:  mov    %eax,(%esp)
080f539e +0x034f:  call   080f535c <+0x30d>
080f53a3 +0x0354:  mov    %esi,%eax
080f53a5 +0x0356:  mov    %ebx,%edx
080f53a7 +0x0358:  mov    %eax,(%esp)
080f53aa +0x035b:  call   08ae3750 <_Unwind_Resume>
080f53af +0x0360:  mov    0x8(%ebp),%eax
080f53b2 +0x0363:  mov    %eax,(%esp)
080f53b5 +0x0366:  call   080f535c <+0x30d>
080f53ba +0x036b:  add    $0x10,%esp
080f53bd +0x036e:  pop    %ebx
080f53be +0x036f:  pop    %esi
080f53bf +0x0370:  pop    %ebp
080f53c0 +0x0371:  ret
080f53c1 +0x0372:  nop
080f53c2 +0x0373:  push   %ebp
080f53c3 +0x0374:  mov    %esp,%ebp
080f53c5 +0x0376:  sub    $0x18,%esp
080f53c8 +0x0379:  mov    0x8(%ebp),%eax
080f53cb +0x037c:  mov    %eax,(%esp)
080f53ce +0x037f:  call   080f57be <+0x76f>
080f53d3 +0x0384:  leave
080f53d4 +0x0385:  ret
080f53d5 +0x0386:  nop
080f53d6 +0x0387:  push   %ebp
080f53d7 +0x0388:  mov    %esp,%ebp
080f53d9 +0x038a:  push   %esi
080f53da +0x038b:  push   %ebx
080f53db +0x038c:  sub    $0x10,%esp
080f53de +0x038f:  mov    0x8(%ebp),%eax
080f53e1 +0x0392:  mov    %eax,(%esp)
080f53e4 +0x0395:  call   080f583a <+0x7eb>
080f53e9 +0x039a:  mov    0x8(%ebp),%edx
080f53ec +0x039d:  mov    0x4(%edx),%ecx
080f53ef +0x03a0:  mov    0x8(%ebp),%edx
080f53f2 +0x03a3:  mov    (%edx),%edx
080f53f4 +0x03a5:  mov    %eax,0x8(%esp)
080f53f8 +0x03a9:  mov    %ecx,0x4(%esp)
080f53fc +0x03ad:  mov    %edx,(%esp)
080f53ff +0x03b0:  call   080f5842 <+0x7f3>
080f5404 +0x03b5:  jmp    080f5421 <+0x3d2>
080f5406 +0x03b7:  mov    %edx,%ebx
080f5408 +0x03b9:  mov    %eax,%esi
080f540a +0x03bb:  mov    0x8(%ebp),%eax
080f540d +0x03be:  mov    %eax,(%esp)
080f5410 +0x03c1:  call   080f57d2 <+0x783>
080f5415 +0x03c6:  mov    %esi,%eax
080f5417 +0x03c8:  mov    %ebx,%edx
080f5419 +0x03ca:  mov    %eax,(%esp)
080f541c +0x03cd:  call   08ae3750 <_Unwind_Resume>
080f5421 +0x03d2:  mov    0x8(%ebp),%eax
080f5424 +0x03d5:  mov    %eax,(%esp)
080f5427 +0x03d8:  call   080f57d2 <+0x783>
080f542c +0x03dd:  add    $0x10,%esp
080f542f +0x03e0:  pop    %ebx
080f5430 +0x03e1:  pop    %esi
080f5431 +0x03e2:  pop    %ebp
080f5432 +0x03e3:  ret
080f5433 +0x03e4:  nop
080f5434 +0x03e5:  push   %ebp
080f5435 +0x03e6:  mov    %esp,%ebp
080f5437 +0x03e8:  sub    $0x18,%esp
080f543a +0x03eb:  mov    0x8(%ebp),%eax
080f543d +0x03ee:  mov    %eax,(%esp)
080f5440 +0x03f1:  call   080f5870 <+0x821>
080f5445 +0x03f6:  leave
080f5446 +0x03f7:  ret
080f5447 +0x03f8:  nop
080f5448 +0x03f9:  push   %ebp
080f5449 +0x03fa:  mov    %esp,%ebp
080f544b +0x03fc:  push   %esi
080f544c +0x03fd:  push   %ebx
080f544d +0x03fe:  sub    $0x10,%esp
080f5450 +0x0401:  mov    0x8(%ebp),%eax
080f5453 +0x0404:  mov    %eax,(%esp)
080f5456 +0x0407:  call   080f58ec <+0x89d>
080f545b +0x040c:  mov    0x8(%ebp),%edx
080f545e +0x040f:  mov    0x4(%edx),%ecx
080f5461 +0x0412:  mov    0x8(%ebp),%edx
080f5464 +0x0415:  mov    (%edx),%edx
080f5466 +0x0417:  mov    %eax,0x8(%esp)
080f546a +0x041b:  mov    %ecx,0x4(%esp)
080f546e +0x041f:  mov    %edx,(%esp)
080f5471 +0x0422:  call   080f58f4 <+0x8a5>
080f5476 +0x0427:  jmp    080f5493 <+0x444>
080f5478 +0x0429:  mov    %edx,%ebx
080f547a +0x042b:  mov    %eax,%esi
080f547c +0x042d:  mov    0x8(%ebp),%eax
080f547f +0x0430:  mov    %eax,(%esp)
080f5482 +0x0433:  call   080f5884 <+0x835>
080f5487 +0x0438:  mov    %esi,%eax
080f5489 +0x043a:  mov    %ebx,%edx
080f548b +0x043c:  mov    %eax,(%esp)
080f548e +0x043f:  call   08ae3750 <_Unwind_Resume>
080f5493 +0x0444:  mov    0x8(%ebp),%eax
080f5496 +0x0447:  mov    %eax,(%esp)
080f5499 +0x044a:  call   080f5884 <+0x835>
080f549e +0x044f:  add    $0x10,%esp
080f54a1 +0x0452:  pop    %ebx
080f54a2 +0x0453:  pop    %esi
080f54a3 +0x0454:  pop    %ebp
080f54a4 +0x0455:  ret
080f54a5 +0x0456:  nop
080f54a6 +0x0457:  push   %ebp
080f54a7 +0x0458:  mov    %esp,%ebp
080f54a9 +0x045a:  push   %ebx
080f54aa +0x045b:  sub    $0x14,%esp
080f54ad +0x045e:  mov    0x8(%ebp),%ebx
080f54b0 +0x0461:  mov    0xc(%ebp),%eax
080f54b3 +0x0464:  mov    0x10(%ebp),%edx
080f54b6 +0x0467:  mov    %edx,0x8(%esp)
080f54ba +0x046b:  mov    %eax,0x4(%esp)
080f54be +0x046f:  mov    %ebx,(%esp)
080f54c1 +0x0472:  call   080f590e <+0x8bf>
080f54c6 +0x0477:  sub    $0x4,%esp
080f54c9 +0x047a:  mov    %ebx,%eax
080f54cb +0x047c:  mov    -0x4(%ebp),%ebx
080f54ce +0x047f:  leave
080f54cf +0x0480:  ret    $0x4
080f54d2 +0x0483:  push   %ebp
080f54d3 +0x0484:  mov    %esp,%ebp
080f54d5 +0x0486:  push   %ebx
080f54d6 +0x0487:  sub    $0x14,%esp
080f54d9 +0x048a:  mov    0x8(%ebp),%ebx
080f54dc +0x048d:  mov    0xc(%ebp),%eax
080f54df +0x0490:  mov    %eax,0x4(%esp)
080f54e3 +0x0494:  mov    %ebx,(%esp)
080f54e6 +0x0497:  call   080f59cc <+0x97d>
080f54eb +0x049c:  sub    $0x4,%esp
080f54ee +0x049f:  mov    %ebx,%eax
080f54f0 +0x04a1:  mov    -0x4(%ebp),%ebx
080f54f3 +0x04a4:  leave
080f54f4 +0x04a5:  ret    $0x4
080f54f7 +0x04a8:  nop
080f54f8 +0x04a9:  push   %ebp
080f54f9 +0x04aa:  mov    %esp,%ebp
080f54fb +0x04ac:  mov    0x8(%ebp),%eax
080f54fe +0x04af:  mov    (%eax),%edx
080f5500 +0x04b1:  mov    0xc(%ebp),%eax
080f5503 +0x04b4:  mov    (%eax),%eax
080f5505 +0x04b6:  cmp    %eax,%edx
080f5507 +0x04b8:  setne  %al
080f550a +0x04bb:  pop    %ebp
080f550b +0x04bc:  ret
080f550c +0x04bd:  push   %ebp
080f550d +0x04be:  mov    %esp,%ebp
080f550f +0x04c0:  mov    0x8(%ebp),%eax
080f5512 +0x04c3:  mov    (%eax),%eax
080f5514 +0x04c5:  add    $0x10,%eax
080f5517 +0x04c8:  pop    %ebp
080f5518 +0x04c9:  ret
080f5519 +0x04ca:  push   %ebp
080f551a +0x04cb:  mov    %esp,%ebp
080f551c +0x04cd:  push   %esi
080f551d +0x04ce:  push   %ebx
080f551e +0x04cf:  sub    $0x10,%esp
080f5521 +0x04d2:  mov    0x8(%ebp),%esi
080f5524 +0x04d5:  mov    0x10(%ebp),%eax
080f5527 +0x04d8:  mov    %eax,(%esp)
080f552a +0x04db:  call   080f59f2 <+0x9a3>
080f552f +0x04e0:  mov    %eax,%ebx
080f5531 +0x04e2:  mov    0xc(%ebp),%eax
080f5534 +0x04e5:  mov    %eax,(%esp)
080f5537 +0x04e8:  call   080f59f2 <+0x9a3>
080f553c +0x04ed:  mov    %ebx,0x8(%esp)
080f5540 +0x04f1:  mov    %eax,0x4(%esp)
080f5544 +0x04f5:  mov    %esi,(%esp)
080f5547 +0x04f8:  call   080f59fa <+0x9ab>
080f554c +0x04fd:  mov    %esi,%eax
080f554e +0x04ff:  add    $0x10,%esp
080f5551 +0x0502:  pop    %ebx
080f5552 +0x0503:  pop    %esi
080f5553 +0x0504:  pop    %ebp
080f5554 +0x0505:  ret    $0x4
080f5557 +0x0508:  nop
080f5558 +0x0509:  push   %ebp
080f5559 +0x050a:  mov    %esp,%ebp
080f555b +0x050c:  sub    $0x18,%esp
080f555e +0x050f:  mov    0xc(%ebp),%eax
080f5561 +0x0512:  mov    %eax,(%esp)
080f5564 +0x0515:  call   080f5a2b <+0x9dc>
080f5569 +0x051a:  movzwl (%eax),%eax
080f556c +0x051d:  movswl %ax,%edx
080f556f +0x0520:  mov    0x8(%ebp),%eax
080f5572 +0x0523:  mov    %edx,(%eax)
080f5574 +0x0525:  mov    0xc(%ebp),%eax
080f5577 +0x0528:  add    $0x2,%eax
080f557a +0x052b:  mov    %eax,(%esp)
080f557d +0x052e:  call   080f5a2b <+0x9dc>
080f5582 +0x0533:  movzwl (%eax),%eax
080f5585 +0x0536:  movswl %ax,%edx
080f5588 +0x0539:  mov    0x8(%ebp),%eax
080f558b +0x053c:  mov    %edx,0x4(%eax)
080f558e +0x053f:  leave
080f558f +0x0540:  ret
080f5590 +0x0541:  push   %ebp
080f5591 +0x0542:  mov    %esp,%ebp
080f5593 +0x0544:  push   %ebx
080f5594 +0x0545:  sub    $0x14,%esp
080f5597 +0x0548:  mov    0x8(%ebp),%ebx
080f559a +0x054b:  mov    0xc(%ebp),%eax
080f559d +0x054e:  mov    0x10(%ebp),%edx
080f55a0 +0x0551:  mov    %edx,0x8(%esp)
080f55a4 +0x0555:  mov    %eax,0x4(%esp)
080f55a8 +0x0559:  mov    %ebx,(%esp)
080f55ab +0x055c:  call   080f5a34 <+0x9e5>
080f55b0 +0x0561:  sub    $0x4,%esp
080f55b3 +0x0564:  mov    %ebx,%eax
080f55b5 +0x0566:  mov    -0x4(%ebp),%ebx
080f55b8 +0x0569:  leave
080f55b9 +0x056a:  ret    $0x4
080f55bc +0x056d:  push   %ebp
080f55bd +0x056e:  mov    %esp,%ebp
080f55bf +0x0570:  push   %ebx
080f55c0 +0x0571:  sub    $0x14,%esp
080f55c3 +0x0574:  mov    0x8(%ebp),%ebx
080f55c6 +0x0577:  mov    0xc(%ebp),%eax
080f55c9 +0x057a:  mov    %eax,0x4(%esp)
080f55cd +0x057e:  mov    %ebx,(%esp)
080f55d0 +0x0581:  call   080f5af2 <+0xaa3>
080f55d5 +0x0586:  sub    $0x4,%esp
080f55d8 +0x0589:  mov    %ebx,%eax
080f55da +0x058b:  mov    -0x4(%ebp),%ebx
080f55dd +0x058e:  leave
080f55de +0x058f:  ret    $0x4
080f55e1 +0x0592:  nop
080f55e2 +0x0593:  push   %ebp
080f55e3 +0x0594:  mov    %esp,%ebp
080f55e5 +0x0596:  mov    0x8(%ebp),%eax
080f55e8 +0x0599:  mov    (%eax),%edx
080f55ea +0x059b:  mov    0xc(%ebp),%eax
080f55ed +0x059e:  mov    (%eax),%eax
080f55ef +0x05a0:  cmp    %eax,%edx
080f55f1 +0x05a2:  setne  %al
080f55f4 +0x05a5:  pop    %ebp
080f55f5 +0x05a6:  ret
080f55f6 +0x05a7:  push   %ebp
080f55f7 +0x05a8:  mov    %esp,%ebp
080f55f9 +0x05aa:  mov    0x8(%ebp),%eax
080f55fc +0x05ad:  mov    (%eax),%eax
080f55fe +0x05af:  add    $0x10,%eax
080f5601 +0x05b2:  pop    %ebp
080f5602 +0x05b3:  ret
080f5603 +0x05b4:  nop
080f5604 +0x05b5:  push   %ebp
080f5605 +0x05b6:  mov    %esp,%ebp
080f5607 +0x05b8:  mov    0x8(%ebp),%eax
080f560a +0x05bb:  mov    0x4(%eax),%eax
080f560d +0x05be:  mov    %eax,%edx
080f560f +0x05c0:  mov    0x8(%ebp),%eax
080f5612 +0x05c3:  mov    (%eax),%eax
080f5614 +0x05c5:  mov    %edx,%ecx
080f5616 +0x05c7:  sub    %eax,%ecx
080f5618 +0x05c9:  mov    %ecx,%eax
080f561a +0x05cb:  sar    $0x2,%eax
080f561d +0x05ce:  pop    %ebp
080f561e +0x05cf:  ret
080f561f +0x05d0:  nop
080f5620 +0x05d1:  push   %ebp
080f5621 +0x05d2:  mov    %esp,%ebp
080f5623 +0x05d4:  mov    0x8(%ebp),%eax
080f5626 +0x05d7:  mov    (%eax),%eax
080f5628 +0x05d9:  mov    0xc(%ebp),%edx
080f562b +0x05dc:  shl    $0x2,%edx
080f562e +0x05df:  add    %edx,%eax
080f5630 +0x05e1:  pop    %ebp
080f5631 +0x05e2:  ret
080f5632 +0x05e3:  push   %ebp
080f5633 +0x05e4:  mov    %esp,%ebp
080f5635 +0x05e6:  mov    0x8(%ebp),%eax
080f5638 +0x05e9:  mov    (%eax),%eax
080f563a +0x05eb:  mov    0xc(%ebp),%edx
080f563d +0x05ee:  shl    $0x2,%edx
080f5640 +0x05f1:  add    %edx,%eax
080f5642 +0x05f3:  pop    %ebp
080f5643 +0x05f4:  ret
080f5644 +0x05f5:  push   %ebp
080f5645 +0x05f6:  mov    %esp,%ebp
080f5647 +0x05f8:  mov    0x8(%ebp),%eax
080f564a +0x05fb:  mov    0x4(%eax),%eax
080f564d +0x05fe:  mov    %eax,%edx
080f564f +0x0600:  mov    0x8(%ebp),%eax
080f5652 +0x0603:  mov    (%eax),%eax
080f5654 +0x0605:  mov    %edx,%ecx
080f5656 +0x0607:  sub    %eax,%ecx
080f5658 +0x0609:  mov    %ecx,%eax
080f565a +0x060b:  sar    $0x3,%eax
080f565d +0x060e:  pop    %ebp
080f565e +0x060f:  ret
080f565f +0x0610:  nop
080f5660 +0x0611:  push   %ebp
080f5661 +0x0612:  mov    %esp,%ebp
080f5663 +0x0614:  mov    0x8(%ebp),%eax
080f5666 +0x0617:  mov    (%eax),%eax
080f5668 +0x0619:  mov    0xc(%ebp),%edx
080f566b +0x061c:  shl    $0x3,%edx
080f566e +0x061f:  add    %edx,%eax
080f5670 +0x0621:  pop    %ebp
080f5671 +0x0622:  ret
080f5672 +0x0623:  push   %ebp
080f5673 +0x0624:  mov    %esp,%ebp
080f5675 +0x0626:  mov    0x8(%ebp),%eax
080f5678 +0x0629:  mov    (%eax),%eax
080f567a +0x062b:  mov    0xc(%ebp),%edx
080f567d +0x062e:  shl    $0x3,%edx
080f5680 +0x0631:  add    %edx,%eax
080f5682 +0x0633:  pop    %ebp
080f5683 +0x0634:  ret
080f5684 +0x0635:  push   %ebp
080f5685 +0x0636:  mov    %esp,%ebp
080f5687 +0x0638:  mov    0x8(%ebp),%eax
080f568a +0x063b:  mov    (%eax),%eax
080f568c +0x063d:  mov    0xc(%ebp),%edx
080f568f +0x0640:  shl    $0x2,%edx
080f5692 +0x0643:  add    %edx,%eax
080f5694 +0x0645:  pop    %ebp
080f5695 +0x0646:  ret
080f5696 +0x0647:  push   %ebp
080f5697 +0x0648:  mov    %esp,%ebp
080f5699 +0x064a:  sub    $0x18,%esp
080f569c +0x064d:  mov    0x8(%ebp),%eax
080f569f +0x0650:  mov    %eax,(%esp)
080f56a2 +0x0653:  call   080f5b2c <+0xadd>
080f56a7 +0x0658:  leave
080f56a8 +0x0659:  ret
080f56a9 +0x065a:  nop
080f56aa +0x065b:  push   %ebp
080f56ab +0x065c:  mov    %esp,%ebp
080f56ad +0x065e:  sub    $0x18,%esp
080f56b0 +0x0661:  mov    0x8(%ebp),%eax
080f56b3 +0x0664:  mov    %eax,(%esp)
080f56b6 +0x0667:  call   080f5b7c <+0xb2d>
080f56bb +0x066c:  leave
080f56bc +0x066d:  ret
080f56bd +0x066e:  nop
080f56be +0x066f:  push   %ebp
080f56bf +0x0670:  mov    %esp,%ebp
080f56c1 +0x0672:  sub    $0x28,%esp
080f56c4 +0x0675:  jmp    080f5706 <+0x6b7>
080f56c6 +0x0677:  mov    0xc(%ebp),%eax
080f56c9 +0x067a:  mov    %eax,(%esp)
080f56cc +0x067d:  call   080f5b81 <+0xb32>
080f56d1 +0x0682:  mov    %eax,0x4(%esp)
080f56d5 +0x0686:  mov    0x8(%ebp),%eax
080f56d8 +0x0689:  mov    %eax,(%esp)
080f56db +0x068c:  call   080f56be <+0x66f>
080f56e0 +0x0691:  mov    0xc(%ebp),%eax
080f56e3 +0x0694:  mov    %eax,(%esp)
080f56e6 +0x0697:  call   080f5b8c <+0xb3d>
080f56eb +0x069c:  mov    %eax,-0xc(%ebp)
080f56ee +0x069f:  mov    0xc(%ebp),%eax
080f56f1 +0x06a2:  mov    %eax,0x4(%esp)
080f56f5 +0x06a6:  mov    0x8(%ebp),%eax
080f56f8 +0x06a9:  mov    %eax,(%esp)
080f56fb +0x06ac:  call   080f5b98 <+0xb49>
080f5700 +0x06b1:  mov    -0xc(%ebp),%eax
080f5703 +0x06b4:  mov    %eax,0xc(%ebp)
080f5706 +0x06b7:  cmpl   $0x0,0xc(%ebp)
080f570a +0x06bb:  setne  %al
080f570d +0x06be:  test   %al,%al
080f570f +0x06c0:  jne    080f56c6 <+0x677>
080f5711 +0x06c2:  leave
080f5712 +0x06c3:  ret
080f5713 +0x06c4:  nop
080f5714 +0x06c5:  push   %ebp
080f5715 +0x06c6:  mov    %esp,%ebp
080f5717 +0x06c8:  mov    0x8(%ebp),%eax
080f571a +0x06cb:  mov    0x8(%eax),%eax
080f571d +0x06ce:  pop    %ebp
080f571e +0x06cf:  ret
080f571f +0x06d0:  nop
080f5720 +0x06d1:  push   %ebp
080f5721 +0x06d2:  mov    %esp,%ebp
080f5723 +0x06d4:  sub    $0x18,%esp
080f5726 +0x06d7:  mov    0x8(%ebp),%eax
080f5729 +0x06da:  mov    %eax,(%esp)
080f572c +0x06dd:  call   080f5bcc <+0xb7d>
080f5731 +0x06e2:  leave
080f5732 +0x06e3:  ret
080f5733 +0x06e4:  nop
080f5734 +0x06e5:  push   %ebp
080f5735 +0x06e6:  mov    %esp,%ebp
080f5737 +0x06e8:  sub    $0x18,%esp
080f573a +0x06eb:  mov    0x8(%ebp),%eax
080f573d +0x06ee:  mov    %eax,(%esp)
080f5740 +0x06f1:  call   080f5c1c <+0xbcd>
080f5745 +0x06f6:  leave
080f5746 +0x06f7:  ret
080f5747 +0x06f8:  nop
080f5748 +0x06f9:  push   %ebp
080f5749 +0x06fa:  mov    %esp,%ebp
080f574b +0x06fc:  sub    $0x28,%esp
080f574e +0x06ff:  jmp    080f5790 <+0x741>
080f5750 +0x0701:  mov    0xc(%ebp),%eax
080f5753 +0x0704:  mov    %eax,(%esp)
080f5756 +0x0707:  call   080f5c21 <+0xbd2>
080f575b +0x070c:  mov    %eax,0x4(%esp)
080f575f +0x0710:  mov    0x8(%ebp),%eax
080f5762 +0x0713:  mov    %eax,(%esp)
080f5765 +0x0716:  call   080f5748 <+0x6f9>
080f576a +0x071b:  mov    0xc(%ebp),%eax
080f576d +0x071e:  mov    %eax,(%esp)
080f5770 +0x0721:  call   080f5c2c <+0xbdd>
080f5775 +0x0726:  mov    %eax,-0xc(%ebp)
080f5778 +0x0729:  mov    0xc(%ebp),%eax
080f577b +0x072c:  mov    %eax,0x4(%esp)
080f577f +0x0730:  mov    0x8(%ebp),%eax
080f5782 +0x0733:  mov    %eax,(%esp)
080f5785 +0x0736:  call   080f5c38 <+0xbe9>
080f578a +0x073b:  mov    -0xc(%ebp),%eax
080f578d +0x073e:  mov    %eax,0xc(%ebp)
080f5790 +0x0741:  cmpl   $0x0,0xc(%ebp)
080f5794 +0x0745:  setne  %al
080f5797 +0x0748:  test   %al,%al
080f5799 +0x074a:  jne    080f5750 <+0x701>
080f579b +0x074c:  leave
080f579c +0x074d:  ret
080f579d +0x074e:  nop
080f579e +0x074f:  push   %ebp
080f579f +0x0750:  mov    %esp,%ebp
080f57a1 +0x0752:  mov    0x8(%ebp),%eax
080f57a4 +0x0755:  mov    0x8(%eax),%eax
080f57a7 +0x0758:  pop    %ebp
080f57a8 +0x0759:  ret
080f57a9 +0x075a:  nop
080f57aa +0x075b:  push   %ebp
080f57ab +0x075c:  mov    %esp,%ebp
080f57ad +0x075e:  sub    $0x18,%esp
080f57b0 +0x0761:  mov    0x8(%ebp),%eax
080f57b3 +0x0764:  mov    %eax,(%esp)
080f57b6 +0x0767:  call   080f5c9c <+0xc4d>
080f57bb +0x076c:  leave
080f57bc +0x076d:  ret
080f57bd +0x076e:  nop
080f57be +0x076f:  push   %ebp
080f57bf +0x0770:  mov    %esp,%ebp
080f57c1 +0x0772:  sub    $0x18,%esp
080f57c4 +0x0775:  mov    0x8(%ebp),%eax
080f57c7 +0x0778:  mov    %eax,(%esp)
080f57ca +0x077b:  call   080f5c6c <+0xc1d>
080f57cf +0x0780:  leave
080f57d0 +0x0781:  ret
080f57d1 +0x0782:  nop
080f57d2 +0x0783:  push   %ebp
080f57d3 +0x0784:  mov    %esp,%ebp
080f57d5 +0x0786:  push   %esi
080f57d6 +0x0787:  push   %ebx
080f57d7 +0x0788:  sub    $0x10,%esp
080f57da +0x078b:  mov    0x8(%ebp),%eax
080f57dd +0x078e:  mov    0x8(%eax),%eax
080f57e0 +0x0791:  mov    %eax,%edx
080f57e2 +0x0793:  mov    0x8(%ebp),%eax
080f57e5 +0x0796:  mov    (%eax),%eax
080f57e7 +0x0798:  mov    %edx,%ecx
080f57e9 +0x079a:  sub    %eax,%ecx
080f57eb +0x079c:  mov    %ecx,%eax
080f57ed +0x079e:  sar    $0x2,%eax
080f57f0 +0x07a1:  mov    %eax,%edx
080f57f2 +0x07a3:  mov    0x8(%ebp),%eax
080f57f5 +0x07a6:  mov    (%eax),%eax
080f57f7 +0x07a8:  mov    %edx,0x8(%esp)
080f57fb +0x07ac:  mov    %eax,0x4(%esp)
080f57ff +0x07b0:  mov    0x8(%ebp),%eax
080f5802 +0x07b3:  mov    %eax,(%esp)
080f5805 +0x07b6:  call   080f5cb0 <+0xc61>
080f580a +0x07bb:  jmp    080f5827 <+0x7d8>
080f580c +0x07bd:  mov    %edx,%ebx
080f580e +0x07bf:  mov    %eax,%esi
080f5810 +0x07c1:  mov    0x8(%ebp),%eax
080f5813 +0x07c4:  mov    %eax,(%esp)
080f5816 +0x07c7:  call   080f57aa <+0x75b>
080f581b +0x07cc:  mov    %esi,%eax
080f581d +0x07ce:  mov    %ebx,%edx
080f581f +0x07d0:  mov    %eax,(%esp)
080f5822 +0x07d3:  call   08ae3750 <_Unwind_Resume>
080f5827 +0x07d8:  mov    0x8(%ebp),%eax
080f582a +0x07db:  mov    %eax,(%esp)
080f582d +0x07de:  call   080f57aa <+0x75b>
080f5832 +0x07e3:  add    $0x10,%esp
080f5835 +0x07e6:  pop    %ebx
080f5836 +0x07e7:  pop    %esi
080f5837 +0x07e8:  pop    %ebp
080f5838 +0x07e9:  ret
080f5839 +0x07ea:  nop
080f583a +0x07eb:  push   %ebp
080f583b +0x07ec:  mov    %esp,%ebp
080f583d +0x07ee:  mov    0x8(%ebp),%eax
080f5840 +0x07f1:  pop    %ebp
080f5841 +0x07f2:  ret
080f5842 +0x07f3:  push   %ebp
080f5843 +0x07f4:  mov    %esp,%ebp
080f5845 +0x07f6:  sub    $0x18,%esp
080f5848 +0x07f9:  mov    0xc(%ebp),%eax
080f584b +0x07fc:  mov    %eax,0x4(%esp)
080f584f +0x0800:  mov    0x8(%ebp),%eax
080f5852 +0x0803:  mov    %eax,(%esp)
080f5855 +0x0806:  call   080f5cd7 <+0xc88>
080f585a +0x080b:  leave
080f585b +0x080c:  ret
080f585c +0x080d:  push   %ebp
080f585d +0x080e:  mov    %esp,%ebp
080f585f +0x0810:  sub    $0x18,%esp
080f5862 +0x0813:  mov    0x8(%ebp),%eax
080f5865 +0x0816:  mov    %eax,(%esp)
080f5868 +0x0819:  call   080f5d22 <+0xcd3>
080f586d +0x081e:  leave
080f586e +0x081f:  ret
080f586f +0x0820:  nop
080f5870 +0x0821:  push   %ebp
080f5871 +0x0822:  mov    %esp,%ebp
080f5873 +0x0824:  sub    $0x18,%esp
080f5876 +0x0827:  mov    0x8(%ebp),%eax
080f5879 +0x082a:  mov    %eax,(%esp)
080f587c +0x082d:  call   080f5cf2 <+0xca3>
080f5881 +0x0832:  leave
080f5882 +0x0833:  ret
080f5883 +0x0834:  nop
080f5884 +0x0835:  push   %ebp
080f5885 +0x0836:  mov    %esp,%ebp
080f5887 +0x0838:  push   %esi
080f5888 +0x0839:  push   %ebx
080f5889 +0x083a:  sub    $0x10,%esp
080f588c +0x083d:  mov    0x8(%ebp),%eax
080f588f +0x0840:  mov    0x8(%eax),%eax
080f5892 +0x0843:  mov    %eax,%edx
080f5894 +0x0845:  mov    0x8(%ebp),%eax
080f5897 +0x0848:  mov    (%eax),%eax
080f5899 +0x084a:  mov    %edx,%ecx
080f589b +0x084c:  sub    %eax,%ecx
080f589d +0x084e:  mov    %ecx,%eax
080f589f +0x0850:  sar    $0x3,%eax
080f58a2 +0x0853:  mov    %eax,%edx
080f58a4 +0x0855:  mov    0x8(%ebp),%eax
080f58a7 +0x0858:  mov    (%eax),%eax
080f58a9 +0x085a:  mov    %edx,0x8(%esp)
080f58ad +0x085e:  mov    %eax,0x4(%esp)
080f58b1 +0x0862:  mov    0x8(%ebp),%eax
080f58b4 +0x0865:  mov    %eax,(%esp)
080f58b7 +0x0868:  call   080f5d36 <+0xce7>
080f58bc +0x086d:  jmp    080f58d9 <+0x88a>
080f58be +0x086f:  mov    %edx,%ebx
080f58c0 +0x0871:  mov    %eax,%esi
080f58c2 +0x0873:  mov    0x8(%ebp),%eax
080f58c5 +0x0876:  mov    %eax,(%esp)
080f58c8 +0x0879:  call   080f585c <+0x80d>
080f58cd +0x087e:  mov    %esi,%eax
080f58cf +0x0880:  mov    %ebx,%edx
080f58d1 +0x0882:  mov    %eax,(%esp)
080f58d4 +0x0885:  call   08ae3750 <_Unwind_Resume>
080f58d9 +0x088a:  mov    0x8(%ebp),%eax
080f58dc +0x088d:  mov    %eax,(%esp)
080f58df +0x0890:  call   080f585c <+0x80d>
080f58e4 +0x0895:  add    $0x10,%esp
080f58e7 +0x0898:  pop    %ebx
080f58e8 +0x0899:  pop    %esi
080f58e9 +0x089a:  pop    %ebp
080f58ea +0x089b:  ret
080f58eb +0x089c:  nop
080f58ec +0x089d:  push   %ebp
080f58ed +0x089e:  mov    %esp,%ebp
080f58ef +0x08a0:  mov    0x8(%ebp),%eax
080f58f2 +0x08a3:  pop    %ebp
080f58f3 +0x08a4:  ret
080f58f4 +0x08a5:  push   %ebp
080f58f5 +0x08a6:  mov    %esp,%ebp
080f58f7 +0x08a8:  sub    $0x18,%esp
080f58fa +0x08ab:  mov    0xc(%ebp),%eax
080f58fd +0x08ae:  mov    %eax,0x4(%esp)
080f5901 +0x08b2:  mov    0x8(%ebp),%eax
080f5904 +0x08b5:  mov    %eax,(%esp)
080f5907 +0x08b8:  call   080f5d5d <+0xd0e>
080f590c +0x08bd:  leave
080f590d +0x08be:  ret
080f590e +0x08bf:  push   %ebp
080f590f +0x08c0:  mov    %esp,%ebp
080f5911 +0x08c2:  push   %esi
080f5912 +0x08c3:  push   %ebx
080f5913 +0x08c4:  sub    $0x30,%esp
080f5916 +0x08c7:  mov    0x8(%ebp),%ebx
080f5919 +0x08ca:  mov    0xc(%ebp),%eax
080f591c +0x08cd:  mov    %eax,(%esp)
080f591f +0x08d0:  call   080f5d78 <+0xd29>
080f5924 +0x08d5:  mov    %eax,%esi
080f5926 +0x08d7:  mov    0xc(%ebp),%eax
080f5929 +0x08da:  mov    %eax,(%esp)
080f592c +0x08dd:  call   080f5714 <+0x6c5>
080f5931 +0x08e2:  lea    -0x10(%ebp),%edx
080f5934 +0x08e5:  mov    0x10(%ebp),%ecx
080f5937 +0x08e8:  mov    %ecx,0x10(%esp)
080f593b +0x08ec:  mov    %esi,0xc(%esp)
080f593f +0x08f0:  mov    %eax,0x8(%esp)
080f5943 +0x08f4:  mov    0xc(%ebp),%eax
080f5946 +0x08f7:  mov    %eax,0x4(%esp)
080f594a +0x08fb:  mov    %edx,(%esp)
080f594d +0x08fe:  call   080f5d84 <+0xd35>
080f5952 +0x0903:  sub    $0x4,%esp
080f5955 +0x0906:  lea    -0xc(%ebp),%eax
080f5958 +0x0909:  mov    0xc(%ebp),%edx
080f595b +0x090c:  mov    %edx,0x4(%esp)
080f595f +0x0910:  mov    %eax,(%esp)
080f5962 +0x0913:  call   080f59cc <+0x97d>
080f5967 +0x0918:  sub    $0x4,%esp
080f596a +0x091b:  lea    -0xc(%ebp),%eax
080f596d +0x091e:  mov    %eax,0x4(%esp)
080f5971 +0x0922:  lea    -0x10(%ebp),%eax
080f5974 +0x0925:  mov    %eax,(%esp)
080f5977 +0x0928:  call   080f5e22 <+0xdd3>
080f597c +0x092d:  test   %al,%al
080f597e +0x092f:  jne    080f59a5 <+0x956>
080f5980 +0x0931:  mov    -0x10(%ebp),%eax
080f5983 +0x0934:  mov    %eax,(%esp)
080f5986 +0x0937:  call   080f5e00 <+0xdb1>
080f598b +0x093c:  mov    0xc(%ebp),%edx
080f598e +0x093f:  mov    %eax,0x8(%esp)
080f5992 +0x0943:  mov    0x10(%ebp),%eax
080f5995 +0x0946:  mov    %eax,0x4(%esp)
080f5999 +0x094a:  mov    %edx,(%esp)
080f599c +0x094d:  call   080f5b18 <+0xac9>
080f59a1 +0x0952:  test   %al,%al
080f59a3 +0x0954:  je     080f59b9 <+0x96a>
080f59a5 +0x0956:  mov    0xc(%ebp),%eax
080f59a8 +0x0959:  mov    %eax,0x4(%esp)
080f59ac +0x095d:  mov    %ebx,(%esp)
080f59af +0x0960:  call   080f59cc <+0x97d>
080f59b4 +0x0965:  sub    $0x4,%esp
080f59b7 +0x0968:  jmp    080f59be <+0x96f>
080f59b9 +0x096a:  mov    -0x10(%ebp),%eax
080f59bc +0x096d:  mov    %eax,(%ebx)
080f59be +0x096f:  mov    %ebx,%eax
080f59c0 +0x0971:  lea    -0x8(%ebp),%esp
080f59c3 +0x0974:  add    $0x0,%esp
080f59c6 +0x0977:  pop    %ebx
080f59c7 +0x0978:  pop    %esi
080f59c8 +0x0979:  pop    %ebp
080f59c9 +0x097a:  ret    $0x4
080f59cc +0x097d:  push   %ebp
080f59cd +0x097e:  mov    %esp,%ebp
080f59cf +0x0980:  push   %ebx
080f59d0 +0x0981:  sub    $0x14,%esp
080f59d3 +0x0984:  mov    0x8(%ebp),%ebx
080f59d6 +0x0987:  mov    0xc(%ebp),%eax
080f59d9 +0x098a:  add    $0x4,%eax
080f59dc +0x098d:  mov    %eax,0x4(%esp)
080f59e0 +0x0991:  mov    %ebx,(%esp)
080f59e3 +0x0994:  call   080f5e36 <+0xde7>
080f59e8 +0x0999:  mov    %ebx,%eax
080f59ea +0x099b:  add    $0x14,%esp
080f59ed +0x099e:  pop    %ebx
080f59ee +0x099f:  pop    %ebp
080f59ef +0x09a0:  ret    $0x4
080f59f2 +0x09a3:  push   %ebp
080f59f3 +0x09a4:  mov    %esp,%ebp
080f59f5 +0x09a6:  mov    0x8(%ebp),%eax
080f59f8 +0x09a9:  pop    %ebp
080f59f9 +0x09aa:  ret
080f59fa +0x09ab:  push   %ebp
080f59fb +0x09ac:  mov    %esp,%ebp
080f59fd +0x09ae:  sub    $0x18,%esp
080f5a00 +0x09b1:  mov    0xc(%ebp),%eax
080f5a03 +0x09b4:  mov    %eax,(%esp)
080f5a06 +0x09b7:  call   080f59f2 <+0x9a3>
080f5a0b +0x09bc:  movzwl (%eax),%edx
080f5a0e +0x09bf:  mov    0x8(%ebp),%eax
080f5a11 +0x09c2:  mov    %dx,(%eax)
080f5a14 +0x09c5:  mov    0x10(%ebp),%eax
080f5a17 +0x09c8:  mov    %eax,(%esp)
080f5a1a +0x09cb:  call   080f59f2 <+0x9a3>
080f5a1f +0x09d0:  movzwl (%eax),%edx
080f5a22 +0x09d3:  mov    0x8(%ebp),%eax
080f5a25 +0x09d6:  mov    %dx,0x2(%eax)
080f5a29 +0x09da:  leave
080f5a2a +0x09db:  ret
080f5a2b +0x09dc:  push   %ebp
080f5a2c +0x09dd:  mov    %esp,%ebp
080f5a2e +0x09df:  mov    0x8(%ebp),%eax
080f5a31 +0x09e2:  pop    %ebp
080f5a32 +0x09e3:  ret
080f5a33 +0x09e4:  nop
080f5a34 +0x09e5:  push   %ebp
080f5a35 +0x09e6:  mov    %esp,%ebp
080f5a37 +0x09e8:  push   %esi
080f5a38 +0x09e9:  push   %ebx
080f5a39 +0x09ea:  sub    $0x30,%esp
080f5a3c +0x09ed:  mov    0x8(%ebp),%ebx
080f5a3f +0x09f0:  mov    0xc(%ebp),%eax
080f5a42 +0x09f3:  mov    %eax,(%esp)
080f5a45 +0x09f6:  call   080f5e44 <+0xdf5>
080f5a4a +0x09fb:  mov    %eax,%esi
080f5a4c +0x09fd:  mov    0xc(%ebp),%eax
080f5a4f +0x0a00:  mov    %eax,(%esp)
080f5a52 +0x0a03:  call   080f579e <+0x74f>
080f5a57 +0x0a08:  lea    -0x10(%ebp),%edx
080f5a5a +0x0a0b:  mov    0x10(%ebp),%ecx
080f5a5d +0x0a0e:  mov    %ecx,0x10(%esp)
080f5a61 +0x0a12:  mov    %esi,0xc(%esp)
080f5a65 +0x0a16:  mov    %eax,0x8(%esp)
080f5a69 +0x0a1a:  mov    0xc(%ebp),%eax
080f5a6c +0x0a1d:  mov    %eax,0x4(%esp)
080f5a70 +0x0a21:  mov    %edx,(%esp)
080f5a73 +0x0a24:  call   080f5e50 <+0xe01>
080f5a78 +0x0a29:  sub    $0x4,%esp
080f5a7b +0x0a2c:  lea    -0xc(%ebp),%eax
080f5a7e +0x0a2f:  mov    0xc(%ebp),%edx
080f5a81 +0x0a32:  mov    %edx,0x4(%esp)
080f5a85 +0x0a36:  mov    %eax,(%esp)
080f5a88 +0x0a39:  call   080f5af2 <+0xaa3>
080f5a8d +0x0a3e:  sub    $0x4,%esp
080f5a90 +0x0a41:  lea    -0xc(%ebp),%eax
080f5a93 +0x0a44:  mov    %eax,0x4(%esp)
080f5a97 +0x0a48:  lea    -0x10(%ebp),%eax
080f5a9a +0x0a4b:  mov    %eax,(%esp)
080f5a9d +0x0a4e:  call   080f5f08 <+0xeb9>
080f5aa2 +0x0a53:  test   %al,%al
080f5aa4 +0x0a55:  jne    080f5acb <+0xa7c>
080f5aa6 +0x0a57:  mov    -0x10(%ebp),%eax
080f5aa9 +0x0a5a:  mov    %eax,(%esp)
080f5aac +0x0a5d:  call   080f5ecc <+0xe7d>
080f5ab1 +0x0a62:  mov    0xc(%ebp),%edx
080f5ab4 +0x0a65:  mov    %eax,0x8(%esp)
080f5ab8 +0x0a69:  mov    0x10(%ebp),%eax
080f5abb +0x0a6c:  mov    %eax,0x4(%esp)
080f5abf +0x0a70:  mov    %edx,(%esp)
080f5ac2 +0x0a73:  call   080f5eee <+0xe9f>
080f5ac7 +0x0a78:  test   %al,%al
080f5ac9 +0x0a7a:  je     080f5adf <+0xa90>
080f5acb +0x0a7c:  mov    0xc(%ebp),%eax
080f5ace +0x0a7f:  mov    %eax,0x4(%esp)
080f5ad2 +0x0a83:  mov    %ebx,(%esp)
080f5ad5 +0x0a86:  call   080f5af2 <+0xaa3>
080f5ada +0x0a8b:  sub    $0x4,%esp
080f5add +0x0a8e:  jmp    080f5ae4 <+0xa95>
080f5adf +0x0a90:  mov    -0x10(%ebp),%eax
080f5ae2 +0x0a93:  mov    %eax,(%ebx)
080f5ae4 +0x0a95:  mov    %ebx,%eax
080f5ae6 +0x0a97:  lea    -0x8(%ebp),%esp
080f5ae9 +0x0a9a:  add    $0x0,%esp
080f5aec +0x0a9d:  pop    %ebx
080f5aed +0x0a9e:  pop    %esi
080f5aee +0x0a9f:  pop    %ebp
080f5aef +0x0aa0:  ret    $0x4
080f5af2 +0x0aa3:  push   %ebp
080f5af3 +0x0aa4:  mov    %esp,%ebp
080f5af5 +0x0aa6:  push   %ebx
080f5af6 +0x0aa7:  sub    $0x14,%esp
080f5af9 +0x0aaa:  mov    0x8(%ebp),%ebx
080f5afc +0x0aad:  mov    0xc(%ebp),%eax
080f5aff +0x0ab0:  add    $0x4,%eax
080f5b02 +0x0ab3:  mov    %eax,0x4(%esp)
080f5b06 +0x0ab7:  mov    %ebx,(%esp)
080f5b09 +0x0aba:  call   080f5f1c <+0xecd>
080f5b0e +0x0abf:  mov    %ebx,%eax
080f5b10 +0x0ac1:  add    $0x14,%esp
080f5b13 +0x0ac4:  pop    %ebx
080f5b14 +0x0ac5:  pop    %ebp
080f5b15 +0x0ac6:  ret    $0x4
080f5b18 +0x0ac9:  push   %ebp
080f5b19 +0x0aca:  mov    %esp,%ebp
080f5b1b +0x0acc:  mov    0xc(%ebp),%eax
080f5b1e +0x0acf:  mov    (%eax),%edx
080f5b20 +0x0ad1:  mov    0x10(%ebp),%eax
080f5b23 +0x0ad4:  mov    (%eax),%eax
080f5b25 +0x0ad6:  cmp    %eax,%edx
080f5b27 +0x0ad8:  setb   %al
080f5b2a +0x0adb:  pop    %ebp
080f5b2b +0x0adc:  ret
080f5b2c +0x0add:  push   %ebp
080f5b2d +0x0ade:  mov    %esp,%ebp
080f5b2f +0x0ae0:  sub    $0x18,%esp
080f5b32 +0x0ae3:  mov    0x8(%ebp),%eax
080f5b35 +0x0ae6:  mov    %eax,(%esp)
080f5b38 +0x0ae9:  call   080f5f2a <+0xedb>
080f5b3d +0x0aee:  mov    0x8(%ebp),%eax
080f5b40 +0x0af1:  movl   $0x0,0x4(%eax)
080f5b47 +0x0af8:  mov    0x8(%ebp),%eax
080f5b4a +0x0afb:  movl   $0x0,0x8(%eax)
080f5b51 +0x0b02:  mov    0x8(%ebp),%eax
080f5b54 +0x0b05:  movl   $0x0,0xc(%eax)
080f5b5b +0x0b0c:  mov    0x8(%ebp),%eax
080f5b5e +0x0b0f:  movl   $0x0,0x10(%eax)
080f5b65 +0x0b16:  mov    0x8(%ebp),%eax
080f5b68 +0x0b19:  movl   $0x0,0x14(%eax)
080f5b6f +0x0b20:  mov    0x8(%ebp),%eax
080f5b72 +0x0b23:  mov    %eax,(%esp)
080f5b75 +0x0b26:  call   080f5f3e <+0xeef>
080f5b7a +0x0b2b:  leave
080f5b7b +0x0b2c:  ret
080f5b7c +0x0b2d:  push   %ebp
080f5b7d +0x0b2e:  mov    %esp,%ebp
080f5b7f +0x0b30:  pop    %ebp
080f5b80 +0x0b31:  ret
080f5b81 +0x0b32:  push   %ebp
080f5b82 +0x0b33:  mov    %esp,%ebp
080f5b84 +0x0b35:  mov    0x8(%ebp),%eax
080f5b87 +0x0b38:  mov    0xc(%eax),%eax
080f5b8a +0x0b3b:  pop    %ebp
080f5b8b +0x0b3c:  ret
080f5b8c +0x0b3d:  push   %ebp
080f5b8d +0x0b3e:  mov    %esp,%ebp
080f5b8f +0x0b40:  mov    0x8(%ebp),%eax
080f5b92 +0x0b43:  mov    0x8(%eax),%eax
080f5b95 +0x0b46:  pop    %ebp
080f5b96 +0x0b47:  ret
080f5b97 +0x0b48:  nop
080f5b98 +0x0b49:  push   %ebp
080f5b99 +0x0b4a:  mov    %esp,%ebp
080f5b9b +0x0b4c:  sub    $0x18,%esp
080f5b9e +0x0b4f:  mov    0x8(%ebp),%eax
080f5ba1 +0x0b52:  mov    %eax,(%esp)
080f5ba4 +0x0b55:  call   080f5f70 <+0xf21>
080f5ba9 +0x0b5a:  mov    0xc(%ebp),%edx
080f5bac +0x0b5d:  mov    %edx,0x4(%esp)
080f5bb0 +0x0b61:  mov    %eax,(%esp)
080f5bb3 +0x0b64:  call   080f5f7e <+0xf2f>
080f5bb8 +0x0b69:  mov    0xc(%ebp),%eax
080f5bbb +0x0b6c:  mov    %eax,0x4(%esp)
080f5bbf +0x0b70:  mov    0x8(%ebp),%eax
080f5bc2 +0x0b73:  mov    %eax,(%esp)
080f5bc5 +0x0b76:  call   080f5f92 <+0xf43>
080f5bca +0x0b7b:  leave
080f5bcb +0x0b7c:  ret
080f5bcc +0x0b7d:  push   %ebp
080f5bcd +0x0b7e:  mov    %esp,%ebp
080f5bcf +0x0b80:  sub    $0x18,%esp
080f5bd2 +0x0b83:  mov    0x8(%ebp),%eax
080f5bd5 +0x0b86:  mov    %eax,(%esp)
080f5bd8 +0x0b89:  call   080f5fb4 <+0xf65>
080f5bdd +0x0b8e:  mov    0x8(%ebp),%eax
080f5be0 +0x0b91:  movl   $0x0,0x4(%eax)
080f5be7 +0x0b98:  mov    0x8(%ebp),%eax
080f5bea +0x0b9b:  movl   $0x0,0x8(%eax)
080f5bf1 +0x0ba2:  mov    0x8(%ebp),%eax
080f5bf4 +0x0ba5:  movl   $0x0,0xc(%eax)
080f5bfb +0x0bac:  mov    0x8(%ebp),%eax
080f5bfe +0x0baf:  movl   $0x0,0x10(%eax)
080f5c05 +0x0bb6:  mov    0x8(%ebp),%eax
080f5c08 +0x0bb9:  movl   $0x0,0x14(%eax)
080f5c0f +0x0bc0:  mov    0x8(%ebp),%eax
080f5c12 +0x0bc3:  mov    %eax,(%esp)
080f5c15 +0x0bc6:  call   080f5fc8 <+0xf79>
080f5c1a +0x0bcb:  leave
080f5c1b +0x0bcc:  ret
080f5c1c +0x0bcd:  push   %ebp
080f5c1d +0x0bce:  mov    %esp,%ebp
080f5c1f +0x0bd0:  pop    %ebp
080f5c20 +0x0bd1:  ret
080f5c21 +0x0bd2:  push   %ebp
080f5c22 +0x0bd3:  mov    %esp,%ebp
080f5c24 +0x0bd5:  mov    0x8(%ebp),%eax
080f5c27 +0x0bd8:  mov    0xc(%eax),%eax
080f5c2a +0x0bdb:  pop    %ebp
080f5c2b +0x0bdc:  ret
080f5c2c +0x0bdd:  push   %ebp
080f5c2d +0x0bde:  mov    %esp,%ebp
080f5c2f +0x0be0:  mov    0x8(%ebp),%eax
080f5c32 +0x0be3:  mov    0x8(%eax),%eax
080f5c35 +0x0be6:  pop    %ebp
080f5c36 +0x0be7:  ret
080f5c37 +0x0be8:  nop
080f5c38 +0x0be9:  push   %ebp
080f5c39 +0x0bea:  mov    %esp,%ebp
080f5c3b +0x0bec:  sub    $0x18,%esp
080f5c3e +0x0bef:  mov    0x8(%ebp),%eax
080f5c41 +0x0bf2:  mov    %eax,(%esp)
080f5c44 +0x0bf5:  call   080f5ffa <+0xfab>
080f5c49 +0x0bfa:  mov    0xc(%ebp),%edx
080f5c4c +0x0bfd:  mov    %edx,0x4(%esp)
080f5c50 +0x0c01:  mov    %eax,(%esp)
080f5c53 +0x0c04:  call   080f6008 <+0xfb9>
080f5c58 +0x0c09:  mov    0xc(%ebp),%eax
080f5c5b +0x0c0c:  mov    %eax,0x4(%esp)
080f5c5f +0x0c10:  mov    0x8(%ebp),%eax
080f5c62 +0x0c13:  mov    %eax,(%esp)
080f5c65 +0x0c16:  call   080f601c <+0xfcd>
080f5c6a +0x0c1b:  leave
080f5c6b +0x0c1c:  ret
080f5c6c +0x0c1d:  push   %ebp
080f5c6d +0x0c1e:  mov    %esp,%ebp
080f5c6f +0x0c20:  sub    $0x18,%esp
080f5c72 +0x0c23:  mov    0x8(%ebp),%eax
080f5c75 +0x0c26:  mov    %eax,(%esp)
080f5c78 +0x0c29:  call   080f603e <+0xfef>
080f5c7d +0x0c2e:  mov    0x8(%ebp),%eax
080f5c80 +0x0c31:  movl   $0x0,(%eax)
080f5c86 +0x0c37:  mov    0x8(%ebp),%eax
080f5c89 +0x0c3a:  movl   $0x0,0x4(%eax)
080f5c90 +0x0c41:  mov    0x8(%ebp),%eax
080f5c93 +0x0c44:  movl   $0x0,0x8(%eax)
080f5c9a +0x0c4b:  leave
080f5c9b +0x0c4c:  ret
080f5c9c +0x0c4d:  push   %ebp
080f5c9d +0x0c4e:  mov    %esp,%ebp
080f5c9f +0x0c50:  sub    $0x18,%esp
080f5ca2 +0x0c53:  mov    0x8(%ebp),%eax
080f5ca5 +0x0c56:  mov    %eax,(%esp)
080f5ca8 +0x0c59:  call   080f6052 <+0x1003>
080f5cad +0x0c5e:  leave
080f5cae +0x0c5f:  ret
080f5caf +0x0c60:  nop
080f5cb0 +0x0c61:  push   %ebp
080f5cb1 +0x0c62:  mov    %esp,%ebp
080f5cb3 +0x0c64:  sub    $0x18,%esp
080f5cb6 +0x0c67:  cmpl   $0x0,0xc(%ebp)
080f5cba +0x0c6b:  je     080f5cd5 <+0xc86>
080f5cbc +0x0c6d:  mov    0x8(%ebp),%eax
080f5cbf +0x0c70:  mov    0x10(%ebp),%edx
080f5cc2 +0x0c73:  mov    %edx,0x8(%esp)
080f5cc6 +0x0c77:  mov    0xc(%ebp),%edx
080f5cc9 +0x0c7a:  mov    %edx,0x4(%esp)
080f5ccd +0x0c7e:  mov    %eax,(%esp)
080f5cd0 +0x0c81:  call   080f6058 <+0x1009>
080f5cd5 +0x0c86:  leave
080f5cd6 +0x0c87:  ret
080f5cd7 +0x0c88:  push   %ebp
080f5cd8 +0x0c89:  mov    %esp,%ebp
080f5cda +0x0c8b:  sub    $0x18,%esp
080f5cdd +0x0c8e:  mov    0xc(%ebp),%eax
080f5ce0 +0x0c91:  mov    %eax,0x4(%esp)
080f5ce4 +0x0c95:  mov    0x8(%ebp),%eax
080f5ce7 +0x0c98:  mov    %eax,(%esp)
080f5cea +0x0c9b:  call   080f606b <+0x101c>
080f5cef +0x0ca0:  leave
080f5cf0 +0x0ca1:  ret
080f5cf1 +0x0ca2:  nop
080f5cf2 +0x0ca3:  push   %ebp
080f5cf3 +0x0ca4:  mov    %esp,%ebp
080f5cf5 +0x0ca6:  sub    $0x18,%esp
080f5cf8 +0x0ca9:  mov    0x8(%ebp),%eax
080f5cfb +0x0cac:  mov    %eax,(%esp)
080f5cfe +0x0caf:  call   080f6070 <+0x1021>
080f5d03 +0x0cb4:  mov    0x8(%ebp),%eax
080f5d06 +0x0cb7:  movl   $0x0,(%eax)
080f5d0c +0x0cbd:  mov    0x8(%ebp),%eax
080f5d0f +0x0cc0:  movl   $0x0,0x4(%eax)
080f5d16 +0x0cc7:  mov    0x8(%ebp),%eax
080f5d19 +0x0cca:  movl   $0x0,0x8(%eax)
080f5d20 +0x0cd1:  leave
080f5d21 +0x0cd2:  ret
080f5d22 +0x0cd3:  push   %ebp
080f5d23 +0x0cd4:  mov    %esp,%ebp
080f5d25 +0x0cd6:  sub    $0x18,%esp
080f5d28 +0x0cd9:  mov    0x8(%ebp),%eax
080f5d2b +0x0cdc:  mov    %eax,(%esp)
080f5d2e +0x0cdf:  call   080f6084 <+0x1035>
080f5d33 +0x0ce4:  leave
080f5d34 +0x0ce5:  ret
080f5d35 +0x0ce6:  nop
080f5d36 +0x0ce7:  push   %ebp
080f5d37 +0x0ce8:  mov    %esp,%ebp
080f5d39 +0x0cea:  sub    $0x18,%esp
080f5d3c +0x0ced:  cmpl   $0x0,0xc(%ebp)
080f5d40 +0x0cf1:  je     080f5d5b <+0xd0c>
080f5d42 +0x0cf3:  mov    0x8(%ebp),%eax
080f5d45 +0x0cf6:  mov    0x10(%ebp),%edx
080f5d48 +0x0cf9:  mov    %edx,0x8(%esp)
080f5d4c +0x0cfd:  mov    0xc(%ebp),%edx
080f5d4f +0x0d00:  mov    %edx,0x4(%esp)
080f5d53 +0x0d04:  mov    %eax,(%esp)
080f5d56 +0x0d07:  call   080f608a <+0x103b>
080f5d5b +0x0d0c:  leave
080f5d5c +0x0d0d:  ret
080f5d5d +0x0d0e:  push   %ebp
080f5d5e +0x0d0f:  mov    %esp,%ebp
080f5d60 +0x0d11:  sub    $0x18,%esp
080f5d63 +0x0d14:  mov    0xc(%ebp),%eax
080f5d66 +0x0d17:  mov    %eax,0x4(%esp)
080f5d6a +0x0d1b:  mov    0x8(%ebp),%eax
080f5d6d +0x0d1e:  mov    %eax,(%esp)
080f5d70 +0x0d21:  call   080f609d <+0x104e>
080f5d75 +0x0d26:  leave
080f5d76 +0x0d27:  ret
080f5d77 +0x0d28:  nop
080f5d78 +0x0d29:  push   %ebp
080f5d79 +0x0d2a:  mov    %esp,%ebp
080f5d7b +0x0d2c:  mov    0x8(%ebp),%eax
080f5d7e +0x0d2f:  add    $0x4,%eax
080f5d81 +0x0d32:  pop    %ebp
080f5d82 +0x0d33:  ret
080f5d83 +0x0d34:  nop
080f5d84 +0x0d35:  push   %ebp
080f5d85 +0x0d36:  mov    %esp,%ebp
080f5d87 +0x0d38:  push   %ebx
080f5d88 +0x0d39:  sub    $0x14,%esp
080f5d8b +0x0d3c:  mov    0x8(%ebp),%ebx
080f5d8e +0x0d3f:  jmp    080f5ddc <+0xd8d>
080f5d90 +0x0d41:  mov    0x10(%ebp),%eax
080f5d93 +0x0d44:  mov    %eax,(%esp)
080f5d96 +0x0d47:  call   080f60a2 <+0x1053>
080f5d9b +0x0d4c:  mov    0xc(%ebp),%edx
080f5d9e +0x0d4f:  mov    0x18(%ebp),%ecx
080f5da1 +0x0d52:  mov    %ecx,0x8(%esp)
080f5da5 +0x0d56:  mov    %eax,0x4(%esp)
080f5da9 +0x0d5a:  mov    %edx,(%esp)
080f5dac +0x0d5d:  call   080f5b18 <+0xac9>
080f5db1 +0x0d62:  xor    $0x1,%eax
080f5db4 +0x0d65:  test   %al,%al
080f5db6 +0x0d67:  je     080f5dce <+0xd7f>
080f5db8 +0x0d69:  mov    0x10(%ebp),%eax
080f5dbb +0x0d6c:  mov    %eax,0x14(%ebp)
080f5dbe +0x0d6f:  mov    0x10(%ebp),%eax
080f5dc1 +0x0d72:  mov    %eax,(%esp)
080f5dc4 +0x0d75:  call   080f5b8c <+0xb3d>
080f5dc9 +0x0d7a:  mov    %eax,0x10(%ebp)
080f5dcc +0x0d7d:  jmp    080f5ddc <+0xd8d>
080f5dce +0x0d7f:  mov    0x10(%ebp),%eax
080f5dd1 +0x0d82:  mov    %eax,(%esp)
080f5dd4 +0x0d85:  call   080f5b81 <+0xb32>
080f5dd9 +0x0d8a:  mov    %eax,0x10(%ebp)
080f5ddc +0x0d8d:  cmpl   $0x0,0x10(%ebp)
080f5de0 +0x0d91:  setne  %al
080f5de3 +0x0d94:  test   %al,%al
080f5de5 +0x0d96:  jne    080f5d90 <+0xd41>
080f5de7 +0x0d98:  mov    0x14(%ebp),%eax
080f5dea +0x0d9b:  mov    %eax,0x4(%esp)
080f5dee +0x0d9f:  mov    %ebx,(%esp)
080f5df1 +0x0da2:  call   080f5e36 <+0xde7>
080f5df6 +0x0da7:  mov    %ebx,%eax
080f5df8 +0x0da9:  add    $0x14,%esp
080f5dfb +0x0dac:  pop    %ebx
080f5dfc +0x0dad:  pop    %ebp
080f5dfd +0x0dae:  ret    $0x4
080f5e00 +0x0db1:  push   %ebp
080f5e01 +0x0db2:  mov    %esp,%ebp
080f5e03 +0x0db4:  sub    $0x28,%esp
080f5e06 +0x0db7:  mov    0x8(%ebp),%eax
080f5e09 +0x0dba:  mov    %eax,(%esp)
080f5e0c +0x0dbd:  call   080f60c4 <+0x1075>
080f5e11 +0x0dc2:  mov    %eax,0x4(%esp)
080f5e15 +0x0dc6:  lea    -0x9(%ebp),%eax
080f5e18 +0x0dc9:  mov    %eax,(%esp)
080f5e1b +0x0dcc:  call   080f60d0 <+0x1081>
080f5e20 +0x0dd1:  leave
080f5e21 +0x0dd2:  ret
080f5e22 +0x0dd3:  push   %ebp
080f5e23 +0x0dd4:  mov    %esp,%ebp
080f5e25 +0x0dd6:  mov    0x8(%ebp),%eax
080f5e28 +0x0dd9:  mov    (%eax),%edx
080f5e2a +0x0ddb:  mov    0xc(%ebp),%eax
080f5e2d +0x0dde:  mov    (%eax),%eax
080f5e2f +0x0de0:  cmp    %eax,%edx
080f5e31 +0x0de2:  sete   %al
080f5e34 +0x0de5:  pop    %ebp
080f5e35 +0x0de6:  ret
080f5e36 +0x0de7:  push   %ebp
080f5e37 +0x0de8:  mov    %esp,%ebp
080f5e39 +0x0dea:  mov    0xc(%ebp),%edx
080f5e3c +0x0ded:  mov    0x8(%ebp),%eax
080f5e3f +0x0df0:  mov    %edx,(%eax)
080f5e41 +0x0df2:  pop    %ebp
080f5e42 +0x0df3:  ret
080f5e43 +0x0df4:  nop
080f5e44 +0x0df5:  push   %ebp
080f5e45 +0x0df6:  mov    %esp,%ebp
080f5e47 +0x0df8:  mov    0x8(%ebp),%eax
080f5e4a +0x0dfb:  add    $0x4,%eax
080f5e4d +0x0dfe:  pop    %ebp
080f5e4e +0x0dff:  ret
080f5e4f +0x0e00:  nop
080f5e50 +0x0e01:  push   %ebp
080f5e51 +0x0e02:  mov    %esp,%ebp
080f5e53 +0x0e04:  push   %ebx
080f5e54 +0x0e05:  sub    $0x14,%esp
080f5e57 +0x0e08:  mov    0x8(%ebp),%ebx
080f5e5a +0x0e0b:  jmp    080f5ea8 <+0xe59>
080f5e5c +0x0e0d:  mov    0x10(%ebp),%eax
080f5e5f +0x0e10:  mov    %eax,(%esp)
080f5e62 +0x0e13:  call   080f60d8 <+0x1089>
080f5e67 +0x0e18:  mov    0xc(%ebp),%edx
080f5e6a +0x0e1b:  mov    0x18(%ebp),%ecx
080f5e6d +0x0e1e:  mov    %ecx,0x8(%esp)
080f5e71 +0x0e22:  mov    %eax,0x4(%esp)
080f5e75 +0x0e26:  mov    %edx,(%esp)
080f5e78 +0x0e29:  call   080f5eee <+0xe9f>
080f5e7d +0x0e2e:  xor    $0x1,%eax
080f5e80 +0x0e31:  test   %al,%al
080f5e82 +0x0e33:  je     080f5e9a <+0xe4b>
080f5e84 +0x0e35:  mov    0x10(%ebp),%eax
080f5e87 +0x0e38:  mov    %eax,0x14(%ebp)
080f5e8a +0x0e3b:  mov    0x10(%ebp),%eax
080f5e8d +0x0e3e:  mov    %eax,(%esp)
080f5e90 +0x0e41:  call   080f5c2c <+0xbdd>
080f5e95 +0x0e46:  mov    %eax,0x10(%ebp)
080f5e98 +0x0e49:  jmp    080f5ea8 <+0xe59>
080f5e9a +0x0e4b:  mov    0x10(%ebp),%eax
080f5e9d +0x0e4e:  mov    %eax,(%esp)
080f5ea0 +0x0e51:  call   080f5c21 <+0xbd2>
080f5ea5 +0x0e56:  mov    %eax,0x10(%ebp)
080f5ea8 +0x0e59:  cmpl   $0x0,0x10(%ebp)
080f5eac +0x0e5d:  setne  %al
080f5eaf +0x0e60:  test   %al,%al
080f5eb1 +0x0e62:  jne    080f5e5c <+0xe0d>
080f5eb3 +0x0e64:  mov    0x14(%ebp),%eax
080f5eb6 +0x0e67:  mov    %eax,0x4(%esp)
080f5eba +0x0e6b:  mov    %ebx,(%esp)
080f5ebd +0x0e6e:  call   080f5f1c <+0xecd>
080f5ec2 +0x0e73:  mov    %ebx,%eax
080f5ec4 +0x0e75:  add    $0x14,%esp
080f5ec7 +0x0e78:  pop    %ebx
080f5ec8 +0x0e79:  pop    %ebp
080f5ec9 +0x0e7a:  ret    $0x4
080f5ecc +0x0e7d:  push   %ebp
080f5ecd +0x0e7e:  mov    %esp,%ebp
080f5ecf +0x0e80:  sub    $0x28,%esp
080f5ed2 +0x0e83:  mov    0x8(%ebp),%eax
080f5ed5 +0x0e86:  mov    %eax,(%esp)
080f5ed8 +0x0e89:  call   080f60fa <+0x10ab>
080f5edd +0x0e8e:  mov    %eax,0x4(%esp)
080f5ee1 +0x0e92:  lea    -0x9(%ebp),%eax
080f5ee4 +0x0e95:  mov    %eax,(%esp)
080f5ee7 +0x0e98:  call   080f6106 <+0x10b7>
080f5eec +0x0e9d:  leave
080f5eed +0x0e9e:  ret
080f5eee +0x0e9f:  push   %ebp
080f5eef +0x0ea0:  mov    %esp,%ebp
080f5ef1 +0x0ea2:  sub    $0x18,%esp
080f5ef4 +0x0ea5:  mov    0x10(%ebp),%eax
080f5ef7 +0x0ea8:  mov    %eax,0x4(%esp)
080f5efb +0x0eac:  mov    0xc(%ebp),%eax
080f5efe +0x0eaf:  mov    %eax,(%esp)
080f5f01 +0x0eb2:  call   080f610e <+0x10bf>
080f5f06 +0x0eb7:  leave
080f5f07 +0x0eb8:  ret
080f5f08 +0x0eb9:  push   %ebp
080f5f09 +0x0eba:  mov    %esp,%ebp
080f5f0b +0x0ebc:  mov    0x8(%ebp),%eax
080f5f0e +0x0ebf:  mov    (%eax),%edx
080f5f10 +0x0ec1:  mov    0xc(%ebp),%eax
080f5f13 +0x0ec4:  mov    (%eax),%eax
080f5f15 +0x0ec6:  cmp    %eax,%edx
080f5f17 +0x0ec8:  sete   %al
080f5f1a +0x0ecb:  pop    %ebp
080f5f1b +0x0ecc:  ret
080f5f1c +0x0ecd:  push   %ebp
080f5f1d +0x0ece:  mov    %esp,%ebp
080f5f1f +0x0ed0:  mov    0xc(%ebp),%edx
080f5f22 +0x0ed3:  mov    0x8(%ebp),%eax
080f5f25 +0x0ed6:  mov    %edx,(%eax)
080f5f27 +0x0ed8:  pop    %ebp
080f5f28 +0x0ed9:  ret
080f5f29 +0x0eda:  nop
080f5f2a +0x0edb:  push   %ebp
080f5f2b +0x0edc:  mov    %esp,%ebp
080f5f2d +0x0ede:  sub    $0x18,%esp
080f5f30 +0x0ee1:  mov    0x8(%ebp),%eax
080f5f33 +0x0ee4:  mov    %eax,(%esp)
080f5f36 +0x0ee7:  call   080f614c <+0x10fd>
080f5f3b +0x0eec:  leave
080f5f3c +0x0eed:  ret
080f5f3d +0x0eee:  nop
080f5f3e +0x0eef:  push   %ebp
080f5f3f +0x0ef0:  mov    %esp,%ebp
080f5f41 +0x0ef2:  mov    0x8(%ebp),%eax
080f5f44 +0x0ef5:  movl   $0x0,0x4(%eax)
080f5f4b +0x0efc:  mov    0x8(%ebp),%eax
080f5f4e +0x0eff:  movl   $0x0,0x8(%eax)
080f5f55 +0x0f06:  mov    0x8(%ebp),%eax
080f5f58 +0x0f09:  lea    0x4(%eax),%edx
080f5f5b +0x0f0c:  mov    0x8(%ebp),%eax
080f5f5e +0x0f0f:  mov    %edx,0xc(%eax)
080f5f61 +0x0f12:  mov    0x8(%ebp),%eax
080f5f64 +0x0f15:  lea    0x4(%eax),%edx
080f5f67 +0x0f18:  mov    0x8(%ebp),%eax
080f5f6a +0x0f1b:  mov    %edx,0x10(%eax)
080f5f6d +0x0f1e:  pop    %ebp
080f5f6e +0x0f1f:  ret
080f5f6f +0x0f20:  nop
080f5f70 +0x0f21:  push   %ebp
080f5f71 +0x0f22:  mov    %esp,%ebp
080f5f73 +0x0f24:  mov    0x8(%ebp),%eax
080f5f76 +0x0f27:  pop    %ebp
080f5f77 +0x0f28:  ret
080f5f78 +0x0f29:  push   %ebp
080f5f79 +0x0f2a:  mov    %esp,%ebp
080f5f7b +0x0f2c:  pop    %ebp
080f5f7c +0x0f2d:  ret
080f5f7d +0x0f2e:  nop
080f5f7e +0x0f2f:  push   %ebp
080f5f7f +0x0f30:  mov    %esp,%ebp
080f5f81 +0x0f32:  sub    $0x18,%esp
080f5f84 +0x0f35:  mov    0xc(%ebp),%eax
080f5f87 +0x0f38:  mov    %eax,(%esp)
080f5f8a +0x0f3b:  call   080f5f78 <+0xf29>
080f5f8f +0x0f40:  leave
080f5f90 +0x0f41:  ret
080f5f91 +0x0f42:  nop
080f5f92 +0x0f43:  push   %ebp
080f5f93 +0x0f44:  mov    %esp,%ebp
080f5f95 +0x0f46:  sub    $0x18,%esp
080f5f98 +0x0f49:  mov    0x8(%ebp),%eax
080f5f9b +0x0f4c:  movl   $0x1,0x8(%esp)
080f5fa3 +0x0f54:  mov    0xc(%ebp),%edx
080f5fa6 +0x0f57:  mov    %edx,0x4(%esp)
080f5faa +0x0f5b:  mov    %eax,(%esp)
080f5fad +0x0f5e:  call   080f6152 <+0x1103>
080f5fb2 +0x0f63:  leave
080f5fb3 +0x0f64:  ret
080f5fb4 +0x0f65:  push   %ebp
080f5fb5 +0x0f66:  mov    %esp,%ebp
080f5fb7 +0x0f68:  sub    $0x18,%esp
080f5fba +0x0f6b:  mov    0x8(%ebp),%eax
080f5fbd +0x0f6e:  mov    %eax,(%esp)
080f5fc0 +0x0f71:  call   080f6166 <+0x1117>
080f5fc5 +0x0f76:  leave
080f5fc6 +0x0f77:  ret
080f5fc7 +0x0f78:  nop
080f5fc8 +0x0f79:  push   %ebp
080f5fc9 +0x0f7a:  mov    %esp,%ebp
080f5fcb +0x0f7c:  mov    0x8(%ebp),%eax
080f5fce +0x0f7f:  movl   $0x0,0x4(%eax)
080f5fd5 +0x0f86:  mov    0x8(%ebp),%eax
080f5fd8 +0x0f89:  movl   $0x0,0x8(%eax)
080f5fdf +0x0f90:  mov    0x8(%ebp),%eax
080f5fe2 +0x0f93:  lea    0x4(%eax),%edx
080f5fe5 +0x0f96:  mov    0x8(%ebp),%eax
080f5fe8 +0x0f99:  mov    %edx,0xc(%eax)
080f5feb +0x0f9c:  mov    0x8(%ebp),%eax
080f5fee +0x0f9f:  lea    0x4(%eax),%edx
080f5ff1 +0x0fa2:  mov    0x8(%ebp),%eax
080f5ff4 +0x0fa5:  mov    %edx,0x10(%eax)
080f5ff7 +0x0fa8:  pop    %ebp
080f5ff8 +0x0fa9:  ret
080f5ff9 +0x0faa:  nop
080f5ffa +0x0fab:  push   %ebp
080f5ffb +0x0fac:  mov    %esp,%ebp
080f5ffd +0x0fae:  mov    0x8(%ebp),%eax
080f6000 +0x0fb1:  pop    %ebp
080f6001 +0x0fb2:  ret
080f6002 +0x0fb3:  push   %ebp
080f6003 +0x0fb4:  mov    %esp,%ebp
080f6005 +0x0fb6:  pop    %ebp
080f6006 +0x0fb7:  ret
080f6007 +0x0fb8:  nop
080f6008 +0x0fb9:  push   %ebp
080f6009 +0x0fba:  mov    %esp,%ebp
080f600b +0x0fbc:  sub    $0x18,%esp
080f600e +0x0fbf:  mov    0xc(%ebp),%eax
080f6011 +0x0fc2:  mov    %eax,(%esp)
080f6014 +0x0fc5:  call   080f6002 <+0xfb3>
080f6019 +0x0fca:  leave
080f601a +0x0fcb:  ret
080f601b +0x0fcc:  nop
080f601c +0x0fcd:  push   %ebp
080f601d +0x0fce:  mov    %esp,%ebp
080f601f +0x0fd0:  sub    $0x18,%esp
080f6022 +0x0fd3:  mov    0x8(%ebp),%eax
080f6025 +0x0fd6:  movl   $0x1,0x8(%esp)
080f602d +0x0fde:  mov    0xc(%ebp),%edx
080f6030 +0x0fe1:  mov    %edx,0x4(%esp)
080f6034 +0x0fe5:  mov    %eax,(%esp)
080f6037 +0x0fe8:  call   080f616c <+0x111d>
080f603c +0x0fed:  leave
080f603d +0x0fee:  ret
080f603e +0x0fef:  push   %ebp
080f603f +0x0ff0:  mov    %esp,%ebp
080f6041 +0x0ff2:  sub    $0x18,%esp
080f6044 +0x0ff5:  mov    0x8(%ebp),%eax
080f6047 +0x0ff8:  mov    %eax,(%esp)
080f604a +0x0ffb:  call   080f6180 <+0x1131>
080f604f +0x1000:  leave
080f6050 +0x1001:  ret
080f6051 +0x1002:  nop
080f6052 +0x1003:  push   %ebp
080f6053 +0x1004:  mov    %esp,%ebp
080f6055 +0x1006:  pop    %ebp
080f6056 +0x1007:  ret
080f6057 +0x1008:  nop
080f6058 +0x1009:  push   %ebp
080f6059 +0x100a:  mov    %esp,%ebp
080f605b +0x100c:  sub    $0x18,%esp
080f605e +0x100f:  mov    0xc(%ebp),%eax
080f6061 +0x1012:  mov    %eax,(%esp)
080f6064 +0x1015:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080f6069 +0x101a:  leave
080f606a +0x101b:  ret
080f606b +0x101c:  push   %ebp
080f606c +0x101d:  mov    %esp,%ebp
080f606e +0x101f:  pop    %ebp
080f606f +0x1020:  ret
080f6070 +0x1021:  push   %ebp
080f6071 +0x1022:  mov    %esp,%ebp
080f6073 +0x1024:  sub    $0x18,%esp
080f6076 +0x1027:  mov    0x8(%ebp),%eax
080f6079 +0x102a:  mov    %eax,(%esp)
080f607c +0x102d:  call   080f6186 <+0x1137>
080f6081 +0x1032:  leave
080f6082 +0x1033:  ret
080f6083 +0x1034:  nop
080f6084 +0x1035:  push   %ebp
080f6085 +0x1036:  mov    %esp,%ebp
080f6087 +0x1038:  pop    %ebp
080f6088 +0x1039:  ret
080f6089 +0x103a:  nop
080f608a +0x103b:  push   %ebp
080f608b +0x103c:  mov    %esp,%ebp
080f608d +0x103e:  sub    $0x18,%esp
080f6090 +0x1041:  mov    0xc(%ebp),%eax
080f6093 +0x1044:  mov    %eax,(%esp)
080f6096 +0x1047:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080f609b +0x104c:  leave
080f609c +0x104d:  ret
080f609d +0x104e:  push   %ebp
080f609e +0x104f:  mov    %esp,%ebp
080f60a0 +0x1051:  pop    %ebp
080f60a1 +0x1052:  ret
080f60a2 +0x1053:  push   %ebp
080f60a3 +0x1054:  mov    %esp,%ebp
080f60a5 +0x1056:  sub    $0x28,%esp
080f60a8 +0x1059:  mov    0x8(%ebp),%eax
080f60ab +0x105c:  mov    %eax,(%esp)
080f60ae +0x105f:  call   080f618b <+0x113c>
080f60b3 +0x1064:  mov    %eax,0x4(%esp)
080f60b7 +0x1068:  lea    -0x9(%ebp),%eax
080f60ba +0x106b:  mov    %eax,(%esp)
080f60bd +0x106e:  call   080f60d0 <+0x1081>
080f60c2 +0x1073:  leave
080f60c3 +0x1074:  ret
080f60c4 +0x1075:  push   %ebp
080f60c5 +0x1076:  mov    %esp,%ebp
080f60c7 +0x1078:  mov    0x8(%ebp),%eax
080f60ca +0x107b:  add    $0x10,%eax
080f60cd +0x107e:  pop    %ebp
080f60ce +0x107f:  ret
080f60cf +0x1080:  nop
080f60d0 +0x1081:  push   %ebp
080f60d1 +0x1082:  mov    %esp,%ebp
080f60d3 +0x1084:  mov    0xc(%ebp),%eax
080f60d6 +0x1087:  pop    %ebp
080f60d7 +0x1088:  ret
080f60d8 +0x1089:  push   %ebp
080f60d9 +0x108a:  mov    %esp,%ebp
080f60db +0x108c:  sub    $0x28,%esp
080f60de +0x108f:  mov    0x8(%ebp),%eax
080f60e1 +0x1092:  mov    %eax,(%esp)
080f60e4 +0x1095:  call   080f6196 <+0x1147>
080f60e9 +0x109a:  mov    %eax,0x4(%esp)
080f60ed +0x109e:  lea    -0x9(%ebp),%eax
080f60f0 +0x10a1:  mov    %eax,(%esp)
080f60f3 +0x10a4:  call   080f6106 <+0x10b7>
080f60f8 +0x10a9:  leave
080f60f9 +0x10aa:  ret
080f60fa +0x10ab:  push   %ebp
080f60fb +0x10ac:  mov    %esp,%ebp
080f60fd +0x10ae:  mov    0x8(%ebp),%eax
080f6100 +0x10b1:  add    $0x10,%eax
080f6103 +0x10b4:  pop    %ebp
080f6104 +0x10b5:  ret
080f6105 +0x10b6:  nop
080f6106 +0x10b7:  push   %ebp
080f6107 +0x10b8:  mov    %esp,%ebp
080f6109 +0x10ba:  mov    0xc(%ebp),%eax
080f610c +0x10bd:  pop    %ebp
080f610d +0x10be:  ret
080f610e +0x10bf:  push   %ebp
080f610f +0x10c0:  mov    %esp,%ebp
080f6111 +0x10c2:  mov    0x8(%ebp),%eax
080f6114 +0x10c5:  mov    (%eax),%edx
080f6116 +0x10c7:  mov    0xc(%ebp),%eax
080f6119 +0x10ca:  mov    (%eax),%eax
080f611b +0x10cc:  cmp    %eax,%edx
080f611d +0x10ce:  jl     080f613d <+0x10ee>
080f611f +0x10d0:  mov    0xc(%ebp),%eax
080f6122 +0x10d3:  mov    (%eax),%edx
080f6124 +0x10d5:  mov    0x8(%ebp),%eax
080f6127 +0x10d8:  mov    (%eax),%eax
080f6129 +0x10da:  cmp    %eax,%edx
080f612b +0x10dc:  jl     080f6144 <+0x10f5>
080f612d +0x10de:  mov    0x8(%ebp),%eax
080f6130 +0x10e1:  mov    0x4(%eax),%edx
080f6133 +0x10e4:  mov    0xc(%ebp),%eax
080f6136 +0x10e7:  mov    0x4(%eax),%eax
080f6139 +0x10ea:  cmp    %eax,%edx
080f613b +0x10ec:  jge    080f6144 <+0x10f5>
080f613d +0x10ee:  mov    $0x1,%eax
080f6142 +0x10f3:  jmp    080f6149 <+0x10fa>
080f6144 +0x10f5:  mov    $0x0,%eax
080f6149 +0x10fa:  pop    %ebp
080f614a +0x10fb:  ret
080f614b +0x10fc:  nop
080f614c +0x10fd:  push   %ebp
080f614d +0x10fe:  mov    %esp,%ebp
080f614f +0x1100:  pop    %ebp
080f6150 +0x1101:  ret
080f6151 +0x1102:  nop
080f6152 +0x1103:  push   %ebp
080f6153 +0x1104:  mov    %esp,%ebp
080f6155 +0x1106:  sub    $0x18,%esp
080f6158 +0x1109:  mov    0xc(%ebp),%eax
080f615b +0x110c:  mov    %eax,(%esp)
080f615e +0x110f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080f6163 +0x1114:  leave
080f6164 +0x1115:  ret
080f6165 +0x1116:  nop
080f6166 +0x1117:  push   %ebp
080f6167 +0x1118:  mov    %esp,%ebp
080f6169 +0x111a:  pop    %ebp
080f616a +0x111b:  ret
080f616b +0x111c:  nop
080f616c +0x111d:  push   %ebp
080f616d +0x111e:  mov    %esp,%ebp
080f616f +0x1120:  sub    $0x18,%esp
080f6172 +0x1123:  mov    0xc(%ebp),%eax
080f6175 +0x1126:  mov    %eax,(%esp)
080f6178 +0x1129:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080f617d +0x112e:  leave
080f617e +0x112f:  ret
080f617f +0x1130:  nop
080f6180 +0x1131:  push   %ebp
080f6181 +0x1132:  mov    %esp,%ebp
080f6183 +0x1134:  pop    %ebp
080f6184 +0x1135:  ret
080f6185 +0x1136:  nop
080f6186 +0x1137:  push   %ebp
080f6187 +0x1138:  mov    %esp,%ebp
080f6189 +0x113a:  pop    %ebp
080f618a +0x113b:  ret
080f618b +0x113c:  push   %ebp
080f618c +0x113d:  mov    %esp,%ebp
080f618e +0x113f:  mov    0x8(%ebp),%eax
080f6191 +0x1142:  add    $0x10,%eax
080f6194 +0x1145:  pop    %ebp
080f6195 +0x1146:  ret
080f6196 +0x1147:  push   %ebp
080f6197 +0x1148:  mov    %esp,%ebp
080f6199 +0x114a:  mov    0x8(%ebp),%eax
080f619c +0x114d:  add    $0x10,%eax
080f619f +0x1150:  pop    %ebp
080f61a0 +0x1151:  ret
080f61a1 +0x1152:  nop
080f61a2 +0x1153:  nop
080f61a3 +0x1154:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80f504f

/* Event_Upgrade_Jar::Event_Upgrade_Jar() */

void Event_Upgrade_Jar::_GLOBAL__I_Event_Upgrade_Jar(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
