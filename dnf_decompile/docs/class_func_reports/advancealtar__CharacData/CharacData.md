# CharacData

`_ZN12advancealtar10CharacDataC1Ev`

`advancealtar::CharacData::CharacData()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacData` | `0x0812d024` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d024  _ZN12advancealtar10CharacDataC1Ev
#           advancealtar::CharacData::CharacData()
# range [0x0812d024, 0x0812d061]
0812d024 +0x00:  push   %ebp
0812d025 +0x01:  mov    %esp,%ebp
0812d027 +0x03:  sub    $0x18,%esp
0812d02a +0x06:  mov    0x8(%ebp),%eax
0812d02d +0x09:  movl   $0x0,(%eax)
0812d033 +0x0f:  mov    0x8(%ebp),%eax
0812d036 +0x12:  movl   $0x0,0x4(%eax)
0812d03d +0x19:  mov    0x8(%ebp),%eax
0812d040 +0x1c:  movl   $0x0,0x8(%eax)
0812d047 +0x23:  mov    0x8(%ebp),%eax
0812d04a +0x26:  movl   $0x0,0xc(%eax)
0812d051 +0x2d:  mov    0x8(%ebp),%eax
0812d054 +0x30:  add    $0x10,%eax
0812d057 +0x33:  mov    %eax,(%esp)
0812d05a +0x36:  call   08134e56 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xa5d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xa5d
0812d05f +0x3b:  leave
0812d060 +0x3c:  ret
0812d061 +0x3d:  nop
```

## 反编译 C

```c
// advancealtar::CharacData::CharacData @ 0x812d024

/* advancealtar::CharacData::CharacData() */

void __thiscall advancealtar::CharacData::CharacData(CharacData *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  std::
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  ::map((map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
         *)(this + 0x10));
  return;
}
```
