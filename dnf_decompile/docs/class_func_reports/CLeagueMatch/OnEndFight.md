# OnEndFight

`_ZN12CLeagueMatch10OnEndFightEP8PvP_Room`

`CLeagueMatch::OnEndFight(PvP_Room*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e55a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e55a  _ZN12CLeagueMatch10OnEndFightEP8PvP_Room
#           CLeagueMatch::OnEndFight(PvP_Room*)
# range [0x0855e55a, 0x0855e5e3]
0855e55a +0x00:  push   %ebp
0855e55b +0x01:  mov    %esp,%ebp
0855e55d +0x03:  push   %edi
0855e55e +0x04:  push   %esi
0855e55f +0x05:  push   %ebx
0855e560 +0x06:  sub    $0x2c,%esp
0855e563 +0x09:  mov    0xc(%ebp),%eax
0855e566 +0x0c:  mov    %eax,(%esp)
0855e569 +0x0f:  call   085d9242 <_ZN8PvP_Room16get_manager_teamEv>  ; PvP_Room::get_manager_team()
0855e56e +0x14:  mov    %eax,-0x1c(%ebp)
0855e571 +0x17:  mov    0x8(%ebp),%eax
0855e574 +0x1a:  movl   $0x0,0x4(%eax)
0855e57b +0x21:  mov    -0x1c(%ebp),%eax
0855e57e +0x24:  movl   $0x0,0xc(%esp)
0855e586 +0x2c:  mov    %eax,0x8(%esp)
0855e58a +0x30:  mov    0xc(%ebp),%eax
0855e58d +0x33:  mov    %eax,0x4(%esp)
0855e591 +0x37:  mov    0x8(%ebp),%eax
0855e594 +0x3a:  mov    %eax,(%esp)
0855e597 +0x3d:  call   0855e378 <_ZN12CLeagueMatch11_ReturnTeamEP8PvP_RoomiP5CUser>  ; CLeagueMatch::_ReturnTeam(PvP_Room*, int, CUser*)
0855e59c +0x42:  cmpl   $0x1,-0x1c(%ebp)
0855e5a0 +0x46:  je     0855e5be <+0x64>
0855e5a2 +0x48:  mov    0x8(%ebp),%edx
0855e5a5 +0x4b:  mov    0x8(%ebp),%eax
0855e5a8 +0x4e:  add    $0x1c,%edx
0855e5ab +0x51:  lea    0x8c(%eax),%ebx
0855e5b1 +0x57:  mov    $0x1c,%eax
0855e5b6 +0x5c:  mov    %edx,%edi
0855e5b8 +0x5e:  mov    %ebx,%esi
0855e5ba +0x60:  mov    %eax,%ecx
0855e5bc +0x62:  rep movsl %ds:(%esi),%es:(%edi)
0855e5be +0x64:  mov    0x8(%ebp),%eax
0855e5c1 +0x67:  add    $0x1c,%eax
0855e5c4 +0x6a:  mov    %eax,(%esp)
0855e5c7 +0x6d:  call   0855c9ae <_ZN8TeamInfo7refreshEv>  ; TeamInfo::refresh()
0855e5cc +0x72:  mov    0x8(%ebp),%eax
0855e5cf +0x75:  add    $0x8c,%eax
0855e5d4 +0x7a:  mov    %eax,(%esp)
0855e5d7 +0x7d:  call   0855cb16 <_ZN8TeamInfo5resetEv>  ; TeamInfo::reset()
0855e5dc +0x82:  add    $0x2c,%esp
0855e5df +0x85:  pop    %ebx
0855e5e0 +0x86:  pop    %esi
0855e5e1 +0x87:  pop    %edi
0855e5e2 +0x88:  pop    %ebp
0855e5e3 +0x89:  ret
```

## 反编译 C

```c
// CLeagueMatch::OnEndFight @ 0x855e55a

/* CLeagueMatch::OnEndFight(PvP_Room*) */

void __thiscall CLeagueMatch::OnEndFight(CLeagueMatch *this,PvP_Room *param_1)

{
  int iVar1;
  CLeagueMatch *pCVar2;
  CLeagueMatch *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  iVar1 = PvP_Room::get_manager_team(param_1);
  *(undefined4 *)(this + 4) = 0;
  _ReturnTeam(this,param_1,iVar1,(CUser *)0x0);
  if (iVar1 != 1) {
    pCVar2 = this + 0x8c;
    pCVar3 = this + 0x1c;
    for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
      pCVar2 = pCVar2 + (uint)bVar4 * -8 + 4;
      pCVar3 = pCVar3 + (uint)bVar4 * -8 + 4;
    }
  }
  TeamInfo::refresh((TeamInfo *)(this + 0x1c));
  TeamInfo::reset((TeamInfo *)(this + 0x8c));
  return;
}
```
