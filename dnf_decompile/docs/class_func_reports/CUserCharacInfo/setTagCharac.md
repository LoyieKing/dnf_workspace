# setTagCharac

`_ZN15CUserCharacInfo12setTagCharacEP12_Charac_info`

`CUserCharacInfo::setTagCharac(_Charac_info*)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864e28e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e28e  _ZN15CUserCharacInfo12setTagCharacEP12_Charac_info
#           CUserCharacInfo::setTagCharac(_Charac_info*)
# range [0x0864e28e, 0x0864e29b]
0864e28e +0x00:  push   %ebp
0864e28f +0x01:  mov    %esp,%ebp
0864e291 +0x03:  mov    0x8(%ebp),%eax
0864e294 +0x06:  mov    0xc(%ebp),%edx
0864e297 +0x09:  mov    %edx,0x14(%eax)
0864e29a +0x0c:  pop    %ebp
0864e29b +0x0d:  ret
```

## 反编译 C

```c
// CUserCharacInfo::setTagCharac @ 0x864e28e

/* CUserCharacInfo::setTagCharac(_Charac_info*) */

void __thiscall CUserCharacInfo::setTagCharac(CUserCharacInfo *this,_Charac_info *param_1)

{
  *(_Charac_info **)(this + 0x14) = param_1;
  return;
}
```
