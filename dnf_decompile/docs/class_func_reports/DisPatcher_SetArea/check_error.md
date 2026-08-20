# check_error

`_ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_SetArea::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetArea` | `0x081c93e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c93e8  _ZN18DisPatcher_SetArea11check_errorEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_SetArea::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c93e8, 0x081c951b]
081c93e8 +0x000:  push   %ebp
081c93e9 +0x001:  mov    %esp,%ebp
081c93eb +0x003:  push   %ebx
081c93ec +0x004:  sub    $0x24,%esp
081c93ef +0x007:  mov    0x14(%ebp),%eax
081c93f2 +0x00a:  mov    %eax,-0x10(%ebp)
081c93f5 +0x00d:  mov    0x10(%ebp),%eax
081c93f8 +0x010:  mov    %eax,-0xc(%ebp)
081c93fb +0x013:  mov    0xc(%ebp),%eax
081c93fe +0x016:  mov    %eax,(%esp)
081c9401 +0x019:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c9406 +0x01e:  cmp    $0x3,%eax
081c9409 +0x021:  setne  %al
081c940c +0x024:  test   %al,%al
081c940e +0x026:  je     081c941a <+0x32>
081c9410 +0x028:  mov    $0x7fffffff,%eax
081c9415 +0x02d:  jmp    081c9515 <+0x12d>
081c941a +0x032:  mov    0xc(%ebp),%eax
081c941d +0x035:  mov    %eax,(%esp)
081c9420 +0x038:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
081c9425 +0x03d:  test   %al,%al
081c9427 +0x03f:  je     081c9440 <+0x58>
081c9429 +0x041:  mov    -0xc(%ebp),%eax
081c942c +0x044:  movzbl 0xd(%eax),%edx
081c9430 +0x048:  mov    -0x10(%ebp),%eax
081c9433 +0x04b:  mov    %dl,0x8(%eax)
081c9436 +0x04e:  mov    $0xbf,%eax
081c943b +0x053:  jmp    081c9515 <+0x12d>
081c9440 +0x058:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081c9445 +0x05d:  mov    0xc(%ebp),%edx
081c9448 +0x060:  mov    %edx,0x4(%esp)
081c944c +0x064:  mov    %eax,(%esp)
081c944f +0x067:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081c9454 +0x06c:  test   %al,%al
081c9456 +0x06e:  je     081c946f <+0x87>
081c9458 +0x070:  mov    -0xc(%ebp),%eax
081c945b +0x073:  movzbl 0xd(%eax),%edx
081c945f +0x077:  mov    -0x10(%ebp),%eax
081c9462 +0x07a:  mov    %dl,0x8(%eax)
081c9465 +0x07d:  mov    $0x3c,%eax
081c946a +0x082:  jmp    081c9515 <+0x12d>
081c946f +0x087:  mov    0xc(%ebp),%eax
081c9472 +0x08a:  mov    %eax,(%esp)
081c9475 +0x08d:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
081c947a +0x092:  test   %al,%al
081c947c +0x094:  je     081c9495 <+0xad>
081c947e +0x096:  mov    -0xc(%ebp),%eax
081c9481 +0x099:  movzbl 0xd(%eax),%edx
081c9485 +0x09d:  mov    -0x10(%ebp),%eax
081c9488 +0x0a0:  mov    %dl,0x8(%eax)
081c948b +0x0a3:  mov    $0x13,%eax
081c9490 +0x0a8:  jmp    081c9515 <+0x12d>
081c9495 +0x0ad:  mov    0xc(%ebp),%eax
081c9498 +0x0b0:  mov    %eax,(%esp)
081c949b +0x0b3:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081c94a0 +0x0b8:  mov    %eax,%ebx
081c94a2 +0x0ba:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c94a7 +0x0bf:  mov    %ebx,0x4(%esp)
081c94ab +0x0c3:  mov    %eax,(%esp)
081c94ae +0x0c6:  call   086cdab4 <_ZN9GameWorld15IsForbiddenMoveEPKc>  ; GameWorld::IsForbiddenMove(char const*)
081c94b3 +0x0cb:  test   %al,%al
081c94b5 +0x0cd:  je     081c9510 <+0x128>
081c94b7 +0x0cf:  mov    0xc(%ebp),%eax
081c94ba +0x0d2:  mov    %eax,(%esp)
081c94bd +0x0d5:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081c94c2 +0x0da:  mov    %eax,%ebx
081c94c4 +0x0dc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c94c9 +0x0e1:  mov    %ebx,0x4(%esp)
081c94cd +0x0e5:  mov    %eax,(%esp)
081c94d0 +0x0e8:  call   086ce958 <_ZN9GameWorld26GetLeftTimeOfForbiddenMoveEPKc>  ; GameWorld::GetLeftTimeOfForbiddenMove(char const*)
081c94d5 +0x0ed:  test   %eax,%eax
081c94d7 +0x0ef:  setne  %al
081c94da +0x0f2:  test   %al,%al
081c94dc +0x0f4:  je     081c94f2 <+0x10a>
081c94de +0x0f6:  mov    -0xc(%ebp),%eax
081c94e1 +0x0f9:  movzbl 0xe(%eax),%edx
081c94e5 +0x0fd:  mov    -0x10(%ebp),%eax
081c94e8 +0x100:  mov    %dl,0x9(%eax)
081c94eb +0x103:  mov    $0x44,%eax
081c94f0 +0x108:  jmp    081c9515 <+0x12d>
081c94f2 +0x10a:  mov    0xc(%ebp),%eax
081c94f5 +0x10d:  mov    %eax,(%esp)
081c94f8 +0x110:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081c94fd +0x115:  mov    %eax,%ebx
081c94ff +0x117:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c9504 +0x11c:  mov    %ebx,0x4(%esp)
081c9508 +0x120:  mov    %eax,(%esp)
081c950b +0x123:  call   086cde5a <_ZN9GameWorld10EnableMoveEPKc>  ; GameWorld::EnableMove(char const*)
081c9510 +0x128:  mov    $0x0,%eax
081c9515 +0x12d:  add    $0x24,%esp
081c9518 +0x130:  pop    %ebx
081c9519 +0x131:  pop    %ebp
081c951a +0x132:  ret
081c951b +0x133:  nop
```

## 反编译 C

```c
// DisPatcher_SetArea::check_error @ 0x81c93e8

/* DisPatcher_SetArea::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_SetArea::check_error
          (DisPatcher_SetArea *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CPrivateStoreMgr *this_00;
  char *pcVar4;
  GameWorld *pGVar5;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    cVar1 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
    if (cVar1 == '\0') {
      this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
      cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
      if (cVar1 == '\0') {
        cVar1 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
        if (cVar1 == '\0') {
          pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
          pGVar5 = (GameWorld *)G_GameWorld();
          cVar1 = GameWorld::IsForbiddenMove(pGVar5,pcVar4);
          if (cVar1 != '\0') {
            pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
            pGVar5 = (GameWorld *)G_GameWorld();
            iVar2 = GameWorld::GetLeftTimeOfForbiddenMove(pGVar5,pcVar4);
            if (iVar2 != 0) {
              *(MSG_BASE *)(param_3 + 9) = param_2[0xe];
              return 0x44;
            }
            pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
            pGVar5 = (GameWorld *)G_GameWorld();
            GameWorld::EnableMove(pGVar5,pcVar4);
          }
          uVar3 = 0;
        }
        else {
          *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
          uVar3 = 0x13;
        }
      }
      else {
        *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
        uVar3 = 0x3c;
      }
    }
    else {
      *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
      uVar3 = 0xbf;
    }
  }
  else {
    uVar3 = 0x7fffffff;
  }
  return uVar3;
}
```
