# WriteSelectCh

`_ZN10HistoryLog13WriteSelectChEP8_IO_FILEPKciii`

`HistoryLog::WriteSelectCh(_IO_FILE*, char const*, int, int, int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9db6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9db6  _ZN10HistoryLog13WriteSelectChEP8_IO_FILEPKciii
#           HistoryLog::WriteSelectCh(_IO_FILE*, char const*, int, int, int)
# range [0x084b9db6, 0x084b9e09]
084b9db6 +0x00:  push   %ebp
084b9db7 +0x01:  mov    %esp,%ebp
084b9db9 +0x03:  sub    $0x28,%esp
084b9dbc +0x06:  mov    0x8(%ebp),%eax
084b9dbf +0x09:  mov    %eax,(%esp)
084b9dc2 +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084b9dc7 +0x11:  xor    $0x1,%eax
084b9dca +0x14:  test   %al,%al
084b9dcc +0x16:  jne    084b9e07 <+0x51>
084b9dce +0x18:  mov    0x18(%ebp),%eax
084b9dd1 +0x1b:  mov    %eax,0x18(%esp)
084b9dd5 +0x1f:  mov    0x14(%ebp),%eax
084b9dd8 +0x22:  mov    %eax,0x14(%esp)
084b9ddc +0x26:  mov    0x10(%ebp),%eax
084b9ddf +0x29:  mov    %eax,0x10(%esp)
084b9de3 +0x2d:  mov    0xc(%ebp),%eax
084b9de6 +0x30:  mov    %eax,0xc(%esp)
084b9dea +0x34:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084b9df2 +0x3c:  movl   $"[%s]캐릭선택:%s, 직업:%d, 레벨:%d, 성장형:%d\r\n",0x4(%esp)
084b9dfa +0x44:  mov    0x8(%ebp),%eax
084b9dfd +0x47:  mov    %eax,(%esp)
084b9e00 +0x4a:  call   0807da90 <_init+0x388>
084b9e05 +0x4f:  jmp    084b9e08 <+0x52>
084b9e07 +0x51:  nop
084b9e08 +0x52:  leave
084b9e09 +0x53:  ret
```

## 反编译 C

```c
// HistoryLog::WriteSelectCh @ 0x84b9db6

/* HistoryLog::WriteSelectCh(_IO_FILE*, char const*, int, int, int) */

void HistoryLog::WriteSelectCh(_IO_FILE *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c8617c,time,param_2,param_3,param_4,param_5);
  }
  return;
}
```
