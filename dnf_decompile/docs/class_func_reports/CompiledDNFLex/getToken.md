# getToken

`_ZN14CompiledDNFLex8getTokenEv`

`CompiledDNFLex::getToken()`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0fa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0fa0  _ZN14CompiledDNFLex8getTokenEv
#           CompiledDNFLex::getToken()
# range [0x08ad0fa0, 0x08ad190f]
08ad0fa0 +0x000:  push   %ebp
08ad0fa1 +0x001:  mov    %esp,%ebp
08ad0fa3 +0x003:  sub    $0x58,%esp
08ad0fa6 +0x006:  mov    %ebx,-0xc(%ebp)
08ad0fa9 +0x009:  mov    0x8(%ebp),%ebx
08ad0fac +0x00c:  mov    %esi,-0x8(%ebp)
08ad0faf +0x00f:  mov    %edi,-0x4(%ebp)
08ad0fb2 +0x012:  mov    0x2030(%ebx),%eax
08ad0fb8 +0x018:  cmp    0x2020(%ebx),%eax
08ad0fbe +0x01e:  je     08ad1140 <+0x1a0>
08ad0fc4 +0x024:  cmp    0x2034(%ebx),%eax
08ad0fca +0x02a:  mov    0x203c(%ebx),%edx
08ad0fd0 +0x030:  je     08ad1148 <+0x1a8>
08ad0fd6 +0x036:  sub    $0x14,%eax
08ad0fd9 +0x039:  je     08ad1140 <+0x1a0>
08ad0fdf +0x03f:  mov    0x4(%ebx),%ecx
08ad0fe2 +0x042:  mov    0xc(%eax),%edx
08ad0fe5 +0x045:  add    0x8(%eax),%edx
08ad0fe8 +0x048:  cmp    %edx,%ecx
08ad0fea +0x04a:  jae    08ad1018 <+0x78>
08ad0fec +0x04c:  movsbl (%ecx),%eax
08ad0fef +0x04f:  add    $0x1,%ecx
08ad0ff2 +0x052:  mov    %al,&_ZZ18readCharFromBufferRPcE10charBuffer
08ad0ff7 +0x057:  cmpb   $0x0,0x2040(%ebx)
08ad0ffe +0x05e:  mov    %ecx,0x4(%ebx)
08ad1001 +0x061:  mov    %eax,0x8(%ebx)
08ad1004 +0x064:  je     08ad100b <+0x6b>
08ad1006 +0x066:  cmp    $0xb,%eax
08ad1009 +0x069:  je     08ad1048 <+0xa8>
08ad100b +0x06b:  mov    -0xc(%ebp),%ebx
08ad100e +0x06e:  mov    -0x8(%ebp),%esi
08ad1011 +0x071:  mov    -0x4(%ebp),%edi
08ad1014 +0x074:  mov    %ebp,%esp
08ad1016 +0x076:  pop    %ebp
08ad1017 +0x077:  ret
08ad1018 +0x078:  movl   $0x0,0x8(%ebx)
08ad101f +0x07f:  movl   $0x0,0x4(%esp)
08ad1027 +0x087:  mov    %ebx,(%esp)
08ad102a +0x08a:  call   08ad0c80 <_ZN14CompiledDNFLex14PopInputStreamEb>  ; CompiledDNFLex::PopInputStream(bool)
08ad102f +0x08f:  test   %al,%al
08ad1031 +0x091:  jne    08ad1130 <+0x190>
08ad1037 +0x097:  mov    0x8(%ebx),%eax
08ad103a +0x09a:  mov    -0xc(%ebp),%ebx
08ad103d +0x09d:  mov    -0x8(%ebp),%esi
08ad1040 +0x0a0:  mov    -0x4(%ebp),%edi
08ad1043 +0x0a3:  mov    %ebp,%esp
08ad1045 +0x0a5:  pop    %ebp
08ad1046 +0x0a6:  ret
08ad1047 +0x0a7:  nop
08ad1048 +0x0a8:  mov    0x2030(%ebx),%eax
08ad104e +0x0ae:  xor    %esi,%esi
08ad1050 +0x0b0:  cmp    0x2020(%ebx),%eax
08ad1056 +0x0b6:  je     08ad106d <+0xcd>
08ad1058 +0x0b8:  cmp    0x2034(%ebx),%eax
08ad105e +0x0be:  mov    0x203c(%ebx),%edx
08ad1064 +0x0c4:  je     08ad1208 <+0x268>
08ad106a +0x0ca:  lea    -0x14(%eax),%esi
08ad106d +0x0cd:  movsbl (%ecx),%eax
08ad1070 +0x0d0:  add    $0x1,%ecx
08ad1073 +0x0d3:  cmp    $0x7,%eax
08ad1076 +0x0d6:  mov    %al,&_ZZ18readCharFromBufferRPcE10charBuffer
08ad107b +0x0db:  mov    %ecx,0x4(%ebx)
08ad107e +0x0de:  mov    %eax,0x8(%ebx)
08ad1081 +0x0e1:  jne    08ad11b8 <+0x218>
08ad1087 +0x0e7:  lea    -0x1c(%ebp),%edi
08ad108a +0x0ea:  movl   $&_ZNSs4_Rep20_S_empty_rep_storageE+0xc,-0x1c(%ebp)
08ad1091 +0x0f1:  mov    %edi,0x4(%esp)
08ad1095 +0x0f5:  mov    %ebx,(%esp)
08ad1098 +0x0f8:  call   08ad00d0 <_ZN14CompiledDNFLex6getStrERSs>  ; CompiledDNFLex::getStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
08ad109d +0x0fd:  test   %al,%al
08ad109f +0x0ff:  je     08ad1158 <+0x1b8>
08ad10a5 +0x105:  mov    %edi,(%esp)
08ad10a8 +0x108:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08ad10ad +0x10d:  lea    -0x28(%ebp),%edx
08ad10b0 +0x110:  mov    %edx,0xc(%esp)
08ad10b4 +0x114:  mov    %eax,0x8(%esp)
08ad10b8 +0x118:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
08ad10c0 +0x120:  mov    %ebx,(%esp)
08ad10c3 +0x123:  call   08acfe40 <_ZN14CompiledDNFLex10LoadStreamEPKcS1_PN6DNFLex13stream_data_tE>  ; CompiledDNFLex::LoadStream(char const*, char const*, DNFLex::stream_data_t*)
08ad10c8 +0x128:  test   %al,%al
08ad10ca +0x12a:  je     08ad1215 <+0x275>
08ad10d0 +0x130:  mov    -0x20(%ebp),%eax
08ad10d3 +0x133:  test   %eax,%eax
08ad10d5 +0x135:  mov    %eax,-0x2c(%ebp)
08ad10d8 +0x138:  je     08ad1287 <+0x2e7>
08ad10de +0x13e:  mov    -0x24(%ebp),%eax
08ad10e1 +0x141:  mov    %edi,(%esp)
08ad10e4 +0x144:  mov    %eax,-0x30(%ebp)
08ad10e7 +0x147:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08ad10ec +0x14c:  mov    -0x30(%ebp),%edx
08ad10ef +0x14f:  mov    %eax,0x8(%esp)
08ad10f3 +0x153:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
08ad10fb +0x15b:  mov    %ebx,(%esp)
08ad10fe +0x15e:  mov    %edx,0x10(%esp)
08ad1102 +0x162:  mov    -0x2c(%ebp),%edx
08ad1105 +0x165:  mov    %edx,0xc(%esp)
08ad1109 +0x169:  call   08ad0a00 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj>  ; CompiledDNFLex::PushInputStream(char const*, char const*, char*, unsigned int)
08ad110e +0x16e:  test   %al,%al
08ad1110 +0x170:  je     08ad124e <+0x2ae>
08ad1116 +0x176:  mov    -0x28(%ebp),%eax
08ad1119 +0x179:  test   %eax,%eax
08ad111b +0x17b:  je     08ad1125 <+0x185>
08ad111d +0x17d:  mov    (%eax),%edx
08ad111f +0x17f:  mov    %eax,(%esp)
08ad1122 +0x182:  call   *0x4(%edx)
08ad1125 +0x185:  mov    %edi,(%esp)
08ad1128 +0x188:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ad112d +0x18d:  lea    0x0(%esi),%esi
08ad1130 +0x190:  mov    %ebx,(%esp)
08ad1133 +0x193:  call   08ad0fa0 <+0x0>
08ad1138 +0x198:  jmp    08ad1037 <+0x97>
08ad113d +0x19d:  lea    0x0(%esi),%esi
08ad1140 +0x1a0:  mov    0x4(%ebx),%ecx
08ad1143 +0x1a3:  jmp    08ad0fec <+0x4c>
08ad1148 +0x1a8:  mov    -0x4(%edx),%eax
08ad114b +0x1ab:  add    $0x1f4,%eax
08ad1150 +0x1b0:  jmp    08ad0fd6 <+0x36>
08ad1155 +0x1b5:  lea    0x0(%esi),%esi
08ad1158 +0x1b8:  lea    0x4(%esi),%eax
08ad115b +0x1bb:  mov    %eax,(%esp)
08ad115e +0x1be:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08ad1163 +0x1c3:  mov    %eax,-0x2c(%ebp)
08ad1166 +0x1c6:  mov    %esi,(%esp)
08ad1169 +0x1c9:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08ad116e +0x1ce:  mov    -0x2c(%ebp),%edx
08ad1171 +0x1d1:  lea    0x18(%ebx),%esi
08ad1174 +0x1d4:  mov    %eax,0xc(%esp)
08ad1178 +0x1d8:  movl   $&_ZZN14CompiledDNFLex8getTokenEvE12__FUNCTION__,0x8(%esp)
08ad1180 +0x1e0:  movl   $"%s - %s%s, invalid inclusion.",0x4(%esp)
08ad1188 +0x1e8:  mov    %edx,0x10(%esp)
08ad118c +0x1ec:  mov    %esi,(%esp)
08ad118f +0x1ef:  call   0807e440 <_init+0xd38>
08ad1194 +0x1f4:  mov    %esi,0x4(%esp)
08ad1198 +0x1f8:  mov    %ebx,(%esp)
08ad119b +0x1fb:  call   08acfe10 <_ZN14CompiledDNFLex10LexerErrorEPKc>  ; CompiledDNFLex::LexerError(char const*)
08ad11a0 +0x200:  mov    %edi,(%esp)
08ad11a3 +0x203:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ad11a8 +0x208:  mov    $0x1,%eax
08ad11ad +0x20d:  jmp    08ad100b <+0x6b>
08ad11b2 +0x212:  lea    0x0(%esi),%esi
08ad11b8 +0x218:  lea    0x4(%esi),%eax
08ad11bb +0x21b:  mov    %eax,(%esp)
08ad11be +0x21e:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08ad11c3 +0x223:  mov    %esi,(%esp)
08ad11c6 +0x226:  lea    0x18(%ebx),%esi
08ad11c9 +0x229:  mov    %eax,%edi
08ad11cb +0x22b:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08ad11d0 +0x230:  mov    %edi,0x10(%esp)
08ad11d4 +0x234:  movl   $&_ZZN14CompiledDNFLex8getTokenEvE12__FUNCTION__,0x8(%esp)
08ad11dc +0x23c:  movl   $"%s - %s/%s, invalid inclusion.",0x4(%esp)
08ad11e4 +0x244:  mov    %esi,(%esp)
08ad11e7 +0x247:  mov    %eax,0xc(%esp)
08ad11eb +0x24b:  call   0807e440 <_init+0xd38>
08ad11f0 +0x250:  mov    %esi,0x4(%esp)
08ad11f4 +0x254:  mov    %ebx,(%esp)
08ad11f7 +0x257:  call   08acfe10 <_ZN14CompiledDNFLex10LexerErrorEPKc>  ; CompiledDNFLex::LexerError(char const*)
08ad11fc +0x25c:  mov    $0x1,%eax
08ad1201 +0x261:  jmp    08ad100b <+0x6b>
08ad1206 +0x266:  xchg   %ax,%ax
08ad1208 +0x268:  mov    -0x4(%edx),%eax
08ad120b +0x26b:  add    $0x1f4,%eax
08ad1210 +0x270:  jmp    08ad106a <+0xca>
08ad1215 +0x275:  lea    0x4(%esi),%eax
08ad1218 +0x278:  mov    %eax,(%esp)
08ad121b +0x27b:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08ad1220 +0x280:  mov    %eax,-0x2c(%ebp)
08ad1223 +0x283:  mov    %esi,(%esp)
08ad1226 +0x286:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08ad122b +0x28b:  mov    -0x2c(%ebp),%edx
08ad122e +0x28e:  lea    0x18(%ebx),%esi
08ad1231 +0x291:  mov    %eax,0xc(%esp)
08ad1235 +0x295:  movl   $&_ZZN14CompiledDNFLex8getTokenEvE12__FUNCTION__,0x8(%esp)
08ad123d +0x29d:  movl   $"%s - %s%s, LoadStream failed.",0x4(%esp)
08ad1245 +0x2a5:  mov    %edx,0x10(%esp)
08ad1249 +0x2a9:  jmp    08ad118c <+0x1ec>
08ad124e +0x2ae:  lea    0x4(%esi),%eax
08ad1251 +0x2b1:  mov    %eax,(%esp)
08ad1254 +0x2b4:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08ad1259 +0x2b9:  mov    %eax,-0x2c(%ebp)
08ad125c +0x2bc:  mov    %esi,(%esp)
08ad125f +0x2bf:  call   08adedd3 <_Z6toMbcsRKSs>  ; toMbcs(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08ad1264 +0x2c4:  mov    -0x2c(%ebp),%edx
08ad1267 +0x2c7:  lea    0x18(%ebx),%esi
08ad126a +0x2ca:  mov    %eax,0xc(%esp)
08ad126e +0x2ce:  movl   $&_ZZN14CompiledDNFLex8getTokenEvE12__FUNCTION__,0x8(%esp)
08ad1276 +0x2d6:  movl   $"%s - %s%s, PushInputStream failed.",0x4(%esp)
08ad127e +0x2de:  mov    %edx,0x10(%esp)
08ad1282 +0x2e2:  jmp    08ad118c <+0x1ec>
08ad1287 +0x2e7:  mov    -0x24(%ebp),%eax
08ad128a +0x2ea:  mov    %eax,(%esp)
08ad128d +0x2ed:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ad1292 +0x2f2:  mov    %eax,-0x2c(%ebp)
08ad1295 +0x2f5:  mov    -0x24(%ebp),%eax
08ad1298 +0x2f8:  mov    -0x2c(%ebp),%edx
08ad129b +0x2fb:  mov    %eax,0x8(%esp)
08ad129f +0x2ff:  mov    -0x28(%ebp),%eax
08ad12a2 +0x302:  mov    %edx,0x4(%esp)
08ad12a6 +0x306:  mov    %eax,(%esp)
08ad12a9 +0x309:  call   086e5bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5b50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5b50
08ad12ae +0x30e:  jmp    08ad10de <+0x13e>
08ad12b3 +0x313:  mov    %eax,%ebx
08ad12b5 +0x315:  mov    %edi,(%esp)
08ad12b8 +0x318:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ad12bd +0x31d:  mov    %ebx,(%esp)
08ad12c0 +0x320:  call   08ae3750 <_Unwind_Resume>
08ad12c5 +0x325:  nop
08ad12c6 +0x326:  nop
08ad12c7 +0x327:  nop
08ad12c8 +0x328:  nop
08ad12c9 +0x329:  nop
08ad12ca +0x32a:  nop
08ad12cb +0x32b:  nop
08ad12cc +0x32c:  nop
08ad12cd +0x32d:  nop
08ad12ce +0x32e:  nop
08ad12cf +0x32f:  nop
08ad12d0 +0x330:  push   %ebp
08ad12d1 +0x331:  mov    %esp,%ebp
08ad12d3 +0x333:  push   %edi
08ad12d4 +0x334:  push   %esi
08ad12d5 +0x335:  push   %ebx
08ad12d6 +0x336:  sub    $0x1c,%esp
08ad12d9 +0x339:  mov    0x8(%ebp),%edi
08ad12dc +0x33c:  mov    (%edi),%eax
08ad12de +0x33e:  test   %eax,%eax
08ad12e0 +0x340:  je     08ad1318 <+0x378>
08ad12e2 +0x342:  mov    0x24(%edi),%esi
08ad12e5 +0x345:  mov    0x14(%edi),%ebx
08ad12e8 +0x348:  add    $0x4,%esi
08ad12eb +0x34b:  cmp    %ebx,%esi
08ad12ed +0x34d:  jbe    08ad1303 <+0x363>
08ad12ef +0x34f:  nop
08ad12f0 +0x350:  mov    (%ebx),%eax
08ad12f2 +0x352:  add    $0x4,%ebx
08ad12f5 +0x355:  mov    %eax,(%esp)
08ad12f8 +0x358:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad12fd +0x35d:  cmp    %ebx,%esi
08ad12ff +0x35f:  ja     08ad12f0 <+0x350>
08ad1301 +0x361:  mov    (%edi),%eax
08ad1303 +0x363:  mov    %eax,0x8(%ebp)
08ad1306 +0x366:  add    $0x1c,%esp
08ad1309 +0x369:  pop    %ebx
08ad130a +0x36a:  pop    %esi
08ad130b +0x36b:  pop    %edi
08ad130c +0x36c:  pop    %ebp
08ad130d +0x36d:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
08ad1312 +0x372:  lea    0x0(%esi),%esi
08ad1318 +0x378:  add    $0x1c,%esp
08ad131b +0x37b:  pop    %ebx
08ad131c +0x37c:  pop    %esi
08ad131d +0x37d:  pop    %edi
08ad131e +0x37e:  pop    %ebp
08ad131f +0x37f:  ret
08ad1320 +0x380:  push   %ebp
08ad1321 +0x381:  mov    %esp,%ebp
08ad1323 +0x383:  push   %ebx
08ad1324 +0x384:  sub    $0x24,%esp
08ad1327 +0x387:  mov    0x8(%ebp),%ebx
08ad132a +0x38a:  mov    0x4(%ebx),%eax
08ad132d +0x38d:  sub    $0xc,%eax
08ad1330 +0x390:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08ad1335 +0x395:  jne    08ad134b <+0x3ab>
08ad1337 +0x397:  mov    (%ebx),%eax
08ad1339 +0x399:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edx
08ad133e +0x39e:  sub    $0xc,%eax
08ad1341 +0x3a1:  cmp    %eax,%edx
08ad1343 +0x3a3:  jne    08ad1371 <+0x3d1>
08ad1345 +0x3a5:  add    $0x24,%esp
08ad1348 +0x3a8:  pop    %ebx
08ad1349 +0x3a9:  pop    %ebp
08ad134a +0x3aa:  ret
08ad134b +0x3ab:  mov    $&data#bb92cc41(.plt),%edx
08ad1350 +0x3b0:  test   %edx,%edx
08ad1352 +0x3b2:  je     08ad1397 <+0x3f7>
08ad1354 +0x3b4:  or     $0xffffffff,%edx
08ad1357 +0x3b7:  lock xadd %edx,0x8(%eax)
08ad135c +0x3bc:  test   %edx,%edx
08ad135e +0x3be:  jg     08ad1337 <+0x397>
08ad1360 +0x3c0:  lea    -0x9(%ebp),%edx
08ad1363 +0x3c3:  mov    %edx,0x4(%esp)
08ad1367 +0x3c7:  mov    %eax,(%esp)
08ad136a +0x3ca:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad136f +0x3cf:  jmp    08ad1337 <+0x397>
08ad1371 +0x3d1:  mov    $&data#bb92cc41(.plt),%edx
08ad1376 +0x3d6:  test   %edx,%edx
08ad1378 +0x3d8:  je     08ad13a2 <+0x402>
08ad137a +0x3da:  or     $0xffffffff,%edx
08ad137d +0x3dd:  lock xadd %edx,0x8(%eax)
08ad1382 +0x3e2:  test   %edx,%edx
08ad1384 +0x3e4:  jg     08ad1345 <+0x3a5>
08ad1386 +0x3e6:  lea    -0xa(%ebp),%edx
08ad1389 +0x3e9:  mov    %edx,0x4(%esp)
08ad138d +0x3ed:  mov    %eax,(%esp)
08ad1390 +0x3f0:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad1395 +0x3f5:  jmp    08ad1345 <+0x3a5>
08ad1397 +0x3f7:  mov    0x8(%eax),%edx
08ad139a +0x3fa:  lea    -0x1(%edx),%ecx
08ad139d +0x3fd:  mov    %ecx,0x8(%eax)
08ad13a0 +0x400:  jmp    08ad135c <+0x3bc>
08ad13a2 +0x402:  mov    0x8(%eax),%edx
08ad13a5 +0x405:  lea    -0x1(%edx),%ecx
08ad13a8 +0x408:  mov    %ecx,0x8(%eax)
08ad13ab +0x40b:  jmp    08ad1382 <+0x3e2>
08ad13ad +0x40d:  nop
08ad13ae +0x40e:  nop
08ad13af +0x40f:  nop
08ad13b0 +0x410:  push   %ebp
08ad13b1 +0x411:  mov    %esp,%ebp
08ad13b3 +0x413:  push   %edi
08ad13b4 +0x414:  push   %esi
08ad13b5 +0x415:  push   %ebx
08ad13b6 +0x416:  sub    $0x3c,%esp
08ad13b9 +0x419:  mov    0x8(%ebp),%ebx
08ad13bc +0x41c:  mov    0xc(%ebp),%esi
08ad13bf +0x41f:  mov    0x24(%ebx),%edi
08ad13c2 +0x422:  mov    (%ebx),%edx
08ad13c4 +0x424:  mov    0x4(%ebx),%eax
08ad13c7 +0x427:  mov    %edi,%ecx
08ad13c9 +0x429:  sub    %edx,%ecx
08ad13cb +0x42b:  sar    $0x2,%ecx
08ad13ce +0x42e:  mov    %ecx,-0x1c(%ebp)
08ad13d1 +0x431:  mov    %eax,%ecx
08ad13d3 +0x433:  sub    -0x1c(%ebp),%ecx
08ad13d6 +0x436:  cmp    $0x1,%ecx
08ad13d9 +0x439:  jbe    08ad1448 <+0x4a8>
08ad13db +0x43b:  movl   $0x1f4,(%esp)
08ad13e2 +0x442:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ad13e7 +0x447:  mov    %eax,0x4(%edi)
08ad13ea +0x44a:  mov    0x18(%ebx),%edi
08ad13ed +0x44d:  test   %edi,%edi
08ad13ef +0x44f:  je     08ad1421 <+0x481>
08ad13f1 +0x451:  mov    %esi,0x4(%esp)
08ad13f5 +0x455:  mov    %edi,(%esp)
08ad13f8 +0x458:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08ad13fd +0x45d:  lea    0x4(%esi),%eax
08ad1400 +0x460:  mov    %eax,0x4(%esp)
08ad1404 +0x464:  lea    0x4(%edi),%eax
08ad1407 +0x467:  mov    %eax,(%esp)
08ad140a +0x46a:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08ad140f +0x46f:  mov    0x8(%esi),%eax
08ad1412 +0x472:  mov    %eax,0x8(%edi)
08ad1415 +0x475:  mov    0xc(%esi),%eax
08ad1418 +0x478:  mov    %eax,0xc(%edi)
08ad141b +0x47b:  mov    0x10(%esi),%eax
08ad141e +0x47e:  mov    %eax,0x10(%edi)
08ad1421 +0x481:  mov    0x24(%ebx),%eax
08ad1424 +0x484:  lea    0x4(%eax),%edx
08ad1427 +0x487:  mov    0x4(%eax),%eax
08ad142a +0x48a:  mov    %edx,0x24(%ebx)
08ad142d +0x48d:  lea    0x1f4(%eax),%edx
08ad1433 +0x493:  mov    %eax,0x1c(%ebx)
08ad1436 +0x496:  mov    %edx,0x20(%ebx)
08ad1439 +0x499:  mov    %eax,0x18(%ebx)
08ad143c +0x49c:  add    $0x3c,%esp
08ad143f +0x49f:  pop    %ebx
08ad1440 +0x4a0:  pop    %esi
08ad1441 +0x4a1:  pop    %edi
08ad1442 +0x4a2:  pop    %ebp
08ad1443 +0x4a3:  ret
08ad1444 +0x4a4:  lea    0x0(%esi,%eiz,1),%esi
08ad1448 +0x4a8:  mov    0x14(%ebx),%ecx
08ad144b +0x4ab:  mov    %ecx,-0x1c(%ebp)
08ad144e +0x4ae:  mov    %edi,%ecx
08ad1450 +0x4b0:  sub    -0x1c(%ebp),%ecx
08ad1453 +0x4b3:  sar    $0x2,%ecx
08ad1456 +0x4b6:  mov    %ecx,-0x20(%ebp)
08ad1459 +0x4b9:  add    $0x1,%ecx
08ad145c +0x4bc:  mov    %ecx,-0x24(%ebp)
08ad145f +0x4bf:  mov    -0x20(%ebp),%ecx
08ad1462 +0x4c2:  add    $0x2,%ecx
08ad1465 +0x4c5:  mov    %ecx,-0x20(%ebp)
08ad1468 +0x4c8:  add    %ecx,%ecx
08ad146a +0x4ca:  cmp    %ecx,%eax
08ad146c +0x4cc:  jbe    08ad14a8 <+0x508>
08ad146e +0x4ce:  sub    -0x20(%ebp),%eax
08ad1471 +0x4d1:  shr    %eax
08ad1473 +0x4d3:  lea    (%edx,%eax,4),%edx
08ad1476 +0x4d6:  cmp    %edx,-0x1c(%ebp)
08ad1479 +0x4d9:  jbe    08ad1550 <+0x5b0>
08ad147f +0x4df:  mov    -0x1c(%ebp),%eax
08ad1482 +0x4e2:  add    $0x4,%edi
08ad1485 +0x4e5:  sub    -0x1c(%ebp),%edi
08ad1488 +0x4e8:  mov    %edx,(%esp)
08ad148b +0x4eb:  mov    %edx,-0x28(%ebp)
08ad148e +0x4ee:  and    $0xfffffffc,%edi
08ad1491 +0x4f1:  mov    %edi,0x8(%esp)
08ad1495 +0x4f5:  mov    %eax,0x4(%esp)
08ad1499 +0x4f9:  call   0807d880 <_init+0x178>
08ad149e +0x4fe:  mov    -0x28(%ebp),%edx
08ad14a1 +0x501:  jmp    08ad150a <+0x56a>
08ad14a3 +0x503:  nop
08ad14a4 +0x504:  lea    0x0(%esi,%eiz,1),%esi
08ad14a8 +0x508:  test   %eax,%eax
08ad14aa +0x50a:  mov    $0x3,%edi
08ad14af +0x50f:  jne    08ad1538 <+0x598>
08ad14b5 +0x515:  lea    0x0(,%edi,4),%eax
08ad14bc +0x51c:  mov    %eax,(%esp)
08ad14bf +0x51f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ad14c4 +0x524:  mov    %eax,%ecx
08ad14c6 +0x526:  mov    %edi,%eax
08ad14c8 +0x528:  sub    -0x20(%ebp),%eax
08ad14cb +0x52b:  mov    %ecx,-0x2c(%ebp)
08ad14ce +0x52e:  shr    %eax
08ad14d0 +0x530:  lea    (%ecx,%eax,4),%edx
08ad14d3 +0x533:  mov    0x24(%ebx),%eax
08ad14d6 +0x536:  mov    %edx,-0x28(%ebp)
08ad14d9 +0x539:  add    $0x4,%eax
08ad14dc +0x53c:  sub    0x14(%ebx),%eax
08ad14df +0x53f:  and    $0xfffffffc,%eax
08ad14e2 +0x542:  mov    %eax,0x8(%esp)
08ad14e6 +0x546:  mov    0x14(%ebx),%eax
08ad14e9 +0x549:  mov    %edx,(%esp)
08ad14ec +0x54c:  mov    %eax,0x4(%esp)
08ad14f0 +0x550:  call   0807d880 <_init+0x178>
08ad14f5 +0x555:  mov    (%ebx),%eax
08ad14f7 +0x557:  mov    %eax,(%esp)
08ad14fa +0x55a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad14ff +0x55f:  mov    -0x2c(%ebp),%ecx
08ad1502 +0x562:  mov    -0x28(%ebp),%edx
08ad1505 +0x565:  mov    %edi,0x4(%ebx)
08ad1508 +0x568:  mov    %ecx,(%ebx)
08ad150a +0x56a:  mov    (%edx),%eax
08ad150c +0x56c:  mov    -0x24(%ebp),%ecx
08ad150f +0x56f:  mov    %edx,0x14(%ebx)
08ad1512 +0x572:  mov    %eax,0xc(%ebx)
08ad1515 +0x575:  add    $0x1f4,%eax
08ad151a +0x57a:  lea    -0x4(%edx,%ecx,4),%edi
08ad151e +0x57e:  mov    %eax,0x10(%ebx)
08ad1521 +0x581:  mov    (%edi),%eax
08ad1523 +0x583:  mov    %edi,0x24(%ebx)
08ad1526 +0x586:  mov    %eax,0x1c(%ebx)
08ad1529 +0x589:  add    $0x1f4,%eax
08ad152e +0x58e:  mov    %eax,0x20(%ebx)
08ad1531 +0x591:  jmp    08ad13db <+0x43b>
08ad1536 +0x596:  xchg   %ax,%ax
08ad1538 +0x598:  lea    0x2(%eax,%eax,1),%edi
08ad153c +0x59c:  cmp    $0x3fffffff,%edi
08ad1542 +0x5a2:  jbe    08ad14b5 <+0x515>
08ad1548 +0x5a8:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
08ad154d +0x5ad:  lea    0x0(%esi),%esi
08ad1550 +0x5b0:  mov    -0x1c(%ebp),%ecx
08ad1553 +0x5b3:  add    $0x4,%edi
08ad1556 +0x5b6:  sub    -0x1c(%ebp),%edi
08ad1559 +0x5b9:  mov    %edx,-0x28(%ebp)
08ad155c +0x5bc:  mov    %ecx,0x4(%esp)
08ad1560 +0x5c0:  mov    -0x24(%ebp),%ecx
08ad1563 +0x5c3:  and    $0xfffffffc,%edi
08ad1566 +0x5c6:  mov    %edi,0x8(%esp)
08ad156a +0x5ca:  lea    (%edx,%ecx,4),%eax
08ad156d +0x5cd:  sub    %edi,%eax
08ad156f +0x5cf:  mov    %eax,(%esp)
08ad1572 +0x5d2:  call   0807d880 <_init+0x178>
08ad1577 +0x5d7:  mov    -0x28(%ebp),%edx
08ad157a +0x5da:  jmp    08ad150a <+0x56a>
08ad157c +0x5dc:  mov    %eax,%esi
08ad157e +0x5de:  mov    %edi,(%esp)
08ad1581 +0x5e1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08ad1586 +0x5e6:  mov    %esi,(%esp)
08ad1589 +0x5e9:  call   08725ce0 <__cxa_begin_catch>
08ad158e +0x5ee:  mov    0x24(%ebx),%eax
08ad1591 +0x5f1:  mov    0x4(%eax),%eax
08ad1594 +0x5f4:  mov    %eax,(%esp)
08ad1597 +0x5f7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad159c +0x5fc:  call   08724be0 <__cxa_rethrow>
08ad15a1 +0x601:  mov    %eax,%esi
08ad15a3 +0x603:  jmp    08ad1586 <+0x5e6>
08ad15a5 +0x605:  mov    %eax,(%esp)
08ad15a8 +0x608:  call   08ae3750 <_Unwind_Resume>
08ad15ad +0x60d:  mov    %eax,%esi
08ad15af +0x60f:  call   08725c30 <__cxa_end_catch>
08ad15b4 +0x614:  mov    %esi,(%esp)
08ad15b7 +0x617:  call   08ae3750 <_Unwind_Resume>
08ad15bc +0x61c:  nop
08ad15bd +0x61d:  nop
08ad15be +0x61e:  nop
08ad15bf +0x61f:  nop
08ad15c0 +0x620:  push   %ebp
08ad15c1 +0x621:  mov    %esp,%ebp
08ad15c3 +0x623:  push   %edi
08ad15c4 +0x624:  push   %esi
08ad15c5 +0x625:  push   %ebx
08ad15c6 +0x626:  sub    $0x5c,%esp
08ad15c9 +0x629:  mov    0x8(%ebp),%eax
08ad15cc +0x62c:  mov    0x8(%ebp),%ebx
08ad15cf +0x62f:  mov    0x8(%ebp),%ecx
08ad15d2 +0x632:  mov    0x8(%ebp),%edx
08ad15d5 +0x635:  mov    0x18(%eax),%eax
08ad15d8 +0x638:  mov    0x10(%ebx),%esi
08ad15db +0x63b:  mov    0x24(%ecx),%ecx
08ad15de +0x63e:  mov    0x1c(%edx),%edx
08ad15e1 +0x641:  mov    %eax,-0x30(%ebp)
08ad15e4 +0x644:  mov    0x14(%ebx),%eax
08ad15e7 +0x647:  mov    %esi,-0x3c(%ebp)
08ad15ea +0x64a:  mov    %ecx,-0x2c(%ebp)
08ad15ed +0x64d:  mov    %edx,-0x38(%ebp)
08ad15f0 +0x650:  mov    0x8(%ebx),%edx
08ad15f3 +0x653:  mov    %eax,-0x34(%ebp)
08ad15f6 +0x656:  add    $0x4,%eax
08ad15f9 +0x659:  cmp    %eax,%ecx
08ad15fb +0x65b:  jbe    08ad1643 <+0x6a3>
08ad15fd +0x65d:  mov    %edx,-0x40(%ebp)
08ad1600 +0x660:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%edi
08ad1605 +0x665:  mov    %eax,%edx
08ad1607 +0x667:  nop
08ad1608 +0x668:  mov    (%edx),%esi
08ad160a +0x66a:  xor    %ebx,%ebx
08ad160c +0x66c:  lea    0x0(%esi,%eiz,1),%esi
08ad1610 +0x670:  mov    0x4(%esi,%ebx,1),%eax
08ad1614 +0x674:  sub    $0xc,%eax
08ad1617 +0x677:  cmp    %eax,%edi
08ad1619 +0x679:  jne    08ad16d3 <+0x733>
08ad161f +0x67f:  mov    (%esi,%ebx,1),%eax
08ad1622 +0x682:  sub    $0xc,%eax
08ad1625 +0x685:  cmp    %eax,%edi
08ad1627 +0x687:  jne    08ad1746 <+0x7a6>
08ad162d +0x68d:  add    $0x14,%ebx
08ad1630 +0x690:  cmp    $0x1f4,%ebx
08ad1636 +0x696:  jne    08ad1610 <+0x670>
08ad1638 +0x698:  add    $0x4,%edx
08ad163b +0x69b:  cmp    %edx,-0x2c(%ebp)
08ad163e +0x69e:  ja     08ad1608 <+0x668>
08ad1640 +0x6a0:  mov    -0x40(%ebp),%edx
08ad1643 +0x6a3:  mov    -0x34(%ebp),%ebx
08ad1646 +0x6a6:  cmp    %ebx,-0x2c(%ebp)
08ad1649 +0x6a9:  je     08ad170f <+0x76f>
08ad164f +0x6af:  cmp    -0x3c(%ebp),%edx
08ad1652 +0x6b2:  je     08ad1688 <+0x6e8>
08ad1654 +0x6b4:  mov    %edx,%ebx
08ad1656 +0x6b6:  mov    -0x3c(%ebp),%edx
08ad1659 +0x6b9:  lea    -0x1c(%ebp),%edi
08ad165c +0x6bc:  lea    0x0(%esi,%eiz,1),%esi
08ad1660 +0x6c0:  mov    0x4(%ebx),%eax
08ad1663 +0x6c3:  sub    $0xc,%eax
08ad1666 +0x6c6:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08ad166b +0x6cb:  jne    08ad1847 <+0x8a7>
08ad1671 +0x6d1:  mov    (%ebx),%eax
08ad1673 +0x6d3:  sub    $0xc,%eax
08ad1676 +0x6d6:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08ad167b +0x6db:  jne    08ad17f3 <+0x853>
08ad1681 +0x6e1:  add    $0x14,%ebx
08ad1684 +0x6e4:  cmp    %ebx,%edx
08ad1686 +0x6e6:  jne    08ad1660 <+0x6c0>
08ad1688 +0x6e8:  mov    -0x38(%ebp),%eax
08ad168b +0x6eb:  cmp    %eax,-0x30(%ebp)
08ad168e +0x6ee:  je     08ad16c0 <+0x720>
08ad1690 +0x6f0:  mov    -0x30(%ebp),%edx
08ad1693 +0x6f3:  lea    -0x1e(%ebp),%esi
08ad1696 +0x6f6:  mov    %eax,%edi
08ad1698 +0x6f8:  mov    0x4(%edi),%eax
08ad169b +0x6fb:  sub    $0xc,%eax
08ad169e +0x6fe:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08ad16a3 +0x703:  jne    08ad17c0 <+0x820>
08ad16a9 +0x709:  mov    (%edi),%eax
08ad16ab +0x70b:  sub    $0xc,%eax
08ad16ae +0x70e:  cmp    $&_ZNSs4_Rep20_S_empty_rep_storageE,%eax
08ad16b3 +0x713:  jne    08ad178c <+0x7ec>
08ad16b9 +0x719:  add    $0x14,%edi
08ad16bc +0x71c:  cmp    %edi,%edx
08ad16be +0x71e:  jne    08ad1698 <+0x6f8>
08ad16c0 +0x720:  mov    0x8(%ebp),%ecx
08ad16c3 +0x723:  mov    %ecx,(%esp)
08ad16c6 +0x726:  call   08ad12d0 <+0x330>
08ad16cb +0x72b:  add    $0x5c,%esp
08ad16ce +0x72e:  pop    %ebx
08ad16cf +0x72f:  pop    %esi
08ad16d0 +0x730:  pop    %edi
08ad16d1 +0x731:  pop    %ebp
08ad16d2 +0x732:  ret
08ad16d3 +0x733:  mov    $&data#bb92cc41(.plt),%ecx
08ad16d8 +0x738:  test   %ecx,%ecx
08ad16da +0x73a:  je     08ad18e7 <+0x947>
08ad16e0 +0x740:  or     $0xffffffff,%ecx
08ad16e3 +0x743:  lock xadd %ecx,0x8(%eax)
08ad16e8 +0x748:  mov    %ecx,-0x4c(%ebp)
08ad16eb +0x74b:  cmpl   $0x0,-0x4c(%ebp)
08ad16ef +0x74f:  jg     08ad161f <+0x67f>
08ad16f5 +0x755:  lea    -0x19(%ebp),%ecx
08ad16f8 +0x758:  mov    %edx,-0x44(%ebp)
08ad16fb +0x75b:  mov    %ecx,0x4(%esp)
08ad16ff +0x75f:  mov    %eax,(%esp)
08ad1702 +0x762:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad1707 +0x767:  mov    -0x44(%ebp),%edx
08ad170a +0x76a:  jmp    08ad161f <+0x67f>
08ad170f +0x76f:  cmp    %edx,-0x30(%ebp)
08ad1712 +0x772:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%ebx
08ad1717 +0x777:  je     08ad16c0 <+0x720>
08ad1719 +0x779:  lea    -0x1f(%ebp),%edi
08ad171c +0x77c:  mov    %edx,%esi
08ad171e +0x77e:  mov    0x4(%esi),%eax
08ad1721 +0x781:  sub    $0xc,%eax
08ad1724 +0x784:  cmp    %eax,%ebx
08ad1726 +0x786:  jne    08ad187a <+0x8da>
08ad172c +0x78c:  mov    (%esi),%eax
08ad172e +0x78e:  sub    $0xc,%eax
08ad1731 +0x791:  cmp    %eax,%ebx
08ad1733 +0x793:  jne    08ad18ba <+0x91a>
08ad1739 +0x799:  add    $0x14,%esi
08ad173c +0x79c:  cmp    %esi,-0x30(%ebp)
08ad173f +0x79f:  jne    08ad171e <+0x77e>
08ad1741 +0x7a1:  jmp    08ad16c0 <+0x720>
08ad1746 +0x7a6:  mov    $&data#bb92cc41(.plt),%ecx
08ad174b +0x7ab:  test   %ecx,%ecx
08ad174d +0x7ad:  je     08ad177e <+0x7de>
08ad174f +0x7af:  or     $0xffffffff,%ecx
08ad1752 +0x7b2:  lock xadd %ecx,0x8(%eax)
08ad1757 +0x7b7:  mov    %ecx,-0x4c(%ebp)
08ad175a +0x7ba:  cmpl   $0x0,-0x4c(%ebp)
08ad175e +0x7be:  jg     08ad162d <+0x68d>
08ad1764 +0x7c4:  lea    -0x1a(%ebp),%ecx
08ad1767 +0x7c7:  mov    %edx,-0x44(%ebp)
08ad176a +0x7ca:  mov    %ecx,0x4(%esp)
08ad176e +0x7ce:  mov    %eax,(%esp)
08ad1771 +0x7d1:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad1776 +0x7d6:  mov    -0x44(%ebp),%edx
08ad1779 +0x7d9:  jmp    08ad162d <+0x68d>
08ad177e +0x7de:  mov    0x8(%eax),%ecx
08ad1781 +0x7e1:  mov    %ecx,-0x4c(%ebp)
08ad1784 +0x7e4:  sub    $0x1,%ecx
08ad1787 +0x7e7:  mov    %ecx,0x8(%eax)
08ad178a +0x7ea:  jmp    08ad175a <+0x7ba>
08ad178c +0x7ec:  mov    $&data#bb92cc41(.plt),%ecx
08ad1791 +0x7f1:  test   %ecx,%ecx
08ad1793 +0x7f3:  je     08ad1823 <+0x883>
08ad1799 +0x7f9:  or     $0xffffffff,%ecx
08ad179c +0x7fc:  lock xadd %ecx,0x8(%eax)
08ad17a1 +0x801:  test   %ecx,%ecx
08ad17a3 +0x803:  jg     08ad16b9 <+0x719>
08ad17a9 +0x809:  mov    %edx,-0x44(%ebp)
08ad17ac +0x80c:  mov    %esi,0x4(%esp)
08ad17b0 +0x810:  mov    %eax,(%esp)
08ad17b3 +0x813:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad17b8 +0x818:  mov    -0x44(%ebp),%edx
08ad17bb +0x81b:  jmp    08ad16b9 <+0x719>
08ad17c0 +0x820:  mov    $&data#bb92cc41(.plt),%ecx
08ad17c5 +0x825:  test   %ecx,%ecx
08ad17c7 +0x827:  je     08ad1831 <+0x891>
08ad17c9 +0x829:  or     $0xffffffff,%ecx
08ad17cc +0x82c:  lock xadd %ecx,0x8(%eax)
08ad17d1 +0x831:  test   %ecx,%ecx
08ad17d3 +0x833:  jg     08ad16a9 <+0x709>
08ad17d9 +0x839:  lea    -0x1d(%ebp),%ecx
08ad17dc +0x83c:  mov    %edx,-0x44(%ebp)
08ad17df +0x83f:  mov    %ecx,0x4(%esp)
08ad17e3 +0x843:  mov    %eax,(%esp)
08ad17e6 +0x846:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad17eb +0x84b:  mov    -0x44(%ebp),%edx
08ad17ee +0x84e:  jmp    08ad16a9 <+0x709>
08ad17f3 +0x853:  mov    $&data#bb92cc41(.plt),%ecx
08ad17f8 +0x858:  test   %ecx,%ecx
08ad17fa +0x85a:  je     08ad183c <+0x89c>
08ad17fc +0x85c:  or     $0xffffffff,%ecx
08ad17ff +0x85f:  lock xadd %ecx,0x8(%eax)
08ad1804 +0x864:  test   %ecx,%ecx
08ad1806 +0x866:  jg     08ad1681 <+0x6e1>
08ad180c +0x86c:  mov    %edx,-0x44(%ebp)
08ad180f +0x86f:  mov    %edi,0x4(%esp)
08ad1813 +0x873:  mov    %eax,(%esp)
08ad1816 +0x876:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad181b +0x87b:  mov    -0x44(%ebp),%edx
08ad181e +0x87e:  jmp    08ad1681 <+0x6e1>
08ad1823 +0x883:  mov    0x8(%eax),%ecx
08ad1826 +0x886:  lea    -0x1(%ecx),%ebx
08ad1829 +0x889:  mov    %ebx,0x8(%eax)
08ad182c +0x88c:  jmp    08ad17a1 <+0x801>
08ad1831 +0x891:  mov    0x8(%eax),%ecx
08ad1834 +0x894:  lea    -0x1(%ecx),%ebx
08ad1837 +0x897:  mov    %ebx,0x8(%eax)
08ad183a +0x89a:  jmp    08ad17d1 <+0x831>
08ad183c +0x89c:  mov    0x8(%eax),%ecx
08ad183f +0x89f:  lea    -0x1(%ecx),%esi
08ad1842 +0x8a2:  mov    %esi,0x8(%eax)
08ad1845 +0x8a5:  jmp    08ad1804 <+0x864>
08ad1847 +0x8a7:  mov    $&data#bb92cc41(.plt),%ecx
08ad184c +0x8ac:  test   %ecx,%ecx
08ad184e +0x8ae:  je     08ad18a4 <+0x904>
08ad1850 +0x8b0:  or     $0xffffffff,%ecx
08ad1853 +0x8b3:  lock xadd %ecx,0x8(%eax)
08ad1858 +0x8b8:  test   %ecx,%ecx
08ad185a +0x8ba:  jg     08ad1671 <+0x6d1>
08ad1860 +0x8c0:  lea    -0x1b(%ebp),%ecx
08ad1863 +0x8c3:  mov    %edx,-0x44(%ebp)
08ad1866 +0x8c6:  mov    %ecx,0x4(%esp)
08ad186a +0x8ca:  mov    %eax,(%esp)
08ad186d +0x8cd:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad1872 +0x8d2:  mov    -0x44(%ebp),%edx
08ad1875 +0x8d5:  jmp    08ad1671 <+0x6d1>
08ad187a +0x8da:  mov    $&data#bb92cc41(.plt),%edx
08ad187f +0x8df:  test   %edx,%edx
08ad1881 +0x8e1:  je     08ad18af <+0x90f>
08ad1883 +0x8e3:  or     $0xffffffff,%edx
08ad1886 +0x8e6:  lock xadd %edx,0x8(%eax)
08ad188b +0x8eb:  test   %edx,%edx
08ad188d +0x8ed:  jg     08ad172c <+0x78c>
08ad1893 +0x8f3:  mov    %edi,0x4(%esp)
08ad1897 +0x8f7:  mov    %eax,(%esp)
08ad189a +0x8fa:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad189f +0x8ff:  jmp    08ad172c <+0x78c>
08ad18a4 +0x904:  mov    0x8(%eax),%ecx
08ad18a7 +0x907:  lea    -0x1(%ecx),%esi
08ad18aa +0x90a:  mov    %esi,0x8(%eax)
08ad18ad +0x90d:  jmp    08ad1858 <+0x8b8>
08ad18af +0x90f:  mov    0x8(%eax),%edx
08ad18b2 +0x912:  lea    -0x1(%edx),%ecx
08ad18b5 +0x915:  mov    %ecx,0x8(%eax)
08ad18b8 +0x918:  jmp    08ad188b <+0x8eb>
08ad18ba +0x91a:  mov    $&data#bb92cc41(.plt),%edx
08ad18bf +0x91f:  test   %edx,%edx
08ad18c1 +0x921:  je     08ad18f8 <+0x958>
08ad18c3 +0x923:  or     $0xffffffff,%edx
08ad18c6 +0x926:  lock xadd %edx,0x8(%eax)
08ad18cb +0x92b:  test   %edx,%edx
08ad18cd +0x92d:  jg     08ad1739 <+0x799>
08ad18d3 +0x933:  lea    -0x20(%ebp),%edx
08ad18d6 +0x936:  mov    %edx,0x4(%esp)
08ad18da +0x93a:  mov    %eax,(%esp)
08ad18dd +0x93d:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
08ad18e2 +0x942:  jmp    08ad1739 <+0x799>
08ad18e7 +0x947:  mov    0x8(%eax),%ecx
08ad18ea +0x94a:  mov    %ecx,-0x4c(%ebp)
08ad18ed +0x94d:  sub    $0x1,%ecx
08ad18f0 +0x950:  mov    %ecx,0x8(%eax)
08ad18f3 +0x953:  jmp    08ad16eb <+0x74b>
08ad18f8 +0x958:  mov    0x8(%eax),%edx
08ad18fb +0x95b:  lea    -0x1(%edx),%ecx
08ad18fe +0x95e:  mov    %ecx,0x8(%eax)
08ad1901 +0x961:  jmp    08ad18cb <+0x92b>
08ad1903 +0x963:  nop
08ad1904 +0x964:  nop
08ad1905 +0x965:  nop
08ad1906 +0x966:  nop
08ad1907 +0x967:  nop
08ad1908 +0x968:  nop
08ad1909 +0x969:  nop
08ad190a +0x96a:  nop
08ad190b +0x96b:  nop
08ad190c +0x96c:  nop
08ad190d +0x96d:  nop
08ad190e +0x96e:  nop
08ad190f +0x96f:  nop
```

## 反编译 C

```c
// CompiledDNFLex::getToken @ 0x8ad0fa0

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: DNFLEX_TOKEN getToken(CompiledDNFLex * this) */

DNFLEX_TOKEN __thiscall CompiledDNFLex::getToken(CompiledDNFLex *this)

{
  bool bVar1;
  DNFLEX_TOKEN DVar2;
  stream_t *psVar3;
  TCHAR *pTVar4;
  char *pcVar5;
  char *pcVar6;
  stream_t *psVar7;
  char *__format;
  char *local_30;
  stream_data_t local_2c;
  undefined1 *local_20 [4];
  
                    /* Unresolved local var: stream_t * stream@[???] */
  psVar7 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_finish._M_cur;
  if (psVar7 == (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_start._M_cur) {
LAB_08ad1140:
    pcVar5 = this->offset_;
LAB_08ad0fec:
    readCharFromBuffer::lexical_block_0::charBuffer = *pcVar5;
    DVar2 = (DNFLEX_TOKEN)readCharFromBuffer::lexical_block_0::charBuffer;
    this->offset_ = pcVar5 + 1;
    this->lastToken_ = DVar2;
    if (this->allow_inclusion_ == false) {
      return DVar2;
    }
    if (DVar2 != DNF_TOK_INCLUDE) {
      return DVar2;
    }
    psVar3 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_cur;
    psVar7 = (stream_t *)0x0;
    if (psVar3 != (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
      if (psVar3 == (this->stream_stack_).c.
                    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                    ._M_impl._M_finish._M_first) {
        psVar3 = (this->stream_stack_).c.
                 super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                 ._M_impl._M_finish._M_node[-1] + 0x19;
      }
      psVar7 = psVar3 + -1;
    }
    readCharFromBuffer::lexical_block_0::charBuffer = pcVar5[1];
    DVar2 = (DNFLEX_TOKEN)readCharFromBuffer::lexical_block_0::charBuffer;
    this->offset_ = pcVar5 + 2;
    this->lastToken_ = DVar2;
    if (DVar2 != DNF_TOK_STRING) {
      pcVar5 = toMbcs(&psVar7->filename);
      pcVar6 = toMbcs(&psVar7->dir);
      sprintf(this->ERR_BUF,"%s - %s/%s, invalid inclusion.","getToken",pcVar6,pcVar5);
      LexerError(this,this->ERR_BUF);
      return DNF_TOK_ERROR;
    }
                    /* Unresolved local var: string include_path@[???]
                       Unresolved local var: stream_data_t sd@[???]
                       Unresolved local var: char * sd_buf@[???] */
    local_20[0] = &DAT_0948ccfc;
                    /* try { // try from 08ad1098 to 08ad1124 has its CatchHandler @ 08ad12b3 */
    bVar1 = getStr(this,(string *)local_20);
    if (!bVar1) {
                    /* try { // try from 08ad115e to 08ad119f has its CatchHandler @ 08ad12b3 */
      pcVar5 = toMbcs(&psVar7->filename);
      pcVar6 = toMbcs(&psVar7->dir);
      __format = "%s - %s%s, invalid inclusion.";
LAB_08ad118c:
      sprintf(this->ERR_BUF,__format,"getToken",pcVar6,pcVar5);
      LexerError(this,this->ERR_BUF);
      std::string::~string((string *)local_20);
      return DNF_TOK_ERROR;
    }
    pTVar4 = toTString((string *)local_20);
    bVar1 = LoadStream(this,"",pTVar4,&local_2c);
    if (!bVar1) {
                    /* try { // try from 08ad121b to 08ad12ad has its CatchHandler @ 08ad12b3 */
      pcVar5 = toMbcs(&psVar7->filename);
      pcVar6 = toMbcs(&psVar7->dir);
      __format = "%s - %s%s, LoadStream failed.";
      goto LAB_08ad118c;
    }
    local_30 = local_2c.buffer;
    if (local_2c.buffer == (char *)0x0) {
      local_30 = operator_new__(local_2c.size);
      std::istream::read((istream *)local_2c.stream,local_30,local_2c.size);
    }
    pTVar4 = toTString((string *)local_20);
    bVar1 = PushInputStream(this,"",pTVar4,local_30,local_2c.size);
    if (!bVar1) {
      pcVar5 = toMbcs(&psVar7->filename);
      pcVar6 = toMbcs(&psVar7->dir);
      __format = "%s - %s%s, PushInputStream failed.";
      goto LAB_08ad118c;
    }
    if (local_2c.stream != (istream *)0x0) {
      (**(code **)(*(int *)local_2c.stream + 4))(local_2c.stream);
    }
    std::string::~string((string *)local_20);
  }
  else {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    if (psVar7 == (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_finish._M_first) {
      psVar7 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_node[-1] + 0x19;
    }
    if (psVar7 == (stream_t *)0x14) goto LAB_08ad1140;
    pcVar5 = this->offset_;
    if (pcVar5 < psVar7[-1].buffer + psVar7[-1].size) goto LAB_08ad0fec;
    this->lastToken_ = DNF_TOK_EOF;
    bVar1 = PopInputStream(this,false);
    if (!bVar1) goto LAB_08ad1037;
  }
  getToken(this);
LAB_08ad1037:
                    /* Unresolved local var: stream_t * stream@[???] */
  return this->lastToken_;
}
```
