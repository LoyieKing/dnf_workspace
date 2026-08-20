# setCurrentCharacRentalInfo

`_ZN5CUser26setCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi`

`CUser::setCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08677516` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08677516  _ZN5CUser26setCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi
#           CUser::setCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
# range [0x08677516, 0x08677583]
08677516 +0x00:  push   %ebp
08677517 +0x01:  mov    %esp,%ebp
08677519 +0x03:  sub    $0x28,%esp
0867751c +0x06:  mov    0x8(%ebp),%eax
0867751f +0x09:  mov    %eax,(%esp)
08677522 +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08677527 +0x11:  mov    %eax,-0xc(%ebp)
0867752a +0x14:  cmpl   $0x0,-0xc(%ebp)
0867752e +0x18:  je     0867757d <+0x67>
08677530 +0x1a:  mov    -0xc(%ebp),%eax
08677533 +0x1d:  mov    (%eax),%eax
08677535 +0x1f:  mov    %eax,-0x14(%ebp)
08677538 +0x22:  mov    -0x14(%ebp),%eax
0867753b +0x25:  test   %eax,%eax
0867753d +0x27:  je     08677580 <+0x6a>
0867753f +0x29:  mov    0x10(%ebp),%eax
08677542 +0x2c:  mov    %eax,-0x10(%ebp)
08677545 +0x2f:  mov    0x8(%ebp),%eax
08677548 +0x32:  lea    0x6ef78(%eax),%edx
0867754e +0x38:  lea    -0x10(%ebp),%eax
08677551 +0x3b:  mov    %eax,0x4(%esp)
08677555 +0x3f:  mov    %edx,(%esp)
08677558 +0x42:  call   0869b49a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7cef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7cef
0867755d +0x47:  lea    -0x14(%ebp),%edx
08677560 +0x4a:  mov    %edx,0x4(%esp)
08677564 +0x4e:  mov    %eax,(%esp)
08677567 +0x51:  call   0869b5fc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7e51>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7e51
0867756c +0x56:  mov    0xc(%ebp),%edx
0867756f +0x59:  mov    %edx,0x4(%esp)
08677573 +0x5d:  mov    %eax,(%esp)
08677576 +0x60:  call   0869bc1e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8473>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8473
0867757b +0x65:  jmp    08677581 <+0x6b>
0867757d +0x67:  nop
0867757e +0x68:  jmp    08677581 <+0x6b>
08677580 +0x6a:  nop
08677581 +0x6b:  leave
08677582 +0x6c:  ret
08677583 +0x6d:  nop
```

## 反编译 C

```c
// CUser::setCurrentCharacRentalInfo @ 0x8677516

/* CUser::setCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo,
   std::allocator<InstanceRentalSystem::RentalInfo> >&, int) */

void __thiscall CUser::setCurrentCharacRentalInfo(CUser *this,vector *param_1,int param_2)

{
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  *this_00;
  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>> *this_01
  ;
  uint local_18;
  uint local_14;
  uint *local_10;
  
  local_10 = (uint *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if ((local_10 != (uint *)0x0) && (local_18 = *local_10, local_18 != 0)) {
    local_14 = param_2;
    this_00 = (map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
               *)std::
                 map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
                 ::operator[]((map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
                               *)(this + 0x6ef78),&local_14);
    this_01 = (vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
               *)std::
                 map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
                 ::operator[](this_00,&local_18);
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    operator=(this_01,param_1);
  }
  return;
}
```
