# getTime

`_ZN4CLog7getTimeEP8TimeLog_`

`CLog::getTime(TimeLog_*)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854f692` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f692  _ZN4CLog7getTimeEP8TimeLog_
#           CLog::getTime(TimeLog_*)
# range [0x0854f692, 0x0854f717]
0854f692 +0x00:  push   %ebp
0854f693 +0x01:  mov    %esp,%ebp
0854f695 +0x03:  sub    $0x58,%esp
0854f698 +0x06:  movl   $0x0,(%esp)
0854f69f +0x0d:  call   0807d750 <_init+0x48>
0854f6a4 +0x12:  mov    %eax,-0x10(%ebp)
0854f6a7 +0x15:  lea    -0x3c(%ebp),%eax
0854f6aa +0x18:  mov    %eax,0x4(%esp)
0854f6ae +0x1c:  lea    -0x10(%ebp),%eax
0854f6b1 +0x1f:  mov    %eax,(%esp)
0854f6b4 +0x22:  call   0807e360 <_init+0xc58>
0854f6b9 +0x27:  mov    %eax,-0xc(%ebp)
0854f6bc +0x2a:  mov    -0xc(%ebp),%eax
0854f6bf +0x2d:  mov    0x14(%eax),%eax
0854f6c2 +0x30:  add    $0x76c,%ax
0854f6c6 +0x34:  mov    %eax,%edx
0854f6c8 +0x36:  mov    0xc(%ebp),%eax
0854f6cb +0x39:  mov    %dx,(%eax)
0854f6ce +0x3c:  mov    -0xc(%ebp),%eax
0854f6d1 +0x3f:  mov    0x10(%eax),%eax
0854f6d4 +0x42:  add    $0x1,%eax
0854f6d7 +0x45:  mov    %eax,%edx
0854f6d9 +0x47:  mov    0xc(%ebp),%eax
0854f6dc +0x4a:  mov    %dl,0x2(%eax)
0854f6df +0x4d:  mov    -0xc(%ebp),%eax
0854f6e2 +0x50:  mov    0xc(%eax),%eax
0854f6e5 +0x53:  mov    %eax,%edx
0854f6e7 +0x55:  mov    0xc(%ebp),%eax
0854f6ea +0x58:  mov    %dl,0x3(%eax)
0854f6ed +0x5b:  mov    -0xc(%ebp),%eax
0854f6f0 +0x5e:  mov    0x8(%eax),%eax
0854f6f3 +0x61:  mov    %eax,%edx
0854f6f5 +0x63:  mov    0xc(%ebp),%eax
0854f6f8 +0x66:  mov    %dl,0x4(%eax)
0854f6fb +0x69:  mov    -0xc(%ebp),%eax
0854f6fe +0x6c:  mov    0x4(%eax),%eax
0854f701 +0x6f:  mov    %eax,%edx
0854f703 +0x71:  mov    0xc(%ebp),%eax
0854f706 +0x74:  mov    %dl,0x5(%eax)
0854f709 +0x77:  mov    -0xc(%ebp),%eax
0854f70c +0x7a:  mov    (%eax),%eax
0854f70e +0x7c:  mov    %eax,%edx
0854f710 +0x7e:  mov    0xc(%ebp),%eax
0854f713 +0x81:  mov    %dl,0x6(%eax)
0854f716 +0x84:  leave
0854f717 +0x85:  ret
```

## 反编译 C

```c
// CLog::getTime @ 0x854f692

/* CLog::getTime(TimeLog_*) */

void __thiscall CLog::getTime(CLog *this,TimeLog_ *param_1)

{
  tm *ptVar1;
  tm local_40;
  time_t local_14 [4];
  
  local_14[0] = time((time_t *)0x0);
  ptVar1 = localtime_r(local_14,&local_40);
  *(short *)param_1 = (short)ptVar1->tm_year + 0x76c;
  param_1[2] = (char)ptVar1->tm_mon + '\x01';
  param_1[3] = (char)ptVar1->tm_mday;
  param_1[4] = (char)ptVar1->tm_hour;
  param_1[5] = (char)ptVar1->tm_min;
  param_1[6] = (char)ptVar1->tm_sec;
  return;
}
```
