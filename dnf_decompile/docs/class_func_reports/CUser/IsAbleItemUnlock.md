# IsAbleItemUnlock

`_ZNK5CUser16IsAbleItemUnlockEiiRi`

`CUser::IsAbleItemUnlock(int, int, int&) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08646bfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08646bfe  _ZNK5CUser16IsAbleItemUnlockEiiRi
#           CUser::IsAbleItemUnlock(int, int, int&) const
# range [0x08646bfe, 0x08646cad]
08646bfe +0x00:  push   %ebp
08646bff +0x01:  mov    %esp,%ebp
08646c01 +0x03:  push   %ebx
08646c02 +0x04:  sub    $0x24,%esp
08646c05 +0x07:  mov    0x10(%ebp),%eax
08646c08 +0x0a:  movzwl %ax,%edx
08646c0b +0x0d:  mov    0xc(%ebp),%eax
08646c0e +0x10:  movzwl %ax,%eax
08646c11 +0x13:  mov    %edx,0x8(%esp)
08646c15 +0x17:  mov    %eax,0x4(%esp)
08646c19 +0x1b:  mov    0x8(%ebp),%eax
08646c1c +0x1e:  mov    %eax,(%esp)
08646c1f +0x21:  call   08680c8a <_ZNK5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short) const
08646c24 +0x26:  mov    %eax,-0x14(%ebp)
08646c27 +0x29:  cmpl   $0x0,-0x14(%ebp)
08646c2b +0x2d:  jne    08646c34 <+0x36>
08646c2d +0x2f:  mov    $0x15,%eax
08646c32 +0x34:  jmp    08646ca8 <+0xaa>
08646c34 +0x36:  cmpl   $0xc,0xc(%ebp)
08646c38 +0x3a:  jne    08646c41 <+0x43>
08646c3a +0x3c:  mov    $0x13,%eax
08646c3f +0x41:  jmp    08646ca8 <+0xaa>
08646c41 +0x43:  mov    -0x14(%ebp),%eax
08646c44 +0x46:  add    $0x11,%eax
08646c47 +0x49:  mov    %eax,(%esp)
08646c4a +0x4c:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08646c4f +0x51:  mov    %al,-0xd(%ebp)
08646c52 +0x54:  cmpb   $0x0,-0xd(%ebp)
08646c56 +0x58:  jne    08646c5f <+0x61>
08646c58 +0x5a:  mov    $0x13,%eax
08646c5d +0x5f:  jmp    08646ca8 <+0xaa>
08646c5f +0x61:  movl   $0x0,-0xc(%ebp)
08646c66 +0x68:  movzbl -0xd(%ebp),%ebx
08646c6a +0x6c:  movl   $0x2,0x4(%esp)
08646c72 +0x74:  mov    0x8(%ebp),%eax
08646c75 +0x77:  mov    %eax,(%esp)
08646c78 +0x7a:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08646c7d +0x7f:  mov    0x14(%ebp),%edx
08646c80 +0x82:  mov    %edx,0x8(%esp)
08646c84 +0x86:  mov    %ebx,0x4(%esp)
08646c88 +0x8a:  mov    %eax,(%esp)
08646c8b +0x8d:  call   08541b2a <_ZNK9item_lock9CItemLock16IsAbleItemUnlockEhRi>  ; item_lock::CItemLock::IsAbleItemUnlock(unsigned char, int&) const
08646c90 +0x92:  mov    %eax,-0xc(%ebp)
08646c93 +0x95:  cmpl   $0x0,-0xc(%ebp)
08646c97 +0x99:  setne  %al
08646c9a +0x9c:  test   %al,%al
08646c9c +0x9e:  je     08646ca3 <+0xa5>
08646c9e +0xa0:  mov    -0xc(%ebp),%eax
08646ca1 +0xa3:  jmp    08646ca8 <+0xaa>
08646ca3 +0xa5:  mov    $0x0,%eax
08646ca8 +0xaa:  add    $0x24,%esp
08646cab +0xad:  pop    %ebx
08646cac +0xae:  pop    %ebp
08646cad +0xaf:  ret
```

## 反编译 C

```c
// CUser::IsAbleItemUnlock @ 0x8646bfe

/* CUser::IsAbleItemUnlock(int, int, int&) const */

int CUser::IsAbleItemUnlock(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  uchar uVar2;
  int iVar3;
  
  iVar3 = GetCurCharacInventoryRef((CUser *)param_1,(ushort)param_2,(ushort)param_3);
  if (iVar3 == 0) {
    iVar3 = 0x15;
  }
  else if (param_2 == 0xc) {
    iVar3 = 0x13;
  }
  else {
    bVar1 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(iVar3 + 0x11));
    if (bVar1 == 0) {
      iVar3 = 0x13;
    }
    else {
      uVar2 = GetCharacExpandDataR((CUser *)param_1,2);
      iVar3 = item_lock::CItemLock::IsAbleItemUnlock(uVar2,(int *)(uint)bVar1);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}
```
