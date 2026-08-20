# WriteLearnSkill

`_ZN10HistoryLog15WriteLearnSkillEP8_IO_FILEii`

`HistoryLog::WriteLearnSkill(_IO_FILE*, int, int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9f24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9f24  _ZN10HistoryLog15WriteLearnSkillEP8_IO_FILEii
#           HistoryLog::WriteLearnSkill(_IO_FILE*, int, int)
# range [0x084b9f24, 0x084b9f69]
084b9f24 +0x00:  push   %ebp
084b9f25 +0x01:  mov    %esp,%ebp
084b9f27 +0x03:  sub    $0x28,%esp
084b9f2a +0x06:  mov    0x8(%ebp),%eax
084b9f2d +0x09:  mov    %eax,(%esp)
084b9f30 +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084b9f35 +0x11:  xor    $0x1,%eax
084b9f38 +0x14:  test   %al,%al
084b9f3a +0x16:  jne    084b9f67 <+0x43>
084b9f3c +0x18:  mov    0x10(%ebp),%eax
084b9f3f +0x1b:  mov    %eax,0x10(%esp)
084b9f43 +0x1f:  mov    0xc(%ebp),%eax
084b9f46 +0x22:  mov    %eax,0xc(%esp)
084b9f4a +0x26:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084b9f52 +0x2e:  movl   $"[%s]스킬입수 ID:%d, Level:%d\r\n",0x4(%esp)
084b9f5a +0x36:  mov    0x8(%ebp),%eax
084b9f5d +0x39:  mov    %eax,(%esp)
084b9f60 +0x3c:  call   0807da90 <_init+0x388>
084b9f65 +0x41:  jmp    084b9f68 <+0x44>
084b9f67 +0x43:  nop
084b9f68 +0x44:  leave
084b9f69 +0x45:  ret
```

## 反编译 C

```c
// HistoryLog::WriteLearnSkill @ 0x84b9f24

/* HistoryLog::WriteLearnSkill(_IO_FILE*, int, int) */

void HistoryLog::WriteLearnSkill(_IO_FILE *param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86220,time,param_2,param_3);
  }
  return;
}
```
