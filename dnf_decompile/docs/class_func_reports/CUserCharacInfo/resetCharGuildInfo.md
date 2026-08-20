# resetCharGuildInfo

`_ZN15CUserCharacInfo18resetCharGuildInfoEv`

`CUserCharacInfo::resetCharGuildInfo()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0866c11e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866c11e  _ZN15CUserCharacInfo18resetCharGuildInfoEv
#           CUserCharacInfo::resetCharGuildInfo()
# range [0x0866c11e, 0x0866c195]
0866c11e +0x00:  push   %ebp
0866c11f +0x01:  mov    %esp,%ebp
0866c121 +0x03:  mov    0x8(%ebp),%eax
0866c124 +0x06:  mov    0x10(%eax),%eax
0866c127 +0x09:  test   %eax,%eax
0866c129 +0x0b:  je     0866c193 <+0x75>
0866c12b +0x0d:  mov    0x8(%ebp),%eax
0866c12e +0x10:  mov    0x10(%eax),%eax
0866c131 +0x13:  movl   $0x0,0xdbe(%eax)
0866c13b +0x1d:  mov    0x8(%ebp),%eax
0866c13e +0x20:  mov    0x10(%eax),%eax
0866c141 +0x23:  movw   $0x0,0xded(%eax)
0866c14a +0x2c:  mov    0x8(%ebp),%eax
0866c14d +0x2f:  mov    0x10(%eax),%eax
0866c150 +0x32:  movl   $0x0,0xde9(%eax)
0866c15a +0x3c:  mov    0x8(%ebp),%eax
0866c15d +0x3f:  mov    0x10(%eax),%eax
0866c160 +0x42:  movb   $0x0,0xdf3(%eax)
0866c167 +0x49:  mov    0x8(%ebp),%eax
0866c16a +0x4c:  mov    0x10(%eax),%eax
0866c16d +0x4f:  movb   $0x0,0xdc2(%eax)
0866c174 +0x56:  mov    0x8(%ebp),%eax
0866c177 +0x59:  mov    0x10(%eax),%eax
0866c17a +0x5c:  movw   $0x0,0xdc3(%eax)
0866c183 +0x65:  mov    0x8(%ebp),%eax
0866c186 +0x68:  mov    0x10(%eax),%eax
0866c189 +0x6b:  movl   $0x0,0xdef(%eax)
0866c193 +0x75:  pop    %ebp
0866c194 +0x76:  ret
0866c195 +0x77:  nop
```

## 反编译 C

```c
// CUserCharacInfo::resetCharGuildInfo @ 0x866c11e

/* CUserCharacInfo::resetCharGuildInfo() */

void __thiscall CUserCharacInfo::resetCharGuildInfo(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0xdbe) = 0;
    *(undefined2 *)(*(int *)(this + 0x10) + 0xded) = 0;
    *(undefined4 *)(*(int *)(this + 0x10) + 0xde9) = 0;
    *(undefined1 *)(*(int *)(this + 0x10) + 0xdf3) = 0;
    *(undefined1 *)(*(int *)(this + 0x10) + 0xdc2) = 0;
    *(undefined2 *)(*(int *)(this + 0x10) + 0xdc3) = 0;
    *(undefined4 *)(*(int *)(this + 0x10) + 0xdef) = 0;
  }
  return;
}
```
