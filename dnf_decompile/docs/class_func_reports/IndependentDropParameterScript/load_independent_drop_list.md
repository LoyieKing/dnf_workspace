# load_independent_drop_list

`_ZN30IndependentDropParameterScript26load_independent_drop_listEv`

`IndependentDropParameterScript::load_independent_drop_list()`

| 类 | 地址 |
|---|---|
| `IndependentDropParameterScript` | `0x0897c0d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0897c0d8  _ZN30IndependentDropParameterScript26load_independent_drop_listEv
#           IndependentDropParameterScript::load_independent_drop_list()
# range [0x0897c0d8, 0x0897c1c5]
0897c0d8 +0x00:  push   %ebp
0897c0d9 +0x01:  mov    %esp,%ebp
0897c0db +0x03:  sub    $0x48,%esp
0897c0de +0x06:  lea    -0x14(%ebp),%eax
0897c0e1 +0x09:  mov    %eax,(%esp)
0897c0e4 +0x0c:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
0897c0e9 +0x11:  lea    -0x1c(%ebp),%eax
0897c0ec +0x14:  movl   $&g_independentDropScriptFileList,0x4(%esp)
0897c0f4 +0x1c:  mov    %eax,(%esp)
0897c0f7 +0x1f:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
0897c0fc +0x24:  sub    $0x4,%esp
0897c0ff +0x27:  mov    -0x1c(%ebp),%eax
0897c102 +0x2a:  mov    %eax,-0x14(%ebp)
0897c105 +0x2d:  jmp    0897c18b <+0xb3>
0897c10a +0x32:  lea    -0x14(%ebp),%eax
0897c10d +0x35:  mov    %eax,(%esp)
0897c110 +0x38:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
0897c115 +0x3d:  add    $0x4,%eax
0897c118 +0x40:  mov    %eax,(%esp)
0897c11b +0x43:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0897c120 +0x48:  mov    %eax,-0xc(%ebp)
0897c123 +0x4b:  cmpl   $0x0,-0xc(%ebp)
0897c127 +0x4f:  je     0897c1bd <+0xe5>
0897c12d +0x55:  mov    -0xc(%ebp),%eax
0897c130 +0x58:  mov    %eax,0x4(%esp)
0897c134 +0x5c:  mov    0x8(%ebp),%eax
0897c137 +0x5f:  mov    %eax,(%esp)
0897c13a +0x62:  call   0897c1c6 <_ZN30IndependentDropParameterScript36importIndependentDropParameterScriptEPKc>  ; IndependentDropParameterScript::importIndependentDropParameterScript(char const*)
0897c13f +0x67:  xor    $0x1,%eax
0897c142 +0x6a:  test   %al,%al
0897c144 +0x6c:  je     0897c180 <+0xa8>
0897c146 +0x6e:  mov    -0xc(%ebp),%eax
0897c149 +0x71:  mov    %eax,0x14(%esp)
0897c14d +0x75:  movl   $"IndependentDropParameterScript File Script Error: %s\n",0x10(%esp)
0897c155 +0x7d:  movl   $0x30,0xc(%esp)
0897c15d +0x85:  movl   $&_ZZN30IndependentDropParameterScript26load_independent_drop_listEvE12__FUNCTION__,0x8(%esp)
0897c165 +0x8d:  movl   $"../RDARScriptIndependentDrop.cpp",0x4(%esp)
0897c16d +0x95:  movl   $0x1,(%esp)
0897c174 +0x9c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0897c179 +0xa1:  mov    $0x0,%eax
0897c17e +0xa6:  jmp    0897c1c3 <+0xeb>
0897c180 +0xa8:  lea    -0x14(%ebp),%eax
0897c183 +0xab:  mov    %eax,(%esp)
0897c186 +0xae:  call   080e6610 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x746>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x746
0897c18b +0xb3:  lea    -0x10(%ebp),%eax
0897c18e +0xb6:  movl   $&g_independentDropScriptFileList,0x4(%esp)
0897c196 +0xbe:  mov    %eax,(%esp)
0897c199 +0xc1:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
0897c19e +0xc6:  sub    $0x4,%esp
0897c1a1 +0xc9:  lea    -0x10(%ebp),%eax
0897c1a4 +0xcc:  mov    %eax,0x4(%esp)
0897c1a8 +0xd0:  lea    -0x14(%ebp),%eax
0897c1ab +0xd3:  mov    %eax,(%esp)
0897c1ae +0xd6:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
0897c1b3 +0xdb:  test   %al,%al
0897c1b5 +0xdd:  jne    0897c10a <+0x32>
0897c1bb +0xe3:  jmp    0897c1be <+0xe6>
0897c1bd +0xe5:  nop
0897c1be +0xe6:  mov    $0x1,%eax
0897c1c3 +0xeb:  leave
0897c1c4 +0xec:  ret
0897c1c5 +0xed:  nop
```

## 反编译 C

```c
// IndependentDropParameterScript::load_independent_drop_list @ 0x897c0d8

/* IndependentDropParameterScript::load_independent_drop_list() */

undefined4 __thiscall
IndependentDropParameterScript::load_independent_drop_list(IndependentDropParameterScript *this)

{
  char cVar1;
  int iVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  char *local_10;
  
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_20);
  local_18 = local_20[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = importIndependentDropParameterScript(this,local_10);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"../RDARScriptIndependentDrop.cpp","load_independent_drop_list",0x30,
                 "IndependentDropParameterScript File Script Error: %s\n",local_10);
      return 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
  }
  return 1;
}
```
