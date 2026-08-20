# dispatch_sig

`_ZN28InterSelectPcroomDailyReward12dispatch_sigEP5CUserPci`

`InterSelectPcroomDailyReward::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `InterSelectPcroomDailyReward` | `0x081616ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081616ce  _ZN28InterSelectPcroomDailyReward12dispatch_sigEP5CUserPci
#           InterSelectPcroomDailyReward::dispatch_sig(CUser*, char*, int)
# range [0x081616ce, 0x0816179b]
081616ce +0x00:  push   %ebp
081616cf +0x01:  mov    %esp,%ebp
081616d1 +0x03:  push   %esi
081616d2 +0x04:  push   %ebx
081616d3 +0x05:  sub    $0x40,%esp
081616d6 +0x08:  mov    0x10(%ebp),%eax
081616d9 +0x0b:  mov    %eax,-0xc(%ebp)
081616dc +0x0e:  cmpl   $0x0,-0xc(%ebp)
081616e0 +0x12:  jne    08161715 <+0x47>
081616e2 +0x14:  movl   $"[Taiwan, pcroom] interMsg is null.",0x10(%esp)
081616ea +0x1c:  movl   $0x19a,0xc(%esp)
081616f2 +0x24:  movl   $&_ZZN28InterSelectPcroomDailyReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
081616fa +0x2c:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
08161702 +0x34:  movl   $0x1,(%esp)
08161709 +0x3b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816170e +0x40:  mov    $0x19b,%eax
08161713 +0x45:  jmp    08161794 <+0xc6>
08161715 +0x47:  mov    -0xc(%ebp),%eax
08161718 +0x4a:  movzbl 0x4(%eax),%edx
0816171c +0x4e:  mov    0xc(%ebp),%eax
0816171f +0x51:  mov    %dl,0x8ec32(%eax)
08161725 +0x57:  mov    -0xc(%ebp),%eax
08161728 +0x5a:  movzbl 0x4(%eax),%eax
0816172c +0x5e:  movsbl %al,%esi
0816172f +0x61:  mov    -0xc(%ebp),%eax
08161732 +0x64:  mov    (%eax),%eax
08161734 +0x66:  movl   $0x0,0x4(%esp)
0816173c +0x6e:  mov    %eax,(%esp)
0816173f +0x71:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08161744 +0x76:  mov    %eax,%ebx
08161746 +0x78:  movl   $0x0,0xc(%esp)
0816174e +0x80:  movl   $0x19f,0x8(%esp)
08161756 +0x88:  movl   $&_ZZN28InterSelectPcroomDailyReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
0816175e +0x90:  lea    -0x1c(%ebp),%eax
08161761 +0x93:  mov    %eax,(%esp)
08161764 +0x96:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08161769 +0x9b:  mov    %esi,0xc(%esp)
0816176d +0x9f:  mov    %ebx,0x8(%esp)
08161771 +0xa3:  movl   $"[Taiwan, pcroom] m_id:%s, remain_reward_count:%d",0x4(%esp)
08161779 +0xab:  lea    -0x1c(%ebp),%eax
0816177c +0xae:  mov    %eax,(%esp)
0816177f +0xb1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08161784 +0xb6:  mov    0xc(%ebp),%eax
08161787 +0xb9:  mov    %eax,(%esp)
0816178a +0xbc:  call   081618a6 <_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser>  ; InterSelectPcroomDailyReward::SendPacket(CUser*)
0816178f +0xc1:  mov    $0x0,%eax
08161794 +0xc6:  add    $0x40,%esp
08161797 +0xc9:  pop    %ebx
08161798 +0xca:  pop    %esi
08161799 +0xcb:  pop    %ebp
0816179a +0xcc:  ret
0816179b +0xcd:  nop
```

## 反编译 C

```c
// InterSelectPcroomDailyReward::dispatch_sig @ 0x81616ce

/* InterSelectPcroomDailyReward::dispatch_sig(CUser*, char*, int) */

undefined4 InterSelectPcroomDailyReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = param_3;
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "virtual int InterSelectPcroomDailyReward::dispatch_sig(CUser*, char*, int)",0x19a,
               "[Taiwan, pcroom] interMsg is null.");
    uVar2 = 0x19b;
  }
  else {
    param_2[0x8ec32] = *(char *)(param_3 + 4);
    cVar1 = *(char *)(param_3 + 4);
    uVar2 = NumberToString(*(uint *)param_3,0);
    cMyTrace::cMyTrace(local_20,
                       "virtual int InterSelectPcroomDailyReward::dispatch_sig(CUser*, char*, int)",
                       0x19f,0);
    cMyTrace::operator()
              (local_20,"[Taiwan, pcroom] m_id:%s, remain_reward_count:%d",uVar2,(int)cVar1);
    SendPacket((CUser *)param_2);
    uVar2 = 0;
  }
  return uVar2;
}
```
