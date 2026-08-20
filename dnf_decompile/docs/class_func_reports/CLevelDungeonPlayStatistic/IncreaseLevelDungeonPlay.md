# IncreaseLevelDungeonPlay

`_ZN26CLevelDungeonPlayStatistic24IncreaseLevelDungeonPlayEii`

`CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay(int, int)`

| 类 | 地址 |
|---|---|
| `CLevelDungeonPlayStatistic` | `0x0860ecc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860ecc6  _ZN26CLevelDungeonPlayStatistic24IncreaseLevelDungeonPlayEii
#           CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay(int, int)
# range [0x0860ecc6, 0x0860edf3]
0860ecc6 +0x000:  push   %ebp
0860ecc7 +0x001:  mov    %esp,%ebp
0860ecc9 +0x003:  push   %ebx
0860ecca +0x004:  sub    $0x64,%esp
0860eccd +0x007:  mov    0xc(%ebp),%eax
0860ecd0 +0x00a:  test   %eax,%eax
0860ecd2 +0x00c:  jle    0860ecde <+0x18>
0860ecd4 +0x00e:  mov    0xc(%ebp),%eax
0860ecd7 +0x011:  cmp    $0xc8,%eax
0860ecdc +0x016:  jle    0860ed20 <+0x5a>
0860ecde +0x018:  mov    0xc(%ebp),%ebx
0860ece1 +0x01b:  movl   $0x0,0xc(%esp)
0860ece9 +0x023:  movl   $0x550,0x8(%esp)
0860ecf1 +0x02b:  movl   $&_ZZN26CLevelDungeonPlayStatistic24IncreaseLevelDungeonPlayEiiE19__PRETTY_FUNCTION__,0x4(%esp)
0860ecf9 +0x033:  lea    -0x40(%ebp),%eax
0860ecfc +0x036:  mov    %eax,(%esp)
0860ecff +0x039:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0860ed04 +0x03e:  mov    %ebx,0x8(%esp)
0860ed08 +0x042:  movl   $"LEVEL_DUNGEON_PLAY_STATISTIC wrong level(%d)",0x4(%esp)
0860ed10 +0x04a:  lea    -0x40(%ebp),%eax
0860ed13 +0x04d:  mov    %eax,(%esp)
0860ed16 +0x050:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0860ed1b +0x055:  jmp    0860edef <+0x129>
0860ed20 +0x05a:  mov    0x8(%ebp),%edx
0860ed23 +0x05d:  lea    -0x44(%ebp),%eax
0860ed26 +0x060:  lea    0xc(%ebp),%ecx
0860ed29 +0x063:  mov    %ecx,0x8(%esp)
0860ed2d +0x067:  mov    %edx,0x4(%esp)
0860ed31 +0x06b:  mov    %eax,(%esp)
0860ed34 +0x06e:  call   08611728 <_GLOBAL__I__ZN10StatisticsC2Ev+0x17a6>  ; global constructors keyed to Statistics::Statistics()+0x17a6
0860ed39 +0x073:  sub    $0x4,%esp
0860ed3c +0x076:  mov    0x8(%ebp),%edx
0860ed3f +0x079:  lea    -0x30(%ebp),%eax
0860ed42 +0x07c:  mov    %edx,0x4(%esp)
0860ed46 +0x080:  mov    %eax,(%esp)
0860ed49 +0x083:  call   08611754 <_GLOBAL__I__ZN10StatisticsC2Ev+0x17d2>  ; global constructors keyed to Statistics::Statistics()+0x17d2
0860ed4e +0x088:  sub    $0x4,%esp
0860ed51 +0x08b:  lea    -0x44(%ebp),%eax
0860ed54 +0x08e:  mov    %eax,0x4(%esp)
0860ed58 +0x092:  lea    -0x30(%ebp),%eax
0860ed5b +0x095:  mov    %eax,(%esp)
0860ed5e +0x098:  call   0861177a <_GLOBAL__I__ZN10StatisticsC2Ev+0x17f8>  ; global constructors keyed to Statistics::Statistics()+0x17f8
0860ed63 +0x09d:  test   %al,%al
0860ed65 +0x09f:  je     0860edc0 <+0xfa>
0860ed67 +0x0a1:  mov    0x10(%ebp),%eax
0860ed6a +0x0a4:  mov    %eax,-0x48(%ebp)
0860ed6d +0x0a7:  movl   $0x1,-0x4c(%ebp)
0860ed74 +0x0ae:  lea    -0x18(%ebp),%eax
0860ed77 +0x0b1:  lea    -0x4c(%ebp),%edx
0860ed7a +0x0b4:  mov    %edx,0x8(%esp)
0860ed7e +0x0b8:  lea    0xc(%ebp),%edx
0860ed81 +0x0bb:  mov    %edx,0x4(%esp)
0860ed85 +0x0bf:  mov    %eax,(%esp)
0860ed88 +0x0c2:  call   0861178e <_GLOBAL__I__ZN10StatisticsC2Ev+0x180c>  ; global constructors keyed to Statistics::Statistics()+0x180c
0860ed8d +0x0c7:  sub    $0x4,%esp
0860ed90 +0x0ca:  lea    -0x18(%ebp),%eax
0860ed93 +0x0cd:  mov    %eax,0x4(%esp)
0860ed97 +0x0d1:  lea    -0x24(%ebp),%eax
0860ed9a +0x0d4:  mov    %eax,(%esp)
0860ed9d +0x0d7:  call   086117cc <_GLOBAL__I__ZN10StatisticsC2Ev+0x184a>  ; global constructors keyed to Statistics::Statistics()+0x184a
0860eda2 +0x0dc:  mov    0x8(%ebp),%edx
0860eda5 +0x0df:  lea    -0x2c(%ebp),%eax
0860eda8 +0x0e2:  lea    -0x24(%ebp),%ecx
0860edab +0x0e5:  mov    %ecx,0x8(%esp)
0860edaf +0x0e9:  mov    %edx,0x4(%esp)
0860edb3 +0x0ed:  mov    %eax,(%esp)
0860edb6 +0x0f0:  call   08611802 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1880>  ; global constructors keyed to Statistics::Statistics()+0x1880
0860edbb +0x0f5:  sub    $0x4,%esp
0860edbe +0x0f8:  jmp    0860edef <+0x129>
0860edc0 +0x0fa:  lea    -0x44(%ebp),%eax
0860edc3 +0x0fd:  mov    %eax,(%esp)
0860edc6 +0x100:  call   0861182e <_GLOBAL__I__ZN10StatisticsC2Ev+0x18ac>  ; global constructors keyed to Statistics::Statistics()+0x18ac
0860edcb +0x105:  add    $0x4,%eax
0860edce +0x108:  mov    %eax,-0xc(%ebp)
0860edd1 +0x10b:  mov    -0xc(%ebp),%eax
0860edd4 +0x10e:  mov    0x4(%eax),%eax
0860edd7 +0x111:  mov    %eax,%edx
0860edd9 +0x113:  add    0x10(%ebp),%edx
0860eddc +0x116:  mov    -0xc(%ebp),%eax
0860eddf +0x119:  mov    %edx,0x4(%eax)
0860ede2 +0x11c:  mov    -0xc(%ebp),%eax
0860ede5 +0x11f:  mov    (%eax),%eax
0860ede7 +0x121:  lea    0x1(%eax),%edx
0860edea +0x124:  mov    -0xc(%ebp),%eax
0860eded +0x127:  mov    %edx,(%eax)
0860edef +0x129:  mov    -0x4(%ebp),%ebx
0860edf2 +0x12c:  leave
0860edf3 +0x12d:  ret
```

## 反编译 C

```c
// CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay @ 0x860ecc6

/* CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay(int, int) */

void __thiscall
CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay
          (CLevelDungeonPlayStatistic *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator local_48 [4];
  cMyTrace local_44 [16];
  map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
  local_34 [4];
  pair local_30 [8];
  pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo> local_28 [12];
  int local_1c [5];
  
  iVar2 = param_1;
  if ((param_1 < 1) || (200 < param_1)) {
    cMyTrace::cMyTrace(local_44,
                       "void CLevelDungeonPlayStatistic::IncreaseLevelDungeonPlay(int, int)",0x550,0
                      );
    cMyTrace::operator()(local_44,"LEVEL_DUNGEON_PLAY_STATISTIC wrong level(%d)",iVar2);
  }
  else {
    std::
    map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
    ::find((int *)local_48);
    std::
    map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
    ::end(local_34);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>::
            operator==((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                        *)local_34,local_48);
    if (cVar1 == '\0') {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>
                            *)local_48);
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + param_2;
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    else {
      std::make_pair<int&,CLevelDungeonPlayStatistic::stDungeonPlayInfo&>
                (local_1c,(stDungeonPlayInfo *)&param_1);
      std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>::
      pair<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo>(local_28,(pair *)local_1c);
      std::
      map<int,CLevelDungeonPlayStatistic::stDungeonPlayInfo,std::less<int>,std::allocator<std::pair<int_const,CLevelDungeonPlayStatistic::stDungeonPlayInfo>>>
      ::insert(local_30);
    }
  }
  return;
}
```
