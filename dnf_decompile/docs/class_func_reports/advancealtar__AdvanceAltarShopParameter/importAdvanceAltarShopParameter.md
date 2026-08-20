# importAdvanceAltarShopParameter

`_ZN12advancealtar25AdvanceAltarShopParameter31importAdvanceAltarShopParameterEPKc`

`advancealtar::AdvanceAltarShopParameter::importAdvanceAltarShopParameter(char const*)`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarShopParameter` | `0x088a10cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a10cc  _ZN12advancealtar25AdvanceAltarShopParameter31importAdvanceAltarShopParameterEPKc
#           advancealtar::AdvanceAltarShopParameter::importAdvanceAltarShopParameter(char const*)
# range [0x088a10cc, 0x088a27a1]
088a10cc +0x0000:  push   %ebp
088a10cd +0x0001:  mov    %esp,%ebp
088a10cf +0x0003:  push   %esi
088a10d0 +0x0004:  push   %ebx
088a10d1 +0x0005:  sub    $0x350,%esp
088a10d7 +0x000b:  lea    -0x230(%ebp),%eax
088a10dd +0x0011:  mov    %eax,(%esp)
088a10e0 +0x0014:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088a10e5 +0x0019:  movl   $0x0,-0x64(%ebp)
088a10ec +0x0020:  movb   $0x0,-0x231(%ebp)
088a10f3 +0x0027:  mov    0xc(%ebp),%eax
088a10f6 +0x002a:  mov    %eax,0x4(%esp)
088a10fa +0x002e:  movl   $"",(%esp)
088a1101 +0x0035:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088a1106 +0x003a:  xor    $0x1,%eax
088a1109 +0x003d:  test   %al,%al
088a110b +0x003f:  je     088a111b <+0x4f>
088a110d +0x0041:  mov    $0x0,%ebx
088a1112 +0x0046:  jmp    088a2787 <+0x16bb>
088a1117 +0x004b:  nop
088a1118 +0x004c:  jmp    088a111b <+0x4f>
088a111a +0x004e:  nop
088a111b +0x004f:  movl   $0x1,0x4(%esp)
088a1123 +0x0057:  lea    -0x230(%ebp),%eax
088a1129 +0x005d:  mov    %eax,(%esp)
088a112c +0x0060:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088a1131 +0x0065:  xor    $0x1,%eax
088a1134 +0x0068:  test   %al,%al
088a1136 +0x006a:  jne    088a2761 <+0x1695>
088a113c +0x0070:  movl   $"[star reset fee gold]",0x4(%esp)
088a1144 +0x0078:  lea    -0x230(%ebp),%eax
088a114a +0x007e:  mov    %eax,(%esp)
088a114d +0x0081:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a1152 +0x0086:  test   %al,%al
088a1154 +0x0088:  je     088a1225 <+0x159>
088a115a +0x008e:  lea    -0x238(%ebp),%eax
088a1160 +0x0094:  mov    %eax,(%esp)
088a1163 +0x0097:  call   088a3760 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x27e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x27e
088a1168 +0x009c:  lea    -0x231(%ebp),%eax
088a116e +0x00a2:  mov    %eax,(%esp)
088a1171 +0x00a5:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a1176 +0x00aa:  mov    %eax,-0x23c(%ebp)
088a117c +0x00b0:  movzbl -0x231(%ebp),%eax
088a1183 +0x00b7:  xor    $0x1,%eax
088a1186 +0x00ba:  test   %al,%al
088a1188 +0x00bc:  je     088a118f <+0xc3>
088a118a +0x00be:  jmp    088a1220 <+0x154>
088a118f +0x00c3:  lea    -0x231(%ebp),%eax
088a1195 +0x00c9:  mov    %eax,(%esp)
088a1198 +0x00cc:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a119d +0x00d1:  mov    %eax,-0x60(%ebp)
088a11a0 +0x00d4:  movzbl -0x231(%ebp),%eax
088a11a7 +0x00db:  xor    $0x1,%eax
088a11aa +0x00de:  test   %al,%al
088a11ac +0x00e0:  je     088a11b0 <+0xe4>
088a11ae +0x00e2:  jmp    088a1220 <+0x154>
088a11b0 +0x00e4:  mov    -0x60(%ebp),%eax
088a11b3 +0x00e7:  mov    %eax,-0x238(%ebp)
088a11b9 +0x00ed:  lea    -0x21c(%ebp),%eax
088a11bf +0x00f3:  lea    -0x238(%ebp),%edx
088a11c5 +0x00f9:  mov    %edx,0x8(%esp)
088a11c9 +0x00fd:  lea    -0x23c(%ebp),%edx
088a11cf +0x0103:  mov    %edx,0x4(%esp)
088a11d3 +0x0107:  mov    %eax,(%esp)
088a11d6 +0x010a:  call   088a3bdf <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x6fd>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x6fd
088a11db +0x010f:  sub    $0x4,%esp
088a11de +0x0112:  lea    -0x21c(%ebp),%eax
088a11e4 +0x0118:  mov    %eax,0x4(%esp)
088a11e8 +0x011c:  lea    -0x224(%ebp),%eax
088a11ee +0x0122:  mov    %eax,(%esp)
088a11f1 +0x0125:  call   088a3c1e <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x73c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x73c
088a11f6 +0x012a:  mov    0x8(%ebp),%eax
088a11f9 +0x012d:  lea    0x18(%eax),%ecx
088a11fc +0x0130:  lea    -0x22c(%ebp),%eax
088a1202 +0x0136:  lea    -0x224(%ebp),%edx
088a1208 +0x013c:  mov    %edx,0x8(%esp)
088a120c +0x0140:  mov    %ecx,0x4(%esp)
088a1210 +0x0144:  mov    %eax,(%esp)
088a1213 +0x0147:  call   088a3c4e <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x76c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x76c
088a1218 +0x014c:  sub    $0x4,%esp
088a121b +0x014f:  jmp    088a115a <+0x8e>
088a1220 +0x0154:  jmp    088a111b <+0x4f>
088a1225 +0x0159:  movl   $"[ridable id]",0x4(%esp)
088a122d +0x0161:  lea    -0x230(%ebp),%eax
088a1233 +0x0167:  mov    %eax,(%esp)
088a1236 +0x016a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a123b +0x016f:  test   %al,%al
088a123d +0x0171:  je     088a1117 <+0x4b>
088a1243 +0x0177:  lea    -0x30c(%ebp),%eax
088a1249 +0x017d:  mov    %eax,(%esp)
088a124c +0x0180:  call   088a36a4 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x1c2>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x1c2
088a1251 +0x0185:  lea    -0x231(%ebp),%eax
088a1257 +0x018b:  mov    %eax,(%esp)
088a125a +0x018e:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a125f +0x0193:  mov    %eax,-0x5c(%ebp)
088a1262 +0x0196:  movzbl -0x231(%ebp),%eax
088a1269 +0x019d:  xor    $0x1,%eax
088a126c +0x01a0:  test   %al,%al
088a126e +0x01a2:  je     088a127a <+0x1ae>
088a1270 +0x01a4:  mov    $0x0,%ebx
088a1275 +0x01a9:  jmp    088a2749 <+0x167d>
088a127a +0x01ae:  mov    -0x5c(%ebp),%eax
088a127d +0x01b1:  mov    %eax,(%esp)
088a1280 +0x01b4:  call   08898ff0 <_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE>  ; advancealtar::isValidRidableId(advancealtar::RidableId::T)
088a1285 +0x01b9:  xor    $0x1,%eax
088a1288 +0x01bc:  test   %al,%al
088a128a +0x01be:  je     088a1296 <+0x1ca>
088a128c +0x01c0:  mov    $0x0,%ebx
088a1291 +0x01c5:  jmp    088a2749 <+0x167d>
088a1296 +0x01ca:  mov    -0x5c(%ebp),%eax
088a1299 +0x01cd:  mov    %eax,-0x30c(%ebp)
088a129f +0x01d3:  jmp    088a12ab <+0x1df>
088a12a1 +0x01d5:  nop
088a12a2 +0x01d6:  jmp    088a12ab <+0x1df>
088a12a4 +0x01d8:  nop
088a12a5 +0x01d9:  jmp    088a12ab <+0x1df>
088a12a7 +0x01db:  nop
088a12a8 +0x01dc:  jmp    088a12ab <+0x1df>
088a12aa +0x01de:  nop
088a12ab +0x01df:  movl   $0x1,0x4(%esp)
088a12b3 +0x01e7:  lea    -0x230(%ebp),%eax
088a12b9 +0x01ed:  mov    %eax,(%esp)
088a12bc +0x01f0:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088a12c1 +0x01f5:  xor    $0x1,%eax
088a12c4 +0x01f8:  test   %al,%al
088a12c6 +0x01fa:  jne    088a267c <+0x15b0>
088a12cc +0x0200:  movl   $"[unit]",0x4(%esp)
088a12d4 +0x0208:  lea    -0x230(%ebp),%eax
088a12da +0x020e:  mov    %eax,(%esp)
088a12dd +0x0211:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a12e2 +0x0216:  test   %al,%al
088a12e4 +0x0218:  je     088a1937 <+0x86b>
088a12ea +0x021e:  jmp    088a12ed <+0x221>
088a12ec +0x0220:  nop
088a12ed +0x0221:  movl   $0x1,0x4(%esp)
088a12f5 +0x0229:  lea    -0x230(%ebp),%eax
088a12fb +0x022f:  mov    %eax,(%esp)
088a12fe +0x0232:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088a1303 +0x0237:  xor    $0x1,%eax
088a1306 +0x023a:  test   %al,%al
088a1308 +0x023c:  je     088a130d <+0x241>
088a130a +0x023e:  nop
088a130b +0x023f:  jmp    088a12ab <+0x1df>
088a130d +0x0241:  movl   $"[id]",0x4(%esp)
088a1315 +0x0249:  lea    -0x230(%ebp),%eax
088a131b +0x024f:  mov    %eax,(%esp)
088a131e +0x0252:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a1323 +0x0257:  test   %al,%al
088a1325 +0x0259:  je     088a1914 <+0x848>
088a132b +0x025f:  lea    -0x340(%ebp),%eax
088a1331 +0x0265:  mov    %eax,(%esp)
088a1334 +0x0268:  call   088a3570 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x8e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x8e
088a1339 +0x026d:  lea    -0x231(%ebp),%eax
088a133f +0x0273:  mov    %eax,(%esp)
088a1342 +0x0276:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a1347 +0x027b:  mov    %eax,-0x58(%ebp)
088a134a +0x027e:  movzbl -0x231(%ebp),%eax
088a1351 +0x0285:  xor    $0x1,%eax
088a1354 +0x0288:  test   %al,%al
088a1356 +0x028a:  je     088a1362 <+0x296>
088a1358 +0x028c:  mov    $0x0,%ebx
088a135d +0x0291:  jmp    088a18f9 <+0x82d>
088a1362 +0x0296:  mov    -0x58(%ebp),%eax
088a1365 +0x0299:  mov    %eax,-0x340(%ebp)
088a136b +0x029f:  jmp    088a1371 <+0x2a5>
088a136d +0x02a1:  nop
088a136e +0x02a2:  jmp    088a1371 <+0x2a5>
088a1370 +0x02a4:  nop
088a1371 +0x02a5:  movl   $0x1,0x4(%esp)
088a1379 +0x02ad:  lea    -0x230(%ebp),%eax
088a137f +0x02b3:  mov    %eax,(%esp)
088a1382 +0x02b6:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088a1387 +0x02bb:  xor    $0x1,%eax
088a138a +0x02be:  test   %al,%al
088a138c +0x02c0:  jne    088a18d3 <+0x807>
088a1392 +0x02c6:  movl   $"[unlock stage index]",0x4(%esp)
088a139a +0x02ce:  lea    -0x230(%ebp),%eax
088a13a0 +0x02d4:  mov    %eax,(%esp)
088a13a3 +0x02d7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a13a8 +0x02dc:  test   %al,%al
088a13aa +0x02de:  je     088a13da <+0x30e>
088a13ac +0x02e0:  lea    -0x231(%ebp),%eax
088a13b2 +0x02e6:  mov    %eax,(%esp)
088a13b5 +0x02e9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a13ba +0x02ee:  mov    %eax,-0x54(%ebp)
088a13bd +0x02f1:  movzbl -0x231(%ebp),%eax
088a13c4 +0x02f8:  xor    $0x1,%eax
088a13c7 +0x02fb:  test   %al,%al
088a13c9 +0x02fd:  jne    088a18d6 <+0x80a>
088a13cf +0x0303:  mov    -0x54(%ebp),%eax
088a13d2 +0x0306:  mov    %eax,-0x33c(%ebp)
088a13d8 +0x030c:  jmp    088a1371 <+0x2a5>
088a13da +0x030e:  movl   $"[name]",0x4(%esp)
088a13e2 +0x0316:  lea    -0x230(%ebp),%eax
088a13e8 +0x031c:  mov    %eax,(%esp)
088a13eb +0x031f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a13f0 +0x0324:  test   %al,%al
088a13f2 +0x0326:  je     088a1415 <+0x349>
088a13f4 +0x0328:  lea    -0x340(%ebp),%eax
088a13fa +0x032e:  add    $0xc,%eax
088a13fd +0x0331:  mov    %eax,(%esp)
088a1400 +0x0334:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088a1405 +0x0339:  xor    $0x1,%eax
088a1408 +0x033c:  test   %al,%al
088a140a +0x033e:  je     088a136d <+0x2a1>
088a1410 +0x0344:  jmp    088a18d7 <+0x80b>
088a1415 +0x0349:  movl   $"[field name]",0x4(%esp)
088a141d +0x0351:  lea    -0x230(%ebp),%eax
088a1423 +0x0357:  mov    %eax,(%esp)
088a1426 +0x035a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a142b +0x035f:  test   %al,%al
088a142d +0x0361:  je     088a1512 <+0x446>
088a1433 +0x0367:  lea    -0x244(%ebp),%eax
088a1439 +0x036d:  mov    %eax,(%esp)
088a143c +0x0370:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088a1441 +0x0375:  jmp    088a1444 <+0x378>
088a1443 +0x0377:  nop
088a1444 +0x0378:  lea    -0x244(%ebp),%eax
088a144a +0x037e:  mov    %eax,(%esp)
088a144d +0x0381:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088a1452 +0x0386:  xor    $0x1,%eax
088a1455 +0x0389:  test   %al,%al
088a1457 +0x038b:  jne    088a14e3 <+0x417>
088a145d +0x0391:  lea    -0x244(%ebp),%eax
088a1463 +0x0397:  mov    %eax,0x4(%esp)
088a1467 +0x039b:  lea    -0x214(%ebp),%eax
088a146d +0x03a1:  mov    %eax,(%esp)
088a1470 +0x03a4:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
088a1475 +0x03a9:  lea    -0x214(%ebp),%eax
088a147b +0x03af:  mov    %eax,0x4(%esp)
088a147f +0x03b3:  mov    0x8(%ebp),%eax
088a1482 +0x03b6:  mov    %eax,(%esp)
088a1485 +0x03b9:  call   088a27a2 <_ZN12advancealtar25AdvanceAltarShopParameter12getFieldTypeESs>  ; advancealtar::AdvanceAltarShopParameter::getFieldType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
088a148a +0x03be:  mov    %eax,-0x240(%ebp)
088a1490 +0x03c4:  lea    -0x214(%ebp),%eax
088a1496 +0x03ca:  mov    %eax,(%esp)
088a1499 +0x03cd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a149e +0x03d2:  jmp    088a14b8 <+0x3ec>
088a14a0 +0x03d4:  mov    %edx,%ebx
088a14a2 +0x03d6:  mov    %eax,%esi
088a14a4 +0x03d8:  lea    -0x214(%ebp),%eax
088a14aa +0x03de:  mov    %eax,(%esp)
088a14ad +0x03e1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a14b2 +0x03e6:  mov    %esi,%eax
088a14b4 +0x03e8:  mov    %ebx,%edx
088a14b6 +0x03ea:  jmp    088a14f7 <+0x42b>
088a14b8 +0x03ec:  mov    -0x240(%ebp),%eax
088a14be +0x03f2:  cmp    $0xffffffff,%eax
088a14c1 +0x03f5:  je     088a1443 <+0x377>
088a14c3 +0x03f7:  lea    -0x240(%ebp),%eax
088a14c9 +0x03fd:  mov    %eax,0x4(%esp)
088a14cd +0x0401:  lea    -0x340(%ebp),%eax
088a14d3 +0x0407:  add    $0x10,%eax
088a14d6 +0x040a:  mov    %eax,(%esp)
088a14d9 +0x040d:  call   088a3c7a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x798>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x798
088a14de +0x0412:  jmp    088a1444 <+0x378>
088a14e3 +0x0417:  nop
088a14e4 +0x0418:  lea    -0x244(%ebp),%eax
088a14ea +0x041e:  mov    %eax,(%esp)
088a14ed +0x0421:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a14f2 +0x0426:  jmp    088a1371 <+0x2a5>
088a14f7 +0x042b:  mov    %edx,%ebx
088a14f9 +0x042d:  mov    %eax,%esi
088a14fb +0x042f:  lea    -0x244(%ebp),%eax
088a1501 +0x0435:  mov    %eax,(%esp)
088a1504 +0x0438:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a1509 +0x043d:  mov    %esi,%eax
088a150b +0x043f:  mov    %ebx,%edx
088a150d +0x0441:  jmp    088a18de <+0x812>
088a1512 +0x0446:  movl   $"[list]",0x4(%esp)
088a151a +0x044e:  lea    -0x230(%ebp),%eax
088a1520 +0x0454:  mov    %eax,(%esp)
088a1523 +0x0457:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a1528 +0x045c:  test   %al,%al
088a152a +0x045e:  je     088a18b3 <+0x7e7>
088a1530 +0x0464:  lea    -0x254(%ebp),%eax
088a1536 +0x046a:  mov    %eax,(%esp)
088a1539 +0x046d:  call   088a34fe <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x1c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x1c
088a153e +0x0472:  lea    -0x26c(%ebp),%eax
088a1544 +0x0478:  mov    %eax,(%esp)
088a1547 +0x047b:  call   088a3cee <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x80c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x80c
088a154c +0x0480:  movb   $0x1,-0x49(%ebp)
088a1550 +0x0484:  jmp    088a1839 <+0x76d>
088a1555 +0x0489:  lea    -0x26c(%ebp),%eax
088a155b +0x048f:  mov    %eax,(%esp)
088a155e +0x0492:  call   088a3d68 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x886>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x886
088a1563 +0x0497:  movl   $0x0,-0x48(%ebp)
088a156a +0x049e:  jmp    088a1732 <+0x666>
088a156f +0x04a3:  mov    -0x48(%ebp),%eax
088a1572 +0x04a6:  mov    %eax,0x4(%esp)
088a1576 +0x04aa:  lea    -0x340(%ebp),%eax
088a157c +0x04b0:  add    $0x10,%eax
088a157f +0x04b3:  mov    %eax,(%esp)
088a1582 +0x04b6:  call   088a3d98 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x8b6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x8b6
088a1587 +0x04bb:  mov    (%eax),%eax
088a1589 +0x04bd:  mov    %eax,-0x248(%ebp)
088a158f +0x04c3:  mov    -0x248(%ebp),%eax
088a1595 +0x04c9:  mov    %eax,-0x254(%ebp)
088a159b +0x04cf:  mov    -0x248(%ebp),%eax
088a15a1 +0x04d5:  mov    %eax,0x4(%esp)
088a15a5 +0x04d9:  mov    0x8(%ebp),%eax
088a15a8 +0x04dc:  mov    %eax,(%esp)
088a15ab +0x04df:  call   088a2b8e <_ZN12advancealtar25AdvanceAltarShopParameter11getdataTypeENS_9FieldType1TE>  ; advancealtar::AdvanceAltarShopParameter::getdataType(advancealtar::FieldType::T)
088a15b0 +0x04e4:  mov    %eax,-0x50(%ebp)
088a15b3 +0x04e7:  cmpl   $0x0,-0x50(%ebp)
088a15b7 +0x04eb:  jne    088a1640 <+0x574>
088a15bd +0x04f1:  lea    -0x270(%ebp),%eax
088a15c3 +0x04f7:  mov    %eax,(%esp)
088a15c6 +0x04fa:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088a15cb +0x04ff:  lea    -0x270(%ebp),%eax
088a15d1 +0x0505:  mov    %eax,(%esp)
088a15d4 +0x0508:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088a15d9 +0x050d:  xor    $0x1,%eax
088a15dc +0x0510:  test   %al,%al
088a15de +0x0512:  je     088a15eb <+0x51f>
088a15e0 +0x0514:  movb   $0x0,-0x49(%ebp)
088a15e4 +0x0518:  mov    $0x0,%ebx
088a15e9 +0x051d:  jmp    088a1628 <+0x55c>
088a15eb +0x051f:  lea    -0x270(%ebp),%eax
088a15f1 +0x0525:  mov    %eax,0x4(%esp)
088a15f5 +0x0529:  lea    -0x254(%ebp),%eax
088a15fb +0x052f:  add    $0x8,%eax
088a15fe +0x0532:  mov    %eax,(%esp)
088a1601 +0x0535:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
088a1606 +0x053a:  mov    $0x1,%ebx
088a160b +0x053f:  jmp    088a1628 <+0x55c>
088a160d +0x0541:  mov    %edx,%ebx
088a160f +0x0543:  mov    %eax,%esi
088a1611 +0x0545:  lea    -0x270(%ebp),%eax
088a1617 +0x054b:  mov    %eax,(%esp)
088a161a +0x054e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a161f +0x0553:  mov    %esi,%eax
088a1621 +0x0555:  mov    %ebx,%edx
088a1623 +0x0557:  jmp    088a1860 <+0x794>
088a1628 +0x055c:  lea    -0x270(%ebp),%eax
088a162e +0x0562:  mov    %eax,(%esp)
088a1631 +0x0565:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a1636 +0x056a:  test   %ebx,%ebx
088a1638 +0x056c:  je     088a1751 <+0x685>
088a163e +0x0572:  jmp    088a1671 <+0x5a5>
088a1640 +0x0574:  lea    -0x231(%ebp),%eax
088a1646 +0x057a:  mov    %eax,(%esp)
088a1649 +0x057d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a164e +0x0582:  mov    %eax,-0x44(%ebp)
088a1651 +0x0585:  movzbl -0x231(%ebp),%eax
088a1658 +0x058c:  xor    $0x1,%eax
088a165b +0x058f:  test   %al,%al
088a165d +0x0591:  je     088a1668 <+0x59c>
088a165f +0x0593:  movb   $0x0,-0x49(%ebp)
088a1663 +0x0597:  jmp    088a1751 <+0x685>
088a1668 +0x059c:  mov    -0x44(%ebp),%eax
088a166b +0x059f:  mov    %eax,-0x250(%ebp)
088a1671 +0x05a5:  cmpb   $0x0,-0x49(%ebp)
088a1675 +0x05a9:  je     088a172e <+0x662>
088a167b +0x05af:  lea    -0x1f8(%ebp),%eax
088a1681 +0x05b5:  lea    -0x254(%ebp),%edx
088a1687 +0x05bb:  mov    %edx,0x8(%esp)
088a168b +0x05bf:  lea    -0x248(%ebp),%edx
088a1691 +0x05c5:  mov    %edx,0x4(%esp)
088a1695 +0x05c9:  mov    %eax,(%esp)
088a1698 +0x05cc:  call   088a3daa <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x8c8>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x8c8
088a169d +0x05d1:  sub    $0x4,%esp
088a16a0 +0x05d4:  lea    -0x1f8(%ebp),%eax
088a16a6 +0x05da:  mov    %eax,0x4(%esp)
088a16aa +0x05de:  lea    -0x208(%ebp),%eax
088a16b0 +0x05e4:  mov    %eax,(%esp)
088a16b3 +0x05e7:  call   088a3e24 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x942>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x942
088a16b8 +0x05ec:  lea    -0x210(%ebp),%eax
088a16be +0x05f2:  lea    -0x208(%ebp),%edx
088a16c4 +0x05f8:  mov    %edx,0x8(%esp)
088a16c8 +0x05fc:  lea    -0x26c(%ebp),%edx
088a16ce +0x0602:  mov    %edx,0x4(%esp)
088a16d2 +0x0606:  mov    %eax,(%esp)
088a16d5 +0x0609:  call   088a3e5e <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x97c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x97c
088a16da +0x060e:  sub    $0x4,%esp
088a16dd +0x0611:  lea    -0x208(%ebp),%eax
088a16e3 +0x0617:  mov    %eax,(%esp)
088a16e6 +0x061a:  call   088a3860 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x37e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x37e
088a16eb +0x061f:  jmp    088a1720 <+0x654>
088a16ed +0x0621:  mov    %edx,%ebx
088a16ef +0x0623:  mov    %eax,%esi
088a16f1 +0x0625:  lea    -0x208(%ebp),%eax
088a16f7 +0x062b:  mov    %eax,(%esp)
088a16fa +0x062e:  call   088a3860 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x37e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x37e
088a16ff +0x0633:  mov    %esi,%eax
088a1701 +0x0635:  mov    %ebx,%edx
088a1703 +0x0637:  jmp    088a1705 <+0x639>
088a1705 +0x0639:  mov    %edx,%ebx
088a1707 +0x063b:  mov    %eax,%esi
088a1709 +0x063d:  lea    -0x1f8(%ebp),%eax
088a170f +0x0643:  mov    %eax,(%esp)
088a1712 +0x0646:  call   088a384a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x368>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x368
088a1717 +0x064b:  mov    %esi,%eax
088a1719 +0x064d:  mov    %ebx,%edx
088a171b +0x064f:  jmp    088a1860 <+0x794>
088a1720 +0x0654:  lea    -0x1f8(%ebp),%eax
088a1726 +0x065a:  mov    %eax,(%esp)
088a1729 +0x065d:  call   088a384a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x368>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x368
088a172e +0x0662:  addl   $0x1,-0x48(%ebp)
088a1732 +0x0666:  lea    -0x340(%ebp),%eax
088a1738 +0x066c:  add    $0x10,%eax
088a173b +0x066f:  mov    %eax,(%esp)
088a173e +0x0672:  call   088a3d7c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x89a>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x89a
088a1743 +0x0677:  cmp    -0x48(%ebp),%eax
088a1746 +0x067a:  setg   %al
088a1749 +0x067d:  test   %al,%al
088a174b +0x067f:  jne    088a156f <+0x4a3>
088a1751 +0x0685:  cmpb   $0x0,-0x49(%ebp)
088a1755 +0x0689:  je     088a1839 <+0x76d>
088a175b +0x068f:  movl   $0x0,-0x1e8(%ebp)
088a1765 +0x0699:  lea    -0x1e8(%ebp),%eax
088a176b +0x069f:  mov    %eax,0x4(%esp)
088a176f +0x06a3:  lea    -0x26c(%ebp),%eax
088a1775 +0x06a9:  mov    %eax,(%esp)
088a1778 +0x06ac:  call   088a3e8a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x9a8>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x9a8
088a177d +0x06b1:  mov    0x4(%eax),%eax
088a1780 +0x06b4:  mov    %eax,-0x274(%ebp)
088a1786 +0x06ba:  lea    -0x1c0(%ebp),%eax
088a178c +0x06c0:  lea    -0x26c(%ebp),%edx
088a1792 +0x06c6:  mov    %edx,0x8(%esp)
088a1796 +0x06ca:  lea    -0x274(%ebp),%edx
088a179c +0x06d0:  mov    %edx,0x4(%esp)
088a17a0 +0x06d4:  mov    %eax,(%esp)
088a17a3 +0x06d7:  call   088a3fd6 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xaf4>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xaf4
088a17a8 +0x06dc:  sub    $0x4,%esp
088a17ab +0x06df:  lea    -0x1c0(%ebp),%eax
088a17b1 +0x06e5:  mov    %eax,0x4(%esp)
088a17b5 +0x06e9:  lea    -0x1dc(%ebp),%eax
088a17bb +0x06ef:  mov    %eax,(%esp)
088a17be +0x06f2:  call   088a401a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xb38>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xb38
088a17c3 +0x06f7:  lea    -0x1e4(%ebp),%eax
088a17c9 +0x06fd:  lea    -0x1dc(%ebp),%edx
088a17cf +0x0703:  mov    %edx,0x8(%esp)
088a17d3 +0x0707:  lea    -0x340(%ebp),%edx
088a17d9 +0x070d:  add    $0x1c,%edx
088a17dc +0x0710:  mov    %edx,0x4(%esp)
088a17e0 +0x0714:  mov    %eax,(%esp)
088a17e3 +0x0717:  call   088a4054 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xb72>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xb72
088a17e8 +0x071c:  sub    $0x4,%esp
088a17eb +0x071f:  lea    -0x1dc(%ebp),%eax
088a17f1 +0x0725:  mov    %eax,(%esp)
088a17f4 +0x0728:  call   088a388c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x3aa>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x3aa
088a17f9 +0x072d:  jmp    088a182b <+0x75f>
088a17fb +0x072f:  mov    %edx,%ebx
088a17fd +0x0731:  mov    %eax,%esi
088a17ff +0x0733:  lea    -0x1dc(%ebp),%eax
088a1805 +0x0739:  mov    %eax,(%esp)
088a1808 +0x073c:  call   088a388c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x3aa>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x3aa
088a180d +0x0741:  mov    %esi,%eax
088a180f +0x0743:  mov    %ebx,%edx
088a1811 +0x0745:  jmp    088a1813 <+0x747>
088a1813 +0x0747:  mov    %edx,%ebx
088a1815 +0x0749:  mov    %eax,%esi
088a1817 +0x074b:  lea    -0x1c0(%ebp),%eax
088a181d +0x0751:  mov    %eax,(%esp)
088a1820 +0x0754:  call   088a3876 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x394>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x394
088a1825 +0x0759:  mov    %esi,%eax
088a1827 +0x075b:  mov    %ebx,%edx
088a1829 +0x075d:  jmp    088a1860 <+0x794>
088a182b +0x075f:  lea    -0x1c0(%ebp),%eax
088a1831 +0x0765:  mov    %eax,(%esp)
088a1834 +0x0768:  call   088a3876 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x394>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x394
088a1839 +0x076d:  cmpb   $0x0,-0x49(%ebp)
088a183d +0x0771:  jne    088a1555 <+0x489>
088a1843 +0x0777:  lea    -0x340(%ebp),%eax
088a1849 +0x077d:  mov    %eax,0x4(%esp)
088a184d +0x0781:  lea    -0x30c(%ebp),%eax
088a1853 +0x0787:  add    $0x4,%eax
088a1856 +0x078a:  mov    %eax,(%esp)
088a1859 +0x078d:  call   088a4080 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xb9e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xb9e
088a185e +0x0792:  jmp    088a1878 <+0x7ac>
088a1860 +0x0794:  mov    %edx,%ebx
088a1862 +0x0796:  mov    %eax,%esi
088a1864 +0x0798:  lea    -0x26c(%ebp),%eax
088a186a +0x079e:  mov    %eax,(%esp)
088a186d +0x07a1:  call   088a3836 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x354>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x354
088a1872 +0x07a6:  mov    %esi,%eax
088a1874 +0x07a8:  mov    %ebx,%edx
088a1876 +0x07aa:  jmp    088a1888 <+0x7bc>
088a1878 +0x07ac:  lea    -0x26c(%ebp),%eax
088a187e +0x07b2:  mov    %eax,(%esp)
088a1881 +0x07b5:  call   088a3836 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x354>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x354
088a1886 +0x07ba:  jmp    088a18a0 <+0x7d4>
088a1888 +0x07bc:  mov    %edx,%ebx
088a188a +0x07be:  mov    %eax,%esi
088a188c +0x07c0:  lea    -0x254(%ebp),%eax
088a1892 +0x07c6:  mov    %eax,(%esp)
088a1895 +0x07c9:  call   088a3820 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x33e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x33e
088a189a +0x07ce:  mov    %esi,%eax
088a189c +0x07d0:  mov    %ebx,%edx
088a189e +0x07d2:  jmp    088a18de <+0x812>
088a18a0 +0x07d4:  lea    -0x254(%ebp),%eax
088a18a6 +0x07da:  mov    %eax,(%esp)
088a18a9 +0x07dd:  call   088a3820 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x33e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x33e
088a18ae +0x07e2:  jmp    088a1371 <+0x2a5>
088a18b3 +0x07e7:  movl   $"[/id]",0x4(%esp)
088a18bb +0x07ef:  lea    -0x230(%ebp),%eax
088a18c1 +0x07f5:  mov    %eax,(%esp)
088a18c4 +0x07f8:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a18c9 +0x07fd:  test   %al,%al
088a18cb +0x07ff:  je     088a1370 <+0x2a4>
088a18d1 +0x0805:  jmp    088a18d7 <+0x80b>
088a18d3 +0x0807:  nop
088a18d4 +0x0808:  jmp    088a18d7 <+0x80b>
088a18d6 +0x080a:  nop
088a18d7 +0x080b:  mov    $0x1,%ebx
088a18dc +0x0810:  jmp    088a18f9 <+0x82d>
088a18de +0x0812:  mov    %edx,%ebx
088a18e0 +0x0814:  mov    %eax,%esi
088a18e2 +0x0816:  lea    -0x340(%ebp),%eax
088a18e8 +0x081c:  mov    %eax,(%esp)
088a18eb +0x081f:  call   088a3630 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x14e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x14e
088a18f0 +0x0824:  mov    %esi,%eax
088a18f2 +0x0826:  mov    %ebx,%edx
088a18f4 +0x0828:  jmp    088a2731 <+0x1665>
088a18f9 +0x082d:  lea    -0x340(%ebp),%eax
088a18ff +0x0833:  mov    %eax,(%esp)
088a1902 +0x0836:  call   088a3630 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x14e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x14e
088a1907 +0x083b:  test   %ebx,%ebx
088a1909 +0x083d:  je     088a12a1 <+0x1d5>
088a190f +0x0843:  jmp    088a12ed <+0x221>
088a1914 +0x0848:  movl   $"[/unit]",0x4(%esp)
088a191c +0x0850:  lea    -0x230(%ebp),%eax
088a1922 +0x0856:  mov    %eax,(%esp)
088a1925 +0x0859:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a192a +0x085e:  test   %al,%al
088a192c +0x0860:  je     088a12ec <+0x220>
088a1932 +0x0866:  jmp    088a12ab <+0x1df>
088a1937 +0x086b:  movl   $"[skill]",0x4(%esp)
088a193f +0x0873:  lea    -0x230(%ebp),%eax
088a1945 +0x0879:  mov    %eax,(%esp)
088a1948 +0x087c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a194d +0x0881:  test   %al,%al
088a194f +0x0883:  je     088a1ff8 <+0xf2c>
088a1955 +0x0889:  jmp    088a1958 <+0x88c>
088a1957 +0x088b:  nop
088a1958 +0x088c:  movl   $0x1,0x4(%esp)
088a1960 +0x0894:  lea    -0x230(%ebp),%eax
088a1966 +0x089a:  mov    %eax,(%esp)
088a1969 +0x089d:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088a196e +0x08a2:  xor    $0x1,%eax
088a1971 +0x08a5:  test   %al,%al
088a1973 +0x08a7:  je     088a197b <+0x8af>
088a1975 +0x08a9:  nop
088a1976 +0x08aa:  jmp    088a12ab <+0x1df>
088a197b +0x08af:  movl   $"[id]",0x4(%esp)
088a1983 +0x08b7:  lea    -0x230(%ebp),%eax
088a1989 +0x08bd:  mov    %eax,(%esp)
088a198c +0x08c0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a1991 +0x08c5:  test   %al,%al
088a1993 +0x08c7:  je     088a1fd5 <+0xf09>
088a1999 +0x08cd:  lea    -0x340(%ebp),%eax
088a199f +0x08d3:  mov    %eax,(%esp)
088a19a2 +0x08d6:  call   088a3570 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x8e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x8e
088a19a7 +0x08db:  lea    -0x231(%ebp),%eax
088a19ad +0x08e1:  mov    %eax,(%esp)
088a19b0 +0x08e4:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a19b5 +0x08e9:  mov    %eax,-0x40(%ebp)
088a19b8 +0x08ec:  movzbl -0x231(%ebp),%eax
088a19bf +0x08f3:  xor    $0x1,%eax
088a19c2 +0x08f6:  test   %al,%al
088a19c4 +0x08f8:  je     088a19d0 <+0x904>
088a19c6 +0x08fa:  mov    $0x0,%ebx
088a19cb +0x08ff:  jmp    088a1fba <+0xeee>
088a19d0 +0x0904:  mov    -0x40(%ebp),%eax
088a19d3 +0x0907:  mov    %eax,-0x340(%ebp)
088a19d9 +0x090d:  jmp    088a19df <+0x913>
088a19db +0x090f:  nop
088a19dc +0x0910:  jmp    088a19df <+0x913>
088a19de +0x0912:  nop
088a19df +0x0913:  movl   $0x1,0x4(%esp)
088a19e7 +0x091b:  lea    -0x230(%ebp),%eax
088a19ed +0x0921:  mov    %eax,(%esp)
088a19f0 +0x0924:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088a19f5 +0x0929:  xor    $0x1,%eax
088a19f8 +0x092c:  test   %al,%al
088a19fa +0x092e:  jne    088a1f91 <+0xec5>
088a1a00 +0x0934:  movl   $"[unlock stage index]",0x4(%esp)
088a1a08 +0x093c:  lea    -0x230(%ebp),%eax
088a1a0e +0x0942:  mov    %eax,(%esp)
088a1a11 +0x0945:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a1a16 +0x094a:  test   %al,%al
088a1a18 +0x094c:  je     088a1a48 <+0x97c>
088a1a1a +0x094e:  lea    -0x231(%ebp),%eax
088a1a20 +0x0954:  mov    %eax,(%esp)
088a1a23 +0x0957:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a1a28 +0x095c:  mov    %eax,-0x3c(%ebp)
088a1a2b +0x095f:  movzbl -0x231(%ebp),%eax
088a1a32 +0x0966:  xor    $0x1,%eax
088a1a35 +0x0969:  test   %al,%al
088a1a37 +0x096b:  jne    088a1f94 <+0xec8>
088a1a3d +0x0971:  mov    -0x3c(%ebp),%eax
088a1a40 +0x0974:  mov    %eax,-0x33c(%ebp)
088a1a46 +0x097a:  jmp    088a19df <+0x913>
088a1a48 +0x097c:  movl   $"[is settable slot]",0x4(%esp)
088a1a50 +0x0984:  lea    -0x230(%ebp),%eax
088a1a56 +0x098a:  mov    %eax,(%esp)
088a1a59 +0x098d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a1a5e +0x0992:  test   %al,%al
088a1a60 +0x0994:  je     088a1aa2 <+0x9d6>
088a1a62 +0x0996:  lea    -0x231(%ebp),%eax
088a1a68 +0x099c:  mov    %eax,(%esp)
088a1a6b +0x099f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a1a70 +0x09a4:  mov    %eax,-0x38(%ebp)
088a1a73 +0x09a7:  movzbl -0x231(%ebp),%eax
088a1a7a +0x09ae:  xor    $0x1,%eax
088a1a7d +0x09b1:  test   %al,%al
088a1a7f +0x09b3:  jne    088a1f97 <+0xecb>
088a1a85 +0x09b9:  movb   $0x1,-0x31(%ebp)
088a1a89 +0x09bd:  cmpl   $0x0,-0x38(%ebp)
088a1a8d +0x09c1:  jne    088a1a93 <+0x9c7>
088a1a8f +0x09c3:  movb   $0x0,-0x31(%ebp)
088a1a93 +0x09c7:  movzbl -0x31(%ebp),%eax
088a1a97 +0x09cb:  mov    %al,-0x338(%ebp)
088a1a9d +0x09d1:  jmp    088a19df <+0x913>
088a1aa2 +0x09d6:  movl   $"[name]",0x4(%esp)
088a1aaa +0x09de:  lea    -0x230(%ebp),%eax
088a1ab0 +0x09e4:  mov    %eax,(%esp)
088a1ab3 +0x09e7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a1ab8 +0x09ec:  test   %al,%al
088a1aba +0x09ee:  je     088a1add <+0xa11>
088a1abc +0x09f0:  lea    -0x340(%ebp),%eax
088a1ac2 +0x09f6:  add    $0xc,%eax
088a1ac5 +0x09f9:  mov    %eax,(%esp)
088a1ac8 +0x09fc:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088a1acd +0x0a01:  xor    $0x1,%eax
088a1ad0 +0x0a04:  test   %al,%al
088a1ad2 +0x0a06:  je     088a19db <+0x90f>
088a1ad8 +0x0a0c:  jmp    088a1f98 <+0xecc>
088a1add +0x0a11:  movl   $"[field name]",0x4(%esp)
088a1ae5 +0x0a19:  lea    -0x230(%ebp),%eax
088a1aeb +0x0a1f:  mov    %eax,(%esp)
088a1aee +0x0a22:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a1af3 +0x0a27:  test   %al,%al
088a1af5 +0x0a29:  je     088a1bda <+0xb0e>
088a1afb +0x0a2f:  lea    -0x27c(%ebp),%eax
088a1b01 +0x0a35:  mov    %eax,(%esp)
088a1b04 +0x0a38:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088a1b09 +0x0a3d:  jmp    088a1b0c <+0xa40>
088a1b0b +0x0a3f:  nop
088a1b0c +0x0a40:  lea    -0x27c(%ebp),%eax
088a1b12 +0x0a46:  mov    %eax,(%esp)
088a1b15 +0x0a49:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088a1b1a +0x0a4e:  xor    $0x1,%eax
088a1b1d +0x0a51:  test   %al,%al
088a1b1f +0x0a53:  jne    088a1bab <+0xadf>
088a1b25 +0x0a59:  lea    -0x27c(%ebp),%eax
088a1b2b +0x0a5f:  mov    %eax,0x4(%esp)
088a1b2f +0x0a63:  lea    -0x1a4(%ebp),%eax
088a1b35 +0x0a69:  mov    %eax,(%esp)
088a1b38 +0x0a6c:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
088a1b3d +0x0a71:  lea    -0x1a4(%ebp),%eax
088a1b43 +0x0a77:  mov    %eax,0x4(%esp)
088a1b47 +0x0a7b:  mov    0x8(%ebp),%eax
088a1b4a +0x0a7e:  mov    %eax,(%esp)
088a1b4d +0x0a81:  call   088a27a2 <_ZN12advancealtar25AdvanceAltarShopParameter12getFieldTypeESs>  ; advancealtar::AdvanceAltarShopParameter::getFieldType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
088a1b52 +0x0a86:  mov    %eax,-0x278(%ebp)
088a1b58 +0x0a8c:  lea    -0x1a4(%ebp),%eax
088a1b5e +0x0a92:  mov    %eax,(%esp)
088a1b61 +0x0a95:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a1b66 +0x0a9a:  jmp    088a1b80 <+0xab4>
088a1b68 +0x0a9c:  mov    %edx,%ebx
088a1b6a +0x0a9e:  mov    %eax,%esi
088a1b6c +0x0aa0:  lea    -0x1a4(%ebp),%eax
088a1b72 +0x0aa6:  mov    %eax,(%esp)
088a1b75 +0x0aa9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a1b7a +0x0aae:  mov    %esi,%eax
088a1b7c +0x0ab0:  mov    %ebx,%edx
088a1b7e +0x0ab2:  jmp    088a1bbf <+0xaf3>
088a1b80 +0x0ab4:  mov    -0x278(%ebp),%eax
088a1b86 +0x0aba:  cmp    $0xffffffff,%eax
088a1b89 +0x0abd:  je     088a1b0b <+0xa3f>
088a1b8b +0x0abf:  lea    -0x278(%ebp),%eax
088a1b91 +0x0ac5:  mov    %eax,0x4(%esp)
088a1b95 +0x0ac9:  lea    -0x340(%ebp),%eax
088a1b9b +0x0acf:  add    $0x10,%eax
088a1b9e +0x0ad2:  mov    %eax,(%esp)
088a1ba1 +0x0ad5:  call   088a3c7a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x798>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x798
088a1ba6 +0x0ada:  jmp    088a1b0c <+0xa40>
088a1bab +0x0adf:  nop
088a1bac +0x0ae0:  lea    -0x27c(%ebp),%eax
088a1bb2 +0x0ae6:  mov    %eax,(%esp)
088a1bb5 +0x0ae9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a1bba +0x0aee:  jmp    088a19df <+0x913>
088a1bbf +0x0af3:  mov    %edx,%ebx
088a1bc1 +0x0af5:  mov    %eax,%esi
088a1bc3 +0x0af7:  lea    -0x27c(%ebp),%eax
088a1bc9 +0x0afd:  mov    %eax,(%esp)
088a1bcc +0x0b00:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a1bd1 +0x0b05:  mov    %esi,%eax
088a1bd3 +0x0b07:  mov    %ebx,%edx
088a1bd5 +0x0b09:  jmp    088a1f9f <+0xed3>
088a1bda +0x0b0e:  movl   $"[list]",0x4(%esp)
088a1be2 +0x0b16:  lea    -0x230(%ebp),%eax
088a1be8 +0x0b1c:  mov    %eax,(%esp)
088a1beb +0x0b1f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a1bf0 +0x0b24:  test   %al,%al
088a1bf2 +0x0b26:  je     088a1f71 <+0xea5>
088a1bf8 +0x0b2c:  lea    -0x28c(%ebp),%eax
088a1bfe +0x0b32:  mov    %eax,(%esp)
088a1c01 +0x0b35:  call   088a34fe <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x1c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x1c
088a1c06 +0x0b3a:  lea    -0x2a4(%ebp),%eax
088a1c0c +0x0b40:  mov    %eax,(%esp)
088a1c0f +0x0b43:  call   088a3cee <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x80c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x80c
088a1c14 +0x0b48:  movb   $0x1,-0x29(%ebp)
088a1c18 +0x0b4c:  jmp    088a1ef7 <+0xe2b>
088a1c1d +0x0b51:  lea    -0x2a4(%ebp),%eax
088a1c23 +0x0b57:  mov    %eax,(%esp)
088a1c26 +0x0b5a:  call   088a3d68 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x886>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x886
088a1c2b +0x0b5f:  movl   $0x0,-0x28(%ebp)
088a1c32 +0x0b66:  jmp    088a1df0 <+0xd24>
088a1c37 +0x0b6b:  mov    -0x28(%ebp),%eax
088a1c3a +0x0b6e:  mov    %eax,0x4(%esp)
088a1c3e +0x0b72:  lea    -0x340(%ebp),%eax
088a1c44 +0x0b78:  add    $0x10,%eax
088a1c47 +0x0b7b:  mov    %eax,(%esp)
088a1c4a +0x0b7e:  call   088a3d98 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x8b6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x8b6
088a1c4f +0x0b83:  mov    (%eax),%eax
088a1c51 +0x0b85:  mov    %eax,-0x280(%ebp)
088a1c57 +0x0b8b:  mov    -0x280(%ebp),%eax
088a1c5d +0x0b91:  mov    %eax,-0x28c(%ebp)
088a1c63 +0x0b97:  mov    -0x280(%ebp),%eax
088a1c69 +0x0b9d:  mov    %eax,0x4(%esp)
088a1c6d +0x0ba1:  mov    0x8(%ebp),%eax
088a1c70 +0x0ba4:  mov    %eax,(%esp)
088a1c73 +0x0ba7:  call   088a2b8e <_ZN12advancealtar25AdvanceAltarShopParameter11getdataTypeENS_9FieldType1TE>  ; advancealtar::AdvanceAltarShopParameter::getdataType(advancealtar::FieldType::T)
088a1c78 +0x0bac:  mov    %eax,-0x30(%ebp)
088a1c7b +0x0baf:  cmpl   $0x0,-0x30(%ebp)
088a1c7f +0x0bb3:  jne    088a1d08 <+0xc3c>
088a1c85 +0x0bb9:  lea    -0x2a8(%ebp),%eax
088a1c8b +0x0bbf:  mov    %eax,(%esp)
088a1c8e +0x0bc2:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088a1c93 +0x0bc7:  lea    -0x2a8(%ebp),%eax
088a1c99 +0x0bcd:  mov    %eax,(%esp)
088a1c9c +0x0bd0:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088a1ca1 +0x0bd5:  xor    $0x1,%eax
088a1ca4 +0x0bd8:  test   %al,%al
088a1ca6 +0x0bda:  je     088a1cb3 <+0xbe7>
088a1ca8 +0x0bdc:  movb   $0x0,-0x29(%ebp)
088a1cac +0x0be0:  mov    $0x0,%ebx
088a1cb1 +0x0be5:  jmp    088a1cf0 <+0xc24>
088a1cb3 +0x0be7:  lea    -0x2a8(%ebp),%eax
088a1cb9 +0x0bed:  mov    %eax,0x4(%esp)
088a1cbd +0x0bf1:  lea    -0x28c(%ebp),%eax
088a1cc3 +0x0bf7:  add    $0x8,%eax
088a1cc6 +0x0bfa:  mov    %eax,(%esp)
088a1cc9 +0x0bfd:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
088a1cce +0x0c02:  mov    $0x1,%ebx
088a1cd3 +0x0c07:  jmp    088a1cf0 <+0xc24>
088a1cd5 +0x0c09:  mov    %edx,%ebx
088a1cd7 +0x0c0b:  mov    %eax,%esi
088a1cd9 +0x0c0d:  lea    -0x2a8(%ebp),%eax
088a1cdf +0x0c13:  mov    %eax,(%esp)
088a1ce2 +0x0c16:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a1ce7 +0x0c1b:  mov    %esi,%eax
088a1ce9 +0x0c1d:  mov    %ebx,%edx
088a1ceb +0x0c1f:  jmp    088a1f1e <+0xe52>
088a1cf0 +0x0c24:  lea    -0x2a8(%ebp),%eax
088a1cf6 +0x0c2a:  mov    %eax,(%esp)
088a1cf9 +0x0c2d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a1cfe +0x0c32:  test   %ebx,%ebx
088a1d00 +0x0c34:  je     088a1e0f <+0xd43>
088a1d06 +0x0c3a:  jmp    088a1d39 <+0xc6d>
088a1d08 +0x0c3c:  lea    -0x231(%ebp),%eax
088a1d0e +0x0c42:  mov    %eax,(%esp)
088a1d11 +0x0c45:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a1d16 +0x0c4a:  mov    %eax,-0x24(%ebp)
088a1d19 +0x0c4d:  movzbl -0x231(%ebp),%eax
088a1d20 +0x0c54:  xor    $0x1,%eax
088a1d23 +0x0c57:  test   %al,%al
088a1d25 +0x0c59:  je     088a1d30 <+0xc64>
088a1d27 +0x0c5b:  movb   $0x0,-0x29(%ebp)
088a1d2b +0x0c5f:  jmp    088a1e0f <+0xd43>
088a1d30 +0x0c64:  mov    -0x24(%ebp),%eax
088a1d33 +0x0c67:  mov    %eax,-0x288(%ebp)
088a1d39 +0x0c6d:  lea    -0x188(%ebp),%eax
088a1d3f +0x0c73:  lea    -0x28c(%ebp),%edx
088a1d45 +0x0c79:  mov    %edx,0x8(%esp)
088a1d49 +0x0c7d:  lea    -0x280(%ebp),%edx
088a1d4f +0x0c83:  mov    %edx,0x4(%esp)
088a1d53 +0x0c87:  mov    %eax,(%esp)
088a1d56 +0x0c8a:  call   088a3daa <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x8c8>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x8c8
088a1d5b +0x0c8f:  sub    $0x4,%esp
088a1d5e +0x0c92:  lea    -0x188(%ebp),%eax
088a1d64 +0x0c98:  mov    %eax,0x4(%esp)
088a1d68 +0x0c9c:  lea    -0x198(%ebp),%eax
088a1d6e +0x0ca2:  mov    %eax,(%esp)
088a1d71 +0x0ca5:  call   088a3e24 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x942>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x942
088a1d76 +0x0caa:  lea    -0x1a0(%ebp),%eax
088a1d7c +0x0cb0:  lea    -0x198(%ebp),%edx
088a1d82 +0x0cb6:  mov    %edx,0x8(%esp)
088a1d86 +0x0cba:  lea    -0x2a4(%ebp),%edx
088a1d8c +0x0cc0:  mov    %edx,0x4(%esp)
088a1d90 +0x0cc4:  mov    %eax,(%esp)
088a1d93 +0x0cc7:  call   088a3e5e <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x97c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x97c
088a1d98 +0x0ccc:  sub    $0x4,%esp
088a1d9b +0x0ccf:  lea    -0x198(%ebp),%eax
088a1da1 +0x0cd5:  mov    %eax,(%esp)
088a1da4 +0x0cd8:  call   088a3860 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x37e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x37e
088a1da9 +0x0cdd:  jmp    088a1dde <+0xd12>
088a1dab +0x0cdf:  mov    %edx,%ebx
088a1dad +0x0ce1:  mov    %eax,%esi
088a1daf +0x0ce3:  lea    -0x198(%ebp),%eax
088a1db5 +0x0ce9:  mov    %eax,(%esp)
088a1db8 +0x0cec:  call   088a3860 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x37e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x37e
088a1dbd +0x0cf1:  mov    %esi,%eax
088a1dbf +0x0cf3:  mov    %ebx,%edx
088a1dc1 +0x0cf5:  jmp    088a1dc3 <+0xcf7>
088a1dc3 +0x0cf7:  mov    %edx,%ebx
088a1dc5 +0x0cf9:  mov    %eax,%esi
088a1dc7 +0x0cfb:  lea    -0x188(%ebp),%eax
088a1dcd +0x0d01:  mov    %eax,(%esp)
088a1dd0 +0x0d04:  call   088a384a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x368>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x368
088a1dd5 +0x0d09:  mov    %esi,%eax
088a1dd7 +0x0d0b:  mov    %ebx,%edx
088a1dd9 +0x0d0d:  jmp    088a1f1e <+0xe52>
088a1dde +0x0d12:  lea    -0x188(%ebp),%eax
088a1de4 +0x0d18:  mov    %eax,(%esp)
088a1de7 +0x0d1b:  call   088a384a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x368>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x368
088a1dec +0x0d20:  addl   $0x1,-0x28(%ebp)
088a1df0 +0x0d24:  lea    -0x340(%ebp),%eax
088a1df6 +0x0d2a:  add    $0x10,%eax
088a1df9 +0x0d2d:  mov    %eax,(%esp)
088a1dfc +0x0d30:  call   088a3d7c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x89a>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x89a
088a1e01 +0x0d35:  cmp    -0x28(%ebp),%eax
088a1e04 +0x0d38:  setg   %al
088a1e07 +0x0d3b:  test   %al,%al
088a1e09 +0x0d3d:  jne    088a1c37 <+0xb6b>
088a1e0f +0x0d43:  cmpb   $0x0,-0x29(%ebp)
088a1e13 +0x0d47:  je     088a1ef7 <+0xe2b>
088a1e19 +0x0d4d:  movl   $0x0,-0x178(%ebp)
088a1e23 +0x0d57:  lea    -0x178(%ebp),%eax
088a1e29 +0x0d5d:  mov    %eax,0x4(%esp)
088a1e2d +0x0d61:  lea    -0x2a4(%ebp),%eax
088a1e33 +0x0d67:  mov    %eax,(%esp)
088a1e36 +0x0d6a:  call   088a3e8a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x9a8>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x9a8
088a1e3b +0x0d6f:  mov    0x4(%eax),%eax
088a1e3e +0x0d72:  mov    %eax,-0x2ac(%ebp)
088a1e44 +0x0d78:  lea    -0x150(%ebp),%eax
088a1e4a +0x0d7e:  lea    -0x2a4(%ebp),%edx
088a1e50 +0x0d84:  mov    %edx,0x8(%esp)
088a1e54 +0x0d88:  lea    -0x2ac(%ebp),%edx
088a1e5a +0x0d8e:  mov    %edx,0x4(%esp)
088a1e5e +0x0d92:  mov    %eax,(%esp)
088a1e61 +0x0d95:  call   088a3fd6 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xaf4>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xaf4
088a1e66 +0x0d9a:  sub    $0x4,%esp
088a1e69 +0x0d9d:  lea    -0x150(%ebp),%eax
088a1e6f +0x0da3:  mov    %eax,0x4(%esp)
088a1e73 +0x0da7:  lea    -0x16c(%ebp),%eax
088a1e79 +0x0dad:  mov    %eax,(%esp)
088a1e7c +0x0db0:  call   088a401a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xb38>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xb38
088a1e81 +0x0db5:  lea    -0x174(%ebp),%eax
088a1e87 +0x0dbb:  lea    -0x16c(%ebp),%edx
088a1e8d +0x0dc1:  mov    %edx,0x8(%esp)
088a1e91 +0x0dc5:  lea    -0x340(%ebp),%edx
088a1e97 +0x0dcb:  add    $0x1c,%edx
088a1e9a +0x0dce:  mov    %edx,0x4(%esp)
088a1e9e +0x0dd2:  mov    %eax,(%esp)
088a1ea1 +0x0dd5:  call   088a4054 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xb72>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xb72
088a1ea6 +0x0dda:  sub    $0x4,%esp
088a1ea9 +0x0ddd:  lea    -0x16c(%ebp),%eax
088a1eaf +0x0de3:  mov    %eax,(%esp)
088a1eb2 +0x0de6:  call   088a388c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x3aa>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x3aa
088a1eb7 +0x0deb:  jmp    088a1ee9 <+0xe1d>
088a1eb9 +0x0ded:  mov    %edx,%ebx
088a1ebb +0x0def:  mov    %eax,%esi
088a1ebd +0x0df1:  lea    -0x16c(%ebp),%eax
088a1ec3 +0x0df7:  mov    %eax,(%esp)
088a1ec6 +0x0dfa:  call   088a388c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x3aa>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x3aa
088a1ecb +0x0dff:  mov    %esi,%eax
088a1ecd +0x0e01:  mov    %ebx,%edx
088a1ecf +0x0e03:  jmp    088a1ed1 <+0xe05>
088a1ed1 +0x0e05:  mov    %edx,%ebx
088a1ed3 +0x0e07:  mov    %eax,%esi
088a1ed5 +0x0e09:  lea    -0x150(%ebp),%eax
088a1edb +0x0e0f:  mov    %eax,(%esp)
088a1ede +0x0e12:  call   088a3876 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x394>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x394
088a1ee3 +0x0e17:  mov    %esi,%eax
088a1ee5 +0x0e19:  mov    %ebx,%edx
088a1ee7 +0x0e1b:  jmp    088a1f1e <+0xe52>
088a1ee9 +0x0e1d:  lea    -0x150(%ebp),%eax
088a1eef +0x0e23:  mov    %eax,(%esp)
088a1ef2 +0x0e26:  call   088a3876 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x394>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x394
088a1ef7 +0x0e2b:  cmpb   $0x0,-0x29(%ebp)
088a1efb +0x0e2f:  jne    088a1c1d <+0xb51>
088a1f01 +0x0e35:  lea    -0x340(%ebp),%eax
088a1f07 +0x0e3b:  mov    %eax,0x4(%esp)
088a1f0b +0x0e3f:  lea    -0x30c(%ebp),%eax
088a1f11 +0x0e45:  add    $0x10,%eax
088a1f14 +0x0e48:  mov    %eax,(%esp)
088a1f17 +0x0e4b:  call   088a4080 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xb9e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xb9e
088a1f1c +0x0e50:  jmp    088a1f36 <+0xe6a>
088a1f1e +0x0e52:  mov    %edx,%ebx
088a1f20 +0x0e54:  mov    %eax,%esi
088a1f22 +0x0e56:  lea    -0x2a4(%ebp),%eax
088a1f28 +0x0e5c:  mov    %eax,(%esp)
088a1f2b +0x0e5f:  call   088a3836 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x354>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x354
088a1f30 +0x0e64:  mov    %esi,%eax
088a1f32 +0x0e66:  mov    %ebx,%edx
088a1f34 +0x0e68:  jmp    088a1f46 <+0xe7a>
088a1f36 +0x0e6a:  lea    -0x2a4(%ebp),%eax
088a1f3c +0x0e70:  mov    %eax,(%esp)
088a1f3f +0x0e73:  call   088a3836 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x354>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x354
088a1f44 +0x0e78:  jmp    088a1f5e <+0xe92>
088a1f46 +0x0e7a:  mov    %edx,%ebx
088a1f48 +0x0e7c:  mov    %eax,%esi
088a1f4a +0x0e7e:  lea    -0x28c(%ebp),%eax
088a1f50 +0x0e84:  mov    %eax,(%esp)
088a1f53 +0x0e87:  call   088a3820 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x33e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x33e
088a1f58 +0x0e8c:  mov    %esi,%eax
088a1f5a +0x0e8e:  mov    %ebx,%edx
088a1f5c +0x0e90:  jmp    088a1f9f <+0xed3>
088a1f5e +0x0e92:  lea    -0x28c(%ebp),%eax
088a1f64 +0x0e98:  mov    %eax,(%esp)
088a1f67 +0x0e9b:  call   088a3820 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x33e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x33e
088a1f6c +0x0ea0:  jmp    088a19df <+0x913>
088a1f71 +0x0ea5:  movl   $"[/id]",0x4(%esp)
088a1f79 +0x0ead:  lea    -0x230(%ebp),%eax
088a1f7f +0x0eb3:  mov    %eax,(%esp)
088a1f82 +0x0eb6:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a1f87 +0x0ebb:  test   %al,%al
088a1f89 +0x0ebd:  je     088a19de <+0x912>
088a1f8f +0x0ec3:  jmp    088a1f98 <+0xecc>
088a1f91 +0x0ec5:  nop
088a1f92 +0x0ec6:  jmp    088a1f98 <+0xecc>
088a1f94 +0x0ec8:  nop
088a1f95 +0x0ec9:  jmp    088a1f98 <+0xecc>
088a1f97 +0x0ecb:  nop
088a1f98 +0x0ecc:  mov    $0x1,%ebx
088a1f9d +0x0ed1:  jmp    088a1fba <+0xeee>
088a1f9f +0x0ed3:  mov    %edx,%ebx
088a1fa1 +0x0ed5:  mov    %eax,%esi
088a1fa3 +0x0ed7:  lea    -0x340(%ebp),%eax
088a1fa9 +0x0edd:  mov    %eax,(%esp)
088a1fac +0x0ee0:  call   088a3630 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x14e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x14e
088a1fb1 +0x0ee5:  mov    %esi,%eax
088a1fb3 +0x0ee7:  mov    %ebx,%edx
088a1fb5 +0x0ee9:  jmp    088a2731 <+0x1665>
088a1fba +0x0eee:  lea    -0x340(%ebp),%eax
088a1fc0 +0x0ef4:  mov    %eax,(%esp)
088a1fc3 +0x0ef7:  call   088a3630 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x14e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x14e
088a1fc8 +0x0efc:  test   %ebx,%ebx
088a1fca +0x0efe:  je     088a12a4 <+0x1d8>
088a1fd0 +0x0f04:  jmp    088a1958 <+0x88c>
088a1fd5 +0x0f09:  movl   $"[/skill]",0x4(%esp)
088a1fdd +0x0f11:  lea    -0x230(%ebp),%eax
088a1fe3 +0x0f17:  mov    %eax,(%esp)
088a1fe6 +0x0f1a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a1feb +0x0f1f:  test   %al,%al
088a1fed +0x0f21:  je     088a1957 <+0x88b>
088a1ff3 +0x0f27:  jmp    088a12ab <+0x1df>
088a1ff8 +0x0f2c:  movl   $"[tower]",0x4(%esp)
088a2000 +0x0f34:  lea    -0x230(%ebp),%eax
088a2006 +0x0f3a:  mov    %eax,(%esp)
088a2009 +0x0f3d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a200e +0x0f42:  test   %al,%al
088a2010 +0x0f44:  je     088a265c <+0x1590>
088a2016 +0x0f4a:  jmp    088a2019 <+0xf4d>
088a2018 +0x0f4c:  nop
088a2019 +0x0f4d:  movl   $0x1,0x4(%esp)
088a2021 +0x0f55:  lea    -0x230(%ebp),%eax
088a2027 +0x0f5b:  mov    %eax,(%esp)
088a202a +0x0f5e:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088a202f +0x0f63:  xor    $0x1,%eax
088a2032 +0x0f66:  test   %al,%al
088a2034 +0x0f68:  je     088a203c <+0xf70>
088a2036 +0x0f6a:  nop
088a2037 +0x0f6b:  jmp    088a12ab <+0x1df>
088a203c +0x0f70:  movl   $"[id]",0x4(%esp)
088a2044 +0x0f78:  lea    -0x230(%ebp),%eax
088a204a +0x0f7e:  mov    %eax,(%esp)
088a204d +0x0f81:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a2052 +0x0f86:  test   %al,%al
088a2054 +0x0f88:  je     088a2639 <+0x156d>
088a205a +0x0f8e:  lea    -0x340(%ebp),%eax
088a2060 +0x0f94:  mov    %eax,(%esp)
088a2063 +0x0f97:  call   088a3570 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x8e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x8e
088a2068 +0x0f9c:  lea    -0x231(%ebp),%eax
088a206e +0x0fa2:  mov    %eax,(%esp)
088a2071 +0x0fa5:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a2076 +0x0faa:  mov    %eax,-0x20(%ebp)
088a2079 +0x0fad:  movzbl -0x231(%ebp),%eax
088a2080 +0x0fb4:  xor    $0x1,%eax
088a2083 +0x0fb7:  test   %al,%al
088a2085 +0x0fb9:  je     088a2091 <+0xfc5>
088a2087 +0x0fbb:  mov    $0x0,%ebx
088a208c +0x0fc0:  jmp    088a261e <+0x1552>
088a2091 +0x0fc5:  mov    -0x20(%ebp),%eax
088a2094 +0x0fc8:  mov    %eax,-0x340(%ebp)
088a209a +0x0fce:  jmp    088a20a0 <+0xfd4>
088a209c +0x0fd0:  nop
088a209d +0x0fd1:  jmp    088a20a0 <+0xfd4>
088a209f +0x0fd3:  nop
088a20a0 +0x0fd4:  movl   $0x1,0x4(%esp)
088a20a8 +0x0fdc:  lea    -0x230(%ebp),%eax
088a20ae +0x0fe2:  mov    %eax,(%esp)
088a20b1 +0x0fe5:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088a20b6 +0x0fea:  xor    $0x1,%eax
088a20b9 +0x0fed:  test   %al,%al
088a20bb +0x0fef:  jne    088a25f8 <+0x152c>
088a20c1 +0x0ff5:  movl   $"[unlock stage index]",0x4(%esp)
088a20c9 +0x0ffd:  lea    -0x230(%ebp),%eax
088a20cf +0x1003:  mov    %eax,(%esp)
088a20d2 +0x1006:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a20d7 +0x100b:  test   %al,%al
088a20d9 +0x100d:  je     088a2109 <+0x103d>
088a20db +0x100f:  lea    -0x231(%ebp),%eax
088a20e1 +0x1015:  mov    %eax,(%esp)
088a20e4 +0x1018:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a20e9 +0x101d:  mov    %eax,-0x1c(%ebp)
088a20ec +0x1020:  movzbl -0x231(%ebp),%eax
088a20f3 +0x1027:  xor    $0x1,%eax
088a20f6 +0x102a:  test   %al,%al
088a20f8 +0x102c:  jne    088a25fb <+0x152f>
088a20fe +0x1032:  mov    -0x1c(%ebp),%eax
088a2101 +0x1035:  mov    %eax,-0x33c(%ebp)
088a2107 +0x103b:  jmp    088a20a0 <+0xfd4>
088a2109 +0x103d:  movl   $"[name]",0x4(%esp)
088a2111 +0x1045:  lea    -0x230(%ebp),%eax
088a2117 +0x104b:  mov    %eax,(%esp)
088a211a +0x104e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a211f +0x1053:  test   %al,%al
088a2121 +0x1055:  je     088a2144 <+0x1078>
088a2123 +0x1057:  lea    -0x340(%ebp),%eax
088a2129 +0x105d:  add    $0xc,%eax
088a212c +0x1060:  mov    %eax,(%esp)
088a212f +0x1063:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088a2134 +0x1068:  xor    $0x1,%eax
088a2137 +0x106b:  test   %al,%al
088a2139 +0x106d:  je     088a209c <+0xfd0>
088a213f +0x1073:  jmp    088a25fc <+0x1530>
088a2144 +0x1078:  movl   $"[field name]",0x4(%esp)
088a214c +0x1080:  lea    -0x230(%ebp),%eax
088a2152 +0x1086:  mov    %eax,(%esp)
088a2155 +0x1089:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a215a +0x108e:  test   %al,%al
088a215c +0x1090:  je     088a2241 <+0x1175>
088a2162 +0x1096:  lea    -0x2b4(%ebp),%eax
088a2168 +0x109c:  mov    %eax,(%esp)
088a216b +0x109f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088a2170 +0x10a4:  jmp    088a2173 <+0x10a7>
088a2172 +0x10a6:  nop
088a2173 +0x10a7:  lea    -0x2b4(%ebp),%eax
088a2179 +0x10ad:  mov    %eax,(%esp)
088a217c +0x10b0:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088a2181 +0x10b5:  xor    $0x1,%eax
088a2184 +0x10b8:  test   %al,%al
088a2186 +0x10ba:  jne    088a2212 <+0x1146>
088a218c +0x10c0:  lea    -0x2b4(%ebp),%eax
088a2192 +0x10c6:  mov    %eax,0x4(%esp)
088a2196 +0x10ca:  lea    -0x134(%ebp),%eax
088a219c +0x10d0:  mov    %eax,(%esp)
088a219f +0x10d3:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
088a21a4 +0x10d8:  lea    -0x134(%ebp),%eax
088a21aa +0x10de:  mov    %eax,0x4(%esp)
088a21ae +0x10e2:  mov    0x8(%ebp),%eax
088a21b1 +0x10e5:  mov    %eax,(%esp)
088a21b4 +0x10e8:  call   088a27a2 <_ZN12advancealtar25AdvanceAltarShopParameter12getFieldTypeESs>  ; advancealtar::AdvanceAltarShopParameter::getFieldType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
088a21b9 +0x10ed:  mov    %eax,-0x2b0(%ebp)
088a21bf +0x10f3:  lea    -0x134(%ebp),%eax
088a21c5 +0x10f9:  mov    %eax,(%esp)
088a21c8 +0x10fc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a21cd +0x1101:  jmp    088a21e7 <+0x111b>
088a21cf +0x1103:  mov    %edx,%ebx
088a21d1 +0x1105:  mov    %eax,%esi
088a21d3 +0x1107:  lea    -0x134(%ebp),%eax
088a21d9 +0x110d:  mov    %eax,(%esp)
088a21dc +0x1110:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a21e1 +0x1115:  mov    %esi,%eax
088a21e3 +0x1117:  mov    %ebx,%edx
088a21e5 +0x1119:  jmp    088a2226 <+0x115a>
088a21e7 +0x111b:  mov    -0x2b0(%ebp),%eax
088a21ed +0x1121:  cmp    $0xffffffff,%eax
088a21f0 +0x1124:  je     088a2172 <+0x10a6>
088a21f2 +0x1126:  lea    -0x2b0(%ebp),%eax
088a21f8 +0x112c:  mov    %eax,0x4(%esp)
088a21fc +0x1130:  lea    -0x340(%ebp),%eax
088a2202 +0x1136:  add    $0x10,%eax
088a2205 +0x1139:  mov    %eax,(%esp)
088a2208 +0x113c:  call   088a3c7a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x798>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x798
088a220d +0x1141:  jmp    088a2173 <+0x10a7>
088a2212 +0x1146:  nop
088a2213 +0x1147:  lea    -0x2b4(%ebp),%eax
088a2219 +0x114d:  mov    %eax,(%esp)
088a221c +0x1150:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a2221 +0x1155:  jmp    088a20a0 <+0xfd4>
088a2226 +0x115a:  mov    %edx,%ebx
088a2228 +0x115c:  mov    %eax,%esi
088a222a +0x115e:  lea    -0x2b4(%ebp),%eax
088a2230 +0x1164:  mov    %eax,(%esp)
088a2233 +0x1167:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a2238 +0x116c:  mov    %esi,%eax
088a223a +0x116e:  mov    %ebx,%edx
088a223c +0x1170:  jmp    088a2603 <+0x1537>
088a2241 +0x1175:  movl   $"[list]",0x4(%esp)
088a2249 +0x117d:  lea    -0x230(%ebp),%eax
088a224f +0x1183:  mov    %eax,(%esp)
088a2252 +0x1186:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a2257 +0x118b:  test   %al,%al
088a2259 +0x118d:  je     088a25d8 <+0x150c>
088a225f +0x1193:  lea    -0x2c4(%ebp),%eax
088a2265 +0x1199:  mov    %eax,(%esp)
088a2268 +0x119c:  call   088a34fe <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x1c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x1c
088a226d +0x11a1:  lea    -0x2dc(%ebp),%eax
088a2273 +0x11a7:  mov    %eax,(%esp)
088a2276 +0x11aa:  call   088a3cee <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x80c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x80c
088a227b +0x11af:  movb   $0x1,-0x11(%ebp)
088a227f +0x11b3:  jmp    088a255e <+0x1492>
088a2284 +0x11b8:  lea    -0x2dc(%ebp),%eax
088a228a +0x11be:  mov    %eax,(%esp)
088a228d +0x11c1:  call   088a3d68 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x886>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x886
088a2292 +0x11c6:  movl   $0x0,-0x10(%ebp)
088a2299 +0x11cd:  jmp    088a2457 <+0x138b>
088a229e +0x11d2:  mov    -0x10(%ebp),%eax
088a22a1 +0x11d5:  mov    %eax,0x4(%esp)
088a22a5 +0x11d9:  lea    -0x340(%ebp),%eax
088a22ab +0x11df:  add    $0x10,%eax
088a22ae +0x11e2:  mov    %eax,(%esp)
088a22b1 +0x11e5:  call   088a3d98 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x8b6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x8b6
088a22b6 +0x11ea:  mov    (%eax),%eax
088a22b8 +0x11ec:  mov    %eax,-0x2b8(%ebp)
088a22be +0x11f2:  mov    -0x2b8(%ebp),%eax
088a22c4 +0x11f8:  mov    %eax,-0x2c4(%ebp)
088a22ca +0x11fe:  mov    -0x2b8(%ebp),%eax
088a22d0 +0x1204:  mov    %eax,0x4(%esp)
088a22d4 +0x1208:  mov    0x8(%ebp),%eax
088a22d7 +0x120b:  mov    %eax,(%esp)
088a22da +0x120e:  call   088a2b8e <_ZN12advancealtar25AdvanceAltarShopParameter11getdataTypeENS_9FieldType1TE>  ; advancealtar::AdvanceAltarShopParameter::getdataType(advancealtar::FieldType::T)
088a22df +0x1213:  mov    %eax,-0x18(%ebp)
088a22e2 +0x1216:  cmpl   $0x0,-0x18(%ebp)
088a22e6 +0x121a:  jne    088a236f <+0x12a3>
088a22ec +0x1220:  lea    -0x2e0(%ebp),%eax
088a22f2 +0x1226:  mov    %eax,(%esp)
088a22f5 +0x1229:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088a22fa +0x122e:  lea    -0x2e0(%ebp),%eax
088a2300 +0x1234:  mov    %eax,(%esp)
088a2303 +0x1237:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088a2308 +0x123c:  xor    $0x1,%eax
088a230b +0x123f:  test   %al,%al
088a230d +0x1241:  je     088a231a <+0x124e>
088a230f +0x1243:  movb   $0x0,-0x11(%ebp)
088a2313 +0x1247:  mov    $0x0,%ebx
088a2318 +0x124c:  jmp    088a2357 <+0x128b>
088a231a +0x124e:  lea    -0x2e0(%ebp),%eax
088a2320 +0x1254:  mov    %eax,0x4(%esp)
088a2324 +0x1258:  lea    -0x2c4(%ebp),%eax
088a232a +0x125e:  add    $0x8,%eax
088a232d +0x1261:  mov    %eax,(%esp)
088a2330 +0x1264:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
088a2335 +0x1269:  mov    $0x1,%ebx
088a233a +0x126e:  jmp    088a2357 <+0x128b>
088a233c +0x1270:  mov    %edx,%ebx
088a233e +0x1272:  mov    %eax,%esi
088a2340 +0x1274:  lea    -0x2e0(%ebp),%eax
088a2346 +0x127a:  mov    %eax,(%esp)
088a2349 +0x127d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a234e +0x1282:  mov    %esi,%eax
088a2350 +0x1284:  mov    %ebx,%edx
088a2352 +0x1286:  jmp    088a2585 <+0x14b9>
088a2357 +0x128b:  lea    -0x2e0(%ebp),%eax
088a235d +0x1291:  mov    %eax,(%esp)
088a2360 +0x1294:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a2365 +0x1299:  test   %ebx,%ebx
088a2367 +0x129b:  je     088a2476 <+0x13aa>
088a236d +0x12a1:  jmp    088a23a0 <+0x12d4>
088a236f +0x12a3:  lea    -0x231(%ebp),%eax
088a2375 +0x12a9:  mov    %eax,(%esp)
088a2378 +0x12ac:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088a237d +0x12b1:  mov    %eax,-0xc(%ebp)
088a2380 +0x12b4:  movzbl -0x231(%ebp),%eax
088a2387 +0x12bb:  xor    $0x1,%eax
088a238a +0x12be:  test   %al,%al
088a238c +0x12c0:  je     088a2397 <+0x12cb>
088a238e +0x12c2:  movb   $0x0,-0x11(%ebp)
088a2392 +0x12c6:  jmp    088a2476 <+0x13aa>
088a2397 +0x12cb:  mov    -0xc(%ebp),%eax
088a239a +0x12ce:  mov    %eax,-0x2c0(%ebp)
088a23a0 +0x12d4:  lea    -0x118(%ebp),%eax
088a23a6 +0x12da:  lea    -0x2c4(%ebp),%edx
088a23ac +0x12e0:  mov    %edx,0x8(%esp)
088a23b0 +0x12e4:  lea    -0x2b8(%ebp),%edx
088a23b6 +0x12ea:  mov    %edx,0x4(%esp)
088a23ba +0x12ee:  mov    %eax,(%esp)
088a23bd +0x12f1:  call   088a3daa <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x8c8>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x8c8
088a23c2 +0x12f6:  sub    $0x4,%esp
088a23c5 +0x12f9:  lea    -0x118(%ebp),%eax
088a23cb +0x12ff:  mov    %eax,0x4(%esp)
088a23cf +0x1303:  lea    -0x128(%ebp),%eax
088a23d5 +0x1309:  mov    %eax,(%esp)
088a23d8 +0x130c:  call   088a3e24 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x942>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x942
088a23dd +0x1311:  lea    -0x130(%ebp),%eax
088a23e3 +0x1317:  lea    -0x128(%ebp),%edx
088a23e9 +0x131d:  mov    %edx,0x8(%esp)
088a23ed +0x1321:  lea    -0x2dc(%ebp),%edx
088a23f3 +0x1327:  mov    %edx,0x4(%esp)
088a23f7 +0x132b:  mov    %eax,(%esp)
088a23fa +0x132e:  call   088a3e5e <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x97c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x97c
088a23ff +0x1333:  sub    $0x4,%esp
088a2402 +0x1336:  lea    -0x128(%ebp),%eax
088a2408 +0x133c:  mov    %eax,(%esp)
088a240b +0x133f:  call   088a3860 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x37e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x37e
088a2410 +0x1344:  jmp    088a2445 <+0x1379>
088a2412 +0x1346:  mov    %edx,%ebx
088a2414 +0x1348:  mov    %eax,%esi
088a2416 +0x134a:  lea    -0x128(%ebp),%eax
088a241c +0x1350:  mov    %eax,(%esp)
088a241f +0x1353:  call   088a3860 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x37e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x37e
088a2424 +0x1358:  mov    %esi,%eax
088a2426 +0x135a:  mov    %ebx,%edx
088a2428 +0x135c:  jmp    088a242a <+0x135e>
088a242a +0x135e:  mov    %edx,%ebx
088a242c +0x1360:  mov    %eax,%esi
088a242e +0x1362:  lea    -0x118(%ebp),%eax
088a2434 +0x1368:  mov    %eax,(%esp)
088a2437 +0x136b:  call   088a384a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x368>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x368
088a243c +0x1370:  mov    %esi,%eax
088a243e +0x1372:  mov    %ebx,%edx
088a2440 +0x1374:  jmp    088a2585 <+0x14b9>
088a2445 +0x1379:  lea    -0x118(%ebp),%eax
088a244b +0x137f:  mov    %eax,(%esp)
088a244e +0x1382:  call   088a384a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x368>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x368
088a2453 +0x1387:  addl   $0x1,-0x10(%ebp)
088a2457 +0x138b:  lea    -0x340(%ebp),%eax
088a245d +0x1391:  add    $0x10,%eax
088a2460 +0x1394:  mov    %eax,(%esp)
088a2463 +0x1397:  call   088a3d7c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x89a>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x89a
088a2468 +0x139c:  cmp    -0x10(%ebp),%eax
088a246b +0x139f:  setg   %al
088a246e +0x13a2:  test   %al,%al
088a2470 +0x13a4:  jne    088a229e <+0x11d2>
088a2476 +0x13aa:  cmpb   $0x0,-0x11(%ebp)
088a247a +0x13ae:  je     088a255e <+0x1492>
088a2480 +0x13b4:  movl   $0x0,-0x108(%ebp)
088a248a +0x13be:  lea    -0x108(%ebp),%eax
088a2490 +0x13c4:  mov    %eax,0x4(%esp)
088a2494 +0x13c8:  lea    -0x2dc(%ebp),%eax
088a249a +0x13ce:  mov    %eax,(%esp)
088a249d +0x13d1:  call   088a3e8a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x9a8>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x9a8
088a24a2 +0x13d6:  mov    0x4(%eax),%eax
088a24a5 +0x13d9:  mov    %eax,-0x2e4(%ebp)
088a24ab +0x13df:  lea    -0xe0(%ebp),%eax
088a24b1 +0x13e5:  lea    -0x2dc(%ebp),%edx
088a24b7 +0x13eb:  mov    %edx,0x8(%esp)
088a24bb +0x13ef:  lea    -0x2e4(%ebp),%edx
088a24c1 +0x13f5:  mov    %edx,0x4(%esp)
088a24c5 +0x13f9:  mov    %eax,(%esp)
088a24c8 +0x13fc:  call   088a3fd6 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xaf4>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xaf4
088a24cd +0x1401:  sub    $0x4,%esp
088a24d0 +0x1404:  lea    -0xe0(%ebp),%eax
088a24d6 +0x140a:  mov    %eax,0x4(%esp)
088a24da +0x140e:  lea    -0xfc(%ebp),%eax
088a24e0 +0x1414:  mov    %eax,(%esp)
088a24e3 +0x1417:  call   088a401a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xb38>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xb38
088a24e8 +0x141c:  lea    -0x104(%ebp),%eax
088a24ee +0x1422:  lea    -0xfc(%ebp),%edx
088a24f4 +0x1428:  mov    %edx,0x8(%esp)
088a24f8 +0x142c:  lea    -0x340(%ebp),%edx
088a24fe +0x1432:  add    $0x1c,%edx
088a2501 +0x1435:  mov    %edx,0x4(%esp)
088a2505 +0x1439:  mov    %eax,(%esp)
088a2508 +0x143c:  call   088a4054 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xb72>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xb72
088a250d +0x1441:  sub    $0x4,%esp
088a2510 +0x1444:  lea    -0xfc(%ebp),%eax
088a2516 +0x144a:  mov    %eax,(%esp)
088a2519 +0x144d:  call   088a388c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x3aa>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x3aa
088a251e +0x1452:  jmp    088a2550 <+0x1484>
088a2520 +0x1454:  mov    %edx,%ebx
088a2522 +0x1456:  mov    %eax,%esi
088a2524 +0x1458:  lea    -0xfc(%ebp),%eax
088a252a +0x145e:  mov    %eax,(%esp)
088a252d +0x1461:  call   088a388c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x3aa>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x3aa
088a2532 +0x1466:  mov    %esi,%eax
088a2534 +0x1468:  mov    %ebx,%edx
088a2536 +0x146a:  jmp    088a2538 <+0x146c>
088a2538 +0x146c:  mov    %edx,%ebx
088a253a +0x146e:  mov    %eax,%esi
088a253c +0x1470:  lea    -0xe0(%ebp),%eax
088a2542 +0x1476:  mov    %eax,(%esp)
088a2545 +0x1479:  call   088a3876 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x394>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x394
088a254a +0x147e:  mov    %esi,%eax
088a254c +0x1480:  mov    %ebx,%edx
088a254e +0x1482:  jmp    088a2585 <+0x14b9>
088a2550 +0x1484:  lea    -0xe0(%ebp),%eax
088a2556 +0x148a:  mov    %eax,(%esp)
088a2559 +0x148d:  call   088a3876 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x394>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x394
088a255e +0x1492:  cmpb   $0x0,-0x11(%ebp)
088a2562 +0x1496:  jne    088a2284 <+0x11b8>
088a2568 +0x149c:  lea    -0x340(%ebp),%eax
088a256e +0x14a2:  mov    %eax,0x4(%esp)
088a2572 +0x14a6:  lea    -0x30c(%ebp),%eax
088a2578 +0x14ac:  add    $0x1c,%eax
088a257b +0x14af:  mov    %eax,(%esp)
088a257e +0x14b2:  call   088a4080 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xb9e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xb9e
088a2583 +0x14b7:  jmp    088a259d <+0x14d1>
088a2585 +0x14b9:  mov    %edx,%ebx
088a2587 +0x14bb:  mov    %eax,%esi
088a2589 +0x14bd:  lea    -0x2dc(%ebp),%eax
088a258f +0x14c3:  mov    %eax,(%esp)
088a2592 +0x14c6:  call   088a3836 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x354>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x354
088a2597 +0x14cb:  mov    %esi,%eax
088a2599 +0x14cd:  mov    %ebx,%edx
088a259b +0x14cf:  jmp    088a25ad <+0x14e1>
088a259d +0x14d1:  lea    -0x2dc(%ebp),%eax
088a25a3 +0x14d7:  mov    %eax,(%esp)
088a25a6 +0x14da:  call   088a3836 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x354>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x354
088a25ab +0x14df:  jmp    088a25c5 <+0x14f9>
088a25ad +0x14e1:  mov    %edx,%ebx
088a25af +0x14e3:  mov    %eax,%esi
088a25b1 +0x14e5:  lea    -0x2c4(%ebp),%eax
088a25b7 +0x14eb:  mov    %eax,(%esp)
088a25ba +0x14ee:  call   088a3820 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x33e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x33e
088a25bf +0x14f3:  mov    %esi,%eax
088a25c1 +0x14f5:  mov    %ebx,%edx
088a25c3 +0x14f7:  jmp    088a2603 <+0x1537>
088a25c5 +0x14f9:  lea    -0x2c4(%ebp),%eax
088a25cb +0x14ff:  mov    %eax,(%esp)
088a25ce +0x1502:  call   088a3820 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x33e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x33e
088a25d3 +0x1507:  jmp    088a20a0 <+0xfd4>
088a25d8 +0x150c:  movl   $"[/id]",0x4(%esp)
088a25e0 +0x1514:  lea    -0x230(%ebp),%eax
088a25e6 +0x151a:  mov    %eax,(%esp)
088a25e9 +0x151d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a25ee +0x1522:  test   %al,%al
088a25f0 +0x1524:  je     088a209f <+0xfd3>
088a25f6 +0x152a:  jmp    088a25fc <+0x1530>
088a25f8 +0x152c:  nop
088a25f9 +0x152d:  jmp    088a25fc <+0x1530>
088a25fb +0x152f:  nop
088a25fc +0x1530:  mov    $0x1,%ebx
088a2601 +0x1535:  jmp    088a261e <+0x1552>
088a2603 +0x1537:  mov    %edx,%ebx
088a2605 +0x1539:  mov    %eax,%esi
088a2607 +0x153b:  lea    -0x340(%ebp),%eax
088a260d +0x1541:  mov    %eax,(%esp)
088a2610 +0x1544:  call   088a3630 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x14e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x14e
088a2615 +0x1549:  mov    %esi,%eax
088a2617 +0x154b:  mov    %ebx,%edx
088a2619 +0x154d:  jmp    088a2731 <+0x1665>
088a261e +0x1552:  lea    -0x340(%ebp),%eax
088a2624 +0x1558:  mov    %eax,(%esp)
088a2627 +0x155b:  call   088a3630 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x14e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x14e
088a262c +0x1560:  test   %ebx,%ebx
088a262e +0x1562:  je     088a12a7 <+0x1db>
088a2634 +0x1568:  jmp    088a2019 <+0xf4d>
088a2639 +0x156d:  movl   $"[/tower]",0x4(%esp)
088a2641 +0x1575:  lea    -0x230(%ebp),%eax
088a2647 +0x157b:  mov    %eax,(%esp)
088a264a +0x157e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a264f +0x1583:  test   %al,%al
088a2651 +0x1585:  je     088a2018 <+0xf4c>
088a2657 +0x158b:  jmp    088a12ab <+0x1df>
088a265c +0x1590:  movl   $"[/ridable id]",0x4(%esp)
088a2664 +0x1598:  lea    -0x230(%ebp),%eax
088a266a +0x159e:  mov    %eax,(%esp)
088a266d +0x15a1:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088a2672 +0x15a6:  test   %al,%al
088a2674 +0x15a8:  je     088a12aa <+0x1de>
088a267a +0x15ae:  jmp    088a267d <+0x15b1>
088a267c +0x15b0:  nop
088a267d +0x15b1:  lea    -0x90(%ebp),%eax
088a2683 +0x15b7:  lea    -0x30c(%ebp),%edx
088a2689 +0x15bd:  mov    %edx,0x8(%esp)
088a268d +0x15c1:  lea    -0x30c(%ebp),%edx
088a2693 +0x15c7:  mov    %edx,0x4(%esp)
088a2697 +0x15cb:  mov    %eax,(%esp)
088a269a +0x15ce:  call   088a40f3 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xc11>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xc11
088a269f +0x15d3:  sub    $0x4,%esp
088a26a2 +0x15d6:  lea    -0x90(%ebp),%eax
088a26a8 +0x15dc:  mov    %eax,0x4(%esp)
088a26ac +0x15e0:  lea    -0xbc(%ebp),%eax
088a26b2 +0x15e6:  mov    %eax,(%esp)
088a26b5 +0x15e9:  call   088a41d2 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xcf0>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xcf0
088a26ba +0x15ee:  mov    0x8(%ebp),%edx
088a26bd +0x15f1:  lea    -0xc4(%ebp),%eax
088a26c3 +0x15f7:  lea    -0xbc(%ebp),%ecx
088a26c9 +0x15fd:  mov    %ecx,0x8(%esp)
088a26cd +0x1601:  mov    %edx,0x4(%esp)
088a26d1 +0x1605:  mov    %eax,(%esp)
088a26d4 +0x1608:  call   088a420c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xd2a>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xd2a
088a26d9 +0x160d:  sub    $0x4,%esp
088a26dc +0x1610:  lea    -0xbc(%ebp),%eax
088a26e2 +0x1616:  mov    %eax,(%esp)
088a26e5 +0x1619:  call   088a38b8 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x3d6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x3d6
088a26ea +0x161e:  jmp    088a271c <+0x1650>
088a26ec +0x1620:  mov    %edx,%ebx
088a26ee +0x1622:  mov    %eax,%esi
088a26f0 +0x1624:  lea    -0xbc(%ebp),%eax
088a26f6 +0x162a:  mov    %eax,(%esp)
088a26f9 +0x162d:  call   088a38b8 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x3d6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x3d6
088a26fe +0x1632:  mov    %esi,%eax
088a2700 +0x1634:  mov    %ebx,%edx
088a2702 +0x1636:  jmp    088a2704 <+0x1638>
088a2704 +0x1638:  mov    %edx,%ebx
088a2706 +0x163a:  mov    %eax,%esi
088a2708 +0x163c:  lea    -0x90(%ebp),%eax
088a270e +0x1642:  mov    %eax,(%esp)
088a2711 +0x1645:  call   088a38a2 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x3c0>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x3c0
088a2716 +0x164a:  mov    %esi,%eax
088a2718 +0x164c:  mov    %ebx,%edx
088a271a +0x164e:  jmp    088a2731 <+0x1665>
088a271c +0x1650:  lea    -0x90(%ebp),%eax
088a2722 +0x1656:  mov    %eax,(%esp)
088a2725 +0x1659:  call   088a38a2 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x3c0>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x3c0
088a272a +0x165e:  mov    $0x1,%ebx
088a272f +0x1663:  jmp    088a2749 <+0x167d>
088a2731 +0x1665:  mov    %edx,%ebx
088a2733 +0x1667:  mov    %eax,%esi
088a2735 +0x1669:  lea    -0x30c(%ebp),%eax
088a273b +0x166f:  mov    %eax,(%esp)
088a273e +0x1672:  call   088a37ac <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x2ca>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x2ca
088a2743 +0x1677:  mov    %esi,%eax
088a2745 +0x1679:  mov    %ebx,%edx
088a2747 +0x167b:  jmp    088a2769 <+0x169d>
088a2749 +0x167d:  lea    -0x30c(%ebp),%eax
088a274f +0x1683:  mov    %eax,(%esp)
088a2752 +0x1686:  call   088a37ac <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x2ca>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x2ca
088a2757 +0x168b:  test   %ebx,%ebx
088a2759 +0x168d:  jne    088a111a <+0x4e>
088a275f +0x1693:  jmp    088a2762 <+0x1696>
088a2761 +0x1695:  nop
088a2762 +0x1696:  mov    $0x0,%ebx
088a2767 +0x169b:  jmp    088a2787 <+0x16bb>
088a2769 +0x169d:  mov    %edx,%ebx
088a276b +0x169f:  mov    %eax,%esi
088a276d +0x16a1:  lea    -0x230(%ebp),%eax
088a2773 +0x16a7:  mov    %eax,(%esp)
088a2776 +0x16aa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a277b +0x16af:  mov    %esi,%eax
088a277d +0x16b1:  mov    %ebx,%edx
088a277f +0x16b3:  mov    %eax,(%esp)
088a2782 +0x16b6:  call   08ae3750 <_Unwind_Resume>
088a2787 +0x16bb:  lea    -0x230(%ebp),%eax
088a278d +0x16c1:  mov    %eax,(%esp)
088a2790 +0x16c4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088a2795 +0x16c9:  mov    %ebx,%eax
088a2797 +0x16cb:  lea    -0x8(%ebp),%esp
088a279a +0x16ce:  add    $0x0,%esp
088a279d +0x16d1:  pop    %ebx
088a279e +0x16d2:  pop    %esi
088a279f +0x16d3:  pop    %ebp
088a27a0 +0x16d4:  ret
088a27a1 +0x16d5:  nop
```

## 反编译 C

```c
// advancealtar::AdvanceAltarShopParameter::importAdvanceAltarShopParameter @ 0x88a10cc

/* advancealtar::AdvanceAltarShopParameter::importAdvanceAltarShopParameter(char const*) */

undefined4 __thiscall
advancealtar::AdvanceAltarShopParameter::importAdvanceAltarShopParameter
          (AdvanceAltarShopParameter *this,char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_344;
  undefined4 local_340;
  undefined1 local_33c;
  string asStack_338 [4];
  vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>> avStack_334 [36];
  undefined4 local_310;
  vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> avStack_30c [12]
  ;
  vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> avStack_300 [12]
  ;
  vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> avStack_2f4 [12]
  ;
  undefined4 local_2e8;
  string local_2e4 [4];
  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
  local_2e0 [24];
  undefined4 local_2c8;
  undefined4 local_2c4;
  string asStack_2c0 [4];
  undefined4 local_2bc;
  string local_2b8 [4];
  int local_2b4;
  undefined4 local_2b0;
  string local_2ac [4];
  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
  local_2a8 [24];
  undefined4 local_290;
  undefined4 local_28c;
  string asStack_288 [4];
  undefined4 local_284;
  string local_280 [4];
  int local_27c;
  undefined4 local_278;
  string local_274 [4];
  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
  local_270 [24];
  undefined4 local_258;
  undefined4 local_254;
  string asStack_250 [4];
  undefined4 local_24c;
  string local_248 [4];
  int local_244;
  undefined4 local_240;
  undefined4 local_23c;
  bool local_235;
  string local_234;
  pair local_230 [8];
  pair<int_const,advancealtar::_StarRestFeeByGold> local_228 [8];
  int local_220 [2];
  string local_218 [4];
  pair local_214 [8];
  pair<advancealtar::FieldType::T_const,advancealtar::FieldData> local_20c [16];
  pair<advancealtar::FieldType::T,advancealtar::FieldData> local_1fc [16];
  undefined4 local_1ec;
  pair local_1e8 [8];
  pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
  local_1e0 [28];
  pair<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
  local_1c4 [28];
  string local_1a8 [4];
  pair local_1a4 [8];
  pair<advancealtar::FieldType::T_const,advancealtar::FieldData> local_19c [16];
  pair<advancealtar::FieldType::T,advancealtar::FieldData> local_18c [16];
  undefined4 local_17c;
  pair local_178 [8];
  pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
  local_170 [28];
  pair<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
  local_154 [28];
  string local_138 [4];
  pair local_134 [8];
  pair<advancealtar::FieldType::T_const,advancealtar::FieldData> local_12c [16];
  pair<advancealtar::FieldType::T,advancealtar::FieldData> local_11c [16];
  undefined4 local_10c;
  pair local_108 [8];
  pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
  local_100 [28];
  pair<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
  local_e4 [28];
  pair local_c8 [8];
  pair<int_const,advancealtar::BuyShopData> local_c0 [44];
  pair<int,advancealtar::BuyShopData> local_94 [44];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  char local_4d;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined1 local_35;
  int local_34;
  char local_2d;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  char local_15;
  uint local_14;
  undefined4 local_10;
  
  std::string::string((string *)&local_234);
  local_68 = 0;
  local_235 = false;
                    /* try { // try from 088a1101 to 088a1250 has its CatchHandler @ 088a2769 */
  cVar3 = loadRDARScriptFile("",param_1);
  if (cVar3 == '\x01') {
    do {
      do {
        while( true ) {
          cVar3 = ScanType((string *)&local_234,true);
          if (cVar3 != '\x01') goto LAB_088a2787;
          bVar4 = std::operator==(&local_234,"[star reset fee gold]");
          if (!bVar4) break;
          while( true ) {
            _StarRestFeeByGold::_StarRestFeeByGold((_StarRestFeeByGold *)&local_23c);
            local_240 = ScanInt(&local_235);
            if ((local_235 != true) || (local_64 = ScanInt(&local_235), local_235 != true)) break;
            local_23c = local_64;
            std::make_pair<int&,advancealtar::_StarRestFeeByGold&>
                      (local_220,(_StarRestFeeByGold *)&local_240);
            std::pair<int_const,advancealtar::_StarRestFeeByGold>::
            pair<int,advancealtar::_StarRestFeeByGold>(local_228,(pair *)local_220);
            std::
            map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
            ::insert(local_230);
          }
        }
        bVar4 = std::operator==(&local_234,"[ridable id]");
      } while (!bVar4);
      BuyShopData::BuyShopData((BuyShopData *)&local_310);
                    /* try { // try from 088a125a to 088a1338 has its CatchHandler @ 088a2731 */
      local_60 = ScanInt(&local_235);
      if (local_235 == true) {
        cVar3 = isValidRidableId(local_60);
        if (cVar3 == '\x01') {
          local_310 = local_60;
LAB_088a12ab:
          cVar3 = ScanType((string *)&local_234,true);
          if (cVar3 != '\x01') goto LAB_088a267d;
          bVar4 = std::operator==(&local_234,"[unit]");
          if (bVar4) {
            do {
              while( true ) {
                cVar3 = ScanType((string *)&local_234,true);
                if (cVar3 != '\x01') goto LAB_088a12ab;
                bVar4 = std::operator==(&local_234,"[id]");
                if (!bVar4) break;
                BuyUpgradeData::BuyUpgradeData((BuyUpgradeData *)&local_344);
                    /* try { // try from 088a1342 to 088a1440 has its CatchHandler @ 088a18de */
                local_5c = ScanInt(&local_235);
                uVar1 = local_5c;
                if (local_235 == true) {
LAB_088a1371:
                  do {
                    while( true ) {
                      local_344 = uVar1;
                      cVar3 = ScanType((string *)&local_234,true);
                      uVar2 = local_340;
                      if (cVar3 != '\x01') goto LAB_088a18d7;
                      bVar4 = std::operator==(&local_234,"[unlock stage index]");
                      if (!bVar4) break;
                      local_58 = ScanInt(&local_235);
                      uVar1 = local_58;
                      uVar2 = local_340;
                      cVar3 = local_235;
joined_r0x088a140a:
                      local_340 = uVar1;
                      uVar1 = local_344;
                      if (cVar3 != '\x01') goto LAB_088a18d7;
                    }
                    bVar4 = std::operator==(&local_234,"[name]");
                    if (bVar4) {
                      cVar3 = ScanStr(asStack_338);
                      uVar1 = local_340;
                      uVar2 = local_340;
                      goto joined_r0x088a140a;
                    }
                    bVar4 = std::operator==(&local_234,"[field name]");
                    if (bVar4) {
                      std::string::string(local_248);
                    /* try { // try from 088a144d to 088a1474 has its CatchHandler @ 088a14f7 */
                      while (cVar3 = ScanStr(local_248), cVar3 == '\x01') {
                        std::string::string(local_218,local_248);
                    /* try { // try from 088a1485 to 088a1489 has its CatchHandler @ 088a14a0 */
                        local_244 = getFieldType(this,local_218);
                    /* try { // try from 088a1499 to 088a149d has its CatchHandler @ 088a14f7 */
                        std::string::~string(local_218);
                        if (local_244 != -1) {
                    /* try { // try from 088a14d9 to 088a14dd has its CatchHandler @ 088a14f7 */
                          std::
                          vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                          ::push_back(avStack_334,(T *)&local_244);
                        }
                      }
                    /* try { // try from 088a14ed to 088a14f1 has its CatchHandler @ 088a18de */
                      std::string::~string(local_248);
                      uVar1 = local_344;
                      goto LAB_088a1371;
                    }
                    /* try { // try from 088a1523 to 088a153d has its CatchHandler @ 088a18de */
                    bVar4 = std::operator==(&local_234,"[list]");
                    if (bVar4) {
                      FieldData::FieldData((FieldData *)&local_258);
                    /* try { // try from 088a1547 to 088a154b has its CatchHandler @ 088a1888 */
                      std::
                      map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                      ::map(local_270);
                      local_4d = '\x01';
                      while (local_4d != '\0') {
                    /* try { // try from 088a155e to 088a15ca has its CatchHandler @ 088a1860 */
                        std::
                        map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                        ::clear(local_270);
                        local_4c = 0;
                        while (iVar6 = std::
                                       vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                                       ::size(avStack_334), (int)local_4c < iVar6) {
                          puVar5 = (undefined4 *)
                                   std::
                                   vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                                   ::operator[](avStack_334,local_4c);
                          local_258 = *puVar5;
                          local_24c = local_258;
                          local_54 = getdataType(this,local_258);
                          if (local_54 == 0) {
                            std::string::string(local_274);
                    /* try { // try from 088a15d4 to 088a1605 has its CatchHandler @ 088a160d */
                            cVar3 = ScanStr(local_274);
                            if (cVar3 == '\x01') {
                              std::string::operator=(asStack_250,local_274);
                            }
                            else {
                              local_4d = '\0';
                            }
                    /* try { // try from 088a1631 to 088a169c has its CatchHandler @ 088a1860 */
                            std::string::~string(local_274);
                            uVar1 = local_254;
                            if (cVar3 != '\x01') break;
                          }
                          else {
                            local_48 = ScanInt(&local_235);
                            uVar1 = local_48;
                            if (local_235 != true) {
                              local_4d = '\0';
                              break;
                            }
                          }
                          local_254 = uVar1;
                          if (local_4d != '\0') {
                            std::make_pair<advancealtar::FieldType::T&,advancealtar::FieldData&>
                                      (local_1fc,(FieldData *)&local_24c);
                    /* try { // try from 088a16b3 to 088a16b7 has its CatchHandler @ 088a1705 */
                            std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>::
                            pair<advancealtar::FieldType::T,advancealtar::FieldData>
                                      (local_20c,local_1fc);
                    /* try { // try from 088a16d5 to 088a16d9 has its CatchHandler @ 088a16ed */
                            std::
                            map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                            ::insert(local_214);
                    /* try { // try from 088a16e6 to 088a16ea has its CatchHandler @ 088a1705 */
                            std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>::
                            ~pair(local_20c);
                    /* try { // try from 088a1729 to 088a17a7 has its CatchHandler @ 088a1860 */
                            std::pair<advancealtar::FieldType::T,advancealtar::FieldData>::~pair
                                      (local_1fc);
                          }
                          local_4c = local_4c + 1;
                        }
                        if (local_4d != '\0') {
                          local_1ec = 0;
                          iVar6 = std::
                                  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                                  ::operator[](local_270,(T *)&local_1ec);
                          local_278 = *(undefined4 *)(iVar6 + 4);
                          std::
                          make_pair<int&,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>&>
                                    ((int *)local_1c4,(map *)&local_278);
                    /* try { // try from 088a17be to 088a17c2 has its CatchHandler @ 088a1813 */
                          std::
                          pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                          ::
                          pair<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                                    (local_1e0,local_1c4);
                    /* try { // try from 088a17e3 to 088a17e7 has its CatchHandler @ 088a17fb */
                          std::
                          map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
                          ::insert(local_1e8);
                    /* try { // try from 088a17f4 to 088a17f8 has its CatchHandler @ 088a1813 */
                          std::
                          pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                          ::~pair(local_1e0);
                    /* try { // try from 088a1834 to 088a185d has its CatchHandler @ 088a1860 */
                          std::
                          pair<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                          ::~pair(local_1c4);
                        }
                      }
                      std::
                      vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>
                      ::push_back(avStack_30c,(BuyUpgradeData *)&local_344);
                    /* try { // try from 088a1881 to 088a1885 has its CatchHandler @ 088a1888 */
                      std::
                      map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                      ::~map(local_270);
                    /* try { // try from 088a18a9 to 088a18c8 has its CatchHandler @ 088a18de */
                      FieldData::~FieldData((FieldData *)&local_258);
                      uVar1 = local_344;
                      goto LAB_088a1371;
                    }
                    bVar4 = std::operator==(&local_234,"[/id]");
                    uVar1 = local_344;
                    uVar2 = local_340;
                  } while (!bVar4);
LAB_088a18d7:
                  local_340 = uVar2;
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                    /* try { // try from 088a1902 to 088a19a6 has its CatchHandler @ 088a2731 */
                BuyUpgradeData::~BuyUpgradeData((BuyUpgradeData *)&local_344);
                if (!bVar4) goto LAB_088a12ab;
              }
              bVar4 = std::operator==(&local_234,"[/unit]");
            } while (!bVar4);
            goto LAB_088a12ab;
          }
          bVar4 = std::operator==(&local_234,"[skill]");
          if (bVar4) {
            do {
              while( true ) {
                cVar3 = ScanType((string *)&local_234,true);
                if (cVar3 != '\x01') goto LAB_088a12ab;
                bVar4 = std::operator==(&local_234,"[id]");
                if (!bVar4) break;
                BuyUpgradeData::BuyUpgradeData((BuyUpgradeData *)&local_344);
                    /* try { // try from 088a19b0 to 088a1b08 has its CatchHandler @ 088a1f9f */
                local_44 = ScanInt(&local_235);
                uVar1 = local_44;
                if (local_235 == true) {
LAB_088a19df:
                  do {
                    while( true ) {
                      local_344 = uVar1;
                      cVar3 = ScanType((string *)&local_234,true);
                      uVar2 = local_340;
                      if (cVar3 != '\x01') goto LAB_088a1f98;
                      bVar4 = std::operator==(&local_234,"[unlock stage index]");
                      if (!bVar4) break;
                      local_40 = ScanInt(&local_235);
                      uVar1 = local_40;
                      uVar2 = local_340;
                      cVar3 = local_235;
joined_r0x088a1ad2:
                      local_340 = uVar1;
                      uVar1 = local_344;
                      if (cVar3 != '\x01') goto LAB_088a1f98;
                    }
                    bVar4 = std::operator==(&local_234,"[is settable slot]");
                    if (bVar4) {
                      local_3c = ScanInt(&local_235);
                      uVar2 = local_340;
                      if (local_235 != true) break;
                      local_33c = local_3c != 0;
                      uVar1 = local_344;
                      local_35 = local_33c;
                      goto LAB_088a19df;
                    }
                    bVar4 = std::operator==(&local_234,"[name]");
                    if (bVar4) {
                      cVar3 = ScanStr(asStack_338);
                      uVar1 = local_340;
                      uVar2 = local_340;
                      goto joined_r0x088a1ad2;
                    }
                    bVar4 = std::operator==(&local_234,"[field name]");
                    if (bVar4) {
                      std::string::string(local_280);
                    /* try { // try from 088a1b15 to 088a1b3c has its CatchHandler @ 088a1bbf */
                      while (cVar3 = ScanStr(local_280), cVar3 == '\x01') {
                        std::string::string(local_1a8,local_280);
                    /* try { // try from 088a1b4d to 088a1b51 has its CatchHandler @ 088a1b68 */
                        local_27c = getFieldType(this,local_1a8);
                    /* try { // try from 088a1b61 to 088a1b65 has its CatchHandler @ 088a1bbf */
                        std::string::~string(local_1a8);
                        if (local_27c != -1) {
                    /* try { // try from 088a1ba1 to 088a1ba5 has its CatchHandler @ 088a1bbf */
                          std::
                          vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                          ::push_back(avStack_334,(T *)&local_27c);
                        }
                      }
                    /* try { // try from 088a1bb5 to 088a1bb9 has its CatchHandler @ 088a1f9f */
                      std::string::~string(local_280);
                      uVar1 = local_344;
                      goto LAB_088a19df;
                    }
                    /* try { // try from 088a1beb to 088a1c05 has its CatchHandler @ 088a1f9f */
                    bVar4 = std::operator==(&local_234,"[list]");
                    if (bVar4) {
                      FieldData::FieldData((FieldData *)&local_290);
                    /* try { // try from 088a1c0f to 088a1c13 has its CatchHandler @ 088a1f46 */
                      std::
                      map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                      ::map(local_2a8);
                      local_2d = '\x01';
                      while (local_2d != '\0') {
                    /* try { // try from 088a1c26 to 088a1c92 has its CatchHandler @ 088a1f1e */
                        std::
                        map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                        ::clear(local_2a8);
                        local_2c = 0;
                        while (iVar6 = std::
                                       vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                                       ::size(avStack_334), (int)local_2c < iVar6) {
                          puVar5 = (undefined4 *)
                                   std::
                                   vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                                   ::operator[](avStack_334,local_2c);
                          local_290 = *puVar5;
                          local_284 = local_290;
                          local_34 = getdataType(this,local_290);
                          if (local_34 == 0) {
                            std::string::string(local_2ac);
                    /* try { // try from 088a1c9c to 088a1ccd has its CatchHandler @ 088a1cd5 */
                            cVar3 = ScanStr(local_2ac);
                            if (cVar3 == '\x01') {
                              std::string::operator=(asStack_288,local_2ac);
                            }
                            else {
                              local_2d = '\0';
                            }
                    /* try { // try from 088a1cf9 to 088a1d5a has its CatchHandler @ 088a1f1e */
                            std::string::~string(local_2ac);
                            uVar1 = local_28c;
                            if (cVar3 != '\x01') break;
                          }
                          else {
                            local_28 = ScanInt(&local_235);
                            uVar1 = local_28;
                            if (local_235 != true) {
                              local_2d = '\0';
                              break;
                            }
                          }
                          local_28c = uVar1;
                          std::make_pair<advancealtar::FieldType::T&,advancealtar::FieldData&>
                                    (local_18c,(FieldData *)&local_284);
                    /* try { // try from 088a1d71 to 088a1d75 has its CatchHandler @ 088a1dc3 */
                          std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>::
                          pair<advancealtar::FieldType::T,advancealtar::FieldData>
                                    (local_19c,local_18c);
                    /* try { // try from 088a1d93 to 088a1d97 has its CatchHandler @ 088a1dab */
                          std::
                          map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                          ::insert(local_1a4);
                    /* try { // try from 088a1da4 to 088a1da8 has its CatchHandler @ 088a1dc3 */
                          std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>::~pair
                                    (local_19c);
                    /* try { // try from 088a1de7 to 088a1e65 has its CatchHandler @ 088a1f1e */
                          std::pair<advancealtar::FieldType::T,advancealtar::FieldData>::~pair
                                    (local_18c);
                          local_2c = local_2c + 1;
                        }
                        if (local_2d != '\0') {
                          local_17c = 0;
                          iVar6 = std::
                                  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                                  ::operator[](local_2a8,(T *)&local_17c);
                          local_2b0 = *(undefined4 *)(iVar6 + 4);
                          std::
                          make_pair<int&,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>&>
                                    ((int *)local_154,(map *)&local_2b0);
                    /* try { // try from 088a1e7c to 088a1e80 has its CatchHandler @ 088a1ed1 */
                          std::
                          pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                          ::
                          pair<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                                    (local_170,local_154);
                    /* try { // try from 088a1ea1 to 088a1ea5 has its CatchHandler @ 088a1eb9 */
                          std::
                          map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
                          ::insert(local_178);
                    /* try { // try from 088a1eb2 to 088a1eb6 has its CatchHandler @ 088a1ed1 */
                          std::
                          pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                          ::~pair(local_170);
                    /* try { // try from 088a1ef2 to 088a1f1b has its CatchHandler @ 088a1f1e */
                          std::
                          pair<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                          ::~pair(local_154);
                        }
                      }
                      std::
                      vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>
                      ::push_back(avStack_300,(BuyUpgradeData *)&local_344);
                    /* try { // try from 088a1f3f to 088a1f43 has its CatchHandler @ 088a1f46 */
                      std::
                      map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                      ::~map(local_2a8);
                    /* try { // try from 088a1f67 to 088a1f86 has its CatchHandler @ 088a1f9f */
                      FieldData::~FieldData((FieldData *)&local_290);
                      uVar1 = local_344;
                      goto LAB_088a19df;
                    }
                    bVar4 = std::operator==(&local_234,"[/id]");
                    uVar1 = local_344;
                    uVar2 = local_340;
                  } while (!bVar4);
LAB_088a1f98:
                  local_340 = uVar2;
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                    /* try { // try from 088a1fc3 to 088a2067 has its CatchHandler @ 088a2731 */
                BuyUpgradeData::~BuyUpgradeData((BuyUpgradeData *)&local_344);
                if (!bVar4) goto LAB_088a12ab;
              }
              bVar4 = std::operator==(&local_234,"[/skill]");
            } while (!bVar4);
            goto LAB_088a12ab;
          }
          bVar4 = std::operator==(&local_234,"[tower]");
          if (bVar4) {
            do {
              while( true ) {
                cVar3 = ScanType((string *)&local_234,true);
                if (cVar3 != '\x01') goto LAB_088a12ab;
                bVar4 = std::operator==(&local_234,"[id]");
                if (!bVar4) break;
                BuyUpgradeData::BuyUpgradeData((BuyUpgradeData *)&local_344);
                    /* try { // try from 088a2071 to 088a216f has its CatchHandler @ 088a2603 */
                local_24 = ScanInt(&local_235);
                uVar1 = local_24;
                if (local_235 == true) {
LAB_088a20a0:
                  do {
                    while( true ) {
                      local_344 = uVar1;
                      cVar3 = ScanType((string *)&local_234,true);
                      uVar2 = local_340;
                      if (cVar3 != '\x01') goto LAB_088a25fc;
                      bVar4 = std::operator==(&local_234,"[unlock stage index]");
                      if (!bVar4) break;
                      local_20 = ScanInt(&local_235);
                      uVar1 = local_20;
                      uVar2 = local_340;
                      cVar3 = local_235;
joined_r0x088a2139:
                      local_340 = uVar1;
                      uVar1 = local_344;
                      if (cVar3 != '\x01') goto LAB_088a25fc;
                    }
                    bVar4 = std::operator==(&local_234,"[name]");
                    if (bVar4) {
                      cVar3 = ScanStr(asStack_338);
                      uVar1 = local_340;
                      uVar2 = local_340;
                      goto joined_r0x088a2139;
                    }
                    bVar4 = std::operator==(&local_234,"[field name]");
                    if (bVar4) {
                      std::string::string(local_2b8);
                    /* try { // try from 088a217c to 088a21a3 has its CatchHandler @ 088a2226 */
                      while (cVar3 = ScanStr(local_2b8), cVar3 == '\x01') {
                        std::string::string(local_138,local_2b8);
                    /* try { // try from 088a21b4 to 088a21b8 has its CatchHandler @ 088a21cf */
                        local_2b4 = getFieldType(this,local_138);
                    /* try { // try from 088a21c8 to 088a21cc has its CatchHandler @ 088a2226 */
                        std::string::~string(local_138);
                        if (local_2b4 != -1) {
                    /* try { // try from 088a2208 to 088a220c has its CatchHandler @ 088a2226 */
                          std::
                          vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                          ::push_back(avStack_334,(T *)&local_2b4);
                        }
                      }
                    /* try { // try from 088a221c to 088a2220 has its CatchHandler @ 088a2603 */
                      std::string::~string(local_2b8);
                      uVar1 = local_344;
                      goto LAB_088a20a0;
                    }
                    /* try { // try from 088a2252 to 088a226c has its CatchHandler @ 088a2603 */
                    bVar4 = std::operator==(&local_234,"[list]");
                    if (bVar4) {
                      FieldData::FieldData((FieldData *)&local_2c8);
                    /* try { // try from 088a2276 to 088a227a has its CatchHandler @ 088a25ad */
                      std::
                      map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                      ::map(local_2e0);
                      local_15 = '\x01';
                      while (local_15 != '\0') {
                    /* try { // try from 088a228d to 088a22f9 has its CatchHandler @ 088a2585 */
                        std::
                        map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                        ::clear(local_2e0);
                        local_14 = 0;
                        while (iVar6 = std::
                                       vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                                       ::size(avStack_334), (int)local_14 < iVar6) {
                          puVar5 = (undefined4 *)
                                   std::
                                   vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                                   ::operator[](avStack_334,local_14);
                          local_2c8 = *puVar5;
                          local_2bc = local_2c8;
                          local_1c = getdataType(this,local_2c8);
                          if (local_1c == 0) {
                            std::string::string(local_2e4);
                    /* try { // try from 088a2303 to 088a2334 has its CatchHandler @ 088a233c */
                            cVar3 = ScanStr(local_2e4);
                            if (cVar3 == '\x01') {
                              std::string::operator=(asStack_2c0,local_2e4);
                            }
                            else {
                              local_15 = '\0';
                            }
                    /* try { // try from 088a2360 to 088a23c1 has its CatchHandler @ 088a2585 */
                            std::string::~string(local_2e4);
                            uVar1 = local_2c4;
                            if (cVar3 != '\x01') break;
                          }
                          else {
                            local_10 = ScanInt(&local_235);
                            uVar1 = local_10;
                            if (local_235 != true) {
                              local_15 = '\0';
                              break;
                            }
                          }
                          local_2c4 = uVar1;
                          std::make_pair<advancealtar::FieldType::T&,advancealtar::FieldData&>
                                    (local_11c,(FieldData *)&local_2bc);
                    /* try { // try from 088a23d8 to 088a23dc has its CatchHandler @ 088a242a */
                          std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>::
                          pair<advancealtar::FieldType::T,advancealtar::FieldData>
                                    (local_12c,local_11c);
                    /* try { // try from 088a23fa to 088a23fe has its CatchHandler @ 088a2412 */
                          std::
                          map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                          ::insert(local_134);
                    /* try { // try from 088a240b to 088a240f has its CatchHandler @ 088a242a */
                          std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>::~pair
                                    (local_12c);
                    /* try { // try from 088a244e to 088a24cc has its CatchHandler @ 088a2585 */
                          std::pair<advancealtar::FieldType::T,advancealtar::FieldData>::~pair
                                    (local_11c);
                          local_14 = local_14 + 1;
                        }
                        if (local_15 != '\0') {
                          local_10c = 0;
                          iVar6 = std::
                                  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                                  ::operator[](local_2e0,(T *)&local_10c);
                          local_2e8 = *(undefined4 *)(iVar6 + 4);
                          std::
                          make_pair<int&,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>&>
                                    ((int *)local_e4,(map *)&local_2e8);
                    /* try { // try from 088a24e3 to 088a24e7 has its CatchHandler @ 088a2538 */
                          std::
                          pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                          ::
                          pair<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                                    (local_100,local_e4);
                    /* try { // try from 088a2508 to 088a250c has its CatchHandler @ 088a2520 */
                          std::
                          map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
                          ::insert(local_108);
                    /* try { // try from 088a2519 to 088a251d has its CatchHandler @ 088a2538 */
                          std::
                          pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                          ::~pair(local_100);
                    /* try { // try from 088a2559 to 088a2582 has its CatchHandler @ 088a2585 */
                          std::
                          pair<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>
                          ::~pair(local_e4);
                        }
                      }
                      std::
                      vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>
                      ::push_back(avStack_2f4,(BuyUpgradeData *)&local_344);
                    /* try { // try from 088a25a6 to 088a25aa has its CatchHandler @ 088a25ad */
                      std::
                      map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
                      ::~map(local_2e0);
                    /* try { // try from 088a25ce to 088a25ed has its CatchHandler @ 088a2603 */
                      FieldData::~FieldData((FieldData *)&local_2c8);
                      uVar1 = local_344;
                      goto LAB_088a20a0;
                    }
                    bVar4 = std::operator==(&local_234,"[/id]");
                    uVar1 = local_344;
                    uVar2 = local_340;
                  } while (!bVar4);
LAB_088a25fc:
                  local_340 = uVar2;
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                    /* try { // try from 088a2627 to 088a269e has its CatchHandler @ 088a2731 */
                BuyUpgradeData::~BuyUpgradeData((BuyUpgradeData *)&local_344);
                if (!bVar4) goto LAB_088a12ab;
              }
              bVar4 = std::operator==(&local_234,"[/tower]");
            } while (!bVar4);
            goto LAB_088a12ab;
          }
          bVar4 = std::operator==(&local_234,"[/ridable id]");
          if (!bVar4) goto LAB_088a12ab;
LAB_088a267d:
          std::make_pair<int&,advancealtar::BuyShopData&>((int *)local_94,(BuyShopData *)&local_310)
          ;
                    /* try { // try from 088a26b5 to 088a26b9 has its CatchHandler @ 088a2704 */
          std::pair<int_const,advancealtar::BuyShopData>::pair<int,advancealtar::BuyShopData>
                    (local_c0,local_94);
                    /* try { // try from 088a26d4 to 088a26d8 has its CatchHandler @ 088a26ec */
          std::
          map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
          ::insert(local_c8);
                    /* try { // try from 088a26e5 to 088a26e9 has its CatchHandler @ 088a2704 */
          std::pair<int_const,advancealtar::BuyShopData>::~pair(local_c0);
                    /* try { // try from 088a2725 to 088a2729 has its CatchHandler @ 088a2731 */
          std::pair<int,advancealtar::BuyShopData>::~pair(local_94);
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
      }
      else {
        bVar4 = false;
      }
                    /* try { // try from 088a2752 to 088a2756 has its CatchHandler @ 088a2769 */
      BuyShopData::~BuyShopData((BuyShopData *)&local_310);
    } while (bVar4);
  }
LAB_088a2787:
  std::string::~string((string *)&local_234);
  return 0;
}
```
