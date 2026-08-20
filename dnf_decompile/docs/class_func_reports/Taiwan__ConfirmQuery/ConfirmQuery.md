# ConfirmQuery

`_ZN6Taiwan12ConfirmQueryC1ERKNS_15BillTransactionE`

`Taiwan::ConfirmQuery::ConfirmQuery(Taiwan::BillTransaction const&)`

| 类 | 地址 |
|---|---|
| `Taiwan::ConfirmQuery` | `0x08174ac6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174ac6  _ZN6Taiwan12ConfirmQueryC1ERKNS_15BillTransactionE
#           Taiwan::ConfirmQuery::ConfirmQuery(Taiwan::BillTransaction const&)
# range [0x08174ac6, 0x08174aeb]
08174ac6 +0x00:  push   %ebp
08174ac7 +0x01:  mov    %esp,%ebp
08174ac9 +0x03:  mov    0x8(%ebp),%eax
08174acc +0x06:  mov    0xc(%ebp),%edx
08174acf +0x09:  mov    (%edx),%ecx
08174ad1 +0x0b:  mov    %ecx,0x4(%eax)
08174ad4 +0x0e:  mov    0x4(%edx),%ecx
08174ad7 +0x11:  mov    %ecx,0x8(%eax)
08174ada +0x14:  mov    0x8(%edx),%edx
08174add +0x17:  mov    %edx,0xc(%eax)
08174ae0 +0x1a:  mov    0x8(%ebp),%eax
08174ae3 +0x1d:  movl   $0x0,(%eax)
08174ae9 +0x23:  pop    %ebp
08174aea +0x24:  ret
08174aeb +0x25:  nop
```

## 反编译 C

```c
// Taiwan::ConfirmQuery::ConfirmQuery @ 0x8174ac6

/* Taiwan::ConfirmQuery::ConfirmQuery(Taiwan::BillTransaction const&) */

void __thiscall Taiwan::ConfirmQuery::ConfirmQuery(ConfirmQuery *this,BillTransaction *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = 0;
  return;
}
```
