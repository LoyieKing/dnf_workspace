# DecrementDungeonEntrance

`_ZN19CDungeonEntranceLog24DecrementDungeonEntranceEib`

`CDungeonEntranceLog::DecrementDungeonEntrance(int, bool)`

| 类 | 地址 |
|---|---|
| `CDungeonEntranceLog` | `0x0860e324` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860e324  _ZN19CDungeonEntranceLog24DecrementDungeonEntranceEib
#           CDungeonEntranceLog::DecrementDungeonEntrance(int, bool)
# range [0x0860e324, 0x0860e38d]
0860e324 +0x00:  push   %ebp
0860e325 +0x01:  mov    %esp,%ebp
0860e327 +0x03:  sub    $0x38,%esp
0860e32a +0x06:  mov    0x10(%ebp),%eax
0860e32d +0x09:  mov    %al,-0x1c(%ebp)
0860e330 +0x0c:  mov    0x8(%ebp),%edx
0860e333 +0x0f:  lea    -0x10(%ebp),%eax
0860e336 +0x12:  lea    0xc(%ebp),%ecx
0860e339 +0x15:  mov    %ecx,0x8(%esp)
0860e33d +0x19:  mov    %edx,0x4(%esp)
0860e341 +0x1d:  mov    %eax,(%esp)
0860e344 +0x20:  call   0861159c <_GLOBAL__I__ZN10StatisticsC2Ev+0x161a>  ; global constructors keyed to Statistics::Statistics()+0x161a
0860e349 +0x25:  sub    $0x4,%esp
0860e34c +0x28:  mov    0x8(%ebp),%edx
0860e34f +0x2b:  lea    -0xc(%ebp),%eax
0860e352 +0x2e:  mov    %edx,0x4(%esp)
0860e356 +0x32:  mov    %eax,(%esp)
0860e359 +0x35:  call   086115c8 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1646>  ; global constructors keyed to Statistics::Statistics()+0x1646
0860e35e +0x3a:  sub    $0x4,%esp
0860e361 +0x3d:  lea    -0xc(%ebp),%eax
0860e364 +0x40:  mov    %eax,0x4(%esp)
0860e368 +0x44:  lea    -0x10(%ebp),%eax
0860e36b +0x47:  mov    %eax,(%esp)
0860e36e +0x4a:  call   086115ee <_GLOBAL__I__ZN10StatisticsC2Ev+0x166c>  ; global constructors keyed to Statistics::Statistics()+0x166c
0860e373 +0x4f:  test   %al,%al
0860e375 +0x51:  je     0860e38b <+0x67>
0860e377 +0x53:  lea    -0x10(%ebp),%eax
0860e37a +0x56:  mov    %eax,(%esp)
0860e37d +0x59:  call   08611602 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1680>  ; global constructors keyed to Statistics::Statistics()+0x1680
0860e382 +0x5e:  mov    0x10(%eax),%edx
0860e385 +0x61:  sub    $0x1,%edx
0860e388 +0x64:  mov    %edx,0x10(%eax)
0860e38b +0x67:  leave
0860e38c +0x68:  ret
0860e38d +0x69:  nop
```

## 反编译 C

```c
// CDungeonEntranceLog::DecrementDungeonEntrance @ 0x860e324

/* CDungeonEntranceLog::DecrementDungeonEntrance(int, bool) */

void CDungeonEntranceLog::DecrementDungeonEntrance(int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>> local_14 [4];
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>
  local_10 [12];
  
  std::
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>::
  find((int *)local_14);
  std::
  map<int,STDungeonInoutCnt,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutCnt>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutCnt>>::operator->(local_14);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + -1;
  }
  return;
}
```
