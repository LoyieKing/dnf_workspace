# CAuctionAveragePrice

`_GLOBAL__I__ZN20CAuctionAveragePriceC2Ev`

`global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CAuctionAveragePrice` | `0x082f5f03` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f5f03  _GLOBAL__I__ZN20CAuctionAveragePriceC2Ev
#           global constructors keyed to CAuctionAveragePrice::CAuctionAveragePrice()
# range [0x082f5f03, 0x082f7a7b]
082f5f03 +0x0000:  push   %ebp
082f5f04 +0x0001:  mov    %esp,%ebp
082f5f06 +0x0003:  sub    $0x18,%esp
082f5f09 +0x0006:  movl   $0xffff,0x4(%esp)
082f5f11 +0x000e:  movl   $0x1,(%esp)
082f5f18 +0x0015:  call   082f5ec3 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082f5f1d +0x001a:  leave
082f5f1e +0x001b:  ret
082f5f1f +0x001c:  nop
082f5f20 +0x001d:  push   %ebp
082f5f21 +0x001e:  mov    %esp,%ebp
082f5f23 +0x0020:  sub    $0x4,%esp
082f5f26 +0x0023:  mov    0xc(%ebp),%eax
082f5f29 +0x0026:  mov    %al,-0x4(%ebp)
082f5f2c +0x0029:  mov    0x8(%ebp),%eax
082f5f2f +0x002c:  movzbl -0x4(%ebp),%edx
082f5f33 +0x0030:  mov    %dl,(%eax)
082f5f35 +0x0032:  leave
082f5f36 +0x0033:  ret
082f5f37 +0x0034:  nop
082f5f38 +0x0035:  push   %ebp
082f5f39 +0x0036:  mov    %esp,%ebp
082f5f3b +0x0038:  mov    0xc(%ebp),%eax
082f5f3e +0x003b:  movzbl (%eax),%edx
082f5f41 +0x003e:  mov    0x8(%ebp),%eax
082f5f44 +0x0041:  movzbl (%eax),%eax
082f5f47 +0x0044:  cmp    %al,%dl
082f5f49 +0x0046:  jne    082f5f52 <+0x4f>
082f5f4b +0x0048:  mov    $0x1,%eax
082f5f50 +0x004d:  jmp    082f5f57 <+0x54>
082f5f52 +0x004f:  mov    $0x0,%eax
082f5f57 +0x0054:  pop    %ebp
082f5f58 +0x0055:  ret
082f5f59 +0x0056:  nop
082f5f5a +0x0057:  push   %ebp
082f5f5b +0x0058:  mov    %esp,%ebp
082f5f5d +0x005a:  sub    $0x18,%esp
082f5f60 +0x005d:  mov    0x8(%ebp),%eax
082f5f63 +0x0060:  add    $0x4,%eax
082f5f66 +0x0063:  mov    %eax,(%esp)
082f5f69 +0x0066:  call   082da750 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x4647>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x4647
082f5f6e +0x006b:  leave
082f5f6f +0x006c:  ret
082f5f70 +0x006d:  push   %ebp
082f5f71 +0x006e:  mov    %esp,%ebp
082f5f73 +0x0070:  sub    $0x18,%esp
082f5f76 +0x0073:  mov    0x8(%ebp),%eax
082f5f79 +0x0076:  mov    %eax,(%esp)
082f5f7c +0x0079:  call   082f62b0 <+0x3ad>
082f5f81 +0x007e:  leave
082f5f82 +0x007f:  ret
082f5f83 +0x0080:  nop
082f5f84 +0x0081:  push   %ebp
082f5f85 +0x0082:  mov    %esp,%ebp
082f5f87 +0x0084:  push   %ebx
082f5f88 +0x0085:  sub    $0x14,%esp
082f5f8b +0x0088:  mov    0x8(%ebp),%ebx
082f5f8e +0x008b:  mov    0xc(%ebp),%eax
082f5f91 +0x008e:  mov    0x10(%ebp),%edx
082f5f94 +0x0091:  mov    %edx,0x8(%esp)
082f5f98 +0x0095:  mov    %eax,0x4(%esp)
082f5f9c +0x0099:  mov    %ebx,(%esp)
082f5f9f +0x009c:  call   082f62c4 <+0x3c1>
082f5fa4 +0x00a1:  sub    $0x4,%esp
082f5fa7 +0x00a4:  mov    %ebx,%eax
082f5fa9 +0x00a6:  mov    -0x4(%ebp),%ebx
082f5fac +0x00a9:  leave
082f5fad +0x00aa:  ret    $0x4
082f5fb0 +0x00ad:  push   %ebp
082f5fb1 +0x00ae:  mov    %esp,%ebp
082f5fb3 +0x00b0:  push   %ebx
082f5fb4 +0x00b1:  sub    $0x14,%esp
082f5fb7 +0x00b4:  mov    0x8(%ebp),%ebx
082f5fba +0x00b7:  mov    0xc(%ebp),%eax
082f5fbd +0x00ba:  mov    %eax,0x4(%esp)
082f5fc1 +0x00be:  mov    %ebx,(%esp)
082f5fc4 +0x00c1:  call   082f6382 <+0x47f>
082f5fc9 +0x00c6:  sub    $0x4,%esp
082f5fcc +0x00c9:  mov    %ebx,%eax
082f5fce +0x00cb:  mov    -0x4(%ebp),%ebx
082f5fd1 +0x00ce:  leave
082f5fd2 +0x00cf:  ret    $0x4
082f5fd5 +0x00d2:  nop
082f5fd6 +0x00d3:  push   %ebp
082f5fd7 +0x00d4:  mov    %esp,%ebp
082f5fd9 +0x00d6:  mov    0x8(%ebp),%eax
082f5fdc +0x00d9:  mov    (%eax),%edx
082f5fde +0x00db:  mov    0xc(%ebp),%eax
082f5fe1 +0x00de:  mov    (%eax),%eax
082f5fe3 +0x00e0:  cmp    %eax,%edx
082f5fe5 +0x00e2:  setne  %al
082f5fe8 +0x00e5:  pop    %ebp
082f5fe9 +0x00e6:  ret
082f5fea +0x00e7:  push   %ebp
082f5feb +0x00e8:  mov    %esp,%ebp
082f5fed +0x00ea:  sub    $0x18,%esp
082f5ff0 +0x00ed:  mov    0xc(%ebp),%eax
082f5ff3 +0x00f0:  mov    %eax,(%esp)
082f5ff6 +0x00f3:  call   08138740 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4347>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4347
082f5ffb +0x00f8:  movzbl (%eax),%edx
082f5ffe +0x00fb:  mov    0x8(%ebp),%eax
082f6001 +0x00fe:  mov    %dl,(%eax)
082f6003 +0x0100:  mov    0x10(%ebp),%eax
082f6006 +0x0103:  mov    %eax,(%esp)
082f6009 +0x0106:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
082f600e +0x010b:  mov    (%eax),%edx
082f6010 +0x010d:  mov    0x8(%ebp),%eax
082f6013 +0x0110:  mov    %edx,0x4(%eax)
082f6016 +0x0113:  leave
082f6017 +0x0114:  ret
082f6018 +0x0115:  push   %ebp
082f6019 +0x0116:  mov    %esp,%ebp
082f601b +0x0118:  mov    0x8(%ebp),%eax
082f601e +0x011b:  mov    (%eax),%eax
082f6020 +0x011d:  add    $0x10,%eax
082f6023 +0x0120:  pop    %ebp
082f6024 +0x0121:  ret
082f6025 +0x0122:  nop
082f6026 +0x0123:  push   %ebp
082f6027 +0x0124:  mov    %esp,%ebp
082f6029 +0x0126:  sub    $0x28,%esp
082f602c +0x0129:  mov    0x8(%ebp),%eax
082f602f +0x012c:  mov    0x4(%eax),%edx
082f6032 +0x012f:  mov    0x8(%ebp),%eax
082f6035 +0x0132:  mov    0x8(%eax),%eax
082f6038 +0x0135:  cmp    %eax,%edx
082f603a +0x0137:  je     082f6069 <+0x166>
082f603c +0x0139:  mov    0x8(%ebp),%eax
082f603f +0x013c:  mov    0x4(%eax),%edx
082f6042 +0x013f:  mov    0x8(%ebp),%eax
082f6045 +0x0142:  mov    0xc(%ebp),%ecx
082f6048 +0x0145:  mov    %ecx,0x8(%esp)
082f604c +0x0149:  mov    %edx,0x4(%esp)
082f6050 +0x014d:  mov    %eax,(%esp)
082f6053 +0x0150:  call   082f63a8 <+0x4a5>
082f6058 +0x0155:  mov    0x8(%ebp),%eax
082f605b +0x0158:  mov    0x4(%eax),%eax
082f605e +0x015b:  lea    0x8(%eax),%edx
082f6061 +0x015e:  mov    0x8(%ebp),%eax
082f6064 +0x0161:  mov    %edx,0x4(%eax)
082f6067 +0x0164:  jmp    082f6097 <+0x194>
082f6069 +0x0166:  lea    -0xc(%ebp),%eax
082f606c +0x0169:  mov    0x8(%ebp),%edx
082f606f +0x016c:  mov    %edx,0x4(%esp)
082f6073 +0x0170:  mov    %eax,(%esp)
082f6076 +0x0173:  call   082f63d8 <+0x4d5>
082f607b +0x0178:  sub    $0x4,%esp
082f607e +0x017b:  mov    0xc(%ebp),%eax
082f6081 +0x017e:  mov    %eax,0x8(%esp)
082f6085 +0x0182:  mov    -0xc(%ebp),%eax
082f6088 +0x0185:  mov    %eax,0x4(%esp)
082f608c +0x0189:  mov    0x8(%ebp),%eax
082f608f +0x018c:  mov    %eax,(%esp)
082f6092 +0x018f:  call   082f63fe <+0x4fb>
082f6097 +0x0194:  leave
082f6098 +0x0195:  ret
082f6099 +0x0196:  nop
082f609a +0x0197:  push   %ebp
082f609b +0x0198:  mov    %esp,%ebp
082f609d +0x019a:  sub    $0x18,%esp
082f60a0 +0x019d:  mov    0x8(%ebp),%eax
082f60a3 +0x01a0:  mov    %eax,(%esp)
082f60a6 +0x01a3:  call   082f66c4 <+0x7c1>
082f60ab +0x01a8:  leave
082f60ac +0x01a9:  ret
082f60ad +0x01aa:  push   %ebp
082f60ae +0x01ab:  mov    %esp,%ebp
082f60b0 +0x01ad:  push   %edi
082f60b1 +0x01ae:  push   %esi
082f60b2 +0x01af:  push   %ebx
082f60b3 +0x01b0:  sub    $0x1c,%esp
082f60b6 +0x01b3:  mov    0x8(%ebp),%ebx
082f60b9 +0x01b6:  mov    %ebx,%edi
082f60bb +0x01b8:  mov    0x10(%ebp),%eax
082f60be +0x01bb:  mov    %eax,(%esp)
082f60c1 +0x01be:  call   082f66d7 <+0x7d4>
082f60c6 +0x01c3:  mov    %eax,%esi
082f60c8 +0x01c5:  mov    0xc(%ebp),%eax
082f60cb +0x01c8:  mov    %eax,(%esp)
082f60ce +0x01cb:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
082f60d3 +0x01d0:  mov    %esi,0x8(%esp)
082f60d7 +0x01d4:  mov    %eax,0x4(%esp)
082f60db +0x01d8:  mov    %edi,(%esp)
082f60de +0x01db:  call   082f66e0 <+0x7dd>
082f60e3 +0x01e0:  mov    %ebx,%eax
082f60e5 +0x01e2:  mov    %ebx,%eax
082f60e7 +0x01e4:  add    $0x1c,%esp
082f60ea +0x01e7:  pop    %ebx
082f60eb +0x01e8:  pop    %esi
082f60ec +0x01e9:  pop    %edi
082f60ed +0x01ea:  pop    %ebp
082f60ee +0x01eb:  ret    $0x4
082f60f1 +0x01ee:  nop
082f60f2 +0x01ef:  push   %ebp
082f60f3 +0x01f0:  mov    %esp,%ebp
082f60f5 +0x01f2:  sub    $0x18,%esp
082f60f8 +0x01f5:  mov    0xc(%ebp),%eax
082f60fb +0x01f8:  mov    %eax,(%esp)
082f60fe +0x01fb:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
082f6103 +0x0200:  mov    (%eax),%edx
082f6105 +0x0202:  mov    0x8(%ebp),%eax
082f6108 +0x0205:  mov    %edx,(%eax)
082f610a +0x0207:  mov    0xc(%ebp),%eax
082f610d +0x020a:  add    $0x4,%eax
082f6110 +0x020d:  mov    %eax,(%esp)
082f6113 +0x0210:  call   082f6717 <+0x814>
082f6118 +0x0215:  mov    0x8(%ebp),%edx
082f611b +0x0218:  add    $0x4,%edx
082f611e +0x021b:  mov    %eax,0x4(%esp)
082f6122 +0x021f:  mov    %edx,(%esp)
082f6125 +0x0222:  call   082f6720 <+0x81d>
082f612a +0x0227:  leave
082f612b +0x0228:  ret
082f612c +0x0229:  push   %ebp
082f612d +0x022a:  mov    %esp,%ebp
082f612f +0x022c:  push   %ebx
082f6130 +0x022d:  sub    $0x14,%esp
082f6133 +0x0230:  mov    0x8(%ebp),%ebx
082f6136 +0x0233:  mov    0xc(%ebp),%eax
082f6139 +0x0236:  mov    0x10(%ebp),%edx
082f613c +0x0239:  mov    %edx,0x8(%esp)
082f6140 +0x023d:  mov    %eax,0x4(%esp)
082f6144 +0x0241:  mov    %ebx,(%esp)
082f6147 +0x0244:  call   082f6742 <+0x83f>
082f614c +0x0249:  sub    $0x4,%esp
082f614f +0x024c:  mov    %ebx,%eax
082f6151 +0x024e:  mov    -0x4(%ebp),%ebx
082f6154 +0x0251:  leave
082f6155 +0x0252:  ret    $0x4
082f6158 +0x0255:  push   %ebp
082f6159 +0x0256:  mov    %esp,%ebp
082f615b +0x0258:  push   %ebx
082f615c +0x0259:  sub    $0x14,%esp
082f615f +0x025c:  mov    0x8(%ebp),%ebx
082f6162 +0x025f:  mov    0xc(%ebp),%eax
082f6165 +0x0262:  mov    0x10(%ebp),%edx
082f6168 +0x0265:  mov    %edx,0x8(%esp)
082f616c +0x0269:  mov    %eax,0x4(%esp)
082f6170 +0x026d:  mov    %ebx,(%esp)
082f6173 +0x0270:  call   082f6912 <+0xa0f>
082f6178 +0x0275:  sub    $0x4,%esp
082f617b +0x0278:  mov    %ebx,%eax
082f617d +0x027a:  mov    -0x4(%ebp),%ebx
082f6180 +0x027d:  leave
082f6181 +0x027e:  ret    $0x4
082f6184 +0x0281:  push   %ebp
082f6185 +0x0282:  mov    %esp,%ebp
082f6187 +0x0284:  push   %ebx
082f6188 +0x0285:  sub    $0x14,%esp
082f618b +0x0288:  mov    0x8(%ebp),%ebx
082f618e +0x028b:  mov    0xc(%ebp),%eax
082f6191 +0x028e:  mov    %eax,0x4(%esp)
082f6195 +0x0292:  mov    %ebx,(%esp)
082f6198 +0x0295:  call   082f69d0 <+0xacd>
082f619d +0x029a:  sub    $0x4,%esp
082f61a0 +0x029d:  mov    %ebx,%eax
082f61a2 +0x029f:  mov    -0x4(%ebp),%ebx
082f61a5 +0x02a2:  leave
082f61a6 +0x02a3:  ret    $0x4
082f61a9 +0x02a6:  nop
082f61aa +0x02a7:  push   %ebp
082f61ab +0x02a8:  mov    %esp,%ebp
082f61ad +0x02aa:  mov    0x8(%ebp),%eax
082f61b0 +0x02ad:  mov    (%eax),%edx
082f61b2 +0x02af:  mov    0xc(%ebp),%eax
082f61b5 +0x02b2:  mov    (%eax),%eax
082f61b7 +0x02b4:  cmp    %eax,%edx
082f61b9 +0x02b6:  setne  %al
082f61bc +0x02b9:  pop    %ebp
082f61bd +0x02ba:  ret
082f61be +0x02bb:  push   %ebp
082f61bf +0x02bc:  mov    %esp,%ebp
082f61c1 +0x02be:  mov    0x8(%ebp),%eax
082f61c4 +0x02c1:  mov    (%eax),%eax
082f61c6 +0x02c3:  add    $0x10,%eax
082f61c9 +0x02c6:  pop    %ebp
082f61ca +0x02c7:  ret
082f61cb +0x02c8:  nop
082f61cc +0x02c9:  push   %ebp
082f61cd +0x02ca:  mov    %esp,%ebp
082f61cf +0x02cc:  push   %ebx
082f61d0 +0x02cd:  sub    $0x24,%esp
082f61d3 +0x02d0:  mov    0x8(%ebp),%ebx
082f61d6 +0x02d3:  mov    0xc(%ebp),%eax
082f61d9 +0x02d6:  mov    (%eax),%eax
082f61db +0x02d8:  mov    %eax,-0xc(%ebp)
082f61de +0x02db:  lea    -0xc(%ebp),%eax
082f61e1 +0x02de:  mov    %eax,0x4(%esp)
082f61e5 +0x02e2:  mov    %ebx,(%esp)
082f61e8 +0x02e5:  call   082f69f6 <+0xaf3>
082f61ed +0x02ea:  mov    %ebx,%eax
082f61ef +0x02ec:  add    $0x24,%esp
082f61f2 +0x02ef:  pop    %ebx
082f61f3 +0x02f0:  pop    %ebp
082f61f4 +0x02f1:  ret    $0x4
082f61f7 +0x02f4:  nop
082f61f8 +0x02f5:  push   %ebp
082f61f9 +0x02f6:  mov    %esp,%ebp
082f61fb +0x02f8:  push   %ebx
082f61fc +0x02f9:  sub    $0x24,%esp
082f61ff +0x02fc:  mov    0x8(%ebp),%ebx
082f6202 +0x02ff:  mov    0xc(%ebp),%eax
082f6205 +0x0302:  mov    0x4(%eax),%eax
082f6208 +0x0305:  mov    %eax,-0xc(%ebp)
082f620b +0x0308:  lea    -0xc(%ebp),%eax
082f620e +0x030b:  mov    %eax,0x4(%esp)
082f6212 +0x030f:  mov    %ebx,(%esp)
082f6215 +0x0312:  call   082f69f6 <+0xaf3>
082f621a +0x0317:  mov    %ebx,%eax
082f621c +0x0319:  add    $0x24,%esp
082f621f +0x031c:  pop    %ebx
082f6220 +0x031d:  pop    %ebp
082f6221 +0x031e:  ret    $0x4
082f6224 +0x0321:  push   %ebp
082f6225 +0x0322:  mov    %esp,%ebp
082f6227 +0x0324:  push   %esi
082f6228 +0x0325:  push   %ebx
082f6229 +0x0326:  sub    $0x30,%esp
082f622c +0x0329:  mov    0x8(%ebp),%ebx
082f622f +0x032c:  lea    -0x9(%ebp),%eax
082f6232 +0x032f:  lea    0xc(%ebp),%edx
082f6235 +0x0332:  mov    %edx,0x4(%esp)
082f6239 +0x0336:  mov    %eax,(%esp)
082f623c +0x0339:  call   082f6a05 <+0xb02>
082f6241 +0x033e:  sub    $0x4,%esp
082f6244 +0x0341:  mov    %esi,%eax
082f6246 +0x0343:  mov    %al,0x10(%esp)
082f624a +0x0347:  movzbl 0x14(%ebp),%eax
082f624e +0x034b:  mov    %al,0xc(%esp)
082f6252 +0x034f:  mov    0x10(%ebp),%eax
082f6255 +0x0352:  mov    %eax,0x8(%esp)
082f6259 +0x0356:  mov    0xc(%ebp),%eax
082f625c +0x0359:  mov    %eax,0x4(%esp)
082f6260 +0x035d:  mov    %ebx,(%esp)
082f6263 +0x0360:  call   082f6a0f <+0xb0c>
082f6268 +0x0365:  sub    $0x4,%esp
082f626b +0x0368:  mov    %ebx,%eax
082f626d +0x036a:  lea    -0x8(%ebp),%esp
082f6270 +0x036d:  add    $0x0,%esp
082f6273 +0x0370:  pop    %ebx
082f6274 +0x0371:  pop    %esi
082f6275 +0x0372:  pop    %ebp
082f6276 +0x0373:  ret    $0x4
082f6279 +0x0376:  push   %ebp
082f627a +0x0377:  mov    %esp,%ebp
082f627c +0x0379:  push   %ebx
082f627d +0x037a:  sub    $0x14,%esp
082f6280 +0x037d:  mov    0x8(%ebp),%eax
082f6283 +0x0380:  mov    %eax,(%esp)
082f6286 +0x0383:  call   082f6bda <+0xcd7>
082f628b +0x0388:  mov    (%eax),%ebx
082f628d +0x038a:  mov    0xc(%ebp),%eax
082f6290 +0x038d:  mov    %eax,(%esp)
082f6293 +0x0390:  call   082f6bda <+0xcd7>
082f6298 +0x0395:  mov    (%eax),%eax
082f629a +0x0397:  cmp    %eax,%ebx
082f629c +0x0399:  setne  %al
082f629f +0x039c:  add    $0x14,%esp
082f62a2 +0x039f:  pop    %ebx
082f62a3 +0x03a0:  pop    %ebp
082f62a4 +0x03a1:  ret
082f62a5 +0x03a2:  nop
082f62a6 +0x03a3:  push   %ebp
082f62a7 +0x03a4:  mov    %esp,%ebp
082f62a9 +0x03a6:  mov    0x8(%ebp),%eax
082f62ac +0x03a9:  mov    (%eax),%eax
082f62ae +0x03ab:  pop    %ebp
082f62af +0x03ac:  ret
082f62b0 +0x03ad:  push   %ebp
082f62b1 +0x03ae:  mov    %esp,%ebp
082f62b3 +0x03b0:  sub    $0x18,%esp
082f62b6 +0x03b3:  mov    0x8(%ebp),%eax
082f62b9 +0x03b6:  mov    %eax,(%esp)
082f62bc +0x03b9:  call   082f6be2 <+0xcdf>
082f62c1 +0x03be:  leave
082f62c2 +0x03bf:  ret
082f62c3 +0x03c0:  nop
082f62c4 +0x03c1:  push   %ebp
082f62c5 +0x03c2:  mov    %esp,%ebp
082f62c7 +0x03c4:  push   %esi
082f62c8 +0x03c5:  push   %ebx
082f62c9 +0x03c6:  sub    $0x30,%esp
082f62cc +0x03c9:  mov    0x8(%ebp),%ebx
082f62cf +0x03cc:  mov    0xc(%ebp),%eax
082f62d2 +0x03cf:  mov    %eax,(%esp)
082f62d5 +0x03d2:  call   082f6c32 <+0xd2f>
082f62da +0x03d7:  mov    %eax,%esi
082f62dc +0x03d9:  mov    0xc(%ebp),%eax
082f62df +0x03dc:  mov    %eax,(%esp)
082f62e2 +0x03df:  call   082ba9d6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xc8d1>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xc8d1
082f62e7 +0x03e4:  lea    -0x10(%ebp),%edx
082f62ea +0x03e7:  mov    0x10(%ebp),%ecx
082f62ed +0x03ea:  mov    %ecx,0x10(%esp)
082f62f1 +0x03ee:  mov    %esi,0xc(%esp)
082f62f5 +0x03f2:  mov    %eax,0x8(%esp)
082f62f9 +0x03f6:  mov    0xc(%ebp),%eax
082f62fc +0x03f9:  mov    %eax,0x4(%esp)
082f6300 +0x03fd:  mov    %edx,(%esp)
082f6303 +0x0400:  call   082f6c3e <+0xd3b>
082f6308 +0x0405:  sub    $0x4,%esp
082f630b +0x0408:  lea    -0xc(%ebp),%eax
082f630e +0x040b:  mov    0xc(%ebp),%edx
082f6311 +0x040e:  mov    %edx,0x4(%esp)
082f6315 +0x0412:  mov    %eax,(%esp)
082f6318 +0x0415:  call   082f6382 <+0x47f>
082f631d +0x041a:  sub    $0x4,%esp
082f6320 +0x041d:  lea    -0xc(%ebp),%eax
082f6323 +0x0420:  mov    %eax,0x4(%esp)
082f6327 +0x0424:  lea    -0x10(%ebp),%eax
082f632a +0x0427:  mov    %eax,(%esp)
082f632d +0x042a:  call   082f6cdc <+0xdd9>
082f6332 +0x042f:  test   %al,%al
082f6334 +0x0431:  jne    082f635b <+0x458>
082f6336 +0x0433:  mov    -0x10(%ebp),%eax
082f6339 +0x0436:  mov    %eax,(%esp)
082f633c +0x0439:  call   082f6cba <+0xdb7>
082f6341 +0x043e:  mov    0xc(%ebp),%edx
082f6344 +0x0441:  mov    %eax,0x8(%esp)
082f6348 +0x0445:  mov    0x10(%ebp),%eax
082f634b +0x0448:  mov    %eax,0x4(%esp)
082f634f +0x044c:  mov    %edx,(%esp)
082f6352 +0x044f:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082f6357 +0x0454:  test   %al,%al
082f6359 +0x0456:  je     082f636f <+0x46c>
082f635b +0x0458:  mov    0xc(%ebp),%eax
082f635e +0x045b:  mov    %eax,0x4(%esp)
082f6362 +0x045f:  mov    %ebx,(%esp)
082f6365 +0x0462:  call   082f6382 <+0x47f>
082f636a +0x0467:  sub    $0x4,%esp
082f636d +0x046a:  jmp    082f6374 <+0x471>
082f636f +0x046c:  mov    -0x10(%ebp),%eax
082f6372 +0x046f:  mov    %eax,(%ebx)
082f6374 +0x0471:  mov    %ebx,%eax
082f6376 +0x0473:  lea    -0x8(%ebp),%esp
082f6379 +0x0476:  add    $0x0,%esp
082f637c +0x0479:  pop    %ebx
082f637d +0x047a:  pop    %esi
082f637e +0x047b:  pop    %ebp
082f637f +0x047c:  ret    $0x4
082f6382 +0x047f:  push   %ebp
082f6383 +0x0480:  mov    %esp,%ebp
082f6385 +0x0482:  push   %ebx
082f6386 +0x0483:  sub    $0x14,%esp
082f6389 +0x0486:  mov    0x8(%ebp),%ebx
082f638c +0x0489:  mov    0xc(%ebp),%eax
082f638f +0x048c:  add    $0x4,%eax
082f6392 +0x048f:  mov    %eax,0x4(%esp)
082f6396 +0x0493:  mov    %ebx,(%esp)
082f6399 +0x0496:  call   082f6cf0 <+0xded>
082f639e +0x049b:  mov    %ebx,%eax
082f63a0 +0x049d:  add    $0x14,%esp
082f63a3 +0x04a0:  pop    %ebx
082f63a4 +0x04a1:  pop    %ebp
082f63a5 +0x04a2:  ret    $0x4
082f63a8 +0x04a5:  push   %ebp
082f63a9 +0x04a6:  mov    %esp,%ebp
082f63ab +0x04a8:  sub    $0x18,%esp
082f63ae +0x04ab:  mov    0xc(%ebp),%eax
082f63b1 +0x04ae:  mov    %eax,0x4(%esp)
082f63b5 +0x04b2:  movl   $0x8,(%esp)
082f63bc +0x04b9:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f63c1 +0x04be:  mov    %eax,%edx
082f63c3 +0x04c0:  test   %edx,%edx
082f63c5 +0x04c2:  je     082f63d6 <+0x4d3>
082f63c7 +0x04c4:  mov    %eax,%ecx
082f63c9 +0x04c6:  mov    0x10(%ebp),%eax
082f63cc +0x04c9:  mov    0x4(%eax),%edx
082f63cf +0x04cc:  mov    (%eax),%eax
082f63d1 +0x04ce:  mov    %eax,(%ecx)
082f63d3 +0x04d0:  mov    %edx,0x4(%ecx)
082f63d6 +0x04d3:  leave
082f63d7 +0x04d4:  ret
082f63d8 +0x04d5:  push   %ebp
082f63d9 +0x04d6:  mov    %esp,%ebp
082f63db +0x04d8:  push   %ebx
082f63dc +0x04d9:  sub    $0x14,%esp
082f63df +0x04dc:  mov    0x8(%ebp),%ebx
082f63e2 +0x04df:  mov    0xc(%ebp),%eax
082f63e5 +0x04e2:  add    $0x4,%eax
082f63e8 +0x04e5:  mov    %eax,0x4(%esp)
082f63ec +0x04e9:  mov    %ebx,(%esp)
082f63ef +0x04ec:  call   082f6cfe <+0xdfb>
082f63f4 +0x04f1:  mov    %ebx,%eax
082f63f6 +0x04f3:  add    $0x14,%esp
082f63f9 +0x04f6:  pop    %ebx
082f63fa +0x04f7:  pop    %ebp
082f63fb +0x04f8:  ret    $0x4
082f63fe +0x04fb:  push   %ebp
082f63ff +0x04fc:  mov    %esp,%ebp
082f6401 +0x04fe:  push   %esi
082f6402 +0x04ff:  push   %ebx
082f6403 +0x0500:  sub    $0x30,%esp
082f6406 +0x0503:  mov    0x8(%ebp),%eax
082f6409 +0x0506:  mov    0x4(%eax),%edx
082f640c +0x0509:  mov    0x8(%ebp),%eax
082f640f +0x050c:  mov    0x8(%eax),%eax
082f6412 +0x050f:  cmp    %eax,%edx
082f6414 +0x0511:  je     082f64b7 <+0x5b4>
082f641a +0x0517:  mov    0x8(%ebp),%eax
082f641d +0x051a:  mov    0x4(%eax),%eax
082f6420 +0x051d:  sub    $0x8,%eax
082f6423 +0x0520:  mov    %eax,(%esp)
082f6426 +0x0523:  call   082f6d0d <+0xe0a>
082f642b +0x0528:  mov    0x8(%ebp),%edx
082f642e +0x052b:  mov    0x4(%edx),%ecx
082f6431 +0x052e:  mov    0x8(%ebp),%edx
082f6434 +0x0531:  mov    %eax,0x8(%esp)
082f6438 +0x0535:  mov    %ecx,0x4(%esp)
082f643c +0x0539:  mov    %edx,(%esp)
082f643f +0x053c:  call   082f6d16 <+0xe13>
082f6444 +0x0541:  mov    0x8(%ebp),%eax
082f6447 +0x0544:  mov    0x4(%eax),%eax
082f644a +0x0547:  lea    0x8(%eax),%edx
082f644d +0x054a:  mov    0x8(%ebp),%eax
082f6450 +0x054d:  mov    %edx,0x4(%eax)
082f6453 +0x0550:  mov    0x8(%ebp),%eax
082f6456 +0x0553:  mov    0x4(%eax),%eax
082f6459 +0x0556:  lea    -0x8(%eax),%esi
082f645c +0x0559:  mov    0x8(%ebp),%eax
082f645f +0x055c:  mov    0x4(%eax),%eax
082f6462 +0x055f:  lea    -0x10(%eax),%ebx
082f6465 +0x0562:  lea    0xc(%ebp),%eax
082f6468 +0x0565:  mov    %eax,(%esp)
082f646b +0x0568:  call   082f6d7e <+0xe7b>
082f6470 +0x056d:  mov    (%eax),%eax
082f6472 +0x056f:  mov    %esi,0x8(%esp)
082f6476 +0x0573:  mov    %ebx,0x4(%esp)
082f647a +0x0577:  mov    %eax,(%esp)
082f647d +0x057a:  call   082f6d86 <+0xe83>
082f6482 +0x057f:  mov    0x10(%ebp),%eax
082f6485 +0x0582:  mov    %eax,(%esp)
082f6488 +0x0585:  call   082f6dbe <+0xebb>
082f648d +0x058a:  mov    0x4(%eax),%edx
082f6490 +0x058d:  mov    (%eax),%eax
082f6492 +0x058f:  mov    %eax,-0x24(%ebp)
082f6495 +0x0592:  mov    %edx,-0x20(%ebp)
082f6498 +0x0595:  lea    0xc(%ebp),%eax
082f649b +0x0598:  mov    %eax,(%esp)
082f649e +0x059b:  call   082f6dc6 <+0xec3>
082f64a3 +0x05a0:  lea    -0x24(%ebp),%edx
082f64a6 +0x05a3:  mov    %edx,0x4(%esp)
082f64aa +0x05a7:  mov    %eax,(%esp)
082f64ad +0x05aa:  call   082f6dd0 <+0xecd>
082f64b2 +0x05af:  jmp    082f66b9 <+0x7b6>
082f64b7 +0x05b4:  movl   $"vector::_M_insert_aux",0x8(%esp)
082f64bf +0x05bc:  movl   $0x1,0x4(%esp)
082f64c7 +0x05c4:  mov    0x8(%ebp),%eax
082f64ca +0x05c7:  mov    %eax,(%esp)
082f64cd +0x05ca:  call   082f6e04 <+0xf01>
082f64d2 +0x05cf:  mov    %eax,-0x18(%ebp)
082f64d5 +0x05d2:  lea    -0x1c(%ebp),%eax
082f64d8 +0x05d5:  mov    0x8(%ebp),%edx
082f64db +0x05d8:  mov    %edx,0x4(%esp)
082f64df +0x05dc:  mov    %eax,(%esp)
082f64e2 +0x05df:  call   082f6eaa <+0xfa7>
082f64e7 +0x05e4:  sub    $0x4,%esp
082f64ea +0x05e7:  lea    -0x1c(%ebp),%eax
082f64ed +0x05ea:  mov    %eax,0x4(%esp)
082f64f1 +0x05ee:  lea    0xc(%ebp),%eax
082f64f4 +0x05f1:  mov    %eax,(%esp)
082f64f7 +0x05f4:  call   082f6ecd <+0xfca>
082f64fc +0x05f9:  mov    %eax,-0x14(%ebp)
082f64ff +0x05fc:  mov    0x8(%ebp),%eax
082f6502 +0x05ff:  mov    -0x18(%ebp),%edx
082f6505 +0x0602:  mov    %edx,0x4(%esp)
082f6509 +0x0606:  mov    %eax,(%esp)
082f650c +0x0609:  call   082f6f00 <+0xffd>
082f6511 +0x060e:  mov    %eax,-0x10(%ebp)
082f6514 +0x0611:  mov    -0x10(%ebp),%eax
082f6517 +0x0614:  mov    %eax,-0xc(%ebp)
082f651a +0x0617:  mov    0x10(%ebp),%eax
082f651d +0x061a:  mov    %eax,(%esp)
082f6520 +0x061d:  call   082f6dbe <+0xebb>
082f6525 +0x0622:  mov    -0x14(%ebp),%edx
082f6528 +0x0625:  shl    $0x3,%edx
082f652b +0x0628:  mov    %edx,%ecx
082f652d +0x062a:  add    -0x10(%ebp),%ecx
082f6530 +0x062d:  mov    0x8(%ebp),%edx
082f6533 +0x0630:  mov    %eax,0x8(%esp)
082f6537 +0x0634:  mov    %ecx,0x4(%esp)
082f653b +0x0638:  mov    %edx,(%esp)
082f653e +0x063b:  call   082f63a8 <+0x4a5>
082f6543 +0x0640:  movl   $0x0,-0xc(%ebp)
082f654a +0x0647:  mov    0x8(%ebp),%eax
082f654d +0x064a:  mov    %eax,(%esp)
082f6550 +0x064d:  call   082df4f6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x93ed>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x93ed
082f6555 +0x0652:  mov    %eax,%ebx
082f6557 +0x0654:  lea    0xc(%ebp),%eax
082f655a +0x0657:  mov    %eax,(%esp)
082f655d +0x065a:  call   082f6d7e <+0xe7b>
082f6562 +0x065f:  mov    (%eax),%edx
082f6564 +0x0661:  mov    0x8(%ebp),%eax
082f6567 +0x0664:  mov    (%eax),%eax
082f6569 +0x0666:  mov    %ebx,0xc(%esp)
082f656d +0x066a:  mov    -0x10(%ebp),%ecx
082f6570 +0x066d:  mov    %ecx,0x8(%esp)
082f6574 +0x0671:  mov    %edx,0x4(%esp)
082f6578 +0x0675:  mov    %eax,(%esp)
082f657b +0x0678:  call   082f6f2f <+0x102c>
082f6580 +0x067d:  mov    %eax,-0xc(%ebp)
082f6583 +0x0680:  addl   $0x8,-0xc(%ebp)
082f6587 +0x0684:  mov    0x8(%ebp),%eax
082f658a +0x0687:  mov    %eax,(%esp)
082f658d +0x068a:  call   082df4f6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x93ed>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x93ed
082f6592 +0x068f:  mov    %eax,%ebx
082f6594 +0x0691:  mov    0x8(%ebp),%eax
082f6597 +0x0694:  mov    0x4(%eax),%esi
082f659a +0x0697:  lea    0xc(%ebp),%eax
082f659d +0x069a:  mov    %eax,(%esp)
082f65a0 +0x069d:  call   082f6d7e <+0xe7b>
082f65a5 +0x06a2:  mov    (%eax),%eax
082f65a7 +0x06a4:  mov    %ebx,0xc(%esp)
082f65ab +0x06a8:  mov    -0xc(%ebp),%edx
082f65ae +0x06ab:  mov    %edx,0x8(%esp)
082f65b2 +0x06af:  mov    %esi,0x4(%esp)
082f65b6 +0x06b3:  mov    %eax,(%esp)
082f65b9 +0x06b6:  call   082f6f2f <+0x102c>
082f65be +0x06bb:  mov    %eax,-0xc(%ebp)
082f65c1 +0x06be:  mov    0x8(%ebp),%eax
082f65c4 +0x06c1:  mov    %eax,(%esp)
082f65c7 +0x06c4:  call   082df4f6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x93ed>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x93ed
082f65cc +0x06c9:  mov    0x8(%ebp),%edx
082f65cf +0x06cc:  mov    0x4(%edx),%ecx
082f65d2 +0x06cf:  mov    0x8(%ebp),%edx
082f65d5 +0x06d2:  mov    (%edx),%edx
082f65d7 +0x06d4:  mov    %eax,0x8(%esp)
082f65db +0x06d8:  mov    %ecx,0x4(%esp)
082f65df +0x06dc:  mov    %edx,(%esp)
082f65e2 +0x06df:  call   082df4fe <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x93f5>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x93f5
082f65e7 +0x06e4:  mov    0x8(%ebp),%eax
082f65ea +0x06e7:  mov    0x8(%eax),%eax
082f65ed +0x06ea:  mov    %eax,%edx
082f65ef +0x06ec:  mov    0x8(%ebp),%eax
082f65f2 +0x06ef:  mov    (%eax),%eax
082f65f4 +0x06f1:  mov    %edx,%ecx
082f65f6 +0x06f3:  sub    %eax,%ecx
082f65f8 +0x06f5:  mov    %ecx,%eax
082f65fa +0x06f7:  sar    $0x3,%eax
082f65fd +0x06fa:  mov    %eax,%ecx
082f65ff +0x06fc:  mov    0x8(%ebp),%eax
082f6602 +0x06ff:  mov    (%eax),%edx
082f6604 +0x0701:  mov    0x8(%ebp),%eax
082f6607 +0x0704:  mov    %ecx,0x8(%esp)
082f660b +0x0708:  mov    %edx,0x4(%esp)
082f660f +0x070c:  mov    %eax,(%esp)
082f6612 +0x070f:  call   082e2012 <_GLOBAL__I__ZN4CLog5this_E+0x3e439>  ; global constructors keyed to CLog::this_+0x3e439
082f6617 +0x0714:  mov    0x8(%ebp),%eax
082f661a +0x0717:  mov    -0x10(%ebp),%edx
082f661d +0x071a:  mov    %edx,(%eax)
082f661f +0x071c:  mov    0x8(%ebp),%eax
082f6622 +0x071f:  mov    -0xc(%ebp),%edx
082f6625 +0x0722:  mov    %edx,0x4(%eax)
082f6628 +0x0725:  mov    -0x18(%ebp),%eax
082f662b +0x0728:  shl    $0x3,%eax
082f662e +0x072b:  mov    %eax,%edx
082f6630 +0x072d:  add    -0x10(%ebp),%edx
082f6633 +0x0730:  mov    0x8(%ebp),%eax
082f6636 +0x0733:  mov    %edx,0x8(%eax)
082f6639 +0x0736:  jmp    082f66b9 <+0x7b6>
082f663b +0x0738:  mov    %eax,(%esp)
082f663e +0x073b:  call   08725ce0 <__cxa_begin_catch>
082f6643 +0x0740:  cmpl   $0x0,-0xc(%ebp)
082f6647 +0x0744:  jne    082f6665 <+0x762>
082f6649 +0x0746:  mov    -0x14(%ebp),%eax
082f664c +0x0749:  shl    $0x3,%eax
082f664f +0x074c:  mov    %eax,%edx
082f6651 +0x074e:  add    -0x10(%ebp),%edx
082f6654 +0x0751:  mov    0x8(%ebp),%eax
082f6657 +0x0754:  mov    %edx,0x4(%esp)
082f665b +0x0758:  mov    %eax,(%esp)
082f665e +0x075b:  call   082f6f88 <+0x1085>
082f6663 +0x0760:  jmp    082f6686 <+0x783>
082f6665 +0x0762:  mov    0x8(%ebp),%eax
082f6668 +0x0765:  mov    %eax,(%esp)
082f666b +0x0768:  call   082df4f6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x93ed>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x93ed
082f6670 +0x076d:  mov    %eax,0x8(%esp)
082f6674 +0x0771:  mov    -0xc(%ebp),%eax
082f6677 +0x0774:  mov    %eax,0x4(%esp)
082f667b +0x0778:  mov    -0x10(%ebp),%eax
082f667e +0x077b:  mov    %eax,(%esp)
082f6681 +0x077e:  call   082df4fe <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x93f5>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x93f5
082f6686 +0x0783:  mov    0x8(%ebp),%eax
082f6689 +0x0786:  mov    -0x18(%ebp),%edx
082f668c +0x0789:  mov    %edx,0x8(%esp)
082f6690 +0x078d:  mov    -0x10(%ebp),%edx
082f6693 +0x0790:  mov    %edx,0x4(%esp)
082f6697 +0x0794:  mov    %eax,(%esp)
082f669a +0x0797:  call   082e2012 <_GLOBAL__I__ZN4CLog5this_E+0x3e439>  ; global constructors keyed to CLog::this_+0x3e439
082f669f +0x079c:  call   08724be0 <__cxa_rethrow>
082f66a4 +0x07a1:  mov    %edx,%ebx
082f66a6 +0x07a3:  mov    %eax,%esi
082f66a8 +0x07a5:  call   08725c30 <__cxa_end_catch>
082f66ad +0x07aa:  mov    %esi,%eax
082f66af +0x07ac:  mov    %ebx,%edx
082f66b1 +0x07ae:  mov    %eax,(%esp)
082f66b4 +0x07b1:  call   08ae3750 <_Unwind_Resume>
082f66b9 +0x07b6:  lea    -0x8(%ebp),%esp
082f66bc +0x07b9:  add    $0x0,%esp
082f66bf +0x07bc:  pop    %ebx
082f66c0 +0x07bd:  pop    %esi
082f66c1 +0x07be:  pop    %ebp
082f66c2 +0x07bf:  ret
082f66c3 +0x07c0:  nop
082f66c4 +0x07c1:  push   %ebp
082f66c5 +0x07c2:  mov    %esp,%ebp
082f66c7 +0x07c4:  sub    $0x18,%esp
082f66ca +0x07c7:  mov    0x8(%ebp),%eax
082f66cd +0x07ca:  mov    %eax,(%esp)
082f66d0 +0x07cd:  call   082f6f9c <+0x1099>
082f66d5 +0x07d2:  leave
082f66d6 +0x07d3:  ret
082f66d7 +0x07d4:  push   %ebp
082f66d8 +0x07d5:  mov    %esp,%ebp
082f66da +0x07d7:  mov    0x8(%ebp),%eax
082f66dd +0x07da:  pop    %ebp
082f66de +0x07db:  ret
082f66df +0x07dc:  nop
082f66e0 +0x07dd:  push   %ebp
082f66e1 +0x07de:  mov    %esp,%ebp
082f66e3 +0x07e0:  sub    $0x18,%esp
082f66e6 +0x07e3:  mov    0xc(%ebp),%eax
082f66e9 +0x07e6:  mov    %eax,(%esp)
082f66ec +0x07e9:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
082f66f1 +0x07ee:  mov    (%eax),%edx
082f66f3 +0x07f0:  mov    0x8(%ebp),%eax
082f66f6 +0x07f3:  mov    %edx,(%eax)
082f66f8 +0x07f5:  mov    0x10(%ebp),%eax
082f66fb +0x07f8:  mov    %eax,(%esp)
082f66fe +0x07fb:  call   082f66d7 <+0x7d4>
082f6703 +0x0800:  mov    0x8(%ebp),%edx
082f6706 +0x0803:  add    $0x4,%edx
082f6709 +0x0806:  mov    %eax,0x4(%esp)
082f670d +0x080a:  mov    %edx,(%esp)
082f6710 +0x080d:  call   082f6fcc <+0x10c9>
082f6715 +0x0812:  leave
082f6716 +0x0813:  ret
082f6717 +0x0814:  push   %ebp
082f6718 +0x0815:  mov    %esp,%ebp
082f671a +0x0817:  mov    0x8(%ebp),%eax
082f671d +0x081a:  pop    %ebp
082f671e +0x081b:  ret
082f671f +0x081c:  nop
082f6720 +0x081d:  push   %ebp
082f6721 +0x081e:  mov    %esp,%ebp
082f6723 +0x0820:  sub    $0x18,%esp
082f6726 +0x0823:  mov    0xc(%ebp),%eax
082f6729 +0x0826:  mov    %eax,(%esp)
082f672c +0x0829:  call   082f7080 <+0x117d>
082f6731 +0x082e:  mov    0x8(%ebp),%edx
082f6734 +0x0831:  mov    %eax,0x4(%esp)
082f6738 +0x0835:  mov    %edx,(%esp)
082f673b +0x0838:  call   082f7088 <+0x1185>
082f6740 +0x083d:  leave
082f6741 +0x083e:  ret
082f6742 +0x083f:  push   %ebp
082f6743 +0x0840:  mov    %esp,%ebp
082f6745 +0x0842:  push   %esi
082f6746 +0x0843:  push   %ebx
082f6747 +0x0844:  sub    $0x50,%esp
082f674a +0x0847:  mov    0x8(%ebp),%ebx
082f674d +0x084a:  mov    0xc(%ebp),%eax
082f6750 +0x084d:  mov    %eax,(%esp)
082f6753 +0x0850:  call   082ba9d6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0xc8d1>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0xc8d1
082f6758 +0x0855:  mov    %eax,-0x14(%ebp)
082f675b +0x0858:  mov    0xc(%ebp),%eax
082f675e +0x085b:  mov    %eax,(%esp)
082f6761 +0x085e:  call   082f6c32 <+0xd2f>
082f6766 +0x0863:  mov    %eax,-0x10(%ebp)
082f6769 +0x0866:  movb   $0x1,-0x9(%ebp)
082f676d +0x086a:  jmp    082f67cb <+0x8c8>
082f676f +0x086c:  mov    -0x14(%ebp),%eax
082f6772 +0x086f:  mov    %eax,-0x10(%ebp)
082f6775 +0x0872:  mov    -0x14(%ebp),%eax
082f6778 +0x0875:  mov    %eax,(%esp)
082f677b +0x0878:  call   082f70f2 <+0x11ef>
082f6780 +0x087d:  mov    %eax,%esi
082f6782 +0x087f:  mov    0x10(%ebp),%eax
082f6785 +0x0882:  mov    %eax,0x4(%esp)
082f6789 +0x0886:  lea    -0x2d(%ebp),%eax
082f678c +0x0889:  mov    %eax,(%esp)
082f678f +0x088c:  call   082f70ea <+0x11e7>
082f6794 +0x0891:  mov    0xc(%ebp),%edx
082f6797 +0x0894:  mov    %esi,0x8(%esp)
082f679b +0x0898:  mov    %eax,0x4(%esp)
082f679f +0x089c:  mov    %edx,(%esp)
082f67a2 +0x089f:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082f67a7 +0x08a4:  mov    %al,-0x9(%ebp)
082f67aa +0x08a7:  cmpb   $0x0,-0x9(%ebp)
082f67ae +0x08ab:  je     082f67bd <+0x8ba>
082f67b0 +0x08ad:  mov    -0x14(%ebp),%eax
082f67b3 +0x08b0:  mov    %eax,(%esp)
082f67b6 +0x08b3:  call   082c43be <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x162b9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x162b9
082f67bb +0x08b8:  jmp    082f67c8 <+0x8c5>
082f67bd +0x08ba:  mov    -0x14(%ebp),%eax
082f67c0 +0x08bd:  mov    %eax,(%esp)
082f67c3 +0x08c0:  call   082c43b3 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x162ae>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x162ae
082f67c8 +0x08c5:  mov    %eax,-0x14(%ebp)
082f67cb +0x08c8:  cmpl   $0x0,-0x14(%ebp)
082f67cf +0x08cc:  setne  %al
082f67d2 +0x08cf:  test   %al,%al
082f67d4 +0x08d1:  jne    082f676f <+0x86c>
082f67d6 +0x08d3:  mov    -0x10(%ebp),%eax
082f67d9 +0x08d6:  mov    %eax,0x4(%esp)
082f67dd +0x08da:  lea    -0x34(%ebp),%eax
082f67e0 +0x08dd:  mov    %eax,(%esp)
082f67e3 +0x08e0:  call   082f6cf0 <+0xded>
082f67e8 +0x08e5:  cmpb   $0x0,-0x9(%ebp)
082f67ec +0x08e9:  je     082f686d <+0x96a>
082f67ee +0x08eb:  lea    -0x2c(%ebp),%eax
082f67f1 +0x08ee:  mov    0xc(%ebp),%edx
082f67f4 +0x08f1:  mov    %edx,0x4(%esp)
082f67f8 +0x08f5:  mov    %eax,(%esp)
082f67fb +0x08f8:  call   082f7114 <+0x1211>
082f6800 +0x08fd:  sub    $0x4,%esp
082f6803 +0x0900:  lea    -0x2c(%ebp),%eax
082f6806 +0x0903:  mov    %eax,0x4(%esp)
082f680a +0x0907:  lea    -0x34(%ebp),%eax
082f680d +0x090a:  mov    %eax,(%esp)
082f6810 +0x090d:  call   082f6cdc <+0xdd9>
082f6815 +0x0912:  test   %al,%al
082f6817 +0x0914:  je     082f6862 <+0x95f>
082f6819 +0x0916:  movb   $0x1,-0x25(%ebp)
082f681d +0x091a:  mov    -0x10(%ebp),%ecx
082f6820 +0x091d:  mov    -0x14(%ebp),%edx
082f6823 +0x0920:  lea    -0x24(%ebp),%eax
082f6826 +0x0923:  mov    0x10(%ebp),%esi
082f6829 +0x0926:  mov    %esi,0x10(%esp)
082f682d +0x092a:  mov    %ecx,0xc(%esp)
082f6831 +0x092e:  mov    %edx,0x8(%esp)
082f6835 +0x0932:  mov    0xc(%ebp),%edx
082f6838 +0x0935:  mov    %edx,0x4(%esp)
082f683c +0x0939:  mov    %eax,(%esp)
082f683f +0x093c:  call   082f713a <+0x1237>
082f6844 +0x0941:  sub    $0x4,%esp
082f6847 +0x0944:  lea    -0x25(%ebp),%eax
082f684a +0x0947:  mov    %eax,0x8(%esp)
082f684e +0x094b:  lea    -0x24(%ebp),%eax
082f6851 +0x094e:  mov    %eax,0x4(%esp)
082f6855 +0x0952:  mov    %ebx,(%esp)
082f6858 +0x0955:  call   082f7202 <+0x12ff>
082f685d +0x095a:  jmp    082f6903 <+0xa00>
082f6862 +0x095f:  lea    -0x34(%ebp),%eax
082f6865 +0x0962:  mov    %eax,(%esp)
082f6868 +0x0965:  call   082f7230 <+0x132d>
082f686d +0x096a:  mov    0x10(%ebp),%eax
082f6870 +0x096d:  mov    %eax,0x4(%esp)
082f6874 +0x0971:  lea    -0x1e(%ebp),%eax
082f6877 +0x0974:  mov    %eax,(%esp)
082f687a +0x0977:  call   082f70ea <+0x11e7>
082f687f +0x097c:  mov    %eax,%esi
082f6881 +0x097e:  mov    -0x34(%ebp),%eax
082f6884 +0x0981:  mov    %eax,(%esp)
082f6887 +0x0984:  call   082f6cba <+0xdb7>
082f688c +0x0989:  mov    0xc(%ebp),%edx
082f688f +0x098c:  mov    %esi,0x8(%esp)
082f6893 +0x0990:  mov    %eax,0x4(%esp)
082f6897 +0x0994:  mov    %edx,(%esp)
082f689a +0x0997:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082f689f +0x099c:  test   %al,%al
082f68a1 +0x099e:  je     082f68e9 <+0x9e6>
082f68a3 +0x09a0:  movb   $0x1,-0x1d(%ebp)
082f68a7 +0x09a4:  mov    -0x10(%ebp),%ecx
082f68aa +0x09a7:  mov    -0x14(%ebp),%edx
082f68ad +0x09aa:  lea    -0x1c(%ebp),%eax
082f68b0 +0x09ad:  mov    0x10(%ebp),%esi
082f68b3 +0x09b0:  mov    %esi,0x10(%esp)
082f68b7 +0x09b4:  mov    %ecx,0xc(%esp)
082f68bb +0x09b8:  mov    %edx,0x8(%esp)
082f68bf +0x09bc:  mov    0xc(%ebp),%edx
082f68c2 +0x09bf:  mov    %edx,0x4(%esp)
082f68c6 +0x09c3:  mov    %eax,(%esp)
082f68c9 +0x09c6:  call   082f713a <+0x1237>
082f68ce +0x09cb:  sub    $0x4,%esp
082f68d1 +0x09ce:  lea    -0x1d(%ebp),%eax
082f68d4 +0x09d1:  mov    %eax,0x8(%esp)
082f68d8 +0x09d5:  lea    -0x1c(%ebp),%eax
082f68db +0x09d8:  mov    %eax,0x4(%esp)
082f68df +0x09dc:  mov    %ebx,(%esp)
082f68e2 +0x09df:  call   082f7202 <+0x12ff>
082f68e7 +0x09e4:  jmp    082f6903 <+0xa00>
082f68e9 +0x09e6:  movb   $0x0,-0x15(%ebp)
082f68ed +0x09ea:  lea    -0x15(%ebp),%eax
082f68f0 +0x09ed:  mov    %eax,0x8(%esp)
082f68f4 +0x09f1:  lea    -0x34(%ebp),%eax
082f68f7 +0x09f4:  mov    %eax,0x4(%esp)
082f68fb +0x09f8:  mov    %ebx,(%esp)
082f68fe +0x09fb:  call   082f724e <+0x134b>
082f6903 +0x0a00:  mov    %ebx,%eax
082f6905 +0x0a02:  lea    -0x8(%ebp),%esp
082f6908 +0x0a05:  add    $0x0,%esp
082f690b +0x0a08:  pop    %ebx
082f690c +0x0a09:  pop    %esi
082f690d +0x0a0a:  pop    %ebp
082f690e +0x0a0b:  ret    $0x4
082f6911 +0x0a0e:  nop
082f6912 +0x0a0f:  push   %ebp
082f6913 +0x0a10:  mov    %esp,%ebp
082f6915 +0x0a12:  push   %esi
082f6916 +0x0a13:  push   %ebx
082f6917 +0x0a14:  sub    $0x30,%esp
082f691a +0x0a17:  mov    0x8(%ebp),%ebx
082f691d +0x0a1a:  mov    0xc(%ebp),%eax
082f6920 +0x0a1d:  mov    %eax,(%esp)
082f6923 +0x0a20:  call   082f7288 <+0x1385>
082f6928 +0x0a25:  mov    %eax,%esi
082f692a +0x0a27:  mov    0xc(%ebp),%eax
082f692d +0x0a2a:  mov    %eax,(%esp)
082f6930 +0x0a2d:  call   082f727c <+0x1379>
082f6935 +0x0a32:  lea    -0x10(%ebp),%edx
082f6938 +0x0a35:  mov    0x10(%ebp),%ecx
082f693b +0x0a38:  mov    %ecx,0x10(%esp)
082f693f +0x0a3c:  mov    %esi,0xc(%esp)
082f6943 +0x0a40:  mov    %eax,0x8(%esp)
082f6947 +0x0a44:  mov    0xc(%ebp),%eax
082f694a +0x0a47:  mov    %eax,0x4(%esp)
082f694e +0x0a4b:  mov    %edx,(%esp)
082f6951 +0x0a4e:  call   082f7294 <+0x1391>
082f6956 +0x0a53:  sub    $0x4,%esp
082f6959 +0x0a56:  lea    -0xc(%ebp),%eax
082f695c +0x0a59:  mov    0xc(%ebp),%edx
082f695f +0x0a5c:  mov    %edx,0x4(%esp)
082f6963 +0x0a60:  mov    %eax,(%esp)
082f6966 +0x0a63:  call   082f69d0 <+0xacd>
082f696b +0x0a68:  sub    $0x4,%esp
082f696e +0x0a6b:  lea    -0xc(%ebp),%eax
082f6971 +0x0a6e:  mov    %eax,0x4(%esp)
082f6975 +0x0a72:  lea    -0x10(%ebp),%eax
082f6978 +0x0a75:  mov    %eax,(%esp)
082f697b +0x0a78:  call   082f7310 <+0x140d>
082f6980 +0x0a7d:  test   %al,%al
082f6982 +0x0a7f:  jne    082f69a9 <+0xaa6>
082f6984 +0x0a81:  mov    -0x10(%ebp),%eax
082f6987 +0x0a84:  mov    %eax,(%esp)
082f698a +0x0a87:  call   082f6cba <+0xdb7>
082f698f +0x0a8c:  mov    0xc(%ebp),%edx
082f6992 +0x0a8f:  mov    %eax,0x8(%esp)
082f6996 +0x0a93:  mov    0x10(%ebp),%eax
082f6999 +0x0a96:  mov    %eax,0x4(%esp)
082f699d +0x0a9a:  mov    %edx,(%esp)
082f69a0 +0x0a9d:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082f69a5 +0x0aa2:  test   %al,%al
082f69a7 +0x0aa4:  je     082f69bd <+0xaba>
082f69a9 +0x0aa6:  mov    0xc(%ebp),%eax
082f69ac +0x0aa9:  mov    %eax,0x4(%esp)
082f69b0 +0x0aad:  mov    %ebx,(%esp)
082f69b3 +0x0ab0:  call   082f69d0 <+0xacd>
082f69b8 +0x0ab5:  sub    $0x4,%esp
082f69bb +0x0ab8:  jmp    082f69c2 <+0xabf>
082f69bd +0x0aba:  mov    -0x10(%ebp),%eax
082f69c0 +0x0abd:  mov    %eax,(%ebx)
082f69c2 +0x0abf:  mov    %ebx,%eax
082f69c4 +0x0ac1:  lea    -0x8(%ebp),%esp
082f69c7 +0x0ac4:  add    $0x0,%esp
082f69ca +0x0ac7:  pop    %ebx
082f69cb +0x0ac8:  pop    %esi
082f69cc +0x0ac9:  pop    %ebp
082f69cd +0x0aca:  ret    $0x4
082f69d0 +0x0acd:  push   %ebp
082f69d1 +0x0ace:  mov    %esp,%ebp
082f69d3 +0x0ad0:  push   %ebx
082f69d4 +0x0ad1:  sub    $0x14,%esp
082f69d7 +0x0ad4:  mov    0x8(%ebp),%ebx
082f69da +0x0ad7:  mov    0xc(%ebp),%eax
082f69dd +0x0ada:  add    $0x4,%eax
082f69e0 +0x0add:  mov    %eax,0x4(%esp)
082f69e4 +0x0ae1:  mov    %ebx,(%esp)
082f69e7 +0x0ae4:  call   082f7324 <+0x1421>
082f69ec +0x0ae9:  mov    %ebx,%eax
082f69ee +0x0aeb:  add    $0x14,%esp
082f69f1 +0x0aee:  pop    %ebx
082f69f2 +0x0aef:  pop    %ebp
082f69f3 +0x0af0:  ret    $0x4
082f69f6 +0x0af3:  push   %ebp
082f69f7 +0x0af4:  mov    %esp,%ebp
082f69f9 +0x0af6:  mov    0xc(%ebp),%eax
082f69fc +0x0af9:  mov    (%eax),%edx
082f69fe +0x0afb:  mov    0x8(%ebp),%eax
082f6a01 +0x0afe:  mov    %edx,(%eax)
082f6a03 +0x0b00:  pop    %ebp
082f6a04 +0x0b01:  ret
082f6a05 +0x0b02:  push   %ebp
082f6a06 +0x0b03:  mov    %esp,%ebp
082f6a08 +0x0b05:  mov    0x8(%ebp),%eax
082f6a0b +0x0b08:  pop    %ebp
082f6a0c +0x0b09:  ret    $0x4
082f6a0f +0x0b0c:  push   %ebp
082f6a10 +0x0b0d:  mov    %esp,%ebp
082f6a12 +0x0b0f:  push   %ebx
082f6a13 +0x0b10:  sub    $0x24,%esp
082f6a16 +0x0b13:  mov    0x8(%ebp),%ebx
082f6a19 +0x0b16:  lea    0xc(%ebp),%eax
082f6a1c +0x0b19:  mov    %eax,0x4(%esp)
082f6a20 +0x0b1d:  lea    0x10(%ebp),%eax
082f6a23 +0x0b20:  mov    %eax,(%esp)
082f6a26 +0x0b23:  call   082f7331 <+0x142e>
082f6a2b +0x0b28:  sar    $0x2,%eax
082f6a2e +0x0b2b:  mov    %eax,-0xc(%ebp)
082f6a31 +0x0b2e:  jmp    082f6b06 <+0xc03>
082f6a36 +0x0b33:  lea    0xc(%ebp),%eax
082f6a39 +0x0b36:  mov    %eax,(%esp)
082f6a3c +0x0b39:  call   082f7364 <+0x1461>
082f6a41 +0x0b3e:  mov    %eax,0x4(%esp)
082f6a45 +0x0b42:  lea    0x14(%ebp),%eax
082f6a48 +0x0b45:  mov    %eax,(%esp)
082f6a4b +0x0b48:  call   082f5f38 <+0x35>
082f6a50 +0x0b4d:  test   %al,%al
082f6a52 +0x0b4f:  je     082f6a5e <+0xb5b>
082f6a54 +0x0b51:  mov    0xc(%ebp),%eax
082f6a57 +0x0b54:  mov    %eax,(%ebx)
082f6a59 +0x0b56:  jmp    082f6bd0 <+0xccd>
082f6a5e +0x0b5b:  lea    0xc(%ebp),%eax
082f6a61 +0x0b5e:  mov    %eax,(%esp)
082f6a64 +0x0b61:  call   082f736e <+0x146b>
082f6a69 +0x0b66:  lea    0xc(%ebp),%eax
082f6a6c +0x0b69:  mov    %eax,(%esp)
082f6a6f +0x0b6c:  call   082f7364 <+0x1461>
082f6a74 +0x0b71:  mov    %eax,0x4(%esp)
082f6a78 +0x0b75:  lea    0x14(%ebp),%eax
082f6a7b +0x0b78:  mov    %eax,(%esp)
082f6a7e +0x0b7b:  call   082f5f38 <+0x35>
082f6a83 +0x0b80:  test   %al,%al
082f6a85 +0x0b82:  je     082f6a91 <+0xb8e>
082f6a87 +0x0b84:  mov    0xc(%ebp),%eax
082f6a8a +0x0b87:  mov    %eax,(%ebx)
082f6a8c +0x0b89:  jmp    082f6bd0 <+0xccd>
082f6a91 +0x0b8e:  lea    0xc(%ebp),%eax
082f6a94 +0x0b91:  mov    %eax,(%esp)
082f6a97 +0x0b94:  call   082f736e <+0x146b>
082f6a9c +0x0b99:  lea    0xc(%ebp),%eax
082f6a9f +0x0b9c:  mov    %eax,(%esp)
082f6aa2 +0x0b9f:  call   082f7364 <+0x1461>
082f6aa7 +0x0ba4:  mov    %eax,0x4(%esp)
082f6aab +0x0ba8:  lea    0x14(%ebp),%eax
082f6aae +0x0bab:  mov    %eax,(%esp)
082f6ab1 +0x0bae:  call   082f5f38 <+0x35>
082f6ab6 +0x0bb3:  test   %al,%al
082f6ab8 +0x0bb5:  je     082f6ac4 <+0xbc1>
082f6aba +0x0bb7:  mov    0xc(%ebp),%eax
082f6abd +0x0bba:  mov    %eax,(%ebx)
082f6abf +0x0bbc:  jmp    082f6bd0 <+0xccd>
082f6ac4 +0x0bc1:  lea    0xc(%ebp),%eax
082f6ac7 +0x0bc4:  mov    %eax,(%esp)
082f6aca +0x0bc7:  call   082f736e <+0x146b>
082f6acf +0x0bcc:  lea    0xc(%ebp),%eax
082f6ad2 +0x0bcf:  mov    %eax,(%esp)
082f6ad5 +0x0bd2:  call   082f7364 <+0x1461>
082f6ada +0x0bd7:  mov    %eax,0x4(%esp)
082f6ade +0x0bdb:  lea    0x14(%ebp),%eax
082f6ae1 +0x0bde:  mov    %eax,(%esp)
082f6ae4 +0x0be1:  call   082f5f38 <+0x35>
082f6ae9 +0x0be6:  test   %al,%al
082f6aeb +0x0be8:  je     082f6af7 <+0xbf4>
082f6aed +0x0bea:  mov    0xc(%ebp),%eax
082f6af0 +0x0bed:  mov    %eax,(%ebx)
082f6af2 +0x0bef:  jmp    082f6bd0 <+0xccd>
082f6af7 +0x0bf4:  lea    0xc(%ebp),%eax
082f6afa +0x0bf7:  mov    %eax,(%esp)
082f6afd +0x0bfa:  call   082f736e <+0x146b>
082f6b02 +0x0bff:  subl   $0x1,-0xc(%ebp)
082f6b06 +0x0c03:  cmpl   $0x0,-0xc(%ebp)
082f6b0a +0x0c07:  setg   %al
082f6b0d +0x0c0a:  test   %al,%al
082f6b0f +0x0c0c:  jne    082f6a36 <+0xb33>
082f6b15 +0x0c12:  lea    0xc(%ebp),%eax
082f6b18 +0x0c15:  mov    %eax,0x4(%esp)
082f6b1c +0x0c19:  lea    0x10(%ebp),%eax
082f6b1f +0x0c1c:  mov    %eax,(%esp)
082f6b22 +0x0c1f:  call   082f7331 <+0x142e>
082f6b27 +0x0c24:  cmp    $0x2,%eax
082f6b2a +0x0c27:  je     082f6b6b <+0xc68>
082f6b2c +0x0c29:  cmp    $0x3,%eax
082f6b2f +0x0c2c:  je     082f6b3b <+0xc38>
082f6b31 +0x0c2e:  cmp    $0x1,%eax
082f6b34 +0x0c31:  je     082f6b9b <+0xc98>
082f6b36 +0x0c33:  jmp    082f6bcb <+0xcc8>
082f6b3b +0x0c38:  lea    0xc(%ebp),%eax
082f6b3e +0x0c3b:  mov    %eax,(%esp)
082f6b41 +0x0c3e:  call   082f7364 <+0x1461>
082f6b46 +0x0c43:  mov    %eax,0x4(%esp)
082f6b4a +0x0c47:  lea    0x14(%ebp),%eax
082f6b4d +0x0c4a:  mov    %eax,(%esp)
082f6b50 +0x0c4d:  call   082f5f38 <+0x35>
082f6b55 +0x0c52:  test   %al,%al
082f6b57 +0x0c54:  je     082f6b60 <+0xc5d>
082f6b59 +0x0c56:  mov    0xc(%ebp),%eax
082f6b5c +0x0c59:  mov    %eax,(%ebx)
082f6b5e +0x0c5b:  jmp    082f6bd0 <+0xccd>
082f6b60 +0x0c5d:  lea    0xc(%ebp),%eax
082f6b63 +0x0c60:  mov    %eax,(%esp)
082f6b66 +0x0c63:  call   082f736e <+0x146b>
082f6b6b +0x0c68:  lea    0xc(%ebp),%eax
082f6b6e +0x0c6b:  mov    %eax,(%esp)
082f6b71 +0x0c6e:  call   082f7364 <+0x1461>
082f6b76 +0x0c73:  mov    %eax,0x4(%esp)
082f6b7a +0x0c77:  lea    0x14(%ebp),%eax
082f6b7d +0x0c7a:  mov    %eax,(%esp)
082f6b80 +0x0c7d:  call   082f5f38 <+0x35>
082f6b85 +0x0c82:  test   %al,%al
082f6b87 +0x0c84:  je     082f6b90 <+0xc8d>
082f6b89 +0x0c86:  mov    0xc(%ebp),%eax
082f6b8c +0x0c89:  mov    %eax,(%ebx)
082f6b8e +0x0c8b:  jmp    082f6bd0 <+0xccd>
082f6b90 +0x0c8d:  lea    0xc(%ebp),%eax
082f6b93 +0x0c90:  mov    %eax,(%esp)
082f6b96 +0x0c93:  call   082f736e <+0x146b>
082f6b9b +0x0c98:  lea    0xc(%ebp),%eax
082f6b9e +0x0c9b:  mov    %eax,(%esp)
082f6ba1 +0x0c9e:  call   082f7364 <+0x1461>
082f6ba6 +0x0ca3:  mov    %eax,0x4(%esp)
082f6baa +0x0ca7:  lea    0x14(%ebp),%eax
082f6bad +0x0caa:  mov    %eax,(%esp)
082f6bb0 +0x0cad:  call   082f5f38 <+0x35>
082f6bb5 +0x0cb2:  test   %al,%al
082f6bb7 +0x0cb4:  je     082f6bc0 <+0xcbd>
082f6bb9 +0x0cb6:  mov    0xc(%ebp),%eax
082f6bbc +0x0cb9:  mov    %eax,(%ebx)
082f6bbe +0x0cbb:  jmp    082f6bd0 <+0xccd>
082f6bc0 +0x0cbd:  lea    0xc(%ebp),%eax
082f6bc3 +0x0cc0:  mov    %eax,(%esp)
082f6bc6 +0x0cc3:  call   082f736e <+0x146b>
082f6bcb +0x0cc8:  mov    0x10(%ebp),%eax
082f6bce +0x0ccb:  mov    %eax,(%ebx)
082f6bd0 +0x0ccd:  mov    %ebx,%eax
082f6bd2 +0x0ccf:  add    $0x24,%esp
082f6bd5 +0x0cd2:  pop    %ebx
082f6bd6 +0x0cd3:  pop    %ebp
082f6bd7 +0x0cd4:  ret    $0x4
082f6bda +0x0cd7:  push   %ebp
082f6bdb +0x0cd8:  mov    %esp,%ebp
082f6bdd +0x0cda:  mov    0x8(%ebp),%eax
082f6be0 +0x0cdd:  pop    %ebp
082f6be1 +0x0cde:  ret
082f6be2 +0x0cdf:  push   %ebp
082f6be3 +0x0ce0:  mov    %esp,%ebp
082f6be5 +0x0ce2:  sub    $0x18,%esp
082f6be8 +0x0ce5:  mov    0x8(%ebp),%eax
082f6beb +0x0ce8:  mov    %eax,(%esp)
082f6bee +0x0ceb:  call   082f7384 <+0x1481>
082f6bf3 +0x0cf0:  mov    0x8(%ebp),%eax
082f6bf6 +0x0cf3:  movl   $0x0,0x4(%eax)
082f6bfd +0x0cfa:  mov    0x8(%ebp),%eax
082f6c00 +0x0cfd:  movl   $0x0,0x8(%eax)
082f6c07 +0x0d04:  mov    0x8(%ebp),%eax
082f6c0a +0x0d07:  movl   $0x0,0xc(%eax)
082f6c11 +0x0d0e:  mov    0x8(%ebp),%eax
082f6c14 +0x0d11:  movl   $0x0,0x10(%eax)
082f6c1b +0x0d18:  mov    0x8(%ebp),%eax
082f6c1e +0x0d1b:  movl   $0x0,0x14(%eax)
082f6c25 +0x0d22:  mov    0x8(%ebp),%eax
082f6c28 +0x0d25:  mov    %eax,(%esp)
082f6c2b +0x0d28:  call   082f7398 <+0x1495>
082f6c30 +0x0d2d:  leave
082f6c31 +0x0d2e:  ret
082f6c32 +0x0d2f:  push   %ebp
082f6c33 +0x0d30:  mov    %esp,%ebp
082f6c35 +0x0d32:  mov    0x8(%ebp),%eax
082f6c38 +0x0d35:  add    $0x4,%eax
082f6c3b +0x0d38:  pop    %ebp
082f6c3c +0x0d39:  ret
082f6c3d +0x0d3a:  nop
082f6c3e +0x0d3b:  push   %ebp
082f6c3f +0x0d3c:  mov    %esp,%ebp
082f6c41 +0x0d3e:  push   %ebx
082f6c42 +0x0d3f:  sub    $0x14,%esp
082f6c45 +0x0d42:  mov    0x8(%ebp),%ebx
082f6c48 +0x0d45:  jmp    082f6c96 <+0xd93>
082f6c4a +0x0d47:  mov    0x10(%ebp),%eax
082f6c4d +0x0d4a:  mov    %eax,(%esp)
082f6c50 +0x0d4d:  call   082f70f2 <+0x11ef>
082f6c55 +0x0d52:  mov    0xc(%ebp),%edx
082f6c58 +0x0d55:  mov    0x18(%ebp),%ecx
082f6c5b +0x0d58:  mov    %ecx,0x8(%esp)
082f6c5f +0x0d5c:  mov    %eax,0x4(%esp)
082f6c63 +0x0d60:  mov    %edx,(%esp)
082f6c66 +0x0d63:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082f6c6b +0x0d68:  xor    $0x1,%eax
082f6c6e +0x0d6b:  test   %al,%al
082f6c70 +0x0d6d:  je     082f6c88 <+0xd85>
082f6c72 +0x0d6f:  mov    0x10(%ebp),%eax
082f6c75 +0x0d72:  mov    %eax,0x14(%ebp)
082f6c78 +0x0d75:  mov    0x10(%ebp),%eax
082f6c7b +0x0d78:  mov    %eax,(%esp)
082f6c7e +0x0d7b:  call   082c43be <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x162b9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x162b9
082f6c83 +0x0d80:  mov    %eax,0x10(%ebp)
082f6c86 +0x0d83:  jmp    082f6c96 <+0xd93>
082f6c88 +0x0d85:  mov    0x10(%ebp),%eax
082f6c8b +0x0d88:  mov    %eax,(%esp)
082f6c8e +0x0d8b:  call   082c43b3 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x162ae>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x162ae
082f6c93 +0x0d90:  mov    %eax,0x10(%ebp)
082f6c96 +0x0d93:  cmpl   $0x0,0x10(%ebp)
082f6c9a +0x0d97:  setne  %al
082f6c9d +0x0d9a:  test   %al,%al
082f6c9f +0x0d9c:  jne    082f6c4a <+0xd47>
082f6ca1 +0x0d9e:  mov    0x14(%ebp),%eax
082f6ca4 +0x0da1:  mov    %eax,0x4(%esp)
082f6ca8 +0x0da5:  mov    %ebx,(%esp)
082f6cab +0x0da8:  call   082f6cf0 <+0xded>
082f6cb0 +0x0dad:  mov    %ebx,%eax
082f6cb2 +0x0daf:  add    $0x14,%esp
082f6cb5 +0x0db2:  pop    %ebx
082f6cb6 +0x0db3:  pop    %ebp
082f6cb7 +0x0db4:  ret    $0x4
082f6cba +0x0db7:  push   %ebp
082f6cbb +0x0db8:  mov    %esp,%ebp
082f6cbd +0x0dba:  sub    $0x28,%esp
082f6cc0 +0x0dbd:  mov    0x8(%ebp),%eax
082f6cc3 +0x0dc0:  mov    %eax,(%esp)
082f6cc6 +0x0dc3:  call   082f73c9 <+0x14c6>
082f6ccb +0x0dc8:  mov    %eax,0x4(%esp)
082f6ccf +0x0dcc:  lea    -0x9(%ebp),%eax
082f6cd2 +0x0dcf:  mov    %eax,(%esp)
082f6cd5 +0x0dd2:  call   082f70ea <+0x11e7>
082f6cda +0x0dd7:  leave
082f6cdb +0x0dd8:  ret
082f6cdc +0x0dd9:  push   %ebp
082f6cdd +0x0dda:  mov    %esp,%ebp
082f6cdf +0x0ddc:  mov    0x8(%ebp),%eax
082f6ce2 +0x0ddf:  mov    (%eax),%edx
082f6ce4 +0x0de1:  mov    0xc(%ebp),%eax
082f6ce7 +0x0de4:  mov    (%eax),%eax
082f6ce9 +0x0de6:  cmp    %eax,%edx
082f6ceb +0x0de8:  sete   %al
082f6cee +0x0deb:  pop    %ebp
082f6cef +0x0dec:  ret
082f6cf0 +0x0ded:  push   %ebp
082f6cf1 +0x0dee:  mov    %esp,%ebp
082f6cf3 +0x0df0:  mov    0xc(%ebp),%edx
082f6cf6 +0x0df3:  mov    0x8(%ebp),%eax
082f6cf9 +0x0df6:  mov    %edx,(%eax)
082f6cfb +0x0df8:  pop    %ebp
082f6cfc +0x0df9:  ret
082f6cfd +0x0dfa:  nop
082f6cfe +0x0dfb:  push   %ebp
082f6cff +0x0dfc:  mov    %esp,%ebp
082f6d01 +0x0dfe:  mov    0xc(%ebp),%eax
082f6d04 +0x0e01:  mov    (%eax),%edx
082f6d06 +0x0e03:  mov    0x8(%ebp),%eax
082f6d09 +0x0e06:  mov    %edx,(%eax)
082f6d0b +0x0e08:  pop    %ebp
082f6d0c +0x0e09:  ret
082f6d0d +0x0e0a:  push   %ebp
082f6d0e +0x0e0b:  mov    %esp,%ebp
082f6d10 +0x0e0d:  mov    0x8(%ebp),%eax
082f6d13 +0x0e10:  pop    %ebp
082f6d14 +0x0e11:  ret
082f6d15 +0x0e12:  nop
082f6d16 +0x0e13:  push   %ebp
082f6d17 +0x0e14:  mov    %esp,%ebp
082f6d19 +0x0e16:  push   %edi
082f6d1a +0x0e17:  push   %esi
082f6d1b +0x0e18:  push   %ebx
082f6d1c +0x0e19:  sub    $0x2c,%esp
082f6d1f +0x0e1c:  mov    0x10(%ebp),%eax
082f6d22 +0x0e1f:  mov    %eax,(%esp)
082f6d25 +0x0e22:  call   082f73d4 <+0x14d1>
082f6d2a +0x0e27:  mov    %eax,%edi
082f6d2c +0x0e29:  mov    0xc(%ebp),%esi
082f6d2f +0x0e2c:  mov    %esi,0x4(%esp)
082f6d33 +0x0e30:  movl   $0x8,(%esp)
082f6d3a +0x0e37:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f6d3f +0x0e3c:  mov    %eax,%ebx
082f6d41 +0x0e3e:  mov    %ebx,%eax
082f6d43 +0x0e40:  test   %eax,%eax
082f6d45 +0x0e42:  je     082f6d75 <+0xe72>
082f6d47 +0x0e44:  mov    %ebx,%eax
082f6d49 +0x0e46:  mov    %edi,0x4(%esp)
082f6d4d +0x0e4a:  mov    %eax,(%esp)
082f6d50 +0x0e4d:  call   082f73dc <+0x14d9>
082f6d55 +0x0e52:  jmp    082f6d75 <+0xe72>
082f6d57 +0x0e54:  mov    %edx,%edi
082f6d59 +0x0e56:  mov    %eax,-0x1c(%ebp)
082f6d5c +0x0e59:  mov    %esi,0x4(%esp)
082f6d60 +0x0e5d:  mov    %ebx,(%esp)
082f6d63 +0x0e60:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
082f6d68 +0x0e65:  mov    -0x1c(%ebp),%eax
082f6d6b +0x0e68:  mov    %edi,%edx
082f6d6d +0x0e6a:  mov    %eax,(%esp)
082f6d70 +0x0e6d:  call   08ae3750 <_Unwind_Resume>
082f6d75 +0x0e72:  add    $0x2c,%esp
082f6d78 +0x0e75:  pop    %ebx
082f6d79 +0x0e76:  pop    %esi
082f6d7a +0x0e77:  pop    %edi
082f6d7b +0x0e78:  pop    %ebp
082f6d7c +0x0e79:  ret
082f6d7d +0x0e7a:  nop
082f6d7e +0x0e7b:  push   %ebp
082f6d7f +0x0e7c:  mov    %esp,%ebp
082f6d81 +0x0e7e:  mov    0x8(%ebp),%eax
082f6d84 +0x0e81:  pop    %ebp
082f6d85 +0x0e82:  ret
082f6d86 +0x0e83:  push   %ebp
082f6d87 +0x0e84:  mov    %esp,%ebp
082f6d89 +0x0e86:  push   %ebx
082f6d8a +0x0e87:  sub    $0x14,%esp
082f6d8d +0x0e8a:  mov    0xc(%ebp),%eax
082f6d90 +0x0e8d:  mov    %eax,(%esp)
082f6d93 +0x0e90:  call   082f740d <+0x150a>
082f6d98 +0x0e95:  mov    %eax,%ebx
082f6d9a +0x0e97:  mov    0x8(%ebp),%eax
082f6d9d +0x0e9a:  mov    %eax,(%esp)
082f6da0 +0x0e9d:  call   082f740d <+0x150a>
082f6da5 +0x0ea2:  mov    0x10(%ebp),%edx
082f6da8 +0x0ea5:  mov    %edx,0x8(%esp)
082f6dac +0x0ea9:  mov    %ebx,0x4(%esp)
082f6db0 +0x0ead:  mov    %eax,(%esp)
082f6db3 +0x0eb0:  call   082f7415 <+0x1512>
082f6db8 +0x0eb5:  add    $0x14,%esp
082f6dbb +0x0eb8:  pop    %ebx
082f6dbc +0x0eb9:  pop    %ebp
082f6dbd +0x0eba:  ret
082f6dbe +0x0ebb:  push   %ebp
082f6dbf +0x0ebc:  mov    %esp,%ebp
082f6dc1 +0x0ebe:  mov    0x8(%ebp),%eax
082f6dc4 +0x0ec1:  pop    %ebp
082f6dc5 +0x0ec2:  ret
082f6dc6 +0x0ec3:  push   %ebp
082f6dc7 +0x0ec4:  mov    %esp,%ebp
082f6dc9 +0x0ec6:  mov    0x8(%ebp),%eax
082f6dcc +0x0ec9:  mov    (%eax),%eax
082f6dce +0x0ecb:  pop    %ebp
082f6dcf +0x0ecc:  ret
082f6dd0 +0x0ecd:  push   %ebp
082f6dd1 +0x0ece:  mov    %esp,%ebp
082f6dd3 +0x0ed0:  sub    $0x18,%esp
082f6dd6 +0x0ed3:  mov    0xc(%ebp),%eax
082f6dd9 +0x0ed6:  mov    %eax,(%esp)
082f6ddc +0x0ed9:  call   0807f2d7 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3a7>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a7
082f6de1 +0x0ede:  movzbl (%eax),%edx
082f6de4 +0x0ee1:  mov    0x8(%ebp),%eax
082f6de7 +0x0ee4:  mov    %dl,(%eax)
082f6de9 +0x0ee6:  mov    0xc(%ebp),%eax
082f6dec +0x0ee9:  add    $0x4,%eax
082f6def +0x0eec:  mov    %eax,(%esp)
082f6df2 +0x0eef:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
082f6df7 +0x0ef4:  mov    (%eax),%edx
082f6df9 +0x0ef6:  mov    0x8(%ebp),%eax
082f6dfc +0x0ef9:  mov    %edx,0x4(%eax)
082f6dff +0x0efc:  mov    0x8(%ebp),%eax
082f6e02 +0x0eff:  leave
082f6e03 +0x0f00:  ret
082f6e04 +0x0f01:  push   %ebp
082f6e05 +0x0f02:  mov    %esp,%ebp
082f6e07 +0x0f04:  push   %ebx
082f6e08 +0x0f05:  sub    $0x24,%esp
082f6e0b +0x0f08:  mov    0x8(%ebp),%eax
082f6e0e +0x0f0b:  mov    %eax,(%esp)
082f6e11 +0x0f0e:  call   082f7476 <+0x1573>
082f6e16 +0x0f13:  mov    %eax,%ebx
082f6e18 +0x0f15:  mov    0x8(%ebp),%eax
082f6e1b +0x0f18:  mov    %eax,(%esp)
082f6e1e +0x0f1b:  call   082f745a <+0x1557>
082f6e23 +0x0f20:  mov    %ebx,%edx
082f6e25 +0x0f22:  sub    %eax,%edx
082f6e27 +0x0f24:  mov    0xc(%ebp),%eax
082f6e2a +0x0f27:  cmp    %eax,%edx
082f6e2c +0x0f29:  setb   %al
082f6e2f +0x0f2c:  test   %al,%al
082f6e31 +0x0f2e:  je     082f6e3e <+0xf3b>
082f6e33 +0x0f30:  mov    0x10(%ebp),%eax
082f6e36 +0x0f33:  mov    %eax,(%esp)
082f6e39 +0x0f36:  call   086d9c40 <_ZSt20__throw_length_errorPKc>  ; std::__throw_length_error(char const*)
082f6e3e +0x0f3b:  mov    0x8(%ebp),%eax
082f6e41 +0x0f3e:  mov    %eax,(%esp)
082f6e44 +0x0f41:  call   082f745a <+0x1557>
082f6e49 +0x0f46:  mov    %eax,%ebx
082f6e4b +0x0f48:  mov    0x8(%ebp),%eax
082f6e4e +0x0f4b:  mov    %eax,(%esp)
082f6e51 +0x0f4e:  call   082f745a <+0x1557>
082f6e56 +0x0f53:  mov    %eax,-0x10(%ebp)
082f6e59 +0x0f56:  lea    0xc(%ebp),%eax
082f6e5c +0x0f59:  mov    %eax,0x4(%esp)
082f6e60 +0x0f5d:  lea    -0x10(%ebp),%eax
082f6e63 +0x0f60:  mov    %eax,(%esp)
082f6e66 +0x0f63:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
082f6e6b +0x0f68:  mov    (%eax),%eax
082f6e6d +0x0f6a:  lea    (%ebx,%eax,1),%eax
082f6e70 +0x0f6d:  mov    %eax,-0xc(%ebp)
082f6e73 +0x0f70:  mov    0x8(%ebp),%eax
082f6e76 +0x0f73:  mov    %eax,(%esp)
082f6e79 +0x0f76:  call   082f745a <+0x1557>
082f6e7e +0x0f7b:  cmp    -0xc(%ebp),%eax
082f6e81 +0x0f7e:  ja     082f6e93 <+0xf90>
082f6e83 +0x0f80:  mov    0x8(%ebp),%eax
082f6e86 +0x0f83:  mov    %eax,(%esp)
082f6e89 +0x0f86:  call   082f7476 <+0x1573>
082f6e8e +0x0f8b:  cmp    -0xc(%ebp),%eax
082f6e91 +0x0f8e:  jae    082f6ea0 <+0xf9d>
082f6e93 +0x0f90:  mov    0x8(%ebp),%eax
082f6e96 +0x0f93:  mov    %eax,(%esp)
082f6e99 +0x0f96:  call   082f7476 <+0x1573>
082f6e9e +0x0f9b:  jmp    082f6ea3 <+0xfa0>
082f6ea0 +0x0f9d:  mov    -0xc(%ebp),%eax
082f6ea3 +0x0fa0:  add    $0x24,%esp
082f6ea6 +0x0fa3:  pop    %ebx
082f6ea7 +0x0fa4:  pop    %ebp
082f6ea8 +0x0fa5:  ret
082f6ea9 +0x0fa6:  nop
082f6eaa +0x0fa7:  push   %ebp
082f6eab +0x0fa8:  mov    %esp,%ebp
082f6ead +0x0faa:  push   %ebx
082f6eae +0x0fab:  sub    $0x14,%esp
082f6eb1 +0x0fae:  mov    0x8(%ebp),%ebx
082f6eb4 +0x0fb1:  mov    0xc(%ebp),%eax
082f6eb7 +0x0fb4:  mov    %eax,0x4(%esp)
082f6ebb +0x0fb8:  mov    %ebx,(%esp)
082f6ebe +0x0fbb:  call   082f6cfe <+0xdfb>
082f6ec3 +0x0fc0:  mov    %ebx,%eax
082f6ec5 +0x0fc2:  add    $0x14,%esp
082f6ec8 +0x0fc5:  pop    %ebx
082f6ec9 +0x0fc6:  pop    %ebp
082f6eca +0x0fc7:  ret    $0x4
082f6ecd +0x0fca:  push   %ebp
082f6ece +0x0fcb:  mov    %esp,%ebp
082f6ed0 +0x0fcd:  push   %ebx
082f6ed1 +0x0fce:  sub    $0x14,%esp
082f6ed4 +0x0fd1:  mov    0x8(%ebp),%eax
082f6ed7 +0x0fd4:  mov    %eax,(%esp)
082f6eda +0x0fd7:  call   082f6d7e <+0xe7b>
082f6edf +0x0fdc:  mov    (%eax),%eax
082f6ee1 +0x0fde:  mov    %eax,%ebx
082f6ee3 +0x0fe0:  mov    0xc(%ebp),%eax
082f6ee6 +0x0fe3:  mov    %eax,(%esp)
082f6ee9 +0x0fe6:  call   082f6d7e <+0xe7b>
082f6eee +0x0feb:  mov    (%eax),%eax
082f6ef0 +0x0fed:  mov    %ebx,%edx
082f6ef2 +0x0fef:  sub    %eax,%edx
082f6ef4 +0x0ff1:  mov    %edx,%eax
082f6ef6 +0x0ff3:  sar    $0x3,%eax
082f6ef9 +0x0ff6:  add    $0x14,%esp
082f6efc +0x0ff9:  pop    %ebx
082f6efd +0x0ffa:  pop    %ebp
082f6efe +0x0ffb:  ret
082f6eff +0x0ffc:  nop
082f6f00 +0x0ffd:  push   %ebp
082f6f01 +0x0ffe:  mov    %esp,%ebp
082f6f03 +0x1000:  sub    $0x18,%esp
082f6f06 +0x1003:  cmpl   $0x0,0xc(%ebp)
082f6f0a +0x1007:  je     082f6f28 <+0x1025>
082f6f0c +0x1009:  mov    0x8(%ebp),%eax
082f6f0f +0x100c:  movl   $0x0,0x8(%esp)
082f6f17 +0x1014:  mov    0xc(%ebp),%edx
082f6f1a +0x1017:  mov    %edx,0x4(%esp)
082f6f1e +0x101b:  mov    %eax,(%esp)
082f6f21 +0x101e:  call   082f7492 <+0x158f>
082f6f26 +0x1023:  jmp    082f6f2d <+0x102a>
082f6f28 +0x1025:  mov    $0x0,%eax
082f6f2d +0x102a:  leave
082f6f2e +0x102b:  ret
082f6f2f +0x102c:  push   %ebp
082f6f30 +0x102d:  mov    %esp,%ebp
082f6f32 +0x102f:  sub    $0x28,%esp
082f6f35 +0x1032:  lea    -0x10(%ebp),%eax
082f6f38 +0x1035:  lea    0xc(%ebp),%edx
082f6f3b +0x1038:  mov    %edx,0x4(%esp)
082f6f3f +0x103c:  mov    %eax,(%esp)
082f6f42 +0x103f:  call   082f74ca <+0x15c7>
082f6f47 +0x1044:  sub    $0x4,%esp
082f6f4a +0x1047:  lea    -0xc(%ebp),%eax
082f6f4d +0x104a:  lea    0x8(%ebp),%edx
082f6f50 +0x104d:  mov    %edx,0x4(%esp)
082f6f54 +0x1051:  mov    %eax,(%esp)
082f6f57 +0x1054:  call   082f74ca <+0x15c7>
082f6f5c +0x1059:  sub    $0x4,%esp
082f6f5f +0x105c:  mov    0x14(%ebp),%eax
082f6f62 +0x105f:  mov    %eax,0xc(%esp)
082f6f66 +0x1063:  mov    0x10(%ebp),%eax
082f6f69 +0x1066:  mov    %eax,0x8(%esp)
082f6f6d +0x106a:  mov    -0x10(%ebp),%eax
082f6f70 +0x106d:  mov    %eax,0x4(%esp)
082f6f74 +0x1071:  mov    -0xc(%ebp),%eax
082f6f77 +0x1074:  mov    %eax,(%esp)
082f6f7a +0x1077:  call   082f74ef <+0x15ec>
082f6f7f +0x107c:  leave
082f6f80 +0x107d:  ret
082f6f81 +0x107e:  nop
082f6f82 +0x107f:  push   %ebp
082f6f83 +0x1080:  mov    %esp,%ebp
082f6f85 +0x1082:  pop    %ebp
082f6f86 +0x1083:  ret
082f6f87 +0x1084:  nop
082f6f88 +0x1085:  push   %ebp
082f6f89 +0x1086:  mov    %esp,%ebp
082f6f8b +0x1088:  sub    $0x18,%esp
082f6f8e +0x108b:  mov    0xc(%ebp),%eax
082f6f91 +0x108e:  mov    %eax,(%esp)
082f6f94 +0x1091:  call   082f6f82 <+0x107f>
082f6f99 +0x1096:  leave
082f6f9a +0x1097:  ret
082f6f9b +0x1098:  nop
082f6f9c +0x1099:  push   %ebp
082f6f9d +0x109a:  mov    %esp,%ebp
082f6f9f +0x109c:  sub    $0x18,%esp
082f6fa2 +0x109f:  mov    0x8(%ebp),%eax
082f6fa5 +0x10a2:  mov    %eax,(%esp)
082f6fa8 +0x10a5:  call   082f7510 <+0x160d>
082f6fad +0x10aa:  mov    0x8(%ebp),%eax
082f6fb0 +0x10ad:  movl   $0x0,(%eax)
082f6fb6 +0x10b3:  mov    0x8(%ebp),%eax
082f6fb9 +0x10b6:  movl   $0x0,0x4(%eax)
082f6fc0 +0x10bd:  mov    0x8(%ebp),%eax
082f6fc3 +0x10c0:  movl   $0x0,0x8(%eax)
082f6fca +0x10c7:  leave
082f6fcb +0x10c8:  ret
082f6fcc +0x10c9:  push   %ebp
082f6fcd +0x10ca:  mov    %esp,%ebp
082f6fcf +0x10cc:  push   %esi
082f6fd0 +0x10cd:  push   %ebx
082f6fd1 +0x10ce:  sub    $0x20,%esp
082f6fd4 +0x10d1:  mov    0xc(%ebp),%eax
082f6fd7 +0x10d4:  mov    %eax,(%esp)
082f6fda +0x10d7:  call   082f7524 <+0x1621>
082f6fdf +0x10dc:  mov    %eax,%ebx
082f6fe1 +0x10de:  mov    0xc(%ebp),%eax
082f6fe4 +0x10e1:  mov    %eax,(%esp)
082f6fe7 +0x10e4:  call   082f745a <+0x1557>
082f6fec +0x10e9:  mov    0x8(%ebp),%edx
082f6fef +0x10ec:  mov    %ebx,0x8(%esp)
082f6ff3 +0x10f0:  mov    %eax,0x4(%esp)
082f6ff7 +0x10f4:  mov    %edx,(%esp)
082f6ffa +0x10f7:  call   082f752c <+0x1629>
082f6fff +0x10fc:  mov    0x8(%ebp),%eax
082f7002 +0x10ff:  mov    %eax,(%esp)
082f7005 +0x1102:  call   082df4f6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x93ed>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x93ed
082f700a +0x1107:  mov    %eax,%ebx
082f700c +0x1109:  mov    0x8(%ebp),%eax
082f700f +0x110c:  mov    (%eax),%esi
082f7011 +0x110e:  lea    -0x10(%ebp),%eax
082f7014 +0x1111:  mov    0xc(%ebp),%edx
082f7017 +0x1114:  mov    %edx,0x4(%esp)
082f701b +0x1118:  mov    %eax,(%esp)
082f701e +0x111b:  call   082f61f8 <+0x2f5>
082f7023 +0x1120:  sub    $0x4,%esp
082f7026 +0x1123:  lea    -0xc(%ebp),%eax
082f7029 +0x1126:  mov    0xc(%ebp),%edx
082f702c +0x1129:  mov    %edx,0x4(%esp)
082f7030 +0x112d:  mov    %eax,(%esp)
082f7033 +0x1130:  call   082f61cc <+0x2c9>
082f7038 +0x1135:  sub    $0x4,%esp
082f703b +0x1138:  mov    %ebx,0xc(%esp)
082f703f +0x113c:  mov    %esi,0x8(%esp)
082f7043 +0x1140:  mov    -0x10(%ebp),%eax
082f7046 +0x1143:  mov    %eax,0x4(%esp)
082f704a +0x1147:  mov    -0xc(%ebp),%eax
082f704d +0x114a:  mov    %eax,(%esp)
082f7050 +0x114d:  call   082f759e <+0x169b>
082f7055 +0x1152:  mov    0x8(%ebp),%edx
082f7058 +0x1155:  mov    %eax,0x4(%edx)
082f705b +0x1158:  lea    -0x8(%ebp),%esp
082f705e +0x115b:  add    $0x0,%esp
082f7061 +0x115e:  pop    %ebx
082f7062 +0x115f:  pop    %esi
082f7063 +0x1160:  pop    %ebp
082f7064 +0x1161:  ret
082f7065 +0x1162:  mov    %edx,%ebx
082f7067 +0x1164:  mov    %eax,%esi
082f7069 +0x1166:  mov    0x8(%ebp),%eax
082f706c +0x1169:  mov    %eax,(%esp)
082f706f +0x116c:  call   082df48e <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x9385>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x9385
082f7074 +0x1171:  mov    %esi,%eax
082f7076 +0x1173:  mov    %ebx,%edx
082f7078 +0x1175:  mov    %eax,(%esp)
082f707b +0x1178:  call   08ae3750 <_Unwind_Resume>
082f7080 +0x117d:  push   %ebp
082f7081 +0x117e:  mov    %esp,%ebp
082f7083 +0x1180:  mov    0x8(%ebp),%eax
082f7086 +0x1183:  pop    %ebp
082f7087 +0x1184:  ret
082f7088 +0x1185:  push   %ebp
082f7089 +0x1186:  mov    %esp,%ebp
082f708b +0x1188:  sub    $0x18,%esp
082f708e +0x118b:  mov    0xc(%ebp),%eax
082f7091 +0x118e:  mov    %eax,(%esp)
082f7094 +0x1191:  call   082df4f6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x93ed>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x93ed
082f7099 +0x1196:  mov    0x8(%ebp),%edx
082f709c +0x1199:  mov    %eax,0x4(%esp)
082f70a0 +0x119d:  mov    %edx,(%esp)
082f70a3 +0x11a0:  call   082f75c0 <+0x16bd>
082f70a8 +0x11a5:  mov    0xc(%ebp),%eax
082f70ab +0x11a8:  mov    (%eax),%edx
082f70ad +0x11aa:  mov    0x8(%ebp),%eax
082f70b0 +0x11ad:  mov    %edx,(%eax)
082f70b2 +0x11af:  mov    0xc(%ebp),%eax
082f70b5 +0x11b2:  mov    0x4(%eax),%edx
082f70b8 +0x11b5:  mov    0x8(%ebp),%eax
082f70bb +0x11b8:  mov    %edx,0x4(%eax)
082f70be +0x11bb:  mov    0xc(%ebp),%eax
082f70c1 +0x11be:  mov    0x8(%eax),%edx
082f70c4 +0x11c1:  mov    0x8(%ebp),%eax
082f70c7 +0x11c4:  mov    %edx,0x8(%eax)
082f70ca +0x11c7:  mov    0xc(%ebp),%eax
082f70cd +0x11ca:  movl   $0x0,(%eax)
082f70d3 +0x11d0:  mov    0xc(%ebp),%eax
082f70d6 +0x11d3:  movl   $0x0,0x4(%eax)
082f70dd +0x11da:  mov    0xc(%ebp),%eax
082f70e0 +0x11dd:  movl   $0x0,0x8(%eax)
082f70e7 +0x11e4:  leave
082f70e8 +0x11e5:  ret
082f70e9 +0x11e6:  nop
082f70ea +0x11e7:  push   %ebp
082f70eb +0x11e8:  mov    %esp,%ebp
082f70ed +0x11ea:  mov    0xc(%ebp),%eax
082f70f0 +0x11ed:  pop    %ebp
082f70f1 +0x11ee:  ret
082f70f2 +0x11ef:  push   %ebp
082f70f3 +0x11f0:  mov    %esp,%ebp
082f70f5 +0x11f2:  sub    $0x28,%esp
082f70f8 +0x11f5:  mov    0x8(%ebp),%eax
082f70fb +0x11f8:  mov    %eax,(%esp)
082f70fe +0x11fb:  call   082f75f7 <+0x16f4>
082f7103 +0x1200:  mov    %eax,0x4(%esp)
082f7107 +0x1204:  lea    -0x9(%ebp),%eax
082f710a +0x1207:  mov    %eax,(%esp)
082f710d +0x120a:  call   082f70ea <+0x11e7>
082f7112 +0x120f:  leave
082f7113 +0x1210:  ret
082f7114 +0x1211:  push   %ebp
082f7115 +0x1212:  mov    %esp,%ebp
082f7117 +0x1214:  push   %ebx
082f7118 +0x1215:  sub    $0x14,%esp
082f711b +0x1218:  mov    0x8(%ebp),%ebx
082f711e +0x121b:  mov    0xc(%ebp),%eax
082f7121 +0x121e:  mov    0xc(%eax),%eax
082f7124 +0x1221:  mov    %eax,0x4(%esp)
082f7128 +0x1225:  mov    %ebx,(%esp)
082f712b +0x1228:  call   082f6cf0 <+0xded>
082f7130 +0x122d:  mov    %ebx,%eax
082f7132 +0x122f:  add    $0x14,%esp
082f7135 +0x1232:  pop    %ebx
082f7136 +0x1233:  pop    %ebp
082f7137 +0x1234:  ret    $0x4
082f713a +0x1237:  push   %ebp
082f713b +0x1238:  mov    %esp,%ebp
082f713d +0x123a:  push   %esi
082f713e +0x123b:  push   %ebx
082f713f +0x123c:  sub    $0x20,%esp
082f7142 +0x123f:  mov    0x8(%ebp),%esi
082f7145 +0x1242:  cmpl   $0x0,0x10(%ebp)
082f7149 +0x1246:  jne    082f7191 <+0x128e>
082f714b +0x1248:  mov    0xc(%ebp),%eax
082f714e +0x124b:  mov    %eax,(%esp)
082f7151 +0x124e:  call   082f6c32 <+0xd2f>
082f7156 +0x1253:  cmp    0x14(%ebp),%eax
082f7159 +0x1256:  je     082f7191 <+0x128e>
082f715b +0x1258:  mov    0x14(%ebp),%eax
082f715e +0x125b:  mov    %eax,(%esp)
082f7161 +0x125e:  call   082f6cba <+0xdb7>
082f7166 +0x1263:  mov    %eax,%ebx
082f7168 +0x1265:  mov    0x18(%ebp),%eax
082f716b +0x1268:  mov    %eax,0x4(%esp)
082f716f +0x126c:  lea    -0xe(%ebp),%eax
082f7172 +0x126f:  mov    %eax,(%esp)
082f7175 +0x1272:  call   082f70ea <+0x11e7>
082f717a +0x1277:  mov    0xc(%ebp),%edx
082f717d +0x127a:  mov    %ebx,0x8(%esp)
082f7181 +0x127e:  mov    %eax,0x4(%esp)
082f7185 +0x1282:  mov    %edx,(%esp)
082f7188 +0x1285:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082f718d +0x128a:  test   %al,%al
082f718f +0x128c:  je     082f7198 <+0x1295>
082f7191 +0x128e:  mov    $0x1,%eax
082f7196 +0x1293:  jmp    082f719d <+0x129a>
082f7198 +0x1295:  mov    $0x0,%eax
082f719d +0x129a:  mov    %al,-0xd(%ebp)
082f71a0 +0x129d:  mov    0x18(%ebp),%eax
082f71a3 +0x12a0:  mov    %eax,0x4(%esp)
082f71a7 +0x12a4:  mov    0xc(%ebp),%eax
082f71aa +0x12a7:  mov    %eax,(%esp)
082f71ad +0x12aa:  call   082f7602 <+0x16ff>
082f71b2 +0x12af:  mov    %eax,-0xc(%ebp)
082f71b5 +0x12b2:  mov    0xc(%ebp),%eax
082f71b8 +0x12b5:  lea    0x4(%eax),%ecx
082f71bb +0x12b8:  mov    -0xc(%ebp),%edx
082f71be +0x12bb:  movzbl -0xd(%ebp),%eax
082f71c2 +0x12bf:  mov    %ecx,0xc(%esp)
082f71c6 +0x12c3:  mov    0x14(%ebp),%ecx
082f71c9 +0x12c6:  mov    %ecx,0x8(%esp)
082f71cd +0x12ca:  mov    %edx,0x4(%esp)
082f71d1 +0x12ce:  mov    %eax,(%esp)
082f71d4 +0x12d1:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
082f71d9 +0x12d6:  mov    0xc(%ebp),%eax
082f71dc +0x12d9:  mov    0x14(%eax),%eax
082f71df +0x12dc:  lea    0x1(%eax),%edx
082f71e2 +0x12df:  mov    0xc(%ebp),%eax
082f71e5 +0x12e2:  mov    %edx,0x14(%eax)
082f71e8 +0x12e5:  mov    -0xc(%ebp),%eax
082f71eb +0x12e8:  mov    %eax,0x4(%esp)
082f71ef +0x12ec:  mov    %esi,(%esp)
082f71f2 +0x12ef:  call   082f6cf0 <+0xded>
082f71f7 +0x12f4:  mov    %esi,%eax
082f71f9 +0x12f6:  add    $0x20,%esp
082f71fc +0x12f9:  pop    %ebx
082f71fd +0x12fa:  pop    %esi
082f71fe +0x12fb:  pop    %ebp
082f71ff +0x12fc:  ret    $0x4
082f7202 +0x12ff:  push   %ebp
082f7203 +0x1300:  mov    %esp,%ebp
082f7205 +0x1302:  sub    $0x18,%esp
082f7208 +0x1305:  mov    0xc(%ebp),%eax
082f720b +0x1308:  mov    %eax,(%esp)
082f720e +0x130b:  call   082f7683 <+0x1780>
082f7213 +0x1310:  mov    0x8(%ebp),%edx
082f7216 +0x1313:  mov    (%eax),%eax
082f7218 +0x1315:  mov    %eax,(%edx)
082f721a +0x1317:  mov    0x10(%ebp),%eax
082f721d +0x131a:  mov    %eax,(%esp)
082f7220 +0x131d:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
082f7225 +0x1322:  movzbl (%eax),%edx
082f7228 +0x1325:  mov    0x8(%ebp),%eax
082f722b +0x1328:  mov    %dl,0x4(%eax)
082f722e +0x132b:  leave
082f722f +0x132c:  ret
082f7230 +0x132d:  push   %ebp
082f7231 +0x132e:  mov    %esp,%ebp
082f7233 +0x1330:  sub    $0x18,%esp
082f7236 +0x1333:  mov    0x8(%ebp),%eax
082f7239 +0x1336:  mov    (%eax),%eax
082f723b +0x1338:  mov    %eax,(%esp)
082f723e +0x133b:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
082f7243 +0x1340:  mov    0x8(%ebp),%edx
082f7246 +0x1343:  mov    %eax,(%edx)
082f7248 +0x1345:  mov    0x8(%ebp),%eax
082f724b +0x1348:  leave
082f724c +0x1349:  ret
082f724d +0x134a:  nop
082f724e +0x134b:  push   %ebp
082f724f +0x134c:  mov    %esp,%ebp
082f7251 +0x134e:  sub    $0x18,%esp
082f7254 +0x1351:  mov    0xc(%ebp),%eax
082f7257 +0x1354:  mov    %eax,(%esp)
082f725a +0x1357:  call   082f768b <+0x1788>
082f725f +0x135c:  mov    0x8(%ebp),%edx
082f7262 +0x135f:  mov    (%eax),%eax
082f7264 +0x1361:  mov    %eax,(%edx)
082f7266 +0x1363:  mov    0x10(%ebp),%eax
082f7269 +0x1366:  mov    %eax,(%esp)
082f726c +0x1369:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
082f7271 +0x136e:  movzbl (%eax),%edx
082f7274 +0x1371:  mov    0x8(%ebp),%eax
082f7277 +0x1374:  mov    %dl,0x4(%eax)
082f727a +0x1377:  leave
082f727b +0x1378:  ret
082f727c +0x1379:  push   %ebp
082f727d +0x137a:  mov    %esp,%ebp
082f727f +0x137c:  mov    0x8(%ebp),%eax
082f7282 +0x137f:  mov    0x8(%eax),%eax
082f7285 +0x1382:  pop    %ebp
082f7286 +0x1383:  ret
082f7287 +0x1384:  nop
082f7288 +0x1385:  push   %ebp
082f7289 +0x1386:  mov    %esp,%ebp
082f728b +0x1388:  mov    0x8(%ebp),%eax
082f728e +0x138b:  add    $0x4,%eax
082f7291 +0x138e:  pop    %ebp
082f7292 +0x138f:  ret
082f7293 +0x1390:  nop
082f7294 +0x1391:  push   %ebp
082f7295 +0x1392:  mov    %esp,%ebp
082f7297 +0x1394:  push   %ebx
082f7298 +0x1395:  sub    $0x14,%esp
082f729b +0x1398:  mov    0x8(%ebp),%ebx
082f729e +0x139b:  jmp    082f72ec <+0x13e9>
082f72a0 +0x139d:  mov    0x10(%ebp),%eax
082f72a3 +0x13a0:  mov    %eax,(%esp)
082f72a6 +0x13a3:  call   082f70f2 <+0x11ef>
082f72ab +0x13a8:  mov    0xc(%ebp),%edx
082f72ae +0x13ab:  mov    0x18(%ebp),%ecx
082f72b1 +0x13ae:  mov    %ecx,0x8(%esp)
082f72b5 +0x13b2:  mov    %eax,0x4(%esp)
082f72b9 +0x13b6:  mov    %edx,(%esp)
082f72bc +0x13b9:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
082f72c1 +0x13be:  xor    $0x1,%eax
082f72c4 +0x13c1:  test   %al,%al
082f72c6 +0x13c3:  je     082f72de <+0x13db>
082f72c8 +0x13c5:  mov    0x10(%ebp),%eax
082f72cb +0x13c8:  mov    %eax,0x14(%ebp)
082f72ce +0x13cb:  mov    0x10(%ebp),%eax
082f72d1 +0x13ce:  mov    %eax,(%esp)
082f72d4 +0x13d1:  call   082f7693 <+0x1790>
082f72d9 +0x13d6:  mov    %eax,0x10(%ebp)
082f72dc +0x13d9:  jmp    082f72ec <+0x13e9>
082f72de +0x13db:  mov    0x10(%ebp),%eax
082f72e1 +0x13de:  mov    %eax,(%esp)
082f72e4 +0x13e1:  call   082f769e <+0x179b>
082f72e9 +0x13e6:  mov    %eax,0x10(%ebp)
082f72ec +0x13e9:  cmpl   $0x0,0x10(%ebp)
082f72f0 +0x13ed:  setne  %al
082f72f3 +0x13f0:  test   %al,%al
082f72f5 +0x13f2:  jne    082f72a0 <+0x139d>
082f72f7 +0x13f4:  mov    0x14(%ebp),%eax
082f72fa +0x13f7:  mov    %eax,0x4(%esp)
082f72fe +0x13fb:  mov    %ebx,(%esp)
082f7301 +0x13fe:  call   082f7324 <+0x1421>
082f7306 +0x1403:  mov    %ebx,%eax
082f7308 +0x1405:  add    $0x14,%esp
082f730b +0x1408:  pop    %ebx
082f730c +0x1409:  pop    %ebp
082f730d +0x140a:  ret    $0x4
082f7310 +0x140d:  push   %ebp
082f7311 +0x140e:  mov    %esp,%ebp
082f7313 +0x1410:  mov    0x8(%ebp),%eax
082f7316 +0x1413:  mov    (%eax),%edx
082f7318 +0x1415:  mov    0xc(%ebp),%eax
082f731b +0x1418:  mov    (%eax),%eax
082f731d +0x141a:  cmp    %eax,%edx
082f731f +0x141c:  sete   %al
082f7322 +0x141f:  pop    %ebp
082f7323 +0x1420:  ret
082f7324 +0x1421:  push   %ebp
082f7325 +0x1422:  mov    %esp,%ebp
082f7327 +0x1424:  mov    0xc(%ebp),%edx
082f732a +0x1427:  mov    0x8(%ebp),%eax
082f732d +0x142a:  mov    %edx,(%eax)
082f732f +0x142c:  pop    %ebp
082f7330 +0x142d:  ret
082f7331 +0x142e:  push   %ebp
082f7332 +0x142f:  mov    %esp,%ebp
082f7334 +0x1431:  push   %ebx
082f7335 +0x1432:  sub    $0x14,%esp
082f7338 +0x1435:  mov    0x8(%ebp),%eax
082f733b +0x1438:  mov    %eax,(%esp)
082f733e +0x143b:  call   082f6bda <+0xcd7>
082f7343 +0x1440:  mov    (%eax),%eax
082f7345 +0x1442:  mov    %eax,%ebx
082f7347 +0x1444:  mov    0xc(%ebp),%eax
082f734a +0x1447:  mov    %eax,(%esp)
082f734d +0x144a:  call   082f6bda <+0xcd7>
082f7352 +0x144f:  mov    (%eax),%eax
082f7354 +0x1451:  mov    %ebx,%edx
082f7356 +0x1453:  sub    %eax,%edx
082f7358 +0x1455:  mov    %edx,%eax
082f735a +0x1457:  sar    $0x3,%eax
082f735d +0x145a:  add    $0x14,%esp
082f7360 +0x145d:  pop    %ebx
082f7361 +0x145e:  pop    %ebp
082f7362 +0x145f:  ret
082f7363 +0x1460:  nop
082f7364 +0x1461:  push   %ebp
082f7365 +0x1462:  mov    %esp,%ebp
082f7367 +0x1464:  mov    0x8(%ebp),%eax
082f736a +0x1467:  mov    (%eax),%eax
082f736c +0x1469:  pop    %ebp
082f736d +0x146a:  ret
082f736e +0x146b:  push   %ebp
082f736f +0x146c:  mov    %esp,%ebp
082f7371 +0x146e:  mov    0x8(%ebp),%eax
082f7374 +0x1471:  mov    (%eax),%eax
082f7376 +0x1473:  lea    0x8(%eax),%edx
082f7379 +0x1476:  mov    0x8(%ebp),%eax
082f737c +0x1479:  mov    %edx,(%eax)
082f737e +0x147b:  mov    0x8(%ebp),%eax
082f7381 +0x147e:  pop    %ebp
082f7382 +0x147f:  ret
082f7383 +0x1480:  nop
082f7384 +0x1481:  push   %ebp
082f7385 +0x1482:  mov    %esp,%ebp
082f7387 +0x1484:  sub    $0x18,%esp
082f738a +0x1487:  mov    0x8(%ebp),%eax
082f738d +0x148a:  mov    %eax,(%esp)
082f7390 +0x148d:  call   082f76aa <+0x17a7>
082f7395 +0x1492:  leave
082f7396 +0x1493:  ret
082f7397 +0x1494:  nop
082f7398 +0x1495:  push   %ebp
082f7399 +0x1496:  mov    %esp,%ebp
082f739b +0x1498:  mov    0x8(%ebp),%eax
082f739e +0x149b:  movl   $0x0,0x4(%eax)
082f73a5 +0x14a2:  mov    0x8(%ebp),%eax
082f73a8 +0x14a5:  movl   $0x0,0x8(%eax)
082f73af +0x14ac:  mov    0x8(%ebp),%eax
082f73b2 +0x14af:  lea    0x4(%eax),%edx
082f73b5 +0x14b2:  mov    0x8(%ebp),%eax
082f73b8 +0x14b5:  mov    %edx,0xc(%eax)
082f73bb +0x14b8:  mov    0x8(%ebp),%eax
082f73be +0x14bb:  lea    0x4(%eax),%edx
082f73c1 +0x14be:  mov    0x8(%ebp),%eax
082f73c4 +0x14c1:  mov    %edx,0x10(%eax)
082f73c7 +0x14c4:  pop    %ebp
082f73c8 +0x14c5:  ret
082f73c9 +0x14c6:  push   %ebp
082f73ca +0x14c7:  mov    %esp,%ebp
082f73cc +0x14c9:  mov    0x8(%ebp),%eax
082f73cf +0x14cc:  add    $0x10,%eax
082f73d2 +0x14cf:  pop    %ebp
082f73d3 +0x14d0:  ret
082f73d4 +0x14d1:  push   %ebp
082f73d5 +0x14d2:  mov    %esp,%ebp
082f73d7 +0x14d4:  mov    0x8(%ebp),%eax
082f73da +0x14d7:  pop    %ebp
082f73db +0x14d8:  ret
082f73dc +0x14d9:  push   %ebp
082f73dd +0x14da:  mov    %esp,%ebp
082f73df +0x14dc:  sub    $0x18,%esp
082f73e2 +0x14df:  mov    0xc(%ebp),%eax
082f73e5 +0x14e2:  mov    %eax,(%esp)
082f73e8 +0x14e5:  call   0807f2d7 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3a7>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a7
082f73ed +0x14ea:  movzbl (%eax),%edx
082f73f0 +0x14ed:  mov    0x8(%ebp),%eax
082f73f3 +0x14f0:  mov    %dl,(%eax)
082f73f5 +0x14f2:  mov    0xc(%ebp),%eax
082f73f8 +0x14f5:  add    $0x4,%eax
082f73fb +0x14f8:  mov    %eax,(%esp)
082f73fe +0x14fb:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
082f7403 +0x1500:  mov    (%eax),%edx
082f7405 +0x1502:  mov    0x8(%ebp),%eax
082f7408 +0x1505:  mov    %edx,0x4(%eax)
082f740b +0x1508:  leave
082f740c +0x1509:  ret
082f740d +0x150a:  push   %ebp
082f740e +0x150b:  mov    %esp,%ebp
082f7410 +0x150d:  mov    0x8(%ebp),%eax
082f7413 +0x1510:  pop    %ebp
082f7414 +0x1511:  ret
082f7415 +0x1512:  push   %ebp
082f7416 +0x1513:  mov    %esp,%ebp
082f7418 +0x1515:  push   %esi
082f7419 +0x1516:  push   %ebx
082f741a +0x1517:  sub    $0x10,%esp
082f741d +0x151a:  mov    0x10(%ebp),%eax
082f7420 +0x151d:  mov    %eax,(%esp)
082f7423 +0x1520:  call   082f76af <+0x17ac>
082f7428 +0x1525:  mov    %eax,%esi
082f742a +0x1527:  mov    0xc(%ebp),%eax
082f742d +0x152a:  mov    %eax,(%esp)
082f7430 +0x152d:  call   082f76af <+0x17ac>
082f7435 +0x1532:  mov    %eax,%ebx
082f7437 +0x1534:  mov    0x8(%ebp),%eax
082f743a +0x1537:  mov    %eax,(%esp)
082f743d +0x153a:  call   082f76af <+0x17ac>
082f7442 +0x153f:  mov    %esi,0x8(%esp)
082f7446 +0x1543:  mov    %ebx,0x4(%esp)
082f744a +0x1547:  mov    %eax,(%esp)
082f744d +0x154a:  call   082f76b7 <+0x17b4>
082f7452 +0x154f:  add    $0x10,%esp
082f7455 +0x1552:  pop    %ebx
082f7456 +0x1553:  pop    %esi
082f7457 +0x1554:  pop    %ebp
082f7458 +0x1555:  ret
082f7459 +0x1556:  nop
082f745a +0x1557:  push   %ebp
082f745b +0x1558:  mov    %esp,%ebp
082f745d +0x155a:  mov    0x8(%ebp),%eax
082f7460 +0x155d:  mov    0x4(%eax),%eax
082f7463 +0x1560:  mov    %eax,%edx
082f7465 +0x1562:  mov    0x8(%ebp),%eax
082f7468 +0x1565:  mov    (%eax),%eax
082f746a +0x1567:  mov    %edx,%ecx
082f746c +0x1569:  sub    %eax,%ecx
082f746e +0x156b:  mov    %ecx,%eax
082f7470 +0x156d:  sar    $0x3,%eax
082f7473 +0x1570:  pop    %ebp
082f7474 +0x1571:  ret
082f7475 +0x1572:  nop
082f7476 +0x1573:  push   %ebp
082f7477 +0x1574:  mov    %esp,%ebp
082f7479 +0x1576:  sub    $0x18,%esp
082f747c +0x1579:  mov    0x8(%ebp),%eax
082f747f +0x157c:  mov    %eax,(%esp)
082f7482 +0x157f:  call   082f7524 <+0x1621>
082f7487 +0x1584:  mov    %eax,(%esp)
082f748a +0x1587:  call   082f76dc <+0x17d9>
082f748f +0x158c:  leave
082f7490 +0x158d:  ret
082f7491 +0x158e:  nop
082f7492 +0x158f:  push   %ebp
082f7493 +0x1590:  mov    %esp,%ebp
082f7495 +0x1592:  sub    $0x18,%esp
082f7498 +0x1595:  mov    0x8(%ebp),%eax
082f749b +0x1598:  mov    %eax,(%esp)
082f749e +0x159b:  call   082f76dc <+0x17d9>
082f74a3 +0x15a0:  cmp    0xc(%ebp),%eax
082f74a6 +0x15a3:  setb   %al
082f74a9 +0x15a6:  movzbl %al,%eax
082f74ac +0x15a9:  test   %eax,%eax
082f74ae +0x15ab:  setne  %al
082f74b1 +0x15ae:  test   %al,%al
082f74b3 +0x15b0:  je     082f74ba <+0x15b7>
082f74b5 +0x15b2:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082f74ba +0x15b7:  mov    0xc(%ebp),%eax
082f74bd +0x15ba:  shl    $0x3,%eax
082f74c0 +0x15bd:  mov    %eax,(%esp)
082f74c3 +0x15c0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082f74c8 +0x15c5:  leave
082f74c9 +0x15c6:  ret
082f74ca +0x15c7:  push   %ebp
082f74cb +0x15c8:  mov    %esp,%ebp
082f74cd +0x15ca:  push   %ebx
082f74ce +0x15cb:  sub    $0x14,%esp
082f74d1 +0x15ce:  mov    0x8(%ebp),%ebx
082f74d4 +0x15d1:  mov    0xc(%ebp),%eax
082f74d7 +0x15d4:  mov    (%eax),%eax
082f74d9 +0x15d6:  mov    %eax,0x4(%esp)
082f74dd +0x15da:  mov    %ebx,(%esp)
082f74e0 +0x15dd:  call   082f76e6 <+0x17e3>
082f74e5 +0x15e2:  mov    %ebx,%eax
082f74e7 +0x15e4:  add    $0x14,%esp
082f74ea +0x15e7:  pop    %ebx
082f74eb +0x15e8:  pop    %ebp
082f74ec +0x15e9:  ret    $0x4
082f74ef +0x15ec:  push   %ebp
082f74f0 +0x15ed:  mov    %esp,%ebp
082f74f2 +0x15ef:  sub    $0x18,%esp
082f74f5 +0x15f2:  mov    0x10(%ebp),%eax
082f74f8 +0x15f5:  mov    %eax,0x8(%esp)
082f74fc +0x15f9:  mov    0xc(%ebp),%eax
082f74ff +0x15fc:  mov    %eax,0x4(%esp)
082f7503 +0x1600:  mov    0x8(%ebp),%eax
082f7506 +0x1603:  mov    %eax,(%esp)
082f7509 +0x1606:  call   082f76f3 <+0x17f0>
082f750e +0x160b:  leave
082f750f +0x160c:  ret
082f7510 +0x160d:  push   %ebp
082f7511 +0x160e:  mov    %esp,%ebp
082f7513 +0x1610:  sub    $0x18,%esp
082f7516 +0x1613:  mov    0x8(%ebp),%eax
082f7519 +0x1616:  mov    %eax,(%esp)
082f751c +0x1619:  call   082f7714 <+0x1811>
082f7521 +0x161e:  leave
082f7522 +0x161f:  ret
082f7523 +0x1620:  nop
082f7524 +0x1621:  push   %ebp
082f7525 +0x1622:  mov    %esp,%ebp
082f7527 +0x1624:  mov    0x8(%ebp),%eax
082f752a +0x1627:  pop    %ebp
082f752b +0x1628:  ret
082f752c +0x1629:  push   %ebp
082f752d +0x162a:  mov    %esp,%ebp
082f752f +0x162c:  push   %esi
082f7530 +0x162d:  push   %ebx
082f7531 +0x162e:  sub    $0x10,%esp
082f7534 +0x1631:  mov    0x8(%ebp),%eax
082f7537 +0x1634:  mov    0x10(%ebp),%edx
082f753a +0x1637:  mov    %edx,0x4(%esp)
082f753e +0x163b:  mov    %eax,(%esp)
082f7541 +0x163e:  call   082f75c0 <+0x16bd>
082f7546 +0x1643:  mov    0xc(%ebp),%eax
082f7549 +0x1646:  mov    %eax,0x4(%esp)
082f754d +0x164a:  mov    0x8(%ebp),%eax
082f7550 +0x164d:  mov    %eax,(%esp)
082f7553 +0x1650:  call   082f6f00 <+0xffd>
082f7558 +0x1655:  mov    0x8(%ebp),%edx
082f755b +0x1658:  mov    %eax,(%edx)
082f755d +0x165a:  mov    0x8(%ebp),%eax
082f7560 +0x165d:  mov    (%eax),%edx
082f7562 +0x165f:  mov    0x8(%ebp),%eax
082f7565 +0x1662:  mov    %edx,0x4(%eax)
082f7568 +0x1665:  mov    0x8(%ebp),%eax
082f756b +0x1668:  mov    (%eax),%eax
082f756d +0x166a:  mov    0xc(%ebp),%edx
082f7570 +0x166d:  shl    $0x3,%edx
082f7573 +0x1670:  lea    (%eax,%edx,1),%edx
082f7576 +0x1673:  mov    0x8(%ebp),%eax
082f7579 +0x1676:  mov    %edx,0x8(%eax)
082f757c +0x1679:  add    $0x10,%esp
082f757f +0x167c:  pop    %ebx
082f7580 +0x167d:  pop    %esi
082f7581 +0x167e:  pop    %ebp
082f7582 +0x167f:  ret
082f7583 +0x1680:  mov    %edx,%ebx
082f7585 +0x1682:  mov    %eax,%esi
082f7587 +0x1684:  mov    0x8(%ebp),%eax
082f758a +0x1687:  mov    %eax,(%esp)
082f758d +0x168a:  call   082df47a <_GLOBAL__I__ZN4CLog5this_E+&_ZL12gTCharBuffer+0x9371>  ; global constructors keyed to CLog::this_+&_ZL12gTCharBuffer+0x9371
082f7592 +0x168f:  mov    %esi,%eax
082f7594 +0x1691:  mov    %ebx,%edx
082f7596 +0x1693:  mov    %eax,(%esp)
082f7599 +0x1696:  call   08ae3750 <_Unwind_Resume>
082f759e +0x169b:  push   %ebp
082f759f +0x169c:  mov    %esp,%ebp
082f75a1 +0x169e:  sub    $0x18,%esp
082f75a4 +0x16a1:  mov    0x10(%ebp),%eax
082f75a7 +0x16a4:  mov    %eax,0x8(%esp)
082f75ab +0x16a8:  mov    0xc(%ebp),%eax
082f75ae +0x16ab:  mov    %eax,0x4(%esp)
082f75b2 +0x16af:  mov    0x8(%ebp),%eax
082f75b5 +0x16b2:  mov    %eax,(%esp)
082f75b8 +0x16b5:  call   082f7719 <+0x1816>
082f75bd +0x16ba:  leave
082f75be +0x16bb:  ret
082f75bf +0x16bc:  nop
082f75c0 +0x16bd:  push   %ebp
082f75c1 +0x16be:  mov    %esp,%ebp
082f75c3 +0x16c0:  sub    $0x18,%esp
082f75c6 +0x16c3:  mov    0x8(%ebp),%eax
082f75c9 +0x16c6:  mov    0xc(%ebp),%edx
082f75cc +0x16c9:  mov    %edx,0x4(%esp)
082f75d0 +0x16cd:  mov    %eax,(%esp)
082f75d3 +0x16d0:  call   082f773a <+0x1837>
082f75d8 +0x16d5:  mov    0x8(%ebp),%eax
082f75db +0x16d8:  movl   $0x0,(%eax)
082f75e1 +0x16de:  mov    0x8(%ebp),%eax
082f75e4 +0x16e1:  movl   $0x0,0x4(%eax)
082f75eb +0x16e8:  mov    0x8(%ebp),%eax
082f75ee +0x16eb:  movl   $0x0,0x8(%eax)
082f75f5 +0x16f2:  leave
082f75f6 +0x16f3:  ret
082f75f7 +0x16f4:  push   %ebp
082f75f8 +0x16f5:  mov    %esp,%ebp
082f75fa +0x16f7:  mov    0x8(%ebp),%eax
082f75fd +0x16fa:  add    $0x10,%eax
082f7600 +0x16fd:  pop    %ebp
082f7601 +0x16fe:  ret
082f7602 +0x16ff:  push   %ebp
082f7603 +0x1700:  mov    %esp,%ebp
082f7605 +0x1702:  push   %esi
082f7606 +0x1703:  push   %ebx
082f7607 +0x1704:  sub    $0x20,%esp
082f760a +0x1707:  mov    0x8(%ebp),%eax
082f760d +0x170a:  mov    %eax,(%esp)
082f7610 +0x170d:  call   082f7754 <+0x1851>
082f7615 +0x1712:  mov    %eax,-0xc(%ebp)
082f7618 +0x1715:  mov    0xc(%ebp),%eax
082f761b +0x1718:  mov    %eax,(%esp)
082f761e +0x171b:  call   082f7777 <+0x1874>
082f7623 +0x1720:  mov    %eax,%ebx
082f7625 +0x1722:  mov    0x8(%ebp),%eax
082f7628 +0x1725:  mov    %eax,(%esp)
082f762b +0x1728:  call   082cf5d4 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x214cf>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x214cf
082f7630 +0x172d:  mov    %ebx,0x8(%esp)
082f7634 +0x1731:  mov    -0xc(%ebp),%edx
082f7637 +0x1734:  mov    %edx,0x4(%esp)
082f763b +0x1738:  mov    %eax,(%esp)
082f763e +0x173b:  call   082f7780 <+0x187d>
082f7643 +0x1740:  jmp    082f7679 <+0x1776>
082f7645 +0x1742:  mov    %eax,(%esp)
082f7648 +0x1745:  call   08725ce0 <__cxa_begin_catch>
082f764d +0x174a:  mov    -0xc(%ebp),%eax
082f7650 +0x174d:  mov    %eax,0x4(%esp)
082f7654 +0x1751:  mov    0x8(%ebp),%eax
082f7657 +0x1754:  mov    %eax,(%esp)
082f765a +0x1757:  call   082cf61c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x21517>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x21517
082f765f +0x175c:  call   08724be0 <__cxa_rethrow>
082f7664 +0x1761:  mov    %edx,%ebx
082f7666 +0x1763:  mov    %eax,%esi
082f7668 +0x1765:  call   08725c30 <__cxa_end_catch>
082f766d +0x176a:  mov    %esi,%eax
082f766f +0x176c:  mov    %ebx,%edx
082f7671 +0x176e:  mov    %eax,(%esp)
082f7674 +0x1771:  call   08ae3750 <_Unwind_Resume>
082f7679 +0x1776:  mov    -0xc(%ebp),%eax
082f767c +0x1779:  add    $0x20,%esp
082f767f +0x177c:  pop    %ebx
082f7680 +0x177d:  pop    %esi
082f7681 +0x177e:  pop    %ebp
082f7682 +0x177f:  ret
082f7683 +0x1780:  push   %ebp
082f7684 +0x1781:  mov    %esp,%ebp
082f7686 +0x1783:  mov    0x8(%ebp),%eax
082f7689 +0x1786:  pop    %ebp
082f768a +0x1787:  ret
082f768b +0x1788:  push   %ebp
082f768c +0x1789:  mov    %esp,%ebp
082f768e +0x178b:  mov    0x8(%ebp),%eax
082f7691 +0x178e:  pop    %ebp
082f7692 +0x178f:  ret
082f7693 +0x1790:  push   %ebp
082f7694 +0x1791:  mov    %esp,%ebp
082f7696 +0x1793:  mov    0x8(%ebp),%eax
082f7699 +0x1796:  mov    0x8(%eax),%eax
082f769c +0x1799:  pop    %ebp
082f769d +0x179a:  ret
082f769e +0x179b:  push   %ebp
082f769f +0x179c:  mov    %esp,%ebp
082f76a1 +0x179e:  mov    0x8(%ebp),%eax
082f76a4 +0x17a1:  mov    0xc(%eax),%eax
082f76a7 +0x17a4:  pop    %ebp
082f76a8 +0x17a5:  ret
082f76a9 +0x17a6:  nop
082f76aa +0x17a7:  push   %ebp
082f76ab +0x17a8:  mov    %esp,%ebp
082f76ad +0x17aa:  pop    %ebp
082f76ae +0x17ab:  ret
082f76af +0x17ac:  push   %ebp
082f76b0 +0x17ad:  mov    %esp,%ebp
082f76b2 +0x17af:  mov    0x8(%ebp),%eax
082f76b5 +0x17b2:  pop    %ebp
082f76b6 +0x17b3:  ret
082f76b7 +0x17b4:  push   %ebp
082f76b8 +0x17b5:  mov    %esp,%ebp
082f76ba +0x17b7:  sub    $0x28,%esp
082f76bd +0x17ba:  movb   $0x0,-0x9(%ebp)
082f76c1 +0x17be:  mov    0x10(%ebp),%eax
082f76c4 +0x17c1:  mov    %eax,0x8(%esp)
082f76c8 +0x17c5:  mov    0xc(%ebp),%eax
082f76cb +0x17c8:  mov    %eax,0x4(%esp)
082f76cf +0x17cc:  mov    0x8(%ebp),%eax
082f76d2 +0x17cf:  mov    %eax,(%esp)
082f76d5 +0x17d2:  call   082f77e7 <+0x18e4>
082f76da +0x17d7:  leave
082f76db +0x17d8:  ret
082f76dc +0x17d9:  push   %ebp
082f76dd +0x17da:  mov    %esp,%ebp
082f76df +0x17dc:  mov    $0x1fffffff,%eax
082f76e4 +0x17e1:  pop    %ebp
082f76e5 +0x17e2:  ret
082f76e6 +0x17e3:  push   %ebp
082f76e7 +0x17e4:  mov    %esp,%ebp
082f76e9 +0x17e6:  mov    0x8(%ebp),%eax
082f76ec +0x17e9:  mov    0xc(%ebp),%edx
082f76ef +0x17ec:  mov    %edx,(%eax)
082f76f1 +0x17ee:  pop    %ebp
082f76f2 +0x17ef:  ret
082f76f3 +0x17f0:  push   %ebp
082f76f4 +0x17f1:  mov    %esp,%ebp
082f76f6 +0x17f3:  sub    $0x18,%esp
082f76f9 +0x17f6:  mov    0x10(%ebp),%eax
082f76fc +0x17f9:  mov    %eax,0x8(%esp)
082f7700 +0x17fd:  mov    0xc(%ebp),%eax
082f7703 +0x1800:  mov    %eax,0x4(%esp)
082f7707 +0x1804:  mov    0x8(%ebp),%eax
082f770a +0x1807:  mov    %eax,(%esp)
082f770d +0x180a:  call   082f7837 <+0x1934>
082f7712 +0x180f:  leave
082f7713 +0x1810:  ret
082f7714 +0x1811:  push   %ebp
082f7715 +0x1812:  mov    %esp,%ebp
082f7717 +0x1814:  pop    %ebp
082f7718 +0x1815:  ret
082f7719 +0x1816:  push   %ebp
082f771a +0x1817:  mov    %esp,%ebp
082f771c +0x1819:  sub    $0x18,%esp
082f771f +0x181c:  mov    0x10(%ebp),%eax
082f7722 +0x181f:  mov    %eax,0x8(%esp)
082f7726 +0x1823:  mov    0xc(%ebp),%eax
082f7729 +0x1826:  mov    %eax,0x4(%esp)
082f772d +0x182a:  mov    0x8(%ebp),%eax
082f7730 +0x182d:  mov    %eax,(%esp)
082f7733 +0x1830:  call   082f78dc <+0x19d9>
082f7738 +0x1835:  leave
082f7739 +0x1836:  ret
082f773a +0x1837:  push   %ebp
082f773b +0x1838:  mov    %esp,%ebp
082f773d +0x183a:  sub    $0x18,%esp
082f7740 +0x183d:  mov    0xc(%ebp),%edx
082f7743 +0x1840:  mov    0x8(%ebp),%eax
082f7746 +0x1843:  mov    %edx,0x4(%esp)
082f774a +0x1847:  mov    %eax,(%esp)
082f774d +0x184a:  call   082f794c <+0x1a49>
082f7752 +0x184f:  leave
082f7753 +0x1850:  ret
082f7754 +0x1851:  push   %ebp
082f7755 +0x1852:  mov    %esp,%ebp
082f7757 +0x1854:  sub    $0x18,%esp
082f775a +0x1857:  mov    0x8(%ebp),%eax
082f775d +0x185a:  movl   $0x0,0x8(%esp)
082f7765 +0x1862:  movl   $0x1,0x4(%esp)
082f776d +0x186a:  mov    %eax,(%esp)
082f7770 +0x186d:  call   082f7952 <+0x1a4f>
082f7775 +0x1872:  leave
082f7776 +0x1873:  ret
082f7777 +0x1874:  push   %ebp
082f7778 +0x1875:  mov    %esp,%ebp
082f777a +0x1877:  mov    0x8(%ebp),%eax
082f777d +0x187a:  pop    %ebp
082f777e +0x187b:  ret
082f777f +0x187c:  nop
082f7780 +0x187d:  push   %ebp
082f7781 +0x187e:  mov    %esp,%ebp
082f7783 +0x1880:  push   %edi
082f7784 +0x1881:  push   %esi
082f7785 +0x1882:  push   %ebx
082f7786 +0x1883:  sub    $0x2c,%esp
082f7789 +0x1886:  mov    0x10(%ebp),%eax
082f778c +0x1889:  mov    %eax,(%esp)
082f778f +0x188c:  call   082f7777 <+0x1874>
082f7794 +0x1891:  mov    %eax,%edi
082f7796 +0x1893:  mov    0xc(%ebp),%esi
082f7799 +0x1896:  mov    %esi,0x4(%esp)
082f779d +0x189a:  movl   $0x20,(%esp)
082f77a4 +0x18a1:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f77a9 +0x18a6:  mov    %eax,%ebx
082f77ab +0x18a8:  mov    %ebx,%eax
082f77ad +0x18aa:  test   %eax,%eax
082f77af +0x18ac:  je     082f77df <+0x18dc>
082f77b1 +0x18ae:  mov    %ebx,%eax
082f77b3 +0x18b0:  mov    %edi,0x4(%esp)
082f77b7 +0x18b4:  mov    %eax,(%esp)
082f77ba +0x18b7:  call   082f79b4 <+0x1ab1>
082f77bf +0x18bc:  jmp    082f77df <+0x18dc>
082f77c1 +0x18be:  mov    %edx,%edi
082f77c3 +0x18c0:  mov    %eax,-0x1c(%ebp)
082f77c6 +0x18c3:  mov    %esi,0x4(%esp)
082f77ca +0x18c7:  mov    %ebx,(%esp)
082f77cd +0x18ca:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
082f77d2 +0x18cf:  mov    -0x1c(%ebp),%eax
082f77d5 +0x18d2:  mov    %edi,%edx
082f77d7 +0x18d4:  mov    %eax,(%esp)
082f77da +0x18d7:  call   08ae3750 <_Unwind_Resume>
082f77df +0x18dc:  add    $0x2c,%esp
082f77e2 +0x18df:  pop    %ebx
082f77e3 +0x18e0:  pop    %esi
082f77e4 +0x18e1:  pop    %edi
082f77e5 +0x18e2:  pop    %ebp
082f77e6 +0x18e3:  ret
082f77e7 +0x18e4:  push   %ebp
082f77e8 +0x18e5:  mov    %esp,%ebp
082f77ea +0x18e7:  sub    $0x28,%esp
082f77ed +0x18ea:  mov    0xc(%ebp),%edx
082f77f0 +0x18ed:  mov    0x8(%ebp),%eax
082f77f3 +0x18f0:  mov    %edx,%ecx
082f77f5 +0x18f2:  sub    %eax,%ecx
082f77f7 +0x18f4:  mov    %ecx,%eax
082f77f9 +0x18f6:  sar    $0x3,%eax
082f77fc +0x18f9:  mov    %eax,-0xc(%ebp)
082f77ff +0x18fc:  jmp    082f7827 <+0x1924>
082f7801 +0x18fe:  subl   $0x8,0xc(%ebp)
082f7805 +0x1902:  mov    0xc(%ebp),%eax
082f7808 +0x1905:  mov    %eax,(%esp)
082f780b +0x1908:  call   082f6d0d <+0xe0a>
082f7810 +0x190d:  subl   $0x8,0x10(%ebp)
082f7814 +0x1911:  mov    %eax,0x4(%esp)
082f7818 +0x1915:  mov    0x10(%ebp),%eax
082f781b +0x1918:  mov    %eax,(%esp)
082f781e +0x191b:  call   082f6dd0 <+0xecd>
082f7823 +0x1920:  subl   $0x1,-0xc(%ebp)
082f7827 +0x1924:  cmpl   $0x0,-0xc(%ebp)
082f782b +0x1928:  setg   %al
082f782e +0x192b:  test   %al,%al
082f7830 +0x192d:  jne    082f7801 <+0x18fe>
082f7832 +0x192f:  mov    0x10(%ebp),%eax
082f7835 +0x1932:  leave
082f7836 +0x1933:  ret
082f7837 +0x1934:  push   %ebp
082f7838 +0x1935:  mov    %esp,%ebp
082f783a +0x1937:  push   %esi
082f783b +0x1938:  push   %ebx
082f783c +0x1939:  sub    $0x20,%esp
082f783f +0x193c:  mov    0x10(%ebp),%eax
082f7842 +0x193f:  mov    %eax,-0xc(%ebp)
082f7845 +0x1942:  jmp    082f7888 <+0x1985>
082f7847 +0x1944:  lea    0x8(%ebp),%eax
082f784a +0x1947:  mov    %eax,(%esp)
082f784d +0x194a:  call   082f7a34 <+0x1b31>
082f7852 +0x194f:  mov    %eax,%ebx
082f7854 +0x1951:  mov    -0xc(%ebp),%eax
082f7857 +0x1954:  mov    %eax,0x4(%esp)
082f785b +0x1958:  movl   $0x8,(%esp)
082f7862 +0x195f:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f7867 +0x1964:  mov    %eax,%edx
082f7869 +0x1966:  test   %edx,%edx
082f786b +0x1968:  je     082f7879 <+0x1976>
082f786d +0x196a:  mov    %ebx,0x4(%esp)
082f7871 +0x196e:  mov    %eax,(%esp)
082f7874 +0x1971:  call   082f73dc <+0x14d9>
082f7879 +0x1976:  lea    0x8(%ebp),%eax
082f787c +0x1979:  mov    %eax,(%esp)
082f787f +0x197c:  call   082f7a1e <+0x1b1b>
082f7884 +0x1981:  addl   $0x8,-0xc(%ebp)
082f7888 +0x1985:  lea    0xc(%ebp),%eax
082f788b +0x1988:  mov    %eax,0x4(%esp)
082f788f +0x198c:  lea    0x8(%ebp),%eax
082f7892 +0x198f:  mov    %eax,(%esp)
082f7895 +0x1992:  call   082f7a00 <+0x1afd>
082f789a +0x1997:  test   %al,%al
082f789c +0x1999:  jne    082f7847 <+0x1944>
082f789e +0x199b:  mov    -0xc(%ebp),%eax
082f78a1 +0x199e:  add    $0x20,%esp
082f78a4 +0x19a1:  pop    %ebx
082f78a5 +0x19a2:  pop    %esi
082f78a6 +0x19a3:  pop    %ebp
082f78a7 +0x19a4:  ret
082f78a8 +0x19a5:  mov    %eax,(%esp)
082f78ab +0x19a8:  call   08725ce0 <__cxa_begin_catch>
082f78b0 +0x19ad:  mov    -0xc(%ebp),%eax
082f78b3 +0x19b0:  mov    %eax,0x4(%esp)
082f78b7 +0x19b4:  mov    0x10(%ebp),%eax
082f78ba +0x19b7:  mov    %eax,(%esp)
082f78bd +0x19ba:  call   082e2039 <_GLOBAL__I__ZN4CLog5this_E+0x3e460>  ; global constructors keyed to CLog::this_+0x3e460
082f78c2 +0x19bf:  call   08724be0 <__cxa_rethrow>
082f78c7 +0x19c4:  mov    %edx,%ebx
082f78c9 +0x19c6:  mov    %eax,%esi
082f78cb +0x19c8:  call   08725c30 <__cxa_end_catch>
082f78d0 +0x19cd:  mov    %esi,%eax
082f78d2 +0x19cf:  mov    %ebx,%edx
082f78d4 +0x19d1:  mov    %eax,(%esp)
082f78d7 +0x19d4:  call   08ae3750 <_Unwind_Resume>
082f78dc +0x19d9:  push   %ebp
082f78dd +0x19da:  mov    %esp,%ebp
082f78df +0x19dc:  push   %ebx
082f78e0 +0x19dd:  sub    $0x24,%esp
082f78e3 +0x19e0:  mov    0x10(%ebp),%eax
082f78e6 +0x19e3:  mov    %eax,-0xc(%ebp)
082f78e9 +0x19e6:  jmp    082f792c <+0x1a29>
082f78eb +0x19e8:  lea    0x8(%ebp),%eax
082f78ee +0x19eb:  mov    %eax,(%esp)
082f78f1 +0x19ee:  call   082f7364 <+0x1461>
082f78f6 +0x19f3:  mov    %eax,%ebx
082f78f8 +0x19f5:  mov    -0xc(%ebp),%eax
082f78fb +0x19f8:  mov    %eax,0x4(%esp)
082f78ff +0x19fc:  movl   $0x8,(%esp)
082f7906 +0x1a03:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
082f790b +0x1a08:  mov    %eax,%edx
082f790d +0x1a0a:  test   %edx,%edx
082f790f +0x1a0c:  je     082f791d <+0x1a1a>
082f7911 +0x1a0e:  mov    %eax,%ecx
082f7913 +0x1a10:  mov    (%ebx),%eax
082f7915 +0x1a12:  mov    0x4(%ebx),%edx
082f7918 +0x1a15:  mov    %eax,(%ecx)
082f791a +0x1a17:  mov    %edx,0x4(%ecx)
082f791d +0x1a1a:  lea    0x8(%ebp),%eax
082f7920 +0x1a1d:  mov    %eax,(%esp)
082f7923 +0x1a20:  call   082f736e <+0x146b>
082f7928 +0x1a25:  addl   $0x8,-0xc(%ebp)
082f792c +0x1a29:  lea    0xc(%ebp),%eax
082f792f +0x1a2c:  mov    %eax,0x4(%esp)
082f7933 +0x1a30:  lea    0x8(%ebp),%eax
082f7936 +0x1a33:  mov    %eax,(%esp)
082f7939 +0x1a36:  call   082f6279 <+0x376>
082f793e +0x1a3b:  test   %al,%al
082f7940 +0x1a3d:  jne    082f78eb <+0x19e8>
082f7942 +0x1a3f:  mov    -0xc(%ebp),%eax
082f7945 +0x1a42:  add    $0x24,%esp
082f7948 +0x1a45:  pop    %ebx
082f7949 +0x1a46:  pop    %ebp
082f794a +0x1a47:  ret
082f794b +0x1a48:  nop
082f794c +0x1a49:  push   %ebp
082f794d +0x1a4a:  mov    %esp,%ebp
082f794f +0x1a4c:  pop    %ebp
082f7950 +0x1a4d:  ret
082f7951 +0x1a4e:  nop
082f7952 +0x1a4f:  push   %ebp
082f7953 +0x1a50:  mov    %esp,%ebp
082f7955 +0x1a52:  sub    $0x18,%esp
082f7958 +0x1a55:  mov    0x8(%ebp),%eax
082f795b +0x1a58:  mov    %eax,(%esp)
082f795e +0x1a5b:  call   082f7a3e <+0x1b3b>
082f7963 +0x1a60:  cmp    0xc(%ebp),%eax
082f7966 +0x1a63:  setb   %al
082f7969 +0x1a66:  movzbl %al,%eax
082f796c +0x1a69:  test   %eax,%eax
082f796e +0x1a6b:  setne  %al
082f7971 +0x1a6e:  test   %al,%al
082f7973 +0x1a70:  je     082f797a <+0x1a77>
082f7975 +0x1a72:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
082f797a +0x1a77:  mov    0xc(%ebp),%eax
082f797d +0x1a7a:  shl    $0x5,%eax
082f7980 +0x1a7d:  mov    %eax,(%esp)
082f7983 +0x1a80:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082f7988 +0x1a85:  leave
082f7989 +0x1a86:  ret
082f798a +0x1a87:  push   %ebp
082f798b +0x1a88:  mov    %esp,%ebp
082f798d +0x1a8a:  sub    $0x18,%esp
082f7990 +0x1a8d:  mov    0xc(%ebp),%eax
082f7993 +0x1a90:  mov    (%eax),%edx
082f7995 +0x1a92:  mov    0x8(%ebp),%eax
082f7998 +0x1a95:  mov    %edx,(%eax)
082f799a +0x1a97:  mov    0xc(%ebp),%eax
082f799d +0x1a9a:  lea    0x4(%eax),%edx
082f79a0 +0x1a9d:  mov    0x8(%ebp),%eax
082f79a3 +0x1aa0:  add    $0x4,%eax
082f79a6 +0x1aa3:  mov    %edx,0x4(%esp)
082f79aa +0x1aa7:  mov    %eax,(%esp)
082f79ad +0x1aaa:  call   082f6fcc <+0x10c9>
082f79b2 +0x1aaf:  leave
082f79b3 +0x1ab0:  ret
082f79b4 +0x1ab1:  push   %ebp
082f79b5 +0x1ab2:  mov    %esp,%ebp
082f79b7 +0x1ab4:  sub    $0x18,%esp
082f79ba +0x1ab7:  mov    0x8(%ebp),%eax
082f79bd +0x1aba:  movl   $0x0,(%eax)
082f79c3 +0x1ac0:  mov    0x8(%ebp),%eax
082f79c6 +0x1ac3:  movl   $0x0,0x4(%eax)
082f79cd +0x1aca:  mov    0x8(%ebp),%eax
082f79d0 +0x1acd:  movl   $0x0,0x8(%eax)
082f79d7 +0x1ad4:  mov    0x8(%ebp),%eax
082f79da +0x1ad7:  movl   $0x0,0xc(%eax)
082f79e1 +0x1ade:  mov    0xc(%ebp),%eax
082f79e4 +0x1ae1:  mov    %eax,(%esp)
082f79e7 +0x1ae4:  call   082f7777 <+0x1874>
082f79ec +0x1ae9:  mov    0x8(%ebp),%edx
082f79ef +0x1aec:  add    $0x10,%edx
082f79f2 +0x1aef:  mov    %eax,0x4(%esp)
082f79f6 +0x1af3:  mov    %edx,(%esp)
082f79f9 +0x1af6:  call   082f798a <+0x1a87>
082f79fe +0x1afb:  leave
082f79ff +0x1afc:  ret
082f7a00 +0x1afd:  push   %ebp
082f7a01 +0x1afe:  mov    %esp,%ebp
082f7a03 +0x1b00:  sub    $0x18,%esp
082f7a06 +0x1b03:  mov    0xc(%ebp),%eax
082f7a09 +0x1b06:  mov    %eax,0x4(%esp)
082f7a0d +0x1b0a:  mov    0x8(%ebp),%eax
082f7a10 +0x1b0d:  mov    %eax,(%esp)
082f7a13 +0x1b10:  call   082f7a48 <+0x1b45>
082f7a18 +0x1b15:  xor    $0x1,%eax
082f7a1b +0x1b18:  leave
082f7a1c +0x1b19:  ret
082f7a1d +0x1b1a:  nop
082f7a1e +0x1b1b:  push   %ebp
082f7a1f +0x1b1c:  mov    %esp,%ebp
082f7a21 +0x1b1e:  mov    0x8(%ebp),%eax
082f7a24 +0x1b21:  mov    (%eax),%eax
082f7a26 +0x1b23:  lea    0x8(%eax),%edx
082f7a29 +0x1b26:  mov    0x8(%ebp),%eax
082f7a2c +0x1b29:  mov    %edx,(%eax)
082f7a2e +0x1b2b:  mov    0x8(%ebp),%eax
082f7a31 +0x1b2e:  pop    %ebp
082f7a32 +0x1b2f:  ret
082f7a33 +0x1b30:  nop
082f7a34 +0x1b31:  push   %ebp
082f7a35 +0x1b32:  mov    %esp,%ebp
082f7a37 +0x1b34:  mov    0x8(%ebp),%eax
082f7a3a +0x1b37:  mov    (%eax),%eax
082f7a3c +0x1b39:  pop    %ebp
082f7a3d +0x1b3a:  ret
082f7a3e +0x1b3b:  push   %ebp
082f7a3f +0x1b3c:  mov    %esp,%ebp
082f7a41 +0x1b3e:  mov    $0x7ffffff,%eax
082f7a46 +0x1b43:  pop    %ebp
082f7a47 +0x1b44:  ret
082f7a48 +0x1b45:  push   %ebp
082f7a49 +0x1b46:  mov    %esp,%ebp
082f7a4b +0x1b48:  push   %ebx
082f7a4c +0x1b49:  sub    $0x14,%esp
082f7a4f +0x1b4c:  mov    0x8(%ebp),%eax
082f7a52 +0x1b4f:  mov    %eax,(%esp)
082f7a55 +0x1b52:  call   082f7a72 <+0x1b6f>
082f7a5a +0x1b57:  mov    %eax,%ebx
082f7a5c +0x1b59:  mov    0xc(%ebp),%eax
082f7a5f +0x1b5c:  mov    %eax,(%esp)
082f7a62 +0x1b5f:  call   082f7a72 <+0x1b6f>
082f7a67 +0x1b64:  cmp    %eax,%ebx
082f7a69 +0x1b66:  sete   %al
082f7a6c +0x1b69:  add    $0x14,%esp
082f7a6f +0x1b6c:  pop    %ebx
082f7a70 +0x1b6d:  pop    %ebp
082f7a71 +0x1b6e:  ret
082f7a72 +0x1b6f:  push   %ebp
082f7a73 +0x1b70:  mov    %esp,%ebp
082f7a75 +0x1b72:  mov    0x8(%ebp),%eax
082f7a78 +0x1b75:  mov    (%eax),%eax
082f7a7a +0x1b77:  pop    %ebp
082f7a7b +0x1b78:  ret
```

## 反编译 C

```c
// <global>::global @ 0x82f5f03

/* CAuctionAveragePrice::CAuctionAveragePrice() */

void CAuctionAveragePrice::_GLOBAL__I_CAuctionAveragePrice(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
