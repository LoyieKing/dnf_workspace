# getNewRankIndex

`_ZNK12CDataManager15getNewRankIndexEi`

`CDataManager::getNewRankIndex(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08363c04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08363c04  _ZNK12CDataManager15getNewRankIndexEi
#           CDataManager::getNewRankIndex(int) const
# range [0x08363c04, 0x08363cdf]
08363c04 +0x00:  push   %ebp
08363c05 +0x01:  mov    %esp,%ebp
08363c07 +0x03:  mov    0x8(%ebp),%eax
08363c0a +0x06:  movzwl 0x512c(%eax),%eax
08363c11 +0x0d:  movzwl %ax,%eax
08363c14 +0x10:  cmp    0xc(%ebp),%eax
08363c17 +0x13:  jg     08363c23 <+0x1f>
08363c19 +0x15:  mov    $0x0,%eax
08363c1e +0x1a:  jmp    08363cdd <+0xd9>
08363c23 +0x1f:  mov    0x8(%ebp),%eax
08363c26 +0x22:  movzwl 0x512e(%eax),%eax
08363c2d +0x29:  movzwl %ax,%eax
08363c30 +0x2c:  cmp    0xc(%ebp),%eax
08363c33 +0x2f:  jg     08363c3f <+0x3b>
08363c35 +0x31:  mov    $0x1,%eax
08363c3a +0x36:  jmp    08363cdd <+0xd9>
08363c3f +0x3b:  mov    0x8(%ebp),%eax
08363c42 +0x3e:  movzwl 0x5130(%eax),%eax
08363c49 +0x45:  movzwl %ax,%eax
08363c4c +0x48:  cmp    0xc(%ebp),%eax
08363c4f +0x4b:  jg     08363c5b <+0x57>
08363c51 +0x4d:  mov    $0x2,%eax
08363c56 +0x52:  jmp    08363cdd <+0xd9>
08363c5b +0x57:  mov    0x8(%ebp),%eax
08363c5e +0x5a:  movzwl 0x5132(%eax),%eax
08363c65 +0x61:  movzwl %ax,%eax
08363c68 +0x64:  cmp    0xc(%ebp),%eax
08363c6b +0x67:  jg     08363c74 <+0x70>
08363c6d +0x69:  mov    $0x3,%eax
08363c72 +0x6e:  jmp    08363cdd <+0xd9>
08363c74 +0x70:  mov    0x8(%ebp),%eax
08363c77 +0x73:  movzwl 0x5134(%eax),%eax
08363c7e +0x7a:  movzwl %ax,%eax
08363c81 +0x7d:  cmp    0xc(%ebp),%eax
08363c84 +0x80:  jg     08363c8d <+0x89>
08363c86 +0x82:  mov    $0x4,%eax
08363c8b +0x87:  jmp    08363cdd <+0xd9>
08363c8d +0x89:  mov    0x8(%ebp),%eax
08363c90 +0x8c:  movzwl 0x5136(%eax),%eax
08363c97 +0x93:  movzwl %ax,%eax
08363c9a +0x96:  cmp    0xc(%ebp),%eax
08363c9d +0x99:  jg     08363ca6 <+0xa2>
08363c9f +0x9b:  mov    $0x5,%eax
08363ca4 +0xa0:  jmp    08363cdd <+0xd9>
08363ca6 +0xa2:  mov    0x8(%ebp),%eax
08363ca9 +0xa5:  movzwl 0x5138(%eax),%eax
08363cb0 +0xac:  movzwl %ax,%eax
08363cb3 +0xaf:  cmp    0xc(%ebp),%eax
08363cb6 +0xb2:  jg     08363cbf <+0xbb>
08363cb8 +0xb4:  mov    $0x6,%eax
08363cbd +0xb9:  jmp    08363cdd <+0xd9>
08363cbf +0xbb:  mov    0x8(%ebp),%eax
08363cc2 +0xbe:  movzwl 0x513a(%eax),%eax
08363cc9 +0xc5:  movzwl %ax,%eax
08363ccc +0xc8:  cmp    0xc(%ebp),%eax
08363ccf +0xcb:  jg     08363cd8 <+0xd4>
08363cd1 +0xcd:  mov    $0x7,%eax
08363cd6 +0xd2:  jmp    08363cdd <+0xd9>
08363cd8 +0xd4:  mov    $0x8,%eax
08363cdd +0xd9:  pop    %ebp
08363cde +0xda:  ret
08363cdf +0xdb:  nop
```

## 反编译 C

```c
// CDataManager::getNewRankIndex @ 0x8363c04

/* CDataManager::getNewRankIndex(int) const */

undefined4 __thiscall CDataManager::getNewRankIndex(CDataManager *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < (int)(uint)*(ushort *)(this + 0x512c)) {
    if (param_1 < (int)(uint)*(ushort *)(this + 0x512e)) {
      if (param_1 < (int)(uint)*(ushort *)(this + 0x5130)) {
        if (param_1 < (int)(uint)*(ushort *)(this + 0x5132)) {
          if (param_1 < (int)(uint)*(ushort *)(this + 0x5134)) {
            if (param_1 < (int)(uint)*(ushort *)(this + 0x5136)) {
              if (param_1 < (int)(uint)*(ushort *)(this + 0x5138)) {
                if (param_1 < (int)(uint)*(ushort *)(this + 0x513a)) {
                  uVar1 = 8;
                }
                else {
                  uVar1 = 7;
                }
              }
              else {
                uVar1 = 6;
              }
            }
            else {
              uVar1 = 5;
            }
          }
          else {
            uVar1 = 4;
          }
        }
        else {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
