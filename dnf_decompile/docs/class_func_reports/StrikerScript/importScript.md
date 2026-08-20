# importScript

`_ZN13StrikerScript12importScriptEPKc`

`StrikerScript::importScript(char const*)`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9ddb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9ddb2  _ZN13StrikerScript12importScriptEPKc
#           StrikerScript::importScript(char const*)
# range [0x08a9ddb2, 0x08a9e4d5]
08a9ddb2 +0x000:  push   %ebp
08a9ddb3 +0x001:  mov    %esp,%ebp
08a9ddb5 +0x003:  push   %edi
08a9ddb6 +0x004:  push   %esi
08a9ddb7 +0x005:  push   %ebx
08a9ddb8 +0x006:  sub    $0x8c,%esp
08a9ddbe +0x00c:  mov    0xc(%ebp),%eax
08a9ddc1 +0x00f:  mov    %eax,0x4(%esp)
08a9ddc5 +0x013:  movl   $"",(%esp)
08a9ddcc +0x01a:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08a9ddd1 +0x01f:  xor    $0x1,%eax
08a9ddd4 +0x022:  test   %al,%al
08a9ddd6 +0x024:  je     08a9dde2 <+0x30>
08a9ddd8 +0x026:  mov    $0x0,%ebx
08a9dddd +0x02b:  jmp    08a9e4c8 <+0x716>
08a9dde2 +0x030:  lea    -0x3c(%ebp),%eax
08a9dde5 +0x033:  mov    %eax,(%esp)
08a9dde8 +0x036:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a9dded +0x03b:  lea    -0x40(%ebp),%eax
08a9ddf0 +0x03e:  mov    %eax,(%esp)
08a9ddf3 +0x041:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a9ddf8 +0x046:  movb   $0x0,-0x41(%ebp)
08a9ddfc +0x04a:  movl   $0x0,-0x48(%ebp)
08a9de03 +0x051:  jmp    08a9de09 <+0x57>
08a9de05 +0x053:  nop
08a9de06 +0x054:  jmp    08a9de09 <+0x57>
08a9de08 +0x056:  nop
08a9de09 +0x057:  movl   $0x1,0x4(%esp)
08a9de11 +0x05f:  lea    -0x3c(%ebp),%eax
08a9de14 +0x062:  mov    %eax,(%esp)
08a9de17 +0x065:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
08a9de1c +0x06a:  xor    $0x1,%eax
08a9de1f +0x06d:  test   %al,%al
08a9de21 +0x06f:  jne    08a9e470 <+0x6be>
08a9de27 +0x075:  lea    -0x3c(%ebp),%eax
08a9de2a +0x078:  mov    %eax,0x4(%esp)
08a9de2e +0x07c:  movl   $"[tag mode]",(%esp)
08a9de35 +0x083:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9de3a +0x088:  test   %al,%al
08a9de3c +0x08a:  je     08a9de4e <+0x9c>
08a9de3e +0x08c:  lea    -0x41(%ebp),%eax
08a9de41 +0x08f:  mov    %eax,(%esp)
08a9de44 +0x092:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9de49 +0x097:  mov    %eax,-0x48(%ebp)
08a9de4c +0x09a:  jmp    08a9de09 <+0x57>
08a9de4e +0x09c:  lea    -0x3c(%ebp),%eax
08a9de51 +0x09f:  mov    %eax,0x4(%esp)
08a9de55 +0x0a3:  movl   $"[tag cost time]",(%esp)
08a9de5c +0x0aa:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9de61 +0x0af:  test   %al,%al
08a9de63 +0x0b1:  je     08a9de7d <+0xcb>
08a9de65 +0x0b3:  lea    -0x41(%ebp),%eax
08a9de68 +0x0b6:  mov    %eax,(%esp)
08a9de6b +0x0b9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9de70 +0x0be:  mov    %eax,-0x48(%ebp)
08a9de73 +0x0c1:  mov    -0x48(%ebp),%edx
08a9de76 +0x0c4:  mov    0x8(%ebp),%eax
08a9de79 +0x0c7:  mov    %edx,(%eax)
08a9de7b +0x0c9:  jmp    08a9de09 <+0x57>
08a9de7d +0x0cb:  lea    -0x3c(%ebp),%eax
08a9de80 +0x0ce:  mov    %eax,0x4(%esp)
08a9de84 +0x0d2:  movl   $"[tag character setting]",(%esp)
08a9de8b +0x0d9:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9de90 +0x0de:  test   %al,%al
08a9de92 +0x0e0:  je     08a9deaa <+0xf8>
08a9de94 +0x0e2:  lea    -0x41(%ebp),%eax
08a9de97 +0x0e5:  mov    %eax,(%esp)
08a9de9a +0x0e8:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9de9f +0x0ed:  mov    0x8(%ebp),%edx
08a9dea2 +0x0f0:  mov    %eax,0x4(%edx)
08a9dea5 +0x0f3:  jmp    08a9de09 <+0x57>
08a9deaa +0x0f8:  lea    -0x3c(%ebp),%eax
08a9dead +0x0fb:  mov    %eax,0x4(%esp)
08a9deb1 +0x0ff:  movl   $"[striker combo]",(%esp)
08a9deb8 +0x106:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9debd +0x10b:  test   %al,%al
08a9debf +0x10d:  je     08a9ded7 <+0x125>
08a9dec1 +0x10f:  lea    -0x41(%ebp),%eax
08a9dec4 +0x112:  mov    %eax,(%esp)
08a9dec7 +0x115:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9decc +0x11a:  mov    0x8(%ebp),%edx
08a9decf +0x11d:  mov    %eax,0x8(%edx)
08a9ded2 +0x120:  jmp    08a9de09 <+0x57>
08a9ded7 +0x125:  lea    -0x3c(%ebp),%eax
08a9deda +0x128:  mov    %eax,0x4(%esp)
08a9dede +0x12c:  movl   $"[striker start time]",(%esp)
08a9dee5 +0x133:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9deea +0x138:  test   %al,%al
08a9deec +0x13a:  je     08a9df0a <+0x158>
08a9deee +0x13c:  lea    -0x41(%ebp),%eax
08a9def1 +0x13f:  mov    %eax,(%esp)
08a9def4 +0x142:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9def9 +0x147:  mov    %eax,-0x48(%ebp)
08a9defc +0x14a:  mov    -0x48(%ebp),%edx
08a9deff +0x14d:  mov    0x8(%ebp),%eax
08a9df02 +0x150:  mov    %edx,0xc(%eax)
08a9df05 +0x153:  jmp    08a9de09 <+0x57>
08a9df0a +0x158:  lea    -0x3c(%ebp),%eax
08a9df0d +0x15b:  mov    %eax,0x4(%esp)
08a9df11 +0x15f:  movl   $"[striker skill data up]",(%esp)
08a9df18 +0x166:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9df1d +0x16b:  test   %al,%al
08a9df1f +0x16d:  je     08a9df31 <+0x17f>
08a9df21 +0x16f:  mov    0x8(%ebp),%eax
08a9df24 +0x172:  mov    %eax,(%esp)
08a9df27 +0x175:  call   08a9e4d6 <_ZN13StrikerScript23importSkillDataUpVectorEv>  ; StrikerScript::importSkillDataUpVector()
08a9df2c +0x17a:  jmp    08a9de09 <+0x57>
08a9df31 +0x17f:  lea    -0x3c(%ebp),%eax
08a9df34 +0x182:  mov    %eax,0x4(%esp)
08a9df38 +0x186:  movl   $"[striker skill attack penalty]",(%esp)
08a9df3f +0x18d:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9df44 +0x192:  test   %al,%al
08a9df46 +0x194:  je     08a9df58 <+0x1a6>
08a9df48 +0x196:  mov    0x8(%ebp),%eax
08a9df4b +0x199:  mov    %eax,(%esp)
08a9df4e +0x19c:  call   08a9e5d0 <_ZN13StrikerScript24importSkillAttackPenaltyEv>  ; StrikerScript::importSkillAttackPenalty()
08a9df53 +0x1a1:  jmp    08a9de09 <+0x57>
08a9df58 +0x1a6:  lea    -0x3c(%ebp),%eax
08a9df5b +0x1a9:  mov    %eax,0x4(%esp)
08a9df5f +0x1ad:  movl   $"[striker skill cooltime penalty]",(%esp)
08a9df66 +0x1b4:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9df6b +0x1b9:  test   %al,%al
08a9df6d +0x1bb:  je     08a9df7f <+0x1cd>
08a9df6f +0x1bd:  mov    0x8(%ebp),%eax
08a9df72 +0x1c0:  mov    %eax,(%esp)
08a9df75 +0x1c3:  call   08a9e5fc <_ZN13StrikerScript26importSkillCoolTimePenaltyEv>  ; StrikerScript::importSkillCoolTimePenalty()
08a9df7a +0x1c8:  jmp    08a9de09 <+0x57>
08a9df7f +0x1cd:  lea    -0x3c(%ebp),%eax
08a9df82 +0x1d0:  mov    %eax,0x4(%esp)
08a9df86 +0x1d4:  movl   $"[striker level penalty]",(%esp)
08a9df8d +0x1db:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9df92 +0x1e0:  test   %al,%al
08a9df94 +0x1e2:  je     08a9dfa6 <+0x1f4>
08a9df96 +0x1e4:  mov    0x8(%ebp),%eax
08a9df99 +0x1e7:  mov    %eax,(%esp)
08a9df9c +0x1ea:  call   08a9e654 <_ZN13StrikerScript24importParentLevelPenlatyEv>  ; StrikerScript::importParentLevelPenlaty()
08a9dfa1 +0x1ef:  jmp    08a9de09 <+0x57>
08a9dfa6 +0x1f4:  lea    -0x3c(%ebp),%eax
08a9dfa9 +0x1f7:  mov    %eax,0x4(%esp)
08a9dfad +0x1fb:  movl   $"[striker module impossible]",(%esp)
08a9dfb4 +0x202:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9dfb9 +0x207:  test   %al,%al
08a9dfbb +0x209:  je     08a9e010 <+0x25e>
08a9dfbd +0x20b:  mov    0x8(%ebp),%eax
08a9dfc0 +0x20e:  add    $0x14,%eax
08a9dfc3 +0x211:  mov    %eax,(%esp)
08a9dfc6 +0x214:  call   08a9f09c <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x3af>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x3af
08a9dfcb +0x219:  lea    -0x40(%ebp),%eax
08a9dfce +0x21c:  mov    %eax,(%esp)
08a9dfd1 +0x21f:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a9dfd6 +0x224:  xor    $0x1,%eax
08a9dfd9 +0x227:  test   %al,%al
08a9dfdb +0x229:  je     08a9dfe3 <+0x231>
08a9dfdd +0x22b:  nop
08a9dfde +0x22c:  jmp    08a9de09 <+0x57>
08a9dfe3 +0x231:  lea    -0x40(%ebp),%eax
08a9dfe6 +0x234:  mov    %eax,(%esp)
08a9dfe9 +0x237:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08a9dfee +0x23c:  mov    %eax,(%esp)
08a9dff1 +0x23f:  call   08ac34a4 <_ZN12ContentsType7getTypeEPKc>  ; ContentsType::getType(char const*)
08a9dff6 +0x244:  mov    %eax,-0x38(%ebp)
08a9dff9 +0x247:  mov    0x8(%ebp),%eax
08a9dffc +0x24a:  lea    0x14(%eax),%edx
08a9dfff +0x24d:  lea    -0x38(%ebp),%eax
08a9e002 +0x250:  mov    %eax,0x4(%esp)
08a9e006 +0x254:  mov    %edx,(%esp)
08a9e009 +0x257:  call   08a9f1b6 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x4c9>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x4c9
08a9e00e +0x25c:  jmp    08a9dfcb <+0x219>
08a9e010 +0x25e:  lea    -0x3c(%ebp),%eax
08a9e013 +0x261:  mov    %eax,0x4(%esp)
08a9e017 +0x265:  movl   $"[striker dungeon impossible]",(%esp)
08a9e01e +0x26c:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9e023 +0x271:  test   %al,%al
08a9e025 +0x273:  je     08a9e064 <+0x2b2>
08a9e027 +0x275:  mov    0x8(%ebp),%eax
08a9e02a +0x278:  add    $0x20,%eax
08a9e02d +0x27b:  mov    %eax,(%esp)
08a9e030 +0x27e:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a9e035 +0x283:  lea    -0x48(%ebp),%eax
08a9e038 +0x286:  mov    %eax,(%esp)
08a9e03b +0x289:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08a9e040 +0x28e:  xor    $0x1,%eax
08a9e043 +0x291:  test   %al,%al
08a9e045 +0x293:  je     08a9e04d <+0x29b>
08a9e047 +0x295:  nop
08a9e048 +0x296:  jmp    08a9de09 <+0x57>
08a9e04d +0x29b:  mov    0x8(%ebp),%eax
08a9e050 +0x29e:  lea    0x20(%eax),%edx
08a9e053 +0x2a1:  lea    -0x48(%ebp),%eax
08a9e056 +0x2a4:  mov    %eax,0x4(%esp)
08a9e05a +0x2a8:  mov    %edx,(%esp)
08a9e05d +0x2ab:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08a9e062 +0x2b0:  jmp    08a9e035 <+0x283>
08a9e064 +0x2b2:  lea    -0x3c(%ebp),%eax
08a9e067 +0x2b5:  mov    %eax,0x4(%esp)
08a9e06b +0x2b9:  movl   $"[striker end time]",(%esp)
08a9e072 +0x2c0:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9e077 +0x2c5:  test   %al,%al
08a9e079 +0x2c7:  je     08a9e092 <+0x2e0>
08a9e07b +0x2c9:  movl   $0x0,(%esp)
08a9e082 +0x2d0:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e087 +0x2d5:  mov    0x8(%ebp),%edx
08a9e08a +0x2d8:  mov    %eax,0x10(%edx)
08a9e08d +0x2db:  jmp    08a9de09 <+0x57>
08a9e092 +0x2e0:  lea    -0x3c(%ebp),%eax
08a9e095 +0x2e3:  mov    %eax,0x4(%esp)
08a9e099 +0x2e7:  movl   $"[position]",(%esp)
08a9e0a0 +0x2ee:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9e0a5 +0x2f3:  test   %al,%al
08a9e0a7 +0x2f5:  je     08a9e0e7 <+0x335>
08a9e0a9 +0x2f7:  movl   $0x0,(%esp)
08a9e0b0 +0x2fe:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e0b5 +0x303:  mov    0x8(%ebp),%edx
08a9e0b8 +0x306:  mov    %eax,0xac(%edx)
08a9e0be +0x30c:  movl   $0x0,(%esp)
08a9e0c5 +0x313:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e0ca +0x318:  mov    0x8(%ebp),%edx
08a9e0cd +0x31b:  mov    %eax,0x38(%edx)
08a9e0d0 +0x31e:  movl   $0x0,(%esp)
08a9e0d7 +0x325:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e0dc +0x32a:  mov    0x8(%ebp),%edx
08a9e0df +0x32d:  mov    %eax,0x3c(%edx)
08a9e0e2 +0x330:  jmp    08a9de09 <+0x57>
08a9e0e7 +0x335:  lea    -0x3c(%ebp),%eax
08a9e0ea +0x338:  mov    %eax,0x4(%esp)
08a9e0ee +0x33c:  movl   $"[striker skill]",(%esp)
08a9e0f5 +0x343:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9e0fa +0x348:  test   %al,%al
08a9e0fc +0x34a:  je     08a9e2a9 <+0x4f7>
08a9e102 +0x350:  lea    -0x58(%ebp),%eax
08a9e105 +0x353:  mov    %eax,(%esp)
08a9e108 +0x356:  call   08a9ed1e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x31>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x31
08a9e10d +0x35b:  lea    -0x48(%ebp),%eax
08a9e110 +0x35e:  mov    %eax,(%esp)
08a9e113 +0x361:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08a9e118 +0x366:  xor    $0x1,%eax
08a9e11b +0x369:  test   %al,%al
08a9e11d +0x36b:  je     08a9e129 <+0x377>
08a9e11f +0x36d:  mov    $0x0,%ebx
08a9e124 +0x372:  jmp    08a9e291 <+0x4df>
08a9e129 +0x377:  mov    -0x48(%ebp),%eax
08a9e12c +0x37a:  mov    %eax,-0x30(%ebp)
08a9e12f +0x37d:  movl   $0x0,(%esp)
08a9e136 +0x384:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e13b +0x389:  mov    %eax,-0x2c(%ebp)
08a9e13e +0x38c:  movl   $0x0,(%esp)
08a9e145 +0x393:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e14a +0x398:  mov    %eax,-0x28(%ebp)
08a9e14d +0x39b:  movl   $0x0,(%esp)
08a9e154 +0x3a2:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e159 +0x3a7:  mov    %eax,-0x24(%ebp)
08a9e15c +0x3aa:  movl   $0x0,(%esp)
08a9e163 +0x3b1:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e168 +0x3b6:  mov    %eax,-0x20(%ebp)
08a9e16b +0x3b9:  lea    -0x40(%ebp),%eax
08a9e16e +0x3bc:  mov    %eax,(%esp)
08a9e171 +0x3bf:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a9e176 +0x3c4:  mov    -0x28(%ebp),%eax
08a9e179 +0x3c7:  mov    %eax,-0x58(%ebp)
08a9e17c +0x3ca:  mov    -0x24(%ebp),%eax
08a9e17f +0x3cd:  mov    %eax,-0x54(%ebp)
08a9e182 +0x3d0:  mov    -0x20(%ebp),%eax
08a9e185 +0x3d3:  mov    %eax,-0x50(%ebp)
08a9e188 +0x3d6:  lea    -0x40(%ebp),%eax
08a9e18b +0x3d9:  mov    %eax,0x4(%esp)
08a9e18f +0x3dd:  lea    -0x58(%ebp),%eax
08a9e192 +0x3e0:  add    $0xc,%eax
08a9e195 +0x3e3:  mov    %eax,(%esp)
08a9e198 +0x3e6:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08a9e19d +0x3eb:  mov    -0x30(%ebp),%eax
08a9e1a0 +0x3ee:  mov    %ax,-0x5c(%ebp)
08a9e1a4 +0x3f2:  mov    -0x2c(%ebp),%eax
08a9e1a7 +0x3f5:  mov    %ax,-0x5a(%ebp)
08a9e1ab +0x3f9:  mov    0x8(%ebp),%eax
08a9e1ae +0x3fc:  lea    0x78(%eax),%ecx
08a9e1b1 +0x3ff:  lea    -0x60(%ebp),%eax
08a9e1b4 +0x402:  lea    -0x5c(%ebp),%edx
08a9e1b7 +0x405:  mov    %edx,0x8(%esp)
08a9e1bb +0x409:  mov    %ecx,0x4(%esp)
08a9e1bf +0x40d:  mov    %eax,(%esp)
08a9e1c2 +0x410:  call   08a9f1e0 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x4f3>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x4f3
08a9e1c7 +0x415:  sub    $0x4,%esp
08a9e1ca +0x418:  mov    0x8(%ebp),%eax
08a9e1cd +0x41b:  lea    0x78(%eax),%edx
08a9e1d0 +0x41e:  lea    -0x34(%ebp),%eax
08a9e1d3 +0x421:  mov    %edx,0x4(%esp)
08a9e1d7 +0x425:  mov    %eax,(%esp)
08a9e1da +0x428:  call   08a9f0de <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x3f1>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x3f1
08a9e1df +0x42d:  sub    $0x4,%esp
08a9e1e2 +0x430:  lea    -0x34(%ebp),%eax
08a9e1e5 +0x433:  mov    %eax,0x4(%esp)
08a9e1e9 +0x437:  lea    -0x60(%ebp),%eax
08a9e1ec +0x43a:  mov    %eax,(%esp)
08a9e1ef +0x43d:  call   08a9f20c <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x51f>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x51f
08a9e1f4 +0x442:  test   %al,%al
08a9e1f6 +0x444:  je     08a9e255 <+0x4a3>
08a9e1f8 +0x446:  movl   $0xc,(%esp)
08a9e1ff +0x44d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08a9e204 +0x452:  mov    %eax,%ebx
08a9e206 +0x454:  mov    %ebx,%eax
08a9e208 +0x456:  mov    %eax,(%esp)
08a9e20b +0x459:  call   08a9f220 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x533>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x533
08a9e210 +0x45e:  jmp    08a9e224 <+0x472>
08a9e212 +0x460:  mov    %edx,%esi
08a9e214 +0x462:  mov    %eax,%edi
08a9e216 +0x464:  mov    %ebx,(%esp)
08a9e219 +0x467:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a9e21e +0x46c:  mov    %edi,%eax
08a9e220 +0x46e:  mov    %esi,%edx
08a9e222 +0x470:  jmp    08a9e279 <+0x4c7>
08a9e224 +0x472:  mov    %ebx,-0x1c(%ebp)
08a9e227 +0x475:  lea    -0x58(%ebp),%eax
08a9e22a +0x478:  mov    %eax,0x4(%esp)
08a9e22e +0x47c:  mov    -0x1c(%ebp),%eax
08a9e231 +0x47f:  mov    %eax,(%esp)
08a9e234 +0x482:  call   08a9f234 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x547>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x547
08a9e239 +0x487:  mov    0x8(%ebp),%eax
08a9e23c +0x48a:  lea    0x78(%eax),%edx
08a9e23f +0x48d:  lea    -0x5c(%ebp),%eax
08a9e242 +0x490:  mov    %eax,0x4(%esp)
08a9e246 +0x494:  mov    %edx,(%esp)
08a9e249 +0x497:  call   08a9f2a8 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x5bb>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x5bb
08a9e24e +0x49c:  mov    -0x1c(%ebp),%edx
08a9e251 +0x49f:  mov    %edx,(%eax)
08a9e253 +0x4a1:  jmp    08a9e272 <+0x4c0>
08a9e255 +0x4a3:  lea    -0x60(%ebp),%eax
08a9e258 +0x4a6:  mov    %eax,(%esp)
08a9e25b +0x4a9:  call   08a9f136 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x449>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x449
08a9e260 +0x4ae:  mov    0x4(%eax),%eax
08a9e263 +0x4b1:  lea    -0x58(%ebp),%edx
08a9e266 +0x4b4:  mov    %edx,0x4(%esp)
08a9e26a +0x4b8:  mov    %eax,(%esp)
08a9e26d +0x4bb:  call   08a9f234 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x547>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x547
08a9e272 +0x4c0:  mov    $0x1,%ebx
08a9e277 +0x4c5:  jmp    08a9e291 <+0x4df>
08a9e279 +0x4c7:  mov    %edx,%ebx
08a9e27b +0x4c9:  mov    %eax,%esi
08a9e27d +0x4cb:  lea    -0x58(%ebp),%eax
08a9e280 +0x4ce:  mov    %eax,(%esp)
08a9e283 +0x4d1:  call   08a9ed34 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x47>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x47
08a9e288 +0x4d6:  mov    %esi,%eax
08a9e28a +0x4d8:  mov    %ebx,%edx
08a9e28c +0x4da:  jmp    08a9e48d <+0x6db>
08a9e291 +0x4df:  lea    -0x58(%ebp),%eax
08a9e294 +0x4e2:  mov    %eax,(%esp)
08a9e297 +0x4e5:  call   08a9ed34 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x47>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x47
08a9e29c +0x4ea:  test   %ebx,%ebx
08a9e29e +0x4ec:  je     08a9de05 <+0x53>
08a9e2a4 +0x4f2:  jmp    08a9e102 <+0x350>
08a9e2a9 +0x4f7:  lea    -0x3c(%ebp),%eax
08a9e2ac +0x4fa:  mov    %eax,0x4(%esp)
08a9e2b0 +0x4fe:  movl   $"[striker skill macro]",(%esp)
08a9e2b7 +0x505:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9e2bc +0x50a:  test   %al,%al
08a9e2be +0x50c:  je     08a9e332 <+0x580>
08a9e2c0 +0x50e:  mov    0x8(%ebp),%eax
08a9e2c3 +0x511:  add    $0x94,%eax
08a9e2c8 +0x516:  mov    %eax,(%esp)
08a9e2cb +0x519:  call   08a9f39e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x6b1>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x6b1
08a9e2d0 +0x51e:  lea    -0x48(%ebp),%eax
08a9e2d3 +0x521:  mov    %eax,(%esp)
08a9e2d6 +0x524:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08a9e2db +0x529:  xor    $0x1,%eax
08a9e2de +0x52c:  test   %al,%al
08a9e2e0 +0x52e:  je     08a9e2e8 <+0x536>
08a9e2e2 +0x530:  nop
08a9e2e3 +0x531:  jmp    08a9de09 <+0x57>
08a9e2e8 +0x536:  mov    -0x48(%ebp),%eax
08a9e2eb +0x539:  mov    %eax,-0x6c(%ebp)
08a9e2ee +0x53c:  movl   $0x0,(%esp)
08a9e2f5 +0x543:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e2fa +0x548:  mov    %eax,-0x68(%ebp)
08a9e2fd +0x54b:  movl   $0x0,(%esp)
08a9e304 +0x552:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e309 +0x557:  mov    %eax,0x4(%esp)
08a9e30d +0x55b:  lea    -0x6c(%ebp),%eax
08a9e310 +0x55e:  mov    %eax,(%esp)
08a9e313 +0x561:  call   08a9d7cc <_ZN22StrikerSkillAddCommand7setTypeEi>  ; StrikerSkillAddCommand::setType(int)
08a9e318 +0x566:  mov    0x8(%ebp),%eax
08a9e31b +0x569:  lea    0x94(%eax),%edx
08a9e321 +0x56f:  lea    -0x6c(%ebp),%eax
08a9e324 +0x572:  mov    %eax,0x4(%esp)
08a9e328 +0x576:  mov    %edx,(%esp)
08a9e32b +0x579:  call   08a9f3ba <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x6cd>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x6cd
08a9e330 +0x57e:  jmp    08a9e2d0 <+0x51e>
08a9e332 +0x580:  lea    -0x3c(%ebp),%eax
08a9e335 +0x583:  mov    %eax,0x4(%esp)
08a9e339 +0x587:  movl   $"[common cool time]",(%esp)
08a9e340 +0x58e:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9e345 +0x593:  test   %al,%al
08a9e347 +0x595:  je     08a9e363 <+0x5b1>
08a9e349 +0x597:  movl   $0x0,(%esp)
08a9e350 +0x59e:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e355 +0x5a3:  mov    0x8(%ebp),%edx
08a9e358 +0x5a6:  mov    %eax,0xa4(%edx)
08a9e35e +0x5ac:  jmp    08a9de09 <+0x57>
08a9e363 +0x5b1:  lea    -0x3c(%ebp),%eax
08a9e366 +0x5b4:  mov    %eax,0x4(%esp)
08a9e36a +0x5b8:  movl   $"[direction type]",(%esp)
08a9e371 +0x5bf:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9e376 +0x5c4:  test   %al,%al
08a9e378 +0x5c6:  je     08a9e3a0 <+0x5ee>
08a9e37a +0x5c8:  movl   $0x0,(%esp)
08a9e381 +0x5cf:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e386 +0x5d4:  mov    0x8(%ebp),%edx
08a9e389 +0x5d7:  add    $0xa8,%edx
08a9e38f +0x5dd:  mov    %eax,0x4(%esp)
08a9e393 +0x5e1:  mov    %edx,(%esp)
08a9e396 +0x5e4:  call   08a9d7fa <_ZN20StrikerDirectionType7setTypeEi>  ; StrikerDirectionType::setType(int)
08a9e39b +0x5e9:  jmp    08a9de09 <+0x57>
08a9e3a0 +0x5ee:  lea    -0x3c(%ebp),%eax
08a9e3a3 +0x5f1:  mov    %eax,0x4(%esp)
08a9e3a7 +0x5f5:  movl   $"[contents revision]",(%esp)
08a9e3ae +0x5fc:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9e3b3 +0x601:  test   %al,%al
08a9e3b5 +0x603:  je     08a9e43b <+0x689>
08a9e3bb +0x609:  mov    0x8(%ebp),%eax
08a9e3be +0x60c:  add    $0x2c,%eax
08a9e3c1 +0x60f:  mov    %eax,(%esp)
08a9e3c4 +0x612:  call   08a9f42e <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x741>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x741
08a9e3c9 +0x617:  lea    -0x40(%ebp),%eax
08a9e3cc +0x61a:  mov    %eax,(%esp)
08a9e3cf +0x61d:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08a9e3d4 +0x622:  xor    $0x1,%eax
08a9e3d7 +0x625:  test   %al,%al
08a9e3d9 +0x627:  je     08a9e3e1 <+0x62f>
08a9e3db +0x629:  nop
08a9e3dc +0x62a:  jmp    08a9de09 <+0x57>
08a9e3e1 +0x62f:  lea    -0x40(%ebp),%eax
08a9e3e4 +0x632:  mov    %eax,(%esp)
08a9e3e7 +0x635:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08a9e3ec +0x63a:  mov    %eax,(%esp)
08a9e3ef +0x63d:  call   08ac34a4 <_ZN12ContentsType7getTypeEPKc>  ; ContentsType::getType(char const*)
08a9e3f4 +0x642:  mov    %eax,-0x7c(%ebp)
08a9e3f7 +0x645:  movl   $0x0,(%esp)
08a9e3fe +0x64c:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e403 +0x651:  mov    %eax,-0x78(%ebp)
08a9e406 +0x654:  movl   $0x0,(%esp)
08a9e40d +0x65b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e412 +0x660:  mov    %eax,-0x74(%ebp)
08a9e415 +0x663:  movl   $0x0,(%esp)
08a9e41c +0x66a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e421 +0x66f:  mov    %eax,-0x70(%ebp)
08a9e424 +0x672:  mov    0x8(%ebp),%eax
08a9e427 +0x675:  lea    0x2c(%eax),%edx
08a9e42a +0x678:  lea    -0x7c(%ebp),%eax
08a9e42d +0x67b:  mov    %eax,0x4(%esp)
08a9e431 +0x67f:  mov    %edx,(%esp)
08a9e434 +0x682:  call   08a9f44a <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x75d>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x75d
08a9e439 +0x687:  jmp    08a9e3c9 <+0x617>
08a9e43b +0x689:  lea    -0x3c(%ebp),%eax
08a9e43e +0x68c:  mov    %eax,0x4(%esp)
08a9e442 +0x690:  movl   $"[upgrade revision]",(%esp)
08a9e449 +0x697:  call   08237ae0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd18a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd18a
08a9e44e +0x69c:  test   %al,%al
08a9e450 +0x69e:  je     08a9de08 <+0x56>
08a9e456 +0x6a4:  movl   $0x0,(%esp)
08a9e45d +0x6ab:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08a9e462 +0x6b0:  mov    0x8(%ebp),%edx
08a9e465 +0x6b3:  mov    %eax,0xb0(%edx)
08a9e46b +0x6b9:  jmp    08a9de09 <+0x57>
08a9e470 +0x6be:  nop
08a9e471 +0x6bf:  mov    0x8(%ebp),%eax
08a9e474 +0x6c2:  movb   $0x1,0xa0(%eax)
08a9e47b +0x6c9:  mov    $0x1,%ebx
08a9e480 +0x6ce:  lea    -0x40(%ebp),%eax
08a9e483 +0x6d1:  mov    %eax,(%esp)
08a9e486 +0x6d4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a9e48b +0x6d9:  jmp    08a9e4bd <+0x70b>
08a9e48d +0x6db:  mov    %edx,%ebx
08a9e48f +0x6dd:  mov    %eax,%esi
08a9e491 +0x6df:  lea    -0x40(%ebp),%eax
08a9e494 +0x6e2:  mov    %eax,(%esp)
08a9e497 +0x6e5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a9e49c +0x6ea:  mov    %esi,%eax
08a9e49e +0x6ec:  mov    %ebx,%edx
08a9e4a0 +0x6ee:  jmp    08a9e4a2 <+0x6f0>
08a9e4a2 +0x6f0:  mov    %edx,%ebx
08a9e4a4 +0x6f2:  mov    %eax,%esi
08a9e4a6 +0x6f4:  lea    -0x3c(%ebp),%eax
08a9e4a9 +0x6f7:  mov    %eax,(%esp)
08a9e4ac +0x6fa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a9e4b1 +0x6ff:  mov    %esi,%eax
08a9e4b3 +0x701:  mov    %ebx,%edx
08a9e4b5 +0x703:  mov    %eax,(%esp)
08a9e4b8 +0x706:  call   08ae3750 <_Unwind_Resume>
08a9e4bd +0x70b:  lea    -0x3c(%ebp),%eax
08a9e4c0 +0x70e:  mov    %eax,(%esp)
08a9e4c3 +0x711:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a9e4c8 +0x716:  mov    %ebx,%eax
08a9e4ca +0x718:  lea    -0xc(%ebp),%esp
08a9e4cd +0x71b:  add    $0x0,%esp
08a9e4d0 +0x71e:  pop    %ebx
08a9e4d1 +0x71f:  pop    %esi
08a9e4d2 +0x720:  pop    %edi
08a9e4d3 +0x721:  pop    %ebp
08a9e4d4 +0x722:  ret
08a9e4d5 +0x723:  nop
```

## 反编译 C

```c
// StrikerScript::importScript @ 0x8a9ddb2

/* StrikerScript::importScript(char const*) */

undefined4 __thiscall StrikerScript::importScript(StrikerScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  vector<StrikerSkill,std::allocator<StrikerSkill>> *this_00;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
  local_64 [4];
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  string asStack_50 [4];
  int local_4c;
  bool local_45;
  string local_44 [4];
  string local_40;
  undefined4 local_3c;
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  vector<StrikerSkill,std::allocator<StrikerSkill>> *local_20;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_40);
                    /* try { // try from 08a9ddf3 to 08a9ddf7 has its CatchHandler @ 08a9e4a2 */
    std::string::string(local_44);
    local_45 = false;
    local_4c = 0;
                    /* try { // try from 08a9de17 to 08a9e10c has its CatchHandler @ 08a9e48d */
    while (cVar1 = ScanType((string *)&local_40,true), cVar1 == '\x01') {
      bVar2 = std::operator==("[tag mode]",&local_40);
      if (bVar2) {
        local_4c = ScanInt(&local_45);
      }
      else {
        bVar2 = std::operator==("[tag cost time]",&local_40);
        if (bVar2) {
          local_4c = ScanInt(&local_45);
          *(int *)this = local_4c;
        }
        else {
          bVar2 = std::operator==("[tag character setting]",&local_40);
          if (bVar2) {
            uVar6 = ScanInt(&local_45);
            *(undefined4 *)(this + 4) = uVar6;
          }
          else {
            bVar2 = std::operator==("[striker combo]",&local_40);
            if (bVar2) {
              uVar6 = ScanInt(&local_45);
              *(undefined4 *)(this + 8) = uVar6;
            }
            else {
              bVar2 = std::operator==("[striker start time]",&local_40);
              if (bVar2) {
                local_4c = ScanInt(&local_45);
                *(int *)(this + 0xc) = local_4c;
              }
              else {
                bVar2 = std::operator==("[striker skill data up]",&local_40);
                if (bVar2) {
                  importSkillDataUpVector(this);
                }
                else {
                  bVar2 = std::operator==("[striker skill attack penalty]",&local_40);
                  if (bVar2) {
                    importSkillAttackPenalty(this);
                  }
                  else {
                    bVar2 = std::operator==("[striker skill cooltime penalty]",&local_40);
                    if (bVar2) {
                      importSkillCoolTimePenalty(this);
                    }
                    else {
                      bVar2 = std::operator==("[striker level penalty]",&local_40);
                      if (bVar2) {
                        importParentLevelPenlaty(this);
                      }
                      else {
                        bVar2 = std::operator==("[striker module impossible]",&local_40);
                        if (bVar2) {
                          std::vector<ContentsType::T,std::allocator<ContentsType::T>>::clear
                                    ((vector<ContentsType::T,std::allocator<ContentsType::T>> *)
                                     (this + 0x14));
                          while (cVar1 = ScanStr(local_44), cVar1 == '\x01') {
                            pcVar3 = (char *)std::string::c_str(local_44);
                            local_3c = ContentsType::getType(pcVar3);
                            std::vector<ContentsType::T,std::allocator<ContentsType::T>>::push_back
                                      ((vector<ContentsType::T,std::allocator<ContentsType::T>> *)
                                       (this + 0x14),(T *)&local_3c);
                          }
                        }
                        else {
                          bVar2 = std::operator==("[striker dungeon impossible]",&local_40);
                          if (bVar2) {
                            std::vector<int,std::allocator<int>>::clear
                                      ((vector<int,std::allocator<int>> *)(this + 0x20));
                            while (cVar1 = ScanInt(&local_4c), cVar1 == '\x01') {
                              std::vector<int,std::allocator<int>>::push_back
                                        ((vector<int,std::allocator<int>> *)(this + 0x20),&local_4c)
                              ;
                            }
                          }
                          else {
                            bVar2 = std::operator==("[striker end time]",&local_40);
                            if (bVar2) {
                              uVar6 = ScanInt((bool *)0x0);
                              *(undefined4 *)(this + 0x10) = uVar6;
                            }
                            else {
                              bVar2 = std::operator==("[position]",&local_40);
                              if (bVar2) {
                                uVar6 = ScanInt((bool *)0x0);
                                *(undefined4 *)(this + 0xac) = uVar6;
                                uVar6 = ScanInt((bool *)0x0);
                                *(undefined4 *)(this + 0x38) = uVar6;
                                uVar6 = ScanInt((bool *)0x0);
                                *(undefined4 *)(this + 0x3c) = uVar6;
                              }
                              else {
                                bVar2 = std::operator==("[striker skill]",&local_40);
                                if (bVar2) {
                                  do {
                                    StrikerSkill::StrikerSkill((StrikerSkill *)&local_5c);
                    /* try { // try from 08a9e113 to 08a9e203 has its CatchHandler @ 08a9e279 */
                                    cVar1 = ScanInt(&local_4c);
                                    if (cVar1 == '\x01') {
                                      local_34 = local_4c;
                                      local_30 = ScanInt((bool *)0x0);
                                      local_2c = ScanInt((bool *)0x0);
                                      local_28 = ScanInt((bool *)0x0);
                                      local_24 = ScanInt((bool *)0x0);
                                      ScanStr(local_44);
                                      local_5c = local_2c;
                                      local_58 = local_28;
                                      local_54 = local_24;
                                      std::string::operator=(asStack_50,local_44);
                                      local_60 = (undefined2)local_34;
                                      local_5e = (undefined2)local_30;
                                      std::
                                      map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
                                      ::find((int *)local_64);
                                      std::
                                      map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
                                      ::end(local_38);
                                      cVar1 = std::
                                              _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                                              ::operator==(local_64,(_Rb_tree_iterator *)local_38);
                                      if (cVar1 == '\0') {
                                        iVar5 = std::
                                                _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                                                ::operator->(local_64);
                                        std::vector<StrikerSkill,std::allocator<StrikerSkill>>::
                                        push_back(*(
                                                  vector<StrikerSkill,std::allocator<StrikerSkill>>
                                                  **)(iVar5 + 4),(StrikerSkill *)&local_5c);
                                      }
                                      else {
                                        this_00 = operator_new(0xc);
                    /* try { // try from 08a9e20b to 08a9e20f has its CatchHandler @ 08a9e212 */
                                        std::vector<StrikerSkill,std::allocator<StrikerSkill>>::
                                        vector(this_00);
                                        local_20 = this_00;
                    /* try { // try from 08a9e234 to 08a9e271 has its CatchHandler @ 08a9e279 */
                                        std::vector<StrikerSkill,std::allocator<StrikerSkill>>::
                                        push_back(this_00,(StrikerSkill *)&local_5c);
                                        puVar4 = (undefined4 *)
                                                 std::
                                                 map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
                                                 ::operator[]((
                                                  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
                                                  *)(this + 0x78),(int *)&local_60);
                                        *puVar4 = local_20;
                                      }
                                      bVar2 = true;
                                    }
                                    else {
                                      bVar2 = false;
                                    }
                    /* try { // try from 08a9e297 to 08a9e461 has its CatchHandler @ 08a9e48d */
                                    StrikerSkill::~StrikerSkill((StrikerSkill *)&local_5c);
                                  } while (bVar2);
                                }
                                else {
                                  bVar2 = std::operator==("[striker skill macro]",&local_40);
                                  if (bVar2) {
                                    std::
                                    vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>
                                    ::clear((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>
                                             *)(this + 0x94));
                                    while (cVar1 = ScanInt(&local_4c), cVar1 == '\x01') {
                                      local_70 = local_4c;
                                      local_6c = ScanInt((bool *)0x0);
                                      iVar5 = ScanInt((bool *)0x0);
                                      StrikerSkillAddCommand::setType
                                                ((StrikerSkillAddCommand *)&local_70,iVar5);
                                      std::
                                      vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>
                                      ::push_back((
                                                  vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>
                                                  *)(this + 0x94),
                                                  (StrikerSkillAddCommand *)&local_70);
                                    }
                                  }
                                  else {
                                    bVar2 = std::operator==("[common cool time]",&local_40);
                                    if (bVar2) {
                                      uVar6 = ScanInt((bool *)0x0);
                                      *(undefined4 *)(this + 0xa4) = uVar6;
                                    }
                                    else {
                                      bVar2 = std::operator==("[direction type]",&local_40);
                                      if (bVar2) {
                                        iVar5 = ScanInt((bool *)0x0);
                                        StrikerDirectionType::setType
                                                  ((StrikerDirectionType *)(this + 0xa8),iVar5);
                                      }
                                      else {
                                        bVar2 = std::operator==("[contents revision]",&local_40);
                                        if (bVar2) {
                                          std::
                                          vector<ContentsRevision,std::allocator<ContentsRevision>>
                                          ::clear((
                                                  vector<ContentsRevision,std::allocator<ContentsRevision>>
                                                  *)(this + 0x2c));
                                          while (cVar1 = ScanStr(local_44), cVar1 == '\x01') {
                                            pcVar3 = (char *)std::string::c_str(local_44);
                                            local_80 = ContentsType::getType(pcVar3);
                                            local_7c = ScanInt((bool *)0x0);
                                            local_78 = ScanInt((bool *)0x0);
                                            local_74 = ScanInt((bool *)0x0);
                                            std::
                                            vector<ContentsRevision,std::allocator<ContentsRevision>>
                                            ::push_back((
                                                  vector<ContentsRevision,std::allocator<ContentsRevision>>
                                                  *)(this + 0x2c),(ContentsRevision *)&local_80);
                                          }
                                        }
                                        else {
                                          bVar2 = std::operator==("[upgrade revision]",&local_40);
                                          if (bVar2) {
                                            uVar6 = ScanInt((bool *)0x0);
                                            *(undefined4 *)(this + 0xb0) = uVar6;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    this[0xa0] = (StrikerScript)0x1;
    uVar6 = 1;
                    /* try { // try from 08a9e486 to 08a9e48a has its CatchHandler @ 08a9e4a2 */
    std::string::~string(local_44);
    std::string::~string((string *)&local_40);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
