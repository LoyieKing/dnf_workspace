# AddRedeemList

`_ZN11Redeem_Item11CRedeemItem13AddRedeemListERK10Inven_Itemib`

`Redeem_Item::CRedeemItem::AddRedeemList(Inven_Item const&, int, bool)`

| 类 | 地址 |
|---|---|
| `Redeem_Item::CRedeemItem` | `0x085f71a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f71a8  _ZN11Redeem_Item11CRedeemItem13AddRedeemListERK10Inven_Itemib
#           Redeem_Item::CRedeemItem::AddRedeemList(Inven_Item const&, int, bool)
# range [0x085f71a8, 0x085f7289]
085f71a8 +0x00:  push   %ebp
085f71a9 +0x01:  mov    %esp,%ebp
085f71ab +0x03:  sub    $0x78,%esp
085f71ae +0x06:  mov    0x14(%ebp),%eax
085f71b1 +0x09:  mov    %al,-0x5c(%ebp)
085f71b4 +0x0c:  lea    -0x4c(%ebp),%eax
085f71b7 +0x0f:  mov    %eax,(%esp)
085f71ba +0x12:  call   0848f876 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x554>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x554
085f71bf +0x17:  mov    0xc(%ebp),%eax
085f71c2 +0x1a:  mov    (%eax),%edx
085f71c4 +0x1c:  mov    %edx,-0x4c(%ebp)
085f71c7 +0x1f:  mov    0x4(%eax),%edx
085f71ca +0x22:  mov    %edx,-0x48(%ebp)
085f71cd +0x25:  mov    0x8(%eax),%edx
085f71d0 +0x28:  mov    %edx,-0x44(%ebp)
085f71d3 +0x2b:  mov    0xc(%eax),%edx
085f71d6 +0x2e:  mov    %edx,-0x40(%ebp)
085f71d9 +0x31:  mov    0x10(%eax),%edx
085f71dc +0x34:  mov    %edx,-0x3c(%ebp)
085f71df +0x37:  mov    0x14(%eax),%edx
085f71e2 +0x3a:  mov    %edx,-0x38(%ebp)
085f71e5 +0x3d:  mov    0x18(%eax),%edx
085f71e8 +0x40:  mov    %edx,-0x34(%ebp)
085f71eb +0x43:  mov    0x1c(%eax),%edx
085f71ee +0x46:  mov    %edx,-0x30(%ebp)
085f71f1 +0x49:  mov    0x20(%eax),%edx
085f71f4 +0x4c:  mov    %edx,-0x2c(%ebp)
085f71f7 +0x4f:  mov    0x24(%eax),%edx
085f71fa +0x52:  mov    %edx,-0x28(%ebp)
085f71fd +0x55:  mov    0x28(%eax),%edx
085f7200 +0x58:  mov    %edx,-0x24(%ebp)
085f7203 +0x5b:  mov    0x2c(%eax),%edx
085f7206 +0x5e:  mov    %edx,-0x20(%ebp)
085f7209 +0x61:  mov    0x30(%eax),%edx
085f720c +0x64:  mov    %edx,-0x1c(%ebp)
085f720f +0x67:  mov    0x34(%eax),%edx
085f7212 +0x6a:  mov    %edx,-0x18(%ebp)
085f7215 +0x6d:  mov    0x38(%eax),%edx
085f7218 +0x70:  mov    %edx,-0x14(%ebp)
085f721b +0x73:  movzbl 0x3c(%eax),%eax
085f721f +0x77:  mov    %al,-0x10(%ebp)
085f7222 +0x7a:  cmpb   $0x0,-0x5c(%ebp)
085f7226 +0x7e:  je     085f7235 <+0x8d>
085f7228 +0x80:  mov    0x10(%ebp),%eax
085f722b +0x83:  add    $0x3e8,%eax
085f7230 +0x88:  mov    %eax,-0xc(%ebp)
085f7233 +0x8b:  jmp    085f723c <+0x94>
085f7235 +0x8d:  movl   $0x3e8,-0xc(%ebp)
085f723c +0x94:  mov    0x8(%ebp),%eax
085f723f +0x97:  mov    %eax,(%esp)
085f7242 +0x9a:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
085f7247 +0x9f:  mov    0x8(%ebp),%eax
085f724a +0xa2:  add    $0x8,%eax
085f724d +0xa5:  mov    %eax,(%esp)
085f7250 +0xa8:  call   085f7cac <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0xe8>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0xe8
085f7255 +0xad:  cmp    $0x14,%eax
085f7258 +0xb0:  seta   %al
085f725b +0xb3:  test   %al,%al
085f725d +0xb5:  je     085f726d <+0xc5>
085f725f +0xb7:  mov    0x8(%ebp),%eax
085f7262 +0xba:  add    $0x8,%eax
085f7265 +0xbd:  mov    %eax,(%esp)
085f7268 +0xc0:  call   085f7d76 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x1b2>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x1b2
085f726d +0xc5:  mov    0x8(%ebp),%eax
085f7270 +0xc8:  lea    0x8(%eax),%edx
085f7273 +0xcb:  lea    -0x4c(%ebp),%eax
085f7276 +0xce:  mov    %eax,0x4(%esp)
085f727a +0xd2:  mov    %edx,(%esp)
085f727d +0xd5:  call   085f7da6 <_GLOBAL__I__ZN11Redeem_Item11CRedeemItemC2Ev+0x1e2>  ; global constructors keyed to Redeem_Item::CRedeemItem::CRedeemItem()+0x1e2
085f7282 +0xda:  mov    $0x1,%eax
085f7287 +0xdf:  leave
085f7288 +0xe0:  ret
085f7289 +0xe1:  nop
```

## 反编译 C

```c
// Redeem_Item::CRedeemItem::AddRedeemList @ 0x85f71a8

/* Redeem_Item::CRedeemItem::AddRedeemList(Inven_Item const&, int, bool) */

undefined4 __thiscall
Redeem_Item::CRedeemItem::AddRedeemList
          (CRedeemItem *this,Inven_Item *param_1,int param_2,bool param_3)

{
  uint uVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  Inven_Item local_14;
  int local_10;
  
  Inven_Item_Expand_RedeemInfo::Inven_Item_Expand_RedeemInfo
            ((Inven_Item_Expand_RedeemInfo *)&local_50);
  local_50 = *(undefined4 *)param_1;
  local_4c = *(undefined4 *)(param_1 + 4);
  local_48 = *(undefined4 *)(param_1 + 8);
  local_44 = *(undefined4 *)(param_1 + 0xc);
  local_40 = *(undefined4 *)(param_1 + 0x10);
  local_3c = *(undefined4 *)(param_1 + 0x14);
  local_38 = *(undefined4 *)(param_1 + 0x18);
  local_34 = *(undefined4 *)(param_1 + 0x1c);
  local_30 = *(undefined4 *)(param_1 + 0x20);
  local_2c = *(undefined4 *)(param_1 + 0x24);
  local_28 = *(undefined4 *)(param_1 + 0x28);
  local_24 = *(undefined4 *)(param_1 + 0x2c);
  local_20 = *(undefined4 *)(param_1 + 0x30);
  local_1c = *(undefined4 *)(param_1 + 0x34);
  local_18 = *(undefined4 *)(param_1 + 0x38);
  local_14 = param_1[0x3c];
  if (param_3) {
    local_10 = param_2 + 1000;
  }
  else {
    local_10 = 1000;
  }
  charac_expand::CData::alter((CData *)this);
  uVar1 = std::
          list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
          ::size();
  if (0x14 < uVar1) {
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::pop_front((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
                 *)(this + 8));
  }
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::push_back((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
               *)(this + 8),(Inven_Item_Expand_RedeemInfo *)&local_50);
  return 1;
}
```
