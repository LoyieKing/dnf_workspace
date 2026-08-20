# Ready

`_ZN20InstanceRentalSystem5ReadyEv`

`InstanceRentalSystem::Ready()`

| 类 | 地址 |
|---|---|
| `InstanceRentalSystem` | `0x082701dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082701dc  _ZN20InstanceRentalSystem5ReadyEv
#           InstanceRentalSystem::Ready()
# range [0x082701dc, 0x08270287]
082701dc +0x00:  push   %ebp
082701dd +0x01:  mov    %esp,%ebp
082701df +0x03:  sub    $0x28,%esp
082701e2 +0x06:  mov    0x8(%ebp),%eax
082701e5 +0x09:  mov    %eax,(%esp)
082701e8 +0x0c:  call   08271b76 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x19c>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x19c
082701ed +0x11:  mov    %eax,%edx
082701ef +0x13:  lea    -0x14(%ebp),%eax
082701f2 +0x16:  mov    %edx,0x4(%esp)
082701f6 +0x1a:  mov    %eax,(%esp)
082701f9 +0x1d:  call   08271b80 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x1a6>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x1a6
082701fe +0x22:  sub    $0x4,%esp
08270201 +0x25:  jmp    0827024c <+0x70>
08270203 +0x27:  lea    -0x14(%ebp),%eax
08270206 +0x2a:  mov    %eax,(%esp)
08270209 +0x2d:  call   08271bfe <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x224>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x224
0827020e +0x32:  mov    0x4(%eax),%eax
08270211 +0x35:  mov    %eax,-0xc(%ebp)
08270214 +0x38:  cmpl   $0x0,-0xc(%ebp)
08270218 +0x3c:  jne    08270221 <+0x45>
0827021a +0x3e:  mov    $0x0,%eax
0827021f +0x43:  jmp    08270286 <+0xaa>
08270221 +0x45:  mov    -0xc(%ebp),%eax
08270224 +0x48:  mov    (%eax),%eax
08270226 +0x4a:  add    $0xc,%eax
08270229 +0x4d:  mov    (%eax),%edx
0827022b +0x4f:  mov    -0xc(%ebp),%eax
0827022e +0x52:  mov    %eax,(%esp)
08270231 +0x55:  call   *%edx
08270233 +0x57:  xor    $0x1,%eax
08270236 +0x5a:  test   %al,%al
08270238 +0x5c:  je     08270241 <+0x65>
0827023a +0x5e:  mov    $0x0,%eax
0827023f +0x63:  jmp    08270286 <+0xaa>
08270241 +0x65:  lea    -0x14(%ebp),%eax
08270244 +0x68:  mov    %eax,(%esp)
08270247 +0x6b:  call   08271be0 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x206>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x206
0827024c +0x70:  mov    0x8(%ebp),%eax
0827024f +0x73:  mov    %eax,(%esp)
08270252 +0x76:  call   08271b76 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x19c>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x19c
08270257 +0x7b:  mov    %eax,%edx
08270259 +0x7d:  lea    -0x10(%ebp),%eax
0827025c +0x80:  mov    %edx,0x4(%esp)
08270260 +0x84:  mov    %eax,(%esp)
08270263 +0x87:  call   08271ba6 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x1cc>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x1cc
08270268 +0x8c:  sub    $0x4,%esp
0827026b +0x8f:  lea    -0x10(%ebp),%eax
0827026e +0x92:  mov    %eax,0x4(%esp)
08270272 +0x96:  lea    -0x14(%ebp),%eax
08270275 +0x99:  mov    %eax,(%esp)
08270278 +0x9c:  call   08271bcc <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x1f2>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x1f2
0827027d +0xa1:  test   %al,%al
0827027f +0xa3:  jne    08270203 <+0x27>
08270281 +0xa5:  mov    $0x1,%eax
08270286 +0xaa:  leave
08270287 +0xab:  ret
```

## 反编译 C

```c
// InstanceRentalSystem::Ready @ 0x82701dc

/* InstanceRentalSystem::Ready() */

undefined4 __thiscall InstanceRentalSystem::Ready(InstanceRentalSystem *this)

{
  char cVar1;
  int iVar2;
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  local_18 [4];
  map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  local_14 [4];
  int *local_10;
  
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
  std::map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>
  ::begin(local_18);
  while( true ) {
    std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::operator->
              ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this);
    std::
    map<int,IRentalMachine*,std::less<int>,std::allocator<std::pair<int_const,IRentalMachine*>>>::
    end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      return 1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_18);
    local_10 = *(int **)(iVar2 + 4);
    if (local_10 == (int *)0x0) break;
    cVar1 = (**(code **)(*local_10 + 0xc))(local_10);
    if (cVar1 != '\x01') {
      return 0;
    }
    std::_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,IRentalMachine*>> *)local_18);
  }
  return 0;
}
```
