# GetMemberSlotNo

`_ZNK6CParty15GetMemberSlotNoEPK5CUser`

`CParty::GetMemberSlotNo(CUser const*) const`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859ac7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859ac7c  _ZNK6CParty15GetMemberSlotNoEPK5CUser
#           CParty::GetMemberSlotNo(CUser const*) const
# range [0x0859ac7c, 0x0859acc1]
0859ac7c +0x00:  push   %ebp
0859ac7d +0x01:  mov    %esp,%ebp
0859ac7f +0x03:  sub    $0x10,%esp
0859ac82 +0x06:  movl   $0x0,-0x4(%ebp)
0859ac89 +0x0d:  jmp    0859acb0 <+0x34>
0859ac8b +0x0f:  mov    -0x4(%ebp),%edx
0859ac8e +0x12:  mov    0x8(%ebp),%ecx
0859ac91 +0x15:  mov    %edx,%eax
0859ac93 +0x17:  add    %eax,%eax
0859ac95 +0x19:  add    %edx,%eax
0859ac97 +0x1b:  shl    $0x3,%eax
0859ac9a +0x1e:  lea    (%ecx,%eax,1),%eax
0859ac9d +0x21:  add    $0x78,%eax
0859aca0 +0x24:  mov    (%eax),%eax
0859aca2 +0x26:  cmp    0xc(%ebp),%eax
0859aca5 +0x29:  jne    0859acac <+0x30>
0859aca7 +0x2b:  mov    -0x4(%ebp),%eax
0859acaa +0x2e:  jmp    0859acc0 <+0x44>
0859acac +0x30:  addl   $0x1,-0x4(%ebp)
0859acb0 +0x34:  cmpl   $0x3,-0x4(%ebp)
0859acb4 +0x38:  setle  %al
0859acb7 +0x3b:  test   %al,%al
0859acb9 +0x3d:  jne    0859ac8b <+0xf>
0859acbb +0x3f:  mov    $0xffffffff,%eax
0859acc0 +0x44:  leave
0859acc1 +0x45:  ret
```

## 反编译 C

```c
// CParty::GetMemberSlotNo @ 0x859ac7c

/* CParty::GetMemberSlotNo(CUser const*) const */

int __thiscall CParty::GetMemberSlotNo(CParty *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return -1;
    }
    if (*(CUser **)(this + local_8 * 0x18 + 0x78) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
