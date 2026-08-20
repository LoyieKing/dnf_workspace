# uint32Time

`_ZN4ARAD6SCRIPT10uint32TimeEPs`

`ARAD::SCRIPT::uint32Time(short*)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT` | `0x088b3b4b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b3b4b  _ZN4ARAD6SCRIPT10uint32TimeEPs
#           ARAD::SCRIPT::uint32Time(short*)
# range [0x088b3b4b, 0x088b3bd7]
088b3b4b +0x00:  push   %ebp
088b3b4c +0x01:  mov    %esp,%ebp
088b3b4e +0x03:  sub    $0x28,%esp
088b3b51 +0x06:  movl   $0x0,(%esp)
088b3b58 +0x0d:  call   0807d750 <_init+0x48>
088b3b5d +0x12:  mov    %eax,-0x10(%ebp)
088b3b60 +0x15:  lea    -0x10(%ebp),%eax
088b3b63 +0x18:  mov    %eax,(%esp)
088b3b66 +0x1b:  call   0807e330 <_init+0xc28>
088b3b6b +0x20:  mov    %eax,-0xc(%ebp)
088b3b6e +0x23:  mov    0x8(%ebp),%eax
088b3b71 +0x26:  movzwl (%eax),%eax
088b3b74 +0x29:  cwtl
088b3b75 +0x2a:  lea    -0x76c(%eax),%edx
088b3b7b +0x30:  mov    -0xc(%ebp),%eax
088b3b7e +0x33:  mov    %edx,0x14(%eax)
088b3b81 +0x36:  mov    0x8(%ebp),%eax
088b3b84 +0x39:  add    $0x2,%eax
088b3b87 +0x3c:  movzwl (%eax),%eax
088b3b8a +0x3f:  cwtl
088b3b8b +0x40:  lea    -0x1(%eax),%edx
088b3b8e +0x43:  mov    -0xc(%ebp),%eax
088b3b91 +0x46:  mov    %edx,0x10(%eax)
088b3b94 +0x49:  mov    0x8(%ebp),%eax
088b3b97 +0x4c:  add    $0x4,%eax
088b3b9a +0x4f:  movzwl (%eax),%eax
088b3b9d +0x52:  movswl %ax,%edx
088b3ba0 +0x55:  mov    -0xc(%ebp),%eax
088b3ba3 +0x58:  mov    %edx,0xc(%eax)
088b3ba6 +0x5b:  mov    0x8(%ebp),%eax
088b3ba9 +0x5e:  add    $0x6,%eax
088b3bac +0x61:  movzwl (%eax),%eax
088b3baf +0x64:  movswl %ax,%edx
088b3bb2 +0x67:  mov    -0xc(%ebp),%eax
088b3bb5 +0x6a:  mov    %edx,0x8(%eax)
088b3bb8 +0x6d:  mov    -0xc(%ebp),%eax
088b3bbb +0x70:  movl   $0x0,0x4(%eax)
088b3bc2 +0x77:  mov    -0xc(%ebp),%eax
088b3bc5 +0x7a:  movl   $0x0,(%eax)
088b3bcb +0x80:  mov    -0xc(%ebp),%eax
088b3bce +0x83:  mov    %eax,(%esp)
088b3bd1 +0x86:  call   0807e820 <_init+0x1118>
088b3bd6 +0x8b:  leave
088b3bd7 +0x8c:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::uint32Time @ 0x88b3b4b

/* ARAD::SCRIPT::uint32Time(short*) */

void ARAD::SCRIPT::uint32Time(short *param_1)

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
