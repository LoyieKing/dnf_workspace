# LoadProcess

`_ZN19CerashopAddRestrict7Manager11LoadProcessERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS1_IjPNS_10paramDailyES3_SaIS4_IS5_SB_EEEP35SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE`

`CerashopAddRestrict::Manager::LoadProcess(std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE*)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e142a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e142a  _ZN19CerashopAddRestrict7Manager11LoadProcessERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS1_IjPNS_10paramDailyES3_SaIS4_IS5_SB_EEEP35SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE
#           CerashopAddRestrict::Manager::LoadProcess(std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE*)
# range [0x080e142a, 0x080e14f5]
080e142a +0x00:  push   %ebp
080e142b +0x01:  mov    %esp,%ebp
080e142d +0x03:  sub    $0x38,%esp
080e1430 +0x06:  mov    0x8(%ebp),%eax
080e1433 +0x09:  mov    %eax,(%esp)
080e1436 +0x0c:  call   080e273a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4e0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4e0
080e143b +0x11:  movl   $0x0,-0x10(%ebp)
080e1442 +0x18:  jmp    080e14e0 <+0xb6>
080e1447 +0x1d:  movl   $0xc,(%esp)
080e144e +0x24:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080e1453 +0x29:  mov    %eax,%edx
080e1455 +0x2b:  mov    %edx,%eax
080e1457 +0x2d:  movl   $0x0,(%eax)
080e145d +0x33:  movl   $0x0,0x4(%eax)
080e1464 +0x3a:  movl   $0x0,0x8(%eax)
080e146b +0x41:  mov    %edx,%eax
080e146d +0x43:  mov    %eax,-0x24(%ebp)
080e1470 +0x46:  mov    -0x10(%ebp),%edx
080e1473 +0x49:  mov    %edx,%eax
080e1475 +0x4b:  add    %eax,%eax
080e1477 +0x4d:  add    %edx,%eax
080e1479 +0x4f:  shl    $0x2,%eax
080e147c +0x52:  add    0x10(%ebp),%eax
080e147f +0x55:  add    $0x8,%eax
080e1482 +0x58:  mov    %eax,-0xc(%ebp)
080e1485 +0x5b:  mov    -0x24(%ebp),%eax
080e1488 +0x5e:  mov    -0xc(%ebp),%edx
080e148b +0x61:  mov    (%edx),%edx
080e148d +0x63:  mov    %edx,(%eax)
080e148f +0x65:  mov    -0x24(%ebp),%eax
080e1492 +0x68:  mov    -0xc(%ebp),%edx
080e1495 +0x6b:  mov    0x4(%edx),%edx
080e1498 +0x6e:  mov    %edx,0x4(%eax)
080e149b +0x71:  mov    -0x24(%ebp),%eax
080e149e +0x74:  mov    -0xc(%ebp),%edx
080e14a1 +0x77:  mov    0x8(%edx),%edx
080e14a4 +0x7a:  mov    %edx,0x8(%eax)
080e14a7 +0x7d:  mov    -0x24(%ebp),%eax
080e14aa +0x80:  lea    -0x24(%ebp),%edx
080e14ad +0x83:  mov    %edx,0x8(%esp)
080e14b1 +0x87:  mov    %eax,0x4(%esp)
080e14b5 +0x8b:  lea    -0x18(%ebp),%eax
080e14b8 +0x8e:  mov    %eax,(%esp)
080e14bb +0x91:  call   080e28b0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x656>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x656
080e14c0 +0x96:  lea    -0x20(%ebp),%eax
080e14c3 +0x99:  lea    -0x18(%ebp),%edx
080e14c6 +0x9c:  mov    %edx,0x8(%esp)
080e14ca +0xa0:  mov    0xc(%ebp),%edx
080e14cd +0xa3:  mov    %edx,0x4(%esp)
080e14d1 +0xa7:  mov    %eax,(%esp)
080e14d4 +0xaa:  call   080e28de <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x684>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x684
080e14d9 +0xaf:  sub    $0x4,%esp
080e14dc +0xb2:  addl   $0x1,-0x10(%ebp)
080e14e0 +0xb6:  mov    0x10(%ebp),%eax
080e14e3 +0xb9:  mov    (%eax),%eax
080e14e5 +0xbb:  cmp    -0x10(%ebp),%eax
080e14e8 +0xbe:  seta   %al
080e14eb +0xc1:  test   %al,%al
080e14ed +0xc3:  jne    080e1447 <+0x1d>
080e14f3 +0xc9:  leave
080e14f4 +0xca:  ret
080e14f5 +0xcb:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::LoadProcess @ 0x80e142a

/* CerashopAddRestrict::Manager::LoadProcess(std::map<unsigned int, unsigned int, std::less<unsigned
   int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int,
   CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int
   const, CerashopAddRestrict::paramDaily*> > >&, SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE*) */

void CerashopAddRestrict::Manager::LoadProcess
               (map *param_1,map *param_2,SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *param_3)

{
  paramDaily *local_28;
  pair local_24 [8];
  pair<unsigned_int_const,CerashopAddRestrict::paramDaily*> local_1c [8];
  uint local_14;
  SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *local_10;
  
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
           *)param_1);
  for (local_14 = 0; local_14 < *(uint *)param_3; local_14 = local_14 + 1) {
    local_28 = operator_new(0xc);
    *(uint *)local_28 = 0;
    *(uint *)(local_28 + 4) = 0;
    *(uint *)(local_28 + 8) = 0;
    local_10 = param_3 + local_14 * 0xc + 8;
    *(uint *)local_28 = *(uint *)local_10;
    *(uint *)(local_28 + 4) = *(uint *)(param_3 + local_14 * 0xc + 0xc);
    *(uint *)(local_28 + 8) = *(uint *)(param_3 + local_14 * 0xc + 0x10);
    std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>::
    pair<unsigned_int&,CerashopAddRestrict::paramDaily*&>(local_1c,(uint *)local_28,&local_28);
    std::
    map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
    ::insert(local_24);
  }
  return;
}
```
