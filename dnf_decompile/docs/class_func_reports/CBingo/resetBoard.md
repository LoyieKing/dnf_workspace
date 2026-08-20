# resetBoard

`_ZN6CBingo10resetBoardEi`

`CBingo::resetBoard(int)`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080ca9b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ca9b8  _ZN6CBingo10resetBoardEi
#           CBingo::resetBoard(int)
# range [0x080ca9b8, 0x080caa63]
080ca9b8 +0x00:  push   %ebp
080ca9b9 +0x01:  mov    %esp,%ebp
080ca9bb +0x03:  sub    $0x28,%esp
080ca9be +0x06:  mov    0xc(%ebp),%eax
080ca9c1 +0x09:  test   %eax,%eax
080ca9c3 +0x0b:  jg     080ca9d7 <+0x1f>
080ca9c5 +0x0d:  mov    0xc(%ebp),%eax
080ca9c8 +0x10:  cmp    $0x1f,%eax
080ca9cb +0x13:  jle    080ca9d7 <+0x1f>
080ca9cd +0x15:  mov    $0x0,%eax
080ca9d2 +0x1a:  jmp    080caa62 <+0xaa>
080ca9d7 +0x1f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080ca9dc +0x24:  lea    0xb580(%eax),%ecx
080ca9e2 +0x2a:  lea    -0x10(%ebp),%eax
080ca9e5 +0x2d:  lea    0xc(%ebp),%edx
080ca9e8 +0x30:  mov    %edx,0x8(%esp)
080ca9ec +0x34:  mov    %ecx,0x4(%esp)
080ca9f0 +0x38:  mov    %eax,(%esp)
080ca9f3 +0x3b:  call   080ce926 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3773>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3773
080ca9f8 +0x40:  sub    $0x4,%esp
080ca9fb +0x43:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080caa00 +0x48:  lea    0xb580(%eax),%edx
080caa06 +0x4e:  lea    -0xc(%ebp),%eax
080caa09 +0x51:  mov    %edx,0x4(%esp)
080caa0d +0x55:  mov    %eax,(%esp)
080caa10 +0x58:  call   080ce952 <_GLOBAL__I__ZN10BingoEventC2Ev+0x379f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x379f
080caa15 +0x5d:  sub    $0x4,%esp
080caa18 +0x60:  lea    -0xc(%ebp),%eax
080caa1b +0x63:  mov    %eax,0x4(%esp)
080caa1f +0x67:  lea    -0x10(%ebp),%eax
080caa22 +0x6a:  mov    %eax,(%esp)
080caa25 +0x6d:  call   080ce978 <_GLOBAL__I__ZN10BingoEventC2Ev+0x37c5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x37c5
080caa2a +0x72:  test   %al,%al
080caa2c +0x74:  je     080caa35 <+0x7d>
080caa2e +0x76:  mov    $0x0,%eax
080caa33 +0x7b:  jmp    080caa62 <+0xaa>
080caa35 +0x7d:  mov    0x8(%ebp),%eax
080caa38 +0x80:  mov    %eax,(%esp)
080caa3b +0x83:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
080caa40 +0x88:  lea    -0x10(%ebp),%eax
080caa43 +0x8b:  mov    %eax,(%esp)
080caa46 +0x8e:  call   080ce98c <_GLOBAL__I__ZN10BingoEventC2Ev+0x37d9>  ; global constructors keyed to BingoEvent::BingoEvent()+0x37d9
080caa4b +0x93:  lea    0x4(%eax),%edx
080caa4e +0x96:  mov    0x8(%ebp),%eax
080caa51 +0x99:  mov    %edx,0x4(%esp)
080caa55 +0x9d:  mov    %eax,(%esp)
080caa58 +0xa0:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
080caa5d +0xa5:  mov    $0x1,%eax
080caa62 +0xaa:  leave
080caa63 +0xab:  ret
```

## 反编译 C

```c
// CBingo::resetBoard @ 0x80ca9b8

/* CBingo::resetBoard(int) */

undefined4 __thiscall CBingo::resetBoard(CBingo *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>> local_14 [4];
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  local_10 [12];
  
  if ((param_1 < 1) && (0x1f < param_1)) {
    uVar2 = 0;
  }
  else {
    G_CDataManager();
    std::
    map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
    ::find((int *)local_14);
    G_CDataManager();
    std::
    map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
            operator==(local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)this);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
              operator->(local_14);
      std::vector<int,std::allocator<int>>::operator=
                ((vector<int,std::allocator<int>> *)this,(vector *)(iVar3 + 4));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
