# get_inven_slot_no

`_ZNK10CInventory17get_inven_slot_noEi`

`CInventory::get_inven_slot_no(int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850cd62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850cd62  _ZNK10CInventory17get_inven_slot_noEi
#           CInventory::get_inven_slot_no(int) const
# range [0x0850cd62, 0x0850cdab]
0850cd62 +0x00:  push   %ebp
0850cd63 +0x01:  mov    %esp,%ebp
0850cd65 +0x03:  sub    $0x10,%esp
0850cd68 +0x06:  movl   $0x0,-0x4(%ebp)
0850cd6f +0x0d:  jmp    0850cd96 <+0x34>
0850cd71 +0x0f:  mov    0x8(%ebp),%eax
0850cd74 +0x12:  mov    0x650(%eax),%edx
0850cd7a +0x18:  mov    -0x4(%ebp),%eax
0850cd7d +0x1b:  imul   $0x3d,%eax,%eax
0850cd80 +0x1e:  lea    (%edx,%eax,1),%eax
0850cd83 +0x21:  mov    0x2(%eax),%edx
0850cd86 +0x24:  mov    0xc(%ebp),%eax
0850cd89 +0x27:  cmp    %eax,%edx
0850cd8b +0x29:  jne    0850cd92 <+0x30>
0850cd8d +0x2b:  mov    -0x4(%ebp),%eax
0850cd90 +0x2e:  jmp    0850cda9 <+0x47>
0850cd92 +0x30:  addl   $0x1,-0x4(%ebp)
0850cd96 +0x34:  cmpl   $0x137,-0x4(%ebp)
0850cd9d +0x3b:  setle  %al
0850cda0 +0x3e:  test   %al,%al
0850cda2 +0x40:  jne    0850cd71 <+0xf>
0850cda4 +0x42:  mov    $0xffffffff,%eax
0850cda9 +0x47:  leave
0850cdaa +0x48:  ret
0850cdab +0x49:  nop
```

## 反编译 C

```c
// CInventory::get_inven_slot_no @ 0x850cd62

/* CInventory::get_inven_slot_no(int) const */

int __thiscall CInventory::get_inven_slot_no(CInventory *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x137 < local_8) {
      return -1;
    }
    if (*(int *)(*(int *)(this + 0x650) + local_8 * 0x3d + 2) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
