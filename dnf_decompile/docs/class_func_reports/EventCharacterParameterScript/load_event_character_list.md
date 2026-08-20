# load_event_character_list

`_ZN29EventCharacterParameterScript25load_event_character_listEv`

`EventCharacterParameterScript::load_event_character_list()`

| 类 | 地址 |
|---|---|
| `EventCharacterParameterScript` | `0x0895af18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0895af18  _ZN29EventCharacterParameterScript25load_event_character_listEv
#           EventCharacterParameterScript::load_event_character_list()
# range [0x0895af18, 0x0895b005]
0895af18 +0x00:  push   %ebp
0895af19 +0x01:  mov    %esp,%ebp
0895af1b +0x03:  sub    $0x48,%esp
0895af1e +0x06:  lea    -0x14(%ebp),%eax
0895af21 +0x09:  mov    %eax,(%esp)
0895af24 +0x0c:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
0895af29 +0x11:  lea    -0x1c(%ebp),%eax
0895af2c +0x14:  movl   $&g_eventCharacterScriptFileList,0x4(%esp)
0895af34 +0x1c:  mov    %eax,(%esp)
0895af37 +0x1f:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
0895af3c +0x24:  sub    $0x4,%esp
0895af3f +0x27:  mov    -0x1c(%ebp),%eax
0895af42 +0x2a:  mov    %eax,-0x14(%ebp)
0895af45 +0x2d:  jmp    0895afcb <+0xb3>
0895af4a +0x32:  lea    -0x14(%ebp),%eax
0895af4d +0x35:  mov    %eax,(%esp)
0895af50 +0x38:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
0895af55 +0x3d:  add    $0x4,%eax
0895af58 +0x40:  mov    %eax,(%esp)
0895af5b +0x43:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0895af60 +0x48:  mov    %eax,-0xc(%ebp)
0895af63 +0x4b:  cmpl   $0x0,-0xc(%ebp)
0895af67 +0x4f:  je     0895affd <+0xe5>
0895af6d +0x55:  mov    -0xc(%ebp),%eax
0895af70 +0x58:  mov    %eax,0x4(%esp)
0895af74 +0x5c:  mov    0x8(%ebp),%eax
0895af77 +0x5f:  mov    %eax,(%esp)
0895af7a +0x62:  call   0895b006 <_ZN29EventCharacterParameterScript35importEventCharacterParameterScriptEPKc>  ; EventCharacterParameterScript::importEventCharacterParameterScript(char const*)
0895af7f +0x67:  xor    $0x1,%eax
0895af82 +0x6a:  test   %al,%al
0895af84 +0x6c:  je     0895afc0 <+0xa8>
0895af86 +0x6e:  mov    -0xc(%ebp),%eax
0895af89 +0x71:  mov    %eax,0x14(%esp)
0895af8d +0x75:  movl   $"EventCharacterParameterScript File Script Error: %s\n",0x10(%esp)
0895af95 +0x7d:  movl   $0x38,0xc(%esp)
0895af9d +0x85:  movl   $&_ZZN29EventCharacterParameterScript25load_event_character_listEvE12__FUNCTION__,0x8(%esp)
0895afa5 +0x8d:  movl   $"../RDARScriptEventCharacterParameter.cpp",0x4(%esp)
0895afad +0x95:  movl   $0x1,(%esp)
0895afb4 +0x9c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0895afb9 +0xa1:  mov    $0x0,%eax
0895afbe +0xa6:  jmp    0895b003 <+0xeb>
0895afc0 +0xa8:  lea    -0x14(%ebp),%eax
0895afc3 +0xab:  mov    %eax,(%esp)
0895afc6 +0xae:  call   080e6610 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x746>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x746
0895afcb +0xb3:  lea    -0x10(%ebp),%eax
0895afce +0xb6:  movl   $&g_eventCharacterScriptFileList,0x4(%esp)
0895afd6 +0xbe:  mov    %eax,(%esp)
0895afd9 +0xc1:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
0895afde +0xc6:  sub    $0x4,%esp
0895afe1 +0xc9:  lea    -0x10(%ebp),%eax
0895afe4 +0xcc:  mov    %eax,0x4(%esp)
0895afe8 +0xd0:  lea    -0x14(%ebp),%eax
0895afeb +0xd3:  mov    %eax,(%esp)
0895afee +0xd6:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
0895aff3 +0xdb:  test   %al,%al
0895aff5 +0xdd:  jne    0895af4a <+0x32>
0895affb +0xe3:  jmp    0895affe <+0xe6>
0895affd +0xe5:  nop
0895affe +0xe6:  mov    $0x1,%eax
0895b003 +0xeb:  leave
0895b004 +0xec:  ret
0895b005 +0xed:  nop
```

## 反编译 C

```c
// EventCharacterParameterScript::load_event_character_list @ 0x895af18

/* EventCharacterParameterScript::load_event_character_list() */

undefined4 __thiscall
EventCharacterParameterScript::load_event_character_list(EventCharacterParameterScript *this)

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
    cVar1 = importEventCharacterParameterScript(this,local_10);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"../RDARScriptEventCharacterParameter.cpp","load_event_character_list",0x38,
                 "EventCharacterParameterScript File Script Error: %s\n",local_10);
      return 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_18);
  }
  return 1;
}
```
