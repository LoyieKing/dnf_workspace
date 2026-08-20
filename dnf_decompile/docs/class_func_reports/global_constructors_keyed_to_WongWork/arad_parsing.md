# arad_parsing

`_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_`

`global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork` | `0x08484837` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08484837  _GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_
#           global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x08484837, 0x0848499f]
08484837 +0x000:  push   %ebp
08484838 +0x001:  mov    %esp,%ebp
0848483a +0x003:  sub    $0x18,%esp
0848483d +0x006:  movl   $0xffff,0x4(%esp)
08484845 +0x00e:  movl   $0x1,(%esp)
0848484c +0x015:  call   084847f7 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08484851 +0x01a:  leave
08484852 +0x01b:  ret
08484853 +0x01c:  nop
08484854 +0x01d:  push   %ebp
08484855 +0x01e:  mov    %esp,%ebp
08484857 +0x020:  mov    0x8(%ebp),%eax
0848485a +0x023:  mov    0x34(%eax),%eax
0848485d +0x026:  pop    %ebp
0848485e +0x027:  ret
0848485f +0x028:  nop
08484860 +0x029:  push   %ebp
08484861 +0x02a:  mov    %esp,%ebp
08484863 +0x02c:  push   %ebx
08484864 +0x02d:  sub    $0x14,%esp
08484867 +0x030:  mov    0x8(%ebp),%ebx
0848486a +0x033:  mov    0xc(%ebp),%eax
0848486d +0x036:  mov    %eax,0x4(%esp)
08484871 +0x03a:  mov    %ebx,(%esp)
08484874 +0x03d:  call   08484936 <+0xff>
08484879 +0x042:  sub    $0x4,%esp
0848487c +0x045:  mov    %ebx,%eax
0848487e +0x047:  mov    -0x4(%ebp),%ebx
08484881 +0x04a:  leave
08484882 +0x04b:  ret    $0x4
08484885 +0x04e:  nop
08484886 +0x04f:  push   %ebp
08484887 +0x050:  mov    %esp,%ebp
08484889 +0x052:  mov    0x8(%ebp),%eax
0848488c +0x055:  mov    (%eax),%eax
0848488e +0x057:  add    $0x10,%eax
08484891 +0x05a:  pop    %ebp
08484892 +0x05b:  ret
08484893 +0x05c:  nop
08484894 +0x05d:  push   %ebp
08484895 +0x05e:  mov    %esp,%ebp
08484897 +0x060:  sub    $0x18,%esp
0848489a +0x063:  mov    0xc(%ebp),%eax
0848489d +0x066:  mov    %eax,(%esp)
084848a0 +0x069:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
084848a5 +0x06e:  mov    (%eax),%eax
084848a7 +0x070:  mov    %eax,%edx
084848a9 +0x072:  mov    0x8(%ebp),%eax
084848ac +0x075:  mov    %dx,(%eax)
084848af +0x078:  mov    0xc(%ebp),%eax
084848b2 +0x07b:  add    $0x4,%eax
084848b5 +0x07e:  mov    %eax,(%esp)
084848b8 +0x081:  call   0808102a <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x1050>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x1050
084848bd +0x086:  mov    (%eax),%eax
084848bf +0x088:  mov    %eax,%edx
084848c1 +0x08a:  mov    0x8(%ebp),%eax
084848c4 +0x08d:  mov    %dl,0x2(%eax)
084848c7 +0x090:  leave
084848c8 +0x091:  ret
084848c9 +0x092:  nop
084848ca +0x093:  push   %ebp
084848cb +0x094:  mov    %esp,%ebp
084848cd +0x096:  sub    $0x18,%esp
084848d0 +0x099:  mov    0x8(%ebp),%eax
084848d3 +0x09c:  mov    %eax,(%esp)
084848d6 +0x09f:  call   0848495c <+0x125>
084848db +0x0a4:  leave
084848dc +0x0a5:  ret
084848dd +0x0a6:  nop
084848de +0x0a7:  push   %ebp
084848df +0x0a8:  mov    %esp,%ebp
084848e1 +0x0aa:  push   %ebx
084848e2 +0x0ab:  sub    $0x14,%esp
084848e5 +0x0ae:  mov    0x8(%ebp),%ebx
084848e8 +0x0b1:  mov    0xc(%ebp),%eax
084848eb +0x0b4:  mov    %eax,0x4(%esp)
084848ef +0x0b8:  mov    %ebx,(%esp)
084848f2 +0x0bb:  call   0848496c <+0x135>
084848f7 +0x0c0:  sub    $0x4,%esp
084848fa +0x0c3:  mov    %ebx,%eax
084848fc +0x0c5:  mov    -0x4(%ebp),%ebx
084848ff +0x0c8:  leave
08484900 +0x0c9:  ret    $0x4
08484903 +0x0cc:  nop
08484904 +0x0cd:  push   %ebp
08484905 +0x0ce:  mov    %esp,%ebp
08484907 +0x0d0:  sub    $0x18,%esp
0848490a +0x0d3:  mov    0x8(%ebp),%eax
0848490d +0x0d6:  mov    (%eax),%eax
0848490f +0x0d8:  mov    %eax,(%esp)
08484912 +0x0db:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
08484917 +0x0e0:  mov    0x8(%ebp),%edx
0848491a +0x0e3:  mov    %eax,(%edx)
0848491c +0x0e5:  mov    0x8(%ebp),%eax
0848491f +0x0e8:  leave
08484920 +0x0e9:  ret
08484921 +0x0ea:  nop
08484922 +0x0eb:  push   %ebp
08484923 +0x0ec:  mov    %esp,%ebp
08484925 +0x0ee:  mov    0x8(%ebp),%eax
08484928 +0x0f1:  mov    (%eax),%edx
0848492a +0x0f3:  mov    0xc(%ebp),%eax
0848492d +0x0f6:  mov    (%eax),%eax
0848492f +0x0f8:  cmp    %eax,%edx
08484931 +0x0fa:  setne  %al
08484934 +0x0fd:  pop    %ebp
08484935 +0x0fe:  ret
08484936 +0x0ff:  push   %ebp
08484937 +0x100:  mov    %esp,%ebp
08484939 +0x102:  push   %ebx
0848493a +0x103:  sub    $0x14,%esp
0848493d +0x106:  mov    0x8(%ebp),%ebx
08484940 +0x109:  mov    0xc(%ebp),%eax
08484943 +0x10c:  add    $0x4,%eax
08484946 +0x10f:  mov    %eax,0x4(%esp)
0848494a +0x113:  mov    %ebx,(%esp)
0848494d +0x116:  call   08484992 <+0x15b>
08484952 +0x11b:  mov    %ebx,%eax
08484954 +0x11d:  add    $0x14,%esp
08484957 +0x120:  pop    %ebx
08484958 +0x121:  pop    %ebp
08484959 +0x122:  ret    $0x4
0848495c +0x125:  push   %ebp
0848495d +0x126:  mov    %esp,%ebp
0848495f +0x128:  mov    0x8(%ebp),%eax
08484962 +0x12b:  mov    0x14(%eax),%eax
08484965 +0x12e:  test   %eax,%eax
08484967 +0x130:  sete   %al
0848496a +0x133:  pop    %ebp
0848496b +0x134:  ret
0848496c +0x135:  push   %ebp
0848496d +0x136:  mov    %esp,%ebp
0848496f +0x138:  push   %ebx
08484970 +0x139:  sub    $0x14,%esp
08484973 +0x13c:  mov    0x8(%ebp),%ebx
08484976 +0x13f:  mov    0xc(%ebp),%eax
08484979 +0x142:  mov    0xc(%eax),%eax
0848497c +0x145:  mov    %eax,0x4(%esp)
08484980 +0x149:  mov    %ebx,(%esp)
08484983 +0x14c:  call   08484992 <+0x15b>
08484988 +0x151:  mov    %ebx,%eax
0848498a +0x153:  add    $0x14,%esp
0848498d +0x156:  pop    %ebx
0848498e +0x157:  pop    %ebp
0848498f +0x158:  ret    $0x4
08484992 +0x15b:  push   %ebp
08484993 +0x15c:  mov    %esp,%ebp
08484995 +0x15e:  mov    0xc(%ebp),%edx
08484998 +0x161:  mov    0x8(%ebp),%eax
0848499b +0x164:  mov    %edx,(%eax)
0848499d +0x166:  pop    %ebp
0848499e +0x167:  ret
0848499f +0x168:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8484837

/* WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> >
   const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
   std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&,
   std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */

void WongWork::_GLOBAL__I_arad_parsing(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
