# logMoney

`_ZN4CLog8logMoneyEPKcz`

`CLog::logMoney(char const*, ...)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854f282` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f282  _ZN4CLog8logMoneyEPKcz
#           CLog::logMoney(char const*, ...)
# range [0x0854f282, 0x0854f2e1]
0854f282 +0x00:  push   %ebp
0854f283 +0x01:  mov    %esp,%ebp
0854f285 +0x03:  sub    $0x38,%esp
0854f288 +0x06:  lea    0x10(%ebp),%eax
0854f28b +0x09:  mov    %eax,-0x10(%ebp)
0854f28e +0x0c:  mov    -0x10(%ebp),%eax
0854f291 +0x0f:  mov    0x8(%ebp),%edx
0854f294 +0x12:  lea    0x228(%edx),%ecx
0854f29a +0x18:  mov    0x8(%ebp),%edx
0854f29d +0x1b:  add    $0xfc,%edx
0854f2a3 +0x21:  movl   $0x1,0x1c(%esp)
0854f2ab +0x29:  mov    %eax,0x18(%esp)
0854f2af +0x2d:  mov    0xc(%ebp),%eax
0854f2b2 +0x30:  mov    %eax,0x14(%esp)
0854f2b6 +0x34:  movl   $".money",0x10(%esp)
0854f2be +0x3c:  movl   $0x0,0xc(%esp)
0854f2c6 +0x44:  mov    %ecx,0x8(%esp)
0854f2ca +0x48:  mov    %edx,0x4(%esp)
0854f2ce +0x4c:  mov    0x8(%ebp),%eax
0854f2d1 +0x4f:  mov    %eax,(%esp)
0854f2d4 +0x52:  call   0854edb0 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b>  ; CLog::logToFile(_IO_FILE*&, TimeLog_&, bool, char*, char const*, char*, bool)
0854f2d9 +0x57:  mov    %al,-0x9(%ebp)
0854f2dc +0x5a:  movzbl -0x9(%ebp),%eax
0854f2e0 +0x5e:  leave
0854f2e1 +0x5f:  ret
```

## 反编译 C

```c
// CLog::logMoney @ 0x854f282

/* CLog::logMoney(char const*, ...) */

undefined1 __thiscall CLog::logMoney(CLog *this,char *param_1,...)

{
  undefined1 uVar1;
  
  uVar1 = logToFile(this,(_IO_FILE **)(this + 0xfc),this + 0x228,false,".money",param_1,
                    &stack0x0000000c,true);
  return uVar1;
}
```
