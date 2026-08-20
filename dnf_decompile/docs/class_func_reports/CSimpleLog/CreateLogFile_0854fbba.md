# CreateLogFile

`_ZN10CSimpleLog13CreateLogFileEPKc`

`CSimpleLog::CreateLogFile(char const*)`

| 类 | 地址 |
|---|---|
| `CSimpleLog` | `0x0854fbba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854fbba  _ZN10CSimpleLog13CreateLogFileEPKc
#           CSimpleLog::CreateLogFile(char const*)
# range [0x0854fbba, 0x0854fbfb]
0854fbba +0x00:  push   %ebp
0854fbbb +0x01:  mov    %esp,%ebp
0854fbbd +0x03:  sub    $0x28,%esp
0854fbc0 +0x06:  lea    -0x10(%ebp),%eax
0854fbc3 +0x09:  mov    %eax,(%esp)
0854fbc6 +0x0c:  call   0854fa02 <_ZN10CSimpleLog8DateTimeC1Ev>  ; CSimpleLog::DateTime::DateTime()
0854fbcb +0x11:  mov    0x8(%ebp),%eax
0854fbce +0x14:  lea    0xc(%eax),%edx
0854fbd1 +0x17:  movl   $0xfe,0x8(%esp)
0854fbd9 +0x1f:  mov    0xc(%ebp),%eax
0854fbdc +0x22:  mov    %eax,0x4(%esp)
0854fbe0 +0x26:  mov    %edx,(%esp)
0854fbe3 +0x29:  call   0807d8d0 <_init+0x1c8>
0854fbe8 +0x2e:  lea    -0x10(%ebp),%eax
0854fbeb +0x31:  mov    %eax,0x4(%esp)
0854fbef +0x35:  mov    0x8(%ebp),%eax
0854fbf2 +0x38:  mov    %eax,(%esp)
0854fbf5 +0x3b:  call   0854fb32 <_ZN10CSimpleLog13CreateLogFileERNS_8DateTimeE>  ; CSimpleLog::CreateLogFile(CSimpleLog::DateTime&)
0854fbfa +0x40:  leave
0854fbfb +0x41:  ret
```

## 反编译 C

```c
// CSimpleLog::CreateLogFile @ 0x854fbba

/* CSimpleLog::CreateLogFile(char const*) */

void __thiscall CSimpleLog::CreateLogFile(CSimpleLog *this,char *param_1)

{
  DateTime local_14 [16];
  
  DateTime::DateTime(local_14);
  strncpy((char *)(this + 0xc),param_1,0xfe);
  CreateLogFile(this,local_14);
  return;
}
```
