# _MakeUserInfo

`_ZN11pvp_assault13CAssaultPlace13_MakeUserInfoEP11PacketGuard13ENUM_USERINFO`

`pvp_assault::CAssaultPlace::_MakeUserInfo(PacketGuard*, ENUM_USERINFO)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e8b66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e8b66  _ZN11pvp_assault13CAssaultPlace13_MakeUserInfoEP11PacketGuard13ENUM_USERINFO
#           pvp_assault::CAssaultPlace::_MakeUserInfo(PacketGuard*, ENUM_USERINFO)
# range [0x082e8b66, 0x082e8c59]
082e8b66 +0x00:  push   %ebp
082e8b67 +0x01:  mov    %esp,%ebp
082e8b69 +0x03:  push   %esi
082e8b6a +0x04:  push   %ebx
082e8b6b +0x05:  sub    $0x20,%esp
082e8b6e +0x08:  mov    0xc(%ebp),%eax
082e8b71 +0x0b:  movl   $0x2,0x8(%esp)
082e8b79 +0x13:  movl   $0x0,0x4(%esp)
082e8b81 +0x1b:  mov    %eax,(%esp)
082e8b84 +0x1e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e8b89 +0x23:  mov    0x10(%ebp),%edx
082e8b8c +0x26:  mov    0xc(%ebp),%eax
082e8b8f +0x29:  mov    %edx,0x4(%esp)
082e8b93 +0x2d:  mov    %eax,(%esp)
082e8b96 +0x30:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8b9b +0x35:  movl   $0x0,-0x14(%ebp)
082e8ba2 +0x3c:  movl   $0x0,-0x10(%ebp)
082e8ba9 +0x43:  mov    0xc(%ebp),%eax
082e8bac +0x46:  mov    %eax,(%esp)
082e8baf +0x49:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082e8bb4 +0x4e:  mov    %eax,-0x14(%ebp)
082e8bb7 +0x51:  mov    0xc(%ebp),%eax
082e8bba +0x54:  mov    -0x10(%ebp),%edx
082e8bbd +0x57:  mov    %edx,0x4(%esp)
082e8bc1 +0x5b:  mov    %eax,(%esp)
082e8bc4 +0x5e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8bc9 +0x63:  movl   $0x0,-0xc(%ebp)
082e8bd0 +0x6a:  jmp    082e8c1c <+0xb6>
082e8bd2 +0x6c:  mov    -0xc(%ebp),%eax
082e8bd5 +0x6f:  shl    $0x5,%eax
082e8bd8 +0x72:  add    0x8(%ebp),%eax
082e8bdb +0x75:  mov    %eax,(%esp)
082e8bde +0x78:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e8be3 +0x7d:  test   %al,%al
082e8be5 +0x7f:  jne    082e8c17 <+0xb1>
082e8be7 +0x81:  mov    0x10(%ebp),%eax
082e8bea +0x84:  movsbl %al,%esi
082e8bed +0x87:  mov    0xc(%ebp),%ebx
082e8bf0 +0x8a:  mov    -0xc(%ebp),%eax
082e8bf3 +0x8d:  shl    $0x5,%eax
082e8bf6 +0x90:  add    0x8(%ebp),%eax
082e8bf9 +0x93:  mov    %eax,(%esp)
082e8bfc +0x96:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e8c01 +0x9b:  mov    %esi,0x8(%esp)
082e8c05 +0x9f:  mov    %ebx,0x4(%esp)
082e8c09 +0xa3:  mov    %eax,(%esp)
082e8c0c +0xa6:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
082e8c11 +0xab:  addl   $0x1,-0x10(%ebp)
082e8c15 +0xaf:  jmp    082e8c18 <+0xb2>
082e8c17 +0xb1:  nop
082e8c18 +0xb2:  addl   $0x1,-0xc(%ebp)
082e8c1c +0xb6:  cmpl   $0x7,-0xc(%ebp)
082e8c20 +0xba:  setle  %al
082e8c23 +0xbd:  test   %al,%al
082e8c25 +0xbf:  jne    082e8bd2 <+0x6c>
082e8c27 +0xc1:  mov    0xc(%ebp),%eax
082e8c2a +0xc4:  mov    -0x10(%ebp),%edx
082e8c2d +0xc7:  mov    %edx,0x8(%esp)
082e8c31 +0xcb:  lea    -0x14(%ebp),%edx
082e8c34 +0xce:  mov    %edx,0x4(%esp)
082e8c38 +0xd2:  mov    %eax,(%esp)
082e8c3b +0xd5:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
082e8c40 +0xda:  mov    0xc(%ebp),%eax
082e8c43 +0xdd:  movl   $0x1,0x4(%esp)
082e8c4b +0xe5:  mov    %eax,(%esp)
082e8c4e +0xe8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e8c53 +0xed:  add    $0x20,%esp
082e8c56 +0xf0:  pop    %ebx
082e8c57 +0xf1:  pop    %esi
082e8c58 +0xf2:  pop    %ebp
082e8c59 +0xf3:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeUserInfo @ 0x82e8b66

/* pvp_assault::CAssaultPlace::_MakeUserInfo(PacketGuard*, ENUM_USERINFO) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeUserInfo
          (CAssaultPlace *this,InterfacePacketBuf *param_1,int param_3)

{
  char cVar1;
  CUser *this_00;
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_header(param_1,0,2);
  InterfacePacketBuf::put_byte(param_1,param_3);
  local_18 = 0;
  local_14 = 0;
  local_18 = InterfacePacketBuf::get_index(param_1);
  InterfacePacketBuf::put_short(param_1,local_14);
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      CUser::make_basic_info(this_00,(char *)param_1,(char)param_3);
      local_14 = local_14 + 1;
    }
  }
  InterfacePacketBuf::put_short(param_1,&local_18,local_14);
  InterfacePacketBuf::finalize(param_1,true);
  return;
}
```
