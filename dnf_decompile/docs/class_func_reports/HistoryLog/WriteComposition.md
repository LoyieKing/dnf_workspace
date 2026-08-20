# WriteComposition

`_ZN10HistoryLog16WriteCompositionEP8_IO_FILEi`

`HistoryLog::WriteComposition(_IO_FILE*, int)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084ba174` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ba174  _ZN10HistoryLog16WriteCompositionEP8_IO_FILEi
#           HistoryLog::WriteComposition(_IO_FILE*, int)
# range [0x084ba174, 0x084ba1b3]
084ba174 +0x00:  push   %ebp
084ba175 +0x01:  mov    %esp,%ebp
084ba177 +0x03:  sub    $0x18,%esp
084ba17a +0x06:  mov    0x8(%ebp),%eax
084ba17d +0x09:  mov    %eax,(%esp)
084ba180 +0x0c:  call   084b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>  ; HistoryLog::CheckFD(_IO_FILE*)
084ba185 +0x11:  xor    $0x1,%eax
084ba188 +0x14:  test   %al,%al
084ba18a +0x16:  jne    084ba1b0 <+0x3c>
084ba18c +0x18:  mov    0xc(%ebp),%eax
084ba18f +0x1b:  mov    %eax,0xc(%esp)
084ba193 +0x1f:  movl   $&_ZN10HistoryLog4timeE,0x8(%esp)
084ba19b +0x27:  movl   $"[%s]합성 레서피: %d\r\n",0x4(%esp)
084ba1a3 +0x2f:  mov    0x8(%ebp),%eax
084ba1a6 +0x32:  mov    %eax,(%esp)
084ba1a9 +0x35:  call   0807da90 <_init+0x388>
084ba1ae +0x3a:  jmp    084ba1b1 <+0x3d>
084ba1b0 +0x3c:  nop
084ba1b1 +0x3d:  leave
084ba1b2 +0x3e:  ret
084ba1b3 +0x3f:  nop
```

## 反编译 C

```c
// HistoryLog::WriteComposition @ 0x84ba174

/* HistoryLog::WriteComposition(_IO_FILE*, int) */

void HistoryLog::WriteComposition(_IO_FILE *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86325,time,param_2);
  }
  return;
}
```
