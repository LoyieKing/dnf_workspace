# WriteTradeUp

`_ZN10HistoryLog12WriteTradeUpEP8_IO_FILEii`

`HistoryLog::WriteTradeUp(_IO_FILE*, int, int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084ba0e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ba0e8  _ZN10HistoryLog12WriteTradeUpEP8_IO_FILEii
#           HistoryLog::WriteTradeUp(_IO_FILE*, int, int)
# range [0x084ba0e8, 0x084ba12d]
084ba0e8 +0x00:  push   %ebp
084ba0e9 +0x01:  mov    %esp,%ebp
084ba0eb +0x03:  sub    $0x28,%esp
084ba0ee +0x06:  mov    0x8(%ebp),%eax
084ba0f1 +0x09:  mov    %eax,(%esp)
084ba0f4 +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084ba0f9 +0x11:  xor    $0x1,%eax
084ba0fc +0x14:  test   %al,%al
084ba0fe +0x16:  jne    084ba12b <+0x43>
084ba100 +0x18:  mov    0x10(%ebp),%eax
084ba103 +0x1b:  mov    %eax,0x10(%esp)
084ba107 +0x1f:  mov    0xc(%ebp),%eax
084ba10a +0x22:  mov    %eax,0xc(%esp)
084ba10e +0x26:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084ba116 +0x2e:  movl   $"[%s]트레이드 업리스트 ID:%d Count:%d\r\n",0x4(%esp)
084ba11e +0x36:  mov    0x8(%ebp),%eax
084ba121 +0x39:  mov    %eax,(%esp)
084ba124 +0x3c:  call   0807da90 <_init+0x388>
084ba129 +0x41:  jmp    084ba12c <+0x44>
084ba12b +0x43:  nop
084ba12c +0x44:  leave
084ba12d +0x45:  ret
```

## 反编译 C

```c
// HistoryLog::WriteTradeUp @ 0x84ba0e8

/* HistoryLog::WriteTradeUp(_IO_FILE*, int, int) */

void HistoryLog::WriteTradeUp(_IO_FILE *param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c862d4,time,param_2,param_3);
  }
  return;
}
```
