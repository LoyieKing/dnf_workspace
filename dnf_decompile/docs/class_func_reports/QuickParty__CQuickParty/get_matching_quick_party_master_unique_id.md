# get_matching_quick_party_master_unique_id

`_ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv`

`QuickParty::CQuickParty::get_matching_quick_party_master_unique_id()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickParty` | `0x08269936` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269936  _ZN10QuickParty11CQuickParty41get_matching_quick_party_master_unique_idEv
#           QuickParty::CQuickParty::get_matching_quick_party_master_unique_id()
# range [0x08269936, 0x08269a8d]
08269936 +0x000:  push   %ebp
08269937 +0x001:  mov    %esp,%ebp
08269939 +0x003:  sub    $0x48,%esp
0826993c +0x006:  movl   $0xffffffff,-0x30(%ebp)
08269943 +0x00d:  movw   $0xffff,-0x2a(%ebp)
08269949 +0x013:  movl   $0x0,-0x28(%ebp)
08269950 +0x01a:  movl   $0x0,-0x24(%ebp)
08269957 +0x021:  jmp    082699c3 <+0x8d>
08269959 +0x023:  mov    -0x24(%ebp),%eax
0826995c +0x026:  mov    %eax,0x4(%esp)
08269960 +0x02a:  mov    0x8(%ebp),%eax
08269963 +0x02d:  mov    %eax,(%esp)
08269966 +0x030:  call   082697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>  ; QuickParty::CQuickParty::get_party_index(int)
0826996b +0x035:  mov    %eax,-0x20(%ebp)
0826996e +0x038:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08269973 +0x03d:  mov    -0x20(%ebp),%edx
08269976 +0x040:  mov    %edx,0x4(%esp)
0826997a +0x044:  mov    %eax,(%esp)
0826997d +0x047:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08269982 +0x04c:  mov    %eax,-0x28(%ebp)
08269985 +0x04f:  cmpl   $0x0,-0x28(%ebp)
08269989 +0x053:  je     082699be <+0x88>
0826998b +0x055:  mov    -0x28(%ebp),%eax
0826998e +0x058:  mov    %eax,(%esp)
08269991 +0x05b:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
08269996 +0x060:  cmp    $0x1,%al
08269998 +0x062:  setg   %al
0826999b +0x065:  test   %al,%al
0826999d +0x067:  je     082699a7 <+0x71>
0826999f +0x069:  mov    -0x24(%ebp),%eax
082699a2 +0x06c:  mov    %eax,-0x30(%ebp)
082699a5 +0x06f:  jmp    082699ce <+0x98>
082699a7 +0x071:  mov    -0x28(%ebp),%eax
082699aa +0x074:  mov    %eax,(%esp)
082699ad +0x077:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
082699b2 +0x07c:  test   %al,%al
082699b4 +0x07e:  je     082699bf <+0x89>
082699b6 +0x080:  mov    -0x24(%ebp),%eax
082699b9 +0x083:  mov    %eax,-0x30(%ebp)
082699bc +0x086:  jmp    082699bf <+0x89>
082699be +0x088:  nop
082699bf +0x089:  addl   $0x1,-0x24(%ebp)
082699c3 +0x08d:  cmpl   $0x3,-0x24(%ebp)
082699c7 +0x091:  setle  %al
082699ca +0x094:  test   %al,%al
082699cc +0x096:  jne    08269959 <+0x23>
082699ce +0x098:  cmpl   $0xffffffff,-0x30(%ebp)
082699d2 +0x09c:  jne    08269a26 <+0xf0>
082699d4 +0x09e:  movl   $0x0,-0x1c(%ebp)
082699db +0x0a5:  jmp    08269a1b <+0xe5>
082699dd +0x0a7:  mov    -0x1c(%ebp),%eax
082699e0 +0x0aa:  mov    %eax,0x4(%esp)
082699e4 +0x0ae:  mov    0x8(%ebp),%eax
082699e7 +0x0b1:  mov    %eax,(%esp)
082699ea +0x0b4:  call   082697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>  ; QuickParty::CQuickParty::get_party_index(int)
082699ef +0x0b9:  mov    %eax,-0x18(%ebp)
082699f2 +0x0bc:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082699f7 +0x0c1:  mov    -0x18(%ebp),%edx
082699fa +0x0c4:  mov    %edx,0x4(%esp)
082699fe +0x0c8:  mov    %eax,(%esp)
08269a01 +0x0cb:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08269a06 +0x0d0:  test   %eax,%eax
08269a08 +0x0d2:  setne  %al
08269a0b +0x0d5:  test   %al,%al
08269a0d +0x0d7:  je     08269a17 <+0xe1>
08269a0f +0x0d9:  mov    -0x1c(%ebp),%eax
08269a12 +0x0dc:  mov    %eax,-0x30(%ebp)
08269a15 +0x0df:  jmp    08269a26 <+0xf0>
08269a17 +0x0e1:  addl   $0x1,-0x1c(%ebp)
08269a1b +0x0e5:  cmpl   $0x3,-0x1c(%ebp)
08269a1f +0x0e9:  setle  %al
08269a22 +0x0ec:  test   %al,%al
08269a24 +0x0ee:  jne    082699dd <+0xa7>
08269a26 +0x0f0:  cmpl   $0xffffffff,-0x30(%ebp)
08269a2a +0x0f4:  je     08269a87 <+0x151>
08269a2c +0x0f6:  cmpl   $0x0,-0x30(%ebp)
08269a30 +0x0fa:  js     08269a87 <+0x151>
08269a32 +0x0fc:  cmpl   $0x3,-0x30(%ebp)
08269a36 +0x100:  jg     08269a87 <+0x151>
08269a38 +0x102:  mov    -0x30(%ebp),%eax
08269a3b +0x105:  mov    %eax,0x4(%esp)
08269a3f +0x109:  mov    0x8(%ebp),%eax
08269a42 +0x10c:  mov    %eax,(%esp)
08269a45 +0x10f:  call   082697ec <_ZN10QuickParty11CQuickParty15get_party_indexEi>  ; QuickParty::CQuickParty::get_party_index(int)
08269a4a +0x114:  mov    %eax,-0x14(%ebp)
08269a4d +0x117:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08269a52 +0x11c:  mov    -0x14(%ebp),%edx
08269a55 +0x11f:  mov    %edx,0x4(%esp)
08269a59 +0x123:  mov    %eax,(%esp)
08269a5c +0x126:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08269a61 +0x12b:  mov    %eax,-0x10(%ebp)
08269a64 +0x12e:  cmpl   $0x0,-0x10(%ebp)
08269a68 +0x132:  je     08269a87 <+0x151>
08269a6a +0x134:  mov    -0x10(%ebp),%eax
08269a6d +0x137:  mov    %eax,(%esp)
08269a70 +0x13a:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
08269a75 +0x13f:  mov    %eax,-0xc(%ebp)
08269a78 +0x142:  mov    -0xc(%ebp),%eax
08269a7b +0x145:  mov    %eax,(%esp)
08269a7e +0x148:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08269a83 +0x14d:  mov    %ax,-0x2a(%ebp)
08269a87 +0x151:  movzwl -0x2a(%ebp),%eax
08269a8b +0x155:  leave
08269a8c +0x156:  ret
08269a8d +0x157:  nop
```

## 反编译 C

```c
// QuickParty::CQuickParty::get_matching_quick_party_master_unique_id @ 0x8269936

/* QuickParty::CQuickParty::get_matching_quick_party_master_unique_id() */

undefined2 __thiscall
QuickParty::CQuickParty::get_matching_quick_party_master_unique_id(CQuickParty *this)

{
  char cVar1;
  int iVar2;
  CParty *pCVar3;
  CUser *this_00;
  undefined4 local_34;
  undefined2 local_2e;
  undefined4 local_28;
  undefined4 local_20;
  
  local_34 = -1;
  local_2e = 0xffff;
  for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
    get_party_index(this,local_28);
    iVar2 = G_CGameManager();
    pCVar3 = (CParty *)CGameManager::GetParty(iVar2);
    if (pCVar3 != (CParty *)0x0) {
      cVar1 = CParty::GetEPLPState(pCVar3);
      if ('\x01' < cVar1) {
        local_34 = local_28;
        break;
      }
      cVar1 = CParty::is_quick_party(pCVar3);
      if (cVar1 != '\0') {
        local_34 = local_28;
      }
    }
  }
  if (local_34 == -1) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      get_party_index(this,local_20);
      iVar2 = G_CGameManager();
      iVar2 = CGameManager::GetParty(iVar2);
      if (iVar2 != 0) {
        local_34 = local_20;
        break;
      }
    }
  }
  if (((local_34 != -1) && (-1 < local_34)) && (local_34 < 4)) {
    get_party_index(this,local_34);
    iVar2 = G_CGameManager();
    pCVar3 = (CParty *)CGameManager::GetParty(iVar2);
    if (pCVar3 != (CParty *)0x0) {
      this_00 = (CUser *)CParty::getManager(pCVar3);
      local_2e = CUser::get_unique_id(this_00);
    }
  }
  return local_2e;
}
```
