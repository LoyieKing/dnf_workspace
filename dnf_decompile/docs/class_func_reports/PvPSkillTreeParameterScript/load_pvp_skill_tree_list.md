# load_pvp_skill_tree_list

`_ZN27PvPSkillTreeParameterScript24load_pvp_skill_tree_listEv`

`PvPSkillTreeParameterScript::load_pvp_skill_tree_list()`

| 类 | 地址 |
|---|---|
| `PvPSkillTreeParameterScript` | `0x08a5ce28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5ce28  _ZN27PvPSkillTreeParameterScript24load_pvp_skill_tree_listEv
#           PvPSkillTreeParameterScript::load_pvp_skill_tree_list()
# range [0x08a5ce28, 0x08a5cf15]
08a5ce28 +0x00:  push   %ebp
08a5ce29 +0x01:  mov    %esp,%ebp
08a5ce2b +0x03:  sub    $0x48,%esp
08a5ce2e +0x06:  lea    -0x14(%ebp),%eax
08a5ce31 +0x09:  mov    %eax,(%esp)
08a5ce34 +0x0c:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
08a5ce39 +0x11:  lea    -0x1c(%ebp),%eax
08a5ce3c +0x14:  movl   $&g_pvpSkillTreeScriptFileList,0x4(%esp)
08a5ce44 +0x1c:  mov    %eax,(%esp)
08a5ce47 +0x1f:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
08a5ce4c +0x24:  sub    $0x4,%esp
08a5ce4f +0x27:  mov    -0x1c(%ebp),%eax
08a5ce52 +0x2a:  mov    %eax,-0x14(%ebp)
08a5ce55 +0x2d:  jmp    08a5cedb <+0xb3>
08a5ce5a +0x32:  lea    -0x14(%ebp),%eax
08a5ce5d +0x35:  mov    %eax,(%esp)
08a5ce60 +0x38:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
08a5ce65 +0x3d:  add    $0x4,%eax
08a5ce68 +0x40:  mov    %eax,(%esp)
08a5ce6b +0x43:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08a5ce70 +0x48:  mov    %eax,-0xc(%ebp)
08a5ce73 +0x4b:  cmpl   $0x0,-0xc(%ebp)
08a5ce77 +0x4f:  je     08a5cf0d <+0xe5>
08a5ce7d +0x55:  mov    -0xc(%ebp),%eax
08a5ce80 +0x58:  mov    %eax,0x4(%esp)
08a5ce84 +0x5c:  mov    0x8(%ebp),%eax
08a5ce87 +0x5f:  mov    %eax,(%esp)
08a5ce8a +0x62:  call   08a5cf16 <_ZN27PvPSkillTreeParameterScript33importPvPSkillTreeParameterScriptEPKc>  ; PvPSkillTreeParameterScript::importPvPSkillTreeParameterScript(char const*)
08a5ce8f +0x67:  xor    $0x1,%eax
08a5ce92 +0x6a:  test   %al,%al
08a5ce94 +0x6c:  je     08a5ced0 <+0xa8>
08a5ce96 +0x6e:  mov    -0xc(%ebp),%eax
08a5ce99 +0x71:  mov    %eax,0x14(%esp)
08a5ce9d +0x75:  movl   $"PvPSkillTreeParameterScript File Script Error: %s\n",0x10(%esp)
08a5cea5 +0x7d:  movl   $0x45,0xc(%esp)
08a5cead +0x85:  movl   $&_ZZN27PvPSkillTreeParameterScript24load_pvp_skill_tree_listEvE12__FUNCTION__,0x8(%esp)
08a5ceb5 +0x8d:  movl   $"../RDARScriptPvPSkillTree.cpp",0x4(%esp)
08a5cebd +0x95:  movl   $0x1,(%esp)
08a5cec4 +0x9c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08a5cec9 +0xa1:  mov    $0x0,%eax
08a5cece +0xa6:  jmp    08a5cf13 <+0xeb>
08a5ced0 +0xa8:  lea    -0x14(%ebp),%eax
08a5ced3 +0xab:  mov    %eax,(%esp)
08a5ced6 +0xae:  call   080e6610 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x746>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x746
08a5cedb +0xb3:  lea    -0x10(%ebp),%eax
08a5cede +0xb6:  movl   $&g_pvpSkillTreeScriptFileList,0x4(%esp)
08a5cee6 +0xbe:  mov    %eax,(%esp)
08a5cee9 +0xc1:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
08a5ceee +0xc6:  sub    $0x4,%esp
08a5cef1 +0xc9:  lea    -0x10(%ebp),%eax
08a5cef4 +0xcc:  mov    %eax,0x4(%esp)
08a5cef8 +0xd0:  lea    -0x14(%ebp),%eax
08a5cefb +0xd3:  mov    %eax,(%esp)
08a5cefe +0xd6:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
08a5cf03 +0xdb:  test   %al,%al
08a5cf05 +0xdd:  jne    08a5ce5a <+0x32>
08a5cf0b +0xe3:  jmp    08a5cf0e <+0xe6>
08a5cf0d +0xe5:  nop
08a5cf0e +0xe6:  mov    $0x1,%eax
08a5cf13 +0xeb:  leave
08a5cf14 +0xec:  ret
08a5cf15 +0xed:  nop
```

## 反编译 C

```c
// PvPSkillTreeParameterScript::load_pvp_skill_tree_list @ 0x8a5ce28

/* PvPSkillTreeParameterScript::load_pvp_skill_tree_list() */

undefined4 __thiscall
PvPSkillTreeParameterScript::load_pvp_skill_tree_list(PvPSkillTreeParameterScript *this)

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
    cVar1 = importPvPSkillTreeParameterScript(this,local_10);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"../RDARScriptPvPSkillTree.cpp","load_pvp_skill_tree_list",0x45,
                 "PvPSkillTreeParameterScript File Script Error: %s\n",local_10);
      return 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
  }
  return 1;
}
```
