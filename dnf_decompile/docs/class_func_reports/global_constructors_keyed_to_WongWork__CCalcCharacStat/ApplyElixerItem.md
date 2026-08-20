# ApplyElixerItem

`_GLOBAL__I__ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii`

`global constructors keyed to WongWork::CCalcCharacStat::ApplyElixerItem(_Additioal_info*, int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CCalcCharacStat` | `0x083201f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083201f4  _GLOBAL__I__ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii
#           global constructors keyed to WongWork::CCalcCharacStat::ApplyElixerItem(_Additioal_info*, int, int)
# range [0x083201f4, 0x0832020f]
083201f4 +0x00:  push   %ebp
083201f5 +0x01:  mov    %esp,%ebp
083201f7 +0x03:  sub    $0x18,%esp
083201fa +0x06:  movl   $0xffff,0x4(%esp)
08320202 +0x0e:  movl   $0x1,(%esp)
08320209 +0x15:  call   083201b4 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0832020e +0x1a:  leave
0832020f +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x83201f4

/* WongWork::CCalcCharacStat::ApplyElixerItem(_Additioal_info*, int, int) */

void WongWork::CCalcCharacStat::_GLOBAL__I_ApplyElixerItem(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
