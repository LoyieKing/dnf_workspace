# WriteDie

`_ZN10HistoryLog8WriteDieEP8_IO_FILE`

`HistoryLog::WriteDie(_IO_FILE*)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9ff8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9ff8  _ZN10HistoryLog8WriteDieEP8_IO_FILE
#           HistoryLog::WriteDie(_IO_FILE*)
# range [0x084b9ff8, 0x084ba02f]
084b9ff8 +0x00:  push   %ebp
084b9ff9 +0x01:  mov    %esp,%ebp
084b9ffb +0x03:  sub    $0x18,%esp
084b9ffe +0x06:  mov    0x8(%ebp),%eax
084ba001 +0x09:  mov    %eax,(%esp)
084ba004 +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084ba009 +0x11:  xor    $0x1,%eax
084ba00c +0x14:  test   %al,%al
084ba00e +0x16:  jne    084ba02d <+0x35>
084ba010 +0x18:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084ba018 +0x20:  movl   $"[%s]플레이중 사망\r\n",0x4(%esp)
084ba020 +0x28:  mov    0x8(%ebp),%eax
084ba023 +0x2b:  mov    %eax,(%esp)
084ba026 +0x2e:  call   0807da90 <_init+0x388>
084ba02b +0x33:  jmp    084ba02e <+0x36>
084ba02d +0x35:  nop
084ba02e +0x36:  leave
084ba02f +0x37:  ret
```

## 反编译 C

```c
// HistoryLog::WriteDie @ 0x84b9ff8

/* HistoryLog::WriteDie(_IO_FILE*) */

void HistoryLog::WriteDie(_IO_FILE *param_1)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86285,time);
  }
  return;
}
```
