# AddUser

`_ZN10CSchoolMgr7AddUserEP5CUser`

`CSchoolMgr::AddUser(CUser*)`

| 类 | 地址 |
|---|---|
| `CSchoolMgr` | `0x085683a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085683a0  _ZN10CSchoolMgr7AddUserEP5CUser
#           CSchoolMgr::AddUser(CUser*)
# range [0x085683a0, 0x085684bb]
085683a0 +0x000:  push   %ebp
085683a1 +0x001:  mov    %esp,%ebp
085683a3 +0x003:  sub    $0x48,%esp
085683a6 +0x006:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085683ab +0x00b:  mov    %eax,(%esp)
085683ae +0x00e:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
085683b3 +0x013:  xor    $0x1,%eax
085683b6 +0x016:  test   %al,%al
085683b8 +0x018:  jne    085684b9 <+0x119>
085683be +0x01e:  mov    0xc(%ebp),%eax
085683c1 +0x021:  mov    %eax,0x4(%esp)
085683c5 +0x025:  mov    0x8(%ebp),%eax
085683c8 +0x028:  mov    %eax,(%esp)
085683cb +0x02b:  call   08567fe8 <_ZN10CSchoolMgr19SendBroadcastUserInEP5CUser>  ; CSchoolMgr::SendBroadcastUserIn(CUser*)
085683d0 +0x030:  mov    0xc(%ebp),%eax
085683d3 +0x033:  mov    %eax,(%esp)
085683d6 +0x036:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
085683db +0x03b:  mov    %eax,-0x30(%ebp)
085683de +0x03e:  mov    0x8(%ebp),%edx
085683e1 +0x041:  lea    -0x34(%ebp),%eax
085683e4 +0x044:  lea    -0x30(%ebp),%ecx
085683e7 +0x047:  mov    %ecx,0x8(%esp)
085683eb +0x04b:  mov    %edx,0x4(%esp)
085683ef +0x04f:  mov    %eax,(%esp)
085683f2 +0x052:  call   080e25f6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x39c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x39c
085683f7 +0x057:  sub    $0x4,%esp
085683fa +0x05a:  mov    0x8(%ebp),%edx
085683fd +0x05d:  lea    -0x2c(%ebp),%eax
08568400 +0x060:  mov    %edx,0x4(%esp)
08568404 +0x064:  mov    %eax,(%esp)
08568407 +0x067:  call   080e2622 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3c8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3c8
0856840c +0x06c:  sub    $0x4,%esp
0856840f +0x06f:  lea    -0x2c(%ebp),%eax
08568412 +0x072:  mov    %eax,0x4(%esp)
08568416 +0x076:  lea    -0x34(%ebp),%eax
08568419 +0x079:  mov    %eax,(%esp)
0856841c +0x07c:  call   080e290a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x6b0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x6b0
08568421 +0x081:  test   %al,%al
08568423 +0x083:  je     0856843b <+0x9b>
08568425 +0x085:  lea    -0x34(%ebp),%eax
08568428 +0x088:  mov    %eax,(%esp)
0856842b +0x08b:  call   080e26b8 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x45e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x45e
08568430 +0x090:  mov    0x4(%eax),%edx
08568433 +0x093:  add    $0x1,%edx
08568436 +0x096:  mov    %edx,0x4(%eax)
08568439 +0x099:  jmp    085684ba <+0x11a>
0856843b +0x09b:  movl   $0x1,-0x10(%ebp)
08568442 +0x0a2:  mov    0xc(%ebp),%eax
08568445 +0x0a5:  mov    %eax,(%esp)
08568448 +0x0a8:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
0856844d +0x0ad:  mov    %eax,-0xc(%ebp)
08568450 +0x0b0:  lea    -0x18(%ebp),%eax
08568453 +0x0b3:  lea    -0x10(%ebp),%edx
08568456 +0x0b6:  mov    %edx,0x8(%esp)
0856845a +0x0ba:  lea    -0xc(%ebp),%edx
0856845d +0x0bd:  mov    %edx,0x4(%esp)
08568461 +0x0c1:  mov    %eax,(%esp)
08568464 +0x0c4:  call   08569d40 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x170a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x170a
08568469 +0x0c9:  sub    $0x4,%esp
0856846c +0x0cc:  lea    -0x18(%ebp),%eax
0856846f +0x0cf:  mov    %eax,0x4(%esp)
08568473 +0x0d3:  lea    -0x20(%ebp),%eax
08568476 +0x0d6:  mov    %eax,(%esp)
08568479 +0x0d9:  call   082ac238 <_GLOBAL__I__ZN4CLog5this_E+0x865f>  ; global constructors keyed to CLog::this_+0x865f
0856847e +0x0de:  mov    0x8(%ebp),%edx
08568481 +0x0e1:  lea    -0x28(%ebp),%eax
08568484 +0x0e4:  lea    -0x20(%ebp),%ecx
08568487 +0x0e7:  mov    %ecx,0x8(%esp)
0856848b +0x0eb:  mov    %edx,0x4(%esp)
0856848f +0x0ef:  mov    %eax,(%esp)
08568492 +0x0f2:  call   080e268c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x432>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x432
08568497 +0x0f7:  sub    $0x4,%esp
0856849a +0x0fa:  mov    0xc(%ebp),%eax
0856849d +0x0fd:  mov    %eax,(%esp)
085684a0 +0x100:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
085684a5 +0x105:  mov    0x8(%ebp),%edx
085684a8 +0x108:  add    $0x18,%edx
085684ab +0x10b:  mov    %eax,0x4(%esp)
085684af +0x10f:  mov    %edx,(%esp)
085684b2 +0x112:  call   08568a3e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x408>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x408
085684b7 +0x117:  jmp    085684ba <+0x11a>
085684b9 +0x119:  nop
085684ba +0x11a:  leave
085684bb +0x11b:  ret
```

## 反编译 C

```c
// CSchoolMgr::AddUser @ 0x85683a0

/* CSchoolMgr::AddUser(CUser*) */

void __thiscall CSchoolMgr::AddUser(CSchoolMgr *this,CUser *param_1)

{
  char cVar1;
  GameWorld *this_00;
  int iVar2;
  uint uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> local_38 [4];
  undefined4 local_34;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_30 [4];
  pair local_2c [8];
  pair<unsigned_int_const,unsigned_int> local_24 [8];
  uint local_1c [2];
  undefined4 local_14;
  int local_10 [3];
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsSchoolPvPChannel(this_00);
  if (cVar1 == '\x01') {
    SendBroadcastUserIn(this,param_1);
    local_34 = CUser::GetSchoolNo(param_1);
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::find((uint *)local_38);
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::end(local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                      (local_38,(_Rb_tree_iterator *)local_30);
    if (cVar1 == '\0') {
      local_14 = 1;
      local_10[0] = CUser::GetSchoolNo(param_1);
      std::make_pair<unsigned_int,int>(local_1c,local_10);
      std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int,int>(local_24,(pair *)local_1c);
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::insert(local_2c);
      uVar3 = CUser::GetSchoolNo(param_1);
      CSchoolArea::AddSchoolArea((CSchoolArea *)(this + 0x18),uVar3);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                        (local_38);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  return;
}
```
