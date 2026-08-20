# SetSlotNo

`_ZN13user_creature13CCreatureItem9SetSlotNoEi`

`user_creature::CCreatureItem::SetSlotNo(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureItem` | `0x08337050` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08337050  _ZN13user_creature13CCreatureItem9SetSlotNoEi
#           user_creature::CCreatureItem::SetSlotNo(int)
# range [0x08337050, 0x0833705d]
08337050 +0x00:  push   %ebp
08337051 +0x01:  mov    %esp,%ebp
08337053 +0x03:  mov    0x8(%ebp),%eax
08337056 +0x06:  mov    0xc(%ebp),%edx
08337059 +0x09:  mov    %edx,0x10(%eax)
0833705c +0x0c:  pop    %ebp
0833705d +0x0d:  ret
```

## 反编译 C

```c
// user_creature::CCreatureItem::SetSlotNo @ 0x8337050

/* user_creature::CCreatureItem::SetSlotNo(int) */

void __thiscall user_creature::CCreatureItem::SetSlotNo(CCreatureItem *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  return;
}
```
