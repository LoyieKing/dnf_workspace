# execQuery

`_ZN6Taiwan13PurchaseQuery9execQueryER5MySQL`

`Taiwan::PurchaseQuery::execQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::PurchaseQuery` | `0x081745f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081745f2  _ZN6Taiwan13PurchaseQuery9execQueryER5MySQL
#           Taiwan::PurchaseQuery::execQuery(MySQL&)
# range [0x081745f2, 0x0817460d]
081745f2 +0x00:  push   %ebp
081745f3 +0x01:  mov    %esp,%ebp
081745f5 +0x03:  sub    $0x18,%esp
081745f8 +0x06:  movl   $0x1,0x4(%esp)
08174600 +0x0e:  mov    0xc(%ebp),%eax
08174603 +0x11:  mov    %eax,(%esp)
08174606 +0x14:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0817460b +0x19:  leave
0817460c +0x1a:  ret
0817460d +0x1b:  nop
```

## 反编译 C

```c
// Taiwan::PurchaseQuery::execQuery @ 0x81745f2

/* Taiwan::PurchaseQuery::execQuery(MySQL&) */

void __thiscall Taiwan::PurchaseQuery::execQuery(PurchaseQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}
```
