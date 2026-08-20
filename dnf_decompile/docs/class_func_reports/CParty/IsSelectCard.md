# IsSelectCard

`_ZN6CParty12IsSelectCardEc22eClearRewardCardType_t`

`CParty::IsSelectCard(char, eClearRewardCardType_t)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b4734` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b4734  _ZN6CParty12IsSelectCardEc22eClearRewardCardType_t
#           CParty::IsSelectCard(char, eClearRewardCardType_t)
# range [0x085b4734, 0x085b4785]
085b4734 +0x00:  push   %ebp
085b4735 +0x01:  mov    %esp,%ebp
085b4737 +0x03:  sub    $0x14,%esp
085b473a +0x06:  mov    0xc(%ebp),%eax
085b473d +0x09:  mov    %al,-0x14(%ebp)
085b4740 +0x0c:  movl   $0x0,-0x4(%ebp)
085b4747 +0x13:  jmp    085b4773 <+0x3f>
085b4749 +0x15:  mov    0x10(%ebp),%ecx
085b474c +0x18:  mov    -0x4(%ebp),%eax
085b474f +0x1b:  mov    0x8(%ebp),%edx
085b4752 +0x1e:  shl    $0x2,%ecx
085b4755 +0x21:  add    %ecx,%edx
085b4757 +0x23:  lea    (%edx,%eax,1),%eax
085b475a +0x26:  add    $0x200,%eax
085b475f +0x2b:  movzbl 0x4(%eax),%eax
085b4763 +0x2f:  cmp    -0x14(%ebp),%al
085b4766 +0x32:  jne    085b476f <+0x3b>
085b4768 +0x34:  mov    $0x1,%eax
085b476d +0x39:  jmp    085b4783 <+0x4f>
085b476f +0x3b:  addl   $0x1,-0x4(%ebp)
085b4773 +0x3f:  cmpl   $0x3,-0x4(%ebp)
085b4777 +0x43:  setle  %al
085b477a +0x46:  test   %al,%al
085b477c +0x48:  jne    085b4749 <+0x15>
085b477e +0x4a:  mov    $0x0,%eax
085b4783 +0x4f:  leave
085b4784 +0x50:  ret
085b4785 +0x51:  nop
```

## 反编译 C

```c
// CParty::IsSelectCard @ 0x85b4734

/* CParty::IsSelectCard(char, eClearRewardCardType_t) */

undefined4 __thiscall CParty::IsSelectCard(CParty *this,CParty param_1,int param_3)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < local_8) {
      return 0;
    }
    if (this[local_8 + param_3 * 4 + 0x204] == param_1) break;
    local_8 = local_8 + 1;
  }
  return 1;
}
```
