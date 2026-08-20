# UpdateEventInfo

`_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser`

`LevelupSupportEventManger::UpdateEventInfo(CUser*)`

| 类 | 地址 |
|---|---|
| `LevelupSupportEventManger` | `0x081471c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081471c6  _ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser
#           LevelupSupportEventManger::UpdateEventInfo(CUser*)
# range [0x081471c6, 0x08147361]
081471c6 +0x000:  push   %ebp
081471c7 +0x001:  mov    %esp,%ebp
081471c9 +0x003:  sub    $0x38,%esp
081471cc +0x006:  mov    0xc(%ebp),%eax
081471cf +0x009:  mov    %eax,(%esp)
081471d2 +0x00c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081471d7 +0x011:  mov    %eax,-0x1c(%ebp)
081471da +0x014:  mov    -0x1c(%ebp),%eax
081471dd +0x017:  mov    %eax,0x4(%esp)
081471e1 +0x01b:  mov    0x8(%ebp),%eax
081471e4 +0x01e:  mov    %eax,(%esp)
081471e7 +0x021:  call   08147164 <_ZN25LevelupSupportEventManger12CheckNewStepEi>  ; LevelupSupportEventManger::CheckNewStep(int)
081471ec +0x026:  test   %al,%al
081471ee +0x028:  jne    08147211 <+0x4b>
081471f0 +0x02a:  mov    0xc(%ebp),%eax
081471f3 +0x02d:  mov    %eax,(%esp)
081471f6 +0x030:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081471fb +0x035:  mov    &_ZN10GlobalData12s_GM_ManagerE,%edx
08147201 +0x03b:  mov    %eax,0x4(%esp)
08147205 +0x03f:  mov    %edx,(%esp)
08147208 +0x042:  call   08299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>  ; CGM_Manager::GetCurrentGmMode(unsigned int)
0814720d +0x047:  test   %al,%al
0814720f +0x049:  je     08147218 <+0x52>
08147211 +0x04b:  mov    $0x1,%eax
08147216 +0x050:  jmp    0814721d <+0x57>
08147218 +0x052:  mov    $0x0,%eax
0814721d +0x057:  test   %al,%al
0814721f +0x059:  je     0814735f <+0x199>
08147225 +0x05f:  mov    0xc(%ebp),%eax
08147228 +0x062:  mov    %eax,(%esp)
0814722b +0x065:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08147230 +0x06a:  mov    %eax,-0x18(%ebp)
08147233 +0x06d:  mov    0xc(%ebp),%eax
08147236 +0x070:  mov    %eax,(%esp)
08147239 +0x073:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0814723e +0x078:  mov    %eax,-0x14(%ebp)
08147241 +0x07b:  movl   $0x0,-0x10(%ebp)
08147248 +0x082:  mov    0x8(%ebp),%eax
0814724b +0x085:  add    $0x34,%eax
0814724e +0x088:  mov    %eax,(%esp)
08147251 +0x08b:  call   08147cfa <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x1ed>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x1ed
08147256 +0x090:  mov    %eax,-0xc(%ebp)
08147259 +0x093:  jmp    08147311 <+0x14b>
0814725e +0x098:  mov    0xc(%ebp),%eax
08147261 +0x09b:  lea    0x8d0e4(%eax),%edx
08147267 +0x0a1:  mov    -0x10(%ebp),%eax
0814726a +0x0a4:  mov    %eax,0x4(%esp)
0814726e +0x0a8:  mov    %edx,(%esp)
08147271 +0x0ab:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
08147276 +0x0b0:  movzwl (%eax),%eax
08147279 +0x0b3:  movzwl %ax,%eax
0814727c +0x0b6:  cmp    -0x1c(%ebp),%eax
0814727f +0x0b9:  jg     081472aa <+0xe4>
08147281 +0x0bb:  mov    0xc(%ebp),%eax
08147284 +0x0be:  lea    0x8d0e4(%eax),%edx
0814728a +0x0c4:  mov    -0x10(%ebp),%eax
0814728d +0x0c7:  mov    %eax,0x4(%esp)
08147291 +0x0cb:  mov    %edx,(%esp)
08147294 +0x0ce:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
08147299 +0x0d3:  movzwl 0x2(%eax),%eax
0814729d +0x0d7:  cmp    $0x2,%ax
081472a1 +0x0db:  je     081472aa <+0xe4>
081472a3 +0x0dd:  mov    $0x1,%eax
081472a8 +0x0e2:  jmp    081472af <+0xe9>
081472aa +0x0e4:  mov    $0x0,%eax
081472af +0x0e9:  test   %al,%al
081472b1 +0x0eb:  je     0814730d <+0x147>
081472b3 +0x0ed:  mov    0xc(%ebp),%eax
081472b6 +0x0f0:  lea    0x8d0e4(%eax),%edx
081472bc +0x0f6:  mov    -0x10(%ebp),%eax
081472bf +0x0f9:  mov    %eax,0x4(%esp)
081472c3 +0x0fd:  mov    %edx,(%esp)
081472c6 +0x100:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
081472cb +0x105:  movw   $0x1,0x2(%eax)
081472d1 +0x10b:  mov    0xc(%ebp),%eax
081472d4 +0x10e:  lea    0x8d0e4(%eax),%edx
081472da +0x114:  mov    -0x10(%ebp),%eax
081472dd +0x117:  mov    %eax,0x4(%esp)
081472e1 +0x11b:  mov    %edx,(%esp)
081472e4 +0x11e:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
081472e9 +0x123:  movzwl (%eax),%eax
081472ec +0x126:  movzwl %ax,%edx
081472ef +0x129:  mov    -0x14(%ebp),%eax
081472f2 +0x12c:  movl   $0x1,0xc(%esp)
081472fa +0x134:  mov    %edx,0x8(%esp)
081472fe +0x138:  mov    %eax,0x4(%esp)
08147302 +0x13c:  mov    -0x18(%ebp),%eax
08147305 +0x13f:  mov    %eax,(%esp)
08147308 +0x142:  call   0844cc2e <_ZN26DB_SaveEventLevelupSupport11makeRequestEiiii>  ; DB_SaveEventLevelupSupport::makeRequest(int, int, int, int)
0814730d +0x147:  addl   $0x1,-0x10(%ebp)
08147311 +0x14b:  mov    -0x10(%ebp),%eax
08147314 +0x14e:  cmp    -0xc(%ebp),%eax
08147317 +0x151:  setb   %al
0814731a +0x154:  test   %al,%al
0814731c +0x156:  jne    0814725e <+0x98>
08147322 +0x15c:  mov    -0x1c(%ebp),%eax
08147325 +0x15f:  mov    %eax,0x4(%esp)
08147329 +0x163:  mov    0x8(%ebp),%eax
0814732c +0x166:  mov    %eax,(%esp)
0814732f +0x169:  call   08147164 <_ZN25LevelupSupportEventManger12CheckNewStepEi>  ; LevelupSupportEventManger::CheckNewStep(int)
08147334 +0x16e:  test   %al,%al
08147336 +0x170:  je     0814734c <+0x186>
08147338 +0x172:  mov    -0x1c(%ebp),%eax
0814733b +0x175:  mov    %eax,0x4(%esp)
0814733f +0x179:  mov    0xc(%ebp),%eax
08147342 +0x17c:  mov    %eax,(%esp)
08147345 +0x17f:  call   0814701e <_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri>  ; LevelupSupportEventManger::SendCharacState(CUser*, int)
0814734a +0x184:  jmp    0814735f <+0x199>
0814734c +0x186:  movl   $0x0,0x4(%esp)
08147354 +0x18e:  mov    0xc(%ebp),%eax
08147357 +0x191:  mov    %eax,(%esp)
0814735a +0x194:  call   0814701e <_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri>  ; LevelupSupportEventManger::SendCharacState(CUser*, int)
0814735f +0x199:  leave
08147360 +0x19a:  ret
08147361 +0x19b:  nop
```

## 反编译 C

```c
// LevelupSupportEventManger::UpdateEventInfo @ 0x81471c6

/* LevelupSupportEventManger::UpdateEventInfo(CUser*) */

void __thiscall
LevelupSupportEventManger::UpdateEventInfo(LevelupSupportEventManger *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  uint local_14;
  
  iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  cVar2 = CheckNewStep((int)this);
  if (cVar2 == '\0') {
    CUser::get_acc_id(param_1);
    cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0814721d;
    }
  }
  bVar1 = true;
LAB_0814721d:
  if (bVar1) {
    iVar4 = CUser::GetUID(param_1);
    iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    local_14 = 0;
    uVar6 = std::
            vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
            ::size((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                    *)(this + 0x34));
    for (; local_14 < uVar6; local_14 = local_14 + 1) {
      puVar7 = (ushort *)
               std::
               vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
               ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                             *)(param_1 + 0x8d0e4),local_14);
      if (iVar3 < (int)(uint)*puVar7) {
LAB_081472aa:
        bVar1 = false;
      }
      else {
        iVar8 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                              *)(param_1 + 0x8d0e4),local_14);
        if (*(short *)(iVar8 + 2) == 2) goto LAB_081472aa;
        bVar1 = true;
      }
      if (bVar1) {
        iVar8 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                              *)(param_1 + 0x8d0e4),local_14);
        *(undefined2 *)(iVar8 + 2) = 1;
        puVar7 = (ushort *)
                 std::
                 vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                 ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                               *)(param_1 + 0x8d0e4),local_14);
        DB_SaveEventLevelupSupport::makeRequest(iVar4,iVar5,(uint)*puVar7,1);
      }
    }
    cVar2 = CheckNewStep((int)this);
    if (cVar2 == '\0') {
      SendCharacState(param_1,0);
    }
    else {
      SendCharacState(param_1,iVar3);
    }
  }
  return;
}
```
