# loadScript

`_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv`

`ARAD::SCRIPT::AvatarRecharge::loadScript()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarRecharge` | `0x088b0eba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b0eba  _ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv
#           ARAD::SCRIPT::AvatarRecharge::loadScript()
# range [0x088b0eba, 0x088b12d7]
088b0eba +0x000:  push   %ebp
088b0ebb +0x001:  mov    %esp,%ebp
088b0ebd +0x003:  push   %esi
088b0ebe +0x004:  push   %ebx
088b0ebf +0x005:  add    $0xffffff80,%esp
088b0ec2 +0x008:  mov    0x8(%ebp),%eax
088b0ec5 +0x00b:  movzbl 0x4c(%eax),%eax
088b0ec9 +0x00f:  test   %al,%al
088b0ecb +0x011:  je     088b0ed7 <+0x1d>
088b0ecd +0x013:  mov    $0x0,%ebx
088b0ed2 +0x018:  jmp    088b12cc <+0x412>
088b0ed7 +0x01d:  movl   $"avatar_recharge_jpn.etc",0x4(%esp)
088b0edf +0x025:  movl   $"Etc/EmblemRenewal/",(%esp)
088b0ee6 +0x02c:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088b0eeb +0x031:  xor    $0x1,%eax
088b0eee +0x034:  test   %al,%al
088b0ef0 +0x036:  je     088b0efc <+0x42>
088b0ef2 +0x038:  mov    $0xffffffff,%ebx
088b0ef7 +0x03d:  jmp    088b12cc <+0x412>
088b0efc +0x042:  lea    -0x54(%ebp),%eax
088b0eff +0x045:  mov    %eax,(%esp)
088b0f02 +0x048:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088b0f07 +0x04d:  movb   $0x0,-0x55(%ebp)
088b0f0b +0x051:  movb   $0x0,-0x56(%ebp)
088b0f0f +0x055:  jmp    088b0f12 <+0x58>
088b0f11 +0x057:  nop
088b0f12 +0x058:  movl   $0x1,0x4(%esp)
088b0f1a +0x060:  lea    -0x54(%ebp),%eax
088b0f1d +0x063:  mov    %eax,(%esp)
088b0f20 +0x066:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088b0f25 +0x06b:  xor    $0x1,%eax
088b0f28 +0x06e:  test   %al,%al
088b0f2a +0x070:  jne    088b1292 <+0x3d8>
088b0f30 +0x076:  movl   $"[avatar recharge limit]",0x4(%esp)
088b0f38 +0x07e:  lea    -0x54(%ebp),%eax
088b0f3b +0x081:  mov    %eax,(%esp)
088b0f3e +0x084:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088b0f43 +0x089:  test   %al,%al
088b0f45 +0x08b:  je     088b0f5a <+0xa0>
088b0f47 +0x08d:  movl   $0x0,(%esp)
088b0f4e +0x094:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b0f53 +0x099:  mov    0x8(%ebp),%edx
088b0f56 +0x09c:  mov    %eax,(%edx)
088b0f58 +0x09e:  jmp    088b0f12 <+0x58>
088b0f5a +0x0a0:  movl   $"[emblem recharge stone info]",0x4(%esp)
088b0f62 +0x0a8:  lea    -0x54(%ebp),%eax
088b0f65 +0x0ab:  mov    %eax,(%esp)
088b0f68 +0x0ae:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088b0f6d +0x0b3:  test   %al,%al
088b0f6f +0x0b5:  je     088b1068 <+0x1ae>
088b0f75 +0x0bb:  movl   $0x1,0xc(%esp)
088b0f7d +0x0c3:  lea    -0x56(%ebp),%eax
088b0f80 +0x0c6:  mov    %eax,0x8(%esp)
088b0f84 +0x0ca:  lea    -0x54(%ebp),%eax
088b0f87 +0x0cd:  mov    %eax,0x4(%esp)
088b0f8b +0x0d1:  lea    -0x55(%ebp),%eax
088b0f8e +0x0d4:  mov    %eax,(%esp)
088b0f91 +0x0d7:  call   088bceaf <_Z13ScanTypeOrIntRbRSsS_b>  ; ScanTypeOrInt(bool&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool&, bool)
088b0f96 +0x0dc:  mov    %eax,-0x5c(%ebp)
088b0f99 +0x0df:  movzbl -0x55(%ebp),%eax
088b0f9d +0x0e3:  test   %al,%al
088b0f9f +0x0e5:  jne    088b0fac <+0xf2>
088b0fa1 +0x0e7:  movzbl -0x56(%ebp),%eax
088b0fa5 +0x0eb:  xor    $0x1,%eax
088b0fa8 +0x0ee:  test   %al,%al
088b0faa +0x0f0:  je     088b0fb2 <+0xf8>
088b0fac +0x0f2:  nop
088b0fad +0x0f3:  jmp    088b0f12 <+0x58>
088b0fb2 +0x0f8:  movl   $0x0,(%esp)
088b0fb9 +0x0ff:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b0fbe +0x104:  mov    %eax,-0x60(%ebp)
088b0fc1 +0x107:  mov    0x8(%ebp),%eax
088b0fc4 +0x10a:  lea    0x4(%eax),%edx
088b0fc7 +0x10d:  lea    -0x50(%ebp),%eax
088b0fca +0x110:  mov    %edx,0x4(%esp)
088b0fce +0x114:  mov    %eax,(%esp)
088b0fd1 +0x117:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088b0fd6 +0x11c:  sub    $0x4,%esp
088b0fd9 +0x11f:  mov    0x8(%ebp),%eax
088b0fdc +0x122:  lea    0x4(%eax),%ecx
088b0fdf +0x125:  lea    -0x4c(%ebp),%eax
088b0fe2 +0x128:  lea    -0x5c(%ebp),%edx
088b0fe5 +0x12b:  mov    %edx,0x8(%esp)
088b0fe9 +0x12f:  mov    %ecx,0x4(%esp)
088b0fed +0x133:  mov    %eax,(%esp)
088b0ff0 +0x136:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088b0ff5 +0x13b:  sub    $0x4,%esp
088b0ff8 +0x13e:  lea    -0x50(%ebp),%eax
088b0ffb +0x141:  mov    %eax,0x4(%esp)
088b0fff +0x145:  lea    -0x4c(%ebp),%eax
088b1002 +0x148:  mov    %eax,(%esp)
088b1005 +0x14b:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
088b100a +0x150:  test   %al,%al
088b100c +0x152:  je     088b104b <+0x191>
088b100e +0x154:  lea    -0x60(%ebp),%eax
088b1011 +0x157:  mov    %eax,0x8(%esp)
088b1015 +0x15b:  lea    -0x5c(%ebp),%eax
088b1018 +0x15e:  mov    %eax,0x4(%esp)
088b101c +0x162:  lea    -0x40(%ebp),%eax
088b101f +0x165:  mov    %eax,(%esp)
088b1022 +0x168:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
088b1027 +0x16d:  mov    0x8(%ebp),%eax
088b102a +0x170:  lea    0x4(%eax),%ecx
088b102d +0x173:  lea    -0x48(%ebp),%eax
088b1030 +0x176:  lea    -0x40(%ebp),%edx
088b1033 +0x179:  mov    %edx,0x8(%esp)
088b1037 +0x17d:  mov    %ecx,0x4(%esp)
088b103b +0x181:  mov    %eax,(%esp)
088b103e +0x184:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
088b1043 +0x189:  sub    $0x4,%esp
088b1046 +0x18c:  jmp    088b0f75 <+0xbb>
088b104b +0x191:  mov    -0x5c(%ebp),%eax
088b104e +0x194:  mov    %eax,0x4(%esp)
088b1052 +0x198:  movl   $"[emblem recharge stone info] duplicate item_index:%d",(%esp)
088b1059 +0x19f:  call   0807db60 <_init+0x458>
088b105e +0x1a4:  mov    $0xfffffffe,%ebx
088b1063 +0x1a9:  jmp    088b12c1 <+0x407>
088b1068 +0x1ae:  movl   $"[emblem recharge]",0x4(%esp)
088b1070 +0x1b6:  lea    -0x54(%ebp),%eax
088b1073 +0x1b9:  mov    %eax,(%esp)
088b1076 +0x1bc:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088b107b +0x1c1:  test   %al,%al
088b107d +0x1c3:  je     088b1176 <+0x2bc>
088b1083 +0x1c9:  movl   $0x1,0xc(%esp)
088b108b +0x1d1:  lea    -0x56(%ebp),%eax
088b108e +0x1d4:  mov    %eax,0x8(%esp)
088b1092 +0x1d8:  lea    -0x54(%ebp),%eax
088b1095 +0x1db:  mov    %eax,0x4(%esp)
088b1099 +0x1df:  lea    -0x55(%ebp),%eax
088b109c +0x1e2:  mov    %eax,(%esp)
088b109f +0x1e5:  call   088bceaf <_Z13ScanTypeOrIntRbRSsS_b>  ; ScanTypeOrInt(bool&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool&, bool)
088b10a4 +0x1ea:  mov    %eax,-0x64(%ebp)
088b10a7 +0x1ed:  movzbl -0x55(%ebp),%eax
088b10ab +0x1f1:  test   %al,%al
088b10ad +0x1f3:  jne    088b10ba <+0x200>
088b10af +0x1f5:  movzbl -0x56(%ebp),%eax
088b10b3 +0x1f9:  xor    $0x1,%eax
088b10b6 +0x1fc:  test   %al,%al
088b10b8 +0x1fe:  je     088b10c0 <+0x206>
088b10ba +0x200:  nop
088b10bb +0x201:  jmp    088b0f12 <+0x58>
088b10c0 +0x206:  movl   $0x0,(%esp)
088b10c7 +0x20d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b10cc +0x212:  mov    %eax,-0x68(%ebp)
088b10cf +0x215:  mov    0x8(%ebp),%eax
088b10d2 +0x218:  lea    0x1c(%eax),%edx
088b10d5 +0x21b:  lea    -0x38(%ebp),%eax
088b10d8 +0x21e:  mov    %edx,0x4(%esp)
088b10dc +0x222:  mov    %eax,(%esp)
088b10df +0x225:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088b10e4 +0x22a:  sub    $0x4,%esp
088b10e7 +0x22d:  mov    0x8(%ebp),%eax
088b10ea +0x230:  lea    0x1c(%eax),%ecx
088b10ed +0x233:  lea    -0x34(%ebp),%eax
088b10f0 +0x236:  lea    -0x64(%ebp),%edx
088b10f3 +0x239:  mov    %edx,0x8(%esp)
088b10f7 +0x23d:  mov    %ecx,0x4(%esp)
088b10fb +0x241:  mov    %eax,(%esp)
088b10fe +0x244:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088b1103 +0x249:  sub    $0x4,%esp
088b1106 +0x24c:  lea    -0x38(%ebp),%eax
088b1109 +0x24f:  mov    %eax,0x4(%esp)
088b110d +0x253:  lea    -0x34(%ebp),%eax
088b1110 +0x256:  mov    %eax,(%esp)
088b1113 +0x259:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
088b1118 +0x25e:  test   %al,%al
088b111a +0x260:  je     088b1159 <+0x29f>
088b111c +0x262:  lea    -0x68(%ebp),%eax
088b111f +0x265:  mov    %eax,0x8(%esp)
088b1123 +0x269:  lea    -0x64(%ebp),%eax
088b1126 +0x26c:  mov    %eax,0x4(%esp)
088b112a +0x270:  lea    -0x28(%ebp),%eax
088b112d +0x273:  mov    %eax,(%esp)
088b1130 +0x276:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
088b1135 +0x27b:  mov    0x8(%ebp),%eax
088b1138 +0x27e:  lea    0x1c(%eax),%ecx
088b113b +0x281:  lea    -0x30(%ebp),%eax
088b113e +0x284:  lea    -0x28(%ebp),%edx
088b1141 +0x287:  mov    %edx,0x8(%esp)
088b1145 +0x28b:  mov    %ecx,0x4(%esp)
088b1149 +0x28f:  mov    %eax,(%esp)
088b114c +0x292:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
088b1151 +0x297:  sub    $0x4,%esp
088b1154 +0x29a:  jmp    088b1083 <+0x1c9>
088b1159 +0x29f:  mov    -0x64(%ebp),%eax
088b115c +0x2a2:  mov    %eax,0x4(%esp)
088b1160 +0x2a6:  movl   $"[emblem recharge] duplicate grade:%d",(%esp)
088b1167 +0x2ad:  call   0807db60 <_init+0x458>
088b116c +0x2b2:  mov    $0xfffffffd,%ebx
088b1171 +0x2b7:  jmp    088b12c1 <+0x407>
088b1176 +0x2bc:  movl   $"[recharge use emblem info]",0x4(%esp)
088b117e +0x2c4:  lea    -0x54(%ebp),%eax
088b1181 +0x2c7:  mov    %eax,(%esp)
088b1184 +0x2ca:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088b1189 +0x2cf:  test   %al,%al
088b118b +0x2d1:  je     088b0f11 <+0x57>
088b1191 +0x2d7:  movl   $0x1,0xc(%esp)
088b1199 +0x2df:  lea    -0x56(%ebp),%eax
088b119c +0x2e2:  mov    %eax,0x8(%esp)
088b11a0 +0x2e6:  lea    -0x54(%ebp),%eax
088b11a3 +0x2e9:  mov    %eax,0x4(%esp)
088b11a7 +0x2ed:  lea    -0x55(%ebp),%eax
088b11aa +0x2f0:  mov    %eax,(%esp)
088b11ad +0x2f3:  call   088bceaf <_Z13ScanTypeOrIntRbRSsS_b>  ; ScanTypeOrInt(bool&, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool&, bool)
088b11b2 +0x2f8:  mov    %eax,-0x6c(%ebp)
088b11b5 +0x2fb:  movzbl -0x55(%ebp),%eax
088b11b9 +0x2ff:  test   %al,%al
088b11bb +0x301:  jne    088b11c8 <+0x30e>
088b11bd +0x303:  movzbl -0x56(%ebp),%eax
088b11c1 +0x307:  xor    $0x1,%eax
088b11c4 +0x30a:  test   %al,%al
088b11c6 +0x30c:  je     088b11cd <+0x313>
088b11c8 +0x30e:  jmp    088b128d <+0x3d3>
088b11cd +0x313:  mov    -0x6c(%ebp),%eax
088b11d0 +0x316:  cmp    $0x7,%eax
088b11d3 +0x319:  jle    088b11da <+0x320>
088b11d5 +0x31b:  jmp    088b128d <+0x3d3>
088b11da +0x320:  movl   $0x0,(%esp)
088b11e1 +0x327:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088b11e6 +0x32c:  mov    %eax,-0x70(%ebp)
088b11e9 +0x32f:  mov    0x8(%ebp),%eax
088b11ec +0x332:  lea    0x34(%eax),%edx
088b11ef +0x335:  lea    -0x20(%ebp),%eax
088b11f2 +0x338:  mov    %edx,0x4(%esp)
088b11f6 +0x33c:  mov    %eax,(%esp)
088b11f9 +0x33f:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088b11fe +0x344:  sub    $0x4,%esp
088b1201 +0x347:  mov    0x8(%ebp),%eax
088b1204 +0x34a:  lea    0x34(%eax),%ecx
088b1207 +0x34d:  lea    -0x1c(%ebp),%eax
088b120a +0x350:  lea    -0x6c(%ebp),%edx
088b120d +0x353:  mov    %edx,0x8(%esp)
088b1211 +0x357:  mov    %ecx,0x4(%esp)
088b1215 +0x35b:  mov    %eax,(%esp)
088b1218 +0x35e:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088b121d +0x363:  sub    $0x4,%esp
088b1220 +0x366:  lea    -0x20(%ebp),%eax
088b1223 +0x369:  mov    %eax,0x4(%esp)
088b1227 +0x36d:  lea    -0x1c(%ebp),%eax
088b122a +0x370:  mov    %eax,(%esp)
088b122d +0x373:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
088b1232 +0x378:  test   %al,%al
088b1234 +0x37a:  je     088b1273 <+0x3b9>
088b1236 +0x37c:  lea    -0x70(%ebp),%eax
088b1239 +0x37f:  mov    %eax,0x8(%esp)
088b123d +0x383:  lea    -0x6c(%ebp),%eax
088b1240 +0x386:  mov    %eax,0x4(%esp)
088b1244 +0x38a:  lea    -0x10(%ebp),%eax
088b1247 +0x38d:  mov    %eax,(%esp)
088b124a +0x390:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
088b124f +0x395:  mov    0x8(%ebp),%eax
088b1252 +0x398:  lea    0x34(%eax),%ecx
088b1255 +0x39b:  lea    -0x18(%ebp),%eax
088b1258 +0x39e:  lea    -0x10(%ebp),%edx
088b125b +0x3a1:  mov    %edx,0x8(%esp)
088b125f +0x3a5:  mov    %ecx,0x4(%esp)
088b1263 +0x3a9:  mov    %eax,(%esp)
088b1266 +0x3ac:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
088b126b +0x3b1:  sub    $0x4,%esp
088b126e +0x3b4:  jmp    088b1191 <+0x2d7>
088b1273 +0x3b9:  mov    -0x6c(%ebp),%eax
088b1276 +0x3bc:  mov    %eax,0x4(%esp)
088b127a +0x3c0:  movl   $"[recharge use emblem info] duplicate grade:%d",(%esp)
088b1281 +0x3c7:  call   0807db60 <_init+0x458>
088b1286 +0x3cc:  mov    $0xfffffffc,%ebx
088b128b +0x3d1:  jmp    088b12c1 <+0x407>
088b128d +0x3d3:  jmp    088b0f12 <+0x58>
088b1292 +0x3d8:  nop
088b1293 +0x3d9:  call   088bc054 <_Z20unloadRDARScriptFilev>  ; unloadRDARScriptFile()
088b1298 +0x3de:  mov    0x8(%ebp),%eax
088b129b +0x3e1:  movb   $0x1,0x4c(%eax)
088b129f +0x3e5:  mov    $0x0,%ebx
088b12a4 +0x3ea:  jmp    088b12c1 <+0x407>
088b12a6 +0x3ec:  mov    %edx,%ebx
088b12a8 +0x3ee:  mov    %eax,%esi
088b12aa +0x3f0:  lea    -0x54(%ebp),%eax
088b12ad +0x3f3:  mov    %eax,(%esp)
088b12b0 +0x3f6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b12b5 +0x3fb:  mov    %esi,%eax
088b12b7 +0x3fd:  mov    %ebx,%edx
088b12b9 +0x3ff:  mov    %eax,(%esp)
088b12bc +0x402:  call   08ae3750 <_Unwind_Resume>
088b12c1 +0x407:  lea    -0x54(%ebp),%eax
088b12c4 +0x40a:  mov    %eax,(%esp)
088b12c7 +0x40d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088b12cc +0x412:  mov    %ebx,%eax
088b12ce +0x414:  lea    -0x8(%ebp),%esp
088b12d1 +0x417:  add    $0x0,%esp
088b12d4 +0x41a:  pop    %ebx
088b12d5 +0x41b:  pop    %esi
088b12d6 +0x41c:  pop    %ebp
088b12d7 +0x41d:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarRecharge::loadScript @ 0x88b0eba

/* ARAD::SCRIPT::AvatarRecharge::loadScript() */

undefined4 __thiscall ARAD::SCRIPT::AvatarRecharge::loadScript(AvatarRecharge *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  bool local_5a;
  bool local_59;
  string local_58;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_54 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_50 [4];
  pair local_4c [8];
  pair<int_const,int> local_44 [8];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_38 [4];
  pair local_34 [8];
  pair<int_const,int> local_2c [8];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  pair local_1c [8];
  pair<int_const,int> local_14 [8];
  
  if (this[0x4c] == (AvatarRecharge)0x0) {
    cVar1 = loadRDARScriptFile("Etc/EmblemRenewal/","avatar_recharge_jpn.etc");
    if (cVar1 == '\x01') {
      std::string::string((string *)&local_58);
      local_59 = false;
      local_5a = false;
                    /* try { // try from 088b0f20 to 088b1297 has its CatchHandler @ 088b12a6 */
      while (cVar1 = ScanType((string *)&local_58,true), cVar1 == '\x01') {
        bVar2 = std::operator==(&local_58,"[avatar recharge limit]");
        if (bVar2) {
          uVar3 = ScanInt((bool *)0x0);
          *(undefined4 *)this = uVar3;
        }
        else {
          bVar2 = std::operator==(&local_58,"[emblem recharge stone info]");
          if (bVar2) {
            while ((local_60 = ScanTypeOrInt(&local_59,(string *)&local_58,&local_5a,true),
                   local_59 == false && (local_5a == true))) {
              local_64 = ScanInt((bool *)0x0);
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                        (local_54);
              piVar4 = &local_60;
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                        ((int *)local_50);
              cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                                (local_50,(_Rb_tree_iterator *)local_54);
              if (cVar1 == '\0') {
                printf("[emblem recharge stone info] duplicate item_index:%d",local_60,piVar4);
                uVar3 = 0xfffffffe;
                goto LAB_088b12c1;
              }
              std::pair<int_const,int>::pair<int&,int&>(local_44,&local_60,&local_64);
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                        (local_4c);
            }
          }
          else {
            bVar2 = std::operator==(&local_58,"[emblem recharge]");
            if (bVar2) {
              while ((local_68 = ScanTypeOrInt(&local_59,(string *)&local_58,&local_5a,true),
                     local_59 == false && (local_5a == true))) {
                local_6c = ScanInt((bool *)0x0);
                std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                          (local_3c);
                piVar4 = &local_68;
                std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                          ((int *)local_38);
                cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                                  (local_38,(_Rb_tree_iterator *)local_3c);
                if (cVar1 == '\0') {
                  printf("[emblem recharge] duplicate grade:%d",local_68,piVar4);
                  uVar3 = 0xfffffffd;
                  goto LAB_088b12c1;
                }
                std::pair<int_const,int>::pair<int&,int&>(local_2c,&local_68,&local_6c);
                std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                          (local_34);
              }
            }
            else {
              bVar2 = std::operator==(&local_58,"[recharge use emblem info]");
              if (bVar2) {
                while (((local_70 = ScanTypeOrInt(&local_59,(string *)&local_58,&local_5a,true),
                        local_59 == false && (local_5a == true)) && (local_70 < 8))) {
                  local_74 = ScanInt((bool *)0x0);
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                            (local_24);
                  piVar4 = &local_70;
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                            ((int *)local_20);
                  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                                    (local_20,(_Rb_tree_iterator *)local_24);
                  if (cVar1 == '\0') {
                    printf("[recharge use emblem info] duplicate grade:%d",local_70,piVar4);
                    uVar3 = 0xfffffffc;
                    goto LAB_088b12c1;
                  }
                  std::pair<int_const,int>::pair<int&,int&>(local_14,&local_70,&local_74);
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                            (local_1c);
                }
              }
            }
          }
        }
      }
      unloadRDARScriptFile();
      this[0x4c] = (AvatarRecharge)0x1;
      uVar3 = 0;
LAB_088b12c1:
      std::string::~string((string *)&local_58);
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
