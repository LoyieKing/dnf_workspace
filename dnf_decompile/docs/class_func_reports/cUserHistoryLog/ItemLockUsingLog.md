# ItemLockUsingLog

`_ZN15cUserHistoryLog16ItemLockUsingLogEhiiii`

`cUserHistoryLog::ItemLockUsingLog(unsigned char, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08689808` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689808  _ZN15cUserHistoryLog16ItemLockUsingLogEhiiii
#           cUserHistoryLog::ItemLockUsingLog(unsigned char, int, int, int, int)
# range [0x08689808, 0x0868984f]
08689808 +0x00:  push   %ebp
08689809 +0x01:  mov    %esp,%ebp
0868980b +0x03:  sub    $0x38,%esp
0868980e +0x06:  mov    0xc(%ebp),%eax
08689811 +0x09:  mov    %al,-0xc(%ebp)
08689814 +0x0c:  movzbl -0xc(%ebp),%edx
08689818 +0x10:  mov    0x8(%ebp),%eax
0868981b +0x13:  mov    (%eax),%eax
0868981d +0x15:  mov    0x1c(%ebp),%ecx
08689820 +0x18:  mov    %ecx,0x18(%esp)
08689824 +0x1c:  mov    0x18(%ebp),%ecx
08689827 +0x1f:  mov    %ecx,0x14(%esp)
0868982b +0x23:  mov    0x14(%ebp),%ecx
0868982e +0x26:  mov    %ecx,0x10(%esp)
08689832 +0x2a:  mov    0x10(%ebp),%ecx
08689835 +0x2d:  mov    %ecx,0xc(%esp)
08689839 +0x31:  mov    %edx,0x8(%esp)
0868983d +0x35:  movl   $"ItemLock,%d,%d,%d,%d,%d",0x4(%esp)
08689845 +0x3d:  mov    %eax,(%esp)
08689848 +0x40:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868984d +0x45:  leave
0868984e +0x46:  ret
0868984f +0x47:  nop
```

## 反编译 C

```c
// cUserHistoryLog::ItemLockUsingLog @ 0x8689808

/* cUserHistoryLog::ItemLockUsingLog(unsigned char, int, int, int, int) */

void __thiscall
cUserHistoryLog::ItemLockUsingLog
          (cUserHistoryLog *this,uchar param_1,int param_2,int param_3,int param_4,int param_5)

{
  CUser::LogHistory(*(CUser **)this,"ItemLock,%d,%d,%d,%d,%d",(uint)param_1,param_2,param_3,param_4,
                    param_5);
  return;
}
```
