# OnEndPowerWar

`_ZN9GameWorld13OnEndPowerWarER11PacketGuard`

`GameWorld::OnEndPowerWar(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ceda0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ceda0  _ZN9GameWorld13OnEndPowerWarER11PacketGuard
#           GameWorld::OnEndPowerWar(PacketGuard&)
# range [0x086ceda0, 0x086cedf3]
086ceda0 +0x00:  push   %ebp
086ceda1 +0x01:  mov    %esp,%ebp
086ceda3 +0x03:  sub    $0x28,%esp
086ceda6 +0x06:  movl   $0x0,-0x10(%ebp)
086cedad +0x0d:  lea    -0x14(%ebp),%eax
086cedb0 +0x10:  mov    %eax,(%esp)
086cedb3 +0x13:  call   086d3826 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2057>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2057
086cedb8 +0x18:  movl   $0x0,-0xc(%ebp)
086cedbf +0x1f:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086cedc4 +0x24:  mov    %eax,(%esp)
086cedc7 +0x27:  call   0837501a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xefe6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xefe6
086cedcc +0x2c:  movsbl %al,%edx
086cedcf +0x2f:  mov    0xc(%ebp),%eax
086cedd2 +0x32:  mov    %edx,0x4(%esp)
086cedd6 +0x36:  mov    %eax,(%esp)
086cedd9 +0x39:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086cedde +0x3e:  mov    0xc(%ebp),%eax
086cede1 +0x41:  movl   $0x0,0x4(%esp)
086cede9 +0x49:  mov    %eax,(%esp)
086cedec +0x4c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086cedf1 +0x51:  leave
086cedf2 +0x52:  ret
086cedf3 +0x53:  nop
```

## 反编译 C

```c
// GameWorld::OnEndPowerWar @ 0x86ceda0

/* GameWorld::OnEndPowerWar(PacketGuard&) */

void __thiscall GameWorld::OnEndPowerWar(GameWorld *this,PacketGuard *param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator(local_18);
  local_10 = 0;
  cVar1 = CPowerManager::GetWinnerSide(GlobalData::s_power_manager);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)cVar1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0);
  return;
}
```
