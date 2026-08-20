# WriteBuyItem

`_ZN10HistoryLog12WriteBuyItemEP8_IO_FILEii`

`HistoryLog::WriteBuyItem(_IO_FILE*, int, int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084ba1f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ba1f4  _ZN10HistoryLog12WriteBuyItemEP8_IO_FILEii
#           HistoryLog::WriteBuyItem(_IO_FILE*, int, int)
# range [0x084ba1f4, 0x084ba239]
084ba1f4 +0x00:  push   %ebp
084ba1f5 +0x01:  mov    %esp,%ebp
084ba1f7 +0x03:  sub    $0x28,%esp
084ba1fa +0x06:  mov    0x8(%ebp),%eax
084ba1fd +0x09:  mov    %eax,(%esp)
084ba200 +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084ba205 +0x11:  xor    $0x1,%eax
084ba208 +0x14:  test   %al,%al
084ba20a +0x16:  jne    084ba237 <+0x43>
084ba20c +0x18:  mov    0x10(%ebp),%eax
084ba20f +0x1b:  mov    %eax,0x10(%esp)
084ba213 +0x1f:  mov    0xc(%ebp),%eax
084ba216 +0x22:  mov    %eax,0xc(%esp)
084ba21a +0x26:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084ba222 +0x2e:  movl   $"[%s]아이템구입 ID: %d, Count:%d\r\n",0x4(%esp)
084ba22a +0x36:  mov    0x8(%ebp),%eax
084ba22d +0x39:  mov    %eax,(%esp)
084ba230 +0x3c:  call   0807da90 <_init+0x388>
084ba235 +0x41:  jmp    084ba238 <+0x44>
084ba237 +0x43:  nop
084ba238 +0x44:  leave
084ba239 +0x45:  ret
```

## 反编译 C

```c
// HistoryLog::WriteBuyItem @ 0x84ba1f4

/* HistoryLog::WriteBuyItem(_IO_FILE*, int, int) */

void HistoryLog::WriteBuyItem(_IO_FILE *param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86350,time,param_2,param_3);
  }
  return;
}
```
