# CDungeonList

`_ZN12CDungeonListC1Ev`

`CDungeonList::CDungeonList()`

| 类 | 地址 |
|---|---|
| `CDungeonList` | `0x0834d320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834d320  _ZN12CDungeonListC1Ev
#           CDungeonList::CDungeonList()
# range [0x0834d320, 0x0834d333]
0834d320 +0x00:  push   %ebp
0834d321 +0x01:  mov    %esp,%ebp
0834d323 +0x03:  sub    $0x18,%esp
0834d326 +0x06:  mov    0x8(%ebp),%eax
0834d329 +0x09:  mov    %eax,(%esp)
0834d32c +0x0c:  call   0838a670 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a110>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a110
0834d331 +0x11:  leave
0834d332 +0x12:  ret
0834d333 +0x13:  nop
```

## 反编译 C

```c
// CDungeonList::CDungeonList @ 0x834d320

/* CDungeonList::CDungeonList() */

void __thiscall CDungeonList::CDungeonList(CDungeonList *this)

{
  __gnu_cxx::
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::
  hash_map((hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
            *)this);
  return;
}
```
