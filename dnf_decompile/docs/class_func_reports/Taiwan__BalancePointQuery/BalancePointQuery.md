# BalancePointQuery

`_ZN6Taiwan17BalancePointQueryC1EPKc`

`Taiwan::BalancePointQuery::BalancePointQuery(char const*)`

| 类 | 地址 |
|---|---|
| `Taiwan::BalancePointQuery` | `0x08174290` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174290  _ZN6Taiwan17BalancePointQueryC1EPKc
#           Taiwan::BalancePointQuery::BalancePointQuery(char const*)
# range [0x08174290, 0x081742bb]
08174290 +0x00:  push   %ebp
08174291 +0x01:  mov    %esp,%ebp
08174293 +0x03:  mov    0x8(%ebp),%eax
08174296 +0x06:  mov    0xc(%ebp),%edx
08174299 +0x09:  mov    %edx,(%eax)
0817429b +0x0b:  mov    0x8(%ebp),%eax
0817429e +0x0e:  movl   $0x0,0x4(%eax)
081742a5 +0x15:  mov    0x8(%ebp),%eax
081742a8 +0x18:  movl   $0x0,0x8(%eax)
081742af +0x1f:  mov    0x8(%ebp),%eax
081742b2 +0x22:  movl   $0x0,0xc(%eax)
081742b9 +0x29:  pop    %ebp
081742ba +0x2a:  ret
081742bb +0x2b:  nop
```

## 反编译 C

```c
// Taiwan::BalancePointQuery::BalancePointQuery @ 0x8174290

/* Taiwan::BalancePointQuery::BalancePointQuery(char const*) */

void __thiscall Taiwan::BalancePointQuery::BalancePointQuery(BalancePointQuery *this,char *param_1)

{
  *(char **)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
