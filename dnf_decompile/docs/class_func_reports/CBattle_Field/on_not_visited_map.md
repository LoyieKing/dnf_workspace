# on_not_visited_map

`_ZN13CBattle_Field18on_not_visited_mapEiiRb`

`CBattle_Field::on_not_visited_map(int, int, bool&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08307d0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307d0c  _ZN13CBattle_Field18on_not_visited_mapEiiRb
#           CBattle_Field::on_not_visited_map(int, int, bool&)
# range [0x08307d0c, 0x08307d7b]
08307d0c +0x00:  push   %ebp
08307d0d +0x01:  mov    %esp,%ebp
08307d0f +0x03:  push   %ebx
08307d10 +0x04:  sub    $0x24,%esp
08307d13 +0x07:  mov    0x14(%ebp),%eax
08307d16 +0x0a:  movb   $0x1,(%eax)
08307d19 +0x0d:  mov    0x8(%ebp),%eax
08307d1c +0x10:  mov    %eax,(%esp)
08307d1f +0x13:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08307d24 +0x18:  movb   $0x1,0x1(%eax)
08307d28 +0x1c:  mov    0x10(%ebp),%eax
08307d2b +0x1f:  mov    %eax,0x8(%esp)
08307d2f +0x23:  mov    0xc(%ebp),%eax
08307d32 +0x26:  mov    %eax,0x4(%esp)
08307d36 +0x2a:  mov    0x8(%ebp),%eax
08307d39 +0x2d:  mov    %eax,(%esp)
08307d3c +0x30:  call   0830878e <_ZN13CBattle_Field14swap_curpos_xyEii>  ; CBattle_Field::swap_curpos_xy(int, int)
08307d41 +0x35:  mov    0x8(%ebp),%eax
08307d44 +0x38:  mov    %eax,(%esp)
08307d47 +0x3b:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08307d4c +0x40:  mov    0x4(%eax),%ebx
08307d4f +0x43:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08307d54 +0x48:  mov    %ebx,0x4(%esp)
08307d58 +0x4c:  mov    %eax,(%esp)
08307d5b +0x4f:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
08307d60 +0x54:  mov    %eax,-0xc(%ebp)
08307d63 +0x57:  cmpl   $0x0,-0xc(%ebp)
08307d67 +0x5b:  je     08307d75 <+0x69>
08307d69 +0x5d:  mov    0x8(%ebp),%eax
08307d6c +0x60:  mov    -0xc(%ebp),%edx
08307d6f +0x63:  mov    %edx,0x108(%eax)
08307d75 +0x69:  add    $0x24,%esp
08307d78 +0x6c:  pop    %ebx
08307d79 +0x6d:  pop    %ebp
08307d7a +0x6e:  ret
08307d7b +0x6f:  nop
```

## 反编译 C

```c
// CBattle_Field::on_not_visited_map @ 0x8307d0c

/* CBattle_Field::on_not_visited_map(int, int, bool&) */

void __thiscall
CBattle_Field::on_not_visited_map(CBattle_Field *this,int param_1,int param_2,bool *param_3)

{
  int iVar1;
  
  *param_3 = true;
  iVar1 = GetCurrentMapInfo(this);
  *(undefined1 *)(iVar1 + 1) = 1;
  swap_curpos_xy(this,param_1,param_2);
  GetCurrentMapInfo(this);
  iVar1 = G_CDataManager();
  iVar1 = CDataManager::find_map(iVar1);
  if (iVar1 != 0) {
    *(int *)(this + 0x108) = iVar1;
  }
  return;
}
```
