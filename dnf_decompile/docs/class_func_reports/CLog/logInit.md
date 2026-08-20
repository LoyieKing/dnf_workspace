# logInit

`_ZN4CLog7logInitEbbPKcz`

`CLog::logInit(bool, bool, char const*, ...)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854f520` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f520  _ZN4CLog7logInitEbbPKcz
#           CLog::logInit(bool, bool, char const*, ...)
# range [0x0854f520, 0x0854f593]
0854f520 +0x00:  push   %ebp
0854f521 +0x01:  mov    %esp,%ebp
0854f523 +0x03:  push   %esi
0854f524 +0x04:  push   %ebx
0854f525 +0x05:  sub    $0x40,%esp
0854f528 +0x08:  mov    0xc(%ebp),%edx
0854f52b +0x0b:  mov    0x10(%ebp),%eax
0854f52e +0x0e:  mov    %dl,-0x1c(%ebp)
0854f531 +0x11:  mov    %al,-0x20(%ebp)
0854f534 +0x14:  lea    0x18(%ebp),%eax
0854f537 +0x17:  mov    %eax,-0x10(%ebp)
0854f53a +0x1a:  movzbl -0x20(%ebp),%ecx
0854f53e +0x1e:  movzbl -0x1c(%ebp),%edx
0854f542 +0x22:  mov    -0x10(%ebp),%eax
0854f545 +0x25:  mov    0x8(%ebp),%ebx
0854f548 +0x28:  lea    0x240(%ebx),%esi
0854f54e +0x2e:  mov    0x8(%ebp),%ebx
0854f551 +0x31:  add    $0x108,%ebx
0854f557 +0x37:  mov    %ecx,0x1c(%esp)
0854f55b +0x3b:  mov    %edx,0x18(%esp)
0854f55f +0x3f:  mov    %eax,0x14(%esp)
0854f563 +0x43:  mov    0x14(%ebp),%eax
0854f566 +0x46:  mov    %eax,0x10(%esp)
0854f56a +0x4a:  movl   $".init",0xc(%esp)
0854f572 +0x52:  mov    %esi,0x8(%esp)
0854f576 +0x56:  mov    %ebx,0x4(%esp)
0854f57a +0x5a:  mov    0x8(%ebp),%eax
0854f57d +0x5d:  mov    %eax,(%esp)
0854f580 +0x60:  call   0854ef56 <_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb>  ; CLog::logToInitFile(_IO_FILE*&, TimeLog_&, char*, char const*, char*, bool, bool)
0854f585 +0x65:  mov    %al,-0x9(%ebp)
0854f588 +0x68:  movzbl -0x9(%ebp),%eax
0854f58c +0x6c:  add    $0x40,%esp
0854f58f +0x6f:  pop    %ebx
0854f590 +0x70:  pop    %esi
0854f591 +0x71:  pop    %ebp
0854f592 +0x72:  ret
0854f593 +0x73:  nop
```

## 反编译 C

```c
// CLog::logInit @ 0x854f520

/* CLog::logInit(bool, bool, char const*, ...) */

undefined1 __thiscall CLog::logInit(CLog *this,bool param_1,bool param_2,char *param_3,...)

{
  undefined1 uVar1;
  
  uVar1 = logToInitFile(this,(_IO_FILE **)(this + 0x108),this + 0x240,".init",param_3,
                        &stack0x00000014,param_1,param_2);
  return uVar1;
}
```
