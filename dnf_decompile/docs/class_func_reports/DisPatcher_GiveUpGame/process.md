# process

`_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_GiveUpGame::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_GiveUpGame` | `0x081c40b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c40b4  _ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_GiveUpGame::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c40b4, 0x081c41e7]
081c40b4 +0x000:  push   %ebp
081c40b5 +0x001:  mov    %esp,%ebp
081c40b7 +0x003:  sub    $0x38,%esp
081c40ba +0x006:  mov    0x10(%ebp),%eax
081c40bd +0x009:  mov    %eax,0x8(%esp)
081c40c1 +0x00d:  mov    0xc(%ebp),%eax
081c40c4 +0x010:  mov    %eax,0x4(%esp)
081c40c8 +0x014:  mov    0x8(%ebp),%eax
081c40cb +0x017:  mov    %eax,(%esp)
081c40ce +0x01a:  call   081c41e8 <_ZN21DisPatcher_GiveUpGame11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_GiveUpGame::check_error(CUser*, MSG_BASE&)
081c40d3 +0x01f:  mov    %eax,-0x14(%ebp)
081c40d6 +0x022:  cmpl   $0x0,-0x14(%ebp)
081c40da +0x026:  jle    081c40e6 <+0x32>
081c40dc +0x028:  mov    $0xffffffff,%eax
081c40e1 +0x02d:  jmp    081c41e5 <+0x131>
081c40e6 +0x032:  cmpl   $0x0,-0x14(%ebp)
081c40ea +0x036:  jns    081c411c <+0x68>
081c40ec +0x038:  mov    0xc(%ebp),%eax
081c40ef +0x03b:  mov    %eax,(%esp)
081c40f2 +0x03e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c40f7 +0x043:  mov    %eax,0xc(%esp)
081c40fb +0x047:  movl   $0x0,0x8(%esp)
081c4103 +0x04f:  movl   $&_ZZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c410b +0x057:  movl   $0xff7,(%esp)
081c4112 +0x05e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c4117 +0x063:  jmp    081c41e5 <+0x131>
081c411c +0x068:  mov    0xc(%ebp),%eax
081c411f +0x06b:  mov    %eax,(%esp)
081c4122 +0x06e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c4127 +0x073:  cmp    $0xa,%eax
081c412a +0x076:  sete   %al
081c412d +0x079:  test   %al,%al
081c412f +0x07b:  je     081c4160 <+0xac>
081c4131 +0x07d:  mov    0xc(%ebp),%eax
081c4134 +0x080:  mov    %eax,(%esp)
081c4137 +0x083:  call   086552a4 <_ZN5CUser13getDeathTowerEv>  ; CUser::getDeathTower()
081c413c +0x088:  mov    %eax,-0x10(%ebp)
081c413f +0x08b:  cmpl   $0x0,-0x10(%ebp)
081c4143 +0x08f:  je     081c41e2 <+0x12e>
081c4149 +0x095:  mov    0xc(%ebp),%eax
081c414c +0x098:  mov    %eax,0x4(%esp)
081c4150 +0x09c:  mov    -0x10(%ebp),%eax
081c4153 +0x09f:  mov    %eax,(%esp)
081c4156 +0x0a2:  call   08465ac2 <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser>  ; WongWork::CDeathTower::handleLeaveUser(CUser*)
081c415b +0x0a7:  jmp    081c41e2 <+0x12e>
081c4160 +0x0ac:  mov    0xc(%ebp),%eax
081c4163 +0x0af:  mov    %eax,(%esp)
081c4166 +0x0b2:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c416b +0x0b7:  cmp    $0xc,%eax
081c416e +0x0ba:  sete   %al
081c4171 +0x0bd:  test   %al,%al
081c4173 +0x0bf:  je     081c4182 <+0xce>
081c4175 +0x0c1:  mov    0xc(%ebp),%eax
081c4178 +0x0c4:  mov    %eax,(%esp)
081c417b +0x0c7:  call   08146ad8 <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser>  ; Global::CBossTowerFunc::GiveUpGame(CUser*)
081c4180 +0x0cc:  jmp    081c41e2 <+0x12e>
081c4182 +0x0ce:  mov    0xc(%ebp),%eax
081c4185 +0x0d1:  mov    %eax,(%esp)
081c4188 +0x0d4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c418d +0x0d9:  cmp    $0xd,%eax
081c4190 +0x0dc:  sete   %al
081c4193 +0x0df:  test   %al,%al
081c4195 +0x0e1:  je     081c41a4 <+0xf0>
081c4197 +0x0e3:  mov    0xc(%ebp),%eax
081c419a +0x0e6:  mov    %eax,(%esp)
081c419d +0x0e9:  call   08130fa8 <_ZN12advancealtar7Manager10giveUpGameEP5CUser>  ; advancealtar::Manager::giveUpGame(CUser*)
081c41a2 +0x0ee:  jmp    081c41e2 <+0x12e>
081c41a4 +0x0f0:  mov    0xc(%ebp),%eax
081c41a7 +0x0f3:  mov    %eax,(%esp)
081c41aa +0x0f6:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c41af +0x0fb:  mov    %eax,-0xc(%ebp)
081c41b2 +0x0fe:  cmpl   $0x0,-0xc(%ebp)
081c41b6 +0x102:  je     081c41e2 <+0x12e>
081c41b8 +0x104:  movl   $0x0,0x10(%esp)
081c41c0 +0x10c:  movl   $0x0,0xc(%esp)
081c41c8 +0x114:  movl   $0x1,0x8(%esp)
081c41d0 +0x11c:  mov    0xc(%ebp),%eax
081c41d3 +0x11f:  mov    %eax,0x4(%esp)
081c41d7 +0x123:  mov    -0xc(%ebp),%eax
081c41da +0x126:  mov    %eax,(%esp)
081c41dd +0x129:  call   085b2baa <_ZN6CParty11giveup_gameEP5CUserbbb>  ; CParty::giveup_game(CUser*, bool, bool, bool)
081c41e2 +0x12e:  mov    -0x14(%ebp),%eax
081c41e5 +0x131:  leave
081c41e6 +0x132:  ret
081c41e7 +0x133:  nop
```

## 反编译 C

```c
// DisPatcher_GiveUpGame::process @ 0x81c40b4

/* DisPatcher_GiveUpGame::process(CUser*, MSG_BASE&, ParamBase&) */

int DisPatcher_GiveUpGame::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CDeathTower *this;
  CParty *this_00;
  
  iVar1 = check_error(param_1,param_2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = CUser::get_acc_id((CUser *)param_2);
      iVar1 = LineFunc(0xff7,
                       "virtual int DisPatcher_GiveUpGame::process(CUser*, MSG_BASE&, ParamBase&)",0
                       ,uVar2);
    }
    else {
      iVar3 = CUser::get_state((CUser *)param_2);
      if (iVar3 == 10) {
        this = (CDeathTower *)CUser::getDeathTower((CUser *)param_2);
        if (this != (CDeathTower *)0x0) {
          WongWork::CDeathTower::handleLeaveUser(this,(CUser *)param_2);
        }
      }
      else {
        iVar3 = CUser::get_state((CUser *)param_2);
        if (iVar3 == 0xc) {
          Global::CBossTowerFunc::GiveUpGame((CUser *)param_2);
        }
        else {
          iVar3 = CUser::get_state((CUser *)param_2);
          if (iVar3 == 0xd) {
            advancealtar::Manager::giveUpGame((CUser *)param_2);
          }
          else {
            this_00 = (CParty *)CUser::GetParty((CUser *)param_2);
            if (this_00 != (CParty *)0x0) {
              CParty::giveup_game(this_00,(CUser *)param_2,true,false,false);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}
```
