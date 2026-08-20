# hasSpecialCharacterExceptSpace

`_ZN12CDataManager30hasSpecialCharacterExceptSpaceEPKc`

`CDataManager::hasSpecialCharacterExceptSpace(char const*)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08362e0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08362e0e  _ZN12CDataManager30hasSpecialCharacterExceptSpaceEPKc
#           CDataManager::hasSpecialCharacterExceptSpace(char const*)
# range [0x08362e0e, 0x0836313f]
08362e0e +0x000:  push   %ebp
08362e0f +0x001:  mov    %esp,%ebp
08362e11 +0x003:  sub    $0x78,%esp
08362e14 +0x006:  movl   $0x0,-0x1c(%ebp)
08362e1b +0x00d:  jmp    08363120 <+0x312>
08362e20 +0x012:  mov    0xc(%ebp),%eax
08362e23 +0x015:  add    -0x1c(%ebp),%eax
08362e26 +0x018:  mov    %eax,-0x18(%ebp)
08362e29 +0x01b:  mov    -0x18(%ebp),%eax
08362e2c +0x01e:  movzbl (%eax),%eax
08362e2f +0x021:  movzbl %al,%eax
08362e32 +0x024:  mov    %eax,0x4(%esp)
08362e36 +0x028:  mov    0x8(%ebp),%eax
08362e39 +0x02b:  mov    %eax,(%esp)
08362e3c +0x02e:  call   08362c0e <_ZN12CDataManager19_isOneByteCharacterEh>  ; CDataManager::_isOneByteCharacter(unsigned char)
08362e41 +0x033:  test   %al,%al
08362e43 +0x035:  je     08362fa8 <+0x19a>
08362e49 +0x03b:  mov    0x8(%ebp),%eax
08362e4c +0x03e:  lea    0x86d0(%eax),%edx
08362e52 +0x044:  lea    -0x3c(%ebp),%eax
08362e55 +0x047:  mov    %edx,0x4(%esp)
08362e59 +0x04b:  mov    %eax,(%esp)
08362e5c +0x04e:  call   08394d16 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x247b6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x247b6
08362e61 +0x053:  sub    $0x4,%esp
08362e64 +0x056:  lea    -0x3c(%ebp),%eax
08362e67 +0x059:  mov    %eax,0x4(%esp)
08362e6b +0x05d:  lea    -0x40(%ebp),%eax
08362e6e +0x060:  mov    %eax,(%esp)
08362e71 +0x063:  call   08394d3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x247da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x247da
08362e76 +0x068:  mov    0x8(%ebp),%eax
08362e79 +0x06b:  lea    0x86d0(%eax),%edx
08362e7f +0x071:  lea    -0x38(%ebp),%eax
08362e82 +0x074:  mov    %edx,0x4(%esp)
08362e86 +0x078:  mov    %eax,(%esp)
08362e89 +0x07b:  call   08394d54 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x247f4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x247f4
08362e8e +0x080:  sub    $0x4,%esp
08362e91 +0x083:  lea    -0x38(%ebp),%eax
08362e94 +0x086:  mov    %eax,0x4(%esp)
08362e98 +0x08a:  lea    -0x44(%ebp),%eax
08362e9b +0x08d:  mov    %eax,(%esp)
08362e9e +0x090:  call   08394d3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x247da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x247da
08362ea3 +0x095:  jmp    08362ee9 <+0xdb>
08362ea5 +0x097:  lea    -0x40(%ebp),%eax
08362ea8 +0x09a:  mov    %eax,(%esp)
08362eab +0x09d:  call   08394dbc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2485c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2485c
08362eb0 +0x0a2:  mov    %eax,-0x14(%ebp)
08362eb3 +0x0a5:  mov    -0x14(%ebp),%eax
08362eb6 +0x0a8:  movzbl (%eax),%edx
08362eb9 +0x0ab:  mov    -0x18(%ebp),%eax
08362ebc +0x0ae:  movzbl (%eax),%eax
08362ebf +0x0b1:  cmp    %al,%dl
08362ec1 +0x0b3:  ja     08362ede <+0xd0>
08362ec3 +0x0b5:  mov    -0x14(%ebp),%eax
08362ec6 +0x0b8:  movzbl 0x1(%eax),%edx
08362eca +0x0bc:  mov    -0x18(%ebp),%eax
08362ecd +0x0bf:  movzbl (%eax),%eax
08362ed0 +0x0c2:  cmp    %al,%dl
08362ed2 +0x0c4:  jbe    08362ede <+0xd0>
08362ed4 +0x0c6:  mov    $0x1,%eax
08362ed9 +0x0cb:  jmp    0836313e <+0x330>
08362ede +0x0d0:  lea    -0x40(%ebp),%eax
08362ee1 +0x0d3:  mov    %eax,(%esp)
08362ee4 +0x0d6:  call   08394da6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24846>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24846
08362ee9 +0x0db:  lea    -0x44(%ebp),%eax
08362eec +0x0de:  mov    %eax,0x4(%esp)
08362ef0 +0x0e2:  lea    -0x40(%ebp),%eax
08362ef3 +0x0e5:  mov    %eax,(%esp)
08362ef6 +0x0e8:  call   08394d7a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2481a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2481a
08362efb +0x0ed:  test   %al,%al
08362efd +0x0ef:  jne    08362ea5 <+0x97>
08362eff +0x0f1:  mov    0x8(%ebp),%eax
08362f02 +0x0f4:  lea    0x86c4(%eax),%edx
08362f08 +0x0fa:  lea    -0x34(%ebp),%eax
08362f0b +0x0fd:  mov    %edx,0x4(%esp)
08362f0f +0x101:  mov    %eax,(%esp)
08362f12 +0x104:  call   0807f40e <_GLOBAL__I__Z13base64_encodePKhjRSs+0x4de>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x4de
08362f17 +0x109:  sub    $0x4,%esp
08362f1a +0x10c:  lea    -0x34(%ebp),%eax
08362f1d +0x10f:  mov    %eax,0x4(%esp)
08362f21 +0x113:  lea    -0x48(%ebp),%eax
08362f24 +0x116:  mov    %eax,(%esp)
08362f27 +0x119:  call   08394dc6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24866>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24866
08362f2c +0x11e:  mov    0x8(%ebp),%eax
08362f2f +0x121:  lea    0x86c4(%eax),%edx
08362f35 +0x127:  lea    -0x30(%ebp),%eax
08362f38 +0x12a:  mov    %edx,0x4(%esp)
08362f3c +0x12e:  mov    %eax,(%esp)
08362f3f +0x131:  call   0807eff2 <_GLOBAL__I__Z13base64_encodePKhjRSs+0xc2>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xc2
08362f44 +0x136:  sub    $0x4,%esp
08362f47 +0x139:  lea    -0x30(%ebp),%eax
08362f4a +0x13c:  mov    %eax,0x4(%esp)
08362f4e +0x140:  lea    -0x4c(%ebp),%eax
08362f51 +0x143:  mov    %eax,(%esp)
08362f54 +0x146:  call   08394dc6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24866>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24866
08362f59 +0x14b:  jmp    08362f8d <+0x17f>
08362f5b +0x14d:  lea    -0x48(%ebp),%eax
08362f5e +0x150:  mov    %eax,(%esp)
08362f61 +0x153:  call   08394e22 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x248c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x248c2
08362f66 +0x158:  movzbl (%eax),%edx
08362f69 +0x15b:  mov    -0x18(%ebp),%eax
08362f6c +0x15e:  movzbl (%eax),%eax
08362f6f +0x161:  cmp    %al,%dl
08362f71 +0x163:  sete   %al
08362f74 +0x166:  test   %al,%al
08362f76 +0x168:  je     08362f82 <+0x174>
08362f78 +0x16a:  mov    $0x1,%eax
08362f7d +0x16f:  jmp    0836313e <+0x330>
08362f82 +0x174:  lea    -0x48(%ebp),%eax
08362f85 +0x177:  mov    %eax,(%esp)
08362f88 +0x17a:  call   08394e0c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x248ac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x248ac
08362f8d +0x17f:  lea    -0x4c(%ebp),%eax
08362f90 +0x182:  mov    %eax,0x4(%esp)
08362f94 +0x186:  lea    -0x48(%ebp),%eax
08362f97 +0x189:  mov    %eax,(%esp)
08362f9a +0x18c:  call   08394de0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24880>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24880
08362f9f +0x191:  test   %al,%al
08362fa1 +0x193:  jne    08362f5b <+0x14d>
08362fa3 +0x195:  jmp    0836311c <+0x30e>
08362fa8 +0x19a:  movw   $0x0,-0x4e(%ebp)
08362fae +0x1a0:  mov    -0x18(%ebp),%eax
08362fb1 +0x1a3:  add    $0x1,%eax
08362fb4 +0x1a6:  movzbl (%eax),%eax
08362fb7 +0x1a9:  mov    %al,-0x4e(%ebp)
08362fba +0x1ac:  mov    -0x18(%ebp),%eax
08362fbd +0x1af:  movzbl (%eax),%eax
08362fc0 +0x1b2:  mov    %al,-0x4d(%ebp)
08362fc3 +0x1b5:  lea    -0x4e(%ebp),%eax
08362fc6 +0x1b8:  movzwl (%eax),%eax
08362fc9 +0x1bb:  mov    %ax,-0xe(%ebp)
08362fcd +0x1bf:  mov    0x8(%ebp),%eax
08362fd0 +0x1c2:  lea    0x86e8(%eax),%edx
08362fd6 +0x1c8:  lea    -0x2c(%ebp),%eax
08362fd9 +0x1cb:  mov    %edx,0x4(%esp)
08362fdd +0x1cf:  mov    %eax,(%esp)
08362fe0 +0x1d2:  call   08394e2c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x248cc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x248cc
08362fe5 +0x1d7:  sub    $0x4,%esp
08362fe8 +0x1da:  lea    -0x2c(%ebp),%eax
08362feb +0x1dd:  mov    %eax,0x4(%esp)
08362fef +0x1e1:  lea    -0x54(%ebp),%eax
08362ff2 +0x1e4:  mov    %eax,(%esp)
08362ff5 +0x1e7:  call   08394e50 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x248f0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x248f0
08362ffa +0x1ec:  mov    0x8(%ebp),%eax
08362ffd +0x1ef:  lea    0x86e8(%eax),%edx
08363003 +0x1f5:  lea    -0x28(%ebp),%eax
08363006 +0x1f8:  mov    %edx,0x4(%esp)
0836300a +0x1fc:  mov    %eax,(%esp)
0836300d +0x1ff:  call   08394e6a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2490a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2490a
08363012 +0x204:  sub    $0x4,%esp
08363015 +0x207:  lea    -0x28(%ebp),%eax
08363018 +0x20a:  mov    %eax,0x4(%esp)
0836301c +0x20e:  lea    -0x58(%ebp),%eax
0836301f +0x211:  mov    %eax,(%esp)
08363022 +0x214:  call   08394e50 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x248f0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x248f0
08363027 +0x219:  jmp    08363065 <+0x257>
08363029 +0x21b:  lea    -0x54(%ebp),%eax
0836302c +0x21e:  mov    %eax,(%esp)
0836302f +0x221:  call   08394ed2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24972>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24972
08363034 +0x226:  mov    %eax,-0xc(%ebp)
08363037 +0x229:  mov    -0xc(%ebp),%eax
0836303a +0x22c:  movzwl (%eax),%eax
0836303d +0x22f:  cmp    -0xe(%ebp),%ax
08363041 +0x233:  ja     0836305a <+0x24c>
08363043 +0x235:  mov    -0xc(%ebp),%eax
08363046 +0x238:  movzwl 0x2(%eax),%eax
0836304a +0x23c:  cmp    -0xe(%ebp),%ax
0836304e +0x240:  jb     0836305a <+0x24c>
08363050 +0x242:  mov    $0x1,%eax
08363055 +0x247:  jmp    0836313e <+0x330>
0836305a +0x24c:  lea    -0x54(%ebp),%eax
0836305d +0x24f:  mov    %eax,(%esp)
08363060 +0x252:  call   08394ebc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2495c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2495c
08363065 +0x257:  lea    -0x58(%ebp),%eax
08363068 +0x25a:  mov    %eax,0x4(%esp)
0836306c +0x25e:  lea    -0x54(%ebp),%eax
0836306f +0x261:  mov    %eax,(%esp)
08363072 +0x264:  call   08394e90 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24930>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24930
08363077 +0x269:  test   %al,%al
08363079 +0x26b:  jne    08363029 <+0x21b>
0836307b +0x26d:  mov    0x8(%ebp),%eax
0836307e +0x270:  lea    0x86dc(%eax),%edx
08363084 +0x276:  lea    -0x24(%ebp),%eax
08363087 +0x279:  mov    %edx,0x4(%esp)
0836308b +0x27d:  mov    %eax,(%esp)
0836308e +0x280:  call   08394c4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x246ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x246ec
08363093 +0x285:  sub    $0x4,%esp
08363096 +0x288:  lea    -0x24(%ebp),%eax
08363099 +0x28b:  mov    %eax,0x4(%esp)
0836309d +0x28f:  lea    -0x5c(%ebp),%eax
083630a0 +0x292:  mov    %eax,(%esp)
083630a3 +0x295:  call   08394edc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2497c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2497c
083630a8 +0x29a:  mov    0x8(%ebp),%eax
083630ab +0x29d:  lea    0x86dc(%eax),%edx
083630b1 +0x2a3:  lea    -0x20(%ebp),%eax
083630b4 +0x2a6:  mov    %edx,0x4(%esp)
083630b8 +0x2aa:  mov    %eax,(%esp)
083630bb +0x2ad:  call   08394c70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24710>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24710
083630c0 +0x2b2:  sub    $0x4,%esp
083630c3 +0x2b5:  lea    -0x20(%ebp),%eax
083630c6 +0x2b8:  mov    %eax,0x4(%esp)
083630ca +0x2bc:  lea    -0x60(%ebp),%eax
083630cd +0x2bf:  mov    %eax,(%esp)
083630d0 +0x2c2:  call   08394edc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2497c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2497c
083630d5 +0x2c7:  jmp    08363102 <+0x2f4>
083630d7 +0x2c9:  lea    -0x5c(%ebp),%eax
083630da +0x2cc:  mov    %eax,(%esp)
083630dd +0x2cf:  call   08152190 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1ac5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1ac5
083630e2 +0x2d4:  movzwl (%eax),%eax
083630e5 +0x2d7:  cmp    -0xe(%ebp),%ax
083630e9 +0x2db:  sete   %al
083630ec +0x2de:  test   %al,%al
083630ee +0x2e0:  je     083630f7 <+0x2e9>
083630f0 +0x2e2:  mov    $0x1,%eax
083630f5 +0x2e7:  jmp    0836313e <+0x330>
083630f7 +0x2e9:  lea    -0x5c(%ebp),%eax
083630fa +0x2ec:  mov    %eax,(%esp)
083630fd +0x2ef:  call   0815217a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1aaf>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1aaf
08363102 +0x2f4:  lea    -0x60(%ebp),%eax
08363105 +0x2f7:  mov    %eax,0x4(%esp)
08363109 +0x2fb:  lea    -0x5c(%ebp),%eax
0836310c +0x2fe:  mov    %eax,(%esp)
0836310f +0x301:  call   0815214e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1a83>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1a83
08363114 +0x306:  test   %al,%al
08363116 +0x308:  jne    083630d7 <+0x2c9>
08363118 +0x30a:  addl   $0x1,-0x1c(%ebp)
0836311c +0x30e:  addl   $0x1,-0x1c(%ebp)
08363120 +0x312:  mov    0xc(%ebp),%eax
08363123 +0x315:  mov    %eax,(%esp)
08363126 +0x318:  call   0807e3b0 <_init+0xca8>
0836312b +0x31d:  cmp    -0x1c(%ebp),%eax
0836312e +0x320:  seta   %al
08363131 +0x323:  test   %al,%al
08363133 +0x325:  jne    08362e20 <+0x12>
08363139 +0x32b:  mov    $0x0,%eax
0836313e +0x330:  leave
0836313f +0x331:  ret
```

## 反编译 C

```c
// CDataManager::hasSpecialCharacterExceptSpace @ 0x8362e0e

/* CDataManager::hasSpecialCharacterExceptSpace(char const*) */

undefined4 __thiscall CDataManager::hasSpecialCharacterExceptSpace(CDataManager *this,char *param_1)

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
        if ((*local_18 <= *local_1c) && (*local_1c < local_18[1])) {
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
