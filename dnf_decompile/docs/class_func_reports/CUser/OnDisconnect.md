# OnDisconnect

`_ZN5CUser12OnDisconnectEv`

`CUser::OnDisconnect()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086804ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086804ce  _ZN5CUser12OnDisconnectEv
#           CUser::OnDisconnect()
# range [0x086804ce, 0x08680569]
086804ce +0x00:  push   %ebp
086804cf +0x01:  mov    %esp,%ebp
086804d1 +0x03:  push   %ebx
086804d2 +0x04:  sub    $0x24,%esp
086804d5 +0x07:  mov    0x8(%ebp),%eax
086804d8 +0x0a:  mov    %eax,(%esp)
086804db +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086804e0 +0x12:  cmp    $0x7,%eax
086804e3 +0x15:  sete   %al
086804e6 +0x18:  test   %al,%al
086804e8 +0x1a:  je     08680533 <+0x65>
086804ea +0x1c:  mov    0x8(%ebp),%eax
086804ed +0x1f:  mov    %eax,(%esp)
086804f0 +0x22:  call   0822fe74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x551e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x551e
086804f5 +0x27:  movswl %ax,%ebx
086804f8 +0x2a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086804fd +0x2f:  movl   $0x0,0xc(%esp)
08680505 +0x37:  mov    0x8(%ebp),%edx
08680508 +0x3a:  mov    %edx,0x8(%esp)
0868050c +0x3e:  mov    %ebx,0x4(%esp)
08680510 +0x42:  mov    %eax,(%esp)
08680513 +0x45:  call   08295206 <_ZN12CGameManager6GetPvpEiP5CUseri>  ; CGameManager::GetPvp(int, CUser*, int)
08680518 +0x4a:  mov    %eax,-0xc(%ebp)
0868051b +0x4d:  cmpl   $0x0,-0xc(%ebp)
0868051f +0x51:  je     08680533 <+0x65>
08680521 +0x53:  mov    0x8(%ebp),%eax
08680524 +0x56:  mov    %eax,0x4(%esp)
08680528 +0x5a:  mov    -0xc(%ebp),%eax
0868052b +0x5d:  mov    %eax,(%esp)
0868052e +0x60:  call   085dd754 <_ZN8PvP_Room10DisconnectEP5CUser>  ; PvP_Room::Disconnect(CUser*)
08680533 +0x65:  mov    0x8(%ebp),%eax
08680536 +0x68:  mov    %eax,(%esp)
08680539 +0x6b:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
0868053e +0x70:  test   %eax,%eax
08680540 +0x72:  setne  %al
08680543 +0x75:  test   %al,%al
08680545 +0x77:  je     08680563 <+0x95>
08680547 +0x79:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
0868054c +0x7e:  movl   $0x0,0x8(%esp)
08680554 +0x86:  mov    0x8(%ebp),%edx
08680557 +0x89:  mov    %edx,0x4(%esp)
0868055b +0x8d:  mov    %eax,(%esp)
0868055e +0x90:  call   082ef176 <_ZN11pvp_assault11CAssaultMgr19OnLeaveAssaultPlaceEP5CUserb>  ; pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(CUser*, bool)
08680563 +0x95:  add    $0x24,%esp
08680566 +0x98:  pop    %ebx
08680567 +0x99:  pop    %ebp
08680568 +0x9a:  ret
08680569 +0x9b:  nop
```

## 反编译 C

```c
// CUser::OnDisconnect @ 0x86804ce

/* CUser::OnDisconnect() */

void __thiscall CUser::OnDisconnect(CUser *this)

{
  short sVar1;
  int iVar2;
  CGameManager *this_00;
  PvP_Room *this_01;
  CAssaultMgr *this_02;
  
  iVar2 = get_state(this);
  if (iVar2 == 7) {
    sVar1 = GetPvpIndex(this);
    this_00 = (CGameManager *)G_CGameManager();
    this_01 = (PvP_Room *)CGameManager::GetPvp(this_00,(int)sVar1,this,0);
    if (this_01 != (PvP_Room *)0x0) {
      PvP_Room::Disconnect(this_01,this);
    }
  }
  iVar2 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    this_02 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(this_02,this,false);
  }
  return;
}
```
