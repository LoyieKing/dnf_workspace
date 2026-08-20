# GetLiveCount

`_ZNK7WarRoom12GetLiveCountEv`

`WarRoom::GetLiveCount() const`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bac0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bac0c  _ZNK7WarRoom12GetLiveCountEv
#           WarRoom::GetLiveCount() const
# range [0x086bac0c, 0x086bac5d]
086bac0c +0x00:  push   %ebp
086bac0d +0x01:  mov    %esp,%ebp
086bac0f +0x03:  sub    $0x10,%esp
086bac12 +0x06:  movl   $0x0,-0x8(%ebp)
086bac19 +0x0d:  movl   $0x0,-0x4(%ebp)
086bac20 +0x14:  jmp    086bac4d <+0x41>
086bac22 +0x16:  mov    -0x4(%ebp),%edx
086bac25 +0x19:  mov    0x8(%ebp),%eax
086bac28 +0x1c:  add    $0x48,%edx
086bac2b +0x1f:  mov    0xc(%eax,%edx,4),%eax
086bac2f +0x23:  test   %eax,%eax
086bac31 +0x25:  je     086bac49 <+0x3d>
086bac33 +0x27:  mov    -0x4(%ebp),%eax
086bac36 +0x2a:  mov    0x8(%ebp),%edx
086bac39 +0x2d:  movzbl 0x184(%edx,%eax,1),%eax
086bac41 +0x35:  test   %al,%al
086bac43 +0x37:  je     086bac49 <+0x3d>
086bac45 +0x39:  addl   $0x1,-0x8(%ebp)
086bac49 +0x3d:  addl   $0x1,-0x4(%ebp)
086bac4d +0x41:  cmpl   $0x5,-0x4(%ebp)
086bac51 +0x45:  setle  %al
086bac54 +0x48:  test   %al,%al
086bac56 +0x4a:  jne    086bac22 <+0x16>
086bac58 +0x4c:  mov    -0x8(%ebp),%eax
086bac5b +0x4f:  leave
086bac5c +0x50:  ret
086bac5d +0x51:  nop
```

## 反编译 C

```c
// WarRoom::GetLiveCount @ 0x86bac0c

/* WarRoom::GetLiveCount() const */

int __thiscall WarRoom::GetLiveCount(WarRoom *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if ((*(int *)(this + (local_8 + 0x48) * 4 + 0xc) != 0) &&
       (this[local_8 + 0x184] != (WarRoom)0x0)) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
