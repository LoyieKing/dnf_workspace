# BalanceQuery

`_ZN6Taiwan12BalanceQueryC1EPKc`

`Taiwan::BalanceQuery::BalanceQuery(char const*)`

| 类 | 地址 |
|---|---|
| `Taiwan::BalanceQuery` | `0x08174030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174030  _ZN6Taiwan12BalanceQueryC1EPKc
#           Taiwan::BalanceQuery::BalanceQuery(char const*)
# range [0x08174030, 0x08174051]
08174030 +0x00:  push   %ebp
08174031 +0x01:  mov    %esp,%ebp
08174033 +0x03:  mov    0x8(%ebp),%eax
08174036 +0x06:  mov    0xc(%ebp),%edx
08174039 +0x09:  mov    %edx,(%eax)
0817403b +0x0b:  mov    0x8(%ebp),%eax
0817403e +0x0e:  movl   $0x0,0x4(%eax)
08174045 +0x15:  mov    0x8(%ebp),%eax
08174048 +0x18:  movl   $0x0,0x8(%eax)
0817404f +0x1f:  pop    %ebp
08174050 +0x20:  ret
08174051 +0x21:  nop
```

## 反编译 C

```c
// Taiwan::BalanceQuery::BalanceQuery @ 0x8174030

/* Taiwan::BalanceQuery::BalanceQuery(char const*) */

void __thiscall Taiwan::BalanceQuery::BalanceQuery(BalanceQuery *this,char *param_1)

{
  *(char **)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}
```
