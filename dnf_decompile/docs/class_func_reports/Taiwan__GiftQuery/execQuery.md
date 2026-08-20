# execQuery

`_ZN6Taiwan9GiftQuery9execQueryER5MySQL`

`Taiwan::GiftQuery::execQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::GiftQuery` | `0x081748ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081748ba  _ZN6Taiwan9GiftQuery9execQueryER5MySQL
#           Taiwan::GiftQuery::execQuery(MySQL&)
# range [0x081748ba, 0x081748d5]
081748ba +0x00:  push   %ebp
081748bb +0x01:  mov    %esp,%ebp
081748bd +0x03:  sub    $0x18,%esp
081748c0 +0x06:  movl   $0x1,0x4(%esp)
081748c8 +0x0e:  mov    0xc(%ebp),%eax
081748cb +0x11:  mov    %eax,(%esp)
081748ce +0x14:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
081748d3 +0x19:  leave
081748d4 +0x1a:  ret
081748d5 +0x1b:  nop
```

## 反编译 C

```c
// Taiwan::GiftQuery::execQuery @ 0x81748ba

/* Taiwan::GiftQuery::execQuery(MySQL&) */

void __thiscall Taiwan::GiftQuery::execQuery(GiftQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}
```
