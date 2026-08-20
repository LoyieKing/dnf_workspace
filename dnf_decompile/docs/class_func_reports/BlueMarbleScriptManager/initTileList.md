# initTileList

`_ZN23BlueMarbleScriptManager12initTileListEPKcS1_`

`BlueMarbleScriptManager::initTileList(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `BlueMarbleScriptManager` | `0x088d626e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d626e  _ZN23BlueMarbleScriptManager12initTileListEPKcS1_
#           BlueMarbleScriptManager::initTileList(char const*, char const*)
# range [0x088d626e, 0x088d6437]
088d626e +0x000:  push   %ebp
088d626f +0x001:  mov    %esp,%ebp
088d6271 +0x003:  push   %esi
088d6272 +0x004:  push   %ebx
088d6273 +0x005:  sub    $0x30,%esp
088d6276 +0x008:  mov    0x8(%ebp),%eax
088d6279 +0x00b:  lea    0x18(%eax),%edx
088d627c +0x00e:  movl   $0x0,0xc(%esp)
088d6284 +0x016:  mov    0x10(%ebp),%eax
088d6287 +0x019:  mov    %eax,0x8(%esp)
088d628b +0x01d:  mov    0xc(%ebp),%eax
088d628e +0x020:  mov    %eax,0x4(%esp)
088d6292 +0x024:  mov    %edx,(%esp)
088d6295 +0x027:  call   088bbd77 <_Z22loadRDARScriptListFileP16STScriptFileListPKcS2_PSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; loadRDARScriptListFile(STScriptFileList*, char const*, char const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >*)
088d629a +0x02c:  xor    $0x1,%eax
088d629d +0x02f:  test   %al,%al
088d629f +0x031:  je     088d62ab <+0x3d>
088d62a1 +0x033:  mov    $0x0,%eax
088d62a6 +0x038:  jmp    088d642e <+0x1c0>
088d62ab +0x03d:  mov    0x8(%ebp),%eax
088d62ae +0x040:  add    $0xbc,%eax
088d62b3 +0x045:  mov    %eax,(%esp)
088d62b6 +0x048:  call   088d6c74 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x4f6>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x4f6
088d62bb +0x04d:  mov    0x8(%ebp),%eax
088d62be +0x050:  lea    0x18(%eax),%edx
088d62c1 +0x053:  lea    -0x18(%ebp),%eax
088d62c4 +0x056:  mov    %edx,0x4(%esp)
088d62c8 +0x05a:  mov    %eax,(%esp)
088d62cb +0x05d:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
088d62d0 +0x062:  sub    $0x4,%esp
088d62d3 +0x065:  jmp    088d63f7 <+0x189>
088d62d8 +0x06a:  movl   $0xc,(%esp)
088d62df +0x071:  call   08724450 <_Znwj>  ; operator new(unsigned int)
088d62e4 +0x076:  mov    %eax,%ebx
088d62e6 +0x078:  mov    %ebx,%eax
088d62e8 +0x07a:  mov    %eax,(%esp)
088d62eb +0x07d:  call   088d5068 <_ZN20BlueMarbleTileScriptC1Ev>  ; BlueMarbleTileScript::BlueMarbleTileScript()
088d62f0 +0x082:  mov    %ebx,-0xc(%ebp)
088d62f3 +0x085:  lea    -0x18(%ebp),%eax
088d62f6 +0x088:  mov    %eax,(%esp)
088d62f9 +0x08b:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
088d62fe +0x090:  mov    (%eax),%eax
088d6300 +0x092:  mov    %eax,-0x1c(%ebp)
088d6303 +0x095:  lea    -0xd(%ebp),%eax
088d6306 +0x098:  mov    %eax,(%esp)
088d6309 +0x09b:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
088d630e +0x0a0:  lea    -0xd(%ebp),%eax
088d6311 +0x0a3:  mov    %eax,0x8(%esp)
088d6315 +0x0a7:  mov    0xc(%ebp),%eax
088d6318 +0x0aa:  mov    %eax,0x4(%esp)
088d631c +0x0ae:  lea    -0x20(%ebp),%eax
088d631f +0x0b1:  mov    %eax,(%esp)
088d6322 +0x0b4:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
088d6327 +0x0b9:  jmp    088d6344 <+0xd6>
088d6329 +0x0bb:  mov    %edx,%ebx
088d632b +0x0bd:  mov    %eax,%esi
088d632d +0x0bf:  lea    -0xd(%ebp),%eax
088d6330 +0x0c2:  mov    %eax,(%esp)
088d6333 +0x0c5:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
088d6338 +0x0ca:  mov    %esi,%eax
088d633a +0x0cc:  mov    %ebx,%edx
088d633c +0x0ce:  mov    %eax,(%esp)
088d633f +0x0d1:  call   08ae3750 <_Unwind_Resume>
088d6344 +0x0d6:  lea    -0xd(%ebp),%eax
088d6347 +0x0d9:  mov    %eax,(%esp)
088d634a +0x0dc:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
088d634f +0x0e1:  lea    -0x18(%ebp),%eax
088d6352 +0x0e4:  mov    %eax,(%esp)
088d6355 +0x0e7:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
088d635a +0x0ec:  add    $0x4,%eax
088d635d +0x0ef:  mov    %eax,0x4(%esp)
088d6361 +0x0f3:  lea    -0x20(%ebp),%eax
088d6364 +0x0f6:  mov    %eax,(%esp)
088d6367 +0x0f9:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
088d636c +0x0fe:  lea    -0x20(%ebp),%eax
088d636f +0x101:  mov    %eax,(%esp)
088d6372 +0x104:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
088d6377 +0x109:  mov    %eax,0x4(%esp)
088d637b +0x10d:  mov    -0xc(%ebp),%eax
088d637e +0x110:  mov    %eax,(%esp)
088d6381 +0x113:  call   088d509c <_ZN20BlueMarbleTileScript12importScriptEPKc>  ; BlueMarbleTileScript::importScript(char const*)
088d6386 +0x118:  xor    $0x1,%eax
088d6389 +0x11b:  test   %al,%al
088d638b +0x11d:  je     088d63a7 <+0x139>
088d638d +0x11f:  cmpl   $0x0,-0xc(%ebp)
088d6391 +0x123:  je     088d639e <+0x130>
088d6393 +0x125:  mov    -0xc(%ebp),%eax
088d6396 +0x128:  mov    %eax,(%esp)
088d6399 +0x12b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088d639e +0x130:  movl   $0x0,-0xc(%ebp)
088d63a5 +0x137:  jmp    088d63e1 <+0x173>
088d63a7 +0x139:  mov    0x8(%ebp),%eax
088d63aa +0x13c:  lea    0xbc(%eax),%edx
088d63b0 +0x142:  lea    -0x1c(%ebp),%eax
088d63b3 +0x145:  mov    %eax,0x4(%esp)
088d63b7 +0x149:  mov    %edx,(%esp)
088d63ba +0x14c:  call   088d6c9c <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x51e>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x51e
088d63bf +0x151:  mov    -0xc(%ebp),%edx
088d63c2 +0x154:  mov    %edx,(%eax)
088d63c4 +0x156:  jmp    088d63e1 <+0x173>
088d63c6 +0x158:  mov    %edx,%ebx
088d63c8 +0x15a:  mov    %eax,%esi
088d63ca +0x15c:  lea    -0x20(%ebp),%eax
088d63cd +0x15f:  mov    %eax,(%esp)
088d63d0 +0x162:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d63d5 +0x167:  mov    %esi,%eax
088d63d7 +0x169:  mov    %ebx,%edx
088d63d9 +0x16b:  mov    %eax,(%esp)
088d63dc +0x16e:  call   08ae3750 <_Unwind_Resume>
088d63e1 +0x173:  lea    -0x20(%ebp),%eax
088d63e4 +0x176:  mov    %eax,(%esp)
088d63e7 +0x179:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d63ec +0x17e:  lea    -0x18(%ebp),%eax
088d63ef +0x181:  mov    %eax,(%esp)
088d63f2 +0x184:  call   080e6610 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x746>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x746
088d63f7 +0x189:  mov    0x8(%ebp),%eax
088d63fa +0x18c:  lea    0x18(%eax),%edx
088d63fd +0x18f:  lea    -0x14(%ebp),%eax
088d6400 +0x192:  mov    %edx,0x4(%esp)
088d6404 +0x196:  mov    %eax,(%esp)
088d6407 +0x199:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
088d640c +0x19e:  sub    $0x4,%esp
088d640f +0x1a1:  lea    -0x14(%ebp),%eax
088d6412 +0x1a4:  mov    %eax,0x4(%esp)
088d6416 +0x1a8:  lea    -0x18(%ebp),%eax
088d6419 +0x1ab:  mov    %eax,(%esp)
088d641c +0x1ae:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
088d6421 +0x1b3:  test   %al,%al
088d6423 +0x1b5:  jne    088d62d8 <+0x6a>
088d6429 +0x1bb:  mov    $0x1,%eax
088d642e +0x1c0:  lea    -0x8(%ebp),%esp
088d6431 +0x1c3:  add    $0x0,%esp
088d6434 +0x1c6:  pop    %ebx
088d6435 +0x1c7:  pop    %esi
088d6436 +0x1c8:  pop    %ebp
088d6437 +0x1c9:  ret
```

## 反编译 C

```c
// BlueMarbleScriptManager::initTileList @ 0x88d626e

/* BlueMarbleScriptManager::initTileList(char const*, char const*) */

undefined4 __thiscall
BlueMarbleScriptManager::initTileList(BlueMarbleScriptManager *this,char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  BlueMarbleTileScript *this_00;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  string local_24 [4];
  int local_20;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_1c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_18 [7];
  allocator<char> local_11;
  BlueMarbleTileScript *local_10;
  
  cVar1 = loadRDARScriptListFile((STScriptFileList *)(this + 0x18),param_1,param_2,(map *)0x0);
  if (cVar1 == '\x01') {
    std::
    map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
    ::clear((map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
             *)(this + 0xbc));
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              (local_1c);
    while( true ) {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_1c,
                         (_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      this_00 = operator_new(0xc);
      BlueMarbleTileScript::BlueMarbleTileScript(this_00);
      local_10 = this_00;
      piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_1c);
      local_20 = *piVar3;
      std::allocator<char>::allocator();
                    /* try { // try from 088d6322 to 088d6326 has its CatchHandler @ 088d6329 */
      std::string::string(local_24,param_1,(allocator *)&local_11);
      std::allocator<char>::~allocator(&local_11);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_1c);
                    /* try { // try from 088d6367 to 088d63be has its CatchHandler @ 088d63c6 */
      std::string::operator+=(local_24,(string *)(iVar4 + 4));
      pcVar5 = (char *)std::string::c_str(local_24);
      cVar1 = BlueMarbleTileScript::importScript(local_10,pcVar5);
      if (cVar1 == '\x01') {
        puVar6 = (undefined4 *)
                 std::
                 map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
                 ::operator[]((map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
                               *)(this + 0xbc),&local_20);
        *puVar6 = local_10;
      }
      else {
        if (local_10 != (BlueMarbleTileScript *)0x0) {
          operator_delete(local_10);
        }
        local_10 = (BlueMarbleTileScript *)0x0;
      }
      std::string::~string(local_24);
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_1c);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
