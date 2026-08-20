# CheckOutTrade

`_ZN12CGameManager13CheckOutTradeEP5CUser`

`CGameManager::CheckOutTrade(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08297c14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08297c14  _ZN12CGameManager13CheckOutTradeEP5CUser
#           CGameManager::CheckOutTrade(CUser*)
# range [0x08297c14, 0x08297c75]
08297c14 +0x00:  push   %ebp
08297c15 +0x01:  mov    %esp,%ebp
08297c17 +0x03:  sub    $0x28,%esp
08297c1a +0x06:  mov    0xc(%ebp),%eax
08297c1d +0x09:  mov    %eax,(%esp)
08297c20 +0x0c:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08297c25 +0x11:  xor    $0x1,%eax
08297c28 +0x14:  test   %al,%al
08297c2a +0x16:  jne    08297c72 <+0x5e>
08297c2c +0x18:  mov    0xc(%ebp),%eax
08297c2f +0x1b:  mov    %eax,(%esp)
08297c32 +0x1e:  call   0822fe3e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54e8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54e8
08297c37 +0x23:  mov    0x8(%ebp),%edx
08297c3a +0x26:  add    $0x7c,%edx
08297c3d +0x29:  mov    %eax,0x4(%esp)
08297c41 +0x2d:  mov    %edx,(%esp)
08297c44 +0x30:  call   082b0bec <_GLOBAL__I__ZN4CLog5this_E+0xd013>  ; global constructors keyed to CLog::this_+0xd013
08297c49 +0x35:  mov    %eax,-0xc(%ebp)
08297c4c +0x38:  mov    0xc(%ebp),%eax
08297c4f +0x3b:  mov    %eax,0x4(%esp)
08297c53 +0x3f:  mov    -0xc(%ebp),%eax
08297c56 +0x42:  mov    %eax,(%esp)
08297c59 +0x45:  call   0852f086 <_ZN11CTradeSpace19cancel_trade_by_disEP5CUser>  ; CTradeSpace::cancel_trade_by_dis(CUser*)
08297c5e +0x4a:  mov    -0xc(%ebp),%eax
08297c61 +0x4d:  mov    %eax,0x4(%esp)
08297c65 +0x51:  mov    0x8(%ebp),%eax
08297c68 +0x54:  mov    %eax,(%esp)
08297c6b +0x57:  call   08294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>  ; CGameManager::PutTradeSpace(CTradeSpace*)
08297c70 +0x5c:  jmp    08297c73 <+0x5f>
08297c72 +0x5e:  nop
08297c73 +0x5f:  leave
08297c74 +0x60:  ret
08297c75 +0x61:  nop
```

## 反编译 C

```c
// CGameManager::CheckOutTrade @ 0x8297c14

/* CGameManager::CheckOutTrade(CUser*) */

void __thiscall CGameManager::CheckOutTrade(CGameManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CTradeSpace *this_00;
  
  cVar1 = CUser::CheckInTrade(param_1);
  if (cVar1 == '\x01') {
    iVar2 = CUser::GetTradeSpace(param_1);
    this_00 = (CTradeSpace *)
              StaticPool<CTradeSpace,300>::Get((StaticPool<CTradeSpace,300> *)(this + 0x7c),iVar2);
    CTradeSpace::cancel_trade_by_dis(this_00,param_1);
    PutTradeSpace(this,this_00);
  }
  return;
}
```
