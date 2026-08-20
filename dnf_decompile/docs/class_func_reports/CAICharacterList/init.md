# init

`_ZN16CAICharacterList4initEv`

`CAICharacterList::init()`

| 类 | 地址 |
|---|---|
| `CAICharacterList` | `0x0834a28c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834a28c  _ZN16CAICharacterList4initEv
#           CAICharacterList::init()
# range [0x0834a28c, 0x0834a599]
0834a28c +0x000:  push   %ebp
0834a28d +0x001:  mov    %esp,%ebp
0834a28f +0x003:  push   %edi
0834a290 +0x004:  push   %esi
0834a291 +0x005:  push   %ebx
0834a292 +0x006:  sub    $0x106c,%esp
0834a298 +0x00c:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0834a29d +0x011:  mov    %eax,(%esp)
0834a2a0 +0x014:  call   0862630e <_ZN11sync_script11CSyncScript31truncate_aicharacter_info_tableEv>  ; sync_script::CSyncScript::truncate_aicharacter_info_table()
0834a2a5 +0x019:  xor    $0x1,%eax
0834a2a8 +0x01c:  test   %al,%al
0834a2aa +0x01e:  je     0834a2c2 <+0x36>
0834a2ac +0x020:  movl   $"Fail truncate_aicharacter_info_table",(%esp)
0834a2b3 +0x027:  call   0807e570 <_init+0xe68>
0834a2b8 +0x02c:  mov    $0x0,%ebx
0834a2bd +0x031:  jmp    0834a58c <+0x300>
0834a2c2 +0x036:  mov    0x8(%ebp),%eax
0834a2c5 +0x039:  movl   $0x7fffffff,0x4bc(%eax)
0834a2cf +0x043:  movl   $0x0,-0x2c(%ebp)
0834a2d6 +0x04a:  lea    -0x38(%ebp),%eax
0834a2d9 +0x04d:  mov    %eax,(%esp)
0834a2dc +0x050:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
0834a2e1 +0x055:  lea    -0x104c(%ebp),%eax
0834a2e7 +0x05b:  mov    %eax,(%esp)
0834a2ea +0x05e:  call   088c8a78 <_ZN25STAICharacterCommonScriptC1Ev>  ; STAICharacterCommonScript::STAICharacterCommonScript()
0834a2ef +0x063:  lea    -0x105c(%ebp),%eax
0834a2f5 +0x069:  movl   $&g_aiCharacterScriptFileList,0x4(%esp)
0834a2fd +0x071:  mov    %eax,(%esp)
0834a300 +0x074:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
0834a305 +0x079:  sub    $0x4,%esp
0834a308 +0x07c:  mov    -0x105c(%ebp),%eax
0834a30e +0x082:  mov    %eax,-0x38(%ebp)
0834a311 +0x085:  jmp    0834a526 <+0x29a>
0834a316 +0x08a:  lea    -0x38(%ebp),%eax
0834a319 +0x08d:  mov    %eax,(%esp)
0834a31c +0x090:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
0834a321 +0x095:  add    $0x4,%eax
0834a324 +0x098:  mov    %eax,(%esp)
0834a327 +0x09b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0834a32c +0x0a0:  mov    %eax,-0x2c(%ebp)
0834a32f +0x0a3:  cmpl   $0x0,-0x2c(%ebp)
0834a333 +0x0a7:  je     0834a558 <+0x2cc>
0834a339 +0x0ad:  lea    -0x104c(%ebp),%eax
0834a33f +0x0b3:  mov    %eax,(%esp)
0834a342 +0x0b6:  call   088c9592 <_ZN25STAICharacterCommonScript5clearEv>  ; STAICharacterCommonScript::clear()
0834a347 +0x0bb:  movl   $0x74,(%esp)
0834a34e +0x0c2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0834a353 +0x0c7:  mov    %eax,%ebx
0834a355 +0x0c9:  mov    %ebx,%eax
0834a357 +0x0cb:  mov    %eax,(%esp)
0834a35a +0x0ce:  call   08373a9a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xda66>  ; global constructors keyed to CServerEvent::m_nExpRate+0xda66
0834a35f +0x0d3:  jmp    0834a376 <+0xea>
0834a361 +0x0d5:  mov    %edx,%esi
0834a363 +0x0d7:  mov    %eax,%edi
0834a365 +0x0d9:  mov    %ebx,(%esp)
0834a368 +0x0dc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0834a36d +0x0e1:  mov    %edi,%eax
0834a36f +0x0e3:  mov    %esi,%edx
0834a371 +0x0e5:  jmp    0834a560 <+0x2d4>
0834a376 +0x0ea:  mov    %ebx,-0x28(%ebp)
0834a379 +0x0ed:  movl   $0x0,0x8(%esp)
0834a381 +0x0f5:  mov    -0x2c(%ebp),%eax
0834a384 +0x0f8:  mov    %eax,0x4(%esp)
0834a388 +0x0fc:  lea    -0x104c(%ebp),%eax
0834a38e +0x102:  mov    %eax,(%esp)
0834a391 +0x105:  call   088c9ccc <_Z29importAICharacterCommonScriptP25STAICharacterCommonScriptPKcb>  ; importAICharacterCommonScript(STAICharacterCommonScript*, char const*, bool)
0834a396 +0x10a:  xor    $0x1,%eax
0834a399 +0x10d:  test   %al,%al
0834a39b +0x10f:  je     0834a3d1 <+0x145>
0834a39d +0x111:  mov    -0x2c(%ebp),%eax
0834a3a0 +0x114:  mov    %eax,0x4(%esp)
0834a3a4 +0x118:  movl   $"AI charac Script Error: %s\n",(%esp)
0834a3ab +0x11f:  call   0807db60 <_init+0x458>
0834a3b0 +0x124:  mov    -0x28(%ebp),%ebx
0834a3b3 +0x127:  test   %ebx,%ebx
0834a3b5 +0x129:  je     0834a3c7 <+0x13b>
0834a3b7 +0x12b:  mov    %ebx,(%esp)
0834a3ba +0x12e:  call   08373b32 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdafe>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdafe
0834a3bf +0x133:  mov    %ebx,(%esp)
0834a3c2 +0x136:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0834a3c7 +0x13b:  mov    $0x0,%ebx
0834a3cc +0x140:  jmp    0834a57e <+0x2f2>
0834a3d1 +0x145:  mov    -0x2c(%ebp),%eax
0834a3d4 +0x148:  mov    %eax,0x4(%esp)
0834a3d8 +0x14c:  movl   $&g_aiCharacterScriptFileList,(%esp)
0834a3df +0x153:  call   088bae56 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc>  ; STScriptFileList::FindIndexByFullScan(char const*) const
0834a3e4 +0x158:  mov    %eax,-0x24(%ebp)
0834a3e7 +0x15b:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0834a3ec +0x160:  lea    -0x104c(%ebp),%edx
0834a3f2 +0x166:  mov    %edx,0x8(%esp)
0834a3f6 +0x16a:  mov    -0x24(%ebp),%edx
0834a3f9 +0x16d:  mov    %edx,0x4(%esp)
0834a3fd +0x171:  mov    %eax,(%esp)
0834a400 +0x174:  call   08626392 <_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript>  ; sync_script::CSyncScript::insert_aicharacter_info_to_db(int, STAICharacterCommonScript const&)
0834a405 +0x179:  xor    $0x1,%eax
0834a408 +0x17c:  test   %al,%al
0834a40a +0x17e:  je     0834a429 <+0x19d>
0834a40c +0x180:  mov    -0x2c(%ebp),%eax
0834a40f +0x183:  mov    %eax,0x4(%esp)
0834a413 +0x187:  movl   $"insert_aicharacter_category Error: %s\n",(%esp)
0834a41a +0x18e:  call   0807db60 <_init+0x458>
0834a41f +0x193:  mov    $0x0,%ebx
0834a424 +0x198:  jmp    0834a57e <+0x2f2>
0834a429 +0x19d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0834a42e +0x1a2:  add    $0xa890,%eax
0834a433 +0x1a7:  mov    %eax,-0x20(%ebp)
0834a436 +0x1aa:  movl   $0x0,-0x1c(%ebp)
0834a43d +0x1b1:  jmp    0834a4b2 <+0x226>
0834a43f +0x1b3:  mov    -0x1c(%ebp),%eax
0834a442 +0x1b6:  mov    %eax,0x4(%esp)
0834a446 +0x1ba:  mov    -0x20(%ebp),%eax
0834a449 +0x1bd:  mov    %eax,(%esp)
0834a44c +0x1c0:  call   083887f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18290>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18290
0834a451 +0x1c5:  mov    (%eax),%eax
0834a453 +0x1c7:  cmp    $0x1,%eax
0834a456 +0x1ca:  jne    0834a479 <+0x1ed>
0834a458 +0x1cc:  mov    -0x1c(%ebp),%eax
0834a45b +0x1cf:  mov    %eax,0x4(%esp)
0834a45f +0x1d3:  mov    -0x20(%ebp),%eax
0834a462 +0x1d6:  mov    %eax,(%esp)
0834a465 +0x1d9:  call   083887f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18290>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18290
0834a46a +0x1de:  mov    0x4(%eax),%eax
0834a46d +0x1e1:  cmp    -0x24(%ebp),%eax
0834a470 +0x1e4:  jne    0834a479 <+0x1ed>
0834a472 +0x1e6:  mov    $0x1,%eax
0834a477 +0x1eb:  jmp    0834a47e <+0x1f2>
0834a479 +0x1ed:  mov    $0x0,%eax
0834a47e +0x1f2:  test   %al,%al
0834a480 +0x1f4:  je     0834a4ae <+0x222>
0834a482 +0x1f6:  mov    -0x1c(%ebp),%eax
0834a485 +0x1f9:  mov    %eax,0x4(%esp)
0834a489 +0x1fd:  mov    -0x20(%ebp),%eax
0834a48c +0x200:  mov    %eax,(%esp)
0834a48f +0x203:  call   083887f0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18290>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18290
0834a494 +0x208:  add    $0x8,%eax
0834a497 +0x20b:  mov    %eax,0x4(%esp)
0834a49b +0x20f:  lea    -0x104c(%ebp),%eax
0834a4a1 +0x215:  add    $0xf2c,%eax
0834a4a6 +0x21a:  mov    %eax,(%esp)
0834a4a9 +0x21d:  call   0838880a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x182aa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x182aa
0834a4ae +0x222:  addl   $0x1,-0x1c(%ebp)
0834a4b2 +0x226:  mov    -0x20(%ebp),%eax
0834a4b5 +0x229:  mov    %eax,(%esp)
0834a4b8 +0x22c:  call   083887ce <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1826e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1826e
0834a4bd +0x231:  cmp    -0x1c(%ebp),%eax
0834a4c0 +0x234:  setg   %al
0834a4c3 +0x237:  test   %al,%al
0834a4c5 +0x239:  jne    0834a43f <+0x1b3>
0834a4cb +0x23f:  mov    -0x2c(%ebp),%eax
0834a4ce +0x242:  mov    %eax,0x4(%esp)
0834a4d2 +0x246:  movl   $&g_aiCharacterScriptFileList,(%esp)
0834a4d9 +0x24d:  call   088bae56 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc>  ; STScriptFileList::FindIndexByFullScan(char const*) const
0834a4de +0x252:  lea    -0x104c(%ebp),%edx
0834a4e4 +0x258:  mov    %edx,0x8(%esp)
0834a4e8 +0x25c:  mov    %eax,0x4(%esp)
0834a4ec +0x260:  mov    -0x28(%ebp),%eax
0834a4ef +0x263:  mov    %eax,(%esp)
0834a4f2 +0x266:  call   0834a066 <_ZN12CAICharacter3setEiRK25STAICharacterCommonScript>  ; CAICharacter::set(int, STAICharacterCommonScript const&)
0834a4f7 +0x26b:  mov    -0x28(%ebp),%eax
0834a4fa +0x26e:  mov    %eax,0x4(%esp)
0834a4fe +0x272:  mov    0x8(%ebp),%eax
0834a501 +0x275:  mov    %eax,(%esp)
0834a504 +0x278:  call   0834a61c <_ZN16CAICharacterList4_addEP12CAICharacter>  ; CAICharacterList::_add(CAICharacter*)
0834a509 +0x27d:  lea    -0x30(%ebp),%eax
0834a50c +0x280:  movl   $0x0,0x8(%esp)
0834a514 +0x288:  lea    -0x38(%ebp),%edx
0834a517 +0x28b:  mov    %edx,0x4(%esp)
0834a51b +0x28f:  mov    %eax,(%esp)
0834a51e +0x292:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
0834a523 +0x297:  sub    $0x4,%esp
0834a526 +0x29a:  lea    -0x34(%ebp),%eax
0834a529 +0x29d:  movl   $&g_aiCharacterScriptFileList,0x4(%esp)
0834a531 +0x2a5:  mov    %eax,(%esp)
0834a534 +0x2a8:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
0834a539 +0x2ad:  sub    $0x4,%esp
0834a53c +0x2b0:  lea    -0x34(%ebp),%eax
0834a53f +0x2b3:  mov    %eax,0x4(%esp)
0834a543 +0x2b7:  lea    -0x38(%ebp),%eax
0834a546 +0x2ba:  mov    %eax,(%esp)
0834a549 +0x2bd:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
0834a54e +0x2c2:  test   %al,%al
0834a550 +0x2c4:  jne    0834a316 <+0x8a>
0834a556 +0x2ca:  jmp    0834a559 <+0x2cd>
0834a558 +0x2cc:  nop
0834a559 +0x2cd:  mov    $0x1,%ebx
0834a55e +0x2d2:  jmp    0834a57e <+0x2f2>
0834a560 +0x2d4:  mov    %edx,%ebx
0834a562 +0x2d6:  mov    %eax,%esi
0834a564 +0x2d8:  lea    -0x104c(%ebp),%eax
0834a56a +0x2de:  mov    %eax,(%esp)
0834a56d +0x2e1:  call   088c903c <_ZN25STAICharacterCommonScriptD1Ev>  ; STAICharacterCommonScript::~STAICharacterCommonScript()
0834a572 +0x2e6:  mov    %esi,%eax
0834a574 +0x2e8:  mov    %ebx,%edx
0834a576 +0x2ea:  mov    %eax,(%esp)
0834a579 +0x2ed:  call   08ae3750 <_Unwind_Resume>
0834a57e +0x2f2:  lea    -0x104c(%ebp),%eax
0834a584 +0x2f8:  mov    %eax,(%esp)
0834a587 +0x2fb:  call   088c903c <_ZN25STAICharacterCommonScriptD1Ev>  ; STAICharacterCommonScript::~STAICharacterCommonScript()
0834a58c +0x300:  mov    %ebx,%eax
0834a58e +0x302:  lea    -0xc(%ebp),%esp
0834a591 +0x305:  add    $0x0,%esp
0834a594 +0x308:  pop    %ebx
0834a595 +0x309:  pop    %esi
0834a596 +0x30a:  pop    %edi
0834a597 +0x30b:  pop    %ebp
0834a598 +0x30c:  ret
0834a599 +0x30d:  nop
```

## 反编译 C

```c
// CAICharacterList::init @ 0x834a28c

/* CAICharacterList::init() */

undefined4 __thiscall CAICharacterList::init(CAICharacterList *this)

{
  bool bVar1;
  char cVar2;
  CSyncScript *pCVar3;
  int iVar4;
  CAICharacter *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_1060 [4];
  STAICharacterCommonScript local_1050 [3884];
  vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> avStack_124 [232];
  undefined4 local_3c;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_34 [4];
  char *local_30;
  CAICharacter *local_2c;
  int local_28;
  vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>> *local_24;
  uint local_20;
  
  pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  cVar2 = sync_script::CSyncScript::truncate_aicharacter_info_table(pCVar3);
  if (cVar2 == '\x01') {
    *(undefined4 *)(this + 0x4bc) = 0x7fffffff;
    local_30 = (char *)0x0;
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c);
    STAICharacterCommonScript::STAICharacterCommonScript(local_1050);
                    /* try { // try from 0834a300 to 0834a352 has its CatchHandler @ 0834a560 */
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                *)local_1060);
    local_3c = local_1060[0];
    while( true ) {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_38);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c,
                         (_Rb_tree_iterator *)local_38);
      if (cVar2 == '\0') break;
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c);
      local_30 = (char *)std::string::c_str((string *)(iVar4 + 4));
      if (local_30 == (char *)0x0) break;
      STAICharacterCommonScript::clear(local_1050);
      pCVar5 = operator_new(0x74);
                    /* try { // try from 0834a35a to 0834a35e has its CatchHandler @ 0834a361 */
      CAICharacter::CAICharacter(pCVar5);
      local_2c = pCVar5;
                    /* try { // try from 0834a391 to 0834a538 has its CatchHandler @ 0834a560 */
      cVar2 = importAICharacterCommonScript(local_1050,local_30,false);
      if (cVar2 != '\x01') {
        printf("AI charac Script Error: %s\n",local_30);
        pCVar5 = local_2c;
        if (local_2c != (CAICharacter *)0x0) {
          CAICharacter::~CAICharacter(local_2c);
          operator_delete(pCVar5);
        }
        uVar7 = 0;
        goto LAB_0834a57e;
      }
      local_28 = STScriptFileList::FindIndexByFullScan
                           ((STScriptFileList *)g_aiCharacterScriptFileList,local_30);
      pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar2 = sync_script::CSyncScript::insert_aicharacter_info_to_db(pCVar3,local_28,local_1050);
      if (cVar2 != '\x01') {
        printf("insert_aicharacter_category Error: %s\n",local_30);
        uVar7 = 0;
        goto LAB_0834a57e;
      }
      iVar4 = G_CDataManager();
      local_24 = (vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>> *)
                 (iVar4 + 0xa890);
      local_20 = 0;
      while (iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::size
                               (local_24), (int)local_20 < iVar4) {
        piVar6 = (int *)std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                        operator[](local_24,local_20);
        if ((*piVar6 == 1) &&
           (iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                    operator[](local_24,local_20), *(int *)(iVar4 + 4) == local_28)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                  operator[](local_24,local_20);
          std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::
          push_back(avStack_124,(stMonsterIndependentDrop_t *)(iVar4 + 8));
        }
        local_20 = local_20 + 1;
      }
      iVar4 = STScriptFileList::FindIndexByFullScan
                        ((STScriptFileList *)g_aiCharacterScriptFileList,local_30);
      CAICharacter::set(local_2c,iVar4,local_1050);
      _add(this,local_2c);
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_34,(int)&local_3c);
    }
    uVar7 = 1;
LAB_0834a57e:
    STAICharacterCommonScript::~STAICharacterCommonScript(local_1050);
  }
  else {
    puts("Fail truncate_aicharacter_info_table");
    uVar7 = 0;
  }
  return uVar7;
}
```
