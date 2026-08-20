# getEventScript

`_ZN23InGameEventScriptLoader14getEventScriptEiRKSs`

`InGameEventScriptLoader::getEventScript(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `InGameEventScriptLoader` | `0x08982f38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08982f38  _ZN23InGameEventScriptLoader14getEventScriptEiRKSs
#           InGameEventScriptLoader::getEventScript(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x08982f38, 0x08982fc5]
08982f38 +0x00:  push   %ebp
08982f39 +0x01:  mov    %esp,%ebp
08982f3b +0x03:  sub    $0x28,%esp
08982f3e +0x06:  mov    0x8(%ebp),%edx
08982f41 +0x09:  lea    -0x10(%ebp),%eax
08982f44 +0x0c:  mov    0x10(%ebp),%ecx
08982f47 +0x0f:  mov    %ecx,0x8(%esp)
08982f4b +0x13:  mov    %edx,0x4(%esp)
08982f4f +0x17:  mov    %eax,(%esp)
08982f52 +0x1a:  call   08986a18 <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x122f>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x122f
08982f57 +0x1f:  sub    $0x4,%esp
08982f5a +0x22:  mov    0x8(%ebp),%edx
08982f5d +0x25:  lea    -0xc(%ebp),%eax
08982f60 +0x28:  mov    %edx,0x4(%esp)
08982f64 +0x2c:  mov    %eax,(%esp)
08982f67 +0x2f:  call   08111540 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa52>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa52
08982f6c +0x34:  sub    $0x4,%esp
08982f6f +0x37:  lea    -0xc(%ebp),%eax
08982f72 +0x3a:  mov    %eax,0x4(%esp)
08982f76 +0x3e:  lea    -0x10(%ebp),%eax
08982f79 +0x41:  mov    %eax,(%esp)
08982f7c +0x44:  call   08111566 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa78>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa78
08982f81 +0x49:  test   %al,%al
08982f83 +0x4b:  je     08982f95 <+0x5d>
08982f85 +0x4d:  lea    -0x10(%ebp),%eax
08982f88 +0x50:  mov    %eax,(%esp)
08982f8b +0x53:  call   0811157a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa8c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa8c
08982f90 +0x58:  mov    0x4(%eax),%eax
08982f93 +0x5b:  jmp    08982fc4 <+0x8c>
08982f95 +0x5d:  mov    0x10(%ebp),%eax
08982f98 +0x60:  mov    %eax,0x8(%esp)
08982f9c +0x64:  mov    0xc(%ebp),%eax
08982f9f +0x67:  mov    %eax,0x4(%esp)
08982fa3 +0x6b:  mov    0x8(%ebp),%eax
08982fa6 +0x6e:  mov    %eax,(%esp)
08982fa9 +0x71:  call   08982a4a <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs>  ; InGameEventScriptLoader::importInGameEventScript(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08982fae +0x76:  mov    %eax,0x8(%esp)
08982fb2 +0x7a:  mov    0x10(%ebp),%eax
08982fb5 +0x7d:  mov    %eax,0x4(%esp)
08982fb9 +0x81:  mov    0x8(%ebp),%eax
08982fbc +0x84:  mov    %eax,(%esp)
08982fbf +0x87:  call   08982f10 <_ZN23InGameEventScriptLoader17insertEventScriptERKSsP17InGameEventScript>  ; InGameEventScriptLoader::insertEventScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, InGameEventScript*)
08982fc4 +0x8c:  leave
08982fc5 +0x8d:  ret
```

## 反编译 C

```c
// InGameEventScriptLoader::getEventScript @ 0x8982f38

/* InGameEventScriptLoader::getEventScript(int, std::string const&) */

undefined4 __thiscall
InGameEventScriptLoader::getEventScript(InGameEventScriptLoader *this,int param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  InGameEventScript *pIVar3;
  undefined4 uVar4;
  string local_14 [4];
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  local_10 [12];
  
  std::
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  ::find(local_14);
  std::
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    pIVar3 = (InGameEventScript *)importInGameEventScript(this,param_1,param_2);
    uVar4 = insertEventScript(this,param_2,pIVar3);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)
                       local_14);
    uVar4 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar4;
}
```
