# WhenIsTheEndOfForbiddenMove

`_ZN9GameWorld27WhenIsTheEndOfForbiddenMoveEPKc`

`GameWorld::WhenIsTheEndOfForbiddenMove(char const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ce5ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ce5ee  _ZN9GameWorld27WhenIsTheEndOfForbiddenMoveEPKc
#           GameWorld::WhenIsTheEndOfForbiddenMove(char const*)
# range [0x086ce5ee, 0x086ce73b]
086ce5ee +0x000:  push   %ebp
086ce5ef +0x001:  mov    %esp,%ebp
086ce5f1 +0x003:  push   %esi
086ce5f2 +0x004:  push   %ebx
086ce5f3 +0x005:  sub    $0x20,%esp
086ce5f6 +0x008:  cmpl   $0x0,0xc(%ebp)
086ce5fa +0x00c:  jne    086ce606 <+0x18>
086ce5fc +0x00e:  mov    $0x0,%ebx
086ce601 +0x013:  jmp    086ce730 <+0x142>
086ce606 +0x018:  mov    0xc(%ebp),%eax
086ce609 +0x01b:  mov    %eax,(%esp)
086ce60c +0x01e:  call   0807e3b0 <_init+0xca8>
086ce611 +0x023:  cmp    $0x1e,%eax
086ce614 +0x026:  jbe    086ce620 <+0x32>
086ce616 +0x028:  mov    $0x0,%ebx
086ce61b +0x02d:  jmp    086ce730 <+0x142>
086ce620 +0x032:  lea    -0xd(%ebp),%eax
086ce623 +0x035:  mov    %eax,(%esp)
086ce626 +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086ce62b +0x03d:  lea    -0xd(%ebp),%eax
086ce62e +0x040:  mov    %eax,0x8(%esp)
086ce632 +0x044:  mov    0xc(%ebp),%eax
086ce635 +0x047:  mov    %eax,0x4(%esp)
086ce639 +0x04b:  lea    -0x14(%ebp),%eax
086ce63c +0x04e:  mov    %eax,(%esp)
086ce63f +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086ce644 +0x056:  jmp    086ce661 <+0x73>
086ce646 +0x058:  mov    %edx,%ebx
086ce648 +0x05a:  mov    %eax,%esi
086ce64a +0x05c:  lea    -0xd(%ebp),%eax
086ce64d +0x05f:  mov    %eax,(%esp)
086ce650 +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce655 +0x067:  mov    %esi,%eax
086ce657 +0x069:  mov    %ebx,%edx
086ce659 +0x06b:  mov    %eax,(%esp)
086ce65c +0x06e:  call   08ae3750 <_Unwind_Resume>
086ce661 +0x073:  lea    -0xd(%ebp),%eax
086ce664 +0x076:  mov    %eax,(%esp)
086ce667 +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce66c +0x07e:  mov    0x8(%ebp),%eax
086ce66f +0x081:  lea    0x8c(%eax),%ecx
086ce675 +0x087:  lea    -0x18(%ebp),%eax
086ce678 +0x08a:  lea    -0x14(%ebp),%edx
086ce67b +0x08d:  mov    %edx,0x8(%esp)
086ce67f +0x091:  mov    %ecx,0x4(%esp)
086ce683 +0x095:  mov    %eax,(%esp)
086ce686 +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086ce68b +0x09d:  sub    $0x4,%esp
086ce68e +0x0a0:  mov    0x8(%ebp),%eax
086ce691 +0x0a3:  lea    0x8c(%eax),%edx
086ce697 +0x0a9:  lea    -0xc(%ebp),%eax
086ce69a +0x0ac:  mov    %edx,0x4(%esp)
086ce69e +0x0b0:  mov    %eax,(%esp)
086ce6a1 +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086ce6a6 +0x0b8:  sub    $0x4,%esp
086ce6a9 +0x0bb:  lea    -0xc(%ebp),%eax
086ce6ac +0x0be:  mov    %eax,0x4(%esp)
086ce6b0 +0x0c2:  lea    -0x18(%ebp),%eax
086ce6b3 +0x0c5:  mov    %eax,(%esp)
086ce6b6 +0x0c8:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086ce6bb +0x0cd:  test   %al,%al
086ce6bd +0x0cf:  je     086ce6c6 <+0xd8>
086ce6bf +0x0d1:  mov    $0x0,%ebx
086ce6c4 +0x0d6:  jmp    086ce725 <+0x137>
086ce6c6 +0x0d8:  mov    0x8(%ebp),%eax
086ce6c9 +0x0db:  lea    0x8c(%eax),%edx
086ce6cf +0x0e1:  lea    -0x14(%ebp),%eax
086ce6d2 +0x0e4:  mov    %eax,0x4(%esp)
086ce6d6 +0x0e8:  mov    %edx,(%esp)
086ce6d9 +0x0eb:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086ce6de +0x0f0:  movzbl 0x5(%eax),%eax
086ce6e2 +0x0f4:  test   %al,%al
086ce6e4 +0x0f6:  je     086ce703 <+0x115>
086ce6e6 +0x0f8:  mov    0x8(%ebp),%eax
086ce6e9 +0x0fb:  lea    0x8c(%eax),%edx
086ce6ef +0x101:  lea    -0x14(%ebp),%eax
086ce6f2 +0x104:  mov    %eax,0x4(%esp)
086ce6f6 +0x108:  mov    %edx,(%esp)
086ce6f9 +0x10b:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086ce6fe +0x110:  mov    0xc(%eax),%ebx
086ce701 +0x113:  jmp    086ce725 <+0x137>
086ce703 +0x115:  mov    $0x0,%ebx
086ce708 +0x11a:  jmp    086ce725 <+0x137>
086ce70a +0x11c:  mov    %edx,%ebx
086ce70c +0x11e:  mov    %eax,%esi
086ce70e +0x120:  lea    -0x14(%ebp),%eax
086ce711 +0x123:  mov    %eax,(%esp)
086ce714 +0x126:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce719 +0x12b:  mov    %esi,%eax
086ce71b +0x12d:  mov    %ebx,%edx
086ce71d +0x12f:  mov    %eax,(%esp)
086ce720 +0x132:  call   08ae3750 <_Unwind_Resume>
086ce725 +0x137:  lea    -0x14(%ebp),%eax
086ce728 +0x13a:  mov    %eax,(%esp)
086ce72b +0x13d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce730 +0x142:  mov    %ebx,%eax
086ce732 +0x144:  lea    -0x8(%ebp),%esp
086ce735 +0x147:  add    $0x0,%esp
086ce738 +0x14a:  pop    %ebx
086ce739 +0x14b:  pop    %esi
086ce73a +0x14c:  pop    %ebp
086ce73b +0x14d:  ret
```

## 反编译 C

```c
// GameWorld::WhenIsTheEndOfForbiddenMove @ 0x86ce5ee

/* GameWorld::WhenIsTheEndOfForbiddenMove(char const*) */

undefined4 __thiscall GameWorld::WhenIsTheEndOfForbiddenMove(GameWorld *this,char *param_1)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  string local_1c;
  string local_18;
  allocator<char> local_11;
  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
  local_10 [4];
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    sVar2 = strlen(param_1);
    if (sVar2 < 0x1f) {
      std::allocator<char>::allocator();
                    /* try { // try from 086ce63f to 086ce643 has its CatchHandler @ 086ce646 */
      std::string::string((string *)&local_18,param_1,(allocator *)&local_11);
      std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 086ce686 to 086ce6fd has its CatchHandler @ 086ce70a */
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::find(&local_1c);
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::end(local_10);
      cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>>::operator==
                        ((_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>> *)&local_1c,
                         (_Rb_tree_iterator *)local_10);
      if (cVar1 == '\0') {
        iVar3 = std::
                map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                              *)(this + 0x8c),&local_18);
        if (*(char *)(iVar3 + 5) == '\0') {
          uVar4 = 0;
        }
        else {
          iVar3 = std::
                  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                  ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                                *)(this + 0x8c),&local_18);
          uVar4 = *(undefined4 *)(iVar3 + 0xc);
        }
      }
      else {
        uVar4 = 0;
      }
      std::string::~string((string *)&local_18);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
