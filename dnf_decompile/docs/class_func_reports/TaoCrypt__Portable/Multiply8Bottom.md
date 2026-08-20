# Multiply8Bottom

`_ZN8TaoCrypt8Portable15Multiply8BottomEPjPKjS3_`

`TaoCrypt::Portable::Multiply8Bottom(unsigned int*, unsigned int const*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Portable` | `0x0875aeb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875aeb0  _ZN8TaoCrypt8Portable15Multiply8BottomEPjPKjS3_
#           TaoCrypt::Portable::Multiply8Bottom(unsigned int*, unsigned int const*, unsigned int const*)
# range [0x0875aeb0, 0x0875b4aa]
0875aeb0 +0x000:  push   %ebp
0875aeb1 +0x001:  mov    %esp,%ebp
0875aeb3 +0x003:  push   %edi
0875aeb4 +0x004:  xor    %edi,%edi
0875aeb6 +0x006:  push   %esi
0875aeb7 +0x007:  sub    $0x30,%esp
0875aeba +0x00a:  mov    0x10(%ebp),%ecx
0875aebd +0x00d:  mov    0xc(%ebp),%eax
0875aec0 +0x010:  mov    (%eax),%esi
0875aec2 +0x012:  mov    (%ecx),%eax
0875aec4 +0x014:  mul    %esi
0875aec6 +0x016:  mov    %edx,-0x24(%ebp)
0875aec9 +0x019:  mov    %eax,%esi
0875aecb +0x01b:  mov    0xc(%ebp),%edx
0875aece +0x01e:  mov    0x8(%ebp),%eax
0875aed1 +0x021:  mov    %esi,(%eax)
0875aed3 +0x023:  mov    (%edx),%esi
0875aed5 +0x025:  mov    0x4(%ecx),%eax
0875aed8 +0x028:  mul    %esi
0875aeda +0x02a:  mov    -0x24(%ebp),%esi
0875aedd +0x02d:  mov    %eax,-0x10(%ebp)
0875aee0 +0x030:  add    %esi,-0x10(%ebp)
0875aee3 +0x033:  mov    -0x10(%ebp),%esi
0875aee6 +0x036:  mov    %edx,-0xc(%ebp)
0875aee9 +0x039:  adc    %edi,-0xc(%ebp)
0875aeec +0x03c:  mov    0xc(%ebp),%edi
0875aeef +0x03f:  mov    -0xc(%ebp),%edx
0875aef2 +0x042:  mov    0x4(%edi),%edi
0875aef5 +0x045:  mov    %edx,%ecx
0875aef7 +0x047:  mov    %edi,%eax
0875aef9 +0x049:  mov    0x10(%ebp),%edi
0875aefc +0x04c:  mull   (%edi)
0875aefe +0x04e:  xor    %edi,%edi
0875af00 +0x050:  mov    %eax,-0x10(%ebp)
0875af03 +0x053:  add    %esi,-0x10(%ebp)
0875af06 +0x056:  mov    %edx,-0xc(%ebp)
0875af09 +0x059:  adc    %edi,-0xc(%ebp)
0875af0c +0x05c:  xor    %edx,%edx
0875af0e +0x05e:  mov    -0xc(%ebp),%eax
0875af11 +0x061:  xor    %edi,%edi
0875af13 +0x063:  mov    %eax,%esi
0875af15 +0x065:  add    %ecx,%esi
0875af17 +0x067:  adc    %edx,%edi
0875af19 +0x069:  mov    %esi,%ecx
0875af1b +0x06b:  mov    0x8(%ebp),%edx
0875af1e +0x06e:  mov    -0x10(%ebp),%esi
0875af21 +0x071:  mov    %edi,-0x1c(%ebp)
0875af24 +0x074:  mov    0xc(%ebp),%edi
0875af27 +0x077:  mov    %esi,0x4(%edx)
0875af2a +0x07a:  mov    0x8(%edi),%esi
0875af2d +0x07d:  mov    0x10(%ebp),%edi
0875af30 +0x080:  mov    (%edi),%eax
0875af32 +0x082:  xor    %edi,%edi
0875af34 +0x084:  mul    %esi
0875af36 +0x086:  mov    -0x1c(%ebp),%esi
0875af39 +0x089:  mov    %eax,-0x18(%ebp)
0875af3c +0x08c:  add    %ecx,-0x18(%ebp)
0875af3f +0x08f:  mov    %edx,-0x14(%ebp)
0875af42 +0x092:  adc    %edi,-0x14(%ebp)
0875af45 +0x095:  xor    %edx,%edx
0875af47 +0x097:  mov    -0x14(%ebp),%eax
0875af4a +0x09a:  xor    %edi,%edi
0875af4c +0x09c:  mov    %eax,-0x24(%ebp)
0875af4f +0x09f:  mov    -0x24(%ebp),%eax
0875af52 +0x0a2:  add    %eax,%esi
0875af54 +0x0a4:  mov    %esi,%ecx
0875af56 +0x0a6:  mov    0xc(%ebp),%esi
0875af59 +0x0a9:  adc    %edx,%edi
0875af5b +0x0ab:  mov    %edi,-0x1c(%ebp)
0875af5e +0x0ae:  mov    0x4(%esi),%edi
0875af61 +0x0b1:  mov    0x10(%ebp),%esi
0875af64 +0x0b4:  mov    0x4(%esi),%eax
0875af67 +0x0b7:  mov    -0x18(%ebp),%esi
0875af6a +0x0ba:  mul    %edi
0875af6c +0x0bc:  xor    %edi,%edi
0875af6e +0x0be:  mov    %eax,-0x10(%ebp)
0875af71 +0x0c1:  add    %esi,-0x10(%ebp)
0875af74 +0x0c4:  mov    %edx,-0xc(%ebp)
0875af77 +0x0c7:  adc    %edi,-0xc(%ebp)
0875af7a +0x0ca:  xor    %edx,%edx
0875af7c +0x0cc:  mov    -0xc(%ebp),%edi
0875af7f +0x0cf:  mov    %edi,-0x24(%ebp)
0875af82 +0x0d2:  mov    -0x24(%ebp),%esi
0875af85 +0x0d5:  xor    %edi,%edi
0875af87 +0x0d7:  add    %ecx,%esi
0875af89 +0x0d9:  adc    %edx,%edi
0875af8b +0x0db:  mov    %esi,%ecx
0875af8d +0x0dd:  mov    -0x1c(%ebp),%edx
0875af90 +0x0e0:  mov    0xc(%ebp),%esi
0875af93 +0x0e3:  add    %edi,%edx
0875af95 +0x0e5:  mov    (%esi),%edi
0875af97 +0x0e7:  mov    0x10(%ebp),%esi
0875af9a +0x0ea:  mov    %edx,-0x1c(%ebp)
0875af9d +0x0ed:  mov    0x8(%esi),%eax
0875afa0 +0x0f0:  mov    -0x10(%ebp),%esi
0875afa3 +0x0f3:  mul    %edi
0875afa5 +0x0f5:  xor    %edi,%edi
0875afa7 +0x0f7:  mov    %eax,-0x18(%ebp)
0875afaa +0x0fa:  mov    -0x1c(%ebp),%eax
0875afad +0x0fd:  add    %esi,-0x18(%ebp)
0875afb0 +0x100:  mov    %edx,-0x14(%ebp)
0875afb3 +0x103:  adc    %edi,-0x14(%ebp)
0875afb6 +0x106:  xor    %edx,%edx
0875afb8 +0x108:  mov    -0x14(%ebp),%edi
0875afbb +0x10b:  mov    %edi,-0x24(%ebp)
0875afbe +0x10e:  mov    -0x24(%ebp),%esi
0875afc1 +0x111:  xor    %edi,%edi
0875afc3 +0x113:  add    %ecx,%esi
0875afc5 +0x115:  adc    %edx,%edi
0875afc7 +0x117:  mov    %esi,%ecx
0875afc9 +0x119:  mov    0x8(%ebp),%edx
0875afcc +0x11c:  add    %edi,%eax
0875afce +0x11e:  mov    -0x18(%ebp),%esi
0875afd1 +0x121:  mov    0xc(%ebp),%edi
0875afd4 +0x124:  mov    %eax,-0x1c(%ebp)
0875afd7 +0x127:  mov    %esi,0x8(%edx)
0875afda +0x12a:  mov    (%edi),%esi
0875afdc +0x12c:  mov    0x10(%ebp),%edi
0875afdf +0x12f:  mov    0xc(%edi),%eax
0875afe2 +0x132:  xor    %edi,%edi
0875afe4 +0x134:  mul    %esi
0875afe6 +0x136:  mov    %eax,-0x10(%ebp)
0875afe9 +0x139:  add    %ecx,-0x10(%ebp)
0875afec +0x13c:  mov    %edx,-0xc(%ebp)
0875afef +0x13f:  adc    %edi,-0xc(%ebp)
0875aff2 +0x142:  xor    %edx,%edx
0875aff4 +0x144:  mov    -0xc(%ebp),%eax
0875aff7 +0x147:  xor    %edi,%edi
0875aff9 +0x149:  mov    %eax,-0x24(%ebp)
0875affc +0x14c:  mov    -0x1c(%ebp),%esi
0875afff +0x14f:  mov    -0x24(%ebp),%eax
0875b002 +0x152:  add    %eax,%esi
0875b004 +0x154:  mov    %esi,%ecx
0875b006 +0x156:  mov    0xc(%ebp),%esi
0875b009 +0x159:  adc    %edx,%edi
0875b00b +0x15b:  mov    %edi,-0x1c(%ebp)
0875b00e +0x15e:  mov    0x4(%esi),%edi
0875b011 +0x161:  mov    0x10(%ebp),%esi
0875b014 +0x164:  mov    0x8(%esi),%eax
0875b017 +0x167:  mov    -0x10(%ebp),%esi
0875b01a +0x16a:  mul    %edi
0875b01c +0x16c:  xor    %edi,%edi
0875b01e +0x16e:  mov    %eax,-0x18(%ebp)
0875b021 +0x171:  add    %esi,-0x18(%ebp)
0875b024 +0x174:  mov    %edx,-0x14(%ebp)
0875b027 +0x177:  adc    %edi,-0x14(%ebp)
0875b02a +0x17a:  xor    %edx,%edx
0875b02c +0x17c:  mov    -0x14(%ebp),%edi
0875b02f +0x17f:  mov    %edi,-0x24(%ebp)
0875b032 +0x182:  mov    -0x24(%ebp),%esi
0875b035 +0x185:  xor    %edi,%edi
0875b037 +0x187:  add    %ecx,%esi
0875b039 +0x189:  adc    %edx,%edi
0875b03b +0x18b:  mov    %esi,%ecx
0875b03d +0x18d:  mov    -0x1c(%ebp),%edx
0875b040 +0x190:  mov    0xc(%ebp),%esi
0875b043 +0x193:  add    %edi,%edx
0875b045 +0x195:  mov    0x8(%esi),%edi
0875b048 +0x198:  mov    0x10(%ebp),%esi
0875b04b +0x19b:  mov    %edx,-0x1c(%ebp)
0875b04e +0x19e:  mov    0x4(%esi),%eax
0875b051 +0x1a1:  mov    -0x18(%ebp),%esi
0875b054 +0x1a4:  mul    %edi
0875b056 +0x1a6:  xor    %edi,%edi
0875b058 +0x1a8:  mov    %eax,-0x10(%ebp)
0875b05b +0x1ab:  add    %esi,-0x10(%ebp)
0875b05e +0x1ae:  mov    %edx,-0xc(%ebp)
0875b061 +0x1b1:  adc    %edi,-0xc(%ebp)
0875b064 +0x1b4:  xor    %edx,%edx
0875b066 +0x1b6:  mov    -0xc(%ebp),%edi
0875b069 +0x1b9:  mov    %edi,-0x24(%ebp)
0875b06c +0x1bc:  mov    -0x24(%ebp),%esi
0875b06f +0x1bf:  xor    %edi,%edi
0875b071 +0x1c1:  add    %ecx,%esi
0875b073 +0x1c3:  adc    %edx,%edi
0875b075 +0x1c5:  mov    %esi,%ecx
0875b077 +0x1c7:  mov    -0x1c(%ebp),%edx
0875b07a +0x1ca:  mov    0xc(%ebp),%esi
0875b07d +0x1cd:  add    %edi,%edx
0875b07f +0x1cf:  mov    0xc(%esi),%edi
0875b082 +0x1d2:  mov    0x10(%ebp),%esi
0875b085 +0x1d5:  mov    %edx,-0x1c(%ebp)
0875b088 +0x1d8:  mov    (%esi),%eax
0875b08a +0x1da:  mov    -0x10(%ebp),%esi
0875b08d +0x1dd:  mul    %edi
0875b08f +0x1df:  xor    %edi,%edi
0875b091 +0x1e1:  mov    %eax,-0x18(%ebp)
0875b094 +0x1e4:  mov    -0x1c(%ebp),%eax
0875b097 +0x1e7:  add    %esi,-0x18(%ebp)
0875b09a +0x1ea:  mov    %edx,-0x14(%ebp)
0875b09d +0x1ed:  adc    %edi,-0x14(%ebp)
0875b0a0 +0x1f0:  xor    %edx,%edx
0875b0a2 +0x1f2:  mov    -0x14(%ebp),%edi
0875b0a5 +0x1f5:  mov    %edi,-0x24(%ebp)
0875b0a8 +0x1f8:  mov    -0x24(%ebp),%esi
0875b0ab +0x1fb:  xor    %edi,%edi
0875b0ad +0x1fd:  add    %ecx,%esi
0875b0af +0x1ff:  adc    %edx,%edi
0875b0b1 +0x201:  mov    %esi,%ecx
0875b0b3 +0x203:  mov    0x8(%ebp),%edx
0875b0b6 +0x206:  mov    -0x18(%ebp),%esi
0875b0b9 +0x209:  add    %edi,%eax
0875b0bb +0x20b:  mov    0xc(%ebp),%edi
0875b0be +0x20e:  mov    %eax,-0x10(%ebp)
0875b0c1 +0x211:  mov    %esi,0xc(%edx)
0875b0c4 +0x214:  mov    (%edi),%esi
0875b0c6 +0x216:  mov    0x10(%ebp),%edi
0875b0c9 +0x219:  mov    0x10(%edi),%eax
0875b0cc +0x21c:  xor    %edi,%edi
0875b0ce +0x21e:  mul    %esi
0875b0d0 +0x220:  mov    %eax,-0x18(%ebp)
0875b0d3 +0x223:  add    %ecx,-0x18(%ebp)
0875b0d6 +0x226:  mov    %edx,-0x14(%ebp)
0875b0d9 +0x229:  adc    %edi,-0x14(%ebp)
0875b0dc +0x22c:  xor    %edx,%edx
0875b0de +0x22e:  mov    -0x14(%ebp),%eax
0875b0e1 +0x231:  xor    %edi,%edi
0875b0e3 +0x233:  mov    %eax,-0x24(%ebp)
0875b0e6 +0x236:  mov    -0x10(%ebp),%esi
0875b0e9 +0x239:  mov    -0x24(%ebp),%eax
0875b0ec +0x23c:  add    %eax,%esi
0875b0ee +0x23e:  mov    %esi,%ecx
0875b0f0 +0x240:  mov    0xc(%ebp),%esi
0875b0f3 +0x243:  adc    %edx,%edi
0875b0f5 +0x245:  mov    %edi,-0x1c(%ebp)
0875b0f8 +0x248:  mov    0x4(%esi),%edi
0875b0fb +0x24b:  mov    0x10(%ebp),%esi
0875b0fe +0x24e:  mov    0xc(%esi),%eax
0875b101 +0x251:  mov    -0x18(%ebp),%esi
0875b104 +0x254:  mul    %edi
0875b106 +0x256:  xor    %edi,%edi
0875b108 +0x258:  mov    %eax,-0x10(%ebp)
0875b10b +0x25b:  add    %esi,-0x10(%ebp)
0875b10e +0x25e:  mov    %edx,-0xc(%ebp)
0875b111 +0x261:  adc    %edi,-0xc(%ebp)
0875b114 +0x264:  xor    %edx,%edx
0875b116 +0x266:  mov    -0xc(%ebp),%edi
0875b119 +0x269:  mov    %edi,-0x24(%ebp)
0875b11c +0x26c:  mov    -0x24(%ebp),%esi
0875b11f +0x26f:  xor    %edi,%edi
0875b121 +0x271:  add    %ecx,%esi
0875b123 +0x273:  adc    %edx,%edi
0875b125 +0x275:  mov    %esi,%ecx
0875b127 +0x277:  mov    -0x1c(%ebp),%edx
0875b12a +0x27a:  mov    0xc(%ebp),%esi
0875b12d +0x27d:  add    %edi,%edx
0875b12f +0x27f:  mov    0x8(%esi),%edi
0875b132 +0x282:  mov    0x10(%ebp),%esi
0875b135 +0x285:  mov    %edx,-0x1c(%ebp)
0875b138 +0x288:  mov    0x8(%esi),%eax
0875b13b +0x28b:  mov    -0x10(%ebp),%esi
0875b13e +0x28e:  mul    %edi
0875b140 +0x290:  xor    %edi,%edi
0875b142 +0x292:  mov    %eax,-0x18(%ebp)
0875b145 +0x295:  add    %esi,-0x18(%ebp)
0875b148 +0x298:  mov    %edx,-0x14(%ebp)
0875b14b +0x29b:  adc    %edi,-0x14(%ebp)
0875b14e +0x29e:  xor    %edx,%edx
0875b150 +0x2a0:  mov    -0x14(%ebp),%edi
0875b153 +0x2a3:  mov    %edi,-0x24(%ebp)
0875b156 +0x2a6:  mov    -0x24(%ebp),%esi
0875b159 +0x2a9:  xor    %edi,%edi
0875b15b +0x2ab:  add    %ecx,%esi
0875b15d +0x2ad:  adc    %edx,%edi
0875b15f +0x2af:  mov    %esi,%ecx
0875b161 +0x2b1:  mov    -0x1c(%ebp),%edx
0875b164 +0x2b4:  mov    0xc(%ebp),%esi
0875b167 +0x2b7:  add    %edi,%edx
0875b169 +0x2b9:  mov    0xc(%esi),%edi
0875b16c +0x2bc:  mov    0x10(%ebp),%esi
0875b16f +0x2bf:  mov    %edx,-0x1c(%ebp)
0875b172 +0x2c2:  mov    0x4(%esi),%eax
0875b175 +0x2c5:  mov    -0x18(%ebp),%esi
0875b178 +0x2c8:  mul    %edi
0875b17a +0x2ca:  xor    %edi,%edi
0875b17c +0x2cc:  mov    %eax,-0x10(%ebp)
0875b17f +0x2cf:  add    %esi,-0x10(%ebp)
0875b182 +0x2d2:  mov    %edx,-0xc(%ebp)
0875b185 +0x2d5:  adc    %edi,-0xc(%ebp)
0875b188 +0x2d8:  xor    %edx,%edx
0875b18a +0x2da:  mov    -0xc(%ebp),%edi
0875b18d +0x2dd:  mov    %edi,-0x24(%ebp)
0875b190 +0x2e0:  mov    -0x24(%ebp),%esi
0875b193 +0x2e3:  xor    %edi,%edi
0875b195 +0x2e5:  add    %ecx,%esi
0875b197 +0x2e7:  adc    %edx,%edi
0875b199 +0x2e9:  mov    %esi,%ecx
0875b19b +0x2eb:  mov    -0x1c(%ebp),%edx
0875b19e +0x2ee:  mov    0xc(%ebp),%esi
0875b1a1 +0x2f1:  add    %edi,%edx
0875b1a3 +0x2f3:  mov    0x10(%esi),%edi
0875b1a6 +0x2f6:  mov    0x10(%ebp),%esi
0875b1a9 +0x2f9:  mov    %edx,-0x1c(%ebp)
0875b1ac +0x2fc:  mov    (%esi),%eax
0875b1ae +0x2fe:  mov    -0x10(%ebp),%esi
0875b1b1 +0x301:  mul    %edi
0875b1b3 +0x303:  xor    %edi,%edi
0875b1b5 +0x305:  mov    %eax,-0x18(%ebp)
0875b1b8 +0x308:  add    %esi,-0x18(%ebp)
0875b1bb +0x30b:  mov    %edx,-0x14(%ebp)
0875b1be +0x30e:  adc    %edi,-0x14(%ebp)
0875b1c1 +0x311:  xor    %edx,%edx
0875b1c3 +0x313:  mov    -0x14(%ebp),%edi
0875b1c6 +0x316:  mov    %edi,-0x24(%ebp)
0875b1c9 +0x319:  mov    -0x24(%ebp),%esi
0875b1cc +0x31c:  xor    %edi,%edi
0875b1ce +0x31e:  mov    -0x1c(%ebp),%eax
0875b1d1 +0x321:  add    %ecx,%esi
0875b1d3 +0x323:  adc    %edx,%edi
0875b1d5 +0x325:  mov    %esi,%ecx
0875b1d7 +0x327:  mov    0x8(%ebp),%edx
0875b1da +0x32a:  mov    -0x18(%ebp),%esi
0875b1dd +0x32d:  add    %edi,%eax
0875b1df +0x32f:  mov    0xc(%ebp),%edi
0875b1e2 +0x332:  mov    %eax,-0x1c(%ebp)
0875b1e5 +0x335:  mov    %esi,0x10(%edx)
0875b1e8 +0x338:  mov    (%edi),%esi
0875b1ea +0x33a:  mov    0x10(%ebp),%edi
0875b1ed +0x33d:  mov    0x14(%edi),%eax
0875b1f0 +0x340:  xor    %edi,%edi
0875b1f2 +0x342:  mul    %esi
0875b1f4 +0x344:  mov    -0x1c(%ebp),%esi
0875b1f7 +0x347:  mov    %eax,-0x10(%ebp)
0875b1fa +0x34a:  add    %ecx,-0x10(%ebp)
0875b1fd +0x34d:  mov    %edx,-0xc(%ebp)
0875b200 +0x350:  adc    %edi,-0xc(%ebp)
0875b203 +0x353:  xor    %edx,%edx
0875b205 +0x355:  mov    -0xc(%ebp),%eax
0875b208 +0x358:  xor    %edi,%edi
0875b20a +0x35a:  mov    %eax,-0x24(%ebp)
0875b20d +0x35d:  mov    -0x24(%ebp),%eax
0875b210 +0x360:  add    %eax,%esi
0875b212 +0x362:  mov    %esi,%ecx
0875b214 +0x364:  mov    0xc(%ebp),%esi
0875b217 +0x367:  adc    %edx,%edi
0875b219 +0x369:  mov    %edi,-0x1c(%ebp)
0875b21c +0x36c:  mov    0x4(%esi),%edi
0875b21f +0x36f:  mov    0x10(%ebp),%esi
0875b222 +0x372:  mov    0x10(%esi),%eax
0875b225 +0x375:  mov    -0x10(%ebp),%esi
0875b228 +0x378:  mul    %edi
0875b22a +0x37a:  xor    %edi,%edi
0875b22c +0x37c:  mov    %eax,-0x18(%ebp)
0875b22f +0x37f:  add    %esi,-0x18(%ebp)
0875b232 +0x382:  mov    %edx,-0x14(%ebp)
0875b235 +0x385:  adc    %edi,-0x14(%ebp)
0875b238 +0x388:  xor    %edx,%edx
0875b23a +0x38a:  mov    -0x14(%ebp),%edi
0875b23d +0x38d:  mov    %edi,-0x24(%ebp)
0875b240 +0x390:  mov    -0x24(%ebp),%esi
0875b243 +0x393:  xor    %edi,%edi
0875b245 +0x395:  add    %ecx,%esi
0875b247 +0x397:  adc    %edx,%edi
0875b249 +0x399:  mov    %esi,%ecx
0875b24b +0x39b:  mov    -0x1c(%ebp),%edx
0875b24e +0x39e:  mov    0xc(%ebp),%esi
0875b251 +0x3a1:  add    %edi,%edx
0875b253 +0x3a3:  mov    0x8(%esi),%edi
0875b256 +0x3a6:  mov    0x10(%ebp),%esi
0875b259 +0x3a9:  mov    %edx,-0x1c(%ebp)
0875b25c +0x3ac:  mov    0xc(%esi),%eax
0875b25f +0x3af:  mov    -0x18(%ebp),%esi
0875b262 +0x3b2:  mul    %edi
0875b264 +0x3b4:  xor    %edi,%edi
0875b266 +0x3b6:  mov    %eax,-0x10(%ebp)
0875b269 +0x3b9:  add    %esi,-0x10(%ebp)
0875b26c +0x3bc:  mov    %edx,-0xc(%ebp)
0875b26f +0x3bf:  adc    %edi,-0xc(%ebp)
0875b272 +0x3c2:  xor    %edx,%edx
0875b274 +0x3c4:  mov    -0xc(%ebp),%edi
0875b277 +0x3c7:  mov    %edi,-0x24(%ebp)
0875b27a +0x3ca:  mov    -0x24(%ebp),%esi
0875b27d +0x3cd:  xor    %edi,%edi
0875b27f +0x3cf:  add    %ecx,%esi
0875b281 +0x3d1:  adc    %edx,%edi
0875b283 +0x3d3:  mov    %esi,%ecx
0875b285 +0x3d5:  mov    -0x1c(%ebp),%edx
0875b288 +0x3d8:  mov    0xc(%ebp),%esi
0875b28b +0x3db:  add    %edi,%edx
0875b28d +0x3dd:  mov    0xc(%esi),%edi
0875b290 +0x3e0:  mov    0x10(%ebp),%esi
0875b293 +0x3e3:  mov    %edx,-0x1c(%ebp)
0875b296 +0x3e6:  mov    0x8(%esi),%eax
0875b299 +0x3e9:  mov    -0x10(%ebp),%esi
0875b29c +0x3ec:  mul    %edi
0875b29e +0x3ee:  xor    %edi,%edi
0875b2a0 +0x3f0:  mov    %eax,-0x18(%ebp)
0875b2a3 +0x3f3:  add    %esi,-0x18(%ebp)
0875b2a6 +0x3f6:  mov    %edx,-0x14(%ebp)
0875b2a9 +0x3f9:  adc    %edi,-0x14(%ebp)
0875b2ac +0x3fc:  xor    %edx,%edx
0875b2ae +0x3fe:  mov    -0x14(%ebp),%edi
0875b2b1 +0x401:  mov    %edi,-0x24(%ebp)
0875b2b4 +0x404:  mov    -0x24(%ebp),%esi
0875b2b7 +0x407:  xor    %edi,%edi
0875b2b9 +0x409:  add    %ecx,%esi
0875b2bb +0x40b:  adc    %edx,%edi
0875b2bd +0x40d:  mov    %esi,%ecx
0875b2bf +0x40f:  mov    -0x1c(%ebp),%edx
0875b2c2 +0x412:  mov    0xc(%ebp),%esi
0875b2c5 +0x415:  add    %edi,%edx
0875b2c7 +0x417:  mov    0x10(%esi),%edi
0875b2ca +0x41a:  mov    0x10(%ebp),%esi
0875b2cd +0x41d:  mov    %edx,-0x1c(%ebp)
0875b2d0 +0x420:  mov    0x4(%esi),%eax
0875b2d3 +0x423:  mov    -0x18(%ebp),%esi
0875b2d6 +0x426:  mul    %edi
0875b2d8 +0x428:  xor    %edi,%edi
0875b2da +0x42a:  mov    %eax,-0x10(%ebp)
0875b2dd +0x42d:  add    %esi,-0x10(%ebp)
0875b2e0 +0x430:  mov    %edx,-0xc(%ebp)
0875b2e3 +0x433:  adc    %edi,-0xc(%ebp)
0875b2e6 +0x436:  xor    %edx,%edx
0875b2e8 +0x438:  mov    -0xc(%ebp),%edi
0875b2eb +0x43b:  mov    %edi,-0x24(%ebp)
0875b2ee +0x43e:  mov    -0x24(%ebp),%esi
0875b2f1 +0x441:  xor    %edi,%edi
0875b2f3 +0x443:  add    %ecx,%esi
0875b2f5 +0x445:  adc    %edx,%edi
0875b2f7 +0x447:  mov    %esi,%ecx
0875b2f9 +0x449:  mov    -0x1c(%ebp),%edx
0875b2fc +0x44c:  mov    0xc(%ebp),%esi
0875b2ff +0x44f:  add    %edi,%edx
0875b301 +0x451:  mov    0x14(%esi),%edi
0875b304 +0x454:  mov    0x10(%ebp),%esi
0875b307 +0x457:  mov    %edx,-0x1c(%ebp)
0875b30a +0x45a:  mov    (%esi),%eax
0875b30c +0x45c:  mov    -0x10(%ebp),%esi
0875b30f +0x45f:  mul    %edi
0875b311 +0x461:  xor    %edi,%edi
0875b313 +0x463:  mov    %eax,-0x18(%ebp)
0875b316 +0x466:  add    %esi,-0x18(%ebp)
0875b319 +0x469:  mov    %edx,-0x14(%ebp)
0875b31c +0x46c:  adc    %edi,-0x14(%ebp)
0875b31f +0x46f:  xor    %edx,%edx
0875b321 +0x471:  mov    -0x14(%ebp),%edi
0875b324 +0x474:  mov    %edi,-0x24(%ebp)
0875b327 +0x477:  mov    -0x24(%ebp),%esi
0875b32a +0x47a:  xor    %edi,%edi
0875b32c +0x47c:  mov    -0x1c(%ebp),%eax
0875b32f +0x47f:  add    %ecx,%esi
0875b331 +0x481:  adc    %edx,%edi
0875b333 +0x483:  mov    %esi,%ecx
0875b335 +0x485:  mov    0x8(%ebp),%edx
0875b338 +0x488:  mov    -0x18(%ebp),%esi
0875b33b +0x48b:  add    %edi,%eax
0875b33d +0x48d:  mov    %eax,-0x1c(%ebp)
0875b340 +0x490:  mov    0xc(%ebp),%eax
0875b343 +0x493:  mov    %esi,0x14(%edx)
0875b346 +0x496:  mov    0x10(%ebp),%esi
0875b349 +0x499:  mov    (%eax),%edi
0875b34b +0x49b:  mov    0x18(%esi),%eax
0875b34e +0x49e:  mul    %edi
0875b350 +0x4a0:  xor    %edi,%edi
0875b352 +0x4a2:  mov    %eax,-0x10(%ebp)
0875b355 +0x4a5:  mov    0xc(%ebp),%eax
0875b358 +0x4a8:  add    %ecx,-0x10(%ebp)
0875b35b +0x4ab:  mov    -0x1c(%ebp),%ecx
0875b35e +0x4ae:  mov    %edx,-0xc(%ebp)
0875b361 +0x4b1:  mov    -0x10(%ebp),%esi
0875b364 +0x4b4:  adc    %edi,-0xc(%ebp)
0875b367 +0x4b7:  mov    -0xc(%ebp),%edi
0875b36a +0x4ba:  mov    0x4(%eax),%eax
0875b36d +0x4bd:  add    %edi,%ecx
0875b36f +0x4bf:  mov    0x10(%ebp),%edi
0875b372 +0x4c2:  mull   0x14(%edi)
0875b375 +0x4c5:  xor    %edi,%edi
0875b377 +0x4c7:  mov    %edx,-0xc(%ebp)
0875b37a +0x4ca:  mov    0xc(%ebp),%edx
0875b37d +0x4cd:  mov    %eax,-0x10(%ebp)
0875b380 +0x4d0:  add    %esi,-0x10(%ebp)
0875b383 +0x4d3:  adc    %edi,-0xc(%ebp)
0875b386 +0x4d6:  mov    -0xc(%ebp),%eax
0875b389 +0x4d9:  mov    0x10(%ebp),%edi
0875b38c +0x4dc:  mov    0x8(%edx),%edx
0875b38f +0x4df:  mov    -0x10(%ebp),%esi
0875b392 +0x4e2:  add    %eax,%ecx
0875b394 +0x4e4:  mov    %edx,%eax
0875b396 +0x4e6:  mull   0x10(%edi)
0875b399 +0x4e9:  xor    %edi,%edi
0875b39b +0x4eb:  mov    %eax,-0x10(%ebp)
0875b39e +0x4ee:  mov    %edx,-0xc(%ebp)
0875b3a1 +0x4f1:  mov    0xc(%ebp),%edx
0875b3a4 +0x4f4:  add    %esi,-0x10(%ebp)
0875b3a7 +0x4f7:  adc    %edi,-0xc(%ebp)
0875b3aa +0x4fa:  mov    -0xc(%ebp),%eax
0875b3ad +0x4fd:  mov    0x10(%ebp),%edi
0875b3b0 +0x500:  mov    0xc(%edx),%edx
0875b3b3 +0x503:  mov    -0x10(%ebp),%esi
0875b3b6 +0x506:  add    %eax,%ecx
0875b3b8 +0x508:  mov    %edx,%eax
0875b3ba +0x50a:  mull   0xc(%edi)
0875b3bd +0x50d:  xor    %edi,%edi
0875b3bf +0x50f:  mov    %eax,-0x10(%ebp)
0875b3c2 +0x512:  add    %esi,-0x10(%ebp)
0875b3c5 +0x515:  mov    -0x10(%ebp),%esi
0875b3c8 +0x518:  mov    %edx,-0xc(%ebp)
0875b3cb +0x51b:  mov    0xc(%ebp),%edx
0875b3ce +0x51e:  adc    %edi,-0xc(%ebp)
0875b3d1 +0x521:  mov    -0xc(%ebp),%eax
0875b3d4 +0x524:  mov    0x10(%edx),%edi
0875b3d7 +0x527:  add    %eax,%ecx
0875b3d9 +0x529:  mov    %ecx,-0x18(%ebp)
0875b3dc +0x52c:  mov    0x10(%ebp),%ecx
0875b3df +0x52f:  mov    0x8(%ecx),%eax
0875b3e2 +0x532:  mul    %edi
0875b3e4 +0x534:  xor    %edi,%edi
0875b3e6 +0x536:  mov    %eax,-0x10(%ebp)
0875b3e9 +0x539:  add    %esi,-0x10(%ebp)
0875b3ec +0x53c:  mov    -0x10(%ebp),%ecx
0875b3ef +0x53f:  mov    %edx,-0xc(%ebp)
0875b3f2 +0x542:  adc    %edi,-0xc(%ebp)
0875b3f5 +0x545:  mov    -0xc(%ebp),%esi
0875b3f8 +0x548:  add    -0x18(%ebp),%esi
0875b3fb +0x54b:  mov    %esi,-0x18(%ebp)
0875b3fe +0x54e:  mov    0xc(%ebp),%edi
0875b401 +0x551:  mov    0x14(%edi),%esi
0875b404 +0x554:  mov    0x10(%ebp),%edi
0875b407 +0x557:  mov    0x4(%edi),%eax
0875b40a +0x55a:  xor    %edi,%edi
0875b40c +0x55c:  mul    %esi
0875b40e +0x55e:  mov    %edx,-0xc(%ebp)
0875b411 +0x561:  mov    0xc(%ebp),%edx
0875b414 +0x564:  mov    %eax,-0x10(%ebp)
0875b417 +0x567:  add    %ecx,-0x10(%ebp)
0875b41a +0x56a:  adc    %edi,-0xc(%ebp)
0875b41d +0x56d:  mov    -0xc(%ebp),%eax
0875b420 +0x570:  mov    0x18(%edx),%edx
0875b423 +0x573:  mov    0x10(%ebp),%edi
0875b426 +0x576:  mov    -0x18(%ebp),%ecx
0875b429 +0x579:  mov    -0x10(%ebp),%esi
0875b42c +0x57c:  add    %eax,%ecx
0875b42e +0x57e:  mov    %edx,%eax
0875b430 +0x580:  mull   (%edi)
0875b432 +0x582:  xor    %edi,%edi
0875b434 +0x584:  mov    %eax,-0x10(%ebp)
0875b437 +0x587:  add    %esi,-0x10(%ebp)
0875b43a +0x58a:  mov    -0x10(%ebp),%esi
0875b43d +0x58d:  mov    %edx,-0xc(%ebp)
0875b440 +0x590:  mov    0x8(%ebp),%edx
0875b443 +0x593:  adc    %edi,-0xc(%ebp)
0875b446 +0x596:  mov    -0xc(%ebp),%eax
0875b449 +0x599:  mov    0x10(%ebp),%edi
0875b44c +0x59c:  mov    %esi,0x18(%edx)
0875b44f +0x59f:  mov    0xc(%ebp),%edx
0875b452 +0x5a2:  add    %eax,%ecx
0875b454 +0x5a4:  mov    (%edi),%eax
0875b456 +0x5a6:  imul   0x1c(%edx),%eax
0875b45a +0x5aa:  lea    (%eax,%ecx,1),%ecx
0875b45d +0x5ad:  mov    0x1c(%edi),%eax
0875b460 +0x5b0:  imul   (%edx),%eax
0875b463 +0x5b3:  add    %eax,%ecx
0875b465 +0x5b5:  mov    0x18(%edi),%eax
0875b468 +0x5b8:  imul   0x4(%edx),%eax
0875b46c +0x5bc:  add    %eax,%ecx
0875b46e +0x5be:  mov    0x10(%edi),%eax
0875b471 +0x5c1:  imul   0xc(%edx),%eax
0875b475 +0x5c5:  add    %eax,%ecx
0875b477 +0x5c7:  mov    0x14(%edi),%eax
0875b47a +0x5ca:  imul   0x8(%edx),%eax
0875b47e +0x5ce:  add    %eax,%ecx
0875b480 +0x5d0:  mov    0x8(%edi),%eax
0875b483 +0x5d3:  imul   0x14(%edx),%eax
0875b487 +0x5d7:  add    %eax,%ecx
0875b489 +0x5d9:  mov    0xc(%edi),%eax
0875b48c +0x5dc:  imul   0x10(%edx),%eax
0875b490 +0x5e0:  add    %eax,%ecx
0875b492 +0x5e2:  mov    0x4(%edi),%eax
0875b495 +0x5e5:  imul   0x18(%edx),%eax
0875b499 +0x5e9:  lea    (%ecx,%eax,1),%eax
0875b49c +0x5ec:  mov    0x8(%ebp),%ecx
0875b49f +0x5ef:  mov    %eax,0x1c(%ecx)
0875b4a2 +0x5f2:  add    $0x30,%esp
0875b4a5 +0x5f5:  pop    %esi
0875b4a6 +0x5f6:  pop    %edi
0875b4a7 +0x5f7:  pop    %ebp
0875b4a8 +0x5f8:  ret
0875b4a9 +0x5f9:  nop
0875b4aa +0x5fa:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::Portable::Multiply8Bottom @ 0x875aeb0

/* TaoCrypt::Portable::Multiply8Bottom(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::Portable::Multiply8Bottom(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  
  uVar18 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2 >> 0x20);
  *param_1 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2);
  uVar2 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2);
  uVar1 = uVar2 + uVar18;
  uVar2 = (int)((ulonglong)param_3[1] * (ulonglong)*param_2 >> 0x20) + (uint)CARRY4(uVar2,uVar18);
  uVar21 = (uint)((ulonglong)param_2[1] * (ulonglong)*param_3);
  uVar18 = (int)((ulonglong)param_2[1] * (ulonglong)*param_3 >> 0x20) + (uint)CARRY4(uVar21,uVar1);
  uVar9 = (uint)CARRY4(uVar18,uVar2);
  param_1[1] = uVar21 + uVar1;
  lVar14 = (ulonglong)*param_3 * (ulonglong)param_2[2] + (ulonglong)(uVar18 + uVar2);
  uVar1 = (uint)lVar14;
  uVar2 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar19 = uVar9 + uVar2;
  uVar21 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1]);
  uVar18 = (int)((ulonglong)param_3[1] * (ulonglong)param_2[1] >> 0x20) + (uint)CARRY4(uVar21,uVar1)
  ;
  uVar20 = uVar18 + uVar19;
  lVar14 = (ulonglong)param_3[2] * (ulonglong)*param_2 + (ulonglong)(uVar21 + uVar1);
  uVar1 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar21 = uVar1 + uVar20;
  uVar19 = (uint)CARRY4(uVar9,uVar2) + (uint)CARRY4(uVar18,uVar19) + (uint)CARRY4(uVar1,uVar20);
  param_1[2] = (uint)lVar14;
  uVar2 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2);
  uVar1 = (int)((ulonglong)param_3[3] * (ulonglong)*param_2 >> 0x20) + (uint)CARRY4(uVar2,uVar21);
  uVar20 = uVar19 + uVar1;
  lVar14 = (ulonglong)param_3[2] * (ulonglong)param_2[1] + (ulonglong)(uVar2 + uVar21);
  uVar2 = (uint)lVar14;
  uVar18 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar22 = uVar18 + uVar20;
  uVar21 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2]);
  uVar9 = (int)((ulonglong)param_3[1] * (ulonglong)param_2[2] >> 0x20) + (uint)CARRY4(uVar21,uVar2);
  uVar23 = uVar9 + uVar22;
  lVar14 = (ulonglong)*param_3 * (ulonglong)param_2[3] + (ulonglong)(uVar21 + uVar2);
  uVar2 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar20 = (uint)CARRY4(uVar19,uVar1) + (uint)CARRY4(uVar18,uVar20) + (uint)CARRY4(uVar9,uVar22) +
           (uint)CARRY4(uVar2,uVar23);
  param_1[3] = (uint)lVar14;
  lVar14 = (ulonglong)param_3[4] * (ulonglong)*param_2 + (ulonglong)(uVar2 + uVar23);
  uVar1 = (uint)lVar14;
  uVar2 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar22 = uVar20 + uVar2;
  uVar9 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1]);
  uVar18 = (int)((ulonglong)param_3[3] * (ulonglong)param_2[1] >> 0x20) + (uint)CARRY4(uVar9,uVar1);
  uVar23 = uVar18 + uVar22;
  lVar14 = (ulonglong)param_3[2] * (ulonglong)param_2[2] + (ulonglong)(uVar9 + uVar1);
  uVar1 = (uint)lVar14;
  uVar9 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar24 = uVar9 + uVar23;
  uVar19 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3]);
  uVar21 = (int)((ulonglong)param_3[1] * (ulonglong)param_2[3] >> 0x20) + (uint)CARRY4(uVar19,uVar1)
  ;
  uVar25 = uVar21 + uVar24;
  lVar14 = (ulonglong)*param_3 * (ulonglong)param_2[4] + (ulonglong)(uVar19 + uVar1);
  uVar1 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar19 = uVar1 + uVar25;
  uVar17 = (uint)CARRY4(uVar20,uVar2) + (uint)CARRY4(uVar18,uVar22) + (uint)CARRY4(uVar9,uVar23) +
           (uint)CARRY4(uVar21,uVar24) + (uint)CARRY4(uVar1,uVar25);
  param_1[4] = (uint)lVar14;
  uVar2 = (uint)((ulonglong)param_3[5] * (ulonglong)*param_2);
  uVar1 = (int)((ulonglong)param_3[5] * (ulonglong)*param_2 >> 0x20) + (uint)CARRY4(uVar2,uVar19);
  uVar26 = uVar17 + uVar1;
  lVar14 = (ulonglong)param_3[4] * (ulonglong)param_2[1] + (ulonglong)(uVar2 + uVar19);
  uVar2 = (uint)lVar14;
  uVar18 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar27 = uVar18 + uVar26;
  uVar21 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2]);
  uVar9 = (int)((ulonglong)param_3[3] * (ulonglong)param_2[2] >> 0x20) + (uint)CARRY4(uVar21,uVar2);
  uVar28 = uVar9 + uVar27;
  lVar14 = (ulonglong)param_3[2] * (ulonglong)param_2[3] + (ulonglong)(uVar21 + uVar2);
  uVar2 = (uint)lVar14;
  uVar21 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar29 = uVar21 + uVar28;
  uVar20 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[4]);
  uVar19 = (int)((ulonglong)param_3[1] * (ulonglong)param_2[4] >> 0x20) + (uint)CARRY4(uVar20,uVar2)
  ;
  uVar30 = uVar19 + uVar29;
  lVar14 = (ulonglong)*param_3 * (ulonglong)param_2[5] + (ulonglong)(uVar20 + uVar2);
  uVar2 = (uint)((ulonglong)lVar14 >> 0x20);
  uVar31 = uVar2 + uVar30;
  param_1[5] = (uint)lVar14;
  uVar24 = *param_2;
  uVar25 = param_3[6];
  uVar10 = (uint)((ulonglong)uVar25 * (ulonglong)uVar24);
  uVar15 = (ulonglong)param_2[1] * (ulonglong)param_3[5] + (ulonglong)(uVar10 + uVar31);
  lVar14 = (ulonglong)param_2[2] * (ulonglong)param_3[4] + (uVar15 & 0xffffffff);
  uVar20 = (uint)lVar14;
  uVar3 = param_2[3];
  uVar4 = param_3[3];
  uVar11 = (uint)((ulonglong)uVar3 * (ulonglong)uVar4);
  uVar22 = uVar11 + uVar20;
  uVar5 = param_2[4];
  uVar6 = param_3[2];
  uVar12 = (uint)((ulonglong)uVar6 * (ulonglong)uVar5);
  lVar16 = (ulonglong)param_3[1] * (ulonglong)param_2[5] + (ulonglong)(uVar12 + uVar22);
  uVar23 = (uint)lVar16;
  uVar7 = param_2[6];
  uVar8 = *param_3;
  uVar13 = (uint)((ulonglong)uVar7 * (ulonglong)uVar8);
  param_1[6] = uVar13 + uVar23;
  param_1[7] = *param_3 * param_2[7] +
               (int)((ulonglong)uVar6 * (ulonglong)uVar5 >> 0x20) + (uint)CARRY4(uVar12,uVar22) +
               (uint)CARRY4(uVar17,uVar1) + (uint)CARRY4(uVar18,uVar26) + (uint)CARRY4(uVar9,uVar27)
               + (uint)CARRY4(uVar21,uVar28) + (uint)CARRY4(uVar19,uVar29) +
               (uint)CARRY4(uVar2,uVar30) +
               (int)((ulonglong)uVar25 * (ulonglong)uVar24 >> 0x20) + (uint)CARRY4(uVar10,uVar31) +
               (int)(uVar15 >> 0x20) + (int)((ulonglong)lVar14 >> 0x20) +
               (int)((ulonglong)uVar3 * (ulonglong)uVar4 >> 0x20) + (uint)CARRY4(uVar11,uVar20) +
               (int)((ulonglong)lVar16 >> 0x20) +
               (int)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x20) + (uint)CARRY4(uVar13,uVar23) +
               param_3[7] * *param_2 + param_3[6] * param_2[1] + param_3[4] * param_2[3] +
               param_3[5] * param_2[2] + param_3[2] * param_2[5] + param_3[3] * param_2[4] +
               param_3[1] * param_2[6];
  return;
}
```
