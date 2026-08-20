# getGainItemCount

`_ZNK15CItemDictionary16getGainItemCountEv`

`CItemDictionary::getGainItemCount() const`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811daee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811daee  _ZNK15CItemDictionary16getGainItemCountEv
#           CItemDictionary::getGainItemCount() const
# range [0x0811daee, 0x0811db5f]
0811daee +0x00:  push   %ebp
0811daef +0x01:  mov    %esp,%ebp
0811daf1 +0x03:  push   %ebx
0811daf2 +0x04:  sub    $0x10,%esp
0811daf5 +0x07:  movl   $0x0,-0x14(%ebp)
0811dafc +0x0e:  movl   $0x0,-0x10(%ebp)
0811db03 +0x15:  jmp    0811db49 <+0x5b>
0811db05 +0x17:  mov    -0x10(%ebp),%eax
0811db08 +0x1a:  mov    0x8(%ebp),%edx
0811db0b +0x1d:  movzbl 0x5(%edx,%eax,1),%eax
0811db10 +0x22:  mov    %al,-0x9(%ebp)
0811db13 +0x25:  movl   $0x0,-0x8(%ebp)
0811db1a +0x2c:  jmp    0811db3a <+0x4c>
0811db1c +0x2e:  movzbl -0x9(%ebp),%edx
0811db20 +0x32:  mov    -0x8(%ebp),%eax
0811db23 +0x35:  mov    %edx,%ebx
0811db25 +0x37:  mov    %eax,%ecx
0811db27 +0x39:  sar    %cl,%ebx
0811db29 +0x3b:  mov    %ebx,%eax
0811db2b +0x3d:  and    $0x1,%eax
0811db2e +0x40:  test   %al,%al
0811db30 +0x42:  je     0811db36 <+0x48>
0811db32 +0x44:  addl   $0x1,-0x14(%ebp)
0811db36 +0x48:  addl   $0x1,-0x8(%ebp)
0811db3a +0x4c:  cmpl   $0x7,-0x8(%ebp)
0811db3e +0x50:  setle  %al
0811db41 +0x53:  test   %al,%al
0811db43 +0x55:  jne    0811db1c <+0x2e>
0811db45 +0x57:  addl   $0x1,-0x10(%ebp)
0811db49 +0x5b:  cmpl   $0x1387,-0x10(%ebp)
0811db50 +0x62:  setle  %al
0811db53 +0x65:  test   %al,%al
0811db55 +0x67:  jne    0811db05 <+0x17>
0811db57 +0x69:  mov    -0x14(%ebp),%eax
0811db5a +0x6c:  add    $0x10,%esp
0811db5d +0x6f:  pop    %ebx
0811db5e +0x70:  pop    %ebp
0811db5f +0x71:  ret
```

## 反编译 C

```c
// CItemDictionary::getGainItemCount @ 0x811daee

/* CItemDictionary::getGainItemCount() const */

int __thiscall CItemDictionary::getGainItemCount(CItemDictionary *this)

{
  int local_18;
  int local_14;
  int local_c;
  
  local_18 = 0;
  for (local_14 = 0; local_14 < 5000; local_14 = local_14 + 1) {
    for (local_c = 0; local_c < 8; local_c = local_c + 1) {
      if (((int)(uint)(byte)this[local_14 + 5] >> ((byte)local_c & 0x1f) & 1U) != 0) {
        local_18 = local_18 + 1;
      }
    }
  }
  return local_18;
}
```
