# uint32Time

`_ZN19CerashopAddRestrict10uint32TimeEPs`

`CerashopAddRestrict::uint32Time(short*)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict` | `0x08abf33f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08abf33f  _ZN19CerashopAddRestrict10uint32TimeEPs
#           CerashopAddRestrict::uint32Time(short*)
# range [0x08abf33f, 0x08abf3cb]
08abf33f +0x00:  push   %ebp
08abf340 +0x01:  mov    %esp,%ebp
08abf342 +0x03:  sub    $0x28,%esp
08abf345 +0x06:  movl   $0x0,(%esp)
08abf34c +0x0d:  call   0807d750 <_init+0x48>
08abf351 +0x12:  mov    %eax,-0x10(%ebp)
08abf354 +0x15:  lea    -0x10(%ebp),%eax
08abf357 +0x18:  mov    %eax,(%esp)
08abf35a +0x1b:  call   0807e330 <_init+0xc28>
08abf35f +0x20:  mov    %eax,-0xc(%ebp)
08abf362 +0x23:  mov    0x8(%ebp),%eax
08abf365 +0x26:  movzwl (%eax),%eax
08abf368 +0x29:  cwtl
08abf369 +0x2a:  lea    -0x76c(%eax),%edx
08abf36f +0x30:  mov    -0xc(%ebp),%eax
08abf372 +0x33:  mov    %edx,0x14(%eax)
08abf375 +0x36:  mov    0x8(%ebp),%eax
08abf378 +0x39:  add    $0x2,%eax
08abf37b +0x3c:  movzwl (%eax),%eax
08abf37e +0x3f:  cwtl
08abf37f +0x40:  lea    -0x1(%eax),%edx
08abf382 +0x43:  mov    -0xc(%ebp),%eax
08abf385 +0x46:  mov    %edx,0x10(%eax)
08abf388 +0x49:  mov    0x8(%ebp),%eax
08abf38b +0x4c:  add    $0x4,%eax
08abf38e +0x4f:  movzwl (%eax),%eax
08abf391 +0x52:  movswl %ax,%edx
08abf394 +0x55:  mov    -0xc(%ebp),%eax
08abf397 +0x58:  mov    %edx,0xc(%eax)
08abf39a +0x5b:  mov    0x8(%ebp),%eax
08abf39d +0x5e:  add    $0x6,%eax
08abf3a0 +0x61:  movzwl (%eax),%eax
08abf3a3 +0x64:  movswl %ax,%edx
08abf3a6 +0x67:  mov    -0xc(%ebp),%eax
08abf3a9 +0x6a:  mov    %edx,0x8(%eax)
08abf3ac +0x6d:  mov    -0xc(%ebp),%eax
08abf3af +0x70:  movl   $0x0,0x4(%eax)
08abf3b6 +0x77:  mov    -0xc(%ebp),%eax
08abf3b9 +0x7a:  movl   $0x0,(%eax)
08abf3bf +0x80:  mov    -0xc(%ebp),%eax
08abf3c2 +0x83:  mov    %eax,(%esp)
08abf3c5 +0x86:  call   0807e820 <_init+0x1118>
08abf3ca +0x8b:  leave
08abf3cb +0x8c:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::uint32Time @ 0x8abf33f

/* CerashopAddRestrict::uint32Time(short*) */

void CerashopAddRestrict::uint32Time(short *param_1)

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
