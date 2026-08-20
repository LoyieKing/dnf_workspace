# SetCreatureItemAddInfo

`_ZN13user_creature12CCreatureMgr22SetCreatureItemAddInfoEii`

`user_creature::CCreatureMgr::SetCreatureItemAddInfo(int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833b620` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833b620  _ZN13user_creature12CCreatureMgr22SetCreatureItemAddInfoEii
#           user_creature::CCreatureMgr::SetCreatureItemAddInfo(int, int)
# range [0x0833b620, 0x0833b68b]
0833b620 +0x00:  push   %ebp
0833b621 +0x01:  mov    %esp,%ebp
0833b623 +0x03:  sub    $0x28,%esp
0833b626 +0x06:  movl   $0x0,-0xc(%ebp)
0833b62d +0x0d:  mov    0x8(%ebp),%eax
0833b630 +0x10:  mov    0x1c(%eax),%eax
0833b633 +0x13:  mov    %eax,(%esp)
0833b636 +0x16:  call   0819340a <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x72>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x72
0833b63b +0x1b:  mov    0xc(%ebp),%edx
0833b63e +0x1e:  mov    %edx,0x8(%esp)
0833b642 +0x22:  movl   $0x3,0x4(%esp)
0833b64a +0x2a:  mov    %eax,(%esp)
0833b64d +0x2d:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0833b652 +0x32:  mov    %eax,-0xc(%ebp)
0833b655 +0x35:  cmpl   $0x0,-0xc(%ebp)
0833b659 +0x39:  jne    0833b662 <+0x42>
0833b65b +0x3b:  mov    $0x0,%eax
0833b660 +0x40:  jmp    0833b68a <+0x6a>
0833b662 +0x42:  mov    -0xc(%ebp),%eax
0833b665 +0x45:  mov    0x2(%eax),%eax
0833b668 +0x48:  test   %eax,%eax
0833b66a +0x4a:  jne    0833b673 <+0x53>
0833b66c +0x4c:  mov    $0x0,%eax
0833b671 +0x51:  jmp    0833b68a <+0x6a>
0833b673 +0x53:  mov    0x10(%ebp),%eax
0833b676 +0x56:  mov    %eax,0x4(%esp)
0833b67a +0x5a:  mov    -0xc(%ebp),%eax
0833b67d +0x5d:  mov    %eax,(%esp)
0833b680 +0x60:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0833b685 +0x65:  mov    $0x1,%eax
0833b68a +0x6a:  leave
0833b68b +0x6b:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::SetCreatureItemAddInfo @ 0x833b620

/* user_creature::CCreatureMgr::SetCreatureItemAddInfo(int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::SetCreatureItemAddInfo(CCreatureMgr *this,int param_1,int param_2)

{
  CInventory *this_00;
  Inven_Item *this_01;
  undefined4 uVar1;
  
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefW(*(CUserCharacInfo **)(this + 0x1c))
  ;
  this_01 = (Inven_Item *)CInventory::GetInvenRef(this_00,3,param_1);
  if (this_01 == (Inven_Item *)0x0) {
    uVar1 = 0;
  }
  else if (*(int *)(this_01 + 2) == 0) {
    uVar1 = 0;
  }
  else {
    Inven_Item::set_add_info(this_01,param_2);
    uVar1 = 1;
  }
  return uVar1;
}
```
