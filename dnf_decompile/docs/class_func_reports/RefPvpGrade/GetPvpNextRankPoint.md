# GetPvpNextRankPoint

`_ZNK11RefPvpGrade19GetPvpNextRankPointEi`

`RefPvpGrade::GetPvpNextRankPoint(int) const`

| 类 | 地址 |
|---|---|
| `RefPvpGrade` | `0x085d4860` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4860  _ZNK11RefPvpGrade19GetPvpNextRankPointEi
#           RefPvpGrade::GetPvpNextRankPoint(int) const
# range [0x085d4860, 0x085d487f]
085d4860 +0x00:  push   %ebp
085d4861 +0x01:  mov    %esp,%ebp
085d4863 +0x03:  cmpl   $0x25,0xc(%ebp)
085d4867 +0x07:  jle    085d4874 <+0x14>
085d4869 +0x09:  mov    0x8(%ebp),%eax
085d486c +0x0c:  mov    0x130(%eax),%eax
085d4872 +0x12:  jmp    085d487e <+0x1e>
085d4874 +0x14:  mov    0xc(%ebp),%edx
085d4877 +0x17:  mov    0x8(%ebp),%eax
085d487a +0x1a:  mov    0x8(%eax,%edx,8),%eax
085d487e +0x1e:  pop    %ebp
085d487f +0x1f:  ret
```

## 反编译 C

```c
// RefPvpGrade::GetPvpNextRankPoint @ 0x85d4860

/* RefPvpGrade::GetPvpNextRankPoint(int) const */

undefined4 __thiscall RefPvpGrade::GetPvpNextRankPoint(RefPvpGrade *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x26) {
    uVar1 = *(undefined4 *)(this + param_1 * 8 + 8);
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x130);
  }
  return uVar1;
}
```
