# AvailableAssault

`_ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_`

`pvp_assault::CAssaultMgr::AvailableAssault(CUser*, CUser const*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082f0022` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f0022  _ZN11pvp_assault11CAssaultMgr16AvailableAssaultEP5CUserPKS1_
#           pvp_assault::CAssaultMgr::AvailableAssault(CUser*, CUser const*)
# range [0x082f0022, 0x082f023b]
082f0022 +0x000:  push   %ebp
082f0023 +0x001:  mov    %esp,%ebp
082f0025 +0x003:  sub    $0x28,%esp
082f0028 +0x006:  movl   $0x0,-0x14(%ebp)
082f002f +0x00d:  movl   $0x0,-0x10(%ebp)
082f0036 +0x014:  movl   $0xf,-0xc(%ebp)
082f003d +0x01b:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082f0042 +0x020:  mov    %eax,(%esp)
082f0045 +0x023:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082f004a +0x028:  test   %al,%al
082f004c +0x02a:  je     082f0064 <+0x42>
082f004e +0x02c:  mov    0x8(%ebp),%eax
082f0051 +0x02f:  mov    %eax,(%esp)
082f0054 +0x032:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082f0059 +0x037:  cmp    $0x7,%al
082f005b +0x039:  jne    082f0064 <+0x42>
082f005d +0x03b:  mov    $0x1,%eax
082f0062 +0x040:  jmp    082f0069 <+0x47>
082f0064 +0x042:  mov    $0x0,%eax
082f0069 +0x047:  test   %al,%al
082f006b +0x049:  je     082f0074 <+0x52>
082f006d +0x04b:  movl   $0xc,-0xc(%ebp)
082f0074 +0x052:  mov    0x8(%ebp),%eax
082f0077 +0x055:  mov    %eax,(%esp)
082f007a +0x058:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
082f007f +0x05d:  test   %al,%al
082f0081 +0x05f:  je     082f0091 <+0x6f>
082f0083 +0x061:  mov    0x8(%ebp),%eax
082f0086 +0x064:  mov    %eax,(%esp)
082f0089 +0x067:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082f008e +0x06c:  mov    %eax,-0x10(%ebp)
082f0091 +0x06f:  lea    -0x14(%ebp),%eax
082f0094 +0x072:  mov    %eax,0x8(%esp)
082f0098 +0x076:  mov    -0xc(%ebp),%eax
082f009b +0x079:  mov    %eax,0x4(%esp)
082f009f +0x07d:  mov    0x8(%ebp),%eax
082f00a2 +0x080:  mov    %eax,(%esp)
082f00a5 +0x083:  call   0864fc3e <_ZN5CUser19CheckLimitMiniumAgeEiRi>  ; CUser::CheckLimitMiniumAge(int, int&)
082f00aa +0x088:  xor    $0x1,%eax
082f00ad +0x08b:  test   %al,%al
082f00af +0x08d:  je     082f00dd <+0xbb>
082f00b1 +0x08f:  movl   $0x4,(%esp)
082f00b8 +0x096:  call   08725800 <__cxa_allocate_exception>
082f00bd +0x09b:  mov    %eax,%edx
082f00bf +0x09d:  movl   $0x5f,(%edx)
082f00c5 +0x0a3:  movl   $0x0,0x8(%esp)
082f00cd +0x0ab:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082f00d5 +0x0b3:  mov    %eax,(%esp)
082f00d8 +0x0b6:  call   08724c50 <__cxa_throw>
082f00dd +0x0bb:  mov    0x8(%ebp),%eax
082f00e0 +0x0be:  mov    %eax,(%esp)
082f00e3 +0x0c1:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082f00e8 +0x0c6:  cmp    $0x1d,%eax
082f00eb +0x0c9:  setle  %al
082f00ee +0x0cc:  test   %al,%al
082f00f0 +0x0ce:  je     082f0163 <+0x141>
082f00f2 +0x0d0:  mov    0x8(%ebp),%eax
082f00f5 +0x0d3:  mov    %eax,(%esp)
082f00f8 +0x0d6:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082f00fd +0x0db:  movzwl %ax,%eax
082f0100 +0x0de:  mov    %eax,-0x14(%ebp)
082f0103 +0x0e1:  mov    0x8(%ebp),%eax
082f0106 +0x0e4:  cmp    0xc(%ebp),%eax
082f0109 +0x0e7:  jne    082f0137 <+0x115>
082f010b +0x0e9:  movl   $0x4,(%esp)
082f0112 +0x0f0:  call   08725800 <__cxa_allocate_exception>
082f0117 +0x0f5:  mov    %eax,%edx
082f0119 +0x0f7:  movl   $0xd,(%edx)
082f011f +0x0fd:  movl   $0x0,0x8(%esp)
082f0127 +0x105:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082f012f +0x10d:  mov    %eax,(%esp)
082f0132 +0x110:  call   08724c50 <__cxa_throw>
082f0137 +0x115:  movl   $0x4,(%esp)
082f013e +0x11c:  call   08725800 <__cxa_allocate_exception>
082f0143 +0x121:  mov    %eax,%edx
082f0145 +0x123:  movl   $0xe,(%edx)
082f014b +0x129:  movl   $0x0,0x8(%esp)
082f0153 +0x131:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082f015b +0x139:  mov    %eax,(%esp)
082f015e +0x13c:  call   08724c50 <__cxa_throw>
082f0163 +0x141:  cmpl   $0x0,-0x10(%ebp)
082f0167 +0x145:  je     082f023a <+0x218>
082f016d +0x14b:  lea    -0x14(%ebp),%eax
082f0170 +0x14e:  mov    %eax,0x8(%esp)
082f0174 +0x152:  mov    -0xc(%ebp),%eax
082f0177 +0x155:  mov    %eax,0x4(%esp)
082f017b +0x159:  mov    -0x10(%ebp),%eax
082f017e +0x15c:  mov    %eax,(%esp)
082f0181 +0x15f:  call   0859a210 <_ZN6CParty20is_limit_minimum_ageEiRi>  ; CParty::is_limit_minimum_age(int, int&)
082f0186 +0x164:  xor    $0x1,%eax
082f0189 +0x167:  test   %al,%al
082f018b +0x169:  je     082f01b9 <+0x197>
082f018d +0x16b:  movl   $0x4,(%esp)
082f0194 +0x172:  call   08725800 <__cxa_allocate_exception>
082f0199 +0x177:  mov    %eax,%edx
082f019b +0x179:  movl   $0x5f,(%edx)
082f01a1 +0x17f:  movl   $0x0,0x8(%esp)
082f01a9 +0x187:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082f01b1 +0x18f:  mov    %eax,(%esp)
082f01b4 +0x192:  call   08724c50 <__cxa_throw>
082f01b9 +0x197:  lea    -0x14(%ebp),%eax
082f01bc +0x19a:  mov    %eax,0x8(%esp)
082f01c0 +0x19e:  movl   $0x1e,0x4(%esp)
082f01c8 +0x1a6:  mov    -0x10(%ebp),%eax
082f01cb +0x1a9:  mov    %eax,(%esp)
082f01ce +0x1ac:  call   0859a286 <_ZN6CParty22is_limit_minimum_levelEiRi>  ; CParty::is_limit_minimum_level(int, int&)
082f01d3 +0x1b1:  xor    $0x1,%eax
082f01d6 +0x1b4:  test   %al,%al
082f01d8 +0x1b6:  je     082f023a <+0x218>
082f01da +0x1b8:  mov    0x8(%ebp),%eax
082f01dd +0x1bb:  cmp    0xc(%ebp),%eax
082f01e0 +0x1be:  jne    082f020e <+0x1ec>
082f01e2 +0x1c0:  movl   $0x4,(%esp)
082f01e9 +0x1c7:  call   08725800 <__cxa_allocate_exception>
082f01ee +0x1cc:  mov    %eax,%edx
082f01f0 +0x1ce:  movl   $0xfe,(%edx)
082f01f6 +0x1d4:  movl   $0x0,0x8(%esp)
082f01fe +0x1dc:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082f0206 +0x1e4:  mov    %eax,(%esp)
082f0209 +0x1e7:  call   08724c50 <__cxa_throw>
082f020e +0x1ec:  movl   $0x4,(%esp)
082f0215 +0x1f3:  call   08725800 <__cxa_allocate_exception>
082f021a +0x1f8:  mov    %eax,%edx
082f021c +0x1fa:  movl   $0xff,(%edx)
082f0222 +0x200:  movl   $0x0,0x8(%esp)
082f022a +0x208:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082f0232 +0x210:  mov    %eax,(%esp)
082f0235 +0x213:  call   08724c50 <__cxa_throw>
082f023a +0x218:  leave
082f023b +0x219:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::AvailableAssault @ 0x82f0022

/* pvp_assault::CAssaultMgr::AvailableAssault(CUser*, CUser const*) */

void pvp_assault::CAssaultMgr::AvailableAssault(CUser *param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_18;
  CParty *local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = (CParty *)0x0;
  local_10 = 0xf;
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 != '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 == '\a') {
      bVar1 = true;
      goto LAB_082f0069;
    }
  }
  bVar1 = false;
LAB_082f0069:
  if (bVar1) {
    local_10 = 0xc;
  }
  cVar2 = CUser::CheckInParty(param_1);
  if (cVar2 != '\0') {
    local_14 = (CParty *)CUser::GetParty(param_1);
  }
  cVar2 = CUser::CheckLimitMiniumAge(param_1,local_10,(int *)&local_18);
  if (cVar2 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x5f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  if (iVar4 < 0x1e) {
    local_18 = CUser::get_unique_id(param_1);
    local_18 = local_18 & 0xffff;
    if (param_1 == param_2) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0xd;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0xe;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  if (local_14 != (CParty *)0x0) {
    cVar2 = CParty::is_limit_minimum_age(local_14,local_10,(int *)&local_18);
    if (cVar2 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0x5f;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    cVar2 = CParty::is_limit_minimum_level(local_14,0x1e,(int *)&local_18);
    if (cVar2 != '\x01') {
      if (param_1 == param_2) {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = 0xfe;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0xff;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
  }
  return;
}
```
