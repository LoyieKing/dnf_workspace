# load_list

`_ZN12CDungeonList9load_listEv`

`CDungeonList::load_list()`

| 类 | 地址 |
|---|---|
| `CDungeonList` | `0x0834d376` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834d376  _ZN12CDungeonList9load_listEv
#           CDungeonList::load_list()
# range [0x0834d376, 0x0834d60f]
0834d376 +0x000:  push   %ebp
0834d377 +0x001:  mov    %esp,%ebp
0834d379 +0x003:  push   %edi
0834d37a +0x004:  push   %esi
0834d37b +0x005:  push   %ebx
0834d37c +0x006:  sub    $0x56c,%esp
0834d382 +0x00c:  movl   $0x0,-0x20(%ebp)
0834d389 +0x013:  lea    -0x54c(%ebp),%eax
0834d38f +0x019:  mov    %eax,(%esp)
0834d392 +0x01c:  call   0836b5e2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x55ae>  ; global constructors keyed to CServerEvent::m_nExpRate+0x55ae
0834d397 +0x021:  movl   $0x0,-0x1c(%ebp)
0834d39e +0x028:  lea    -0x3c(%ebp),%eax
0834d3a1 +0x02b:  mov    %eax,(%esp)
0834d3a4 +0x02e:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
0834d3a9 +0x033:  lea    -0x55c(%ebp),%eax
0834d3af +0x039:  movl   $&g_stDungeonScriptFileList,0x4(%esp)
0834d3b7 +0x041:  mov    %eax,(%esp)
0834d3ba +0x044:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
0834d3bf +0x049:  sub    $0x4,%esp
0834d3c2 +0x04c:  mov    -0x55c(%ebp),%eax
0834d3c8 +0x052:  mov    %eax,-0x3c(%ebp)
0834d3cb +0x055:  jmp    0834d59d <+0x227>
0834d3d0 +0x05a:  lea    -0x3c(%ebp),%eax
0834d3d3 +0x05d:  mov    %eax,(%esp)
0834d3d6 +0x060:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
0834d3db +0x065:  add    $0x4,%eax
0834d3de +0x068:  mov    %eax,(%esp)
0834d3e1 +0x06b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0834d3e6 +0x070:  mov    %eax,-0x20(%ebp)
0834d3e9 +0x073:  cmpl   $0x0,-0x20(%ebp)
0834d3ed +0x077:  je     0834d5cf <+0x259>
0834d3f3 +0x07d:  mov    -0x20(%ebp),%eax
0834d3f6 +0x080:  mov    %eax,0x4(%esp)
0834d3fa +0x084:  lea    -0x54c(%ebp),%eax
0834d400 +0x08a:  mov    %eax,(%esp)
0834d403 +0x08d:  call   088e5faa <_Z19ImportDungeonScriptP15STDungeonScriptPKc>  ; ImportDungeonScript(STDungeonScript*, char const*)
0834d408 +0x092:  xor    $0x1,%eax
0834d40b +0x095:  test   %al,%al
0834d40d +0x097:  je     0834d42c <+0xb6>
0834d40f +0x099:  mov    -0x20(%ebp),%eax
0834d412 +0x09c:  mov    %eax,0x4(%esp)
0834d416 +0x0a0:  movl   $"Dungeon Script Error: %s\n",(%esp)
0834d41d +0x0a7:  call   0807db60 <_init+0x458>
0834d422 +0x0ac:  mov    $0x0,%ebx
0834d427 +0x0b1:  jmp    0834d5f5 <+0x27f>
0834d42c +0x0b6:  lea    -0x54c(%ebp),%eax
0834d432 +0x0bc:  add    $0x318,%eax
0834d437 +0x0c1:  mov    %eax,(%esp)
0834d43a +0x0c4:  call   08127306 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x8f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x8f
0834d43f +0x0c9:  test   %eax,%eax
0834d441 +0x0cb:  setne  %al
0834d444 +0x0ce:  test   %al,%al
0834d446 +0x0d0:  je     0834d465 <+0xef>
0834d448 +0x0d2:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
0834d44d +0x0d7:  lea    -0x54c(%ebp),%edx
0834d453 +0x0dd:  add    $0x318,%edx
0834d459 +0x0e3:  mov    %edx,0x4(%esp)
0834d45d +0x0e7:  mov    %eax,(%esp)
0834d460 +0x0ea:  call   08125c3c <_ZN21CDailyScheduleManager15AddDailScheduleERKSt6vectorI14_DailyScheduleSaIS1_EE>  ; CDailyScheduleManager::AddDailSchedule(std::vector<_DailySchedule, std::allocator<_DailySchedule> > const&)
0834d465 +0x0ef:  movzbl -0x2a3(%ebp),%eax
0834d46c +0x0f6:  test   %al,%al
0834d46e +0x0f8:  je     0834d4a6 <+0x130>
0834d470 +0x0fa:  movl   $0x934,(%esp)
0834d477 +0x101:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0834d47c +0x106:  mov    %eax,%ebx
0834d47e +0x108:  mov    %ebx,%eax
0834d480 +0x10a:  mov    %eax,(%esp)
0834d483 +0x10d:  call   08377606 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x70a6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x70a6
0834d488 +0x112:  jmp    0834d49f <+0x129>
0834d48a +0x114:  mov    %edx,%esi
0834d48c +0x116:  mov    %eax,%edi
0834d48e +0x118:  mov    %ebx,(%esp)
0834d491 +0x11b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0834d496 +0x120:  mov    %edi,%eax
0834d498 +0x122:  mov    %esi,%edx
0834d49a +0x124:  jmp    0834d5d7 <+0x261>
0834d49f +0x129:  mov    %ebx,%eax
0834d4a1 +0x12b:  mov    %eax,-0x1c(%ebp)
0834d4a4 +0x12e:  jmp    0834d4d8 <+0x162>
0834d4a6 +0x130:  movl   $0x934,(%esp)
0834d4ad +0x137:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0834d4b2 +0x13c:  mov    %eax,%ebx
0834d4b4 +0x13e:  mov    %ebx,%eax
0834d4b6 +0x140:  mov    %eax,(%esp)
0834d4b9 +0x143:  call   08373f3c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdf08>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdf08
0834d4be +0x148:  jmp    0834d4d5 <+0x15f>
0834d4c0 +0x14a:  mov    %edx,%esi
0834d4c2 +0x14c:  mov    %eax,%edi
0834d4c4 +0x14e:  mov    %ebx,(%esp)
0834d4c7 +0x151:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0834d4cc +0x156:  mov    %edi,%eax
0834d4ce +0x158:  mov    %esi,%edx
0834d4d0 +0x15a:  jmp    0834d5d7 <+0x261>
0834d4d5 +0x15f:  mov    %ebx,-0x1c(%ebp)
0834d4d8 +0x162:  lea    -0x54c(%ebp),%eax
0834d4de +0x168:  mov    %eax,0x4(%esp)
0834d4e2 +0x16c:  mov    -0x1c(%ebp),%eax
0834d4e5 +0x16f:  mov    %eax,(%esp)
0834d4e8 +0x172:  call   0834acc4 <_ZN8CDungeon11set_dungeonER15STDungeonScript>  ; CDungeon::set_dungeon(STDungeonScript&)
0834d4ed +0x177:  mov    -0x1c(%ebp),%eax
0834d4f0 +0x17a:  mov    %eax,0x4(%esp)
0834d4f4 +0x17e:  mov    0x8(%ebp),%eax
0834d4f7 +0x181:  mov    %eax,(%esp)
0834d4fa +0x184:  call   0834d6cc <_ZN12CDungeonList14insert_dungeonEP8CDungeon>  ; CDungeonList::insert_dungeon(CDungeon*)
0834d4ff +0x189:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0834d504 +0x18e:  mov    %eax,(%esp)
0834d507 +0x191:  call   08298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>  ; CGameManager::GetQuickPartySystemManager()
0834d50c +0x196:  mov    -0x1c(%ebp),%edx
0834d50f +0x199:  mov    %edx,0x4(%esp)
0834d513 +0x19d:  mov    %eax,(%esp)
0834d516 +0x1a0:  call   08269c0c <_ZN10QuickParty24CQuickPartySystemManager21init_quick_party_poolEPK8CDungeon>  ; QuickParty::CQuickPartySystemManager::init_quick_party_pool(CDungeon const*)
0834d51b +0x1a5:  mov    0x8(%ebp),%eax
0834d51e +0x1a8:  mov    %eax,(%esp)
0834d521 +0x1ab:  call   08374698 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe664>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe664
0834d526 +0x1b0:  cmp    $0x3e8,%eax
0834d52b +0x1b5:  setg   %al
0834d52e +0x1b8:  test   %al,%al
0834d530 +0x1ba:  je     0834d580 <+0x20a>
0834d532 +0x1bc:  mov    0x8(%ebp),%eax
0834d535 +0x1bf:  mov    %eax,(%esp)
0834d538 +0x1c2:  call   08374698 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe664>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe664
0834d53d +0x1c7:  mov    %eax,%ebx
0834d53f +0x1c9:  movl   $0x5,0xc(%esp)
0834d547 +0x1d1:  movl   $0x8ec,0x8(%esp)
0834d54f +0x1d9:  movl   $&_ZZN12CDungeonList9load_listEvE19__PRETTY_FUNCTION__,0x4(%esp)
0834d557 +0x1e1:  lea    -0x34(%ebp),%eax
0834d55a +0x1e4:  mov    %eax,(%esp)
0834d55d +0x1e7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0834d562 +0x1ec:  mov    %ebx,0x8(%esp)
0834d566 +0x1f0:  movl   $"Best Clear Time Save Dungeon Index Over Error: %d\n",0x4(%esp)
0834d56e +0x1f8:  lea    -0x34(%ebp),%eax
0834d571 +0x1fb:  mov    %eax,(%esp)
0834d574 +0x1fe:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0834d579 +0x203:  mov    $0x0,%ebx
0834d57e +0x208:  jmp    0834d5f5 <+0x27f>
0834d580 +0x20a:  lea    -0x24(%ebp),%eax
0834d583 +0x20d:  movl   $0x0,0x8(%esp)
0834d58b +0x215:  lea    -0x3c(%ebp),%edx
0834d58e +0x218:  mov    %edx,0x4(%esp)
0834d592 +0x21c:  mov    %eax,(%esp)
0834d595 +0x21f:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
0834d59a +0x224:  sub    $0x4,%esp
0834d59d +0x227:  lea    -0x38(%ebp),%eax
0834d5a0 +0x22a:  movl   $&g_stDungeonScriptFileList,0x4(%esp)
0834d5a8 +0x232:  mov    %eax,(%esp)
0834d5ab +0x235:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
0834d5b0 +0x23a:  sub    $0x4,%esp
0834d5b3 +0x23d:  lea    -0x38(%ebp),%eax
0834d5b6 +0x240:  mov    %eax,0x4(%esp)
0834d5ba +0x244:  lea    -0x3c(%ebp),%eax
0834d5bd +0x247:  mov    %eax,(%esp)
0834d5c0 +0x24a:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
0834d5c5 +0x24f:  test   %al,%al
0834d5c7 +0x251:  jne    0834d3d0 <+0x5a>
0834d5cd +0x257:  jmp    0834d5d0 <+0x25a>
0834d5cf +0x259:  nop
0834d5d0 +0x25a:  mov    $0x1,%ebx
0834d5d5 +0x25f:  jmp    0834d5f5 <+0x27f>
0834d5d7 +0x261:  mov    %edx,%ebx
0834d5d9 +0x263:  mov    %eax,%esi
0834d5db +0x265:  lea    -0x54c(%ebp),%eax
0834d5e1 +0x26b:  mov    %eax,(%esp)
0834d5e4 +0x26e:  call   0836bd5c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x5d28>  ; global constructors keyed to CServerEvent::m_nExpRate+0x5d28
0834d5e9 +0x273:  mov    %esi,%eax
0834d5eb +0x275:  mov    %ebx,%edx
0834d5ed +0x277:  mov    %eax,(%esp)
0834d5f0 +0x27a:  call   08ae3750 <_Unwind_Resume>
0834d5f5 +0x27f:  lea    -0x54c(%ebp),%eax
0834d5fb +0x285:  mov    %eax,(%esp)
0834d5fe +0x288:  call   0836bd5c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x5d28>  ; global constructors keyed to CServerEvent::m_nExpRate+0x5d28
0834d603 +0x28d:  mov    %ebx,%eax
0834d605 +0x28f:  lea    -0xc(%ebp),%esp
0834d608 +0x292:  add    $0x0,%esp
0834d60b +0x295:  pop    %ebx
0834d60c +0x296:  pop    %esi
0834d60d +0x297:  pop    %edi
0834d60e +0x298:  pop    %ebp
0834d60f +0x299:  ret
```

## 反编译 C

```c
// CDungeonList::load_list @ 0x834d376

/* CDungeonList::load_list() */

undefined4 __thiscall CDungeonList::load_list(CDungeonList *this)

{
  char cVar1;
  int iVar2;
  CDungeon_TowerOfDespair *this_00;
  CDungeon *this_01;
  CGameManager *this_02;
  CQuickPartySystemManager *this_03;
  undefined4 uVar3;
  undefined4 local_560 [4];
  STDungeonScript local_550 [681];
  char local_2a7;
  vector<_DailySchedule,std::allocator<_DailySchedule>> avStack_238 [504];
  undefined4 local_40;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_3c [4];
  cMyTrace local_38 [16];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_28 [4];
  char *local_24;
  CDungeon *local_20;
  
  local_24 = (char *)0x0;
  STDungeonScript::STDungeonScript(local_550);
  local_20 = (CDungeon *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_40);
                    /* try { // try from 0834d3ba to 0834d47b has its CatchHandler @ 0834d5d7 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_560);
  local_40 = local_560[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_3c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_40,
                       (_Rb_tree_iterator *)local_3c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_40);
    local_24 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_24 == (char *)0x0) break;
    cVar1 = ImportDungeonScript(local_550,local_24);
    if (cVar1 != '\x01') {
      printf("Dungeon Script Error: %s\n",local_24);
      uVar3 = 0;
      goto LAB_0834d5f5;
    }
    iVar2 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size(avStack_238);
    if (iVar2 != 0) {
      CDailyScheduleManager::AddDailSchedule
                (GlobalData::s_DailyScheduleManager,(vector *)avStack_238);
    }
    if (local_2a7 == '\0') {
                    /* try { // try from 0834d4ad to 0834d4b1 has its CatchHandler @ 0834d5d7 */
      this_01 = operator_new(0x934);
                    /* try { // try from 0834d4b9 to 0834d4bd has its CatchHandler @ 0834d4c0 */
      CDungeon::CDungeon(this_01);
      local_20 = this_01;
    }
    else {
      this_00 = operator_new(0x934);
                    /* try { // try from 0834d483 to 0834d487 has its CatchHandler @ 0834d48a */
      CDungeon_TowerOfDespair::CDungeon_TowerOfDespair(this_00);
      local_20 = (CDungeon *)this_00;
    }
                    /* try { // try from 0834d4e8 to 0834d5af has its CatchHandler @ 0834d5d7 */
    CDungeon::set_dungeon(local_20,local_550);
    insert_dungeon(this,local_20);
    this_02 = (CGameManager *)G_CGameManager();
    this_03 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_02);
    QuickParty::CQuickPartySystemManager::init_quick_party_pool(this_03,local_20);
    iVar2 = size(this);
    if (1000 < iVar2) {
      uVar3 = size(this);
      cMyTrace::cMyTrace(local_38,"bool CDungeonList::load_list()",0x8ec,5);
      cMyTrace::operator()(local_38,"Best Clear Time Save Dungeon Index Over Error: %d\n",uVar3);
      uVar3 = 0;
      goto LAB_0834d5f5;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_28,(int)&local_40);
  }
  uVar3 = 1;
LAB_0834d5f5:
  STDungeonScript::~STDungeonScript(local_550);
  return uVar3;
}
```
