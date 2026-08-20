# GetIDUserInIDMap

`_ZN9GameWorld16GetIDUserInIDMapEPKc`

`GameWorld::GetIDUserInIDMap(char const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cd7e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cd7e2  _ZN9GameWorld16GetIDUserInIDMapEPKc
#           GameWorld::GetIDUserInIDMap(char const*)
# range [0x086cd7e2, 0x086cd907]
086cd7e2 +0x000:  push   %ebp
086cd7e3 +0x001:  mov    %esp,%ebp
086cd7e5 +0x003:  push   %esi
086cd7e6 +0x004:  push   %ebx
086cd7e7 +0x005:  sub    $0x20,%esp
086cd7ea +0x008:  cmpl   $0x0,0xc(%ebp)
086cd7ee +0x00c:  jne    086cd7fa <+0x18>
086cd7f0 +0x00e:  mov    $0x0,%ebx
086cd7f5 +0x013:  jmp    086cd8fc <+0x11a>
086cd7fa +0x018:  mov    0xc(%ebp),%eax
086cd7fd +0x01b:  mov    %eax,(%esp)
086cd800 +0x01e:  call   0807e3b0 <_init+0xca8>
086cd805 +0x023:  cmp    $0x1e,%eax
086cd808 +0x026:  jbe    086cd814 <+0x32>
086cd80a +0x028:  mov    $0x0,%ebx
086cd80f +0x02d:  jmp    086cd8fc <+0x11a>
086cd814 +0x032:  lea    -0xd(%ebp),%eax
086cd817 +0x035:  mov    %eax,(%esp)
086cd81a +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086cd81f +0x03d:  lea    -0xd(%ebp),%eax
086cd822 +0x040:  mov    %eax,0x8(%esp)
086cd826 +0x044:  mov    0xc(%ebp),%eax
086cd829 +0x047:  mov    %eax,0x4(%esp)
086cd82d +0x04b:  lea    -0x14(%ebp),%eax
086cd830 +0x04e:  mov    %eax,(%esp)
086cd833 +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086cd838 +0x056:  jmp    086cd855 <+0x73>
086cd83a +0x058:  mov    %edx,%ebx
086cd83c +0x05a:  mov    %eax,%esi
086cd83e +0x05c:  lea    -0xd(%ebp),%eax
086cd841 +0x05f:  mov    %eax,(%esp)
086cd844 +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cd849 +0x067:  mov    %esi,%eax
086cd84b +0x069:  mov    %ebx,%edx
086cd84d +0x06b:  mov    %eax,(%esp)
086cd850 +0x06e:  call   08ae3750 <_Unwind_Resume>
086cd855 +0x073:  lea    -0xd(%ebp),%eax
086cd858 +0x076:  mov    %eax,(%esp)
086cd85b +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cd860 +0x07e:  mov    0x8(%ebp),%eax
086cd863 +0x081:  lea    0x8c(%eax),%ecx
086cd869 +0x087:  lea    -0x18(%ebp),%eax
086cd86c +0x08a:  lea    -0x14(%ebp),%edx
086cd86f +0x08d:  mov    %edx,0x8(%esp)
086cd873 +0x091:  mov    %ecx,0x4(%esp)
086cd877 +0x095:  mov    %eax,(%esp)
086cd87a +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086cd87f +0x09d:  sub    $0x4,%esp
086cd882 +0x0a0:  mov    0x8(%ebp),%eax
086cd885 +0x0a3:  lea    0x8c(%eax),%edx
086cd88b +0x0a9:  lea    -0xc(%ebp),%eax
086cd88e +0x0ac:  mov    %edx,0x4(%esp)
086cd892 +0x0b0:  mov    %eax,(%esp)
086cd895 +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086cd89a +0x0b8:  sub    $0x4,%esp
086cd89d +0x0bb:  lea    -0xc(%ebp),%eax
086cd8a0 +0x0be:  mov    %eax,0x4(%esp)
086cd8a4 +0x0c2:  lea    -0x18(%ebp),%eax
086cd8a7 +0x0c5:  mov    %eax,(%esp)
086cd8aa +0x0c8:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086cd8af +0x0cd:  test   %al,%al
086cd8b1 +0x0cf:  je     086cd8ba <+0xd8>
086cd8b3 +0x0d1:  mov    $0x0,%ebx
086cd8b8 +0x0d6:  jmp    086cd8f1 <+0x10f>
086cd8ba +0x0d8:  mov    0x8(%ebp),%eax
086cd8bd +0x0db:  lea    0x8c(%eax),%edx
086cd8c3 +0x0e1:  lea    -0x14(%ebp),%eax
086cd8c6 +0x0e4:  mov    %eax,0x4(%esp)
086cd8ca +0x0e8:  mov    %edx,(%esp)
086cd8cd +0x0eb:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086cd8d2 +0x0f0:  mov    (%eax),%ebx
086cd8d4 +0x0f2:  jmp    086cd8f1 <+0x10f>
086cd8d6 +0x0f4:  mov    %edx,%ebx
086cd8d8 +0x0f6:  mov    %eax,%esi
086cd8da +0x0f8:  lea    -0x14(%ebp),%eax
086cd8dd +0x0fb:  mov    %eax,(%esp)
086cd8e0 +0x0fe:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cd8e5 +0x103:  mov    %esi,%eax
086cd8e7 +0x105:  mov    %ebx,%edx
086cd8e9 +0x107:  mov    %eax,(%esp)
086cd8ec +0x10a:  call   08ae3750 <_Unwind_Resume>
086cd8f1 +0x10f:  lea    -0x14(%ebp),%eax
086cd8f4 +0x112:  mov    %eax,(%esp)
086cd8f7 +0x115:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cd8fc +0x11a:  mov    %ebx,%eax
086cd8fe +0x11c:  lea    -0x8(%ebp),%esp
086cd901 +0x11f:  add    $0x0,%esp
086cd904 +0x122:  pop    %ebx
086cd905 +0x123:  pop    %esi
086cd906 +0x124:  pop    %ebp
086cd907 +0x125:  ret
```

## 反编译 C

```c
// GameWorld::GetIDUserInIDMap @ 0x86cd7e2

/* GameWorld::GetIDUserInIDMap(char const*) */

undefined4 __thiscall GameWorld::GetIDUserInIDMap(GameWorld *this,char *param_1)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
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
                    /* try { // try from 086cd833 to 086cd837 has its CatchHandler @ 086cd83a */
      std::string::string((string *)&local_18,param_1,(allocator *)&local_11);
      std::allocator<char>::~allocator(&local_11);
                    /* try { // try from 086cd87a to 086cd8d1 has its CatchHandler @ 086cd8d6 */
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
        puVar3 = (undefined4 *)
                 std::
                 map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                 ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                               *)(this + 0x8c),&local_18);
        uVar4 = *puVar3;
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
