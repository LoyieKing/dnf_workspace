# WriteLevelUp

`_ZN10HistoryLog12WriteLevelUpEP8_IO_FILEi`

`HistoryLog::WriteLevelUp(_IO_FILE*, int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9e5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9e5e  _ZN10HistoryLog12WriteLevelUpEP8_IO_FILEi
#           HistoryLog::WriteLevelUp(_IO_FILE*, int)
# range [0x084b9e5e, 0x084b9e9d]
084b9e5e +0x00:  push   %ebp
084b9e5f +0x01:  mov    %esp,%ebp
084b9e61 +0x03:  sub    $0x18,%esp
084b9e64 +0x06:  mov    0x8(%ebp),%eax
084b9e67 +0x09:  mov    %eax,(%esp)
084b9e6a +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084b9e6f +0x11:  xor    $0x1,%eax
084b9e72 +0x14:  test   %al,%al
084b9e74 +0x16:  jne    084b9e9a <+0x3c>
084b9e76 +0x18:  mov    0xc(%ebp),%eax
084b9e79 +0x1b:  mov    %eax,0xc(%esp)
084b9e7d +0x1f:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084b9e85 +0x27:  movl   $"[%s]레벨업: %d\r\n",0x4(%esp)
084b9e8d +0x2f:  mov    0x8(%ebp),%eax
084b9e90 +0x32:  mov    %eax,(%esp)
084b9e93 +0x35:  call   0807da90 <_init+0x388>
084b9e98 +0x3a:  jmp    084b9e9b <+0x3d>
084b9e9a +0x3c:  nop
084b9e9b +0x3d:  leave
084b9e9c +0x3e:  ret
084b9e9d +0x3f:  nop
```

## 反编译 C

```c
// HistoryLog::WriteLevelUp @ 0x84b9e5e

/* HistoryLog::WriteLevelUp(_IO_FILE*, int) */

void HistoryLog::WriteLevelUp(_IO_FILE *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c861dc,time,param_2);
  }
  return;
}
```
