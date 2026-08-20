# set_uppermember_exp_level

`_ZN15CUserCharacInfo25set_uppermember_exp_levelEh`

`CUserCharacInfo::set_uppermember_exp_level(unsigned char)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645b80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645b80  _ZN15CUserCharacInfo25set_uppermember_exp_levelEh
#           CUserCharacInfo::set_uppermember_exp_level(unsigned char)
# range [0x08645b80, 0x08645c17]
08645b80 +0x00:  push   %ebp
08645b81 +0x01:  mov    %esp,%ebp
08645b83 +0x03:  sub    $0x38,%esp
08645b86 +0x06:  mov    0xc(%ebp),%eax
08645b89 +0x09:  mov    %al,-0xc(%ebp)
08645b8c +0x0c:  mov    0x8(%ebp),%eax
08645b8f +0x0f:  mov    0x10(%eax),%eax
08645b92 +0x12:  test   %eax,%eax
08645b94 +0x14:  je     08645c15 <+0x95>
08645b96 +0x16:  cmpb   $0x0,-0xc(%ebp)
08645b9a +0x1a:  je     08645c05 <+0x85>
08645b9c +0x1c:  mov    0x8(%ebp),%eax
08645b9f +0x1f:  mov    0x10(%eax),%eax
08645ba2 +0x22:  movzbl 0xe32(%eax),%eax
08645ba9 +0x29:  cmp    -0xc(%ebp),%al
08645bac +0x2c:  jbe    08645c05 <+0x85>
08645bae +0x2e:  movzbl -0xc(%ebp),%edx
08645bb2 +0x32:  mov    0x8(%ebp),%eax
08645bb5 +0x35:  mov    0x10(%eax),%eax
08645bb8 +0x38:  movzbl 0xe32(%eax),%eax
08645bbf +0x3f:  movzbl %al,%eax
08645bc2 +0x42:  mov    0x8(%ebp),%ecx
08645bc5 +0x45:  mov    0x10(%ecx),%ecx
08645bc8 +0x48:  add    $0x4,%ecx
08645bcb +0x4b:  mov    %edx,0x1c(%esp)
08645bcf +0x4f:  mov    %eax,0x18(%esp)
08645bd3 +0x53:  mov    %ecx,0x14(%esp)
08645bd7 +0x57:  movl   $"set member exp level error , name(%s) , level(%d), new level(%d)",0x10(%esp)
08645bdf +0x5f:  movl   $0x2d2,0xc(%esp)
08645be7 +0x67:  movl   $&_ZZN15CUserCharacInfo25set_uppermember_exp_levelEhE19__PRETTY_FUNCTION__,0x8(%esp)
08645bef +0x6f:  movl   $"user.cpp",0x4(%esp)
08645bf7 +0x77:  movl   $0x1,(%esp)
08645bfe +0x7e:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08645c03 +0x83:  jmp    08645c15 <+0x95>
08645c05 +0x85:  mov    0x8(%ebp),%eax
08645c08 +0x88:  mov    0x10(%eax),%eax
08645c0b +0x8b:  movzbl -0xc(%ebp),%edx
08645c0f +0x8f:  mov    %dl,0xe32(%eax)
08645c15 +0x95:  leave
08645c16 +0x96:  ret
08645c17 +0x97:  nop
```

## 反编译 C

```c
// CUserCharacInfo::set_uppermember_exp_level @ 0x8645b80

/* CUserCharacInfo::set_uppermember_exp_level(unsigned char) */

void __thiscall CUserCharacInfo::set_uppermember_exp_level(CUserCharacInfo *this,uchar param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    if ((param_1 == '\0') || (*(byte *)(*(int *)(this + 0x10) + 0xe32) <= param_1)) {
      *(uchar *)(*(int *)(this + 0x10) + 0xe32) = param_1;
    }
    else {
      LogManager::logFormat
                (1,"user.cpp","void CUserCharacInfo::set_uppermember_exp_level(unsigned char)",0x2d2
                 ,"set member exp level error , name(%s) , level(%d), new level(%d)",
                 *(int *)(this + 0x10) + 4,(uint)*(byte *)(*(int *)(this + 0x10) + 0xe32),
                 (uint)param_1);
    }
  }
  return;
}
```
