# WriteChat

`_ZN10HistoryLog9WriteChatEP8_IO_FILEiPci`

`HistoryLog::WriteChat(_IO_FILE*, int, char*, int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9e9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9e9e  _ZN10HistoryLog9WriteChatEP8_IO_FILEiPci
#           HistoryLog::WriteChat(_IO_FILE*, int, char*, int)
# range [0x084b9e9e, 0x084b9ee3]
084b9e9e +0x00:  push   %ebp
084b9e9f +0x01:  mov    %esp,%ebp
084b9ea1 +0x03:  sub    $0x28,%esp
084b9ea4 +0x06:  mov    0x8(%ebp),%eax
084b9ea7 +0x09:  mov    %eax,(%esp)
084b9eaa +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084b9eaf +0x11:  xor    $0x1,%eax
084b9eb2 +0x14:  test   %al,%al
084b9eb4 +0x16:  jne    084b9ee1 <+0x43>
084b9eb6 +0x18:  mov    0x10(%ebp),%eax
084b9eb9 +0x1b:  mov    %eax,0x10(%esp)
084b9ebd +0x1f:  mov    0xc(%ebp),%eax
084b9ec0 +0x22:  mov    %eax,0xc(%esp)
084b9ec4 +0x26:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084b9ecc +0x2e:  movl   $"[%s]채팅타입:%d 내용: %s\r\n",0x4(%esp)
084b9ed4 +0x36:  mov    0x8(%ebp),%eax
084b9ed7 +0x39:  mov    %eax,(%esp)
084b9eda +0x3c:  call   0807da90 <_init+0x388>
084b9edf +0x41:  jmp    084b9ee2 <+0x44>
084b9ee1 +0x43:  nop
084b9ee2 +0x44:  leave
084b9ee3 +0x45:  ret
```

## 反编译 C

```c
// HistoryLog::WriteChat @ 0x84b9e9e

/* HistoryLog::WriteChat(_IO_FILE*, int, char*, int) */

void HistoryLog::WriteChat(_IO_FILE *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c861ed,time,param_2,param_3);
  }
  return;
}
```
