# ~CMap

`_ZN4CMapD1Ev`

`CMap::~CMap()`

| 类 | 地址 |
|---|---|
| `CMap` | `0x0834def6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834def6  _ZN4CMapD1Ev
#           CMap::~CMap()
# range [0x0834def6, 0x0834e13d]
0834def6 +0x000:  push   %ebp
0834def7 +0x001:  mov    %esp,%ebp
0834def9 +0x003:  push   %esi
0834defa +0x004:  push   %ebx
0834defb +0x005:  sub    $0x10,%esp
0834defe +0x008:  mov    0x8(%ebp),%eax
0834df01 +0x00b:  mov    %eax,(%esp)
0834df04 +0x00e:  call   0834e13e <_ZN4CMap7destroyEv>  ; CMap::destroy()
0834df09 +0x013:  jmp    0834df25 <+0x2f>
0834df0b +0x015:  mov    %edx,%ebx
0834df0d +0x017:  mov    %eax,%esi
0834df0f +0x019:  mov    0x8(%ebp),%eax
0834df12 +0x01c:  add    $0x114,%eax
0834df17 +0x021:  mov    %eax,(%esp)
0834df1a +0x024:  call   0836cc6c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x6c38>  ; global constructors keyed to CServerEvent::m_nExpRate+0x6c38
0834df1f +0x029:  mov    %esi,%eax
0834df21 +0x02b:  mov    %ebx,%edx
0834df23 +0x02d:  jmp    0834df37 <+0x41>
0834df25 +0x02f:  mov    0x8(%ebp),%eax
0834df28 +0x032:  add    $0x114,%eax
0834df2d +0x037:  mov    %eax,(%esp)
0834df30 +0x03a:  call   0836cc6c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x6c38>  ; global constructors keyed to CServerEvent::m_nExpRate+0x6c38
0834df35 +0x03f:  jmp    0834df51 <+0x5b>
0834df37 +0x041:  mov    %edx,%ebx
0834df39 +0x043:  mov    %eax,%esi
0834df3b +0x045:  mov    0x8(%ebp),%eax
0834df3e +0x048:  add    $0xf4,%eax
0834df43 +0x04d:  mov    %eax,(%esp)
0834df46 +0x050:  call   08899db4 <_ZN12advancealtar8TimeLineD1Ev>  ; advancealtar::TimeLine::~TimeLine()
0834df4b +0x055:  mov    %esi,%eax
0834df4d +0x057:  mov    %ebx,%edx
0834df4f +0x059:  jmp    0834df63 <+0x6d>
0834df51 +0x05b:  mov    0x8(%ebp),%eax
0834df54 +0x05e:  add    $0xf4,%eax
0834df59 +0x063:  mov    %eax,(%esp)
0834df5c +0x066:  call   08899db4 <_ZN12advancealtar8TimeLineD1Ev>  ; advancealtar::TimeLine::~TimeLine()
0834df61 +0x06b:  jmp    0834df7d <+0x87>
0834df63 +0x06d:  mov    %edx,%ebx
0834df65 +0x06f:  mov    %eax,%esi
0834df67 +0x071:  mov    0x8(%ebp),%eax
0834df6a +0x074:  add    $0xc4,%eax
0834df6f +0x079:  mov    %eax,(%esp)
0834df72 +0x07c:  call   082aaaf8 <_GLOBAL__I__ZN4CLog5this_E+0x6f1f>  ; global constructors keyed to CLog::this_+0x6f1f
0834df77 +0x081:  mov    %esi,%eax
0834df79 +0x083:  mov    %ebx,%edx
0834df7b +0x085:  jmp    0834df8f <+0x99>
0834df7d +0x087:  mov    0x8(%ebp),%eax
0834df80 +0x08a:  add    $0xc4,%eax
0834df85 +0x08f:  mov    %eax,(%esp)
0834df88 +0x092:  call   082aaaf8 <_GLOBAL__I__ZN4CLog5this_E+0x6f1f>  ; global constructors keyed to CLog::this_+0x6f1f
0834df8d +0x097:  jmp    0834dfa9 <+0xb3>
0834df8f +0x099:  mov    %edx,%ebx
0834df91 +0x09b:  mov    %eax,%esi
0834df93 +0x09d:  mov    0x8(%ebp),%eax
0834df96 +0x0a0:  add    $0xb8,%eax
0834df9b +0x0a5:  mov    %eax,(%esp)
0834df9e +0x0a8:  call   082aaa86 <_GLOBAL__I__ZN4CLog5this_E+0x6ead>  ; global constructors keyed to CLog::this_+0x6ead
0834dfa3 +0x0ad:  mov    %esi,%eax
0834dfa5 +0x0af:  mov    %ebx,%edx
0834dfa7 +0x0b1:  jmp    0834dfbb <+0xc5>
0834dfa9 +0x0b3:  mov    0x8(%ebp),%eax
0834dfac +0x0b6:  add    $0xb8,%eax
0834dfb1 +0x0bb:  mov    %eax,(%esp)
0834dfb4 +0x0be:  call   082aaa86 <_GLOBAL__I__ZN4CLog5this_E+0x6ead>  ; global constructors keyed to CLog::this_+0x6ead
0834dfb9 +0x0c3:  jmp    0834dfd5 <+0xdf>
0834dfbb +0x0c5:  mov    %edx,%ebx
0834dfbd +0x0c7:  mov    %eax,%esi
0834dfbf +0x0c9:  mov    0x8(%ebp),%eax
0834dfc2 +0x0cc:  add    $0xa8,%eax
0834dfc7 +0x0d1:  mov    %eax,(%esp)
0834dfca +0x0d4:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0834dfcf +0x0d9:  mov    %esi,%eax
0834dfd1 +0x0db:  mov    %ebx,%edx
0834dfd3 +0x0dd:  jmp    0834dfe7 <+0xf1>
0834dfd5 +0x0df:  mov    0x8(%ebp),%eax
0834dfd8 +0x0e2:  add    $0xa8,%eax
0834dfdd +0x0e7:  mov    %eax,(%esp)
0834dfe0 +0x0ea:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0834dfe5 +0x0ef:  jmp    0834e001 <+0x10b>
0834dfe7 +0x0f1:  mov    %edx,%ebx
0834dfe9 +0x0f3:  mov    %eax,%esi
0834dfeb +0x0f5:  mov    0x8(%ebp),%eax
0834dfee +0x0f8:  add    $0x9c,%eax
0834dff3 +0x0fd:  mov    %eax,(%esp)
0834dff6 +0x100:  call   083830f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12b90>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12b90
0834dffb +0x105:  mov    %esi,%eax
0834dffd +0x107:  mov    %ebx,%edx
0834dfff +0x109:  jmp    0834e013 <+0x11d>
0834e001 +0x10b:  mov    0x8(%ebp),%eax
0834e004 +0x10e:  add    $0x9c,%eax
0834e009 +0x113:  mov    %eax,(%esp)
0834e00c +0x116:  call   083830f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12b90>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12b90
0834e011 +0x11b:  jmp    0834e02d <+0x137>
0834e013 +0x11d:  mov    %edx,%ebx
0834e015 +0x11f:  mov    %eax,%esi
0834e017 +0x121:  mov    0x8(%ebp),%eax
0834e01a +0x124:  add    $0x90,%eax
0834e01f +0x129:  mov    %eax,(%esp)
0834e022 +0x12c:  call   083830f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12b90>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12b90
0834e027 +0x131:  mov    %esi,%eax
0834e029 +0x133:  mov    %ebx,%edx
0834e02b +0x135:  jmp    0834e03f <+0x149>
0834e02d +0x137:  mov    0x8(%ebp),%eax
0834e030 +0x13a:  add    $0x90,%eax
0834e035 +0x13f:  mov    %eax,(%esp)
0834e038 +0x142:  call   083830f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12b90>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12b90
0834e03d +0x147:  jmp    0834e059 <+0x163>
0834e03f +0x149:  mov    %edx,%ebx
0834e041 +0x14b:  mov    %eax,%esi
0834e043 +0x14d:  mov    0x8(%ebp),%eax
0834e046 +0x150:  add    $0x84,%eax
0834e04b +0x155:  mov    %eax,(%esp)
0834e04e +0x158:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0834e053 +0x15d:  mov    %esi,%eax
0834e055 +0x15f:  mov    %ebx,%edx
0834e057 +0x161:  jmp    0834e06b <+0x175>
0834e059 +0x163:  mov    0x8(%ebp),%eax
0834e05c +0x166:  add    $0x84,%eax
0834e061 +0x16b:  mov    %eax,(%esp)
0834e064 +0x16e:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0834e069 +0x173:  jmp    0834e083 <+0x18d>
0834e06b +0x175:  mov    %edx,%ebx
0834e06d +0x177:  mov    %eax,%esi
0834e06f +0x179:  mov    0x8(%ebp),%eax
0834e072 +0x17c:  add    $0x6c,%eax
0834e075 +0x17f:  mov    %eax,(%esp)
0834e078 +0x182:  call   08383162 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12c02>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12c02
0834e07d +0x187:  mov    %esi,%eax
0834e07f +0x189:  mov    %ebx,%edx
0834e081 +0x18b:  jmp    0834e093 <+0x19d>
0834e083 +0x18d:  mov    0x8(%ebp),%eax
0834e086 +0x190:  add    $0x6c,%eax
0834e089 +0x193:  mov    %eax,(%esp)
0834e08c +0x196:  call   08383162 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12c02>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12c02
0834e091 +0x19b:  jmp    0834e0ab <+0x1b5>
0834e093 +0x19d:  mov    %edx,%ebx
0834e095 +0x19f:  mov    %eax,%esi
0834e097 +0x1a1:  mov    0x8(%ebp),%eax
0834e09a +0x1a4:  add    $0x24,%eax
0834e09d +0x1a7:  mov    %eax,(%esp)
0834e0a0 +0x1aa:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0834e0a5 +0x1af:  mov    %esi,%eax
0834e0a7 +0x1b1:  mov    %ebx,%edx
0834e0a9 +0x1b3:  jmp    0834e0bb <+0x1c5>
0834e0ab +0x1b5:  mov    0x8(%ebp),%eax
0834e0ae +0x1b8:  add    $0x24,%eax
0834e0b1 +0x1bb:  mov    %eax,(%esp)
0834e0b4 +0x1be:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0834e0b9 +0x1c3:  jmp    0834e0d3 <+0x1dd>
0834e0bb +0x1c5:  mov    %edx,%ebx
0834e0bd +0x1c7:  mov    %eax,%esi
0834e0bf +0x1c9:  mov    0x8(%ebp),%eax
0834e0c2 +0x1cc:  add    $0x1c,%eax
0834e0c5 +0x1cf:  mov    %eax,(%esp)
0834e0c8 +0x1d2:  call   081508b2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e7
0834e0cd +0x1d7:  mov    %esi,%eax
0834e0cf +0x1d9:  mov    %ebx,%edx
0834e0d1 +0x1db:  jmp    0834e0e3 <+0x1ed>
0834e0d3 +0x1dd:  mov    0x8(%ebp),%eax
0834e0d6 +0x1e0:  add    $0x1c,%eax
0834e0d9 +0x1e3:  mov    %eax,(%esp)
0834e0dc +0x1e6:  call   081508b2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e7
0834e0e1 +0x1eb:  jmp    0834e0fb <+0x205>
0834e0e3 +0x1ed:  mov    %edx,%ebx
0834e0e5 +0x1ef:  mov    %eax,%esi
0834e0e7 +0x1f1:  mov    0x8(%ebp),%eax
0834e0ea +0x1f4:  add    $0x14,%eax
0834e0ed +0x1f7:  mov    %eax,(%esp)
0834e0f0 +0x1fa:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
0834e0f5 +0x1ff:  mov    %esi,%eax
0834e0f7 +0x201:  mov    %ebx,%edx
0834e0f9 +0x203:  jmp    0834e10b <+0x215>
0834e0fb +0x205:  mov    0x8(%ebp),%eax
0834e0fe +0x208:  add    $0x14,%eax
0834e101 +0x20b:  mov    %eax,(%esp)
0834e104 +0x20e:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
0834e109 +0x213:  jmp    0834e129 <+0x233>
0834e10b +0x215:  mov    %edx,%ebx
0834e10d +0x217:  mov    %eax,%esi
0834e10f +0x219:  mov    0x8(%ebp),%eax
0834e112 +0x21c:  add    $0xc,%eax
0834e115 +0x21f:  mov    %eax,(%esp)
0834e118 +0x222:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
0834e11d +0x227:  mov    %esi,%eax
0834e11f +0x229:  mov    %ebx,%edx
0834e121 +0x22b:  mov    %eax,(%esp)
0834e124 +0x22e:  call   08ae3750 <_Unwind_Resume>
0834e129 +0x233:  mov    0x8(%ebp),%eax
0834e12c +0x236:  add    $0xc,%eax
0834e12f +0x239:  mov    %eax,(%esp)
0834e132 +0x23c:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
0834e137 +0x241:  add    $0x10,%esp
0834e13a +0x244:  pop    %ebx
0834e13b +0x245:  pop    %esi
0834e13c +0x246:  pop    %ebp
0834e13d +0x247:  ret
```

## 反编译 C

```c
// CMap::~CMap @ 0x834def6

/* CMap::~CMap() */

void __thiscall CMap::~CMap(CMap *this)

{
                    /* try { // try from 0834df04 to 0834df08 has its CatchHandler @ 0834df0b */
  destroy(this);
                    /* try { // try from 0834df30 to 0834df34 has its CatchHandler @ 0834df37 */
  std::
  map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
  ::~map((map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
          *)(this + 0x114));
                    /* try { // try from 0834df5c to 0834df60 has its CatchHandler @ 0834df63 */
  advancealtar::TimeLine::~TimeLine((TimeLine *)(this + 0xf4));
                    /* try { // try from 0834df88 to 0834df8c has its CatchHandler @ 0834df8f */
  std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::~vector
            ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)(this + 0xc4))
  ;
                    /* try { // try from 0834dfb4 to 0834dfb8 has its CatchHandler @ 0834dfbb */
  std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::~vector
            ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)(this + 0xb8));
                    /* try { // try from 0834dfe0 to 0834dfe4 has its CatchHandler @ 0834dfe7 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xa8));
                    /* try { // try from 0834e00c to 0834e010 has its CatchHandler @ 0834e013 */
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::~vector
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x9c));
                    /* try { // try from 0834e038 to 0834e03c has its CatchHandler @ 0834e03f */
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::~vector
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x90));
                    /* try { // try from 0834e064 to 0834e068 has its CatchHandler @ 0834e06b */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x84));
                    /* try { // try from 0834e08c to 0834e090 has its CatchHandler @ 0834e093 */
  std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::~vector
            ((vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>> *)
             (this + 0x6c));
                    /* try { // try from 0834e0b4 to 0834e0b8 has its CatchHandler @ 0834e0bb */
  std::list<int,std::allocator<int>>::~list((list<int,std::allocator<int>> *)(this + 0x24));
                    /* try { // try from 0834e0dc to 0834e0e0 has its CatchHandler @ 0834e0e3 */
  std::list<_mapItem,std::allocator<_mapItem>>::~list
            ((list<_mapItem,std::allocator<_mapItem>> *)(this + 0x1c));
                    /* try { // try from 0834e104 to 0834e108 has its CatchHandler @ 0834e10b */
  std::list<_mapMonster,std::allocator<_mapMonster>>::~list
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0x14));
  std::list<_mapMonster,std::allocator<_mapMonster>>::~list
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0xc));
  return;
}
```
