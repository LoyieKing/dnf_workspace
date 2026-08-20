# getRankBonusIndex

`_ZNK12CDataManager17getRankBonusIndexEi`

`CDataManager::getRankBonusIndex(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08363838` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08363838  _ZNK12CDataManager17getRankBonusIndexEi
#           CDataManager::getRankBonusIndex(int) const
# range [0x08363838, 0x083638bf]
08363838 +0x00:  push   %ebp
08363839 +0x01:  mov    %esp,%ebp
0836383b +0x03:  mov    0x8(%ebp),%eax
0836383e +0x06:  movzwl 0x512c(%eax),%eax
08363845 +0x0d:  movzwl %ax,%eax
08363848 +0x10:  cmp    0xc(%ebp),%eax
0836384b +0x13:  jg     08363854 <+0x1c>
0836384d +0x15:  mov    $0x4,%eax
08363852 +0x1a:  jmp    083638bd <+0x85>
08363854 +0x1c:  mov    0x8(%ebp),%eax
08363857 +0x1f:  movzwl 0x512e(%eax),%eax
0836385e +0x26:  movzwl %ax,%eax
08363861 +0x29:  cmp    0xc(%ebp),%eax
08363864 +0x2c:  jg     0836386d <+0x35>
08363866 +0x2e:  mov    $0x3,%eax
0836386b +0x33:  jmp    083638bd <+0x85>
0836386d +0x35:  mov    0x8(%ebp),%eax
08363870 +0x38:  movzwl 0x5130(%eax),%eax
08363877 +0x3f:  movzwl %ax,%eax
0836387a +0x42:  cmp    0xc(%ebp),%eax
0836387d +0x45:  jg     08363886 <+0x4e>
0836387f +0x47:  mov    $0x2,%eax
08363884 +0x4c:  jmp    083638bd <+0x85>
08363886 +0x4e:  mov    0x8(%ebp),%eax
08363889 +0x51:  movzwl 0x5132(%eax),%eax
08363890 +0x58:  movzwl %ax,%eax
08363893 +0x5b:  cmp    0xc(%ebp),%eax
08363896 +0x5e:  jg     0836389f <+0x67>
08363898 +0x60:  mov    $0x1,%eax
0836389d +0x65:  jmp    083638bd <+0x85>
0836389f +0x67:  mov    0x8(%ebp),%eax
083638a2 +0x6a:  movzwl 0x5134(%eax),%eax
083638a9 +0x71:  movzwl %ax,%eax
083638ac +0x74:  cmp    0xc(%ebp),%eax
083638af +0x77:  jg     083638b8 <+0x80>
083638b1 +0x79:  mov    $0x0,%eax
083638b6 +0x7e:  jmp    083638bd <+0x85>
083638b8 +0x80:  mov    $0xffffffff,%eax
083638bd +0x85:  pop    %ebp
083638be +0x86:  ret
083638bf +0x87:  nop
```

## 反编译 C

```c
// CDataManager::getRankBonusIndex @ 0x8363838

/* CDataManager::getRankBonusIndex(int) const */

undefined4 __thiscall CDataManager::getRankBonusIndex(CDataManager *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < (int)(uint)*(ushort *)(this + 0x512c)) {
    if (param_1 < (int)(uint)*(ushort *)(this + 0x512e)) {
      if (param_1 < (int)(uint)*(ushort *)(this + 0x5130)) {
        if (param_1 < (int)(uint)*(ushort *)(this + 0x5132)) {
          if (param_1 < (int)(uint)*(ushort *)(this + 0x5134)) {
            uVar1 = 0xffffffff;
          }
          else {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}
```
