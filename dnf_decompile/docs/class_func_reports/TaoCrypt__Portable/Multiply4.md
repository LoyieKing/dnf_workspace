# Multiply4

`_ZN8TaoCrypt8Portable9Multiply4EPjPKjS3_`

`TaoCrypt::Portable::Multiply4(unsigned int*, unsigned int const*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Portable` | `0x08759810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08759810  _ZN8TaoCrypt8Portable9Multiply4EPjPKjS3_
#           TaoCrypt::Portable::Multiply4(unsigned int*, unsigned int const*, unsigned int const*)
# range [0x08759810, 0x08759b8a]
08759810 +0x000:  push   %ebp
08759811 +0x001:  mov    %esp,%ebp
08759813 +0x003:  push   %edi
08759814 +0x004:  xor    %edi,%edi
08759816 +0x006:  push   %esi
08759817 +0x007:  sub    $0x28,%esp
0875981a +0x00a:  mov    0x10(%ebp),%ecx
0875981d +0x00d:  mov    0xc(%ebp),%eax
08759820 +0x010:  mov    (%eax),%esi
08759822 +0x012:  mov    (%ecx),%eax
08759824 +0x014:  mul    %esi
08759826 +0x016:  mov    %edx,-0x2c(%ebp)
08759829 +0x019:  mov    %eax,%esi
0875982b +0x01b:  mov    0xc(%ebp),%edx
0875982e +0x01e:  mov    0x8(%ebp),%eax
08759831 +0x021:  mov    %esi,(%eax)
08759833 +0x023:  mov    (%edx),%esi
08759835 +0x025:  mov    0x4(%ecx),%eax
08759838 +0x028:  mul    %esi
0875983a +0x02a:  mov    -0x2c(%ebp),%esi
0875983d +0x02d:  mov    %eax,-0x10(%ebp)
08759840 +0x030:  add    %esi,-0x10(%ebp)
08759843 +0x033:  mov    -0x10(%ebp),%esi
08759846 +0x036:  mov    %edx,-0xc(%ebp)
08759849 +0x039:  adc    %edi,-0xc(%ebp)
0875984c +0x03c:  mov    0xc(%ebp),%edi
0875984f +0x03f:  mov    -0xc(%ebp),%edx
08759852 +0x042:  mov    0x4(%edi),%edi
08759855 +0x045:  mov    %edx,%ecx
08759857 +0x047:  mov    %edi,%eax
08759859 +0x049:  mov    0x10(%ebp),%edi
0875985c +0x04c:  mull   (%edi)
0875985e +0x04e:  xor    %edi,%edi
08759860 +0x050:  mov    %eax,-0x10(%ebp)
08759863 +0x053:  add    %esi,-0x10(%ebp)
08759866 +0x056:  mov    %edx,-0xc(%ebp)
08759869 +0x059:  adc    %edi,-0xc(%ebp)
0875986c +0x05c:  xor    %edx,%edx
0875986e +0x05e:  mov    -0xc(%ebp),%eax
08759871 +0x061:  xor    %edi,%edi
08759873 +0x063:  mov    %eax,%esi
08759875 +0x065:  add    %ecx,%esi
08759877 +0x067:  adc    %edx,%edi
08759879 +0x069:  mov    %esi,%ecx
0875987b +0x06b:  mov    0x8(%ebp),%edx
0875987e +0x06e:  mov    -0x10(%ebp),%esi
08759881 +0x071:  mov    %edi,-0x20(%ebp)
08759884 +0x074:  mov    0xc(%ebp),%edi
08759887 +0x077:  mov    %esi,0x4(%edx)
0875988a +0x07a:  mov    0x8(%edi),%esi
0875988d +0x07d:  mov    0x10(%ebp),%edi
08759890 +0x080:  mov    (%edi),%eax
08759892 +0x082:  xor    %edi,%edi
08759894 +0x084:  mul    %esi
08759896 +0x086:  mov    -0x20(%ebp),%esi
08759899 +0x089:  mov    %eax,-0x18(%ebp)
0875989c +0x08c:  add    %ecx,-0x18(%ebp)
0875989f +0x08f:  mov    %edx,-0x14(%ebp)
087598a2 +0x092:  adc    %edi,-0x14(%ebp)
087598a5 +0x095:  xor    %edx,%edx
087598a7 +0x097:  mov    -0x14(%ebp),%eax
087598aa +0x09a:  xor    %edi,%edi
087598ac +0x09c:  mov    %eax,-0x2c(%ebp)
087598af +0x09f:  mov    -0x2c(%ebp),%eax
087598b2 +0x0a2:  add    %eax,%esi
087598b4 +0x0a4:  mov    %esi,%ecx
087598b6 +0x0a6:  mov    0xc(%ebp),%esi
087598b9 +0x0a9:  adc    %edx,%edi
087598bb +0x0ab:  mov    %edi,-0x20(%ebp)
087598be +0x0ae:  mov    0x4(%esi),%edi
087598c1 +0x0b1:  mov    0x10(%ebp),%esi
087598c4 +0x0b4:  mov    0x4(%esi),%eax
087598c7 +0x0b7:  mov    -0x18(%ebp),%esi
087598ca +0x0ba:  mul    %edi
087598cc +0x0bc:  xor    %edi,%edi
087598ce +0x0be:  mov    %eax,-0x10(%ebp)
087598d1 +0x0c1:  add    %esi,-0x10(%ebp)
087598d4 +0x0c4:  mov    %edx,-0xc(%ebp)
087598d7 +0x0c7:  adc    %edi,-0xc(%ebp)
087598da +0x0ca:  xor    %edx,%edx
087598dc +0x0cc:  mov    -0xc(%ebp),%edi
087598df +0x0cf:  mov    %edi,-0x2c(%ebp)
087598e2 +0x0d2:  mov    -0x2c(%ebp),%esi
087598e5 +0x0d5:  xor    %edi,%edi
087598e7 +0x0d7:  add    %ecx,%esi
087598e9 +0x0d9:  adc    %edx,%edi
087598eb +0x0db:  mov    %esi,%ecx
087598ed +0x0dd:  mov    -0x20(%ebp),%edx
087598f0 +0x0e0:  mov    0xc(%ebp),%esi
087598f3 +0x0e3:  add    %edi,%edx
087598f5 +0x0e5:  mov    (%esi),%edi
087598f7 +0x0e7:  mov    0x10(%ebp),%esi
087598fa +0x0ea:  mov    %edx,-0x20(%ebp)
087598fd +0x0ed:  mov    0x8(%esi),%eax
08759900 +0x0f0:  mov    -0x10(%ebp),%esi
08759903 +0x0f3:  mul    %edi
08759905 +0x0f5:  xor    %edi,%edi
08759907 +0x0f7:  mov    %eax,-0x18(%ebp)
0875990a +0x0fa:  mov    -0x20(%ebp),%eax
0875990d +0x0fd:  add    %esi,-0x18(%ebp)
08759910 +0x100:  mov    %edx,-0x14(%ebp)
08759913 +0x103:  adc    %edi,-0x14(%ebp)
08759916 +0x106:  xor    %edx,%edx
08759918 +0x108:  mov    -0x14(%ebp),%edi
0875991b +0x10b:  mov    %edi,-0x2c(%ebp)
0875991e +0x10e:  mov    -0x2c(%ebp),%esi
08759921 +0x111:  xor    %edi,%edi
08759923 +0x113:  add    %ecx,%esi
08759925 +0x115:  adc    %edx,%edi
08759927 +0x117:  mov    %esi,%ecx
08759929 +0x119:  mov    0x8(%ebp),%edx
0875992c +0x11c:  add    %edi,%eax
0875992e +0x11e:  mov    -0x18(%ebp),%esi
08759931 +0x121:  mov    0xc(%ebp),%edi
08759934 +0x124:  mov    %eax,-0x20(%ebp)
08759937 +0x127:  mov    %esi,0x8(%edx)
0875993a +0x12a:  mov    (%edi),%esi
0875993c +0x12c:  mov    0x10(%ebp),%edi
0875993f +0x12f:  mov    0xc(%edi),%eax
08759942 +0x132:  xor    %edi,%edi
08759944 +0x134:  mul    %esi
08759946 +0x136:  mov    %eax,-0x10(%ebp)
08759949 +0x139:  add    %ecx,-0x10(%ebp)
0875994c +0x13c:  mov    %edx,-0xc(%ebp)
0875994f +0x13f:  adc    %edi,-0xc(%ebp)
08759952 +0x142:  xor    %edx,%edx
08759954 +0x144:  mov    -0xc(%ebp),%eax
08759957 +0x147:  xor    %edi,%edi
08759959 +0x149:  mov    %eax,-0x2c(%ebp)
0875995c +0x14c:  mov    -0x20(%ebp),%esi
0875995f +0x14f:  mov    -0x2c(%ebp),%eax
08759962 +0x152:  add    %eax,%esi
08759964 +0x154:  mov    %esi,%ecx
08759966 +0x156:  mov    0xc(%ebp),%esi
08759969 +0x159:  adc    %edx,%edi
0875996b +0x15b:  mov    %edi,-0x20(%ebp)
0875996e +0x15e:  mov    0x4(%esi),%edi
08759971 +0x161:  mov    0x10(%ebp),%esi
08759974 +0x164:  mov    0x8(%esi),%eax
08759977 +0x167:  mov    -0x10(%ebp),%esi
0875997a +0x16a:  mul    %edi
0875997c +0x16c:  xor    %edi,%edi
0875997e +0x16e:  mov    %eax,-0x18(%ebp)
08759981 +0x171:  add    %esi,-0x18(%ebp)
08759984 +0x174:  mov    %edx,-0x14(%ebp)
08759987 +0x177:  adc    %edi,-0x14(%ebp)
0875998a +0x17a:  xor    %edx,%edx
0875998c +0x17c:  mov    -0x14(%ebp),%edi
0875998f +0x17f:  mov    %edi,-0x2c(%ebp)
08759992 +0x182:  mov    -0x2c(%ebp),%esi
08759995 +0x185:  xor    %edi,%edi
08759997 +0x187:  add    %ecx,%esi
08759999 +0x189:  adc    %edx,%edi
0875999b +0x18b:  mov    %esi,%ecx
0875999d +0x18d:  mov    -0x20(%ebp),%edx
087599a0 +0x190:  mov    0xc(%ebp),%esi
087599a3 +0x193:  add    %edi,%edx
087599a5 +0x195:  mov    0x8(%esi),%edi
087599a8 +0x198:  mov    0x10(%ebp),%esi
087599ab +0x19b:  mov    %edx,-0x20(%ebp)
087599ae +0x19e:  mov    0x4(%esi),%eax
087599b1 +0x1a1:  mov    -0x18(%ebp),%esi
087599b4 +0x1a4:  mul    %edi
087599b6 +0x1a6:  xor    %edi,%edi
087599b8 +0x1a8:  mov    %eax,-0x10(%ebp)
087599bb +0x1ab:  add    %esi,-0x10(%ebp)
087599be +0x1ae:  mov    %edx,-0xc(%ebp)
087599c1 +0x1b1:  adc    %edi,-0xc(%ebp)
087599c4 +0x1b4:  xor    %edx,%edx
087599c6 +0x1b6:  mov    -0xc(%ebp),%edi
087599c9 +0x1b9:  mov    %edi,-0x2c(%ebp)
087599cc +0x1bc:  mov    -0x2c(%ebp),%esi
087599cf +0x1bf:  xor    %edi,%edi
087599d1 +0x1c1:  add    %ecx,%esi
087599d3 +0x1c3:  adc    %edx,%edi
087599d5 +0x1c5:  mov    %esi,%ecx
087599d7 +0x1c7:  mov    -0x20(%ebp),%edx
087599da +0x1ca:  mov    0xc(%ebp),%esi
087599dd +0x1cd:  add    %edi,%edx
087599df +0x1cf:  mov    0xc(%esi),%edi
087599e2 +0x1d2:  mov    0x10(%ebp),%esi
087599e5 +0x1d5:  mov    %edx,-0x20(%ebp)
087599e8 +0x1d8:  mov    (%esi),%eax
087599ea +0x1da:  mov    -0x10(%ebp),%esi
087599ed +0x1dd:  mul    %edi
087599ef +0x1df:  xor    %edi,%edi
087599f1 +0x1e1:  mov    %eax,-0x18(%ebp)
087599f4 +0x1e4:  mov    -0x20(%ebp),%eax
087599f7 +0x1e7:  add    %esi,-0x18(%ebp)
087599fa +0x1ea:  mov    %edx,-0x14(%ebp)
087599fd +0x1ed:  adc    %edi,-0x14(%ebp)
08759a00 +0x1f0:  xor    %edx,%edx
08759a02 +0x1f2:  mov    -0x14(%ebp),%edi
08759a05 +0x1f5:  mov    %edi,-0x2c(%ebp)
08759a08 +0x1f8:  mov    -0x2c(%ebp),%esi
08759a0b +0x1fb:  xor    %edi,%edi
08759a0d +0x1fd:  add    %ecx,%esi
08759a0f +0x1ff:  adc    %edx,%edi
08759a11 +0x201:  mov    %esi,%ecx
08759a13 +0x203:  mov    0x8(%ebp),%edx
08759a16 +0x206:  mov    -0x18(%ebp),%esi
08759a19 +0x209:  add    %edi,%eax
08759a1b +0x20b:  mov    0xc(%ebp),%edi
08759a1e +0x20e:  mov    %eax,-0x10(%ebp)
08759a21 +0x211:  mov    %esi,0xc(%edx)
08759a24 +0x214:  mov    0xc(%edi),%esi
08759a27 +0x217:  mov    0x10(%ebp),%edi
08759a2a +0x21a:  mov    0x4(%edi),%eax
08759a2d +0x21d:  xor    %edi,%edi
08759a2f +0x21f:  mul    %esi
08759a31 +0x221:  mov    %eax,-0x18(%ebp)
08759a34 +0x224:  add    %ecx,-0x18(%ebp)
08759a37 +0x227:  mov    %edx,-0x14(%ebp)
08759a3a +0x22a:  adc    %edi,-0x14(%ebp)
08759a3d +0x22d:  xor    %edx,%edx
08759a3f +0x22f:  mov    -0x14(%ebp),%eax
08759a42 +0x232:  xor    %edi,%edi
08759a44 +0x234:  mov    %eax,-0x2c(%ebp)
08759a47 +0x237:  mov    -0x10(%ebp),%esi
08759a4a +0x23a:  mov    -0x2c(%ebp),%eax
08759a4d +0x23d:  add    %eax,%esi
08759a4f +0x23f:  mov    %esi,%ecx
08759a51 +0x241:  mov    0xc(%ebp),%esi
08759a54 +0x244:  adc    %edx,%edi
08759a56 +0x246:  mov    %edi,-0x20(%ebp)
08759a59 +0x249:  mov    0x8(%esi),%edi
08759a5c +0x24c:  mov    0x10(%ebp),%esi
08759a5f +0x24f:  mov    0x8(%esi),%eax
08759a62 +0x252:  mov    -0x18(%ebp),%esi
08759a65 +0x255:  mul    %edi
08759a67 +0x257:  xor    %edi,%edi
08759a69 +0x259:  mov    %eax,-0x10(%ebp)
08759a6c +0x25c:  add    %esi,-0x10(%ebp)
08759a6f +0x25f:  mov    %edx,-0xc(%ebp)
08759a72 +0x262:  adc    %edi,-0xc(%ebp)
08759a75 +0x265:  xor    %edx,%edx
08759a77 +0x267:  mov    -0xc(%ebp),%edi
08759a7a +0x26a:  mov    %edi,-0x2c(%ebp)
08759a7d +0x26d:  mov    -0x2c(%ebp),%esi
08759a80 +0x270:  xor    %edi,%edi
08759a82 +0x272:  add    %ecx,%esi
08759a84 +0x274:  adc    %edx,%edi
08759a86 +0x276:  mov    %esi,%ecx
08759a88 +0x278:  mov    -0x20(%ebp),%edx
08759a8b +0x27b:  mov    0xc(%ebp),%esi
08759a8e +0x27e:  add    %edi,%edx
08759a90 +0x280:  mov    0x4(%esi),%edi
08759a93 +0x283:  mov    0x10(%ebp),%esi
08759a96 +0x286:  mov    %edx,-0x20(%ebp)
08759a99 +0x289:  mov    0xc(%esi),%eax
08759a9c +0x28c:  mov    -0x10(%ebp),%esi
08759a9f +0x28f:  mul    %edi
08759aa1 +0x291:  xor    %edi,%edi
08759aa3 +0x293:  mov    %eax,-0x18(%ebp)
08759aa6 +0x296:  add    %esi,-0x18(%ebp)
08759aa9 +0x299:  mov    %edx,-0x14(%ebp)
08759aac +0x29c:  adc    %edi,-0x14(%ebp)
08759aaf +0x29f:  xor    %edx,%edx
08759ab1 +0x2a1:  mov    -0x14(%ebp),%edi
08759ab4 +0x2a4:  mov    %edi,-0x2c(%ebp)
08759ab7 +0x2a7:  mov    -0x2c(%ebp),%esi
08759aba +0x2aa:  xor    %edi,%edi
08759abc +0x2ac:  mov    -0x20(%ebp),%eax
08759abf +0x2af:  add    %ecx,%esi
08759ac1 +0x2b1:  adc    %edx,%edi
08759ac3 +0x2b3:  mov    %esi,%ecx
08759ac5 +0x2b5:  mov    0x8(%ebp),%edx
08759ac8 +0x2b8:  mov    -0x18(%ebp),%esi
08759acb +0x2bb:  add    %edi,%eax
08759acd +0x2bd:  mov    %eax,-0x20(%ebp)
08759ad0 +0x2c0:  mov    0xc(%ebp),%eax
08759ad3 +0x2c3:  mov    %esi,0x10(%edx)
08759ad6 +0x2c6:  mov    0x10(%ebp),%esi
08759ad9 +0x2c9:  mov    0x8(%eax),%edi
08759adc +0x2cc:  mov    0xc(%esi),%eax
08759adf +0x2cf:  mov    -0x20(%ebp),%esi
08759ae2 +0x2d2:  mul    %edi
08759ae4 +0x2d4:  xor    %edi,%edi
08759ae6 +0x2d6:  mov    %eax,-0x10(%ebp)
08759ae9 +0x2d9:  add    %ecx,-0x10(%ebp)
08759aec +0x2dc:  mov    -0x10(%ebp),%ecx
08759aef +0x2df:  mov    %edx,-0xc(%ebp)
08759af2 +0x2e2:  adc    %edi,-0xc(%ebp)
08759af5 +0x2e5:  xor    %edx,%edx
08759af7 +0x2e7:  mov    -0xc(%ebp),%edi
08759afa +0x2ea:  mov    %edi,-0x2c(%ebp)
08759afd +0x2ed:  mov    -0x2c(%ebp),%eax
08759b00 +0x2f0:  xor    %edi,%edi
08759b02 +0x2f2:  add    %eax,%esi
08759b04 +0x2f4:  mov    0xc(%ebp),%eax
08759b07 +0x2f7:  mov    %esi,-0x20(%ebp)
08759b0a +0x2fa:  mov    0x10(%ebp),%esi
08759b0d +0x2fd:  adc    %edx,%edi
08759b0f +0x2ff:  mov    %edi,-0x18(%ebp)
08759b12 +0x302:  mov    0xc(%eax),%edi
08759b15 +0x305:  mov    0x8(%esi),%eax
08759b18 +0x308:  mul    %edi
08759b1a +0x30a:  xor    %edi,%edi
08759b1c +0x30c:  mov    %eax,-0x10(%ebp)
08759b1f +0x30f:  add    %ecx,-0x10(%ebp)
08759b22 +0x312:  mov    %edx,-0xc(%ebp)
08759b25 +0x315:  adc    %edi,-0xc(%ebp)
08759b28 +0x318:  xor    %ecx,%ecx
08759b2a +0x31a:  mov    -0xc(%ebp),%edi
08759b2d +0x31d:  mov    -0x20(%ebp),%edx
08759b30 +0x320:  mov    0x8(%ebp),%eax
08759b33 +0x323:  mov    %edi,-0x2c(%ebp)
08759b36 +0x326:  mov    -0x2c(%ebp),%esi
08759b39 +0x329:  xor    %edi,%edi
08759b3b +0x32b:  add    %edx,%esi
08759b3d +0x32d:  mov    -0x10(%ebp),%edx
08759b40 +0x330:  adc    %ecx,%edi
08759b42 +0x332:  mov    %esi,%ecx
08759b44 +0x334:  mov    -0x18(%ebp),%esi
08759b47 +0x337:  mov    %edx,0x14(%eax)
08759b4a +0x33a:  add    %edi,%esi
08759b4c +0x33c:  mov    0xc(%ebp),%edi
08759b4f +0x33f:  mov    0xc(%edi),%edi
08759b52 +0x342:  mov    %edi,%eax
08759b54 +0x344:  mov    0x10(%ebp),%edi
08759b57 +0x347:  mull   0xc(%edi)
08759b5a +0x34a:  mov    %eax,-0x28(%ebp)
08759b5d +0x34d:  mov    %edx,-0x24(%ebp)
08759b60 +0x350:  xor    %edx,%edx
08759b62 +0x352:  add    %ecx,-0x28(%ebp)
08759b65 +0x355:  adc    %edx,-0x24(%ebp)
08759b68 +0x358:  mov    -0x24(%ebp),%eax
08759b6b +0x35b:  mov    0x8(%ebp),%edx
08759b6e +0x35e:  mov    -0x28(%ebp),%ecx
08759b71 +0x361:  mov    %eax,-0x2c(%ebp)
08759b74 +0x364:  lea    (%esi,%eax,1),%eax
08759b77 +0x367:  mov    %eax,0x1c(%edx)
08759b7a +0x36a:  mov    %ecx,0x18(%edx)
08759b7d +0x36d:  add    $0x28,%esp
08759b80 +0x370:  pop    %esi
08759b81 +0x371:  pop    %edi
08759b82 +0x372:  pop    %ebp
08759b83 +0x373:  ret
08759b84 +0x374:  lea    0x0(%esi),%esi
08759b8a +0x37a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::Portable::Multiply4 @ 0x8759810

/* TaoCrypt::Portable::Multiply4(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply4(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = (uint)((ulonglong)uVar2 * (ulonglong)uVar1);
  uVar3 = (ulonglong)param_3[1] * (ulonglong)*param_2 +
          ((ulonglong)uVar2 * (ulonglong)uVar1 >> 0x20);
  uVar1 = (uint)(uVar3 >> 0x20);
  lVar4 = (ulonglong)param_2[1] * (ulonglong)*param_3 + (uVar3 & 0xffffffff);
  uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uint)CARRY4(uVar2,uVar1);
  param_1[1] = (uint)lVar4;
  uVar3 = (ulonglong)*param_3 * (ulonglong)param_2[2] + (ulonglong)(uVar2 + uVar1);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar9 + uVar1;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar2 + uVar5;
  lVar4 = (ulonglong)param_3[2] * (ulonglong)*param_2 + (uVar3 & 0xffffffff);
  uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar5 = (uint)CARRY4(uVar9,uVar1) + (uint)CARRY4(uVar2,uVar5) + (uint)CARRY4(uVar10,uVar6);
  param_1[2] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)*param_2 + (ulonglong)(uVar10 + uVar6);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar5 + uVar1;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar2 + uVar6;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar10 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar10 + uVar7;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar5 = (uint)CARRY4(uVar5,uVar1) + (uint)CARRY4(uVar2,uVar6) + (uint)CARRY4(uVar10,uVar7) +
          (uint)CARRY4(uVar9,uVar8);
  param_1[3] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[3] + (ulonglong)(uVar9 + uVar8);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar5 + uVar1;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar2 + uVar9;
  lVar4 = (ulonglong)param_3[3] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uint)CARRY4(uVar5,uVar1) + (uint)CARRY4(uVar2,uVar9) + (uint)CARRY4(uVar10,uVar6);
  param_1[4] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[2] + (ulonglong)(uVar10 + uVar6);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar9 + uVar1;
  lVar4 = (ulonglong)param_3[2] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
  param_1[5] = (uint)lVar4;
  lVar4 = (ulonglong)param_2[3] * (ulonglong)param_3[3] + (ulonglong)(uVar2 + uVar10);
  param_1[7] = (uint)CARRY4(uVar9,uVar1) + (uint)CARRY4(uVar2,uVar10) +
               (int)((ulonglong)lVar4 >> 0x20);
  param_1[6] = (uint)lVar4;
  return;
}
```
