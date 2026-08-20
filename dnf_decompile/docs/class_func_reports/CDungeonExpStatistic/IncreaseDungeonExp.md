# IncreaseDungeonExp

`_ZN20CDungeonExpStatistic18IncreaseDungeonExpEiii`

`CDungeonExpStatistic::IncreaseDungeonExp(int, int, int)`

| 类 | 地址 |
|---|---|
| `CDungeonExpStatistic` | `0x0860efca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860efca  _ZN20CDungeonExpStatistic18IncreaseDungeonExpEiii
#           CDungeonExpStatistic::IncreaseDungeonExp(int, int, int)
# range [0x0860efca, 0x0860f10f]
0860efca +0x000:  push   %ebp
0860efcb +0x001:  mov    %esp,%ebp
0860efcd +0x003:  push   %ebx
0860efce +0x004:  sub    $0x64,%esp
0860efd1 +0x007:  mov    0xc(%ebp),%eax
0860efd4 +0x00a:  test   %eax,%eax
0860efd6 +0x00c:  jle    0860efe2 <+0x18>
0860efd8 +0x00e:  mov    0xc(%ebp),%eax
0860efdb +0x011:  cmp    $0xc8,%eax
0860efe0 +0x016:  jle    0860f024 <+0x5a>
0860efe2 +0x018:  mov    0xc(%ebp),%ebx
0860efe5 +0x01b:  movl   $0x0,0xc(%esp)
0860efed +0x023:  movl   $0x581,0x8(%esp)
0860eff5 +0x02b:  movl   $&_ZZN20CDungeonExpStatistic18IncreaseDungeonExpEiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0860effd +0x033:  lea    -0x48(%ebp),%eax
0860f000 +0x036:  mov    %eax,(%esp)
0860f003 +0x039:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0860f008 +0x03e:  mov    %ebx,0x8(%esp)
0860f00c +0x042:  movl   $"DUNGEON_EXP_STATISTIC wrong level(%d)",0x4(%esp)
0860f014 +0x04a:  lea    -0x48(%ebp),%eax
0860f017 +0x04d:  mov    %eax,(%esp)
0860f01a +0x050:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0860f01f +0x055:  jmp    0860f10a <+0x140>
0860f024 +0x05a:  mov    0x8(%ebp),%edx
0860f027 +0x05d:  lea    -0x4c(%ebp),%eax
0860f02a +0x060:  lea    0xc(%ebp),%ecx
0860f02d +0x063:  mov    %ecx,0x8(%esp)
0860f031 +0x067:  mov    %edx,0x4(%esp)
0860f035 +0x06b:  mov    %eax,(%esp)
0860f038 +0x06e:  call   086118bc <_GLOBAL__I__ZN10StatisticsC2Ev+0x193a>  ; global constructors keyed to Statistics::Statistics()+0x193a
0860f03d +0x073:  sub    $0x4,%esp
0860f040 +0x076:  mov    0x8(%ebp),%edx
0860f043 +0x079:  lea    -0x38(%ebp),%eax
0860f046 +0x07c:  mov    %edx,0x4(%esp)
0860f04a +0x080:  mov    %eax,(%esp)
0860f04d +0x083:  call   086118e8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1966>  ; global constructors keyed to Statistics::Statistics()+0x1966
0860f052 +0x088:  sub    $0x4,%esp
0860f055 +0x08b:  lea    -0x4c(%ebp),%eax
0860f058 +0x08e:  mov    %eax,0x4(%esp)
0860f05c +0x092:  lea    -0x38(%ebp),%eax
0860f05f +0x095:  mov    %eax,(%esp)
0860f062 +0x098:  call   0861190e <_GLOBAL__I__ZN10StatisticsC2Ev+0x198c>  ; global constructors keyed to Statistics::Statistics()+0x198c
0860f067 +0x09d:  test   %al,%al
0860f069 +0x09f:  je     0860f0ca <+0x100>
0860f06b +0x0a1:  mov    0x10(%ebp),%eax
0860f06e +0x0a4:  mov    %eax,-0x58(%ebp)
0860f071 +0x0a7:  mov    0x14(%ebp),%eax
0860f074 +0x0aa:  mov    %eax,-0x54(%ebp)
0860f077 +0x0ad:  movl   $0x1,-0x50(%ebp)
0860f07e +0x0b4:  lea    -0x1c(%ebp),%eax
0860f081 +0x0b7:  lea    -0x58(%ebp),%edx
0860f084 +0x0ba:  mov    %edx,0x8(%esp)
0860f088 +0x0be:  lea    0xc(%ebp),%edx
0860f08b +0x0c1:  mov    %edx,0x4(%esp)
0860f08f +0x0c5:  mov    %eax,(%esp)
0860f092 +0x0c8:  call   08611922 <_GLOBAL__I__ZN10StatisticsC2Ev+0x19a0>  ; global constructors keyed to Statistics::Statistics()+0x19a0
0860f097 +0x0cd:  sub    $0x4,%esp
0860f09a +0x0d0:  lea    -0x1c(%ebp),%eax
0860f09d +0x0d3:  mov    %eax,0x4(%esp)
0860f0a1 +0x0d7:  lea    -0x2c(%ebp),%eax
0860f0a4 +0x0da:  mov    %eax,(%esp)
0860f0a7 +0x0dd:  call   08611960 <_GLOBAL__I__ZN10StatisticsC2Ev+0x19de>  ; global constructors keyed to Statistics::Statistics()+0x19de
0860f0ac +0x0e2:  mov    0x8(%ebp),%edx
0860f0af +0x0e5:  lea    -0x34(%ebp),%eax
0860f0b2 +0x0e8:  lea    -0x2c(%ebp),%ecx
0860f0b5 +0x0eb:  mov    %ecx,0x8(%esp)
0860f0b9 +0x0ef:  mov    %edx,0x4(%esp)
0860f0bd +0x0f3:  mov    %eax,(%esp)
0860f0c0 +0x0f6:  call   0861199c <_GLOBAL__I__ZN10StatisticsC2Ev+0x1a1a>  ; global constructors keyed to Statistics::Statistics()+0x1a1a
0860f0c5 +0x0fb:  sub    $0x4,%esp
0860f0c8 +0x0fe:  jmp    0860f10a <+0x140>
0860f0ca +0x100:  lea    -0x4c(%ebp),%eax
0860f0cd +0x103:  mov    %eax,(%esp)
0860f0d0 +0x106:  call   086119c8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1a46>  ; global constructors keyed to Statistics::Statistics()+0x1a46
0860f0d5 +0x10b:  add    $0x4,%eax
0860f0d8 +0x10e:  mov    %eax,-0xc(%ebp)
0860f0db +0x111:  mov    -0xc(%ebp),%eax
0860f0de +0x114:  mov    (%eax),%eax
0860f0e0 +0x116:  mov    %eax,%edx
0860f0e2 +0x118:  add    0x10(%ebp),%edx
0860f0e5 +0x11b:  mov    -0xc(%ebp),%eax
0860f0e8 +0x11e:  mov    %edx,(%eax)
0860f0ea +0x120:  mov    -0xc(%ebp),%eax
0860f0ed +0x123:  mov    0x4(%eax),%eax
0860f0f0 +0x126:  mov    %eax,%edx
0860f0f2 +0x128:  add    0x14(%ebp),%edx
0860f0f5 +0x12b:  mov    -0xc(%ebp),%eax
0860f0f8 +0x12e:  mov    %edx,0x4(%eax)
0860f0fb +0x131:  mov    -0xc(%ebp),%eax
0860f0fe +0x134:  mov    0x8(%eax),%eax
0860f101 +0x137:  lea    0x1(%eax),%edx
0860f104 +0x13a:  mov    -0xc(%ebp),%eax
0860f107 +0x13d:  mov    %edx,0x8(%eax)
0860f10a +0x140:  mov    -0x4(%ebp),%ebx
0860f10d +0x143:  leave
0860f10e +0x144:  ret
0860f10f +0x145:  nop
```

## 反编译 C

```c
// CDungeonExpStatistic::IncreaseDungeonExp @ 0x860efca

/* CDungeonExpStatistic::IncreaseDungeonExp(int, int, int) */

void __thiscall
CDungeonExpStatistic::IncreaseDungeonExp
          (CDungeonExpStatistic *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator local_50 [4];
  cMyTrace local_4c [16];
  map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
  local_3c [4];
  pair local_38 [8];
  pair<int_const,CDungeonExpStatistic::stDungeonExp> local_30 [16];
  int local_20 [6];
  
  iVar2 = param_1;
  if ((param_1 < 1) || (200 < param_1)) {
    cMyTrace::cMyTrace(local_4c,"void CDungeonExpStatistic::IncreaseDungeonExp(int, int, int)",0x581
                       ,0);
    cMyTrace::operator()(local_4c,"DUNGEON_EXP_STATISTIC wrong level(%d)",iVar2);
  }
  else {
    std::
    map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
    ::find((int *)local_50);
    std::
    map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
    ::end(local_3c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
            operator==((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>> *
                       )local_3c,local_50);
    if (cVar1 == '\0') {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>
                          *)local_50);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + param_2;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + param_3;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
    }
    else {
      std::make_pair<int&,CDungeonExpStatistic::stDungeonExp&>(local_20,(stDungeonExp *)&param_1);
      std::pair<int_const,CDungeonExpStatistic::stDungeonExp>::
      pair<int,CDungeonExpStatistic::stDungeonExp>(local_30,(pair *)local_20);
      std::
      map<int,CDungeonExpStatistic::stDungeonExp,std::less<int>,std::allocator<std::pair<int_const,CDungeonExpStatistic::stDungeonExp>>>
      ::insert(local_38);
    }
  }
  return;
}
```
