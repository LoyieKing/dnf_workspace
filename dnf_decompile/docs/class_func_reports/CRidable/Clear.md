# Clear

`_ZN8CRidable5ClearEv`

`CRidable::Clear()`

| 类 | 地址 |
|---|---|
| `CRidable` | `0x082fe6bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fe6bc  _ZN8CRidable5ClearEv
#           CRidable::Clear()
# range [0x082fe6bc, 0x082fe6cf]
082fe6bc +0x00:  push   %ebp
082fe6bd +0x01:  mov    %esp,%ebp
082fe6bf +0x03:  sub    $0x18,%esp
082fe6c2 +0x06:  mov    0x8(%ebp),%eax
082fe6c5 +0x09:  mov    %eax,(%esp)
082fe6c8 +0x0c:  call   0830f3da <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xfbf>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xfbf
082fe6cd +0x11:  leave
082fe6ce +0x12:  ret
082fe6cf +0x13:  nop
```

## 反编译 C

```c
// CRidable::Clear @ 0x82fe6bc

/* CRidable::Clear() */

void __thiscall CRidable::Clear(CRidable *this)

{
  std::
  map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
  ::clear((map<int,DungeonRidableObject,std::less<int>,std::allocator<std::pair<int_const,DungeonRidableObject>>>
           *)this);
  return;
}
```
