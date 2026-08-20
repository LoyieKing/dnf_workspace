# CheckUserCondition

`_ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi`

`CSharedServerMessageManager::CheckUserCondition(CUser*, int, int&)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x08600dcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08600dcc  _ZN27CSharedServerMessageManager18CheckUserConditionEP5CUseriRi
#           CSharedServerMessageManager::CheckUserCondition(CUser*, int, int&)
# range [0x08600dcc, 0x08600ebf]
08600dcc +0x00:  push   %ebp
08600dcd +0x01:  mov    %esp,%ebp
08600dcf +0x03:  sub    $0x28,%esp
08600dd2 +0x06:  mov    0x8(%ebp),%eax
08600dd5 +0x09:  mov    0x10(%ebp),%edx
08600dd8 +0x0c:  mov    %edx,0x4(%esp)
08600ddc +0x10:  mov    %eax,(%esp)
08600ddf +0x13:  call   08601640 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi>  ; CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID(int)
08600de4 +0x18:  mov    %eax,-0x10(%ebp)
08600de7 +0x1b:  cmpl   $0xffffffff,-0x10(%ebp)
08600deb +0x1f:  jne    08600df7 <+0x2b>
08600ded +0x21:  mov    $0x0,%eax
08600df2 +0x26:  jmp    08600ebd <+0xf1>
08600df7 +0x2b:  movl   $0x0,-0xc(%ebp)
08600dfe +0x32:  mov    -0x10(%ebp),%eax
08600e01 +0x35:  cmp    $0x1,%eax
08600e04 +0x38:  je     08600eae <+0xe2>
08600e0a +0x3e:  cmp    $0x1,%eax
08600e0d +0x41:  jg     08600e18 <+0x4c>
08600e0f +0x43:  test   %eax,%eax
08600e11 +0x45:  je     08600e51 <+0x85>
08600e13 +0x47:  jmp    08600ea7 <+0xdb>
08600e18 +0x4c:  cmp    $0x2,%eax
08600e1b +0x4f:  je     08600e7c <+0xb0>
08600e1d +0x51:  cmp    $0x3,%eax
08600e20 +0x54:  jne    08600ea7 <+0xdb>
08600e26 +0x5a:  mov    0xc(%ebp),%eax
08600e29 +0x5d:  mov    %eax,(%esp)
08600e2c +0x60:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08600e31 +0x65:  movl   $0x28d3aa,0x4(%esp)
08600e39 +0x6d:  mov    %eax,(%esp)
08600e3c +0x70:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
08600e41 +0x75:  mov    %eax,-0xc(%ebp)
08600e44 +0x78:  cmpl   $0xffffffff,-0xc(%ebp)
08600e48 +0x7c:  jne    08600eb1 <+0xe5>
08600e4a +0x7e:  mov    $0x0,%eax
08600e4f +0x83:  jmp    08600ebd <+0xf1>
08600e51 +0x85:  mov    0xc(%ebp),%eax
08600e54 +0x88:  mov    %eax,(%esp)
08600e57 +0x8b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08600e5c +0x90:  movl   $0x28d3aa,0x4(%esp)
08600e64 +0x98:  mov    %eax,(%esp)
08600e67 +0x9b:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
08600e6c +0xa0:  mov    %eax,-0xc(%ebp)
08600e6f +0xa3:  cmpl   $0xffffffff,-0xc(%ebp)
08600e73 +0xa7:  jne    08600eb4 <+0xe8>
08600e75 +0xa9:  mov    $0x0,%eax
08600e7a +0xae:  jmp    08600ebd <+0xf1>
08600e7c +0xb0:  mov    0xc(%ebp),%eax
08600e7f +0xb3:  mov    %eax,(%esp)
08600e82 +0xb6:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08600e87 +0xbb:  movl   $0x1d9d,0x4(%esp)
08600e8f +0xc3:  mov    %eax,(%esp)
08600e92 +0xc6:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
08600e97 +0xcb:  mov    %eax,-0xc(%ebp)
08600e9a +0xce:  cmpl   $0xffffffff,-0xc(%ebp)
08600e9e +0xd2:  jne    08600eb7 <+0xeb>
08600ea0 +0xd4:  mov    $0x0,%eax
08600ea5 +0xd9:  jmp    08600ebd <+0xf1>
08600ea7 +0xdb:  mov    $0x0,%eax
08600eac +0xe0:  jmp    08600ebd <+0xf1>
08600eae +0xe2:  nop
08600eaf +0xe3:  jmp    08600eb8 <+0xec>
08600eb1 +0xe5:  nop
08600eb2 +0xe6:  jmp    08600eb8 <+0xec>
08600eb4 +0xe8:  nop
08600eb5 +0xe9:  jmp    08600eb8 <+0xec>
08600eb7 +0xeb:  nop
08600eb8 +0xec:  mov    $0x1,%eax
08600ebd +0xf1:  leave
08600ebe +0xf2:  ret
08600ebf +0xf3:  nop
```

## 反编译 C

```c
// CSharedServerMessageManager::CheckUserCondition @ 0x8600dcc

/* CSharedServerMessageManager::CheckUserCondition(CUser*, int, int&) */

undefined4 CSharedServerMessageManager::CheckUserCondition(CUser *param_1,int param_2,int *param_3)

{
  int iVar1;
  CInventory *pCVar2;
  
  iVar1 = CSharedServerMessageAdapter::GetMappedEventID
                    ((CSharedServerMessageAdapter *)param_1,(int)param_3);
  if (iVar1 == -1) {
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        return 0;
      }
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar1 = CInventory::check_item_exist(pCVar2,0x28d3aa);
      if (iVar1 == -1) {
        return 0;
      }
    }
    else if (iVar1 == 2) {
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar1 = CInventory::check_item_exist(pCVar2,0x1d9d);
      if (iVar1 == -1) {
        return 0;
      }
    }
    else {
      if (iVar1 != 3) {
        return 0;
      }
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar1 = CInventory::check_item_exist(pCVar2,0x28d3aa);
      if (iVar1 == -1) {
        return 0;
      }
    }
  }
  return 1;
}
```
