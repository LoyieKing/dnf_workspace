# CheckRentableItem

`_ZN20InstanceRentalSystem17CheckRentableItemEij`

`InstanceRentalSystem::CheckRentableItem(int, unsigned int)`

| 类 | 地址 |
|---|---|
| `InstanceRentalSystem` | `0x082702dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082702dc  _ZN20InstanceRentalSystem17CheckRentableItemEij
#           InstanceRentalSystem::CheckRentableItem(int, unsigned int)
# range [0x082702dc, 0x0827031f]
082702dc +0x00:  push   %ebp
082702dd +0x01:  mov    %esp,%ebp
082702df +0x03:  sub    $0x28,%esp
082702e2 +0x06:  mov    0xc(%ebp),%eax
082702e5 +0x09:  mov    %eax,0x4(%esp)
082702e9 +0x0d:  mov    0x8(%ebp),%eax
082702ec +0x10:  mov    %eax,(%esp)
082702ef +0x13:  call   08270348 <_ZN20InstanceRentalSystem10getMachineEi>  ; InstanceRentalSystem::getMachine(int)
082702f4 +0x18:  mov    %eax,-0xc(%ebp)
082702f7 +0x1b:  cmpl   $0x0,-0xc(%ebp)
082702fb +0x1f:  jne    08270304 <+0x28>
082702fd +0x21:  mov    $0x1,%eax
08270302 +0x26:  jmp    0827031d <+0x41>
08270304 +0x28:  mov    -0xc(%ebp),%eax
08270307 +0x2b:  mov    (%eax),%eax
08270309 +0x2d:  add    $0x10,%eax
0827030c +0x30:  mov    (%eax),%edx
0827030e +0x32:  mov    0x10(%ebp),%eax
08270311 +0x35:  mov    %eax,0x4(%esp)
08270315 +0x39:  mov    -0xc(%ebp),%eax
08270318 +0x3c:  mov    %eax,(%esp)
0827031b +0x3f:  call   *%edx
0827031d +0x41:  leave
0827031e +0x42:  ret
0827031f +0x43:  nop
```

## 反编译 C

```c
// InstanceRentalSystem::CheckRentableItem @ 0x82702dc

/* InstanceRentalSystem::CheckRentableItem(int, unsigned int) */

undefined4 __thiscall
InstanceRentalSystem::CheckRentableItem(InstanceRentalSystem *this,int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)getMachine((int)this);
  if (piVar1 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
  }
  return uVar2;
}
```
