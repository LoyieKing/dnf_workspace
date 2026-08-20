# OnCloseMission

`_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE`

`expert_job::CEnchanter::OnCloseMission(CUser*, expert_job::ENUM_CLOSE_MISSION_TYPE)`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849c822` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849c822  _ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE
#           expert_job::CEnchanter::OnCloseMission(CUser*, expert_job::ENUM_CLOSE_MISSION_TYPE)
# range [0x0849c822, 0x0849c9b1]
0849c822 +0x000:  push   %ebp
0849c823 +0x001:  mov    %esp,%ebp
0849c825 +0x003:  push   %esi
0849c826 +0x004:  push   %ebx
0849c827 +0x005:  sub    $0x20,%esp
0849c82a +0x008:  movl   $0x0,-0xc(%ebp)
0849c831 +0x00f:  mov    0xc(%ebp),%eax
0849c834 +0x012:  mov    %eax,(%esp)
0849c837 +0x015:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849c83c +0x01a:  movzwl %ax,%edx
0849c83f +0x01d:  mov    0x8(%ebp),%eax
0849c842 +0x020:  mov    0x30(%eax),%eax
0849c845 +0x023:  cmp    %eax,%edx
0849c847 +0x025:  sete   %al
0849c84a +0x028:  test   %al,%al
0849c84c +0x02a:  je     0849c885 <+0x63>
0849c84e +0x02c:  mov    0x8(%ebp),%eax
0849c851 +0x02f:  mov    0x28(%eax),%eax
0849c854 +0x032:  movl   $0x0,0x4(%esp)
0849c85c +0x03a:  mov    %eax,(%esp)
0849c85f +0x03d:  call   0822f8b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f60
0849c864 +0x042:  mov    0x8(%ebp),%eax
0849c867 +0x045:  mov    0x2c(%eax),%eax
0849c86a +0x048:  movl   $0x0,0x4(%esp)
0849c872 +0x050:  mov    %eax,(%esp)
0849c875 +0x053:  call   0822f8b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f60
0849c87a +0x058:  mov    0x8(%ebp),%eax
0849c87d +0x05b:  mov    0x2c(%eax),%eax
0849c880 +0x05e:  mov    %eax,-0xc(%ebp)
0849c883 +0x061:  jmp    0849c8db <+0xb9>
0849c885 +0x063:  mov    0xc(%ebp),%eax
0849c888 +0x066:  mov    %eax,(%esp)
0849c88b +0x069:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849c890 +0x06e:  movzwl %ax,%edx
0849c893 +0x071:  mov    0x8(%ebp),%eax
0849c896 +0x074:  mov    0x34(%eax),%eax
0849c899 +0x077:  cmp    %eax,%edx
0849c89b +0x079:  sete   %al
0849c89e +0x07c:  test   %al,%al
0849c8a0 +0x07e:  je     0849c9a9 <+0x187>
0849c8a6 +0x084:  mov    0x8(%ebp),%eax
0849c8a9 +0x087:  mov    0x28(%eax),%eax
0849c8ac +0x08a:  movl   $0x0,0x4(%esp)
0849c8b4 +0x092:  mov    %eax,(%esp)
0849c8b7 +0x095:  call   0822f8b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f60
0849c8bc +0x09a:  mov    0x8(%ebp),%eax
0849c8bf +0x09d:  mov    0x2c(%eax),%eax
0849c8c2 +0x0a0:  movl   $0x0,0x4(%esp)
0849c8ca +0x0a8:  mov    %eax,(%esp)
0849c8cd +0x0ab:  call   0822f8b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f60
0849c8d2 +0x0b0:  mov    0x8(%ebp),%eax
0849c8d5 +0x0b3:  mov    0x28(%eax),%eax
0849c8d8 +0x0b6:  mov    %eax,-0xc(%ebp)
0849c8db +0x0b9:  cmpl   $0x1,0x10(%ebp)
0849c8df +0x0bd:  je     0849c8eb <+0xc9>
0849c8e1 +0x0bf:  cmpl   $0x2,0x10(%ebp)
0849c8e5 +0x0c3:  jne    0849c993 <+0x171>
0849c8eb +0x0c9:  cmpl   $0x0,-0xc(%ebp)
0849c8ef +0x0cd:  je     0849c917 <+0xf5>
0849c8f1 +0x0cf:  mov    -0xc(%ebp),%eax
0849c8f4 +0x0d2:  mov    %eax,(%esp)
0849c8f7 +0x0d5:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849c8fc +0x0da:  test   %eax,%eax
0849c8fe +0x0dc:  je     0849c917 <+0xf5>
0849c900 +0x0de:  mov    0x8(%ebp),%eax
0849c903 +0x0e1:  mov    0x28(%eax),%edx
0849c906 +0x0e4:  mov    0x8(%ebp),%eax
0849c909 +0x0e7:  mov    0x2c(%eax),%eax
0849c90c +0x0ea:  cmp    %eax,%edx
0849c90e +0x0ec:  je     0849c917 <+0xf5>
0849c910 +0x0ee:  mov    $0x1,%eax
0849c915 +0x0f3:  jmp    0849c91c <+0xfa>
0849c917 +0x0f5:  mov    $0x0,%eax
0849c91c +0x0fa:  test   %al,%al
0849c91e +0x0fc:  je     0849c993 <+0x171>
0849c920 +0x0fe:  lea    -0x18(%ebp),%eax
0849c923 +0x101:  mov    %eax,(%esp)
0849c926 +0x104:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0849c92b +0x109:  movl   $0x9e,0x8(%esp)
0849c933 +0x111:  movl   $0x0,0x4(%esp)
0849c93b +0x119:  lea    -0x18(%ebp),%eax
0849c93e +0x11c:  mov    %eax,(%esp)
0849c941 +0x11f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849c946 +0x124:  movl   $0x1,0x4(%esp)
0849c94e +0x12c:  lea    -0x18(%ebp),%eax
0849c951 +0x12f:  mov    %eax,(%esp)
0849c954 +0x132:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849c959 +0x137:  lea    -0x18(%ebp),%eax
0849c95c +0x13a:  mov    %eax,0x4(%esp)
0849c960 +0x13e:  mov    -0xc(%ebp),%eax
0849c963 +0x141:  mov    %eax,(%esp)
0849c966 +0x144:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849c96b +0x149:  jmp    0849c988 <+0x166>
0849c96d +0x14b:  mov    %edx,%ebx
0849c96f +0x14d:  mov    %eax,%esi
0849c971 +0x14f:  lea    -0x18(%ebp),%eax
0849c974 +0x152:  mov    %eax,(%esp)
0849c977 +0x155:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849c97c +0x15a:  mov    %esi,%eax
0849c97e +0x15c:  mov    %ebx,%edx
0849c980 +0x15e:  mov    %eax,(%esp)
0849c983 +0x161:  call   08ae3750 <_Unwind_Resume>
0849c988 +0x166:  lea    -0x18(%ebp),%eax
0849c98b +0x169:  mov    %eax,(%esp)
0849c98e +0x16c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849c993 +0x171:  mov    0x8(%ebp),%edx
0849c996 +0x174:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
0849c99b +0x179:  mov    %edx,0x4(%esp)
0849c99f +0x17d:  mov    %eax,(%esp)
0849c9a2 +0x180:  call   0849e1f8 <_ZN10expert_job13CExpertJobMgr13FreeExpertJobEPNS_10CExpertJobE>  ; expert_job::CExpertJobMgr::FreeExpertJob(expert_job::CExpertJob*)
0849c9a7 +0x185:  jmp    0849c9aa <+0x188>
0849c9a9 +0x187:  nop
0849c9aa +0x188:  add    $0x20,%esp
0849c9ad +0x18b:  pop    %ebx
0849c9ae +0x18c:  pop    %esi
0849c9af +0x18d:  pop    %ebp
0849c9b0 +0x18e:  ret
0849c9b1 +0x18f:  nop
```

## 反编译 C

```c
// expert_job::CEnchanter::OnCloseMission @ 0x849c822

/* expert_job::CEnchanter::OnCloseMission(CUser*, expert_job::ENUM_CLOSE_MISSION_TYPE) */

void __thiscall expert_job::CEnchanter::OnCloseMission(CEnchanter *this,CUser *param_1,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  PacketGuard local_1c [12];
  CUserCharacInfo *local_10;
  
  local_10 = (CUserCharacInfo *)0x0;
  uVar2 = CUser::get_unique_id(param_1);
  if ((uVar2 & 0xffff) == *(uint *)(this + 0x30)) {
    CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x28),(CExpertJob *)0x0);
    CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x2c),(CExpertJob *)0x0);
    local_10 = *(CUserCharacInfo **)(this + 0x2c);
  }
  else {
    uVar2 = CUser::get_unique_id(param_1);
    if ((uVar2 & 0xffff) != *(uint *)(this + 0x34)) {
      return;
    }
    CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x28),(CExpertJob *)0x0);
    CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x2c),(CExpertJob *)0x0);
    local_10 = *(CUserCharacInfo **)(this + 0x28);
  }
  if ((param_3 == 1) || (param_3 == 2)) {
    if ((local_10 == (CUserCharacInfo *)0x0) ||
       ((iVar3 = CUserCharacInfo::getCurCharacR(local_10), iVar3 == 0 ||
        (*(int *)(this + 0x28) == *(int *)(this + 0x2c))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0849c941 to 0849c96a has its CatchHandler @ 0849c96d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x9e);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)local_10,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  CExpertJobMgr::FreeExpertJob(GlobalData::s_ExpertJobMgr,(CExpertJob *)this);
  return;
}
```
