# execQuery

`_ZN6Taiwan11CancelQuery9execQueryER5MySQL`

`Taiwan::CancelQuery::execQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::CancelQuery` | `0x08174d44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174d44  _ZN6Taiwan11CancelQuery9execQueryER5MySQL
#           Taiwan::CancelQuery::execQuery(MySQL&)
# range [0x08174d44, 0x08174d5f]
08174d44 +0x00:  push   %ebp
08174d45 +0x01:  mov    %esp,%ebp
08174d47 +0x03:  sub    $0x18,%esp
08174d4a +0x06:  movl   $0x1,0x4(%esp)
08174d52 +0x0e:  mov    0xc(%ebp),%eax
08174d55 +0x11:  mov    %eax,(%esp)
08174d58 +0x14:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08174d5d +0x19:  leave
08174d5e +0x1a:  ret
08174d5f +0x1b:  nop
```

## 反编译 C

```c
// Taiwan::CancelQuery::execQuery @ 0x8174d44

/* Taiwan::CancelQuery::execQuery(MySQL&) */

void __thiscall Taiwan::CancelQuery::execQuery(CancelQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}
```
