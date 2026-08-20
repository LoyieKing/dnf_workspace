# GetInventoryType

`_ZN10Inven_Item16GetInventoryTypeEv`

`Inven_Item::GetInventoryType()`

| 类 | 地址 |
|---|---|
| `Inven_Item` | `0x08348170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08348170  _ZN10Inven_Item16GetInventoryTypeEv
#           Inven_Item::GetInventoryType()
# range [0x08348170, 0x083481e1]
08348170 +0x00:  push   %ebp
08348171 +0x01:  mov    %esp,%ebp
08348173 +0x03:  push   %ebx
08348174 +0x04:  sub    $0x10,%esp
08348177 +0x07:  mov    0x8(%ebp),%eax
0834817a +0x0a:  movzbl 0x1(%eax),%eax
0834817e +0x0e:  movzbl %al,%eax
08348181 +0x11:  cmp    $0xa,%eax
08348184 +0x14:  ja     083481d1 <+0x61>
08348186 +0x16:  mov    $0x1,%edx
0834818b +0x1b:  mov    %edx,%ebx
0834818d +0x1d:  mov    %eax,%ecx
0834818f +0x1f:  shl    %cl,%ebx
08348191 +0x21:  mov    %ebx,%eax
08348193 +0x23:  mov    %eax,%edx
08348195 +0x25:  and    $0x61f,%edx
0834819b +0x2b:  test   %edx,%edx
0834819d +0x2d:  jne    083481b6 <+0x46>
0834819f +0x2f:  mov    %eax,%edx
083481a1 +0x31:  and    $0x100,%edx
083481a7 +0x37:  test   %edx,%edx
083481a9 +0x39:  jne    083481bf <+0x4f>
083481ab +0x3b:  and    $0xe0,%eax
083481b0 +0x40:  test   %eax,%eax
083481b2 +0x42:  jne    083481c8 <+0x58>
083481b4 +0x44:  jmp    083481d1 <+0x61>
083481b6 +0x46:  movl   $0x1,-0x8(%ebp)
083481bd +0x4d:  jmp    083481d8 <+0x68>
083481bf +0x4f:  movl   $0x2,-0x8(%ebp)
083481c6 +0x56:  jmp    083481d8 <+0x68>
083481c8 +0x58:  movl   $0x3,-0x8(%ebp)
083481cf +0x5f:  jmp    083481d8 <+0x68>
083481d1 +0x61:  movl   $0x1,-0x8(%ebp)
083481d8 +0x68:  mov    -0x8(%ebp),%eax
083481db +0x6b:  add    $0x10,%esp
083481de +0x6e:  pop    %ebx
083481df +0x6f:  pop    %ebp
083481e0 +0x70:  ret
083481e1 +0x71:  nop
```

## 反编译 C

```c
// Inven_Item::GetInventoryType @ 0x8348170

/* Inven_Item::GetInventoryType() */

undefined4 __thiscall Inven_Item::GetInventoryType(Inven_Item *this)

{
  uint uVar1;
  
  if ((byte)this[1] < 0xb) {
    uVar1 = 1 << ((byte)this[1] & 0x1f);
    if ((uVar1 & 0x61f) != 0) {
      return 1;
    }
    if ((uVar1 & 0x100) != 0) {
      return 2;
    }
    if ((uVar1 & 0xe0) != 0) {
      return 3;
    }
  }
  return 1;
}
```
