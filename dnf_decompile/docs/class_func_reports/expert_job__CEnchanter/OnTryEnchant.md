# OnTryEnchant

`_ZN10expert_job10CEnchanter12OnTryEnchantEP5CUserP18MSG_STATIC_COMMAND`

`expert_job::CEnchanter::OnTryEnchant(CUser*, MSG_STATIC_COMMAND*)`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849dfcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849dfcc  _ZN10expert_job10CEnchanter12OnTryEnchantEP5CUserP18MSG_STATIC_COMMAND
#           expert_job::CEnchanter::OnTryEnchant(CUser*, MSG_STATIC_COMMAND*)
# range [0x0849dfcc, 0x0849e07d]
0849dfcc +0x00:  push   %ebp
0849dfcd +0x01:  mov    %esp,%ebp
0849dfcf +0x03:  push   %ebx
0849dfd0 +0x04:  sub    $0x24,%esp
0849dfd3 +0x07:  movl   $0x0,-0xc(%ebp)
0849dfda +0x0e:  mov    0x10(%ebp),%eax
0849dfdd +0x11:  mov    0xe(%eax),%eax
0849dfe0 +0x14:  mov    %eax,%ebx
0849dfe2 +0x16:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849dfe7 +0x1b:  mov    %ebx,0x4(%esp)
0849dfeb +0x1f:  mov    %eax,(%esp)
0849dfee +0x22:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0849dff3 +0x27:  mov    0x8(%ebp),%edx
0849dff6 +0x2a:  mov    %eax,0x40(%edx)
0849dff9 +0x2d:  mov    0x10(%ebp),%eax
0849dffc +0x30:  movzbl 0xd(%eax),%eax
0849e000 +0x34:  movzbl %al,%eax
0849e003 +0x37:  mov    0x10(%ebp),%edx
0849e006 +0x3a:  add    $0x13,%edx
0849e009 +0x3d:  mov    %eax,0xc(%esp)
0849e00d +0x41:  mov    %edx,0x8(%esp)
0849e011 +0x45:  mov    0xc(%ebp),%eax
0849e014 +0x48:  mov    %eax,0x4(%esp)
0849e018 +0x4c:  mov    0x8(%ebp),%eax
0849e01b +0x4f:  mov    %eax,(%esp)
0849e01e +0x52:  call   0849dcc4 <_ZN10expert_job10CEnchanter11_TryEnchantEP5CUserP11stItemPos_t21ENUM_TRY_ENCHANT_TYPE>  ; expert_job::CEnchanter::_TryEnchant(CUser*, stItemPos_t*, ENUM_TRY_ENCHANT_TYPE)
0849e023 +0x57:  mov    %eax,-0xc(%ebp)
0849e026 +0x5a:  cmpl   $0x0,-0xc(%ebp)
0849e02a +0x5e:  setne  %al
0849e02d +0x61:  test   %al,%al
0849e02f +0x63:  je     0849e04e <+0x82>
0849e031 +0x65:  mov    -0xc(%ebp),%eax
0849e034 +0x68:  movzbl %al,%eax
0849e037 +0x6b:  mov    %eax,0x8(%esp)
0849e03b +0x6f:  movl   $0xac,0x4(%esp)
0849e043 +0x77:  mov    0xc(%ebp),%eax
0849e046 +0x7a:  mov    %eax,(%esp)
0849e049 +0x7d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0849e04e +0x82:  cmpl   $0x0,-0xc(%ebp)
0849e052 +0x86:  jne    0849e077 <+0xab>
0849e054 +0x88:  movl   $0x0,0xc(%esp)
0849e05c +0x90:  movl   $0x0,0x8(%esp)
0849e064 +0x98:  movl   $0x1f,0x4(%esp)
0849e06c +0xa0:  mov    0xc(%ebp),%eax
0849e06f +0xa3:  mov    %eax,(%esp)
0849e072 +0xa6:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
0849e077 +0xab:  add    $0x24,%esp
0849e07a +0xae:  pop    %ebx
0849e07b +0xaf:  pop    %ebp
0849e07c +0xb0:  ret
0849e07d +0xb1:  nop
```

## 反编译 C

```c
// expert_job::CEnchanter::OnTryEnchant @ 0x849dfcc

/* expert_job::CEnchanter::OnTryEnchant(CUser*, MSG_STATIC_COMMAND*) */

void __thiscall
expert_job::CEnchanter::OnTryEnchant(CEnchanter *this,CUser *param_1,MSG_STATIC_COMMAND *param_2)

{
  int iVar1;
  CDataManager *this_00;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_2 + 0xe);
  this_00 = (CDataManager *)G_CDataManager();
  uVar2 = CDataManager::find_item(this_00,iVar1);
  *(undefined4 *)(this + 0x40) = uVar2;
  uVar3 = _TryEnchant(this,param_1,param_2 + 0x13,param_2[0xd]);
  if (uVar3 == 0) {
    APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x1f,0,0);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0xac,uVar3 & 0xff);
  }
  return;
}
```
