# verifyStackableItemActionPlace

`_ZN5CUser30verifyStackableItemActionPlaceEN15StackableAction4TypeEPK5CItem`

`CUser::verifyStackableItemActionPlace(StackableAction::Type, CItem const*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f69a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f69a  _ZN5CUser30verifyStackableItemActionPlaceEN15StackableAction4TypeEPK5CItem
#           CUser::verifyStackableItemActionPlace(StackableAction::Type, CItem const*)
# range [0x0868f69a, 0x0868f6bb]
0868f69a +0x00:  push   %ebp
0868f69b +0x01:  mov    %esp,%ebp
0868f69d +0x03:  sub    $0x18,%esp
0868f6a0 +0x06:  mov    0x10(%ebp),%eax
0868f6a3 +0x09:  mov    %eax,0x8(%esp)
0868f6a7 +0x0d:  mov    0xc(%ebp),%eax
0868f6aa +0x10:  mov    %eax,0x4(%esp)
0868f6ae +0x14:  mov    0x8(%ebp),%eax
0868f6b1 +0x17:  mov    %eax,(%esp)
0868f6b4 +0x1a:  call   0868f60e <_ZN5CUser26verifyStackableItemProcessEN15StackableAction4TypeEPK5CItem>  ; CUser::verifyStackableItemProcess(StackableAction::Type, CItem const*)
0868f6b9 +0x1f:  leave
0868f6ba +0x20:  ret
0868f6bb +0x21:  nop
```

## 反编译 C

```c
// CUser::verifyStackableItemActionPlace @ 0x868f69a

/* CUser::verifyStackableItemActionPlace(StackableAction::Type, CItem const*) */

void __thiscall
CUser::verifyStackableItemActionPlace(CUser *this,undefined4 param_2,undefined4 param_3)

{
  verifyStackableItemProcess(this,param_2,param_3);
  return;
}
```
