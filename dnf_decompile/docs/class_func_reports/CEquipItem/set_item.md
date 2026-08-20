# set_item

`_ZN10CEquipItem8set_itemER17STEquipmentScript`

`CEquipItem::set_item(STEquipmentScript&)`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x0850fd84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850fd84  _ZN10CEquipItem8set_itemER17STEquipmentScript
#           CEquipItem::set_item(STEquipmentScript&)
# range [0x0850fd84, 0x08510817]
0850fd84 +0x000:  push   %ebp
0850fd85 +0x001:  mov    %esp,%ebp
0850fd87 +0x003:  push   %edi
0850fd88 +0x004:  push   %esi
0850fd89 +0x005:  push   %ebx
0850fd8a +0x006:  sub    $0x24c,%esp
0850fd90 +0x00c:  mov    0xc(%ebp),%eax
0850fd93 +0x00f:  mov    (%eax),%edx
0850fd95 +0x011:  mov    0x8(%ebp),%eax
0850fd98 +0x014:  mov    %edx,0x4(%eax)
0850fd9b +0x017:  mov    0xc(%ebp),%eax
0850fd9e +0x01a:  mov    0x4(%eax),%edx
0850fda1 +0x01d:  mov    0x8(%ebp),%eax
0850fda4 +0x020:  mov    %edx,0x8(%eax)
0850fda7 +0x023:  mov    0xc(%ebp),%eax
0850fdaa +0x026:  mov    0x14(%eax),%edx
0850fdad +0x029:  mov    0x8(%ebp),%eax
0850fdb0 +0x02c:  mov    %edx,0xc(%eax)
0850fdb3 +0x02f:  mov    0xc(%ebp),%eax
0850fdb6 +0x032:  mov    0x24(%eax),%edx
0850fdb9 +0x035:  mov    0x8(%ebp),%eax
0850fdbc +0x038:  mov    %edx,0x30(%eax)
0850fdbf +0x03b:  mov    0xc(%ebp),%eax
0850fdc2 +0x03e:  mov    0x18(%eax),%edx
0850fdc5 +0x041:  mov    0x8(%ebp),%eax
0850fdc8 +0x044:  mov    %edx,0x10(%eax)
0850fdcb +0x047:  mov    0xc(%ebp),%eax
0850fdce +0x04a:  mov    0x1c(%eax),%edx
0850fdd1 +0x04d:  mov    0x8(%ebp),%eax
0850fdd4 +0x050:  mov    %edx,0x14(%eax)
0850fdd7 +0x053:  mov    0xc(%ebp),%eax
0850fdda +0x056:  mov    0x10(%eax),%edx
0850fddd +0x059:  mov    0x8(%ebp),%eax
0850fde0 +0x05c:  mov    %edx,0x38(%eax)
0850fde3 +0x05f:  mov    0xc(%ebp),%eax
0850fde6 +0x062:  movzbl 0xfc(%eax),%edx
0850fded +0x069:  mov    0x8(%ebp),%eax
0850fdf0 +0x06c:  mov    %dl,0x60(%eax)
0850fdf3 +0x06f:  mov    0xc(%ebp),%eax
0850fdf6 +0x072:  mov    0x28(%eax),%edx
0850fdf9 +0x075:  mov    0x8(%ebp),%eax
0850fdfc +0x078:  mov    %edx,0x24(%eax)
0850fdff +0x07b:  mov    0xc(%ebp),%eax
0850fe02 +0x07e:  mov    0x2c(%eax),%edx
0850fe05 +0x081:  mov    0x8(%ebp),%eax
0850fe08 +0x084:  mov    %edx,0x28(%eax)
0850fe0b +0x087:  mov    0xc(%ebp),%eax
0850fe0e +0x08a:  movzbl 0x30(%eax),%eax
0850fe12 +0x08e:  test   %al,%al
0850fe14 +0x090:  je     0850fe2f <+0xab>
0850fe16 +0x092:  mov    0x8(%ebp),%eax
0850fe19 +0x095:  mov    0x4(%eax),%eax
0850fe1c +0x098:  mov    %eax,%ebx
0850fe1e +0x09a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850fe23 +0x09f:  mov    %ebx,0x4(%esp)
0850fe27 +0x0a3:  mov    %eax,(%esp)
0850fe2a +0x0a6:  call   08513fbc <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5f1>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5f1
0850fe2f +0x0ab:  mov    0xc(%ebp),%eax
0850fe32 +0x0ae:  movzbl 0x31(%eax),%edx
0850fe36 +0x0b2:  mov    0x8(%ebp),%eax
0850fe39 +0x0b5:  mov    %dl,0xf8(%eax)
0850fe3f +0x0bb:  lea    -0x220(%ebp),%ebx
0850fe45 +0x0c1:  mov    $0x0,%eax
0850fe4a +0x0c6:  mov    $0x7d,%edx
0850fe4f +0x0cb:  mov    %ebx,%edi
0850fe51 +0x0cd:  mov    %edx,%ecx
0850fe53 +0x0cf:  rep stos %eax,%es:(%edi)
0850fe55 +0x0d1:  mov    0xc(%ebp),%eax
0850fe58 +0x0d4:  add    $0xac,%eax
0850fe5d +0x0d9:  mov    %eax,(%esp)
0850fe60 +0x0dc:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0850fe65 +0x0e1:  mov    %eax,0x4(%esp)
0850fe69 +0x0e5:  lea    -0x220(%ebp),%eax
0850fe6f +0x0eb:  mov    %eax,(%esp)
0850fe72 +0x0ee:  call   0807def0 <_init+0x7e8>
0850fe77 +0x0f3:  mov    0xc(%ebp),%eax
0850fe7a +0x0f6:  add    $0xac,%eax
0850fe7f +0x0fb:  mov    %eax,(%esp)
0850fe82 +0x0fe:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0850fe87 +0x103:  lea    -0x220(%ebp),%edx
0850fe8d +0x109:  mov    %edx,0x4(%esp)
0850fe91 +0x10d:  mov    %eax,(%esp)
0850fe94 +0x110:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
0850fe99 +0x115:  xor    $0x1,%eax
0850fe9c +0x118:  test   %al,%al
0850fe9e +0x11a:  je     0850ff12 <+0x18e>
0850fea0 +0x11c:  mov    0xc(%ebp),%eax
0850fea3 +0x11f:  add    $0xac,%eax
0850fea8 +0x124:  mov    %eax,(%esp)
0850feab +0x127:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0850feb0 +0x12c:  mov    %eax,%edi
0850feb2 +0x12e:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
0850feb7 +0x133:  mov    %eax,%esi
0850feb9 +0x135:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
0850febe +0x13a:  mov    %eax,%ebx
0850fec0 +0x13c:  movl   $0x5,0xc(%esp)
0850fec8 +0x144:  movl   $0x553,0x8(%esp)
0850fed0 +0x14c:  movl   $&_ZZN10CEquipItem8set_itemER17STEquipmentScriptE19__PRETTY_FUNCTION__,0x4(%esp)
0850fed8 +0x154:  lea    -0x2c(%ebp),%eax
0850fedb +0x157:  mov    %eax,(%esp)
0850fede +0x15a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0850fee3 +0x15f:  movl   $0x553,0x18(%esp)
0850feeb +0x167:  movl   $&_ZZN10CEquipItem8set_itemER17STEquipmentScriptE19__PRETTY_FUNCTION__,0x14(%esp)
0850fef3 +0x16f:  mov    %edi,0x10(%esp)
0850fef7 +0x173:  mov    %esi,0xc(%esp)
0850fefb +0x177:  mov    %ebx,0x8(%esp)
0850feff +0x17b:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
0850ff07 +0x183:  lea    -0x2c(%ebp),%eax
0850ff0a +0x186:  mov    %eax,(%esp)
0850ff0d +0x189:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0850ff12 +0x18e:  mov    0x8(%ebp),%eax
0850ff15 +0x191:  lea    0x2c(%eax),%edx
0850ff18 +0x194:  lea    -0x220(%ebp),%eax
0850ff1e +0x19a:  mov    %eax,0x4(%esp)
0850ff22 +0x19e:  mov    %edx,(%esp)
0850ff25 +0x1a1:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0850ff2a +0x1a6:  mov    0xc(%ebp),%eax
0850ff2d +0x1a9:  mov    0x8(%eax),%edx
0850ff30 +0x1ac:  mov    0x8(%ebp),%eax
0850ff33 +0x1af:  mov    %edx,0x34(%eax)
0850ff36 +0x1b2:  mov    0xc(%ebp),%eax
0850ff39 +0x1b5:  mov    0xc(%eax),%edx
0850ff3c +0x1b8:  mov    0x8(%ebp),%eax
0850ff3f +0x1bb:  mov    %edx,0x50(%eax)
0850ff42 +0x1be:  mov    0xc(%ebp),%eax
0850ff45 +0x1c1:  mov    0x20(%eax),%edx
0850ff48 +0x1c4:  mov    0x8(%ebp),%eax
0850ff4b +0x1c7:  mov    %edx,0x64(%eax)
0850ff4e +0x1ca:  mov    0xc(%ebp),%eax
0850ff51 +0x1cd:  mov    0x88c(%eax),%edx
0850ff57 +0x1d3:  mov    0x8(%ebp),%eax
0850ff5a +0x1d6:  mov    %edx,0x68(%eax)
0850ff5d +0x1d9:  movl   $0x0,-0x1c(%ebp)
0850ff64 +0x1e0:  jmp    0850ff7f <+0x1fb>
0850ff66 +0x1e2:  mov    -0x1c(%ebp),%eax
0850ff69 +0x1e5:  mov    -0x1c(%ebp),%edx
0850ff6c +0x1e8:  mov    0xc(%ebp),%ecx
0850ff6f +0x1eb:  movzbl 0x38(%ecx,%edx,1),%ecx
0850ff74 +0x1f0:  mov    0x8(%ebp),%edx
0850ff77 +0x1f3:  mov    %cl,0x3c(%edx,%eax,1)
0850ff7b +0x1f7:  addl   $0x1,-0x1c(%ebp)
0850ff7f +0x1fb:  cmpl   $0xa,-0x1c(%ebp)
0850ff83 +0x1ff:  setle  %al
0850ff86 +0x202:  test   %al,%al
0850ff88 +0x204:  jne    0850ff66 <+0x1e2>
0850ff8a +0x206:  mov    0xc(%ebp),%eax
0850ff8d +0x209:  mov    0x5c(%eax),%edx
0850ff90 +0x20c:  mov    0x8(%ebp),%eax
0850ff93 +0x20f:  mov    %edx,0x48(%eax)
0850ff96 +0x212:  mov    0xc(%ebp),%eax
0850ff99 +0x215:  mov    0x60(%eax),%edx
0850ff9c +0x218:  mov    0x8(%ebp),%eax
0850ff9f +0x21b:  mov    %edx,0x4c(%eax)
0850ffa2 +0x21e:  mov    0xc(%ebp),%eax
0850ffa5 +0x221:  mov    0x1b4(%eax),%edx
0850ffab +0x227:  mov    0x8(%ebp),%eax
0850ffae +0x22a:  mov    %edx,0x234(%eax)
0850ffb4 +0x230:  mov    0xc(%ebp),%eax
0850ffb7 +0x233:  mov    0x1bc(%eax),%edx
0850ffbd +0x239:  mov    0x8(%ebp),%eax
0850ffc0 +0x23c:  mov    %edx,0x170(%eax)
0850ffc6 +0x242:  mov    0x8(%ebp),%eax
0850ffc9 +0x245:  movb   $0x0,0x54(%eax)
0850ffcd +0x249:  mov    0xc(%ebp),%eax
0850ffd0 +0x24c:  mov    0x184(%eax),%edx
0850ffd6 +0x252:  mov    0x8(%ebp),%eax
0850ffd9 +0x255:  mov    %edx,0x58(%eax)
0850ffdc +0x258:  mov    0xc(%ebp),%eax
0850ffdf +0x25b:  mov    0x180(%eax),%edx
0850ffe5 +0x261:  mov    0x8(%ebp),%eax
0850ffe8 +0x264:  mov    %edx,0x5c(%eax)
0850ffeb +0x267:  mov    0xc(%ebp),%eax
0850ffee +0x26a:  mov    0x750(%eax),%edx
0850fff4 +0x270:  mov    0x8(%ebp),%eax
0850fff7 +0x273:  mov    %edx,0x158(%eax)
0850fffd +0x279:  mov    0xc(%ebp),%eax
08510000 +0x27c:  mov    0x6bc(%eax),%edx
08510006 +0x282:  mov    0x8(%ebp),%eax
08510009 +0x285:  mov    %edx,0x15c(%eax)
0851000f +0x28b:  mov    0xc(%ebp),%eax
08510012 +0x28e:  mov    0x738(%eax),%edx
08510018 +0x294:  mov    0x8(%ebp),%eax
0851001b +0x297:  mov    %edx,0x168(%eax)
08510021 +0x29d:  mov    0xc(%ebp),%eax
08510024 +0x2a0:  mov    0x1b4(%eax),%eax
0851002a +0x2a6:  cmp    $0x16,%eax
0851002d +0x2a9:  jne    0851009d <+0x319>
0851002f +0x2ab:  mov    0xc(%ebp),%eax
08510032 +0x2ae:  mov    0x1b8(%eax),%eax
08510038 +0x2b4:  cmp    $0x1,%eax
0851003b +0x2b7:  je     0851006c <+0x2e8>
0851003d +0x2b9:  cmp    $0x2,%eax
08510040 +0x2bc:  je     08510080 <+0x2fc>
08510042 +0x2be:  test   %eax,%eax
08510044 +0x2c0:  jne    0851009d <+0x319>
08510046 +0x2c2:  mov    0x8(%ebp),%eax
08510049 +0x2c5:  mov    0x4(%eax),%esi
0851004c +0x2c8:  mov    0x8(%ebp),%eax
0851004f +0x2cb:  mov    0x15c(%eax),%ebx
08510055 +0x2d1:  call   08336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>  ; user_creature::GetInstanceCreatureScriptMgr()
0851005a +0x2d6:  mov    %esi,0x8(%esp)
0851005e +0x2da:  mov    %ebx,0x4(%esp)
08510062 +0x2de:  mov    %eax,(%esp)
08510065 +0x2e1:  call   0833d54a <_ZN13user_creature18CCreatureScriptMgr27RegisterCreatureIdAndItemIdEii>  ; user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(int, int)
0851006a +0x2e6:  jmp    0851009d <+0x319>
0851006c +0x2e8:  mov    0xc(%ebp),%eax
0851006f +0x2eb:  mov    0x764(%eax),%edx
08510075 +0x2f1:  mov    0x8(%ebp),%eax
08510078 +0x2f4:  mov    %edx,0x164(%eax)
0851007e +0x2fa:  jmp    0851009d <+0x319>
08510080 +0x2fc:  mov    0xc(%ebp),%eax
08510083 +0x2ff:  lea    0x88(%eax),%edx
08510089 +0x305:  mov    0x8(%ebp),%eax
0851008c +0x308:  add    $0x148,%eax
08510091 +0x30d:  mov    %edx,0x4(%esp)
08510095 +0x311:  mov    %eax,(%esp)
08510098 +0x314:  call   089bba40 <_ZN15RandomItemTable3SetEPSt6vectorIiSaIiEE>  ; RandomItemTable::Set(std::vector<int, std::allocator<int> >*)
0851009d +0x319:  mov    0xc(%ebp),%eax
085100a0 +0x31c:  mov    0x1b8(%eax),%edx
085100a6 +0x322:  mov    0x8(%ebp),%eax
085100a9 +0x325:  mov    %edx,0x160(%eax)
085100af +0x32b:  mov    0xc(%ebp),%eax
085100b2 +0x32e:  mov    0xf4(%eax),%edx
085100b8 +0x334:  mov    0x8(%ebp),%eax
085100bb +0x337:  mov    %edx,0x6c(%eax)
085100be +0x33a:  mov    0xc(%ebp),%eax
085100c1 +0x33d:  mov    0xf8(%eax),%edx
085100c7 +0x343:  mov    0x8(%ebp),%eax
085100ca +0x346:  mov    %edx,0x70(%eax)
085100cd +0x349:  mov    0xc(%ebp),%eax
085100d0 +0x34c:  movzbl 0x7ac(%eax),%edx
085100d7 +0x353:  mov    0x8(%ebp),%eax
085100da +0x356:  mov    %dl,0x16c(%eax)
085100e0 +0x35c:  mov    0xc(%ebp),%eax
085100e3 +0x35f:  lea    0x6c0(%eax),%edx
085100e9 +0x365:  mov    0x8(%ebp),%eax
085100ec +0x368:  add    $0x174,%eax
085100f1 +0x36d:  mov    %edx,0x4(%esp)
085100f5 +0x371:  mov    %eax,(%esp)
085100f8 +0x374:  call   08517be8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x421d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x421d
085100fd +0x379:  mov    0xc(%ebp),%eax
08510100 +0x37c:  lea    0x6cc(%eax),%edx
08510106 +0x382:  mov    0x8(%ebp),%eax
08510109 +0x385:  add    $0x180,%eax
0851010e +0x38a:  mov    %edx,0x4(%esp)
08510112 +0x38e:  mov    %eax,(%esp)
08510115 +0x391:  call   08517e36 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x446b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x446b
0851011a +0x396:  mov    0xc(%ebp),%eax
0851011d +0x399:  mov    0x6d8(%eax),%edx
08510123 +0x39f:  mov    0x8(%ebp),%eax
08510126 +0x3a2:  mov    %edx,0x18c(%eax)
0851012c +0x3a8:  mov    0xc(%ebp),%eax
0851012f +0x3ab:  mov    0x178(%eax),%edx
08510135 +0x3b1:  mov    0x8(%ebp),%eax
08510138 +0x3b4:  mov    %edx,0x190(%eax)
0851013e +0x3ba:  mov    0xc(%ebp),%eax
08510141 +0x3bd:  mov    0x100(%eax),%edx
08510147 +0x3c3:  mov    0x8(%ebp),%eax
0851014a +0x3c6:  mov    %edx,0x74(%eax)
0851014d +0x3c9:  mov    0xc(%ebp),%eax
08510150 +0x3cc:  movzbl 0x104(%eax),%edx
08510157 +0x3d3:  mov    0x8(%ebp),%eax
0851015a +0x3d6:  mov    %dl,0x78(%eax)
0851015d +0x3d9:  mov    0xc(%ebp),%eax
08510160 +0x3dc:  movzbl 0x7bc(%eax),%edx
08510167 +0x3e3:  mov    0x8(%ebp),%eax
0851016a +0x3e6:  mov    %dl,0x79(%eax)
0851016d +0x3e9:  mov    0xc(%ebp),%eax
08510170 +0x3ec:  lea    0x6c(%eax),%edx
08510173 +0x3ef:  mov    0x8(%ebp),%eax
08510176 +0x3f2:  add    $0xb0,%eax
0851017b +0x3f7:  mov    %edx,0x4(%esp)
0851017f +0x3fb:  mov    %eax,(%esp)
08510182 +0x3fe:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08510187 +0x403:  mov    0xc(%ebp),%eax
0851018a +0x406:  mov    0xc8(%eax),%edx
08510190 +0x40c:  mov    0x8(%ebp),%eax
08510193 +0x40f:  mov    %edx,0x80(%eax)
08510199 +0x415:  mov    0xc(%ebp),%eax
0851019c +0x418:  mov    0xcc(%eax),%edx
085101a2 +0x41e:  mov    0x8(%ebp),%eax
085101a5 +0x421:  mov    %edx,0x7c(%eax)
085101a8 +0x424:  mov    0xc(%ebp),%eax
085101ab +0x427:  movzbl 0x6f4(%eax),%edx
085101b2 +0x42e:  mov    0x8(%ebp),%eax
085101b5 +0x431:  mov    %dl,0x84(%eax)
085101bb +0x437:  mov    0xc(%ebp),%eax
085101be +0x43a:  movzbl 0x6f5(%eax),%edx
085101c5 +0x441:  mov    0x8(%ebp),%eax
085101c8 +0x444:  mov    %dl,0x85(%eax)
085101ce +0x44a:  mov    0xc(%ebp),%eax
085101d1 +0x44d:  movzbl 0x6f6(%eax),%edx
085101d8 +0x454:  mov    0x8(%ebp),%eax
085101db +0x457:  mov    %dl,0x86(%eax)
085101e1 +0x45d:  mov    0xc(%ebp),%eax
085101e4 +0x460:  movzbl 0xd0(%eax),%edx
085101eb +0x467:  mov    0x8(%ebp),%eax
085101ee +0x46a:  mov    %dl,0x87(%eax)
085101f4 +0x470:  mov    0xc(%ebp),%eax
085101f7 +0x473:  movzbl 0xda(%eax),%edx
085101fe +0x47a:  mov    0x8(%ebp),%eax
08510201 +0x47d:  mov    %dl,0x88(%eax)
08510207 +0x483:  mov    0xc(%ebp),%eax
0851020a +0x486:  movzbl 0xd9(%eax),%edx
08510211 +0x48d:  mov    0x8(%ebp),%eax
08510214 +0x490:  mov    %dl,0x89(%eax)
0851021a +0x496:  mov    0xc(%ebp),%eax
0851021d +0x499:  mov    0x6f8(%eax),%edx
08510223 +0x49f:  mov    0x8(%ebp),%eax
08510226 +0x4a2:  mov    %edx,0xac(%eax)
0851022c +0x4a8:  mov    0x8(%ebp),%eax
0851022f +0x4ab:  mov    0xc(%ebp),%edx
08510232 +0x4ae:  mov    0x105(%edx),%ecx
08510238 +0x4b4:  mov    %ecx,0xb4(%eax)
0851023e +0x4ba:  mov    0x109(%edx),%ecx
08510244 +0x4c0:  mov    %ecx,0xb8(%eax)
0851024a +0x4c6:  movzbl 0x10d(%edx),%edx
08510251 +0x4cd:  mov    %dl,0xbc(%eax)
08510257 +0x4d3:  mov    0xc(%ebp),%eax
0851025a +0x4d6:  add    $0x105,%eax
0851025f +0x4db:  mov    %eax,(%esp)
08510262 +0x4de:  call   08513a24 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x59>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x59
08510267 +0x4e3:  mov    0xc(%ebp),%eax
0851026a +0x4e6:  movzbl 0x10e(%eax),%edx
08510271 +0x4ed:  mov    0x8(%ebp),%eax
08510274 +0x4f0:  mov    %dl,0x194(%eax)
0851027a +0x4f6:  mov    0xc(%ebp),%eax
0851027d +0x4f9:  lea    0x7d8(%eax),%edx
08510283 +0x4ff:  mov    0x8(%ebp),%eax
08510286 +0x502:  add    $0x198,%eax
0851028b +0x507:  mov    %edx,0x4(%esp)
0851028f +0x50b:  mov    %eax,(%esp)
08510292 +0x50e:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
08510297 +0x513:  mov    0xc(%ebp),%eax
0851029a +0x516:  lea    0x7e4(%eax),%edx
085102a0 +0x51c:  mov    0x8(%ebp),%eax
085102a3 +0x51f:  add    $0x1a4,%eax
085102a8 +0x524:  mov    %edx,0x4(%esp)
085102ac +0x528:  mov    %eax,(%esp)
085102af +0x52b:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
085102b4 +0x530:  mov    0xc(%ebp),%eax
085102b7 +0x533:  lea    0x7cc(%eax),%edx
085102bd +0x539:  mov    0x8(%ebp),%eax
085102c0 +0x53c:  add    $0x1b0,%eax
085102c5 +0x541:  mov    %edx,0x4(%esp)
085102c9 +0x545:  mov    %eax,(%esp)
085102cc +0x548:  call   0851807e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x46b3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x46b3
085102d1 +0x54d:  mov    0x8(%ebp),%eax
085102d4 +0x550:  movl   $0x0,0x1bc(%eax)
085102de +0x55a:  mov    0x8(%ebp),%eax
085102e1 +0x55d:  mov    (%eax),%eax
085102e3 +0x55f:  add    $0x10,%eax
085102e6 +0x562:  mov    (%eax),%edx
085102e8 +0x564:  mov    0x8(%ebp),%eax
085102eb +0x567:  mov    %eax,(%esp)
085102ee +0x56a:  call   *%edx
085102f0 +0x56c:  test   %al,%al
085102f2 +0x56e:  je     0851033e <+0x5ba>
085102f4 +0x570:  mov    0x8(%ebp),%eax
085102f7 +0x573:  mov    0x8(%eax),%eax
085102fa +0x576:  cmp    $0x3,%eax
085102fd +0x579:  jne    0851031a <+0x596>
085102ff +0x57b:  mov    0xc(%ebp),%eax
08510302 +0x57e:  mov    0x798(%eax),%eax
08510308 +0x584:  cmp    $0x3,%eax
0851030b +0x587:  jne    0851031a <+0x596>
0851030d +0x589:  mov    0x8(%ebp),%eax
08510310 +0x58c:  movl   $0x6,0x1bc(%eax)
0851031a +0x596:  mov    0xc(%ebp),%eax
0851031d +0x599:  add    $0x424,%eax
08510322 +0x59e:  mov    %eax,(%esp)
08510325 +0x5a1:  call   08180828 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x4bf>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x4bf
0851032a +0x5a6:  mov    %eax,0x4(%esp)
0851032e +0x5aa:  mov    0x8(%ebp),%eax
08510331 +0x5ad:  mov    %eax,(%esp)
08510334 +0x5b0:  call   08514d34 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1369>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1369
08510339 +0x5b5:  jmp    08510454 <+0x6d0>
0851033e +0x5ba:  mov    0x8(%ebp),%eax
08510341 +0x5bd:  mov    (%eax),%eax
08510343 +0x5bf:  add    $0xc,%eax
08510346 +0x5c2:  mov    (%eax),%edx
08510348 +0x5c4:  mov    0x8(%ebp),%eax
0851034b +0x5c7:  mov    %eax,(%esp)
0851034e +0x5ca:  call   *%edx
08510350 +0x5cc:  cmp    $0x16,%eax
08510353 +0x5cf:  sete   %al
08510356 +0x5d2:  test   %al,%al
08510358 +0x5d4:  je     0851037b <+0x5f7>
0851035a +0x5d6:  mov    0xc(%ebp),%eax
0851035d +0x5d9:  mov    0x10(%eax),%eax
08510360 +0x5dc:  cmp    $0x2,%eax
08510363 +0x5df:  jne    08510454 <+0x6d0>
08510369 +0x5e5:  mov    0x8(%ebp),%eax
0851036c +0x5e8:  movl   $0xa,0x1bc(%eax)
08510376 +0x5f2:  jmp    08510454 <+0x6d0>
0851037b +0x5f7:  mov    0xc(%ebp),%eax
0851037e +0x5fa:  mov    0x10(%eax),%eax
08510381 +0x5fd:  cmp    $0x2,%eax
08510384 +0x600:  jne    085103d5 <+0x651>
08510386 +0x602:  mov    0xc(%ebp),%eax
08510389 +0x605:  mov    0xc4(%eax),%eax
0851038f +0x60b:  cmp    $0x5,%eax
08510392 +0x60e:  jne    085103a6 <+0x622>
08510394 +0x610:  mov    0x8(%ebp),%eax
08510397 +0x613:  movl   $0x2,0x1bc(%eax)
085103a1 +0x61d:  jmp    08510454 <+0x6d0>
085103a6 +0x622:  mov    0xc(%ebp),%eax
085103a9 +0x625:  mov    0xc4(%eax),%eax
085103af +0x62b:  cmp    $0x1e,%eax
085103b2 +0x62e:  jne    085103c6 <+0x642>
085103b4 +0x630:  mov    0x8(%ebp),%eax
085103b7 +0x633:  movl   $0x1,0x1bc(%eax)
085103c1 +0x63d:  jmp    08510454 <+0x6d0>
085103c6 +0x642:  mov    0x8(%ebp),%eax
085103c9 +0x645:  movl   $0x9,0x1bc(%eax)
085103d3 +0x64f:  jmp    08510454 <+0x6d0>
085103d5 +0x651:  mov    0xc(%ebp),%eax
085103d8 +0x654:  mov    0x10(%eax),%eax
085103db +0x657:  cmp    $0x3,%eax
085103de +0x65a:  jne    085103ef <+0x66b>
085103e0 +0x65c:  mov    0x8(%ebp),%eax
085103e3 +0x65f:  movl   $0x3,0x1bc(%eax)
085103ed +0x669:  jmp    08510454 <+0x6d0>
085103ef +0x66b:  mov    0xc(%ebp),%eax
085103f2 +0x66e:  mov    0x10(%eax),%eax
085103f5 +0x671:  cmp    $0x5,%eax
085103f8 +0x674:  jne    08510409 <+0x685>
085103fa +0x676:  mov    0x8(%ebp),%eax
085103fd +0x679:  movl   $0x4,0x1bc(%eax)
08510407 +0x683:  jmp    08510454 <+0x6d0>
08510409 +0x685:  mov    0xc(%ebp),%eax
0851040c +0x688:  mov    0x10(%eax),%eax
0851040f +0x68b:  cmp    $0x4,%eax
08510412 +0x68e:  jne    08510423 <+0x69f>
08510414 +0x690:  mov    0x8(%ebp),%eax
08510417 +0x693:  movl   $0x5,0x1bc(%eax)
08510421 +0x69d:  jmp    08510454 <+0x6d0>
08510423 +0x69f:  mov    0xc(%ebp),%eax
08510426 +0x6a2:  mov    0x10(%eax),%eax
08510429 +0x6a5:  test   %eax,%eax
0851042b +0x6a7:  jne    0851043c <+0x6b8>
0851042d +0x6a9:  mov    0x8(%ebp),%eax
08510430 +0x6ac:  movl   $0x7,0x1bc(%eax)
0851043a +0x6b6:  jmp    08510454 <+0x6d0>
0851043c +0x6b8:  mov    0xc(%ebp),%eax
0851043f +0x6bb:  mov    0x10(%eax),%eax
08510442 +0x6be:  cmp    $0x1,%eax
08510445 +0x6c1:  jne    08510454 <+0x6d0>
08510447 +0x6c3:  mov    0x8(%ebp),%eax
0851044a +0x6c6:  movl   $0x8,0x1bc(%eax)
08510454 +0x6d0:  mov    0xc(%ebp),%eax
08510457 +0x6d3:  movzbl 0x10f(%eax),%edx
0851045e +0x6da:  mov    0x8(%ebp),%eax
08510461 +0x6dd:  mov    %dl,0xbd(%eax)
08510467 +0x6e3:  mov    0xc(%ebp),%eax
0851046a +0x6e6:  lea    0x110(%eax),%edx
08510470 +0x6ec:  mov    0x8(%ebp),%eax
08510473 +0x6ef:  add    $0xc0,%eax
08510478 +0x6f4:  mov    %edx,0x4(%esp)
0851047c +0x6f8:  mov    %eax,(%esp)
0851047f +0x6fb:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
08510484 +0x700:  mov    0xc(%ebp),%eax
08510487 +0x703:  mov    0x810(%eax),%edx
0851048d +0x709:  mov    0x8(%ebp),%eax
08510490 +0x70c:  mov    %edx,0xcc(%eax)
08510496 +0x712:  mov    0xc(%ebp),%eax
08510499 +0x715:  mov    0x17c(%eax),%edx
0851049f +0x71b:  mov    0x8(%ebp),%eax
085104a2 +0x71e:  mov    %edx,0x1c0(%eax)
085104a8 +0x724:  mov    0xc(%ebp),%eax
085104ab +0x727:  movzbl 0x814(%eax),%eax
085104b2 +0x72e:  cmp    $0x2,%al
085104b4 +0x730:  je     085104f0 <+0x76c>
085104b6 +0x732:  mov    0xc(%ebp),%eax
085104b9 +0x735:  mov    0x818(%eax),%ebx
085104bf +0x73b:  mov    0xc(%ebp),%eax
085104c2 +0x73e:  movzbl 0x814(%eax),%eax
085104c9 +0x745:  test   %al,%al
085104cb +0x747:  setne  %al
085104ce +0x74a:  movzbl %al,%ecx
085104d1 +0x74d:  mov    0x8(%ebp),%eax
085104d4 +0x750:  mov    0x4(%eax),%edx
085104d7 +0x753:  mov    &_ZN10GlobalData19s_pCompoundBindCubeE,%eax
085104dc +0x758:  mov    %ebx,0xc(%esp)
085104e0 +0x75c:  mov    %ecx,0x8(%esp)
085104e4 +0x760:  mov    %edx,0x4(%esp)
085104e8 +0x764:  mov    %eax,(%esp)
085104eb +0x767:  call   0832d784 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item27ForceResultItemRule_SettingEibi>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting(int, bool, int)
085104f0 +0x76c:  mov    0xc(%ebp),%eax
085104f3 +0x76f:  lea    0xdc(%eax),%edx
085104f9 +0x775:  mov    0x8(%ebp),%eax
085104fc +0x778:  add    $0xd4,%eax
08510501 +0x77d:  mov    %edx,0x4(%esp)
08510505 +0x781:  mov    %eax,(%esp)
08510508 +0x784:  call   08516b94 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x31c9>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x31c9
0851050d +0x789:  mov    0xc(%ebp),%eax
08510510 +0x78c:  mov    0x64(%eax),%edx
08510513 +0x78f:  mov    0x8(%ebp),%eax
08510516 +0x792:  mov    %edx,0xec(%eax)
0851051c +0x798:  mov    0xc(%ebp),%eax
0851051f +0x79b:  mov    0x6e0(%eax),%edx
08510525 +0x7a1:  mov    0x8(%ebp),%eax
08510528 +0x7a4:  mov    %edx,0x238(%eax)
0851052e +0x7aa:  mov    0xc(%ebp),%eax
08510531 +0x7ad:  movzbl 0x888(%eax),%edx
08510538 +0x7b4:  mov    0x8(%ebp),%eax
0851053b +0x7b7:  mov    %dl,0x1c8(%eax)
08510541 +0x7bd:  mov    0xc(%ebp),%eax
08510544 +0x7c0:  movzbl 0x889(%eax),%edx
0851054b +0x7c7:  mov    0x8(%ebp),%eax
0851054e +0x7ca:  mov    %dl,0x1c9(%eax)
08510554 +0x7d0:  mov    0xc(%ebp),%eax
08510557 +0x7d3:  mov    0x150(%eax),%edx
0851055d +0x7d9:  mov    0x8(%ebp),%eax
08510560 +0x7dc:  mov    %edx,0xfc(%eax)
08510566 +0x7e2:  mov    0xc(%ebp),%eax
08510569 +0x7e5:  mov    0x154(%eax),%edx
0851056f +0x7eb:  mov    0x8(%ebp),%eax
08510572 +0x7ee:  mov    %edx,0x100(%eax)
08510578 +0x7f4:  mov    0x8(%ebp),%eax
0851057b +0x7f7:  add    $0x104,%eax
08510580 +0x7fc:  mov    %eax,(%esp)
08510583 +0x7ff:  call   08516bb2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x31e7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x31e7
08510588 +0x804:  mov    0xc(%ebp),%eax
0851058b +0x807:  lea    0x158(%eax),%edx
08510591 +0x80d:  mov    0x8(%ebp),%eax
08510594 +0x810:  add    $0x104,%eax
08510599 +0x815:  mov    %edx,0x4(%esp)
0851059d +0x819:  mov    %eax,(%esp)
085105a0 +0x81c:  call   08516bce <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3203>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3203
085105a5 +0x821:  mov    0x8(%ebp),%ecx
085105a8 +0x824:  mov    0xc(%ebp),%eax
085105ab +0x827:  mov    0x13c(%eax),%edx
085105b1 +0x82d:  mov    0x138(%eax),%eax
085105b7 +0x833:  mov    %eax,0x110(%ecx)
085105bd +0x839:  mov    %edx,0x114(%ecx)
085105c3 +0x83f:  mov    0xc(%ebp),%eax
085105c6 +0x842:  mov    0x148(%eax),%edx
085105cc +0x848:  mov    0x8(%ebp),%eax
085105cf +0x84b:  mov    %edx,0x118(%eax)
085105d5 +0x851:  mov    0xc(%ebp),%eax
085105d8 +0x854:  mov    0x14c(%eax),%edx
085105de +0x85a:  mov    0x8(%ebp),%eax
085105e1 +0x85d:  mov    %edx,0x11c(%eax)
085105e7 +0x863:  mov    0x8(%ebp),%ecx
085105ea +0x866:  mov    0xc(%ebp),%eax
085105ed +0x869:  mov    0x144(%eax),%edx
085105f3 +0x86f:  mov    0x140(%eax),%eax
085105f9 +0x875:  mov    %eax,0x120(%ecx)
085105ff +0x87b:  mov    %edx,0x124(%ecx)
08510605 +0x881:  mov    0xc(%ebp),%eax
08510608 +0x884:  lea    0x11c(%eax),%edx
0851060e +0x88a:  mov    0x8(%ebp),%eax
08510611 +0x88d:  add    $0x128,%eax
08510616 +0x892:  mov    %edx,0x4(%esp)
0851061a +0x896:  mov    %eax,(%esp)
0851061d +0x899:  call   08516e1c <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3451>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3451
08510622 +0x89e:  mov    0xc(%ebp),%eax
08510625 +0x8a1:  mov    0x604(%eax),%edx
0851062b +0x8a7:  mov    0x8(%ebp),%eax
0851062e +0x8aa:  mov    %edx,0x1cc(%eax)
08510634 +0x8b0:  mov    0xc(%ebp),%eax
08510637 +0x8b3:  flds   0x608(%eax)
0851063d +0x8b9:  fnstcw -0x22a(%ebp)
08510643 +0x8bf:  movzwl -0x22a(%ebp),%eax
0851064a +0x8c6:  mov    $0xc,%ah
0851064c +0x8c8:  mov    %ax,-0x22c(%ebp)
08510653 +0x8cf:  fldcw  -0x22c(%ebp)
08510659 +0x8d5:  fistpl -0x230(%ebp)
0851065f +0x8db:  fldcw  -0x22a(%ebp)
08510665 +0x8e1:  mov    -0x230(%ebp),%edx
0851066b +0x8e7:  mov    0x8(%ebp),%eax
0851066e +0x8ea:  mov    %edx,0x1d0(%eax)
08510674 +0x8f0:  mov    0xc(%ebp),%eax
08510677 +0x8f3:  mov    0x60c(%eax),%edx
0851067d +0x8f9:  mov    0x8(%ebp),%eax
08510680 +0x8fc:  mov    %edx,0x1d4(%eax)
08510686 +0x902:  mov    0xc(%ebp),%eax
08510689 +0x905:  movzbl 0x880(%eax),%eax
08510690 +0x90c:  mov    %eax,%edx
08510692 +0x90e:  mov    0x8(%ebp),%eax
08510695 +0x911:  mov    %dl,0x1d8(%eax)
0851069b +0x917:  mov    0xc(%ebp),%eax
0851069e +0x91a:  mov    0x884(%eax),%edx
085106a4 +0x920:  mov    0x8(%ebp),%eax
085106a7 +0x923:  mov    %edx,0x1dc(%eax)
085106ad +0x929:  mov    0x8(%ebp),%ecx
085106b0 +0x92c:  mov    0xc(%ebp),%eax
085106b3 +0x92f:  mov    0x820(%eax),%edx
085106b9 +0x935:  mov    0x81c(%eax),%eax
085106bf +0x93b:  mov    %eax,0x1e0(%ecx)
085106c5 +0x941:  mov    %edx,0x1e4(%ecx)
085106cb +0x947:  mov    0x8(%ebp),%ecx
085106ce +0x94a:  mov    0xc(%ebp),%eax
085106d1 +0x94d:  mov    0x828(%eax),%edx
085106d7 +0x953:  mov    0x824(%eax),%eax
085106dd +0x959:  mov    %eax,0x1e8(%ecx)
085106e3 +0x95f:  mov    %edx,0x1ec(%ecx)
085106e9 +0x965:  mov    0xc(%ebp),%eax
085106ec +0x968:  lea    0x424(%eax),%edx
085106f2 +0x96e:  mov    0x8(%ebp),%eax
085106f5 +0x971:  add    $0x1f0,%eax
085106fa +0x976:  mov    %edx,0x4(%esp)
085106fe +0x97a:  mov    %eax,(%esp)
08510701 +0x97d:  call   083805be <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1005e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1005e
08510706 +0x982:  mov    0xc(%ebp),%eax
08510709 +0x985:  mov    0x890(%eax),%eax
0851070f +0x98b:  cmp    $0x1,%eax
08510712 +0x98e:  jne    08510720 <+0x99c>
08510714 +0x990:  mov    0x8(%ebp),%eax
08510717 +0x993:  movb   $0x0,0x1fc(%eax)
0851071e +0x99a:  jmp    0851072a <+0x9a6>
08510720 +0x99c:  mov    0x8(%ebp),%eax
08510723 +0x99f:  movb   $0x1,0x1fc(%eax)
0851072a +0x9a6:  mov    0xc(%ebp),%eax
0851072d +0x9a9:  lea    0x6fc(%eax),%edx
08510733 +0x9af:  mov    0x8(%ebp),%eax
08510736 +0x9b2:  add    $0x200,%eax
0851073b +0x9b7:  mov    %edx,0x4(%esp)
0851073f +0x9bb:  mov    %eax,(%esp)
08510742 +0x9be:  call   085182f0 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4925>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4925
08510747 +0x9c3:  mov    0xc(%ebp),%eax
0851074a +0x9c6:  movzbl 0x88a(%eax),%edx
08510751 +0x9cd:  mov    0x8(%ebp),%eax
08510754 +0x9d0:  mov    %dl,0x218(%eax)
0851075a +0x9d6:  mov    0xc(%ebp),%eax
0851075d +0x9d9:  movzbl 0x88b(%eax),%edx
08510764 +0x9e0:  mov    0x8(%ebp),%eax
08510767 +0x9e3:  mov    %dl,0x219(%eax)
0851076d +0x9e9:  mov    0xc(%ebp),%eax
08510770 +0x9ec:  movzbl 0x69c(%eax),%edx
08510777 +0x9f3:  mov    0x8(%ebp),%eax
0851077a +0x9f6:  mov    %dl,0x21a(%eax)
08510780 +0x9fc:  mov    0xc(%ebp),%eax
08510783 +0x9ff:  mov    0x1e8(%eax),%edx
08510789 +0xa05:  mov    0x8(%ebp),%eax
0851078c +0xa08:  mov    %edx,0x21c(%eax)
08510792 +0xa0e:  mov    0xc(%ebp),%eax
08510795 +0xa11:  mov    0x1ec(%eax),%edx
0851079b +0xa17:  mov    0x8(%ebp),%eax
0851079e +0xa1a:  mov    %edx,0x220(%eax)
085107a4 +0xa20:  mov    0xc(%ebp),%eax
085107a7 +0xa23:  mov    0x5a0(%eax),%edx
085107ad +0xa29:  mov    0x8(%ebp),%eax
085107b0 +0xa2c:  mov    %edx,0x224(%eax)
085107b6 +0xa32:  mov    0xc(%ebp),%eax
085107b9 +0xa35:  mov    0x5a4(%eax),%edx
085107bf +0xa3b:  mov    0x8(%ebp),%eax
085107c2 +0xa3e:  mov    %edx,0x228(%eax)
085107c8 +0xa44:  mov    0xc(%ebp),%eax
085107cb +0xa47:  mov    0x5c8(%eax),%edx
085107d1 +0xa4d:  mov    0x8(%ebp),%eax
085107d4 +0xa50:  mov    %edx,0x22c(%eax)
085107da +0xa56:  mov    0xc(%ebp),%eax
085107dd +0xa59:  mov    0x5cc(%eax),%edx
085107e3 +0xa5f:  mov    0x8(%ebp),%eax
085107e6 +0xa62:  mov    %edx,0x230(%eax)
085107ec +0xa68:  mov    0xc(%ebp),%eax
085107ef +0xa6b:  movzbl 0xd8(%eax),%edx
085107f6 +0xa72:  mov    0x8(%ebp),%eax
085107f9 +0xa75:  mov    %dl,0x144(%eax)
085107ff +0xa7b:  mov    0x8(%ebp),%eax
08510802 +0xa7e:  movl   $0x0,0x140(%eax)
0851080c +0xa88:  add    $0x24c,%esp
08510812 +0xa8e:  pop    %ebx
08510813 +0xa8f:  pop    %esi
08510814 +0xa90:  pop    %edi
08510815 +0xa91:  pop    %ebp
08510816 +0xa92:  ret
08510817 +0xa93:  nop
```

## 反编译 C

```c
// CEquipItem::set_item @ 0x850fd84

/* CEquipItem::set_item(STEquipmentScript&) */

void __thiscall CEquipItem::set_item(CEquipItem *this,STEquipmentScript *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  char local_224 [500];
  cMyTrace local_30 [16];
  int local_20;
  
  bVar9 = 0;
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x10);
  this[0x60] = *(CEquipItem *)(param_1 + 0xfc);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x2c);
  if (param_1[0x30] != (STEquipmentScript)0x0) {
    uVar2 = G_CDataManager();
    CDataManager::set_AuctionRegFreeCeraItem(uVar2);
  }
  this[0xf8] = *(CEquipItem *)(param_1 + 0x31);
  pcVar3 = local_224;
  for (iVar8 = 0x7d; iVar8 != 0; iVar8 = iVar8 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + ((uint)bVar9 * -2 + 1) * 4;
  }
  pcVar3 = (char *)std::string::c_str((string *)(param_1 + 0xac));
  strcpy(local_224,pcVar3);
  pcVar3 = (char *)std::string::c_str((string *)(param_1 + 0xac));
  cVar1 = CodePage::script2Database(pcVar3,local_224);
  if (cVar1 != '\x01') {
    uVar4 = std::string::c_str((string *)(param_1 + 0xac));
    uVar5 = CodePage::database();
    uVar6 = CodePage::script();
    cMyTrace::cMyTrace(local_30,"void CEquipItem::set_item(STEquipmentScript&)",0x553,5);
    cMyTrace::operator()
              (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar6,uVar5,uVar4,
               "void CEquipItem::set_item(STEquipmentScript&)",0x553);
  }
  std::string::operator=((string *)(this + 0x2c),local_224);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x88c);
  for (local_20 = 0; local_20 < 0xb; local_20 = local_20 + 1) {
    this[local_20 + 0x3c] = *(CEquipItem *)(param_1 + local_20 + 0x38);
  }
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 0x234) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 0x1bc);
  this[0x54] = (CEquipItem)0x0;
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(param_1 + 0x750);
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)(param_1 + 0x6bc);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0x738);
  if (*(int *)(param_1 + 0x1b4) == 0x16) {
    iVar8 = *(int *)(param_1 + 0x1b8);
    if (iVar8 == 1) {
      *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 0x764);
    }
    else if (iVar8 == 2) {
      RandomItemTable::Set((vector *)(this + 0x148));
    }
    else if (iVar8 == 0) {
      iVar8 = *(int *)(this + 0x15c);
      iVar7 = user_creature::GetInstanceCreatureScriptMgr();
      user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(iVar7,iVar8);
    }
  }
  *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0xf8);
  this[0x16c] = *(CEquipItem *)(param_1 + 0x7ac);
  std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::operator=
            ((vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)(this + 0x174),
             (vector *)(param_1 + 0x6c0));
  std::vector<unsigned_short,std::allocator<unsigned_short>>::operator=
            ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x180),
             (vector *)(param_1 + 0x6cc));
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(param_1 + 0x6d8);
  *(undefined4 *)(this + 400) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x100);
  this[0x78] = *(CEquipItem *)(param_1 + 0x104);
  this[0x79] = *(CEquipItem *)(param_1 + 0x7bc);
  std::string::operator=((string *)(this + 0xb0),(string *)(param_1 + 0x6c));
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0xcc);
  this[0x84] = *(CEquipItem *)(param_1 + 0x6f4);
  this[0x85] = *(CEquipItem *)(param_1 + 0x6f5);
  this[0x86] = *(CEquipItem *)(param_1 + 0x6f6);
  this[0x87] = *(CEquipItem *)(param_1 + 0xd0);
  this[0x88] = *(CEquipItem *)(param_1 + 0xda);
  this[0x89] = *(CEquipItem *)(param_1 + 0xd9);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0x6f8);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0x105);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0x109);
  this[0xbc] = *(CEquipItem *)(param_1 + 0x10d);
  STSpecialMonsterDrop::clear((STSpecialMonsterDrop *)(param_1 + 0x105));
  this[0x194] = *(CEquipItem *)(param_1 + 0x10e);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x198),
             (vector *)(param_1 + 0x7d8));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x1a4),
             (vector *)(param_1 + 0x7e4));
  std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>::operator=
            ((vector<STEnchantSystemData,std::allocator<STEnchantSystemData>> *)(this + 0x1b0),
             (vector *)(param_1 + 0x7cc));
  *(undefined4 *)(this + 0x1bc) = 0;
  cVar1 = (**(code **)(*(int *)this + 0x10))(this);
  if (cVar1 == '\0') {
    iVar8 = (**(code **)(*(int *)this + 0xc))(this);
    if (iVar8 == 0x16) {
      if (*(int *)(param_1 + 0x10) == 2) {
        *(undefined4 *)(this + 0x1bc) = 10;
      }
    }
    else if (*(int *)(param_1 + 0x10) == 2) {
      if (*(int *)(param_1 + 0xc4) == 5) {
        *(undefined4 *)(this + 0x1bc) = 2;
      }
      else if (*(int *)(param_1 + 0xc4) == 0x1e) {
        *(undefined4 *)(this + 0x1bc) = 1;
      }
      else {
        *(undefined4 *)(this + 0x1bc) = 9;
      }
    }
    else if (*(int *)(param_1 + 0x10) == 3) {
      *(undefined4 *)(this + 0x1bc) = 3;
    }
    else if (*(int *)(param_1 + 0x10) == 5) {
      *(undefined4 *)(this + 0x1bc) = 4;
    }
    else if (*(int *)(param_1 + 0x10) == 4) {
      *(undefined4 *)(this + 0x1bc) = 5;
    }
    else if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(this + 0x1bc) = 7;
    }
    else if (*(int *)(param_1 + 0x10) == 1) {
      *(undefined4 *)(this + 0x1bc) = 8;
    }
  }
  else {
    if ((*(int *)(this + 8) == 3) && (*(int *)(param_1 + 0x798) == 3)) {
      *(undefined4 *)(this + 0x1bc) = 6;
    }
    iVar8 = std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::size
                      ((vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>> *)
                       (param_1 + 0x424));
    setAvatarOptionSize(this,iVar8);
  }
  this[0xbd] = *(CEquipItem *)(param_1 + 0x10f);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0xc0),
             (vector *)(param_1 + 0x110));
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0x810);
  *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(param_1 + 0x17c);
  if (param_1[0x814] != (STEquipmentScript)0x2) {
    ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting
              (GlobalData::s_pCompoundBindCube,*(int *)(this + 4),
               param_1[0x814] != (STEquipmentScript)0x0,*(int *)(param_1 + 0x818));
  }
  std::set<int,std::less<int>,std::allocator<int>>::operator=
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xd4),(set *)(param_1 + 0xdc));
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x238) = *(undefined4 *)(param_1 + 0x6e0);
  this[0x1c8] = *(CEquipItem *)(param_1 + 0x888);
  this[0x1c9] = *(CEquipItem *)(param_1 + 0x889);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x154);
  std::vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>::
  clear((vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>
         *)(this + 0x104));
  std::vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>::
  operator=((vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>
             *)(this + 0x104),(vector *)(param_1 + 0x158));
  uVar4 = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(this + 0x114) = uVar4;
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x14c);
  uVar4 = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(this + 0x124) = uVar4;
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::operator=((set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
               *)(this + 0x128),(set *)(param_1 + 0x11c));
  *(undefined4 *)(this + 0x1cc) = *(undefined4 *)(param_1 + 0x604);
  *(int *)(this + 0x1d0) = (int)ROUND(*(float *)(param_1 + 0x608));
  *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(param_1 + 0x60c);
  this[0x1d8] = *(CEquipItem *)(param_1 + 0x880);
  *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(param_1 + 0x884);
  uVar4 = *(undefined4 *)(param_1 + 0x820);
  *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(param_1 + 0x81c);
  *(undefined4 *)(this + 0x1e4) = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x828);
  *(undefined4 *)(this + 0x1e8) = *(undefined4 *)(param_1 + 0x824);
  *(undefined4 *)(this + 0x1ec) = uVar4;
  std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::operator=
            ((vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>> *)
             (this + 0x1f0),(vector *)(param_1 + 0x424));
  if (*(int *)(param_1 + 0x890) == 1) {
    this[0x1fc] = (CEquipItem)0x0;
  }
  else {
    this[0x1fc] = (CEquipItem)0x1;
  }
  std::
  map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
  ::operator=((map<ItemUpgradeType::T,std::pair<int,int>,std::less<ItemUpgradeType::T>,std::allocator<std::pair<ItemUpgradeType::T_const,std::pair<int,int>>>>
               *)(this + 0x200),(map *)(param_1 + 0x6fc));
  this[0x218] = *(CEquipItem *)(param_1 + 0x88a);
  this[0x219] = *(CEquipItem *)(param_1 + 0x88b);
  this[0x21a] = *(CEquipItem *)(param_1 + 0x69c);
  *(undefined4 *)(this + 0x21c) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(this + 0x220) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(this + 0x224) = *(undefined4 *)(param_1 + 0x5a0);
  *(undefined4 *)(this + 0x228) = *(undefined4 *)(param_1 + 0x5a4);
  *(undefined4 *)(this + 0x22c) = *(undefined4 *)(param_1 + 0x5c8);
  *(undefined4 *)(this + 0x230) = *(undefined4 *)(param_1 + 0x5cc);
  this[0x144] = *(CEquipItem *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0x140) = 0;
  return;
}
```
