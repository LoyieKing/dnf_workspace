# GetItemSpace

`_ZNK10Inven_Item12GetItemSpaceEv`

`Inven_Item::GetItemSpace() const`

| 类 | 地址 |
|---|---|
| `Inven_Item` | `0x083481e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083481e2  _ZNK10Inven_Item12GetItemSpaceEv
#           Inven_Item::GetItemSpace() const
# range [0x083481e2, 0x08348253]
083481e2 +0x00:  push   %ebp
083481e3 +0x01:  mov    %esp,%ebp
083481e5 +0x03:  push   %ebx
083481e6 +0x04:  sub    $0x10,%esp
083481e9 +0x07:  mov    0x8(%ebp),%eax
083481ec +0x0a:  movzbl 0x1(%eax),%eax
083481f0 +0x0e:  movzbl %al,%eax
083481f3 +0x11:  cmp    $0xa,%eax
083481f6 +0x14:  ja     08348243 <+0x61>
083481f8 +0x16:  mov    $0x1,%edx
083481fd +0x1b:  mov    %edx,%ebx
083481ff +0x1d:  mov    %eax,%ecx
08348201 +0x1f:  shl    %cl,%ebx
08348203 +0x21:  mov    %ebx,%eax
08348205 +0x23:  mov    %eax,%edx
08348207 +0x25:  and    $0x61f,%edx
0834820d +0x2b:  test   %edx,%edx
0834820f +0x2d:  jne    08348228 <+0x46>
08348211 +0x2f:  mov    %eax,%edx
08348213 +0x31:  and    $0x100,%edx
08348219 +0x37:  test   %edx,%edx
0834821b +0x39:  jne    0834823a <+0x58>
0834821d +0x3b:  and    $0xe0,%eax
08348222 +0x40:  test   %eax,%eax
08348224 +0x42:  jne    08348231 <+0x4f>
08348226 +0x44:  jmp    08348243 <+0x61>
08348228 +0x46:  movl   $0x0,-0x8(%ebp)
0834822f +0x4d:  jmp    0834824a <+0x68>
08348231 +0x4f:  movl   $0x7,-0x8(%ebp)
08348238 +0x56:  jmp    0834824a <+0x68>
0834823a +0x58:  movl   $0x1,-0x8(%ebp)
08348241 +0x5f:  jmp    0834824a <+0x68>
08348243 +0x61:  movl   $0x0,-0x8(%ebp)
0834824a +0x68:  mov    -0x8(%ebp),%eax
0834824d +0x6b:  add    $0x10,%esp
08348250 +0x6e:  pop    %ebx
08348251 +0x6f:  pop    %ebp
08348252 +0x70:  ret
08348253 +0x71:  nop
```

## 反编译 C

```c
// Inven_Item::GetItemSpace @ 0x83481e2

/* Inven_Item::GetItemSpace() const */

undefined4 __thiscall Inven_Item::GetItemSpace(Inven_Item *this)

{
  uint uVar1;
  
  if ((byte)this[1] < 0xb) {
    uVar1 = 1 << ((byte)this[1] & 0x1f);
    if ((uVar1 & 0x61f) != 0) {
      return 0;
    }
    if ((uVar1 & 0x100) != 0) {
      return 1;
    }
    if ((uVar1 & 0xe0) != 0) {
      return 7;
    }
  }
  return 0;
}
```
