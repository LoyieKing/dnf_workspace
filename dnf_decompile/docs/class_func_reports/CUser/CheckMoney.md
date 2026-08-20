# CheckMoney

`_ZN5CUser10CheckMoneyEi`

`CUser::CheckMoney(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866af1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866af1c  _ZN5CUser10CheckMoneyEi
#           CUser::CheckMoney(int)
# range [0x0866af1c, 0x0866af85]
0866af1c +0x00:  push   %ebp
0866af1d +0x01:  mov    %esp,%ebp
0866af1f +0x03:  push   %esi
0866af20 +0x04:  push   %ebx
0866af21 +0x05:  sub    $0x20,%esp
0866af24 +0x08:  mov    0x8(%ebp),%eax
0866af27 +0x0b:  mov    %eax,(%esp)
0866af2a +0x0e:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
0866af2f +0x13:  mov    %eax,%esi
0866af31 +0x15:  mov    0x8(%ebp),%eax
0866af34 +0x18:  mov    %eax,(%esp)
0866af37 +0x1b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866af3c +0x20:  mov    %eax,%ebx
0866af3e +0x22:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866af43 +0x27:  mov    %esi,0x8(%esp)
0866af47 +0x2b:  mov    %ebx,0x4(%esp)
0866af4b +0x2f:  mov    %eax,(%esp)
0866af4e +0x32:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
0866af53 +0x37:  mov    %eax,-0x10(%ebp)
0866af56 +0x3a:  mov    0x8(%ebp),%eax
0866af59 +0x3d:  mov    %eax,(%esp)
0866af5c +0x40:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
0866af61 +0x45:  mov    %eax,-0xc(%ebp)
0866af64 +0x48:  mov    0xc(%ebp),%eax
0866af67 +0x4b:  mov    -0xc(%ebp),%edx
0866af6a +0x4e:  lea    (%edx,%eax,1),%eax
0866af6d +0x51:  cmp    -0x10(%ebp),%eax
0866af70 +0x54:  jg     0866af79 <+0x5d>
0866af72 +0x56:  mov    $0x1,%eax
0866af77 +0x5b:  jmp    0866af7e <+0x62>
0866af79 +0x5d:  mov    $0x0,%eax
0866af7e +0x62:  add    $0x20,%esp
0866af81 +0x65:  pop    %ebx
0866af82 +0x66:  pop    %esi
0866af83 +0x67:  pop    %ebp
0866af84 +0x68:  ret
0866af85 +0x69:  nop
```

## 反编译 C

```c
// CUser::CheckMoney @ 0x866af1c

/* CUser::CheckMoney(int) */

bool __thiscall CUser::CheckMoney(CUser *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  CDataManager *this_00;
  int iVar3;
  
  pcVar1 = (char *)get_acc_name(this);
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  this_00 = (CDataManager *)G_CDataManager();
  iVar2 = CDataManager::GetMoneyLimitPerLevel(this_00,iVar2,pcVar1);
  iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)this);
  return iVar3 + param_1 <= iVar2;
}
```
