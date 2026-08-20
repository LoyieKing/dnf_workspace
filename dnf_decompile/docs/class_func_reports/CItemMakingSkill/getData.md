# getData

`_ZNK16CItemMakingSkill7getDataEPc`

`CItemMakingSkill::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x08545b42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08545b42  _ZNK16CItemMakingSkill7getDataEPc
#           CItemMakingSkill::getData(char*) const
# range [0x08545b42, 0x08545b7d]
08545b42 +0x00:  push   %ebp
08545b43 +0x01:  mov    %esp,%ebp
08545b45 +0x03:  sub    $0x10,%esp
08545b48 +0x06:  mov    0xc(%ebp),%eax
08545b4b +0x09:  mov    %eax,-0x8(%ebp)
08545b4e +0x0c:  movl   $0x0,-0x4(%ebp)
08545b55 +0x13:  jmp    08545b71 <+0x2f>
08545b57 +0x15:  mov    -0x4(%ebp),%edx
08545b5a +0x18:  mov    -0x4(%ebp),%ecx
08545b5d +0x1b:  mov    0x8(%ebp),%eax
08545b60 +0x1e:  movzwl 0x6(%eax,%ecx,2),%ecx
08545b65 +0x23:  mov    -0x8(%ebp),%eax
08545b68 +0x26:  mov    %cx,0x4(%eax,%edx,2)
08545b6d +0x2b:  addl   $0x1,-0x4(%ebp)
08545b71 +0x2f:  cmpl   $0xa,-0x4(%ebp)
08545b75 +0x33:  setle  %al
08545b78 +0x36:  test   %al,%al
08545b7a +0x38:  jne    08545b57 <+0x15>
08545b7c +0x3a:  leave
08545b7d +0x3b:  ret
```

## 反编译 C

```c
// CItemMakingSkill::getData @ 0x8545b42

/* CItemMakingSkill::getData(char*) const */

void __thiscall CItemMakingSkill::getData(CItemMakingSkill *this,char *param_1)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0xb; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + local_8 * 2 + 4) = *(undefined2 *)(this + local_8 * 2 + 6);
  }
  return;
}
```
