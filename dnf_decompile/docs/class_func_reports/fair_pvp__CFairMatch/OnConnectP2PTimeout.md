# OnConnectP2PTimeout

`_ZN8fair_pvp10CFairMatch19OnConnectP2PTimeoutEP8PvP_Room`

`fair_pvp::CFairMatch::OnConnectP2PTimeout(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08564d3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08564d3a  _ZN8fair_pvp10CFairMatch19OnConnectP2PTimeoutEP8PvP_Room
#           fair_pvp::CFairMatch::OnConnectP2PTimeout(PvP_Room*)
# range [0x08564d3a, 0x08564ddf]
08564d3a +0x00:  push   %ebp
08564d3b +0x01:  mov    %esp,%ebp
08564d3d +0x03:  push   %edi
08564d3e +0x04:  push   %esi
08564d3f +0x05:  push   %ebx
08564d40 +0x06:  sub    $0x2c,%esp
08564d43 +0x09:  mov    0x8(%ebp),%eax
08564d46 +0x0c:  mov    0x4(%eax),%eax
08564d49 +0x0f:  cmp    $0x4,%eax
08564d4c +0x12:  jne    08564dd7 <+0x9d>
08564d52 +0x18:  movl   $0x2,0x8(%esp)
08564d5a +0x20:  movl   $0x4,0x4(%esp)
08564d62 +0x28:  mov    0x8(%ebp),%eax
08564d65 +0x2b:  mov    %eax,(%esp)
08564d68 +0x2e:  call   085651a6 <_ZN8fair_pvp10CFairMatch21_SendMatchStatePacketEii>  ; fair_pvp::CFairMatch::_SendMatchStatePacket(int, int)
08564d6d +0x33:  mov    0xc(%ebp),%eax
08564d70 +0x36:  mov    %eax,(%esp)
08564d73 +0x39:  call   085d9242 <_ZN8PvP_Room16get_manager_teamEv>  ; PvP_Room::get_manager_team()
08564d78 +0x3e:  mov    %eax,-0x1c(%ebp)
08564d7b +0x41:  mov    -0x1c(%ebp),%eax
08564d7e +0x44:  movl   $0x0,0xc(%esp)
08564d86 +0x4c:  mov    %eax,0x8(%esp)
08564d8a +0x50:  mov    0xc(%ebp),%eax
08564d8d +0x53:  mov    %eax,0x4(%esp)
08564d91 +0x57:  mov    0x8(%ebp),%eax
08564d94 +0x5a:  mov    %eax,(%esp)
08564d97 +0x5d:  call   08564dea <_ZN8fair_pvp10CFairMatch11_ReturnTeamEP8PvP_RoomiP5CUser>  ; fair_pvp::CFairMatch::_ReturnTeam(PvP_Room*, int, CUser*)
08564d9c +0x62:  cmpl   $0x1,-0x1c(%ebp)
08564da0 +0x66:  je     08564dbb <+0x81>
08564da2 +0x68:  mov    0x8(%ebp),%edx
08564da5 +0x6b:  mov    0x8(%ebp),%eax
08564da8 +0x6e:  add    $0x1c,%edx
08564dab +0x71:  lea    0x64(%eax),%ebx
08564dae +0x74:  mov    $0x12,%eax
08564db3 +0x79:  mov    %edx,%edi
08564db5 +0x7b:  mov    %ebx,%esi
08564db7 +0x7d:  mov    %eax,%ecx
08564db9 +0x7f:  rep movsl %ds:(%esi),%es:(%edi)
08564dbb +0x81:  mov    0x8(%ebp),%eax
08564dbe +0x84:  add    $0x1c,%eax
08564dc1 +0x87:  mov    %eax,(%esp)
08564dc4 +0x8a:  call   085624de <_ZN8fair_pvp13TeamInfoThird7refreshEv>  ; fair_pvp::TeamInfoThird::refresh()
08564dc9 +0x8f:  mov    0x8(%ebp),%eax
08564dcc +0x92:  add    $0x64,%eax
08564dcf +0x95:  mov    %eax,(%esp)
08564dd2 +0x98:  call   08562582 <_ZN8fair_pvp13TeamInfoThird5resetEv>  ; fair_pvp::TeamInfoThird::reset()
08564dd7 +0x9d:  add    $0x2c,%esp
08564dda +0xa0:  pop    %ebx
08564ddb +0xa1:  pop    %esi
08564ddc +0xa2:  pop    %edi
08564ddd +0xa3:  pop    %ebp
08564dde +0xa4:  ret
08564ddf +0xa5:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnConnectP2PTimeout @ 0x8564d3a

/* fair_pvp::CFairMatch::OnConnectP2PTimeout(PvP_Room*) */

void __thiscall fair_pvp::CFairMatch::OnConnectP2PTimeout(CFairMatch *this,PvP_Room *param_1)

{
  int iVar1;
  CFairMatch *pCVar2;
  CFairMatch *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (*(int *)(this + 4) == 4) {
    _SendMatchStatePacket(this,4,2);
    iVar1 = PvP_Room::get_manager_team(param_1);
    _ReturnTeam(this,param_1,iVar1,(CUser *)0x0);
    if (iVar1 != 1) {
      pCVar2 = this + 100;
      pCVar3 = this + 0x1c;
      for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
        pCVar2 = pCVar2 + (uint)bVar4 * -8 + 4;
        pCVar3 = pCVar3 + (uint)bVar4 * -8 + 4;
      }
    }
    TeamInfoThird::refresh((TeamInfoThird *)(this + 0x1c));
    TeamInfoThird::reset((TeamInfoThird *)(this + 100));
  }
  return;
}
```
