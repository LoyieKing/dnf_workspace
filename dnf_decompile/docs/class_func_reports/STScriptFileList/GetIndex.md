# GetIndex

`_ZN16STScriptFileList8GetIndexEPKc`

`STScriptFileList::GetIndex(char const*)`

| 类 | 地址 |
|---|---|
| `STScriptFileList` | `0x088badba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088badba  _ZN16STScriptFileList8GetIndexEPKc
#           STScriptFileList::GetIndex(char const*)
# range [0x088badba, 0x088bae55]
088badba +0x00:  push   %ebp
088badbb +0x01:  mov    %esp,%ebp
088badbd +0x03:  sub    $0x28,%esp
088badc0 +0x06:  mov    0x8(%ebp),%edx
088badc3 +0x09:  lea    -0x14(%ebp),%eax
088badc6 +0x0c:  mov    %edx,0x4(%esp)
088badca +0x10:  mov    %eax,(%esp)
088badcd +0x13:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
088badd2 +0x18:  sub    $0x4,%esp
088badd5 +0x1b:  jmp    088bae24 <+0x6a>
088badd7 +0x1d:  lea    -0x14(%ebp),%eax
088badda +0x20:  mov    %eax,(%esp)
088baddd +0x23:  call   082aaa64 <_GLOBAL__I__ZN4CLog5this_E+0x6e8b>  ; global constructors keyed to CLog::this_+0x6e8b
088bade2 +0x28:  lea    0x4(%eax),%edx
088bade5 +0x2b:  mov    0xc(%ebp),%eax
088bade8 +0x2e:  mov    %eax,0x4(%esp)
088badec +0x32:  mov    %edx,(%esp)
088badef +0x35:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088badf4 +0x3a:  test   %al,%al
088badf6 +0x3c:  je     088bae07 <+0x4d>
088badf8 +0x3e:  lea    -0x14(%ebp),%eax
088badfb +0x41:  mov    %eax,(%esp)
088badfe +0x44:  call   082aaa64 <_GLOBAL__I__ZN4CLog5this_E+0x6e8b>  ; global constructors keyed to CLog::this_+0x6e8b
088bae03 +0x49:  mov    (%eax),%eax
088bae05 +0x4b:  jmp    088bae54 <+0x9a>
088bae07 +0x4d:  lea    -0xc(%ebp),%eax
088bae0a +0x50:  movl   $0x0,0x8(%esp)
088bae12 +0x58:  lea    -0x14(%ebp),%edx
088bae15 +0x5b:  mov    %edx,0x4(%esp)
088bae19 +0x5f:  mov    %eax,(%esp)
088bae1c +0x62:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
088bae21 +0x67:  sub    $0x4,%esp
088bae24 +0x6a:  mov    0x8(%ebp),%edx
088bae27 +0x6d:  lea    -0x10(%ebp),%eax
088bae2a +0x70:  mov    %edx,0x4(%esp)
088bae2e +0x74:  mov    %eax,(%esp)
088bae31 +0x77:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
088bae36 +0x7c:  sub    $0x4,%esp
088bae39 +0x7f:  lea    -0x10(%ebp),%eax
088bae3c +0x82:  mov    %eax,0x4(%esp)
088bae40 +0x86:  lea    -0x14(%ebp),%eax
088bae43 +0x89:  mov    %eax,(%esp)
088bae46 +0x8c:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
088bae4b +0x91:  test   %al,%al
088bae4d +0x93:  jne    088badd7 <+0x1d>
088bae4f +0x95:  mov    $0xffffffff,%eax
088bae54 +0x9a:  leave
088bae55 +0x9b:  ret
```

## 反编译 C

```c
// STScriptFileList::GetIndex @ 0x88badba

/* STScriptFileList::GetIndex(char const*) */

undefined4 __thiscall STScriptFileList::GetIndex(STScriptFileList *this,char *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_18 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_10 [12];
  
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            (local_18);
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_14);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar2 == '\0') {
      return 0xffffffff;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_18);
    bVar1 = std::operator==((string *)(iVar3 + 4),param_1);
    if (bVar1) break;
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_10,(int)local_18);
  }
  puVar4 = (undefined4 *)
           std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator*
                     ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_18);
  return *puVar4;
}
```
