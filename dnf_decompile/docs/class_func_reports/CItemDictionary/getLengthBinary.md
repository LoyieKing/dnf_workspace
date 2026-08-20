# getLengthBinary

`_ZNK15CItemDictionary15getLengthBinaryEv`

`CItemDictionary::getLengthBinary() const`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811db60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811db60  _ZNK15CItemDictionary15getLengthBinaryEv
#           CItemDictionary::getLengthBinary() const
# range [0x0811db60, 0x0811dba5]
0811db60 +0x00:  push   %ebp
0811db61 +0x01:  mov    %esp,%ebp
0811db63 +0x03:  sub    $0x10,%esp
0811db66 +0x06:  movl   $0x0,-0x8(%ebp)
0811db6d +0x0d:  movl   $0x0,-0x4(%ebp)
0811db74 +0x14:  jmp    0811db92 <+0x32>
0811db76 +0x16:  mov    -0x4(%ebp),%eax
0811db79 +0x19:  mov    0x8(%ebp),%edx
0811db7c +0x1c:  movzbl 0x5(%edx,%eax,1),%eax
0811db81 +0x21:  test   %al,%al
0811db83 +0x23:  je     0811db8e <+0x2e>
0811db85 +0x25:  mov    -0x4(%ebp),%eax
0811db88 +0x28:  add    $0x1,%eax
0811db8b +0x2b:  mov    %eax,-0x8(%ebp)
0811db8e +0x2e:  addl   $0x1,-0x4(%ebp)
0811db92 +0x32:  cmpl   $0x1387,-0x4(%ebp)
0811db99 +0x39:  setle  %al
0811db9c +0x3c:  test   %al,%al
0811db9e +0x3e:  jne    0811db76 <+0x16>
0811dba0 +0x40:  mov    -0x8(%ebp),%eax
0811dba3 +0x43:  leave
0811dba4 +0x44:  ret
0811dba5 +0x45:  nop
```

## 反编译 C

```c
// CItemDictionary::getLengthBinary @ 0x811db60

/* CItemDictionary::getLengthBinary() const */

int __thiscall CItemDictionary::getLengthBinary(CItemDictionary *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 5000; local_8 = local_8 + 1) {
    if (this[local_8 + 5] != (CItemDictionary)0x0) {
      local_c = local_8 + 1;
    }
  }
  return local_c;
}
```
