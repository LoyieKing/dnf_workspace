# uint32Time

`_ZN4ARAD10uint32TimeEPs`

`ARAD::uint32Time(short*)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x081979c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081979c0  _ZN4ARAD10uint32TimeEPs
#           ARAD::uint32Time(short*)
# range [0x081979c0, 0x08197a4c]
081979c0 +0x00:  push   %ebp
081979c1 +0x01:  mov    %esp,%ebp
081979c3 +0x03:  sub    $0x28,%esp
081979c6 +0x06:  movl   $0x0,(%esp)
081979cd +0x0d:  call   0807d750 <_init+0x48>
081979d2 +0x12:  mov    %eax,-0x10(%ebp)
081979d5 +0x15:  lea    -0x10(%ebp),%eax
081979d8 +0x18:  mov    %eax,(%esp)
081979db +0x1b:  call   0807e330 <_init+0xc28>
081979e0 +0x20:  mov    %eax,-0xc(%ebp)
081979e3 +0x23:  mov    0x8(%ebp),%eax
081979e6 +0x26:  movzwl (%eax),%eax
081979e9 +0x29:  cwtl
081979ea +0x2a:  lea    -0x76c(%eax),%edx
081979f0 +0x30:  mov    -0xc(%ebp),%eax
081979f3 +0x33:  mov    %edx,0x14(%eax)
081979f6 +0x36:  mov    0x8(%ebp),%eax
081979f9 +0x39:  add    $0x2,%eax
081979fc +0x3c:  movzwl (%eax),%eax
081979ff +0x3f:  cwtl
08197a00 +0x40:  lea    -0x1(%eax),%edx
08197a03 +0x43:  mov    -0xc(%ebp),%eax
08197a06 +0x46:  mov    %edx,0x10(%eax)
08197a09 +0x49:  mov    0x8(%ebp),%eax
08197a0c +0x4c:  add    $0x4,%eax
08197a0f +0x4f:  movzwl (%eax),%eax
08197a12 +0x52:  movswl %ax,%edx
08197a15 +0x55:  mov    -0xc(%ebp),%eax
08197a18 +0x58:  mov    %edx,0xc(%eax)
08197a1b +0x5b:  mov    0x8(%ebp),%eax
08197a1e +0x5e:  add    $0x6,%eax
08197a21 +0x61:  movzwl (%eax),%eax
08197a24 +0x64:  movswl %ax,%edx
08197a27 +0x67:  mov    -0xc(%ebp),%eax
08197a2a +0x6a:  mov    %edx,0x8(%eax)
08197a2d +0x6d:  mov    -0xc(%ebp),%eax
08197a30 +0x70:  movl   $0x0,0x4(%eax)
08197a37 +0x77:  mov    -0xc(%ebp),%eax
08197a3a +0x7a:  movl   $0x0,(%eax)
08197a40 +0x80:  mov    -0xc(%ebp),%eax
08197a43 +0x83:  mov    %eax,(%esp)
08197a46 +0x86:  call   0807e820 <_init+0x1118>
08197a4b +0x8b:  leave
08197a4c +0x8c:  ret
```

## 反编译 C

```c
// ARAD::uint32Time @ 0x81979c0

/* ARAD::uint32Time(short*) */

void ARAD::uint32Time(short *param_1)

{
  time_t local_14;
  tm *local_10;
  
  local_14 = time((time_t *)0x0);
  local_10 = localtime(&local_14);
  local_10->tm_year = *param_1 + -0x76c;
  local_10->tm_mon = param_1[1] + -1;
  local_10->tm_mday = (int)param_1[2];
  local_10->tm_hour = (int)param_1[3];
  local_10->tm_min = 0;
  local_10->tm_sec = 0;
  mktime(local_10);
  return;
}
```
