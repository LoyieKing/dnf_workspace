# _AgreeEnchant

`_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE`

`expert_job::CEnchanter::_AgreeEnchant(CUser*, ENUM_AGREE_ENCHANT_TYPE)`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849dd94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849dd94  _ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE
#           expert_job::CEnchanter::_AgreeEnchant(CUser*, ENUM_AGREE_ENCHANT_TYPE)
# range [0x0849dd94, 0x0849df5d]
0849dd94 +0x000:  push   %ebp
0849dd95 +0x001:  mov    %esp,%ebp
0849dd97 +0x003:  push   %esi
0849dd98 +0x004:  push   %ebx
0849dd99 +0x005:  sub    $0x20,%esp
0849dd9c +0x008:  movl   $0x0,-0xc(%ebp)
0849dda3 +0x00f:  mov    0xc(%ebp),%eax
0849dda6 +0x012:  mov    %eax,(%esp)
0849dda9 +0x015:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849ddae +0x01a:  mov    %eax,%ebx
0849ddb0 +0x01c:  mov    0x8(%ebp),%eax
0849ddb3 +0x01f:  mov    0x2c(%eax),%eax
0849ddb6 +0x022:  mov    %eax,(%esp)
0849ddb9 +0x025:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849ddbe +0x02a:  cmp    %ax,%bx
0849ddc1 +0x02d:  setne  %al
0849ddc4 +0x030:  test   %al,%al
0849ddc6 +0x032:  je     0849ddd2 <+0x3e>
0849ddc8 +0x034:  mov    $0x3,%eax
0849ddcd +0x039:  jmp    0849df56 <+0x1c2>
0849ddd2 +0x03e:  mov    0x10(%ebp),%eax
0849ddd5 +0x041:  cmp    $0x1,%eax
0849ddd8 +0x044:  je     0849def1 <+0x15d>
0849ddde +0x04a:  cmp    $0x2,%eax
0849dde1 +0x04d:  je     0849df2d <+0x199>
0849dde7 +0x053:  test   %eax,%eax
0849dde9 +0x055:  jne    0849df51 <+0x1bd>
0849ddef +0x05b:  mov    0x8(%ebp),%eax
0849ddf2 +0x05e:  add    $0x18,%eax
0849ddf5 +0x061:  mov    %eax,(%esp)
0849ddf8 +0x064:  call   0849f286 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb7>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb7
0849ddfd +0x069:  test   %al,%al
0849ddff +0x06b:  je     0849de0b <+0x77>
0849de01 +0x06d:  mov    $0x15,%eax
0849de06 +0x072:  jmp    0849df56 <+0x1c2>
0849de0b +0x077:  mov    0x8(%ebp),%eax
0849de0e +0x07a:  add    $0x18,%eax
0849de11 +0x07d:  mov    %eax,(%esp)
0849de14 +0x080:  call   0849f252 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x83>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x83
0849de19 +0x085:  mov    0x8(%ebp),%eax
0849de1c +0x088:  movl   $0x0,0x40(%eax)
0849de23 +0x08f:  mov    0x8(%ebp),%eax
0849de26 +0x092:  mov    0x28(%eax),%eax
0849de29 +0x095:  test   %eax,%eax
0849de2b +0x097:  je     0849de46 <+0xb2>
0849de2d +0x099:  mov    0x8(%ebp),%eax
0849de30 +0x09c:  mov    0x28(%eax),%eax
0849de33 +0x09f:  mov    %eax,(%esp)
0849de36 +0x0a2:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849de3b +0x0a7:  test   %eax,%eax
0849de3d +0x0a9:  je     0849de46 <+0xb2>
0849de3f +0x0ab:  mov    $0x1,%eax
0849de44 +0x0b0:  jmp    0849de4b <+0xb7>
0849de46 +0x0b2:  mov    $0x0,%eax
0849de4b +0x0b7:  test   %al,%al
0849de4d +0x0b9:  je     0849df50 <+0x1bc>
0849de53 +0x0bf:  lea    -0x18(%ebp),%eax
0849de56 +0x0c2:  mov    %eax,(%esp)
0849de59 +0x0c5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0849de5e +0x0ca:  movl   $0xac,0x8(%esp)
0849de66 +0x0d2:  movl   $0x1,0x4(%esp)
0849de6e +0x0da:  lea    -0x18(%ebp),%eax
0849de71 +0x0dd:  mov    %eax,(%esp)
0849de74 +0x0e0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849de79 +0x0e5:  movl   $0x1,0x4(%esp)
0849de81 +0x0ed:  lea    -0x18(%ebp),%eax
0849de84 +0x0f0:  mov    %eax,(%esp)
0849de87 +0x0f3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849de8c +0x0f8:  movl   $0x3,0x4(%esp)
0849de94 +0x100:  lea    -0x18(%ebp),%eax
0849de97 +0x103:  mov    %eax,(%esp)
0849de9a +0x106:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849de9f +0x10b:  movl   $0x1,0x4(%esp)
0849dea7 +0x113:  lea    -0x18(%ebp),%eax
0849deaa +0x116:  mov    %eax,(%esp)
0849dead +0x119:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849deb2 +0x11e:  mov    0x8(%ebp),%eax
0849deb5 +0x121:  mov    0x28(%eax),%eax
0849deb8 +0x124:  lea    -0x18(%ebp),%edx
0849debb +0x127:  mov    %edx,0x4(%esp)
0849debf +0x12b:  mov    %eax,(%esp)
0849dec2 +0x12e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849dec7 +0x133:  jmp    0849dee4 <+0x150>
0849dec9 +0x135:  mov    %edx,%ebx
0849decb +0x137:  mov    %eax,%esi
0849decd +0x139:  lea    -0x18(%ebp),%eax
0849ded0 +0x13c:  mov    %eax,(%esp)
0849ded3 +0x13f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849ded8 +0x144:  mov    %esi,%eax
0849deda +0x146:  mov    %ebx,%edx
0849dedc +0x148:  mov    %eax,(%esp)
0849dedf +0x14b:  call   08ae3750 <_Unwind_Resume>
0849dee4 +0x150:  lea    -0x18(%ebp),%eax
0849dee7 +0x153:  mov    %eax,(%esp)
0849deea +0x156:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849deef +0x15b:  jmp    0849df51 <+0x1bd>
0849def1 +0x15d:  movl   $0x1,0x4(%esp)
0849def9 +0x165:  mov    0x8(%ebp),%eax
0849defc +0x168:  mov    %eax,(%esp)
0849deff +0x16b:  call   0849cb2c <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE>  ; expert_job::CEnchanter::_DoEnchant(ENUM_TRY_ENCHANT_TYPE)
0849df04 +0x170:  mov    %eax,-0xc(%ebp)
0849df07 +0x173:  mov    0x8(%ebp),%eax
0849df0a +0x176:  mov    (%eax),%eax
0849df0c +0x178:  add    $0x4,%eax
0849df0f +0x17b:  mov    (%eax),%edx
0849df11 +0x17d:  movl   $0x0,0x8(%esp)
0849df19 +0x185:  mov    0xc(%ebp),%eax
0849df1c +0x188:  mov    %eax,0x4(%esp)
0849df20 +0x18c:  mov    0x8(%ebp),%eax
0849df23 +0x18f:  mov    %eax,(%esp)
0849df26 +0x192:  call   *%edx
0849df28 +0x194:  mov    -0xc(%ebp),%eax
0849df2b +0x197:  jmp    0849df56 <+0x1c2>
0849df2d +0x199:  mov    0x8(%ebp),%eax
0849df30 +0x19c:  mov    (%eax),%eax
0849df32 +0x19e:  add    $0x4,%eax
0849df35 +0x1a1:  mov    (%eax),%edx
0849df37 +0x1a3:  movl   $0x2,0x8(%esp)
0849df3f +0x1ab:  mov    0xc(%ebp),%eax
0849df42 +0x1ae:  mov    %eax,0x4(%esp)
0849df46 +0x1b2:  mov    0x8(%ebp),%eax
0849df49 +0x1b5:  mov    %eax,(%esp)
0849df4c +0x1b8:  call   *%edx
0849df4e +0x1ba:  jmp    0849df51 <+0x1bd>
0849df50 +0x1bc:  nop
0849df51 +0x1bd:  mov    $0x0,%eax
0849df56 +0x1c2:  add    $0x20,%esp
0849df59 +0x1c5:  pop    %ebx
0849df5a +0x1c6:  pop    %esi
0849df5b +0x1c7:  pop    %ebp
0849df5c +0x1c8:  ret
0849df5d +0x1c9:  nop
```

## 反编译 C

```c
// expert_job::CEnchanter::_AgreeEnchant @ 0x849dd94

/* expert_job::CEnchanter::_AgreeEnchant(CUser*, ENUM_AGREE_ENCHANT_TYPE) */

undefined4 __thiscall
expert_job::CEnchanter::_AgreeEnchant(CEnchanter *this,CUser *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  PacketGuard local_1c [12];
  undefined4 local_10;
  
  local_10 = 0;
  sVar3 = CUser::get_unique_id(param_1);
  sVar4 = CUser::get_unique_id(*(CUser **)(this + 0x2c));
  if (sVar3 != sVar4) {
    return 3;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      (**(code **)(*(int *)this + 4))(this,param_1,2);
    }
    else if (param_3 == 0) {
      cVar2 = ExpertJobMaterial::Empty((ExpertJobMaterial *)(this + 0x18));
      if (cVar2 != '\0') {
        return 0x15;
      }
      ExpertJobMaterial::Reset((ExpertJobMaterial *)(this + 0x18));
      *(undefined4 *)(this + 0x40) = 0;
      if ((*(int *)(this + 0x28) == 0) ||
         (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x28)), iVar5 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0849de74 to 0849dec6 has its CatchHandler @ 0849dec9 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xac);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,3);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send(*(CUser **)(this + 0x28),local_1c);
        PacketGuard::~PacketGuard(local_1c);
      }
    }
    return 0;
  }
  local_10 = _DoEnchant(this,1);
  (**(code **)(*(int *)this + 4))(this,param_1,0);
  return local_10;
}
```
