# getGoldCardCommission

`_ZN8WongWork12CClearReward21getGoldCardCommissionEi`

`WongWork::CClearReward::getGoldCardCommission(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x085385b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085385b2  _ZN8WongWork12CClearReward21getGoldCardCommissionEi
#           WongWork::CClearReward::getGoldCardCommission(int)
# range [0x085385b2, 0x085385c7]
085385b2 +0x00:  push   %ebp
085385b3 +0x01:  mov    %esp,%ebp
085385b5 +0x03:  mov    0xc(%ebp),%edx
085385b8 +0x06:  mov    0x8(%ebp),%eax
085385bb +0x09:  add    $0x8e04,%edx
085385c1 +0x0f:  mov    0x4(%eax,%edx,4),%eax
085385c5 +0x13:  pop    %ebp
085385c6 +0x14:  ret
085385c7 +0x15:  nop
```

## 反编译 C

```c
// WongWork::CClearReward::getGoldCardCommission @ 0x85385b2

/* WongWork::CClearReward::getGoldCardCommission(int) */

undefined4 __thiscall WongWork::CClearReward::getGoldCardCommission(CClearReward *this,int param_1)

{
  return *(undefined4 *)(this + (param_1 + 0x8e04) * 4 + 4);
}
```
