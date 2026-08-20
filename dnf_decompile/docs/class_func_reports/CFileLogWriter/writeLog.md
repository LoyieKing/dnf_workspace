# writeLog

`_ZN14CFileLogWriter8writeLogEPKcS1_z`

`CFileLogWriter::writeLog(char const*, char const*, ...)`

| 类 | 地址 |
|---|---|
| `CFileLogWriter` | `0x0810707e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810707e  _ZN14CFileLogWriter8writeLogEPKcS1_z
#           CFileLogWriter::writeLog(char const*, char const*, ...)
# range [0x0810707e, 0x0810747b]
0810707e +0x000:  push   %ebp
0810707f +0x001:  mov    %esp,%ebp
08107081 +0x003:  push   %edi
08107082 +0x004:  push   %esi
08107083 +0x005:  push   %ebx
08107084 +0x006:  sub    $0x2dc,%esp
0810708a +0x00c:  mov    0x8(%ebp),%eax
0810708d +0x00f:  add    $0x1c,%eax
08107090 +0x012:  mov    %eax,0x4(%esp)
08107094 +0x016:  lea    -0x50(%ebp),%eax
08107097 +0x019:  mov    %eax,(%esp)
0810709a +0x01c:  call   08107c64 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x12a>  ; global constructors keyed to CFileLogWriterInstance()+0x12a
0810709f +0x021:  movl   $0x0,(%esp)
081070a6 +0x028:  call   0807d750 <_init+0x48>
081070ab +0x02d:  mov    %eax,-0x54(%ebp)
081070ae +0x030:  lea    -0x9c(%ebp),%eax
081070b4 +0x036:  mov    %eax,0x4(%esp)
081070b8 +0x03a:  lea    -0x54(%ebp),%eax
081070bb +0x03d:  mov    %eax,(%esp)
081070be +0x040:  call   0807e360 <_init+0xc58>
081070c3 +0x045:  mov    %eax,-0x24(%ebp)
081070c6 +0x048:  lea    0x14(%ebp),%eax
081070c9 +0x04b:  mov    %eax,-0x58(%ebp)
081070cc +0x04e:  mov    -0x24(%ebp),%eax
081070cf +0x051:  mov    0xc(%eax),%eax
081070d2 +0x054:  mov    -0x24(%ebp),%edx
081070d5 +0x057:  mov    0x10(%edx),%edx
081070d8 +0x05a:  lea    0x1(%edx),%ecx
081070db +0x05d:  mov    -0x24(%ebp),%edx
081070de +0x060:  mov    0x14(%edx),%edx
081070e1 +0x063:  add    $0x76c,%edx
081070e7 +0x069:  mov    %eax,0x14(%esp)
081070eb +0x06d:  mov    %ecx,0x10(%esp)
081070ef +0x071:  mov    %edx,0xc(%esp)
081070f3 +0x075:  mov    0xc(%ebp),%eax
081070f6 +0x078:  mov    %eax,0x8(%esp)
081070fa +0x07c:  movl   $"%s%04d%02d%02d.log",0x4(%esp)
08107102 +0x084:  lea    -0x1c8(%ebp),%eax
08107108 +0x08a:  mov    %eax,(%esp)
0810710b +0x08d:  call   0807e440 <_init+0xd38>
08107110 +0x092:  lea    -0x49(%ebp),%eax
08107113 +0x095:  mov    %eax,(%esp)
08107116 +0x098:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0810711b +0x09d:  lea    -0x49(%ebp),%eax
0810711e +0x0a0:  mov    %eax,0x8(%esp)
08107122 +0x0a4:  lea    -0x1c8(%ebp),%eax
08107128 +0x0aa:  mov    %eax,0x4(%esp)
0810712c +0x0ae:  lea    -0x5c(%ebp),%eax
0810712f +0x0b1:  mov    %eax,(%esp)
08107132 +0x0b4:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08107137 +0x0b9:  jmp    08107151 <+0xd3>
08107139 +0x0bb:  mov    %edx,%ebx
0810713b +0x0bd:  mov    %eax,%esi
0810713d +0x0bf:  lea    -0x49(%ebp),%eax
08107140 +0x0c2:  mov    %eax,(%esp)
08107143 +0x0c5:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08107148 +0x0ca:  mov    %esi,%eax
0810714a +0x0cc:  mov    %ebx,%edx
0810714c +0x0ce:  jmp    0810744a <+0x3cc>
08107151 +0x0d3:  lea    -0x49(%ebp),%eax
08107154 +0x0d6:  mov    %eax,(%esp)
08107157 +0x0d9:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0810715c +0x0de:  mov    0x8(%ebp),%eax
0810715f +0x0e1:  lea    0x4(%eax),%ecx
08107162 +0x0e4:  lea    -0x60(%ebp),%eax
08107165 +0x0e7:  lea    -0x5c(%ebp),%edx
08107168 +0x0ea:  mov    %edx,0x8(%esp)
0810716c +0x0ee:  mov    %ecx,0x4(%esp)
08107170 +0x0f2:  mov    %eax,(%esp)
08107173 +0x0f5:  call   08107c96 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x15c>  ; global constructors keyed to CFileLogWriterInstance()+0x15c
08107178 +0x0fa:  sub    $0x4,%esp
0810717b +0x0fd:  mov    0x8(%ebp),%eax
0810717e +0x100:  lea    0x4(%eax),%edx
08107181 +0x103:  lea    -0x48(%ebp),%eax
08107184 +0x106:  mov    %edx,0x4(%esp)
08107188 +0x10a:  mov    %eax,(%esp)
0810718b +0x10d:  call   08107cc2 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x188>  ; global constructors keyed to CFileLogWriterInstance()+0x188
08107190 +0x112:  sub    $0x4,%esp
08107193 +0x115:  lea    -0x48(%ebp),%eax
08107196 +0x118:  mov    %eax,0x4(%esp)
0810719a +0x11c:  lea    -0x60(%ebp),%eax
0810719d +0x11f:  mov    %eax,(%esp)
081071a0 +0x122:  call   08107ce8 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1ae>  ; global constructors keyed to CFileLogWriterInstance()+0x1ae
081071a5 +0x127:  test   %al,%al
081071a7 +0x129:  je     081071df <+0x161>
081071a9 +0x12b:  lea    -0x60(%ebp),%eax
081071ac +0x12e:  mov    %eax,(%esp)
081071af +0x131:  call   08107cfc <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1c2>  ; global constructors keyed to CFileLogWriterInstance()+0x1c2
081071b4 +0x136:  mov    0x4(%eax),%eax
081071b7 +0x139:  mov    %eax,-0x1c(%ebp)
081071ba +0x13c:  mov    -0x58(%ebp),%eax
081071bd +0x13f:  mov    %eax,0xc(%esp)
081071c1 +0x143:  mov    0x10(%ebp),%eax
081071c4 +0x146:  mov    %eax,0x8(%esp)
081071c8 +0x14a:  mov    -0x24(%ebp),%eax
081071cb +0x14d:  mov    %eax,0x4(%esp)
081071cf +0x151:  mov    -0x1c(%ebp),%eax
081071d2 +0x154:  mov    %eax,(%esp)
081071d5 +0x157:  call   08106ee2 <_ZN5CFLog8writeLogEP2tmPKcPc>  ; CFLog::writeLog(tm*, char const*, char*)
081071da +0x15c:  jmp    0810743d <+0x3bf>
081071df +0x161:  mov    -0x54(%ebp),%eax
081071e2 +0x164:  sub    $&_ZL14gUnicodeBuffer+0xac54,%eax
081071e7 +0x169:  mov    %eax,-0x64(%ebp)
081071ea +0x16c:  lea    -0xc8(%ebp),%eax
081071f0 +0x172:  mov    %eax,0x4(%esp)
081071f4 +0x176:  lea    -0x64(%ebp),%eax
081071f7 +0x179:  mov    %eax,(%esp)
081071fa +0x17c:  call   0807e360 <_init+0xc58>
081071ff +0x181:  mov    %eax,-0x20(%ebp)
08107202 +0x184:  mov    -0x20(%ebp),%eax
08107205 +0x187:  mov    0xc(%eax),%eax
08107208 +0x18a:  mov    -0x20(%ebp),%edx
0810720b +0x18d:  mov    0x10(%edx),%edx
0810720e +0x190:  lea    0x1(%edx),%ecx
08107211 +0x193:  mov    -0x20(%ebp),%edx
08107214 +0x196:  mov    0x14(%edx),%edx
08107217 +0x199:  add    $0x76c,%edx
0810721d +0x19f:  mov    %eax,0x14(%esp)
08107221 +0x1a3:  mov    %ecx,0x10(%esp)
08107225 +0x1a7:  mov    %edx,0xc(%esp)
08107229 +0x1ab:  mov    0xc(%ebp),%eax
0810722c +0x1ae:  mov    %eax,0x8(%esp)
08107230 +0x1b2:  movl   $"%s%04d%02d%02d.log",0x4(%esp)
08107238 +0x1ba:  lea    -0x2c8(%ebp),%eax
0810723e +0x1c0:  mov    %eax,(%esp)
08107241 +0x1c3:  call   0807e440 <_init+0xd38>
08107246 +0x1c8:  lea    -0x41(%ebp),%eax
08107249 +0x1cb:  mov    %eax,(%esp)
0810724c +0x1ce:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08107251 +0x1d3:  lea    -0x41(%ebp),%eax
08107254 +0x1d6:  mov    %eax,0x8(%esp)
08107258 +0x1da:  lea    -0x2c8(%ebp),%eax
0810725e +0x1e0:  mov    %eax,0x4(%esp)
08107262 +0x1e4:  lea    -0x68(%ebp),%eax
08107265 +0x1e7:  mov    %eax,(%esp)
08107268 +0x1ea:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0810726d +0x1ef:  jmp    08107287 <+0x209>
0810726f +0x1f1:  mov    %edx,%ebx
08107271 +0x1f3:  mov    %eax,%esi
08107273 +0x1f5:  lea    -0x41(%ebp),%eax
08107276 +0x1f8:  mov    %eax,(%esp)
08107279 +0x1fb:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0810727e +0x200:  mov    %esi,%eax
08107280 +0x202:  mov    %ebx,%edx
08107282 +0x204:  jmp    08107428 <+0x3aa>
08107287 +0x209:  lea    -0x41(%ebp),%eax
0810728a +0x20c:  mov    %eax,(%esp)
0810728d +0x20f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08107292 +0x214:  mov    0x8(%ebp),%eax
08107295 +0x217:  lea    0x4(%eax),%ecx
08107298 +0x21a:  lea    -0x6c(%ebp),%eax
0810729b +0x21d:  lea    -0x68(%ebp),%edx
0810729e +0x220:  mov    %edx,0x8(%esp)
081072a2 +0x224:  mov    %ecx,0x4(%esp)
081072a6 +0x228:  mov    %eax,(%esp)
081072a9 +0x22b:  call   08107c96 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x15c>  ; global constructors keyed to CFileLogWriterInstance()+0x15c
081072ae +0x230:  sub    $0x4,%esp
081072b1 +0x233:  mov    0x8(%ebp),%eax
081072b4 +0x236:  lea    0x4(%eax),%edx
081072b7 +0x239:  lea    -0x40(%ebp),%eax
081072ba +0x23c:  mov    %edx,0x4(%esp)
081072be +0x240:  mov    %eax,(%esp)
081072c1 +0x243:  call   08107cc2 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x188>  ; global constructors keyed to CFileLogWriterInstance()+0x188
081072c6 +0x248:  sub    $0x4,%esp
081072c9 +0x24b:  lea    -0x40(%ebp),%eax
081072cc +0x24e:  mov    %eax,0x4(%esp)
081072d0 +0x252:  lea    -0x6c(%ebp),%eax
081072d3 +0x255:  mov    %eax,(%esp)
081072d6 +0x258:  call   08107ce8 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1ae>  ; global constructors keyed to CFileLogWriterInstance()+0x1ae
081072db +0x25d:  test   %al,%al
081072dd +0x25f:  je     08107312 <+0x294>
081072df +0x261:  lea    -0x6c(%ebp),%eax
081072e2 +0x264:  mov    %eax,(%esp)
081072e5 +0x267:  call   08107cfc <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1c2>  ; global constructors keyed to CFileLogWriterInstance()+0x1c2
081072ea +0x26c:  mov    0x4(%eax),%eax
081072ed +0x26f:  test   %eax,%eax
081072ef +0x271:  je     081072fd <+0x27f>
081072f1 +0x273:  mov    (%eax),%edx
081072f3 +0x275:  add    $0x4,%edx
081072f6 +0x278:  mov    (%edx),%edx
081072f8 +0x27a:  mov    %eax,(%esp)
081072fb +0x27d:  call   *%edx
081072fd +0x27f:  mov    0x8(%ebp),%eax
08107300 +0x282:  lea    0x4(%eax),%edx
08107303 +0x285:  mov    -0x6c(%ebp),%eax
08107306 +0x288:  mov    %eax,0x4(%esp)
0810730a +0x28c:  mov    %edx,(%esp)
0810730d +0x28f:  call   08107d0a <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1d0>  ; global constructors keyed to CFileLogWriterInstance()+0x1d0
08107312 +0x294:  movl   $0xc,(%esp)
08107319 +0x29b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0810731e +0x2a0:  mov    %eax,%ebx
08107320 +0x2a2:  mov    %ebx,%eax
08107322 +0x2a4:  lea    -0x5c(%ebp),%edx
08107325 +0x2a7:  mov    %edx,0x4(%esp)
08107329 +0x2ab:  mov    %eax,(%esp)
0810732c +0x2ae:  call   08106dc4 <_ZN5CFLogC1ERSs>  ; CFLog::CFLog(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
08107331 +0x2b3:  jmp    08107348 <+0x2ca>
08107333 +0x2b5:  mov    %edx,%esi
08107335 +0x2b7:  mov    %eax,%edi
08107337 +0x2b9:  mov    %ebx,(%esp)
0810733a +0x2bc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810733f +0x2c1:  mov    %edi,%eax
08107341 +0x2c3:  mov    %esi,%edx
08107343 +0x2c5:  jmp    08107406 <+0x388>
08107348 +0x2ca:  mov    %ebx,%eax
0810734a +0x2cc:  mov    %eax,-0x70(%ebp)
0810734d +0x2cf:  lea    -0x2c(%ebp),%eax
08107350 +0x2d2:  lea    -0x70(%ebp),%edx
08107353 +0x2d5:  mov    %edx,0x8(%esp)
08107357 +0x2d9:  lea    -0x5c(%ebp),%edx
0810735a +0x2dc:  mov    %edx,0x4(%esp)
0810735e +0x2e0:  mov    %eax,(%esp)
08107361 +0x2e3:  call   08107d24 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x1ea>  ; global constructors keyed to CFileLogWriterInstance()+0x1ea
08107366 +0x2e8:  sub    $0x4,%esp
08107369 +0x2eb:  lea    -0x2c(%ebp),%eax
0810736c +0x2ee:  mov    %eax,0x4(%esp)
08107370 +0x2f2:  lea    -0x34(%ebp),%eax
08107373 +0x2f5:  mov    %eax,(%esp)
08107376 +0x2f8:  call   08107d68 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x22e>  ; global constructors keyed to CFileLogWriterInstance()+0x22e
0810737b +0x2fd:  mov    0x8(%ebp),%eax
0810737e +0x300:  lea    0x4(%eax),%ecx
08107381 +0x303:  lea    -0x3c(%ebp),%eax
08107384 +0x306:  lea    -0x34(%ebp),%edx
08107387 +0x309:  mov    %edx,0x8(%esp)
0810738b +0x30d:  mov    %ecx,0x4(%esp)
0810738f +0x311:  mov    %eax,(%esp)
08107392 +0x314:  call   08107da0 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x266>  ; global constructors keyed to CFileLogWriterInstance()+0x266
08107397 +0x319:  sub    $0x4,%esp
0810739a +0x31c:  movzbl -0x38(%ebp),%ebx
0810739e +0x320:  lea    -0x34(%ebp),%eax
081073a1 +0x323:  mov    %eax,(%esp)
081073a4 +0x326:  call   08107bd6 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x9c>  ; global constructors keyed to CFileLogWriterInstance()+0x9c
081073a9 +0x32b:  jmp    081073d5 <+0x357>
081073ab +0x32d:  mov    %edx,%ebx
081073ad +0x32f:  mov    %eax,%esi
081073af +0x331:  lea    -0x34(%ebp),%eax
081073b2 +0x334:  mov    %eax,(%esp)
081073b5 +0x337:  call   08107bd6 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x9c>  ; global constructors keyed to CFileLogWriterInstance()+0x9c
081073ba +0x33c:  mov    %esi,%eax
081073bc +0x33e:  mov    %ebx,%edx
081073be +0x340:  jmp    081073c0 <+0x342>
081073c0 +0x342:  mov    %edx,%ebx
081073c2 +0x344:  mov    %eax,%esi
081073c4 +0x346:  lea    -0x2c(%ebp),%eax
081073c7 +0x349:  mov    %eax,(%esp)
081073ca +0x34c:  call   08107bc2 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x88>  ; global constructors keyed to CFileLogWriterInstance()+0x88
081073cf +0x351:  mov    %esi,%eax
081073d1 +0x353:  mov    %ebx,%edx
081073d3 +0x355:  jmp    08107406 <+0x388>
081073d5 +0x357:  lea    -0x2c(%ebp),%eax
081073d8 +0x35a:  mov    %eax,(%esp)
081073db +0x35d:  call   08107bc2 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x88>  ; global constructors keyed to CFileLogWriterInstance()+0x88
081073e0 +0x362:  test   %bl,%bl
081073e2 +0x364:  je     0810741b <+0x39d>
081073e4 +0x366:  mov    -0x58(%ebp),%edx
081073e7 +0x369:  mov    -0x70(%ebp),%eax
081073ea +0x36c:  mov    %edx,0xc(%esp)
081073ee +0x370:  mov    0x10(%ebp),%edx
081073f1 +0x373:  mov    %edx,0x8(%esp)
081073f5 +0x377:  mov    -0x24(%ebp),%edx
081073f8 +0x37a:  mov    %edx,0x4(%esp)
081073fc +0x37e:  mov    %eax,(%esp)
081073ff +0x381:  call   08106ee2 <_ZN5CFLog8writeLogEP2tmPKcPc>  ; CFLog::writeLog(tm*, char const*, char*)
08107404 +0x386:  jmp    0810741b <+0x39d>
08107406 +0x388:  mov    %edx,%ebx
08107408 +0x38a:  mov    %eax,%esi
0810740a +0x38c:  lea    -0x68(%ebp),%eax
0810740d +0x38f:  mov    %eax,(%esp)
08107410 +0x392:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08107415 +0x397:  mov    %esi,%eax
08107417 +0x399:  mov    %ebx,%edx
08107419 +0x39b:  jmp    08107428 <+0x3aa>
0810741b +0x39d:  lea    -0x68(%ebp),%eax
0810741e +0x3a0:  mov    %eax,(%esp)
08107421 +0x3a3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08107426 +0x3a8:  jmp    0810743d <+0x3bf>
08107428 +0x3aa:  mov    %edx,%ebx
0810742a +0x3ac:  mov    %eax,%esi
0810742c +0x3ae:  lea    -0x5c(%ebp),%eax
0810742f +0x3b1:  mov    %eax,(%esp)
08107432 +0x3b4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08107437 +0x3b9:  mov    %esi,%eax
08107439 +0x3bb:  mov    %ebx,%edx
0810743b +0x3bd:  jmp    0810744a <+0x3cc>
0810743d +0x3bf:  lea    -0x5c(%ebp),%eax
08107440 +0x3c2:  mov    %eax,(%esp)
08107443 +0x3c5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08107448 +0x3ca:  jmp    08107465 <+0x3e7>
0810744a +0x3cc:  mov    %edx,%ebx
0810744c +0x3ce:  mov    %eax,%esi
0810744e +0x3d0:  lea    -0x50(%ebp),%eax
08107451 +0x3d3:  mov    %eax,(%esp)
08107454 +0x3d6:  call   08107c80 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x146>  ; global constructors keyed to CFileLogWriterInstance()+0x146
08107459 +0x3db:  mov    %esi,%eax
0810745b +0x3dd:  mov    %ebx,%edx
0810745d +0x3df:  mov    %eax,(%esp)
08107460 +0x3e2:  call   08ae3750 <_Unwind_Resume>
08107465 +0x3e7:  lea    -0x50(%ebp),%eax
08107468 +0x3ea:  mov    %eax,(%esp)
0810746b +0x3ed:  call   08107c80 <_GLOBAL__I__Z22CFileLogWriterInstancev+0x146>  ; global constructors keyed to CFileLogWriterInstance()+0x146
08107470 +0x3f2:  lea    -0xc(%ebp),%esp
08107473 +0x3f5:  add    $0x0,%esp
08107476 +0x3f8:  pop    %ebx
08107477 +0x3f9:  pop    %esi
08107478 +0x3fa:  pop    %edi
08107479 +0x3fb:  pop    %ebp
0810747a +0x3fc:  ret
0810747b +0x3fd:  nop
```

## 反编译 C

```c
// CFileLogWriter::writeLog @ 0x810707e

/* CFileLogWriter::writeLog(char const*, char const*, ...) */

void __thiscall CFileLogWriter::writeLog(CFileLogWriter *this,char *param_1,char *param_2,...)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  CFLog *this_00;
  _Rb_tree_iterator *p_Var4;
  string *psVar5;
  char local_2cc [256];
  char local_1cc [256];
  tm local_cc;
  tm local_a0;
  CFLog *local_74;
  string local_70;
  string local_6c [4];
  int local_68;
  string local_64;
  string local_60;
  char *local_5c;
  time_t local_58;
  CGuard<CMutex> local_54 [7];
  allocator<char> local_4d;
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  local_4c [7];
  allocator<char> local_45;
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  local_44 [4];
  pair local_40 [4];
  char local_3c;
  pair<std::string_const,CFLog*> local_38 [8];
  string local_30 [2];
  tm *local_28;
  tm *local_24;
  CFLog *local_20;
  
  CGuard<CMutex>::CGuard(local_54,(CMutex *)(this + 0x1c));
  local_58 = time((time_t *)0x0);
  local_28 = localtime_r(&local_58,&local_a0);
  local_5c = &stack0x00000010;
  sprintf(local_1cc,"%s%04d%02d%02d.log",param_1,local_28->tm_year + 0x76c,local_28->tm_mon + 1,
          local_28->tm_mday);
  std::allocator<char>::allocator();
                    /* try { // try from 08107132 to 08107136 has its CatchHandler @ 08107139 */
  std::string::string((string *)&local_60,local_1cc,(allocator *)&local_4d);
  std::allocator<char>::~allocator(&local_4d);
                    /* try { // try from 08107173 to 081071d9 has its CatchHandler @ 08107428 */
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::find(&local_64);
  std::
  map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
  ::end(local_4c);
  cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_64,
                     (_Rb_tree_iterator *)local_4c);
  if (cVar2 == '\0') {
    local_68 = local_58 + -0x15180;
    local_24 = localtime_r(&local_68,&local_cc);
    sprintf(local_2cc,"%s%04d%02d%02d.log",param_1,local_24->tm_year + 0x76c,local_24->tm_mon + 1,
            local_24->tm_mday);
    std::allocator<char>::allocator();
                    /* try { // try from 08107268 to 0810726c has its CatchHandler @ 0810726f */
    std::string::string(local_6c,local_2cc,(allocator *)&local_45);
    std::allocator<char>::~allocator(&local_45);
    psVar5 = local_6c;
                    /* try { // try from 081072a9 to 0810731d has its CatchHandler @ 08107406 */
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::find(&local_70);
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::end(local_44);
    p_Var4 = (_Rb_tree_iterator *)local_44;
    cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_70,p_Var4);
    if (cVar2 != '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_70);
      piVar1 = *(int **)(iVar3 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1,p_Var4,psVar5);
      }
      std::
      map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
      ::erase((map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
               *)(this + 4),local_70._M_dataplus._M_p);
    }
    this_00 = operator_new(0xc);
                    /* try { // try from 0810732c to 08107330 has its CatchHandler @ 08107333 */
    CFLog::CFLog(this_00,&local_60);
    local_74 = this_00;
                    /* try { // try from 08107361 to 08107365 has its CatchHandler @ 08107406 */
    std::make_pair<std::string&,CFLog*&>(local_30,(CFLog **)&local_60);
                    /* try { // try from 08107376 to 0810737a has its CatchHandler @ 081073c0 */
    std::pair<std::string_const,CFLog*>::pair<std::string,CFLog*>(local_38,(pair *)local_30);
                    /* try { // try from 08107392 to 08107396 has its CatchHandler @ 081073ab */
    std::
    map<std::string,CFLog*,std::less<std::string>,std::allocator<std::pair<std::string_const,CFLog*>>>
    ::insert(local_40);
                    /* try { // try from 081073a4 to 081073a8 has its CatchHandler @ 081073c0 */
    std::pair<std::string_const,CFLog*>::~pair(local_38);
                    /* try { // try from 081073db to 08107403 has its CatchHandler @ 08107406 */
    std::pair<std::string,CFLog*>::~pair((pair<std::string,CFLog*> *)local_30);
    if (local_3c != '\0') {
      CFLog::writeLog(local_74,local_28,param_2,local_5c);
    }
                    /* try { // try from 08107421 to 08107425 has its CatchHandler @ 08107428 */
    std::string::~string(local_6c);
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,CFLog*>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,CFLog*>> *)&local_64);
    local_20 = *(CFLog **)(iVar3 + 4);
    CFLog::writeLog(local_20,local_28,param_2,local_5c);
  }
                    /* try { // try from 08107443 to 08107447 has its CatchHandler @ 0810744a */
  std::string::~string((string *)&local_60);
  CGuard<CMutex>::~CGuard(local_54);
  return;
}
```
