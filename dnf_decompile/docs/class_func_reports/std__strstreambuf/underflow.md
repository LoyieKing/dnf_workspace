# underflow

`_ZNSt12strstreambuf9underflowEv`

`std::strstreambuf::underflow()`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dd540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dd540  _ZNSt12strstreambuf9underflowEv
#           std::strstreambuf::underflow()
# range [0x086dd540, 0x086dd56f]
086dd540 +0x00:  push   %ebp
086dd541 +0x01:  mov    %esp,%ebp
086dd543 +0x03:  mov    0x8(%ebp),%eax
086dd546 +0x06:  mov    0x8(%eax),%edx
086dd549 +0x09:  cmp    0xc(%eax),%edx
086dd54c +0x0c:  je     086dd558 <+0x18>
086dd54e +0x0e:  movzbl (%edx),%eax
086dd551 +0x11:  pop    %ebp
086dd552 +0x12:  ret
086dd553 +0x13:  nop
086dd554 +0x14:  lea    0x0(%esi,%eiz,1),%esi
086dd558 +0x18:  mov    0x14(%eax),%ecx
086dd55b +0x1b:  test   %ecx,%ecx
086dd55d +0x1d:  je     086dd568 <+0x28>
086dd55f +0x1f:  cmp    %ecx,%edx
086dd561 +0x21:  jae    086dd568 <+0x28>
086dd563 +0x23:  mov    %ecx,0xc(%eax)
086dd566 +0x26:  jmp    086dd54e <+0xe>
086dd568 +0x28:  mov    $0xffffffff,%eax
086dd56d +0x2d:  pop    %ebp
086dd56e +0x2e:  ret
086dd56f +0x2f:  nop
```

## 反编译 C

```c
// std::strstreambuf::underflow @ 0x86dd540

/* std::strstreambuf::underflow() */

uint __thiscall std::strstreambuf::underflow(strstreambuf *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(this + 8);
  if (pbVar1 == *(byte **)(this + 0xc)) {
    pbVar2 = *(byte **)(this + 0x14);
    if ((pbVar2 == (byte *)0x0) || (pbVar2 <= pbVar1)) {
      return 0xffffffff;
    }
    *(byte **)(this + 0xc) = pbVar2;
  }
  return (uint)*pbVar1;
}
```
