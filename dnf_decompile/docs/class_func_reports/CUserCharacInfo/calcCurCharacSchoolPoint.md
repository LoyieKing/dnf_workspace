# calcCurCharacSchoolPoint

`_ZN15CUserCharacInfo24calcCurCharacSchoolPointEi`

`CUserCharacInfo::calcCurCharacSchoolPoint(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08655bce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08655bce  _ZN15CUserCharacInfo24calcCurCharacSchoolPointEi
#           CUserCharacInfo::calcCurCharacSchoolPoint(int)
# range [0x08655bce, 0x08655c5f]
08655bce +0x00:  push   %ebp
08655bcf +0x01:  mov    %esp,%ebp
08655bd1 +0x03:  sub    $0x28,%esp
08655bd4 +0x06:  mov    0x8(%ebp),%eax
08655bd7 +0x09:  mov    %eax,(%esp)
08655bda +0x0c:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08655bdf +0x11:  mov    %ax,-0xe(%ebp)
08655be3 +0x15:  mov    0xc(%ebp),%ecx
08655be6 +0x18:  mov    $0x66666667,%edx
08655beb +0x1d:  mov    %ecx,%eax
08655bed +0x1f:  imul   %edx
08655bef +0x21:  sar    $0x2,%edx
08655bf2 +0x24:  mov    %ecx,%eax
08655bf4 +0x26:  sar    $0x1f,%eax
08655bf7 +0x29:  sub    %eax,%edx
08655bf9 +0x2b:  movzwl -0xe(%ebp),%eax
08655bfd +0x2f:  movzwl %ax,%eax
08655c00 +0x32:  imul   $0xcccd,%eax,%eax
08655c06 +0x38:  shr    $0x10,%eax
08655c09 +0x3b:  shr    $0x3,%ax
08655c0d +0x3f:  movzwl %ax,%eax
08655c10 +0x42:  cmp    %eax,%edx
08655c12 +0x44:  je     08655c5c <+0x8e>
08655c14 +0x46:  movzwl -0xe(%ebp),%eax
08655c18 +0x4a:  movzwl %ax,%eax
08655c1b +0x4d:  imul   $0xcccd,%eax,%eax
08655c21 +0x53:  shr    $0x10,%eax
08655c24 +0x56:  shr    $0x3,%ax
08655c28 +0x5a:  movzwl %ax,%eax
08655c2b +0x5d:  mov    %eax,-0xc(%ebp)
08655c2e +0x60:  cmpl   $0x17,-0xc(%ebp)
08655c32 +0x64:  jbe    08655c3b <+0x6d>
08655c34 +0x66:  movl   $0x17,-0xc(%ebp)
08655c3b +0x6d:  mov    0x8(%ebp),%eax
08655c3e +0x70:  mov    0x10(%eax),%eax
08655c41 +0x73:  mov    0x8(%ebp),%edx
08655c44 +0x76:  mov    0x10(%edx),%edx
08655c47 +0x79:  mov    0x71(%edx),%ecx
08655c4a +0x7c:  mov    -0xc(%ebp),%edx
08655c4d +0x7f:  mov    &_ZZN15CUserCharacInfo24calcCurCharacSchoolPointEiE5point(,%edx,4),%edx
08655c54 +0x86:  lea    (%ecx,%edx,1),%edx
08655c57 +0x89:  mov    %edx,0x71(%eax)
08655c5a +0x8c:  jmp    08655c5d <+0x8f>
08655c5c +0x8e:  nop
08655c5d +0x8f:  leave
08655c5e +0x90:  ret
08655c5f +0x91:  nop
```

## 反编译 C

```c
// CUserCharacInfo::calcCurCharacSchoolPoint @ 0x8655bce

/* CUserCharacInfo::calcCurCharacSchoolPoint(int) */

void __thiscall CUserCharacInfo::calcCurCharacSchoolPoint(CUserCharacInfo *this,int param_1)

{
  ushort uVar1;
  uint local_10;
  
  uVar1 = getCurCharacUsedFatigue(this);
  if (param_1 / 10 != uVar1 / 10) {
    local_10 = uVar1 / 10;
    if (0x17 < local_10) {
      local_10 = 0x17;
    }
    *(int *)(*(int *)(this + 0x10) + 0x71) =
         *(int *)(*(int *)(this + 0x10) + 0x71) +
         *(int *)(calcCurCharacSchoolPoint(int)::point + local_10 * 4);
  }
  return;
}
```
