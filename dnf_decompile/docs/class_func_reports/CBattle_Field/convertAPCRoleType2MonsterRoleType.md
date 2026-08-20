# convertAPCRoleType2MonsterRoleType

`_ZNK13CBattle_Field34convertAPCRoleType2MonsterRoleTypeEc`

`CBattle_Field::convertAPCRoleType2MonsterRoleType(char) const`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830a812` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830a812  _ZNK13CBattle_Field34convertAPCRoleType2MonsterRoleTypeEc
#           CBattle_Field::convertAPCRoleType2MonsterRoleType(char) const
# range [0x0830a812, 0x0830a861]
0830a812 +0x00:  push   %ebp
0830a813 +0x01:  mov    %esp,%ebp
0830a815 +0x03:  sub    $0x4,%esp
0830a818 +0x06:  mov    0xc(%ebp),%eax
0830a81b +0x09:  mov    %al,-0x4(%ebp)
0830a81e +0x0c:  movsbl -0x4(%ebp),%eax
0830a822 +0x10:  cmp    $0x6,%eax
0830a825 +0x13:  je     0830a846 <+0x34>
0830a827 +0x15:  cmp    $0x6,%eax
0830a82a +0x18:  jg     0830a833 <+0x21>
0830a82c +0x1a:  cmp    $0x5,%eax
0830a82f +0x1d:  je     0830a83f <+0x2d>
0830a831 +0x1f:  jmp    0830a85b <+0x49>
0830a833 +0x21:  cmp    $0x7,%eax
0830a836 +0x24:  je     0830a84d <+0x3b>
0830a838 +0x26:  cmp    $0x8,%eax
0830a83b +0x29:  je     0830a854 <+0x42>
0830a83d +0x2b:  jmp    0830a85b <+0x49>
0830a83f +0x2d:  mov    $0x0,%eax
0830a844 +0x32:  jmp    0830a85f <+0x4d>
0830a846 +0x34:  mov    $0x1,%eax
0830a84b +0x39:  jmp    0830a85f <+0x4d>
0830a84d +0x3b:  mov    $0x2,%eax
0830a852 +0x40:  jmp    0830a85f <+0x4d>
0830a854 +0x42:  mov    $0x3,%eax
0830a859 +0x47:  jmp    0830a85f <+0x4d>
0830a85b +0x49:  movzbl -0x4(%ebp),%eax
0830a85f +0x4d:  leave
0830a860 +0x4e:  ret
0830a861 +0x4f:  nop
```

## 反编译 C

```c
// CBattle_Field::convertAPCRoleType2MonsterRoleType @ 0x830a812

/* CBattle_Field::convertAPCRoleType2MonsterRoleType(char) const */

char __thiscall CBattle_Field::convertAPCRoleType2MonsterRoleType(CBattle_Field *this,char param_1)

{
  if (param_1 == '\x06') {
    param_1 = '\x01';
  }
  else if (param_1 < '\a') {
    if (param_1 == '\x05') {
      param_1 = '\0';
    }
  }
  else if (param_1 == '\a') {
    param_1 = '\x02';
  }
  else if (param_1 == '\b') {
    param_1 = '\x03';
  }
  return param_1;
}
```
