# CSimpleLog

`_ZN10CSimpleLogC1Ev`

`CSimpleLog::CSimpleLog()`

| 类 | 地址 |
|---|---|
| `CSimpleLog` | `0x0854fa88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854fa88  _ZN10CSimpleLogC1Ev
#           CSimpleLog::CSimpleLog()
# range [0x0854fa88, 0x0854faa7]
0854fa88 +0x00:  push   %ebp
0854fa89 +0x01:  mov    %esp,%ebp
0854fa8b +0x03:  sub    $0x18,%esp
0854fa8e +0x06:  mov    0x8(%ebp),%eax
0854fa91 +0x09:  movl   $0x0,(%eax)
0854fa97 +0x0f:  mov    0x8(%ebp),%eax
0854fa9a +0x12:  add    $0x4,%eax
0854fa9d +0x15:  mov    %eax,(%esp)
0854faa0 +0x18:  call   0854fa02 <_ZN10CSimpleLog8DateTimeC1Ev>  ; CSimpleLog::DateTime::DateTime()
0854faa5 +0x1d:  leave
0854faa6 +0x1e:  ret
0854faa7 +0x1f:  nop
```

## 反编译 C

```c
// CSimpleLog::CSimpleLog @ 0x854fa88

/* CSimpleLog::CSimpleLog() */

void __thiscall CSimpleLog::CSimpleLog(CSimpleLog *this)

{
  *(undefined4 *)this = 0;
  DateTime::DateTime((DateTime *)(this + 4));
  return;
}
```
