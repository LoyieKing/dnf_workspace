# process

`_ZN31Dispatcher_Register_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Register_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Register_Quick_Party` | `0x081de012` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de012  _ZN31Dispatcher_Register_Quick_Party7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Register_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081de012, 0x081de0c5]
081de012 +0x00:  push   %ebp
081de013 +0x01:  mov    %esp,%ebp
081de015 +0x03:  push   %ebx
081de016 +0x04:  sub    $0x24,%esp
081de019 +0x07:  mov    0x14(%ebp),%eax
081de01c +0x0a:  mov    %eax,0xc(%esp)
081de020 +0x0e:  mov    0x10(%ebp),%eax
081de023 +0x11:  mov    %eax,0x8(%esp)
081de027 +0x15:  mov    0xc(%ebp),%eax
081de02a +0x18:  mov    %eax,0x4(%esp)
081de02e +0x1c:  mov    0x8(%ebp),%eax
081de031 +0x1f:  mov    %eax,(%esp)
081de034 +0x22:  call   081ddfce <_ZN31Dispatcher_Register_Quick_Party11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_Register_Quick_Party::check_error(CUser*, MSG_BASE&, ParamBase&)
081de039 +0x27:  mov    %eax,-0x14(%ebp)
081de03c +0x2a:  cmpl   $0x0,-0x14(%ebp)
081de040 +0x2e:  jle    081de047 <+0x35>
081de042 +0x30:  mov    -0x14(%ebp),%eax
081de045 +0x33:  jmp    081de0bf <+0xad>
081de047 +0x35:  cmpl   $0x0,-0x14(%ebp)
081de04b +0x39:  jns    081de054 <+0x42>
081de04d +0x3b:  mov    $0xffffffff,%eax
081de052 +0x40:  jmp    081de0bf <+0xad>
081de054 +0x42:  mov    0x10(%ebp),%eax
081de057 +0x45:  mov    %eax,-0x10(%ebp)
081de05a +0x48:  mov    0x14(%ebp),%eax
081de05d +0x4b:  mov    %eax,-0xc(%ebp)
081de060 +0x4e:  lea    -0x18(%ebp),%eax
081de063 +0x51:  mov    %eax,(%esp)
081de066 +0x54:  call   082344ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b74
081de06b +0x59:  mov    -0x10(%ebp),%eax
081de06e +0x5c:  movzwl 0xe(%eax),%eax
081de072 +0x60:  mov    %ax,-0x18(%ebp)
081de076 +0x64:  mov    -0x10(%ebp),%eax
081de079 +0x67:  movzbl 0x10(%eax),%eax
081de07d +0x6b:  mov    %al,-0x16(%ebp)
081de080 +0x6e:  mov    0xc(%ebp),%eax
081de083 +0x71:  mov    %eax,(%esp)
081de086 +0x74:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081de08b +0x79:  mov    %eax,%ebx
081de08d +0x7b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081de092 +0x80:  mov    %eax,(%esp)
081de095 +0x83:  call   08298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>  ; CGameManager::GetQuickPartySystemManager()
081de09a +0x88:  mov    0xc(%ebp),%edx
081de09d +0x8b:  mov    %edx,0xc(%esp)
081de0a1 +0x8f:  mov    %ebx,0x8(%esp)
081de0a5 +0x93:  lea    -0x18(%ebp),%edx
081de0a8 +0x96:  mov    %edx,0x4(%esp)
081de0ac +0x9a:  mov    %eax,(%esp)
081de0af +0x9d:  call   08269f3c <_ZN10QuickParty24CQuickPartySystemManager18match_proper_partyERKNS_23STQuickPartyPoolMap_KeyEP6CPartyP5CUser>  ; QuickParty::CQuickPartySystemManager::match_proper_party(QuickParty::STQuickPartyPoolMap_Key const&, CParty*, CUser*)
081de0b4 +0xa2:  mov    -0xc(%ebp),%edx
081de0b7 +0xa5:  mov    %eax,0x4(%edx)
081de0ba +0xa8:  mov    $0x0,%eax
081de0bf +0xad:  add    $0x24,%esp
081de0c2 +0xb0:  pop    %ebx
081de0c3 +0xb1:  pop    %ebp
081de0c4 +0xb2:  ret
081de0c5 +0xb3:  nop
```

## 反编译 C

```c
// Dispatcher_Register_Quick_Party::process @ 0x81de012

/* Dispatcher_Register_Quick_Party::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_Register_Quick_Party::process
          (Dispatcher_Register_Quick_Party *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  CParty *pCVar1;
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  undefined4 uVar2;
  undefined2 local_1c;
  MSG_BASE local_1a;
  int local_18;
  MSG_BASE *local_14;
  ParamBase *local_10;
  
  local_18 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (local_18 < 1) {
    if (local_18 < 0) {
      local_18 = -1;
    }
    else {
      local_14 = param_2;
      local_10 = param_3;
      QuickParty::STQuickPartyPoolMap_Key::STQuickPartyPoolMap_Key
                ((STQuickPartyPoolMap_Key *)&local_1c);
      local_1c = *(undefined2 *)(local_14 + 0xe);
      local_1a = local_14[0x10];
      pCVar1 = (CParty *)CUser::GetParty(param_1);
      this_00 = (CGameManager *)G_CGameManager();
      this_01 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_00);
      uVar2 = QuickParty::CQuickPartySystemManager::match_proper_party
                        (this_01,(STQuickPartyPoolMap_Key *)&local_1c,pCVar1,param_1);
      *(undefined4 *)(local_10 + 4) = uVar2;
      local_18 = 0;
    }
  }
  return local_18;
}
```
