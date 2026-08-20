# isMaterialItemIndex

`_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption19isMaterialItemIndexEi`

`ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex(int)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarFixedHiddenOption` | `0x088b0170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b0170  _ZN4ARAD6SCRIPT23AvatarFixedHiddenOption19isMaterialItemIndexEi
#           ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex(int)
# range [0x088b0170, 0x088b018b]
088b0170 +0x00:  push   %ebp
088b0171 +0x01:  mov    %esp,%ebp
088b0173 +0x03:  mov    0x8(%ebp),%eax
088b0176 +0x06:  mov    0x48(%eax),%eax
088b0179 +0x09:  cmp    0xc(%ebp),%eax
088b017c +0x0c:  jne    088b0185 <+0x15>
088b017e +0x0e:  mov    $0x1,%eax
088b0183 +0x13:  jmp    088b018a <+0x1a>
088b0185 +0x15:  mov    $0x0,%eax
088b018a +0x1a:  pop    %ebp
088b018b +0x1b:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex @ 0x88b0170

/* ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex(int) */

bool __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex
          (AvatarFixedHiddenOption *this,int param_1)

{
  return *(int *)(this + 0x48) == param_1;
}
```
