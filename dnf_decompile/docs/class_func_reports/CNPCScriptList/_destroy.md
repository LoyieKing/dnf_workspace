# _destroy

`_ZN14CNPCScriptList8_destroyEv`

`CNPCScriptList::_destroy()`

| 类 | 地址 |
|---|---|
| `CNPCScriptList` | `0x08581784` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08581784  _ZN14CNPCScriptList8_destroyEv
#           CNPCScriptList::_destroy()
# range [0x08581784, 0x0858182d]
08581784 +0x00:  push   %ebp
08581785 +0x01:  mov    %esp,%ebp
08581787 +0x03:  push   %ebx
08581788 +0x04:  sub    $0x34,%esp
0858178b +0x07:  mov    0x8(%ebp),%edx
0858178e +0x0a:  lea    -0x18(%ebp),%eax
08581791 +0x0d:  mov    %edx,0x4(%esp)
08581795 +0x11:  mov    %eax,(%esp)
08581798 +0x14:  call   08582fdc <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x176e>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x176e
0858179d +0x19:  sub    $0x4,%esp
085817a0 +0x1c:  lea    -0x18(%ebp),%eax
085817a3 +0x1f:  mov    %eax,0x4(%esp)
085817a7 +0x23:  lea    -0x20(%ebp),%eax
085817aa +0x26:  mov    %eax,(%esp)
085817ad +0x29:  call   08583002 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1794>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1794
085817b2 +0x2e:  mov    0x8(%ebp),%edx
085817b5 +0x31:  lea    -0x10(%ebp),%eax
085817b8 +0x34:  mov    %edx,0x4(%esp)
085817bc +0x38:  mov    %eax,(%esp)
085817bf +0x3b:  call   0858301e <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x17b0>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x17b0
085817c4 +0x40:  sub    $0x4,%esp
085817c7 +0x43:  lea    -0x10(%ebp),%eax
085817ca +0x46:  mov    %eax,0x4(%esp)
085817ce +0x4a:  lea    -0x28(%ebp),%eax
085817d1 +0x4d:  mov    %eax,(%esp)
085817d4 +0x50:  call   08583002 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1794>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1794
085817d9 +0x55:  jmp    08581808 <+0x84>
085817db +0x57:  lea    -0x20(%ebp),%eax
085817de +0x5a:  mov    %eax,(%esp)
085817e1 +0x5d:  call   08582fc8 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x175a>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x175a
085817e6 +0x62:  mov    0x4(%eax),%ebx
085817e9 +0x65:  test   %ebx,%ebx
085817eb +0x67:  je     085817fd <+0x79>
085817ed +0x69:  mov    %ebx,(%esp)
085817f0 +0x6c:  call   0858234e <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xae0>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xae0
085817f5 +0x71:  mov    %ebx,(%esp)
085817f8 +0x74:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085817fd +0x79:  lea    -0x20(%ebp),%eax
08581800 +0x7c:  mov    %eax,(%esp)
08581803 +0x7f:  call   08583058 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x17ea>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x17ea
08581808 +0x84:  lea    -0x28(%ebp),%eax
0858180b +0x87:  mov    %eax,0x4(%esp)
0858180f +0x8b:  lea    -0x20(%ebp),%eax
08581812 +0x8e:  mov    %eax,(%esp)
08581815 +0x91:  call   08583044 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x17d6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x17d6
0858181a +0x96:  test   %al,%al
0858181c +0x98:  jne    085817db <+0x57>
0858181e +0x9a:  mov    0x8(%ebp),%eax
08581821 +0x9d:  mov    %eax,(%esp)
08581824 +0xa0:  call   085830f0 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1882>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1882
08581829 +0xa5:  mov    -0x4(%ebp),%ebx
0858182c +0xa8:  leave
0858182d +0xa9:  ret
```

## 反编译 C

```c
// CNPCScriptList::_destroy @ 0x8581784

/* CNPCScriptList::_destroy() */

void __thiscall CNPCScriptList::_destroy(CNPCScriptList *this)

{
  CNPCScript *this_00;
  char cVar1;
  int iVar2;
  _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_2c [8];
  _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_24 [8];
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_1c [8];
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_14 [12];
  
  __gnu_cxx::
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::begin(local_1c);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::_Hashtable_const_iterator(local_24,(_Hashtable_iterator *)local_1c);
  __gnu_cxx::
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::end(local_14);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::_Hashtable_const_iterator(local_2c,(_Hashtable_iterator *)local_14);
  while( true ) {
    cVar1 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
            ::operator!=(local_24,(_Hashtable_const_iterator *)local_2c);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
            ::operator->(local_24);
    this_00 = *(CNPCScript **)(iVar2 + 4);
    if (this_00 != (CNPCScript *)0x0) {
      CNPCScript::~CNPCScript(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
    ::operator++(local_24);
  }
  __gnu_cxx::
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::clear((hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
           *)this);
  return;
}
```
