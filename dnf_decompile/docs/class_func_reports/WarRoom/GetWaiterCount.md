# GetWaiterCount

`_ZNK7WarRoom14GetWaiterCountEv`

`WarRoom::GetWaiterCount() const`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086babcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086babcc  _ZNK7WarRoom14GetWaiterCountEv
#           WarRoom::GetWaiterCount() const
# range [0x086babcc, 0x086bac0b]
086babcc +0x00:  push   %ebp
086babcd +0x01:  mov    %esp,%ebp
086babcf +0x03:  sub    $0x10,%esp
086babd2 +0x06:  movl   $0x0,-0x8(%ebp)
086babd9 +0x0d:  movl   $0x0,-0x4(%ebp)
086babe0 +0x14:  jmp    086babfb <+0x2f>
086babe2 +0x16:  mov    -0x4(%ebp),%edx
086babe5 +0x19:  mov    0x8(%ebp),%eax
086babe8 +0x1c:  add    $0x48,%edx
086babeb +0x1f:  mov    0xc(%eax,%edx,4),%eax
086babef +0x23:  test   %eax,%eax
086babf1 +0x25:  je     086babf7 <+0x2b>
086babf3 +0x27:  addl   $0x1,-0x8(%ebp)
086babf7 +0x2b:  addl   $0x1,-0x4(%ebp)
086babfb +0x2f:  cmpl   $0x5,-0x4(%ebp)
086babff +0x33:  setle  %al
086bac02 +0x36:  test   %al,%al
086bac04 +0x38:  jne    086babe2 <+0x16>
086bac06 +0x3a:  mov    -0x8(%ebp),%eax
086bac09 +0x3d:  leave
086bac0a +0x3e:  ret
086bac0b +0x3f:  nop
```

## 反编译 C

```c
// WarRoom::GetWaiterCount @ 0x86babcc

/* WarRoom::GetWaiterCount() const */

int __thiscall WarRoom::GetWaiterCount(WarRoom *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if (*(int *)(this + (local_8 + 0x48) * 4 + 0xc) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
