# UseUpCoin

`_ZN10CInventory9UseUpCoinEj`

`CInventory::UseUpCoin(unsigned int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fa9d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fa9d4  _ZN10CInventory9UseUpCoinEj
#           CInventory::UseUpCoin(unsigned int)
# range [0x084fa9d4, 0x084faa97]
084fa9d4 +0x00:  push   %ebp
084fa9d5 +0x01:  mov    %esp,%ebp
084fa9d7 +0x03:  mov    0x8(%ebp),%eax
084fa9da +0x06:  mov    0x8(%eax),%eax
084fa9dd +0x09:  cmp    0xc(%ebp),%eax
084fa9e0 +0x0c:  jbe    084fa9fc <+0x28>
084fa9e2 +0x0e:  mov    0x8(%ebp),%eax
084fa9e5 +0x11:  mov    0x8(%eax),%eax
084fa9e8 +0x14:  mov    %eax,%edx
084fa9ea +0x16:  sub    0xc(%ebp),%edx
084fa9ed +0x19:  mov    0x8(%ebp),%eax
084fa9f0 +0x1c:  mov    %edx,0x8(%eax)
084fa9f3 +0x1f:  movl   $0x0,0xc(%ebp)
084fa9fa +0x26:  jmp    084faa0f <+0x3b>
084fa9fc +0x28:  mov    0x8(%ebp),%eax
084fa9ff +0x2b:  mov    0x8(%eax),%eax
084faa02 +0x2e:  sub    %eax,0xc(%ebp)
084faa05 +0x31:  mov    0x8(%ebp),%eax
084faa08 +0x34:  movl   $0x0,0x8(%eax)
084faa0f +0x3b:  mov    0x8(%ebp),%eax
084faa12 +0x3e:  mov    0x10(%eax),%eax
084faa15 +0x41:  cmp    0xc(%ebp),%eax
084faa18 +0x44:  jbe    084faa34 <+0x60>
084faa1a +0x46:  mov    0x8(%ebp),%eax
084faa1d +0x49:  mov    0x10(%eax),%eax
084faa20 +0x4c:  mov    %eax,%edx
084faa22 +0x4e:  sub    0xc(%ebp),%edx
084faa25 +0x51:  mov    0x8(%ebp),%eax
084faa28 +0x54:  mov    %edx,0x10(%eax)
084faa2b +0x57:  movl   $0x0,0xc(%ebp)
084faa32 +0x5e:  jmp    084faa47 <+0x73>
084faa34 +0x60:  mov    0x8(%ebp),%eax
084faa37 +0x63:  mov    0x10(%eax),%eax
084faa3a +0x66:  sub    %eax,0xc(%ebp)
084faa3d +0x69:  mov    0x8(%ebp),%eax
084faa40 +0x6c:  movl   $0x0,0x10(%eax)
084faa47 +0x73:  mov    0x8(%ebp),%eax
084faa4a +0x76:  mov    0xc(%eax),%eax
084faa4d +0x79:  cmp    0xc(%ebp),%eax
084faa50 +0x7c:  jbe    084faa6c <+0x98>
084faa52 +0x7e:  mov    0x8(%ebp),%eax
084faa55 +0x81:  mov    0xc(%eax),%eax
084faa58 +0x84:  mov    %eax,%edx
084faa5a +0x86:  sub    0xc(%ebp),%edx
084faa5d +0x89:  mov    0x8(%ebp),%eax
084faa60 +0x8c:  mov    %edx,0xc(%eax)
084faa63 +0x8f:  movl   $0x0,0xc(%ebp)
084faa6a +0x96:  jmp    084faa7f <+0xab>
084faa6c +0x98:  mov    0x8(%ebp),%eax
084faa6f +0x9b:  mov    0xc(%eax),%eax
084faa72 +0x9e:  sub    %eax,0xc(%ebp)
084faa75 +0xa1:  mov    0x8(%ebp),%eax
084faa78 +0xa4:  movl   $0x0,0xc(%eax)
084faa7f +0xab:  mov    0x8(%ebp),%eax
084faa82 +0xae:  mov    0x8(%eax),%edx
084faa85 +0xb1:  mov    0x8(%ebp),%eax
084faa88 +0xb4:  mov    0x10(%eax),%eax
084faa8b +0xb7:  add    %eax,%edx
084faa8d +0xb9:  mov    0x8(%ebp),%eax
084faa90 +0xbc:  mov    0xc(%eax),%eax
084faa93 +0xbf:  lea    (%edx,%eax,1),%eax
084faa96 +0xc2:  pop    %ebp
084faa97 +0xc3:  ret
```

## 反编译 C

```c
// CInventory::UseUpCoin @ 0x84fa9d4

/* CInventory::UseUpCoin(unsigned int) */

int __thiscall CInventory::UseUpCoin(CInventory *this,uint param_1)

{
  if (param_1 < *(uint *)(this + 8)) {
    *(uint *)(this + 8) = *(int *)(this + 8) - param_1;
    param_1 = 0;
  }
  else {
    param_1 = param_1 - *(int *)(this + 8);
    *(undefined4 *)(this + 8) = 0;
  }
  if (param_1 < *(uint *)(this + 0x10)) {
    *(uint *)(this + 0x10) = *(int *)(this + 0x10) - param_1;
    param_1 = 0;
  }
  else {
    param_1 = param_1 - *(int *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (param_1 < *(uint *)(this + 0xc)) {
    *(uint *)(this + 0xc) = *(int *)(this + 0xc) - param_1;
  }
  else {
    *(undefined4 *)(this + 0xc) = 0;
  }
  return *(int *)(this + 8) + *(int *)(this + 0x10) + *(int *)(this + 0xc);
}
```
