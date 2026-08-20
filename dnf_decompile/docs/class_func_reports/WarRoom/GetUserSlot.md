# GetUserSlot

`_ZN7WarRoom11GetUserSlotEP5CUser`

`WarRoom::GetUserSlot(CUser*)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd842` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd842  _ZN7WarRoom11GetUserSlotEP5CUser
#           WarRoom::GetUserSlot(CUser*)
# range [0x086bd842, 0x086bd87d]
086bd842 +0x00:  push   %ebp
086bd843 +0x01:  mov    %esp,%ebp
086bd845 +0x03:  sub    $0x10,%esp
086bd848 +0x06:  movl   $0x0,-0x4(%ebp)
086bd84f +0x0d:  jmp    086bd86c <+0x2a>
086bd851 +0x0f:  mov    -0x4(%ebp),%edx
086bd854 +0x12:  mov    0x8(%ebp),%eax
086bd857 +0x15:  add    $0x48,%edx
086bd85a +0x18:  mov    0xc(%eax,%edx,4),%eax
086bd85e +0x1c:  cmp    0xc(%ebp),%eax
086bd861 +0x1f:  jne    086bd868 <+0x26>
086bd863 +0x21:  mov    -0x4(%ebp),%eax
086bd866 +0x24:  jmp    086bd87c <+0x3a>
086bd868 +0x26:  addl   $0x1,-0x4(%ebp)
086bd86c +0x2a:  cmpl   $0x5,-0x4(%ebp)
086bd870 +0x2e:  setle  %al
086bd873 +0x31:  test   %al,%al
086bd875 +0x33:  jne    086bd851 <+0xf>
086bd877 +0x35:  mov    $0xffffffff,%eax
086bd87c +0x3a:  leave
086bd87d +0x3b:  ret
```

## 反编译 C

```c
// WarRoom::GetUserSlot @ 0x86bd842

/* WarRoom::GetUserSlot(CUser*) */

int __thiscall WarRoom::GetUserSlot(WarRoom *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (5 < local_8) {
      return -1;
    }
    if (*(CUser **)(this + (local_8 + 0x48) * 4 + 0xc) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
