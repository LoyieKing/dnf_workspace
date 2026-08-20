# getBuffRewardInfo

`_ZNK10CNPCScript17getBuffRewardInfoEi`

`CNPCScript::getBuffRewardInfo(int) const`

| 类 | 地址 |
|---|---|
| `CNPCScript` | `0x085811f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085811f8  _ZNK10CNPCScript17getBuffRewardInfoEi
#           CNPCScript::getBuffRewardInfo(int) const
# range [0x085811f8, 0x08581313]
085811f8 +0x000:  push   %ebp
085811f9 +0x001:  mov    %esp,%ebp
085811fb +0x003:  push   %ebx
085811fc +0x004:  sub    $0x34,%esp
085811ff +0x007:  mov    0x8(%ebp),%ebx
08581202 +0x00a:  mov    0xc(%ebp),%eax
08581205 +0x00d:  lea    0x664(%eax),%edx
0858120b +0x013:  lea    -0x18(%ebp),%eax
0858120e +0x016:  mov    %edx,0x4(%esp)
08581212 +0x01a:  mov    %eax,(%esp)
08581215 +0x01d:  call   08582dd0 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1562>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1562
0858121a +0x022:  sub    $0x4,%esp
0858121d +0x025:  mov    0xc(%ebp),%eax
08581220 +0x028:  lea    0x664(%eax),%edx
08581226 +0x02e:  lea    -0x1c(%ebp),%eax
08581229 +0x031:  mov    %edx,0x4(%esp)
0858122d +0x035:  mov    %eax,(%esp)
08581230 +0x038:  call   08582dfc <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x158e>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x158e
08581235 +0x03d:  sub    $0x4,%esp
08581238 +0x040:  mov    %ebx,(%esp)
0858123b +0x043:  call   085818f0 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x82>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x82
08581240 +0x048:  movl   $0x3e8,(%esp)
08581247 +0x04f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0858124c +0x054:  mov    %eax,-0x10(%ebp)
0858124f +0x057:  movl   $0x0,-0xc(%ebp)
08581256 +0x05e:  movw   $0x0,0x2(%ebx)
0858125c +0x064:  jmp    085812ef <+0xf7>
08581261 +0x069:  lea    -0x18(%ebp),%eax
08581264 +0x06c:  mov    %eax,(%esp)
08581267 +0x06f:  call   08582e54 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x15e6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x15e6
0858126c +0x074:  movzwl (%eax),%eax
0858126f +0x077:  movzwl %ax,%eax
08581272 +0x07a:  cmp    0x10(%ebp),%eax
08581275 +0x07d:  setl   %al
08581278 +0x080:  test   %al,%al
0858127a +0x082:  je     085812d2 <+0xda>
0858127c +0x084:  lea    -0x18(%ebp),%eax
0858127f +0x087:  mov    %eax,(%esp)
08581282 +0x08a:  call   08582e54 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x15e6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x15e6
08581287 +0x08f:  mov    0x4(%eax),%edx
0858128a +0x092:  mov    -0xc(%ebp),%eax
0858128d +0x095:  lea    (%edx,%eax,1),%eax
08581290 +0x098:  mov    %eax,-0xc(%ebp)
08581293 +0x09b:  mov    -0xc(%ebp),%eax
08581296 +0x09e:  cmp    -0x10(%ebp),%eax
08581299 +0x0a1:  jle    085812d2 <+0xda>
0858129b +0x0a3:  lea    -0x18(%ebp),%eax
0858129e +0x0a6:  mov    %eax,(%esp)
085812a1 +0x0a9:  call   08582e54 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x15e6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x15e6
085812a6 +0x0ae:  movzwl 0x2(%eax),%eax
085812aa +0x0b2:  mov    %ax,0x2(%ebx)
085812ae +0x0b6:  lea    -0x18(%ebp),%eax
085812b1 +0x0b9:  mov    %eax,(%esp)
085812b4 +0x0bc:  call   08582e54 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x15e6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x15e6
085812b9 +0x0c1:  movzwl (%eax),%eax
085812bc +0x0c4:  mov    %ax,(%ebx)
085812bf +0x0c7:  lea    -0x18(%ebp),%eax
085812c2 +0x0ca:  mov    %eax,(%esp)
085812c5 +0x0cd:  call   08582e54 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x15e6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x15e6
085812ca +0x0d2:  mov    0x4(%eax),%eax
085812cd +0x0d5:  mov    %eax,0x4(%ebx)
085812d0 +0x0d8:  jmp    0858130a <+0x112>
085812d2 +0x0da:  lea    -0x14(%ebp),%eax
085812d5 +0x0dd:  movl   $0x0,0x8(%esp)
085812dd +0x0e5:  lea    -0x18(%ebp),%edx
085812e0 +0x0e8:  mov    %edx,0x4(%esp)
085812e4 +0x0ec:  mov    %eax,(%esp)
085812e7 +0x0ef:  call   08582e5e <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x15f0>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x15f0
085812ec +0x0f4:  sub    $0x4,%esp
085812ef +0x0f7:  lea    -0x1c(%ebp),%eax
085812f2 +0x0fa:  mov    %eax,0x4(%esp)
085812f6 +0x0fe:  lea    -0x18(%ebp),%eax
085812f9 +0x101:  mov    %eax,(%esp)
085812fc +0x104:  call   08582e28 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x15ba>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x15ba
08581301 +0x109:  test   %al,%al
08581303 +0x10b:  jne    08581261 <+0x69>
08581309 +0x111:  nop
0858130a +0x112:  mov    %ebx,%eax
0858130c +0x114:  mov    -0x4(%ebp),%ebx
0858130f +0x117:  leave
08581310 +0x118:  ret    $0x4
08581313 +0x11b:  nop
```

## 反编译 C

```c
// CNPCScript::getBuffRewardInfo @ 0x85811f8

/* CNPCScript::getBuffRewardInfo(int) const */

int CNPCScript::getBuffRewardInfo(int param_1)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int in_stack_0000000c;
  __normal_iterator local_20 [4];
  __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
  local_1c [4];
  __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  std::
  vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>
  ::begin();
  std::
  vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>
  ::end();
  stFavorableRelationShip_t::stBuffRewardInfo::stBuffRewardInfo((stBuffRewardInfo *)param_1);
  local_14 = get_rand_int(1000);
  local_10 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  do {
    bVar1 = __gnu_cxx::operator!=(local_1c,local_20);
    if (!bVar1) {
      return param_1;
    }
    puVar2 = (ushort *)
             __gnu_cxx::
             __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
             ::operator->(local_1c);
    if ((int)(uint)*puVar2 < in_stack_0000000c) {
      iVar3 = __gnu_cxx::
              __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
              ::operator->(local_1c);
      local_10 = *(int *)(iVar3 + 4) + local_10;
      if (local_14 < local_10) {
        iVar3 = __gnu_cxx::
                __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
                ::operator->(local_1c);
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar3 + 2);
        puVar4 = (undefined2 *)
                 __gnu_cxx::
                 __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
                 ::operator->(local_1c);
        *(undefined2 *)param_1 = *puVar4;
        iVar3 = __gnu_cxx::
                __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
                ::operator->(local_1c);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar3 + 4);
        return param_1;
      }
    }
    __gnu_cxx::
    __normal_iterator<stFavorableRelationShip_t::stBuffRewardInfo_const*,std::vector<stFavorableRelationShip_t::stBuffRewardInfo,std::allocator<stFavorableRelationShip_t::stBuffRewardInfo>>>
    ::operator++(local_18,(int)local_1c);
  } while( true );
}
```
