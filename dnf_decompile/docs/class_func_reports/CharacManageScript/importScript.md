# importScript

`_ZN18CharacManageScript12importScriptEPKc`

`CharacManageScript::importScript(char const*)`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e0968` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e0968  _ZN18CharacManageScript12importScriptEPKc
#           CharacManageScript::importScript(char const*)
# range [0x088e0968, 0x088e0e09]
088e0968 +0x000:  push   %ebp
088e0969 +0x001:  mov    %esp,%ebp
088e096b +0x003:  push   %esi
088e096c +0x004:  push   %ebx
088e096d +0x005:  sub    $0x70,%esp
088e0970 +0x008:  mov    0xc(%ebp),%eax
088e0973 +0x00b:  mov    %eax,0x4(%esp)
088e0977 +0x00f:  movl   $"",(%esp)
088e097e +0x016:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088e0983 +0x01b:  xor    $0x1,%eax
088e0986 +0x01e:  test   %al,%al
088e0988 +0x020:  je     088e0994 <+0x2c>
088e098a +0x022:  mov    $0x0,%ebx
088e098f +0x027:  jmp    088e0dfe <+0x496>
088e0994 +0x02c:  lea    -0x30(%ebp),%eax
088e0997 +0x02f:  mov    %eax,(%esp)
088e099a +0x032:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088e099f +0x037:  lea    -0x34(%ebp),%eax
088e09a2 +0x03a:  mov    %eax,(%esp)
088e09a5 +0x03d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088e09aa +0x042:  movb   $0x0,-0x35(%ebp)
088e09ae +0x046:  movl   $0x1,0x4(%esp)
088e09b6 +0x04e:  lea    -0x30(%ebp),%eax
088e09b9 +0x051:  mov    %eax,(%esp)
088e09bc +0x054:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088e09c1 +0x059:  xor    $0x1,%eax
088e09c4 +0x05c:  test   %al,%al
088e09c6 +0x05e:  jne    088e0dae <+0x446>
088e09cc +0x064:  lea    -0x30(%ebp),%eax
088e09cf +0x067:  mov    %eax,0x4(%esp)
088e09d3 +0x06b:  movl   $"[point bonus]",(%esp)
088e09da +0x072:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
088e09df +0x077:  test   %al,%al
088e09e1 +0x079:  je     088e0a6b <+0x103>
088e09e7 +0x07f:  lea    -0x44(%ebp),%eax
088e09ea +0x082:  mov    %eax,(%esp)
088e09ed +0x085:  call   088e12f6 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x1d>  ; global constructors keyed to CharacManageScript::instance_+0x1d
088e09f2 +0x08a:  lea    -0x35(%ebp),%eax
088e09f5 +0x08d:  mov    %eax,(%esp)
088e09f8 +0x090:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088e09fd +0x095:  mov    %eax,-0x44(%ebp)
088e0a00 +0x098:  movzbl -0x35(%ebp),%eax
088e0a04 +0x09c:  xor    $0x1,%eax
088e0a07 +0x09f:  test   %al,%al
088e0a09 +0x0a1:  je     088e0a0e <+0xa6>
088e0a0b +0x0a3:  nop
088e0a0c +0x0a4:  jmp    088e09ae <+0x46>
088e0a0e +0x0a6:  lea    -0x35(%ebp),%eax
088e0a11 +0x0a9:  mov    %eax,(%esp)
088e0a14 +0x0ac:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088e0a19 +0x0b1:  mov    %eax,-0x40(%ebp)
088e0a1c +0x0b4:  movzbl -0x35(%ebp),%eax
088e0a20 +0x0b8:  xor    $0x1,%eax
088e0a23 +0x0bb:  test   %al,%al
088e0a25 +0x0bd:  je     088e0a31 <+0xc9>
088e0a27 +0x0bf:  mov    $0x0,%ebx
088e0a2c +0x0c4:  jmp    088e0dcb <+0x463>
088e0a31 +0x0c9:  lea    -0x35(%ebp),%eax
088e0a34 +0x0cc:  mov    %eax,(%esp)
088e0a37 +0x0cf:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088e0a3c +0x0d4:  mov    %eax,-0x3c(%ebp)
088e0a3f +0x0d7:  movzbl -0x35(%ebp),%eax
088e0a43 +0x0db:  xor    $0x1,%eax
088e0a46 +0x0de:  test   %al,%al
088e0a48 +0x0e0:  je     088e0a54 <+0xec>
088e0a4a +0x0e2:  mov    $0x0,%ebx
088e0a4f +0x0e7:  jmp    088e0dcb <+0x463>
088e0a54 +0x0ec:  mov    0x8(%ebp),%eax
088e0a57 +0x0ef:  lea    -0x44(%ebp),%edx
088e0a5a +0x0f2:  mov    %edx,0x4(%esp)
088e0a5e +0x0f6:  mov    %eax,(%esp)
088e0a61 +0x0f9:  call   088e1564 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x28b>  ; global constructors keyed to CharacManageScript::instance_+0x28b
088e0a66 +0x0fe:  jmp    088e09e7 <+0x7f>
088e0a6b +0x103:  lea    -0x30(%ebp),%eax
088e0a6e +0x106:  mov    %eax,0x4(%esp)
088e0a72 +0x10a:  movl   $"[manage level point]",(%esp)
088e0a79 +0x111:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
088e0a7e +0x116:  test   %al,%al
088e0a80 +0x118:  je     088e0ab8 <+0x150>
088e0a82 +0x11a:  lea    -0x35(%ebp),%eax
088e0a85 +0x11d:  mov    %eax,(%esp)
088e0a88 +0x120:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088e0a8d +0x125:  mov    %eax,-0x48(%ebp)
088e0a90 +0x128:  movzbl -0x35(%ebp),%eax
088e0a94 +0x12c:  xor    $0x1,%eax
088e0a97 +0x12f:  test   %al,%al
088e0a99 +0x131:  je     088e0aa1 <+0x139>
088e0a9b +0x133:  nop
088e0a9c +0x134:  jmp    088e09ae <+0x46>
088e0aa1 +0x139:  mov    0x8(%ebp),%eax
088e0aa4 +0x13c:  lea    0xc(%eax),%edx
088e0aa7 +0x13f:  lea    -0x48(%ebp),%eax
088e0aaa +0x142:  mov    %eax,0x4(%esp)
088e0aae +0x146:  mov    %edx,(%esp)
088e0ab1 +0x149:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
088e0ab6 +0x14e:  jmp    088e0a82 <+0x11a>
088e0ab8 +0x150:  lea    -0x30(%ebp),%eax
088e0abb +0x153:  mov    %eax,0x4(%esp)
088e0abf +0x157:  movl   $"[manage level max]",(%esp)
088e0ac6 +0x15e:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
088e0acb +0x163:  test   %al,%al
088e0acd +0x165:  je     088e0b00 <+0x198>
088e0acf +0x167:  lea    -0x35(%ebp),%eax
088e0ad2 +0x16a:  mov    %eax,(%esp)
088e0ad5 +0x16d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088e0ada +0x172:  mov    %eax,-0x14(%ebp)
088e0add +0x175:  movzbl -0x35(%ebp),%eax
088e0ae1 +0x179:  xor    $0x1,%eax
088e0ae4 +0x17c:  test   %al,%al
088e0ae6 +0x17e:  je     088e0af2 <+0x18a>
088e0ae8 +0x180:  mov    $0x0,%ebx
088e0aed +0x185:  jmp    088e0dcb <+0x463>
088e0af2 +0x18a:  mov    0x8(%ebp),%eax
088e0af5 +0x18d:  mov    -0x14(%ebp),%edx
088e0af8 +0x190:  mov    %edx,0x48(%eax)
088e0afb +0x193:  jmp    088e09ae <+0x46>
088e0b00 +0x198:  lea    -0x30(%ebp),%eax
088e0b03 +0x19b:  mov    %eax,0x4(%esp)
088e0b07 +0x19f:  movl   $"[exp bonus]",(%esp)
088e0b0e +0x1a6:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
088e0b13 +0x1ab:  test   %al,%al
088e0b15 +0x1ad:  jne    088e0b2e <+0x1c6>
088e0b17 +0x1af:  lea    -0x30(%ebp),%eax
088e0b1a +0x1b2:  mov    %eax,0x4(%esp)
088e0b1e +0x1b6:  movl   $"[gold bonus]",(%esp)
088e0b25 +0x1bd:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
088e0b2a +0x1c2:  test   %al,%al
088e0b2c +0x1c4:  je     088e0b35 <+0x1cd>
088e0b2e +0x1c6:  mov    $0x1,%eax
088e0b33 +0x1cb:  jmp    088e0b3a <+0x1d2>
088e0b35 +0x1cd:  mov    $0x0,%eax
088e0b3a +0x1d2:  test   %al,%al
088e0b3c +0x1d4:  je     088e0c63 <+0x2fb>
088e0b42 +0x1da:  movl   $0x0,-0x50(%ebp)
088e0b49 +0x1e1:  jmp    088e0b4c <+0x1e4>
088e0b4b +0x1e3:  nop
088e0b4c +0x1e4:  lea    -0x35(%ebp),%eax
088e0b4f +0x1e7:  mov    %eax,(%esp)
088e0b52 +0x1ea:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088e0b57 +0x1ef:  mov    %eax,-0x4c(%ebp)
088e0b5a +0x1f2:  movzbl -0x35(%ebp),%eax
088e0b5e +0x1f6:  xor    $0x1,%eax
088e0b61 +0x1f9:  test   %al,%al
088e0b63 +0x1fb:  je     088e0b6b <+0x203>
088e0b65 +0x1fd:  nop
088e0b66 +0x1fe:  jmp    088e09ae <+0x46>
088e0b6b +0x203:  lea    -0x35(%ebp),%eax
088e0b6e +0x206:  mov    %eax,(%esp)
088e0b71 +0x209:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088e0b76 +0x20e:  mov    %eax,-0x50(%ebp)
088e0b79 +0x211:  movzbl -0x35(%ebp),%eax
088e0b7d +0x215:  xor    $0x1,%eax
088e0b80 +0x218:  test   %al,%al
088e0b82 +0x21a:  je     088e0b8e <+0x226>
088e0b84 +0x21c:  mov    $0x0,%ebx
088e0b89 +0x221:  jmp    088e0dcb <+0x463>
088e0b8e +0x226:  movl   $0x0,-0x10(%ebp)
088e0b95 +0x22d:  lea    -0x30(%ebp),%eax
088e0b98 +0x230:  mov    %eax,0x4(%esp)
088e0b9c +0x234:  movl   $"[exp bonus]",(%esp)
088e0ba3 +0x23b:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
088e0ba8 +0x240:  test   %al,%al
088e0baa +0x242:  je     088e0bb7 <+0x24f>
088e0bac +0x244:  mov    0x8(%ebp),%eax
088e0baf +0x247:  add    $0x18,%eax
088e0bb2 +0x24a:  mov    %eax,-0x10(%ebp)
088e0bb5 +0x24d:  jmp    088e0be3 <+0x27b>
088e0bb7 +0x24f:  lea    -0x30(%ebp),%eax
088e0bba +0x252:  mov    %eax,0x4(%esp)
088e0bbe +0x256:  movl   $"[gold bonus]",(%esp)
088e0bc5 +0x25d:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
088e0bca +0x262:  test   %al,%al
088e0bcc +0x264:  je     088e0bd9 <+0x271>
088e0bce +0x266:  mov    0x8(%ebp),%eax
088e0bd1 +0x269:  add    $0x30,%eax
088e0bd4 +0x26c:  mov    %eax,-0x10(%ebp)
088e0bd7 +0x26f:  jmp    088e0be3 <+0x27b>
088e0bd9 +0x271:  mov    $0x0,%ebx
088e0bde +0x276:  jmp    088e0dcb <+0x463>
088e0be3 +0x27b:  lea    -0x1c(%ebp),%eax
088e0be6 +0x27e:  lea    -0x50(%ebp),%edx
088e0be9 +0x281:  mov    %edx,0x8(%esp)
088e0bed +0x285:  lea    -0x4c(%ebp),%edx
088e0bf0 +0x288:  mov    %edx,0x4(%esp)
088e0bf4 +0x28c:  mov    %eax,(%esp)
088e0bf7 +0x28f:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
088e0bfc +0x294:  sub    $0x4,%esp
088e0bff +0x297:  lea    -0x1c(%ebp),%eax
088e0c02 +0x29a:  mov    %eax,0x4(%esp)
088e0c06 +0x29e:  lea    -0x24(%ebp),%eax
088e0c09 +0x2a1:  mov    %eax,(%esp)
088e0c0c +0x2a4:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
088e0c11 +0x2a9:  lea    -0x2c(%ebp),%eax
088e0c14 +0x2ac:  lea    -0x24(%ebp),%edx
088e0c17 +0x2af:  mov    %edx,0x8(%esp)
088e0c1b +0x2b3:  mov    -0x10(%ebp),%edx
088e0c1e +0x2b6:  mov    %edx,0x4(%esp)
088e0c22 +0x2ba:  mov    %eax,(%esp)
088e0c25 +0x2bd:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
088e0c2a +0x2c2:  sub    $0x4,%esp
088e0c2d +0x2c5:  movzbl -0x28(%ebp),%eax
088e0c31 +0x2c9:  xor    $0x1,%eax
088e0c34 +0x2cc:  test   %al,%al
088e0c36 +0x2ce:  je     088e0b4b <+0x1e3>
088e0c3c +0x2d4:  lea    -0x30(%ebp),%eax
088e0c3f +0x2d7:  mov    %eax,(%esp)
088e0c42 +0x2da:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
088e0c47 +0x2df:  mov    %eax,0x8(%esp)
088e0c4b +0x2e3:  mov    0xc(%ebp),%eax
088e0c4e +0x2e6:  mov    %eax,0x4(%esp)
088e0c52 +0x2ea:  movl   $"ERROR [%s][%s] key duplicated\n",(%esp)
088e0c59 +0x2f1:  call   0807db60 <_init+0x458>
088e0c5e +0x2f6:  jmp    088e0b4c <+0x1e4>
088e0c63 +0x2fb:  lea    -0x30(%ebp),%eax
088e0c66 +0x2fe:  mov    %eax,0x4(%esp)
088e0c6a +0x302:  movl   $"[manage basic explain]",(%esp)
088e0c71 +0x309:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
088e0c76 +0x30e:  test   %al,%al
088e0c78 +0x310:  je     088e0cdd <+0x375>
088e0c7a +0x312:  mov    0x8(%ebp),%eax
088e0c7d +0x315:  add    $0x4c,%eax
088e0c80 +0x318:  mov    %eax,(%esp)
088e0c83 +0x31b:  call   080c6bd6 <_GLOBAL__I_g_ServerString_+0x141>  ; global constructors keyed to g_ServerString_+0x141
088e0c88 +0x320:  movl   $0x0,-0x54(%ebp)
088e0c8f +0x327:  lea    -0x34(%ebp),%eax
088e0c92 +0x32a:  mov    %eax,(%esp)
088e0c95 +0x32d:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088e0c9a +0x332:  mov    %al,-0x35(%ebp)
088e0c9d +0x335:  movzbl -0x35(%ebp),%eax
088e0ca1 +0x339:  xor    $0x1,%eax
088e0ca4 +0x33c:  test   %al,%al
088e0ca6 +0x33e:  je     088e0cae <+0x346>
088e0ca8 +0x340:  nop
088e0ca9 +0x341:  jmp    088e09ae <+0x46>
088e0cae +0x346:  mov    0x8(%ebp),%eax
088e0cb1 +0x349:  lea    0x4c(%eax),%edx
088e0cb4 +0x34c:  lea    -0x54(%ebp),%eax
088e0cb7 +0x34f:  mov    %eax,0x4(%esp)
088e0cbb +0x353:  mov    %edx,(%esp)
088e0cbe +0x356:  call   088e1318 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x3f>  ; global constructors keyed to CharacManageScript::instance_+0x3f
088e0cc3 +0x35b:  lea    -0x34(%ebp),%edx
088e0cc6 +0x35e:  mov    %edx,0x4(%esp)
088e0cca +0x362:  mov    %eax,(%esp)
088e0ccd +0x365:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
088e0cd2 +0x36a:  mov    -0x54(%ebp),%eax
088e0cd5 +0x36d:  add    $0x1,%eax
088e0cd8 +0x370:  mov    %eax,-0x54(%ebp)
088e0cdb +0x373:  jmp    088e0c8f <+0x327>
088e0cdd +0x375:  lea    -0x30(%ebp),%eax
088e0ce0 +0x378:  mov    %eax,0x4(%esp)
088e0ce4 +0x37c:  movl   $"[manage option]",(%esp)
088e0ceb +0x383:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
088e0cf0 +0x388:  test   %al,%al
088e0cf2 +0x38a:  je     088e0d4c <+0x3e4>
088e0cf4 +0x38c:  mov    0x8(%ebp),%eax
088e0cf7 +0x38f:  add    $0x64,%eax
088e0cfa +0x392:  mov    %eax,(%esp)
088e0cfd +0x395:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
088e0d02 +0x39a:  lea    -0x35(%ebp),%eax
088e0d05 +0x39d:  mov    %eax,(%esp)
088e0d08 +0x3a0:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088e0d0d +0x3a5:  mov    %eax,-0x58(%ebp)
088e0d10 +0x3a8:  movzbl -0x35(%ebp),%eax
088e0d14 +0x3ac:  xor    $0x1,%eax
088e0d17 +0x3af:  test   %al,%al
088e0d19 +0x3b1:  je     088e0d21 <+0x3b9>
088e0d1b +0x3b3:  nop
088e0d1c +0x3b4:  jmp    088e09ae <+0x46>
088e0d21 +0x3b9:  movl   $0x0,(%esp)
088e0d28 +0x3c0:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088e0d2d +0x3c5:  mov    %eax,-0xc(%ebp)
088e0d30 +0x3c8:  mov    0x8(%ebp),%eax
088e0d33 +0x3cb:  lea    0x64(%eax),%edx
088e0d36 +0x3ce:  lea    -0x58(%ebp),%eax
088e0d39 +0x3d1:  mov    %eax,0x4(%esp)
088e0d3d +0x3d5:  mov    %edx,(%esp)
088e0d40 +0x3d8:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
088e0d45 +0x3dd:  mov    -0xc(%ebp),%edx
088e0d48 +0x3e0:  mov    %edx,(%eax)
088e0d4a +0x3e2:  jmp    088e0d02 <+0x39a>
088e0d4c +0x3e4:  mov    0x8(%ebp),%eax
088e0d4f +0x3e7:  add    $0x7c,%eax
088e0d52 +0x3ea:  mov    %eax,(%esp)
088e0d55 +0x3ed:  call   088e15d8 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x2ff>  ; global constructors keyed to CharacManageScript::instance_+0x2ff
088e0d5a +0x3f2:  lea    -0x34(%ebp),%eax
088e0d5d +0x3f5:  mov    %eax,(%esp)
088e0d60 +0x3f8:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088e0d65 +0x3fd:  xor    $0x1,%eax
088e0d68 +0x400:  test   %al,%al
088e0d6a +0x402:  je     088e0d72 <+0x40a>
088e0d6c +0x404:  nop
088e0d6d +0x405:  jmp    088e09ae <+0x46>
088e0d72 +0x40a:  lea    -0x34(%ebp),%eax
088e0d75 +0x40d:  mov    %eax,(%esp)
088e0d78 +0x410:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
088e0d7d +0x415:  mov    %eax,(%esp)
088e0d80 +0x418:  call   08ac34a4 <_ZN12ContentsType7getTypeEPKc>  ; ContentsType::getType(char const*)
088e0d85 +0x41d:  mov    %eax,-0x60(%ebp)
088e0d88 +0x420:  movl   $0x0,(%esp)
088e0d8f +0x427:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088e0d94 +0x42c:  mov    %eax,-0x5c(%ebp)
088e0d97 +0x42f:  mov    0x8(%ebp),%eax
088e0d9a +0x432:  lea    0x7c(%eax),%edx
088e0d9d +0x435:  lea    -0x60(%ebp),%eax
088e0da0 +0x438:  mov    %eax,0x4(%esp)
088e0da4 +0x43c:  mov    %edx,(%esp)
088e0da7 +0x43f:  call   088e15f4 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x31b>  ; global constructors keyed to CharacManageScript::instance_+0x31b
088e0dac +0x444:  jmp    088e0d5a <+0x3f2>
088e0dae +0x446:  nop
088e0daf +0x447:  mov    $0x1,%ebx
088e0db4 +0x44c:  jmp    088e0dcb <+0x463>
088e0db6 +0x44e:  mov    %edx,%ebx
088e0db8 +0x450:  mov    %eax,%esi
088e0dba +0x452:  lea    -0x34(%ebp),%eax
088e0dbd +0x455:  mov    %eax,(%esp)
088e0dc0 +0x458:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088e0dc5 +0x45d:  mov    %esi,%eax
088e0dc7 +0x45f:  mov    %ebx,%edx
088e0dc9 +0x461:  jmp    088e0dd8 <+0x470>
088e0dcb +0x463:  lea    -0x34(%ebp),%eax
088e0dce +0x466:  mov    %eax,(%esp)
088e0dd1 +0x469:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088e0dd6 +0x46e:  jmp    088e0df3 <+0x48b>
088e0dd8 +0x470:  mov    %edx,%ebx
088e0dda +0x472:  mov    %eax,%esi
088e0ddc +0x474:  lea    -0x30(%ebp),%eax
088e0ddf +0x477:  mov    %eax,(%esp)
088e0de2 +0x47a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088e0de7 +0x47f:  mov    %esi,%eax
088e0de9 +0x481:  mov    %ebx,%edx
088e0deb +0x483:  mov    %eax,(%esp)
088e0dee +0x486:  call   08ae3750 <_Unwind_Resume>
088e0df3 +0x48b:  lea    -0x30(%ebp),%eax
088e0df6 +0x48e:  mov    %eax,(%esp)
088e0df9 +0x491:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088e0dfe +0x496:  mov    %ebx,%eax
088e0e00 +0x498:  lea    -0x8(%ebp),%esp
088e0e03 +0x49b:  add    $0x0,%esp
088e0e06 +0x49e:  pop    %ebx
088e0e07 +0x49f:  pop    %esi
088e0e08 +0x4a0:  pop    %ebp
088e0e09 +0x4a1:  ret
```

## 反编译 C

```c
// CharacManageScript::importScript @ 0x88e0968

/* CharacManageScript::importScript(char const*) */

undefined4 __thiscall CharacManageScript::importScript(CharacManageScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  string *this_00;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  bool local_39;
  string local_38 [4];
  string local_34;
  pair local_30 [4];
  char local_2c;
  pair<int_const,int> local_28 [8];
  int local_20 [2];
  undefined4 local_18;
  CharacManageScript *local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_34);
                    /* try { // try from 088e09a5 to 088e09a9 has its CatchHandler @ 088e0dd8 */
    std::string::string(local_38);
    local_39 = false;
                    /* try { // try from 088e09bc to 088e0dab has its CatchHandler @ 088e0db6 */
    while (cVar1 = ScanType((string *)&local_34,true), cVar1 == '\x01') {
      bVar2 = std::operator==("[point bonus]",&local_34);
      if (bVar2) {
        while( true ) {
          ManagePointBonus::ManagePointBonus((ManagePointBonus *)&local_48);
          local_48 = ScanInt(&local_39);
          if (local_39 != true) break;
          local_44 = ScanInt(&local_39);
          if (local_39 != true) {
            uVar5 = 0;
            goto LAB_088e0dcb;
          }
          local_40 = ScanInt(&local_39);
          if (local_39 != true) {
            uVar5 = 0;
            goto LAB_088e0dcb;
          }
          std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::push_back
                    ((vector<ManagePointBonus,std::allocator<ManagePointBonus>> *)this,
                     (ManagePointBonus *)&local_48);
        }
      }
      else {
        bVar2 = std::operator==("[manage level point]",&local_34);
        if (bVar2) {
          while (local_4c = ScanInt(&local_39), local_39 == true) {
            std::vector<int,std::allocator<int>>::push_back
                      ((vector<int,std::allocator<int>> *)(this + 0xc),&local_4c);
          }
        }
        else {
          bVar2 = std::operator==("[manage level max]",&local_34);
          if (bVar2) {
            local_18 = ScanInt(&local_39);
            if (local_39 != true) {
              uVar5 = 0;
              goto LAB_088e0dcb;
            }
            *(undefined4 *)(this + 0x48) = local_18;
          }
          else {
            bVar2 = std::operator==("[exp bonus]",&local_34);
            if ((bVar2) || (bVar2 = std::operator==("[gold bonus]",&local_34), bVar2)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (bVar2) {
              local_54 = 0;
              while (local_50 = ScanInt(&local_39), local_39 == true) {
                local_54 = ScanInt(&local_39);
                if (local_39 != true) {
                  uVar5 = 0;
                  goto LAB_088e0dcb;
                }
                local_14 = (CharacManageScript *)0x0;
                bVar2 = std::operator==("[exp bonus]",&local_34);
                if (bVar2) {
                  local_14 = this + 0x18;
                }
                else {
                  bVar2 = std::operator==("[gold bonus]",&local_34);
                  if (!bVar2) {
                    uVar5 = 0;
                    goto LAB_088e0dcb;
                  }
                  local_14 = this + 0x30;
                }
                std::make_pair<int&,int&>(local_20,&local_50);
                std::pair<int_const,int>::pair<int,int>(local_28,(pair *)local_20);
                std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                          (local_30);
                if (local_2c != '\x01') {
                  uVar5 = std::string::c_str((string *)&local_34);
                  printf("ERROR [%s][%s] key duplicated\n",param_1,uVar5);
                }
              }
            }
            else {
              bVar2 = std::operator==("[manage basic explain]",&local_34);
              if (bVar2) {
                std::
                map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                ::clear((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                         *)(this + 0x4c));
                local_58 = 0;
                while (local_39 = (bool)ScanStr(local_38), local_39 == true) {
                  this_00 = (string *)
                            std::
                            map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                            ::operator[]((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                                          *)(this + 0x4c),&local_58);
                  std::string::operator=(this_00,local_38);
                  local_58 = local_58 + 1;
                }
              }
              else {
                bVar2 = std::operator==("[manage option]",&local_34);
                if (bVar2) {
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
                            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )(this + 100));
                  while (local_5c = ScanInt(&local_39), local_39 == true) {
                    local_10 = ScanInt((bool *)0x0);
                    puVar3 = (undefined4 *)
                             std::
                             map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                             operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                         *)(this + 100),&local_5c);
                    *puVar3 = local_10;
                  }
                }
                else {
                  std::vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>::clear
                            ((vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>
                              *)(this + 0x7c));
                  while (cVar1 = ScanStr(local_38), cVar1 == '\x01') {
                    pcVar4 = (char *)std::string::c_str(local_38);
                    local_64 = ContentsType::getType(pcVar4);
                    local_60 = ScanInt((bool *)0x0);
                    std::vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>::
                    push_back((vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>
                               *)(this + 0x7c),(ContentsOptionRevision *)&local_64);
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar5 = 1;
LAB_088e0dcb:
                    /* try { // try from 088e0dd1 to 088e0dd5 has its CatchHandler @ 088e0dd8 */
    std::string::~string(local_38);
    std::string::~string((string *)&local_34);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
