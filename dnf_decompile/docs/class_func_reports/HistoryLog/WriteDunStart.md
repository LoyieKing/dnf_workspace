# WriteDunStart

`_ZN10HistoryLog13WriteDunStartEP8_IO_FILEiii`

`HistoryLog::WriteDunStart(_IO_FILE*, int, int, int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9f6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9f6a  _ZN10HistoryLog13WriteDunStartEP8_IO_FILEiii
#           HistoryLog::WriteDunStart(_IO_FILE*, int, int, int)
# range [0x084b9f6a, 0x084b9fb7]
084b9f6a +0x00:  push   %ebp
084b9f6b +0x01:  mov    %esp,%ebp
084b9f6d +0x03:  sub    $0x28,%esp
084b9f70 +0x06:  mov    0x8(%ebp),%eax
084b9f73 +0x09:  mov    %eax,(%esp)
084b9f76 +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084b9f7b +0x11:  xor    $0x1,%eax
084b9f7e +0x14:  test   %al,%al
084b9f80 +0x16:  jne    084b9fb4 <+0x4a>
084b9f82 +0x18:  mov    0x14(%ebp),%eax
084b9f85 +0x1b:  mov    %eax,0x14(%esp)
084b9f89 +0x1f:  mov    0x10(%ebp),%eax
084b9f8c +0x22:  mov    %eax,0x10(%esp)
084b9f90 +0x26:  mov    0xc(%ebp),%eax
084b9f93 +0x29:  mov    %eax,0xc(%esp)
084b9f97 +0x2d:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084b9f9f +0x35:  movl   $"[%s]던젼 시작 Job: %d, Level: %d 성장형: %d\r\n",0x4(%esp)
084b9fa7 +0x3d:  mov    0x8(%ebp),%eax
084b9faa +0x40:  mov    %eax,(%esp)
084b9fad +0x43:  call   0807da90 <_init+0x388>
084b9fb2 +0x48:  jmp    084b9fb5 <+0x4b>
084b9fb4 +0x4a:  nop
084b9fb5 +0x4b:  leave
084b9fb6 +0x4c:  ret
084b9fb7 +0x4d:  nop
```

## 反编译 C

```c
// HistoryLog::WriteDunStart @ 0x84b9f6a

/* HistoryLog::WriteDunStart(_IO_FILE*, int, int, int) */

void HistoryLog::WriteDunStart(_IO_FILE *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86240,time,param_2,param_3,param_4);
  }
  return;
}
```
