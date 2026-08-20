# EnableChat

`_ZN9GameWorld10EnableChatEPKc`

`GameWorld::EnableChat(char const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cdc60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cdc60  _ZN9GameWorld10EnableChatEPKc
#           GameWorld::EnableChat(char const*)
# range [0x086cdc60, 0x086cde59]
086cdc60 +0x000:  push   %ebp
086cdc61 +0x001:  mov    %esp,%ebp
086cdc63 +0x003:  push   %esi
086cdc64 +0x004:  push   %ebx
086cdc65 +0x005:  sub    $0x40,%esp
086cdc68 +0x008:  cmpl   $0x0,0xc(%ebp)
086cdc6c +0x00c:  jne    086cdc78 <+0x18>
086cdc6e +0x00e:  mov    $0x0,%ebx
086cdc73 +0x013:  jmp    086cde4e <+0x1ee>
086cdc78 +0x018:  mov    0xc(%ebp),%eax
086cdc7b +0x01b:  mov    %eax,(%esp)
086cdc7e +0x01e:  call   0807e3b0 <_init+0xca8>
086cdc83 +0x023:  cmp    $0x1e,%eax
086cdc86 +0x026:  jbe    086cdc92 <+0x32>
086cdc88 +0x028:  mov    $0x0,%ebx
086cdc8d +0x02d:  jmp    086cde4e <+0x1ee>
086cdc92 +0x032:  lea    -0x2d(%ebp),%eax
086cdc95 +0x035:  mov    %eax,(%esp)
086cdc98 +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086cdc9d +0x03d:  lea    -0x2d(%ebp),%eax
086cdca0 +0x040:  mov    %eax,0x8(%esp)
086cdca4 +0x044:  mov    0xc(%ebp),%eax
086cdca7 +0x047:  mov    %eax,0x4(%esp)
086cdcab +0x04b:  lea    -0x34(%ebp),%eax
086cdcae +0x04e:  mov    %eax,(%esp)
086cdcb1 +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086cdcb6 +0x056:  jmp    086cdcd3 <+0x73>
086cdcb8 +0x058:  mov    %edx,%ebx
086cdcba +0x05a:  mov    %eax,%esi
086cdcbc +0x05c:  lea    -0x2d(%ebp),%eax
086cdcbf +0x05f:  mov    %eax,(%esp)
086cdcc2 +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cdcc7 +0x067:  mov    %esi,%eax
086cdcc9 +0x069:  mov    %ebx,%edx
086cdccb +0x06b:  mov    %eax,(%esp)
086cdcce +0x06e:  call   08ae3750 <_Unwind_Resume>
086cdcd3 +0x073:  lea    -0x2d(%ebp),%eax
086cdcd6 +0x076:  mov    %eax,(%esp)
086cdcd9 +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cdcde +0x07e:  mov    0x8(%ebp),%eax
086cdce1 +0x081:  lea    0x8c(%eax),%ecx
086cdce7 +0x087:  lea    -0x38(%ebp),%eax
086cdcea +0x08a:  lea    -0x34(%ebp),%edx
086cdced +0x08d:  mov    %edx,0x8(%esp)
086cdcf1 +0x091:  mov    %ecx,0x4(%esp)
086cdcf5 +0x095:  mov    %eax,(%esp)
086cdcf8 +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086cdcfd +0x09d:  sub    $0x4,%esp
086cdd00 +0x0a0:  mov    0x8(%ebp),%eax
086cdd03 +0x0a3:  lea    0x8c(%eax),%edx
086cdd09 +0x0a9:  lea    -0x2c(%ebp),%eax
086cdd0c +0x0ac:  mov    %edx,0x4(%esp)
086cdd10 +0x0b0:  mov    %eax,(%esp)
086cdd13 +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086cdd18 +0x0b8:  sub    $0x4,%esp
086cdd1b +0x0bb:  lea    -0x2c(%ebp),%eax
086cdd1e +0x0be:  mov    %eax,0x4(%esp)
086cdd22 +0x0c2:  lea    -0x38(%ebp),%eax
086cdd25 +0x0c5:  mov    %eax,(%esp)
086cdd28 +0x0c8:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086cdd2d +0x0cd:  test   %al,%al
086cdd2f +0x0cf:  je     086cdd3b <+0xdb>
086cdd31 +0x0d1:  mov    $0x0,%ebx
086cdd36 +0x0d6:  jmp    086cde43 <+0x1e3>
086cdd3b +0x0db:  mov    0x8(%ebp),%eax
086cdd3e +0x0de:  lea    0x8c(%eax),%edx
086cdd44 +0x0e4:  lea    -0x34(%ebp),%eax
086cdd47 +0x0e7:  mov    %eax,0x4(%esp)
086cdd4b +0x0eb:  mov    %edx,(%esp)
086cdd4e +0x0ee:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086cdd53 +0x0f3:  movzbl 0x4(%eax),%eax
086cdd57 +0x0f7:  test   %al,%al
086cdd59 +0x0f9:  je     086cddda <+0x17a>
086cdd5b +0x0fb:  mov    0x8(%ebp),%eax
086cdd5e +0x0fe:  lea    0x8c(%eax),%edx
086cdd64 +0x104:  lea    -0x34(%ebp),%eax
086cdd67 +0x107:  mov    %eax,0x4(%esp)
086cdd6b +0x10b:  mov    %edx,(%esp)
086cdd6e +0x10e:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086cdd73 +0x113:  movb   $0x0,0x4(%eax)
086cdd77 +0x117:  mov    0x8(%ebp),%eax
086cdd7a +0x11a:  lea    0x8c(%eax),%edx
086cdd80 +0x120:  lea    -0x34(%ebp),%eax
086cdd83 +0x123:  mov    %eax,0x4(%esp)
086cdd87 +0x127:  mov    %edx,(%esp)
086cdd8a +0x12a:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086cdd8f +0x12f:  movl   $0x0,0x8(%eax)
086cdd96 +0x136:  movl   $0x0,0xc(%esp)
086cdd9e +0x13e:  movl   $0x156c,0x8(%esp)
086cdda6 +0x146:  movl   $&_ZZN9GameWorld10EnableChatEPKcE19__PRETTY_FUNCTION__,0x4(%esp)
086cddae +0x14e:  lea    -0x28(%ebp),%eax
086cddb1 +0x151:  mov    %eax,(%esp)
086cddb4 +0x154:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cddb9 +0x159:  mov    0xc(%ebp),%eax
086cddbc +0x15c:  mov    %eax,0x8(%esp)
086cddc0 +0x160:  movl   $"%s is able to chat now\n",0x4(%esp)
086cddc8 +0x168:  lea    -0x28(%ebp),%eax
086cddcb +0x16b:  mov    %eax,(%esp)
086cddce +0x16e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cddd3 +0x173:  mov    $0x1,%ebx
086cddd8 +0x178:  jmp    086cde43 <+0x1e3>
086cddda +0x17a:  lea    -0x34(%ebp),%eax
086cdddd +0x17d:  mov    %eax,(%esp)
086cdde0 +0x180:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086cdde5 +0x185:  mov    %eax,%ebx
086cdde7 +0x187:  movl   $0x0,0xc(%esp)
086cddef +0x18f:  movl   $0x1571,0x8(%esp)
086cddf7 +0x197:  movl   $&_ZZN9GameWorld10EnableChatEPKcE19__PRETTY_FUNCTION__,0x4(%esp)
086cddff +0x19f:  lea    -0x18(%ebp),%eax
086cde02 +0x1a2:  mov    %eax,(%esp)
086cde05 +0x1a5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cde0a +0x1aa:  mov    %ebx,0x8(%esp)
086cde0e +0x1ae:  movl   $"%s is already able to chat!\n",0x4(%esp)
086cde16 +0x1b6:  lea    -0x18(%ebp),%eax
086cde19 +0x1b9:  mov    %eax,(%esp)
086cde1c +0x1bc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cde21 +0x1c1:  mov    $0x1,%ebx
086cde26 +0x1c6:  jmp    086cde43 <+0x1e3>
086cde28 +0x1c8:  mov    %edx,%ebx
086cde2a +0x1ca:  mov    %eax,%esi
086cde2c +0x1cc:  lea    -0x34(%ebp),%eax
086cde2f +0x1cf:  mov    %eax,(%esp)
086cde32 +0x1d2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cde37 +0x1d7:  mov    %esi,%eax
086cde39 +0x1d9:  mov    %ebx,%edx
086cde3b +0x1db:  mov    %eax,(%esp)
086cde3e +0x1de:  call   08ae3750 <_Unwind_Resume>
086cde43 +0x1e3:  lea    -0x34(%ebp),%eax
086cde46 +0x1e6:  mov    %eax,(%esp)
086cde49 +0x1e9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cde4e +0x1ee:  mov    %ebx,%eax
086cde50 +0x1f0:  lea    -0x8(%ebp),%esp
086cde53 +0x1f3:  add    $0x0,%esp
086cde56 +0x1f6:  pop    %ebx
086cde57 +0x1f7:  pop    %esi
086cde58 +0x1f8:  pop    %ebp
086cde59 +0x1f9:  ret
```

## 反编译 C

```c
// GameWorld::EnableChat @ 0x86cdc60

/* GameWorld::EnableChat(char const*) */

undefined4 __thiscall GameWorld::EnableChat(GameWorld *this,char *param_1)

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
                    /* try { // try from 086cdcb1 to 086cdcb5 has its CatchHandler @ 086cdcb8 */
      std::string::string((string *)&local_38,param_1,(allocator *)&local_31);
      std::allocator<char>::~allocator(&local_31);
                    /* try { // try from 086cdcf8 to 086cde20 has its CatchHandler @ 086cde28 */
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
        if (*(char *)(iVar3 + 4) == '\0') {
          uVar4 = std::string::c_str((string *)&local_38);
          cMyTrace::cMyTrace(local_1c,"bool GameWorld::EnableChat(const char*)",0x1571,0);
          cMyTrace::operator()(local_1c,"%s is already able to chat!\n",uVar4);
          uVar4 = 1;
        }
        else {
          iVar3 = std::
                  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                  ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                                *)(this + 0x8c),&local_38);
          *(undefined1 *)(iVar3 + 4) = 0;
          iVar3 = std::
                  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                  ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                                *)(this + 0x8c),&local_38);
          *(undefined4 *)(iVar3 + 8) = 0;
          cMyTrace::cMyTrace(local_2c,"bool GameWorld::EnableChat(const char*)",0x156c,0);
          cMyTrace::operator()(local_2c,"%s is able to chat now\n",param_1);
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
