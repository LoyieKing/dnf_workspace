# WriteUseCoin

`_ZN10HistoryLog12WriteUseCoinEP8_IO_FILEPKc`

`HistoryLog::WriteUseCoin(_IO_FILE*, char const*)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084ba030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ba030  _ZN10HistoryLog12WriteUseCoinEP8_IO_FILEPKc
#           HistoryLog::WriteUseCoin(_IO_FILE*, char const*)
# range [0x084ba030, 0x084ba06f]
084ba030 +0x00:  push   %ebp
084ba031 +0x01:  mov    %esp,%ebp
084ba033 +0x03:  sub    $0x18,%esp
084ba036 +0x06:  mov    0x8(%ebp),%eax
084ba039 +0x09:  mov    %eax,(%esp)
084ba03c +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084ba041 +0x11:  xor    $0x1,%eax
084ba044 +0x14:  test   %al,%al
084ba046 +0x16:  jne    084ba06c <+0x3c>
084ba048 +0x18:  mov    0xc(%ebp),%eax
084ba04b +0x1b:  mov    %eax,0xc(%esp)
084ba04f +0x1f:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084ba057 +0x27:  movl   $"[%s]코인사용 -> %s\r\n",0x4(%esp)
084ba05f +0x2f:  mov    0x8(%ebp),%eax
084ba062 +0x32:  mov    %eax,(%esp)
084ba065 +0x35:  call   0807da90 <_init+0x388>
084ba06a +0x3a:  jmp    084ba06d <+0x3d>
084ba06c +0x3c:  nop
084ba06d +0x3d:  leave
084ba06e +0x3e:  ret
084ba06f +0x3f:  nop
```

## 反编译 C

```c
// HistoryLog::WriteUseCoin @ 0x84ba030

/* HistoryLog::WriteUseCoin(_IO_FILE*, char const*) */

void HistoryLog::WriteUseCoin(_IO_FILE *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86299,time,param_2);
  }
  return;
}
```
