# IsCompleteCardSelectOfMembers

`_ZN6CParty29IsCompleteCardSelectOfMembersE22eClearRewardCardType_t`

`CParty::IsCompleteCardSelectOfMembers(eClearRewardCardType_t)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b489c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b489c  _ZN6CParty29IsCompleteCardSelectOfMembersE22eClearRewardCardType_t
#           CParty::IsCompleteCardSelectOfMembers(eClearRewardCardType_t)
# range [0x085b489c, 0x085b494d]
085b489c +0x00:  push   %ebp
085b489d +0x01:  mov    %esp,%ebp
085b489f +0x03:  sub    $0x10,%esp
085b48a2 +0x06:  movl   $0x0,-0x8(%ebp)
085b48a9 +0x0d:  jmp    085b4938 <+0x9c>
085b48ae +0x12:  mov    -0x8(%ebp),%edx
085b48b1 +0x15:  mov    0x8(%ebp),%ecx
085b48b4 +0x18:  mov    %edx,%eax
085b48b6 +0x1a:  add    %eax,%eax
085b48b8 +0x1c:  add    %edx,%eax
085b48ba +0x1e:  shl    $0x3,%eax
085b48bd +0x21:  lea    (%ecx,%eax,1),%eax
085b48c0 +0x24:  add    $0x78,%eax
085b48c3 +0x27:  mov    (%eax),%eax
085b48c5 +0x29:  test   %eax,%eax
085b48c7 +0x2b:  je     085b4933 <+0x97>
085b48c9 +0x2d:  cmpl   $0x2,0xc(%ebp)
085b48cd +0x31:  jne    085b490e <+0x72>
085b48cf +0x33:  movl   $0x0,-0x4(%ebp)
085b48d6 +0x3a:  jmp    085b4901 <+0x65>
085b48d8 +0x3c:  mov    -0x4(%ebp),%ecx
085b48db +0x3f:  mov    -0x8(%ebp),%eax
085b48de +0x42:  mov    0x8(%ebp),%edx
085b48e1 +0x45:  shl    $0x2,%ecx
085b48e4 +0x48:  add    %ecx,%edx
085b48e6 +0x4a:  lea    (%edx,%eax,1),%eax
085b48e9 +0x4d:  add    $0x200,%eax
085b48ee +0x52:  movzbl 0x4(%eax),%eax
085b48f2 +0x56:  cmp    $0xff,%al
085b48f4 +0x58:  jne    085b48fd <+0x61>
085b48f6 +0x5a:  mov    $0x0,%eax
085b48fb +0x5f:  jmp    085b494c <+0xb0>
085b48fd +0x61:  addl   $0x1,-0x4(%ebp)
085b4901 +0x65:  cmpl   $0x1,-0x4(%ebp)
085b4905 +0x69:  setle  %al
085b4908 +0x6c:  test   %al,%al
085b490a +0x6e:  jne    085b48d8 <+0x3c>
085b490c +0x70:  jmp    085b4934 <+0x98>
085b490e +0x72:  mov    0xc(%ebp),%ecx
085b4911 +0x75:  mov    -0x8(%ebp),%eax
085b4914 +0x78:  mov    0x8(%ebp),%edx
085b4917 +0x7b:  shl    $0x2,%ecx
085b491a +0x7e:  add    %ecx,%edx
085b491c +0x80:  lea    (%edx,%eax,1),%eax
085b491f +0x83:  add    $0x200,%eax
085b4924 +0x88:  movzbl 0x4(%eax),%eax
085b4928 +0x8c:  cmp    $0xff,%al
085b492a +0x8e:  jne    085b4934 <+0x98>
085b492c +0x90:  mov    $0x0,%eax
085b4931 +0x95:  jmp    085b494c <+0xb0>
085b4933 +0x97:  nop
085b4934 +0x98:  addl   $0x1,-0x8(%ebp)
085b4938 +0x9c:  cmpl   $0x3,-0x8(%ebp)
085b493c +0xa0:  setle  %al
085b493f +0xa3:  test   %al,%al
085b4941 +0xa5:  jne    085b48ae <+0x12>
085b4947 +0xab:  mov    $0x1,%eax
085b494c +0xb0:  leave
085b494d +0xb1:  ret
```

## 反编译 C

```c
// CParty::IsCompleteCardSelectOfMembers @ 0x85b489c

/* CParty::IsCompleteCardSelectOfMembers(eClearRewardCardType_t) */

undefined4 __thiscall CParty::IsCompleteCardSelectOfMembers(CParty *this,int param_2)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  do {
    if (3 < local_c) {
      return 1;
    }
    if (*(int *)(this + local_c * 0x18 + 0x78) != 0) {
      if (param_2 == 2) {
        for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
          if (this[local_c + local_8 * 4 + 0x204] == (CParty)0xff) {
            return 0;
          }
        }
      }
      else if (this[local_c + param_2 * 4 + 0x204] == (CParty)0xff) {
        return 0;
      }
    }
    local_c = local_c + 1;
  } while( true );
}
```
