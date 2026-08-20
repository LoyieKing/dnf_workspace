# CheckEventInfo

`_ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser`

`GiveGrowCreatureEvent::CheckEventInfo(CUser&)`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b6e7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b6e7a  _ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser
#           GiveGrowCreatureEvent::CheckEventInfo(CUser&)
# range [0x081b6e7a, 0x081b6f75]
081b6e7a +0x00:  push   %ebp
081b6e7b +0x01:  mov    %esp,%ebp
081b6e7d +0x03:  sub    $0x38,%esp
081b6e80 +0x06:  mov    0xc(%ebp),%eax
081b6e83 +0x09:  mov    %eax,(%esp)
081b6e86 +0x0c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081b6e8b +0x11:  mov    %eax,-0x14(%ebp)
081b6e8e +0x14:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081b6e95 +0x1b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081b6e9a +0x20:  mov    %eax,-0x10(%ebp)
081b6e9d +0x23:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b6ea2 +0x28:  mov    -0x10(%ebp),%edx
081b6ea5 +0x2b:  mov    %edx,0x8(%esp)
081b6ea9 +0x2f:  mov    -0x14(%ebp),%edx
081b6eac +0x32:  mov    %edx,0x4(%esp)
081b6eb0 +0x36:  mov    %eax,(%esp)
081b6eb3 +0x39:  call   08365afa <_ZN12CDataManager35isAvailableGiveGrowCreatureEventJobEii>  ; CDataManager::isAvailableGiveGrowCreatureEventJob(int, int)
081b6eb8 +0x3e:  xor    $0x1,%eax
081b6ebb +0x41:  test   %al,%al
081b6ebd +0x43:  je     081b6ec9 <+0x4f>
081b6ebf +0x45:  mov    $0x3,%eax
081b6ec4 +0x4a:  jmp    081b6f73 <+0xf9>
081b6ec9 +0x4f:  mov    0xc(%ebp),%eax
081b6ecc +0x52:  mov    %eax,(%esp)
081b6ecf +0x55:  call   08691dbc <_ZN5CUser26getGrowthCreatureEventdataEv>  ; CUser::getGrowthCreatureEventdata()
081b6ed4 +0x5a:  mov    %eax,-0xc(%ebp)
081b6ed7 +0x5d:  mov    -0xc(%ebp),%eax
081b6eda +0x60:  mov    %eax,(%esp)
081b6edd +0x63:  call   081b7546 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1c5>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1c5
081b6ee2 +0x68:  test   %al,%al
081b6ee4 +0x6a:  je     081b6ef0 <+0x76>
081b6ee6 +0x6c:  mov    $0x0,%eax
081b6eeb +0x71:  jmp    081b6f73 <+0xf9>
081b6ef0 +0x76:  mov    -0xc(%ebp),%edx
081b6ef3 +0x79:  lea    -0x1c(%ebp),%eax
081b6ef6 +0x7c:  mov    %edx,0x4(%esp)
081b6efa +0x80:  mov    %eax,(%esp)
081b6efd +0x83:  call   081b758a <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x209>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x209
081b6f02 +0x88:  sub    $0x4,%esp
081b6f05 +0x8b:  mov    -0xc(%ebp),%edx
081b6f08 +0x8e:  lea    -0x20(%ebp),%eax
081b6f0b +0x91:  mov    %edx,0x4(%esp)
081b6f0f +0x95:  mov    %eax,(%esp)
081b6f12 +0x98:  call   081b75ae <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x22d>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x22d
081b6f17 +0x9d:  sub    $0x4,%esp
081b6f1a +0xa0:  jmp    081b6f58 <+0xde>
081b6f1c +0xa2:  lea    -0x1c(%ebp),%eax
081b6f1f +0xa5:  mov    %eax,(%esp)
081b6f22 +0xa8:  call   081b7634 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x2b3>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x2b3
081b6f27 +0xad:  mov    0x8(%eax),%eax
081b6f2a +0xb0:  cmp    -0x14(%ebp),%eax
081b6f2d +0xb3:  sete   %al
081b6f30 +0xb6:  test   %al,%al
081b6f32 +0xb8:  je     081b6f3b <+0xc1>
081b6f34 +0xba:  mov    $0x3,%eax
081b6f39 +0xbf:  jmp    081b6f73 <+0xf9>
081b6f3b +0xc1:  lea    -0x18(%ebp),%eax
081b6f3e +0xc4:  movl   $0x0,0x8(%esp)
081b6f46 +0xcc:  lea    -0x1c(%ebp),%edx
081b6f49 +0xcf:  mov    %edx,0x4(%esp)
081b6f4d +0xd3:  mov    %eax,(%esp)
081b6f50 +0xd6:  call   081b7600 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x27f>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x27f
081b6f55 +0xdb:  sub    $0x4,%esp
081b6f58 +0xde:  lea    -0x20(%ebp),%eax
081b6f5b +0xe1:  mov    %eax,0x4(%esp)
081b6f5f +0xe5:  lea    -0x1c(%ebp),%eax
081b6f62 +0xe8:  mov    %eax,(%esp)
081b6f65 +0xeb:  call   081b75d4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x253>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x253
081b6f6a +0xf0:  test   %al,%al
081b6f6c +0xf2:  jne    081b6f1c <+0xa2>
081b6f6e +0xf4:  mov    $0x0,%eax
081b6f73 +0xf9:  leave
081b6f74 +0xfa:  ret
081b6f75 +0xfb:  nop
```

## 反编译 C

```c
// GiveGrowCreatureEvent::CheckEventInfo @ 0x81b6e7a

/* GiveGrowCreatureEvent::CheckEventInfo(CUser&) */

undefined4 __thiscall
GiveGrowCreatureEvent::CheckEventInfo(GiveGrowCreatureEvent *this,CUser *param_1)

{
  char cVar1;
  bool bVar2;
  CDataManager *this_00;
  undefined4 uVar3;
  int iVar4;
  __normal_iterator local_24 [4];
  __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
  local_20 [4];
  __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
  local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  
  local_18 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  this_00 = (CDataManager *)G_CDataManager();
  cVar1 = CDataManager::isAvailableGiveGrowCreatureEventJob(this_00,local_18,local_14);
  if (cVar1 == '\x01') {
    local_10 = CUser::getGrowthCreatureEventdata(param_1);
    cVar1 = std::
            vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
            ::empty();
    if (cVar1 == '\0') {
      std::
      vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
      ::begin();
      std::
      vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
      ::end();
      while (bVar2 = __gnu_cxx::operator!=(local_20,local_24), bVar2) {
        iVar4 = __gnu_cxx::
                __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
                ::operator*(local_20);
        if (*(int *)(iVar4 + 8) == local_18) {
          return 3;
        }
        __gnu_cxx::
        __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
        ::operator++(local_1c,(int)local_20);
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 3;
  }
  return uVar3;
}
```
