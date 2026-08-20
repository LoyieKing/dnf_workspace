# GetParty

`_ZN12CGameManager8GetPartyEi`

`CGameManager::GetParty(int)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08294f32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08294f32  _ZN12CGameManager8GetPartyEi
#           CGameManager::GetParty(int)
# range [0x08294f32, 0x08294fa1]
08294f32 +0x00:  push   %ebp
08294f33 +0x01:  mov    %esp,%ebp
08294f35 +0x03:  sub    $0x28,%esp
08294f38 +0x06:  mov    0x8(%ebp),%eax
08294f3b +0x09:  lea    0x270(%eax),%ecx
08294f41 +0x0f:  lea    -0x18(%ebp),%eax
08294f44 +0x12:  lea    0xc(%ebp),%edx
08294f47 +0x15:  mov    %edx,0x8(%esp)
08294f4b +0x19:  mov    %ecx,0x4(%esp)
08294f4f +0x1d:  mov    %eax,(%esp)
08294f52 +0x20:  call   082b10c4 <_GLOBAL__I__ZN4CLog5this_E+0xd4eb>  ; global constructors keyed to CLog::this_+0xd4eb
08294f57 +0x25:  sub    $0x4,%esp
08294f5a +0x28:  mov    0x8(%ebp),%eax
08294f5d +0x2b:  lea    0x270(%eax),%edx
08294f63 +0x31:  lea    -0x10(%ebp),%eax
08294f66 +0x34:  mov    %edx,0x4(%esp)
08294f6a +0x38:  mov    %eax,(%esp)
08294f6d +0x3b:  call   082b10f0 <_GLOBAL__I__ZN4CLog5this_E+0xd517>  ; global constructors keyed to CLog::this_+0xd517
08294f72 +0x40:  sub    $0x4,%esp
08294f75 +0x43:  lea    -0x10(%ebp),%eax
08294f78 +0x46:  mov    %eax,0x4(%esp)
08294f7c +0x4a:  lea    -0x18(%ebp),%eax
08294f7f +0x4d:  mov    %eax,(%esp)
08294f82 +0x50:  call   082b1116 <_GLOBAL__I__ZN4CLog5this_E+0xd53d>  ; global constructors keyed to CLog::this_+0xd53d
08294f87 +0x55:  test   %al,%al
08294f89 +0x57:  je     08294f92 <+0x60>
08294f8b +0x59:  mov    $0x0,%eax
08294f90 +0x5e:  jmp    08294fa0 <+0x6e>
08294f92 +0x60:  lea    -0x18(%ebp),%eax
08294f95 +0x63:  mov    %eax,(%esp)
08294f98 +0x66:  call   082b1168 <_GLOBAL__I__ZN4CLog5this_E+0xd58f>  ; global constructors keyed to CLog::this_+0xd58f
08294f9d +0x6b:  mov    0x4(%eax),%eax
08294fa0 +0x6e:  leave
08294fa1 +0x6f:  ret
```

## 反编译 C

```c
// CGameManager::GetParty @ 0x8294f32

/* CGameManager::GetParty(int) */

undefined4 CGameManager::GetParty(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
  local_1c [8];
  hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
  local_14 [16];
  
  __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
  find((int *)local_1c);
  __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
  end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
          ::operator==(local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
