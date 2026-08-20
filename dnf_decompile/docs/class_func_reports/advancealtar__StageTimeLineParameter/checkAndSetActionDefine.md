# checkAndSetActionDefine

`_ZN12advancealtar22StageTimeLineParameter23checkAndSetActionDefineERNS_8TimeLineERKSt3mapIiNS_12ActionDefineESt4lessIiESaISt4pairIKiS4_EEE`

`advancealtar::StageTimeLineParameter::checkAndSetActionDefine(advancealtar::TimeLine&, std::map<int, advancealtar::ActionDefine, std::less<int>, std::allocator<std::pair<int const, advancealtar::ActionDefine> > > const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageTimeLineParameter` | `0x0889a032` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889a032  _ZN12advancealtar22StageTimeLineParameter23checkAndSetActionDefineERNS_8TimeLineERKSt3mapIiNS_12ActionDefineESt4lessIiESaISt4pairIKiS4_EEE
#           advancealtar::StageTimeLineParameter::checkAndSetActionDefine(advancealtar::TimeLine&, std::map<int, advancealtar::ActionDefine, std::less<int>, std::allocator<std::pair<int const, advancealtar::ActionDefine> > > const&)
# range [0x0889a032, 0x0889a21d]
0889a032 +0x000:  push   %ebp
0889a033 +0x001:  mov    %esp,%ebp
0889a035 +0x003:  push   %ebx
0889a036 +0x004:  sub    $0x54,%esp
0889a039 +0x007:  movl   $0x0,-0x14(%ebp)
0889a040 +0x00e:  mov    0x8(%ebp),%edx
0889a043 +0x011:  lea    -0x2c(%ebp),%eax
0889a046 +0x014:  mov    %edx,0x4(%esp)
0889a04a +0x018:  mov    %eax,(%esp)
0889a04d +0x01b:  call   083a77a4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x41770>  ; global constructors keyed to CServerEvent::m_nExpRate+0x41770
0889a052 +0x020:  sub    $0x4,%esp
0889a055 +0x023:  movl   $0x0,-0x10(%ebp)
0889a05c +0x02a:  jmp    0889a1dc <+0x1aa>
0889a061 +0x02f:  lea    -0x2c(%ebp),%eax
0889a064 +0x032:  mov    %eax,(%esp)
0889a067 +0x035:  call   0889bf12 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x5db>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x5db
0889a06c +0x03a:  add    $0x8,%eax
0889a06f +0x03d:  mov    %eax,-0xc(%ebp)
0889a072 +0x040:  lea    -0x30(%ebp),%eax
0889a075 +0x043:  mov    -0xc(%ebp),%edx
0889a078 +0x046:  mov    %edx,0x4(%esp)
0889a07c +0x04a:  mov    %eax,(%esp)
0889a07f +0x04d:  call   083ee294 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x88260>  ; global constructors keyed to CServerEvent::m_nExpRate+0x88260
0889a084 +0x052:  sub    $0x4,%esp
0889a087 +0x055:  jmp    0889a13f <+0x10d>
0889a08c +0x05a:  lea    -0x30(%ebp),%eax
0889a08f +0x05d:  mov    %eax,(%esp)
0889a092 +0x060:  call   0889bf7c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x645>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x645
0889a097 +0x065:  mov    %eax,%edx
0889a099 +0x067:  lea    -0x40(%ebp),%eax
0889a09c +0x06a:  mov    %edx,0x8(%esp)
0889a0a0 +0x06e:  mov    0xc(%ebp),%edx
0889a0a3 +0x071:  mov    %edx,0x4(%esp)
0889a0a7 +0x075:  mov    %eax,(%esp)
0889a0aa +0x078:  call   0889bf86 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x64f>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x64f
0889a0af +0x07d:  sub    $0x4,%esp
0889a0b2 +0x080:  lea    -0x20(%ebp),%eax
0889a0b5 +0x083:  mov    0xc(%ebp),%edx
0889a0b8 +0x086:  mov    %edx,0x4(%esp)
0889a0bc +0x08a:  mov    %eax,(%esp)
0889a0bf +0x08d:  call   0889bfb2 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x67b>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x67b
0889a0c4 +0x092:  sub    $0x4,%esp
0889a0c7 +0x095:  lea    -0x20(%ebp),%eax
0889a0ca +0x098:  mov    %eax,0x4(%esp)
0889a0ce +0x09c:  lea    -0x40(%ebp),%eax
0889a0d1 +0x09f:  mov    %eax,(%esp)
0889a0d4 +0x0a2:  call   0889bfd8 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x6a1>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x6a1
0889a0d9 +0x0a7:  test   %al,%al
0889a0db +0x0a9:  je     0889a104 <+0xd2>
0889a0dd +0x0ab:  lea    -0x30(%ebp),%eax
0889a0e0 +0x0ae:  mov    %eax,(%esp)
0889a0e3 +0x0b1:  call   0889bf7c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x645>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x645
0889a0e8 +0x0b6:  mov    (%eax),%eax
0889a0ea +0x0b8:  mov    %eax,0x4(%esp)
0889a0ee +0x0bc:  movl   $"advancealtar : not found ActionDefine Id = %d\n",(%esp)
0889a0f5 +0x0c3:  call   0807db60 <_init+0x458>
0889a0fa +0x0c8:  mov    $0x0,%eax
0889a0ff +0x0cd:  jmp    0889a219 <+0x1e7>
0889a104 +0x0d2:  lea    -0x30(%ebp),%eax
0889a107 +0x0d5:  mov    %eax,(%esp)
0889a10a +0x0d8:  call   0889bf7c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x645>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x645
0889a10f +0x0dd:  mov    %eax,%ebx
0889a111 +0x0df:  lea    -0x40(%ebp),%eax
0889a114 +0x0e2:  mov    %eax,(%esp)
0889a117 +0x0e5:  call   0889bfec <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x6b5>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x6b5
0889a11c +0x0ea:  add    $0x4,%eax
0889a11f +0x0ed:  mov    %eax,0x4(%ebx)
0889a122 +0x0f0:  lea    -0x1c(%ebp),%eax
0889a125 +0x0f3:  movl   $0x0,0x8(%esp)
0889a12d +0x0fb:  lea    -0x30(%ebp),%edx
0889a130 +0x0fe:  mov    %edx,0x4(%esp)
0889a134 +0x102:  mov    %eax,(%esp)
0889a137 +0x105:  call   0889bf48 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x611>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x611
0889a13c +0x10a:  sub    $0x4,%esp
0889a13f +0x10d:  lea    -0x24(%ebp),%eax
0889a142 +0x110:  mov    -0xc(%ebp),%edx
0889a145 +0x113:  mov    %edx,0x4(%esp)
0889a149 +0x117:  mov    %eax,(%esp)
0889a14c +0x11a:  call   083ee314 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x882e0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x882e0
0889a151 +0x11f:  sub    $0x4,%esp
0889a154 +0x122:  lea    -0x24(%ebp),%eax
0889a157 +0x125:  mov    %eax,0x4(%esp)
0889a15b +0x129:  lea    -0x30(%ebp),%eax
0889a15e +0x12c:  mov    %eax,(%esp)
0889a161 +0x12f:  call   0889bf1c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x5e5>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x5e5
0889a166 +0x134:  test   %al,%al
0889a168 +0x136:  jne    0889a08c <+0x5a>
0889a16e +0x13c:  lea    -0x3c(%ebp),%eax
0889a171 +0x13f:  mov    %eax,(%esp)
0889a174 +0x142:  call   0889b954 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x1d>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x1d
0889a179 +0x147:  mov    -0x14(%ebp),%eax
0889a17c +0x14a:  mov    %eax,-0x38(%ebp)
0889a17f +0x14d:  mov    -0x10(%ebp),%eax
0889a182 +0x150:  mov    %eax,-0x3c(%ebp)
0889a185 +0x153:  lea    -0x2c(%ebp),%eax
0889a188 +0x156:  mov    %eax,(%esp)
0889a18b +0x159:  call   0889bf12 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x5db>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x5db
0889a190 +0x15e:  mov    0x4(%eax),%eax
0889a193 +0x161:  mov    %eax,-0x34(%ebp)
0889a196 +0x164:  mov    0x8(%ebp),%eax
0889a199 +0x167:  lea    0x10(%eax),%edx
0889a19c +0x16a:  lea    -0x3c(%ebp),%eax
0889a19f +0x16d:  mov    %eax,0x4(%esp)
0889a1a3 +0x171:  mov    %edx,(%esp)
0889a1a6 +0x174:  call   0889bffa <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x6c3>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x6c3
0889a1ab +0x179:  lea    -0x2c(%ebp),%eax
0889a1ae +0x17c:  mov    %eax,(%esp)
0889a1b1 +0x17f:  call   0889bf12 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x5db>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x5db
0889a1b6 +0x184:  mov    (%eax),%eax
0889a1b8 +0x186:  add    %eax,-0x14(%ebp)
0889a1bb +0x189:  lea    -0x18(%ebp),%eax
0889a1be +0x18c:  movl   $0x0,0x8(%esp)
0889a1c6 +0x194:  lea    -0x2c(%ebp),%edx
0889a1c9 +0x197:  mov    %edx,0x4(%esp)
0889a1cd +0x19b:  mov    %eax,(%esp)
0889a1d0 +0x19e:  call   0889bede <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x5a7>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x5a7
0889a1d5 +0x1a3:  sub    $0x4,%esp
0889a1d8 +0x1a6:  addl   $0x1,-0x10(%ebp)
0889a1dc +0x1aa:  mov    0x8(%ebp),%edx
0889a1df +0x1ad:  lea    -0x28(%ebp),%eax
0889a1e2 +0x1b0:  mov    %edx,0x4(%esp)
0889a1e6 +0x1b4:  mov    %eax,(%esp)
0889a1e9 +0x1b7:  call   083a7824 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x417f0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x417f0
0889a1ee +0x1bc:  sub    $0x4,%esp
0889a1f1 +0x1bf:  lea    -0x28(%ebp),%eax
0889a1f4 +0x1c2:  mov    %eax,0x4(%esp)
0889a1f8 +0x1c6:  lea    -0x2c(%ebp),%eax
0889a1fb +0x1c9:  mov    %eax,(%esp)
0889a1fe +0x1cc:  call   083e0bc5 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7ab91>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7ab91
0889a203 +0x1d1:  test   %al,%al
0889a205 +0x1d3:  jne    0889a061 <+0x2f>
0889a20b +0x1d9:  mov    0x8(%ebp),%eax
0889a20e +0x1dc:  mov    -0x14(%ebp),%edx
0889a211 +0x1df:  mov    %edx,0xc(%eax)
0889a214 +0x1e2:  mov    $0x1,%eax
0889a219 +0x1e7:  mov    -0x4(%ebp),%ebx
0889a21c +0x1ea:  leave
0889a21d +0x1eb:  ret
```

## 反编译 C

```c
// advancealtar::StageTimeLineParameter::checkAndSetActionDefine @ 0x889a032

/* advancealtar::StageTimeLineParameter::checkAndSetActionDefine(advancealtar::TimeLine&,
   std::map<int, advancealtar::ActionDefine, std::less<int>, std::allocator<std::pair<int const,
   advancealtar::ActionDefine> > > const&) */

undefined4
advancealtar::StageTimeLineParameter::checkAndSetActionDefine(TimeLine *param_1,map *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::ActionDefine>> local_44 [4];
  int local_40;
  int local_3c;
  undefined4 local_38;
  __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
  local_34 [4];
  __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator local_28 [4];
  map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
  local_24 [4];
  __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
  local_20 [4];
  __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
  local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::begin();
  local_14 = 0;
  do {
    std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::end();
    bVar2 = __gnu_cxx::operator!=(local_30,local_2c);
    if (!bVar2) {
      *(int *)(param_1 + 0xc) = local_18;
      return 1;
    }
    local_10 = __gnu_cxx::
               __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
               ::operator->(local_30);
    local_10 = local_10 + 8;
    std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::begin();
    while( true ) {
      std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::end();
      bVar2 = __gnu_cxx::operator!=(local_34,local_28);
      if (!bVar2) break;
      uVar3 = __gnu_cxx::
              __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
              ::operator->(local_34);
      std::
      map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
      ::find((int *)local_44);
      std::
      map<int,advancealtar::ActionDefine,std::less<int>,std::allocator<std::pair<int_const,advancealtar::ActionDefine>>>
      ::end(local_24);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::ActionDefine>>::
              operator==(local_44,(_Rb_tree_const_iterator *)local_24);
      if (cVar1 != '\0') {
        puVar4 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
                 ::operator->(local_34);
        printf("advancealtar : not found ActionDefine Id = %d\n",*puVar4,uVar3);
        return 0;
      }
      iVar6 = __gnu_cxx::
              __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
              ::operator->(local_34);
      iVar5 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::ActionDefine>>::
              operator->(local_44);
      *(int *)(iVar6 + 4) = iVar5 + 4;
      __gnu_cxx::
      __normal_iterator<advancealtar::_ActionAssign*,std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>>
      ::operator++(local_20,(int)local_34);
    }
    _PhaseSummary::_PhaseSummary((_PhaseSummary *)&local_40);
    local_3c = local_18;
    local_40 = local_14;
    iVar6 = __gnu_cxx::
            __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
            ::operator->(local_30);
    local_38 = *(undefined4 *)(iVar6 + 4);
    std::vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>>::push_back
              ((vector<advancealtar::_PhaseSummary,std::allocator<advancealtar::_PhaseSummary>> *)
               (param_1 + 0x10),(_PhaseSummary *)&local_40);
    piVar7 = (int *)__gnu_cxx::
                    __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
                    ::operator->(local_30);
    local_18 = local_18 + *piVar7;
    __gnu_cxx::
    __normal_iterator<advancealtar::Phase*,std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>>
    ::operator++(local_1c,(int)local_30);
    local_14 = local_14 + 1;
  } while( true );
}
```
