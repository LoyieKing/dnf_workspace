# LogClose

`_ZN10HistoryLog8LogCloseEP8_IO_FILE`

`HistoryLog::LogClose(_IO_FILE*)`

| 类 | 地址 |
|---|---|
| `HistoryLog` | `0x084b9d34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9d34  _ZN10HistoryLog8LogCloseEP8_IO_FILE
#           HistoryLog::LogClose(_IO_FILE*)
# range [0x084b9d34, 0x084b9d6f]
084b9d34 +0x00:  push   %ebp
084b9d35 +0x01:  mov    %esp,%ebp
084b9d37 +0x03:  sub    $0x18,%esp
084b9d3a +0x06:  cmpl   $0x0,0x8(%ebp)
084b9d3e +0x0a:  je     084b9d6d <+0x39>
084b9d40 +0x0c:  mov    0x8(%ebp),%eax
084b9d43 +0x0f:  mov    %eax,(%esp)
084b9d46 +0x12:  call   0807dea0 <_init+0x798>
084b9d4b +0x17:  mov    0x8(%ebp),%eax
084b9d4e +0x1a:  mov    %eax,0x4(%esp)
084b9d52 +0x1e:  movl   $&_ZN10HistoryLog9logfiles_E,(%esp)
084b9d59 +0x25:  call   084ba594 <_GLOBAL__I__ZN10HistoryLog9logfiles_E+0x2ab>  ; global constructors keyed to HistoryLog::logfiles_+0x2ab
084b9d5e +0x2a:  mov    &_ZN10HistoryLog6count_E,%eax
084b9d63 +0x2f:  sub    $0x1,%eax
084b9d66 +0x32:  mov    %eax,&_ZN10HistoryLog6count_E
084b9d6b +0x37:  jmp    084b9d6e <+0x3a>
084b9d6d +0x39:  nop
084b9d6e +0x3a:  leave
084b9d6f +0x3b:  ret
```

## 反编译 C

```c
// HistoryLog::LogClose @ 0x84b9d34

/* HistoryLog::LogClose(_IO_FILE*) */

void HistoryLog::LogClose(_IO_FILE *param_1)

{
  if (param_1 != (_IO_FILE *)0x0) {
    fclose(param_1);
    StaticPool<_IO_FILE,50>::Free((StaticPool<_IO_FILE,50> *)logfiles_,param_1);
    count_ = count_ + -1;
  }
  return;
}
```
