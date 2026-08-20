# isEndStage

`_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE`

`advancealtar::ProcStage::isEndStage(advancealtar::StageEndType::T&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812e2c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812e2c6  _ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE
#           advancealtar::ProcStage::isEndStage(advancealtar::StageEndType::T&) const
# range [0x0812e2c6, 0x0812e3f5]
0812e2c6 +0x000:  push   %ebp
0812e2c7 +0x001:  mov    %esp,%ebp
0812e2c9 +0x003:  sub    $0x38,%esp
0812e2cc +0x006:  mov    0x8(%ebp),%eax
0812e2cf +0x009:  mov    %eax,(%esp)
0812e2d2 +0x00c:  call   0812eb5a <_ZNK12advancealtar9ProcStage13isEndAllPhaseEv>  ; advancealtar::ProcStage::isEndAllPhase() const
0812e2d7 +0x011:  mov    %al,-0x12(%ebp)
0812e2da +0x014:  mov    0x8(%ebp),%eax
0812e2dd +0x017:  add    $0x18,%eax
0812e2e0 +0x01a:  mov    %eax,(%esp)
0812e2e3 +0x01d:  call   0812d50a <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs11isEndSummonEv>  ; advancealtar::ProcStage::ProcSummonObjectMs::isEndSummon() const
0812e2e8 +0x022:  mov    %al,-0x11(%ebp)
0812e2eb +0x025:  mov    0x8(%ebp),%eax
0812e2ee +0x028:  add    $0x18,%eax
0812e2f1 +0x02b:  mov    %eax,(%esp)
0812e2f4 +0x02e:  call   08134820 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x427>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x427
0812e2f9 +0x033:  mov    %eax,-0x10(%ebp)
0812e2fc +0x036:  movl   $0x0,-0xc(%ebp)
0812e303 +0x03d:  mov    0x8(%ebp),%eax
0812e306 +0x040:  lea    0x50(%eax),%edx
0812e309 +0x043:  lea    -0x20(%ebp),%eax
0812e30c +0x046:  mov    %edx,0x4(%esp)
0812e310 +0x04a:  mov    %eax,(%esp)
0812e313 +0x04d:  call   08135600 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1207>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1207
0812e318 +0x052:  sub    $0x4,%esp
0812e31b +0x055:  jmp    0812e385 <+0xbf>
0812e31d +0x057:  mov    0x8(%ebp),%eax
0812e320 +0x05a:  mov    0x74(%eax),%eax
0812e323 +0x05d:  test   %eax,%eax
0812e325 +0x05f:  je     0812e368 <+0xa2>
0812e327 +0x061:  lea    -0x20(%ebp),%eax
0812e32a +0x064:  mov    %eax,(%esp)
0812e32d +0x067:  call   0813569e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12a5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12a5
0812e332 +0x06c:  movzwl 0x8(%eax),%eax
0812e336 +0x070:  movzwl %ax,%edx
0812e339 +0x073:  mov    0x8(%ebp),%eax
0812e33c +0x076:  mov    0x74(%eax),%eax
0812e33f +0x079:  mov    0x110(%eax),%eax
0812e345 +0x07f:  cmp    %eax,%edx
0812e347 +0x081:  sete   %al
0812e34a +0x084:  test   %al,%al
0812e34c +0x086:  je     0812e368 <+0xa2>
0812e34e +0x088:  lea    -0x20(%ebp),%eax
0812e351 +0x08b:  mov    %eax,(%esp)
0812e354 +0x08e:  call   0813569e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12a5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12a5
0812e359 +0x093:  movzbl 0xe(%eax),%eax
0812e35d +0x097:  xor    $0x1,%eax
0812e360 +0x09a:  test   %al,%al
0812e362 +0x09c:  je     0812e368 <+0xa2>
0812e364 +0x09e:  addl   $0x1,-0xc(%ebp)
0812e368 +0x0a2:  lea    -0x18(%ebp),%eax
0812e36b +0x0a5:  movl   $0x0,0x8(%esp)
0812e373 +0x0ad:  lea    -0x20(%ebp),%edx
0812e376 +0x0b0:  mov    %edx,0x4(%esp)
0812e37a +0x0b4:  mov    %eax,(%esp)
0812e37d +0x0b7:  call   08135660 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1267>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1267
0812e382 +0x0bc:  sub    $0x4,%esp
0812e385 +0x0bf:  mov    0x8(%ebp),%eax
0812e388 +0x0c2:  lea    0x50(%eax),%edx
0812e38b +0x0c5:  lea    -0x1c(%ebp),%eax
0812e38e +0x0c8:  mov    %edx,0x4(%esp)
0812e392 +0x0cc:  mov    %eax,(%esp)
0812e395 +0x0cf:  call   08135626 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x122d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x122d
0812e39a +0x0d4:  sub    $0x4,%esp
0812e39d +0x0d7:  lea    -0x1c(%ebp),%eax
0812e3a0 +0x0da:  mov    %eax,0x4(%esp)
0812e3a4 +0x0de:  lea    -0x20(%ebp),%eax
0812e3a7 +0x0e1:  mov    %eax,(%esp)
0812e3aa +0x0e4:  call   0813564c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1253>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1253
0812e3af +0x0e9:  test   %al,%al
0812e3b1 +0x0eb:  jne    0812e31d <+0x57>
0812e3b7 +0x0f1:  cmpl   $0x0,-0xc(%ebp)
0812e3bb +0x0f5:  jne    0812e3cd <+0x107>
0812e3bd +0x0f7:  mov    0xc(%ebp),%eax
0812e3c0 +0x0fa:  movl   $0x0,(%eax)
0812e3c6 +0x100:  mov    $0x1,%eax
0812e3cb +0x105:  jmp    0812e3f4 <+0x12e>
0812e3cd +0x107:  cmpb   $0x0,-0x12(%ebp)
0812e3d1 +0x10b:  je     0812e3ef <+0x129>
0812e3d3 +0x10d:  cmpb   $0x0,-0x11(%ebp)
0812e3d7 +0x111:  je     0812e3ef <+0x129>
0812e3d9 +0x113:  cmpl   $0x0,-0x10(%ebp)
0812e3dd +0x117:  jne    0812e3ef <+0x129>
0812e3df +0x119:  mov    0xc(%ebp),%eax
0812e3e2 +0x11c:  movl   $0x3,(%eax)
0812e3e8 +0x122:  mov    $0x1,%eax
0812e3ed +0x127:  jmp    0812e3f4 <+0x12e>
0812e3ef +0x129:  mov    $0x0,%eax
0812e3f4 +0x12e:  leave
0812e3f5 +0x12f:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::isEndStage @ 0x812e2c6

/* advancealtar::ProcStage::isEndStage(advancealtar::StageEndType::T&) const */

undefined4 __thiscall advancealtar::ProcStage::isEndStage(ProcStage *this,T *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  local_24 [4];
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  local_20 [4];
  _Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>> local_1c [6];
  char local_16;
  char local_15;
  int local_14;
  int local_10;
  
  local_16 = isEndAllPhase(this);
  local_15 = ProcSummonObjectMs::isEndSummon((ProcSummonObjectMs *)(this + 0x18));
  local_14 = ProcSummonObjectMs::getAliveMonsterCount((ProcSummonObjectMs *)(this + 0x18));
  local_10 = 0;
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::begin(local_24);
  while( true ) {
    std::
    map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
    ::end(local_20);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
            operator!=((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>
                        *)local_24,(_Rb_tree_const_iterator *)local_20);
    if (cVar1 == '\0') break;
    if (*(int *)(this + 0x74) != 0) {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>
              ::operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>
                            *)local_24);
      if ((uint)*(ushort *)(iVar2 + 8) == *(uint *)(*(int *)(this + 0x74) + 0x110)) {
        iVar2 = std::
                _Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
                operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>
                            *)local_24);
        if (*(char *)(iVar2 + 0xe) != '\x01') {
          local_10 = local_10 + 1;
        }
      }
    }
    std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_MapMonsterSummary>>::
    operator++(local_1c,(int)local_24);
  }
  if (local_10 == 0) {
    *(undefined4 *)param_1 = 0;
    uVar3 = 1;
  }
  else if (((local_16 == '\0') || (local_15 == '\0')) || (local_14 != 0)) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)param_1 = 3;
    uVar3 = 1;
  }
  return uVar3;
}
```
