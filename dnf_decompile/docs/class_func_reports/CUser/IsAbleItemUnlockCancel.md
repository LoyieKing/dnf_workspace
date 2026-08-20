# IsAbleItemUnlockCancel

`_ZNK5CUser22IsAbleItemUnlockCancelEii`

`CUser::IsAbleItemUnlockCancel(int, int) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08646cae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08646cae  _ZNK5CUser22IsAbleItemUnlockCancelEii
#           CUser::IsAbleItemUnlockCancel(int, int) const
# range [0x08646cae, 0x08646d49]
08646cae +0x00:  push   %ebp
08646caf +0x01:  mov    %esp,%ebp
08646cb1 +0x03:  push   %ebx
08646cb2 +0x04:  sub    $0x24,%esp
08646cb5 +0x07:  mov    0x10(%ebp),%eax
08646cb8 +0x0a:  movzwl %ax,%edx
08646cbb +0x0d:  mov    0xc(%ebp),%eax
08646cbe +0x10:  movzwl %ax,%eax
08646cc1 +0x13:  mov    %edx,0x8(%esp)
08646cc5 +0x17:  mov    %eax,0x4(%esp)
08646cc9 +0x1b:  mov    0x8(%ebp),%eax
08646ccc +0x1e:  mov    %eax,(%esp)
08646ccf +0x21:  call   08680c8a <_ZNK5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short) const
08646cd4 +0x26:  mov    %eax,-0x14(%ebp)
08646cd7 +0x29:  cmpl   $0x0,-0x14(%ebp)
08646cdb +0x2d:  jne    08646ce4 <+0x36>
08646cdd +0x2f:  mov    $0x15,%eax
08646ce2 +0x34:  jmp    08646d44 <+0x96>
08646ce4 +0x36:  mov    -0x14(%ebp),%eax
08646ce7 +0x39:  add    $0x11,%eax
08646cea +0x3c:  mov    %eax,(%esp)
08646ced +0x3f:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08646cf2 +0x44:  mov    %al,-0xd(%ebp)
08646cf5 +0x47:  cmpb   $0x0,-0xd(%ebp)
08646cf9 +0x4b:  jne    08646d02 <+0x54>
08646cfb +0x4d:  mov    $0x13,%eax
08646d00 +0x52:  jmp    08646d44 <+0x96>
08646d02 +0x54:  movl   $0x0,-0xc(%ebp)
08646d09 +0x5b:  movzbl -0xd(%ebp),%ebx
08646d0d +0x5f:  movl   $0x2,0x4(%esp)
08646d15 +0x67:  mov    0x8(%ebp),%eax
08646d18 +0x6a:  mov    %eax,(%esp)
08646d1b +0x6d:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08646d20 +0x72:  mov    %ebx,0x4(%esp)
08646d24 +0x76:  mov    %eax,(%esp)
08646d27 +0x79:  call   08541bb0 <_ZNK9item_lock9CItemLock22IsAbleItemUnlockCancelEh>  ; item_lock::CItemLock::IsAbleItemUnlockCancel(unsigned char) const
08646d2c +0x7e:  mov    %eax,-0xc(%ebp)
08646d2f +0x81:  cmpl   $0x0,-0xc(%ebp)
08646d33 +0x85:  setne  %al
08646d36 +0x88:  test   %al,%al
08646d38 +0x8a:  je     08646d3f <+0x91>
08646d3a +0x8c:  mov    -0xc(%ebp),%eax
08646d3d +0x8f:  jmp    08646d44 <+0x96>
08646d3f +0x91:  mov    $0x0,%eax
08646d44 +0x96:  add    $0x24,%esp
08646d47 +0x99:  pop    %ebx
08646d48 +0x9a:  pop    %ebp
08646d49 +0x9b:  ret
```

## 反编译 C

```c
// CUser::IsAbleItemUnlockCancel @ 0x8646cae

/* CUser::IsAbleItemUnlockCancel(int, int) const */

int __thiscall CUser::IsAbleItemUnlockCancel(CUser *this,int param_1,int param_2)

{
  char cVar1;
  uchar uVar2;
  int iVar3;
  
  iVar3 = GetCurCharacInventoryRef(this,(ushort)param_1,(ushort)param_2);
  if (iVar3 == 0) {
    iVar3 = 0x15;
  }
  else {
    cVar1 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(iVar3 + 0x11));
    if (cVar1 == '\0') {
      iVar3 = 0x13;
    }
    else {
      uVar2 = GetCharacExpandDataR(this,2);
      iVar3 = item_lock::CItemLock::IsAbleItemUnlockCancel(uVar2);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}
```
