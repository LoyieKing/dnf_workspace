# CQuestShop

`_GLOBAL__I__ZN10CQuestShopC2Ev`

`global constructors keyed to CQuestShop::CQuestShop()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CQuestShop` | `0x085efe94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085efe94  _GLOBAL__I__ZN10CQuestShopC2Ev
#           global constructors keyed to CQuestShop::CQuestShop()
# range [0x085efe94, 0x085f0d4f]
085efe94 +0x000:  push   %ebp
085efe95 +0x001:  mov    %esp,%ebp
085efe97 +0x003:  sub    $0x18,%esp
085efe9a +0x006:  movl   $0xffff,0x4(%esp)
085efea2 +0x00e:  movl   $0x1,(%esp)
085efea9 +0x015:  call   085efe54 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085efeae +0x01a:  leave
085efeaf +0x01b:  ret
085efeb0 +0x01c:  push   %ebp
085efeb1 +0x01d:  mov    %esp,%ebp
085efeb3 +0x01f:  mov    0x8(%ebp),%eax
085efeb6 +0x022:  mov    0x38(%eax),%eax
085efeb9 +0x025:  pop    %ebp
085efeba +0x026:  ret
085efebb +0x027:  nop
085efebc +0x028:  push   %ebp
085efebd +0x029:  mov    %esp,%ebp
085efebf +0x02b:  sub    $0x18,%esp
085efec2 +0x02e:  mov    0x8(%ebp),%eax
085efec5 +0x031:  mov    %eax,(%esp)
085efec8 +0x034:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085efecd +0x039:  mov    0x8(%ebp),%eax
085efed0 +0x03c:  mov    0x38(%eax),%eax
085efed3 +0x03f:  mov    %eax,%edx
085efed5 +0x041:  sub    0xc(%ebp),%edx
085efed8 +0x044:  mov    0x8(%ebp),%eax
085efedb +0x047:  mov    %edx,0x38(%eax)
085efede +0x04a:  leave
085efedf +0x04b:  ret
085efee0 +0x04c:  push   %ebp
085efee1 +0x04d:  mov    %esp,%ebp
085efee3 +0x04f:  sub    $0x18,%esp
085efee6 +0x052:  mov    0x8(%ebp),%eax
085efee9 +0x055:  mov    %eax,(%esp)
085efeec +0x058:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085efef1 +0x05d:  mov    0x8(%ebp),%eax
085efef4 +0x060:  mov    0xc(%ebp),%edx
085efef7 +0x063:  mov    %edx,0x38(%eax)
085efefa +0x066:  leave
085efefb +0x067:  ret
085efefc +0x068:  push   %ebp
085efefd +0x069:  mov    %esp,%ebp
085efeff +0x06b:  mov    0x8(%ebp),%eax
085eff02 +0x06e:  mov    0xc(%ebp),%edx
085eff05 +0x071:  mov    %edx,0x3c(%eax)
085eff08 +0x074:  pop    %ebp
085eff09 +0x075:  ret
085eff0a +0x076:  push   %ebp
085eff0b +0x077:  mov    %esp,%ebp
085eff0d +0x079:  mov    0x8(%ebp),%eax
085eff10 +0x07c:  mov    0x3c(%eax),%eax
085eff13 +0x07f:  pop    %ebp
085eff14 +0x080:  ret
085eff15 +0x081:  nop
085eff16 +0x082:  push   %ebp
085eff17 +0x083:  mov    %esp,%ebp
085eff19 +0x085:  sub    $0x18,%esp
085eff1c +0x088:  mov    0x8(%ebp),%eax
085eff1f +0x08b:  mov    %eax,(%esp)
085eff22 +0x08e:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085eff27 +0x093:  mov    0x8(%ebp),%eax
085eff2a +0x096:  mov    0x3c(%eax),%eax
085eff2d +0x099:  lea    0x1(%eax),%edx
085eff30 +0x09c:  mov    0x8(%ebp),%eax
085eff33 +0x09f:  mov    %edx,0x3c(%eax)
085eff36 +0x0a2:  leave
085eff37 +0x0a3:  ret
085eff38 +0x0a4:  push   %ebp
085eff39 +0x0a5:  mov    %esp,%ebp
085eff3b +0x0a7:  mov    0x8(%ebp),%eax
085eff3e +0x0aa:  mov    0x40(%eax),%eax
085eff41 +0x0ad:  pop    %ebp
085eff42 +0x0ae:  ret
085eff43 +0x0af:  nop
085eff44 +0x0b0:  push   %ebp
085eff45 +0x0b1:  mov    %esp,%ebp
085eff47 +0x0b3:  mov    0x8(%ebp),%eax
085eff4a +0x0b6:  mov    0x44(%eax),%eax
085eff4d +0x0b9:  pop    %ebp
085eff4e +0x0ba:  ret
085eff4f +0x0bb:  nop
085eff50 +0x0bc:  push   %ebp
085eff51 +0x0bd:  mov    %esp,%ebp
085eff53 +0x0bf:  sub    $0x18,%esp
085eff56 +0x0c2:  mov    0xc(%ebp),%edx
085eff59 +0x0c5:  mov    0x8(%ebp),%eax
085eff5c +0x0c8:  mov    %edx,0x4(%esp)
085eff60 +0x0cc:  mov    %eax,(%esp)
085eff63 +0x0cf:  call   085f00de <+0x24a>
085eff68 +0x0d4:  leave
085eff69 +0x0d5:  ret
085eff6a +0x0d6:  push   %ebp
085eff6b +0x0d7:  mov    %esp,%ebp
085eff6d +0x0d9:  push   %ebx
085eff6e +0x0da:  sub    $0x14,%esp
085eff71 +0x0dd:  mov    0x8(%ebp),%ebx
085eff74 +0x0e0:  mov    0xc(%ebp),%eax
085eff77 +0x0e3:  mov    0x10(%ebp),%edx
085eff7a +0x0e6:  mov    %edx,0x8(%esp)
085eff7e +0x0ea:  mov    %eax,0x4(%esp)
085eff82 +0x0ee:  mov    %ebx,(%esp)
085eff85 +0x0f1:  call   085f01d2 <+0x33e>
085eff8a +0x0f6:  sub    $0x4,%esp
085eff8d +0x0f9:  mov    %ebx,%eax
085eff8f +0x0fb:  mov    -0x4(%ebp),%ebx
085eff92 +0x0fe:  leave
085eff93 +0x0ff:  ret    $0x4
085eff96 +0x102:  push   %ebp
085eff97 +0x103:  mov    %esp,%ebp
085eff99 +0x105:  push   %ebx
085eff9a +0x106:  sub    $0x14,%esp
085eff9d +0x109:  mov    0x8(%ebp),%ebx
085effa0 +0x10c:  mov    0xc(%ebp),%eax
085effa3 +0x10f:  mov    %eax,0x4(%esp)
085effa7 +0x113:  mov    %ebx,(%esp)
085effaa +0x116:  call   085f0290 <+0x3fc>
085effaf +0x11b:  sub    $0x4,%esp
085effb2 +0x11e:  mov    %ebx,%eax
085effb4 +0x120:  mov    -0x4(%ebp),%ebx
085effb7 +0x123:  leave
085effb8 +0x124:  ret    $0x4
085effbb +0x127:  nop
085effbc +0x128:  push   %ebp
085effbd +0x129:  mov    %esp,%ebp
085effbf +0x12b:  mov    0x8(%ebp),%eax
085effc2 +0x12e:  mov    (%eax),%edx
085effc4 +0x130:  mov    0xc(%ebp),%eax
085effc7 +0x133:  mov    (%eax),%eax
085effc9 +0x135:  cmp    %eax,%edx
085effcb +0x137:  setne  %al
085effce +0x13a:  pop    %ebp
085effcf +0x13b:  ret
085effd0 +0x13c:  push   %ebp
085effd1 +0x13d:  mov    %esp,%ebp
085effd3 +0x13f:  mov    0x8(%ebp),%eax
085effd6 +0x142:  mov    (%eax),%eax
085effd8 +0x144:  add    $0x10,%eax
085effdb +0x147:  pop    %ebp
085effdc +0x148:  ret
085effdd +0x149:  push   %ebp
085effde +0x14a:  mov    %esp,%ebp
085effe0 +0x14c:  push   %esi
085effe1 +0x14d:  push   %ebx
085effe2 +0x14e:  sub    $0x10,%esp
085effe5 +0x151:  mov    0x8(%ebp),%esi
085effe8 +0x154:  mov    0x10(%ebp),%eax
085effeb +0x157:  mov    %eax,(%esp)
085effee +0x15a:  call   0807f356 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x426>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x426
085efff3 +0x15f:  mov    %eax,%ebx
085efff5 +0x161:  mov    0xc(%ebp),%eax
085efff8 +0x164:  mov    %eax,(%esp)
085efffb +0x167:  call   080da877 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xa14>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xa14
085f0000 +0x16c:  mov    %ebx,0x8(%esp)
085f0004 +0x170:  mov    %eax,0x4(%esp)
085f0008 +0x174:  mov    %esi,(%esp)
085f000b +0x177:  call   085f02b6 <+0x422>
085f0010 +0x17c:  mov    %esi,%eax
085f0012 +0x17e:  add    $0x10,%esp
085f0015 +0x181:  pop    %ebx
085f0016 +0x182:  pop    %esi
085f0017 +0x183:  pop    %ebp
085f0018 +0x184:  ret    $0x4
085f001b +0x187:  nop
085f001c +0x188:  push   %ebp
085f001d +0x189:  mov    %esp,%ebp
085f001f +0x18b:  sub    $0x18,%esp
085f0022 +0x18e:  mov    0xc(%ebp),%eax
085f0025 +0x191:  mov    %eax,(%esp)
085f0028 +0x194:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
085f002d +0x199:  mov    (%eax),%eax
085f002f +0x19b:  mov    %eax,%edx
085f0031 +0x19d:  mov    0x8(%ebp),%eax
085f0034 +0x1a0:  mov    %dl,(%eax)
085f0036 +0x1a2:  mov    0xc(%ebp),%eax
085f0039 +0x1a5:  add    $0x4,%eax
085f003c +0x1a8:  mov    %eax,(%esp)
085f003f +0x1ab:  call   0807f2d7 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x3a7>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a7
085f0044 +0x1b0:  movzbl (%eax),%eax
085f0047 +0x1b3:  movzbl %al,%edx
085f004a +0x1b6:  mov    0x8(%ebp),%eax
085f004d +0x1b9:  mov    %dx,0x2(%eax)
085f0051 +0x1bd:  leave
085f0052 +0x1be:  ret
085f0053 +0x1bf:  push   %ebp
085f0054 +0x1c0:  mov    %esp,%ebp
085f0056 +0x1c2:  push   %esi
085f0057 +0x1c3:  push   %ebx
085f0058 +0x1c4:  sub    $0x10,%esp
085f005b +0x1c7:  mov    0x8(%ebp),%esi
085f005e +0x1ca:  mov    0x10(%ebp),%eax
085f0061 +0x1cd:  mov    %eax,(%esp)
085f0064 +0x1d0:  call   08238f75 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe61f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe61f
085f0069 +0x1d5:  mov    %eax,%ebx
085f006b +0x1d7:  mov    0xc(%ebp),%eax
085f006e +0x1da:  mov    %eax,(%esp)
085f0071 +0x1dd:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
085f0076 +0x1e2:  mov    %ebx,0x8(%esp)
085f007a +0x1e6:  mov    %eax,0x4(%esp)
085f007e +0x1ea:  mov    %esi,(%esp)
085f0081 +0x1ed:  call   085f02d2 <+0x43e>
085f0086 +0x1f2:  mov    %esi,%eax
085f0088 +0x1f4:  add    $0x10,%esp
085f008b +0x1f7:  pop    %ebx
085f008c +0x1f8:  pop    %esi
085f008d +0x1f9:  pop    %ebp
085f008e +0x1fa:  ret    $0x4
085f0091 +0x1fd:  nop
085f0092 +0x1fe:  push   %ebp
085f0093 +0x1ff:  mov    %esp,%ebp
085f0095 +0x201:  sub    $0x18,%esp
085f0098 +0x204:  mov    0xc(%ebp),%eax
085f009b +0x207:  mov    %eax,(%esp)
085f009e +0x20a:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
085f00a3 +0x20f:  mov    (%eax),%eax
085f00a5 +0x211:  mov    %eax,%edx
085f00a7 +0x213:  mov    0x8(%ebp),%eax
085f00aa +0x216:  mov    %dl,(%eax)
085f00ac +0x218:  mov    0xc(%ebp),%eax
085f00af +0x21b:  add    $0x4,%eax
085f00b2 +0x21e:  mov    %eax,(%esp)
085f00b5 +0x221:  call   08112442 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1954>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1954
085f00ba +0x226:  movzwl (%eax),%eax
085f00bd +0x229:  mov    %eax,%edx
085f00bf +0x22b:  mov    0x8(%ebp),%eax
085f00c2 +0x22e:  mov    %dx,0x2(%eax)
085f00c6 +0x232:  leave
085f00c7 +0x233:  ret
085f00c8 +0x234:  push   %ebp
085f00c9 +0x235:  mov    %esp,%ebp
085f00cb +0x237:  sub    $0x18,%esp
085f00ce +0x23a:  mov    0x8(%ebp),%eax
085f00d1 +0x23d:  mov    (%eax),%eax
085f00d3 +0x23f:  mov    %eax,(%esp)
085f00d6 +0x242:  call   085f0302 <+0x46e>
085f00db +0x247:  leave
085f00dc +0x248:  ret
085f00dd +0x249:  nop
085f00de +0x24a:  push   %ebp
085f00df +0x24b:  mov    %esp,%ebp
085f00e1 +0x24d:  push   %esi
085f00e2 +0x24e:  push   %ebx
085f00e3 +0x24f:  sub    $0x10,%esp
085f00e6 +0x252:  mov    0xc(%ebp),%eax
085f00e9 +0x255:  mov    %eax,(%esp)
085f00ec +0x258:  call   085f036c <+0x4d8>
085f00f1 +0x25d:  mov    0xc(%ebp),%ecx
085f00f4 +0x260:  mov    0x8(%ebp),%edx
085f00f7 +0x263:  mov    %eax,0x8(%esp)
085f00fb +0x267:  mov    %ecx,0x4(%esp)
085f00ff +0x26b:  mov    %edx,(%esp)
085f0102 +0x26e:  call   085f0374 <+0x4e0>
085f0107 +0x273:  mov    0xc(%ebp),%eax
085f010a +0x276:  mov    %eax,(%esp)
085f010d +0x279:  call   085f03cc <+0x538>
085f0112 +0x27e:  test   %eax,%eax
085f0114 +0x280:  setne  %al
085f0117 +0x283:  test   %al,%al
085f0119 +0x285:  je     085f01ca <+0x336>
085f011f +0x28b:  mov    0x8(%ebp),%eax
085f0122 +0x28e:  mov    %eax,(%esp)
085f0125 +0x291:  call   083b9202 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x531ce>  ; global constructors keyed to CServerEvent::m_nExpRate+0x531ce
085f012a +0x296:  mov    %eax,%ebx
085f012c +0x298:  mov    0x8(%ebp),%eax
085f012f +0x29b:  mov    %eax,(%esp)
085f0132 +0x29e:  call   083b91ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x531b6>  ; global constructors keyed to CServerEvent::m_nExpRate+0x531b6
085f0137 +0x2a3:  mov    %eax,%esi
085f0139 +0x2a5:  mov    0xc(%ebp),%eax
085f013c +0x2a8:  mov    %eax,(%esp)
085f013f +0x2ab:  call   085f0500 <+0x66c>
085f0144 +0x2b0:  mov    %esi,0x8(%esp)
085f0148 +0x2b4:  mov    %eax,0x4(%esp)
085f014c +0x2b8:  mov    0x8(%ebp),%eax
085f014f +0x2bb:  mov    %eax,(%esp)
085f0152 +0x2be:  call   085f03d8 <+0x544>
085f0157 +0x2c3:  mov    %eax,(%ebx)
085f0159 +0x2c5:  mov    0x8(%ebp),%eax
085f015c +0x2c8:  mov    %eax,(%esp)
085f015f +0x2cb:  call   083b91f6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x531c2>  ; global constructors keyed to CServerEvent::m_nExpRate+0x531c2
085f0164 +0x2d0:  mov    %eax,%ebx
085f0166 +0x2d2:  mov    0x8(%ebp),%eax
085f0169 +0x2d5:  mov    %eax,(%esp)
085f016c +0x2d8:  call   083b9202 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x531ce>  ; global constructors keyed to CServerEvent::m_nExpRate+0x531ce
085f0171 +0x2dd:  mov    (%eax),%eax
085f0173 +0x2df:  mov    %eax,(%esp)
085f0176 +0x2e2:  call   085f050b <+0x677>
085f017b +0x2e7:  mov    %eax,(%ebx)
085f017d +0x2e9:  mov    0x8(%ebp),%eax
085f0180 +0x2ec:  mov    %eax,(%esp)
085f0183 +0x2ef:  call   083b920e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x531da>  ; global constructors keyed to CServerEvent::m_nExpRate+0x531da
085f0188 +0x2f4:  mov    %eax,%ebx
085f018a +0x2f6:  mov    0x8(%ebp),%eax
085f018d +0x2f9:  mov    %eax,(%esp)
085f0190 +0x2fc:  call   083b9202 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x531ce>  ; global constructors keyed to CServerEvent::m_nExpRate+0x531ce
085f0195 +0x301:  mov    (%eax),%eax
085f0197 +0x303:  mov    %eax,(%esp)
085f019a +0x306:  call   085f051e <+0x68a>
085f019f +0x30b:  mov    %eax,(%ebx)
085f01a1 +0x30d:  mov    0xc(%ebp),%eax
085f01a4 +0x310:  mov    0x14(%eax),%edx
085f01a7 +0x313:  mov    0x8(%ebp),%eax
085f01aa +0x316:  mov    %edx,0x14(%eax)
085f01ad +0x319:  jmp    085f01ca <+0x336>
085f01af +0x31b:  mov    %edx,%ebx
085f01b1 +0x31d:  mov    %eax,%esi
085f01b3 +0x31f:  mov    0x8(%ebp),%eax
085f01b6 +0x322:  mov    %eax,(%esp)
085f01b9 +0x325:  call   08384e1a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x148ba>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x148ba
085f01be +0x32a:  mov    %esi,%eax
085f01c0 +0x32c:  mov    %ebx,%edx
085f01c2 +0x32e:  mov    %eax,(%esp)
085f01c5 +0x331:  call   08ae3750 <_Unwind_Resume>
085f01ca +0x336:  add    $0x10,%esp
085f01cd +0x339:  pop    %ebx
085f01ce +0x33a:  pop    %esi
085f01cf +0x33b:  pop    %ebp
085f01d0 +0x33c:  ret
085f01d1 +0x33d:  nop
085f01d2 +0x33e:  push   %ebp
085f01d3 +0x33f:  mov    %esp,%ebp
085f01d5 +0x341:  push   %esi
085f01d6 +0x342:  push   %ebx
085f01d7 +0x343:  sub    $0x30,%esp
085f01da +0x346:  mov    0x8(%ebp),%ebx
085f01dd +0x349:  mov    0xc(%ebp),%eax
085f01e0 +0x34c:  mov    %eax,(%esp)
085f01e3 +0x34f:  call   083b91ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x531b6>  ; global constructors keyed to CServerEvent::m_nExpRate+0x531b6
085f01e8 +0x354:  mov    %eax,%esi
085f01ea +0x356:  mov    0xc(%ebp),%eax
085f01ed +0x359:  mov    %eax,(%esp)
085f01f0 +0x35c:  call   0839dfba <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x5a56>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x5a56
085f01f5 +0x361:  lea    -0x10(%ebp),%edx
085f01f8 +0x364:  mov    0x10(%ebp),%ecx
085f01fb +0x367:  mov    %ecx,0x10(%esp)
085f01ff +0x36b:  mov    %esi,0xc(%esp)
085f0203 +0x36f:  mov    %eax,0x8(%esp)
085f0207 +0x373:  mov    0xc(%ebp),%eax
085f020a +0x376:  mov    %eax,0x4(%esp)
085f020e +0x37a:  mov    %edx,(%esp)
085f0211 +0x37d:  call   085f0532 <+0x69e>
085f0216 +0x382:  sub    $0x4,%esp
085f0219 +0x385:  lea    -0xc(%ebp),%eax
085f021c +0x388:  mov    0xc(%ebp),%edx
085f021f +0x38b:  mov    %edx,0x4(%esp)
085f0223 +0x38f:  mov    %eax,(%esp)
085f0226 +0x392:  call   085f0290 <+0x3fc>
085f022b +0x397:  sub    $0x4,%esp
085f022e +0x39a:  lea    -0xc(%ebp),%eax
085f0231 +0x39d:  mov    %eax,0x4(%esp)
085f0235 +0x3a1:  lea    -0x10(%ebp),%eax
085f0238 +0x3a4:  mov    %eax,(%esp)
085f023b +0x3a7:  call   085f05d0 <+0x73c>
085f0240 +0x3ac:  test   %al,%al
085f0242 +0x3ae:  jne    085f0269 <+0x3d5>
085f0244 +0x3b0:  mov    -0x10(%ebp),%eax
085f0247 +0x3b3:  mov    %eax,(%esp)
085f024a +0x3b6:  call   085f05ae <+0x71a>
085f024f +0x3bb:  mov    0xc(%ebp),%edx
085f0252 +0x3be:  mov    %eax,0x8(%esp)
085f0256 +0x3c2:  mov    0x10(%ebp),%eax
085f0259 +0x3c5:  mov    %eax,0x4(%esp)
085f025d +0x3c9:  mov    %edx,(%esp)
085f0260 +0x3cc:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
085f0265 +0x3d1:  test   %al,%al
085f0267 +0x3d3:  je     085f027d <+0x3e9>
085f0269 +0x3d5:  mov    0xc(%ebp),%eax
085f026c +0x3d8:  mov    %eax,0x4(%esp)
085f0270 +0x3dc:  mov    %ebx,(%esp)
085f0273 +0x3df:  call   085f0290 <+0x3fc>
085f0278 +0x3e4:  sub    $0x4,%esp
085f027b +0x3e7:  jmp    085f0282 <+0x3ee>
085f027d +0x3e9:  mov    -0x10(%ebp),%eax
085f0280 +0x3ec:  mov    %eax,(%ebx)
085f0282 +0x3ee:  mov    %ebx,%eax
085f0284 +0x3f0:  lea    -0x8(%ebp),%esp
085f0287 +0x3f3:  add    $0x0,%esp
085f028a +0x3f6:  pop    %ebx
085f028b +0x3f7:  pop    %esi
085f028c +0x3f8:  pop    %ebp
085f028d +0x3f9:  ret    $0x4
085f0290 +0x3fc:  push   %ebp
085f0291 +0x3fd:  mov    %esp,%ebp
085f0293 +0x3ff:  push   %ebx
085f0294 +0x400:  sub    $0x14,%esp
085f0297 +0x403:  mov    0x8(%ebp),%ebx
085f029a +0x406:  mov    0xc(%ebp),%eax
085f029d +0x409:  add    $0x4,%eax
085f02a0 +0x40c:  mov    %eax,0x4(%esp)
085f02a4 +0x410:  mov    %ebx,(%esp)
085f02a7 +0x413:  call   085f05e4 <+0x750>
085f02ac +0x418:  mov    %ebx,%eax
085f02ae +0x41a:  add    $0x14,%esp
085f02b1 +0x41d:  pop    %ebx
085f02b2 +0x41e:  pop    %ebp
085f02b3 +0x41f:  ret    $0x4
085f02b6 +0x422:  push   %ebp
085f02b7 +0x423:  mov    %esp,%ebp
085f02b9 +0x425:  mov    0xc(%ebp),%eax
085f02bc +0x428:  mov    (%eax),%edx
085f02be +0x42a:  mov    0x8(%ebp),%eax
085f02c1 +0x42d:  mov    %edx,(%eax)
085f02c3 +0x42f:  mov    0x10(%ebp),%eax
085f02c6 +0x432:  movzbl (%eax),%edx
085f02c9 +0x435:  mov    0x8(%ebp),%eax
085f02cc +0x438:  mov    %dl,0x4(%eax)
085f02cf +0x43b:  pop    %ebp
085f02d0 +0x43c:  ret
085f02d1 +0x43d:  nop
085f02d2 +0x43e:  push   %ebp
085f02d3 +0x43f:  mov    %esp,%ebp
085f02d5 +0x441:  sub    $0x18,%esp
085f02d8 +0x444:  mov    0xc(%ebp),%eax
085f02db +0x447:  mov    %eax,(%esp)
085f02de +0x44a:  call   080c7158 <_GLOBAL__I_g_ServerString_+0x6c3>  ; global constructors keyed to g_ServerString_+0x6c3
085f02e3 +0x44f:  mov    (%eax),%edx
085f02e5 +0x451:  mov    0x8(%ebp),%eax
085f02e8 +0x454:  mov    %edx,(%eax)
085f02ea +0x456:  mov    0x10(%ebp),%eax
085f02ed +0x459:  mov    %eax,(%esp)
085f02f0 +0x45c:  call   08238f75 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe61f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe61f
085f02f5 +0x461:  movzwl (%eax),%edx
085f02f8 +0x464:  mov    0x8(%ebp),%eax
085f02fb +0x467:  mov    %dx,0x4(%eax)
085f02ff +0x46b:  leave
085f0300 +0x46c:  ret
085f0301 +0x46d:  nop
085f0302 +0x46e:  push   %ebp
085f0303 +0x46f:  mov    %esp,%ebp
085f0305 +0x471:  sub    $0x28,%esp
085f0308 +0x474:  jmp    085f0326 <+0x492>
085f030a +0x476:  mov    0x8(%ebp),%eax
085f030d +0x479:  mov    %eax,(%esp)
085f0310 +0x47c:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
085f0315 +0x481:  add    %eax,%eax
085f0317 +0x483:  mov    %eax,0x4(%esp)
085f031b +0x487:  mov    0x8(%ebp),%eax
085f031e +0x48a:  mov    %eax,(%esp)
085f0321 +0x48d:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
085f0326 +0x492:  movl   $0x155,0x4(%esp)
085f032e +0x49a:  mov    0x8(%ebp),%eax
085f0331 +0x49d:  mov    %eax,(%esp)
085f0334 +0x4a0:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
085f0339 +0x4a5:  xor    $0x1,%eax
085f033c +0x4a8:  test   %al,%al
085f033e +0x4aa:  jne    085f030a <+0x476>
085f0340 +0x4ac:  mov    0x8(%ebp),%eax
085f0343 +0x4af:  mov    0x8(%eax),%eax
085f0346 +0x4b2:  mov    %eax,%edx
085f0348 +0x4b4:  mov    0x8(%ebp),%eax
085f034b +0x4b7:  mov    0xc(%eax),%eax
085f034e +0x4ba:  lea    (%edx,%eax,1),%eax
085f0351 +0x4bd:  mov    %eax,-0xc(%ebp)
085f0354 +0x4c0:  movl   $0x155,0x4(%esp)
085f035c +0x4c8:  mov    0x8(%ebp),%eax
085f035f +0x4cb:  mov    %eax,(%esp)
085f0362 +0x4ce:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
085f0367 +0x4d3:  mov    -0xc(%ebp),%eax
085f036a +0x4d6:  leave
085f036b +0x4d7:  ret
085f036c +0x4d8:  push   %ebp
085f036d +0x4d9:  mov    %esp,%ebp
085f036f +0x4db:  mov    0x8(%ebp),%eax
085f0372 +0x4de:  pop    %ebp
085f0373 +0x4df:  ret
085f0374 +0x4e0:  push   %ebp
085f0375 +0x4e1:  mov    %esp,%ebp
085f0377 +0x4e3:  sub    $0x18,%esp
085f037a +0x4e6:  mov    0x8(%ebp),%eax
085f037d +0x4e9:  mov    0x10(%ebp),%edx
085f0380 +0x4ec:  mov    %edx,0x4(%esp)
085f0384 +0x4f0:  mov    %eax,(%esp)
085f0387 +0x4f3:  call   085f05f2 <+0x75e>
085f038c +0x4f8:  mov    0x8(%ebp),%eax
085f038f +0x4fb:  movl   $0x0,0x4(%eax)
085f0396 +0x502:  mov    0x8(%ebp),%eax
085f0399 +0x505:  movl   $0x0,0x8(%eax)
085f03a0 +0x50c:  mov    0x8(%ebp),%eax
085f03a3 +0x50f:  movl   $0x0,0xc(%eax)
085f03aa +0x516:  mov    0x8(%ebp),%eax
085f03ad +0x519:  movl   $0x0,0x10(%eax)
085f03b4 +0x520:  mov    0x8(%ebp),%eax
085f03b7 +0x523:  movl   $0x0,0x14(%eax)
085f03be +0x52a:  mov    0x8(%ebp),%eax
085f03c1 +0x52d:  mov    %eax,(%esp)
085f03c4 +0x530:  call   083cd7ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x677b8>  ; global constructors keyed to CServerEvent::m_nExpRate+0x677b8
085f03c9 +0x535:  leave
085f03ca +0x536:  ret
085f03cb +0x537:  nop
085f03cc +0x538:  push   %ebp
085f03cd +0x539:  mov    %esp,%ebp
085f03cf +0x53b:  mov    0x8(%ebp),%eax
085f03d2 +0x53e:  mov    0x8(%eax),%eax
085f03d5 +0x541:  pop    %ebp
085f03d6 +0x542:  ret
085f03d7 +0x543:  nop
085f03d8 +0x544:  push   %ebp
085f03d9 +0x545:  mov    %esp,%ebp
085f03db +0x547:  push   %esi
085f03dc +0x548:  push   %ebx
085f03dd +0x549:  sub    $0x20,%esp
085f03e0 +0x54c:  mov    0xc(%ebp),%eax
085f03e3 +0x54f:  mov    %eax,0x4(%esp)
085f03e7 +0x553:  mov    0x8(%ebp),%eax
085f03ea +0x556:  mov    %eax,(%esp)
085f03ed +0x559:  call   085f060c <+0x778>
085f03f2 +0x55e:  mov    %eax,-0x10(%ebp)
085f03f5 +0x561:  mov    0x10(%ebp),%edx
085f03f8 +0x564:  mov    -0x10(%ebp),%eax
085f03fb +0x567:  mov    %edx,0x4(%eax)
085f03fe +0x56a:  mov    0xc(%ebp),%eax
085f0401 +0x56d:  mov    0xc(%eax),%eax
085f0404 +0x570:  test   %eax,%eax
085f0406 +0x572:  je     085f0431 <+0x59d>
085f0408 +0x574:  mov    0xc(%ebp),%eax
085f040b +0x577:  mov    %eax,(%esp)
085f040e +0x57a:  call   085f064d <+0x7b9>
085f0413 +0x57f:  mov    -0x10(%ebp),%edx
085f0416 +0x582:  mov    %edx,0x8(%esp)
085f041a +0x586:  mov    %eax,0x4(%esp)
085f041e +0x58a:  mov    0x8(%ebp),%eax
085f0421 +0x58d:  mov    %eax,(%esp)
085f0424 +0x590:  call   085f03d8 <+0x544>
085f0429 +0x595:  mov    %eax,%edx
085f042b +0x597:  mov    -0x10(%ebp),%eax
085f042e +0x59a:  mov    %edx,0xc(%eax)
085f0431 +0x59d:  mov    -0x10(%ebp),%eax
085f0434 +0x5a0:  mov    %eax,0x10(%ebp)
085f0437 +0x5a3:  mov    0xc(%ebp),%eax
085f043a +0x5a6:  mov    %eax,(%esp)
085f043d +0x5a9:  call   085f0658 <+0x7c4>
085f0442 +0x5ae:  mov    %eax,0xc(%ebp)
085f0445 +0x5b1:  jmp    085f04b5 <+0x621>
085f0447 +0x5b3:  mov    0xc(%ebp),%eax
085f044a +0x5b6:  mov    %eax,0x4(%esp)
085f044e +0x5ba:  mov    0x8(%ebp),%eax
085f0451 +0x5bd:  mov    %eax,(%esp)
085f0454 +0x5c0:  call   085f060c <+0x778>
085f0459 +0x5c5:  mov    %eax,-0xc(%ebp)
085f045c +0x5c8:  mov    -0xc(%ebp),%edx
085f045f +0x5cb:  mov    0x10(%ebp),%eax
085f0462 +0x5ce:  mov    %edx,0x8(%eax)
085f0465 +0x5d1:  mov    0x10(%ebp),%edx
085f0468 +0x5d4:  mov    -0xc(%ebp),%eax
085f046b +0x5d7:  mov    %edx,0x4(%eax)
085f046e +0x5da:  mov    0xc(%ebp),%eax
085f0471 +0x5dd:  mov    0xc(%eax),%eax
085f0474 +0x5e0:  test   %eax,%eax
085f0476 +0x5e2:  je     085f04a1 <+0x60d>
085f0478 +0x5e4:  mov    0xc(%ebp),%eax
085f047b +0x5e7:  mov    %eax,(%esp)
085f047e +0x5ea:  call   085f064d <+0x7b9>
085f0483 +0x5ef:  mov    -0xc(%ebp),%edx
085f0486 +0x5f2:  mov    %edx,0x8(%esp)
085f048a +0x5f6:  mov    %eax,0x4(%esp)
085f048e +0x5fa:  mov    0x8(%ebp),%eax
085f0491 +0x5fd:  mov    %eax,(%esp)
085f0494 +0x600:  call   085f03d8 <+0x544>
085f0499 +0x605:  mov    %eax,%edx
085f049b +0x607:  mov    -0xc(%ebp),%eax
085f049e +0x60a:  mov    %edx,0xc(%eax)
085f04a1 +0x60d:  mov    -0xc(%ebp),%eax
085f04a4 +0x610:  mov    %eax,0x10(%ebp)
085f04a7 +0x613:  mov    0xc(%ebp),%eax
085f04aa +0x616:  mov    %eax,(%esp)
085f04ad +0x619:  call   085f0658 <+0x7c4>
085f04b2 +0x61e:  mov    %eax,0xc(%ebp)
085f04b5 +0x621:  cmpl   $0x0,0xc(%ebp)
085f04b9 +0x625:  setne  %al
085f04bc +0x628:  test   %al,%al
085f04be +0x62a:  jne    085f0447 <+0x5b3>
085f04c0 +0x62c:  jmp    085f04f6 <+0x662>
085f04c2 +0x62e:  mov    %eax,(%esp)
085f04c5 +0x631:  call   08725ce0 <__cxa_begin_catch>
085f04ca +0x636:  mov    -0x10(%ebp),%eax
085f04cd +0x639:  mov    %eax,0x4(%esp)
085f04d1 +0x63d:  mov    0x8(%ebp),%eax
085f04d4 +0x640:  mov    %eax,(%esp)
085f04d7 +0x643:  call   0839df64 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x5a00>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x5a00
085f04dc +0x648:  call   08724be0 <__cxa_rethrow>
085f04e1 +0x64d:  mov    %edx,%ebx
085f04e3 +0x64f:  mov    %eax,%esi
085f04e5 +0x651:  call   08725c30 <__cxa_end_catch>
085f04ea +0x656:  mov    %esi,%eax
085f04ec +0x658:  mov    %ebx,%edx
085f04ee +0x65a:  mov    %eax,(%esp)
085f04f1 +0x65d:  call   08ae3750 <_Unwind_Resume>
085f04f6 +0x662:  mov    -0x10(%ebp),%eax
085f04f9 +0x665:  add    $0x20,%esp
085f04fc +0x668:  pop    %ebx
085f04fd +0x669:  pop    %esi
085f04fe +0x66a:  pop    %ebp
085f04ff +0x66b:  ret
085f0500 +0x66c:  push   %ebp
085f0501 +0x66d:  mov    %esp,%ebp
085f0503 +0x66f:  mov    0x8(%ebp),%eax
085f0506 +0x672:  mov    0x8(%eax),%eax
085f0509 +0x675:  pop    %ebp
085f050a +0x676:  ret
085f050b +0x677:  push   %ebp
085f050c +0x678:  mov    %esp,%ebp
085f050e +0x67a:  sub    $0x18,%esp
085f0511 +0x67d:  mov    0x8(%ebp),%eax
085f0514 +0x680:  mov    %eax,(%esp)
085f0517 +0x683:  call   080f0f9a <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x1c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
085f051c +0x688:  leave
085f051d +0x689:  ret
085f051e +0x68a:  push   %ebp
085f051f +0x68b:  mov    %esp,%ebp
085f0521 +0x68d:  sub    $0x18,%esp
085f0524 +0x690:  mov    0x8(%ebp),%eax
085f0527 +0x693:  mov    %eax,(%esp)
085f052a +0x696:  call   080f0fbc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3e
085f052f +0x69b:  leave
085f0530 +0x69c:  ret
085f0531 +0x69d:  nop
085f0532 +0x69e:  push   %ebp
085f0533 +0x69f:  mov    %esp,%ebp
085f0535 +0x6a1:  push   %ebx
085f0536 +0x6a2:  sub    $0x14,%esp
085f0539 +0x6a5:  mov    0x8(%ebp),%ebx
085f053c +0x6a8:  jmp    085f058a <+0x6f6>
085f053e +0x6aa:  mov    0x10(%ebp),%eax
085f0541 +0x6ad:  mov    %eax,(%esp)
085f0544 +0x6b0:  call   085f0663 <+0x7cf>
085f0549 +0x6b5:  mov    0xc(%ebp),%edx
085f054c +0x6b8:  mov    0x18(%ebp),%ecx
085f054f +0x6bb:  mov    %ecx,0x8(%esp)
085f0553 +0x6bf:  mov    %eax,0x4(%esp)
085f0557 +0x6c3:  mov    %edx,(%esp)
085f055a +0x6c6:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
085f055f +0x6cb:  xor    $0x1,%eax
085f0562 +0x6ce:  test   %al,%al
085f0564 +0x6d0:  je     085f057c <+0x6e8>
085f0566 +0x6d2:  mov    0x10(%ebp),%eax
085f0569 +0x6d5:  mov    %eax,0x14(%ebp)
085f056c +0x6d8:  mov    0x10(%ebp),%eax
085f056f +0x6db:  mov    %eax,(%esp)
085f0572 +0x6de:  call   083b91aa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x53176>  ; global constructors keyed to CServerEvent::m_nExpRate+0x53176
085f0577 +0x6e3:  mov    %eax,0x10(%ebp)
085f057a +0x6e6:  jmp    085f058a <+0x6f6>
085f057c +0x6e8:  mov    0x10(%ebp),%eax
085f057f +0x6eb:  mov    %eax,(%esp)
085f0582 +0x6ee:  call   083b919f <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x5316b>  ; global constructors keyed to CServerEvent::m_nExpRate+0x5316b
085f0587 +0x6f3:  mov    %eax,0x10(%ebp)
085f058a +0x6f6:  cmpl   $0x0,0x10(%ebp)
085f058e +0x6fa:  setne  %al
085f0591 +0x6fd:  test   %al,%al
085f0593 +0x6ff:  jne    085f053e <+0x6aa>
085f0595 +0x701:  mov    0x14(%ebp),%eax
085f0598 +0x704:  mov    %eax,0x4(%esp)
085f059c +0x708:  mov    %ebx,(%esp)
085f059f +0x70b:  call   085f05e4 <+0x750>
085f05a4 +0x710:  mov    %ebx,%eax
085f05a6 +0x712:  add    $0x14,%esp
085f05a9 +0x715:  pop    %ebx
085f05aa +0x716:  pop    %ebp
085f05ab +0x717:  ret    $0x4
085f05ae +0x71a:  push   %ebp
085f05af +0x71b:  mov    %esp,%ebp
085f05b1 +0x71d:  sub    $0x28,%esp
085f05b4 +0x720:  mov    0x8(%ebp),%eax
085f05b7 +0x723:  mov    %eax,(%esp)
085f05ba +0x726:  call   085f0685 <+0x7f1>
085f05bf +0x72b:  mov    %eax,0x4(%esp)
085f05c3 +0x72f:  lea    -0x9(%ebp),%eax
085f05c6 +0x732:  mov    %eax,(%esp)
085f05c9 +0x735:  call   085f0690 <+0x7fc>
085f05ce +0x73a:  leave
085f05cf +0x73b:  ret
085f05d0 +0x73c:  push   %ebp
085f05d1 +0x73d:  mov    %esp,%ebp
085f05d3 +0x73f:  mov    0x8(%ebp),%eax
085f05d6 +0x742:  mov    (%eax),%edx
085f05d8 +0x744:  mov    0xc(%ebp),%eax
085f05db +0x747:  mov    (%eax),%eax
085f05dd +0x749:  cmp    %eax,%edx
085f05df +0x74b:  sete   %al
085f05e2 +0x74e:  pop    %ebp
085f05e3 +0x74f:  ret
085f05e4 +0x750:  push   %ebp
085f05e5 +0x751:  mov    %esp,%ebp
085f05e7 +0x753:  mov    0xc(%ebp),%edx
085f05ea +0x756:  mov    0x8(%ebp),%eax
085f05ed +0x759:  mov    %edx,(%eax)
085f05ef +0x75b:  pop    %ebp
085f05f0 +0x75c:  ret
085f05f1 +0x75d:  nop
085f05f2 +0x75e:  push   %ebp
085f05f3 +0x75f:  mov    %esp,%ebp
085f05f5 +0x761:  sub    $0x18,%esp
085f05f8 +0x764:  mov    0xc(%ebp),%edx
085f05fb +0x767:  mov    0x8(%ebp),%eax
085f05fe +0x76a:  mov    %edx,0x4(%esp)
085f0602 +0x76e:  mov    %eax,(%esp)
085f0605 +0x771:  call   085f0698 <+0x804>
085f060a +0x776:  leave
085f060b +0x777:  ret
085f060c +0x778:  push   %ebp
085f060d +0x779:  mov    %esp,%ebp
085f060f +0x77b:  sub    $0x28,%esp
085f0612 +0x77e:  mov    0xc(%ebp),%eax
085f0615 +0x781:  add    $0x10,%eax
085f0618 +0x784:  mov    %eax,0x4(%esp)
085f061c +0x788:  mov    0x8(%ebp),%eax
085f061f +0x78b:  mov    %eax,(%esp)
085f0622 +0x78e:  call   085f069e <+0x80a>
085f0627 +0x793:  mov    %eax,-0xc(%ebp)
085f062a +0x796:  mov    0xc(%ebp),%eax
085f062d +0x799:  mov    (%eax),%edx
085f062f +0x79b:  mov    -0xc(%ebp),%eax
085f0632 +0x79e:  mov    %edx,(%eax)
085f0634 +0x7a0:  mov    -0xc(%ebp),%eax
085f0637 +0x7a3:  movl   $0x0,0x8(%eax)
085f063e +0x7aa:  mov    -0xc(%ebp),%eax
085f0641 +0x7ad:  movl   $0x0,0xc(%eax)
085f0648 +0x7b4:  mov    -0xc(%ebp),%eax
085f064b +0x7b7:  leave
085f064c +0x7b8:  ret
085f064d +0x7b9:  push   %ebp
085f064e +0x7ba:  mov    %esp,%ebp
085f0650 +0x7bc:  mov    0x8(%ebp),%eax
085f0653 +0x7bf:  mov    0xc(%eax),%eax
085f0656 +0x7c2:  pop    %ebp
085f0657 +0x7c3:  ret
085f0658 +0x7c4:  push   %ebp
085f0659 +0x7c5:  mov    %esp,%ebp
085f065b +0x7c7:  mov    0x8(%ebp),%eax
085f065e +0x7ca:  mov    0x8(%eax),%eax
085f0661 +0x7cd:  pop    %ebp
085f0662 +0x7ce:  ret
085f0663 +0x7cf:  push   %ebp
085f0664 +0x7d0:  mov    %esp,%ebp
085f0666 +0x7d2:  sub    $0x28,%esp
085f0669 +0x7d5:  mov    0x8(%ebp),%eax
085f066c +0x7d8:  mov    %eax,(%esp)
085f066f +0x7db:  call   085f071f <+0x88b>
085f0674 +0x7e0:  mov    %eax,0x4(%esp)
085f0678 +0x7e4:  lea    -0x9(%ebp),%eax
085f067b +0x7e7:  mov    %eax,(%esp)
085f067e +0x7ea:  call   085f0690 <+0x7fc>
085f0683 +0x7ef:  leave
085f0684 +0x7f0:  ret
085f0685 +0x7f1:  push   %ebp
085f0686 +0x7f2:  mov    %esp,%ebp
085f0688 +0x7f4:  mov    0x8(%ebp),%eax
085f068b +0x7f7:  add    $0x10,%eax
085f068e +0x7fa:  pop    %ebp
085f068f +0x7fb:  ret
085f0690 +0x7fc:  push   %ebp
085f0691 +0x7fd:  mov    %esp,%ebp
085f0693 +0x7ff:  mov    0xc(%ebp),%eax
085f0696 +0x802:  pop    %ebp
085f0697 +0x803:  ret
085f0698 +0x804:  push   %ebp
085f0699 +0x805:  mov    %esp,%ebp
085f069b +0x807:  pop    %ebp
085f069c +0x808:  ret
085f069d +0x809:  nop
085f069e +0x80a:  push   %ebp
085f069f +0x80b:  mov    %esp,%ebp
085f06a1 +0x80d:  push   %esi
085f06a2 +0x80e:  push   %ebx
085f06a3 +0x80f:  sub    $0x20,%esp
085f06a6 +0x812:  mov    0x8(%ebp),%eax
085f06a9 +0x815:  mov    %eax,(%esp)
085f06ac +0x818:  call   085f072a <+0x896>
085f06b1 +0x81d:  mov    %eax,-0xc(%ebp)
085f06b4 +0x820:  mov    0xc(%ebp),%eax
085f06b7 +0x823:  mov    %eax,(%esp)
085f06ba +0x826:  call   085f074d <+0x8b9>
085f06bf +0x82b:  mov    %eax,%ebx
085f06c1 +0x82d:  mov    0x8(%ebp),%eax
085f06c4 +0x830:  mov    %eax,(%esp)
085f06c7 +0x833:  call   083cd81e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x677ea>  ; global constructors keyed to CServerEvent::m_nExpRate+0x677ea
085f06cc +0x838:  mov    %ebx,0x8(%esp)
085f06d0 +0x83c:  mov    -0xc(%ebp),%edx
085f06d3 +0x83f:  mov    %edx,0x4(%esp)
085f06d7 +0x843:  mov    %eax,(%esp)
085f06da +0x846:  call   085f0756 <+0x8c2>
085f06df +0x84b:  jmp    085f0715 <+0x881>
085f06e1 +0x84d:  mov    %eax,(%esp)
085f06e4 +0x850:  call   08725ce0 <__cxa_begin_catch>
085f06e9 +0x855:  mov    -0xc(%ebp),%eax
085f06ec +0x858:  mov    %eax,0x4(%esp)
085f06f0 +0x85c:  mov    0x8(%ebp),%eax
085f06f3 +0x85f:  mov    %eax,(%esp)
085f06f6 +0x862:  call   083cd924 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x678f0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x678f0
085f06fb +0x867:  call   08724be0 <__cxa_rethrow>
085f0700 +0x86c:  mov    %edx,%ebx
085f0702 +0x86e:  mov    %eax,%esi
085f0704 +0x870:  call   08725c30 <__cxa_end_catch>
085f0709 +0x875:  mov    %esi,%eax
085f070b +0x877:  mov    %ebx,%edx
085f070d +0x879:  mov    %eax,(%esp)
085f0710 +0x87c:  call   08ae3750 <_Unwind_Resume>
085f0715 +0x881:  mov    -0xc(%ebp),%eax
085f0718 +0x884:  add    $0x20,%esp
085f071b +0x887:  pop    %ebx
085f071c +0x888:  pop    %esi
085f071d +0x889:  pop    %ebp
085f071e +0x88a:  ret
085f071f +0x88b:  push   %ebp
085f0720 +0x88c:  mov    %esp,%ebp
085f0722 +0x88e:  mov    0x8(%ebp),%eax
085f0725 +0x891:  add    $0x10,%eax
085f0728 +0x894:  pop    %ebp
085f0729 +0x895:  ret
085f072a +0x896:  push   %ebp
085f072b +0x897:  mov    %esp,%ebp
085f072d +0x899:  sub    $0x18,%esp
085f0730 +0x89c:  mov    0x8(%ebp),%eax
085f0733 +0x89f:  movl   $0x0,0x8(%esp)
085f073b +0x8a7:  movl   $0x1,0x4(%esp)
085f0743 +0x8af:  mov    %eax,(%esp)
085f0746 +0x8b2:  call   085f07be <+0x92a>
085f074b +0x8b7:  leave
085f074c +0x8b8:  ret
085f074d +0x8b9:  push   %ebp
085f074e +0x8ba:  mov    %esp,%ebp
085f0750 +0x8bc:  mov    0x8(%ebp),%eax
085f0753 +0x8bf:  pop    %ebp
085f0754 +0x8c0:  ret
085f0755 +0x8c1:  nop
085f0756 +0x8c2:  push   %ebp
085f0757 +0x8c3:  mov    %esp,%ebp
085f0759 +0x8c5:  push   %edi
085f075a +0x8c6:  push   %esi
085f075b +0x8c7:  push   %ebx
085f075c +0x8c8:  sub    $0x2c,%esp
085f075f +0x8cb:  mov    0x10(%ebp),%eax
085f0762 +0x8ce:  mov    %eax,(%esp)
085f0765 +0x8d1:  call   085f074d <+0x8b9>
085f076a +0x8d6:  mov    %eax,%edi
085f076c +0x8d8:  mov    0xc(%ebp),%esi
085f076f +0x8db:  mov    %esi,0x4(%esp)
085f0773 +0x8df:  movl   $0x44,(%esp)
085f077a +0x8e6:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
085f077f +0x8eb:  mov    %eax,%ebx
085f0781 +0x8ed:  mov    %ebx,%eax
085f0783 +0x8ef:  test   %eax,%eax
085f0785 +0x8f1:  je     085f07b5 <+0x921>
085f0787 +0x8f3:  mov    %ebx,%eax
085f0789 +0x8f5:  mov    %edi,0x4(%esp)
085f078d +0x8f9:  mov    %eax,(%esp)
085f0790 +0x8fc:  call   085f094c <+0xab8>
085f0795 +0x901:  jmp    085f07b5 <+0x921>
085f0797 +0x903:  mov    %edx,%edi
085f0799 +0x905:  mov    %eax,-0x1c(%ebp)
085f079c +0x908:  mov    %esi,0x4(%esp)
085f07a0 +0x90c:  mov    %ebx,(%esp)
085f07a3 +0x90f:  call   0807fff6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1c
085f07a8 +0x914:  mov    -0x1c(%ebp),%eax
085f07ab +0x917:  mov    %edi,%edx
085f07ad +0x919:  mov    %eax,(%esp)
085f07b0 +0x91c:  call   08ae3750 <_Unwind_Resume>
085f07b5 +0x921:  add    $0x2c,%esp
085f07b8 +0x924:  pop    %ebx
085f07b9 +0x925:  pop    %esi
085f07ba +0x926:  pop    %edi
085f07bb +0x927:  pop    %ebp
085f07bc +0x928:  ret
085f07bd +0x929:  nop
085f07be +0x92a:  push   %ebp
085f07bf +0x92b:  mov    %esp,%ebp
085f07c1 +0x92d:  sub    $0x18,%esp
085f07c4 +0x930:  mov    0x8(%ebp),%eax
085f07c7 +0x933:  mov    %eax,(%esp)
085f07ca +0x936:  call   085f0998 <+0xb04>
085f07cf +0x93b:  cmp    0xc(%ebp),%eax
085f07d2 +0x93e:  setb   %al
085f07d5 +0x941:  movzbl %al,%eax
085f07d8 +0x944:  test   %eax,%eax
085f07da +0x946:  setne  %al
085f07dd +0x949:  test   %al,%al
085f07df +0x94b:  je     085f07e6 <+0x952>
085f07e1 +0x94d:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
085f07e6 +0x952:  mov    0xc(%ebp),%eax
085f07e9 +0x955:  shl    $0x2,%eax
085f07ec +0x958:  mov    %eax,%edx
085f07ee +0x95a:  shl    $0x4,%edx
085f07f1 +0x95d:  add    %edx,%eax
085f07f3 +0x95f:  mov    %eax,(%esp)
085f07f6 +0x962:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085f07fb +0x967:  leave
085f07fc +0x968:  ret
085f07fd +0x969:  nop
085f07fe +0x96a:  push   %ebp
085f07ff +0x96b:  mov    %esp,%ebp
085f0801 +0x96d:  push   %esi
085f0802 +0x96e:  push   %ebx
085f0803 +0x96f:  sub    $0x10,%esp
085f0806 +0x972:  mov    0xc(%ebp),%edx
085f0809 +0x975:  mov    0x8(%ebp),%eax
085f080c +0x978:  mov    %edx,0x4(%esp)
085f0810 +0x97c:  mov    %eax,(%esp)
085f0813 +0x97f:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
085f0818 +0x984:  mov    0xc(%ebp),%eax
085f081b +0x987:  lea    0x4(%eax),%edx
085f081e +0x98a:  mov    0x8(%ebp),%eax
085f0821 +0x98d:  add    $0x4,%eax
085f0824 +0x990:  mov    %edx,0x4(%esp)
085f0828 +0x994:  mov    %eax,(%esp)
085f082b +0x997:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
085f0830 +0x99c:  mov    0xc(%ebp),%eax
085f0833 +0x99f:  lea    0x8(%eax),%edx
085f0836 +0x9a2:  mov    0x8(%ebp),%eax
085f0839 +0x9a5:  add    $0x8,%eax
085f083c +0x9a8:  mov    %edx,0x4(%esp)
085f0840 +0x9ac:  mov    %eax,(%esp)
085f0843 +0x9af:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
085f0848 +0x9b4:  mov    0xc(%ebp),%eax
085f084b +0x9b7:  lea    0xc(%eax),%edx
085f084e +0x9ba:  mov    0x8(%ebp),%eax
085f0851 +0x9bd:  add    $0xc,%eax
085f0854 +0x9c0:  mov    %edx,0x4(%esp)
085f0858 +0x9c4:  mov    %eax,(%esp)
085f085b +0x9c7:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
085f0860 +0x9cc:  mov    0xc(%ebp),%eax
085f0863 +0x9cf:  mov    0x10(%eax),%edx
085f0866 +0x9d2:  mov    0x8(%ebp),%eax
085f0869 +0x9d5:  mov    %edx,0x10(%eax)
085f086c +0x9d8:  mov    0xc(%ebp),%eax
085f086f +0x9db:  movzbl 0x14(%eax),%edx
085f0873 +0x9df:  mov    0x8(%ebp),%eax
085f0876 +0x9e2:  mov    %dl,0x14(%eax)
085f0879 +0x9e5:  mov    0xc(%ebp),%eax
085f087c +0x9e8:  mov    0x18(%eax),%edx
085f087f +0x9eb:  mov    0x8(%ebp),%eax
085f0882 +0x9ee:  mov    %edx,0x18(%eax)
085f0885 +0x9f1:  mov    0xc(%ebp),%eax
085f0888 +0x9f4:  mov    0x1c(%eax),%edx
085f088b +0x9f7:  mov    0x8(%ebp),%eax
085f088e +0x9fa:  mov    %edx,0x1c(%eax)
085f0891 +0x9fd:  mov    0xc(%ebp),%eax
085f0894 +0xa00:  mov    0x20(%eax),%edx
085f0897 +0xa03:  mov    0x8(%ebp),%eax
085f089a +0xa06:  mov    %edx,0x20(%eax)
085f089d +0xa09:  mov    0xc(%ebp),%eax
085f08a0 +0xa0c:  lea    0x24(%eax),%edx
085f08a3 +0xa0f:  mov    0x8(%ebp),%eax
085f08a6 +0xa12:  add    $0x24,%eax
085f08a9 +0xa15:  mov    %edx,0x4(%esp)
085f08ad +0xa19:  mov    %eax,(%esp)
085f08b0 +0xa1c:  call   085f09a2 <+0xb0e>
085f08b5 +0xa21:  jmp    085f091a <+0xa86>
085f08b7 +0xa23:  mov    %edx,%ebx
085f08b9 +0xa25:  mov    %eax,%esi
085f08bb +0xa27:  mov    0x8(%ebp),%eax
085f08be +0xa2a:  add    $0xc,%eax
085f08c1 +0xa2d:  mov    %eax,(%esp)
085f08c4 +0xa30:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f08c9 +0xa35:  mov    %esi,%eax
085f08cb +0xa37:  mov    %ebx,%edx
085f08cd +0xa39:  jmp    085f08cf <+0xa3b>
085f08cf +0xa3b:  mov    %edx,%ebx
085f08d1 +0xa3d:  mov    %eax,%esi
085f08d3 +0xa3f:  mov    0x8(%ebp),%eax
085f08d6 +0xa42:  add    $0x8,%eax
085f08d9 +0xa45:  mov    %eax,(%esp)
085f08dc +0xa48:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f08e1 +0xa4d:  mov    %esi,%eax
085f08e3 +0xa4f:  mov    %ebx,%edx
085f08e5 +0xa51:  jmp    085f08e7 <+0xa53>
085f08e7 +0xa53:  mov    %edx,%ebx
085f08e9 +0xa55:  mov    %eax,%esi
085f08eb +0xa57:  mov    0x8(%ebp),%eax
085f08ee +0xa5a:  add    $0x4,%eax
085f08f1 +0xa5d:  mov    %eax,(%esp)
085f08f4 +0xa60:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f08f9 +0xa65:  mov    %esi,%eax
085f08fb +0xa67:  mov    %ebx,%edx
085f08fd +0xa69:  jmp    085f08ff <+0xa6b>
085f08ff +0xa6b:  mov    %edx,%ebx
085f0901 +0xa6d:  mov    %eax,%esi
085f0903 +0xa6f:  mov    0x8(%ebp),%eax
085f0906 +0xa72:  mov    %eax,(%esp)
085f0909 +0xa75:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f090e +0xa7a:  mov    %esi,%eax
085f0910 +0xa7c:  mov    %ebx,%edx
085f0912 +0xa7e:  mov    %eax,(%esp)
085f0915 +0xa81:  call   08ae3750 <_Unwind_Resume>
085f091a +0xa86:  add    $0x10,%esp
085f091d +0xa89:  pop    %ebx
085f091e +0xa8a:  pop    %esi
085f091f +0xa8b:  pop    %ebp
085f0920 +0xa8c:  ret
085f0921 +0xa8d:  nop
085f0922 +0xa8e:  push   %ebp
085f0923 +0xa8f:  mov    %esp,%ebp
085f0925 +0xa91:  sub    $0x18,%esp
085f0928 +0xa94:  mov    0xc(%ebp),%eax
085f092b +0xa97:  mov    (%eax),%edx
085f092d +0xa99:  mov    0x8(%ebp),%eax
085f0930 +0xa9c:  mov    %edx,(%eax)
085f0932 +0xa9e:  mov    0xc(%ebp),%eax
085f0935 +0xaa1:  lea    0x4(%eax),%edx
085f0938 +0xaa4:  mov    0x8(%ebp),%eax
085f093b +0xaa7:  add    $0x4,%eax
085f093e +0xaaa:  mov    %edx,0x4(%esp)
085f0942 +0xaae:  mov    %eax,(%esp)
085f0945 +0xab1:  call   085f07fe <+0x96a>
085f094a +0xab6:  leave
085f094b +0xab7:  ret
085f094c +0xab8:  push   %ebp
085f094d +0xab9:  mov    %esp,%ebp
085f094f +0xabb:  sub    $0x18,%esp
085f0952 +0xabe:  mov    0x8(%ebp),%eax
085f0955 +0xac1:  movl   $0x0,(%eax)
085f095b +0xac7:  mov    0x8(%ebp),%eax
085f095e +0xaca:  movl   $0x0,0x4(%eax)
085f0965 +0xad1:  mov    0x8(%ebp),%eax
085f0968 +0xad4:  movl   $0x0,0x8(%eax)
085f096f +0xadb:  mov    0x8(%ebp),%eax
085f0972 +0xade:  movl   $0x0,0xc(%eax)
085f0979 +0xae5:  mov    0xc(%ebp),%eax
085f097c +0xae8:  mov    %eax,(%esp)
085f097f +0xaeb:  call   085f074d <+0x8b9>
085f0984 +0xaf0:  mov    0x8(%ebp),%edx
085f0987 +0xaf3:  add    $0x10,%edx
085f098a +0xaf6:  mov    %eax,0x4(%esp)
085f098e +0xafa:  mov    %edx,(%esp)
085f0991 +0xafd:  call   085f0922 <+0xa8e>
085f0996 +0xb02:  leave
085f0997 +0xb03:  ret
085f0998 +0xb04:  push   %ebp
085f0999 +0xb05:  mov    %esp,%ebp
085f099b +0xb07:  mov    $0x3c3c3c3,%eax
085f09a0 +0xb0c:  pop    %ebp
085f09a1 +0xb0d:  ret
085f09a2 +0xb0e:  push   %ebp
085f09a3 +0xb0f:  mov    %esp,%ebp
085f09a5 +0xb11:  push   %esi
085f09a6 +0xb12:  push   %ebx
085f09a7 +0xb13:  sub    $0x20,%esp
085f09aa +0xb16:  mov    0xc(%ebp),%eax
085f09ad +0xb19:  mov    %eax,(%esp)
085f09b0 +0xb1c:  call   085f0a70 <+0xbdc>
085f09b5 +0xb21:  mov    %eax,%ebx
085f09b7 +0xb23:  mov    0xc(%ebp),%eax
085f09ba +0xb26:  mov    %eax,(%esp)
085f09bd +0xb29:  call   085f0a56 <+0xbc2>
085f09c2 +0xb2e:  mov    0x8(%ebp),%edx
085f09c5 +0xb31:  mov    %ebx,0x8(%esp)
085f09c9 +0xb35:  mov    %eax,0x4(%esp)
085f09cd +0xb39:  mov    %edx,(%esp)
085f09d0 +0xb3c:  call   085f0a78 <+0xbe4>
085f09d5 +0xb41:  mov    0x8(%ebp),%eax
085f09d8 +0xb44:  mov    %eax,(%esp)
085f09db +0xb47:  call   0839df1a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x59b6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x59b6
085f09e0 +0xb4c:  mov    %eax,%ebx
085f09e2 +0xb4e:  mov    0x8(%ebp),%eax
085f09e5 +0xb51:  mov    (%eax),%esi
085f09e7 +0xb53:  lea    -0x10(%ebp),%eax
085f09ea +0xb56:  mov    0xc(%ebp),%edx
085f09ed +0xb59:  mov    %edx,0x4(%esp)
085f09f1 +0xb5d:  mov    %eax,(%esp)
085f09f4 +0xb60:  call   085f0b16 <+0xc82>
085f09f9 +0xb65:  sub    $0x4,%esp
085f09fc +0xb68:  lea    -0xc(%ebp),%eax
085f09ff +0xb6b:  mov    0xc(%ebp),%edx
085f0a02 +0xb6e:  mov    %edx,0x4(%esp)
085f0a06 +0xb72:  mov    %eax,(%esp)
085f0a09 +0xb75:  call   085f0aea <+0xc56>
085f0a0e +0xb7a:  sub    $0x4,%esp
085f0a11 +0xb7d:  mov    %ebx,0xc(%esp)
085f0a15 +0xb81:  mov    %esi,0x8(%esp)
085f0a19 +0xb85:  mov    -0x10(%ebp),%eax
085f0a1c +0xb88:  mov    %eax,0x4(%esp)
085f0a20 +0xb8c:  mov    -0xc(%ebp),%eax
085f0a23 +0xb8f:  mov    %eax,(%esp)
085f0a26 +0xb92:  call   085f0b42 <+0xcae>
085f0a2b +0xb97:  mov    0x8(%ebp),%edx
085f0a2e +0xb9a:  mov    %eax,0x4(%edx)
085f0a31 +0xb9d:  lea    -0x8(%ebp),%esp
085f0a34 +0xba0:  add    $0x0,%esp
085f0a37 +0xba3:  pop    %ebx
085f0a38 +0xba4:  pop    %esi
085f0a39 +0xba5:  pop    %ebp
085f0a3a +0xba6:  ret
085f0a3b +0xba7:  mov    %edx,%ebx
085f0a3d +0xba9:  mov    %eax,%esi
085f0a3f +0xbab:  mov    0x8(%ebp),%eax
085f0a42 +0xbae:  mov    %eax,(%esp)
085f0a45 +0xbb1:  call   0839deb4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x5950>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x5950
085f0a4a +0xbb6:  mov    %esi,%eax
085f0a4c +0xbb8:  mov    %ebx,%edx
085f0a4e +0xbba:  mov    %eax,(%esp)
085f0a51 +0xbbd:  call   08ae3750 <_Unwind_Resume>
085f0a56 +0xbc2:  push   %ebp
085f0a57 +0xbc3:  mov    %esp,%ebp
085f0a59 +0xbc5:  mov    0x8(%ebp),%eax
085f0a5c +0xbc8:  mov    0x4(%eax),%eax
085f0a5f +0xbcb:  mov    %eax,%edx
085f0a61 +0xbcd:  mov    0x8(%ebp),%eax
085f0a64 +0xbd0:  mov    (%eax),%eax
085f0a66 +0xbd2:  mov    %edx,%ecx
085f0a68 +0xbd4:  sub    %eax,%ecx
085f0a6a +0xbd6:  mov    %ecx,%eax
085f0a6c +0xbd8:  sar    %eax
085f0a6e +0xbda:  pop    %ebp
085f0a6f +0xbdb:  ret
085f0a70 +0xbdc:  push   %ebp
085f0a71 +0xbdd:  mov    %esp,%ebp
085f0a73 +0xbdf:  mov    0x8(%ebp),%eax
085f0a76 +0xbe2:  pop    %ebp
085f0a77 +0xbe3:  ret
085f0a78 +0xbe4:  push   %ebp
085f0a79 +0xbe5:  mov    %esp,%ebp
085f0a7b +0xbe7:  push   %esi
085f0a7c +0xbe8:  push   %ebx
085f0a7d +0xbe9:  sub    $0x10,%esp
085f0a80 +0xbec:  mov    0x8(%ebp),%eax
085f0a83 +0xbef:  mov    0x10(%ebp),%edx
085f0a86 +0xbf2:  mov    %edx,0x4(%esp)
085f0a8a +0xbf6:  mov    %eax,(%esp)
085f0a8d +0xbf9:  call   085f0b64 <+0xcd0>
085f0a92 +0xbfe:  mov    0xc(%ebp),%eax
085f0a95 +0xc01:  mov    %eax,0x4(%esp)
085f0a99 +0xc05:  mov    0x8(%ebp),%eax
085f0a9c +0xc08:  mov    %eax,(%esp)
085f0a9f +0xc0b:  call   085f0b9c <+0xd08>
085f0aa4 +0xc10:  mov    0x8(%ebp),%edx
085f0aa7 +0xc13:  mov    %eax,(%edx)
085f0aa9 +0xc15:  mov    0x8(%ebp),%eax
085f0aac +0xc18:  mov    (%eax),%edx
085f0aae +0xc1a:  mov    0x8(%ebp),%eax
085f0ab1 +0xc1d:  mov    %edx,0x4(%eax)
085f0ab4 +0xc20:  mov    0x8(%ebp),%eax
085f0ab7 +0xc23:  mov    (%eax),%eax
085f0ab9 +0xc25:  mov    0xc(%ebp),%edx
085f0abc +0xc28:  add    %edx,%edx
085f0abe +0xc2a:  lea    (%eax,%edx,1),%edx
085f0ac1 +0xc2d:  mov    0x8(%ebp),%eax
085f0ac4 +0xc30:  mov    %edx,0x8(%eax)
085f0ac7 +0xc33:  add    $0x10,%esp
085f0aca +0xc36:  pop    %ebx
085f0acb +0xc37:  pop    %esi
085f0acc +0xc38:  pop    %ebp
085f0acd +0xc39:  ret
085f0ace +0xc3a:  mov    %edx,%ebx
085f0ad0 +0xc3c:  mov    %eax,%esi
085f0ad2 +0xc3e:  mov    0x8(%ebp),%eax
085f0ad5 +0xc41:  mov    %eax,(%esp)
085f0ad8 +0xc44:  call   0839dea0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL12gTCharBuffer+0x593c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL12gTCharBuffer+0x593c
085f0add +0xc49:  mov    %esi,%eax
085f0adf +0xc4b:  mov    %ebx,%edx
085f0ae1 +0xc4d:  mov    %eax,(%esp)
085f0ae4 +0xc50:  call   08ae3750 <_Unwind_Resume>
085f0ae9 +0xc55:  nop
085f0aea +0xc56:  push   %ebp
085f0aeb +0xc57:  mov    %esp,%ebp
085f0aed +0xc59:  push   %ebx
085f0aee +0xc5a:  sub    $0x24,%esp
085f0af1 +0xc5d:  mov    0x8(%ebp),%ebx
085f0af4 +0xc60:  mov    0xc(%ebp),%eax
085f0af7 +0xc63:  mov    (%eax),%eax
085f0af9 +0xc65:  mov    %eax,-0xc(%ebp)
085f0afc +0xc68:  lea    -0xc(%ebp),%eax
085f0aff +0xc6b:  mov    %eax,0x4(%esp)
085f0b03 +0xc6f:  mov    %ebx,(%esp)
085f0b06 +0xc72:  call   085f0bcc <+0xd38>
085f0b0b +0xc77:  mov    %ebx,%eax
085f0b0d +0xc79:  add    $0x24,%esp
085f0b10 +0xc7c:  pop    %ebx
085f0b11 +0xc7d:  pop    %ebp
085f0b12 +0xc7e:  ret    $0x4
085f0b15 +0xc81:  nop
085f0b16 +0xc82:  push   %ebp
085f0b17 +0xc83:  mov    %esp,%ebp
085f0b19 +0xc85:  push   %ebx
085f0b1a +0xc86:  sub    $0x24,%esp
085f0b1d +0xc89:  mov    0x8(%ebp),%ebx
085f0b20 +0xc8c:  mov    0xc(%ebp),%eax
085f0b23 +0xc8f:  mov    0x4(%eax),%eax
085f0b26 +0xc92:  mov    %eax,-0xc(%ebp)
085f0b29 +0xc95:  lea    -0xc(%ebp),%eax
085f0b2c +0xc98:  mov    %eax,0x4(%esp)
085f0b30 +0xc9c:  mov    %ebx,(%esp)
085f0b33 +0xc9f:  call   085f0bcc <+0xd38>
085f0b38 +0xca4:  mov    %ebx,%eax
085f0b3a +0xca6:  add    $0x24,%esp
085f0b3d +0xca9:  pop    %ebx
085f0b3e +0xcaa:  pop    %ebp
085f0b3f +0xcab:  ret    $0x4
085f0b42 +0xcae:  push   %ebp
085f0b43 +0xcaf:  mov    %esp,%ebp
085f0b45 +0xcb1:  sub    $0x18,%esp
085f0b48 +0xcb4:  mov    0x10(%ebp),%eax
085f0b4b +0xcb7:  mov    %eax,0x8(%esp)
085f0b4f +0xcbb:  mov    0xc(%ebp),%eax
085f0b52 +0xcbe:  mov    %eax,0x4(%esp)
085f0b56 +0xcc2:  mov    0x8(%ebp),%eax
085f0b59 +0xcc5:  mov    %eax,(%esp)
085f0b5c +0xcc8:  call   085f0bdb <+0xd47>
085f0b61 +0xccd:  leave
085f0b62 +0xcce:  ret
085f0b63 +0xccf:  nop
085f0b64 +0xcd0:  push   %ebp
085f0b65 +0xcd1:  mov    %esp,%ebp
085f0b67 +0xcd3:  sub    $0x18,%esp
085f0b6a +0xcd6:  mov    0x8(%ebp),%eax
085f0b6d +0xcd9:  mov    0xc(%ebp),%edx
085f0b70 +0xcdc:  mov    %edx,0x4(%esp)
085f0b74 +0xce0:  mov    %eax,(%esp)
085f0b77 +0xce3:  call   085f0bfc <+0xd68>
085f0b7c +0xce8:  mov    0x8(%ebp),%eax
085f0b7f +0xceb:  movl   $0x0,(%eax)
085f0b85 +0xcf1:  mov    0x8(%ebp),%eax
085f0b88 +0xcf4:  movl   $0x0,0x4(%eax)
085f0b8f +0xcfb:  mov    0x8(%ebp),%eax
085f0b92 +0xcfe:  movl   $0x0,0x8(%eax)
085f0b99 +0xd05:  leave
085f0b9a +0xd06:  ret
085f0b9b +0xd07:  nop
085f0b9c +0xd08:  push   %ebp
085f0b9d +0xd09:  mov    %esp,%ebp
085f0b9f +0xd0b:  sub    $0x18,%esp
085f0ba2 +0xd0e:  cmpl   $0x0,0xc(%ebp)
085f0ba6 +0xd12:  je     085f0bc4 <+0xd30>
085f0ba8 +0xd14:  mov    0x8(%ebp),%eax
085f0bab +0xd17:  movl   $0x0,0x8(%esp)
085f0bb3 +0xd1f:  mov    0xc(%ebp),%edx
085f0bb6 +0xd22:  mov    %edx,0x4(%esp)
085f0bba +0xd26:  mov    %eax,(%esp)
085f0bbd +0xd29:  call   085f0c16 <+0xd82>
085f0bc2 +0xd2e:  jmp    085f0bc9 <+0xd35>
085f0bc4 +0xd30:  mov    $0x0,%eax
085f0bc9 +0xd35:  leave
085f0bca +0xd36:  ret
085f0bcb +0xd37:  nop
085f0bcc +0xd38:  push   %ebp
085f0bcd +0xd39:  mov    %esp,%ebp
085f0bcf +0xd3b:  mov    0xc(%ebp),%eax
085f0bd2 +0xd3e:  mov    (%eax),%edx
085f0bd4 +0xd40:  mov    0x8(%ebp),%eax
085f0bd7 +0xd43:  mov    %edx,(%eax)
085f0bd9 +0xd45:  pop    %ebp
085f0bda +0xd46:  ret
085f0bdb +0xd47:  push   %ebp
085f0bdc +0xd48:  mov    %esp,%ebp
085f0bde +0xd4a:  sub    $0x18,%esp
085f0be1 +0xd4d:  mov    0x10(%ebp),%eax
085f0be4 +0xd50:  mov    %eax,0x8(%esp)
085f0be8 +0xd54:  mov    0xc(%ebp),%eax
085f0beb +0xd57:  mov    %eax,0x4(%esp)
085f0bef +0xd5b:  mov    0x8(%ebp),%eax
085f0bf2 +0xd5e:  mov    %eax,(%esp)
085f0bf5 +0xd61:  call   085f0c4d <+0xdb9>
085f0bfa +0xd66:  leave
085f0bfb +0xd67:  ret
085f0bfc +0xd68:  push   %ebp
085f0bfd +0xd69:  mov    %esp,%ebp
085f0bff +0xd6b:  sub    $0x18,%esp
085f0c02 +0xd6e:  mov    0xc(%ebp),%edx
085f0c05 +0xd71:  mov    0x8(%ebp),%eax
085f0c08 +0xd74:  mov    %edx,0x4(%esp)
085f0c0c +0xd78:  mov    %eax,(%esp)
085f0c0f +0xd7b:  call   085f0cec <+0xe58>
085f0c14 +0xd80:  leave
085f0c15 +0xd81:  ret
085f0c16 +0xd82:  push   %ebp
085f0c17 +0xd83:  mov    %esp,%ebp
085f0c19 +0xd85:  sub    $0x18,%esp
085f0c1c +0xd88:  mov    0x8(%ebp),%eax
085f0c1f +0xd8b:  mov    %eax,(%esp)
085f0c22 +0xd8e:  call   085f0cf2 <+0xe5e>
085f0c27 +0xd93:  cmp    0xc(%ebp),%eax
085f0c2a +0xd96:  setb   %al
085f0c2d +0xd99:  movzbl %al,%eax
085f0c30 +0xd9c:  test   %eax,%eax
085f0c32 +0xd9e:  setne  %al
085f0c35 +0xda1:  test   %al,%al
085f0c37 +0xda3:  je     085f0c3e <+0xdaa>
085f0c39 +0xda5:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
085f0c3e +0xdaa:  mov    0xc(%ebp),%eax
085f0c41 +0xdad:  add    %eax,%eax
085f0c43 +0xdaf:  mov    %eax,(%esp)
085f0c46 +0xdb2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085f0c4b +0xdb7:  leave
085f0c4c +0xdb8:  ret
085f0c4d +0xdb9:  push   %ebp
085f0c4e +0xdba:  mov    %esp,%ebp
085f0c50 +0xdbc:  push   %esi
085f0c51 +0xdbd:  push   %ebx
085f0c52 +0xdbe:  sub    $0x20,%esp
085f0c55 +0xdc1:  mov    0x10(%ebp),%eax
085f0c58 +0xdc4:  mov    %eax,-0xc(%ebp)
085f0c5b +0xdc7:  jmp    085f0c98 <+0xe04>
085f0c5d +0xdc9:  lea    0x8(%ebp),%eax
085f0c60 +0xdcc:  mov    %eax,(%esp)
085f0c63 +0xdcf:  call   085f0d3e <+0xeaa>
085f0c68 +0xdd4:  mov    %eax,%ebx
085f0c6a +0xdd6:  mov    -0xc(%ebp),%eax
085f0c6d +0xdd9:  mov    %eax,0x4(%esp)
085f0c71 +0xddd:  movl   $0x2,(%esp)
085f0c78 +0xde4:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
085f0c7d +0xde9:  mov    %eax,%edx
085f0c7f +0xdeb:  test   %edx,%edx
085f0c81 +0xded:  je     085f0c89 <+0xdf5>
085f0c83 +0xdef:  movzwl (%ebx),%edx
085f0c86 +0xdf2:  mov    %dx,(%eax)
085f0c89 +0xdf5:  lea    0x8(%ebp),%eax
085f0c8c +0xdf8:  mov    %eax,(%esp)
085f0c8f +0xdfb:  call   085f0d28 <+0xe94>
085f0c94 +0xe00:  addl   $0x2,-0xc(%ebp)
085f0c98 +0xe04:  lea    0xc(%ebp),%eax
085f0c9b +0xe07:  mov    %eax,0x4(%esp)
085f0c9f +0xe0b:  lea    0x8(%ebp),%eax
085f0ca2 +0xe0e:  mov    %eax,(%esp)
085f0ca5 +0xe11:  call   085f0cfc <+0xe68>
085f0caa +0xe16:  test   %al,%al
085f0cac +0xe18:  jne    085f0c5d <+0xdc9>
085f0cae +0xe1a:  mov    -0xc(%ebp),%eax
085f0cb1 +0xe1d:  add    $0x20,%esp
085f0cb4 +0xe20:  pop    %ebx
085f0cb5 +0xe21:  pop    %esi
085f0cb6 +0xe22:  pop    %ebp
085f0cb7 +0xe23:  ret
085f0cb8 +0xe24:  mov    %eax,(%esp)
085f0cbb +0xe27:  call   08725ce0 <__cxa_begin_catch>
085f0cc0 +0xe2c:  mov    -0xc(%ebp),%eax
085f0cc3 +0xe2f:  mov    %eax,0x4(%esp)
085f0cc7 +0xe33:  mov    0x10(%ebp),%eax
085f0cca +0xe36:  mov    %eax,(%esp)
085f0ccd +0xe39:  call   083b912f <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x530fb>  ; global constructors keyed to CServerEvent::m_nExpRate+0x530fb
085f0cd2 +0xe3e:  call   08724be0 <__cxa_rethrow>
085f0cd7 +0xe43:  mov    %edx,%ebx
085f0cd9 +0xe45:  mov    %eax,%esi
085f0cdb +0xe47:  call   08725c30 <__cxa_end_catch>
085f0ce0 +0xe4c:  mov    %esi,%eax
085f0ce2 +0xe4e:  mov    %ebx,%edx
085f0ce4 +0xe50:  mov    %eax,(%esp)
085f0ce7 +0xe53:  call   08ae3750 <_Unwind_Resume>
085f0cec +0xe58:  push   %ebp
085f0ced +0xe59:  mov    %esp,%ebp
085f0cef +0xe5b:  pop    %ebp
085f0cf0 +0xe5c:  ret
085f0cf1 +0xe5d:  nop
085f0cf2 +0xe5e:  push   %ebp
085f0cf3 +0xe5f:  mov    %esp,%ebp
085f0cf5 +0xe61:  mov    $0x7fffffff,%eax
085f0cfa +0xe66:  pop    %ebp
085f0cfb +0xe67:  ret
085f0cfc +0xe68:  push   %ebp
085f0cfd +0xe69:  mov    %esp,%ebp
085f0cff +0xe6b:  push   %ebx
085f0d00 +0xe6c:  sub    $0x14,%esp
085f0d03 +0xe6f:  mov    0x8(%ebp),%eax
085f0d06 +0xe72:  mov    %eax,(%esp)
085f0d09 +0xe75:  call   085f0d48 <+0xeb4>
085f0d0e +0xe7a:  mov    (%eax),%ebx
085f0d10 +0xe7c:  mov    0xc(%ebp),%eax
085f0d13 +0xe7f:  mov    %eax,(%esp)
085f0d16 +0xe82:  call   085f0d48 <+0xeb4>
085f0d1b +0xe87:  mov    (%eax),%eax
085f0d1d +0xe89:  cmp    %eax,%ebx
085f0d1f +0xe8b:  setne  %al
085f0d22 +0xe8e:  add    $0x14,%esp
085f0d25 +0xe91:  pop    %ebx
085f0d26 +0xe92:  pop    %ebp
085f0d27 +0xe93:  ret
085f0d28 +0xe94:  push   %ebp
085f0d29 +0xe95:  mov    %esp,%ebp
085f0d2b +0xe97:  mov    0x8(%ebp),%eax
085f0d2e +0xe9a:  mov    (%eax),%eax
085f0d30 +0xe9c:  lea    0x2(%eax),%edx
085f0d33 +0xe9f:  mov    0x8(%ebp),%eax
085f0d36 +0xea2:  mov    %edx,(%eax)
085f0d38 +0xea4:  mov    0x8(%ebp),%eax
085f0d3b +0xea7:  pop    %ebp
085f0d3c +0xea8:  ret
085f0d3d +0xea9:  nop
085f0d3e +0xeaa:  push   %ebp
085f0d3f +0xeab:  mov    %esp,%ebp
085f0d41 +0xead:  mov    0x8(%ebp),%eax
085f0d44 +0xeb0:  mov    (%eax),%eax
085f0d46 +0xeb2:  pop    %ebp
085f0d47 +0xeb3:  ret
085f0d48 +0xeb4:  push   %ebp
085f0d49 +0xeb5:  mov    %esp,%ebp
085f0d4b +0xeb7:  mov    0x8(%ebp),%eax
085f0d4e +0xeba:  pop    %ebp
085f0d4f +0xebb:  ret
```

## 反编译 C

```c
// <global>::global @ 0x85efe94

/* CQuestShop::CQuestShop() */

void CQuestShop::_GLOBAL__I_CQuestShop(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
