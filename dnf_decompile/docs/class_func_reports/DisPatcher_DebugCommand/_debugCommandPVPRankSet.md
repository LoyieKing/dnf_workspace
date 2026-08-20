# _debugCommandPVPRankSet

`_ZN23DisPatcher_DebugCommand23_debugCommandPVPRankSetEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandPVPRankSet(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858faba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858faba  _ZN23DisPatcher_DebugCommand23_debugCommandPVPRankSetEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandPVPRankSet(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0858faba, 0x0858fb4d]
0858faba +0x00:  push   %ebp
0858fabb +0x01:  mov    %esp,%ebp
0858fabd +0x03:  sub    $0x28,%esp
0858fac0 +0x06:  mov    0xc(%ebp),%eax
0858fac3 +0x09:  mov    %eax,(%esp)
0858fac6 +0x0c:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858facb +0x11:  xor    $0x1,%eax
0858face +0x14:  test   %al,%al
0858fad0 +0x16:  je     0858fad9 <+0x1f>
0858fad2 +0x18:  mov    $0x0,%eax
0858fad7 +0x1d:  jmp    0858fb4b <+0x91>
0858fad9 +0x1f:  mov    0x10(%ebp),%eax
0858fadc +0x22:  movzbl 0xe(%eax),%eax
0858fae0 +0x26:  cmp    $0x25,%al
0858fae2 +0x28:  jbe    0858faeb <+0x31>
0858fae4 +0x2a:  mov    $0x0,%eax
0858fae9 +0x2f:  jmp    0858fb4b <+0x91>
0858faeb +0x31:  mov    0x10(%ebp),%eax
0858faee +0x34:  movzbl 0xe(%eax),%eax
0858faf2 +0x38:  movzbl %al,%edx
0858faf5 +0x3b:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
0858fafa +0x40:  mov    %edx,0x4(%esp)
0858fafe +0x44:  mov    %eax,(%esp)
0858fb01 +0x47:  call   085d4860 <_ZNK11RefPvpGrade19GetPvpNextRankPointEi>  ; RefPvpGrade::GetPvpNextRankPoint(int) const
0858fb06 +0x4c:  mov    %eax,-0xc(%ebp)
0858fb09 +0x4f:  mov    0xc(%ebp),%eax
0858fb0c +0x52:  mov    %eax,(%esp)
0858fb0f +0x55:  call   0822f16a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4814>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4814
0858fb14 +0x5a:  mov    -0xc(%ebp),%edx
0858fb17 +0x5d:  mov    %edx,0x8(%eax)
0858fb1a +0x60:  mov    0xc(%ebp),%eax
0858fb1d +0x63:  mov    %eax,(%esp)
0858fb20 +0x66:  call   0822f16a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4814>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4814
0858fb25 +0x6b:  mov    0x10(%ebp),%edx
0858fb28 +0x6e:  movzbl 0xe(%edx),%edx
0858fb2c +0x72:  movzbl %dl,%edx
0858fb2f +0x75:  mov    %edx,0x14(%eax)
0858fb32 +0x78:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0858fb37 +0x7d:  mov    0xc(%ebp),%edx
0858fb3a +0x80:  mov    %edx,0x4(%esp)
0858fb3e +0x84:  mov    %eax,(%esp)
0858fb41 +0x87:  call   086c83fc <_ZN9GameWorld17send_AllBasicInfoEP5CUser>  ; GameWorld::send_AllBasicInfo(CUser*)
0858fb46 +0x8c:  mov    $0x1,%eax
0858fb4b +0x91:  leave
0858fb4c +0x92:  ret
0858fb4d +0x93:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandPVPRankSet @ 0x858faba

/* DisPatcher_DebugCommand::_debugCommandPVPRankSet(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandPVPRankSet
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  GameWorld *this_00;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    if ((byte)param_2[0xe] < 0x26) {
      uVar2 = RefPvpGrade::GetPvpNextRankPoint(GlobalData::s_ref_pvp_grade,(uint)(byte)param_2[0xe])
      ;
      iVar3 = CUserCharacInfo::getPVPResultW((CUserCharacInfo *)param_1);
      *(undefined4 *)(iVar3 + 8) = uVar2;
      iVar3 = CUserCharacInfo::getPVPResultW((CUserCharacInfo *)param_1);
      *(uint *)(iVar3 + 0x14) = (uint)(byte)param_2[0xe];
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_AllBasicInfo(this_00,param_1);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
