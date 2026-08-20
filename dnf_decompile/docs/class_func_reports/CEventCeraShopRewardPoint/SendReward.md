# SendReward

`_ZN25CEventCeraShopRewardPoint10SendRewardEP5CUser`

`CEventCeraShopRewardPoint::SendReward(CUser*)`

| 类 | 地址 |
|---|---|
| `CEventCeraShopRewardPoint` | `0x0816471e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816471e  _ZN25CEventCeraShopRewardPoint10SendRewardEP5CUser
#           CEventCeraShopRewardPoint::SendReward(CUser*)
# range [0x0816471e, 0x0816484f]
0816471e +0x000:  push   %ebp
0816471f +0x001:  mov    %esp,%ebp
08164721 +0x003:  push   %esi
08164722 +0x004:  push   %ebx
08164723 +0x005:  sub    $0x190,%esp
08164729 +0x00b:  cmpl   $0x0,0xc(%ebp)
0816472d +0x00f:  je     08164845 <+0x127>
08164733 +0x015:  movl   $0x0,0xc(%esp)
0816473b +0x01d:  movl   $"tw_shop_open_title",0x8(%esp)
08164743 +0x025:  movl   $0x4,0x4(%esp)
0816474b +0x02d:  movl   $&g_scriptStringManager_,(%esp)
08164752 +0x034:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08164757 +0x039:  movl   $0x1d,0x8(%esp)
0816475f +0x041:  mov    %eax,0x4(%esp)
08164763 +0x045:  lea    -0x26(%ebp),%eax
08164766 +0x048:  mov    %eax,(%esp)
08164769 +0x04b:  call   0807d8d0 <_init+0x1c8>
0816476e +0x050:  movl   $0x0,0xc(%esp)
08164776 +0x058:  movl   $"tw_shop_open_content",0x8(%esp)
0816477e +0x060:  movl   $0x4,0x4(%esp)
08164786 +0x068:  movl   $&g_scriptStringManager_,(%esp)
0816478d +0x06f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08164792 +0x074:  movl   $0xff,0x8(%esp)
0816479a +0x07c:  mov    %eax,0x4(%esp)
0816479e +0x080:  lea    -0x163(%ebp),%eax
081647a4 +0x086:  mov    %eax,(%esp)
081647a7 +0x089:  call   0807d8d0 <_init+0x1c8>
081647ac +0x08e:  lea    -0x63(%ebp),%eax
081647af +0x091:  mov    %eax,(%esp)
081647b2 +0x094:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081647b7 +0x099:  movl   $0x28ec3d,-0x61(%ebp)
081647be +0x0a0:  mov    0x8(%ebp),%eax
081647c1 +0x0a3:  mov    0xc(%eax),%eax
081647c4 +0x0a6:  mov    %eax,-0x5c(%ebp)
081647c7 +0x0a9:  mov    0xc(%ebp),%eax
081647ca +0x0ac:  mov    %eax,(%esp)
081647cd +0x0af:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081647d2 +0x0b4:  mov    %eax,%ebx
081647d4 +0x0b6:  lea    -0x163(%ebp),%eax
081647da +0x0bc:  mov    %eax,(%esp)
081647dd +0x0bf:  call   0807e3b0 <_init+0xca8>
081647e2 +0x0c4:  mov    %eax,%esi
081647e4 +0x0c6:  movl   $0xffffffff,0x4(%esp)
081647ec +0x0ce:  mov    0xc(%ebp),%eax
081647ef +0x0d1:  mov    %eax,(%esp)
081647f2 +0x0d4:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081647f7 +0x0d9:  mov    %eax,%edx
081647f9 +0x0db:  mov    0x8(%ebp),%eax
081647fc +0x0de:  mov    0xc(%eax),%eax
081647ff +0x0e1:  movl   $0x0,0x24(%esp)
08164807 +0x0e9:  movl   $0x0,0x20(%esp)
0816480f +0x0f1:  mov    %ebx,0x1c(%esp)
08164813 +0x0f5:  movl   $0x0,0x18(%esp)
0816481b +0x0fd:  mov    %esi,0x14(%esp)
0816481f +0x101:  lea    -0x163(%ebp),%ecx
08164825 +0x107:  mov    %ecx,0x10(%esp)
08164829 +0x10b:  mov    %edx,0xc(%esp)
0816482d +0x10f:  mov    %eax,0x8(%esp)
08164831 +0x113:  lea    -0x63(%ebp),%eax
08164834 +0x116:  mov    %eax,0x4(%esp)
08164838 +0x11a:  lea    -0x26(%ebp),%eax
0816483b +0x11d:  mov    %eax,(%esp)
0816483e +0x120:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08164843 +0x125:  jmp    08164846 <+0x128>
08164845 +0x127:  nop
08164846 +0x128:  add    $0x190,%esp
0816484c +0x12e:  pop    %ebx
0816484d +0x12f:  pop    %esi
0816484e +0x130:  pop    %ebp
0816484f +0x131:  ret
```

## 反编译 C

```c
// CEventCeraShopRewardPoint::SendReward @ 0x816471e

/* CEventCeraShopRewardPoint::SendReward(CUser*) */

void __thiscall
CEventCeraShopRewardPoint::SendReward(CEventCeraShopRewardPoint *this,CUser *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 uVar4;
  char local_167 [256];
  Inven_Item local_67 [2];
  undefined4 local_65;
  undefined4 local_60;
  char local_2a [30];
  
  if (param_1 != (CUser *)0x0) {
    pcVar1 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "tw_shop_open_title",(bool *)0x0);
    strncpy(local_2a,pcVar1,0x1d);
    pcVar1 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "tw_shop_open_content",(bool *)0x0);
    strncpy(local_167,pcVar1,0xff);
    Inven_Item::Inven_Item(local_67);
    local_65 = 0x28ec3d;
    local_60 = *(undefined4 *)(this + 0xc);
    uVar2 = CUser::GetServerGroup(param_1);
    sVar3 = strlen(local_167);
    uVar4 = CUser::get_charac_no(param_1,-1);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_2a,local_67,*(undefined4 *)(this + 0xc),uVar4,local_167,sVar3,0,uVar2,0,0);
  }
  return;
}
```
