# getGuildExpWeight

`_ZN20GuildParameterScript17getGuildExpWeightEi`

`GuildParameterScript::getGuildExpWeight(int)`

| 类 | 地址 |
|---|---|
| `GuildParameterScript` | `0x089795de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089795de  _ZN20GuildParameterScript17getGuildExpWeightEi
#           GuildParameterScript::getGuildExpWeight(int)
# range [0x089795de, 0x08979647]
089795de +0x00:  push   %ebp
089795df +0x01:  mov    %esp,%ebp
089795e1 +0x03:  sub    $0x28,%esp
089795e4 +0x06:  mov    0x8(%ebp),%eax
089795e7 +0x09:  lea    0x44(%eax),%ecx
089795ea +0x0c:  lea    -0x10(%ebp),%eax
089795ed +0x0f:  lea    0xc(%ebp),%edx
089795f0 +0x12:  mov    %edx,0x8(%esp)
089795f4 +0x16:  mov    %ecx,0x4(%esp)
089795f8 +0x1a:  mov    %eax,(%esp)
089795fb +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08979600 +0x22:  sub    $0x4,%esp
08979603 +0x25:  mov    0x8(%ebp),%eax
08979606 +0x28:  lea    0x44(%eax),%edx
08979609 +0x2b:  lea    -0xc(%ebp),%eax
0897960c +0x2e:  mov    %edx,0x4(%esp)
08979610 +0x32:  mov    %eax,(%esp)
08979613 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08979618 +0x3a:  sub    $0x4,%esp
0897961b +0x3d:  lea    -0xc(%ebp),%eax
0897961e +0x40:  mov    %eax,0x4(%esp)
08979622 +0x44:  lea    -0x10(%ebp),%eax
08979625 +0x47:  mov    %eax,(%esp)
08979628 +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0897962d +0x4f:  test   %al,%al
0897962f +0x51:  je     08979641 <+0x63>
08979631 +0x53:  lea    -0x10(%ebp),%eax
08979634 +0x56:  mov    %eax,(%esp)
08979637 +0x59:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0897963c +0x5e:  mov    0x4(%eax),%eax
0897963f +0x61:  jmp    08979646 <+0x68>
08979641 +0x63:  mov    $0x0,%eax
08979646 +0x68:  leave
08979647 +0x69:  ret
```

## 反编译 C

```c
// GuildParameterScript::getGuildExpWeight @ 0x89795de

/* GuildParameterScript::getGuildExpWeight(int) */

undefined4 GuildParameterScript::getGuildExpWeight(int param_1)

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
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
