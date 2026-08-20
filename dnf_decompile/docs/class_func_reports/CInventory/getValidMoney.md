# getValidMoney

`_ZN10CInventory13getValidMoneyEi`

`CInventory::getValidMoney(int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850cdd8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850cdd8  _ZN10CInventory13getValidMoneyEi
#           CInventory::getValidMoney(int)
# range [0x0850cdd8, 0x0850ce3f]
0850cdd8 +0x00:  push   %ebp
0850cdd9 +0x01:  mov    %esp,%ebp
0850cddb +0x03:  push   %esi
0850cddc +0x04:  push   %ebx
0850cddd +0x05:  sub    $0x20,%esp
0850cde0 +0x08:  movl   $0x7fffffff,-0xc(%ebp)
0850cde7 +0x0f:  mov    0x8(%ebp),%eax
0850cdea +0x12:  mov    (%eax),%eax
0850cdec +0x14:  mov    %eax,(%esp)
0850cdef +0x17:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
0850cdf4 +0x1c:  mov    %eax,%ebx
0850cdf6 +0x1e:  mov    0x8(%ebp),%eax
0850cdf9 +0x21:  mov    (%eax),%eax
0850cdfb +0x23:  mov    %eax,(%esp)
0850cdfe +0x26:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0850ce03 +0x2b:  lea    -0x1(%eax),%esi
0850ce06 +0x2e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850ce0b +0x33:  mov    %ebx,0x8(%esp)
0850ce0f +0x37:  mov    %esi,0x4(%esp)
0850ce13 +0x3b:  mov    %eax,(%esp)
0850ce16 +0x3e:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
0850ce1b +0x43:  mov    %eax,-0xc(%ebp)
0850ce1e +0x46:  mov    0x8(%ebp),%eax
0850ce21 +0x49:  mov    0x4(%eax),%eax
0850ce24 +0x4c:  add    0xc(%ebp),%eax
0850ce27 +0x4f:  cmp    -0xc(%ebp),%eax
0850ce2a +0x52:  jle    0850ce33 <+0x5b>
0850ce2c +0x54:  mov    $0x1,%eax
0850ce31 +0x59:  jmp    0850ce38 <+0x60>
0850ce33 +0x5b:  mov    $0x0,%eax
0850ce38 +0x60:  add    $0x20,%esp
0850ce3b +0x63:  pop    %ebx
0850ce3c +0x64:  pop    %esi
0850ce3d +0x65:  pop    %ebp
0850ce3e +0x66:  ret
0850ce3f +0x67:  nop
```

## 反编译 C

```c
// CInventory::getValidMoney @ 0x850cdd8

/* CInventory::getValidMoney(int) */

bool __thiscall CInventory::getValidMoney(CInventory *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  CDataManager *this_00;
  
  pcVar1 = (char *)CUser::get_acc_name(*(CUser **)this);
  iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
  this_00 = (CDataManager *)G_CDataManager();
  iVar2 = CDataManager::GetMoneyLimitPerLevel(this_00,iVar2 + -1,pcVar1);
  return iVar2 < *(int *)(this + 4) + param_1;
}
```
