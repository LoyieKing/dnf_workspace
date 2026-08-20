# VerifyCleanPadVeriData

`_ZN5CUser22VerifyCleanPadVeriDataEj`

`CUser::VerifyCleanPadVeriData(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08649b44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08649b44  _ZN5CUser22VerifyCleanPadVeriDataEj
#           CUser::VerifyCleanPadVeriData(unsigned int)
# range [0x08649b44, 0x08649b95]
08649b44 +0x00:  push   %ebp
08649b45 +0x01:  mov    %esp,%ebp
08649b47 +0x03:  sub    $0x10,%esp
08649b4a +0x06:  movl   $0x0,-0x4(%ebp)
08649b51 +0x0d:  mov    0x8(%ebp),%eax
08649b54 +0x10:  movzwl 0x8e93e(%eax),%eax
08649b5b +0x17:  movzwl %ax,%edx
08649b5e +0x1a:  mov    0x8(%ebp),%eax
08649b61 +0x1d:  movzbl 0x8e940(%eax),%eax
08649b68 +0x24:  movzbl %al,%eax
08649b6b +0x27:  add    %eax,%edx
08649b6d +0x29:  mov    0x8(%ebp),%eax
08649b70 +0x2c:  movzwl 0x8e942(%eax),%eax
08649b77 +0x33:  movzwl %ax,%eax
08649b7a +0x36:  lea    (%edx,%eax,1),%eax
08649b7d +0x39:  mov    %eax,-0x4(%ebp)
08649b80 +0x3c:  mov    0xc(%ebp),%eax
08649b83 +0x3f:  cmp    -0x4(%ebp),%eax
08649b86 +0x42:  jne    08649b8f <+0x4b>
08649b88 +0x44:  mov    $0x1,%eax
08649b8d +0x49:  jmp    08649b94 <+0x50>
08649b8f +0x4b:  mov    $0x0,%eax
08649b94 +0x50:  leave
08649b95 +0x51:  ret
```

## 反编译 C

```c
// CUser::VerifyCleanPadVeriData @ 0x8649b44

/* CUser::VerifyCleanPadVeriData(unsigned int) */

bool __thiscall CUser::VerifyCleanPadVeriData(CUser *this,uint param_1)

{
  return param_1 ==
         (uint)*(ushort *)(this + 0x8e93e) + (uint)(byte)this[0x8e940] +
         (uint)*(ushort *)(this + 0x8e942);
}
```
