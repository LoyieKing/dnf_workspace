# ~CharacData

`_ZN12advancealtar10CharacDataD1Ev`

`advancealtar::CharacData::~CharacData()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacData` | `0x0812d062` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d062  _ZN12advancealtar10CharacDataD1Ev
#           advancealtar::CharacData::~CharacData()
# range [0x0812d062, 0x0812d077]
0812d062 +0x00:  push   %ebp
0812d063 +0x01:  mov    %esp,%ebp
0812d065 +0x03:  sub    $0x18,%esp
0812d068 +0x06:  mov    0x8(%ebp),%eax
0812d06b +0x09:  add    $0x10,%eax
0812d06e +0x0c:  mov    %eax,(%esp)
0812d071 +0x0f:  call   0813499a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5a1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5a1
0812d076 +0x14:  leave
0812d077 +0x15:  ret
```

## 反编译 C

```c
// advancealtar::CharacData::~CharacData @ 0x812d062

/* advancealtar::CharacData::~CharacData() */

void __thiscall advancealtar::CharacData::~CharacData(CharacData *this)

{
  std::
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  ::~map((map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
          *)(this + 0x10));
  return;
}
```
