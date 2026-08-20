# ~InstanceRentalSystem

`_ZN20InstanceRentalSystemD1Ev`

`InstanceRentalSystem::~InstanceRentalSystem()`

| 类 | 地址 |
|---|---|
| `InstanceRentalSystem` | `0x08270110` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08270110  _ZN20InstanceRentalSystemD1Ev
#           InstanceRentalSystem::~InstanceRentalSystem()
# range [0x08270110, 0x082701db]
08270110 +0x00:  push   %ebp
08270111 +0x01:  mov    %esp,%ebp
08270113 +0x03:  push   %esi
08270114 +0x04:  push   %ebx
08270115 +0x05:  sub    $0x20,%esp
08270118 +0x08:  mov    0x8(%ebp),%eax
0827011b +0x0b:  mov    %eax,(%esp)
0827011e +0x0e:  call   08271b76 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x19c>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x19c
08270123 +0x13:  mov    %eax,%edx
08270125 +0x15:  lea    -0x10(%ebp),%eax
08270128 +0x18:  mov    %edx,0x4(%esp)
0827012c +0x1c:  mov    %eax,(%esp)
0827012f +0x1f:  call   08271b80 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x1a6>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x1a6
08270134 +0x24:  sub    $0x4,%esp
08270137 +0x27:  jmp    08270174 <+0x64>
08270139 +0x29:  lea    -0x10(%ebp),%eax
0827013c +0x2c:  mov    %eax,(%esp)
0827013f +0x2f:  call   08271bfe <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x224>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x224
08270144 +0x34:  mov    0x4(%eax),%eax
08270147 +0x37:  test   %eax,%eax
08270149 +0x39:  je     08270157 <+0x47>
0827014b +0x3b:  mov    (%eax),%edx
0827014d +0x3d:  add    $0x4,%edx
08270150 +0x40:  mov    (%edx),%edx
08270152 +0x42:  mov    %eax,(%esp)
08270155 +0x45:  call   *%edx
08270157 +0x47:  lea    -0x10(%ebp),%eax
0827015a +0x4a:  mov    %eax,(%esp)
0827015d +0x4d:  call   08271bfe <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x224>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x224
08270162 +0x52:  movl   $0x0,0x4(%eax)
08270169 +0x59:  lea    -0x10(%ebp),%eax
0827016c +0x5c:  mov    %eax,(%esp)
0827016f +0x5f:  call   08271be0 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x206>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x206
08270174 +0x64:  mov    0x8(%ebp),%eax
08270177 +0x67:  mov    %eax,(%esp)
0827017a +0x6a:  call   08271b76 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x19c>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x19c
0827017f +0x6f:  mov    %eax,%edx
08270181 +0x71:  lea    -0xc(%ebp),%eax
08270184 +0x74:  mov    %edx,0x4(%esp)
08270188 +0x78:  mov    %eax,(%esp)
0827018b +0x7b:  call   08271ba6 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x1cc>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x1cc
08270190 +0x80:  sub    $0x4,%esp
08270193 +0x83:  lea    -0xc(%ebp),%eax
08270196 +0x86:  mov    %eax,0x4(%esp)
0827019a +0x8a:  lea    -0x10(%ebp),%eax
0827019d +0x8d:  mov    %eax,(%esp)
082701a0 +0x90:  call   08271bcc <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x1f2>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x1f2
082701a5 +0x95:  test   %al,%al
082701a7 +0x97:  jne    08270139 <+0x29>
082701a9 +0x99:  jmp    082701c6 <+0xb6>
082701ab +0x9b:  mov    %edx,%ebx
082701ad +0x9d:  mov    %eax,%esi
082701af +0x9f:  mov    0x8(%ebp),%eax
082701b2 +0xa2:  mov    %eax,(%esp)
082701b5 +0xa5:  call   08271b50 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x176>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x176
082701ba +0xaa:  mov    %esi,%eax
082701bc +0xac:  mov    %ebx,%edx
082701be +0xae:  mov    %eax,(%esp)
082701c1 +0xb1:  call   08ae3750 <_Unwind_Resume>
082701c6 +0xb6:  mov    0x8(%ebp),%eax
082701c9 +0xb9:  mov    %eax,(%esp)
082701cc +0xbc:  call   08271b50 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x176>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x176
082701d1 +0xc1:  lea    -0x8(%ebp),%esp
082701d4 +0xc4:  add    $0x0,%esp
082701d7 +0xc7:  pop    %ebx
082701d8 +0xc8:  pop    %esi
082701d9 +0xc9:  pop    %ebp
082701da +0xca:  ret
082701db +0xcb:  nop
```

## 反编译 C

```c
// InstanceRentalSystem::~InstanceRentalSystem @ 0x8270110

/* InstanceRentalSystem::~InstanceRentalSystem() */

void __thiscall InstanceRentalSystem::~InstanceRentalSystem(InstanceRentalSystem *this)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  local_14 [4];
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  local_10 [4];
  
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
                    /* try { // try from 0827012f to 0827018f has its CatchHandler @ 082701ab */
  std::map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  ::begin(local_14);
  while( true ) {
    std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
              ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
    std::
    map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>::
    end(local_10);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_14,
                       (_Rb_tree_iterator *)local_10);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_14);
    piVar1 = *(int **)(iVar3 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_14);
    *(undefined4 *)(iVar3 + 4) = 0;
    std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_14);
  }
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::~auto_ptr
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
  return;
}
```
