# execQuery

`_ZN6Taiwan14CeraPointQuery9execQueryER5MySQL`

`Taiwan::CeraPointQuery::execQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::CeraPointQuery` | `0x081752b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081752b0  _ZN6Taiwan14CeraPointQuery9execQueryER5MySQL
#           Taiwan::CeraPointQuery::execQuery(MySQL&)
# range [0x081752b0, 0x081752cb]
081752b0 +0x00:  push   %ebp
081752b1 +0x01:  mov    %esp,%ebp
081752b3 +0x03:  sub    $0x18,%esp
081752b6 +0x06:  movl   $0x1,0x4(%esp)
081752be +0x0e:  mov    0xc(%ebp),%eax
081752c1 +0x11:  mov    %eax,(%esp)
081752c4 +0x14:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
081752c9 +0x19:  leave
081752ca +0x1a:  ret
081752cb +0x1b:  nop
```

## 反编译 C

```c
// Taiwan::CeraPointQuery::execQuery @ 0x81752b0

/* Taiwan::CeraPointQuery::execQuery(MySQL&) */

void __thiscall Taiwan::CeraPointQuery::execQuery(CeraPointQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}
```
