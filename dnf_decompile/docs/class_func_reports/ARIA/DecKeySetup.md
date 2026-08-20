# DecKeySetup

`_ZN4ARIA11DecKeySetupEPKhPhi`

`ARIA::DecKeySetup(unsigned char const*, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `ARIA` | `0x080a8f5d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080a8f5d  _ZN4ARIA11DecKeySetupEPKhPhi
#           ARIA::DecKeySetup(unsigned char const*, unsigned char*, int)
# range [0x080a8f5d, 0x080a956b]
080a8f5d +0x000:  push   %ebp
080a8f5e +0x001:  mov    %esp,%ebp
080a8f60 +0x003:  push   %edi
080a8f61 +0x004:  push   %esi
080a8f62 +0x005:  push   %ebx
080a8f63 +0x006:  sub    $0x30,%esp
080a8f66 +0x009:  mov    0x10(%ebp),%eax
080a8f69 +0x00c:  mov    %eax,0x8(%esp)
080a8f6d +0x010:  mov    0xc(%ebp),%eax
080a8f70 +0x013:  mov    %eax,0x4(%esp)
080a8f74 +0x017:  mov    0x8(%ebp),%eax
080a8f77 +0x01a:  mov    %eax,(%esp)
080a8f7a +0x01d:  call   080a6e17 <_ZN4ARIA11EncKeySetupEPKhPhi>  ; ARIA::EncKeySetup(unsigned char const*, unsigned char*, int)
080a8f7f +0x022:  mov    %eax,-0x20(%ebp)
080a8f82 +0x025:  mov    0xc(%ebp),%eax
080a8f85 +0x028:  mov    %eax,-0x28(%ebp)
080a8f88 +0x02b:  mov    -0x20(%ebp),%eax
080a8f8b +0x02e:  shl    $0x4,%eax
080a8f8e +0x031:  add    -0x28(%ebp),%eax
080a8f91 +0x034:  mov    %eax,-0x24(%ebp)
080a8f94 +0x037:  mov    -0x28(%ebp),%eax
080a8f97 +0x03a:  mov    (%eax),%eax
080a8f99 +0x03c:  mov    %eax,-0x30(%ebp)
080a8f9c +0x03f:  mov    -0x28(%ebp),%eax
080a8f9f +0x042:  add    $0x4,%eax
080a8fa2 +0x045:  mov    (%eax),%ebx
080a8fa4 +0x047:  mov    -0x28(%ebp),%eax
080a8fa7 +0x04a:  add    $0x8,%eax
080a8faa +0x04d:  mov    (%eax),%esi
080a8fac +0x04f:  mov    -0x28(%ebp),%eax
080a8faf +0x052:  add    $0xc,%eax
080a8fb2 +0x055:  mov    (%eax),%edi
080a8fb4 +0x057:  mov    -0x24(%ebp),%eax
080a8fb7 +0x05a:  mov    (%eax),%edx
080a8fb9 +0x05c:  mov    -0x28(%ebp),%eax
080a8fbc +0x05f:  mov    %edx,(%eax)
080a8fbe +0x061:  mov    -0x28(%ebp),%eax
080a8fc1 +0x064:  lea    0x4(%eax),%edx
080a8fc4 +0x067:  mov    -0x24(%ebp),%eax
080a8fc7 +0x06a:  add    $0x4,%eax
080a8fca +0x06d:  mov    (%eax),%eax
080a8fcc +0x06f:  mov    %eax,(%edx)
080a8fce +0x071:  mov    -0x28(%ebp),%eax
080a8fd1 +0x074:  lea    0x8(%eax),%edx
080a8fd4 +0x077:  mov    -0x24(%ebp),%eax
080a8fd7 +0x07a:  add    $0x8,%eax
080a8fda +0x07d:  mov    (%eax),%eax
080a8fdc +0x07f:  mov    %eax,(%edx)
080a8fde +0x081:  mov    -0x28(%ebp),%eax
080a8fe1 +0x084:  lea    0xc(%eax),%edx
080a8fe4 +0x087:  mov    -0x24(%ebp),%eax
080a8fe7 +0x08a:  add    $0xc,%eax
080a8fea +0x08d:  mov    (%eax),%eax
080a8fec +0x08f:  mov    %eax,(%edx)
080a8fee +0x091:  mov    -0x24(%ebp),%eax
080a8ff1 +0x094:  mov    -0x30(%ebp),%edx
080a8ff4 +0x097:  mov    %edx,(%eax)
080a8ff6 +0x099:  mov    -0x24(%ebp),%eax
080a8ff9 +0x09c:  add    $0x4,%eax
080a8ffc +0x09f:  mov    %ebx,(%eax)
080a8ffe +0x0a1:  mov    -0x24(%ebp),%eax
080a9001 +0x0a4:  add    $0x8,%eax
080a9004 +0x0a7:  mov    %esi,(%eax)
080a9006 +0x0a9:  mov    -0x24(%ebp),%eax
080a9009 +0x0ac:  add    $0xc,%eax
080a900c +0x0af:  mov    %edi,(%eax)
080a900e +0x0b1:  addl   $0x10,-0x28(%ebp)
080a9012 +0x0b5:  subl   $0x10,-0x24(%ebp)
080a9016 +0x0b9:  jmp    080a939d <+0x440>
080a901b +0x0be:  mov    -0x28(%ebp),%eax
080a901e +0x0c1:  mov    (%eax),%eax
080a9020 +0x0c3:  mov    %eax,%edx
080a9022 +0x0c5:  shl    $0x8,%edx
080a9025 +0x0c8:  mov    -0x28(%ebp),%eax
080a9028 +0x0cb:  mov    (%eax),%eax
080a902a +0x0cd:  shr    $0x8,%eax
080a902d +0x0d0:  xor    %eax,%edx
080a902f +0x0d2:  mov    -0x28(%ebp),%eax
080a9032 +0x0d5:  mov    (%eax),%eax
080a9034 +0x0d7:  shl    $0x10,%eax
080a9037 +0x0da:  xor    %eax,%edx
080a9039 +0x0dc:  mov    -0x28(%ebp),%eax
080a903c +0x0df:  mov    (%eax),%eax
080a903e +0x0e1:  shr    $0x10,%eax
080a9041 +0x0e4:  xor    %eax,%edx
080a9043 +0x0e6:  mov    -0x28(%ebp),%eax
080a9046 +0x0e9:  mov    (%eax),%eax
080a9048 +0x0eb:  shl    $0x18,%eax
080a904b +0x0ee:  xor    %eax,%edx
080a904d +0x0f0:  mov    -0x28(%ebp),%eax
080a9050 +0x0f3:  mov    (%eax),%eax
080a9052 +0x0f5:  shr    $0x18,%eax
080a9055 +0x0f8:  mov    %edx,%ecx
080a9057 +0x0fa:  xor    %eax,%ecx
080a9059 +0x0fc:  mov    %ecx,-0x30(%ebp)
080a905c +0x0ff:  mov    -0x28(%ebp),%eax
080a905f +0x102:  add    $0x4,%eax
080a9062 +0x105:  mov    (%eax),%eax
080a9064 +0x107:  mov    %eax,%edx
080a9066 +0x109:  shl    $0x8,%edx
080a9069 +0x10c:  mov    -0x28(%ebp),%eax
080a906c +0x10f:  add    $0x4,%eax
080a906f +0x112:  mov    (%eax),%eax
080a9071 +0x114:  shr    $0x8,%eax
080a9074 +0x117:  xor    %eax,%edx
080a9076 +0x119:  mov    -0x28(%ebp),%eax
080a9079 +0x11c:  add    $0x4,%eax
080a907c +0x11f:  mov    (%eax),%eax
080a907e +0x121:  shl    $0x10,%eax
080a9081 +0x124:  xor    %eax,%edx
080a9083 +0x126:  mov    -0x28(%ebp),%eax
080a9086 +0x129:  add    $0x4,%eax
080a9089 +0x12c:  mov    (%eax),%eax
080a908b +0x12e:  shr    $0x10,%eax
080a908e +0x131:  xor    %eax,%edx
080a9090 +0x133:  mov    -0x28(%ebp),%eax
080a9093 +0x136:  add    $0x4,%eax
080a9096 +0x139:  mov    (%eax),%eax
080a9098 +0x13b:  shl    $0x18,%eax
080a909b +0x13e:  xor    %eax,%edx
080a909d +0x140:  mov    -0x28(%ebp),%eax
080a90a0 +0x143:  add    $0x4,%eax
080a90a3 +0x146:  mov    (%eax),%eax
080a90a5 +0x148:  shr    $0x18,%eax
080a90a8 +0x14b:  mov    %edx,%ebx
080a90aa +0x14d:  xor    %eax,%ebx
080a90ac +0x14f:  mov    -0x28(%ebp),%eax
080a90af +0x152:  add    $0x8,%eax
080a90b2 +0x155:  mov    (%eax),%eax
080a90b4 +0x157:  mov    %eax,%edx
080a90b6 +0x159:  shl    $0x8,%edx
080a90b9 +0x15c:  mov    -0x28(%ebp),%eax
080a90bc +0x15f:  add    $0x8,%eax
080a90bf +0x162:  mov    (%eax),%eax
080a90c1 +0x164:  shr    $0x8,%eax
080a90c4 +0x167:  xor    %eax,%edx
080a90c6 +0x169:  mov    -0x28(%ebp),%eax
080a90c9 +0x16c:  add    $0x8,%eax
080a90cc +0x16f:  mov    (%eax),%eax
080a90ce +0x171:  shl    $0x10,%eax
080a90d1 +0x174:  xor    %eax,%edx
080a90d3 +0x176:  mov    -0x28(%ebp),%eax
080a90d6 +0x179:  add    $0x8,%eax
080a90d9 +0x17c:  mov    (%eax),%eax
080a90db +0x17e:  shr    $0x10,%eax
080a90de +0x181:  xor    %eax,%edx
080a90e0 +0x183:  mov    -0x28(%ebp),%eax
080a90e3 +0x186:  add    $0x8,%eax
080a90e6 +0x189:  mov    (%eax),%eax
080a90e8 +0x18b:  shl    $0x18,%eax
080a90eb +0x18e:  xor    %eax,%edx
080a90ed +0x190:  mov    -0x28(%ebp),%eax
080a90f0 +0x193:  add    $0x8,%eax
080a90f3 +0x196:  mov    (%eax),%eax
080a90f5 +0x198:  shr    $0x18,%eax
080a90f8 +0x19b:  mov    %edx,%esi
080a90fa +0x19d:  xor    %eax,%esi
080a90fc +0x19f:  mov    -0x28(%ebp),%eax
080a90ff +0x1a2:  add    $0xc,%eax
080a9102 +0x1a5:  mov    (%eax),%eax
080a9104 +0x1a7:  mov    %eax,%edx
080a9106 +0x1a9:  shl    $0x8,%edx
080a9109 +0x1ac:  mov    -0x28(%ebp),%eax
080a910c +0x1af:  add    $0xc,%eax
080a910f +0x1b2:  mov    (%eax),%eax
080a9111 +0x1b4:  shr    $0x8,%eax
080a9114 +0x1b7:  xor    %eax,%edx
080a9116 +0x1b9:  mov    -0x28(%ebp),%eax
080a9119 +0x1bc:  add    $0xc,%eax
080a911c +0x1bf:  mov    (%eax),%eax
080a911e +0x1c1:  shl    $0x10,%eax
080a9121 +0x1c4:  xor    %eax,%edx
080a9123 +0x1c6:  mov    -0x28(%ebp),%eax
080a9126 +0x1c9:  add    $0xc,%eax
080a9129 +0x1cc:  mov    (%eax),%eax
080a912b +0x1ce:  shr    $0x10,%eax
080a912e +0x1d1:  xor    %eax,%edx
080a9130 +0x1d3:  mov    -0x28(%ebp),%eax
080a9133 +0x1d6:  add    $0xc,%eax
080a9136 +0x1d9:  mov    (%eax),%eax
080a9138 +0x1db:  shl    $0x18,%eax
080a913b +0x1de:  xor    %eax,%edx
080a913d +0x1e0:  mov    -0x28(%ebp),%eax
080a9140 +0x1e3:  add    $0xc,%eax
080a9143 +0x1e6:  mov    (%eax),%eax
080a9145 +0x1e8:  shr    $0x18,%eax
080a9148 +0x1eb:  mov    %edx,%edi
080a914a +0x1ed:  xor    %eax,%edi
080a914c +0x1ef:  xor    %esi,%ebx
080a914e +0x1f1:  xor    %edi,%esi
080a9150 +0x1f3:  xor    %ebx,-0x30(%ebp)
080a9153 +0x1f6:  xor    %ebx,%edi
080a9155 +0x1f8:  xor    -0x30(%ebp),%esi
080a9158 +0x1fb:  xor    %esi,%ebx
080a915a +0x1fd:  mov    %ebx,%eax
080a915c +0x1ff:  shl    $0x8,%eax
080a915f +0x202:  mov    %eax,%edx
080a9161 +0x204:  and    $0xff00ff00,%edx
080a9167 +0x20a:  mov    %ebx,%eax
080a9169 +0x20c:  shr    $0x8,%eax
080a916c +0x20f:  and    $0xff00ff,%eax
080a9171 +0x214:  mov    %edx,%ebx
080a9173 +0x216:  xor    %eax,%ebx
080a9175 +0x218:  ror    $0x10,%esi
080a9178 +0x21b:  mov    %edi,%edx
080a917a +0x21d:  shl    $0x18,%edx
080a917d +0x220:  mov    %edi,%eax
080a917f +0x222:  shr    $0x18,%eax
080a9182 +0x225:  xor    %eax,%edx
080a9184 +0x227:  mov    %edi,%eax
080a9186 +0x229:  and    $0xff00,%eax
080a918b +0x22e:  shl    $0x8,%eax
080a918e +0x231:  xor    %eax,%edx
080a9190 +0x233:  mov    %edi,%eax
080a9192 +0x235:  and    $0xff0000,%eax
080a9197 +0x23a:  shr    $0x8,%eax
080a919a +0x23d:  mov    %edx,%edi
080a919c +0x23f:  xor    %eax,%edi
080a919e +0x241:  xor    %esi,%ebx
080a91a0 +0x243:  xor    %edi,%esi
080a91a2 +0x245:  xor    %ebx,-0x30(%ebp)
080a91a5 +0x248:  xor    %ebx,%edi
080a91a7 +0x24a:  xor    -0x30(%ebp),%esi
080a91aa +0x24d:  xor    %esi,%ebx
080a91ac +0x24f:  mov    -0x30(%ebp),%eax
080a91af +0x252:  mov    %eax,-0x1c(%ebp)
080a91b2 +0x255:  mov    %ebx,-0x18(%ebp)
080a91b5 +0x258:  mov    %esi,-0x14(%ebp)
080a91b8 +0x25b:  mov    %edi,-0x10(%ebp)
080a91bb +0x25e:  mov    -0x24(%ebp),%eax
080a91be +0x261:  mov    (%eax),%eax
080a91c0 +0x263:  mov    %eax,%edx
080a91c2 +0x265:  shl    $0x8,%edx
080a91c5 +0x268:  mov    -0x24(%ebp),%eax
080a91c8 +0x26b:  mov    (%eax),%eax
080a91ca +0x26d:  shr    $0x8,%eax
080a91cd +0x270:  xor    %eax,%edx
080a91cf +0x272:  mov    -0x24(%ebp),%eax
080a91d2 +0x275:  mov    (%eax),%eax
080a91d4 +0x277:  shl    $0x10,%eax
080a91d7 +0x27a:  xor    %eax,%edx
080a91d9 +0x27c:  mov    -0x24(%ebp),%eax
080a91dc +0x27f:  mov    (%eax),%eax
080a91de +0x281:  shr    $0x10,%eax
080a91e1 +0x284:  xor    %eax,%edx
080a91e3 +0x286:  mov    -0x24(%ebp),%eax
080a91e6 +0x289:  mov    (%eax),%eax
080a91e8 +0x28b:  shl    $0x18,%eax
080a91eb +0x28e:  xor    %eax,%edx
080a91ed +0x290:  mov    -0x24(%ebp),%eax
080a91f0 +0x293:  mov    (%eax),%eax
080a91f2 +0x295:  shr    $0x18,%eax
080a91f5 +0x298:  mov    %edx,%ecx
080a91f7 +0x29a:  xor    %eax,%ecx
080a91f9 +0x29c:  mov    %ecx,-0x30(%ebp)
080a91fc +0x29f:  mov    -0x24(%ebp),%eax
080a91ff +0x2a2:  add    $0x4,%eax
080a9202 +0x2a5:  mov    (%eax),%eax
080a9204 +0x2a7:  mov    %eax,%edx
080a9206 +0x2a9:  shl    $0x8,%edx
080a9209 +0x2ac:  mov    -0x24(%ebp),%eax
080a920c +0x2af:  add    $0x4,%eax
080a920f +0x2b2:  mov    (%eax),%eax
080a9211 +0x2b4:  shr    $0x8,%eax
080a9214 +0x2b7:  xor    %eax,%edx
080a9216 +0x2b9:  mov    -0x24(%ebp),%eax
080a9219 +0x2bc:  add    $0x4,%eax
080a921c +0x2bf:  mov    (%eax),%eax
080a921e +0x2c1:  shl    $0x10,%eax
080a9221 +0x2c4:  xor    %eax,%edx
080a9223 +0x2c6:  mov    -0x24(%ebp),%eax
080a9226 +0x2c9:  add    $0x4,%eax
080a9229 +0x2cc:  mov    (%eax),%eax
080a922b +0x2ce:  shr    $0x10,%eax
080a922e +0x2d1:  xor    %eax,%edx
080a9230 +0x2d3:  mov    -0x24(%ebp),%eax
080a9233 +0x2d6:  add    $0x4,%eax
080a9236 +0x2d9:  mov    (%eax),%eax
080a9238 +0x2db:  shl    $0x18,%eax
080a923b +0x2de:  xor    %eax,%edx
080a923d +0x2e0:  mov    -0x24(%ebp),%eax
080a9240 +0x2e3:  add    $0x4,%eax
080a9243 +0x2e6:  mov    (%eax),%eax
080a9245 +0x2e8:  shr    $0x18,%eax
080a9248 +0x2eb:  mov    %edx,%ebx
080a924a +0x2ed:  xor    %eax,%ebx
080a924c +0x2ef:  mov    -0x24(%ebp),%eax
080a924f +0x2f2:  add    $0x8,%eax
080a9252 +0x2f5:  mov    (%eax),%eax
080a9254 +0x2f7:  mov    %eax,%edx
080a9256 +0x2f9:  shl    $0x8,%edx
080a9259 +0x2fc:  mov    -0x24(%ebp),%eax
080a925c +0x2ff:  add    $0x8,%eax
080a925f +0x302:  mov    (%eax),%eax
080a9261 +0x304:  shr    $0x8,%eax
080a9264 +0x307:  xor    %eax,%edx
080a9266 +0x309:  mov    -0x24(%ebp),%eax
080a9269 +0x30c:  add    $0x8,%eax
080a926c +0x30f:  mov    (%eax),%eax
080a926e +0x311:  shl    $0x10,%eax
080a9271 +0x314:  xor    %eax,%edx
080a9273 +0x316:  mov    -0x24(%ebp),%eax
080a9276 +0x319:  add    $0x8,%eax
080a9279 +0x31c:  mov    (%eax),%eax
080a927b +0x31e:  shr    $0x10,%eax
080a927e +0x321:  xor    %eax,%edx
080a9280 +0x323:  mov    -0x24(%ebp),%eax
080a9283 +0x326:  add    $0x8,%eax
080a9286 +0x329:  mov    (%eax),%eax
080a9288 +0x32b:  shl    $0x18,%eax
080a928b +0x32e:  xor    %eax,%edx
080a928d +0x330:  mov    -0x24(%ebp),%eax
080a9290 +0x333:  add    $0x8,%eax
080a9293 +0x336:  mov    (%eax),%eax
080a9295 +0x338:  shr    $0x18,%eax
080a9298 +0x33b:  mov    %edx,%esi
080a929a +0x33d:  xor    %eax,%esi
080a929c +0x33f:  mov    -0x24(%ebp),%eax
080a929f +0x342:  add    $0xc,%eax
080a92a2 +0x345:  mov    (%eax),%eax
080a92a4 +0x347:  mov    %eax,%edx
080a92a6 +0x349:  shl    $0x8,%edx
080a92a9 +0x34c:  mov    -0x24(%ebp),%eax
080a92ac +0x34f:  add    $0xc,%eax
080a92af +0x352:  mov    (%eax),%eax
080a92b1 +0x354:  shr    $0x8,%eax
080a92b4 +0x357:  xor    %eax,%edx
080a92b6 +0x359:  mov    -0x24(%ebp),%eax
080a92b9 +0x35c:  add    $0xc,%eax
080a92bc +0x35f:  mov    (%eax),%eax
080a92be +0x361:  shl    $0x10,%eax
080a92c1 +0x364:  xor    %eax,%edx
080a92c3 +0x366:  mov    -0x24(%ebp),%eax
080a92c6 +0x369:  add    $0xc,%eax
080a92c9 +0x36c:  mov    (%eax),%eax
080a92cb +0x36e:  shr    $0x10,%eax
080a92ce +0x371:  xor    %eax,%edx
080a92d0 +0x373:  mov    -0x24(%ebp),%eax
080a92d3 +0x376:  add    $0xc,%eax
080a92d6 +0x379:  mov    (%eax),%eax
080a92d8 +0x37b:  shl    $0x18,%eax
080a92db +0x37e:  xor    %eax,%edx
080a92dd +0x380:  mov    -0x24(%ebp),%eax
080a92e0 +0x383:  add    $0xc,%eax
080a92e3 +0x386:  mov    (%eax),%eax
080a92e5 +0x388:  shr    $0x18,%eax
080a92e8 +0x38b:  mov    %edx,%edi
080a92ea +0x38d:  xor    %eax,%edi
080a92ec +0x38f:  xor    %esi,%ebx
080a92ee +0x391:  xor    %edi,%esi
080a92f0 +0x393:  xor    %ebx,-0x30(%ebp)
080a92f3 +0x396:  xor    %ebx,%edi
080a92f5 +0x398:  xor    -0x30(%ebp),%esi
080a92f8 +0x39b:  xor    %esi,%ebx
080a92fa +0x39d:  mov    %ebx,%eax
080a92fc +0x39f:  shl    $0x8,%eax
080a92ff +0x3a2:  mov    %eax,%edx
080a9301 +0x3a4:  and    $0xff00ff00,%edx
080a9307 +0x3aa:  mov    %ebx,%eax
080a9309 +0x3ac:  shr    $0x8,%eax
080a930c +0x3af:  and    $0xff00ff,%eax
080a9311 +0x3b4:  mov    %edx,%ebx
080a9313 +0x3b6:  xor    %eax,%ebx
080a9315 +0x3b8:  ror    $0x10,%esi
080a9318 +0x3bb:  mov    %edi,%edx
080a931a +0x3bd:  shl    $0x18,%edx
080a931d +0x3c0:  mov    %edi,%eax
080a931f +0x3c2:  shr    $0x18,%eax
080a9322 +0x3c5:  xor    %eax,%edx
080a9324 +0x3c7:  mov    %edi,%eax
080a9326 +0x3c9:  and    $0xff00,%eax
080a932b +0x3ce:  shl    $0x8,%eax
080a932e +0x3d1:  xor    %eax,%edx
080a9330 +0x3d3:  mov    %edi,%eax
080a9332 +0x3d5:  and    $0xff0000,%eax
080a9337 +0x3da:  shr    $0x8,%eax
080a933a +0x3dd:  mov    %edx,%edi
080a933c +0x3df:  xor    %eax,%edi
080a933e +0x3e1:  xor    %esi,%ebx
080a9340 +0x3e3:  xor    %edi,%esi
080a9342 +0x3e5:  xor    %ebx,-0x30(%ebp)
080a9345 +0x3e8:  xor    %ebx,%edi
080a9347 +0x3ea:  xor    -0x30(%ebp),%esi
080a934a +0x3ed:  xor    %esi,%ebx
080a934c +0x3ef:  mov    -0x28(%ebp),%eax
080a934f +0x3f2:  mov    -0x30(%ebp),%edx
080a9352 +0x3f5:  mov    %edx,(%eax)
080a9354 +0x3f7:  mov    -0x28(%ebp),%eax
080a9357 +0x3fa:  add    $0x4,%eax
080a935a +0x3fd:  mov    %ebx,(%eax)
080a935c +0x3ff:  mov    -0x28(%ebp),%eax
080a935f +0x402:  add    $0x8,%eax
080a9362 +0x405:  mov    %esi,(%eax)
080a9364 +0x407:  mov    -0x28(%ebp),%eax
080a9367 +0x40a:  add    $0xc,%eax
080a936a +0x40d:  mov    %edi,(%eax)
080a936c +0x40f:  mov    -0x24(%ebp),%eax
080a936f +0x412:  mov    -0x1c(%ebp),%edx
080a9372 +0x415:  mov    %edx,(%eax)
080a9374 +0x417:  mov    -0x24(%ebp),%eax
080a9377 +0x41a:  lea    0x4(%eax),%edx
080a937a +0x41d:  mov    -0x18(%ebp),%eax
080a937d +0x420:  mov    %eax,(%edx)
080a937f +0x422:  mov    -0x24(%ebp),%eax
080a9382 +0x425:  lea    0x8(%eax),%edx
080a9385 +0x428:  mov    -0x14(%ebp),%eax
080a9388 +0x42b:  mov    %eax,(%edx)
080a938a +0x42d:  mov    -0x24(%ebp),%eax
080a938d +0x430:  lea    0xc(%eax),%edx
080a9390 +0x433:  mov    -0x10(%ebp),%eax
080a9393 +0x436:  mov    %eax,(%edx)
080a9395 +0x438:  addl   $0x10,-0x28(%ebp)
080a9399 +0x43c:  subl   $0x10,-0x24(%ebp)
080a939d +0x440:  mov    -0x28(%ebp),%eax
080a93a0 +0x443:  cmp    -0x24(%ebp),%eax
080a93a3 +0x446:  setb   %al
080a93a6 +0x449:  test   %al,%al
080a93a8 +0x44b:  jne    080a901b <+0xbe>
080a93ae +0x451:  mov    -0x28(%ebp),%eax
080a93b1 +0x454:  mov    (%eax),%eax
080a93b3 +0x456:  mov    %eax,%edx
080a93b5 +0x458:  shl    $0x8,%edx
080a93b8 +0x45b:  mov    -0x28(%ebp),%eax
080a93bb +0x45e:  mov    (%eax),%eax
080a93bd +0x460:  shr    $0x8,%eax
080a93c0 +0x463:  xor    %eax,%edx
080a93c2 +0x465:  mov    -0x28(%ebp),%eax
080a93c5 +0x468:  mov    (%eax),%eax
080a93c7 +0x46a:  shl    $0x10,%eax
080a93ca +0x46d:  xor    %eax,%edx
080a93cc +0x46f:  mov    -0x28(%ebp),%eax
080a93cf +0x472:  mov    (%eax),%eax
080a93d1 +0x474:  shr    $0x10,%eax
080a93d4 +0x477:  xor    %eax,%edx
080a93d6 +0x479:  mov    -0x28(%ebp),%eax
080a93d9 +0x47c:  mov    (%eax),%eax
080a93db +0x47e:  shl    $0x18,%eax
080a93de +0x481:  xor    %eax,%edx
080a93e0 +0x483:  mov    -0x28(%ebp),%eax
080a93e3 +0x486:  mov    (%eax),%eax
080a93e5 +0x488:  shr    $0x18,%eax
080a93e8 +0x48b:  mov    %edx,%ecx
080a93ea +0x48d:  xor    %eax,%ecx
080a93ec +0x48f:  mov    %ecx,-0x30(%ebp)
080a93ef +0x492:  mov    -0x28(%ebp),%eax
080a93f2 +0x495:  add    $0x4,%eax
080a93f5 +0x498:  mov    (%eax),%eax
080a93f7 +0x49a:  mov    %eax,%edx
080a93f9 +0x49c:  shl    $0x8,%edx
080a93fc +0x49f:  mov    -0x28(%ebp),%eax
080a93ff +0x4a2:  add    $0x4,%eax
080a9402 +0x4a5:  mov    (%eax),%eax
080a9404 +0x4a7:  shr    $0x8,%eax
080a9407 +0x4aa:  xor    %eax,%edx
080a9409 +0x4ac:  mov    -0x28(%ebp),%eax
080a940c +0x4af:  add    $0x4,%eax
080a940f +0x4b2:  mov    (%eax),%eax
080a9411 +0x4b4:  shl    $0x10,%eax
080a9414 +0x4b7:  xor    %eax,%edx
080a9416 +0x4b9:  mov    -0x28(%ebp),%eax
080a9419 +0x4bc:  add    $0x4,%eax
080a941c +0x4bf:  mov    (%eax),%eax
080a941e +0x4c1:  shr    $0x10,%eax
080a9421 +0x4c4:  xor    %eax,%edx
080a9423 +0x4c6:  mov    -0x28(%ebp),%eax
080a9426 +0x4c9:  add    $0x4,%eax
080a9429 +0x4cc:  mov    (%eax),%eax
080a942b +0x4ce:  shl    $0x18,%eax
080a942e +0x4d1:  xor    %eax,%edx
080a9430 +0x4d3:  mov    -0x28(%ebp),%eax
080a9433 +0x4d6:  add    $0x4,%eax
080a9436 +0x4d9:  mov    (%eax),%eax
080a9438 +0x4db:  shr    $0x18,%eax
080a943b +0x4de:  mov    %edx,%ebx
080a943d +0x4e0:  xor    %eax,%ebx
080a943f +0x4e2:  mov    -0x28(%ebp),%eax
080a9442 +0x4e5:  add    $0x8,%eax
080a9445 +0x4e8:  mov    (%eax),%eax
080a9447 +0x4ea:  mov    %eax,%edx
080a9449 +0x4ec:  shl    $0x8,%edx
080a944c +0x4ef:  mov    -0x28(%ebp),%eax
080a944f +0x4f2:  add    $0x8,%eax
080a9452 +0x4f5:  mov    (%eax),%eax
080a9454 +0x4f7:  shr    $0x8,%eax
080a9457 +0x4fa:  xor    %eax,%edx
080a9459 +0x4fc:  mov    -0x28(%ebp),%eax
080a945c +0x4ff:  add    $0x8,%eax
080a945f +0x502:  mov    (%eax),%eax
080a9461 +0x504:  shl    $0x10,%eax
080a9464 +0x507:  xor    %eax,%edx
080a9466 +0x509:  mov    -0x28(%ebp),%eax
080a9469 +0x50c:  add    $0x8,%eax
080a946c +0x50f:  mov    (%eax),%eax
080a946e +0x511:  shr    $0x10,%eax
080a9471 +0x514:  xor    %eax,%edx
080a9473 +0x516:  mov    -0x28(%ebp),%eax
080a9476 +0x519:  add    $0x8,%eax
080a9479 +0x51c:  mov    (%eax),%eax
080a947b +0x51e:  shl    $0x18,%eax
080a947e +0x521:  xor    %eax,%edx
080a9480 +0x523:  mov    -0x28(%ebp),%eax
080a9483 +0x526:  add    $0x8,%eax
080a9486 +0x529:  mov    (%eax),%eax
080a9488 +0x52b:  shr    $0x18,%eax
080a948b +0x52e:  mov    %edx,%esi
080a948d +0x530:  xor    %eax,%esi
080a948f +0x532:  mov    -0x28(%ebp),%eax
080a9492 +0x535:  add    $0xc,%eax
080a9495 +0x538:  mov    (%eax),%eax
080a9497 +0x53a:  mov    %eax,%edx
080a9499 +0x53c:  shl    $0x8,%edx
080a949c +0x53f:  mov    -0x28(%ebp),%eax
080a949f +0x542:  add    $0xc,%eax
080a94a2 +0x545:  mov    (%eax),%eax
080a94a4 +0x547:  shr    $0x8,%eax
080a94a7 +0x54a:  xor    %eax,%edx
080a94a9 +0x54c:  mov    -0x28(%ebp),%eax
080a94ac +0x54f:  add    $0xc,%eax
080a94af +0x552:  mov    (%eax),%eax
080a94b1 +0x554:  shl    $0x10,%eax
080a94b4 +0x557:  xor    %eax,%edx
080a94b6 +0x559:  mov    -0x28(%ebp),%eax
080a94b9 +0x55c:  add    $0xc,%eax
080a94bc +0x55f:  mov    (%eax),%eax
080a94be +0x561:  shr    $0x10,%eax
080a94c1 +0x564:  xor    %eax,%edx
080a94c3 +0x566:  mov    -0x28(%ebp),%eax
080a94c6 +0x569:  add    $0xc,%eax
080a94c9 +0x56c:  mov    (%eax),%eax
080a94cb +0x56e:  shl    $0x18,%eax
080a94ce +0x571:  xor    %eax,%edx
080a94d0 +0x573:  mov    -0x28(%ebp),%eax
080a94d3 +0x576:  add    $0xc,%eax
080a94d6 +0x579:  mov    (%eax),%eax
080a94d8 +0x57b:  shr    $0x18,%eax
080a94db +0x57e:  mov    %edx,%edi
080a94dd +0x580:  xor    %eax,%edi
080a94df +0x582:  xor    %esi,%ebx
080a94e1 +0x584:  xor    %edi,%esi
080a94e3 +0x586:  xor    %ebx,-0x30(%ebp)
080a94e6 +0x589:  xor    %ebx,%edi
080a94e8 +0x58b:  xor    -0x30(%ebp),%esi
080a94eb +0x58e:  xor    %esi,%ebx
080a94ed +0x590:  mov    %ebx,%eax
080a94ef +0x592:  shl    $0x8,%eax
080a94f2 +0x595:  mov    %eax,%edx
080a94f4 +0x597:  and    $0xff00ff00,%edx
080a94fa +0x59d:  mov    %ebx,%eax
080a94fc +0x59f:  shr    $0x8,%eax
080a94ff +0x5a2:  and    $0xff00ff,%eax
080a9504 +0x5a7:  mov    %edx,%ebx
080a9506 +0x5a9:  xor    %eax,%ebx
080a9508 +0x5ab:  ror    $0x10,%esi
080a950b +0x5ae:  mov    %edi,%edx
080a950d +0x5b0:  shl    $0x18,%edx
080a9510 +0x5b3:  mov    %edi,%eax
080a9512 +0x5b5:  shr    $0x18,%eax
080a9515 +0x5b8:  xor    %eax,%edx
080a9517 +0x5ba:  mov    %edi,%eax
080a9519 +0x5bc:  and    $0xff00,%eax
080a951e +0x5c1:  shl    $0x8,%eax
080a9521 +0x5c4:  xor    %eax,%edx
080a9523 +0x5c6:  mov    %edi,%eax
080a9525 +0x5c8:  and    $0xff0000,%eax
080a952a +0x5cd:  shr    $0x8,%eax
080a952d +0x5d0:  mov    %edx,%edi
080a952f +0x5d2:  xor    %eax,%edi
080a9531 +0x5d4:  xor    %esi,%ebx
080a9533 +0x5d6:  xor    %edi,%esi
080a9535 +0x5d8:  xor    %ebx,-0x30(%ebp)
080a9538 +0x5db:  xor    %ebx,%edi
080a953a +0x5dd:  xor    -0x30(%ebp),%esi
080a953d +0x5e0:  xor    %esi,%ebx
080a953f +0x5e2:  mov    -0x24(%ebp),%eax
080a9542 +0x5e5:  mov    -0x30(%ebp),%edx
080a9545 +0x5e8:  mov    %edx,(%eax)
080a9547 +0x5ea:  mov    -0x24(%ebp),%eax
080a954a +0x5ed:  add    $0x4,%eax
080a954d +0x5f0:  mov    %ebx,(%eax)
080a954f +0x5f2:  mov    -0x24(%ebp),%eax
080a9552 +0x5f5:  add    $0x8,%eax
080a9555 +0x5f8:  mov    %esi,(%eax)
080a9557 +0x5fa:  mov    -0x24(%ebp),%eax
080a955a +0x5fd:  add    $0xc,%eax
080a955d +0x600:  mov    %edi,(%eax)
080a955f +0x602:  mov    -0x20(%ebp),%eax
080a9562 +0x605:  add    $0x30,%esp
080a9565 +0x608:  pop    %ebx
080a9566 +0x609:  pop    %esi
080a9567 +0x60a:  pop    %edi
080a9568 +0x60b:  pop    %ebp
080a9569 +0x60c:  ret
080a956a +0x60d:  nop
080a956b +0x60e:  nop
```

## 反编译 C

```c
// ARIA::DecKeySetup @ 0x80a8f5d

/* ARIA::DecKeySetup(unsigned char const*, unsigned char*, int) */

int ARIA::DecKeySetup(uchar *param_1,uchar *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *local_2c;
  uint *local_28;
  
  iVar2 = EncKeySetup(param_1,param_2,param_3);
  puVar3 = (uint *)(param_2 + iVar2 * 0x10);
  uVar1 = *(uint *)param_2;
  uVar4 = *(uint *)(param_2 + 4);
  uVar6 = *(uint *)(param_2 + 8);
  uVar10 = *(uint *)(param_2 + 0xc);
  *(uint *)param_2 = *puVar3;
  *(uint *)(param_2 + 4) = puVar3[1];
  *(uint *)(param_2 + 8) = puVar3[2];
  *(uint *)(param_2 + 0xc) = puVar3[3];
  *puVar3 = uVar1;
  puVar3[1] = uVar4;
  puVar3[2] = uVar6;
  puVar3[3] = uVar10;
  while (local_28 = puVar3 + -4, local_2c = (uint *)((int)param_2 + 0x10), local_2c < local_28) {
    uVar6 = *(uint *)((int)param_2 + 0x18) << 8 ^ *(uint *)((int)param_2 + 0x18) >> 8 ^
            *(uint *)((int)param_2 + 0x18) << 0x10 ^ *(uint *)((int)param_2 + 0x18) >> 0x10 ^
            *(uint *)((int)param_2 + 0x18) << 0x18 ^ *(uint *)((int)param_2 + 0x18) >> 0x18;
    uVar10 = *(uint *)((int)param_2 + 0x1c) << 8 ^ *(uint *)((int)param_2 + 0x1c) >> 8 ^
             *(uint *)((int)param_2 + 0x1c) << 0x10 ^ *(uint *)((int)param_2 + 0x1c) >> 0x10 ^
             *(uint *)((int)param_2 + 0x1c) << 0x18 ^ *(uint *)((int)param_2 + 0x1c) >> 0x18;
    uVar4 = *(uint *)((int)param_2 + 0x14) << 8 ^ *(uint *)((int)param_2 + 0x14) >> 8 ^
            *(uint *)((int)param_2 + 0x14) << 0x10 ^ *(uint *)((int)param_2 + 0x14) >> 0x10 ^
            *(uint *)((int)param_2 + 0x14) << 0x18 ^ *(uint *)((int)param_2 + 0x14) >> 0x18 ^ uVar6;
    uVar1 = *local_2c << 8 ^ *local_2c >> 8 ^ *local_2c << 0x10 ^ *local_2c >> 0x10 ^
            *local_2c << 0x18 ^ *local_2c >> 0x18 ^ uVar4;
    uVar11 = uVar10 ^ uVar4;
    uVar6 = uVar6 ^ uVar10 ^ uVar1;
    uVar10 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar7 = uVar11 << 0x18 ^ uVar11 >> 0x18 ^ (uVar11 & 0xff00) << 8 ^ (uVar11 & 0xff0000) >> 8;
    uVar6 = ((uVar4 ^ uVar6) & 0xff00ff) << 8 ^ (uVar4 ^ uVar6) >> 8 & 0xff00ff ^ uVar10;
    uVar1 = uVar1 ^ uVar6;
    uVar11 = uVar10 ^ uVar7 ^ uVar1;
    uVar5 = puVar3[-2] << 8 ^ puVar3[-2] >> 8 ^ puVar3[-2] << 0x10 ^ puVar3[-2] >> 0x10 ^
            puVar3[-2] << 0x18 ^ puVar3[-2] >> 0x18;
    uVar8 = puVar3[-1] << 8 ^ puVar3[-1] >> 8 ^ puVar3[-1] << 0x10 ^ puVar3[-1] >> 0x10 ^
            puVar3[-1] << 0x18 ^ puVar3[-1] >> 0x18;
    uVar10 = puVar3[-3] << 8 ^ puVar3[-3] >> 8 ^ puVar3[-3] << 0x10 ^ puVar3[-3] >> 0x10 ^
             puVar3[-3] << 0x18 ^ puVar3[-3] >> 0x18 ^ uVar5;
    uVar4 = *local_28 << 8 ^ *local_28 >> 8 ^ *local_28 << 0x10 ^ *local_28 >> 0x10 ^
            *local_28 << 0x18 ^ *local_28 >> 0x18 ^ uVar10;
    uVar9 = uVar8 ^ uVar10;
    uVar5 = uVar5 ^ uVar8 ^ uVar4;
    uVar8 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar9 = uVar9 << 0x18 ^ uVar9 >> 0x18 ^ (uVar9 & 0xff00) << 8 ^ (uVar9 & 0xff0000) >> 8;
    uVar10 = ((uVar10 ^ uVar5) & 0xff00ff) << 8 ^ (uVar10 ^ uVar5) >> 8 & 0xff00ff ^ uVar8;
    uVar4 = uVar4 ^ uVar10;
    uVar5 = uVar8 ^ uVar9 ^ uVar4;
    *local_2c = uVar4;
    *(uint *)((int)param_2 + 0x14) = uVar10 ^ uVar5;
    *(uint *)((int)param_2 + 0x18) = uVar5;
    *(uint *)((int)param_2 + 0x1c) = uVar9 ^ uVar10;
    *local_28 = uVar1;
    puVar3[-3] = uVar6 ^ uVar11;
    puVar3[-2] = uVar11;
    puVar3[-1] = uVar7 ^ uVar6;
    param_2 = (uchar *)local_2c;
    puVar3 = local_28;
  }
  uVar6 = *(uint *)((int)param_2 + 0x18) << 8 ^ *(uint *)((int)param_2 + 0x18) >> 8 ^
          *(uint *)((int)param_2 + 0x18) << 0x10 ^ *(uint *)((int)param_2 + 0x18) >> 0x10 ^
          *(uint *)((int)param_2 + 0x18) << 0x18 ^ *(uint *)((int)param_2 + 0x18) >> 0x18;
  uVar10 = *(uint *)((int)param_2 + 0x1c) << 8 ^ *(uint *)((int)param_2 + 0x1c) >> 8 ^
           *(uint *)((int)param_2 + 0x1c) << 0x10 ^ *(uint *)((int)param_2 + 0x1c) >> 0x10 ^
           *(uint *)((int)param_2 + 0x1c) << 0x18 ^ *(uint *)((int)param_2 + 0x1c) >> 0x18;
  uVar4 = *(uint *)((int)param_2 + 0x14) << 8 ^ *(uint *)((int)param_2 + 0x14) >> 8 ^
          *(uint *)((int)param_2 + 0x14) << 0x10 ^ *(uint *)((int)param_2 + 0x14) >> 0x10 ^
          *(uint *)((int)param_2 + 0x14) << 0x18 ^ *(uint *)((int)param_2 + 0x14) >> 0x18 ^ uVar6;
  uVar1 = *local_2c << 8 ^ *local_2c >> 8 ^ *local_2c << 0x10 ^ *local_2c >> 0x10 ^
          *local_2c << 0x18 ^ *local_2c >> 0x18 ^ uVar4;
  uVar11 = uVar10 ^ uVar4;
  uVar6 = uVar6 ^ uVar10 ^ uVar1;
  uVar10 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar11 = uVar11 << 0x18 ^ uVar11 >> 0x18 ^ (uVar11 & 0xff00) << 8 ^ (uVar11 & 0xff0000) >> 8;
  uVar4 = ((uVar4 ^ uVar6) & 0xff00ff) << 8 ^ (uVar4 ^ uVar6) >> 8 & 0xff00ff ^ uVar10;
  uVar1 = uVar1 ^ uVar4;
  uVar6 = uVar10 ^ uVar11 ^ uVar1;
  *local_28 = uVar1;
  puVar3[-3] = uVar4 ^ uVar6;
  puVar3[-2] = uVar6;
  puVar3[-1] = uVar11 ^ uVar4;
  return iVar2;
}
```
