# Set_Time_String

`_ZN10CExceptLog15Set_Time_StringEPc`

`CExceptLog::Set_Time_String(char*)`

| 类 | 地址 |
|---|---|
| `CExceptLog` | `0x0846d6c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d6c2  _ZN10CExceptLog15Set_Time_StringEPc
#           CExceptLog::Set_Time_String(char*)
# range [0x0846d6c2, 0x0846d735]
0846d6c2 +0x00:  push   %ebp
0846d6c3 +0x01:  mov    %esp,%ebp
0846d6c5 +0x03:  push   %edi
0846d6c6 +0x04:  push   %esi
0846d6c7 +0x05:  push   %ebx
0846d6c8 +0x06:  sub    $0x5c,%esp
0846d6cb +0x09:  lea    -0x1c(%ebp),%eax
0846d6ce +0x0c:  mov    %eax,(%esp)
0846d6d1 +0x0f:  call   0807d750 <_init+0x48>
0846d6d6 +0x14:  lea    -0x48(%ebp),%eax
0846d6d9 +0x17:  mov    %eax,0x4(%esp)
0846d6dd +0x1b:  lea    -0x1c(%ebp),%eax
0846d6e0 +0x1e:  mov    %eax,(%esp)
0846d6e3 +0x21:  call   0807e360 <_init+0xc58>
0846d6e8 +0x26:  mov    -0x48(%ebp),%ebx
0846d6eb +0x29:  mov    -0x44(%ebp),%ecx
0846d6ee +0x2c:  mov    -0x40(%ebp),%edx
0846d6f1 +0x2f:  mov    -0x3c(%ebp),%eax
0846d6f4 +0x32:  mov    -0x38(%ebp),%esi
0846d6f7 +0x35:  lea    0x1(%esi),%edi
0846d6fa +0x38:  mov    -0x34(%ebp),%esi
0846d6fd +0x3b:  add    $0x76c,%esi
0846d703 +0x41:  mov    %ebx,0x1c(%esp)
0846d707 +0x45:  mov    %ecx,0x18(%esp)
0846d70b +0x49:  mov    %edx,0x14(%esp)
0846d70f +0x4d:  mov    %eax,0x10(%esp)
0846d713 +0x51:  mov    %edi,0xc(%esp)
0846d717 +0x55:  mov    %esi,0x8(%esp)
0846d71b +0x59:  movl   $"%4d.%02d.%02d %02d:%02d:%02d",0x4(%esp)
0846d723 +0x61:  mov    0xc(%ebp),%eax
0846d726 +0x64:  mov    %eax,(%esp)
0846d729 +0x67:  call   0807e440 <_init+0xd38>
0846d72e +0x6c:  add    $0x5c,%esp
0846d731 +0x6f:  pop    %ebx
0846d732 +0x70:  pop    %esi
0846d733 +0x71:  pop    %edi
0846d734 +0x72:  pop    %ebp
0846d735 +0x73:  ret
```

## 反编译 C

```c
// CExceptLog::Set_Time_String @ 0x846d6c2

/* CExceptLog::Set_Time_String(char*) */

void __thiscall CExceptLog::Set_Time_String(CExceptLog *this,char *param_1)

{
  tm local_4c;
  time_t local_20 [4];
  
  time(local_20);
  localtime_r(local_20,&local_4c);
  sprintf(param_1,"%4d.%02d.%02d %02d:%02d:%02d",local_4c.tm_year + 0x76c,local_4c.tm_mon + 1,
          local_4c.tm_mday,local_4c.tm_hour,local_4c.tm_min,local_4c.tm_sec);
  return;
}
```
