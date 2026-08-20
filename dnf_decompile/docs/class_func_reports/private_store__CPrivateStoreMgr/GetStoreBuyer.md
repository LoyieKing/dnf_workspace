# GetStoreBuyer

`_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUsert`

`private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, unsigned short)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085ca760` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ca760  _ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUsert
#           private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, unsigned short)
# range [0x085ca760, 0x085ca7b7]
085ca760 +0x00:  push   %ebp
085ca761 +0x01:  mov    %esp,%ebp
085ca763 +0x03:  push   %ebx
085ca764 +0x04:  sub    $0x34,%esp
085ca767 +0x07:  mov    0x14(%ebp),%eax
085ca76a +0x0a:  mov    %ax,-0x1c(%ebp)
085ca76e +0x0e:  movl   $0x0,-0xc(%ebp)
085ca775 +0x15:  movzwl -0x1c(%ebp),%ebx
085ca779 +0x19:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085ca77e +0x1e:  mov    %ebx,0x4(%esp)
085ca782 +0x22:  mov    %eax,(%esp)
085ca785 +0x25:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
085ca78a +0x2a:  mov    %eax,-0xc(%ebp)
085ca78d +0x2d:  cmpl   $0x0,-0xc(%ebp)
085ca791 +0x31:  mov    -0xc(%ebp),%eax
085ca794 +0x34:  mov    %eax,0xc(%esp)
085ca798 +0x38:  mov    0x10(%ebp),%eax
085ca79b +0x3b:  mov    %eax,0x8(%esp)
085ca79f +0x3f:  mov    0xc(%ebp),%eax
085ca7a2 +0x42:  mov    %eax,0x4(%esp)
085ca7a6 +0x46:  mov    0x8(%ebp),%eax
085ca7a9 +0x49:  mov    %eax,(%esp)
085ca7ac +0x4c:  call   085ca7b8 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_>  ; private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, CUser*)
085ca7b1 +0x51:  add    $0x34,%esp
085ca7b4 +0x54:  pop    %ebx
085ca7b5 +0x55:  pop    %ebp
085ca7b6 +0x56:  ret
085ca7b7 +0x57:  nop
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::GetStoreBuyer @ 0x85ca760

/* private_store::CPrivateStoreMgr::GetStoreBuyer(private_store::IBuyer**, CUser*, unsigned short)
    */

void __thiscall
private_store::CPrivateStoreMgr::GetStoreBuyer
          (CPrivateStoreMgr *this,IBuyer **param_1,CUser *param_2,ushort param_3)

{
  GameWorld *this_00;
  CUser *pCVar1;
  
  this_00 = (GameWorld *)G_GameWorld();
  pCVar1 = (CUser *)GameWorld::find_from_world(this_00,param_3);
  GetStoreBuyer(this,param_1,param_2,pCVar1);
  return;
}
```
