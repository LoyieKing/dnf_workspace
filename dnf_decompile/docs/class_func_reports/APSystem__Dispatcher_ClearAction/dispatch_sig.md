# dispatch_sig

`_ZN8APSystem22Dispatcher_ClearAction12dispatch_sigEP5CUserR9PacketBuf`

`APSystem::Dispatcher_ClearAction::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `APSystem::Dispatcher_ClearAction` | `0x0812513c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812513c  _ZN8APSystem22Dispatcher_ClearAction12dispatch_sigEP5CUserR9PacketBuf
#           APSystem::Dispatcher_ClearAction::dispatch_sig(CUser*, PacketBuf&)
# range [0x0812513c, 0x081251d9]
0812513c +0x00:  push   %ebp
0812513d +0x01:  mov    %esp,%ebp
0812513f +0x03:  sub    $0x28,%esp
08125142 +0x06:  cmpl   $0x0,0xc(%ebp)
08125146 +0x0a:  je     08125167 <+0x2b>
08125148 +0x0c:  mov    0xc(%ebp),%eax
0812514b +0x0f:  mov    %eax,(%esp)
0812514e +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08125153 +0x17:  cmp    $0x2,%eax
08125156 +0x1a:  jle    08125167 <+0x2b>
08125158 +0x1c:  mov    0xc(%ebp),%eax
0812515b +0x1f:  mov    %eax,(%esp)
0812515e +0x22:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08125163 +0x27:  test   %eax,%eax
08125165 +0x29:  jne    0812516e <+0x32>
08125167 +0x2b:  mov    $0x1,%eax
0812516c +0x30:  jmp    08125173 <+0x37>
0812516e +0x32:  mov    $0x0,%eax
08125173 +0x37:  test   %al,%al
08125175 +0x39:  je     0812517e <+0x42>
08125177 +0x3b:  mov    $0x278,%eax
0812517c +0x40:  jmp    081251d7 <+0x9b>
0812517e +0x42:  lea    -0x13(%ebp),%eax
08125181 +0x45:  mov    %eax,(%esp)
08125184 +0x48:  call   08122aaa <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x1d>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x1d
08125189 +0x4d:  lea    -0x13(%ebp),%eax
0812518c +0x50:  movl   $0xb,0x8(%esp)
08125194 +0x58:  mov    %eax,0x4(%esp)
08125198 +0x5c:  mov    0x10(%ebp),%eax
0812519b +0x5f:  mov    %eax,(%esp)
0812519e +0x62:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081251a3 +0x67:  xor    $0x1,%eax
081251a6 +0x6a:  test   %al,%al
081251a8 +0x6c:  je     081251b1 <+0x75>
081251aa +0x6e:  mov    $0x27c,%eax
081251af +0x73:  jmp    081251d7 <+0x9b>
081251b1 +0x75:  mov    -0xf(%ebp),%edx
081251b4 +0x78:  mov    -0x13(%ebp),%eax
081251b7 +0x7b:  movl   $0x1,0xc(%esp)
081251bf +0x83:  mov    %edx,0x8(%esp)
081251c3 +0x87:  mov    %eax,0x4(%esp)
081251c7 +0x8b:  mov    0xc(%ebp),%eax
081251ca +0x8e:  mov    %eax,(%esp)
081251cd +0x91:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
081251d2 +0x96:  mov    $0x0,%eax
081251d7 +0x9b:  leave
081251d8 +0x9c:  ret
081251d9 +0x9d:  nop
```

## 反编译 C

```c
// APSystem::Dispatcher_ClearAction::dispatch_sig @ 0x812513c

/* APSystem::Dispatcher_ClearAction::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
APSystem::Dispatcher_ClearAction::dispatch_sig
          (Dispatcher_ClearAction *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_17;
  undefined4 local_13;
  
  if (param_1 != (CUser *)0x0) {
    iVar3 = CUser::get_state(param_1);
    if (2 < iVar3) {
      iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar3 != 0) {
        bVar1 = false;
        goto LAB_08125173;
      }
    }
  }
  bVar1 = true;
LAB_08125173:
  if (bVar1) {
    uVar4 = 0x278;
  }
  else {
    _MSG_ACTION_POINT_ACTION_CLEAR::_MSG_ACTION_POINT_ACTION_CLEAR
              ((_MSG_ACTION_POINT_ACTION_CLEAR *)&local_17);
    cVar2 = PacketBuf::get_binary(param_2,(char *)&local_17,0xb);
    if (cVar2 == '\x01') {
      CUserProc::ClearActionAndSendtoUser(param_1,local_17,local_13,1);
      uVar4 = 0;
    }
    else {
      uVar4 = 0x27c;
    }
  }
  return uVar4;
}
```
