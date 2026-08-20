# _Rb_tree_black_count

`_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_`

`std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)`

| 类 | 地址 |
|---|---|
| `std` | `0x086e00a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086e00a0  _ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_
#           std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)
# range [0x086e00a0, 0x086e73cf]
086e00a0 +0x0000:  push   %ebp
086e00a1 +0x0001:  xor    %eax,%eax
086e00a3 +0x0003:  mov    %esp,%ebp
086e00a5 +0x0005:  mov    0x8(%ebp),%edx
086e00a8 +0x0008:  push   %ebx
086e00a9 +0x0009:  mov    0xc(%ebp),%ebx
086e00ac +0x000c:  test   %edx,%edx
086e00ae +0x000e:  jne    086e00bb <+0x1b>
086e00b0 +0x0010:  jmp    086e00c9 <+0x29>
086e00b2 +0x0012:  lea    0x0(%esi),%esi
086e00b8 +0x0018:  mov    0x4(%edx),%edx
086e00bb +0x001b:  xor    %ecx,%ecx
086e00bd +0x001d:  cmpl   $0x1,(%edx)
086e00c0 +0x0020:  sete   %cl
086e00c3 +0x0023:  add    %ecx,%eax
086e00c5 +0x0025:  cmp    %ebx,%edx
086e00c7 +0x0027:  jne    086e00b8 <+0x18>
086e00c9 +0x0029:  pop    %ebx
086e00ca +0x002a:  pop    %ebp
086e00cb +0x002b:  ret
086e00cc +0x002c:  nop
086e00cd +0x002d:  nop
086e00ce +0x002e:  nop
086e00cf +0x002f:  nop
086e00d0 +0x0030:  push   %ebp
086e00d1 +0x0031:  mov    %esp,%ebp
086e00d3 +0x0033:  pop    %ebp
086e00d4 +0x0034:  ret
086e00d5 +0x0035:  nop
086e00d6 +0x0036:  nop
086e00d7 +0x0037:  nop
086e00d8 +0x0038:  nop
086e00d9 +0x0039:  nop
086e00da +0x003a:  nop
086e00db +0x003b:  nop
086e00dc +0x003c:  nop
086e00dd +0x003d:  nop
086e00de +0x003e:  nop
086e00df +0x003f:  nop
086e00e0 +0x0040:  push   %ebp
086e00e1 +0x0041:  mov    %esp,%ebp
086e00e3 +0x0043:  pop    %ebp
086e00e4 +0x0044:  ret
086e00e5 +0x0045:  nop
086e00e6 +0x0046:  nop
086e00e7 +0x0047:  nop
086e00e8 +0x0048:  nop
086e00e9 +0x0049:  nop
086e00ea +0x004a:  nop
086e00eb +0x004b:  nop
086e00ec +0x004c:  nop
086e00ed +0x004d:  nop
086e00ee +0x004e:  nop
086e00ef +0x004f:  nop
086e00f0 +0x0050:  push   %ebp
086e00f1 +0x0051:  mov    %esp,%ebp
086e00f3 +0x0053:  pop    %ebp
086e00f4 +0x0054:  ret
086e00f5 +0x0055:  nop
086e00f6 +0x0056:  nop
086e00f7 +0x0057:  nop
086e00f8 +0x0058:  nop
086e00f9 +0x0059:  nop
086e00fa +0x005a:  nop
086e00fb +0x005b:  nop
086e00fc +0x005c:  nop
086e00fd +0x005d:  nop
086e00fe +0x005e:  nop
086e00ff +0x005f:  nop
086e0100 +0x0060:  push   %ebp
086e0101 +0x0061:  mov    %esp,%ebp
086e0103 +0x0063:  pop    %ebp
086e0104 +0x0064:  ret
086e0105 +0x0065:  nop
086e0106 +0x0066:  nop
086e0107 +0x0067:  nop
086e0108 +0x0068:  nop
086e0109 +0x0069:  nop
086e010a +0x006a:  nop
086e010b +0x006b:  nop
086e010c +0x006c:  nop
086e010d +0x006d:  nop
086e010e +0x006e:  nop
086e010f +0x006f:  nop
086e0110 +0x0070:  push   %ebp
086e0111 +0x0071:  mov    %esp,%ebp
086e0113 +0x0073:  pop    %ebp
086e0114 +0x0074:  ret
086e0115 +0x0075:  nop
086e0116 +0x0076:  nop
086e0117 +0x0077:  nop
086e0118 +0x0078:  nop
086e0119 +0x0079:  nop
086e011a +0x007a:  nop
086e011b +0x007b:  nop
086e011c +0x007c:  nop
086e011d +0x007d:  nop
086e011e +0x007e:  nop
086e011f +0x007f:  nop
086e0120 +0x0080:  push   %ebp
086e0121 +0x0081:  mov    %esp,%ebp
086e0123 +0x0083:  pop    %ebp
086e0124 +0x0084:  ret
086e0125 +0x0085:  nop
086e0126 +0x0086:  nop
086e0127 +0x0087:  nop
086e0128 +0x0088:  nop
086e0129 +0x0089:  nop
086e012a +0x008a:  nop
086e012b +0x008b:  nop
086e012c +0x008c:  nop
086e012d +0x008d:  nop
086e012e +0x008e:  nop
086e012f +0x008f:  nop
086e0130 +0x0090:  push   %ebp
086e0131 +0x0091:  mov    %esp,%ebp
086e0133 +0x0093:  push   %ebx
086e0134 +0x0094:  sub    $0x24,%esp
086e0137 +0x0097:  mov    0x8(%ebp),%edx
086e013a +0x009a:  mov    0xc(%ebp),%ecx
086e013d +0x009d:  mov    0x24(%edx),%eax
086e0140 +0x00a0:  test   %eax,%eax
086e0142 +0x00a2:  je     086e0160 <+0xc0>
086e0144 +0x00a4:  movzbl (%eax,%ecx,1),%eax
086e0148 +0x00a8:  add    $0x24,%esp
086e014b +0x00ab:  pop    %ebx
086e014c +0x00ac:  pop    %ebp
086e014d +0x00ad:  ret
086e014e +0x00ae:  xchg   %ax,%ax
086e0150 +0x00b0:  mov    %edx,%eax
086e0152 +0x00b2:  mov    0x40(%edx),%edx
086e0155 +0x00b5:  mov    (%edx),%ebx
086e0157 +0x00b7:  cmp    %ecx,%ebx
086e0159 +0x00b9:  ja     086e0160 <+0xc0>
086e015b +0x00bb:  mov    0x44(%eax),%edx
086e015e +0x00be:  sub    %ebx,%ecx
086e0160 +0x00c0:  movzbl 0x20(%edx),%eax
086e0164 +0x00c4:  cmp    $0x1,%al
086e0166 +0x00c6:  je     086e0150 <+0xb0>
086e0168 +0x00c8:  jb     086e0198 <+0xf8>
086e016a +0x00ca:  cmp    $0x3,%al
086e016c +0x00cc:  ja     086e0164 <+0xc4>
086e016e +0x00ce:  mov    0x40(%edx),%eax
086e0171 +0x00d1:  lea    -0x9(%ebp),%ebx
086e0174 +0x00d4:  mov    (%eax),%edx
086e0176 +0x00d6:  mov    %ebx,0xc(%esp)
086e017a +0x00da:  mov    %eax,(%esp)
086e017d +0x00dd:  movl   $0x1,0x8(%esp)
086e0185 +0x00e5:  mov    %ecx,0x4(%esp)
086e0189 +0x00e9:  call   *0x8(%edx)
086e018c +0x00ec:  movzbl -0x9(%ebp),%eax
086e0190 +0x00f0:  add    $0x24,%esp
086e0193 +0x00f3:  pop    %ebx
086e0194 +0x00f4:  pop    %ebp
086e0195 +0x00f5:  ret
086e0196 +0x00f6:  xchg   %ax,%ax
086e0198 +0x00f8:  mov    0x40(%edx),%eax
086e019b +0x00fb:  jmp    086e0144 <+0xa4>
086e019d +0x00fd:  nop
086e019e +0x00fe:  nop
086e019f +0x00ff:  nop
086e01a0 +0x0100:  push   %ebp
086e01a1 +0x0101:  mov    %esp,%ebp
086e01a3 +0x0103:  push   %ebx
086e01a4 +0x0104:  sub    $0x24,%esp
086e01a7 +0x0107:  mov    0x8(%ebp),%edx
086e01aa +0x010a:  mov    0xc(%ebp),%ecx
086e01ad +0x010d:  mov    0x24(%edx),%eax
086e01b0 +0x0110:  test   %eax,%eax
086e01b2 +0x0112:  je     086e01d0 <+0x130>
086e01b4 +0x0114:  mov    (%eax,%ecx,4),%eax
086e01b7 +0x0117:  add    $0x24,%esp
086e01ba +0x011a:  pop    %ebx
086e01bb +0x011b:  pop    %ebp
086e01bc +0x011c:  ret
086e01bd +0x011d:  lea    0x0(%esi),%esi
086e01c0 +0x0120:  mov    %edx,%eax
086e01c2 +0x0122:  mov    0x40(%edx),%edx
086e01c5 +0x0125:  mov    (%edx),%ebx
086e01c7 +0x0127:  cmp    %ecx,%ebx
086e01c9 +0x0129:  ja     086e01d0 <+0x130>
086e01cb +0x012b:  mov    0x44(%eax),%edx
086e01ce +0x012e:  sub    %ebx,%ecx
086e01d0 +0x0130:  movzbl 0x20(%edx),%eax
086e01d4 +0x0134:  cmp    $0x1,%al
086e01d6 +0x0136:  je     086e01c0 <+0x120>
086e01d8 +0x0138:  jb     086e0208 <+0x168>
086e01da +0x013a:  cmp    $0x3,%al
086e01dc +0x013c:  ja     086e01d4 <+0x134>
086e01de +0x013e:  mov    0x40(%edx),%eax
086e01e1 +0x0141:  lea    -0xc(%ebp),%ebx
086e01e4 +0x0144:  mov    (%eax),%edx
086e01e6 +0x0146:  mov    %ebx,0xc(%esp)
086e01ea +0x014a:  mov    %eax,(%esp)
086e01ed +0x014d:  movl   $0x1,0x8(%esp)
086e01f5 +0x0155:  mov    %ecx,0x4(%esp)
086e01f9 +0x0159:  call   *0x8(%edx)
086e01fc +0x015c:  mov    -0xc(%ebp),%eax
086e01ff +0x015f:  add    $0x24,%esp
086e0202 +0x0162:  pop    %ebx
086e0203 +0x0163:  pop    %ebp
086e0204 +0x0164:  ret
086e0205 +0x0165:  lea    0x0(%esi),%esi
086e0208 +0x0168:  mov    0x40(%edx),%eax
086e020b +0x016b:  jmp    086e01b4 <+0x114>
086e020d +0x016d:  nop
086e020e +0x016e:  nop
086e020f +0x016f:  nop
086e0210 +0x0170:  push   %ebp
086e0211 +0x0171:  mov    %esp,%ebp
086e0213 +0x0173:  sub    $0x8,%esp
086e0216 +0x0176:  addl   $0x38,0x8(%ebp)
086e021a +0x017a:  leave
086e021b +0x017b:  jmp    08722590 <_ZNSt12__basic_fileIcE4fileEv>  ; std::__basic_file<char>::file()
086e0220 +0x0180:  push   %ebp
086e0221 +0x0181:  mov    %esp,%ebp
086e0223 +0x0183:  sub    $0x8,%esp
086e0226 +0x0186:  addl   $0x38,0x8(%ebp)
086e022a +0x018a:  leave
086e022b +0x018b:  jmp    08722590 <_ZNSt12__basic_fileIcE4fileEv>  ; std::__basic_file<char>::file()
086e0230 +0x0190:  push   %ebp
086e0231 +0x0191:  mov    %esp,%ebp
086e0233 +0x0193:  sub    $0x8,%esp
086e0236 +0x0196:  addl   $0x38,0x8(%ebp)
086e023a +0x019a:  leave
086e023b +0x019b:  jmp    08722730 <_ZNSt12__basic_fileIcE2fdEv>  ; std::__basic_file<char>::fd()
086e0240 +0x01a0:  push   %ebp
086e0241 +0x01a1:  mov    %esp,%ebp
086e0243 +0x01a3:  sub    $0x8,%esp
086e0246 +0x01a6:  addl   $0x38,0x8(%ebp)
086e024a +0x01aa:  leave
086e024b +0x01ab:  jmp    08722730 <_ZNSt12__basic_fileIcE2fdEv>  ; std::__basic_file<char>::fd()
086e0250 +0x01b0:  push   %ebp
086e0251 +0x01b1:  mov    %esp,%ebp
086e0253 +0x01b3:  push   %ebx
086e0254 +0x01b4:  sub    $0x14,%esp
086e0257 +0x01b7:  mov    0x8(%ebp),%ebx
086e025a +0x01ba:  mov    %ebx,(%esp)
086e025d +0x01bd:  call   08727af0 <_ZSt17__verify_groupingPKcjRKSs+0x820>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x820
086e0262 +0x01c2:  movl   $&_ZTVN9__gnu_cxx13stdio_filebufIwSt11char_traitsIwEEE+0x8,(%ebx)
086e0268 +0x01c8:  add    $0x14,%esp
086e026b +0x01cb:  pop    %ebx
086e026c +0x01cc:  pop    %ebp
086e026d +0x01cd:  ret
086e026e +0x01ce:  nop
086e026f +0x01cf:  nop
086e0270 +0x01d0:  push   %ebp
086e0271 +0x01d1:  mov    %esp,%ebp
086e0273 +0x01d3:  push   %ebx
086e0274 +0x01d4:  sub    $0x14,%esp
086e0277 +0x01d7:  mov    0x8(%ebp),%ebx
086e027a +0x01da:  mov    %ebx,(%esp)
086e027d +0x01dd:  call   08727c40 <_ZSt17__verify_groupingPKcjRKSs+0x970>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x970
086e0282 +0x01e2:  movl   $&_ZTVN9__gnu_cxx13stdio_filebufIcSt11char_traitsIcEEE+0x8,(%ebx)
086e0288 +0x01e8:  add    $0x14,%esp
086e028b +0x01eb:  pop    %ebx
086e028c +0x01ec:  pop    %ebp
086e028d +0x01ed:  ret
086e028e +0x01ee:  nop
086e028f +0x01ef:  nop
086e0290 +0x01f0:  push   %ebp
086e0291 +0x01f1:  mov    %esp,%ebp
086e0293 +0x01f3:  sub    $0x28,%esp
086e0296 +0x01f6:  mov    %ebx,-0xc(%ebp)
086e0299 +0x01f9:  mov    0x8(%ebp),%ebx
086e029c +0x01fc:  mov    %esi,-0x8(%ebp)
086e029f +0x01ff:  mov    %edi,-0x4(%ebp)
086e02a2 +0x0202:  mov    0x10(%ebp),%edi
086e02a5 +0x0205:  mov    %ebx,(%esp)
086e02a8 +0x0208:  lea    0x38(%ebx),%esi
086e02ab +0x020b:  call   08727af0 <_ZSt17__verify_groupingPKcjRKSs+0x820>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x820
086e02b0 +0x0210:  mov    0xc(%ebp),%eax
086e02b3 +0x0213:  movl   $&_ZTVN9__gnu_cxx13stdio_filebufIwSt11char_traitsIwEEE+0x8,(%ebx)
086e02b9 +0x0219:  mov    %edi,0x8(%esp)
086e02bd +0x021d:  mov    %esi,(%esp)
086e02c0 +0x0220:  mov    %eax,0x4(%esp)
086e02c4 +0x0224:  call   08722a80 <_ZNSt12__basic_fileIcE8sys_openEiSt13_Ios_Openmode>  ; std::__basic_file<char>::sys_open(int, std::_Ios_Openmode)
086e02c9 +0x0229:  mov    %esi,(%esp)
086e02cc +0x022c:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
086e02d1 +0x0231:  test   %al,%al
086e02d3 +0x0233:  jne    086e02e8 <+0x248>
086e02d5 +0x0235:  mov    -0xc(%ebp),%ebx
086e02d8 +0x0238:  mov    -0x8(%ebp),%esi
086e02db +0x023b:  mov    -0x4(%ebp),%edi
086e02de +0x023e:  mov    %ebp,%esp
086e02e0 +0x0240:  pop    %ebp
086e02e1 +0x0241:  ret
086e02e2 +0x0242:  lea    0x0(%esi),%esi
086e02e8 +0x0248:  mov    0x14(%ebp),%eax
086e02eb +0x024b:  mov    %edi,0x40(%ebx)
086e02ee +0x024e:  mov    %eax,0x60(%ebx)
086e02f1 +0x0251:  mov    %ebx,(%esp)
086e02f4 +0x0254:  call   08727930 <_ZSt17__verify_groupingPKcjRKSs+0x660>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x660
086e02f9 +0x0259:  mov    0x5c(%ebx),%eax
086e02fc +0x025c:  movb   $0x0,0x65(%ebx)
086e0300 +0x0260:  movb   $0x0,0x66(%ebx)
086e0304 +0x0264:  movl   $0x0,0x14(%ebx)
086e030b +0x026b:  mov    %eax,0x4(%ebx)
086e030e +0x026e:  mov    %eax,0x8(%ebx)
086e0311 +0x0271:  mov    %eax,0xc(%ebx)
086e0314 +0x0274:  movl   $0x0,0x10(%ebx)
086e031b +0x027b:  movl   $0x0,0x18(%ebx)
086e0322 +0x0282:  mov    -0xc(%ebp),%ebx
086e0325 +0x0285:  mov    -0x8(%ebp),%esi
086e0328 +0x0288:  mov    -0x4(%ebp),%edi
086e032b +0x028b:  mov    %ebp,%esp
086e032d +0x028d:  pop    %ebp
086e032e +0x028e:  ret
086e032f +0x028f:  cmp    $0xffffffff,%edx
086e0332 +0x0292:  mov    %eax,%esi
086e0334 +0x0294:  je     086e034a <+0x2aa>
086e0336 +0x0296:  mov    %esi,(%esp)
086e0339 +0x0299:  call   08ae3750 <_Unwind_Resume>
086e033e +0x029e:  mov    %eax,%esi
086e0340 +0x02a0:  mov    %ebx,(%esp)
086e0343 +0x02a3:  call   0872b4b0 <_ZSt17__verify_groupingPKcjRKSs+0x41e0>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x41e0
086e0348 +0x02a8:  jmp    086e0336 <+0x296>
086e034a +0x02aa:  mov    %eax,(%esp)
086e034d +0x02ad:  call   08723df0 <__cxa_call_unexpected>
086e0352 +0x02b2:  nop
086e0353 +0x02b3:  nop
086e0354 +0x02b4:  nop
086e0355 +0x02b5:  nop
086e0356 +0x02b6:  nop
086e0357 +0x02b7:  nop
086e0358 +0x02b8:  nop
086e0359 +0x02b9:  nop
086e035a +0x02ba:  nop
086e035b +0x02bb:  nop
086e035c +0x02bc:  nop
086e035d +0x02bd:  nop
086e035e +0x02be:  nop
086e035f +0x02bf:  nop
086e0360 +0x02c0:  push   %ebp
086e0361 +0x02c1:  mov    %esp,%ebp
086e0363 +0x02c3:  sub    $0x28,%esp
086e0366 +0x02c6:  mov    %ebx,-0xc(%ebp)
086e0369 +0x02c9:  mov    0x8(%ebp),%ebx
086e036c +0x02cc:  mov    %esi,-0x8(%ebp)
086e036f +0x02cf:  mov    %edi,-0x4(%ebp)
086e0372 +0x02d2:  mov    0x10(%ebp),%edi
086e0375 +0x02d5:  mov    %ebx,(%esp)
086e0378 +0x02d8:  lea    0x38(%ebx),%esi
086e037b +0x02db:  call   08727c40 <_ZSt17__verify_groupingPKcjRKSs+0x970>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x970
086e0380 +0x02e0:  mov    0xc(%ebp),%eax
086e0383 +0x02e3:  movl   $&_ZTVN9__gnu_cxx13stdio_filebufIcSt11char_traitsIcEEE+0x8,(%ebx)
086e0389 +0x02e9:  mov    %edi,0x8(%esp)
086e038d +0x02ed:  mov    %esi,(%esp)
086e0390 +0x02f0:  mov    %eax,0x4(%esp)
086e0394 +0x02f4:  call   087225c0 <_ZNSt12__basic_fileIcE8sys_openEP8_IO_FILESt13_Ios_Openmode>  ; std::__basic_file<char>::sys_open(_IO_FILE*, std::_Ios_Openmode)
086e0399 +0x02f9:  mov    %esi,(%esp)
086e039c +0x02fc:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
086e03a1 +0x0301:  test   %al,%al
086e03a3 +0x0303:  jne    086e03b8 <+0x318>
086e03a5 +0x0305:  mov    -0xc(%ebp),%ebx
086e03a8 +0x0308:  mov    -0x8(%ebp),%esi
086e03ab +0x030b:  mov    -0x4(%ebp),%edi
086e03ae +0x030e:  mov    %ebp,%esp
086e03b0 +0x0310:  pop    %ebp
086e03b1 +0x0311:  ret
086e03b2 +0x0312:  lea    0x0(%esi),%esi
086e03b8 +0x0318:  mov    0x14(%ebp),%eax
086e03bb +0x031b:  mov    %edi,0x40(%ebx)
086e03be +0x031e:  mov    %eax,0x60(%ebx)
086e03c1 +0x0321:  mov    %ebx,(%esp)
086e03c4 +0x0324:  call   08727970 <_ZSt17__verify_groupingPKcjRKSs+0x6a0>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x6a0
086e03c9 +0x0329:  mov    0x5c(%ebx),%eax
086e03cc +0x032c:  movb   $0x0,0x65(%ebx)
086e03d0 +0x0330:  movb   $0x0,0x66(%ebx)
086e03d4 +0x0334:  movl   $0x0,0x14(%ebx)
086e03db +0x033b:  mov    %eax,0x4(%ebx)
086e03de +0x033e:  mov    %eax,0x8(%ebx)
086e03e1 +0x0341:  mov    %eax,0xc(%ebx)
086e03e4 +0x0344:  movl   $0x0,0x10(%ebx)
086e03eb +0x034b:  movl   $0x0,0x18(%ebx)
086e03f2 +0x0352:  mov    -0xc(%ebp),%ebx
086e03f5 +0x0355:  mov    -0x8(%ebp),%esi
086e03f8 +0x0358:  mov    -0x4(%ebp),%edi
086e03fb +0x035b:  mov    %ebp,%esp
086e03fd +0x035d:  pop    %ebp
086e03fe +0x035e:  ret
086e03ff +0x035f:  cmp    $0xffffffff,%edx
086e0402 +0x0362:  mov    %eax,%esi
086e0404 +0x0364:  je     086e041a <+0x37a>
086e0406 +0x0366:  mov    %esi,(%esp)
086e0409 +0x0369:  call   08ae3750 <_Unwind_Resume>
086e040e +0x036e:  mov    %eax,%esi
086e0410 +0x0370:  mov    %ebx,(%esp)
086e0413 +0x0373:  call   087291d0 <_ZSt17__verify_groupingPKcjRKSs+0x1f00>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x1f00
086e0418 +0x0378:  jmp    086e0406 <+0x366>
086e041a +0x037a:  mov    %eax,(%esp)
086e041d +0x037d:  call   08723df0 <__cxa_call_unexpected>
086e0422 +0x0382:  nop
086e0423 +0x0383:  nop
086e0424 +0x0384:  nop
086e0425 +0x0385:  nop
086e0426 +0x0386:  nop
086e0427 +0x0387:  nop
086e0428 +0x0388:  nop
086e0429 +0x0389:  nop
086e042a +0x038a:  nop
086e042b +0x038b:  nop
086e042c +0x038c:  nop
086e042d +0x038d:  nop
086e042e +0x038e:  nop
086e042f +0x038f:  nop
086e0430 +0x0390:  push   %ebp
086e0431 +0x0391:  mov    %esp,%ebp
086e0433 +0x0393:  sub    $0x28,%esp
086e0436 +0x0396:  mov    %ebx,-0xc(%ebp)
086e0439 +0x0399:  mov    0x8(%ebp),%ebx
086e043c +0x039c:  mov    %esi,-0x8(%ebp)
086e043f +0x039f:  mov    %edi,-0x4(%ebp)
086e0442 +0x03a2:  mov    0x10(%ebp),%edi
086e0445 +0x03a5:  mov    %ebx,(%esp)
086e0448 +0x03a8:  lea    0x38(%ebx),%esi
086e044b +0x03ab:  call   08727c40 <_ZSt17__verify_groupingPKcjRKSs+0x970>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x970
086e0450 +0x03b0:  mov    0xc(%ebp),%eax
086e0453 +0x03b3:  movl   $&_ZTVN9__gnu_cxx13stdio_filebufIcSt11char_traitsIcEEE+0x8,(%ebx)
086e0459 +0x03b9:  mov    %edi,0x8(%esp)
086e045d +0x03bd:  mov    %esi,(%esp)
086e0460 +0x03c0:  mov    %eax,0x4(%esp)
086e0464 +0x03c4:  call   08722a80 <_ZNSt12__basic_fileIcE8sys_openEiSt13_Ios_Openmode>  ; std::__basic_file<char>::sys_open(int, std::_Ios_Openmode)
086e0469 +0x03c9:  mov    %esi,(%esp)
086e046c +0x03cc:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
086e0471 +0x03d1:  test   %al,%al
086e0473 +0x03d3:  jne    086e0488 <+0x3e8>
086e0475 +0x03d5:  mov    -0xc(%ebp),%ebx
086e0478 +0x03d8:  mov    -0x8(%ebp),%esi
086e047b +0x03db:  mov    -0x4(%ebp),%edi
086e047e +0x03de:  mov    %ebp,%esp
086e0480 +0x03e0:  pop    %ebp
086e0481 +0x03e1:  ret
086e0482 +0x03e2:  lea    0x0(%esi),%esi
086e0488 +0x03e8:  mov    0x14(%ebp),%eax
086e048b +0x03eb:  mov    %edi,0x40(%ebx)
086e048e +0x03ee:  mov    %eax,0x60(%ebx)
086e0491 +0x03f1:  mov    %ebx,(%esp)
086e0494 +0x03f4:  call   08727970 <_ZSt17__verify_groupingPKcjRKSs+0x6a0>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x6a0
086e0499 +0x03f9:  mov    0x5c(%ebx),%eax
086e049c +0x03fc:  movb   $0x0,0x65(%ebx)
086e04a0 +0x0400:  movb   $0x0,0x66(%ebx)
086e04a4 +0x0404:  movl   $0x0,0x14(%ebx)
086e04ab +0x040b:  mov    %eax,0x4(%ebx)
086e04ae +0x040e:  mov    %eax,0x8(%ebx)
086e04b1 +0x0411:  mov    %eax,0xc(%ebx)
086e04b4 +0x0414:  movl   $0x0,0x10(%ebx)
086e04bb +0x041b:  movl   $0x0,0x18(%ebx)
086e04c2 +0x0422:  mov    -0xc(%ebp),%ebx
086e04c5 +0x0425:  mov    -0x8(%ebp),%esi
086e04c8 +0x0428:  mov    -0x4(%ebp),%edi
086e04cb +0x042b:  mov    %ebp,%esp
086e04cd +0x042d:  pop    %ebp
086e04ce +0x042e:  ret
086e04cf +0x042f:  cmp    $0xffffffff,%edx
086e04d2 +0x0432:  mov    %eax,%esi
086e04d4 +0x0434:  je     086e04ea <+0x44a>
086e04d6 +0x0436:  mov    %esi,(%esp)
086e04d9 +0x0439:  call   08ae3750 <_Unwind_Resume>
086e04de +0x043e:  mov    %eax,%esi
086e04e0 +0x0440:  mov    %ebx,(%esp)
086e04e3 +0x0443:  call   087291d0 <_ZSt17__verify_groupingPKcjRKSs+0x1f00>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x1f00
086e04e8 +0x0448:  jmp    086e04d6 <+0x436>
086e04ea +0x044a:  mov    %eax,(%esp)
086e04ed +0x044d:  call   08723df0 <__cxa_call_unexpected>
086e04f2 +0x0452:  nop
086e04f3 +0x0453:  nop
086e04f4 +0x0454:  nop
086e04f5 +0x0455:  nop
086e04f6 +0x0456:  nop
086e04f7 +0x0457:  nop
086e04f8 +0x0458:  nop
086e04f9 +0x0459:  nop
086e04fa +0x045a:  nop
086e04fb +0x045b:  nop
086e04fc +0x045c:  nop
086e04fd +0x045d:  nop
086e04fe +0x045e:  nop
086e04ff +0x045f:  nop
086e0500 +0x0460:  push   %ebp
086e0501 +0x0461:  mov    %esp,%ebp
086e0503 +0x0463:  sub    $0x28,%esp
086e0506 +0x0466:  mov    %ebx,-0xc(%ebp)
086e0509 +0x0469:  mov    0x8(%ebp),%ebx
086e050c +0x046c:  mov    %esi,-0x8(%ebp)
086e050f +0x046f:  mov    %edi,-0x4(%ebp)
086e0512 +0x0472:  mov    0x10(%ebp),%edi
086e0515 +0x0475:  mov    %ebx,(%esp)
086e0518 +0x0478:  lea    0x38(%ebx),%esi
086e051b +0x047b:  call   08727af0 <_ZSt17__verify_groupingPKcjRKSs+0x820>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x820
086e0520 +0x0480:  mov    0xc(%ebp),%eax
086e0523 +0x0483:  movl   $&_ZTVN9__gnu_cxx13stdio_filebufIwSt11char_traitsIwEEE+0x8,(%ebx)
086e0529 +0x0489:  mov    %edi,0x8(%esp)
086e052d +0x048d:  mov    %esi,(%esp)
086e0530 +0x0490:  mov    %eax,0x4(%esp)
086e0534 +0x0494:  call   087225c0 <_ZNSt12__basic_fileIcE8sys_openEP8_IO_FILESt13_Ios_Openmode>  ; std::__basic_file<char>::sys_open(_IO_FILE*, std::_Ios_Openmode)
086e0539 +0x0499:  mov    %esi,(%esp)
086e053c +0x049c:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
086e0541 +0x04a1:  test   %al,%al
086e0543 +0x04a3:  jne    086e0558 <+0x4b8>
086e0545 +0x04a5:  mov    -0xc(%ebp),%ebx
086e0548 +0x04a8:  mov    -0x8(%ebp),%esi
086e054b +0x04ab:  mov    -0x4(%ebp),%edi
086e054e +0x04ae:  mov    %ebp,%esp
086e0550 +0x04b0:  pop    %ebp
086e0551 +0x04b1:  ret
086e0552 +0x04b2:  lea    0x0(%esi),%esi
086e0558 +0x04b8:  mov    0x14(%ebp),%eax
086e055b +0x04bb:  mov    %edi,0x40(%ebx)
086e055e +0x04be:  mov    %eax,0x60(%ebx)
086e0561 +0x04c1:  mov    %ebx,(%esp)
086e0564 +0x04c4:  call   08727930 <_ZSt17__verify_groupingPKcjRKSs+0x660>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x660
086e0569 +0x04c9:  mov    0x5c(%ebx),%eax
086e056c +0x04cc:  movb   $0x0,0x65(%ebx)
086e0570 +0x04d0:  movb   $0x0,0x66(%ebx)
086e0574 +0x04d4:  movl   $0x0,0x14(%ebx)
086e057b +0x04db:  mov    %eax,0x4(%ebx)
086e057e +0x04de:  mov    %eax,0x8(%ebx)
086e0581 +0x04e1:  mov    %eax,0xc(%ebx)
086e0584 +0x04e4:  movl   $0x0,0x10(%ebx)
086e058b +0x04eb:  movl   $0x0,0x18(%ebx)
086e0592 +0x04f2:  mov    -0xc(%ebp),%ebx
086e0595 +0x04f5:  mov    -0x8(%ebp),%esi
086e0598 +0x04f8:  mov    -0x4(%ebp),%edi
086e059b +0x04fb:  mov    %ebp,%esp
086e059d +0x04fd:  pop    %ebp
086e059e +0x04fe:  ret
086e059f +0x04ff:  cmp    $0xffffffff,%edx
086e05a2 +0x0502:  mov    %eax,%esi
086e05a4 +0x0504:  je     086e05ba <+0x51a>
086e05a6 +0x0506:  mov    %esi,(%esp)
086e05a9 +0x0509:  call   08ae3750 <_Unwind_Resume>
086e05ae +0x050e:  mov    %eax,%esi
086e05b0 +0x0510:  mov    %ebx,(%esp)
086e05b3 +0x0513:  call   0872b4b0 <_ZSt17__verify_groupingPKcjRKSs+0x41e0>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x41e0
086e05b8 +0x0518:  jmp    086e05a6 <+0x506>
086e05ba +0x051a:  mov    %eax,(%esp)
086e05bd +0x051d:  call   08723df0 <__cxa_call_unexpected>
086e05c2 +0x0522:  nop
086e05c3 +0x0523:  nop
086e05c4 +0x0524:  nop
086e05c5 +0x0525:  nop
086e05c6 +0x0526:  nop
086e05c7 +0x0527:  nop
086e05c8 +0x0528:  nop
086e05c9 +0x0529:  nop
086e05ca +0x052a:  nop
086e05cb +0x052b:  nop
086e05cc +0x052c:  nop
086e05cd +0x052d:  nop
086e05ce +0x052e:  nop
086e05cf +0x052f:  nop
086e05d0 +0x0530:  push   %ebp
086e05d1 +0x0531:  mov    %esp,%ebp
086e05d3 +0x0533:  sub    $0x18,%esp
086e05d6 +0x0536:  mov    %ebx,-0x8(%ebp)
086e05d9 +0x0539:  mov    0x8(%ebp),%ebx
086e05dc +0x053c:  mov    %esi,-0x4(%ebp)
086e05df +0x053f:  movl   $&_ZTVSt13basic_filebufIcSt11char_traitsIcEE+0x8,(%ebx)
086e05e5 +0x0545:  mov    %ebx,(%esp)
086e05e8 +0x0548:  call   08728c90 <_ZSt17__verify_groupingPKcjRKSs+0x19c0>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x19c0
086e05ed +0x054d:  lea    0x38(%ebx),%eax
086e05f0 +0x0550:  mov    %eax,(%esp)
086e05f3 +0x0553:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
086e05f8 +0x0558:  movl   $&_ZTVSt15basic_streambufIcSt11char_traitsIcEE+0x8,(%ebx)
086e05fe +0x055e:  add    $0x1c,%ebx
086e0601 +0x0561:  mov    -0x4(%ebp),%esi
086e0604 +0x0564:  mov    %ebx,0x8(%ebp)
086e0607 +0x0567:  mov    -0x8(%ebp),%ebx
086e060a +0x056a:  mov    %ebp,%esp
086e060c +0x056c:  pop    %ebp
086e060d +0x056d:  jmp    086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e0612 +0x0572:  mov    %eax,%esi
086e0614 +0x0574:  lea    0x38(%ebx),%eax
086e0617 +0x0577:  mov    %eax,(%esp)
086e061a +0x057a:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
086e061f +0x057f:  mov    %ebx,(%esp)
086e0622 +0x0582:  call   08705fb0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11744
086e0627 +0x0587:  mov    %esi,(%esp)
086e062a +0x058a:  call   08ae3750 <_Unwind_Resume>
086e062f +0x058f:  mov    %eax,%esi
086e0631 +0x0591:  jmp    086e061f <+0x57f>
086e0633 +0x0593:  nop
086e0634 +0x0594:  nop
086e0635 +0x0595:  nop
086e0636 +0x0596:  nop
086e0637 +0x0597:  nop
086e0638 +0x0598:  nop
086e0639 +0x0599:  nop
086e063a +0x059a:  nop
086e063b +0x059b:  nop
086e063c +0x059c:  nop
086e063d +0x059d:  nop
086e063e +0x059e:  nop
086e063f +0x059f:  nop
086e0640 +0x05a0:  push   %ebp
086e0641 +0x05a1:  mov    %esp,%ebp
086e0643 +0x05a3:  push   %ebx
086e0644 +0x05a4:  sub    $0x14,%esp
086e0647 +0x05a7:  mov    0x8(%ebp),%ebx
086e064a +0x05aa:  mov    %ebx,(%esp)
086e064d +0x05ad:  call   086e05d0 <+0x530>
086e0652 +0x05b2:  mov    %ebx,0x8(%ebp)
086e0655 +0x05b5:  add    $0x14,%esp
086e0658 +0x05b8:  pop    %ebx
086e0659 +0x05b9:  pop    %ebp
086e065a +0x05ba:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086e065f +0x05bf:  nop
086e0660 +0x05c0:  push   %ebp
086e0661 +0x05c1:  mov    %esp,%ebp
086e0663 +0x05c3:  sub    $0x18,%esp
086e0666 +0x05c6:  mov    %ebx,-0x8(%ebp)
086e0669 +0x05c9:  mov    0x8(%ebp),%ebx
086e066c +0x05cc:  mov    %esi,-0x4(%ebp)
086e066f +0x05cf:  movl   $&_ZTVSt13basic_filebufIwSt11char_traitsIwEE+0x8,(%ebx)
086e0675 +0x05d5:  mov    %ebx,(%esp)
086e0678 +0x05d8:  call   0872aeb0 <_ZSt17__verify_groupingPKcjRKSs+0x3be0>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x3be0
086e067d +0x05dd:  lea    0x38(%ebx),%eax
086e0680 +0x05e0:  mov    %eax,(%esp)
086e0683 +0x05e3:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
086e0688 +0x05e8:  movl   $&_ZTVSt15basic_streambufIwSt11char_traitsIwEE+0x8,(%ebx)
086e068e +0x05ee:  add    $0x1c,%ebx
086e0691 +0x05f1:  mov    -0x4(%ebp),%esi
086e0694 +0x05f4:  mov    %ebx,0x8(%ebp)
086e0697 +0x05f7:  mov    -0x8(%ebp),%ebx
086e069a +0x05fa:  mov    %ebp,%esp
086e069c +0x05fc:  pop    %ebp
086e069d +0x05fd:  jmp    086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e06a2 +0x0602:  mov    %eax,%esi
086e06a4 +0x0604:  lea    0x38(%ebx),%eax
086e06a7 +0x0607:  mov    %eax,(%esp)
086e06aa +0x060a:  call   08722720 <_ZNSt12__basic_fileIcED1Ev>  ; std::__basic_file<char>::~__basic_file()
086e06af +0x060f:  mov    %ebx,(%esp)
086e06b2 +0x0612:  call   08705f90 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x11724
086e06b7 +0x0617:  mov    %esi,(%esp)
086e06ba +0x061a:  call   08ae3750 <_Unwind_Resume>
086e06bf +0x061f:  mov    %eax,%esi
086e06c1 +0x0621:  jmp    086e06af <+0x60f>
086e06c3 +0x0623:  nop
086e06c4 +0x0624:  nop
086e06c5 +0x0625:  nop
086e06c6 +0x0626:  nop
086e06c7 +0x0627:  nop
086e06c8 +0x0628:  nop
086e06c9 +0x0629:  nop
086e06ca +0x062a:  nop
086e06cb +0x062b:  nop
086e06cc +0x062c:  nop
086e06cd +0x062d:  nop
086e06ce +0x062e:  nop
086e06cf +0x062f:  nop
086e06d0 +0x0630:  push   %ebp
086e06d1 +0x0631:  mov    %esp,%ebp
086e06d3 +0x0633:  push   %ebx
086e06d4 +0x0634:  sub    $0x14,%esp
086e06d7 +0x0637:  mov    0x8(%ebp),%ebx
086e06da +0x063a:  mov    %ebx,(%esp)
086e06dd +0x063d:  call   086e0660 <+0x5c0>
086e06e2 +0x0642:  mov    %ebx,0x8(%ebp)
086e06e5 +0x0645:  add    $0x14,%esp
086e06e8 +0x0648:  pop    %ebx
086e06e9 +0x0649:  pop    %ebp
086e06ea +0x064a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086e06ef +0x064f:  nop
086e06f0 +0x0650:  push   %ebp
086e06f1 +0x0651:  mov    %esp,%ebp
086e06f3 +0x0653:  mov    0x8(%ebp),%edx
086e06f6 +0x0656:  pop    %ebp
086e06f7 +0x0657:  mov    0x14(%edx),%eax
086e06fa +0x065a:  and    $0x5,%eax
086e06fd +0x065d:  cmp    $0x1,%eax
086e0700 +0x0660:  sbb    %eax,%eax
086e0702 +0x0662:  and    %edx,%eax
086e0704 +0x0664:  ret
086e0705 +0x0665:  nop
086e0706 +0x0666:  nop
086e0707 +0x0667:  nop
086e0708 +0x0668:  nop
086e0709 +0x0669:  nop
086e070a +0x066a:  nop
086e070b +0x066b:  nop
086e070c +0x066c:  nop
086e070d +0x066d:  nop
086e070e +0x066e:  nop
086e070f +0x066f:  nop
086e0710 +0x0670:  push   %ebp
086e0711 +0x0671:  mov    %esp,%ebp
086e0713 +0x0673:  mov    0x8(%ebp),%eax
086e0716 +0x0676:  pop    %ebp
086e0717 +0x0677:  testb  $0x5,0x14(%eax)
086e071b +0x067b:  setne  %al
086e071e +0x067e:  ret
086e071f +0x067f:  nop
086e0720 +0x0680:  push   %ebp
086e0721 +0x0681:  mov    %esp,%ebp
086e0723 +0x0683:  mov    0x8(%ebp),%eax
086e0726 +0x0686:  pop    %ebp
086e0727 +0x0687:  mov    0x14(%eax),%eax
086e072a +0x068a:  ret
086e072b +0x068b:  nop
086e072c +0x068c:  nop
086e072d +0x068d:  nop
086e072e +0x068e:  nop
086e072f +0x068f:  nop
086e0730 +0x0690:  push   %ebp
086e0731 +0x0691:  mov    %esp,%ebp
086e0733 +0x0693:  mov    0x8(%ebp),%eax
086e0736 +0x0696:  pop    %ebp
086e0737 +0x0697:  mov    0x14(%eax),%eax
086e073a +0x069a:  test   %eax,%eax
086e073c +0x069c:  sete   %al
086e073f +0x069f:  ret
086e0740 +0x06a0:  push   %ebp
086e0741 +0x06a1:  mov    %esp,%ebp
086e0743 +0x06a3:  mov    0x8(%ebp),%eax
086e0746 +0x06a6:  pop    %ebp
086e0747 +0x06a7:  mov    0x14(%eax),%eax
086e074a +0x06aa:  shr    %eax
086e074c +0x06ac:  and    $0x1,%eax
086e074f +0x06af:  ret
086e0750 +0x06b0:  push   %ebp
086e0751 +0x06b1:  mov    %esp,%ebp
086e0753 +0x06b3:  mov    0x8(%ebp),%eax
086e0756 +0x06b6:  pop    %ebp
086e0757 +0x06b7:  testb  $0x5,0x14(%eax)
086e075b +0x06bb:  setne  %al
086e075e +0x06be:  ret
086e075f +0x06bf:  nop
086e0760 +0x06c0:  push   %ebp
086e0761 +0x06c1:  mov    %esp,%ebp
086e0763 +0x06c3:  mov    0x8(%ebp),%eax
086e0766 +0x06c6:  pop    %ebp
086e0767 +0x06c7:  mov    0x14(%eax),%eax
086e076a +0x06ca:  and    $0x1,%eax
086e076d +0x06cd:  ret
086e076e +0x06ce:  nop
086e076f +0x06cf:  nop
086e0770 +0x06d0:  push   %ebp
086e0771 +0x06d1:  mov    %esp,%ebp
086e0773 +0x06d3:  mov    0x8(%ebp),%eax
086e0776 +0x06d6:  pop    %ebp
086e0777 +0x06d7:  mov    0x10(%eax),%eax
086e077a +0x06da:  ret
086e077b +0x06db:  nop
086e077c +0x06dc:  nop
086e077d +0x06dd:  nop
086e077e +0x06de:  nop
086e077f +0x06df:  nop
086e0780 +0x06e0:  push   %ebp
086e0781 +0x06e1:  mov    %esp,%ebp
086e0783 +0x06e3:  mov    0x8(%ebp),%eax
086e0786 +0x06e6:  pop    %ebp
086e0787 +0x06e7:  mov    0x70(%eax),%eax
086e078a +0x06ea:  ret
086e078b +0x06eb:  nop
086e078c +0x06ec:  nop
086e078d +0x06ed:  nop
086e078e +0x06ee:  nop
086e078f +0x06ef:  nop
086e0790 +0x06f0:  push   %ebp
086e0791 +0x06f1:  mov    %esp,%ebp
086e0793 +0x06f3:  mov    0x8(%ebp),%edx
086e0796 +0x06f6:  mov    0xc(%ebp),%ecx
086e0799 +0x06f9:  mov    0x70(%edx),%eax
086e079c +0x06fc:  mov    %ecx,0x70(%edx)
086e079f +0x06ff:  pop    %ebp
086e07a0 +0x0700:  ret
086e07a1 +0x0701:  nop
086e07a2 +0x0702:  nop
086e07a3 +0x0703:  nop
086e07a4 +0x0704:  nop
086e07a5 +0x0705:  nop
086e07a6 +0x0706:  nop
086e07a7 +0x0707:  nop
086e07a8 +0x0708:  nop
086e07a9 +0x0709:  nop
086e07aa +0x070a:  nop
086e07ab +0x070b:  nop
086e07ac +0x070c:  nop
086e07ad +0x070d:  nop
086e07ae +0x070e:  nop
086e07af +0x070f:  nop
086e07b0 +0x0710:  push   %ebp
086e07b1 +0x0711:  mov    %esp,%ebp
086e07b3 +0x0713:  mov    0x8(%ebp),%eax
086e07b6 +0x0716:  pop    %ebp
086e07b7 +0x0717:  mov    0x78(%eax),%eax
086e07ba +0x071a:  ret
086e07bb +0x071b:  nop
086e07bc +0x071c:  nop
086e07bd +0x071d:  nop
086e07be +0x071e:  nop
086e07bf +0x071f:  nop
086e07c0 +0x0720:  push   %ebp
086e07c1 +0x0721:  mov    %esp,%ebp
086e07c3 +0x0723:  mov    0x8(%ebp),%edx
086e07c6 +0x0726:  pop    %ebp
086e07c7 +0x0727:  mov    0x14(%edx),%eax
086e07ca +0x072a:  and    $0x5,%eax
086e07cd +0x072d:  cmp    $0x1,%eax
086e07d0 +0x0730:  sbb    %eax,%eax
086e07d2 +0x0732:  and    %edx,%eax
086e07d4 +0x0734:  ret
086e07d5 +0x0735:  nop
086e07d6 +0x0736:  nop
086e07d7 +0x0737:  nop
086e07d8 +0x0738:  nop
086e07d9 +0x0739:  nop
086e07da +0x073a:  nop
086e07db +0x073b:  nop
086e07dc +0x073c:  nop
086e07dd +0x073d:  nop
086e07de +0x073e:  nop
086e07df +0x073f:  nop
086e07e0 +0x0740:  push   %ebp
086e07e1 +0x0741:  mov    %esp,%ebp
086e07e3 +0x0743:  mov    0x8(%ebp),%eax
086e07e6 +0x0746:  pop    %ebp
086e07e7 +0x0747:  testb  $0x5,0x14(%eax)
086e07eb +0x074b:  setne  %al
086e07ee +0x074e:  ret
086e07ef +0x074f:  nop
086e07f0 +0x0750:  push   %ebp
086e07f1 +0x0751:  mov    %esp,%ebp
086e07f3 +0x0753:  mov    0x8(%ebp),%eax
086e07f6 +0x0756:  pop    %ebp
086e07f7 +0x0757:  mov    0x14(%eax),%eax
086e07fa +0x075a:  ret
086e07fb +0x075b:  nop
086e07fc +0x075c:  nop
086e07fd +0x075d:  nop
086e07fe +0x075e:  nop
086e07ff +0x075f:  nop
086e0800 +0x0760:  push   %ebp
086e0801 +0x0761:  mov    %esp,%ebp
086e0803 +0x0763:  mov    0x8(%ebp),%eax
086e0806 +0x0766:  pop    %ebp
086e0807 +0x0767:  mov    0x14(%eax),%edx
086e080a +0x076a:  test   %edx,%edx
086e080c +0x076c:  sete   %al
086e080f +0x076f:  ret
086e0810 +0x0770:  push   %ebp
086e0811 +0x0771:  mov    %esp,%ebp
086e0813 +0x0773:  mov    0x8(%ebp),%eax
086e0816 +0x0776:  pop    %ebp
086e0817 +0x0777:  mov    0x14(%eax),%eax
086e081a +0x077a:  shr    %eax
086e081c +0x077c:  and    $0x1,%eax
086e081f +0x077f:  ret
086e0820 +0x0780:  push   %ebp
086e0821 +0x0781:  mov    %esp,%ebp
086e0823 +0x0783:  mov    0x8(%ebp),%eax
086e0826 +0x0786:  pop    %ebp
086e0827 +0x0787:  testb  $0x5,0x14(%eax)
086e082b +0x078b:  setne  %al
086e082e +0x078e:  ret
086e082f +0x078f:  nop
086e0830 +0x0790:  push   %ebp
086e0831 +0x0791:  mov    %esp,%ebp
086e0833 +0x0793:  mov    0x8(%ebp),%eax
086e0836 +0x0796:  pop    %ebp
086e0837 +0x0797:  mov    0x14(%eax),%eax
086e083a +0x079a:  and    $0x1,%eax
086e083d +0x079d:  ret
086e083e +0x079e:  nop
086e083f +0x079f:  nop
086e0840 +0x07a0:  push   %ebp
086e0841 +0x07a1:  mov    %esp,%ebp
086e0843 +0x07a3:  mov    0x8(%ebp),%eax
086e0846 +0x07a6:  pop    %ebp
086e0847 +0x07a7:  mov    0x10(%eax),%eax
086e084a +0x07aa:  ret
086e084b +0x07ab:  nop
086e084c +0x07ac:  nop
086e084d +0x07ad:  nop
086e084e +0x07ae:  nop
086e084f +0x07af:  nop
086e0850 +0x07b0:  push   %ebp
086e0851 +0x07b1:  mov    %esp,%ebp
086e0853 +0x07b3:  mov    0x8(%ebp),%eax
086e0856 +0x07b6:  pop    %ebp
086e0857 +0x07b7:  mov    0x70(%eax),%eax
086e085a +0x07ba:  ret
086e085b +0x07bb:  nop
086e085c +0x07bc:  nop
086e085d +0x07bd:  nop
086e085e +0x07be:  nop
086e085f +0x07bf:  nop
086e0860 +0x07c0:  push   %ebp
086e0861 +0x07c1:  mov    %esp,%ebp
086e0863 +0x07c3:  mov    0x8(%ebp),%edx
086e0866 +0x07c6:  mov    0xc(%ebp),%ecx
086e0869 +0x07c9:  mov    0x70(%edx),%eax
086e086c +0x07cc:  mov    %ecx,0x70(%edx)
086e086f +0x07cf:  pop    %ebp
086e0870 +0x07d0:  ret
086e0871 +0x07d1:  nop
086e0872 +0x07d2:  nop
086e0873 +0x07d3:  nop
086e0874 +0x07d4:  nop
086e0875 +0x07d5:  nop
086e0876 +0x07d6:  nop
086e0877 +0x07d7:  nop
086e0878 +0x07d8:  nop
086e0879 +0x07d9:  nop
086e087a +0x07da:  nop
086e087b +0x07db:  nop
086e087c +0x07dc:  nop
086e087d +0x07dd:  nop
086e087e +0x07de:  nop
086e087f +0x07df:  nop
086e0880 +0x07e0:  push   %ebp
086e0881 +0x07e1:  mov    %esp,%ebp
086e0883 +0x07e3:  mov    0x8(%ebp),%eax
086e0886 +0x07e6:  pop    %ebp
086e0887 +0x07e7:  mov    0x7c(%eax),%eax
086e088a +0x07ea:  ret
086e088b +0x07eb:  nop
086e088c +0x07ec:  nop
086e088d +0x07ed:  nop
086e088e +0x07ee:  nop
086e088f +0x07ef:  nop
086e0890 +0x07f0:  push   %ebp
086e0891 +0x07f1:  mov    %esp,%ebp
086e0893 +0x07f3:  push   %esi
086e0894 +0x07f4:  push   %ebx
086e0895 +0x07f5:  sub    $0x10,%esp
086e0898 +0x07f8:  mov    0xc(%ebp),%ebx
086e089b +0x07fb:  mov    0x8(%ebp),%esi
086e089e +0x07fe:  mov    %ebx,(%esp)
086e08a1 +0x0801:  call   0870bad0 <_GLOBAL__I_wlocale_inst.cc+0x9e0>  ; global constructors keyed to wlocale_inst.cc+0x9e0
086e08a6 +0x0806:  test   %al,%al
086e08a8 +0x0808:  je     086e08f3 <+0x853>
086e08aa +0x080a:  mov    %ebx,(%esp)
086e08ad +0x080d:  call   0870c020 <_GLOBAL__I_wlocale_inst.cc+0xf30>  ; global constructors keyed to wlocale_inst.cc+0xf30
086e08b2 +0x0812:  mov    %eax,0x80(%esi)
086e08b8 +0x0818:  mov    %ebx,(%esp)
086e08bb +0x081b:  call   0870b910 <_GLOBAL__I_wlocale_inst.cc+0x820>  ; global constructors keyed to wlocale_inst.cc+0x820
086e08c0 +0x0820:  test   %al,%al
086e08c2 +0x0822:  je     086e090b <+0x86b>
086e08c4 +0x0824:  mov    %ebx,(%esp)
086e08c7 +0x0827:  call   0870bea0 <_GLOBAL__I_wlocale_inst.cc+0xdb0>  ; global constructors keyed to wlocale_inst.cc+0xdb0
086e08cc +0x082c:  mov    %eax,0x84(%esi)
086e08d2 +0x0832:  mov    %ebx,(%esp)
086e08d5 +0x0835:  call   0870b8a0 <_GLOBAL__I_wlocale_inst.cc+0x7b0>  ; global constructors keyed to wlocale_inst.cc+0x7b0
086e08da +0x083a:  test   %al,%al
086e08dc +0x083c:  je     086e08ff <+0x85f>
086e08de +0x083e:  mov    %ebx,(%esp)
086e08e1 +0x0841:  call   0870be40 <_GLOBAL__I_wlocale_inst.cc+0xd50>  ; global constructors keyed to wlocale_inst.cc+0xd50
086e08e6 +0x0846:  mov    %eax,0x88(%esi)
086e08ec +0x084c:  add    $0x10,%esp
086e08ef +0x084f:  pop    %ebx
086e08f0 +0x0850:  pop    %esi
086e08f1 +0x0851:  pop    %ebp
086e08f2 +0x0852:  ret
086e08f3 +0x0853:  movl   $0x0,0x80(%esi)
086e08fd +0x085d:  jmp    086e08b8 <+0x818>
086e08ff +0x085f:  movl   $0x0,0x88(%esi)
086e0909 +0x0869:  jmp    086e08ec <+0x84c>
086e090b +0x086b:  movl   $0x0,0x84(%esi)
086e0915 +0x0875:  jmp    086e08d2 <+0x832>
086e0917 +0x0877:  nop
086e0918 +0x0878:  nop
086e0919 +0x0879:  nop
086e091a +0x087a:  nop
086e091b +0x087b:  nop
086e091c +0x087c:  nop
086e091d +0x087d:  nop
086e091e +0x087e:  nop
086e091f +0x087f:  nop
086e0920 +0x0880:  push   %ebp
086e0921 +0x0881:  mov    %esp,%ebp
086e0923 +0x0883:  sub    $0x18,%esp
086e0926 +0x0886:  mov    %ebx,-0x8(%ebp)
086e0929 +0x0889:  mov    0x8(%ebp),%ebx
086e092c +0x088c:  mov    %esi,-0x4(%ebp)
086e092f +0x088f:  mov    0xc(%ebp),%esi
086e0932 +0x0892:  mov    %ebx,(%esp)
086e0935 +0x0895:  call   087271d0 <_ZNSt8ios_base7_M_initEv>  ; std::ios_base::_M_init()
086e093a +0x089a:  lea    0x6c(%ebx),%eax
086e093d +0x089d:  mov    %eax,0x4(%esp)
086e0941 +0x08a1:  mov    %ebx,(%esp)
086e0944 +0x08a4:  call   086e0890 <+0x7f0>
086e0949 +0x08a9:  xor    %eax,%eax
086e094b +0x08ab:  test   %esi,%esi
086e094d +0x08ad:  sete   %al
086e0950 +0x08b0:  movl   $0x0,0x74(%ebx)
086e0957 +0x08b7:  movb   $0x0,0x78(%ebx)
086e095b +0x08bb:  movl   $0x0,0x70(%ebx)
086e0962 +0x08c2:  movl   $0x0,0x10(%ebx)
086e0969 +0x08c9:  mov    %esi,0x7c(%ebx)
086e096c +0x08cc:  mov    %eax,0x14(%ebx)
086e096f +0x08cf:  mov    -0x8(%ebp),%ebx
086e0972 +0x08d2:  mov    -0x4(%ebp),%esi
086e0975 +0x08d5:  mov    %ebp,%esp
086e0977 +0x08d7:  pop    %ebp
086e0978 +0x08d8:  ret
086e0979 +0x08d9:  nop
086e097a +0x08da:  nop
086e097b +0x08db:  nop
086e097c +0x08dc:  nop
086e097d +0x08dd:  nop
086e097e +0x08de:  nop
086e097f +0x08df:  nop
086e0980 +0x08e0:  push   %ebp
086e0981 +0x08e1:  mov    %esp,%ebp
086e0983 +0x08e3:  push   %ebx
086e0984 +0x08e4:  sub    $0x14,%esp
086e0987 +0x08e7:  mov    0x8(%ebp),%ebx
086e098a +0x08ea:  mov    %ebx,(%esp)
086e098d +0x08ed:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e0992 +0x08f2:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,(%ebx)
086e0998 +0x08f8:  movl   $0x0,0x70(%ebx)
086e099f +0x08ff:  movl   $0x0,0x74(%ebx)
086e09a6 +0x0906:  movb   $0x0,0x78(%ebx)
086e09aa +0x090a:  movl   $0x0,0x7c(%ebx)
086e09b1 +0x0911:  movl   $0x0,0x80(%ebx)
086e09bb +0x091b:  movl   $0x0,0x84(%ebx)
086e09c5 +0x0925:  movl   $0x0,0x88(%ebx)
086e09cf +0x092f:  add    $0x14,%esp
086e09d2 +0x0932:  pop    %ebx
086e09d3 +0x0933:  pop    %ebp
086e09d4 +0x0934:  ret
086e09d5 +0x0935:  nop
086e09d6 +0x0936:  nop
086e09d7 +0x0937:  nop
086e09d8 +0x0938:  nop
086e09d9 +0x0939:  nop
086e09da +0x093a:  nop
086e09db +0x093b:  nop
086e09dc +0x093c:  nop
086e09dd +0x093d:  nop
086e09de +0x093e:  nop
086e09df +0x093f:  nop
086e09e0 +0x0940:  push   %ebp
086e09e1 +0x0941:  mov    %esp,%ebp
086e09e3 +0x0943:  push   %ebx
086e09e4 +0x0944:  sub    $0x14,%esp
086e09e7 +0x0947:  mov    0x8(%ebp),%ebx
086e09ea +0x094a:  mov    %ebx,(%esp)
086e09ed +0x094d:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e09f2 +0x0952:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,(%ebx)
086e09f8 +0x0958:  movl   $0x0,0x70(%ebx)
086e09ff +0x095f:  movb   $0x0,0x74(%ebx)
086e0a03 +0x0963:  movb   $0x0,0x75(%ebx)
086e0a07 +0x0967:  movl   $0x0,0x78(%ebx)
086e0a0e +0x096e:  movl   $0x0,0x7c(%ebx)
086e0a15 +0x0975:  movl   $0x0,0x80(%ebx)
086e0a1f +0x097f:  movl   $0x0,0x84(%ebx)
086e0a29 +0x0989:  add    $0x14,%esp
086e0a2c +0x098c:  pop    %ebx
086e0a2d +0x098d:  pop    %ebp
086e0a2e +0x098e:  ret
086e0a2f +0x098f:  nop
086e0a30 +0x0990:  push   %ebp
086e0a31 +0x0991:  mov    %esp,%ebp
086e0a33 +0x0993:  sub    $0x8,%esp
086e0a36 +0x0996:  mov    0x8(%ebp),%eax
086e0a39 +0x0999:  movzbl 0xc(%ebp),%edx
086e0a3d +0x099d:  mov    0x80(%eax),%eax
086e0a43 +0x09a3:  test   %eax,%eax
086e0a45 +0x09a5:  je     086e0a58 <+0x9b8>
086e0a47 +0x09a7:  mov    (%eax),%ecx
086e0a49 +0x09a9:  movsbl %dl,%edx
086e0a4c +0x09ac:  mov    %edx,0xc(%ebp)
086e0a4f +0x09af:  mov    %eax,0x8(%ebp)
086e0a52 +0x09b2:  mov    0x28(%ecx),%eax
086e0a55 +0x09b5:  leave
086e0a56 +0x09b6:  jmp    *%eax
086e0a58 +0x09b8:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e0a5d +0x09bd:  nop
086e0a5e +0x09be:  nop
086e0a5f +0x09bf:  nop
086e0a60 +0x09c0:  push   %ebp
086e0a61 +0x09c1:  mov    %esp,%ebp
086e0a63 +0x09c3:  push   %ebx
086e0a64 +0x09c4:  sub    $0x4,%esp
086e0a67 +0x09c7:  mov    0x8(%ebp),%eax
086e0a6a +0x09ca:  mov    0xc(%ebp),%edx
086e0a6d +0x09cd:  movzbl 0x10(%ebp),%ecx
086e0a71 +0x09d1:  mov    0x80(%eax),%eax
086e0a77 +0x09d7:  test   %eax,%eax
086e0a79 +0x09d9:  je     086e0a93 <+0x9f3>
086e0a7b +0x09db:  mov    (%eax),%ebx
086e0a7d +0x09dd:  movsbl %cl,%ecx
086e0a80 +0x09e0:  mov    %ecx,0x10(%ebp)
086e0a83 +0x09e3:  mov    %edx,0xc(%ebp)
086e0a86 +0x09e6:  mov    %eax,0x8(%ebp)
086e0a89 +0x09e9:  mov    0x30(%ebx),%eax
086e0a8c +0x09ec:  add    $0x4,%esp
086e0a8f +0x09ef:  pop    %ebx
086e0a90 +0x09f0:  pop    %ebp
086e0a91 +0x09f1:  jmp    *%eax
086e0a93 +0x09f3:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e0a98 +0x09f8:  nop
086e0a99 +0x09f9:  nop
086e0a9a +0x09fa:  nop
086e0a9b +0x09fb:  nop
086e0a9c +0x09fc:  nop
086e0a9d +0x09fd:  nop
086e0a9e +0x09fe:  nop
086e0a9f +0x09ff:  nop
086e0aa0 +0x0a00:  push   %ebp
086e0aa1 +0x0a01:  mov    %esp,%ebp
086e0aa3 +0x0a03:  sub    $0x38,%esp
086e0aa6 +0x0a06:  mov    0x8(%ebp),%eax
086e0aa9 +0x0a09:  mov    %ebx,-0xc(%ebp)
086e0aac +0x0a0c:  movzbl 0xc(%ebp),%ecx
086e0ab0 +0x0a10:  mov    %esi,-0x8(%ebp)
086e0ab3 +0x0a13:  movzbl 0x10(%ebp),%edx
086e0ab7 +0x0a17:  mov    %edi,-0x4(%ebp)
086e0aba +0x0a1a:  mov    0x7c(%eax),%ebx
086e0abd +0x0a1d:  test   %ebx,%ebx
086e0abf +0x0a1f:  je     086e0b12 <+0xa72>
086e0ac1 +0x0a21:  movzbl %cl,%esi
086e0ac4 +0x0a24:  movzbl 0x11d(%ebx,%esi,1),%eax
086e0acc +0x0a2c:  test   %al,%al
086e0ace +0x0a2e:  je     086e0ae8 <+0xa48>
086e0ad0 +0x0a30:  mov    %eax,%edx
086e0ad2 +0x0a32:  mov    -0xc(%ebp),%ebx
086e0ad5 +0x0a35:  mov    %edx,%eax
086e0ad7 +0x0a37:  mov    -0x8(%ebp),%esi
086e0ada +0x0a3a:  mov    -0x4(%ebp),%edi
086e0add +0x0a3d:  mov    %ebp,%esp
086e0adf +0x0a3f:  pop    %ebp
086e0ae0 +0x0a40:  ret
086e0ae1 +0x0a41:  lea    0x0(%esi,%eiz,1),%esi
086e0ae8 +0x0a48:  mov    (%ebx),%eax
086e0aea +0x0a4a:  movsbl %dl,%edi
086e0aed +0x0a4d:  movsbl %cl,%ecx
086e0af0 +0x0a50:  mov    %dl,-0x1c(%ebp)
086e0af3 +0x0a53:  mov    %edi,0x8(%esp)
086e0af7 +0x0a57:  mov    %ecx,0x4(%esp)
086e0afb +0x0a5b:  mov    %ebx,(%esp)
086e0afe +0x0a5e:  call   *0x20(%eax)
086e0b01 +0x0a61:  movzbl -0x1c(%ebp),%edx
086e0b05 +0x0a65:  cmp    %al,%dl
086e0b07 +0x0a67:  je     086e0ad2 <+0xa32>
086e0b09 +0x0a69:  mov    %al,0x11d(%ebx,%esi,1)
086e0b10 +0x0a70:  jmp    086e0ad0 <+0xa30>
086e0b12 +0x0a72:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e0b17 +0x0a77:  nop
086e0b18 +0x0a78:  nop
086e0b19 +0x0a79:  nop
086e0b1a +0x0a7a:  nop
086e0b1b +0x0a7b:  nop
086e0b1c +0x0a7c:  nop
086e0b1d +0x0a7d:  nop
086e0b1e +0x0a7e:  nop
086e0b1f +0x0a7f:  nop
086e0b20 +0x0a80:  push   %ebp
086e0b21 +0x0a81:  mov    %esp,%ebp
086e0b23 +0x0a83:  sub    $0x48,%esp
086e0b26 +0x0a86:  mov    %ebx,-0xc(%ebp)
086e0b29 +0x0a89:  mov    0xc(%ebp),%ebx
086e0b2c +0x0a8c:  mov    %esi,-0x8(%ebp)
086e0b2f +0x0a8f:  mov    0x10(%ebp),%esi
086e0b32 +0x0a92:  mov    %edi,-0x4(%ebp)
086e0b35 +0x0a95:  lea    -0x1c(%ebp),%edi
086e0b38 +0x0a98:  lea    0x6c(%ebx),%eax
086e0b3b +0x0a9b:  mov    %eax,0x4(%esp)
086e0b3f +0x0a9f:  mov    0x8(%ebp),%eax
086e0b42 +0x0aa2:  mov    %eax,(%esp)
086e0b45 +0x0aa5:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
086e0b4a +0x0aaa:  mov    %esi,0x8(%esp)
086e0b4e +0x0aae:  mov    %ebx,0x4(%esp)
086e0b52 +0x0ab2:  mov    %edi,(%esp)
086e0b55 +0x0ab5:  call   08727170 <_ZNSt8ios_base5imbueERKSt6locale>  ; std::ios_base::imbue(std::locale const&)
086e0b5a +0x0aba:  sub    $0x4,%esp
086e0b5d +0x0abd:  mov    %edi,(%esp)
086e0b60 +0x0ac0:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e0b65 +0x0ac5:  mov    %esi,0x4(%esp)
086e0b69 +0x0ac9:  mov    %ebx,(%esp)
086e0b6c +0x0acc:  call   086e0890 <+0x7f0>
086e0b71 +0x0ad1:  mov    0x7c(%ebx),%eax
086e0b74 +0x0ad4:  test   %eax,%eax
086e0b76 +0x0ad6:  je     086e0bb0 <+0xb10>
086e0b78 +0x0ad8:  lea    0x1c(%eax),%edi
086e0b7b +0x0adb:  lea    -0x20(%ebp),%ebx
086e0b7e +0x0ade:  mov    %eax,-0x2c(%ebp)
086e0b81 +0x0ae1:  mov    %edi,0x4(%esp)
086e0b85 +0x0ae5:  mov    %ebx,(%esp)
086e0b88 +0x0ae8:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
086e0b8d +0x0aed:  mov    -0x2c(%ebp),%eax
086e0b90 +0x0af0:  mov    (%eax),%edx
086e0b92 +0x0af2:  mov    %esi,0x4(%esp)
086e0b96 +0x0af6:  mov    %eax,(%esp)
086e0b99 +0x0af9:  call   *0x8(%edx)
086e0b9c +0x0afc:  mov    %esi,0x4(%esp)
086e0ba0 +0x0b00:  mov    %edi,(%esp)
086e0ba3 +0x0b03:  call   086dba90 <_ZNSt6localeaSERKS_>  ; std::locale::operator=(std::locale const&)
086e0ba8 +0x0b08:  mov    %ebx,(%esp)
086e0bab +0x0b0b:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e0bb0 +0x0b10:  mov    0x8(%ebp),%eax
086e0bb3 +0x0b13:  mov    -0xc(%ebp),%ebx
086e0bb6 +0x0b16:  mov    -0x8(%ebp),%esi
086e0bb9 +0x0b19:  mov    -0x4(%ebp),%edi
086e0bbc +0x0b1c:  mov    %ebp,%esp
086e0bbe +0x0b1e:  pop    %ebp
086e0bbf +0x0b1f:  ret    $0x4
086e0bc2 +0x0b22:  mov    %eax,%esi
086e0bc4 +0x0b24:  mov    0x8(%ebp),%eax
086e0bc7 +0x0b27:  mov    %eax,(%esp)
086e0bca +0x0b2a:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e0bcf +0x0b2f:  mov    %esi,(%esp)
086e0bd2 +0x0b32:  call   08ae3750 <_Unwind_Resume>
086e0bd7 +0x0b37:  mov    %eax,%esi
086e0bd9 +0x0b39:  mov    %ebx,(%esp)
086e0bdc +0x0b3c:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e0be1 +0x0b41:  jmp    086e0bc4 <+0xb24>
086e0be3 +0x0b43:  nop
086e0be4 +0x0b44:  nop
086e0be5 +0x0b45:  nop
086e0be6 +0x0b46:  nop
086e0be7 +0x0b47:  nop
086e0be8 +0x0b48:  nop
086e0be9 +0x0b49:  nop
086e0bea +0x0b4a:  nop
086e0beb +0x0b4b:  nop
086e0bec +0x0b4c:  nop
086e0bed +0x0b4d:  nop
086e0bee +0x0b4e:  nop
086e0bef +0x0b4f:  nop
086e0bf0 +0x0b50:  push   %ebp
086e0bf1 +0x0b51:  mov    %esp,%ebp
086e0bf3 +0x0b53:  sub    $0x8,%esp
086e0bf6 +0x0b56:  mov    0x8(%ebp),%eax
086e0bf9 +0x0b59:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,(%eax)
086e0bff +0x0b5f:  leave
086e0c00 +0x0b60:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e0c05 +0x0b65:  nop
086e0c06 +0x0b66:  nop
086e0c07 +0x0b67:  nop
086e0c08 +0x0b68:  nop
086e0c09 +0x0b69:  nop
086e0c0a +0x0b6a:  nop
086e0c0b +0x0b6b:  nop
086e0c0c +0x0b6c:  nop
086e0c0d +0x0b6d:  nop
086e0c0e +0x0b6e:  nop
086e0c0f +0x0b6f:  nop
086e0c10 +0x0b70:  push   %ebp
086e0c11 +0x0b71:  mov    %esp,%ebp
086e0c13 +0x0b73:  sub    $0x8,%esp
086e0c16 +0x0b76:  mov    0x8(%ebp),%eax
086e0c19 +0x0b79:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,(%eax)
086e0c1f +0x0b7f:  leave
086e0c20 +0x0b80:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e0c25 +0x0b85:  nop
086e0c26 +0x0b86:  nop
086e0c27 +0x0b87:  nop
086e0c28 +0x0b88:  nop
086e0c29 +0x0b89:  nop
086e0c2a +0x0b8a:  nop
086e0c2b +0x0b8b:  nop
086e0c2c +0x0b8c:  nop
086e0c2d +0x0b8d:  nop
086e0c2e +0x0b8e:  nop
086e0c2f +0x0b8f:  nop
086e0c30 +0x0b90:  push   %ebp
086e0c31 +0x0b91:  mov    %esp,%ebp
086e0c33 +0x0b93:  push   %ebx
086e0c34 +0x0b94:  sub    $0x24,%esp
086e0c37 +0x0b97:  mov    0x8(%ebp),%ebx
086e0c3a +0x0b9a:  mov    %ebx,(%esp)
086e0c3d +0x0b9d:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e0c42 +0x0ba2:  mov    0xc(%ebp),%eax
086e0c45 +0x0ba5:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,(%ebx)
086e0c4b +0x0bab:  movl   $0x0,0x70(%ebx)
086e0c52 +0x0bb2:  movl   $0x0,0x74(%ebx)
086e0c59 +0x0bb9:  movb   $0x0,0x78(%ebx)
086e0c5d +0x0bbd:  movl   $0x0,0x7c(%ebx)
086e0c64 +0x0bc4:  movl   $0x0,0x80(%ebx)
086e0c6e +0x0bce:  movl   $0x0,0x84(%ebx)
086e0c78 +0x0bd8:  movl   $0x0,0x88(%ebx)
086e0c82 +0x0be2:  mov    %eax,0x4(%esp)
086e0c86 +0x0be6:  mov    %ebx,(%esp)
086e0c89 +0x0be9:  call   086e0920 <+0x880>
086e0c8e +0x0bee:  add    $0x24,%esp
086e0c91 +0x0bf1:  pop    %ebx
086e0c92 +0x0bf2:  pop    %ebp
086e0c93 +0x0bf3:  ret
086e0c94 +0x0bf4:  mov    %eax,-0xc(%ebp)
086e0c97 +0x0bf7:  mov    %ebx,(%esp)
086e0c9a +0x0bfa:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e0c9f +0x0bff:  mov    -0xc(%ebp),%eax
086e0ca2 +0x0c02:  mov    %eax,(%esp)
086e0ca5 +0x0c05:  call   08ae3750 <_Unwind_Resume>
086e0caa +0x0c0a:  nop
086e0cab +0x0c0b:  nop
086e0cac +0x0c0c:  nop
086e0cad +0x0c0d:  nop
086e0cae +0x0c0e:  nop
086e0caf +0x0c0f:  nop
086e0cb0 +0x0c10:  push   %ebp
086e0cb1 +0x0c11:  mov    %esp,%ebp
086e0cb3 +0x0c13:  sub    $0x8,%esp
086e0cb6 +0x0c16:  mov    0x8(%ebp),%eax
086e0cb9 +0x0c19:  mov    0xc(%ebp),%edx
086e0cbc +0x0c1c:  or     %edx,0x14(%eax)
086e0cbf +0x0c1f:  test   %edx,0x10(%eax)
086e0cc2 +0x0c22:  jne    086e0cc6 <+0xc26>
086e0cc4 +0x0c24:  leave
086e0cc5 +0x0c25:  ret
086e0cc6 +0x0c26:  call   08724be0 <__cxa_rethrow>
086e0ccb +0x0c2b:  nop
086e0ccc +0x0c2c:  nop
086e0ccd +0x0c2d:  nop
086e0cce +0x0c2e:  nop
086e0ccf +0x0c2f:  nop
086e0cd0 +0x0c30:  push   %ebp
086e0cd1 +0x0c31:  mov    %esp,%ebp
086e0cd3 +0x0c33:  sub    $0x8,%esp
086e0cd6 +0x0c36:  mov    0x8(%ebp),%eax
086e0cd9 +0x0c39:  mov    0xc(%ebp),%edx
086e0cdc +0x0c3c:  or     %edx,0x14(%eax)
086e0cdf +0x0c3f:  test   %edx,0x10(%eax)
086e0ce2 +0x0c42:  jne    086e0ce6 <+0xc46>
086e0ce4 +0x0c44:  leave
086e0ce5 +0x0c45:  ret
086e0ce6 +0x0c46:  call   08724be0 <__cxa_rethrow>
086e0ceb +0x0c4b:  nop
086e0cec +0x0c4c:  nop
086e0ced +0x0c4d:  nop
086e0cee +0x0c4e:  nop
086e0cef +0x0c4f:  nop
086e0cf0 +0x0c50:  push   %ebp
086e0cf1 +0x0c51:  mov    %esp,%ebp
086e0cf3 +0x0c53:  sub    $0x18,%esp
086e0cf6 +0x0c56:  mov    0x8(%ebp),%eax
086e0cf9 +0x0c59:  mov    0xc(%ebp),%edx
086e0cfc +0x0c5c:  mov    0x7c(%eax),%ecx
086e0cff +0x0c5f:  test   %ecx,%ecx
086e0d01 +0x0c61:  je     086e0d10 <+0xc70>
086e0d03 +0x0c63:  test   %edx,0x10(%eax)
086e0d06 +0x0c66:  mov    %edx,0x14(%eax)
086e0d09 +0x0c69:  jne    086e0d15 <+0xc75>
086e0d0b +0x0c6b:  leave
086e0d0c +0x0c6c:  ret
086e0d0d +0x0c6d:  lea    0x0(%esi),%esi
086e0d10 +0x0c70:  or     $0x1,%edx
086e0d13 +0x0c73:  jmp    086e0d03 <+0xc63>
086e0d15 +0x0c75:  movl   $"basic_ios::clear",(%esp)
086e0d1c +0x0c7c:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
086e0d21 +0x0c81:  nop
086e0d22 +0x0c82:  nop
086e0d23 +0x0c83:  nop
086e0d24 +0x0c84:  nop
086e0d25 +0x0c85:  nop
086e0d26 +0x0c86:  nop
086e0d27 +0x0c87:  nop
086e0d28 +0x0c88:  nop
086e0d29 +0x0c89:  nop
086e0d2a +0x0c8a:  nop
086e0d2b +0x0c8b:  nop
086e0d2c +0x0c8c:  nop
086e0d2d +0x0c8d:  nop
086e0d2e +0x0c8e:  nop
086e0d2f +0x0c8f:  nop
086e0d30 +0x0c90:  push   %ebp
086e0d31 +0x0c91:  mov    %esp,%ebp
086e0d33 +0x0c93:  push   %ebx
086e0d34 +0x0c94:  sub    $0x14,%esp
086e0d37 +0x0c97:  mov    0x8(%ebp),%edx
086e0d3a +0x0c9a:  mov    0xc(%ebp),%eax
086e0d3d +0x0c9d:  mov    0x7c(%edx),%ebx
086e0d40 +0x0ca0:  mov    %eax,0x7c(%edx)
086e0d43 +0x0ca3:  movl   $0x0,0x4(%esp)
086e0d4b +0x0cab:  mov    %edx,(%esp)
086e0d4e +0x0cae:  call   086e0cf0 <+0xc50>
086e0d53 +0x0cb3:  mov    %ebx,%eax
086e0d55 +0x0cb5:  add    $0x14,%esp
086e0d58 +0x0cb8:  pop    %ebx
086e0d59 +0x0cb9:  pop    %ebp
086e0d5a +0x0cba:  ret
086e0d5b +0x0cbb:  nop
086e0d5c +0x0cbc:  nop
086e0d5d +0x0cbd:  nop
086e0d5e +0x0cbe:  nop
086e0d5f +0x0cbf:  nop
086e0d60 +0x0cc0:  push   %ebp
086e0d61 +0x0cc1:  mov    %esp,%ebp
086e0d63 +0x0cc3:  sub    $0x8,%esp
086e0d66 +0x0cc6:  mov    0xc(%ebp),%edx
086e0d69 +0x0cc9:  mov    0x8(%ebp),%eax
086e0d6c +0x0ccc:  mov    %edx,0x10(%eax)
086e0d6f +0x0ccf:  mov    0x14(%eax),%edx
086e0d72 +0x0cd2:  mov    %edx,0xc(%ebp)
086e0d75 +0x0cd5:  leave
086e0d76 +0x0cd6:  jmp    086e0cf0 <+0xc50>
086e0d7b +0x0cdb:  nop
086e0d7c +0x0cdc:  nop
086e0d7d +0x0cdd:  nop
086e0d7e +0x0cde:  nop
086e0d7f +0x0cdf:  nop
086e0d80 +0x0ce0:  push   %ebp
086e0d81 +0x0ce1:  mov    %esp,%ebp
086e0d83 +0x0ce3:  sub    $0x8,%esp
086e0d86 +0x0ce6:  mov    0x8(%ebp),%edx
086e0d89 +0x0ce9:  mov    0xc(%ebp),%eax
086e0d8c +0x0cec:  or     0x14(%edx),%eax
086e0d8f +0x0cef:  mov    %eax,0xc(%ebp)
086e0d92 +0x0cf2:  leave
086e0d93 +0x0cf3:  jmp    086e0cf0 <+0xc50>
086e0d98 +0x0cf8:  nop
086e0d99 +0x0cf9:  nop
086e0d9a +0x0cfa:  nop
086e0d9b +0x0cfb:  nop
086e0d9c +0x0cfc:  nop
086e0d9d +0x0cfd:  nop
086e0d9e +0x0cfe:  nop
086e0d9f +0x0cff:  nop
086e0da0 +0x0d00:  push   %ebp
086e0da1 +0x0d01:  mov    %esp,%ebp
086e0da3 +0x0d03:  sub    $0x18,%esp
086e0da6 +0x0d06:  mov    0x8(%ebp),%eax
086e0da9 +0x0d09:  mov    0xc(%ebp),%edx
086e0dac +0x0d0c:  mov    0x78(%eax),%ecx
086e0daf +0x0d0f:  test   %ecx,%ecx
086e0db1 +0x0d11:  je     086e0dc0 <+0xd20>
086e0db3 +0x0d13:  test   %edx,0x10(%eax)
086e0db6 +0x0d16:  mov    %edx,0x14(%eax)
086e0db9 +0x0d19:  jne    086e0dc5 <+0xd25>
086e0dbb +0x0d1b:  leave
086e0dbc +0x0d1c:  ret
086e0dbd +0x0d1d:  lea    0x0(%esi),%esi
086e0dc0 +0x0d20:  or     $0x1,%edx
086e0dc3 +0x0d23:  jmp    086e0db3 <+0xd13>
086e0dc5 +0x0d25:  movl   $"basic_ios::clear",(%esp)
086e0dcc +0x0d2c:  call   086d9780 <_ZSt19__throw_ios_failurePKc>  ; std::__throw_ios_failure(char const*)
086e0dd1 +0x0d31:  nop
086e0dd2 +0x0d32:  nop
086e0dd3 +0x0d33:  nop
086e0dd4 +0x0d34:  nop
086e0dd5 +0x0d35:  nop
086e0dd6 +0x0d36:  nop
086e0dd7 +0x0d37:  nop
086e0dd8 +0x0d38:  nop
086e0dd9 +0x0d39:  nop
086e0dda +0x0d3a:  nop
086e0ddb +0x0d3b:  nop
086e0ddc +0x0d3c:  nop
086e0ddd +0x0d3d:  nop
086e0dde +0x0d3e:  nop
086e0ddf +0x0d3f:  nop
086e0de0 +0x0d40:  push   %ebp
086e0de1 +0x0d41:  mov    %esp,%ebp
086e0de3 +0x0d43:  push   %ebx
086e0de4 +0x0d44:  sub    $0x14,%esp
086e0de7 +0x0d47:  mov    0x8(%ebp),%edx
086e0dea +0x0d4a:  mov    0xc(%ebp),%eax
086e0ded +0x0d4d:  mov    0x78(%edx),%ebx
086e0df0 +0x0d50:  mov    %eax,0x78(%edx)
086e0df3 +0x0d53:  movl   $0x0,0x4(%esp)
086e0dfb +0x0d5b:  mov    %edx,(%esp)
086e0dfe +0x0d5e:  call   086e0da0 <+0xd00>
086e0e03 +0x0d63:  mov    %ebx,%eax
086e0e05 +0x0d65:  add    $0x14,%esp
086e0e08 +0x0d68:  pop    %ebx
086e0e09 +0x0d69:  pop    %ebp
086e0e0a +0x0d6a:  ret
086e0e0b +0x0d6b:  nop
086e0e0c +0x0d6c:  nop
086e0e0d +0x0d6d:  nop
086e0e0e +0x0d6e:  nop
086e0e0f +0x0d6f:  nop
086e0e10 +0x0d70:  push   %ebp
086e0e11 +0x0d71:  mov    %esp,%ebp
086e0e13 +0x0d73:  sub    $0x8,%esp
086e0e16 +0x0d76:  mov    0xc(%ebp),%edx
086e0e19 +0x0d79:  mov    0x8(%ebp),%eax
086e0e1c +0x0d7c:  mov    %edx,0x10(%eax)
086e0e1f +0x0d7f:  mov    0x14(%eax),%edx
086e0e22 +0x0d82:  mov    %edx,0xc(%ebp)
086e0e25 +0x0d85:  leave
086e0e26 +0x0d86:  jmp    086e0da0 <+0xd00>
086e0e2b +0x0d8b:  nop
086e0e2c +0x0d8c:  nop
086e0e2d +0x0d8d:  nop
086e0e2e +0x0d8e:  nop
086e0e2f +0x0d8f:  nop
086e0e30 +0x0d90:  push   %ebp
086e0e31 +0x0d91:  mov    %esp,%ebp
086e0e33 +0x0d93:  sub    $0x8,%esp
086e0e36 +0x0d96:  mov    0x8(%ebp),%edx
086e0e39 +0x0d99:  mov    0xc(%ebp),%eax
086e0e3c +0x0d9c:  or     0x14(%edx),%eax
086e0e3f +0x0d9f:  mov    %eax,0xc(%ebp)
086e0e42 +0x0da2:  leave
086e0e43 +0x0da3:  jmp    086e0da0 <+0xd00>
086e0e48 +0x0da8:  nop
086e0e49 +0x0da9:  nop
086e0e4a +0x0daa:  nop
086e0e4b +0x0dab:  nop
086e0e4c +0x0dac:  nop
086e0e4d +0x0dad:  nop
086e0e4e +0x0dae:  nop
086e0e4f +0x0daf:  nop
086e0e50 +0x0db0:  push   %ebp
086e0e51 +0x0db1:  mov    %esp,%ebp
086e0e53 +0x0db3:  push   %esi
086e0e54 +0x0db4:  push   %ebx
086e0e55 +0x0db5:  sub    $0x10,%esp
086e0e58 +0x0db8:  mov    0xc(%ebp),%ebx
086e0e5b +0x0dbb:  mov    0x8(%ebp),%esi
086e0e5e +0x0dbe:  mov    %ebx,(%esp)
086e0e61 +0x0dc1:  call   086ead70 <_GLOBAL__I_locale_inst.cc+0xa30>  ; global constructors keyed to locale_inst.cc+0xa30
086e0e66 +0x0dc6:  test   %al,%al
086e0e68 +0x0dc8:  je     086e0eb0 <+0xe10>
086e0e6a +0x0dca:  mov    %ebx,(%esp)
086e0e6d +0x0dcd:  call   086eb2c0 <_GLOBAL__I_locale_inst.cc+0xf80>  ; global constructors keyed to locale_inst.cc+0xf80
086e0e72 +0x0dd2:  mov    %eax,0x7c(%esi)
086e0e75 +0x0dd5:  mov    %ebx,(%esp)
086e0e78 +0x0dd8:  call   086eabb0 <_GLOBAL__I_locale_inst.cc+0x870>  ; global constructors keyed to locale_inst.cc+0x870
086e0e7d +0x0ddd:  test   %al,%al
086e0e7f +0x0ddf:  je     086e0ec5 <+0xe25>
086e0e81 +0x0de1:  mov    %ebx,(%esp)
086e0e84 +0x0de4:  call   086eb140 <_GLOBAL__I_locale_inst.cc+0xe00>  ; global constructors keyed to locale_inst.cc+0xe00
086e0e89 +0x0de9:  mov    %eax,0x80(%esi)
086e0e8f +0x0def:  mov    %ebx,(%esp)
086e0e92 +0x0df2:  call   086eab40 <_GLOBAL__I_locale_inst.cc+0x800>  ; global constructors keyed to locale_inst.cc+0x800
086e0e97 +0x0df7:  test   %al,%al
086e0e99 +0x0df9:  je     086e0eb9 <+0xe19>
086e0e9b +0x0dfb:  mov    %ebx,(%esp)
086e0e9e +0x0dfe:  call   086eb0e0 <_GLOBAL__I_locale_inst.cc+0xda0>  ; global constructors keyed to locale_inst.cc+0xda0
086e0ea3 +0x0e03:  mov    %eax,0x84(%esi)
086e0ea9 +0x0e09:  add    $0x10,%esp
086e0eac +0x0e0c:  pop    %ebx
086e0ead +0x0e0d:  pop    %esi
086e0eae +0x0e0e:  pop    %ebp
086e0eaf +0x0e0f:  ret
086e0eb0 +0x0e10:  movl   $0x0,0x7c(%esi)
086e0eb7 +0x0e17:  jmp    086e0e75 <+0xdd5>
086e0eb9 +0x0e19:  movl   $0x0,0x84(%esi)
086e0ec3 +0x0e23:  jmp    086e0ea9 <+0xe09>
086e0ec5 +0x0e25:  movl   $0x0,0x80(%esi)
086e0ecf +0x0e2f:  jmp    086e0e8f <+0xdef>
086e0ed1 +0x0e31:  nop
086e0ed2 +0x0e32:  nop
086e0ed3 +0x0e33:  nop
086e0ed4 +0x0e34:  nop
086e0ed5 +0x0e35:  nop
086e0ed6 +0x0e36:  nop
086e0ed7 +0x0e37:  nop
086e0ed8 +0x0e38:  nop
086e0ed9 +0x0e39:  nop
086e0eda +0x0e3a:  nop
086e0edb +0x0e3b:  nop
086e0edc +0x0e3c:  nop
086e0edd +0x0e3d:  nop
086e0ede +0x0e3e:  nop
086e0edf +0x0e3f:  nop
086e0ee0 +0x0e40:  push   %ebp
086e0ee1 +0x0e41:  mov    %esp,%ebp
086e0ee3 +0x0e43:  sub    $0x18,%esp
086e0ee6 +0x0e46:  mov    %ebx,-0x8(%ebp)
086e0ee9 +0x0e49:  mov    0x8(%ebp),%ebx
086e0eec +0x0e4c:  mov    %esi,-0x4(%ebp)
086e0eef +0x0e4f:  mov    0xc(%ebp),%esi
086e0ef2 +0x0e52:  mov    %ebx,(%esp)
086e0ef5 +0x0e55:  call   087271d0 <_ZNSt8ios_base7_M_initEv>  ; std::ios_base::_M_init()
086e0efa +0x0e5a:  lea    0x6c(%ebx),%eax
086e0efd +0x0e5d:  mov    %eax,0x4(%esp)
086e0f01 +0x0e61:  mov    %ebx,(%esp)
086e0f04 +0x0e64:  call   086e0e50 <+0xdb0>
086e0f09 +0x0e69:  xor    %eax,%eax
086e0f0b +0x0e6b:  test   %esi,%esi
086e0f0d +0x0e6d:  sete   %al
086e0f10 +0x0e70:  movb   $0x0,0x74(%ebx)
086e0f14 +0x0e74:  movb   $0x0,0x75(%ebx)
086e0f18 +0x0e78:  movl   $0x0,0x70(%ebx)
086e0f1f +0x0e7f:  movl   $0x0,0x10(%ebx)
086e0f26 +0x0e86:  mov    %esi,0x78(%ebx)
086e0f29 +0x0e89:  mov    %eax,0x14(%ebx)
086e0f2c +0x0e8c:  mov    -0x8(%ebp),%ebx
086e0f2f +0x0e8f:  mov    -0x4(%ebp),%esi
086e0f32 +0x0e92:  mov    %ebp,%esp
086e0f34 +0x0e94:  pop    %ebp
086e0f35 +0x0e95:  ret
086e0f36 +0x0e96:  nop
086e0f37 +0x0e97:  nop
086e0f38 +0x0e98:  nop
086e0f39 +0x0e99:  nop
086e0f3a +0x0e9a:  nop
086e0f3b +0x0e9b:  nop
086e0f3c +0x0e9c:  nop
086e0f3d +0x0e9d:  nop
086e0f3e +0x0e9e:  nop
086e0f3f +0x0e9f:  nop
086e0f40 +0x0ea0:  push   %ebp
086e0f41 +0x0ea1:  mov    %esp,%ebp
086e0f43 +0x0ea3:  push   %ebx
086e0f44 +0x0ea4:  sub    $0x24,%esp
086e0f47 +0x0ea7:  mov    0x8(%ebp),%ebx
086e0f4a +0x0eaa:  mov    %ebx,(%esp)
086e0f4d +0x0ead:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e0f52 +0x0eb2:  movb   $0x0,0x74(%ebx)
086e0f56 +0x0eb6:  mov    0xc(%ebp),%eax
086e0f59 +0x0eb9:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,(%ebx)
086e0f5f +0x0ebf:  movl   $0x0,0x70(%ebx)
086e0f66 +0x0ec6:  movb   $0x0,0x75(%ebx)
086e0f6a +0x0eca:  movl   $0x0,0x78(%ebx)
086e0f71 +0x0ed1:  movl   $0x0,0x7c(%ebx)
086e0f78 +0x0ed8:  movl   $0x0,0x80(%ebx)
086e0f82 +0x0ee2:  movl   $0x0,0x84(%ebx)
086e0f8c +0x0eec:  mov    %eax,0x4(%esp)
086e0f90 +0x0ef0:  mov    %ebx,(%esp)
086e0f93 +0x0ef3:  call   086e0ee0 <+0xe40>
086e0f98 +0x0ef8:  add    $0x24,%esp
086e0f9b +0x0efb:  pop    %ebx
086e0f9c +0x0efc:  pop    %ebp
086e0f9d +0x0efd:  ret
086e0f9e +0x0efe:  mov    %eax,-0xc(%ebp)
086e0fa1 +0x0f01:  mov    %ebx,(%esp)
086e0fa4 +0x0f04:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e0fa9 +0x0f09:  mov    -0xc(%ebp),%eax
086e0fac +0x0f0c:  mov    %eax,(%esp)
086e0faf +0x0f0f:  call   08ae3750 <_Unwind_Resume>
086e0fb4 +0x0f14:  nop
086e0fb5 +0x0f15:  nop
086e0fb6 +0x0f16:  nop
086e0fb7 +0x0f17:  nop
086e0fb8 +0x0f18:  nop
086e0fb9 +0x0f19:  nop
086e0fba +0x0f1a:  nop
086e0fbb +0x0f1b:  nop
086e0fbc +0x0f1c:  nop
086e0fbd +0x0f1d:  nop
086e0fbe +0x0f1e:  nop
086e0fbf +0x0f1f:  nop
086e0fc0 +0x0f20:  push   %ebp
086e0fc1 +0x0f21:  mov    %esp,%ebp
086e0fc3 +0x0f23:  sub    $0x48,%esp
086e0fc6 +0x0f26:  mov    %ebx,-0xc(%ebp)
086e0fc9 +0x0f29:  mov    0xc(%ebp),%ebx
086e0fcc +0x0f2c:  mov    %esi,-0x8(%ebp)
086e0fcf +0x0f2f:  mov    0x10(%ebp),%esi
086e0fd2 +0x0f32:  mov    %edi,-0x4(%ebp)
086e0fd5 +0x0f35:  lea    -0x1c(%ebp),%edi
086e0fd8 +0x0f38:  lea    0x6c(%ebx),%eax
086e0fdb +0x0f3b:  mov    %eax,0x4(%esp)
086e0fdf +0x0f3f:  mov    0x8(%ebp),%eax
086e0fe2 +0x0f42:  mov    %eax,(%esp)
086e0fe5 +0x0f45:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
086e0fea +0x0f4a:  mov    %esi,0x8(%esp)
086e0fee +0x0f4e:  mov    %ebx,0x4(%esp)
086e0ff2 +0x0f52:  mov    %edi,(%esp)
086e0ff5 +0x0f55:  call   08727170 <_ZNSt8ios_base5imbueERKSt6locale>  ; std::ios_base::imbue(std::locale const&)
086e0ffa +0x0f5a:  sub    $0x4,%esp
086e0ffd +0x0f5d:  mov    %edi,(%esp)
086e1000 +0x0f60:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e1005 +0x0f65:  mov    %esi,0x4(%esp)
086e1009 +0x0f69:  mov    %ebx,(%esp)
086e100c +0x0f6c:  call   086e0e50 <+0xdb0>
086e1011 +0x0f71:  mov    0x78(%ebx),%eax
086e1014 +0x0f74:  test   %eax,%eax
086e1016 +0x0f76:  je     086e1050 <+0xfb0>
086e1018 +0x0f78:  lea    0x1c(%eax),%edi
086e101b +0x0f7b:  lea    -0x20(%ebp),%ebx
086e101e +0x0f7e:  mov    %eax,-0x2c(%ebp)
086e1021 +0x0f81:  mov    %edi,0x4(%esp)
086e1025 +0x0f85:  mov    %ebx,(%esp)
086e1028 +0x0f88:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
086e102d +0x0f8d:  mov    -0x2c(%ebp),%eax
086e1030 +0x0f90:  mov    (%eax),%edx
086e1032 +0x0f92:  mov    %esi,0x4(%esp)
086e1036 +0x0f96:  mov    %eax,(%esp)
086e1039 +0x0f99:  call   *0x8(%edx)
086e103c +0x0f9c:  mov    %esi,0x4(%esp)
086e1040 +0x0fa0:  mov    %edi,(%esp)
086e1043 +0x0fa3:  call   086dba90 <_ZNSt6localeaSERKS_>  ; std::locale::operator=(std::locale const&)
086e1048 +0x0fa8:  mov    %ebx,(%esp)
086e104b +0x0fab:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e1050 +0x0fb0:  mov    0x8(%ebp),%eax
086e1053 +0x0fb3:  mov    -0xc(%ebp),%ebx
086e1056 +0x0fb6:  mov    -0x8(%ebp),%esi
086e1059 +0x0fb9:  mov    -0x4(%ebp),%edi
086e105c +0x0fbc:  mov    %ebp,%esp
086e105e +0x0fbe:  pop    %ebp
086e105f +0x0fbf:  ret    $0x4
086e1062 +0x0fc2:  mov    %eax,%esi
086e1064 +0x0fc4:  mov    0x8(%ebp),%eax
086e1067 +0x0fc7:  mov    %eax,(%esp)
086e106a +0x0fca:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e106f +0x0fcf:  mov    %esi,(%esp)
086e1072 +0x0fd2:  call   08ae3750 <_Unwind_Resume>
086e1077 +0x0fd7:  mov    %eax,%esi
086e1079 +0x0fd9:  mov    %ebx,(%esp)
086e107c +0x0fdc:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e1081 +0x0fe1:  jmp    086e1064 <+0xfc4>
086e1083 +0x0fe3:  nop
086e1084 +0x0fe4:  nop
086e1085 +0x0fe5:  nop
086e1086 +0x0fe6:  nop
086e1087 +0x0fe7:  nop
086e1088 +0x0fe8:  nop
086e1089 +0x0fe9:  nop
086e108a +0x0fea:  nop
086e108b +0x0feb:  nop
086e108c +0x0fec:  nop
086e108d +0x0fed:  nop
086e108e +0x0fee:  nop
086e108f +0x0fef:  nop
086e1090 +0x0ff0:  push   %ebp
086e1091 +0x0ff1:  mov    %esp,%ebp
086e1093 +0x0ff3:  sub    $0x18,%esp
086e1096 +0x0ff6:  mov    0x8(%ebp),%eax
086e1099 +0x0ff9:  mov    %esi,-0x4(%ebp)
086e109c +0x0ffc:  movzbl 0xc(%ebp),%esi
086e10a0 +0x1000:  mov    %ebx,-0x8(%ebp)
086e10a3 +0x1003:  mov    0x7c(%eax),%ebx
086e10a6 +0x1006:  test   %ebx,%ebx
086e10a8 +0x1008:  je     086e10eb <+0x104b>
086e10aa +0x100a:  cmpb   $0x0,0x1c(%ebx)
086e10ae +0x100e:  je     086e10c8 <+0x1028>
086e10b0 +0x1010:  and    $0xff,%esi
086e10b6 +0x1016:  movzbl 0x1d(%ebx,%esi,1),%eax
086e10bb +0x101b:  mov    -0x8(%ebp),%ebx
086e10be +0x101e:  mov    -0x4(%ebp),%esi
086e10c1 +0x1021:  mov    %ebp,%esp
086e10c3 +0x1023:  pop    %ebp
086e10c4 +0x1024:  ret
086e10c5 +0x1025:  lea    0x0(%esi),%esi
086e10c8 +0x1028:  mov    %ebx,(%esp)
086e10cb +0x102b:  call   087269c0 <_ZNKSt5ctypeIcE13_M_widen_initEv>  ; std::ctype<char>::_M_widen_init() const
086e10d0 +0x1030:  mov    (%ebx),%eax
086e10d2 +0x1032:  mov    %esi,%edx
086e10d4 +0x1034:  movsbl %dl,%esi
086e10d7 +0x1037:  mov    %esi,0xc(%ebp)
086e10da +0x103a:  mov    -0x4(%ebp),%esi
086e10dd +0x103d:  mov    %ebx,0x8(%ebp)
086e10e0 +0x1040:  mov    -0x8(%ebp),%ebx
086e10e3 +0x1043:  mov    0x18(%eax),%eax
086e10e6 +0x1046:  mov    %ebp,%esp
086e10e8 +0x1048:  pop    %ebp
086e10e9 +0x1049:  jmp    *%eax
086e10eb +0x104b:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e10f0 +0x1050:  push   %ebp
086e10f1 +0x1051:  mov    %esp,%ebp
086e10f3 +0x1053:  push   %ebx
086e10f4 +0x1054:  sub    $0x14,%esp
086e10f7 +0x1057:  mov    0x8(%ebp),%ebx
086e10fa +0x105a:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,(%ebx)
086e1100 +0x1060:  mov    %ebx,(%esp)
086e1103 +0x1063:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e1108 +0x1068:  mov    %ebx,0x8(%ebp)
086e110b +0x106b:  add    $0x14,%esp
086e110e +0x106e:  pop    %ebx
086e110f +0x106f:  pop    %ebp
086e1110 +0x1070:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086e1115 +0x1075:  nop
086e1116 +0x1076:  nop
086e1117 +0x1077:  nop
086e1118 +0x1078:  nop
086e1119 +0x1079:  nop
086e111a +0x107a:  nop
086e111b +0x107b:  nop
086e111c +0x107c:  nop
086e111d +0x107d:  nop
086e111e +0x107e:  nop
086e111f +0x107f:  nop
086e1120 +0x1080:  push   %ebp
086e1121 +0x1081:  mov    %esp,%ebp
086e1123 +0x1083:  push   %ebx
086e1124 +0x1084:  sub    $0x14,%esp
086e1127 +0x1087:  mov    0x8(%ebp),%ebx
086e112a +0x108a:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,(%ebx)
086e1130 +0x1090:  mov    %ebx,(%esp)
086e1133 +0x1093:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e1138 +0x1098:  mov    %ebx,0x8(%ebp)
086e113b +0x109b:  add    $0x14,%esp
086e113e +0x109e:  pop    %ebx
086e113f +0x109f:  pop    %ebp
086e1140 +0x10a0:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086e1145 +0x10a5:  nop
086e1146 +0x10a6:  nop
086e1147 +0x10a7:  nop
086e1148 +0x10a8:  nop
086e1149 +0x10a9:  nop
086e114a +0x10aa:  nop
086e114b +0x10ab:  nop
086e114c +0x10ac:  nop
086e114d +0x10ad:  nop
086e114e +0x10ae:  nop
086e114f +0x10af:  nop
086e1150 +0x10b0:  push   %ebp
086e1151 +0x10b1:  mov    %esp,%ebp
086e1153 +0x10b3:  push   %ebx
086e1154 +0x10b4:  sub    $0x14,%esp
086e1157 +0x10b7:  mov    0x8(%ebp),%ebx
086e115a +0x10ba:  cmpb   $0x0,0x78(%ebx)
086e115e +0x10be:  je     086e1170 <+0x10d0>
086e1160 +0x10c0:  mov    0x74(%ebx),%eax
086e1163 +0x10c3:  add    $0x14,%esp
086e1166 +0x10c6:  pop    %ebx
086e1167 +0x10c7:  pop    %ebp
086e1168 +0x10c8:  ret
086e1169 +0x10c9:  lea    0x0(%esi,%eiz,1),%esi
086e1170 +0x10d0:  mov    0x80(%ebx),%eax
086e1176 +0x10d6:  test   %eax,%eax
086e1178 +0x10d8:  je     086e1197 <+0x10f7>
086e117a +0x10da:  mov    (%eax),%edx
086e117c +0x10dc:  movl   $0x20,0x4(%esp)
086e1184 +0x10e4:  mov    %eax,(%esp)
086e1187 +0x10e7:  call   *0x28(%edx)
086e118a +0x10ea:  movb   $0x1,0x78(%ebx)
086e118e +0x10ee:  mov    %eax,0x74(%ebx)
086e1191 +0x10f1:  add    $0x14,%esp
086e1194 +0x10f4:  pop    %ebx
086e1195 +0x10f5:  pop    %ebp
086e1196 +0x10f6:  ret
086e1197 +0x10f7:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e119c +0x10fc:  nop
086e119d +0x10fd:  nop
086e119e +0x10fe:  nop
086e119f +0x10ff:  nop
086e11a0 +0x1100:  push   %ebp
086e11a1 +0x1101:  mov    %esp,%ebp
086e11a3 +0x1103:  push   %ebx
086e11a4 +0x1104:  sub    $0x14,%esp
086e11a7 +0x1107:  mov    0x8(%ebp),%ebx
086e11aa +0x110a:  cmpb   $0x0,0x78(%ebx)
086e11ae +0x110e:  je     086e11c0 <+0x1120>
086e11b0 +0x1110:  mov    0xc(%ebp),%edx
086e11b3 +0x1113:  mov    0x74(%ebx),%eax
086e11b6 +0x1116:  mov    %edx,0x74(%ebx)
086e11b9 +0x1119:  add    $0x14,%esp
086e11bc +0x111c:  pop    %ebx
086e11bd +0x111d:  pop    %ebp
086e11be +0x111e:  ret
086e11bf +0x111f:  nop
086e11c0 +0x1120:  mov    0x80(%ebx),%eax
086e11c6 +0x1126:  test   %eax,%eax
086e11c8 +0x1128:  je     086e11ed <+0x114d>
086e11ca +0x112a:  mov    (%eax),%edx
086e11cc +0x112c:  movl   $0x20,0x4(%esp)
086e11d4 +0x1134:  mov    %eax,(%esp)
086e11d7 +0x1137:  call   *0x28(%edx)
086e11da +0x113a:  mov    0xc(%ebp),%edx
086e11dd +0x113d:  movb   $0x1,0x78(%ebx)
086e11e1 +0x1141:  mov    %eax,0x74(%ebx)
086e11e4 +0x1144:  mov    %edx,0x74(%ebx)
086e11e7 +0x1147:  add    $0x14,%esp
086e11ea +0x114a:  pop    %ebx
086e11eb +0x114b:  pop    %ebp
086e11ec +0x114c:  ret
086e11ed +0x114d:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e11f2 +0x1152:  nop
086e11f3 +0x1153:  nop
086e11f4 +0x1154:  nop
086e11f5 +0x1155:  nop
086e11f6 +0x1156:  nop
086e11f7 +0x1157:  nop
086e11f8 +0x1158:  nop
086e11f9 +0x1159:  nop
086e11fa +0x115a:  nop
086e11fb +0x115b:  nop
086e11fc +0x115c:  nop
086e11fd +0x115d:  nop
086e11fe +0x115e:  nop
086e11ff +0x115f:  nop
086e1200 +0x1160:  push   %ebp
086e1201 +0x1161:  mov    %esp,%ebp
086e1203 +0x1163:  push   %edi
086e1204 +0x1164:  push   %esi
086e1205 +0x1165:  push   %ebx
086e1206 +0x1166:  sub    $0x3c,%esp
086e1209 +0x1169:  mov    0x8(%ebp),%esi
086e120c +0x116c:  mov    0xc(%ebp),%ebx
086e120f +0x116f:  cmp    %ebx,%esi
086e1211 +0x1171:  je     086e134b <+0x12ab>
086e1217 +0x1177:  mov    0x64(%ebx),%eax
086e121a +0x117a:  cmp    $0x8,%eax
086e121d +0x117d:  jg     086e13b0 <+0x1310>
086e1223 +0x1183:  lea    0x24(%esi),%edi
086e1226 +0x1186:  mov    %edi,-0x30(%ebp)
086e1229 +0x1189:  mov    0x18(%ebx),%eax
086e122c +0x118c:  test   %eax,%eax
086e122e +0x118e:  mov    %eax,-0x2c(%ebp)
086e1231 +0x1191:  je     086e1248 <+0x11a8>
086e1233 +0x1193:  mov    $&data#bb92cc41(.plt),%eax
086e1238 +0x1198:  test   %eax,%eax
086e123a +0x119a:  je     086e13f3 <+0x1353>
086e1240 +0x11a0:  mov    -0x2c(%ebp),%eax
086e1243 +0x11a3:  lock addl $0x1,0xc(%eax)
086e1248 +0x11a8:  movl   $0x0,0x4(%esp)
086e1250 +0x11b0:  mov    %esi,(%esp)
086e1253 +0x11b3:  call   08726e50 <_ZNSt8ios_base17_M_call_callbacksENS_5eventE>  ; std::ios_base::_M_call_callbacks(std::ios_base::event)
086e1258 +0x11b8:  mov    0x68(%esi),%eax
086e125b +0x11bb:  cmp    %edi,%eax
086e125d +0x11bd:  je     086e1272 <+0x11d2>
086e125f +0x11bf:  test   %eax,%eax
086e1261 +0x11c1:  je     086e126b <+0x11cb>
086e1263 +0x11c3:  mov    %eax,(%esp)
086e1266 +0x11c6:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086e126b +0x11cb:  movl   $0x0,0x68(%esi)
086e1272 +0x11d2:  mov    %esi,(%esp)
086e1275 +0x11d5:  call   08726db0 <_ZNSt8ios_base20_M_dispose_callbacksEv>  ; std::ios_base::_M_dispose_callbacks()
086e127a +0x11da:  mov    0x64(%ebx),%edi
086e127d +0x11dd:  mov    -0x2c(%ebp),%eax
086e1280 +0x11e0:  test   %edi,%edi
086e1282 +0x11e2:  mov    %eax,0x18(%esi)
086e1285 +0x11e5:  jle    086e12b1 <+0x1211>
086e1287 +0x11e7:  mov    %esi,-0x2c(%ebp)
086e128a +0x11ea:  mov    0x68(%ebx),%edi
086e128d +0x11ed:  xor    %eax,%eax
086e128f +0x11ef:  mov    -0x30(%ebp),%esi
086e1292 +0x11f2:  lea    0x0(%esi),%esi
086e1298 +0x11f8:  mov    (%edi,%eax,8),%edx
086e129b +0x11fb:  mov    0x4(%edi,%eax,8),%ecx
086e129f +0x11ff:  mov    %edx,(%esi,%eax,8)
086e12a2 +0x1202:  mov    %ecx,0x4(%esi,%eax,8)
086e12a6 +0x1206:  add    $0x1,%eax
086e12a9 +0x1209:  cmp    %eax,0x64(%ebx)
086e12ac +0x120c:  jg     086e1298 <+0x11f8>
086e12ae +0x120e:  mov    -0x2c(%ebp),%esi
086e12b1 +0x1211:  mov    -0x30(%ebp),%eax
086e12b4 +0x1214:  cmpb   $0x0,0x78(%ebx)
086e12b8 +0x1218:  mov    %eax,0x68(%esi)
086e12bb +0x121b:  mov    0x64(%ebx),%eax
086e12be +0x121e:  mov    %eax,0x64(%esi)
086e12c1 +0x1221:  mov    0xc(%ebx),%eax
086e12c4 +0x1224:  mov    %eax,0xc(%esi)
086e12c7 +0x1227:  mov    0x8(%ebx),%eax
086e12ca +0x122a:  mov    %eax,0x8(%esi)
086e12cd +0x122d:  mov    0x4(%ebx),%eax
086e12d0 +0x1230:  mov    %eax,0x4(%esi)
086e12d3 +0x1233:  mov    0x70(%ebx),%eax
086e12d6 +0x1236:  mov    %eax,0x70(%esi)
086e12d9 +0x1239:  je     086e1358 <+0x12b8>
086e12db +0x123b:  cmpb   $0x0,0x78(%esi)
086e12df +0x123f:  mov    0x74(%ebx),%edi
086e12e2 +0x1242:  je     086e1389 <+0x12e9>
086e12e8 +0x1248:  mov    %edi,0x74(%esi)
086e12eb +0x124b:  lea    0x6c(%ebx),%eax
086e12ee +0x124e:  lea    -0x1c(%ebp),%edi
086e12f1 +0x1251:  mov    %eax,0x4(%esp)
086e12f5 +0x1255:  mov    %edi,(%esp)
086e12f8 +0x1258:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
086e12fd +0x125d:  lea    0x6c(%esi),%edx
086e1300 +0x1260:  mov    %edx,(%esp)
086e1303 +0x1263:  mov    %edx,-0x34(%ebp)
086e1306 +0x1266:  mov    %edi,0x4(%esp)
086e130a +0x126a:  call   086dba90 <_ZNSt6localeaSERKS_>  ; std::locale::operator=(std::locale const&)
086e130f +0x126f:  mov    %edi,(%esp)
086e1312 +0x1272:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e1317 +0x1277:  mov    -0x34(%ebp),%edx
086e131a +0x127a:  mov    %esi,(%esp)
086e131d +0x127d:  mov    %edx,0x4(%esp)
086e1321 +0x1281:  call   086e0890 <+0x7f0>
086e1326 +0x1286:  movl   $0x2,0x4(%esp)
086e132e +0x128e:  mov    %esi,(%esp)
086e1331 +0x1291:  call   08726e50 <_ZNSt8ios_base17_M_call_callbacksENS_5eventE>  ; std::ios_base::_M_call_callbacks(std::ios_base::event)
086e1336 +0x1296:  mov    0x10(%ebx),%eax
086e1339 +0x1299:  mov    %eax,0x10(%esi)
086e133c +0x129c:  mov    0x14(%esi),%eax
086e133f +0x129f:  mov    %esi,(%esp)
086e1342 +0x12a2:  mov    %eax,0x4(%esp)
086e1346 +0x12a6:  call   086e0cf0 <+0xc50>
086e134b +0x12ab:  add    $0x3c,%esp
086e134e +0x12ae:  mov    %esi,%eax
086e1350 +0x12b0:  pop    %ebx
086e1351 +0x12b1:  pop    %esi
086e1352 +0x12b2:  pop    %edi
086e1353 +0x12b3:  pop    %ebp
086e1354 +0x12b4:  ret
086e1355 +0x12b5:  lea    0x0(%esi),%esi
086e1358 +0x12b8:  mov    0x80(%ebx),%eax
086e135e +0x12be:  test   %eax,%eax
086e1360 +0x12c0:  je     086e13ee <+0x134e>
086e1366 +0x12c6:  mov    (%eax),%edx
086e1368 +0x12c8:  movl   $0x20,0x4(%esp)
086e1370 +0x12d0:  mov    %eax,(%esp)
086e1373 +0x12d3:  call   *0x28(%edx)
086e1376 +0x12d6:  movb   $0x1,0x78(%ebx)
086e137a +0x12da:  cmpb   $0x0,0x78(%esi)
086e137e +0x12de:  mov    %eax,%edi
086e1380 +0x12e0:  mov    %eax,0x74(%ebx)
086e1383 +0x12e3:  jne    086e12e8 <+0x1248>
086e1389 +0x12e9:  mov    0x80(%esi),%eax
086e138f +0x12ef:  test   %eax,%eax
086e1391 +0x12f1:  je     086e13ee <+0x134e>
086e1393 +0x12f3:  mov    (%eax),%edx
086e1395 +0x12f5:  movl   $0x20,0x4(%esp)
086e139d +0x12fd:  mov    %eax,(%esp)
086e13a0 +0x1300:  call   *0x28(%edx)
086e13a3 +0x1303:  movb   $0x1,0x78(%esi)
086e13a7 +0x1307:  mov    %eax,0x74(%esi)
086e13aa +0x130a:  jmp    086e12e8 <+0x1248>
086e13af +0x130f:  nop
086e13b0 +0x1310:  shl    $0x3,%eax
086e13b3 +0x1313:  mov    %eax,(%esp)
086e13b6 +0x1316:  lea    0x24(%esi),%edi
086e13b9 +0x1319:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086e13be +0x131e:  mov    0x64(%ebx),%ecx
086e13c1 +0x1321:  test   %ecx,%ecx
086e13c3 +0x1323:  mov    %eax,-0x30(%ebp)
086e13c6 +0x1326:  je     086e1229 <+0x1189>
086e13cc +0x132c:  xor    %edx,%edx
086e13ce +0x132e:  xchg   %ax,%ax
086e13d0 +0x1330:  movl   $0x0,(%eax,%edx,8)
086e13d7 +0x1337:  movl   $0x0,0x4(%eax,%edx,8)
086e13df +0x133f:  add    $0x1,%edx
086e13e2 +0x1342:  cmp    %edx,%ecx
086e13e4 +0x1344:  jne    086e13d0 <+0x1330>
086e13e6 +0x1346:  lea    0x24(%esi),%edi
086e13e9 +0x1349:  jmp    086e1229 <+0x1189>
086e13ee +0x134e:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e13f3 +0x1353:  mov    -0x2c(%ebp),%eax
086e13f6 +0x1356:  addl   $0x1,0xc(%eax)
086e13fa +0x135a:  jmp    086e1248 <+0x11a8>
086e13ff +0x135f:  nop
086e1400 +0x1360:  push   %ebp
086e1401 +0x1361:  mov    %esp,%ebp
086e1403 +0x1363:  sub    $0x18,%esp
086e1406 +0x1366:  mov    %ebx,-0x8(%ebp)
086e1409 +0x1369:  mov    0x8(%ebp),%ebx
086e140c +0x136c:  mov    %esi,-0x4(%ebp)
086e140f +0x136f:  cmpb   $0x0,0x75(%ebx)
086e1413 +0x1373:  je     086e1428 <+0x1388>
086e1415 +0x1375:  movzbl 0x74(%ebx),%eax
086e1419 +0x1379:  mov    -0x8(%ebp),%ebx
086e141c +0x137c:  mov    -0x4(%ebp),%esi
086e141f +0x137f:  mov    %ebp,%esp
086e1421 +0x1381:  pop    %ebp
086e1422 +0x1382:  ret
086e1423 +0x1383:  nop
086e1424 +0x1384:  lea    0x0(%esi,%eiz,1),%esi
086e1428 +0x1388:  mov    0x7c(%ebx),%esi
086e142b +0x138b:  test   %esi,%esi
086e142d +0x138d:  je     086e146a <+0x13ca>
086e142f +0x138f:  cmpb   $0x0,0x1c(%esi)
086e1433 +0x1393:  je     086e1450 <+0x13b0>
086e1435 +0x1395:  movzbl 0x3d(%esi),%eax
086e1439 +0x1399:  mov    %al,0x74(%ebx)
086e143c +0x139c:  movb   $0x1,0x75(%ebx)
086e1440 +0x13a0:  mov    -0x8(%ebp),%ebx
086e1443 +0x13a3:  mov    -0x4(%ebp),%esi
086e1446 +0x13a6:  mov    %ebp,%esp
086e1448 +0x13a8:  pop    %ebp
086e1449 +0x13a9:  ret
086e144a +0x13aa:  lea    0x0(%esi),%esi
086e1450 +0x13b0:  mov    %esi,(%esp)
086e1453 +0x13b3:  call   087269c0 <_ZNKSt5ctypeIcE13_M_widen_initEv>  ; std::ctype<char>::_M_widen_init() const
086e1458 +0x13b8:  mov    (%esi),%eax
086e145a +0x13ba:  movl   $0x20,0x4(%esp)
086e1462 +0x13c2:  mov    %esi,(%esp)
086e1465 +0x13c5:  call   *0x18(%eax)
086e1468 +0x13c8:  jmp    086e1439 <+0x1399>
086e146a +0x13ca:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e146f +0x13cf:  nop
086e1470 +0x13d0:  push   %ebp
086e1471 +0x13d1:  mov    %esp,%ebp
086e1473 +0x13d3:  sub    $0x28,%esp
086e1476 +0x13d6:  mov    %ebx,-0x8(%ebp)
086e1479 +0x13d9:  mov    0x8(%ebp),%ebx
086e147c +0x13dc:  mov    %esi,-0x4(%ebp)
086e147f +0x13df:  movzbl 0xc(%ebp),%edx
086e1483 +0x13e3:  cmpb   $0x0,0x75(%ebx)
086e1487 +0x13e7:  je     086e14a0 <+0x1400>
086e1489 +0x13e9:  movzbl 0x74(%ebx),%eax
086e148d +0x13ed:  mov    %dl,0x74(%ebx)
086e1490 +0x13f0:  mov    -0x8(%ebp),%ebx
086e1493 +0x13f3:  mov    -0x4(%ebp),%esi
086e1496 +0x13f6:  mov    %ebp,%esp
086e1498 +0x13f8:  pop    %ebp
086e1499 +0x13f9:  ret
086e149a +0x13fa:  lea    0x0(%esi),%esi
086e14a0 +0x1400:  mov    0x7c(%ebx),%esi
086e14a3 +0x1403:  test   %esi,%esi
086e14a5 +0x1405:  je     086e14e9 <+0x1449>
086e14a7 +0x1407:  cmpb   $0x0,0x1c(%esi)
086e14ab +0x140b:  je     086e14c8 <+0x1428>
086e14ad +0x140d:  movzbl 0x3d(%esi),%eax
086e14b1 +0x1411:  mov    %al,0x74(%ebx)
086e14b4 +0x1414:  movb   $0x1,0x75(%ebx)
086e14b8 +0x1418:  mov    %dl,0x74(%ebx)
086e14bb +0x141b:  mov    -0x8(%ebp),%ebx
086e14be +0x141e:  mov    -0x4(%ebp),%esi
086e14c1 +0x1421:  mov    %ebp,%esp
086e14c3 +0x1423:  pop    %ebp
086e14c4 +0x1424:  ret
086e14c5 +0x1425:  lea    0x0(%esi),%esi
086e14c8 +0x1428:  mov    %dl,-0xc(%ebp)
086e14cb +0x142b:  mov    %esi,(%esp)
086e14ce +0x142e:  call   087269c0 <_ZNKSt5ctypeIcE13_M_widen_initEv>  ; std::ctype<char>::_M_widen_init() const
086e14d3 +0x1433:  mov    (%esi),%eax
086e14d5 +0x1435:  movl   $0x20,0x4(%esp)
086e14dd +0x143d:  mov    %esi,(%esp)
086e14e0 +0x1440:  call   *0x18(%eax)
086e14e3 +0x1443:  movzbl -0xc(%ebp),%edx
086e14e7 +0x1447:  jmp    086e14b1 <+0x1411>
086e14e9 +0x1449:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e14ee +0x144e:  nop
086e14ef +0x144f:  nop
086e14f0 +0x1450:  push   %ebp
086e14f1 +0x1451:  mov    %esp,%ebp
086e14f3 +0x1453:  push   %edi
086e14f4 +0x1454:  push   %esi
086e14f5 +0x1455:  push   %ebx
086e14f6 +0x1456:  sub    $0x3c,%esp
086e14f9 +0x1459:  mov    0x8(%ebp),%esi
086e14fc +0x145c:  mov    0xc(%ebp),%ebx
086e14ff +0x145f:  cmp    %ebx,%esi
086e1501 +0x1461:  je     086e163c <+0x159c>
086e1507 +0x1467:  mov    0x64(%ebx),%eax
086e150a +0x146a:  cmp    $0x8,%eax
086e150d +0x146d:  jg     086e1690 <+0x15f0>
086e1513 +0x1473:  lea    0x24(%esi),%edi
086e1516 +0x1476:  mov    %edi,-0x30(%ebp)
086e1519 +0x1479:  mov    0x18(%ebx),%eax
086e151c +0x147c:  test   %eax,%eax
086e151e +0x147e:  mov    %eax,-0x2c(%ebp)
086e1521 +0x1481:  je     086e1538 <+0x1498>
086e1523 +0x1483:  mov    $&data#bb92cc41(.plt),%eax
086e1528 +0x1488:  test   %eax,%eax
086e152a +0x148a:  je     086e1719 <+0x1679>
086e1530 +0x1490:  mov    -0x2c(%ebp),%eax
086e1533 +0x1493:  lock addl $0x1,0xc(%eax)
086e1538 +0x1498:  movl   $0x0,0x4(%esp)
086e1540 +0x14a0:  mov    %esi,(%esp)
086e1543 +0x14a3:  call   08726e50 <_ZNSt8ios_base17_M_call_callbacksENS_5eventE>  ; std::ios_base::_M_call_callbacks(std::ios_base::event)
086e1548 +0x14a8:  mov    0x68(%esi),%eax
086e154b +0x14ab:  cmp    %edi,%eax
086e154d +0x14ad:  je     086e1562 <+0x14c2>
086e154f +0x14af:  test   %eax,%eax
086e1551 +0x14b1:  je     086e155b <+0x14bb>
086e1553 +0x14b3:  mov    %eax,(%esp)
086e1556 +0x14b6:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
086e155b +0x14bb:  movl   $0x0,0x68(%esi)
086e1562 +0x14c2:  mov    %esi,(%esp)
086e1565 +0x14c5:  call   08726db0 <_ZNSt8ios_base20_M_dispose_callbacksEv>  ; std::ios_base::_M_dispose_callbacks()
086e156a +0x14ca:  mov    -0x2c(%ebp),%eax
086e156d +0x14cd:  mov    %eax,0x18(%esi)
086e1570 +0x14d0:  mov    0x64(%ebx),%eax
086e1573 +0x14d3:  test   %eax,%eax
086e1575 +0x14d5:  jle    086e15a1 <+0x1501>
086e1577 +0x14d7:  mov    %esi,-0x2c(%ebp)
086e157a +0x14da:  mov    0x68(%ebx),%edi
086e157d +0x14dd:  xor    %eax,%eax
086e157f +0x14df:  mov    -0x30(%ebp),%esi
086e1582 +0x14e2:  lea    0x0(%esi),%esi
086e1588 +0x14e8:  mov    (%edi,%eax,8),%edx
086e158b +0x14eb:  mov    0x4(%edi,%eax,8),%ecx
086e158f +0x14ef:  mov    %edx,(%esi,%eax,8)
086e1592 +0x14f2:  mov    %ecx,0x4(%esi,%eax,8)
086e1596 +0x14f6:  add    $0x1,%eax
086e1599 +0x14f9:  cmp    %eax,0x64(%ebx)
086e159c +0x14fc:  jg     086e1588 <+0x14e8>
086e159e +0x14fe:  mov    -0x2c(%ebp),%esi
086e15a1 +0x1501:  mov    -0x30(%ebp),%eax
086e15a4 +0x1504:  cmpb   $0x0,0x75(%ebx)
086e15a8 +0x1508:  mov    %eax,0x68(%esi)
086e15ab +0x150b:  mov    0x64(%ebx),%eax
086e15ae +0x150e:  mov    %eax,0x64(%esi)
086e15b1 +0x1511:  mov    0xc(%ebx),%eax
086e15b4 +0x1514:  mov    %eax,0xc(%esi)
086e15b7 +0x1517:  mov    0x8(%ebx),%eax
086e15ba +0x151a:  mov    %eax,0x8(%esi)
086e15bd +0x151d:  mov    0x4(%ebx),%eax
086e15c0 +0x1520:  mov    %eax,0x4(%esi)
086e15c3 +0x1523:  mov    0x70(%ebx),%eax
086e15c6 +0x1526:  mov    %eax,0x70(%esi)
086e15c9 +0x1529:  je     086e1648 <+0x15a8>
086e15cb +0x152b:  cmpb   $0x0,0x75(%esi)
086e15cf +0x152f:  movzbl 0x74(%ebx),%edx
086e15d3 +0x1533:  je     086e166e <+0x15ce>
086e15d9 +0x1539:  mov    %dl,0x74(%esi)
086e15dc +0x153c:  lea    0x6c(%ebx),%eax
086e15df +0x153f:  lea    -0x1c(%ebp),%edi
086e15e2 +0x1542:  mov    %eax,0x4(%esp)
086e15e6 +0x1546:  mov    %edi,(%esp)
086e15e9 +0x1549:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
086e15ee +0x154e:  lea    0x6c(%esi),%edx
086e15f1 +0x1551:  mov    %edx,(%esp)
086e15f4 +0x1554:  mov    %edx,-0x34(%ebp)
086e15f7 +0x1557:  mov    %edi,0x4(%esp)
086e15fb +0x155b:  call   086dba90 <_ZNSt6localeaSERKS_>  ; std::locale::operator=(std::locale const&)
086e1600 +0x1560:  mov    %edi,(%esp)
086e1603 +0x1563:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e1608 +0x1568:  mov    -0x34(%ebp),%edx
086e160b +0x156b:  mov    %esi,(%esp)
086e160e +0x156e:  mov    %edx,0x4(%esp)
086e1612 +0x1572:  call   086e0e50 <+0xdb0>
086e1617 +0x1577:  movl   $0x2,0x4(%esp)
086e161f +0x157f:  mov    %esi,(%esp)
086e1622 +0x1582:  call   08726e50 <_ZNSt8ios_base17_M_call_callbacksENS_5eventE>  ; std::ios_base::_M_call_callbacks(std::ios_base::event)
086e1627 +0x1587:  mov    0x10(%ebx),%eax
086e162a +0x158a:  mov    %eax,0x10(%esi)
086e162d +0x158d:  mov    0x14(%esi),%eax
086e1630 +0x1590:  mov    %esi,(%esp)
086e1633 +0x1593:  mov    %eax,0x4(%esp)
086e1637 +0x1597:  call   086e0da0 <+0xd00>
086e163c +0x159c:  add    $0x3c,%esp
086e163f +0x159f:  mov    %esi,%eax
086e1641 +0x15a1:  pop    %ebx
086e1642 +0x15a2:  pop    %esi
086e1643 +0x15a3:  pop    %edi
086e1644 +0x15a4:  pop    %ebp
086e1645 +0x15a5:  ret
086e1646 +0x15a6:  xchg   %ax,%ax
086e1648 +0x15a8:  mov    0x7c(%ebx),%edi
086e164b +0x15ab:  test   %edi,%edi
086e164d +0x15ad:  je     086e1714 <+0x1674>
086e1653 +0x15b3:  cmpb   $0x0,0x1c(%edi)
086e1657 +0x15b7:  je     086e16d0 <+0x1630>
086e1659 +0x15b9:  movzbl 0x3d(%edi),%edx
086e165d +0x15bd:  movb   $0x1,0x75(%ebx)
086e1661 +0x15c1:  cmpb   $0x0,0x75(%esi)
086e1665 +0x15c5:  mov    %dl,0x74(%ebx)
086e1668 +0x15c8:  jne    086e15d9 <+0x1539>
086e166e +0x15ce:  mov    0x7c(%esi),%edi
086e1671 +0x15d1:  test   %edi,%edi
086e1673 +0x15d3:  je     086e1714 <+0x1674>
086e1679 +0x15d9:  cmpb   $0x0,0x1c(%edi)
086e167d +0x15dd:  je     086e16f0 <+0x1650>
086e167f +0x15df:  movzbl 0x3d(%edi),%eax
086e1683 +0x15e3:  mov    %al,0x74(%esi)
086e1686 +0x15e6:  movb   $0x1,0x75(%esi)
086e168a +0x15ea:  jmp    086e15d9 <+0x1539>
086e168f +0x15ef:  nop
086e1690 +0x15f0:  shl    $0x3,%eax
086e1693 +0x15f3:  mov    %eax,(%esp)
086e1696 +0x15f6:  lea    0x24(%esi),%edi
086e1699 +0x15f9:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
086e169e +0x15fe:  mov    0x64(%ebx),%ecx
086e16a1 +0x1601:  test   %ecx,%ecx
086e16a3 +0x1603:  mov    %eax,-0x30(%ebp)
086e16a6 +0x1606:  je     086e1519 <+0x1479>
086e16ac +0x160c:  xor    %edx,%edx
086e16ae +0x160e:  xchg   %ax,%ax
086e16b0 +0x1610:  movl   $0x0,(%eax,%edx,8)
086e16b7 +0x1617:  movl   $0x0,0x4(%eax,%edx,8)
086e16bf +0x161f:  add    $0x1,%edx
086e16c2 +0x1622:  cmp    %edx,%ecx
086e16c4 +0x1624:  jne    086e16b0 <+0x1610>
086e16c6 +0x1626:  lea    0x24(%esi),%edi
086e16c9 +0x1629:  jmp    086e1519 <+0x1479>
086e16ce +0x162e:  xchg   %ax,%ax
086e16d0 +0x1630:  mov    %edi,(%esp)
086e16d3 +0x1633:  call   087269c0 <_ZNKSt5ctypeIcE13_M_widen_initEv>  ; std::ctype<char>::_M_widen_init() const
086e16d8 +0x1638:  mov    (%edi),%eax
086e16da +0x163a:  movl   $0x20,0x4(%esp)
086e16e2 +0x1642:  mov    %edi,(%esp)
086e16e5 +0x1645:  call   *0x18(%eax)
086e16e8 +0x1648:  mov    %eax,%edx
086e16ea +0x164a:  jmp    086e165d <+0x15bd>
086e16ef +0x164f:  nop
086e16f0 +0x1650:  mov    %dl,-0x34(%ebp)
086e16f3 +0x1653:  mov    %edi,(%esp)
086e16f6 +0x1656:  call   087269c0 <_ZNKSt5ctypeIcE13_M_widen_initEv>  ; std::ctype<char>::_M_widen_init() const
086e16fb +0x165b:  mov    (%edi),%eax
086e16fd +0x165d:  movl   $0x20,0x4(%esp)
086e1705 +0x1665:  mov    %edi,(%esp)
086e1708 +0x1668:  call   *0x18(%eax)
086e170b +0x166b:  movzbl -0x34(%ebp),%edx
086e170f +0x166f:  jmp    086e1683 <+0x15e3>
086e1714 +0x1674:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e1719 +0x1679:  mov    -0x2c(%ebp),%eax
086e171c +0x167c:  addl   $0x1,0xc(%eax)
086e1720 +0x1680:  jmp    086e1538 <+0x1498>
086e1725 +0x1685:  nop
086e1726 +0x1686:  nop
086e1727 +0x1687:  nop
086e1728 +0x1688:  nop
086e1729 +0x1689:  nop
086e172a +0x168a:  nop
086e172b +0x168b:  nop
086e172c +0x168c:  nop
086e172d +0x168d:  nop
086e172e +0x168e:  nop
086e172f +0x168f:  nop
086e1730 +0x1690:  push   %ebp
086e1731 +0x1691:  mov    %esp,%ebp
086e1733 +0x1693:  mov    0xc(%ebp),%edx
086e1736 +0x1696:  push   %ebx
086e1737 +0x1697:  mov    0x8(%ebp),%eax
086e173a +0x169a:  mov    (%edx),%ecx
086e173c +0x169c:  mov    0x14(%edx),%ebx
086e173f +0x169f:  mov    -0xc(%ecx),%ecx
086e1742 +0x16a2:  mov    %ebx,(%eax,%ecx,1)
086e1745 +0x16a5:  mov    0xc(%edx),%ecx
086e1748 +0x16a8:  mov    0x10(%edx),%ebx
086e174b +0x16ab:  mov    %ecx,0x8(%eax)
086e174e +0x16ae:  mov    -0xc(%ecx),%ecx
086e1751 +0x16b1:  mov    %ebx,0x8(%eax,%ecx,1)
086e1755 +0x16b5:  mov    0x4(%edx),%ecx
086e1758 +0x16b8:  mov    0x8(%edx),%edx
086e175b +0x16bb:  mov    %ecx,(%eax)
086e175d +0x16bd:  mov    -0xc(%ecx),%ecx
086e1760 +0x16c0:  movl   $0x0,0x4(%eax)
086e1767 +0x16c7:  mov    %edx,(%eax,%ecx,1)
086e176a +0x16ca:  pop    %ebx
086e176b +0x16cb:  pop    %ebp
086e176c +0x16cc:  ret
086e176d +0x16cd:  nop
086e176e +0x16ce:  nop
086e176f +0x16cf:  nop
086e1770 +0x16d0:  push   %ebp
086e1771 +0x16d1:  mov    %esp,%ebp
086e1773 +0x16d3:  mov    0x8(%ebp),%eax
086e1776 +0x16d6:  mov    0xc(%ebp),%edx
086e1779 +0x16d9:  mov    %edx,(%eax)
086e177b +0x16db:  pop    %ebp
086e177c +0x16dc:  ret    $0x4
086e177f +0x16df:  nop
086e1780 +0x16e0:  push   %ebp
086e1781 +0x16e1:  mov    %esp,%ebp
086e1783 +0x16e3:  mov    0xc(%ebp),%edx
086e1786 +0x16e6:  push   %ebx
086e1787 +0x16e7:  mov    0x8(%ebp),%eax
086e178a +0x16ea:  mov    (%edx),%ecx
086e178c +0x16ec:  mov    0x14(%edx),%ebx
086e178f +0x16ef:  mov    -0xc(%ecx),%ecx
086e1792 +0x16f2:  mov    %ebx,(%eax,%ecx,1)
086e1795 +0x16f5:  mov    0xc(%edx),%ecx
086e1798 +0x16f8:  mov    0x10(%edx),%ebx
086e179b +0x16fb:  mov    %ecx,0x8(%eax)
086e179e +0x16fe:  mov    -0xc(%ecx),%ecx
086e17a1 +0x1701:  mov    %ebx,0x8(%eax,%ecx,1)
086e17a5 +0x1705:  mov    0x4(%edx),%ecx
086e17a8 +0x1708:  mov    0x8(%edx),%edx
086e17ab +0x170b:  mov    %ecx,(%eax)
086e17ad +0x170d:  mov    -0xc(%ecx),%ecx
086e17b0 +0x1710:  movl   $0x0,0x4(%eax)
086e17b7 +0x1717:  mov    %edx,(%eax,%ecx,1)
086e17ba +0x171a:  pop    %ebx
086e17bb +0x171b:  pop    %ebp
086e17bc +0x171c:  ret
086e17bd +0x171d:  nop
086e17be +0x171e:  nop
086e17bf +0x171f:  nop
086e17c0 +0x1720:  push   %ebp
086e17c1 +0x1721:  mov    %esp,%ebp
086e17c3 +0x1723:  sub    $0x28,%esp
086e17c6 +0x1726:  mov    %ebx,-0xc(%ebp)
086e17c9 +0x1729:  mov    0xc(%ebp),%ebx
086e17cc +0x172c:  mov    %esi,-0x8(%ebp)
086e17cf +0x172f:  mov    0x8(%ebp),%esi
086e17d2 +0x1732:  mov    %edi,-0x4(%ebp)
086e17d5 +0x1735:  mov    0x10(%ebp),%edi
086e17d8 +0x1738:  mov    0x4(%ebx),%eax
086e17db +0x173b:  mov    0x8(%ebx),%edx
086e17de +0x173e:  mov    %eax,(%esi)
086e17e0 +0x1740:  mov    -0xc(%eax),%eax
086e17e3 +0x1743:  movl   $0x0,0x4(%esi)
086e17ea +0x174a:  mov    %edx,(%esi,%eax,1)
086e17ed +0x174d:  mov    %edi,0x4(%esp)
086e17f1 +0x1751:  mov    (%esi),%eax
086e17f3 +0x1753:  mov    -0xc(%eax),%eax
086e17f6 +0x1756:  lea    (%esi,%eax,1),%eax
086e17f9 +0x1759:  mov    %eax,(%esp)
086e17fc +0x175c:  call   086e0920 <+0x880>
086e1801 +0x1761:  mov    0xc(%ebx),%edx
086e1804 +0x1764:  lea    0x8(%esi),%eax
086e1807 +0x1767:  mov    0x10(%ebx),%ecx
086e180a +0x176a:  mov    %edx,0x8(%esi)
086e180d +0x176d:  mov    -0xc(%edx),%edx
086e1810 +0x1770:  mov    %ecx,0x8(%esi,%edx,1)
086e1814 +0x1774:  mov    %edi,0x4(%esp)
086e1818 +0x1778:  mov    0x8(%esi),%edx
086e181b +0x177b:  add    -0xc(%edx),%eax
086e181e +0x177e:  mov    %eax,(%esp)
086e1821 +0x1781:  call   086e0920 <+0x880>
086e1826 +0x1786:  mov    (%ebx),%eax
086e1828 +0x1788:  mov    0x14(%ebx),%edx
086e182b +0x178b:  mov    %eax,(%esi)
086e182d +0x178d:  mov    -0xc(%eax),%eax
086e1830 +0x1790:  mov    %edx,(%esi,%eax,1)
086e1833 +0x1793:  mov    0x18(%ebx),%eax
086e1836 +0x1796:  mov    %eax,0x8(%esi)
086e1839 +0x1799:  mov    -0xc(%ebp),%ebx
086e183c +0x179c:  mov    -0x8(%ebp),%esi
086e183f +0x179f:  mov    -0x4(%ebp),%edi
086e1842 +0x17a2:  mov    %ebp,%esp
086e1844 +0x17a4:  pop    %ebp
086e1845 +0x17a5:  ret
086e1846 +0x17a6:  mov    %eax,(%esp)
086e1849 +0x17a9:  call   08ae3750 <_Unwind_Resume>
086e184e +0x17ae:  mov    0x4(%ebx),%edx
086e1851 +0x17b1:  mov    0x8(%ebx),%ecx
086e1854 +0x17b4:  mov    %edx,(%esi)
086e1856 +0x17b6:  mov    -0xc(%edx),%edx
086e1859 +0x17b9:  movl   $0x0,0x4(%esi)
086e1860 +0x17c0:  mov    %ecx,(%esi,%edx,1)
086e1863 +0x17c3:  jmp    086e1846 <+0x17a6>
086e1865 +0x17c5:  nop
086e1866 +0x17c6:  nop
086e1867 +0x17c7:  nop
086e1868 +0x17c8:  nop
086e1869 +0x17c9:  nop
086e186a +0x17ca:  nop
086e186b +0x17cb:  nop
086e186c +0x17cc:  nop
086e186d +0x17cd:  nop
086e186e +0x17ce:  nop
086e186f +0x17cf:  nop
086e1870 +0x17d0:  push   %ebp
086e1871 +0x17d1:  mov    %esp,%ebp
086e1873 +0x17d3:  push   %esi
086e1874 +0x17d4:  push   %ebx
086e1875 +0x17d5:  sub    $0x10,%esp
086e1878 +0x17d8:  mov    0xc(%ebp),%ebx
086e187b +0x17db:  mov    0x8(%ebp),%esi
086e187e +0x17de:  mov    0x4(%ebx),%eax
086e1881 +0x17e1:  mov    0x8(%ebx),%edx
086e1884 +0x17e4:  mov    %eax,(%esi)
086e1886 +0x17e6:  mov    -0xc(%eax),%eax
086e1889 +0x17e9:  movl   $0x0,0x4(%esi)
086e1890 +0x17f0:  mov    %edx,(%esi,%eax,1)
086e1893 +0x17f3:  movl   $0x0,0x4(%esp)
086e189b +0x17fb:  mov    (%esi),%eax
086e189d +0x17fd:  mov    -0xc(%eax),%eax
086e18a0 +0x1800:  lea    (%esi,%eax,1),%eax
086e18a3 +0x1803:  mov    %eax,(%esp)
086e18a6 +0x1806:  call   086e0ee0 <+0xe40>
086e18ab +0x180b:  mov    0xc(%ebx),%edx
086e18ae +0x180e:  lea    0x8(%esi),%eax
086e18b1 +0x1811:  mov    0x10(%ebx),%ecx
086e18b4 +0x1814:  mov    %edx,0x8(%esi)
086e18b7 +0x1817:  mov    -0xc(%edx),%edx
086e18ba +0x181a:  mov    %ecx,0x8(%esi,%edx,1)
086e18be +0x181e:  movl   $0x0,0x4(%esp)
086e18c6 +0x1826:  mov    0x8(%esi),%edx
086e18c9 +0x1829:  add    -0xc(%edx),%eax
086e18cc +0x182c:  mov    %eax,(%esp)
086e18cf +0x182f:  call   086e0ee0 <+0xe40>
086e18d4 +0x1834:  mov    (%ebx),%eax
086e18d6 +0x1836:  mov    0x14(%ebx),%edx
086e18d9 +0x1839:  mov    %eax,(%esi)
086e18db +0x183b:  mov    -0xc(%eax),%eax
086e18de +0x183e:  mov    %edx,(%esi,%eax,1)
086e18e1 +0x1841:  mov    0x18(%ebx),%eax
086e18e4 +0x1844:  mov    %eax,0x8(%esi)
086e18e7 +0x1847:  add    $0x10,%esp
086e18ea +0x184a:  pop    %ebx
086e18eb +0x184b:  pop    %esi
086e18ec +0x184c:  pop    %ebp
086e18ed +0x184d:  ret
086e18ee +0x184e:  mov    %eax,(%esp)
086e18f1 +0x1851:  call   08ae3750 <_Unwind_Resume>
086e18f6 +0x1856:  mov    0x4(%ebx),%edx
086e18f9 +0x1859:  mov    0x8(%ebx),%ecx
086e18fc +0x185c:  mov    %edx,(%esi)
086e18fe +0x185e:  mov    -0xc(%edx),%edx
086e1901 +0x1861:  movl   $0x0,0x4(%esi)
086e1908 +0x1868:  mov    %ecx,(%esi,%edx,1)
086e190b +0x186b:  jmp    086e18ee <+0x184e>
086e190d +0x186d:  nop
086e190e +0x186e:  nop
086e190f +0x186f:  nop
086e1910 +0x1870:  push   %ebp
086e1911 +0x1871:  mov    %esp,%ebp
086e1913 +0x1873:  sub    $0x28,%esp
086e1916 +0x1876:  mov    %ebx,-0xc(%ebp)
086e1919 +0x1879:  mov    0xc(%ebp),%ebx
086e191c +0x187c:  mov    %esi,-0x8(%ebp)
086e191f +0x187f:  mov    0x8(%ebp),%esi
086e1922 +0x1882:  mov    %edi,-0x4(%ebp)
086e1925 +0x1885:  mov    0x10(%ebp),%edi
086e1928 +0x1888:  mov    0x4(%ebx),%eax
086e192b +0x188b:  mov    0x8(%ebx),%edx
086e192e +0x188e:  mov    %eax,(%esi)
086e1930 +0x1890:  mov    -0xc(%eax),%eax
086e1933 +0x1893:  movl   $0x0,0x4(%esi)
086e193a +0x189a:  mov    %edx,(%esi,%eax,1)
086e193d +0x189d:  mov    %edi,0x4(%esp)
086e1941 +0x18a1:  mov    (%esi),%eax
086e1943 +0x18a3:  mov    -0xc(%eax),%eax
086e1946 +0x18a6:  lea    (%esi,%eax,1),%eax
086e1949 +0x18a9:  mov    %eax,(%esp)
086e194c +0x18ac:  call   086e0ee0 <+0xe40>
086e1951 +0x18b1:  mov    0xc(%ebx),%edx
086e1954 +0x18b4:  lea    0x8(%esi),%eax
086e1957 +0x18b7:  mov    0x10(%ebx),%ecx
086e195a +0x18ba:  mov    %edx,0x8(%esi)
086e195d +0x18bd:  mov    -0xc(%edx),%edx
086e1960 +0x18c0:  mov    %ecx,0x8(%esi,%edx,1)
086e1964 +0x18c4:  mov    %edi,0x4(%esp)
086e1968 +0x18c8:  mov    0x8(%esi),%edx
086e196b +0x18cb:  add    -0xc(%edx),%eax
086e196e +0x18ce:  mov    %eax,(%esp)
086e1971 +0x18d1:  call   086e0ee0 <+0xe40>
086e1976 +0x18d6:  mov    (%ebx),%eax
086e1978 +0x18d8:  mov    0x14(%ebx),%edx
086e197b +0x18db:  mov    %eax,(%esi)
086e197d +0x18dd:  mov    -0xc(%eax),%eax
086e1980 +0x18e0:  mov    %edx,(%esi,%eax,1)
086e1983 +0x18e3:  mov    0x18(%ebx),%eax
086e1986 +0x18e6:  mov    %eax,0x8(%esi)
086e1989 +0x18e9:  mov    -0xc(%ebp),%ebx
086e198c +0x18ec:  mov    -0x8(%ebp),%esi
086e198f +0x18ef:  mov    -0x4(%ebp),%edi
086e1992 +0x18f2:  mov    %ebp,%esp
086e1994 +0x18f4:  pop    %ebp
086e1995 +0x18f5:  ret
086e1996 +0x18f6:  mov    %eax,(%esp)
086e1999 +0x18f9:  call   08ae3750 <_Unwind_Resume>
086e199e +0x18fe:  mov    0x4(%ebx),%edx
086e19a1 +0x1901:  mov    0x8(%ebx),%ecx
086e19a4 +0x1904:  mov    %edx,(%esi)
086e19a6 +0x1906:  mov    -0xc(%edx),%edx
086e19a9 +0x1909:  movl   $0x0,0x4(%esi)
086e19b0 +0x1910:  mov    %ecx,(%esi,%edx,1)
086e19b3 +0x1913:  jmp    086e1996 <+0x18f6>
086e19b5 +0x1915:  nop
086e19b6 +0x1916:  nop
086e19b7 +0x1917:  nop
086e19b8 +0x1918:  nop
086e19b9 +0x1919:  nop
086e19ba +0x191a:  nop
086e19bb +0x191b:  nop
086e19bc +0x191c:  nop
086e19bd +0x191d:  nop
086e19be +0x191e:  nop
086e19bf +0x191f:  nop
086e19c0 +0x1920:  mov    0x4(%esp),%eax
086e19c4 +0x1924:  mov    (%eax),%ecx
086e19c6 +0x1926:  add    -0xc(%ecx),%eax
086e19c9 +0x1929:  mov    %eax,0x4(%esp)
086e19cd +0x192d:  jmp    086e19e0 <+0x1940>
086e19cf +0x192f:  nop
086e19d0 +0x1930:  addl   $0xfffffff8,0x4(%esp)
086e19d5 +0x1935:  jmp    086e19e0 <+0x1940>
086e19d7 +0x1937:  nop
086e19d8 +0x1938:  nop
086e19d9 +0x1939:  lea    0x0(%esi,%eiz,1),%esi
086e19e0 +0x1940:  push   %ebp
086e19e1 +0x1941:  mov    %esp,%ebp
086e19e3 +0x1943:  push   %ebx
086e19e4 +0x1944:  sub    $0x4,%esp
086e19e7 +0x1947:  mov    0x8(%ebp),%eax
086e19ea +0x194a:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0xc,%edx
086e19f0 +0x1950:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x10,%ebx
086e19f6 +0x1956:  lea    0xc(%eax),%ecx
086e19f9 +0x1959:  mov    %edx,0x8(%eax)
086e19fc +0x195c:  mov    -0xc(%edx),%edx
086e19ff +0x195f:  mov    %ebx,0x8(%eax,%edx,1)
086e1a03 +0x1963:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x4,%edx
086e1a09 +0x1969:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x8,%ebx
086e1a0f +0x196f:  mov    %edx,(%eax)
086e1a11 +0x1971:  mov    -0xc(%edx),%edx
086e1a14 +0x1974:  movl   $0x0,0x4(%eax)
086e1a1b +0x197b:  mov    %ebx,(%eax,%edx,1)
086e1a1e +0x197e:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0xc(%eax)
086e1a25 +0x1985:  mov    %ecx,0x8(%ebp)
086e1a28 +0x1988:  add    $0x4,%esp
086e1a2b +0x198b:  pop    %ebx
086e1a2c +0x198c:  pop    %ebp
086e1a2d +0x198d:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e1a32 +0x1992:  nop
086e1a33 +0x1993:  nop
086e1a34 +0x1994:  nop
086e1a35 +0x1995:  nop
086e1a36 +0x1996:  nop
086e1a37 +0x1997:  nop
086e1a38 +0x1998:  nop
086e1a39 +0x1999:  nop
086e1a3a +0x199a:  nop
086e1a3b +0x199b:  nop
086e1a3c +0x199c:  nop
086e1a3d +0x199d:  nop
086e1a3e +0x199e:  nop
086e1a3f +0x199f:  nop
086e1a40 +0x19a0:  mov    0x4(%esp),%eax
086e1a44 +0x19a4:  mov    (%eax),%ecx
086e1a46 +0x19a6:  add    -0xc(%ecx),%eax
086e1a49 +0x19a9:  mov    %eax,0x4(%esp)
086e1a4d +0x19ad:  jmp    086e1a60 <+0x19c0>
086e1a4f +0x19af:  nop
086e1a50 +0x19b0:  addl   $0xfffffff8,0x4(%esp)
086e1a55 +0x19b5:  jmp    086e1a60 <+0x19c0>
086e1a57 +0x19b7:  nop
086e1a58 +0x19b8:  nop
086e1a59 +0x19b9:  lea    0x0(%esi,%eiz,1),%esi
086e1a60 +0x19c0:  push   %ebp
086e1a61 +0x19c1:  mov    %esp,%ebp
086e1a63 +0x19c3:  push   %ebx
086e1a64 +0x19c4:  sub    $0x4,%esp
086e1a67 +0x19c7:  mov    0x8(%ebp),%eax
086e1a6a +0x19ca:  mov    &_ZTTSd+0xc,%edx
086e1a70 +0x19d0:  mov    &_ZTTSd+0x10,%ebx
086e1a76 +0x19d6:  lea    0xc(%eax),%ecx
086e1a79 +0x19d9:  mov    %edx,0x8(%eax)
086e1a7c +0x19dc:  mov    -0xc(%edx),%edx
086e1a7f +0x19df:  mov    %ebx,0x8(%eax,%edx,1)
086e1a83 +0x19e3:  mov    &_ZTTSd+0x4,%edx
086e1a89 +0x19e9:  mov    &_ZTTSd+0x8,%ebx
086e1a8f +0x19ef:  mov    %edx,(%eax)
086e1a91 +0x19f1:  mov    -0xc(%edx),%edx
086e1a94 +0x19f4:  movl   $0x0,0x4(%eax)
086e1a9b +0x19fb:  mov    %ebx,(%eax,%edx,1)
086e1a9e +0x19fe:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0xc(%eax)
086e1aa5 +0x1a05:  mov    %ecx,0x8(%ebp)
086e1aa8 +0x1a08:  add    $0x4,%esp
086e1aab +0x1a0b:  pop    %ebx
086e1aac +0x1a0c:  pop    %ebp
086e1aad +0x1a0d:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e1ab2 +0x1a12:  nop
086e1ab3 +0x1a13:  nop
086e1ab4 +0x1a14:  nop
086e1ab5 +0x1a15:  nop
086e1ab6 +0x1a16:  nop
086e1ab7 +0x1a17:  nop
086e1ab8 +0x1a18:  nop
086e1ab9 +0x1a19:  nop
086e1aba +0x1a1a:  nop
086e1abb +0x1a1b:  nop
086e1abc +0x1a1c:  nop
086e1abd +0x1a1d:  nop
086e1abe +0x1a1e:  nop
086e1abf +0x1a1f:  nop
086e1ac0 +0x1a20:  push   %ebp
086e1ac1 +0x1a21:  mov    %esp,%ebp
086e1ac3 +0x1a23:  sub    $0x38,%esp
086e1ac6 +0x1a26:  mov    %ebx,-0xc(%ebp)
086e1ac9 +0x1a29:  mov    0x8(%ebp),%ebx
086e1acc +0x1a2c:  mov    %esi,-0x8(%ebp)
086e1acf +0x1a2f:  mov    %edi,-0x4(%ebp)
086e1ad2 +0x1a32:  lea    0xc(%ebx),%esi
086e1ad5 +0x1a35:  mov    %esi,(%esp)
086e1ad8 +0x1a38:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e1add +0x1a3d:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x4,%edi
086e1ae3 +0x1a43:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x8,%edx
086e1ae9 +0x1a49:  mov    0xc(%ebp),%ecx
086e1aec +0x1a4c:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0xc(%ebx)
086e1af3 +0x1a53:  mov    -0xc(%edi),%eax
086e1af6 +0x1a56:  mov    %edi,(%ebx)
086e1af8 +0x1a58:  movl   $0x0,0x4(%ebx)
086e1aff +0x1a5f:  movl   $0x0,0x70(%esi)
086e1b06 +0x1a66:  mov    %edx,(%ebx,%eax,1)
086e1b09 +0x1a69:  movl   $0x0,0x74(%esi)
086e1b10 +0x1a70:  movb   $0x0,0x78(%esi)
086e1b14 +0x1a74:  movl   $0x0,0x7c(%esi)
086e1b1b +0x1a7b:  movl   $0x0,0x80(%esi)
086e1b25 +0x1a85:  movl   $0x0,0x84(%esi)
086e1b2f +0x1a8f:  movl   $0x0,0x88(%esi)
086e1b39 +0x1a99:  mov    %ecx,0x4(%esp)
086e1b3d +0x1a9d:  mov    (%ebx),%eax
086e1b3f +0x1a9f:  mov    -0xc(%eax),%eax
086e1b42 +0x1aa2:  lea    (%ebx,%eax,1),%eax
086e1b45 +0x1aa5:  mov    %eax,(%esp)
086e1b48 +0x1aa8:  call   086e0920 <+0x880>
086e1b4d +0x1aad:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0xc,%edx
086e1b53 +0x1ab3:  lea    0x8(%ebx),%eax
086e1b56 +0x1ab6:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x10,%ecx
086e1b5c +0x1abc:  mov    %edx,0x8(%ebx)
086e1b5f +0x1abf:  mov    -0xc(%edx),%edx
086e1b62 +0x1ac2:  mov    %ecx,0x8(%ebx,%edx,1)
086e1b66 +0x1ac6:  mov    0xc(%ebp),%edx
086e1b69 +0x1ac9:  mov    %edx,0x4(%esp)
086e1b6d +0x1acd:  mov    0x8(%ebx),%edx
086e1b70 +0x1ad0:  add    -0xc(%edx),%eax
086e1b73 +0x1ad3:  mov    %eax,(%esp)
086e1b76 +0x1ad6:  call   086e0920 <+0x880>
086e1b7b +0x1adb:  movl   $&_ZTVSt14basic_iostreamIwSt11char_traitsIwEE+0xc,(%ebx)
086e1b81 +0x1ae1:  movl   $&_ZTVSt14basic_iostreamIwSt11char_traitsIwEE+0x34,0xc(%ebx)
086e1b88 +0x1ae8:  movl   $&_ZTVSt14basic_iostreamIwSt11char_traitsIwEE+0x20,0x8(%ebx)
086e1b8f +0x1aef:  mov    -0xc(%ebp),%ebx
086e1b92 +0x1af2:  mov    -0x8(%ebp),%esi
086e1b95 +0x1af5:  mov    -0x4(%ebp),%edi
086e1b98 +0x1af8:  mov    %ebp,%esp
086e1b9a +0x1afa:  pop    %ebp
086e1b9b +0x1afb:  ret
086e1b9c +0x1afc:  mov    %eax,-0x1c(%ebp)
086e1b9f +0x1aff:  mov    %esi,(%esp)
086e1ba2 +0x1b02:  call   086e0bf0 <+0xb50>
086e1ba7 +0x1b07:  mov    -0x1c(%ebp),%eax
086e1baa +0x1b0a:  mov    %eax,(%esp)
086e1bad +0x1b0d:  call   08ae3750 <_Unwind_Resume>
086e1bb2 +0x1b12:  mov    -0xc(%edi),%edx
086e1bb5 +0x1b15:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x8,%ecx
086e1bbb +0x1b1b:  mov    %edi,(%ebx)
086e1bbd +0x1b1d:  movl   $0x0,0x4(%ebx)
086e1bc4 +0x1b24:  mov    %ecx,(%ebx,%edx,1)
086e1bc7 +0x1b27:  jmp    086e1b9c <+0x1afc>
086e1bc9 +0x1b29:  nop
086e1bca +0x1b2a:  nop
086e1bcb +0x1b2b:  nop
086e1bcc +0x1b2c:  nop
086e1bcd +0x1b2d:  nop
086e1bce +0x1b2e:  nop
086e1bcf +0x1b2f:  nop
086e1bd0 +0x1b30:  push   %ebp
086e1bd1 +0x1b31:  mov    %esp,%ebp
086e1bd3 +0x1b33:  sub    $0x38,%esp
086e1bd6 +0x1b36:  mov    %ebx,-0xc(%ebp)
086e1bd9 +0x1b39:  mov    0x8(%ebp),%ebx
086e1bdc +0x1b3c:  mov    %esi,-0x8(%ebp)
086e1bdf +0x1b3f:  mov    %edi,-0x4(%ebp)
086e1be2 +0x1b42:  lea    0xc(%ebx),%esi
086e1be5 +0x1b45:  mov    %esi,(%esp)
086e1be8 +0x1b48:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e1bed +0x1b4d:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x4,%edi
086e1bf3 +0x1b53:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x8,%edx
086e1bf9 +0x1b59:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0xc(%ebx)
086e1c00 +0x1b60:  movl   $0x0,0x70(%esi)
086e1c07 +0x1b67:  mov    -0xc(%edi),%eax
086e1c0a +0x1b6a:  mov    %edi,(%ebx)
086e1c0c +0x1b6c:  movl   $0x0,0x4(%ebx)
086e1c13 +0x1b73:  movl   $0x0,0x74(%esi)
086e1c1a +0x1b7a:  mov    %edx,(%ebx,%eax,1)
086e1c1d +0x1b7d:  movb   $0x0,0x78(%esi)
086e1c21 +0x1b81:  movl   $0x0,0x7c(%esi)
086e1c28 +0x1b88:  movl   $0x0,0x80(%esi)
086e1c32 +0x1b92:  movl   $0x0,0x84(%esi)
086e1c3c +0x1b9c:  movl   $0x0,0x88(%esi)
086e1c46 +0x1ba6:  movl   $0x0,0x4(%esp)
086e1c4e +0x1bae:  mov    (%ebx),%eax
086e1c50 +0x1bb0:  mov    -0xc(%eax),%eax
086e1c53 +0x1bb3:  lea    (%ebx,%eax,1),%eax
086e1c56 +0x1bb6:  mov    %eax,(%esp)
086e1c59 +0x1bb9:  call   086e0920 <+0x880>
086e1c5e +0x1bbe:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0xc,%edx
086e1c64 +0x1bc4:  lea    0x8(%ebx),%eax
086e1c67 +0x1bc7:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x10,%ecx
086e1c6d +0x1bcd:  mov    %edx,0x8(%ebx)
086e1c70 +0x1bd0:  mov    -0xc(%edx),%edx
086e1c73 +0x1bd3:  mov    %ecx,0x8(%ebx,%edx,1)
086e1c77 +0x1bd7:  movl   $0x0,0x4(%esp)
086e1c7f +0x1bdf:  mov    0x8(%ebx),%edx
086e1c82 +0x1be2:  add    -0xc(%edx),%eax
086e1c85 +0x1be5:  mov    %eax,(%esp)
086e1c88 +0x1be8:  call   086e0920 <+0x880>
086e1c8d +0x1bed:  movl   $&_ZTVSt14basic_iostreamIwSt11char_traitsIwEE+0xc,(%ebx)
086e1c93 +0x1bf3:  movl   $&_ZTVSt14basic_iostreamIwSt11char_traitsIwEE+0x34,0xc(%ebx)
086e1c9a +0x1bfa:  movl   $&_ZTVSt14basic_iostreamIwSt11char_traitsIwEE+0x20,0x8(%ebx)
086e1ca1 +0x1c01:  mov    -0xc(%ebp),%ebx
086e1ca4 +0x1c04:  mov    -0x8(%ebp),%esi
086e1ca7 +0x1c07:  mov    -0x4(%ebp),%edi
086e1caa +0x1c0a:  mov    %ebp,%esp
086e1cac +0x1c0c:  pop    %ebp
086e1cad +0x1c0d:  ret
086e1cae +0x1c0e:  mov    %eax,-0x1c(%ebp)
086e1cb1 +0x1c11:  mov    %esi,(%esp)
086e1cb4 +0x1c14:  call   086e0bf0 <+0xb50>
086e1cb9 +0x1c19:  mov    -0x1c(%ebp),%eax
086e1cbc +0x1c1c:  mov    %eax,(%esp)
086e1cbf +0x1c1f:  call   08ae3750 <_Unwind_Resume>
086e1cc4 +0x1c24:  mov    -0xc(%edi),%edx
086e1cc7 +0x1c27:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x8,%ecx
086e1ccd +0x1c2d:  mov    %edi,(%ebx)
086e1ccf +0x1c2f:  movl   $0x0,0x4(%ebx)
086e1cd6 +0x1c36:  mov    %ecx,(%ebx,%edx,1)
086e1cd9 +0x1c39:  jmp    086e1cae <+0x1c0e>
086e1cdb +0x1c3b:  nop
086e1cdc +0x1c3c:  nop
086e1cdd +0x1c3d:  nop
086e1cde +0x1c3e:  nop
086e1cdf +0x1c3f:  nop
086e1ce0 +0x1c40:  push   %ebp
086e1ce1 +0x1c41:  mov    %esp,%ebp
086e1ce3 +0x1c43:  sub    $0x38,%esp
086e1ce6 +0x1c46:  mov    %ebx,-0xc(%ebp)
086e1ce9 +0x1c49:  mov    0x8(%ebp),%ebx
086e1cec +0x1c4c:  mov    %esi,-0x8(%ebp)
086e1cef +0x1c4f:  mov    %edi,-0x4(%ebp)
086e1cf2 +0x1c52:  lea    0xc(%ebx),%esi
086e1cf5 +0x1c55:  mov    %esi,(%esp)
086e1cf8 +0x1c58:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e1cfd +0x1c5d:  mov    &_ZTTSd+0x4,%edi
086e1d03 +0x1c63:  movb   $0x0,0x74(%esi)
086e1d07 +0x1c67:  mov    &_ZTTSd+0x8,%edx
086e1d0d +0x1c6d:  mov    0xc(%ebp),%ecx
086e1d10 +0x1c70:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0xc(%ebx)
086e1d17 +0x1c77:  mov    -0xc(%edi),%eax
086e1d1a +0x1c7a:  mov    %edi,(%ebx)
086e1d1c +0x1c7c:  movl   $0x0,0x4(%ebx)
086e1d23 +0x1c83:  movl   $0x0,0x70(%esi)
086e1d2a +0x1c8a:  mov    %edx,(%ebx,%eax,1)
086e1d2d +0x1c8d:  movb   $0x0,0x75(%esi)
086e1d31 +0x1c91:  movl   $0x0,0x78(%esi)
086e1d38 +0x1c98:  movl   $0x0,0x7c(%esi)
086e1d3f +0x1c9f:  movl   $0x0,0x80(%esi)
086e1d49 +0x1ca9:  movl   $0x0,0x84(%esi)
086e1d53 +0x1cb3:  mov    %ecx,0x4(%esp)
086e1d57 +0x1cb7:  mov    (%ebx),%eax
086e1d59 +0x1cb9:  mov    -0xc(%eax),%eax
086e1d5c +0x1cbc:  lea    (%ebx,%eax,1),%eax
086e1d5f +0x1cbf:  mov    %eax,(%esp)
086e1d62 +0x1cc2:  call   086e0ee0 <+0xe40>
086e1d67 +0x1cc7:  mov    &_ZTTSd+0xc,%edx
086e1d6d +0x1ccd:  lea    0x8(%ebx),%eax
086e1d70 +0x1cd0:  mov    &_ZTTSd+0x10,%ecx
086e1d76 +0x1cd6:  mov    %edx,0x8(%ebx)
086e1d79 +0x1cd9:  mov    -0xc(%edx),%edx
086e1d7c +0x1cdc:  mov    %ecx,0x8(%ebx,%edx,1)
086e1d80 +0x1ce0:  mov    0xc(%ebp),%edx
086e1d83 +0x1ce3:  mov    %edx,0x4(%esp)
086e1d87 +0x1ce7:  mov    0x8(%ebx),%edx
086e1d8a +0x1cea:  add    -0xc(%edx),%eax
086e1d8d +0x1ced:  mov    %eax,(%esp)
086e1d90 +0x1cf0:  call   086e0ee0 <+0xe40>
086e1d95 +0x1cf5:  movl   $&_ZTVSd+0xc,(%ebx)
086e1d9b +0x1cfb:  movl   $&_ZTVSd+0x34,0xc(%ebx)
086e1da2 +0x1d02:  movl   $&_ZTVSd+0x20,0x8(%ebx)
086e1da9 +0x1d09:  mov    -0xc(%ebp),%ebx
086e1dac +0x1d0c:  mov    -0x8(%ebp),%esi
086e1daf +0x1d0f:  mov    -0x4(%ebp),%edi
086e1db2 +0x1d12:  mov    %ebp,%esp
086e1db4 +0x1d14:  pop    %ebp
086e1db5 +0x1d15:  ret
086e1db6 +0x1d16:  mov    %eax,-0x1c(%ebp)
086e1db9 +0x1d19:  mov    %esi,(%esp)
086e1dbc +0x1d1c:  call   086e0c10 <+0xb70>
086e1dc1 +0x1d21:  mov    -0x1c(%ebp),%eax
086e1dc4 +0x1d24:  mov    %eax,(%esp)
086e1dc7 +0x1d27:  call   08ae3750 <_Unwind_Resume>
086e1dcc +0x1d2c:  mov    -0xc(%edi),%edx
086e1dcf +0x1d2f:  mov    &_ZTTSd+0x8,%ecx
086e1dd5 +0x1d35:  mov    %edi,(%ebx)
086e1dd7 +0x1d37:  movl   $0x0,0x4(%ebx)
086e1dde +0x1d3e:  mov    %ecx,(%ebx,%edx,1)
086e1de1 +0x1d41:  jmp    086e1db6 <+0x1d16>
086e1de3 +0x1d43:  nop
086e1de4 +0x1d44:  nop
086e1de5 +0x1d45:  nop
086e1de6 +0x1d46:  nop
086e1de7 +0x1d47:  nop
086e1de8 +0x1d48:  nop
086e1de9 +0x1d49:  nop
086e1dea +0x1d4a:  nop
086e1deb +0x1d4b:  nop
086e1dec +0x1d4c:  nop
086e1ded +0x1d4d:  nop
086e1dee +0x1d4e:  nop
086e1def +0x1d4f:  nop
086e1df0 +0x1d50:  push   %ebp
086e1df1 +0x1d51:  mov    %esp,%ebp
086e1df3 +0x1d53:  push   %esi
086e1df4 +0x1d54:  push   %ebx
086e1df5 +0x1d55:  sub    $0x10,%esp
086e1df8 +0x1d58:  mov    0xc(%ebp),%ebx
086e1dfb +0x1d5b:  mov    0x8(%ebp),%esi
086e1dfe +0x1d5e:  mov    0x4(%ebx),%eax
086e1e01 +0x1d61:  mov    0x8(%ebx),%edx
086e1e04 +0x1d64:  mov    %eax,(%esi)
086e1e06 +0x1d66:  mov    -0xc(%eax),%eax
086e1e09 +0x1d69:  movl   $0x0,0x4(%esi)
086e1e10 +0x1d70:  mov    %edx,(%esi,%eax,1)
086e1e13 +0x1d73:  movl   $0x0,0x4(%esp)
086e1e1b +0x1d7b:  mov    (%esi),%eax
086e1e1d +0x1d7d:  mov    -0xc(%eax),%eax
086e1e20 +0x1d80:  lea    (%esi,%eax,1),%eax
086e1e23 +0x1d83:  mov    %eax,(%esp)
086e1e26 +0x1d86:  call   086e0920 <+0x880>
086e1e2b +0x1d8b:  mov    0xc(%ebx),%edx
086e1e2e +0x1d8e:  lea    0x8(%esi),%eax
086e1e31 +0x1d91:  mov    0x10(%ebx),%ecx
086e1e34 +0x1d94:  mov    %edx,0x8(%esi)
086e1e37 +0x1d97:  mov    -0xc(%edx),%edx
086e1e3a +0x1d9a:  mov    %ecx,0x8(%esi,%edx,1)
086e1e3e +0x1d9e:  movl   $0x0,0x4(%esp)
086e1e46 +0x1da6:  mov    0x8(%esi),%edx
086e1e49 +0x1da9:  add    -0xc(%edx),%eax
086e1e4c +0x1dac:  mov    %eax,(%esp)
086e1e4f +0x1daf:  call   086e0920 <+0x880>
086e1e54 +0x1db4:  mov    (%ebx),%eax
086e1e56 +0x1db6:  mov    0x14(%ebx),%edx
086e1e59 +0x1db9:  mov    %eax,(%esi)
086e1e5b +0x1dbb:  mov    -0xc(%eax),%eax
086e1e5e +0x1dbe:  mov    %edx,(%esi,%eax,1)
086e1e61 +0x1dc1:  mov    0x18(%ebx),%eax
086e1e64 +0x1dc4:  mov    %eax,0x8(%esi)
086e1e67 +0x1dc7:  add    $0x10,%esp
086e1e6a +0x1dca:  pop    %ebx
086e1e6b +0x1dcb:  pop    %esi
086e1e6c +0x1dcc:  pop    %ebp
086e1e6d +0x1dcd:  ret
086e1e6e +0x1dce:  mov    %eax,(%esp)
086e1e71 +0x1dd1:  call   08ae3750 <_Unwind_Resume>
086e1e76 +0x1dd6:  mov    0x4(%ebx),%edx
086e1e79 +0x1dd9:  mov    0x8(%ebx),%ecx
086e1e7c +0x1ddc:  mov    %edx,(%esi)
086e1e7e +0x1dde:  mov    -0xc(%edx),%edx
086e1e81 +0x1de1:  movl   $0x0,0x4(%esi)
086e1e88 +0x1de8:  mov    %ecx,(%esi,%edx,1)
086e1e8b +0x1deb:  jmp    086e1e6e <+0x1dce>
086e1e8d +0x1ded:  nop
086e1e8e +0x1dee:  nop
086e1e8f +0x1def:  nop
086e1e90 +0x1df0:  push   %ebp
086e1e91 +0x1df1:  mov    %esp,%ebp
086e1e93 +0x1df3:  sub    $0x38,%esp
086e1e96 +0x1df6:  mov    %ebx,-0xc(%ebp)
086e1e99 +0x1df9:  mov    0x8(%ebp),%ebx
086e1e9c +0x1dfc:  mov    %esi,-0x8(%ebp)
086e1e9f +0x1dff:  mov    %edi,-0x4(%ebp)
086e1ea2 +0x1e02:  lea    0xc(%ebx),%esi
086e1ea5 +0x1e05:  mov    %esi,(%esp)
086e1ea8 +0x1e08:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e1ead +0x1e0d:  mov    &_ZTTSd+0x4,%edi
086e1eb3 +0x1e13:  movb   $0x0,0x74(%esi)
086e1eb7 +0x1e17:  mov    &_ZTTSd+0x8,%edx
086e1ebd +0x1e1d:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0xc(%ebx)
086e1ec4 +0x1e24:  movl   $0x0,0x70(%esi)
086e1ecb +0x1e2b:  mov    -0xc(%edi),%eax
086e1ece +0x1e2e:  mov    %edi,(%ebx)
086e1ed0 +0x1e30:  movl   $0x0,0x4(%ebx)
086e1ed7 +0x1e37:  movb   $0x0,0x75(%esi)
086e1edb +0x1e3b:  mov    %edx,(%ebx,%eax,1)
086e1ede +0x1e3e:  movl   $0x0,0x78(%esi)
086e1ee5 +0x1e45:  movl   $0x0,0x7c(%esi)
086e1eec +0x1e4c:  movl   $0x0,0x80(%esi)
086e1ef6 +0x1e56:  movl   $0x0,0x84(%esi)
086e1f00 +0x1e60:  movl   $0x0,0x4(%esp)
086e1f08 +0x1e68:  mov    (%ebx),%eax
086e1f0a +0x1e6a:  mov    -0xc(%eax),%eax
086e1f0d +0x1e6d:  lea    (%ebx,%eax,1),%eax
086e1f10 +0x1e70:  mov    %eax,(%esp)
086e1f13 +0x1e73:  call   086e0ee0 <+0xe40>
086e1f18 +0x1e78:  mov    &_ZTTSd+0xc,%edx
086e1f1e +0x1e7e:  lea    0x8(%ebx),%eax
086e1f21 +0x1e81:  mov    &_ZTTSd+0x10,%ecx
086e1f27 +0x1e87:  mov    %edx,0x8(%ebx)
086e1f2a +0x1e8a:  mov    -0xc(%edx),%edx
086e1f2d +0x1e8d:  mov    %ecx,0x8(%ebx,%edx,1)
086e1f31 +0x1e91:  movl   $0x0,0x4(%esp)
086e1f39 +0x1e99:  mov    0x8(%ebx),%edx
086e1f3c +0x1e9c:  add    -0xc(%edx),%eax
086e1f3f +0x1e9f:  mov    %eax,(%esp)
086e1f42 +0x1ea2:  call   086e0ee0 <+0xe40>
086e1f47 +0x1ea7:  movl   $&_ZTVSd+0xc,(%ebx)
086e1f4d +0x1ead:  movl   $&_ZTVSd+0x34,0xc(%ebx)
086e1f54 +0x1eb4:  movl   $&_ZTVSd+0x20,0x8(%ebx)
086e1f5b +0x1ebb:  mov    -0xc(%ebp),%ebx
086e1f5e +0x1ebe:  mov    -0x8(%ebp),%esi
086e1f61 +0x1ec1:  mov    -0x4(%ebp),%edi
086e1f64 +0x1ec4:  mov    %ebp,%esp
086e1f66 +0x1ec6:  pop    %ebp
086e1f67 +0x1ec7:  ret
086e1f68 +0x1ec8:  mov    %eax,-0x1c(%ebp)
086e1f6b +0x1ecb:  mov    %esi,(%esp)
086e1f6e +0x1ece:  call   086e0c10 <+0xb70>
086e1f73 +0x1ed3:  mov    -0x1c(%ebp),%eax
086e1f76 +0x1ed6:  mov    %eax,(%esp)
086e1f79 +0x1ed9:  call   08ae3750 <_Unwind_Resume>
086e1f7e +0x1ede:  mov    -0xc(%edi),%edx
086e1f81 +0x1ee1:  mov    &_ZTTSd+0x8,%ecx
086e1f87 +0x1ee7:  mov    %edi,(%ebx)
086e1f89 +0x1ee9:  movl   $0x0,0x4(%ebx)
086e1f90 +0x1ef0:  mov    %ecx,(%ebx,%edx,1)
086e1f93 +0x1ef3:  jmp    086e1f68 <+0x1ec8>
086e1f95 +0x1ef5:  nop
086e1f96 +0x1ef6:  nop
086e1f97 +0x1ef7:  nop
086e1f98 +0x1ef8:  nop
086e1f99 +0x1ef9:  nop
086e1f9a +0x1efa:  nop
086e1f9b +0x1efb:  nop
086e1f9c +0x1efc:  nop
086e1f9d +0x1efd:  nop
086e1f9e +0x1efe:  nop
086e1f9f +0x1eff:  nop
086e1fa0 +0x1f00:  mov    0x4(%esp),%eax
086e1fa4 +0x1f04:  mov    (%eax),%ecx
086e1fa6 +0x1f06:  add    -0xc(%ecx),%eax
086e1fa9 +0x1f09:  mov    %eax,0x4(%esp)
086e1fad +0x1f0d:  jmp    086e1fc0 <+0x1f20>
086e1faf +0x1f0f:  nop
086e1fb0 +0x1f10:  addl   $0xfffffff8,0x4(%esp)
086e1fb5 +0x1f15:  jmp    086e1fc0 <+0x1f20>
086e1fb7 +0x1f17:  nop
086e1fb8 +0x1f18:  nop
086e1fb9 +0x1f19:  lea    0x0(%esi,%eiz,1),%esi
086e1fc0 +0x1f20:  push   %ebp
086e1fc1 +0x1f21:  mov    %esp,%ebp
086e1fc3 +0x1f23:  push   %ebx
086e1fc4 +0x1f24:  sub    $0x14,%esp
086e1fc7 +0x1f27:  mov    0x8(%ebp),%ebx
086e1fca +0x1f2a:  mov    &_ZTTSd+0xc,%eax
086e1fcf +0x1f2f:  mov    &_ZTTSd+0x10,%ecx
086e1fd5 +0x1f35:  lea    0xc(%ebx),%edx
086e1fd8 +0x1f38:  mov    %eax,0x8(%ebx)
086e1fdb +0x1f3b:  mov    -0xc(%eax),%eax
086e1fde +0x1f3e:  mov    %ecx,0x8(%ebx,%eax,1)
086e1fe2 +0x1f42:  mov    &_ZTTSd+0x4,%eax
086e1fe7 +0x1f47:  mov    &_ZTTSd+0x8,%ecx
086e1fed +0x1f4d:  mov    %eax,(%ebx)
086e1fef +0x1f4f:  mov    -0xc(%eax),%eax
086e1ff2 +0x1f52:  movl   $0x0,0x4(%ebx)
086e1ff9 +0x1f59:  mov    %ecx,(%ebx,%eax,1)
086e1ffc +0x1f5c:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0xc(%ebx)
086e2003 +0x1f63:  mov    %edx,(%esp)
086e2006 +0x1f66:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e200b +0x1f6b:  mov    %ebx,0x8(%ebp)
086e200e +0x1f6e:  add    $0x14,%esp
086e2011 +0x1f71:  pop    %ebx
086e2012 +0x1f72:  pop    %ebp
086e2013 +0x1f73:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086e2018 +0x1f78:  nop
086e2019 +0x1f79:  nop
086e201a +0x1f7a:  nop
086e201b +0x1f7b:  nop
086e201c +0x1f7c:  nop
086e201d +0x1f7d:  nop
086e201e +0x1f7e:  nop
086e201f +0x1f7f:  nop
086e2020 +0x1f80:  mov    0x4(%esp),%eax
086e2024 +0x1f84:  mov    (%eax),%ecx
086e2026 +0x1f86:  add    -0xc(%ecx),%eax
086e2029 +0x1f89:  mov    %eax,0x4(%esp)
086e202d +0x1f8d:  jmp    086e2040 <+0x1fa0>
086e202f +0x1f8f:  nop
086e2030 +0x1f90:  addl   $0xfffffff8,0x4(%esp)
086e2035 +0x1f95:  jmp    086e2040 <+0x1fa0>
086e2037 +0x1f97:  nop
086e2038 +0x1f98:  nop
086e2039 +0x1f99:  lea    0x0(%esi,%eiz,1),%esi
086e2040 +0x1fa0:  push   %ebp
086e2041 +0x1fa1:  mov    %esp,%ebp
086e2043 +0x1fa3:  push   %ebx
086e2044 +0x1fa4:  sub    $0x14,%esp
086e2047 +0x1fa7:  mov    0x8(%ebp),%ebx
086e204a +0x1faa:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0xc,%eax
086e204f +0x1faf:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x10,%ecx
086e2055 +0x1fb5:  lea    0xc(%ebx),%edx
086e2058 +0x1fb8:  mov    %eax,0x8(%ebx)
086e205b +0x1fbb:  mov    -0xc(%eax),%eax
086e205e +0x1fbe:  mov    %ecx,0x8(%ebx,%eax,1)
086e2062 +0x1fc2:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x4,%eax
086e2067 +0x1fc7:  mov    &_ZTTSt14basic_iostreamIwSt11char_traitsIwEE+0x8,%ecx
086e206d +0x1fcd:  mov    %eax,(%ebx)
086e206f +0x1fcf:  mov    -0xc(%eax),%eax
086e2072 +0x1fd2:  movl   $0x0,0x4(%ebx)
086e2079 +0x1fd9:  mov    %ecx,(%ebx,%eax,1)
086e207c +0x1fdc:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0xc(%ebx)
086e2083 +0x1fe3:  mov    %edx,(%esp)
086e2086 +0x1fe6:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e208b +0x1feb:  mov    %ebx,0x8(%ebp)
086e208e +0x1fee:  add    $0x14,%esp
086e2091 +0x1ff1:  pop    %ebx
086e2092 +0x1ff2:  pop    %ebp
086e2093 +0x1ff3:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086e2098 +0x1ff8:  nop
086e2099 +0x1ff9:  nop
086e209a +0x1ffa:  nop
086e209b +0x1ffb:  nop
086e209c +0x1ffc:  nop
086e209d +0x1ffd:  nop
086e209e +0x1ffe:  nop
086e209f +0x1fff:  nop
086e20a0 +0x2000:  push   %ebp
086e20a1 +0x2001:  mov    %esp,%ebp
086e20a3 +0x2003:  mov    0xc(%ebp),%edx
086e20a6 +0x2006:  mov    0x8(%ebp),%eax
086e20a9 +0x2009:  mov    (%edx),%ecx
086e20ab +0x200b:  mov    0x4(%edx),%edx
086e20ae +0x200e:  mov    %ecx,(%eax)
086e20b0 +0x2010:  mov    -0xc(%ecx),%ecx
086e20b3 +0x2013:  movl   $0x0,0x4(%eax)
086e20ba +0x201a:  mov    %edx,(%eax,%ecx,1)
086e20bd +0x201d:  pop    %ebp
086e20be +0x201e:  ret
086e20bf +0x201f:  nop
086e20c0 +0x2020:  push   %ebp
086e20c1 +0x2021:  mov    %esp,%ebp
086e20c3 +0x2023:  sub    $0x8,%esp
086e20c6 +0x2026:  mov    0xc(%ebp),%eax
086e20c9 +0x2029:  leave
086e20ca +0x202a:  jmp    *%eax
086e20cc +0x202c:  nop
086e20cd +0x202d:  nop
086e20ce +0x202e:  nop
086e20cf +0x202f:  nop
086e20d0 +0x2030:  push   %ebp
086e20d1 +0x2031:  mov    %esp,%ebp
086e20d3 +0x2033:  push   %ebx
086e20d4 +0x2034:  sub    $0x14,%esp
086e20d7 +0x2037:  mov    0x8(%ebp),%ebx
086e20da +0x203a:  mov    (%ebx),%eax
086e20dc +0x203c:  mov    -0xc(%eax),%eax
086e20df +0x203f:  lea    (%ebx,%eax,1),%eax
086e20e2 +0x2042:  mov    %eax,(%esp)
086e20e5 +0x2045:  call   *0xc(%ebp)
086e20e8 +0x2048:  mov    %ebx,%eax
086e20ea +0x204a:  add    $0x14,%esp
086e20ed +0x204d:  pop    %ebx
086e20ee +0x204e:  pop    %ebp
086e20ef +0x204f:  ret
086e20f0 +0x2050:  push   %ebp
086e20f1 +0x2051:  mov    %esp,%ebp
086e20f3 +0x2053:  push   %ebx
086e20f4 +0x2054:  sub    $0x14,%esp
086e20f7 +0x2057:  mov    0x8(%ebp),%ebx
086e20fa +0x205a:  mov    (%ebx),%eax
086e20fc +0x205c:  mov    -0xc(%eax),%eax
086e20ff +0x205f:  lea    (%ebx,%eax,1),%eax
086e2102 +0x2062:  mov    %eax,(%esp)
086e2105 +0x2065:  call   *0xc(%ebp)
086e2108 +0x2068:  mov    %ebx,%eax
086e210a +0x206a:  add    $0x14,%esp
086e210d +0x206d:  pop    %ebx
086e210e +0x206e:  pop    %ebp
086e210f +0x206f:  ret
086e2110 +0x2070:  push   %ebp
086e2111 +0x2071:  mov    %esp,%ebp
086e2113 +0x2073:  mov    0x8(%ebp),%eax
086e2116 +0x2076:  pop    %ebp
086e2117 +0x2077:  mov    0x4(%eax),%eax
086e211a +0x207a:  ret
086e211b +0x207b:  nop
086e211c +0x207c:  nop
086e211d +0x207d:  nop
086e211e +0x207e:  nop
086e211f +0x207f:  nop
086e2120 +0x2080:  push   %ebp
086e2121 +0x2081:  mov    %esp,%ebp
086e2123 +0x2083:  mov    0x8(%ebp),%eax
086e2126 +0x2086:  pop    %ebp
086e2127 +0x2087:  movzbl (%eax),%eax
086e212a +0x208a:  ret
086e212b +0x208b:  nop
086e212c +0x208c:  nop
086e212d +0x208d:  nop
086e212e +0x208e:  nop
086e212f +0x208f:  nop
086e2130 +0x2090:  push   %ebp
086e2131 +0x2091:  mov    %esp,%ebp
086e2133 +0x2093:  mov    0x8(%ebp),%eax
086e2136 +0x2096:  mov    0xc(%ebp),%ecx
086e2139 +0x2099:  mov    (%eax),%edx
086e213b +0x209b:  mov    -0xc(%edx),%edx
086e213e +0x209e:  lea    (%eax,%edx,1),%edx
086e2141 +0x20a1:  or     %ecx,0xc(%edx)
086e2144 +0x20a4:  pop    %ebp
086e2145 +0x20a5:  ret
086e2146 +0x20a6:  nop
086e2147 +0x20a7:  nop
086e2148 +0x20a8:  nop
086e2149 +0x20a9:  nop
086e214a +0x20aa:  nop
086e214b +0x20ab:  nop
086e214c +0x20ac:  nop
086e214d +0x20ad:  nop
086e214e +0x20ae:  nop
086e214f +0x20af:  nop
086e2150 +0x20b0:  push   %ebp
086e2151 +0x20b1:  mov    %esp,%ebp
086e2153 +0x20b3:  mov    0x8(%ebp),%eax
086e2156 +0x20b6:  mov    0xc(%ebp),%edx
086e2159 +0x20b9:  mov    (%eax),%ecx
086e215b +0x20bb:  not    %edx
086e215d +0x20bd:  mov    -0xc(%ecx),%ecx
086e2160 +0x20c0:  lea    (%eax,%ecx,1),%ecx
086e2163 +0x20c3:  and    %edx,0xc(%ecx)
086e2166 +0x20c6:  pop    %ebp
086e2167 +0x20c7:  ret
086e2168 +0x20c8:  nop
086e2169 +0x20c9:  nop
086e216a +0x20ca:  nop
086e216b +0x20cb:  nop
086e216c +0x20cc:  nop
086e216d +0x20cd:  nop
086e216e +0x20ce:  nop
086e216f +0x20cf:  nop
086e2170 +0x20d0:  push   %ebp
086e2171 +0x20d1:  mov    $0x40,%ecx
086e2176 +0x20d6:  mov    %esp,%ebp
086e2178 +0x20d8:  mov    0xc(%ebp),%edx
086e217b +0x20db:  push   %ebx
086e217c +0x20dc:  mov    0x8(%ebp),%eax
086e217f +0x20df:  cmp    $0x8,%edx
086e2182 +0x20e2:  je     086e2196 <+0x20f6>
086e2184 +0x20e4:  cmp    $0xa,%edx
086e2187 +0x20e7:  mov    $0x2,%cl
086e2189 +0x20e9:  je     086e2196 <+0x20f6>
086e218b +0x20eb:  xor    %ecx,%ecx
086e218d +0x20ed:  cmp    $0x10,%edx
086e2190 +0x20f0:  sete   %cl
086e2193 +0x20f3:  shl    $0x3,%ecx
086e2196 +0x20f6:  mov    (%eax),%edx
086e2198 +0x20f8:  mov    -0xc(%edx),%ebx
086e219b +0x20fb:  add    %eax,%ebx
086e219d +0x20fd:  mov    0xc(%ebx),%edx
086e21a0 +0x2100:  and    $0xffffffb5,%edx
086e21a3 +0x2103:  or     %ecx,%edx
086e21a5 +0x2105:  mov    %edx,0xc(%ebx)
086e21a8 +0x2108:  pop    %ebx
086e21a9 +0x2109:  pop    %ebp
086e21aa +0x210a:  ret
086e21ab +0x210b:  nop
086e21ac +0x210c:  nop
086e21ad +0x210d:  nop
086e21ae +0x210e:  nop
086e21af +0x210f:  nop
086e21b0 +0x2110:  push   %ebp
086e21b1 +0x2111:  mov    %esp,%ebp
086e21b3 +0x2113:  mov    0x8(%ebp),%eax
086e21b6 +0x2116:  mov    0xc(%ebp),%ecx
086e21b9 +0x2119:  mov    (%eax),%edx
086e21bb +0x211b:  mov    -0xc(%edx),%edx
086e21be +0x211e:  mov    %ecx,0x4(%eax,%edx,1)
086e21c2 +0x2122:  pop    %ebp
086e21c3 +0x2123:  ret
086e21c4 +0x2124:  nop
086e21c5 +0x2125:  nop
086e21c6 +0x2126:  nop
086e21c7 +0x2127:  nop
086e21c8 +0x2128:  nop
086e21c9 +0x2129:  nop
086e21ca +0x212a:  nop
086e21cb +0x212b:  nop
086e21cc +0x212c:  nop
086e21cd +0x212d:  nop
086e21ce +0x212e:  nop
086e21cf +0x212f:  nop
086e21d0 +0x2130:  push   %ebp
086e21d1 +0x2131:  mov    %esp,%ebp
086e21d3 +0x2133:  mov    0x8(%ebp),%eax
086e21d6 +0x2136:  mov    0xc(%ebp),%ecx
086e21d9 +0x2139:  mov    (%eax),%edx
086e21db +0x213b:  mov    -0xc(%edx),%edx
086e21de +0x213e:  mov    %ecx,0x8(%eax,%edx,1)
086e21e2 +0x2142:  pop    %ebp
086e21e3 +0x2143:  ret
086e21e4 +0x2144:  nop
086e21e5 +0x2145:  nop
086e21e6 +0x2146:  nop
086e21e7 +0x2147:  nop
086e21e8 +0x2148:  nop
086e21e9 +0x2149:  nop
086e21ea +0x214a:  nop
086e21eb +0x214b:  nop
086e21ec +0x214c:  nop
086e21ed +0x214d:  nop
086e21ee +0x214e:  nop
086e21ef +0x214f:  nop
086e21f0 +0x2150:  push   %ebp
086e21f1 +0x2151:  mov    %esp,%ebp
086e21f3 +0x2153:  mov    0xc(%ebp),%edx
086e21f6 +0x2156:  mov    0x8(%ebp),%eax
086e21f9 +0x2159:  mov    (%edx),%ecx
086e21fb +0x215b:  mov    0x4(%edx),%edx
086e21fe +0x215e:  mov    %ecx,(%eax)
086e2200 +0x2160:  mov    -0xc(%ecx),%ecx
086e2203 +0x2163:  movl   $0x0,0x4(%eax)
086e220a +0x216a:  mov    %edx,(%eax,%ecx,1)
086e220d +0x216d:  pop    %ebp
086e220e +0x216e:  ret
086e220f +0x216f:  nop
086e2210 +0x2170:  push   %ebp
086e2211 +0x2171:  mov    %esp,%ebp
086e2213 +0x2173:  sub    $0x8,%esp
086e2216 +0x2176:  mov    0xc(%ebp),%eax
086e2219 +0x2179:  leave
086e221a +0x217a:  jmp    *%eax
086e221c +0x217c:  nop
086e221d +0x217d:  nop
086e221e +0x217e:  nop
086e221f +0x217f:  nop
086e2220 +0x2180:  push   %ebp
086e2221 +0x2181:  mov    %esp,%ebp
086e2223 +0x2183:  push   %ebx
086e2224 +0x2184:  sub    $0x14,%esp
086e2227 +0x2187:  mov    0x8(%ebp),%ebx
086e222a +0x218a:  mov    (%ebx),%eax
086e222c +0x218c:  mov    -0xc(%eax),%eax
086e222f +0x218f:  lea    (%ebx,%eax,1),%eax
086e2232 +0x2192:  mov    %eax,(%esp)
086e2235 +0x2195:  call   *0xc(%ebp)
086e2238 +0x2198:  mov    %ebx,%eax
086e223a +0x219a:  add    $0x14,%esp
086e223d +0x219d:  pop    %ebx
086e223e +0x219e:  pop    %ebp
086e223f +0x219f:  ret
086e2240 +0x21a0:  push   %ebp
086e2241 +0x21a1:  mov    %esp,%ebp
086e2243 +0x21a3:  push   %ebx
086e2244 +0x21a4:  sub    $0x14,%esp
086e2247 +0x21a7:  mov    0x8(%ebp),%ebx
086e224a +0x21aa:  mov    (%ebx),%eax
086e224c +0x21ac:  mov    -0xc(%eax),%eax
086e224f +0x21af:  lea    (%ebx,%eax,1),%eax
086e2252 +0x21b2:  mov    %eax,(%esp)
086e2255 +0x21b5:  call   *0xc(%ebp)
086e2258 +0x21b8:  mov    %ebx,%eax
086e225a +0x21ba:  add    $0x14,%esp
086e225d +0x21bd:  pop    %ebx
086e225e +0x21be:  pop    %ebp
086e225f +0x21bf:  ret
086e2260 +0x21c0:  push   %ebp
086e2261 +0x21c1:  mov    %esp,%ebp
086e2263 +0x21c3:  mov    0x8(%ebp),%eax
086e2266 +0x21c6:  pop    %ebp
086e2267 +0x21c7:  mov    0x4(%eax),%eax
086e226a +0x21ca:  ret
086e226b +0x21cb:  nop
086e226c +0x21cc:  nop
086e226d +0x21cd:  nop
086e226e +0x21ce:  nop
086e226f +0x21cf:  nop
086e2270 +0x21d0:  push   %ebp
086e2271 +0x21d1:  mov    %esp,%ebp
086e2273 +0x21d3:  mov    0x8(%ebp),%eax
086e2276 +0x21d6:  pop    %ebp
086e2277 +0x21d7:  movzbl (%eax),%eax
086e227a +0x21da:  ret
086e227b +0x21db:  nop
086e227c +0x21dc:  nop
086e227d +0x21dd:  nop
086e227e +0x21de:  nop
086e227f +0x21df:  nop
086e2280 +0x21e0:  push   %ebp
086e2281 +0x21e1:  mov    %esp,%ebp
086e2283 +0x21e3:  mov    0x8(%ebp),%eax
086e2286 +0x21e6:  mov    0xc(%ebp),%ecx
086e2289 +0x21e9:  mov    (%eax),%edx
086e228b +0x21eb:  mov    -0xc(%edx),%edx
086e228e +0x21ee:  lea    (%eax,%edx,1),%edx
086e2291 +0x21f1:  or     %ecx,0xc(%edx)
086e2294 +0x21f4:  pop    %ebp
086e2295 +0x21f5:  ret
086e2296 +0x21f6:  nop
086e2297 +0x21f7:  nop
086e2298 +0x21f8:  nop
086e2299 +0x21f9:  nop
086e229a +0x21fa:  nop
086e229b +0x21fb:  nop
086e229c +0x21fc:  nop
086e229d +0x21fd:  nop
086e229e +0x21fe:  nop
086e229f +0x21ff:  nop
086e22a0 +0x2200:  push   %ebp
086e22a1 +0x2201:  mov    %esp,%ebp
086e22a3 +0x2203:  mov    0x8(%ebp),%eax
086e22a6 +0x2206:  mov    0xc(%ebp),%edx
086e22a9 +0x2209:  mov    (%eax),%ecx
086e22ab +0x220b:  not    %edx
086e22ad +0x220d:  mov    -0xc(%ecx),%ecx
086e22b0 +0x2210:  lea    (%eax,%ecx,1),%ecx
086e22b3 +0x2213:  and    %edx,0xc(%ecx)
086e22b6 +0x2216:  pop    %ebp
086e22b7 +0x2217:  ret
086e22b8 +0x2218:  nop
086e22b9 +0x2219:  nop
086e22ba +0x221a:  nop
086e22bb +0x221b:  nop
086e22bc +0x221c:  nop
086e22bd +0x221d:  nop
086e22be +0x221e:  nop
086e22bf +0x221f:  nop
086e22c0 +0x2220:  push   %ebp
086e22c1 +0x2221:  mov    $0x40,%ecx
086e22c6 +0x2226:  mov    %esp,%ebp
086e22c8 +0x2228:  mov    0xc(%ebp),%edx
086e22cb +0x222b:  push   %ebx
086e22cc +0x222c:  mov    0x8(%ebp),%eax
086e22cf +0x222f:  cmp    $0x8,%edx
086e22d2 +0x2232:  je     086e22e6 <+0x2246>
086e22d4 +0x2234:  cmp    $0xa,%edx
086e22d7 +0x2237:  mov    $0x2,%cl
086e22d9 +0x2239:  je     086e22e6 <+0x2246>
086e22db +0x223b:  xor    %ecx,%ecx
086e22dd +0x223d:  cmp    $0x10,%edx
086e22e0 +0x2240:  sete   %cl
086e22e3 +0x2243:  shl    $0x3,%ecx
086e22e6 +0x2246:  mov    (%eax),%edx
086e22e8 +0x2248:  mov    -0xc(%edx),%ebx
086e22eb +0x224b:  add    %eax,%ebx
086e22ed +0x224d:  mov    0xc(%ebx),%edx
086e22f0 +0x2250:  and    $0xffffffb5,%edx
086e22f3 +0x2253:  or     %ecx,%edx
086e22f5 +0x2255:  mov    %edx,0xc(%ebx)
086e22f8 +0x2258:  pop    %ebx
086e22f9 +0x2259:  pop    %ebp
086e22fa +0x225a:  ret
086e22fb +0x225b:  nop
086e22fc +0x225c:  nop
086e22fd +0x225d:  nop
086e22fe +0x225e:  nop
086e22ff +0x225f:  nop
086e2300 +0x2260:  push   %ebp
086e2301 +0x2261:  mov    %esp,%ebp
086e2303 +0x2263:  mov    0x8(%ebp),%eax
086e2306 +0x2266:  mov    0xc(%ebp),%ecx
086e2309 +0x2269:  mov    (%eax),%edx
086e230b +0x226b:  mov    -0xc(%edx),%edx
086e230e +0x226e:  mov    %ecx,0x4(%eax,%edx,1)
086e2312 +0x2272:  pop    %ebp
086e2313 +0x2273:  ret
086e2314 +0x2274:  nop
086e2315 +0x2275:  nop
086e2316 +0x2276:  nop
086e2317 +0x2277:  nop
086e2318 +0x2278:  nop
086e2319 +0x2279:  nop
086e231a +0x227a:  nop
086e231b +0x227b:  nop
086e231c +0x227c:  nop
086e231d +0x227d:  nop
086e231e +0x227e:  nop
086e231f +0x227f:  nop
086e2320 +0x2280:  push   %ebp
086e2321 +0x2281:  mov    %esp,%ebp
086e2323 +0x2283:  mov    0x8(%ebp),%eax
086e2326 +0x2286:  mov    0xc(%ebp),%ecx
086e2329 +0x2289:  mov    (%eax),%edx
086e232b +0x228b:  mov    -0xc(%edx),%edx
086e232e +0x228e:  mov    %ecx,0x8(%eax,%edx,1)
086e2332 +0x2292:  pop    %ebp
086e2333 +0x2293:  ret
086e2334 +0x2294:  nop
086e2335 +0x2295:  nop
086e2336 +0x2296:  nop
086e2337 +0x2297:  nop
086e2338 +0x2298:  nop
086e2339 +0x2299:  nop
086e233a +0x229a:  nop
086e233b +0x229b:  nop
086e233c +0x229c:  nop
086e233d +0x229d:  nop
086e233e +0x229e:  nop
086e233f +0x229f:  nop
086e2340 +0x22a0:  push   %ebp
086e2341 +0x22a1:  mov    %esp,%ebp
086e2343 +0x22a3:  sub    $0x18,%esp
086e2346 +0x22a6:  mov    %esi,-0x4(%ebp)
086e2349 +0x22a9:  mov    0x8(%ebp),%esi
086e234c +0x22ac:  mov    %ebx,-0x8(%ebp)
086e234f +0x22af:  mov    (%esi),%eax
086e2351 +0x22b1:  mov    -0xc(%eax),%ebx
086e2354 +0x22b4:  add    %esi,%ebx
086e2356 +0x22b6:  cmpb   $0x0,0x78(%ebx)
086e235a +0x22ba:  je     086e2370 <+0x22d0>
086e235c +0x22bc:  mov    0xc(%ebp),%eax
086e235f +0x22bf:  mov    %eax,0x74(%ebx)
086e2362 +0x22c2:  mov    %esi,%eax
086e2364 +0x22c4:  mov    -0x8(%ebp),%ebx
086e2367 +0x22c7:  mov    -0x4(%ebp),%esi
086e236a +0x22ca:  mov    %ebp,%esp
086e236c +0x22cc:  pop    %ebp
086e236d +0x22cd:  ret
086e236e +0x22ce:  xchg   %ax,%ax
086e2370 +0x22d0:  mov    0x80(%ebx),%eax
086e2376 +0x22d6:  test   %eax,%eax
086e2378 +0x22d8:  je     086e2393 <+0x22f3>
086e237a +0x22da:  mov    (%eax),%edx
086e237c +0x22dc:  movl   $0x20,0x4(%esp)
086e2384 +0x22e4:  mov    %eax,(%esp)
086e2387 +0x22e7:  call   *0x28(%edx)
086e238a +0x22ea:  movb   $0x1,0x78(%ebx)
086e238e +0x22ee:  mov    %eax,0x74(%ebx)
086e2391 +0x22f1:  jmp    086e235c <+0x22bc>
086e2393 +0x22f3:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e2398 +0x22f8:  nop
086e2399 +0x22f9:  nop
086e239a +0x22fa:  nop
086e239b +0x22fb:  nop
086e239c +0x22fc:  nop
086e239d +0x22fd:  nop
086e239e +0x22fe:  nop
086e239f +0x22ff:  nop
086e23a0 +0x2300:  push   %ebp
086e23a1 +0x2301:  mov    %esp,%ebp
086e23a3 +0x2303:  sub    $0x18,%esp
086e23a6 +0x2306:  mov    0xc(%ebp),%edx
086e23a9 +0x2309:  mov    0x8(%ebp),%eax
086e23ac +0x230c:  mov    (%edx),%ecx
086e23ae +0x230e:  mov    0x4(%edx),%edx
086e23b1 +0x2311:  mov    %ecx,(%eax)
086e23b3 +0x2313:  mov    -0xc(%ecx),%ecx
086e23b6 +0x2316:  movl   $0x0,0x4(%eax)
086e23bd +0x231d:  mov    %edx,(%eax,%ecx,1)
086e23c0 +0x2320:  movl   $0x0,0x4(%esp)
086e23c8 +0x2328:  mov    (%eax),%edx
086e23ca +0x232a:  add    -0xc(%edx),%eax
086e23cd +0x232d:  mov    %eax,(%esp)
086e23d0 +0x2330:  call   086e0920 <+0x880>
086e23d5 +0x2335:  leave
086e23d6 +0x2336:  ret
086e23d7 +0x2337:  mov    %eax,(%esp)
086e23da +0x233a:  call   08ae3750 <_Unwind_Resume>
086e23df +0x233f:  nop
086e23e0 +0x2340:  push   %ebp
086e23e1 +0x2341:  mov    %esp,%ebp
086e23e3 +0x2343:  sub    $0x18,%esp
086e23e6 +0x2346:  mov    0xc(%ebp),%edx
086e23e9 +0x2349:  mov    0x8(%ebp),%eax
086e23ec +0x234c:  mov    (%edx),%ecx
086e23ee +0x234e:  mov    0x4(%edx),%edx
086e23f1 +0x2351:  mov    %ecx,(%eax)
086e23f3 +0x2353:  mov    -0xc(%ecx),%ecx
086e23f6 +0x2356:  movl   $0x0,0x4(%eax)
086e23fd +0x235d:  mov    %edx,(%eax,%ecx,1)
086e2400 +0x2360:  mov    0x10(%ebp),%edx
086e2403 +0x2363:  mov    %edx,0x4(%esp)
086e2407 +0x2367:  mov    (%eax),%edx
086e2409 +0x2369:  add    -0xc(%edx),%eax
086e240c +0x236c:  mov    %eax,(%esp)
086e240f +0x236f:  call   086e0920 <+0x880>
086e2414 +0x2374:  leave
086e2415 +0x2375:  ret
086e2416 +0x2376:  mov    %eax,(%esp)
086e2419 +0x2379:  call   08ae3750 <_Unwind_Resume>
086e241e +0x237e:  nop
086e241f +0x237f:  nop
086e2420 +0x2380:  push   %ebp
086e2421 +0x2381:  mov    %esp,%ebp
086e2423 +0x2383:  sub    $0x18,%esp
086e2426 +0x2386:  mov    %esi,-0x4(%ebp)
086e2429 +0x2389:  mov    0x8(%ebp),%esi
086e242c +0x238c:  mov    %ebx,-0x8(%ebp)
086e242f +0x238f:  lea    0x8(%esi),%ebx
086e2432 +0x2392:  mov    %ebx,(%esp)
086e2435 +0x2395:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e243a +0x239a:  movl   $0x0,0x70(%ebx)
086e2441 +0x23a1:  movl   $0x0,0x74(%ebx)
086e2448 +0x23a8:  movb   $0x0,0x78(%ebx)
086e244c +0x23ac:  movl   $0x0,0x7c(%ebx)
086e2453 +0x23b3:  movl   $0x0,0x80(%ebx)
086e245d +0x23bd:  movl   $0x0,0x84(%ebx)
086e2467 +0x23c7:  movl   $0x0,0x88(%ebx)
086e2471 +0x23d1:  movl   $&_ZTVSt13basic_istreamIwSt11char_traitsIwEE+0xc,(%esi)
086e2477 +0x23d7:  movl   $&_ZTVSt13basic_istreamIwSt11char_traitsIwEE+0x20,0x8(%esi)
086e247e +0x23de:  movl   $0x0,0x4(%esi)
086e2485 +0x23e5:  movl   $0x0,0x4(%esp)
086e248d +0x23ed:  mov    %ebx,(%esp)
086e2490 +0x23f0:  call   086e0920 <+0x880>
086e2495 +0x23f5:  mov    -0x8(%ebp),%ebx
086e2498 +0x23f8:  mov    -0x4(%ebp),%esi
086e249b +0x23fb:  mov    %ebp,%esp
086e249d +0x23fd:  pop    %ebp
086e249e +0x23fe:  ret
086e249f +0x23ff:  mov    %eax,%esi
086e24a1 +0x2401:  mov    %ebx,(%esp)
086e24a4 +0x2404:  call   086e0bf0 <+0xb50>
086e24a9 +0x2409:  mov    %esi,(%esp)
086e24ac +0x240c:  call   08ae3750 <_Unwind_Resume>
086e24b1 +0x2411:  nop
086e24b2 +0x2412:  nop
086e24b3 +0x2413:  nop
086e24b4 +0x2414:  nop
086e24b5 +0x2415:  nop
086e24b6 +0x2416:  nop
086e24b7 +0x2417:  nop
086e24b8 +0x2418:  nop
086e24b9 +0x2419:  nop
086e24ba +0x241a:  nop
086e24bb +0x241b:  nop
086e24bc +0x241c:  nop
086e24bd +0x241d:  nop
086e24be +0x241e:  nop
086e24bf +0x241f:  nop
086e24c0 +0x2420:  push   %ebp
086e24c1 +0x2421:  mov    %esp,%ebp
086e24c3 +0x2423:  sub    $0x28,%esp
086e24c6 +0x2426:  mov    %esi,-0x8(%ebp)
086e24c9 +0x2429:  mov    0x8(%ebp),%esi
086e24cc +0x242c:  mov    %ebx,-0xc(%ebp)
086e24cf +0x242f:  mov    %edi,-0x4(%ebp)
086e24d2 +0x2432:  mov    (%esi),%eax
086e24d4 +0x2434:  mov    -0xc(%eax),%ebx
086e24d7 +0x2437:  add    %esi,%ebx
086e24d9 +0x2439:  cmpb   $0x0,0x75(%ebx)
086e24dd +0x243d:  je     086e24f8 <+0x2458>
086e24df +0x243f:  movzbl 0xc(%ebp),%eax
086e24e3 +0x2443:  mov    %al,0x74(%ebx)
086e24e6 +0x2446:  mov    %esi,%eax
086e24e8 +0x2448:  mov    -0xc(%ebp),%ebx
086e24eb +0x244b:  mov    -0x8(%ebp),%esi
086e24ee +0x244e:  mov    -0x4(%ebp),%edi
086e24f1 +0x2451:  mov    %ebp,%esp
086e24f3 +0x2453:  pop    %ebp
086e24f4 +0x2454:  ret
086e24f5 +0x2455:  lea    0x0(%esi),%esi
086e24f8 +0x2458:  mov    0x7c(%ebx),%edi
086e24fb +0x245b:  test   %edi,%edi
086e24fd +0x245d:  je     086e2532 <+0x2492>
086e24ff +0x245f:  cmpb   $0x0,0x1c(%edi)
086e2503 +0x2463:  je     086e2518 <+0x2478>
086e2505 +0x2465:  movzbl 0x3d(%edi),%eax
086e2509 +0x2469:  mov    %al,0x74(%ebx)
086e250c +0x246c:  movb   $0x1,0x75(%ebx)
086e2510 +0x2470:  jmp    086e24df <+0x243f>
086e2512 +0x2472:  lea    0x0(%esi),%esi
086e2518 +0x2478:  mov    %edi,(%esp)
086e251b +0x247b:  call   087269c0 <_ZNKSt5ctypeIcE13_M_widen_initEv>  ; std::ctype<char>::_M_widen_init() const
086e2520 +0x2480:  mov    (%edi),%eax
086e2522 +0x2482:  movl   $0x20,0x4(%esp)
086e252a +0x248a:  mov    %edi,(%esp)
086e252d +0x248d:  call   *0x18(%eax)
086e2530 +0x2490:  jmp    086e2509 <+0x2469>
086e2532 +0x2492:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e2537 +0x2497:  nop
086e2538 +0x2498:  nop
086e2539 +0x2499:  nop
086e253a +0x249a:  nop
086e253b +0x249b:  nop
086e253c +0x249c:  nop
086e253d +0x249d:  nop
086e253e +0x249e:  nop
086e253f +0x249f:  nop
086e2540 +0x24a0:  push   %ebp
086e2541 +0x24a1:  mov    %esp,%ebp
086e2543 +0x24a3:  sub    $0x8,%esp
086e2546 +0x24a6:  leave
086e2547 +0x24a7:  jmp    086e7ec0 <_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_>  ; std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std::char_traits<char> >(std::basic_istream<char, std::char_traits<char> >&, char*)
086e254c +0x24ac:  nop
086e254d +0x24ad:  nop
086e254e +0x24ae:  nop
086e254f +0x24af:  nop
086e2550 +0x24b0:  push   %ebp
086e2551 +0x24b1:  mov    %esp,%ebp
086e2553 +0x24b3:  sub    $0x8,%esp
086e2556 +0x24b6:  leave
086e2557 +0x24b7:  jmp    086e7ec0 <_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_>  ; std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std::char_traits<char> >(std::basic_istream<char, std::char_traits<char> >&, char*)
086e255c +0x24bc:  nop
086e255d +0x24bd:  nop
086e255e +0x24be:  nop
086e255f +0x24bf:  nop
086e2560 +0x24c0:  push   %ebp
086e2561 +0x24c1:  mov    %esp,%ebp
086e2563 +0x24c3:  sub    $0x18,%esp
086e2566 +0x24c6:  mov    0xc(%ebp),%edx
086e2569 +0x24c9:  mov    0x8(%ebp),%eax
086e256c +0x24cc:  mov    (%edx),%ecx
086e256e +0x24ce:  mov    0x4(%edx),%edx
086e2571 +0x24d1:  mov    %ecx,(%eax)
086e2573 +0x24d3:  mov    -0xc(%ecx),%ecx
086e2576 +0x24d6:  movl   $0x0,0x4(%eax)
086e257d +0x24dd:  mov    %edx,(%eax,%ecx,1)
086e2580 +0x24e0:  movl   $0x0,0x4(%esp)
086e2588 +0x24e8:  mov    (%eax),%edx
086e258a +0x24ea:  add    -0xc(%edx),%eax
086e258d +0x24ed:  mov    %eax,(%esp)
086e2590 +0x24f0:  call   086e0ee0 <+0xe40>
086e2595 +0x24f5:  leave
086e2596 +0x24f6:  ret
086e2597 +0x24f7:  mov    %eax,(%esp)
086e259a +0x24fa:  call   08ae3750 <_Unwind_Resume>
086e259f +0x24ff:  nop
086e25a0 +0x2500:  push   %ebp
086e25a1 +0x2501:  mov    %esp,%ebp
086e25a3 +0x2503:  sub    $0x18,%esp
086e25a6 +0x2506:  mov    %esi,-0x4(%ebp)
086e25a9 +0x2509:  mov    0x8(%ebp),%esi
086e25ac +0x250c:  mov    %ebx,-0x8(%ebp)
086e25af +0x250f:  lea    0x8(%esi),%ebx
086e25b2 +0x2512:  mov    %ebx,(%esp)
086e25b5 +0x2515:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e25ba +0x251a:  movb   $0x0,0x74(%ebx)
086e25be +0x251e:  mov    0xc(%ebp),%eax
086e25c1 +0x2521:  movl   $0x0,0x70(%ebx)
086e25c8 +0x2528:  movb   $0x0,0x75(%ebx)
086e25cc +0x252c:  movl   $0x0,0x78(%ebx)
086e25d3 +0x2533:  movl   $0x0,0x7c(%ebx)
086e25da +0x253a:  movl   $0x0,0x80(%ebx)
086e25e4 +0x2544:  movl   $0x0,0x84(%ebx)
086e25ee +0x254e:  movl   $&_ZTVSi+0xc,(%esi)
086e25f4 +0x2554:  movl   $&_ZTVSi+0x20,0x8(%esi)
086e25fb +0x255b:  movl   $0x0,0x4(%esi)
086e2602 +0x2562:  mov    %eax,0x4(%esp)
086e2606 +0x2566:  mov    %ebx,(%esp)
086e2609 +0x2569:  call   086e0ee0 <+0xe40>
086e260e +0x256e:  mov    -0x8(%ebp),%ebx
086e2611 +0x2571:  mov    -0x4(%ebp),%esi
086e2614 +0x2574:  mov    %ebp,%esp
086e2616 +0x2576:  pop    %ebp
086e2617 +0x2577:  ret
086e2618 +0x2578:  mov    %eax,%esi
086e261a +0x257a:  mov    %ebx,(%esp)
086e261d +0x257d:  call   086e0c10 <+0xb70>
086e2622 +0x2582:  mov    %esi,(%esp)
086e2625 +0x2585:  call   08ae3750 <_Unwind_Resume>
086e262a +0x258a:  nop
086e262b +0x258b:  nop
086e262c +0x258c:  nop
086e262d +0x258d:  nop
086e262e +0x258e:  nop
086e262f +0x258f:  nop
086e2630 +0x2590:  push   %ebp
086e2631 +0x2591:  mov    %esp,%ebp
086e2633 +0x2593:  sub    $0x18,%esp
086e2636 +0x2596:  mov    0xc(%ebp),%edx
086e2639 +0x2599:  mov    0x8(%ebp),%eax
086e263c +0x259c:  mov    (%edx),%ecx
086e263e +0x259e:  mov    0x4(%edx),%edx
086e2641 +0x25a1:  mov    %ecx,(%eax)
086e2643 +0x25a3:  mov    -0xc(%ecx),%ecx
086e2646 +0x25a6:  movl   $0x0,0x4(%eax)
086e264d +0x25ad:  mov    %edx,(%eax,%ecx,1)
086e2650 +0x25b0:  mov    0x10(%ebp),%edx
086e2653 +0x25b3:  mov    %edx,0x4(%esp)
086e2657 +0x25b7:  mov    (%eax),%edx
086e2659 +0x25b9:  add    -0xc(%edx),%eax
086e265c +0x25bc:  mov    %eax,(%esp)
086e265f +0x25bf:  call   086e0ee0 <+0xe40>
086e2664 +0x25c4:  leave
086e2665 +0x25c5:  ret
086e2666 +0x25c6:  mov    %eax,(%esp)
086e2669 +0x25c9:  call   08ae3750 <_Unwind_Resume>
086e266e +0x25ce:  nop
086e266f +0x25cf:  nop
086e2670 +0x25d0:  push   %ebp
086e2671 +0x25d1:  mov    %esp,%ebp
086e2673 +0x25d3:  push   %esi
086e2674 +0x25d4:  push   %ebx
086e2675 +0x25d5:  sub    $0x50,%esp
086e2678 +0x25d8:  mov    0x8(%ebp),%ebx
086e267b +0x25db:  mov    0xc(%ebp),%esi
086e267e +0x25de:  mov    %gs:0x14,%eax
086e2684 +0x25e4:  mov    %eax,-0xc(%ebp)
086e2687 +0x25e7:  xor    %eax,%eax
086e2689 +0x25e9:  movl   $0x0,0x8(%ebx)
086e2690 +0x25f0:  movl   $0x0,0xc(%ebx)
086e2697 +0x25f7:  mov    (%esi),%eax
086e2699 +0x25f9:  movl   $0xffffffff,(%ebx)
086e269f +0x25ff:  movl   $0xffffffff,0x4(%ebx)
086e26a6 +0x2606:  mov    -0xc(%eax),%eax
086e26a9 +0x2609:  lea    (%esi,%eax,1),%eax
086e26ac +0x260c:  testb  $0x5,0x14(%eax)
086e26b0 +0x2610:  je     086e26d0 <+0x2630>
086e26b2 +0x2612:  mov    -0xc(%ebp),%edx
086e26b5 +0x2615:  xor    %gs:0x14,%edx
086e26bc +0x261c:  mov    %ebx,%eax
086e26be +0x261e:  jne    086e271e <+0x267e>
086e26c0 +0x2620:  lea    -0x8(%ebp),%esp
086e26c3 +0x2623:  pop    %ebx
086e26c4 +0x2624:  pop    %esi
086e26c5 +0x2625:  pop    %ebp
086e26c6 +0x2626:  ret    $0x4
086e26c9 +0x2629:  lea    0x0(%esi,%eiz,1),%esi
086e26d0 +0x2630:  mov    0x7c(%eax),%eax
086e26d3 +0x2633:  lea    -0x1c(%ebp),%ecx
086e26d6 +0x2636:  mov    (%eax),%edx
086e26d8 +0x2638:  movl   $0x8,0x14(%esp)
086e26e0 +0x2640:  movl   $0x1,0x10(%esp)
086e26e8 +0x2648:  movl   $0x0,0x8(%esp)
086e26f0 +0x2650:  movl   $0x0,0xc(%esp)
086e26f8 +0x2658:  mov    %eax,0x4(%esp)
086e26fc +0x265c:  mov    %ecx,(%esp)
086e26ff +0x265f:  call   *0x10(%edx)
086e2702 +0x2662:  mov    -0x1c(%ebp),%eax
086e2705 +0x2665:  sub    $0x4,%esp
086e2708 +0x2668:  mov    %eax,(%ebx)
086e270a +0x266a:  mov    -0x18(%ebp),%eax
086e270d +0x266d:  mov    %eax,0x4(%ebx)
086e2710 +0x2670:  mov    -0x14(%ebp),%eax
086e2713 +0x2673:  mov    %eax,0x8(%ebx)
086e2716 +0x2676:  mov    -0x10(%ebp),%eax
086e2719 +0x2679:  mov    %eax,0xc(%ebx)
086e271c +0x267c:  jmp    086e26b2 <+0x2612>
086e271e +0x267e:  call   0807d980 <_init+0x278>
086e2723 +0x2683:  cmp    $0x2,%edx
086e2726 +0x2686:  je     086e274f <+0x26af>
086e2728 +0x2688:  mov    %eax,(%esp)
086e272b +0x268b:  call   08725ce0 <__cxa_begin_catch>
086e2730 +0x2690:  movl   $0x1,0x4(%esp)
086e2738 +0x2698:  mov    (%esi),%eax
086e273a +0x269a:  add    -0xc(%eax),%esi
086e273d +0x269d:  mov    %esi,(%esp)
086e2740 +0x26a0:  call   086e0cb0 <+0xc10>
086e2745 +0x26a5:  call   08725c30 <__cxa_end_catch>
086e274a +0x26aa:  jmp    086e26b2 <+0x2612>
086e274f +0x26af:  mov    %eax,(%esp)
086e2752 +0x26b2:  call   08725ce0 <__cxa_begin_catch>
086e2757 +0x26b7:  movl   $0x1,0x4(%esp)
086e275f +0x26bf:  mov    (%esi),%eax
086e2761 +0x26c1:  add    -0xc(%eax),%esi
086e2764 +0x26c4:  mov    %esi,(%esp)
086e2767 +0x26c7:  call   086e0cb0 <+0xc10>
086e276c +0x26cc:  call   08724be0 <__cxa_rethrow>
086e2771 +0x26d1:  mov    %eax,-0x2c(%ebp)
086e2774 +0x26d4:  call   08725c30 <__cxa_end_catch>
086e2779 +0x26d9:  mov    -0x2c(%ebp),%eax
086e277c +0x26dc:  mov    %eax,(%esp)
086e277f +0x26df:  call   08ae3750 <_Unwind_Resume>
086e2784 +0x26e4:  jmp    086e2771 <+0x26d1>
086e2786 +0x26e6:  nop
086e2787 +0x26e7:  nop
086e2788 +0x26e8:  nop
086e2789 +0x26e9:  nop
086e278a +0x26ea:  nop
086e278b +0x26eb:  nop
086e278c +0x26ec:  nop
086e278d +0x26ed:  nop
086e278e +0x26ee:  nop
086e278f +0x26ef:  nop
086e2790 +0x26f0:  push   %ebp
086e2791 +0x26f1:  mov    %esp,%ebp
086e2793 +0x26f3:  push   %esi
086e2794 +0x26f4:  push   %ebx
086e2795 +0x26f5:  sub    $0x50,%esp
086e2798 +0x26f8:  mov    0x8(%ebp),%ebx
086e279b +0x26fb:  mov    0xc(%ebp),%esi
086e279e +0x26fe:  mov    %gs:0x14,%eax
086e27a4 +0x2704:  mov    %eax,-0xc(%ebp)
086e27a7 +0x2707:  xor    %eax,%eax
086e27a9 +0x2709:  movl   $0x0,0x8(%ebx)
086e27b0 +0x2710:  movl   $0x0,0xc(%ebx)
086e27b7 +0x2717:  mov    (%esi),%eax
086e27b9 +0x2719:  movl   $0xffffffff,(%ebx)
086e27bf +0x271f:  movl   $0xffffffff,0x4(%ebx)
086e27c6 +0x2726:  mov    -0xc(%eax),%eax
086e27c9 +0x2729:  lea    (%esi,%eax,1),%eax
086e27cc +0x272c:  testb  $0x5,0x14(%eax)
086e27d0 +0x2730:  je     086e27f0 <+0x2750>
086e27d2 +0x2732:  mov    -0xc(%ebp),%edx
086e27d5 +0x2735:  xor    %gs:0x14,%edx
086e27dc +0x273c:  mov    %ebx,%eax
086e27de +0x273e:  jne    086e283e <+0x279e>
086e27e0 +0x2740:  lea    -0x8(%ebp),%esp
086e27e3 +0x2743:  pop    %ebx
086e27e4 +0x2744:  pop    %esi
086e27e5 +0x2745:  pop    %ebp
086e27e6 +0x2746:  ret    $0x4
086e27e9 +0x2749:  lea    0x0(%esi,%eiz,1),%esi
086e27f0 +0x2750:  mov    0x78(%eax),%eax
086e27f3 +0x2753:  lea    -0x1c(%ebp),%ecx
086e27f6 +0x2756:  mov    (%eax),%edx
086e27f8 +0x2758:  movl   $0x8,0x14(%esp)
086e2800 +0x2760:  movl   $0x1,0x10(%esp)
086e2808 +0x2768:  movl   $0x0,0x8(%esp)
086e2810 +0x2770:  movl   $0x0,0xc(%esp)
086e2818 +0x2778:  mov    %eax,0x4(%esp)
086e281c +0x277c:  mov    %ecx,(%esp)
086e281f +0x277f:  call   *0x10(%edx)
086e2822 +0x2782:  mov    -0x1c(%ebp),%eax
086e2825 +0x2785:  sub    $0x4,%esp
086e2828 +0x2788:  mov    %eax,(%ebx)
086e282a +0x278a:  mov    -0x18(%ebp),%eax
086e282d +0x278d:  mov    %eax,0x4(%ebx)
086e2830 +0x2790:  mov    -0x14(%ebp),%eax
086e2833 +0x2793:  mov    %eax,0x8(%ebx)
086e2836 +0x2796:  mov    -0x10(%ebp),%eax
086e2839 +0x2799:  mov    %eax,0xc(%ebx)
086e283c +0x279c:  jmp    086e27d2 <+0x2732>
086e283e +0x279e:  call   0807d980 <_init+0x278>
086e2843 +0x27a3:  cmp    $0x2,%edx
086e2846 +0x27a6:  je     086e286f <+0x27cf>
086e2848 +0x27a8:  mov    %eax,(%esp)
086e284b +0x27ab:  call   08725ce0 <__cxa_begin_catch>
086e2850 +0x27b0:  movl   $0x1,0x4(%esp)
086e2858 +0x27b8:  mov    (%esi),%eax
086e285a +0x27ba:  add    -0xc(%eax),%esi
086e285d +0x27bd:  mov    %esi,(%esp)
086e2860 +0x27c0:  call   086e0cd0 <+0xc30>
086e2865 +0x27c5:  call   08725c30 <__cxa_end_catch>
086e286a +0x27ca:  jmp    086e27d2 <+0x2732>
086e286f +0x27cf:  mov    %eax,(%esp)
086e2872 +0x27d2:  call   08725ce0 <__cxa_begin_catch>
086e2877 +0x27d7:  movl   $0x1,0x4(%esp)
086e287f +0x27df:  mov    (%esi),%eax
086e2881 +0x27e1:  add    -0xc(%eax),%esi
086e2884 +0x27e4:  mov    %esi,(%esp)
086e2887 +0x27e7:  call   086e0cd0 <+0xc30>
086e288c +0x27ec:  call   08724be0 <__cxa_rethrow>
086e2891 +0x27f1:  mov    %eax,-0x2c(%ebp)
086e2894 +0x27f4:  call   08725c30 <__cxa_end_catch>
086e2899 +0x27f9:  mov    -0x2c(%ebp),%eax
086e289c +0x27fc:  mov    %eax,(%esp)
086e289f +0x27ff:  call   08ae3750 <_Unwind_Resume>
086e28a4 +0x2804:  jmp    086e2891 <+0x27f1>
086e28a6 +0x2806:  nop
086e28a7 +0x2807:  nop
086e28a8 +0x2808:  nop
086e28a9 +0x2809:  nop
086e28aa +0x280a:  nop
086e28ab +0x280b:  nop
086e28ac +0x280c:  nop
086e28ad +0x280d:  nop
086e28ae +0x280e:  nop
086e28af +0x280f:  nop
086e28b0 +0x2810:  mov    0x4(%esp),%eax
086e28b4 +0x2814:  mov    (%eax),%ecx
086e28b6 +0x2816:  add    -0xc(%ecx),%eax
086e28b9 +0x2819:  mov    %eax,0x4(%esp)
086e28bd +0x281d:  jmp    086e28c0 <+0x2820>
086e28bf +0x281f:  nop
086e28c0 +0x2820:  push   %ebp
086e28c1 +0x2821:  mov    %esp,%ebp
086e28c3 +0x2823:  sub    $0x8,%esp
086e28c6 +0x2826:  mov    0x8(%ebp),%eax
086e28c9 +0x2829:  lea    0x8(%eax),%edx
086e28cc +0x282c:  movl   $&_ZTVSi+0xc,(%eax)
086e28d2 +0x2832:  movl   $0x0,0x4(%eax)
086e28d9 +0x2839:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x8(%eax)
086e28e0 +0x2840:  mov    %edx,0x8(%ebp)
086e28e3 +0x2843:  leave
086e28e4 +0x2844:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e28e9 +0x2849:  nop
086e28ea +0x284a:  nop
086e28eb +0x284b:  nop
086e28ec +0x284c:  nop
086e28ed +0x284d:  nop
086e28ee +0x284e:  nop
086e28ef +0x284f:  nop
086e28f0 +0x2850:  mov    0x4(%esp),%eax
086e28f4 +0x2854:  mov    (%eax),%ecx
086e28f6 +0x2856:  add    -0xc(%ecx),%eax
086e28f9 +0x2859:  mov    %eax,0x4(%esp)
086e28fd +0x285d:  jmp    086e2900 <+0x2860>
086e28ff +0x285f:  nop
086e2900 +0x2860:  push   %ebp
086e2901 +0x2861:  mov    %esp,%ebp
086e2903 +0x2863:  sub    $0x8,%esp
086e2906 +0x2866:  mov    0x8(%ebp),%eax
086e2909 +0x2869:  lea    0x8(%eax),%edx
086e290c +0x286c:  movl   $&_ZTVSt13basic_istreamIwSt11char_traitsIwEE+0xc,(%eax)
086e2912 +0x2872:  movl   $0x0,0x4(%eax)
086e2919 +0x2879:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x8(%eax)
086e2920 +0x2880:  mov    %edx,0x8(%ebp)
086e2923 +0x2883:  leave
086e2924 +0x2884:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e2929 +0x2889:  nop
086e292a +0x288a:  nop
086e292b +0x288b:  nop
086e292c +0x288c:  nop
086e292d +0x288d:  nop
086e292e +0x288e:  nop
086e292f +0x288f:  nop
086e2930 +0x2890:  mov    0x4(%esp),%eax
086e2934 +0x2894:  mov    (%eax),%ecx
086e2936 +0x2896:  add    -0xc(%ecx),%eax
086e2939 +0x2899:  mov    %eax,0x4(%esp)
086e293d +0x289d:  jmp    086e2940 <+0x28a0>
086e293f +0x289f:  nop
086e2940 +0x28a0:  push   %ebp
086e2941 +0x28a1:  mov    %esp,%ebp
086e2943 +0x28a3:  push   %ebx
086e2944 +0x28a4:  sub    $0x14,%esp
086e2947 +0x28a7:  mov    0x8(%ebp),%ebx
086e294a +0x28aa:  movl   $&_ZTVSi+0xc,(%ebx)
086e2950 +0x28b0:  lea    0x8(%ebx),%eax
086e2953 +0x28b3:  movl   $0x0,0x4(%ebx)
086e295a +0x28ba:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x8(%ebx)
086e2961 +0x28c1:  mov    %eax,(%esp)
086e2964 +0x28c4:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e2969 +0x28c9:  mov    %ebx,0x8(%ebp)
086e296c +0x28cc:  add    $0x14,%esp
086e296f +0x28cf:  pop    %ebx
086e2970 +0x28d0:  pop    %ebp
086e2971 +0x28d1:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086e2976 +0x28d6:  nop
086e2977 +0x28d7:  nop
086e2978 +0x28d8:  nop
086e2979 +0x28d9:  nop
086e297a +0x28da:  nop
086e297b +0x28db:  nop
086e297c +0x28dc:  nop
086e297d +0x28dd:  nop
086e297e +0x28de:  nop
086e297f +0x28df:  nop
086e2980 +0x28e0:  mov    0x4(%esp),%eax
086e2984 +0x28e4:  mov    (%eax),%ecx
086e2986 +0x28e6:  add    -0xc(%ecx),%eax
086e2989 +0x28e9:  mov    %eax,0x4(%esp)
086e298d +0x28ed:  jmp    086e2990 <+0x28f0>
086e298f +0x28ef:  nop
086e2990 +0x28f0:  push   %ebp
086e2991 +0x28f1:  mov    %esp,%ebp
086e2993 +0x28f3:  push   %ebx
086e2994 +0x28f4:  sub    $0x14,%esp
086e2997 +0x28f7:  mov    0x8(%ebp),%ebx
086e299a +0x28fa:  movl   $&_ZTVSt13basic_istreamIwSt11char_traitsIwEE+0xc,(%ebx)
086e29a0 +0x2900:  lea    0x8(%ebx),%eax
086e29a3 +0x2903:  movl   $0x0,0x4(%ebx)
086e29aa +0x290a:  movl   $&_ZTVSt9basic_iosIwSt11char_traitsIwEE+0x8,0x8(%ebx)
086e29b1 +0x2911:  mov    %eax,(%esp)
086e29b4 +0x2914:  call   08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086e29b9 +0x2919:  mov    %ebx,0x8(%ebp)
086e29bc +0x291c:  add    $0x14,%esp
086e29bf +0x291f:  pop    %ebx
086e29c0 +0x2920:  pop    %ebp
086e29c1 +0x2921:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086e29c6 +0x2926:  nop
086e29c7 +0x2927:  nop
086e29c8 +0x2928:  nop
086e29c9 +0x2929:  nop
086e29ca +0x292a:  nop
086e29cb +0x292b:  nop
086e29cc +0x292c:  nop
086e29cd +0x292d:  nop
086e29ce +0x292e:  nop
086e29cf +0x292f:  nop
086e29d0 +0x2930:  push   %ebp
086e29d1 +0x2931:  mov    %esp,%ebp
086e29d3 +0x2933:  sub    $0x68,%esp
086e29d6 +0x2936:  mov    %ebx,-0xc(%ebp)
086e29d9 +0x2939:  mov    0x8(%ebp),%ebx
086e29dc +0x293c:  mov    %esi,-0x8(%ebp)
086e29df +0x293f:  mov    0xc(%ebp),%eax
086e29e2 +0x2942:  mov    %edi,-0x4(%ebp)
086e29e5 +0x2945:  mov    0x10(%ebp),%edx
086e29e8 +0x2948:  mov    %gs:0x14,%ecx
086e29ef +0x294f:  mov    %ecx,-0x1c(%ebp)
086e29f2 +0x2952:  xor    %ecx,%ecx
086e29f4 +0x2954:  mov    (%ebx),%ecx
086e29f6 +0x2956:  mov    -0xc(%ecx),%ecx
086e29f9 +0x2959:  lea    (%ebx,%ecx,1),%ecx
086e29fc +0x295c:  testb  $0x5,0x14(%ecx)
086e2a00 +0x2960:  je     086e2a20 <+0x2980>
086e2a02 +0x2962:  mov    -0x1c(%ebp),%edx
086e2a05 +0x2965:  xor    %gs:0x14,%edx
086e2a0c +0x296c:  mov    %ebx,%eax
086e2a0e +0x296e:  jne    086e2a78 <+0x29d8>
086e2a10 +0x2970:  mov    -0xc(%ebp),%ebx
086e2a13 +0x2973:  mov    -0x8(%ebp),%esi
086e2a16 +0x2976:  mov    -0x4(%ebp),%edi
086e2a19 +0x2979:  mov    %ebp,%esp
086e2a1b +0x297b:  pop    %ebp
086e2a1c +0x297c:  ret
086e2a1d +0x297d:  lea    0x0(%esi),%esi
086e2a20 +0x2980:  mov    0x78(%ecx),%ecx
086e2a23 +0x2983:  lea    -0x2c(%ebp),%edi
086e2a26 +0x2986:  mov    (%ecx),%esi
086e2a28 +0x2988:  mov    %eax,0x8(%esp)
086e2a2c +0x298c:  movl   $0x8,0x14(%esp)
086e2a34 +0x2994:  mov    %edx,0xc(%esp)
086e2a38 +0x2998:  mov    %esi,-0x3c(%ebp)
086e2a3b +0x299b:  mov    0x14(%ebp),%esi
086e2a3e +0x299e:  mov    -0x3c(%ebp),%eax
086e2a41 +0x29a1:  mov    %ecx,0x4(%esp)
086e2a45 +0x29a5:  mov    %edi,(%esp)
086e2a48 +0x29a8:  mov    %esi,0x10(%esp)
086e2a4c +0x29ac:  call   *0x10(%eax)
086e2a4f +0x29af:  mov    -0x2c(%ebp),%eax
086e2a52 +0x29b2:  sub    $0x4,%esp
086e2a55 +0x29b5:  and    -0x28(%ebp),%eax
086e2a58 +0x29b8:  cmp    $0xffffffff,%eax
086e2a5b +0x29bb:  jne    086e2a02 <+0x2962>
086e2a5d +0x29bd:  mov    (%ebx),%eax
086e2a5f +0x29bf:  mov    -0xc(%eax),%edx
086e2a62 +0x29c2:  add    %ebx,%edx
086e2a64 +0x29c4:  mov    0x14(%edx),%eax
086e2a67 +0x29c7:  mov    %edx,(%esp)
086e2a6a +0x29ca:  or     $0x4,%eax
086e2a6d +0x29cd:  mov    %eax,0x4(%esp)
086e2a71 +0x29d1:  call   086e0da0 <+0xd00>
086e2a76 +0x29d6:  jmp    086e2a02 <+0x2962>
086e2a78 +0x29d8:  call   0807d980 <_init+0x278>
086e2a7d +0x29dd:  cmp    $0x2,%edx
086e2a80 +0x29e0:  je     086e2aac <+0x2a0c>
086e2a82 +0x29e2:  mov    %eax,(%esp)
086e2a85 +0x29e5:  call   08725ce0 <__cxa_begin_catch>
086e2a8a +0x29ea:  movl   $0x1,0x4(%esp)
086e2a92 +0x29f2:  mov    (%ebx),%eax
086e2a94 +0x29f4:  mov    -0xc(%eax),%eax
086e2a97 +0x29f7:  lea    (%ebx,%eax,1),%eax
086e2a9a +0x29fa:  mov    %eax,(%esp)
086e2a9d +0x29fd:  call   086e0cd0 <+0xc30>
086e2aa2 +0x2a02:  call   08725c30 <__cxa_end_catch>
086e2aa7 +0x2a07:  jmp    086e2a02 <+0x2962>
086e2aac +0x2a0c:  mov    %eax,(%esp)
086e2aaf +0x2a0f:  nop
086e2ab0 +0x2a10:  call   08725ce0 <__cxa_begin_catch>
086e2ab5 +0x2a15:  movl   $0x1,0x4(%esp)
086e2abd +0x2a1d:  mov    (%ebx),%eax
086e2abf +0x2a1f:  add    -0xc(%eax),%ebx
086e2ac2 +0x2a22:  mov    %ebx,(%esp)
086e2ac5 +0x2a25:  call   086e0cd0 <+0xc30>
086e2aca +0x2a2a:  call   08724be0 <__cxa_rethrow>
086e2acf +0x2a2f:  mov    %eax,%esi
086e2ad1 +0x2a31:  call   08725c30 <__cxa_end_catch>
086e2ad6 +0x2a36:  mov    %esi,(%esp)
086e2ad9 +0x2a39:  call   08ae3750 <_Unwind_Resume>
086e2ade +0x2a3e:  jmp    086e2acf <+0x2a2f>
086e2ae0 +0x2a40:  push   %ebp
086e2ae1 +0x2a41:  mov    %esp,%ebp
086e2ae3 +0x2a43:  sub    $0x68,%esp
086e2ae6 +0x2a46:  mov    %ebx,-0xc(%ebp)
086e2ae9 +0x2a49:  mov    0x8(%ebp),%ebx
086e2aec +0x2a4c:  mov    %esi,-0x8(%ebp)
086e2aef +0x2a4f:  mov    %edi,-0x4(%ebp)
086e2af2 +0x2a52:  mov    %gs:0x14,%eax
086e2af8 +0x2a58:  mov    %eax,-0x1c(%ebp)
086e2afb +0x2a5b:  xor    %eax,%eax
086e2afd +0x2a5d:  mov    (%ebx),%eax
086e2aff +0x2a5f:  mov    -0xc(%eax),%eax
086e2b02 +0x2a62:  lea    (%ebx,%eax,1),%eax
086e2b05 +0x2a65:  testb  $0x5,0x14(%eax)
086e2b09 +0x2a69:  je     086e2b30 <+0x2a90>
086e2b0b +0x2a6b:  mov    -0x1c(%ebp),%edx
086e2b0e +0x2a6e:  xor    %gs:0x14,%edx
086e2b15 +0x2a75:  mov    %ebx,%eax
086e2b17 +0x2a77:  jne    086e2ba1 <+0x2b01>
086e2b1d +0x2a7d:  mov    -0xc(%ebp),%ebx
086e2b20 +0x2a80:  mov    -0x8(%ebp),%esi
086e2b23 +0x2a83:  mov    -0x4(%ebp),%edi
086e2b26 +0x2a86:  mov    %ebp,%esp
086e2b28 +0x2a88:  pop    %ebp
086e2b29 +0x2a89:  ret
086e2b2a +0x2a8a:  lea    0x0(%esi),%esi
086e2b30 +0x2a90:  mov    0x78(%eax),%eax
086e2b33 +0x2a93:  mov    0x14(%ebp),%edx
086e2b36 +0x2a96:  mov    0xc(%ebp),%esi
086e2b39 +0x2a99:  mov    0x10(%ebp),%ecx
086e2b3c +0x2a9c:  mov    0x18(%ebp),%edi
086e2b3f +0x2a9f:  mov    %edx,-0x34(%ebp)
086e2b42 +0x2aa2:  mov    %esi,-0x3c(%ebp)
086e2b45 +0x2aa5:  mov    %ecx,-0x38(%ebp)
086e2b48 +0x2aa8:  mov    %edi,-0x30(%ebp)
086e2b4b +0x2aab:  mov    (%eax),%edi
086e2b4d +0x2aad:  mov    %edx,0x10(%esp)
086e2b51 +0x2ab1:  mov    0x18(%ebp),%edx
086e2b54 +0x2ab4:  mov    %eax,0x4(%esp)
086e2b58 +0x2ab8:  lea    -0x2c(%ebp),%eax
086e2b5b +0x2abb:  movl   $0x8,0x18(%esp)
086e2b63 +0x2ac3:  mov    %esi,0x8(%esp)
086e2b67 +0x2ac7:  mov    %ecx,0xc(%esp)
086e2b6b +0x2acb:  mov    %edx,0x14(%esp)
086e2b6f +0x2acf:  mov    %eax,(%esp)
086e2b72 +0x2ad2:  call   *0x14(%edi)
086e2b75 +0x2ad5:  mov    -0x2c(%ebp),%eax
086e2b78 +0x2ad8:  sub    $0x4,%esp
086e2b7b +0x2adb:  and    -0x28(%ebp),%eax
086e2b7e +0x2ade:  cmp    $0xffffffff,%eax
086e2b81 +0x2ae1:  jne    086e2b0b <+0x2a6b>
086e2b83 +0x2ae3:  mov    (%ebx),%eax
086e2b85 +0x2ae5:  mov    -0xc(%eax),%edx
086e2b88 +0x2ae8:  add    %ebx,%edx
086e2b8a +0x2aea:  mov    0x14(%edx),%eax
086e2b8d +0x2aed:  mov    %edx,(%esp)
086e2b90 +0x2af0:  or     $0x4,%eax
086e2b93 +0x2af3:  mov    %eax,0x4(%esp)
086e2b97 +0x2af7:  call   086e0da0 <+0xd00>
086e2b9c +0x2afc:  jmp    086e2b0b <+0x2a6b>
086e2ba1 +0x2b01:  call   0807d980 <_init+0x278>
086e2ba6 +0x2b06:  cmp    $0x2,%edx
086e2ba9 +0x2b09:  je     086e2bd5 <+0x2b35>
086e2bab +0x2b0b:  mov    %eax,(%esp)
086e2bae +0x2b0e:  call   08725ce0 <__cxa_begin_catch>
086e2bb3 +0x2b13:  movl   $0x1,0x4(%esp)
086e2bbb +0x2b1b:  mov    (%ebx),%eax
086e2bbd +0x2b1d:  mov    -0xc(%eax),%eax
086e2bc0 +0x2b20:  lea    (%ebx,%eax,1),%eax
086e2bc3 +0x2b23:  mov    %eax,(%esp)
086e2bc6 +0x2b26:  call   086e0cd0 <+0xc30>
086e2bcb +0x2b2b:  call   08725c30 <__cxa_end_catch>
086e2bd0 +0x2b30:  jmp    086e2b0b <+0x2a6b>
086e2bd5 +0x2b35:  mov    %eax,(%esp)
086e2bd8 +0x2b38:  call   08725ce0 <__cxa_begin_catch>
086e2bdd +0x2b3d:  movl   $0x1,0x4(%esp)
086e2be5 +0x2b45:  mov    (%ebx),%eax
086e2be7 +0x2b47:  add    -0xc(%eax),%ebx
086e2bea +0x2b4a:  mov    %ebx,(%esp)
086e2bed +0x2b4d:  call   086e0cd0 <+0xc30>
086e2bf2 +0x2b52:  call   08724be0 <__cxa_rethrow>
086e2bf7 +0x2b57:  mov    %eax,%esi
086e2bf9 +0x2b59:  call   08725c30 <__cxa_end_catch>
086e2bfe +0x2b5e:  mov    %esi,(%esp)
086e2c01 +0x2b61:  call   08ae3750 <_Unwind_Resume>
086e2c06 +0x2b66:  jmp    086e2bf7 <+0x2b57>
086e2c08 +0x2b68:  nop
086e2c09 +0x2b69:  nop
086e2c0a +0x2b6a:  nop
086e2c0b +0x2b6b:  nop
086e2c0c +0x2b6c:  nop
086e2c0d +0x2b6d:  nop
086e2c0e +0x2b6e:  nop
086e2c0f +0x2b6f:  nop
086e2c10 +0x2b70:  push   %ebp
086e2c11 +0x2b71:  mov    %esp,%ebp
086e2c13 +0x2b73:  sub    $0x18,%esp
086e2c16 +0x2b76:  mov    %esi,-0x4(%ebp)
086e2c19 +0x2b79:  mov    0x8(%ebp),%esi
086e2c1c +0x2b7c:  mov    %ebx,-0x8(%ebp)
086e2c1f +0x2b7f:  lea    0x8(%esi),%ebx
086e2c22 +0x2b82:  mov    %ebx,(%esp)
086e2c25 +0x2b85:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e2c2a +0x2b8a:  mov    0xc(%ebp),%eax
086e2c2d +0x2b8d:  movl   $0x0,0x70(%ebx)
086e2c34 +0x2b94:  movl   $0x0,0x74(%ebx)
086e2c3b +0x2b9b:  movb   $0x0,0x78(%ebx)
086e2c3f +0x2b9f:  movl   $0x0,0x7c(%ebx)
086e2c46 +0x2ba6:  movl   $0x0,0x80(%ebx)
086e2c50 +0x2bb0:  movl   $0x0,0x84(%ebx)
086e2c5a +0x2bba:  movl   $0x0,0x88(%ebx)
086e2c64 +0x2bc4:  movl   $&_ZTVSt13basic_istreamIwSt11char_traitsIwEE+0xc,(%esi)
086e2c6a +0x2bca:  movl   $&_ZTVSt13basic_istreamIwSt11char_traitsIwEE+0x20,0x8(%esi)
086e2c71 +0x2bd1:  movl   $0x0,0x4(%esi)
086e2c78 +0x2bd8:  mov    %eax,0x4(%esp)
086e2c7c +0x2bdc:  mov    %ebx,(%esp)
086e2c7f +0x2bdf:  call   086e0920 <+0x880>
086e2c84 +0x2be4:  mov    -0x8(%ebp),%ebx
086e2c87 +0x2be7:  mov    -0x4(%ebp),%esi
086e2c8a +0x2bea:  mov    %ebp,%esp
086e2c8c +0x2bec:  pop    %ebp
086e2c8d +0x2bed:  ret
086e2c8e +0x2bee:  mov    %eax,%esi
086e2c90 +0x2bf0:  mov    %ebx,(%esp)
086e2c93 +0x2bf3:  call   086e0bf0 <+0xb50>
086e2c98 +0x2bf8:  mov    %esi,(%esp)
086e2c9b +0x2bfb:  call   08ae3750 <_Unwind_Resume>
086e2ca0 +0x2c00:  push   %ebp
086e2ca1 +0x2c01:  mov    %esp,%ebp
086e2ca3 +0x2c03:  sub    $0x68,%esp
086e2ca6 +0x2c06:  mov    %ebx,-0xc(%ebp)
086e2ca9 +0x2c09:  mov    0x8(%ebp),%ebx
086e2cac +0x2c0c:  mov    %esi,-0x8(%ebp)
086e2caf +0x2c0f:  mov    0xc(%ebp),%eax
086e2cb2 +0x2c12:  mov    %edi,-0x4(%ebp)
086e2cb5 +0x2c15:  mov    0x10(%ebp),%edx
086e2cb8 +0x2c18:  mov    %gs:0x14,%ecx
086e2cbf +0x2c1f:  mov    %ecx,-0x1c(%ebp)
086e2cc2 +0x2c22:  xor    %ecx,%ecx
086e2cc4 +0x2c24:  mov    (%ebx),%ecx
086e2cc6 +0x2c26:  mov    -0xc(%ecx),%ecx
086e2cc9 +0x2c29:  lea    (%ebx,%ecx,1),%ecx
086e2ccc +0x2c2c:  testb  $0x5,0x14(%ecx)
086e2cd0 +0x2c30:  je     086e2cf0 <+0x2c50>
086e2cd2 +0x2c32:  mov    -0x1c(%ebp),%edx
086e2cd5 +0x2c35:  xor    %gs:0x14,%edx
086e2cdc +0x2c3c:  mov    %ebx,%eax
086e2cde +0x2c3e:  jne    086e2d48 <+0x2ca8>
086e2ce0 +0x2c40:  mov    -0xc(%ebp),%ebx
086e2ce3 +0x2c43:  mov    -0x8(%ebp),%esi
086e2ce6 +0x2c46:  mov    -0x4(%ebp),%edi
086e2ce9 +0x2c49:  mov    %ebp,%esp
086e2ceb +0x2c4b:  pop    %ebp
086e2cec +0x2c4c:  ret
086e2ced +0x2c4d:  lea    0x0(%esi),%esi
086e2cf0 +0x2c50:  mov    0x7c(%ecx),%ecx
086e2cf3 +0x2c53:  lea    -0x2c(%ebp),%edi
086e2cf6 +0x2c56:  mov    (%ecx),%esi
086e2cf8 +0x2c58:  mov    %eax,0x8(%esp)
086e2cfc +0x2c5c:  movl   $0x8,0x14(%esp)
086e2d04 +0x2c64:  mov    %edx,0xc(%esp)
086e2d08 +0x2c68:  mov    %esi,-0x3c(%ebp)
086e2d0b +0x2c6b:  mov    0x14(%ebp),%esi
086e2d0e +0x2c6e:  mov    -0x3c(%ebp),%eax
086e2d11 +0x2c71:  mov    %ecx,0x4(%esp)
086e2d15 +0x2c75:  mov    %edi,(%esp)
086e2d18 +0x2c78:  mov    %esi,0x10(%esp)
086e2d1c +0x2c7c:  call   *0x10(%eax)
086e2d1f +0x2c7f:  mov    -0x2c(%ebp),%eax
086e2d22 +0x2c82:  sub    $0x4,%esp
086e2d25 +0x2c85:  and    -0x28(%ebp),%eax
086e2d28 +0x2c88:  cmp    $0xffffffff,%eax
086e2d2b +0x2c8b:  jne    086e2cd2 <+0x2c32>
086e2d2d +0x2c8d:  mov    (%ebx),%eax
086e2d2f +0x2c8f:  mov    -0xc(%eax),%edx
086e2d32 +0x2c92:  add    %ebx,%edx
086e2d34 +0x2c94:  mov    0x14(%edx),%eax
086e2d37 +0x2c97:  mov    %edx,(%esp)
086e2d3a +0x2c9a:  or     $0x4,%eax
086e2d3d +0x2c9d:  mov    %eax,0x4(%esp)
086e2d41 +0x2ca1:  call   086e0cf0 <+0xc50>
086e2d46 +0x2ca6:  jmp    086e2cd2 <+0x2c32>
086e2d48 +0x2ca8:  call   0807d980 <_init+0x278>
086e2d4d +0x2cad:  cmp    $0x2,%edx
086e2d50 +0x2cb0:  je     086e2d7c <+0x2cdc>
086e2d52 +0x2cb2:  mov    %eax,(%esp)
086e2d55 +0x2cb5:  call   08725ce0 <__cxa_begin_catch>
086e2d5a +0x2cba:  movl   $0x1,0x4(%esp)
086e2d62 +0x2cc2:  mov    (%ebx),%eax
086e2d64 +0x2cc4:  mov    -0xc(%eax),%eax
086e2d67 +0x2cc7:  lea    (%ebx,%eax,1),%eax
086e2d6a +0x2cca:  mov    %eax,(%esp)
086e2d6d +0x2ccd:  call   086e0cb0 <+0xc10>
086e2d72 +0x2cd2:  call   08725c30 <__cxa_end_catch>
086e2d77 +0x2cd7:  jmp    086e2cd2 <+0x2c32>
086e2d7c +0x2cdc:  mov    %eax,(%esp)
086e2d7f +0x2cdf:  nop
086e2d80 +0x2ce0:  call   08725ce0 <__cxa_begin_catch>
086e2d85 +0x2ce5:  movl   $0x1,0x4(%esp)
086e2d8d +0x2ced:  mov    (%ebx),%eax
086e2d8f +0x2cef:  add    -0xc(%eax),%ebx
086e2d92 +0x2cf2:  mov    %ebx,(%esp)
086e2d95 +0x2cf5:  call   086e0cb0 <+0xc10>
086e2d9a +0x2cfa:  call   08724be0 <__cxa_rethrow>
086e2d9f +0x2cff:  mov    %eax,%esi
086e2da1 +0x2d01:  call   08725c30 <__cxa_end_catch>
086e2da6 +0x2d06:  mov    %esi,(%esp)
086e2da9 +0x2d09:  call   08ae3750 <_Unwind_Resume>
086e2dae +0x2d0e:  jmp    086e2d9f <+0x2cff>
086e2db0 +0x2d10:  push   %ebp
086e2db1 +0x2d11:  mov    %esp,%ebp
086e2db3 +0x2d13:  sub    $0x68,%esp
086e2db6 +0x2d16:  mov    %ebx,-0xc(%ebp)
086e2db9 +0x2d19:  mov    0x8(%ebp),%ebx
086e2dbc +0x2d1c:  mov    %esi,-0x8(%ebp)
086e2dbf +0x2d1f:  mov    %edi,-0x4(%ebp)
086e2dc2 +0x2d22:  mov    %gs:0x14,%eax
086e2dc8 +0x2d28:  mov    %eax,-0x1c(%ebp)
086e2dcb +0x2d2b:  xor    %eax,%eax
086e2dcd +0x2d2d:  mov    (%ebx),%eax
086e2dcf +0x2d2f:  mov    -0xc(%eax),%eax
086e2dd2 +0x2d32:  lea    (%ebx,%eax,1),%eax
086e2dd5 +0x2d35:  testb  $0x5,0x14(%eax)
086e2dd9 +0x2d39:  je     086e2e00 <+0x2d60>
086e2ddb +0x2d3b:  mov    -0x1c(%ebp),%edx
086e2dde +0x2d3e:  xor    %gs:0x14,%edx
086e2de5 +0x2d45:  mov    %ebx,%eax
086e2de7 +0x2d47:  jne    086e2e71 <+0x2dd1>
086e2ded +0x2d4d:  mov    -0xc(%ebp),%ebx
086e2df0 +0x2d50:  mov    -0x8(%ebp),%esi
086e2df3 +0x2d53:  mov    -0x4(%ebp),%edi
086e2df6 +0x2d56:  mov    %ebp,%esp
086e2df8 +0x2d58:  pop    %ebp
086e2df9 +0x2d59:  ret
086e2dfa +0x2d5a:  lea    0x0(%esi),%esi
086e2e00 +0x2d60:  mov    0x7c(%eax),%eax
086e2e03 +0x2d63:  mov    0x14(%ebp),%edx
086e2e06 +0x2d66:  mov    0xc(%ebp),%esi
086e2e09 +0x2d69:  mov    0x10(%ebp),%ecx
086e2e0c +0x2d6c:  mov    0x18(%ebp),%edi
086e2e0f +0x2d6f:  mov    %edx,-0x34(%ebp)
086e2e12 +0x2d72:  mov    %esi,-0x3c(%ebp)
086e2e15 +0x2d75:  mov    %ecx,-0x38(%ebp)
086e2e18 +0x2d78:  mov    %edi,-0x30(%ebp)
086e2e1b +0x2d7b:  mov    (%eax),%edi
086e2e1d +0x2d7d:  mov    %edx,0x10(%esp)
086e2e21 +0x2d81:  mov    0x18(%ebp),%edx
086e2e24 +0x2d84:  mov    %eax,0x4(%esp)
086e2e28 +0x2d88:  lea    -0x2c(%ebp),%eax
086e2e2b +0x2d8b:  movl   $0x8,0x18(%esp)
086e2e33 +0x2d93:  mov    %esi,0x8(%esp)
086e2e37 +0x2d97:  mov    %ecx,0xc(%esp)
086e2e3b +0x2d9b:  mov    %edx,0x14(%esp)
086e2e3f +0x2d9f:  mov    %eax,(%esp)
086e2e42 +0x2da2:  call   *0x14(%edi)
086e2e45 +0x2da5:  mov    -0x2c(%ebp),%eax
086e2e48 +0x2da8:  sub    $0x4,%esp
086e2e4b +0x2dab:  and    -0x28(%ebp),%eax
086e2e4e +0x2dae:  cmp    $0xffffffff,%eax
086e2e51 +0x2db1:  jne    086e2ddb <+0x2d3b>
086e2e53 +0x2db3:  mov    (%ebx),%eax
086e2e55 +0x2db5:  mov    -0xc(%eax),%edx
086e2e58 +0x2db8:  add    %ebx,%edx
086e2e5a +0x2dba:  mov    0x14(%edx),%eax
086e2e5d +0x2dbd:  mov    %edx,(%esp)
086e2e60 +0x2dc0:  or     $0x4,%eax
086e2e63 +0x2dc3:  mov    %eax,0x4(%esp)
086e2e67 +0x2dc7:  call   086e0cf0 <+0xc50>
086e2e6c +0x2dcc:  jmp    086e2ddb <+0x2d3b>
086e2e71 +0x2dd1:  call   0807d980 <_init+0x278>
086e2e76 +0x2dd6:  cmp    $0x2,%edx
086e2e79 +0x2dd9:  je     086e2ea5 <+0x2e05>
086e2e7b +0x2ddb:  mov    %eax,(%esp)
086e2e7e +0x2dde:  call   08725ce0 <__cxa_begin_catch>
086e2e83 +0x2de3:  movl   $0x1,0x4(%esp)
086e2e8b +0x2deb:  mov    (%ebx),%eax
086e2e8d +0x2ded:  mov    -0xc(%eax),%eax
086e2e90 +0x2df0:  lea    (%ebx,%eax,1),%eax
086e2e93 +0x2df3:  mov    %eax,(%esp)
086e2e96 +0x2df6:  call   086e0cb0 <+0xc10>
086e2e9b +0x2dfb:  call   08725c30 <__cxa_end_catch>
086e2ea0 +0x2e00:  jmp    086e2ddb <+0x2d3b>
086e2ea5 +0x2e05:  mov    %eax,(%esp)
086e2ea8 +0x2e08:  call   08725ce0 <__cxa_begin_catch>
086e2ead +0x2e0d:  movl   $0x1,0x4(%esp)
086e2eb5 +0x2e15:  mov    (%ebx),%eax
086e2eb7 +0x2e17:  add    -0xc(%eax),%ebx
086e2eba +0x2e1a:  mov    %ebx,(%esp)
086e2ebd +0x2e1d:  call   086e0cb0 <+0xc10>
086e2ec2 +0x2e22:  call   08724be0 <__cxa_rethrow>
086e2ec7 +0x2e27:  mov    %eax,%esi
086e2ec9 +0x2e29:  call   08725c30 <__cxa_end_catch>
086e2ece +0x2e2e:  mov    %esi,(%esp)
086e2ed1 +0x2e31:  call   08ae3750 <_Unwind_Resume>
086e2ed6 +0x2e36:  jmp    086e2ec7 <+0x2e27>
086e2ed8 +0x2e38:  nop
086e2ed9 +0x2e39:  nop
086e2eda +0x2e3a:  nop
086e2edb +0x2e3b:  nop
086e2edc +0x2e3c:  nop
086e2edd +0x2e3d:  nop
086e2ede +0x2e3e:  nop
086e2edf +0x2e3f:  nop
086e2ee0 +0x2e40:  push   %ebp
086e2ee1 +0x2e41:  mov    %esp,%ebp
086e2ee3 +0x2e43:  sub    $0x18,%esp
086e2ee6 +0x2e46:  mov    %esi,-0x4(%ebp)
086e2ee9 +0x2e49:  mov    0x8(%ebp),%esi
086e2eec +0x2e4c:  mov    %ebx,-0x8(%ebp)
086e2eef +0x2e4f:  lea    0x8(%esi),%ebx
086e2ef2 +0x2e52:  mov    %ebx,(%esp)
086e2ef5 +0x2e55:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086e2efa +0x2e5a:  movb   $0x0,0x74(%ebx)
086e2efe +0x2e5e:  movl   $0x0,0x70(%ebx)
086e2f05 +0x2e65:  movb   $0x0,0x75(%ebx)
086e2f09 +0x2e69:  movl   $0x0,0x78(%ebx)
086e2f10 +0x2e70:  movl   $0x0,0x7c(%ebx)
086e2f17 +0x2e77:  movl   $0x0,0x80(%ebx)
086e2f21 +0x2e81:  movl   $0x0,0x84(%ebx)
086e2f2b +0x2e8b:  movl   $&_ZTVSi+0xc,(%esi)
086e2f31 +0x2e91:  movl   $&_ZTVSi+0x20,0x8(%esi)
086e2f38 +0x2e98:  movl   $0x0,0x4(%esi)
086e2f3f +0x2e9f:  movl   $0x0,0x4(%esp)
086e2f47 +0x2ea7:  mov    %ebx,(%esp)
086e2f4a +0x2eaa:  call   086e0ee0 <+0xe40>
086e2f4f +0x2eaf:  mov    -0x8(%ebp),%ebx
086e2f52 +0x2eb2:  mov    -0x4(%ebp),%esi
086e2f55 +0x2eb5:  mov    %ebp,%esp
086e2f57 +0x2eb7:  pop    %ebp
086e2f58 +0x2eb8:  ret
086e2f59 +0x2eb9:  mov    %eax,%esi
086e2f5b +0x2ebb:  mov    %ebx,(%esp)
086e2f5e +0x2ebe:  call   086e0c10 <+0xb70>
086e2f63 +0x2ec3:  mov    %esi,(%esp)
086e2f66 +0x2ec6:  call   08ae3750 <_Unwind_Resume>
086e2f6b +0x2ecb:  nop
086e2f6c +0x2ecc:  nop
086e2f6d +0x2ecd:  nop
086e2f6e +0x2ece:  nop
086e2f6f +0x2ecf:  nop
086e2f70 +0x2ed0:  push   %ebp
086e2f71 +0x2ed1:  mov    %esp,%ebp
086e2f73 +0x2ed3:  push   %edi
086e2f74 +0x2ed4:  push   %esi
086e2f75 +0x2ed5:  xor    %esi,%esi
086e2f77 +0x2ed7:  push   %ebx
086e2f78 +0x2ed8:  sub    $0x2c,%esp
086e2f7b +0x2edb:  mov    0x8(%ebp),%eax
086e2f7e +0x2ede:  mov    0xc(%ebp),%ebx
086e2f81 +0x2ee1:  movzbl 0x10(%ebp),%edi
086e2f85 +0x2ee5:  mov    %eax,-0x1c(%ebp)
086e2f88 +0x2ee8:  movb   $0x0,(%eax)
086e2f8b +0x2eeb:  mov    (%ebx),%eax
086e2f8d +0x2eed:  mov    -0xc(%eax),%ecx
086e2f90 +0x2ef0:  lea    (%ebx,%ecx,1),%eax
086e2f93 +0x2ef3:  mov    0x14(%eax),%edx
086e2f96 +0x2ef6:  test   %edx,%edx
086e2f98 +0x2ef8:  jne    086e3018 <+0x2f78>
086e2f9a +0x2efa:  mov    0x70(%eax),%edx
086e2f9d +0x2efd:  test   %edx,%edx
086e2f9f +0x2eff:  je     086e2fb1 <+0x2f11>
086e2fa1 +0x2f01:  mov    %edx,(%esp)
086e2fa4 +0x2f04:  call   086fc6c0 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x7e54>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x7e54
086e2fa9 +0x2f09:  mov    (%ebx),%eax
086e2fab +0x2f0b:  mov    -0xc(%eax),%ecx
086e2fae +0x2f0e:  lea    (%ebx,%ecx,1),%eax
086e2fb1 +0x2f11:  mov    %edi,%edx
086e2fb3 +0x2f13:  test   %dl,%dl
086e2fb5 +0x2f15:  jne    086e30a0 <+0x3000>
086e2fbb +0x2f1b:  testb  $0x10,0xd(%ebx,%ecx,1)
086e2fc0 +0x2f20:  je     086e30a0 <+0x3000>
086e2fc6 +0x2f26:  mov    0x7c(%eax),%esi
086e2fc9 +0x2f29:  mov    0x8(%esi),%edx
086e2fcc +0x2f2c:  cmp    0xc(%esi),%edx
086e2fcf +0x2f2f:  jae    086e30ce <+0x302e>
086e2fd5 +0x2f35:  mov    (%edx),%edi
086e2fd7 +0x2f37:  mov    0x80(%eax),%edx
086e2fdd +0x2f3d:  test   %edx,%edx
086e2fdf +0x2f3f:  je     086e30c9 <+0x3029>
086e2fe5 +0x2f45:  cmp    $0xffffffff,%edi
086e2fe8 +0x2f48:  jne    086e3030 <+0x2f90>
086e2fea +0x2f4a:  lea    0x0(%esi),%esi
086e2ff0 +0x2f50:  mov    $0x2,%esi
086e2ff5 +0x2f55:  lea    0x0(%esi),%esi
086e2ff8 +0x2f58:  mov    0x14(%eax),%edx
086e2ffb +0x2f5b:  test   %edx,%edx
086e2ffd +0x2f5d:  jne    086e3018 <+0x2f78>
086e2fff +0x2f5f:  test   %esi,%esi
086e3001 +0x2f61:  jne    086e3018 <+0x2f78>
086e3003 +0x2f63:  mov    -0x1c(%ebp),%eax
086e3006 +0x2f66:  movb   $0x1,(%eax)
086e3009 +0x2f69:  add    $0x2c,%esp
086e300c +0x2f6c:  pop    %ebx
086e300d +0x2f6d:  pop    %esi
086e300e +0x2f6e:  pop    %edi
086e300f +0x2f6f:  pop    %ebp
086e3010 +0x2f70:  ret
086e3011 +0x2f71:  lea    0x0(%esi,%eiz,1),%esi
086e3018 +0x2f78:  or     $0x4,%esi
086e301b +0x2f7b:  or     %edx,%esi
086e301d +0x2f7d:  mov    %esi,0xc(%ebp)
086e3020 +0x2f80:  mov    %eax,0x8(%ebp)
086e3023 +0x2f83:  add    $0x2c,%esp
086e3026 +0x2f86:  pop    %ebx
086e3027 +0x2f87:  pop    %esi
086e3028 +0x2f88:  pop    %edi
086e3029 +0x2f89:  pop    %ebp
086e302a +0x2f8a:  jmp    086e0cf0 <+0xc50>
086e302f +0x2f8f:  nop
086e3030 +0x2f90:  mov    %ebx,-0x20(%ebp)
086e3033 +0x2f93:  mov    %edx,%ebx
086e3035 +0x2f95:  lea    0x0(%esi),%esi
086e3038 +0x2f98:  mov    (%ebx),%eax
086e303a +0x2f9a:  mov    %edi,0x8(%esp)
086e303e +0x2f9e:  movl   $0x2000,0x4(%esp)
086e3046 +0x2fa6:  mov    %ebx,(%esp)
086e3049 +0x2fa9:  call   *0x8(%eax)
086e304c +0x2fac:  test   %al,%al
086e304e +0x2fae:  je     086e3088 <+0x2fe8>
086e3050 +0x2fb0:  mov    0x8(%esi),%edx
086e3053 +0x2fb3:  cmp    0xc(%esi),%edx
086e3056 +0x2fb6:  jae    086e30b3 <+0x3013>
086e3058 +0x2fb8:  mov    (%edx),%eax
086e305a +0x2fba:  add    $0x4,%edx
086e305d +0x2fbd:  mov    %edx,0x8(%esi)
086e3060 +0x2fc0:  cmp    $0xffffffff,%eax
086e3063 +0x2fc3:  je     086e3074 <+0x2fd4>
086e3065 +0x2fc5:  mov    0x8(%esi),%eax
086e3068 +0x2fc8:  cmp    0xc(%esi),%eax
086e306b +0x2fcb:  jae    086e30a7 <+0x3007>
086e306d +0x2fcd:  mov    (%eax),%edi
086e306f +0x2fcf:  cmp    $0xffffffff,%edi
086e3072 +0x2fd2:  jne    086e3038 <+0x2f98>
086e3074 +0x2fd4:  mov    -0x20(%ebp),%ebx
086e3077 +0x2fd7:  mov    (%ebx),%eax
086e3079 +0x2fd9:  add    -0xc(%eax),%ebx
086e307c +0x2fdc:  mov    %ebx,%eax
086e307e +0x2fde:  jmp    086e2ff0 <+0x2f50>
086e3083 +0x2fe3:  nop
086e3084 +0x2fe4:  lea    0x0(%esi,%eiz,1),%esi
086e3088 +0x2fe8:  cmp    $0xffffffff,%edi
086e308b +0x2feb:  mov    -0x20(%ebp),%ebx
086e308e +0x2fee:  je     086e30bd <+0x301d>
086e3090 +0x2ff0:  mov    (%ebx),%eax
086e3092 +0x2ff2:  xor    %esi,%esi
086e3094 +0x2ff4:  add    -0xc(%eax),%ebx
086e3097 +0x2ff7:  mov    %ebx,%eax
086e3099 +0x2ff9:  jmp    086e2ff8 <+0x2f58>
086e309e +0x2ffe:  xchg   %ax,%ax
086e30a0 +0x3000:  xor    %esi,%esi
086e30a2 +0x3002:  jmp    086e2ff8 <+0x2f58>
086e30a7 +0x3007:  mov    (%esi),%eax
086e30a9 +0x3009:  mov    %esi,(%esp)
086e30ac +0x300c:  call   *0x24(%eax)
086e30af +0x300f:  mov    %eax,%edi
086e30b1 +0x3011:  jmp    086e306f <+0x2fcf>
086e30b3 +0x3013:  mov    (%esi),%eax
086e30b5 +0x3015:  mov    %esi,(%esp)
086e30b8 +0x3018:  call   *0x28(%eax)
086e30bb +0x301b:  jmp    086e3060 <+0x2fc0>
086e30bd +0x301d:  mov    (%ebx),%eax
086e30bf +0x301f:  add    -0xc(%eax),%ebx
086e30c2 +0x3022:  mov    %ebx,%eax
086e30c4 +0x3024:  jmp    086e2ff0 <+0x2f50>
086e30c9 +0x3029:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e30ce +0x302e:  mov    (%esi),%eax
086e30d0 +0x3030:  mov    %esi,(%esp)
086e30d3 +0x3033:  call   *0x24(%eax)
086e30d6 +0x3036:  mov    %eax,%edi
086e30d8 +0x3038:  mov    (%ebx),%eax
086e30da +0x303a:  mov    -0xc(%eax),%eax
086e30dd +0x303d:  lea    (%ebx,%eax,1),%eax
086e30e0 +0x3040:  jmp    086e2fd7 <+0x2f37>
086e30e5 +0x3045:  nop
086e30e6 +0x3046:  nop
086e30e7 +0x3047:  nop
086e30e8 +0x3048:  nop
086e30e9 +0x3049:  nop
086e30ea +0x304a:  nop
086e30eb +0x304b:  nop
086e30ec +0x304c:  nop
086e30ed +0x304d:  nop
086e30ee +0x304e:  nop
086e30ef +0x304f:  nop
086e30f0 +0x3050:  push   %ebp
086e30f1 +0x3051:  mov    %esp,%ebp
086e30f3 +0x3053:  sub    $0x68,%esp
086e30f6 +0x3056:  mov    %ebx,-0xc(%ebp)
086e30f9 +0x3059:  mov    0x8(%ebp),%ebx
086e30fc +0x305c:  lea    -0x19(%ebp),%eax
086e30ff +0x305f:  mov    %esi,-0x8(%ebp)
086e3102 +0x3062:  mov    %edi,-0x4(%ebp)
086e3105 +0x3065:  movl   $0x0,0x8(%esp)
086e310d +0x306d:  mov    %ebx,0x4(%esp)
086e3111 +0x3071:  mov    %eax,(%esp)
086e3114 +0x3074:  call   086e2f70 <+0x2ed0>
086e3119 +0x3079:  cmpb   $0x0,-0x19(%ebp)
086e311d +0x307d:  je     086e318b <+0x30eb>
086e311f +0x307f:  mov    (%ebx),%eax
086e3121 +0x3081:  movl   $0x0,-0x20(%ebp)
086e3128 +0x3088:  mov    -0xc(%eax),%edx
086e312b +0x308b:  add    %ebx,%edx
086e312d +0x308d:  mov    0x88(%edx),%eax
086e3133 +0x3093:  test   %eax,%eax
086e3135 +0x3095:  je     086e31c6 <+0x3126>
086e313b +0x309b:  mov    (%eax),%edi
086e313d +0x309d:  lea    -0x30(%ebp),%ecx
086e3140 +0x30a0:  mov    0x7c(%edx),%esi
086e3143 +0x30a3:  mov    %eax,0x4(%esp)
086e3147 +0x30a7:  mov    %edx,0x18(%esp)
086e314b +0x30ab:  mov    %edi,-0x34(%ebp)
086e314e +0x30ae:  mov    0xc(%ebp),%edi
086e3151 +0x30b1:  mov    -0x34(%ebp),%eax
086e3154 +0x30b4:  movl   $0x0,0x10(%esp)
086e315c +0x30bc:  movl   $0xffffffff,0x14(%esp)
086e3164 +0x30c4:  mov    %edi,0x20(%esp)
086e3168 +0x30c8:  lea    -0x20(%ebp),%edi
086e316b +0x30cb:  mov    %edi,0x1c(%esp)
086e316f +0x30cf:  mov    %esi,0x8(%esp)
086e3173 +0x30d3:  movl   $0xffffffff,0xc(%esp)
086e317b +0x30db:  mov    %ecx,(%esp)
086e317e +0x30de:  call   *0x30(%eax)
086e3181 +0x30e1:  sub    $0x4,%esp
086e3184 +0x30e4:  mov    -0x20(%ebp),%eax
086e3187 +0x30e7:  test   %eax,%eax
086e3189 +0x30e9:  jne    086e31a0 <+0x3100>
086e318b +0x30eb:  mov    %ebx,%eax
086e318d +0x30ed:  mov    -0x8(%ebp),%esi
086e3190 +0x30f0:  mov    -0xc(%ebp),%ebx
086e3193 +0x30f3:  mov    -0x4(%ebp),%edi
086e3196 +0x30f6:  mov    %ebp,%esp
086e3198 +0x30f8:  pop    %ebp
086e3199 +0x30f9:  ret
086e319a +0x30fa:  lea    0x0(%esi),%esi
086e31a0 +0x3100:  mov    (%ebx),%edx
086e31a2 +0x3102:  mov    -0xc(%edx),%edx
086e31a5 +0x3105:  lea    (%ebx,%edx,1),%edx
086e31a8 +0x3108:  or     0x14(%edx),%eax
086e31ab +0x310b:  mov    %edx,(%esp)
086e31ae +0x310e:  mov    %eax,0x4(%esp)
086e31b2 +0x3112:  call   086e0cf0 <+0xc50>
086e31b7 +0x3117:  mov    %ebx,%eax
086e31b9 +0x3119:  mov    -0x8(%ebp),%esi
086e31bc +0x311c:  mov    -0xc(%ebp),%ebx
086e31bf +0x311f:  mov    -0x4(%ebp),%edi
086e31c2 +0x3122:  mov    %ebp,%esp
086e31c4 +0x3124:  pop    %ebp
086e31c5 +0x3125:  ret
086e31c6 +0x3126:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e31cb +0x312b:  cmp    $0x2,%edx
086e31ce +0x312e:  je     086e31f7 <+0x3157>
086e31d0 +0x3130:  mov    %eax,(%esp)
086e31d3 +0x3133:  call   08725ce0 <__cxa_begin_catch>
086e31d8 +0x3138:  movl   $0x1,0x4(%esp)
086e31e0 +0x3140:  mov    (%ebx),%eax
086e31e2 +0x3142:  mov    -0xc(%eax),%eax
086e31e5 +0x3145:  lea    (%ebx,%eax,1),%eax
086e31e8 +0x3148:  mov    %eax,(%esp)
086e31eb +0x314b:  call   086e0cb0 <+0xc10>
086e31f0 +0x3150:  call   08725c30 <__cxa_end_catch>
086e31f5 +0x3155:  jmp    086e3184 <+0x30e4>
086e31f7 +0x3157:  mov    %eax,(%esp)
086e31fa +0x315a:  call   08725ce0 <__cxa_begin_catch>
086e31ff +0x315f:  movl   $0x1,0x4(%esp)
086e3207 +0x3167:  mov    (%ebx),%eax
086e3209 +0x3169:  add    -0xc(%eax),%ebx
086e320c +0x316c:  mov    %ebx,(%esp)
086e320f +0x316f:  call   086e0cb0 <+0xc10>
086e3214 +0x3174:  call   08724be0 <__cxa_rethrow>
086e3219 +0x3179:  mov    %eax,%esi
086e321b +0x317b:  call   08725c30 <__cxa_end_catch>
086e3220 +0x3180:  mov    %esi,(%esp)
086e3223 +0x3183:  call   08ae3750 <_Unwind_Resume>
086e3228 +0x3188:  jmp    086e3219 <+0x3179>
086e322a +0x318a:  nop
086e322b +0x318b:  nop
086e322c +0x318c:  nop
086e322d +0x318d:  nop
086e322e +0x318e:  nop
086e322f +0x318f:  nop
086e3230 +0x3190:  push   %ebp
086e3231 +0x3191:  mov    %esp,%ebp
086e3233 +0x3193:  sub    $0x8,%esp
086e3236 +0x3196:  leave
086e3237 +0x3197:  jmp    086e30f0 <+0x3050>
086e323c +0x319c:  nop
086e323d +0x319d:  nop
086e323e +0x319e:  nop
086e323f +0x319f:  nop
086e3240 +0x31a0:  push   %ebp
086e3241 +0x31a1:  mov    %esp,%ebp
086e3243 +0x31a3:  sub    $0x68,%esp
086e3246 +0x31a6:  mov    %ebx,-0xc(%ebp)
086e3249 +0x31a9:  mov    0x8(%ebp),%ebx
086e324c +0x31ac:  lea    -0x19(%ebp),%eax
086e324f +0x31af:  mov    %esi,-0x8(%ebp)
086e3252 +0x31b2:  mov    %edi,-0x4(%ebp)
086e3255 +0x31b5:  movl   $0x0,0x8(%esp)
086e325d +0x31bd:  mov    %ebx,0x4(%esp)
086e3261 +0x31c1:  mov    %eax,(%esp)
086e3264 +0x31c4:  call   086e2f70 <+0x2ed0>
086e3269 +0x31c9:  cmpb   $0x0,-0x19(%ebp)
086e326d +0x31cd:  je     086e32db <+0x323b>
086e326f +0x31cf:  mov    (%ebx),%eax
086e3271 +0x31d1:  movl   $0x0,-0x20(%ebp)
086e3278 +0x31d8:  mov    -0xc(%eax),%edx
086e327b +0x31db:  add    %ebx,%edx
086e327d +0x31dd:  mov    0x88(%edx),%eax
086e3283 +0x31e3:  test   %eax,%eax
086e3285 +0x31e5:  je     086e3316 <+0x3276>
086e328b +0x31eb:  mov    (%eax),%edi
086e328d +0x31ed:  lea    -0x30(%ebp),%ecx
086e3290 +0x31f0:  mov    0x7c(%edx),%esi
086e3293 +0x31f3:  mov    %eax,0x4(%esp)
086e3297 +0x31f7:  mov    %edx,0x18(%esp)
086e329b +0x31fb:  mov    %edi,-0x34(%ebp)
086e329e +0x31fe:  mov    0xc(%ebp),%edi
086e32a1 +0x3201:  mov    -0x34(%ebp),%eax
086e32a4 +0x3204:  movl   $0x0,0x10(%esp)
086e32ac +0x320c:  movl   $0xffffffff,0x14(%esp)
086e32b4 +0x3214:  mov    %edi,0x20(%esp)
086e32b8 +0x3218:  lea    -0x20(%ebp),%edi
086e32bb +0x321b:  mov    %edi,0x1c(%esp)
086e32bf +0x321f:  mov    %esi,0x8(%esp)
086e32c3 +0x3223:  movl   $0xffffffff,0xc(%esp)
086e32cb +0x322b:  mov    %ecx,(%esp)
086e32ce +0x322e:  call   *0x2c(%eax)
086e32d1 +0x3231:  sub    $0x4,%esp
086e32d4 +0x3234:  mov    -0x20(%ebp),%eax
086e32d7 +0x3237:  test   %eax,%eax
086e32d9 +0x3239:  jne    086e32f0 <+0x3250>
086e32db +0x323b:  mov    %ebx,%eax
086e32dd +0x323d:  mov    -0x8(%ebp),%esi
086e32e0 +0x3240:  mov    -0xc(%ebp),%ebx
086e32e3 +0x3243:  mov    -0x4(%ebp),%edi
086e32e6 +0x3246:  mov    %ebp,%esp
086e32e8 +0x3248:  pop    %ebp
086e32e9 +0x3249:  ret
086e32ea +0x324a:  lea    0x0(%esi),%esi
086e32f0 +0x3250:  mov    (%ebx),%edx
086e32f2 +0x3252:  mov    -0xc(%edx),%edx
086e32f5 +0x3255:  lea    (%ebx,%edx,1),%edx
086e32f8 +0x3258:  or     0x14(%edx),%eax
086e32fb +0x325b:  mov    %edx,(%esp)
086e32fe +0x325e:  mov    %eax,0x4(%esp)
086e3302 +0x3262:  call   086e0cf0 <+0xc50>
086e3307 +0x3267:  mov    %ebx,%eax
086e3309 +0x3269:  mov    -0x8(%ebp),%esi
086e330c +0x326c:  mov    -0xc(%ebp),%ebx
086e330f +0x326f:  mov    -0x4(%ebp),%edi
086e3312 +0x3272:  mov    %ebp,%esp
086e3314 +0x3274:  pop    %ebp
086e3315 +0x3275:  ret
086e3316 +0x3276:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e331b +0x327b:  cmp    $0x2,%edx
086e331e +0x327e:  je     086e3347 <+0x32a7>
086e3320 +0x3280:  mov    %eax,(%esp)
086e3323 +0x3283:  call   08725ce0 <__cxa_begin_catch>
086e3328 +0x3288:  movl   $0x1,0x4(%esp)
086e3330 +0x3290:  mov    (%ebx),%eax
086e3332 +0x3292:  mov    -0xc(%eax),%eax
086e3335 +0x3295:  lea    (%ebx,%eax,1),%eax
086e3338 +0x3298:  mov    %eax,(%esp)
086e333b +0x329b:  call   086e0cb0 <+0xc10>
086e3340 +0x32a0:  call   08725c30 <__cxa_end_catch>
086e3345 +0x32a5:  jmp    086e32d4 <+0x3234>
086e3347 +0x32a7:  mov    %eax,(%esp)
086e334a +0x32aa:  call   08725ce0 <__cxa_begin_catch>
086e334f +0x32af:  movl   $0x1,0x4(%esp)
086e3357 +0x32b7:  mov    (%ebx),%eax
086e3359 +0x32b9:  add    -0xc(%eax),%ebx
086e335c +0x32bc:  mov    %ebx,(%esp)
086e335f +0x32bf:  call   086e0cb0 <+0xc10>
086e3364 +0x32c4:  call   08724be0 <__cxa_rethrow>
086e3369 +0x32c9:  mov    %eax,%esi
086e336b +0x32cb:  call   08725c30 <__cxa_end_catch>
086e3370 +0x32d0:  mov    %esi,(%esp)
086e3373 +0x32d3:  call   08ae3750 <_Unwind_Resume>
086e3378 +0x32d8:  jmp    086e3369 <+0x32c9>
086e337a +0x32da:  nop
086e337b +0x32db:  nop
086e337c +0x32dc:  nop
086e337d +0x32dd:  nop
086e337e +0x32de:  nop
086e337f +0x32df:  nop
086e3380 +0x32e0:  push   %ebp
086e3381 +0x32e1:  mov    %esp,%ebp
086e3383 +0x32e3:  sub    $0x8,%esp
086e3386 +0x32e6:  leave
086e3387 +0x32e7:  jmp    086e3240 <+0x31a0>
086e338c +0x32ec:  nop
086e338d +0x32ed:  nop
086e338e +0x32ee:  nop
086e338f +0x32ef:  nop
086e3390 +0x32f0:  push   %ebp
086e3391 +0x32f1:  mov    %esp,%ebp
086e3393 +0x32f3:  sub    $0x68,%esp
086e3396 +0x32f6:  mov    %ebx,-0xc(%ebp)
086e3399 +0x32f9:  mov    0x8(%ebp),%ebx
086e339c +0x32fc:  lea    -0x19(%ebp),%eax
086e339f +0x32ff:  mov    %esi,-0x8(%ebp)
086e33a2 +0x3302:  mov    %edi,-0x4(%ebp)
086e33a5 +0x3305:  movl   $0x0,0x8(%esp)
086e33ad +0x330d:  mov    %ebx,0x4(%esp)
086e33b1 +0x3311:  mov    %eax,(%esp)
086e33b4 +0x3314:  call   086e2f70 <+0x2ed0>
086e33b9 +0x3319:  cmpb   $0x0,-0x19(%ebp)
086e33bd +0x331d:  je     086e342b <+0x338b>
086e33bf +0x331f:  mov    (%ebx),%eax
086e33c1 +0x3321:  movl   $0x0,-0x20(%ebp)
086e33c8 +0x3328:  mov    -0xc(%eax),%edx
086e33cb +0x332b:  add    %ebx,%edx
086e33cd +0x332d:  mov    0x88(%edx),%eax
086e33d3 +0x3333:  test   %eax,%eax
086e33d5 +0x3335:  je     086e3466 <+0x33c6>
086e33db +0x333b:  mov    (%eax),%edi
086e33dd +0x333d:  lea    -0x30(%ebp),%ecx
086e33e0 +0x3340:  mov    0x7c(%edx),%esi
086e33e3 +0x3343:  mov    %eax,0x4(%esp)
086e33e7 +0x3347:  mov    %edx,0x18(%esp)
086e33eb +0x334b:  mov    %edi,-0x34(%ebp)
086e33ee +0x334e:  mov    0xc(%ebp),%edi
086e33f1 +0x3351:  mov    -0x34(%ebp),%eax
086e33f4 +0x3354:  movl   $0x0,0x10(%esp)
086e33fc +0x335c:  movl   $0xffffffff,0x14(%esp)
086e3404 +0x3364:  mov    %edi,0x20(%esp)
086e3408 +0x3368:  lea    -0x20(%ebp),%edi
086e340b +0x336b:  mov    %edi,0x1c(%esp)
086e340f +0x336f:  mov    %esi,0x8(%esp)
086e3413 +0x3373:  movl   $0xffffffff,0xc(%esp)
086e341b +0x337b:  mov    %ecx,(%esp)
086e341e +0x337e:  call   *0x28(%eax)
086e3421 +0x3381:  sub    $0x4,%esp
086e3424 +0x3384:  mov    -0x20(%ebp),%eax
086e3427 +0x3387:  test   %eax,%eax
086e3429 +0x3389:  jne    086e3440 <+0x33a0>
086e342b +0x338b:  mov    %ebx,%eax
086e342d +0x338d:  mov    -0x8(%ebp),%esi
086e3430 +0x3390:  mov    -0xc(%ebp),%ebx
086e3433 +0x3393:  mov    -0x4(%ebp),%edi
086e3436 +0x3396:  mov    %ebp,%esp
086e3438 +0x3398:  pop    %ebp
086e3439 +0x3399:  ret
086e343a +0x339a:  lea    0x0(%esi),%esi
086e3440 +0x33a0:  mov    (%ebx),%edx
086e3442 +0x33a2:  mov    -0xc(%edx),%edx
086e3445 +0x33a5:  lea    (%ebx,%edx,1),%edx
086e3448 +0x33a8:  or     0x14(%edx),%eax
086e344b +0x33ab:  mov    %edx,(%esp)
086e344e +0x33ae:  mov    %eax,0x4(%esp)
086e3452 +0x33b2:  call   086e0cf0 <+0xc50>
086e3457 +0x33b7:  mov    %ebx,%eax
086e3459 +0x33b9:  mov    -0x8(%ebp),%esi
086e345c +0x33bc:  mov    -0xc(%ebp),%ebx
086e345f +0x33bf:  mov    -0x4(%ebp),%edi
086e3462 +0x33c2:  mov    %ebp,%esp
086e3464 +0x33c4:  pop    %ebp
086e3465 +0x33c5:  ret
086e3466 +0x33c6:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e346b +0x33cb:  cmp    $0x2,%edx
086e346e +0x33ce:  je     086e3497 <+0x33f7>
086e3470 +0x33d0:  mov    %eax,(%esp)
086e3473 +0x33d3:  call   08725ce0 <__cxa_begin_catch>
086e3478 +0x33d8:  movl   $0x1,0x4(%esp)
086e3480 +0x33e0:  mov    (%ebx),%eax
086e3482 +0x33e2:  mov    -0xc(%eax),%eax
086e3485 +0x33e5:  lea    (%ebx,%eax,1),%eax
086e3488 +0x33e8:  mov    %eax,(%esp)
086e348b +0x33eb:  call   086e0cb0 <+0xc10>
086e3490 +0x33f0:  call   08725c30 <__cxa_end_catch>
086e3495 +0x33f5:  jmp    086e3424 <+0x3384>
086e3497 +0x33f7:  mov    %eax,(%esp)
086e349a +0x33fa:  call   08725ce0 <__cxa_begin_catch>
086e349f +0x33ff:  movl   $0x1,0x4(%esp)
086e34a7 +0x3407:  mov    (%ebx),%eax
086e34a9 +0x3409:  add    -0xc(%eax),%ebx
086e34ac +0x340c:  mov    %ebx,(%esp)
086e34af +0x340f:  call   086e0cb0 <+0xc10>
086e34b4 +0x3414:  call   08724be0 <__cxa_rethrow>
086e34b9 +0x3419:  mov    %eax,%esi
086e34bb +0x341b:  call   08725c30 <__cxa_end_catch>
086e34c0 +0x3420:  mov    %esi,(%esp)
086e34c3 +0x3423:  call   08ae3750 <_Unwind_Resume>
086e34c8 +0x3428:  jmp    086e34b9 <+0x3419>
086e34ca +0x342a:  nop
086e34cb +0x342b:  nop
086e34cc +0x342c:  nop
086e34cd +0x342d:  nop
086e34ce +0x342e:  nop
086e34cf +0x342f:  nop
086e34d0 +0x3430:  push   %ebp
086e34d1 +0x3431:  mov    %esp,%ebp
086e34d3 +0x3433:  sub    $0x8,%esp
086e34d6 +0x3436:  leave
086e34d7 +0x3437:  jmp    086e3390 <+0x32f0>
086e34dc +0x343c:  nop
086e34dd +0x343d:  nop
086e34de +0x343e:  nop
086e34df +0x343f:  nop
086e34e0 +0x3440:  push   %ebp
086e34e1 +0x3441:  mov    %esp,%ebp
086e34e3 +0x3443:  sub    $0x68,%esp
086e34e6 +0x3446:  mov    %ebx,-0xc(%ebp)
086e34e9 +0x3449:  mov    0x8(%ebp),%ebx
086e34ec +0x344c:  lea    -0x19(%ebp),%eax
086e34ef +0x344f:  mov    %esi,-0x8(%ebp)
086e34f2 +0x3452:  mov    %edi,-0x4(%ebp)
086e34f5 +0x3455:  movl   $0x0,0x8(%esp)
086e34fd +0x345d:  mov    %ebx,0x4(%esp)
086e3501 +0x3461:  mov    %eax,(%esp)
086e3504 +0x3464:  call   086e2f70 <+0x2ed0>
086e3509 +0x3469:  cmpb   $0x0,-0x19(%ebp)
086e350d +0x346d:  je     086e357b <+0x34db>
086e350f +0x346f:  mov    (%ebx),%eax
086e3511 +0x3471:  movl   $0x0,-0x20(%ebp)
086e3518 +0x3478:  mov    -0xc(%eax),%edx
086e351b +0x347b:  add    %ebx,%edx
086e351d +0x347d:  mov    0x88(%edx),%eax
086e3523 +0x3483:  test   %eax,%eax
086e3525 +0x3485:  je     086e35b6 <+0x3516>
086e352b +0x348b:  mov    (%eax),%edi
086e352d +0x348d:  lea    -0x30(%ebp),%ecx
086e3530 +0x3490:  mov    0x7c(%edx),%esi
086e3533 +0x3493:  mov    %eax,0x4(%esp)
086e3537 +0x3497:  mov    %edx,0x18(%esp)
086e353b +0x349b:  mov    %edi,-0x34(%ebp)
086e353e +0x349e:  mov    0xc(%ebp),%edi
086e3541 +0x34a1:  mov    -0x34(%ebp),%eax
086e3544 +0x34a4:  movl   $0x0,0x10(%esp)
086e354c +0x34ac:  movl   $0xffffffff,0x14(%esp)
086e3554 +0x34b4:  mov    %edi,0x20(%esp)
086e3558 +0x34b8:  lea    -0x20(%ebp),%edi
086e355b +0x34bb:  mov    %edi,0x1c(%esp)
086e355f +0x34bf:  mov    %esi,0x8(%esp)
086e3563 +0x34c3:  movl   $0xffffffff,0xc(%esp)
086e356b +0x34cb:  mov    %ecx,(%esp)
086e356e +0x34ce:  call   *0x24(%eax)
086e3571 +0x34d1:  sub    $0x4,%esp
086e3574 +0x34d4:  mov    -0x20(%ebp),%eax
086e3577 +0x34d7:  test   %eax,%eax
086e3579 +0x34d9:  jne    086e3590 <+0x34f0>
086e357b +0x34db:  mov    %ebx,%eax
086e357d +0x34dd:  mov    -0x8(%ebp),%esi
086e3580 +0x34e0:  mov    -0xc(%ebp),%ebx
086e3583 +0x34e3:  mov    -0x4(%ebp),%edi
086e3586 +0x34e6:  mov    %ebp,%esp
086e3588 +0x34e8:  pop    %ebp
086e3589 +0x34e9:  ret
086e358a +0x34ea:  lea    0x0(%esi),%esi
086e3590 +0x34f0:  mov    (%ebx),%edx
086e3592 +0x34f2:  mov    -0xc(%edx),%edx
086e3595 +0x34f5:  lea    (%ebx,%edx,1),%edx
086e3598 +0x34f8:  or     0x14(%edx),%eax
086e359b +0x34fb:  mov    %edx,(%esp)
086e359e +0x34fe:  mov    %eax,0x4(%esp)
086e35a2 +0x3502:  call   086e0cf0 <+0xc50>
086e35a7 +0x3507:  mov    %ebx,%eax
086e35a9 +0x3509:  mov    -0x8(%ebp),%esi
086e35ac +0x350c:  mov    -0xc(%ebp),%ebx
086e35af +0x350f:  mov    -0x4(%ebp),%edi
086e35b2 +0x3512:  mov    %ebp,%esp
086e35b4 +0x3514:  pop    %ebp
086e35b5 +0x3515:  ret
086e35b6 +0x3516:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e35bb +0x351b:  cmp    $0x2,%edx
086e35be +0x351e:  je     086e35e7 <+0x3547>
086e35c0 +0x3520:  mov    %eax,(%esp)
086e35c3 +0x3523:  call   08725ce0 <__cxa_begin_catch>
086e35c8 +0x3528:  movl   $0x1,0x4(%esp)
086e35d0 +0x3530:  mov    (%ebx),%eax
086e35d2 +0x3532:  mov    -0xc(%eax),%eax
086e35d5 +0x3535:  lea    (%ebx,%eax,1),%eax
086e35d8 +0x3538:  mov    %eax,(%esp)
086e35db +0x353b:  call   086e0cb0 <+0xc10>
086e35e0 +0x3540:  call   08725c30 <__cxa_end_catch>
086e35e5 +0x3545:  jmp    086e3574 <+0x34d4>
086e35e7 +0x3547:  mov    %eax,(%esp)
086e35ea +0x354a:  call   08725ce0 <__cxa_begin_catch>
086e35ef +0x354f:  movl   $0x1,0x4(%esp)
086e35f7 +0x3557:  mov    (%ebx),%eax
086e35f9 +0x3559:  add    -0xc(%eax),%ebx
086e35fc +0x355c:  mov    %ebx,(%esp)
086e35ff +0x355f:  call   086e0cb0 <+0xc10>
086e3604 +0x3564:  call   08724be0 <__cxa_rethrow>
086e3609 +0x3569:  mov    %eax,%esi
086e360b +0x356b:  call   08725c30 <__cxa_end_catch>
086e3610 +0x3570:  mov    %esi,(%esp)
086e3613 +0x3573:  call   08ae3750 <_Unwind_Resume>
086e3618 +0x3578:  jmp    086e3609 <+0x3569>
086e361a +0x357a:  nop
086e361b +0x357b:  nop
086e361c +0x357c:  nop
086e361d +0x357d:  nop
086e361e +0x357e:  nop
086e361f +0x357f:  nop
086e3620 +0x3580:  push   %ebp
086e3621 +0x3581:  mov    %esp,%ebp
086e3623 +0x3583:  sub    $0x8,%esp
086e3626 +0x3586:  leave
086e3627 +0x3587:  jmp    086e34e0 <+0x3440>
086e362c +0x358c:  nop
086e362d +0x358d:  nop
086e362e +0x358e:  nop
086e362f +0x358f:  nop
086e3630 +0x3590:  push   %ebp
086e3631 +0x3591:  mov    %esp,%ebp
086e3633 +0x3593:  sub    $0x68,%esp
086e3636 +0x3596:  mov    %ebx,-0xc(%ebp)
086e3639 +0x3599:  mov    0x8(%ebp),%ebx
086e363c +0x359c:  lea    -0x19(%ebp),%eax
086e363f +0x359f:  mov    %esi,-0x8(%ebp)
086e3642 +0x35a2:  mov    %edi,-0x4(%ebp)
086e3645 +0x35a5:  movl   $0x0,0x8(%esp)
086e364d +0x35ad:  mov    %ebx,0x4(%esp)
086e3651 +0x35b1:  mov    %eax,(%esp)
086e3654 +0x35b4:  call   086e2f70 <+0x2ed0>
086e3659 +0x35b9:  cmpb   $0x0,-0x19(%ebp)
086e365d +0x35bd:  je     086e36cb <+0x362b>
086e365f +0x35bf:  mov    (%ebx),%eax
086e3661 +0x35c1:  movl   $0x0,-0x20(%ebp)
086e3668 +0x35c8:  mov    -0xc(%eax),%edx
086e366b +0x35cb:  add    %ebx,%edx
086e366d +0x35cd:  mov    0x88(%edx),%eax
086e3673 +0x35d3:  test   %eax,%eax
086e3675 +0x35d5:  je     086e3706 <+0x3666>
086e367b +0x35db:  mov    (%eax),%edi
086e367d +0x35dd:  lea    -0x30(%ebp),%ecx
086e3680 +0x35e0:  mov    0x7c(%edx),%esi
086e3683 +0x35e3:  mov    %eax,0x4(%esp)
086e3687 +0x35e7:  mov    %edx,0x18(%esp)
086e368b +0x35eb:  mov    %edi,-0x34(%ebp)
086e368e +0x35ee:  mov    0xc(%ebp),%edi
086e3691 +0x35f1:  mov    -0x34(%ebp),%eax
086e3694 +0x35f4:  movl   $0x0,0x10(%esp)
086e369c +0x35fc:  movl   $0xffffffff,0x14(%esp)
086e36a4 +0x3604:  mov    %edi,0x20(%esp)
086e36a8 +0x3608:  lea    -0x20(%ebp),%edi
086e36ab +0x360b:  mov    %edi,0x1c(%esp)
086e36af +0x360f:  mov    %esi,0x8(%esp)
086e36b3 +0x3613:  movl   $0xffffffff,0xc(%esp)
086e36bb +0x361b:  mov    %ecx,(%esp)
086e36be +0x361e:  call   *0x20(%eax)
086e36c1 +0x3621:  sub    $0x4,%esp
086e36c4 +0x3624:  mov    -0x20(%ebp),%eax
086e36c7 +0x3627:  test   %eax,%eax
086e36c9 +0x3629:  jne    086e36e0 <+0x3640>
086e36cb +0x362b:  mov    %ebx,%eax
086e36cd +0x362d:  mov    -0x8(%ebp),%esi
086e36d0 +0x3630:  mov    -0xc(%ebp),%ebx
086e36d3 +0x3633:  mov    -0x4(%ebp),%edi
086e36d6 +0x3636:  mov    %ebp,%esp
086e36d8 +0x3638:  pop    %ebp
086e36d9 +0x3639:  ret
086e36da +0x363a:  lea    0x0(%esi),%esi
086e36e0 +0x3640:  mov    (%ebx),%edx
086e36e2 +0x3642:  mov    -0xc(%edx),%edx
086e36e5 +0x3645:  lea    (%ebx,%edx,1),%edx
086e36e8 +0x3648:  or     0x14(%edx),%eax
086e36eb +0x364b:  mov    %edx,(%esp)
086e36ee +0x364e:  mov    %eax,0x4(%esp)
086e36f2 +0x3652:  call   086e0cf0 <+0xc50>
086e36f7 +0x3657:  mov    %ebx,%eax
086e36f9 +0x3659:  mov    -0x8(%ebp),%esi
086e36fc +0x365c:  mov    -0xc(%ebp),%ebx
086e36ff +0x365f:  mov    -0x4(%ebp),%edi
086e3702 +0x3662:  mov    %ebp,%esp
086e3704 +0x3664:  pop    %ebp
086e3705 +0x3665:  ret
086e3706 +0x3666:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e370b +0x366b:  cmp    $0x2,%edx
086e370e +0x366e:  je     086e3737 <+0x3697>
086e3710 +0x3670:  mov    %eax,(%esp)
086e3713 +0x3673:  call   08725ce0 <__cxa_begin_catch>
086e3718 +0x3678:  movl   $0x1,0x4(%esp)
086e3720 +0x3680:  mov    (%ebx),%eax
086e3722 +0x3682:  mov    -0xc(%eax),%eax
086e3725 +0x3685:  lea    (%ebx,%eax,1),%eax
086e3728 +0x3688:  mov    %eax,(%esp)
086e372b +0x368b:  call   086e0cb0 <+0xc10>
086e3730 +0x3690:  call   08725c30 <__cxa_end_catch>
086e3735 +0x3695:  jmp    086e36c4 <+0x3624>
086e3737 +0x3697:  mov    %eax,(%esp)
086e373a +0x369a:  call   08725ce0 <__cxa_begin_catch>
086e373f +0x369f:  movl   $0x1,0x4(%esp)
086e3747 +0x36a7:  mov    (%ebx),%eax
086e3749 +0x36a9:  add    -0xc(%eax),%ebx
086e374c +0x36ac:  mov    %ebx,(%esp)
086e374f +0x36af:  call   086e0cb0 <+0xc10>
086e3754 +0x36b4:  call   08724be0 <__cxa_rethrow>
086e3759 +0x36b9:  mov    %eax,%esi
086e375b +0x36bb:  call   08725c30 <__cxa_end_catch>
086e3760 +0x36c0:  mov    %esi,(%esp)
086e3763 +0x36c3:  call   08ae3750 <_Unwind_Resume>
086e3768 +0x36c8:  jmp    086e3759 <+0x36b9>
086e376a +0x36ca:  nop
086e376b +0x36cb:  nop
086e376c +0x36cc:  nop
086e376d +0x36cd:  nop
086e376e +0x36ce:  nop
086e376f +0x36cf:  nop
086e3770 +0x36d0:  push   %ebp
086e3771 +0x36d1:  mov    %esp,%ebp
086e3773 +0x36d3:  sub    $0x8,%esp
086e3776 +0x36d6:  leave
086e3777 +0x36d7:  jmp    086e3630 <+0x3590>
086e377c +0x36dc:  nop
086e377d +0x36dd:  nop
086e377e +0x36de:  nop
086e377f +0x36df:  nop
086e3780 +0x36e0:  push   %ebp
086e3781 +0x36e1:  mov    %esp,%ebp
086e3783 +0x36e3:  sub    $0x68,%esp
086e3786 +0x36e6:  mov    %ebx,-0xc(%ebp)
086e3789 +0x36e9:  mov    0x8(%ebp),%ebx
086e378c +0x36ec:  lea    -0x19(%ebp),%eax
086e378f +0x36ef:  mov    %esi,-0x8(%ebp)
086e3792 +0x36f2:  mov    %edi,-0x4(%ebp)
086e3795 +0x36f5:  movl   $0x0,0x8(%esp)
086e379d +0x36fd:  mov    %ebx,0x4(%esp)
086e37a1 +0x3701:  mov    %eax,(%esp)
086e37a4 +0x3704:  call   086e2f70 <+0x2ed0>
086e37a9 +0x3709:  cmpb   $0x0,-0x19(%ebp)
086e37ad +0x370d:  je     086e381b <+0x377b>
086e37af +0x370f:  mov    (%ebx),%eax
086e37b1 +0x3711:  movl   $0x0,-0x20(%ebp)
086e37b8 +0x3718:  mov    -0xc(%eax),%edx
086e37bb +0x371b:  add    %ebx,%edx
086e37bd +0x371d:  mov    0x88(%edx),%eax
086e37c3 +0x3723:  test   %eax,%eax
086e37c5 +0x3725:  je     086e3856 <+0x37b6>
086e37cb +0x372b:  mov    (%eax),%edi
086e37cd +0x372d:  lea    -0x30(%ebp),%ecx
086e37d0 +0x3730:  mov    0x7c(%edx),%esi
086e37d3 +0x3733:  mov    %eax,0x4(%esp)
086e37d7 +0x3737:  mov    %edx,0x18(%esp)
086e37db +0x373b:  mov    %edi,-0x34(%ebp)
086e37de +0x373e:  mov    0xc(%ebp),%edi
086e37e1 +0x3741:  mov    -0x34(%ebp),%eax
086e37e4 +0x3744:  movl   $0x0,0x10(%esp)
086e37ec +0x374c:  movl   $0xffffffff,0x14(%esp)
086e37f4 +0x3754:  mov    %edi,0x20(%esp)
086e37f8 +0x3758:  lea    -0x20(%ebp),%edi
086e37fb +0x375b:  mov    %edi,0x1c(%esp)
086e37ff +0x375f:  mov    %esi,0x8(%esp)
086e3803 +0x3763:  movl   $0xffffffff,0xc(%esp)
086e380b +0x376b:  mov    %ecx,(%esp)
086e380e +0x376e:  call   *0x1c(%eax)
086e3811 +0x3771:  sub    $0x4,%esp
086e3814 +0x3774:  mov    -0x20(%ebp),%eax
086e3817 +0x3777:  test   %eax,%eax
086e3819 +0x3779:  jne    086e3830 <+0x3790>
086e381b +0x377b:  mov    %ebx,%eax
086e381d +0x377d:  mov    -0x8(%ebp),%esi
086e3820 +0x3780:  mov    -0xc(%ebp),%ebx
086e3823 +0x3783:  mov    -0x4(%ebp),%edi
086e3826 +0x3786:  mov    %ebp,%esp
086e3828 +0x3788:  pop    %ebp
086e3829 +0x3789:  ret
086e382a +0x378a:  lea    0x0(%esi),%esi
086e3830 +0x3790:  mov    (%ebx),%edx
086e3832 +0x3792:  mov    -0xc(%edx),%edx
086e3835 +0x3795:  lea    (%ebx,%edx,1),%edx
086e3838 +0x3798:  or     0x14(%edx),%eax
086e383b +0x379b:  mov    %edx,(%esp)
086e383e +0x379e:  mov    %eax,0x4(%esp)
086e3842 +0x37a2:  call   086e0cf0 <+0xc50>
086e3847 +0x37a7:  mov    %ebx,%eax
086e3849 +0x37a9:  mov    -0x8(%ebp),%esi
086e384c +0x37ac:  mov    -0xc(%ebp),%ebx
086e384f +0x37af:  mov    -0x4(%ebp),%edi
086e3852 +0x37b2:  mov    %ebp,%esp
086e3854 +0x37b4:  pop    %ebp
086e3855 +0x37b5:  ret
086e3856 +0x37b6:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e385b +0x37bb:  cmp    $0x2,%edx
086e385e +0x37be:  je     086e3887 <+0x37e7>
086e3860 +0x37c0:  mov    %eax,(%esp)
086e3863 +0x37c3:  call   08725ce0 <__cxa_begin_catch>
086e3868 +0x37c8:  movl   $0x1,0x4(%esp)
086e3870 +0x37d0:  mov    (%ebx),%eax
086e3872 +0x37d2:  mov    -0xc(%eax),%eax
086e3875 +0x37d5:  lea    (%ebx,%eax,1),%eax
086e3878 +0x37d8:  mov    %eax,(%esp)
086e387b +0x37db:  call   086e0cb0 <+0xc10>
086e3880 +0x37e0:  call   08725c30 <__cxa_end_catch>
086e3885 +0x37e5:  jmp    086e3814 <+0x3774>
086e3887 +0x37e7:  mov    %eax,(%esp)
086e388a +0x37ea:  call   08725ce0 <__cxa_begin_catch>
086e388f +0x37ef:  movl   $0x1,0x4(%esp)
086e3897 +0x37f7:  mov    (%ebx),%eax
086e3899 +0x37f9:  add    -0xc(%eax),%ebx
086e389c +0x37fc:  mov    %ebx,(%esp)
086e389f +0x37ff:  call   086e0cb0 <+0xc10>
086e38a4 +0x3804:  call   08724be0 <__cxa_rethrow>
086e38a9 +0x3809:  mov    %eax,%esi
086e38ab +0x380b:  call   08725c30 <__cxa_end_catch>
086e38b0 +0x3810:  mov    %esi,(%esp)
086e38b3 +0x3813:  call   08ae3750 <_Unwind_Resume>
086e38b8 +0x3818:  jmp    086e38a9 <+0x3809>
086e38ba +0x381a:  nop
086e38bb +0x381b:  nop
086e38bc +0x381c:  nop
086e38bd +0x381d:  nop
086e38be +0x381e:  nop
086e38bf +0x381f:  nop
086e38c0 +0x3820:  push   %ebp
086e38c1 +0x3821:  mov    %esp,%ebp
086e38c3 +0x3823:  sub    $0x8,%esp
086e38c6 +0x3826:  leave
086e38c7 +0x3827:  jmp    086e3780 <+0x36e0>
086e38cc +0x382c:  nop
086e38cd +0x382d:  nop
086e38ce +0x382e:  nop
086e38cf +0x382f:  nop
086e38d0 +0x3830:  push   %ebp
086e38d1 +0x3831:  mov    %esp,%ebp
086e38d3 +0x3833:  sub    $0x68,%esp
086e38d6 +0x3836:  mov    %ebx,-0xc(%ebp)
086e38d9 +0x3839:  mov    0x8(%ebp),%ebx
086e38dc +0x383c:  lea    -0x19(%ebp),%eax
086e38df +0x383f:  mov    %esi,-0x8(%ebp)
086e38e2 +0x3842:  mov    %edi,-0x4(%ebp)
086e38e5 +0x3845:  movl   $0x0,0x8(%esp)
086e38ed +0x384d:  mov    %ebx,0x4(%esp)
086e38f1 +0x3851:  mov    %eax,(%esp)
086e38f4 +0x3854:  call   086e2f70 <+0x2ed0>
086e38f9 +0x3859:  cmpb   $0x0,-0x19(%ebp)
086e38fd +0x385d:  je     086e396b <+0x38cb>
086e38ff +0x385f:  mov    (%ebx),%eax
086e3901 +0x3861:  movl   $0x0,-0x20(%ebp)
086e3908 +0x3868:  mov    -0xc(%eax),%edx
086e390b +0x386b:  add    %ebx,%edx
086e390d +0x386d:  mov    0x88(%edx),%eax
086e3913 +0x3873:  test   %eax,%eax
086e3915 +0x3875:  je     086e39a6 <+0x3906>
086e391b +0x387b:  mov    (%eax),%edi
086e391d +0x387d:  lea    -0x30(%ebp),%ecx
086e3920 +0x3880:  mov    0x7c(%edx),%esi
086e3923 +0x3883:  mov    %eax,0x4(%esp)
086e3927 +0x3887:  mov    %edx,0x18(%esp)
086e392b +0x388b:  mov    %edi,-0x34(%ebp)
086e392e +0x388e:  mov    0xc(%ebp),%edi
086e3931 +0x3891:  mov    -0x34(%ebp),%eax
086e3934 +0x3894:  movl   $0x0,0x10(%esp)
086e393c +0x389c:  movl   $0xffffffff,0x14(%esp)
086e3944 +0x38a4:  mov    %edi,0x20(%esp)
086e3948 +0x38a8:  lea    -0x20(%ebp),%edi
086e394b +0x38ab:  mov    %edi,0x1c(%esp)
086e394f +0x38af:  mov    %esi,0x8(%esp)
086e3953 +0x38b3:  movl   $0xffffffff,0xc(%esp)
086e395b +0x38bb:  mov    %ecx,(%esp)
086e395e +0x38be:  call   *0x8(%eax)
086e3961 +0x38c1:  sub    $0x4,%esp
086e3964 +0x38c4:  mov    -0x20(%ebp),%eax
086e3967 +0x38c7:  test   %eax,%eax
086e3969 +0x38c9:  jne    086e3980 <+0x38e0>
086e396b +0x38cb:  mov    %ebx,%eax
086e396d +0x38cd:  mov    -0x8(%ebp),%esi
086e3970 +0x38d0:  mov    -0xc(%ebp),%ebx
086e3973 +0x38d3:  mov    -0x4(%ebp),%edi
086e3976 +0x38d6:  mov    %ebp,%esp
086e3978 +0x38d8:  pop    %ebp
086e3979 +0x38d9:  ret
086e397a +0x38da:  lea    0x0(%esi),%esi
086e3980 +0x38e0:  mov    (%ebx),%edx
086e3982 +0x38e2:  mov    -0xc(%edx),%edx
086e3985 +0x38e5:  lea    (%ebx,%edx,1),%edx
086e3988 +0x38e8:  or     0x14(%edx),%eax
086e398b +0x38eb:  mov    %edx,(%esp)
086e398e +0x38ee:  mov    %eax,0x4(%esp)
086e3992 +0x38f2:  call   086e0cf0 <+0xc50>
086e3997 +0x38f7:  mov    %ebx,%eax
086e3999 +0x38f9:  mov    -0x8(%ebp),%esi
086e399c +0x38fc:  mov    -0xc(%ebp),%ebx
086e399f +0x38ff:  mov    -0x4(%ebp),%edi
086e39a2 +0x3902:  mov    %ebp,%esp
086e39a4 +0x3904:  pop    %ebp
086e39a5 +0x3905:  ret
086e39a6 +0x3906:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e39ab +0x390b:  cmp    $0x2,%edx
086e39ae +0x390e:  je     086e39d7 <+0x3937>
086e39b0 +0x3910:  mov    %eax,(%esp)
086e39b3 +0x3913:  call   08725ce0 <__cxa_begin_catch>
086e39b8 +0x3918:  movl   $0x1,0x4(%esp)
086e39c0 +0x3920:  mov    (%ebx),%eax
086e39c2 +0x3922:  mov    -0xc(%eax),%eax
086e39c5 +0x3925:  lea    (%ebx,%eax,1),%eax
086e39c8 +0x3928:  mov    %eax,(%esp)
086e39cb +0x392b:  call   086e0cb0 <+0xc10>
086e39d0 +0x3930:  call   08725c30 <__cxa_end_catch>
086e39d5 +0x3935:  jmp    086e3964 <+0x38c4>
086e39d7 +0x3937:  mov    %eax,(%esp)
086e39da +0x393a:  call   08725ce0 <__cxa_begin_catch>
086e39df +0x393f:  movl   $0x1,0x4(%esp)
086e39e7 +0x3947:  mov    (%ebx),%eax
086e39e9 +0x3949:  add    -0xc(%eax),%ebx
086e39ec +0x394c:  mov    %ebx,(%esp)
086e39ef +0x394f:  call   086e0cb0 <+0xc10>
086e39f4 +0x3954:  call   08724be0 <__cxa_rethrow>
086e39f9 +0x3959:  mov    %eax,%esi
086e39fb +0x395b:  call   08725c30 <__cxa_end_catch>
086e3a00 +0x3960:  mov    %esi,(%esp)
086e3a03 +0x3963:  call   08ae3750 <_Unwind_Resume>
086e3a08 +0x3968:  jmp    086e39f9 <+0x3959>
086e3a0a +0x396a:  nop
086e3a0b +0x396b:  nop
086e3a0c +0x396c:  nop
086e3a0d +0x396d:  nop
086e3a0e +0x396e:  nop
086e3a0f +0x396f:  nop
086e3a10 +0x3970:  push   %ebp
086e3a11 +0x3971:  mov    %esp,%ebp
086e3a13 +0x3973:  sub    $0x8,%esp
086e3a16 +0x3976:  leave
086e3a17 +0x3977:  jmp    086e38d0 <+0x3830>
086e3a1c +0x397c:  nop
086e3a1d +0x397d:  nop
086e3a1e +0x397e:  nop
086e3a1f +0x397f:  nop
086e3a20 +0x3980:  push   %ebp
086e3a21 +0x3981:  mov    %esp,%ebp
086e3a23 +0x3983:  sub    $0x68,%esp
086e3a26 +0x3986:  mov    %ebx,-0xc(%ebp)
086e3a29 +0x3989:  mov    0x8(%ebp),%ebx
086e3a2c +0x398c:  lea    -0x19(%ebp),%eax
086e3a2f +0x398f:  mov    %esi,-0x8(%ebp)
086e3a32 +0x3992:  mov    %edi,-0x4(%ebp)
086e3a35 +0x3995:  movl   $0x0,0x8(%esp)
086e3a3d +0x399d:  mov    %ebx,0x4(%esp)
086e3a41 +0x39a1:  mov    %eax,(%esp)
086e3a44 +0x39a4:  call   086e2f70 <+0x2ed0>
086e3a49 +0x39a9:  cmpb   $0x0,-0x19(%ebp)
086e3a4d +0x39ad:  je     086e3abb <+0x3a1b>
086e3a4f +0x39af:  mov    (%ebx),%eax
086e3a51 +0x39b1:  movl   $0x0,-0x20(%ebp)
086e3a58 +0x39b8:  mov    -0xc(%eax),%edx
086e3a5b +0x39bb:  add    %ebx,%edx
086e3a5d +0x39bd:  mov    0x88(%edx),%eax
086e3a63 +0x39c3:  test   %eax,%eax
086e3a65 +0x39c5:  je     086e3af6 <+0x3a56>
086e3a6b +0x39cb:  mov    (%eax),%edi
086e3a6d +0x39cd:  lea    -0x30(%ebp),%ecx
086e3a70 +0x39d0:  mov    0x7c(%edx),%esi
086e3a73 +0x39d3:  mov    %eax,0x4(%esp)
086e3a77 +0x39d7:  mov    %edx,0x18(%esp)
086e3a7b +0x39db:  mov    %edi,-0x34(%ebp)
086e3a7e +0x39de:  mov    0xc(%ebp),%edi
086e3a81 +0x39e1:  mov    -0x34(%ebp),%eax
086e3a84 +0x39e4:  movl   $0x0,0x10(%esp)
086e3a8c +0x39ec:  movl   $0xffffffff,0x14(%esp)
086e3a94 +0x39f4:  mov    %edi,0x20(%esp)
086e3a98 +0x39f8:  lea    -0x20(%ebp),%edi
086e3a9b +0x39fb:  mov    %edi,0x1c(%esp)
086e3a9f +0x39ff:  mov    %esi,0x8(%esp)
086e3aa3 +0x3a03:  movl   $0xffffffff,0xc(%esp)
086e3aab +0x3a0b:  mov    %ecx,(%esp)
086e3aae +0x3a0e:  call   *0x18(%eax)
086e3ab1 +0x3a11:  sub    $0x4,%esp
086e3ab4 +0x3a14:  mov    -0x20(%ebp),%eax
086e3ab7 +0x3a17:  test   %eax,%eax
086e3ab9 +0x3a19:  jne    086e3ad0 <+0x3a30>
086e3abb +0x3a1b:  mov    %ebx,%eax
086e3abd +0x3a1d:  mov    -0x8(%ebp),%esi
086e3ac0 +0x3a20:  mov    -0xc(%ebp),%ebx
086e3ac3 +0x3a23:  mov    -0x4(%ebp),%edi
086e3ac6 +0x3a26:  mov    %ebp,%esp
086e3ac8 +0x3a28:  pop    %ebp
086e3ac9 +0x3a29:  ret
086e3aca +0x3a2a:  lea    0x0(%esi),%esi
086e3ad0 +0x3a30:  mov    (%ebx),%edx
086e3ad2 +0x3a32:  mov    -0xc(%edx),%edx
086e3ad5 +0x3a35:  lea    (%ebx,%edx,1),%edx
086e3ad8 +0x3a38:  or     0x14(%edx),%eax
086e3adb +0x3a3b:  mov    %edx,(%esp)
086e3ade +0x3a3e:  mov    %eax,0x4(%esp)
086e3ae2 +0x3a42:  call   086e0cf0 <+0xc50>
086e3ae7 +0x3a47:  mov    %ebx,%eax
086e3ae9 +0x3a49:  mov    -0x8(%ebp),%esi
086e3aec +0x3a4c:  mov    -0xc(%ebp),%ebx
086e3aef +0x3a4f:  mov    -0x4(%ebp),%edi
086e3af2 +0x3a52:  mov    %ebp,%esp
086e3af4 +0x3a54:  pop    %ebp
086e3af5 +0x3a55:  ret
086e3af6 +0x3a56:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e3afb +0x3a5b:  cmp    $0x2,%edx
086e3afe +0x3a5e:  je     086e3b27 <+0x3a87>
086e3b00 +0x3a60:  mov    %eax,(%esp)
086e3b03 +0x3a63:  call   08725ce0 <__cxa_begin_catch>
086e3b08 +0x3a68:  movl   $0x1,0x4(%esp)
086e3b10 +0x3a70:  mov    (%ebx),%eax
086e3b12 +0x3a72:  mov    -0xc(%eax),%eax
086e3b15 +0x3a75:  lea    (%ebx,%eax,1),%eax
086e3b18 +0x3a78:  mov    %eax,(%esp)
086e3b1b +0x3a7b:  call   086e0cb0 <+0xc10>
086e3b20 +0x3a80:  call   08725c30 <__cxa_end_catch>
086e3b25 +0x3a85:  jmp    086e3ab4 <+0x3a14>
086e3b27 +0x3a87:  mov    %eax,(%esp)
086e3b2a +0x3a8a:  call   08725ce0 <__cxa_begin_catch>
086e3b2f +0x3a8f:  movl   $0x1,0x4(%esp)
086e3b37 +0x3a97:  mov    (%ebx),%eax
086e3b39 +0x3a99:  add    -0xc(%eax),%ebx
086e3b3c +0x3a9c:  mov    %ebx,(%esp)
086e3b3f +0x3a9f:  call   086e0cb0 <+0xc10>
086e3b44 +0x3aa4:  call   08724be0 <__cxa_rethrow>
086e3b49 +0x3aa9:  mov    %eax,%esi
086e3b4b +0x3aab:  call   08725c30 <__cxa_end_catch>
086e3b50 +0x3ab0:  mov    %esi,(%esp)
086e3b53 +0x3ab3:  call   08ae3750 <_Unwind_Resume>
086e3b58 +0x3ab8:  jmp    086e3b49 <+0x3aa9>
086e3b5a +0x3aba:  nop
086e3b5b +0x3abb:  nop
086e3b5c +0x3abc:  nop
086e3b5d +0x3abd:  nop
086e3b5e +0x3abe:  nop
086e3b5f +0x3abf:  nop
086e3b60 +0x3ac0:  push   %ebp
086e3b61 +0x3ac1:  mov    %esp,%ebp
086e3b63 +0x3ac3:  sub    $0x8,%esp
086e3b66 +0x3ac6:  leave
086e3b67 +0x3ac7:  jmp    086e3a20 <+0x3980>
086e3b6c +0x3acc:  nop
086e3b6d +0x3acd:  nop
086e3b6e +0x3ace:  nop
086e3b6f +0x3acf:  nop
086e3b70 +0x3ad0:  push   %ebp
086e3b71 +0x3ad1:  mov    %esp,%ebp
086e3b73 +0x3ad3:  sub    $0x68,%esp
086e3b76 +0x3ad6:  mov    %ebx,-0xc(%ebp)
086e3b79 +0x3ad9:  mov    0x8(%ebp),%ebx
086e3b7c +0x3adc:  lea    -0x19(%ebp),%eax
086e3b7f +0x3adf:  mov    %esi,-0x8(%ebp)
086e3b82 +0x3ae2:  mov    %edi,-0x4(%ebp)
086e3b85 +0x3ae5:  movl   $0x0,0x8(%esp)
086e3b8d +0x3aed:  mov    %ebx,0x4(%esp)
086e3b91 +0x3af1:  mov    %eax,(%esp)
086e3b94 +0x3af4:  call   086e2f70 <+0x2ed0>
086e3b99 +0x3af9:  cmpb   $0x0,-0x19(%ebp)
086e3b9d +0x3afd:  je     086e3c0b <+0x3b6b>
086e3b9f +0x3aff:  mov    (%ebx),%eax
086e3ba1 +0x3b01:  movl   $0x0,-0x20(%ebp)
086e3ba8 +0x3b08:  mov    -0xc(%eax),%edx
086e3bab +0x3b0b:  add    %ebx,%edx
086e3bad +0x3b0d:  mov    0x88(%edx),%eax
086e3bb3 +0x3b13:  test   %eax,%eax
086e3bb5 +0x3b15:  je     086e3c46 <+0x3ba6>
086e3bbb +0x3b1b:  mov    (%eax),%edi
086e3bbd +0x3b1d:  lea    -0x30(%ebp),%ecx
086e3bc0 +0x3b20:  mov    0x7c(%edx),%esi
086e3bc3 +0x3b23:  mov    %eax,0x4(%esp)
086e3bc7 +0x3b27:  mov    %edx,0x18(%esp)
086e3bcb +0x3b2b:  mov    %edi,-0x34(%ebp)
086e3bce +0x3b2e:  mov    0xc(%ebp),%edi
086e3bd1 +0x3b31:  mov    -0x34(%ebp),%eax
086e3bd4 +0x3b34:  movl   $0x0,0x10(%esp)
086e3bdc +0x3b3c:  movl   $0xffffffff,0x14(%esp)
086e3be4 +0x3b44:  mov    %edi,0x20(%esp)
086e3be8 +0x3b48:  lea    -0x20(%ebp),%edi
086e3beb +0x3b4b:  mov    %edi,0x1c(%esp)
086e3bef +0x3b4f:  mov    %esi,0x8(%esp)
086e3bf3 +0x3b53:  movl   $0xffffffff,0xc(%esp)
086e3bfb +0x3b5b:  mov    %ecx,(%esp)
086e3bfe +0x3b5e:  call   *0xc(%eax)
086e3c01 +0x3b61:  sub    $0x4,%esp
086e3c04 +0x3b64:  mov    -0x20(%ebp),%eax
086e3c07 +0x3b67:  test   %eax,%eax
086e3c09 +0x3b69:  jne    086e3c20 <+0x3b80>
086e3c0b +0x3b6b:  mov    %ebx,%eax
086e3c0d +0x3b6d:  mov    -0x8(%ebp),%esi
086e3c10 +0x3b70:  mov    -0xc(%ebp),%ebx
086e3c13 +0x3b73:  mov    -0x4(%ebp),%edi
086e3c16 +0x3b76:  mov    %ebp,%esp
086e3c18 +0x3b78:  pop    %ebp
086e3c19 +0x3b79:  ret
086e3c1a +0x3b7a:  lea    0x0(%esi),%esi
086e3c20 +0x3b80:  mov    (%ebx),%edx
086e3c22 +0x3b82:  mov    -0xc(%edx),%edx
086e3c25 +0x3b85:  lea    (%ebx,%edx,1),%edx
086e3c28 +0x3b88:  or     0x14(%edx),%eax
086e3c2b +0x3b8b:  mov    %edx,(%esp)
086e3c2e +0x3b8e:  mov    %eax,0x4(%esp)
086e3c32 +0x3b92:  call   086e0cf0 <+0xc50>
086e3c37 +0x3b97:  mov    %ebx,%eax
086e3c39 +0x3b99:  mov    -0x8(%ebp),%esi
086e3c3c +0x3b9c:  mov    -0xc(%ebp),%ebx
086e3c3f +0x3b9f:  mov    -0x4(%ebp),%edi
086e3c42 +0x3ba2:  mov    %ebp,%esp
086e3c44 +0x3ba4:  pop    %ebp
086e3c45 +0x3ba5:  ret
086e3c46 +0x3ba6:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e3c4b +0x3bab:  cmp    $0x2,%edx
086e3c4e +0x3bae:  je     086e3c77 <+0x3bd7>
086e3c50 +0x3bb0:  mov    %eax,(%esp)
086e3c53 +0x3bb3:  call   08725ce0 <__cxa_begin_catch>
086e3c58 +0x3bb8:  movl   $0x1,0x4(%esp)
086e3c60 +0x3bc0:  mov    (%ebx),%eax
086e3c62 +0x3bc2:  mov    -0xc(%eax),%eax
086e3c65 +0x3bc5:  lea    (%ebx,%eax,1),%eax
086e3c68 +0x3bc8:  mov    %eax,(%esp)
086e3c6b +0x3bcb:  call   086e0cb0 <+0xc10>
086e3c70 +0x3bd0:  call   08725c30 <__cxa_end_catch>
086e3c75 +0x3bd5:  jmp    086e3c04 <+0x3b64>
086e3c77 +0x3bd7:  mov    %eax,(%esp)
086e3c7a +0x3bda:  call   08725ce0 <__cxa_begin_catch>
086e3c7f +0x3bdf:  movl   $0x1,0x4(%esp)
086e3c87 +0x3be7:  mov    (%ebx),%eax
086e3c89 +0x3be9:  add    -0xc(%eax),%ebx
086e3c8c +0x3bec:  mov    %ebx,(%esp)
086e3c8f +0x3bef:  call   086e0cb0 <+0xc10>
086e3c94 +0x3bf4:  call   08724be0 <__cxa_rethrow>
086e3c99 +0x3bf9:  mov    %eax,%esi
086e3c9b +0x3bfb:  call   08725c30 <__cxa_end_catch>
086e3ca0 +0x3c00:  mov    %esi,(%esp)
086e3ca3 +0x3c03:  call   08ae3750 <_Unwind_Resume>
086e3ca8 +0x3c08:  jmp    086e3c99 <+0x3bf9>
086e3caa +0x3c0a:  nop
086e3cab +0x3c0b:  nop
086e3cac +0x3c0c:  nop
086e3cad +0x3c0d:  nop
086e3cae +0x3c0e:  nop
086e3caf +0x3c0f:  nop
086e3cb0 +0x3c10:  push   %ebp
086e3cb1 +0x3c11:  mov    %esp,%ebp
086e3cb3 +0x3c13:  sub    $0x8,%esp
086e3cb6 +0x3c16:  leave
086e3cb7 +0x3c17:  jmp    086e3b70 <+0x3ad0>
086e3cbc +0x3c1c:  nop
086e3cbd +0x3c1d:  nop
086e3cbe +0x3c1e:  nop
086e3cbf +0x3c1f:  nop
086e3cc0 +0x3c20:  push   %ebp
086e3cc1 +0x3c21:  mov    %esp,%ebp
086e3cc3 +0x3c23:  push   %ebx
086e3cc4 +0x3c24:  sub    $0x24,%esp
086e3cc7 +0x3c27:  mov    0x8(%ebp),%ebx
086e3cca +0x3c2a:  lea    -0xc(%ebp),%eax
086e3ccd +0x3c2d:  mov    %eax,0x4(%esp)
086e3cd1 +0x3c31:  mov    %ebx,(%esp)
086e3cd4 +0x3c34:  call   086e3b70 <+0x3ad0>
086e3cd9 +0x3c39:  mov    (%ebx),%eax
086e3cdb +0x3c3b:  mov    -0xc(%eax),%eax
086e3cde +0x3c3e:  testb  $0x5,0x14(%ebx,%eax,1)
086e3ce3 +0x3c43:  jne    086e3ced <+0x3c4d>
086e3ce5 +0x3c45:  mov    -0xc(%ebp),%edx
086e3ce8 +0x3c48:  mov    0xc(%ebp),%eax
086e3ceb +0x3c4b:  mov    %edx,(%eax)
086e3ced +0x3c4d:  mov    %ebx,%eax
086e3cef +0x3c4f:  add    $0x24,%esp
086e3cf2 +0x3c52:  pop    %ebx
086e3cf3 +0x3c53:  pop    %ebp
086e3cf4 +0x3c54:  ret
086e3cf5 +0x3c55:  nop
086e3cf6 +0x3c56:  nop
086e3cf7 +0x3c57:  nop
086e3cf8 +0x3c58:  nop
086e3cf9 +0x3c59:  nop
086e3cfa +0x3c5a:  nop
086e3cfb +0x3c5b:  nop
086e3cfc +0x3c5c:  nop
086e3cfd +0x3c5d:  nop
086e3cfe +0x3c5e:  nop
086e3cff +0x3c5f:  nop
086e3d00 +0x3c60:  push   %ebp
086e3d01 +0x3c61:  mov    %esp,%ebp
086e3d03 +0x3c63:  sub    $0x28,%esp
086e3d06 +0x3c66:  mov    %ebx,-0x8(%ebp)
086e3d09 +0x3c69:  mov    0x8(%ebp),%ebx
086e3d0c +0x3c6c:  lea    -0xc(%ebp),%eax
086e3d0f +0x3c6f:  mov    %esi,-0x4(%ebp)
086e3d12 +0x3c72:  mov    %eax,0x4(%esp)
086e3d16 +0x3c76:  mov    %ebx,(%esp)
086e3d19 +0x3c79:  call   086e3b70 <+0x3ad0>
086e3d1e +0x3c7e:  mov    (%ebx),%eax
086e3d20 +0x3c80:  mov    -0xc(%eax),%eax
086e3d23 +0x3c83:  lea    (%ebx,%eax,1),%eax
086e3d26 +0x3c86:  mov    0x14(%eax),%edx
086e3d29 +0x3c89:  test   $0x5,%dl
086e3d2c +0x3c8c:  jne    086e3d45 <+0x3ca5>
086e3d2e +0x3c8e:  mov    -0xc(%ebp),%ecx
086e3d31 +0x3c91:  lea    0x8000(%ecx),%esi
086e3d37 +0x3c97:  cmp    $0xffff,%esi
086e3d3d +0x3c9d:  ja     086e3d58 <+0x3cb8>
086e3d3f +0x3c9f:  mov    0xc(%ebp),%eax
086e3d42 +0x3ca2:  mov    %cx,(%eax)
086e3d45 +0x3ca5:  mov    %ebx,%eax
086e3d47 +0x3ca7:  mov    -0x4(%ebp),%esi
086e3d4a +0x3caa:  mov    -0x8(%ebp),%ebx
086e3d4d +0x3cad:  mov    %ebp,%esp
086e3d4f +0x3caf:  pop    %ebp
086e3d50 +0x3cb0:  ret
086e3d51 +0x3cb1:  lea    0x0(%esi,%eiz,1),%esi
086e3d58 +0x3cb8:  or     $0x4,%edx
086e3d5b +0x3cbb:  mov    %eax,(%esp)
086e3d5e +0x3cbe:  mov    %edx,0x4(%esp)
086e3d62 +0x3cc2:  call   086e0cf0 <+0xc50>
086e3d67 +0x3cc7:  mov    %ebx,%eax
086e3d69 +0x3cc9:  mov    -0x4(%ebp),%esi
086e3d6c +0x3ccc:  mov    -0x8(%ebp),%ebx
086e3d6f +0x3ccf:  mov    %ebp,%esp
086e3d71 +0x3cd1:  pop    %ebp
086e3d72 +0x3cd2:  ret
086e3d73 +0x3cd3:  nop
086e3d74 +0x3cd4:  nop
086e3d75 +0x3cd5:  nop
086e3d76 +0x3cd6:  nop
086e3d77 +0x3cd7:  nop
086e3d78 +0x3cd8:  nop
086e3d79 +0x3cd9:  nop
086e3d7a +0x3cda:  nop
086e3d7b +0x3cdb:  nop
086e3d7c +0x3cdc:  nop
086e3d7d +0x3cdd:  nop
086e3d7e +0x3cde:  nop
086e3d7f +0x3cdf:  nop
086e3d80 +0x3ce0:  push   %ebp
086e3d81 +0x3ce1:  mov    %esp,%ebp
086e3d83 +0x3ce3:  sub    $0x68,%esp
086e3d86 +0x3ce6:  mov    %ebx,-0xc(%ebp)
086e3d89 +0x3ce9:  mov    0x8(%ebp),%ebx
086e3d8c +0x3cec:  lea    -0x19(%ebp),%eax
086e3d8f +0x3cef:  mov    %esi,-0x8(%ebp)
086e3d92 +0x3cf2:  mov    %edi,-0x4(%ebp)
086e3d95 +0x3cf5:  movl   $0x0,0x8(%esp)
086e3d9d +0x3cfd:  mov    %ebx,0x4(%esp)
086e3da1 +0x3d01:  mov    %eax,(%esp)
086e3da4 +0x3d04:  call   086e2f70 <+0x2ed0>
086e3da9 +0x3d09:  cmpb   $0x0,-0x19(%ebp)
086e3dad +0x3d0d:  je     086e3e1b <+0x3d7b>
086e3daf +0x3d0f:  mov    (%ebx),%eax
086e3db1 +0x3d11:  movl   $0x0,-0x20(%ebp)
086e3db8 +0x3d18:  mov    -0xc(%eax),%edx
086e3dbb +0x3d1b:  add    %ebx,%edx
086e3dbd +0x3d1d:  mov    0x88(%edx),%eax
086e3dc3 +0x3d23:  test   %eax,%eax
086e3dc5 +0x3d25:  je     086e3e56 <+0x3db6>
086e3dcb +0x3d2b:  mov    (%eax),%edi
086e3dcd +0x3d2d:  lea    -0x30(%ebp),%ecx
086e3dd0 +0x3d30:  mov    0x7c(%edx),%esi
086e3dd3 +0x3d33:  mov    %eax,0x4(%esp)
086e3dd7 +0x3d37:  mov    %edx,0x18(%esp)
086e3ddb +0x3d3b:  mov    %edi,-0x34(%ebp)
086e3dde +0x3d3e:  mov    0xc(%ebp),%edi
086e3de1 +0x3d41:  mov    -0x34(%ebp),%eax
086e3de4 +0x3d44:  movl   $0x0,0x10(%esp)
086e3dec +0x3d4c:  movl   $0xffffffff,0x14(%esp)
086e3df4 +0x3d54:  mov    %edi,0x20(%esp)
086e3df8 +0x3d58:  lea    -0x20(%ebp),%edi
086e3dfb +0x3d5b:  mov    %edi,0x1c(%esp)
086e3dff +0x3d5f:  mov    %esi,0x8(%esp)
086e3e03 +0x3d63:  movl   $0xffffffff,0xc(%esp)
086e3e0b +0x3d6b:  mov    %ecx,(%esp)
086e3e0e +0x3d6e:  call   *0x14(%eax)
086e3e11 +0x3d71:  sub    $0x4,%esp
086e3e14 +0x3d74:  mov    -0x20(%ebp),%eax
086e3e17 +0x3d77:  test   %eax,%eax
086e3e19 +0x3d79:  jne    086e3e30 <+0x3d90>
086e3e1b +0x3d7b:  mov    %ebx,%eax
086e3e1d +0x3d7d:  mov    -0x8(%ebp),%esi
086e3e20 +0x3d80:  mov    -0xc(%ebp),%ebx
086e3e23 +0x3d83:  mov    -0x4(%ebp),%edi
086e3e26 +0x3d86:  mov    %ebp,%esp
086e3e28 +0x3d88:  pop    %ebp
086e3e29 +0x3d89:  ret
086e3e2a +0x3d8a:  lea    0x0(%esi),%esi
086e3e30 +0x3d90:  mov    (%ebx),%edx
086e3e32 +0x3d92:  mov    -0xc(%edx),%edx
086e3e35 +0x3d95:  lea    (%ebx,%edx,1),%edx
086e3e38 +0x3d98:  or     0x14(%edx),%eax
086e3e3b +0x3d9b:  mov    %edx,(%esp)
086e3e3e +0x3d9e:  mov    %eax,0x4(%esp)
086e3e42 +0x3da2:  call   086e0cf0 <+0xc50>
086e3e47 +0x3da7:  mov    %ebx,%eax
086e3e49 +0x3da9:  mov    -0x8(%ebp),%esi
086e3e4c +0x3dac:  mov    -0xc(%ebp),%ebx
086e3e4f +0x3daf:  mov    -0x4(%ebp),%edi
086e3e52 +0x3db2:  mov    %ebp,%esp
086e3e54 +0x3db4:  pop    %ebp
086e3e55 +0x3db5:  ret
086e3e56 +0x3db6:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e3e5b +0x3dbb:  cmp    $0x2,%edx
086e3e5e +0x3dbe:  je     086e3e87 <+0x3de7>
086e3e60 +0x3dc0:  mov    %eax,(%esp)
086e3e63 +0x3dc3:  call   08725ce0 <__cxa_begin_catch>
086e3e68 +0x3dc8:  movl   $0x1,0x4(%esp)
086e3e70 +0x3dd0:  mov    (%ebx),%eax
086e3e72 +0x3dd2:  mov    -0xc(%eax),%eax
086e3e75 +0x3dd5:  lea    (%ebx,%eax,1),%eax
086e3e78 +0x3dd8:  mov    %eax,(%esp)
086e3e7b +0x3ddb:  call   086e0cb0 <+0xc10>
086e3e80 +0x3de0:  call   08725c30 <__cxa_end_catch>
086e3e85 +0x3de5:  jmp    086e3e14 <+0x3d74>
086e3e87 +0x3de7:  mov    %eax,(%esp)
086e3e8a +0x3dea:  call   08725ce0 <__cxa_begin_catch>
086e3e8f +0x3def:  movl   $0x1,0x4(%esp)
086e3e97 +0x3df7:  mov    (%ebx),%eax
086e3e99 +0x3df9:  add    -0xc(%eax),%ebx
086e3e9c +0x3dfc:  mov    %ebx,(%esp)
086e3e9f +0x3dff:  call   086e0cb0 <+0xc10>
086e3ea4 +0x3e04:  call   08724be0 <__cxa_rethrow>
086e3ea9 +0x3e09:  mov    %eax,%esi
086e3eab +0x3e0b:  call   08725c30 <__cxa_end_catch>
086e3eb0 +0x3e10:  mov    %esi,(%esp)
086e3eb3 +0x3e13:  call   08ae3750 <_Unwind_Resume>
086e3eb8 +0x3e18:  jmp    086e3ea9 <+0x3e09>
086e3eba +0x3e1a:  nop
086e3ebb +0x3e1b:  nop
086e3ebc +0x3e1c:  nop
086e3ebd +0x3e1d:  nop
086e3ebe +0x3e1e:  nop
086e3ebf +0x3e1f:  nop
086e3ec0 +0x3e20:  push   %ebp
086e3ec1 +0x3e21:  mov    %esp,%ebp
086e3ec3 +0x3e23:  sub    $0x8,%esp
086e3ec6 +0x3e26:  leave
086e3ec7 +0x3e27:  jmp    086e3d80 <+0x3ce0>
086e3ecc +0x3e2c:  nop
086e3ecd +0x3e2d:  nop
086e3ece +0x3e2e:  nop
086e3ecf +0x3e2f:  nop
086e3ed0 +0x3e30:  push   %ebp
086e3ed1 +0x3e31:  mov    %esp,%ebp
086e3ed3 +0x3e33:  sub    $0x68,%esp
086e3ed6 +0x3e36:  mov    %ebx,-0xc(%ebp)
086e3ed9 +0x3e39:  mov    0x8(%ebp),%ebx
086e3edc +0x3e3c:  lea    -0x19(%ebp),%eax
086e3edf +0x3e3f:  mov    %esi,-0x8(%ebp)
086e3ee2 +0x3e42:  mov    %edi,-0x4(%ebp)
086e3ee5 +0x3e45:  movl   $0x0,0x8(%esp)
086e3eed +0x3e4d:  mov    %ebx,0x4(%esp)
086e3ef1 +0x3e51:  mov    %eax,(%esp)
086e3ef4 +0x3e54:  call   086e2f70 <+0x2ed0>
086e3ef9 +0x3e59:  cmpb   $0x0,-0x19(%ebp)
086e3efd +0x3e5d:  je     086e3f6b <+0x3ecb>
086e3eff +0x3e5f:  mov    (%ebx),%eax
086e3f01 +0x3e61:  movl   $0x0,-0x20(%ebp)
086e3f08 +0x3e68:  mov    -0xc(%eax),%edx
086e3f0b +0x3e6b:  add    %ebx,%edx
086e3f0d +0x3e6d:  mov    0x88(%edx),%eax
086e3f13 +0x3e73:  test   %eax,%eax
086e3f15 +0x3e75:  je     086e3fa6 <+0x3f06>
086e3f1b +0x3e7b:  mov    (%eax),%edi
086e3f1d +0x3e7d:  lea    -0x30(%ebp),%ecx
086e3f20 +0x3e80:  mov    0x7c(%edx),%esi
086e3f23 +0x3e83:  mov    %eax,0x4(%esp)
086e3f27 +0x3e87:  mov    %edx,0x18(%esp)
086e3f2b +0x3e8b:  mov    %edi,-0x34(%ebp)
086e3f2e +0x3e8e:  mov    0xc(%ebp),%edi
086e3f31 +0x3e91:  mov    -0x34(%ebp),%eax
086e3f34 +0x3e94:  movl   $0x0,0x10(%esp)
086e3f3c +0x3e9c:  movl   $0xffffffff,0x14(%esp)
086e3f44 +0x3ea4:  mov    %edi,0x20(%esp)
086e3f48 +0x3ea8:  lea    -0x20(%ebp),%edi
086e3f4b +0x3eab:  mov    %edi,0x1c(%esp)
086e3f4f +0x3eaf:  mov    %esi,0x8(%esp)
086e3f53 +0x3eb3:  movl   $0xffffffff,0xc(%esp)
086e3f5b +0x3ebb:  mov    %ecx,(%esp)
086e3f5e +0x3ebe:  call   *0x10(%eax)
086e3f61 +0x3ec1:  sub    $0x4,%esp
086e3f64 +0x3ec4:  mov    -0x20(%ebp),%eax
086e3f67 +0x3ec7:  test   %eax,%eax
086e3f69 +0x3ec9:  jne    086e3f80 <+0x3ee0>
086e3f6b +0x3ecb:  mov    %ebx,%eax
086e3f6d +0x3ecd:  mov    -0x8(%ebp),%esi
086e3f70 +0x3ed0:  mov    -0xc(%ebp),%ebx
086e3f73 +0x3ed3:  mov    -0x4(%ebp),%edi
086e3f76 +0x3ed6:  mov    %ebp,%esp
086e3f78 +0x3ed8:  pop    %ebp
086e3f79 +0x3ed9:  ret
086e3f7a +0x3eda:  lea    0x0(%esi),%esi
086e3f80 +0x3ee0:  mov    (%ebx),%edx
086e3f82 +0x3ee2:  mov    -0xc(%edx),%edx
086e3f85 +0x3ee5:  lea    (%ebx,%edx,1),%edx
086e3f88 +0x3ee8:  or     0x14(%edx),%eax
086e3f8b +0x3eeb:  mov    %edx,(%esp)
086e3f8e +0x3eee:  mov    %eax,0x4(%esp)
086e3f92 +0x3ef2:  call   086e0cf0 <+0xc50>
086e3f97 +0x3ef7:  mov    %ebx,%eax
086e3f99 +0x3ef9:  mov    -0x8(%ebp),%esi
086e3f9c +0x3efc:  mov    -0xc(%ebp),%ebx
086e3f9f +0x3eff:  mov    -0x4(%ebp),%edi
086e3fa2 +0x3f02:  mov    %ebp,%esp
086e3fa4 +0x3f04:  pop    %ebp
086e3fa5 +0x3f05:  ret
086e3fa6 +0x3f06:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e3fab +0x3f0b:  cmp    $0x2,%edx
086e3fae +0x3f0e:  je     086e3fd7 <+0x3f37>
086e3fb0 +0x3f10:  mov    %eax,(%esp)
086e3fb3 +0x3f13:  call   08725ce0 <__cxa_begin_catch>
086e3fb8 +0x3f18:  movl   $0x1,0x4(%esp)
086e3fc0 +0x3f20:  mov    (%ebx),%eax
086e3fc2 +0x3f22:  mov    -0xc(%eax),%eax
086e3fc5 +0x3f25:  lea    (%ebx,%eax,1),%eax
086e3fc8 +0x3f28:  mov    %eax,(%esp)
086e3fcb +0x3f2b:  call   086e0cb0 <+0xc10>
086e3fd0 +0x3f30:  call   08725c30 <__cxa_end_catch>
086e3fd5 +0x3f35:  jmp    086e3f64 <+0x3ec4>
086e3fd7 +0x3f37:  mov    %eax,(%esp)
086e3fda +0x3f3a:  call   08725ce0 <__cxa_begin_catch>
086e3fdf +0x3f3f:  movl   $0x1,0x4(%esp)
086e3fe7 +0x3f47:  mov    (%ebx),%eax
086e3fe9 +0x3f49:  add    -0xc(%eax),%ebx
086e3fec +0x3f4c:  mov    %ebx,(%esp)
086e3fef +0x3f4f:  call   086e0cb0 <+0xc10>
086e3ff4 +0x3f54:  call   08724be0 <__cxa_rethrow>
086e3ff9 +0x3f59:  mov    %eax,%esi
086e3ffb +0x3f5b:  call   08725c30 <__cxa_end_catch>
086e4000 +0x3f60:  mov    %esi,(%esp)
086e4003 +0x3f63:  call   08ae3750 <_Unwind_Resume>
086e4008 +0x3f68:  jmp    086e3ff9 <+0x3f59>
086e400a +0x3f6a:  nop
086e400b +0x3f6b:  nop
086e400c +0x3f6c:  nop
086e400d +0x3f6d:  nop
086e400e +0x3f6e:  nop
086e400f +0x3f6f:  nop
086e4010 +0x3f70:  push   %ebp
086e4011 +0x3f71:  mov    %esp,%ebp
086e4013 +0x3f73:  sub    $0x8,%esp
086e4016 +0x3f76:  leave
086e4017 +0x3f77:  jmp    086e3ed0 <+0x3e30>
086e401c +0x3f7c:  nop
086e401d +0x3f7d:  nop
086e401e +0x3f7e:  nop
086e401f +0x3f7f:  nop
086e4020 +0x3f80:  push   %ebp
086e4021 +0x3f81:  mov    %esp,%ebp
086e4023 +0x3f83:  push   %ebx
086e4024 +0x3f84:  sub    $0x34,%esp
086e4027 +0x3f87:  mov    0x8(%ebp),%ebx
086e402a +0x3f8a:  lea    -0x9(%ebp),%eax
086e402d +0x3f8d:  mov    %eax,(%esp)
086e4030 +0x3f90:  movl   $0x1,0x8(%esp)
086e4038 +0x3f98:  mov    %ebx,0x4(%esp)
086e403c +0x3f9c:  call   086e2f70 <+0x2ed0>
086e4041 +0x3fa1:  mov    $0xffffffff,%eax
086e4046 +0x3fa6:  cmpb   $0x0,-0x9(%ebp)
086e404a +0x3faa:  je     086e406f <+0x3fcf>
086e404c +0x3fac:  mov    (%ebx),%eax
086e404e +0x3fae:  mov    -0xc(%eax),%eax
086e4051 +0x3fb1:  mov    0x7c(%ebx,%eax,1),%edx
086e4055 +0x3fb5:  mov    $0xffffffff,%eax
086e405a +0x3fba:  test   %edx,%edx
086e405c +0x3fbc:  je     086e406f <+0x3fcf>
086e405e +0x3fbe:  mov    (%edx),%eax
086e4060 +0x3fc0:  mov    %edx,(%esp)
086e4063 +0x3fc3:  call   *0x18(%eax)
086e4066 +0x3fc6:  mov    %eax,%edx
086e4068 +0x3fc8:  xor    %eax,%eax
086e406a +0x3fca:  cmp    $0xffffffff,%edx
086e406d +0x3fcd:  je     086e4078 <+0x3fd8>
086e406f +0x3fcf:  add    $0x34,%esp
086e4072 +0x3fd2:  pop    %ebx
086e4073 +0x3fd3:  pop    %ebp
086e4074 +0x3fd4:  ret
086e4075 +0x3fd5:  lea    0x0(%esi),%esi
086e4078 +0x3fd8:  mov    (%ebx),%eax
086e407a +0x3fda:  add    -0xc(%eax),%ebx
086e407d +0x3fdd:  mov    0x14(%ebx),%eax
086e4080 +0x3fe0:  mov    %ebx,(%esp)
086e4083 +0x3fe3:  or     $0x1,%eax
086e4086 +0x3fe6:  mov    %eax,0x4(%esp)
086e408a +0x3fea:  call   086e0cf0 <+0xc50>
086e408f +0x3fef:  add    $0x34,%esp
086e4092 +0x3ff2:  mov    $0xffffffff,%eax
086e4097 +0x3ff7:  pop    %ebx
086e4098 +0x3ff8:  pop    %ebp
086e4099 +0x3ff9:  ret
086e409a +0x3ffa:  cmp    $0x2,%edx
086e409d +0x3ffd:  je     086e40c6 <+0x4026>
086e409f +0x3fff:  mov    %eax,(%esp)
086e40a2 +0x4002:  call   08725ce0 <__cxa_begin_catch>
086e40a7 +0x4007:  movl   $0x1,0x4(%esp)
086e40af +0x400f:  mov    (%ebx),%eax
086e40b1 +0x4011:  add    -0xc(%eax),%ebx
086e40b4 +0x4014:  mov    %ebx,(%esp)
086e40b7 +0x4017:  call   086e0cb0 <+0xc10>
086e40bc +0x401c:  call   08725c30 <__cxa_end_catch>
086e40c1 +0x4021:  or     $0xffffffff,%eax
086e40c4 +0x4024:  jmp    086e406f <+0x3fcf>
086e40c6 +0x4026:  mov    %eax,(%esp)
086e40c9 +0x4029:  call   08725ce0 <__cxa_begin_catch>
086e40ce +0x402e:  movl   $0x1,0x4(%esp)
086e40d6 +0x4036:  mov    (%ebx),%eax
086e40d8 +0x4038:  add    -0xc(%eax),%ebx
086e40db +0x403b:  mov    %ebx,(%esp)
086e40de +0x403e:  call   086e0cb0 <+0xc10>
086e40e3 +0x4043:  call   08724be0 <__cxa_rethrow>
086e40e8 +0x4048:  mov    %eax,-0x1c(%ebp)
086e40eb +0x404b:  call   08725c30 <__cxa_end_catch>
086e40f0 +0x4050:  mov    -0x1c(%ebp),%eax
086e40f3 +0x4053:  mov    %eax,(%esp)
086e40f6 +0x4056:  call   08ae3750 <_Unwind_Resume>
086e40fb +0x405b:  jmp    086e40e8 <+0x4048>
086e40fd +0x405d:  nop
086e40fe +0x405e:  nop
086e40ff +0x405f:  nop
086e4100 +0x4060:  push   %ebp
086e4101 +0x4061:  mov    %esp,%ebp
086e4103 +0x4063:  push   %ebx
086e4104 +0x4064:  sub    $0x34,%esp
086e4107 +0x4067:  mov    0x8(%ebp),%ebx
086e410a +0x406a:  lea    -0x9(%ebp),%eax
086e410d +0x406d:  movl   $0x0,0x4(%ebx)
086e4114 +0x4074:  movl   $0x1,0x8(%esp)
086e411c +0x407c:  mov    %ebx,0x4(%esp)
086e4120 +0x4080:  mov    %eax,(%esp)
086e4123 +0x4083:  call   086e2f70 <+0x2ed0>
086e4128 +0x4088:  cmpb   $0x0,-0x9(%ebp)
086e412c +0x408c:  je     086e4152 <+0x40b2>
086e412e +0x408e:  mov    (%ebx),%eax
086e4130 +0x4090:  mov    -0xc(%eax),%edx
086e4133 +0x4093:  add    %ebx,%edx
086e4135 +0x4095:  mov    0x7c(%edx),%eax
086e4138 +0x4098:  test   %eax,%eax
086e413a +0x409a:  je     086e4167 <+0x40c7>
086e413c +0x409c:  mov    0x8(%eax),%edx
086e413f +0x409f:  cmp    %edx,0x4(%eax)
086e4142 +0x40a2:  jae    086e4181 <+0x40e1>
086e4144 +0x40a4:  lea    -0x4(%edx),%ecx
086e4147 +0x40a7:  mov    %ecx,0x8(%eax)
086e414a +0x40aa:  mov    -0x4(%edx),%eax
086e414d +0x40ad:  cmp    $0xffffffff,%eax
086e4150 +0x40b0:  je     086e4160 <+0x40c0>
086e4152 +0x40b2:  mov    %ebx,%eax
086e4154 +0x40b4:  add    $0x34,%esp
086e4157 +0x40b7:  pop    %ebx
086e4158 +0x40b8:  pop    %ebp
086e4159 +0x40b9:  ret
086e415a +0x40ba:  lea    0x0(%esi),%esi
086e4160 +0x40c0:  mov    (%ebx),%eax
086e4162 +0x40c2:  mov    -0xc(%eax),%edx
086e4165 +0x40c5:  add    %ebx,%edx
086e4167 +0x40c7:  mov    0x14(%edx),%eax
086e416a +0x40ca:  mov    %edx,(%esp)
086e416d +0x40cd:  or     $0x1,%eax
086e4170 +0x40d0:  mov    %eax,0x4(%esp)
086e4174 +0x40d4:  call   086e0cf0 <+0xc50>
086e4179 +0x40d9:  mov    %ebx,%eax
086e417b +0x40db:  add    $0x34,%esp
086e417e +0x40de:  pop    %ebx
086e417f +0x40df:  pop    %ebp
086e4180 +0x40e0:  ret
086e4181 +0x40e1:  mov    (%eax),%edx
086e4183 +0x40e3:  movl   $0xffffffff,0x4(%esp)
086e418b +0x40eb:  mov    %eax,(%esp)
086e418e +0x40ee:  call   *0x2c(%edx)
086e4191 +0x40f1:  jmp    086e414d <+0x40ad>
086e4193 +0x40f3:  cmp    $0x2,%edx
086e4196 +0x40f6:  je     086e41c4 <+0x4124>
086e4198 +0x40f8:  mov    %eax,(%esp)
086e419b +0x40fb:  nop
086e419c +0x40fc:  lea    0x0(%esi,%eiz,1),%esi
086e41a0 +0x4100:  call   08725ce0 <__cxa_begin_catch>
086e41a5 +0x4105:  movl   $0x1,0x4(%esp)
086e41ad +0x410d:  mov    (%ebx),%eax
086e41af +0x410f:  mov    -0xc(%eax),%eax
086e41b2 +0x4112:  lea    (%ebx,%eax,1),%eax
086e41b5 +0x4115:  mov    %eax,(%esp)
086e41b8 +0x4118:  call   086e0cb0 <+0xc10>
086e41bd +0x411d:  call   08725c30 <__cxa_end_catch>
086e41c2 +0x4122:  jmp    086e4152 <+0x40b2>
086e41c4 +0x4124:  mov    %eax,(%esp)
086e41c7 +0x4127:  call   08725ce0 <__cxa_begin_catch>
086e41cc +0x412c:  movl   $0x1,0x4(%esp)
086e41d4 +0x4134:  mov    (%ebx),%eax
086e41d6 +0x4136:  add    -0xc(%eax),%ebx
086e41d9 +0x4139:  mov    %ebx,(%esp)
086e41dc +0x413c:  call   086e0cb0 <+0xc10>
086e41e1 +0x4141:  call   08724be0 <__cxa_rethrow>
086e41e6 +0x4146:  mov    %eax,-0x1c(%ebp)
086e41e9 +0x4149:  call   08725c30 <__cxa_end_catch>
086e41ee +0x414e:  mov    -0x1c(%ebp),%eax
086e41f1 +0x4151:  mov    %eax,(%esp)
086e41f4 +0x4154:  call   08ae3750 <_Unwind_Resume>
086e41f9 +0x4159:  jmp    086e41e6 <+0x4146>
086e41fb +0x415b:  nop
086e41fc +0x415c:  nop
086e41fd +0x415d:  nop
086e41fe +0x415e:  nop
086e41ff +0x415f:  nop
086e4200 +0x4160:  push   %ebp
086e4201 +0x4161:  mov    %esp,%ebp
086e4203 +0x4163:  sub    $0x38,%esp
086e4206 +0x4166:  mov    %ebx,-0x8(%ebp)
086e4209 +0x4169:  mov    0x8(%ebp),%ebx
086e420c +0x416c:  lea    -0x9(%ebp),%edx
086e420f +0x416f:  mov    %esi,-0x4(%ebp)
086e4212 +0x4172:  mov    0xc(%ebp),%esi
086e4215 +0x4175:  movl   $0x0,0x4(%ebx)
086e421c +0x417c:  movl   $0x1,0x8(%esp)
086e4224 +0x4184:  mov    %ebx,0x4(%esp)
086e4228 +0x4188:  mov    %edx,(%esp)
086e422b +0x418b:  call   086e2f70 <+0x2ed0>
086e4230 +0x4190:  cmpb   $0x0,-0x9(%ebp)
086e4234 +0x4194:  je     086e4262 <+0x41c2>
086e4236 +0x4196:  mov    (%ebx),%eax
086e4238 +0x4198:  mov    -0xc(%eax),%ecx
086e423b +0x419b:  add    %ebx,%ecx
086e423d +0x419d:  mov    0x7c(%ecx),%edx
086e4240 +0x41a0:  test   %edx,%edx
086e4242 +0x41a2:  je     086e4277 <+0x41d7>
086e4244 +0x41a4:  mov    0x8(%edx),%eax
086e4247 +0x41a7:  cmp    %eax,0x4(%edx)
086e424a +0x41aa:  jae    086e4251 <+0x41b1>
086e424c +0x41ac:  cmp    -0x4(%eax),%esi
086e424f +0x41af:  je     086e4298 <+0x41f8>
086e4251 +0x41b1:  mov    (%edx),%eax
086e4253 +0x41b3:  mov    %esi,0x4(%esp)
086e4257 +0x41b7:  mov    %edx,(%esp)
086e425a +0x41ba:  call   *0x2c(%eax)
086e425d +0x41bd:  cmp    $0xffffffff,%eax
086e4260 +0x41c0:  je     086e4270 <+0x41d0>
086e4262 +0x41c2:  mov    %ebx,%eax
086e4264 +0x41c4:  mov    -0x4(%ebp),%esi
086e4267 +0x41c7:  mov    -0x8(%ebp),%ebx
086e426a +0x41ca:  mov    %ebp,%esp
086e426c +0x41cc:  pop    %ebp
086e426d +0x41cd:  ret
086e426e +0x41ce:  xchg   %ax,%ax
086e4270 +0x41d0:  mov    (%ebx),%eax
086e4272 +0x41d2:  mov    -0xc(%eax),%ecx
086e4275 +0x41d5:  add    %ebx,%ecx
086e4277 +0x41d7:  mov    0x14(%ecx),%eax
086e427a +0x41da:  mov    %ecx,(%esp)
086e427d +0x41dd:  or     $0x1,%eax
086e4280 +0x41e0:  mov    %eax,0x4(%esp)
086e4284 +0x41e4:  call   086e0cf0 <+0xc50>
086e4289 +0x41e9:  mov    %ebx,%eax
086e428b +0x41eb:  mov    -0x4(%ebp),%esi
086e428e +0x41ee:  mov    -0x8(%ebp),%ebx
086e4291 +0x41f1:  mov    %ebp,%esp
086e4293 +0x41f3:  pop    %ebp
086e4294 +0x41f4:  ret
086e4295 +0x41f5:  lea    0x0(%esi),%esi
086e4298 +0x41f8:  sub    $0x4,%eax
086e429b +0x41fb:  mov    %eax,0x8(%edx)
086e429e +0x41fe:  mov    %esi,%eax
086e42a0 +0x4200:  jmp    086e425d <+0x41bd>
086e42a2 +0x4202:  cmp    $0x2,%edx
086e42a5 +0x4205:  je     086e42ce <+0x422e>
086e42a7 +0x4207:  mov    %eax,(%esp)
086e42aa +0x420a:  call   08725ce0 <__cxa_begin_catch>
086e42af +0x420f:  movl   $0x1,0x4(%esp)
086e42b7 +0x4217:  mov    (%ebx),%eax
086e42b9 +0x4219:  mov    -0xc(%eax),%eax
086e42bc +0x421c:  lea    (%ebx,%eax,1),%eax
086e42bf +0x421f:  mov    %eax,(%esp)
086e42c2 +0x4222:  call   086e0cb0 <+0xc10>
086e42c7 +0x4227:  call   08725c30 <__cxa_end_catch>
086e42cc +0x422c:  jmp    086e4262 <+0x41c2>
086e42ce +0x422e:  mov    %eax,(%esp)
086e42d1 +0x4231:  call   08725ce0 <__cxa_begin_catch>
086e42d6 +0x4236:  movl   $0x1,0x4(%esp)
086e42de +0x423e:  mov    (%ebx),%eax
086e42e0 +0x4240:  add    -0xc(%eax),%ebx
086e42e3 +0x4243:  mov    %ebx,(%esp)
086e42e6 +0x4246:  call   086e0cb0 <+0xc10>
086e42eb +0x424b:  call   08724be0 <__cxa_rethrow>
086e42f0 +0x4250:  mov    %eax,-0x1c(%ebp)
086e42f3 +0x4253:  call   08725c30 <__cxa_end_catch>
086e42f8 +0x4258:  mov    -0x1c(%ebp),%eax
086e42fb +0x425b:  mov    %eax,(%esp)
086e42fe +0x425e:  call   08ae3750 <_Unwind_Resume>
086e4303 +0x4263:  jmp    086e42f0 <+0x4250>
086e4305 +0x4265:  nop
086e4306 +0x4266:  nop
086e4307 +0x4267:  nop
086e4308 +0x4268:  nop
086e4309 +0x4269:  nop
086e430a +0x426a:  nop
086e430b +0x426b:  nop
086e430c +0x426c:  nop
086e430d +0x426d:  nop
086e430e +0x426e:  nop
086e430f +0x426f:  nop
086e4310 +0x4270:  push   %ebp
086e4311 +0x4271:  mov    %esp,%ebp
086e4313 +0x4273:  push   %esi
086e4314 +0x4274:  push   %ebx
086e4315 +0x4275:  sub    $0x30,%esp
086e4318 +0x4278:  mov    0x8(%ebp),%ebx
086e431b +0x427b:  lea    -0x9(%ebp),%eax
086e431e +0x427e:  movl   $0x0,0x4(%ebx)
086e4325 +0x4285:  movl   $0x1,0x8(%esp)
086e432d +0x428d:  mov    %ebx,0x4(%esp)
086e4331 +0x4291:  mov    %eax,(%esp)
086e4334 +0x4294:  call   086e2f70 <+0x2ed0>
086e4339 +0x4299:  cmpb   $0x0,-0x9(%ebp)
086e433d +0x429d:  jne    086e4350 <+0x42b0>
086e433f +0x429f:  mov    0x4(%ebx),%eax
086e4342 +0x42a2:  add    $0x30,%esp
086e4345 +0x42a5:  pop    %ebx
086e4346 +0x42a6:  pop    %esi
086e4347 +0x42a7:  pop    %ebp
086e4348 +0x42a8:  ret
086e4349 +0x42a9:  lea    0x0(%esi,%eiz,1),%esi
086e4350 +0x42b0:  mov    (%ebx),%eax
086e4352 +0x42b2:  mov    -0xc(%eax),%eax
086e4355 +0x42b5:  mov    0x7c(%ebx,%eax,1),%edx
086e4359 +0x42b9:  mov    0xc(%edx),%eax
086e435c +0x42bc:  sub    0x8(%edx),%eax
086e435f +0x42bf:  sar    $0x2,%eax
086e4362 +0x42c2:  test   %eax,%eax
086e4364 +0x42c4:  je     086e43a0 <+0x4300>
086e4366 +0x42c6:  test   %eax,%eax
086e4368 +0x42c8:  jle    086e43ac <+0x430c>
086e436a +0x42ca:  mov    (%ebx),%edx
086e436c +0x42cc:  mov    -0xc(%edx),%edx
086e436f +0x42cf:  mov    0x7c(%ebx,%edx,1),%ecx
086e4373 +0x42d3:  mov    0x10(%ebp),%edx
086e4376 +0x42d6:  mov    (%ecx),%esi
086e4378 +0x42d8:  cmp    %eax,%edx
086e437a +0x42da:  jg     086e4398 <+0x42f8>
086e437c +0x42dc:  mov    0xc(%ebp),%eax
086e437f +0x42df:  mov    %edx,0x8(%esp)
086e4383 +0x42e3:  mov    %ecx,(%esp)
086e4386 +0x42e6:  mov    %eax,0x4(%esp)
086e438a +0x42ea:  call   *0x20(%esi)
086e438d +0x42ed:  mov    %eax,0x4(%ebx)
086e4390 +0x42f0:  add    $0x30,%esp
086e4393 +0x42f3:  pop    %ebx
086e4394 +0x42f4:  pop    %esi
086e4395 +0x42f5:  pop    %ebp
086e4396 +0x42f6:  ret
086e4397 +0x42f7:  nop
086e4398 +0x42f8:  mov    %eax,%edx
086e439a +0x42fa:  jmp    086e437c <+0x42dc>
086e439c +0x42fc:  lea    0x0(%esi,%eiz,1),%esi
086e43a0 +0x4300:  mov    (%edx),%eax
086e43a2 +0x4302:  mov    %edx,(%esp)
086e43a5 +0x4305:  call   *0x1c(%eax)
086e43a8 +0x4308:  test   %eax,%eax
086e43aa +0x430a:  jg     086e436a <+0x42ca>
086e43ac +0x430c:  cmp    $0xffffffff,%eax
086e43af +0x430f:  jne    086e433f <+0x429f>
086e43b1 +0x4311:  mov    (%ebx),%eax
086e43b3 +0x4313:  mov    -0xc(%eax),%edx
086e43b6 +0x4316:  add    %ebx,%edx
086e43b8 +0x4318:  mov    0x14(%edx),%eax
086e43bb +0x431b:  mov    %edx,(%esp)
086e43be +0x431e:  or     $0x2,%eax
086e43c1 +0x4321:  mov    %eax,0x4(%esp)
086e43c5 +0x4325:  call   086e0cf0 <+0xc50>
086e43ca +0x432a:  mov    0x4(%ebx),%eax
086e43cd +0x432d:  jmp    086e4342 <+0x42a2>
086e43d2 +0x4332:  cmp    $0x2,%edx
086e43d5 +0x4335:  je     086e4401 <+0x4361>
086e43d7 +0x4337:  mov    %eax,(%esp)
086e43da +0x433a:  call   08725ce0 <__cxa_begin_catch>
086e43df +0x433f:  movl   $0x1,0x4(%esp)
086e43e7 +0x4347:  mov    (%ebx),%eax
086e43e9 +0x4349:  mov    -0xc(%eax),%eax
086e43ec +0x434c:  lea    (%ebx,%eax,1),%eax
086e43ef +0x434f:  mov    %eax,(%esp)
086e43f2 +0x4352:  call   086e0cb0 <+0xc10>
086e43f7 +0x4357:  call   08725c30 <__cxa_end_catch>
086e43fc +0x435c:  jmp    086e433f <+0x429f>
086e4401 +0x4361:  mov    %eax,(%esp)
086e4404 +0x4364:  call   08725ce0 <__cxa_begin_catch>
086e4409 +0x4369:  movl   $0x1,0x4(%esp)
086e4411 +0x4371:  mov    (%ebx),%eax
086e4413 +0x4373:  add    -0xc(%eax),%ebx
086e4416 +0x4376:  mov    %ebx,(%esp)
086e4419 +0x4379:  call   086e0cb0 <+0xc10>
086e441e +0x437e:  call   08724be0 <__cxa_rethrow>
086e4423 +0x4383:  mov    %eax,-0x1c(%ebp)
086e4426 +0x4386:  call   08725c30 <__cxa_end_catch>
086e442b +0x438b:  mov    -0x1c(%ebp),%eax
086e442e +0x438e:  mov    %eax,(%esp)
086e4431 +0x4391:  call   08ae3750 <_Unwind_Resume>
086e4436 +0x4396:  jmp    086e4423 <+0x4383>
086e4438 +0x4398:  nop
086e4439 +0x4399:  nop
086e443a +0x439a:  nop
086e443b +0x439b:  nop
086e443c +0x439c:  nop
086e443d +0x439d:  nop
086e443e +0x439e:  nop
086e443f +0x439f:  nop
086e4440 +0x43a0:  push   %ebp
086e4441 +0x43a1:  mov    %esp,%ebp
086e4443 +0x43a3:  sub    $0x28,%esp
086e4446 +0x43a6:  mov    %ebx,-0x8(%ebp)
086e4449 +0x43a9:  mov    0x8(%ebp),%ebx
086e444c +0x43ac:  lea    -0x9(%ebp),%eax
086e444f +0x43af:  mov    %esi,-0x4(%ebp)
086e4452 +0x43b2:  mov    0x10(%ebp),%esi
086e4455 +0x43b5:  movl   $0x0,0x4(%ebx)
086e445c +0x43bc:  movl   $0x1,0x8(%esp)
086e4464 +0x43c4:  mov    %ebx,0x4(%esp)
086e4468 +0x43c8:  mov    %eax,(%esp)
086e446b +0x43cb:  call   086e2f70 <+0x2ed0>
086e4470 +0x43d0:  cmpb   $0x0,-0x9(%ebp)
086e4474 +0x43d4:  jne    086e4488 <+0x43e8>
086e4476 +0x43d6:  mov    %ebx,%eax
086e4478 +0x43d8:  mov    -0x4(%ebp),%esi
086e447b +0x43db:  mov    -0x8(%ebp),%ebx
086e447e +0x43de:  mov    %ebp,%esp
086e4480 +0x43e0:  pop    %ebp
086e4481 +0x43e1:  ret
086e4482 +0x43e2:  lea    0x0(%esi),%esi
086e4488 +0x43e8:  mov    (%ebx),%eax
086e448a +0x43ea:  mov    0xc(%ebp),%ecx
086e448d +0x43ed:  mov    -0xc(%eax),%eax
086e4490 +0x43f0:  mov    0x7c(%ebx,%eax,1),%eax
086e4494 +0x43f4:  mov    (%eax),%edx
086e4496 +0x43f6:  mov    %esi,0x8(%esp)
086e449a +0x43fa:  mov    %ecx,0x4(%esp)
086e449e +0x43fe:  mov    %eax,(%esp)
086e44a1 +0x4401:  call   *0x20(%edx)
086e44a4 +0x4404:  cmp    %eax,%esi
086e44a6 +0x4406:  mov    %eax,0x4(%ebx)
086e44a9 +0x4409:  je     086e4476 <+0x43d6>
086e44ab +0x440b:  mov    (%ebx),%eax
086e44ad +0x440d:  mov    -0xc(%eax),%edx
086e44b0 +0x4410:  add    %ebx,%edx
086e44b2 +0x4412:  mov    0x14(%edx),%eax
086e44b5 +0x4415:  mov    %edx,(%esp)
086e44b8 +0x4418:  or     $0x6,%eax
086e44bb +0x441b:  mov    %eax,0x4(%esp)
086e44bf +0x441f:  call   086e0cf0 <+0xc50>
086e44c4 +0x4424:  mov    %ebx,%eax
086e44c6 +0x4426:  mov    -0x4(%ebp),%esi
086e44c9 +0x4429:  mov    -0x8(%ebp),%ebx
086e44cc +0x442c:  mov    %ebp,%esp
086e44ce +0x442e:  pop    %ebp
086e44cf +0x442f:  ret
086e44d0 +0x4430:  cmp    $0x2,%edx
086e44d3 +0x4433:  je     086e44ff <+0x445f>
086e44d5 +0x4435:  mov    %eax,(%esp)
086e44d8 +0x4438:  call   08725ce0 <__cxa_begin_catch>
086e44dd +0x443d:  movl   $0x1,0x4(%esp)
086e44e5 +0x4445:  mov    (%ebx),%eax
086e44e7 +0x4447:  mov    -0xc(%eax),%eax
086e44ea +0x444a:  lea    (%ebx,%eax,1),%eax
086e44ed +0x444d:  mov    %eax,(%esp)
086e44f0 +0x4450:  call   086e0cb0 <+0xc10>
086e44f5 +0x4455:  call   08725c30 <__cxa_end_catch>
086e44fa +0x445a:  jmp    086e4476 <+0x43d6>
086e44ff +0x445f:  mov    %eax,(%esp)
086e4502 +0x4462:  call   08725ce0 <__cxa_begin_catch>
086e4507 +0x4467:  movl   $0x1,0x4(%esp)
086e450f +0x446f:  mov    (%ebx),%eax
086e4511 +0x4471:  add    -0xc(%eax),%ebx
086e4514 +0x4474:  mov    %ebx,(%esp)
086e4517 +0x4477:  call   086e0cb0 <+0xc10>
086e451c +0x447c:  call   08724be0 <__cxa_rethrow>
086e4521 +0x4481:  mov    %eax,%esi
086e4523 +0x4483:  call   08725c30 <__cxa_end_catch>
086e4528 +0x4488:  mov    %esi,(%esp)
086e452b +0x448b:  call   08ae3750 <_Unwind_Resume>
086e4530 +0x4490:  jmp    086e4521 <+0x4481>
086e4532 +0x4492:  nop
086e4533 +0x4493:  nop
086e4534 +0x4494:  nop
086e4535 +0x4495:  nop
086e4536 +0x4496:  nop
086e4537 +0x4497:  nop
086e4538 +0x4498:  nop
086e4539 +0x4499:  nop
086e453a +0x449a:  nop
086e453b +0x449b:  nop
086e453c +0x449c:  nop
086e453d +0x449d:  nop
086e453e +0x449e:  nop
086e453f +0x449f:  nop
086e4540 +0x44a0:  push   %ebp
086e4541 +0x44a1:  mov    %esp,%ebp
086e4543 +0x44a3:  push   %ebx
086e4544 +0x44a4:  sub    $0x34,%esp
086e4547 +0x44a7:  mov    0x8(%ebp),%ebx
086e454a +0x44aa:  lea    -0x9(%ebp),%eax
086e454d +0x44ad:  movl   $0x0,0x4(%ebx)
086e4554 +0x44b4:  movl   $0x1,0x8(%esp)
086e455c +0x44bc:  mov    %ebx,0x4(%esp)
086e4560 +0x44c0:  mov    %eax,(%esp)
086e4563 +0x44c3:  call   086e2f70 <+0x2ed0>
086e4568 +0x44c8:  xor    %edx,%edx
086e456a +0x44ca:  cmpb   $0x0,-0x9(%ebp)
086e456e +0x44ce:  jne    086e45a8 <+0x4508>
086e4570 +0x44d0:  mov    0x4(%ebx),%eax
086e4573 +0x44d3:  test   %eax,%eax
086e4575 +0x44d5:  jne    086e45a0 <+0x4500>
086e4577 +0x44d7:  or     $0x4,%edx
086e457a +0x44da:  mov    (%ebx),%eax
086e457c +0x44dc:  add    -0xc(%eax),%ebx
086e457f +0x44df:  or     0x14(%ebx),%edx
086e4582 +0x44e2:  mov    %ebx,(%esp)
086e4585 +0x44e5:  mov    %edx,0x4(%esp)
086e4589 +0x44e9:  call   086e0cf0 <+0xc50>
086e458e +0x44ee:  add    $0x34,%esp
086e4591 +0x44f1:  mov    $0xffffffff,%eax
086e4596 +0x44f6:  pop    %ebx
086e4597 +0x44f7:  pop    %ebp
086e4598 +0x44f8:  ret
086e4599 +0x44f9:  lea    0x0(%esi,%eiz,1),%esi
086e45a0 +0x4500:  test   %edx,%edx
086e45a2 +0x4502:  je     086e458e <+0x44ee>
086e45a4 +0x4504:  jmp    086e457a <+0x44da>
086e45a6 +0x4506:  xchg   %ax,%ax
086e45a8 +0x4508:  mov    (%ebx),%eax
086e45aa +0x450a:  mov    -0xc(%eax),%eax
086e45ad +0x450d:  mov    0x7c(%ebx,%eax,1),%edx
086e45b1 +0x4511:  mov    0x8(%edx),%ecx
086e45b4 +0x4514:  cmp    0xc(%edx),%ecx
086e45b7 +0x4517:  jae    086e45d8 <+0x4538>
086e45b9 +0x4519:  mov    (%ecx),%eax
086e45bb +0x451b:  add    $0x4,%ecx
086e45be +0x451e:  mov    %ecx,0x8(%edx)
086e45c1 +0x4521:  cmp    $0xffffffff,%eax
086e45c4 +0x4524:  mov    $0x2,%edx
086e45c9 +0x4529:  je     086e4570 <+0x44d0>
086e45cb +0x452b:  movl   $0x1,0x4(%ebx)
086e45d2 +0x4532:  add    $0x34,%esp
086e45d5 +0x4535:  pop    %ebx
086e45d6 +0x4536:  pop    %ebp
086e45d7 +0x4537:  ret
086e45d8 +0x4538:  mov    (%edx),%eax
086e45da +0x453a:  mov    %edx,(%esp)
086e45dd +0x453d:  call   *0x28(%eax)
086e45e0 +0x4540:  jmp    086e45c1 <+0x4521>
086e45e2 +0x4542:  cmp    $0x2,%edx
086e45e5 +0x4545:  je     086e4613 <+0x4573>
086e45e7 +0x4547:  mov    %eax,(%esp)
086e45ea +0x454a:  call   08725ce0 <__cxa_begin_catch>
086e45ef +0x454f:  movl   $0x1,0x4(%esp)
086e45f7 +0x4557:  mov    (%ebx),%eax
086e45f9 +0x4559:  mov    -0xc(%eax),%eax
086e45fc +0x455c:  lea    (%ebx,%eax,1),%eax
086e45ff +0x455f:  mov    %eax,(%esp)
086e4602 +0x4562:  call   086e0cb0 <+0xc10>
086e4607 +0x4567:  call   08725c30 <__cxa_end_catch>
086e460c +0x456c:  xor    %edx,%edx
086e460e +0x456e:  jmp    086e4570 <+0x44d0>
086e4613 +0x4573:  mov    %eax,(%esp)
086e4616 +0x4576:  call   08725ce0 <__cxa_begin_catch>
086e461b +0x457b:  movl   $0x1,0x4(%esp)
086e4623 +0x4583:  mov    (%ebx),%eax
086e4625 +0x4585:  add    -0xc(%eax),%ebx
086e4628 +0x4588:  mov    %ebx,(%esp)
086e462b +0x458b:  call   086e0cb0 <+0xc10>
086e4630 +0x4590:  call   08724be0 <__cxa_rethrow>
086e4635 +0x4595:  mov    %eax,-0x1c(%ebp)
086e4638 +0x4598:  call   08725c30 <__cxa_end_catch>
086e463d +0x459d:  mov    -0x1c(%ebp),%eax
086e4640 +0x45a0:  mov    %eax,(%esp)
086e4643 +0x45a3:  call   08ae3750 <_Unwind_Resume>
086e4648 +0x45a8:  jmp    086e4635 <+0x4595>
086e464a +0x45aa:  nop
086e464b +0x45ab:  nop
086e464c +0x45ac:  nop
086e464d +0x45ad:  nop
086e464e +0x45ae:  nop
086e464f +0x45af:  nop
086e4650 +0x45b0:  push   %ebp
086e4651 +0x45b1:  mov    %esp,%ebp
086e4653 +0x45b3:  push   %esi
086e4654 +0x45b4:  push   %ebx
086e4655 +0x45b5:  sub    $0x30,%esp
086e4658 +0x45b8:  mov    0x8(%ebp),%ebx
086e465b +0x45bb:  lea    -0x9(%ebp),%eax
086e465e +0x45be:  mov    0xc(%ebp),%esi
086e4661 +0x45c1:  movl   $0x0,0x8(%esp)
086e4669 +0x45c9:  mov    %eax,(%esp)
086e466c +0x45cc:  mov    %ebx,0x4(%esp)
086e4670 +0x45d0:  call   086e2f70 <+0x2ed0>
086e4675 +0x45d5:  cmpb   $0x0,-0x9(%ebp)
086e4679 +0x45d9:  je     086e46d8 <+0x4638>
086e467b +0x45db:  test   %esi,%esi
086e467d +0x45dd:  mov    $0x4,%eax
086e4682 +0x45e2:  je     086e46b1 <+0x4611>
086e4684 +0x45e4:  lea    -0xa(%ebp),%eax
086e4687 +0x45e7:  mov    %eax,0x8(%esp)
086e468b +0x45eb:  mov    %esi,0x4(%esp)
086e468f +0x45ef:  mov    (%ebx),%eax
086e4691 +0x45f1:  mov    -0xc(%eax),%eax
086e4694 +0x45f4:  mov    0x7c(%ebx,%eax,1),%eax
086e4698 +0x45f8:  mov    %eax,(%esp)
086e469b +0x45fb:  call   087063f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)
086e46a0 +0x4600:  cmp    $0x1,%eax
086e46a3 +0x4603:  sbb    %eax,%eax
086e46a5 +0x4605:  and    $0x4,%eax
086e46a8 +0x4608:  cmpb   $0x0,-0xa(%ebp)
086e46ac +0x460c:  je     086e46f0 <+0x4650>
086e46ae +0x460e:  or     $0x2,%eax
086e46b1 +0x4611:  mov    (%ebx),%edx
086e46b3 +0x4613:  mov    -0xc(%edx),%edx
086e46b6 +0x4616:  lea    (%ebx,%edx,1),%edx
086e46b9 +0x4619:  or     0x14(%edx),%eax
086e46bc +0x461c:  mov    %edx,(%esp)
086e46bf +0x461f:  mov    %eax,0x4(%esp)
086e46c3 +0x4623:  call   086e0cf0 <+0xc50>
086e46c8 +0x4628:  add    $0x30,%esp
086e46cb +0x462b:  mov    %ebx,%eax
086e46cd +0x462d:  pop    %ebx
086e46ce +0x462e:  pop    %esi
086e46cf +0x462f:  pop    %ebp
086e46d0 +0x4630:  ret
086e46d1 +0x4631:  lea    0x0(%esi,%eiz,1),%esi
086e46d8 +0x4638:  test   %esi,%esi
086e46da +0x463a:  mov    $0x4,%eax
086e46df +0x463f:  je     086e46b1 <+0x4611>
086e46e1 +0x4641:  add    $0x30,%esp
086e46e4 +0x4644:  mov    %ebx,%eax
086e46e6 +0x4646:  pop    %ebx
086e46e7 +0x4647:  pop    %esi
086e46e8 +0x4648:  pop    %ebp
086e46e9 +0x4649:  ret
086e46ea +0x464a:  lea    0x0(%esi),%esi
086e46f0 +0x4650:  test   %eax,%eax
086e46f2 +0x4652:  jne    086e46b1 <+0x4611>
086e46f4 +0x4654:  jmp    086e46c8 <+0x4628>
086e46f6 +0x4656:  cmp    $0x2,%edx
086e46f9 +0x4659:  je     086e4724 <+0x4684>
086e46fb +0x465b:  mov    %eax,(%esp)
086e46fe +0x465e:  xchg   %ax,%ax
086e4700 +0x4660:  call   08725ce0 <__cxa_begin_catch>
086e4705 +0x4665:  movl   $0x4,0x4(%esp)
086e470d +0x466d:  mov    (%ebx),%eax
086e470f +0x466f:  mov    -0xc(%eax),%eax
086e4712 +0x4672:  lea    (%ebx,%eax,1),%eax
086e4715 +0x4675:  mov    %eax,(%esp)
086e4718 +0x4678:  call   086e0cb0 <+0xc10>
086e471d +0x467d:  call   08725c30 <__cxa_end_catch>
086e4722 +0x4682:  jmp    086e46c8 <+0x4628>
086e4724 +0x4684:  mov    %eax,(%esp)
086e4727 +0x4687:  call   08725ce0 <__cxa_begin_catch>
086e472c +0x468c:  movl   $0x4,0x4(%esp)
086e4734 +0x4694:  mov    (%ebx),%eax
086e4736 +0x4696:  add    -0xc(%eax),%ebx
086e4739 +0x4699:  mov    %ebx,(%esp)
086e473c +0x469c:  call   086e0cb0 <+0xc10>
086e4741 +0x46a1:  call   08724be0 <__cxa_rethrow>
086e4746 +0x46a6:  mov    %eax,-0x1c(%ebp)
086e4749 +0x46a9:  call   08725c30 <__cxa_end_catch>
086e474e +0x46ae:  mov    -0x1c(%ebp),%eax
086e4751 +0x46b1:  mov    %eax,(%esp)
086e4754 +0x46b4:  call   08ae3750 <_Unwind_Resume>
086e4759 +0x46b9:  jmp    086e4746 <+0x46a6>
086e475b +0x46bb:  nop
086e475c +0x46bc:  nop
086e475d +0x46bd:  nop
086e475e +0x46be:  nop
086e475f +0x46bf:  nop
086e4760 +0x46c0:  push   %ebp
086e4761 +0x46c1:  mov    %esp,%ebp
086e4763 +0x46c3:  push   %edi
086e4764 +0x46c4:  push   %esi
086e4765 +0x46c5:  xor    %esi,%esi
086e4767 +0x46c7:  push   %ebx
086e4768 +0x46c8:  sub    $0x3c,%esp
086e476b +0x46cb:  movzbl 0x10(%ebp),%eax
086e476f +0x46cf:  mov    0xc(%ebp),%ebx
086e4772 +0x46d2:  mov    0x8(%ebp),%edi
086e4775 +0x46d5:  mov    %al,-0x1c(%ebp)
086e4778 +0x46d8:  mov    (%ebx),%eax
086e477a +0x46da:  movb   $0x0,(%edi)
086e477d +0x46dd:  mov    -0xc(%eax),%edx
086e4780 +0x46e0:  lea    (%ebx,%edx,1),%ecx
086e4783 +0x46e3:  mov    0x14(%ecx),%eax
086e4786 +0x46e6:  test   %eax,%eax
086e4788 +0x46e8:  jne    086e47c8 <+0x4728>
086e478a +0x46ea:  mov    0x70(%ecx),%eax
086e478d +0x46ed:  test   %eax,%eax
086e478f +0x46ef:  je     086e47a1 <+0x4701>
086e4791 +0x46f1:  mov    %eax,(%esp)
086e4794 +0x46f4:  call   086fc340 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x7ad4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x7ad4
086e4799 +0x46f9:  mov    (%ebx),%eax
086e479b +0x46fb:  mov    -0xc(%eax),%edx
086e479e +0x46fe:  lea    (%ebx,%edx,1),%ecx
086e47a1 +0x4701:  cmpb   $0x0,-0x1c(%ebp)
086e47a5 +0x4705:  je     086e47e0 <+0x4740>
086e47a7 +0x4707:  xor    %esi,%esi
086e47a9 +0x4709:  lea    0x0(%esi,%eiz,1),%esi
086e47b0 +0x4710:  mov    0x14(%ecx),%eax
086e47b3 +0x4713:  test   %eax,%eax
086e47b5 +0x4715:  jne    086e47c8 <+0x4728>
086e47b7 +0x4717:  test   %esi,%esi
086e47b9 +0x4719:  jne    086e47c8 <+0x4728>
086e47bb +0x471b:  movb   $0x1,(%edi)
086e47be +0x471e:  add    $0x3c,%esp
086e47c1 +0x4721:  pop    %ebx
086e47c2 +0x4722:  pop    %esi
086e47c3 +0x4723:  pop    %edi
086e47c4 +0x4724:  pop    %ebp
086e47c5 +0x4725:  ret
086e47c6 +0x4726:  xchg   %ax,%ax
086e47c8 +0x4728:  or     $0x4,%esi
086e47cb +0x472b:  or     %eax,%esi
086e47cd +0x472d:  mov    %esi,0xc(%ebp)
086e47d0 +0x4730:  mov    %ecx,0x8(%ebp)
086e47d3 +0x4733:  add    $0x3c,%esp
086e47d6 +0x4736:  pop    %ebx
086e47d7 +0x4737:  pop    %esi
086e47d8 +0x4738:  pop    %edi
086e47d9 +0x4739:  pop    %ebp
086e47da +0x473a:  jmp    086e0da0 <+0xd00>
086e47df +0x473f:  nop
086e47e0 +0x4740:  testb  $0x10,0xd(%ebx,%edx,1)
086e47e5 +0x4745:  je     086e47a7 <+0x4707>
086e47e7 +0x4747:  mov    0x78(%ecx),%edx
086e47ea +0x474a:  mov    0x8(%edx),%eax
086e47ed +0x474d:  cmp    0xc(%edx),%eax
086e47f0 +0x4750:  mov    %edx,-0x2c(%ebp)
086e47f3 +0x4753:  jae    086e4895 <+0x47f5>
086e47f9 +0x4759:  movzbl (%eax),%eax
086e47fc +0x475c:  mov    0x7c(%ecx),%edx
086e47ff +0x475f:  test   %edx,%edx
086e4801 +0x4761:  je     086e488d <+0x47ed>
086e4807 +0x4767:  cmp    $0xffffffff,%eax
086e480a +0x476a:  je     086e4869 <+0x47c9>
086e480c +0x476c:  mov    0x18(%edx),%esi
086e480f +0x476f:  movzbl %al,%eax
086e4812 +0x4772:  testb  $0x20,0x1(%esi,%eax,2)
086e4817 +0x4777:  je     086e47a7 <+0x4707>
086e4819 +0x4779:  mov    -0x2c(%ebp),%esi
086e481c +0x477c:  lea    0x0(%esi,%eiz,1),%esi
086e4820 +0x4780:  mov    0x8(%esi),%eax
086e4823 +0x4783:  cmp    0xc(%esi),%eax
086e4826 +0x4786:  jae    086e484f <+0x47af>
086e4828 +0x4788:  add    $0x1,%eax
086e482b +0x478b:  mov    %eax,0x8(%esi)
086e482e +0x478e:  cmp    %eax,0xc(%esi)
086e4831 +0x4791:  jbe    086e4873 <+0x47d3>
086e4833 +0x4793:  movzbl (%eax),%eax
086e4836 +0x4796:  mov    0x18(%edx),%ecx
086e4839 +0x4799:  movzbl %al,%eax
086e483c +0x479c:  testb  $0x20,0x1(%ecx,%eax,2)
086e4841 +0x47a1:  jne    086e4820 <+0x4780>
086e4843 +0x47a3:  mov    (%ebx),%eax
086e4845 +0x47a5:  mov    -0xc(%eax),%ecx
086e4848 +0x47a8:  add    %ebx,%ecx
086e484a +0x47aa:  jmp    086e47a7 <+0x4707>
086e484f +0x47af:  mov    (%esi),%eax
086e4851 +0x47b1:  mov    %edx,-0x20(%ebp)
086e4854 +0x47b4:  mov    %esi,(%esp)
086e4857 +0x47b7:  call   *0x28(%eax)
086e485a +0x47ba:  mov    -0x20(%ebp),%edx
086e485d +0x47bd:  cmp    $0xffffffff,%eax
086e4860 +0x47c0:  jne    086e4888 <+0x47e8>
086e4862 +0x47c2:  mov    (%ebx),%eax
086e4864 +0x47c4:  mov    -0xc(%eax),%ecx
086e4867 +0x47c7:  add    %ebx,%ecx
086e4869 +0x47c9:  mov    $0x2,%esi
086e486e +0x47ce:  jmp    086e47b0 <+0x4710>
086e4873 +0x47d3:  mov    (%esi),%eax
086e4875 +0x47d5:  mov    %edx,-0x20(%ebp)
086e4878 +0x47d8:  mov    %esi,(%esp)
086e487b +0x47db:  call   *0x24(%eax)
086e487e +0x47de:  mov    -0x20(%ebp),%edx
086e4881 +0x47e1:  cmp    $0xffffffff,%eax
086e4884 +0x47e4:  je     086e4862 <+0x47c2>
086e4886 +0x47e6:  jmp    086e4836 <+0x4796>
086e4888 +0x47e8:  mov    0x8(%esi),%eax
086e488b +0x47eb:  jmp    086e482e <+0x478e>
086e488d +0x47ed:  lea    0x0(%esi),%esi
086e4890 +0x47f0:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e4895 +0x47f5:  mov    -0x2c(%ebp),%esi
086e4898 +0x47f8:  mov    (%esi),%eax
086e489a +0x47fa:  mov    %esi,(%esp)
086e489d +0x47fd:  call   *0x24(%eax)
086e48a0 +0x4800:  mov    (%ebx),%edx
086e48a2 +0x4802:  mov    -0xc(%edx),%ecx
086e48a5 +0x4805:  add    %ebx,%ecx
086e48a7 +0x4807:  jmp    086e47fc <+0x475c>
086e48ac +0x480c:  nop
086e48ad +0x480d:  nop
086e48ae +0x480e:  nop
086e48af +0x480f:  nop
086e48b0 +0x4810:  push   %ebp
086e48b1 +0x4811:  mov    %esp,%ebp
086e48b3 +0x4813:  sub    $0x68,%esp
086e48b6 +0x4816:  mov    %ebx,-0xc(%ebp)
086e48b9 +0x4819:  mov    0x8(%ebp),%ebx
086e48bc +0x481c:  lea    -0x19(%ebp),%eax
086e48bf +0x481f:  mov    %esi,-0x8(%ebp)
086e48c2 +0x4822:  mov    %edi,-0x4(%ebp)
086e48c5 +0x4825:  movl   $0x0,0x8(%esp)
086e48cd +0x482d:  mov    %ebx,0x4(%esp)
086e48d1 +0x4831:  mov    %eax,(%esp)
086e48d4 +0x4834:  call   086e4760 <+0x46c0>
086e48d9 +0x4839:  cmpb   $0x0,-0x19(%ebp)
086e48dd +0x483d:  je     086e494b <+0x48ab>
086e48df +0x483f:  mov    (%ebx),%eax
086e48e1 +0x4841:  movl   $0x0,-0x20(%ebp)
086e48e8 +0x4848:  mov    -0xc(%eax),%edx
086e48eb +0x484b:  add    %ebx,%edx
086e48ed +0x484d:  mov    0x84(%edx),%eax
086e48f3 +0x4853:  test   %eax,%eax
086e48f5 +0x4855:  je     086e4986 <+0x48e6>
086e48fb +0x485b:  mov    (%eax),%edi
086e48fd +0x485d:  lea    -0x30(%ebp),%ecx
086e4900 +0x4860:  mov    0x78(%edx),%esi
086e4903 +0x4863:  mov    %eax,0x4(%esp)
086e4907 +0x4867:  mov    %edx,0x18(%esp)
086e490b +0x486b:  mov    %edi,-0x34(%ebp)
086e490e +0x486e:  mov    0xc(%ebp),%edi
086e4911 +0x4871:  mov    -0x34(%ebp),%eax
086e4914 +0x4874:  movl   $0x0,0x10(%esp)
086e491c +0x487c:  movl   $0xffffffff,0x14(%esp)
086e4924 +0x4884:  mov    %edi,0x20(%esp)
086e4928 +0x4888:  lea    -0x20(%ebp),%edi
086e492b +0x488b:  mov    %edi,0x1c(%esp)
086e492f +0x488f:  mov    %esi,0x8(%esp)
086e4933 +0x4893:  movl   $0xffffffff,0xc(%esp)
086e493b +0x489b:  mov    %ecx,(%esp)
086e493e +0x489e:  call   *0x30(%eax)
086e4941 +0x48a1:  sub    $0x4,%esp
086e4944 +0x48a4:  mov    -0x20(%ebp),%eax
086e4947 +0x48a7:  test   %eax,%eax
086e4949 +0x48a9:  jne    086e4960 <+0x48c0>
086e494b +0x48ab:  mov    %ebx,%eax
086e494d +0x48ad:  mov    -0x8(%ebp),%esi
086e4950 +0x48b0:  mov    -0xc(%ebp),%ebx
086e4953 +0x48b3:  mov    -0x4(%ebp),%edi
086e4956 +0x48b6:  mov    %ebp,%esp
086e4958 +0x48b8:  pop    %ebp
086e4959 +0x48b9:  ret
086e495a +0x48ba:  lea    0x0(%esi),%esi
086e4960 +0x48c0:  mov    (%ebx),%edx
086e4962 +0x48c2:  mov    -0xc(%edx),%edx
086e4965 +0x48c5:  lea    (%ebx,%edx,1),%edx
086e4968 +0x48c8:  or     0x14(%edx),%eax
086e496b +0x48cb:  mov    %edx,(%esp)
086e496e +0x48ce:  mov    %eax,0x4(%esp)
086e4972 +0x48d2:  call   086e0da0 <+0xd00>
086e4977 +0x48d7:  mov    %ebx,%eax
086e4979 +0x48d9:  mov    -0x8(%ebp),%esi
086e497c +0x48dc:  mov    -0xc(%ebp),%ebx
086e497f +0x48df:  mov    -0x4(%ebp),%edi
086e4982 +0x48e2:  mov    %ebp,%esp
086e4984 +0x48e4:  pop    %ebp
086e4985 +0x48e5:  ret
086e4986 +0x48e6:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e498b +0x48eb:  cmp    $0x2,%edx
086e498e +0x48ee:  je     086e49b7 <+0x4917>
086e4990 +0x48f0:  mov    %eax,(%esp)
086e4993 +0x48f3:  call   08725ce0 <__cxa_begin_catch>
086e4998 +0x48f8:  movl   $0x1,0x4(%esp)
086e49a0 +0x4900:  mov    (%ebx),%eax
086e49a2 +0x4902:  mov    -0xc(%eax),%eax
086e49a5 +0x4905:  lea    (%ebx,%eax,1),%eax
086e49a8 +0x4908:  mov    %eax,(%esp)
086e49ab +0x490b:  call   086e0cd0 <+0xc30>
086e49b0 +0x4910:  call   08725c30 <__cxa_end_catch>
086e49b5 +0x4915:  jmp    086e4944 <+0x48a4>
086e49b7 +0x4917:  mov    %eax,(%esp)
086e49ba +0x491a:  call   08725ce0 <__cxa_begin_catch>
086e49bf +0x491f:  movl   $0x1,0x4(%esp)
086e49c7 +0x4927:  mov    (%ebx),%eax
086e49c9 +0x4929:  add    -0xc(%eax),%ebx
086e49cc +0x492c:  mov    %ebx,(%esp)
086e49cf +0x492f:  call   086e0cd0 <+0xc30>
086e49d4 +0x4934:  call   08724be0 <__cxa_rethrow>
086e49d9 +0x4939:  mov    %eax,%esi
086e49db +0x493b:  call   08725c30 <__cxa_end_catch>
086e49e0 +0x4940:  mov    %esi,(%esp)
086e49e3 +0x4943:  call   08ae3750 <_Unwind_Resume>
086e49e8 +0x4948:  jmp    086e49d9 <+0x4939>
086e49ea +0x494a:  nop
086e49eb +0x494b:  nop
086e49ec +0x494c:  nop
086e49ed +0x494d:  nop
086e49ee +0x494e:  nop
086e49ef +0x494f:  nop
086e49f0 +0x4950:  push   %ebp
086e49f1 +0x4951:  mov    %esp,%ebp
086e49f3 +0x4953:  sub    $0x8,%esp
086e49f6 +0x4956:  leave
086e49f7 +0x4957:  jmp    086e48b0 <+0x4810>
086e49fc +0x495c:  nop
086e49fd +0x495d:  nop
086e49fe +0x495e:  nop
086e49ff +0x495f:  nop
086e4a00 +0x4960:  push   %ebp
086e4a01 +0x4961:  mov    %esp,%ebp
086e4a03 +0x4963:  sub    $0x68,%esp
086e4a06 +0x4966:  mov    %ebx,-0xc(%ebp)
086e4a09 +0x4969:  mov    0x8(%ebp),%ebx
086e4a0c +0x496c:  lea    -0x19(%ebp),%eax
086e4a0f +0x496f:  mov    %esi,-0x8(%ebp)
086e4a12 +0x4972:  mov    %edi,-0x4(%ebp)
086e4a15 +0x4975:  movl   $0x0,0x8(%esp)
086e4a1d +0x497d:  mov    %ebx,0x4(%esp)
086e4a21 +0x4981:  mov    %eax,(%esp)
086e4a24 +0x4984:  call   086e4760 <+0x46c0>
086e4a29 +0x4989:  cmpb   $0x0,-0x19(%ebp)
086e4a2d +0x498d:  je     086e4a9b <+0x49fb>
086e4a2f +0x498f:  mov    (%ebx),%eax
086e4a31 +0x4991:  movl   $0x0,-0x20(%ebp)
086e4a38 +0x4998:  mov    -0xc(%eax),%edx
086e4a3b +0x499b:  add    %ebx,%edx
086e4a3d +0x499d:  mov    0x84(%edx),%eax
086e4a43 +0x49a3:  test   %eax,%eax
086e4a45 +0x49a5:  je     086e4ad6 <+0x4a36>
086e4a4b +0x49ab:  mov    (%eax),%edi
086e4a4d +0x49ad:  lea    -0x30(%ebp),%ecx
086e4a50 +0x49b0:  mov    0x78(%edx),%esi
086e4a53 +0x49b3:  mov    %eax,0x4(%esp)
086e4a57 +0x49b7:  mov    %edx,0x18(%esp)
086e4a5b +0x49bb:  mov    %edi,-0x34(%ebp)
086e4a5e +0x49be:  mov    0xc(%ebp),%edi
086e4a61 +0x49c1:  mov    -0x34(%ebp),%eax
086e4a64 +0x49c4:  movl   $0x0,0x10(%esp)
086e4a6c +0x49cc:  movl   $0xffffffff,0x14(%esp)
086e4a74 +0x49d4:  mov    %edi,0x20(%esp)
086e4a78 +0x49d8:  lea    -0x20(%ebp),%edi
086e4a7b +0x49db:  mov    %edi,0x1c(%esp)
086e4a7f +0x49df:  mov    %esi,0x8(%esp)
086e4a83 +0x49e3:  movl   $0xffffffff,0xc(%esp)
086e4a8b +0x49eb:  mov    %ecx,(%esp)
086e4a8e +0x49ee:  call   *0x2c(%eax)
086e4a91 +0x49f1:  sub    $0x4,%esp
086e4a94 +0x49f4:  mov    -0x20(%ebp),%eax
086e4a97 +0x49f7:  test   %eax,%eax
086e4a99 +0x49f9:  jne    086e4ab0 <+0x4a10>
086e4a9b +0x49fb:  mov    %ebx,%eax
086e4a9d +0x49fd:  mov    -0x8(%ebp),%esi
086e4aa0 +0x4a00:  mov    -0xc(%ebp),%ebx
086e4aa3 +0x4a03:  mov    -0x4(%ebp),%edi
086e4aa6 +0x4a06:  mov    %ebp,%esp
086e4aa8 +0x4a08:  pop    %ebp
086e4aa9 +0x4a09:  ret
086e4aaa +0x4a0a:  lea    0x0(%esi),%esi
086e4ab0 +0x4a10:  mov    (%ebx),%edx
086e4ab2 +0x4a12:  mov    -0xc(%edx),%edx
086e4ab5 +0x4a15:  lea    (%ebx,%edx,1),%edx
086e4ab8 +0x4a18:  or     0x14(%edx),%eax
086e4abb +0x4a1b:  mov    %edx,(%esp)
086e4abe +0x4a1e:  mov    %eax,0x4(%esp)
086e4ac2 +0x4a22:  call   086e0da0 <+0xd00>
086e4ac7 +0x4a27:  mov    %ebx,%eax
086e4ac9 +0x4a29:  mov    -0x8(%ebp),%esi
086e4acc +0x4a2c:  mov    -0xc(%ebp),%ebx
086e4acf +0x4a2f:  mov    -0x4(%ebp),%edi
086e4ad2 +0x4a32:  mov    %ebp,%esp
086e4ad4 +0x4a34:  pop    %ebp
086e4ad5 +0x4a35:  ret
086e4ad6 +0x4a36:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e4adb +0x4a3b:  cmp    $0x2,%edx
086e4ade +0x4a3e:  je     086e4b07 <+0x4a67>
086e4ae0 +0x4a40:  mov    %eax,(%esp)
086e4ae3 +0x4a43:  call   08725ce0 <__cxa_begin_catch>
086e4ae8 +0x4a48:  movl   $0x1,0x4(%esp)
086e4af0 +0x4a50:  mov    (%ebx),%eax
086e4af2 +0x4a52:  mov    -0xc(%eax),%eax
086e4af5 +0x4a55:  lea    (%ebx,%eax,1),%eax
086e4af8 +0x4a58:  mov    %eax,(%esp)
086e4afb +0x4a5b:  call   086e0cd0 <+0xc30>
086e4b00 +0x4a60:  call   08725c30 <__cxa_end_catch>
086e4b05 +0x4a65:  jmp    086e4a94 <+0x49f4>
086e4b07 +0x4a67:  mov    %eax,(%esp)
086e4b0a +0x4a6a:  call   08725ce0 <__cxa_begin_catch>
086e4b0f +0x4a6f:  movl   $0x1,0x4(%esp)
086e4b17 +0x4a77:  mov    (%ebx),%eax
086e4b19 +0x4a79:  add    -0xc(%eax),%ebx
086e4b1c +0x4a7c:  mov    %ebx,(%esp)
086e4b1f +0x4a7f:  call   086e0cd0 <+0xc30>
086e4b24 +0x4a84:  call   08724be0 <__cxa_rethrow>
086e4b29 +0x4a89:  mov    %eax,%esi
086e4b2b +0x4a8b:  call   08725c30 <__cxa_end_catch>
086e4b30 +0x4a90:  mov    %esi,(%esp)
086e4b33 +0x4a93:  call   08ae3750 <_Unwind_Resume>
086e4b38 +0x4a98:  jmp    086e4b29 <+0x4a89>
086e4b3a +0x4a9a:  nop
086e4b3b +0x4a9b:  nop
086e4b3c +0x4a9c:  nop
086e4b3d +0x4a9d:  nop
086e4b3e +0x4a9e:  nop
086e4b3f +0x4a9f:  nop
086e4b40 +0x4aa0:  push   %ebp
086e4b41 +0x4aa1:  mov    %esp,%ebp
086e4b43 +0x4aa3:  sub    $0x8,%esp
086e4b46 +0x4aa6:  leave
086e4b47 +0x4aa7:  jmp    086e4a00 <+0x4960>
086e4b4c +0x4aac:  nop
086e4b4d +0x4aad:  nop
086e4b4e +0x4aae:  nop
086e4b4f +0x4aaf:  nop
086e4b50 +0x4ab0:  push   %ebp
086e4b51 +0x4ab1:  mov    %esp,%ebp
086e4b53 +0x4ab3:  sub    $0x68,%esp
086e4b56 +0x4ab6:  mov    %ebx,-0xc(%ebp)
086e4b59 +0x4ab9:  mov    0x8(%ebp),%ebx
086e4b5c +0x4abc:  lea    -0x19(%ebp),%eax
086e4b5f +0x4abf:  mov    %esi,-0x8(%ebp)
086e4b62 +0x4ac2:  mov    %edi,-0x4(%ebp)
086e4b65 +0x4ac5:  movl   $0x0,0x8(%esp)
086e4b6d +0x4acd:  mov    %ebx,0x4(%esp)
086e4b71 +0x4ad1:  mov    %eax,(%esp)
086e4b74 +0x4ad4:  call   086e4760 <+0x46c0>
086e4b79 +0x4ad9:  cmpb   $0x0,-0x19(%ebp)
086e4b7d +0x4add:  je     086e4beb <+0x4b4b>
086e4b7f +0x4adf:  mov    (%ebx),%eax
086e4b81 +0x4ae1:  movl   $0x0,-0x20(%ebp)
086e4b88 +0x4ae8:  mov    -0xc(%eax),%edx
086e4b8b +0x4aeb:  add    %ebx,%edx
086e4b8d +0x4aed:  mov    0x84(%edx),%eax
086e4b93 +0x4af3:  test   %eax,%eax
086e4b95 +0x4af5:  je     086e4c26 <+0x4b86>
086e4b9b +0x4afb:  mov    (%eax),%edi
086e4b9d +0x4afd:  lea    -0x30(%ebp),%ecx
086e4ba0 +0x4b00:  mov    0x78(%edx),%esi
086e4ba3 +0x4b03:  mov    %eax,0x4(%esp)
086e4ba7 +0x4b07:  mov    %edx,0x18(%esp)
086e4bab +0x4b0b:  mov    %edi,-0x34(%ebp)
086e4bae +0x4b0e:  mov    0xc(%ebp),%edi
086e4bb1 +0x4b11:  mov    -0x34(%ebp),%eax
086e4bb4 +0x4b14:  movl   $0x0,0x10(%esp)
086e4bbc +0x4b1c:  movl   $0xffffffff,0x14(%esp)
086e4bc4 +0x4b24:  mov    %edi,0x20(%esp)
086e4bc8 +0x4b28:  lea    -0x20(%ebp),%edi
086e4bcb +0x4b2b:  mov    %edi,0x1c(%esp)
086e4bcf +0x4b2f:  mov    %esi,0x8(%esp)
086e4bd3 +0x4b33:  movl   $0xffffffff,0xc(%esp)
086e4bdb +0x4b3b:  mov    %ecx,(%esp)
086e4bde +0x4b3e:  call   *0x28(%eax)
086e4be1 +0x4b41:  sub    $0x4,%esp
086e4be4 +0x4b44:  mov    -0x20(%ebp),%eax
086e4be7 +0x4b47:  test   %eax,%eax
086e4be9 +0x4b49:  jne    086e4c00 <+0x4b60>
086e4beb +0x4b4b:  mov    %ebx,%eax
086e4bed +0x4b4d:  mov    -0x8(%ebp),%esi
086e4bf0 +0x4b50:  mov    -0xc(%ebp),%ebx
086e4bf3 +0x4b53:  mov    -0x4(%ebp),%edi
086e4bf6 +0x4b56:  mov    %ebp,%esp
086e4bf8 +0x4b58:  pop    %ebp
086e4bf9 +0x4b59:  ret
086e4bfa +0x4b5a:  lea    0x0(%esi),%esi
086e4c00 +0x4b60:  mov    (%ebx),%edx
086e4c02 +0x4b62:  mov    -0xc(%edx),%edx
086e4c05 +0x4b65:  lea    (%ebx,%edx,1),%edx
086e4c08 +0x4b68:  or     0x14(%edx),%eax
086e4c0b +0x4b6b:  mov    %edx,(%esp)
086e4c0e +0x4b6e:  mov    %eax,0x4(%esp)
086e4c12 +0x4b72:  call   086e0da0 <+0xd00>
086e4c17 +0x4b77:  mov    %ebx,%eax
086e4c19 +0x4b79:  mov    -0x8(%ebp),%esi
086e4c1c +0x4b7c:  mov    -0xc(%ebp),%ebx
086e4c1f +0x4b7f:  mov    -0x4(%ebp),%edi
086e4c22 +0x4b82:  mov    %ebp,%esp
086e4c24 +0x4b84:  pop    %ebp
086e4c25 +0x4b85:  ret
086e4c26 +0x4b86:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e4c2b +0x4b8b:  cmp    $0x2,%edx
086e4c2e +0x4b8e:  je     086e4c57 <+0x4bb7>
086e4c30 +0x4b90:  mov    %eax,(%esp)
086e4c33 +0x4b93:  call   08725ce0 <__cxa_begin_catch>
086e4c38 +0x4b98:  movl   $0x1,0x4(%esp)
086e4c40 +0x4ba0:  mov    (%ebx),%eax
086e4c42 +0x4ba2:  mov    -0xc(%eax),%eax
086e4c45 +0x4ba5:  lea    (%ebx,%eax,1),%eax
086e4c48 +0x4ba8:  mov    %eax,(%esp)
086e4c4b +0x4bab:  call   086e0cd0 <+0xc30>
086e4c50 +0x4bb0:  call   08725c30 <__cxa_end_catch>
086e4c55 +0x4bb5:  jmp    086e4be4 <+0x4b44>
086e4c57 +0x4bb7:  mov    %eax,(%esp)
086e4c5a +0x4bba:  call   08725ce0 <__cxa_begin_catch>
086e4c5f +0x4bbf:  movl   $0x1,0x4(%esp)
086e4c67 +0x4bc7:  mov    (%ebx),%eax
086e4c69 +0x4bc9:  add    -0xc(%eax),%ebx
086e4c6c +0x4bcc:  mov    %ebx,(%esp)
086e4c6f +0x4bcf:  call   086e0cd0 <+0xc30>
086e4c74 +0x4bd4:  call   08724be0 <__cxa_rethrow>
086e4c79 +0x4bd9:  mov    %eax,%esi
086e4c7b +0x4bdb:  call   08725c30 <__cxa_end_catch>
086e4c80 +0x4be0:  mov    %esi,(%esp)
086e4c83 +0x4be3:  call   08ae3750 <_Unwind_Resume>
086e4c88 +0x4be8:  jmp    086e4c79 <+0x4bd9>
086e4c8a +0x4bea:  nop
086e4c8b +0x4beb:  nop
086e4c8c +0x4bec:  nop
086e4c8d +0x4bed:  nop
086e4c8e +0x4bee:  nop
086e4c8f +0x4bef:  nop
086e4c90 +0x4bf0:  push   %ebp
086e4c91 +0x4bf1:  mov    %esp,%ebp
086e4c93 +0x4bf3:  sub    $0x8,%esp
086e4c96 +0x4bf6:  leave
086e4c97 +0x4bf7:  jmp    086e4b50 <+0x4ab0>
086e4c9c +0x4bfc:  nop
086e4c9d +0x4bfd:  nop
086e4c9e +0x4bfe:  nop
086e4c9f +0x4bff:  nop
086e4ca0 +0x4c00:  push   %ebp
086e4ca1 +0x4c01:  mov    %esp,%ebp
086e4ca3 +0x4c03:  sub    $0x68,%esp
086e4ca6 +0x4c06:  mov    %ebx,-0xc(%ebp)
086e4ca9 +0x4c09:  mov    0x8(%ebp),%ebx
086e4cac +0x4c0c:  lea    -0x19(%ebp),%eax
086e4caf +0x4c0f:  mov    %esi,-0x8(%ebp)
086e4cb2 +0x4c12:  mov    %edi,-0x4(%ebp)
086e4cb5 +0x4c15:  movl   $0x0,0x8(%esp)
086e4cbd +0x4c1d:  mov    %ebx,0x4(%esp)
086e4cc1 +0x4c21:  mov    %eax,(%esp)
086e4cc4 +0x4c24:  call   086e4760 <+0x46c0>
086e4cc9 +0x4c29:  cmpb   $0x0,-0x19(%ebp)
086e4ccd +0x4c2d:  je     086e4d3b <+0x4c9b>
086e4ccf +0x4c2f:  mov    (%ebx),%eax
086e4cd1 +0x4c31:  movl   $0x0,-0x20(%ebp)
086e4cd8 +0x4c38:  mov    -0xc(%eax),%edx
086e4cdb +0x4c3b:  add    %ebx,%edx
086e4cdd +0x4c3d:  mov    0x84(%edx),%eax
086e4ce3 +0x4c43:  test   %eax,%eax
086e4ce5 +0x4c45:  je     086e4d76 <+0x4cd6>
086e4ceb +0x4c4b:  mov    (%eax),%edi
086e4ced +0x4c4d:  lea    -0x30(%ebp),%ecx
086e4cf0 +0x4c50:  mov    0x78(%edx),%esi
086e4cf3 +0x4c53:  mov    %eax,0x4(%esp)
086e4cf7 +0x4c57:  mov    %edx,0x18(%esp)
086e4cfb +0x4c5b:  mov    %edi,-0x34(%ebp)
086e4cfe +0x4c5e:  mov    0xc(%ebp),%edi
086e4d01 +0x4c61:  mov    -0x34(%ebp),%eax
086e4d04 +0x4c64:  movl   $0x0,0x10(%esp)
086e4d0c +0x4c6c:  movl   $0xffffffff,0x14(%esp)
086e4d14 +0x4c74:  mov    %edi,0x20(%esp)
086e4d18 +0x4c78:  lea    -0x20(%ebp),%edi
086e4d1b +0x4c7b:  mov    %edi,0x1c(%esp)
086e4d1f +0x4c7f:  mov    %esi,0x8(%esp)
086e4d23 +0x4c83:  movl   $0xffffffff,0xc(%esp)
086e4d2b +0x4c8b:  mov    %ecx,(%esp)
086e4d2e +0x4c8e:  call   *0x24(%eax)
086e4d31 +0x4c91:  sub    $0x4,%esp
086e4d34 +0x4c94:  mov    -0x20(%ebp),%eax
086e4d37 +0x4c97:  test   %eax,%eax
086e4d39 +0x4c99:  jne    086e4d50 <+0x4cb0>
086e4d3b +0x4c9b:  mov    %ebx,%eax
086e4d3d +0x4c9d:  mov    -0x8(%ebp),%esi
086e4d40 +0x4ca0:  mov    -0xc(%ebp),%ebx
086e4d43 +0x4ca3:  mov    -0x4(%ebp),%edi
086e4d46 +0x4ca6:  mov    %ebp,%esp
086e4d48 +0x4ca8:  pop    %ebp
086e4d49 +0x4ca9:  ret
086e4d4a +0x4caa:  lea    0x0(%esi),%esi
086e4d50 +0x4cb0:  mov    (%ebx),%edx
086e4d52 +0x4cb2:  mov    -0xc(%edx),%edx
086e4d55 +0x4cb5:  lea    (%ebx,%edx,1),%edx
086e4d58 +0x4cb8:  or     0x14(%edx),%eax
086e4d5b +0x4cbb:  mov    %edx,(%esp)
086e4d5e +0x4cbe:  mov    %eax,0x4(%esp)
086e4d62 +0x4cc2:  call   086e0da0 <+0xd00>
086e4d67 +0x4cc7:  mov    %ebx,%eax
086e4d69 +0x4cc9:  mov    -0x8(%ebp),%esi
086e4d6c +0x4ccc:  mov    -0xc(%ebp),%ebx
086e4d6f +0x4ccf:  mov    -0x4(%ebp),%edi
086e4d72 +0x4cd2:  mov    %ebp,%esp
086e4d74 +0x4cd4:  pop    %ebp
086e4d75 +0x4cd5:  ret
086e4d76 +0x4cd6:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e4d7b +0x4cdb:  cmp    $0x2,%edx
086e4d7e +0x4cde:  je     086e4da7 <+0x4d07>
086e4d80 +0x4ce0:  mov    %eax,(%esp)
086e4d83 +0x4ce3:  call   08725ce0 <__cxa_begin_catch>
086e4d88 +0x4ce8:  movl   $0x1,0x4(%esp)
086e4d90 +0x4cf0:  mov    (%ebx),%eax
086e4d92 +0x4cf2:  mov    -0xc(%eax),%eax
086e4d95 +0x4cf5:  lea    (%ebx,%eax,1),%eax
086e4d98 +0x4cf8:  mov    %eax,(%esp)
086e4d9b +0x4cfb:  call   086e0cd0 <+0xc30>
086e4da0 +0x4d00:  call   08725c30 <__cxa_end_catch>
086e4da5 +0x4d05:  jmp    086e4d34 <+0x4c94>
086e4da7 +0x4d07:  mov    %eax,(%esp)
086e4daa +0x4d0a:  call   08725ce0 <__cxa_begin_catch>
086e4daf +0x4d0f:  movl   $0x1,0x4(%esp)
086e4db7 +0x4d17:  mov    (%ebx),%eax
086e4db9 +0x4d19:  add    -0xc(%eax),%ebx
086e4dbc +0x4d1c:  mov    %ebx,(%esp)
086e4dbf +0x4d1f:  call   086e0cd0 <+0xc30>
086e4dc4 +0x4d24:  call   08724be0 <__cxa_rethrow>
086e4dc9 +0x4d29:  mov    %eax,%esi
086e4dcb +0x4d2b:  call   08725c30 <__cxa_end_catch>
086e4dd0 +0x4d30:  mov    %esi,(%esp)
086e4dd3 +0x4d33:  call   08ae3750 <_Unwind_Resume>
086e4dd8 +0x4d38:  jmp    086e4dc9 <+0x4d29>
086e4dda +0x4d3a:  nop
086e4ddb +0x4d3b:  nop
086e4ddc +0x4d3c:  nop
086e4ddd +0x4d3d:  nop
086e4dde +0x4d3e:  nop
086e4ddf +0x4d3f:  nop
086e4de0 +0x4d40:  push   %ebp
086e4de1 +0x4d41:  mov    %esp,%ebp
086e4de3 +0x4d43:  sub    $0x8,%esp
086e4de6 +0x4d46:  leave
086e4de7 +0x4d47:  jmp    086e4ca0 <+0x4c00>
086e4dec +0x4d4c:  nop
086e4ded +0x4d4d:  nop
086e4dee +0x4d4e:  nop
086e4def +0x4d4f:  nop
086e4df0 +0x4d50:  push   %ebp
086e4df1 +0x4d51:  mov    %esp,%ebp
086e4df3 +0x4d53:  sub    $0x68,%esp
086e4df6 +0x4d56:  mov    %ebx,-0xc(%ebp)
086e4df9 +0x4d59:  mov    0x8(%ebp),%ebx
086e4dfc +0x4d5c:  lea    -0x19(%ebp),%eax
086e4dff +0x4d5f:  mov    %esi,-0x8(%ebp)
086e4e02 +0x4d62:  mov    %edi,-0x4(%ebp)
086e4e05 +0x4d65:  movl   $0x0,0x8(%esp)
086e4e0d +0x4d6d:  mov    %ebx,0x4(%esp)
086e4e11 +0x4d71:  mov    %eax,(%esp)
086e4e14 +0x4d74:  call   086e4760 <+0x46c0>
086e4e19 +0x4d79:  cmpb   $0x0,-0x19(%ebp)
086e4e1d +0x4d7d:  je     086e4e8b <+0x4deb>
086e4e1f +0x4d7f:  mov    (%ebx),%eax
086e4e21 +0x4d81:  movl   $0x0,-0x20(%ebp)
086e4e28 +0x4d88:  mov    -0xc(%eax),%edx
086e4e2b +0x4d8b:  add    %ebx,%edx
086e4e2d +0x4d8d:  mov    0x84(%edx),%eax
086e4e33 +0x4d93:  test   %eax,%eax
086e4e35 +0x4d95:  je     086e4ec6 <+0x4e26>
086e4e3b +0x4d9b:  mov    (%eax),%edi
086e4e3d +0x4d9d:  lea    -0x30(%ebp),%ecx
086e4e40 +0x4da0:  mov    0x78(%edx),%esi
086e4e43 +0x4da3:  mov    %eax,0x4(%esp)
086e4e47 +0x4da7:  mov    %edx,0x18(%esp)
086e4e4b +0x4dab:  mov    %edi,-0x34(%ebp)
086e4e4e +0x4dae:  mov    0xc(%ebp),%edi
086e4e51 +0x4db1:  mov    -0x34(%ebp),%eax
086e4e54 +0x4db4:  movl   $0x0,0x10(%esp)
086e4e5c +0x4dbc:  movl   $0xffffffff,0x14(%esp)
086e4e64 +0x4dc4:  mov    %edi,0x20(%esp)
086e4e68 +0x4dc8:  lea    -0x20(%ebp),%edi
086e4e6b +0x4dcb:  mov    %edi,0x1c(%esp)
086e4e6f +0x4dcf:  mov    %esi,0x8(%esp)
086e4e73 +0x4dd3:  movl   $0xffffffff,0xc(%esp)
086e4e7b +0x4ddb:  mov    %ecx,(%esp)
086e4e7e +0x4dde:  call   *0x20(%eax)
086e4e81 +0x4de1:  sub    $0x4,%esp
086e4e84 +0x4de4:  mov    -0x20(%ebp),%eax
086e4e87 +0x4de7:  test   %eax,%eax
086e4e89 +0x4de9:  jne    086e4ea0 <+0x4e00>
086e4e8b +0x4deb:  mov    %ebx,%eax
086e4e8d +0x4ded:  mov    -0x8(%ebp),%esi
086e4e90 +0x4df0:  mov    -0xc(%ebp),%ebx
086e4e93 +0x4df3:  mov    -0x4(%ebp),%edi
086e4e96 +0x4df6:  mov    %ebp,%esp
086e4e98 +0x4df8:  pop    %ebp
086e4e99 +0x4df9:  ret
086e4e9a +0x4dfa:  lea    0x0(%esi),%esi
086e4ea0 +0x4e00:  mov    (%ebx),%edx
086e4ea2 +0x4e02:  mov    -0xc(%edx),%edx
086e4ea5 +0x4e05:  lea    (%ebx,%edx,1),%edx
086e4ea8 +0x4e08:  or     0x14(%edx),%eax
086e4eab +0x4e0b:  mov    %edx,(%esp)
086e4eae +0x4e0e:  mov    %eax,0x4(%esp)
086e4eb2 +0x4e12:  call   086e0da0 <+0xd00>
086e4eb7 +0x4e17:  mov    %ebx,%eax
086e4eb9 +0x4e19:  mov    -0x8(%ebp),%esi
086e4ebc +0x4e1c:  mov    -0xc(%ebp),%ebx
086e4ebf +0x4e1f:  mov    -0x4(%ebp),%edi
086e4ec2 +0x4e22:  mov    %ebp,%esp
086e4ec4 +0x4e24:  pop    %ebp
086e4ec5 +0x4e25:  ret
086e4ec6 +0x4e26:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e4ecb +0x4e2b:  cmp    $0x2,%edx
086e4ece +0x4e2e:  je     086e4ef7 <+0x4e57>
086e4ed0 +0x4e30:  mov    %eax,(%esp)
086e4ed3 +0x4e33:  call   08725ce0 <__cxa_begin_catch>
086e4ed8 +0x4e38:  movl   $0x1,0x4(%esp)
086e4ee0 +0x4e40:  mov    (%ebx),%eax
086e4ee2 +0x4e42:  mov    -0xc(%eax),%eax
086e4ee5 +0x4e45:  lea    (%ebx,%eax,1),%eax
086e4ee8 +0x4e48:  mov    %eax,(%esp)
086e4eeb +0x4e4b:  call   086e0cd0 <+0xc30>
086e4ef0 +0x4e50:  call   08725c30 <__cxa_end_catch>
086e4ef5 +0x4e55:  jmp    086e4e84 <+0x4de4>
086e4ef7 +0x4e57:  mov    %eax,(%esp)
086e4efa +0x4e5a:  call   08725ce0 <__cxa_begin_catch>
086e4eff +0x4e5f:  movl   $0x1,0x4(%esp)
086e4f07 +0x4e67:  mov    (%ebx),%eax
086e4f09 +0x4e69:  add    -0xc(%eax),%ebx
086e4f0c +0x4e6c:  mov    %ebx,(%esp)
086e4f0f +0x4e6f:  call   086e0cd0 <+0xc30>
086e4f14 +0x4e74:  call   08724be0 <__cxa_rethrow>
086e4f19 +0x4e79:  mov    %eax,%esi
086e4f1b +0x4e7b:  call   08725c30 <__cxa_end_catch>
086e4f20 +0x4e80:  mov    %esi,(%esp)
086e4f23 +0x4e83:  call   08ae3750 <_Unwind_Resume>
086e4f28 +0x4e88:  jmp    086e4f19 <+0x4e79>
086e4f2a +0x4e8a:  nop
086e4f2b +0x4e8b:  nop
086e4f2c +0x4e8c:  nop
086e4f2d +0x4e8d:  nop
086e4f2e +0x4e8e:  nop
086e4f2f +0x4e8f:  nop
086e4f30 +0x4e90:  push   %ebp
086e4f31 +0x4e91:  mov    %esp,%ebp
086e4f33 +0x4e93:  sub    $0x8,%esp
086e4f36 +0x4e96:  leave
086e4f37 +0x4e97:  jmp    086e4df0 <+0x4d50>
086e4f3c +0x4e9c:  nop
086e4f3d +0x4e9d:  nop
086e4f3e +0x4e9e:  nop
086e4f3f +0x4e9f:  nop
086e4f40 +0x4ea0:  push   %ebp
086e4f41 +0x4ea1:  mov    %esp,%ebp
086e4f43 +0x4ea3:  sub    $0x68,%esp
086e4f46 +0x4ea6:  mov    %ebx,-0xc(%ebp)
086e4f49 +0x4ea9:  mov    0x8(%ebp),%ebx
086e4f4c +0x4eac:  lea    -0x19(%ebp),%eax
086e4f4f +0x4eaf:  mov    %esi,-0x8(%ebp)
086e4f52 +0x4eb2:  mov    %edi,-0x4(%ebp)
086e4f55 +0x4eb5:  movl   $0x0,0x8(%esp)
086e4f5d +0x4ebd:  mov    %ebx,0x4(%esp)
086e4f61 +0x4ec1:  mov    %eax,(%esp)
086e4f64 +0x4ec4:  call   086e4760 <+0x46c0>
086e4f69 +0x4ec9:  cmpb   $0x0,-0x19(%ebp)
086e4f6d +0x4ecd:  je     086e4fdb <+0x4f3b>
086e4f6f +0x4ecf:  mov    (%ebx),%eax
086e4f71 +0x4ed1:  movl   $0x0,-0x20(%ebp)
086e4f78 +0x4ed8:  mov    -0xc(%eax),%edx
086e4f7b +0x4edb:  add    %ebx,%edx
086e4f7d +0x4edd:  mov    0x84(%edx),%eax
086e4f83 +0x4ee3:  test   %eax,%eax
086e4f85 +0x4ee5:  je     086e5016 <+0x4f76>
086e4f8b +0x4eeb:  mov    (%eax),%edi
086e4f8d +0x4eed:  lea    -0x30(%ebp),%ecx
086e4f90 +0x4ef0:  mov    0x78(%edx),%esi
086e4f93 +0x4ef3:  mov    %eax,0x4(%esp)
086e4f97 +0x4ef7:  mov    %edx,0x18(%esp)
086e4f9b +0x4efb:  mov    %edi,-0x34(%ebp)
086e4f9e +0x4efe:  mov    0xc(%ebp),%edi
086e4fa1 +0x4f01:  mov    -0x34(%ebp),%eax
086e4fa4 +0x4f04:  movl   $0x0,0x10(%esp)
086e4fac +0x4f0c:  movl   $0xffffffff,0x14(%esp)
086e4fb4 +0x4f14:  mov    %edi,0x20(%esp)
086e4fb8 +0x4f18:  lea    -0x20(%ebp),%edi
086e4fbb +0x4f1b:  mov    %edi,0x1c(%esp)
086e4fbf +0x4f1f:  mov    %esi,0x8(%esp)
086e4fc3 +0x4f23:  movl   $0xffffffff,0xc(%esp)
086e4fcb +0x4f2b:  mov    %ecx,(%esp)
086e4fce +0x4f2e:  call   *0x1c(%eax)
086e4fd1 +0x4f31:  sub    $0x4,%esp
086e4fd4 +0x4f34:  mov    -0x20(%ebp),%eax
086e4fd7 +0x4f37:  test   %eax,%eax
086e4fd9 +0x4f39:  jne    086e4ff0 <+0x4f50>
086e4fdb +0x4f3b:  mov    %ebx,%eax
086e4fdd +0x4f3d:  mov    -0x8(%ebp),%esi
086e4fe0 +0x4f40:  mov    -0xc(%ebp),%ebx
086e4fe3 +0x4f43:  mov    -0x4(%ebp),%edi
086e4fe6 +0x4f46:  mov    %ebp,%esp
086e4fe8 +0x4f48:  pop    %ebp
086e4fe9 +0x4f49:  ret
086e4fea +0x4f4a:  lea    0x0(%esi),%esi
086e4ff0 +0x4f50:  mov    (%ebx),%edx
086e4ff2 +0x4f52:  mov    -0xc(%edx),%edx
086e4ff5 +0x4f55:  lea    (%ebx,%edx,1),%edx
086e4ff8 +0x4f58:  or     0x14(%edx),%eax
086e4ffb +0x4f5b:  mov    %edx,(%esp)
086e4ffe +0x4f5e:  mov    %eax,0x4(%esp)
086e5002 +0x4f62:  call   086e0da0 <+0xd00>
086e5007 +0x4f67:  mov    %ebx,%eax
086e5009 +0x4f69:  mov    -0x8(%ebp),%esi
086e500c +0x4f6c:  mov    -0xc(%ebp),%ebx
086e500f +0x4f6f:  mov    -0x4(%ebp),%edi
086e5012 +0x4f72:  mov    %ebp,%esp
086e5014 +0x4f74:  pop    %ebp
086e5015 +0x4f75:  ret
086e5016 +0x4f76:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e501b +0x4f7b:  cmp    $0x2,%edx
086e501e +0x4f7e:  je     086e5047 <+0x4fa7>
086e5020 +0x4f80:  mov    %eax,(%esp)
086e5023 +0x4f83:  call   08725ce0 <__cxa_begin_catch>
086e5028 +0x4f88:  movl   $0x1,0x4(%esp)
086e5030 +0x4f90:  mov    (%ebx),%eax
086e5032 +0x4f92:  mov    -0xc(%eax),%eax
086e5035 +0x4f95:  lea    (%ebx,%eax,1),%eax
086e5038 +0x4f98:  mov    %eax,(%esp)
086e503b +0x4f9b:  call   086e0cd0 <+0xc30>
086e5040 +0x4fa0:  call   08725c30 <__cxa_end_catch>
086e5045 +0x4fa5:  jmp    086e4fd4 <+0x4f34>
086e5047 +0x4fa7:  mov    %eax,(%esp)
086e504a +0x4faa:  call   08725ce0 <__cxa_begin_catch>
086e504f +0x4faf:  movl   $0x1,0x4(%esp)
086e5057 +0x4fb7:  mov    (%ebx),%eax
086e5059 +0x4fb9:  add    -0xc(%eax),%ebx
086e505c +0x4fbc:  mov    %ebx,(%esp)
086e505f +0x4fbf:  call   086e0cd0 <+0xc30>
086e5064 +0x4fc4:  call   08724be0 <__cxa_rethrow>
086e5069 +0x4fc9:  mov    %eax,%esi
086e506b +0x4fcb:  call   08725c30 <__cxa_end_catch>
086e5070 +0x4fd0:  mov    %esi,(%esp)
086e5073 +0x4fd3:  call   08ae3750 <_Unwind_Resume>
086e5078 +0x4fd8:  jmp    086e5069 <+0x4fc9>
086e507a +0x4fda:  nop
086e507b +0x4fdb:  nop
086e507c +0x4fdc:  nop
086e507d +0x4fdd:  nop
086e507e +0x4fde:  nop
086e507f +0x4fdf:  nop
086e5080 +0x4fe0:  push   %ebp
086e5081 +0x4fe1:  mov    %esp,%ebp
086e5083 +0x4fe3:  sub    $0x8,%esp
086e5086 +0x4fe6:  leave
086e5087 +0x4fe7:  jmp    086e4f40 <+0x4ea0>
086e508c +0x4fec:  nop
086e508d +0x4fed:  nop
086e508e +0x4fee:  nop
086e508f +0x4fef:  nop
086e5090 +0x4ff0:  push   %ebp
086e5091 +0x4ff1:  mov    %esp,%ebp
086e5093 +0x4ff3:  sub    $0x68,%esp
086e5096 +0x4ff6:  mov    %ebx,-0xc(%ebp)
086e5099 +0x4ff9:  mov    0x8(%ebp),%ebx
086e509c +0x4ffc:  lea    -0x19(%ebp),%eax
086e509f +0x4fff:  mov    %esi,-0x8(%ebp)
086e50a2 +0x5002:  mov    %edi,-0x4(%ebp)
086e50a5 +0x5005:  movl   $0x0,0x8(%esp)
086e50ad +0x500d:  mov    %ebx,0x4(%esp)
086e50b1 +0x5011:  mov    %eax,(%esp)
086e50b4 +0x5014:  call   086e4760 <+0x46c0>
086e50b9 +0x5019:  cmpb   $0x0,-0x19(%ebp)
086e50bd +0x501d:  je     086e512b <+0x508b>
086e50bf +0x501f:  mov    (%ebx),%eax
086e50c1 +0x5021:  movl   $0x0,-0x20(%ebp)
086e50c8 +0x5028:  mov    -0xc(%eax),%edx
086e50cb +0x502b:  add    %ebx,%edx
086e50cd +0x502d:  mov    0x84(%edx),%eax
086e50d3 +0x5033:  test   %eax,%eax
086e50d5 +0x5035:  je     086e5166 <+0x50c6>
086e50db +0x503b:  mov    (%eax),%edi
086e50dd +0x503d:  lea    -0x30(%ebp),%ecx
086e50e0 +0x5040:  mov    0x78(%edx),%esi
086e50e3 +0x5043:  mov    %eax,0x4(%esp)
086e50e7 +0x5047:  mov    %edx,0x18(%esp)
086e50eb +0x504b:  mov    %edi,-0x34(%ebp)
086e50ee +0x504e:  mov    0xc(%ebp),%edi
086e50f1 +0x5051:  mov    -0x34(%ebp),%eax
086e50f4 +0x5054:  movl   $0x0,0x10(%esp)
086e50fc +0x505c:  movl   $0xffffffff,0x14(%esp)
086e5104 +0x5064:  mov    %edi,0x20(%esp)
086e5108 +0x5068:  lea    -0x20(%ebp),%edi
086e510b +0x506b:  mov    %edi,0x1c(%esp)
086e510f +0x506f:  mov    %esi,0x8(%esp)
086e5113 +0x5073:  movl   $0xffffffff,0xc(%esp)
086e511b +0x507b:  mov    %ecx,(%esp)
086e511e +0x507e:  call   *0x8(%eax)
086e5121 +0x5081:  sub    $0x4,%esp
086e5124 +0x5084:  mov    -0x20(%ebp),%eax
086e5127 +0x5087:  test   %eax,%eax
086e5129 +0x5089:  jne    086e5140 <+0x50a0>
086e512b +0x508b:  mov    %ebx,%eax
086e512d +0x508d:  mov    -0x8(%ebp),%esi
086e5130 +0x5090:  mov    -0xc(%ebp),%ebx
086e5133 +0x5093:  mov    -0x4(%ebp),%edi
086e5136 +0x5096:  mov    %ebp,%esp
086e5138 +0x5098:  pop    %ebp
086e5139 +0x5099:  ret
086e513a +0x509a:  lea    0x0(%esi),%esi
086e5140 +0x50a0:  mov    (%ebx),%edx
086e5142 +0x50a2:  mov    -0xc(%edx),%edx
086e5145 +0x50a5:  lea    (%ebx,%edx,1),%edx
086e5148 +0x50a8:  or     0x14(%edx),%eax
086e514b +0x50ab:  mov    %edx,(%esp)
086e514e +0x50ae:  mov    %eax,0x4(%esp)
086e5152 +0x50b2:  call   086e0da0 <+0xd00>
086e5157 +0x50b7:  mov    %ebx,%eax
086e5159 +0x50b9:  mov    -0x8(%ebp),%esi
086e515c +0x50bc:  mov    -0xc(%ebp),%ebx
086e515f +0x50bf:  mov    -0x4(%ebp),%edi
086e5162 +0x50c2:  mov    %ebp,%esp
086e5164 +0x50c4:  pop    %ebp
086e5165 +0x50c5:  ret
086e5166 +0x50c6:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e516b +0x50cb:  cmp    $0x2,%edx
086e516e +0x50ce:  je     086e5197 <+0x50f7>
086e5170 +0x50d0:  mov    %eax,(%esp)
086e5173 +0x50d3:  call   08725ce0 <__cxa_begin_catch>
086e5178 +0x50d8:  movl   $0x1,0x4(%esp)
086e5180 +0x50e0:  mov    (%ebx),%eax
086e5182 +0x50e2:  mov    -0xc(%eax),%eax
086e5185 +0x50e5:  lea    (%ebx,%eax,1),%eax
086e5188 +0x50e8:  mov    %eax,(%esp)
086e518b +0x50eb:  call   086e0cd0 <+0xc30>
086e5190 +0x50f0:  call   08725c30 <__cxa_end_catch>
086e5195 +0x50f5:  jmp    086e5124 <+0x5084>
086e5197 +0x50f7:  mov    %eax,(%esp)
086e519a +0x50fa:  call   08725ce0 <__cxa_begin_catch>
086e519f +0x50ff:  movl   $0x1,0x4(%esp)
086e51a7 +0x5107:  mov    (%ebx),%eax
086e51a9 +0x5109:  add    -0xc(%eax),%ebx
086e51ac +0x510c:  mov    %ebx,(%esp)
086e51af +0x510f:  call   086e0cd0 <+0xc30>
086e51b4 +0x5114:  call   08724be0 <__cxa_rethrow>
086e51b9 +0x5119:  mov    %eax,%esi
086e51bb +0x511b:  call   08725c30 <__cxa_end_catch>
086e51c0 +0x5120:  mov    %esi,(%esp)
086e51c3 +0x5123:  call   08ae3750 <_Unwind_Resume>
086e51c8 +0x5128:  jmp    086e51b9 <+0x5119>
086e51ca +0x512a:  nop
086e51cb +0x512b:  nop
086e51cc +0x512c:  nop
086e51cd +0x512d:  nop
086e51ce +0x512e:  nop
086e51cf +0x512f:  nop
086e51d0 +0x5130:  push   %ebp
086e51d1 +0x5131:  mov    %esp,%ebp
086e51d3 +0x5133:  sub    $0x8,%esp
086e51d6 +0x5136:  leave
086e51d7 +0x5137:  jmp    086e5090 <+0x4ff0>
086e51dc +0x513c:  nop
086e51dd +0x513d:  nop
086e51de +0x513e:  nop
086e51df +0x513f:  nop
086e51e0 +0x5140:  push   %ebp
086e51e1 +0x5141:  mov    %esp,%ebp
086e51e3 +0x5143:  sub    $0x68,%esp
086e51e6 +0x5146:  mov    %ebx,-0xc(%ebp)
086e51e9 +0x5149:  mov    0x8(%ebp),%ebx
086e51ec +0x514c:  lea    -0x19(%ebp),%eax
086e51ef +0x514f:  mov    %esi,-0x8(%ebp)
086e51f2 +0x5152:  mov    %edi,-0x4(%ebp)
086e51f5 +0x5155:  movl   $0x0,0x8(%esp)
086e51fd +0x515d:  mov    %ebx,0x4(%esp)
086e5201 +0x5161:  mov    %eax,(%esp)
086e5204 +0x5164:  call   086e4760 <+0x46c0>
086e5209 +0x5169:  cmpb   $0x0,-0x19(%ebp)
086e520d +0x516d:  je     086e527b <+0x51db>
086e520f +0x516f:  mov    (%ebx),%eax
086e5211 +0x5171:  movl   $0x0,-0x20(%ebp)
086e5218 +0x5178:  mov    -0xc(%eax),%edx
086e521b +0x517b:  add    %ebx,%edx
086e521d +0x517d:  mov    0x84(%edx),%eax
086e5223 +0x5183:  test   %eax,%eax
086e5225 +0x5185:  je     086e52b6 <+0x5216>
086e522b +0x518b:  mov    (%eax),%edi
086e522d +0x518d:  lea    -0x30(%ebp),%ecx
086e5230 +0x5190:  mov    0x78(%edx),%esi
086e5233 +0x5193:  mov    %eax,0x4(%esp)
086e5237 +0x5197:  mov    %edx,0x18(%esp)
086e523b +0x519b:  mov    %edi,-0x34(%ebp)
086e523e +0x519e:  mov    0xc(%ebp),%edi
086e5241 +0x51a1:  mov    -0x34(%ebp),%eax
086e5244 +0x51a4:  movl   $0x0,0x10(%esp)
086e524c +0x51ac:  movl   $0xffffffff,0x14(%esp)
086e5254 +0x51b4:  mov    %edi,0x20(%esp)
086e5258 +0x51b8:  lea    -0x20(%ebp),%edi
086e525b +0x51bb:  mov    %edi,0x1c(%esp)
086e525f +0x51bf:  mov    %esi,0x8(%esp)
086e5263 +0x51c3:  movl   $0xffffffff,0xc(%esp)
086e526b +0x51cb:  mov    %ecx,(%esp)
086e526e +0x51ce:  call   *0x18(%eax)
086e5271 +0x51d1:  sub    $0x4,%esp
086e5274 +0x51d4:  mov    -0x20(%ebp),%eax
086e5277 +0x51d7:  test   %eax,%eax
086e5279 +0x51d9:  jne    086e5290 <+0x51f0>
086e527b +0x51db:  mov    %ebx,%eax
086e527d +0x51dd:  mov    -0x8(%ebp),%esi
086e5280 +0x51e0:  mov    -0xc(%ebp),%ebx
086e5283 +0x51e3:  mov    -0x4(%ebp),%edi
086e5286 +0x51e6:  mov    %ebp,%esp
086e5288 +0x51e8:  pop    %ebp
086e5289 +0x51e9:  ret
086e528a +0x51ea:  lea    0x0(%esi),%esi
086e5290 +0x51f0:  mov    (%ebx),%edx
086e5292 +0x51f2:  mov    -0xc(%edx),%edx
086e5295 +0x51f5:  lea    (%ebx,%edx,1),%edx
086e5298 +0x51f8:  or     0x14(%edx),%eax
086e529b +0x51fb:  mov    %edx,(%esp)
086e529e +0x51fe:  mov    %eax,0x4(%esp)
086e52a2 +0x5202:  call   086e0da0 <+0xd00>
086e52a7 +0x5207:  mov    %ebx,%eax
086e52a9 +0x5209:  mov    -0x8(%ebp),%esi
086e52ac +0x520c:  mov    -0xc(%ebp),%ebx
086e52af +0x520f:  mov    -0x4(%ebp),%edi
086e52b2 +0x5212:  mov    %ebp,%esp
086e52b4 +0x5214:  pop    %ebp
086e52b5 +0x5215:  ret
086e52b6 +0x5216:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e52bb +0x521b:  cmp    $0x2,%edx
086e52be +0x521e:  je     086e52e7 <+0x5247>
086e52c0 +0x5220:  mov    %eax,(%esp)
086e52c3 +0x5223:  call   08725ce0 <__cxa_begin_catch>
086e52c8 +0x5228:  movl   $0x1,0x4(%esp)
086e52d0 +0x5230:  mov    (%ebx),%eax
086e52d2 +0x5232:  mov    -0xc(%eax),%eax
086e52d5 +0x5235:  lea    (%ebx,%eax,1),%eax
086e52d8 +0x5238:  mov    %eax,(%esp)
086e52db +0x523b:  call   086e0cd0 <+0xc30>
086e52e0 +0x5240:  call   08725c30 <__cxa_end_catch>
086e52e5 +0x5245:  jmp    086e5274 <+0x51d4>
086e52e7 +0x5247:  mov    %eax,(%esp)
086e52ea +0x524a:  call   08725ce0 <__cxa_begin_catch>
086e52ef +0x524f:  movl   $0x1,0x4(%esp)
086e52f7 +0x5257:  mov    (%ebx),%eax
086e52f9 +0x5259:  add    -0xc(%eax),%ebx
086e52fc +0x525c:  mov    %ebx,(%esp)
086e52ff +0x525f:  call   086e0cd0 <+0xc30>
086e5304 +0x5264:  call   08724be0 <__cxa_rethrow>
086e5309 +0x5269:  mov    %eax,%esi
086e530b +0x526b:  call   08725c30 <__cxa_end_catch>
086e5310 +0x5270:  mov    %esi,(%esp)
086e5313 +0x5273:  call   08ae3750 <_Unwind_Resume>
086e5318 +0x5278:  jmp    086e5309 <+0x5269>
086e531a +0x527a:  nop
086e531b +0x527b:  nop
086e531c +0x527c:  nop
086e531d +0x527d:  nop
086e531e +0x527e:  nop
086e531f +0x527f:  nop
086e5320 +0x5280:  push   %ebp
086e5321 +0x5281:  mov    %esp,%ebp
086e5323 +0x5283:  sub    $0x8,%esp
086e5326 +0x5286:  leave
086e5327 +0x5287:  jmp    086e51e0 <+0x5140>
086e532c +0x528c:  nop
086e532d +0x528d:  nop
086e532e +0x528e:  nop
086e532f +0x528f:  nop
086e5330 +0x5290:  push   %ebp
086e5331 +0x5291:  mov    %esp,%ebp
086e5333 +0x5293:  sub    $0x68,%esp
086e5336 +0x5296:  mov    %ebx,-0xc(%ebp)
086e5339 +0x5299:  mov    0x8(%ebp),%ebx
086e533c +0x529c:  lea    -0x19(%ebp),%eax
086e533f +0x529f:  mov    %esi,-0x8(%ebp)
086e5342 +0x52a2:  mov    %edi,-0x4(%ebp)
086e5345 +0x52a5:  movl   $0x0,0x8(%esp)
086e534d +0x52ad:  mov    %ebx,0x4(%esp)
086e5351 +0x52b1:  mov    %eax,(%esp)
086e5354 +0x52b4:  call   086e4760 <+0x46c0>
086e5359 +0x52b9:  cmpb   $0x0,-0x19(%ebp)
086e535d +0x52bd:  je     086e53cb <+0x532b>
086e535f +0x52bf:  mov    (%ebx),%eax
086e5361 +0x52c1:  movl   $0x0,-0x20(%ebp)
086e5368 +0x52c8:  mov    -0xc(%eax),%edx
086e536b +0x52cb:  add    %ebx,%edx
086e536d +0x52cd:  mov    0x84(%edx),%eax
086e5373 +0x52d3:  test   %eax,%eax
086e5375 +0x52d5:  je     086e5406 <+0x5366>
086e537b +0x52db:  mov    (%eax),%edi
086e537d +0x52dd:  lea    -0x30(%ebp),%ecx
086e5380 +0x52e0:  mov    0x78(%edx),%esi
086e5383 +0x52e3:  mov    %eax,0x4(%esp)
086e5387 +0x52e7:  mov    %edx,0x18(%esp)
086e538b +0x52eb:  mov    %edi,-0x34(%ebp)
086e538e +0x52ee:  mov    0xc(%ebp),%edi
086e5391 +0x52f1:  mov    -0x34(%ebp),%eax
086e5394 +0x52f4:  movl   $0x0,0x10(%esp)
086e539c +0x52fc:  movl   $0xffffffff,0x14(%esp)
086e53a4 +0x5304:  mov    %edi,0x20(%esp)
086e53a8 +0x5308:  lea    -0x20(%ebp),%edi
086e53ab +0x530b:  mov    %edi,0x1c(%esp)
086e53af +0x530f:  mov    %esi,0x8(%esp)
086e53b3 +0x5313:  movl   $0xffffffff,0xc(%esp)
086e53bb +0x531b:  mov    %ecx,(%esp)
086e53be +0x531e:  call   *0xc(%eax)
086e53c1 +0x5321:  sub    $0x4,%esp
086e53c4 +0x5324:  mov    -0x20(%ebp),%eax
086e53c7 +0x5327:  test   %eax,%eax
086e53c9 +0x5329:  jne    086e53e0 <+0x5340>
086e53cb +0x532b:  mov    %ebx,%eax
086e53cd +0x532d:  mov    -0x8(%ebp),%esi
086e53d0 +0x5330:  mov    -0xc(%ebp),%ebx
086e53d3 +0x5333:  mov    -0x4(%ebp),%edi
086e53d6 +0x5336:  mov    %ebp,%esp
086e53d8 +0x5338:  pop    %ebp
086e53d9 +0x5339:  ret
086e53da +0x533a:  lea    0x0(%esi),%esi
086e53e0 +0x5340:  mov    (%ebx),%edx
086e53e2 +0x5342:  mov    -0xc(%edx),%edx
086e53e5 +0x5345:  lea    (%ebx,%edx,1),%edx
086e53e8 +0x5348:  or     0x14(%edx),%eax
086e53eb +0x534b:  mov    %edx,(%esp)
086e53ee +0x534e:  mov    %eax,0x4(%esp)
086e53f2 +0x5352:  call   086e0da0 <+0xd00>
086e53f7 +0x5357:  mov    %ebx,%eax
086e53f9 +0x5359:  mov    -0x8(%ebp),%esi
086e53fc +0x535c:  mov    -0xc(%ebp),%ebx
086e53ff +0x535f:  mov    -0x4(%ebp),%edi
086e5402 +0x5362:  mov    %ebp,%esp
086e5404 +0x5364:  pop    %ebp
086e5405 +0x5365:  ret
086e5406 +0x5366:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e540b +0x536b:  cmp    $0x2,%edx
086e540e +0x536e:  je     086e5437 <+0x5397>
086e5410 +0x5370:  mov    %eax,(%esp)
086e5413 +0x5373:  call   08725ce0 <__cxa_begin_catch>
086e5418 +0x5378:  movl   $0x1,0x4(%esp)
086e5420 +0x5380:  mov    (%ebx),%eax
086e5422 +0x5382:  mov    -0xc(%eax),%eax
086e5425 +0x5385:  lea    (%ebx,%eax,1),%eax
086e5428 +0x5388:  mov    %eax,(%esp)
086e542b +0x538b:  call   086e0cd0 <+0xc30>
086e5430 +0x5390:  call   08725c30 <__cxa_end_catch>
086e5435 +0x5395:  jmp    086e53c4 <+0x5324>
086e5437 +0x5397:  mov    %eax,(%esp)
086e543a +0x539a:  call   08725ce0 <__cxa_begin_catch>
086e543f +0x539f:  movl   $0x1,0x4(%esp)
086e5447 +0x53a7:  mov    (%ebx),%eax
086e5449 +0x53a9:  add    -0xc(%eax),%ebx
086e544c +0x53ac:  mov    %ebx,(%esp)
086e544f +0x53af:  call   086e0cd0 <+0xc30>
086e5454 +0x53b4:  call   08724be0 <__cxa_rethrow>
086e5459 +0x53b9:  mov    %eax,%esi
086e545b +0x53bb:  call   08725c30 <__cxa_end_catch>
086e5460 +0x53c0:  mov    %esi,(%esp)
086e5463 +0x53c3:  call   08ae3750 <_Unwind_Resume>
086e5468 +0x53c8:  jmp    086e5459 <+0x53b9>
086e546a +0x53ca:  nop
086e546b +0x53cb:  nop
086e546c +0x53cc:  nop
086e546d +0x53cd:  nop
086e546e +0x53ce:  nop
086e546f +0x53cf:  nop
086e5470 +0x53d0:  push   %ebp
086e5471 +0x53d1:  mov    %esp,%ebp
086e5473 +0x53d3:  sub    $0x8,%esp
086e5476 +0x53d6:  leave
086e5477 +0x53d7:  jmp    086e5330 <+0x5290>
086e547c +0x53dc:  nop
086e547d +0x53dd:  nop
086e547e +0x53de:  nop
086e547f +0x53df:  nop
086e5480 +0x53e0:  push   %ebp
086e5481 +0x53e1:  mov    %esp,%ebp
086e5483 +0x53e3:  push   %ebx
086e5484 +0x53e4:  sub    $0x24,%esp
086e5487 +0x53e7:  mov    0x8(%ebp),%ebx
086e548a +0x53ea:  lea    -0xc(%ebp),%eax
086e548d +0x53ed:  mov    %eax,0x4(%esp)
086e5491 +0x53f1:  mov    %ebx,(%esp)
086e5494 +0x53f4:  call   086e5330 <+0x5290>
086e5499 +0x53f9:  mov    (%ebx),%eax
086e549b +0x53fb:  mov    -0xc(%eax),%eax
086e549e +0x53fe:  testb  $0x5,0x14(%ebx,%eax,1)
086e54a3 +0x5403:  jne    086e54ad <+0x540d>
086e54a5 +0x5405:  mov    -0xc(%ebp),%edx
086e54a8 +0x5408:  mov    0xc(%ebp),%eax
086e54ab +0x540b:  mov    %edx,(%eax)
086e54ad +0x540d:  mov    %ebx,%eax
086e54af +0x540f:  add    $0x24,%esp
086e54b2 +0x5412:  pop    %ebx
086e54b3 +0x5413:  pop    %ebp
086e54b4 +0x5414:  ret
086e54b5 +0x5415:  nop
086e54b6 +0x5416:  nop
086e54b7 +0x5417:  nop
086e54b8 +0x5418:  nop
086e54b9 +0x5419:  nop
086e54ba +0x541a:  nop
086e54bb +0x541b:  nop
086e54bc +0x541c:  nop
086e54bd +0x541d:  nop
086e54be +0x541e:  nop
086e54bf +0x541f:  nop
086e54c0 +0x5420:  push   %ebp
086e54c1 +0x5421:  mov    %esp,%ebp
086e54c3 +0x5423:  sub    $0x28,%esp
086e54c6 +0x5426:  mov    %ebx,-0x8(%ebp)
086e54c9 +0x5429:  mov    0x8(%ebp),%ebx
086e54cc +0x542c:  lea    -0xc(%ebp),%eax
086e54cf +0x542f:  mov    %esi,-0x4(%ebp)
086e54d2 +0x5432:  mov    %eax,0x4(%esp)
086e54d6 +0x5436:  mov    %ebx,(%esp)
086e54d9 +0x5439:  call   086e5330 <+0x5290>
086e54de +0x543e:  mov    (%ebx),%eax
086e54e0 +0x5440:  mov    -0xc(%eax),%eax
086e54e3 +0x5443:  lea    (%ebx,%eax,1),%eax
086e54e6 +0x5446:  mov    0x14(%eax),%edx
086e54e9 +0x5449:  test   $0x5,%dl
086e54ec +0x544c:  jne    086e5505 <+0x5465>
086e54ee +0x544e:  mov    -0xc(%ebp),%ecx
086e54f1 +0x5451:  lea    0x8000(%ecx),%esi
086e54f7 +0x5457:  cmp    $0xffff,%esi
086e54fd +0x545d:  ja     086e5518 <+0x5478>
086e54ff +0x545f:  mov    0xc(%ebp),%eax
086e5502 +0x5462:  mov    %cx,(%eax)
086e5505 +0x5465:  mov    %ebx,%eax
086e5507 +0x5467:  mov    -0x4(%ebp),%esi
086e550a +0x546a:  mov    -0x8(%ebp),%ebx
086e550d +0x546d:  mov    %ebp,%esp
086e550f +0x546f:  pop    %ebp
086e5510 +0x5470:  ret
086e5511 +0x5471:  lea    0x0(%esi,%eiz,1),%esi
086e5518 +0x5478:  or     $0x4,%edx
086e551b +0x547b:  mov    %eax,(%esp)
086e551e +0x547e:  mov    %edx,0x4(%esp)
086e5522 +0x5482:  call   086e0da0 <+0xd00>
086e5527 +0x5487:  mov    %ebx,%eax
086e5529 +0x5489:  mov    -0x4(%ebp),%esi
086e552c +0x548c:  mov    -0x8(%ebp),%ebx
086e552f +0x548f:  mov    %ebp,%esp
086e5531 +0x5491:  pop    %ebp
086e5532 +0x5492:  ret
086e5533 +0x5493:  nop
086e5534 +0x5494:  nop
086e5535 +0x5495:  nop
086e5536 +0x5496:  nop
086e5537 +0x5497:  nop
086e5538 +0x5498:  nop
086e5539 +0x5499:  nop
086e553a +0x549a:  nop
086e553b +0x549b:  nop
086e553c +0x549c:  nop
086e553d +0x549d:  nop
086e553e +0x549e:  nop
086e553f +0x549f:  nop
086e5540 +0x54a0:  push   %ebp
086e5541 +0x54a1:  mov    %esp,%ebp
086e5543 +0x54a3:  sub    $0x68,%esp
086e5546 +0x54a6:  mov    %ebx,-0xc(%ebp)
086e5549 +0x54a9:  mov    0x8(%ebp),%ebx
086e554c +0x54ac:  lea    -0x19(%ebp),%eax
086e554f +0x54af:  mov    %esi,-0x8(%ebp)
086e5552 +0x54b2:  mov    %edi,-0x4(%ebp)
086e5555 +0x54b5:  movl   $0x0,0x8(%esp)
086e555d +0x54bd:  mov    %ebx,0x4(%esp)
086e5561 +0x54c1:  mov    %eax,(%esp)
086e5564 +0x54c4:  call   086e4760 <+0x46c0>
086e5569 +0x54c9:  cmpb   $0x0,-0x19(%ebp)
086e556d +0x54cd:  je     086e55db <+0x553b>
086e556f +0x54cf:  mov    (%ebx),%eax
086e5571 +0x54d1:  movl   $0x0,-0x20(%ebp)
086e5578 +0x54d8:  mov    -0xc(%eax),%edx
086e557b +0x54db:  add    %ebx,%edx
086e557d +0x54dd:  mov    0x84(%edx),%eax
086e5583 +0x54e3:  test   %eax,%eax
086e5585 +0x54e5:  je     086e5616 <+0x5576>
086e558b +0x54eb:  mov    (%eax),%edi
086e558d +0x54ed:  lea    -0x30(%ebp),%ecx
086e5590 +0x54f0:  mov    0x78(%edx),%esi
086e5593 +0x54f3:  mov    %eax,0x4(%esp)
086e5597 +0x54f7:  mov    %edx,0x18(%esp)
086e559b +0x54fb:  mov    %edi,-0x34(%ebp)
086e559e +0x54fe:  mov    0xc(%ebp),%edi
086e55a1 +0x5501:  mov    -0x34(%ebp),%eax
086e55a4 +0x5504:  movl   $0x0,0x10(%esp)
086e55ac +0x550c:  movl   $0xffffffff,0x14(%esp)
086e55b4 +0x5514:  mov    %edi,0x20(%esp)
086e55b8 +0x5518:  lea    -0x20(%ebp),%edi
086e55bb +0x551b:  mov    %edi,0x1c(%esp)
086e55bf +0x551f:  mov    %esi,0x8(%esp)
086e55c3 +0x5523:  movl   $0xffffffff,0xc(%esp)
086e55cb +0x552b:  mov    %ecx,(%esp)
086e55ce +0x552e:  call   *0x14(%eax)
086e55d1 +0x5531:  sub    $0x4,%esp
086e55d4 +0x5534:  mov    -0x20(%ebp),%eax
086e55d7 +0x5537:  test   %eax,%eax
086e55d9 +0x5539:  jne    086e55f0 <+0x5550>
086e55db +0x553b:  mov    %ebx,%eax
086e55dd +0x553d:  mov    -0x8(%ebp),%esi
086e55e0 +0x5540:  mov    -0xc(%ebp),%ebx
086e55e3 +0x5543:  mov    -0x4(%ebp),%edi
086e55e6 +0x5546:  mov    %ebp,%esp
086e55e8 +0x5548:  pop    %ebp
086e55e9 +0x5549:  ret
086e55ea +0x554a:  lea    0x0(%esi),%esi
086e55f0 +0x5550:  mov    (%ebx),%edx
086e55f2 +0x5552:  mov    -0xc(%edx),%edx
086e55f5 +0x5555:  lea    (%ebx,%edx,1),%edx
086e55f8 +0x5558:  or     0x14(%edx),%eax
086e55fb +0x555b:  mov    %edx,(%esp)
086e55fe +0x555e:  mov    %eax,0x4(%esp)
086e5602 +0x5562:  call   086e0da0 <+0xd00>
086e5607 +0x5567:  mov    %ebx,%eax
086e5609 +0x5569:  mov    -0x8(%ebp),%esi
086e560c +0x556c:  mov    -0xc(%ebp),%ebx
086e560f +0x556f:  mov    -0x4(%ebp),%edi
086e5612 +0x5572:  mov    %ebp,%esp
086e5614 +0x5574:  pop    %ebp
086e5615 +0x5575:  ret
086e5616 +0x5576:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e561b +0x557b:  cmp    $0x2,%edx
086e561e +0x557e:  je     086e5647 <+0x55a7>
086e5620 +0x5580:  mov    %eax,(%esp)
086e5623 +0x5583:  call   08725ce0 <__cxa_begin_catch>
086e5628 +0x5588:  movl   $0x1,0x4(%esp)
086e5630 +0x5590:  mov    (%ebx),%eax
086e5632 +0x5592:  mov    -0xc(%eax),%eax
086e5635 +0x5595:  lea    (%ebx,%eax,1),%eax
086e5638 +0x5598:  mov    %eax,(%esp)
086e563b +0x559b:  call   086e0cd0 <+0xc30>
086e5640 +0x55a0:  call   08725c30 <__cxa_end_catch>
086e5645 +0x55a5:  jmp    086e55d4 <+0x5534>
086e5647 +0x55a7:  mov    %eax,(%esp)
086e564a +0x55aa:  call   08725ce0 <__cxa_begin_catch>
086e564f +0x55af:  movl   $0x1,0x4(%esp)
086e5657 +0x55b7:  mov    (%ebx),%eax
086e5659 +0x55b9:  add    -0xc(%eax),%ebx
086e565c +0x55bc:  mov    %ebx,(%esp)
086e565f +0x55bf:  call   086e0cd0 <+0xc30>
086e5664 +0x55c4:  call   08724be0 <__cxa_rethrow>
086e5669 +0x55c9:  mov    %eax,%esi
086e566b +0x55cb:  call   08725c30 <__cxa_end_catch>
086e5670 +0x55d0:  mov    %esi,(%esp)
086e5673 +0x55d3:  call   08ae3750 <_Unwind_Resume>
086e5678 +0x55d8:  jmp    086e5669 <+0x55c9>
086e567a +0x55da:  nop
086e567b +0x55db:  nop
086e567c +0x55dc:  nop
086e567d +0x55dd:  nop
086e567e +0x55de:  nop
086e567f +0x55df:  nop
086e5680 +0x55e0:  push   %ebp
086e5681 +0x55e1:  mov    %esp,%ebp
086e5683 +0x55e3:  sub    $0x8,%esp
086e5686 +0x55e6:  leave
086e5687 +0x55e7:  jmp    086e5540 <+0x54a0>
086e568c +0x55ec:  nop
086e568d +0x55ed:  nop
086e568e +0x55ee:  nop
086e568f +0x55ef:  nop
086e5690 +0x55f0:  push   %ebp
086e5691 +0x55f1:  mov    %esp,%ebp
086e5693 +0x55f3:  sub    $0x68,%esp
086e5696 +0x55f6:  mov    %ebx,-0xc(%ebp)
086e5699 +0x55f9:  mov    0x8(%ebp),%ebx
086e569c +0x55fc:  lea    -0x19(%ebp),%eax
086e569f +0x55ff:  mov    %esi,-0x8(%ebp)
086e56a2 +0x5602:  mov    %edi,-0x4(%ebp)
086e56a5 +0x5605:  movl   $0x0,0x8(%esp)
086e56ad +0x560d:  mov    %ebx,0x4(%esp)
086e56b1 +0x5611:  mov    %eax,(%esp)
086e56b4 +0x5614:  call   086e4760 <+0x46c0>
086e56b9 +0x5619:  cmpb   $0x0,-0x19(%ebp)
086e56bd +0x561d:  je     086e572b <+0x568b>
086e56bf +0x561f:  mov    (%ebx),%eax
086e56c1 +0x5621:  movl   $0x0,-0x20(%ebp)
086e56c8 +0x5628:  mov    -0xc(%eax),%edx
086e56cb +0x562b:  add    %ebx,%edx
086e56cd +0x562d:  mov    0x84(%edx),%eax
086e56d3 +0x5633:  test   %eax,%eax
086e56d5 +0x5635:  je     086e5766 <+0x56c6>
086e56db +0x563b:  mov    (%eax),%edi
086e56dd +0x563d:  lea    -0x30(%ebp),%ecx
086e56e0 +0x5640:  mov    0x78(%edx),%esi
086e56e3 +0x5643:  mov    %eax,0x4(%esp)
086e56e7 +0x5647:  mov    %edx,0x18(%esp)
086e56eb +0x564b:  mov    %edi,-0x34(%ebp)
086e56ee +0x564e:  mov    0xc(%ebp),%edi
086e56f1 +0x5651:  mov    -0x34(%ebp),%eax
086e56f4 +0x5654:  movl   $0x0,0x10(%esp)
086e56fc +0x565c:  movl   $0xffffffff,0x14(%esp)
086e5704 +0x5664:  mov    %edi,0x20(%esp)
086e5708 +0x5668:  lea    -0x20(%ebp),%edi
086e570b +0x566b:  mov    %edi,0x1c(%esp)
086e570f +0x566f:  mov    %esi,0x8(%esp)
086e5713 +0x5673:  movl   $0xffffffff,0xc(%esp)
086e571b +0x567b:  mov    %ecx,(%esp)
086e571e +0x567e:  call   *0x10(%eax)
086e5721 +0x5681:  sub    $0x4,%esp
086e5724 +0x5684:  mov    -0x20(%ebp),%eax
086e5727 +0x5687:  test   %eax,%eax
086e5729 +0x5689:  jne    086e5740 <+0x56a0>
086e572b +0x568b:  mov    %ebx,%eax
086e572d +0x568d:  mov    -0x8(%ebp),%esi
086e5730 +0x5690:  mov    -0xc(%ebp),%ebx
086e5733 +0x5693:  mov    -0x4(%ebp),%edi
086e5736 +0x5696:  mov    %ebp,%esp
086e5738 +0x5698:  pop    %ebp
086e5739 +0x5699:  ret
086e573a +0x569a:  lea    0x0(%esi),%esi
086e5740 +0x56a0:  mov    (%ebx),%edx
086e5742 +0x56a2:  mov    -0xc(%edx),%edx
086e5745 +0x56a5:  lea    (%ebx,%edx,1),%edx
086e5748 +0x56a8:  or     0x14(%edx),%eax
086e574b +0x56ab:  mov    %edx,(%esp)
086e574e +0x56ae:  mov    %eax,0x4(%esp)
086e5752 +0x56b2:  call   086e0da0 <+0xd00>
086e5757 +0x56b7:  mov    %ebx,%eax
086e5759 +0x56b9:  mov    -0x8(%ebp),%esi
086e575c +0x56bc:  mov    -0xc(%ebp),%ebx
086e575f +0x56bf:  mov    -0x4(%ebp),%edi
086e5762 +0x56c2:  mov    %ebp,%esp
086e5764 +0x56c4:  pop    %ebp
086e5765 +0x56c5:  ret
086e5766 +0x56c6:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e576b +0x56cb:  cmp    $0x2,%edx
086e576e +0x56ce:  je     086e5797 <+0x56f7>
086e5770 +0x56d0:  mov    %eax,(%esp)
086e5773 +0x56d3:  call   08725ce0 <__cxa_begin_catch>
086e5778 +0x56d8:  movl   $0x1,0x4(%esp)
086e5780 +0x56e0:  mov    (%ebx),%eax
086e5782 +0x56e2:  mov    -0xc(%eax),%eax
086e5785 +0x56e5:  lea    (%ebx,%eax,1),%eax
086e5788 +0x56e8:  mov    %eax,(%esp)
086e578b +0x56eb:  call   086e0cd0 <+0xc30>
086e5790 +0x56f0:  call   08725c30 <__cxa_end_catch>
086e5795 +0x56f5:  jmp    086e5724 <+0x5684>
086e5797 +0x56f7:  mov    %eax,(%esp)
086e579a +0x56fa:  call   08725ce0 <__cxa_begin_catch>
086e579f +0x56ff:  movl   $0x1,0x4(%esp)
086e57a7 +0x5707:  mov    (%ebx),%eax
086e57a9 +0x5709:  add    -0xc(%eax),%ebx
086e57ac +0x570c:  mov    %ebx,(%esp)
086e57af +0x570f:  call   086e0cd0 <+0xc30>
086e57b4 +0x5714:  call   08724be0 <__cxa_rethrow>
086e57b9 +0x5719:  mov    %eax,%esi
086e57bb +0x571b:  call   08725c30 <__cxa_end_catch>
086e57c0 +0x5720:  mov    %esi,(%esp)
086e57c3 +0x5723:  call   08ae3750 <_Unwind_Resume>
086e57c8 +0x5728:  jmp    086e57b9 <+0x5719>
086e57ca +0x572a:  nop
086e57cb +0x572b:  nop
086e57cc +0x572c:  nop
086e57cd +0x572d:  nop
086e57ce +0x572e:  nop
086e57cf +0x572f:  nop
086e57d0 +0x5730:  push   %ebp
086e57d1 +0x5731:  mov    %esp,%ebp
086e57d3 +0x5733:  sub    $0x8,%esp
086e57d6 +0x5736:  leave
086e57d7 +0x5737:  jmp    086e5690 <+0x55f0>
086e57dc +0x573c:  nop
086e57dd +0x573d:  nop
086e57de +0x573e:  nop
086e57df +0x573f:  nop
086e57e0 +0x5740:  push   %ebp
086e57e1 +0x5741:  mov    %esp,%ebp
086e57e3 +0x5743:  push   %ebx
086e57e4 +0x5744:  sub    $0x34,%esp
086e57e7 +0x5747:  mov    0x8(%ebp),%ebx
086e57ea +0x574a:  lea    -0x9(%ebp),%eax
086e57ed +0x574d:  mov    %eax,(%esp)
086e57f0 +0x5750:  movl   $0x1,0x8(%esp)
086e57f8 +0x5758:  mov    %ebx,0x4(%esp)
086e57fc +0x575c:  call   086e4760 <+0x46c0>
086e5801 +0x5761:  mov    $0xffffffff,%eax
086e5806 +0x5766:  cmpb   $0x0,-0x9(%ebp)
086e580a +0x576a:  je     086e582f <+0x578f>
086e580c +0x576c:  mov    (%ebx),%eax
086e580e +0x576e:  mov    -0xc(%eax),%eax
086e5811 +0x5771:  mov    0x78(%ebx,%eax,1),%edx
086e5815 +0x5775:  mov    $0xffffffff,%eax
086e581a +0x577a:  test   %edx,%edx
086e581c +0x577c:  je     086e582f <+0x578f>
086e581e +0x577e:  mov    (%edx),%eax
086e5820 +0x5780:  mov    %edx,(%esp)
086e5823 +0x5783:  call   *0x18(%eax)
086e5826 +0x5786:  mov    %eax,%edx
086e5828 +0x5788:  xor    %eax,%eax
086e582a +0x578a:  cmp    $0xffffffff,%edx
086e582d +0x578d:  je     086e5838 <+0x5798>
086e582f +0x578f:  add    $0x34,%esp
086e5832 +0x5792:  pop    %ebx
086e5833 +0x5793:  pop    %ebp
086e5834 +0x5794:  ret
086e5835 +0x5795:  lea    0x0(%esi),%esi
086e5838 +0x5798:  mov    (%ebx),%eax
086e583a +0x579a:  add    -0xc(%eax),%ebx
086e583d +0x579d:  mov    0x14(%ebx),%eax
086e5840 +0x57a0:  mov    %ebx,(%esp)
086e5843 +0x57a3:  or     $0x1,%eax
086e5846 +0x57a6:  mov    %eax,0x4(%esp)
086e584a +0x57aa:  call   086e0da0 <+0xd00>
086e584f +0x57af:  add    $0x34,%esp
086e5852 +0x57b2:  mov    $0xffffffff,%eax
086e5857 +0x57b7:  pop    %ebx
086e5858 +0x57b8:  pop    %ebp
086e5859 +0x57b9:  ret
086e585a +0x57ba:  cmp    $0x2,%edx
086e585d +0x57bd:  je     086e5886 <+0x57e6>
086e585f +0x57bf:  mov    %eax,(%esp)
086e5862 +0x57c2:  call   08725ce0 <__cxa_begin_catch>
086e5867 +0x57c7:  movl   $0x1,0x4(%esp)
086e586f +0x57cf:  mov    (%ebx),%eax
086e5871 +0x57d1:  add    -0xc(%eax),%ebx
086e5874 +0x57d4:  mov    %ebx,(%esp)
086e5877 +0x57d7:  call   086e0cd0 <+0xc30>
086e587c +0x57dc:  call   08725c30 <__cxa_end_catch>
086e5881 +0x57e1:  or     $0xffffffff,%eax
086e5884 +0x57e4:  jmp    086e582f <+0x578f>
086e5886 +0x57e6:  mov    %eax,(%esp)
086e5889 +0x57e9:  call   08725ce0 <__cxa_begin_catch>
086e588e +0x57ee:  movl   $0x1,0x4(%esp)
086e5896 +0x57f6:  mov    (%ebx),%eax
086e5898 +0x57f8:  add    -0xc(%eax),%ebx
086e589b +0x57fb:  mov    %ebx,(%esp)
086e589e +0x57fe:  call   086e0cd0 <+0xc30>
086e58a3 +0x5803:  call   08724be0 <__cxa_rethrow>
086e58a8 +0x5808:  mov    %eax,-0x1c(%ebp)
086e58ab +0x580b:  call   08725c30 <__cxa_end_catch>
086e58b0 +0x5810:  mov    -0x1c(%ebp),%eax
086e58b3 +0x5813:  mov    %eax,(%esp)
086e58b6 +0x5816:  call   08ae3750 <_Unwind_Resume>
086e58bb +0x581b:  jmp    086e58a8 <+0x5808>
086e58bd +0x581d:  nop
086e58be +0x581e:  nop
086e58bf +0x581f:  nop
086e58c0 +0x5820:  push   %ebp
086e58c1 +0x5821:  mov    %esp,%ebp
086e58c3 +0x5823:  push   %ebx
086e58c4 +0x5824:  sub    $0x34,%esp
086e58c7 +0x5827:  mov    0x8(%ebp),%ebx
086e58ca +0x582a:  lea    -0x9(%ebp),%eax
086e58cd +0x582d:  movl   $0x0,0x4(%ebx)
086e58d4 +0x5834:  movl   $0x1,0x8(%esp)
086e58dc +0x583c:  mov    %ebx,0x4(%esp)
086e58e0 +0x5840:  mov    %eax,(%esp)
086e58e3 +0x5843:  call   086e4760 <+0x46c0>
086e58e8 +0x5848:  cmpb   $0x0,-0x9(%ebp)
086e58ec +0x584c:  je     086e590a <+0x586a>
086e58ee +0x584e:  mov    (%ebx),%eax
086e58f0 +0x5850:  mov    -0xc(%eax),%edx
086e58f3 +0x5853:  add    %ebx,%edx
086e58f5 +0x5855:  mov    0x78(%edx),%eax
086e58f8 +0x5858:  test   %eax,%eax
086e58fa +0x585a:  je     086e592e <+0x588e>
086e58fc +0x585c:  mov    0x8(%eax),%edx
086e58ff +0x585f:  cmp    %edx,0x4(%eax)
086e5902 +0x5862:  jae    086e5912 <+0x5872>
086e5904 +0x5864:  sub    $0x1,%edx
086e5907 +0x5867:  mov    %edx,0x8(%eax)
086e590a +0x586a:  mov    %ebx,%eax
086e590c +0x586c:  add    $0x34,%esp
086e590f +0x586f:  pop    %ebx
086e5910 +0x5870:  pop    %ebp
086e5911 +0x5871:  ret
086e5912 +0x5872:  mov    (%eax),%edx
086e5914 +0x5874:  movl   $0xffffffff,0x4(%esp)
086e591c +0x587c:  mov    %eax,(%esp)
086e591f +0x587f:  call   *0x2c(%edx)
086e5922 +0x5882:  cmp    $0xffffffff,%eax
086e5925 +0x5885:  jne    086e590a <+0x586a>
086e5927 +0x5887:  mov    (%ebx),%eax
086e5929 +0x5889:  mov    -0xc(%eax),%edx
086e592c +0x588c:  add    %ebx,%edx
086e592e +0x588e:  mov    0x14(%edx),%eax
086e5931 +0x5891:  mov    %edx,(%esp)
086e5934 +0x5894:  or     $0x1,%eax
086e5937 +0x5897:  mov    %eax,0x4(%esp)
086e593b +0x589b:  call   086e0da0 <+0xd00>
086e5940 +0x58a0:  jmp    086e590a <+0x586a>
086e5942 +0x58a2:  cmp    $0x2,%edx
086e5945 +0x58a5:  je     086e596e <+0x58ce>
086e5947 +0x58a7:  mov    %eax,(%esp)
086e594a +0x58aa:  call   08725ce0 <__cxa_begin_catch>
086e594f +0x58af:  movl   $0x1,0x4(%esp)
086e5957 +0x58b7:  mov    (%ebx),%eax
086e5959 +0x58b9:  mov    -0xc(%eax),%eax
086e595c +0x58bc:  lea    (%ebx,%eax,1),%eax
086e595f +0x58bf:  mov    %eax,(%esp)
086e5962 +0x58c2:  call   086e0cd0 <+0xc30>
086e5967 +0x58c7:  call   08725c30 <__cxa_end_catch>
086e596c +0x58cc:  jmp    086e590a <+0x586a>
086e596e +0x58ce:  mov    %eax,(%esp)
086e5971 +0x58d1:  call   08725ce0 <__cxa_begin_catch>
086e5976 +0x58d6:  movl   $0x1,0x4(%esp)
086e597e +0x58de:  mov    (%ebx),%eax
086e5980 +0x58e0:  add    -0xc(%eax),%ebx
086e5983 +0x58e3:  mov    %ebx,(%esp)
086e5986 +0x58e6:  call   086e0cd0 <+0xc30>
086e598b +0x58eb:  call   08724be0 <__cxa_rethrow>
086e5990 +0x58f0:  mov    %eax,-0x1c(%ebp)
086e5993 +0x58f3:  call   08725c30 <__cxa_end_catch>
086e5998 +0x58f8:  mov    -0x1c(%ebp),%eax
086e599b +0x58fb:  mov    %eax,(%esp)
086e599e +0x58fe:  call   08ae3750 <_Unwind_Resume>
086e59a3 +0x5903:  jmp    086e5990 <+0x58f0>
086e59a5 +0x5905:  nop
086e59a6 +0x5906:  nop
086e59a7 +0x5907:  nop
086e59a8 +0x5908:  nop
086e59a9 +0x5909:  nop
086e59aa +0x590a:  nop
086e59ab +0x590b:  nop
086e59ac +0x590c:  nop
086e59ad +0x590d:  nop
086e59ae +0x590e:  nop
086e59af +0x590f:  nop
086e59b0 +0x5910:  push   %ebp
086e59b1 +0x5911:  mov    %esp,%ebp
086e59b3 +0x5913:  sub    $0x48,%esp
086e59b6 +0x5916:  mov    %ebx,-0xc(%ebp)
086e59b9 +0x5919:  mov    0x8(%ebp),%ebx
086e59bc +0x591c:  lea    -0x19(%ebp),%eax
086e59bf +0x591f:  mov    %esi,-0x8(%ebp)
086e59c2 +0x5922:  movzbl 0xc(%ebp),%esi
086e59c6 +0x5926:  mov    %edi,-0x4(%ebp)
086e59c9 +0x5929:  movl   $0x0,0x4(%ebx)
086e59d0 +0x5930:  movl   $0x1,0x8(%esp)
086e59d8 +0x5938:  mov    %ebx,0x4(%esp)
086e59dc +0x593c:  mov    %eax,(%esp)
086e59df +0x593f:  call   086e4760 <+0x46c0>
086e59e4 +0x5944:  cmpb   $0x0,-0x19(%ebp)
086e59e8 +0x5948:  je     086e5a40 <+0x59a0>
086e59ea +0x594a:  mov    (%ebx),%eax
086e59ec +0x594c:  mov    -0xc(%eax),%edx
086e59ef +0x594f:  add    %ebx,%edx
086e59f1 +0x5951:  mov    0x78(%edx),%eax
086e59f4 +0x5954:  test   %eax,%eax
086e59f6 +0x5956:  je     086e5a28 <+0x5988>
086e59f8 +0x5958:  mov    0x8(%eax),%edx
086e59fb +0x595b:  cmp    %edx,0x4(%eax)
086e59fe +0x595e:  jae    086e5a0a <+0x596a>
086e5a00 +0x5960:  mov    %esi,%ecx
086e5a02 +0x5962:  cmp    -0x1(%edx),%cl
086e5a05 +0x5965:  lea    -0x1(%edx),%edi
086e5a08 +0x5968:  je     086e5a50 <+0x59b0>
086e5a0a +0x596a:  mov    (%eax),%edx
086e5a0c +0x596c:  and    $0xff,%esi
086e5a12 +0x5972:  mov    %esi,0x4(%esp)
086e5a16 +0x5976:  mov    %eax,(%esp)
086e5a19 +0x5979:  call   *0x2c(%edx)
086e5a1c +0x597c:  cmp    $0xffffffff,%eax
086e5a1f +0x597f:  jne    086e5a40 <+0x59a0>
086e5a21 +0x5981:  mov    (%ebx),%eax
086e5a23 +0x5983:  mov    -0xc(%eax),%edx
086e5a26 +0x5986:  add    %ebx,%edx
086e5a28 +0x5988:  mov    0x14(%edx),%eax
086e5a2b +0x598b:  mov    %edx,(%esp)
086e5a2e +0x598e:  or     $0x1,%eax
086e5a31 +0x5991:  mov    %eax,0x4(%esp)
086e5a35 +0x5995:  call   086e0da0 <+0xd00>
086e5a3a +0x599a:  lea    0x0(%esi),%esi
086e5a40 +0x59a0:  mov    %ebx,%eax
086e5a42 +0x59a2:  mov    -0x8(%ebp),%esi
086e5a45 +0x59a5:  mov    -0xc(%ebp),%ebx
086e5a48 +0x59a8:  mov    -0x4(%ebp),%edi
086e5a4b +0x59ab:  mov    %ebp,%esp
086e5a4d +0x59ad:  pop    %ebp
086e5a4e +0x59ae:  ret
086e5a4f +0x59af:  nop
086e5a50 +0x59b0:  mov    %edi,0x8(%eax)
086e5a53 +0x59b3:  jmp    086e5a40 <+0x59a0>
086e5a55 +0x59b5:  cmp    $0x2,%edx
086e5a58 +0x59b8:  je     086e5a81 <+0x59e1>
086e5a5a +0x59ba:  mov    %eax,(%esp)
086e5a5d +0x59bd:  call   08725ce0 <__cxa_begin_catch>
086e5a62 +0x59c2:  movl   $0x1,0x4(%esp)
086e5a6a +0x59ca:  mov    (%ebx),%eax
086e5a6c +0x59cc:  mov    -0xc(%eax),%eax
086e5a6f +0x59cf:  lea    (%ebx,%eax,1),%eax
086e5a72 +0x59d2:  mov    %eax,(%esp)
086e5a75 +0x59d5:  call   086e0cd0 <+0xc30>
086e5a7a +0x59da:  call   08725c30 <__cxa_end_catch>
086e5a7f +0x59df:  jmp    086e5a40 <+0x59a0>
086e5a81 +0x59e1:  mov    %eax,(%esp)
086e5a84 +0x59e4:  call   08725ce0 <__cxa_begin_catch>
086e5a89 +0x59e9:  movl   $0x1,0x4(%esp)
086e5a91 +0x59f1:  mov    (%ebx),%eax
086e5a93 +0x59f3:  add    -0xc(%eax),%ebx
086e5a96 +0x59f6:  mov    %ebx,(%esp)
086e5a99 +0x59f9:  call   086e0cd0 <+0xc30>
086e5a9e +0x59fe:  call   08724be0 <__cxa_rethrow>
086e5aa3 +0x5a03:  mov    %eax,-0x2c(%ebp)
086e5aa6 +0x5a06:  call   08725c30 <__cxa_end_catch>
086e5aab +0x5a0b:  mov    -0x2c(%ebp),%eax
086e5aae +0x5a0e:  mov    %eax,(%esp)
086e5ab1 +0x5a11:  call   08ae3750 <_Unwind_Resume>
086e5ab6 +0x5a16:  jmp    086e5aa3 <+0x5a03>
086e5ab8 +0x5a18:  nop
086e5ab9 +0x5a19:  nop
086e5aba +0x5a1a:  nop
086e5abb +0x5a1b:  nop
086e5abc +0x5a1c:  nop
086e5abd +0x5a1d:  nop
086e5abe +0x5a1e:  nop
086e5abf +0x5a1f:  nop
086e5ac0 +0x5a20:  push   %ebp
086e5ac1 +0x5a21:  mov    %esp,%ebp
086e5ac3 +0x5a23:  push   %esi
086e5ac4 +0x5a24:  push   %ebx
086e5ac5 +0x5a25:  sub    $0x30,%esp
086e5ac8 +0x5a28:  mov    0x8(%ebp),%ebx
086e5acb +0x5a2b:  lea    -0x9(%ebp),%eax
086e5ace +0x5a2e:  movl   $0x0,0x4(%ebx)
086e5ad5 +0x5a35:  movl   $0x1,0x8(%esp)
086e5add +0x5a3d:  mov    %ebx,0x4(%esp)
086e5ae1 +0x5a41:  mov    %eax,(%esp)
086e5ae4 +0x5a44:  call   086e4760 <+0x46c0>
086e5ae9 +0x5a49:  cmpb   $0x0,-0x9(%ebp)
086e5aed +0x5a4d:  jne    086e5b00 <+0x5a60>
086e5aef +0x5a4f:  mov    0x4(%ebx),%eax
086e5af2 +0x5a52:  add    $0x30,%esp
086e5af5 +0x5a55:  pop    %ebx
086e5af6 +0x5a56:  pop    %esi
086e5af7 +0x5a57:  pop    %ebp
086e5af8 +0x5a58:  ret
086e5af9 +0x5a59:  lea    0x0(%esi,%eiz,1),%esi
086e5b00 +0x5a60:  mov    (%ebx),%eax
086e5b02 +0x5a62:  mov    -0xc(%eax),%eax
086e5b05 +0x5a65:  mov    0x78(%ebx,%eax,1),%edx
086e5b09 +0x5a69:  mov    0xc(%edx),%eax
086e5b0c +0x5a6c:  sub    0x8(%edx),%eax
086e5b0f +0x5a6f:  je     086e5b50 <+0x5ab0>
086e5b11 +0x5a71:  test   %eax,%eax
086e5b13 +0x5a73:  jle    086e5b5c <+0x5abc>
086e5b15 +0x5a75:  mov    (%ebx),%edx
086e5b17 +0x5a77:  mov    -0xc(%edx),%edx
086e5b1a +0x5a7a:  mov    0x78(%ebx,%edx,1),%ecx
086e5b1e +0x5a7e:  mov    0x10(%ebp),%edx
086e5b21 +0x5a81:  mov    (%ecx),%esi
086e5b23 +0x5a83:  cmp    %eax,%edx
086e5b25 +0x5a85:  jg     086e5b48 <+0x5aa8>
086e5b27 +0x5a87:  mov    0xc(%ebp),%eax
086e5b2a +0x5a8a:  mov    %edx,0x8(%esp)
086e5b2e +0x5a8e:  mov    %ecx,(%esp)
086e5b31 +0x5a91:  mov    %eax,0x4(%esp)
086e5b35 +0x5a95:  call   *0x20(%esi)
086e5b38 +0x5a98:  mov    %eax,0x4(%ebx)
086e5b3b +0x5a9b:  add    $0x30,%esp
086e5b3e +0x5a9e:  pop    %ebx
086e5b3f +0x5a9f:  pop    %esi
086e5b40 +0x5aa0:  pop    %ebp
086e5b41 +0x5aa1:  ret
086e5b42 +0x5aa2:  lea    0x0(%esi),%esi
086e5b48 +0x5aa8:  mov    %eax,%edx
086e5b4a +0x5aaa:  jmp    086e5b27 <+0x5a87>
086e5b4c +0x5aac:  lea    0x0(%esi,%eiz,1),%esi
086e5b50 +0x5ab0:  mov    (%edx),%eax
086e5b52 +0x5ab2:  mov    %edx,(%esp)
086e5b55 +0x5ab5:  call   *0x1c(%eax)
086e5b58 +0x5ab8:  test   %eax,%eax
086e5b5a +0x5aba:  jg     086e5b15 <+0x5a75>
086e5b5c +0x5abc:  cmp    $0xffffffff,%eax
086e5b5f +0x5abf:  jne    086e5aef <+0x5a4f>
086e5b61 +0x5ac1:  mov    (%ebx),%eax
086e5b63 +0x5ac3:  mov    -0xc(%eax),%edx
086e5b66 +0x5ac6:  add    %ebx,%edx
086e5b68 +0x5ac8:  mov    0x14(%edx),%eax
086e5b6b +0x5acb:  mov    %edx,(%esp)
086e5b6e +0x5ace:  or     $0x2,%eax
086e5b71 +0x5ad1:  mov    %eax,0x4(%esp)
086e5b75 +0x5ad5:  call   086e0da0 <+0xd00>
086e5b7a +0x5ada:  mov    0x4(%ebx),%eax
086e5b7d +0x5add:  jmp    086e5af2 <+0x5a52>
086e5b82 +0x5ae2:  cmp    $0x2,%edx
086e5b85 +0x5ae5:  je     086e5bb1 <+0x5b11>
086e5b87 +0x5ae7:  mov    %eax,(%esp)
086e5b8a +0x5aea:  call   08725ce0 <__cxa_begin_catch>
086e5b8f +0x5aef:  movl   $0x1,0x4(%esp)
086e5b97 +0x5af7:  mov    (%ebx),%eax
086e5b99 +0x5af9:  mov    -0xc(%eax),%eax
086e5b9c +0x5afc:  lea    (%ebx,%eax,1),%eax
086e5b9f +0x5aff:  mov    %eax,(%esp)
086e5ba2 +0x5b02:  call   086e0cd0 <+0xc30>
086e5ba7 +0x5b07:  call   08725c30 <__cxa_end_catch>
086e5bac +0x5b0c:  jmp    086e5aef <+0x5a4f>
086e5bb1 +0x5b11:  mov    %eax,(%esp)
086e5bb4 +0x5b14:  call   08725ce0 <__cxa_begin_catch>
086e5bb9 +0x5b19:  movl   $0x1,0x4(%esp)
086e5bc1 +0x5b21:  mov    (%ebx),%eax
086e5bc3 +0x5b23:  add    -0xc(%eax),%ebx
086e5bc6 +0x5b26:  mov    %ebx,(%esp)
086e5bc9 +0x5b29:  call   086e0cd0 <+0xc30>
086e5bce +0x5b2e:  call   08724be0 <__cxa_rethrow>
086e5bd3 +0x5b33:  mov    %eax,-0x1c(%ebp)
086e5bd6 +0x5b36:  call   08725c30 <__cxa_end_catch>
086e5bdb +0x5b3b:  mov    -0x1c(%ebp),%eax
086e5bde +0x5b3e:  mov    %eax,(%esp)
086e5be1 +0x5b41:  call   08ae3750 <_Unwind_Resume>
086e5be6 +0x5b46:  jmp    086e5bd3 <+0x5b33>
086e5be8 +0x5b48:  nop
086e5be9 +0x5b49:  nop
086e5bea +0x5b4a:  nop
086e5beb +0x5b4b:  nop
086e5bec +0x5b4c:  nop
086e5bed +0x5b4d:  nop
086e5bee +0x5b4e:  nop
086e5bef +0x5b4f:  nop
086e5bf0 +0x5b50:  push   %ebp
086e5bf1 +0x5b51:  mov    %esp,%ebp
086e5bf3 +0x5b53:  sub    $0x28,%esp
086e5bf6 +0x5b56:  mov    %ebx,-0x8(%ebp)
086e5bf9 +0x5b59:  mov    0x8(%ebp),%ebx
086e5bfc +0x5b5c:  lea    -0x9(%ebp),%eax
086e5bff +0x5b5f:  mov    %esi,-0x4(%ebp)
086e5c02 +0x5b62:  mov    0x10(%ebp),%esi
086e5c05 +0x5b65:  movl   $0x0,0x4(%ebx)
086e5c0c +0x5b6c:  movl   $0x1,0x8(%esp)
086e5c14 +0x5b74:  mov    %ebx,0x4(%esp)
086e5c18 +0x5b78:  mov    %eax,(%esp)
086e5c1b +0x5b7b:  call   086e4760 <+0x46c0>
086e5c20 +0x5b80:  cmpb   $0x0,-0x9(%ebp)
086e5c24 +0x5b84:  jne    086e5c38 <+0x5b98>
086e5c26 +0x5b86:  mov    %ebx,%eax
086e5c28 +0x5b88:  mov    -0x4(%ebp),%esi
086e5c2b +0x5b8b:  mov    -0x8(%ebp),%ebx
086e5c2e +0x5b8e:  mov    %ebp,%esp
086e5c30 +0x5b90:  pop    %ebp
086e5c31 +0x5b91:  ret
086e5c32 +0x5b92:  lea    0x0(%esi),%esi
086e5c38 +0x5b98:  mov    (%ebx),%eax
086e5c3a +0x5b9a:  mov    0xc(%ebp),%ecx
086e5c3d +0x5b9d:  mov    -0xc(%eax),%eax
086e5c40 +0x5ba0:  mov    0x78(%ebx,%eax,1),%eax
086e5c44 +0x5ba4:  mov    (%eax),%edx
086e5c46 +0x5ba6:  mov    %esi,0x8(%esp)
086e5c4a +0x5baa:  mov    %ecx,0x4(%esp)
086e5c4e +0x5bae:  mov    %eax,(%esp)
086e5c51 +0x5bb1:  call   *0x20(%edx)
086e5c54 +0x5bb4:  cmp    %eax,%esi
086e5c56 +0x5bb6:  mov    %eax,0x4(%ebx)
086e5c59 +0x5bb9:  je     086e5c26 <+0x5b86>
086e5c5b +0x5bbb:  mov    (%ebx),%eax
086e5c5d +0x5bbd:  mov    -0xc(%eax),%edx
086e5c60 +0x5bc0:  add    %ebx,%edx
086e5c62 +0x5bc2:  mov    0x14(%edx),%eax
086e5c65 +0x5bc5:  mov    %edx,(%esp)
086e5c68 +0x5bc8:  or     $0x6,%eax
086e5c6b +0x5bcb:  mov    %eax,0x4(%esp)
086e5c6f +0x5bcf:  call   086e0da0 <+0xd00>
086e5c74 +0x5bd4:  mov    %ebx,%eax
086e5c76 +0x5bd6:  mov    -0x4(%ebp),%esi
086e5c79 +0x5bd9:  mov    -0x8(%ebp),%ebx
086e5c7c +0x5bdc:  mov    %ebp,%esp
086e5c7e +0x5bde:  pop    %ebp
086e5c7f +0x5bdf:  ret
086e5c80 +0x5be0:  cmp    $0x2,%edx
086e5c83 +0x5be3:  je     086e5caf <+0x5c0f>
086e5c85 +0x5be5:  mov    %eax,(%esp)
086e5c88 +0x5be8:  call   08725ce0 <__cxa_begin_catch>
086e5c8d +0x5bed:  movl   $0x1,0x4(%esp)
086e5c95 +0x5bf5:  mov    (%ebx),%eax
086e5c97 +0x5bf7:  mov    -0xc(%eax),%eax
086e5c9a +0x5bfa:  lea    (%ebx,%eax,1),%eax
086e5c9d +0x5bfd:  mov    %eax,(%esp)
086e5ca0 +0x5c00:  call   086e0cd0 <+0xc30>
086e5ca5 +0x5c05:  call   08725c30 <__cxa_end_catch>
086e5caa +0x5c0a:  jmp    086e5c26 <+0x5b86>
086e5caf +0x5c0f:  mov    %eax,(%esp)
086e5cb2 +0x5c12:  call   08725ce0 <__cxa_begin_catch>
086e5cb7 +0x5c17:  movl   $0x1,0x4(%esp)
086e5cbf +0x5c1f:  mov    (%ebx),%eax
086e5cc1 +0x5c21:  add    -0xc(%eax),%ebx
086e5cc4 +0x5c24:  mov    %ebx,(%esp)
086e5cc7 +0x5c27:  call   086e0cd0 <+0xc30>
086e5ccc +0x5c2c:  call   08724be0 <__cxa_rethrow>
086e5cd1 +0x5c31:  mov    %eax,%esi
086e5cd3 +0x5c33:  call   08725c30 <__cxa_end_catch>
086e5cd8 +0x5c38:  mov    %esi,(%esp)
086e5cdb +0x5c3b:  call   08ae3750 <_Unwind_Resume>
086e5ce0 +0x5c40:  jmp    086e5cd1 <+0x5c31>
086e5ce2 +0x5c42:  nop
086e5ce3 +0x5c43:  nop
086e5ce4 +0x5c44:  nop
086e5ce5 +0x5c45:  nop
086e5ce6 +0x5c46:  nop
086e5ce7 +0x5c47:  nop
086e5ce8 +0x5c48:  nop
086e5ce9 +0x5c49:  nop
086e5cea +0x5c4a:  nop
086e5ceb +0x5c4b:  nop
086e5cec +0x5c4c:  nop
086e5ced +0x5c4d:  nop
086e5cee +0x5c4e:  nop
086e5cef +0x5c4f:  nop
086e5cf0 +0x5c50:  push   %ebp
086e5cf1 +0x5c51:  mov    %esp,%ebp
086e5cf3 +0x5c53:  push   %ebx
086e5cf4 +0x5c54:  sub    $0x34,%esp
086e5cf7 +0x5c57:  mov    0x8(%ebp),%ebx
086e5cfa +0x5c5a:  lea    -0x9(%ebp),%eax
086e5cfd +0x5c5d:  movl   $0x0,0x4(%ebx)
086e5d04 +0x5c64:  movl   $0x1,0x8(%esp)
086e5d0c +0x5c6c:  mov    %ebx,0x4(%esp)
086e5d10 +0x5c70:  mov    %eax,(%esp)
086e5d13 +0x5c73:  call   086e4760 <+0x46c0>
086e5d18 +0x5c78:  xor    %edx,%edx
086e5d1a +0x5c7a:  cmpb   $0x0,-0x9(%ebp)
086e5d1e +0x5c7e:  jne    086e5d58 <+0x5cb8>
086e5d20 +0x5c80:  mov    0x4(%ebx),%ecx
086e5d23 +0x5c83:  test   %ecx,%ecx
086e5d25 +0x5c85:  jne    086e5d50 <+0x5cb0>
086e5d27 +0x5c87:  or     $0x4,%edx
086e5d2a +0x5c8a:  mov    (%ebx),%eax
086e5d2c +0x5c8c:  add    -0xc(%eax),%ebx
086e5d2f +0x5c8f:  or     0x14(%ebx),%edx
086e5d32 +0x5c92:  mov    %ebx,(%esp)
086e5d35 +0x5c95:  mov    %edx,0x4(%esp)
086e5d39 +0x5c99:  call   086e0da0 <+0xd00>
086e5d3e +0x5c9e:  add    $0x34,%esp
086e5d41 +0x5ca1:  mov    $0xffffffff,%eax
086e5d46 +0x5ca6:  pop    %ebx
086e5d47 +0x5ca7:  pop    %ebp
086e5d48 +0x5ca8:  ret
086e5d49 +0x5ca9:  lea    0x0(%esi,%eiz,1),%esi
086e5d50 +0x5cb0:  test   %edx,%edx
086e5d52 +0x5cb2:  je     086e5d3e <+0x5c9e>
086e5d54 +0x5cb4:  jmp    086e5d2a <+0x5c8a>
086e5d56 +0x5cb6:  xchg   %ax,%ax
086e5d58 +0x5cb8:  mov    (%ebx),%eax
086e5d5a +0x5cba:  mov    -0xc(%eax),%eax
086e5d5d +0x5cbd:  mov    0x78(%ebx,%eax,1),%edx
086e5d61 +0x5cc1:  mov    0x8(%edx),%ecx
086e5d64 +0x5cc4:  cmp    0xc(%edx),%ecx
086e5d67 +0x5cc7:  jae    086e5d7f <+0x5cdf>
086e5d69 +0x5cc9:  movzbl (%ecx),%eax
086e5d6c +0x5ccc:  add    $0x1,%ecx
086e5d6f +0x5ccf:  mov    %ecx,0x8(%edx)
086e5d72 +0x5cd2:  movl   $0x1,0x4(%ebx)
086e5d79 +0x5cd9:  add    $0x34,%esp
086e5d7c +0x5cdc:  pop    %ebx
086e5d7d +0x5cdd:  pop    %ebp
086e5d7e +0x5cde:  ret
086e5d7f +0x5cdf:  mov    (%edx),%eax
086e5d81 +0x5ce1:  mov    %edx,(%esp)
086e5d84 +0x5ce4:  call   *0x28(%eax)
086e5d87 +0x5ce7:  cmp    $0xffffffff,%eax
086e5d8a +0x5cea:  mov    $0x2,%edx
086e5d8f +0x5cef:  je     086e5d20 <+0x5c80>
086e5d91 +0x5cf1:  jmp    086e5d72 <+0x5cd2>
086e5d93 +0x5cf3:  cmp    $0x2,%edx
086e5d96 +0x5cf6:  je     086e5dc9 <+0x5d29>
086e5d98 +0x5cf8:  mov    %eax,(%esp)
086e5d9b +0x5cfb:  nop
086e5d9c +0x5cfc:  lea    0x0(%esi,%eiz,1),%esi
086e5da0 +0x5d00:  call   08725ce0 <__cxa_begin_catch>
086e5da5 +0x5d05:  movl   $0x1,0x4(%esp)
086e5dad +0x5d0d:  mov    (%ebx),%eax
086e5daf +0x5d0f:  mov    -0xc(%eax),%eax
086e5db2 +0x5d12:  lea    (%ebx,%eax,1),%eax
086e5db5 +0x5d15:  mov    %eax,(%esp)
086e5db8 +0x5d18:  call   086e0cd0 <+0xc30>
086e5dbd +0x5d1d:  call   08725c30 <__cxa_end_catch>
086e5dc2 +0x5d22:  xor    %edx,%edx
086e5dc4 +0x5d24:  jmp    086e5d20 <+0x5c80>
086e5dc9 +0x5d29:  mov    %eax,(%esp)
086e5dcc +0x5d2c:  call   08725ce0 <__cxa_begin_catch>
086e5dd1 +0x5d31:  movl   $0x1,0x4(%esp)
086e5dd9 +0x5d39:  mov    (%ebx),%eax
086e5ddb +0x5d3b:  add    -0xc(%eax),%ebx
086e5dde +0x5d3e:  mov    %ebx,(%esp)
086e5de1 +0x5d41:  call   086e0cd0 <+0xc30>
086e5de6 +0x5d46:  call   08724be0 <__cxa_rethrow>
086e5deb +0x5d4b:  mov    %eax,-0x1c(%ebp)
086e5dee +0x5d4e:  call   08725c30 <__cxa_end_catch>
086e5df3 +0x5d53:  mov    -0x1c(%ebp),%eax
086e5df6 +0x5d56:  mov    %eax,(%esp)
086e5df9 +0x5d59:  call   08ae3750 <_Unwind_Resume>
086e5dfe +0x5d5e:  jmp    086e5deb <+0x5d4b>
086e5e00 +0x5d60:  push   %ebp
086e5e01 +0x5d61:  mov    %esp,%ebp
086e5e03 +0x5d63:  push   %esi
086e5e04 +0x5d64:  push   %ebx
086e5e05 +0x5d65:  sub    $0x30,%esp
086e5e08 +0x5d68:  mov    0x8(%ebp),%ebx
086e5e0b +0x5d6b:  lea    -0x9(%ebp),%eax
086e5e0e +0x5d6e:  mov    0xc(%ebp),%esi
086e5e11 +0x5d71:  movl   $0x0,0x8(%esp)
086e5e19 +0x5d79:  mov    %eax,(%esp)
086e5e1c +0x5d7c:  mov    %ebx,0x4(%esp)
086e5e20 +0x5d80:  call   086e4760 <+0x46c0>
086e5e25 +0x5d85:  cmpb   $0x0,-0x9(%ebp)
086e5e29 +0x5d89:  je     086e5e88 <+0x5de8>
086e5e2b +0x5d8b:  test   %esi,%esi
086e5e2d +0x5d8d:  mov    $0x4,%eax
086e5e32 +0x5d92:  je     086e5e61 <+0x5dc1>
086e5e34 +0x5d94:  lea    -0xa(%ebp),%eax
086e5e37 +0x5d97:  mov    %eax,0x8(%esp)
086e5e3b +0x5d9b:  mov    %esi,0x4(%esp)
086e5e3f +0x5d9f:  mov    (%ebx),%eax
086e5e41 +0x5da1:  mov    -0xc(%eax),%eax
086e5e44 +0x5da4:  mov    0x78(%ebx,%eax,1),%eax
086e5e48 +0x5da8:  mov    %eax,(%esp)
086e5e4b +0x5dab:  call   087062e0 <_ZSt21__copy_streambufs_eofIcSt11char_traitsIcEEiPSt15basic_streambufIT_T0_ES6_Rb>  ; int std::__copy_streambufs_eof<char, std::char_traits<char> >(std::basic_streambuf<char, std::char_traits<char> >*, std::basic_streambuf<char, std::char_traits<char> >*, bool&)
086e5e50 +0x5db0:  cmp    $0x1,%eax
086e5e53 +0x5db3:  sbb    %eax,%eax
086e5e55 +0x5db5:  and    $0x4,%eax
086e5e58 +0x5db8:  cmpb   $0x0,-0xa(%ebp)
086e5e5c +0x5dbc:  je     086e5ea0 <+0x5e00>
086e5e5e +0x5dbe:  or     $0x2,%eax
086e5e61 +0x5dc1:  mov    (%ebx),%edx
086e5e63 +0x5dc3:  mov    -0xc(%edx),%edx
086e5e66 +0x5dc6:  lea    (%ebx,%edx,1),%edx
086e5e69 +0x5dc9:  or     0x14(%edx),%eax
086e5e6c +0x5dcc:  mov    %edx,(%esp)
086e5e6f +0x5dcf:  mov    %eax,0x4(%esp)
086e5e73 +0x5dd3:  call   086e0da0 <+0xd00>
086e5e78 +0x5dd8:  add    $0x30,%esp
086e5e7b +0x5ddb:  mov    %ebx,%eax
086e5e7d +0x5ddd:  pop    %ebx
086e5e7e +0x5dde:  pop    %esi
086e5e7f +0x5ddf:  pop    %ebp
086e5e80 +0x5de0:  ret
086e5e81 +0x5de1:  lea    0x0(%esi,%eiz,1),%esi
086e5e88 +0x5de8:  test   %esi,%esi
086e5e8a +0x5dea:  mov    $0x4,%eax
086e5e8f +0x5def:  je     086e5e61 <+0x5dc1>
086e5e91 +0x5df1:  add    $0x30,%esp
086e5e94 +0x5df4:  mov    %ebx,%eax
086e5e96 +0x5df6:  pop    %ebx
086e5e97 +0x5df7:  pop    %esi
086e5e98 +0x5df8:  pop    %ebp
086e5e99 +0x5df9:  ret
086e5e9a +0x5dfa:  lea    0x0(%esi),%esi
086e5ea0 +0x5e00:  test   %eax,%eax
086e5ea2 +0x5e02:  jne    086e5e61 <+0x5dc1>
086e5ea4 +0x5e04:  jmp    086e5e78 <+0x5dd8>
086e5ea6 +0x5e06:  cmp    $0x2,%edx
086e5ea9 +0x5e09:  je     086e5ed4 <+0x5e34>
086e5eab +0x5e0b:  mov    %eax,(%esp)
086e5eae +0x5e0e:  xchg   %ax,%ax
086e5eb0 +0x5e10:  call   08725ce0 <__cxa_begin_catch>
086e5eb5 +0x5e15:  movl   $0x4,0x4(%esp)
086e5ebd +0x5e1d:  mov    (%ebx),%eax
086e5ebf +0x5e1f:  mov    -0xc(%eax),%eax
086e5ec2 +0x5e22:  lea    (%ebx,%eax,1),%eax
086e5ec5 +0x5e25:  mov    %eax,(%esp)
086e5ec8 +0x5e28:  call   086e0cd0 <+0xc30>
086e5ecd +0x5e2d:  call   08725c30 <__cxa_end_catch>
086e5ed2 +0x5e32:  jmp    086e5e78 <+0x5dd8>
086e5ed4 +0x5e34:  mov    %eax,(%esp)
086e5ed7 +0x5e37:  call   08725ce0 <__cxa_begin_catch>
086e5edc +0x5e3c:  movl   $0x4,0x4(%esp)
086e5ee4 +0x5e44:  mov    (%ebx),%eax
086e5ee6 +0x5e46:  add    -0xc(%eax),%ebx
086e5ee9 +0x5e49:  mov    %ebx,(%esp)
086e5eec +0x5e4c:  call   086e0cd0 <+0xc30>
086e5ef1 +0x5e51:  call   08724be0 <__cxa_rethrow>
086e5ef6 +0x5e56:  mov    %eax,-0x1c(%ebp)
086e5ef9 +0x5e59:  call   08725c30 <__cxa_end_catch>
086e5efe +0x5e5e:  mov    -0x1c(%ebp),%eax
086e5f01 +0x5e61:  mov    %eax,(%esp)
086e5f04 +0x5e64:  call   08ae3750 <_Unwind_Resume>
086e5f09 +0x5e69:  jmp    086e5ef6 <+0x5e56>
086e5f0b +0x5e6b:  nop
086e5f0c +0x5e6c:  nop
086e5f0d +0x5e6d:  nop
086e5f0e +0x5e6e:  nop
086e5f0f +0x5e6f:  nop
086e5f10 +0x5e70:  push   %ebp
086e5f11 +0x5e71:  mov    %esp,%ebp
086e5f13 +0x5e73:  push   %ebx
086e5f14 +0x5e74:  sub    $0x34,%esp
086e5f17 +0x5e77:  mov    0x8(%ebp),%ebx
086e5f1a +0x5e7a:  lea    -0x9(%ebp),%eax
086e5f1d +0x5e7d:  movl   $0x0,0x4(%ebx)
086e5f24 +0x5e84:  mov    %eax,(%esp)
086e5f27 +0x5e87:  movl   $0x1,0x8(%esp)
086e5f2f +0x5e8f:  mov    %ebx,0x4(%esp)
086e5f33 +0x5e93:  call   086e4760 <+0x46c0>
086e5f38 +0x5e98:  mov    $0xffffffff,%eax
086e5f3d +0x5e9d:  cmpb   $0x0,-0x9(%ebp)
086e5f41 +0x5ea1:  jne    086e5f50 <+0x5eb0>
086e5f43 +0x5ea3:  add    $0x34,%esp
086e5f46 +0x5ea6:  pop    %ebx
086e5f47 +0x5ea7:  pop    %ebp
086e5f48 +0x5ea8:  ret
086e5f49 +0x5ea9:  lea    0x0(%esi,%eiz,1),%esi
086e5f50 +0x5eb0:  mov    (%ebx),%eax
086e5f52 +0x5eb2:  mov    -0xc(%eax),%eax
086e5f55 +0x5eb5:  mov    0x78(%ebx,%eax,1),%eax
086e5f59 +0x5eb9:  mov    0x8(%eax),%edx
086e5f5c +0x5ebc:  cmp    0xc(%eax),%edx
086e5f5f +0x5ebf:  jae    086e5f6a <+0x5eca>
086e5f61 +0x5ec1:  movzbl (%edx),%eax
086e5f64 +0x5ec4:  add    $0x34,%esp
086e5f67 +0x5ec7:  pop    %ebx
086e5f68 +0x5ec8:  pop    %ebp
086e5f69 +0x5ec9:  ret
086e5f6a +0x5eca:  mov    (%eax),%edx
086e5f6c +0x5ecc:  mov    %eax,(%esp)
086e5f6f +0x5ecf:  call   *0x24(%edx)
086e5f72 +0x5ed2:  cmp    $0xffffffff,%eax
086e5f75 +0x5ed5:  jne    086e5f43 <+0x5ea3>
086e5f77 +0x5ed7:  mov    (%ebx),%edx
086e5f79 +0x5ed9:  mov    %eax,-0x1c(%ebp)
086e5f7c +0x5edc:  add    -0xc(%edx),%ebx
086e5f7f +0x5edf:  mov    0x14(%ebx),%edx
086e5f82 +0x5ee2:  mov    %ebx,(%esp)
086e5f85 +0x5ee5:  or     $0x2,%edx
086e5f88 +0x5ee8:  mov    %edx,0x4(%esp)
086e5f8c +0x5eec:  call   086e0da0 <+0xd00>
086e5f91 +0x5ef1:  mov    -0x1c(%ebp),%eax
086e5f94 +0x5ef4:  add    $0x34,%esp
086e5f97 +0x5ef7:  pop    %ebx
086e5f98 +0x5ef8:  pop    %ebp
086e5f99 +0x5ef9:  ret
086e5f9a +0x5efa:  cmp    $0x2,%edx
086e5f9d +0x5efd:  je     086e5fc9 <+0x5f29>
086e5f9f +0x5eff:  mov    %eax,(%esp)
086e5fa2 +0x5f02:  call   08725ce0 <__cxa_begin_catch>
086e5fa7 +0x5f07:  movl   $0x1,0x4(%esp)
086e5faf +0x5f0f:  mov    (%ebx),%eax
086e5fb1 +0x5f11:  add    -0xc(%eax),%ebx
086e5fb4 +0x5f14:  mov    %ebx,(%esp)
086e5fb7 +0x5f17:  call   086e0cd0 <+0xc30>
086e5fbc +0x5f1c:  call   08725c30 <__cxa_end_catch>
086e5fc1 +0x5f21:  or     $0xffffffff,%eax
086e5fc4 +0x5f24:  jmp    086e5f43 <+0x5ea3>
086e5fc9 +0x5f29:  mov    %eax,(%esp)
086e5fcc +0x5f2c:  call   08725ce0 <__cxa_begin_catch>
086e5fd1 +0x5f31:  movl   $0x1,0x4(%esp)
086e5fd9 +0x5f39:  mov    (%ebx),%eax
086e5fdb +0x5f3b:  add    -0xc(%eax),%ebx
086e5fde +0x5f3e:  mov    %ebx,(%esp)
086e5fe1 +0x5f41:  call   086e0cd0 <+0xc30>
086e5fe6 +0x5f46:  call   08724be0 <__cxa_rethrow>
086e5feb +0x5f4b:  mov    %eax,-0x1c(%ebp)
086e5fee +0x5f4e:  call   08725c30 <__cxa_end_catch>
086e5ff3 +0x5f53:  mov    -0x1c(%ebp),%eax
086e5ff6 +0x5f56:  mov    %eax,(%esp)
086e5ff9 +0x5f59:  call   08ae3750 <_Unwind_Resume>
086e5ffe +0x5f5e:  jmp    086e5feb <+0x5f4b>
086e6000 +0x5f60:  push   %ebp
086e6001 +0x5f61:  mov    %esp,%ebp
086e6003 +0x5f63:  push   %ebx
086e6004 +0x5f64:  sub    $0x34,%esp
086e6007 +0x5f67:  mov    0x8(%ebp),%ebx
086e600a +0x5f6a:  lea    -0x9(%ebp),%eax
086e600d +0x5f6d:  movl   $0x0,0x4(%ebx)
086e6014 +0x5f74:  mov    %eax,(%esp)
086e6017 +0x5f77:  movl   $0x1,0x8(%esp)
086e601f +0x5f7f:  mov    %ebx,0x4(%esp)
086e6023 +0x5f83:  call   086e2f70 <+0x2ed0>
086e6028 +0x5f88:  mov    $0xffffffff,%eax
086e602d +0x5f8d:  cmpb   $0x0,-0x9(%ebp)
086e6031 +0x5f91:  jne    086e6040 <+0x5fa0>
086e6033 +0x5f93:  add    $0x34,%esp
086e6036 +0x5f96:  pop    %ebx
086e6037 +0x5f97:  pop    %ebp
086e6038 +0x5f98:  ret
086e6039 +0x5f99:  lea    0x0(%esi,%eiz,1),%esi
086e6040 +0x5fa0:  mov    (%ebx),%eax
086e6042 +0x5fa2:  mov    -0xc(%eax),%eax
086e6045 +0x5fa5:  mov    0x7c(%ebx,%eax,1),%eax
086e6049 +0x5fa9:  mov    0x8(%eax),%edx
086e604c +0x5fac:  cmp    0xc(%eax),%edx
086e604f +0x5faf:  jae    086e607b <+0x5fdb>
086e6051 +0x5fb1:  mov    (%edx),%eax
086e6053 +0x5fb3:  cmp    $0xffffffff,%eax
086e6056 +0x5fb6:  jne    086e6033 <+0x5f93>
086e6058 +0x5fb8:  mov    (%ebx),%edx
086e605a +0x5fba:  mov    %eax,-0x1c(%ebp)
086e605d +0x5fbd:  add    -0xc(%edx),%ebx
086e6060 +0x5fc0:  mov    0x14(%ebx),%edx
086e6063 +0x5fc3:  mov    %ebx,(%esp)
086e6066 +0x5fc6:  or     $0x2,%edx
086e6069 +0x5fc9:  mov    %edx,0x4(%esp)
086e606d +0x5fcd:  call   086e0cf0 <+0xc50>
086e6072 +0x5fd2:  mov    -0x1c(%ebp),%eax
086e6075 +0x5fd5:  add    $0x34,%esp
086e6078 +0x5fd8:  pop    %ebx
086e6079 +0x5fd9:  pop    %ebp
086e607a +0x5fda:  ret
086e607b +0x5fdb:  mov    (%eax),%edx
086e607d +0x5fdd:  mov    %eax,(%esp)
086e6080 +0x5fe0:  call   *0x24(%edx)
086e6083 +0x5fe3:  jmp    086e6053 <+0x5fb3>
086e6085 +0x5fe5:  cmp    $0x2,%edx
086e6088 +0x5fe8:  je     086e60b7 <+0x6017>
086e608a +0x5fea:  mov    %eax,(%esp)
086e608d +0x5fed:  lea    0x0(%esi),%esi
086e6090 +0x5ff0:  call   08725ce0 <__cxa_begin_catch>
086e6095 +0x5ff5:  movl   $0x1,0x4(%esp)
086e609d +0x5ffd:  mov    (%ebx),%eax
086e609f +0x5fff:  add    -0xc(%eax),%ebx
086e60a2 +0x6002:  mov    %ebx,(%esp)
086e60a5 +0x6005:  call   086e0cb0 <+0xc10>
086e60aa +0x600a:  call   08725c30 <__cxa_end_catch>
086e60af +0x600f:  or     $0xffffffff,%eax
086e60b2 +0x6012:  jmp    086e6033 <+0x5f93>
086e60b7 +0x6017:  mov    %eax,(%esp)
086e60ba +0x601a:  call   08725ce0 <__cxa_begin_catch>
086e60bf +0x601f:  movl   $0x1,0x4(%esp)
086e60c7 +0x6027:  mov    (%ebx),%eax
086e60c9 +0x6029:  add    -0xc(%eax),%ebx
086e60cc +0x602c:  mov    %ebx,(%esp)
086e60cf +0x602f:  call   086e0cb0 <+0xc10>
086e60d4 +0x6034:  call   08724be0 <__cxa_rethrow>
086e60d9 +0x6039:  mov    %eax,-0x1c(%ebp)
086e60dc +0x603c:  call   08725c30 <__cxa_end_catch>
086e60e1 +0x6041:  mov    -0x1c(%ebp),%eax
086e60e4 +0x6044:  mov    %eax,(%esp)
086e60e7 +0x6047:  call   08ae3750 <_Unwind_Resume>
086e60ec +0x604c:  jmp    086e60d9 <+0x6039>
086e60ee +0x604e:  nop
086e60ef +0x604f:  nop
086e60f0 +0x6050:  push   %ebp
086e60f1 +0x6051:  mov    %esp,%ebp
086e60f3 +0x6053:  push   %edi
086e60f4 +0x6054:  push   %esi
086e60f5 +0x6055:  push   %ebx
086e60f6 +0x6056:  sub    $0x2c,%esp
086e60f9 +0x6059:  mov    0x8(%ebp),%ebx
086e60fc +0x605c:  lea    -0x1c(%ebp),%esi
086e60ff +0x605f:  mov    (%ebx),%eax
086e6101 +0x6061:  mov    -0xc(%eax),%eax
086e6104 +0x6064:  mov    %esi,(%esp)
086e6107 +0x6067:  lea    (%ebx,%eax,1),%eax
086e610a +0x606a:  add    $0x6c,%eax
086e610d +0x606d:  mov    %eax,0x4(%esp)
086e6111 +0x6071:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
086e6116 +0x6076:  mov    %esi,(%esp)
086e6119 +0x6079:  call   086eb2c0 <_GLOBAL__I_locale_inst.cc+0xf80>  ; global constructors keyed to locale_inst.cc+0xf80
086e611e +0x607e:  mov    %eax,%edi
086e6120 +0x6080:  mov    %esi,(%esp)
086e6123 +0x6083:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e6128 +0x6088:  mov    (%ebx),%eax
086e612a +0x608a:  mov    -0xc(%eax),%eax
086e612d +0x608d:  mov    0x78(%ebx,%eax,1),%esi
086e6131 +0x6091:  mov    0x8(%esi),%eax
086e6134 +0x6094:  cmp    0xc(%esi),%eax
086e6137 +0x6097:  jae    086e6173 <+0x60d3>
086e6139 +0x6099:  lea    0x0(%esi,%eiz,1),%esi
086e6140 +0x60a0:  movzbl (%eax),%eax
086e6143 +0x60a3:  mov    0x18(%edi),%edx
086e6146 +0x60a6:  movzbl %al,%eax
086e6149 +0x60a9:  testb  $0x20,0x1(%edx,%eax,2)
086e614e +0x60ae:  jne    086e6160 <+0x60c0>
086e6150 +0x60b0:  add    $0x2c,%esp
086e6153 +0x60b3:  mov    %ebx,%eax
086e6155 +0x60b5:  pop    %ebx
086e6156 +0x60b6:  pop    %esi
086e6157 +0x60b7:  pop    %edi
086e6158 +0x60b8:  pop    %ebp
086e6159 +0x60b9:  ret
086e615a +0x60ba:  lea    0x0(%esi),%esi
086e6160 +0x60c0:  mov    0x8(%esi),%eax
086e6163 +0x60c3:  cmp    0xc(%esi),%eax
086e6166 +0x60c6:  jae    086e61a3 <+0x6103>
086e6168 +0x60c8:  add    $0x1,%eax
086e616b +0x60cb:  mov    %eax,0x8(%esi)
086e616e +0x60ce:  cmp    %eax,0xc(%esi)
086e6171 +0x60d1:  ja     086e6140 <+0x60a0>
086e6173 +0x60d3:  mov    (%esi),%eax
086e6175 +0x60d5:  mov    %esi,(%esp)
086e6178 +0x60d8:  call   *0x24(%eax)
086e617b +0x60db:  cmp    $0xffffffff,%eax
086e617e +0x60de:  jne    086e6143 <+0x60a3>
086e6180 +0x60e0:  mov    (%ebx),%eax
086e6182 +0x60e2:  mov    -0xc(%eax),%edx
086e6185 +0x60e5:  add    %ebx,%edx
086e6187 +0x60e7:  mov    0x14(%edx),%eax
086e618a +0x60ea:  mov    %edx,(%esp)
086e618d +0x60ed:  or     $0x2,%eax
086e6190 +0x60f0:  mov    %eax,0x4(%esp)
086e6194 +0x60f4:  call   086e0da0 <+0xd00>
086e6199 +0x60f9:  add    $0x2c,%esp
086e619c +0x60fc:  mov    %ebx,%eax
086e619e +0x60fe:  pop    %ebx
086e619f +0x60ff:  pop    %esi
086e61a0 +0x6100:  pop    %edi
086e61a1 +0x6101:  pop    %ebp
086e61a2 +0x6102:  ret
086e61a3 +0x6103:  mov    (%esi),%eax
086e61a5 +0x6105:  mov    %esi,(%esp)
086e61a8 +0x6108:  call   *0x28(%eax)
086e61ab +0x610b:  cmp    $0xffffffff,%eax
086e61ae +0x610e:  je     086e6180 <+0x60e0>
086e61b0 +0x6110:  mov    0x8(%esi),%eax
086e61b3 +0x6113:  jmp    086e616e <+0x60ce>
086e61b5 +0x6115:  mov    %eax,%ebx
086e61b7 +0x6117:  mov    %esi,(%esp)
086e61ba +0x611a:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e61bf +0x611f:  mov    %ebx,(%esp)
086e61c2 +0x6122:  call   08ae3750 <_Unwind_Resume>
086e61c7 +0x6127:  nop
086e61c8 +0x6128:  nop
086e61c9 +0x6129:  nop
086e61ca +0x612a:  nop
086e61cb +0x612b:  nop
086e61cc +0x612c:  nop
086e61cd +0x612d:  nop
086e61ce +0x612e:  nop
086e61cf +0x612f:  nop
086e61d0 +0x6130:  push   %ebp
086e61d1 +0x6131:  mov    %esp,%ebp
086e61d3 +0x6133:  push   %edi
086e61d4 +0x6134:  push   %esi
086e61d5 +0x6135:  push   %ebx
086e61d6 +0x6136:  sub    $0x3c,%esp
086e61d9 +0x6139:  mov    0x8(%ebp),%ebx
086e61dc +0x613c:  mov    0x10(%ebp),%edi
086e61df +0x613f:  lea    -0x19(%ebp),%eax
086e61e2 +0x6142:  movzbl 0x14(%ebp),%esi
086e61e6 +0x6146:  movl   $0x0,0x4(%ebx)
086e61ed +0x614d:  movl   $0x1,0x8(%esp)
086e61f5 +0x6155:  mov    %ebx,0x4(%esp)
086e61f9 +0x6159:  mov    %eax,(%esp)
086e61fc +0x615c:  call   086e4760 <+0x46c0>
086e6201 +0x6161:  cmpb   $0x0,-0x19(%ebp)
086e6205 +0x6165:  jne    086e6250 <+0x61b0>
086e6207 +0x6167:  nop
086e6208 +0x6168:  xor    %eax,%eax
086e620a +0x616a:  test   %edi,%edi
086e620c +0x616c:  jle    086e6214 <+0x6174>
086e620e +0x616e:  mov    0xc(%ebp),%edx
086e6211 +0x6171:  movb   $0x0,(%edx)
086e6214 +0x6174:  mov    0x4(%ebx),%esi
086e6217 +0x6177:  test   %esi,%esi
086e6219 +0x6179:  jne    086e6240 <+0x61a0>
086e621b +0x617b:  or     $0x4,%eax
086e621e +0x617e:  mov    (%ebx),%edx
086e6220 +0x6180:  mov    -0xc(%edx),%edx
086e6223 +0x6183:  lea    (%ebx,%edx,1),%edx
086e6226 +0x6186:  or     0x14(%edx),%eax
086e6229 +0x6189:  mov    %edx,(%esp)
086e622c +0x618c:  mov    %eax,0x4(%esp)
086e6230 +0x6190:  call   086e0da0 <+0xd00>
086e6235 +0x6195:  add    $0x3c,%esp
086e6238 +0x6198:  mov    %ebx,%eax
086e623a +0x619a:  pop    %ebx
086e623b +0x619b:  pop    %esi
086e623c +0x619c:  pop    %edi
086e623d +0x619d:  pop    %ebp
086e623e +0x619e:  ret
086e623f +0x619f:  nop
086e6240 +0x61a0:  test   %eax,%eax
086e6242 +0x61a2:  jne    086e621e <+0x617e>
086e6244 +0x61a4:  add    $0x3c,%esp
086e6247 +0x61a7:  mov    %ebx,%eax
086e6249 +0x61a9:  pop    %ebx
086e624a +0x61aa:  pop    %esi
086e624b +0x61ab:  pop    %edi
086e624c +0x61ac:  pop    %ebp
086e624d +0x61ad:  ret
086e624e +0x61ae:  xchg   %ax,%ax
086e6250 +0x61b0:  mov    %esi,%eax
086e6252 +0x61b2:  movzbl %al,%esi
086e6255 +0x61b5:  mov    (%ebx),%eax
086e6257 +0x61b7:  mov    %esi,-0x2c(%ebp)
086e625a +0x61ba:  mov    -0xc(%eax),%eax
086e625d +0x61bd:  mov    0x78(%ebx,%eax,1),%esi
086e6261 +0x61c1:  mov    0x8(%esi),%eax
086e6264 +0x61c4:  cmp    0xc(%esi),%eax
086e6267 +0x61c7:  jb     086e629c <+0x61fc>
086e6269 +0x61c9:  jmp    086e62d9 <+0x6239>
086e626b +0x61cb:  nop
086e626c +0x61cc:  lea    0x0(%esi,%eiz,1),%esi
086e6270 +0x61d0:  cmp    $0xffffffff,%eax
086e6273 +0x61d3:  je     086e62b8 <+0x6218>
086e6275 +0x61d5:  cmp    -0x2c(%ebp),%eax
086e6278 +0x61d8:  je     086e6208 <+0x6168>
086e627a +0x61da:  mov    0xc(%ebp),%edx
086e627d +0x61dd:  mov    %al,(%edx)
086e627f +0x61df:  mov    0x8(%esi),%eax
086e6282 +0x61e2:  add    $0x1,%edx
086e6285 +0x61e5:  addl   $0x1,0x4(%ebx)
086e6289 +0x61e9:  cmp    0xc(%esi),%eax
086e628c +0x61ec:  mov    %edx,0xc(%ebp)
086e628f +0x61ef:  jae    086e62c2 <+0x6222>
086e6291 +0x61f1:  add    $0x1,%eax
086e6294 +0x61f4:  mov    %eax,0x8(%esi)
086e6297 +0x61f7:  cmp    %eax,0xc(%esi)
086e629a +0x61fa:  jbe    086e62d9 <+0x6239>
086e629c +0x61fc:  movzbl (%eax),%eax
086e629f +0x61ff:  mov    0x4(%ebx),%edx
086e62a2 +0x6202:  add    $0x1,%edx
086e62a5 +0x6205:  cmp    %edi,%edx
086e62a7 +0x6207:  jl     086e6270 <+0x61d0>
086e62a9 +0x6209:  cmp    $0xffffffff,%eax
086e62ac +0x620c:  jne    086e6208 <+0x6168>
086e62b2 +0x6212:  lea    0x0(%esi),%esi
086e62b8 +0x6218:  mov    $0x2,%eax
086e62bd +0x621d:  jmp    086e620a <+0x616a>
086e62c2 +0x6222:  mov    (%esi),%eax
086e62c4 +0x6224:  mov    %esi,(%esp)
086e62c7 +0x6227:  call   *0x28(%eax)
086e62ca +0x622a:  mov    %eax,%edx
086e62cc +0x622c:  or     $0xffffffff,%eax
086e62cf +0x622f:  cmp    $0xffffffff,%edx
086e62d2 +0x6232:  je     086e629f <+0x61ff>
086e62d4 +0x6234:  mov    0x8(%esi),%eax
086e62d7 +0x6237:  jmp    086e6297 <+0x61f7>
086e62d9 +0x6239:  mov    (%esi),%eax
086e62db +0x623b:  mov    %esi,(%esp)
086e62de +0x623e:  call   *0x24(%eax)
086e62e1 +0x6241:  jmp    086e629f <+0x61ff>
086e62e3 +0x6243:  cmp    $0x2,%edx
086e62e6 +0x6246:  je     086e6319 <+0x6279>
086e62e8 +0x6248:  mov    %eax,(%esp)
086e62eb +0x624b:  nop
086e62ec +0x624c:  lea    0x0(%esi,%eiz,1),%esi
086e62f0 +0x6250:  call   08725ce0 <__cxa_begin_catch>
086e62f5 +0x6255:  movl   $0x1,0x4(%esp)
086e62fd +0x625d:  mov    (%ebx),%eax
086e62ff +0x625f:  mov    -0xc(%eax),%eax
086e6302 +0x6262:  lea    (%ebx,%eax,1),%eax
086e6305 +0x6265:  mov    %eax,(%esp)
086e6308 +0x6268:  call   086e0cd0 <+0xc30>
086e630d +0x626d:  call   08725c30 <__cxa_end_catch>
086e6312 +0x6272:  xor    %eax,%eax
086e6314 +0x6274:  jmp    086e620a <+0x616a>
086e6319 +0x6279:  mov    %eax,(%esp)
086e631c +0x627c:  call   08725ce0 <__cxa_begin_catch>
086e6321 +0x6281:  movl   $0x1,0x4(%esp)
086e6329 +0x6289:  mov    (%ebx),%eax
086e632b +0x628b:  add    -0xc(%eax),%ebx
086e632e +0x628e:  mov    %ebx,(%esp)
086e6331 +0x6291:  call   086e0cd0 <+0xc30>
086e6336 +0x6296:  call   08724be0 <__cxa_rethrow>
086e633b +0x629b:  mov    %eax,%esi
086e633d +0x629d:  call   08725c30 <__cxa_end_catch>
086e6342 +0x62a2:  mov    %esi,(%esp)
086e6345 +0x62a5:  call   08ae3750 <_Unwind_Resume>
086e634a +0x62aa:  jmp    086e633b <+0x629b>
086e634c +0x62ac:  nop
086e634d +0x62ad:  nop
086e634e +0x62ae:  nop
086e634f +0x62af:  nop
086e6350 +0x62b0:  push   %ebp
086e6351 +0x62b1:  mov    %esp,%ebp
086e6353 +0x62b3:  push   %edi
086e6354 +0x62b4:  push   %esi
086e6355 +0x62b5:  push   %ebx
086e6356 +0x62b6:  sub    $0x3c,%esp
086e6359 +0x62b9:  movzbl 0x10(%ebp),%eax
086e635d +0x62bd:  mov    0x8(%ebp),%edx
086e6360 +0x62c0:  mov    0xc(%ebp),%edi
086e6363 +0x62c3:  mov    %al,-0x2c(%ebp)
086e6366 +0x62c6:  lea    -0x19(%ebp),%eax
086e6369 +0x62c9:  movl   $0x0,0x4(%edx)
086e6370 +0x62d0:  movl   $0x1,0x8(%esp)
086e6378 +0x62d8:  mov    %edx,0x4(%esp)
086e637c +0x62dc:  mov    %eax,(%esp)
086e637f +0x62df:  call   086e4760 <+0x46c0>
086e6384 +0x62e4:  cmpb   $0x0,-0x19(%ebp)
086e6388 +0x62e8:  jne    086e63d8 <+0x6338>
086e638a +0x62ea:  lea    0x0(%esi),%esi
086e6390 +0x62f0:  xor    %eax,%eax
086e6392 +0x62f2:  mov    0x8(%ebp),%ecx
086e6395 +0x62f5:  mov    0x4(%ecx),%edi
086e6398 +0x62f8:  test   %edi,%edi
086e639a +0x62fa:  jne    086e63c8 <+0x6328>
086e639c +0x62fc:  or     $0x4,%eax
086e639f +0x62ff:  mov    0x8(%ebp),%ecx
086e63a2 +0x6302:  mov    (%ecx),%edx
086e63a4 +0x6304:  mov    -0xc(%edx),%edx
086e63a7 +0x6307:  add    %ecx,%edx
086e63a9 +0x6309:  or     0x14(%edx),%eax
086e63ac +0x630c:  mov    %edx,(%esp)
086e63af +0x630f:  mov    %eax,0x4(%esp)
086e63b3 +0x6313:  call   086e0da0 <+0xd00>
086e63b8 +0x6318:  mov    0x8(%ebp),%eax
086e63bb +0x631b:  add    $0x3c,%esp
086e63be +0x631e:  pop    %ebx
086e63bf +0x631f:  pop    %esi
086e63c0 +0x6320:  pop    %edi
086e63c1 +0x6321:  pop    %ebp
086e63c2 +0x6322:  ret
086e63c3 +0x6323:  nop
086e63c4 +0x6324:  lea    0x0(%esi,%eiz,1),%esi
086e63c8 +0x6328:  test   %eax,%eax
086e63ca +0x632a:  jne    086e639f <+0x62ff>
086e63cc +0x632c:  mov    0x8(%ebp),%eax
086e63cf +0x632f:  add    $0x3c,%esp
086e63d2 +0x6332:  pop    %ebx
086e63d3 +0x6333:  pop    %esi
086e63d4 +0x6334:  pop    %edi
086e63d5 +0x6335:  pop    %ebp
086e63d6 +0x6336:  ret
086e63d7 +0x6337:  nop
086e63d8 +0x6338:  mov    0x8(%ebp),%ecx
086e63db +0x633b:  mov    (%ecx),%eax
086e63dd +0x633d:  mov    -0xc(%eax),%eax
086e63e0 +0x6340:  mov    0x78(%ecx,%eax,1),%ebx
086e63e4 +0x6344:  mov    0x8(%ebx),%eax
086e63e7 +0x6347:  cmp    0xc(%ebx),%eax
086e63ea +0x634a:  jae    086e6487 <+0x63e7>
086e63f0 +0x6350:  movzbl (%eax),%esi
086e63f3 +0x6353:  movzbl -0x2c(%ebp),%eax
086e63f7 +0x6357:  mov    %esi,%edx
086e63f9 +0x6359:  cmp    %esi,%eax
086e63fb +0x635b:  mov    %eax,-0x2c(%ebp)
086e63fe +0x635e:  je     086e6390 <+0x62f0>
086e6400 +0x6360:  mov    0x14(%edi),%eax
086e6403 +0x6363:  cmp    0x18(%edi),%eax
086e6406 +0x6366:  jae    086e6460 <+0x63c0>
086e6408 +0x6368:  mov    %dl,(%eax)
086e640a +0x636a:  addl   $0x1,0x14(%edi)
086e640e +0x636e:  mov    0x8(%ebp),%edx
086e6411 +0x6371:  mov    0x8(%ebx),%eax
086e6414 +0x6374:  addl   $0x1,0x4(%edx)
086e6418 +0x6378:  cmp    0xc(%ebx),%eax
086e641b +0x637b:  jae    086e6438 <+0x6398>
086e641d +0x637d:  add    $0x1,%eax
086e6420 +0x6380:  mov    %eax,0x8(%ebx)
086e6423 +0x6383:  cmp    %eax,0xc(%ebx)
086e6426 +0x6386:  jbe    086e644f <+0x63af>
086e6428 +0x6388:  movzbl (%eax),%esi
086e642b +0x638b:  cmp    %esi,-0x2c(%ebp)
086e642e +0x638e:  je     086e6390 <+0x62f0>
086e6434 +0x6394:  mov    %esi,%edx
086e6436 +0x6396:  jmp    086e6400 <+0x6360>
086e6438 +0x6398:  mov    (%ebx),%eax
086e643a +0x639a:  mov    %ebx,(%esp)
086e643d +0x639d:  call   *0x28(%eax)
086e6440 +0x63a0:  cmp    $0xffffffff,%eax
086e6443 +0x63a3:  jne    086e6482 <+0x63e2>
086e6445 +0x63a5:  mov    $0x2,%eax
086e644a +0x63aa:  jmp    086e6392 <+0x62f2>
086e644f +0x63af:  mov    (%ebx),%eax
086e6451 +0x63b1:  mov    %ebx,(%esp)
086e6454 +0x63b4:  call   *0x24(%eax)
086e6457 +0x63b7:  cmp    $0xffffffff,%eax
086e645a +0x63ba:  mov    %eax,%esi
086e645c +0x63bc:  je     086e6445 <+0x63a5>
086e645e +0x63be:  jmp    086e642b <+0x638b>
086e6460 +0x63c0:  mov    (%edi),%eax
086e6462 +0x63c2:  movzbl %dl,%edx
086e6465 +0x63c5:  mov    %edx,0x4(%esp)
086e6469 +0x63c9:  mov    %edi,(%esp)
086e646c +0x63cc:  call   *0x34(%eax)
086e646f +0x63cf:  cmp    $0xffffffff,%eax
086e6472 +0x63d2:  jne    086e640e <+0x636e>
086e6474 +0x63d4:  cmp    $0xffffffff,%esi
086e6477 +0x63d7:  jne    086e6390 <+0x62f0>
086e647d +0x63dd:  lea    0x0(%esi),%esi
086e6480 +0x63e0:  jmp    086e6445 <+0x63a5>
086e6482 +0x63e2:  mov    0x8(%ebx),%eax
086e6485 +0x63e5:  jmp    086e6423 <+0x6383>
086e6487 +0x63e7:  mov    (%ebx),%eax
086e6489 +0x63e9:  mov    %ebx,(%esp)
086e648c +0x63ec:  call   *0x24(%eax)
086e648f +0x63ef:  cmp    $0xffffffff,%eax
086e6492 +0x63f2:  mov    %eax,%esi
086e6494 +0x63f4:  je     086e6445 <+0x63a5>
086e6496 +0x63f6:  jmp    086e63f3 <+0x6353>
086e649b +0x63fb:  cmp    $0x2,%edx
086e649e +0x63fe:  xchg   %ax,%ax
086e64a0 +0x6400:  je     086e64d0 <+0x6430>
086e64a2 +0x6402:  mov    %eax,(%esp)
086e64a5 +0x6405:  call   08725ce0 <__cxa_begin_catch>
086e64aa +0x640a:  mov    0x8(%ebp),%edx
086e64ad +0x640d:  movl   $0x1,0x4(%esp)
086e64b5 +0x6415:  mov    (%edx),%eax
086e64b7 +0x6417:  mov    -0xc(%eax),%eax
086e64ba +0x641a:  add    %edx,%eax
086e64bc +0x641c:  mov    %eax,(%esp)
086e64bf +0x641f:  call   086e0cd0 <+0xc30>
086e64c4 +0x6424:  call   08725c30 <__cxa_end_catch>
086e64c9 +0x6429:  xor    %eax,%eax
086e64cb +0x642b:  jmp    086e6392 <+0x62f2>
086e64d0 +0x6430:  mov    %eax,(%esp)
086e64d3 +0x6433:  call   08725ce0 <__cxa_begin_catch>
086e64d8 +0x6438:  mov    0x8(%ebp),%ecx
086e64db +0x643b:  movl   $0x1,0x4(%esp)
086e64e3 +0x6443:  mov    (%ecx),%eax
086e64e5 +0x6445:  mov    -0xc(%eax),%eax
086e64e8 +0x6448:  add    %ecx,%eax
086e64ea +0x644a:  mov    %eax,(%esp)
086e64ed +0x644d:  call   086e0cd0 <+0xc30>
086e64f2 +0x6452:  call   08724be0 <__cxa_rethrow>
086e64f7 +0x6457:  mov    %eax,%ebx
086e64f9 +0x6459:  call   08725c30 <__cxa_end_catch>
086e64fe +0x645e:  mov    %ebx,(%esp)
086e6501 +0x6461:  call   08ae3750 <_Unwind_Resume>
086e6506 +0x6466:  jmp    086e64f7 <+0x6457>
086e6508 +0x6468:  nop
086e6509 +0x6469:  nop
086e650a +0x646a:  nop
086e650b +0x646b:  nop
086e650c +0x646c:  nop
086e650d +0x646d:  nop
086e650e +0x646e:  nop
086e650f +0x646f:  nop
086e6510 +0x6470:  push   %ebp
086e6511 +0x6471:  mov    %esp,%ebp
086e6513 +0x6473:  push   %ebx
086e6514 +0x6474:  sub    $0x34,%esp
086e6517 +0x6477:  mov    0x8(%ebp),%ebx
086e651a +0x647a:  lea    -0x9(%ebp),%eax
086e651d +0x647d:  movl   $0x0,0x4(%ebx)
086e6524 +0x6484:  movl   $0x1,0x8(%esp)
086e652c +0x648c:  mov    %ebx,0x4(%esp)
086e6530 +0x6490:  mov    %eax,(%esp)
086e6533 +0x6493:  call   086e4760 <+0x46c0>
086e6538 +0x6498:  cmpb   $0x0,-0x9(%ebp)
086e653c +0x649c:  jne    086e6548 <+0x64a8>
086e653e +0x649e:  mov    %ebx,%eax
086e6540 +0x64a0:  add    $0x34,%esp
086e6543 +0x64a3:  pop    %ebx
086e6544 +0x64a4:  pop    %ebp
086e6545 +0x64a5:  ret
086e6546 +0x64a6:  xchg   %ax,%ax
086e6548 +0x64a8:  mov    (%ebx),%eax
086e654a +0x64aa:  mov    -0xc(%eax),%eax
086e654d +0x64ad:  mov    0x78(%ebx,%eax,1),%eax
086e6551 +0x64b1:  mov    0x8(%eax),%edx
086e6554 +0x64b4:  cmp    0xc(%eax),%edx
086e6557 +0x64b7:  jae    086e656e <+0x64ce>
086e6559 +0x64b9:  add    $0x1,%edx
086e655c +0x64bc:  mov    %edx,0x8(%eax)
086e655f +0x64bf:  movl   $0x1,0x4(%ebx)
086e6566 +0x64c6:  mov    %ebx,%eax
086e6568 +0x64c8:  add    $0x34,%esp
086e656b +0x64cb:  pop    %ebx
086e656c +0x64cc:  pop    %ebp
086e656d +0x64cd:  ret
086e656e +0x64ce:  mov    (%eax),%edx
086e6570 +0x64d0:  mov    %eax,(%esp)
086e6573 +0x64d3:  call   *0x28(%edx)
086e6576 +0x64d6:  cmp    $0xffffffff,%eax
086e6579 +0x64d9:  jne    086e655f <+0x64bf>
086e657b +0x64db:  mov    (%ebx),%eax
086e657d +0x64dd:  mov    -0xc(%eax),%edx
086e6580 +0x64e0:  add    %ebx,%edx
086e6582 +0x64e2:  mov    0x14(%edx),%eax
086e6585 +0x64e5:  mov    %edx,(%esp)
086e6588 +0x64e8:  or     $0x2,%eax
086e658b +0x64eb:  mov    %eax,0x4(%esp)
086e658f +0x64ef:  call   086e0da0 <+0xd00>
086e6594 +0x64f4:  jmp    086e653e <+0x649e>
086e6596 +0x64f6:  cmp    $0x2,%edx
086e6599 +0x64f9:  je     086e65c7 <+0x6527>
086e659b +0x64fb:  mov    %eax,(%esp)
086e659e +0x64fe:  xchg   %ax,%ax
086e65a0 +0x6500:  call   08725ce0 <__cxa_begin_catch>
086e65a5 +0x6505:  movl   $0x1,0x4(%esp)
086e65ad +0x650d:  mov    (%ebx),%eax
086e65af +0x650f:  mov    -0xc(%eax),%eax
086e65b2 +0x6512:  lea    (%ebx,%eax,1),%eax
086e65b5 +0x6515:  mov    %eax,(%esp)
086e65b8 +0x6518:  call   086e0cd0 <+0xc30>
086e65bd +0x651d:  call   08725c30 <__cxa_end_catch>
086e65c2 +0x6522:  jmp    086e653e <+0x649e>
086e65c7 +0x6527:  mov    %eax,(%esp)
086e65ca +0x652a:  call   08725ce0 <__cxa_begin_catch>
086e65cf +0x652f:  movl   $0x1,0x4(%esp)
086e65d7 +0x6537:  mov    (%ebx),%eax
086e65d9 +0x6539:  add    -0xc(%eax),%ebx
086e65dc +0x653c:  mov    %ebx,(%esp)
086e65df +0x653f:  call   086e0cd0 <+0xc30>
086e65e4 +0x6544:  call   08724be0 <__cxa_rethrow>
086e65e9 +0x6549:  mov    %eax,-0x1c(%ebp)
086e65ec +0x654c:  call   08725c30 <__cxa_end_catch>
086e65f1 +0x6551:  mov    -0x1c(%ebp),%eax
086e65f4 +0x6554:  mov    %eax,(%esp)
086e65f7 +0x6557:  call   08ae3750 <_Unwind_Resume>
086e65fc +0x655c:  jmp    086e65e9 <+0x6549>
086e65fe +0x655e:  nop
086e65ff +0x655f:  nop
086e6600 +0x6560:  push   %ebp
086e6601 +0x6561:  mov    %esp,%ebp
086e6603 +0x6563:  push   %ebx
086e6604 +0x6564:  sub    $0x34,%esp
086e6607 +0x6567:  mov    0x8(%ebp),%ebx
086e660a +0x656a:  lea    -0x9(%ebp),%eax
086e660d +0x656d:  movl   $0x0,0x8(%esp)
086e6615 +0x6575:  mov    %eax,(%esp)
086e6618 +0x6578:  mov    %ebx,0x4(%esp)
086e661c +0x657c:  call   086e4760 <+0x46c0>
086e6621 +0x6581:  cmpb   $0x0,-0x9(%ebp)
086e6625 +0x6585:  jne    086e6630 <+0x6590>
086e6627 +0x6587:  mov    %ebx,%eax
086e6629 +0x6589:  add    $0x34,%esp
086e662c +0x658c:  pop    %ebx
086e662d +0x658d:  pop    %ebp
086e662e +0x658e:  ret
086e662f +0x658f:  nop
086e6630 +0x6590:  mov    (%ebx),%eax
086e6632 +0x6592:  mov    -0xc(%eax),%eax
086e6635 +0x6595:  mov    0x78(%ebx,%eax,1),%edx
086e6639 +0x6599:  mov    0x8(%edx),%ecx
086e663c +0x659c:  cmp    0xc(%edx),%ecx
086e663f +0x659f:  jae    086e6657 <+0x65b7>
086e6641 +0x65a1:  movzbl (%ecx),%eax
086e6644 +0x65a4:  add    $0x1,%ecx
086e6647 +0x65a7:  mov    %ecx,0x8(%edx)
086e664a +0x65aa:  mov    0xc(%ebp),%edx
086e664d +0x65ad:  mov    %al,(%edx)
086e664f +0x65af:  mov    %ebx,%eax
086e6651 +0x65b1:  add    $0x34,%esp
086e6654 +0x65b4:  pop    %ebx
086e6655 +0x65b5:  pop    %ebp
086e6656 +0x65b6:  ret
086e6657 +0x65b7:  mov    (%edx),%eax
086e6659 +0x65b9:  mov    %edx,(%esp)
086e665c +0x65bc:  call   *0x28(%eax)
086e665f +0x65bf:  cmp    $0xffffffff,%eax
086e6662 +0x65c2:  jne    086e664a <+0x65aa>
086e6664 +0x65c4:  mov    (%ebx),%eax
086e6666 +0x65c6:  mov    -0xc(%eax),%edx
086e6669 +0x65c9:  add    %ebx,%edx
086e666b +0x65cb:  mov    0x14(%edx),%eax
086e666e +0x65ce:  mov    %edx,(%esp)
086e6671 +0x65d1:  or     $0x6,%eax
086e6674 +0x65d4:  mov    %eax,0x4(%esp)
086e6678 +0x65d8:  call   086e0da0 <+0xd00>
086e667d +0x65dd:  jmp    086e6627 <+0x6587>
086e667f +0x65df:  cmp    $0x2,%edx
086e6682 +0x65e2:  je     086e66ae <+0x660e>
086e6684 +0x65e4:  mov    %eax,(%esp)
086e6687 +0x65e7:  call   08725ce0 <__cxa_begin_catch>
086e668c +0x65ec:  movl   $0x1,0x4(%esp)
086e6694 +0x65f4:  mov    (%ebx),%eax
086e6696 +0x65f6:  mov    -0xc(%eax),%eax
086e6699 +0x65f9:  lea    (%ebx,%eax,1),%eax
086e669c +0x65fc:  mov    %eax,(%esp)
086e669f +0x65ff:  call   086e0cd0 <+0xc30>
086e66a4 +0x6604:  call   08725c30 <__cxa_end_catch>
086e66a9 +0x6609:  jmp    086e6627 <+0x6587>
086e66ae +0x660e:  mov    %eax,(%esp)
086e66b1 +0x6611:  call   08725ce0 <__cxa_begin_catch>
086e66b6 +0x6616:  movl   $0x1,0x4(%esp)
086e66be +0x661e:  mov    (%ebx),%eax
086e66c0 +0x6620:  add    -0xc(%eax),%ebx
086e66c3 +0x6623:  mov    %ebx,(%esp)
086e66c6 +0x6626:  call   086e0cd0 <+0xc30>
086e66cb +0x662b:  call   08724be0 <__cxa_rethrow>
086e66d0 +0x6630:  mov    %eax,-0x1c(%ebp)
086e66d3 +0x6633:  call   08725c30 <__cxa_end_catch>
086e66d8 +0x6638:  mov    -0x1c(%ebp),%eax
086e66db +0x663b:  mov    %eax,(%esp)
086e66de +0x663e:  call   08ae3750 <_Unwind_Resume>
086e66e3 +0x6643:  jmp    086e66d0 <+0x6630>
086e66e5 +0x6645:  nop
086e66e6 +0x6646:  nop
086e66e7 +0x6647:  nop
086e66e8 +0x6648:  nop
086e66e9 +0x6649:  nop
086e66ea +0x664a:  nop
086e66eb +0x664b:  nop
086e66ec +0x664c:  nop
086e66ed +0x664d:  nop
086e66ee +0x664e:  nop
086e66ef +0x664f:  nop
086e66f0 +0x6650:  push   %ebp
086e66f1 +0x6651:  mov    %esp,%ebp
086e66f3 +0x6653:  sub    $0x8,%esp
086e66f6 +0x6656:  leave
086e66f7 +0x6657:  jmp    086e6600 <+0x6560>
086e66fc +0x665c:  nop
086e66fd +0x665d:  nop
086e66fe +0x665e:  nop
086e66ff +0x665f:  nop
086e6700 +0x6660:  push   %ebp
086e6701 +0x6661:  mov    %esp,%ebp
086e6703 +0x6663:  sub    $0x8,%esp
086e6706 +0x6666:  leave
086e6707 +0x6667:  jmp    086e6600 <+0x6560>
086e670c +0x666c:  nop
086e670d +0x666d:  nop
086e670e +0x666e:  nop
086e670f +0x666f:  nop
086e6710 +0x6670:  push   %ebp
086e6711 +0x6671:  mov    %esp,%ebp
086e6713 +0x6673:  push   %ebx
086e6714 +0x6674:  sub    $0x34,%esp
086e6717 +0x6677:  mov    0x8(%ebp),%ebx
086e671a +0x667a:  lea    -0x9(%ebp),%eax
086e671d +0x667d:  movl   $0x0,0x8(%esp)
086e6725 +0x6685:  mov    %eax,(%esp)
086e6728 +0x6688:  mov    %ebx,0x4(%esp)
086e672c +0x668c:  call   086e2f70 <+0x2ed0>
086e6731 +0x6691:  cmpb   $0x0,-0x9(%ebp)
086e6735 +0x6695:  jne    086e6740 <+0x66a0>
086e6737 +0x6697:  mov    %ebx,%eax
086e6739 +0x6699:  add    $0x34,%esp
086e673c +0x669c:  pop    %ebx
086e673d +0x669d:  pop    %ebp
086e673e +0x669e:  ret
086e673f +0x669f:  nop
086e6740 +0x66a0:  mov    (%ebx),%eax
086e6742 +0x66a2:  mov    -0xc(%eax),%eax
086e6745 +0x66a5:  mov    0x7c(%ebx,%eax,1),%edx
086e6749 +0x66a9:  mov    0x8(%edx),%ecx
086e674c +0x66ac:  cmp    0xc(%edx),%ecx
086e674f +0x66af:  jae    086e6791 <+0x66f1>
086e6751 +0x66b1:  mov    (%ecx),%eax
086e6753 +0x66b3:  add    $0x4,%ecx
086e6756 +0x66b6:  mov    %ecx,0x8(%edx)
086e6759 +0x66b9:  cmp    $0xffffffff,%eax
086e675c +0x66bc:  je     086e6770 <+0x66d0>
086e675e +0x66be:  mov    0xc(%ebp),%edx
086e6761 +0x66c1:  mov    %eax,(%edx)
086e6763 +0x66c3:  mov    %ebx,%eax
086e6765 +0x66c5:  add    $0x34,%esp
086e6768 +0x66c8:  pop    %ebx
086e6769 +0x66c9:  pop    %ebp
086e676a +0x66ca:  ret
086e676b +0x66cb:  nop
086e676c +0x66cc:  lea    0x0(%esi,%eiz,1),%esi
086e6770 +0x66d0:  mov    (%ebx),%eax
086e6772 +0x66d2:  mov    -0xc(%eax),%edx
086e6775 +0x66d5:  add    %ebx,%edx
086e6777 +0x66d7:  mov    0x14(%edx),%eax
086e677a +0x66da:  mov    %edx,(%esp)
086e677d +0x66dd:  or     $0x6,%eax
086e6780 +0x66e0:  mov    %eax,0x4(%esp)
086e6784 +0x66e4:  call   086e0cf0 <+0xc50>
086e6789 +0x66e9:  mov    %ebx,%eax
086e678b +0x66eb:  add    $0x34,%esp
086e678e +0x66ee:  pop    %ebx
086e678f +0x66ef:  pop    %ebp
086e6790 +0x66f0:  ret
086e6791 +0x66f1:  mov    (%edx),%eax
086e6793 +0x66f3:  mov    %edx,(%esp)
086e6796 +0x66f6:  call   *0x28(%eax)
086e6799 +0x66f9:  jmp    086e6759 <+0x66b9>
086e679b +0x66fb:  cmp    $0x2,%edx
086e679e +0x66fe:  xchg   %ax,%ax
086e67a0 +0x6700:  je     086e67cc <+0x672c>
086e67a2 +0x6702:  mov    %eax,(%esp)
086e67a5 +0x6705:  call   08725ce0 <__cxa_begin_catch>
086e67aa +0x670a:  movl   $0x1,0x4(%esp)
086e67b2 +0x6712:  mov    (%ebx),%eax
086e67b4 +0x6714:  mov    -0xc(%eax),%eax
086e67b7 +0x6717:  lea    (%ebx,%eax,1),%eax
086e67ba +0x671a:  mov    %eax,(%esp)
086e67bd +0x671d:  call   086e0cb0 <+0xc10>
086e67c2 +0x6722:  call   08725c30 <__cxa_end_catch>
086e67c7 +0x6727:  jmp    086e6737 <+0x6697>
086e67cc +0x672c:  mov    %eax,(%esp)
086e67cf +0x672f:  nop
086e67d0 +0x6730:  call   08725ce0 <__cxa_begin_catch>
086e67d5 +0x6735:  movl   $0x1,0x4(%esp)
086e67dd +0x673d:  mov    (%ebx),%eax
086e67df +0x673f:  add    -0xc(%eax),%ebx
086e67e2 +0x6742:  mov    %ebx,(%esp)
086e67e5 +0x6745:  call   086e0cb0 <+0xc10>
086e67ea +0x674a:  call   08724be0 <__cxa_rethrow>
086e67ef +0x674f:  mov    %eax,-0x1c(%ebp)
086e67f2 +0x6752:  call   08725c30 <__cxa_end_catch>
086e67f7 +0x6757:  mov    -0x1c(%ebp),%eax
086e67fa +0x675a:  mov    %eax,(%esp)
086e67fd +0x675d:  call   08ae3750 <_Unwind_Resume>
086e6802 +0x6762:  jmp    086e67ef <+0x674f>
086e6804 +0x6764:  nop
086e6805 +0x6765:  nop
086e6806 +0x6766:  nop
086e6807 +0x6767:  nop
086e6808 +0x6768:  nop
086e6809 +0x6769:  nop
086e680a +0x676a:  nop
086e680b +0x676b:  nop
086e680c +0x676c:  nop
086e680d +0x676d:  nop
086e680e +0x676e:  nop
086e680f +0x676f:  nop
086e6810 +0x6770:  push   %ebp
086e6811 +0x6771:  mov    %esp,%ebp
086e6813 +0x6773:  push   %ebx
086e6814 +0x6774:  sub    $0x34,%esp
086e6817 +0x6777:  mov    0x8(%ebp),%ebx
086e681a +0x677a:  lea    -0x9(%ebp),%eax
086e681d +0x677d:  movl   $0x0,0x4(%ebx)
086e6824 +0x6784:  movl   $0x1,0x8(%esp)
086e682c +0x678c:  mov    %ebx,0x4(%esp)
086e6830 +0x6790:  mov    %eax,(%esp)
086e6833 +0x6793:  call   086e2f70 <+0x2ed0>
086e6838 +0x6798:  cmpb   $0x0,-0x9(%ebp)
086e683c +0x679c:  jne    086e6848 <+0x67a8>
086e683e +0x679e:  mov    %ebx,%eax
086e6840 +0x67a0:  add    $0x34,%esp
086e6843 +0x67a3:  pop    %ebx
086e6844 +0x67a4:  pop    %ebp
086e6845 +0x67a5:  ret
086e6846 +0x67a6:  xchg   %ax,%ax
086e6848 +0x67a8:  mov    (%ebx),%eax
086e684a +0x67aa:  mov    -0xc(%eax),%eax
086e684d +0x67ad:  mov    0x7c(%ebx,%eax,1),%edx
086e6851 +0x67b1:  mov    0x8(%edx),%ecx
086e6854 +0x67b4:  cmp    0xc(%edx),%ecx
086e6857 +0x67b7:  jae    086e6899 <+0x67f9>
086e6859 +0x67b9:  mov    (%ecx),%eax
086e685b +0x67bb:  add    $0x4,%ecx
086e685e +0x67be:  mov    %ecx,0x8(%edx)
086e6861 +0x67c1:  cmp    $0xffffffff,%eax
086e6864 +0x67c4:  je     086e6878 <+0x67d8>
086e6866 +0x67c6:  movl   $0x1,0x4(%ebx)
086e686d +0x67cd:  mov    %ebx,%eax
086e686f +0x67cf:  add    $0x34,%esp
086e6872 +0x67d2:  pop    %ebx
086e6873 +0x67d3:  pop    %ebp
086e6874 +0x67d4:  ret
086e6875 +0x67d5:  lea    0x0(%esi),%esi
086e6878 +0x67d8:  mov    (%ebx),%eax
086e687a +0x67da:  mov    -0xc(%eax),%edx
086e687d +0x67dd:  add    %ebx,%edx
086e687f +0x67df:  mov    0x14(%edx),%eax
086e6882 +0x67e2:  mov    %edx,(%esp)
086e6885 +0x67e5:  or     $0x2,%eax
086e6888 +0x67e8:  mov    %eax,0x4(%esp)
086e688c +0x67ec:  call   086e0cf0 <+0xc50>
086e6891 +0x67f1:  mov    %ebx,%eax
086e6893 +0x67f3:  add    $0x34,%esp
086e6896 +0x67f6:  pop    %ebx
086e6897 +0x67f7:  pop    %ebp
086e6898 +0x67f8:  ret
086e6899 +0x67f9:  mov    (%edx),%eax
086e689b +0x67fb:  mov    %edx,(%esp)
086e689e +0x67fe:  call   *0x28(%eax)
086e68a1 +0x6801:  jmp    086e6861 <+0x67c1>
086e68a3 +0x6803:  cmp    $0x2,%edx
086e68a6 +0x6806:  je     086e68d7 <+0x6837>
086e68a8 +0x6808:  mov    %eax,(%esp)
086e68ab +0x680b:  nop
086e68ac +0x680c:  lea    0x0(%esi,%eiz,1),%esi
086e68b0 +0x6810:  call   08725ce0 <__cxa_begin_catch>
086e68b5 +0x6815:  movl   $0x1,0x4(%esp)
086e68bd +0x681d:  mov    (%ebx),%eax
086e68bf +0x681f:  mov    -0xc(%eax),%eax
086e68c2 +0x6822:  lea    (%ebx,%eax,1),%eax
086e68c5 +0x6825:  mov    %eax,(%esp)
086e68c8 +0x6828:  call   086e0cb0 <+0xc10>
086e68cd +0x682d:  call   08725c30 <__cxa_end_catch>
086e68d2 +0x6832:  jmp    086e683e <+0x679e>
086e68d7 +0x6837:  mov    %eax,(%esp)
086e68da +0x683a:  call   08725ce0 <__cxa_begin_catch>
086e68df +0x683f:  movl   $0x1,0x4(%esp)
086e68e7 +0x6847:  mov    (%ebx),%eax
086e68e9 +0x6849:  add    -0xc(%eax),%ebx
086e68ec +0x684c:  mov    %ebx,(%esp)
086e68ef +0x684f:  call   086e0cb0 <+0xc10>
086e68f4 +0x6854:  call   08724be0 <__cxa_rethrow>
086e68f9 +0x6859:  mov    %eax,-0x1c(%ebp)
086e68fc +0x685c:  call   08725c30 <__cxa_end_catch>
086e6901 +0x6861:  mov    -0x1c(%ebp),%eax
086e6904 +0x6864:  mov    %eax,(%esp)
086e6907 +0x6867:  call   08ae3750 <_Unwind_Resume>
086e690c +0x686c:  jmp    086e68f9 <+0x6859>
086e690e +0x686e:  nop
086e690f +0x686f:  nop
086e6910 +0x6870:  push   %ebp
086e6911 +0x6871:  mov    %esp,%ebp
086e6913 +0x6873:  push   %ebx
086e6914 +0x6874:  sub    $0x14,%esp
086e6917 +0x6877:  mov    0x8(%ebp),%ebx
086e691a +0x687a:  mov    (%ebx),%eax
086e691c +0x687c:  mov    -0xc(%eax),%eax
086e691f +0x687f:  mov    0x80(%ebx,%eax,1),%eax
086e6926 +0x6886:  test   %eax,%eax
086e6928 +0x6888:  je     086e695a <+0x68ba>
086e692a +0x688a:  mov    (%eax),%edx
086e692c +0x688c:  movl   $0xa,0x4(%esp)
086e6934 +0x6894:  mov    %eax,(%esp)
086e6937 +0x6897:  call   *0x28(%edx)
086e693a +0x689a:  mov    %ebx,(%esp)
086e693d +0x689d:  mov    %eax,0xc(%esp)
086e6941 +0x68a1:  mov    0x10(%ebp),%eax
086e6944 +0x68a4:  mov    %eax,0x8(%esp)
086e6948 +0x68a8:  mov    0xc(%ebp),%eax
086e694b +0x68ab:  mov    %eax,0x4(%esp)
086e694f +0x68af:  call   086e7c80 <_ZNSt13basic_istreamIwSt11char_traitsIwEE7getlineEPwiw>  ; std::basic_istream<wchar_t, std::char_traits<wchar_t> >::getline(wchar_t*, int, wchar_t)
086e6954 +0x68b4:  add    $0x14,%esp
086e6957 +0x68b7:  pop    %ebx
086e6958 +0x68b8:  pop    %ebp
086e6959 +0x68b9:  ret
086e695a +0x68ba:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e695f +0x68bf:  nop
086e6960 +0x68c0:  push   %ebp
086e6961 +0x68c1:  mov    %esp,%ebp
086e6963 +0x68c3:  push   %edi
086e6964 +0x68c4:  push   %esi
086e6965 +0x68c5:  push   %ebx
086e6966 +0x68c6:  sub    $0x3c,%esp
086e6969 +0x68c9:  mov    0x8(%ebp),%ebx
086e696c +0x68cc:  lea    -0x1c(%ebp),%esi
086e696f +0x68cf:  mov    (%ebx),%eax
086e6971 +0x68d1:  mov    -0xc(%eax),%eax
086e6974 +0x68d4:  mov    %esi,(%esp)
086e6977 +0x68d7:  lea    (%ebx,%eax,1),%eax
086e697a +0x68da:  add    $0x6c,%eax
086e697d +0x68dd:  mov    %eax,0x4(%esp)
086e6981 +0x68e1:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
086e6986 +0x68e6:  mov    %esi,(%esp)
086e6989 +0x68e9:  call   0870c020 <_GLOBAL__I_wlocale_inst.cc+0xf30>  ; global constructors keyed to wlocale_inst.cc+0xf30
086e698e +0x68ee:  mov    %eax,%edi
086e6990 +0x68f0:  mov    %esi,(%esp)
086e6993 +0x68f3:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e6998 +0x68f8:  mov    (%ebx),%eax
086e699a +0x68fa:  mov    -0xc(%eax),%eax
086e699d +0x68fd:  mov    0x7c(%ebx,%eax,1),%esi
086e69a1 +0x6901:  mov    0x8(%esi),%eax
086e69a4 +0x6904:  cmp    0xc(%esi),%eax
086e69a7 +0x6907:  jae    086e6a1b <+0x697b>
086e69a9 +0x6909:  lea    0x0(%esi,%eiz,1),%esi
086e69b0 +0x6910:  mov    (%eax),%edx
086e69b2 +0x6912:  cmp    $0xffffffff,%edx
086e69b5 +0x6915:  jne    086e69e0 <+0x6940>
086e69b7 +0x6917:  mov    (%ebx),%eax
086e69b9 +0x6919:  mov    -0xc(%eax),%edx
086e69bc +0x691c:  add    %ebx,%edx
086e69be +0x691e:  mov    0x14(%edx),%eax
086e69c1 +0x6921:  mov    %edx,(%esp)
086e69c4 +0x6924:  or     $0x2,%eax
086e69c7 +0x6927:  mov    %eax,0x4(%esp)
086e69cb +0x692b:  call   086e0cf0 <+0xc50>
086e69d0 +0x6930:  add    $0x3c,%esp
086e69d3 +0x6933:  mov    %ebx,%eax
086e69d5 +0x6935:  pop    %ebx
086e69d6 +0x6936:  pop    %esi
086e69d7 +0x6937:  pop    %edi
086e69d8 +0x6938:  pop    %ebp
086e69d9 +0x6939:  ret
086e69da +0x693a:  lea    0x0(%esi),%esi
086e69e0 +0x6940:  mov    (%edi),%eax
086e69e2 +0x6942:  mov    %edx,-0x2c(%ebp)
086e69e5 +0x6945:  mov    %edx,0x8(%esp)
086e69e9 +0x6949:  movl   $0x2000,0x4(%esp)
086e69f1 +0x6951:  mov    %edi,(%esp)
086e69f4 +0x6954:  call   *0x8(%eax)
086e69f7 +0x6957:  mov    -0x2c(%ebp),%edx
086e69fa +0x695a:  test   %al,%al
086e69fc +0x695c:  je     086e6a28 <+0x6988>
086e69fe +0x695e:  mov    0x8(%esi),%edx
086e6a01 +0x6961:  cmp    0xc(%esi),%edx
086e6a04 +0x6964:  jae    086e6a37 <+0x6997>
086e6a06 +0x6966:  mov    (%edx),%eax
086e6a08 +0x6968:  add    $0x4,%edx
086e6a0b +0x696b:  mov    %edx,0x8(%esi)
086e6a0e +0x696e:  cmp    $0xffffffff,%eax
086e6a11 +0x6971:  je     086e69b7 <+0x6917>
086e6a13 +0x6973:  mov    0x8(%esi),%eax
086e6a16 +0x6976:  cmp    0xc(%esi),%eax
086e6a19 +0x6979:  jb     086e69b0 <+0x6910>
086e6a1b +0x697b:  mov    (%esi),%eax
086e6a1d +0x697d:  mov    %esi,(%esp)
086e6a20 +0x6980:  call   *0x24(%eax)
086e6a23 +0x6983:  mov    %eax,%edx
086e6a25 +0x6985:  jmp    086e69b2 <+0x6912>
086e6a27 +0x6987:  nop
086e6a28 +0x6988:  cmp    $0xffffffff,%edx
086e6a2b +0x698b:  je     086e69b7 <+0x6917>
086e6a2d +0x698d:  add    $0x3c,%esp
086e6a30 +0x6990:  mov    %ebx,%eax
086e6a32 +0x6992:  pop    %ebx
086e6a33 +0x6993:  pop    %esi
086e6a34 +0x6994:  pop    %edi
086e6a35 +0x6995:  pop    %ebp
086e6a36 +0x6996:  ret
086e6a37 +0x6997:  mov    (%esi),%eax
086e6a39 +0x6999:  mov    %esi,(%esp)
086e6a3c +0x699c:  call   *0x28(%eax)
086e6a3f +0x699f:  jmp    086e6a0e <+0x696e>
086e6a41 +0x69a1:  mov    %eax,%ebx
086e6a43 +0x69a3:  mov    %esi,(%esp)
086e6a46 +0x69a6:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e6a4b +0x69ab:  mov    %ebx,(%esp)
086e6a4e +0x69ae:  call   08ae3750 <_Unwind_Resume>
086e6a53 +0x69b3:  nop
086e6a54 +0x69b4:  nop
086e6a55 +0x69b5:  nop
086e6a56 +0x69b6:  nop
086e6a57 +0x69b7:  nop
086e6a58 +0x69b8:  nop
086e6a59 +0x69b9:  nop
086e6a5a +0x69ba:  nop
086e6a5b +0x69bb:  nop
086e6a5c +0x69bc:  nop
086e6a5d +0x69bd:  nop
086e6a5e +0x69be:  nop
086e6a5f +0x69bf:  nop
086e6a60 +0x69c0:  push   %ebp
086e6a61 +0x69c1:  mov    %esp,%ebp
086e6a63 +0x69c3:  push   %edi
086e6a64 +0x69c4:  push   %esi
086e6a65 +0x69c5:  push   %ebx
086e6a66 +0x69c6:  sub    $0x3c,%esp
086e6a69 +0x69c9:  mov    0x8(%ebp),%eax
086e6a6c +0x69cc:  mov    0xc(%ebp),%edi
086e6a6f +0x69cf:  movl   $0x0,-0x30(%ebp)
086e6a76 +0x69d6:  movl   $0x0,0x8(%esp)
086e6a7e +0x69de:  mov    %eax,0x4(%esp)
086e6a82 +0x69e2:  lea    -0x19(%ebp),%eax
086e6a85 +0x69e5:  mov    %eax,(%esp)
086e6a88 +0x69e8:  call   086e2f70 <+0x2ed0>
086e6a8d +0x69ed:  mov    $0x4,%eax
086e6a92 +0x69f2:  cmpb   $0x0,-0x19(%ebp)
086e6a96 +0x69f6:  jne    086e6ac0 <+0x6a20>
086e6a98 +0x69f8:  mov    0x8(%ebp),%ecx
086e6a9b +0x69fb:  mov    (%ecx),%edx
086e6a9d +0x69fd:  mov    -0xc(%edx),%edx
086e6aa0 +0x6a00:  add    %ecx,%edx
086e6aa2 +0x6a02:  or     0x14(%edx),%eax
086e6aa5 +0x6a05:  mov    %edx,(%esp)
086e6aa8 +0x6a08:  mov    %eax,0x4(%esp)
086e6aac +0x6a0c:  call   086e0cf0 <+0xc50>
086e6ab1 +0x6a11:  mov    0x8(%ebp),%eax
086e6ab4 +0x6a14:  add    $0x3c,%esp
086e6ab7 +0x6a17:  pop    %ebx
086e6ab8 +0x6a18:  pop    %esi
086e6ab9 +0x6a19:  pop    %edi
086e6aba +0x6a1a:  pop    %ebp
086e6abb +0x6a1b:  ret
086e6abc +0x6a1c:  lea    0x0(%esi,%eiz,1),%esi
086e6ac0 +0x6a20:  mov    0x8(%ebp),%edx
086e6ac3 +0x6a23:  mov    (%edx),%eax
086e6ac5 +0x6a25:  mov    -0xc(%eax),%eax
086e6ac8 +0x6a28:  add    %edx,%eax
086e6aca +0x6a2a:  mov    0x8(%eax),%ecx
086e6acd +0x6a2d:  test   %ecx,%ecx
086e6acf +0x6a2f:  mov    %ecx,-0x2c(%ebp)
086e6ad2 +0x6a32:  jle    086e6bd6 <+0x6b36>
086e6ad8 +0x6a38:  add    $0x6c,%eax
086e6adb +0x6a3b:  lea    -0x20(%ebp),%ebx
086e6ade +0x6a3e:  mov    %eax,0x4(%esp)
086e6ae2 +0x6a42:  mov    %ebx,(%esp)
086e6ae5 +0x6a45:  call   086dadf0 <_ZNSt6localeC1ERKS_>  ; std::locale::locale(std::locale const&)
086e6aea +0x6a4a:  mov    %ebx,(%esp)
086e6aed +0x6a4d:  call   0870c020 <_GLOBAL__I_wlocale_inst.cc+0xf30>  ; global constructors keyed to wlocale_inst.cc+0xf30
086e6af2 +0x6a52:  mov    %eax,-0x38(%ebp)
086e6af5 +0x6a55:  mov    %ebx,(%esp)
086e6af8 +0x6a58:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e6afd +0x6a5d:  mov    0x8(%ebp),%edx
086e6b00 +0x6a60:  mov    (%edx),%eax
086e6b02 +0x6a62:  mov    -0xc(%eax),%eax
086e6b05 +0x6a65:  mov    0x7c(%edx,%eax,1),%ebx
086e6b09 +0x6a69:  mov    0x8(%ebx),%eax
086e6b0c +0x6a6c:  cmp    0xc(%ebx),%eax
086e6b0f +0x6a6f:  jae    086e6c3c <+0x6b9c>
086e6b15 +0x6a75:  mov    (%eax),%esi
086e6b17 +0x6a77:  mov    -0x2c(%ebp),%ecx
086e6b1a +0x6a7a:  movl   $0x0,-0x30(%ebp)
086e6b21 +0x6a81:  movl   $0x1,-0x2c(%ebp)
086e6b28 +0x6a88:  sub    $0x1,%ecx
086e6b2b +0x6a8b:  mov    %ecx,-0x34(%ebp)
086e6b2e +0x6a8e:  xchg   %ax,%ax
086e6b30 +0x6a90:  mov    -0x34(%ebp),%eax
086e6b33 +0x6a93:  cmp    %eax,-0x30(%ebp)
086e6b36 +0x6a96:  jge    086e6b78 <+0x6ad8>
086e6b38 +0x6a98:  cmp    $0xffffffff,%esi
086e6b3b +0x6a9b:  jne    086e6b88 <+0x6ae8>
086e6b3d +0x6a9d:  mov    $0x2,%eax
086e6b42 +0x6aa2:  mov    0x8(%ebp),%ecx
086e6b45 +0x6aa5:  movl   $0x0,(%edi)
086e6b4b +0x6aab:  mov    (%ecx),%edx
086e6b4d +0x6aad:  mov    -0xc(%edx),%edx
086e6b50 +0x6ab0:  movl   $0x0,0x8(%ecx,%edx,1)
086e6b58 +0x6ab8:  mov    -0x30(%ebp),%edx
086e6b5b +0x6abb:  test   %edx,%edx
086e6b5d +0x6abd:  je     086e6c87 <+0x6be7>
086e6b63 +0x6ac3:  test   %eax,%eax
086e6b65 +0x6ac5:  jne    086e6a98 <+0x69f8>
086e6b6b +0x6acb:  mov    0x8(%ebp),%eax
086e6b6e +0x6ace:  add    $0x3c,%esp
086e6b71 +0x6ad1:  pop    %ebx
086e6b72 +0x6ad2:  pop    %esi
086e6b73 +0x6ad3:  pop    %edi
086e6b74 +0x6ad4:  pop    %ebp
086e6b75 +0x6ad5:  ret
086e6b76 +0x6ad6:  xchg   %ax,%ax
086e6b78 +0x6ad8:  cmp    $0xffffffff,%esi
086e6b7b +0x6adb:  je     086e6b3d <+0x6a9d>
086e6b7d +0x6add:  xor    %eax,%eax
086e6b7f +0x6adf:  jmp    086e6b42 <+0x6aa2>
086e6b81 +0x6ae1:  lea    0x0(%esi,%eiz,1),%esi
086e6b88 +0x6ae8:  mov    -0x38(%ebp),%edx
086e6b8b +0x6aeb:  mov    (%edx),%eax
086e6b8d +0x6aed:  mov    %esi,0x8(%esp)
086e6b91 +0x6af1:  movl   $0x2000,0x4(%esp)
086e6b99 +0x6af9:  mov    %edx,(%esp)
086e6b9c +0x6afc:  call   *0x8(%eax)
086e6b9f +0x6aff:  test   %al,%al
086e6ba1 +0x6b01:  jne    086e6b7d <+0x6add>
086e6ba3 +0x6b03:  mov    -0x2c(%ebp),%ecx
086e6ba6 +0x6b06:  mov    0x8(%ebx),%edx
086e6ba9 +0x6b09:  cmp    0xc(%ebx),%edx
086e6bac +0x6b0c:  mov    %esi,(%edi)
086e6bae +0x6b0e:  mov    %ecx,-0x30(%ebp)
086e6bb1 +0x6b11:  jae    086e6be2 <+0x6b42>
086e6bb3 +0x6b13:  mov    (%edx),%eax
086e6bb5 +0x6b15:  add    $0x4,%edx
086e6bb8 +0x6b18:  mov    %edx,0x8(%ebx)
086e6bbb +0x6b1b:  cmp    $0xffffffff,%eax
086e6bbe +0x6b1e:  je     086e6bf8 <+0x6b58>
086e6bc0 +0x6b20:  mov    0x8(%ebx),%eax
086e6bc3 +0x6b23:  cmp    0xc(%ebx),%eax
086e6bc6 +0x6b26:  jae    086e6bec <+0x6b4c>
086e6bc8 +0x6b28:  mov    (%eax),%esi
086e6bca +0x6b2a:  add    $0x4,%edi
086e6bcd +0x6b2d:  addl   $0x1,-0x2c(%ebp)
086e6bd1 +0x6b31:  jmp    086e6b30 <+0x6a90>
086e6bd6 +0x6b36:  movl   $0x7fffffff,-0x2c(%ebp)
086e6bdd +0x6b3d:  jmp    086e6ad8 <+0x6a38>
086e6be2 +0x6b42:  mov    (%ebx),%eax
086e6be4 +0x6b44:  mov    %ebx,(%esp)
086e6be7 +0x6b47:  call   *0x28(%eax)
086e6bea +0x6b4a:  jmp    086e6bbb <+0x6b1b>
086e6bec +0x6b4c:  mov    (%ebx),%eax
086e6bee +0x6b4e:  mov    %ebx,(%esp)
086e6bf1 +0x6b51:  call   *0x24(%eax)
086e6bf4 +0x6b54:  mov    %eax,%esi
086e6bf6 +0x6b56:  jmp    086e6bca <+0x6b2a>
086e6bf8 +0x6b58:  or     $0xffffffff,%esi
086e6bfb +0x6b5b:  jmp    086e6bca <+0x6b2a>
086e6bfd +0x6b5d:  mov    %eax,%esi
086e6bff +0x6b5f:  mov    %edx,%edi
086e6c01 +0x6b61:  mov    %ebx,(%esp)
086e6c04 +0x6b64:  call   086dbcd0 <_ZNSt6localeD1Ev>  ; std::locale::~locale()
086e6c09 +0x6b69:  cmp    $0x2,%edi
086e6c0c +0x6b6c:  je     086e6c5a <+0x6bba>
086e6c0e +0x6b6e:  mov    %esi,(%esp)
086e6c11 +0x6b71:  call   08725ce0 <__cxa_begin_catch>
086e6c16 +0x6b76:  mov    0x8(%ebp),%ecx
086e6c19 +0x6b79:  movl   $0x1,0x4(%esp)
086e6c21 +0x6b81:  mov    (%ecx),%eax
086e6c23 +0x6b83:  mov    -0xc(%eax),%eax
086e6c26 +0x6b86:  add    %ecx,%eax
086e6c28 +0x6b88:  mov    %eax,(%esp)
086e6c2b +0x6b8b:  call   086e0cb0 <+0xc10>
086e6c30 +0x6b90:  call   08725c30 <__cxa_end_catch>
086e6c35 +0x6b95:  xor    %eax,%eax
086e6c37 +0x6b97:  jmp    086e6b58 <+0x6ab8>
086e6c3c +0x6b9c:  mov    (%ebx),%eax
086e6c3e +0x6b9e:  mov    %ebx,(%esp)
086e6c41 +0x6ba1:  call   *0x24(%eax)
086e6c44 +0x6ba4:  mov    %eax,%esi
086e6c46 +0x6ba6:  jmp    086e6b17 <+0x6a77>
086e6c4b +0x6bab:  mov    %eax,%esi
086e6c4d +0x6bad:  call   08725c30 <__cxa_end_catch>
086e6c52 +0x6bb2:  mov    %esi,(%esp)
086e6c55 +0x6bb5:  call   08ae3750 <_Unwind_Resume>
086e6c5a +0x6bba:  mov    %esi,(%esp)
086e6c5d +0x6bbd:  call   08725ce0 <__cxa_begin_catch>
086e6c62 +0x6bc2:  mov    0x8(%ebp),%edx
086e6c65 +0x6bc5:  movl   $0x1,0x4(%esp)
086e6c6d +0x6bcd:  mov    (%edx),%eax
086e6c6f +0x6bcf:  mov    -0xc(%eax),%eax
086e6c72 +0x6bd2:  add    %edx,%eax
086e6c74 +0x6bd4:  mov    %eax,(%esp)
086e6c77 +0x6bd7:  call   086e0cb0 <+0xc10>
086e6c7c +0x6bdc:  call   08724be0 <__cxa_rethrow>
086e6c81 +0x6be1:  mov    %eax,%esi
086e6c83 +0x6be3:  mov    %edx,%edi
086e6c85 +0x6be5:  jmp    086e6c09 <+0x6b69>
086e6c87 +0x6be7:  or     $0x4,%eax
086e6c8a +0x6bea:  jmp    086e6a98 <+0x69f8>
086e6c8f +0x6bef:  nop
086e6c90 +0x6bf0:  jmp    086e6c4b <+0x6bab>
086e6c92 +0x6bf2:  nop
086e6c93 +0x6bf3:  nop
086e6c94 +0x6bf4:  nop
086e6c95 +0x6bf5:  nop
086e6c96 +0x6bf6:  nop
086e6c97 +0x6bf7:  nop
086e6c98 +0x6bf8:  nop
086e6c99 +0x6bf9:  nop
086e6c9a +0x6bfa:  nop
086e6c9b +0x6bfb:  nop
086e6c9c +0x6bfc:  nop
086e6c9d +0x6bfd:  nop
086e6c9e +0x6bfe:  nop
086e6c9f +0x6bff:  nop
086e6ca0 +0x6c00:  push   %ebp
086e6ca1 +0x6c01:  mov    %esp,%ebp
086e6ca3 +0x6c03:  push   %edi
086e6ca4 +0x6c04:  push   %esi
086e6ca5 +0x6c05:  push   %ebx
086e6ca6 +0x6c06:  sub    $0x2c,%esp
086e6ca9 +0x6c09:  mov    0x8(%ebp),%eax
086e6cac +0x6c0c:  mov    0xc(%ebp),%edi
086e6caf +0x6c0f:  movl   $0x0,0x4(%eax)
086e6cb6 +0x6c16:  mov    %eax,0x4(%esp)
086e6cba +0x6c1a:  lea    -0x19(%ebp),%eax
086e6cbd +0x6c1d:  movl   $0x1,0x8(%esp)
086e6cc5 +0x6c25:  mov    %eax,(%esp)
086e6cc8 +0x6c28:  call   086e2f70 <+0x2ed0>
086e6ccd +0x6c2d:  cmpb   $0x0,-0x19(%ebp)
086e6cd1 +0x6c31:  jne    086e6d20 <+0x6c80>
086e6cd3 +0x6c33:  nop
086e6cd4 +0x6c34:  lea    0x0(%esi,%eiz,1),%esi
086e6cd8 +0x6c38:  xor    %eax,%eax
086e6cda +0x6c3a:  mov    0x8(%ebp),%edx
086e6cdd +0x6c3d:  mov    0x4(%edx),%ecx
086e6ce0 +0x6c40:  test   %ecx,%ecx
086e6ce2 +0x6c42:  jne    086e6d10 <+0x6c70>
086e6ce4 +0x6c44:  or     $0x4,%eax
086e6ce7 +0x6c47:  mov    0x8(%ebp),%ecx
086e6cea +0x6c4a:  mov    (%ecx),%edx
086e6cec +0x6c4c:  mov    -0xc(%edx),%edx
086e6cef +0x6c4f:  add    %ecx,%edx
086e6cf1 +0x6c51:  or     0x14(%edx),%eax
086e6cf4 +0x6c54:  mov    %edx,(%esp)
086e6cf7 +0x6c57:  mov    %eax,0x4(%esp)
086e6cfb +0x6c5b:  call   086e0cf0 <+0xc50>
086e6d00 +0x6c60:  mov    0x8(%ebp),%eax
086e6d03 +0x6c63:  add    $0x2c,%esp
086e6d06 +0x6c66:  pop    %ebx
086e6d07 +0x6c67:  pop    %esi
086e6d08 +0x6c68:  pop    %edi
086e6d09 +0x6c69:  pop    %ebp
086e6d0a +0x6c6a:  ret
086e6d0b +0x6c6b:  nop
086e6d0c +0x6c6c:  lea    0x0(%esi,%eiz,1),%esi
086e6d10 +0x6c70:  test   %eax,%eax
086e6d12 +0x6c72:  jne    086e6ce7 <+0x6c47>
086e6d14 +0x6c74:  mov    0x8(%ebp),%eax
086e6d17 +0x6c77:  add    $0x2c,%esp
086e6d1a +0x6c7a:  pop    %ebx
086e6d1b +0x6c7b:  pop    %esi
086e6d1c +0x6c7c:  pop    %edi
086e6d1d +0x6c7d:  pop    %ebp
086e6d1e +0x6c7e:  ret
086e6d1f +0x6c7f:  nop
086e6d20 +0x6c80:  mov    0x8(%ebp),%edx
086e6d23 +0x6c83:  mov    (%edx),%eax
086e6d25 +0x6c85:  mov    -0xc(%eax),%eax
086e6d28 +0x6c88:  mov    0x7c(%edx,%eax,1),%ebx
086e6d2c +0x6c8c:  mov    0x8(%ebx),%eax
086e6d2f +0x6c8f:  cmp    0xc(%ebx),%eax
086e6d32 +0x6c92:  jae    086e6d7d <+0x6cdd>
086e6d34 +0x6c94:  lea    0x0(%esi,%eiz,1),%esi
086e6d38 +0x6c98:  mov    (%eax),%esi
086e6d3a +0x6c9a:  cmp    $0xffffffff,%esi
086e6d3d +0x6c9d:  je     086e6da0 <+0x6d00>
086e6d3f +0x6c9f:  cmp    %esi,0x10(%ebp)
086e6d42 +0x6ca2:  je     086e6cd8 <+0x6c38>
086e6d44 +0x6ca4:  mov    0x14(%edi),%eax
086e6d47 +0x6ca7:  cmp    0x18(%edi),%eax
086e6d4a +0x6caa:  jae    086e6db4 <+0x6d14>
086e6d4c +0x6cac:  addl   $0x4,0x14(%edi)
086e6d50 +0x6cb0:  mov    %esi,(%eax)
086e6d52 +0x6cb2:  mov    %esi,%eax
086e6d54 +0x6cb4:  cmp    $0xffffffff,%eax
086e6d57 +0x6cb7:  je     086e6d90 <+0x6cf0>
086e6d59 +0x6cb9:  mov    0x8(%ebp),%ecx
086e6d5c +0x6cbc:  mov    0x8(%ebx),%edx
086e6d5f +0x6cbf:  addl   $0x1,0x4(%ecx)
086e6d63 +0x6cc3:  cmp    0xc(%ebx),%edx
086e6d66 +0x6cc6:  jae    086e6daa <+0x6d0a>
086e6d68 +0x6cc8:  mov    (%edx),%eax
086e6d6a +0x6cca:  add    $0x4,%edx
086e6d6d +0x6ccd:  mov    %edx,0x8(%ebx)
086e6d70 +0x6cd0:  cmp    $0xffffffff,%eax
086e6d73 +0x6cd3:  je     086e6da0 <+0x6d00>
086e6d75 +0x6cd5:  mov    0x8(%ebx),%eax
086e6d78 +0x6cd8:  cmp    0xc(%ebx),%eax
086e6d7b +0x6cdb:  jb     086e6d38 <+0x6c98>
086e6d7d +0x6cdd:  mov    (%ebx),%eax
086e6d7f +0x6cdf:  mov    %ebx,(%esp)
086e6d82 +0x6ce2:  call   *0x24(%eax)
086e6d85 +0x6ce5:  mov    %eax,%esi
086e6d87 +0x6ce7:  jmp    086e6d3a <+0x6c9a>
086e6d89 +0x6ce9:  lea    0x0(%esi,%eiz,1),%esi
086e6d90 +0x6cf0:  cmp    $0xffffffff,%esi
086e6d93 +0x6cf3:  jne    086e6cd8 <+0x6c38>
086e6d99 +0x6cf9:  lea    0x0(%esi,%eiz,1),%esi
086e6da0 +0x6d00:  mov    $0x2,%eax
086e6da5 +0x6d05:  jmp    086e6cda <+0x6c3a>
086e6daa +0x6d0a:  mov    (%ebx),%eax
086e6dac +0x6d0c:  mov    %ebx,(%esp)
086e6daf +0x6d0f:  call   *0x28(%eax)
086e6db2 +0x6d12:  jmp    086e6d70 <+0x6cd0>
086e6db4 +0x6d14:  mov    (%edi),%eax
086e6db6 +0x6d16:  mov    %esi,0x4(%esp)
086e6dba +0x6d1a:  mov    %edi,(%esp)
086e6dbd +0x6d1d:  call   *0x34(%eax)
086e6dc0 +0x6d20:  jmp    086e6d54 <+0x6cb4>
086e6dc2 +0x6d22:  cmp    $0x2,%edx
086e6dc5 +0x6d25:  je     086e6df5 <+0x6d55>
086e6dc7 +0x6d27:  mov    %eax,(%esp)
086e6dca +0x6d2a:  call   08725ce0 <__cxa_begin_catch>
086e6dcf +0x6d2f:  mov    0x8(%ebp),%ecx
086e6dd2 +0x6d32:  movl   $0x1,0x4(%esp)
086e6dda +0x6d3a:  mov    (%ecx),%eax
086e6ddc +0x6d3c:  mov    -0xc(%eax),%eax
086e6ddf +0x6d3f:  add    %ecx,%eax
086e6de1 +0x6d41:  mov    %eax,(%esp)
086e6de4 +0x6d44:  call   086e0cb0 <+0xc10>
086e6de9 +0x6d49:  call   08725c30 <__cxa_end_catch>
086e6dee +0x6d4e:  xor    %eax,%eax
086e6df0 +0x6d50:  jmp    086e6cda <+0x6c3a>
086e6df5 +0x6d55:  mov    %eax,(%esp)
086e6df8 +0x6d58:  call   08725ce0 <__cxa_begin_catch>
086e6dfd +0x6d5d:  mov    0x8(%ebp),%edx
086e6e00 +0x6d60:  movl   $0x1,0x4(%esp)
086e6e08 +0x6d68:  mov    (%edx),%eax
086e6e0a +0x6d6a:  mov    -0xc(%eax),%eax
086e6e0d +0x6d6d:  add    %edx,%eax
086e6e0f +0x6d6f:  mov    %eax,(%esp)
086e6e12 +0x6d72:  call   086e0cb0 <+0xc10>
086e6e17 +0x6d77:  call   08724be0 <__cxa_rethrow>
086e6e1c +0x6d7c:  mov    %eax,%ebx
086e6e1e +0x6d7e:  call   08725c30 <__cxa_end_catch>
086e6e23 +0x6d83:  mov    %ebx,(%esp)
086e6e26 +0x6d86:  call   08ae3750 <_Unwind_Resume>
086e6e2b +0x6d8b:  jmp    086e6e1c <+0x6d7c>
086e6e2d +0x6d8d:  nop
086e6e2e +0x6d8e:  nop
086e6e2f +0x6d8f:  nop
086e6e30 +0x6d90:  push   %ebp
086e6e31 +0x6d91:  mov    %esp,%ebp
086e6e33 +0x6d93:  push   %ebx
086e6e34 +0x6d94:  sub    $0x14,%esp
086e6e37 +0x6d97:  mov    0x8(%ebp),%ebx
086e6e3a +0x6d9a:  mov    (%ebx),%eax
086e6e3c +0x6d9c:  mov    -0xc(%eax),%eax
086e6e3f +0x6d9f:  mov    0x80(%ebx,%eax,1),%eax
086e6e46 +0x6da6:  test   %eax,%eax
086e6e48 +0x6da8:  je     086e6e73 <+0x6dd3>
086e6e4a +0x6daa:  mov    (%eax),%edx
086e6e4c +0x6dac:  movl   $0xa,0x4(%esp)
086e6e54 +0x6db4:  mov    %eax,(%esp)
086e6e57 +0x6db7:  call   *0x28(%edx)
086e6e5a +0x6dba:  mov    %ebx,(%esp)
086e6e5d +0x6dbd:  mov    %eax,0x8(%esp)
086e6e61 +0x6dc1:  mov    0xc(%ebp),%eax
086e6e64 +0x6dc4:  mov    %eax,0x4(%esp)
086e6e68 +0x6dc8:  call   086e6ca0 <+0x6c00>
086e6e6d +0x6dcd:  add    $0x14,%esp
086e6e70 +0x6dd0:  pop    %ebx
086e6e71 +0x6dd1:  pop    %ebp
086e6e72 +0x6dd2:  ret
086e6e73 +0x6dd3:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e6e78 +0x6dd8:  nop
086e6e79 +0x6dd9:  nop
086e6e7a +0x6dda:  nop
086e6e7b +0x6ddb:  nop
086e6e7c +0x6ddc:  nop
086e6e7d +0x6ddd:  nop
086e6e7e +0x6dde:  nop
086e6e7f +0x6ddf:  nop
086e6e80 +0x6de0:  push   %ebp
086e6e81 +0x6de1:  mov    %esp,%ebp
086e6e83 +0x6de3:  push   %edi
086e6e84 +0x6de4:  push   %esi
086e6e85 +0x6de5:  push   %ebx
086e6e86 +0x6de6:  sub    $0x2c,%esp
086e6e89 +0x6de9:  mov    0x8(%ebp),%esi
086e6e8c +0x6dec:  mov    0x10(%ebp),%edi
086e6e8f +0x6def:  lea    -0x19(%ebp),%eax
086e6e92 +0x6df2:  movl   $0x0,0x4(%esi)
086e6e99 +0x6df9:  movl   $0x1,0x8(%esp)
086e6ea1 +0x6e01:  mov    %esi,0x4(%esp)
086e6ea5 +0x6e05:  mov    %eax,(%esp)
086e6ea8 +0x6e08:  call   086e2f70 <+0x2ed0>
086e6ead +0x6e0d:  cmpb   $0x0,-0x19(%ebp)
086e6eb1 +0x6e11:  jne    086e6f08 <+0x6e68>
086e6eb3 +0x6e13:  nop
086e6eb4 +0x6e14:  lea    0x0(%esi,%eiz,1),%esi
086e6eb8 +0x6e18:  xor    %eax,%eax
086e6eba +0x6e1a:  test   %edi,%edi
086e6ebc +0x6e1c:  jle    086e6ec7 <+0x6e27>
086e6ebe +0x6e1e:  mov    0xc(%ebp),%edx
086e6ec1 +0x6e21:  movl   $0x0,(%edx)
086e6ec7 +0x6e27:  mov    0x4(%esi),%ebx
086e6eca +0x6e2a:  test   %ebx,%ebx
086e6ecc +0x6e2c:  jne    086e6ef8 <+0x6e58>
086e6ece +0x6e2e:  or     $0x4,%eax
086e6ed1 +0x6e31:  mov    (%esi),%edx
086e6ed3 +0x6e33:  mov    -0xc(%edx),%edx
086e6ed6 +0x6e36:  lea    (%esi,%edx,1),%edx
086e6ed9 +0x6e39:  or     0x14(%edx),%eax
086e6edc +0x6e3c:  mov    %edx,(%esp)
086e6edf +0x6e3f:  mov    %eax,0x4(%esp)
086e6ee3 +0x6e43:  call   086e0cf0 <+0xc50>
086e6ee8 +0x6e48:  add    $0x2c,%esp
086e6eeb +0x6e4b:  mov    %esi,%eax
086e6eed +0x6e4d:  pop    %ebx
086e6eee +0x6e4e:  pop    %esi
086e6eef +0x6e4f:  pop    %edi
086e6ef0 +0x6e50:  pop    %ebp
086e6ef1 +0x6e51:  ret
086e6ef2 +0x6e52:  lea    0x0(%esi),%esi
086e6ef8 +0x6e58:  test   %eax,%eax
086e6efa +0x6e5a:  jne    086e6ed1 <+0x6e31>
086e6efc +0x6e5c:  add    $0x2c,%esp
086e6eff +0x6e5f:  mov    %esi,%eax
086e6f01 +0x6e61:  pop    %ebx
086e6f02 +0x6e62:  pop    %esi
086e6f03 +0x6e63:  pop    %edi
086e6f04 +0x6e64:  pop    %ebp
086e6f05 +0x6e65:  ret
086e6f06 +0x6e66:  xchg   %ax,%ax
086e6f08 +0x6e68:  mov    (%esi),%eax
086e6f0a +0x6e6a:  mov    -0xc(%eax),%eax
086e6f0d +0x6e6d:  mov    0x7c(%esi,%eax,1),%ebx
086e6f11 +0x6e71:  mov    0x8(%ebx),%eax
086e6f14 +0x6e74:  cmp    0xc(%ebx),%eax
086e6f17 +0x6e77:  jae    086e6f61 <+0x6ec1>
086e6f19 +0x6e79:  lea    0x0(%esi,%eiz,1),%esi
086e6f20 +0x6e80:  mov    (%eax),%eax
086e6f22 +0x6e82:  mov    0x4(%esi),%edx
086e6f25 +0x6e85:  add    $0x1,%edx
086e6f28 +0x6e88:  cmp    %edi,%edx
086e6f2a +0x6e8a:  jge    086e6f70 <+0x6ed0>
086e6f2c +0x6e8c:  cmp    $0xffffffff,%eax
086e6f2f +0x6e8f:  je     086e6f80 <+0x6ee0>
086e6f31 +0x6e91:  cmp    0x14(%ebp),%eax
086e6f34 +0x6e94:  je     086e6eb8 <+0x6e18>
086e6f36 +0x6e96:  mov    0xc(%ebp),%ecx
086e6f39 +0x6e99:  mov    %edx,0x4(%esi)
086e6f3c +0x6e9c:  mov    0x8(%ebx),%edx
086e6f3f +0x6e9f:  mov    %eax,(%ecx)
086e6f41 +0x6ea1:  add    $0x4,%ecx
086e6f44 +0x6ea4:  cmp    0xc(%ebx),%edx
086e6f47 +0x6ea7:  mov    %ecx,0xc(%ebp)
086e6f4a +0x6eaa:  jae    086e6f8a <+0x6eea>
086e6f4c +0x6eac:  mov    (%edx),%eax
086e6f4e +0x6eae:  add    $0x4,%edx
086e6f51 +0x6eb1:  mov    %edx,0x8(%ebx)
086e6f54 +0x6eb4:  cmp    $0xffffffff,%eax
086e6f57 +0x6eb7:  je     086e6f22 <+0x6e82>
086e6f59 +0x6eb9:  mov    0x8(%ebx),%eax
086e6f5c +0x6ebc:  cmp    0xc(%ebx),%eax
086e6f5f +0x6ebf:  jb     086e6f20 <+0x6e80>
086e6f61 +0x6ec1:  mov    (%ebx),%eax
086e6f63 +0x6ec3:  mov    %ebx,(%esp)
086e6f66 +0x6ec6:  call   *0x24(%eax)
086e6f69 +0x6ec9:  jmp    086e6f22 <+0x6e82>
086e6f6b +0x6ecb:  nop
086e6f6c +0x6ecc:  lea    0x0(%esi,%eiz,1),%esi
086e6f70 +0x6ed0:  cmp    $0xffffffff,%eax
086e6f73 +0x6ed3:  jne    086e6eb8 <+0x6e18>
086e6f79 +0x6ed9:  lea    0x0(%esi,%eiz,1),%esi
086e6f80 +0x6ee0:  mov    $0x2,%eax
086e6f85 +0x6ee5:  jmp    086e6eba <+0x6e1a>
086e6f8a +0x6eea:  mov    (%ebx),%eax
086e6f8c +0x6eec:  mov    %ebx,(%esp)
086e6f8f +0x6eef:  call   *0x28(%eax)
086e6f92 +0x6ef2:  jmp    086e6f54 <+0x6eb4>
086e6f94 +0x6ef4:  cmp    $0x2,%edx
086e6f97 +0x6ef7:  je     086e6fc9 <+0x6f29>
086e6f99 +0x6ef9:  mov    %eax,(%esp)
086e6f9c +0x6efc:  lea    0x0(%esi,%eiz,1),%esi
086e6fa0 +0x6f00:  call   08725ce0 <__cxa_begin_catch>
086e6fa5 +0x6f05:  movl   $0x1,0x4(%esp)
086e6fad +0x6f0d:  mov    (%esi),%eax
086e6faf +0x6f0f:  mov    -0xc(%eax),%eax
086e6fb2 +0x6f12:  lea    (%esi,%eax,1),%eax
086e6fb5 +0x6f15:  mov    %eax,(%esp)
086e6fb8 +0x6f18:  call   086e0cb0 <+0xc10>
086e6fbd +0x6f1d:  call   08725c30 <__cxa_end_catch>
086e6fc2 +0x6f22:  xor    %eax,%eax
086e6fc4 +0x6f24:  jmp    086e6eba <+0x6e1a>
086e6fc9 +0x6f29:  mov    %eax,(%esp)
086e6fcc +0x6f2c:  call   08725ce0 <__cxa_begin_catch>
086e6fd1 +0x6f31:  movl   $0x1,0x4(%esp)
086e6fd9 +0x6f39:  mov    (%esi),%eax
086e6fdb +0x6f3b:  add    -0xc(%eax),%esi
086e6fde +0x6f3e:  mov    %esi,(%esp)
086e6fe1 +0x6f41:  call   086e0cb0 <+0xc10>
086e6fe6 +0x6f46:  call   08724be0 <__cxa_rethrow>
086e6feb +0x6f4b:  mov    %eax,%ebx
086e6fed +0x6f4d:  call   08725c30 <__cxa_end_catch>
086e6ff2 +0x6f52:  mov    %ebx,(%esp)
086e6ff5 +0x6f55:  call   08ae3750 <_Unwind_Resume>
086e6ffa +0x6f5a:  jmp    086e6feb <+0x6f4b>
086e6ffc +0x6f5c:  nop
086e6ffd +0x6f5d:  nop
086e6ffe +0x6f5e:  nop
086e6fff +0x6f5f:  nop
086e7000 +0x6f60:  push   %ebp
086e7001 +0x6f61:  mov    %esp,%ebp
086e7003 +0x6f63:  push   %ebx
086e7004 +0x6f64:  sub    $0x14,%esp
086e7007 +0x6f67:  mov    0x8(%ebp),%ebx
086e700a +0x6f6a:  mov    (%ebx),%eax
086e700c +0x6f6c:  mov    -0xc(%eax),%eax
086e700f +0x6f6f:  mov    0x80(%ebx,%eax,1),%eax
086e7016 +0x6f76:  test   %eax,%eax
086e7018 +0x6f78:  je     086e704a <+0x6faa>
086e701a +0x6f7a:  mov    (%eax),%edx
086e701c +0x6f7c:  movl   $0xa,0x4(%esp)
086e7024 +0x6f84:  mov    %eax,(%esp)
086e7027 +0x6f87:  call   *0x28(%edx)
086e702a +0x6f8a:  mov    %ebx,(%esp)
086e702d +0x6f8d:  mov    %eax,0xc(%esp)
086e7031 +0x6f91:  mov    0x10(%ebp),%eax
086e7034 +0x6f94:  mov    %eax,0x8(%esp)
086e7038 +0x6f98:  mov    0xc(%ebp),%eax
086e703b +0x6f9b:  mov    %eax,0x4(%esp)
086e703f +0x6f9f:  call   086e6e80 <+0x6de0>
086e7044 +0x6fa4:  add    $0x14,%esp
086e7047 +0x6fa7:  pop    %ebx
086e7048 +0x6fa8:  pop    %ebp
086e7049 +0x6fa9:  ret
086e704a +0x6faa:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e704f +0x6faf:  nop
086e7050 +0x6fb0:  push   %ebp
086e7051 +0x6fb1:  mov    %esp,%ebp
086e7053 +0x6fb3:  push   %ebx
086e7054 +0x6fb4:  sub    $0x34,%esp
086e7057 +0x6fb7:  mov    0x8(%ebp),%ebx
086e705a +0x6fba:  lea    -0x9(%ebp),%eax
086e705d +0x6fbd:  movl   $0x0,0x4(%ebx)
086e7064 +0x6fc4:  movl   $0x1,0x8(%esp)
086e706c +0x6fcc:  mov    %ebx,0x4(%esp)
086e7070 +0x6fd0:  mov    %eax,(%esp)
086e7073 +0x6fd3:  call   086e2f70 <+0x2ed0>
086e7078 +0x6fd8:  xor    %edx,%edx
086e707a +0x6fda:  cmpb   $0x0,-0x9(%ebp)
086e707e +0x6fde:  jne    086e70c0 <+0x7020>
086e7080 +0x6fe0:  mov    0x4(%ebx),%eax
086e7083 +0x6fe3:  test   %eax,%eax
086e7085 +0x6fe5:  jne    086e70b0 <+0x7010>
086e7087 +0x6fe7:  or     $0x4,%edx
086e708a +0x6fea:  mov    (%ebx),%eax
086e708c +0x6fec:  mov    -0xc(%eax),%eax
086e708f +0x6fef:  lea    (%ebx,%eax,1),%eax
086e7092 +0x6ff2:  or     0x14(%eax),%edx
086e7095 +0x6ff5:  mov    %eax,(%esp)
086e7098 +0x6ff8:  mov    %edx,0x4(%esp)
086e709c +0x6ffc:  call   086e0cf0 <+0xc50>
086e70a1 +0x7001:  mov    %ebx,%eax
086e70a3 +0x7003:  add    $0x34,%esp
086e70a6 +0x7006:  pop    %ebx
086e70a7 +0x7007:  pop    %ebp
086e70a8 +0x7008:  ret
086e70a9 +0x7009:  lea    0x0(%esi,%eiz,1),%esi
086e70b0 +0x7010:  test   %edx,%edx
086e70b2 +0x7012:  jne    086e708a <+0x6fea>
086e70b4 +0x7014:  mov    %ebx,%eax
086e70b6 +0x7016:  add    $0x34,%esp
086e70b9 +0x7019:  pop    %ebx
086e70ba +0x701a:  pop    %ebp
086e70bb +0x701b:  ret
086e70bc +0x701c:  lea    0x0(%esi,%eiz,1),%esi
086e70c0 +0x7020:  mov    (%ebx),%eax
086e70c2 +0x7022:  mov    -0xc(%eax),%eax
086e70c5 +0x7025:  mov    0x7c(%ebx,%eax,1),%edx
086e70c9 +0x7029:  mov    0x8(%edx),%ecx
086e70cc +0x702c:  cmp    0xc(%edx),%ecx
086e70cf +0x702f:  jae    086e70f3 <+0x7053>
086e70d1 +0x7031:  mov    (%ecx),%eax
086e70d3 +0x7033:  add    $0x4,%ecx
086e70d6 +0x7036:  mov    %ecx,0x8(%edx)
086e70d9 +0x7039:  cmp    $0xffffffff,%eax
086e70dc +0x703c:  mov    $0x2,%edx
086e70e1 +0x7041:  je     086e7080 <+0x6fe0>
086e70e3 +0x7043:  mov    0xc(%ebp),%edx
086e70e6 +0x7046:  movl   $0x1,0x4(%ebx)
086e70ed +0x704d:  mov    %eax,(%edx)
086e70ef +0x704f:  xor    %edx,%edx
086e70f1 +0x7051:  jmp    086e7080 <+0x6fe0>
086e70f3 +0x7053:  mov    (%edx),%eax
086e70f5 +0x7055:  mov    %edx,(%esp)
086e70f8 +0x7058:  call   *0x28(%eax)
086e70fb +0x705b:  jmp    086e70d9 <+0x7039>
086e70fd +0x705d:  cmp    $0x2,%edx
086e7100 +0x7060:  je     086e712e <+0x708e>
086e7102 +0x7062:  mov    %eax,(%esp)
086e7105 +0x7065:  call   08725ce0 <__cxa_begin_catch>
086e710a +0x706a:  movl   $0x1,0x4(%esp)
086e7112 +0x7072:  mov    (%ebx),%eax
086e7114 +0x7074:  mov    -0xc(%eax),%eax
086e7117 +0x7077:  lea    (%ebx,%eax,1),%eax
086e711a +0x707a:  mov    %eax,(%esp)
086e711d +0x707d:  call   086e0cb0 <+0xc10>
086e7122 +0x7082:  call   08725c30 <__cxa_end_catch>
086e7127 +0x7087:  xor    %edx,%edx
086e7129 +0x7089:  jmp    086e7080 <+0x6fe0>
086e712e +0x708e:  mov    %eax,(%esp)
086e7131 +0x7091:  call   08725ce0 <__cxa_begin_catch>
086e7136 +0x7096:  movl   $0x1,0x4(%esp)
086e713e +0x709e:  mov    (%ebx),%eax
086e7140 +0x70a0:  add    -0xc(%eax),%ebx
086e7143 +0x70a3:  mov    %ebx,(%esp)
086e7146 +0x70a6:  call   086e0cb0 <+0xc10>
086e714b +0x70ab:  call   08724be0 <__cxa_rethrow>
086e7150 +0x70b0:  mov    %eax,-0x1c(%ebp)
086e7153 +0x70b3:  call   08725c30 <__cxa_end_catch>
086e7158 +0x70b8:  mov    -0x1c(%ebp),%eax
086e715b +0x70bb:  mov    %eax,(%esp)
086e715e +0x70be:  call   08ae3750 <_Unwind_Resume>
086e7163 +0x70c3:  jmp    086e7150 <+0x70b0>
086e7165 +0x70c5:  nop
086e7166 +0x70c6:  nop
086e7167 +0x70c7:  nop
086e7168 +0x70c8:  nop
086e7169 +0x70c9:  nop
086e716a +0x70ca:  nop
086e716b +0x70cb:  nop
086e716c +0x70cc:  nop
086e716d +0x70cd:  nop
086e716e +0x70ce:  nop
086e716f +0x70cf:  nop
086e7170 +0x70d0:  push   %ebp
086e7171 +0x70d1:  mov    %esp,%ebp
086e7173 +0x70d3:  push   %ebx
086e7174 +0x70d4:  sub    $0x34,%esp
086e7177 +0x70d7:  mov    0x8(%ebp),%ebx
086e717a +0x70da:  lea    -0x9(%ebp),%eax
086e717d +0x70dd:  movl   $0x0,0x4(%ebx)
086e7184 +0x70e4:  movl   $0x1,0x8(%esp)
086e718c +0x70ec:  mov    %ebx,0x4(%esp)
086e7190 +0x70f0:  mov    %eax,(%esp)
086e7193 +0x70f3:  call   086e4760 <+0x46c0>
086e7198 +0x70f8:  xor    %edx,%edx
086e719a +0x70fa:  cmpb   $0x0,-0x9(%ebp)
086e719e +0x70fe:  jne    086e71e0 <+0x7140>
086e71a0 +0x7100:  mov    0x4(%ebx),%ecx
086e71a3 +0x7103:  test   %ecx,%ecx
086e71a5 +0x7105:  jne    086e71d0 <+0x7130>
086e71a7 +0x7107:  or     $0x4,%edx
086e71aa +0x710a:  mov    (%ebx),%eax
086e71ac +0x710c:  mov    -0xc(%eax),%eax
086e71af +0x710f:  lea    (%ebx,%eax,1),%eax
086e71b2 +0x7112:  or     0x14(%eax),%edx
086e71b5 +0x7115:  mov    %eax,(%esp)
086e71b8 +0x7118:  mov    %edx,0x4(%esp)
086e71bc +0x711c:  call   086e0da0 <+0xd00>
086e71c1 +0x7121:  mov    %ebx,%eax
086e71c3 +0x7123:  add    $0x34,%esp
086e71c6 +0x7126:  pop    %ebx
086e71c7 +0x7127:  pop    %ebp
086e71c8 +0x7128:  ret
086e71c9 +0x7129:  lea    0x0(%esi,%eiz,1),%esi
086e71d0 +0x7130:  test   %edx,%edx
086e71d2 +0x7132:  jne    086e71aa <+0x710a>
086e71d4 +0x7134:  mov    %ebx,%eax
086e71d6 +0x7136:  add    $0x34,%esp
086e71d9 +0x7139:  pop    %ebx
086e71da +0x713a:  pop    %ebp
086e71db +0x713b:  ret
086e71dc +0x713c:  lea    0x0(%esi,%eiz,1),%esi
086e71e0 +0x7140:  mov    (%ebx),%eax
086e71e2 +0x7142:  mov    -0xc(%eax),%eax
086e71e5 +0x7145:  mov    0x78(%ebx,%eax,1),%edx
086e71e9 +0x7149:  mov    0x8(%edx),%ecx
086e71ec +0x714c:  cmp    0xc(%edx),%ecx
086e71ef +0x714f:  jae    086e720a <+0x716a>
086e71f1 +0x7151:  movzbl (%ecx),%eax
086e71f4 +0x7154:  add    $0x1,%ecx
086e71f7 +0x7157:  mov    %ecx,0x8(%edx)
086e71fa +0x715a:  mov    0xc(%ebp),%edx
086e71fd +0x715d:  movl   $0x1,0x4(%ebx)
086e7204 +0x7164:  mov    %al,(%edx)
086e7206 +0x7166:  xor    %edx,%edx
086e7208 +0x7168:  jmp    086e71a0 <+0x7100>
086e720a +0x716a:  mov    (%edx),%eax
086e720c +0x716c:  mov    %edx,(%esp)
086e720f +0x716f:  call   *0x28(%eax)
086e7212 +0x7172:  cmp    $0xffffffff,%eax
086e7215 +0x7175:  mov    $0x2,%edx
086e721a +0x717a:  je     086e71a0 <+0x7100>
086e721c +0x717c:  jmp    086e71fa <+0x715a>
086e721e +0x717e:  cmp    $0x2,%edx
086e7221 +0x7181:  je     086e724f <+0x71af>
086e7223 +0x7183:  mov    %eax,(%esp)
086e7226 +0x7186:  call   08725ce0 <__cxa_begin_catch>
086e722b +0x718b:  movl   $0x1,0x4(%esp)
086e7233 +0x7193:  mov    (%ebx),%eax
086e7235 +0x7195:  mov    -0xc(%eax),%eax
086e7238 +0x7198:  lea    (%ebx,%eax,1),%eax
086e723b +0x719b:  mov    %eax,(%esp)
086e723e +0x719e:  call   086e0cd0 <+0xc30>
086e7243 +0x71a3:  call   08725c30 <__cxa_end_catch>
086e7248 +0x71a8:  xor    %edx,%edx
086e724a +0x71aa:  jmp    086e71a0 <+0x7100>
086e724f +0x71af:  mov    %eax,(%esp)
086e7252 +0x71b2:  call   08725ce0 <__cxa_begin_catch>
086e7257 +0x71b7:  movl   $0x1,0x4(%esp)
086e725f +0x71bf:  mov    (%ebx),%eax
086e7261 +0x71c1:  add    -0xc(%eax),%ebx
086e7264 +0x71c4:  mov    %ebx,(%esp)
086e7267 +0x71c7:  call   086e0cd0 <+0xc30>
086e726c +0x71cc:  call   08724be0 <__cxa_rethrow>
086e7271 +0x71d1:  mov    %eax,-0x1c(%ebp)
086e7274 +0x71d4:  call   08725c30 <__cxa_end_catch>
086e7279 +0x71d9:  mov    -0x1c(%ebp),%eax
086e727c +0x71dc:  mov    %eax,(%esp)
086e727f +0x71df:  call   08ae3750 <_Unwind_Resume>
086e7284 +0x71e4:  jmp    086e7271 <+0x71d1>
086e7286 +0x71e6:  nop
086e7287 +0x71e7:  nop
086e7288 +0x71e8:  nop
086e7289 +0x71e9:  nop
086e728a +0x71ea:  nop
086e728b +0x71eb:  nop
086e728c +0x71ec:  nop
086e728d +0x71ed:  nop
086e728e +0x71ee:  nop
086e728f +0x71ef:  nop
086e7290 +0x71f0:  push   %ebp
086e7291 +0x71f1:  mov    %esp,%ebp
086e7293 +0x71f3:  push   %esi
086e7294 +0x71f4:  push   %ebx
086e7295 +0x71f5:  sub    $0x10,%esp
086e7298 +0x71f8:  mov    0x8(%ebp),%ebx
086e729b +0x71fb:  mov    (%ebx),%eax
086e729d +0x71fd:  mov    -0xc(%eax),%eax
086e72a0 +0x7200:  mov    0x7c(%ebx,%eax,1),%esi
086e72a4 +0x7204:  test   %esi,%esi
086e72a6 +0x7206:  je     086e72f2 <+0x7252>
086e72a8 +0x7208:  cmpb   $0x0,0x1c(%esi)
086e72ac +0x720c:  je     086e72d8 <+0x7238>
086e72ae +0x720e:  movzbl 0x27(%esi),%eax
086e72b2 +0x7212:  movsbl %al,%eax
086e72b5 +0x7215:  mov    %eax,0xc(%esp)
086e72b9 +0x7219:  mov    0x10(%ebp),%eax
086e72bc +0x721c:  mov    %ebx,(%esp)
086e72bf +0x721f:  mov    %eax,0x8(%esp)
086e72c3 +0x7223:  mov    0xc(%ebp),%eax
086e72c6 +0x7226:  mov    %eax,0x4(%esp)
086e72ca +0x722a:  call   086e83c0 <_ZNSi7getlineEPcic>  ; std::basic_istream<char, std::char_traits<char> >::getline(char*, int, char)
086e72cf +0x722f:  add    $0x10,%esp
086e72d2 +0x7232:  pop    %ebx
086e72d3 +0x7233:  pop    %esi
086e72d4 +0x7234:  pop    %ebp
086e72d5 +0x7235:  ret
086e72d6 +0x7236:  xchg   %ax,%ax
086e72d8 +0x7238:  mov    %esi,(%esp)
086e72db +0x723b:  call   087269c0 <_ZNKSt5ctypeIcE13_M_widen_initEv>  ; std::ctype<char>::_M_widen_init() const
086e72e0 +0x7240:  mov    (%esi),%eax
086e72e2 +0x7242:  movl   $0xa,0x4(%esp)
086e72ea +0x724a:  mov    %esi,(%esp)
086e72ed +0x724d:  call   *0x18(%eax)
086e72f0 +0x7250:  jmp    086e72b2 <+0x7212>
086e72f2 +0x7252:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e72f7 +0x7257:  nop
086e72f8 +0x7258:  nop
086e72f9 +0x7259:  nop
086e72fa +0x725a:  nop
086e72fb +0x725b:  nop
086e72fc +0x725c:  nop
086e72fd +0x725d:  nop
086e72fe +0x725e:  nop
086e72ff +0x725f:  nop
086e7300 +0x7260:  push   %ebp
086e7301 +0x7261:  mov    %esp,%ebp
086e7303 +0x7263:  push   %esi
086e7304 +0x7264:  push   %ebx
086e7305 +0x7265:  sub    $0x10,%esp
086e7308 +0x7268:  mov    0x8(%ebp),%ebx
086e730b +0x726b:  mov    (%ebx),%eax
086e730d +0x726d:  mov    -0xc(%eax),%eax
086e7310 +0x7270:  mov    0x7c(%ebx,%eax,1),%esi
086e7314 +0x7274:  test   %esi,%esi
086e7316 +0x7276:  je     086e735a <+0x72ba>
086e7318 +0x7278:  cmpb   $0x0,0x1c(%esi)
086e731c +0x727c:  je     086e7340 <+0x72a0>
086e731e +0x727e:  movzbl 0x27(%esi),%eax
086e7322 +0x7282:  movsbl %al,%eax
086e7325 +0x7285:  mov    %eax,0x8(%esp)
086e7329 +0x7289:  mov    0xc(%ebp),%eax
086e732c +0x728c:  mov    %ebx,(%esp)
086e732f +0x728f:  mov    %eax,0x4(%esp)
086e7333 +0x7293:  call   086e6350 <+0x62b0>
086e7338 +0x7298:  add    $0x10,%esp
086e733b +0x729b:  pop    %ebx
086e733c +0x729c:  pop    %esi
086e733d +0x729d:  pop    %ebp
086e733e +0x729e:  ret
086e733f +0x729f:  nop
086e7340 +0x72a0:  mov    %esi,(%esp)
086e7343 +0x72a3:  call   087269c0 <_ZNKSt5ctypeIcE13_M_widen_initEv>  ; std::ctype<char>::_M_widen_init() const
086e7348 +0x72a8:  mov    (%esi),%eax
086e734a +0x72aa:  movl   $0xa,0x4(%esp)
086e7352 +0x72b2:  mov    %esi,(%esp)
086e7355 +0x72b5:  call   *0x18(%eax)
086e7358 +0x72b8:  jmp    086e7322 <+0x7282>
086e735a +0x72ba:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e735f +0x72bf:  nop
086e7360 +0x72c0:  push   %ebp
086e7361 +0x72c1:  mov    %esp,%ebp
086e7363 +0x72c3:  push   %esi
086e7364 +0x72c4:  push   %ebx
086e7365 +0x72c5:  sub    $0x10,%esp
086e7368 +0x72c8:  mov    0x8(%ebp),%ebx
086e736b +0x72cb:  mov    (%ebx),%eax
086e736d +0x72cd:  mov    -0xc(%eax),%eax
086e7370 +0x72d0:  mov    0x7c(%ebx,%eax,1),%esi
086e7374 +0x72d4:  test   %esi,%esi
086e7376 +0x72d6:  je     086e73c2 <+0x7322>
086e7378 +0x72d8:  cmpb   $0x0,0x1c(%esi)
086e737c +0x72dc:  je     086e73a8 <+0x7308>
086e737e +0x72de:  movzbl 0x27(%esi),%eax
086e7382 +0x72e2:  movsbl %al,%eax
086e7385 +0x72e5:  mov    %eax,0xc(%esp)
086e7389 +0x72e9:  mov    0x10(%ebp),%eax
086e738c +0x72ec:  mov    %ebx,(%esp)
086e738f +0x72ef:  mov    %eax,0x8(%esp)
086e7393 +0x72f3:  mov    0xc(%ebp),%eax
086e7396 +0x72f6:  mov    %eax,0x4(%esp)
086e739a +0x72fa:  call   086e61d0 <+0x6130>
086e739f +0x72ff:  add    $0x10,%esp
086e73a2 +0x7302:  pop    %ebx
086e73a3 +0x7303:  pop    %esi
086e73a4 +0x7304:  pop    %ebp
086e73a5 +0x7305:  ret
086e73a6 +0x7306:  xchg   %ax,%ax
086e73a8 +0x7308:  mov    %esi,(%esp)
086e73ab +0x730b:  call   087269c0 <_ZNKSt5ctypeIcE13_M_widen_initEv>  ; std::ctype<char>::_M_widen_init() const
086e73b0 +0x7310:  mov    (%esi),%eax
086e73b2 +0x7312:  movl   $0xa,0x4(%esp)
086e73ba +0x731a:  mov    %esi,(%esp)
086e73bd +0x731d:  call   *0x18(%eax)
086e73c0 +0x7320:  jmp    086e7382 <+0x72e2>
086e73c2 +0x7322:  call   086d93c0 <_ZSt16__throw_bad_castv>  ; std::__throw_bad_cast()
086e73c7 +0x7327:  nop
086e73c8 +0x7328:  nop
086e73c9 +0x7329:  nop
086e73ca +0x732a:  nop
086e73cb +0x732b:  nop
086e73cc +0x732c:  nop
086e73cd +0x732d:  nop
086e73ce +0x732e:  nop
086e73cf +0x732f:  nop
```

## 反编译 C

```c
// std::_Rb_tree_black_count @ 0x86e00a0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*) */

int std::_Rb_tree_black_count(_Rb_tree_node_base *param_1,_Rb_tree_node_base *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (_Rb_tree_node_base *)0x0) {
    for (; iVar1 = iVar1 + (uint)(param_1->_M_color == _S_black), param_1 != param_2;
        param_1 = param_1->_M_parent) {
    }
  }
  return iVar1;
}
```
