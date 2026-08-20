# HaveAlreadySelectedCard

`_ZN6CParty23HaveAlreadySelectedCardEc22eClearRewardCardType_t`

`CParty::HaveAlreadySelectedCard(char, eClearRewardCardType_t)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b401c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b401c  _ZN6CParty23HaveAlreadySelectedCardEc22eClearRewardCardType_t
#           CParty::HaveAlreadySelectedCard(char, eClearRewardCardType_t)
# range [0x085b401c, 0x085b407b]
085b401c +0x00:  push   %ebp
085b401d +0x01:  mov    %esp,%ebp
085b401f +0x03:  sub    $0x14,%esp
085b4022 +0x06:  mov    0xc(%ebp),%eax
085b4025 +0x09:  mov    %al,-0x14(%ebp)
085b4028 +0x0c:  mov    0x10(%ebp),%eax
085b402b +0x0f:  cmp    $0x1,%eax
085b402e +0x12:  jle    085b4037 <+0x1b>
085b4030 +0x14:  mov    $0x0,%eax
085b4035 +0x19:  jmp    085b407a <+0x5e>
085b4037 +0x1b:  movl   $0x0,-0x4(%ebp)
085b403e +0x22:  jmp    085b406a <+0x4e>
085b4040 +0x24:  mov    0x10(%ebp),%ecx
085b4043 +0x27:  mov    -0x4(%ebp),%eax
085b4046 +0x2a:  mov    0x8(%ebp),%edx
085b4049 +0x2d:  shl    $0x2,%ecx
085b404c +0x30:  add    %ecx,%edx
085b404e +0x32:  lea    (%edx,%eax,1),%eax
085b4051 +0x35:  add    $0x200,%eax
085b4056 +0x3a:  movzbl 0x4(%eax),%eax
085b405a +0x3e:  cmp    -0x14(%ebp),%al
085b405d +0x41:  jne    085b4066 <+0x4a>
085b405f +0x43:  mov    $0x1,%eax
085b4064 +0x48:  jmp    085b407a <+0x5e>
085b4066 +0x4a:  addl   $0x1,-0x4(%ebp)
085b406a +0x4e:  cmpl   $0x3,-0x4(%ebp)
085b406e +0x52:  setle  %al
085b4071 +0x55:  test   %al,%al
085b4073 +0x57:  jne    085b4040 <+0x24>
085b4075 +0x59:  mov    $0x0,%eax
085b407a +0x5e:  leave
085b407b +0x5f:  ret
```

## 反编译 C

```c
// CParty::HaveAlreadySelectedCard @ 0x85b401c

/* CParty::HaveAlreadySelectedCard(char, eClearRewardCardType_t) */

undefined4 __thiscall CParty::HaveAlreadySelectedCard(CParty *this,CParty param_1,int param_3)

{
  int local_8;
  
  if (param_3 < 2) {
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      if (this[local_8 + param_3 * 4 + 0x204] == param_1) {
        return 1;
      }
    }
  }
  return 0;
}
```
