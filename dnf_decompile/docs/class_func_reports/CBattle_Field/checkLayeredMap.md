# checkLayeredMap

`_ZN13CBattle_Field15checkLayeredMapEii`

`CBattle_Field::checkLayeredMap(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830e32e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830e32e  _ZN13CBattle_Field15checkLayeredMapEii
#           CBattle_Field::checkLayeredMap(int, int)
# range [0x0830e32e, 0x0830e3da]
0830e32e +0x00:  push   %ebp
0830e32f +0x01:  mov    %esp,%ebp
0830e331 +0x03:  push   %ebx
0830e332 +0x04:  sub    $0x24,%esp
0830e335 +0x07:  mov    0x8(%ebp),%eax
0830e338 +0x0a:  mov    %eax,(%esp)
0830e33b +0x0d:  call   0822d052 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x26fc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x26fc
0830e340 +0x12:  mov    %eax,-0x10(%ebp)
0830e343 +0x15:  cmpl   $0x0,-0x10(%ebp)
0830e347 +0x19:  je     0830e3d5 <+0xa7>
0830e34d +0x1f:  mov    0x10(%ebp),%eax
0830e350 +0x22:  mov    %eax,0x8(%esp)
0830e354 +0x26:  mov    0xc(%ebp),%eax
0830e357 +0x29:  mov    %eax,0x4(%esp)
0830e35b +0x2d:  mov    -0x10(%ebp),%eax
0830e35e +0x30:  mov    %eax,(%esp)
0830e361 +0x33:  call   0822adc2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46c
0830e366 +0x38:  mov    %eax,-0xc(%ebp)
0830e369 +0x3b:  cmpl   $0x0,-0xc(%ebp)
0830e36d +0x3f:  je     0830e388 <+0x5a>
0830e36f +0x41:  mov    -0xc(%ebp),%eax
0830e372 +0x44:  add    $0x1c,%eax
0830e375 +0x47:  mov    %eax,(%esp)
0830e378 +0x4a:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0830e37d +0x4f:  test   %eax,%eax
0830e37f +0x51:  je     0830e388 <+0x5a>
0830e381 +0x53:  mov    $0x1,%eax
0830e386 +0x58:  jmp    0830e38d <+0x5f>
0830e388 +0x5a:  mov    $0x0,%eax
0830e38d +0x5f:  test   %al,%al
0830e38f +0x61:  je     0830e3d5 <+0xa7>
0830e391 +0x63:  mov    -0xc(%ebp),%eax
0830e394 +0x66:  add    $0x1c,%eax
0830e397 +0x69:  mov    %eax,(%esp)
0830e39a +0x6c:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0830e39f +0x71:  mov    %eax,%ebx
0830e3a1 +0x73:  mov    0x8(%ebp),%eax
0830e3a4 +0x76:  mov    %eax,(%esp)
0830e3a7 +0x79:  call   0830df2e <_ZN13CBattle_Field18getLayeredMapIndexEv>  ; CBattle_Field::getLayeredMapIndex()
0830e3ac +0x7e:  add    $0x1,%eax
0830e3af +0x81:  cmp    %eax,%ebx
0830e3b1 +0x83:  setg   %al
0830e3b4 +0x86:  test   %al,%al
0830e3b6 +0x88:  je     0830e3c3 <+0x95>
0830e3b8 +0x8a:  mov    0x8(%ebp),%eax
0830e3bb +0x8d:  mov    %eax,(%esp)
0830e3be +0x90:  call   0830df3c <_ZN13CBattle_Field18setLayeredMapIndexEv>  ; CBattle_Field::setLayeredMapIndex()
0830e3c3 +0x95:  mov    0x8(%ebp),%eax
0830e3c6 +0x98:  mov    %eax,(%esp)
0830e3c9 +0x9b:  call   0830df66 <_ZN13CBattle_Field24getCurrentLayeredMapInfoEv>  ; CBattle_Field::getCurrentLayeredMapInfo()
0830e3ce +0xa0:  movb   $0x1,0xe8(%eax)
0830e3d5 +0xa7:  add    $0x24,%esp
0830e3d8 +0xaa:  pop    %ebx
0830e3d9 +0xab:  pop    %ebp
0830e3da +0xac:  ret
```

## 反编译 C

```c
// CBattle_Field::checkLayeredMap @ 0x830e32e

/* CBattle_Field::checkLayeredMap(int, int) */

void __thiscall CBattle_Field::checkLayeredMap(CBattle_Field *this,int param_1,int param_2)

{
  bool bVar1;
  MazeScript *this_00;
  int iVar2;
  int iVar3;
  
  this_00 = (MazeScript *)getMaze(this);
  if (this_00 != (MazeScript *)0x0) {
    iVar2 = MazeScript::getGridR(this_00,param_1,param_2);
    if ((iVar2 == 0) ||
       (iVar3 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(iVar2 + 0x1c)), iVar3 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(iVar2 + 0x1c));
      iVar3 = getLayeredMapIndex(this);
      if (iVar3 + 1 < iVar2) {
        setLayeredMapIndex(this);
      }
      iVar2 = getCurrentLayeredMapInfo(this);
      *(undefined1 *)(iVar2 + 0xe8) = 1;
    }
    return;
  }
  return;
}
```
