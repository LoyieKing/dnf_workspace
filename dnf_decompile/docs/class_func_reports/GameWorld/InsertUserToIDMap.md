# InsertUserToIDMap

`_ZN9GameWorld17InsertUserToIDMapEPKcj`

`GameWorld::InsertUserToIDMap(char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cd568` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cd568  _ZN9GameWorld17InsertUserToIDMapEPKcj
#           GameWorld::InsertUserToIDMap(char const*, unsigned int)
# range [0x086cd568, 0x086cd6b7]
086cd568 +0x000:  push   %ebp
086cd569 +0x001:  mov    %esp,%ebp
086cd56b +0x003:  push   %esi
086cd56c +0x004:  push   %ebx
086cd56d +0x005:  sub    $0x20,%esp
086cd570 +0x008:  cmpl   $0x0,0xc(%ebp)
086cd574 +0x00c:  jne    086cd580 <+0x18>
086cd576 +0x00e:  mov    $0x0,%ebx
086cd57b +0x013:  jmp    086cd6ac <+0x144>
086cd580 +0x018:  mov    0xc(%ebp),%eax
086cd583 +0x01b:  mov    %eax,(%esp)
086cd586 +0x01e:  call   0807e3b0 <_init+0xca8>
086cd58b +0x023:  cmp    $0x1e,%eax
086cd58e +0x026:  jbe    086cd59a <+0x32>
086cd590 +0x028:  mov    $0x0,%ebx
086cd595 +0x02d:  jmp    086cd6ac <+0x144>
086cd59a +0x032:  lea    -0xd(%ebp),%eax
086cd59d +0x035:  mov    %eax,(%esp)
086cd5a0 +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086cd5a5 +0x03d:  lea    -0xd(%ebp),%eax
086cd5a8 +0x040:  mov    %eax,0x8(%esp)
086cd5ac +0x044:  mov    0xc(%ebp),%eax
086cd5af +0x047:  mov    %eax,0x4(%esp)
086cd5b3 +0x04b:  lea    -0x14(%ebp),%eax
086cd5b6 +0x04e:  mov    %eax,(%esp)
086cd5b9 +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086cd5be +0x056:  jmp    086cd5db <+0x73>
086cd5c0 +0x058:  mov    %edx,%ebx
086cd5c2 +0x05a:  mov    %eax,%esi
086cd5c4 +0x05c:  lea    -0xd(%ebp),%eax
086cd5c7 +0x05f:  mov    %eax,(%esp)
086cd5ca +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cd5cf +0x067:  mov    %esi,%eax
086cd5d1 +0x069:  mov    %ebx,%edx
086cd5d3 +0x06b:  mov    %eax,(%esp)
086cd5d6 +0x06e:  call   08ae3750 <_Unwind_Resume>
086cd5db +0x073:  lea    -0xd(%ebp),%eax
086cd5de +0x076:  mov    %eax,(%esp)
086cd5e1 +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cd5e6 +0x07e:  mov    0x8(%ebp),%eax
086cd5e9 +0x081:  lea    0x8c(%eax),%ecx
086cd5ef +0x087:  lea    -0x18(%ebp),%eax
086cd5f2 +0x08a:  lea    -0x14(%ebp),%edx
086cd5f5 +0x08d:  mov    %edx,0x8(%esp)
086cd5f9 +0x091:  mov    %ecx,0x4(%esp)
086cd5fd +0x095:  mov    %eax,(%esp)
086cd600 +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086cd605 +0x09d:  sub    $0x4,%esp
086cd608 +0x0a0:  mov    0x8(%ebp),%eax
086cd60b +0x0a3:  lea    0x8c(%eax),%edx
086cd611 +0x0a9:  lea    -0xc(%ebp),%eax
086cd614 +0x0ac:  mov    %edx,0x4(%esp)
086cd618 +0x0b0:  mov    %eax,(%esp)
086cd61b +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086cd620 +0x0b8:  sub    $0x4,%esp
086cd623 +0x0bb:  lea    -0xc(%ebp),%eax
086cd626 +0x0be:  mov    %eax,0x4(%esp)
086cd62a +0x0c2:  lea    -0x18(%ebp),%eax
086cd62d +0x0c5:  mov    %eax,(%esp)
086cd630 +0x0c8:  call   086d416c <_GLOBAL__I_MAX_VILLAGE_NUM+0x299d>  ; global constructors keyed to MAX_VILLAGE_NUM+0x299d
086cd635 +0x0cd:  test   %al,%al
086cd637 +0x0cf:  je     086cd652 <+0xea>
086cd639 +0x0d1:  lea    -0x18(%ebp),%eax
086cd63c +0x0d4:  mov    %eax,(%esp)
086cd63f +0x0d7:  call   086d4180 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29b1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29b1
086cd644 +0x0dc:  mov    0x4(%eax),%eax
086cd647 +0x0df:  test   %eax,%eax
086cd649 +0x0e1:  je     086cd652 <+0xea>
086cd64b +0x0e3:  mov    $0x1,%eax
086cd650 +0x0e8:  jmp    086cd657 <+0xef>
086cd652 +0x0ea:  mov    $0x0,%eax
086cd657 +0x0ef:  test   %al,%al
086cd659 +0x0f1:  je     086cd662 <+0xfa>
086cd65b +0x0f3:  mov    $0x1,%ebx
086cd660 +0x0f8:  jmp    086cd6a1 <+0x139>
086cd662 +0x0fa:  mov    0x8(%ebp),%eax
086cd665 +0x0fd:  lea    0x8c(%eax),%edx
086cd66b +0x103:  lea    -0x14(%ebp),%eax
086cd66e +0x106:  mov    %eax,0x4(%esp)
086cd672 +0x10a:  mov    %edx,(%esp)
086cd675 +0x10d:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086cd67a +0x112:  mov    0x10(%ebp),%edx
086cd67d +0x115:  mov    %edx,(%eax)
086cd67f +0x117:  mov    $0x1,%ebx
086cd684 +0x11c:  jmp    086cd6a1 <+0x139>
086cd686 +0x11e:  mov    %edx,%ebx
086cd688 +0x120:  mov    %eax,%esi
086cd68a +0x122:  lea    -0x14(%ebp),%eax
086cd68d +0x125:  mov    %eax,(%esp)
086cd690 +0x128:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cd695 +0x12d:  mov    %esi,%eax
086cd697 +0x12f:  mov    %ebx,%edx
086cd699 +0x131:  mov    %eax,(%esp)
086cd69c +0x134:  call   08ae3750 <_Unwind_Resume>
086cd6a1 +0x139:  lea    -0x14(%ebp),%eax
086cd6a4 +0x13c:  mov    %eax,(%esp)
086cd6a7 +0x13f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cd6ac +0x144:  mov    %ebx,%eax
086cd6ae +0x146:  lea    -0x8(%ebp),%esp
086cd6b1 +0x149:  add    $0x0,%esp
086cd6b4 +0x14c:  pop    %ebx
086cd6b5 +0x14d:  pop    %esi
086cd6b6 +0x14e:  pop    %ebp
086cd6b7 +0x14f:  ret
```

## 反编译 C

```c
// GameWorld::InsertUserToIDMap @ 0x86cd568

/* GameWorld::InsertUserToIDMap(char const*, unsigned int) */

undefined4 __thiscall GameWorld::InsertUserToIDMap(GameWorld *this,char *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  string local_1c;
  string local_18;
  allocator<char> local_11;
  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
  local_10 [4];
  
  if (param_1 == (char *)0x0) {
    uVar6 = 0;
  }
  else {
    sVar3 = strlen(param_1);
    if (sVar3 < 0x1f) {
      std::allocator<char>::allocator();
                    /* try { // try from 086cd5b9 to 086cd5bd has its CatchHandler @ 086cd5c0 */
      std::string::string((string *)&local_18,param_1,(allocator *)&local_11);
      std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 086cd600 to 086cd679 has its CatchHandler @ 086cd686 */
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::find(&local_1c);
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::end(local_10);
      cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>>::operator!=
                        ((_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>> *)&local_1c,
                         (_Rb_tree_iterator *)local_10);
      if ((cVar2 == '\0') ||
         (iVar4 = std::_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>>::operator->
                            ((_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>> *)&local_1c
                            ), *(int *)(iVar4 + 4) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        puVar5 = (uint *)std::
                         map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                         ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                                       *)(this + 0x8c),&local_18);
        *puVar5 = param_2;
      }
      uVar6 = 1;
      std::string::~string((string *)&local_18);
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}
```
