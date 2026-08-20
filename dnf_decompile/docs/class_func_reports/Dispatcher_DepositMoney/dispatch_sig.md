# dispatch_sig

`_ZN23Dispatcher_DepositMoney12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_DepositMoney::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DepositMoney` | `0x08224fe4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08224fe4  _ZN23Dispatcher_DepositMoney12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_DepositMoney::dispatch_sig(CUser*, PacketBuf&)
# range [0x08224fe4, 0x082250eb]
08224fe4 +0x000:  push   %ebp
08224fe5 +0x001:  mov    %esp,%ebp
08224fe7 +0x003:  push   %ebx
08224fe8 +0x004:  sub    $0x74,%esp
08224feb +0x007:  mov    0xc(%ebp),%eax
08224fee +0x00a:  mov    %eax,(%esp)
08224ff1 +0x00d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08224ff6 +0x012:  cmp    $0x2,%eax
08224ff9 +0x015:  setle  %al
08224ffc +0x018:  test   %al,%al
08224ffe +0x01a:  je     0822500a <+0x26>
08225000 +0x01c:  mov    $0x0,%eax
08225005 +0x021:  jmp    082250e5 <+0x101>
0822500a +0x026:  movl   $0x0,-0x10(%ebp)
08225011 +0x02d:  lea    -0x10(%ebp),%eax
08225014 +0x030:  mov    %eax,0x4(%esp)
08225018 +0x034:  mov    0x10(%ebp),%eax
0822501b +0x037:  mov    %eax,(%esp)
0822501e +0x03a:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08225023 +0x03f:  xor    $0x1,%eax
08225026 +0x042:  test   %al,%al
08225028 +0x044:  je     08225053 <+0x6f>
0822502a +0x046:  movl   $0x0,0xc(%esp)
08225032 +0x04e:  movl   $0x0,0x8(%esp)
0822503a +0x056:  movl   $&_ZZN23Dispatcher_DepositMoney12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08225042 +0x05e:  movl   $0xdfc2,(%esp)
08225049 +0x065:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822504e +0x06a:  jmp    082250e5 <+0x101>
08225053 +0x06f:  mov    0xc(%ebp),%eax
08225056 +0x072:  mov    %eax,(%esp)
08225059 +0x075:  call   0822fc30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52da
0822505e +0x07a:  xor    $0x1,%eax
08225061 +0x07d:  test   %al,%al
08225063 +0x07f:  je     0822506c <+0x88>
08225065 +0x081:  mov    $0x0,%eax
0822506a +0x086:  jmp    082250e5 <+0x101>
0822506c +0x088:  mov    0xc(%ebp),%eax
0822506f +0x08b:  mov    %eax,(%esp)
08225072 +0x08e:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
08225077 +0x093:  mov    %eax,-0xc(%ebp)
0822507a +0x096:  mov    -0x10(%ebp),%eax
0822507d +0x099:  mov    %eax,0x4(%esp)
08225081 +0x09d:  mov    -0xc(%ebp),%eax
08225084 +0x0a0:  mov    %eax,(%esp)
08225087 +0x0a3:  call   0828a12a <_ZN13CAccountCargo12DepositMoneyEj>  ; CAccountCargo::DepositMoney(unsigned int)
0822508c +0x0a8:  test   %al,%al
0822508e +0x0aa:  je     082250e0 <+0xfc>
08225090 +0x0ac:  lea    -0x4d(%ebp),%eax
08225093 +0x0af:  mov    %eax,(%esp)
08225096 +0x0b2:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0822509b +0x0b7:  movl   $0x0,-0x4b(%ebp)
082250a2 +0x0be:  mov    -0xc(%ebp),%eax
082250a5 +0x0c1:  mov    %eax,(%esp)
082250a8 +0x0c4:  call   0822f020 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46ca
082250ad +0x0c9:  mov    %eax,-0x46(%ebp)
082250b0 +0x0cc:  mov    -0x10(%ebp),%eax
082250b3 +0x0cf:  mov    %eax,%ecx
082250b5 +0x0d1:  mov    -0x46(%ebp),%edx
082250b8 +0x0d4:  mov    -0x4b(%ebp),%eax
082250bb +0x0d7:  mov    0xc(%ebp),%ebx
082250be +0x0da:  add    $0x79700,%ebx
082250c4 +0x0e0:  movl   $0x2d,0x10(%esp)
082250cc +0x0e8:  mov    %ecx,0xc(%esp)
082250d0 +0x0ec:  mov    %edx,0x8(%esp)
082250d4 +0x0f0:  mov    %eax,0x4(%esp)
082250d8 +0x0f4:  mov    %ebx,(%esp)
082250db +0x0f7:  call   086868b4 <_ZN15cUserHistoryLog19AccountCargoAddItemEiii14eItemAddReason>  ; cUserHistoryLog::AccountCargoAddItem(int, int, int, eItemAddReason)
082250e0 +0x0fc:  mov    $0x0,%eax
082250e5 +0x101:  add    $0x74,%esp
082250e8 +0x104:  pop    %ebx
082250e9 +0x105:  pop    %ebp
082250ea +0x106:  ret
082250eb +0x107:  nop
```

## 反编译 C

```c
// Dispatcher_DepositMoney::dispatch_sig @ 0x8224fe4

/* Dispatcher_DepositMoney::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DepositMoney::dispatch_sig
          (Dispatcher_DepositMoney *this,CUser *param_1,PacketBuf *param_2)

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
        cVar1 = CAccountCargo::DepositMoney(local_10,local_14);
        if (cVar1 != '\0') {
          Inven_Item::Inven_Item(local_51);
          local_4f = 0;
          local_4a = CAccountCargo::GetMoney(local_10);
          cUserHistoryLog::AccountCargoAddItem
                    ((cUserHistoryLog *)(param_1 + 0x79700),local_4f,local_4a,local_14,0x2d);
        }
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = LineFunc(0xdfc2,
                       "virtual int Dispatcher_DepositMoney::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
  }
  return uVar3;
}
```
