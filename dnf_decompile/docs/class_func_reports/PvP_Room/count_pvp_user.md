# count_pvp_user

`_ZN8PvP_Room14count_pvp_userEv`

`PvP_Room::count_pvp_user()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085da840` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085da840  _ZN8PvP_Room14count_pvp_userEv
#           PvP_Room::count_pvp_user()
# range [0x085da840, 0x085da881]
085da840 +0x00:  push   %ebp
085da841 +0x01:  mov    %esp,%ebp
085da843 +0x03:  sub    $0x10,%esp
085da846 +0x06:  movl   $0x0,-0x8(%ebp)
085da84d +0x0d:  movl   $0x0,-0x4(%ebp)
085da854 +0x14:  jmp    085da871 <+0x31>
085da856 +0x16:  mov    -0x4(%ebp),%edx
085da859 +0x19:  mov    0x8(%ebp),%eax
085da85c +0x1c:  add    $0xc,%edx
085da85f +0x1f:  mov    (%eax,%edx,4),%eax
085da862 +0x22:  test   %eax,%eax
085da864 +0x24:  je     085da86c <+0x2c>
085da866 +0x26:  addl   $0x1,-0x8(%ebp)
085da86a +0x2a:  jmp    085da86d <+0x2d>
085da86c +0x2c:  nop
085da86d +0x2d:  addl   $0x1,-0x4(%ebp)
085da871 +0x31:  cmpl   $0x7,-0x4(%ebp)
085da875 +0x35:  setle  %al
085da878 +0x38:  test   %al,%al
085da87a +0x3a:  jne    085da856 <+0x16>
085da87c +0x3c:  mov    -0x8(%ebp),%eax
085da87f +0x3f:  leave
085da880 +0x40:  ret
085da881 +0x41:  nop
```

## 反编译 C

```c
// PvP_Room::count_pvp_user @ 0x85da840

/* PvP_Room::count_pvp_user() */

int __thiscall PvP_Room::count_pvp_user(PvP_Room *this)

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
