# set_visited_map_goto

`_ZN13CBattle_Field20set_visited_map_gotoEii`

`CBattle_Field::set_visited_map_goto(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08308a24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08308a24  _ZN13CBattle_Field20set_visited_map_gotoEii
#           CBattle_Field::set_visited_map_goto(int, int)
# range [0x08308a24, 0x08308ae5]
08308a24 +0x00:  push   %ebp
08308a25 +0x01:  mov    %esp,%ebp
08308a27 +0x03:  sub    $0x28,%esp
08308a2a +0x06:  movl   $0xffffffff,-0xc(%ebp)
08308a31 +0x0d:  movl   $0xffffffff,-0x10(%ebp)
08308a38 +0x14:  lea    -0x10(%ebp),%eax
08308a3b +0x17:  mov    %eax,0x8(%esp)
08308a3f +0x1b:  lea    -0xc(%ebp),%eax
08308a42 +0x1e:  mov    %eax,0x4(%esp)
08308a46 +0x22:  mov    0x8(%ebp),%eax
08308a49 +0x25:  mov    %eax,(%esp)
08308a4c +0x28:  call   08300e44 <_ZN13CBattle_Field12getLastPosXYERiS0_>  ; CBattle_Field::getLastPosXY(int&, int&)
08308a51 +0x2d:  mov    -0xc(%ebp),%eax
08308a54 +0x30:  cmp    0xc(%ebp),%eax
08308a57 +0x33:  jne    08308a61 <+0x3d>
08308a59 +0x35:  mov    -0x10(%ebp),%eax
08308a5c +0x38:  cmp    0x10(%ebp),%eax
08308a5f +0x3b:  je     08308a88 <+0x64>
08308a61 +0x3d:  movl   $0x0,0xc(%esp)
08308a69 +0x45:  mov    0x10(%ebp),%eax
08308a6c +0x48:  mov    %eax,0x8(%esp)
08308a70 +0x4c:  mov    0xc(%ebp),%eax
08308a73 +0x4f:  mov    %eax,0x4(%esp)
08308a77 +0x53:  mov    0x8(%ebp),%eax
08308a7a +0x56:  mov    %eax,(%esp)
08308a7d +0x59:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08308a82 +0x5e:  movb   $0x1,0x2(%eax)
08308a86 +0x62:  jmp    08308ae4 <+0xc0>
08308a88 +0x64:  mov    0x8(%ebp),%eax
08308a8b +0x67:  mov    %eax,(%esp)
08308a8e +0x6a:  call   0830df2e <_ZN13CBattle_Field18getLayeredMapIndexEv>  ; CBattle_Field::getLayeredMapIndex()
08308a93 +0x6f:  test   %eax,%eax
08308a95 +0x71:  sete   %al
08308a98 +0x74:  test   %al,%al
08308a9a +0x76:  je     08308ac3 <+0x9f>
08308a9c +0x78:  movl   $0x1,0xc(%esp)
08308aa4 +0x80:  mov    0x10(%ebp),%eax
08308aa7 +0x83:  mov    %eax,0x8(%esp)
08308aab +0x87:  mov    0xc(%ebp),%eax
08308aae +0x8a:  mov    %eax,0x4(%esp)
08308ab2 +0x8e:  mov    0x8(%ebp),%eax
08308ab5 +0x91:  mov    %eax,(%esp)
08308ab8 +0x94:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08308abd +0x99:  movb   $0x1,0x2(%eax)
08308ac1 +0x9d:  jmp    08308ae4 <+0xc0>
08308ac3 +0x9f:  mov    0x8(%ebp),%eax
08308ac6 +0xa2:  mov    %eax,(%esp)
08308ac9 +0xa5:  call   0830df2e <_ZN13CBattle_Field18getLayeredMapIndexEv>  ; CBattle_Field::getLayeredMapIndex()
08308ace +0xaa:  sub    $0x1,%eax
08308ad1 +0xad:  mov    %eax,0x4(%esp)
08308ad5 +0xb1:  mov    0x8(%ebp),%eax
08308ad8 +0xb4:  mov    %eax,(%esp)
08308adb +0xb7:  call   0830df88 <_ZN13CBattle_Field22getLayeredMapInfoIndexEi>  ; CBattle_Field::getLayeredMapInfoIndex(int)
08308ae0 +0xbc:  movb   $0x1,0x2(%eax)
08308ae4 +0xc0:  leave
08308ae5 +0xc1:  ret
```

## 反编译 C

```c
// CBattle_Field::set_visited_map_goto @ 0x8308a24

/* CBattle_Field::set_visited_map_goto(int, int) */

void __thiscall CBattle_Field::set_visited_map_goto(CBattle_Field *this,int param_1,int param_2)

{
  int iVar1;
  int local_14;
  int local_10 [3];
  
  local_10[0] = -1;
  local_14 = -1;
  getLastPosXY(this,local_10,&local_14);
  if ((local_10[0] == param_1) && (local_14 == param_2)) {
    iVar1 = getLayeredMapIndex(this);
    if (iVar1 == 0) {
      iVar1 = GetMapInfoFromPos(this,param_1,param_2,true);
      *(undefined1 *)(iVar1 + 2) = 1;
    }
    else {
      iVar1 = getLayeredMapIndex(this);
      iVar1 = getLayeredMapInfoIndex(this,iVar1 + -1);
      *(undefined1 *)(iVar1 + 2) = 1;
    }
  }
  else {
    iVar1 = GetMapInfoFromPos(this,param_1,param_2,false);
    *(undefined1 *)(iVar1 + 2) = 1;
  }
  return;
}
```
