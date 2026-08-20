# DeleteUserInIDMap

`_ZN9GameWorld17DeleteUserInIDMapEPKc`

`GameWorld::DeleteUserInIDMap(char const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cd6b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cd6b8  _ZN9GameWorld17DeleteUserInIDMapEPKc
#           GameWorld::DeleteUserInIDMap(char const*)
# range [0x086cd6b8, 0x086cd7e1]
086cd6b8 +0x000:  push   %ebp
086cd6b9 +0x001:  mov    %esp,%ebp
086cd6bb +0x003:  push   %esi
086cd6bc +0x004:  push   %ebx
086cd6bd +0x005:  sub    $0x20,%esp
086cd6c0 +0x008:  cmpl   $0x0,0xc(%ebp)
086cd6c4 +0x00c:  jne    086cd6d0 <+0x18>
086cd6c6 +0x00e:  mov    $0x0,%ebx
086cd6cb +0x013:  jmp    086cd7d5 <+0x11d>
086cd6d0 +0x018:  mov    0xc(%ebp),%eax
086cd6d3 +0x01b:  mov    %eax,(%esp)
086cd6d6 +0x01e:  call   0807e3b0 <_init+0xca8>
086cd6db +0x023:  cmp    $0x1e,%eax
086cd6de +0x026:  jbe    086cd6ea <+0x32>
086cd6e0 +0x028:  mov    $0x0,%ebx
086cd6e5 +0x02d:  jmp    086cd7d5 <+0x11d>
086cd6ea +0x032:  lea    -0xd(%ebp),%eax
086cd6ed +0x035:  mov    %eax,(%esp)
086cd6f0 +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086cd6f5 +0x03d:  lea    -0xd(%ebp),%eax
086cd6f8 +0x040:  mov    %eax,0x8(%esp)
086cd6fc +0x044:  mov    0xc(%ebp),%eax
086cd6ff +0x047:  mov    %eax,0x4(%esp)
086cd703 +0x04b:  lea    -0x14(%ebp),%eax
086cd706 +0x04e:  mov    %eax,(%esp)
086cd709 +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086cd70e +0x056:  jmp    086cd72b <+0x73>
086cd710 +0x058:  mov    %edx,%ebx
086cd712 +0x05a:  mov    %eax,%esi
086cd714 +0x05c:  lea    -0xd(%ebp),%eax
086cd717 +0x05f:  mov    %eax,(%esp)
086cd71a +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cd71f +0x067:  mov    %esi,%eax
086cd721 +0x069:  mov    %ebx,%edx
086cd723 +0x06b:  mov    %eax,(%esp)
086cd726 +0x06e:  call   08ae3750 <_Unwind_Resume>
086cd72b +0x073:  lea    -0xd(%ebp),%eax
086cd72e +0x076:  mov    %eax,(%esp)
086cd731 +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cd736 +0x07e:  mov    0x8(%ebp),%eax
086cd739 +0x081:  lea    0x8c(%eax),%ecx
086cd73f +0x087:  lea    -0x18(%ebp),%eax
086cd742 +0x08a:  lea    -0x14(%ebp),%edx
086cd745 +0x08d:  mov    %edx,0x8(%esp)
086cd749 +0x091:  mov    %ecx,0x4(%esp)
086cd74d +0x095:  mov    %eax,(%esp)
086cd750 +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086cd755 +0x09d:  sub    $0x4,%esp
086cd758 +0x0a0:  mov    0x8(%ebp),%eax
086cd75b +0x0a3:  lea    0x8c(%eax),%edx
086cd761 +0x0a9:  lea    -0xc(%ebp),%eax
086cd764 +0x0ac:  mov    %edx,0x4(%esp)
086cd768 +0x0b0:  mov    %eax,(%esp)
086cd76b +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086cd770 +0x0b8:  sub    $0x4,%esp
086cd773 +0x0bb:  lea    -0xc(%ebp),%eax
086cd776 +0x0be:  mov    %eax,0x4(%esp)
086cd77a +0x0c2:  lea    -0x18(%ebp),%eax
086cd77d +0x0c5:  mov    %eax,(%esp)
086cd780 +0x0c8:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086cd785 +0x0cd:  test   %al,%al
086cd787 +0x0cf:  je     086cd790 <+0xd8>
086cd789 +0x0d1:  mov    $0x0,%ebx
086cd78e +0x0d6:  jmp    086cd7ca <+0x112>
086cd790 +0x0d8:  mov    0x8(%ebp),%eax
086cd793 +0x0db:  lea    0x8c(%eax),%edx
086cd799 +0x0e1:  mov    -0x18(%ebp),%eax
086cd79c +0x0e4:  mov    %eax,0x4(%esp)
086cd7a0 +0x0e8:  mov    %edx,(%esp)
086cd7a3 +0x0eb:  call   086d42de <_GLOBAL__I_MAX_VILLAGE_NUM+0x2b0f>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2b0f
086cd7a8 +0x0f0:  mov    $0x1,%ebx
086cd7ad +0x0f5:  jmp    086cd7ca <+0x112>
086cd7af +0x0f7:  mov    %edx,%ebx
086cd7b1 +0x0f9:  mov    %eax,%esi
086cd7b3 +0x0fb:  lea    -0x14(%ebp),%eax
086cd7b6 +0x0fe:  mov    %eax,(%esp)
086cd7b9 +0x101:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cd7be +0x106:  mov    %esi,%eax
086cd7c0 +0x108:  mov    %ebx,%edx
086cd7c2 +0x10a:  mov    %eax,(%esp)
086cd7c5 +0x10d:  call   08ae3750 <_Unwind_Resume>
086cd7ca +0x112:  lea    -0x14(%ebp),%eax
086cd7cd +0x115:  mov    %eax,(%esp)
086cd7d0 +0x118:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cd7d5 +0x11d:  mov    %ebx,%eax
086cd7d7 +0x11f:  lea    -0x8(%ebp),%esp
086cd7da +0x122:  add    $0x0,%esp
086cd7dd +0x125:  pop    %ebx
086cd7de +0x126:  pop    %esi
086cd7df +0x127:  pop    %ebp
086cd7e0 +0x128:  ret
086cd7e1 +0x129:  nop
```

## 反编译 C

```c
// GameWorld::DeleteUserInIDMap @ 0x86cd6b8

/* GameWorld::DeleteUserInIDMap(char const*) */

bool __thiscall GameWorld::DeleteUserInIDMap(GameWorld *this,char *param_1)

{
  char cVar1;
  size_t sVar2;
  bool bVar3;
  string *psVar4;
  string local_1c;
  string local_18 [7];
  allocator<char> local_11;
  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
  local_10 [4];
  
  if (param_1 == (char *)0x0) {
    bVar3 = false;
  }
  else {
    sVar2 = strlen(param_1);
    if (sVar2 < 0x1f) {
      std::allocator<char>::allocator();
                    /* try { // try from 086cd709 to 086cd70d has its CatchHandler @ 086cd710 */
      std::string::string(local_18,param_1,(allocator *)&local_11);
      std::allocator<char>::~allocator(&local_11);
      psVar4 = local_18;
                    /* try { // try from 086cd750 to 086cd7a7 has its CatchHandler @ 086cd7af */
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::find(&local_1c);
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::end(local_10);
      cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>>::operator==
                        ((_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>> *)&local_1c,
                         (_Rb_tree_iterator *)local_10);
      bVar3 = cVar1 == '\0';
      if (bVar3) {
        std::
        map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
        ::erase((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                 *)(this + 0x8c),local_1c._M_dataplus._M_p,psVar4);
      }
      std::string::~string(local_18);
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}
```
