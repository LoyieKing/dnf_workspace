# _S_normalize_category

`_ZNSt6locale21_S_normalize_categoryEi`

`std::locale::_S_normalize_category(int)`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086dae80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dae80  _ZNSt6locale21_S_normalize_categoryEi
#           std::locale::_S_normalize_category(int)
# range [0x086dae80, 0x086daf0f]
086dae80 +0x00:  push   %ebp
086dae81 +0x01:  xor    %eax,%eax
086dae83 +0x03:  mov    %esp,%ebp
086dae85 +0x05:  sub    $0x18,%esp
086dae88 +0x08:  mov    0x8(%ebp),%edx
086dae8b +0x0b:  test   %edx,%edx
086dae8d +0x0d:  je     086daeb8 <+0x38>
086dae8f +0x0f:  test   $0x3f,%dl
086dae92 +0x12:  jne    086daea8 <+0x28>
086dae94 +0x14:  cmp    $0x6,%edx
086dae97 +0x17:  jbe    086daec0 <+0x40>
086dae99 +0x19:  movl   $"locale::_S_normalize_category category not found",(%esp)
086daea0 +0x20:  call   086d9aa0 <_ZSt21__throw_runtime_errorPKc>  ; std::__throw_runtime_error(char const*)
086daea5 +0x25:  lea    0x0(%esi),%esi
086daea8 +0x28:  test   $0xffffffc0,%edx
086daeae +0x2e:  jne    086dae94 <+0x14>
086daeb0 +0x30:  mov    %edx,%eax
086daeb2 +0x32:  lea    0x0(%esi),%esi
086daeb8 +0x38:  leave
086daeb9 +0x39:  ret
086daeba +0x3a:  lea    0x0(%esi),%esi
086daec0 +0x40:  jmp    *&data#c1c66301(.rodata)(,%edx,4)
086daec7 +0x47:  nop
086daec8 +0x48:  mov    $0x1,%eax
086daecd +0x4d:  leave
086daece +0x4e:  xchg   %ax,%ax
086daed0 +0x50:  ret
086daed1 +0x51:  lea    0x0(%esi,%eiz,1),%esi
086daed8 +0x58:  mov    $0x4,%eax
086daedd +0x5d:  leave
086daede +0x5e:  ret
086daedf +0x5f:  nop
086daee0 +0x60:  mov    $0x8,%eax
086daee5 +0x65:  leave
086daee6 +0x66:  ret
086daee7 +0x67:  nop
086daee8 +0x68:  mov    $0x3f,%eax
086daeed +0x6d:  leave
086daeee +0x6e:  ret
086daeef +0x6f:  nop
086daef0 +0x70:  mov    $0x2,%eax
086daef5 +0x75:  leave
086daef6 +0x76:  ret
086daef7 +0x77:  nop
086daef8 +0x78:  mov    $0x20,%eax
086daefd +0x7d:  leave
086daefe +0x7e:  ret
086daeff +0x7f:  nop
086daf00 +0x80:  mov    $0x10,%eax
086daf05 +0x85:  leave
086daf06 +0x86:  ret
086daf07 +0x87:  nop
086daf08 +0x88:  nop
086daf09 +0x89:  nop
086daf0a +0x8a:  nop
086daf0b +0x8b:  nop
086daf0c +0x8c:  nop
086daf0d +0x8d:  nop
086daf0e +0x8e:  nop
086daf0f +0x8f:  nop
```

## 反编译 C

```c
// std::locale::_S_normalize_category @ 0x86dae80

/* std::locale::_S_normalize_category(int) */

int std::locale::_S_normalize_category(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) &&
     (((param_1 & 0x3fU) == 0 || (iVar1 = param_1, (param_1 & 0xffffffc0U) != 0)))) {
    switch(param_1) {
    case 0:
      return 1;
    case 1:
      return 2;
    case 2:
      return 8;
    case 3:
      return 4;
    case 4:
      return 0x10;
    case 5:
      return 0x20;
    case 6:
      return 0x3f;
    default:
                    /* WARNING: Subroutine does not return */
      __throw_runtime_error("locale::_S_normalize_category category not found");
    }
  }
  return iVar1;
}
```
