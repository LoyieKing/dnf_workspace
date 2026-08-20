# DeleteCurrentCharacRentalItemInfo

`_ZN5CUser33DeleteCurrentCharacRentalItemInfoEi`

`CUser::DeleteCurrentCharacRentalItemInfo(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08677050` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08677050  _ZN5CUser33DeleteCurrentCharacRentalItemInfoEi
#           CUser::DeleteCurrentCharacRentalItemInfo(int)
# range [0x08677050, 0x08677165]
08677050 +0x000:  push   %ebp
08677051 +0x001:  mov    %esp,%ebp
08677053 +0x003:  sub    $0x38,%esp
08677056 +0x006:  mov    0x8(%ebp),%eax
08677059 +0x009:  mov    %eax,(%esp)
0867705c +0x00c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08677061 +0x011:  mov    %eax,-0xc(%ebp)
08677064 +0x014:  cmpl   $0x0,-0xc(%ebp)
08677068 +0x018:  je     0867715a <+0x10a>
0867706e +0x01e:  mov    -0xc(%ebp),%eax
08677071 +0x021:  mov    (%eax),%eax
08677073 +0x023:  mov    %eax,-0x1c(%ebp)
08677076 +0x026:  mov    -0x1c(%ebp),%eax
08677079 +0x029:  test   %eax,%eax
0867707b +0x02b:  je     0867715d <+0x10d>
08677081 +0x031:  mov    0xc(%ebp),%eax
08677084 +0x034:  mov    %eax,-0x18(%ebp)
08677087 +0x037:  mov    0x8(%ebp),%eax
0867708a +0x03a:  lea    0x6ef78(%eax),%ecx
08677090 +0x040:  lea    -0x20(%ebp),%eax
08677093 +0x043:  lea    -0x18(%ebp),%edx
08677096 +0x046:  mov    %edx,0x8(%esp)
0867709a +0x04a:  mov    %ecx,0x4(%esp)
0867709e +0x04e:  mov    %eax,(%esp)
086770a1 +0x051:  call   0869b3f2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7c47>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7c47
086770a6 +0x056:  sub    $0x4,%esp
086770a9 +0x059:  mov    0x8(%ebp),%eax
086770ac +0x05c:  lea    0x6ef78(%eax),%edx
086770b2 +0x062:  lea    -0x14(%ebp),%eax
086770b5 +0x065:  mov    %edx,0x4(%esp)
086770b9 +0x069:  mov    %eax,(%esp)
086770bc +0x06c:  call   0869b41e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7c73>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7c73
086770c1 +0x071:  sub    $0x4,%esp
086770c4 +0x074:  lea    -0x14(%ebp),%eax
086770c7 +0x077:  mov    %eax,0x4(%esp)
086770cb +0x07b:  lea    -0x20(%ebp),%eax
086770ce +0x07e:  mov    %eax,(%esp)
086770d1 +0x081:  call   0869b444 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7c99>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7c99
086770d6 +0x086:  test   %al,%al
086770d8 +0x088:  jne    08677160 <+0x110>
086770de +0x08e:  lea    -0x20(%ebp),%eax
086770e1 +0x091:  mov    %eax,(%esp)
086770e4 +0x094:  call   0869b458 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7cad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7cad
086770e9 +0x099:  lea    0x4(%eax),%ecx
086770ec +0x09c:  lea    -0x24(%ebp),%eax
086770ef +0x09f:  lea    -0x1c(%ebp),%edx
086770f2 +0x0a2:  mov    %edx,0x8(%esp)
086770f6 +0x0a6:  mov    %ecx,0x4(%esp)
086770fa +0x0aa:  mov    %eax,(%esp)
086770fd +0x0ad:  call   0869b9da <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x822f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x822f
08677102 +0x0b2:  sub    $0x4,%esp
08677105 +0x0b5:  lea    -0x20(%ebp),%eax
08677108 +0x0b8:  mov    %eax,(%esp)
0867710b +0x0bb:  call   0869b458 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7cad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7cad
08677110 +0x0c0:  lea    0x4(%eax),%edx
08677113 +0x0c3:  lea    -0x10(%ebp),%eax
08677116 +0x0c6:  mov    %edx,0x4(%esp)
0867711a +0x0ca:  mov    %eax,(%esp)
0867711d +0x0cd:  call   0869ba06 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x825b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x825b
08677122 +0x0d2:  sub    $0x4,%esp
08677125 +0x0d5:  lea    -0x10(%ebp),%eax
08677128 +0x0d8:  mov    %eax,0x4(%esp)
0867712c +0x0dc:  lea    -0x24(%ebp),%eax
0867712f +0x0df:  mov    %eax,(%esp)
08677132 +0x0e2:  call   0869ba2c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8281>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8281
08677137 +0x0e7:  test   %al,%al
08677139 +0x0e9:  jne    08677163 <+0x113>
0867713b +0x0eb:  lea    -0x20(%ebp),%eax
0867713e +0x0ee:  mov    %eax,(%esp)
08677141 +0x0f1:  call   0869b458 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7cad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7cad
08677146 +0x0f6:  lea    0x4(%eax),%edx
08677149 +0x0f9:  mov    -0x24(%ebp),%eax
0867714c +0x0fc:  mov    %eax,0x4(%esp)
08677150 +0x100:  mov    %edx,(%esp)
08677153 +0x103:  call   0869ba40 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8295>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8295
08677158 +0x108:  jmp    08677164 <+0x114>
0867715a +0x10a:  nop
0867715b +0x10b:  jmp    08677164 <+0x114>
0867715d +0x10d:  nop
0867715e +0x10e:  jmp    08677164 <+0x114>
08677160 +0x110:  nop
08677161 +0x111:  jmp    08677164 <+0x114>
08677163 +0x113:  nop
08677164 +0x114:  leave
08677165 +0x115:  ret
```

## 反编译 C

```c
// CUser::DeleteCurrentCharacRentalItemInfo @ 0x8677050

/* CUser::DeleteCurrentCharacRentalItemInfo(int) */

void __thiscall CUser::DeleteCurrentCharacRentalItemInfo(CUser *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint local_28;
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>
  local_24 [4];
  int local_20;
  int local_1c;
  map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
  local_18 [4];
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  local_14 [4];
  int *local_10;
  
  local_10 = (int *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if ((local_10 != (int *)0x0) && (local_20 = *local_10, local_20 != 0)) {
    local_1c = param_1;
    std::
    map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
    ::find((uint *)local_24);
    std::
    map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>
            ::operator==(local_24,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') {
      std::
      _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>
      ::operator->(local_24);
      std::
      map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
      ::find(&local_28);
      std::
      _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>
      ::operator->(local_24);
      std::
      map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
      ::end(local_14);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
              ::operator==((_Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>
                            *)&local_28,(_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') {
        iVar2 = std::
                _Rb_tree_iterator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>
                ::operator->(local_24);
        std::
        map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
        ::erase((map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
                 *)(iVar2 + 4),local_28);
      }
    }
  }
  return;
}
```
