# GetAce

`_ZNK8PvP_Room6GetAceEv`

`PvP_Room::GetAce() const`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc64c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc64c  _ZNK8PvP_Room6GetAceEv
#           PvP_Room::GetAce() const
# range [0x085dc64c, 0x085dc6ed]
085dc64c +0x00:  push   %ebp
085dc64d +0x01:  mov    %esp,%ebp
085dc64f +0x03:  sub    $0x10,%esp
085dc652 +0x06:  movl   $0xffffffff,-0xc(%ebp)
085dc659 +0x0d:  movl   $0xffffffff,-0x8(%ebp)
085dc660 +0x14:  movl   $0x0,-0x4(%ebp)
085dc667 +0x1b:  jmp    085dc6dd <+0x91>
085dc669 +0x1d:  mov    -0x4(%ebp),%edx
085dc66c +0x20:  mov    0x8(%ebp),%eax
085dc66f +0x23:  add    $0xc,%edx
085dc672 +0x26:  mov    (%eax,%edx,4),%eax
085dc675 +0x29:  test   %eax,%eax
085dc677 +0x2b:  je     085dc6d9 <+0x8d>
085dc679 +0x2d:  mov    -0x4(%ebp),%edx
085dc67c +0x30:  mov    0x8(%ebp),%eax
085dc67f +0x33:  add    $0x24,%edx
085dc682 +0x36:  mov    0x8(%eax,%edx,4),%eax
085dc686 +0x3a:  cmp    -0x8(%ebp),%eax
085dc689 +0x3d:  jle    085dc6a3 <+0x57>
085dc68b +0x3f:  mov    -0x4(%ebp),%edx
085dc68e +0x42:  mov    0x8(%ebp),%eax
085dc691 +0x45:  add    $0x24,%edx
085dc694 +0x48:  mov    0x8(%eax,%edx,4),%eax
085dc698 +0x4c:  mov    %eax,-0x8(%ebp)
085dc69b +0x4f:  mov    -0x4(%ebp),%eax
085dc69e +0x52:  mov    %eax,-0xc(%ebp)
085dc6a1 +0x55:  jmp    085dc6d9 <+0x8d>
085dc6a3 +0x57:  mov    -0x4(%ebp),%edx
085dc6a6 +0x5a:  mov    0x8(%ebp),%eax
085dc6a9 +0x5d:  add    $0x24,%edx
085dc6ac +0x60:  mov    0x8(%eax,%edx,4),%eax
085dc6b0 +0x64:  cmp    -0x8(%ebp),%eax
085dc6b3 +0x67:  jne    085dc6d9 <+0x8d>
085dc6b5 +0x69:  mov    -0xc(%ebp),%edx
085dc6b8 +0x6c:  mov    0x8(%ebp),%eax
085dc6bb +0x6f:  add    $0x1c,%edx
085dc6be +0x72:  mov    0x8(%eax,%edx,4),%edx
085dc6c2 +0x76:  mov    -0x4(%ebp),%ecx
085dc6c5 +0x79:  mov    0x8(%ebp),%eax
085dc6c8 +0x7c:  add    $0x1c,%ecx
085dc6cb +0x7f:  mov    0x8(%eax,%ecx,4),%eax
085dc6cf +0x83:  cmp    %eax,%edx
085dc6d1 +0x85:  jge    085dc6d9 <+0x8d>
085dc6d3 +0x87:  mov    -0x4(%ebp),%eax
085dc6d6 +0x8a:  mov    %eax,-0xc(%ebp)
085dc6d9 +0x8d:  addl   $0x1,-0x4(%ebp)
085dc6dd +0x91:  cmpl   $0x7,-0x4(%ebp)
085dc6e1 +0x95:  setle  %al
085dc6e4 +0x98:  test   %al,%al
085dc6e6 +0x9a:  jne    085dc669 <+0x1d>
085dc6e8 +0x9c:  mov    -0xc(%ebp),%eax
085dc6eb +0x9f:  leave
085dc6ec +0xa0:  ret
085dc6ed +0xa1:  nop
```

## 反编译 C

```c
// PvP_Room::GetAce @ 0x85dc64c

/* PvP_Room::GetAce() const */

int __thiscall PvP_Room::GetAce(PvP_Room *this)

{
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = -1;
  local_c = -1;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (*(int *)(this + (local_8 + 0xc) * 4) != 0) {
      if (local_c < *(int *)(this + (local_8 + 0x24) * 4 + 8)) {
        local_c = *(int *)(this + (local_8 + 0x24) * 4 + 8);
        local_10 = local_8;
      }
      else if ((*(int *)(this + (local_8 + 0x24) * 4 + 8) == local_c) &&
              (*(int *)(this + (local_10 + 0x1c) * 4 + 8) <
               *(int *)(this + (local_8 + 0x1c) * 4 + 8))) {
        local_10 = local_8;
      }
    }
  }
  return local_10;
}
```
