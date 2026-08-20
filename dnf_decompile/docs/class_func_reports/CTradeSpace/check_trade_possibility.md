# check_trade_possibility

`_ZN11CTradeSpace23check_trade_possibilityEv`

`CTradeSpace::check_trade_possibility()`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x0852993c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0852993c  _ZN11CTradeSpace23check_trade_possibilityEv
#           CTradeSpace::check_trade_possibility()
# range [0x0852993c, 0x085299bf]
0852993c +0x00:  push   %ebp
0852993d +0x01:  mov    %esp,%ebp
0852993f +0x03:  push   %ebx
08529940 +0x04:  sub    $0x14,%esp
08529943 +0x07:  mov    0x8(%ebp),%eax
08529946 +0x0a:  movzbl 0x1c(%eax),%eax
0852994a +0x0e:  xor    $0x1,%eax
0852994d +0x11:  test   %al,%al
0852994f +0x13:  je     08529958 <+0x1c>
08529951 +0x15:  mov    $0x0,%eax
08529956 +0x1a:  jmp    085299b9 <+0x7d>
08529958 +0x1c:  mov    0x8(%ebp),%eax
0852995b +0x1f:  mov    0x20(%eax),%eax
0852995e +0x22:  mov    %eax,(%esp)
08529961 +0x25:  call   0822fe3e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54e8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54e8
08529966 +0x2a:  mov    %eax,%ebx
08529968 +0x2c:  mov    0x8(%ebp),%eax
0852996b +0x2f:  mov    0x24(%eax),%eax
0852996e +0x32:  mov    %eax,(%esp)
08529971 +0x35:  call   0822fe3e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54e8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54e8
08529976 +0x3a:  cmp    %eax,%ebx
08529978 +0x3c:  setne  %al
0852997b +0x3f:  test   %al,%al
0852997d +0x41:  je     08529986 <+0x4a>
0852997f +0x43:  mov    $0x0,%eax
08529984 +0x48:  jmp    085299b9 <+0x7d>
08529986 +0x4a:  mov    0x8(%ebp),%eax
08529989 +0x4d:  mov    0x20(%eax),%eax
0852998c +0x50:  mov    %eax,(%esp)
0852998f +0x53:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08529994 +0x58:  mov    %eax,%ebx
08529996 +0x5a:  mov    0x8(%ebp),%eax
08529999 +0x5d:  mov    0x24(%eax),%eax
0852999c +0x60:  mov    %eax,(%esp)
0852999f +0x63:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085299a4 +0x68:  cmp    %eax,%ebx
085299a6 +0x6a:  setne  %al
085299a9 +0x6d:  test   %al,%al
085299ab +0x6f:  je     085299b4 <+0x78>
085299ad +0x71:  mov    $0x0,%eax
085299b2 +0x76:  jmp    085299b9 <+0x7d>
085299b4 +0x78:  mov    $0x1,%eax
085299b9 +0x7d:  add    $0x14,%esp
085299bc +0x80:  pop    %ebx
085299bd +0x81:  pop    %ebp
085299be +0x82:  ret
085299bf +0x83:  nop
```

## 反编译 C

```c
// CTradeSpace::check_trade_possibility @ 0x852993c

/* CTradeSpace::check_trade_possibility() */

undefined4 __thiscall CTradeSpace::check_trade_possibility(CTradeSpace *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (this[0x1c] == (CTradeSpace)0x1) {
    iVar2 = CUser::GetTradeSpace(*(CUser **)(this + 0x20));
    iVar3 = CUser::GetTradeSpace(*(CUser **)(this + 0x24));
    if (iVar2 == iVar3) {
      iVar2 = CUser::get_state(*(CUser **)(this + 0x20));
      iVar3 = CUser::get_state(*(CUser **)(this + 0x24));
      if (iVar2 == iVar3) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
