# process

`_ZN21DisPatcher_LeaveParty7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_LeaveParty::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_LeaveParty` | `0x081c4256` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c4256  _ZN21DisPatcher_LeaveParty7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_LeaveParty::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c4256, 0x081c4325]
081c4256 +0x00:  push   %ebp
081c4257 +0x01:  mov    %esp,%ebp
081c4259 +0x03:  sub    $0x28,%esp
081c425c +0x06:  mov    0x14(%ebp),%eax
081c425f +0x09:  mov    %eax,-0x14(%ebp)
081c4262 +0x0c:  mov    0x10(%ebp),%eax
081c4265 +0x0f:  mov    %eax,0x8(%esp)
081c4269 +0x13:  mov    0xc(%ebp),%eax
081c426c +0x16:  mov    %eax,0x4(%esp)
081c4270 +0x1a:  mov    0x8(%ebp),%eax
081c4273 +0x1d:  mov    %eax,(%esp)
081c4276 +0x20:  call   081c436e <_ZN21DisPatcher_LeaveParty11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_LeaveParty::check_error(CUser*, MSG_BASE&)
081c427b +0x25:  mov    %eax,%edx
081c427d +0x27:  mov    -0x14(%ebp),%eax
081c4280 +0x2a:  mov    %edx,0x4(%eax)
081c4283 +0x2d:  mov    -0x14(%ebp),%eax
081c4286 +0x30:  mov    0x4(%eax),%eax
081c4289 +0x33:  test   %eax,%eax
081c428b +0x35:  jle    081c4297 <+0x41>
081c428d +0x37:  mov    $0x0,%eax
081c4292 +0x3c:  jmp    081c4324 <+0xce>
081c4297 +0x41:  mov    -0x14(%ebp),%eax
081c429a +0x44:  mov    0x4(%eax),%eax
081c429d +0x47:  test   %eax,%eax
081c429f +0x49:  jns    081c42d0 <+0x7a>
081c42a1 +0x4b:  mov    0xc(%ebp),%eax
081c42a4 +0x4e:  mov    %eax,(%esp)
081c42a7 +0x51:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c42ac +0x56:  mov    -0x14(%ebp),%edx
081c42af +0x59:  mov    0x4(%edx),%edx
081c42b2 +0x5c:  mov    %eax,0xc(%esp)
081c42b6 +0x60:  mov    %edx,0x8(%esp)
081c42ba +0x64:  movl   $&_ZZN21DisPatcher_LeaveParty7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c42c2 +0x6c:  movl   $0x109f,(%esp)
081c42c9 +0x73:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c42ce +0x78:  jmp    081c4324 <+0xce>
081c42d0 +0x7a:  mov    0xc(%ebp),%eax
081c42d3 +0x7d:  mov    %eax,(%esp)
081c42d6 +0x80:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c42db +0x85:  mov    %eax,-0x10(%ebp)
081c42de +0x88:  movl   $0x2,0x8(%esp)
081c42e6 +0x90:  mov    0xc(%ebp),%eax
081c42e9 +0x93:  mov    %eax,0x4(%esp)
081c42ed +0x97:  mov    -0x10(%ebp),%eax
081c42f0 +0x9a:  mov    %eax,(%esp)
081c42f3 +0x9d:  call   0859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>  ; CParty::leave_user(CUser*, ENUM_PARTY_INFO_TYPE)
081c42f8 +0xa2:  mov    %eax,-0xc(%ebp)
081c42fb +0xa5:  cmpl   $0x1,-0xc(%ebp)
081c42ff +0xa9:  jne    081c430b <+0xb5>
081c4301 +0xab:  mov    -0x14(%ebp),%eax
081c4304 +0xae:  movl   $0x1,0x4(%eax)
081c430b +0xb5:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081c4310 +0xba:  mov    0xc(%ebp),%edx
081c4313 +0xbd:  mov    %edx,0x4(%esp)
081c4317 +0xc1:  mov    %eax,(%esp)
081c431a +0xc4:  call   082ed672 <_ZN11pvp_assault11CAssaultMgr25ForcedMoveAtPowerWarPlaceEP5CUser>  ; pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace(CUser*)
081c431f +0xc9:  mov    $0x0,%eax
081c4324 +0xce:  leave
081c4325 +0xcf:  ret
```

## 反编译 C

```c
// DisPatcher_LeaveParty::process @ 0x81c4256

/* DisPatcher_LeaveParty::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_LeaveParty::process
          (DisPatcher_LeaveParty *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CParty *pCVar3;
  int iVar4;
  CAssaultMgr *this_00;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x109f,
                       "virtual int DisPatcher_LeaveParty::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar2);
    }
    else {
      pCVar3 = (CParty *)CUser::GetParty(param_1);
      iVar4 = CParty::leave_user(pCVar3,param_1,2);
      if (iVar4 == 1) {
        *(undefined4 *)(param_3 + 4) = 1;
      }
      this_00 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      pvp_assault::CAssaultMgr::ForcedMoveAtPowerWarPlace(this_00,param_1);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
