# dispatch_sig

`_ZN26Dispatcher_GiveupExpertJob12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_GiveupExpertJob::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GiveupExpertJob` | `0x0821eed2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821eed2  _ZN26Dispatcher_GiveupExpertJob12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_GiveupExpertJob::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821eed2, 0x0821ef47]
0821eed2 +0x00:  push   %ebp
0821eed3 +0x01:  mov    %esp,%ebp
0821eed5 +0x03:  sub    $0x18,%esp
0821eed8 +0x06:  mov    0xc(%ebp),%eax
0821eedb +0x09:  mov    %eax,(%esp)
0821eede +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821eee3 +0x11:  cmp    $0x2,%eax
0821eee6 +0x14:  jle    0821eef7 <+0x25>
0821eee8 +0x16:  mov    0xc(%ebp),%eax
0821eeeb +0x19:  mov    %eax,(%esp)
0821eeee +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0821eef3 +0x21:  test   %eax,%eax
0821eef5 +0x23:  jne    0821eefe <+0x2c>
0821eef7 +0x25:  mov    $0x1,%eax
0821eefc +0x2a:  jmp    0821ef03 <+0x31>
0821eefe +0x2c:  mov    $0x0,%eax
0821ef03 +0x31:  test   %al,%al
0821ef05 +0x33:  je     0821ef2d <+0x5b>
0821ef07 +0x35:  movl   $0x0,0xc(%esp)
0821ef0f +0x3d:  movl   $0x0,0x8(%esp)
0821ef17 +0x45:  movl   $&_ZZN26Dispatcher_GiveupExpertJob12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821ef1f +0x4d:  movl   $0xd797,(%esp)
0821ef26 +0x54:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821ef2b +0x59:  jmp    0821ef46 <+0x74>
0821ef2d +0x5b:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
0821ef32 +0x60:  mov    0xc(%ebp),%edx
0821ef35 +0x63:  mov    %edx,0x4(%esp)
0821ef39 +0x67:  mov    %eax,(%esp)
0821ef3c +0x6a:  call   0849e60c <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser>  ; expert_job::CExpertJobMgr::OnGiveup(CUser*)
0821ef41 +0x6f:  mov    $0x0,%eax
0821ef46 +0x74:  leave
0821ef47 +0x75:  ret
```

## 反编译 C

```c
// Dispatcher_GiveupExpertJob::dispatch_sig @ 0x821eed2

/* Dispatcher_GiveupExpertJob::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_GiveupExpertJob::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_0821ef03;
    }
  }
  bVar1 = true;
LAB_0821ef03:
  if (bVar1) {
    uVar3 = LineFunc(0xd797,
                     "virtual int Dispatcher_GiveupExpertJob::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    expert_job::CExpertJobMgr::OnGiveup(GlobalData::s_ExpertJobMgr,(CUser *)param_2);
    uVar3 = 0;
  }
  return uVar3;
}
```
