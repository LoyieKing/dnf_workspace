# initMapList

`_ZN23BlueMarbleScriptManager11initMapListEPKcS1_`

`BlueMarbleScriptManager::initMapList(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `BlueMarbleScriptManager` | `0x088d6438` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d6438  _ZN23BlueMarbleScriptManager11initMapListEPKcS1_
#           BlueMarbleScriptManager::initMapList(char const*, char const*)
# range [0x088d6438, 0x088d6621]
088d6438 +0x000:  push   %ebp
088d6439 +0x001:  mov    %esp,%ebp
088d643b +0x003:  push   %edi
088d643c +0x004:  push   %esi
088d643d +0x005:  push   %ebx
088d643e +0x006:  sub    $0x3c,%esp
088d6441 +0x009:  mov    0x8(%ebp),%eax
088d6444 +0x00c:  movl   $0x0,0xc(%esp)
088d644c +0x014:  mov    0x10(%ebp),%edx
088d644f +0x017:  mov    %edx,0x8(%esp)
088d6453 +0x01b:  mov    0xc(%ebp),%edx
088d6456 +0x01e:  mov    %edx,0x4(%esp)
088d645a +0x022:  mov    %eax,(%esp)
088d645d +0x025:  call   088bbd77 <_Z22loadRDARScriptListFileP16STScriptFileListPKcS2_PSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; loadRDARScriptListFile(STScriptFileList*, char const*, char const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >*)
088d6462 +0x02a:  xor    $0x1,%eax
088d6465 +0x02d:  test   %al,%al
088d6467 +0x02f:  je     088d6473 <+0x3b>
088d6469 +0x031:  mov    $0x0,%eax
088d646e +0x036:  jmp    088d6616 <+0x1de>
088d6473 +0x03b:  mov    0x8(%ebp),%eax
088d6476 +0x03e:  add    $0xd4,%eax
088d647b +0x043:  mov    %eax,(%esp)
088d647e +0x046:  call   088d6c88 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x50a>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x50a
088d6483 +0x04b:  mov    0x8(%ebp),%edx
088d6486 +0x04e:  lea    -0x28(%ebp),%eax
088d6489 +0x051:  mov    %edx,0x4(%esp)
088d648d +0x055:  mov    %eax,(%esp)
088d6490 +0x058:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
088d6495 +0x05d:  sub    $0x4,%esp
088d6498 +0x060:  jmp    088d65e2 <+0x1aa>
088d649d +0x065:  movl   $0xc,(%esp)
088d64a4 +0x06c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
088d64a9 +0x071:  mov    %eax,%ebx
088d64ab +0x073:  mov    %ebx,%eax
088d64ad +0x075:  mov    %eax,(%esp)
088d64b0 +0x078:  call   088d53d6 <_ZN19BlueMarbleMapScriptC1Ev>  ; BlueMarbleMapScript::BlueMarbleMapScript()
088d64b5 +0x07d:  jmp    088d64cf <+0x97>
088d64b7 +0x07f:  mov    %edx,%esi
088d64b9 +0x081:  mov    %eax,%edi
088d64bb +0x083:  mov    %ebx,(%esp)
088d64be +0x086:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088d64c3 +0x08b:  mov    %edi,%eax
088d64c5 +0x08d:  mov    %esi,%edx
088d64c7 +0x08f:  mov    %eax,(%esp)
088d64ca +0x092:  call   08ae3750 <_Unwind_Resume>
088d64cf +0x097:  mov    %ebx,-0x1c(%ebp)
088d64d2 +0x09a:  lea    -0x28(%ebp),%eax
088d64d5 +0x09d:  mov    %eax,(%esp)
088d64d8 +0x0a0:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
088d64dd +0x0a5:  mov    (%eax),%eax
088d64df +0x0a7:  mov    %eax,-0x2c(%ebp)
088d64e2 +0x0aa:  lea    -0x1d(%ebp),%eax
088d64e5 +0x0ad:  mov    %eax,(%esp)
088d64e8 +0x0b0:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
088d64ed +0x0b5:  lea    -0x1d(%ebp),%eax
088d64f0 +0x0b8:  mov    %eax,0x8(%esp)
088d64f4 +0x0bc:  mov    0xc(%ebp),%eax
088d64f7 +0x0bf:  mov    %eax,0x4(%esp)
088d64fb +0x0c3:  lea    -0x30(%ebp),%eax
088d64fe +0x0c6:  mov    %eax,(%esp)
088d6501 +0x0c9:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
088d6506 +0x0ce:  jmp    088d6523 <+0xeb>
088d6508 +0x0d0:  mov    %edx,%ebx
088d650a +0x0d2:  mov    %eax,%esi
088d650c +0x0d4:  lea    -0x1d(%ebp),%eax
088d650f +0x0d7:  mov    %eax,(%esp)
088d6512 +0x0da:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
088d6517 +0x0df:  mov    %esi,%eax
088d6519 +0x0e1:  mov    %ebx,%edx
088d651b +0x0e3:  mov    %eax,(%esp)
088d651e +0x0e6:  call   08ae3750 <_Unwind_Resume>
088d6523 +0x0eb:  lea    -0x1d(%ebp),%eax
088d6526 +0x0ee:  mov    %eax,(%esp)
088d6529 +0x0f1:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
088d652e +0x0f6:  lea    -0x28(%ebp),%eax
088d6531 +0x0f9:  mov    %eax,(%esp)
088d6534 +0x0fc:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
088d6539 +0x101:  add    $0x4,%eax
088d653c +0x104:  mov    %eax,0x4(%esp)
088d6540 +0x108:  lea    -0x30(%ebp),%eax
088d6543 +0x10b:  mov    %eax,(%esp)
088d6546 +0x10e:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
088d654b +0x113:  lea    -0x30(%ebp),%eax
088d654e +0x116:  mov    %eax,(%esp)
088d6551 +0x119:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
088d6556 +0x11e:  mov    %eax,0x4(%esp)
088d655a +0x122:  mov    -0x1c(%ebp),%eax
088d655d +0x125:  mov    %eax,(%esp)
088d6560 +0x128:  call   088d54e2 <_ZN19BlueMarbleMapScript12importScriptEPKc>  ; BlueMarbleMapScript::importScript(char const*)
088d6565 +0x12d:  xor    $0x1,%eax
088d6568 +0x130:  test   %al,%al
088d656a +0x132:  je     088d6592 <+0x15a>
088d656c +0x134:  cmpl   $0x0,-0x1c(%ebp)
088d6570 +0x138:  je     088d6589 <+0x151>
088d6572 +0x13a:  mov    -0x1c(%ebp),%ebx
088d6575 +0x13d:  test   %ebx,%ebx
088d6577 +0x13f:  je     088d6589 <+0x151>
088d6579 +0x141:  mov    %ebx,(%esp)
088d657c +0x144:  call   088d5418 <_ZN19BlueMarbleMapScriptD1Ev>  ; BlueMarbleMapScript::~BlueMarbleMapScript()
088d6581 +0x149:  mov    %ebx,(%esp)
088d6584 +0x14c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088d6589 +0x151:  movl   $0x0,-0x1c(%ebp)
088d6590 +0x158:  jmp    088d65cc <+0x194>
088d6592 +0x15a:  mov    0x8(%ebp),%eax
088d6595 +0x15d:  lea    0xd4(%eax),%edx
088d659b +0x163:  lea    -0x2c(%ebp),%eax
088d659e +0x166:  mov    %eax,0x4(%esp)
088d65a2 +0x16a:  mov    %edx,(%esp)
088d65a5 +0x16d:  call   088d6d92 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x614>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x614
088d65aa +0x172:  mov    -0x1c(%ebp),%edx
088d65ad +0x175:  mov    %edx,(%eax)
088d65af +0x177:  jmp    088d65cc <+0x194>
088d65b1 +0x179:  mov    %edx,%ebx
088d65b3 +0x17b:  mov    %eax,%esi
088d65b5 +0x17d:  lea    -0x30(%ebp),%eax
088d65b8 +0x180:  mov    %eax,(%esp)
088d65bb +0x183:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d65c0 +0x188:  mov    %esi,%eax
088d65c2 +0x18a:  mov    %ebx,%edx
088d65c4 +0x18c:  mov    %eax,(%esp)
088d65c7 +0x18f:  call   08ae3750 <_Unwind_Resume>
088d65cc +0x194:  lea    -0x30(%ebp),%eax
088d65cf +0x197:  mov    %eax,(%esp)
088d65d2 +0x19a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d65d7 +0x19f:  lea    -0x28(%ebp),%eax
088d65da +0x1a2:  mov    %eax,(%esp)
088d65dd +0x1a5:  call   080e6610 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x746>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x746
088d65e2 +0x1aa:  mov    0x8(%ebp),%edx
088d65e5 +0x1ad:  lea    -0x24(%ebp),%eax
088d65e8 +0x1b0:  mov    %edx,0x4(%esp)
088d65ec +0x1b4:  mov    %eax,(%esp)
088d65ef +0x1b7:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
088d65f4 +0x1bc:  sub    $0x4,%esp
088d65f7 +0x1bf:  lea    -0x24(%ebp),%eax
088d65fa +0x1c2:  mov    %eax,0x4(%esp)
088d65fe +0x1c6:  lea    -0x28(%ebp),%eax
088d6601 +0x1c9:  mov    %eax,(%esp)
088d6604 +0x1cc:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
088d6609 +0x1d1:  test   %al,%al
088d660b +0x1d3:  jne    088d649d <+0x65>
088d6611 +0x1d9:  mov    $0x1,%eax
088d6616 +0x1de:  lea    -0xc(%ebp),%esp
088d6619 +0x1e1:  add    $0x0,%esp
088d661c +0x1e4:  pop    %ebx
088d661d +0x1e5:  pop    %esi
088d661e +0x1e6:  pop    %edi
088d661f +0x1e7:  pop    %ebp
088d6620 +0x1e8:  ret
088d6621 +0x1e9:  nop
```

## 反编译 C

```c
// BlueMarbleScriptManager::initMapList @ 0x88d6438

/* BlueMarbleScriptManager::initMapList(char const*, char const*) */

undefined4 __thiscall
BlueMarbleScriptManager::initMapList(BlueMarbleScriptManager *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  BlueMarbleMapScript *pBVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  string local_34 [4];
  int local_30;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_2c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_28 [7];
  allocator<char> local_21;
  BlueMarbleMapScript *local_20;
  
  cVar1 = loadRDARScriptListFile((STScriptFileList *)this,param_1,param_2,(map *)0x0);
  if (cVar1 == '\x01') {
    std::
    map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
    ::clear((map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
             *)(this + 0xd4));
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              (local_2c);
    while( true ) {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_28);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_2c,
                         (_Rb_tree_iterator *)local_28);
      if (cVar1 == '\0') break;
      pBVar3 = operator_new(0xc);
                    /* try { // try from 088d64b0 to 088d64b4 has its CatchHandler @ 088d64b7 */
      BlueMarbleMapScript::BlueMarbleMapScript(pBVar3);
      local_20 = pBVar3;
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_2c);
      local_30 = *piVar4;
      std::allocator<char>::allocator();
                    /* try { // try from 088d6501 to 088d6505 has its CatchHandler @ 088d6508 */
      std::string::string(local_34,param_1,(allocator *)&local_21);
      std::allocator<char>::~allocator(&local_21);
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_2c);
                    /* try { // try from 088d6546 to 088d65a9 has its CatchHandler @ 088d65b1 */
      std::string::operator+=(local_34,(string *)(iVar5 + 4));
      pcVar6 = (char *)std::string::c_str(local_34);
      cVar1 = BlueMarbleMapScript::importScript(local_20,pcVar6);
      pBVar3 = local_20;
      if (cVar1 == '\x01') {
        puVar7 = (undefined4 *)
                 std::
                 map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
                 ::operator[]((map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
                               *)(this + 0xd4),&local_30);
        *puVar7 = local_20;
      }
      else {
        if ((local_20 != (BlueMarbleMapScript *)0x0) && (local_20 != (BlueMarbleMapScript *)0x0)) {
          BlueMarbleMapScript::~BlueMarbleMapScript(local_20);
          operator_delete(pBVar3);
        }
        local_20 = (BlueMarbleMapScript *)0x0;
      }
      std::string::~string(local_34);
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_2c);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
