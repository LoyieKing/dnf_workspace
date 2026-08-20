# GetRewardGold

`_ZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_result`

`CHARAC_LOAD_MERCENARY::GetRewardGold(CUser*, competition_reward_result&) const`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b3046` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b3046  _ZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_result
#           CHARAC_LOAD_MERCENARY::GetRewardGold(CUser*, competition_reward_result&) const
# range [0x081b3046, 0x081b3275]
081b3046 +0x000:  push   %ebp
081b3047 +0x001:  mov    %esp,%ebp
081b3049 +0x003:  push   %edi
081b304a +0x004:  push   %esi
081b304b +0x005:  push   %ebx
081b304c +0x006:  sub    $0x9c,%esp
081b3052 +0x00c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b3057 +0x011:  add    $0xa8e4,%eax
081b305c +0x016:  mov    %eax,-0x3c(%ebp)
081b305f +0x019:  mov    0x8(%ebp),%eax
081b3062 +0x01c:  movzwl 0x4(%eax),%eax
081b3066 +0x020:  movswl %ax,%edx
081b3069 +0x023:  lea    -0x48(%ebp),%eax
081b306c +0x026:  mov    -0x3c(%ebp),%ecx
081b306f +0x029:  mov    %ecx,0x8(%esp)
081b3073 +0x02d:  mov    %edx,0x4(%esp)
081b3077 +0x031:  mov    %eax,(%esp)
081b307a +0x034:  call   081b495d <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x1d1>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x1d1
081b307f +0x039:  sub    $0x4,%esp
081b3082 +0x03c:  mov    -0x48(%ebp),%eax
081b3085 +0x03f:  mov    %eax,-0x38(%ebp)
081b3088 +0x042:  mov    0x8(%ebp),%eax
081b308b +0x045:  mov    %eax,(%esp)
081b308e +0x048:  call   081b2c1e <_ZNK21CHARAC_LOAD_MERCENARY14GetPeriodBonusEv>  ; CHARAC_LOAD_MERCENARY::GetPeriodBonus() const
081b3093 +0x04d:  fstps  -0x34(%ebp)
081b3096 +0x050:  mov    0x8(%ebp),%eax
081b3099 +0x053:  mov    %eax,(%esp)
081b309c +0x056:  call   081b2c94 <_ZNK21CHARAC_LOAD_MERCENARY14GetAvatarBonusEv>  ; CHARAC_LOAD_MERCENARY::GetAvatarBonus() const
081b30a1 +0x05b:  fstps  -0x30(%ebp)
081b30a4 +0x05e:  movl   $0x0,0x4(%esp)
081b30ac +0x066:  mov    0x8(%ebp),%eax
081b30af +0x069:  mov    %eax,(%esp)
081b30b2 +0x06c:  call   081b2f32 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb>  ; CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm(bool*) const
081b30b7 +0x071:  mov    %eax,-0x2c(%ebp)
081b30ba +0x074:  fildl  -0x38(%ebp)
081b30bd +0x077:  fmuls  -0x34(%ebp)
081b30c0 +0x07a:  fildl  -0x2c(%ebp)
081b30c3 +0x07d:  fmulp  %st,%st(1)
081b30c5 +0x07f:  fmuls  -0x30(%ebp)
081b30c8 +0x082:  flds   "\n�#<"
081b30ce +0x088:  faddp  %st,%st(1)
081b30d0 +0x08a:  fnstcw -0x4a(%ebp)
081b30d3 +0x08d:  movzwl -0x4a(%ebp),%eax
081b30d7 +0x091:  mov    $0xc,%ah
081b30d9 +0x093:  mov    %ax,-0x4c(%ebp)
081b30dd +0x097:  fldcw  -0x4c(%ebp)
081b30e0 +0x09a:  fistpl -0x28(%ebp)
081b30e3 +0x09d:  fldcw  -0x4a(%ebp)
081b30e6 +0x0a0:  mov    $&_ZGVZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_resultE21probabilityRewardItem,%eax
081b30eb +0x0a5:  movzbl (%eax),%eax
081b30ee +0x0a8:  test   %al,%al
081b30f0 +0x0aa:  jne    081b3146 <+0x100>
081b30f2 +0x0ac:  movl   $&_ZGVZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_resultE21probabilityRewardItem,(%esp)
081b30f9 +0x0b3:  call   08725330 <__cxa_guard_acquire>
081b30fe +0x0b8:  test   %eax,%eax
081b3100 +0x0ba:  setne  %al
081b3103 +0x0bd:  test   %al,%al
081b3105 +0x0bf:  je     081b3146 <+0x100>
081b3107 +0x0c1:  mov    $0x0,%ebx
081b310c +0x0c6:  movl   $&_ZZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_resultE21probabilityRewardItem,(%esp)
081b3113 +0x0cd:  call   080d9f48 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xe5>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xe5
081b3118 +0x0d2:  movl   $&_ZGVZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_resultE21probabilityRewardItem,(%esp)
081b311f +0x0d9:  call   08725250 <__cxa_guard_release>
081b3124 +0x0de:  jmp    081b3146 <+0x100>
081b3126 +0x0e0:  mov    %edx,%esi
081b3128 +0x0e2:  mov    %eax,%edi
081b312a +0x0e4:  test   %bl,%bl
081b312c +0x0e6:  jne    081b313a <+0xf4>
081b312e +0x0e8:  movl   $&_ZGVZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_resultE21probabilityRewardItem,(%esp)
081b3135 +0x0ef:  call   087252c0 <__cxa_guard_abort>
081b313a +0x0f4:  mov    %edi,%eax
081b313c +0x0f6:  mov    %esi,%edx
081b313e +0x0f8:  mov    %eax,(%esp)
081b3141 +0x0fb:  call   08ae3750 <_Unwind_Resume>
081b3146 +0x100:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b314b +0x105:  mov    0xa918(%eax),%eax
081b3151 +0x10b:  mov    %eax,-0x40(%ebp)
081b3154 +0x10e:  lea    -0x40(%ebp),%eax
081b3157 +0x111:  mov    %eax,0x4(%esp)
081b315b +0x115:  movl   $&_ZZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_resultE21probabilityRewardItem,(%esp)
081b3162 +0x11c:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
081b3167 +0x121:  mov    %eax,-0x24(%ebp)
081b316a +0x124:  mov    -0x24(%ebp),%eax
081b316d +0x127:  mov    %eax,0x4(%esp)
081b3171 +0x12b:  mov    0x8(%ebp),%eax
081b3174 +0x12e:  mov    %eax,(%esp)
081b3177 +0x131:  call   081b2d0a <_ZNK21CHARAC_LOAD_MERCENARY17GetRewardCriticalEi>  ; CHARAC_LOAD_MERCENARY::GetRewardCritical(int) const
081b317c +0x136:  fstps  -0x20(%ebp)
081b317f +0x139:  mov    0xc(%ebp),%eax
081b3182 +0x13c:  mov    %eax,(%esp)
081b3185 +0x13f:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
081b318a +0x144:  test   %al,%al
081b318c +0x146:  je     081b320d <+0x1c7>
081b318e +0x148:  flds   -0x20(%ebp)
081b3191 +0x14b:  flds   -0x30(%ebp)
081b3194 +0x14e:  flds   -0x34(%ebp)
081b3197 +0x151:  flds   -0x30(%ebp)
081b319a +0x154:  flds   -0x34(%ebp)
081b319d +0x157:  fxch   %st(4)
081b319f +0x159:  fstpl  0x40(%esp)
081b31a3 +0x15d:  fxch   %st(2)
081b31a5 +0x15f:  mov    -0x24(%ebp),%eax
081b31a8 +0x162:  mov    %eax,0x3c(%esp)
081b31ac +0x166:  mov    -0x28(%ebp),%eax
081b31af +0x169:  mov    %eax,0x38(%esp)
081b31b3 +0x16d:  fstpl  0x30(%esp)
081b31b7 +0x171:  mov    -0x2c(%ebp),%eax
081b31ba +0x174:  mov    %eax,0x2c(%esp)
081b31be +0x178:  fstpl  0x24(%esp)
081b31c2 +0x17c:  mov    -0x38(%ebp),%eax
081b31c5 +0x17f:  mov    %eax,0x20(%esp)
081b31c9 +0x183:  fstpl  0x18(%esp)
081b31cd +0x187:  fstpl  0x10(%esp)
081b31d1 +0x18b:  mov    -0x38(%ebp),%eax
081b31d4 +0x18e:  mov    %eax,0xc(%esp)
081b31d8 +0x192:  mov    -0x2c(%ebp),%eax
081b31db +0x195:  mov    %eax,0x8(%esp)
081b31df +0x199:  movl   $"term:%d, base gold:%d\nperiod:%.2f, avatar:%.2f\n%d * %.2f * %d * %.2f = %d\ncritical Dice:%d/10,000 value:%.2f",0x4(%esp)
081b31e7 +0x1a1:  movl   $&_ZZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_resultE6buffer,(%esp)
081b31ee +0x1a8:  call   0807e440 <_init+0xd38>
081b31f3 +0x1ad:  movl   $&_ZZNK21CHARAC_LOAD_MERCENARY13GetRewardGoldEP5CUserR25competition_reward_resultE6buffer,0x8(%esp)
081b31fb +0x1b5:  mov    0xc(%ebp),%eax
081b31fe +0x1b8:  mov    %eax,0x4(%esp)
081b3202 +0x1bc:  mov    0x8(%ebp),%eax
081b3205 +0x1bf:  mov    %eax,(%esp)
081b3208 +0x1c2:  call   081b4190 <_ZNK21CHARAC_LOAD_MERCENARY18SendMessageToCUserEP5CUserPc>  ; CHARAC_LOAD_MERCENARY::SendMessageToCUser(CUser*, char*) const
081b320d +0x1c7:  fildl  -0x28(%ebp)
081b3210 +0x1ca:  fmuls  -0x20(%ebp)
081b3213 +0x1cd:  flds   "\n�#<"
081b3219 +0x1d3:  faddp  %st,%st(1)
081b321b +0x1d5:  fnstcw -0x4a(%ebp)
081b321e +0x1d8:  movzwl -0x4a(%ebp),%eax
081b3222 +0x1dc:  mov    $0xc,%ah
081b3224 +0x1de:  mov    %ax,-0x4c(%ebp)
081b3228 +0x1e2:  fldcw  -0x4c(%ebp)
081b322b +0x1e5:  fistpl -0x1c(%ebp)
081b322e +0x1e8:  fldcw  -0x4a(%ebp)
081b3231 +0x1eb:  fildl  -0x38(%ebp)
081b3234 +0x1ee:  fmuls  -0x34(%ebp)
081b3237 +0x1f1:  fildl  -0x2c(%ebp)
081b323a +0x1f4:  fmulp  %st,%st(1)
081b323c +0x1f6:  fmuls  -0x20(%ebp)
081b323f +0x1f9:  flds   "\n�#<"
081b3245 +0x1ff:  faddp  %st,%st(1)
081b3247 +0x201:  fldcw  -0x4c(%ebp)
081b324a +0x204:  fistpl -0x50(%ebp)
081b324d +0x207:  fldcw  -0x4a(%ebp)
081b3250 +0x20a:  mov    -0x50(%ebp),%edx
081b3253 +0x20d:  mov    0x10(%ebp),%eax
081b3256 +0x210:  mov    %edx,(%eax)
081b3258 +0x212:  mov    0x10(%ebp),%eax
081b325b +0x215:  mov    (%eax),%eax
081b325d +0x217:  mov    -0x1c(%ebp),%edx
081b3260 +0x21a:  sub    %eax,%edx
081b3262 +0x21c:  mov    0x10(%ebp),%eax
081b3265 +0x21f:  mov    %edx,0x4(%eax)
081b3268 +0x222:  mov    -0x1c(%ebp),%eax
081b326b +0x225:  lea    -0xc(%ebp),%esp
081b326e +0x228:  add    $0x0,%esp
081b3271 +0x22b:  pop    %ebx
081b3272 +0x22c:  pop    %esi
081b3273 +0x22d:  pop    %edi
081b3274 +0x22e:  pop    %ebp
081b3275 +0x22f:  ret
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::GetRewardGold @ 0x81b3046

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CHARAC_LOAD_MERCENARY::GetRewardGold(CUser*, competition_reward_result&) const */

int __thiscall
CHARAC_LOAD_MERCENARY::GetRewardGold
          (CHARAC_LOAD_MERCENARY *this,CUser *param_1,competition_reward_result *param_2)

{
  char cVar1;
  int iVar2;
  longdouble lVar3;
  undefined4 uVar4;
  int local_4c [2];
  ulong local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  
  iVar2 = G_CDataManager();
  iVar2 = iVar2 + 0xa8e4;
  local_40 = iVar2;
  Find_max_value_lower_N<std::pair<int,int>>((int)local_4c,(vector *)(int)*(short *)(this + 4));
  local_3c = local_4c[0];
  lVar3 = (longdouble)GetPeriodBonus(this);
  local_38 = (float)lVar3;
  lVar3 = (longdouble)GetAvatarBonus(this);
  local_34 = (float)lVar3;
  uVar4 = 0;
  local_30 = GetCompetitionPeriodTerm(this,(bool *)0x0);
  local_2c = (int)ROUND(_DAT_08bb8968 + (float)local_30 * (float)local_3c * local_38 * local_34);
  if (GetRewardGold(CUser*,competition_reward_result&)::probabilityRewardItem == '\0') {
    iVar2 = __cxa_guard_acquire(&GetRewardGold(CUser*,competition_reward_result&)::
                                 probabilityRewardItem,uVar4,iVar2);
    if (iVar2 != 0) {
                    /* try { // try from 081b3113 to 081b3117 has its CatchHandler @ 081b3126 */
      CMTRand::CMTRand((CMTRand *)
                       GetRewardGold(CUser*,competition_reward_result&)::probabilityRewardItem);
      __cxa_guard_release(&GetRewardGold(CUser*,competition_reward_result&)::probabilityRewardItem);
    }
  }
  iVar2 = G_CDataManager();
  local_44 = *(ulong *)(iVar2 + 0xa918);
  local_28 = CMTRand::randInt((CMTRand *)
                              GetRewardGold(CUser*,competition_reward_result&)::
                              probabilityRewardItem,&local_44);
  lVar3 = (longdouble)GetRewardCritical(this,local_28);
  local_24 = (float)lVar3;
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 != '\0') {
    sprintf(GetRewardGold(CUser*,competition_reward_result&)::buffer,
            "term:%d, base gold:%d\nperiod:%.2f, avatar:%.2f\n%d * %.2f * %d * %.2f = %d\ncritical Dice:%d/10,000 value:%.2f"
            ,local_30,local_3c,(double)local_38,(double)local_34,local_3c,(double)local_38,local_30,
            (double)local_34,local_2c,local_28,(double)local_24);
    SendMessageToCUser((CUser *)this,(char *)param_1);
  }
  iVar2 = (int)ROUND(_DAT_08bb8968 + (float)local_2c * local_24);
  *(int *)param_2 =
       (int)ROUND(_DAT_08bb8968 + (float)local_30 * (float)local_3c * local_38 * local_24);
  *(int *)(param_2 + 4) = iVar2 - *(int *)param_2;
  return iVar2;
}
```
