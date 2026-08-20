# SetInfo

`_ZN16Secu_GoldControl7SetInfoER14user_gold_info`

`Secu_GoldControl::SetInfo(user_gold_info&)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x082872a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082872a0  _ZN16Secu_GoldControl7SetInfoER14user_gold_info
#           Secu_GoldControl::SetInfo(user_gold_info&)
# range [0x082872a0, 0x082872bd]
082872a0 +0x00:  push   %ebp
082872a1 +0x01:  mov    %esp,%ebp
082872a3 +0x03:  sub    $0x18,%esp
082872a6 +0x06:  mov    0x8(%ebp),%eax
082872a9 +0x09:  add    $0x4,%eax
082872ac +0x0c:  mov    %eax,0x4(%esp)
082872b0 +0x10:  mov    0xc(%ebp),%eax
082872b3 +0x13:  mov    %eax,(%esp)
082872b6 +0x16:  call   0828802e <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0xe0>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0xe0
082872bb +0x1b:  leave
082872bc +0x1c:  ret
082872bd +0x1d:  nop
```

## 反编译 C

```c
// Secu_GoldControl::SetInfo @ 0x82872a0

/* Secu_GoldControl::SetInfo(user_gold_info&) */

void __thiscall Secu_GoldControl::SetInfo(Secu_GoldControl *this,user_gold_info *param_1)

{
  user_gold_info::toCopy(param_1,(user_gold_info *)(this + 4));
  return;
}
```
