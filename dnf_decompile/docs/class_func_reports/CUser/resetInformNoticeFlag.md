# resetInformNoticeFlag

`_ZN5CUser21resetInformNoticeFlagEv`

`CUser::resetInformNoticeFlag()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f8d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f8d8  _ZN5CUser21resetInformNoticeFlagEv
#           CUser::resetInformNoticeFlag()
# range [0x0868f8d8, 0x0868f8ff]
0868f8d8 +0x00:  push   %ebp
0868f8d9 +0x01:  mov    %esp,%ebp
0868f8db +0x03:  sub    $0x18,%esp
0868f8de +0x06:  mov    0x8(%ebp),%eax
0868f8e1 +0x09:  add    $0x8ebb1,%eax
0868f8e6 +0x0e:  movl   $0x1,0x8(%esp)
0868f8ee +0x16:  movl   $0x0,0x4(%esp)
0868f8f6 +0x1e:  mov    %eax,(%esp)
0868f8f9 +0x21:  call   0807dcc0 <_init+0x5b8>
0868f8fe +0x26:  leave
0868f8ff +0x27:  ret
```

## 反编译 C

```c
// CUser::resetInformNoticeFlag @ 0x868f8d8

/* CUser::resetInformNoticeFlag() */

void __thiscall CUser::resetInformNoticeFlag(CUser *this)

{
  memset(this + 0x8ebb1,0,1);
  return;
}
```
