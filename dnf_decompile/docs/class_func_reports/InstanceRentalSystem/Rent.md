# Rent

`_ZN20InstanceRentalSystem4RentER5CUserRKNS_9RentInputERNS_10RentOutputE`

`InstanceRentalSystem::Rent(CUser&, InstanceRentalSystem::RentInput const&, InstanceRentalSystem::RentOutput&)`

| 类 | 地址 |
|---|---|
| `InstanceRentalSystem` | `0x08270288` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08270288  _ZN20InstanceRentalSystem4RentER5CUserRKNS_9RentInputERNS_10RentOutputE
#           InstanceRentalSystem::Rent(CUser&, InstanceRentalSystem::RentInput const&, InstanceRentalSystem::RentOutput&)
# range [0x08270288, 0x082702db]
08270288 +0x00:  push   %ebp
08270289 +0x01:  mov    %esp,%ebp
0827028b +0x03:  sub    $0x28,%esp
0827028e +0x06:  mov    0x10(%ebp),%eax
08270291 +0x09:  mov    0xc(%eax),%eax
08270294 +0x0c:  mov    %eax,0x4(%esp)
08270298 +0x10:  mov    0x8(%ebp),%eax
0827029b +0x13:  mov    %eax,(%esp)
0827029e +0x16:  call   08270348 <_ZN20InstanceRentalSystem10getMachineEi>  ; InstanceRentalSystem::getMachine(int)
082702a3 +0x1b:  mov    %eax,-0xc(%ebp)
082702a6 +0x1e:  cmpl   $0x0,-0xc(%ebp)
082702aa +0x22:  jne    082702b3 <+0x2b>
082702ac +0x24:  mov    $0x1,%eax
082702b1 +0x29:  jmp    082702da <+0x52>
082702b3 +0x2b:  mov    -0xc(%ebp),%eax
082702b6 +0x2e:  mov    (%eax),%eax
082702b8 +0x30:  add    $0x8,%eax
082702bb +0x33:  mov    (%eax),%edx
082702bd +0x35:  mov    0x14(%ebp),%eax
082702c0 +0x38:  mov    %eax,0xc(%esp)
082702c4 +0x3c:  mov    0x10(%ebp),%eax
082702c7 +0x3f:  mov    %eax,0x8(%esp)
082702cb +0x43:  mov    0xc(%ebp),%eax
082702ce +0x46:  mov    %eax,0x4(%esp)
082702d2 +0x4a:  mov    -0xc(%ebp),%eax
082702d5 +0x4d:  mov    %eax,(%esp)
082702d8 +0x50:  call   *%edx
082702da +0x52:  leave
082702db +0x53:  ret
```

## 反编译 C

```c
// InstanceRentalSystem::Rent @ 0x8270288

/* InstanceRentalSystem::Rent(CUser&, InstanceRentalSystem::RentInput const&,
   InstanceRentalSystem::RentOutput&) */

undefined4 __thiscall
InstanceRentalSystem::Rent
          (InstanceRentalSystem *this,CUser *param_1,RentInput *param_2,RentOutput *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)getMachine((int)this);
  if (piVar1 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1,param_1,param_2,param_3);
  }
  return uVar2;
}
```
