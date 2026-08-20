# ~EmblemCompound

`_ZN4ARAD6SCRIPT14EmblemCompoundD1Ev`

`ARAD::SCRIPT::EmblemCompound::~EmblemCompound()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::EmblemCompound` | `0x088b14c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b14c2  _ZN4ARAD6SCRIPT14EmblemCompoundD1Ev
#           ARAD::SCRIPT::EmblemCompound::~EmblemCompound()
# range [0x088b14c2, 0x088b1549]
088b14c2 +0x00:  push   %ebp
088b14c3 +0x01:  mov    %esp,%ebp
088b14c5 +0x03:  push   %esi
088b14c6 +0x04:  push   %ebx
088b14c7 +0x05:  sub    $0x10,%esp
088b14ca +0x08:  mov    0x8(%ebp),%eax
088b14cd +0x0b:  add    $0x30,%eax
088b14d0 +0x0e:  test   %eax,%eax
088b14d2 +0x10:  je     088b150c <+0x4a>
088b14d4 +0x12:  mov    0x8(%ebp),%eax
088b14d7 +0x15:  add    $0x30,%eax
088b14da +0x18:  lea    0x54(%eax),%ebx
088b14dd +0x1b:  mov    0x8(%ebp),%eax
088b14e0 +0x1e:  add    $0x30,%eax
088b14e3 +0x21:  cmp    %eax,%ebx
088b14e5 +0x23:  je     088b150c <+0x4a>
088b14e7 +0x25:  sub    $0xc,%ebx
088b14ea +0x28:  mov    %ebx,(%esp)
088b14ed +0x2b:  call   080f53d6 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x387>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x387
088b14f2 +0x30:  jmp    088b14dd <+0x1b>
088b14f4 +0x32:  mov    %edx,%ebx
088b14f6 +0x34:  mov    %eax,%esi
088b14f8 +0x36:  mov    0x8(%ebp),%eax
088b14fb +0x39:  add    $0x18,%eax
088b14fe +0x3c:  mov    %eax,(%esp)
088b1501 +0x3f:  call   088b1f1a <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x1d>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x1d
088b1506 +0x44:  mov    %esi,%eax
088b1508 +0x46:  mov    %ebx,%edx
088b150a +0x48:  jmp    088b151c <+0x5a>
088b150c +0x4a:  mov    0x8(%ebp),%eax
088b150f +0x4d:  add    $0x18,%eax
088b1512 +0x50:  mov    %eax,(%esp)
088b1515 +0x53:  call   088b1f1a <_GLOBAL__I__ZN4ARAD6SCRIPT14AvatarRechargeC2Ev+0x1d>  ; global constructors keyed to ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()+0x1d
088b151a +0x58:  jmp    088b1537 <+0x75>
088b151c +0x5a:  mov    %edx,%ebx
088b151e +0x5c:  mov    %eax,%esi
088b1520 +0x5e:  mov    0x8(%ebp),%eax
088b1523 +0x61:  mov    %eax,(%esp)
088b1526 +0x64:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088b152b +0x69:  mov    %esi,%eax
088b152d +0x6b:  mov    %ebx,%edx
088b152f +0x6d:  mov    %eax,(%esp)
088b1532 +0x70:  call   08ae3750 <_Unwind_Resume>
088b1537 +0x75:  mov    0x8(%ebp),%eax
088b153a +0x78:  mov    %eax,(%esp)
088b153d +0x7b:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088b1542 +0x80:  add    $0x10,%esp
088b1545 +0x83:  pop    %ebx
088b1546 +0x84:  pop    %esi
088b1547 +0x85:  pop    %ebp
088b1548 +0x86:  ret
088b1549 +0x87:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::EmblemCompound::~EmblemCompound @ 0x88b14c2

/* ARAD::SCRIPT::EmblemCompound::~EmblemCompound() */

void __thiscall ARAD::SCRIPT::EmblemCompound::~EmblemCompound(EmblemCompound *this)

{
  vector<unsigned_long,std::allocator<unsigned_long>> *this_00;
  
  if (this != (EmblemCompound *)0xffffffd0) {
    this_00 = (vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x84);
    while (this_00 != (vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x30)) {
      this_00 = this_00 + -0xc;
                    /* try { // try from 088b14ed to 088b14f1 has its CatchHandler @ 088b14f4 */
      std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector(this_00);
    }
  }
                    /* try { // try from 088b1515 to 088b1519 has its CatchHandler @ 088b151c */
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::~map((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
          *)(this + 0x18));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
  return;
}
```
