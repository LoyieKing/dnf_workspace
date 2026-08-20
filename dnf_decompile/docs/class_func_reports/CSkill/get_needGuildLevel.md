# get_needGuildLevel

`_ZNK6CSkill18get_needGuildLevelEi`

`CSkill::get_needGuildLevel(int) const`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x08350182` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08350182  _ZNK6CSkill18get_needGuildLevelEi
#           CSkill::get_needGuildLevel(int) const
# range [0x08350182, 0x083501a5]
08350182 +0x00:  push   %ebp
08350183 +0x01:  mov    %esp,%ebp
08350185 +0x03:  mov    0x8(%ebp),%eax
08350188 +0x06:  mov    0xfc(%eax),%edx
0835018e +0x0c:  mov    0x8(%ebp),%eax
08350191 +0x0f:  mov    0x100(%eax),%eax
08350197 +0x15:  mov    0xc(%ebp),%ecx
0835019a +0x18:  sub    $0x1,%ecx
0835019d +0x1b:  imul   %ecx,%eax
083501a0 +0x1e:  lea    (%edx,%eax,1),%eax
083501a3 +0x21:  pop    %ebp
083501a4 +0x22:  ret
083501a5 +0x23:  nop
```

## 反编译 C

```c
// CSkill::get_needGuildLevel @ 0x8350182

/* CSkill::get_needGuildLevel(int) const */

int __thiscall CSkill::get_needGuildLevel(CSkill *this,int param_1)

{
  return *(int *)(this + 0xfc) + *(int *)(this + 0x100) * (param_1 + -1);
}
```
