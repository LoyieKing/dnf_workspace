# logSnapShot

`_ZN4CLog11logSnapShotEPKcz`

`CLog::logSnapShot(char const*, ...)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854f4c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f4c0  _ZN4CLog11logSnapShotEPKcz
#           CLog::logSnapShot(char const*, ...)
# range [0x0854f4c0, 0x0854f51f]
0854f4c0 +0x00:  push   %ebp
0854f4c1 +0x01:  mov    %esp,%ebp
0854f4c3 +0x03:  sub    $0x38,%esp
0854f4c6 +0x06:  lea    0x10(%ebp),%eax
0854f4c9 +0x09:  mov    %eax,-0x10(%ebp)
0854f4cc +0x0c:  mov    -0x10(%ebp),%eax
0854f4cf +0x0f:  mov    0x8(%ebp),%edx
0854f4d2 +0x12:  lea    0x248(%edx),%ecx
0854f4d8 +0x18:  mov    0x8(%ebp),%edx
0854f4db +0x1b:  add    $0x10c,%edx
0854f4e1 +0x21:  movl   $0x0,0x1c(%esp)
0854f4e9 +0x29:  mov    %eax,0x18(%esp)
0854f4ed +0x2d:  mov    0xc(%ebp),%eax
0854f4f0 +0x30:  mov    %eax,0x14(%esp)
0854f4f4 +0x34:  movl   $".snap",0x10(%esp)
0854f4fc +0x3c:  movl   $0x0,0xc(%esp)
0854f504 +0x44:  mov    %ecx,0x8(%esp)
0854f508 +0x48:  mov    %edx,0x4(%esp)
0854f50c +0x4c:  mov    0x8(%ebp),%eax
0854f50f +0x4f:  mov    %eax,(%esp)
0854f512 +0x52:  call   0854edb0 <_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b>  ; CLog::logToFile(_IO_FILE*&, TimeLog_&, bool, char*, char const*, char*, bool)
0854f517 +0x57:  mov    %al,-0x9(%ebp)
0854f51a +0x5a:  movzbl -0x9(%ebp),%eax
0854f51e +0x5e:  leave
0854f51f +0x5f:  ret
```

## 反编译 C

```c
// CLog::logSnapShot @ 0x854f4c0

/* CLog::logSnapShot(char const*, ...) */

undefined1 __thiscall CLog::logSnapShot(CLog *this,char *param_1,...)

{
  undefined1 uVar1;
  
  uVar1 = logToFile(this,(_IO_FILE **)(this + 0x10c),this + 0x248,false,".snap",param_1,
                    &stack0x0000000c,false);
  return uVar1;
}
```
