# get_waiter_count

`_ZNK8PvP_Room16get_waiter_countEv`

`PvP_Room::get_waiter_count() const`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d6862` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d6862  _ZNK8PvP_Room16get_waiter_countEv
#           PvP_Room::get_waiter_count() const
# range [0x085d6862, 0x085d689f]
085d6862 +0x00:  push   %ebp
085d6863 +0x01:  mov    %esp,%ebp
085d6865 +0x03:  sub    $0x10,%esp
085d6868 +0x06:  movl   $0x0,-0x8(%ebp)
085d686f +0x0d:  movl   $0x0,-0x4(%ebp)
085d6876 +0x14:  jmp    085d6890 <+0x2e>
085d6878 +0x16:  mov    -0x4(%ebp),%edx
085d687b +0x19:  mov    0x8(%ebp),%eax
085d687e +0x1c:  add    $0xc,%edx
085d6881 +0x1f:  mov    (%eax,%edx,4),%eax
085d6884 +0x22:  test   %eax,%eax
085d6886 +0x24:  je     085d688c <+0x2a>
085d6888 +0x26:  addl   $0x1,-0x8(%ebp)
085d688c +0x2a:  addl   $0x1,-0x4(%ebp)
085d6890 +0x2e:  cmpl   $0x7,-0x4(%ebp)
085d6894 +0x32:  setle  %al
085d6897 +0x35:  test   %al,%al
085d6899 +0x37:  jne    085d6878 <+0x16>
085d689b +0x39:  mov    -0x8(%ebp),%eax
085d689e +0x3c:  leave
085d689f +0x3d:  ret
```

## 反编译 C

```c
// PvP_Room::get_waiter_count @ 0x85d6862

/* PvP_Room::get_waiter_count() const */

int __thiscall PvP_Room::get_waiter_count(PvP_Room *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (*(int *)(this + (local_8 + 0xc) * 4) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
