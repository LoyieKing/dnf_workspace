# checkDay

`_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci`

`CLog::checkDay(TimeLog_, TimeLog_*, _IO_FILE*&, char*, int)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854f594` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f594  _ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci
#           CLog::checkDay(TimeLog_, TimeLog_*, _IO_FILE*&, char*, int)
# range [0x0854f594, 0x0854f691]
0854f594 +0x00:  push   %ebp
0854f595 +0x01:  mov    %esp,%ebp
0854f597 +0x03:  sub    $0x28,%esp
0854f59a +0x06:  cmpl   $0x0,0x20(%ebp)
0854f59e +0x0a:  je     0854f626 <+0x92>
0854f5a4 +0x10:  mov    0x14(%ebp),%eax
0854f5a7 +0x13:  movzbl 0x3(%eax),%edx
0854f5ab +0x17:  movzbl 0xf(%ebp),%eax
0854f5af +0x1b:  cmp    %al,%dl
0854f5b1 +0x1d:  jne    0854f5cf <+0x3b>
0854f5b3 +0x1f:  movzbl 0x10(%ebp),%eax
0854f5b7 +0x23:  movsbl %al,%edx
0854f5ba +0x26:  mov    0x14(%ebp),%eax
0854f5bd +0x29:  movzbl 0x4(%eax),%eax
0854f5c1 +0x2d:  movsbl %al,%eax
0854f5c4 +0x30:  add    0x20(%ebp),%eax
0854f5c7 +0x33:  cmp    %eax,%edx
0854f5c9 +0x35:  jl     0854f68a <+0xf6>
0854f5cf +0x3b:  movl   $0x8,0x8(%esp)
0854f5d7 +0x43:  lea    0xc(%ebp),%eax
0854f5da +0x46:  mov    %eax,0x4(%esp)
0854f5de +0x4a:  mov    0x14(%ebp),%eax
0854f5e1 +0x4d:  mov    %eax,(%esp)
0854f5e4 +0x50:  call   0807d8a0 <_init+0x198>
0854f5e9 +0x55:  mov    0x18(%ebp),%eax
0854f5ec +0x58:  mov    (%eax),%eax
0854f5ee +0x5a:  mov    %eax,(%esp)
0854f5f1 +0x5d:  call   0807dea0 <_init+0x798>
0854f5f6 +0x62:  mov    0x20(%ebp),%eax
0854f5f9 +0x65:  mov    %eax,0x14(%esp)
0854f5fd +0x69:  mov    0x1c(%ebp),%eax
0854f600 +0x6c:  mov    %eax,0x10(%esp)
0854f604 +0x70:  mov    0x18(%ebp),%eax
0854f607 +0x73:  mov    %eax,0xc(%esp)
0854f60b +0x77:  mov    0xc(%ebp),%eax
0854f60e +0x7a:  mov    0x10(%ebp),%edx
0854f611 +0x7d:  mov    %eax,0x4(%esp)
0854f615 +0x81:  mov    %edx,0x8(%esp)
0854f619 +0x85:  mov    0x8(%ebp),%eax
0854f61c +0x88:  mov    %eax,(%esp)
0854f61f +0x8b:  call   0854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>  ; CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)
0854f624 +0x90:  jmp    0854f68a <+0xf6>
0854f626 +0x92:  mov    0x14(%ebp),%eax
0854f629 +0x95:  movzbl 0x3(%eax),%edx
0854f62d +0x99:  movzbl 0xf(%ebp),%eax
0854f631 +0x9d:  cmp    %al,%dl
0854f633 +0x9f:  je     0854f68a <+0xf6>
0854f635 +0xa1:  movl   $0x8,0x8(%esp)
0854f63d +0xa9:  lea    0xc(%ebp),%eax
0854f640 +0xac:  mov    %eax,0x4(%esp)
0854f644 +0xb0:  mov    0x14(%ebp),%eax
0854f647 +0xb3:  mov    %eax,(%esp)
0854f64a +0xb6:  call   0807d8a0 <_init+0x198>
0854f64f +0xbb:  mov    0x18(%ebp),%eax
0854f652 +0xbe:  mov    (%eax),%eax
0854f654 +0xc0:  mov    %eax,(%esp)
0854f657 +0xc3:  call   0807dea0 <_init+0x798>
0854f65c +0xc8:  mov    0x20(%ebp),%eax
0854f65f +0xcb:  mov    %eax,0x14(%esp)
0854f663 +0xcf:  mov    0x1c(%ebp),%eax
0854f666 +0xd2:  mov    %eax,0x10(%esp)
0854f66a +0xd6:  mov    0x18(%ebp),%eax
0854f66d +0xd9:  mov    %eax,0xc(%esp)
0854f671 +0xdd:  mov    0xc(%ebp),%eax
0854f674 +0xe0:  mov    0x10(%ebp),%edx
0854f677 +0xe3:  mov    %eax,0x4(%esp)
0854f67b +0xe7:  mov    %edx,0x8(%esp)
0854f67f +0xeb:  mov    0x8(%ebp),%eax
0854f682 +0xee:  mov    %eax,(%esp)
0854f685 +0xf1:  call   0854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>  ; CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)
0854f68a +0xf6:  mov    $0x1,%eax
0854f68f +0xfb:  leave
0854f690 +0xfc:  ret
0854f691 +0xfd:  nop
```

## 反编译 C

```c
// CLog::checkDay @ 0x854f594

/* CLog::checkDay(TimeLog_, TimeLog_*, _IO_FILE*&, char*, int) */

undefined4
CLog::checkDay(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4,
              undefined4 *param_5,undefined4 param_6,int param_7)

{
  if (param_7 == 0) {
    if (*(char *)((int)param_4 + 3) != param_2._3_1_) {
      memcpy(param_4,&param_2,8);
      fclose((FILE *)*param_5);
      openLogFile(param_1,param_2,param_3,param_5,param_6,param_7);
    }
  }
  else if ((*(char *)((int)param_4 + 3) != param_2._3_1_) ||
          (*(char *)((int)param_4 + 4) + param_7 <= (int)(char)param_3)) {
    memcpy(param_4,&param_2,8);
    fclose((FILE *)*param_5);
    openLogFile(param_1,param_2,param_3,param_5,param_6,param_7);
  }
  return 1;
}
```
