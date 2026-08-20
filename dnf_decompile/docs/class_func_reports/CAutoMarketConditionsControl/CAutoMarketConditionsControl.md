# CAutoMarketConditionsControl

`_ZN28CAutoMarketConditionsControlC1Ev`

`CAutoMarketConditionsControl::CAutoMarketConditionsControl()`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControl` | `0x082f8108` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f8108  _ZN28CAutoMarketConditionsControlC1Ev
#           CAutoMarketConditionsControl::CAutoMarketConditionsControl()
# range [0x082f8108, 0x082f8143]
082f8108 +0x00:  push   %ebp
082f8109 +0x01:  mov    %esp,%ebp
082f810b +0x03:  sub    $0x18,%esp
082f810e +0x06:  mov    0x8(%ebp),%eax
082f8111 +0x09:  add    $0x3dc,%eax
082f8116 +0x0e:  mov    %eax,(%esp)
082f8119 +0x11:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
082f811e +0x16:  mov    0x8(%ebp),%eax
082f8121 +0x19:  movl   $0x0,0x380(%eax)
082f812b +0x23:  mov    0x8(%ebp),%eax
082f812e +0x26:  movl   $0x0,(%eax)
082f8134 +0x2c:  mov    0x8(%ebp),%eax
082f8137 +0x2f:  movl   $0x0,0x3e8(%eax)
082f8141 +0x39:  leave
082f8142 +0x3a:  ret
082f8143 +0x3b:  nop
```

## 反编译 C

```c
// CAutoMarketConditionsControl::CAutoMarketConditionsControl @ 0x82f8108

/* CAutoMarketConditionsControl::CAutoMarketConditionsControl() */

void __thiscall
CAutoMarketConditionsControl::CAutoMarketConditionsControl(CAutoMarketConditionsControl *this)

{
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x3dc));
  *(undefined4 *)(this + 0x380) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 1000) = 0;
  return;
}
```
