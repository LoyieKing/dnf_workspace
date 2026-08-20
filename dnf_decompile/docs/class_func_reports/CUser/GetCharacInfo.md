# GetCharacInfo

`_ZNK5CUser13GetCharacInfoEP15SIG_LOAD_CHARAC`

`CUser::GetCharacInfo(SIG_LOAD_CHARAC*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864bc04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864bc04  _ZNK5CUser13GetCharacInfoEP15SIG_LOAD_CHARAC
#           CUser::GetCharacInfo(SIG_LOAD_CHARAC*) const
# range [0x0864bc04, 0x0864bdb9]
0864bc04 +0x000:  push   %ebp
0864bc05 +0x001:  mov    %esp,%ebp
0864bc07 +0x003:  push   %esi
0864bc08 +0x004:  push   %ebx
0864bc09 +0x005:  sub    $0x40,%esp
0864bc0c +0x008:  mov    0x8(%ebp),%eax
0864bc0f +0x00b:  mov    %eax,(%esp)
0864bc12 +0x00e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0864bc17 +0x013:  mov    0xc(%ebp),%edx
0864bc1a +0x016:  mov    %eax,(%edx)
0864bc1c +0x018:  mov    0x8(%ebp),%eax
0864bc1f +0x01b:  mov    %eax,(%esp)
0864bc22 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864bc27 +0x023:  mov    (%eax),%edx
0864bc29 +0x025:  mov    0xc(%ebp),%eax
0864bc2c +0x028:  mov    %edx,0x4(%eax)
0864bc2f +0x02b:  mov    0xc(%ebp),%eax
0864bc32 +0x02e:  mov    0x4(%eax),%eax
0864bc35 +0x031:  mov    %eax,0x4(%esp)
0864bc39 +0x035:  mov    0x8(%ebp),%eax
0864bc3c +0x038:  mov    %eax,(%esp)
0864bc3f +0x03b:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
0864bc44 +0x040:  mov    %eax,-0x10(%ebp)
0864bc47 +0x043:  mov    0xc(%ebp),%eax
0864bc4a +0x046:  movl   $0x0,0x8(%eax)
0864bc51 +0x04d:  mov    0xc(%ebp),%eax
0864bc54 +0x050:  lea    0xc(%eax),%edx
0864bc57 +0x053:  mov    0xc(%ebp),%eax
0864bc5a +0x056:  mov    0x4(%eax),%eax
0864bc5d +0x059:  mov    %edx,0xc(%esp)
0864bc61 +0x05d:  mov    %eax,0x8(%esp)
0864bc65 +0x061:  mov    -0x10(%ebp),%eax
0864bc68 +0x064:  mov    %eax,0x4(%esp)
0864bc6c +0x068:  mov    0x8(%ebp),%eax
0864bc6f +0x06b:  mov    %eax,(%esp)
0864bc72 +0x06e:  call   0864bdba <_ZNK5CUser19getCharacInfoDetailEijP11CHARAC_DATA>  ; CUser::getCharacInfoDetail(int, unsigned int, CHARAC_DATA*) const
0864bc77 +0x073:  xor    $0x1,%eax
0864bc7a +0x076:  test   %al,%al
0864bc7c +0x078:  je     0864bcc8 <+0xc4>
0864bc7e +0x07a:  movl   $0x0,0xc(%esp)
0864bc86 +0x082:  movl   $0x1052,0x8(%esp)
0864bc8e +0x08a:  movl   $&_ZZNK5CUser13GetCharacInfoEP15SIG_LOAD_CHARACE19__PRETTY_FUNCTION__,0x4(%esp)
0864bc96 +0x092:  lea    -0x30(%ebp),%eax
0864bc99 +0x095:  mov    %eax,(%esp)
0864bc9c +0x098:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864bca1 +0x09d:  movl   $"getCharacInfoDetail() return = false",0x4(%esp)
0864bca9 +0x0a5:  lea    -0x30(%ebp),%eax
0864bcac +0x0a8:  mov    %eax,(%esp)
0864bcaf +0x0ab:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864bcb4 +0x0b0:  mov    0xc(%ebp),%eax
0864bcb7 +0x0b3:  movl   $0x1,0x8(%eax)
0864bcbe +0x0ba:  mov    $0x0,%eax
0864bcc3 +0x0bf:  jmp    0864bdb3 <+0x1af>
0864bcc8 +0x0c4:  mov    0x8(%ebp),%eax
0864bccb +0x0c7:  mov    %eax,(%esp)
0864bcce +0x0ca:  call   0869603c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2891>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2891
0864bcd3 +0x0cf:  mov    %eax,0x4(%esp)
0864bcd7 +0x0d3:  mov    0x8(%ebp),%eax
0864bcda +0x0d6:  mov    %eax,(%esp)
0864bcdd +0x0d9:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
0864bce2 +0x0de:  mov    %eax,-0xc(%ebp)
0864bce5 +0x0e1:  cmpl   $0x0,-0xc(%ebp)
0864bce9 +0x0e5:  js     0864bd07 <+0x103>
0864bceb +0x0e7:  mov    0x8(%ebp),%eax
0864bcee +0x0ea:  add    $0x796e8,%eax
0864bcf3 +0x0ef:  mov    %eax,(%esp)
0864bcf6 +0x0f2:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0864bcfb +0x0f7:  cmp    -0xc(%ebp),%eax
0864bcfe +0x0fa:  jle    0864bd07 <+0x103>
0864bd00 +0x0fc:  mov    $0x1,%eax
0864bd05 +0x101:  jmp    0864bd0c <+0x108>
0864bd07 +0x103:  mov    $0x0,%eax
0864bd0c +0x108:  test   %al,%al
0864bd0e +0x10a:  je     0864bd38 <+0x134>
0864bd10 +0x10c:  mov    0x8(%ebp),%eax
0864bd13 +0x10f:  mov    %eax,(%esp)
0864bd16 +0x112:  call   0869603c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2891>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2891
0864bd1b +0x117:  mov    0xc(%ebp),%edx
0864bd1e +0x11a:  mov    %eax,0x686(%edx)
0864bd24 +0x120:  mov    0x8(%ebp),%eax
0864bd27 +0x123:  mov    %eax,(%esp)
0864bd2a +0x126:  call   08696018 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x286d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x286d
0864bd2f +0x12b:  mov    0xc(%ebp),%edx
0864bd32 +0x12e:  mov    %al,0x68a(%edx)
0864bd38 +0x134:  mov    0xc(%ebp),%eax
0864bd3b +0x137:  lea    0x68b(%eax),%edx
0864bd41 +0x13d:  mov    0xc(%ebp),%eax
0864bd44 +0x140:  mov    0x686(%eax),%eax
0864bd4a +0x146:  mov    %edx,0xc(%esp)
0864bd4e +0x14a:  mov    %eax,0x8(%esp)
0864bd52 +0x14e:  mov    -0xc(%ebp),%eax
0864bd55 +0x151:  mov    %eax,0x4(%esp)
0864bd59 +0x155:  mov    0x8(%ebp),%eax
0864bd5c +0x158:  mov    %eax,(%esp)
0864bd5f +0x15b:  call   086904f0 <_ZNK5CUser16getTagCharacInfoEijP15TAG_CHARAC_DATA>  ; CUser::getTagCharacInfo(int, unsigned int, TAG_CHARAC_DATA*) const
0864bd64 +0x160:  mov    0xc(%ebp),%eax
0864bd67 +0x163:  mov    0x59(%eax),%esi
0864bd6a +0x166:  mov    0xc(%ebp),%eax
0864bd6d +0x169:  mov    0x4(%eax),%ebx
0864bd70 +0x16c:  movl   $0x0,0xc(%esp)
0864bd78 +0x174:  movl   $0x1066,0x8(%esp)
0864bd80 +0x17c:  movl   $&_ZZNK5CUser13GetCharacInfoEP15SIG_LOAD_CHARACE19__PRETTY_FUNCTION__,0x4(%esp)
0864bd88 +0x184:  lea    -0x20(%ebp),%eax
0864bd8b +0x187:  mov    %eax,(%esp)
0864bd8e +0x18a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864bd93 +0x18f:  mov    %esi,0xc(%esp)
0864bd97 +0x193:  mov    %ebx,0x8(%esp)
0864bd9b +0x197:  movl   $"CharLastPlayTick char(%d) t(%d)",0x4(%esp)
0864bda3 +0x19f:  lea    -0x20(%ebp),%eax
0864bda6 +0x1a2:  mov    %eax,(%esp)
0864bda9 +0x1a5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864bdae +0x1aa:  mov    $0x1,%eax
0864bdb3 +0x1af:  add    $0x40,%esp
0864bdb6 +0x1b2:  pop    %ebx
0864bdb7 +0x1b3:  pop    %esi
0864bdb8 +0x1b4:  pop    %ebp
0864bdb9 +0x1b5:  ret
```

## 反编译 C

```c
// CUser::GetCharacInfo @ 0x864bc04

/* CUser::GetCharacInfo(SIG_LOAD_CHARAC*) const */

undefined4 __thiscall CUser::GetCharacInfo(CUser *this,SIG_LOAD_CHARAC *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  SIG_LOAD_CHARAC SVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  uVar5 = get_acc_id(this);
  *(undefined4 *)param_1 = uVar5;
  puVar6 = (undefined4 *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  *(undefined4 *)(param_1 + 4) = *puVar6;
  local_14 = get_charac_idx(this,*(uint *)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = 0;
  cVar3 = getCharacInfoDetail(this,local_14,*(uint *)(param_1 + 4),(CHARAC_DATA *)(param_1 + 0xc));
  if (cVar3 == '\x01') {
    uVar7 = CUserCharacInfo::getCurCharacTagCharacNo((CUserCharacInfo *)this);
    local_10 = get_charac_idx(this,uVar7);
    if ((local_10 < 0) ||
       (iVar8 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)),
       iVar8 <= local_10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar5 = CUserCharacInfo::getCurCharacTagCharacNo((CUserCharacInfo *)this);
      *(undefined4 *)(param_1 + 0x686) = uVar5;
      SVar4 = (SIG_LOAD_CHARAC)
              CUserCharacInfo::getCurCharacStrikerSkillIndex((CUserCharacInfo *)this);
      param_1[0x68a] = SVar4;
    }
    getTagCharacInfo(this,local_10,*(uint *)(param_1 + 0x686),(TAG_CHARAC_DATA *)(param_1 + 0x68b));
    uVar5 = *(undefined4 *)(param_1 + 0x59);
    uVar1 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_24,"bool CUser::GetCharacInfo(SIG_LOAD_CHARAC*) const",0x1066,0);
    cMyTrace::operator()(local_24,"CharLastPlayTick char(%d) t(%d)",uVar1,uVar5);
    return 1;
  }
  cMyTrace::cMyTrace(local_34,"bool CUser::GetCharacInfo(SIG_LOAD_CHARAC*) const",0x1052,0);
  cMyTrace::operator()(local_34,"getCharacInfoDetail() return = false");
  *(undefined4 *)(param_1 + 8) = 1;
  return 0;
}
```
