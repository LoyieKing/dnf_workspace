# GetInstanceRentalInfo

`_ZN5CUser21GetInstanceRentalInfoERSt3mapIjSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS3_EESt4lessIjESaISt4pairIKjS5_EEEi`

`CUser::GetInstanceRentalInfo(std::map<unsigned int, std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> > > > >&, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08676dba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08676dba  _ZN5CUser21GetInstanceRentalInfoERSt3mapIjSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS3_EESt4lessIjESaISt4pairIKjS5_EEEi
#           CUser::GetInstanceRentalInfo(std::map<unsigned int, std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> > > > >&, int)
# range [0x08676dba, 0x08676e3b]
08676dba +0x00:  push   %ebp
08676dbb +0x01:  mov    %esp,%ebp
08676dbd +0x03:  sub    $0x28,%esp
08676dc0 +0x06:  mov    0x10(%ebp),%eax
08676dc3 +0x09:  mov    %eax,-0x10(%ebp)
08676dc6 +0x0c:  mov    0x8(%ebp),%eax
08676dc9 +0x0f:  lea    0x6ef78(%eax),%ecx
08676dcf +0x15:  lea    -0x14(%ebp),%eax
08676dd2 +0x18:  lea    -0x10(%ebp),%edx
08676dd5 +0x1b:  mov    %edx,0x8(%esp)
08676dd9 +0x1f:  mov    %ecx,0x4(%esp)
08676ddd +0x23:  mov    %eax,(%esp)
08676de0 +0x26:  call   0869b3f2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7c47>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7c47
08676de5 +0x2b:  sub    $0x4,%esp
08676de8 +0x2e:  mov    0x8(%ebp),%eax
08676deb +0x31:  lea    0x6ef78(%eax),%edx
08676df1 +0x37:  lea    -0xc(%ebp),%eax
08676df4 +0x3a:  mov    %edx,0x4(%esp)
08676df8 +0x3e:  mov    %eax,(%esp)
08676dfb +0x41:  call   0869b41e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7c73>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7c73
08676e00 +0x46:  sub    $0x4,%esp
08676e03 +0x49:  lea    -0xc(%ebp),%eax
08676e06 +0x4c:  mov    %eax,0x4(%esp)
08676e0a +0x50:  lea    -0x14(%ebp),%eax
08676e0d +0x53:  mov    %eax,(%esp)
08676e10 +0x56:  call   0869b444 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7c99>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7c99
08676e15 +0x5b:  test   %al,%al
08676e17 +0x5d:  jne    08676e38 <+0x7e>
08676e19 +0x5f:  lea    -0x14(%ebp),%eax
08676e1c +0x62:  mov    %eax,(%esp)
08676e1f +0x65:  call   0869b458 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7cad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7cad
08676e24 +0x6a:  add    $0x4,%eax
08676e27 +0x6d:  mov    %eax,0x4(%esp)
08676e2b +0x71:  mov    0xc(%ebp),%eax
08676e2e +0x74:  mov    %eax,(%esp)
08676e31 +0x77:  call   0869b466 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7cbb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7cbb
08676e36 +0x7c:  jmp    08676e39 <+0x7f>
08676e38 +0x7e:  nop
08676e39 +0x7f:  leave
08676e3a +0x80:  ret
08676e3b +0x81:  nop
```

## 反编译 C

```c
// CUser::GetInstanceRentalInfo @ 0x8676dba

/* CUser::GetInstanceRentalInfo(std::map<unsigned int, std::vector<InstanceRentalSystem::RentalInfo,
   std::allocator<InstanceRentalSystem::RentalInfo> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, std::vector<InstanceRentalSystem::RentalInfo,
   std::allocator<InstanceRentalSystem::RentalInfo> > > > >&, int) */

void __thiscall CUser::GetInstanceRentalInfo(CUser *this,map *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>
  local_18 [4];
  int local_14;
  map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
  local_10 [12];
  
  local_14 = param_2;
  std::
  map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>
          ::operator==(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>
            ::operator->(local_18);
    std::
    map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
    ::operator=((map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
                 *)param_1,(map *)(iVar2 + 4));
  }
  return;
}
```
