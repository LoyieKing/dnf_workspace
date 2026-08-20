# loadFromBinary

`_ZN14StringResource14loadFromBinaryEPKhiP10CharString`

`StringResource::loadFromBinary(unsigned char const*, int, CharString*)`

| 类 | 地址 |
|---|---|
| `StringResource` | `0x08ad4e04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad4e04  _ZN14StringResource14loadFromBinaryEPKhiP10CharString
#           StringResource::loadFromBinary(unsigned char const*, int, CharString*)
# range [0x08ad4e04, 0x08ad52a1]
08ad4e04 +0x000:  push   %ebp
08ad4e05 +0x001:  mov    %esp,%ebp
08ad4e07 +0x003:  push   %esi
08ad4e08 +0x004:  push   %ebx
08ad4e09 +0x005:  sub    $0x60,%esp
08ad4e0c +0x008:  lea    -0x48(%ebp),%eax
08ad4e0f +0x00b:  mov    %eax,(%esp)
08ad4e12 +0x00e:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ad4e17 +0x013:  cmpl   $0x4,0x10(%ebp)
08ad4e1b +0x017:  jle    08ad4fd7 <+0x1d3>
08ad4e21 +0x01d:  mov    0xc(%ebp),%eax
08ad4e24 +0x020:  movzbl (%eax),%eax
08ad4e27 +0x023:  cmp    $0x53,%al
08ad4e29 +0x025:  jne    08ad4fd7 <+0x1d3>
08ad4e2f +0x02b:  mov    0xc(%ebp),%eax
08ad4e32 +0x02e:  add    $0x1,%eax
08ad4e35 +0x031:  movzbl (%eax),%eax
08ad4e38 +0x034:  cmp    $0x43,%al
08ad4e3a +0x036:  jne    08ad4fd7 <+0x1d3>
08ad4e40 +0x03c:  mov    0xc(%ebp),%eax
08ad4e43 +0x03f:  add    $0x2,%eax
08ad4e46 +0x042:  movzbl (%eax),%eax
08ad4e49 +0x045:  cmp    $0x30,%al
08ad4e4b +0x047:  jne    08ad4fd7 <+0x1d3>
08ad4e51 +0x04d:  mov    0xc(%ebp),%eax
08ad4e54 +0x050:  add    $0x3,%eax
08ad4e57 +0x053:  movzbl (%eax),%eax
08ad4e5a +0x056:  cmp    $0x31,%al
08ad4e5c +0x058:  jne    08ad4fd7 <+0x1d3>
08ad4e62 +0x05e:  mov    0xc(%ebp),%eax
08ad4e65 +0x061:  add    $0x4,%eax
08ad4e68 +0x064:  mov    (%eax),%eax
08ad4e6a +0x066:  mov    %eax,-0x2c(%ebp)
08ad4e6d +0x069:  mov    0x10(%ebp),%eax
08ad4e70 +0x06c:  add    $0x3,%eax
08ad4e73 +0x06f:  mov    %eax,%edx
08ad4e75 +0x071:  sar    $0x1f,%edx
08ad4e78 +0x074:  shr    $0x1e,%edx
08ad4e7b +0x077:  lea    (%edx,%eax,1),%eax
08ad4e7e +0x07a:  sar    $0x2,%eax
08ad4e81 +0x07d:  shl    $0x2,%eax
08ad4e84 +0x080:  mov    %eax,-0x28(%ebp)
08ad4e87 +0x083:  movl   $0x5819af17,-0x24(%ebp)
08ad4e8e +0x08a:  mov    -0x28(%ebp),%eax
08ad4e91 +0x08d:  mov    %eax,(%esp)
08ad4e94 +0x090:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ad4e99 +0x095:  mov    %eax,-0x20(%ebp)
08ad4e9c +0x098:  mov    0x10(%ebp),%eax
08ad4e9f +0x09b:  mov    0xc(%ebp),%edx
08ad4ea2 +0x09e:  add    $0x8,%edx
08ad4ea5 +0x0a1:  mov    %eax,0x8(%esp)
08ad4ea9 +0x0a5:  mov    %edx,0x4(%esp)
08ad4ead +0x0a9:  mov    -0x20(%ebp),%eax
08ad4eb0 +0x0ac:  mov    %eax,(%esp)
08ad4eb3 +0x0af:  call   0807d8a0 <_init+0x198>
08ad4eb8 +0x0b4:  mov    -0x20(%ebp),%eax
08ad4ebb +0x0b7:  mov    %eax,-0x18(%ebp)
08ad4ebe +0x0ba:  mov    -0x24(%ebp),%eax
08ad4ec1 +0x0bd:  mov    %eax,-0x14(%ebp)
08ad4ec4 +0x0c0:  movl   $0x0,-0x10(%ebp)
08ad4ecb +0x0c7:  jmp    08ad4ef8 <+0xf4>
08ad4ecd +0x0c9:  mov    -0x10(%ebp),%eax
08ad4ed0 +0x0cc:  shl    $0x2,%eax
08ad4ed3 +0x0cf:  add    -0x18(%ebp),%eax
08ad4ed6 +0x0d2:  mov    -0x10(%ebp),%edx
08ad4ed9 +0x0d5:  shl    $0x2,%edx
08ad4edc +0x0d8:  add    -0x18(%ebp),%edx
08ad4edf +0x0db:  mov    (%edx),%edx
08ad4ee1 +0x0dd:  xor    -0x14(%ebp),%edx
08ad4ee4 +0x0e0:  mov    %edx,(%eax)
08ad4ee6 +0x0e2:  mov    -0x10(%ebp),%eax
08ad4ee9 +0x0e5:  shl    $0x2,%eax
08ad4eec +0x0e8:  add    -0x18(%ebp),%eax
08ad4eef +0x0eb:  mov    (%eax),%eax
08ad4ef1 +0x0ed:  xor    %eax,-0x14(%ebp)
08ad4ef4 +0x0f0:  addl   $0x1,-0x10(%ebp)
08ad4ef8 +0x0f4:  mov    -0x28(%ebp),%eax
08ad4efb +0x0f7:  shr    $0x2,%eax
08ad4efe +0x0fa:  cmp    -0x10(%ebp),%eax
08ad4f01 +0x0fd:  seta   %al
08ad4f04 +0x100:  test   %al,%al
08ad4f06 +0x102:  jne    08ad4ecd <+0xc9>
08ad4f08 +0x104:  lea    -0x4c(%ebp),%eax
08ad4f0b +0x107:  mov    %eax,(%esp)
08ad4f0e +0x10a:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08ad4f13 +0x10f:  mov    -0x2c(%ebp),%edx
08ad4f16 +0x112:  mov    -0x20(%ebp),%eax
08ad4f19 +0x115:  lea    -0x4c(%ebp),%ecx
08ad4f1c +0x118:  mov    %ecx,0x8(%esp)
08ad4f20 +0x11c:  mov    %edx,0x4(%esp)
08ad4f24 +0x120:  mov    %eax,(%esp)
08ad4f27 +0x123:  call   08adf893 <_Z15convertFromUtf8PKciP10WideString>  ; convertFromUtf8(char const*, int, WideString*)
08ad4f2c +0x128:  mov    %al,-0x19(%ebp)
08ad4f2f +0x12b:  cmpl   $0x0,-0x20(%ebp)
08ad4f33 +0x12f:  je     08ad4f40 <+0x13c>
08ad4f35 +0x131:  mov    -0x20(%ebp),%eax
08ad4f38 +0x134:  mov    %eax,(%esp)
08ad4f3b +0x137:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ad4f40 +0x13c:  movzbl -0x19(%ebp),%eax
08ad4f44 +0x140:  xor    $0x1,%eax
08ad4f47 +0x143:  test   %al,%al
08ad4f49 +0x145:  je     08ad4f57 <+0x153>
08ad4f4b +0x147:  mov    $0x0,%ebx
08ad4f50 +0x14c:  mov    $0x0,%esi
08ad4f55 +0x151:  jmp    08ad4fbf <+0x1bb>
08ad4f57 +0x153:  lea    -0x44(%ebp),%eax
08ad4f5a +0x156:  lea    -0x4c(%ebp),%edx
08ad4f5d +0x159:  mov    %edx,0x4(%esp)
08ad4f61 +0x15d:  mov    %eax,(%esp)
08ad4f64 +0x160:  call   08adf624 <_Z19convertToCharStringRK10WideString>  ; convertToCharString(WideString const&)
08ad4f69 +0x165:  sub    $0x4,%esp
08ad4f6c +0x168:  lea    -0x44(%ebp),%eax
08ad4f6f +0x16b:  mov    %eax,0x4(%esp)
08ad4f73 +0x16f:  lea    -0x48(%ebp),%eax
08ad4f76 +0x172:  mov    %eax,(%esp)
08ad4f79 +0x175:  call   08ad70de <_ZN10CharStringaSERKS_>  ; CharString::operator=(CharString const&)
08ad4f7e +0x17a:  jmp    08ad4f95 <+0x191>
08ad4f80 +0x17c:  mov    %edx,%ebx
08ad4f82 +0x17e:  mov    %eax,%esi
08ad4f84 +0x180:  lea    -0x44(%ebp),%eax
08ad4f87 +0x183:  mov    %eax,(%esp)
08ad4f8a +0x186:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad4f8f +0x18b:  mov    %esi,%eax
08ad4f91 +0x18d:  mov    %ebx,%edx
08ad4f93 +0x18f:  jmp    08ad4fa7 <+0x1a3>
08ad4f95 +0x191:  lea    -0x44(%ebp),%eax
08ad4f98 +0x194:  mov    %eax,(%esp)
08ad4f9b +0x197:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad4fa0 +0x19c:  mov    $0x1,%esi
08ad4fa5 +0x1a1:  jmp    08ad4fbf <+0x1bb>
08ad4fa7 +0x1a3:  mov    %edx,%ebx
08ad4fa9 +0x1a5:  mov    %eax,%esi
08ad4fab +0x1a7:  lea    -0x4c(%ebp),%eax
08ad4fae +0x1aa:  mov    %eax,(%esp)
08ad4fb1 +0x1ad:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08ad4fb6 +0x1b2:  mov    %esi,%eax
08ad4fb8 +0x1b4:  mov    %ebx,%edx
08ad4fba +0x1b6:  jmp    08ad5270 <+0x46c>
08ad4fbf +0x1bb:  lea    -0x4c(%ebp),%eax
08ad4fc2 +0x1be:  mov    %eax,(%esp)
08ad4fc5 +0x1c1:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08ad4fca +0x1c6:  test   %esi,%esi
08ad4fcc +0x1c8:  je     08ad528b <+0x487>
08ad4fd2 +0x1ce:  jmp    08ad51e7 <+0x3e3>
08ad4fd7 +0x1d3:  cmpl   $0x3,0x10(%ebp)
08ad4fdb +0x1d7:  jle    08ad50d5 <+0x2d1>
08ad4fe1 +0x1dd:  mov    0xc(%ebp),%eax
08ad4fe4 +0x1e0:  movzbl (%eax),%eax
08ad4fe7 +0x1e3:  cmp    $0xef,%al
08ad4fe9 +0x1e5:  jne    08ad50d5 <+0x2d1>
08ad4fef +0x1eb:  mov    0xc(%ebp),%eax
08ad4ff2 +0x1ee:  add    $0x1,%eax
08ad4ff5 +0x1f1:  movzbl (%eax),%eax
08ad4ff8 +0x1f4:  cmp    $0xbb,%al
08ad4ffa +0x1f6:  jne    08ad50d5 <+0x2d1>
08ad5000 +0x1fc:  mov    0xc(%ebp),%eax
08ad5003 +0x1ff:  add    $0x2,%eax
08ad5006 +0x202:  movzbl (%eax),%eax
08ad5009 +0x205:  cmp    $0xbf,%al
08ad500b +0x207:  jne    08ad50d5 <+0x2d1>
08ad5011 +0x20d:  lea    -0x50(%ebp),%eax
08ad5014 +0x210:  mov    %eax,(%esp)
08ad5017 +0x213:  call   08ad99fe <_ZN10WideStringC1Ev>  ; WideString::WideString()
08ad501c +0x218:  mov    0x10(%ebp),%eax
08ad501f +0x21b:  lea    -0x3(%eax),%ecx
08ad5022 +0x21e:  mov    0xc(%ebp),%eax
08ad5025 +0x221:  lea    0x3(%eax),%edx
08ad5028 +0x224:  lea    -0x50(%ebp),%eax
08ad502b +0x227:  mov    %eax,0x8(%esp)
08ad502f +0x22b:  mov    %ecx,0x4(%esp)
08ad5033 +0x22f:  mov    %edx,(%esp)
08ad5036 +0x232:  call   08adf893 <_Z15convertFromUtf8PKciP10WideString>  ; convertFromUtf8(char const*, int, WideString*)
08ad503b +0x237:  mov    %al,-0x9(%ebp)
08ad503e +0x23a:  movzbl -0x9(%ebp),%eax
08ad5042 +0x23e:  xor    $0x1,%eax
08ad5045 +0x241:  test   %al,%al
08ad5047 +0x243:  je     08ad5055 <+0x251>
08ad5049 +0x245:  mov    $0x0,%ebx
08ad504e +0x24a:  mov    $0x0,%esi
08ad5053 +0x24f:  jmp    08ad50bd <+0x2b9>
08ad5055 +0x251:  lea    -0x40(%ebp),%eax
08ad5058 +0x254:  lea    -0x50(%ebp),%edx
08ad505b +0x257:  mov    %edx,0x4(%esp)
08ad505f +0x25b:  mov    %eax,(%esp)
08ad5062 +0x25e:  call   08adf624 <_Z19convertToCharStringRK10WideString>  ; convertToCharString(WideString const&)
08ad5067 +0x263:  sub    $0x4,%esp
08ad506a +0x266:  lea    -0x40(%ebp),%eax
08ad506d +0x269:  mov    %eax,0x4(%esp)
08ad5071 +0x26d:  lea    -0x48(%ebp),%eax
08ad5074 +0x270:  mov    %eax,(%esp)
08ad5077 +0x273:  call   08ad70de <_ZN10CharStringaSERKS_>  ; CharString::operator=(CharString const&)
08ad507c +0x278:  jmp    08ad5093 <+0x28f>
08ad507e +0x27a:  mov    %edx,%ebx
08ad5080 +0x27c:  mov    %eax,%esi
08ad5082 +0x27e:  lea    -0x40(%ebp),%eax
08ad5085 +0x281:  mov    %eax,(%esp)
08ad5088 +0x284:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad508d +0x289:  mov    %esi,%eax
08ad508f +0x28b:  mov    %ebx,%edx
08ad5091 +0x28d:  jmp    08ad50a5 <+0x2a1>
08ad5093 +0x28f:  lea    -0x40(%ebp),%eax
08ad5096 +0x292:  mov    %eax,(%esp)
08ad5099 +0x295:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad509e +0x29a:  mov    $0x1,%esi
08ad50a3 +0x29f:  jmp    08ad50bd <+0x2b9>
08ad50a5 +0x2a1:  mov    %edx,%ebx
08ad50a7 +0x2a3:  mov    %eax,%esi
08ad50a9 +0x2a5:  lea    -0x50(%ebp),%eax
08ad50ac +0x2a8:  mov    %eax,(%esp)
08ad50af +0x2ab:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08ad50b4 +0x2b0:  mov    %esi,%eax
08ad50b6 +0x2b2:  mov    %ebx,%edx
08ad50b8 +0x2b4:  jmp    08ad5270 <+0x46c>
08ad50bd +0x2b9:  lea    -0x50(%ebp),%eax
08ad50c0 +0x2bc:  mov    %eax,(%esp)
08ad50c3 +0x2bf:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08ad50c8 +0x2c4:  test   %esi,%esi
08ad50ca +0x2c6:  je     08ad528b <+0x487>
08ad50d0 +0x2cc:  jmp    08ad51e7 <+0x3e3>
08ad50d5 +0x2d1:  cmpl   $0x2,0x10(%ebp)
08ad50d9 +0x2d5:  jle    08ad5197 <+0x393>
08ad50df +0x2db:  mov    0xc(%ebp),%eax
08ad50e2 +0x2de:  movzbl (%eax),%eax
08ad50e5 +0x2e1:  cmp    $0xff,%al
08ad50e7 +0x2e3:  jne    08ad5197 <+0x393>
08ad50ed +0x2e9:  mov    0xc(%ebp),%eax
08ad50f0 +0x2ec:  add    $0x1,%eax
08ad50f3 +0x2ef:  movzbl (%eax),%eax
08ad50f6 +0x2f2:  cmp    $0xfe,%al
08ad50f8 +0x2f4:  jne    08ad5197 <+0x393>
08ad50fe +0x2fa:  mov    0x10(%ebp),%eax
08ad5101 +0x2fd:  sub    $0x2,%eax
08ad5104 +0x300:  mov    %eax,%edx
08ad5106 +0x302:  shr    $0x1f,%edx
08ad5109 +0x305:  lea    (%edx,%eax,1),%eax
08ad510c +0x308:  sar    %eax
08ad510e +0x30a:  mov    0xc(%ebp),%edx
08ad5111 +0x30d:  add    $0x2,%edx
08ad5114 +0x310:  mov    %eax,0x8(%esp)
08ad5118 +0x314:  mov    %edx,0x4(%esp)
08ad511c +0x318:  lea    -0x54(%ebp),%eax
08ad511f +0x31b:  mov    %eax,(%esp)
08ad5122 +0x31e:  call   08ad9ac2 <_ZN10WideStringC1EPKwi>  ; WideString::WideString(wchar_t const*, int)
08ad5127 +0x323:  lea    -0x3c(%ebp),%eax
08ad512a +0x326:  lea    -0x54(%ebp),%edx
08ad512d +0x329:  mov    %edx,0x4(%esp)
08ad5131 +0x32d:  mov    %eax,(%esp)
08ad5134 +0x330:  call   08adf624 <_Z19convertToCharStringRK10WideString>  ; convertToCharString(WideString const&)
08ad5139 +0x335:  sub    $0x4,%esp
08ad513c +0x338:  lea    -0x3c(%ebp),%eax
08ad513f +0x33b:  mov    %eax,0x4(%esp)
08ad5143 +0x33f:  lea    -0x48(%ebp),%eax
08ad5146 +0x342:  mov    %eax,(%esp)
08ad5149 +0x345:  call   08ad70de <_ZN10CharStringaSERKS_>  ; CharString::operator=(CharString const&)
08ad514e +0x34a:  jmp    08ad5165 <+0x361>
08ad5150 +0x34c:  mov    %edx,%ebx
08ad5152 +0x34e:  mov    %eax,%esi
08ad5154 +0x350:  lea    -0x3c(%ebp),%eax
08ad5157 +0x353:  mov    %eax,(%esp)
08ad515a +0x356:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad515f +0x35b:  mov    %esi,%eax
08ad5161 +0x35d:  mov    %ebx,%edx
08ad5163 +0x35f:  jmp    08ad5172 <+0x36e>
08ad5165 +0x361:  lea    -0x3c(%ebp),%eax
08ad5168 +0x364:  mov    %eax,(%esp)
08ad516b +0x367:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad5170 +0x36c:  jmp    08ad518a <+0x386>
08ad5172 +0x36e:  mov    %edx,%ebx
08ad5174 +0x370:  mov    %eax,%esi
08ad5176 +0x372:  lea    -0x54(%ebp),%eax
08ad5179 +0x375:  mov    %eax,(%esp)
08ad517c +0x378:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08ad5181 +0x37d:  mov    %esi,%eax
08ad5183 +0x37f:  mov    %ebx,%edx
08ad5185 +0x381:  jmp    08ad5270 <+0x46c>
08ad518a +0x386:  lea    -0x54(%ebp),%eax
08ad518d +0x389:  mov    %eax,(%esp)
08ad5190 +0x38c:  call   08ad9c14 <_ZN10WideStringD1Ev>  ; WideString::~WideString()
08ad5195 +0x391:  jmp    08ad51e7 <+0x3e3>
08ad5197 +0x393:  mov    0xc(%ebp),%eax
08ad519a +0x396:  mov    0x10(%ebp),%edx
08ad519d +0x399:  mov    %edx,0x8(%esp)
08ad51a1 +0x39d:  mov    %eax,0x4(%esp)
08ad51a5 +0x3a1:  lea    -0x38(%ebp),%eax
08ad51a8 +0x3a4:  mov    %eax,(%esp)
08ad51ab +0x3a7:  call   08ad6a6c <_ZN10CharStringC1EPKci>  ; CharString::CharString(char const*, int)
08ad51b0 +0x3ac:  lea    -0x38(%ebp),%eax
08ad51b3 +0x3af:  mov    %eax,0x4(%esp)
08ad51b7 +0x3b3:  lea    -0x48(%ebp),%eax
08ad51ba +0x3b6:  mov    %eax,(%esp)
08ad51bd +0x3b9:  call   08ad70de <_ZN10CharStringaSERKS_>  ; CharString::operator=(CharString const&)
08ad51c2 +0x3be:  jmp    08ad51dc <+0x3d8>
08ad51c4 +0x3c0:  mov    %edx,%ebx
08ad51c6 +0x3c2:  mov    %eax,%esi
08ad51c8 +0x3c4:  lea    -0x38(%ebp),%eax
08ad51cb +0x3c7:  mov    %eax,(%esp)
08ad51ce +0x3ca:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad51d3 +0x3cf:  mov    %esi,%eax
08ad51d5 +0x3d1:  mov    %ebx,%edx
08ad51d7 +0x3d3:  jmp    08ad5270 <+0x46c>
08ad51dc +0x3d8:  lea    -0x38(%ebp),%eax
08ad51df +0x3db:  mov    %eax,(%esp)
08ad51e2 +0x3de:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad51e7 +0x3e3:  lea    -0x48(%ebp),%eax
08ad51ea +0x3e6:  mov    %eax,(%esp)
08ad51ed +0x3e9:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad51f2 +0x3ee:  add    $0x1,%eax
08ad51f5 +0x3f1:  mov    %eax,(%esp)
08ad51f8 +0x3f4:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ad51fd +0x3f9:  mov    %eax,-0x34(%ebp)
08ad5200 +0x3fc:  lea    -0x48(%ebp),%eax
08ad5203 +0x3ff:  mov    %eax,(%esp)
08ad5206 +0x402:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad520b +0x407:  add    $0x1,%eax
08ad520e +0x40a:  mov    %eax,%ebx
08ad5210 +0x40c:  lea    -0x48(%ebp),%eax
08ad5213 +0x40f:  mov    %eax,(%esp)
08ad5216 +0x412:  call   0807fffc <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x22>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x22
08ad521b +0x417:  mov    %ebx,0x8(%esp)
08ad521f +0x41b:  mov    %eax,0x4(%esp)
08ad5223 +0x41f:  mov    -0x34(%ebp),%eax
08ad5226 +0x422:  mov    %eax,(%esp)
08ad5229 +0x425:  call   0807d8a0 <_init+0x198>
08ad522e +0x42a:  lea    -0x48(%ebp),%eax
08ad5231 +0x42d:  mov    %eax,(%esp)
08ad5234 +0x430:  call   08ad5530 <_ZN3app6getStrEi+0x64>  ; app::getStr(int)+0x64
08ad5239 +0x435:  mov    0x14(%ebp),%edx
08ad523c +0x438:  mov    %edx,0xc(%esp)
08ad5240 +0x43c:  mov    %eax,0x8(%esp)
08ad5244 +0x440:  mov    -0x34(%ebp),%eax
08ad5247 +0x443:  mov    %eax,0x4(%esp)
08ad524b +0x447:  mov    0x8(%ebp),%eax
08ad524e +0x44a:  mov    %eax,(%esp)
08ad5251 +0x44d:  call   08ad4ac2 <_ZN14StringResource14loadFromStringEPciP10CharString>  ; StringResource::loadFromString(char*, int, CharString*)
08ad5256 +0x452:  mov    %al,-0x2d(%ebp)
08ad5259 +0x455:  cmpl   $0x0,-0x34(%ebp)
08ad525d +0x459:  je     08ad526a <+0x466>
08ad525f +0x45b:  mov    -0x34(%ebp),%eax
08ad5262 +0x45e:  mov    %eax,(%esp)
08ad5265 +0x461:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ad526a +0x466:  movzbl -0x2d(%ebp),%ebx
08ad526e +0x46a:  jmp    08ad528b <+0x487>
08ad5270 +0x46c:  mov    %edx,%ebx
08ad5272 +0x46e:  mov    %eax,%esi
08ad5274 +0x470:  lea    -0x48(%ebp),%eax
08ad5277 +0x473:  mov    %eax,(%esp)
08ad527a +0x476:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad527f +0x47b:  mov    %esi,%eax
08ad5281 +0x47d:  mov    %ebx,%edx
08ad5283 +0x47f:  mov    %eax,(%esp)
08ad5286 +0x482:  call   08ae3750 <_Unwind_Resume>
08ad528b +0x487:  lea    -0x48(%ebp),%eax
08ad528e +0x48a:  mov    %eax,(%esp)
08ad5291 +0x48d:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad5296 +0x492:  mov    %ebx,%eax
08ad5298 +0x494:  lea    -0x8(%ebp),%esp
08ad529b +0x497:  add    $0x0,%esp
08ad529e +0x49a:  pop    %ebx
08ad529f +0x49b:  pop    %esi
08ad52a0 +0x49c:  pop    %ebp
08ad52a1 +0x49d:  ret
```

## 反编译 C

```c
// StringResource::loadFromBinary @ 0x8ad4e04

/* StringResource::loadFromBinary(unsigned char const*, int, CharString*) */

uint __thiscall
StringResource::loadFromBinary(StringResource *this,uchar *param_1,int param_2,CharString *param_3)

{
  int32 iVar1;
  char *__src;
  uint unaff_EBX;
  bool bVar2;
  CharString *pCVar3;
  WideString local_58;
  WideString local_54;
  WideString local_50;
  CharString local_4c;
  CharString local_48;
  CharString local_44;
  CharString local_40;
  CharString local_3c;
  CharString *local_38;
  byte local_31;
  CharString *local_30;
  uint local_2c;
  uint local_28;
  char *local_24;
  char local_1d;
  char *local_1c;
  uint local_18;
  uint local_14;
  undefined1 local_d;
  
  CharString::CharString(&local_4c);
  if ((((param_2 < 5) || (*param_1 != 'S')) || (param_1[1] != 'C')) ||
     ((param_1[2] != '0' || (param_1[3] != '1')))) {
    if (((3 < param_2) && ((*param_1 == 0xef && (param_1[1] == 0xbb)))) && (param_1[2] == 0xbf)) {
      WideString::WideString(&local_54);
      pCVar3 = (CharString *)(param_2 + -3);
                    /* try { // try from 08ad5036 to 08ad5066 has its CatchHandler @ 08ad50a5 */
      bVar2 = convertFromUtf8((char *)(param_1 + 3),(int32)pCVar3,&local_54);
      local_d = bVar2;
      if (bVar2) {
        convertToCharString(&local_44,&local_54);
        pCVar3 = &local_44;
                    /* try { // try from 08ad5077 to 08ad507b has its CatchHandler @ 08ad507e */
        CharString::operator=(&local_4c,pCVar3);
                    /* try { // try from 08ad5099 to 08ad509d has its CatchHandler @ 08ad50a5 */
        CharString::~CharString(&local_44,(int)pCVar3);
      }
      else {
        unaff_EBX = 0;
      }
                    /* try { // try from 08ad50c3 to 08ad5126 has its CatchHandler @ 08ad5270 */
      WideString::~WideString(&local_54,(int)pCVar3);
      goto joined_r0x08ad50ca;
    }
    if (((param_2 < 3) || (*param_1 != 0xff)) || (param_1[1] != 0xfe)) {
      CharString::CharString(&local_3c,(char *)param_1,param_2);
      pCVar3 = &local_3c;
                    /* try { // try from 08ad51bd to 08ad51c1 has its CatchHandler @ 08ad51c4 */
      CharString::operator=(&local_4c,pCVar3);
                    /* try { // try from 08ad51e2 to 08ad5255 has its CatchHandler @ 08ad5270 */
      CharString::~CharString(&local_3c,(int)pCVar3);
    }
    else {
      WideString::WideString(&local_58,(wchar *)(param_1 + 2),(param_2 + -2) / 2);
                    /* try { // try from 08ad5134 to 08ad5138 has its CatchHandler @ 08ad5172 */
      convertToCharString(&local_40,&local_58);
      pCVar3 = &local_40;
                    /* try { // try from 08ad5149 to 08ad514d has its CatchHandler @ 08ad5150 */
      CharString::operator=(&local_4c,pCVar3);
                    /* try { // try from 08ad516b to 08ad516f has its CatchHandler @ 08ad5172 */
      CharString::~CharString(&local_40,(int)pCVar3);
                    /* try { // try from 08ad5190 to 08ad51af has its CatchHandler @ 08ad5270 */
      WideString::~WideString(&local_58,(int)pCVar3);
    }
  }
  else {
    local_30 = *(CharString **)(param_1 + 4);
    local_2c = ((int)(((uint)(param_2 + 3 >> 0x1f) >> 0x1e) + param_2 + 3) >> 2) << 2;
    local_28 = 0x5819af17;
                    /* try { // try from 08ad4e94 to 08ad4e98 has its CatchHandler @ 08ad5270 */
    local_24 = operator_new__(local_2c);
    memcpy(local_24,param_1 + 8,param_2);
    local_1c = local_24;
    local_18 = local_28;
    for (local_14 = 0; local_14 < local_2c >> 2; local_14 = local_14 + 1) {
      *(uint *)(local_24 + local_14 * 4) = *(uint *)(local_24 + local_14 * 4) ^ local_18;
      local_18 = local_18 ^ *(uint *)(local_24 + local_14 * 4);
    }
    WideString::WideString(&local_50);
    pCVar3 = local_30;
                    /* try { // try from 08ad4f27 to 08ad4f68 has its CatchHandler @ 08ad4fa7 */
    local_1d = convertFromUtf8(local_24,(int32)local_30,&local_50);
    if (local_24 != (char *)0x0) {
      operator_delete__(local_24);
    }
    bVar2 = local_1d == '\x01';
    if (bVar2) {
      convertToCharString(&local_48,&local_50);
      pCVar3 = &local_48;
                    /* try { // try from 08ad4f79 to 08ad4f7d has its CatchHandler @ 08ad4f80 */
      CharString::operator=(&local_4c,pCVar3);
                    /* try { // try from 08ad4f9b to 08ad4f9f has its CatchHandler @ 08ad4fa7 */
      CharString::~CharString(&local_48,(int)pCVar3);
    }
    else {
      unaff_EBX = 0;
    }
                    /* try { // try from 08ad4fc5 to 08ad4fc9 has its CatchHandler @ 08ad5270 */
    WideString::~WideString(&local_50,(int)pCVar3);
joined_r0x08ad50ca:
    if (!bVar2) goto LAB_08ad528b;
  }
  iVar1 = CharString::length(&local_4c);
  local_38 = operator_new__(iVar1 + 1);
  iVar1 = CharString::length(&local_4c);
  __src = CharString::c_str(&local_4c);
  memcpy(local_38,__src,iVar1 + 1);
  iVar1 = CharString::length(&local_4c);
  pCVar3 = local_38;
  local_31 = loadFromString(this,(char *)local_38,iVar1,param_3);
  if (local_38 != (CharString *)0x0) {
    operator_delete__(local_38);
  }
  unaff_EBX = (uint)local_31;
LAB_08ad528b:
  CharString::~CharString(&local_4c,(int)pCVar3);
  return unaff_EBX;
}
```
