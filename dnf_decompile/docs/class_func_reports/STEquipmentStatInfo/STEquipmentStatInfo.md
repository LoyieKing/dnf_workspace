# STEquipmentStatInfo

`_ZN19STEquipmentStatInfoC1Ev`

`STEquipmentStatInfo::STEquipmentStatInfo()`

| 类 | 地址 |
|---|---|
| `STEquipmentStatInfo` | `0x0898d25e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898d25e  _ZN19STEquipmentStatInfoC1Ev
#           STEquipmentStatInfo::STEquipmentStatInfo()
# range [0x0898d25e, 0x0898d271]
0898d25e +0x00:  push   %ebp
0898d25f +0x01:  mov    %esp,%ebp
0898d261 +0x03:  sub    $0x18,%esp
0898d264 +0x06:  mov    0x8(%ebp),%eax
0898d267 +0x09:  mov    %eax,(%esp)
0898d26a +0x0c:  call   0898d272 <_ZN19STEquipmentStatInfo5clearEv>  ; STEquipmentStatInfo::clear()
0898d26f +0x11:  leave
0898d270 +0x12:  ret
0898d271 +0x13:  nop
```

## 反编译 C

```c
// STEquipmentStatInfo::STEquipmentStatInfo @ 0x898d25e

/* STEquipmentStatInfo::STEquipmentStatInfo() */

void __thiscall STEquipmentStatInfo::STEquipmentStatInfo(STEquipmentStatInfo *this)

{
  clear(this);
  return;
}
```
