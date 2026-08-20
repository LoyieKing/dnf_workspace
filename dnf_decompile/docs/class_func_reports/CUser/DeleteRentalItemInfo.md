# DeleteRentalItemInfo

`_ZN5CUser20DeleteRentalItemInfoEi`

`CUser::DeleteRentalItemInfo(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08677022` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08677022  _ZN5CUser20DeleteRentalItemInfoEi
#           CUser::DeleteRentalItemInfo(int)
# range [0x08677022, 0x0867704f]
08677022 +0x00:  push   %ebp
08677023 +0x01:  mov    %esp,%ebp
08677025 +0x03:  sub    $0x28,%esp
08677028 +0x06:  mov    0xc(%ebp),%eax
0867702b +0x09:  mov    %eax,-0xc(%ebp)
0867702e +0x0c:  mov    0x8(%ebp),%eax
08677031 +0x0f:  lea    0x6ef78(%eax),%edx
08677037 +0x15:  lea    -0xc(%ebp),%eax
0867703a +0x18:  mov    %eax,0x4(%esp)
0867703e +0x1c:  mov    %edx,(%esp)
08677041 +0x1f:  call   0869b49a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7cef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7cef
08677046 +0x24:  mov    %eax,(%esp)
08677049 +0x27:  call   0869b9c6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x821b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x821b
0867704e +0x2c:  leave
0867704f +0x2d:  ret
```

## 反编译 C

```c
// CUser::DeleteRentalItemInfo @ 0x8677022

/* CUser::DeleteRentalItemInfo(int) */

void __thiscall CUser::DeleteRentalItemInfo(CUser *this,int param_1)

{
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  *this_00;
  uint local_10 [3];
  
  local_10[0] = param_1;
  this_00 = (map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
             *)std::
               map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
               ::operator[]((map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
                             *)(this + 0x6ef78),local_10);
  std::
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  ::clear(this_00);
  return;
}
```
