# IncrementDungeonEntrance

`_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib`

`CDungeonEntranceLog::IncrementDungeonEntrance(int, bool)`

| 类 | 地址 |
|---|---|
| `CDungeonEntranceLog` | `0x0860e1ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860e1ee  _ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib
#           CDungeonEntranceLog::IncrementDungeonEntrance(int, bool)
# range [0x0860e1ee, 0x0860e323]
0860e1ee +0x000:  push   %ebp
0860e1ef +0x001:  mov    %esp,%ebp
0860e1f1 +0x003:  sub    $0x78,%esp
0860e1f4 +0x006:  mov    0x10(%ebp),%eax
0860e1f7 +0x009:  mov    %al,-0x5c(%ebp)
0860e1fa +0x00c:  mov    0x8(%ebp),%edx
0860e1fd +0x00f:  lea    -0x40(%ebp),%eax
0860e200 +0x012:  lea    0xc(%ebp),%ecx
0860e203 +0x015:  mov    %ecx,0x8(%esp)
0860e207 +0x019:  mov    %edx,0x4(%esp)
0860e20b +0x01d:  mov    %eax,(%esp)
0860e20e +0x020:  call   0861159c <_GLOBAL__I__ZN10StatisticsC2Ev+0x161a>  ; global constructors keyed to Statistics::Statistics()+0x161a
0860e213 +0x025:  sub    $0x4,%esp
0860e216 +0x028:  mov    0x8(%ebp),%edx
0860e219 +0x02b:  lea    -0x3c(%ebp),%eax
0860e21c +0x02e:  mov    %edx,0x4(%esp)
0860e220 +0x032:  mov    %eax,(%esp)
0860e223 +0x035:  call   086115c8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1646>  ; global constructors keyed to Statistics::Statistics()+0x1646
0860e228 +0x03a:  sub    $0x4,%esp
0860e22b +0x03d:  lea    -0x3c(%ebp),%eax
0860e22e +0x040:  mov    %eax,0x4(%esp)
0860e232 +0x044:  lea    -0x40(%ebp),%eax
0860e235 +0x047:  mov    %eax,(%esp)
0860e238 +0x04a:  call   086115ee <_GLOBAL__I__ZN10StatisticsC2Ev+0x166c>  ; global constructors keyed to Statistics::Statistics()+0x166c
0860e23d +0x04f:  test   %al,%al
0860e23f +0x051:  je     0860e2a1 <+0xb3>
0860e241 +0x053:  cmpb   $0x0,-0x5c(%ebp)
0860e245 +0x057:  je     0860e260 <+0x72>
0860e247 +0x059:  lea    -0x40(%ebp),%eax
0860e24a +0x05c:  mov    %eax,(%esp)
0860e24d +0x05f:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e252 +0x064:  mov    0x8(%eax),%edx
0860e255 +0x067:  add    $0x1,%edx
0860e258 +0x06a:  mov    %edx,0x8(%eax)
0860e25b +0x06d:  jmp    0860e322 <+0x134>
0860e260 +0x072:  lea    -0x40(%ebp),%eax
0860e263 +0x075:  mov    %eax,(%esp)
0860e266 +0x078:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e26b +0x07d:  mov    0x4(%eax),%edx
0860e26e +0x080:  add    $0x1,%edx
0860e271 +0x083:  mov    %edx,0x4(%eax)
0860e274 +0x086:  lea    -0x40(%ebp),%eax
0860e277 +0x089:  mov    %eax,(%esp)
0860e27a +0x08c:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e27f +0x091:  mov    0xc(%eax),%edx
0860e282 +0x094:  add    $0x1,%edx
0860e285 +0x097:  mov    %edx,0xc(%eax)
0860e288 +0x09a:  lea    -0x40(%ebp),%eax
0860e28b +0x09d:  mov    %eax,(%esp)
0860e28e +0x0a0:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e293 +0x0a5:  mov    0x10(%eax),%edx
0860e296 +0x0a8:  add    $0x1,%edx
0860e299 +0x0ab:  mov    %edx,0x10(%eax)
0860e29c +0x0ae:  jmp    0860e322 <+0x134>
0860e2a1 +0x0b3:  lea    -0x50(%ebp),%eax
0860e2a4 +0x0b6:  mov    %eax,(%esp)
0860e2a7 +0x0b9:  call   086103be <_GLOBAL__I__ZN10StatisticsC2Ev+0x43c>  ; global constructors keyed to Statistics::Statistics()+0x43c
0860e2ac +0x0be:  cmpb   $0x0,-0x5c(%ebp)
0860e2b0 +0x0c2:  je     0860e2bd <+0xcf>
0860e2b2 +0x0c4:  mov    -0x4c(%ebp),%eax
0860e2b5 +0x0c7:  add    $0x1,%eax
0860e2b8 +0x0ca:  mov    %eax,-0x4c(%ebp)
0860e2bb +0x0cd:  jmp    0860e2d8 <+0xea>
0860e2bd +0x0cf:  mov    -0x50(%ebp),%eax
0860e2c0 +0x0d2:  add    $0x1,%eax
0860e2c3 +0x0d5:  mov    %eax,-0x50(%ebp)
0860e2c6 +0x0d8:  mov    -0x48(%ebp),%eax
0860e2c9 +0x0db:  add    $0x1,%eax
0860e2cc +0x0de:  mov    %eax,-0x48(%ebp)
0860e2cf +0x0e1:  mov    -0x44(%ebp),%eax
0860e2d2 +0x0e4:  add    $0x1,%eax
0860e2d5 +0x0e7:  mov    %eax,-0x44(%ebp)
0860e2d8 +0x0ea:  lea    -0x1c(%ebp),%eax
0860e2db +0x0ed:  lea    -0x50(%ebp),%edx
0860e2de +0x0f0:  mov    %edx,0x8(%esp)
0860e2e2 +0x0f4:  lea    0xc(%ebp),%edx
0860e2e5 +0x0f7:  mov    %edx,0x4(%esp)
0860e2e9 +0x0fb:  mov    %eax,(%esp)
0860e2ec +0x0fe:  call   0861160f <_GLOBAL__I__ZN10StatisticsC2Ev+0x168d>  ; global constructors keyed to Statistics::Statistics()+0x168d
0860e2f1 +0x103:  sub    $0x4,%esp
0860e2f4 +0x106:  lea    -0x1c(%ebp),%eax
0860e2f7 +0x109:  mov    %eax,0x4(%esp)
0860e2fb +0x10d:  lea    -0x30(%ebp),%eax
0860e2fe +0x110:  mov    %eax,(%esp)
0860e301 +0x113:  call   0861164e <_GLOBAL__I__ZN10StatisticsC2Ev+0x16cc>  ; global constructors keyed to Statistics::Statistics()+0x16cc
0860e306 +0x118:  mov    0x8(%ebp),%edx
0860e309 +0x11b:  lea    -0x38(%ebp),%eax
0860e30c +0x11e:  lea    -0x30(%ebp),%ecx
0860e30f +0x121:  mov    %ecx,0x8(%esp)
0860e313 +0x125:  mov    %edx,0x4(%esp)
0860e317 +0x129:  mov    %eax,(%esp)
0860e31a +0x12c:  call   08611690 <_GLOBAL__I__ZN10StatisticsC2Ev+0x170e>  ; global constructors keyed to Statistics::Statistics()+0x170e
0860e31f +0x131:  sub    $0x4,%esp
0860e322 +0x134:  leave
0860e323 +0x135:  ret
```

## 反编译 C

```c
// CDungeonEntranceLog::IncrementDungeonEntrance @ 0x860e1ee

/* CDungeonEntranceLog::IncrementDungeonEntrance(int, bool) */

void __thiscall
CDungeonEntranceLog::IncrementDungeonEntrance(CDungeonEntranceLog *this,int param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined3 in_stack_0000000d;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  _Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> local_44 [4];
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
  local_40 [4];
  pair local_3c [8];
  pair<int_const,STDungeonInoutCnt> local_34 [20];
  int local_20 [7];
  
  bVar1 = param_2;
  std::
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>::
  find((int *)local_44);
  std::
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>::
  end(local_40);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator!=
                    (local_44,(_Rb_tree_iterator *)local_40);
  if (cVar2 == '\0') {
    STDungeonInoutCnt::STDungeonInoutCnt((STDungeonInoutCnt *)&local_54);
    if (bVar1) {
      local_50 = local_50 + 1;
    }
    else {
      local_54 = local_54 + 1;
      local_4c = local_4c + 1;
      local_48 = local_48 + 1;
    }
    std::make_pair<int&,STDungeonInoutCnt&>(local_20,(STDungeonInoutCnt *)&param_1);
    std::pair<int_const,STDungeonInoutCnt>::pair<int,STDungeonInoutCnt>(local_34,(pair *)local_20);
    std::
    map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
    ::insert(local_3c);
  }
  else if (bVar1) {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->(local_44);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->(local_44);
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->(local_44);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->(local_44);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  }
  return;
}
```
