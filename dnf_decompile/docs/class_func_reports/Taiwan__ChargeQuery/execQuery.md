# execQuery

`_ZN6Taiwan11ChargeQuery9execQueryER5MySQL`

`Taiwan::ChargeQuery::execQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::ChargeQuery` | `0x08174faa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174faa  _ZN6Taiwan11ChargeQuery9execQueryER5MySQL
#           Taiwan::ChargeQuery::execQuery(MySQL&)
# range [0x08174faa, 0x08174fc5]
08174faa +0x00:  push   %ebp
08174fab +0x01:  mov    %esp,%ebp
08174fad +0x03:  sub    $0x18,%esp
08174fb0 +0x06:  movl   $0x1,0x4(%esp)
08174fb8 +0x0e:  mov    0xc(%ebp),%eax
08174fbb +0x11:  mov    %eax,(%esp)
08174fbe +0x14:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08174fc3 +0x19:  leave
08174fc4 +0x1a:  ret
08174fc5 +0x1b:  nop
```

## 反编译 C

```c
// Taiwan::ChargeQuery::execQuery @ 0x8174faa

/* Taiwan::ChargeQuery::execQuery(MySQL&) */

void __thiscall Taiwan::ChargeQuery::execQuery(ChargeQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}
```
