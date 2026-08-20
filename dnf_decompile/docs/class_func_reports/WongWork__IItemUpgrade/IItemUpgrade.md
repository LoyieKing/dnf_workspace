# IItemUpgrade

`_ZN8WongWork12IItemUpgradeC1Ev`

`WongWork::IItemUpgrade::IItemUpgrade()`

| 类 | 地址 |
|---|---|
| `WongWork::IItemUpgrade` | `0x080fc834` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fc834  _ZN8WongWork12IItemUpgradeC1Ev
#           WongWork::IItemUpgrade::IItemUpgrade()
# range [0x080fc834, 0x080fc841]
080fc834 +0x00:  push   %ebp
080fc835 +0x01:  mov    %esp,%ebp
080fc837 +0x03:  mov    0x8(%ebp),%eax
080fc83a +0x06:  movl   $&_ZTVN8WongWork12IItemUpgradeE+0x8,(%eax)
080fc840 +0x0c:  pop    %ebp
080fc841 +0x0d:  ret
```

## 反编译 C

```c
// WongWork::IItemUpgrade::IItemUpgrade @ 0x80fc834

/* WongWork::IItemUpgrade::IItemUpgrade() */

void __thiscall WongWork::IItemUpgrade::IItemUpgrade(IItemUpgrade *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_08b3fa38;
  return;
}
```
