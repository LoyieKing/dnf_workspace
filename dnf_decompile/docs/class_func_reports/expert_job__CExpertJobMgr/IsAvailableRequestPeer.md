# IsAvailableRequestPeer

`_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard`

`expert_job::CExpertJobMgr::IsAvailableRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJobMgr` | `0x0849e55e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849e55e  _ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard
#           expert_job::CExpertJobMgr::IsAvailableRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE, PacketGuard&)
# range [0x0849e55e, 0x0849e60b]
0849e55e +0x00:  push   %ebp
0849e55f +0x01:  mov    %esp,%ebp
0849e561 +0x03:  sub    $0x18,%esp
0849e564 +0x06:  mov    0x10(%ebp),%eax
0849e567 +0x09:  mov    %eax,(%esp)
0849e56a +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849e56f +0x11:  test   %eax,%eax
0849e571 +0x13:  je     0849e582 <+0x24>
0849e573 +0x15:  mov    0xc(%ebp),%eax
0849e576 +0x18:  mov    %eax,(%esp)
0849e579 +0x1b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849e57e +0x20:  test   %eax,%eax
0849e580 +0x22:  jne    0849e589 <+0x2b>
0849e582 +0x24:  mov    $0x1,%eax
0849e587 +0x29:  jmp    0849e58e <+0x30>
0849e589 +0x2b:  mov    $0x0,%eax
0849e58e +0x30:  test   %al,%al
0849e590 +0x32:  je     0849e599 <+0x3b>
0849e592 +0x34:  mov    $0x3,%eax
0849e597 +0x39:  jmp    0849e609 <+0xab>
0849e599 +0x3b:  mov    0xc(%ebp),%eax
0849e59c +0x3e:  mov    %eax,(%esp)
0849e59f +0x41:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0849e5a4 +0x46:  test   %eax,%eax
0849e5a6 +0x48:  setne  %al
0849e5a9 +0x4b:  test   %al,%al
0849e5ab +0x4d:  je     0849e5b4 <+0x56>
0849e5ad +0x4f:  mov    $0x13,%eax
0849e5b2 +0x54:  jmp    0849e609 <+0xab>
0849e5b4 +0x56:  mov    0x10(%ebp),%eax
0849e5b7 +0x59:  mov    %eax,(%esp)
0849e5ba +0x5c:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0849e5bf +0x61:  test   %eax,%eax
0849e5c1 +0x63:  setne  %al
0849e5c4 +0x66:  test   %al,%al
0849e5c6 +0x68:  je     0849e5cf <+0x71>
0849e5c8 +0x6a:  mov    $0x13,%eax
0849e5cd +0x6f:  jmp    0849e609 <+0xab>
0849e5cf +0x71:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
0849e5d4 +0x76:  mov    0x10(%ebp),%edx
0849e5d7 +0x79:  mov    %edx,0x4(%esp)
0849e5db +0x7d:  mov    %eax,(%esp)
0849e5de +0x80:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
0849e5e3 +0x85:  test   %al,%al
0849e5e5 +0x87:  je     0849e5ee <+0x90>
0849e5e7 +0x89:  mov    $0x3d,%eax
0849e5ec +0x8e:  jmp    0849e609 <+0xab>
0849e5ee +0x90:  mov    0x10(%ebp),%eax
0849e5f1 +0x93:  mov    %eax,(%esp)
0849e5f4 +0x96:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
0849e5f9 +0x9b:  test   %al,%al
0849e5fb +0x9d:  je     0849e604 <+0xa6>
0849e5fd +0x9f:  mov    $0x13,%eax
0849e602 +0xa4:  jmp    0849e609 <+0xab>
0849e604 +0xa6:  mov    $0x0,%eax
0849e609 +0xab:  leave
0849e60a +0xac:  ret
0849e60b +0xad:  nop
```

## 反编译 C

```c
// expert_job::CExpertJobMgr::IsAvailableRequestPeer @ 0x849e55e

/* expert_job::CExpertJobMgr::IsAvailableRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE,
   PacketGuard&) */

undefined4
expert_job::CExpertJobMgr::IsAvailableRequestPeer
          (undefined4 param_1,CUserCharacInfo *param_2,CUserCharacInfo *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CPrivateStoreMgr *this;
  
  iVar3 = CUserCharacInfo::getCurCharacR(param_3);
  if (iVar3 != 0) {
    iVar3 = CUserCharacInfo::getCurCharacR(param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0849e58e;
    }
  }
  bVar1 = true;
LAB_0849e58e:
  if (bVar1) {
    uVar4 = 3;
  }
  else {
    iVar3 = CUserCharacInfo::GetCurCharacExpertJob(param_2);
    if (iVar3 == 0) {
      iVar3 = CUserCharacInfo::GetCurCharacExpertJob(param_3);
      if (iVar3 == 0) {
        this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
        cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this,(CUser *)param_3);
        if (cVar2 == '\0') {
          cVar2 = CUserCharacInfo::IsCurCharacGhost(param_3);
          if (cVar2 == '\0') {
            uVar4 = 0;
          }
          else {
            uVar4 = 0x13;
          }
        }
        else {
          uVar4 = 0x3d;
        }
      }
      else {
        uVar4 = 0x13;
      }
    }
    else {
      uVar4 = 0x13;
    }
  }
  return uVar4;
}
```
