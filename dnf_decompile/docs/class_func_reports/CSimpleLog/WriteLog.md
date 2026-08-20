# WriteLog

`_ZN10CSimpleLog8WriteLogEPKcz`

`CSimpleLog::WriteLog(char const*, ...)`

| 类 | 地址 |
|---|---|
| `CSimpleLog` | `0x0854fcb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854fcb8  _ZN10CSimpleLog8WriteLogEPKcz
#           CSimpleLog::WriteLog(char const*, ...)
# range [0x0854fcb8, 0x0854fd17]
0854fcb8 +0x00:  push   %ebp
0854fcb9 +0x01:  mov    %esp,%ebp
0854fcbb +0x03:  sub    $0x1028,%esp
0854fcc1 +0x09:  movl   $0x1000,0x8(%esp)
0854fcc9 +0x11:  movl   $0x0,0x4(%esp)
0854fcd1 +0x19:  lea    -0x100c(%ebp),%eax
0854fcd7 +0x1f:  mov    %eax,(%esp)
0854fcda +0x22:  call   0807dcc0 <_init+0x5b8>
0854fcdf +0x27:  lea    0x10(%ebp),%eax
0854fce2 +0x2a:  mov    %eax,-0xc(%ebp)
0854fce5 +0x2d:  mov    -0xc(%ebp),%eax
0854fce8 +0x30:  mov    %eax,0x8(%esp)
0854fcec +0x34:  mov    0xc(%ebp),%eax
0854fcef +0x37:  mov    %eax,0x4(%esp)
0854fcf3 +0x3b:  lea    -0x100c(%ebp),%eax
0854fcf9 +0x41:  mov    %eax,(%esp)
0854fcfc +0x44:  call   0807d7d0 <_init+0xc8>
0854fd01 +0x49:  lea    -0x100c(%ebp),%eax
0854fd07 +0x4f:  mov    %eax,0x4(%esp)
0854fd0b +0x53:  mov    0x8(%ebp),%eax
0854fd0e +0x56:  mov    %eax,(%esp)
0854fd11 +0x59:  call   0854fbfc <_ZN10CSimpleLog9_WriteLogEPKc>  ; CSimpleLog::_WriteLog(char const*)
0854fd16 +0x5e:  leave
0854fd17 +0x5f:  ret
```

## 反编译 C

```c
// CSimpleLog::WriteLog @ 0x854fcb8

/* CSimpleLog::WriteLog(char const*, ...) */

void __thiscall CSimpleLog::WriteLog(CSimpleLog *this,char *param_1,...)

{
  char local_1010 [4096];
  undefined1 *local_10;
  
  memset(local_1010,0,0x1000);
  local_10 = &stack0x0000000c;
  vsprintf(local_1010,param_1,local_10);
  _WriteLog(this,local_1010);
  return;
}
```
