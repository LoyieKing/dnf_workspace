# checkMoveFirstZone

`_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE`

`BlueMarble::checkMoveFirstZone(int, BlueMarbleTileScript::Type)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d78f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d78f0  _ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE
#           BlueMarble::checkMoveFirstZone(int, BlueMarbleTileScript::Type)
# range [0x080d78f0, 0x080d7939]
080d78f0 +0x00:  push   %ebp
080d78f1 +0x01:  mov    %esp,%ebp
080d78f3 +0x03:  sub    $0x18,%esp
080d78f6 +0x06:  mov    0x10(%ebp),%eax
080d78f9 +0x09:  cmp    $0x9,%eax
080d78fc +0x0c:  jl     080d7932 <+0x42>
080d78fe +0x0e:  cmp    $0xa,%eax
080d7901 +0x11:  jle    080d790f <+0x1f>
080d7903 +0x13:  cmp    $0xd,%eax
080d7906 +0x16:  jg     080d7932 <+0x42>
080d7908 +0x18:  mov    $0x0,%eax
080d790d +0x1d:  jmp    080d7937 <+0x47>
080d790f +0x1f:  mov    0xc(%ebp),%eax
080d7912 +0x22:  mov    %eax,0x4(%esp)
080d7916 +0x26:  mov    0x8(%ebp),%eax
080d7919 +0x29:  mov    %eax,(%esp)
080d791c +0x2c:  call   080d7012 <_ZNK10BlueMarble15getMovePositionEi>  ; BlueMarble::getMovePosition(int) const
080d7921 +0x31:  cmp    $0x1,%eax
080d7924 +0x34:  setne  %al
080d7927 +0x37:  test   %al,%al
080d7929 +0x39:  je     080d7932 <+0x42>
080d792b +0x3b:  mov    $0x0,%eax
080d7930 +0x40:  jmp    080d7937 <+0x47>
080d7932 +0x42:  mov    $0x1,%eax
080d7937 +0x47:  leave
080d7938 +0x48:  ret
080d7939 +0x49:  nop
```

## 反编译 C

```c
// BlueMarble::checkMoveFirstZone @ 0x80d78f0

/* BlueMarble::checkMoveFirstZone(int, BlueMarbleTileScript::Type) */

undefined4 __thiscall BlueMarble::checkMoveFirstZone(BlueMarble *this,int param_1,int param_3)

{
  int iVar1;
  
  if (8 < param_3) {
    if (param_3 < 0xb) {
      iVar1 = getMovePosition(this,param_1);
      if (iVar1 != 1) {
        return 0;
      }
    }
    else if (param_3 < 0xe) {
      return 0;
    }
  }
  return 1;
}
```
