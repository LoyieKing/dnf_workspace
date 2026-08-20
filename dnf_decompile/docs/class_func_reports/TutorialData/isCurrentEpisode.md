# isCurrentEpisode

`_ZN12TutorialData16isCurrentEpisodeEjj`

`TutorialData::isCurrentEpisode(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab84fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab84fe  _ZN12TutorialData16isCurrentEpisodeEjj
#           TutorialData::isCurrentEpisode(unsigned int, unsigned int)
# range [0x08ab84fe, 0x08ab852d]
08ab84fe +0x00:  push   %ebp
08ab84ff +0x01:  mov    %esp,%ebp
08ab8501 +0x03:  sub    $0x18,%esp
08ab8504 +0x06:  mov    0x10(%ebp),%eax
08ab8507 +0x09:  mov    %eax,0x4(%esp)
08ab850b +0x0d:  mov    0x8(%ebp),%eax
08ab850e +0x10:  mov    %eax,(%esp)
08ab8511 +0x13:  call   08ab8486 <_ZN12TutorialData13getDialogSizeEj>  ; TutorialData::getDialogSize(unsigned int)
08ab8516 +0x18:  cmp    0xc(%ebp),%eax
08ab8519 +0x1b:  seta   %al
08ab851c +0x1e:  test   %al,%al
08ab851e +0x20:  je     08ab8527 <+0x29>
08ab8520 +0x22:  mov    $0x1,%eax
08ab8525 +0x27:  jmp    08ab852c <+0x2e>
08ab8527 +0x29:  mov    $0x0,%eax
08ab852c +0x2e:  leave
08ab852d +0x2f:  ret
```

## 反编译 C

```c
// TutorialData::isCurrentEpisode @ 0x8ab84fe

/* TutorialData::isCurrentEpisode(unsigned int, unsigned int) */

bool __thiscall TutorialData::isCurrentEpisode(TutorialData *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = getDialogSize(this,param_2);
  return param_1 < uVar1;
}
```
