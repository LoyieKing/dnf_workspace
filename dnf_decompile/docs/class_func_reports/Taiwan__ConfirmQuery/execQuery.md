# execQuery

`_ZN6Taiwan12ConfirmQuery9execQueryER5MySQL`

`Taiwan::ConfirmQuery::execQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::ConfirmQuery` | `0x08174b28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174b28  _ZN6Taiwan12ConfirmQuery9execQueryER5MySQL
#           Taiwan::ConfirmQuery::execQuery(MySQL&)
# range [0x08174b28, 0x08174b43]
08174b28 +0x00:  push   %ebp
08174b29 +0x01:  mov    %esp,%ebp
08174b2b +0x03:  sub    $0x18,%esp
08174b2e +0x06:  movl   $0x1,0x4(%esp)
08174b36 +0x0e:  mov    0xc(%ebp),%eax
08174b39 +0x11:  mov    %eax,(%esp)
08174b3c +0x14:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08174b41 +0x19:  leave
08174b42 +0x1a:  ret
08174b43 +0x1b:  nop
```

## 反编译 C

```c
// Taiwan::ConfirmQuery::execQuery @ 0x8174b28

/* Taiwan::ConfirmQuery::execQuery(MySQL&) */

void __thiscall Taiwan::ConfirmQuery::execQuery(ConfirmQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}
```
