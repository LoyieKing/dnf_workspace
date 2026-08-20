# CMap

`_ZN4CMapC1Ev`

`CMap::CMap()`

| 类 | 地址 |
|---|---|
| `CMap` | `0x0834dcda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834dcda  _ZN4CMapC1Ev
#           CMap::CMap()
# range [0x0834dcda, 0x0834def1]
0834dcda +0x000:  push   %ebp
0834dcdb +0x001:  mov    %esp,%ebp
0834dcdd +0x003:  push   %esi
0834dcde +0x004:  push   %ebx
0834dcdf +0x005:  sub    $0x10,%esp
0834dce2 +0x008:  mov    0x8(%ebp),%eax
0834dce5 +0x00b:  add    $0xc,%eax
0834dce8 +0x00e:  mov    %eax,(%esp)
0834dceb +0x011:  call   08310a06 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x25eb>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x25eb
0834dcf0 +0x016:  mov    0x8(%ebp),%eax
0834dcf3 +0x019:  add    $0x14,%eax
0834dcf6 +0x01c:  mov    %eax,(%esp)
0834dcf9 +0x01f:  call   08310a06 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x25eb>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x25eb
0834dcfe +0x024:  mov    0x8(%ebp),%eax
0834dd01 +0x027:  add    $0x1c,%eax
0834dd04 +0x02a:  mov    %eax,(%esp)
0834dd07 +0x02d:  call   0838a992 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a432>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a432
0834dd0c +0x032:  mov    0x8(%ebp),%eax
0834dd0f +0x035:  add    $0x24,%eax
0834dd12 +0x038:  mov    %eax,(%esp)
0834dd15 +0x03b:  call   082357d6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xae80>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xae80
0834dd1a +0x040:  mov    0x8(%ebp),%eax
0834dd1d +0x043:  add    $0x6c,%eax
0834dd20 +0x046:  mov    %eax,(%esp)
0834dd23 +0x049:  call   0838314e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12bee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12bee
0834dd28 +0x04e:  mov    0x8(%ebp),%eax
0834dd2b +0x051:  add    $0x84,%eax
0834dd30 +0x056:  mov    %eax,(%esp)
0834dd33 +0x059:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0834dd38 +0x05e:  mov    0x8(%ebp),%eax
0834dd3b +0x061:  add    $0x90,%eax
0834dd40 +0x066:  mov    %eax,(%esp)
0834dd43 +0x069:  call   083830dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12b7c
0834dd48 +0x06e:  mov    0x8(%ebp),%eax
0834dd4b +0x071:  add    $0x9c,%eax
0834dd50 +0x076:  mov    %eax,(%esp)
0834dd53 +0x079:  call   083830dc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12b7c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12b7c
0834dd58 +0x07e:  mov    0x8(%ebp),%eax
0834dd5b +0x081:  add    $0xa8,%eax
0834dd60 +0x086:  mov    %eax,(%esp)
0834dd63 +0x089:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0834dd68 +0x08e:  mov    0x8(%ebp),%eax
0834dd6b +0x091:  add    $0xb8,%eax
0834dd70 +0x096:  mov    %eax,(%esp)
0834dd73 +0x099:  call   082aaa72 <_GLOBAL__I__ZN4CLog5this_E+0x6e99>  ; global constructors keyed to CLog::this_+0x6e99
0834dd78 +0x09e:  mov    0x8(%ebp),%eax
0834dd7b +0x0a1:  add    $0xc4,%eax
0834dd80 +0x0a6:  mov    %eax,(%esp)
0834dd83 +0x0a9:  call   082aaae4 <_GLOBAL__I__ZN4CLog5this_E+0x6f0b>  ; global constructors keyed to CLog::this_+0x6f0b
0834dd88 +0x0ae:  mov    0x8(%ebp),%eax
0834dd8b +0x0b1:  add    $0xf4,%eax
0834dd90 +0x0b6:  mov    %eax,(%esp)
0834dd93 +0x0b9:  call   08899d6e <_ZN12advancealtar8TimeLineC1Ev>  ; advancealtar::TimeLine::TimeLine()
0834dd98 +0x0be:  mov    0x8(%ebp),%eax
0834dd9b +0x0c1:  add    $0x114,%eax
0834dda0 +0x0c6:  mov    %eax,(%esp)
0834dda3 +0x0c9:  call   083832a4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12d44>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12d44
0834dda8 +0x0ce:  mov    0x8(%ebp),%eax
0834ddab +0x0d1:  movl   $0x0,(%eax)
0834ddb1 +0x0d7:  mov    0x8(%ebp),%eax
0834ddb4 +0x0da:  movl   $0x0,0x7c(%eax)
0834ddbb +0x0e1:  add    $0x10,%esp
0834ddbe +0x0e4:  pop    %ebx
0834ddbf +0x0e5:  pop    %esi
0834ddc0 +0x0e6:  pop    %ebp
0834ddc1 +0x0e7:  ret
0834ddc2 +0x0e8:  mov    %edx,%ebx
0834ddc4 +0x0ea:  mov    %eax,%esi
0834ddc6 +0x0ec:  mov    0x8(%ebp),%eax
0834ddc9 +0x0ef:  add    $0xf4,%eax
0834ddce +0x0f4:  mov    %eax,(%esp)
0834ddd1 +0x0f7:  call   08899db4 <_ZN12advancealtar8TimeLineD1Ev>  ; advancealtar::TimeLine::~TimeLine()
0834ddd6 +0x0fc:  mov    %esi,%eax
0834ddd8 +0x0fe:  mov    %ebx,%edx
0834ddda +0x100:  jmp    0834dddc <+0x102>
0834dddc +0x102:  mov    %edx,%ebx
0834ddde +0x104:  mov    %eax,%esi
0834dde0 +0x106:  mov    0x8(%ebp),%eax
0834dde3 +0x109:  add    $0xc4,%eax
0834dde8 +0x10e:  mov    %eax,(%esp)
0834ddeb +0x111:  call   082aaaf8 <_GLOBAL__I__ZN4CLog5this_E+0x6f1f>  ; global constructors keyed to CLog::this_+0x6f1f
0834ddf0 +0x116:  mov    %esi,%eax
0834ddf2 +0x118:  mov    %ebx,%edx
0834ddf4 +0x11a:  jmp    0834ddf6 <+0x11c>
0834ddf6 +0x11c:  mov    %edx,%ebx
0834ddf8 +0x11e:  mov    %eax,%esi
0834ddfa +0x120:  mov    0x8(%ebp),%eax
0834ddfd +0x123:  add    $0xb8,%eax
0834de02 +0x128:  mov    %eax,(%esp)
0834de05 +0x12b:  call   082aaa86 <_GLOBAL__I__ZN4CLog5this_E+0x6ead>  ; global constructors keyed to CLog::this_+0x6ead
0834de0a +0x130:  mov    %esi,%eax
0834de0c +0x132:  mov    %ebx,%edx
0834de0e +0x134:  jmp    0834de10 <+0x136>
0834de10 +0x136:  mov    %edx,%ebx
0834de12 +0x138:  mov    %eax,%esi
0834de14 +0x13a:  mov    0x8(%ebp),%eax
0834de17 +0x13d:  add    $0xa8,%eax
0834de1c +0x142:  mov    %eax,(%esp)
0834de1f +0x145:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0834de24 +0x14a:  mov    %esi,%eax
0834de26 +0x14c:  mov    %ebx,%edx
0834de28 +0x14e:  jmp    0834de2a <+0x150>
0834de2a +0x150:  mov    %edx,%ebx
0834de2c +0x152:  mov    %eax,%esi
0834de2e +0x154:  mov    0x8(%ebp),%eax
0834de31 +0x157:  add    $0x9c,%eax
0834de36 +0x15c:  mov    %eax,(%esp)
0834de39 +0x15f:  call   083830f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12b90>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12b90
0834de3e +0x164:  mov    %esi,%eax
0834de40 +0x166:  mov    %ebx,%edx
0834de42 +0x168:  jmp    0834de44 <+0x16a>
0834de44 +0x16a:  mov    %edx,%ebx
0834de46 +0x16c:  mov    %eax,%esi
0834de48 +0x16e:  mov    0x8(%ebp),%eax
0834de4b +0x171:  add    $0x90,%eax
0834de50 +0x176:  mov    %eax,(%esp)
0834de53 +0x179:  call   083830f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12b90>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12b90
0834de58 +0x17e:  mov    %esi,%eax
0834de5a +0x180:  mov    %ebx,%edx
0834de5c +0x182:  jmp    0834de5e <+0x184>
0834de5e +0x184:  mov    %edx,%ebx
0834de60 +0x186:  mov    %eax,%esi
0834de62 +0x188:  mov    0x8(%ebp),%eax
0834de65 +0x18b:  add    $0x84,%eax
0834de6a +0x190:  mov    %eax,(%esp)
0834de6d +0x193:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0834de72 +0x198:  mov    %esi,%eax
0834de74 +0x19a:  mov    %ebx,%edx
0834de76 +0x19c:  jmp    0834de78 <+0x19e>
0834de78 +0x19e:  mov    %edx,%ebx
0834de7a +0x1a0:  mov    %eax,%esi
0834de7c +0x1a2:  mov    0x8(%ebp),%eax
0834de7f +0x1a5:  add    $0x6c,%eax
0834de82 +0x1a8:  mov    %eax,(%esp)
0834de85 +0x1ab:  call   08383162 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12c02>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12c02
0834de8a +0x1b0:  mov    %esi,%eax
0834de8c +0x1b2:  mov    %ebx,%edx
0834de8e +0x1b4:  jmp    0834de90 <+0x1b6>
0834de90 +0x1b6:  mov    %edx,%ebx
0834de92 +0x1b8:  mov    %eax,%esi
0834de94 +0x1ba:  mov    0x8(%ebp),%eax
0834de97 +0x1bd:  add    $0x24,%eax
0834de9a +0x1c0:  mov    %eax,(%esp)
0834de9d +0x1c3:  call   0822ade8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x492>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x492
0834dea2 +0x1c8:  mov    %esi,%eax
0834dea4 +0x1ca:  mov    %ebx,%edx
0834dea6 +0x1cc:  jmp    0834dea8 <+0x1ce>
0834dea8 +0x1ce:  mov    %edx,%ebx
0834deaa +0x1d0:  mov    %eax,%esi
0834deac +0x1d2:  mov    0x8(%ebp),%eax
0834deaf +0x1d5:  add    $0x1c,%eax
0834deb2 +0x1d8:  mov    %eax,(%esp)
0834deb5 +0x1db:  call   081508b2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e7
0834deba +0x1e0:  mov    %esi,%eax
0834debc +0x1e2:  mov    %ebx,%edx
0834debe +0x1e4:  jmp    0834dec0 <+0x1e6>
0834dec0 +0x1e6:  mov    %edx,%ebx
0834dec2 +0x1e8:  mov    %eax,%esi
0834dec4 +0x1ea:  mov    0x8(%ebp),%eax
0834dec7 +0x1ed:  add    $0x14,%eax
0834deca +0x1f0:  mov    %eax,(%esp)
0834decd +0x1f3:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
0834ded2 +0x1f8:  mov    %esi,%eax
0834ded4 +0x1fa:  mov    %ebx,%edx
0834ded6 +0x1fc:  jmp    0834ded8 <+0x1fe>
0834ded8 +0x1fe:  mov    %edx,%ebx
0834deda +0x200:  mov    %eax,%esi
0834dedc +0x202:  mov    0x8(%ebp),%eax
0834dedf +0x205:  add    $0xc,%eax
0834dee2 +0x208:  mov    %eax,(%esp)
0834dee5 +0x20b:  call   08134782 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x389>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x389
0834deea +0x210:  mov    %esi,%eax
0834deec +0x212:  mov    %ebx,%edx
0834deee +0x214:  mov    %eax,(%esp)
0834def1 +0x217:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CMap::CMap @ 0x834dcda

/* CMap::CMap() */

void __thiscall CMap::CMap(CMap *this)

{
  std::list<_mapMonster,std::allocator<_mapMonster>>::list
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0xc));
                    /* try { // try from 0834dcf9 to 0834dcfd has its CatchHandler @ 0834ded8 */
  std::list<_mapMonster,std::allocator<_mapMonster>>::list
            ((list<_mapMonster,std::allocator<_mapMonster>> *)(this + 0x14));
                    /* try { // try from 0834dd07 to 0834dd0b has its CatchHandler @ 0834dec0 */
  std::list<_mapItem,std::allocator<_mapItem>>::list
            ((list<_mapItem,std::allocator<_mapItem>> *)(this + 0x1c));
                    /* try { // try from 0834dd15 to 0834dd19 has its CatchHandler @ 0834dea8 */
  std::list<int,std::allocator<int>>::list((list<int,std::allocator<int>> *)(this + 0x24));
                    /* try { // try from 0834dd23 to 0834dd27 has its CatchHandler @ 0834de90 */
  std::vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>>::vector
            ((vector<STAICharacterMapArrangeData,std::allocator<STAICharacterMapArrangeData>> *)
             (this + 0x6c));
                    /* try { // try from 0834dd33 to 0834dd37 has its CatchHandler @ 0834de78 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x84));
                    /* try { // try from 0834dd43 to 0834dd47 has its CatchHandler @ 0834de5e */
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::vector
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x90));
                    /* try { // try from 0834dd53 to 0834dd57 has its CatchHandler @ 0834de44 */
  std::vector<STRivalMapData,std::allocator<STRivalMapData>>::vector
            ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(this + 0x9c));
                    /* try { // try from 0834dd63 to 0834dd67 has its CatchHandler @ 0834de2a */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xa8));
                    /* try { // try from 0834dd73 to 0834dd77 has its CatchHandler @ 0834de10 */
  std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::vector
            ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)(this + 0xb8));
                    /* try { // try from 0834dd83 to 0834dd87 has its CatchHandler @ 0834ddf6 */
  std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::vector
            ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)(this + 0xc4))
  ;
                    /* try { // try from 0834dd93 to 0834dd97 has its CatchHandler @ 0834dddc */
  advancealtar::TimeLine::TimeLine((TimeLine *)(this + 0xf4));
                    /* try { // try from 0834dda3 to 0834dda7 has its CatchHandler @ 0834ddc2 */
  std::
  map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
  ::map((map<char,std::vector<TournamentMonster,std::allocator<TournamentMonster>>,std::less<char>,std::allocator<std::pair<char_const,std::vector<TournamentMonster,std::allocator<TournamentMonster>>>>>
         *)(this + 0x114));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}
```
