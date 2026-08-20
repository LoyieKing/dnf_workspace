# findCubeStuff

`_ZN14CCubeStatistic13findCubeStuffEi`

`CCubeStatistic::findCubeStuff(int)`

| 类 | 地址 |
|---|---|
| `CCubeStatistic` | `0x0860de96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860de96  _ZN14CCubeStatistic13findCubeStuffEi
#           CCubeStatistic::findCubeStuff(int)
# range [0x0860de96, 0x0860dfb7]
0860de96 +0x000:  push   %ebp
0860de97 +0x001:  mov    %esp,%ebp
0860de99 +0x003:  push   %esi
0860de9a +0x004:  push   %ebx
0860de9b +0x005:  sub    $0x40,%esp
0860de9e +0x008:  call   088c0409 <_Z21getItemGroupNameTablev>  ; getItemGroupNameTable()
0860dea3 +0x00d:  mov    %eax,0x4(%esp)
0860dea7 +0x011:  lea    -0x2c(%ebp),%eax
0860deaa +0x014:  mov    %eax,(%esp)
0860dead +0x017:  call   08611582 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1600>  ; global constructors keyed to Statistics::Statistics()+0x1600
0860deb2 +0x01c:  lea    -0xd(%ebp),%eax
0860deb5 +0x01f:  mov    %eax,(%esp)
0860deb8 +0x022:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0860debd +0x027:  lea    -0xd(%ebp),%eax
0860dec0 +0x02a:  mov    %eax,0x8(%esp)
0860dec4 +0x02e:  movl   $"cube stuff",0x4(%esp)
0860decc +0x036:  lea    -0x14(%ebp),%eax
0860decf +0x039:  mov    %eax,(%esp)
0860ded2 +0x03c:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0860ded7 +0x041:  lea    -0x30(%ebp),%eax
0860deda +0x044:  lea    -0x14(%ebp),%edx
0860dedd +0x047:  mov    %edx,0x8(%esp)
0860dee1 +0x04b:  lea    -0x2c(%ebp),%edx
0860dee4 +0x04e:  mov    %edx,0x4(%esp)
0860dee8 +0x052:  mov    %eax,(%esp)
0860deeb +0x055:  call   0817cdb0 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1f7>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1f7
0860def0 +0x05a:  sub    $0x4,%esp
0860def3 +0x05d:  lea    -0x14(%ebp),%eax
0860def6 +0x060:  mov    %eax,(%esp)
0860def9 +0x063:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0860defe +0x068:  jmp    0860df2a <+0x94>
0860df00 +0x06a:  mov    %edx,%ebx
0860df02 +0x06c:  mov    %eax,%esi
0860df04 +0x06e:  lea    -0x14(%ebp),%eax
0860df07 +0x071:  mov    %eax,(%esp)
0860df0a +0x074:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0860df0f +0x079:  mov    %esi,%eax
0860df11 +0x07b:  mov    %ebx,%edx
0860df13 +0x07d:  jmp    0860df15 <+0x7f>
0860df15 +0x07f:  mov    %edx,%ebx
0860df17 +0x081:  mov    %eax,%esi
0860df19 +0x083:  lea    -0xd(%ebp),%eax
0860df1c +0x086:  mov    %eax,(%esp)
0860df1f +0x089:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0860df24 +0x08e:  mov    %esi,%eax
0860df26 +0x090:  mov    %ebx,%edx
0860df28 +0x092:  jmp    0860df86 <+0xf0>
0860df2a +0x094:  lea    -0xd(%ebp),%eax
0860df2d +0x097:  mov    %eax,(%esp)
0860df30 +0x09a:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0860df35 +0x09f:  lea    -0xc(%ebp),%eax
0860df38 +0x0a2:  lea    -0x2c(%ebp),%edx
0860df3b +0x0a5:  mov    %edx,0x4(%esp)
0860df3f +0x0a9:  mov    %eax,(%esp)
0860df42 +0x0ac:  call   0817cddc <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x223>  ; global constructors keyed to Arad_Script::Arad_Script()+0x223
0860df47 +0x0b1:  sub    $0x4,%esp
0860df4a +0x0b4:  lea    -0xc(%ebp),%eax
0860df4d +0x0b7:  mov    %eax,0x4(%esp)
0860df51 +0x0bb:  lea    -0x30(%ebp),%eax
0860df54 +0x0be:  mov    %eax,(%esp)
0860df57 +0x0c1:  call   0817ce02 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x249>  ; global constructors keyed to Arad_Script::Arad_Script()+0x249
0860df5c +0x0c6:  test   %al,%al
0860df5e +0x0c8:  je     0860df7f <+0xe9>
0860df60 +0x0ca:  lea    -0x30(%ebp),%eax
0860df63 +0x0cd:  mov    %eax,(%esp)
0860df66 +0x0d0:  call   0817ce16 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x25d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x25d
0860df6b +0x0d5:  mov    0x4(%eax),%eax
0860df6e +0x0d8:  cmp    0xc(%ebp),%eax
0860df71 +0x0db:  sete   %al
0860df74 +0x0de:  test   %al,%al
0860df76 +0x0e0:  je     0860df7f <+0xe9>
0860df78 +0x0e2:  mov    $0x1,%ebx
0860df7d +0x0e7:  jmp    0860dfa1 <+0x10b>
0860df7f +0x0e9:  mov    $0x0,%ebx
0860df84 +0x0ee:  jmp    0860dfa1 <+0x10b>
0860df86 +0x0f0:  mov    %edx,%ebx
0860df88 +0x0f2:  mov    %eax,%esi
0860df8a +0x0f4:  lea    -0x2c(%ebp),%eax
0860df8d +0x0f7:  mov    %eax,(%esp)
0860df90 +0x0fa:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
0860df95 +0x0ff:  mov    %esi,%eax
0860df97 +0x101:  mov    %ebx,%edx
0860df99 +0x103:  mov    %eax,(%esp)
0860df9c +0x106:  call   08ae3750 <_Unwind_Resume>
0860dfa1 +0x10b:  lea    -0x2c(%ebp),%eax
0860dfa4 +0x10e:  mov    %eax,(%esp)
0860dfa7 +0x111:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
0860dfac +0x116:  mov    %ebx,%eax
0860dfae +0x118:  lea    -0x8(%ebp),%esp
0860dfb1 +0x11b:  add    $0x0,%esp
0860dfb4 +0x11e:  pop    %ebx
0860dfb5 +0x11f:  pop    %esi
0860dfb6 +0x120:  pop    %ebp
0860dfb7 +0x121:  ret
```

## 反编译 C

```c
// CCubeStatistic::findCubeStuff @ 0x860de96

/* CCubeStatistic::findCubeStuff(int) */

undefined4 __thiscall CCubeStatistic::findCubeStuff(CCubeStatistic *this,int param_1)

{
  char cVar1;
  map *pmVar2;
  int iVar3;
  undefined4 uVar4;
  string local_34;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  local_30 [24];
  string local_18 [7];
  allocator<char> local_11;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  local_10 [4];
  
  pmVar2 = (map *)getItemGroupNameTable();
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map(local_30,pmVar2);
  std::allocator<char>::allocator();
                    /* try { // try from 0860ded2 to 0860ded6 has its CatchHandler @ 0860df15 */
  std::string::string(local_18,"cube stuff",(allocator *)&local_11);
                    /* try { // try from 0860deeb to 0860deef has its CatchHandler @ 0860df00 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::find(&local_34);
                    /* try { // try from 0860def9 to 0860defd has its CatchHandler @ 0860df15 */
  std::string::~string(local_18);
  std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 0860df42 to 0860df46 has its CatchHandler @ 0860df86 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_34,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_34);
    if (*(int *)(iVar3 + 4) == param_1) {
      uVar4 = 1;
      goto LAB_0860dfa1;
    }
  }
  uVar4 = 0;
LAB_0860dfa1:
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map(local_30);
  return uVar4;
}
```
