# ~CSimpleLog

`_ZN10CSimpleLogD1Ev`

`CSimpleLog::~CSimpleLog()`

| 类 | 地址 |
|---|---|
| `CSimpleLog` | `0x0854faa8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854faa8  _ZN10CSimpleLogD1Ev
#           CSimpleLog::~CSimpleLog()
# range [0x0854faa8, 0x0854fabb]
0854faa8 +0x00:  push   %ebp
0854faa9 +0x01:  mov    %esp,%ebp
0854faab +0x03:  sub    $0x18,%esp
0854faae +0x06:  mov    0x8(%ebp),%eax
0854fab1 +0x09:  mov    %eax,(%esp)
0854fab4 +0x0c:  call   0854fb06 <_ZN10CSimpleLog9CloseFileEv>  ; CSimpleLog::CloseFile()
0854fab9 +0x11:  leave
0854faba +0x12:  ret
0854fabb +0x13:  nop
```

## 反编译 C

```c
// CSimpleLog::~CSimpleLog @ 0x854faa8

/* CSimpleLog::~CSimpleLog() */

void __thiscall CSimpleLog::~CSimpleLog(CSimpleLog *this)

{
  CloseFile(this);
  return;
}
```
