# CheckItemLockSlotSpace

`_ZNK5CUser22CheckItemLockSlotSpaceEii`

`CUser::CheckItemLockSlotSpace(int, int) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086469f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086469f0  _ZNK5CUser22CheckItemLockSlotSpaceEii
#           CUser::CheckItemLockSlotSpace(int, int) const
# range [0x086469f0, 0x08646a9b]
086469f0 +0x00:  push   %ebp
086469f1 +0x01:  mov    %esp,%ebp
086469f3 +0x03:  push   %ebx
086469f4 +0x04:  sub    $0x24,%esp
086469f7 +0x07:  mov    0x8(%ebp),%eax
086469fa +0x0a:  mov    %eax,(%esp)
086469fd +0x0d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08646a02 +0x12:  test   %eax,%eax
08646a04 +0x14:  sete   %al
08646a07 +0x17:  test   %al,%al
08646a09 +0x19:  je     08646a15 <+0x25>
08646a0b +0x1b:  mov    $0x0,%eax
08646a10 +0x20:  jmp    08646a95 <+0xa5>
08646a15 +0x25:  mov    0x10(%ebp),%eax
08646a18 +0x28:  movzwl %ax,%edx
08646a1b +0x2b:  mov    0xc(%ebp),%eax
08646a1e +0x2e:  movzwl %ax,%eax
08646a21 +0x31:  mov    %edx,0x8(%esp)
08646a25 +0x35:  mov    %eax,0x4(%esp)
08646a29 +0x39:  mov    0x8(%ebp),%eax
08646a2c +0x3c:  mov    %eax,(%esp)
08646a2f +0x3f:  call   08680c8a <_ZNK5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short) const
08646a34 +0x44:  mov    %eax,-0x10(%ebp)
08646a37 +0x47:  cmpl   $0x0,-0x10(%ebp)
08646a3b +0x4b:  jne    08646a44 <+0x54>
08646a3d +0x4d:  mov    $0x0,%eax
08646a42 +0x52:  jmp    08646a95 <+0xa5>
08646a44 +0x54:  mov    -0x10(%ebp),%eax
08646a47 +0x57:  add    $0x11,%eax
08646a4a +0x5a:  mov    %eax,(%esp)
08646a4d +0x5d:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08646a52 +0x62:  mov    %al,-0x9(%ebp)
08646a55 +0x65:  cmpb   $0x0,-0x9(%ebp)
08646a59 +0x69:  jne    08646a62 <+0x72>
08646a5b +0x6b:  mov    $0x0,%eax
08646a60 +0x70:  jmp    08646a95 <+0xa5>
08646a62 +0x72:  movzbl -0x9(%ebp),%ebx
08646a66 +0x76:  movl   $0x2,0x4(%esp)
08646a6e +0x7e:  mov    0x8(%ebp),%eax
08646a71 +0x81:  mov    %eax,(%esp)
08646a74 +0x84:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08646a79 +0x89:  mov    %ebx,0x4(%esp)
08646a7d +0x8d:  mov    %eax,(%esp)
08646a80 +0x90:  call   08541a96 <_ZNK9item_lock9CItemLock13CheckItemLockEh>  ; item_lock::CItemLock::CheckItemLock(unsigned char) const
08646a85 +0x95:  test   %al,%al
08646a87 +0x97:  je     08646a90 <+0xa0>
08646a89 +0x99:  mov    $0x1,%eax
08646a8e +0x9e:  jmp    08646a95 <+0xa5>
08646a90 +0xa0:  mov    $0x0,%eax
08646a95 +0xa5:  add    $0x24,%esp
08646a98 +0xa8:  pop    %ebx
08646a99 +0xa9:  pop    %ebp
08646a9a +0xaa:  ret
08646a9b +0xab:  nop
```

## 反编译 C

```c
// CUser::CheckItemLockSlotSpace @ 0x86469f0

/* CUser::CheckItemLockSlotSpace(int, int) const */

undefined4 __thiscall CUser::CheckItemLockSlotSpace(CUser *this,int param_1,int param_2)

{
  char cVar1;
  uchar uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    iVar3 = GetCurCharacInventoryRef(this,(ushort)param_1,(ushort)param_2);
    if (iVar3 == 0) {
      uVar4 = 0;
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
