# EmblemCompound

`_ZN4ARAD6SCRIPT14EmblemCompoundC1Ev`

`ARAD::SCRIPT::EmblemCompound::EmblemCompound()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::EmblemCompound` | `0x088b1408` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b1408  _ZN4ARAD6SCRIPT14EmblemCompoundC1Ev
#           ARAD::SCRIPT::EmblemCompound::EmblemCompound()
# range [0x088b1408, 0x088b14bd]
088b1408 +0x00:  push   %ebp
088b1409 +0x01:  mov    %esp,%ebp
088b140b +0x03:  push   %edi
088b140c +0x04:  push   %esi
088b140d +0x05:  push   %ebx
088b140e +0x06:  sub    $0x2c,%esp
088b1411 +0x09:  mov    0x8(%ebp),%eax
088b1414 +0x0c:  mov    %eax,(%esp)
088b1417 +0x0f:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
088b141c +0x14:  mov    0x8(%ebp),%eax
088b141f +0x17:  add    $0x18,%eax
088b1422 +0x1a:  mov    %eax,(%esp)
088b1425 +0x1d:  call   088b1fda <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0xdd>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0xdd
088b142a +0x22:  mov    0x8(%ebp),%eax
088b142d +0x25:  lea    0x30(%eax),%esi
088b1430 +0x28:  mov    %esi,%edi
088b1432 +0x2a:  mov    $0x6,%ebx
088b1437 +0x2f:  jmp    088b1447 <+0x3f>
088b1439 +0x31:  mov    %edi,(%esp)
088b143c +0x34:  call   080f53c2 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x373>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x373
088b1441 +0x39:  add    $0xc,%edi
088b1444 +0x3c:  sub    $0x1,%ebx
088b1447 +0x3f:  cmp    $0xffffffff,%ebx
088b144a +0x42:  setne  %al
088b144d +0x45:  test   %al,%al
088b144f +0x47:  jne    088b1439 <+0x31>
088b1451 +0x49:  jmp    088b149f <+0x97>
088b1453 +0x4b:  mov    %edx,%edi
088b1455 +0x4d:  mov    %eax,-0x1c(%ebp)
088b1458 +0x50:  test   %esi,%esi
088b145a +0x52:  je     088b1482 <+0x7a>
088b145c +0x54:  mov    $0x6,%eax
088b1461 +0x59:  sub    %ebx,%eax
088b1463 +0x5b:  mov    %eax,%edx
088b1465 +0x5d:  mov    %edx,%eax
088b1467 +0x5f:  add    %eax,%eax
088b1469 +0x61:  add    %edx,%eax
088b146b +0x63:  shl    $0x2,%eax
088b146e +0x66:  lea    (%esi,%eax,1),%ebx
088b1471 +0x69:  cmp    %esi,%ebx
088b1473 +0x6b:  je     088b1482 <+0x7a>
088b1475 +0x6d:  sub    $0xc,%ebx
088b1478 +0x70:  mov    %ebx,(%esp)
088b147b +0x73:  call   080f53d6 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x387>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x387
088b1480 +0x78:  jmp    088b1471 <+0x69>
088b1482 +0x7a:  mov    -0x1c(%ebp),%eax
088b1485 +0x7d:  mov    %edi,%edx
088b1487 +0x7f:  mov    %edx,%ebx
088b1489 +0x81:  mov    %eax,%esi
088b148b +0x83:  mov    0x8(%ebp),%eax
088b148e +0x86:  add    $0x18,%eax
088b1491 +0x89:  mov    %eax,(%esp)
088b1494 +0x8c:  call   088b1f1a <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x1d>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x1d
088b1499 +0x91:  mov    %esi,%eax
088b149b +0x93:  mov    %ebx,%edx
088b149d +0x95:  jmp    088b14a7 <+0x9f>
088b149f +0x97:  add    $0x2c,%esp
088b14a2 +0x9a:  pop    %ebx
088b14a3 +0x9b:  pop    %esi
088b14a4 +0x9c:  pop    %edi
088b14a5 +0x9d:  pop    %ebp
088b14a6 +0x9e:  ret
088b14a7 +0x9f:  mov    %edx,%ebx
088b14a9 +0xa1:  mov    %eax,%esi
088b14ab +0xa3:  mov    0x8(%ebp),%eax
088b14ae +0xa6:  mov    %eax,(%esp)
088b14b1 +0xa9:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088b14b6 +0xae:  mov    %esi,%eax
088b14b8 +0xb0:  mov    %ebx,%edx
088b14ba +0xb2:  mov    %eax,(%esp)
088b14bd +0xb5:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// ARAD::SCRIPT::EmblemCompound::EmblemCompound @ 0x88b1408

/* ARAD::SCRIPT::EmblemCompound::EmblemCompound() */

void __thiscall ARAD::SCRIPT::EmblemCompound::EmblemCompound(EmblemCompound *this)

{
  int iVar1;
  vector<unsigned_long,std::allocator<unsigned_long>> *this_00;
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
                    /* try { // try from 088b1425 to 088b1429 has its CatchHandler @ 088b14a7 */
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::map((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
         *)(this + 0x18));
  this_00 = (vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x30);
  for (iVar1 = 6; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 088b143c to 088b1440 has its CatchHandler @ 088b1453 */
    std::vector<unsigned_long,std::allocator<unsigned_long>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
  return;
}
```
