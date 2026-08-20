# yy_get_previous_state

`_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv`

`__dnf_script__FlexLexer::yy_get_previous_state()`

| 类 | 地址 |
|---|---|
| `__dnf_script__FlexLexer` | `0x08ad1a80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad1a80  _ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv
#           __dnf_script__FlexLexer::yy_get_previous_state()
# range [0x08ad1a80, 0x08ad1b49]
08ad1a80 +0x00:  push   %ebp
08ad1a81 +0x01:  mov    %esp,%ebp
08ad1a83 +0x03:  push   %edi
08ad1a84 +0x04:  push   %esi
08ad1a85 +0x05:  push   %ebx
08ad1a86 +0x06:  sub    $0x4,%esp
08ad1a89 +0x09:  mov    0x8(%ebp),%edi
08ad1a8c +0x0c:  mov    0x4(%edi),%esi
08ad1a8f +0x0f:  cmp    0x30(%edi),%esi
08ad1a92 +0x12:  mov    0x38(%edi),%eax
08ad1a95 +0x15:  jae    08ad1b2e <+0xae>
08ad1a9b +0x1b:  mov    %edi,-0x10(%ebp)
08ad1a9e +0x1e:  xchg   %ax,%ax
08ad1aa0 +0x20:  movzwl &_ZL9yy_accept(%eax,%eax,1),%edx
08ad1aa8 +0x28:  test   %dx,%dx
08ad1aab +0x2b:  je     08ad1ab6 <+0x36>
08ad1aad +0x2d:  mov    -0x10(%ebp),%ecx
08ad1ab0 +0x30:  mov    %eax,0x4c(%ecx)
08ad1ab3 +0x33:  mov    %esi,0x50(%ecx)
08ad1ab6 +0x36:  movzbl (%esi),%edi
08ad1ab9 +0x39:  mov    %edi,%ecx
08ad1abb +0x3b:  test   %cl,%cl
08ad1abd +0x3d:  je     08ad1b38 <+0xb8>
08ad1abf +0x3f:  test   %dx,%dx
08ad1ac2 +0x42:  je     08ad1acd <+0x4d>
08ad1ac4 +0x44:  mov    -0x10(%ebp),%edx
08ad1ac7 +0x47:  mov    %eax,0x4c(%edx)
08ad1aca +0x4a:  mov    %esi,0x50(%edx)
08ad1acd +0x4d:  movswl &_ZL7yy_base(%eax,%eax,1),%edx
08ad1ad5 +0x55:  mov    %edi,%ecx
08ad1ad7 +0x57:  movzbl %cl,%ebx
08ad1ada +0x5a:  lea    (%edx,%ebx,1),%ecx
08ad1add +0x5d:  movswl &_ZL6yy_chk(%ecx,%ecx,1),%ecx
08ad1ae5 +0x65:  cmp    %ecx,%eax
08ad1ae7 +0x67:  je     08ad1b0f <+0x8f>
08ad1ae9 +0x69:  lea    0x0(%esi,%eiz,1),%esi
08ad1af0 +0x70:  movswl &_ZL6yy_def(%eax,%eax,1),%eax
08ad1af8 +0x78:  movswl &_ZL7yy_base(%eax,%eax,1),%edx
08ad1b00 +0x80:  lea    (%edx,%ebx,1),%ecx
08ad1b03 +0x83:  movswl &_ZL6yy_chk(%ecx,%ecx,1),%ecx
08ad1b0b +0x8b:  cmp    %eax,%ecx
08ad1b0d +0x8d:  jne    08ad1af0 <+0x70>
08ad1b0f +0x8f:  and    $0xff,%edi
08ad1b15 +0x95:  add    %edi,%edx
08ad1b17 +0x97:  movswl &_ZL6yy_nxt(%edx,%edx,1),%eax
08ad1b1f +0x9f:  mov    -0x10(%ebp),%edx
08ad1b22 +0xa2:  add    $0x1,%esi
08ad1b25 +0xa5:  cmp    %esi,0x30(%edx)
08ad1b28 +0xa8:  ja     08ad1aa0 <+0x20>
08ad1b2e +0xae:  add    $0x4,%esp
08ad1b31 +0xb1:  pop    %ebx
08ad1b32 +0xb2:  pop    %esi
08ad1b33 +0xb3:  pop    %edi
08ad1b34 +0xb4:  pop    %ebp
08ad1b35 +0xb5:  ret
08ad1b36 +0xb6:  xchg   %ax,%ax
08ad1b38 +0xb8:  mov    &_ZL12yy_NUL_trans(,%eax,4),%eax
08ad1b3f +0xbf:  jmp    08ad1b1f <+0x9f>
08ad1b41 +0xc1:  nop
08ad1b42 +0xc2:  lea    0x0(%esi,%eiz,1),%esi
08ad1b49 +0xc9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// __dnf_script__FlexLexer::yy_get_previous_state @ 0x8ad1a80

/* DWARF original prototype: yy_state_type yy_get_previous_state(__dnf_script__FlexLexer * this) */

yy_state_type __thiscall
__dnf_script__FlexLexer::yy_get_previous_state(__dnf_script__FlexLexer *this)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
                    /* Unresolved local var: yy_state_type yy_current_state@[???]
                       Unresolved local var: char * yy_cp@[???] */
  pbVar5 = (byte *)(this->super_FlexLexer).yytext;
  iVar3 = this->yy_start;
  if (pbVar5 < this->yy_c_buf_p) {
    do {
      sVar2 = yy_accept[iVar3];
      if (sVar2 != 0) {
        this->yy_last_accepting_state = iVar3;
        this->yy_last_accepting_cpos = (char *)pbVar5;
      }
      bVar1 = *pbVar5;
      if (bVar1 == 0) {
        iVar3 = yy_NUL_trans[iVar3];
      }
      else {
                    /* Unresolved local var: YY_CHAR yy_c@[???] */
        if (sVar2 != 0) {
          this->yy_last_accepting_state = iVar3;
          this->yy_last_accepting_cpos = (char *)pbVar5;
        }
        iVar4 = (int)yy_base[iVar3];
        if (iVar3 != yy_chk[iVar4 + (uint)bVar1]) {
          do {
            iVar3 = (int)yy_def[iVar3];
            iVar4 = (int)yy_base[iVar3];
          } while (yy_chk[iVar4 + (uint)bVar1] != iVar3);
        }
        iVar3 = (int)yy_nxt[iVar4 + (uint)bVar1];
      }
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < this->yy_c_buf_p);
  }
  return iVar3;
}
```
