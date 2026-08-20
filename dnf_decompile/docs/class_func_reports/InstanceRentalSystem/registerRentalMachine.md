# registerRentalMachine

`_ZN20InstanceRentalSystem21registerRentalMachineEiP14IRentalMachine`

`InstanceRentalSystem::registerRentalMachine(int, IRentalMachine*)`

| 类 | 地址 |
|---|---|
| `InstanceRentalSystem` | `0x08270320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08270320  _ZN20InstanceRentalSystem21registerRentalMachineEiP14IRentalMachine
#           InstanceRentalSystem::registerRentalMachine(int, IRentalMachine*)
# range [0x08270320, 0x08270347]
08270320 +0x00:  push   %ebp
08270321 +0x01:  mov    %esp,%ebp
08270323 +0x03:  sub    $0x18,%esp
08270326 +0x06:  mov    0x8(%ebp),%eax
08270329 +0x09:  mov    %eax,(%esp)
0827032c +0x0c:  call   08271b76 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x19c>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x19c
08270331 +0x11:  lea    0xc(%ebp),%edx
08270334 +0x14:  mov    %edx,0x4(%esp)
08270338 +0x18:  mov    %eax,(%esp)
0827033b +0x1b:  call   08271c0c <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x232>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x232
08270340 +0x20:  mov    0x10(%ebp),%edx
08270343 +0x23:  mov    %edx,(%eax)
08270345 +0x25:  leave
08270346 +0x26:  ret
08270347 +0x27:  nop
```

## 反编译 C

```c
// InstanceRentalSystem::registerRentalMachine @ 0x8270320

/* InstanceRentalSystem::registerRentalMachine(int, IRentalMachine*) */

void __thiscall
InstanceRentalSystem::registerRentalMachine
          (InstanceRentalSystem *this,int param_1,IRentalMachine *param_2)

{
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  *this_00;
  undefined4 *puVar1;
  
  this_00 = (map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
             *)std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
                         ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
  puVar1 = (undefined4 *)
           std::
           map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
           ::operator[](this_00,&param_1);
  *puVar1 = param_2;
  return;
}
```
