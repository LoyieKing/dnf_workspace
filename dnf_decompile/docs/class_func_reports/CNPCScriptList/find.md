# find

`_ZNK14CNPCScriptList4findEj`

`CNPCScriptList::find(unsigned int) const`

| 类 | 地址 |
|---|---|
| `CNPCScriptList` | `0x08581680` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08581680  _ZNK14CNPCScriptList4findEj
#           CNPCScriptList::find(unsigned int) const
# range [0x08581680, 0x085816e3]
08581680 +0x00:  push   %ebp
08581681 +0x01:  mov    %esp,%ebp
08581683 +0x03:  sub    $0x28,%esp
08581686 +0x06:  mov    0x8(%ebp),%edx
08581689 +0x09:  lea    -0x18(%ebp),%eax
0858168c +0x0c:  lea    0xc(%ebp),%ecx
0858168f +0x0f:  mov    %ecx,0x8(%esp)
08581693 +0x13:  mov    %edx,0x4(%esp)
08581697 +0x17:  mov    %eax,(%esp)
0858169a +0x1a:  call   08582f62 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x16f4>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x16f4
0858169f +0x1f:  sub    $0x4,%esp
085816a2 +0x22:  mov    0x8(%ebp),%edx
085816a5 +0x25:  lea    -0x10(%ebp),%eax
085816a8 +0x28:  mov    %edx,0x4(%esp)
085816ac +0x2c:  mov    %eax,(%esp)
085816af +0x2f:  call   08582f8e <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1720>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1720
085816b4 +0x34:  sub    $0x4,%esp
085816b7 +0x37:  lea    -0x10(%ebp),%eax
085816ba +0x3a:  mov    %eax,0x4(%esp)
085816be +0x3e:  lea    -0x18(%ebp),%eax
085816c1 +0x41:  mov    %eax,(%esp)
085816c4 +0x44:  call   08582fb4 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1746>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1746
085816c9 +0x49:  test   %al,%al
085816cb +0x4b:  je     085816d4 <+0x54>
085816cd +0x4d:  mov    $0x0,%eax
085816d2 +0x52:  jmp    085816e2 <+0x62>
085816d4 +0x54:  lea    -0x18(%ebp),%eax
085816d7 +0x57:  mov    %eax,(%esp)
085816da +0x5a:  call   08582fc8 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x175a>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x175a
085816df +0x5f:  mov    0x4(%eax),%eax
085816e2 +0x62:  leave
085816e3 +0x63:  ret
```

## 反编译 C

```c
// CNPCScriptList::find @ 0x8581680

/* CNPCScriptList::find(unsigned int) const */

undefined4 CNPCScriptList::find(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_1c [8];
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::find((uint *)local_1c);
  __gnu_cxx::
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
          ::operator==(local_1c,(_Hashtable_const_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
