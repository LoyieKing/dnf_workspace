# getGuildExpBook

`_ZN20GuildParameterScript15getGuildExpBookEi`

`GuildParameterScript::getGuildExpBook(int)`

| 类 | 地址 |
|---|---|
| `GuildParameterScript` | `0x08979672` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08979672  _ZN20GuildParameterScript15getGuildExpBookEi
#           GuildParameterScript::getGuildExpBook(int)
# range [0x08979672, 0x089796db]
08979672 +0x00:  push   %ebp
08979673 +0x01:  mov    %esp,%ebp
08979675 +0x03:  sub    $0x28,%esp
08979678 +0x06:  mov    0x8(%ebp),%eax
0897967b +0x09:  lea    0x10(%eax),%ecx
0897967e +0x0c:  lea    -0x10(%ebp),%eax
08979681 +0x0f:  lea    0xc(%ebp),%edx
08979684 +0x12:  mov    %edx,0x8(%esp)
08979688 +0x16:  mov    %ecx,0x4(%esp)
0897968c +0x1a:  mov    %eax,(%esp)
0897968f +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08979694 +0x22:  sub    $0x4,%esp
08979697 +0x25:  mov    0x8(%ebp),%eax
0897969a +0x28:  lea    0x10(%eax),%edx
0897969d +0x2b:  lea    -0xc(%ebp),%eax
089796a0 +0x2e:  mov    %edx,0x4(%esp)
089796a4 +0x32:  mov    %eax,(%esp)
089796a7 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
089796ac +0x3a:  sub    $0x4,%esp
089796af +0x3d:  lea    -0xc(%ebp),%eax
089796b2 +0x40:  mov    %eax,0x4(%esp)
089796b6 +0x44:  lea    -0x10(%ebp),%eax
089796b9 +0x47:  mov    %eax,(%esp)
089796bc +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
089796c1 +0x4f:  test   %al,%al
089796c3 +0x51:  je     089796d5 <+0x63>
089796c5 +0x53:  lea    -0x10(%ebp),%eax
089796c8 +0x56:  mov    %eax,(%esp)
089796cb +0x59:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
089796d0 +0x5e:  mov    0x4(%eax),%eax
089796d3 +0x61:  jmp    089796da <+0x68>
089796d5 +0x63:  mov    $0x0,%eax
089796da +0x68:  leave
089796db +0x69:  ret
```

## 反编译 C

```c
// GuildParameterScript::getGuildExpBook @ 0x8979672

/* GuildParameterScript::getGuildExpBook(int) */

undefined4 GuildParameterScript::getGuildExpBook(int param_1)

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
