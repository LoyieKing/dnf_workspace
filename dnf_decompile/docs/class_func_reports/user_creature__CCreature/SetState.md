# SetState

`_ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE`

`user_creature::CCreature::SetState(CUser*, user_creature::CREATURE_STATE)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x0833715a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833715a  _ZN13user_creature9CCreature8SetStateEP5CUserNS_14CREATURE_STATEE
#           user_creature::CCreature::SetState(CUser*, user_creature::CREATURE_STATE)
# range [0x0833715a, 0x0833732f]
0833715a +0x000:  push   %ebp
0833715b +0x001:  mov    %esp,%ebp
0833715d +0x003:  push   %edi
0833715e +0x004:  push   %esi
0833715f +0x005:  push   %ebx
08337160 +0x006:  sub    $0x6c,%esp
08337163 +0x009:  mov    0x8(%ebp),%eax
08337166 +0x00c:  movzbl 0x4c(%eax),%eax
0833716a +0x010:  movzbl %al,%edx
0833716d +0x013:  mov    0x8(%ebp),%eax
08337170 +0x016:  mov    0x3c(%eax),%eax
08337173 +0x019:  mov    0x8(%ebp),%ecx
08337176 +0x01c:  add    $0x34,%ecx
08337179 +0x01f:  mov    %edx,0x8(%esp)
0833717d +0x023:  mov    %eax,0x4(%esp)
08337181 +0x027:  mov    %ecx,(%esp)
08337184 +0x02a:  call   08336cfc <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb>  ; user_creature::CStomach::GetStomachValue(user_creature::CREATURE_STATE, bool)
08337189 +0x02f:  fstps  -0x20(%ebp)
0833718c +0x032:  mov    0x8(%ebp),%eax
0833718f +0x035:  mov    0x3c(%eax),%eax
08337192 +0x038:  cmp    0x10(%ebp),%eax
08337195 +0x03b:  je     0833722e <+0xd4>
0833719b +0x041:  cmpl   $0x1,0x10(%ebp)
0833719f +0x045:  jne    0833722e <+0xd4>
083371a5 +0x04b:  mov    0x8(%ebp),%eax
083371a8 +0x04e:  movzbl 0x4c(%eax),%eax
083371ac +0x052:  test   %al,%al
083371ae +0x054:  je     0833722e <+0xd4>
083371b0 +0x056:  flds   -0x20(%ebp)
083371b3 +0x059:  fldl   &data#8e9ddc6f(.rodata)
083371b9 +0x05f:  fmulp  %st,%st(1)
083371bb +0x061:  fnstcw -0x4a(%ebp)
083371be +0x064:  movzwl -0x4a(%ebp),%eax
083371c2 +0x068:  mov    $0xc,%ah
083371c4 +0x06a:  mov    %ax,-0x4c(%ebp)
083371c8 +0x06e:  fldcw  -0x4c(%ebp)
083371cb +0x071:  fistpl -0x1c(%ebp)
083371ce +0x074:  fldcw  -0x4a(%ebp)
083371d1 +0x077:  mov    0xc(%ebp),%eax
083371d4 +0x07a:  mov    %eax,(%esp)
083371d7 +0x07d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
083371dc +0x082:  mov    %eax,%esi
083371de +0x084:  mov    0xc(%ebp),%eax
083371e1 +0x087:  mov    %eax,(%esp)
083371e4 +0x08a:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
083371e9 +0x08f:  movzwl %ax,%edi
083371ec +0x092:  mov    0xc(%ebp),%eax
083371ef +0x095:  mov    %eax,(%esp)
083371f2 +0x098:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
083371f7 +0x09d:  mov    %eax,%ebx
083371f9 +0x09f:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
083371fe +0x0a4:  mov    %esi,0x18(%esp)
08337202 +0x0a8:  mov    %edi,0x14(%esp)
08337206 +0x0ac:  mov    -0x1c(%ebp),%edx
08337209 +0x0af:  mov    %edx,0x10(%esp)
0833720d +0x0b3:  movl   $0x5c,0xc(%esp)
08337215 +0x0bb:  mov    %ebx,0x8(%esp)
08337219 +0x0bf:  movl   $0x0,0x4(%esp)
08337221 +0x0c7:  mov    %eax,(%esp)
08337224 +0x0ca:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08337229 +0x0cf:  jmp    08337318 <+0x1be>
0833722e +0x0d4:  mov    0x8(%ebp),%eax
08337231 +0x0d7:  mov    0x3c(%eax),%eax
08337234 +0x0da:  cmp    0x10(%ebp),%eax
08337237 +0x0dd:  je     08337318 <+0x1be>
0833723d +0x0e3:  cmpl   $0x3,0x10(%ebp)
08337241 +0x0e7:  jne    08337318 <+0x1be>
08337247 +0x0ed:  mov    0x8(%ebp),%eax
0833724a +0x0f0:  movzbl 0x4c(%eax),%eax
0833724e +0x0f4:  test   %al,%al
08337250 +0x0f6:  je     08337318 <+0x1be>
08337256 +0x0fc:  mov    0x8(%ebp),%eax
08337259 +0x0ff:  mov    %eax,(%esp)
0833725c +0x102:  call   08338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>  ; user_creature::CCreature::IsDieCreature()
08337261 +0x107:  test   %al,%al
08337263 +0x109:  je     08337318 <+0x1be>
08337269 +0x10f:  movl   $0x0,0xc(%esp)
08337271 +0x117:  movl   $0x0,0x8(%esp)
08337279 +0x11f:  mov    0xc(%ebp),%eax
0833727c +0x122:  mov    %eax,0x4(%esp)
08337280 +0x126:  lea    -0x40(%ebp),%eax
08337283 +0x129:  mov    %eax,(%esp)
08337286 +0x12c:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
0833728b +0x131:  lea    -0x40(%ebp),%eax
0833728e +0x134:  mov    %eax,(%esp)
08337291 +0x137:  call   083408b6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2983>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2983
08337296 +0x13c:  lea    -0x40(%ebp),%eax
08337299 +0x13f:  mov    %eax,(%esp)
0833729c +0x142:  call   0834048a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2557>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2557
083372a1 +0x147:  mov    0x8(%ebp),%eax
083372a4 +0x14a:  lea    0x34(%eax),%edx
083372a7 +0x14d:  mov    $0x3f800000,%eax
083372ac +0x152:  mov    %eax,0x4(%esp)
083372b0 +0x156:  mov    %edx,(%esp)
083372b3 +0x159:  call   0833eef6 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xfc3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xfc3
083372b8 +0x15e:  lea    -0x40(%ebp),%eax
083372bb +0x161:  mov    %eax,(%esp)
083372be +0x164:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
083372c3 +0x169:  mov    0x8(%ebp),%eax
083372c6 +0x16c:  mov    %eax,(%esp)
083372c9 +0x16f:  call   0833efbe <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x108b>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x108b
083372ce +0x174:  movl   $0x1,0x8(%esp)
083372d6 +0x17c:  mov    %eax,0x4(%esp)
083372da +0x180:  lea    -0x40(%ebp),%eax
083372dd +0x183:  mov    %eax,(%esp)
083372e0 +0x186:  call   08340918 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x29e5>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x29e5
083372e5 +0x18b:  lea    -0x40(%ebp),%eax
083372e8 +0x18e:  mov    %eax,(%esp)
083372eb +0x191:  call   083403e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x24ad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x24ad
083372f0 +0x196:  jmp    0833730d <+0x1b3>
083372f2 +0x198:  mov    %edx,%ebx
083372f4 +0x19a:  mov    %eax,%esi
083372f6 +0x19c:  lea    -0x40(%ebp),%eax
083372f9 +0x19f:  mov    %eax,(%esp)
083372fc +0x1a2:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08337301 +0x1a7:  mov    %esi,%eax
08337303 +0x1a9:  mov    %ebx,%edx
08337305 +0x1ab:  mov    %eax,(%esp)
08337308 +0x1ae:  call   08ae3750 <_Unwind_Resume>
0833730d +0x1b3:  lea    -0x40(%ebp),%eax
08337310 +0x1b6:  mov    %eax,(%esp)
08337313 +0x1b9:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08337318 +0x1be:  mov    0x8(%ebp),%eax
0833731b +0x1c1:  mov    0x10(%ebp),%edx
0833731e +0x1c4:  mov    %edx,0x3c(%eax)
08337321 +0x1c7:  mov    0x8(%ebp),%eax
08337324 +0x1ca:  movb   $0x1,0x40(%eax)
08337328 +0x1ce:  add    $0x6c,%esp
0833732b +0x1d1:  pop    %ebx
0833732c +0x1d2:  pop    %esi
0833732d +0x1d3:  pop    %edi
0833732e +0x1d4:  pop    %ebp
0833732f +0x1d5:  ret
```

## 反编译 C

```c
// user_creature::CCreature::SetState @ 0x833715a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::CCreature::SetState(CUser*, user_creature::CREATURE_STATE) */

void __thiscall
user_creature::CCreature::SetState(CCreature *this,CUserCharacInfo *param_1,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TimerQueue *pTVar5;
  int iVar6;
  longdouble lVar7;
  CPacketRespondent local_44 [32];
  float local_24;
  int local_20;
  
  lVar7 = (longdouble)
          CStomach::GetStomachValue
                    ((CStomach *)(this + 0x34),*(undefined4 *)(this + 0x3c),this[0x4c]);
  local_24 = (float)lVar7;
  if (((*(int *)(this + 0x3c) == param_3) || (param_3 != 1)) || (this[0x4c] == (CCreature)0x0)) {
    if (((*(int *)(this + 0x3c) != param_3) && (param_3 == 3)) && (this[0x4c] != (CCreature)0x0)) {
      cVar1 = IsDieCreature(this);
      if (cVar1 != '\0') {
        CPacketRespondent::CPacketRespondent(local_44,(CUser *)param_1,0,0);
                    /* try { // try from 08337291 to 083372ef has its CatchHandler @ 083372f2 */
        CPacketRespondent::MakeNotipacketRevivalCreature(local_44);
        CPacketRespondent::SendAll(local_44);
        CStomach::SetStomachValue((CStomach *)(this + 0x34),1.0);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
        iVar6 = CCreatureItem::GetUid((CCreatureItem *)this);
        CPacketRespondent::MakeNotipacketCreatureState(local_44,iVar6,1);
        CPacketRespondent::Send(local_44);
        CPacketRespondent::~CPacketRespondent(local_44);
      }
    }
  }
  else {
    local_20 = (int)ROUND((float)_DAT_08c2f460 * local_24);
    uVar3 = CUserCharacInfo::getCurCharacNo(param_1);
    uVar2 = CUser::get_unique_id((CUser *)param_1);
    uVar4 = CUser::GetUID((CUser *)param_1);
    pTVar5 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar5,0,uVar4,0x5c,local_20,uVar2,uVar3);
  }
  *(int *)(this + 0x3c) = param_3;
  this[0x40] = (CCreature)0x1;
  return;
}
```
