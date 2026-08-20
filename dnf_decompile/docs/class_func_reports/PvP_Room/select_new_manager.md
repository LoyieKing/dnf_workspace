# select_new_manager

`_ZN8PvP_Room18select_new_managerEv`

`PvP_Room::select_new_manager()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d7ef4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d7ef4  _ZN8PvP_Room18select_new_managerEv
#           PvP_Room::select_new_manager()
# range [0x085d7ef4, 0x085d7f6b]
085d7ef4 +0x00:  push   %ebp
085d7ef5 +0x01:  mov    %esp,%ebp
085d7ef7 +0x03:  sub    $0x10,%esp
085d7efa +0x06:  movl   $0x0,-0x4(%ebp)
085d7f01 +0x0d:  jmp    085d7f5a <+0x66>
085d7f03 +0x0f:  mov    -0x4(%ebp),%edx
085d7f06 +0x12:  mov    0x8(%ebp),%eax
085d7f09 +0x15:  add    $0xc,%edx
085d7f0c +0x18:  mov    (%eax,%edx,4),%eax
085d7f0f +0x1b:  test   %eax,%eax
085d7f11 +0x1d:  je     085d7f56 <+0x62>
085d7f13 +0x1f:  mov    -0x4(%ebp),%edx
085d7f16 +0x22:  mov    0x8(%ebp),%eax
085d7f19 +0x25:  add    $0xc,%edx
085d7f1c +0x28:  mov    (%eax,%edx,4),%edx
085d7f1f +0x2b:  mov    0x8(%ebp),%eax
085d7f22 +0x2e:  mov    0x28(%eax),%eax
085d7f25 +0x31:  cmp    %eax,%edx
085d7f27 +0x33:  je     085d7f56 <+0x62>
085d7f29 +0x35:  mov    -0x4(%ebp),%edx
085d7f2c +0x38:  mov    0x8(%ebp),%eax
085d7f2f +0x3b:  add    $0xc,%edx
085d7f32 +0x3e:  mov    (%eax,%edx,4),%edx
085d7f35 +0x41:  mov    0x8(%ebp),%eax
085d7f38 +0x44:  mov    %edx,0x28(%eax)
085d7f3b +0x47:  mov    0x8(%ebp),%eax
085d7f3e +0x4a:  mov    -0x4(%ebp),%edx
085d7f41 +0x4d:  mov    %edx,0x2c(%eax)
085d7f44 +0x50:  mov    -0x4(%ebp),%eax
085d7f47 +0x53:  mov    0x8(%ebp),%edx
085d7f4a +0x56:  movb   $0x0,0x70(%edx,%eax,1)
085d7f4f +0x5b:  mov    $0x1,%eax
085d7f54 +0x60:  jmp    085d7f6a <+0x76>
085d7f56 +0x62:  addl   $0x1,-0x4(%ebp)
085d7f5a +0x66:  cmpl   $0x7,-0x4(%ebp)
085d7f5e +0x6a:  setle  %al
085d7f61 +0x6d:  test   %al,%al
085d7f63 +0x6f:  jne    085d7f03 <+0xf>
085d7f65 +0x71:  mov    $0x0,%eax
085d7f6a +0x76:  leave
085d7f6b +0x77:  ret
```

## 反编译 C

```c
// PvP_Room::select_new_manager @ 0x85d7ef4

/* PvP_Room::select_new_manager() */

undefined4 __thiscall PvP_Room::select_new_manager(PvP_Room *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (7 < local_8) {
      return 0;
    }
    if ((*(int *)(this + (local_8 + 0xc) * 4) != 0) &&
       (*(int *)(this + (local_8 + 0xc) * 4) != *(int *)(this + 0x28))) break;
    local_8 = local_8 + 1;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + (local_8 + 0xc) * 4);
  *(int *)(this + 0x2c) = local_8;
  this[local_8 + 0x70] = (PvP_Room)0x0;
  return 1;
}
```
