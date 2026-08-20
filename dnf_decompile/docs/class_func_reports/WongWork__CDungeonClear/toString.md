# toString

`_ZNK8WongWork13CDungeonClear8toStringEPcj`

`WongWork::CDungeonClear::toString(char*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CDungeonClear` | `0x0848441c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848441c  _ZNK8WongWork13CDungeonClear8toStringEPcj
#           WongWork::CDungeonClear::toString(char*, unsigned int) const
# range [0x0848441c, 0x08484557]
0848441c +0x000:  push   %ebp
0848441d +0x001:  mov    %esp,%ebp
0848441f +0x003:  push   %ebx
08484420 +0x004:  sub    $0x34,%esp
08484423 +0x007:  mov    0x8(%ebp),%eax
08484426 +0x00a:  mov    %eax,(%esp)
08484429 +0x00d:  call   084848ca <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x93>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x93
0848442e +0x012:  test   %al,%al
08484430 +0x014:  je     0848443c <+0x20>
08484432 +0x016:  mov    $0x0,%eax
08484437 +0x01b:  jmp    08484552 <+0x136>
0848443c +0x020:  movl   $0x0,-0x10(%ebp)
08484443 +0x027:  movl   $0x0,-0xc(%ebp)
0848444a +0x02e:  mov    0x8(%ebp),%edx
0848444d +0x031:  lea    -0x14(%ebp),%eax
08484450 +0x034:  mov    %edx,0x4(%esp)
08484454 +0x038:  mov    %eax,(%esp)
08484457 +0x03b:  call   084848de <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0xa7>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0xa7
0848445c +0x040:  sub    $0x4,%esp
0848445f +0x043:  lea    -0x14(%ebp),%eax
08484462 +0x046:  mov    %eax,(%esp)
08484465 +0x049:  call   08484886 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x4f>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x4f
0848446a +0x04e:  movzbl 0x2(%eax),%eax
0848446e +0x052:  movsbl %al,%ebx
08484471 +0x055:  lea    -0x14(%ebp),%eax
08484474 +0x058:  mov    %eax,(%esp)
08484477 +0x05b:  call   08484886 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x4f>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x4f
0848447c +0x060:  movzwl (%eax),%eax
0848447f +0x063:  cwtl
08484480 +0x064:  mov    %ebx,0x10(%esp)
08484484 +0x068:  mov    %eax,0xc(%esp)
08484488 +0x06c:  movl   $"%d|%d",0x8(%esp)
08484490 +0x074:  mov    0x10(%ebp),%eax
08484493 +0x077:  mov    %eax,0x4(%esp)
08484497 +0x07b:  mov    0xc(%ebp),%eax
0848449a +0x07e:  mov    %eax,(%esp)
0848449d +0x081:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084844a2 +0x086:  mov    %eax,-0x10(%ebp)
084844a5 +0x089:  lea    -0x14(%ebp),%eax
084844a8 +0x08c:  mov    %eax,(%esp)
084844ab +0x08f:  call   08484904 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0xcd>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0xcd
084844b0 +0x094:  mov    0x8(%ebp),%edx
084844b3 +0x097:  lea    -0x18(%ebp),%eax
084844b6 +0x09a:  mov    %edx,0x4(%esp)
084844ba +0x09e:  mov    %eax,(%esp)
084844bd +0x0a1:  call   08484860 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x29>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x29
084844c2 +0x0a6:  sub    $0x4,%esp
084844c5 +0x0a9:  jmp    08484535 <+0x119>
084844c7 +0x0ab:  lea    -0x14(%ebp),%eax
084844ca +0x0ae:  mov    %eax,(%esp)
084844cd +0x0b1:  call   08484886 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x4f>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x4f
084844d2 +0x0b6:  movzbl 0x2(%eax),%eax
084844d6 +0x0ba:  movsbl %al,%ebx
084844d9 +0x0bd:  lea    -0x14(%ebp),%eax
084844dc +0x0c0:  mov    %eax,(%esp)
084844df +0x0c3:  call   08484886 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x4f>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x4f
084844e4 +0x0c8:  movzwl (%eax),%eax
084844e7 +0x0cb:  movswl %ax,%edx
084844ea +0x0ce:  mov    -0x10(%ebp),%eax
084844ed +0x0d1:  mov    0x10(%ebp),%ecx
084844f0 +0x0d4:  sub    %eax,%ecx
084844f2 +0x0d6:  mov    -0x10(%ebp),%eax
084844f5 +0x0d9:  add    0xc(%ebp),%eax
084844f8 +0x0dc:  mov    %ebx,0x10(%esp)
084844fc +0x0e0:  mov    %edx,0xc(%esp)
08484500 +0x0e4:  movl   $",%d|%d",0x8(%esp)
08484508 +0x0ec:  mov    %ecx,0x4(%esp)
0848450c +0x0f0:  mov    %eax,(%esp)
0848450f +0x0f3:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08484514 +0x0f8:  mov    %eax,-0xc(%ebp)
08484517 +0x0fb:  cmpl   $0x0,-0xc(%ebp)
0848451b +0x0ff:  jns    08484524 <+0x108>
0848451d +0x101:  mov    $0xffffffff,%eax
08484522 +0x106:  jmp    08484552 <+0x136>
08484524 +0x108:  mov    -0xc(%ebp),%eax
08484527 +0x10b:  add    %eax,-0x10(%ebp)
0848452a +0x10e:  lea    -0x14(%ebp),%eax
0848452d +0x111:  mov    %eax,(%esp)
08484530 +0x114:  call   08484904 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0xcd>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0xcd
08484535 +0x119:  lea    -0x18(%ebp),%eax
08484538 +0x11c:  mov    %eax,0x4(%esp)
0848453c +0x120:  lea    -0x14(%ebp),%eax
0848453f +0x123:  mov    %eax,(%esp)
08484542 +0x126:  call   08484922 <_GLOBAL__I__ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0xeb>  ; global constructors keyed to WongWork::arad_parsing(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0xeb
08484547 +0x12b:  test   %al,%al
08484549 +0x12d:  jne    084844c7 <+0xab>
0848454f +0x133:  mov    -0x10(%ebp),%eax
08484552 +0x136:  mov    -0x4(%ebp),%ebx
08484555 +0x139:  leave
08484556 +0x13a:  ret
08484557 +0x13b:  nop
```

## 反编译 C

```c
// WongWork::CDungeonClear::toString @ 0x848441c

/* WongWork::CDungeonClear::toString(char*, unsigned int) const */

int __thiscall WongWork::CDungeonClear::toString(CDungeonClear *this,char *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_1c [4];
  map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> local_18 [4];
  int local_14;
  int local_10;
  
  cVar1 = std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::empty
                    ((map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>> *
                     )this);
  if (cVar1 == '\0') {
    local_14 = 0;
    local_10 = 0;
    std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::begin
              (local_18);
    iVar2 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18);
    cVar1 = *(char *)(iVar2 + 2);
    psVar3 = (short *)std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                                ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18);
    local_14 = OS_API::snprintf(param_1,param_2,"%d|%d",(int)*psVar3,(int)cVar1);
    std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator++
              ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18);
    std::map<short,char,std::less<short>,std::allocator<std::pair<short_const,char>>>::end(local_1c)
    ;
    while (cVar1 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator!=
                             ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18,
                              (_Rb_tree_const_iterator *)local_1c), cVar1 != '\0') {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18);
      cVar1 = *(char *)(iVar2 + 2);
      psVar3 = (short *)std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator->
                                  ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18)
      ;
      local_10 = OS_API::snprintf(param_1 + local_14,param_2 - local_14,",%d|%d",(int)*psVar3,
                                  (int)cVar1);
      if (local_10 < 0) {
        return -1;
      }
      local_14 = local_14 + local_10;
      std::_Rb_tree_const_iterator<std::pair<short_const,char>>::operator++
                ((_Rb_tree_const_iterator<std::pair<short_const,char>> *)local_18);
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}
```
