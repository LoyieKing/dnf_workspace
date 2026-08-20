# execQuery

`_ZN6Taiwan17BalancePointQuery9execQueryER5MySQL`

`Taiwan::BalancePointQuery::execQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::BalancePointQuery` | `0x081742e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081742e0  _ZN6Taiwan17BalancePointQuery9execQueryER5MySQL
#           Taiwan::BalancePointQuery::execQuery(MySQL&)
# range [0x081742e0, 0x081742fb]
081742e0 +0x00:  push   %ebp
081742e1 +0x01:  mov    %esp,%ebp
081742e3 +0x03:  sub    $0x18,%esp
081742e6 +0x06:  movl   $0x1,0x4(%esp)
081742ee +0x0e:  mov    0xc(%ebp),%eax
081742f1 +0x11:  mov    %eax,(%esp)
081742f4 +0x14:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
081742f9 +0x19:  leave
081742fa +0x1a:  ret
081742fb +0x1b:  nop
```

## 反编译 C

```c
// Taiwan::BalancePointQuery::execQuery @ 0x81742e0

/* Taiwan::BalancePointQuery::execQuery(MySQL&) */

void __thiscall Taiwan::BalancePointQuery::execQuery(BalancePointQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}
```
