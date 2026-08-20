# get_avatar_slot_no

`_ZNK10CInventory18get_avatar_slot_noEi`

`CInventory::get_avatar_slot_no(int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850cd1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850cd1c  _ZNK10CInventory18get_avatar_slot_noEi
#           CInventory::get_avatar_slot_no(int) const
# range [0x0850cd1c, 0x0850cd61]
0850cd1c +0x00:  push   %ebp
0850cd1d +0x01:  mov    %esp,%ebp
0850cd1f +0x03:  sub    $0x10,%esp
0850cd22 +0x06:  movl   $0x0,-0x4(%ebp)
0850cd29 +0x0d:  jmp    0850cd50 <+0x34>
0850cd2b +0x0f:  mov    0x8(%ebp),%eax
0850cd2e +0x12:  mov    0x654(%eax),%edx
0850cd34 +0x18:  mov    -0x4(%ebp),%eax
0850cd37 +0x1b:  imul   $0x3d,%eax,%eax
0850cd3a +0x1e:  lea    (%edx,%eax,1),%eax
0850cd3d +0x21:  mov    0x2(%eax),%edx
0850cd40 +0x24:  mov    0xc(%ebp),%eax
0850cd43 +0x27:  cmp    %eax,%edx
0850cd45 +0x29:  jne    0850cd4c <+0x30>
0850cd47 +0x2b:  mov    -0x4(%ebp),%eax
0850cd4a +0x2e:  jmp    0850cd60 <+0x44>
0850cd4c +0x30:  addl   $0x1,-0x4(%ebp)
0850cd50 +0x34:  cmpl   $0x68,-0x4(%ebp)
0850cd54 +0x38:  setle  %al
0850cd57 +0x3b:  test   %al,%al
0850cd59 +0x3d:  jne    0850cd2b <+0xf>
0850cd5b +0x3f:  mov    $0xffffffff,%eax
0850cd60 +0x44:  leave
0850cd61 +0x45:  ret
```

## 反编译 C

```c
// CInventory::get_avatar_slot_no @ 0x850cd1c

/* CInventory::get_avatar_slot_no(int) const */

int __thiscall CInventory::get_avatar_slot_no(CInventory *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x68 < local_8) {
      return -1;
    }
    if (*(int *)(*(int *)(this + 0x654) + local_8 * 0x3d + 2) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
