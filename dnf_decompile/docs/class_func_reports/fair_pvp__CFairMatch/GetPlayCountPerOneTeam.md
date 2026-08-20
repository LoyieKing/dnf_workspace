# GetPlayCountPerOneTeam

`_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv`

`fair_pvp::CFairMatch::GetPlayCountPerOneTeam()`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562834` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562834  _ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv
#           fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
# range [0x08562834, 0x08562849]
08562834 +0x00:  push   %ebp
08562835 +0x01:  mov    %esp,%ebp
08562837 +0x03:  mov    $0x1,%eax
0856283c +0x08:  pop    %ebp
0856283d +0x09:  ret
0856283e +0x0a:  nop
0856283f +0x0b:  nop
08562840 +0x0c:  nop
08562841 +0x0d:  nop
08562842 +0x0e:  nop
08562843 +0x0f:  nop
08562844 +0x10:  nop
08562845 +0x11:  nop
08562846 +0x12:  nop
08562847 +0x13:  nop
08562848 +0x14:  ret
08562849 +0x15:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::GetPlayCountPerOneTeam @ 0x8562834

/* fair_pvp::CFairMatch::GetPlayCountPerOneTeam() */

undefined4 fair_pvp::CFairMatch::GetPlayCountPerOneTeam(void)

{
  return 1;
}
```
