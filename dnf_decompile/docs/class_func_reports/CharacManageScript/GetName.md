# GetName

`_ZN18CharacManageScript7GetNameEj`

`CharacManageScript::GetName(unsigned int)`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e1166` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e1166  _ZN18CharacManageScript7GetNameEj
#           CharacManageScript::GetName(unsigned int)
# range [0x088e1166, 0x088e11f9]
088e1166 +0x00:  push   %ebp
088e1167 +0x01:  mov    %esp,%ebp
088e1169 +0x03:  push   %esi
088e116a +0x04:  push   %ebx
088e116b +0x05:  sub    $0x20,%esp
088e116e +0x08:  mov    0x8(%ebp),%ebx
088e1171 +0x0b:  mov    0x10(%ebp),%eax
088e1174 +0x0e:  mov    %eax,-0x10(%ebp)
088e1177 +0x11:  mov    0xc(%ebp),%eax
088e117a +0x14:  lea    0x4c(%eax),%ecx
088e117d +0x17:  lea    -0x14(%ebp),%eax
088e1180 +0x1a:  lea    -0x10(%ebp),%edx
088e1183 +0x1d:  mov    %edx,0x8(%esp)
088e1187 +0x21:  mov    %ecx,0x4(%esp)
088e118b +0x25:  mov    %eax,(%esp)
088e118e +0x28:  call   085802ba <_GLOBAL__I_msgs+0xd9>  ; global constructors keyed to msgs+0xd9
088e1193 +0x2d:  sub    $0x4,%esp
088e1196 +0x30:  mov    0xc(%ebp),%eax
088e1199 +0x33:  lea    0x4c(%eax),%edx
088e119c +0x36:  lea    -0xc(%ebp),%eax
088e119f +0x39:  mov    %edx,0x4(%esp)
088e11a3 +0x3d:  mov    %eax,(%esp)
088e11a6 +0x40:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
088e11ab +0x45:  sub    $0x4,%esp
088e11ae +0x48:  lea    -0xc(%ebp),%eax
088e11b1 +0x4b:  mov    %eax,0x4(%esp)
088e11b5 +0x4f:  lea    -0x14(%ebp),%eax
088e11b8 +0x52:  mov    %eax,(%esp)
088e11bb +0x55:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
088e11c0 +0x5a:  test   %al,%al
088e11c2 +0x5c:  je     088e11e2 <+0x7c>
088e11c4 +0x5e:  mov    %ebx,%esi
088e11c6 +0x60:  lea    -0x14(%ebp),%eax
088e11c9 +0x63:  mov    %eax,(%esp)
088e11cc +0x66:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
088e11d1 +0x6b:  add    $0x4,%eax
088e11d4 +0x6e:  mov    %eax,0x4(%esp)
088e11d8 +0x72:  mov    %esi,(%esp)
088e11db +0x75:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
088e11e0 +0x7a:  jmp    088e11ec <+0x86>
088e11e2 +0x7c:  mov    %ebx,%eax
088e11e4 +0x7e:  mov    %eax,(%esp)
088e11e7 +0x81:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088e11ec +0x86:  mov    %ebx,%eax
088e11ee +0x88:  mov    %ebx,%eax
088e11f0 +0x8a:  lea    -0x8(%ebp),%esp
088e11f3 +0x8d:  add    $0x0,%esp
088e11f6 +0x90:  pop    %ebx
088e11f7 +0x91:  pop    %esi
088e11f8 +0x92:  pop    %ebp
088e11f9 +0x93:  ret    $0x4
```

## 反编译 C

```c
// CharacManageScript::GetName @ 0x88e1166

/* CharacManageScript::GetName(unsigned int) */

uint CharacManageScript::GetName(uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_18 [8];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [4];
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
            ((int *)local_18);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    std::string::string((string *)param_1);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->(local_18);
    std::string::string((string *)param_1,(string *)(iVar2 + 4));
  }
  return param_1;
}
```
