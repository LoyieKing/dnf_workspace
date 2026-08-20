# SetPuUser

`_ZN5CUser9SetPuUserEb`

`CUser::SetPuUser(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692b58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692b58  _ZN5CUser9SetPuUserEb
#           CUser::SetPuUser(bool)
# range [0x08692b58, 0x08692b73]
08692b58 +0x00:  push   %ebp
08692b59 +0x01:  mov    %esp,%ebp
08692b5b +0x03:  sub    $0x4,%esp
08692b5e +0x06:  mov    0xc(%ebp),%eax
08692b61 +0x09:  mov    %al,-0x4(%ebp)
08692b64 +0x0c:  mov    0x8(%ebp),%eax
08692b67 +0x0f:  movzbl -0x4(%ebp),%edx
08692b6b +0x13:  mov    %dl,0x796d8(%eax)
08692b71 +0x19:  leave
08692b72 +0x1a:  ret
08692b73 +0x1b:  nop
```

## 反编译 C

```c
// CUser::SetPuUser @ 0x8692b58

/* CUser::SetPuUser(bool) */

void __thiscall CUser::SetPuUser(CUser *this,bool param_1)

{
  this[0x796d8] = (CUser)param_1;
  return;
}
```
