# check_error

`_ZN23Dispatcher_BossDieCheck11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_BossDieCheck::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BossDieCheck` | `0x081cd71e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cd71e  _ZN23Dispatcher_BossDieCheck11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_BossDieCheck::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cd71e, 0x081cd7a1]
081cd71e +0x00:  push   %ebp
081cd71f +0x01:  mov    %esp,%ebp
081cd721 +0x03:  push   %ebx
081cd722 +0x04:  sub    $0x34,%esp
081cd725 +0x07:  mov    0x14(%ebp),%eax
081cd728 +0x0a:  mov    %eax,-0x10(%ebp)
081cd72b +0x0d:  mov    -0x10(%ebp),%eax
081cd72e +0x10:  movb   $0x0,0x8(%eax)
081cd732 +0x14:  mov    0xc(%ebp),%eax
081cd735 +0x17:  mov    %eax,(%esp)
081cd738 +0x1a:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081cd73d +0x1f:  movswl %ax,%ebx
081cd740 +0x22:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081cd745 +0x27:  mov    %ebx,0x4(%esp)
081cd749 +0x2b:  mov    %eax,(%esp)
081cd74c +0x2e:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081cd751 +0x33:  mov    %eax,-0xc(%ebp)
081cd754 +0x36:  cmpl   $0x0,-0xc(%ebp)
081cd758 +0x3a:  jne    081cd797 <+0x79>
081cd75a +0x3c:  movl   $0x0,0xc(%esp)
081cd762 +0x44:  movl   $0x258b,0x8(%esp)
081cd76a +0x4c:  movl   $&_ZZN23Dispatcher_BossDieCheck11check_errorEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cd772 +0x54:  lea    -0x20(%ebp),%eax
081cd775 +0x57:  mov    %eax,(%esp)
081cd778 +0x5a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081cd77d +0x5f:  movl   $"Party == NULL",0x4(%esp)
081cd785 +0x67:  lea    -0x20(%ebp),%eax
081cd788 +0x6a:  mov    %eax,(%esp)
081cd78b +0x6d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081cd790 +0x72:  mov    $0x8,%eax
081cd795 +0x77:  jmp    081cd79c <+0x7e>
081cd797 +0x79:  mov    $0x0,%eax
081cd79c +0x7e:  add    $0x34,%esp
081cd79f +0x81:  pop    %ebx
081cd7a0 +0x82:  pop    %ebp
081cd7a1 +0x83:  ret
```

## 反编译 C

```c
// Dispatcher_BossDieCheck::check_error @ 0x81cd71e

/* Dispatcher_BossDieCheck::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BossDieCheck::check_error
          (Dispatcher_BossDieCheck *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  cMyTrace local_24 [16];
  ParamBase *local_14;
  int local_10;
  
  local_14 = param_3;
  param_3[8] = (ParamBase)0x0;
  CUser::GetPartyIndex(param_1);
  iVar1 = G_CGameManager();
  local_10 = CGameManager::GetParty(iVar1);
  if (local_10 == 0) {
    cMyTrace::cMyTrace(local_24,
                       "int Dispatcher_BossDieCheck::check_error(CUser*, MSG_BASE&, ParamBase&)",
                       0x258b,0);
    cMyTrace::operator()(local_24,"Party == NULL");
    uVar2 = 8;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
