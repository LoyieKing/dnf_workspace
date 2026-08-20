# isSetGuildCreateFlag

`_ZN15CUserCharacInfo20isSetGuildCreateFlagEt`

`CUserCharacInfo::isSetGuildCreateFlag(unsigned short)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0866c0da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866c0da  _ZN15CUserCharacInfo20isSetGuildCreateFlagEt
#           CUserCharacInfo::isSetGuildCreateFlag(unsigned short)
# range [0x0866c0da, 0x0866c11d]
0866c0da +0x00:  push   %ebp
0866c0db +0x01:  mov    %esp,%ebp
0866c0dd +0x03:  sub    $0x4,%esp
0866c0e0 +0x06:  mov    0xc(%ebp),%eax
0866c0e3 +0x09:  mov    %ax,-0x4(%ebp)
0866c0e7 +0x0d:  mov    0x8(%ebp),%eax
0866c0ea +0x10:  mov    0x10(%eax),%eax
0866c0ed +0x13:  test   %eax,%eax
0866c0ef +0x15:  je     0866c116 <+0x3c>
0866c0f1 +0x17:  mov    0x8(%ebp),%eax
0866c0f4 +0x1a:  mov    0x10(%eax),%eax
0866c0f7 +0x1d:  movzwl 0xdc3(%eax),%eax
0866c0fe +0x24:  and    -0x4(%ebp),%ax
0866c102 +0x28:  cmp    -0x4(%ebp),%ax
0866c106 +0x2c:  jne    0866c10f <+0x35>
0866c108 +0x2e:  mov    $0x1,%eax
0866c10d +0x33:  jmp    0866c11b <+0x41>
0866c10f +0x35:  mov    $0x0,%eax
0866c114 +0x3a:  jmp    0866c11b <+0x41>
0866c116 +0x3c:  mov    $0x0,%eax
0866c11b +0x41:  leave
0866c11c +0x42:  ret
0866c11d +0x43:  nop
```

## 反编译 C

```c
// CUserCharacInfo::isSetGuildCreateFlag @ 0x866c0da

/* CUserCharacInfo::isSetGuildCreateFlag(unsigned short) */

undefined4 __thiscall CUserCharacInfo::isSetGuildCreateFlag(CUserCharacInfo *this,ushort param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else if ((*(ushort *)(*(int *)(this + 0x10) + 0xdc3) & param_1) == param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
