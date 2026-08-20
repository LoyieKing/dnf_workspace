# VoteLackUser

`_ZN6CParty12VoteLackUserEP5CUseri`

`CParty::VoteLackUser(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b3c90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b3c90  _ZN6CParty12VoteLackUserEP5CUseri
#           CParty::VoteLackUser(CUser*, int)
# range [0x085b3c90, 0x085b3e11]
085b3c90 +0x000:  push   %ebp
085b3c91 +0x001:  mov    %esp,%ebp
085b3c93 +0x003:  push   %esi
085b3c94 +0x004:  push   %ebx
085b3c95 +0x005:  sub    $0x50,%esp
085b3c98 +0x008:  cmpl   $0x0,0x10(%ebp)
085b3c9c +0x00c:  js     085b3ca4 <+0x14>
085b3c9e +0x00e:  cmpl   $0x3,0x10(%ebp)
085b3ca2 +0x012:  jle    085b3cf4 <+0x64>
085b3ca4 +0x014:  movl   $0x5,0xc(%esp)
085b3cac +0x01c:  movl   $0x3591,0x8(%esp)
085b3cb4 +0x024:  movl   $&_ZZN6CParty12VoteLackUserEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
085b3cbc +0x02c:  lea    -0x30(%ebp),%eax
085b3cbf +0x02f:  mov    %eax,(%esp)
085b3cc2 +0x032:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085b3cc7 +0x037:  movl   $0x3591,0xc(%esp)
085b3ccf +0x03f:  movl   $&_ZZN6CParty12VoteLackUserEP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
085b3cd7 +0x047:  movl   $"[%s][%d]",0x4(%esp)
085b3cdf +0x04f:  lea    -0x30(%ebp),%eax
085b3ce2 +0x052:  mov    %eax,(%esp)
085b3ce5 +0x055:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085b3cea +0x05a:  mov    $0x0,%eax
085b3cef +0x05f:  jmp    085b3e0b <+0x17b>
085b3cf4 +0x064:  mov    0x10(%ebp),%eax
085b3cf7 +0x067:  mov    %eax,0x4(%esp)
085b3cfb +0x06b:  mov    0x8(%ebp),%eax
085b3cfe +0x06e:  mov    %eax,(%esp)
085b3d01 +0x071:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085b3d06 +0x076:  mov    %eax,-0x10(%ebp)
085b3d09 +0x079:  mov    0xc(%ebp),%eax
085b3d0c +0x07c:  cmp    -0x10(%ebp),%eax
085b3d0f +0x07f:  je     085b3d17 <+0x87>
085b3d11 +0x081:  cmpl   $0x0,-0x10(%ebp)
085b3d15 +0x085:  jne    085b3d21 <+0x91>
085b3d17 +0x087:  mov    $0x0,%eax
085b3d1c +0x08c:  jmp    085b3e0b <+0x17b>
085b3d21 +0x091:  mov    0xc(%ebp),%eax
085b3d24 +0x094:  mov    %eax,0x4(%esp)
085b3d28 +0x098:  mov    0x8(%ebp),%eax
085b3d2b +0x09b:  mov    %eax,(%esp)
085b3d2e +0x09e:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
085b3d33 +0x0a3:  mov    %eax,-0xc(%ebp)
085b3d36 +0x0a6:  cmpl   $0x0,-0xc(%ebp)
085b3d3a +0x0aa:  js     085b3d42 <+0xb2>
085b3d3c +0x0ac:  cmpl   $0x3,-0xc(%ebp)
085b3d40 +0x0b0:  jle    085b3d8f <+0xff>
085b3d42 +0x0b2:  movl   $0x5,0xc(%esp)
085b3d4a +0x0ba:  movl   $0x35a1,0x8(%esp)
085b3d52 +0x0c2:  movl   $&_ZZN6CParty12VoteLackUserEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
085b3d5a +0x0ca:  lea    -0x20(%ebp),%eax
085b3d5d +0x0cd:  mov    %eax,(%esp)
085b3d60 +0x0d0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085b3d65 +0x0d5:  movl   $0x35a1,0xc(%esp)
085b3d6d +0x0dd:  movl   $&_ZZN6CParty12VoteLackUserEP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
085b3d75 +0x0e5:  movl   $"[%s][%d]",0x4(%esp)
085b3d7d +0x0ed:  lea    -0x20(%ebp),%eax
085b3d80 +0x0f0:  mov    %eax,(%esp)
085b3d83 +0x0f3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085b3d88 +0x0f8:  mov    $0x0,%eax
085b3d8d +0x0fd:  jmp    085b3e0b <+0x17b>
085b3d8f +0x0ff:  mov    0x8(%ebp),%eax
085b3d92 +0x102:  lea    0xd8(%eax),%edx
085b3d98 +0x108:  mov    0x10(%ebp),%eax
085b3d9b +0x10b:  mov    %eax,0x8(%esp)
085b3d9f +0x10f:  mov    -0xc(%ebp),%eax
085b3da2 +0x112:  mov    %eax,0x4(%esp)
085b3da6 +0x116:  mov    %edx,(%esp)
085b3da9 +0x119:  call   085c038c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x18ea>  ; global constructors keyed to CParty::cMember::cMember()+0x18ea
085b3dae +0x11e:  movl   $0xf,0x4(%esp)
085b3db6 +0x126:  mov    0x8(%ebp),%eax
085b3db9 +0x129:  mov    %eax,(%esp)
085b3dbc +0x12c:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
085b3dc1 +0x131:  mov    %eax,%ebx
085b3dc3 +0x133:  mov    0x8(%ebp),%eax
085b3dc6 +0x136:  mov    0x64(%eax),%esi
085b3dc9 +0x139:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
085b3dce +0x13e:  movl   $0x0,0x1c(%esp)
085b3dd6 +0x146:  mov    %ebx,0x18(%esp)
085b3dda +0x14a:  movl   $0x9c4,0x10(%esp)
085b3de2 +0x152:  movl   $0x0,0x14(%esp)
085b3dea +0x15a:  movl   $0xf,0xc(%esp)
085b3df2 +0x162:  mov    %esi,0x8(%esp)
085b3df6 +0x166:  movl   $0x1,0x4(%esp)
085b3dfe +0x16e:  mov    %eax,(%esp)
085b3e01 +0x171:  call   08630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>  ; TimerQueue::InsertTimerInMilisecond(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, long long, int, unsigned int)
085b3e06 +0x176:  mov    $0x1,%eax
085b3e0b +0x17b:  add    $0x50,%esp
085b3e0e +0x17e:  pop    %ebx
085b3e0f +0x17f:  pop    %esi
085b3e10 +0x180:  pop    %ebp
085b3e11 +0x181:  ret
```

## 反编译 C

```c
// CParty::VoteLackUser @ 0x85b3c90

/* CParty::VoteLackUser(CUser*, int) */

undefined4 __thiscall CParty::VoteLackUser(CParty *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  CUser *local_14;
  int local_10;
  
  if ((param_2 < 0) || (3 < param_2)) {
    cMyTrace::cMyTrace(local_34,"bool CParty::VoteLackUser(CUser*, int)",0x3591,5);
    cMyTrace::operator()(local_34,"[%s][%d]","bool CParty::VoteLackUser(CUser*, int)",0x3591);
    uVar1 = 0;
  }
  else {
    local_14 = (CUser *)get_user(this,param_2);
    if ((param_1 == local_14) || (local_14 == (CUser *)0x0)) {
      uVar1 = 0;
    }
    else {
      local_10 = GetMemberSlotNo(this,param_1);
      if ((local_10 < 0) || (3 < local_10)) {
        cMyTrace::cMyTrace(local_24,"bool CParty::VoteLackUser(CUser*, int)",0x35a1,5);
        cMyTrace::operator()(local_24,"[%s][%d]","bool CParty::VoteLackUser(CUser*, int)",0x35a1);
        uVar1 = 0;
      }
      else {
        cElection<int,4,4>::Vote((cElection<int,4,4> *)(this + 0xd8),local_10,param_2);
        uVar2 = gen_timer_key(this,0xf);
        uVar1 = *(undefined4 *)(this + 100);
        uVar3 = G_TimerQueue();
        TimerQueue::InsertTimerInMilisecond(uVar3,1,uVar1,0xf,0x9c4,0,uVar2,0);
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}
```
