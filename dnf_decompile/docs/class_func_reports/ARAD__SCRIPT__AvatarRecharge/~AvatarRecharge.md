# ~AvatarRecharge

`_ZN4ARAD6SCRIPT14AvatarRechargeD1Ev`

`ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarRecharge` | `0x088b0e46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b0e46  _ZN4ARAD6SCRIPT14AvatarRechargeD1Ev
#           ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge()
# range [0x088b0e46, 0x088b0eb9]
088b0e46 +0x00:  push   %ebp
088b0e47 +0x01:  mov    %esp,%ebp
088b0e49 +0x03:  push   %esi
088b0e4a +0x04:  push   %ebx
088b0e4b +0x05:  sub    $0x10,%esp
088b0e4e +0x08:  mov    0x8(%ebp),%eax
088b0e51 +0x0b:  add    $0x34,%eax
088b0e54 +0x0e:  mov    %eax,(%esp)
088b0e57 +0x11:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088b0e5c +0x16:  jmp    088b0e76 <+0x30>
088b0e5e +0x18:  mov    %edx,%ebx
088b0e60 +0x1a:  mov    %eax,%esi
088b0e62 +0x1c:  mov    0x8(%ebp),%eax
088b0e65 +0x1f:  add    $0x1c,%eax
088b0e68 +0x22:  mov    %eax,(%esp)
088b0e6b +0x25:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088b0e70 +0x2a:  mov    %esi,%eax
088b0e72 +0x2c:  mov    %ebx,%edx
088b0e74 +0x2e:  jmp    088b0e86 <+0x40>
088b0e76 +0x30:  mov    0x8(%ebp),%eax
088b0e79 +0x33:  add    $0x1c,%eax
088b0e7c +0x36:  mov    %eax,(%esp)
088b0e7f +0x39:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088b0e84 +0x3e:  jmp    088b0ea4 <+0x5e>
088b0e86 +0x40:  mov    %edx,%ebx
088b0e88 +0x42:  mov    %eax,%esi
088b0e8a +0x44:  mov    0x8(%ebp),%eax
088b0e8d +0x47:  add    $0x4,%eax
088b0e90 +0x4a:  mov    %eax,(%esp)
088b0e93 +0x4d:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088b0e98 +0x52:  mov    %esi,%eax
088b0e9a +0x54:  mov    %ebx,%edx
088b0e9c +0x56:  mov    %eax,(%esp)
088b0e9f +0x59:  call   08ae3750 <_Unwind_Resume>
088b0ea4 +0x5e:  mov    0x8(%ebp),%eax
088b0ea7 +0x61:  add    $0x4,%eax
088b0eaa +0x64:  mov    %eax,(%esp)
088b0ead +0x67:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088b0eb2 +0x6c:  add    $0x10,%esp
088b0eb5 +0x6f:  pop    %ebx
088b0eb6 +0x70:  pop    %esi
088b0eb7 +0x71:  pop    %ebp
088b0eb8 +0x72:  ret
088b0eb9 +0x73:  nop
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge @ 0x88b0e46

/* ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge() */

void __thiscall ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge(AvatarRecharge *this)

{
                    /* try { // try from 088b0e57 to 088b0e5b has its CatchHandler @ 088b0e5e */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
                    /* try { // try from 088b0e7f to 088b0e83 has its CatchHandler @ 088b0e86 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 4));
  return;
}
```
