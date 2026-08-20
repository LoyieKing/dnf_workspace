# ChangeGrowType_GM

`_ZN5CUser17ChangeGrowType_GMEii`

`CUser::ChangeGrowType_GM(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867b048` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867b048  _ZN5CUser17ChangeGrowType_GMEii
#           CUser::ChangeGrowType_GM(int, int)
# range [0x0867b048, 0x0867b195]
0867b048 +0x000:  push   %ebp
0867b049 +0x001:  mov    %esp,%ebp
0867b04b +0x003:  push   %ebx
0867b04c +0x004:  sub    $0x34,%esp
0867b04f +0x007:  mov    0x8(%ebp),%eax
0867b052 +0x00a:  mov    %eax,(%esp)
0867b055 +0x00d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867b05a +0x012:  test   %eax,%eax
0867b05c +0x014:  sete   %al
0867b05f +0x017:  test   %al,%al
0867b061 +0x019:  je     0867b06d <+0x25>
0867b063 +0x01b:  mov    $0x0,%eax
0867b068 +0x020:  jmp    0867b190 <+0x148>
0867b06d +0x025:  cmpl   $0x0,0xc(%ebp)
0867b071 +0x029:  js     0867b085 <+0x3d>
0867b073 +0x02b:  cmpl   $0x5,0xc(%ebp)
0867b077 +0x02f:  jg     0867b085 <+0x3d>
0867b079 +0x031:  cmpl   $0x0,0x10(%ebp)
0867b07d +0x035:  js     0867b085 <+0x3d>
0867b07f +0x037:  cmpl   $0x1,0x10(%ebp)
0867b083 +0x03b:  jle    0867b0e1 <+0x99>
0867b085 +0x03d:  movl   $"Invalid grow type , first :",0x4(%esp)
0867b08d +0x045:  movl   $&_ZSt4cerr,(%esp)
0867b094 +0x04c:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0867b099 +0x051:  mov    0xc(%ebp),%edx
0867b09c +0x054:  mov    %edx,0x4(%esp)
0867b0a0 +0x058:  mov    %eax,(%esp)
0867b0a3 +0x05b:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
0867b0a8 +0x060:  movl   $"second :",0x4(%esp)
0867b0b0 +0x068:  mov    %eax,(%esp)
0867b0b3 +0x06b:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0867b0b8 +0x070:  mov    0x10(%ebp),%edx
0867b0bb +0x073:  mov    %edx,0x4(%esp)
0867b0bf +0x077:  mov    %eax,(%esp)
0867b0c2 +0x07a:  call   08700040 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0xb7d4
0867b0c7 +0x07f:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0867b0cf +0x087:  mov    %eax,(%esp)
0867b0d2 +0x08a:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0867b0d7 +0x08f:  mov    $0x0,%eax
0867b0dc +0x094:  jmp    0867b190 <+0x148>
0867b0e1 +0x099:  mov    0x8(%ebp),%eax
0867b0e4 +0x09c:  mov    %eax,(%esp)
0867b0e7 +0x09f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867b0ec +0x0a4:  mov    %eax,%ebx
0867b0ee +0x0a6:  mov    0x8(%ebp),%eax
0867b0f1 +0x0a9:  mov    %eax,(%esp)
0867b0f4 +0x0ac:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
0867b0f9 +0x0b1:  mov    %eax,(%esp)
0867b0fc +0x0b4:  call   08609398 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x6b>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x6b
0867b101 +0x0b9:  movzwl %ax,%eax
0867b104 +0x0bc:  lea    (%ebx,%eax,1),%eax
0867b107 +0x0bf:  mov    %eax,-0xc(%ebp)
0867b10a +0x0c2:  mov    0x8(%ebp),%eax
0867b10d +0x0c5:  mov    %eax,(%esp)
0867b110 +0x0c8:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0867b115 +0x0cd:  mov    %eax,%ebx
0867b117 +0x0cf:  mov    0x8(%ebp),%eax
0867b11a +0x0d2:  mov    %eax,(%esp)
0867b11d +0x0d5:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0867b122 +0x0da:  mov    0x10(%ebp),%edx
0867b125 +0x0dd:  mov    %edx,0x10(%esp)
0867b129 +0x0e1:  mov    0xc(%ebp),%edx
0867b12c +0x0e4:  mov    %edx,0xc(%esp)
0867b130 +0x0e8:  mov    %ebx,0x8(%esp)
0867b134 +0x0ec:  mov    -0xc(%ebp),%edx
0867b137 +0x0ef:  mov    %edx,0x4(%esp)
0867b13b +0x0f3:  mov    %eax,(%esp)
0867b13e +0x0f6:  call   086053c6 <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii>  ; SkillSlot::debugCheckGrowTypeSkill(int, int, int, int)
0867b143 +0x0fb:  mov    0x10(%ebp),%eax
0867b146 +0x0fe:  movzbl %al,%edx
0867b149 +0x101:  mov    0xc(%ebp),%eax
0867b14c +0x104:  movzbl %al,%eax
0867b14f +0x107:  movl   $0x2,0x10(%esp)
0867b157 +0x10f:  movl   $0x0,0xc(%esp)
0867b15f +0x117:  mov    %edx,0x8(%esp)
0867b163 +0x11b:  mov    %eax,0x4(%esp)
0867b167 +0x11f:  mov    0x8(%ebp),%eax
0867b16a +0x122:  mov    %eax,(%esp)
0867b16d +0x125:  call   086787fc <_ZN5CUser13set_grow_typeEhhPc21eChangeGrowTypeReason>  ; CUser::set_grow_type(unsigned char, unsigned char, char*, eChangeGrowTypeReason)
0867b172 +0x12a:  mov    0x10(%ebp),%eax
0867b175 +0x12d:  mov    %eax,0x8(%esp)
0867b179 +0x131:  mov    0xc(%ebp),%eax
0867b17c +0x134:  mov    %eax,0x4(%esp)
0867b180 +0x138:  mov    0x8(%ebp),%eax
0867b183 +0x13b:  mov    %eax,(%esp)
0867b186 +0x13e:  call   08668823 <_Z29_postCheckForceChangeGrowTypeP5CUserii>  ; _postCheckForceChangeGrowType(CUser*, int, int)
0867b18b +0x143:  mov    $0x1,%eax
0867b190 +0x148:  add    $0x34,%esp
0867b193 +0x14b:  pop    %ebx
0867b194 +0x14c:  pop    %ebp
0867b195 +0x14d:  ret
```

## 反编译 C

```c
// CUser::ChangeGrowType_GM @ 0x867b048

/* CUser::ChangeGrowType_GM(int, int) */

undefined4 __thiscall CUser::ChangeGrowType_GM(CUser *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  ostream *poVar3;
  CUserPremium *this_00;
  uint uVar4;
  int iVar5;
  SkillSlot *this_01;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if ((((param_1 < 0) || (5 < param_1)) || (param_2 < 0)) || (1 < param_2)) {
    poVar3 = std::operator<<((ostream *)&std::cerr,"Invalid grow type , first :");
    poVar3 = (ostream *)std::ostream::operator<<(poVar3,param_1);
    poVar3 = std::operator<<(poVar3,"second :");
    poVar3 = (ostream *)std::ostream::operator<<(poVar3,param_2);
    std::ostream::operator<<(poVar3,std::endl<char,std::char_traits<char>>);
    uVar2 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    this_00 = (CUserPremium *)GetPremiumInfo(this);
    uVar4 = WongWork::CUserPremium::getOverSkillLevel(this_00);
    iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
    this_01 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::debugCheckGrowTypeSkill(this_01,iVar1 + (uVar4 & 0xffff),iVar5,param_1,param_2);
    set_grow_type(this,param_1 & 0xff,param_2 & 0xff,0,2);
    _postCheckForceChangeGrowType(this,param_1,param_2);
    uVar2 = 1;
  }
  return uVar2;
}
```
