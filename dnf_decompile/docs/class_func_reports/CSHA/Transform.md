# Transform

`_ZN4CSHA9TransformEv`

`CSHA::Transform()`

| 类 | 地址 |
|---|---|
| `CSHA` | `0x080bb9e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080bb9e4  _ZN4CSHA9TransformEv
#           CSHA::Transform()
# range [0x080bb9e4, 0x080bd977]
080bb9e4 +0x0000:  push   %ebp
080bb9e5 +0x0001:  mov    %esp,%ebp
080bb9e7 +0x0003:  push   %esi
080bb9e8 +0x0004:  push   %ebx
080bb9e9 +0x0005:  sub    $0x140,%esp
080bb9ef +0x000b:  mov    0x8(%ebp),%eax
080bb9f2 +0x000e:  add    $0x28,%eax
080bb9f5 +0x0011:  mov    %eax,-0x34(%ebp)
080bb9f8 +0x0014:  movl   $0x0,-0x30(%ebp)
080bb9ff +0x001b:  jmp    080bba26 <+0x42>
080bba01 +0x001d:  mov    -0x30(%ebp),%edx
080bba04 +0x0020:  lea    -0x134(%ebp),%eax
080bba0a +0x0026:  shl    $0x2,%edx
080bba0d +0x0029:  add    %edx,%eax
080bba0f +0x002b:  mov    %eax,0x4(%esp)
080bba13 +0x002f:  mov    -0x34(%ebp),%eax
080bba16 +0x0032:  mov    %eax,(%esp)
080bba19 +0x0035:  call   080bd8e4 <+0x1f00>
080bba1e +0x003a:  addl   $0x1,-0x30(%ebp)
080bba22 +0x003e:  addl   $0x4,-0x34(%ebp)
080bba26 +0x0042:  cmpl   $0xf,-0x30(%ebp)
080bba2a +0x0046:  setle  %al
080bba2d +0x0049:  test   %al,%al
080bba2f +0x004b:  jne    080bba01 <+0x1d>
080bba31 +0x004d:  movl   $0x10,-0x30(%ebp)
080bba38 +0x0054:  jmp    080bba95 <+0xb1>
080bba3a +0x0056:  mov    -0x30(%ebp),%ebx
080bba3d +0x0059:  mov    -0x30(%ebp),%eax
080bba40 +0x005c:  sub    $0x2,%eax
080bba43 +0x005f:  mov    -0x134(%ebp,%eax,4),%eax
080bba4a +0x0066:  mov    %eax,(%esp)
080bba4d +0x0069:  call   080bd8c6 <+0x1ee2>
080bba52 +0x006e:  mov    -0x30(%ebp),%edx
080bba55 +0x0071:  sub    $0x7,%edx
080bba58 +0x0074:  mov    -0x134(%ebp,%edx,4),%edx
080bba5f +0x007b:  lea    (%eax,%edx,1),%esi
080bba62 +0x007e:  mov    -0x30(%ebp),%eax
080bba65 +0x0081:  sub    $0xf,%eax
080bba68 +0x0084:  mov    -0x134(%ebp,%eax,4),%eax
080bba6f +0x008b:  mov    %eax,(%esp)
080bba72 +0x008e:  call   080bd8a8 <+0x1ec4>
080bba77 +0x0093:  lea    (%esi,%eax,1),%edx
080bba7a +0x0096:  mov    -0x30(%ebp),%eax
080bba7d +0x0099:  sub    $0x10,%eax
080bba80 +0x009c:  mov    -0x134(%ebp,%eax,4),%eax
080bba87 +0x00a3:  lea    (%edx,%eax,1),%eax
080bba8a +0x00a6:  mov    %eax,-0x134(%ebp,%ebx,4)
080bba91 +0x00ad:  addl   $0x1,-0x30(%ebp)
080bba95 +0x00b1:  cmpl   $0x3f,-0x30(%ebp)
080bba99 +0x00b5:  setle  %al
080bba9c +0x00b8:  test   %al,%al
080bba9e +0x00ba:  jne    080bba3a <+0x56>
080bbaa0 +0x00bc:  mov    0x8(%ebp),%eax
080bbaa3 +0x00bf:  mov    (%eax),%eax
080bbaa5 +0x00c1:  mov    %eax,-0x2c(%ebp)
080bbaa8 +0x00c4:  mov    0x8(%ebp),%eax
080bbaab +0x00c7:  mov    0x4(%eax),%eax
080bbaae +0x00ca:  mov    %eax,-0x28(%ebp)
080bbab1 +0x00cd:  mov    0x8(%ebp),%eax
080bbab4 +0x00d0:  mov    0x8(%eax),%eax
080bbab7 +0x00d3:  mov    %eax,-0x24(%ebp)
080bbaba +0x00d6:  mov    0x8(%ebp),%eax
080bbabd +0x00d9:  mov    0xc(%eax),%eax
080bbac0 +0x00dc:  mov    %eax,-0x20(%ebp)
080bbac3 +0x00df:  mov    0x8(%ebp),%eax
080bbac6 +0x00e2:  mov    0x10(%eax),%eax
080bbac9 +0x00e5:  mov    %eax,-0x1c(%ebp)
080bbacc +0x00e8:  mov    0x8(%ebp),%eax
080bbacf +0x00eb:  mov    0x14(%eax),%eax
080bbad2 +0x00ee:  mov    %eax,-0x18(%ebp)
080bbad5 +0x00f1:  mov    0x8(%ebp),%eax
080bbad8 +0x00f4:  mov    0x18(%eax),%eax
080bbadb +0x00f7:  mov    %eax,-0x14(%ebp)
080bbade +0x00fa:  mov    0x8(%ebp),%eax
080bbae1 +0x00fd:  mov    0x1c(%eax),%eax
080bbae4 +0x0100:  mov    %eax,-0x10(%ebp)
080bbae7 +0x0103:  mov    -0x1c(%ebp),%eax
080bbaea +0x0106:  mov    %eax,(%esp)
080bbaed +0x0109:  call   080bd88a <+0x1ea6>
080bbaf2 +0x010e:  mov    %eax,%ebx
080bbaf4 +0x0110:  add    -0x10(%ebp),%ebx
080bbaf7 +0x0113:  mov    -0x14(%ebp),%eax
080bbafa +0x0116:  mov    %eax,0x8(%esp)
080bbafe +0x011a:  mov    -0x18(%ebp),%eax
080bbb01 +0x011d:  mov    %eax,0x4(%esp)
080bbb05 +0x0121:  mov    -0x1c(%ebp),%eax
080bbb08 +0x0124:  mov    %eax,(%esp)
080bbb0b +0x0127:  call   080bd83e <+0x1e5a>
080bbb10 +0x012c:  lea    (%ebx,%eax,1),%edx
080bbb13 +0x012f:  mov    &_ZN4CSHA7sm_K256E,%eax
080bbb18 +0x0134:  add    %eax,%edx
080bbb1a +0x0136:  mov    -0x134(%ebp),%eax
080bbb20 +0x013c:  lea    (%edx,%eax,1),%eax
080bbb23 +0x013f:  mov    %eax,-0xc(%ebp)
080bbb26 +0x0142:  mov    -0x2c(%ebp),%eax
080bbb29 +0x0145:  mov    %eax,(%esp)
080bbb2c +0x0148:  call   080bd86c <+0x1e88>
080bbb31 +0x014d:  mov    %eax,%ebx
080bbb33 +0x014f:  add    -0xc(%ebp),%ebx
080bbb36 +0x0152:  mov    -0x24(%ebp),%eax
080bbb39 +0x0155:  mov    %eax,0x8(%esp)
080bbb3d +0x0159:  mov    -0x28(%ebp),%eax
080bbb40 +0x015c:  mov    %eax,0x4(%esp)
080bbb44 +0x0160:  mov    -0x2c(%ebp),%eax
080bbb47 +0x0163:  mov    %eax,(%esp)
080bbb4a +0x0166:  call   080bd852 <+0x1e6e>
080bbb4f +0x016b:  lea    (%ebx,%eax,1),%eax
080bbb52 +0x016e:  mov    %eax,-0x10(%ebp)
080bbb55 +0x0171:  mov    -0xc(%ebp),%eax
080bbb58 +0x0174:  add    %eax,-0x20(%ebp)
080bbb5b +0x0177:  mov    -0x20(%ebp),%eax
080bbb5e +0x017a:  mov    %eax,(%esp)
080bbb61 +0x017d:  call   080bd88a <+0x1ea6>
080bbb66 +0x0182:  mov    %eax,%ebx
080bbb68 +0x0184:  add    -0x14(%ebp),%ebx
080bbb6b +0x0187:  mov    -0x18(%ebp),%eax
080bbb6e +0x018a:  mov    %eax,0x8(%esp)
080bbb72 +0x018e:  mov    -0x1c(%ebp),%eax
080bbb75 +0x0191:  mov    %eax,0x4(%esp)
080bbb79 +0x0195:  mov    -0x20(%ebp),%eax
080bbb7c +0x0198:  mov    %eax,(%esp)
080bbb7f +0x019b:  call   080bd83e <+0x1e5a>
080bbb84 +0x01a0:  lea    (%ebx,%eax,1),%edx
080bbb87 +0x01a3:  mov    &_ZN4CSHA7sm_K256E+0x4,%eax
080bbb8c +0x01a8:  add    %eax,%edx
080bbb8e +0x01aa:  mov    -0x130(%ebp),%eax
080bbb94 +0x01b0:  lea    (%edx,%eax,1),%eax
080bbb97 +0x01b3:  mov    %eax,-0xc(%ebp)
080bbb9a +0x01b6:  mov    -0x10(%ebp),%eax
080bbb9d +0x01b9:  mov    %eax,(%esp)
080bbba0 +0x01bc:  call   080bd86c <+0x1e88>
080bbba5 +0x01c1:  mov    %eax,%ebx
080bbba7 +0x01c3:  add    -0xc(%ebp),%ebx
080bbbaa +0x01c6:  mov    -0x28(%ebp),%eax
080bbbad +0x01c9:  mov    %eax,0x8(%esp)
080bbbb1 +0x01cd:  mov    -0x2c(%ebp),%eax
080bbbb4 +0x01d0:  mov    %eax,0x4(%esp)
080bbbb8 +0x01d4:  mov    -0x10(%ebp),%eax
080bbbbb +0x01d7:  mov    %eax,(%esp)
080bbbbe +0x01da:  call   080bd852 <+0x1e6e>
080bbbc3 +0x01df:  lea    (%ebx,%eax,1),%eax
080bbbc6 +0x01e2:  mov    %eax,-0x14(%ebp)
080bbbc9 +0x01e5:  mov    -0xc(%ebp),%eax
080bbbcc +0x01e8:  add    %eax,-0x24(%ebp)
080bbbcf +0x01eb:  mov    -0x24(%ebp),%eax
080bbbd2 +0x01ee:  mov    %eax,(%esp)
080bbbd5 +0x01f1:  call   080bd88a <+0x1ea6>
080bbbda +0x01f6:  mov    %eax,%ebx
080bbbdc +0x01f8:  add    -0x18(%ebp),%ebx
080bbbdf +0x01fb:  mov    -0x1c(%ebp),%eax
080bbbe2 +0x01fe:  mov    %eax,0x8(%esp)
080bbbe6 +0x0202:  mov    -0x20(%ebp),%eax
080bbbe9 +0x0205:  mov    %eax,0x4(%esp)
080bbbed +0x0209:  mov    -0x24(%ebp),%eax
080bbbf0 +0x020c:  mov    %eax,(%esp)
080bbbf3 +0x020f:  call   080bd83e <+0x1e5a>
080bbbf8 +0x0214:  lea    (%ebx,%eax,1),%edx
080bbbfb +0x0217:  mov    &_ZN4CSHA7sm_K256E+0x8,%eax
080bbc00 +0x021c:  add    %eax,%edx
080bbc02 +0x021e:  mov    -0x12c(%ebp),%eax
080bbc08 +0x0224:  lea    (%edx,%eax,1),%eax
080bbc0b +0x0227:  mov    %eax,-0xc(%ebp)
080bbc0e +0x022a:  mov    -0x14(%ebp),%eax
080bbc11 +0x022d:  mov    %eax,(%esp)
080bbc14 +0x0230:  call   080bd86c <+0x1e88>
080bbc19 +0x0235:  mov    %eax,%ebx
080bbc1b +0x0237:  add    -0xc(%ebp),%ebx
080bbc1e +0x023a:  mov    -0x2c(%ebp),%eax
080bbc21 +0x023d:  mov    %eax,0x8(%esp)
080bbc25 +0x0241:  mov    -0x10(%ebp),%eax
080bbc28 +0x0244:  mov    %eax,0x4(%esp)
080bbc2c +0x0248:  mov    -0x14(%ebp),%eax
080bbc2f +0x024b:  mov    %eax,(%esp)
080bbc32 +0x024e:  call   080bd852 <+0x1e6e>
080bbc37 +0x0253:  lea    (%ebx,%eax,1),%eax
080bbc3a +0x0256:  mov    %eax,-0x18(%ebp)
080bbc3d +0x0259:  mov    -0xc(%ebp),%eax
080bbc40 +0x025c:  add    %eax,-0x28(%ebp)
080bbc43 +0x025f:  mov    -0x28(%ebp),%eax
080bbc46 +0x0262:  mov    %eax,(%esp)
080bbc49 +0x0265:  call   080bd88a <+0x1ea6>
080bbc4e +0x026a:  mov    %eax,%ebx
080bbc50 +0x026c:  add    -0x1c(%ebp),%ebx
080bbc53 +0x026f:  mov    -0x20(%ebp),%eax
080bbc56 +0x0272:  mov    %eax,0x8(%esp)
080bbc5a +0x0276:  mov    -0x24(%ebp),%eax
080bbc5d +0x0279:  mov    %eax,0x4(%esp)
080bbc61 +0x027d:  mov    -0x28(%ebp),%eax
080bbc64 +0x0280:  mov    %eax,(%esp)
080bbc67 +0x0283:  call   080bd83e <+0x1e5a>
080bbc6c +0x0288:  lea    (%ebx,%eax,1),%edx
080bbc6f +0x028b:  mov    &_ZN4CSHA7sm_K256E+0xc,%eax
080bbc74 +0x0290:  add    %eax,%edx
080bbc76 +0x0292:  mov    -0x128(%ebp),%eax
080bbc7c +0x0298:  lea    (%edx,%eax,1),%eax
080bbc7f +0x029b:  mov    %eax,-0xc(%ebp)
080bbc82 +0x029e:  mov    -0x18(%ebp),%eax
080bbc85 +0x02a1:  mov    %eax,(%esp)
080bbc88 +0x02a4:  call   080bd86c <+0x1e88>
080bbc8d +0x02a9:  mov    %eax,%ebx
080bbc8f +0x02ab:  add    -0xc(%ebp),%ebx
080bbc92 +0x02ae:  mov    -0x10(%ebp),%eax
080bbc95 +0x02b1:  mov    %eax,0x8(%esp)
080bbc99 +0x02b5:  mov    -0x14(%ebp),%eax
080bbc9c +0x02b8:  mov    %eax,0x4(%esp)
080bbca0 +0x02bc:  mov    -0x18(%ebp),%eax
080bbca3 +0x02bf:  mov    %eax,(%esp)
080bbca6 +0x02c2:  call   080bd852 <+0x1e6e>
080bbcab +0x02c7:  lea    (%ebx,%eax,1),%eax
080bbcae +0x02ca:  mov    %eax,-0x1c(%ebp)
080bbcb1 +0x02cd:  mov    -0xc(%ebp),%eax
080bbcb4 +0x02d0:  add    %eax,-0x2c(%ebp)
080bbcb7 +0x02d3:  mov    -0x2c(%ebp),%eax
080bbcba +0x02d6:  mov    %eax,(%esp)
080bbcbd +0x02d9:  call   080bd88a <+0x1ea6>
080bbcc2 +0x02de:  mov    %eax,%ebx
080bbcc4 +0x02e0:  add    -0x20(%ebp),%ebx
080bbcc7 +0x02e3:  mov    -0x24(%ebp),%eax
080bbcca +0x02e6:  mov    %eax,0x8(%esp)
080bbcce +0x02ea:  mov    -0x28(%ebp),%eax
080bbcd1 +0x02ed:  mov    %eax,0x4(%esp)
080bbcd5 +0x02f1:  mov    -0x2c(%ebp),%eax
080bbcd8 +0x02f4:  mov    %eax,(%esp)
080bbcdb +0x02f7:  call   080bd83e <+0x1e5a>
080bbce0 +0x02fc:  lea    (%ebx,%eax,1),%edx
080bbce3 +0x02ff:  mov    &_ZN4CSHA7sm_K256E+0x10,%eax
080bbce8 +0x0304:  add    %eax,%edx
080bbcea +0x0306:  mov    -0x124(%ebp),%eax
080bbcf0 +0x030c:  lea    (%edx,%eax,1),%eax
080bbcf3 +0x030f:  mov    %eax,-0xc(%ebp)
080bbcf6 +0x0312:  mov    -0x1c(%ebp),%eax
080bbcf9 +0x0315:  mov    %eax,(%esp)
080bbcfc +0x0318:  call   080bd86c <+0x1e88>
080bbd01 +0x031d:  mov    %eax,%ebx
080bbd03 +0x031f:  add    -0xc(%ebp),%ebx
080bbd06 +0x0322:  mov    -0x14(%ebp),%eax
080bbd09 +0x0325:  mov    %eax,0x8(%esp)
080bbd0d +0x0329:  mov    -0x18(%ebp),%eax
080bbd10 +0x032c:  mov    %eax,0x4(%esp)
080bbd14 +0x0330:  mov    -0x1c(%ebp),%eax
080bbd17 +0x0333:  mov    %eax,(%esp)
080bbd1a +0x0336:  call   080bd852 <+0x1e6e>
080bbd1f +0x033b:  lea    (%ebx,%eax,1),%eax
080bbd22 +0x033e:  mov    %eax,-0x20(%ebp)
080bbd25 +0x0341:  mov    -0xc(%ebp),%eax
080bbd28 +0x0344:  add    %eax,-0x10(%ebp)
080bbd2b +0x0347:  mov    -0x10(%ebp),%eax
080bbd2e +0x034a:  mov    %eax,(%esp)
080bbd31 +0x034d:  call   080bd88a <+0x1ea6>
080bbd36 +0x0352:  mov    %eax,%ebx
080bbd38 +0x0354:  add    -0x24(%ebp),%ebx
080bbd3b +0x0357:  mov    -0x28(%ebp),%eax
080bbd3e +0x035a:  mov    %eax,0x8(%esp)
080bbd42 +0x035e:  mov    -0x2c(%ebp),%eax
080bbd45 +0x0361:  mov    %eax,0x4(%esp)
080bbd49 +0x0365:  mov    -0x10(%ebp),%eax
080bbd4c +0x0368:  mov    %eax,(%esp)
080bbd4f +0x036b:  call   080bd83e <+0x1e5a>
080bbd54 +0x0370:  lea    (%ebx,%eax,1),%edx
080bbd57 +0x0373:  mov    &_ZN4CSHA7sm_K256E+0x14,%eax
080bbd5c +0x0378:  add    %eax,%edx
080bbd5e +0x037a:  mov    -0x120(%ebp),%eax
080bbd64 +0x0380:  lea    (%edx,%eax,1),%eax
080bbd67 +0x0383:  mov    %eax,-0xc(%ebp)
080bbd6a +0x0386:  mov    -0x20(%ebp),%eax
080bbd6d +0x0389:  mov    %eax,(%esp)
080bbd70 +0x038c:  call   080bd86c <+0x1e88>
080bbd75 +0x0391:  mov    %eax,%ebx
080bbd77 +0x0393:  add    -0xc(%ebp),%ebx
080bbd7a +0x0396:  mov    -0x18(%ebp),%eax
080bbd7d +0x0399:  mov    %eax,0x8(%esp)
080bbd81 +0x039d:  mov    -0x1c(%ebp),%eax
080bbd84 +0x03a0:  mov    %eax,0x4(%esp)
080bbd88 +0x03a4:  mov    -0x20(%ebp),%eax
080bbd8b +0x03a7:  mov    %eax,(%esp)
080bbd8e +0x03aa:  call   080bd852 <+0x1e6e>
080bbd93 +0x03af:  lea    (%ebx,%eax,1),%eax
080bbd96 +0x03b2:  mov    %eax,-0x24(%ebp)
080bbd99 +0x03b5:  mov    -0xc(%ebp),%eax
080bbd9c +0x03b8:  add    %eax,-0x14(%ebp)
080bbd9f +0x03bb:  mov    -0x14(%ebp),%eax
080bbda2 +0x03be:  mov    %eax,(%esp)
080bbda5 +0x03c1:  call   080bd88a <+0x1ea6>
080bbdaa +0x03c6:  mov    %eax,%ebx
080bbdac +0x03c8:  add    -0x28(%ebp),%ebx
080bbdaf +0x03cb:  mov    -0x2c(%ebp),%eax
080bbdb2 +0x03ce:  mov    %eax,0x8(%esp)
080bbdb6 +0x03d2:  mov    -0x10(%ebp),%eax
080bbdb9 +0x03d5:  mov    %eax,0x4(%esp)
080bbdbd +0x03d9:  mov    -0x14(%ebp),%eax
080bbdc0 +0x03dc:  mov    %eax,(%esp)
080bbdc3 +0x03df:  call   080bd83e <+0x1e5a>
080bbdc8 +0x03e4:  lea    (%ebx,%eax,1),%edx
080bbdcb +0x03e7:  mov    &_ZN4CSHA7sm_K256E+0x18,%eax
080bbdd0 +0x03ec:  add    %eax,%edx
080bbdd2 +0x03ee:  mov    -0x11c(%ebp),%eax
080bbdd8 +0x03f4:  lea    (%edx,%eax,1),%eax
080bbddb +0x03f7:  mov    %eax,-0xc(%ebp)
080bbdde +0x03fa:  mov    -0x24(%ebp),%eax
080bbde1 +0x03fd:  mov    %eax,(%esp)
080bbde4 +0x0400:  call   080bd86c <+0x1e88>
080bbde9 +0x0405:  mov    %eax,%ebx
080bbdeb +0x0407:  add    -0xc(%ebp),%ebx
080bbdee +0x040a:  mov    -0x1c(%ebp),%eax
080bbdf1 +0x040d:  mov    %eax,0x8(%esp)
080bbdf5 +0x0411:  mov    -0x20(%ebp),%eax
080bbdf8 +0x0414:  mov    %eax,0x4(%esp)
080bbdfc +0x0418:  mov    -0x24(%ebp),%eax
080bbdff +0x041b:  mov    %eax,(%esp)
080bbe02 +0x041e:  call   080bd852 <+0x1e6e>
080bbe07 +0x0423:  lea    (%ebx,%eax,1),%eax
080bbe0a +0x0426:  mov    %eax,-0x28(%ebp)
080bbe0d +0x0429:  mov    -0xc(%ebp),%eax
080bbe10 +0x042c:  add    %eax,-0x18(%ebp)
080bbe13 +0x042f:  mov    -0x18(%ebp),%eax
080bbe16 +0x0432:  mov    %eax,(%esp)
080bbe19 +0x0435:  call   080bd88a <+0x1ea6>
080bbe1e +0x043a:  mov    %eax,%ebx
080bbe20 +0x043c:  add    -0x2c(%ebp),%ebx
080bbe23 +0x043f:  mov    -0x10(%ebp),%eax
080bbe26 +0x0442:  mov    %eax,0x8(%esp)
080bbe2a +0x0446:  mov    -0x14(%ebp),%eax
080bbe2d +0x0449:  mov    %eax,0x4(%esp)
080bbe31 +0x044d:  mov    -0x18(%ebp),%eax
080bbe34 +0x0450:  mov    %eax,(%esp)
080bbe37 +0x0453:  call   080bd83e <+0x1e5a>
080bbe3c +0x0458:  lea    (%ebx,%eax,1),%edx
080bbe3f +0x045b:  mov    &_ZN4CSHA7sm_K256E+0x1c,%eax
080bbe44 +0x0460:  add    %eax,%edx
080bbe46 +0x0462:  mov    -0x118(%ebp),%eax
080bbe4c +0x0468:  lea    (%edx,%eax,1),%eax
080bbe4f +0x046b:  mov    %eax,-0xc(%ebp)
080bbe52 +0x046e:  mov    -0x28(%ebp),%eax
080bbe55 +0x0471:  mov    %eax,(%esp)
080bbe58 +0x0474:  call   080bd86c <+0x1e88>
080bbe5d +0x0479:  mov    %eax,%ebx
080bbe5f +0x047b:  add    -0xc(%ebp),%ebx
080bbe62 +0x047e:  mov    -0x20(%ebp),%eax
080bbe65 +0x0481:  mov    %eax,0x8(%esp)
080bbe69 +0x0485:  mov    -0x24(%ebp),%eax
080bbe6c +0x0488:  mov    %eax,0x4(%esp)
080bbe70 +0x048c:  mov    -0x28(%ebp),%eax
080bbe73 +0x048f:  mov    %eax,(%esp)
080bbe76 +0x0492:  call   080bd852 <+0x1e6e>
080bbe7b +0x0497:  lea    (%ebx,%eax,1),%eax
080bbe7e +0x049a:  mov    %eax,-0x2c(%ebp)
080bbe81 +0x049d:  mov    -0xc(%ebp),%eax
080bbe84 +0x04a0:  add    %eax,-0x1c(%ebp)
080bbe87 +0x04a3:  mov    -0x1c(%ebp),%eax
080bbe8a +0x04a6:  mov    %eax,(%esp)
080bbe8d +0x04a9:  call   080bd88a <+0x1ea6>
080bbe92 +0x04ae:  mov    %eax,%ebx
080bbe94 +0x04b0:  add    -0x10(%ebp),%ebx
080bbe97 +0x04b3:  mov    -0x14(%ebp),%eax
080bbe9a +0x04b6:  mov    %eax,0x8(%esp)
080bbe9e +0x04ba:  mov    -0x18(%ebp),%eax
080bbea1 +0x04bd:  mov    %eax,0x4(%esp)
080bbea5 +0x04c1:  mov    -0x1c(%ebp),%eax
080bbea8 +0x04c4:  mov    %eax,(%esp)
080bbeab +0x04c7:  call   080bd83e <+0x1e5a>
080bbeb0 +0x04cc:  lea    (%ebx,%eax,1),%edx
080bbeb3 +0x04cf:  mov    &_ZN4CSHA7sm_K256E+0x20,%eax
080bbeb8 +0x04d4:  add    %eax,%edx
080bbeba +0x04d6:  mov    -0x114(%ebp),%eax
080bbec0 +0x04dc:  lea    (%edx,%eax,1),%eax
080bbec3 +0x04df:  mov    %eax,-0xc(%ebp)
080bbec6 +0x04e2:  mov    -0x2c(%ebp),%eax
080bbec9 +0x04e5:  mov    %eax,(%esp)
080bbecc +0x04e8:  call   080bd86c <+0x1e88>
080bbed1 +0x04ed:  mov    %eax,%ebx
080bbed3 +0x04ef:  add    -0xc(%ebp),%ebx
080bbed6 +0x04f2:  mov    -0x24(%ebp),%eax
080bbed9 +0x04f5:  mov    %eax,0x8(%esp)
080bbedd +0x04f9:  mov    -0x28(%ebp),%eax
080bbee0 +0x04fc:  mov    %eax,0x4(%esp)
080bbee4 +0x0500:  mov    -0x2c(%ebp),%eax
080bbee7 +0x0503:  mov    %eax,(%esp)
080bbeea +0x0506:  call   080bd852 <+0x1e6e>
080bbeef +0x050b:  lea    (%ebx,%eax,1),%eax
080bbef2 +0x050e:  mov    %eax,-0x10(%ebp)
080bbef5 +0x0511:  mov    -0xc(%ebp),%eax
080bbef8 +0x0514:  add    %eax,-0x20(%ebp)
080bbefb +0x0517:  mov    -0x20(%ebp),%eax
080bbefe +0x051a:  mov    %eax,(%esp)
080bbf01 +0x051d:  call   080bd88a <+0x1ea6>
080bbf06 +0x0522:  mov    %eax,%ebx
080bbf08 +0x0524:  add    -0x14(%ebp),%ebx
080bbf0b +0x0527:  mov    -0x18(%ebp),%eax
080bbf0e +0x052a:  mov    %eax,0x8(%esp)
080bbf12 +0x052e:  mov    -0x1c(%ebp),%eax
080bbf15 +0x0531:  mov    %eax,0x4(%esp)
080bbf19 +0x0535:  mov    -0x20(%ebp),%eax
080bbf1c +0x0538:  mov    %eax,(%esp)
080bbf1f +0x053b:  call   080bd83e <+0x1e5a>
080bbf24 +0x0540:  lea    (%ebx,%eax,1),%edx
080bbf27 +0x0543:  mov    &_ZN4CSHA7sm_K256E+0x24,%eax
080bbf2c +0x0548:  add    %eax,%edx
080bbf2e +0x054a:  mov    -0x110(%ebp),%eax
080bbf34 +0x0550:  lea    (%edx,%eax,1),%eax
080bbf37 +0x0553:  mov    %eax,-0xc(%ebp)
080bbf3a +0x0556:  mov    -0x10(%ebp),%eax
080bbf3d +0x0559:  mov    %eax,(%esp)
080bbf40 +0x055c:  call   080bd86c <+0x1e88>
080bbf45 +0x0561:  mov    %eax,%ebx
080bbf47 +0x0563:  add    -0xc(%ebp),%ebx
080bbf4a +0x0566:  mov    -0x28(%ebp),%eax
080bbf4d +0x0569:  mov    %eax,0x8(%esp)
080bbf51 +0x056d:  mov    -0x2c(%ebp),%eax
080bbf54 +0x0570:  mov    %eax,0x4(%esp)
080bbf58 +0x0574:  mov    -0x10(%ebp),%eax
080bbf5b +0x0577:  mov    %eax,(%esp)
080bbf5e +0x057a:  call   080bd852 <+0x1e6e>
080bbf63 +0x057f:  lea    (%ebx,%eax,1),%eax
080bbf66 +0x0582:  mov    %eax,-0x14(%ebp)
080bbf69 +0x0585:  mov    -0xc(%ebp),%eax
080bbf6c +0x0588:  add    %eax,-0x24(%ebp)
080bbf6f +0x058b:  mov    -0x24(%ebp),%eax
080bbf72 +0x058e:  mov    %eax,(%esp)
080bbf75 +0x0591:  call   080bd88a <+0x1ea6>
080bbf7a +0x0596:  mov    %eax,%ebx
080bbf7c +0x0598:  add    -0x18(%ebp),%ebx
080bbf7f +0x059b:  mov    -0x1c(%ebp),%eax
080bbf82 +0x059e:  mov    %eax,0x8(%esp)
080bbf86 +0x05a2:  mov    -0x20(%ebp),%eax
080bbf89 +0x05a5:  mov    %eax,0x4(%esp)
080bbf8d +0x05a9:  mov    -0x24(%ebp),%eax
080bbf90 +0x05ac:  mov    %eax,(%esp)
080bbf93 +0x05af:  call   080bd83e <+0x1e5a>
080bbf98 +0x05b4:  lea    (%ebx,%eax,1),%edx
080bbf9b +0x05b7:  mov    &_ZN4CSHA7sm_K256E+0x28,%eax
080bbfa0 +0x05bc:  add    %eax,%edx
080bbfa2 +0x05be:  mov    -0x10c(%ebp),%eax
080bbfa8 +0x05c4:  lea    (%edx,%eax,1),%eax
080bbfab +0x05c7:  mov    %eax,-0xc(%ebp)
080bbfae +0x05ca:  mov    -0x14(%ebp),%eax
080bbfb1 +0x05cd:  mov    %eax,(%esp)
080bbfb4 +0x05d0:  call   080bd86c <+0x1e88>
080bbfb9 +0x05d5:  mov    %eax,%ebx
080bbfbb +0x05d7:  add    -0xc(%ebp),%ebx
080bbfbe +0x05da:  mov    -0x2c(%ebp),%eax
080bbfc1 +0x05dd:  mov    %eax,0x8(%esp)
080bbfc5 +0x05e1:  mov    -0x10(%ebp),%eax
080bbfc8 +0x05e4:  mov    %eax,0x4(%esp)
080bbfcc +0x05e8:  mov    -0x14(%ebp),%eax
080bbfcf +0x05eb:  mov    %eax,(%esp)
080bbfd2 +0x05ee:  call   080bd852 <+0x1e6e>
080bbfd7 +0x05f3:  lea    (%ebx,%eax,1),%eax
080bbfda +0x05f6:  mov    %eax,-0x18(%ebp)
080bbfdd +0x05f9:  mov    -0xc(%ebp),%eax
080bbfe0 +0x05fc:  add    %eax,-0x28(%ebp)
080bbfe3 +0x05ff:  mov    -0x28(%ebp),%eax
080bbfe6 +0x0602:  mov    %eax,(%esp)
080bbfe9 +0x0605:  call   080bd88a <+0x1ea6>
080bbfee +0x060a:  mov    %eax,%ebx
080bbff0 +0x060c:  add    -0x1c(%ebp),%ebx
080bbff3 +0x060f:  mov    -0x20(%ebp),%eax
080bbff6 +0x0612:  mov    %eax,0x8(%esp)
080bbffa +0x0616:  mov    -0x24(%ebp),%eax
080bbffd +0x0619:  mov    %eax,0x4(%esp)
080bc001 +0x061d:  mov    -0x28(%ebp),%eax
080bc004 +0x0620:  mov    %eax,(%esp)
080bc007 +0x0623:  call   080bd83e <+0x1e5a>
080bc00c +0x0628:  lea    (%ebx,%eax,1),%edx
080bc00f +0x062b:  mov    &_ZN4CSHA7sm_K256E+0x2c,%eax
080bc014 +0x0630:  add    %eax,%edx
080bc016 +0x0632:  mov    -0x108(%ebp),%eax
080bc01c +0x0638:  lea    (%edx,%eax,1),%eax
080bc01f +0x063b:  mov    %eax,-0xc(%ebp)
080bc022 +0x063e:  mov    -0x18(%ebp),%eax
080bc025 +0x0641:  mov    %eax,(%esp)
080bc028 +0x0644:  call   080bd86c <+0x1e88>
080bc02d +0x0649:  mov    %eax,%ebx
080bc02f +0x064b:  add    -0xc(%ebp),%ebx
080bc032 +0x064e:  mov    -0x10(%ebp),%eax
080bc035 +0x0651:  mov    %eax,0x8(%esp)
080bc039 +0x0655:  mov    -0x14(%ebp),%eax
080bc03c +0x0658:  mov    %eax,0x4(%esp)
080bc040 +0x065c:  mov    -0x18(%ebp),%eax
080bc043 +0x065f:  mov    %eax,(%esp)
080bc046 +0x0662:  call   080bd852 <+0x1e6e>
080bc04b +0x0667:  lea    (%ebx,%eax,1),%eax
080bc04e +0x066a:  mov    %eax,-0x1c(%ebp)
080bc051 +0x066d:  mov    -0xc(%ebp),%eax
080bc054 +0x0670:  add    %eax,-0x2c(%ebp)
080bc057 +0x0673:  mov    -0x2c(%ebp),%eax
080bc05a +0x0676:  mov    %eax,(%esp)
080bc05d +0x0679:  call   080bd88a <+0x1ea6>
080bc062 +0x067e:  mov    %eax,%ebx
080bc064 +0x0680:  add    -0x20(%ebp),%ebx
080bc067 +0x0683:  mov    -0x24(%ebp),%eax
080bc06a +0x0686:  mov    %eax,0x8(%esp)
080bc06e +0x068a:  mov    -0x28(%ebp),%eax
080bc071 +0x068d:  mov    %eax,0x4(%esp)
080bc075 +0x0691:  mov    -0x2c(%ebp),%eax
080bc078 +0x0694:  mov    %eax,(%esp)
080bc07b +0x0697:  call   080bd83e <+0x1e5a>
080bc080 +0x069c:  lea    (%ebx,%eax,1),%edx
080bc083 +0x069f:  mov    &_ZN4CSHA7sm_K256E+0x30,%eax
080bc088 +0x06a4:  add    %eax,%edx
080bc08a +0x06a6:  mov    -0x104(%ebp),%eax
080bc090 +0x06ac:  lea    (%edx,%eax,1),%eax
080bc093 +0x06af:  mov    %eax,-0xc(%ebp)
080bc096 +0x06b2:  mov    -0x1c(%ebp),%eax
080bc099 +0x06b5:  mov    %eax,(%esp)
080bc09c +0x06b8:  call   080bd86c <+0x1e88>
080bc0a1 +0x06bd:  mov    %eax,%ebx
080bc0a3 +0x06bf:  add    -0xc(%ebp),%ebx
080bc0a6 +0x06c2:  mov    -0x14(%ebp),%eax
080bc0a9 +0x06c5:  mov    %eax,0x8(%esp)
080bc0ad +0x06c9:  mov    -0x18(%ebp),%eax
080bc0b0 +0x06cc:  mov    %eax,0x4(%esp)
080bc0b4 +0x06d0:  mov    -0x1c(%ebp),%eax
080bc0b7 +0x06d3:  mov    %eax,(%esp)
080bc0ba +0x06d6:  call   080bd852 <+0x1e6e>
080bc0bf +0x06db:  lea    (%ebx,%eax,1),%eax
080bc0c2 +0x06de:  mov    %eax,-0x20(%ebp)
080bc0c5 +0x06e1:  mov    -0xc(%ebp),%eax
080bc0c8 +0x06e4:  add    %eax,-0x10(%ebp)
080bc0cb +0x06e7:  mov    -0x10(%ebp),%eax
080bc0ce +0x06ea:  mov    %eax,(%esp)
080bc0d1 +0x06ed:  call   080bd88a <+0x1ea6>
080bc0d6 +0x06f2:  mov    %eax,%ebx
080bc0d8 +0x06f4:  add    -0x24(%ebp),%ebx
080bc0db +0x06f7:  mov    -0x28(%ebp),%eax
080bc0de +0x06fa:  mov    %eax,0x8(%esp)
080bc0e2 +0x06fe:  mov    -0x2c(%ebp),%eax
080bc0e5 +0x0701:  mov    %eax,0x4(%esp)
080bc0e9 +0x0705:  mov    -0x10(%ebp),%eax
080bc0ec +0x0708:  mov    %eax,(%esp)
080bc0ef +0x070b:  call   080bd83e <+0x1e5a>
080bc0f4 +0x0710:  lea    (%ebx,%eax,1),%edx
080bc0f7 +0x0713:  mov    &_ZN4CSHA7sm_K256E+0x34,%eax
080bc0fc +0x0718:  add    %eax,%edx
080bc0fe +0x071a:  mov    -0x100(%ebp),%eax
080bc104 +0x0720:  lea    (%edx,%eax,1),%eax
080bc107 +0x0723:  mov    %eax,-0xc(%ebp)
080bc10a +0x0726:  mov    -0x20(%ebp),%eax
080bc10d +0x0729:  mov    %eax,(%esp)
080bc110 +0x072c:  call   080bd86c <+0x1e88>
080bc115 +0x0731:  mov    %eax,%ebx
080bc117 +0x0733:  add    -0xc(%ebp),%ebx
080bc11a +0x0736:  mov    -0x18(%ebp),%eax
080bc11d +0x0739:  mov    %eax,0x8(%esp)
080bc121 +0x073d:  mov    -0x1c(%ebp),%eax
080bc124 +0x0740:  mov    %eax,0x4(%esp)
080bc128 +0x0744:  mov    -0x20(%ebp),%eax
080bc12b +0x0747:  mov    %eax,(%esp)
080bc12e +0x074a:  call   080bd852 <+0x1e6e>
080bc133 +0x074f:  lea    (%ebx,%eax,1),%eax
080bc136 +0x0752:  mov    %eax,-0x24(%ebp)
080bc139 +0x0755:  mov    -0xc(%ebp),%eax
080bc13c +0x0758:  add    %eax,-0x14(%ebp)
080bc13f +0x075b:  mov    -0x14(%ebp),%eax
080bc142 +0x075e:  mov    %eax,(%esp)
080bc145 +0x0761:  call   080bd88a <+0x1ea6>
080bc14a +0x0766:  mov    %eax,%ebx
080bc14c +0x0768:  add    -0x28(%ebp),%ebx
080bc14f +0x076b:  mov    -0x2c(%ebp),%eax
080bc152 +0x076e:  mov    %eax,0x8(%esp)
080bc156 +0x0772:  mov    -0x10(%ebp),%eax
080bc159 +0x0775:  mov    %eax,0x4(%esp)
080bc15d +0x0779:  mov    -0x14(%ebp),%eax
080bc160 +0x077c:  mov    %eax,(%esp)
080bc163 +0x077f:  call   080bd83e <+0x1e5a>
080bc168 +0x0784:  lea    (%ebx,%eax,1),%edx
080bc16b +0x0787:  mov    &_ZN4CSHA7sm_K256E+0x38,%eax
080bc170 +0x078c:  add    %eax,%edx
080bc172 +0x078e:  mov    -0xfc(%ebp),%eax
080bc178 +0x0794:  lea    (%edx,%eax,1),%eax
080bc17b +0x0797:  mov    %eax,-0xc(%ebp)
080bc17e +0x079a:  mov    -0x24(%ebp),%eax
080bc181 +0x079d:  mov    %eax,(%esp)
080bc184 +0x07a0:  call   080bd86c <+0x1e88>
080bc189 +0x07a5:  mov    %eax,%ebx
080bc18b +0x07a7:  add    -0xc(%ebp),%ebx
080bc18e +0x07aa:  mov    -0x1c(%ebp),%eax
080bc191 +0x07ad:  mov    %eax,0x8(%esp)
080bc195 +0x07b1:  mov    -0x20(%ebp),%eax
080bc198 +0x07b4:  mov    %eax,0x4(%esp)
080bc19c +0x07b8:  mov    -0x24(%ebp),%eax
080bc19f +0x07bb:  mov    %eax,(%esp)
080bc1a2 +0x07be:  call   080bd852 <+0x1e6e>
080bc1a7 +0x07c3:  lea    (%ebx,%eax,1),%eax
080bc1aa +0x07c6:  mov    %eax,-0x28(%ebp)
080bc1ad +0x07c9:  mov    -0xc(%ebp),%eax
080bc1b0 +0x07cc:  add    %eax,-0x18(%ebp)
080bc1b3 +0x07cf:  mov    -0x18(%ebp),%eax
080bc1b6 +0x07d2:  mov    %eax,(%esp)
080bc1b9 +0x07d5:  call   080bd88a <+0x1ea6>
080bc1be +0x07da:  mov    %eax,%ebx
080bc1c0 +0x07dc:  add    -0x2c(%ebp),%ebx
080bc1c3 +0x07df:  mov    -0x10(%ebp),%eax
080bc1c6 +0x07e2:  mov    %eax,0x8(%esp)
080bc1ca +0x07e6:  mov    -0x14(%ebp),%eax
080bc1cd +0x07e9:  mov    %eax,0x4(%esp)
080bc1d1 +0x07ed:  mov    -0x18(%ebp),%eax
080bc1d4 +0x07f0:  mov    %eax,(%esp)
080bc1d7 +0x07f3:  call   080bd83e <+0x1e5a>
080bc1dc +0x07f8:  lea    (%ebx,%eax,1),%edx
080bc1df +0x07fb:  mov    &_ZN4CSHA7sm_K256E+0x3c,%eax
080bc1e4 +0x0800:  add    %eax,%edx
080bc1e6 +0x0802:  mov    -0xf8(%ebp),%eax
080bc1ec +0x0808:  lea    (%edx,%eax,1),%eax
080bc1ef +0x080b:  mov    %eax,-0xc(%ebp)
080bc1f2 +0x080e:  mov    -0x28(%ebp),%eax
080bc1f5 +0x0811:  mov    %eax,(%esp)
080bc1f8 +0x0814:  call   080bd86c <+0x1e88>
080bc1fd +0x0819:  mov    %eax,%ebx
080bc1ff +0x081b:  add    -0xc(%ebp),%ebx
080bc202 +0x081e:  mov    -0x20(%ebp),%eax
080bc205 +0x0821:  mov    %eax,0x8(%esp)
080bc209 +0x0825:  mov    -0x24(%ebp),%eax
080bc20c +0x0828:  mov    %eax,0x4(%esp)
080bc210 +0x082c:  mov    -0x28(%ebp),%eax
080bc213 +0x082f:  mov    %eax,(%esp)
080bc216 +0x0832:  call   080bd852 <+0x1e6e>
080bc21b +0x0837:  lea    (%ebx,%eax,1),%eax
080bc21e +0x083a:  mov    %eax,-0x2c(%ebp)
080bc221 +0x083d:  mov    -0xc(%ebp),%eax
080bc224 +0x0840:  add    %eax,-0x1c(%ebp)
080bc227 +0x0843:  mov    -0x1c(%ebp),%eax
080bc22a +0x0846:  mov    %eax,(%esp)
080bc22d +0x0849:  call   080bd88a <+0x1ea6>
080bc232 +0x084e:  mov    %eax,%ebx
080bc234 +0x0850:  add    -0x10(%ebp),%ebx
080bc237 +0x0853:  mov    -0x14(%ebp),%eax
080bc23a +0x0856:  mov    %eax,0x8(%esp)
080bc23e +0x085a:  mov    -0x18(%ebp),%eax
080bc241 +0x085d:  mov    %eax,0x4(%esp)
080bc245 +0x0861:  mov    -0x1c(%ebp),%eax
080bc248 +0x0864:  mov    %eax,(%esp)
080bc24b +0x0867:  call   080bd83e <+0x1e5a>
080bc250 +0x086c:  lea    (%ebx,%eax,1),%edx
080bc253 +0x086f:  mov    &_ZN4CSHA7sm_K256E+0x40,%eax
080bc258 +0x0874:  add    %eax,%edx
080bc25a +0x0876:  mov    -0xf4(%ebp),%eax
080bc260 +0x087c:  lea    (%edx,%eax,1),%eax
080bc263 +0x087f:  mov    %eax,-0xc(%ebp)
080bc266 +0x0882:  mov    -0x2c(%ebp),%eax
080bc269 +0x0885:  mov    %eax,(%esp)
080bc26c +0x0888:  call   080bd86c <+0x1e88>
080bc271 +0x088d:  mov    %eax,%ebx
080bc273 +0x088f:  add    -0xc(%ebp),%ebx
080bc276 +0x0892:  mov    -0x24(%ebp),%eax
080bc279 +0x0895:  mov    %eax,0x8(%esp)
080bc27d +0x0899:  mov    -0x28(%ebp),%eax
080bc280 +0x089c:  mov    %eax,0x4(%esp)
080bc284 +0x08a0:  mov    -0x2c(%ebp),%eax
080bc287 +0x08a3:  mov    %eax,(%esp)
080bc28a +0x08a6:  call   080bd852 <+0x1e6e>
080bc28f +0x08ab:  lea    (%ebx,%eax,1),%eax
080bc292 +0x08ae:  mov    %eax,-0x10(%ebp)
080bc295 +0x08b1:  mov    -0xc(%ebp),%eax
080bc298 +0x08b4:  add    %eax,-0x20(%ebp)
080bc29b +0x08b7:  mov    -0x20(%ebp),%eax
080bc29e +0x08ba:  mov    %eax,(%esp)
080bc2a1 +0x08bd:  call   080bd88a <+0x1ea6>
080bc2a6 +0x08c2:  mov    %eax,%ebx
080bc2a8 +0x08c4:  add    -0x14(%ebp),%ebx
080bc2ab +0x08c7:  mov    -0x18(%ebp),%eax
080bc2ae +0x08ca:  mov    %eax,0x8(%esp)
080bc2b2 +0x08ce:  mov    -0x1c(%ebp),%eax
080bc2b5 +0x08d1:  mov    %eax,0x4(%esp)
080bc2b9 +0x08d5:  mov    -0x20(%ebp),%eax
080bc2bc +0x08d8:  mov    %eax,(%esp)
080bc2bf +0x08db:  call   080bd83e <+0x1e5a>
080bc2c4 +0x08e0:  lea    (%ebx,%eax,1),%edx
080bc2c7 +0x08e3:  mov    &_ZN4CSHA7sm_K256E+0x44,%eax
080bc2cc +0x08e8:  add    %eax,%edx
080bc2ce +0x08ea:  mov    -0xf0(%ebp),%eax
080bc2d4 +0x08f0:  lea    (%edx,%eax,1),%eax
080bc2d7 +0x08f3:  mov    %eax,-0xc(%ebp)
080bc2da +0x08f6:  mov    -0x10(%ebp),%eax
080bc2dd +0x08f9:  mov    %eax,(%esp)
080bc2e0 +0x08fc:  call   080bd86c <+0x1e88>
080bc2e5 +0x0901:  mov    %eax,%ebx
080bc2e7 +0x0903:  add    -0xc(%ebp),%ebx
080bc2ea +0x0906:  mov    -0x28(%ebp),%eax
080bc2ed +0x0909:  mov    %eax,0x8(%esp)
080bc2f1 +0x090d:  mov    -0x2c(%ebp),%eax
080bc2f4 +0x0910:  mov    %eax,0x4(%esp)
080bc2f8 +0x0914:  mov    -0x10(%ebp),%eax
080bc2fb +0x0917:  mov    %eax,(%esp)
080bc2fe +0x091a:  call   080bd852 <+0x1e6e>
080bc303 +0x091f:  lea    (%ebx,%eax,1),%eax
080bc306 +0x0922:  mov    %eax,-0x14(%ebp)
080bc309 +0x0925:  mov    -0xc(%ebp),%eax
080bc30c +0x0928:  add    %eax,-0x24(%ebp)
080bc30f +0x092b:  mov    -0x24(%ebp),%eax
080bc312 +0x092e:  mov    %eax,(%esp)
080bc315 +0x0931:  call   080bd88a <+0x1ea6>
080bc31a +0x0936:  mov    %eax,%ebx
080bc31c +0x0938:  add    -0x18(%ebp),%ebx
080bc31f +0x093b:  mov    -0x1c(%ebp),%eax
080bc322 +0x093e:  mov    %eax,0x8(%esp)
080bc326 +0x0942:  mov    -0x20(%ebp),%eax
080bc329 +0x0945:  mov    %eax,0x4(%esp)
080bc32d +0x0949:  mov    -0x24(%ebp),%eax
080bc330 +0x094c:  mov    %eax,(%esp)
080bc333 +0x094f:  call   080bd83e <+0x1e5a>
080bc338 +0x0954:  lea    (%ebx,%eax,1),%edx
080bc33b +0x0957:  mov    &_ZN4CSHA7sm_K256E+0x48,%eax
080bc340 +0x095c:  add    %eax,%edx
080bc342 +0x095e:  mov    -0xec(%ebp),%eax
080bc348 +0x0964:  lea    (%edx,%eax,1),%eax
080bc34b +0x0967:  mov    %eax,-0xc(%ebp)
080bc34e +0x096a:  mov    -0x14(%ebp),%eax
080bc351 +0x096d:  mov    %eax,(%esp)
080bc354 +0x0970:  call   080bd86c <+0x1e88>
080bc359 +0x0975:  mov    %eax,%ebx
080bc35b +0x0977:  add    -0xc(%ebp),%ebx
080bc35e +0x097a:  mov    -0x2c(%ebp),%eax
080bc361 +0x097d:  mov    %eax,0x8(%esp)
080bc365 +0x0981:  mov    -0x10(%ebp),%eax
080bc368 +0x0984:  mov    %eax,0x4(%esp)
080bc36c +0x0988:  mov    -0x14(%ebp),%eax
080bc36f +0x098b:  mov    %eax,(%esp)
080bc372 +0x098e:  call   080bd852 <+0x1e6e>
080bc377 +0x0993:  lea    (%ebx,%eax,1),%eax
080bc37a +0x0996:  mov    %eax,-0x18(%ebp)
080bc37d +0x0999:  mov    -0xc(%ebp),%eax
080bc380 +0x099c:  add    %eax,-0x28(%ebp)
080bc383 +0x099f:  mov    -0x28(%ebp),%eax
080bc386 +0x09a2:  mov    %eax,(%esp)
080bc389 +0x09a5:  call   080bd88a <+0x1ea6>
080bc38e +0x09aa:  mov    %eax,%ebx
080bc390 +0x09ac:  add    -0x1c(%ebp),%ebx
080bc393 +0x09af:  mov    -0x20(%ebp),%eax
080bc396 +0x09b2:  mov    %eax,0x8(%esp)
080bc39a +0x09b6:  mov    -0x24(%ebp),%eax
080bc39d +0x09b9:  mov    %eax,0x4(%esp)
080bc3a1 +0x09bd:  mov    -0x28(%ebp),%eax
080bc3a4 +0x09c0:  mov    %eax,(%esp)
080bc3a7 +0x09c3:  call   080bd83e <+0x1e5a>
080bc3ac +0x09c8:  lea    (%ebx,%eax,1),%edx
080bc3af +0x09cb:  mov    &_ZN4CSHA7sm_K256E+0x4c,%eax
080bc3b4 +0x09d0:  add    %eax,%edx
080bc3b6 +0x09d2:  mov    -0xe8(%ebp),%eax
080bc3bc +0x09d8:  lea    (%edx,%eax,1),%eax
080bc3bf +0x09db:  mov    %eax,-0xc(%ebp)
080bc3c2 +0x09de:  mov    -0x18(%ebp),%eax
080bc3c5 +0x09e1:  mov    %eax,(%esp)
080bc3c8 +0x09e4:  call   080bd86c <+0x1e88>
080bc3cd +0x09e9:  mov    %eax,%ebx
080bc3cf +0x09eb:  add    -0xc(%ebp),%ebx
080bc3d2 +0x09ee:  mov    -0x10(%ebp),%eax
080bc3d5 +0x09f1:  mov    %eax,0x8(%esp)
080bc3d9 +0x09f5:  mov    -0x14(%ebp),%eax
080bc3dc +0x09f8:  mov    %eax,0x4(%esp)
080bc3e0 +0x09fc:  mov    -0x18(%ebp),%eax
080bc3e3 +0x09ff:  mov    %eax,(%esp)
080bc3e6 +0x0a02:  call   080bd852 <+0x1e6e>
080bc3eb +0x0a07:  lea    (%ebx,%eax,1),%eax
080bc3ee +0x0a0a:  mov    %eax,-0x1c(%ebp)
080bc3f1 +0x0a0d:  mov    -0xc(%ebp),%eax
080bc3f4 +0x0a10:  add    %eax,-0x2c(%ebp)
080bc3f7 +0x0a13:  mov    -0x2c(%ebp),%eax
080bc3fa +0x0a16:  mov    %eax,(%esp)
080bc3fd +0x0a19:  call   080bd88a <+0x1ea6>
080bc402 +0x0a1e:  mov    %eax,%ebx
080bc404 +0x0a20:  add    -0x20(%ebp),%ebx
080bc407 +0x0a23:  mov    -0x24(%ebp),%eax
080bc40a +0x0a26:  mov    %eax,0x8(%esp)
080bc40e +0x0a2a:  mov    -0x28(%ebp),%eax
080bc411 +0x0a2d:  mov    %eax,0x4(%esp)
080bc415 +0x0a31:  mov    -0x2c(%ebp),%eax
080bc418 +0x0a34:  mov    %eax,(%esp)
080bc41b +0x0a37:  call   080bd83e <+0x1e5a>
080bc420 +0x0a3c:  lea    (%ebx,%eax,1),%edx
080bc423 +0x0a3f:  mov    &_ZN4CSHA7sm_K256E+0x50,%eax
080bc428 +0x0a44:  add    %eax,%edx
080bc42a +0x0a46:  mov    -0xe4(%ebp),%eax
080bc430 +0x0a4c:  lea    (%edx,%eax,1),%eax
080bc433 +0x0a4f:  mov    %eax,-0xc(%ebp)
080bc436 +0x0a52:  mov    -0x1c(%ebp),%eax
080bc439 +0x0a55:  mov    %eax,(%esp)
080bc43c +0x0a58:  call   080bd86c <+0x1e88>
080bc441 +0x0a5d:  mov    %eax,%ebx
080bc443 +0x0a5f:  add    -0xc(%ebp),%ebx
080bc446 +0x0a62:  mov    -0x14(%ebp),%eax
080bc449 +0x0a65:  mov    %eax,0x8(%esp)
080bc44d +0x0a69:  mov    -0x18(%ebp),%eax
080bc450 +0x0a6c:  mov    %eax,0x4(%esp)
080bc454 +0x0a70:  mov    -0x1c(%ebp),%eax
080bc457 +0x0a73:  mov    %eax,(%esp)
080bc45a +0x0a76:  call   080bd852 <+0x1e6e>
080bc45f +0x0a7b:  lea    (%ebx,%eax,1),%eax
080bc462 +0x0a7e:  mov    %eax,-0x20(%ebp)
080bc465 +0x0a81:  mov    -0xc(%ebp),%eax
080bc468 +0x0a84:  add    %eax,-0x10(%ebp)
080bc46b +0x0a87:  mov    -0x10(%ebp),%eax
080bc46e +0x0a8a:  mov    %eax,(%esp)
080bc471 +0x0a8d:  call   080bd88a <+0x1ea6>
080bc476 +0x0a92:  mov    %eax,%ebx
080bc478 +0x0a94:  add    -0x24(%ebp),%ebx
080bc47b +0x0a97:  mov    -0x28(%ebp),%eax
080bc47e +0x0a9a:  mov    %eax,0x8(%esp)
080bc482 +0x0a9e:  mov    -0x2c(%ebp),%eax
080bc485 +0x0aa1:  mov    %eax,0x4(%esp)
080bc489 +0x0aa5:  mov    -0x10(%ebp),%eax
080bc48c +0x0aa8:  mov    %eax,(%esp)
080bc48f +0x0aab:  call   080bd83e <+0x1e5a>
080bc494 +0x0ab0:  lea    (%ebx,%eax,1),%edx
080bc497 +0x0ab3:  mov    &_ZN4CSHA7sm_K256E+0x54,%eax
080bc49c +0x0ab8:  add    %eax,%edx
080bc49e +0x0aba:  mov    -0xe0(%ebp),%eax
080bc4a4 +0x0ac0:  lea    (%edx,%eax,1),%eax
080bc4a7 +0x0ac3:  mov    %eax,-0xc(%ebp)
080bc4aa +0x0ac6:  mov    -0x20(%ebp),%eax
080bc4ad +0x0ac9:  mov    %eax,(%esp)
080bc4b0 +0x0acc:  call   080bd86c <+0x1e88>
080bc4b5 +0x0ad1:  mov    %eax,%ebx
080bc4b7 +0x0ad3:  add    -0xc(%ebp),%ebx
080bc4ba +0x0ad6:  mov    -0x18(%ebp),%eax
080bc4bd +0x0ad9:  mov    %eax,0x8(%esp)
080bc4c1 +0x0add:  mov    -0x1c(%ebp),%eax
080bc4c4 +0x0ae0:  mov    %eax,0x4(%esp)
080bc4c8 +0x0ae4:  mov    -0x20(%ebp),%eax
080bc4cb +0x0ae7:  mov    %eax,(%esp)
080bc4ce +0x0aea:  call   080bd852 <+0x1e6e>
080bc4d3 +0x0aef:  lea    (%ebx,%eax,1),%eax
080bc4d6 +0x0af2:  mov    %eax,-0x24(%ebp)
080bc4d9 +0x0af5:  mov    -0xc(%ebp),%eax
080bc4dc +0x0af8:  add    %eax,-0x14(%ebp)
080bc4df +0x0afb:  mov    -0x14(%ebp),%eax
080bc4e2 +0x0afe:  mov    %eax,(%esp)
080bc4e5 +0x0b01:  call   080bd88a <+0x1ea6>
080bc4ea +0x0b06:  mov    %eax,%ebx
080bc4ec +0x0b08:  add    -0x28(%ebp),%ebx
080bc4ef +0x0b0b:  mov    -0x2c(%ebp),%eax
080bc4f2 +0x0b0e:  mov    %eax,0x8(%esp)
080bc4f6 +0x0b12:  mov    -0x10(%ebp),%eax
080bc4f9 +0x0b15:  mov    %eax,0x4(%esp)
080bc4fd +0x0b19:  mov    -0x14(%ebp),%eax
080bc500 +0x0b1c:  mov    %eax,(%esp)
080bc503 +0x0b1f:  call   080bd83e <+0x1e5a>
080bc508 +0x0b24:  lea    (%ebx,%eax,1),%edx
080bc50b +0x0b27:  mov    &_ZN4CSHA7sm_K256E+0x58,%eax
080bc510 +0x0b2c:  add    %eax,%edx
080bc512 +0x0b2e:  mov    -0xdc(%ebp),%eax
080bc518 +0x0b34:  lea    (%edx,%eax,1),%eax
080bc51b +0x0b37:  mov    %eax,-0xc(%ebp)
080bc51e +0x0b3a:  mov    -0x24(%ebp),%eax
080bc521 +0x0b3d:  mov    %eax,(%esp)
080bc524 +0x0b40:  call   080bd86c <+0x1e88>
080bc529 +0x0b45:  mov    %eax,%ebx
080bc52b +0x0b47:  add    -0xc(%ebp),%ebx
080bc52e +0x0b4a:  mov    -0x1c(%ebp),%eax
080bc531 +0x0b4d:  mov    %eax,0x8(%esp)
080bc535 +0x0b51:  mov    -0x20(%ebp),%eax
080bc538 +0x0b54:  mov    %eax,0x4(%esp)
080bc53c +0x0b58:  mov    -0x24(%ebp),%eax
080bc53f +0x0b5b:  mov    %eax,(%esp)
080bc542 +0x0b5e:  call   080bd852 <+0x1e6e>
080bc547 +0x0b63:  lea    (%ebx,%eax,1),%eax
080bc54a +0x0b66:  mov    %eax,-0x28(%ebp)
080bc54d +0x0b69:  mov    -0xc(%ebp),%eax
080bc550 +0x0b6c:  add    %eax,-0x18(%ebp)
080bc553 +0x0b6f:  mov    -0x18(%ebp),%eax
080bc556 +0x0b72:  mov    %eax,(%esp)
080bc559 +0x0b75:  call   080bd88a <+0x1ea6>
080bc55e +0x0b7a:  mov    %eax,%ebx
080bc560 +0x0b7c:  add    -0x2c(%ebp),%ebx
080bc563 +0x0b7f:  mov    -0x10(%ebp),%eax
080bc566 +0x0b82:  mov    %eax,0x8(%esp)
080bc56a +0x0b86:  mov    -0x14(%ebp),%eax
080bc56d +0x0b89:  mov    %eax,0x4(%esp)
080bc571 +0x0b8d:  mov    -0x18(%ebp),%eax
080bc574 +0x0b90:  mov    %eax,(%esp)
080bc577 +0x0b93:  call   080bd83e <+0x1e5a>
080bc57c +0x0b98:  lea    (%ebx,%eax,1),%edx
080bc57f +0x0b9b:  mov    &_ZN4CSHA7sm_K256E+0x5c,%eax
080bc584 +0x0ba0:  add    %eax,%edx
080bc586 +0x0ba2:  mov    -0xd8(%ebp),%eax
080bc58c +0x0ba8:  lea    (%edx,%eax,1),%eax
080bc58f +0x0bab:  mov    %eax,-0xc(%ebp)
080bc592 +0x0bae:  mov    -0x28(%ebp),%eax
080bc595 +0x0bb1:  mov    %eax,(%esp)
080bc598 +0x0bb4:  call   080bd86c <+0x1e88>
080bc59d +0x0bb9:  mov    %eax,%ebx
080bc59f +0x0bbb:  add    -0xc(%ebp),%ebx
080bc5a2 +0x0bbe:  mov    -0x20(%ebp),%eax
080bc5a5 +0x0bc1:  mov    %eax,0x8(%esp)
080bc5a9 +0x0bc5:  mov    -0x24(%ebp),%eax
080bc5ac +0x0bc8:  mov    %eax,0x4(%esp)
080bc5b0 +0x0bcc:  mov    -0x28(%ebp),%eax
080bc5b3 +0x0bcf:  mov    %eax,(%esp)
080bc5b6 +0x0bd2:  call   080bd852 <+0x1e6e>
080bc5bb +0x0bd7:  lea    (%ebx,%eax,1),%eax
080bc5be +0x0bda:  mov    %eax,-0x2c(%ebp)
080bc5c1 +0x0bdd:  mov    -0xc(%ebp),%eax
080bc5c4 +0x0be0:  add    %eax,-0x1c(%ebp)
080bc5c7 +0x0be3:  mov    -0x1c(%ebp),%eax
080bc5ca +0x0be6:  mov    %eax,(%esp)
080bc5cd +0x0be9:  call   080bd88a <+0x1ea6>
080bc5d2 +0x0bee:  mov    %eax,%ebx
080bc5d4 +0x0bf0:  add    -0x10(%ebp),%ebx
080bc5d7 +0x0bf3:  mov    -0x14(%ebp),%eax
080bc5da +0x0bf6:  mov    %eax,0x8(%esp)
080bc5de +0x0bfa:  mov    -0x18(%ebp),%eax
080bc5e1 +0x0bfd:  mov    %eax,0x4(%esp)
080bc5e5 +0x0c01:  mov    -0x1c(%ebp),%eax
080bc5e8 +0x0c04:  mov    %eax,(%esp)
080bc5eb +0x0c07:  call   080bd83e <+0x1e5a>
080bc5f0 +0x0c0c:  lea    (%ebx,%eax,1),%edx
080bc5f3 +0x0c0f:  mov    &_ZN4CSHA7sm_K256E+0x60,%eax
080bc5f8 +0x0c14:  add    %eax,%edx
080bc5fa +0x0c16:  mov    -0xd4(%ebp),%eax
080bc600 +0x0c1c:  lea    (%edx,%eax,1),%eax
080bc603 +0x0c1f:  mov    %eax,-0xc(%ebp)
080bc606 +0x0c22:  mov    -0x2c(%ebp),%eax
080bc609 +0x0c25:  mov    %eax,(%esp)
080bc60c +0x0c28:  call   080bd86c <+0x1e88>
080bc611 +0x0c2d:  mov    %eax,%ebx
080bc613 +0x0c2f:  add    -0xc(%ebp),%ebx
080bc616 +0x0c32:  mov    -0x24(%ebp),%eax
080bc619 +0x0c35:  mov    %eax,0x8(%esp)
080bc61d +0x0c39:  mov    -0x28(%ebp),%eax
080bc620 +0x0c3c:  mov    %eax,0x4(%esp)
080bc624 +0x0c40:  mov    -0x2c(%ebp),%eax
080bc627 +0x0c43:  mov    %eax,(%esp)
080bc62a +0x0c46:  call   080bd852 <+0x1e6e>
080bc62f +0x0c4b:  lea    (%ebx,%eax,1),%eax
080bc632 +0x0c4e:  mov    %eax,-0x10(%ebp)
080bc635 +0x0c51:  mov    -0xc(%ebp),%eax
080bc638 +0x0c54:  add    %eax,-0x20(%ebp)
080bc63b +0x0c57:  mov    -0x20(%ebp),%eax
080bc63e +0x0c5a:  mov    %eax,(%esp)
080bc641 +0x0c5d:  call   080bd88a <+0x1ea6>
080bc646 +0x0c62:  mov    %eax,%ebx
080bc648 +0x0c64:  add    -0x14(%ebp),%ebx
080bc64b +0x0c67:  mov    -0x18(%ebp),%eax
080bc64e +0x0c6a:  mov    %eax,0x8(%esp)
080bc652 +0x0c6e:  mov    -0x1c(%ebp),%eax
080bc655 +0x0c71:  mov    %eax,0x4(%esp)
080bc659 +0x0c75:  mov    -0x20(%ebp),%eax
080bc65c +0x0c78:  mov    %eax,(%esp)
080bc65f +0x0c7b:  call   080bd83e <+0x1e5a>
080bc664 +0x0c80:  lea    (%ebx,%eax,1),%edx
080bc667 +0x0c83:  mov    &_ZN4CSHA7sm_K256E+0x64,%eax
080bc66c +0x0c88:  add    %eax,%edx
080bc66e +0x0c8a:  mov    -0xd0(%ebp),%eax
080bc674 +0x0c90:  lea    (%edx,%eax,1),%eax
080bc677 +0x0c93:  mov    %eax,-0xc(%ebp)
080bc67a +0x0c96:  mov    -0x10(%ebp),%eax
080bc67d +0x0c99:  mov    %eax,(%esp)
080bc680 +0x0c9c:  call   080bd86c <+0x1e88>
080bc685 +0x0ca1:  mov    %eax,%ebx
080bc687 +0x0ca3:  add    -0xc(%ebp),%ebx
080bc68a +0x0ca6:  mov    -0x28(%ebp),%eax
080bc68d +0x0ca9:  mov    %eax,0x8(%esp)
080bc691 +0x0cad:  mov    -0x2c(%ebp),%eax
080bc694 +0x0cb0:  mov    %eax,0x4(%esp)
080bc698 +0x0cb4:  mov    -0x10(%ebp),%eax
080bc69b +0x0cb7:  mov    %eax,(%esp)
080bc69e +0x0cba:  call   080bd852 <+0x1e6e>
080bc6a3 +0x0cbf:  lea    (%ebx,%eax,1),%eax
080bc6a6 +0x0cc2:  mov    %eax,-0x14(%ebp)
080bc6a9 +0x0cc5:  mov    -0xc(%ebp),%eax
080bc6ac +0x0cc8:  add    %eax,-0x24(%ebp)
080bc6af +0x0ccb:  mov    -0x24(%ebp),%eax
080bc6b2 +0x0cce:  mov    %eax,(%esp)
080bc6b5 +0x0cd1:  call   080bd88a <+0x1ea6>
080bc6ba +0x0cd6:  mov    %eax,%ebx
080bc6bc +0x0cd8:  add    -0x18(%ebp),%ebx
080bc6bf +0x0cdb:  mov    -0x1c(%ebp),%eax
080bc6c2 +0x0cde:  mov    %eax,0x8(%esp)
080bc6c6 +0x0ce2:  mov    -0x20(%ebp),%eax
080bc6c9 +0x0ce5:  mov    %eax,0x4(%esp)
080bc6cd +0x0ce9:  mov    -0x24(%ebp),%eax
080bc6d0 +0x0cec:  mov    %eax,(%esp)
080bc6d3 +0x0cef:  call   080bd83e <+0x1e5a>
080bc6d8 +0x0cf4:  lea    (%ebx,%eax,1),%edx
080bc6db +0x0cf7:  mov    &_ZN4CSHA7sm_K256E+0x68,%eax
080bc6e0 +0x0cfc:  add    %eax,%edx
080bc6e2 +0x0cfe:  mov    -0xcc(%ebp),%eax
080bc6e8 +0x0d04:  lea    (%edx,%eax,1),%eax
080bc6eb +0x0d07:  mov    %eax,-0xc(%ebp)
080bc6ee +0x0d0a:  mov    -0x14(%ebp),%eax
080bc6f1 +0x0d0d:  mov    %eax,(%esp)
080bc6f4 +0x0d10:  call   080bd86c <+0x1e88>
080bc6f9 +0x0d15:  mov    %eax,%ebx
080bc6fb +0x0d17:  add    -0xc(%ebp),%ebx
080bc6fe +0x0d1a:  mov    -0x2c(%ebp),%eax
080bc701 +0x0d1d:  mov    %eax,0x8(%esp)
080bc705 +0x0d21:  mov    -0x10(%ebp),%eax
080bc708 +0x0d24:  mov    %eax,0x4(%esp)
080bc70c +0x0d28:  mov    -0x14(%ebp),%eax
080bc70f +0x0d2b:  mov    %eax,(%esp)
080bc712 +0x0d2e:  call   080bd852 <+0x1e6e>
080bc717 +0x0d33:  lea    (%ebx,%eax,1),%eax
080bc71a +0x0d36:  mov    %eax,-0x18(%ebp)
080bc71d +0x0d39:  mov    -0xc(%ebp),%eax
080bc720 +0x0d3c:  add    %eax,-0x28(%ebp)
080bc723 +0x0d3f:  mov    -0x28(%ebp),%eax
080bc726 +0x0d42:  mov    %eax,(%esp)
080bc729 +0x0d45:  call   080bd88a <+0x1ea6>
080bc72e +0x0d4a:  mov    %eax,%ebx
080bc730 +0x0d4c:  add    -0x1c(%ebp),%ebx
080bc733 +0x0d4f:  mov    -0x20(%ebp),%eax
080bc736 +0x0d52:  mov    %eax,0x8(%esp)
080bc73a +0x0d56:  mov    -0x24(%ebp),%eax
080bc73d +0x0d59:  mov    %eax,0x4(%esp)
080bc741 +0x0d5d:  mov    -0x28(%ebp),%eax
080bc744 +0x0d60:  mov    %eax,(%esp)
080bc747 +0x0d63:  call   080bd83e <+0x1e5a>
080bc74c +0x0d68:  lea    (%ebx,%eax,1),%edx
080bc74f +0x0d6b:  mov    &_ZN4CSHA7sm_K256E+0x6c,%eax
080bc754 +0x0d70:  add    %eax,%edx
080bc756 +0x0d72:  mov    -0xc8(%ebp),%eax
080bc75c +0x0d78:  lea    (%edx,%eax,1),%eax
080bc75f +0x0d7b:  mov    %eax,-0xc(%ebp)
080bc762 +0x0d7e:  mov    -0x18(%ebp),%eax
080bc765 +0x0d81:  mov    %eax,(%esp)
080bc768 +0x0d84:  call   080bd86c <+0x1e88>
080bc76d +0x0d89:  mov    %eax,%ebx
080bc76f +0x0d8b:  add    -0xc(%ebp),%ebx
080bc772 +0x0d8e:  mov    -0x10(%ebp),%eax
080bc775 +0x0d91:  mov    %eax,0x8(%esp)
080bc779 +0x0d95:  mov    -0x14(%ebp),%eax
080bc77c +0x0d98:  mov    %eax,0x4(%esp)
080bc780 +0x0d9c:  mov    -0x18(%ebp),%eax
080bc783 +0x0d9f:  mov    %eax,(%esp)
080bc786 +0x0da2:  call   080bd852 <+0x1e6e>
080bc78b +0x0da7:  lea    (%ebx,%eax,1),%eax
080bc78e +0x0daa:  mov    %eax,-0x1c(%ebp)
080bc791 +0x0dad:  mov    -0xc(%ebp),%eax
080bc794 +0x0db0:  add    %eax,-0x2c(%ebp)
080bc797 +0x0db3:  mov    -0x2c(%ebp),%eax
080bc79a +0x0db6:  mov    %eax,(%esp)
080bc79d +0x0db9:  call   080bd88a <+0x1ea6>
080bc7a2 +0x0dbe:  mov    %eax,%ebx
080bc7a4 +0x0dc0:  add    -0x20(%ebp),%ebx
080bc7a7 +0x0dc3:  mov    -0x24(%ebp),%eax
080bc7aa +0x0dc6:  mov    %eax,0x8(%esp)
080bc7ae +0x0dca:  mov    -0x28(%ebp),%eax
080bc7b1 +0x0dcd:  mov    %eax,0x4(%esp)
080bc7b5 +0x0dd1:  mov    -0x2c(%ebp),%eax
080bc7b8 +0x0dd4:  mov    %eax,(%esp)
080bc7bb +0x0dd7:  call   080bd83e <+0x1e5a>
080bc7c0 +0x0ddc:  lea    (%ebx,%eax,1),%edx
080bc7c3 +0x0ddf:  mov    &_ZN4CSHA7sm_K256E+0x70,%eax
080bc7c8 +0x0de4:  add    %eax,%edx
080bc7ca +0x0de6:  mov    -0xc4(%ebp),%eax
080bc7d0 +0x0dec:  lea    (%edx,%eax,1),%eax
080bc7d3 +0x0def:  mov    %eax,-0xc(%ebp)
080bc7d6 +0x0df2:  mov    -0x1c(%ebp),%eax
080bc7d9 +0x0df5:  mov    %eax,(%esp)
080bc7dc +0x0df8:  call   080bd86c <+0x1e88>
080bc7e1 +0x0dfd:  mov    %eax,%ebx
080bc7e3 +0x0dff:  add    -0xc(%ebp),%ebx
080bc7e6 +0x0e02:  mov    -0x14(%ebp),%eax
080bc7e9 +0x0e05:  mov    %eax,0x8(%esp)
080bc7ed +0x0e09:  mov    -0x18(%ebp),%eax
080bc7f0 +0x0e0c:  mov    %eax,0x4(%esp)
080bc7f4 +0x0e10:  mov    -0x1c(%ebp),%eax
080bc7f7 +0x0e13:  mov    %eax,(%esp)
080bc7fa +0x0e16:  call   080bd852 <+0x1e6e>
080bc7ff +0x0e1b:  lea    (%ebx,%eax,1),%eax
080bc802 +0x0e1e:  mov    %eax,-0x20(%ebp)
080bc805 +0x0e21:  mov    -0xc(%ebp),%eax
080bc808 +0x0e24:  add    %eax,-0x10(%ebp)
080bc80b +0x0e27:  mov    -0x10(%ebp),%eax
080bc80e +0x0e2a:  mov    %eax,(%esp)
080bc811 +0x0e2d:  call   080bd88a <+0x1ea6>
080bc816 +0x0e32:  mov    %eax,%ebx
080bc818 +0x0e34:  add    -0x24(%ebp),%ebx
080bc81b +0x0e37:  mov    -0x28(%ebp),%eax
080bc81e +0x0e3a:  mov    %eax,0x8(%esp)
080bc822 +0x0e3e:  mov    -0x2c(%ebp),%eax
080bc825 +0x0e41:  mov    %eax,0x4(%esp)
080bc829 +0x0e45:  mov    -0x10(%ebp),%eax
080bc82c +0x0e48:  mov    %eax,(%esp)
080bc82f +0x0e4b:  call   080bd83e <+0x1e5a>
080bc834 +0x0e50:  lea    (%ebx,%eax,1),%edx
080bc837 +0x0e53:  mov    &_ZN4CSHA7sm_K256E+0x74,%eax
080bc83c +0x0e58:  add    %eax,%edx
080bc83e +0x0e5a:  mov    -0xc0(%ebp),%eax
080bc844 +0x0e60:  lea    (%edx,%eax,1),%eax
080bc847 +0x0e63:  mov    %eax,-0xc(%ebp)
080bc84a +0x0e66:  mov    -0x20(%ebp),%eax
080bc84d +0x0e69:  mov    %eax,(%esp)
080bc850 +0x0e6c:  call   080bd86c <+0x1e88>
080bc855 +0x0e71:  mov    %eax,%ebx
080bc857 +0x0e73:  add    -0xc(%ebp),%ebx
080bc85a +0x0e76:  mov    -0x18(%ebp),%eax
080bc85d +0x0e79:  mov    %eax,0x8(%esp)
080bc861 +0x0e7d:  mov    -0x1c(%ebp),%eax
080bc864 +0x0e80:  mov    %eax,0x4(%esp)
080bc868 +0x0e84:  mov    -0x20(%ebp),%eax
080bc86b +0x0e87:  mov    %eax,(%esp)
080bc86e +0x0e8a:  call   080bd852 <+0x1e6e>
080bc873 +0x0e8f:  lea    (%ebx,%eax,1),%eax
080bc876 +0x0e92:  mov    %eax,-0x24(%ebp)
080bc879 +0x0e95:  mov    -0xc(%ebp),%eax
080bc87c +0x0e98:  add    %eax,-0x14(%ebp)
080bc87f +0x0e9b:  mov    -0x14(%ebp),%eax
080bc882 +0x0e9e:  mov    %eax,(%esp)
080bc885 +0x0ea1:  call   080bd88a <+0x1ea6>
080bc88a +0x0ea6:  mov    %eax,%ebx
080bc88c +0x0ea8:  add    -0x28(%ebp),%ebx
080bc88f +0x0eab:  mov    -0x2c(%ebp),%eax
080bc892 +0x0eae:  mov    %eax,0x8(%esp)
080bc896 +0x0eb2:  mov    -0x10(%ebp),%eax
080bc899 +0x0eb5:  mov    %eax,0x4(%esp)
080bc89d +0x0eb9:  mov    -0x14(%ebp),%eax
080bc8a0 +0x0ebc:  mov    %eax,(%esp)
080bc8a3 +0x0ebf:  call   080bd83e <+0x1e5a>
080bc8a8 +0x0ec4:  lea    (%ebx,%eax,1),%edx
080bc8ab +0x0ec7:  mov    &_ZN4CSHA7sm_K256E+0x78,%eax
080bc8b0 +0x0ecc:  add    %eax,%edx
080bc8b2 +0x0ece:  mov    -0xbc(%ebp),%eax
080bc8b8 +0x0ed4:  lea    (%edx,%eax,1),%eax
080bc8bb +0x0ed7:  mov    %eax,-0xc(%ebp)
080bc8be +0x0eda:  mov    -0x24(%ebp),%eax
080bc8c1 +0x0edd:  mov    %eax,(%esp)
080bc8c4 +0x0ee0:  call   080bd86c <+0x1e88>
080bc8c9 +0x0ee5:  mov    %eax,%ebx
080bc8cb +0x0ee7:  add    -0xc(%ebp),%ebx
080bc8ce +0x0eea:  mov    -0x1c(%ebp),%eax
080bc8d1 +0x0eed:  mov    %eax,0x8(%esp)
080bc8d5 +0x0ef1:  mov    -0x20(%ebp),%eax
080bc8d8 +0x0ef4:  mov    %eax,0x4(%esp)
080bc8dc +0x0ef8:  mov    -0x24(%ebp),%eax
080bc8df +0x0efb:  mov    %eax,(%esp)
080bc8e2 +0x0efe:  call   080bd852 <+0x1e6e>
080bc8e7 +0x0f03:  lea    (%ebx,%eax,1),%eax
080bc8ea +0x0f06:  mov    %eax,-0x28(%ebp)
080bc8ed +0x0f09:  mov    -0xc(%ebp),%eax
080bc8f0 +0x0f0c:  add    %eax,-0x18(%ebp)
080bc8f3 +0x0f0f:  mov    -0x18(%ebp),%eax
080bc8f6 +0x0f12:  mov    %eax,(%esp)
080bc8f9 +0x0f15:  call   080bd88a <+0x1ea6>
080bc8fe +0x0f1a:  mov    %eax,%ebx
080bc900 +0x0f1c:  add    -0x2c(%ebp),%ebx
080bc903 +0x0f1f:  mov    -0x10(%ebp),%eax
080bc906 +0x0f22:  mov    %eax,0x8(%esp)
080bc90a +0x0f26:  mov    -0x14(%ebp),%eax
080bc90d +0x0f29:  mov    %eax,0x4(%esp)
080bc911 +0x0f2d:  mov    -0x18(%ebp),%eax
080bc914 +0x0f30:  mov    %eax,(%esp)
080bc917 +0x0f33:  call   080bd83e <+0x1e5a>
080bc91c +0x0f38:  lea    (%ebx,%eax,1),%edx
080bc91f +0x0f3b:  mov    &_ZN4CSHA7sm_K256E+0x7c,%eax
080bc924 +0x0f40:  add    %eax,%edx
080bc926 +0x0f42:  mov    -0xb8(%ebp),%eax
080bc92c +0x0f48:  lea    (%edx,%eax,1),%eax
080bc92f +0x0f4b:  mov    %eax,-0xc(%ebp)
080bc932 +0x0f4e:  mov    -0x28(%ebp),%eax
080bc935 +0x0f51:  mov    %eax,(%esp)
080bc938 +0x0f54:  call   080bd86c <+0x1e88>
080bc93d +0x0f59:  mov    %eax,%ebx
080bc93f +0x0f5b:  add    -0xc(%ebp),%ebx
080bc942 +0x0f5e:  mov    -0x20(%ebp),%eax
080bc945 +0x0f61:  mov    %eax,0x8(%esp)
080bc949 +0x0f65:  mov    -0x24(%ebp),%eax
080bc94c +0x0f68:  mov    %eax,0x4(%esp)
080bc950 +0x0f6c:  mov    -0x28(%ebp),%eax
080bc953 +0x0f6f:  mov    %eax,(%esp)
080bc956 +0x0f72:  call   080bd852 <+0x1e6e>
080bc95b +0x0f77:  lea    (%ebx,%eax,1),%eax
080bc95e +0x0f7a:  mov    %eax,-0x2c(%ebp)
080bc961 +0x0f7d:  mov    -0xc(%ebp),%eax
080bc964 +0x0f80:  add    %eax,-0x1c(%ebp)
080bc967 +0x0f83:  mov    -0x1c(%ebp),%eax
080bc96a +0x0f86:  mov    %eax,(%esp)
080bc96d +0x0f89:  call   080bd88a <+0x1ea6>
080bc972 +0x0f8e:  mov    %eax,%ebx
080bc974 +0x0f90:  add    -0x10(%ebp),%ebx
080bc977 +0x0f93:  mov    -0x14(%ebp),%eax
080bc97a +0x0f96:  mov    %eax,0x8(%esp)
080bc97e +0x0f9a:  mov    -0x18(%ebp),%eax
080bc981 +0x0f9d:  mov    %eax,0x4(%esp)
080bc985 +0x0fa1:  mov    -0x1c(%ebp),%eax
080bc988 +0x0fa4:  mov    %eax,(%esp)
080bc98b +0x0fa7:  call   080bd83e <+0x1e5a>
080bc990 +0x0fac:  lea    (%ebx,%eax,1),%edx
080bc993 +0x0faf:  mov    &_ZN4CSHA7sm_K256E+0x80,%eax
080bc998 +0x0fb4:  add    %eax,%edx
080bc99a +0x0fb6:  mov    -0xb4(%ebp),%eax
080bc9a0 +0x0fbc:  lea    (%edx,%eax,1),%eax
080bc9a3 +0x0fbf:  mov    %eax,-0xc(%ebp)
080bc9a6 +0x0fc2:  mov    -0x2c(%ebp),%eax
080bc9a9 +0x0fc5:  mov    %eax,(%esp)
080bc9ac +0x0fc8:  call   080bd86c <+0x1e88>
080bc9b1 +0x0fcd:  mov    %eax,%ebx
080bc9b3 +0x0fcf:  add    -0xc(%ebp),%ebx
080bc9b6 +0x0fd2:  mov    -0x24(%ebp),%eax
080bc9b9 +0x0fd5:  mov    %eax,0x8(%esp)
080bc9bd +0x0fd9:  mov    -0x28(%ebp),%eax
080bc9c0 +0x0fdc:  mov    %eax,0x4(%esp)
080bc9c4 +0x0fe0:  mov    -0x2c(%ebp),%eax
080bc9c7 +0x0fe3:  mov    %eax,(%esp)
080bc9ca +0x0fe6:  call   080bd852 <+0x1e6e>
080bc9cf +0x0feb:  lea    (%ebx,%eax,1),%eax
080bc9d2 +0x0fee:  mov    %eax,-0x10(%ebp)
080bc9d5 +0x0ff1:  mov    -0xc(%ebp),%eax
080bc9d8 +0x0ff4:  add    %eax,-0x20(%ebp)
080bc9db +0x0ff7:  mov    -0x20(%ebp),%eax
080bc9de +0x0ffa:  mov    %eax,(%esp)
080bc9e1 +0x0ffd:  call   080bd88a <+0x1ea6>
080bc9e6 +0x1002:  mov    %eax,%ebx
080bc9e8 +0x1004:  add    -0x14(%ebp),%ebx
080bc9eb +0x1007:  mov    -0x18(%ebp),%eax
080bc9ee +0x100a:  mov    %eax,0x8(%esp)
080bc9f2 +0x100e:  mov    -0x1c(%ebp),%eax
080bc9f5 +0x1011:  mov    %eax,0x4(%esp)
080bc9f9 +0x1015:  mov    -0x20(%ebp),%eax
080bc9fc +0x1018:  mov    %eax,(%esp)
080bc9ff +0x101b:  call   080bd83e <+0x1e5a>
080bca04 +0x1020:  lea    (%ebx,%eax,1),%edx
080bca07 +0x1023:  mov    &_ZN4CSHA7sm_K256E+0x84,%eax
080bca0c +0x1028:  add    %eax,%edx
080bca0e +0x102a:  mov    -0xb0(%ebp),%eax
080bca14 +0x1030:  lea    (%edx,%eax,1),%eax
080bca17 +0x1033:  mov    %eax,-0xc(%ebp)
080bca1a +0x1036:  mov    -0x10(%ebp),%eax
080bca1d +0x1039:  mov    %eax,(%esp)
080bca20 +0x103c:  call   080bd86c <+0x1e88>
080bca25 +0x1041:  mov    %eax,%ebx
080bca27 +0x1043:  add    -0xc(%ebp),%ebx
080bca2a +0x1046:  mov    -0x28(%ebp),%eax
080bca2d +0x1049:  mov    %eax,0x8(%esp)
080bca31 +0x104d:  mov    -0x2c(%ebp),%eax
080bca34 +0x1050:  mov    %eax,0x4(%esp)
080bca38 +0x1054:  mov    -0x10(%ebp),%eax
080bca3b +0x1057:  mov    %eax,(%esp)
080bca3e +0x105a:  call   080bd852 <+0x1e6e>
080bca43 +0x105f:  lea    (%ebx,%eax,1),%eax
080bca46 +0x1062:  mov    %eax,-0x14(%ebp)
080bca49 +0x1065:  mov    -0xc(%ebp),%eax
080bca4c +0x1068:  add    %eax,-0x24(%ebp)
080bca4f +0x106b:  mov    -0x24(%ebp),%eax
080bca52 +0x106e:  mov    %eax,(%esp)
080bca55 +0x1071:  call   080bd88a <+0x1ea6>
080bca5a +0x1076:  mov    %eax,%ebx
080bca5c +0x1078:  add    -0x18(%ebp),%ebx
080bca5f +0x107b:  mov    -0x1c(%ebp),%eax
080bca62 +0x107e:  mov    %eax,0x8(%esp)
080bca66 +0x1082:  mov    -0x20(%ebp),%eax
080bca69 +0x1085:  mov    %eax,0x4(%esp)
080bca6d +0x1089:  mov    -0x24(%ebp),%eax
080bca70 +0x108c:  mov    %eax,(%esp)
080bca73 +0x108f:  call   080bd83e <+0x1e5a>
080bca78 +0x1094:  lea    (%ebx,%eax,1),%edx
080bca7b +0x1097:  mov    &_ZN4CSHA7sm_K256E+0x88,%eax
080bca80 +0x109c:  add    %eax,%edx
080bca82 +0x109e:  mov    -0xac(%ebp),%eax
080bca88 +0x10a4:  lea    (%edx,%eax,1),%eax
080bca8b +0x10a7:  mov    %eax,-0xc(%ebp)
080bca8e +0x10aa:  mov    -0x14(%ebp),%eax
080bca91 +0x10ad:  mov    %eax,(%esp)
080bca94 +0x10b0:  call   080bd86c <+0x1e88>
080bca99 +0x10b5:  mov    %eax,%ebx
080bca9b +0x10b7:  add    -0xc(%ebp),%ebx
080bca9e +0x10ba:  mov    -0x2c(%ebp),%eax
080bcaa1 +0x10bd:  mov    %eax,0x8(%esp)
080bcaa5 +0x10c1:  mov    -0x10(%ebp),%eax
080bcaa8 +0x10c4:  mov    %eax,0x4(%esp)
080bcaac +0x10c8:  mov    -0x14(%ebp),%eax
080bcaaf +0x10cb:  mov    %eax,(%esp)
080bcab2 +0x10ce:  call   080bd852 <+0x1e6e>
080bcab7 +0x10d3:  lea    (%ebx,%eax,1),%eax
080bcaba +0x10d6:  mov    %eax,-0x18(%ebp)
080bcabd +0x10d9:  mov    -0xc(%ebp),%eax
080bcac0 +0x10dc:  add    %eax,-0x28(%ebp)
080bcac3 +0x10df:  mov    -0x28(%ebp),%eax
080bcac6 +0x10e2:  mov    %eax,(%esp)
080bcac9 +0x10e5:  call   080bd88a <+0x1ea6>
080bcace +0x10ea:  mov    %eax,%ebx
080bcad0 +0x10ec:  add    -0x1c(%ebp),%ebx
080bcad3 +0x10ef:  mov    -0x20(%ebp),%eax
080bcad6 +0x10f2:  mov    %eax,0x8(%esp)
080bcada +0x10f6:  mov    -0x24(%ebp),%eax
080bcadd +0x10f9:  mov    %eax,0x4(%esp)
080bcae1 +0x10fd:  mov    -0x28(%ebp),%eax
080bcae4 +0x1100:  mov    %eax,(%esp)
080bcae7 +0x1103:  call   080bd83e <+0x1e5a>
080bcaec +0x1108:  lea    (%ebx,%eax,1),%edx
080bcaef +0x110b:  mov    &_ZN4CSHA7sm_K256E+0x8c,%eax
080bcaf4 +0x1110:  add    %eax,%edx
080bcaf6 +0x1112:  mov    -0xa8(%ebp),%eax
080bcafc +0x1118:  lea    (%edx,%eax,1),%eax
080bcaff +0x111b:  mov    %eax,-0xc(%ebp)
080bcb02 +0x111e:  mov    -0x18(%ebp),%eax
080bcb05 +0x1121:  mov    %eax,(%esp)
080bcb08 +0x1124:  call   080bd86c <+0x1e88>
080bcb0d +0x1129:  mov    %eax,%ebx
080bcb0f +0x112b:  add    -0xc(%ebp),%ebx
080bcb12 +0x112e:  mov    -0x10(%ebp),%eax
080bcb15 +0x1131:  mov    %eax,0x8(%esp)
080bcb19 +0x1135:  mov    -0x14(%ebp),%eax
080bcb1c +0x1138:  mov    %eax,0x4(%esp)
080bcb20 +0x113c:  mov    -0x18(%ebp),%eax
080bcb23 +0x113f:  mov    %eax,(%esp)
080bcb26 +0x1142:  call   080bd852 <+0x1e6e>
080bcb2b +0x1147:  lea    (%ebx,%eax,1),%eax
080bcb2e +0x114a:  mov    %eax,-0x1c(%ebp)
080bcb31 +0x114d:  mov    -0xc(%ebp),%eax
080bcb34 +0x1150:  add    %eax,-0x2c(%ebp)
080bcb37 +0x1153:  mov    -0x2c(%ebp),%eax
080bcb3a +0x1156:  mov    %eax,(%esp)
080bcb3d +0x1159:  call   080bd88a <+0x1ea6>
080bcb42 +0x115e:  mov    %eax,%ebx
080bcb44 +0x1160:  add    -0x20(%ebp),%ebx
080bcb47 +0x1163:  mov    -0x24(%ebp),%eax
080bcb4a +0x1166:  mov    %eax,0x8(%esp)
080bcb4e +0x116a:  mov    -0x28(%ebp),%eax
080bcb51 +0x116d:  mov    %eax,0x4(%esp)
080bcb55 +0x1171:  mov    -0x2c(%ebp),%eax
080bcb58 +0x1174:  mov    %eax,(%esp)
080bcb5b +0x1177:  call   080bd83e <+0x1e5a>
080bcb60 +0x117c:  lea    (%ebx,%eax,1),%edx
080bcb63 +0x117f:  mov    &_ZN4CSHA7sm_K256E+0x90,%eax
080bcb68 +0x1184:  add    %eax,%edx
080bcb6a +0x1186:  mov    -0xa4(%ebp),%eax
080bcb70 +0x118c:  lea    (%edx,%eax,1),%eax
080bcb73 +0x118f:  mov    %eax,-0xc(%ebp)
080bcb76 +0x1192:  mov    -0x1c(%ebp),%eax
080bcb79 +0x1195:  mov    %eax,(%esp)
080bcb7c +0x1198:  call   080bd86c <+0x1e88>
080bcb81 +0x119d:  mov    %eax,%ebx
080bcb83 +0x119f:  add    -0xc(%ebp),%ebx
080bcb86 +0x11a2:  mov    -0x14(%ebp),%eax
080bcb89 +0x11a5:  mov    %eax,0x8(%esp)
080bcb8d +0x11a9:  mov    -0x18(%ebp),%eax
080bcb90 +0x11ac:  mov    %eax,0x4(%esp)
080bcb94 +0x11b0:  mov    -0x1c(%ebp),%eax
080bcb97 +0x11b3:  mov    %eax,(%esp)
080bcb9a +0x11b6:  call   080bd852 <+0x1e6e>
080bcb9f +0x11bb:  lea    (%ebx,%eax,1),%eax
080bcba2 +0x11be:  mov    %eax,-0x20(%ebp)
080bcba5 +0x11c1:  mov    -0xc(%ebp),%eax
080bcba8 +0x11c4:  add    %eax,-0x10(%ebp)
080bcbab +0x11c7:  mov    -0x10(%ebp),%eax
080bcbae +0x11ca:  mov    %eax,(%esp)
080bcbb1 +0x11cd:  call   080bd88a <+0x1ea6>
080bcbb6 +0x11d2:  mov    %eax,%ebx
080bcbb8 +0x11d4:  add    -0x24(%ebp),%ebx
080bcbbb +0x11d7:  mov    -0x28(%ebp),%eax
080bcbbe +0x11da:  mov    %eax,0x8(%esp)
080bcbc2 +0x11de:  mov    -0x2c(%ebp),%eax
080bcbc5 +0x11e1:  mov    %eax,0x4(%esp)
080bcbc9 +0x11e5:  mov    -0x10(%ebp),%eax
080bcbcc +0x11e8:  mov    %eax,(%esp)
080bcbcf +0x11eb:  call   080bd83e <+0x1e5a>
080bcbd4 +0x11f0:  lea    (%ebx,%eax,1),%edx
080bcbd7 +0x11f3:  mov    &_ZN4CSHA7sm_K256E+0x94,%eax
080bcbdc +0x11f8:  add    %eax,%edx
080bcbde +0x11fa:  mov    -0xa0(%ebp),%eax
080bcbe4 +0x1200:  lea    (%edx,%eax,1),%eax
080bcbe7 +0x1203:  mov    %eax,-0xc(%ebp)
080bcbea +0x1206:  mov    -0x20(%ebp),%eax
080bcbed +0x1209:  mov    %eax,(%esp)
080bcbf0 +0x120c:  call   080bd86c <+0x1e88>
080bcbf5 +0x1211:  mov    %eax,%ebx
080bcbf7 +0x1213:  add    -0xc(%ebp),%ebx
080bcbfa +0x1216:  mov    -0x18(%ebp),%eax
080bcbfd +0x1219:  mov    %eax,0x8(%esp)
080bcc01 +0x121d:  mov    -0x1c(%ebp),%eax
080bcc04 +0x1220:  mov    %eax,0x4(%esp)
080bcc08 +0x1224:  mov    -0x20(%ebp),%eax
080bcc0b +0x1227:  mov    %eax,(%esp)
080bcc0e +0x122a:  call   080bd852 <+0x1e6e>
080bcc13 +0x122f:  lea    (%ebx,%eax,1),%eax
080bcc16 +0x1232:  mov    %eax,-0x24(%ebp)
080bcc19 +0x1235:  mov    -0xc(%ebp),%eax
080bcc1c +0x1238:  add    %eax,-0x14(%ebp)
080bcc1f +0x123b:  mov    -0x14(%ebp),%eax
080bcc22 +0x123e:  mov    %eax,(%esp)
080bcc25 +0x1241:  call   080bd88a <+0x1ea6>
080bcc2a +0x1246:  mov    %eax,%ebx
080bcc2c +0x1248:  add    -0x28(%ebp),%ebx
080bcc2f +0x124b:  mov    -0x2c(%ebp),%eax
080bcc32 +0x124e:  mov    %eax,0x8(%esp)
080bcc36 +0x1252:  mov    -0x10(%ebp),%eax
080bcc39 +0x1255:  mov    %eax,0x4(%esp)
080bcc3d +0x1259:  mov    -0x14(%ebp),%eax
080bcc40 +0x125c:  mov    %eax,(%esp)
080bcc43 +0x125f:  call   080bd83e <+0x1e5a>
080bcc48 +0x1264:  lea    (%ebx,%eax,1),%edx
080bcc4b +0x1267:  mov    &_ZN4CSHA7sm_K256E+0x98,%eax
080bcc50 +0x126c:  add    %eax,%edx
080bcc52 +0x126e:  mov    -0x9c(%ebp),%eax
080bcc58 +0x1274:  lea    (%edx,%eax,1),%eax
080bcc5b +0x1277:  mov    %eax,-0xc(%ebp)
080bcc5e +0x127a:  mov    -0x24(%ebp),%eax
080bcc61 +0x127d:  mov    %eax,(%esp)
080bcc64 +0x1280:  call   080bd86c <+0x1e88>
080bcc69 +0x1285:  mov    %eax,%ebx
080bcc6b +0x1287:  add    -0xc(%ebp),%ebx
080bcc6e +0x128a:  mov    -0x1c(%ebp),%eax
080bcc71 +0x128d:  mov    %eax,0x8(%esp)
080bcc75 +0x1291:  mov    -0x20(%ebp),%eax
080bcc78 +0x1294:  mov    %eax,0x4(%esp)
080bcc7c +0x1298:  mov    -0x24(%ebp),%eax
080bcc7f +0x129b:  mov    %eax,(%esp)
080bcc82 +0x129e:  call   080bd852 <+0x1e6e>
080bcc87 +0x12a3:  lea    (%ebx,%eax,1),%eax
080bcc8a +0x12a6:  mov    %eax,-0x28(%ebp)
080bcc8d +0x12a9:  mov    -0xc(%ebp),%eax
080bcc90 +0x12ac:  add    %eax,-0x18(%ebp)
080bcc93 +0x12af:  mov    -0x18(%ebp),%eax
080bcc96 +0x12b2:  mov    %eax,(%esp)
080bcc99 +0x12b5:  call   080bd88a <+0x1ea6>
080bcc9e +0x12ba:  mov    %eax,%ebx
080bcca0 +0x12bc:  add    -0x2c(%ebp),%ebx
080bcca3 +0x12bf:  mov    -0x10(%ebp),%eax
080bcca6 +0x12c2:  mov    %eax,0x8(%esp)
080bccaa +0x12c6:  mov    -0x14(%ebp),%eax
080bccad +0x12c9:  mov    %eax,0x4(%esp)
080bccb1 +0x12cd:  mov    -0x18(%ebp),%eax
080bccb4 +0x12d0:  mov    %eax,(%esp)
080bccb7 +0x12d3:  call   080bd83e <+0x1e5a>
080bccbc +0x12d8:  lea    (%ebx,%eax,1),%edx
080bccbf +0x12db:  mov    &_ZN4CSHA7sm_K256E+0x9c,%eax
080bccc4 +0x12e0:  add    %eax,%edx
080bccc6 +0x12e2:  mov    -0x98(%ebp),%eax
080bcccc +0x12e8:  lea    (%edx,%eax,1),%eax
080bcccf +0x12eb:  mov    %eax,-0xc(%ebp)
080bccd2 +0x12ee:  mov    -0x28(%ebp),%eax
080bccd5 +0x12f1:  mov    %eax,(%esp)
080bccd8 +0x12f4:  call   080bd86c <+0x1e88>
080bccdd +0x12f9:  mov    %eax,%ebx
080bccdf +0x12fb:  add    -0xc(%ebp),%ebx
080bcce2 +0x12fe:  mov    -0x20(%ebp),%eax
080bcce5 +0x1301:  mov    %eax,0x8(%esp)
080bcce9 +0x1305:  mov    -0x24(%ebp),%eax
080bccec +0x1308:  mov    %eax,0x4(%esp)
080bccf0 +0x130c:  mov    -0x28(%ebp),%eax
080bccf3 +0x130f:  mov    %eax,(%esp)
080bccf6 +0x1312:  call   080bd852 <+0x1e6e>
080bccfb +0x1317:  lea    (%ebx,%eax,1),%eax
080bccfe +0x131a:  mov    %eax,-0x2c(%ebp)
080bcd01 +0x131d:  mov    -0xc(%ebp),%eax
080bcd04 +0x1320:  add    %eax,-0x1c(%ebp)
080bcd07 +0x1323:  mov    -0x1c(%ebp),%eax
080bcd0a +0x1326:  mov    %eax,(%esp)
080bcd0d +0x1329:  call   080bd88a <+0x1ea6>
080bcd12 +0x132e:  mov    %eax,%ebx
080bcd14 +0x1330:  add    -0x10(%ebp),%ebx
080bcd17 +0x1333:  mov    -0x14(%ebp),%eax
080bcd1a +0x1336:  mov    %eax,0x8(%esp)
080bcd1e +0x133a:  mov    -0x18(%ebp),%eax
080bcd21 +0x133d:  mov    %eax,0x4(%esp)
080bcd25 +0x1341:  mov    -0x1c(%ebp),%eax
080bcd28 +0x1344:  mov    %eax,(%esp)
080bcd2b +0x1347:  call   080bd83e <+0x1e5a>
080bcd30 +0x134c:  lea    (%ebx,%eax,1),%edx
080bcd33 +0x134f:  mov    &_ZN4CSHA7sm_K256E+0xa0,%eax
080bcd38 +0x1354:  add    %eax,%edx
080bcd3a +0x1356:  mov    -0x94(%ebp),%eax
080bcd40 +0x135c:  lea    (%edx,%eax,1),%eax
080bcd43 +0x135f:  mov    %eax,-0xc(%ebp)
080bcd46 +0x1362:  mov    -0x2c(%ebp),%eax
080bcd49 +0x1365:  mov    %eax,(%esp)
080bcd4c +0x1368:  call   080bd86c <+0x1e88>
080bcd51 +0x136d:  mov    %eax,%ebx
080bcd53 +0x136f:  add    -0xc(%ebp),%ebx
080bcd56 +0x1372:  mov    -0x24(%ebp),%eax
080bcd59 +0x1375:  mov    %eax,0x8(%esp)
080bcd5d +0x1379:  mov    -0x28(%ebp),%eax
080bcd60 +0x137c:  mov    %eax,0x4(%esp)
080bcd64 +0x1380:  mov    -0x2c(%ebp),%eax
080bcd67 +0x1383:  mov    %eax,(%esp)
080bcd6a +0x1386:  call   080bd852 <+0x1e6e>
080bcd6f +0x138b:  lea    (%ebx,%eax,1),%eax
080bcd72 +0x138e:  mov    %eax,-0x10(%ebp)
080bcd75 +0x1391:  mov    -0xc(%ebp),%eax
080bcd78 +0x1394:  add    %eax,-0x20(%ebp)
080bcd7b +0x1397:  mov    -0x20(%ebp),%eax
080bcd7e +0x139a:  mov    %eax,(%esp)
080bcd81 +0x139d:  call   080bd88a <+0x1ea6>
080bcd86 +0x13a2:  mov    %eax,%ebx
080bcd88 +0x13a4:  add    -0x14(%ebp),%ebx
080bcd8b +0x13a7:  mov    -0x18(%ebp),%eax
080bcd8e +0x13aa:  mov    %eax,0x8(%esp)
080bcd92 +0x13ae:  mov    -0x1c(%ebp),%eax
080bcd95 +0x13b1:  mov    %eax,0x4(%esp)
080bcd99 +0x13b5:  mov    -0x20(%ebp),%eax
080bcd9c +0x13b8:  mov    %eax,(%esp)
080bcd9f +0x13bb:  call   080bd83e <+0x1e5a>
080bcda4 +0x13c0:  lea    (%ebx,%eax,1),%edx
080bcda7 +0x13c3:  mov    &_ZN4CSHA7sm_K256E+0xa4,%eax
080bcdac +0x13c8:  add    %eax,%edx
080bcdae +0x13ca:  mov    -0x90(%ebp),%eax
080bcdb4 +0x13d0:  lea    (%edx,%eax,1),%eax
080bcdb7 +0x13d3:  mov    %eax,-0xc(%ebp)
080bcdba +0x13d6:  mov    -0x10(%ebp),%eax
080bcdbd +0x13d9:  mov    %eax,(%esp)
080bcdc0 +0x13dc:  call   080bd86c <+0x1e88>
080bcdc5 +0x13e1:  mov    %eax,%ebx
080bcdc7 +0x13e3:  add    -0xc(%ebp),%ebx
080bcdca +0x13e6:  mov    -0x28(%ebp),%eax
080bcdcd +0x13e9:  mov    %eax,0x8(%esp)
080bcdd1 +0x13ed:  mov    -0x2c(%ebp),%eax
080bcdd4 +0x13f0:  mov    %eax,0x4(%esp)
080bcdd8 +0x13f4:  mov    -0x10(%ebp),%eax
080bcddb +0x13f7:  mov    %eax,(%esp)
080bcdde +0x13fa:  call   080bd852 <+0x1e6e>
080bcde3 +0x13ff:  lea    (%ebx,%eax,1),%eax
080bcde6 +0x1402:  mov    %eax,-0x14(%ebp)
080bcde9 +0x1405:  mov    -0xc(%ebp),%eax
080bcdec +0x1408:  add    %eax,-0x24(%ebp)
080bcdef +0x140b:  mov    -0x24(%ebp),%eax
080bcdf2 +0x140e:  mov    %eax,(%esp)
080bcdf5 +0x1411:  call   080bd88a <+0x1ea6>
080bcdfa +0x1416:  mov    %eax,%ebx
080bcdfc +0x1418:  add    -0x18(%ebp),%ebx
080bcdff +0x141b:  mov    -0x1c(%ebp),%eax
080bce02 +0x141e:  mov    %eax,0x8(%esp)
080bce06 +0x1422:  mov    -0x20(%ebp),%eax
080bce09 +0x1425:  mov    %eax,0x4(%esp)
080bce0d +0x1429:  mov    -0x24(%ebp),%eax
080bce10 +0x142c:  mov    %eax,(%esp)
080bce13 +0x142f:  call   080bd83e <+0x1e5a>
080bce18 +0x1434:  lea    (%ebx,%eax,1),%edx
080bce1b +0x1437:  mov    &_ZN4CSHA7sm_K256E+0xa8,%eax
080bce20 +0x143c:  add    %eax,%edx
080bce22 +0x143e:  mov    -0x8c(%ebp),%eax
080bce28 +0x1444:  lea    (%edx,%eax,1),%eax
080bce2b +0x1447:  mov    %eax,-0xc(%ebp)
080bce2e +0x144a:  mov    -0x14(%ebp),%eax
080bce31 +0x144d:  mov    %eax,(%esp)
080bce34 +0x1450:  call   080bd86c <+0x1e88>
080bce39 +0x1455:  mov    %eax,%ebx
080bce3b +0x1457:  add    -0xc(%ebp),%ebx
080bce3e +0x145a:  mov    -0x2c(%ebp),%eax
080bce41 +0x145d:  mov    %eax,0x8(%esp)
080bce45 +0x1461:  mov    -0x10(%ebp),%eax
080bce48 +0x1464:  mov    %eax,0x4(%esp)
080bce4c +0x1468:  mov    -0x14(%ebp),%eax
080bce4f +0x146b:  mov    %eax,(%esp)
080bce52 +0x146e:  call   080bd852 <+0x1e6e>
080bce57 +0x1473:  lea    (%ebx,%eax,1),%eax
080bce5a +0x1476:  mov    %eax,-0x18(%ebp)
080bce5d +0x1479:  mov    -0xc(%ebp),%eax
080bce60 +0x147c:  add    %eax,-0x28(%ebp)
080bce63 +0x147f:  mov    -0x28(%ebp),%eax
080bce66 +0x1482:  mov    %eax,(%esp)
080bce69 +0x1485:  call   080bd88a <+0x1ea6>
080bce6e +0x148a:  mov    %eax,%ebx
080bce70 +0x148c:  add    -0x1c(%ebp),%ebx
080bce73 +0x148f:  mov    -0x20(%ebp),%eax
080bce76 +0x1492:  mov    %eax,0x8(%esp)
080bce7a +0x1496:  mov    -0x24(%ebp),%eax
080bce7d +0x1499:  mov    %eax,0x4(%esp)
080bce81 +0x149d:  mov    -0x28(%ebp),%eax
080bce84 +0x14a0:  mov    %eax,(%esp)
080bce87 +0x14a3:  call   080bd83e <+0x1e5a>
080bce8c +0x14a8:  lea    (%ebx,%eax,1),%edx
080bce8f +0x14ab:  mov    &_ZN4CSHA7sm_K256E+0xac,%eax
080bce94 +0x14b0:  add    %eax,%edx
080bce96 +0x14b2:  mov    -0x88(%ebp),%eax
080bce9c +0x14b8:  lea    (%edx,%eax,1),%eax
080bce9f +0x14bb:  mov    %eax,-0xc(%ebp)
080bcea2 +0x14be:  mov    -0x18(%ebp),%eax
080bcea5 +0x14c1:  mov    %eax,(%esp)
080bcea8 +0x14c4:  call   080bd86c <+0x1e88>
080bcead +0x14c9:  mov    %eax,%ebx
080bceaf +0x14cb:  add    -0xc(%ebp),%ebx
080bceb2 +0x14ce:  mov    -0x10(%ebp),%eax
080bceb5 +0x14d1:  mov    %eax,0x8(%esp)
080bceb9 +0x14d5:  mov    -0x14(%ebp),%eax
080bcebc +0x14d8:  mov    %eax,0x4(%esp)
080bcec0 +0x14dc:  mov    -0x18(%ebp),%eax
080bcec3 +0x14df:  mov    %eax,(%esp)
080bcec6 +0x14e2:  call   080bd852 <+0x1e6e>
080bcecb +0x14e7:  lea    (%ebx,%eax,1),%eax
080bcece +0x14ea:  mov    %eax,-0x1c(%ebp)
080bced1 +0x14ed:  mov    -0xc(%ebp),%eax
080bced4 +0x14f0:  add    %eax,-0x2c(%ebp)
080bced7 +0x14f3:  mov    -0x2c(%ebp),%eax
080bceda +0x14f6:  mov    %eax,(%esp)
080bcedd +0x14f9:  call   080bd88a <+0x1ea6>
080bcee2 +0x14fe:  mov    %eax,%ebx
080bcee4 +0x1500:  add    -0x20(%ebp),%ebx
080bcee7 +0x1503:  mov    -0x24(%ebp),%eax
080bceea +0x1506:  mov    %eax,0x8(%esp)
080bceee +0x150a:  mov    -0x28(%ebp),%eax
080bcef1 +0x150d:  mov    %eax,0x4(%esp)
080bcef5 +0x1511:  mov    -0x2c(%ebp),%eax
080bcef8 +0x1514:  mov    %eax,(%esp)
080bcefb +0x1517:  call   080bd83e <+0x1e5a>
080bcf00 +0x151c:  lea    (%ebx,%eax,1),%edx
080bcf03 +0x151f:  mov    &_ZN4CSHA7sm_K256E+0xb0,%eax
080bcf08 +0x1524:  add    %eax,%edx
080bcf0a +0x1526:  mov    -0x84(%ebp),%eax
080bcf10 +0x152c:  lea    (%edx,%eax,1),%eax
080bcf13 +0x152f:  mov    %eax,-0xc(%ebp)
080bcf16 +0x1532:  mov    -0x1c(%ebp),%eax
080bcf19 +0x1535:  mov    %eax,(%esp)
080bcf1c +0x1538:  call   080bd86c <+0x1e88>
080bcf21 +0x153d:  mov    %eax,%ebx
080bcf23 +0x153f:  add    -0xc(%ebp),%ebx
080bcf26 +0x1542:  mov    -0x14(%ebp),%eax
080bcf29 +0x1545:  mov    %eax,0x8(%esp)
080bcf2d +0x1549:  mov    -0x18(%ebp),%eax
080bcf30 +0x154c:  mov    %eax,0x4(%esp)
080bcf34 +0x1550:  mov    -0x1c(%ebp),%eax
080bcf37 +0x1553:  mov    %eax,(%esp)
080bcf3a +0x1556:  call   080bd852 <+0x1e6e>
080bcf3f +0x155b:  lea    (%ebx,%eax,1),%eax
080bcf42 +0x155e:  mov    %eax,-0x20(%ebp)
080bcf45 +0x1561:  mov    -0xc(%ebp),%eax
080bcf48 +0x1564:  add    %eax,-0x10(%ebp)
080bcf4b +0x1567:  mov    -0x10(%ebp),%eax
080bcf4e +0x156a:  mov    %eax,(%esp)
080bcf51 +0x156d:  call   080bd88a <+0x1ea6>
080bcf56 +0x1572:  mov    %eax,%ebx
080bcf58 +0x1574:  add    -0x24(%ebp),%ebx
080bcf5b +0x1577:  mov    -0x28(%ebp),%eax
080bcf5e +0x157a:  mov    %eax,0x8(%esp)
080bcf62 +0x157e:  mov    -0x2c(%ebp),%eax
080bcf65 +0x1581:  mov    %eax,0x4(%esp)
080bcf69 +0x1585:  mov    -0x10(%ebp),%eax
080bcf6c +0x1588:  mov    %eax,(%esp)
080bcf6f +0x158b:  call   080bd83e <+0x1e5a>
080bcf74 +0x1590:  lea    (%ebx,%eax,1),%edx
080bcf77 +0x1593:  mov    &_ZN4CSHA7sm_K256E+0xb4,%eax
080bcf7c +0x1598:  add    %eax,%edx
080bcf7e +0x159a:  mov    -0x80(%ebp),%eax
080bcf81 +0x159d:  lea    (%edx,%eax,1),%eax
080bcf84 +0x15a0:  mov    %eax,-0xc(%ebp)
080bcf87 +0x15a3:  mov    -0x20(%ebp),%eax
080bcf8a +0x15a6:  mov    %eax,(%esp)
080bcf8d +0x15a9:  call   080bd86c <+0x1e88>
080bcf92 +0x15ae:  mov    %eax,%ebx
080bcf94 +0x15b0:  add    -0xc(%ebp),%ebx
080bcf97 +0x15b3:  mov    -0x18(%ebp),%eax
080bcf9a +0x15b6:  mov    %eax,0x8(%esp)
080bcf9e +0x15ba:  mov    -0x1c(%ebp),%eax
080bcfa1 +0x15bd:  mov    %eax,0x4(%esp)
080bcfa5 +0x15c1:  mov    -0x20(%ebp),%eax
080bcfa8 +0x15c4:  mov    %eax,(%esp)
080bcfab +0x15c7:  call   080bd852 <+0x1e6e>
080bcfb0 +0x15cc:  lea    (%ebx,%eax,1),%eax
080bcfb3 +0x15cf:  mov    %eax,-0x24(%ebp)
080bcfb6 +0x15d2:  mov    -0xc(%ebp),%eax
080bcfb9 +0x15d5:  add    %eax,-0x14(%ebp)
080bcfbc +0x15d8:  mov    -0x14(%ebp),%eax
080bcfbf +0x15db:  mov    %eax,(%esp)
080bcfc2 +0x15de:  call   080bd88a <+0x1ea6>
080bcfc7 +0x15e3:  mov    %eax,%ebx
080bcfc9 +0x15e5:  add    -0x28(%ebp),%ebx
080bcfcc +0x15e8:  mov    -0x2c(%ebp),%eax
080bcfcf +0x15eb:  mov    %eax,0x8(%esp)
080bcfd3 +0x15ef:  mov    -0x10(%ebp),%eax
080bcfd6 +0x15f2:  mov    %eax,0x4(%esp)
080bcfda +0x15f6:  mov    -0x14(%ebp),%eax
080bcfdd +0x15f9:  mov    %eax,(%esp)
080bcfe0 +0x15fc:  call   080bd83e <+0x1e5a>
080bcfe5 +0x1601:  lea    (%ebx,%eax,1),%edx
080bcfe8 +0x1604:  mov    &_ZN4CSHA7sm_K256E+0xb8,%eax
080bcfed +0x1609:  add    %eax,%edx
080bcfef +0x160b:  mov    -0x7c(%ebp),%eax
080bcff2 +0x160e:  lea    (%edx,%eax,1),%eax
080bcff5 +0x1611:  mov    %eax,-0xc(%ebp)
080bcff8 +0x1614:  mov    -0x24(%ebp),%eax
080bcffb +0x1617:  mov    %eax,(%esp)
080bcffe +0x161a:  call   080bd86c <+0x1e88>
080bd003 +0x161f:  mov    %eax,%ebx
080bd005 +0x1621:  add    -0xc(%ebp),%ebx
080bd008 +0x1624:  mov    -0x1c(%ebp),%eax
080bd00b +0x1627:  mov    %eax,0x8(%esp)
080bd00f +0x162b:  mov    -0x20(%ebp),%eax
080bd012 +0x162e:  mov    %eax,0x4(%esp)
080bd016 +0x1632:  mov    -0x24(%ebp),%eax
080bd019 +0x1635:  mov    %eax,(%esp)
080bd01c +0x1638:  call   080bd852 <+0x1e6e>
080bd021 +0x163d:  lea    (%ebx,%eax,1),%eax
080bd024 +0x1640:  mov    %eax,-0x28(%ebp)
080bd027 +0x1643:  mov    -0xc(%ebp),%eax
080bd02a +0x1646:  add    %eax,-0x18(%ebp)
080bd02d +0x1649:  mov    -0x18(%ebp),%eax
080bd030 +0x164c:  mov    %eax,(%esp)
080bd033 +0x164f:  call   080bd88a <+0x1ea6>
080bd038 +0x1654:  mov    %eax,%ebx
080bd03a +0x1656:  add    -0x2c(%ebp),%ebx
080bd03d +0x1659:  mov    -0x10(%ebp),%eax
080bd040 +0x165c:  mov    %eax,0x8(%esp)
080bd044 +0x1660:  mov    -0x14(%ebp),%eax
080bd047 +0x1663:  mov    %eax,0x4(%esp)
080bd04b +0x1667:  mov    -0x18(%ebp),%eax
080bd04e +0x166a:  mov    %eax,(%esp)
080bd051 +0x166d:  call   080bd83e <+0x1e5a>
080bd056 +0x1672:  lea    (%ebx,%eax,1),%edx
080bd059 +0x1675:  mov    &_ZN4CSHA7sm_K256E+0xbc,%eax
080bd05e +0x167a:  add    %eax,%edx
080bd060 +0x167c:  mov    -0x78(%ebp),%eax
080bd063 +0x167f:  lea    (%edx,%eax,1),%eax
080bd066 +0x1682:  mov    %eax,-0xc(%ebp)
080bd069 +0x1685:  mov    -0x28(%ebp),%eax
080bd06c +0x1688:  mov    %eax,(%esp)
080bd06f +0x168b:  call   080bd86c <+0x1e88>
080bd074 +0x1690:  mov    %eax,%ebx
080bd076 +0x1692:  add    -0xc(%ebp),%ebx
080bd079 +0x1695:  mov    -0x20(%ebp),%eax
080bd07c +0x1698:  mov    %eax,0x8(%esp)
080bd080 +0x169c:  mov    -0x24(%ebp),%eax
080bd083 +0x169f:  mov    %eax,0x4(%esp)
080bd087 +0x16a3:  mov    -0x28(%ebp),%eax
080bd08a +0x16a6:  mov    %eax,(%esp)
080bd08d +0x16a9:  call   080bd852 <+0x1e6e>
080bd092 +0x16ae:  lea    (%ebx,%eax,1),%eax
080bd095 +0x16b1:  mov    %eax,-0x2c(%ebp)
080bd098 +0x16b4:  mov    -0xc(%ebp),%eax
080bd09b +0x16b7:  add    %eax,-0x1c(%ebp)
080bd09e +0x16ba:  mov    -0x1c(%ebp),%eax
080bd0a1 +0x16bd:  mov    %eax,(%esp)
080bd0a4 +0x16c0:  call   080bd88a <+0x1ea6>
080bd0a9 +0x16c5:  mov    %eax,%ebx
080bd0ab +0x16c7:  add    -0x10(%ebp),%ebx
080bd0ae +0x16ca:  mov    -0x14(%ebp),%eax
080bd0b1 +0x16cd:  mov    %eax,0x8(%esp)
080bd0b5 +0x16d1:  mov    -0x18(%ebp),%eax
080bd0b8 +0x16d4:  mov    %eax,0x4(%esp)
080bd0bc +0x16d8:  mov    -0x1c(%ebp),%eax
080bd0bf +0x16db:  mov    %eax,(%esp)
080bd0c2 +0x16de:  call   080bd83e <+0x1e5a>
080bd0c7 +0x16e3:  lea    (%ebx,%eax,1),%edx
080bd0ca +0x16e6:  mov    &_ZN4CSHA7sm_K256E+0xc0,%eax
080bd0cf +0x16eb:  add    %eax,%edx
080bd0d1 +0x16ed:  mov    -0x74(%ebp),%eax
080bd0d4 +0x16f0:  lea    (%edx,%eax,1),%eax
080bd0d7 +0x16f3:  mov    %eax,-0xc(%ebp)
080bd0da +0x16f6:  mov    -0x2c(%ebp),%eax
080bd0dd +0x16f9:  mov    %eax,(%esp)
080bd0e0 +0x16fc:  call   080bd86c <+0x1e88>
080bd0e5 +0x1701:  mov    %eax,%ebx
080bd0e7 +0x1703:  add    -0xc(%ebp),%ebx
080bd0ea +0x1706:  mov    -0x24(%ebp),%eax
080bd0ed +0x1709:  mov    %eax,0x8(%esp)
080bd0f1 +0x170d:  mov    -0x28(%ebp),%eax
080bd0f4 +0x1710:  mov    %eax,0x4(%esp)
080bd0f8 +0x1714:  mov    -0x2c(%ebp),%eax
080bd0fb +0x1717:  mov    %eax,(%esp)
080bd0fe +0x171a:  call   080bd852 <+0x1e6e>
080bd103 +0x171f:  lea    (%ebx,%eax,1),%eax
080bd106 +0x1722:  mov    %eax,-0x10(%ebp)
080bd109 +0x1725:  mov    -0xc(%ebp),%eax
080bd10c +0x1728:  add    %eax,-0x20(%ebp)
080bd10f +0x172b:  mov    -0x20(%ebp),%eax
080bd112 +0x172e:  mov    %eax,(%esp)
080bd115 +0x1731:  call   080bd88a <+0x1ea6>
080bd11a +0x1736:  mov    %eax,%ebx
080bd11c +0x1738:  add    -0x14(%ebp),%ebx
080bd11f +0x173b:  mov    -0x18(%ebp),%eax
080bd122 +0x173e:  mov    %eax,0x8(%esp)
080bd126 +0x1742:  mov    -0x1c(%ebp),%eax
080bd129 +0x1745:  mov    %eax,0x4(%esp)
080bd12d +0x1749:  mov    -0x20(%ebp),%eax
080bd130 +0x174c:  mov    %eax,(%esp)
080bd133 +0x174f:  call   080bd83e <+0x1e5a>
080bd138 +0x1754:  lea    (%ebx,%eax,1),%edx
080bd13b +0x1757:  mov    &_ZN4CSHA7sm_K256E+0xc4,%eax
080bd140 +0x175c:  add    %eax,%edx
080bd142 +0x175e:  mov    -0x70(%ebp),%eax
080bd145 +0x1761:  lea    (%edx,%eax,1),%eax
080bd148 +0x1764:  mov    %eax,-0xc(%ebp)
080bd14b +0x1767:  mov    -0x10(%ebp),%eax
080bd14e +0x176a:  mov    %eax,(%esp)
080bd151 +0x176d:  call   080bd86c <+0x1e88>
080bd156 +0x1772:  mov    %eax,%ebx
080bd158 +0x1774:  add    -0xc(%ebp),%ebx
080bd15b +0x1777:  mov    -0x28(%ebp),%eax
080bd15e +0x177a:  mov    %eax,0x8(%esp)
080bd162 +0x177e:  mov    -0x2c(%ebp),%eax
080bd165 +0x1781:  mov    %eax,0x4(%esp)
080bd169 +0x1785:  mov    -0x10(%ebp),%eax
080bd16c +0x1788:  mov    %eax,(%esp)
080bd16f +0x178b:  call   080bd852 <+0x1e6e>
080bd174 +0x1790:  lea    (%ebx,%eax,1),%eax
080bd177 +0x1793:  mov    %eax,-0x14(%ebp)
080bd17a +0x1796:  mov    -0xc(%ebp),%eax
080bd17d +0x1799:  add    %eax,-0x24(%ebp)
080bd180 +0x179c:  mov    -0x24(%ebp),%eax
080bd183 +0x179f:  mov    %eax,(%esp)
080bd186 +0x17a2:  call   080bd88a <+0x1ea6>
080bd18b +0x17a7:  mov    %eax,%ebx
080bd18d +0x17a9:  add    -0x18(%ebp),%ebx
080bd190 +0x17ac:  mov    -0x1c(%ebp),%eax
080bd193 +0x17af:  mov    %eax,0x8(%esp)
080bd197 +0x17b3:  mov    -0x20(%ebp),%eax
080bd19a +0x17b6:  mov    %eax,0x4(%esp)
080bd19e +0x17ba:  mov    -0x24(%ebp),%eax
080bd1a1 +0x17bd:  mov    %eax,(%esp)
080bd1a4 +0x17c0:  call   080bd83e <+0x1e5a>
080bd1a9 +0x17c5:  lea    (%ebx,%eax,1),%edx
080bd1ac +0x17c8:  mov    &_ZN4CSHA7sm_K256E+0xc8,%eax
080bd1b1 +0x17cd:  add    %eax,%edx
080bd1b3 +0x17cf:  mov    -0x6c(%ebp),%eax
080bd1b6 +0x17d2:  lea    (%edx,%eax,1),%eax
080bd1b9 +0x17d5:  mov    %eax,-0xc(%ebp)
080bd1bc +0x17d8:  mov    -0x14(%ebp),%eax
080bd1bf +0x17db:  mov    %eax,(%esp)
080bd1c2 +0x17de:  call   080bd86c <+0x1e88>
080bd1c7 +0x17e3:  mov    %eax,%ebx
080bd1c9 +0x17e5:  add    -0xc(%ebp),%ebx
080bd1cc +0x17e8:  mov    -0x2c(%ebp),%eax
080bd1cf +0x17eb:  mov    %eax,0x8(%esp)
080bd1d3 +0x17ef:  mov    -0x10(%ebp),%eax
080bd1d6 +0x17f2:  mov    %eax,0x4(%esp)
080bd1da +0x17f6:  mov    -0x14(%ebp),%eax
080bd1dd +0x17f9:  mov    %eax,(%esp)
080bd1e0 +0x17fc:  call   080bd852 <+0x1e6e>
080bd1e5 +0x1801:  lea    (%ebx,%eax,1),%eax
080bd1e8 +0x1804:  mov    %eax,-0x18(%ebp)
080bd1eb +0x1807:  mov    -0xc(%ebp),%eax
080bd1ee +0x180a:  add    %eax,-0x28(%ebp)
080bd1f1 +0x180d:  mov    -0x28(%ebp),%eax
080bd1f4 +0x1810:  mov    %eax,(%esp)
080bd1f7 +0x1813:  call   080bd88a <+0x1ea6>
080bd1fc +0x1818:  mov    %eax,%ebx
080bd1fe +0x181a:  add    -0x1c(%ebp),%ebx
080bd201 +0x181d:  mov    -0x20(%ebp),%eax
080bd204 +0x1820:  mov    %eax,0x8(%esp)
080bd208 +0x1824:  mov    -0x24(%ebp),%eax
080bd20b +0x1827:  mov    %eax,0x4(%esp)
080bd20f +0x182b:  mov    -0x28(%ebp),%eax
080bd212 +0x182e:  mov    %eax,(%esp)
080bd215 +0x1831:  call   080bd83e <+0x1e5a>
080bd21a +0x1836:  lea    (%ebx,%eax,1),%edx
080bd21d +0x1839:  mov    &_ZN4CSHA7sm_K256E+0xcc,%eax
080bd222 +0x183e:  add    %eax,%edx
080bd224 +0x1840:  mov    -0x68(%ebp),%eax
080bd227 +0x1843:  lea    (%edx,%eax,1),%eax
080bd22a +0x1846:  mov    %eax,-0xc(%ebp)
080bd22d +0x1849:  mov    -0x18(%ebp),%eax
080bd230 +0x184c:  mov    %eax,(%esp)
080bd233 +0x184f:  call   080bd86c <+0x1e88>
080bd238 +0x1854:  mov    %eax,%ebx
080bd23a +0x1856:  add    -0xc(%ebp),%ebx
080bd23d +0x1859:  mov    -0x10(%ebp),%eax
080bd240 +0x185c:  mov    %eax,0x8(%esp)
080bd244 +0x1860:  mov    -0x14(%ebp),%eax
080bd247 +0x1863:  mov    %eax,0x4(%esp)
080bd24b +0x1867:  mov    -0x18(%ebp),%eax
080bd24e +0x186a:  mov    %eax,(%esp)
080bd251 +0x186d:  call   080bd852 <+0x1e6e>
080bd256 +0x1872:  lea    (%ebx,%eax,1),%eax
080bd259 +0x1875:  mov    %eax,-0x1c(%ebp)
080bd25c +0x1878:  mov    -0xc(%ebp),%eax
080bd25f +0x187b:  add    %eax,-0x2c(%ebp)
080bd262 +0x187e:  mov    -0x2c(%ebp),%eax
080bd265 +0x1881:  mov    %eax,(%esp)
080bd268 +0x1884:  call   080bd88a <+0x1ea6>
080bd26d +0x1889:  mov    %eax,%ebx
080bd26f +0x188b:  add    -0x20(%ebp),%ebx
080bd272 +0x188e:  mov    -0x24(%ebp),%eax
080bd275 +0x1891:  mov    %eax,0x8(%esp)
080bd279 +0x1895:  mov    -0x28(%ebp),%eax
080bd27c +0x1898:  mov    %eax,0x4(%esp)
080bd280 +0x189c:  mov    -0x2c(%ebp),%eax
080bd283 +0x189f:  mov    %eax,(%esp)
080bd286 +0x18a2:  call   080bd83e <+0x1e5a>
080bd28b +0x18a7:  lea    (%ebx,%eax,1),%edx
080bd28e +0x18aa:  mov    &_ZN4CSHA7sm_K256E+0xd0,%eax
080bd293 +0x18af:  add    %eax,%edx
080bd295 +0x18b1:  mov    -0x64(%ebp),%eax
080bd298 +0x18b4:  lea    (%edx,%eax,1),%eax
080bd29b +0x18b7:  mov    %eax,-0xc(%ebp)
080bd29e +0x18ba:  mov    -0x1c(%ebp),%eax
080bd2a1 +0x18bd:  mov    %eax,(%esp)
080bd2a4 +0x18c0:  call   080bd86c <+0x1e88>
080bd2a9 +0x18c5:  mov    %eax,%ebx
080bd2ab +0x18c7:  add    -0xc(%ebp),%ebx
080bd2ae +0x18ca:  mov    -0x14(%ebp),%eax
080bd2b1 +0x18cd:  mov    %eax,0x8(%esp)
080bd2b5 +0x18d1:  mov    -0x18(%ebp),%eax
080bd2b8 +0x18d4:  mov    %eax,0x4(%esp)
080bd2bc +0x18d8:  mov    -0x1c(%ebp),%eax
080bd2bf +0x18db:  mov    %eax,(%esp)
080bd2c2 +0x18de:  call   080bd852 <+0x1e6e>
080bd2c7 +0x18e3:  lea    (%ebx,%eax,1),%eax
080bd2ca +0x18e6:  mov    %eax,-0x20(%ebp)
080bd2cd +0x18e9:  mov    -0xc(%ebp),%eax
080bd2d0 +0x18ec:  add    %eax,-0x10(%ebp)
080bd2d3 +0x18ef:  mov    -0x10(%ebp),%eax
080bd2d6 +0x18f2:  mov    %eax,(%esp)
080bd2d9 +0x18f5:  call   080bd88a <+0x1ea6>
080bd2de +0x18fa:  mov    %eax,%ebx
080bd2e0 +0x18fc:  add    -0x24(%ebp),%ebx
080bd2e3 +0x18ff:  mov    -0x28(%ebp),%eax
080bd2e6 +0x1902:  mov    %eax,0x8(%esp)
080bd2ea +0x1906:  mov    -0x2c(%ebp),%eax
080bd2ed +0x1909:  mov    %eax,0x4(%esp)
080bd2f1 +0x190d:  mov    -0x10(%ebp),%eax
080bd2f4 +0x1910:  mov    %eax,(%esp)
080bd2f7 +0x1913:  call   080bd83e <+0x1e5a>
080bd2fc +0x1918:  lea    (%ebx,%eax,1),%edx
080bd2ff +0x191b:  mov    &_ZN4CSHA7sm_K256E+0xd4,%eax
080bd304 +0x1920:  add    %eax,%edx
080bd306 +0x1922:  mov    -0x60(%ebp),%eax
080bd309 +0x1925:  lea    (%edx,%eax,1),%eax
080bd30c +0x1928:  mov    %eax,-0xc(%ebp)
080bd30f +0x192b:  mov    -0x20(%ebp),%eax
080bd312 +0x192e:  mov    %eax,(%esp)
080bd315 +0x1931:  call   080bd86c <+0x1e88>
080bd31a +0x1936:  mov    %eax,%ebx
080bd31c +0x1938:  add    -0xc(%ebp),%ebx
080bd31f +0x193b:  mov    -0x18(%ebp),%eax
080bd322 +0x193e:  mov    %eax,0x8(%esp)
080bd326 +0x1942:  mov    -0x1c(%ebp),%eax
080bd329 +0x1945:  mov    %eax,0x4(%esp)
080bd32d +0x1949:  mov    -0x20(%ebp),%eax
080bd330 +0x194c:  mov    %eax,(%esp)
080bd333 +0x194f:  call   080bd852 <+0x1e6e>
080bd338 +0x1954:  lea    (%ebx,%eax,1),%eax
080bd33b +0x1957:  mov    %eax,-0x24(%ebp)
080bd33e +0x195a:  mov    -0xc(%ebp),%eax
080bd341 +0x195d:  add    %eax,-0x14(%ebp)
080bd344 +0x1960:  mov    -0x14(%ebp),%eax
080bd347 +0x1963:  mov    %eax,(%esp)
080bd34a +0x1966:  call   080bd88a <+0x1ea6>
080bd34f +0x196b:  mov    %eax,%ebx
080bd351 +0x196d:  add    -0x28(%ebp),%ebx
080bd354 +0x1970:  mov    -0x2c(%ebp),%eax
080bd357 +0x1973:  mov    %eax,0x8(%esp)
080bd35b +0x1977:  mov    -0x10(%ebp),%eax
080bd35e +0x197a:  mov    %eax,0x4(%esp)
080bd362 +0x197e:  mov    -0x14(%ebp),%eax
080bd365 +0x1981:  mov    %eax,(%esp)
080bd368 +0x1984:  call   080bd83e <+0x1e5a>
080bd36d +0x1989:  lea    (%ebx,%eax,1),%edx
080bd370 +0x198c:  mov    &_ZN4CSHA7sm_K256E+0xd8,%eax
080bd375 +0x1991:  add    %eax,%edx
080bd377 +0x1993:  mov    -0x5c(%ebp),%eax
080bd37a +0x1996:  lea    (%edx,%eax,1),%eax
080bd37d +0x1999:  mov    %eax,-0xc(%ebp)
080bd380 +0x199c:  mov    -0x24(%ebp),%eax
080bd383 +0x199f:  mov    %eax,(%esp)
080bd386 +0x19a2:  call   080bd86c <+0x1e88>
080bd38b +0x19a7:  mov    %eax,%ebx
080bd38d +0x19a9:  add    -0xc(%ebp),%ebx
080bd390 +0x19ac:  mov    -0x1c(%ebp),%eax
080bd393 +0x19af:  mov    %eax,0x8(%esp)
080bd397 +0x19b3:  mov    -0x20(%ebp),%eax
080bd39a +0x19b6:  mov    %eax,0x4(%esp)
080bd39e +0x19ba:  mov    -0x24(%ebp),%eax
080bd3a1 +0x19bd:  mov    %eax,(%esp)
080bd3a4 +0x19c0:  call   080bd852 <+0x1e6e>
080bd3a9 +0x19c5:  lea    (%ebx,%eax,1),%eax
080bd3ac +0x19c8:  mov    %eax,-0x28(%ebp)
080bd3af +0x19cb:  mov    -0xc(%ebp),%eax
080bd3b2 +0x19ce:  add    %eax,-0x18(%ebp)
080bd3b5 +0x19d1:  mov    -0x18(%ebp),%eax
080bd3b8 +0x19d4:  mov    %eax,(%esp)
080bd3bb +0x19d7:  call   080bd88a <+0x1ea6>
080bd3c0 +0x19dc:  mov    %eax,%ebx
080bd3c2 +0x19de:  add    -0x2c(%ebp),%ebx
080bd3c5 +0x19e1:  mov    -0x10(%ebp),%eax
080bd3c8 +0x19e4:  mov    %eax,0x8(%esp)
080bd3cc +0x19e8:  mov    -0x14(%ebp),%eax
080bd3cf +0x19eb:  mov    %eax,0x4(%esp)
080bd3d3 +0x19ef:  mov    -0x18(%ebp),%eax
080bd3d6 +0x19f2:  mov    %eax,(%esp)
080bd3d9 +0x19f5:  call   080bd83e <+0x1e5a>
080bd3de +0x19fa:  lea    (%ebx,%eax,1),%edx
080bd3e1 +0x19fd:  mov    &_ZN4CSHA7sm_K256E+0xdc,%eax
080bd3e6 +0x1a02:  add    %eax,%edx
080bd3e8 +0x1a04:  mov    -0x58(%ebp),%eax
080bd3eb +0x1a07:  lea    (%edx,%eax,1),%eax
080bd3ee +0x1a0a:  mov    %eax,-0xc(%ebp)
080bd3f1 +0x1a0d:  mov    -0x28(%ebp),%eax
080bd3f4 +0x1a10:  mov    %eax,(%esp)
080bd3f7 +0x1a13:  call   080bd86c <+0x1e88>
080bd3fc +0x1a18:  mov    %eax,%ebx
080bd3fe +0x1a1a:  add    -0xc(%ebp),%ebx
080bd401 +0x1a1d:  mov    -0x20(%ebp),%eax
080bd404 +0x1a20:  mov    %eax,0x8(%esp)
080bd408 +0x1a24:  mov    -0x24(%ebp),%eax
080bd40b +0x1a27:  mov    %eax,0x4(%esp)
080bd40f +0x1a2b:  mov    -0x28(%ebp),%eax
080bd412 +0x1a2e:  mov    %eax,(%esp)
080bd415 +0x1a31:  call   080bd852 <+0x1e6e>
080bd41a +0x1a36:  lea    (%ebx,%eax,1),%eax
080bd41d +0x1a39:  mov    %eax,-0x2c(%ebp)
080bd420 +0x1a3c:  mov    -0xc(%ebp),%eax
080bd423 +0x1a3f:  add    %eax,-0x1c(%ebp)
080bd426 +0x1a42:  mov    -0x1c(%ebp),%eax
080bd429 +0x1a45:  mov    %eax,(%esp)
080bd42c +0x1a48:  call   080bd88a <+0x1ea6>
080bd431 +0x1a4d:  mov    %eax,%ebx
080bd433 +0x1a4f:  add    -0x10(%ebp),%ebx
080bd436 +0x1a52:  mov    -0x14(%ebp),%eax
080bd439 +0x1a55:  mov    %eax,0x8(%esp)
080bd43d +0x1a59:  mov    -0x18(%ebp),%eax
080bd440 +0x1a5c:  mov    %eax,0x4(%esp)
080bd444 +0x1a60:  mov    -0x1c(%ebp),%eax
080bd447 +0x1a63:  mov    %eax,(%esp)
080bd44a +0x1a66:  call   080bd83e <+0x1e5a>
080bd44f +0x1a6b:  lea    (%ebx,%eax,1),%edx
080bd452 +0x1a6e:  mov    &_ZN4CSHA7sm_K256E+0xe0,%eax
080bd457 +0x1a73:  add    %eax,%edx
080bd459 +0x1a75:  mov    -0x54(%ebp),%eax
080bd45c +0x1a78:  lea    (%edx,%eax,1),%eax
080bd45f +0x1a7b:  mov    %eax,-0xc(%ebp)
080bd462 +0x1a7e:  mov    -0x2c(%ebp),%eax
080bd465 +0x1a81:  mov    %eax,(%esp)
080bd468 +0x1a84:  call   080bd86c <+0x1e88>
080bd46d +0x1a89:  mov    %eax,%ebx
080bd46f +0x1a8b:  add    -0xc(%ebp),%ebx
080bd472 +0x1a8e:  mov    -0x24(%ebp),%eax
080bd475 +0x1a91:  mov    %eax,0x8(%esp)
080bd479 +0x1a95:  mov    -0x28(%ebp),%eax
080bd47c +0x1a98:  mov    %eax,0x4(%esp)
080bd480 +0x1a9c:  mov    -0x2c(%ebp),%eax
080bd483 +0x1a9f:  mov    %eax,(%esp)
080bd486 +0x1aa2:  call   080bd852 <+0x1e6e>
080bd48b +0x1aa7:  lea    (%ebx,%eax,1),%eax
080bd48e +0x1aaa:  mov    %eax,-0x10(%ebp)
080bd491 +0x1aad:  mov    -0xc(%ebp),%eax
080bd494 +0x1ab0:  add    %eax,-0x20(%ebp)
080bd497 +0x1ab3:  mov    -0x20(%ebp),%eax
080bd49a +0x1ab6:  mov    %eax,(%esp)
080bd49d +0x1ab9:  call   080bd88a <+0x1ea6>
080bd4a2 +0x1abe:  mov    %eax,%ebx
080bd4a4 +0x1ac0:  add    -0x14(%ebp),%ebx
080bd4a7 +0x1ac3:  mov    -0x18(%ebp),%eax
080bd4aa +0x1ac6:  mov    %eax,0x8(%esp)
080bd4ae +0x1aca:  mov    -0x1c(%ebp),%eax
080bd4b1 +0x1acd:  mov    %eax,0x4(%esp)
080bd4b5 +0x1ad1:  mov    -0x20(%ebp),%eax
080bd4b8 +0x1ad4:  mov    %eax,(%esp)
080bd4bb +0x1ad7:  call   080bd83e <+0x1e5a>
080bd4c0 +0x1adc:  lea    (%ebx,%eax,1),%edx
080bd4c3 +0x1adf:  mov    &_ZN4CSHA7sm_K256E+0xe4,%eax
080bd4c8 +0x1ae4:  add    %eax,%edx
080bd4ca +0x1ae6:  mov    -0x50(%ebp),%eax
080bd4cd +0x1ae9:  lea    (%edx,%eax,1),%eax
080bd4d0 +0x1aec:  mov    %eax,-0xc(%ebp)
080bd4d3 +0x1aef:  mov    -0x10(%ebp),%eax
080bd4d6 +0x1af2:  mov    %eax,(%esp)
080bd4d9 +0x1af5:  call   080bd86c <+0x1e88>
080bd4de +0x1afa:  mov    %eax,%ebx
080bd4e0 +0x1afc:  add    -0xc(%ebp),%ebx
080bd4e3 +0x1aff:  mov    -0x28(%ebp),%eax
080bd4e6 +0x1b02:  mov    %eax,0x8(%esp)
080bd4ea +0x1b06:  mov    -0x2c(%ebp),%eax
080bd4ed +0x1b09:  mov    %eax,0x4(%esp)
080bd4f1 +0x1b0d:  mov    -0x10(%ebp),%eax
080bd4f4 +0x1b10:  mov    %eax,(%esp)
080bd4f7 +0x1b13:  call   080bd852 <+0x1e6e>
080bd4fc +0x1b18:  lea    (%ebx,%eax,1),%eax
080bd4ff +0x1b1b:  mov    %eax,-0x14(%ebp)
080bd502 +0x1b1e:  mov    -0xc(%ebp),%eax
080bd505 +0x1b21:  add    %eax,-0x24(%ebp)
080bd508 +0x1b24:  mov    -0x24(%ebp),%eax
080bd50b +0x1b27:  mov    %eax,(%esp)
080bd50e +0x1b2a:  call   080bd88a <+0x1ea6>
080bd513 +0x1b2f:  mov    %eax,%ebx
080bd515 +0x1b31:  add    -0x18(%ebp),%ebx
080bd518 +0x1b34:  mov    -0x1c(%ebp),%eax
080bd51b +0x1b37:  mov    %eax,0x8(%esp)
080bd51f +0x1b3b:  mov    -0x20(%ebp),%eax
080bd522 +0x1b3e:  mov    %eax,0x4(%esp)
080bd526 +0x1b42:  mov    -0x24(%ebp),%eax
080bd529 +0x1b45:  mov    %eax,(%esp)
080bd52c +0x1b48:  call   080bd83e <+0x1e5a>
080bd531 +0x1b4d:  lea    (%ebx,%eax,1),%edx
080bd534 +0x1b50:  mov    &_ZN4CSHA7sm_K256E+0xe8,%eax
080bd539 +0x1b55:  add    %eax,%edx
080bd53b +0x1b57:  mov    -0x4c(%ebp),%eax
080bd53e +0x1b5a:  lea    (%edx,%eax,1),%eax
080bd541 +0x1b5d:  mov    %eax,-0xc(%ebp)
080bd544 +0x1b60:  mov    -0x14(%ebp),%eax
080bd547 +0x1b63:  mov    %eax,(%esp)
080bd54a +0x1b66:  call   080bd86c <+0x1e88>
080bd54f +0x1b6b:  mov    %eax,%ebx
080bd551 +0x1b6d:  add    -0xc(%ebp),%ebx
080bd554 +0x1b70:  mov    -0x2c(%ebp),%eax
080bd557 +0x1b73:  mov    %eax,0x8(%esp)
080bd55b +0x1b77:  mov    -0x10(%ebp),%eax
080bd55e +0x1b7a:  mov    %eax,0x4(%esp)
080bd562 +0x1b7e:  mov    -0x14(%ebp),%eax
080bd565 +0x1b81:  mov    %eax,(%esp)
080bd568 +0x1b84:  call   080bd852 <+0x1e6e>
080bd56d +0x1b89:  lea    (%ebx,%eax,1),%eax
080bd570 +0x1b8c:  mov    %eax,-0x18(%ebp)
080bd573 +0x1b8f:  mov    -0xc(%ebp),%eax
080bd576 +0x1b92:  add    %eax,-0x28(%ebp)
080bd579 +0x1b95:  mov    -0x28(%ebp),%eax
080bd57c +0x1b98:  mov    %eax,(%esp)
080bd57f +0x1b9b:  call   080bd88a <+0x1ea6>
080bd584 +0x1ba0:  mov    %eax,%ebx
080bd586 +0x1ba2:  add    -0x1c(%ebp),%ebx
080bd589 +0x1ba5:  mov    -0x20(%ebp),%eax
080bd58c +0x1ba8:  mov    %eax,0x8(%esp)
080bd590 +0x1bac:  mov    -0x24(%ebp),%eax
080bd593 +0x1baf:  mov    %eax,0x4(%esp)
080bd597 +0x1bb3:  mov    -0x28(%ebp),%eax
080bd59a +0x1bb6:  mov    %eax,(%esp)
080bd59d +0x1bb9:  call   080bd83e <+0x1e5a>
080bd5a2 +0x1bbe:  lea    (%ebx,%eax,1),%edx
080bd5a5 +0x1bc1:  mov    &_ZN4CSHA7sm_K256E+0xec,%eax
080bd5aa +0x1bc6:  add    %eax,%edx
080bd5ac +0x1bc8:  mov    -0x48(%ebp),%eax
080bd5af +0x1bcb:  lea    (%edx,%eax,1),%eax
080bd5b2 +0x1bce:  mov    %eax,-0xc(%ebp)
080bd5b5 +0x1bd1:  mov    -0x18(%ebp),%eax
080bd5b8 +0x1bd4:  mov    %eax,(%esp)
080bd5bb +0x1bd7:  call   080bd86c <+0x1e88>
080bd5c0 +0x1bdc:  mov    %eax,%ebx
080bd5c2 +0x1bde:  add    -0xc(%ebp),%ebx
080bd5c5 +0x1be1:  mov    -0x10(%ebp),%eax
080bd5c8 +0x1be4:  mov    %eax,0x8(%esp)
080bd5cc +0x1be8:  mov    -0x14(%ebp),%eax
080bd5cf +0x1beb:  mov    %eax,0x4(%esp)
080bd5d3 +0x1bef:  mov    -0x18(%ebp),%eax
080bd5d6 +0x1bf2:  mov    %eax,(%esp)
080bd5d9 +0x1bf5:  call   080bd852 <+0x1e6e>
080bd5de +0x1bfa:  lea    (%ebx,%eax,1),%eax
080bd5e1 +0x1bfd:  mov    %eax,-0x1c(%ebp)
080bd5e4 +0x1c00:  mov    -0xc(%ebp),%eax
080bd5e7 +0x1c03:  add    %eax,-0x2c(%ebp)
080bd5ea +0x1c06:  mov    -0x2c(%ebp),%eax
080bd5ed +0x1c09:  mov    %eax,(%esp)
080bd5f0 +0x1c0c:  call   080bd88a <+0x1ea6>
080bd5f5 +0x1c11:  mov    %eax,%ebx
080bd5f7 +0x1c13:  add    -0x20(%ebp),%ebx
080bd5fa +0x1c16:  mov    -0x24(%ebp),%eax
080bd5fd +0x1c19:  mov    %eax,0x8(%esp)
080bd601 +0x1c1d:  mov    -0x28(%ebp),%eax
080bd604 +0x1c20:  mov    %eax,0x4(%esp)
080bd608 +0x1c24:  mov    -0x2c(%ebp),%eax
080bd60b +0x1c27:  mov    %eax,(%esp)
080bd60e +0x1c2a:  call   080bd83e <+0x1e5a>
080bd613 +0x1c2f:  lea    (%ebx,%eax,1),%edx
080bd616 +0x1c32:  mov    &_ZN4CSHA7sm_K256E+0xf0,%eax
080bd61b +0x1c37:  add    %eax,%edx
080bd61d +0x1c39:  mov    -0x44(%ebp),%eax
080bd620 +0x1c3c:  lea    (%edx,%eax,1),%eax
080bd623 +0x1c3f:  mov    %eax,-0xc(%ebp)
080bd626 +0x1c42:  mov    -0x1c(%ebp),%eax
080bd629 +0x1c45:  mov    %eax,(%esp)
080bd62c +0x1c48:  call   080bd86c <+0x1e88>
080bd631 +0x1c4d:  mov    %eax,%ebx
080bd633 +0x1c4f:  add    -0xc(%ebp),%ebx
080bd636 +0x1c52:  mov    -0x14(%ebp),%eax
080bd639 +0x1c55:  mov    %eax,0x8(%esp)
080bd63d +0x1c59:  mov    -0x18(%ebp),%eax
080bd640 +0x1c5c:  mov    %eax,0x4(%esp)
080bd644 +0x1c60:  mov    -0x1c(%ebp),%eax
080bd647 +0x1c63:  mov    %eax,(%esp)
080bd64a +0x1c66:  call   080bd852 <+0x1e6e>
080bd64f +0x1c6b:  lea    (%ebx,%eax,1),%eax
080bd652 +0x1c6e:  mov    %eax,-0x20(%ebp)
080bd655 +0x1c71:  mov    -0xc(%ebp),%eax
080bd658 +0x1c74:  add    %eax,-0x10(%ebp)
080bd65b +0x1c77:  mov    -0x10(%ebp),%eax
080bd65e +0x1c7a:  mov    %eax,(%esp)
080bd661 +0x1c7d:  call   080bd88a <+0x1ea6>
080bd666 +0x1c82:  mov    %eax,%ebx
080bd668 +0x1c84:  add    -0x24(%ebp),%ebx
080bd66b +0x1c87:  mov    -0x28(%ebp),%eax
080bd66e +0x1c8a:  mov    %eax,0x8(%esp)
080bd672 +0x1c8e:  mov    -0x2c(%ebp),%eax
080bd675 +0x1c91:  mov    %eax,0x4(%esp)
080bd679 +0x1c95:  mov    -0x10(%ebp),%eax
080bd67c +0x1c98:  mov    %eax,(%esp)
080bd67f +0x1c9b:  call   080bd83e <+0x1e5a>
080bd684 +0x1ca0:  lea    (%ebx,%eax,1),%edx
080bd687 +0x1ca3:  mov    &_ZN4CSHA7sm_K256E+0xf4,%eax
080bd68c +0x1ca8:  add    %eax,%edx
080bd68e +0x1caa:  mov    -0x40(%ebp),%eax
080bd691 +0x1cad:  lea    (%edx,%eax,1),%eax
080bd694 +0x1cb0:  mov    %eax,-0xc(%ebp)
080bd697 +0x1cb3:  mov    -0x20(%ebp),%eax
080bd69a +0x1cb6:  mov    %eax,(%esp)
080bd69d +0x1cb9:  call   080bd86c <+0x1e88>
080bd6a2 +0x1cbe:  mov    %eax,%ebx
080bd6a4 +0x1cc0:  add    -0xc(%ebp),%ebx
080bd6a7 +0x1cc3:  mov    -0x18(%ebp),%eax
080bd6aa +0x1cc6:  mov    %eax,0x8(%esp)
080bd6ae +0x1cca:  mov    -0x1c(%ebp),%eax
080bd6b1 +0x1ccd:  mov    %eax,0x4(%esp)
080bd6b5 +0x1cd1:  mov    -0x20(%ebp),%eax
080bd6b8 +0x1cd4:  mov    %eax,(%esp)
080bd6bb +0x1cd7:  call   080bd852 <+0x1e6e>
080bd6c0 +0x1cdc:  lea    (%ebx,%eax,1),%eax
080bd6c3 +0x1cdf:  mov    %eax,-0x24(%ebp)
080bd6c6 +0x1ce2:  mov    -0xc(%ebp),%eax
080bd6c9 +0x1ce5:  add    %eax,-0x14(%ebp)
080bd6cc +0x1ce8:  mov    -0x14(%ebp),%eax
080bd6cf +0x1ceb:  mov    %eax,(%esp)
080bd6d2 +0x1cee:  call   080bd88a <+0x1ea6>
080bd6d7 +0x1cf3:  mov    %eax,%ebx
080bd6d9 +0x1cf5:  add    -0x28(%ebp),%ebx
080bd6dc +0x1cf8:  mov    -0x2c(%ebp),%eax
080bd6df +0x1cfb:  mov    %eax,0x8(%esp)
080bd6e3 +0x1cff:  mov    -0x10(%ebp),%eax
080bd6e6 +0x1d02:  mov    %eax,0x4(%esp)
080bd6ea +0x1d06:  mov    -0x14(%ebp),%eax
080bd6ed +0x1d09:  mov    %eax,(%esp)
080bd6f0 +0x1d0c:  call   080bd83e <+0x1e5a>
080bd6f5 +0x1d11:  lea    (%ebx,%eax,1),%edx
080bd6f8 +0x1d14:  mov    &_ZN4CSHA7sm_K256E+0xf8,%eax
080bd6fd +0x1d19:  add    %eax,%edx
080bd6ff +0x1d1b:  mov    -0x3c(%ebp),%eax
080bd702 +0x1d1e:  lea    (%edx,%eax,1),%eax
080bd705 +0x1d21:  mov    %eax,-0xc(%ebp)
080bd708 +0x1d24:  mov    -0x24(%ebp),%eax
080bd70b +0x1d27:  mov    %eax,(%esp)
080bd70e +0x1d2a:  call   080bd86c <+0x1e88>
080bd713 +0x1d2f:  mov    %eax,%ebx
080bd715 +0x1d31:  add    -0xc(%ebp),%ebx
080bd718 +0x1d34:  mov    -0x1c(%ebp),%eax
080bd71b +0x1d37:  mov    %eax,0x8(%esp)
080bd71f +0x1d3b:  mov    -0x20(%ebp),%eax
080bd722 +0x1d3e:  mov    %eax,0x4(%esp)
080bd726 +0x1d42:  mov    -0x24(%ebp),%eax
080bd729 +0x1d45:  mov    %eax,(%esp)
080bd72c +0x1d48:  call   080bd852 <+0x1e6e>
080bd731 +0x1d4d:  lea    (%ebx,%eax,1),%eax
080bd734 +0x1d50:  mov    %eax,-0x28(%ebp)
080bd737 +0x1d53:  mov    -0xc(%ebp),%eax
080bd73a +0x1d56:  add    %eax,-0x18(%ebp)
080bd73d +0x1d59:  mov    -0x18(%ebp),%eax
080bd740 +0x1d5c:  mov    %eax,(%esp)
080bd743 +0x1d5f:  call   080bd88a <+0x1ea6>
080bd748 +0x1d64:  mov    %eax,%ebx
080bd74a +0x1d66:  add    -0x2c(%ebp),%ebx
080bd74d +0x1d69:  mov    -0x10(%ebp),%eax
080bd750 +0x1d6c:  mov    %eax,0x8(%esp)
080bd754 +0x1d70:  mov    -0x14(%ebp),%eax
080bd757 +0x1d73:  mov    %eax,0x4(%esp)
080bd75b +0x1d77:  mov    -0x18(%ebp),%eax
080bd75e +0x1d7a:  mov    %eax,(%esp)
080bd761 +0x1d7d:  call   080bd83e <+0x1e5a>
080bd766 +0x1d82:  lea    (%ebx,%eax,1),%edx
080bd769 +0x1d85:  mov    &_ZN4CSHA7sm_K256E+0xfc,%eax
080bd76e +0x1d8a:  add    %eax,%edx
080bd770 +0x1d8c:  mov    -0x38(%ebp),%eax
080bd773 +0x1d8f:  lea    (%edx,%eax,1),%eax
080bd776 +0x1d92:  mov    %eax,-0xc(%ebp)
080bd779 +0x1d95:  mov    -0x28(%ebp),%eax
080bd77c +0x1d98:  mov    %eax,(%esp)
080bd77f +0x1d9b:  call   080bd86c <+0x1e88>
080bd784 +0x1da0:  mov    %eax,%ebx
080bd786 +0x1da2:  add    -0xc(%ebp),%ebx
080bd789 +0x1da5:  mov    -0x20(%ebp),%eax
080bd78c +0x1da8:  mov    %eax,0x8(%esp)
080bd790 +0x1dac:  mov    -0x24(%ebp),%eax
080bd793 +0x1daf:  mov    %eax,0x4(%esp)
080bd797 +0x1db3:  mov    -0x28(%ebp),%eax
080bd79a +0x1db6:  mov    %eax,(%esp)
080bd79d +0x1db9:  call   080bd852 <+0x1e6e>
080bd7a2 +0x1dbe:  lea    (%ebx,%eax,1),%eax
080bd7a5 +0x1dc1:  mov    %eax,-0x2c(%ebp)
080bd7a8 +0x1dc4:  mov    -0xc(%ebp),%eax
080bd7ab +0x1dc7:  add    %eax,-0x1c(%ebp)
080bd7ae +0x1dca:  mov    0x8(%ebp),%eax
080bd7b1 +0x1dcd:  mov    (%eax),%eax
080bd7b3 +0x1dcf:  mov    %eax,%edx
080bd7b5 +0x1dd1:  add    -0x2c(%ebp),%edx
080bd7b8 +0x1dd4:  mov    0x8(%ebp),%eax
080bd7bb +0x1dd7:  mov    %edx,(%eax)
080bd7bd +0x1dd9:  mov    0x8(%ebp),%eax
080bd7c0 +0x1ddc:  mov    0x4(%eax),%eax
080bd7c3 +0x1ddf:  mov    %eax,%edx
080bd7c5 +0x1de1:  add    -0x28(%ebp),%edx
080bd7c8 +0x1de4:  mov    0x8(%ebp),%eax
080bd7cb +0x1de7:  mov    %edx,0x4(%eax)
080bd7ce +0x1dea:  mov    0x8(%ebp),%eax
080bd7d1 +0x1ded:  mov    0x8(%eax),%eax
080bd7d4 +0x1df0:  mov    %eax,%edx
080bd7d6 +0x1df2:  add    -0x24(%ebp),%edx
080bd7d9 +0x1df5:  mov    0x8(%ebp),%eax
080bd7dc +0x1df8:  mov    %edx,0x8(%eax)
080bd7df +0x1dfb:  mov    0x8(%ebp),%eax
080bd7e2 +0x1dfe:  mov    0xc(%eax),%eax
080bd7e5 +0x1e01:  mov    %eax,%edx
080bd7e7 +0x1e03:  add    -0x20(%ebp),%edx
080bd7ea +0x1e06:  mov    0x8(%ebp),%eax
080bd7ed +0x1e09:  mov    %edx,0xc(%eax)
080bd7f0 +0x1e0c:  mov    0x8(%ebp),%eax
080bd7f3 +0x1e0f:  mov    0x10(%eax),%eax
080bd7f6 +0x1e12:  mov    %eax,%edx
080bd7f8 +0x1e14:  add    -0x1c(%ebp),%edx
080bd7fb +0x1e17:  mov    0x8(%ebp),%eax
080bd7fe +0x1e1a:  mov    %edx,0x10(%eax)
080bd801 +0x1e1d:  mov    0x8(%ebp),%eax
080bd804 +0x1e20:  mov    0x14(%eax),%eax
080bd807 +0x1e23:  mov    %eax,%edx
080bd809 +0x1e25:  add    -0x18(%ebp),%edx
080bd80c +0x1e28:  mov    0x8(%ebp),%eax
080bd80f +0x1e2b:  mov    %edx,0x14(%eax)
080bd812 +0x1e2e:  mov    0x8(%ebp),%eax
080bd815 +0x1e31:  mov    0x18(%eax),%eax
080bd818 +0x1e34:  mov    %eax,%edx
080bd81a +0x1e36:  add    -0x14(%ebp),%edx
080bd81d +0x1e39:  mov    0x8(%ebp),%eax
080bd820 +0x1e3c:  mov    %edx,0x18(%eax)
080bd823 +0x1e3f:  mov    0x8(%ebp),%eax
080bd826 +0x1e42:  mov    0x1c(%eax),%eax
080bd829 +0x1e45:  mov    %eax,%edx
080bd82b +0x1e47:  add    -0x10(%ebp),%edx
080bd82e +0x1e4a:  mov    0x8(%ebp),%eax
080bd831 +0x1e4d:  mov    %edx,0x1c(%eax)
080bd834 +0x1e50:  add    $0x140,%esp
080bd83a +0x1e56:  pop    %ebx
080bd83b +0x1e57:  pop    %esi
080bd83c +0x1e58:  pop    %ebp
080bd83d +0x1e59:  ret
080bd83e +0x1e5a:  push   %ebp
080bd83f +0x1e5b:  mov    %esp,%ebp
080bd841 +0x1e5d:  mov    0x10(%ebp),%eax
080bd844 +0x1e60:  mov    0xc(%ebp),%edx
080bd847 +0x1e63:  xor    %edx,%eax
080bd849 +0x1e65:  and    0x8(%ebp),%eax
080bd84c +0x1e68:  xor    0x10(%ebp),%eax
080bd84f +0x1e6b:  pop    %ebp
080bd850 +0x1e6c:  ret
080bd851 +0x1e6d:  nop
080bd852 +0x1e6e:  push   %ebp
080bd853 +0x1e6f:  mov    %esp,%ebp
080bd855 +0x1e71:  mov    0xc(%ebp),%eax
080bd858 +0x1e74:  mov    0x8(%ebp),%edx
080bd85b +0x1e77:  or     %edx,%eax
080bd85d +0x1e79:  and    0x10(%ebp),%eax
080bd860 +0x1e7c:  mov    0xc(%ebp),%edx
080bd863 +0x1e7f:  mov    0x8(%ebp),%ecx
080bd866 +0x1e82:  and    %ecx,%edx
080bd868 +0x1e84:  or     %edx,%eax
080bd86a +0x1e86:  pop    %ebp
080bd86b +0x1e87:  ret
080bd86c +0x1e88:  push   %ebp
080bd86d +0x1e89:  mov    %esp,%ebp
080bd86f +0x1e8b:  mov    0x8(%ebp),%eax
080bd872 +0x1e8e:  mov    %eax,%edx
080bd874 +0x1e90:  ror    $0x2,%edx
080bd877 +0x1e93:  mov    0x8(%ebp),%eax
080bd87a +0x1e96:  ror    $0xd,%eax
080bd87d +0x1e99:  xor    %eax,%edx
080bd87f +0x1e9b:  mov    0x8(%ebp),%eax
080bd882 +0x1e9e:  ror    $0x16,%eax
080bd885 +0x1ea1:  xor    %edx,%eax
080bd887 +0x1ea3:  pop    %ebp
080bd888 +0x1ea4:  ret
080bd889 +0x1ea5:  nop
080bd88a +0x1ea6:  push   %ebp
080bd88b +0x1ea7:  mov    %esp,%ebp
080bd88d +0x1ea9:  mov    0x8(%ebp),%eax
080bd890 +0x1eac:  mov    %eax,%edx
080bd892 +0x1eae:  ror    $0x6,%edx
080bd895 +0x1eb1:  mov    0x8(%ebp),%eax
080bd898 +0x1eb4:  ror    $0xb,%eax
080bd89b +0x1eb7:  xor    %eax,%edx
080bd89d +0x1eb9:  mov    0x8(%ebp),%eax
080bd8a0 +0x1ebc:  ror    $0x19,%eax
080bd8a3 +0x1ebf:  xor    %edx,%eax
080bd8a5 +0x1ec1:  pop    %ebp
080bd8a6 +0x1ec2:  ret
080bd8a7 +0x1ec3:  nop
080bd8a8 +0x1ec4:  push   %ebp
080bd8a9 +0x1ec5:  mov    %esp,%ebp
080bd8ab +0x1ec7:  mov    0x8(%ebp),%eax
080bd8ae +0x1eca:  mov    %eax,%edx
080bd8b0 +0x1ecc:  ror    $0x7,%edx
080bd8b3 +0x1ecf:  mov    0x8(%ebp),%eax
080bd8b6 +0x1ed2:  ror    $0x12,%eax
080bd8b9 +0x1ed5:  xor    %eax,%edx
080bd8bb +0x1ed7:  mov    0x8(%ebp),%eax
080bd8be +0x1eda:  shr    $0x3,%eax
080bd8c1 +0x1edd:  xor    %edx,%eax
080bd8c3 +0x1edf:  pop    %ebp
080bd8c4 +0x1ee0:  ret
080bd8c5 +0x1ee1:  nop
080bd8c6 +0x1ee2:  push   %ebp
080bd8c7 +0x1ee3:  mov    %esp,%ebp
080bd8c9 +0x1ee5:  mov    0x8(%ebp),%eax
080bd8cc +0x1ee8:  mov    %eax,%edx
080bd8ce +0x1eea:  ror    $0x11,%edx
080bd8d1 +0x1eed:  mov    0x8(%ebp),%eax
080bd8d4 +0x1ef0:  ror    $0x13,%eax
080bd8d7 +0x1ef3:  xor    %eax,%edx
080bd8d9 +0x1ef5:  mov    0x8(%ebp),%eax
080bd8dc +0x1ef8:  shr    $0xa,%eax
080bd8df +0x1efb:  xor    %edx,%eax
080bd8e1 +0x1efd:  pop    %ebp
080bd8e2 +0x1efe:  ret
080bd8e3 +0x1eff:  nop
080bd8e4 +0x1f00:  push   %ebp
080bd8e5 +0x1f01:  mov    %esp,%ebp
080bd8e7 +0x1f03:  mov    0x8(%ebp),%eax
080bd8ea +0x1f06:  add    $0x3,%eax
080bd8ed +0x1f09:  movzbl (%eax),%eax
080bd8f0 +0x1f0c:  movzbl %al,%edx
080bd8f3 +0x1f0f:  mov    0x8(%ebp),%eax
080bd8f6 +0x1f12:  add    $0x2,%eax
080bd8f9 +0x1f15:  movzbl (%eax),%eax
080bd8fc +0x1f18:  movzbl %al,%eax
080bd8ff +0x1f1b:  shl    $0x8,%eax
080bd902 +0x1f1e:  or     %eax,%edx
080bd904 +0x1f20:  mov    0x8(%ebp),%eax
080bd907 +0x1f23:  add    $0x1,%eax
080bd90a +0x1f26:  movzbl (%eax),%eax
080bd90d +0x1f29:  movzbl %al,%eax
080bd910 +0x1f2c:  shl    $0x10,%eax
080bd913 +0x1f2f:  or     %eax,%edx
080bd915 +0x1f31:  mov    0x8(%ebp),%eax
080bd918 +0x1f34:  movzbl (%eax),%eax
080bd91b +0x1f37:  movzbl %al,%eax
080bd91e +0x1f3a:  shl    $0x18,%eax
080bd921 +0x1f3d:  or     %eax,%edx
080bd923 +0x1f3f:  mov    0xc(%ebp),%eax
080bd926 +0x1f42:  mov    %edx,(%eax)
080bd928 +0x1f44:  pop    %ebp
080bd929 +0x1f45:  ret
080bd92a +0x1f46:  push   %ebp
080bd92b +0x1f47:  mov    %esp,%ebp
080bd92d +0x1f49:  addl   $0x3,0xc(%ebp)
080bd931 +0x1f4d:  mov    0x8(%ebp),%eax
080bd934 +0x1f50:  mov    (%eax),%eax
080bd936 +0x1f52:  mov    %eax,%edx
080bd938 +0x1f54:  mov    0xc(%ebp),%eax
080bd93b +0x1f57:  mov    %dl,(%eax)
080bd93d +0x1f59:  subl   $0x1,0xc(%ebp)
080bd941 +0x1f5d:  mov    0x8(%ebp),%eax
080bd944 +0x1f60:  mov    (%eax),%eax
080bd946 +0x1f62:  shr    $0x8,%eax
080bd949 +0x1f65:  mov    %eax,%edx
080bd94b +0x1f67:  mov    0xc(%ebp),%eax
080bd94e +0x1f6a:  mov    %dl,(%eax)
080bd950 +0x1f6c:  subl   $0x1,0xc(%ebp)
080bd954 +0x1f70:  mov    0x8(%ebp),%eax
080bd957 +0x1f73:  mov    (%eax),%eax
080bd959 +0x1f75:  shr    $0x10,%eax
080bd95c +0x1f78:  mov    %eax,%edx
080bd95e +0x1f7a:  mov    0xc(%ebp),%eax
080bd961 +0x1f7d:  mov    %dl,(%eax)
080bd963 +0x1f7f:  subl   $0x1,0xc(%ebp)
080bd967 +0x1f83:  mov    0x8(%ebp),%eax
080bd96a +0x1f86:  mov    (%eax),%eax
080bd96c +0x1f88:  shr    $0x18,%eax
080bd96f +0x1f8b:  mov    %eax,%edx
080bd971 +0x1f8d:  mov    0xc(%ebp),%eax
080bd974 +0x1f90:  mov    %dl,(%eax)
080bd976 +0x1f92:  pop    %ebp
080bd977 +0x1f93:  ret
```

## 反编译 C

```c
// CSHA::Transform @ 0x80bb9e4

/* CSHA::Transform() */

void __thiscall CSHA::Transform(CSHA *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_138 [4];
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  CSHA *local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_38 = this + 0x28;
  for (local_34 = 0; local_34 < 0x10; local_34 = local_34 + 1) {
    Bytes2Word((uchar *)local_38,local_138 + local_34);
    local_38 = local_38 + 4;
  }
  for (local_34 = 0x10; iVar3 = local_34, local_34 < 0x40; local_34 = local_34 + 1) {
    iVar4 = sig1(local_138[local_34 + -2]);
    uVar1 = local_138[local_34 + -7];
    iVar2 = sig0(local_138[local_34 + -0xf]);
    local_138[iVar3] = iVar4 + uVar1 + iVar2 + local_138[local_34 + -0x10];
  }
  local_30 = *(uint *)this;
  local_2c = *(uint *)(this + 4);
  local_28 = *(uint *)(this + 8);
  local_24 = *(uint *)(this + 0xc);
  local_20 = *(uint *)(this + 0x10);
  local_1c = *(uint *)(this + 0x14);
  local_18 = *(uint *)(this + 0x18);
  local_14 = *(uint *)(this + 0x1c);
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + sm_K256 + local_138[0];
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b22fe4 + local_138[1];
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b22fe8 + local_138[2];
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b22fec + local_138[3];
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b22ff0 + local_128;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b22ff4 + local_124;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b22ff8 + local_120;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b22ffc + local_11c;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b23000 + local_118;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b23004 + local_114;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b23008 + local_110;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b2300c + local_10c;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b23010 + local_108;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b23014 + local_104;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b23018 + local_100;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b2301c + local_fc;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b23020 + local_f8;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b23024 + local_f4;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b23028 + local_f0;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b2302c + local_ec;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b23030 + local_e8;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b23034 + local_e4;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b23038 + local_e0;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b2303c + local_dc;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b23040 + local_d8;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b23044 + local_d4;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b23048 + local_d0;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b2304c + local_cc;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b23050 + local_c8;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b23054 + local_c4;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b23058 + local_c0;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b2305c + local_bc;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b23060 + local_b8;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b23064 + local_b4;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b23068 + local_b0;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b2306c + local_ac;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b23070 + local_a8;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b23074 + local_a4;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b23078 + local_a0;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b2307c + local_9c;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b23080 + local_98;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b23084 + local_94;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b23088 + local_90;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b2308c + local_8c;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b23090 + local_88;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b23094 + local_84;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b23098 + local_80;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b2309c + local_7c;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b230a0 + local_78;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b230a4 + local_74;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b230a8 + local_70;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b230ac + local_6c;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b230b0 + local_68;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b230b4 + local_64;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b230b8 + local_60;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b230bc + local_5c;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  local_30 = iVar3 + iVar4;
  local_20 = local_20 + local_10;
  iVar3 = SIG1(local_20);
  iVar3 = iVar3 + local_14;
  iVar4 = CH(local_20,local_1c,local_18);
  local_10 = iVar3 + iVar4 + DAT_08b230c0 + local_58;
  iVar3 = SIG0(local_30);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_30,local_2c,local_28);
  local_14 = iVar3 + iVar4;
  local_24 = local_24 + local_10;
  iVar3 = SIG1(local_24);
  iVar3 = iVar3 + local_18;
  iVar4 = CH(local_24,local_20,local_1c);
  local_10 = iVar3 + iVar4 + DAT_08b230c4 + local_54;
  iVar3 = SIG0(local_14);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_14,local_30,local_2c);
  local_18 = iVar3 + iVar4;
  local_28 = local_28 + local_10;
  iVar3 = SIG1(local_28);
  iVar3 = iVar3 + local_1c;
  iVar4 = CH(local_28,local_24,local_20);
  local_10 = iVar3 + iVar4 + DAT_08b230c8 + local_50;
  iVar3 = SIG0(local_18);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_18,local_14,local_30);
  local_1c = iVar3 + iVar4;
  local_2c = local_2c + local_10;
  iVar3 = SIG1(local_2c);
  iVar3 = iVar3 + local_20;
  iVar4 = CH(local_2c,local_28,local_24);
  local_10 = iVar3 + iVar4 + DAT_08b230cc + local_4c;
  iVar3 = SIG0(local_1c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_1c,local_18,local_14);
  local_20 = iVar3 + iVar4;
  local_30 = local_30 + local_10;
  iVar3 = SIG1(local_30);
  iVar3 = iVar3 + local_24;
  iVar4 = CH(local_30,local_2c,local_28);
  local_10 = iVar3 + iVar4 + DAT_08b230d0 + local_48;
  iVar3 = SIG0(local_20);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_20,local_1c,local_18);
  local_24 = iVar3 + iVar4;
  local_14 = local_14 + local_10;
  iVar3 = SIG1(local_14);
  iVar3 = iVar3 + local_28;
  iVar4 = CH(local_14,local_30,local_2c);
  local_10 = iVar3 + iVar4 + DAT_08b230d4 + local_44;
  iVar3 = SIG0(local_24);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_24,local_20,local_1c);
  local_28 = iVar3 + iVar4;
  local_18 = local_18 + local_10;
  iVar3 = SIG1(local_18);
  iVar3 = iVar3 + local_2c;
  iVar4 = CH(local_18,local_14,local_30);
  local_10 = iVar3 + iVar4 + DAT_08b230d8 + local_40;
  iVar3 = SIG0(local_28);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_28,local_24,local_20);
  local_2c = iVar3 + iVar4;
  local_1c = local_1c + local_10;
  iVar3 = SIG1(local_1c);
  iVar3 = iVar3 + local_30;
  iVar4 = CH(local_1c,local_18,local_14);
  local_10 = iVar3 + iVar4 + DAT_08b230dc + local_3c;
  iVar3 = SIG0(local_2c);
  iVar3 = iVar3 + local_10;
  iVar4 = MAJ(local_2c,local_28,local_24);
  *(int *)this = *(int *)this + iVar3 + iVar4;
  *(uint *)(this + 4) = *(int *)(this + 4) + local_2c;
  *(uint *)(this + 8) = *(int *)(this + 8) + local_28;
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + local_24;
  *(uint *)(this + 0x10) = *(int *)(this + 0x10) + local_20 + local_10;
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + local_1c;
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + local_18;
  *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + local_14;
  return;
}
```
