# DelUser

`_ZN10CSchoolMgr7DelUserEP5CUser`

`CSchoolMgr::DelUser(CUser*)`

| 类 | 地址 |
|---|---|
| `CSchoolMgr` | `0x085684bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085684bc  _ZN10CSchoolMgr7DelUserEP5CUser
#           CSchoolMgr::DelUser(CUser*)
# range [0x085684bc, 0x0856859f]
085684bc +0x00:  push   %ebp
085684bd +0x01:  mov    %esp,%ebp
085684bf +0x03:  sub    $0x28,%esp
085684c2 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085684c7 +0x0b:  mov    %eax,(%esp)
085684ca +0x0e:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
085684cf +0x13:  xor    $0x1,%eax
085684d2 +0x16:  test   %al,%al
085684d4 +0x18:  jne    0856859d <+0xe1>
085684da +0x1e:  mov    0xc(%ebp),%eax
085684dd +0x21:  mov    %eax,0x4(%esp)
085684e1 +0x25:  mov    0x8(%ebp),%eax
085684e4 +0x28:  mov    %eax,(%esp)
085684e7 +0x2b:  call   085681ce <_ZN10CSchoolMgr20SendBroadcastUserOutEP5CUser>  ; CSchoolMgr::SendBroadcastUserOut(CUser*)
085684ec +0x30:  mov    0xc(%ebp),%eax
085684ef +0x33:  mov    %eax,(%esp)
085684f2 +0x36:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
085684f7 +0x3b:  mov    %eax,-0x10(%ebp)
085684fa +0x3e:  mov    0x8(%ebp),%edx
085684fd +0x41:  lea    -0x14(%ebp),%eax
08568500 +0x44:  lea    -0x10(%ebp),%ecx
08568503 +0x47:  mov    %ecx,0x8(%esp)
08568507 +0x4b:  mov    %edx,0x4(%esp)
0856850b +0x4f:  mov    %eax,(%esp)
0856850e +0x52:  call   080e25f6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x39c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x39c
08568513 +0x57:  sub    $0x4,%esp
08568516 +0x5a:  mov    0x8(%ebp),%edx
08568519 +0x5d:  lea    -0xc(%ebp),%eax
0856851c +0x60:  mov    %edx,0x4(%esp)
08568520 +0x64:  mov    %eax,(%esp)
08568523 +0x67:  call   080e2622 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3c8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3c8
08568528 +0x6c:  sub    $0x4,%esp
0856852b +0x6f:  lea    -0xc(%ebp),%eax
0856852e +0x72:  mov    %eax,0x4(%esp)
08568532 +0x76:  lea    -0x14(%ebp),%eax
08568535 +0x79:  mov    %eax,(%esp)
08568538 +0x7c:  call   080e290a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x6b0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x6b0
0856853d +0x81:  test   %al,%al
0856853f +0x83:  je     0856859e <+0xe2>
08568541 +0x85:  lea    -0x14(%ebp),%eax
08568544 +0x88:  mov    %eax,(%esp)
08568547 +0x8b:  call   080e26b8 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x45e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x45e
0856854c +0x90:  mov    0x4(%eax),%edx
0856854f +0x93:  sub    $0x1,%edx
08568552 +0x96:  mov    %edx,0x4(%eax)
08568555 +0x99:  lea    -0x14(%ebp),%eax
08568558 +0x9c:  mov    %eax,(%esp)
0856855b +0x9f:  call   080e26b8 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x45e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x45e
08568560 +0xa4:  mov    0x4(%eax),%eax
08568563 +0xa7:  test   %eax,%eax
08568565 +0xa9:  sete   %al
08568568 +0xac:  test   %al,%al
0856856a +0xae:  je     0856859e <+0xe2>
0856856c +0xb0:  mov    0x8(%ebp),%eax
0856856f +0xb3:  mov    -0x14(%ebp),%edx
08568572 +0xb6:  mov    %edx,0x4(%esp)
08568576 +0xba:  mov    %eax,(%esp)
08568579 +0xbd:  call   080e291e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x6c4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x6c4
0856857e +0xc2:  mov    0xc(%ebp),%eax
08568581 +0xc5:  mov    %eax,(%esp)
08568584 +0xc8:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
08568589 +0xcd:  mov    0x8(%ebp),%edx
0856858c +0xd0:  add    $0x18,%edx
0856858f +0xd3:  mov    %eax,0x4(%esp)
08568593 +0xd7:  mov    %edx,(%esp)
08568596 +0xda:  call   08568a74 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x43e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x43e
0856859b +0xdf:  jmp    0856859e <+0xe2>
0856859d +0xe1:  nop
0856859e +0xe2:  leave
0856859f +0xe3:  ret
```

## 反编译 C

```c
// CSchoolMgr::DelUser @ 0x85684bc

/* CSchoolMgr::DelUser(CUser*) */

void __thiscall CSchoolMgr::DelUser(CSchoolMgr *this,CUser *param_1)

{
  char cVar1;
  GameWorld *this_00;
  int iVar2;
  uint local_18;
  undefined4 local_14;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_10 [12];
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsSchoolPvPChannel(this_00);
  if (cVar1 == '\x01') {
    SendBroadcastUserOut(this,param_1);
    local_14 = CUser::GetSchoolNo(param_1);
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::find(&local_18);
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_18,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 != '\0') {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_18)
      ;
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_18)
      ;
      if (*(int *)(iVar2 + 4) == 0) {
        std::
        map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
        ::erase((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                 *)this,local_18);
        CUser::GetSchoolNo(param_1);
        CSchoolArea::DelSchoolArea((uint)(this + 0x18));
      }
    }
  }
  return;
}
```
