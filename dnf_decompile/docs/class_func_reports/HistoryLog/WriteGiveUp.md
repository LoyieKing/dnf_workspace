# WriteGiveUp

`_ZN10HistoryLog11WriteGiveUpEP8_IO_FILEPKc`

`HistoryLog::WriteGiveUp(_IO_FILE*, char const*)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084ba070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ba070  _ZN10HistoryLog11WriteGiveUpEP8_IO_FILEPKc
#           HistoryLog::WriteGiveUp(_IO_FILE*, char const*)
# range [0x084ba070, 0x084ba0af]
084ba070 +0x00:  push   %ebp
084ba071 +0x01:  mov    %esp,%ebp
084ba073 +0x03:  sub    $0x18,%esp
084ba076 +0x06:  mov    0x8(%ebp),%eax
084ba079 +0x09:  mov    %eax,(%esp)
084ba07c +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084ba081 +0x11:  xor    $0x1,%eax
084ba084 +0x14:  test   %al,%al
084ba086 +0x16:  jne    084ba0ac <+0x3c>
084ba088 +0x18:  mov    0xc(%ebp),%eax
084ba08b +0x1b:  mov    %eax,0xc(%esp)
084ba08f +0x1f:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084ba097 +0x27:  movl   $"[%s]던젼포기: %s\r\n",0x4(%esp)
084ba09f +0x2f:  mov    0x8(%ebp),%eax
084ba0a2 +0x32:  mov    %eax,(%esp)
084ba0a5 +0x35:  call   0807da90 <_init+0x388>
084ba0aa +0x3a:  jmp    084ba0ad <+0x3d>
084ba0ac +0x3c:  nop
084ba0ad +0x3d:  leave
084ba0ae +0x3e:  ret
084ba0af +0x3f:  nop
```

## 反编译 C

```c
// HistoryLog::WriteGiveUp @ 0x84ba070

/* HistoryLog::WriteGiveUp(_IO_FILE*, char const*) */

void HistoryLog::WriteGiveUp(_IO_FILE *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c862ae,time,param_2);
  }
  return;
}
```
