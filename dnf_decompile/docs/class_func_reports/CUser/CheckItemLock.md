# CheckItemLock

`_ZNK5CUser13CheckItemLockEii`

`CUser::CheckItemLock(int, int) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08646942` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08646942  _ZNK5CUser13CheckItemLockEii
#           CUser::CheckItemLock(int, int) const
# range [0x08646942, 0x086469ef]
08646942 +0x00:  push   %ebp
08646943 +0x01:  mov    %esp,%ebp
08646945 +0x03:  push   %ebx
08646946 +0x04:  sub    $0x24,%esp
08646949 +0x07:  mov    0x8(%ebp),%eax
0864694c +0x0a:  mov    %eax,(%esp)
0864694f +0x0d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08646954 +0x12:  test   %eax,%eax
08646956 +0x14:  sete   %al
08646959 +0x17:  test   %al,%al
0864695b +0x19:  je     08646967 <+0x25>
0864695d +0x1b:  mov    $0x0,%eax
08646962 +0x20:  jmp    086469e9 <+0xa7>
08646967 +0x25:  mov    0x8(%ebp),%eax
0864696a +0x28:  mov    %eax,(%esp)
0864696d +0x2b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08646972 +0x30:  mov    0x10(%ebp),%edx
08646975 +0x33:  mov    %edx,0x8(%esp)
08646979 +0x37:  mov    0xc(%ebp),%edx
0864697c +0x3a:  mov    %edx,0x4(%esp)
08646980 +0x3e:  mov    %eax,(%esp)
08646983 +0x41:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08646988 +0x46:  mov    %eax,-0x10(%ebp)
0864698b +0x49:  cmpl   $0x0,-0x10(%ebp)
0864698f +0x4d:  jne    08646998 <+0x56>
08646991 +0x4f:  mov    $0x1,%eax
08646996 +0x54:  jmp    086469e9 <+0xa7>
08646998 +0x56:  mov    -0x10(%ebp),%eax
0864699b +0x59:  add    $0x11,%eax
0864699e +0x5c:  mov    %eax,(%esp)
086469a1 +0x5f:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
086469a6 +0x64:  mov    %al,-0x9(%ebp)
086469a9 +0x67:  cmpb   $0x0,-0x9(%ebp)
086469ad +0x6b:  jne    086469b6 <+0x74>
086469af +0x6d:  mov    $0x0,%eax
086469b4 +0x72:  jmp    086469e9 <+0xa7>
086469b6 +0x74:  movzbl -0x9(%ebp),%ebx
086469ba +0x78:  movl   $0x2,0x4(%esp)
086469c2 +0x80:  mov    0x8(%ebp),%eax
086469c5 +0x83:  mov    %eax,(%esp)
086469c8 +0x86:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
086469cd +0x8b:  mov    %ebx,0x4(%esp)
086469d1 +0x8f:  mov    %eax,(%esp)
086469d4 +0x92:  call   08541a96 <_ZNK9item_lock9CItemLock13CheckItemLockEh>  ; item_lock::CItemLock::CheckItemLock(unsigned char) const
086469d9 +0x97:  test   %al,%al
086469db +0x99:  je     086469e4 <+0xa2>
086469dd +0x9b:  mov    $0x1,%eax
086469e2 +0xa0:  jmp    086469e9 <+0xa7>
086469e4 +0xa2:  mov    $0x0,%eax
086469e9 +0xa7:  add    $0x24,%esp
086469ec +0xaa:  pop    %ebx
086469ed +0xab:  pop    %ebp
086469ee +0xac:  ret
086469ef +0xad:  nop
```

## 反编译 C

```c
// CUser::CheckItemLock @ 0x8646942

/* CUser::CheckItemLock(int, int) const */

undefined4 __thiscall CUser::CheckItemLock(CUser *this,int param_1,int param_2)

{
  char cVar1;
  uchar uVar2;
  int iVar3;
  undefined4 uVar4;
  CInventory *this_00;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    iVar3 = CInventory::GetInvenRef(this_00,param_1,param_2);
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    else {
      cVar1 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(iVar3 + 0x11));
      if (cVar1 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar2 = GetCharacExpandDataR(this,2);
        cVar1 = item_lock::CItemLock::CheckItemLock(uVar2);
        if (cVar1 == '\0') {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}
```
