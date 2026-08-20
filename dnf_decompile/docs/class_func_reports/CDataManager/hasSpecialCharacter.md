# hasSpecialCharacter

`_ZN12CDataManager19hasSpecialCharacterEPKc`

`CDataManager::hasSpecialCharacter(char const*)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08363140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08363140  _ZN12CDataManager19hasSpecialCharacterEPKc
#           CDataManager::hasSpecialCharacter(char const*)
# range [0x08363140, 0x08363471]
08363140 +0x000:  push   %ebp
08363141 +0x001:  mov    %esp,%ebp
08363143 +0x003:  sub    $0x78,%esp
08363146 +0x006:  movl   $0x0,-0x1c(%ebp)
0836314d +0x00d:  jmp    08363452 <+0x312>
08363152 +0x012:  mov    0xc(%ebp),%eax
08363155 +0x015:  add    -0x1c(%ebp),%eax
08363158 +0x018:  mov    %eax,-0x18(%ebp)
0836315b +0x01b:  mov    -0x18(%ebp),%eax
0836315e +0x01e:  movzbl (%eax),%eax
08363161 +0x021:  movzbl %al,%eax
08363164 +0x024:  mov    %eax,0x4(%esp)
08363168 +0x028:  mov    0x8(%ebp),%eax
0836316b +0x02b:  mov    %eax,(%esp)
0836316e +0x02e:  call   08362c0e <_ZN12CDataManager19_isOneByteCharacterEh>  ; CDataManager::_isOneByteCharacter(unsigned char)
08363173 +0x033:  test   %al,%al
08363175 +0x035:  je     083632da <+0x19a>
0836317b +0x03b:  mov    0x8(%ebp),%eax
0836317e +0x03e:  lea    0x86d0(%eax),%edx
08363184 +0x044:  lea    -0x3c(%ebp),%eax
08363187 +0x047:  mov    %edx,0x4(%esp)
0836318b +0x04b:  mov    %eax,(%esp)
0836318e +0x04e:  call   08394d16 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x247b6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x247b6
08363193 +0x053:  sub    $0x4,%esp
08363196 +0x056:  lea    -0x3c(%ebp),%eax
08363199 +0x059:  mov    %eax,0x4(%esp)
0836319d +0x05d:  lea    -0x40(%ebp),%eax
083631a0 +0x060:  mov    %eax,(%esp)
083631a3 +0x063:  call   08394d3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x247da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x247da
083631a8 +0x068:  mov    0x8(%ebp),%eax
083631ab +0x06b:  lea    0x86d0(%eax),%edx
083631b1 +0x071:  lea    -0x38(%ebp),%eax
083631b4 +0x074:  mov    %edx,0x4(%esp)
083631b8 +0x078:  mov    %eax,(%esp)
083631bb +0x07b:  call   08394d54 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x247f4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x247f4
083631c0 +0x080:  sub    $0x4,%esp
083631c3 +0x083:  lea    -0x38(%ebp),%eax
083631c6 +0x086:  mov    %eax,0x4(%esp)
083631ca +0x08a:  lea    -0x44(%ebp),%eax
083631cd +0x08d:  mov    %eax,(%esp)
083631d0 +0x090:  call   08394d3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x247da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x247da
083631d5 +0x095:  jmp    0836321b <+0xdb>
083631d7 +0x097:  lea    -0x40(%ebp),%eax
083631da +0x09a:  mov    %eax,(%esp)
083631dd +0x09d:  call   08394dbc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2485c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2485c
083631e2 +0x0a2:  mov    %eax,-0x14(%ebp)
083631e5 +0x0a5:  mov    -0x14(%ebp),%eax
083631e8 +0x0a8:  movzbl (%eax),%edx
083631eb +0x0ab:  mov    -0x18(%ebp),%eax
083631ee +0x0ae:  movzbl (%eax),%eax
083631f1 +0x0b1:  cmp    %al,%dl
083631f3 +0x0b3:  ja     08363210 <+0xd0>
083631f5 +0x0b5:  mov    -0x14(%ebp),%eax
083631f8 +0x0b8:  movzbl 0x1(%eax),%edx
083631fc +0x0bc:  mov    -0x18(%ebp),%eax
083631ff +0x0bf:  movzbl (%eax),%eax
08363202 +0x0c2:  cmp    %al,%dl
08363204 +0x0c4:  jb     08363210 <+0xd0>
08363206 +0x0c6:  mov    $0x1,%eax
0836320b +0x0cb:  jmp    08363470 <+0x330>
08363210 +0x0d0:  lea    -0x40(%ebp),%eax
08363213 +0x0d3:  mov    %eax,(%esp)
08363216 +0x0d6:  call   08394da6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24846>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24846
0836321b +0x0db:  lea    -0x44(%ebp),%eax
0836321e +0x0de:  mov    %eax,0x4(%esp)
08363222 +0x0e2:  lea    -0x40(%ebp),%eax
08363225 +0x0e5:  mov    %eax,(%esp)
08363228 +0x0e8:  call   08394d7a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2481a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2481a
0836322d +0x0ed:  test   %al,%al
0836322f +0x0ef:  jne    083631d7 <+0x97>
08363231 +0x0f1:  mov    0x8(%ebp),%eax
08363234 +0x0f4:  lea    0x86c4(%eax),%edx
0836323a +0x0fa:  lea    -0x34(%ebp),%eax
0836323d +0x0fd:  mov    %edx,0x4(%esp)
08363241 +0x101:  mov    %eax,(%esp)
08363244 +0x104:  call   0807f40e <_GLOBAL__I__Z13base64_encodePKhjRSs+0x4de>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x4de
08363249 +0x109:  sub    $0x4,%esp
0836324c +0x10c:  lea    -0x34(%ebp),%eax
0836324f +0x10f:  mov    %eax,0x4(%esp)
08363253 +0x113:  lea    -0x48(%ebp),%eax
08363256 +0x116:  mov    %eax,(%esp)
08363259 +0x119:  call   08394dc6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24866>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24866
0836325e +0x11e:  mov    0x8(%ebp),%eax
08363261 +0x121:  lea    0x86c4(%eax),%edx
08363267 +0x127:  lea    -0x30(%ebp),%eax
0836326a +0x12a:  mov    %edx,0x4(%esp)
0836326e +0x12e:  mov    %eax,(%esp)
08363271 +0x131:  call   0807eff2 <_GLOBAL__I__Z13base64_encodePKhjRSs+0xc2>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xc2
08363276 +0x136:  sub    $0x4,%esp
08363279 +0x139:  lea    -0x30(%ebp),%eax
0836327c +0x13c:  mov    %eax,0x4(%esp)
08363280 +0x140:  lea    -0x4c(%ebp),%eax
08363283 +0x143:  mov    %eax,(%esp)
08363286 +0x146:  call   08394dc6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24866>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24866
0836328b +0x14b:  jmp    083632bf <+0x17f>
0836328d +0x14d:  lea    -0x48(%ebp),%eax
08363290 +0x150:  mov    %eax,(%esp)
08363293 +0x153:  call   08394e22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x248c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x248c2
08363298 +0x158:  movzbl (%eax),%edx
0836329b +0x15b:  mov    -0x18(%ebp),%eax
0836329e +0x15e:  movzbl (%eax),%eax
083632a1 +0x161:  cmp    %al,%dl
083632a3 +0x163:  sete   %al
083632a6 +0x166:  test   %al,%al
083632a8 +0x168:  je     083632b4 <+0x174>
083632aa +0x16a:  mov    $0x1,%eax
083632af +0x16f:  jmp    08363470 <+0x330>
083632b4 +0x174:  lea    -0x48(%ebp),%eax
083632b7 +0x177:  mov    %eax,(%esp)
083632ba +0x17a:  call   08394e0c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x248ac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x248ac
083632bf +0x17f:  lea    -0x4c(%ebp),%eax
083632c2 +0x182:  mov    %eax,0x4(%esp)
083632c6 +0x186:  lea    -0x48(%ebp),%eax
083632c9 +0x189:  mov    %eax,(%esp)
083632cc +0x18c:  call   08394de0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24880>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24880
083632d1 +0x191:  test   %al,%al
083632d3 +0x193:  jne    0836328d <+0x14d>
083632d5 +0x195:  jmp    0836344e <+0x30e>
083632da +0x19a:  movw   $0x0,-0x4e(%ebp)
083632e0 +0x1a0:  mov    -0x18(%ebp),%eax
083632e3 +0x1a3:  add    $0x1,%eax
083632e6 +0x1a6:  movzbl (%eax),%eax
083632e9 +0x1a9:  mov    %al,-0x4e(%ebp)
083632ec +0x1ac:  mov    -0x18(%ebp),%eax
083632ef +0x1af:  movzbl (%eax),%eax
083632f2 +0x1b2:  mov    %al,-0x4d(%ebp)
083632f5 +0x1b5:  lea    -0x4e(%ebp),%eax
083632f8 +0x1b8:  movzwl (%eax),%eax
083632fb +0x1bb:  mov    %ax,-0xe(%ebp)
083632ff +0x1bf:  mov    0x8(%ebp),%eax
08363302 +0x1c2:  lea    0x86e8(%eax),%edx
08363308 +0x1c8:  lea    -0x2c(%ebp),%eax
0836330b +0x1cb:  mov    %edx,0x4(%esp)
0836330f +0x1cf:  mov    %eax,(%esp)
08363312 +0x1d2:  call   08394e2c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x248cc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x248cc
08363317 +0x1d7:  sub    $0x4,%esp
0836331a +0x1da:  lea    -0x2c(%ebp),%eax
0836331d +0x1dd:  mov    %eax,0x4(%esp)
08363321 +0x1e1:  lea    -0x54(%ebp),%eax
08363324 +0x1e4:  mov    %eax,(%esp)
08363327 +0x1e7:  call   08394e50 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x248f0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x248f0
0836332c +0x1ec:  mov    0x8(%ebp),%eax
0836332f +0x1ef:  lea    0x86e8(%eax),%edx
08363335 +0x1f5:  lea    -0x28(%ebp),%eax
08363338 +0x1f8:  mov    %edx,0x4(%esp)
0836333c +0x1fc:  mov    %eax,(%esp)
0836333f +0x1ff:  call   08394e6a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2490a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2490a
08363344 +0x204:  sub    $0x4,%esp
08363347 +0x207:  lea    -0x28(%ebp),%eax
0836334a +0x20a:  mov    %eax,0x4(%esp)
0836334e +0x20e:  lea    -0x58(%ebp),%eax
08363351 +0x211:  mov    %eax,(%esp)
08363354 +0x214:  call   08394e50 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x248f0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x248f0
08363359 +0x219:  jmp    08363397 <+0x257>
0836335b +0x21b:  lea    -0x54(%ebp),%eax
0836335e +0x21e:  mov    %eax,(%esp)
08363361 +0x221:  call   08394ed2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24972>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24972
08363366 +0x226:  mov    %eax,-0xc(%ebp)
08363369 +0x229:  mov    -0xc(%ebp),%eax
0836336c +0x22c:  movzwl (%eax),%eax
0836336f +0x22f:  cmp    -0xe(%ebp),%ax
08363373 +0x233:  ja     0836338c <+0x24c>
08363375 +0x235:  mov    -0xc(%ebp),%eax
08363378 +0x238:  movzwl 0x2(%eax),%eax
0836337c +0x23c:  cmp    -0xe(%ebp),%ax
08363380 +0x240:  jb     0836338c <+0x24c>
08363382 +0x242:  mov    $0x1,%eax
08363387 +0x247:  jmp    08363470 <+0x330>
0836338c +0x24c:  lea    -0x54(%ebp),%eax
0836338f +0x24f:  mov    %eax,(%esp)
08363392 +0x252:  call   08394ebc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2495c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2495c
08363397 +0x257:  lea    -0x58(%ebp),%eax
0836339a +0x25a:  mov    %eax,0x4(%esp)
0836339e +0x25e:  lea    -0x54(%ebp),%eax
083633a1 +0x261:  mov    %eax,(%esp)
083633a4 +0x264:  call   08394e90 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24930>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24930
083633a9 +0x269:  test   %al,%al
083633ab +0x26b:  jne    0836335b <+0x21b>
083633ad +0x26d:  mov    0x8(%ebp),%eax
083633b0 +0x270:  lea    0x86dc(%eax),%edx
083633b6 +0x276:  lea    -0x24(%ebp),%eax
083633b9 +0x279:  mov    %edx,0x4(%esp)
083633bd +0x27d:  mov    %eax,(%esp)
083633c0 +0x280:  call   08394c4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x246ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x246ec
083633c5 +0x285:  sub    $0x4,%esp
083633c8 +0x288:  lea    -0x24(%ebp),%eax
083633cb +0x28b:  mov    %eax,0x4(%esp)
083633cf +0x28f:  lea    -0x5c(%ebp),%eax
083633d2 +0x292:  mov    %eax,(%esp)
083633d5 +0x295:  call   08394edc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2497c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2497c
083633da +0x29a:  mov    0x8(%ebp),%eax
083633dd +0x29d:  lea    0x86dc(%eax),%edx
083633e3 +0x2a3:  lea    -0x20(%ebp),%eax
083633e6 +0x2a6:  mov    %edx,0x4(%esp)
083633ea +0x2aa:  mov    %eax,(%esp)
083633ed +0x2ad:  call   08394c70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24710>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24710
083633f2 +0x2b2:  sub    $0x4,%esp
083633f5 +0x2b5:  lea    -0x20(%ebp),%eax
083633f8 +0x2b8:  mov    %eax,0x4(%esp)
083633fc +0x2bc:  lea    -0x60(%ebp),%eax
083633ff +0x2bf:  mov    %eax,(%esp)
08363402 +0x2c2:  call   08394edc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2497c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2497c
08363407 +0x2c7:  jmp    08363434 <+0x2f4>
08363409 +0x2c9:  lea    -0x5c(%ebp),%eax
0836340c +0x2cc:  mov    %eax,(%esp)
0836340f +0x2cf:  call   08152190 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1ac5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1ac5
08363414 +0x2d4:  movzwl (%eax),%eax
08363417 +0x2d7:  cmp    -0xe(%ebp),%ax
0836341b +0x2db:  sete   %al
0836341e +0x2de:  test   %al,%al
08363420 +0x2e0:  je     08363429 <+0x2e9>
08363422 +0x2e2:  mov    $0x1,%eax
08363427 +0x2e7:  jmp    08363470 <+0x330>
08363429 +0x2e9:  lea    -0x5c(%ebp),%eax
0836342c +0x2ec:  mov    %eax,(%esp)
0836342f +0x2ef:  call   0815217a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1aaf>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1aaf
08363434 +0x2f4:  lea    -0x60(%ebp),%eax
08363437 +0x2f7:  mov    %eax,0x4(%esp)
0836343b +0x2fb:  lea    -0x5c(%ebp),%eax
0836343e +0x2fe:  mov    %eax,(%esp)
08363441 +0x301:  call   0815214e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1a83>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1a83
08363446 +0x306:  test   %al,%al
08363448 +0x308:  jne    08363409 <+0x2c9>
0836344a +0x30a:  addl   $0x1,-0x1c(%ebp)
0836344e +0x30e:  addl   $0x1,-0x1c(%ebp)
08363452 +0x312:  mov    0xc(%ebp),%eax
08363455 +0x315:  mov    %eax,(%esp)
08363458 +0x318:  call   0807e3b0 <_init+0xca8>
0836345d +0x31d:  cmp    -0x1c(%ebp),%eax
08363460 +0x320:  seta   %al
08363463 +0x323:  test   %al,%al
08363465 +0x325:  jne    08363152 <+0x12>
0836346b +0x32b:  mov    $0x0,%eax
08363470 +0x330:  leave
08363471 +0x331:  ret
```

## 反编译 C

```c
// CDataManager::hasSpecialCharacter @ 0x8363140

/* CDataManager::hasSpecialCharacter(char const*) */

undefined4 __thiscall CDataManager::hasSpecialCharacter(CDataManager *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  ushort *puVar4;
  size_t sVar5;
  __normal_iterator<unsigned_short_const*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
  local_64 [4];
  __normal_iterator<unsigned_short_const*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
  local_60 [4];
  __normal_iterator<InvalidCharData::stRangeElement<unsigned_short>const*,std::vector<InvalidCharData::stRangeElement<unsigned_short>,std::allocator<InvalidCharData::stRangeElement<unsigned_short>>>>
  local_5c [4];
  __normal_iterator<InvalidCharData::stRangeElement<unsigned_short>const*,std::vector<InvalidCharData::stRangeElement<unsigned_short>,std::allocator<InvalidCharData::stRangeElement<unsigned_short>>>>
  local_58 [6];
  undefined2 local_52;
  __normal_iterator<unsigned_char_const*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
  local_50 [4];
  __normal_iterator<unsigned_char_const*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
  local_4c [4];
  __normal_iterator<InvalidCharData::stRangeElement<unsigned_char>const*,std::vector<InvalidCharData::stRangeElement<unsigned_char>,std::allocator<InvalidCharData::stRangeElement<unsigned_char>>>>
  local_48 [4];
  __normal_iterator<InvalidCharData::stRangeElement<unsigned_char>const*,std::vector<InvalidCharData::stRangeElement<unsigned_char>,std::allocator<InvalidCharData::stRangeElement<unsigned_char>>>>
  local_44 [4];
  __normal_iterator local_40 [4];
  __normal_iterator local_3c [4];
  __normal_iterator local_38 [4];
  __normal_iterator local_34 [4];
  __normal_iterator local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  __normal_iterator local_24 [4];
  uint local_20;
  byte *local_1c;
  byte *local_18;
  ushort local_12;
  ushort *local_10;
  
  local_20 = 0;
  do {
    sVar5 = strlen(param_1);
    if (sVar5 <= local_20) {
      return 0;
    }
    local_1c = (byte *)(param_1 + local_20);
    cVar1 = _isOneByteCharacter((uchar)this);
    if (cVar1 == '\0') {
      local_52 = CONCAT11(*local_1c,local_1c[1]);
      local_12 = local_52;
      std::
      vector<InvalidCharData::stRangeElement<unsigned_short>,std::allocator<InvalidCharData::stRangeElement<unsigned_short>>>
      ::begin();
      __gnu_cxx::
      __normal_iterator<InvalidCharData::stRangeElement<unsigned_short>const*,std::vector<InvalidCharData::stRangeElement<unsigned_short>,std::allocator<InvalidCharData::stRangeElement<unsigned_short>>>>
      ::__normal_iterator<InvalidCharData::stRangeElement<unsigned_short>*>(local_58,local_30);
      std::
      vector<InvalidCharData::stRangeElement<unsigned_short>,std::allocator<InvalidCharData::stRangeElement<unsigned_short>>>
      ::end();
      __gnu_cxx::
      __normal_iterator<InvalidCharData::stRangeElement<unsigned_short>const*,std::vector<InvalidCharData::stRangeElement<unsigned_short>,std::allocator<InvalidCharData::stRangeElement<unsigned_short>>>>
      ::__normal_iterator<InvalidCharData::stRangeElement<unsigned_short>*>(local_5c,local_2c);
      while (bVar2 = __gnu_cxx::operator!=(local_58,local_5c), bVar2) {
        local_10 = (ushort *)
                   __gnu_cxx::
                   __normal_iterator<InvalidCharData::stRangeElement<unsigned_short>const*,std::vector<InvalidCharData::stRangeElement<unsigned_short>,std::allocator<InvalidCharData::stRangeElement<unsigned_short>>>>
                   ::operator*(local_58);
        if ((*local_10 <= local_12) && (local_12 <= local_10[1])) {
          return 1;
        }
        __gnu_cxx::
        __normal_iterator<InvalidCharData::stRangeElement<unsigned_short>const*,std::vector<InvalidCharData::stRangeElement<unsigned_short>,std::allocator<InvalidCharData::stRangeElement<unsigned_short>>>>
        ::operator++(local_58);
      }
      std::vector<unsigned_short,std::allocator<unsigned_short>>::begin();
      __gnu_cxx::
      __normal_iterator<unsigned_short_const*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
      ::__normal_iterator<unsigned_short*>(local_60,local_28);
      std::vector<unsigned_short,std::allocator<unsigned_short>>::end();
      __gnu_cxx::
      __normal_iterator<unsigned_short_const*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
      ::__normal_iterator<unsigned_short*>(local_64,local_24);
      while (bVar2 = __gnu_cxx::operator!=(local_60,local_64), bVar2) {
        puVar4 = (ushort *)
                 __gnu_cxx::
                 __normal_iterator<unsigned_short_const*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
                 ::operator*(local_60);
        if (*puVar4 == local_12) {
          return 1;
        }
        __gnu_cxx::
        __normal_iterator<unsigned_short_const*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
        ::operator++(local_60);
      }
      local_20 = local_20 + 1;
    }
    else {
      std::
      vector<InvalidCharData::stRangeElement<unsigned_char>,std::allocator<InvalidCharData::stRangeElement<unsigned_char>>>
      ::begin();
      __gnu_cxx::
      __normal_iterator<InvalidCharData::stRangeElement<unsigned_char>const*,std::vector<InvalidCharData::stRangeElement<unsigned_char>,std::allocator<InvalidCharData::stRangeElement<unsigned_char>>>>
      ::__normal_iterator<InvalidCharData::stRangeElement<unsigned_char>*>(local_44,local_40);
      std::
      vector<InvalidCharData::stRangeElement<unsigned_char>,std::allocator<InvalidCharData::stRangeElement<unsigned_char>>>
      ::end();
      __gnu_cxx::
      __normal_iterator<InvalidCharData::stRangeElement<unsigned_char>const*,std::vector<InvalidCharData::stRangeElement<unsigned_char>,std::allocator<InvalidCharData::stRangeElement<unsigned_char>>>>
      ::__normal_iterator<InvalidCharData::stRangeElement<unsigned_char>*>(local_48,local_3c);
      while (bVar2 = __gnu_cxx::operator!=(local_44,local_48), bVar2) {
        local_18 = (byte *)__gnu_cxx::
                           __normal_iterator<InvalidCharData::stRangeElement<unsigned_char>const*,std::vector<InvalidCharData::stRangeElement<unsigned_char>,std::allocator<InvalidCharData::stRangeElement<unsigned_char>>>>
                           ::operator*(local_44);
        if ((*local_18 <= *local_1c) && (*local_1c <= local_18[1])) {
          return 1;
        }
        __gnu_cxx::
        __normal_iterator<InvalidCharData::stRangeElement<unsigned_char>const*,std::vector<InvalidCharData::stRangeElement<unsigned_char>,std::allocator<InvalidCharData::stRangeElement<unsigned_char>>>>
        ::operator++(local_44);
      }
      std::vector<unsigned_char,std::allocator<unsigned_char>>::begin();
      __gnu_cxx::
      __normal_iterator<unsigned_char_const*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
      ::__normal_iterator<unsigned_char*>(local_4c,local_38);
      std::vector<unsigned_char,std::allocator<unsigned_char>>::end();
      __gnu_cxx::
      __normal_iterator<unsigned_char_const*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
      ::__normal_iterator<unsigned_char*>(local_50,local_34);
      while (bVar2 = __gnu_cxx::operator!=(local_4c,local_50), bVar2) {
        pbVar3 = (byte *)__gnu_cxx::
                         __normal_iterator<unsigned_char_const*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
                         ::operator*(local_4c);
        if (*pbVar3 == *local_1c) {
          return 1;
        }
        __gnu_cxx::
        __normal_iterator<unsigned_char_const*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
        ::operator++(local_4c);
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}
```
