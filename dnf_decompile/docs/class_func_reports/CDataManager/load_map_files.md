# load_map_files

`_ZN12CDataManager14load_map_filesERSt6vectorI11PVPMAP_DATASaIS1_EE`

`CDataManager::load_map_files(std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >&)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fe02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fe02  _ZN12CDataManager14load_map_filesERSt6vectorI11PVPMAP_DATASaIS1_EE
#           CDataManager::load_map_files(std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >&)
# range [0x0835fe02, 0x08360305]
0835fe02 +0x000:  push   %ebp
0835fe03 +0x001:  mov    %esp,%ebp
0835fe05 +0x003:  push   %edi
0835fe06 +0x004:  push   %esi
0835fe07 +0x005:  push   %ebx
0835fe08 +0x006:  sub    $0x77c,%esp
0835fe0e +0x00c:  movl   $0x0,-0x2c(%ebp)
0835fe15 +0x013:  lea    -0x758(%ebp),%eax
0835fe1b +0x019:  mov    %eax,(%esp)
0835fe1e +0x01c:  call   0836cc94 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x6c60>  ; global constructors keyed to CServerEvent::m_nExpRate+0x6c60
0835fe23 +0x021:  movl   $0x0,-0x28(%ebp)
0835fe2a +0x028:  movl   $0x0,-0x24(%ebp)
0835fe31 +0x02f:  lea    -0x3d0(%ebp),%eax
0835fe37 +0x035:  mov    %eax,(%esp)
0835fe3a +0x038:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
0835fe3f +0x03d:  lea    -0x3d4(%ebp),%eax
0835fe45 +0x043:  mov    %eax,(%esp)
0835fe48 +0x046:  call   0838f320 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1edc0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1edc0
0835fe4d +0x04b:  lea    -0x75c(%ebp),%eax
0835fe53 +0x051:  movl   $&g_stMapScriptFileList,0x4(%esp)
0835fe5b +0x059:  mov    %eax,(%esp)
0835fe5e +0x05c:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
0835fe63 +0x061:  sub    $0x4,%esp
0835fe66 +0x064:  mov    -0x75c(%ebp),%eax
0835fe6c +0x06a:  mov    %eax,-0x3d0(%ebp)
0835fe72 +0x070:  lea    -0x3dc(%ebp),%eax
0835fe78 +0x076:  mov    %eax,(%esp)
0835fe7b +0x079:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
0835fe80 +0x07e:  jmp    0836028a <+0x488>
0835fe85 +0x083:  lea    -0x3d0(%ebp),%eax
0835fe8b +0x089:  mov    %eax,(%esp)
0835fe8e +0x08c:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
0835fe93 +0x091:  add    $0x4,%eax
0835fe96 +0x094:  mov    %eax,(%esp)
0835fe99 +0x097:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0835fe9e +0x09c:  mov    %eax,-0x2c(%ebp)
0835fea1 +0x09f:  cmpl   $0x0,-0x2c(%ebp)
0835fea5 +0x0a3:  je     083602c5 <+0x4c3>
0835feab +0x0a9:  lea    -0x3d0(%ebp),%eax
0835feb1 +0x0af:  mov    %eax,(%esp)
0835feb4 +0x0b2:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
0835feb9 +0x0b7:  mov    (%eax),%eax
0835febb +0x0b9:  cmp    $0xc350,%eax
0835fec0 +0x0be:  sete   %al
0835fec3 +0x0c1:  test   %al,%al
0835fec5 +0x0c3:  je     0835fed7 <+0xd5>
0835fec7 +0x0c5:  lea    -0x758(%ebp),%eax
0835fecd +0x0cb:  mov    %eax,(%esp)
0835fed0 +0x0ce:  call   0836c688 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x6654>  ; global constructors keyed to CServerEvent::m_nExpRate+0x6654
0835fed5 +0x0d3:  jmp    0835ff10 <+0x10e>
0835fed7 +0x0d5:  mov    -0x2c(%ebp),%eax
0835feda +0x0d8:  mov    %eax,0x4(%esp)
0835fede +0x0dc:  lea    -0x758(%ebp),%eax
0835fee4 +0x0e2:  mov    %eax,(%esp)
0835fee7 +0x0e5:  call   089dcf54 <_Z15ImportMapScriptP11STMapScriptPKc>  ; ImportMapScript(STMapScript*, char const*)
0835feec +0x0ea:  xor    $0x1,%eax
0835feef +0x0ed:  test   %al,%al
0835fef1 +0x0ef:  je     0835ff10 <+0x10e>
0835fef3 +0x0f1:  mov    -0x2c(%ebp),%eax
0835fef6 +0x0f4:  mov    %eax,0x4(%esp)
0835fefa +0x0f8:  movl   $"Error in script('%s')\n",(%esp)
0835ff01 +0x0ff:  call   0807db60 <_init+0x458>
0835ff06 +0x104:  mov    $0x0,%ebx
0835ff0b +0x109:  jmp    083602eb <+0x4e9>
0835ff10 +0x10e:  movl   $0x130,(%esp)
0835ff17 +0x115:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835ff1c +0x11a:  mov    %eax,%ebx
0835ff1e +0x11c:  mov    %ebx,%eax
0835ff20 +0x11e:  mov    %eax,(%esp)
0835ff23 +0x121:  call   0834dcda <_ZN4CMapC1Ev>  ; CMap::CMap()
0835ff28 +0x126:  jmp    0835ff3f <+0x13d>
0835ff2a +0x128:  mov    %edx,%esi
0835ff2c +0x12a:  mov    %eax,%edi
0835ff2e +0x12c:  mov    %ebx,(%esp)
0835ff31 +0x12f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835ff36 +0x134:  mov    %edi,%eax
0835ff38 +0x136:  mov    %esi,%edx
0835ff3a +0x138:  jmp    083602cd <+0x4cb>
0835ff3f +0x13d:  mov    %ebx,-0x24(%ebp)
0835ff42 +0x140:  lea    -0x758(%ebp),%eax
0835ff48 +0x146:  mov    %eax,0x4(%esp)
0835ff4c +0x14a:  lea    -0x3c8(%ebp),%eax
0835ff52 +0x150:  mov    %eax,(%esp)
0835ff55 +0x153:  call   0837e698 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xe138>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xe138
0835ff5a +0x158:  lea    -0x3c8(%ebp),%eax
0835ff60 +0x15e:  mov    %eax,0x4(%esp)
0835ff64 +0x162:  mov    -0x24(%ebp),%eax
0835ff67 +0x165:  mov    %eax,(%esp)
0835ff6a +0x168:  call   0834e18a <_ZN4CMap7set_mapE11STMapScript>  ; CMap::set_map(STMapScript)
0835ff6f +0x16d:  jmp    0835ff8c <+0x18a>
0835ff71 +0x16f:  mov    %edx,%ebx
0835ff73 +0x171:  mov    %eax,%esi
0835ff75 +0x173:  lea    -0x3c8(%ebp),%eax
0835ff7b +0x179:  mov    %eax,(%esp)
0835ff7e +0x17c:  call   0836d4bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7488>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7488
0835ff83 +0x181:  mov    %esi,%eax
0835ff85 +0x183:  mov    %ebx,%edx
0835ff87 +0x185:  jmp    083602cd <+0x4cb>
0835ff8c +0x18a:  lea    -0x3c8(%ebp),%eax
0835ff92 +0x190:  mov    %eax,(%esp)
0835ff95 +0x193:  call   0836d4bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7488>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7488
0835ff9a +0x198:  lea    -0x758(%ebp),%eax
0835ffa0 +0x19e:  add    $0x4,%eax
0835ffa3 +0x1a1:  mov    %eax,(%esp)
0835ffa6 +0x1a4:  call   08235b76 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb220>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb220
0835ffab +0x1a9:  test   %eax,%eax
0835ffad +0x1ab:  sete   %al
0835ffb0 +0x1ae:  test   %al,%al
0835ffb2 +0x1b0:  je     08360005 <+0x203>
0835ffb4 +0x1b2:  mov    0x8(%ebp),%eax
0835ffb7 +0x1b5:  mov    0x4(%eax),%eax
0835ffba +0x1b8:  mov    0xc(%ebp),%edx
0835ffbd +0x1bb:  mov    %edx,0x10(%esp)
0835ffc1 +0x1bf:  mov    -0x24(%ebp),%edx
0835ffc4 +0x1c2:  mov    %edx,0xc(%esp)
0835ffc8 +0x1c6:  movl   $0xf,0x8(%esp)
0835ffd0 +0x1ce:  movl   $0xf,0x4(%esp)
0835ffd8 +0x1d6:  mov    %eax,(%esp)
0835ffdb +0x1d9:  call   0834f18e <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE>  ; CMapList::insert_map(int, int, CMap*, std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >&)
0835ffe0 +0x1de:  lea    -0x4c(%ebp),%eax
0835ffe3 +0x1e1:  movl   $0x0,0x8(%esp)
0835ffeb +0x1e9:  lea    -0x3d0(%ebp),%edx
0835fff1 +0x1ef:  mov    %edx,0x4(%esp)
0835fff5 +0x1f3:  mov    %eax,(%esp)
0835fff8 +0x1f6:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
0835fffd +0x1fb:  sub    $0x4,%esp
08360000 +0x1fe:  jmp    0836028a <+0x488>
08360005 +0x203:  lea    -0x75c(%ebp),%eax
0836000b +0x209:  lea    -0x758(%ebp),%edx
08360011 +0x20f:  add    $0x4,%edx
08360014 +0x212:  mov    %edx,0x4(%esp)
08360018 +0x216:  mov    %eax,(%esp)
0836001b +0x219:  call   082373c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xca72>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xca72
08360020 +0x21e:  sub    $0x4,%esp
08360023 +0x221:  mov    -0x75c(%ebp),%eax
08360029 +0x227:  mov    %eax,-0x3d4(%ebp)
0836002f +0x22d:  jmp    08360232 <+0x430>
08360034 +0x232:  lea    -0x3d4(%ebp),%eax
0836003a +0x238:  mov    %eax,(%esp)
0836003d +0x23b:  call   0823742a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcad4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcad4
08360042 +0x240:  mov    (%eax),%eax
08360044 +0x242:  mov    %eax,-0x20(%ebp)
08360047 +0x245:  mov    0x8(%ebp),%eax
0836004a +0x248:  mov    (%eax),%eax
0836004c +0x24a:  mov    -0x20(%ebp),%edx
0836004f +0x24d:  mov    %edx,0x4(%esp)
08360053 +0x251:  mov    %eax,(%esp)
08360056 +0x254:  call   0834d7ca <_ZNK12CDungeonList12find_dungeonEi>  ; CDungeonList::find_dungeon(int) const
0836005b +0x259:  mov    %eax,-0x28(%ebp)
0836005e +0x25c:  cmpl   $0x0,-0x28(%ebp)
08360062 +0x260:  jne    083600b2 <+0x2b0>
08360064 +0x262:  movl   $0x5,0xc(%esp)
0836006c +0x26a:  movl   $0x254b,0x8(%esp)
08360074 +0x272:  movl   $&_ZZN12CDataManager14load_map_filesERSt6vectorI11PVPMAP_DATASaIS1_EEE19__PRETTY_FUNCTION__,0x4(%esp)
0836007c +0x27a:  lea    -0x44(%ebp),%eax
0836007f +0x27d:  mov    %eax,(%esp)
08360082 +0x280:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08360087 +0x285:  mov    -0x2c(%ebp),%eax
0836008a +0x288:  mov    %eax,0xc(%esp)
0836008e +0x28c:  mov    -0x20(%ebp),%eax
08360091 +0x28f:  mov    %eax,0x8(%esp)
08360095 +0x293:  movl   $"[Load Map] Not exist dungeon. [Index:%d] filename : [%s]",0x4(%esp)
0836009d +0x29b:  lea    -0x44(%ebp),%eax
083600a0 +0x29e:  mov    %eax,(%esp)
083600a3 +0x2a1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083600a8 +0x2a6:  mov    $0x0,%ebx
083600ad +0x2ab:  jmp    083602eb <+0x4e9>
083600b2 +0x2b0:  lea    -0x758(%ebp),%eax
083600b8 +0x2b6:  add    $0x10,%eax
083600bb +0x2b9:  mov    %eax,(%esp)
083600be +0x2bc:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
083600c3 +0x2c1:  test   %eax,%eax
083600c5 +0x2c3:  sete   %al
083600c8 +0x2c6:  test   %al,%al
083600ca +0x2c8:  je     0836013e <+0x33c>
083600cc +0x2ca:  mov    -0x24(%ebp),%eax
083600cf +0x2cd:  mov    %eax,0xc(%esp)
083600d3 +0x2d1:  movl   $0xf,0x8(%esp)
083600db +0x2d9:  movl   $0xf,0x4(%esp)
083600e3 +0x2e1:  mov    -0x28(%ebp),%eax
083600e6 +0x2e4:  mov    %eax,(%esp)
083600e9 +0x2e7:  call   0834b988 <_ZN8CDungeon9InsertMapEiiP4CMap>  ; CDungeon::InsertMap(int, int, CMap*)
083600ee +0x2ec:  mov    0x8(%ebp),%eax
083600f1 +0x2ef:  mov    0x4(%eax),%eax
083600f4 +0x2f2:  mov    0xc(%ebp),%edx
083600f7 +0x2f5:  mov    %edx,0x10(%esp)
083600fb +0x2f9:  mov    -0x24(%ebp),%edx
083600fe +0x2fc:  mov    %edx,0xc(%esp)
08360102 +0x300:  movl   $0xf,0x8(%esp)
0836010a +0x308:  movl   $0xf,0x4(%esp)
08360112 +0x310:  mov    %eax,(%esp)
08360115 +0x313:  call   0834f18e <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE>  ; CMapList::insert_map(int, int, CMap*, std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >&)
0836011a +0x318:  mov    -0x610(%ebp),%eax
08360120 +0x31e:  test   %eax,%eax
08360122 +0x320:  jle    0836013e <+0x33c>
08360124 +0x322:  mov    -0x24(%ebp),%eax
08360127 +0x325:  mov    %eax,0x8(%esp)
0836012b +0x329:  movl   $0xf,0x4(%esp)
08360133 +0x331:  mov    -0x28(%ebp),%eax
08360136 +0x334:  mov    %eax,(%esp)
08360139 +0x337:  call   0834be5a <_ZN8CDungeon11insertStartEiP4CMap>  ; CDungeon::insertStart(int, CMap*)
0836013e +0x33c:  movl   $0x0,-0x1c(%ebp)
08360145 +0x343:  jmp    083601f3 <+0x3f1>
0836014a +0x348:  mov    -0x1c(%ebp),%eax
0836014d +0x34b:  mov    %eax,0x4(%esp)
08360151 +0x34f:  lea    -0x758(%ebp),%eax
08360157 +0x355:  add    $0x10,%eax
0836015a +0x358:  mov    %eax,(%esp)
0836015d +0x35b:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
08360162 +0x360:  mov    0x4(%eax),%edx
08360165 +0x363:  mov    (%eax),%eax
08360167 +0x365:  mov    %eax,-0x3dc(%ebp)
0836016d +0x36b:  mov    %edx,-0x3d8(%ebp)
08360173 +0x371:  mov    -0x3d8(%ebp),%edx
08360179 +0x377:  mov    -0x3dc(%ebp),%eax
0836017f +0x37d:  mov    -0x24(%ebp),%ecx
08360182 +0x380:  mov    %ecx,0xc(%esp)
08360186 +0x384:  mov    %edx,0x8(%esp)
0836018a +0x388:  mov    %eax,0x4(%esp)
0836018e +0x38c:  mov    -0x28(%ebp),%eax
08360191 +0x38f:  mov    %eax,(%esp)
08360194 +0x392:  call   0834b988 <_ZN8CDungeon9InsertMapEiiP4CMap>  ; CDungeon::InsertMap(int, int, CMap*)
08360199 +0x397:  mov    -0x3d8(%ebp),%ecx
0836019f +0x39d:  mov    -0x3dc(%ebp),%edx
083601a5 +0x3a3:  mov    0x8(%ebp),%eax
083601a8 +0x3a6:  mov    0x4(%eax),%eax
083601ab +0x3a9:  mov    0xc(%ebp),%ebx
083601ae +0x3ac:  mov    %ebx,0x10(%esp)
083601b2 +0x3b0:  mov    -0x24(%ebp),%ebx
083601b5 +0x3b3:  mov    %ebx,0xc(%esp)
083601b9 +0x3b7:  mov    %ecx,0x8(%esp)
083601bd +0x3bb:  mov    %edx,0x4(%esp)
083601c1 +0x3bf:  mov    %eax,(%esp)
083601c4 +0x3c2:  call   0834f18e <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE>  ; CMapList::insert_map(int, int, CMap*, std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >&)
083601c9 +0x3c7:  mov    -0x610(%ebp),%eax
083601cf +0x3cd:  test   %eax,%eax
083601d1 +0x3cf:  jle    083601ef <+0x3ed>
083601d3 +0x3d1:  mov    -0x3dc(%ebp),%eax
083601d9 +0x3d7:  mov    -0x24(%ebp),%edx
083601dc +0x3da:  mov    %edx,0x8(%esp)
083601e0 +0x3de:  mov    %eax,0x4(%esp)
083601e4 +0x3e2:  mov    -0x28(%ebp),%eax
083601e7 +0x3e5:  mov    %eax,(%esp)
083601ea +0x3e8:  call   0834be5a <_ZN8CDungeon11insertStartEiP4CMap>  ; CDungeon::insertStart(int, CMap*)
083601ef +0x3ed:  addl   $0x1,-0x1c(%ebp)
083601f3 +0x3f1:  lea    -0x758(%ebp),%eax
083601f9 +0x3f7:  add    $0x10,%eax
083601fc +0x3fa:  mov    %eax,(%esp)
083601ff +0x3fd:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08360204 +0x402:  cmp    -0x1c(%ebp),%eax
08360207 +0x405:  setg   %al
0836020a +0x408:  test   %al,%al
0836020c +0x40a:  jne    0836014a <+0x348>
08360212 +0x410:  lea    -0x34(%ebp),%eax
08360215 +0x413:  movl   $0x0,0x8(%esp)
0836021d +0x41b:  lea    -0x3d4(%ebp),%edx
08360223 +0x421:  mov    %edx,0x4(%esp)
08360227 +0x425:  mov    %eax,(%esp)
0836022a +0x428:  call   08391bd2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21672>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21672
0836022f +0x42d:  sub    $0x4,%esp
08360232 +0x430:  lea    -0x48(%ebp),%eax
08360235 +0x433:  lea    -0x758(%ebp),%edx
0836023b +0x439:  add    $0x4,%edx
0836023e +0x43c:  mov    %edx,0x4(%esp)
08360242 +0x440:  mov    %eax,(%esp)
08360245 +0x443:  call   0826c43e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd0c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd0c
0836024a +0x448:  sub    $0x4,%esp
0836024d +0x44b:  lea    -0x48(%ebp),%eax
08360250 +0x44e:  mov    %eax,0x4(%esp)
08360254 +0x452:  lea    -0x3d4(%ebp),%eax
0836025a +0x458:  mov    %eax,(%esp)
0836025d +0x45b:  call   0826c462 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0xd30>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0xd30
08360262 +0x460:  test   %al,%al
08360264 +0x462:  jne    08360034 <+0x232>
0836026a +0x468:  lea    -0x30(%ebp),%eax
0836026d +0x46b:  movl   $0x0,0x8(%esp)
08360275 +0x473:  lea    -0x3d0(%ebp),%edx
0836027b +0x479:  mov    %edx,0x4(%esp)
0836027f +0x47d:  mov    %eax,(%esp)
08360282 +0x480:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
08360287 +0x485:  sub    $0x4,%esp
0836028a +0x488:  lea    -0x3cc(%ebp),%eax
08360290 +0x48e:  movl   $&g_stMapScriptFileList,0x4(%esp)
08360298 +0x496:  mov    %eax,(%esp)
0836029b +0x499:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
083602a0 +0x49e:  sub    $0x4,%esp
083602a3 +0x4a1:  lea    -0x3cc(%ebp),%eax
083602a9 +0x4a7:  mov    %eax,0x4(%esp)
083602ad +0x4ab:  lea    -0x3d0(%ebp),%eax
083602b3 +0x4b1:  mov    %eax,(%esp)
083602b6 +0x4b4:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
083602bb +0x4b9:  test   %al,%al
083602bd +0x4bb:  jne    0835fe85 <+0x83>
083602c3 +0x4c1:  jmp    083602c6 <+0x4c4>
083602c5 +0x4c3:  nop
083602c6 +0x4c4:  mov    $0x1,%ebx
083602cb +0x4c9:  jmp    083602eb <+0x4e9>
083602cd +0x4cb:  mov    %edx,%ebx
083602cf +0x4cd:  mov    %eax,%esi
083602d1 +0x4cf:  lea    -0x758(%ebp),%eax
083602d7 +0x4d5:  mov    %eax,(%esp)
083602da +0x4d8:  call   0836d4bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7488>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7488
083602df +0x4dd:  mov    %esi,%eax
083602e1 +0x4df:  mov    %ebx,%edx
083602e3 +0x4e1:  mov    %eax,(%esp)
083602e6 +0x4e4:  call   08ae3750 <_Unwind_Resume>
083602eb +0x4e9:  lea    -0x758(%ebp),%eax
083602f1 +0x4ef:  mov    %eax,(%esp)
083602f4 +0x4f2:  call   0836d4bc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7488>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7488
083602f9 +0x4f7:  mov    %ebx,%eax
083602fb +0x4f9:  lea    -0xc(%ebp),%esp
083602fe +0x4fc:  add    $0x0,%esp
08360301 +0x4ff:  pop    %ebx
08360302 +0x500:  pop    %esi
08360303 +0x501:  pop    %edi
08360304 +0x502:  pop    %ebp
08360305 +0x503:  ret
```

## 反编译 C

```c
// CDataManager::load_map_files @ 0x835fe02

/* CDataManager::load_map_files(std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >&) */

undefined4 __thiscall CDataManager::load_map_files(CDataManager *this,vector *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  CMap *this_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_760;
  STMapScript local_75c [16];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_74c [312];
  int local_614;
  int local_3e0;
  int local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_3d0 [4]
  ;
  STMapScript local_3cc [892];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_50 [4];
  _List_iterator local_4c [4];
  cMyTrace local_48 [16];
  _List_iterator<int> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_34 [4];
  char *local_30;
  CDungeon *local_2c;
  CMap *local_28;
  undefined4 local_24;
  uint local_20;
  
  local_30 = (char *)0x0;
  STMapScript::STMapScript(local_75c);
  local_2c = (CDungeon *)0x0;
  local_28 = (CMap *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3d4);
  std::_List_iterator<int>::_List_iterator((_List_iterator<int> *)&local_3d8);
                    /* try { // try from 0835fe5e to 0835ff1b has its CatchHandler @ 083602cd */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )&local_760);
  local_3d4 = local_760;
  std::pair<int,int>::pair((pair<int,int> *)&local_3e0);
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_3d0);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3d4,
                       (_Rb_tree_iterator *)local_3d0);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3d4);
    local_30 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_30 == (char *)0x0) break;
    piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3d4);
    if (*piVar3 == 50000) {
      STMapScript::Clear(local_75c);
    }
    else {
      cVar1 = ImportMapScript(local_75c,local_30);
      if (cVar1 != '\x01') {
        printf("Error in script(\'%s\')\n",local_30);
        uVar5 = 0;
        goto LAB_083602eb;
      }
    }
    this_00 = operator_new(0x130);
                    /* try { // try from 0835ff23 to 0835ff27 has its CatchHandler @ 0835ff2a */
    CMap::CMap(this_00);
    local_28 = this_00;
                    /* try { // try from 0835ff55 to 0835ff59 has its CatchHandler @ 083602cd */
    STMapScript::STMapScript(local_3cc,local_75c);
                    /* try { // try from 0835ff6a to 0835ff6e has its CatchHandler @ 0835ff71 */
    CMap::set_map(local_28,local_3cc);
                    /* try { // try from 0835ff95 to 0836029f has its CatchHandler @ 083602cd */
    STMapScript::~STMapScript(local_3cc);
    iVar2 = std::list<int,std::allocator<int>>::size();
    if (iVar2 == 0) {
      CMapList::insert_map(*(CMapList **)(this + 4),0xf,0xf,local_28,param_1);
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_50,(int)&local_3d4)
      ;
    }
    else {
      std::list<int,std::allocator<int>>::begin();
      local_3d8 = local_760;
      while( true ) {
        std::list<int,std::allocator<int>>::end();
        cVar1 = std::_List_iterator<int>::operator!=((_List_iterator<int> *)&local_3d8,local_4c);
        if (cVar1 == '\0') break;
        puVar4 = (undefined4 *)
                 std::_List_iterator<int>::operator*((_List_iterator<int> *)&local_3d8);
        local_24 = *puVar4;
        local_2c = (CDungeon *)CDungeonList::find_dungeon(*(int *)this);
        if (local_2c == (CDungeon *)0x0) {
          cMyTrace::cMyTrace(local_48,"bool CDataManager::load_map_files(PVPMAP_VECTOR&)",0x254b,5);
          cMyTrace::operator()
                    (local_48,"[Load Map] Not exist dungeon. [Index:%d] filename : [%s]",local_24,
                     local_30);
          uVar5 = 0;
          goto LAB_083602eb;
        }
        iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                          (avStack_74c);
        if (iVar2 == 0) {
          CDungeon::InsertMap(local_2c,0xf,0xf,local_28);
          CMapList::insert_map(*(CMapList **)(this + 4),0xf,0xf,local_28,param_1);
          if (0 < local_614) {
            CDungeon::insertStart(local_2c,0xf,local_28);
          }
        }
        local_20 = 0;
        while (iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                 (avStack_74c), (int)local_20 < iVar2) {
          piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[](avStack_74c,local_20);
          local_3dc = piVar3[1];
          local_3e0 = *piVar3;
          CDungeon::InsertMap(local_2c,local_3e0,local_3dc,local_28);
          CMapList::insert_map(*(CMapList **)(this + 4),local_3e0,local_3dc,local_28,param_1);
          if (0 < local_614) {
            CDungeon::insertStart(local_2c,local_3e0,local_28);
          }
          local_20 = local_20 + 1;
        }
        std::_List_iterator<int>::operator++(local_38,(int)&local_3d8);
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_34,(int)&local_3d4)
      ;
    }
  }
  uVar5 = 1;
LAB_083602eb:
  STMapScript::~STMapScript(local_75c);
  return uVar5;
}
```
