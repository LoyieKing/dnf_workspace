# ~CExpandEquipslot

`_ZN16CExpandEquipslotD1Ev`

`CExpandEquipslot::~CExpandEquipslot()`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x0849935c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849935c  _ZN16CExpandEquipslotD1Ev
#           CExpandEquipslot::~CExpandEquipslot()
# range [0x0849935c, 0x0849938b]
0849935c +0x00:  push   %ebp
0849935d +0x01:  mov    %esp,%ebp
0849935f +0x03:  sub    $0x18,%esp
08499362 +0x06:  mov    0x8(%ebp),%eax
08499365 +0x09:  movl   $&_ZTV16CExpandEquipslot+0x8,(%eax)
0849936b +0x0f:  mov    0x8(%ebp),%eax
0849936e +0x12:  mov    %eax,(%esp)
08499371 +0x15:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
08499376 +0x1a:  mov    $0x0,%eax
0849937b +0x1f:  test   %al,%al
0849937d +0x21:  je     0849938a <+0x2e>
0849937f +0x23:  mov    0x8(%ebp),%eax
08499382 +0x26:  mov    %eax,(%esp)
08499385 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0849938a +0x2e:  leave
0849938b +0x2f:  ret
```

## 反编译 C

```c
// CExpandEquipslot::~CExpandEquipslot @ 0x849935c

/* WARNING: Removing unreachable block (ram,0x0849937f) */
/* CExpandEquipslot::~CExpandEquipslot() */

void __thiscall CExpandEquipslot::~CExpandEquipslot(CExpandEquipslot *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c7b208;
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
