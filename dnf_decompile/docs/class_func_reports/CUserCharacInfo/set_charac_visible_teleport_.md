# set_charac_visible_teleport_

`_ZN15CUserCharacInfo28set_charac_visible_teleport_Eb`

`CUserCharacInfo::set_charac_visible_teleport_(bool)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868be70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868be70  _ZN15CUserCharacInfo28set_charac_visible_teleport_Eb
#           CUserCharacInfo::set_charac_visible_teleport_(bool)
# range [0x0868be70, 0x0868beb3]
0868be70 +0x00:  push   %ebp
0868be71 +0x01:  mov    %esp,%ebp
0868be73 +0x03:  sub    $0x4,%esp
0868be76 +0x06:  mov    0xc(%ebp),%eax
0868be79 +0x09:  mov    %al,-0x4(%ebp)
0868be7c +0x0c:  mov    0x8(%ebp),%eax
0868be7f +0x0f:  mov    0x10(%eax),%eax
0868be82 +0x12:  test   %eax,%eax
0868be84 +0x14:  je     0868beb2 <+0x42>
0868be86 +0x16:  mov    0x8(%ebp),%eax
0868be89 +0x19:  mov    0x10(%eax),%edx
0868be8c +0x1c:  movzbl -0x4(%ebp),%eax
0868be90 +0x20:  shl    $0x7,%eax
0868be93 +0x23:  sar    $0x7,%al
0868be96 +0x26:  and    $0x1,%eax
0868be99 +0x29:  lea    0x0(,%eax,4),%ecx
0868bea0 +0x30:  movzbl 0xe40(%edx),%eax
0868bea7 +0x37:  and    $0xfffffffb,%eax
0868beaa +0x3a:  or     %ecx,%eax
0868beac +0x3c:  mov    %al,0xe40(%edx)
0868beb2 +0x42:  leave
0868beb3 +0x43:  ret
```

## 反编译 C

```c
// CUserCharacInfo::set_charac_visible_teleport_ @ 0x868be70

/* CUserCharacInfo::set_charac_visible_teleport_(bool) */

void __thiscall CUserCharacInfo::set_charac_visible_teleport_(CUserCharacInfo *this,bool param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(byte *)(*(int *)(this + 0x10) + 0xe40) =
         *(byte *)(*(int *)(this + 0x10) + 0xe40) & 0xfb | ((char)(param_1 << 7) >> 7 & 1U) * '\x04'
    ;
  }
  return;
}
```
