# get_ingame_event_history

`_ZN5CUser24get_ingame_event_historyEiRSt4pairIiiE`

`CUser::get_ingame_event_history(int, std::pair<int, int>&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d50c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d50c  _ZN5CUser24get_ingame_event_historyEiRSt4pairIiiE
#           CUser::get_ingame_event_history(int, std::pair<int, int>&)
# range [0x0868d50c, 0x0868d57f]
0868d50c +0x00:  push   %ebp
0868d50d +0x01:  mov    %esp,%ebp
0868d50f +0x03:  sub    $0x28,%esp
0868d512 +0x06:  mov    0x8(%ebp),%eax
0868d515 +0x09:  lea    0x8eb68(%eax),%ecx
0868d51b +0x0f:  lea    -0x10(%ebp),%eax
0868d51e +0x12:  lea    0xc(%ebp),%edx
0868d521 +0x15:  mov    %edx,0x8(%esp)
0868d525 +0x19:  mov    %ecx,0x4(%esp)
0868d529 +0x1d:  mov    %eax,(%esp)
0868d52c +0x20:  call   080ce89a <_GLOBAL__I__ZN10BingoEventC2Ev+0x36e7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x36e7
0868d531 +0x25:  sub    $0x4,%esp
0868d534 +0x28:  mov    0x8(%ebp),%eax
0868d537 +0x2b:  lea    0x8eb68(%eax),%edx
0868d53d +0x31:  lea    -0xc(%ebp),%eax
0868d540 +0x34:  mov    %edx,0x4(%esp)
0868d544 +0x38:  mov    %eax,(%esp)
0868d547 +0x3b:  call   080cd2c8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2115>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2115
0868d54c +0x40:  sub    $0x4,%esp
0868d54f +0x43:  lea    -0xc(%ebp),%eax
0868d552 +0x46:  mov    %eax,0x4(%esp)
0868d556 +0x4a:  lea    -0x10(%ebp),%eax
0868d559 +0x4d:  mov    %eax,(%esp)
0868d55c +0x50:  call   081b47d4 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x48>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x48
0868d561 +0x55:  test   %al,%al
0868d563 +0x57:  je     0868d57e <+0x72>
0868d565 +0x59:  lea    -0x10(%ebp),%eax
0868d568 +0x5c:  mov    %eax,(%esp)
0868d56b +0x5f:  call   080ce8da <_GLOBAL__I__ZN10BingoEventC2Ev+0x3727>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3727
0868d570 +0x64:  mov    0x10(%ebp),%ecx
0868d573 +0x67:  mov    0x8(%eax),%edx
0868d576 +0x6a:  mov    0x4(%eax),%eax
0868d579 +0x6d:  mov    %eax,(%ecx)
0868d57b +0x6f:  mov    %edx,0x4(%ecx)
0868d57e +0x72:  leave
0868d57f +0x73:  ret
```

## 反编译 C

```c
// CUser::get_ingame_event_history @ 0x868d50c

/* CUser::get_ingame_event_history(int, std::pair<int, int>&) */

void __thiscall CUser::get_ingame_event_history(CUser *this,int param_1,pair *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>> local_14 [4];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_10 [12];
  
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::find((int *)local_14);
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator->(local_14);
    uVar1 = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)param_2 = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}
```
