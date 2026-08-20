# GetPuUser

`_ZN5CUser9GetPuUserEv`

`CUser::GetPuUser()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692b74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692b74  _ZN5CUser9GetPuUserEv
#           CUser::GetPuUser()
# range [0x08692b74, 0x08692b83]
08692b74 +0x00:  push   %ebp
08692b75 +0x01:  mov    %esp,%ebp
08692b77 +0x03:  mov    0x8(%ebp),%eax
08692b7a +0x06:  movzbl 0x796d8(%eax),%eax
08692b81 +0x0d:  pop    %ebp
08692b82 +0x0e:  ret
08692b83 +0x0f:  nop
```

## 反编译 C

```c
// CUser::GetPuUser @ 0x8692b74

/* CUser::GetPuUser() */

CUser __thiscall CUser::GetPuUser(CUser *this)

{
  return this[0x796d8];
}
```
