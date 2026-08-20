# IsAddableGuildFund

`_ZN5CUser18IsAddableGuildFundEi`

`CUser::IsAddableGuildFund(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866c21e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866c21e  _ZN5CUser18IsAddableGuildFundEi
#           CUser::IsAddableGuildFund(int)
# range [0x0866c21e, 0x0866c27d]
0866c21e +0x00:  push   %ebp
0866c21f +0x01:  mov    %esp,%ebp
0866c221 +0x03:  sub    $0x10,%esp
0866c224 +0x06:  mov    0x8(%ebp),%eax
0866c227 +0x09:  add    $0x8d0c0,%eax
0866c22c +0x0e:  mov    %eax,-0x8(%ebp)
0866c22f +0x11:  mov    0x8(%ebp),%eax
0866c232 +0x14:  add    $0x8d03b,%eax
0866c237 +0x19:  mov    %eax,-0x4(%ebp)
0866c23a +0x1c:  mov    -0x4(%ebp),%eax
0866c23d +0x1f:  movzbl (%eax),%eax
0866c240 +0x22:  cmp    $0xf,%al
0866c242 +0x24:  jbe    0866c25d <+0x3f>
0866c244 +0x26:  mov    -0x8(%ebp),%eax
0866c247 +0x29:  mov    (%eax),%edx
0866c249 +0x2b:  mov    0xc(%ebp),%eax
0866c24c +0x2e:  lea    (%edx,%eax,1),%eax
0866c24f +0x31:  cmp    $0x989680,%eax
0866c254 +0x36:  jbe    0866c276 <+0x58>
0866c256 +0x38:  mov    $0x0,%eax
0866c25b +0x3d:  jmp    0866c27b <+0x5d>
0866c25d +0x3f:  mov    -0x8(%ebp),%eax
0866c260 +0x42:  mov    (%eax),%edx
0866c262 +0x44:  mov    0xc(%ebp),%eax
0866c265 +0x47:  lea    (%edx,%eax,1),%eax
0866c268 +0x4a:  cmp    $0x1312d00,%eax
0866c26d +0x4f:  jbe    0866c276 <+0x58>
0866c26f +0x51:  mov    $0x0,%eax
0866c274 +0x56:  jmp    0866c27b <+0x5d>
0866c276 +0x58:  mov    $0x1,%eax
0866c27b +0x5d:  leave
0866c27c +0x5e:  ret
0866c27d +0x5f:  nop
```

## 反编译 C

```c
// CUser::IsAddableGuildFund @ 0x866c21e

/* CUser::IsAddableGuildFund(int) */

undefined4 __thiscall CUser::IsAddableGuildFund(CUser *this,int param_1)

{
  if ((byte)this[0x8d03b] < 0x10) {
    if (20000000 < (uint)(*(int *)(this + 0x8d0c0) + param_1)) {
      return 0;
    }
  }
  else if (10000000 < (uint)(*(int *)(this + 0x8d0c0) + param_1)) {
    return 0;
  }
  return 1;
}
```
