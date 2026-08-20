# do_action

`_ZN13EventClassify18CAccountFirstLogin9do_actionEiP5CUserSt6bitsetILj32EE`

`EventClassify::CAccountFirstLogin::do_action(int, CUser*, std::bitset<32u>)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAccountFirstLogin` | `0x0810df04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810df04  _ZN13EventClassify18CAccountFirstLogin9do_actionEiP5CUserSt6bitsetILj32EE
#           EventClassify::CAccountFirstLogin::do_action(int, CUser*, std::bitset<32u>)
# range [0x0810df04, 0x0810dfc5]
0810df04 +0x00:  push   %ebp
0810df05 +0x01:  mov    %esp,%ebp
0810df07 +0x03:  push   %esi
0810df08 +0x04:  push   %ebx
0810df09 +0x05:  sub    $0x30,%esp
0810df0c +0x08:  cmpl   $0x0,0x10(%ebp)
0810df10 +0x0c:  je     0810dfbe <+0xba>
0810df16 +0x12:  mov    0x8(%ebp),%eax
0810df19 +0x15:  mov    0x1c(%eax),%eax
0810df1c +0x18:  add    $0xc,%eax
0810df1f +0x1b:  movl   $0x1,0xc(%esp)
0810df27 +0x23:  mov    %eax,0x8(%esp)
0810df2b +0x27:  mov    0x10(%ebp),%eax
0810df2e +0x2a:  mov    %eax,0x4(%esp)
0810df32 +0x2e:  lea    -0xd(%ebp),%eax
0810df35 +0x31:  mov    %eax,(%esp)
0810df38 +0x34:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
0810df3d +0x39:  movl   $0x0,-0xc(%ebp)
0810df44 +0x40:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0810df49 +0x45:  mov    %eax,(%esp)
0810df4c +0x48:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0810df51 +0x4d:  test   %al,%al
0810df53 +0x4f:  je     0810df68 <+0x64>
0810df55 +0x51:  mov    0x10(%ebp),%eax
0810df58 +0x54:  mov    %eax,(%esp)
0810df5b +0x57:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0810df60 +0x5c:  movzbl %al,%eax
0810df63 +0x5f:  mov    %eax,-0xc(%ebp)
0810df66 +0x62:  jmp    0810df79 <+0x75>
0810df68 +0x64:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0810df6d +0x69:  mov    0x378(%eax),%eax
0810df73 +0x6f:  movzbl %al,%eax
0810df76 +0x72:  mov    %eax,-0xc(%ebp)
0810df79 +0x75:  mov    0x10(%ebp),%eax
0810df7c +0x78:  mov    %eax,(%esp)
0810df7f +0x7b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810df84 +0x80:  mov    %eax,%esi
0810df86 +0x82:  mov    0x10(%ebp),%eax
0810df89 +0x85:  mov    %eax,(%esp)
0810df8c +0x88:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0810df91 +0x8d:  mov    %eax,%ebx
0810df93 +0x8f:  mov    0x10(%ebp),%eax
0810df96 +0x92:  mov    %eax,(%esp)
0810df99 +0x95:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0810df9e +0x9a:  mov    0xc(%ebp),%edx
0810dfa1 +0x9d:  mov    %edx,0x10(%esp)
0810dfa5 +0xa1:  mov    %esi,0xc(%esp)
0810dfa9 +0xa5:  mov    -0xc(%ebp),%edx
0810dfac +0xa8:  mov    %edx,0x8(%esp)
0810dfb0 +0xac:  mov    %ebx,0x4(%esp)
0810dfb4 +0xb0:  mov    %eax,(%esp)
0810dfb7 +0xb3:  call   0843e79a <_ZN30DB_InsertAccountFirstLoginFlag11makeRequestEijiji>  ; DB_InsertAccountFirstLoginFlag::makeRequest(int, unsigned int, int, unsigned int, int)
0810dfbc +0xb8:  jmp    0810dfbf <+0xbb>
0810dfbe +0xba:  nop
0810dfbf +0xbb:  add    $0x30,%esp
0810dfc2 +0xbe:  pop    %ebx
0810dfc3 +0xbf:  pop    %esi
0810dfc4 +0xc0:  pop    %ebp
0810dfc5 +0xc1:  ret
```

## 反编译 C

```c
// EventClassify::CAccountFirstLogin::do_action @ 0x810df04

/* EventClassify::CAccountFirstLogin::do_action(int, CUser*, std::bitset<32u>) */

void EventClassify::CAccountFirstLogin::do_action(int param_1,int param_2,CUser *param_3)

{
  char cVar1;
  GameWorld *this;
  uint uVar2;
  uint uVar3;
  int iVar4;
  CEventActionMng local_11;
  uint local_10;
  
  if (param_3 != (CUser *)0x0) {
    CEventActionMng::process_action_send_mail
              (&local_11,param_3,(Action_SendMail *)(*(int *)(param_1 + 0x1c) + 0xc),true);
    local_10 = 0;
    this = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
    if (cVar1 == '\0') {
      iVar4 = G_CEnvironment();
      local_10 = *(uint *)(iVar4 + 0x378);
    }
    else {
      local_10 = CUser::GetServerGroup(param_3);
    }
    local_10 = local_10 & 0xff;
    uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_3);
    uVar3 = CUser::get_acc_id(param_3);
    iVar4 = CUser::GetUID(param_3);
    DB_InsertAccountFirstLoginFlag::makeRequest(iVar4,uVar3,local_10,uVar2,param_2);
  }
  return;
}
```
