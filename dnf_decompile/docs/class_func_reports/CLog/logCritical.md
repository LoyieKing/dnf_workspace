# logCritical

`_ZN4CLog11logCriticalEPKcz`

`CLog::logCritical(char const*, ...)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854f222` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f222  _ZN4CLog11logCriticalEPKcz
#           CLog::logCritical(char const*, ...)
# range [0x0854f222, 0x0854f281]
0854f222 +0x00:  push   %ebp
0854f223 +0x01:  mov    %esp,%ebp
0854f225 +0x03:  sub    $0x38,%esp
0854f228 +0x06:  lea    0x10(%ebp),%eax
0854f22b +0x09:  mov    %eax,-0x10(%ebp)
0854f22e +0x0c:  mov    -0x10(%ebp),%eax
0854f231 +0x0f:  mov    0x8(%ebp),%edx
0854f234 +0x12:  lea    0x238(%edx),%ecx
0854f23a +0x18:  mov    0x8(%ebp),%edx
0854f23d +0x1b:  add    $0x104,%edx
0854f243 +0x21:  movl   $0x1,0x1c(%esp)
0854f24b +0x29:  mov    %eax,0x18(%esp)
0854f24f +0x2d:  mov    0xc(%ebp),%eax
0854f252 +0x30:  mov    %eax,0x14(%esp)
0854f256 +0x34:  movl   $".cri",0x10(%esp)
0854f25e +0x3c:  movl   $0x0,0xc(%esp)
0854f266 +0x44:  mov    %ecx,0x8(%esp)
0854f26a +0x48:  mov    %edx,0x4(%esp)
0854f26e +0x4c:  mov    0x8(%ebp),%eax
0854f271 +0x4f:  mov    %eax,(%esp)
0854f274 +0x52:  call   0854edb0 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b>  ; CLog::logToFile(_IO_FILE*&, TimeLog_&, bool, char*, char const*, char*, bool)
0854f279 +0x57:  mov    %al,-0x9(%ebp)
0854f27c +0x5a:  movzbl -0x9(%ebp),%eax
0854f280 +0x5e:  leave
0854f281 +0x5f:  ret
```

## 反编译 C

```c
// CLog::logCritical @ 0x854f222

/* CLog::logCritical(char const*, ...) */

undefined1 __thiscall CLog::logCritical(CLog *this,char *param_1,...)

{
  undefined1 uVar1;
  
  uVar1 = logToFile(this,(_IO_FILE **)(this + 0x104),this + 0x238,false,".cri",param_1,
                    &stack0x0000000c,true);
  return uVar1;
}
```
