# isOpenAdvanceAltar

`_ZN12advancealtar18isOpenAdvanceAltarEv`

`advancealtar::isOpenAdvanceAltar()`

| 类 | 地址 |
|---|---|
| `advancealtar` | `0x0812cfea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812cfea  _ZN12advancealtar18isOpenAdvanceAltarEv
#           advancealtar::isOpenAdvanceAltar()
# range [0x0812cfea, 0x0812d023]
0812cfea +0x00:  push   %ebp
0812cfeb +0x01:  mov    %esp,%ebp
0812cfed +0x03:  sub    $0x28,%esp
0812cff0 +0x06:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
0812cff5 +0x0b:  movl   $0xa,0x8(%esp)
0812cffd +0x13:  movl   $0x4,0x4(%esp)
0812d005 +0x1b:  mov    %eax,(%esp)
0812d008 +0x1e:  call   081266e2 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej>  ; CDailyScheduleManager::GetScheduleState(_DailyScheduleType, unsigned int) const
0812d00d +0x23:  mov    %eax,-0xc(%ebp)
0812d010 +0x26:  cmpl   $0x1,-0xc(%ebp)
0812d014 +0x2a:  jne    0812d01d <+0x33>
0812d016 +0x2c:  mov    $0x1,%eax
0812d01b +0x31:  jmp    0812d022 <+0x38>
0812d01d +0x33:  mov    $0x0,%eax
0812d022 +0x38:  leave
0812d023 +0x39:  ret
```

## 反编译 C

```c
// advancealtar::isOpenAdvanceAltar @ 0x812cfea

/* advancealtar::isOpenAdvanceAltar() */

bool advancealtar::isOpenAdvanceAltar(void)

{
  int iVar1;
  
  iVar1 = CDailyScheduleManager::GetScheduleState(GlobalData::s_DailyScheduleManager,4,10);
  return iVar1 == 1;
}
```
