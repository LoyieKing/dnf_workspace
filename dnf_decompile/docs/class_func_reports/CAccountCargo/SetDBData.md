# SetDBData

`_ZN13CAccountCargo9SetDBDataEP5CUserP10Inven_Itemjj`

`CAccountCargo::SetDBData(CUser*, Inven_Item*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x08289816` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08289816  _ZN13CAccountCargo9SetDBDataEP5CUserP10Inven_Itemjj
#           CAccountCargo::SetDBData(CUser*, Inven_Item*, unsigned int, unsigned int)
# range [0x08289816, 0x0828986b]
08289816 +0x00:  push   %ebp
08289817 +0x01:  mov    %esp,%ebp
08289819 +0x03:  sub    $0x18,%esp
0828981c +0x06:  mov    0x8(%ebp),%eax
0828981f +0x09:  mov    0xc(%ebp),%edx
08289822 +0x0c:  mov    %edx,(%eax)
08289824 +0x0e:  mov    0x8(%ebp),%eax
08289827 +0x11:  mov    0x18(%ebp),%edx
0828982a +0x14:  mov    %edx,0xd60(%eax)
08289830 +0x1a:  mov    0x8(%ebp),%eax
08289833 +0x1d:  mov    0x14(%ebp),%edx
08289836 +0x20:  mov    %edx,0xd5c(%eax)
0828983c +0x26:  mov    0x8(%ebp),%eax
0828983f +0x29:  movb   $0x0,0xd64(%eax)
08289846 +0x30:  cmpl   $0x0,0x10(%ebp)
0828984a +0x34:  je     08289869 <+0x53>
0828984c +0x36:  mov    0x8(%ebp),%eax
0828984f +0x39:  lea    0x4(%eax),%edx
08289852 +0x3c:  movl   $0xd58,0x8(%esp)
0828985a +0x44:  mov    0x10(%ebp),%eax
0828985d +0x47:  mov    %eax,0x4(%esp)
08289861 +0x4b:  mov    %edx,(%esp)
08289864 +0x4e:  call   0807d8a0 <_init+0x198>
08289869 +0x53:  leave
0828986a +0x54:  ret
0828986b +0x55:  nop
```

## 反编译 C

```c
// CAccountCargo::SetDBData @ 0x8289816

/* CAccountCargo::SetDBData(CUser*, Inven_Item*, unsigned int, unsigned int) */

void __thiscall
CAccountCargo::SetDBData
          (CAccountCargo *this,CUser *param_1,Inven_Item *param_2,uint param_3,uint param_4)

{
  *(CUser **)this = param_1;
  *(uint *)(this + 0xd60) = param_4;
  *(uint *)(this + 0xd5c) = param_3;
  this[0xd64] = (CAccountCargo)0x0;
  if (param_2 != (Inven_Item *)0x0) {
    memcpy(this + 4,param_2,0xd58);
  }
  return;
}
```
