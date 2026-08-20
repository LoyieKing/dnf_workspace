# SendPacket

`_ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard`

`pvp_assault::CAssaultMgr::SendPacket(CUser*, bool, PacketGuard*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082efb54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082efb54  _ZN11pvp_assault11CAssaultMgr10SendPacketEP5CUserbP11PacketGuard
#           pvp_assault::CAssaultMgr::SendPacket(CUser*, bool, PacketGuard*)
# range [0x082efb54, 0x082efbf5]
082efb54 +0x00:  push   %ebp
082efb55 +0x01:  mov    %esp,%ebp
082efb57 +0x03:  sub    $0x38,%esp
082efb5a +0x06:  mov    0x10(%ebp),%eax
082efb5d +0x09:  mov    %al,-0x1c(%ebp)
082efb60 +0x0c:  mov    0xc(%ebp),%eax
082efb63 +0x0f:  mov    %eax,(%esp)
082efb66 +0x12:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
082efb6b +0x17:  mov    %eax,0x4(%esp)
082efb6f +0x1b:  mov    0x8(%ebp),%eax
082efb72 +0x1e:  mov    %eax,(%esp)
082efb75 +0x21:  call   082ed9fe <_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj>  ; pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int)
082efb7a +0x26:  mov    %eax,-0x10(%ebp)
082efb7d +0x29:  cmpb   $0x0,-0x1c(%ebp)
082efb81 +0x2d:  je     082efbbb <+0x67>
082efb83 +0x2f:  lea    -0x14(%ebp),%eax
082efb86 +0x32:  mov    %eax,0x8(%esp)
082efb8a +0x36:  mov    0xc(%ebp),%eax
082efb8d +0x39:  mov    %eax,0x4(%esp)
082efb91 +0x3d:  mov    -0x10(%ebp),%eax
082efb94 +0x40:  mov    %eax,(%esp)
082efb97 +0x43:  call   082e6cdc <_ZN11pvp_assault13CAssaultPlace7GetTeamEP5CUserR17ENUM_ASSAULT_TEAM>  ; pvp_assault::CAssaultPlace::GetTeam(CUser*, ENUM_ASSAULT_TEAM&)
082efb9c +0x48:  test   %al,%al
082efb9e +0x4a:  je     082efbee <+0x9a>
082efba0 +0x4c:  mov    -0x14(%ebp),%eax
082efba3 +0x4f:  mov    %eax,0x8(%esp)
082efba7 +0x53:  mov    0x14(%ebp),%eax
082efbaa +0x56:  mov    %eax,0x4(%esp)
082efbae +0x5a:  mov    -0x10(%ebp),%eax
082efbb1 +0x5d:  mov    %eax,(%esp)
082efbb4 +0x60:  call   082e6c56 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard17ENUM_ASSAULT_TEAM>  ; pvp_assault::CAssaultPlace::SendPacket(PacketGuard&, ENUM_ASSAULT_TEAM)
082efbb9 +0x65:  jmp    082efbee <+0x9a>
082efbbb +0x67:  mov    0x14(%ebp),%eax
082efbbe +0x6a:  mov    %eax,0x4(%esp)
082efbc2 +0x6e:  mov    -0x10(%ebp),%eax
082efbc5 +0x71:  mov    %eax,(%esp)
082efbc8 +0x74:  call   082e6bf6 <_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard>  ; pvp_assault::CAssaultPlace::SendPacket(PacketGuard&)
082efbcd +0x79:  jmp    082efbee <+0x9a>
082efbcf +0x7b:  cmp    $0x1,%edx
082efbd2 +0x7e:  je     082efbdc <+0x88>
082efbd4 +0x80:  mov    %eax,(%esp)
082efbd7 +0x83:  call   08ae3750 <_Unwind_Resume>
082efbdc +0x88:  mov    %eax,(%esp)
082efbdf +0x8b:  call   08725ce0 <__cxa_begin_catch>
082efbe4 +0x90:  mov    (%eax),%eax
082efbe6 +0x92:  mov    %eax,-0xc(%ebp)
082efbe9 +0x95:  call   08725c30 <__cxa_end_catch>
082efbee +0x9a:  mov    $0x1,%eax
082efbf3 +0x9f:  leave
082efbf4 +0xa0:  ret
082efbf5 +0xa1:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::SendPacket @ 0x82efb54

/* pvp_assault::CAssaultMgr::SendPacket(CUser*, bool, PacketGuard*) */

undefined4 __thiscall
pvp_assault::CAssaultMgr::SendPacket
          (CAssaultMgr *this,CUser *param_1,bool param_2,PacketGuard *param_3)

{
  char cVar1;
  undefined4 local_18;
  CAssaultPlace *local_14;
  
  CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)param_1);
                    /* try { // try from 082efb75 to 082efbcc has its CatchHandler @ 082efbcf */
  local_14 = (CAssaultPlace *)_GetAssaultPlace((uint)this);
  if (param_2) {
    cVar1 = CAssaultPlace::GetTeam(local_14,param_1,(ENUM_ASSAULT_TEAM *)&local_18);
    if (cVar1 != '\0') {
      CAssaultPlace::SendPacket(local_14,param_3,local_18);
    }
  }
  else {
    CAssaultPlace::SendPacket(local_14,param_3);
  }
  return 1;
}
```
