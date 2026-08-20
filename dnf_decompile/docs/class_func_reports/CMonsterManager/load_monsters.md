# load_monsters

`_ZN15CMonsterManager13load_monstersEv`

`CMonsterManager::load_monsters()`

| 类 | 地址 |
|---|---|
| `CMonsterManager` | `0x0834fa84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834fa84  _ZN15CMonsterManager13load_monstersEv
#           CMonsterManager::load_monsters()
# range [0x0834fa84, 0x0834fdab]
0834fa84 +0x000:  push   %ebp
0834fa85 +0x001:  mov    %esp,%ebp
0834fa87 +0x003:  push   %edi
0834fa88 +0x004:  push   %esi
0834fa89 +0x005:  push   %ebx
0834fa8a +0x006:  sub    $0x1d1c,%esp
0834fa90 +0x00c:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0834fa95 +0x011:  mov    %eax,(%esp)
0834fa98 +0x014:  call   086260dc <_ZN11sync_script11CSyncScript27truncate_monster_info_tableEv>  ; sync_script::CSyncScript::truncate_monster_info_table()
0834fa9d +0x019:  xor    $0x1,%eax
0834faa0 +0x01c:  test   %al,%al
0834faa2 +0x01e:  je     0834faba <+0x36>
0834faa4 +0x020:  movl   $"Fail truncate_monster_info_table",(%esp)
0834faab +0x027:  call   0807e570 <_init+0xe68>
0834fab0 +0x02c:  mov    $0x0,%ebx
0834fab5 +0x031:  jmp    0834fd9e <+0x31a>
0834faba +0x036:  movl   $0x0,-0x2c(%ebp)
0834fac1 +0x03d:  movl   $0x0,-0x28(%ebp)
0834fac8 +0x044:  lea    -0x38(%ebp),%eax
0834facb +0x047:  mov    %eax,(%esp)
0834face +0x04a:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
0834fad3 +0x04f:  lea    -0x3c(%ebp),%eax
0834fad6 +0x052:  mov    %eax,(%esp)
0834fad9 +0x055:  call   0838f320 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1edc0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1edc0
0834fade +0x05a:  lea    -0x1d0c(%ebp),%eax
0834fae4 +0x060:  movl   $&g_stMonsterScriptFileList,0x4(%esp)
0834faec +0x068:  mov    %eax,(%esp)
0834faef +0x06b:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
0834faf4 +0x070:  sub    $0x4,%esp
0834faf7 +0x073:  mov    -0x1d0c(%ebp),%eax
0834fafd +0x079:  mov    %eax,-0x38(%ebp)
0834fb00 +0x07c:  jmp    0834fd66 <+0x2e2>
0834fb05 +0x081:  lea    -0x38(%ebp),%eax
0834fb08 +0x084:  mov    %eax,(%esp)
0834fb0b +0x087:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
0834fb10 +0x08c:  add    $0x4,%eax
0834fb13 +0x08f:  mov    %eax,(%esp)
0834fb16 +0x092:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0834fb1b +0x097:  mov    %eax,-0x2c(%ebp)
0834fb1e +0x09a:  cmpl   $0x0,-0x2c(%ebp)
0834fb22 +0x09e:  je     0834fd98 <+0x314>
0834fb28 +0x0a4:  lea    -0x1d00(%ebp),%eax
0834fb2e +0x0aa:  mov    %eax,(%esp)
0834fb31 +0x0ad:  call   08368e14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x2de0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x2de0
0834fb36 +0x0b2:  movl   $0x0,0xc(%esp)
0834fb3e +0x0ba:  mov    -0x2c(%ebp),%eax
0834fb41 +0x0bd:  mov    %eax,0x8(%esp)
0834fb45 +0x0c1:  movl   $0x3,0x4(%esp)
0834fb4d +0x0c9:  lea    -0x1d00(%ebp),%eax
0834fb53 +0x0cf:  mov    %eax,(%esp)
0834fb56 +0x0d2:  call   08a12827 <_Z19ImportMonsterScriptP15STMonsterScriptiPKcb>  ; ImportMonsterScript(STMonsterScript*, int, char const*, bool)
0834fb5b +0x0d7:  xor    $0x1,%eax
0834fb5e +0x0da:  test   %al,%al
0834fb60 +0x0dc:  je     0834fb84 <+0x100>
0834fb62 +0x0de:  mov    -0x2c(%ebp),%eax
0834fb65 +0x0e1:  mov    %eax,0x4(%esp)
0834fb69 +0x0e5:  movl   $"Monster Script Error: %s\n",(%esp)
0834fb70 +0x0ec:  call   0807db60 <_init+0x458>
0834fb75 +0x0f1:  mov    $0x0,%ebx
0834fb7a +0x0f6:  mov    $0x0,%esi
0834fb7f +0x0fb:  jmp    0834fd54 <+0x2d0>
0834fb84 +0x100:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0834fb89 +0x105:  lea    -0x1d00(%ebp),%edx
0834fb8f +0x10b:  mov    %edx,0x4(%esp)
0834fb93 +0x10f:  mov    %eax,(%esp)
0834fb96 +0x112:  call   08626160 <_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript>  ; sync_script::CSyncScript::insert_monster_info_to_db(STMonsterScript const&)
0834fb9b +0x117:  xor    $0x1,%eax
0834fb9e +0x11a:  test   %al,%al
0834fba0 +0x11c:  je     0834fbc4 <+0x140>
0834fba2 +0x11e:  mov    -0x2c(%ebp),%eax
0834fba5 +0x121:  mov    %eax,0x4(%esp)
0834fba9 +0x125:  movl   $"insert_monster_category Error: %s\n",(%esp)
0834fbb0 +0x12c:  call   0807db60 <_init+0x458>
0834fbb5 +0x131:  mov    $0x0,%ebx
0834fbba +0x136:  mov    $0x0,%esi
0834fbbf +0x13b:  jmp    0834fd54 <+0x2d0>
0834fbc4 +0x140:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0834fbc9 +0x145:  add    $0xa890,%eax
0834fbce +0x14a:  mov    %eax,-0x24(%ebp)
0834fbd1 +0x14d:  movl   $0x0,-0x20(%ebp)
0834fbd8 +0x154:  jmp    0834fc51 <+0x1cd>
0834fbda +0x156:  mov    -0x20(%ebp),%eax
0834fbdd +0x159:  mov    %eax,0x4(%esp)
0834fbe1 +0x15d:  mov    -0x24(%ebp),%eax
0834fbe4 +0x160:  mov    %eax,(%esp)
0834fbe7 +0x163:  call   083887f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18290>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18290
0834fbec +0x168:  mov    (%eax),%eax
0834fbee +0x16a:  test   %eax,%eax
0834fbf0 +0x16c:  jne    0834fc18 <+0x194>
0834fbf2 +0x16e:  mov    -0x20(%ebp),%eax
0834fbf5 +0x171:  mov    %eax,0x4(%esp)
0834fbf9 +0x175:  mov    -0x24(%ebp),%eax
0834fbfc +0x178:  mov    %eax,(%esp)
0834fbff +0x17b:  call   083887f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18290>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18290
0834fc04 +0x180:  mov    0x4(%eax),%edx
0834fc07 +0x183:  mov    -0x1d00(%ebp),%eax
0834fc0d +0x189:  cmp    %eax,%edx
0834fc0f +0x18b:  jne    0834fc18 <+0x194>
0834fc11 +0x18d:  mov    $0x1,%eax
0834fc16 +0x192:  jmp    0834fc1d <+0x199>
0834fc18 +0x194:  mov    $0x0,%eax
0834fc1d +0x199:  test   %al,%al
0834fc1f +0x19b:  je     0834fc4d <+0x1c9>
0834fc21 +0x19d:  mov    -0x20(%ebp),%eax
0834fc24 +0x1a0:  mov    %eax,0x4(%esp)
0834fc28 +0x1a4:  mov    -0x24(%ebp),%eax
0834fc2b +0x1a7:  mov    %eax,(%esp)
0834fc2e +0x1aa:  call   083887f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18290>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18290
0834fc33 +0x1af:  add    $0x8,%eax
0834fc36 +0x1b2:  mov    %eax,0x4(%esp)
0834fc3a +0x1b6:  lea    -0x1d00(%ebp),%eax
0834fc40 +0x1bc:  add    $0x3ac,%eax
0834fc45 +0x1c1:  mov    %eax,(%esp)
0834fc48 +0x1c4:  call   0838880a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x182aa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x182aa
0834fc4d +0x1c9:  addl   $0x1,-0x20(%ebp)
0834fc51 +0x1cd:  mov    -0x24(%ebp),%eax
0834fc54 +0x1d0:  mov    %eax,(%esp)
0834fc57 +0x1d3:  call   083887ce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1826e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1826e
0834fc5c +0x1d8:  cmp    -0x20(%ebp),%eax
0834fc5f +0x1db:  setg   %al
0834fc62 +0x1de:  test   %al,%al
0834fc64 +0x1e0:  jne    0834fbda <+0x156>
0834fc6a +0x1e6:  movl   $0x1d28,(%esp)
0834fc71 +0x1ed:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0834fc76 +0x1f2:  mov    %eax,%esi
0834fc78 +0x1f4:  mov    %esi,%eax
0834fc7a +0x1f6:  mov    %eax,(%esp)
0834fc7d +0x1f9:  call   08379ea4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9944>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9944
0834fc82 +0x1fe:  jmp    0834fc99 <+0x215>
0834fc84 +0x200:  mov    %edx,%ebx
0834fc86 +0x202:  mov    %eax,%edi
0834fc88 +0x204:  mov    %esi,(%esp)
0834fc8b +0x207:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0834fc90 +0x20c:  mov    %edi,%eax
0834fc92 +0x20e:  mov    %ebx,%edx
0834fc94 +0x210:  jmp    0834fd36 <+0x2b2>
0834fc99 +0x215:  mov    %esi,-0x28(%ebp)
0834fc9c +0x218:  lea    -0x1d00(%ebp),%eax
0834fca2 +0x21e:  mov    %eax,0x4(%esp)
0834fca6 +0x222:  mov    -0x28(%ebp),%eax
0834fca9 +0x225:  mov    %eax,(%esp)
0834fcac +0x228:  call   0834f650 <_ZN8CMonster11set_monsterER15STMonsterScript>  ; CMonster::set_monster(STMonsterScript&)
0834fcb1 +0x22d:  mov    -0x1914(%ebp),%eax
0834fcb7 +0x233:  mov    %eax,-0x1c(%ebp)
0834fcba +0x236:  jmp    0834fce1 <+0x25d>
0834fcbc +0x238:  mov    -0x28(%ebp),%eax
0834fcbf +0x23b:  mov    %eax,(%esp)
0834fcc2 +0x23e:  call   083748ce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe89a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe89a
0834fcc7 +0x243:  mov    %eax,0x8(%esp)
0834fccb +0x247:  mov    -0x1c(%ebp),%eax
0834fcce +0x24a:  mov    %eax,0x4(%esp)
0834fcd2 +0x24e:  mov    0x8(%ebp),%eax
0834fcd5 +0x251:  mov    %eax,(%esp)
0834fcd8 +0x254:  call   0834fdac <_ZN15CMonsterManager14insert_monsterEii>  ; CMonsterManager::insert_monster(int, int)
0834fcdd +0x259:  addl   $0x1,-0x1c(%ebp)
0834fce1 +0x25d:  mov    -0x1910(%ebp),%eax
0834fce7 +0x263:  cmp    -0x1c(%ebp),%eax
0834fcea +0x266:  setge  %al
0834fced +0x269:  test   %al,%al
0834fcef +0x26b:  jne    0834fcbc <+0x238>
0834fcf1 +0x26d:  mov    -0x28(%ebp),%eax
0834fcf4 +0x270:  mov    %eax,(%esp)
0834fcf7 +0x273:  call   083748ce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe89a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe89a
0834fcfc +0x278:  mov    -0x28(%ebp),%edx
0834fcff +0x27b:  mov    %edx,0x8(%esp)
0834fd03 +0x27f:  mov    %eax,0x4(%esp)
0834fd07 +0x283:  mov    0x8(%ebp),%eax
0834fd0a +0x286:  mov    %eax,(%esp)
0834fd0d +0x289:  call   0834fdee <_ZN15CMonsterManager14insert_monsterEiP8CMonster>  ; CMonsterManager::insert_monster(int, CMonster*)
0834fd12 +0x28e:  lea    -0x30(%ebp),%eax
0834fd15 +0x291:  movl   $0x0,0x8(%esp)
0834fd1d +0x299:  lea    -0x38(%ebp),%edx
0834fd20 +0x29c:  mov    %edx,0x4(%esp)
0834fd24 +0x2a0:  mov    %eax,(%esp)
0834fd27 +0x2a3:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
0834fd2c +0x2a8:  sub    $0x4,%esp
0834fd2f +0x2ab:  mov    $0x1,%esi
0834fd34 +0x2b0:  jmp    0834fd54 <+0x2d0>
0834fd36 +0x2b2:  mov    %edx,%ebx
0834fd38 +0x2b4:  mov    %eax,%esi
0834fd3a +0x2b6:  lea    -0x1d00(%ebp),%eax
0834fd40 +0x2bc:  mov    %eax,(%esp)
0834fd43 +0x2bf:  call   08378dac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x884c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x884c
0834fd48 +0x2c4:  mov    %esi,%eax
0834fd4a +0x2c6:  mov    %ebx,%edx
0834fd4c +0x2c8:  mov    %eax,(%esp)
0834fd4f +0x2cb:  call   08ae3750 <_Unwind_Resume>
0834fd54 +0x2d0:  lea    -0x1d00(%ebp),%eax
0834fd5a +0x2d6:  mov    %eax,(%esp)
0834fd5d +0x2d9:  call   08378dac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x884c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x884c
0834fd62 +0x2de:  test   %esi,%esi
0834fd64 +0x2e0:  je     0834fd9e <+0x31a>
0834fd66 +0x2e2:  lea    -0x34(%ebp),%eax
0834fd69 +0x2e5:  movl   $&g_stMonsterScriptFileList,0x4(%esp)
0834fd71 +0x2ed:  mov    %eax,(%esp)
0834fd74 +0x2f0:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
0834fd79 +0x2f5:  sub    $0x4,%esp
0834fd7c +0x2f8:  lea    -0x34(%ebp),%eax
0834fd7f +0x2fb:  mov    %eax,0x4(%esp)
0834fd83 +0x2ff:  lea    -0x38(%ebp),%eax
0834fd86 +0x302:  mov    %eax,(%esp)
0834fd89 +0x305:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
0834fd8e +0x30a:  test   %al,%al
0834fd90 +0x30c:  jne    0834fb05 <+0x81>
0834fd96 +0x312:  jmp    0834fd99 <+0x315>
0834fd98 +0x314:  nop
0834fd99 +0x315:  mov    $0x1,%ebx
0834fd9e +0x31a:  mov    %ebx,%eax
0834fda0 +0x31c:  lea    -0xc(%ebp),%esp
0834fda3 +0x31f:  add    $0x0,%esp
0834fda6 +0x322:  pop    %ebx
0834fda7 +0x323:  pop    %esi
0834fda8 +0x324:  pop    %edi
0834fda9 +0x325:  pop    %ebp
0834fdaa +0x326:  ret
0834fdab +0x327:  nop
```

## 反编译 C

```c
// CMonsterManager::load_monsters @ 0x834fa84

/* CMonsterManager::load_monsters() */

undefined4 __thiscall CMonsterManager::load_monsters(CMonsterManager *this)

{
  bool bVar1;
  char cVar2;
  CSyncScript *pCVar3;
  int iVar4;
  int *piVar5;
  CMonster *pCVar6;
  undefined4 unaff_EBX;
  undefined4 local_1d10 [3];
  int local_1d04 [235];
  vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> avStack_1958 [64];
  int local_1918;
  int local_1914;
  _List_iterator<int> local_40 [4];
  undefined4 local_3c;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_34 [4];
  char *local_30;
  CMonster *local_2c;
  vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>> *local_28;
  uint local_24;
  int local_20;
  
  pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  cVar2 = sync_script::CSyncScript::truncate_monster_info_table(pCVar3);
  if (cVar2 == '\x01') {
    local_30 = (char *)0x0;
    local_2c = (CMonster *)0x0;
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c);
    std::_List_iterator<int>::_List_iterator(local_40);
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                *)local_1d10);
    local_3c = local_1d10[0];
    do {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_38);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c,
                         (_Rb_tree_iterator *)local_38);
      if (cVar2 == '\0') {
        return 1;
      }
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c);
      local_30 = (char *)std::string::c_str((string *)(iVar4 + 4));
      if (local_30 == (char *)0x0) {
        return 1;
      }
      STMonsterScript::STMonsterScript((STMonsterScript *)local_1d04);
                    /* try { // try from 0834fb56 to 0834fc75 has its CatchHandler @ 0834fd36 */
      cVar2 = ImportMonsterScript((STMonsterScript *)local_1d04,3,local_30,false);
      if (cVar2 == '\x01') {
        pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
        cVar2 = sync_script::CSyncScript::insert_monster_info_to_db
                          (pCVar3,(STMonsterScript *)local_1d04);
        if (cVar2 == '\x01') {
          iVar4 = G_CDataManager();
          local_28 = (vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>> *)
                     (iVar4 + 0xa890);
          local_24 = 0;
          while (iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                         size(local_28), (int)local_24 < iVar4) {
            piVar5 = (int *)std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>
                            ::operator[](local_28,local_24);
            if ((*piVar5 == 0) &&
               (iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                        operator[](local_28,local_24), *(int *)(iVar4 + 4) == local_1d04[0])) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                      operator[](local_28,local_24);
              std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::
              push_back(avStack_1958,(stMonsterIndependentDrop_t *)(iVar4 + 8));
            }
            local_24 = local_24 + 1;
          }
          pCVar6 = operator_new(0x1d28);
                    /* try { // try from 0834fc7d to 0834fc81 has its CatchHandler @ 0834fc84 */
          CMonster::CMonster(pCVar6);
          local_2c = pCVar6;
                    /* try { // try from 0834fcac to 0834fd2b has its CatchHandler @ 0834fd36 */
          CMonster::set_monster(pCVar6,(STMonsterScript *)local_1d04);
          for (local_20 = local_1918; local_20 <= local_1914; local_20 = local_20 + 1) {
            CMonster::get_index(local_2c);
            insert_monster((int)this,local_20);
          }
          pCVar6 = (CMonster *)CMonster::get_index(local_2c);
          insert_monster((int)this,pCVar6);
          std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
                    (local_34,(int)&local_3c);
          bVar1 = true;
        }
        else {
          printf("insert_monster_category Error: %s\n",local_30);
          unaff_EBX = 0;
          bVar1 = false;
        }
      }
      else {
        printf("Monster Script Error: %s\n",local_30);
        unaff_EBX = 0;
        bVar1 = false;
      }
      STMonsterScript::~STMonsterScript((STMonsterScript *)local_1d04);
    } while (bVar1);
  }
  else {
    puts("Fail truncate_monster_info_table");
    unaff_EBX = 0;
  }
  return unaff_EBX;
}
```
