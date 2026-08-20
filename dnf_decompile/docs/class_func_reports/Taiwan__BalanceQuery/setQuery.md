# setQuery

`_ZN6Taiwan12BalanceQuery8setQueryER5MySQL`

`Taiwan::BalanceQuery::setQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::BalanceQuery` | `0x08174052` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174052  _ZN6Taiwan12BalanceQuery8setQueryER5MySQL
#           Taiwan::BalanceQuery::setQuery(MySQL&)
# range [0x08174052, 0x08174075]
08174052 +0x00:  push   %ebp
08174053 +0x01:  mov    %esp,%ebp
08174055 +0x03:  sub    $0x18,%esp
08174058 +0x06:  mov    0x8(%ebp),%eax
0817405b +0x09:  mov    (%eax),%eax
0817405d +0x0b:  mov    %eax,0x8(%esp)
08174061 +0x0f:  movl   $"call usp_balance('%s', @out_balance, @out_result)",0x4(%esp)
08174069 +0x17:  mov    0xc(%ebp),%eax
0817406c +0x1a:  mov    %eax,(%esp)
0817406f +0x1d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08174074 +0x22:  leave
08174075 +0x23:  ret
```

## 反编译 C

```c
// Taiwan::BalanceQuery::setQuery @ 0x8174052

/* Taiwan::BalanceQuery::setQuery(MySQL&) */

void __thiscall Taiwan::BalanceQuery::setQuery(BalanceQuery *this,MySQL *param_1)

{
  MySQL::set_query(param_1,"call usp_balance(\'%s\', @out_balance, @out_result)",*(undefined4 *)this
                  );
  return;
}
```
