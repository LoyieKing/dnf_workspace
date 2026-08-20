# OnPutItemForEnchant

`_ZN10expert_job10CEnchanter19OnPutItemForEnchantEP5CUserP18MSG_STATIC_COMMAND`

`expert_job::CEnchanter::OnPutItemForEnchant(CUser*, MSG_STATIC_COMMAND*)`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849df5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849df5e  _ZN10expert_job10CEnchanter19OnPutItemForEnchantEP5CUserP18MSG_STATIC_COMMAND
#           expert_job::CEnchanter::OnPutItemForEnchant(CUser*, MSG_STATIC_COMMAND*)
# range [0x0849df5e, 0x0849dfcb]
0849df5e +0x00:  push   %ebp
0849df5f +0x01:  mov    %esp,%ebp
0849df61 +0x03:  sub    $0x38,%esp
0849df64 +0x06:  movl   $0x0,-0xc(%ebp)
0849df6b +0x0d:  mov    0x10(%ebp),%eax
0849df6e +0x10:  mov    0xe(%eax),%edx
0849df71 +0x13:  mov    0x10(%ebp),%eax
0849df74 +0x16:  lea    0xe(%eax),%ecx
0849df77 +0x19:  mov    0x10(%ebp),%eax
0849df7a +0x1c:  movzbl 0xd(%eax),%eax
0849df7e +0x20:  movzbl %al,%eax
0849df81 +0x23:  mov    %edx,0x10(%esp)
0849df85 +0x27:  mov    %ecx,0xc(%esp)
0849df89 +0x2b:  mov    %eax,0x8(%esp)
0849df8d +0x2f:  mov    0xc(%ebp),%eax
0849df90 +0x32:  mov    %eax,0x4(%esp)
0849df94 +0x36:  mov    0x8(%ebp),%eax
0849df97 +0x39:  mov    %eax,(%esp)
0849df9a +0x3c:  call   0849d344 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti>  ; expert_job::CEnchanter::_PutItemForEnchant(CUser*, int, stItemPos_t*, int)
0849df9f +0x41:  mov    %eax,-0xc(%ebp)
0849dfa2 +0x44:  cmpl   $0x0,-0xc(%ebp)
0849dfa6 +0x48:  setne  %al
0849dfa9 +0x4b:  test   %al,%al
0849dfab +0x4d:  je     0849dfca <+0x6c>
0849dfad +0x4f:  mov    -0xc(%ebp),%eax
0849dfb0 +0x52:  movzbl %al,%eax
0849dfb3 +0x55:  mov    %eax,0x8(%esp)
0849dfb7 +0x59:  movl   $0xad,0x4(%esp)
0849dfbf +0x61:  mov    0xc(%ebp),%eax
0849dfc2 +0x64:  mov    %eax,(%esp)
0849dfc5 +0x67:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0849dfca +0x6c:  leave
0849dfcb +0x6d:  ret
```

## 反编译 C

```c
// expert_job::CEnchanter::OnPutItemForEnchant @ 0x849df5e

/* expert_job::CEnchanter::OnPutItemForEnchant(CUser*, MSG_STATIC_COMMAND*) */

void __thiscall
expert_job::CEnchanter::OnPutItemForEnchant
          (CEnchanter *this,CUser *param_1,MSG_STATIC_COMMAND *param_2)

{
  uint uVar1;
  
  uVar1 = _PutItemForEnchant(this,param_1,(uint)(byte)param_2[0xd],(stItemPos_t *)(param_2 + 0xe),
                             *(int *)(param_2 + 0xe));
  if (uVar1 != 0) {
    CUser::SendCmdErrorPacket(param_1,0xad,uVar1 & 0xff);
  }
  return;
}
```
