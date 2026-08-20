# create_room

`_ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE`

`PvP_Room::create_room(CUser*, char, char*, short, bool, char const*, int, PVP_BATTLE_MODE)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d6908` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d6908  _ZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODE
#           PvP_Room::create_room(CUser*, char, char*, short, bool, char const*, int, PVP_BATTLE_MODE)
# range [0x085d6908, 0x085d6be5]
085d6908 +0x000:  push   %ebp
085d6909 +0x001:  mov    %esp,%ebp
085d690b +0x003:  push   %edi
085d690c +0x004:  push   %esi
085d690d +0x005:  push   %ebx
085d690e +0x006:  sub    $0x5c,%esp
085d6911 +0x009:  mov    0x10(%ebp),%ecx
085d6914 +0x00c:  mov    0x18(%ebp),%edx
085d6917 +0x00f:  mov    0x1c(%ebp),%eax
085d691a +0x012:  mov    %cl,-0x3c(%ebp)
085d691d +0x015:  mov    %dx,-0x40(%ebp)
085d6921 +0x019:  mov    %al,-0x44(%ebp)
085d6924 +0x01c:  mov    0x28(%ebp),%eax
085d6927 +0x01f:  mov    %eax,-0x48(%ebp)
085d692a +0x022:  mov    0x8(%ebp),%eax
085d692d +0x025:  mov    (%eax),%edi
085d692f +0x027:  mov    0xc(%ebp),%eax
085d6932 +0x02a:  mov    %eax,(%esp)
085d6935 +0x02d:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085d693a +0x032:  mov    %eax,%esi
085d693c +0x034:  mov    0xc(%ebp),%eax
085d693f +0x037:  mov    %eax,(%esp)
085d6942 +0x03a:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
085d6947 +0x03f:  mov    %eax,%ebx
085d6949 +0x041:  movl   $0x0,0x10(%esp)
085d6951 +0x049:  movl   $0x0,0xc(%esp)
085d6959 +0x051:  movl   $0x43a,0x8(%esp)
085d6961 +0x059:  movl   $&_ZZN8PvP_Room11create_roomEP5CUsercPcsbPKci15PVP_BATTLE_MODEE19__PRETTY_FUNCTION__,0x4(%esp)
085d6969 +0x061:  lea    -0x2c(%ebp),%eax
085d696c +0x064:  mov    %eax,(%esp)
085d696f +0x067:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
085d6974 +0x06c:  mov    -0x48(%ebp),%eax
085d6977 +0x06f:  mov    %eax,0x14(%esp)
085d697b +0x073:  mov    %edi,0x10(%esp)
085d697f +0x077:  mov    %esi,0xc(%esp)
085d6983 +0x07b:  mov    %ebx,0x8(%esp)
085d6987 +0x07f:  movl   $"pvp@log %s,%s,room(%d),%d",0x4(%esp)
085d698f +0x087:  lea    -0x2c(%ebp),%eax
085d6992 +0x08a:  mov    %eax,(%esp)
085d6995 +0x08d:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
085d699a +0x092:  mov    0xc(%ebp),%eax
085d699d +0x095:  mov    %eax,(%esp)
085d69a0 +0x098:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085d69a5 +0x09d:  test   %eax,%eax
085d69a7 +0x09f:  sete   %al
085d69aa +0x0a2:  test   %al,%al
085d69ac +0x0a4:  je     085d69b8 <+0xb0>
085d69ae +0x0a6:  mov    $0x13,%eax
085d69b3 +0x0ab:  jmp    085d6bdd <+0x2d5>
085d69b8 +0x0b0:  call   0855c8f4 <_Z15GetMatchingTypev>  ; GetMatchingType()
085d69bd +0x0b5:  mov    0x8(%ebp),%edx
085d69c0 +0x0b8:  mov    0x6e0(%edx),%edx
085d69c6 +0x0be:  mov    %eax,0x4(%esp)
085d69ca +0x0c2:  mov    %edx,(%esp)
085d69cd +0x0c5:  call   085dfba0 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x427>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x427
085d69d2 +0x0ca:  mov    0x8(%ebp),%edx
085d69d5 +0x0cd:  mov    %eax,0x6e4(%edx)
085d69db +0x0d3:  mov    0x8(%ebp),%eax
085d69de +0x0d6:  mov    0x6e4(%eax),%eax
085d69e4 +0x0dc:  mov    (%eax),%eax
085d69e6 +0x0de:  add    $0x18,%eax
085d69e9 +0x0e1:  mov    (%eax),%ecx
085d69eb +0x0e3:  mov    0x8(%ebp),%eax
085d69ee +0x0e6:  mov    0x6e4(%eax),%eax
085d69f4 +0x0ec:  lea    0x28(%ebp),%edx
085d69f7 +0x0ef:  mov    %edx,0x8(%esp)
085d69fb +0x0f3:  lea    -0x40(%ebp),%edx
085d69fe +0x0f6:  mov    %edx,0x4(%esp)
085d6a02 +0x0fa:  mov    %eax,(%esp)
085d6a05 +0x0fd:  call   *%ecx
085d6a07 +0x0ff:  mov    0x8(%ebp),%eax
085d6a0a +0x102:  mov    0xb8(%eax),%eax
085d6a10 +0x108:  test   %eax,%eax
085d6a12 +0x10a:  je     085d6a1e <+0x116>
085d6a14 +0x10c:  mov    $0x13,%eax
085d6a19 +0x111:  jmp    085d6bdd <+0x2d5>
085d6a1e +0x116:  mov    0x8(%ebp),%eax
085d6a21 +0x119:  movl   $0x1,0xb8(%eax)
085d6a2b +0x123:  mov    0x8(%ebp),%eax
085d6a2e +0x126:  mov    0xc(%ebp),%edx
085d6a31 +0x129:  mov    %edx,0x28(%eax)
085d6a34 +0x12c:  mov    0x8(%ebp),%eax
085d6a37 +0x12f:  movl   $0x0,0x2c(%eax)
085d6a3e +0x136:  mov    0x8(%ebp),%eax
085d6a41 +0x139:  mov    0xc(%ebp),%edx
085d6a44 +0x13c:  mov    %edx,0x30(%eax)
085d6a47 +0x13f:  mov    0x8(%ebp),%eax
085d6a4a +0x142:  movl   $0x1,0x50(%eax)
085d6a51 +0x149:  mov    0x8(%ebp),%eax
085d6a54 +0x14c:  add    $0x620,%eax
085d6a59 +0x151:  movl   $0x1,0x8(%esp)
085d6a61 +0x159:  movl   $0x0,0x4(%esp)
085d6a69 +0x161:  mov    %eax,(%esp)
085d6a6c +0x164:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d6a71 +0x169:  mov    0x8(%ebp),%eax
085d6a74 +0x16c:  movzbl -0x3c(%ebp),%edx
085d6a78 +0x170:  mov    %dl,0x8(%eax)
085d6a7b +0x173:  mov    0x8(%ebp),%eax
085d6a7e +0x176:  movzbl 0x8(%eax),%eax
085d6a82 +0x17a:  test   %al,%al
085d6a84 +0x17c:  jne    085d6aaa <+0x1a2>
085d6a86 +0x17e:  mov    0x14(%ebp),%eax
085d6a89 +0x181:  mov    %eax,(%esp)
085d6a8c +0x184:  call   0807e3b0 <_init+0xca8>
085d6a91 +0x189:  mov    0x8(%ebp),%edx
085d6a94 +0x18c:  add    $0x9,%edx
085d6a97 +0x18f:  mov    %eax,0x8(%esp)
085d6a9b +0x193:  mov    0x14(%ebp),%eax
085d6a9e +0x196:  mov    %eax,0x4(%esp)
085d6aa2 +0x19a:  mov    %edx,(%esp)
085d6aa5 +0x19d:  call   0807d8d0 <_init+0x1c8>
085d6aaa +0x1a2:  mov    0x8(%ebp),%eax
085d6aad +0x1a5:  mov    (%eax),%eax
085d6aaf +0x1a7:  cwtl
085d6ab0 +0x1a8:  mov    %eax,0x4(%esp)
085d6ab4 +0x1ac:  mov    0xc(%ebp),%eax
085d6ab7 +0x1af:  mov    %eax,(%esp)
085d6aba +0x1b2:  call   085df9b2 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x239>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x239
085d6abf +0x1b7:  mov    0x8(%ebp),%eax
085d6ac2 +0x1ba:  movl   $0x1,0x600(%eax)
085d6acc +0x1c4:  movzwl -0x40(%ebp),%edx
085d6ad0 +0x1c8:  mov    0x8(%ebp),%eax
085d6ad3 +0x1cb:  mov    %dx,0x5c4(%eax)
085d6ada +0x1d2:  mov    0x8(%ebp),%eax
085d6add +0x1d5:  movzwl 0x5c4(%eax),%edx
085d6ae4 +0x1dc:  mov    0x8(%ebp),%eax
085d6ae7 +0x1df:  mov    %dx,0x5c6(%eax)
085d6aee +0x1e6:  mov    0x8(%ebp),%eax
085d6af1 +0x1e9:  movzbl -0x44(%ebp),%edx
085d6af5 +0x1ed:  mov    %dl,0x604(%eax)
085d6afb +0x1f3:  mov    0x8(%ebp),%eax
085d6afe +0x1f6:  movzbl 0x604(%eax),%eax
085d6b05 +0x1fd:  test   %al,%al
085d6b07 +0x1ff:  je     085d6b5a <+0x252>
085d6b09 +0x201:  mov    0x8(%ebp),%eax
085d6b0c +0x204:  mov    0x24(%ebp),%edx
085d6b0f +0x207:  mov    %edx,0x610(%eax)
085d6b15 +0x20d:  mov    0x8(%ebp),%eax
085d6b18 +0x210:  add    $0x605,%eax
085d6b1d +0x215:  movl   $0x9,0x8(%esp)
085d6b25 +0x21d:  movl   $0x0,0x4(%esp)
085d6b2d +0x225:  mov    %eax,(%esp)
085d6b30 +0x228:  call   0807dcc0 <_init+0x5b8>
085d6b35 +0x22d:  mov    0x8(%ebp),%eax
085d6b38 +0x230:  mov    0x610(%eax),%eax
085d6b3e +0x236:  mov    0x8(%ebp),%edx
085d6b41 +0x239:  add    $0x605,%edx
085d6b47 +0x23f:  mov    %eax,0x8(%esp)
085d6b4b +0x243:  mov    0x20(%ebp),%eax
085d6b4e +0x246:  mov    %eax,0x4(%esp)
085d6b52 +0x24a:  mov    %edx,(%esp)
085d6b55 +0x24d:  call   0807d8a0 <_init+0x198>
085d6b5a +0x252:  mov    0x8(%ebp),%eax
085d6b5d +0x255:  mov    0x2c(%eax),%eax
085d6b60 +0x258:  mov    0x8(%ebp),%edx
085d6b63 +0x25b:  add    $0x620,%edx
085d6b69 +0x261:  mov    %eax,0x4(%esp)
085d6b6d +0x265:  mov    %edx,(%esp)
085d6b70 +0x268:  call   085de0cc <_ZN15CRelayBattleMgr12OnCreateRoomEi>  ; CRelayBattleMgr::OnCreateRoom(int)
085d6b75 +0x26d:  mov    0x8(%ebp),%eax
085d6b78 +0x270:  mov    0x2c(%eax),%eax
085d6b7b +0x273:  mov    0x8(%ebp),%edx
085d6b7e +0x276:  add    $0x69c,%edx
085d6b84 +0x27c:  mov    %eax,0x4(%esp)
085d6b88 +0x280:  mov    %edx,(%esp)
085d6b8b +0x283:  call   085dee66 <_ZN20CDeathMatchBattleMgr12OnCreateRoomEi>  ; CDeathMatchBattleMgr::OnCreateRoom(int)
085d6b90 +0x288:  mov    0x28(%ebp),%edx
085d6b93 +0x28b:  mov    0x8(%ebp),%eax
085d6b96 +0x28e:  mov    %edx,0x4(%eax)
085d6b99 +0x291:  movl   $0x0,-0x1c(%ebp)
085d6ba0 +0x298:  mov    0x8(%ebp),%eax
085d6ba3 +0x29b:  mov    0x6e4(%eax),%eax
085d6ba9 +0x2a1:  mov    (%eax),%eax
085d6bab +0x2a3:  add    $0x20,%eax
085d6bae +0x2a6:  mov    (%eax),%ecx
085d6bb0 +0x2a8:  mov    0x8(%ebp),%eax
085d6bb3 +0x2ab:  mov    0x6e4(%eax),%eax
085d6bb9 +0x2b1:  mov    0xc(%ebp),%edx
085d6bbc +0x2b4:  mov    %edx,0x4(%esp)
085d6bc0 +0x2b8:  mov    %eax,(%esp)
085d6bc3 +0x2bb:  call   *%ecx
085d6bc5 +0x2bd:  mov    %eax,-0x1c(%ebp)
085d6bc8 +0x2c0:  cmpl   $0x0,-0x1c(%ebp)
085d6bcc +0x2c4:  setne  %al
085d6bcf +0x2c7:  test   %al,%al
085d6bd1 +0x2c9:  je     085d6bd8 <+0x2d0>
085d6bd3 +0x2cb:  mov    -0x1c(%ebp),%eax
085d6bd6 +0x2ce:  jmp    085d6bdd <+0x2d5>
085d6bd8 +0x2d0:  mov    $0x0,%eax
085d6bdd +0x2d5:  add    $0x5c,%esp
085d6be0 +0x2d8:  pop    %ebx
085d6be1 +0x2d9:  pop    %esi
085d6be2 +0x2da:  pop    %edi
085d6be3 +0x2db:  pop    %ebp
085d6be4 +0x2dc:  ret
085d6be5 +0x2dd:  nop
```

## 反编译 C

```c
// PvP_Room::create_room @ 0x85d6908

/* PvP_Room::create_room(CUser*, char, char*, short, bool, char const*, int, PVP_BATTLE_MODE) */

int __thiscall
PvP_Room::create_room
          (PvP_Room *this,CUserCharacInfo *param_1,PvP_Room param_2,char *param_3,undefined2 param_4
          ,PvP_Room param_5,void *param_6,undefined4 param_7,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  size_t __n;
  undefined2 local_44 [2];
  PvP_Room local_40;
  CSwitchLog local_30 [16];
  undefined4 local_20;
  
  uVar1 = param_9;
  local_40 = param_2;
  local_44[0] = param_4;
  uVar5 = *(undefined4 *)this;
  uVar2 = CUserCharacInfo::getCurCharacName(param_1);
  uVar3 = CUser::get_acc_name((CUser *)param_1);
  CSwitchLog::CSwitchLog
            (local_30,
             "int PvP_Room::create_room(CUser*, char, char*, short int, bool, const char*, int, PVP_BATTLE_MODE)"
             ,0x43a,0,0);
  CSwitchLog::operator()(local_30,"pvp@log %s,%s,room(%d),%d",uVar3,uVar2,uVar5,uVar1);
  iVar4 = CUserCharacInfo::getCurCharacR(param_1);
  if (iVar4 == 0) {
    iVar4 = 0x13;
  }
  else {
    uVar5 = GetMatchingType();
    uVar5 = CMatchingSystem::GetMatchingSystem(*(CMatchingSystem **)(this + 0x6e0),uVar5);
    *(undefined4 *)(this + 0x6e4) = uVar5;
    (**(code **)(**(int **)(this + 0x6e4) + 0x18))(*(undefined4 *)(this + 0x6e4),local_44,&param_9);
    if (*(int *)(this + 0xb8) == 0) {
      *(undefined4 *)(this + 0xb8) = 1;
      *(CUserCharacInfo **)(this + 0x28) = param_1;
      *(undefined4 *)(this + 0x2c) = 0;
      *(CUserCharacInfo **)(this + 0x30) = param_1;
      *(undefined4 *)(this + 0x50) = 1;
      CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),0,1);
      this[8] = local_40;
      if (this[8] == (PvP_Room)0x0) {
        __n = strlen(param_3);
        strncpy((char *)(this + 9),param_3,__n);
      }
      CUser::SetPvpIndex((CUser *)param_1,(short)*(undefined4 *)this);
      *(undefined4 *)(this + 0x600) = 1;
      *(undefined2 *)(this + 0x5c4) = local_44[0];
      *(undefined2 *)(this + 0x5c6) = *(undefined2 *)(this + 0x5c4);
      this[0x604] = param_5;
      if (this[0x604] != (PvP_Room)0x0) {
        *(undefined4 *)(this + 0x610) = param_7;
        memset(this + 0x605,0,9);
        memcpy(this + 0x605,param_6,*(size_t *)(this + 0x610));
      }
      CRelayBattleMgr::OnCreateRoom((int)(this + 0x620));
      CDeathMatchBattleMgr::OnCreateRoom((int)(this + 0x69c));
      *(undefined4 *)(this + 4) = param_9;
      local_20 = 0;
      iVar4 = (**(code **)(**(int **)(this + 0x6e4) + 0x20))(*(undefined4 *)(this + 0x6e4),param_1);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0x13;
    }
  }
  return iVar4;
}
```
