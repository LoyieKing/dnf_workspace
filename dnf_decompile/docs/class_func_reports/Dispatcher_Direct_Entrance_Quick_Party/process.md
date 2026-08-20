# process

`_ZN38Dispatcher_Direct_Entrance_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Direct_Entrance_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Direct_Entrance_Quick_Party` | `0x081de334` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de334  _ZN38Dispatcher_Direct_Entrance_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Direct_Entrance_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081de334, 0x081de3b7]
081de334 +0x00:  push   %ebp
081de335 +0x01:  mov    %esp,%ebp
081de337 +0x03:  sub    $0x28,%esp
081de33a +0x06:  mov    0x14(%ebp),%eax
081de33d +0x09:  mov    %eax,0xc(%esp)
081de341 +0x0d:  mov    0x10(%ebp),%eax
081de344 +0x10:  mov    %eax,0x8(%esp)
081de348 +0x14:  mov    0xc(%ebp),%eax
081de34b +0x17:  mov    %eax,0x4(%esp)
081de34f +0x1b:  mov    0x8(%ebp),%eax
081de352 +0x1e:  mov    %eax,(%esp)
081de355 +0x21:  call   081de2e6 <_ZN38Dispatcher_Direct_Entrance_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_Direct_Entrance_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&)
081de35a +0x26:  mov    %eax,-0x10(%ebp)
081de35d +0x29:  cmpl   $0x0,-0x10(%ebp)
081de361 +0x2d:  jle    081de368 <+0x34>
081de363 +0x2f:  mov    -0x10(%ebp),%eax
081de366 +0x32:  jmp    081de3b5 <+0x81>
081de368 +0x34:  cmpl   $0x0,-0x10(%ebp)
081de36c +0x38:  jns    081de375 <+0x41>
081de36e +0x3a:  mov    $0xffffffff,%eax
081de373 +0x3f:  jmp    081de3b5 <+0x81>
081de375 +0x41:  mov    0x14(%ebp),%eax
081de378 +0x44:  mov    %eax,-0xc(%ebp)
081de37b +0x47:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081de380 +0x4c:  mov    %eax,(%esp)
081de383 +0x4f:  call   08298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>  ; CGameManager::GetQuickPartySystemManager()
081de388 +0x54:  mov    0xc(%ebp),%edx
081de38b +0x57:  mov    %edx,0x4(%esp)
081de38f +0x5b:  mov    %eax,(%esp)
081de392 +0x5e:  call   0826a762 <_ZN10QuickParty24CQuickPartySystemManager27direct_entrance_quick_partyEP5CUser>  ; QuickParty::CQuickPartySystemManager::direct_entrance_quick_party(CUser*)
081de397 +0x63:  mov    %eax,%edx
081de399 +0x65:  mov    -0xc(%ebp),%eax
081de39c +0x68:  mov    %edx,0x4(%eax)
081de39f +0x6b:  mov    -0xc(%ebp),%eax
081de3a2 +0x6e:  mov    0x4(%eax),%eax
081de3a5 +0x71:  test   %eax,%eax
081de3a7 +0x73:  je     081de3b0 <+0x7c>
081de3a9 +0x75:  mov    $0x0,%eax
081de3ae +0x7a:  jmp    081de3b5 <+0x81>
081de3b0 +0x7c:  mov    $0x0,%eax
081de3b5 +0x81:  leave
081de3b6 +0x82:  ret
081de3b7 +0x83:  nop
```

## 反编译 C

```c
// Dispatcher_Direct_Entrance_Quick_Party::process @ 0x81de334

/* Dispatcher_Direct_Entrance_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_Direct_Entrance_Quick_Party::process
          (Dispatcher_Direct_Entrance_Quick_Party *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  undefined4 uVar2;
  
  iVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      this_00 = (CGameManager *)G_CGameManager();
      this_01 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_00);
      uVar2 = QuickParty::CQuickPartySystemManager::direct_entrance_quick_party(this_01,param_1);
      *(undefined4 *)(param_3 + 4) = uVar2;
      if (*(int *)(param_3 + 4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}
```
