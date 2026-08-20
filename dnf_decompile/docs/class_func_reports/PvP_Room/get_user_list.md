# get_user_list

`_ZN8PvP_Room13get_user_listEPv`

`PvP_Room::get_user_list(void*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d932a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d932a  _ZN8PvP_Room13get_user_listEPv
#           PvP_Room::get_user_list(void*)
# range [0x085d932a, 0x085d9357]
085d932a +0x00:  push   %ebp
085d932b +0x01:  mov    %esp,%ebp
085d932d +0x03:  sub    $0x18,%esp
085d9330 +0x06:  mov    0x8(%ebp),%eax
085d9333 +0x09:  mov    0x6e4(%eax),%eax
085d9339 +0x0f:  mov    (%eax),%eax
085d933b +0x11:  add    $0x14,%eax
085d933e +0x14:  mov    (%eax),%ecx
085d9340 +0x16:  mov    0x8(%ebp),%eax
085d9343 +0x19:  mov    0x6e4(%eax),%eax
085d9349 +0x1f:  mov    0xc(%ebp),%edx
085d934c +0x22:  mov    %edx,0x4(%esp)
085d9350 +0x26:  mov    %eax,(%esp)
085d9353 +0x29:  call   *%ecx
085d9355 +0x2b:  leave
085d9356 +0x2c:  ret
085d9357 +0x2d:  nop
```

## 反编译 C

```c
// PvP_Room::get_user_list @ 0x85d932a

/* PvP_Room::get_user_list(void*) */

void __thiscall PvP_Room::get_user_list(PvP_Room *this,void *param_1)

{
  (**(code **)(**(int **)(this + 0x6e4) + 0x14))(*(undefined4 *)(this + 0x6e4),param_1);
  return;
}
```
