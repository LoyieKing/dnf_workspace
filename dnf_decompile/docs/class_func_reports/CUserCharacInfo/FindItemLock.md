# FindItemLock

`_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser`

`CUserCharacInfo::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&, CUser*) const`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08680e04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08680e04  _ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser
#           CUserCharacInfo::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&, CUser*) const
# range [0x08680e04, 0x08680f2d]
08680e04 +0x000:  push   %ebp
08680e05 +0x001:  mov    %esp,%ebp
08680e07 +0x003:  push   %ebx
08680e08 +0x004:  sub    $0x34,%esp
08680e0b +0x007:  mov    0xc(%ebp),%eax
08680e0e +0x00a:  mov    %al,-0x1c(%ebp)
08680e11 +0x00d:  cmpl   $0x0,0x18(%ebp)
08680e15 +0x011:  jne    08680e21 <+0x1d>
08680e17 +0x013:  mov    $0x0,%eax
08680e1c +0x018:  jmp    08680f28 <+0x124>
08680e21 +0x01d:  mov    0x8(%ebp),%eax
08680e24 +0x020:  mov    0x10(%eax),%eax
08680e27 +0x023:  test   %eax,%eax
08680e29 +0x025:  jne    08680e35 <+0x31>
08680e2b +0x027:  mov    $0x0,%eax
08680e30 +0x02c:  jmp    08680f28 <+0x124>
08680e35 +0x031:  movzbl -0x1c(%ebp),%eax
08680e39 +0x035:  mov    0x8(%ebp),%edx
08680e3c +0x038:  mov    0x10(%edx),%edx
08680e3f +0x03b:  lea    0xdaa(%edx),%ecx
08680e45 +0x041:  mov    0x14(%ebp),%edx
08680e48 +0x044:  mov    %edx,0xc(%esp)
08680e4c +0x048:  mov    0x10(%ebp),%edx
08680e4f +0x04b:  mov    %edx,0x8(%esp)
08680e53 +0x04f:  mov    %eax,0x4(%esp)
08680e57 +0x053:  mov    %ecx,(%esp)
08680e5a +0x056:  call   0850c836 <_ZNK6CCargo12FindItemLockEhR14ENUM_ITEMSPACERi>  ; CCargo::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const
08680e5f +0x05b:  test   %al,%al
08680e61 +0x05d:  je     08680e6d <+0x69>
08680e63 +0x05f:  mov    $0x1,%eax
08680e68 +0x064:  jmp    08680f28 <+0x124>
08680e6d +0x069:  movzbl -0x1c(%ebp),%eax
08680e71 +0x06d:  mov    0x8(%ebp),%edx
08680e74 +0x070:  mov    0x10(%edx),%edx
08680e77 +0x073:  lea    0xda(%edx),%ecx
08680e7d +0x079:  mov    0x14(%ebp),%edx
08680e80 +0x07c:  mov    %edx,0xc(%esp)
08680e84 +0x080:  mov    0x10(%ebp),%edx
08680e87 +0x083:  mov    %edx,0x8(%esp)
08680e8b +0x087:  mov    %eax,0x4(%esp)
08680e8f +0x08b:  mov    %ecx,(%esp)
08680e92 +0x08e:  call   084fac70 <_ZNK10CInventory12FindItemLockEhR14ENUM_ITEMSPACERi>  ; CInventory::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const
08680e97 +0x093:  test   %al,%al
08680e99 +0x095:  je     08680ea5 <+0xa1>
08680e9b +0x097:  mov    $0x1,%eax
08680ea0 +0x09c:  jmp    08680f28 <+0x124>
08680ea5 +0x0a1:  movl   $0x9,0x4(%esp)
08680ead +0x0a9:  mov    0x18(%ebp),%eax
08680eb0 +0x0ac:  mov    %eax,(%esp)
08680eb3 +0x0af:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08680eb8 +0x0b4:  mov    %eax,-0xc(%ebp)
08680ebb +0x0b7:  movzbl -0x1c(%ebp),%eax
08680ebf +0x0bb:  mov    0x14(%ebp),%edx
08680ec2 +0x0be:  mov    %edx,0xc(%esp)
08680ec6 +0x0c2:  mov    0x10(%ebp),%edx
08680ec9 +0x0c5:  mov    %edx,0x8(%esp)
08680ecd +0x0c9:  mov    %eax,0x4(%esp)
08680ed1 +0x0cd:  mov    -0xc(%ebp),%eax
08680ed4 +0x0d0:  mov    %eax,(%esp)
08680ed7 +0x0d3:  call   08499f0a <_ZNK16CExpandEquipslot12FindItemLockEhR14ENUM_ITEMSPACERi>  ; CExpandEquipslot::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const
08680edc +0x0d8:  test   %al,%al
08680ede +0x0da:  je     08680ee7 <+0xe3>
08680ee0 +0x0dc:  mov    $0x1,%eax
08680ee5 +0x0e1:  jmp    08680f28 <+0x124>
08680ee7 +0x0e3:  movzbl -0x1c(%ebp),%ebx
08680eeb +0x0e7:  movl   $0xe,0x4(%esp)
08680ef3 +0x0ef:  mov    0x18(%ebp),%eax
08680ef6 +0x0f2:  mov    %eax,(%esp)
08680ef9 +0x0f5:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08680efe +0x0fa:  mov    0x14(%ebp),%edx
08680f01 +0x0fd:  mov    %edx,0xc(%esp)
08680f05 +0x101:  mov    0x10(%ebp),%edx
08680f08 +0x104:  mov    %edx,0x8(%esp)
08680f0c +0x108:  mov    %ebx,0x4(%esp)
08680f10 +0x10c:  mov    %eax,(%esp)
08680f13 +0x10f:  call   08641124 <_ZNK10CTitleBook12findItemLockEhR14ENUM_ITEMSPACERi>  ; CTitleBook::findItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const
08680f18 +0x114:  test   %al,%al
08680f1a +0x116:  je     08680f23 <+0x11f>
08680f1c +0x118:  mov    $0x1,%eax
08680f21 +0x11d:  jmp    08680f28 <+0x124>
08680f23 +0x11f:  mov    $0x0,%eax
08680f28 +0x124:  add    $0x34,%esp
08680f2b +0x127:  pop    %ebx
08680f2c +0x128:  pop    %ebp
08680f2d +0x129:  ret
```

## 反编译 C

```c
// CUserCharacInfo::FindItemLock @ 0x8680e04

/* CUserCharacInfo::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&, CUser*) const */

undefined4 __thiscall
CUserCharacInfo::FindItemLock
          (CUserCharacInfo *this,uchar param_1,ENUM_ITEMSPACE *param_2,int *param_3,CUser *param_4)

{
  char cVar1;
  undefined4 uVar2;
  CExpandEquipslot *this_00;
  CTitleBook *this_01;
  
  if (param_4 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else if (*(int *)(this + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CCargo::FindItemLock((CCargo *)(*(int *)(this + 0x10) + 0xdaa),param_1,param_2,param_3);
    if (cVar1 == '\0') {
      cVar1 = CInventory::FindItemLock
                        ((CInventory *)(*(int *)(this + 0x10) + 0xda),param_1,param_2,param_3);
      if (cVar1 == '\0') {
        this_00 = (CExpandEquipslot *)CUser::GetCharacExpandData(param_4,9);
        cVar1 = CExpandEquipslot::FindItemLock(this_00,param_1,param_2,param_3);
        if (cVar1 == '\0') {
          this_01 = (CTitleBook *)CUser::GetCharacExpandData(param_4,0xe);
          cVar1 = CTitleBook::findItemLock(this_01,param_1,param_2,param_3);
          if (cVar1 == '\0') {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
