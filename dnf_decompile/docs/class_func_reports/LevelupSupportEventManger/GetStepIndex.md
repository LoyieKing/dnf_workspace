# GetStepIndex

`_ZN25LevelupSupportEventManger12GetStepIndexEi`

`LevelupSupportEventManger::GetStepIndex(int)`

| 类 | 地址 |
|---|---|
| `LevelupSupportEventManger` | `0x08147362` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08147362  _ZN25LevelupSupportEventManger12GetStepIndexEi
#           LevelupSupportEventManger::GetStepIndex(int)
# range [0x08147362, 0x081473cb]
08147362 +0x00:  push   %ebp
08147363 +0x01:  mov    %esp,%ebp
08147365 +0x03:  sub    $0x28,%esp
08147368 +0x06:  mov    0x8(%ebp),%eax
0814736b +0x09:  lea    0x1c(%eax),%ecx
0814736e +0x0c:  lea    -0x10(%ebp),%eax
08147371 +0x0f:  lea    0xc(%ebp),%edx
08147374 +0x12:  mov    %edx,0x8(%esp)
08147378 +0x16:  mov    %ecx,0x4(%esp)
0814737c +0x1a:  mov    %eax,(%esp)
0814737f +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08147384 +0x22:  sub    $0x4,%esp
08147387 +0x25:  mov    0x8(%ebp),%eax
0814738a +0x28:  lea    0x1c(%eax),%edx
0814738d +0x2b:  lea    -0xc(%ebp),%eax
08147390 +0x2e:  mov    %edx,0x4(%esp)
08147394 +0x32:  mov    %eax,(%esp)
08147397 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0814739c +0x3a:  sub    $0x4,%esp
0814739f +0x3d:  lea    -0xc(%ebp),%eax
081473a2 +0x40:  mov    %eax,0x4(%esp)
081473a6 +0x44:  lea    -0x10(%ebp),%eax
081473a9 +0x47:  mov    %eax,(%esp)
081473ac +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
081473b1 +0x4f:  test   %al,%al
081473b3 +0x51:  je     081473c5 <+0x63>
081473b5 +0x53:  lea    -0x10(%ebp),%eax
081473b8 +0x56:  mov    %eax,(%esp)
081473bb +0x59:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
081473c0 +0x5e:  mov    0x4(%eax),%eax
081473c3 +0x61:  jmp    081473ca <+0x68>
081473c5 +0x63:  mov    $0xffffffff,%eax
081473ca +0x68:  leave
081473cb +0x69:  ret
```

## 反编译 C

```c
// LevelupSupportEventManger::GetStepIndex @ 0x8147362

/* LevelupSupportEventManger::GetStepIndex(int) */

undefined4 LevelupSupportEventManger::GetStepIndex(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
