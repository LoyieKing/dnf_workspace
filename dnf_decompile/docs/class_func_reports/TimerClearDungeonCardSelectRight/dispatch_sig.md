# dispatch_sig

`_ZN32TimerClearDungeonCardSelectRight12dispatch_sigEiij`

`TimerClearDungeonCardSelectRight::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerClearDungeonCardSelectRight` | `0x086347c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086347c6  _ZN32TimerClearDungeonCardSelectRight12dispatch_sigEiij
#           TimerClearDungeonCardSelectRight::dispatch_sig(int, int, unsigned int)
# range [0x086347c6, 0x08634859]
086347c6 +0x00:  push   %ebp
086347c7 +0x01:  mov    %esp,%ebp
086347c9 +0x03:  sub    $0x28,%esp
086347cc +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086347d1 +0x0b:  mov    0xc(%ebp),%edx
086347d4 +0x0e:  mov    %edx,0x4(%esp)
086347d8 +0x12:  mov    %eax,(%esp)
086347db +0x15:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
086347e0 +0x1a:  mov    %eax,-0xc(%ebp)
086347e3 +0x1d:  cmpl   $0x0,-0xc(%ebp)
086347e7 +0x21:  jne    086347f0 <+0x2a>
086347e9 +0x23:  mov    $0x0,%eax
086347ee +0x28:  jmp    08634857 <+0x91>
086347f0 +0x2a:  mov    0x10(%ebp),%eax
086347f3 +0x2d:  mov    %eax,0x8(%esp)
086347f7 +0x31:  movl   $0x13,0x4(%esp)
086347ff +0x39:  mov    -0xc(%ebp),%eax
08634802 +0x3c:  mov    %eax,(%esp)
08634805 +0x3f:  call   0859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>  ; CParty::check_timer_key(TIMER_MESSAGE, int)
0863480a +0x44:  xor    $0x1,%eax
0863480d +0x47:  test   %al,%al
0863480f +0x49:  je     08634818 <+0x52>
08634811 +0x4b:  mov    $0x0,%eax
08634816 +0x50:  jmp    08634857 <+0x91>
08634818 +0x52:  mov    -0xc(%ebp),%eax
0863481b +0x55:  mov    %eax,(%esp)
0863481e +0x58:  call   0822d89c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f46
08634823 +0x5d:  cmp    $0x4,%al
08634825 +0x5f:  sete   %al
08634828 +0x62:  test   %al,%al
0863482a +0x64:  je     08634852 <+0x8c>
0863482c +0x66:  movl   $0x5,0x4(%esp)
08634834 +0x6e:  mov    -0xc(%ebp),%eax
08634837 +0x71:  mov    %eax,(%esp)
0863483a +0x74:  call   0822d8ac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2f56>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2f56
0863483f +0x79:  movl   $0x5,0x4(%esp)
08634847 +0x81:  mov    -0xc(%ebp),%eax
0863484a +0x84:  mov    %eax,(%esp)
0863484d +0x87:  call   085b210c <_ZN6CParty29insert_time_dungeon_clear_msgEi>  ; CParty::insert_time_dungeon_clear_msg(int)
08634852 +0x8c:  mov    $0x1,%eax
08634857 +0x91:  leave
08634858 +0x92:  ret
08634859 +0x93:  nop
```

## 反编译 C

```c
// TimerClearDungeonCardSelectRight::dispatch_sig @ 0x86347c6

/* TimerClearDungeonCardSelectRight::dispatch_sig(int, int, unsigned int) */

undefined4 TimerClearDungeonCardSelectRight::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *this;
  undefined4 uVar3;
  
  iVar2 = G_CGameManager();
  this = (CParty *)CGameManager::GetParty(iVar2);
  if (this == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(this,0x13,param_3);
    if (cVar1 == '\x01') {
      cVar1 = CParty::get_dungeon_clear_state(this);
      if (cVar1 == '\x04') {
        CParty::set_dungeon_clear_state(this,'\x05');
        CParty::insert_time_dungeon_clear_msg(this,5);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
