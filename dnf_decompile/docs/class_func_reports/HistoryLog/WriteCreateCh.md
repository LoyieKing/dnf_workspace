# WriteCreateCh

`_ZN10HistoryLog13WriteCreateChEP8_IO_FILEPci`

`HistoryLog::WriteCreateCh(_IO_FILE*, char*, int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9d70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9d70  _ZN10HistoryLog13WriteCreateChEP8_IO_FILEPci
#           HistoryLog::WriteCreateCh(_IO_FILE*, char*, int)
# range [0x084b9d70, 0x084b9db5]
084b9d70 +0x00:  push   %ebp
084b9d71 +0x01:  mov    %esp,%ebp
084b9d73 +0x03:  sub    $0x28,%esp
084b9d76 +0x06:  mov    0x8(%ebp),%eax
084b9d79 +0x09:  mov    %eax,(%esp)
084b9d7c +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084b9d81 +0x11:  xor    $0x1,%eax
084b9d84 +0x14:  test   %al,%al
084b9d86 +0x16:  jne    084b9db3 <+0x43>
084b9d88 +0x18:  mov    0x10(%ebp),%eax
084b9d8b +0x1b:  mov    %eax,0x10(%esp)
084b9d8f +0x1f:  mov    0xc(%ebp),%eax
084b9d92 +0x22:  mov    %eax,0xc(%esp)
084b9d96 +0x26:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084b9d9e +0x2e:  movl   $"[%s]캐릭생성:%s 직업:%d\r\n",0x4(%esp)
084b9da6 +0x36:  mov    0x8(%ebp),%eax
084b9da9 +0x39:  mov    %eax,(%esp)
084b9dac +0x3c:  call   0807da90 <_init+0x388>
084b9db1 +0x41:  jmp    084b9db4 <+0x44>
084b9db3 +0x43:  nop
084b9db4 +0x44:  leave
084b9db5 +0x45:  ret
```

## 反编译 C

```c
// HistoryLog::WriteCreateCh @ 0x84b9d70

/* HistoryLog::WriteCreateCh(_IO_FILE*, char*, int) */

void HistoryLog::WriteCreateCh(_IO_FILE *param_1,char *param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c8615f,time,param_2,param_3);
  }
  return;
}
```
