# WhenIsTheEndOfForbiddenChat

`_ZN9GameWorld27WhenIsTheEndOfForbiddenChatEPKc`

`GameWorld::WhenIsTheEndOfForbiddenChat(char const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ce4a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ce4a0  _ZN9GameWorld27WhenIsTheEndOfForbiddenChatEPKc
#           GameWorld::WhenIsTheEndOfForbiddenChat(char const*)
# range [0x086ce4a0, 0x086ce5ed]
086ce4a0 +0x000:  push   %ebp
086ce4a1 +0x001:  mov    %esp,%ebp
086ce4a3 +0x003:  push   %esi
086ce4a4 +0x004:  push   %ebx
086ce4a5 +0x005:  sub    $0x20,%esp
086ce4a8 +0x008:  cmpl   $0x0,0xc(%ebp)
086ce4ac +0x00c:  jne    086ce4b8 <+0x18>
086ce4ae +0x00e:  mov    $0x0,%ebx
086ce4b3 +0x013:  jmp    086ce5e2 <+0x142>
086ce4b8 +0x018:  mov    0xc(%ebp),%eax
086ce4bb +0x01b:  mov    %eax,(%esp)
086ce4be +0x01e:  call   0807e3b0 <_init+0xca8>
086ce4c3 +0x023:  cmp    $0x1e,%eax
086ce4c6 +0x026:  jbe    086ce4d2 <+0x32>
086ce4c8 +0x028:  mov    $0x0,%ebx
086ce4cd +0x02d:  jmp    086ce5e2 <+0x142>
086ce4d2 +0x032:  lea    -0xd(%ebp),%eax
086ce4d5 +0x035:  mov    %eax,(%esp)
086ce4d8 +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086ce4dd +0x03d:  lea    -0xd(%ebp),%eax
086ce4e0 +0x040:  mov    %eax,0x8(%esp)
086ce4e4 +0x044:  mov    0xc(%ebp),%eax
086ce4e7 +0x047:  mov    %eax,0x4(%esp)
086ce4eb +0x04b:  lea    -0x14(%ebp),%eax
086ce4ee +0x04e:  mov    %eax,(%esp)
086ce4f1 +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086ce4f6 +0x056:  jmp    086ce513 <+0x73>
086ce4f8 +0x058:  mov    %edx,%ebx
086ce4fa +0x05a:  mov    %eax,%esi
086ce4fc +0x05c:  lea    -0xd(%ebp),%eax
086ce4ff +0x05f:  mov    %eax,(%esp)
086ce502 +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce507 +0x067:  mov    %esi,%eax
086ce509 +0x069:  mov    %ebx,%edx
086ce50b +0x06b:  mov    %eax,(%esp)
086ce50e +0x06e:  call   08ae3750 <_Unwind_Resume>
086ce513 +0x073:  lea    -0xd(%ebp),%eax
086ce516 +0x076:  mov    %eax,(%esp)
086ce519 +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086ce51e +0x07e:  mov    0x8(%ebp),%eax
086ce521 +0x081:  lea    0x8c(%eax),%ecx
086ce527 +0x087:  lea    -0x18(%ebp),%eax
086ce52a +0x08a:  lea    -0x14(%ebp),%edx
086ce52d +0x08d:  mov    %edx,0x8(%esp)
086ce531 +0x091:  mov    %ecx,0x4(%esp)
086ce535 +0x095:  mov    %eax,(%esp)
086ce538 +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086ce53d +0x09d:  sub    $0x4,%esp
086ce540 +0x0a0:  mov    0x8(%ebp),%eax
086ce543 +0x0a3:  lea    0x8c(%eax),%edx
086ce549 +0x0a9:  lea    -0xc(%ebp),%eax
086ce54c +0x0ac:  mov    %edx,0x4(%esp)
086ce550 +0x0b0:  mov    %eax,(%esp)
086ce553 +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086ce558 +0x0b8:  sub    $0x4,%esp
086ce55b +0x0bb:  lea    -0xc(%ebp),%eax
086ce55e +0x0be:  mov    %eax,0x4(%esp)
086ce562 +0x0c2:  lea    -0x18(%ebp),%eax
086ce565 +0x0c5:  mov    %eax,(%esp)
086ce568 +0x0c8:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086ce56d +0x0cd:  test   %al,%al
086ce56f +0x0cf:  je     086ce578 <+0xd8>
086ce571 +0x0d1:  mov    $0x0,%ebx
086ce576 +0x0d6:  jmp    086ce5d7 <+0x137>
086ce578 +0x0d8:  mov    0x8(%ebp),%eax
086ce57b +0x0db:  lea    0x8c(%eax),%edx
086ce581 +0x0e1:  lea    -0x14(%ebp),%eax
086ce584 +0x0e4:  mov    %eax,0x4(%esp)
086ce588 +0x0e8:  mov    %edx,(%esp)
086ce58b +0x0eb:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086ce590 +0x0f0:  movzbl 0x4(%eax),%eax
086ce594 +0x0f4:  test   %al,%al
086ce596 +0x0f6:  je     086ce5b5 <+0x115>
086ce598 +0x0f8:  mov    0x8(%ebp),%eax
086ce59b +0x0fb:  lea    0x8c(%eax),%edx
086ce5a1 +0x101:  lea    -0x14(%ebp),%eax
086ce5a4 +0x104:  mov    %eax,0x4(%esp)
086ce5a8 +0x108:  mov    %edx,(%esp)
086ce5ab +0x10b:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086ce5b0 +0x110:  mov    0x8(%eax),%ebx
086ce5b3 +0x113:  jmp    086ce5d7 <+0x137>
086ce5b5 +0x115:  mov    $0x0,%ebx
086ce5ba +0x11a:  jmp    086ce5d7 <+0x137>
086ce5bc +0x11c:  mov    %edx,%ebx
086ce5be +0x11e:  mov    %eax,%esi
086ce5c0 +0x120:  lea    -0x14(%ebp),%eax
086ce5c3 +0x123:  mov    %eax,(%esp)
086ce5c6 +0x126:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce5cb +0x12b:  mov    %esi,%eax
086ce5cd +0x12d:  mov    %ebx,%edx
086ce5cf +0x12f:  mov    %eax,(%esp)
086ce5d2 +0x132:  call   08ae3750 <_Unwind_Resume>
086ce5d7 +0x137:  lea    -0x14(%ebp),%eax
086ce5da +0x13a:  mov    %eax,(%esp)
086ce5dd +0x13d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086ce5e2 +0x142:  mov    %ebx,%eax
086ce5e4 +0x144:  lea    -0x8(%ebp),%esp
086ce5e7 +0x147:  add    $0x0,%esp
086ce5ea +0x14a:  pop    %ebx
086ce5eb +0x14b:  pop    %esi
086ce5ec +0x14c:  pop    %ebp
086ce5ed +0x14d:  ret
```

## 反编译 C

```c
// GameWorld::WhenIsTheEndOfForbiddenChat @ 0x86ce4a0

/* GameWorld::WhenIsTheEndOfForbiddenChat(char const*) */

undefined4 __thiscall GameWorld::WhenIsTheEndOfForbiddenChat(GameWorld *this,char *param_1)

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
                    /* try { // try from 086ce4f1 to 086ce4f5 has its CatchHandler @ 086ce4f8 */
      std::string::string((string *)&local_18,param_1,(allocator *)&local_11);
      std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 086ce538 to 086ce5af has its CatchHandler @ 086ce5bc */
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
        if (*(char *)(iVar3 + 4) == '\0') {
          uVar4 = 0;
        }
        else {
          iVar3 = std::
                  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                  ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                                *)(this + 0x8c),&local_18);
          uVar4 = *(undefined4 *)(iVar3 + 8);
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
