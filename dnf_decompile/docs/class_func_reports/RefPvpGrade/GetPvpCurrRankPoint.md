# GetPvpCurrRankPoint

`_ZNK11RefPvpGrade19GetPvpCurrRankPointEi`

`RefPvpGrade::GetPvpCurrRankPoint(int) const`

| 类 | 地址 |
|---|---|
| `RefPvpGrade` | `0x085d4880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4880  _ZNK11RefPvpGrade19GetPvpCurrRankPointEi
#           RefPvpGrade::GetPvpCurrRankPoint(int) const
# range [0x085d4880, 0x085d489f]
085d4880 +0x00:  push   %ebp
085d4881 +0x01:  mov    %esp,%ebp
085d4883 +0x03:  cmpl   $0x25,0xc(%ebp)
085d4887 +0x07:  jle    085d4894 <+0x14>
085d4889 +0x09:  mov    0x8(%ebp),%eax
085d488c +0x0c:  mov    0x12c(%eax),%eax
085d4892 +0x12:  jmp    085d489e <+0x1e>
085d4894 +0x14:  mov    0xc(%ebp),%edx
085d4897 +0x17:  mov    0x8(%ebp),%eax
085d489a +0x1a:  mov    0x4(%eax,%edx,8),%eax
085d489e +0x1e:  pop    %ebp
085d489f +0x1f:  ret
```

## 反编译 C

```c
// RefPvpGrade::GetPvpCurrRankPoint @ 0x85d4880

/* RefPvpGrade::GetPvpCurrRankPoint(int) const */

undefined4 __thiscall RefPvpGrade::GetPvpCurrRankPoint(RefPvpGrade *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x26) {
    uVar1 = *(undefined4 *)(this + param_1 * 8 + 4);
  }
  else {
    uVar1 = *(undefined4 *)(this + 300);
  }
  return uVar1;
}
```
