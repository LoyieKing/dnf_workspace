# load_list

`_ZN13CWorldMapList9load_listEv`

`CWorldMapList::load_list()`

| 类 | 地址 |
|---|---|
| `CWorldMapList` | `0x08364506` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08364506  _ZN13CWorldMapList9load_listEv
#           CWorldMapList::load_list()
# range [0x08364506, 0x08364693]
08364506 +0x000:  push   %ebp
08364507 +0x001:  mov    %esp,%ebp
08364509 +0x003:  push   %edi
0836450a +0x004:  push   %esi
0836450b +0x005:  push   %ebx
0836450c +0x006:  sub    $0x9c,%esp
08364512 +0x00c:  movl   $0x0,-0x20(%ebp)
08364519 +0x013:  lea    -0x80(%ebp),%eax
0836451c +0x016:  mov    %eax,(%esp)
0836451f +0x019:  call   08369f08 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x3ed4>  ; global constructors keyed to CServerEvent::m_nExpRate+0x3ed4
08364524 +0x01e:  movl   $0x0,-0x1c(%ebp)
0836452b +0x025:  lea    -0x2c(%ebp),%eax
0836452e +0x028:  mov    %eax,(%esp)
08364531 +0x02b:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
08364536 +0x030:  lea    -0x8c(%ebp),%eax
0836453c +0x036:  movl   $&g_worldMapScriptFileList,0x4(%esp)
08364544 +0x03e:  mov    %eax,(%esp)
08364547 +0x041:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
0836454c +0x046:  sub    $0x4,%esp
0836454f +0x049:  mov    -0x8c(%ebp),%eax
08364555 +0x04f:  mov    %eax,-0x2c(%ebp)
08364558 +0x052:  jmp    08364626 <+0x120>
0836455d +0x057:  lea    -0x2c(%ebp),%eax
08364560 +0x05a:  mov    %eax,(%esp)
08364563 +0x05d:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
08364568 +0x062:  add    $0x4,%eax
0836456b +0x065:  mov    %eax,(%esp)
0836456e +0x068:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08364573 +0x06d:  mov    %eax,-0x20(%ebp)
08364576 +0x070:  cmpl   $0x0,-0x20(%ebp)
0836457a +0x074:  je     08364658 <+0x152>
08364580 +0x07a:  mov    -0x20(%ebp),%eax
08364583 +0x07d:  mov    %eax,0x4(%esp)
08364587 +0x081:  lea    -0x80(%ebp),%eax
0836458a +0x084:  mov    %eax,(%esp)
0836458d +0x087:  call   08ab0388 <_Z20importWorldMapScriptP14WorldMapScriptPKc>  ; importWorldMapScript(WorldMapScript*, char const*)
08364592 +0x08c:  xor    $0x1,%eax
08364595 +0x08f:  test   %al,%al
08364597 +0x091:  je     083645b6 <+0xb0>
08364599 +0x093:  mov    -0x20(%ebp),%eax
0836459c +0x096:  mov    %eax,0x4(%esp)
083645a0 +0x09a:  movl   $"World Map Script Error: %s\n",(%esp)
083645a7 +0x0a1:  call   0807db60 <_init+0x458>
083645ac +0x0a6:  mov    $0x0,%ebx
083645b1 +0x0ab:  jmp    0836467b <+0x175>
083645b6 +0x0b0:  movl   $0x40,(%esp)
083645bd +0x0b7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083645c2 +0x0bc:  mov    %eax,%ebx
083645c4 +0x0be:  mov    %ebx,%eax
083645c6 +0x0c0:  mov    %eax,(%esp)
083645c9 +0x0c3:  call   0837f6ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf18a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf18a
083645ce +0x0c8:  jmp    083645e2 <+0xdc>
083645d0 +0x0ca:  mov    %edx,%esi
083645d2 +0x0cc:  mov    %eax,%edi
083645d4 +0x0ce:  mov    %ebx,(%esp)
083645d7 +0x0d1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083645dc +0x0d6:  mov    %edi,%eax
083645de +0x0d8:  mov    %esi,%edx
083645e0 +0x0da:  jmp    08364660 <+0x15a>
083645e2 +0x0dc:  mov    %ebx,-0x1c(%ebp)
083645e5 +0x0df:  lea    -0x80(%ebp),%eax
083645e8 +0x0e2:  mov    %eax,0x4(%esp)
083645ec +0x0e6:  mov    -0x1c(%ebp),%eax
083645ef +0x0e9:  mov    %eax,(%esp)
083645f2 +0x0ec:  call   0836421a <_ZN9CWorldMap13set_world_mapEP14WorldMapScript>  ; CWorldMap::set_world_map(WorldMapScript*)
083645f7 +0x0f1:  mov    -0x1c(%ebp),%eax
083645fa +0x0f4:  mov    %eax,0x4(%esp)
083645fe +0x0f8:  mov    0x8(%ebp),%eax
08364601 +0x0fb:  mov    %eax,(%esp)
08364604 +0x0fe:  call   08364694 <_ZN13CWorldMapList16insert_world_mapEP9CWorldMap>  ; CWorldMapList::insert_world_map(CWorldMap*)
08364609 +0x103:  lea    -0x24(%ebp),%eax
0836460c +0x106:  movl   $0x0,0x8(%esp)
08364614 +0x10e:  lea    -0x2c(%ebp),%edx
08364617 +0x111:  mov    %edx,0x4(%esp)
0836461b +0x115:  mov    %eax,(%esp)
0836461e +0x118:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
08364623 +0x11d:  sub    $0x4,%esp
08364626 +0x120:  lea    -0x28(%ebp),%eax
08364629 +0x123:  movl   $&g_worldMapScriptFileList,0x4(%esp)
08364631 +0x12b:  mov    %eax,(%esp)
08364634 +0x12e:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
08364639 +0x133:  sub    $0x4,%esp
0836463c +0x136:  lea    -0x28(%ebp),%eax
0836463f +0x139:  mov    %eax,0x4(%esp)
08364643 +0x13d:  lea    -0x2c(%ebp),%eax
08364646 +0x140:  mov    %eax,(%esp)
08364649 +0x143:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
0836464e +0x148:  test   %al,%al
08364650 +0x14a:  jne    0836455d <+0x57>
08364656 +0x150:  jmp    08364659 <+0x153>
08364658 +0x152:  nop
08364659 +0x153:  mov    $0x1,%ebx
0836465e +0x158:  jmp    0836467b <+0x175>
08364660 +0x15a:  mov    %edx,%ebx
08364662 +0x15c:  mov    %eax,%esi
08364664 +0x15e:  lea    -0x80(%ebp),%eax
08364667 +0x161:  mov    %eax,(%esp)
0836466a +0x164:  call   0837f5ae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf04e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf04e
0836466f +0x169:  mov    %esi,%eax
08364671 +0x16b:  mov    %ebx,%edx
08364673 +0x16d:  mov    %eax,(%esp)
08364676 +0x170:  call   08ae3750 <_Unwind_Resume>
0836467b +0x175:  lea    -0x80(%ebp),%eax
0836467e +0x178:  mov    %eax,(%esp)
08364681 +0x17b:  call   0837f5ae <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf04e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf04e
08364686 +0x180:  mov    %ebx,%eax
08364688 +0x182:  lea    -0xc(%ebp),%esp
0836468b +0x185:  add    $0x0,%esp
0836468e +0x188:  pop    %ebx
0836468f +0x189:  pop    %esi
08364690 +0x18a:  pop    %edi
08364691 +0x18b:  pop    %ebp
08364692 +0x18c:  ret
08364693 +0x18d:  nop
```

## 反编译 C

```c
// CWorldMapList::load_list @ 0x8364506

/* CWorldMapList::load_list() */

undefined4 __thiscall CWorldMapList::load_list(CWorldMapList *this)

{
  char cVar1;
  int iVar2;
  CWorldMap *this_00;
  undefined4 uVar3;
  undefined4 local_90 [3];
  WorldMapScript local_84 [84];
  undefined4 local_30;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_2c [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_28 [4];
  char *local_24;
  CWorldMap *local_20;
  
  local_24 = (char *)0x0;
  WorldMapScript::WorldMapScript(local_84);
  local_20 = (CWorldMap *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_30);
                    /* try { // try from 08364547 to 083645c1 has its CatchHandler @ 08364660 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_90);
  local_30 = local_90[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_2c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_30,
                       (_Rb_tree_iterator *)local_2c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_30);
    local_24 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_24 == (char *)0x0) break;
    cVar1 = importWorldMapScript(local_84,local_24);
    if (cVar1 != '\x01') {
      printf("World Map Script Error: %s\n",local_24);
      uVar3 = 0;
      goto LAB_0836467b;
    }
    this_00 = operator_new(0x40);
                    /* try { // try from 083645c9 to 083645cd has its CatchHandler @ 083645d0 */
    CWorldMap::CWorldMap(this_00);
    local_20 = this_00;
                    /* try { // try from 083645f2 to 08364638 has its CatchHandler @ 08364660 */
    CWorldMap::set_world_map(this_00,local_84);
    insert_world_map(this,local_20);
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_28,(int)&local_30);
  }
  uVar3 = 1;
LAB_0836467b:
  WorldMapScript::~WorldMapScript(local_84);
  return uVar3;
}
```
