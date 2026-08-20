# dispatch_sig

`_ZN15TimerCardSelect12dispatch_sigEiij`

`TimerCardSelect::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerCardSelect` | `0x086343ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086343ba  _ZN15TimerCardSelect12dispatch_sigEiij
#           TimerCardSelect::dispatch_sig(int, int, unsigned int)
# range [0x086343ba, 0x0863449b]
086343ba +0x00:  push   %ebp
086343bb +0x01:  mov    %esp,%ebp
086343bd +0x03:  sub    $0x28,%esp
086343c0 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086343c5 +0x0b:  mov    0xc(%ebp),%edx
086343c8 +0x0e:  mov    %edx,0x4(%esp)
086343cc +0x12:  mov    %eax,(%esp)
086343cf +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
086343d4 +0x1a:  mov    %eax,-0xc(%ebp)
086343d7 +0x1d:  cmpl   $0x0,-0xc(%ebp)
086343db +0x21:  jne    086343e7 <+0x2d>
086343dd +0x23:  mov    $0x0,%eax
086343e2 +0x28:  jmp    0863449a <+0xe0>
086343e7 +0x2d:  mov    0x10(%ebp),%eax
086343ea +0x30:  mov    %eax,0x8(%esp)
086343ee +0x34:  movl   $0x10,0x4(%esp)
086343f6 +0x3c:  mov    -0xc(%ebp),%eax
086343f9 +0x3f:  mov    %eax,(%esp)
086343fc +0x42:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
08634401 +0x47:  xor    $0x1,%eax
08634404 +0x4a:  test   %al,%al
08634406 +0x4c:  je     08634412 <+0x58>
08634408 +0x4e:  mov    $0x0,%eax
0863440d +0x53:  jmp    0863449a <+0xe0>
08634412 +0x58:  mov    -0xc(%ebp),%eax
08634415 +0x5b:  mov    %eax,(%esp)
08634418 +0x5e:  call   0822d89c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f46
0863441d +0x63:  test   %al,%al
0863441f +0x65:  je     08634430 <+0x76>
08634421 +0x67:  mov    -0xc(%ebp),%eax
08634424 +0x6a:  mov    %eax,(%esp)
08634427 +0x6d:  call   0822d89c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f46
0863442c +0x72:  cmp    $0x5,%al
0863442e +0x74:  jne    08634437 <+0x7d>
08634430 +0x76:  mov    $0x1,%eax
08634435 +0x7b:  jmp    0863443c <+0x82>
08634437 +0x7d:  mov    $0x0,%eax
0863443c +0x82:  test   %al,%al
0863443e +0x84:  je     08634447 <+0x8d>
08634440 +0x86:  mov    $0x1,%eax
08634445 +0x8b:  jmp    0863449a <+0xe0>
08634447 +0x8d:  movl   $0x0,0x4(%esp)
0863444f +0x95:  mov    -0xc(%ebp),%eax
08634452 +0x98:  mov    %eax,(%esp)
08634455 +0x9b:  call   085b489c <_ZN6CParty29IsCompleteCardSelectOfMembersE22eClearRewardCardType_t>  ; CParty::IsCompleteCardSelectOfMembers(eClearRewardCardType_t)
0863445a +0xa0:  xor    $0x1,%eax
0863445d +0xa3:  test   %al,%al
0863445f +0xa5:  je     08634477 <+0xbd>
08634461 +0xa7:  mov    -0xc(%ebp),%eax
08634464 +0xaa:  mov    %eax,(%esp)
08634467 +0xad:  call   085b4786 <_ZN6CParty18CompleteCardSelectEv>  ; CParty::CompleteCardSelect()
0863446c +0xb2:  mov    -0xc(%ebp),%eax
0863446f +0xb5:  mov    %eax,(%esp)
08634472 +0xb8:  call   085b44d6 <_ZN6CParty16SendEachCardInfoEv>  ; CParty::SendEachCardInfo()
08634477 +0xbd:  movl   $0x5,0x4(%esp)
0863447f +0xc5:  mov    -0xc(%ebp),%eax
08634482 +0xc8:  mov    %eax,(%esp)
08634485 +0xcb:  call   0822d8ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f56
0863448a +0xd0:  mov    -0xc(%ebp),%eax
0863448d +0xd3:  mov    %eax,(%esp)
08634490 +0xd6:  call   085ab736 <_ZN6CParty13dungeon_clearEv>  ; CParty::dungeon_clear()
08634495 +0xdb:  mov    $0x1,%eax
0863449a +0xe0:  leave
0863449b +0xe1:  ret
```

## 反编译 C

```c
// TimerCardSelect::dispatch_sig @ 0x86343ba

/* TimerCardSelect::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCardSelect::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CParty *this;
  
  iVar3 = G_CGameManager();
  this = (CParty *)CGameManager::GetParty(iVar3);
  if (this == (CParty *)0x0) {
    return 0;
  }
  cVar2 = CParty::check_timer_key(this,0x10,param_3);
  if (cVar2 != '\x01') {
    return 0;
  }
  cVar2 = CParty::get_dungeon_clear_state(this);
  if ((cVar2 == '\0') || (cVar2 = CParty::get_dungeon_clear_state(this), cVar2 == '\x05')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    cVar2 = CParty::IsCompleteCardSelectOfMembers(this,0);
    if (cVar2 != '\x01') {
      CParty::CompleteCardSelect(this);
      CParty::SendEachCardInfo(this);
    }
    CParty::set_dungeon_clear_state(this,'\x05');
    CParty::dungeon_clear(this);
  }
  return 1;
}
```
