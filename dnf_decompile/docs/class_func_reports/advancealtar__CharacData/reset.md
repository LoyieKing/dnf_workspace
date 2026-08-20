# reset

`_ZN12advancealtar10CharacData5resetEv`

`advancealtar::CharacData::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacData` | `0x0812d078` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d078  _ZN12advancealtar10CharacData5resetEv
#           advancealtar::CharacData::reset()
# range [0x0812d078, 0x0812d0b5]
0812d078 +0x00:  push   %ebp
0812d079 +0x01:  mov    %esp,%ebp
0812d07b +0x03:  sub    $0x18,%esp
0812d07e +0x06:  mov    0x8(%ebp),%eax
0812d081 +0x09:  movl   $0x0,0x8(%eax)
0812d088 +0x10:  mov    0x8(%ebp),%eax
0812d08b +0x13:  movl   $0x0,0x4(%eax)
0812d092 +0x1a:  mov    0x8(%ebp),%eax
0812d095 +0x1d:  movl   $0x0,0xc(%eax)
0812d09c +0x24:  mov    0x8(%ebp),%eax
0812d09f +0x27:  movl   $0x0,(%eax)
0812d0a5 +0x2d:  mov    0x8(%ebp),%eax
0812d0a8 +0x30:  add    $0x10,%eax
0812d0ab +0x33:  mov    %eax,(%esp)
0812d0ae +0x36:  call   08134ed0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xad7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xad7
0812d0b3 +0x3b:  leave
0812d0b4 +0x3c:  ret
0812d0b5 +0x3d:  nop
```

## 反编译 C

```c
// advancealtar::CharacData::reset @ 0x812d078

/* advancealtar::CharacData::reset() */

void __thiscall advancealtar::CharacData::reset(CharacData *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  std::
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  ::clear((map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
           *)(this + 0x10));
  return;
}
```
