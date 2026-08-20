# Add_RedeemInfo

`_ZN5CUser14Add_RedeemInfoERK10Inven_Itemib`

`CUser::Add_RedeemInfo(Inven_Item const&, int, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086472c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086472c0  _ZN5CUser14Add_RedeemInfoERK10Inven_Itemib
#           CUser::Add_RedeemInfo(Inven_Item const&, int, bool)
# range [0x086472c0, 0x08647399]
086472c0 +0x00:  push   %ebp
086472c1 +0x01:  mov    %esp,%ebp
086472c3 +0x03:  push   %ebx
086472c4 +0x04:  sub    $0x34,%esp
086472c7 +0x07:  mov    0x14(%ebp),%eax
086472ca +0x0a:  mov    %al,-0x1c(%ebp)
086472cd +0x0d:  movl   $0x6,0x4(%esp)
086472d5 +0x15:  mov    0x8(%ebp),%eax
086472d8 +0x18:  mov    %eax,(%esp)
086472db +0x1b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086472e0 +0x20:  mov    %eax,-0xc(%ebp)
086472e3 +0x23:  mov    0xc(%ebp),%eax
086472e6 +0x26:  mov    %eax,0x4(%esp)
086472ea +0x2a:  mov    -0xc(%ebp),%eax
086472ed +0x2d:  mov    %eax,(%esp)
086472f0 +0x30:  call   085f76f0 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item>  ; Redeem_Item::CRedeemItem::isAddableFilter(Inven_Item const&)
086472f5 +0x35:  test   %al,%al
086472f7 +0x37:  je     0864738f <+0xcf>
086472fd +0x3d:  mov    0xc(%ebp),%eax
08647300 +0x40:  mov    0x2(%eax),%eax
08647303 +0x43:  mov    %eax,%ebx
08647305 +0x45:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864730a +0x4a:  mov    %ebx,0x4(%esp)
0864730e +0x4e:  mov    %eax,(%esp)
08647311 +0x51:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08647316 +0x56:  mov    %eax,(%esp)
08647319 +0x59:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0864731e +0x5e:  test   %al,%al
08647320 +0x60:  je     08647349 <+0x89>
08647322 +0x62:  mov    0xc(%ebp),%eax
08647325 +0x65:  mov    0x7(%eax),%edx
08647328 +0x68:  mov    0xc(%ebp),%eax
0864732b +0x6b:  mov    0x2(%eax),%eax
0864732e +0x6e:  mov    0x8(%ebp),%ecx
08647331 +0x71:  add    $0x79700,%ecx
08647337 +0x77:  mov    %edx,0x8(%esp)
0864733b +0x7b:  mov    %eax,0x4(%esp)
0864733f +0x7f:  mov    %ecx,(%esp)
08647342 +0x82:  call   08686990 <_ZN15cUserHistoryLog13RedeemItemAddEii>  ; cUserHistoryLog::RedeemItemAdd(int, int)
08647347 +0x87:  jmp    0864736c <+0xac>
08647349 +0x89:  mov    0xc(%ebp),%eax
0864734c +0x8c:  mov    0x2(%eax),%eax
0864734f +0x8f:  mov    0x8(%ebp),%edx
08647352 +0x92:  add    $0x79700,%edx
08647358 +0x98:  movl   $0x1,0x8(%esp)
08647360 +0xa0:  mov    %eax,0x4(%esp)
08647364 +0xa4:  mov    %edx,(%esp)
08647367 +0xa7:  call   08686990 <_ZN15cUserHistoryLog13RedeemItemAddEii>  ; cUserHistoryLog::RedeemItemAdd(int, int)
0864736c +0xac:  movzbl -0x1c(%ebp),%eax
08647370 +0xb0:  mov    %eax,0xc(%esp)
08647374 +0xb4:  mov    0x10(%ebp),%eax
08647377 +0xb7:  mov    %eax,0x8(%esp)
0864737b +0xbb:  mov    0xc(%ebp),%eax
0864737e +0xbe:  mov    %eax,0x4(%esp)
08647382 +0xc2:  mov    -0xc(%ebp),%eax
08647385 +0xc5:  mov    %eax,(%esp)
08647388 +0xc8:  call   085f71a8 <_ZN11Redeem_Item11CRedeemItem13AddRedeemListERK10Inven_Itemib>  ; Redeem_Item::CRedeemItem::AddRedeemList(Inven_Item const&, int, bool)
0864738d +0xcd:  jmp    08647394 <+0xd4>
0864738f +0xcf:  mov    $0x0,%eax
08647394 +0xd4:  add    $0x34,%esp
08647397 +0xd7:  pop    %ebx
08647398 +0xd8:  pop    %ebp
08647399 +0xd9:  ret
```

## 反编译 C

```c
// CUser::Add_RedeemInfo @ 0x86472c0

/* CUser::Add_RedeemInfo(Inven_Item const&, int, bool) */

undefined4 __thiscall
CUser::Add_RedeemInfo(CUser *this,Inven_Item *param_1,int param_2,bool param_3)

{
  int iVar1;
  char cVar2;
  CRedeemItem *this_00;
  CDataManager *this_01;
  CItem *this_02;
  undefined4 uVar3;
  
  this_00 = (CRedeemItem *)GetCharacExpandData(this,6);
  cVar2 = ::Redeem_Item::CRedeemItem::isAddableFilter(this_00,param_1);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 2);
    this_01 = (CDataManager *)G_CDataManager();
    this_02 = (CItem *)CDataManager::find_item(this_01,iVar1);
    cVar2 = CItem::is_stackable(this_02);
    if (cVar2 == '\0') {
      cUserHistoryLog::RedeemItemAdd((cUserHistoryLog *)(this + 0x79700),*(int *)(param_1 + 2),1);
    }
    else {
      cUserHistoryLog::RedeemItemAdd
                ((cUserHistoryLog *)(this + 0x79700),*(int *)(param_1 + 2),*(int *)(param_1 + 7));
    }
    uVar3 = ::Redeem_Item::CRedeemItem::AddRedeemList(this_00,param_1,param_2,param_3);
  }
  return uVar3;
}
```
