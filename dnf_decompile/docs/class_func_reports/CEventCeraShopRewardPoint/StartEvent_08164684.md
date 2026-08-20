# StartEvent

`_ZN25CEventCeraShopRewardPoint10StartEventE10Word_Param`

`CEventCeraShopRewardPoint::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CEventCeraShopRewardPoint` | `0x08164684` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164684  _ZN25CEventCeraShopRewardPoint10StartEventE10Word_Param
#           CEventCeraShopRewardPoint::StartEvent(Word_Param)
# range [0x08164684, 0x081646b7]
08164684 +0x00:  push   %ebp
08164685 +0x01:  mov    %esp,%ebp
08164687 +0x03:  sub    $0x18,%esp
0816468a +0x06:  movzwl 0xc(%ebp),%eax
0816468e +0x0a:  movzwl %ax,%edx
08164691 +0x0d:  mov    0x8(%ebp),%eax
08164694 +0x10:  mov    %edx,0x10(%eax)
08164697 +0x13:  movzwl 0xe(%ebp),%eax
0816469b +0x17:  movzwl %ax,%edx
0816469e +0x1a:  mov    0x8(%ebp),%eax
081646a1 +0x1d:  mov    %edx,0xc(%eax)
081646a4 +0x20:  mov    0x8(%ebp),%eax
081646a7 +0x23:  mov    (%eax),%eax
081646a9 +0x25:  add    $0x8,%eax
081646ac +0x28:  mov    (%eax),%edx
081646ae +0x2a:  mov    0x8(%ebp),%eax
081646b1 +0x2d:  mov    %eax,(%esp)
081646b4 +0x30:  call   *%edx
081646b6 +0x32:  leave
081646b7 +0x33:  ret
```

## 反编译 C

```c
// CEventCeraShopRewardPoint::StartEvent @ 0x8164684

/* CEventCeraShopRewardPoint::StartEvent(Word_Param) */

void __thiscall CEventCeraShopRewardPoint::StartEvent(CEventCeraShopRewardPoint *this,uint param_2)

{
  *(uint *)(this + 0x10) = param_2 & 0xffff;
  *(uint *)(this + 0xc) = param_2 >> 0x10;
  (**(code **)(*(int *)this + 8))(this);
  return;
}
```
