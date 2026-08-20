# _CheckConditionPutonAvatar

`_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser`

`WongWork::CCeraShop::_CheckConditionPutonAvatar(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08324966` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08324966  _ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser
#           WongWork::CCeraShop::_CheckConditionPutonAvatar(CUser*)
# range [0x08324966, 0x08324a1d]
08324966 +0x00:  push   %ebp
08324967 +0x01:  mov    %esp,%ebp
08324969 +0x03:  sub    $0x28,%esp
0832496c +0x06:  movl   $0x0,-0x18(%ebp)
08324973 +0x0d:  jmp    083249b6 <+0x50>
08324975 +0x0f:  mov    0xc(%ebp),%eax
08324978 +0x12:  mov    %eax,(%esp)
0832497b +0x15:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08324980 +0x1a:  mov    -0x18(%ebp),%edx
08324983 +0x1d:  mov    %edx,0x8(%esp)
08324987 +0x21:  movl   $0x0,0x4(%esp)
0832498f +0x29:  mov    %eax,(%esp)
08324992 +0x2c:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08324997 +0x31:  mov    %eax,-0x14(%ebp)
0832499a +0x34:  cmpl   $0x0,-0x14(%ebp)
0832499e +0x38:  je     083249b1 <+0x4b>
083249a0 +0x3a:  mov    -0x14(%ebp),%eax
083249a3 +0x3d:  mov    0x2(%eax),%eax
083249a6 +0x40:  test   %eax,%eax
083249a8 +0x42:  je     083249b2 <+0x4c>
083249aa +0x44:  mov    $0x1,%eax
083249af +0x49:  jmp    08324a1b <+0xb5>
083249b1 +0x4b:  nop
083249b2 +0x4c:  addl   $0x1,-0x18(%ebp)
083249b6 +0x50:  cmpl   $0x9,-0x18(%ebp)
083249ba +0x54:  setle  %al
083249bd +0x57:  test   %al,%al
083249bf +0x59:  jne    08324975 <+0xf>
083249c1 +0x5b:  movl   $0x0,-0x10(%ebp)
083249c8 +0x62:  jmp    08324a0b <+0xa5>
083249ca +0x64:  mov    0xc(%ebp),%eax
083249cd +0x67:  mov    %eax,(%esp)
083249d0 +0x6a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
083249d5 +0x6f:  mov    -0x10(%ebp),%edx
083249d8 +0x72:  mov    %edx,0x8(%esp)
083249dc +0x76:  movl   $0x2,0x4(%esp)
083249e4 +0x7e:  mov    %eax,(%esp)
083249e7 +0x81:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
083249ec +0x86:  mov    %eax,-0xc(%ebp)
083249ef +0x89:  cmpl   $0x0,-0xc(%ebp)
083249f3 +0x8d:  je     08324a06 <+0xa0>
083249f5 +0x8f:  mov    -0xc(%ebp),%eax
083249f8 +0x92:  mov    0x2(%eax),%eax
083249fb +0x95:  test   %eax,%eax
083249fd +0x97:  je     08324a07 <+0xa1>
083249ff +0x99:  mov    $0x1,%eax
08324a04 +0x9e:  jmp    08324a1b <+0xb5>
08324a06 +0xa0:  nop
08324a07 +0xa1:  addl   $0x1,-0x10(%ebp)
08324a0b +0xa5:  cmpl   $0x68,-0x10(%ebp)
08324a0f +0xa9:  setle  %al
08324a12 +0xac:  test   %al,%al
08324a14 +0xae:  jne    083249ca <+0x64>
08324a16 +0xb0:  mov    $0x0,%eax
08324a1b +0xb5:  leave
08324a1c +0xb6:  ret
08324a1d +0xb7:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::_CheckConditionPutonAvatar @ 0x8324966

/* WongWork::CCeraShop::_CheckConditionPutonAvatar(CUser*) */

undefined4 __thiscall
WongWork::CCeraShop::_CheckConditionPutonAvatar(CCeraShop *this,CUser *param_1)

{
  CInventory *pCVar1;
  int iVar2;
  int local_1c;
  int local_14;
  
  local_1c = 0;
  while( true ) {
    if (9 < local_1c) {
      local_14 = 0;
      while( true ) {
        if (0x68 < local_14) {
          return 0;
        }
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar2 = CInventory::GetInvenRef(pCVar1,2,local_14);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 2) != 0)) break;
        local_14 = local_14 + 1;
      }
      return 1;
    }
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar2 = CInventory::GetInvenRef(pCVar1,0,local_1c);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 2) != 0)) break;
    local_1c = local_1c + 1;
  }
  return 1;
}
```
