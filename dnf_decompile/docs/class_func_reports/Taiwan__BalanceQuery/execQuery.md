# execQuery

`_ZN6Taiwan12BalanceQuery9execQueryER5MySQL`

`Taiwan::BalanceQuery::execQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::BalanceQuery` | `0x08174076` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174076  _ZN6Taiwan12BalanceQuery9execQueryER5MySQL
#           Taiwan::BalanceQuery::execQuery(MySQL&)
# range [0x08174076, 0x08174091]
08174076 +0x00:  push   %ebp
08174077 +0x01:  mov    %esp,%ebp
08174079 +0x03:  sub    $0x18,%esp
0817407c +0x06:  movl   $0x1,0x4(%esp)
08174084 +0x0e:  mov    0xc(%ebp),%eax
08174087 +0x11:  mov    %eax,(%esp)
0817408a +0x14:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0817408f +0x19:  leave
08174090 +0x1a:  ret
08174091 +0x1b:  nop
```

## 反编译 C

```c
// Taiwan::BalanceQuery::execQuery @ 0x8174076

/* Taiwan::BalanceQuery::execQuery(MySQL&) */

void __thiscall Taiwan::BalanceQuery::execQuery(BalanceQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}
```
