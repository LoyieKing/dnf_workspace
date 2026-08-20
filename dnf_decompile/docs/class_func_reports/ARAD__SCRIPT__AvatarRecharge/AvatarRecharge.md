# AvatarRecharge

`_ZN4ARAD6SCRIPT14AvatarRechargeC1Ev`

`ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AvatarRecharge` | `0x088b0dd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b0dd0  _ZN4ARAD6SCRIPT14AvatarRechargeC1Ev
#           ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()
# range [0x088b0dd0, 0x088b0e41]
088b0dd0 +0x00:  push   %ebp
088b0dd1 +0x01:  mov    %esp,%ebp
088b0dd3 +0x03:  push   %esi
088b0dd4 +0x04:  push   %ebx
088b0dd5 +0x05:  sub    $0x10,%esp
088b0dd8 +0x08:  mov    0x8(%ebp),%eax
088b0ddb +0x0b:  add    $0x4,%eax
088b0dde +0x0e:  mov    %eax,(%esp)
088b0de1 +0x11:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
088b0de6 +0x16:  mov    0x8(%ebp),%eax
088b0de9 +0x19:  add    $0x1c,%eax
088b0dec +0x1c:  mov    %eax,(%esp)
088b0def +0x1f:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
088b0df4 +0x24:  mov    0x8(%ebp),%eax
088b0df7 +0x27:  add    $0x34,%eax
088b0dfa +0x2a:  mov    %eax,(%esp)
088b0dfd +0x2d:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
088b0e02 +0x32:  mov    0x8(%ebp),%eax
088b0e05 +0x35:  movb   $0x0,0x4c(%eax)
088b0e09 +0x39:  add    $0x10,%esp
088b0e0c +0x3c:  pop    %ebx
088b0e0d +0x3d:  pop    %esi
088b0e0e +0x3e:  pop    %ebp
088b0e0f +0x3f:  ret
088b0e10 +0x40:  mov    %edx,%ebx
088b0e12 +0x42:  mov    %eax,%esi
088b0e14 +0x44:  mov    0x8(%ebp),%eax
088b0e17 +0x47:  add    $0x1c,%eax
088b0e1a +0x4a:  mov    %eax,(%esp)
088b0e1d +0x4d:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088b0e22 +0x52:  mov    %esi,%eax
088b0e24 +0x54:  mov    %ebx,%edx
088b0e26 +0x56:  jmp    088b0e28 <+0x58>
088b0e28 +0x58:  mov    %edx,%ebx
088b0e2a +0x5a:  mov    %eax,%esi
088b0e2c +0x5c:  mov    0x8(%ebp),%eax
088b0e2f +0x5f:  add    $0x4,%eax
088b0e32 +0x62:  mov    %eax,(%esp)
088b0e35 +0x65:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088b0e3a +0x6a:  mov    %esi,%eax
088b0e3c +0x6c:  mov    %ebx,%edx
088b0e3e +0x6e:  mov    %eax,(%esp)
088b0e41 +0x71:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// ARAD::SCRIPT::AvatarRecharge::AvatarRecharge @ 0x88b0dd0

/* ARAD::SCRIPT::AvatarRecharge::AvatarRecharge() */

void __thiscall ARAD::SCRIPT::AvatarRecharge::AvatarRecharge(AvatarRecharge *this)

{
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 4));
                    /* try { // try from 088b0def to 088b0df3 has its CatchHandler @ 088b0e28 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
                    /* try { // try from 088b0dfd to 088b0e01 has its CatchHandler @ 088b0e10 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
  this[0x4c] = (AvatarRecharge)0x0;
  return;
}
```
