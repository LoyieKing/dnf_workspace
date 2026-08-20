# GiveBonusItem

`_ZN4ARAD26CeraShopPurcahseCountBonus13GiveBonusItemEP5CUsermit`

`ARAD::CeraShopPurcahseCountBonus::GiveBonusItem(CUser*, unsigned long, int, unsigned short)`

| 类 | 地址 |
|---|---|
| `ARAD::CeraShopPurcahseCountBonus` | `0x081abf44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081abf44  _ZN4ARAD26CeraShopPurcahseCountBonus13GiveBonusItemEP5CUsermit
#           ARAD::CeraShopPurcahseCountBonus::GiveBonusItem(CUser*, unsigned long, int, unsigned short)
# range [0x081abf44, 0x081abfef]
081abf44 +0x00:  push   %ebp
081abf45 +0x01:  mov    %esp,%ebp
081abf47 +0x03:  push   %ebx
081abf48 +0x04:  sub    $0x34,%esp
081abf4b +0x07:  mov    0x18(%ebp),%eax
081abf4e +0x0a:  mov    %ax,-0x1c(%ebp)
081abf52 +0x0e:  mov    0x14(%ebp),%eax
081abf55 +0x11:  mov    %eax,0x4(%esp)
081abf59 +0x15:  mov    0x8(%ebp),%eax
081abf5c +0x18:  mov    %eax,(%esp)
081abf5f +0x1b:  call   081abff0 <_ZN4ARAD26CeraShopPurcahseCountBonus14CheckBonusItemEi>  ; ARAD::CeraShopPurcahseCountBonus::CheckBonusItem(int)
081abf64 +0x20:  xor    $0x1,%eax
081abf67 +0x23:  test   %al,%al
081abf69 +0x25:  jne    081abfe7 <+0xa3>
081abf6b +0x27:  lea    -0x14(%ebp),%eax
081abf6e +0x2a:  mov    %eax,(%esp)
081abf71 +0x2d:  call   081ac710 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x1c>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x1c
081abf76 +0x32:  mov    0x8(%ebp),%edx
081abf79 +0x35:  lea    -0x18(%ebp),%eax
081abf7c +0x38:  lea    0x14(%ebp),%ecx
081abf7f +0x3b:  mov    %ecx,0x8(%esp)
081abf83 +0x3f:  mov    %edx,0x4(%esp)
081abf87 +0x43:  mov    %eax,(%esp)
081abf8a +0x46:  call   081ac748 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x54>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x54
081abf8f +0x4b:  sub    $0x4,%esp
081abf92 +0x4e:  movzwl -0x1c(%ebp),%ebx
081abf96 +0x52:  lea    -0x18(%ebp),%eax
081abf99 +0x55:  mov    %eax,(%esp)
081abf9c +0x58:  call   081ac774 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x80>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x80
081abfa1 +0x5d:  lea    0x4(%eax),%edx
081abfa4 +0x60:  mov    %ebx,0xc(%esp)
081abfa8 +0x64:  lea    -0x14(%ebp),%eax
081abfab +0x67:  mov    %eax,0x8(%esp)
081abfaf +0x6b:  mov    %edx,0x4(%esp)
081abfb3 +0x6f:  mov    0x8(%ebp),%eax
081abfb6 +0x72:  mov    %eax,(%esp)
081abfb9 +0x75:  call   081ac04c <_ZN4ARAD26CeraShopPurcahseCountBonus14_findBonusItemERKSt6vectorINS_13PurcahseBonusESaIS2_EERS2_t>  ; ARAD::CeraShopPurcahseCountBonus::_findBonusItem(std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > const&, ARAD::PurcahseBonus&, unsigned short)
081abfbe +0x7a:  xor    $0x1,%eax
081abfc1 +0x7d:  test   %al,%al
081abfc3 +0x7f:  jne    081abfea <+0xa6>
081abfc5 +0x81:  mov    0x14(%ebp),%eax
081abfc8 +0x84:  lea    -0x14(%ebp),%edx
081abfcb +0x87:  mov    %edx,0xc(%esp)
081abfcf +0x8b:  mov    %eax,0x8(%esp)
081abfd3 +0x8f:  mov    0xc(%ebp),%eax
081abfd6 +0x92:  mov    %eax,0x4(%esp)
081abfda +0x96:  mov    0x8(%ebp),%eax
081abfdd +0x99:  mov    %eax,(%esp)
081abfe0 +0x9c:  call   081ac13e <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE>  ; ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, ARAD::PurcahseBonus const&)
081abfe5 +0xa1:  jmp    081abfeb <+0xa7>
081abfe7 +0xa3:  nop
081abfe8 +0xa4:  jmp    081abfeb <+0xa7>
081abfea +0xa6:  nop
081abfeb +0xa7:  mov    -0x4(%ebp),%ebx
081abfee +0xaa:  leave
081abfef +0xab:  ret
```

## 反编译 C

```c
// ARAD::CeraShopPurcahseCountBonus::GiveBonusItem @ 0x81abf44

/* ARAD::CeraShopPurcahseCountBonus::GiveBonusItem(CUser*, unsigned long, int, unsigned short) */

void __thiscall
ARAD::CeraShopPurcahseCountBonus::GiveBonusItem
          (CeraShopPurcahseCountBonus *this,CUser *param_1,ulong param_2,int param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
  local_1c [4];
  PurcahseBonus local_18 [16];
  
  cVar1 = CheckBonusItem((int)this);
  if (cVar1 == '\x01') {
    PurcahseBonus::PurcahseBonus(local_18);
    std::
    map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
    ::find((int *)local_1c);
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
            ::operator->(local_1c);
    cVar1 = _findBonusItem(this,(vector *)(iVar2 + 4),local_18,param_4);
    if (cVar1 == '\x01') {
      _processBonusItem(this,param_1,param_3,local_18);
    }
  }
  return;
}
```
