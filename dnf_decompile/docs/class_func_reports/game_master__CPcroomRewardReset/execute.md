# execute

`_ZN11game_master18CPcroomRewardReset7executeEv`

`game_master::CPcroomRewardReset::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CPcroomRewardReset` | `0x084b3d20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b3d20  _ZN11game_master18CPcroomRewardReset7executeEv
#           game_master::CPcroomRewardReset::execute()
# range [0x084b3d20, 0x084b3db1]
084b3d20 +0x00:  push   %ebp
084b3d21 +0x01:  mov    %esp,%ebp
084b3d23 +0x03:  push   %ebx
084b3d24 +0x04:  sub    $0x34,%esp
084b3d27 +0x07:  mov    0x8(%ebp),%eax
084b3d2a +0x0a:  mov    %eax,(%esp)
084b3d2d +0x0d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b3d32 +0x12:  mov    %eax,-0xc(%ebp)
084b3d35 +0x15:  mov    -0xc(%ebp),%eax
084b3d38 +0x18:  movb   $0x4,0x8ec32(%eax)
084b3d3f +0x1f:  mov    -0xc(%ebp),%eax
084b3d42 +0x22:  mov    %eax,(%esp)
084b3d45 +0x25:  call   0815cf06 <_ZN25DBUpdatePcroomDailyReward11makeRequestEP5CUser>  ; DBUpdatePcroomDailyReward::makeRequest(CUser*)
084b3d4a +0x2a:  mov    -0xc(%ebp),%eax
084b3d4d +0x2d:  mov    %eax,(%esp)
084b3d50 +0x30:  call   081618a6 <_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser>  ; InterSelectPcroomDailyReward::SendPacket(CUser*)
084b3d55 +0x35:  mov    -0xc(%ebp),%eax
084b3d58 +0x38:  mov    %eax,(%esp)
084b3d5b +0x3b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b3d60 +0x40:  movl   $0x0,0x4(%esp)
084b3d68 +0x48:  mov    %eax,(%esp)
084b3d6b +0x4b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084b3d70 +0x50:  mov    %eax,%ebx
084b3d72 +0x52:  movl   $0x0,0xc(%esp)
084b3d7a +0x5a:  movl   $0x1852,0x8(%esp)
084b3d82 +0x62:  movl   $&_ZZN11game_master18CPcroomRewardReset7executeEvE19__PRETTY_FUNCTION__,0x4(%esp)
084b3d8a +0x6a:  lea    -0x1c(%ebp),%eax
084b3d8d +0x6d:  mov    %eax,(%esp)
084b3d90 +0x70:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084b3d95 +0x75:  mov    %ebx,0x8(%esp)
084b3d99 +0x79:  movl   $"[GMCommand] Pcroom daily reward reset m_id:%s",0x4(%esp)
084b3da1 +0x81:  lea    -0x1c(%ebp),%eax
084b3da4 +0x84:  mov    %eax,(%esp)
084b3da7 +0x87:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084b3dac +0x8c:  add    $0x34,%esp
084b3daf +0x8f:  pop    %ebx
084b3db0 +0x90:  pop    %ebp
084b3db1 +0x91:  ret
```

## 反编译 C

```c
// game_master::CPcroomRewardReset::execute @ 0x84b3d20

/* game_master::CPcroomRewardReset::execute() */

void __thiscall game_master::CPcroomRewardReset::execute(CPcroomRewardReset *this)

{
  uint uVar1;
  undefined4 uVar2;
  cMyTrace local_20 [16];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_10[0x8ec32] = (CUser)0x4;
  DBUpdatePcroomDailyReward::makeRequest(local_10);
  InterSelectPcroomDailyReward::SendPacket(local_10);
  uVar1 = CUser::get_acc_id(local_10);
  uVar2 = NumberToString(uVar1,0);
  cMyTrace::cMyTrace(local_20,"virtual void game_master::CPcroomRewardReset::execute()",0x1852,0);
  cMyTrace::operator()(local_20,"[GMCommand] Pcroom daily reward reset m_id:%s",uVar2);
  return;
}
```
