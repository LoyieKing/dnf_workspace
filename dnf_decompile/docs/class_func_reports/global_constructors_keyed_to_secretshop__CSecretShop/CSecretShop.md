# CSecretShop

`_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev`

`global constructors keyed to secretshop::CSecretShop::CSecretShop()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to secretshop::CSecretShop` | `0x085fbe6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fbe6e  _GLOBAL__I__ZN10secretshop11CSecretShopC2Ev
#           global constructors keyed to secretshop::CSecretShop::CSecretShop()
# range [0x085fbe6e, 0x085fcfd7]
085fbe6e +0x0000:  push   %ebp
085fbe6f +0x0001:  mov    %esp,%ebp
085fbe71 +0x0003:  sub    $0x18,%esp
085fbe74 +0x0006:  movl   $0xffff,0x4(%esp)
085fbe7c +0x000e:  movl   $0x1,(%esp)
085fbe83 +0x0015:  call   085fbe2e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085fbe88 +0x001a:  leave
085fbe89 +0x001b:  ret
085fbe8a +0x001c:  push   %ebp
085fbe8b +0x001d:  mov    %esp,%ebp
085fbe8d +0x001f:  sub    $0x18,%esp
085fbe90 +0x0022:  mov    0x8(%ebp),%eax
085fbe93 +0x0025:  mov    0xc(%ebp),%edx
085fbe96 +0x0028:  mov    %edx,0x4(%esp)
085fbe9a +0x002c:  mov    %eax,(%esp)
085fbe9d +0x002f:  call   08ab12a0 <_ZN10secretshop8RETAILER11GetSaleInfoEi>  ; secretshop::RETAILER::GetSaleInfo(int)
085fbea2 +0x0034:  leave
085fbea3 +0x0035:  ret
085fbea4 +0x0036:  push   %ebp
085fbea5 +0x0037:  mov    %esp,%ebp
085fbea7 +0x0039:  sub    $0x18,%esp
085fbeaa +0x003c:  mov    0x8(%ebp),%eax
085fbead +0x003f:  mov    %eax,(%esp)
085fbeb0 +0x0042:  call   085fc078 <+0x20a>
085fbeb5 +0x0047:  leave
085fbeb6 +0x0048:  ret
085fbeb7 +0x0049:  nop
085fbeb8 +0x004a:  push   %ebp
085fbeb9 +0x004b:  mov    %esp,%ebp
085fbebb +0x004d:  push   %edi
085fbebc +0x004e:  push   %esi
085fbebd +0x004f:  push   %ebx
085fbebe +0x0050:  sub    $0x2c,%esp
085fbec1 +0x0053:  mov    0x8(%ebp),%ebx
085fbec4 +0x0056:  mov    %ebx,%edi
085fbec6 +0x0058:  mov    $0x2,%esi
085fbecb +0x005d:  jmp    085fbedb <+0x6d>
085fbecd +0x005f:  mov    %edi,(%esp)
085fbed0 +0x0062:  call   085fc050 <+0x1e2>
085fbed5 +0x0067:  add    $0x18,%edi
085fbed8 +0x006a:  sub    $0x1,%esi
085fbedb +0x006d:  cmp    $0xffffffff,%esi
085fbede +0x0070:  setne  %al
085fbee1 +0x0073:  test   %al,%al
085fbee3 +0x0075:  jne    085fbecd <+0x5f>
085fbee5 +0x0077:  jmp    085fbf23 <+0xb5>
085fbee7 +0x0079:  mov    %edx,%edi
085fbee9 +0x007b:  mov    %eax,-0x1c(%ebp)
085fbeec +0x007e:  test   %ebx,%ebx
085fbeee +0x0080:  je     085fbf16 <+0xa8>
085fbef0 +0x0082:  mov    $0x2,%eax
085fbef5 +0x0087:  sub    %esi,%eax
085fbef7 +0x0089:  mov    %eax,%edx
085fbef9 +0x008b:  mov    %edx,%eax
085fbefb +0x008d:  add    %eax,%eax
085fbefd +0x008f:  add    %edx,%eax
085fbeff +0x0091:  shl    $0x3,%eax
085fbf02 +0x0094:  lea    (%ebx,%eax,1),%esi
085fbf05 +0x0097:  cmp    %ebx,%esi
085fbf07 +0x0099:  je     085fbf16 <+0xa8>
085fbf09 +0x009b:  sub    $0x18,%esi
085fbf0c +0x009e:  mov    %esi,(%esp)
085fbf0f +0x00a1:  call   085fbea4 <+0x36>
085fbf14 +0x00a6:  jmp    085fbf05 <+0x97>
085fbf16 +0x00a8:  mov    -0x1c(%ebp),%eax
085fbf19 +0x00ab:  mov    %edi,%edx
085fbf1b +0x00ad:  mov    %eax,(%esp)
085fbf1e +0x00b0:  call   08ae3750 <_Unwind_Resume>
085fbf23 +0x00b5:  add    $0x2c,%esp
085fbf26 +0x00b8:  pop    %ebx
085fbf27 +0x00b9:  pop    %esi
085fbf28 +0x00ba:  pop    %edi
085fbf29 +0x00bb:  pop    %ebp
085fbf2a +0x00bc:  ret
085fbf2b +0x00bd:  nop
085fbf2c +0x00be:  push   %ebp
085fbf2d +0x00bf:  mov    %esp,%ebp
085fbf2f +0x00c1:  push   %edi
085fbf30 +0x00c2:  push   %esi
085fbf31 +0x00c3:  push   %ebx
085fbf32 +0x00c4:  sub    $0x2c,%esp
085fbf35 +0x00c7:  movl   $0x0,-0x1c(%ebp)
085fbf3c +0x00ce:  jmp    085fbf59 <+0xeb>
085fbf3e +0x00d0:  mov    -0x1c(%ebp),%edx
085fbf41 +0x00d3:  mov    %edx,%eax
085fbf43 +0x00d5:  add    %eax,%eax
085fbf45 +0x00d7:  add    %edx,%eax
085fbf47 +0x00d9:  shl    $0x3,%eax
085fbf4a +0x00dc:  add    0x8(%ebp),%eax
085fbf4d +0x00df:  mov    %eax,(%esp)
085fbf50 +0x00e2:  call   085fc0ca <+0x25c>
085fbf55 +0x00e7:  addl   $0x1,-0x1c(%ebp)
085fbf59 +0x00eb:  cmpl   $0x2,-0x1c(%ebp)
085fbf5d +0x00ef:  setle  %al
085fbf60 +0x00f2:  test   %al,%al
085fbf62 +0x00f4:  jne    085fbf3e <+0xd0>
085fbf64 +0x00f6:  jmp    085fbf97 <+0x129>
085fbf66 +0x00f8:  mov    %edx,%esi
085fbf68 +0x00fa:  mov    %eax,%edi
085fbf6a +0x00fc:  mov    0x8(%ebp),%eax
085fbf6d +0x00ff:  test   %eax,%eax
085fbf6f +0x0101:  je     085fbf8b <+0x11d>
085fbf71 +0x0103:  mov    0x8(%ebp),%eax
085fbf74 +0x0106:  lea    0x48(%eax),%ebx
085fbf77 +0x0109:  mov    0x8(%ebp),%eax
085fbf7a +0x010c:  cmp    %eax,%ebx
085fbf7c +0x010e:  je     085fbf8b <+0x11d>
085fbf7e +0x0110:  sub    $0x18,%ebx
085fbf81 +0x0113:  mov    %ebx,(%esp)
085fbf84 +0x0116:  call   085fbea4 <+0x36>
085fbf89 +0x011b:  jmp    085fbf77 <+0x109>
085fbf8b +0x011d:  mov    %edi,%eax
085fbf8d +0x011f:  mov    %esi,%edx
085fbf8f +0x0121:  mov    %eax,(%esp)
085fbf92 +0x0124:  call   08ae3750 <_Unwind_Resume>
085fbf97 +0x0129:  mov    0x8(%ebp),%eax
085fbf9a +0x012c:  test   %eax,%eax
085fbf9c +0x012e:  je     085fbfb8 <+0x14a>
085fbf9e +0x0130:  mov    0x8(%ebp),%eax
085fbfa1 +0x0133:  lea    0x48(%eax),%ebx
085fbfa4 +0x0136:  mov    0x8(%ebp),%eax
085fbfa7 +0x0139:  cmp    %eax,%ebx
085fbfa9 +0x013b:  je     085fbfb8 <+0x14a>
085fbfab +0x013d:  sub    $0x18,%ebx
085fbfae +0x0140:  mov    %ebx,(%esp)
085fbfb1 +0x0143:  call   085fbea4 <+0x36>
085fbfb6 +0x0148:  jmp    085fbfa4 <+0x136>
085fbfb8 +0x014a:  add    $0x2c,%esp
085fbfbb +0x014d:  pop    %ebx
085fbfbc +0x014e:  pop    %esi
085fbfbd +0x014f:  pop    %edi
085fbfbe +0x0150:  pop    %ebp
085fbfbf +0x0151:  ret
085fbfc0 +0x0152:  push   %ebp
085fbfc1 +0x0153:  mov    %esp,%ebp
085fbfc3 +0x0155:  mov    0x8(%ebp),%eax
085fbfc6 +0x0158:  movl   $&_ZTVN10secretshop8IBuyRuleE+0x8,(%eax)
085fbfcc +0x015e:  mov    0x8(%ebp),%eax
085fbfcf +0x0161:  mov    0xc(%ebp),%edx
085fbfd2 +0x0164:  mov    %edx,0x4(%eax)
085fbfd5 +0x0167:  pop    %ebp
085fbfd6 +0x0168:  ret
085fbfd7 +0x0169:  nop
085fbfd8 +0x016a:  push   %ebp
085fbfd9 +0x016b:  mov    %esp,%ebp
085fbfdb +0x016d:  sub    $0x18,%esp
085fbfde +0x0170:  mov    0x8(%ebp),%eax
085fbfe1 +0x0173:  mov    0xc(%ebp),%edx
085fbfe4 +0x0176:  mov    %edx,0x4(%esp)
085fbfe8 +0x017a:  mov    %eax,(%esp)
085fbfeb +0x017d:  call   085fbfc0 <+0x152>
085fbff0 +0x0182:  mov    0x8(%ebp),%eax
085fbff3 +0x0185:  movl   $&_ZTVN10secretshop14CBuyItembyGoldE+0x8,(%eax)
085fbff9 +0x018b:  leave
085fbffa +0x018c:  ret
085fbffb +0x018d:  nop
085fbffc +0x018e:  push   %ebp
085fbffd +0x018f:  mov    %esp,%ebp
085fbfff +0x0191:  sub    $0x18,%esp
085fc002 +0x0194:  mov    0x8(%ebp),%eax
085fc005 +0x0197:  mov    0xc(%ebp),%edx
085fc008 +0x019a:  mov    %edx,0x4(%esp)
085fc00c +0x019e:  mov    %eax,(%esp)
085fc00f +0x01a1:  call   085fbfc0 <+0x152>
085fc014 +0x01a6:  mov    0x8(%ebp),%eax
085fc017 +0x01a9:  movl   $&_ZTVN10secretshop16CBuyItembyRecipeE+0x8,(%eax)
085fc01d +0x01af:  leave
085fc01e +0x01b0:  ret
085fc01f +0x01b1:  nop
085fc020 +0x01b2:  push   %ebp
085fc021 +0x01b3:  mov    %esp,%ebp
085fc023 +0x01b5:  sub    $0x18,%esp
085fc026 +0x01b8:  mov    0x8(%ebp),%eax
085fc029 +0x01bb:  mov    %eax,(%esp)
085fc02c +0x01be:  call   085fc106 <+0x298>
085fc031 +0x01c3:  leave
085fc032 +0x01c4:  ret
085fc033 +0x01c5:  nop
085fc034 +0x01c6:  push   %ebp
085fc035 +0x01c7:  mov    %esp,%ebp
085fc037 +0x01c9:  sub    $0x18,%esp
085fc03a +0x01cc:  mov    0x8(%ebp),%eax
085fc03d +0x01cf:  mov    (%eax),%eax
085fc03f +0x01d1:  mov    %eax,0x4(%esp)
085fc043 +0x01d5:  mov    0x8(%ebp),%eax
085fc046 +0x01d8:  mov    %eax,(%esp)
085fc049 +0x01db:  call   085fc3ba <+0x54c>
085fc04e +0x01e0:  leave
085fc04f +0x01e1:  ret
085fc050 +0x01e2:  push   %ebp
085fc051 +0x01e3:  mov    %esp,%ebp
085fc053 +0x01e5:  sub    $0x18,%esp
085fc056 +0x01e8:  mov    0x8(%ebp),%eax
085fc059 +0x01eb:  mov    %eax,(%esp)
085fc05c +0x01ee:  call   085fc3f0 <+0x582>
085fc061 +0x01f3:  leave
085fc062 +0x01f4:  ret
085fc063 +0x01f5:  nop
085fc064 +0x01f6:  push   %ebp
085fc065 +0x01f7:  mov    %esp,%ebp
085fc067 +0x01f9:  sub    $0x18,%esp
085fc06a +0x01fc:  mov    0x8(%ebp),%eax
085fc06d +0x01ff:  mov    %eax,(%esp)
085fc070 +0x0202:  call   085fc404 <+0x596>
085fc075 +0x0207:  leave
085fc076 +0x0208:  ret
085fc077 +0x0209:  nop
085fc078 +0x020a:  push   %ebp
085fc079 +0x020b:  mov    %esp,%ebp
085fc07b +0x020d:  push   %esi
085fc07c +0x020e:  push   %ebx
085fc07d +0x020f:  sub    $0x10,%esp
085fc080 +0x0212:  mov    0x8(%ebp),%eax
085fc083 +0x0215:  mov    %eax,(%esp)
085fc086 +0x0218:  call   085fc46e <+0x600>
085fc08b +0x021d:  mov    %eax,0x4(%esp)
085fc08f +0x0221:  mov    0x8(%ebp),%eax
085fc092 +0x0224:  mov    %eax,(%esp)
085fc095 +0x0227:  call   085fc418 <+0x5aa>
085fc09a +0x022c:  jmp    085fc0b7 <+0x249>
085fc09c +0x022e:  mov    %edx,%ebx
085fc09e +0x0230:  mov    %eax,%esi
085fc0a0 +0x0232:  mov    0x8(%ebp),%eax
085fc0a3 +0x0235:  mov    %eax,(%esp)
085fc0a6 +0x0238:  call   085fc064 <+0x1f6>
085fc0ab +0x023d:  mov    %esi,%eax
085fc0ad +0x023f:  mov    %ebx,%edx
085fc0af +0x0241:  mov    %eax,(%esp)
085fc0b2 +0x0244:  call   08ae3750 <_Unwind_Resume>
085fc0b7 +0x0249:  mov    0x8(%ebp),%eax
085fc0ba +0x024c:  mov    %eax,(%esp)
085fc0bd +0x024f:  call   085fc064 <+0x1f6>
085fc0c2 +0x0254:  add    $0x10,%esp
085fc0c5 +0x0257:  pop    %ebx
085fc0c6 +0x0258:  pop    %esi
085fc0c7 +0x0259:  pop    %ebp
085fc0c8 +0x025a:  ret
085fc0c9 +0x025b:  nop
085fc0ca +0x025c:  push   %ebp
085fc0cb +0x025d:  mov    %esp,%ebp
085fc0cd +0x025f:  sub    $0x18,%esp
085fc0d0 +0x0262:  mov    0x8(%ebp),%eax
085fc0d3 +0x0265:  mov    %eax,(%esp)
085fc0d6 +0x0268:  call   085fc47a <+0x60c>
085fc0db +0x026d:  leave
085fc0dc +0x026e:  ret
085fc0dd +0x026f:  nop
085fc0de +0x0270:  push   %ebp
085fc0df +0x0271:  mov    %esp,%ebp
085fc0e1 +0x0273:  sub    $0x18,%esp
085fc0e4 +0x0276:  mov    0x8(%ebp),%eax
085fc0e7 +0x0279:  mov    %eax,(%esp)
085fc0ea +0x027c:  call   085fc4f0 <+0x682>
085fc0ef +0x0281:  leave
085fc0f0 +0x0282:  ret
085fc0f1 +0x0283:  nop
085fc0f2 +0x0284:  push   %ebp
085fc0f3 +0x0285:  mov    %esp,%ebp
085fc0f5 +0x0287:  sub    $0x18,%esp
085fc0f8 +0x028a:  mov    0x8(%ebp),%eax
085fc0fb +0x028d:  mov    %eax,(%esp)
085fc0fe +0x0290:  call   085fc504 <+0x696>
085fc103 +0x0295:  leave
085fc104 +0x0296:  ret
085fc105 +0x0297:  nop
085fc106 +0x0298:  push   %ebp
085fc107 +0x0299:  mov    %esp,%ebp
085fc109 +0x029b:  push   %esi
085fc10a +0x029c:  push   %ebx
085fc10b +0x029d:  sub    $0x10,%esp
085fc10e +0x02a0:  mov    0x8(%ebp),%eax
085fc111 +0x02a3:  mov    %eax,(%esp)
085fc114 +0x02a6:  call   085fc56e <+0x700>
085fc119 +0x02ab:  mov    %eax,0x4(%esp)
085fc11d +0x02af:  mov    0x8(%ebp),%eax
085fc120 +0x02b2:  mov    %eax,(%esp)
085fc123 +0x02b5:  call   085fc518 <+0x6aa>
085fc128 +0x02ba:  jmp    085fc145 <+0x2d7>
085fc12a +0x02bc:  mov    %edx,%ebx
085fc12c +0x02be:  mov    %eax,%esi
085fc12e +0x02c0:  mov    0x8(%ebp),%eax
085fc131 +0x02c3:  mov    %eax,(%esp)
085fc134 +0x02c6:  call   085fc0f2 <+0x284>
085fc139 +0x02cb:  mov    %esi,%eax
085fc13b +0x02cd:  mov    %ebx,%edx
085fc13d +0x02cf:  mov    %eax,(%esp)
085fc140 +0x02d2:  call   08ae3750 <_Unwind_Resume>
085fc145 +0x02d7:  mov    0x8(%ebp),%eax
085fc148 +0x02da:  mov    %eax,(%esp)
085fc14b +0x02dd:  call   085fc0f2 <+0x284>
085fc150 +0x02e2:  add    $0x10,%esp
085fc153 +0x02e5:  pop    %ebx
085fc154 +0x02e6:  pop    %esi
085fc155 +0x02e7:  pop    %ebp
085fc156 +0x02e8:  ret
085fc157 +0x02e9:  nop
085fc158 +0x02ea:  push   %ebp
085fc159 +0x02eb:  mov    %esp,%ebp
085fc15b +0x02ed:  sub    $0x18,%esp
085fc15e +0x02f0:  mov    0xc(%ebp),%eax
085fc161 +0x02f3:  mov    %eax,(%esp)
085fc164 +0x02f6:  call   085fc579 <+0x70b>
085fc169 +0x02fb:  mov    (%eax),%edx
085fc16b +0x02fd:  mov    0x8(%ebp),%eax
085fc16e +0x0300:  mov    %edx,(%eax)
085fc170 +0x0302:  mov    0x10(%ebp),%eax
085fc173 +0x0305:  mov    %eax,(%esp)
085fc176 +0x0308:  call   085fc581 <+0x713>
085fc17b +0x030d:  mov    (%eax),%eax
085fc17d +0x030f:  mov    %eax,%edx
085fc17f +0x0311:  mov    0x8(%ebp),%eax
085fc182 +0x0314:  mov    %edx,0x4(%eax)
085fc185 +0x0317:  leave
085fc186 +0x0318:  ret
085fc187 +0x0319:  nop
085fc188 +0x031a:  push   %ebp
085fc189 +0x031b:  mov    %esp,%ebp
085fc18b +0x031d:  sub    $0x18,%esp
085fc18e +0x0320:  mov    0xc(%ebp),%eax
085fc191 +0x0323:  mov    %eax,(%esp)
085fc194 +0x0326:  call   085fc589 <+0x71b>
085fc199 +0x032b:  mov    (%eax),%edx
085fc19b +0x032d:  mov    0x8(%ebp),%eax
085fc19e +0x0330:  mov    %edx,(%eax)
085fc1a0 +0x0332:  mov    0xc(%ebp),%eax
085fc1a3 +0x0335:  add    $0x4,%eax
085fc1a6 +0x0338:  mov    %eax,(%esp)
085fc1a9 +0x033b:  call   085fc591 <+0x723>
085fc1ae +0x0340:  mov    (%eax),%edx
085fc1b0 +0x0342:  mov    0x8(%ebp),%eax
085fc1b3 +0x0345:  mov    %edx,0x4(%eax)
085fc1b6 +0x0348:  leave
085fc1b7 +0x0349:  ret
085fc1b8 +0x034a:  push   %ebp
085fc1b9 +0x034b:  mov    %esp,%ebp
085fc1bb +0x034d:  push   %ebx
085fc1bc +0x034e:  sub    $0x14,%esp
085fc1bf +0x0351:  mov    0x8(%ebp),%ebx
085fc1c2 +0x0354:  mov    0xc(%ebp),%eax
085fc1c5 +0x0357:  mov    0x10(%ebp),%edx
085fc1c8 +0x035a:  mov    %edx,0x8(%esp)
085fc1cc +0x035e:  mov    %eax,0x4(%esp)
085fc1d0 +0x0362:  mov    %ebx,(%esp)
085fc1d3 +0x0365:  call   085fc59a <+0x72c>
085fc1d8 +0x036a:  sub    $0x4,%esp
085fc1db +0x036d:  mov    %ebx,%eax
085fc1dd +0x036f:  mov    -0x4(%ebp),%ebx
085fc1e0 +0x0372:  leave
085fc1e1 +0x0373:  ret    $0x4
085fc1e4 +0x0376:  push   %ebp
085fc1e5 +0x0377:  mov    %esp,%ebp
085fc1e7 +0x0379:  sub    $0x18,%esp
085fc1ea +0x037c:  mov    0xc(%ebp),%eax
085fc1ed +0x037f:  mov    %eax,(%esp)
085fc1f0 +0x0382:  call   085fc579 <+0x70b>
085fc1f5 +0x0387:  mov    (%eax),%edx
085fc1f7 +0x0389:  mov    0x8(%ebp),%eax
085fc1fa +0x038c:  mov    %edx,(%eax)
085fc1fc +0x038e:  mov    0x10(%ebp),%eax
085fc1ff +0x0391:  mov    %eax,(%esp)
085fc202 +0x0394:  call   085fc769 <+0x8fb>
085fc207 +0x0399:  mov    (%eax),%eax
085fc209 +0x039b:  mov    %eax,%edx
085fc20b +0x039d:  mov    0x8(%ebp),%eax
085fc20e +0x03a0:  mov    %edx,0x4(%eax)
085fc211 +0x03a3:  leave
085fc212 +0x03a4:  ret
085fc213 +0x03a5:  nop
085fc214 +0x03a6:  push   %ebp
085fc215 +0x03a7:  mov    %esp,%ebp
085fc217 +0x03a9:  push   %ebx
085fc218 +0x03aa:  sub    $0x14,%esp
085fc21b +0x03ad:  mov    0x8(%ebp),%ebx
085fc21e +0x03b0:  mov    0xc(%ebp),%eax
085fc221 +0x03b3:  mov    %eax,0x4(%esp)
085fc225 +0x03b7:  mov    %ebx,(%esp)
085fc228 +0x03ba:  call   085fc772 <+0x904>
085fc22d +0x03bf:  sub    $0x4,%esp
085fc230 +0x03c2:  mov    %ebx,%eax
085fc232 +0x03c4:  mov    -0x4(%ebp),%ebx
085fc235 +0x03c7:  leave
085fc236 +0x03c8:  ret    $0x4
085fc239 +0x03cb:  nop
085fc23a +0x03cc:  push   %ebp
085fc23b +0x03cd:  mov    %esp,%ebp
085fc23d +0x03cf:  push   %ebx
085fc23e +0x03d0:  sub    $0x14,%esp
085fc241 +0x03d3:  mov    0x8(%ebp),%ebx
085fc244 +0x03d6:  mov    0xc(%ebp),%eax
085fc247 +0x03d9:  mov    %eax,0x4(%esp)
085fc24b +0x03dd:  mov    %ebx,(%esp)
085fc24e +0x03e0:  call   085fc798 <+0x92a>
085fc253 +0x03e5:  sub    $0x4,%esp
085fc256 +0x03e8:  mov    %ebx,%eax
085fc258 +0x03ea:  mov    -0x4(%ebp),%ebx
085fc25b +0x03ed:  leave
085fc25c +0x03ee:  ret    $0x4
085fc25f +0x03f1:  nop
085fc260 +0x03f2:  push   %ebp
085fc261 +0x03f3:  mov    %esp,%ebp
085fc263 +0x03f5:  mov    0x8(%ebp),%eax
085fc266 +0x03f8:  mov    (%eax),%edx
085fc268 +0x03fa:  mov    0xc(%ebp),%eax
085fc26b +0x03fd:  mov    (%eax),%eax
085fc26d +0x03ff:  cmp    %eax,%edx
085fc26f +0x0401:  setne  %al
085fc272 +0x0404:  pop    %ebp
085fc273 +0x0405:  ret
085fc274 +0x0406:  push   %ebp
085fc275 +0x0407:  mov    %esp,%ebp
085fc277 +0x0409:  mov    0x8(%ebp),%eax
085fc27a +0x040c:  mov    (%eax),%eax
085fc27c +0x040e:  add    $0x10,%eax
085fc27f +0x0411:  pop    %ebp
085fc280 +0x0412:  ret
085fc281 +0x0413:  nop
085fc282 +0x0414:  push   %ebp
085fc283 +0x0415:  mov    %esp,%ebp
085fc285 +0x0417:  sub    $0x18,%esp
085fc288 +0x041a:  mov    0x8(%ebp),%eax
085fc28b +0x041d:  mov    (%eax),%eax
085fc28d +0x041f:  mov    %eax,(%esp)
085fc290 +0x0422:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
085fc295 +0x0427:  mov    0x8(%ebp),%edx
085fc298 +0x042a:  mov    %eax,(%edx)
085fc29a +0x042c:  mov    0x8(%ebp),%eax
085fc29d +0x042f:  leave
085fc29e +0x0430:  ret
085fc29f +0x0431:  nop
085fc2a0 +0x0432:  push   %ebp
085fc2a1 +0x0433:  mov    %esp,%ebp
085fc2a3 +0x0435:  sub    $0x18,%esp
085fc2a6 +0x0438:  mov    0x8(%ebp),%eax
085fc2a9 +0x043b:  mov    %eax,(%esp)
085fc2ac +0x043e:  call   085fc7be <+0x950>
085fc2b1 +0x0443:  leave
085fc2b2 +0x0444:  ret
085fc2b3 +0x0445:  nop
085fc2b4 +0x0446:  push   %ebp
085fc2b5 +0x0447:  mov    %esp,%ebp
085fc2b7 +0x0449:  push   %ebx
085fc2b8 +0x044a:  sub    $0x14,%esp
085fc2bb +0x044d:  mov    0x8(%ebp),%ebx
085fc2be +0x0450:  mov    0xc(%ebp),%eax
085fc2c1 +0x0453:  mov    %eax,0x4(%esp)
085fc2c5 +0x0457:  mov    %ebx,(%esp)
085fc2c8 +0x045a:  call   085fc834 <+0x9c6>
085fc2cd +0x045f:  mov    %ebx,%eax
085fc2cf +0x0461:  add    $0x14,%esp
085fc2d2 +0x0464:  pop    %ebx
085fc2d3 +0x0465:  pop    %ebp
085fc2d4 +0x0466:  ret    $0x4
085fc2d7 +0x0469:  nop
085fc2d8 +0x046a:  push   %ebp
085fc2d9 +0x046b:  mov    %esp,%ebp
085fc2db +0x046d:  push   %ebx
085fc2dc +0x046e:  sub    $0x14,%esp
085fc2df +0x0471:  mov    0x8(%ebp),%ebx
085fc2e2 +0x0474:  mov    0xc(%ebp),%eax
085fc2e5 +0x0477:  add    $0x4,%eax
085fc2e8 +0x047a:  mov    %eax,0x4(%esp)
085fc2ec +0x047e:  mov    %ebx,(%esp)
085fc2ef +0x0481:  call   085fc834 <+0x9c6>
085fc2f4 +0x0486:  mov    %ebx,%eax
085fc2f6 +0x0488:  add    $0x14,%esp
085fc2f9 +0x048b:  pop    %ebx
085fc2fa +0x048c:  pop    %ebp
085fc2fb +0x048d:  ret    $0x4
085fc2fe +0x0490:  push   %ebp
085fc2ff +0x0491:  mov    %esp,%ebp
085fc301 +0x0493:  push   %ebx
085fc302 +0x0494:  sub    $0x14,%esp
085fc305 +0x0497:  mov    0x8(%ebp),%eax
085fc308 +0x049a:  mov    %eax,(%esp)
085fc30b +0x049d:  call   085fc844 <+0x9d6>
085fc310 +0x04a2:  mov    (%eax),%ebx
085fc312 +0x04a4:  mov    0xc(%ebp),%eax
085fc315 +0x04a7:  mov    %eax,(%esp)
085fc318 +0x04aa:  call   085fc844 <+0x9d6>
085fc31d +0x04af:  mov    (%eax),%eax
085fc31f +0x04b1:  cmp    %eax,%ebx
085fc321 +0x04b3:  setne  %al
085fc324 +0x04b6:  add    $0x14,%esp
085fc327 +0x04b9:  pop    %ebx
085fc328 +0x04ba:  pop    %ebp
085fc329 +0x04bb:  ret
085fc32a +0x04bc:  push   %ebp
085fc32b +0x04bd:  mov    %esp,%ebp
085fc32d +0x04bf:  mov    0x8(%ebp),%eax
085fc330 +0x04c2:  mov    (%eax),%eax
085fc332 +0x04c4:  pop    %ebp
085fc333 +0x04c5:  ret
085fc334 +0x04c6:  push   %ebp
085fc335 +0x04c7:  mov    %esp,%ebp
085fc337 +0x04c9:  mov    0x8(%ebp),%eax
085fc33a +0x04cc:  mov    (%eax),%eax
085fc33c +0x04ce:  lea    0x1c(%eax),%edx
085fc33f +0x04d1:  mov    0x8(%ebp),%eax
085fc342 +0x04d4:  mov    %edx,(%eax)
085fc344 +0x04d6:  mov    0x8(%ebp),%eax
085fc347 +0x04d9:  pop    %ebp
085fc348 +0x04da:  ret
085fc349 +0x04db:  nop
085fc34a +0x04dc:  push   %ebp
085fc34b +0x04dd:  mov    %esp,%ebp
085fc34d +0x04df:  push   %ebx
085fc34e +0x04e0:  sub    $0x14,%esp
085fc351 +0x04e3:  mov    0x8(%ebp),%ebx
085fc354 +0x04e6:  mov    0xc(%ebp),%eax
085fc357 +0x04e9:  mov    0x10(%ebp),%edx
085fc35a +0x04ec:  mov    %edx,0x8(%esp)
085fc35e +0x04f0:  mov    %eax,0x4(%esp)
085fc362 +0x04f4:  mov    %ebx,(%esp)
085fc365 +0x04f7:  call   085fc84c <+0x9de>
085fc36a +0x04fc:  sub    $0x4,%esp
085fc36d +0x04ff:  mov    %ebx,%eax
085fc36f +0x0501:  mov    -0x4(%ebp),%ebx
085fc372 +0x0504:  leave
085fc373 +0x0505:  ret    $0x4
085fc376 +0x0508:  push   %ebp
085fc377 +0x0509:  mov    %esp,%ebp
085fc379 +0x050b:  mov    0x8(%ebp),%eax
085fc37c +0x050e:  mov    0x4(%eax),%eax
085fc37f +0x0511:  mov    %eax,%edx
085fc381 +0x0513:  mov    0x8(%ebp),%eax
085fc384 +0x0516:  mov    (%eax),%eax
085fc386 +0x0518:  mov    %edx,%ecx
085fc388 +0x051a:  sub    %eax,%ecx
085fc38a +0x051c:  mov    %ecx,%eax
085fc38c +0x051e:  sar    $0x2,%eax
085fc38f +0x0521:  imul   $0xb6db6db7,%eax,%eax
085fc395 +0x0527:  pop    %ebp
085fc396 +0x0528:  ret
085fc397 +0x0529:  nop
085fc398 +0x052a:  push   %ebp
085fc399 +0x052b:  mov    %esp,%ebp
085fc39b +0x052d:  push   %ebx
085fc39c +0x052e:  mov    0x8(%ebp),%eax
085fc39f +0x0531:  mov    (%eax),%edx
085fc3a1 +0x0533:  mov    0xc(%ebp),%eax
085fc3a4 +0x0536:  shl    $0x2,%eax
085fc3a7 +0x0539:  lea    0x0(,%eax,8),%ecx
085fc3ae +0x0540:  mov    %ecx,%ebx
085fc3b0 +0x0542:  sub    %eax,%ebx
085fc3b2 +0x0544:  mov    %ebx,%eax
085fc3b4 +0x0546:  lea    (%edx,%eax,1),%eax
085fc3b7 +0x0549:  pop    %ebx
085fc3b8 +0x054a:  pop    %ebp
085fc3b9 +0x054b:  ret
085fc3ba +0x054c:  push   %ebp
085fc3bb +0x054d:  mov    %esp,%ebp
085fc3bd +0x054f:  sub    $0x18,%esp
085fc3c0 +0x0552:  mov    0x8(%ebp),%eax
085fc3c3 +0x0555:  mov    %eax,(%esp)
085fc3c6 +0x0558:  call   082b5922 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x781d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x781d
085fc3cb +0x055d:  mov    0x8(%ebp),%edx
085fc3ce +0x0560:  mov    0x4(%edx),%edx
085fc3d1 +0x0563:  mov    %eax,0x8(%esp)
085fc3d5 +0x0567:  mov    %edx,0x4(%esp)
085fc3d9 +0x056b:  mov    0xc(%ebp),%eax
085fc3dc +0x056e:  mov    %eax,(%esp)
085fc3df +0x0571:  call   082b592a <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x7825>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x7825
085fc3e4 +0x0576:  mov    0x8(%ebp),%eax
085fc3e7 +0x0579:  mov    0xc(%ebp),%edx
085fc3ea +0x057c:  mov    %edx,0x4(%eax)
085fc3ed +0x057f:  leave
085fc3ee +0x0580:  ret
085fc3ef +0x0581:  nop
085fc3f0 +0x0582:  push   %ebp
085fc3f1 +0x0583:  mov    %esp,%ebp
085fc3f3 +0x0585:  sub    $0x18,%esp
085fc3f6 +0x0588:  mov    0x8(%ebp),%eax
085fc3f9 +0x058b:  mov    %eax,(%esp)
085fc3fc +0x058e:  call   085fc90a <+0xa9c>
085fc401 +0x0593:  leave
085fc402 +0x0594:  ret
085fc403 +0x0595:  nop
085fc404 +0x0596:  push   %ebp
085fc405 +0x0597:  mov    %esp,%ebp
085fc407 +0x0599:  sub    $0x18,%esp
085fc40a +0x059c:  mov    0x8(%ebp),%eax
085fc40d +0x059f:  mov    %eax,(%esp)
085fc410 +0x05a2:  call   085fc95a <+0xaec>
085fc415 +0x05a7:  leave
085fc416 +0x05a8:  ret
085fc417 +0x05a9:  nop
085fc418 +0x05aa:  push   %ebp
085fc419 +0x05ab:  mov    %esp,%ebp
085fc41b +0x05ad:  sub    $0x28,%esp
085fc41e +0x05b0:  jmp    085fc460 <+0x5f2>
085fc420 +0x05b2:  mov    0xc(%ebp),%eax
085fc423 +0x05b5:  mov    %eax,(%esp)
085fc426 +0x05b8:  call   085fc95f <+0xaf1>
085fc42b +0x05bd:  mov    %eax,0x4(%esp)
085fc42f +0x05c1:  mov    0x8(%ebp),%eax
085fc432 +0x05c4:  mov    %eax,(%esp)
085fc435 +0x05c7:  call   085fc418 <+0x5aa>
085fc43a +0x05cc:  mov    0xc(%ebp),%eax
085fc43d +0x05cf:  mov    %eax,(%esp)
085fc440 +0x05d2:  call   085fc96a <+0xafc>
085fc445 +0x05d7:  mov    %eax,-0xc(%ebp)
085fc448 +0x05da:  mov    0xc(%ebp),%eax
085fc44b +0x05dd:  mov    %eax,0x4(%esp)
085fc44f +0x05e1:  mov    0x8(%ebp),%eax
085fc452 +0x05e4:  mov    %eax,(%esp)
085fc455 +0x05e7:  call   085fc976 <+0xb08>
085fc45a +0x05ec:  mov    -0xc(%ebp),%eax
085fc45d +0x05ef:  mov    %eax,0xc(%ebp)
085fc460 +0x05f2:  cmpl   $0x0,0xc(%ebp)
085fc464 +0x05f6:  setne  %al
085fc467 +0x05f9:  test   %al,%al
085fc469 +0x05fb:  jne    085fc420 <+0x5b2>
085fc46b +0x05fd:  leave
085fc46c +0x05fe:  ret
085fc46d +0x05ff:  nop
085fc46e +0x0600:  push   %ebp
085fc46f +0x0601:  mov    %esp,%ebp
085fc471 +0x0603:  mov    0x8(%ebp),%eax
085fc474 +0x0606:  mov    0x8(%eax),%eax
085fc477 +0x0609:  pop    %ebp
085fc478 +0x060a:  ret
085fc479 +0x060b:  nop
085fc47a +0x060c:  push   %ebp
085fc47b +0x060d:  mov    %esp,%ebp
085fc47d +0x060f:  push   %ebx
085fc47e +0x0610:  sub    $0x14,%esp
085fc481 +0x0613:  mov    0x8(%ebp),%eax
085fc484 +0x0616:  mov    %eax,(%esp)
085fc487 +0x0619:  call   085fc46e <+0x600>
085fc48c +0x061e:  mov    %eax,0x4(%esp)
085fc490 +0x0622:  mov    0x8(%ebp),%eax
085fc493 +0x0625:  mov    %eax,(%esp)
085fc496 +0x0628:  call   085fc418 <+0x5aa>
085fc49b +0x062d:  mov    0x8(%ebp),%eax
085fc49e +0x0630:  mov    %eax,(%esp)
085fc4a1 +0x0633:  call   085fc9b6 <+0xb48>
085fc4a6 +0x0638:  mov    %eax,%ebx
085fc4a8 +0x063a:  mov    0x8(%ebp),%eax
085fc4ab +0x063d:  mov    %eax,(%esp)
085fc4ae +0x0640:  call   085fc9aa <+0xb3c>
085fc4b3 +0x0645:  mov    %eax,(%ebx)
085fc4b5 +0x0647:  mov    0x8(%ebp),%eax
085fc4b8 +0x064a:  mov    %eax,(%esp)
085fc4bb +0x064d:  call   085fc9c2 <+0xb54>
085fc4c0 +0x0652:  movl   $0x0,(%eax)
085fc4c6 +0x0658:  mov    0x8(%ebp),%eax
085fc4c9 +0x065b:  mov    %eax,(%esp)
085fc4cc +0x065e:  call   085fc9ce <+0xb60>
085fc4d1 +0x0663:  mov    %eax,%ebx
085fc4d3 +0x0665:  mov    0x8(%ebp),%eax
085fc4d6 +0x0668:  mov    %eax,(%esp)
085fc4d9 +0x066b:  call   085fc9aa <+0xb3c>
085fc4de +0x0670:  mov    %eax,(%ebx)
085fc4e0 +0x0672:  mov    0x8(%ebp),%eax
085fc4e3 +0x0675:  movl   $0x0,0x14(%eax)
085fc4ea +0x067c:  add    $0x14,%esp
085fc4ed +0x067f:  pop    %ebx
085fc4ee +0x0680:  pop    %ebp
085fc4ef +0x0681:  ret
085fc4f0 +0x0682:  push   %ebp
085fc4f1 +0x0683:  mov    %esp,%ebp
085fc4f3 +0x0685:  sub    $0x18,%esp
085fc4f6 +0x0688:  mov    0x8(%ebp),%eax
085fc4f9 +0x068b:  mov    %eax,(%esp)
085fc4fc +0x068e:  call   085fc9da <+0xb6c>
085fc501 +0x0693:  leave
085fc502 +0x0694:  ret
085fc503 +0x0695:  nop
085fc504 +0x0696:  push   %ebp
085fc505 +0x0697:  mov    %esp,%ebp
085fc507 +0x0699:  sub    $0x18,%esp
085fc50a +0x069c:  mov    0x8(%ebp),%eax
085fc50d +0x069f:  mov    %eax,(%esp)
085fc510 +0x06a2:  call   085fca2a <+0xbbc>
085fc515 +0x06a7:  leave
085fc516 +0x06a8:  ret
085fc517 +0x06a9:  nop
085fc518 +0x06aa:  push   %ebp
085fc519 +0x06ab:  mov    %esp,%ebp
085fc51b +0x06ad:  sub    $0x28,%esp
085fc51e +0x06b0:  jmp    085fc560 <+0x6f2>
085fc520 +0x06b2:  mov    0xc(%ebp),%eax
085fc523 +0x06b5:  mov    %eax,(%esp)
085fc526 +0x06b8:  call   085fca2f <+0xbc1>
085fc52b +0x06bd:  mov    %eax,0x4(%esp)
085fc52f +0x06c1:  mov    0x8(%ebp),%eax
085fc532 +0x06c4:  mov    %eax,(%esp)
085fc535 +0x06c7:  call   085fc518 <+0x6aa>
085fc53a +0x06cc:  mov    0xc(%ebp),%eax
085fc53d +0x06cf:  mov    %eax,(%esp)
085fc540 +0x06d2:  call   085fca3a <+0xbcc>
085fc545 +0x06d7:  mov    %eax,-0xc(%ebp)
085fc548 +0x06da:  mov    0xc(%ebp),%eax
085fc54b +0x06dd:  mov    %eax,0x4(%esp)
085fc54f +0x06e1:  mov    0x8(%ebp),%eax
085fc552 +0x06e4:  mov    %eax,(%esp)
085fc555 +0x06e7:  call   085fca46 <+0xbd8>
085fc55a +0x06ec:  mov    -0xc(%ebp),%eax
085fc55d +0x06ef:  mov    %eax,0xc(%ebp)
085fc560 +0x06f2:  cmpl   $0x0,0xc(%ebp)
085fc564 +0x06f6:  setne  %al
085fc567 +0x06f9:  test   %al,%al
085fc569 +0x06fb:  jne    085fc520 <+0x6b2>
085fc56b +0x06fd:  leave
085fc56c +0x06fe:  ret
085fc56d +0x06ff:  nop
085fc56e +0x0700:  push   %ebp
085fc56f +0x0701:  mov    %esp,%ebp
085fc571 +0x0703:  mov    0x8(%ebp),%eax
085fc574 +0x0706:  mov    0x8(%eax),%eax
085fc577 +0x0709:  pop    %ebp
085fc578 +0x070a:  ret
085fc579 +0x070b:  push   %ebp
085fc57a +0x070c:  mov    %esp,%ebp
085fc57c +0x070e:  mov    0x8(%ebp),%eax
085fc57f +0x0711:  pop    %ebp
085fc580 +0x0712:  ret
085fc581 +0x0713:  push   %ebp
085fc582 +0x0714:  mov    %esp,%ebp
085fc584 +0x0716:  mov    0x8(%ebp),%eax
085fc587 +0x0719:  pop    %ebp
085fc588 +0x071a:  ret
085fc589 +0x071b:  push   %ebp
085fc58a +0x071c:  mov    %esp,%ebp
085fc58c +0x071e:  mov    0x8(%ebp),%eax
085fc58f +0x0721:  pop    %ebp
085fc590 +0x0722:  ret
085fc591 +0x0723:  push   %ebp
085fc592 +0x0724:  mov    %esp,%ebp
085fc594 +0x0726:  mov    0x8(%ebp),%eax
085fc597 +0x0729:  pop    %ebp
085fc598 +0x072a:  ret
085fc599 +0x072b:  nop
085fc59a +0x072c:  push   %ebp
085fc59b +0x072d:  mov    %esp,%ebp
085fc59d +0x072f:  push   %esi
085fc59e +0x0730:  push   %ebx
085fc59f +0x0731:  sub    $0x50,%esp
085fc5a2 +0x0734:  mov    0x8(%ebp),%ebx
085fc5a5 +0x0737:  mov    0xc(%ebp),%eax
085fc5a8 +0x073a:  mov    %eax,(%esp)
085fc5ab +0x073d:  call   085fc56e <+0x700>
085fc5b0 +0x0742:  mov    %eax,-0x14(%ebp)
085fc5b3 +0x0745:  mov    0xc(%ebp),%eax
085fc5b6 +0x0748:  mov    %eax,(%esp)
085fc5b9 +0x074b:  call   085fca7a <+0xc0c>
085fc5be +0x0750:  mov    %eax,-0x10(%ebp)
085fc5c1 +0x0753:  movb   $0x1,-0x9(%ebp)
085fc5c5 +0x0757:  jmp    085fc623 <+0x7b5>
085fc5c7 +0x0759:  mov    -0x14(%ebp),%eax
085fc5ca +0x075c:  mov    %eax,-0x10(%ebp)
085fc5cd +0x075f:  mov    -0x14(%ebp),%eax
085fc5d0 +0x0762:  mov    %eax,(%esp)
085fc5d3 +0x0765:  call   085fca8e <+0xc20>
085fc5d8 +0x076a:  mov    %eax,%esi
085fc5da +0x076c:  mov    0x10(%ebp),%eax
085fc5dd +0x076f:  mov    %eax,0x4(%esp)
085fc5e1 +0x0773:  lea    -0x2d(%ebp),%eax
085fc5e4 +0x0776:  mov    %eax,(%esp)
085fc5e7 +0x0779:  call   085fca86 <+0xc18>
085fc5ec +0x077e:  mov    0xc(%ebp),%edx
085fc5ef +0x0781:  mov    %esi,0x8(%esp)
085fc5f3 +0x0785:  mov    %eax,0x4(%esp)
085fc5f7 +0x0789:  mov    %edx,(%esp)
085fc5fa +0x078c:  call   085fcab0 <+0xc42>
085fc5ff +0x0791:  mov    %al,-0x9(%ebp)
085fc602 +0x0794:  cmpb   $0x0,-0x9(%ebp)
085fc606 +0x0798:  je     085fc615 <+0x7a7>
085fc608 +0x079a:  mov    -0x14(%ebp),%eax
085fc60b +0x079d:  mov    %eax,(%esp)
085fc60e +0x07a0:  call   085fca3a <+0xbcc>
085fc613 +0x07a5:  jmp    085fc620 <+0x7b2>
085fc615 +0x07a7:  mov    -0x14(%ebp),%eax
085fc618 +0x07aa:  mov    %eax,(%esp)
085fc61b +0x07ad:  call   085fca2f <+0xbc1>
085fc620 +0x07b2:  mov    %eax,-0x14(%ebp)
085fc623 +0x07b5:  cmpl   $0x0,-0x14(%ebp)
085fc627 +0x07b9:  setne  %al
085fc62a +0x07bc:  test   %al,%al
085fc62c +0x07be:  jne    085fc5c7 <+0x759>
085fc62e +0x07c0:  mov    -0x10(%ebp),%eax
085fc631 +0x07c3:  mov    %eax,0x4(%esp)
085fc635 +0x07c7:  lea    -0x34(%ebp),%eax
085fc638 +0x07ca:  mov    %eax,(%esp)
085fc63b +0x07cd:  call   085fcac6 <+0xc58>
085fc640 +0x07d2:  cmpb   $0x0,-0x9(%ebp)
085fc644 +0x07d6:  je     085fc6c5 <+0x857>
085fc646 +0x07d8:  lea    -0x2c(%ebp),%eax
085fc649 +0x07db:  mov    0xc(%ebp),%edx
085fc64c +0x07de:  mov    %edx,0x4(%esp)
085fc650 +0x07e2:  mov    %eax,(%esp)
085fc653 +0x07e5:  call   085fc772 <+0x904>
085fc658 +0x07ea:  sub    $0x4,%esp
085fc65b +0x07ed:  lea    -0x2c(%ebp),%eax
085fc65e +0x07f0:  mov    %eax,0x4(%esp)
085fc662 +0x07f4:  lea    -0x34(%ebp),%eax
085fc665 +0x07f7:  mov    %eax,(%esp)
085fc668 +0x07fa:  call   085fcad4 <+0xc66>
085fc66d +0x07ff:  test   %al,%al
085fc66f +0x0801:  je     085fc6ba <+0x84c>
085fc671 +0x0803:  movb   $0x1,-0x25(%ebp)
085fc675 +0x0807:  mov    -0x10(%ebp),%ecx
085fc678 +0x080a:  mov    -0x14(%ebp),%edx
085fc67b +0x080d:  lea    -0x24(%ebp),%eax
085fc67e +0x0810:  mov    0x10(%ebp),%esi
085fc681 +0x0813:  mov    %esi,0x10(%esp)
085fc685 +0x0817:  mov    %ecx,0xc(%esp)
085fc689 +0x081b:  mov    %edx,0x8(%esp)
085fc68d +0x081f:  mov    0xc(%ebp),%edx
085fc690 +0x0822:  mov    %edx,0x4(%esp)
085fc694 +0x0826:  mov    %eax,(%esp)
085fc697 +0x0829:  call   085fcae8 <+0xc7a>
085fc69c +0x082e:  sub    $0x4,%esp
085fc69f +0x0831:  lea    -0x25(%ebp),%eax
085fc6a2 +0x0834:  mov    %eax,0x8(%esp)
085fc6a6 +0x0838:  lea    -0x24(%ebp),%eax
085fc6a9 +0x083b:  mov    %eax,0x4(%esp)
085fc6ad +0x083f:  mov    %ebx,(%esp)
085fc6b0 +0x0842:  call   085fcbb0 <+0xd42>
085fc6b5 +0x0847:  jmp    085fc75b <+0x8ed>
085fc6ba +0x084c:  lea    -0x34(%ebp),%eax
085fc6bd +0x084f:  mov    %eax,(%esp)
085fc6c0 +0x0852:  call   085fcbde <+0xd70>
085fc6c5 +0x0857:  mov    0x10(%ebp),%eax
085fc6c8 +0x085a:  mov    %eax,0x4(%esp)
085fc6cc +0x085e:  lea    -0x1e(%ebp),%eax
085fc6cf +0x0861:  mov    %eax,(%esp)
085fc6d2 +0x0864:  call   085fca86 <+0xc18>
085fc6d7 +0x0869:  mov    %eax,%esi
085fc6d9 +0x086b:  mov    -0x34(%ebp),%eax
085fc6dc +0x086e:  mov    %eax,(%esp)
085fc6df +0x0871:  call   085fcbfb <+0xd8d>
085fc6e4 +0x0876:  mov    0xc(%ebp),%edx
085fc6e7 +0x0879:  mov    %esi,0x8(%esp)
085fc6eb +0x087d:  mov    %eax,0x4(%esp)
085fc6ef +0x0881:  mov    %edx,(%esp)
085fc6f2 +0x0884:  call   085fcab0 <+0xc42>
085fc6f7 +0x0889:  test   %al,%al
085fc6f9 +0x088b:  je     085fc741 <+0x8d3>
085fc6fb +0x088d:  movb   $0x1,-0x1d(%ebp)
085fc6ff +0x0891:  mov    -0x10(%ebp),%ecx
085fc702 +0x0894:  mov    -0x14(%ebp),%edx
085fc705 +0x0897:  lea    -0x1c(%ebp),%eax
085fc708 +0x089a:  mov    0x10(%ebp),%esi
085fc70b +0x089d:  mov    %esi,0x10(%esp)
085fc70f +0x08a1:  mov    %ecx,0xc(%esp)
085fc713 +0x08a5:  mov    %edx,0x8(%esp)
085fc717 +0x08a9:  mov    0xc(%ebp),%edx
085fc71a +0x08ac:  mov    %edx,0x4(%esp)
085fc71e +0x08b0:  mov    %eax,(%esp)
085fc721 +0x08b3:  call   085fcae8 <+0xc7a>
085fc726 +0x08b8:  sub    $0x4,%esp
085fc729 +0x08bb:  lea    -0x1d(%ebp),%eax
085fc72c +0x08be:  mov    %eax,0x8(%esp)
085fc730 +0x08c2:  lea    -0x1c(%ebp),%eax
085fc733 +0x08c5:  mov    %eax,0x4(%esp)
085fc737 +0x08c9:  mov    %ebx,(%esp)
085fc73a +0x08cc:  call   085fcbb0 <+0xd42>
085fc73f +0x08d1:  jmp    085fc75b <+0x8ed>
085fc741 +0x08d3:  movb   $0x0,-0x15(%ebp)
085fc745 +0x08d7:  lea    -0x15(%ebp),%eax
085fc748 +0x08da:  mov    %eax,0x8(%esp)
085fc74c +0x08de:  lea    -0x34(%ebp),%eax
085fc74f +0x08e1:  mov    %eax,0x4(%esp)
085fc753 +0x08e5:  mov    %ebx,(%esp)
085fc756 +0x08e8:  call   085fcc1e <+0xdb0>
085fc75b +0x08ed:  mov    %ebx,%eax
085fc75d +0x08ef:  lea    -0x8(%ebp),%esp
085fc760 +0x08f2:  add    $0x0,%esp
085fc763 +0x08f5:  pop    %ebx
085fc764 +0x08f6:  pop    %esi
085fc765 +0x08f7:  pop    %ebp
085fc766 +0x08f8:  ret    $0x4
085fc769 +0x08fb:  push   %ebp
085fc76a +0x08fc:  mov    %esp,%ebp
085fc76c +0x08fe:  mov    0x8(%ebp),%eax
085fc76f +0x0901:  pop    %ebp
085fc770 +0x0902:  ret
085fc771 +0x0903:  nop
085fc772 +0x0904:  push   %ebp
085fc773 +0x0905:  mov    %esp,%ebp
085fc775 +0x0907:  push   %ebx
085fc776 +0x0908:  sub    $0x14,%esp
085fc779 +0x090b:  mov    0x8(%ebp),%ebx
085fc77c +0x090e:  mov    0xc(%ebp),%eax
085fc77f +0x0911:  mov    0xc(%eax),%eax
085fc782 +0x0914:  mov    %eax,0x4(%esp)
085fc786 +0x0918:  mov    %ebx,(%esp)
085fc789 +0x091b:  call   085fcac6 <+0xc58>
085fc78e +0x0920:  mov    %ebx,%eax
085fc790 +0x0922:  add    $0x14,%esp
085fc793 +0x0925:  pop    %ebx
085fc794 +0x0926:  pop    %ebp
085fc795 +0x0927:  ret    $0x4
085fc798 +0x092a:  push   %ebp
085fc799 +0x092b:  mov    %esp,%ebp
085fc79b +0x092d:  push   %ebx
085fc79c +0x092e:  sub    $0x14,%esp
085fc79f +0x0931:  mov    0x8(%ebp),%ebx
085fc7a2 +0x0934:  mov    0xc(%ebp),%eax
085fc7a5 +0x0937:  add    $0x4,%eax
085fc7a8 +0x093a:  mov    %eax,0x4(%esp)
085fc7ac +0x093e:  mov    %ebx,(%esp)
085fc7af +0x0941:  call   085fcac6 <+0xc58>
085fc7b4 +0x0946:  mov    %ebx,%eax
085fc7b6 +0x0948:  add    $0x14,%esp
085fc7b9 +0x094b:  pop    %ebx
085fc7ba +0x094c:  pop    %ebp
085fc7bb +0x094d:  ret    $0x4
085fc7be +0x0950:  push   %ebp
085fc7bf +0x0951:  mov    %esp,%ebp
085fc7c1 +0x0953:  push   %ebx
085fc7c2 +0x0954:  sub    $0x14,%esp
085fc7c5 +0x0957:  mov    0x8(%ebp),%eax
085fc7c8 +0x095a:  mov    %eax,(%esp)
085fc7cb +0x095d:  call   085fc56e <+0x700>
085fc7d0 +0x0962:  mov    %eax,0x4(%esp)
085fc7d4 +0x0966:  mov    0x8(%ebp),%eax
085fc7d7 +0x0969:  mov    %eax,(%esp)
085fc7da +0x096c:  call   085fc518 <+0x6aa>
085fc7df +0x0971:  mov    0x8(%ebp),%eax
085fc7e2 +0x0974:  mov    %eax,(%esp)
085fc7e5 +0x0977:  call   085fcc4c <+0xdde>
085fc7ea +0x097c:  mov    %eax,%ebx
085fc7ec +0x097e:  mov    0x8(%ebp),%eax
085fc7ef +0x0981:  mov    %eax,(%esp)
085fc7f2 +0x0984:  call   085fca7a <+0xc0c>
085fc7f7 +0x0989:  mov    %eax,(%ebx)
085fc7f9 +0x098b:  mov    0x8(%ebp),%eax
085fc7fc +0x098e:  mov    %eax,(%esp)
085fc7ff +0x0991:  call   085fcc58 <+0xdea>
085fc804 +0x0996:  movl   $0x0,(%eax)
085fc80a +0x099c:  mov    0x8(%ebp),%eax
085fc80d +0x099f:  mov    %eax,(%esp)
085fc810 +0x09a2:  call   085fcc64 <+0xdf6>
085fc815 +0x09a7:  mov    %eax,%ebx
085fc817 +0x09a9:  mov    0x8(%ebp),%eax
085fc81a +0x09ac:  mov    %eax,(%esp)
085fc81d +0x09af:  call   085fca7a <+0xc0c>
085fc822 +0x09b4:  mov    %eax,(%ebx)
085fc824 +0x09b6:  mov    0x8(%ebp),%eax
085fc827 +0x09b9:  movl   $0x0,0x14(%eax)
085fc82e +0x09c0:  add    $0x14,%esp
085fc831 +0x09c3:  pop    %ebx
085fc832 +0x09c4:  pop    %ebp
085fc833 +0x09c5:  ret
085fc834 +0x09c6:  push   %ebp
085fc835 +0x09c7:  mov    %esp,%ebp
085fc837 +0x09c9:  mov    0xc(%ebp),%eax
085fc83a +0x09cc:  mov    (%eax),%edx
085fc83c +0x09ce:  mov    0x8(%ebp),%eax
085fc83f +0x09d1:  mov    %edx,(%eax)
085fc841 +0x09d3:  pop    %ebp
085fc842 +0x09d4:  ret
085fc843 +0x09d5:  nop
085fc844 +0x09d6:  push   %ebp
085fc845 +0x09d7:  mov    %esp,%ebp
085fc847 +0x09d9:  mov    0x8(%ebp),%eax
085fc84a +0x09dc:  pop    %ebp
085fc84b +0x09dd:  ret
085fc84c +0x09de:  push   %ebp
085fc84d +0x09df:  mov    %esp,%ebp
085fc84f +0x09e1:  push   %esi
085fc850 +0x09e2:  push   %ebx
085fc851 +0x09e3:  sub    $0x30,%esp
085fc854 +0x09e6:  mov    0x8(%ebp),%ebx
085fc857 +0x09e9:  mov    0xc(%ebp),%eax
085fc85a +0x09ec:  mov    %eax,(%esp)
085fc85d +0x09ef:  call   085fca7a <+0xc0c>
085fc862 +0x09f4:  mov    %eax,%esi
085fc864 +0x09f6:  mov    0xc(%ebp),%eax
085fc867 +0x09f9:  mov    %eax,(%esp)
085fc86a +0x09fc:  call   085fc56e <+0x700>
085fc86f +0x0a01:  lea    -0x10(%ebp),%edx
085fc872 +0x0a04:  mov    0x10(%ebp),%ecx
085fc875 +0x0a07:  mov    %ecx,0x10(%esp)
085fc879 +0x0a0b:  mov    %esi,0xc(%esp)
085fc87d +0x0a0f:  mov    %eax,0x8(%esp)
085fc881 +0x0a13:  mov    0xc(%ebp),%eax
085fc884 +0x0a16:  mov    %eax,0x4(%esp)
085fc888 +0x0a1a:  mov    %edx,(%esp)
085fc88b +0x0a1d:  call   085fcc70 <+0xe02>
085fc890 +0x0a22:  sub    $0x4,%esp
085fc893 +0x0a25:  lea    -0xc(%ebp),%eax
085fc896 +0x0a28:  mov    0xc(%ebp),%edx
085fc899 +0x0a2b:  mov    %edx,0x4(%esp)
085fc89d +0x0a2f:  mov    %eax,(%esp)
085fc8a0 +0x0a32:  call   085fc798 <+0x92a>
085fc8a5 +0x0a37:  sub    $0x4,%esp
085fc8a8 +0x0a3a:  lea    -0xc(%ebp),%eax
085fc8ab +0x0a3d:  mov    %eax,0x4(%esp)
085fc8af +0x0a41:  lea    -0x10(%ebp),%eax
085fc8b2 +0x0a44:  mov    %eax,(%esp)
085fc8b5 +0x0a47:  call   085fcad4 <+0xc66>
085fc8ba +0x0a4c:  test   %al,%al
085fc8bc +0x0a4e:  jne    085fc8e3 <+0xa75>
085fc8be +0x0a50:  mov    -0x10(%ebp),%eax
085fc8c1 +0x0a53:  mov    %eax,(%esp)
085fc8c4 +0x0a56:  call   085fcbfb <+0xd8d>
085fc8c9 +0x0a5b:  mov    0xc(%ebp),%edx
085fc8cc +0x0a5e:  mov    %eax,0x8(%esp)
085fc8d0 +0x0a62:  mov    0x10(%ebp),%eax
085fc8d3 +0x0a65:  mov    %eax,0x4(%esp)
085fc8d7 +0x0a69:  mov    %edx,(%esp)
085fc8da +0x0a6c:  call   085fcab0 <+0xc42>
085fc8df +0x0a71:  test   %al,%al
085fc8e1 +0x0a73:  je     085fc8f7 <+0xa89>
085fc8e3 +0x0a75:  mov    0xc(%ebp),%eax
085fc8e6 +0x0a78:  mov    %eax,0x4(%esp)
085fc8ea +0x0a7c:  mov    %ebx,(%esp)
085fc8ed +0x0a7f:  call   085fc798 <+0x92a>
085fc8f2 +0x0a84:  sub    $0x4,%esp
085fc8f5 +0x0a87:  jmp    085fc8fc <+0xa8e>
085fc8f7 +0x0a89:  mov    -0x10(%ebp),%eax
085fc8fa +0x0a8c:  mov    %eax,(%ebx)
085fc8fc +0x0a8e:  mov    %ebx,%eax
085fc8fe +0x0a90:  lea    -0x8(%ebp),%esp
085fc901 +0x0a93:  add    $0x0,%esp
085fc904 +0x0a96:  pop    %ebx
085fc905 +0x0a97:  pop    %esi
085fc906 +0x0a98:  pop    %ebp
085fc907 +0x0a99:  ret    $0x4
085fc90a +0x0a9c:  push   %ebp
085fc90b +0x0a9d:  mov    %esp,%ebp
085fc90d +0x0a9f:  sub    $0x18,%esp
085fc910 +0x0aa2:  mov    0x8(%ebp),%eax
085fc913 +0x0aa5:  mov    %eax,(%esp)
085fc916 +0x0aa8:  call   085fccec <+0xe7e>
085fc91b +0x0aad:  mov    0x8(%ebp),%eax
085fc91e +0x0ab0:  movl   $0x0,0x4(%eax)
085fc925 +0x0ab7:  mov    0x8(%ebp),%eax
085fc928 +0x0aba:  movl   $0x0,0x8(%eax)
085fc92f +0x0ac1:  mov    0x8(%ebp),%eax
085fc932 +0x0ac4:  movl   $0x0,0xc(%eax)
085fc939 +0x0acb:  mov    0x8(%ebp),%eax
085fc93c +0x0ace:  movl   $0x0,0x10(%eax)
085fc943 +0x0ad5:  mov    0x8(%ebp),%eax
085fc946 +0x0ad8:  movl   $0x0,0x14(%eax)
085fc94d +0x0adf:  mov    0x8(%ebp),%eax
085fc950 +0x0ae2:  mov    %eax,(%esp)
085fc953 +0x0ae5:  call   085fcd00 <+0xe92>
085fc958 +0x0aea:  leave
085fc959 +0x0aeb:  ret
085fc95a +0x0aec:  push   %ebp
085fc95b +0x0aed:  mov    %esp,%ebp
085fc95d +0x0aef:  pop    %ebp
085fc95e +0x0af0:  ret
085fc95f +0x0af1:  push   %ebp
085fc960 +0x0af2:  mov    %esp,%ebp
085fc962 +0x0af4:  mov    0x8(%ebp),%eax
085fc965 +0x0af7:  mov    0xc(%eax),%eax
085fc968 +0x0afa:  pop    %ebp
085fc969 +0x0afb:  ret
085fc96a +0x0afc:  push   %ebp
085fc96b +0x0afd:  mov    %esp,%ebp
085fc96d +0x0aff:  mov    0x8(%ebp),%eax
085fc970 +0x0b02:  mov    0x8(%eax),%eax
085fc973 +0x0b05:  pop    %ebp
085fc974 +0x0b06:  ret
085fc975 +0x0b07:  nop
085fc976 +0x0b08:  push   %ebp
085fc977 +0x0b09:  mov    %esp,%ebp
085fc979 +0x0b0b:  sub    $0x18,%esp
085fc97c +0x0b0e:  mov    0x8(%ebp),%eax
085fc97f +0x0b11:  mov    %eax,(%esp)
085fc982 +0x0b14:  call   085fcd32 <+0xec4>
085fc987 +0x0b19:  mov    0xc(%ebp),%edx
085fc98a +0x0b1c:  mov    %edx,0x4(%esp)
085fc98e +0x0b20:  mov    %eax,(%esp)
085fc991 +0x0b23:  call   085fcd40 <+0xed2>
085fc996 +0x0b28:  mov    0xc(%ebp),%eax
085fc999 +0x0b2b:  mov    %eax,0x4(%esp)
085fc99d +0x0b2f:  mov    0x8(%ebp),%eax
085fc9a0 +0x0b32:  mov    %eax,(%esp)
085fc9a3 +0x0b35:  call   085fcd54 <+0xee6>
085fc9a8 +0x0b3a:  leave
085fc9a9 +0x0b3b:  ret
085fc9aa +0x0b3c:  push   %ebp
085fc9ab +0x0b3d:  mov    %esp,%ebp
085fc9ad +0x0b3f:  mov    0x8(%ebp),%eax
085fc9b0 +0x0b42:  add    $0x4,%eax
085fc9b3 +0x0b45:  pop    %ebp
085fc9b4 +0x0b46:  ret
085fc9b5 +0x0b47:  nop
085fc9b6 +0x0b48:  push   %ebp
085fc9b7 +0x0b49:  mov    %esp,%ebp
085fc9b9 +0x0b4b:  mov    0x8(%ebp),%eax
085fc9bc +0x0b4e:  add    $0xc,%eax
085fc9bf +0x0b51:  pop    %ebp
085fc9c0 +0x0b52:  ret
085fc9c1 +0x0b53:  nop
085fc9c2 +0x0b54:  push   %ebp
085fc9c3 +0x0b55:  mov    %esp,%ebp
085fc9c5 +0x0b57:  mov    0x8(%ebp),%eax
085fc9c8 +0x0b5a:  add    $0x8,%eax
085fc9cb +0x0b5d:  pop    %ebp
085fc9cc +0x0b5e:  ret
085fc9cd +0x0b5f:  nop
085fc9ce +0x0b60:  push   %ebp
085fc9cf +0x0b61:  mov    %esp,%ebp
085fc9d1 +0x0b63:  mov    0x8(%ebp),%eax
085fc9d4 +0x0b66:  add    $0x10,%eax
085fc9d7 +0x0b69:  pop    %ebp
085fc9d8 +0x0b6a:  ret
085fc9d9 +0x0b6b:  nop
085fc9da +0x0b6c:  push   %ebp
085fc9db +0x0b6d:  mov    %esp,%ebp
085fc9dd +0x0b6f:  sub    $0x18,%esp
085fc9e0 +0x0b72:  mov    0x8(%ebp),%eax
085fc9e3 +0x0b75:  mov    %eax,(%esp)
085fc9e6 +0x0b78:  call   085fcd76 <+0xf08>
085fc9eb +0x0b7d:  mov    0x8(%ebp),%eax
085fc9ee +0x0b80:  movl   $0x0,0x4(%eax)
085fc9f5 +0x0b87:  mov    0x8(%ebp),%eax
085fc9f8 +0x0b8a:  movl   $0x0,0x8(%eax)
085fc9ff +0x0b91:  mov    0x8(%ebp),%eax
085fca02 +0x0b94:  movl   $0x0,0xc(%eax)
085fca09 +0x0b9b:  mov    0x8(%ebp),%eax
085fca0c +0x0b9e:  movl   $0x0,0x10(%eax)
085fca13 +0x0ba5:  mov    0x8(%ebp),%eax
085fca16 +0x0ba8:  movl   $0x0,0x14(%eax)
085fca1d +0x0baf:  mov    0x8(%ebp),%eax
085fca20 +0x0bb2:  mov    %eax,(%esp)
085fca23 +0x0bb5:  call   085fcd8a <+0xf1c>
085fca28 +0x0bba:  leave
085fca29 +0x0bbb:  ret
085fca2a +0x0bbc:  push   %ebp
085fca2b +0x0bbd:  mov    %esp,%ebp
085fca2d +0x0bbf:  pop    %ebp
085fca2e +0x0bc0:  ret
085fca2f +0x0bc1:  push   %ebp
085fca30 +0x0bc2:  mov    %esp,%ebp
085fca32 +0x0bc4:  mov    0x8(%ebp),%eax
085fca35 +0x0bc7:  mov    0xc(%eax),%eax
085fca38 +0x0bca:  pop    %ebp
085fca39 +0x0bcb:  ret
085fca3a +0x0bcc:  push   %ebp
085fca3b +0x0bcd:  mov    %esp,%ebp
085fca3d +0x0bcf:  mov    0x8(%ebp),%eax
085fca40 +0x0bd2:  mov    0x8(%eax),%eax
085fca43 +0x0bd5:  pop    %ebp
085fca44 +0x0bd6:  ret
085fca45 +0x0bd7:  nop
085fca46 +0x0bd8:  push   %ebp
085fca47 +0x0bd9:  mov    %esp,%ebp
085fca49 +0x0bdb:  sub    $0x18,%esp
085fca4c +0x0bde:  mov    0x8(%ebp),%eax
085fca4f +0x0be1:  mov    %eax,(%esp)
085fca52 +0x0be4:  call   085fcdbc <+0xf4e>
085fca57 +0x0be9:  mov    0xc(%ebp),%edx
085fca5a +0x0bec:  mov    %edx,0x4(%esp)
085fca5e +0x0bf0:  mov    %eax,(%esp)
085fca61 +0x0bf3:  call   085fcdca <+0xf5c>
085fca66 +0x0bf8:  mov    0xc(%ebp),%eax
085fca69 +0x0bfb:  mov    %eax,0x4(%esp)
085fca6d +0x0bff:  mov    0x8(%ebp),%eax
085fca70 +0x0c02:  mov    %eax,(%esp)
085fca73 +0x0c05:  call   085fcdde <+0xf70>
085fca78 +0x0c0a:  leave
085fca79 +0x0c0b:  ret
085fca7a +0x0c0c:  push   %ebp
085fca7b +0x0c0d:  mov    %esp,%ebp
085fca7d +0x0c0f:  mov    0x8(%ebp),%eax
085fca80 +0x0c12:  add    $0x4,%eax
085fca83 +0x0c15:  pop    %ebp
085fca84 +0x0c16:  ret
085fca85 +0x0c17:  nop
085fca86 +0x0c18:  push   %ebp
085fca87 +0x0c19:  mov    %esp,%ebp
085fca89 +0x0c1b:  mov    0xc(%ebp),%eax
085fca8c +0x0c1e:  pop    %ebp
085fca8d +0x0c1f:  ret
085fca8e +0x0c20:  push   %ebp
085fca8f +0x0c21:  mov    %esp,%ebp
085fca91 +0x0c23:  sub    $0x28,%esp
085fca94 +0x0c26:  mov    0x8(%ebp),%eax
085fca97 +0x0c29:  mov    %eax,(%esp)
085fca9a +0x0c2c:  call   085fce00 <+0xf92>
085fca9f +0x0c31:  mov    %eax,0x4(%esp)
085fcaa3 +0x0c35:  lea    -0x9(%ebp),%eax
085fcaa6 +0x0c38:  mov    %eax,(%esp)
085fcaa9 +0x0c3b:  call   085fca86 <+0xc18>
085fcaae +0x0c40:  leave
085fcaaf +0x0c41:  ret
085fcab0 +0x0c42:  push   %ebp
085fcab1 +0x0c43:  mov    %esp,%ebp
085fcab3 +0x0c45:  mov    0xc(%ebp),%eax
085fcab6 +0x0c48:  mov    (%eax),%eax
085fcab8 +0x0c4a:  mov    %eax,%edx
085fcaba +0x0c4c:  mov    0x10(%ebp),%eax
085fcabd +0x0c4f:  mov    (%eax),%eax
085fcabf +0x0c51:  cmp    %eax,%edx
085fcac1 +0x0c53:  setl   %al
085fcac4 +0x0c56:  pop    %ebp
085fcac5 +0x0c57:  ret
085fcac6 +0x0c58:  push   %ebp
085fcac7 +0x0c59:  mov    %esp,%ebp
085fcac9 +0x0c5b:  mov    0xc(%ebp),%edx
085fcacc +0x0c5e:  mov    0x8(%ebp),%eax
085fcacf +0x0c61:  mov    %edx,(%eax)
085fcad1 +0x0c63:  pop    %ebp
085fcad2 +0x0c64:  ret
085fcad3 +0x0c65:  nop
085fcad4 +0x0c66:  push   %ebp
085fcad5 +0x0c67:  mov    %esp,%ebp
085fcad7 +0x0c69:  mov    0x8(%ebp),%eax
085fcada +0x0c6c:  mov    (%eax),%edx
085fcadc +0x0c6e:  mov    0xc(%ebp),%eax
085fcadf +0x0c71:  mov    (%eax),%eax
085fcae1 +0x0c73:  cmp    %eax,%edx
085fcae3 +0x0c75:  sete   %al
085fcae6 +0x0c78:  pop    %ebp
085fcae7 +0x0c79:  ret
085fcae8 +0x0c7a:  push   %ebp
085fcae9 +0x0c7b:  mov    %esp,%ebp
085fcaeb +0x0c7d:  push   %esi
085fcaec +0x0c7e:  push   %ebx
085fcaed +0x0c7f:  sub    $0x20,%esp
085fcaf0 +0x0c82:  mov    0x8(%ebp),%esi
085fcaf3 +0x0c85:  cmpl   $0x0,0x10(%ebp)
085fcaf7 +0x0c89:  jne    085fcb3f <+0xcd1>
085fcaf9 +0x0c8b:  mov    0xc(%ebp),%eax
085fcafc +0x0c8e:  mov    %eax,(%esp)
085fcaff +0x0c91:  call   085fca7a <+0xc0c>
085fcb04 +0x0c96:  cmp    0x14(%ebp),%eax
085fcb07 +0x0c99:  je     085fcb3f <+0xcd1>
085fcb09 +0x0c9b:  mov    0x14(%ebp),%eax
085fcb0c +0x0c9e:  mov    %eax,(%esp)
085fcb0f +0x0ca1:  call   085fcbfb <+0xd8d>
085fcb14 +0x0ca6:  mov    %eax,%ebx
085fcb16 +0x0ca8:  mov    0x18(%ebp),%eax
085fcb19 +0x0cab:  mov    %eax,0x4(%esp)
085fcb1d +0x0caf:  lea    -0xe(%ebp),%eax
085fcb20 +0x0cb2:  mov    %eax,(%esp)
085fcb23 +0x0cb5:  call   085fca86 <+0xc18>
085fcb28 +0x0cba:  mov    0xc(%ebp),%edx
085fcb2b +0x0cbd:  mov    %ebx,0x8(%esp)
085fcb2f +0x0cc1:  mov    %eax,0x4(%esp)
085fcb33 +0x0cc5:  mov    %edx,(%esp)
085fcb36 +0x0cc8:  call   085fcab0 <+0xc42>
085fcb3b +0x0ccd:  test   %al,%al
085fcb3d +0x0ccf:  je     085fcb46 <+0xcd8>
085fcb3f +0x0cd1:  mov    $0x1,%eax
085fcb44 +0x0cd6:  jmp    085fcb4b <+0xcdd>
085fcb46 +0x0cd8:  mov    $0x0,%eax
085fcb4b +0x0cdd:  mov    %al,-0xd(%ebp)
085fcb4e +0x0ce0:  mov    0x18(%ebp),%eax
085fcb51 +0x0ce3:  mov    %eax,0x4(%esp)
085fcb55 +0x0ce7:  mov    0xc(%ebp),%eax
085fcb58 +0x0cea:  mov    %eax,(%esp)
085fcb5b +0x0ced:  call   085fce0c <+0xf9e>
085fcb60 +0x0cf2:  mov    %eax,-0xc(%ebp)
085fcb63 +0x0cf5:  mov    0xc(%ebp),%eax
085fcb66 +0x0cf8:  lea    0x4(%eax),%ecx
085fcb69 +0x0cfb:  mov    -0xc(%ebp),%edx
085fcb6c +0x0cfe:  movzbl -0xd(%ebp),%eax
085fcb70 +0x0d02:  mov    %ecx,0xc(%esp)
085fcb74 +0x0d06:  mov    0x14(%ebp),%ecx
085fcb77 +0x0d09:  mov    %ecx,0x8(%esp)
085fcb7b +0x0d0d:  mov    %edx,0x4(%esp)
085fcb7f +0x0d11:  mov    %eax,(%esp)
085fcb82 +0x0d14:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
085fcb87 +0x0d19:  mov    0xc(%ebp),%eax
085fcb8a +0x0d1c:  mov    0x14(%eax),%eax
085fcb8d +0x0d1f:  lea    0x1(%eax),%edx
085fcb90 +0x0d22:  mov    0xc(%ebp),%eax
085fcb93 +0x0d25:  mov    %edx,0x14(%eax)
085fcb96 +0x0d28:  mov    -0xc(%ebp),%eax
085fcb99 +0x0d2b:  mov    %eax,0x4(%esp)
085fcb9d +0x0d2f:  mov    %esi,(%esp)
085fcba0 +0x0d32:  call   085fcac6 <+0xc58>
085fcba5 +0x0d37:  mov    %esi,%eax
085fcba7 +0x0d39:  add    $0x20,%esp
085fcbaa +0x0d3c:  pop    %ebx
085fcbab +0x0d3d:  pop    %esi
085fcbac +0x0d3e:  pop    %ebp
085fcbad +0x0d3f:  ret    $0x4
085fcbb0 +0x0d42:  push   %ebp
085fcbb1 +0x0d43:  mov    %esp,%ebp
085fcbb3 +0x0d45:  sub    $0x18,%esp
085fcbb6 +0x0d48:  mov    0xc(%ebp),%eax
085fcbb9 +0x0d4b:  mov    %eax,(%esp)
085fcbbc +0x0d4e:  call   085fce8d <+0x101f>
085fcbc1 +0x0d53:  mov    0x8(%ebp),%edx
085fcbc4 +0x0d56:  mov    (%eax),%eax
085fcbc6 +0x0d58:  mov    %eax,(%edx)
085fcbc8 +0x0d5a:  mov    0x10(%ebp),%eax
085fcbcb +0x0d5d:  mov    %eax,(%esp)
085fcbce +0x0d60:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
085fcbd3 +0x0d65:  movzbl (%eax),%edx
085fcbd6 +0x0d68:  mov    0x8(%ebp),%eax
085fcbd9 +0x0d6b:  mov    %dl,0x4(%eax)
085fcbdc +0x0d6e:  leave
085fcbdd +0x0d6f:  ret
085fcbde +0x0d70:  push   %ebp
085fcbdf +0x0d71:  mov    %esp,%ebp
085fcbe1 +0x0d73:  sub    $0x18,%esp
085fcbe4 +0x0d76:  mov    0x8(%ebp),%eax
085fcbe7 +0x0d79:  mov    (%eax),%eax
085fcbe9 +0x0d7b:  mov    %eax,(%esp)
085fcbec +0x0d7e:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
085fcbf1 +0x0d83:  mov    0x8(%ebp),%edx
085fcbf4 +0x0d86:  mov    %eax,(%edx)
085fcbf6 +0x0d88:  mov    0x8(%ebp),%eax
085fcbf9 +0x0d8b:  leave
085fcbfa +0x0d8c:  ret
085fcbfb +0x0d8d:  push   %ebp
085fcbfc +0x0d8e:  mov    %esp,%ebp
085fcbfe +0x0d90:  sub    $0x28,%esp
085fcc01 +0x0d93:  mov    0x8(%ebp),%eax
085fcc04 +0x0d96:  mov    %eax,(%esp)
085fcc07 +0x0d99:  call   085fce95 <+0x1027>
085fcc0c +0x0d9e:  mov    %eax,0x4(%esp)
085fcc10 +0x0da2:  lea    -0x9(%ebp),%eax
085fcc13 +0x0da5:  mov    %eax,(%esp)
085fcc16 +0x0da8:  call   085fca86 <+0xc18>
085fcc1b +0x0dad:  leave
085fcc1c +0x0dae:  ret
085fcc1d +0x0daf:  nop
085fcc1e +0x0db0:  push   %ebp
085fcc1f +0x0db1:  mov    %esp,%ebp
085fcc21 +0x0db3:  sub    $0x18,%esp
085fcc24 +0x0db6:  mov    0xc(%ebp),%eax
085fcc27 +0x0db9:  mov    %eax,(%esp)
085fcc2a +0x0dbc:  call   085fcea0 <+0x1032>
085fcc2f +0x0dc1:  mov    0x8(%ebp),%edx
085fcc32 +0x0dc4:  mov    (%eax),%eax
085fcc34 +0x0dc6:  mov    %eax,(%edx)
085fcc36 +0x0dc8:  mov    0x10(%ebp),%eax
085fcc39 +0x0dcb:  mov    %eax,(%esp)
085fcc3c +0x0dce:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
085fcc41 +0x0dd3:  movzbl (%eax),%edx
085fcc44 +0x0dd6:  mov    0x8(%ebp),%eax
085fcc47 +0x0dd9:  mov    %dl,0x4(%eax)
085fcc4a +0x0ddc:  leave
085fcc4b +0x0ddd:  ret
085fcc4c +0x0dde:  push   %ebp
085fcc4d +0x0ddf:  mov    %esp,%ebp
085fcc4f +0x0de1:  mov    0x8(%ebp),%eax
085fcc52 +0x0de4:  add    $0xc,%eax
085fcc55 +0x0de7:  pop    %ebp
085fcc56 +0x0de8:  ret
085fcc57 +0x0de9:  nop
085fcc58 +0x0dea:  push   %ebp
085fcc59 +0x0deb:  mov    %esp,%ebp
085fcc5b +0x0ded:  mov    0x8(%ebp),%eax
085fcc5e +0x0df0:  add    $0x8,%eax
085fcc61 +0x0df3:  pop    %ebp
085fcc62 +0x0df4:  ret
085fcc63 +0x0df5:  nop
085fcc64 +0x0df6:  push   %ebp
085fcc65 +0x0df7:  mov    %esp,%ebp
085fcc67 +0x0df9:  mov    0x8(%ebp),%eax
085fcc6a +0x0dfc:  add    $0x10,%eax
085fcc6d +0x0dff:  pop    %ebp
085fcc6e +0x0e00:  ret
085fcc6f +0x0e01:  nop
085fcc70 +0x0e02:  push   %ebp
085fcc71 +0x0e03:  mov    %esp,%ebp
085fcc73 +0x0e05:  push   %ebx
085fcc74 +0x0e06:  sub    $0x14,%esp
085fcc77 +0x0e09:  mov    0x8(%ebp),%ebx
085fcc7a +0x0e0c:  jmp    085fccc8 <+0xe5a>
085fcc7c +0x0e0e:  mov    0x10(%ebp),%eax
085fcc7f +0x0e11:  mov    %eax,(%esp)
085fcc82 +0x0e14:  call   085fca8e <+0xc20>
085fcc87 +0x0e19:  mov    0xc(%ebp),%edx
085fcc8a +0x0e1c:  mov    0x18(%ebp),%ecx
085fcc8d +0x0e1f:  mov    %ecx,0x8(%esp)
085fcc91 +0x0e23:  mov    %eax,0x4(%esp)
085fcc95 +0x0e27:  mov    %edx,(%esp)
085fcc98 +0x0e2a:  call   085fcab0 <+0xc42>
085fcc9d +0x0e2f:  xor    $0x1,%eax
085fcca0 +0x0e32:  test   %al,%al
085fcca2 +0x0e34:  je     085fccba <+0xe4c>
085fcca4 +0x0e36:  mov    0x10(%ebp),%eax
085fcca7 +0x0e39:  mov    %eax,0x14(%ebp)
085fccaa +0x0e3c:  mov    0x10(%ebp),%eax
085fccad +0x0e3f:  mov    %eax,(%esp)
085fccb0 +0x0e42:  call   085fca3a <+0xbcc>
085fccb5 +0x0e47:  mov    %eax,0x10(%ebp)
085fccb8 +0x0e4a:  jmp    085fccc8 <+0xe5a>
085fccba +0x0e4c:  mov    0x10(%ebp),%eax
085fccbd +0x0e4f:  mov    %eax,(%esp)
085fccc0 +0x0e52:  call   085fca2f <+0xbc1>
085fccc5 +0x0e57:  mov    %eax,0x10(%ebp)
085fccc8 +0x0e5a:  cmpl   $0x0,0x10(%ebp)
085fcccc +0x0e5e:  setne  %al
085fcccf +0x0e61:  test   %al,%al
085fccd1 +0x0e63:  jne    085fcc7c <+0xe0e>
085fccd3 +0x0e65:  mov    0x14(%ebp),%eax
085fccd6 +0x0e68:  mov    %eax,0x4(%esp)
085fccda +0x0e6c:  mov    %ebx,(%esp)
085fccdd +0x0e6f:  call   085fcac6 <+0xc58>
085fcce2 +0x0e74:  mov    %ebx,%eax
085fcce4 +0x0e76:  add    $0x14,%esp
085fcce7 +0x0e79:  pop    %ebx
085fcce8 +0x0e7a:  pop    %ebp
085fcce9 +0x0e7b:  ret    $0x4
085fccec +0x0e7e:  push   %ebp
085fcced +0x0e7f:  mov    %esp,%ebp
085fccef +0x0e81:  sub    $0x18,%esp
085fccf2 +0x0e84:  mov    0x8(%ebp),%eax
085fccf5 +0x0e87:  mov    %eax,(%esp)
085fccf8 +0x0e8a:  call   085fcea8 <+0x103a>
085fccfd +0x0e8f:  leave
085fccfe +0x0e90:  ret
085fccff +0x0e91:  nop
085fcd00 +0x0e92:  push   %ebp
085fcd01 +0x0e93:  mov    %esp,%ebp
085fcd03 +0x0e95:  mov    0x8(%ebp),%eax
085fcd06 +0x0e98:  movl   $0x0,0x4(%eax)
085fcd0d +0x0e9f:  mov    0x8(%ebp),%eax
085fcd10 +0x0ea2:  movl   $0x0,0x8(%eax)
085fcd17 +0x0ea9:  mov    0x8(%ebp),%eax
085fcd1a +0x0eac:  lea    0x4(%eax),%edx
085fcd1d +0x0eaf:  mov    0x8(%ebp),%eax
085fcd20 +0x0eb2:  mov    %edx,0xc(%eax)
085fcd23 +0x0eb5:  mov    0x8(%ebp),%eax
085fcd26 +0x0eb8:  lea    0x4(%eax),%edx
085fcd29 +0x0ebb:  mov    0x8(%ebp),%eax
085fcd2c +0x0ebe:  mov    %edx,0x10(%eax)
085fcd2f +0x0ec1:  pop    %ebp
085fcd30 +0x0ec2:  ret
085fcd31 +0x0ec3:  nop
085fcd32 +0x0ec4:  push   %ebp
085fcd33 +0x0ec5:  mov    %esp,%ebp
085fcd35 +0x0ec7:  mov    0x8(%ebp),%eax
085fcd38 +0x0eca:  pop    %ebp
085fcd39 +0x0ecb:  ret
085fcd3a +0x0ecc:  push   %ebp
085fcd3b +0x0ecd:  mov    %esp,%ebp
085fcd3d +0x0ecf:  pop    %ebp
085fcd3e +0x0ed0:  ret
085fcd3f +0x0ed1:  nop
085fcd40 +0x0ed2:  push   %ebp
085fcd41 +0x0ed3:  mov    %esp,%ebp
085fcd43 +0x0ed5:  sub    $0x18,%esp
085fcd46 +0x0ed8:  mov    0xc(%ebp),%eax
085fcd49 +0x0edb:  mov    %eax,(%esp)
085fcd4c +0x0ede:  call   085fcd3a <+0xecc>
085fcd51 +0x0ee3:  leave
085fcd52 +0x0ee4:  ret
085fcd53 +0x0ee5:  nop
085fcd54 +0x0ee6:  push   %ebp
085fcd55 +0x0ee7:  mov    %esp,%ebp
085fcd57 +0x0ee9:  sub    $0x18,%esp
085fcd5a +0x0eec:  mov    0x8(%ebp),%eax
085fcd5d +0x0eef:  movl   $0x1,0x8(%esp)
085fcd65 +0x0ef7:  mov    0xc(%ebp),%edx
085fcd68 +0x0efa:  mov    %edx,0x4(%esp)
085fcd6c +0x0efe:  mov    %eax,(%esp)
085fcd6f +0x0f01:  call   085fceae <+0x1040>
085fcd74 +0x0f06:  leave
085fcd75 +0x0f07:  ret
085fcd76 +0x0f08:  push   %ebp
085fcd77 +0x0f09:  mov    %esp,%ebp
085fcd79 +0x0f0b:  sub    $0x18,%esp
085fcd7c +0x0f0e:  mov    0x8(%ebp),%eax
085fcd7f +0x0f11:  mov    %eax,(%esp)
085fcd82 +0x0f14:  call   085fcec2 <+0x1054>
085fcd87 +0x0f19:  leave
085fcd88 +0x0f1a:  ret
085fcd89 +0x0f1b:  nop
085fcd8a +0x0f1c:  push   %ebp
085fcd8b +0x0f1d:  mov    %esp,%ebp
085fcd8d +0x0f1f:  mov    0x8(%ebp),%eax
085fcd90 +0x0f22:  movl   $0x0,0x4(%eax)
085fcd97 +0x0f29:  mov    0x8(%ebp),%eax
085fcd9a +0x0f2c:  movl   $0x0,0x8(%eax)
085fcda1 +0x0f33:  mov    0x8(%ebp),%eax
085fcda4 +0x0f36:  lea    0x4(%eax),%edx
085fcda7 +0x0f39:  mov    0x8(%ebp),%eax
085fcdaa +0x0f3c:  mov    %edx,0xc(%eax)
085fcdad +0x0f3f:  mov    0x8(%ebp),%eax
085fcdb0 +0x0f42:  lea    0x4(%eax),%edx
085fcdb3 +0x0f45:  mov    0x8(%ebp),%eax
085fcdb6 +0x0f48:  mov    %edx,0x10(%eax)
085fcdb9 +0x0f4b:  pop    %ebp
085fcdba +0x0f4c:  ret
085fcdbb +0x0f4d:  nop
085fcdbc +0x0f4e:  push   %ebp
085fcdbd +0x0f4f:  mov    %esp,%ebp
085fcdbf +0x0f51:  mov    0x8(%ebp),%eax
085fcdc2 +0x0f54:  pop    %ebp
085fcdc3 +0x0f55:  ret
085fcdc4 +0x0f56:  push   %ebp
085fcdc5 +0x0f57:  mov    %esp,%ebp
085fcdc7 +0x0f59:  pop    %ebp
085fcdc8 +0x0f5a:  ret
085fcdc9 +0x0f5b:  nop
085fcdca +0x0f5c:  push   %ebp
085fcdcb +0x0f5d:  mov    %esp,%ebp
085fcdcd +0x0f5f:  sub    $0x18,%esp
085fcdd0 +0x0f62:  mov    0xc(%ebp),%eax
085fcdd3 +0x0f65:  mov    %eax,(%esp)
085fcdd6 +0x0f68:  call   085fcdc4 <+0xf56>
085fcddb +0x0f6d:  leave
085fcddc +0x0f6e:  ret
085fcddd +0x0f6f:  nop
085fcdde +0x0f70:  push   %ebp
085fcddf +0x0f71:  mov    %esp,%ebp
085fcde1 +0x0f73:  sub    $0x18,%esp
085fcde4 +0x0f76:  mov    0x8(%ebp),%eax
085fcde7 +0x0f79:  movl   $0x1,0x8(%esp)
085fcdef +0x0f81:  mov    0xc(%ebp),%edx
085fcdf2 +0x0f84:  mov    %edx,0x4(%esp)
085fcdf6 +0x0f88:  mov    %eax,(%esp)
085fcdf9 +0x0f8b:  call   085fcec8 <+0x105a>
085fcdfe +0x0f90:  leave
085fcdff +0x0f91:  ret
085fce00 +0x0f92:  push   %ebp
085fce01 +0x0f93:  mov    %esp,%ebp
085fce03 +0x0f95:  mov    0x8(%ebp),%eax
085fce06 +0x0f98:  add    $0x10,%eax
085fce09 +0x0f9b:  pop    %ebp
085fce0a +0x0f9c:  ret
085fce0b +0x0f9d:  nop
085fce0c +0x0f9e:  push   %ebp
085fce0d +0x0f9f:  mov    %esp,%ebp
085fce0f +0x0fa1:  push   %esi
085fce10 +0x0fa2:  push   %ebx
085fce11 +0x0fa3:  sub    $0x20,%esp
085fce14 +0x0fa6:  mov    0x8(%ebp),%eax
085fce17 +0x0fa9:  mov    %eax,(%esp)
085fce1a +0x0fac:  call   085fcedc <+0x106e>
085fce1f +0x0fb1:  mov    %eax,-0xc(%ebp)
085fce22 +0x0fb4:  mov    0xc(%ebp),%eax
085fce25 +0x0fb7:  mov    %eax,(%esp)
085fce28 +0x0fba:  call   085fceff <+0x1091>
085fce2d +0x0fbf:  mov    %eax,%ebx
085fce2f +0x0fc1:  mov    0x8(%ebp),%eax
085fce32 +0x0fc4:  mov    %eax,(%esp)
085fce35 +0x0fc7:  call   085fcdbc <+0xf4e>
085fce3a +0x0fcc:  mov    %ebx,0x8(%esp)
085fce3e +0x0fd0:  mov    -0xc(%ebp),%edx
085fce41 +0x0fd3:  mov    %edx,0x4(%esp)
085fce45 +0x0fd7:  mov    %eax,(%esp)
085fce48 +0x0fda:  call   085fcf08 <+0x109a>
085fce4d +0x0fdf:  jmp    085fce83 <+0x1015>
085fce4f +0x0fe1:  mov    %eax,(%esp)
085fce52 +0x0fe4:  call   08725ce0 <__cxa_begin_catch>
085fce57 +0x0fe9:  mov    -0xc(%ebp),%eax
085fce5a +0x0fec:  mov    %eax,0x4(%esp)
085fce5e +0x0ff0:  mov    0x8(%ebp),%eax
085fce61 +0x0ff3:  mov    %eax,(%esp)
085fce64 +0x0ff6:  call   085fcdde <+0xf70>
085fce69 +0x0ffb:  call   08724be0 <__cxa_rethrow>
085fce6e +0x1000:  mov    %edx,%ebx
085fce70 +0x1002:  mov    %eax,%esi
085fce72 +0x1004:  call   08725c30 <__cxa_end_catch>
085fce77 +0x1009:  mov    %esi,%eax
085fce79 +0x100b:  mov    %ebx,%edx
085fce7b +0x100d:  mov    %eax,(%esp)
085fce7e +0x1010:  call   08ae3750 <_Unwind_Resume>
085fce83 +0x1015:  mov    -0xc(%ebp),%eax
085fce86 +0x1018:  add    $0x20,%esp
085fce89 +0x101b:  pop    %ebx
085fce8a +0x101c:  pop    %esi
085fce8b +0x101d:  pop    %ebp
085fce8c +0x101e:  ret
085fce8d +0x101f:  push   %ebp
085fce8e +0x1020:  mov    %esp,%ebp
085fce90 +0x1022:  mov    0x8(%ebp),%eax
085fce93 +0x1025:  pop    %ebp
085fce94 +0x1026:  ret
085fce95 +0x1027:  push   %ebp
085fce96 +0x1028:  mov    %esp,%ebp
085fce98 +0x102a:  mov    0x8(%ebp),%eax
085fce9b +0x102d:  add    $0x10,%eax
085fce9e +0x1030:  pop    %ebp
085fce9f +0x1031:  ret
085fcea0 +0x1032:  push   %ebp
085fcea1 +0x1033:  mov    %esp,%ebp
085fcea3 +0x1035:  mov    0x8(%ebp),%eax
085fcea6 +0x1038:  pop    %ebp
085fcea7 +0x1039:  ret
085fcea8 +0x103a:  push   %ebp
085fcea9 +0x103b:  mov    %esp,%ebp
085fceab +0x103d:  pop    %ebp
085fceac +0x103e:  ret
085fcead +0x103f:  nop
085fceae +0x1040:  push   %ebp
085fceaf +0x1041:  mov    %esp,%ebp
085fceb1 +0x1043:  sub    $0x18,%esp
085fceb4 +0x1046:  mov    0xc(%ebp),%eax
085fceb7 +0x1049:  mov    %eax,(%esp)
085fceba +0x104c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085fcebf +0x1051:  leave
085fcec0 +0x1052:  ret
085fcec1 +0x1053:  nop
085fcec2 +0x1054:  push   %ebp
085fcec3 +0x1055:  mov    %esp,%ebp
085fcec5 +0x1057:  pop    %ebp
085fcec6 +0x1058:  ret
085fcec7 +0x1059:  nop
085fcec8 +0x105a:  push   %ebp
085fcec9 +0x105b:  mov    %esp,%ebp
085fcecb +0x105d:  sub    $0x18,%esp
085fcece +0x1060:  mov    0xc(%ebp),%eax
085fced1 +0x1063:  mov    %eax,(%esp)
085fced4 +0x1066:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085fced9 +0x106b:  leave
085fceda +0x106c:  ret
085fcedb +0x106d:  nop
085fcedc +0x106e:  push   %ebp
085fcedd +0x106f:  mov    %esp,%ebp
085fcedf +0x1071:  sub    $0x18,%esp
085fcee2 +0x1074:  mov    0x8(%ebp),%eax
085fcee5 +0x1077:  movl   $0x0,0x8(%esp)
085fceed +0x107f:  movl   $0x1,0x4(%esp)
085fcef5 +0x1087:  mov    %eax,(%esp)
085fcef8 +0x108a:  call   085fcf48 <+0x10da>
085fcefd +0x108f:  leave
085fcefe +0x1090:  ret
085fceff +0x1091:  push   %ebp
085fcf00 +0x1092:  mov    %esp,%ebp
085fcf02 +0x1094:  mov    0x8(%ebp),%eax
085fcf05 +0x1097:  pop    %ebp
085fcf06 +0x1098:  ret
085fcf07 +0x1099:  nop
085fcf08 +0x109a:  push   %ebp
085fcf09 +0x109b:  mov    %esp,%ebp
085fcf0b +0x109d:  push   %ebx
085fcf0c +0x109e:  sub    $0x14,%esp
085fcf0f +0x10a1:  mov    0x10(%ebp),%eax
085fcf12 +0x10a4:  mov    %eax,(%esp)
085fcf15 +0x10a7:  call   085fceff <+0x1091>
085fcf1a +0x10ac:  mov    %eax,%ebx
085fcf1c +0x10ae:  mov    0xc(%ebp),%eax
085fcf1f +0x10b1:  mov    %eax,0x4(%esp)
085fcf23 +0x10b5:  movl   $0x18,(%esp)
085fcf2a +0x10bc:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
085fcf2f +0x10c1:  mov    %eax,%edx
085fcf31 +0x10c3:  test   %edx,%edx
085fcf33 +0x10c5:  je     085fcf41 <+0x10d3>
085fcf35 +0x10c7:  mov    %ebx,0x4(%esp)
085fcf39 +0x10cb:  mov    %eax,(%esp)
085fcf3c +0x10ce:  call   085fcf86 <+0x1118>
085fcf41 +0x10d3:  add    $0x14,%esp
085fcf44 +0x10d6:  pop    %ebx
085fcf45 +0x10d7:  pop    %ebp
085fcf46 +0x10d8:  ret
085fcf47 +0x10d9:  nop
085fcf48 +0x10da:  push   %ebp
085fcf49 +0x10db:  mov    %esp,%ebp
085fcf4b +0x10dd:  sub    $0x18,%esp
085fcf4e +0x10e0:  mov    0x8(%ebp),%eax
085fcf51 +0x10e3:  mov    %eax,(%esp)
085fcf54 +0x10e6:  call   085fcfce <+0x1160>
085fcf59 +0x10eb:  cmp    0xc(%ebp),%eax
085fcf5c +0x10ee:  setb   %al
085fcf5f +0x10f1:  movzbl %al,%eax
085fcf62 +0x10f4:  test   %eax,%eax
085fcf64 +0x10f6:  setne  %al
085fcf67 +0x10f9:  test   %al,%al
085fcf69 +0x10fb:  je     085fcf70 <+0x1102>
085fcf6b +0x10fd:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
085fcf70 +0x1102:  mov    0xc(%ebp),%edx
085fcf73 +0x1105:  mov    %edx,%eax
085fcf75 +0x1107:  add    %eax,%eax
085fcf77 +0x1109:  add    %edx,%eax
085fcf79 +0x110b:  shl    $0x3,%eax
085fcf7c +0x110e:  mov    %eax,(%esp)
085fcf7f +0x1111:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085fcf84 +0x1116:  leave
085fcf85 +0x1117:  ret
085fcf86 +0x1118:  push   %ebp
085fcf87 +0x1119:  mov    %esp,%ebp
085fcf89 +0x111b:  sub    $0x18,%esp
085fcf8c +0x111e:  mov    0x8(%ebp),%eax
085fcf8f +0x1121:  movl   $0x0,(%eax)
085fcf95 +0x1127:  mov    0x8(%ebp),%eax
085fcf98 +0x112a:  movl   $0x0,0x4(%eax)
085fcf9f +0x1131:  mov    0x8(%ebp),%eax
085fcfa2 +0x1134:  movl   $0x0,0x8(%eax)
085fcfa9 +0x113b:  mov    0x8(%ebp),%eax
085fcfac +0x113e:  movl   $0x0,0xc(%eax)
085fcfb3 +0x1145:  mov    0xc(%ebp),%eax
085fcfb6 +0x1148:  mov    %eax,(%esp)
085fcfb9 +0x114b:  call   085fceff <+0x1091>
085fcfbe +0x1150:  mov    0x8(%ebp),%ecx
085fcfc1 +0x1153:  mov    0x4(%eax),%edx
085fcfc4 +0x1156:  mov    (%eax),%eax
085fcfc6 +0x1158:  mov    %eax,0x10(%ecx)
085fcfc9 +0x115b:  mov    %edx,0x14(%ecx)
085fcfcc +0x115e:  leave
085fcfcd +0x115f:  ret
085fcfce +0x1160:  push   %ebp
085fcfcf +0x1161:  mov    %esp,%ebp
085fcfd1 +0x1163:  mov    $0xaaaaaaa,%eax
085fcfd6 +0x1168:  pop    %ebp
085fcfd7 +0x1169:  ret
```

## 反编译 C

```c
// <global>::global @ 0x85fbe6e

/* secretshop::CSecretShop::CSecretShop() */

void secretshop::CSecretShop::_GLOBAL__I_CSecretShop(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
