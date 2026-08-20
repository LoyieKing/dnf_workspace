# SetAccountCargoDBData

`_ZN5CUser21SetAccountCargoDBDataEP10Inven_Itemjj`

`CUser::SetAccountCargoDBData(Inven_Item*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867d86e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867d86e  _ZN5CUser21SetAccountCargoDBDataEP10Inven_Itemjj
#           CUser::SetAccountCargoDBData(Inven_Item*, unsigned int, unsigned int)
# range [0x0867d86e, 0x0867d8a3]
0867d86e +0x00:  push   %ebp
0867d86f +0x01:  mov    %esp,%ebp
0867d871 +0x03:  sub    $0x28,%esp
0867d874 +0x06:  mov    0x8(%ebp),%eax
0867d877 +0x09:  lea    0x6effc(%eax),%edx
0867d87d +0x0f:  mov    0x14(%ebp),%eax
0867d880 +0x12:  mov    %eax,0x10(%esp)
0867d884 +0x16:  mov    0x10(%ebp),%eax
0867d887 +0x19:  mov    %eax,0xc(%esp)
0867d88b +0x1d:  mov    0xc(%ebp),%eax
0867d88e +0x20:  mov    %eax,0x8(%esp)
0867d892 +0x24:  mov    0x8(%ebp),%eax
0867d895 +0x27:  mov    %eax,0x4(%esp)
0867d899 +0x2b:  mov    %edx,(%esp)
0867d89c +0x2e:  call   08289816 <_ZN13CAccountCargo9SetDBDataEP5CUserP10Inven_Itemjj>  ; CAccountCargo::SetDBData(CUser*, Inven_Item*, unsigned int, unsigned int)
0867d8a1 +0x33:  leave
0867d8a2 +0x34:  ret
0867d8a3 +0x35:  nop
```

## 反编译 C

```c
// CUser::SetAccountCargoDBData @ 0x867d86e

/* CUser::SetAccountCargoDBData(Inven_Item*, unsigned int, unsigned int) */

void __thiscall
CUser::SetAccountCargoDBData(CUser *this,Inven_Item *param_1,uint param_2,uint param_3)

{
  CAccountCargo::SetDBData((CAccountCargo *)(this + 0x6effc),this,param_1,param_2,param_3);
  return;
}
```
