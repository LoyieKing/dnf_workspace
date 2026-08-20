# check_slot_empty

`_ZNK10CInventory16check_slot_emptyEi`

`CInventory::check_slot_empty(int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08504f24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08504f24  _ZNK10CInventory16check_slot_emptyEi
#           CInventory::check_slot_empty(int) const
# range [0x08504f24, 0x08504f63]
08504f24 +0x00:  push   %ebp
08504f25 +0x01:  mov    %esp,%ebp
08504f27 +0x03:  cmpl   $0x137,0xc(%ebp)
08504f2e +0x0a:  jg     08504f36 <+0x12>
08504f30 +0x0c:  cmpl   $0x0,0xc(%ebp)
08504f34 +0x10:  jg     08504f3d <+0x19>
08504f36 +0x12:  mov    $0x0,%eax
08504f3b +0x17:  jmp    08504f62 <+0x3e>
08504f3d +0x19:  mov    0x8(%ebp),%eax
08504f40 +0x1c:  mov    0x650(%eax),%edx
08504f46 +0x22:  mov    0xc(%ebp),%eax
08504f49 +0x25:  imul   $0x3d,%eax,%eax
08504f4c +0x28:  lea    (%edx,%eax,1),%eax
08504f4f +0x2b:  mov    0x2(%eax),%eax
08504f52 +0x2e:  test   %eax,%eax
08504f54 +0x30:  jne    08504f5d <+0x39>
08504f56 +0x32:  mov    $0x1,%eax
08504f5b +0x37:  jmp    08504f62 <+0x3e>
08504f5d +0x39:  mov    $0x0,%eax
08504f62 +0x3e:  pop    %ebp
08504f63 +0x3f:  ret
```

## 反编译 C

```c
// CInventory::check_slot_empty @ 0x8504f24

/* CInventory::check_slot_empty(int) const */

undefined4 __thiscall CInventory::check_slot_empty(CInventory *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x138) && (0 < param_1)) {
    if (*(int *)(*(int *)(this + 0x650) + param_1 * 0x3d + 2) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
