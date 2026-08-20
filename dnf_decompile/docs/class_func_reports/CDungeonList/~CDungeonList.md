# ~CDungeonList

`_ZN12CDungeonListD1Ev`

`CDungeonList::~CDungeonList()`

| 类 | 地址 |
|---|---|
| `CDungeonList` | `0x0834d334` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834d334  _ZN12CDungeonListD1Ev
#           CDungeonList::~CDungeonList()
# range [0x0834d334, 0x0834d375]
0834d334 +0x00:  push   %ebp
0834d335 +0x01:  mov    %esp,%ebp
0834d337 +0x03:  push   %esi
0834d338 +0x04:  push   %ebx
0834d339 +0x05:  sub    $0x10,%esp
0834d33c +0x08:  mov    0x8(%ebp),%eax
0834d33f +0x0b:  mov    %eax,(%esp)
0834d342 +0x0e:  call   0834d610 <_ZN12CDungeonList7destroyEv>  ; CDungeonList::destroy()
0834d347 +0x13:  jmp    0834d364 <+0x30>
0834d349 +0x15:  mov    %edx,%ebx
0834d34b +0x17:  mov    %eax,%esi
0834d34d +0x19:  mov    0x8(%ebp),%eax
0834d350 +0x1c:  mov    %eax,(%esp)
0834d353 +0x1f:  call   08376fc4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x6a64>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x6a64
0834d358 +0x24:  mov    %esi,%eax
0834d35a +0x26:  mov    %ebx,%edx
0834d35c +0x28:  mov    %eax,(%esp)
0834d35f +0x2b:  call   08ae3750 <_Unwind_Resume>
0834d364 +0x30:  mov    0x8(%ebp),%eax
0834d367 +0x33:  mov    %eax,(%esp)
0834d36a +0x36:  call   08376fc4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x6a64>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x6a64
0834d36f +0x3b:  add    $0x10,%esp
0834d372 +0x3e:  pop    %ebx
0834d373 +0x3f:  pop    %esi
0834d374 +0x40:  pop    %ebp
0834d375 +0x41:  ret
```

## 反编译 C

```c
// CDungeonList::~CDungeonList @ 0x834d334

/* CDungeonList::~CDungeonList() */

void __thiscall CDungeonList::~CDungeonList(CDungeonList *this)

{
                    /* try { // try from 0834d342 to 0834d346 has its CatchHandler @ 0834d349 */
  destroy(this);
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::
  ~hash_map((hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
             *)this);
  return;
}
```
