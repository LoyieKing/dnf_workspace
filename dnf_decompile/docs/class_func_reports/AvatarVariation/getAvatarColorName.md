# getAvatarColorName

`_ZN15AvatarVariation18getAvatarColorNameEi`

`AvatarVariation::getAvatarColorName(int)`

| 类 | 地址 |
|---|---|
| `AvatarVariation` | `0x088d4896` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d4896  _ZN15AvatarVariation18getAvatarColorNameEi
#           AvatarVariation::getAvatarColorName(int)
# range [0x088d4896, 0x088d495b]
088d4896 +0x00:  push   %ebp
088d4897 +0x01:  mov    %esp,%ebp
088d4899 +0x03:  sub    $0x38,%esp
088d489c +0x06:  mov    0x8(%ebp),%eax
088d489f +0x09:  test   %eax,%eax
088d48a1 +0x0b:  js     088d48ad <+0x17>
088d48a3 +0x0d:  mov    0x8(%ebp),%eax
088d48a6 +0x10:  cmp    $0x1ff,%eax
088d48ab +0x15:  jle    088d48b7 <+0x21>
088d48ad +0x17:  mov    $0x0,%eax
088d48b2 +0x1c:  jmp    088d495a <+0xc4>
088d48b7 +0x21:  call   088d46d3 <_ZN15AvatarVariation22getAvatarColorInfoInstEv>  ; AvatarVariation::getAvatarColorInfoInst()
088d48bc +0x26:  add    $0x18,%eax
088d48bf +0x29:  mov    %eax,-0xc(%ebp)
088d48c2 +0x2c:  cmpl   $0x0,-0xc(%ebp)
088d48c6 +0x30:  jne    088d48d2 <+0x3c>
088d48c8 +0x32:  mov    $0x0,%eax
088d48cd +0x37:  jmp    088d495a <+0xc4>
088d48d2 +0x3c:  lea    -0x18(%ebp),%eax
088d48d5 +0x3f:  lea    0x8(%ebp),%edx
088d48d8 +0x42:  mov    %edx,0x8(%esp)
088d48dc +0x46:  mov    -0xc(%ebp),%edx
088d48df +0x49:  mov    %edx,0x4(%esp)
088d48e3 +0x4d:  mov    %eax,(%esp)
088d48e6 +0x50:  call   085802ba <_GLOBAL__I_msgs+0xd9>  ; global constructors keyed to msgs+0xd9
088d48eb +0x55:  sub    $0x4,%esp
088d48ee +0x58:  lea    -0x18(%ebp),%eax
088d48f1 +0x5b:  mov    %eax,0x4(%esp)
088d48f5 +0x5f:  lea    -0x1c(%ebp),%eax
088d48f8 +0x62:  mov    %eax,(%esp)
088d48fb +0x65:  call   08582e92 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1624>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1624
088d4900 +0x6a:  lea    -0x10(%ebp),%eax
088d4903 +0x6d:  mov    -0xc(%ebp),%edx
088d4906 +0x70:  mov    %edx,0x4(%esp)
088d490a +0x74:  mov    %eax,(%esp)
088d490d +0x77:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
088d4912 +0x7c:  sub    $0x4,%esp
088d4915 +0x7f:  lea    -0x10(%ebp),%eax
088d4918 +0x82:  mov    %eax,0x4(%esp)
088d491c +0x86:  lea    -0x14(%ebp),%eax
088d491f +0x89:  mov    %eax,(%esp)
088d4922 +0x8c:  call   08582e92 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1624>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1624
088d4927 +0x91:  lea    -0x14(%ebp),%eax
088d492a +0x94:  mov    %eax,0x4(%esp)
088d492e +0x98:  lea    -0x1c(%ebp),%eax
088d4931 +0x9b:  mov    %eax,(%esp)
088d4934 +0x9e:  call   080c6e7a <_GLOBAL__I_g_ServerString_+0x3e5>  ; global constructors keyed to g_ServerString_+0x3e5
088d4939 +0xa3:  test   %al,%al
088d493b +0xa5:  je     088d4955 <+0xbf>
088d493d +0xa7:  lea    -0x1c(%ebp),%eax
088d4940 +0xaa:  mov    %eax,(%esp)
088d4943 +0xad:  call   080c6e8e <_GLOBAL__I_g_ServerString_+0x3f9>  ; global constructors keyed to g_ServerString_+0x3f9
088d4948 +0xb2:  add    $0x4,%eax
088d494b +0xb5:  mov    %eax,(%esp)
088d494e +0xb8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
088d4953 +0xbd:  jmp    088d495a <+0xc4>
088d4955 +0xbf:  mov    $0x0,%eax
088d495a +0xc4:  leave
088d495b +0xc5:  ret
```

## 反编译 C

```c
// AvatarVariation::getAvatarColorName @ 0x88d4896

/* AvatarVariation::getAvatarColorName(int) */

undefined4 AvatarVariation::getAvatarColorName(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_20 [4];
  _Rb_tree_iterator local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_18 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  int local_10;
  
  if ((param_1 < 0) || (0x1ff < param_1)) {
    uVar2 = 0;
  }
  else {
    local_10 = getAvatarColorInfoInst();
    local_10 = local_10 + 0x18;
    if (local_10 == 0) {
      uVar2 = 0;
    }
    else {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      find((int *)local_1c);
      std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
                (local_20,local_1c);
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_14);
      std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
                (local_18,(_Rb_tree_iterator *)local_14);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                        (local_20,(_Rb_tree_const_iterator *)local_18);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->(local_20)
        ;
        uVar2 = std::string::c_str((string *)(iVar3 + 4));
      }
    }
  }
  return uVar2;
}
```
