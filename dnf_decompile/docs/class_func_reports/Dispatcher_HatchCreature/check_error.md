# check_error

`_ZN24Dispatcher_HatchCreature11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_HatchCreature::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_HatchCreature` | `0x081cd5aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cd5aa  _ZN24Dispatcher_HatchCreature11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_HatchCreature::check_error(CUser*, MSG_BASE&)
# range [0x081cd5aa, 0x081cd641]
081cd5aa +0x00:  push   %ebp
081cd5ab +0x01:  mov    %esp,%ebp
081cd5ad +0x03:  push   %ebx
081cd5ae +0x04:  sub    $0x24,%esp
081cd5b1 +0x07:  mov    0xc(%ebp),%eax
081cd5b4 +0x0a:  mov    %eax,(%esp)
081cd5b7 +0x0d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081cd5bc +0x12:  test   %eax,%eax
081cd5be +0x14:  sete   %al
081cd5c1 +0x17:  test   %al,%al
081cd5c3 +0x19:  je     081cd5cc <+0x22>
081cd5c5 +0x1b:  mov    $0xffffffff,%eax
081cd5ca +0x20:  jmp    081cd63b <+0x91>
081cd5cc +0x22:  mov    0x10(%ebp),%eax
081cd5cf +0x25:  mov    %eax,-0x10(%ebp)
081cd5d2 +0x28:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081cd5d7 +0x2d:  movl   $0x14,0x8(%esp)
081cd5df +0x35:  mov    0xc(%ebp),%edx
081cd5e2 +0x38:  mov    %edx,0x4(%esp)
081cd5e6 +0x3c:  mov    %eax,(%esp)
081cd5e9 +0x3f:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081cd5ee +0x44:  mov    %eax,-0xc(%ebp)
081cd5f1 +0x47:  cmpl   $0x0,-0xc(%ebp)
081cd5f5 +0x4b:  je     081cd5fc <+0x52>
081cd5f7 +0x4d:  mov    -0xc(%ebp),%eax
081cd5fa +0x50:  jmp    081cd63b <+0x91>
081cd5fc +0x52:  mov    -0x10(%ebp),%eax
081cd5ff +0x55:  movzwl 0xe(%eax),%eax
081cd603 +0x59:  movswl %ax,%ebx
081cd606 +0x5c:  mov    -0x10(%ebp),%eax
081cd609 +0x5f:  movzbl 0xd(%eax),%eax
081cd60d +0x63:  movzbl %al,%eax
081cd610 +0x66:  mov    %eax,(%esp)
081cd613 +0x69:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081cd618 +0x6e:  mov    %ebx,0x8(%esp)
081cd61c +0x72:  mov    %eax,0x4(%esp)
081cd620 +0x76:  mov    0xc(%ebp),%eax
081cd623 +0x79:  mov    %eax,(%esp)
081cd626 +0x7c:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081cd62b +0x81:  test   %al,%al
081cd62d +0x83:  je     081cd636 <+0x8c>
081cd62f +0x85:  mov    $0xd5,%eax
081cd634 +0x8a:  jmp    081cd63b <+0x91>
081cd636 +0x8c:  mov    $0x0,%eax
081cd63b +0x91:  add    $0x24,%esp
081cd63e +0x94:  pop    %ebx
081cd63f +0x95:  pop    %ebp
081cd640 +0x96:  ret
081cd641 +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_HatchCreature::check_error @ 0x81cd5aa

/* Dispatcher_HatchCreature::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_HatchCreature::check_error
          (Dispatcher_HatchCreature *this,CUser *param_1,MSG_BASE *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x14);
    if (iVar3 == 0) {
      sVar1 = *(short *)(param_2 + 0xe);
      iVar3 = GetInvenTypeFromItemSpace(param_2[0xd]);
      cVar2 = CUser::CheckItemLock(param_1,iVar3,(int)sVar1);
      if (cVar2 == '\0') {
        iVar3 = 0;
      }
      else {
        iVar3 = 0xd5;
      }
    }
  }
  return iVar3;
}
```
