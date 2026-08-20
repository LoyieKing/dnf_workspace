# find_pvp_masterid_walkingout_me

`_ZN5CUser31find_pvp_masterid_walkingout_meEj`

`CUser::find_pvp_masterid_walkingout_me(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865cec0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865cec0  _ZN5CUser31find_pvp_masterid_walkingout_meEj
#           CUser::find_pvp_masterid_walkingout_me(unsigned int)
# range [0x0865cec0, 0x0865cf41]
0865cec0 +0x00:  push   %ebp
0865cec1 +0x01:  mov    %esp,%ebp
0865cec3 +0x03:  sub    $0x28,%esp
0865cec6 +0x06:  mov    0x8(%ebp),%eax
0865cec9 +0x09:  add    $0x8cfe4,%eax
0865cece +0x0e:  mov    %eax,(%esp)
0865ced1 +0x11:  call   0869b0f6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x794b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x794b
0865ced6 +0x16:  test   %al,%al
0865ced8 +0x18:  je     0865cee1 <+0x21>
0865ceda +0x1a:  mov    $0x0,%eax
0865cedf +0x1f:  jmp    0865cf40 <+0x80>
0865cee1 +0x21:  mov    0x8(%ebp),%eax
0865cee4 +0x24:  lea    0x8cfe4(%eax),%ecx
0865ceea +0x2a:  lea    -0x10(%ebp),%eax
0865ceed +0x2d:  lea    0xc(%ebp),%edx
0865cef0 +0x30:  mov    %edx,0x8(%esp)
0865cef4 +0x34:  mov    %ecx,0x4(%esp)
0865cef8 +0x38:  mov    %eax,(%esp)
0865cefb +0x3b:  call   08111332 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x844>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x844
0865cf00 +0x40:  sub    $0x4,%esp
0865cf03 +0x43:  mov    0x8(%ebp),%eax
0865cf06 +0x46:  lea    0x8cfe4(%eax),%edx
0865cf0c +0x4c:  lea    -0xc(%ebp),%eax
0865cf0f +0x4f:  mov    %edx,0x4(%esp)
0865cf13 +0x53:  mov    %eax,(%esp)
0865cf16 +0x56:  call   08111278 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x78a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x78a
0865cf1b +0x5b:  sub    $0x4,%esp
0865cf1e +0x5e:  lea    -0xc(%ebp),%eax
0865cf21 +0x61:  mov    %eax,0x4(%esp)
0865cf25 +0x65:  lea    -0x10(%ebp),%eax
0865cf28 +0x68:  mov    %eax,(%esp)
0865cf2b +0x6b:  call   081ab76c <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0xbe>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0xbe
0865cf30 +0x70:  test   %al,%al
0865cf32 +0x72:  je     0865cf3b <+0x7b>
0865cf34 +0x74:  mov    $0x0,%eax
0865cf39 +0x79:  jmp    0865cf40 <+0x80>
0865cf3b +0x7b:  mov    $0x1,%eax
0865cf40 +0x80:  leave
0865cf41 +0x81:  ret
```

## 反编译 C

```c
// CUser::find_pvp_masterid_walkingout_me @ 0x865cec0

/* CUser::find_pvp_masterid_walkingout_me(unsigned int) */

undefined4 CUser::find_pvp_masterid_walkingout_me(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  _Rb_tree_const_iterator<unsigned_int> local_14 [4];
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_10 [12];
  
  cVar1 = std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::empty
                    ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)
                     (param_1 + 0x8cfe4));
  if (cVar1 == '\0') {
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::find
              ((uint *)local_14);
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<unsigned_int>::operator==
                      (local_14,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
