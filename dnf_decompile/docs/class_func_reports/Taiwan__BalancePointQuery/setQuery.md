# setQuery

`_ZN6Taiwan17BalancePointQuery8setQueryER5MySQL`

`Taiwan::BalancePointQuery::setQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::BalancePointQuery` | `0x081742bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081742bc  _ZN6Taiwan17BalancePointQuery8setQueryER5MySQL
#           Taiwan::BalancePointQuery::setQuery(MySQL&)
# range [0x081742bc, 0x081742df]
081742bc +0x00:  push   %ebp
081742bd +0x01:  mov    %esp,%ebp
081742bf +0x03:  sub    $0x18,%esp
081742c2 +0x06:  mov    0x8(%ebp),%eax
081742c5 +0x09:  mov    (%eax),%eax
081742c7 +0x0b:  mov    %eax,0x8(%esp)
081742cb +0x0f:  movl   $"call usp_balance_point('%s', @out_balance, @out_point, @out_result)",0x4(%esp)
081742d3 +0x17:  mov    0xc(%ebp),%eax
081742d6 +0x1a:  mov    %eax,(%esp)
081742d9 +0x1d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081742de +0x22:  leave
081742df +0x23:  ret
```

## 反编译 C

```c
// Taiwan::BalancePointQuery::setQuery @ 0x81742bc

/* Taiwan::BalancePointQuery::setQuery(MySQL&) */

void __thiscall Taiwan::BalancePointQuery::setQuery(BalancePointQuery *this,MySQL *param_1)

{
  MySQL::set_query(param_1,"call usp_balance_point(\'%s\', @out_balance, @out_point, @out_result)",
                   *(undefined4 *)this);
  return;
}
```
