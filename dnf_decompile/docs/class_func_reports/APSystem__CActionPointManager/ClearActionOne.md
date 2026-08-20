# ClearActionOne

`_ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi`

`APSystem::CActionPointManager::ClearActionOne(APSystem::_ActionPoint&, int)`

| 类 | 地址 |
|---|---|
| `APSystem::CActionPointManager` | `0x08121f1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08121f1c  _ZN8APSystem19CActionPointManager14ClearActionOneERNS_12_ActionPointEi
#           APSystem::CActionPointManager::ClearActionOne(APSystem::_ActionPoint&, int)
# range [0x08121f1c, 0x08122103]
08121f1c +0x000:  push   %ebp
08121f1d +0x001:  mov    %esp,%ebp
08121f1f +0x003:  push   %esi
08121f20 +0x004:  push   %ebx
08121f21 +0x005:  sub    $0x40,%esp
08121f24 +0x008:  cmpl   $0x0,0x10(%ebp)
08121f28 +0x00c:  je     08122065 <+0x149>
08121f2e +0x012:  mov    0xc(%ebp),%ebx
08121f31 +0x015:  movzbl &_ZN8APSystem19CActionPointManager7_IsGMOnE,%eax
08121f38 +0x01c:  movzbl %al,%esi
08121f3b +0x01f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08121f40 +0x024:  mov    %esi,0x4(%esp)
08121f44 +0x028:  mov    %eax,(%esp)
08121f47 +0x02b:  call   08122ace <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x41>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x41
08121f4c +0x030:  lea    0x18(%eax),%edx
08121f4f +0x033:  lea    -0x28(%ebp),%eax
08121f52 +0x036:  mov    %ebx,0x8(%esp)
08121f56 +0x03a:  mov    %edx,0x4(%esp)
08121f5a +0x03e:  mov    %eax,(%esp)
08121f5d +0x041:  call   08122cc0 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x233>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x233
08121f62 +0x046:  sub    $0x4,%esp
08121f65 +0x049:  lea    -0x28(%ebp),%eax
08121f68 +0x04c:  mov    %eax,0x4(%esp)
08121f6c +0x050:  lea    -0x2c(%ebp),%eax
08121f6f +0x053:  mov    %eax,(%esp)
08121f72 +0x056:  call   08122cec <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x25f>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x25f
08121f77 +0x05b:  movzbl &_ZN8APSystem19CActionPointManager7_IsGMOnE,%eax
08121f7e +0x062:  movzbl %al,%ebx
08121f81 +0x065:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08121f86 +0x06a:  mov    %ebx,0x4(%esp)
08121f8a +0x06e:  mov    %eax,(%esp)
08121f8d +0x071:  call   08122ace <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x41>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x41
08121f92 +0x076:  lea    0x18(%eax),%edx
08121f95 +0x079:  lea    -0x20(%ebp),%eax
08121f98 +0x07c:  mov    %edx,0x4(%esp)
08121f9c +0x080:  mov    %eax,(%esp)
08121f9f +0x083:  call   08122cfc <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x26f>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x26f
08121fa4 +0x088:  sub    $0x4,%esp
08121fa7 +0x08b:  lea    -0x20(%ebp),%eax
08121faa +0x08e:  mov    %eax,0x4(%esp)
08121fae +0x092:  lea    -0x24(%ebp),%eax
08121fb1 +0x095:  mov    %eax,(%esp)
08121fb4 +0x098:  call   08122cec <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x25f>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x25f
08121fb9 +0x09d:  lea    -0x24(%ebp),%eax
08121fbc +0x0a0:  mov    %eax,0x4(%esp)
08121fc0 +0x0a4:  lea    -0x2c(%ebp),%eax
08121fc3 +0x0a7:  mov    %eax,(%esp)
08121fc6 +0x0aa:  call   08122d22 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x295>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x295
08121fcb +0x0af:  test   %al,%al
08121fcd +0x0b1:  je     08121fd9 <+0xbd>
08121fcf +0x0b3:  mov    $0x0,%eax
08121fd4 +0x0b8:  jmp    081220fa <+0x1de>
08121fd9 +0x0bd:  lea    -0x2c(%ebp),%eax
08121fdc +0x0c0:  mov    %eax,(%esp)
08121fdf +0x0c3:  call   08122d36 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x2a9>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x2a9
08121fe4 +0x0c8:  mov    0x4(%eax),%eax
08121fe7 +0x0cb:  mov    %eax,-0x1c(%ebp)
08121fea +0x0ce:  cmpl   $0x0,-0x1c(%ebp)
08121fee +0x0d2:  jne    08121ffa <+0xde>
08121ff0 +0x0d4:  mov    $0x0,%eax
08121ff5 +0x0d9:  jmp    081220fa <+0x1de>
08121ffa +0x0de:  movb   $0x0,-0x15(%ebp)
08121ffe +0x0e2:  mov    -0x1c(%ebp),%eax
08122001 +0x0e5:  add    $0x14,%eax
08122004 +0x0e8:  mov    %eax,(%esp)
08122007 +0x0eb:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0812200c +0x0f0:  mov    %eax,-0x14(%ebp)
0812200f +0x0f3:  movl   $0x0,-0x10(%ebp)
08122016 +0x0fa:  jmp    08122043 <+0x127>
08122018 +0x0fc:  mov    -0x1c(%ebp),%eax
0812201b +0x0ff:  lea    0x14(%eax),%edx
0812201e +0x102:  mov    -0x10(%ebp),%eax
08122021 +0x105:  mov    %eax,0x4(%esp)
08122025 +0x109:  mov    %edx,(%esp)
08122028 +0x10c:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
0812202d +0x111:  mov    (%eax),%eax
0812202f +0x113:  cmp    0x10(%ebp),%eax
08122032 +0x116:  sete   %al
08122035 +0x119:  test   %al,%al
08122037 +0x11b:  je     0812203f <+0x123>
08122039 +0x11d:  movb   $0x1,-0x15(%ebp)
0812203d +0x121:  jmp    08122050 <+0x134>
0812203f +0x123:  addl   $0x1,-0x10(%ebp)
08122043 +0x127:  mov    -0x10(%ebp),%eax
08122046 +0x12a:  cmp    -0x14(%ebp),%eax
08122049 +0x12d:  setb   %al
0812204c +0x130:  test   %al,%al
0812204e +0x132:  jne    08122018 <+0xfc>
08122050 +0x134:  movzbl -0x15(%ebp),%eax
08122054 +0x138:  xor    $0x1,%eax
08122057 +0x13b:  test   %al,%al
08122059 +0x13d:  je     08122065 <+0x149>
0812205b +0x13f:  mov    $0x0,%eax
08122060 +0x144:  jmp    081220fa <+0x1de>
08122065 +0x149:  movl   $0x0,-0xc(%ebp)
0812206c +0x150:  jmp    081220e6 <+0x1ca>
0812206e +0x152:  mov    -0xc(%ebp),%eax
08122071 +0x155:  mov    0xc(%ebp),%edx
08122074 +0x158:  movzbl 0x6(%edx,%eax,1),%eax
08122079 +0x15d:  test   %al,%al
0812207b +0x15f:  jne    08122084 <+0x168>
0812207d +0x161:  mov    $0x0,%eax
08122082 +0x166:  jmp    081220fa <+0x1de>
08122084 +0x168:  mov    -0xc(%ebp),%eax
08122087 +0x16b:  mov    0xc(%ebp),%edx
0812208a +0x16e:  movzbl 0x6(%edx,%eax,1),%eax
0812208f +0x173:  test   %al,%al
08122091 +0x175:  jns    081220e2 <+0x1c6>
08122093 +0x177:  mov    0x8(%ebp),%eax
08122096 +0x17a:  mov    0xc(%eax),%edx
08122099 +0x17d:  mov    0x8(%ebp),%eax
0812209c +0x180:  mov    %edx,0x4(%eax)
0812209f +0x183:  mov    -0xc(%ebp),%eax
081220a2 +0x186:  mov    -0xc(%ebp),%edx
081220a5 +0x189:  mov    0xc(%ebp),%ecx
081220a8 +0x18c:  movzbl 0x6(%ecx,%edx,1),%edx
081220ad +0x191:  mov    %edx,%ecx
081220af +0x193:  neg    %ecx
081220b1 +0x195:  mov    0xc(%ebp),%edx
081220b4 +0x198:  mov    %cl,0x6(%edx,%eax,1)
081220b8 +0x19c:  mov    0x8(%ebp),%eax
081220bb +0x19f:  mov    0xc(%eax),%ecx
081220be +0x1a2:  mov    -0xc(%ebp),%eax
081220c1 +0x1a5:  mov    0xc(%ebp),%edx
081220c4 +0x1a8:  movzbl 0x6(%edx,%eax,1),%eax
081220c9 +0x1ad:  movsbl %al,%eax
081220cc +0x1b0:  lea    (%ecx,%eax,1),%edx
081220cf +0x1b3:  mov    0x8(%ebp),%eax
081220d2 +0x1b6:  mov    %edx,0xc(%eax)
081220d5 +0x1b9:  mov    0x8(%ebp),%eax
081220d8 +0x1bc:  movb   $0x1,(%eax)
081220db +0x1bf:  mov    $0x1,%eax
081220e0 +0x1c4:  jmp    081220fa <+0x1de>
081220e2 +0x1c6:  addl   $0x1,-0xc(%ebp)
081220e6 +0x1ca:  cmpl   $0x4,-0xc(%ebp)
081220ea +0x1ce:  setle  %al
081220ed +0x1d1:  test   %al,%al
081220ef +0x1d3:  jne    0812206e <+0x152>
081220f5 +0x1d9:  mov    $0x0,%eax
081220fa +0x1de:  lea    -0x8(%ebp),%esp
081220fd +0x1e1:  add    $0x0,%esp
08122100 +0x1e4:  pop    %ebx
08122101 +0x1e5:  pop    %esi
08122102 +0x1e6:  pop    %ebp
08122103 +0x1e7:  ret
```

## 反编译 C

```c
// APSystem::CActionPointManager::ClearActionOne @ 0x8121f1c

/* APSystem::CActionPointManager::ClearActionOne(APSystem::_ActionPoint&, int) */

undefined4 __thiscall
APSystem::CActionPointManager::ClearActionOne
          (CActionPointManager *this,_ActionPoint *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  CDataManager *pCVar3;
  int iVar4;
  int *piVar5;
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
  local_30 [4];
  _Rb_tree_iterator local_2c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
  local_28 [4];
  map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
  local_24 [4];
  int local_20;
  char local_19;
  uint local_18;
  uint local_14;
  int local_10;
  
  bVar1 = (bool)_IsGMOn;
  if (param_2 != 0) {
    pCVar3 = (CDataManager *)G_CDataManager();
    CDataManager::GetActionPointEtcParameter(pCVar3,bVar1);
    std::
    map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
    ::find((ushort *)local_2c);
    std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>::
    _Rb_tree_const_iterator(local_30,local_2c);
    bVar1 = (bool)_IsGMOn;
    pCVar3 = (CDataManager *)G_CDataManager();
    CDataManager::GetActionPointEtcParameter(pCVar3,bVar1);
    std::
    map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
    ::end(local_24);
    std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>::
    _Rb_tree_const_iterator(local_28,(_Rb_tree_iterator *)local_24);
    cVar2 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
            ::operator==(local_30,(_Rb_tree_const_iterator *)local_28);
    if (cVar2 != '\0') {
      return 0;
    }
    iVar4 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
            ::operator->(local_30);
    local_20 = *(int *)(iVar4 + 4);
    if (local_20 == 0) {
      return 0;
    }
    local_19 = '\0';
    local_18 = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)(local_20 + 0x14));
    for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
      piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(local_20 + 0x14),local_14);
      if (*piVar5 == param_2) {
        local_19 = '\x01';
        break;
      }
    }
    if (local_19 != '\x01') {
      return 0;
    }
  }
  local_10 = 0;
  while( true ) {
    if (4 < local_10) {
      return 0;
    }
    if (param_1[local_10 + 6] == (_ActionPoint)0x0) break;
    if ((char)param_1[local_10 + 6] < '\0') {
      *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0xc);
      param_1[local_10 + 6] = (_ActionPoint)-(char)param_1[local_10 + 6];
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + (int)(char)param_1[local_10 + 6];
      *this = (CActionPointManager)0x1;
      return 1;
    }
    local_10 = local_10 + 1;
  }
  return 0;
}
```
