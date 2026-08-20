# CMonsterManager

`_ZN15CMonsterManagerC1Ev`

`CMonsterManager::CMonsterManager()`

| 类 | 地址 |
|---|---|
| `CMonsterManager` | `0x0834f90e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f90e  _ZN15CMonsterManagerC1Ev
#           CMonsterManager::CMonsterManager()
# range [0x0834f90e, 0x0834f953]
0834f90e +0x00:  push   %ebp
0834f90f +0x01:  mov    %esp,%ebp
0834f911 +0x03:  push   %esi
0834f912 +0x04:  push   %ebx
0834f913 +0x05:  sub    $0x10,%esp
0834f916 +0x08:  mov    0x8(%ebp),%eax
0834f919 +0x0b:  mov    %eax,(%esp)
0834f91c +0x0e:  call   08387e3a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x178da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x178da
0834f921 +0x13:  mov    0x8(%ebp),%eax
0834f924 +0x16:  add    $0x18,%eax
0834f927 +0x19:  mov    %eax,(%esp)
0834f92a +0x1c:  call   0838f188 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ec28>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ec28
0834f92f +0x21:  jmp    0834f94c <+0x3e>
0834f931 +0x23:  mov    %edx,%ebx
0834f933 +0x25:  mov    %eax,%esi
0834f935 +0x27:  mov    0x8(%ebp),%eax
0834f938 +0x2a:  mov    %eax,(%esp)
0834f93b +0x2d:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
0834f940 +0x32:  mov    %esi,%eax
0834f942 +0x34:  mov    %ebx,%edx
0834f944 +0x36:  mov    %eax,(%esp)
0834f947 +0x39:  call   08ae3750 <_Unwind_Resume>
0834f94c +0x3e:  add    $0x10,%esp
0834f94f +0x41:  pop    %ebx
0834f950 +0x42:  pop    %esi
0834f951 +0x43:  pop    %ebp
0834f952 +0x44:  ret
0834f953 +0x45:  nop
```

## 反编译 C

```c
// CMonsterManager::CMonsterManager @ 0x834f90e

/* CMonsterManager::CMonsterManager() */

void __thiscall CMonsterManager::CMonsterManager(CMonsterManager *this)

{
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
                    /* try { // try from 0834f92a to 0834f92e has its CatchHandler @ 0834f931 */
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::
  hash_map((hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
            *)(this + 0x18));
  return;
}
```
