# ~CMonsterManager

`_ZN15CMonsterManagerD1Ev`

`CMonsterManager::~CMonsterManager()`

| 类 | 地址 |
|---|---|
| `CMonsterManager` | `0x0834f954` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f954  _ZN15CMonsterManagerD1Ev
#           CMonsterManager::~CMonsterManager()
# range [0x0834f954, 0x0834f9bd]
0834f954 +0x00:  push   %ebp
0834f955 +0x01:  mov    %esp,%ebp
0834f957 +0x03:  push   %esi
0834f958 +0x04:  push   %ebx
0834f959 +0x05:  sub    $0x10,%esp
0834f95c +0x08:  mov    0x8(%ebp),%eax
0834f95f +0x0b:  mov    %eax,(%esp)
0834f962 +0x0e:  call   0834f9be <_ZN15CMonsterManager7destroyEv>  ; CMonsterManager::destroy()
0834f967 +0x13:  jmp    0834f981 <+0x2d>
0834f969 +0x15:  mov    %edx,%ebx
0834f96b +0x17:  mov    %eax,%esi
0834f96d +0x19:  mov    0x8(%ebp),%eax
0834f970 +0x1c:  add    $0x18,%eax
0834f973 +0x1f:  mov    %eax,(%esp)
0834f976 +0x22:  call   08378d98 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x8838>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x8838
0834f97b +0x27:  mov    %esi,%eax
0834f97d +0x29:  mov    %ebx,%edx
0834f97f +0x2b:  jmp    0834f991 <+0x3d>
0834f981 +0x2d:  mov    0x8(%ebp),%eax
0834f984 +0x30:  add    $0x18,%eax
0834f987 +0x33:  mov    %eax,(%esp)
0834f98a +0x36:  call   08378d98 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x8838>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x8838
0834f98f +0x3b:  jmp    0834f9ac <+0x58>
0834f991 +0x3d:  mov    %edx,%ebx
0834f993 +0x3f:  mov    %eax,%esi
0834f995 +0x41:  mov    0x8(%ebp),%eax
0834f998 +0x44:  mov    %eax,(%esp)
0834f99b +0x47:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
0834f9a0 +0x4c:  mov    %esi,%eax
0834f9a2 +0x4e:  mov    %ebx,%edx
0834f9a4 +0x50:  mov    %eax,(%esp)
0834f9a7 +0x53:  call   08ae3750 <_Unwind_Resume>
0834f9ac +0x58:  mov    0x8(%ebp),%eax
0834f9af +0x5b:  mov    %eax,(%esp)
0834f9b2 +0x5e:  call   08375048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf014>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf014
0834f9b7 +0x63:  add    $0x10,%esp
0834f9ba +0x66:  pop    %ebx
0834f9bb +0x67:  pop    %esi
0834f9bc +0x68:  pop    %ebp
0834f9bd +0x69:  ret
```

## 反编译 C

```c
// CMonsterManager::~CMonsterManager @ 0x834f954

/* CMonsterManager::~CMonsterManager() */

void __thiscall CMonsterManager::~CMonsterManager(CMonsterManager *this)

{
                    /* try { // try from 0834f962 to 0834f966 has its CatchHandler @ 0834f969 */
  destroy(this);
                    /* try { // try from 0834f98a to 0834f98e has its CatchHandler @ 0834f991 */
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::
  ~hash_map((hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
             *)(this + 0x18));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
  return;
}
```
