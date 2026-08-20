# _AvailableAssault

`_ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi`

`pvp_assault::CAssaultPlace::_AvailableAssault(CUser*, int&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e75ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e75ca  _ZN11pvp_assault13CAssaultPlace17_AvailableAssaultEP5CUserRi
#           pvp_assault::CAssaultPlace::_AvailableAssault(CUser*, int&)
# range [0x082e75ca, 0x082e7829]
082e75ca +0x000:  push   %ebp
082e75cb +0x001:  mov    %esp,%ebp
082e75cd +0x003:  sub    $0x28,%esp
082e75d0 +0x006:  movl   $0x0,-0x14(%ebp)
082e75d7 +0x00d:  mov    0xc(%ebp),%eax
082e75da +0x010:  mov    %eax,(%esp)
082e75dd +0x013:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
082e75e2 +0x018:  test   %al,%al
082e75e4 +0x01a:  je     082e75f4 <+0x2a>
082e75e6 +0x01c:  mov    0xc(%ebp),%eax
082e75e9 +0x01f:  mov    %eax,(%esp)
082e75ec +0x022:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082e75f1 +0x027:  mov    %eax,-0x14(%ebp)
082e75f4 +0x02a:  movl   $0xf,-0x10(%ebp)
082e75fb +0x031:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e7600 +0x036:  mov    %eax,(%esp)
082e7603 +0x039:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e7608 +0x03e:  test   %al,%al
082e760a +0x040:  je     082e7622 <+0x58>
082e760c +0x042:  mov    0xc(%ebp),%eax
082e760f +0x045:  mov    %eax,(%esp)
082e7612 +0x048:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e7617 +0x04d:  cmp    $0x7,%al
082e7619 +0x04f:  jne    082e7622 <+0x58>
082e761b +0x051:  mov    $0x1,%eax
082e7620 +0x056:  jmp    082e7627 <+0x5d>
082e7622 +0x058:  mov    $0x0,%eax
082e7627 +0x05d:  test   %al,%al
082e7629 +0x05f:  je     082e7632 <+0x68>
082e762b +0x061:  movl   $0xc,-0x10(%ebp)
082e7632 +0x068:  mov    0x10(%ebp),%eax
082e7635 +0x06b:  mov    %eax,0x8(%esp)
082e7639 +0x06f:  mov    -0x10(%ebp),%eax
082e763c +0x072:  mov    %eax,0x4(%esp)
082e7640 +0x076:  mov    0xc(%ebp),%eax
082e7643 +0x079:  mov    %eax,(%esp)
082e7646 +0x07c:  call   0864fc3e <_ZN5CUser19CheckLimitMiniumAgeEiRi>  ; CUser::CheckLimitMiniumAge(int, int&)
082e764b +0x081:  xor    $0x1,%eax
082e764e +0x084:  test   %al,%al
082e7650 +0x086:  je     082e767e <+0xb4>
082e7652 +0x088:  movl   $0x4,(%esp)
082e7659 +0x08f:  call   08725800 <__cxa_allocate_exception>
082e765e +0x094:  mov    %eax,%edx
082e7660 +0x096:  movl   $0x5f,(%edx)
082e7666 +0x09c:  movl   $0x0,0x8(%esp)
082e766e +0x0a4:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082e7676 +0x0ac:  mov    %eax,(%esp)
082e7679 +0x0af:  call   08724c50 <__cxa_throw>
082e767e +0x0b4:  mov    0xc(%ebp),%eax
082e7681 +0x0b7:  mov    %eax,(%esp)
082e7684 +0x0ba:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082e7689 +0x0bf:  cmp    $0x1d,%eax
082e768c +0x0c2:  setle  %al
082e768f +0x0c5:  test   %al,%al
082e7691 +0x0c7:  je     082e770c <+0x142>
082e7693 +0x0c9:  mov    0xc(%ebp),%eax
082e7696 +0x0cc:  mov    %eax,(%esp)
082e7699 +0x0cf:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082e769e +0x0d4:  movzwl %ax,%edx
082e76a1 +0x0d7:  mov    0x10(%ebp),%eax
082e76a4 +0x0da:  mov    %edx,(%eax)
082e76a6 +0x0dc:  mov    0x8(%ebp),%eax
082e76a9 +0x0df:  mov    0x134(%eax),%eax
082e76af +0x0e5:  cmp    0xc(%ebp),%eax
082e76b2 +0x0e8:  jne    082e76e0 <+0x116>
082e76b4 +0x0ea:  movl   $0x4,(%esp)
082e76bb +0x0f1:  call   08725800 <__cxa_allocate_exception>
082e76c0 +0x0f6:  mov    %eax,%edx
082e76c2 +0x0f8:  movl   $0xd,(%edx)
082e76c8 +0x0fe:  movl   $0x0,0x8(%esp)
082e76d0 +0x106:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082e76d8 +0x10e:  mov    %eax,(%esp)
082e76db +0x111:  call   08724c50 <__cxa_throw>
082e76e0 +0x116:  movl   $0x4,(%esp)
082e76e7 +0x11d:  call   08725800 <__cxa_allocate_exception>
082e76ec +0x122:  mov    %eax,%edx
082e76ee +0x124:  movl   $0xe,(%edx)
082e76f4 +0x12a:  movl   $0x0,0x8(%esp)
082e76fc +0x132:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082e7704 +0x13a:  mov    %eax,(%esp)
082e7707 +0x13d:  call   08724c50 <__cxa_throw>
082e770c +0x142:  cmpl   $0x0,-0x14(%ebp)
082e7710 +0x146:  je     082e7827 <+0x25d>
082e7716 +0x14c:  movl   $0xf,-0xc(%ebp)
082e771d +0x153:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082e7722 +0x158:  mov    %eax,(%esp)
082e7725 +0x15b:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082e772a +0x160:  test   %al,%al
082e772c +0x162:  je     082e7744 <+0x17a>
082e772e +0x164:  mov    0xc(%ebp),%eax
082e7731 +0x167:  mov    %eax,(%esp)
082e7734 +0x16a:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e7739 +0x16f:  cmp    $0x7,%al
082e773b +0x171:  jne    082e7744 <+0x17a>
082e773d +0x173:  mov    $0x1,%eax
082e7742 +0x178:  jmp    082e7749 <+0x17f>
082e7744 +0x17a:  mov    $0x0,%eax
082e7749 +0x17f:  test   %al,%al
082e774b +0x181:  je     082e7754 <+0x18a>
082e774d +0x183:  movl   $0xc,-0xc(%ebp)
082e7754 +0x18a:  mov    0x10(%ebp),%eax
082e7757 +0x18d:  mov    %eax,0x8(%esp)
082e775b +0x191:  mov    -0xc(%ebp),%eax
082e775e +0x194:  mov    %eax,0x4(%esp)
082e7762 +0x198:  mov    -0x14(%ebp),%eax
082e7765 +0x19b:  mov    %eax,(%esp)
082e7768 +0x19e:  call   0859a210 <_ZN6CParty20is_limit_minimum_ageEiRi>  ; CParty::is_limit_minimum_age(int, int&)
082e776d +0x1a3:  xor    $0x1,%eax
082e7770 +0x1a6:  test   %al,%al
082e7772 +0x1a8:  je     082e77a0 <+0x1d6>
082e7774 +0x1aa:  movl   $0x4,(%esp)
082e777b +0x1b1:  call   08725800 <__cxa_allocate_exception>
082e7780 +0x1b6:  mov    %eax,%edx
082e7782 +0x1b8:  movl   $0x5f,(%edx)
082e7788 +0x1be:  movl   $0x0,0x8(%esp)
082e7790 +0x1c6:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082e7798 +0x1ce:  mov    %eax,(%esp)
082e779b +0x1d1:  call   08724c50 <__cxa_throw>
082e77a0 +0x1d6:  mov    0x10(%ebp),%eax
082e77a3 +0x1d9:  mov    %eax,0x8(%esp)
082e77a7 +0x1dd:  movl   $0x1e,0x4(%esp)
082e77af +0x1e5:  mov    -0x14(%ebp),%eax
082e77b2 +0x1e8:  mov    %eax,(%esp)
082e77b5 +0x1eb:  call   0859a286 <_ZN6CParty22is_limit_minimum_levelEiRi>  ; CParty::is_limit_minimum_level(int, int&)
082e77ba +0x1f0:  xor    $0x1,%eax
082e77bd +0x1f3:  test   %al,%al
082e77bf +0x1f5:  je     082e7827 <+0x25d>
082e77c1 +0x1f7:  mov    0x8(%ebp),%eax
082e77c4 +0x1fa:  mov    0x134(%eax),%eax
082e77ca +0x200:  cmp    0xc(%ebp),%eax
082e77cd +0x203:  jne    082e77fb <+0x231>
082e77cf +0x205:  movl   $0x4,(%esp)
082e77d6 +0x20c:  call   08725800 <__cxa_allocate_exception>
082e77db +0x211:  mov    %eax,%edx
082e77dd +0x213:  movl   $0xfe,(%edx)
082e77e3 +0x219:  movl   $0x0,0x8(%esp)
082e77eb +0x221:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082e77f3 +0x229:  mov    %eax,(%esp)
082e77f6 +0x22c:  call   08724c50 <__cxa_throw>
082e77fb +0x231:  movl   $0x4,(%esp)
082e7802 +0x238:  call   08725800 <__cxa_allocate_exception>
082e7807 +0x23d:  mov    %eax,%edx
082e7809 +0x23f:  movl   $0xff,(%edx)
082e780f +0x245:  movl   $0x0,0x8(%esp)
082e7817 +0x24d:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082e781f +0x255:  mov    %eax,(%esp)
082e7822 +0x258:  call   08724c50 <__cxa_throw>
082e7827 +0x25d:  leave
082e7828 +0x25e:  ret
082e7829 +0x25f:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_AvailableAssault @ 0x82e75ca

/* pvp_assault::CAssaultPlace::_AvailableAssault(CUser*, int&) */

void __thiscall
pvp_assault::CAssaultPlace::_AvailableAssault(CAssaultPlace *this,CUser *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  CParty *local_18;
  int local_14;
  int local_10;
  
  local_18 = (CParty *)0x0;
  cVar2 = CUser::CheckInParty(param_1);
  if (cVar2 != '\0') {
    local_18 = (CParty *)CUser::GetParty(param_1);
  }
  local_14 = 0xf;
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if ((cVar2 == '\0') ||
     (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_14 = 0xc;
  }
  cVar2 = CUser::CheckLimitMiniumAge(param_1,local_14,param_2);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x5f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  if (iVar4 < 0x1e) {
    uVar5 = CUser::get_unique_id(param_1);
    *param_2 = uVar5 & 0xffff;
    if (*(CUser **)(this + 0x134) != param_1) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0xe;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0xd;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  if (local_18 != (CParty *)0x0) {
    local_10 = 0xf;
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if ((cVar2 == '\0') ||
       (cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1), cVar2 != '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_10 = 0xc;
    }
    cVar2 = CParty::is_limit_minimum_age(local_18,local_10,param_2);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0x5f;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = CParty::is_limit_minimum_level(local_18,0x1e,param_2);
    if (cVar2 == '\x01') {
      return;
    }
    if (*(CUser **)(this + 0x134) != param_1) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0xff;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0xfe;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  return;
}
```
