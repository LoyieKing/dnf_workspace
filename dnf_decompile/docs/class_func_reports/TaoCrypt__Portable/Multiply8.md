# Multiply8

`_ZN8TaoCrypt8Portable9Multiply8EPjPKjS3_`

`TaoCrypt::Portable::Multiply8(unsigned int*, unsigned int const*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Portable` | `0x08759f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08759f10  _ZN8TaoCrypt8Portable9Multiply8EPjPKjS3_
#           TaoCrypt::Portable::Multiply8(unsigned int*, unsigned int const*, unsigned int const*)
# range [0x08759f10, 0x0875ad7c]
08759f10 +0x000:  push   %ebp
08759f11 +0x001:  mov    %esp,%ebp
08759f13 +0x003:  push   %edi
08759f14 +0x004:  xor    %edi,%edi
08759f16 +0x006:  push   %esi
08759f17 +0x007:  sub    $0x28,%esp
08759f1a +0x00a:  mov    0x10(%ebp),%ecx
08759f1d +0x00d:  mov    0xc(%ebp),%eax
08759f20 +0x010:  mov    (%eax),%esi
08759f22 +0x012:  mov    (%ecx),%eax
08759f24 +0x014:  mul    %esi
08759f26 +0x016:  mov    %edx,-0x2c(%ebp)
08759f29 +0x019:  mov    %eax,%esi
08759f2b +0x01b:  mov    0xc(%ebp),%edx
08759f2e +0x01e:  mov    0x8(%ebp),%eax
08759f31 +0x021:  mov    %esi,(%eax)
08759f33 +0x023:  mov    (%edx),%esi
08759f35 +0x025:  mov    0x4(%ecx),%eax
08759f38 +0x028:  mul    %esi
08759f3a +0x02a:  mov    -0x2c(%ebp),%esi
08759f3d +0x02d:  mov    %eax,-0x10(%ebp)
08759f40 +0x030:  add    %esi,-0x10(%ebp)
08759f43 +0x033:  mov    -0x10(%ebp),%esi
08759f46 +0x036:  mov    %edx,-0xc(%ebp)
08759f49 +0x039:  adc    %edi,-0xc(%ebp)
08759f4c +0x03c:  mov    0xc(%ebp),%edi
08759f4f +0x03f:  mov    -0xc(%ebp),%edx
08759f52 +0x042:  mov    0x4(%edi),%edi
08759f55 +0x045:  mov    %edx,%ecx
08759f57 +0x047:  mov    %edi,%eax
08759f59 +0x049:  mov    0x10(%ebp),%edi
08759f5c +0x04c:  mull   (%edi)
08759f5e +0x04e:  xor    %edi,%edi
08759f60 +0x050:  mov    %eax,-0x10(%ebp)
08759f63 +0x053:  add    %esi,-0x10(%ebp)
08759f66 +0x056:  mov    %edx,-0xc(%ebp)
08759f69 +0x059:  adc    %edi,-0xc(%ebp)
08759f6c +0x05c:  xor    %edx,%edx
08759f6e +0x05e:  mov    -0xc(%ebp),%eax
08759f71 +0x061:  xor    %edi,%edi
08759f73 +0x063:  mov    %eax,%esi
08759f75 +0x065:  add    %ecx,%esi
08759f77 +0x067:  adc    %edx,%edi
08759f79 +0x069:  mov    %esi,%ecx
08759f7b +0x06b:  mov    0x8(%ebp),%edx
08759f7e +0x06e:  mov    -0x10(%ebp),%esi
08759f81 +0x071:  mov    %edi,-0x20(%ebp)
08759f84 +0x074:  mov    0xc(%ebp),%edi
08759f87 +0x077:  mov    %esi,0x4(%edx)
08759f8a +0x07a:  mov    0x8(%edi),%esi
08759f8d +0x07d:  mov    0x10(%ebp),%edi
08759f90 +0x080:  mov    (%edi),%eax
08759f92 +0x082:  xor    %edi,%edi
08759f94 +0x084:  mul    %esi
08759f96 +0x086:  mov    -0x20(%ebp),%esi
08759f99 +0x089:  mov    %eax,-0x18(%ebp)
08759f9c +0x08c:  add    %ecx,-0x18(%ebp)
08759f9f +0x08f:  mov    %edx,-0x14(%ebp)
08759fa2 +0x092:  adc    %edi,-0x14(%ebp)
08759fa5 +0x095:  xor    %edx,%edx
08759fa7 +0x097:  mov    -0x14(%ebp),%eax
08759faa +0x09a:  xor    %edi,%edi
08759fac +0x09c:  mov    %eax,-0x2c(%ebp)
08759faf +0x09f:  mov    -0x2c(%ebp),%eax
08759fb2 +0x0a2:  add    %eax,%esi
08759fb4 +0x0a4:  mov    %esi,%ecx
08759fb6 +0x0a6:  mov    0xc(%ebp),%esi
08759fb9 +0x0a9:  adc    %edx,%edi
08759fbb +0x0ab:  mov    %edi,-0x20(%ebp)
08759fbe +0x0ae:  mov    0x4(%esi),%edi
08759fc1 +0x0b1:  mov    0x10(%ebp),%esi
08759fc4 +0x0b4:  mov    0x4(%esi),%eax
08759fc7 +0x0b7:  mov    -0x18(%ebp),%esi
08759fca +0x0ba:  mul    %edi
08759fcc +0x0bc:  xor    %edi,%edi
08759fce +0x0be:  mov    %eax,-0x10(%ebp)
08759fd1 +0x0c1:  add    %esi,-0x10(%ebp)
08759fd4 +0x0c4:  mov    %edx,-0xc(%ebp)
08759fd7 +0x0c7:  adc    %edi,-0xc(%ebp)
08759fda +0x0ca:  xor    %edx,%edx
08759fdc +0x0cc:  mov    -0xc(%ebp),%edi
08759fdf +0x0cf:  mov    %edi,-0x2c(%ebp)
08759fe2 +0x0d2:  mov    -0x2c(%ebp),%esi
08759fe5 +0x0d5:  xor    %edi,%edi
08759fe7 +0x0d7:  add    %ecx,%esi
08759fe9 +0x0d9:  adc    %edx,%edi
08759feb +0x0db:  mov    %esi,%ecx
08759fed +0x0dd:  mov    -0x20(%ebp),%edx
08759ff0 +0x0e0:  mov    0xc(%ebp),%esi
08759ff3 +0x0e3:  add    %edi,%edx
08759ff5 +0x0e5:  mov    (%esi),%edi
08759ff7 +0x0e7:  mov    0x10(%ebp),%esi
08759ffa +0x0ea:  mov    %edx,-0x20(%ebp)
08759ffd +0x0ed:  mov    0x8(%esi),%eax
0875a000 +0x0f0:  mov    -0x10(%ebp),%esi
0875a003 +0x0f3:  mul    %edi
0875a005 +0x0f5:  xor    %edi,%edi
0875a007 +0x0f7:  mov    %eax,-0x18(%ebp)
0875a00a +0x0fa:  mov    -0x20(%ebp),%eax
0875a00d +0x0fd:  add    %esi,-0x18(%ebp)
0875a010 +0x100:  mov    %edx,-0x14(%ebp)
0875a013 +0x103:  adc    %edi,-0x14(%ebp)
0875a016 +0x106:  xor    %edx,%edx
0875a018 +0x108:  mov    -0x14(%ebp),%edi
0875a01b +0x10b:  mov    %edi,-0x2c(%ebp)
0875a01e +0x10e:  mov    -0x2c(%ebp),%esi
0875a021 +0x111:  xor    %edi,%edi
0875a023 +0x113:  add    %ecx,%esi
0875a025 +0x115:  adc    %edx,%edi
0875a027 +0x117:  mov    %esi,%ecx
0875a029 +0x119:  mov    0x8(%ebp),%edx
0875a02c +0x11c:  add    %edi,%eax
0875a02e +0x11e:  mov    -0x18(%ebp),%esi
0875a031 +0x121:  mov    0xc(%ebp),%edi
0875a034 +0x124:  mov    %eax,-0x20(%ebp)
0875a037 +0x127:  mov    %esi,0x8(%edx)
0875a03a +0x12a:  mov    (%edi),%esi
0875a03c +0x12c:  mov    0x10(%ebp),%edi
0875a03f +0x12f:  mov    0xc(%edi),%eax
0875a042 +0x132:  xor    %edi,%edi
0875a044 +0x134:  mul    %esi
0875a046 +0x136:  mov    %eax,-0x10(%ebp)
0875a049 +0x139:  add    %ecx,-0x10(%ebp)
0875a04c +0x13c:  mov    %edx,-0xc(%ebp)
0875a04f +0x13f:  adc    %edi,-0xc(%ebp)
0875a052 +0x142:  xor    %edx,%edx
0875a054 +0x144:  mov    -0xc(%ebp),%eax
0875a057 +0x147:  xor    %edi,%edi
0875a059 +0x149:  mov    %eax,-0x2c(%ebp)
0875a05c +0x14c:  mov    -0x20(%ebp),%esi
0875a05f +0x14f:  mov    -0x2c(%ebp),%eax
0875a062 +0x152:  add    %eax,%esi
0875a064 +0x154:  mov    %esi,%ecx
0875a066 +0x156:  mov    0xc(%ebp),%esi
0875a069 +0x159:  adc    %edx,%edi
0875a06b +0x15b:  mov    %edi,-0x20(%ebp)
0875a06e +0x15e:  mov    0x4(%esi),%edi
0875a071 +0x161:  mov    0x10(%ebp),%esi
0875a074 +0x164:  mov    0x8(%esi),%eax
0875a077 +0x167:  mov    -0x10(%ebp),%esi
0875a07a +0x16a:  mul    %edi
0875a07c +0x16c:  xor    %edi,%edi
0875a07e +0x16e:  mov    %eax,-0x18(%ebp)
0875a081 +0x171:  add    %esi,-0x18(%ebp)
0875a084 +0x174:  mov    %edx,-0x14(%ebp)
0875a087 +0x177:  adc    %edi,-0x14(%ebp)
0875a08a +0x17a:  xor    %edx,%edx
0875a08c +0x17c:  mov    -0x14(%ebp),%edi
0875a08f +0x17f:  mov    %edi,-0x2c(%ebp)
0875a092 +0x182:  mov    -0x2c(%ebp),%esi
0875a095 +0x185:  xor    %edi,%edi
0875a097 +0x187:  add    %ecx,%esi
0875a099 +0x189:  adc    %edx,%edi
0875a09b +0x18b:  mov    %esi,%ecx
0875a09d +0x18d:  mov    -0x20(%ebp),%edx
0875a0a0 +0x190:  mov    0xc(%ebp),%esi
0875a0a3 +0x193:  add    %edi,%edx
0875a0a5 +0x195:  mov    0x8(%esi),%edi
0875a0a8 +0x198:  mov    0x10(%ebp),%esi
0875a0ab +0x19b:  mov    %edx,-0x20(%ebp)
0875a0ae +0x19e:  mov    0x4(%esi),%eax
0875a0b1 +0x1a1:  mov    -0x18(%ebp),%esi
0875a0b4 +0x1a4:  mul    %edi
0875a0b6 +0x1a6:  xor    %edi,%edi
0875a0b8 +0x1a8:  mov    %eax,-0x10(%ebp)
0875a0bb +0x1ab:  add    %esi,-0x10(%ebp)
0875a0be +0x1ae:  mov    %edx,-0xc(%ebp)
0875a0c1 +0x1b1:  adc    %edi,-0xc(%ebp)
0875a0c4 +0x1b4:  xor    %edx,%edx
0875a0c6 +0x1b6:  mov    -0xc(%ebp),%edi
0875a0c9 +0x1b9:  mov    %edi,-0x2c(%ebp)
0875a0cc +0x1bc:  mov    -0x2c(%ebp),%esi
0875a0cf +0x1bf:  xor    %edi,%edi
0875a0d1 +0x1c1:  add    %ecx,%esi
0875a0d3 +0x1c3:  adc    %edx,%edi
0875a0d5 +0x1c5:  mov    %esi,%ecx
0875a0d7 +0x1c7:  mov    -0x20(%ebp),%edx
0875a0da +0x1ca:  mov    0xc(%ebp),%esi
0875a0dd +0x1cd:  add    %edi,%edx
0875a0df +0x1cf:  mov    0xc(%esi),%edi
0875a0e2 +0x1d2:  mov    0x10(%ebp),%esi
0875a0e5 +0x1d5:  mov    %edx,-0x20(%ebp)
0875a0e8 +0x1d8:  mov    (%esi),%eax
0875a0ea +0x1da:  mov    -0x10(%ebp),%esi
0875a0ed +0x1dd:  mul    %edi
0875a0ef +0x1df:  xor    %edi,%edi
0875a0f1 +0x1e1:  mov    %eax,-0x18(%ebp)
0875a0f4 +0x1e4:  mov    -0x20(%ebp),%eax
0875a0f7 +0x1e7:  add    %esi,-0x18(%ebp)
0875a0fa +0x1ea:  mov    %edx,-0x14(%ebp)
0875a0fd +0x1ed:  adc    %edi,-0x14(%ebp)
0875a100 +0x1f0:  xor    %edx,%edx
0875a102 +0x1f2:  mov    -0x14(%ebp),%edi
0875a105 +0x1f5:  mov    %edi,-0x2c(%ebp)
0875a108 +0x1f8:  mov    -0x2c(%ebp),%esi
0875a10b +0x1fb:  xor    %edi,%edi
0875a10d +0x1fd:  add    %ecx,%esi
0875a10f +0x1ff:  adc    %edx,%edi
0875a111 +0x201:  mov    %esi,%ecx
0875a113 +0x203:  mov    0x8(%ebp),%edx
0875a116 +0x206:  mov    -0x18(%ebp),%esi
0875a119 +0x209:  add    %edi,%eax
0875a11b +0x20b:  mov    0xc(%ebp),%edi
0875a11e +0x20e:  mov    %eax,-0x10(%ebp)
0875a121 +0x211:  mov    %esi,0xc(%edx)
0875a124 +0x214:  mov    (%edi),%esi
0875a126 +0x216:  mov    0x10(%ebp),%edi
0875a129 +0x219:  mov    0x10(%edi),%eax
0875a12c +0x21c:  xor    %edi,%edi
0875a12e +0x21e:  mul    %esi
0875a130 +0x220:  mov    %eax,-0x18(%ebp)
0875a133 +0x223:  add    %ecx,-0x18(%ebp)
0875a136 +0x226:  mov    %edx,-0x14(%ebp)
0875a139 +0x229:  adc    %edi,-0x14(%ebp)
0875a13c +0x22c:  xor    %edx,%edx
0875a13e +0x22e:  mov    -0x14(%ebp),%eax
0875a141 +0x231:  xor    %edi,%edi
0875a143 +0x233:  mov    %eax,-0x2c(%ebp)
0875a146 +0x236:  mov    -0x10(%ebp),%esi
0875a149 +0x239:  mov    -0x2c(%ebp),%eax
0875a14c +0x23c:  add    %eax,%esi
0875a14e +0x23e:  mov    %esi,%ecx
0875a150 +0x240:  mov    0xc(%ebp),%esi
0875a153 +0x243:  adc    %edx,%edi
0875a155 +0x245:  mov    %edi,-0x20(%ebp)
0875a158 +0x248:  mov    0x4(%esi),%edi
0875a15b +0x24b:  mov    0x10(%ebp),%esi
0875a15e +0x24e:  mov    0xc(%esi),%eax
0875a161 +0x251:  mov    -0x18(%ebp),%esi
0875a164 +0x254:  mul    %edi
0875a166 +0x256:  xor    %edi,%edi
0875a168 +0x258:  mov    %eax,-0x10(%ebp)
0875a16b +0x25b:  add    %esi,-0x10(%ebp)
0875a16e +0x25e:  mov    %edx,-0xc(%ebp)
0875a171 +0x261:  adc    %edi,-0xc(%ebp)
0875a174 +0x264:  xor    %edx,%edx
0875a176 +0x266:  mov    -0xc(%ebp),%edi
0875a179 +0x269:  mov    %edi,-0x2c(%ebp)
0875a17c +0x26c:  mov    -0x2c(%ebp),%esi
0875a17f +0x26f:  xor    %edi,%edi
0875a181 +0x271:  add    %ecx,%esi
0875a183 +0x273:  adc    %edx,%edi
0875a185 +0x275:  mov    %esi,%ecx
0875a187 +0x277:  mov    -0x20(%ebp),%edx
0875a18a +0x27a:  mov    0xc(%ebp),%esi
0875a18d +0x27d:  add    %edi,%edx
0875a18f +0x27f:  mov    0x8(%esi),%edi
0875a192 +0x282:  mov    0x10(%ebp),%esi
0875a195 +0x285:  mov    %edx,-0x20(%ebp)
0875a198 +0x288:  mov    0x8(%esi),%eax
0875a19b +0x28b:  mov    -0x10(%ebp),%esi
0875a19e +0x28e:  mul    %edi
0875a1a0 +0x290:  xor    %edi,%edi
0875a1a2 +0x292:  mov    %eax,-0x18(%ebp)
0875a1a5 +0x295:  add    %esi,-0x18(%ebp)
0875a1a8 +0x298:  mov    %edx,-0x14(%ebp)
0875a1ab +0x29b:  adc    %edi,-0x14(%ebp)
0875a1ae +0x29e:  xor    %edx,%edx
0875a1b0 +0x2a0:  mov    -0x14(%ebp),%edi
0875a1b3 +0x2a3:  mov    %edi,-0x2c(%ebp)
0875a1b6 +0x2a6:  mov    -0x2c(%ebp),%esi
0875a1b9 +0x2a9:  xor    %edi,%edi
0875a1bb +0x2ab:  add    %ecx,%esi
0875a1bd +0x2ad:  adc    %edx,%edi
0875a1bf +0x2af:  mov    %esi,%ecx
0875a1c1 +0x2b1:  mov    -0x20(%ebp),%edx
0875a1c4 +0x2b4:  mov    0xc(%ebp),%esi
0875a1c7 +0x2b7:  add    %edi,%edx
0875a1c9 +0x2b9:  mov    0xc(%esi),%edi
0875a1cc +0x2bc:  mov    0x10(%ebp),%esi
0875a1cf +0x2bf:  mov    %edx,-0x20(%ebp)
0875a1d2 +0x2c2:  mov    0x4(%esi),%eax
0875a1d5 +0x2c5:  mov    -0x18(%ebp),%esi
0875a1d8 +0x2c8:  mul    %edi
0875a1da +0x2ca:  xor    %edi,%edi
0875a1dc +0x2cc:  mov    %eax,-0x10(%ebp)
0875a1df +0x2cf:  add    %esi,-0x10(%ebp)
0875a1e2 +0x2d2:  mov    %edx,-0xc(%ebp)
0875a1e5 +0x2d5:  adc    %edi,-0xc(%ebp)
0875a1e8 +0x2d8:  xor    %edx,%edx
0875a1ea +0x2da:  mov    -0xc(%ebp),%edi
0875a1ed +0x2dd:  mov    %edi,-0x2c(%ebp)
0875a1f0 +0x2e0:  mov    -0x2c(%ebp),%esi
0875a1f3 +0x2e3:  xor    %edi,%edi
0875a1f5 +0x2e5:  add    %ecx,%esi
0875a1f7 +0x2e7:  adc    %edx,%edi
0875a1f9 +0x2e9:  mov    %esi,%ecx
0875a1fb +0x2eb:  mov    -0x20(%ebp),%edx
0875a1fe +0x2ee:  mov    0xc(%ebp),%esi
0875a201 +0x2f1:  add    %edi,%edx
0875a203 +0x2f3:  mov    0x10(%esi),%edi
0875a206 +0x2f6:  mov    0x10(%ebp),%esi
0875a209 +0x2f9:  mov    %edx,-0x20(%ebp)
0875a20c +0x2fc:  mov    (%esi),%eax
0875a20e +0x2fe:  mov    -0x10(%ebp),%esi
0875a211 +0x301:  mul    %edi
0875a213 +0x303:  xor    %edi,%edi
0875a215 +0x305:  mov    %eax,-0x18(%ebp)
0875a218 +0x308:  add    %esi,-0x18(%ebp)
0875a21b +0x30b:  mov    %edx,-0x14(%ebp)
0875a21e +0x30e:  adc    %edi,-0x14(%ebp)
0875a221 +0x311:  xor    %edx,%edx
0875a223 +0x313:  mov    -0x14(%ebp),%edi
0875a226 +0x316:  mov    %edi,-0x2c(%ebp)
0875a229 +0x319:  mov    -0x2c(%ebp),%esi
0875a22c +0x31c:  xor    %edi,%edi
0875a22e +0x31e:  mov    -0x20(%ebp),%eax
0875a231 +0x321:  add    %ecx,%esi
0875a233 +0x323:  adc    %edx,%edi
0875a235 +0x325:  mov    %esi,%ecx
0875a237 +0x327:  mov    0x8(%ebp),%edx
0875a23a +0x32a:  mov    -0x18(%ebp),%esi
0875a23d +0x32d:  add    %edi,%eax
0875a23f +0x32f:  mov    0xc(%ebp),%edi
0875a242 +0x332:  mov    %eax,-0x20(%ebp)
0875a245 +0x335:  mov    %esi,0x10(%edx)
0875a248 +0x338:  mov    (%edi),%esi
0875a24a +0x33a:  mov    0x10(%ebp),%edi
0875a24d +0x33d:  mov    0x14(%edi),%eax
0875a250 +0x340:  xor    %edi,%edi
0875a252 +0x342:  mul    %esi
0875a254 +0x344:  mov    -0x20(%ebp),%esi
0875a257 +0x347:  mov    %eax,-0x10(%ebp)
0875a25a +0x34a:  add    %ecx,-0x10(%ebp)
0875a25d +0x34d:  mov    %edx,-0xc(%ebp)
0875a260 +0x350:  adc    %edi,-0xc(%ebp)
0875a263 +0x353:  xor    %edx,%edx
0875a265 +0x355:  mov    -0xc(%ebp),%eax
0875a268 +0x358:  xor    %edi,%edi
0875a26a +0x35a:  mov    %eax,-0x2c(%ebp)
0875a26d +0x35d:  mov    -0x2c(%ebp),%eax
0875a270 +0x360:  add    %eax,%esi
0875a272 +0x362:  mov    %esi,%ecx
0875a274 +0x364:  mov    0xc(%ebp),%esi
0875a277 +0x367:  adc    %edx,%edi
0875a279 +0x369:  mov    %edi,-0x20(%ebp)
0875a27c +0x36c:  mov    0x4(%esi),%edi
0875a27f +0x36f:  mov    0x10(%ebp),%esi
0875a282 +0x372:  mov    0x10(%esi),%eax
0875a285 +0x375:  mov    -0x10(%ebp),%esi
0875a288 +0x378:  mul    %edi
0875a28a +0x37a:  xor    %edi,%edi
0875a28c +0x37c:  mov    %eax,-0x18(%ebp)
0875a28f +0x37f:  add    %esi,-0x18(%ebp)
0875a292 +0x382:  mov    %edx,-0x14(%ebp)
0875a295 +0x385:  adc    %edi,-0x14(%ebp)
0875a298 +0x388:  xor    %edx,%edx
0875a29a +0x38a:  mov    -0x14(%ebp),%edi
0875a29d +0x38d:  mov    %edi,-0x2c(%ebp)
0875a2a0 +0x390:  mov    -0x2c(%ebp),%esi
0875a2a3 +0x393:  xor    %edi,%edi
0875a2a5 +0x395:  add    %ecx,%esi
0875a2a7 +0x397:  adc    %edx,%edi
0875a2a9 +0x399:  mov    %esi,%ecx
0875a2ab +0x39b:  mov    -0x20(%ebp),%edx
0875a2ae +0x39e:  mov    0xc(%ebp),%esi
0875a2b1 +0x3a1:  add    %edi,%edx
0875a2b3 +0x3a3:  mov    0x8(%esi),%edi
0875a2b6 +0x3a6:  mov    0x10(%ebp),%esi
0875a2b9 +0x3a9:  mov    %edx,-0x20(%ebp)
0875a2bc +0x3ac:  mov    0xc(%esi),%eax
0875a2bf +0x3af:  mov    -0x18(%ebp),%esi
0875a2c2 +0x3b2:  mul    %edi
0875a2c4 +0x3b4:  xor    %edi,%edi
0875a2c6 +0x3b6:  mov    %eax,-0x10(%ebp)
0875a2c9 +0x3b9:  add    %esi,-0x10(%ebp)
0875a2cc +0x3bc:  mov    %edx,-0xc(%ebp)
0875a2cf +0x3bf:  adc    %edi,-0xc(%ebp)
0875a2d2 +0x3c2:  xor    %edx,%edx
0875a2d4 +0x3c4:  mov    -0xc(%ebp),%edi
0875a2d7 +0x3c7:  mov    %edi,-0x2c(%ebp)
0875a2da +0x3ca:  mov    -0x2c(%ebp),%esi
0875a2dd +0x3cd:  xor    %edi,%edi
0875a2df +0x3cf:  add    %ecx,%esi
0875a2e1 +0x3d1:  adc    %edx,%edi
0875a2e3 +0x3d3:  mov    %esi,%ecx
0875a2e5 +0x3d5:  mov    -0x20(%ebp),%edx
0875a2e8 +0x3d8:  mov    0xc(%ebp),%esi
0875a2eb +0x3db:  add    %edi,%edx
0875a2ed +0x3dd:  mov    0xc(%esi),%edi
0875a2f0 +0x3e0:  mov    0x10(%ebp),%esi
0875a2f3 +0x3e3:  mov    %edx,-0x20(%ebp)
0875a2f6 +0x3e6:  mov    0x8(%esi),%eax
0875a2f9 +0x3e9:  mov    -0x10(%ebp),%esi
0875a2fc +0x3ec:  mul    %edi
0875a2fe +0x3ee:  xor    %edi,%edi
0875a300 +0x3f0:  mov    %eax,-0x18(%ebp)
0875a303 +0x3f3:  add    %esi,-0x18(%ebp)
0875a306 +0x3f6:  mov    %edx,-0x14(%ebp)
0875a309 +0x3f9:  adc    %edi,-0x14(%ebp)
0875a30c +0x3fc:  xor    %edx,%edx
0875a30e +0x3fe:  mov    -0x14(%ebp),%edi
0875a311 +0x401:  mov    %edi,-0x2c(%ebp)
0875a314 +0x404:  mov    -0x2c(%ebp),%esi
0875a317 +0x407:  xor    %edi,%edi
0875a319 +0x409:  add    %ecx,%esi
0875a31b +0x40b:  adc    %edx,%edi
0875a31d +0x40d:  mov    %esi,%ecx
0875a31f +0x40f:  mov    -0x20(%ebp),%edx
0875a322 +0x412:  mov    0xc(%ebp),%esi
0875a325 +0x415:  add    %edi,%edx
0875a327 +0x417:  mov    0x10(%esi),%edi
0875a32a +0x41a:  mov    0x10(%ebp),%esi
0875a32d +0x41d:  mov    %edx,-0x20(%ebp)
0875a330 +0x420:  mov    0x4(%esi),%eax
0875a333 +0x423:  mov    -0x18(%ebp),%esi
0875a336 +0x426:  mul    %edi
0875a338 +0x428:  xor    %edi,%edi
0875a33a +0x42a:  mov    %eax,-0x10(%ebp)
0875a33d +0x42d:  add    %esi,-0x10(%ebp)
0875a340 +0x430:  mov    %edx,-0xc(%ebp)
0875a343 +0x433:  adc    %edi,-0xc(%ebp)
0875a346 +0x436:  xor    %edx,%edx
0875a348 +0x438:  mov    -0xc(%ebp),%edi
0875a34b +0x43b:  mov    %edi,-0x2c(%ebp)
0875a34e +0x43e:  mov    -0x2c(%ebp),%esi
0875a351 +0x441:  xor    %edi,%edi
0875a353 +0x443:  add    %ecx,%esi
0875a355 +0x445:  adc    %edx,%edi
0875a357 +0x447:  mov    %esi,%ecx
0875a359 +0x449:  mov    -0x20(%ebp),%edx
0875a35c +0x44c:  mov    0xc(%ebp),%esi
0875a35f +0x44f:  add    %edi,%edx
0875a361 +0x451:  mov    0x14(%esi),%edi
0875a364 +0x454:  mov    0x10(%ebp),%esi
0875a367 +0x457:  mov    %edx,-0x20(%ebp)
0875a36a +0x45a:  mov    (%esi),%eax
0875a36c +0x45c:  mov    -0x10(%ebp),%esi
0875a36f +0x45f:  mul    %edi
0875a371 +0x461:  xor    %edi,%edi
0875a373 +0x463:  mov    %eax,-0x18(%ebp)
0875a376 +0x466:  add    %esi,-0x18(%ebp)
0875a379 +0x469:  mov    %edx,-0x14(%ebp)
0875a37c +0x46c:  adc    %edi,-0x14(%ebp)
0875a37f +0x46f:  xor    %edx,%edx
0875a381 +0x471:  mov    -0x14(%ebp),%edi
0875a384 +0x474:  mov    %edi,-0x2c(%ebp)
0875a387 +0x477:  mov    -0x2c(%ebp),%esi
0875a38a +0x47a:  xor    %edi,%edi
0875a38c +0x47c:  mov    -0x20(%ebp),%eax
0875a38f +0x47f:  add    %ecx,%esi
0875a391 +0x481:  adc    %edx,%edi
0875a393 +0x483:  mov    %esi,%ecx
0875a395 +0x485:  mov    0x8(%ebp),%edx
0875a398 +0x488:  mov    -0x18(%ebp),%esi
0875a39b +0x48b:  add    %edi,%eax
0875a39d +0x48d:  mov    0xc(%ebp),%edi
0875a3a0 +0x490:  mov    %eax,-0x10(%ebp)
0875a3a3 +0x493:  mov    %esi,0x14(%edx)
0875a3a6 +0x496:  mov    (%edi),%esi
0875a3a8 +0x498:  mov    0x10(%ebp),%edi
0875a3ab +0x49b:  mov    0x18(%edi),%eax
0875a3ae +0x49e:  xor    %edi,%edi
0875a3b0 +0x4a0:  mul    %esi
0875a3b2 +0x4a2:  mov    -0x10(%ebp),%esi
0875a3b5 +0x4a5:  mov    %eax,-0x18(%ebp)
0875a3b8 +0x4a8:  add    %ecx,-0x18(%ebp)
0875a3bb +0x4ab:  mov    %edx,-0x14(%ebp)
0875a3be +0x4ae:  adc    %edi,-0x14(%ebp)
0875a3c1 +0x4b1:  xor    %edx,%edx
0875a3c3 +0x4b3:  mov    -0x14(%ebp),%eax
0875a3c6 +0x4b6:  xor    %edi,%edi
0875a3c8 +0x4b8:  mov    %eax,-0x2c(%ebp)
0875a3cb +0x4bb:  mov    -0x2c(%ebp),%eax
0875a3ce +0x4be:  add    %eax,%esi
0875a3d0 +0x4c0:  mov    %esi,%ecx
0875a3d2 +0x4c2:  mov    0xc(%ebp),%esi
0875a3d5 +0x4c5:  adc    %edx,%edi
0875a3d7 +0x4c7:  mov    %edi,-0x20(%ebp)
0875a3da +0x4ca:  mov    0x4(%esi),%edi
0875a3dd +0x4cd:  mov    0x10(%ebp),%esi
0875a3e0 +0x4d0:  mov    0x14(%esi),%eax
0875a3e3 +0x4d3:  mov    -0x18(%ebp),%esi
0875a3e6 +0x4d6:  mul    %edi
0875a3e8 +0x4d8:  xor    %edi,%edi
0875a3ea +0x4da:  mov    %eax,-0x10(%ebp)
0875a3ed +0x4dd:  add    %esi,-0x10(%ebp)
0875a3f0 +0x4e0:  mov    %edx,-0xc(%ebp)
0875a3f3 +0x4e3:  adc    %edi,-0xc(%ebp)
0875a3f6 +0x4e6:  xor    %edx,%edx
0875a3f8 +0x4e8:  mov    -0xc(%ebp),%edi
0875a3fb +0x4eb:  mov    %edi,-0x2c(%ebp)
0875a3fe +0x4ee:  mov    -0x2c(%ebp),%esi
0875a401 +0x4f1:  xor    %edi,%edi
0875a403 +0x4f3:  add    %ecx,%esi
0875a405 +0x4f5:  adc    %edx,%edi
0875a407 +0x4f7:  mov    %esi,%ecx
0875a409 +0x4f9:  mov    -0x20(%ebp),%edx
0875a40c +0x4fc:  mov    0xc(%ebp),%esi
0875a40f +0x4ff:  add    %edi,%edx
0875a411 +0x501:  mov    0x8(%esi),%edi
0875a414 +0x504:  mov    0x10(%ebp),%esi
0875a417 +0x507:  mov    %edx,-0x20(%ebp)
0875a41a +0x50a:  mov    0x10(%esi),%eax
0875a41d +0x50d:  mov    -0x10(%ebp),%esi
0875a420 +0x510:  mul    %edi
0875a422 +0x512:  xor    %edi,%edi
0875a424 +0x514:  mov    %eax,-0x18(%ebp)
0875a427 +0x517:  add    %esi,-0x18(%ebp)
0875a42a +0x51a:  mov    %edx,-0x14(%ebp)
0875a42d +0x51d:  adc    %edi,-0x14(%ebp)
0875a430 +0x520:  xor    %edx,%edx
0875a432 +0x522:  mov    -0x14(%ebp),%edi
0875a435 +0x525:  mov    %edi,-0x2c(%ebp)
0875a438 +0x528:  mov    -0x2c(%ebp),%esi
0875a43b +0x52b:  xor    %edi,%edi
0875a43d +0x52d:  add    %ecx,%esi
0875a43f +0x52f:  adc    %edx,%edi
0875a441 +0x531:  mov    %esi,%ecx
0875a443 +0x533:  mov    -0x20(%ebp),%edx
0875a446 +0x536:  mov    0xc(%ebp),%esi
0875a449 +0x539:  add    %edi,%edx
0875a44b +0x53b:  mov    0xc(%esi),%edi
0875a44e +0x53e:  mov    0x10(%ebp),%esi
0875a451 +0x541:  mov    %edx,-0x20(%ebp)
0875a454 +0x544:  mov    0xc(%esi),%eax
0875a457 +0x547:  mov    -0x18(%ebp),%esi
0875a45a +0x54a:  mul    %edi
0875a45c +0x54c:  xor    %edi,%edi
0875a45e +0x54e:  mov    %eax,-0x10(%ebp)
0875a461 +0x551:  add    %esi,-0x10(%ebp)
0875a464 +0x554:  mov    %edx,-0xc(%ebp)
0875a467 +0x557:  adc    %edi,-0xc(%ebp)
0875a46a +0x55a:  xor    %edx,%edx
0875a46c +0x55c:  mov    -0xc(%ebp),%edi
0875a46f +0x55f:  mov    %edi,-0x2c(%ebp)
0875a472 +0x562:  mov    -0x2c(%ebp),%esi
0875a475 +0x565:  xor    %edi,%edi
0875a477 +0x567:  add    %ecx,%esi
0875a479 +0x569:  adc    %edx,%edi
0875a47b +0x56b:  mov    %esi,%ecx
0875a47d +0x56d:  mov    -0x20(%ebp),%edx
0875a480 +0x570:  mov    0xc(%ebp),%esi
0875a483 +0x573:  add    %edi,%edx
0875a485 +0x575:  mov    0x10(%esi),%edi
0875a488 +0x578:  mov    0x10(%ebp),%esi
0875a48b +0x57b:  mov    %edx,-0x20(%ebp)
0875a48e +0x57e:  mov    0x8(%esi),%eax
0875a491 +0x581:  mov    -0x10(%ebp),%esi
0875a494 +0x584:  mul    %edi
0875a496 +0x586:  xor    %edi,%edi
0875a498 +0x588:  mov    %eax,-0x18(%ebp)
0875a49b +0x58b:  add    %esi,-0x18(%ebp)
0875a49e +0x58e:  mov    %edx,-0x14(%ebp)
0875a4a1 +0x591:  adc    %edi,-0x14(%ebp)
0875a4a4 +0x594:  xor    %edx,%edx
0875a4a6 +0x596:  mov    -0x14(%ebp),%edi
0875a4a9 +0x599:  mov    %edi,-0x2c(%ebp)
0875a4ac +0x59c:  mov    -0x2c(%ebp),%esi
0875a4af +0x59f:  xor    %edi,%edi
0875a4b1 +0x5a1:  add    %ecx,%esi
0875a4b3 +0x5a3:  adc    %edx,%edi
0875a4b5 +0x5a5:  mov    %esi,%ecx
0875a4b7 +0x5a7:  mov    -0x20(%ebp),%edx
0875a4ba +0x5aa:  mov    0xc(%ebp),%esi
0875a4bd +0x5ad:  add    %edi,%edx
0875a4bf +0x5af:  mov    0x14(%esi),%edi
0875a4c2 +0x5b2:  mov    0x10(%ebp),%esi
0875a4c5 +0x5b5:  mov    %edx,-0x20(%ebp)
0875a4c8 +0x5b8:  mov    0x4(%esi),%eax
0875a4cb +0x5bb:  mov    -0x18(%ebp),%esi
0875a4ce +0x5be:  mul    %edi
0875a4d0 +0x5c0:  xor    %edi,%edi
0875a4d2 +0x5c2:  mov    %eax,-0x10(%ebp)
0875a4d5 +0x5c5:  add    %esi,-0x10(%ebp)
0875a4d8 +0x5c8:  mov    %edx,-0xc(%ebp)
0875a4db +0x5cb:  adc    %edi,-0xc(%ebp)
0875a4de +0x5ce:  xor    %edx,%edx
0875a4e0 +0x5d0:  mov    -0xc(%ebp),%edi
0875a4e3 +0x5d3:  mov    %edi,-0x2c(%ebp)
0875a4e6 +0x5d6:  mov    -0x2c(%ebp),%esi
0875a4e9 +0x5d9:  xor    %edi,%edi
0875a4eb +0x5db:  add    %ecx,%esi
0875a4ed +0x5dd:  adc    %edx,%edi
0875a4ef +0x5df:  mov    %esi,%ecx
0875a4f1 +0x5e1:  mov    -0x20(%ebp),%edx
0875a4f4 +0x5e4:  mov    0xc(%ebp),%esi
0875a4f7 +0x5e7:  add    %edi,%edx
0875a4f9 +0x5e9:  mov    0x18(%esi),%edi
0875a4fc +0x5ec:  mov    0x10(%ebp),%esi
0875a4ff +0x5ef:  mov    %edx,-0x20(%ebp)
0875a502 +0x5f2:  mov    (%esi),%eax
0875a504 +0x5f4:  mov    -0x10(%ebp),%esi
0875a507 +0x5f7:  mul    %edi
0875a509 +0x5f9:  xor    %edi,%edi
0875a50b +0x5fb:  mov    %eax,-0x18(%ebp)
0875a50e +0x5fe:  mov    -0x20(%ebp),%eax
0875a511 +0x601:  add    %esi,-0x18(%ebp)
0875a514 +0x604:  mov    %edx,-0x14(%ebp)
0875a517 +0x607:  adc    %edi,-0x14(%ebp)
0875a51a +0x60a:  xor    %edx,%edx
0875a51c +0x60c:  mov    -0x14(%ebp),%edi
0875a51f +0x60f:  mov    %edi,-0x2c(%ebp)
0875a522 +0x612:  mov    -0x2c(%ebp),%esi
0875a525 +0x615:  xor    %edi,%edi
0875a527 +0x617:  add    %ecx,%esi
0875a529 +0x619:  adc    %edx,%edi
0875a52b +0x61b:  mov    %esi,%ecx
0875a52d +0x61d:  mov    0x8(%ebp),%edx
0875a530 +0x620:  add    %edi,%eax
0875a532 +0x622:  mov    -0x18(%ebp),%esi
0875a535 +0x625:  mov    0xc(%ebp),%edi
0875a538 +0x628:  mov    %eax,-0x20(%ebp)
0875a53b +0x62b:  mov    %esi,0x18(%edx)
0875a53e +0x62e:  mov    (%edi),%esi
0875a540 +0x630:  mov    0x10(%ebp),%edi
0875a543 +0x633:  mov    0x1c(%edi),%eax
0875a546 +0x636:  xor    %edi,%edi
0875a548 +0x638:  mul    %esi
0875a54a +0x63a:  mov    %eax,-0x10(%ebp)
0875a54d +0x63d:  add    %ecx,-0x10(%ebp)
0875a550 +0x640:  mov    %edx,-0xc(%ebp)
0875a553 +0x643:  adc    %edi,-0xc(%ebp)
0875a556 +0x646:  xor    %edx,%edx
0875a558 +0x648:  mov    -0xc(%ebp),%eax
0875a55b +0x64b:  xor    %edi,%edi
0875a55d +0x64d:  mov    %eax,-0x2c(%ebp)
0875a560 +0x650:  mov    -0x20(%ebp),%esi
0875a563 +0x653:  mov    -0x2c(%ebp),%eax
0875a566 +0x656:  add    %eax,%esi
0875a568 +0x658:  mov    %esi,%ecx
0875a56a +0x65a:  mov    0xc(%ebp),%esi
0875a56d +0x65d:  adc    %edx,%edi
0875a56f +0x65f:  mov    %edi,-0x20(%ebp)
0875a572 +0x662:  mov    0x4(%esi),%edi
0875a575 +0x665:  mov    0x10(%ebp),%esi
0875a578 +0x668:  mov    0x18(%esi),%eax
0875a57b +0x66b:  mov    -0x10(%ebp),%esi
0875a57e +0x66e:  mul    %edi
0875a580 +0x670:  xor    %edi,%edi
0875a582 +0x672:  mov    %eax,-0x18(%ebp)
0875a585 +0x675:  add    %esi,-0x18(%ebp)
0875a588 +0x678:  mov    %edx,-0x14(%ebp)
0875a58b +0x67b:  adc    %edi,-0x14(%ebp)
0875a58e +0x67e:  xor    %edx,%edx
0875a590 +0x680:  mov    -0x14(%ebp),%edi
0875a593 +0x683:  mov    %edi,-0x2c(%ebp)
0875a596 +0x686:  mov    -0x2c(%ebp),%esi
0875a599 +0x689:  xor    %edi,%edi
0875a59b +0x68b:  add    %ecx,%esi
0875a59d +0x68d:  adc    %edx,%edi
0875a59f +0x68f:  mov    %esi,%ecx
0875a5a1 +0x691:  mov    -0x20(%ebp),%edx
0875a5a4 +0x694:  mov    0xc(%ebp),%esi
0875a5a7 +0x697:  add    %edi,%edx
0875a5a9 +0x699:  mov    0x8(%esi),%edi
0875a5ac +0x69c:  mov    0x10(%ebp),%esi
0875a5af +0x69f:  mov    %edx,-0x20(%ebp)
0875a5b2 +0x6a2:  mov    0x14(%esi),%eax
0875a5b5 +0x6a5:  mov    -0x18(%ebp),%esi
0875a5b8 +0x6a8:  mul    %edi
0875a5ba +0x6aa:  xor    %edi,%edi
0875a5bc +0x6ac:  mov    %eax,-0x10(%ebp)
0875a5bf +0x6af:  add    %esi,-0x10(%ebp)
0875a5c2 +0x6b2:  mov    %edx,-0xc(%ebp)
0875a5c5 +0x6b5:  adc    %edi,-0xc(%ebp)
0875a5c8 +0x6b8:  xor    %edx,%edx
0875a5ca +0x6ba:  mov    -0xc(%ebp),%edi
0875a5cd +0x6bd:  mov    %edi,-0x2c(%ebp)
0875a5d0 +0x6c0:  mov    -0x2c(%ebp),%esi
0875a5d3 +0x6c3:  xor    %edi,%edi
0875a5d5 +0x6c5:  add    %ecx,%esi
0875a5d7 +0x6c7:  adc    %edx,%edi
0875a5d9 +0x6c9:  mov    %esi,%ecx
0875a5db +0x6cb:  mov    -0x20(%ebp),%edx
0875a5de +0x6ce:  mov    0xc(%ebp),%esi
0875a5e1 +0x6d1:  add    %edi,%edx
0875a5e3 +0x6d3:  mov    0xc(%esi),%edi
0875a5e6 +0x6d6:  mov    0x10(%ebp),%esi
0875a5e9 +0x6d9:  mov    %edx,-0x20(%ebp)
0875a5ec +0x6dc:  mov    0x10(%esi),%eax
0875a5ef +0x6df:  mov    -0x10(%ebp),%esi
0875a5f2 +0x6e2:  mul    %edi
0875a5f4 +0x6e4:  xor    %edi,%edi
0875a5f6 +0x6e6:  mov    %eax,-0x18(%ebp)
0875a5f9 +0x6e9:  add    %esi,-0x18(%ebp)
0875a5fc +0x6ec:  mov    %edx,-0x14(%ebp)
0875a5ff +0x6ef:  adc    %edi,-0x14(%ebp)
0875a602 +0x6f2:  xor    %edx,%edx
0875a604 +0x6f4:  mov    -0x14(%ebp),%edi
0875a607 +0x6f7:  mov    %edi,-0x2c(%ebp)
0875a60a +0x6fa:  mov    -0x2c(%ebp),%esi
0875a60d +0x6fd:  xor    %edi,%edi
0875a60f +0x6ff:  add    %ecx,%esi
0875a611 +0x701:  adc    %edx,%edi
0875a613 +0x703:  mov    %esi,%ecx
0875a615 +0x705:  mov    -0x20(%ebp),%edx
0875a618 +0x708:  mov    0xc(%ebp),%esi
0875a61b +0x70b:  add    %edi,%edx
0875a61d +0x70d:  mov    0x10(%esi),%edi
0875a620 +0x710:  mov    0x10(%ebp),%esi
0875a623 +0x713:  mov    %edx,-0x20(%ebp)
0875a626 +0x716:  mov    0xc(%esi),%eax
0875a629 +0x719:  mov    -0x18(%ebp),%esi
0875a62c +0x71c:  mul    %edi
0875a62e +0x71e:  xor    %edi,%edi
0875a630 +0x720:  mov    %eax,-0x10(%ebp)
0875a633 +0x723:  add    %esi,-0x10(%ebp)
0875a636 +0x726:  mov    %edx,-0xc(%ebp)
0875a639 +0x729:  adc    %edi,-0xc(%ebp)
0875a63c +0x72c:  xor    %edx,%edx
0875a63e +0x72e:  mov    -0xc(%ebp),%edi
0875a641 +0x731:  mov    %edi,-0x2c(%ebp)
0875a644 +0x734:  mov    -0x2c(%ebp),%esi
0875a647 +0x737:  xor    %edi,%edi
0875a649 +0x739:  add    %ecx,%esi
0875a64b +0x73b:  adc    %edx,%edi
0875a64d +0x73d:  mov    %esi,%ecx
0875a64f +0x73f:  mov    -0x20(%ebp),%edx
0875a652 +0x742:  mov    0xc(%ebp),%esi
0875a655 +0x745:  add    %edi,%edx
0875a657 +0x747:  mov    0x14(%esi),%edi
0875a65a +0x74a:  mov    0x10(%ebp),%esi
0875a65d +0x74d:  mov    %edx,-0x20(%ebp)
0875a660 +0x750:  mov    0x8(%esi),%eax
0875a663 +0x753:  mov    -0x10(%ebp),%esi
0875a666 +0x756:  mul    %edi
0875a668 +0x758:  xor    %edi,%edi
0875a66a +0x75a:  mov    %eax,-0x18(%ebp)
0875a66d +0x75d:  add    %esi,-0x18(%ebp)
0875a670 +0x760:  mov    %edx,-0x14(%ebp)
0875a673 +0x763:  adc    %edi,-0x14(%ebp)
0875a676 +0x766:  xor    %edx,%edx
0875a678 +0x768:  mov    -0x14(%ebp),%edi
0875a67b +0x76b:  mov    %edi,-0x2c(%ebp)
0875a67e +0x76e:  mov    -0x2c(%ebp),%esi
0875a681 +0x771:  xor    %edi,%edi
0875a683 +0x773:  add    %ecx,%esi
0875a685 +0x775:  adc    %edx,%edi
0875a687 +0x777:  mov    %esi,%ecx
0875a689 +0x779:  mov    -0x20(%ebp),%edx
0875a68c +0x77c:  mov    0xc(%ebp),%esi
0875a68f +0x77f:  add    %edi,%edx
0875a691 +0x781:  mov    0x18(%esi),%edi
0875a694 +0x784:  mov    0x10(%ebp),%esi
0875a697 +0x787:  mov    %edx,-0x20(%ebp)
0875a69a +0x78a:  mov    0x4(%esi),%eax
0875a69d +0x78d:  mov    -0x18(%ebp),%esi
0875a6a0 +0x790:  mul    %edi
0875a6a2 +0x792:  xor    %edi,%edi
0875a6a4 +0x794:  mov    %eax,-0x10(%ebp)
0875a6a7 +0x797:  add    %esi,-0x10(%ebp)
0875a6aa +0x79a:  mov    %edx,-0xc(%ebp)
0875a6ad +0x79d:  adc    %edi,-0xc(%ebp)
0875a6b0 +0x7a0:  xor    %edx,%edx
0875a6b2 +0x7a2:  mov    -0xc(%ebp),%edi
0875a6b5 +0x7a5:  mov    %edi,-0x2c(%ebp)
0875a6b8 +0x7a8:  mov    -0x2c(%ebp),%esi
0875a6bb +0x7ab:  xor    %edi,%edi
0875a6bd +0x7ad:  add    %ecx,%esi
0875a6bf +0x7af:  adc    %edx,%edi
0875a6c1 +0x7b1:  mov    %esi,%ecx
0875a6c3 +0x7b3:  mov    -0x20(%ebp),%edx
0875a6c6 +0x7b6:  mov    0xc(%ebp),%esi
0875a6c9 +0x7b9:  add    %edi,%edx
0875a6cb +0x7bb:  mov    0x1c(%esi),%edi
0875a6ce +0x7be:  mov    0x10(%ebp),%esi
0875a6d1 +0x7c1:  mov    %edx,-0x20(%ebp)
0875a6d4 +0x7c4:  mov    (%esi),%eax
0875a6d6 +0x7c6:  mov    -0x10(%ebp),%esi
0875a6d9 +0x7c9:  mul    %edi
0875a6db +0x7cb:  xor    %edi,%edi
0875a6dd +0x7cd:  mov    %eax,-0x18(%ebp)
0875a6e0 +0x7d0:  mov    -0x20(%ebp),%eax
0875a6e3 +0x7d3:  add    %esi,-0x18(%ebp)
0875a6e6 +0x7d6:  mov    %edx,-0x14(%ebp)
0875a6e9 +0x7d9:  adc    %edi,-0x14(%ebp)
0875a6ec +0x7dc:  xor    %edx,%edx
0875a6ee +0x7de:  mov    -0x14(%ebp),%edi
0875a6f1 +0x7e1:  mov    %edi,-0x2c(%ebp)
0875a6f4 +0x7e4:  mov    -0x2c(%ebp),%esi
0875a6f7 +0x7e7:  xor    %edi,%edi
0875a6f9 +0x7e9:  add    %ecx,%esi
0875a6fb +0x7eb:  adc    %edx,%edi
0875a6fd +0x7ed:  mov    %esi,%ecx
0875a6ff +0x7ef:  mov    0x8(%ebp),%edx
0875a702 +0x7f2:  mov    -0x18(%ebp),%esi
0875a705 +0x7f5:  add    %edi,%eax
0875a707 +0x7f7:  mov    0xc(%ebp),%edi
0875a70a +0x7fa:  mov    %eax,-0x10(%ebp)
0875a70d +0x7fd:  mov    %esi,0x1c(%edx)
0875a710 +0x800:  mov    0x4(%edi),%esi
0875a713 +0x803:  mov    0x10(%ebp),%edi
0875a716 +0x806:  mov    0x1c(%edi),%eax
0875a719 +0x809:  xor    %edi,%edi
0875a71b +0x80b:  mul    %esi
0875a71d +0x80d:  mov    %eax,-0x18(%ebp)
0875a720 +0x810:  add    %ecx,-0x18(%ebp)
0875a723 +0x813:  mov    %edx,-0x14(%ebp)
0875a726 +0x816:  adc    %edi,-0x14(%ebp)
0875a729 +0x819:  xor    %edx,%edx
0875a72b +0x81b:  mov    -0x14(%ebp),%eax
0875a72e +0x81e:  xor    %edi,%edi
0875a730 +0x820:  mov    %eax,-0x2c(%ebp)
0875a733 +0x823:  mov    -0x10(%ebp),%esi
0875a736 +0x826:  mov    -0x2c(%ebp),%eax
0875a739 +0x829:  add    %eax,%esi
0875a73b +0x82b:  mov    %esi,%ecx
0875a73d +0x82d:  mov    0xc(%ebp),%esi
0875a740 +0x830:  adc    %edx,%edi
0875a742 +0x832:  mov    %edi,-0x20(%ebp)
0875a745 +0x835:  mov    0x8(%esi),%edi
0875a748 +0x838:  mov    0x10(%ebp),%esi
0875a74b +0x83b:  mov    0x18(%esi),%eax
0875a74e +0x83e:  mov    -0x18(%ebp),%esi
0875a751 +0x841:  mul    %edi
0875a753 +0x843:  xor    %edi,%edi
0875a755 +0x845:  mov    %eax,-0x10(%ebp)
0875a758 +0x848:  add    %esi,-0x10(%ebp)
0875a75b +0x84b:  mov    %edx,-0xc(%ebp)
0875a75e +0x84e:  adc    %edi,-0xc(%ebp)
0875a761 +0x851:  xor    %edx,%edx
0875a763 +0x853:  mov    -0xc(%ebp),%edi
0875a766 +0x856:  mov    %edi,-0x2c(%ebp)
0875a769 +0x859:  mov    -0x2c(%ebp),%esi
0875a76c +0x85c:  xor    %edi,%edi
0875a76e +0x85e:  add    %ecx,%esi
0875a770 +0x860:  adc    %edx,%edi
0875a772 +0x862:  mov    %esi,%ecx
0875a774 +0x864:  mov    -0x20(%ebp),%edx
0875a777 +0x867:  mov    0xc(%ebp),%esi
0875a77a +0x86a:  add    %edi,%edx
0875a77c +0x86c:  mov    0xc(%esi),%edi
0875a77f +0x86f:  mov    0x10(%ebp),%esi
0875a782 +0x872:  mov    %edx,-0x20(%ebp)
0875a785 +0x875:  mov    0x14(%esi),%eax
0875a788 +0x878:  mov    -0x10(%ebp),%esi
0875a78b +0x87b:  mul    %edi
0875a78d +0x87d:  xor    %edi,%edi
0875a78f +0x87f:  mov    %eax,-0x18(%ebp)
0875a792 +0x882:  add    %esi,-0x18(%ebp)
0875a795 +0x885:  mov    %edx,-0x14(%ebp)
0875a798 +0x888:  adc    %edi,-0x14(%ebp)
0875a79b +0x88b:  xor    %edx,%edx
0875a79d +0x88d:  mov    -0x14(%ebp),%edi
0875a7a0 +0x890:  mov    %edi,-0x2c(%ebp)
0875a7a3 +0x893:  mov    -0x2c(%ebp),%esi
0875a7a6 +0x896:  xor    %edi,%edi
0875a7a8 +0x898:  add    %ecx,%esi
0875a7aa +0x89a:  adc    %edx,%edi
0875a7ac +0x89c:  mov    %esi,%ecx
0875a7ae +0x89e:  mov    -0x20(%ebp),%edx
0875a7b1 +0x8a1:  mov    0xc(%ebp),%esi
0875a7b4 +0x8a4:  add    %edi,%edx
0875a7b6 +0x8a6:  mov    0x10(%esi),%edi
0875a7b9 +0x8a9:  mov    0x10(%ebp),%esi
0875a7bc +0x8ac:  mov    %edx,-0x20(%ebp)
0875a7bf +0x8af:  mov    0x10(%esi),%eax
0875a7c2 +0x8b2:  mov    -0x18(%ebp),%esi
0875a7c5 +0x8b5:  mul    %edi
0875a7c7 +0x8b7:  xor    %edi,%edi
0875a7c9 +0x8b9:  mov    %eax,-0x10(%ebp)
0875a7cc +0x8bc:  add    %esi,-0x10(%ebp)
0875a7cf +0x8bf:  mov    %edx,-0xc(%ebp)
0875a7d2 +0x8c2:  adc    %edi,-0xc(%ebp)
0875a7d5 +0x8c5:  xor    %edx,%edx
0875a7d7 +0x8c7:  mov    -0xc(%ebp),%edi
0875a7da +0x8ca:  mov    %edi,-0x2c(%ebp)
0875a7dd +0x8cd:  mov    -0x2c(%ebp),%esi
0875a7e0 +0x8d0:  xor    %edi,%edi
0875a7e2 +0x8d2:  add    %ecx,%esi
0875a7e4 +0x8d4:  adc    %edx,%edi
0875a7e6 +0x8d6:  mov    %esi,%ecx
0875a7e8 +0x8d8:  mov    -0x20(%ebp),%edx
0875a7eb +0x8db:  mov    0xc(%ebp),%esi
0875a7ee +0x8de:  add    %edi,%edx
0875a7f0 +0x8e0:  mov    0x14(%esi),%edi
0875a7f3 +0x8e3:  mov    0x10(%ebp),%esi
0875a7f6 +0x8e6:  mov    %edx,-0x20(%ebp)
0875a7f9 +0x8e9:  mov    0xc(%esi),%eax
0875a7fc +0x8ec:  mov    -0x10(%ebp),%esi
0875a7ff +0x8ef:  mul    %edi
0875a801 +0x8f1:  xor    %edi,%edi
0875a803 +0x8f3:  mov    %eax,-0x18(%ebp)
0875a806 +0x8f6:  add    %esi,-0x18(%ebp)
0875a809 +0x8f9:  mov    %edx,-0x14(%ebp)
0875a80c +0x8fc:  adc    %edi,-0x14(%ebp)
0875a80f +0x8ff:  xor    %edx,%edx
0875a811 +0x901:  mov    -0x14(%ebp),%edi
0875a814 +0x904:  mov    %edi,-0x2c(%ebp)
0875a817 +0x907:  mov    -0x2c(%ebp),%esi
0875a81a +0x90a:  xor    %edi,%edi
0875a81c +0x90c:  add    %ecx,%esi
0875a81e +0x90e:  adc    %edx,%edi
0875a820 +0x910:  mov    %esi,%ecx
0875a822 +0x912:  mov    -0x20(%ebp),%edx
0875a825 +0x915:  mov    0xc(%ebp),%esi
0875a828 +0x918:  add    %edi,%edx
0875a82a +0x91a:  mov    0x18(%esi),%edi
0875a82d +0x91d:  mov    0x10(%ebp),%esi
0875a830 +0x920:  mov    %edx,-0x20(%ebp)
0875a833 +0x923:  mov    0x8(%esi),%eax
0875a836 +0x926:  mov    -0x18(%ebp),%esi
0875a839 +0x929:  mul    %edi
0875a83b +0x92b:  xor    %edi,%edi
0875a83d +0x92d:  mov    %eax,-0x10(%ebp)
0875a840 +0x930:  add    %esi,-0x10(%ebp)
0875a843 +0x933:  mov    %edx,-0xc(%ebp)
0875a846 +0x936:  adc    %edi,-0xc(%ebp)
0875a849 +0x939:  xor    %edx,%edx
0875a84b +0x93b:  mov    -0xc(%ebp),%edi
0875a84e +0x93e:  mov    %edi,-0x2c(%ebp)
0875a851 +0x941:  mov    -0x2c(%ebp),%esi
0875a854 +0x944:  xor    %edi,%edi
0875a856 +0x946:  add    %ecx,%esi
0875a858 +0x948:  adc    %edx,%edi
0875a85a +0x94a:  mov    %esi,%ecx
0875a85c +0x94c:  mov    -0x20(%ebp),%edx
0875a85f +0x94f:  mov    0xc(%ebp),%esi
0875a862 +0x952:  add    %edi,%edx
0875a864 +0x954:  mov    0x1c(%esi),%edi
0875a867 +0x957:  mov    0x10(%ebp),%esi
0875a86a +0x95a:  mov    %edx,-0x20(%ebp)
0875a86d +0x95d:  mov    0x4(%esi),%eax
0875a870 +0x960:  mov    -0x10(%ebp),%esi
0875a873 +0x963:  mul    %edi
0875a875 +0x965:  xor    %edi,%edi
0875a877 +0x967:  mov    %eax,-0x18(%ebp)
0875a87a +0x96a:  add    %esi,-0x18(%ebp)
0875a87d +0x96d:  mov    %edx,-0x14(%ebp)
0875a880 +0x970:  adc    %edi,-0x14(%ebp)
0875a883 +0x973:  xor    %edx,%edx
0875a885 +0x975:  mov    -0x14(%ebp),%edi
0875a888 +0x978:  mov    %edi,-0x2c(%ebp)
0875a88b +0x97b:  mov    -0x2c(%ebp),%esi
0875a88e +0x97e:  xor    %edi,%edi
0875a890 +0x980:  mov    -0x20(%ebp),%eax
0875a893 +0x983:  add    %ecx,%esi
0875a895 +0x985:  adc    %edx,%edi
0875a897 +0x987:  mov    %esi,%ecx
0875a899 +0x989:  mov    0x8(%ebp),%edx
0875a89c +0x98c:  mov    -0x18(%ebp),%esi
0875a89f +0x98f:  add    %edi,%eax
0875a8a1 +0x991:  mov    0xc(%ebp),%edi
0875a8a4 +0x994:  mov    %eax,-0x20(%ebp)
0875a8a7 +0x997:  mov    %esi,0x20(%edx)
0875a8aa +0x99a:  mov    0x8(%edi),%esi
0875a8ad +0x99d:  mov    0x10(%ebp),%edi
0875a8b0 +0x9a0:  mov    0x1c(%edi),%eax
0875a8b3 +0x9a3:  xor    %edi,%edi
0875a8b5 +0x9a5:  mul    %esi
0875a8b7 +0x9a7:  mov    -0x20(%ebp),%esi
0875a8ba +0x9aa:  mov    %eax,-0x10(%ebp)
0875a8bd +0x9ad:  add    %ecx,-0x10(%ebp)
0875a8c0 +0x9b0:  mov    %edx,-0xc(%ebp)
0875a8c3 +0x9b3:  adc    %edi,-0xc(%ebp)
0875a8c6 +0x9b6:  xor    %edx,%edx
0875a8c8 +0x9b8:  mov    -0xc(%ebp),%eax
0875a8cb +0x9bb:  xor    %edi,%edi
0875a8cd +0x9bd:  mov    %eax,-0x2c(%ebp)
0875a8d0 +0x9c0:  mov    -0x2c(%ebp),%eax
0875a8d3 +0x9c3:  add    %eax,%esi
0875a8d5 +0x9c5:  mov    %esi,%ecx
0875a8d7 +0x9c7:  mov    0xc(%ebp),%esi
0875a8da +0x9ca:  adc    %edx,%edi
0875a8dc +0x9cc:  mov    %edi,-0x20(%ebp)
0875a8df +0x9cf:  mov    0xc(%esi),%edi
0875a8e2 +0x9d2:  mov    0x10(%ebp),%esi
0875a8e5 +0x9d5:  mov    0x18(%esi),%eax
0875a8e8 +0x9d8:  mov    -0x10(%ebp),%esi
0875a8eb +0x9db:  mul    %edi
0875a8ed +0x9dd:  xor    %edi,%edi
0875a8ef +0x9df:  mov    %eax,-0x18(%ebp)
0875a8f2 +0x9e2:  add    %esi,-0x18(%ebp)
0875a8f5 +0x9e5:  mov    %edx,-0x14(%ebp)
0875a8f8 +0x9e8:  adc    %edi,-0x14(%ebp)
0875a8fb +0x9eb:  xor    %edx,%edx
0875a8fd +0x9ed:  mov    -0x14(%ebp),%edi
0875a900 +0x9f0:  mov    %edi,-0x2c(%ebp)
0875a903 +0x9f3:  mov    -0x2c(%ebp),%esi
0875a906 +0x9f6:  xor    %edi,%edi
0875a908 +0x9f8:  add    %ecx,%esi
0875a90a +0x9fa:  adc    %edx,%edi
0875a90c +0x9fc:  mov    %esi,%ecx
0875a90e +0x9fe:  mov    -0x20(%ebp),%edx
0875a911 +0xa01:  mov    0xc(%ebp),%esi
0875a914 +0xa04:  add    %edi,%edx
0875a916 +0xa06:  mov    0x10(%esi),%edi
0875a919 +0xa09:  mov    0x10(%ebp),%esi
0875a91c +0xa0c:  mov    %edx,-0x20(%ebp)
0875a91f +0xa0f:  mov    0x14(%esi),%eax
0875a922 +0xa12:  mov    -0x18(%ebp),%esi
0875a925 +0xa15:  mul    %edi
0875a927 +0xa17:  xor    %edi,%edi
0875a929 +0xa19:  mov    %eax,-0x10(%ebp)
0875a92c +0xa1c:  add    %esi,-0x10(%ebp)
0875a92f +0xa1f:  mov    %edx,-0xc(%ebp)
0875a932 +0xa22:  adc    %edi,-0xc(%ebp)
0875a935 +0xa25:  xor    %edx,%edx
0875a937 +0xa27:  mov    -0xc(%ebp),%edi
0875a93a +0xa2a:  mov    %edi,-0x2c(%ebp)
0875a93d +0xa2d:  mov    -0x2c(%ebp),%esi
0875a940 +0xa30:  xor    %edi,%edi
0875a942 +0xa32:  add    %ecx,%esi
0875a944 +0xa34:  adc    %edx,%edi
0875a946 +0xa36:  mov    %esi,%ecx
0875a948 +0xa38:  mov    -0x20(%ebp),%edx
0875a94b +0xa3b:  mov    0xc(%ebp),%esi
0875a94e +0xa3e:  add    %edi,%edx
0875a950 +0xa40:  mov    0x14(%esi),%edi
0875a953 +0xa43:  mov    0x10(%ebp),%esi
0875a956 +0xa46:  mov    %edx,-0x20(%ebp)
0875a959 +0xa49:  mov    0x10(%esi),%eax
0875a95c +0xa4c:  mov    -0x10(%ebp),%esi
0875a95f +0xa4f:  mul    %edi
0875a961 +0xa51:  xor    %edi,%edi
0875a963 +0xa53:  mov    %eax,-0x18(%ebp)
0875a966 +0xa56:  add    %esi,-0x18(%ebp)
0875a969 +0xa59:  mov    %edx,-0x14(%ebp)
0875a96c +0xa5c:  adc    %edi,-0x14(%ebp)
0875a96f +0xa5f:  xor    %edx,%edx
0875a971 +0xa61:  mov    -0x14(%ebp),%edi
0875a974 +0xa64:  mov    %edi,-0x2c(%ebp)
0875a977 +0xa67:  mov    -0x2c(%ebp),%esi
0875a97a +0xa6a:  xor    %edi,%edi
0875a97c +0xa6c:  add    %ecx,%esi
0875a97e +0xa6e:  adc    %edx,%edi
0875a980 +0xa70:  mov    %esi,%ecx
0875a982 +0xa72:  mov    -0x20(%ebp),%edx
0875a985 +0xa75:  mov    0xc(%ebp),%esi
0875a988 +0xa78:  add    %edi,%edx
0875a98a +0xa7a:  mov    0x18(%esi),%edi
0875a98d +0xa7d:  mov    0x10(%ebp),%esi
0875a990 +0xa80:  mov    %edx,-0x20(%ebp)
0875a993 +0xa83:  mov    0xc(%esi),%eax
0875a996 +0xa86:  mov    -0x18(%ebp),%esi
0875a999 +0xa89:  mul    %edi
0875a99b +0xa8b:  xor    %edi,%edi
0875a99d +0xa8d:  mov    %eax,-0x10(%ebp)
0875a9a0 +0xa90:  add    %esi,-0x10(%ebp)
0875a9a3 +0xa93:  mov    %edx,-0xc(%ebp)
0875a9a6 +0xa96:  adc    %edi,-0xc(%ebp)
0875a9a9 +0xa99:  xor    %edx,%edx
0875a9ab +0xa9b:  mov    -0xc(%ebp),%edi
0875a9ae +0xa9e:  mov    %edi,-0x2c(%ebp)
0875a9b1 +0xaa1:  mov    -0x2c(%ebp),%esi
0875a9b4 +0xaa4:  xor    %edi,%edi
0875a9b6 +0xaa6:  add    %ecx,%esi
0875a9b8 +0xaa8:  adc    %edx,%edi
0875a9ba +0xaaa:  mov    %esi,%ecx
0875a9bc +0xaac:  mov    -0x20(%ebp),%edx
0875a9bf +0xaaf:  mov    0xc(%ebp),%esi
0875a9c2 +0xab2:  add    %edi,%edx
0875a9c4 +0xab4:  mov    0x1c(%esi),%edi
0875a9c7 +0xab7:  mov    0x10(%ebp),%esi
0875a9ca +0xaba:  mov    %edx,-0x20(%ebp)
0875a9cd +0xabd:  mov    0x8(%esi),%eax
0875a9d0 +0xac0:  mov    -0x10(%ebp),%esi
0875a9d3 +0xac3:  mul    %edi
0875a9d5 +0xac5:  xor    %edi,%edi
0875a9d7 +0xac7:  mov    %eax,-0x18(%ebp)
0875a9da +0xaca:  add    %esi,-0x18(%ebp)
0875a9dd +0xacd:  mov    %edx,-0x14(%ebp)
0875a9e0 +0xad0:  adc    %edi,-0x14(%ebp)
0875a9e3 +0xad3:  xor    %edx,%edx
0875a9e5 +0xad5:  mov    -0x14(%ebp),%edi
0875a9e8 +0xad8:  mov    %edi,-0x2c(%ebp)
0875a9eb +0xadb:  mov    -0x2c(%ebp),%esi
0875a9ee +0xade:  xor    %edi,%edi
0875a9f0 +0xae0:  mov    -0x20(%ebp),%eax
0875a9f3 +0xae3:  add    %ecx,%esi
0875a9f5 +0xae5:  adc    %edx,%edi
0875a9f7 +0xae7:  mov    %esi,%ecx
0875a9f9 +0xae9:  mov    0x8(%ebp),%edx
0875a9fc +0xaec:  mov    -0x18(%ebp),%esi
0875a9ff +0xaef:  add    %edi,%eax
0875aa01 +0xaf1:  mov    0xc(%ebp),%edi
0875aa04 +0xaf4:  mov    %eax,-0x10(%ebp)
0875aa07 +0xaf7:  mov    %esi,0x24(%edx)
0875aa0a +0xafa:  mov    0xc(%edi),%esi
0875aa0d +0xafd:  mov    0x10(%ebp),%edi
0875aa10 +0xb00:  mov    0x1c(%edi),%eax
0875aa13 +0xb03:  xor    %edi,%edi
0875aa15 +0xb05:  mul    %esi
0875aa17 +0xb07:  mov    -0x10(%ebp),%esi
0875aa1a +0xb0a:  mov    %eax,-0x18(%ebp)
0875aa1d +0xb0d:  add    %ecx,-0x18(%ebp)
0875aa20 +0xb10:  mov    %edx,-0x14(%ebp)
0875aa23 +0xb13:  adc    %edi,-0x14(%ebp)
0875aa26 +0xb16:  xor    %edx,%edx
0875aa28 +0xb18:  mov    -0x14(%ebp),%eax
0875aa2b +0xb1b:  xor    %edi,%edi
0875aa2d +0xb1d:  mov    %eax,-0x2c(%ebp)
0875aa30 +0xb20:  mov    -0x2c(%ebp),%eax
0875aa33 +0xb23:  add    %eax,%esi
0875aa35 +0xb25:  mov    %esi,%ecx
0875aa37 +0xb27:  mov    0xc(%ebp),%esi
0875aa3a +0xb2a:  adc    %edx,%edi
0875aa3c +0xb2c:  mov    %edi,-0x20(%ebp)
0875aa3f +0xb2f:  mov    0x10(%esi),%edi
0875aa42 +0xb32:  mov    0x10(%ebp),%esi
0875aa45 +0xb35:  mov    0x18(%esi),%eax
0875aa48 +0xb38:  mov    -0x18(%ebp),%esi
0875aa4b +0xb3b:  mul    %edi
0875aa4d +0xb3d:  xor    %edi,%edi
0875aa4f +0xb3f:  mov    %eax,-0x10(%ebp)
0875aa52 +0xb42:  add    %esi,-0x10(%ebp)
0875aa55 +0xb45:  mov    %edx,-0xc(%ebp)
0875aa58 +0xb48:  adc    %edi,-0xc(%ebp)
0875aa5b +0xb4b:  xor    %edx,%edx
0875aa5d +0xb4d:  mov    -0xc(%ebp),%edi
0875aa60 +0xb50:  mov    %edi,-0x2c(%ebp)
0875aa63 +0xb53:  mov    -0x2c(%ebp),%esi
0875aa66 +0xb56:  xor    %edi,%edi
0875aa68 +0xb58:  add    %ecx,%esi
0875aa6a +0xb5a:  adc    %edx,%edi
0875aa6c +0xb5c:  mov    %esi,%ecx
0875aa6e +0xb5e:  mov    -0x20(%ebp),%edx
0875aa71 +0xb61:  mov    0xc(%ebp),%esi
0875aa74 +0xb64:  add    %edi,%edx
0875aa76 +0xb66:  mov    0x14(%esi),%edi
0875aa79 +0xb69:  mov    0x10(%ebp),%esi
0875aa7c +0xb6c:  mov    %edx,-0x20(%ebp)
0875aa7f +0xb6f:  mov    0x14(%esi),%eax
0875aa82 +0xb72:  mov    -0x10(%ebp),%esi
0875aa85 +0xb75:  mul    %edi
0875aa87 +0xb77:  xor    %edi,%edi
0875aa89 +0xb79:  mov    %eax,-0x18(%ebp)
0875aa8c +0xb7c:  add    %esi,-0x18(%ebp)
0875aa8f +0xb7f:  mov    %edx,-0x14(%ebp)
0875aa92 +0xb82:  adc    %edi,-0x14(%ebp)
0875aa95 +0xb85:  xor    %edx,%edx
0875aa97 +0xb87:  mov    -0x14(%ebp),%edi
0875aa9a +0xb8a:  mov    %edi,-0x2c(%ebp)
0875aa9d +0xb8d:  mov    -0x2c(%ebp),%esi
0875aaa0 +0xb90:  xor    %edi,%edi
0875aaa2 +0xb92:  add    %ecx,%esi
0875aaa4 +0xb94:  adc    %edx,%edi
0875aaa6 +0xb96:  mov    %esi,%ecx
0875aaa8 +0xb98:  mov    -0x20(%ebp),%edx
0875aaab +0xb9b:  mov    0xc(%ebp),%esi
0875aaae +0xb9e:  add    %edi,%edx
0875aab0 +0xba0:  mov    0x18(%esi),%edi
0875aab3 +0xba3:  mov    0x10(%ebp),%esi
0875aab6 +0xba6:  mov    %edx,-0x20(%ebp)
0875aab9 +0xba9:  mov    0x10(%esi),%eax
0875aabc +0xbac:  mov    -0x18(%ebp),%esi
0875aabf +0xbaf:  mul    %edi
0875aac1 +0xbb1:  xor    %edi,%edi
0875aac3 +0xbb3:  mov    %eax,-0x10(%ebp)
0875aac6 +0xbb6:  add    %esi,-0x10(%ebp)
0875aac9 +0xbb9:  mov    %edx,-0xc(%ebp)
0875aacc +0xbbc:  adc    %edi,-0xc(%ebp)
0875aacf +0xbbf:  xor    %edx,%edx
0875aad1 +0xbc1:  mov    -0xc(%ebp),%edi
0875aad4 +0xbc4:  mov    %edi,-0x2c(%ebp)
0875aad7 +0xbc7:  mov    -0x2c(%ebp),%esi
0875aada +0xbca:  xor    %edi,%edi
0875aadc +0xbcc:  add    %ecx,%esi
0875aade +0xbce:  adc    %edx,%edi
0875aae0 +0xbd0:  mov    %esi,%ecx
0875aae2 +0xbd2:  mov    -0x20(%ebp),%edx
0875aae5 +0xbd5:  mov    0xc(%ebp),%esi
0875aae8 +0xbd8:  add    %edi,%edx
0875aaea +0xbda:  mov    0x1c(%esi),%edi
0875aaed +0xbdd:  mov    0x10(%ebp),%esi
0875aaf0 +0xbe0:  mov    %edx,-0x20(%ebp)
0875aaf3 +0xbe3:  mov    0xc(%esi),%eax
0875aaf6 +0xbe6:  mov    -0x10(%ebp),%esi
0875aaf9 +0xbe9:  mul    %edi
0875aafb +0xbeb:  xor    %edi,%edi
0875aafd +0xbed:  mov    %eax,-0x18(%ebp)
0875ab00 +0xbf0:  mov    -0x20(%ebp),%eax
0875ab03 +0xbf3:  add    %esi,-0x18(%ebp)
0875ab06 +0xbf6:  mov    %edx,-0x14(%ebp)
0875ab09 +0xbf9:  adc    %edi,-0x14(%ebp)
0875ab0c +0xbfc:  xor    %edx,%edx
0875ab0e +0xbfe:  mov    -0x14(%ebp),%edi
0875ab11 +0xc01:  mov    %edi,-0x2c(%ebp)
0875ab14 +0xc04:  mov    -0x2c(%ebp),%esi
0875ab17 +0xc07:  xor    %edi,%edi
0875ab19 +0xc09:  add    %ecx,%esi
0875ab1b +0xc0b:  adc    %edx,%edi
0875ab1d +0xc0d:  mov    %esi,%ecx
0875ab1f +0xc0f:  mov    0x8(%ebp),%edx
0875ab22 +0xc12:  add    %edi,%eax
0875ab24 +0xc14:  mov    -0x18(%ebp),%esi
0875ab27 +0xc17:  mov    0xc(%ebp),%edi
0875ab2a +0xc1a:  mov    %eax,-0x20(%ebp)
0875ab2d +0xc1d:  mov    %esi,0x28(%edx)
0875ab30 +0xc20:  mov    0x10(%edi),%esi
0875ab33 +0xc23:  mov    0x10(%ebp),%edi
0875ab36 +0xc26:  mov    0x1c(%edi),%eax
0875ab39 +0xc29:  xor    %edi,%edi
0875ab3b +0xc2b:  mul    %esi
0875ab3d +0xc2d:  mov    %eax,-0x10(%ebp)
0875ab40 +0xc30:  add    %ecx,-0x10(%ebp)
0875ab43 +0xc33:  mov    %edx,-0xc(%ebp)
0875ab46 +0xc36:  adc    %edi,-0xc(%ebp)
0875ab49 +0xc39:  xor    %edx,%edx
0875ab4b +0xc3b:  mov    -0xc(%ebp),%eax
0875ab4e +0xc3e:  xor    %edi,%edi
0875ab50 +0xc40:  mov    %eax,-0x2c(%ebp)
0875ab53 +0xc43:  mov    -0x20(%ebp),%esi
0875ab56 +0xc46:  mov    -0x2c(%ebp),%eax
0875ab59 +0xc49:  add    %eax,%esi
0875ab5b +0xc4b:  mov    %esi,%ecx
0875ab5d +0xc4d:  mov    0xc(%ebp),%esi
0875ab60 +0xc50:  adc    %edx,%edi
0875ab62 +0xc52:  mov    %edi,-0x20(%ebp)
0875ab65 +0xc55:  mov    0x14(%esi),%edi
0875ab68 +0xc58:  mov    0x10(%ebp),%esi
0875ab6b +0xc5b:  mov    0x18(%esi),%eax
0875ab6e +0xc5e:  mov    -0x10(%ebp),%esi
0875ab71 +0xc61:  mul    %edi
0875ab73 +0xc63:  xor    %edi,%edi
0875ab75 +0xc65:  mov    %eax,-0x18(%ebp)
0875ab78 +0xc68:  add    %esi,-0x18(%ebp)
0875ab7b +0xc6b:  mov    %edx,-0x14(%ebp)
0875ab7e +0xc6e:  adc    %edi,-0x14(%ebp)
0875ab81 +0xc71:  xor    %edx,%edx
0875ab83 +0xc73:  mov    -0x14(%ebp),%edi
0875ab86 +0xc76:  mov    %edi,-0x2c(%ebp)
0875ab89 +0xc79:  mov    -0x2c(%ebp),%esi
0875ab8c +0xc7c:  xor    %edi,%edi
0875ab8e +0xc7e:  add    %ecx,%esi
0875ab90 +0xc80:  adc    %edx,%edi
0875ab92 +0xc82:  mov    %esi,%ecx
0875ab94 +0xc84:  mov    -0x20(%ebp),%edx
0875ab97 +0xc87:  mov    0xc(%ebp),%esi
0875ab9a +0xc8a:  add    %edi,%edx
0875ab9c +0xc8c:  mov    0x18(%esi),%edi
0875ab9f +0xc8f:  mov    0x10(%ebp),%esi
0875aba2 +0xc92:  mov    %edx,-0x20(%ebp)
0875aba5 +0xc95:  mov    0x14(%esi),%eax
0875aba8 +0xc98:  mov    -0x18(%ebp),%esi
0875abab +0xc9b:  mul    %edi
0875abad +0xc9d:  xor    %edi,%edi
0875abaf +0xc9f:  mov    %eax,-0x10(%ebp)
0875abb2 +0xca2:  add    %esi,-0x10(%ebp)
0875abb5 +0xca5:  mov    %edx,-0xc(%ebp)
0875abb8 +0xca8:  adc    %edi,-0xc(%ebp)
0875abbb +0xcab:  xor    %edx,%edx
0875abbd +0xcad:  mov    -0xc(%ebp),%edi
0875abc0 +0xcb0:  mov    %edi,-0x2c(%ebp)
0875abc3 +0xcb3:  mov    -0x2c(%ebp),%esi
0875abc6 +0xcb6:  xor    %edi,%edi
0875abc8 +0xcb8:  add    %ecx,%esi
0875abca +0xcba:  adc    %edx,%edi
0875abcc +0xcbc:  mov    %esi,%ecx
0875abce +0xcbe:  mov    -0x20(%ebp),%edx
0875abd1 +0xcc1:  mov    0xc(%ebp),%esi
0875abd4 +0xcc4:  add    %edi,%edx
0875abd6 +0xcc6:  mov    0x1c(%esi),%edi
0875abd9 +0xcc9:  mov    0x10(%ebp),%esi
0875abdc +0xccc:  mov    %edx,-0x20(%ebp)
0875abdf +0xccf:  mov    0x10(%esi),%eax
0875abe2 +0xcd2:  mov    -0x10(%ebp),%esi
0875abe5 +0xcd5:  mul    %edi
0875abe7 +0xcd7:  xor    %edi,%edi
0875abe9 +0xcd9:  mov    %eax,-0x18(%ebp)
0875abec +0xcdc:  mov    -0x20(%ebp),%eax
0875abef +0xcdf:  add    %esi,-0x18(%ebp)
0875abf2 +0xce2:  mov    %edx,-0x14(%ebp)
0875abf5 +0xce5:  adc    %edi,-0x14(%ebp)
0875abf8 +0xce8:  xor    %edx,%edx
0875abfa +0xcea:  mov    -0x14(%ebp),%edi
0875abfd +0xced:  mov    %edi,-0x2c(%ebp)
0875ac00 +0xcf0:  mov    -0x2c(%ebp),%esi
0875ac03 +0xcf3:  xor    %edi,%edi
0875ac05 +0xcf5:  add    %ecx,%esi
0875ac07 +0xcf7:  adc    %edx,%edi
0875ac09 +0xcf9:  mov    %esi,%ecx
0875ac0b +0xcfb:  mov    0x8(%ebp),%edx
0875ac0e +0xcfe:  mov    -0x18(%ebp),%esi
0875ac11 +0xd01:  add    %edi,%eax
0875ac13 +0xd03:  mov    0xc(%ebp),%edi
0875ac16 +0xd06:  mov    %eax,-0x10(%ebp)
0875ac19 +0xd09:  mov    %esi,0x2c(%edx)
0875ac1c +0xd0c:  mov    0x14(%edi),%esi
0875ac1f +0xd0f:  mov    0x10(%ebp),%edi
0875ac22 +0xd12:  mov    0x1c(%edi),%eax
0875ac25 +0xd15:  xor    %edi,%edi
0875ac27 +0xd17:  mul    %esi
0875ac29 +0xd19:  mov    %eax,-0x18(%ebp)
0875ac2c +0xd1c:  add    %ecx,-0x18(%ebp)
0875ac2f +0xd1f:  mov    %edx,-0x14(%ebp)
0875ac32 +0xd22:  adc    %edi,-0x14(%ebp)
0875ac35 +0xd25:  xor    %edx,%edx
0875ac37 +0xd27:  mov    -0x14(%ebp),%eax
0875ac3a +0xd2a:  xor    %edi,%edi
0875ac3c +0xd2c:  mov    %eax,-0x2c(%ebp)
0875ac3f +0xd2f:  mov    -0x10(%ebp),%esi
0875ac42 +0xd32:  mov    -0x2c(%ebp),%eax
0875ac45 +0xd35:  add    %eax,%esi
0875ac47 +0xd37:  mov    %esi,%ecx
0875ac49 +0xd39:  mov    0xc(%ebp),%esi
0875ac4c +0xd3c:  adc    %edx,%edi
0875ac4e +0xd3e:  mov    %edi,-0x20(%ebp)
0875ac51 +0xd41:  mov    0x18(%esi),%edi
0875ac54 +0xd44:  mov    0x10(%ebp),%esi
0875ac57 +0xd47:  mov    0x18(%esi),%eax
0875ac5a +0xd4a:  mov    -0x18(%ebp),%esi
0875ac5d +0xd4d:  mul    %edi
0875ac5f +0xd4f:  xor    %edi,%edi
0875ac61 +0xd51:  mov    %eax,-0x10(%ebp)
0875ac64 +0xd54:  add    %esi,-0x10(%ebp)
0875ac67 +0xd57:  mov    %edx,-0xc(%ebp)
0875ac6a +0xd5a:  adc    %edi,-0xc(%ebp)
0875ac6d +0xd5d:  xor    %edx,%edx
0875ac6f +0xd5f:  mov    -0xc(%ebp),%edi
0875ac72 +0xd62:  mov    %edi,-0x2c(%ebp)
0875ac75 +0xd65:  mov    -0x2c(%ebp),%esi
0875ac78 +0xd68:  xor    %edi,%edi
0875ac7a +0xd6a:  add    %ecx,%esi
0875ac7c +0xd6c:  adc    %edx,%edi
0875ac7e +0xd6e:  mov    %esi,%ecx
0875ac80 +0xd70:  mov    -0x20(%ebp),%edx
0875ac83 +0xd73:  mov    0xc(%ebp),%esi
0875ac86 +0xd76:  add    %edi,%edx
0875ac88 +0xd78:  mov    0x1c(%esi),%edi
0875ac8b +0xd7b:  mov    0x10(%ebp),%esi
0875ac8e +0xd7e:  mov    %edx,-0x20(%ebp)
0875ac91 +0xd81:  mov    0x14(%esi),%eax
0875ac94 +0xd84:  mov    -0x10(%ebp),%esi
0875ac97 +0xd87:  mul    %edi
0875ac99 +0xd89:  xor    %edi,%edi
0875ac9b +0xd8b:  mov    %eax,-0x18(%ebp)
0875ac9e +0xd8e:  add    %esi,-0x18(%ebp)
0875aca1 +0xd91:  mov    %edx,-0x14(%ebp)
0875aca4 +0xd94:  adc    %edi,-0x14(%ebp)
0875aca7 +0xd97:  xor    %edx,%edx
0875aca9 +0xd99:  mov    -0x14(%ebp),%edi
0875acac +0xd9c:  mov    %edi,-0x2c(%ebp)
0875acaf +0xd9f:  mov    -0x2c(%ebp),%esi
0875acb2 +0xda2:  xor    %edi,%edi
0875acb4 +0xda4:  mov    -0x20(%ebp),%eax
0875acb7 +0xda7:  add    %ecx,%esi
0875acb9 +0xda9:  adc    %edx,%edi
0875acbb +0xdab:  mov    %esi,%ecx
0875acbd +0xdad:  mov    0x8(%ebp),%edx
0875acc0 +0xdb0:  mov    -0x18(%ebp),%esi
0875acc3 +0xdb3:  add    %edi,%eax
0875acc5 +0xdb5:  mov    %eax,-0x20(%ebp)
0875acc8 +0xdb8:  mov    0xc(%ebp),%eax
0875accb +0xdbb:  mov    %esi,0x30(%edx)
0875acce +0xdbe:  mov    0x10(%ebp),%esi
0875acd1 +0xdc1:  mov    0x18(%eax),%edi
0875acd4 +0xdc4:  mov    0x1c(%esi),%eax
0875acd7 +0xdc7:  mov    -0x20(%ebp),%esi
0875acda +0xdca:  mul    %edi
0875acdc +0xdcc:  xor    %edi,%edi
0875acde +0xdce:  mov    %eax,-0x10(%ebp)
0875ace1 +0xdd1:  add    %ecx,-0x10(%ebp)
0875ace4 +0xdd4:  mov    -0x10(%ebp),%ecx
0875ace7 +0xdd7:  mov    %edx,-0xc(%ebp)
0875acea +0xdda:  adc    %edi,-0xc(%ebp)
0875aced +0xddd:  xor    %edx,%edx
0875acef +0xddf:  mov    -0xc(%ebp),%edi
0875acf2 +0xde2:  mov    %edi,-0x2c(%ebp)
0875acf5 +0xde5:  mov    -0x2c(%ebp),%eax
0875acf8 +0xde8:  xor    %edi,%edi
0875acfa +0xdea:  add    %eax,%esi
0875acfc +0xdec:  mov    0xc(%ebp),%eax
0875acff +0xdef:  mov    %esi,-0x20(%ebp)
0875ad02 +0xdf2:  mov    0x10(%ebp),%esi
0875ad05 +0xdf5:  adc    %edx,%edi
0875ad07 +0xdf7:  mov    %edi,-0x18(%ebp)
0875ad0a +0xdfa:  mov    0x1c(%eax),%edi
0875ad0d +0xdfd:  mov    0x18(%esi),%eax
0875ad10 +0xe00:  mul    %edi
0875ad12 +0xe02:  xor    %edi,%edi
0875ad14 +0xe04:  mov    %eax,-0x10(%ebp)
0875ad17 +0xe07:  add    %ecx,-0x10(%ebp)
0875ad1a +0xe0a:  mov    %edx,-0xc(%ebp)
0875ad1d +0xe0d:  adc    %edi,-0xc(%ebp)
0875ad20 +0xe10:  xor    %ecx,%ecx
0875ad22 +0xe12:  mov    -0xc(%ebp),%edi
0875ad25 +0xe15:  mov    -0x20(%ebp),%edx
0875ad28 +0xe18:  mov    0x8(%ebp),%eax
0875ad2b +0xe1b:  mov    %edi,-0x2c(%ebp)
0875ad2e +0xe1e:  mov    -0x2c(%ebp),%esi
0875ad31 +0xe21:  xor    %edi,%edi
0875ad33 +0xe23:  add    %edx,%esi
0875ad35 +0xe25:  mov    -0x10(%ebp),%edx
0875ad38 +0xe28:  adc    %ecx,%edi
0875ad3a +0xe2a:  mov    %esi,%ecx
0875ad3c +0xe2c:  mov    -0x18(%ebp),%esi
0875ad3f +0xe2f:  mov    %edx,0x34(%eax)
0875ad42 +0xe32:  add    %edi,%esi
0875ad44 +0xe34:  mov    0xc(%ebp),%edi
0875ad47 +0xe37:  mov    0x1c(%edi),%edi
0875ad4a +0xe3a:  mov    %edi,%eax
0875ad4c +0xe3c:  mov    0x10(%ebp),%edi
0875ad4f +0xe3f:  mull   0x1c(%edi)
0875ad52 +0xe42:  mov    %eax,-0x28(%ebp)
0875ad55 +0xe45:  mov    %edx,-0x24(%ebp)
0875ad58 +0xe48:  xor    %edx,%edx
0875ad5a +0xe4a:  add    %ecx,-0x28(%ebp)
0875ad5d +0xe4d:  adc    %edx,-0x24(%ebp)
0875ad60 +0xe50:  mov    -0x24(%ebp),%eax
0875ad63 +0xe53:  mov    0x8(%ebp),%edx
0875ad66 +0xe56:  mov    -0x28(%ebp),%ecx
0875ad69 +0xe59:  mov    %eax,-0x2c(%ebp)
0875ad6c +0xe5c:  lea    (%esi,%eax,1),%eax
0875ad6f +0xe5f:  mov    %eax,0x3c(%edx)
0875ad72 +0xe62:  mov    %ecx,0x38(%edx)
0875ad75 +0xe65:  add    $0x28,%esp
0875ad78 +0xe68:  pop    %esi
0875ad79 +0xe69:  pop    %edi
0875ad7a +0xe6a:  pop    %ebp
0875ad7b +0xe6b:  ret
0875ad7c +0xe6c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Portable::Multiply8 @ 0x8759f10

/* TaoCrypt::Portable::Multiply8(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply8(uint *param_1,uint *param_2,uint *param_3)

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
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  *param_1 = (uint)((ulonglong)uVar2 * (ulonglong)uVar1);
  uVar3 = (ulonglong)param_3[1] * (ulonglong)*param_2 +
          ((ulonglong)uVar2 * (ulonglong)uVar1 >> 0x20);
  uVar1 = (uint)(uVar3 >> 0x20);
  lVar4 = (ulonglong)param_2[1] * (ulonglong)*param_3 + (uVar3 & 0xffffffff);
  uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar17 = (uint)CARRY4(uVar2,uVar1);
  param_1[1] = (uint)lVar4;
  uVar3 = (ulonglong)*param_3 * (ulonglong)param_2[2] + (ulonglong)(uVar2 + uVar1);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar17 + uVar1;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar2 + uVar5;
  lVar4 = (ulonglong)param_3[2] * (ulonglong)*param_2 + (uVar3 & 0xffffffff);
  uVar18 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar5 = (uint)CARRY4(uVar17,uVar1) + (uint)CARRY4(uVar2,uVar5) + (uint)CARRY4(uVar18,uVar6);
  param_1[2] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)*param_2 + (ulonglong)(uVar18 + uVar6);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar5 + uVar1;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar2 + uVar6;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar18 + uVar7;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar17 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar6 = (uint)CARRY4(uVar5,uVar1) + (uint)CARRY4(uVar2,uVar6) + (uint)CARRY4(uVar18,uVar7) +
          (uint)CARRY4(uVar17,uVar8);
  param_1[3] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)*param_2 + (ulonglong)(uVar17 + uVar8);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar6 + uVar1;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar2 + uVar7;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar18 + uVar8;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar17 + uVar9;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar5 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar7 = (uint)CARRY4(uVar6,uVar1) + (uint)CARRY4(uVar2,uVar7) + (uint)CARRY4(uVar18,uVar8) +
          (uint)CARRY4(uVar17,uVar9) + (uint)CARRY4(uVar5,uVar10);
  param_1[4] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)*param_2 + (ulonglong)(uVar5 + uVar10);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar7 + uVar1;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar2 + uVar8;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar18 + uVar9;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar17 + uVar10;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar5 + uVar11;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar6 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar8 = (uint)CARRY4(uVar7,uVar1) + (uint)CARRY4(uVar2,uVar8) + (uint)CARRY4(uVar18,uVar9) +
          (uint)CARRY4(uVar17,uVar10) + (uint)CARRY4(uVar5,uVar11) + (uint)CARRY4(uVar6,uVar12);
  param_1[5] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)*param_2 + (ulonglong)(uVar6 + uVar12);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar8 + uVar1;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar2 + uVar9;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar18 + uVar10;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar17 + uVar11;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar13 = uVar5 + uVar12;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar6 = (uint)(uVar3 >> 0x20);
  uVar14 = uVar6 + uVar13;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uint)CARRY4(uVar8,uVar1) + (uint)CARRY4(uVar2,uVar9) + (uint)CARRY4(uVar18,uVar10) +
          (uint)CARRY4(uVar17,uVar11) + (uint)CARRY4(uVar5,uVar12) + (uint)CARRY4(uVar6,uVar13) +
          (uint)CARRY4(uVar7,uVar14);
  param_1[6] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)*param_2 + (ulonglong)(uVar7 + uVar14);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar9 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[1] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar2 + uVar10;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar18 + uVar11;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar13 = uVar17 + uVar12;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar14 = uVar5 + uVar13;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar6 = (uint)(uVar3 >> 0x20);
  uVar15 = uVar6 + uVar14;
  uVar3 = (ulonglong)param_3[1] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar7 = (uint)(uVar3 >> 0x20);
  uVar16 = uVar7 + uVar15;
  lVar4 = (ulonglong)*param_3 * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar9 = (uint)CARRY4(uVar9,uVar1) + (uint)CARRY4(uVar2,uVar10) + (uint)CARRY4(uVar18,uVar11) +
          (uint)CARRY4(uVar17,uVar12) + (uint)CARRY4(uVar5,uVar13) + (uint)CARRY4(uVar6,uVar14) +
          (uint)CARRY4(uVar7,uVar15) + (uint)CARRY4(uVar8,uVar16);
  param_1[7] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[1] + (ulonglong)(uVar8 + uVar16);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar9 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[2] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar2 + uVar8;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar18 + uVar10;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar17 + uVar11;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar13 = uVar5 + uVar12;
  uVar3 = (ulonglong)param_3[2] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar6 = (uint)(uVar3 >> 0x20);
  uVar14 = uVar6 + uVar13;
  lVar4 = (ulonglong)param_3[1] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar8 = (uint)CARRY4(uVar9,uVar1) + (uint)CARRY4(uVar2,uVar8) + (uint)CARRY4(uVar18,uVar10) +
          (uint)CARRY4(uVar17,uVar11) + (uint)CARRY4(uVar5,uVar12) + (uint)CARRY4(uVar6,uVar13) +
          (uint)CARRY4(uVar7,uVar14);
  param_1[8] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[2] + (ulonglong)(uVar7 + uVar14);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar8 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[3] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar2 + uVar7;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar18 + uVar9;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar11 = uVar17 + uVar10;
  uVar3 = (ulonglong)param_3[3] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar5 = (uint)(uVar3 >> 0x20);
  uVar12 = uVar5 + uVar11;
  lVar4 = (ulonglong)param_3[2] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar6 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar7 = (uint)CARRY4(uVar8,uVar1) + (uint)CARRY4(uVar2,uVar7) + (uint)CARRY4(uVar18,uVar9) +
          (uint)CARRY4(uVar17,uVar10) + (uint)CARRY4(uVar5,uVar11) + (uint)CARRY4(uVar6,uVar12);
  param_1[9] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[3] + (ulonglong)(uVar6 + uVar12);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar7 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[4] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar2 + uVar6;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar9 = uVar18 + uVar8;
  uVar3 = (ulonglong)param_3[4] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar17 = (uint)(uVar3 >> 0x20);
  uVar10 = uVar17 + uVar9;
  lVar4 = (ulonglong)param_3[3] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar5 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar6 = (uint)CARRY4(uVar7,uVar1) + (uint)CARRY4(uVar2,uVar6) + (uint)CARRY4(uVar18,uVar8) +
          (uint)CARRY4(uVar17,uVar9) + (uint)CARRY4(uVar5,uVar10);
  param_1[10] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[4] + (ulonglong)(uVar5 + uVar10);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar6 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[5] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar7 = uVar2 + uVar5;
  uVar3 = (ulonglong)param_3[5] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar18 = (uint)(uVar3 >> 0x20);
  uVar8 = uVar18 + uVar7;
  lVar4 = (ulonglong)param_3[4] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar17 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar5 = (uint)CARRY4(uVar6,uVar1) + (uint)CARRY4(uVar2,uVar5) + (uint)CARRY4(uVar18,uVar7) +
          (uint)CARRY4(uVar17,uVar8);
  param_1[0xb] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[5] + (ulonglong)(uVar17 + uVar8);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar17 = uVar5 + uVar1;
  uVar3 = (ulonglong)param_3[6] * (ulonglong)param_2[6] + (uVar3 & 0xffffffff);
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar6 = uVar2 + uVar17;
  lVar4 = (ulonglong)param_3[5] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar18 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar17 = (uint)CARRY4(uVar5,uVar1) + (uint)CARRY4(uVar2,uVar17) + (uint)CARRY4(uVar18,uVar6);
  param_1[0xc] = (uint)lVar4;
  uVar3 = (ulonglong)param_3[7] * (ulonglong)param_2[6] + (ulonglong)(uVar18 + uVar6);
  uVar1 = (uint)(uVar3 >> 0x20);
  uVar18 = uVar17 + uVar1;
  lVar4 = (ulonglong)param_3[6] * (ulonglong)param_2[7] + (uVar3 & 0xffffffff);
  uVar2 = (uint)((ulonglong)lVar4 >> 0x20);
  param_1[0xd] = (uint)lVar4;
  lVar4 = (ulonglong)param_2[7] * (ulonglong)param_3[7] + (ulonglong)(uVar2 + uVar18);
  param_1[0xf] = (uint)CARRY4(uVar17,uVar1) + (uint)CARRY4(uVar2,uVar18) +
                 (int)((ulonglong)lVar4 >> 0x20);
  param_1[0xe] = (uint)lVar4;
  return;
}
```
