# reset

`_ZN13CBattle_Field21CBloodClearRewardData14stRewardItem_t5resetEv`

`CBattle_Field::CBloodClearRewardData::stRewardItem_t::reset()`

| 类 | 地址 |
|---|---|
| `CBattle_Field::CBloodClearRewardData::stRewardItem_t` | `0x08306f5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306f5c  _ZN13CBattle_Field21CBloodClearRewardData14stRewardItem_t5resetEv
#           CBattle_Field::CBloodClearRewardData::stRewardItem_t::reset()
# range [0x08306f5c, 0x08306fa9]
08306f5c +0x00:  push   %ebp
08306f5d +0x01:  mov    %esp,%ebp
08306f5f +0x03:  sub    $0x28,%esp
08306f62 +0x06:  mov    0x8(%ebp),%eax
08306f65 +0x09:  movl   $0x0,(%eax)
08306f6b +0x0f:  movl   $0x0,-0xc(%ebp)
08306f72 +0x16:  jmp    08306f9d <+0x41>
08306f74 +0x18:  mov    -0xc(%ebp),%eax
08306f77 +0x1b:  imul   $0x3d,%eax,%eax
08306f7a +0x1e:  add    0x8(%ebp),%eax
08306f7d +0x21:  add    $0x4,%eax
08306f80 +0x24:  mov    %eax,(%esp)
08306f83 +0x27:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08306f88 +0x2c:  mov    -0xc(%ebp),%edx
08306f8b +0x2f:  mov    0x8(%ebp),%eax
08306f8e +0x32:  imul   $0x3d,%edx,%edx
08306f91 +0x35:  movl   $0xffffffff,0x6(%edx,%eax,1)
08306f99 +0x3d:  addl   $0x1,-0xc(%ebp)
08306f9d +0x41:  cmpl   $0x9,-0xc(%ebp)
08306fa1 +0x45:  setle  %al
08306fa4 +0x48:  test   %al,%al
08306fa6 +0x4a:  jne    08306f74 <+0x18>
08306fa8 +0x4c:  leave
08306fa9 +0x4d:  ret
```

## 反编译 C

```c
// CBattle_Field::CBloodClearRewardData::stRewardItem_t::reset @ 0x8306f5c

/* CBattle_Field::CBloodClearRewardData::stRewardItem_t::reset() */

void __thiscall CBattle_Field::CBloodClearRewardData::stRewardItem_t::reset(stRewardItem_t *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 4));
    *(undefined4 *)(this + local_10 * 0x3d + 6) = 0xffffffff;
  }
  return;
}
```
