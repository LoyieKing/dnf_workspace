# do_action

`_ZN13EventClassify23CAccountFirstLoginDaily9do_actionEiP5CUserSt6bitsetILj32EE`

`EventClassify::CAccountFirstLoginDaily::do_action(int, CUser*, std::bitset<32u>)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAccountFirstLoginDaily` | `0x0810dfe8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810dfe8  _ZN13EventClassify23CAccountFirstLoginDaily9do_actionEiP5CUserSt6bitsetILj32EE
#           EventClassify::CAccountFirstLoginDaily::do_action(int, CUser*, std::bitset<32u>)
# range [0x0810dfe8, 0x0810e063]
0810dfe8 +0x00:  push   %ebp
0810dfe9 +0x01:  mov    %esp,%ebp
0810dfeb +0x03:  push   %esi
0810dfec +0x04:  push   %ebx
0810dfed +0x05:  sub    $0x20,%esp
0810dff0 +0x08:  cmpl   $0x0,0x10(%ebp)
0810dff4 +0x0c:  je     0810e05b <+0x73>
0810dff6 +0x0e:  mov    0x8(%ebp),%eax
0810dff9 +0x11:  mov    0x1c(%eax),%eax
0810dffc +0x14:  add    $0xc,%eax
0810dfff +0x17:  movl   $0x1,0xc(%esp)
0810e007 +0x1f:  mov    %eax,0x8(%esp)
0810e00b +0x23:  mov    0x10(%ebp),%eax
0810e00e +0x26:  mov    %eax,0x4(%esp)
0810e012 +0x2a:  lea    -0x9(%ebp),%eax
0810e015 +0x2d:  mov    %eax,(%esp)
0810e018 +0x30:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
0810e01d +0x35:  mov    0x10(%ebp),%eax
0810e020 +0x38:  mov    %eax,(%esp)
0810e023 +0x3b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810e028 +0x40:  mov    %eax,%esi
0810e02a +0x42:  mov    0x10(%ebp),%eax
0810e02d +0x45:  mov    %eax,(%esp)
0810e030 +0x48:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0810e035 +0x4d:  mov    %eax,%ebx
0810e037 +0x4f:  mov    0x10(%ebp),%eax
0810e03a +0x52:  mov    %eax,(%esp)
0810e03d +0x55:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0810e042 +0x5a:  mov    0xc(%ebp),%edx
0810e045 +0x5d:  mov    %edx,0xc(%esp)
0810e049 +0x61:  mov    %esi,0x8(%esp)
0810e04d +0x65:  mov    %ebx,0x4(%esp)
0810e051 +0x69:  mov    %eax,(%esp)
0810e054 +0x6c:  call   0843ea64 <_ZN35DB_InsertAccountFirstLoginDailyFlag11makeRequestEijji>  ; DB_InsertAccountFirstLoginDailyFlag::makeRequest(int, unsigned int, unsigned int, int)
0810e059 +0x71:  jmp    0810e05c <+0x74>
0810e05b +0x73:  nop
0810e05c +0x74:  add    $0x20,%esp
0810e05f +0x77:  pop    %ebx
0810e060 +0x78:  pop    %esi
0810e061 +0x79:  pop    %ebp
0810e062 +0x7a:  ret
0810e063 +0x7b:  nop
```

## 反编译 C

```c
// EventClassify::CAccountFirstLoginDaily::do_action @ 0x810dfe8

/* EventClassify::CAccountFirstLoginDaily::do_action(int, CUser*, std::bitset<32u>) */

void EventClassify::CAccountFirstLoginDaily::do_action
               (int param_1,int param_2,CUserCharacInfo *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CEventActionMng local_d;
  
  if (param_3 != (CUserCharacInfo *)0x0) {
    CEventActionMng::process_action_send_mail
              (&local_d,(CUser *)param_3,(Action_SendMail *)(*(int *)(param_1 + 0x1c) + 0xc),true);
    uVar1 = CUserCharacInfo::getCurCharacNo(param_3);
    uVar2 = CUser::get_acc_id((CUser *)param_3);
    iVar3 = CUser::GetUID((CUser *)param_3);
    DB_InsertAccountFirstLoginDailyFlag::makeRequest(iVar3,uVar2,uVar1,param_2);
  }
  return;
}
```
