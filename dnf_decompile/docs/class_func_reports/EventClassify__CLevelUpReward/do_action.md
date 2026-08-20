# do_action

`_ZN13EventClassify14CLevelUpReward9do_actionEP5CUser`

`EventClassify::CLevelUpReward::do_action(CUser*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CLevelUpReward` | `0x0810e4ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e4ea  _ZN13EventClassify14CLevelUpReward9do_actionEP5CUser
#           EventClassify::CLevelUpReward::do_action(CUser*)
# range [0x0810e4ea, 0x0810e519]
0810e4ea +0x00:  push   %ebp
0810e4eb +0x01:  mov    %esp,%ebp
0810e4ed +0x03:  sub    $0x28,%esp
0810e4f0 +0x06:  mov    0x8(%ebp),%eax
0810e4f3 +0x09:  mov    0x1c(%eax),%eax
0810e4f6 +0x0c:  add    $0x28,%eax
0810e4f9 +0x0f:  movl   $0x1,0xc(%esp)
0810e501 +0x17:  mov    %eax,0x8(%esp)
0810e505 +0x1b:  mov    0xc(%ebp),%eax
0810e508 +0x1e:  mov    %eax,0x4(%esp)
0810e50c +0x22:  lea    -0x9(%ebp),%eax
0810e50f +0x25:  mov    %eax,(%esp)
0810e512 +0x28:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
0810e517 +0x2d:  leave
0810e518 +0x2e:  ret
0810e519 +0x2f:  nop
```

## 反编译 C

```c
// EventClassify::CLevelUpReward::do_action @ 0x810e4ea

/* EventClassify::CLevelUpReward::do_action(CUser*) */

void __thiscall EventClassify::CLevelUpReward::do_action(CLevelUpReward *this,CUser *param_1)

{
  CEventActionMng local_d [9];
  
  CEventActionMng::process_action_send_mail
            (local_d,param_1,(Action_SendMail *)(*(int *)(this + 0x1c) + 0x28),true);
  return;
}
```
