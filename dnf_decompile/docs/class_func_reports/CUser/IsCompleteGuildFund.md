# IsCompleteGuildFund

`_ZN5CUser19IsCompleteGuildFundEv`

`CUser::IsCompleteGuildFund()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866c1ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866c1ca  _ZN5CUser19IsCompleteGuildFundEv
#           CUser::IsCompleteGuildFund()
# range [0x0866c1ca, 0x0866c21d]
0866c1ca +0x00:  push   %ebp
0866c1cb +0x01:  mov    %esp,%ebp
0866c1cd +0x03:  sub    $0x10,%esp
0866c1d0 +0x06:  mov    0x8(%ebp),%eax
0866c1d3 +0x09:  add    $0x8d0c0,%eax
0866c1d8 +0x0e:  mov    %eax,-0x8(%ebp)
0866c1db +0x11:  mov    0x8(%ebp),%eax
0866c1de +0x14:  add    $0x8d03b,%eax
0866c1e3 +0x19:  mov    %eax,-0x4(%ebp)
0866c1e6 +0x1c:  mov    -0x4(%ebp),%eax
0866c1e9 +0x1f:  movzbl (%eax),%eax
0866c1ec +0x22:  cmp    $0xf,%al
0866c1ee +0x24:  jbe    0866c203 <+0x39>
0866c1f0 +0x26:  mov    -0x8(%ebp),%eax
0866c1f3 +0x29:  mov    (%eax),%eax
0866c1f5 +0x2b:  cmp    $0x98967f,%eax
0866c1fa +0x30:  jbe    0866c203 <+0x39>
0866c1fc +0x32:  mov    $0x1,%eax
0866c201 +0x37:  jmp    0866c21b <+0x51>
0866c203 +0x39:  mov    -0x8(%ebp),%eax
0866c206 +0x3c:  mov    (%eax),%eax
0866c208 +0x3e:  cmp    $0x1312cff,%eax
0866c20d +0x43:  jbe    0866c216 <+0x4c>
0866c20f +0x45:  mov    $0x1,%eax
0866c214 +0x4a:  jmp    0866c21b <+0x51>
0866c216 +0x4c:  mov    $0x0,%eax
0866c21b +0x51:  leave
0866c21c +0x52:  ret
0866c21d +0x53:  nop
```

## 反编译 C

```c
// CUser::IsCompleteGuildFund @ 0x866c1ca

/* CUser::IsCompleteGuildFund() */

undefined4 __thiscall CUser::IsCompleteGuildFund(CUser *this)

{
  undefined4 uVar1;
  
  if (((byte)this[0x8d03b] < 0x10) || (*(uint *)(this + 0x8d0c0) < 10000000)) {
    if (*(uint *)(this + 0x8d0c0) < 20000000) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
