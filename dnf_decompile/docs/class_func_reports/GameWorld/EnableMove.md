# EnableMove

`_ZN9GameWorld10EnableMoveEPKc`

`GameWorld::EnableMove(char const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cde5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cde5a  _ZN9GameWorld10EnableMoveEPKc
#           GameWorld::EnableMove(char const*)
# range [0x086cde5a, 0x086ce053]
086cde5a +0x000:  push   %ebp
086cde5b +0x001:  mov    %esp,%ebp
086cde5d +0x003:  push   %esi
086cde5e +0x004:  push   %ebx
086cde5f +0x005:  sub    $0x40,%esp
086cde62 +0x008:  cmpl   $0x0,0xc(%ebp)
086cde66 +0x00c:  jne    086cde72 <+0x18>
086cde68 +0x00e:  mov    $0x0,%ebx
086cde6d +0x013:  jmp    086ce048 <+0x1ee>
086cde72 +0x018:  mov    0xc(%ebp),%eax
086cde75 +0x01b:  mov    %eax,(%esp)
086cde78 +0x01e:  call   0807e3b0 <_init+0xca8>
086cde7d +0x023:  cmp    $0x1e,%eax
086cde80 +0x026:  jbe    086cde8c <+0x32>
086cde82 +0x028:  mov    $0x0,%ebx
086cde87 +0x02d:  jmp    086ce048 <+0x1ee>
086cde8c +0x032:  lea    -0x2d(%ebp),%eax
086cde8f +0x035:  mov    %eax,(%esp)
086cde92 +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086cde97 +0x03d:  lea    -0x2d(%ebp),%eax
086cde9a +0x040:  mov    %eax,0x8(%esp)
086cde9e +0x044:  mov    0xc(%ebp),%eax
086cdea1 +0x047:  mov    %eax,0x4(%esp)
086cdea5 +0x04b:  lea    -0x34(%ebp),%eax
086cdea8 +0x04e:  mov    %eax,(%esp)
086cdeab +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086cdeb0 +0x056:  jmp    086cdecd <+0x73>
086cdeb2 +0x058:  mov    %edx,%ebx
086cdeb4 +0x05a:  mov    %eax,%esi
086cdeb6 +0x05c:  lea    -0x2d(%ebp),%eax
086cdeb9 +0x05f:  mov    %eax,(%esp)
086cdebc +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cdec1 +0x067:  mov    %esi,%eax
086cdec3 +0x069:  mov    %ebx,%edx
086cdec5 +0x06b:  mov    %eax,(%esp)
086cdec8 +0x06e:  call   08ae3750 <_Unwind_Resume>
086cdecd +0x073:  lea    -0x2d(%ebp),%eax
086cded0 +0x076:  mov    %eax,(%esp)
086cded3 +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cded8 +0x07e:  mov    0x8(%ebp),%eax
086cdedb +0x081:  lea    0x8c(%eax),%ecx
086cdee1 +0x087:  lea    -0x38(%ebp),%eax
086cdee4 +0x08a:  lea    -0x34(%ebp),%edx
086cdee7 +0x08d:  mov    %edx,0x8(%esp)
086cdeeb +0x091:  mov    %ecx,0x4(%esp)
086cdeef +0x095:  mov    %eax,(%esp)
086cdef2 +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086cdef7 +0x09d:  sub    $0x4,%esp
086cdefa +0x0a0:  mov    0x8(%ebp),%eax
086cdefd +0x0a3:  lea    0x8c(%eax),%edx
086cdf03 +0x0a9:  lea    -0x2c(%ebp),%eax
086cdf06 +0x0ac:  mov    %edx,0x4(%esp)
086cdf0a +0x0b0:  mov    %eax,(%esp)
086cdf0d +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086cdf12 +0x0b8:  sub    $0x4,%esp
086cdf15 +0x0bb:  lea    -0x2c(%ebp),%eax
086cdf18 +0x0be:  mov    %eax,0x4(%esp)
086cdf1c +0x0c2:  lea    -0x38(%ebp),%eax
086cdf1f +0x0c5:  mov    %eax,(%esp)
086cdf22 +0x0c8:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086cdf27 +0x0cd:  test   %al,%al
086cdf29 +0x0cf:  je     086cdf35 <+0xdb>
086cdf2b +0x0d1:  mov    $0x0,%ebx
086cdf30 +0x0d6:  jmp    086ce03d <+0x1e3>
086cdf35 +0x0db:  mov    0x8(%ebp),%eax
086cdf38 +0x0de:  lea    0x8c(%eax),%edx
086cdf3e +0x0e4:  lea    -0x34(%ebp),%eax
086cdf41 +0x0e7:  mov    %eax,0x4(%esp)
086cdf45 +0x0eb:  mov    %edx,(%esp)
086cdf48 +0x0ee:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086cdf4d +0x0f3:  movzbl 0x5(%eax),%eax
086cdf51 +0x0f7:  test   %al,%al
086cdf53 +0x0f9:  je     086cdfd4 <+0x17a>
086cdf55 +0x0fb:  mov    0x8(%ebp),%eax
086cdf58 +0x0fe:  lea    0x8c(%eax),%edx
086cdf5e +0x104:  lea    -0x34(%ebp),%eax
086cdf61 +0x107:  mov    %eax,0x4(%esp)
086cdf65 +0x10b:  mov    %edx,(%esp)
086cdf68 +0x10e:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086cdf6d +0x113:  movb   $0x0,0x5(%eax)
086cdf71 +0x117:  mov    0x8(%ebp),%eax
086cdf74 +0x11a:  lea    0x8c(%eax),%edx
086cdf7a +0x120:  lea    -0x34(%ebp),%eax
086cdf7d +0x123:  mov    %eax,0x4(%esp)
086cdf81 +0x127:  mov    %edx,(%esp)
086cdf84 +0x12a:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086cdf89 +0x12f:  movl   $0x0,0xc(%eax)
086cdf90 +0x136:  movl   $0x0,0xc(%esp)
086cdf98 +0x13e:  movl   $0x1584,0x8(%esp)
086cdfa0 +0x146:  movl   $&_ZZN9GameWorld10EnableMoveEPKcE19__PRETTY_FUNCTION__,0x4(%esp)
086cdfa8 +0x14e:  lea    -0x28(%ebp),%eax
086cdfab +0x151:  mov    %eax,(%esp)
086cdfae +0x154:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cdfb3 +0x159:  mov    0xc(%ebp),%eax
086cdfb6 +0x15c:  mov    %eax,0x8(%esp)
086cdfba +0x160:  movl   $"%s is able to move now\n",0x4(%esp)
086cdfc2 +0x168:  lea    -0x28(%ebp),%eax
086cdfc5 +0x16b:  mov    %eax,(%esp)
086cdfc8 +0x16e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cdfcd +0x173:  mov    $0x1,%ebx
086cdfd2 +0x178:  jmp    086ce03d <+0x1e3>
086cdfd4 +0x17a:  lea    -0x34(%ebp),%eax
086cdfd7 +0x17d:  mov    %eax,(%esp)
086cdfda +0x180:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086cdfdf +0x185:  mov    %eax,%ebx
086cdfe1 +0x187:  movl   $0x0,0xc(%esp)
086cdfe9 +0x18f:  movl   $0x1589,0x8(%esp)
086cdff1 +0x197:  movl   $&_ZZN9GameWorld10EnableMoveEPKcE19__PRETTY_FUNCTION__,0x4(%esp)
086cdff9 +0x19f:  lea    -0x18(%ebp),%eax
086cdffc +0x1a2:  mov    %eax,(%esp)
086cdfff +0x1a5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086ce004 +0x1aa:  mov    %ebx,0x8(%esp)
086ce008 +0x1ae:  movl   $"%s is already able to move!\n",0x4(%esp)
086ce010 +0x1b6:  lea    -0x18(%ebp),%eax
086ce013 +0x1b9:  mov    %eax,(%esp)
086ce016 +0x1bc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086ce01b +0x1c1:  mov    $0x1,%ebx
086ce020 +0x1c6:  jmp    086ce03d <+0x1e3>
086ce022 +0x1c8:  mov    %edx,%ebx
086ce024 +0x1ca:  mov    %eax,%esi
086ce026 +0x1cc:  lea    -0x34(%ebp),%eax
086ce029 +0x1cf:  mov    %eax,(%esp)
086ce02c +0x1d2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce031 +0x1d7:  mov    %esi,%eax
086ce033 +0x1d9:  mov    %ebx,%edx
086ce035 +0x1db:  mov    %eax,(%esp)
086ce038 +0x1de:  call   08ae3750 <_Unwind_Resume>
086ce03d +0x1e3:  lea    -0x34(%ebp),%eax
086ce040 +0x1e6:  mov    %eax,(%esp)
086ce043 +0x1e9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce048 +0x1ee:  mov    %ebx,%eax
086ce04a +0x1f0:  lea    -0x8(%ebp),%esp
086ce04d +0x1f3:  add    $0x0,%esp
086ce050 +0x1f6:  pop    %ebx
086ce051 +0x1f7:  pop    %esi
086ce052 +0x1f8:  pop    %ebp
086ce053 +0x1f9:  ret
```

## 反编译 C

```c
// GameWorld::EnableMove @ 0x86cde5a

/* GameWorld::EnableMove(char const*) */

undefined4 __thiscall GameWorld::EnableMove(GameWorld *this,char *param_1)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  string local_3c;
  string local_38;
  allocator<char> local_31;
  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
  local_30 [4];
  cMyTrace local_2c [16];
  cMyTrace local_1c [16];
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    sVar2 = strlen(param_1);
    if (sVar2 < 0x1f) {
      std::allocator<char>::allocator();
                    /* try { // try from 086cdeab to 086cdeaf has its CatchHandler @ 086cdeb2 */
      std::string::string((string *)&local_38,param_1,(allocator *)&local_31);
      std::allocator<char>::~allocator(&local_31);
                    /* try { // try from 086cdef2 to 086ce01a has its CatchHandler @ 086ce022 */
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::find(&local_3c);
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::end(local_30);
      cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>>::operator==
                        ((_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>> *)&local_3c,
                         (_Rb_tree_iterator *)local_30);
      if (cVar1 == '\0') {
        iVar3 = std::
                map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                              *)(this + 0x8c),&local_38);
        if (*(char *)(iVar3 + 5) == '\0') {
          uVar4 = std::string::c_str((string *)&local_38);
          cMyTrace::cMyTrace(local_1c,"bool GameWorld::EnableMove(const char*)",0x1589,0);
          cMyTrace::operator()(local_1c,"%s is already able to move!\n",uVar4);
          uVar4 = 1;
        }
        else {
          iVar3 = std::
                  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                  ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                                *)(this + 0x8c),&local_38);
          *(undefined1 *)(iVar3 + 5) = 0;
          iVar3 = std::
                  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                  ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                                *)(this + 0x8c),&local_38);
          *(undefined4 *)(iVar3 + 0xc) = 0;
          cMyTrace::cMyTrace(local_2c,"bool GameWorld::EnableMove(const char*)",0x1584,0);
          cMyTrace::operator()(local_2c,"%s is able to move now\n",param_1);
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
      std::string::~string((string *)&local_38);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
