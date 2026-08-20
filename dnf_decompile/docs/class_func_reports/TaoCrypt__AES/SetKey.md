# SetKey

`_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE`

`TaoCrypt::AES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AES` | `0x087a1d50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1d50  _ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE
#           TaoCrypt::AES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
# range [0x087a1d50, 0x087a2da9]
087a1d50 +0x0000:  push   %ebp
087a1d51 +0x0001:  mov    %esp,%ebp
087a1d53 +0x0003:  push   %edi
087a1d54 +0x0004:  push   %esi
087a1d55 +0x0005:  push   %ebx
087a1d56 +0x0006:  sub    $0x4c,%esp
087a1d59 +0x0009:  mov    0x10(%ebp),%edx
087a1d5c +0x000c:  mov    0x8(%ebp),%esi
087a1d5f +0x000f:  call   08722df8 <__i686.get_pc_thunk.bx>
087a1d64 +0x0014:  add    $0xbcae34,%ebx
087a1d6a +0x001a:  shr    $0x2,%edx
087a1d6d +0x001d:  lea    0x6(%edx),%eax
087a1d70 +0x0020:  mov    %eax,0x38(%esi)
087a1d73 +0x0023:  mov    0x10(%ebp),%eax
087a1d76 +0x0026:  lea    0x3c(%esi),%edi
087a1d79 +0x0029:  mov    %edx,-0x34(%ebp)
087a1d7c +0x002c:  mov    %edi,(%esp)
087a1d7f +0x002f:  mov    %eax,0x8(%esp)
087a1d83 +0x0033:  mov    0xc(%ebp),%eax
087a1d86 +0x0036:  mov    %eax,0x4(%esp)
087a1d8a +0x003a:  call   0807d8a0 <_init+0x198>
087a1d8f +0x003f:  mov    -0x34(%ebp),%edx
087a1d92 +0x0042:  mov    0x10(%ebp),%eax
087a1d95 +0x0045:  movl   $0x0,0x4(%esp)
087a1d9d +0x004d:  shl    $0x2,%edx
087a1da0 +0x0050:  sub    0x10(%ebp),%edx
087a1da3 +0x0053:  lea    (%edi,%eax,1),%eax
087a1da6 +0x0056:  mov    %eax,(%esp)
087a1da9 +0x0059:  mov    %edx,0x8(%esp)
087a1dad +0x005d:  call   0807dcc0 <_init+0x5b8>
087a1db2 +0x0062:  mov    0x10(%ebp),%eax
087a1db5 +0x0065:  add    $0x3,%eax
087a1db8 +0x0068:  shr    $0x2,%eax
087a1dbb +0x006b:  test   %eax,%eax
087a1dbd +0x006d:  je     087a1def <+0x9f>
087a1dbf +0x006f:  mov    %edi,-0x20(%ebp)
087a1dc2 +0x0072:  xor    %edx,%edx
087a1dc4 +0x0074:  mov    %eax,%edi
087a1dc6 +0x0076:  xchg   %ax,%ax
087a1dc8 +0x0078:  mov    0x3c(%esi,%edx,4),%ecx
087a1dcc +0x007c:  mov    %ecx,%eax
087a1dce +0x007e:  ror    $0x18,%eax
087a1dd1 +0x0081:  ror    $0x8,%ecx
087a1dd4 +0x0084:  and    $0xff00ff,%eax
087a1dd9 +0x0089:  and    $0xff00ff00,%ecx
087a1ddf +0x008f:  or     %ecx,%eax
087a1de1 +0x0091:  mov    %eax,0x3c(%esi,%edx,4)
087a1de5 +0x0095:  add    $0x1,%edx
087a1de8 +0x0098:  cmp    %edi,%edx
087a1dea +0x009a:  jne    087a1dc8 <+0x78>
087a1dec +0x009c:  mov    -0x20(%ebp),%edi
087a1def +0x009f:  cmpl   $0x18,0x10(%ebp)
087a1df3 +0x00a3:  je     087a29af <+0xc5f>
087a1df9 +0x00a9:  cmpl   $0x20,0x10(%ebp)
087a1dfd +0x00ad:  je     087a245d <+0x70d>
087a1e03 +0x00b3:  cmpl   $0x10,0x10(%ebp)
087a1e07 +0x00b7:  je     087a1e1b <+0xcb>
087a1e09 +0x00b9:  cmpl   $0x1,0x30(%esi)
087a1e0d +0x00bd:  je     087a227f <+0x52f>
087a1e13 +0x00c3:  add    $0x4c,%esp
087a1e16 +0x00c6:  pop    %ebx
087a1e17 +0x00c7:  pop    %esi
087a1e18 +0x00c8:  pop    %edi
087a1e19 +0x00c9:  pop    %ebp
087a1e1a +0x00ca:  ret
087a1e1b +0x00cb:  mov    -0x464(%ebx),%ecx
087a1e21 +0x00d1:  lea    0x10(%edi),%edx
087a1e24 +0x00d4:  mov    -0x3e4(%ebx),%eax
087a1e2a +0x00da:  mov    %edx,-0x1c(%ebp)
087a1e2d +0x00dd:  mov    0x3c(%esi),%edx
087a1e30 +0x00e0:  xor    (%ecx),%edx
087a1e32 +0x00e2:  mov    (%eax),%eax
087a1e34 +0x00e4:  movzbl 0xc(%edi),%ecx
087a1e38 +0x00e8:  mov    (%eax,%ecx,4),%ecx
087a1e3b +0x00eb:  and    $0xff00,%ecx
087a1e41 +0x00f1:  xor    %ecx,%edx
087a1e43 +0x00f3:  mov    0xc(%edi),%ecx
087a1e46 +0x00f6:  shr    $0x10,%ecx
087a1e49 +0x00f9:  movzbl %cl,%ecx
087a1e4c +0x00fc:  mov    (%eax,%ecx,4),%ecx
087a1e4f +0x00ff:  and    $0xff000000,%ecx
087a1e55 +0x0105:  xor    %ecx,%edx
087a1e57 +0x0107:  mov    0xc(%edi),%ecx
087a1e5a +0x010a:  movzbl %ch,%ecx
087a1e5d +0x010d:  mov    (%eax,%ecx,4),%ecx
087a1e60 +0x0110:  and    $0xff0000,%ecx
087a1e66 +0x0116:  xor    %ecx,%edx
087a1e68 +0x0118:  mov    0xc(%edi),%ecx
087a1e6b +0x011b:  shr    $0x18,%ecx
087a1e6e +0x011e:  movzbl (%eax,%ecx,4),%ecx
087a1e72 +0x0122:  xor    %ecx,%edx
087a1e74 +0x0124:  mov    0x4(%edi),%ecx
087a1e77 +0x0127:  mov    %edx,0x10(%edi)
087a1e7a +0x012a:  xor    %edx,%ecx
087a1e7c +0x012c:  mov    %ecx,0x14(%edi)
087a1e7f +0x012f:  xor    0x8(%edi),%ecx
087a1e82 +0x0132:  mov    %ecx,0x18(%edi)
087a1e85 +0x0135:  xor    0xc(%edi),%ecx
087a1e88 +0x0138:  mov    %ecx,0x1c(%edi)
087a1e8b +0x013b:  mov    %ecx,-0x24(%ebp)
087a1e8e +0x013e:  lea    0x20(%edi),%ecx
087a1e91 +0x0141:  mov    %ecx,-0x20(%ebp)
087a1e94 +0x0144:  mov    -0x464(%ebx),%ecx
087a1e9a +0x014a:  xor    0x4(%ecx),%edx
087a1e9d +0x014d:  movzbl -0x24(%ebp),%ecx
087a1ea1 +0x0151:  mov    (%eax,%ecx,4),%ecx
087a1ea4 +0x0154:  and    $0xff00,%ecx
087a1eaa +0x015a:  xor    %ecx,%edx
087a1eac +0x015c:  mov    -0x24(%ebp),%ecx
087a1eaf +0x015f:  shr    $0x10,%ecx
087a1eb2 +0x0162:  movzbl %cl,%ecx
087a1eb5 +0x0165:  mov    (%eax,%ecx,4),%ecx
087a1eb8 +0x0168:  and    $0xff000000,%ecx
087a1ebe +0x016e:  xor    %ecx,%edx
087a1ec0 +0x0170:  mov    -0x24(%ebp),%ecx
087a1ec3 +0x0173:  movzbl %ch,%ecx
087a1ec6 +0x0176:  mov    (%eax,%ecx,4),%ecx
087a1ec9 +0x0179:  and    $0xff0000,%ecx
087a1ecf +0x017f:  xor    %ecx,%edx
087a1ed1 +0x0181:  mov    -0x24(%ebp),%ecx
087a1ed4 +0x0184:  shr    $0x18,%ecx
087a1ed7 +0x0187:  movzbl (%eax,%ecx,4),%ecx
087a1edb +0x018b:  xor    %ecx,%edx
087a1edd +0x018d:  mov    %edx,0x20(%edi)
087a1ee0 +0x0190:  mov    -0x1c(%ebp),%ecx
087a1ee3 +0x0193:  xor    0x4(%ecx),%edx
087a1ee6 +0x0196:  mov    %edx,0x14(%ecx)
087a1ee9 +0x0199:  xor    0x8(%ecx),%edx
087a1eec +0x019c:  mov    %edx,0x18(%ecx)
087a1eef +0x019f:  xor    0x1c(%edi),%edx
087a1ef2 +0x01a2:  mov    %edx,0x1c(%ecx)
087a1ef5 +0x01a5:  mov    -0x464(%ebx),%ecx
087a1efb +0x01ab:  mov    %edx,-0x24(%ebp)
087a1efe +0x01ae:  lea    0x30(%edi),%edx
087a1f01 +0x01b1:  mov    %edx,-0x1c(%ebp)
087a1f04 +0x01b4:  mov    0x20(%edi),%edx
087a1f07 +0x01b7:  xor    0x8(%ecx),%edx
087a1f0a +0x01ba:  movzbl -0x24(%ebp),%ecx
087a1f0e +0x01be:  mov    (%eax,%ecx,4),%ecx
087a1f11 +0x01c1:  and    $0xff00,%ecx
087a1f17 +0x01c7:  xor    %ecx,%edx
087a1f19 +0x01c9:  mov    -0x24(%ebp),%ecx
087a1f1c +0x01cc:  shr    $0x10,%ecx
087a1f1f +0x01cf:  movzbl %cl,%ecx
087a1f22 +0x01d2:  mov    (%eax,%ecx,4),%ecx
087a1f25 +0x01d5:  and    $0xff000000,%ecx
087a1f2b +0x01db:  xor    %ecx,%edx
087a1f2d +0x01dd:  mov    -0x24(%ebp),%ecx
087a1f30 +0x01e0:  movzbl %ch,%ecx
087a1f33 +0x01e3:  mov    (%eax,%ecx,4),%ecx
087a1f36 +0x01e6:  and    $0xff0000,%ecx
087a1f3c +0x01ec:  xor    %ecx,%edx
087a1f3e +0x01ee:  mov    -0x24(%ebp),%ecx
087a1f41 +0x01f1:  shr    $0x18,%ecx
087a1f44 +0x01f4:  movzbl (%eax,%ecx,4),%ecx
087a1f48 +0x01f8:  xor    %ecx,%edx
087a1f4a +0x01fa:  mov    -0x20(%ebp),%ecx
087a1f4d +0x01fd:  mov    %edx,0x30(%edi)
087a1f50 +0x0200:  xor    0x4(%ecx),%edx
087a1f53 +0x0203:  mov    %edx,0x14(%ecx)
087a1f56 +0x0206:  xor    0x8(%ecx),%edx
087a1f59 +0x0209:  mov    %edx,0x18(%ecx)
087a1f5c +0x020c:  xor    0x2c(%edi),%edx
087a1f5f +0x020f:  mov    %edx,0x1c(%ecx)
087a1f62 +0x0212:  mov    -0x464(%ebx),%ecx
087a1f68 +0x0218:  mov    %edx,-0x24(%ebp)
087a1f6b +0x021b:  lea    0x40(%edi),%edx
087a1f6e +0x021e:  mov    %edx,-0x20(%ebp)
087a1f71 +0x0221:  mov    0x30(%edi),%edx
087a1f74 +0x0224:  xor    0xc(%ecx),%edx
087a1f77 +0x0227:  movzbl -0x24(%ebp),%ecx
087a1f7b +0x022b:  mov    (%eax,%ecx,4),%ecx
087a1f7e +0x022e:  and    $0xff00,%ecx
087a1f84 +0x0234:  xor    %ecx,%edx
087a1f86 +0x0236:  mov    -0x24(%ebp),%ecx
087a1f89 +0x0239:  shr    $0x10,%ecx
087a1f8c +0x023c:  movzbl %cl,%ecx
087a1f8f +0x023f:  mov    (%eax,%ecx,4),%ecx
087a1f92 +0x0242:  and    $0xff000000,%ecx
087a1f98 +0x0248:  xor    %ecx,%edx
087a1f9a +0x024a:  mov    -0x24(%ebp),%ecx
087a1f9d +0x024d:  movzbl %ch,%ecx
087a1fa0 +0x0250:  mov    (%eax,%ecx,4),%ecx
087a1fa3 +0x0253:  and    $0xff0000,%ecx
087a1fa9 +0x0259:  xor    %ecx,%edx
087a1fab +0x025b:  mov    -0x24(%ebp),%ecx
087a1fae +0x025e:  shr    $0x18,%ecx
087a1fb1 +0x0261:  movzbl (%eax,%ecx,4),%ecx
087a1fb5 +0x0265:  xor    %ecx,%edx
087a1fb7 +0x0267:  mov    %edx,0x40(%edi)
087a1fba +0x026a:  mov    -0x1c(%ebp),%ecx
087a1fbd +0x026d:  xor    0x4(%ecx),%edx
087a1fc0 +0x0270:  mov    %edx,0x14(%ecx)
087a1fc3 +0x0273:  xor    0x8(%ecx),%edx
087a1fc6 +0x0276:  mov    %edx,0x18(%ecx)
087a1fc9 +0x0279:  xor    0x3c(%edi),%edx
087a1fcc +0x027c:  mov    %edx,0x1c(%ecx)
087a1fcf +0x027f:  mov    -0x464(%ebx),%ecx
087a1fd5 +0x0285:  mov    %edx,-0x24(%ebp)
087a1fd8 +0x0288:  lea    0x50(%edi),%edx
087a1fdb +0x028b:  mov    %edx,-0x1c(%ebp)
087a1fde +0x028e:  mov    0x40(%edi),%edx
087a1fe1 +0x0291:  xor    0x10(%ecx),%edx
087a1fe4 +0x0294:  movzbl -0x24(%ebp),%ecx
087a1fe8 +0x0298:  mov    (%eax,%ecx,4),%ecx
087a1feb +0x029b:  and    $0xff00,%ecx
087a1ff1 +0x02a1:  xor    %ecx,%edx
087a1ff3 +0x02a3:  mov    -0x24(%ebp),%ecx
087a1ff6 +0x02a6:  shr    $0x10,%ecx
087a1ff9 +0x02a9:  movzbl %cl,%ecx
087a1ffc +0x02ac:  mov    (%eax,%ecx,4),%ecx
087a1fff +0x02af:  and    $0xff000000,%ecx
087a2005 +0x02b5:  xor    %ecx,%edx
087a2007 +0x02b7:  mov    -0x24(%ebp),%ecx
087a200a +0x02ba:  movzbl %ch,%ecx
087a200d +0x02bd:  mov    (%eax,%ecx,4),%ecx
087a2010 +0x02c0:  and    $0xff0000,%ecx
087a2016 +0x02c6:  xor    %ecx,%edx
087a2018 +0x02c8:  mov    -0x24(%ebp),%ecx
087a201b +0x02cb:  shr    $0x18,%ecx
087a201e +0x02ce:  movzbl (%eax,%ecx,4),%ecx
087a2022 +0x02d2:  xor    %ecx,%edx
087a2024 +0x02d4:  mov    -0x20(%ebp),%ecx
087a2027 +0x02d7:  mov    %edx,0x50(%edi)
087a202a +0x02da:  xor    0x4(%ecx),%edx
087a202d +0x02dd:  mov    %edx,0x14(%ecx)
087a2030 +0x02e0:  xor    0x8(%ecx),%edx
087a2033 +0x02e3:  mov    %edx,0x18(%ecx)
087a2036 +0x02e6:  xor    0x4c(%edi),%edx
087a2039 +0x02e9:  mov    %edx,0x1c(%ecx)
087a203c +0x02ec:  mov    -0x464(%ebx),%ecx
087a2042 +0x02f2:  mov    %edx,-0x24(%ebp)
087a2045 +0x02f5:  lea    0x60(%edi),%edx
087a2048 +0x02f8:  mov    %edx,-0x20(%ebp)
087a204b +0x02fb:  mov    0x50(%edi),%edx
087a204e +0x02fe:  xor    0x14(%ecx),%edx
087a2051 +0x0301:  movzbl -0x24(%ebp),%ecx
087a2055 +0x0305:  mov    (%eax,%ecx,4),%ecx
087a2058 +0x0308:  and    $0xff00,%ecx
087a205e +0x030e:  xor    %ecx,%edx
087a2060 +0x0310:  mov    -0x24(%ebp),%ecx
087a2063 +0x0313:  shr    $0x10,%ecx
087a2066 +0x0316:  movzbl %cl,%ecx
087a2069 +0x0319:  mov    (%eax,%ecx,4),%ecx
087a206c +0x031c:  and    $0xff000000,%ecx
087a2072 +0x0322:  xor    %ecx,%edx
087a2074 +0x0324:  mov    -0x24(%ebp),%ecx
087a2077 +0x0327:  movzbl %ch,%ecx
087a207a +0x032a:  mov    (%eax,%ecx,4),%ecx
087a207d +0x032d:  and    $0xff0000,%ecx
087a2083 +0x0333:  xor    %ecx,%edx
087a2085 +0x0335:  mov    -0x24(%ebp),%ecx
087a2088 +0x0338:  shr    $0x18,%ecx
087a208b +0x033b:  movzbl (%eax,%ecx,4),%ecx
087a208f +0x033f:  xor    %ecx,%edx
087a2091 +0x0341:  mov    %edx,0x60(%edi)
087a2094 +0x0344:  mov    -0x1c(%ebp),%ecx
087a2097 +0x0347:  xor    0x4(%ecx),%edx
087a209a +0x034a:  mov    %edx,0x14(%ecx)
087a209d +0x034d:  xor    0x8(%ecx),%edx
087a20a0 +0x0350:  mov    %edx,0x18(%ecx)
087a20a3 +0x0353:  xor    0x5c(%edi),%edx
087a20a6 +0x0356:  mov    %edx,0x1c(%ecx)
087a20a9 +0x0359:  mov    -0x464(%ebx),%ecx
087a20af +0x035f:  mov    %edx,-0x24(%ebp)
087a20b2 +0x0362:  lea    0x70(%edi),%edx
087a20b5 +0x0365:  mov    %edx,-0x1c(%ebp)
087a20b8 +0x0368:  mov    0x60(%edi),%edx
087a20bb +0x036b:  xor    0x18(%ecx),%edx
087a20be +0x036e:  movzbl -0x24(%ebp),%ecx
087a20c2 +0x0372:  mov    (%eax,%ecx,4),%ecx
087a20c5 +0x0375:  and    $0xff00,%ecx
087a20cb +0x037b:  xor    %ecx,%edx
087a20cd +0x037d:  mov    -0x24(%ebp),%ecx
087a20d0 +0x0380:  shr    $0x10,%ecx
087a20d3 +0x0383:  movzbl %cl,%ecx
087a20d6 +0x0386:  mov    (%eax,%ecx,4),%ecx
087a20d9 +0x0389:  and    $0xff000000,%ecx
087a20df +0x038f:  xor    %ecx,%edx
087a20e1 +0x0391:  mov    -0x24(%ebp),%ecx
087a20e4 +0x0394:  movzbl %ch,%ecx
087a20e7 +0x0397:  mov    (%eax,%ecx,4),%ecx
087a20ea +0x039a:  and    $0xff0000,%ecx
087a20f0 +0x03a0:  xor    %ecx,%edx
087a20f2 +0x03a2:  mov    -0x24(%ebp),%ecx
087a20f5 +0x03a5:  shr    $0x18,%ecx
087a20f8 +0x03a8:  movzbl (%eax,%ecx,4),%ecx
087a20fc +0x03ac:  xor    %ecx,%edx
087a20fe +0x03ae:  mov    -0x20(%ebp),%ecx
087a2101 +0x03b1:  mov    %edx,0x70(%edi)
087a2104 +0x03b4:  xor    0x4(%ecx),%edx
087a2107 +0x03b7:  mov    %edx,0x14(%ecx)
087a210a +0x03ba:  xor    0x8(%ecx),%edx
087a210d +0x03bd:  mov    %edx,0x18(%ecx)
087a2110 +0x03c0:  xor    0x6c(%edi),%edx
087a2113 +0x03c3:  mov    %edx,0x1c(%ecx)
087a2116 +0x03c6:  mov    -0x464(%ebx),%ecx
087a211c +0x03cc:  mov    %edx,-0x24(%ebp)
087a211f +0x03cf:  lea    0x80(%edi),%edx
087a2125 +0x03d5:  mov    %edx,-0x20(%ebp)
087a2128 +0x03d8:  mov    0x70(%edi),%edx
087a212b +0x03db:  xor    0x1c(%ecx),%edx
087a212e +0x03de:  movzbl -0x24(%ebp),%ecx
087a2132 +0x03e2:  mov    (%eax,%ecx,4),%ecx
087a2135 +0x03e5:  and    $0xff00,%ecx
087a213b +0x03eb:  xor    %ecx,%edx
087a213d +0x03ed:  mov    -0x24(%ebp),%ecx
087a2140 +0x03f0:  shr    $0x10,%ecx
087a2143 +0x03f3:  movzbl %cl,%ecx
087a2146 +0x03f6:  mov    (%eax,%ecx,4),%ecx
087a2149 +0x03f9:  and    $0xff000000,%ecx
087a214f +0x03ff:  xor    %ecx,%edx
087a2151 +0x0401:  mov    -0x24(%ebp),%ecx
087a2154 +0x0404:  movzbl %ch,%ecx
087a2157 +0x0407:  mov    (%eax,%ecx,4),%ecx
087a215a +0x040a:  and    $0xff0000,%ecx
087a2160 +0x0410:  xor    %ecx,%edx
087a2162 +0x0412:  mov    -0x24(%ebp),%ecx
087a2165 +0x0415:  shr    $0x18,%ecx
087a2168 +0x0418:  movzbl (%eax,%ecx,4),%ecx
087a216c +0x041c:  xor    %ecx,%edx
087a216e +0x041e:  mov    %edx,0x80(%edi)
087a2174 +0x0424:  mov    -0x1c(%ebp),%ecx
087a2177 +0x0427:  xor    0x4(%ecx),%edx
087a217a +0x042a:  mov    %edx,0x14(%ecx)
087a217d +0x042d:  xor    0x8(%ecx),%edx
087a2180 +0x0430:  mov    %edx,0x18(%ecx)
087a2183 +0x0433:  xor    0x7c(%edi),%edx
087a2186 +0x0436:  mov    %edx,0x1c(%ecx)
087a2189 +0x0439:  mov    -0x464(%ebx),%ecx
087a218f +0x043f:  mov    %edx,-0x24(%ebp)
087a2192 +0x0442:  lea    0x90(%edi),%edx
087a2198 +0x0448:  mov    %edx,-0x1c(%ebp)
087a219b +0x044b:  mov    0x80(%edi),%edx
087a21a1 +0x0451:  xor    0x20(%ecx),%edx
087a21a4 +0x0454:  movzbl -0x24(%ebp),%ecx
087a21a8 +0x0458:  mov    (%eax,%ecx,4),%ecx
087a21ab +0x045b:  and    $0xff00,%ecx
087a21b1 +0x0461:  xor    %ecx,%edx
087a21b3 +0x0463:  mov    -0x24(%ebp),%ecx
087a21b6 +0x0466:  shr    $0x10,%ecx
087a21b9 +0x0469:  movzbl %cl,%ecx
087a21bc +0x046c:  mov    (%eax,%ecx,4),%ecx
087a21bf +0x046f:  and    $0xff000000,%ecx
087a21c5 +0x0475:  xor    %ecx,%edx
087a21c7 +0x0477:  mov    -0x24(%ebp),%ecx
087a21ca +0x047a:  movzbl %ch,%ecx
087a21cd +0x047d:  mov    %ecx,-0x28(%ebp)
087a21d0 +0x0480:  mov    (%eax,%ecx,4),%ecx
087a21d3 +0x0483:  and    $0xff0000,%ecx
087a21d9 +0x0489:  xor    %ecx,%edx
087a21db +0x048b:  mov    -0x24(%ebp),%ecx
087a21de +0x048e:  shr    $0x18,%ecx
087a21e1 +0x0491:  movzbl (%eax,%ecx,4),%ecx
087a21e5 +0x0495:  xor    %ecx,%edx
087a21e7 +0x0497:  mov    -0x20(%ebp),%ecx
087a21ea +0x049a:  mov    %edx,0x90(%edi)
087a21f0 +0x04a0:  xor    0x4(%ecx),%edx
087a21f3 +0x04a3:  mov    %edx,0x14(%ecx)
087a21f6 +0x04a6:  xor    0x8(%ecx),%edx
087a21f9 +0x04a9:  mov    %edx,0x18(%ecx)
087a21fc +0x04ac:  xor    0x8c(%edi),%edx
087a2202 +0x04b2:  mov    %edx,0x1c(%ecx)
087a2205 +0x04b5:  mov    -0x464(%ebx),%ecx
087a220b +0x04bb:  mov    %edx,-0x20(%ebp)
087a220e +0x04be:  mov    0x90(%edi),%edx
087a2214 +0x04c4:  xor    0x24(%ecx),%edx
087a2217 +0x04c7:  movzbl -0x20(%ebp),%ecx
087a221b +0x04cb:  mov    (%eax,%ecx,4),%ecx
087a221e +0x04ce:  and    $0xff00,%ecx
087a2224 +0x04d4:  xor    %ecx,%edx
087a2226 +0x04d6:  mov    -0x20(%ebp),%ecx
087a2229 +0x04d9:  shr    $0x10,%ecx
087a222c +0x04dc:  movzbl %cl,%ecx
087a222f +0x04df:  mov    (%eax,%ecx,4),%ecx
087a2232 +0x04e2:  and    $0xff000000,%ecx
087a2238 +0x04e8:  xor    %ecx,%edx
087a223a +0x04ea:  mov    -0x20(%ebp),%ecx
087a223d +0x04ed:  movzbl %ch,%ecx
087a2240 +0x04f0:  mov    %ecx,-0x24(%ebp)
087a2243 +0x04f3:  mov    (%eax,%ecx,4),%ecx
087a2246 +0x04f6:  and    $0xff0000,%ecx
087a224c +0x04fc:  xor    %ecx,%edx
087a224e +0x04fe:  mov    -0x20(%ebp),%ecx
087a2251 +0x0501:  shr    $0x18,%ecx
087a2254 +0x0504:  movzbl (%eax,%ecx,4),%eax
087a2258 +0x0508:  xor    %eax,%edx
087a225a +0x050a:  mov    -0x1c(%ebp),%eax
087a225d +0x050d:  mov    %edx,0x10(%eax)
087a2260 +0x0510:  xor    0x4(%eax),%edx
087a2263 +0x0513:  mov    %edx,0x14(%eax)
087a2266 +0x0516:  xor    0x8(%eax),%edx
087a2269 +0x0519:  mov    %edx,0x18(%eax)
087a226c +0x051c:  xor    0x9c(%edi),%edx
087a2272 +0x0522:  cmpl   $0x1,0x30(%esi)
087a2276 +0x0526:  mov    %edx,0x1c(%eax)
087a2279 +0x0529:  jne    087a1e13 <+0xc3>
087a227f +0x052f:  mov    0x38(%esi),%edx
087a2282 +0x0532:  mov    %edx,-0x20(%ebp)
087a2285 +0x0535:  shl    $0x2,%edx
087a2288 +0x0538:  test   %edx,%edx
087a228a +0x053a:  mov    %edx,-0x1c(%ebp)
087a228d +0x053d:  je     087a22e0 <+0x590>
087a228f +0x053f:  lea    0x3c(%esi,%edx,4),%edx
087a2293 +0x0543:  xor    %eax,%eax
087a2295 +0x0545:  mov    %edi,-0x24(%ebp)
087a2298 +0x0548:  mov    0x3c(%esi,%eax,4),%ecx
087a229c +0x054c:  mov    (%edx),%edi
087a229e +0x054e:  mov    %edi,0x3c(%esi,%eax,4)
087a22a2 +0x0552:  mov    0x4(%edx),%edi
087a22a5 +0x0555:  mov    %ecx,(%edx)
087a22a7 +0x0557:  mov    0x40(%esi,%eax,4),%ecx
087a22ab +0x055b:  mov    %edi,0x40(%esi,%eax,4)
087a22af +0x055f:  mov    0x8(%edx),%edi
087a22b2 +0x0562:  mov    %ecx,0x4(%edx)
087a22b5 +0x0565:  mov    0x44(%esi,%eax,4),%ecx
087a22b9 +0x0569:  mov    %edi,0x44(%esi,%eax,4)
087a22bd +0x056d:  mov    0xc(%edx),%edi
087a22c0 +0x0570:  mov    %ecx,0x8(%edx)
087a22c3 +0x0573:  mov    0x48(%esi,%eax,4),%ecx
087a22c7 +0x0577:  mov    %edi,0x48(%esi,%eax,4)
087a22cb +0x057b:  add    $0x4,%eax
087a22ce +0x057e:  mov    %ecx,0xc(%edx)
087a22d1 +0x0581:  mov    -0x1c(%ebp),%ecx
087a22d4 +0x0584:  sub    $0x10,%edx
087a22d7 +0x0587:  sub    %eax,%ecx
087a22d9 +0x0589:  cmp    %ecx,%eax
087a22db +0x058b:  jb     087a2298 <+0x548>
087a22dd +0x058d:  mov    -0x24(%ebp),%edi
087a22e0 +0x0590:  cmpl   $0x1,-0x20(%ebp)
087a22e4 +0x0594:  jbe    087a1e13 <+0xc3>
087a22ea +0x059a:  mov    -0x178(%ebx),%edx
087a22f0 +0x05a0:  mov    -0x3e4(%ebx),%eax
087a22f6 +0x05a6:  movl   $0x1,-0x2c(%ebp)
087a22fd +0x05ad:  mov    %esi,-0x30(%ebp)
087a2300 +0x05b0:  mov    (%edx),%edx
087a2302 +0x05b2:  mov    (%eax),%eax
087a2304 +0x05b4:  mov    %edx,-0x28(%ebp)
087a2307 +0x05b7:  mov    -0x228(%ebx),%edx
087a230d +0x05bd:  mov    (%edx),%edx
087a230f +0x05bf:  mov    %edx,-0x24(%ebp)
087a2312 +0x05c2:  mov    -0x260(%ebx),%edx
087a2318 +0x05c8:  mov    (%edx),%edx
087a231a +0x05ca:  mov    %edx,-0x20(%ebp)
087a231d +0x05cd:  mov    -0x41c(%ebx),%edx
087a2323 +0x05d3:  mov    (%edx),%edx
087a2325 +0x05d5:  mov    %edx,-0x1c(%ebp)
087a2328 +0x05d8:  add    $0x10,%edi
087a232b +0x05db:  mov    -0x28(%ebp),%ecx
087a232e +0x05de:  mov    (%edi),%edx
087a2330 +0x05e0:  mov    (%edi),%esi
087a2332 +0x05e2:  shr    $0x18,%edx
087a2335 +0x05e5:  movzbl (%eax,%edx,4),%edx
087a2339 +0x05e9:  shr    $0x10,%esi
087a233c +0x05ec:  and    $0xff,%esi
087a2342 +0x05f2:  movzbl (%eax,%esi,4),%esi
087a2346 +0x05f6:  mov    (%ecx,%edx,4),%edx
087a2349 +0x05f9:  mov    -0x24(%ebp),%ecx
087a234c +0x05fc:  xor    (%ecx,%esi,4),%edx
087a234f +0x05ff:  movzbl (%edi),%esi
087a2352 +0x0602:  mov    -0x1c(%ebp),%ecx
087a2355 +0x0605:  movzbl (%eax,%esi,4),%esi
087a2359 +0x0609:  xor    (%ecx,%esi,4),%edx
087a235c +0x060c:  mov    (%edi),%ecx
087a235e +0x060e:  movzbl %ch,%esi
087a2361 +0x0611:  movzbl (%eax,%esi,4),%ecx
087a2365 +0x0615:  mov    -0x20(%ebp),%esi
087a2368 +0x0618:  xor    (%esi,%ecx,4),%edx
087a236b +0x061b:  mov    0x4(%edi),%esi
087a236e +0x061e:  mov    -0x28(%ebp),%ecx
087a2371 +0x0621:  mov    %edx,(%edi)
087a2373 +0x0623:  mov    0x4(%edi),%edx
087a2376 +0x0626:  shr    $0x10,%esi
087a2379 +0x0629:  and    $0xff,%esi
087a237f +0x062f:  shr    $0x18,%edx
087a2382 +0x0632:  movzbl (%eax,%esi,4),%esi
087a2386 +0x0636:  movzbl (%eax,%edx,4),%edx
087a238a +0x063a:  mov    (%ecx,%edx,4),%edx
087a238d +0x063d:  mov    -0x24(%ebp),%ecx
087a2390 +0x0640:  xor    (%ecx,%esi,4),%edx
087a2393 +0x0643:  movzbl 0x4(%edi),%esi
087a2397 +0x0647:  mov    -0x1c(%ebp),%ecx
087a239a +0x064a:  movzbl (%eax,%esi,4),%esi
087a239e +0x064e:  xor    (%ecx,%esi,4),%edx
087a23a1 +0x0651:  mov    0x4(%edi),%ecx
087a23a4 +0x0654:  movzbl %ch,%esi
087a23a7 +0x0657:  movzbl (%eax,%esi,4),%ecx
087a23ab +0x065b:  mov    -0x20(%ebp),%esi
087a23ae +0x065e:  xor    (%esi,%ecx,4),%edx
087a23b1 +0x0661:  mov    %edx,0x4(%edi)
087a23b4 +0x0664:  mov    0x8(%edi),%edx
087a23b7 +0x0667:  mov    0x8(%edi),%esi
087a23ba +0x066a:  mov    -0x28(%ebp),%ecx
087a23bd +0x066d:  shr    $0x18,%edx
087a23c0 +0x0670:  movzbl (%eax,%edx,4),%edx
087a23c4 +0x0674:  shr    $0x10,%esi
087a23c7 +0x0677:  and    $0xff,%esi
087a23cd +0x067d:  movzbl (%eax,%esi,4),%esi
087a23d1 +0x0681:  mov    (%ecx,%edx,4),%edx
087a23d4 +0x0684:  mov    -0x24(%ebp),%ecx
087a23d7 +0x0687:  xor    (%ecx,%esi,4),%edx
087a23da +0x068a:  movzbl 0x8(%edi),%esi
087a23de +0x068e:  mov    -0x1c(%ebp),%ecx
087a23e1 +0x0691:  movzbl (%eax,%esi,4),%esi
087a23e5 +0x0695:  xor    (%ecx,%esi,4),%edx
087a23e8 +0x0698:  mov    0x8(%edi),%ecx
087a23eb +0x069b:  movzbl %ch,%esi
087a23ee +0x069e:  movzbl (%eax,%esi,4),%ecx
087a23f2 +0x06a2:  mov    -0x20(%ebp),%esi
087a23f5 +0x06a5:  xor    (%esi,%ecx,4),%edx
087a23f8 +0x06a8:  mov    0xc(%edi),%esi
087a23fb +0x06ab:  mov    -0x28(%ebp),%ecx
087a23fe +0x06ae:  mov    %edx,0x8(%edi)
087a2401 +0x06b1:  mov    0xc(%edi),%edx
087a2404 +0x06b4:  shr    $0x10,%esi
087a2407 +0x06b7:  and    $0xff,%esi
087a240d +0x06bd:  shr    $0x18,%edx
087a2410 +0x06c0:  movzbl (%eax,%esi,4),%esi
087a2414 +0x06c4:  movzbl (%eax,%edx,4),%edx
087a2418 +0x06c8:  mov    (%ecx,%edx,4),%edx
087a241b +0x06cb:  mov    -0x24(%ebp),%ecx
087a241e +0x06ce:  xor    (%ecx,%esi,4),%edx
087a2421 +0x06d1:  movzbl 0xc(%edi),%esi
087a2425 +0x06d5:  mov    -0x1c(%ebp),%ecx
087a2428 +0x06d8:  movzbl (%eax,%esi,4),%esi
087a242c +0x06dc:  xor    (%ecx,%esi,4),%edx
087a242f +0x06df:  mov    0xc(%edi),%ecx
087a2432 +0x06e2:  movzbl %ch,%esi
087a2435 +0x06e5:  movzbl (%eax,%esi,4),%ecx
087a2439 +0x06e9:  mov    -0x20(%ebp),%esi
087a243c +0x06ec:  xor    (%esi,%ecx,4),%edx
087a243f +0x06ef:  mov    %edx,0xc(%edi)
087a2442 +0x06f2:  mov    -0x30(%ebp),%edx
087a2445 +0x06f5:  addl   $0x1,-0x2c(%ebp)
087a2449 +0x06f9:  mov    -0x2c(%ebp),%ecx
087a244c +0x06fc:  cmp    %ecx,0x38(%edx)
087a244f +0x06ff:  ja     087a2328 <+0x5d8>
087a2455 +0x0705:  add    $0x4c,%esp
087a2458 +0x0708:  pop    %ebx
087a2459 +0x0709:  pop    %esi
087a245a +0x070a:  pop    %edi
087a245b +0x070b:  pop    %ebp
087a245c +0x070c:  ret
087a245d +0x070d:  mov    -0x464(%ebx),%ecx
087a2463 +0x0713:  lea    0x20(%edi),%edx
087a2466 +0x0716:  mov    -0x3e4(%ebx),%eax
087a246c +0x071c:  mov    %edx,-0x1c(%ebp)
087a246f +0x071f:  mov    0x3c(%esi),%edx
087a2472 +0x0722:  xor    (%ecx),%edx
087a2474 +0x0724:  mov    (%eax),%eax
087a2476 +0x0726:  movzbl 0x1c(%edi),%ecx
087a247a +0x072a:  mov    (%eax,%ecx,4),%ecx
087a247d +0x072d:  and    $0xff00,%ecx
087a2483 +0x0733:  xor    %ecx,%edx
087a2485 +0x0735:  mov    0x1c(%edi),%ecx
087a2488 +0x0738:  shr    $0x10,%ecx
087a248b +0x073b:  movzbl %cl,%ecx
087a248e +0x073e:  mov    (%eax,%ecx,4),%ecx
087a2491 +0x0741:  and    $0xff000000,%ecx
087a2497 +0x0747:  xor    %ecx,%edx
087a2499 +0x0749:  mov    0x1c(%edi),%ecx
087a249c +0x074c:  movzbl %ch,%ecx
087a249f +0x074f:  mov    (%eax,%ecx,4),%ecx
087a24a2 +0x0752:  and    $0xff0000,%ecx
087a24a8 +0x0758:  xor    %ecx,%edx
087a24aa +0x075a:  mov    0x1c(%edi),%ecx
087a24ad +0x075d:  shr    $0x18,%ecx
087a24b0 +0x0760:  movzbl (%eax,%ecx,4),%ecx
087a24b4 +0x0764:  xor    %ecx,%edx
087a24b6 +0x0766:  mov    0x4(%edi),%ecx
087a24b9 +0x0769:  mov    %edx,0x20(%edi)
087a24bc +0x076c:  xor    %edx,%ecx
087a24be +0x076e:  mov    %ecx,0x24(%edi)
087a24c1 +0x0771:  xor    0x8(%edi),%ecx
087a24c4 +0x0774:  mov    %ecx,0x28(%edi)
087a24c7 +0x0777:  xor    0xc(%edi),%ecx
087a24ca +0x077a:  mov    %ecx,0x2c(%edi)
087a24cd +0x077d:  mov    %ecx,-0x24(%ebp)
087a24d0 +0x0780:  movzbl -0x24(%ebp),%ecx
087a24d4 +0x0784:  movzbl (%eax,%ecx,4),%ecx
087a24d8 +0x0788:  mov    %ecx,-0x20(%ebp)
087a24db +0x078b:  mov    0x10(%edi),%ecx
087a24de +0x078e:  xor    %ecx,-0x20(%ebp)
087a24e1 +0x0791:  mov    -0x24(%ebp),%ecx
087a24e4 +0x0794:  shr    $0x18,%ecx
087a24e7 +0x0797:  mov    (%eax,%ecx,4),%ecx
087a24ea +0x079a:  and    $0xff000000,%ecx
087a24f0 +0x07a0:  xor    %ecx,-0x20(%ebp)
087a24f3 +0x07a3:  mov    -0x24(%ebp),%ecx
087a24f6 +0x07a6:  shr    $0x10,%ecx
087a24f9 +0x07a9:  movzbl %cl,%ecx
087a24fc +0x07ac:  mov    (%eax,%ecx,4),%ecx
087a24ff +0x07af:  and    $0xff0000,%ecx
087a2505 +0x07b5:  xor    %ecx,-0x20(%ebp)
087a2508 +0x07b8:  mov    -0x24(%ebp),%ecx
087a250b +0x07bb:  movzbl %ch,%ecx
087a250e +0x07be:  mov    (%eax,%ecx,4),%ecx
087a2511 +0x07c1:  and    $0xff00,%ecx
087a2517 +0x07c7:  xor    %ecx,-0x20(%ebp)
087a251a +0x07ca:  mov    -0x20(%ebp),%ecx
087a251d +0x07cd:  mov    %ecx,0x30(%edi)
087a2520 +0x07d0:  xor    0x14(%edi),%ecx
087a2523 +0x07d3:  mov    %ecx,0x34(%edi)
087a2526 +0x07d6:  xor    0x18(%edi),%ecx
087a2529 +0x07d9:  mov    %ecx,0x38(%edi)
087a252c +0x07dc:  xor    0x1c(%edi),%ecx
087a252f +0x07df:  mov    %ecx,0x3c(%edi)
087a2532 +0x07e2:  mov    %ecx,-0x24(%ebp)
087a2535 +0x07e5:  lea    0x40(%edi),%ecx
087a2538 +0x07e8:  mov    %ecx,-0x20(%ebp)
087a253b +0x07eb:  mov    -0x464(%ebx),%ecx
087a2541 +0x07f1:  xor    0x4(%ecx),%edx
087a2544 +0x07f4:  movzbl -0x24(%ebp),%ecx
087a2548 +0x07f8:  mov    (%eax,%ecx,4),%ecx
087a254b +0x07fb:  and    $0xff00,%ecx
087a2551 +0x0801:  xor    %ecx,%edx
087a2553 +0x0803:  mov    -0x24(%ebp),%ecx
087a2556 +0x0806:  shr    $0x10,%ecx
087a2559 +0x0809:  movzbl %cl,%ecx
087a255c +0x080c:  mov    (%eax,%ecx,4),%ecx
087a255f +0x080f:  and    $0xff000000,%ecx
087a2565 +0x0815:  xor    %ecx,%edx
087a2567 +0x0817:  mov    -0x24(%ebp),%ecx
087a256a +0x081a:  movzbl %ch,%ecx
087a256d +0x081d:  mov    (%eax,%ecx,4),%ecx
087a2570 +0x0820:  and    $0xff0000,%ecx
087a2576 +0x0826:  xor    %ecx,%edx
087a2578 +0x0828:  mov    -0x24(%ebp),%ecx
087a257b +0x082b:  shr    $0x18,%ecx
087a257e +0x082e:  movzbl (%eax,%ecx,4),%ecx
087a2582 +0x0832:  xor    %ecx,%edx
087a2584 +0x0834:  mov    -0x1c(%ebp),%ecx
087a2587 +0x0837:  mov    %edx,0x40(%edi)
087a258a +0x083a:  xor    0x4(%ecx),%edx
087a258d +0x083d:  mov    %edx,0x24(%ecx)
087a2590 +0x0840:  xor    0x8(%ecx),%edx
087a2593 +0x0843:  mov    %edx,0x28(%ecx)
087a2596 +0x0846:  xor    0xc(%ecx),%edx
087a2599 +0x0849:  mov    %edx,-0x24(%ebp)
087a259c +0x084c:  mov    %edx,0x2c(%ecx)
087a259f +0x084f:  movzbl -0x24(%ebp),%edx
087a25a3 +0x0853:  movzbl (%eax,%edx,4),%edx
087a25a7 +0x0857:  xor    0x10(%ecx),%edx
087a25aa +0x085a:  mov    -0x24(%ebp),%ecx
087a25ad +0x085d:  shr    $0x18,%ecx
087a25b0 +0x0860:  mov    (%eax,%ecx,4),%ecx
087a25b3 +0x0863:  and    $0xff000000,%ecx
087a25b9 +0x0869:  xor    %ecx,%edx
087a25bb +0x086b:  mov    -0x24(%ebp),%ecx
087a25be +0x086e:  shr    $0x10,%ecx
087a25c1 +0x0871:  movzbl %cl,%ecx
087a25c4 +0x0874:  mov    (%eax,%ecx,4),%ecx
087a25c7 +0x0877:  and    $0xff0000,%ecx
087a25cd +0x087d:  xor    %ecx,%edx
087a25cf +0x087f:  mov    -0x24(%ebp),%ecx
087a25d2 +0x0882:  movzbl %ch,%ecx
087a25d5 +0x0885:  mov    (%eax,%ecx,4),%ecx
087a25d8 +0x0888:  and    $0xff00,%ecx
087a25de +0x088e:  xor    %ecx,%edx
087a25e0 +0x0890:  mov    -0x1c(%ebp),%ecx
087a25e3 +0x0893:  mov    %edx,0x30(%ecx)
087a25e6 +0x0896:  xor    0x14(%ecx),%edx
087a25e9 +0x0899:  mov    %edx,0x34(%ecx)
087a25ec +0x089c:  xor    0x18(%ecx),%edx
087a25ef +0x089f:  mov    %edx,0x38(%ecx)
087a25f2 +0x08a2:  xor    0x3c(%edi),%edx
087a25f5 +0x08a5:  mov    %edx,0x3c(%ecx)
087a25f8 +0x08a8:  mov    -0x464(%ebx),%ecx
087a25fe +0x08ae:  mov    %edx,-0x24(%ebp)
087a2601 +0x08b1:  lea    0x60(%edi),%edx
087a2604 +0x08b4:  mov    %edx,-0x1c(%ebp)
087a2607 +0x08b7:  mov    0x40(%edi),%edx
087a260a +0x08ba:  xor    0x8(%ecx),%edx
087a260d +0x08bd:  movzbl -0x24(%ebp),%ecx
087a2611 +0x08c1:  mov    (%eax,%ecx,4),%ecx
087a2614 +0x08c4:  and    $0xff00,%ecx
087a261a +0x08ca:  xor    %ecx,%edx
087a261c +0x08cc:  mov    -0x24(%ebp),%ecx
087a261f +0x08cf:  shr    $0x10,%ecx
087a2622 +0x08d2:  movzbl %cl,%ecx
087a2625 +0x08d5:  mov    (%eax,%ecx,4),%ecx
087a2628 +0x08d8:  and    $0xff000000,%ecx
087a262e +0x08de:  xor    %ecx,%edx
087a2630 +0x08e0:  mov    -0x24(%ebp),%ecx
087a2633 +0x08e3:  movzbl %ch,%ecx
087a2636 +0x08e6:  mov    (%eax,%ecx,4),%ecx
087a2639 +0x08e9:  and    $0xff0000,%ecx
087a263f +0x08ef:  xor    %ecx,%edx
087a2641 +0x08f1:  mov    -0x24(%ebp),%ecx
087a2644 +0x08f4:  shr    $0x18,%ecx
087a2647 +0x08f7:  movzbl (%eax,%ecx,4),%ecx
087a264b +0x08fb:  xor    %ecx,%edx
087a264d +0x08fd:  mov    -0x20(%ebp),%ecx
087a2650 +0x0900:  mov    %edx,0x60(%edi)
087a2653 +0x0903:  xor    0x4(%ecx),%edx
087a2656 +0x0906:  mov    %edx,0x24(%ecx)
087a2659 +0x0909:  xor    0x8(%ecx),%edx
087a265c +0x090c:  mov    %edx,0x28(%ecx)
087a265f +0x090f:  xor    0xc(%ecx),%edx
087a2662 +0x0912:  mov    %edx,0x2c(%ecx)
087a2665 +0x0915:  mov    %edx,-0x24(%ebp)
087a2668 +0x0918:  movzbl -0x24(%ebp),%edx
087a266c +0x091c:  movzbl (%eax,%edx,4),%edx
087a2670 +0x0920:  xor    0x10(%ecx),%edx
087a2673 +0x0923:  mov    -0x24(%ebp),%ecx
087a2676 +0x0926:  shr    $0x18,%ecx
087a2679 +0x0929:  mov    (%eax,%ecx,4),%ecx
087a267c +0x092c:  and    $0xff000000,%ecx
087a2682 +0x0932:  xor    %ecx,%edx
087a2684 +0x0934:  mov    -0x24(%ebp),%ecx
087a2687 +0x0937:  shr    $0x10,%ecx
087a268a +0x093a:  movzbl %cl,%ecx
087a268d +0x093d:  mov    (%eax,%ecx,4),%ecx
087a2690 +0x0940:  and    $0xff0000,%ecx
087a2696 +0x0946:  xor    %ecx,%edx
087a2698 +0x0948:  mov    -0x24(%ebp),%ecx
087a269b +0x094b:  movzbl %ch,%ecx
087a269e +0x094e:  mov    (%eax,%ecx,4),%ecx
087a26a1 +0x0951:  and    $0xff00,%ecx
087a26a7 +0x0957:  xor    %ecx,%edx
087a26a9 +0x0959:  mov    -0x20(%ebp),%ecx
087a26ac +0x095c:  mov    %edx,0x30(%ecx)
087a26af +0x095f:  xor    0x14(%ecx),%edx
087a26b2 +0x0962:  mov    %edx,0x34(%ecx)
087a26b5 +0x0965:  xor    0x18(%ecx),%edx
087a26b8 +0x0968:  mov    %edx,0x38(%ecx)
087a26bb +0x096b:  xor    0x5c(%edi),%edx
087a26be +0x096e:  mov    %edx,0x3c(%ecx)
087a26c1 +0x0971:  mov    -0x464(%ebx),%ecx
087a26c7 +0x0977:  mov    %edx,-0x24(%ebp)
087a26ca +0x097a:  lea    0x80(%edi),%edx
087a26d0 +0x0980:  mov    %edx,-0x20(%ebp)
087a26d3 +0x0983:  mov    0x60(%edi),%edx
087a26d6 +0x0986:  xor    0xc(%ecx),%edx
087a26d9 +0x0989:  movzbl -0x24(%ebp),%ecx
087a26dd +0x098d:  mov    (%eax,%ecx,4),%ecx
087a26e0 +0x0990:  and    $0xff00,%ecx
087a26e6 +0x0996:  xor    %ecx,%edx
087a26e8 +0x0998:  mov    -0x24(%ebp),%ecx
087a26eb +0x099b:  shr    $0x10,%ecx
087a26ee +0x099e:  movzbl %cl,%ecx
087a26f1 +0x09a1:  mov    (%eax,%ecx,4),%ecx
087a26f4 +0x09a4:  and    $0xff000000,%ecx
087a26fa +0x09aa:  xor    %ecx,%edx
087a26fc +0x09ac:  mov    -0x24(%ebp),%ecx
087a26ff +0x09af:  movzbl %ch,%ecx
087a2702 +0x09b2:  mov    (%eax,%ecx,4),%ecx
087a2705 +0x09b5:  and    $0xff0000,%ecx
087a270b +0x09bb:  xor    %ecx,%edx
087a270d +0x09bd:  mov    -0x24(%ebp),%ecx
087a2710 +0x09c0:  shr    $0x18,%ecx
087a2713 +0x09c3:  movzbl (%eax,%ecx,4),%ecx
087a2717 +0x09c7:  xor    %ecx,%edx
087a2719 +0x09c9:  mov    %edx,0x80(%edi)
087a271f +0x09cf:  mov    -0x1c(%ebp),%ecx
087a2722 +0x09d2:  xor    0x4(%ecx),%edx
087a2725 +0x09d5:  mov    %edx,0x24(%ecx)
087a2728 +0x09d8:  xor    0x8(%ecx),%edx
087a272b +0x09db:  mov    %edx,0x28(%ecx)
087a272e +0x09de:  xor    0xc(%ecx),%edx
087a2731 +0x09e1:  mov    %edx,0x2c(%ecx)
087a2734 +0x09e4:  mov    %edx,-0x24(%ebp)
087a2737 +0x09e7:  movzbl -0x24(%ebp),%edx
087a273b +0x09eb:  movzbl (%eax,%edx,4),%edx
087a273f +0x09ef:  xor    0x10(%ecx),%edx
087a2742 +0x09f2:  mov    -0x24(%ebp),%ecx
087a2745 +0x09f5:  shr    $0x18,%ecx
087a2748 +0x09f8:  mov    (%eax,%ecx,4),%ecx
087a274b +0x09fb:  and    $0xff000000,%ecx
087a2751 +0x0a01:  xor    %ecx,%edx
087a2753 +0x0a03:  mov    -0x24(%ebp),%ecx
087a2756 +0x0a06:  shr    $0x10,%ecx
087a2759 +0x0a09:  movzbl %cl,%ecx
087a275c +0x0a0c:  mov    (%eax,%ecx,4),%ecx
087a275f +0x0a0f:  and    $0xff0000,%ecx
087a2765 +0x0a15:  xor    %ecx,%edx
087a2767 +0x0a17:  mov    -0x24(%ebp),%ecx
087a276a +0x0a1a:  movzbl %ch,%ecx
087a276d +0x0a1d:  mov    (%eax,%ecx,4),%ecx
087a2770 +0x0a20:  and    $0xff00,%ecx
087a2776 +0x0a26:  xor    %ecx,%edx
087a2778 +0x0a28:  mov    -0x1c(%ebp),%ecx
087a277b +0x0a2b:  mov    %edx,0x30(%ecx)
087a277e +0x0a2e:  xor    0x14(%ecx),%edx
087a2781 +0x0a31:  mov    %edx,0x34(%ecx)
087a2784 +0x0a34:  xor    0x18(%ecx),%edx
087a2787 +0x0a37:  mov    %edx,0x38(%ecx)
087a278a +0x0a3a:  xor    0x7c(%edi),%edx
087a278d +0x0a3d:  mov    %edx,0x3c(%ecx)
087a2790 +0x0a40:  mov    -0x464(%ebx),%ecx
087a2796 +0x0a46:  mov    %edx,-0x24(%ebp)
087a2799 +0x0a49:  lea    0xa0(%edi),%edx
087a279f +0x0a4f:  mov    %edx,-0x1c(%ebp)
087a27a2 +0x0a52:  mov    0x80(%edi),%edx
087a27a8 +0x0a58:  xor    0x10(%ecx),%edx
087a27ab +0x0a5b:  movzbl -0x24(%ebp),%ecx
087a27af +0x0a5f:  mov    (%eax,%ecx,4),%ecx
087a27b2 +0x0a62:  and    $0xff00,%ecx
087a27b8 +0x0a68:  xor    %ecx,%edx
087a27ba +0x0a6a:  mov    -0x24(%ebp),%ecx
087a27bd +0x0a6d:  shr    $0x10,%ecx
087a27c0 +0x0a70:  movzbl %cl,%ecx
087a27c3 +0x0a73:  mov    (%eax,%ecx,4),%ecx
087a27c6 +0x0a76:  and    $0xff000000,%ecx
087a27cc +0x0a7c:  xor    %ecx,%edx
087a27ce +0x0a7e:  mov    -0x24(%ebp),%ecx
087a27d1 +0x0a81:  movzbl %ch,%ecx
087a27d4 +0x0a84:  mov    (%eax,%ecx,4),%ecx
087a27d7 +0x0a87:  and    $0xff0000,%ecx
087a27dd +0x0a8d:  xor    %ecx,%edx
087a27df +0x0a8f:  mov    -0x24(%ebp),%ecx
087a27e2 +0x0a92:  shr    $0x18,%ecx
087a27e5 +0x0a95:  movzbl (%eax,%ecx,4),%ecx
087a27e9 +0x0a99:  xor    %ecx,%edx
087a27eb +0x0a9b:  mov    %edx,0xa0(%edi)
087a27f1 +0x0aa1:  mov    -0x20(%ebp),%ecx
087a27f4 +0x0aa4:  xor    0x4(%ecx),%edx
087a27f7 +0x0aa7:  mov    %edx,0x24(%ecx)
087a27fa +0x0aaa:  xor    0x8(%ecx),%edx
087a27fd +0x0aad:  mov    %edx,0x28(%ecx)
087a2800 +0x0ab0:  xor    0xc(%ecx),%edx
087a2803 +0x0ab3:  mov    %edx,0x2c(%ecx)
087a2806 +0x0ab6:  mov    %edx,-0x24(%ebp)
087a2809 +0x0ab9:  movzbl -0x24(%ebp),%edx
087a280d +0x0abd:  movzbl (%eax,%edx,4),%edx
087a2811 +0x0ac1:  xor    0x10(%ecx),%edx
087a2814 +0x0ac4:  mov    -0x24(%ebp),%ecx
087a2817 +0x0ac7:  shr    $0x18,%ecx
087a281a +0x0aca:  mov    (%eax,%ecx,4),%ecx
087a281d +0x0acd:  and    $0xff000000,%ecx
087a2823 +0x0ad3:  xor    %ecx,%edx
087a2825 +0x0ad5:  mov    -0x24(%ebp),%ecx
087a2828 +0x0ad8:  shr    $0x10,%ecx
087a282b +0x0adb:  movzbl %cl,%ecx
087a282e +0x0ade:  mov    (%eax,%ecx,4),%ecx
087a2831 +0x0ae1:  and    $0xff0000,%ecx
087a2837 +0x0ae7:  xor    %ecx,%edx
087a2839 +0x0ae9:  mov    -0x24(%ebp),%ecx
087a283c +0x0aec:  movzbl %ch,%ecx
087a283f +0x0aef:  mov    (%eax,%ecx,4),%ecx
087a2842 +0x0af2:  and    $0xff00,%ecx
087a2848 +0x0af8:  xor    %ecx,%edx
087a284a +0x0afa:  mov    -0x20(%ebp),%ecx
087a284d +0x0afd:  mov    %edx,0x30(%ecx)
087a2850 +0x0b00:  xor    0x14(%ecx),%edx
087a2853 +0x0b03:  mov    %edx,0x34(%ecx)
087a2856 +0x0b06:  xor    0x18(%ecx),%edx
087a2859 +0x0b09:  mov    %edx,0x38(%ecx)
087a285c +0x0b0c:  xor    0x9c(%edi),%edx
087a2862 +0x0b12:  mov    %edx,0x3c(%ecx)
087a2865 +0x0b15:  mov    -0x464(%ebx),%ecx
087a286b +0x0b1b:  mov    %edx,-0x24(%ebp)
087a286e +0x0b1e:  lea    0xc0(%edi),%edx
087a2874 +0x0b24:  mov    %edx,-0x20(%ebp)
087a2877 +0x0b27:  mov    0xa0(%edi),%edx
087a287d +0x0b2d:  xor    0x14(%ecx),%edx
087a2880 +0x0b30:  movzbl -0x24(%ebp),%ecx
087a2884 +0x0b34:  mov    (%eax,%ecx,4),%ecx
087a2887 +0x0b37:  and    $0xff00,%ecx
087a288d +0x0b3d:  xor    %ecx,%edx
087a288f +0x0b3f:  mov    -0x24(%ebp),%ecx
087a2892 +0x0b42:  shr    $0x10,%ecx
087a2895 +0x0b45:  movzbl %cl,%ecx
087a2898 +0x0b48:  mov    (%eax,%ecx,4),%ecx
087a289b +0x0b4b:  and    $0xff000000,%ecx
087a28a1 +0x0b51:  xor    %ecx,%edx
087a28a3 +0x0b53:  mov    -0x24(%ebp),%ecx
087a28a6 +0x0b56:  movzbl %ch,%ecx
087a28a9 +0x0b59:  mov    %ecx,-0x28(%ebp)
087a28ac +0x0b5c:  mov    (%eax,%ecx,4),%ecx
087a28af +0x0b5f:  and    $0xff0000,%ecx
087a28b5 +0x0b65:  xor    %ecx,%edx
087a28b7 +0x0b67:  mov    -0x24(%ebp),%ecx
087a28ba +0x0b6a:  shr    $0x18,%ecx
087a28bd +0x0b6d:  movzbl (%eax,%ecx,4),%ecx
087a28c1 +0x0b71:  xor    %ecx,%edx
087a28c3 +0x0b73:  mov    -0x1c(%ebp),%ecx
087a28c6 +0x0b76:  mov    %edx,0xc0(%edi)
087a28cc +0x0b7c:  xor    0x4(%ecx),%edx
087a28cf +0x0b7f:  mov    %edx,0x24(%ecx)
087a28d2 +0x0b82:  xor    0x8(%ecx),%edx
087a28d5 +0x0b85:  mov    %edx,0x28(%ecx)
087a28d8 +0x0b88:  xor    0xc(%ecx),%edx
087a28db +0x0b8b:  mov    %edx,0x2c(%ecx)
087a28de +0x0b8e:  mov    %edx,-0x24(%ebp)
087a28e1 +0x0b91:  movzbl -0x24(%ebp),%edx
087a28e5 +0x0b95:  movzbl (%eax,%edx,4),%edx
087a28e9 +0x0b99:  xor    0x10(%ecx),%edx
087a28ec +0x0b9c:  mov    -0x24(%ebp),%ecx
087a28ef +0x0b9f:  shr    $0x18,%ecx
087a28f2 +0x0ba2:  mov    (%eax,%ecx,4),%ecx
087a28f5 +0x0ba5:  and    $0xff000000,%ecx
087a28fb +0x0bab:  xor    %ecx,%edx
087a28fd +0x0bad:  mov    -0x24(%ebp),%ecx
087a2900 +0x0bb0:  shr    $0x10,%ecx
087a2903 +0x0bb3:  movzbl %cl,%ecx
087a2906 +0x0bb6:  mov    (%eax,%ecx,4),%ecx
087a2909 +0x0bb9:  and    $0xff0000,%ecx
087a290f +0x0bbf:  xor    %ecx,%edx
087a2911 +0x0bc1:  mov    -0x24(%ebp),%ecx
087a2914 +0x0bc4:  movzbl %ch,%ecx
087a2917 +0x0bc7:  mov    (%eax,%ecx,4),%ecx
087a291a +0x0bca:  and    $0xff00,%ecx
087a2920 +0x0bd0:  xor    %ecx,%edx
087a2922 +0x0bd2:  mov    -0x1c(%ebp),%ecx
087a2925 +0x0bd5:  mov    %edx,0x30(%ecx)
087a2928 +0x0bd8:  xor    0x14(%ecx),%edx
087a292b +0x0bdb:  mov    %edx,0x34(%ecx)
087a292e +0x0bde:  xor    0x18(%ecx),%edx
087a2931 +0x0be1:  mov    %edx,0x38(%ecx)
087a2934 +0x0be4:  xor    0xbc(%edi),%edx
087a293a +0x0bea:  mov    %edx,0x3c(%ecx)
087a293d +0x0bed:  mov    -0x464(%ebx),%ecx
087a2943 +0x0bf3:  mov    %edx,-0x1c(%ebp)
087a2946 +0x0bf6:  mov    0xc0(%edi),%edx
087a294c +0x0bfc:  xor    0x18(%ecx),%edx
087a294f +0x0bff:  movzbl -0x1c(%ebp),%ecx
087a2953 +0x0c03:  mov    (%eax,%ecx,4),%ecx
087a2956 +0x0c06:  and    $0xff00,%ecx
087a295c +0x0c0c:  xor    %ecx,%edx
087a295e +0x0c0e:  mov    -0x1c(%ebp),%ecx
087a2961 +0x0c11:  shr    $0x10,%ecx
087a2964 +0x0c14:  movzbl %cl,%ecx
087a2967 +0x0c17:  mov    (%eax,%ecx,4),%ecx
087a296a +0x0c1a:  and    $0xff000000,%ecx
087a2970 +0x0c20:  xor    %ecx,%edx
087a2972 +0x0c22:  mov    -0x1c(%ebp),%ecx
087a2975 +0x0c25:  movzbl %ch,%ecx
087a2978 +0x0c28:  mov    %ecx,-0x24(%ebp)
087a297b +0x0c2b:  mov    (%eax,%ecx,4),%ecx
087a297e +0x0c2e:  and    $0xff0000,%ecx
087a2984 +0x0c34:  xor    %ecx,%edx
087a2986 +0x0c36:  mov    -0x1c(%ebp),%ecx
087a2989 +0x0c39:  shr    $0x18,%ecx
087a298c +0x0c3c:  movzbl (%eax,%ecx,4),%eax
087a2990 +0x0c40:  xor    %eax,%edx
087a2992 +0x0c42:  mov    -0x20(%ebp),%eax
087a2995 +0x0c45:  mov    %edx,0x20(%eax)
087a2998 +0x0c48:  xor    0x4(%eax),%edx
087a299b +0x0c4b:  mov    %edx,0x24(%eax)
087a299e +0x0c4e:  xor    0x8(%eax),%edx
087a29a1 +0x0c51:  mov    %edx,0x28(%eax)
087a29a4 +0x0c54:  xor    0xc(%eax),%edx
087a29a7 +0x0c57:  mov    %edx,0x2c(%eax)
087a29aa +0x0c5a:  jmp    087a1e09 <+0xb9>
087a29af +0x0c5f:  mov    -0x464(%ebx),%ecx
087a29b5 +0x0c65:  lea    0x18(%edi),%edx
087a29b8 +0x0c68:  mov    -0x3e4(%ebx),%eax
087a29be +0x0c6e:  mov    %edx,-0x20(%ebp)
087a29c1 +0x0c71:  mov    0x3c(%esi),%edx
087a29c4 +0x0c74:  xor    (%ecx),%edx
087a29c6 +0x0c76:  mov    (%eax),%eax
087a29c8 +0x0c78:  movzbl 0x14(%edi),%ecx
087a29cc +0x0c7c:  mov    (%eax,%ecx,4),%ecx
087a29cf +0x0c7f:  and    $0xff00,%ecx
087a29d5 +0x0c85:  xor    %ecx,%edx
087a29d7 +0x0c87:  mov    0x14(%edi),%ecx
087a29da +0x0c8a:  shr    $0x10,%ecx
087a29dd +0x0c8d:  movzbl %cl,%ecx
087a29e0 +0x0c90:  mov    (%eax,%ecx,4),%ecx
087a29e3 +0x0c93:  and    $0xff000000,%ecx
087a29e9 +0x0c99:  xor    %ecx,%edx
087a29eb +0x0c9b:  mov    0x14(%edi),%ecx
087a29ee +0x0c9e:  movzbl %ch,%ecx
087a29f1 +0x0ca1:  mov    (%eax,%ecx,4),%ecx
087a29f4 +0x0ca4:  and    $0xff0000,%ecx
087a29fa +0x0caa:  xor    %ecx,%edx
087a29fc +0x0cac:  mov    0x14(%edi),%ecx
087a29ff +0x0caf:  shr    $0x18,%ecx
087a2a02 +0x0cb2:  movzbl (%eax,%ecx,4),%ecx
087a2a06 +0x0cb6:  xor    %ecx,%edx
087a2a08 +0x0cb8:  mov    0x4(%edi),%ecx
087a2a0b +0x0cbb:  mov    %edx,0x18(%edi)
087a2a0e +0x0cbe:  xor    %edx,%ecx
087a2a10 +0x0cc0:  mov    %ecx,0x1c(%edi)
087a2a13 +0x0cc3:  xor    0x8(%edi),%ecx
087a2a16 +0x0cc6:  mov    %ecx,0x20(%edi)
087a2a19 +0x0cc9:  xor    0xc(%edi),%ecx
087a2a1c +0x0ccc:  mov    %ecx,0x24(%edi)
087a2a1f +0x0ccf:  xor    0x10(%edi),%ecx
087a2a22 +0x0cd2:  mov    %ecx,0x28(%edi)
087a2a25 +0x0cd5:  xor    0x14(%edi),%ecx
087a2a28 +0x0cd8:  mov    %ecx,0x2c(%edi)
087a2a2b +0x0cdb:  mov    %ecx,-0x24(%ebp)
087a2a2e +0x0cde:  lea    0x30(%edi),%ecx
087a2a31 +0x0ce1:  mov    %ecx,-0x1c(%ebp)
087a2a34 +0x0ce4:  mov    -0x464(%ebx),%ecx
087a2a3a +0x0cea:  xor    0x4(%ecx),%edx
087a2a3d +0x0ced:  movzbl -0x24(%ebp),%ecx
087a2a41 +0x0cf1:  mov    (%eax,%ecx,4),%ecx
087a2a44 +0x0cf4:  and    $0xff00,%ecx
087a2a4a +0x0cfa:  xor    %ecx,%edx
087a2a4c +0x0cfc:  mov    -0x24(%ebp),%ecx
087a2a4f +0x0cff:  shr    $0x10,%ecx
087a2a52 +0x0d02:  movzbl %cl,%ecx
087a2a55 +0x0d05:  mov    (%eax,%ecx,4),%ecx
087a2a58 +0x0d08:  and    $0xff000000,%ecx
087a2a5e +0x0d0e:  xor    %ecx,%edx
087a2a60 +0x0d10:  mov    -0x24(%ebp),%ecx
087a2a63 +0x0d13:  movzbl %ch,%ecx
087a2a66 +0x0d16:  mov    (%eax,%ecx,4),%ecx
087a2a69 +0x0d19:  and    $0xff0000,%ecx
087a2a6f +0x0d1f:  xor    %ecx,%edx
087a2a71 +0x0d21:  mov    -0x24(%ebp),%ecx
087a2a74 +0x0d24:  shr    $0x18,%ecx
087a2a77 +0x0d27:  movzbl (%eax,%ecx,4),%ecx
087a2a7b +0x0d2b:  xor    %ecx,%edx
087a2a7d +0x0d2d:  mov    %edx,0x30(%edi)
087a2a80 +0x0d30:  mov    -0x20(%ebp),%ecx
087a2a83 +0x0d33:  xor    0x4(%ecx),%edx
087a2a86 +0x0d36:  mov    %edx,0x1c(%ecx)
087a2a89 +0x0d39:  mov    %edx,%ecx
087a2a8b +0x0d3b:  mov    -0x20(%ebp),%edx
087a2a8e +0x0d3e:  xor    0x8(%edx),%ecx
087a2a91 +0x0d41:  mov    %ecx,0x20(%edx)
087a2a94 +0x0d44:  xor    0xc(%edx),%ecx
087a2a97 +0x0d47:  mov    %ecx,0x24(%edx)
087a2a9a +0x0d4a:  xor    0x10(%edx),%ecx
087a2a9d +0x0d4d:  mov    %ecx,0x28(%edx)
087a2aa0 +0x0d50:  xor    0x2c(%edi),%ecx
087a2aa3 +0x0d53:  mov    %ecx,0x2c(%edx)
087a2aa6 +0x0d56:  mov    0x30(%edi),%edx
087a2aa9 +0x0d59:  mov    %ecx,-0x24(%ebp)
087a2aac +0x0d5c:  lea    0x48(%edi),%ecx
087a2aaf +0x0d5f:  mov    %ecx,-0x20(%ebp)
087a2ab2 +0x0d62:  mov    -0x464(%ebx),%ecx
087a2ab8 +0x0d68:  xor    0x8(%ecx),%edx
087a2abb +0x0d6b:  movzbl -0x24(%ebp),%ecx
087a2abf +0x0d6f:  mov    (%eax,%ecx,4),%ecx
087a2ac2 +0x0d72:  and    $0xff00,%ecx
087a2ac8 +0x0d78:  xor    %ecx,%edx
087a2aca +0x0d7a:  mov    -0x24(%ebp),%ecx
087a2acd +0x0d7d:  shr    $0x10,%ecx
087a2ad0 +0x0d80:  movzbl %cl,%ecx
087a2ad3 +0x0d83:  mov    (%eax,%ecx,4),%ecx
087a2ad6 +0x0d86:  and    $0xff000000,%ecx
087a2adc +0x0d8c:  xor    %ecx,%edx
087a2ade +0x0d8e:  mov    -0x24(%ebp),%ecx
087a2ae1 +0x0d91:  movzbl %ch,%ecx
087a2ae4 +0x0d94:  mov    (%eax,%ecx,4),%ecx
087a2ae7 +0x0d97:  and    $0xff0000,%ecx
087a2aed +0x0d9d:  xor    %ecx,%edx
087a2aef +0x0d9f:  mov    -0x24(%ebp),%ecx
087a2af2 +0x0da2:  shr    $0x18,%ecx
087a2af5 +0x0da5:  movzbl (%eax,%ecx,4),%ecx
087a2af9 +0x0da9:  xor    %ecx,%edx
087a2afb +0x0dab:  mov    -0x1c(%ebp),%ecx
087a2afe +0x0dae:  mov    %edx,0x48(%edi)
087a2b01 +0x0db1:  xor    0x4(%ecx),%edx
087a2b04 +0x0db4:  mov    %edx,0x1c(%ecx)
087a2b07 +0x0db7:  mov    %edx,%ecx
087a2b09 +0x0db9:  mov    -0x1c(%ebp),%edx
087a2b0c +0x0dbc:  xor    0x8(%edx),%ecx
087a2b0f +0x0dbf:  mov    %ecx,0x20(%edx)
087a2b12 +0x0dc2:  xor    0xc(%edx),%ecx
087a2b15 +0x0dc5:  mov    %ecx,0x24(%edx)
087a2b18 +0x0dc8:  xor    0x10(%edx),%ecx
087a2b1b +0x0dcb:  mov    %ecx,0x28(%edx)
087a2b1e +0x0dce:  xor    0x44(%edi),%ecx
087a2b21 +0x0dd1:  mov    %ecx,0x2c(%edx)
087a2b24 +0x0dd4:  mov    0x48(%edi),%edx
087a2b27 +0x0dd7:  mov    %ecx,-0x24(%ebp)
087a2b2a +0x0dda:  lea    0x60(%edi),%ecx
087a2b2d +0x0ddd:  mov    %ecx,-0x1c(%ebp)
087a2b30 +0x0de0:  mov    -0x464(%ebx),%ecx
087a2b36 +0x0de6:  xor    0xc(%ecx),%edx
087a2b39 +0x0de9:  movzbl -0x24(%ebp),%ecx
087a2b3d +0x0ded:  mov    (%eax,%ecx,4),%ecx
087a2b40 +0x0df0:  and    $0xff00,%ecx
087a2b46 +0x0df6:  xor    %ecx,%edx
087a2b48 +0x0df8:  mov    -0x24(%ebp),%ecx
087a2b4b +0x0dfb:  shr    $0x10,%ecx
087a2b4e +0x0dfe:  movzbl %cl,%ecx
087a2b51 +0x0e01:  mov    (%eax,%ecx,4),%ecx
087a2b54 +0x0e04:  and    $0xff000000,%ecx
087a2b5a +0x0e0a:  xor    %ecx,%edx
087a2b5c +0x0e0c:  mov    -0x24(%ebp),%ecx
087a2b5f +0x0e0f:  movzbl %ch,%ecx
087a2b62 +0x0e12:  mov    (%eax,%ecx,4),%ecx
087a2b65 +0x0e15:  and    $0xff0000,%ecx
087a2b6b +0x0e1b:  xor    %ecx,%edx
087a2b6d +0x0e1d:  mov    -0x24(%ebp),%ecx
087a2b70 +0x0e20:  shr    $0x18,%ecx
087a2b73 +0x0e23:  movzbl (%eax,%ecx,4),%ecx
087a2b77 +0x0e27:  xor    %ecx,%edx
087a2b79 +0x0e29:  mov    -0x20(%ebp),%ecx
087a2b7c +0x0e2c:  mov    %edx,0x60(%edi)
087a2b7f +0x0e2f:  xor    0x4(%ecx),%edx
087a2b82 +0x0e32:  mov    %edx,0x1c(%ecx)
087a2b85 +0x0e35:  mov    %edx,%ecx
087a2b87 +0x0e37:  mov    -0x20(%ebp),%edx
087a2b8a +0x0e3a:  xor    0x8(%edx),%ecx
087a2b8d +0x0e3d:  mov    %ecx,0x20(%edx)
087a2b90 +0x0e40:  xor    0xc(%edx),%ecx
087a2b93 +0x0e43:  mov    %ecx,0x24(%edx)
087a2b96 +0x0e46:  xor    0x10(%edx),%ecx
087a2b99 +0x0e49:  mov    %ecx,0x28(%edx)
087a2b9c +0x0e4c:  xor    0x5c(%edi),%ecx
087a2b9f +0x0e4f:  mov    %ecx,0x2c(%edx)
087a2ba2 +0x0e52:  mov    0x60(%edi),%edx
087a2ba5 +0x0e55:  mov    %ecx,-0x24(%ebp)
087a2ba8 +0x0e58:  lea    0x78(%edi),%ecx
087a2bab +0x0e5b:  mov    %ecx,-0x20(%ebp)
087a2bae +0x0e5e:  mov    -0x464(%ebx),%ecx
087a2bb4 +0x0e64:  xor    0x10(%ecx),%edx
087a2bb7 +0x0e67:  movzbl -0x24(%ebp),%ecx
087a2bbb +0x0e6b:  mov    (%eax,%ecx,4),%ecx
087a2bbe +0x0e6e:  and    $0xff00,%ecx
087a2bc4 +0x0e74:  xor    %ecx,%edx
087a2bc6 +0x0e76:  mov    -0x24(%ebp),%ecx
087a2bc9 +0x0e79:  shr    $0x10,%ecx
087a2bcc +0x0e7c:  movzbl %cl,%ecx
087a2bcf +0x0e7f:  mov    (%eax,%ecx,4),%ecx
087a2bd2 +0x0e82:  and    $0xff000000,%ecx
087a2bd8 +0x0e88:  xor    %ecx,%edx
087a2bda +0x0e8a:  mov    -0x24(%ebp),%ecx
087a2bdd +0x0e8d:  movzbl %ch,%ecx
087a2be0 +0x0e90:  mov    (%eax,%ecx,4),%ecx
087a2be3 +0x0e93:  and    $0xff0000,%ecx
087a2be9 +0x0e99:  xor    %ecx,%edx
087a2beb +0x0e9b:  mov    -0x24(%ebp),%ecx
087a2bee +0x0e9e:  shr    $0x18,%ecx
087a2bf1 +0x0ea1:  movzbl (%eax,%ecx,4),%ecx
087a2bf5 +0x0ea5:  xor    %ecx,%edx
087a2bf7 +0x0ea7:  mov    %edx,0x78(%edi)
087a2bfa +0x0eaa:  mov    -0x1c(%ebp),%ecx
087a2bfd +0x0ead:  xor    0x4(%ecx),%edx
087a2c00 +0x0eb0:  mov    %edx,0x1c(%ecx)
087a2c03 +0x0eb3:  mov    %edx,%ecx
087a2c05 +0x0eb5:  mov    -0x1c(%ebp),%edx
087a2c08 +0x0eb8:  xor    0x8(%edx),%ecx
087a2c0b +0x0ebb:  mov    %ecx,0x20(%edx)
087a2c0e +0x0ebe:  xor    0xc(%edx),%ecx
087a2c11 +0x0ec1:  mov    %ecx,0x24(%edx)
087a2c14 +0x0ec4:  xor    0x10(%edx),%ecx
087a2c17 +0x0ec7:  mov    %ecx,0x28(%edx)
087a2c1a +0x0eca:  xor    0x74(%edi),%ecx
087a2c1d +0x0ecd:  mov    %ecx,0x2c(%edx)
087a2c20 +0x0ed0:  mov    0x78(%edi),%edx
087a2c23 +0x0ed3:  mov    %ecx,-0x24(%ebp)
087a2c26 +0x0ed6:  lea    0x90(%edi),%ecx
087a2c2c +0x0edc:  mov    %ecx,-0x1c(%ebp)
087a2c2f +0x0edf:  mov    -0x464(%ebx),%ecx
087a2c35 +0x0ee5:  xor    0x14(%ecx),%edx
087a2c38 +0x0ee8:  movzbl -0x24(%ebp),%ecx
087a2c3c +0x0eec:  mov    (%eax,%ecx,4),%ecx
087a2c3f +0x0eef:  and    $0xff00,%ecx
087a2c45 +0x0ef5:  xor    %ecx,%edx
087a2c47 +0x0ef7:  mov    -0x24(%ebp),%ecx
087a2c4a +0x0efa:  shr    $0x10,%ecx
087a2c4d +0x0efd:  movzbl %cl,%ecx
087a2c50 +0x0f00:  mov    (%eax,%ecx,4),%ecx
087a2c53 +0x0f03:  and    $0xff000000,%ecx
087a2c59 +0x0f09:  xor    %ecx,%edx
087a2c5b +0x0f0b:  mov    -0x24(%ebp),%ecx
087a2c5e +0x0f0e:  movzbl %ch,%ecx
087a2c61 +0x0f11:  mov    (%eax,%ecx,4),%ecx
087a2c64 +0x0f14:  and    $0xff0000,%ecx
087a2c6a +0x0f1a:  xor    %ecx,%edx
087a2c6c +0x0f1c:  mov    -0x24(%ebp),%ecx
087a2c6f +0x0f1f:  shr    $0x18,%ecx
087a2c72 +0x0f22:  movzbl (%eax,%ecx,4),%ecx
087a2c76 +0x0f26:  xor    %ecx,%edx
087a2c78 +0x0f28:  mov    -0x20(%ebp),%ecx
087a2c7b +0x0f2b:  mov    %edx,0x90(%edi)
087a2c81 +0x0f31:  xor    0x4(%ecx),%edx
087a2c84 +0x0f34:  mov    %edx,0x1c(%ecx)
087a2c87 +0x0f37:  mov    %edx,%ecx
087a2c89 +0x0f39:  mov    -0x20(%ebp),%edx
087a2c8c +0x0f3c:  xor    0x8(%edx),%ecx
087a2c8f +0x0f3f:  mov    %ecx,0x20(%edx)
087a2c92 +0x0f42:  xor    0xc(%edx),%ecx
087a2c95 +0x0f45:  mov    %ecx,0x24(%edx)
087a2c98 +0x0f48:  xor    0x10(%edx),%ecx
087a2c9b +0x0f4b:  mov    %ecx,0x28(%edx)
087a2c9e +0x0f4e:  xor    0x8c(%edi),%ecx
087a2ca4 +0x0f54:  mov    %ecx,0x2c(%edx)
087a2ca7 +0x0f57:  mov    0x90(%edi),%edx
087a2cad +0x0f5d:  mov    %ecx,-0x24(%ebp)
087a2cb0 +0x0f60:  lea    0xa8(%edi),%ecx
087a2cb6 +0x0f66:  mov    %ecx,-0x20(%ebp)
087a2cb9 +0x0f69:  mov    -0x464(%ebx),%ecx
087a2cbf +0x0f6f:  xor    0x18(%ecx),%edx
087a2cc2 +0x0f72:  movzbl -0x24(%ebp),%ecx
087a2cc6 +0x0f76:  mov    (%eax,%ecx,4),%ecx
087a2cc9 +0x0f79:  and    $0xff00,%ecx
087a2ccf +0x0f7f:  xor    %ecx,%edx
087a2cd1 +0x0f81:  mov    -0x24(%ebp),%ecx
087a2cd4 +0x0f84:  shr    $0x10,%ecx
087a2cd7 +0x0f87:  movzbl %cl,%ecx
087a2cda +0x0f8a:  mov    (%eax,%ecx,4),%ecx
087a2cdd +0x0f8d:  and    $0xff000000,%ecx
087a2ce3 +0x0f93:  xor    %ecx,%edx
087a2ce5 +0x0f95:  mov    -0x24(%ebp),%ecx
087a2ce8 +0x0f98:  movzbl %ch,%ecx
087a2ceb +0x0f9b:  mov    %ecx,-0x28(%ebp)
087a2cee +0x0f9e:  mov    (%eax,%ecx,4),%ecx
087a2cf1 +0x0fa1:  and    $0xff0000,%ecx
087a2cf7 +0x0fa7:  xor    %ecx,%edx
087a2cf9 +0x0fa9:  mov    -0x24(%ebp),%ecx
087a2cfc +0x0fac:  shr    $0x18,%ecx
087a2cff +0x0faf:  movzbl (%eax,%ecx,4),%ecx
087a2d03 +0x0fb3:  xor    %ecx,%edx
087a2d05 +0x0fb5:  mov    -0x1c(%ebp),%ecx
087a2d08 +0x0fb8:  mov    %edx,0xa8(%edi)
087a2d0e +0x0fbe:  xor    0x4(%ecx),%edx
087a2d11 +0x0fc1:  mov    %edx,0x1c(%ecx)
087a2d14 +0x0fc4:  xor    0x8(%ecx),%edx
087a2d17 +0x0fc7:  mov    %edx,0x20(%ecx)
087a2d1a +0x0fca:  xor    0xc(%ecx),%edx
087a2d1d +0x0fcd:  mov    %edx,0x24(%ecx)
087a2d20 +0x0fd0:  xor    0x10(%ecx),%edx
087a2d23 +0x0fd3:  mov    %edx,0x28(%ecx)
087a2d26 +0x0fd6:  xor    0xa4(%edi),%edx
087a2d2c +0x0fdc:  mov    %edx,0x2c(%ecx)
087a2d2f +0x0fdf:  mov    -0x464(%ebx),%ecx
087a2d35 +0x0fe5:  mov    %edx,-0x1c(%ebp)
087a2d38 +0x0fe8:  mov    0xa8(%edi),%edx
087a2d3e +0x0fee:  xor    0x1c(%ecx),%edx
087a2d41 +0x0ff1:  movzbl -0x1c(%ebp),%ecx
087a2d45 +0x0ff5:  mov    (%eax,%ecx,4),%ecx
087a2d48 +0x0ff8:  and    $0xff00,%ecx
087a2d4e +0x0ffe:  xor    %ecx,%edx
087a2d50 +0x1000:  mov    -0x1c(%ebp),%ecx
087a2d53 +0x1003:  shr    $0x10,%ecx
087a2d56 +0x1006:  movzbl %cl,%ecx
087a2d59 +0x1009:  mov    (%eax,%ecx,4),%ecx
087a2d5c +0x100c:  and    $0xff000000,%ecx
087a2d62 +0x1012:  xor    %ecx,%edx
087a2d64 +0x1014:  mov    -0x1c(%ebp),%ecx
087a2d67 +0x1017:  movzbl %ch,%ecx
087a2d6a +0x101a:  mov    %ecx,-0x24(%ebp)
087a2d6d +0x101d:  mov    (%eax,%ecx,4),%ecx
087a2d70 +0x1020:  and    $0xff0000,%ecx
087a2d76 +0x1026:  xor    %ecx,%edx
087a2d78 +0x1028:  mov    -0x1c(%ebp),%ecx
087a2d7b +0x102b:  shr    $0x18,%ecx
087a2d7e +0x102e:  movzbl (%eax,%ecx,4),%eax
087a2d82 +0x1032:  xor    %eax,%edx
087a2d84 +0x1034:  mov    -0x20(%ebp),%eax
087a2d87 +0x1037:  mov    %edx,0x18(%eax)
087a2d8a +0x103a:  xor    0x4(%eax),%edx
087a2d8d +0x103d:  mov    %edx,0x1c(%eax)
087a2d90 +0x1040:  xor    0x8(%eax),%edx
087a2d93 +0x1043:  mov    %edx,0x20(%eax)
087a2d96 +0x1046:  xor    0xc(%eax),%edx
087a2d99 +0x1049:  mov    %edx,0x24(%eax)
087a2d9c +0x104c:  jmp    087a1e09 <+0xb9>
087a2da1 +0x1051:  nop
087a2da2 +0x1052:  lea    0x0(%esi,%eiz,1),%esi
087a2da9 +0x1059:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::AES::SetKey @ 0x87a1d50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::AES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir) */

void TaoCrypt::AES::SetKey(int param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *__dest;
  uint local_30;
  uint *puVar11;
  
  *(uint *)(param_1 + 0x38) = (param_3 >> 2) + 6;
  __dest = (uint *)(param_1 + 0x3c);
  memcpy(__dest,param_2,param_3);
  memset((byte *)((int)__dest + param_3),0,(param_3 >> 2) * 4 - param_3);
  uVar8 = param_3 + 3 >> 2;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      uVar1 = *(uint *)(param_1 + 0x3c + uVar9 * 4);
      *(uint *)(param_1 + 0x3c + uVar9 * 4) =
           uVar1 >> 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 8 & 0xff00ff00 | uVar1 << 0x18;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8);
  }
  if (param_3 == 0x18) {
    iVar2 = *(int *)PTR_Te4_0936c7b4;
    uVar9 = *(uint *)(param_1 + 0x3c) ^ *(uint *)PTR_rcon__0936c734 ^
            *(uint *)(iVar2 + (uint)*(byte *)(param_1 + 0x50) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x50) >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x50) >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (*(uint *)(param_1 + 0x50) >> 0x18) * 4);
    *(uint *)(param_1 + 0x54) = uVar9;
    uVar8 = *(uint *)(param_1 + 0x40) ^ uVar9;
    *(uint *)(param_1 + 0x58) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x5c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x60) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x4c);
    *(uint *)(param_1 + 100) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x68) = uVar8;
    uVar8 = uVar9 ^ *(uint *)(PTR_rcon__0936c734 + 4) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x6c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x70) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x5c);
    *(uint *)(param_1 + 0x74) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x78) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 100);
    *(uint *)(param_1 + 0x7c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x80) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x6c) ^ *(uint *)(PTR_rcon__0936c734 + 8) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x84) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x88) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x8c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x90) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x94) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x98) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x84) ^ *(uint *)(PTR_rcon__0936c734 + 0xc) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x9c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0xa0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x8c);
    *(uint *)(param_1 + 0xa4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0xa8) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x94);
    *(uint *)(param_1 + 0xac) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x98);
    *(uint *)(param_1 + 0xb0) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x9c) ^ *(uint *)(PTR_rcon__0936c734 + 0x10) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xb4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xb8) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa4);
    *(uint *)(param_1 + 0xbc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xc0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xac);
    *(uint *)(param_1 + 0xc4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb0);
    *(uint *)(param_1 + 200) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xb4) ^ *(uint *)(PTR_rcon__0936c734 + 0x14) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xcc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb8);
    *(uint *)(param_1 + 0xd0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xbc);
    *(uint *)(param_1 + 0xd4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xd8) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xdc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 200);
    *(uint *)(param_1 + 0xe0) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xcc) ^ *(uint *)(PTR_rcon__0936c734 + 0x18) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xe4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xe8) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd4);
    *(uint *)(param_1 + 0xec) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xf0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xdc);
    *(uint *)(param_1 + 0xf4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xe0);
    *(uint *)(param_1 + 0xf8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xe4) ^ *(uint *)(PTR_rcon__0936c734 + 0x1c) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xfc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0x100) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xec);
    *(uint *)(param_1 + 0x104) = uVar8;
    *(uint *)(param_1 + 0x108) = uVar8 ^ *(uint *)(param_1 + 0xf0);
  }
  else if (param_3 == 0x20) {
    iVar2 = *(int *)PTR_Te4_0936c7b4;
    uVar9 = *(uint *)(param_1 + 0x3c) ^ *(uint *)PTR_rcon__0936c734 ^
            *(uint *)(iVar2 + (uint)*(byte *)(param_1 + 0x58) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x58) >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x58) >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (*(uint *)(param_1 + 0x58) >> 0x18) * 4);
    *(uint *)(param_1 + 0x5c) = uVar9;
    uVar8 = *(uint *)(param_1 + 0x40) ^ uVar9;
    *(uint *)(param_1 + 0x60) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 100) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x68) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0x4c) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0x6c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x70) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x74) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x78) = uVar8;
    uVar8 = uVar9 ^ *(uint *)(PTR_rcon__0936c734 + 4) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x7c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x80) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 100);
    *(uint *)(param_1 + 0x84) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x88) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0x6c) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0x8c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x90) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x94) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x98) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x7c) ^ *(uint *)(PTR_rcon__0936c734 + 8) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x9c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x80);
    *(uint *)(param_1 + 0xa0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x84);
    *(uint *)(param_1 + 0xa4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0xa8) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0x8c) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0xac) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0xb0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x94);
    *(uint *)(param_1 + 0xb4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x98);
    *(uint *)(param_1 + 0xb8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x9c) ^ *(uint *)(PTR_rcon__0936c734 + 0xc) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xbc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xc0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa4);
    *(uint *)(param_1 + 0xc4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa8);
    *(uint *)(param_1 + 200) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0xac) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0xcc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb0);
    *(uint *)(param_1 + 0xd0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb4);
    *(uint *)(param_1 + 0xd4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb8);
    *(uint *)(param_1 + 0xd8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xbc) ^ *(uint *)(PTR_rcon__0936c734 + 0x10) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xdc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xe0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xe4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 200);
    *(uint *)(param_1 + 0xe8) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0xcc) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0xec) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xf0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd4);
    *(uint *)(param_1 + 0xf4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xf8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xdc) ^ *(uint *)(PTR_rcon__0936c734 + 0x14) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xfc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xe0);
    *(uint *)(param_1 + 0x100) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xe4);
    *(uint *)(param_1 + 0x104) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xe8);
    *(uint *)(param_1 + 0x108) = uVar8;
    uVar8 = (uint)*(byte *)(iVar2 + (uVar8 & 0xff) * 4) ^ *(uint *)(param_1 + 0xec) ^
            *(uint *)(iVar2 + (uVar8 >> 0x18) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff0000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff00;
    *(uint *)(param_1 + 0x10c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xf0);
    *(uint *)(param_1 + 0x110) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xf4);
    *(uint *)(param_1 + 0x114) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0x118) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xfc) ^ *(uint *)(PTR_rcon__0936c734 + 0x18) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x11c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x120) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x104);
    *(uint *)(param_1 + 0x124) = uVar8;
    *(uint *)(param_1 + 0x128) = uVar8 ^ *(uint *)(param_1 + 0x108);
  }
  else if (param_3 == 0x10) {
    iVar2 = *(int *)PTR_Te4_0936c7b4;
    uVar9 = *(uint *)(param_1 + 0x3c) ^ *(uint *)PTR_rcon__0936c734 ^
            *(uint *)(iVar2 + (uint)*(byte *)(param_1 + 0x48) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x48) >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (*(uint *)(param_1 + 0x48) >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (*(uint *)(param_1 + 0x48) >> 0x18) * 4);
    *(uint *)(param_1 + 0x4c) = uVar9;
    uVar8 = *(uint *)(param_1 + 0x40) ^ uVar9;
    *(uint *)(param_1 + 0x50) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x54) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x58) = uVar8;
    uVar8 = uVar9 ^ *(uint *)(PTR_rcon__0936c734 + 4) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x5c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x60) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 100) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x68) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x5c) ^ *(uint *)(PTR_rcon__0936c734 + 8) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x6c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x70) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 100);
    *(uint *)(param_1 + 0x74) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x78) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x6c) ^ *(uint *)(PTR_rcon__0936c734 + 0xc) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x7c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x80) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x74);
    *(uint *)(param_1 + 0x84) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x88) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x7c) ^ *(uint *)(PTR_rcon__0936c734 + 0x10) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x8c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x90) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x84);
    *(uint *)(param_1 + 0x94) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x98) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x8c) ^ *(uint *)(PTR_rcon__0936c734 + 0x14) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0x9c) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0xa0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x94);
    *(uint *)(param_1 + 0xa4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0x98);
    *(uint *)(param_1 + 0xa8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0x9c) ^ *(uint *)(PTR_rcon__0936c734 + 0x18) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xac) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xb0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa4);
    *(uint *)(param_1 + 0xb4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xb8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xac) ^ *(uint *)(PTR_rcon__0936c734 + 0x1c) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xbc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb0);
    *(uint *)(param_1 + 0xc0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb4);
    *(uint *)(param_1 + 0xc4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xb8);
    *(uint *)(param_1 + 200) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xbc) ^ *(uint *)(PTR_rcon__0936c734 + 0x20) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xcc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xd0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xc4);
    *(uint *)(param_1 + 0xd4) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 200);
    *(uint *)(param_1 + 0xd8) = uVar8;
    uVar8 = *(uint *)(param_1 + 0xcc) ^ *(uint *)(PTR_rcon__0936c734 + 0x24) ^
            *(uint *)(iVar2 + (uVar8 & 0xff) * 4) & 0xff00 ^
            *(uint *)(iVar2 + (uVar8 >> 0x10 & 0xff) * 4) & 0xff000000 ^
            *(uint *)(iVar2 + (uVar8 >> 8 & 0xff) * 4) & 0xff0000 ^
            (uint)*(byte *)(iVar2 + (uVar8 >> 0x18) * 4);
    *(uint *)(param_1 + 0xdc) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xe0) = uVar8;
    uVar8 = uVar8 ^ *(uint *)(param_1 + 0xd4);
    *(uint *)(param_1 + 0xe4) = uVar8;
    iVar2 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0xe8) = uVar8 ^ *(uint *)(param_1 + 0xd8);
    goto joined_r0x087a2279;
  }
  iVar2 = *(int *)(param_1 + 0x30);
joined_r0x087a2279:
  if (iVar2 == 1) {
    uVar8 = *(uint *)(param_1 + 0x38);
    if (uVar8 * 4 != 0) {
      puVar10 = (undefined4 *)(param_1 + 0x3c + uVar8 * 0x10);
      uVar9 = 0;
      do {
        uVar3 = *(undefined4 *)(param_1 + 0x3c + uVar9 * 4);
        *(undefined4 *)(param_1 + 0x3c + uVar9 * 4) = *puVar10;
        *puVar10 = uVar3;
        uVar3 = *(undefined4 *)(param_1 + 0x40 + uVar9 * 4);
        *(undefined4 *)(param_1 + 0x40 + uVar9 * 4) = puVar10[1];
        puVar10[1] = uVar3;
        uVar3 = *(undefined4 *)(param_1 + 0x44 + uVar9 * 4);
        *(undefined4 *)(param_1 + 0x44 + uVar9 * 4) = puVar10[2];
        puVar10[2] = uVar3;
        uVar3 = *(undefined4 *)(param_1 + 0x48 + uVar9 * 4);
        *(undefined4 *)(param_1 + 0x48 + uVar9 * 4) = puVar10[3];
        uVar9 = uVar9 + 4;
        puVar10[3] = uVar3;
        puVar10 = puVar10 + -4;
      } while (uVar9 < uVar8 * 4 - uVar9);
    }
    if (1 < uVar8) {
      local_30 = 1;
      iVar2 = *(int *)PTR_Td0_0936ca20;
      iVar4 = *(int *)PTR_Te4_0936c7b4;
      iVar5 = *(int *)PTR_Td1_0936c970;
      iVar6 = *(int *)PTR_Td2_0936c938;
      iVar7 = *(int *)PTR_Td3_0936c77c;
      do {
        puVar11 = __dest + 4;
        *puVar11 = *(uint *)(iVar2 + (uint)*(byte *)(iVar4 + (*puVar11 >> 0x18) * 4) * 4) ^
                   *(uint *)(iVar5 + (uint)*(byte *)(iVar4 + (*puVar11 >> 0x10 & 0xff) * 4) * 4) ^
                   *(uint *)(iVar7 + (uint)*(byte *)(iVar4 + (uint)(byte)*puVar11 * 4) * 4) ^
                   *(uint *)(iVar6 + (uint)*(byte *)(iVar4 + (*puVar11 >> 8 & 0xff) * 4) * 4);
        __dest[5] = *(uint *)(iVar2 + (uint)*(byte *)(iVar4 + (__dest[5] >> 0x18) * 4) * 4) ^
                    *(uint *)(iVar5 + (uint)*(byte *)(iVar4 + (__dest[5] >> 0x10 & 0xff) * 4) * 4) ^
                    *(uint *)(iVar7 + (uint)*(byte *)(iVar4 + (uint)(byte)__dest[5] * 4) * 4) ^
                    *(uint *)(iVar6 + (uint)*(byte *)(iVar4 + (__dest[5] >> 8 & 0xff) * 4) * 4);
        __dest[6] = *(uint *)(iVar2 + (uint)*(byte *)(iVar4 + (__dest[6] >> 0x18) * 4) * 4) ^
                    *(uint *)(iVar5 + (uint)*(byte *)(iVar4 + (__dest[6] >> 0x10 & 0xff) * 4) * 4) ^
                    *(uint *)(iVar7 + (uint)*(byte *)(iVar4 + (uint)(byte)__dest[6] * 4) * 4) ^
                    *(uint *)(iVar6 + (uint)*(byte *)(iVar4 + (__dest[6] >> 8 & 0xff) * 4) * 4);
        __dest[7] = *(uint *)(iVar2 + (uint)*(byte *)(iVar4 + (__dest[7] >> 0x18) * 4) * 4) ^
                    *(uint *)(iVar5 + (uint)*(byte *)(iVar4 + (__dest[7] >> 0x10 & 0xff) * 4) * 4) ^
                    *(uint *)(iVar7 + (uint)*(byte *)(iVar4 + (uint)(byte)__dest[7] * 4) * 4) ^
                    *(uint *)(iVar6 + (uint)*(byte *)(iVar4 + (__dest[7] >> 8 & 0xff) * 4) * 4);
        local_30 = local_30 + 1;
        __dest = puVar11;
      } while (local_30 < *(uint *)(param_1 + 0x38));
      return;
    }
  }
  return;
}
```
