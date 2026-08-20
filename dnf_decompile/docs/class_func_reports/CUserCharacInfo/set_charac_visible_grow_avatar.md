# set_charac_visible_grow_avatar

`_ZN15CUserCharacInfo30set_charac_visible_grow_avatarEb`

`CUserCharacInfo::set_charac_visible_grow_avatar(bool)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868be30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868be30  _ZN15CUserCharacInfo30set_charac_visible_grow_avatarEb
#           CUserCharacInfo::set_charac_visible_grow_avatar(bool)
# range [0x0868be30, 0x0868be6f]
0868be30 +0x00:  push   %ebp
0868be31 +0x01:  mov    %esp,%ebp
0868be33 +0x03:  sub    $0x4,%esp
0868be36 +0x06:  mov    0xc(%ebp),%eax
0868be39 +0x09:  mov    %al,-0x4(%ebp)
0868be3c +0x0c:  mov    0x8(%ebp),%eax
0868be3f +0x0f:  mov    0x10(%eax),%eax
0868be42 +0x12:  test   %eax,%eax
0868be44 +0x14:  je     0868be6e <+0x3e>
0868be46 +0x16:  mov    0x8(%ebp),%eax
0868be49 +0x19:  mov    0x10(%eax),%edx
0868be4c +0x1c:  movzbl -0x4(%ebp),%eax
0868be50 +0x20:  shl    $0x7,%eax
0868be53 +0x23:  sar    $0x7,%al
0868be56 +0x26:  and    $0x1,%eax
0868be59 +0x29:  lea    (%eax,%eax,1),%ecx
0868be5c +0x2c:  movzbl 0xe40(%edx),%eax
0868be63 +0x33:  and    $0xfffffffd,%eax
0868be66 +0x36:  or     %ecx,%eax
0868be68 +0x38:  mov    %al,0xe40(%edx)
0868be6e +0x3e:  leave
0868be6f +0x3f:  ret
```

## 反编译 C

```c
// CUserCharacInfo::set_charac_visible_grow_avatar @ 0x868be30

/* CUserCharacInfo::set_charac_visible_grow_avatar(bool) */

void __thiscall CUserCharacInfo::set_charac_visible_grow_avatar(CUserCharacInfo *this,bool param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(byte *)(*(int *)(this + 0x10) + 0xe40) =
         *(byte *)(*(int *)(this + 0x10) + 0xe40) & 0xfd | ((char)(param_1 << 7) >> 7 & 1U) * '\x02'
    ;
  }
  return;
}
```
