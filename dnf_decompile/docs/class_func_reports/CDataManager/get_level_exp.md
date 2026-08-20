# get_level_exp

`_ZNK12CDataManager13get_level_expEi`

`CDataManager::get_level_exp(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360442` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360442  _ZNK12CDataManager13get_level_expEi
#           CDataManager::get_level_exp(int) const
# range [0x08360442, 0x0836046f]
08360442 +0x00:  push   %ebp
08360443 +0x01:  mov    %esp,%ebp
08360445 +0x03:  cmpl   $0x1,0xc(%ebp)
08360449 +0x07:  jle    08360454 <+0x12>
0836044b +0x09:  cmpl   $0xc8,0xc(%ebp)
08360452 +0x10:  jle    0836045b <+0x19>
08360454 +0x12:  mov    $0x0,%eax
08360459 +0x17:  jmp    0836046e <+0x2c>
0836045b +0x19:  mov    0xc(%ebp),%eax
0836045e +0x1c:  lea    -0x2(%eax),%edx
08360461 +0x1f:  mov    0x8(%ebp),%eax
08360464 +0x22:  add    $0x2aa0,%edx
0836046a +0x28:  mov    0x4(%eax,%edx,4),%eax
0836046e +0x2c:  pop    %ebp
0836046f +0x2d:  ret
```

## 反编译 C

```c
// CDataManager::get_level_exp @ 0x8360442

/* CDataManager::get_level_exp(int) const */

undefined4 __thiscall CDataManager::get_level_exp(CDataManager *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 2) || (200 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x2a9e) * 4 + 4);
  }
  return uVar1;
}
```
