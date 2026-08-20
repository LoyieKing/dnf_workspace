# GetCurrentCharacRentalInfo

`_ZN5CUser26GetCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi`

`CUser::GetCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08677166` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08677166  _ZN5CUser26GetCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi
#           CUser::GetCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
# range [0x08677166, 0x08677187]
08677166 +0x00:  push   %ebp
08677167 +0x01:  mov    %esp,%ebp
08677169 +0x03:  sub    $0x18,%esp
0867716c +0x06:  mov    0x10(%ebp),%eax
0867716f +0x09:  mov    %eax,0x8(%esp)
08677173 +0x0d:  mov    0xc(%ebp),%eax
08677176 +0x10:  mov    %eax,0x4(%esp)
0867717a +0x14:  mov    0x8(%ebp),%eax
0867717d +0x17:  mov    %eax,(%esp)
08677180 +0x1a:  call   086773ea <_ZN5CUser26getCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>  ; CUser::getCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
08677185 +0x1f:  leave
08677186 +0x20:  ret
08677187 +0x21:  nop
```

## 反编译 C

```c
// CUser::GetCurrentCharacRentalInfo @ 0x8677166

/* CUser::GetCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo,
   std::allocator<InstanceRentalSystem::RentalInfo> >&, int) */

void __thiscall CUser::GetCurrentCharacRentalInfo(CUser *this,vector *param_1,int param_2)

{
  getCurrentCharacRentalInfo(this,param_1,param_2);
  return;
}
```
