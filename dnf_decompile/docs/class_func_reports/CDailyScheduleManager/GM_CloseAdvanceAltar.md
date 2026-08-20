# GM_CloseAdvanceAltar

`_ZN21CDailyScheduleManager20GM_CloseAdvanceAltarEv`

`CDailyScheduleManager::GM_CloseAdvanceAltar()`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08126d90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08126d90  _ZN21CDailyScheduleManager20GM_CloseAdvanceAltarEv
#           CDailyScheduleManager::GM_CloseAdvanceAltar()
# range [0x08126d90, 0x08126dbf]
08126d90 +0x00:  push   %ebp
08126d91 +0x01:  mov    %esp,%ebp
08126d93 +0x03:  sub    $0x18,%esp
08126d96 +0x06:  mov    0x8(%ebp),%eax
08126d99 +0x09:  add    $0xb4,%eax
08126d9e +0x0e:  mov    %eax,0xc(%esp)
08126da2 +0x12:  movl   $0x4,0x8(%esp)
08126daa +0x1a:  movl   $0xa,0x4(%esp)
08126db2 +0x22:  mov    0x8(%ebp),%eax
08126db5 +0x25:  mov    %eax,(%esp)
08126db8 +0x28:  call   0812707c <_ZN21CDailyScheduleManager16GM_CloseScheduleEi18_DailyScheduleTypeR14_DailySchedule>  ; CDailyScheduleManager::GM_CloseSchedule(int, _DailyScheduleType, _DailySchedule&)
08126dbd +0x2d:  leave
08126dbe +0x2e:  ret
08126dbf +0x2f:  nop
```

## 反编译 C

```c
// CDailyScheduleManager::GM_CloseAdvanceAltar @ 0x8126d90

/* CDailyScheduleManager::GM_CloseAdvanceAltar() */

void __thiscall CDailyScheduleManager::GM_CloseAdvanceAltar(CDailyScheduleManager *this)

{
  GM_CloseSchedule(this,10,4,this + 0xb4);
  return;
}
```
