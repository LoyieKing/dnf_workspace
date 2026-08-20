# set_visited_map

`_ZN13CBattle_Field15set_visited_mapEiib`

`CBattle_Field::set_visited_map(int, int, bool)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x083086d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083086d2  _ZN13CBattle_Field15set_visited_mapEiib
#           CBattle_Field::set_visited_map(int, int, bool)
# range [0x083086d2, 0x0830878d]
083086d2 +0x00:  push   %ebp
083086d3 +0x01:  mov    %esp,%ebp
083086d5 +0x03:  sub    $0x38,%esp
083086d8 +0x06:  mov    0x14(%ebp),%eax
083086db +0x09:  mov    %al,-0x1c(%ebp)
083086de +0x0c:  movl   $0xffffffff,-0xc(%ebp)
083086e5 +0x13:  movl   $0xffffffff,-0x10(%ebp)
083086ec +0x1a:  lea    -0x10(%ebp),%eax
083086ef +0x1d:  mov    %eax,0x8(%esp)
083086f3 +0x21:  lea    -0xc(%ebp),%eax
083086f6 +0x24:  mov    %eax,0x4(%esp)
083086fa +0x28:  mov    0x8(%ebp),%eax
083086fd +0x2b:  mov    %eax,(%esp)
08308700 +0x2e:  call   08300da6 <_ZN13CBattle_Field11getCurPosXYERiS0_>  ; CBattle_Field::getCurPosXY(int&, int&)
08308705 +0x33:  mov    -0xc(%ebp),%eax
08308708 +0x36:  cmp    0xc(%ebp),%eax
0830870b +0x39:  jne    08308715 <+0x43>
0830870d +0x3b:  mov    -0x10(%ebp),%eax
08308710 +0x3e:  cmp    0x10(%ebp),%eax
08308713 +0x41:  je     08308729 <+0x57>
08308715 +0x43:  mov    0x8(%ebp),%eax
08308718 +0x46:  mov    %eax,(%esp)
0830871b +0x49:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08308720 +0x4e:  movzbl -0x1c(%ebp),%edx
08308724 +0x52:  mov    %dl,0x1(%eax)
08308727 +0x55:  jmp    0830878b <+0xb9>
08308729 +0x57:  mov    0x8(%ebp),%eax
0830872c +0x5a:  mov    %eax,(%esp)
0830872f +0x5d:  call   0830df2e <_ZN13CBattle_Field18getLayeredMapIndexEv>  ; CBattle_Field::getLayeredMapIndex()
08308734 +0x62:  test   %eax,%eax
08308736 +0x64:  sete   %al
08308739 +0x67:  test   %al,%al
0830873b +0x69:  je     08308767 <+0x95>
0830873d +0x6b:  mov    -0x10(%ebp),%edx
08308740 +0x6e:  mov    -0xc(%ebp),%eax
08308743 +0x71:  movl   $0x1,0xc(%esp)
0830874b +0x79:  mov    %edx,0x8(%esp)
0830874f +0x7d:  mov    %eax,0x4(%esp)
08308753 +0x81:  mov    0x8(%ebp),%eax
08308756 +0x84:  mov    %eax,(%esp)
08308759 +0x87:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
0830875e +0x8c:  movzbl -0x1c(%ebp),%edx
08308762 +0x90:  mov    %dl,0x1(%eax)
08308765 +0x93:  jmp    0830878b <+0xb9>
08308767 +0x95:  mov    0x8(%ebp),%eax
0830876a +0x98:  mov    %eax,(%esp)
0830876d +0x9b:  call   0830df2e <_ZN13CBattle_Field18getLayeredMapIndexEv>  ; CBattle_Field::getLayeredMapIndex()
08308772 +0xa0:  sub    $0x1,%eax
08308775 +0xa3:  mov    %eax,0x4(%esp)
08308779 +0xa7:  mov    0x8(%ebp),%eax
0830877c +0xaa:  mov    %eax,(%esp)
0830877f +0xad:  call   0830df88 <_ZN13CBattle_Field22getLayeredMapInfoIndexEi>  ; CBattle_Field::getLayeredMapInfoIndex(int)
08308784 +0xb2:  movzbl -0x1c(%ebp),%edx
08308788 +0xb6:  mov    %dl,0x1(%eax)
0830878b +0xb9:  leave
0830878c +0xba:  ret
0830878d +0xbb:  nop
```

## 反编译 C

```c
// CBattle_Field::set_visited_map @ 0x83086d2

/* CBattle_Field::set_visited_map(int, int, bool) */

void __thiscall
CBattle_Field::set_visited_map(CBattle_Field *this,int param_1,int param_2,bool param_3)

{
  int iVar1;
  int local_14;
  int local_10 [3];
  
  local_10[0] = -1;
  local_14 = -1;
  getCurPosXY(this,local_10,&local_14);
  if ((local_10[0] == param_1) && (local_14 == param_2)) {
    iVar1 = getLayeredMapIndex(this);
    if (iVar1 == 0) {
      iVar1 = GetMapInfoFromPos(this,local_10[0],local_14,true);
      *(bool *)(iVar1 + 1) = param_3;
    }
    else {
      iVar1 = getLayeredMapIndex(this);
      iVar1 = getLayeredMapInfoIndex(this,iVar1 + -1);
      *(bool *)(iVar1 + 1) = param_3;
    }
  }
  else {
    iVar1 = GetCurrentMapInfo(this);
    *(bool *)(iVar1 + 1) = param_3;
  }
  return;
}
```
