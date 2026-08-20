# OnAgreeEnchant

`_ZN10expert_job10CEnchanter14OnAgreeEnchantEP5CUserP18MSG_STATIC_COMMAND`

`expert_job::CEnchanter::OnAgreeEnchant(CUser*, MSG_STATIC_COMMAND*)`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849e07e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849e07e  _ZN10expert_job10CEnchanter14OnAgreeEnchantEP5CUserP18MSG_STATIC_COMMAND
#           expert_job::CEnchanter::OnAgreeEnchant(CUser*, MSG_STATIC_COMMAND*)
# range [0x0849e07e, 0x0849e101]
0849e07e +0x00:  push   %ebp
0849e07f +0x01:  mov    %esp,%ebp
0849e081 +0x03:  sub    $0x28,%esp
0849e084 +0x06:  movl   $0x0,-0xc(%ebp)
0849e08b +0x0d:  mov    0x10(%ebp),%eax
0849e08e +0x10:  movzbl 0xd(%eax),%eax
0849e092 +0x14:  movzbl %al,%eax
0849e095 +0x17:  mov    %eax,0x8(%esp)
0849e099 +0x1b:  mov    0xc(%ebp),%eax
0849e09c +0x1e:  mov    %eax,0x4(%esp)
0849e0a0 +0x22:  mov    0x8(%ebp),%eax
0849e0a3 +0x25:  mov    %eax,(%esp)
0849e0a6 +0x28:  call   0849dd94 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE>  ; expert_job::CEnchanter::_AgreeEnchant(CUser*, ENUM_AGREE_ENCHANT_TYPE)
0849e0ab +0x2d:  mov    %eax,-0xc(%ebp)
0849e0ae +0x30:  cmpl   $0x0,-0xc(%ebp)
0849e0b2 +0x34:  setne  %al
0849e0b5 +0x37:  test   %al,%al
0849e0b7 +0x39:  je     0849e100 <+0x82>
0849e0b9 +0x3b:  mov    -0xc(%ebp),%eax
0849e0bc +0x3e:  movzbl %al,%eax
0849e0bf +0x41:  mov    %eax,0x8(%esp)
0849e0c3 +0x45:  movl   $0xab,0x4(%esp)
0849e0cb +0x4d:  mov    0xc(%ebp),%eax
0849e0ce +0x50:  mov    %eax,(%esp)
0849e0d1 +0x53:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0849e0d6 +0x58:  mov    0x8(%ebp),%eax
0849e0d9 +0x5b:  mov    0x28(%eax),%eax
0849e0dc +0x5e:  test   %eax,%eax
0849e0de +0x60:  je     0849e100 <+0x82>
0849e0e0 +0x62:  mov    -0xc(%ebp),%eax
0849e0e3 +0x65:  movzbl %al,%edx
0849e0e6 +0x68:  mov    0x8(%ebp),%eax
0849e0e9 +0x6b:  mov    0x28(%eax),%eax
0849e0ec +0x6e:  mov    %edx,0x8(%esp)
0849e0f0 +0x72:  movl   $0xab,0x4(%esp)
0849e0f8 +0x7a:  mov    %eax,(%esp)
0849e0fb +0x7d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0849e100 +0x82:  leave
0849e101 +0x83:  ret
```

## 反编译 C

```c
// expert_job::CEnchanter::OnAgreeEnchant @ 0x849e07e

/* expert_job::CEnchanter::OnAgreeEnchant(CUser*, MSG_STATIC_COMMAND*) */

void __thiscall
expert_job::CEnchanter::OnAgreeEnchant(CEnchanter *this,CUser *param_1,MSG_STATIC_COMMAND *param_2)

{
  uint uVar1;
  
  uVar1 = _AgreeEnchant(this,param_1,param_2[0xd]);
  if (uVar1 != 0) {
    CUser::SendCmdErrorPacket(param_1,0xab,uVar1 & 0xff);
    if (*(int *)(this + 0x28) != 0) {
      CUser::SendCmdErrorPacket(*(CUser **)(this + 0x28),0xab,uVar1 & 0xff);
    }
  }
  return;
}
```
