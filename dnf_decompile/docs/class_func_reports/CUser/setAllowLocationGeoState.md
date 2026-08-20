# setAllowLocationGeoState

`_ZN5CUser24setAllowLocationGeoStateEb`

`CUser::setAllowLocationGeoState(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692f46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692f46  _ZN5CUser24setAllowLocationGeoStateEb
#           CUser::setAllowLocationGeoState(bool)
# range [0x08692f46, 0x08692f61]
08692f46 +0x00:  push   %ebp
08692f47 +0x01:  mov    %esp,%ebp
08692f49 +0x03:  sub    $0x4,%esp
08692f4c +0x06:  mov    0xc(%ebp),%eax
08692f4f +0x09:  mov    %al,-0x4(%ebp)
08692f52 +0x0c:  mov    0x8(%ebp),%eax
08692f55 +0x0f:  movzbl -0x4(%ebp),%edx
08692f59 +0x13:  mov    %dl,0x6effa(%eax)
08692f5f +0x19:  leave
08692f60 +0x1a:  ret
08692f61 +0x1b:  nop
```

## 反编译 C

```c
// CUser::setAllowLocationGeoState @ 0x8692f46

/* CUser::setAllowLocationGeoState(bool) */

void __thiscall CUser::setAllowLocationGeoState(CUser *this,bool param_1)

{
  this[0x6effa] = (CUser)param_1;
  return;
}
```
