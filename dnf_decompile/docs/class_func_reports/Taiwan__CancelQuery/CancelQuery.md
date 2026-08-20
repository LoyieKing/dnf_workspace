# CancelQuery

`_ZN6Taiwan11CancelQueryC1ERKNS_15BillTransactionE`

`Taiwan::CancelQuery::CancelQuery(Taiwan::BillTransaction const&)`

| 类 | 地址 |
|---|---|
| `Taiwan::CancelQuery` | `0x08174ce2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174ce2  _ZN6Taiwan11CancelQueryC1ERKNS_15BillTransactionE
#           Taiwan::CancelQuery::CancelQuery(Taiwan::BillTransaction const&)
# range [0x08174ce2, 0x08174d07]
08174ce2 +0x00:  push   %ebp
08174ce3 +0x01:  mov    %esp,%ebp
08174ce5 +0x03:  mov    0x8(%ebp),%eax
08174ce8 +0x06:  mov    0xc(%ebp),%edx
08174ceb +0x09:  mov    (%edx),%ecx
08174ced +0x0b:  mov    %ecx,0x4(%eax)
08174cf0 +0x0e:  mov    0x4(%edx),%ecx
08174cf3 +0x11:  mov    %ecx,0x8(%eax)
08174cf6 +0x14:  mov    0x8(%edx),%edx
08174cf9 +0x17:  mov    %edx,0xc(%eax)
08174cfc +0x1a:  mov    0x8(%ebp),%eax
08174cff +0x1d:  movl   $0x0,(%eax)
08174d05 +0x23:  pop    %ebp
08174d06 +0x24:  ret
08174d07 +0x25:  nop
```

## 反编译 C

```c
// Taiwan::CancelQuery::CancelQuery @ 0x8174ce2

/* Taiwan::CancelQuery::CancelQuery(Taiwan::BillTransaction const&) */

void __thiscall Taiwan::CancelQuery::CancelQuery(CancelQuery *this,BillTransaction *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = 0;
  return;
}
```
