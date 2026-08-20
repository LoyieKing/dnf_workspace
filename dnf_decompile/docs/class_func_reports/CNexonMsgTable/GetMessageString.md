# GetMessageString

`_ZN14CNexonMsgTable16GetMessageStringEi`

`CNexonMsgTable::GetMessageString(int)`

| 类 | 地址 |
|---|---|
| `CNexonMsgTable` | `0x0858010c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858010c  _ZN14CNexonMsgTable16GetMessageStringEi
#           CNexonMsgTable::GetMessageString(int)
# range [0x0858010c, 0x08580177]
0858010c +0x00:  push   %ebp
0858010d +0x01:  mov    %esp,%ebp
0858010f +0x03:  sub    $0x28,%esp
08580112 +0x06:  mov    0x8(%ebp),%edx
08580115 +0x09:  lea    -0x10(%ebp),%eax
08580118 +0x0c:  lea    0xc(%ebp),%ecx
0858011b +0x0f:  mov    %ecx,0x8(%esp)
0858011f +0x13:  mov    %edx,0x4(%esp)
08580123 +0x17:  mov    %eax,(%esp)
08580126 +0x1a:  call   085802ba <_GLOBAL__I_msgs+0xd9>  ; global constructors keyed to msgs+0xd9
0858012b +0x1f:  sub    $0x4,%esp
0858012e +0x22:  mov    0x8(%ebp),%edx
08580131 +0x25:  lea    -0xc(%ebp),%eax
08580134 +0x28:  mov    %edx,0x4(%esp)
08580138 +0x2c:  mov    %eax,(%esp)
0858013b +0x2f:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
08580140 +0x34:  sub    $0x4,%esp
08580143 +0x37:  lea    -0xc(%ebp),%eax
08580146 +0x3a:  mov    %eax,0x4(%esp)
0858014a +0x3e:  lea    -0x10(%ebp),%eax
0858014d +0x41:  mov    %eax,(%esp)
08580150 +0x44:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
08580155 +0x49:  test   %al,%al
08580157 +0x4b:  je     08580171 <+0x65>
08580159 +0x4d:  lea    -0x10(%ebp),%eax
0858015c +0x50:  mov    %eax,(%esp)
0858015f +0x53:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
08580164 +0x58:  add    $0x4,%eax
08580167 +0x5b:  mov    %eax,(%esp)
0858016a +0x5e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0858016f +0x63:  jmp    08580176 <+0x6a>
08580171 +0x65:  mov    $"",%eax
08580176 +0x6a:  leave
08580177 +0x6b:  ret
```

## 反编译 C

```c
// CNexonMsgTable::GetMessageString @ 0x858010c

/* CNexonMsgTable::GetMessageString(int) */

undefined * CNexonMsgTable::GetMessageString(int param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_14 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [12]
  ;
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
            ((int *)local_14);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    puVar3 = &DAT_08ca9390;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->(local_14);
    puVar3 = (undefined *)std::string::c_str((string *)(iVar2 + 4));
  }
  return puVar3;
}
```
