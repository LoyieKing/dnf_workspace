# dispatch_sig

`_ZN24Dispatcher_WithdrawMoney12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_WithdrawMoney::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_WithdrawMoney` | `0x082250ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082250ec  _ZN24Dispatcher_WithdrawMoney12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_WithdrawMoney::dispatch_sig(CUser*, PacketBuf&)
# range [0x082250ec, 0x082251f3]
082250ec +0x000:  push   %ebp
082250ed +0x001:  mov    %esp,%ebp
082250ef +0x003:  push   %ebx
082250f0 +0x004:  sub    $0x74,%esp
082250f3 +0x007:  mov    0xc(%ebp),%eax
082250f6 +0x00a:  mov    %eax,(%esp)
082250f9 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082250fe +0x012:  cmp    $0x2,%eax
08225101 +0x015:  setle  %al
08225104 +0x018:  test   %al,%al
08225106 +0x01a:  je     08225112 <+0x26>
08225108 +0x01c:  mov    $0x0,%eax
0822510d +0x021:  jmp    082251ed <+0x101>
08225112 +0x026:  movl   $0x0,-0x10(%ebp)
08225119 +0x02d:  lea    -0x10(%ebp),%eax
0822511c +0x030:  mov    %eax,0x4(%esp)
08225120 +0x034:  mov    0x10(%ebp),%eax
08225123 +0x037:  mov    %eax,(%esp)
08225126 +0x03a:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0822512b +0x03f:  xor    $0x1,%eax
0822512e +0x042:  test   %al,%al
08225130 +0x044:  je     0822515b <+0x6f>
08225132 +0x046:  movl   $0x0,0xc(%esp)
0822513a +0x04e:  movl   $0x0,0x8(%esp)
08225142 +0x056:  movl   $&_ZZN24Dispatcher_WithdrawMoney12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822514a +0x05e:  movl   $0xdfda,(%esp)
08225151 +0x065:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08225156 +0x06a:  jmp    082251ed <+0x101>
0822515b +0x06f:  mov    0xc(%ebp),%eax
0822515e +0x072:  mov    %eax,(%esp)
08225161 +0x075:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
08225166 +0x07a:  xor    $0x1,%eax
08225169 +0x07d:  test   %al,%al
0822516b +0x07f:  je     08225174 <+0x88>
0822516d +0x081:  mov    $0x0,%eax
08225172 +0x086:  jmp    082251ed <+0x101>
08225174 +0x088:  mov    0xc(%ebp),%eax
08225177 +0x08b:  mov    %eax,(%esp)
0822517a +0x08e:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
0822517f +0x093:  mov    %eax,-0xc(%ebp)
08225182 +0x096:  mov    -0x10(%ebp),%eax
08225185 +0x099:  mov    %eax,0x4(%esp)
08225189 +0x09d:  mov    -0xc(%ebp),%eax
0822518c +0x0a0:  mov    %eax,(%esp)
0822518f +0x0a3:  call   0828a2f6 <_ZN13CAccountCargo13WithdrawMoneyEj>  ; CAccountCargo::WithdrawMoney(unsigned int)
08225194 +0x0a8:  test   %al,%al
08225196 +0x0aa:  je     082251e8 <+0xfc>
08225198 +0x0ac:  lea    -0x4d(%ebp),%eax
0822519b +0x0af:  mov    %eax,(%esp)
0822519e +0x0b2:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
082251a3 +0x0b7:  movl   $0x0,-0x4b(%ebp)
082251aa +0x0be:  mov    -0xc(%ebp),%eax
082251ad +0x0c1:  mov    %eax,(%esp)
082251b0 +0x0c4:  call   0822f020 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46ca
082251b5 +0x0c9:  mov    %eax,-0x46(%ebp)
082251b8 +0x0cc:  mov    -0x10(%ebp),%eax
082251bb +0x0cf:  mov    %eax,%ecx
082251bd +0x0d1:  mov    -0x46(%ebp),%edx
082251c0 +0x0d4:  mov    -0x4b(%ebp),%eax
082251c3 +0x0d7:  mov    0xc(%ebp),%ebx
082251c6 +0x0da:  add    $0x79700,%ebx
082251cc +0x0e0:  movl   $0x26,0x10(%esp)
082251d4 +0x0e8:  mov    %ecx,0xc(%esp)
082251d8 +0x0ec:  mov    %edx,0x8(%esp)
082251dc +0x0f0:  mov    %eax,0x4(%esp)
082251e0 +0x0f4:  mov    %ebx,(%esp)
082251e3 +0x0f7:  call   086868ee <_ZN15cUserHistoryLog19AccountCargoDelItemEiii14eItemDelReason>  ; cUserHistoryLog::AccountCargoDelItem(int, int, int, eItemDelReason)
082251e8 +0x0fc:  mov    $0x0,%eax
082251ed +0x101:  add    $0x74,%esp
082251f0 +0x104:  pop    %ebx
082251f1 +0x105:  pop    %ebp
082251f2 +0x106:  ret
082251f3 +0x107:  nop
```

## 反编译 C

```c
// Dispatcher_WithdrawMoney::dispatch_sig @ 0x82250ec

/* Dispatcher_WithdrawMoney::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_WithdrawMoney::dispatch_sig
          (Dispatcher_WithdrawMoney *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Inven_Item local_51 [2];
  undefined4 local_4f;
  undefined4 local_4a;
  uint local_14;
  CAccountCargo *local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_14 = 0;
    cVar1 = PacketBuf::get_int(param_2,&local_14);
    if (cVar1 == '\x01') {
      cVar1 = CUser::IsExistAccountCargo(param_1);
      if (cVar1 == '\x01') {
        local_10 = (CAccountCargo *)CUser::GetAccountCargo(param_1);
        cVar1 = CAccountCargo::WithdrawMoney(local_10,local_14);
        if (cVar1 != '\0') {
          Inven_Item::Inven_Item(local_51);
          local_4f = 0;
          local_4a = CAccountCargo::GetMoney(local_10);
          cUserHistoryLog::AccountCargoDelItem
                    ((cUserHistoryLog *)(param_1 + 0x79700),local_4f,local_4a,local_14,0x26);
        }
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = LineFunc(0xdfda,
                       "virtual int Dispatcher_WithdrawMoney::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  return uVar3;
}
```
