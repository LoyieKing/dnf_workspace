# GetSpAtLevelUp

`_ZNK12CDataManager14GetSpAtLevelUpEi`

`CDataManager::GetSpAtLevelUp(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360cb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360cb8  _ZNK12CDataManager14GetSpAtLevelUpEi
#           CDataManager::GetSpAtLevelUp(int) const
# range [0x08360cb8, 0x08360cdf]
08360cb8 +0x00:  push   %ebp
08360cb9 +0x01:  mov    %esp,%ebp
08360cbb +0x03:  cmpl   $0x0,0xc(%ebp)
08360cbf +0x07:  jle    08360cc7 <+0xf>
08360cc1 +0x09:  cmpl   $0x5f,0xc(%ebp)
08360cc5 +0x0d:  jle    08360cce <+0x16>
08360cc7 +0x0f:  mov    $0x0,%eax
08360ccc +0x14:  jmp    08360cde <+0x26>
08360cce +0x16:  mov    0xc(%ebp),%edx
08360cd1 +0x19:  mov    0x8(%ebp),%eax
08360cd4 +0x1c:  add    $0x36a2,%edx
08360cda +0x22:  mov    0x8(%eax,%edx,4),%eax
08360cde +0x26:  pop    %ebp
08360cdf +0x27:  ret
```

## 反编译 C

```c
// CDataManager::GetSpAtLevelUp @ 0x8360cb8

/* CDataManager::GetSpAtLevelUp(int) const */

undefined4 __thiscall CDataManager::GetSpAtLevelUp(CDataManager *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (0x5f < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x36a2) * 4 + 8);
  }
  return uVar1;
}
```
