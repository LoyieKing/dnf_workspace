# IsAvatarColorVariation

`_ZNK10CEquipItem22IsAvatarColorVariationEi`

`CEquipItem::IsAvatarColorVariation(int) const`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x085136c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085136c6  _ZNK10CEquipItem22IsAvatarColorVariationEi
#           CEquipItem::IsAvatarColorVariation(int) const
# range [0x085136c6, 0x085136eb]
085136c6 +0x00:  push   %ebp
085136c7 +0x01:  mov    %esp,%ebp
085136c9 +0x03:  cmpl   $0x0,0xc(%ebp)
085136cd +0x07:  js     085136d5 <+0xf>
085136cf +0x09:  cmpl   $0x1,0xc(%ebp)
085136d3 +0x0d:  jle    085136dc <+0x16>
085136d5 +0x0f:  mov    $0x0,%eax
085136da +0x14:  jmp    085136ea <+0x24>
085136dc +0x16:  mov    0xc(%ebp),%eax
085136df +0x19:  mov    0x8(%ebp),%edx
085136e2 +0x1c:  movzbl 0x218(%edx,%eax,1),%eax
085136ea +0x24:  pop    %ebp
085136eb +0x25:  ret
```

## 反编译 C

```c
// CEquipItem::IsAvatarColorVariation @ 0x85136c6

/* CEquipItem::IsAvatarColorVariation(int) const */

CEquipItem __thiscall CEquipItem::IsAvatarColorVariation(CEquipItem *this,int param_1)

{
  CEquipItem CVar1;
  
  if ((param_1 < 0) || (1 < param_1)) {
    CVar1 = (CEquipItem)0x0;
  }
  else {
    CVar1 = this[param_1 + 0x218];
  }
  return CVar1;
}
```
