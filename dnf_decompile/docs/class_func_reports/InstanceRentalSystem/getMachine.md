# getMachine

`_ZN20InstanceRentalSystem10getMachineEi`

`InstanceRentalSystem::getMachine(int)`

| 类 | 地址 |
|---|---|
| `InstanceRentalSystem` | `0x08270348` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08270348  _ZN20InstanceRentalSystem10getMachineEi
#           InstanceRentalSystem::getMachine(int)
# range [0x08270348, 0x082703bf]
08270348 +0x00:  push   %ebp
08270349 +0x01:  mov    %esp,%ebp
0827034b +0x03:  sub    $0x28,%esp
0827034e +0x06:  mov    0x8(%ebp),%eax
08270351 +0x09:  mov    %eax,(%esp)
08270354 +0x0c:  call   08271b76 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x19c>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x19c
08270359 +0x11:  mov    %eax,%edx
0827035b +0x13:  lea    -0x10(%ebp),%eax
0827035e +0x16:  lea    0xc(%ebp),%ecx
08270361 +0x19:  mov    %ecx,0x8(%esp)
08270365 +0x1d:  mov    %edx,0x4(%esp)
08270369 +0x21:  mov    %eax,(%esp)
0827036c +0x24:  call   08271d02 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x328>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x328
08270371 +0x29:  sub    $0x4,%esp
08270374 +0x2c:  mov    0x8(%ebp),%eax
08270377 +0x2f:  mov    %eax,(%esp)
0827037a +0x32:  call   08271b76 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x19c>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x19c
0827037f +0x37:  mov    %eax,%edx
08270381 +0x39:  lea    -0xc(%ebp),%eax
08270384 +0x3c:  mov    %edx,0x4(%esp)
08270388 +0x40:  mov    %eax,(%esp)
0827038b +0x43:  call   08271ba6 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x1cc>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x1cc
08270390 +0x48:  sub    $0x4,%esp
08270393 +0x4b:  lea    -0x10(%ebp),%eax
08270396 +0x4e:  mov    %eax,0x4(%esp)
0827039a +0x52:  lea    -0xc(%ebp),%eax
0827039d +0x55:  mov    %eax,(%esp)
082703a0 +0x58:  call   08271d2e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x354>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x354
082703a5 +0x5d:  test   %al,%al
082703a7 +0x5f:  je     082703b0 <+0x68>
082703a9 +0x61:  mov    $0x0,%eax
082703ae +0x66:  jmp    082703be <+0x76>
082703b0 +0x68:  lea    -0x10(%ebp),%eax
082703b3 +0x6b:  mov    %eax,(%esp)
082703b6 +0x6e:  call   08271bfe <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x224>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x224
082703bb +0x73:  mov    0x4(%eax),%eax
082703be +0x76:  leave
082703bf +0x77:  ret
```

## 反编译 C

```c
// InstanceRentalSystem::getMachine @ 0x8270348

/* InstanceRentalSystem::getMachine(int) */

undefined4 InstanceRentalSystem::getMachine(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator local_14 [4];
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  local_10 [12];
  
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)param_1);
  std::map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  ::find((int *)local_14);
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)param_1);
  std::map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_10,local_14);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
