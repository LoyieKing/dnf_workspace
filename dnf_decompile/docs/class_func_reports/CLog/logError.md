# logError

`_ZN4CLog8logErrorEPKcz`

`CLog::logError(char const*, ...)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854f1c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f1c2  _ZN4CLog8logErrorEPKcz
#           CLog::logError(char const*, ...)
# range [0x0854f1c2, 0x0854f221]
0854f1c2 +0x00:  push   %ebp
0854f1c3 +0x01:  mov    %esp,%ebp
0854f1c5 +0x03:  sub    $0x38,%esp
0854f1c8 +0x06:  lea    0x10(%ebp),%eax
0854f1cb +0x09:  mov    %eax,-0x10(%ebp)
0854f1ce +0x0c:  mov    -0x10(%ebp),%eax
0854f1d1 +0x0f:  mov    0x8(%ebp),%edx
0854f1d4 +0x12:  lea    0x218(%edx),%ecx
0854f1da +0x18:  mov    0x8(%ebp),%edx
0854f1dd +0x1b:  add    $0xf4,%edx
0854f1e3 +0x21:  movl   $0x1,0x1c(%esp)
0854f1eb +0x29:  mov    %eax,0x18(%esp)
0854f1ef +0x2d:  mov    0xc(%ebp),%eax
0854f1f2 +0x30:  mov    %eax,0x14(%esp)
0854f1f6 +0x34:  movl   $".error",0x10(%esp)
0854f1fe +0x3c:  movl   $0x0,0xc(%esp)
0854f206 +0x44:  mov    %ecx,0x8(%esp)
0854f20a +0x48:  mov    %edx,0x4(%esp)
0854f20e +0x4c:  mov    0x8(%ebp),%eax
0854f211 +0x4f:  mov    %eax,(%esp)
0854f214 +0x52:  call   0854edb0 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b>  ; CLog::logToFile(_IO_FILE*&, TimeLog_&, bool, char*, char const*, char*, bool)
0854f219 +0x57:  mov    %al,-0x9(%ebp)
0854f21c +0x5a:  movzbl -0x9(%ebp),%eax
0854f220 +0x5e:  leave
0854f221 +0x5f:  ret
```

## 反编译 C

```c
// CLog::logError @ 0x854f1c2

/* CLog::logError(char const*, ...) */

undefined1 __thiscall CLog::logError(CLog *this,char *param_1,...)

{
  undefined1 uVar1;
  
  uVar1 = logToFile(this,(_IO_FILE **)(this + 0xf4),this + 0x218,false,".error",param_1,
                    &stack0x0000000c,true);
  return uVar1;
}
```
