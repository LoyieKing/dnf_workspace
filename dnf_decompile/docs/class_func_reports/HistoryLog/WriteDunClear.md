# WriteDunClear

`_ZN10HistoryLog13WriteDunClearEP8_IO_FILE`

`HistoryLog::WriteDunClear(_IO_FILE*)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084ba0b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ba0b0  _ZN10HistoryLog13WriteDunClearEP8_IO_FILE
#           HistoryLog::WriteDunClear(_IO_FILE*)
# range [0x084ba0b0, 0x084ba0e7]
084ba0b0 +0x00:  push   %ebp
084ba0b1 +0x01:  mov    %esp,%ebp
084ba0b3 +0x03:  sub    $0x18,%esp
084ba0b6 +0x06:  mov    0x8(%ebp),%eax
084ba0b9 +0x09:  mov    %eax,(%esp)
084ba0bc +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084ba0c1 +0x11:  xor    $0x1,%eax
084ba0c4 +0x14:  test   %al,%al
084ba0c6 +0x16:  jne    084ba0e5 <+0x35>
084ba0c8 +0x18:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084ba0d0 +0x20:  movl   $"[%s]던젼 클리어\r\n",0x4(%esp)
084ba0d8 +0x28:  mov    0x8(%ebp),%eax
084ba0db +0x2b:  mov    %eax,(%esp)
084ba0de +0x2e:  call   0807da90 <_init+0x388>
084ba0e3 +0x33:  jmp    084ba0e6 <+0x36>
084ba0e5 +0x35:  nop
084ba0e6 +0x36:  leave
084ba0e7 +0x37:  ret
```

## 反编译 C

```c
// HistoryLog::WriteDunClear @ 0x84ba0b0

/* HistoryLog::WriteDunClear(_IO_FILE*) */

void HistoryLog::WriteDunClear(_IO_FILE *param_1)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c862c1,time);
  }
  return;
}
```
