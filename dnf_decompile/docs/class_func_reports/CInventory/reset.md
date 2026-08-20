# reset

`_ZN10CInventory5resetEv`

`CInventory::reset()`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08509a06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08509a06  _ZN10CInventory5resetEv
#           CInventory::reset()
# range [0x08509a06, 0x08509b9d]
08509a06 +0x000:  push   %ebp
08509a07 +0x001:  mov    %esp,%ebp
08509a09 +0x003:  sub    $0x28,%esp
08509a0c +0x006:  mov    0x8(%ebp),%eax
08509a0f +0x009:  movl   $0x0,(%eax)
08509a15 +0x00f:  mov    0x8(%ebp),%eax
08509a18 +0x012:  movl   $0x0,0x4(%eax)
08509a1f +0x019:  mov    0x8(%ebp),%eax
08509a22 +0x01c:  movl   $0x1,0x8(%eax)
08509a29 +0x023:  mov    0x8(%ebp),%eax
08509a2c +0x026:  movl   $0x0,0xc(%eax)
08509a33 +0x02d:  mov    0x8(%ebp),%eax
08509a36 +0x030:  movl   $0x0,0x10(%eax)
08509a3d +0x037:  mov    0x8(%ebp),%eax
08509a40 +0x03a:  movl   $0x0,0x14(%eax)
08509a47 +0x041:  mov    0x8(%ebp),%eax
08509a4a +0x044:  add    $0x1c,%eax
08509a4d +0x047:  movl   $0x632,0x8(%esp)
08509a55 +0x04f:  movl   $0x0,0x4(%esp)
08509a5d +0x057:  mov    %eax,(%esp)
08509a60 +0x05a:  call   0807dcc0 <_init+0x5b8>
08509a65 +0x05f:  mov    0x8(%ebp),%eax
08509a68 +0x062:  mov    0x650(%eax),%eax
08509a6e +0x068:  test   %eax,%eax
08509a70 +0x06a:  je     08509a93 <+0x8d>
08509a72 +0x06c:  mov    0x8(%ebp),%eax
08509a75 +0x06f:  mov    0x650(%eax),%eax
08509a7b +0x075:  movl   $0x4a58,0x8(%esp)
08509a83 +0x07d:  movl   $0x0,0x4(%esp)
08509a8b +0x085:  mov    %eax,(%esp)
08509a8e +0x088:  call   0807dcc0 <_init+0x5b8>
08509a93 +0x08d:  mov    0x8(%ebp),%eax
08509a96 +0x090:  mov    0x654(%eax),%eax
08509a9c +0x096:  test   %eax,%eax
08509a9e +0x098:  je     08509ac1 <+0xbb>
08509aa0 +0x09a:  mov    0x8(%ebp),%eax
08509aa3 +0x09d:  mov    0x654(%eax),%eax
08509aa9 +0x0a3:  movl   $0x1905,0x8(%esp)
08509ab1 +0x0ab:  movl   $0x0,0x4(%esp)
08509ab9 +0x0b3:  mov    %eax,(%esp)
08509abc +0x0b6:  call   0807dcc0 <_init+0x5b8>
08509ac1 +0x0bb:  mov    0x8(%ebp),%eax
08509ac4 +0x0be:  mov    0x6e4(%eax),%eax
08509aca +0x0c4:  test   %eax,%eax
08509acc +0x0c6:  je     08509aef <+0xe9>
08509ace +0x0c8:  mov    0x8(%ebp),%eax
08509ad1 +0x0cb:  mov    0x6e4(%eax),%eax
08509ad7 +0x0d1:  movl   $0x39aa,0x8(%esp)
08509adf +0x0d9:  movl   $0x0,0x4(%esp)
08509ae7 +0x0e1:  mov    %eax,(%esp)
08509aea +0x0e4:  call   0807dcc0 <_init+0x5b8>
08509aef +0x0e9:  mov    0x8(%ebp),%eax
08509af2 +0x0ec:  add    $0x6e8,%eax
08509af7 +0x0f1:  mov    %eax,(%esp)
08509afa +0x0f4:  call   0833a45a <_ZN13user_creature12CCreatureMgr5ResetEv>  ; user_creature::CCreatureMgr::Reset()
08509aff +0x0f9:  mov    0x8(%ebp),%eax
08509b02 +0x0fc:  mov    (%eax),%eax
08509b04 +0x0fe:  mov    0x8(%ebp),%edx
08509b07 +0x101:  add    $0x6e8,%edx
08509b0d +0x107:  mov    %eax,0x4(%esp)
08509b11 +0x10b:  mov    %edx,(%esp)
08509b14 +0x10e:  call   0822d39a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a44
08509b19 +0x113:  mov    0x8(%ebp),%eax
08509b1c +0x116:  add    $0x734,%eax
08509b21 +0x11b:  mov    %eax,(%esp)
08509b24 +0x11e:  call   082f9ae4 <_ZN8WongWork14CAvatarItemMgr5ResetEv>  ; WongWork::CAvatarItemMgr::Reset()
08509b29 +0x123:  mov    0x8(%ebp),%eax
08509b2c +0x126:  add    $0x65c,%eax
08509b31 +0x12b:  movl   $0x28,0x8(%esp)
08509b39 +0x133:  movl   $0x0,0x4(%esp)
08509b41 +0x13b:  mov    %eax,(%esp)
08509b44 +0x13e:  call   0807dcc0 <_init+0x5b8>
08509b49 +0x143:  mov    0x8(%ebp),%eax
08509b4c +0x146:  movl   $0x0,0x18(%eax)
08509b53 +0x14d:  mov    0x8(%ebp),%eax
08509b56 +0x150:  add    $0x658,%eax
08509b5b +0x155:  movl   $0x0,0x4(%esp)
08509b63 +0x15d:  mov    %eax,(%esp)
08509b66 +0x160:  call   0817fee2 <_ZN10AvatarCoin3SetEj>  ; AvatarCoin::Set(unsigned int)
08509b6b +0x165:  movl   $0x0,-0xc(%ebp)
08509b72 +0x16c:  jmp    08509b91 <+0x18b>
08509b74 +0x16e:  mov    -0xc(%ebp),%eax
08509b77 +0x171:  add    $0xd0,%eax
08509b7c +0x176:  shl    $0x3,%eax
08509b7f +0x179:  add    0x8(%ebp),%eax
08509b82 +0x17c:  add    $0x4,%eax
08509b85 +0x17f:  mov    %eax,(%esp)
08509b88 +0x182:  call   0850d348 <_GLOBAL__I_g_emptySlot+0x27d>  ; global constructors keyed to g_emptySlot+0x27d
08509b8d +0x187:  addl   $0x1,-0xc(%ebp)
08509b91 +0x18b:  cmpl   $0xb,-0xc(%ebp)
08509b95 +0x18f:  setle  %al
08509b98 +0x192:  test   %al,%al
08509b9a +0x194:  jne    08509b74 <+0x16e>
08509b9c +0x196:  leave
08509b9d +0x197:  ret
```

## 反编译 C

```c
// CInventory::reset @ 0x8509a06

/* CInventory::reset() */

void __thiscall CInventory::reset(CInventory *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  memset(this + 0x1c,0,0x632);
  if (*(int *)(this + 0x650) != 0) {
    memset(*(void **)(this + 0x650),0,0x4a58);
  }
  if (*(int *)(this + 0x654) != 0) {
    memset(*(void **)(this + 0x654),0,0x1905);
  }
  if (*(int *)(this + 0x6e4) != 0) {
    memset(*(void **)(this + 0x6e4),0,0x39aa);
  }
  user_creature::CCreatureMgr::Reset((CCreatureMgr *)(this + 0x6e8));
  user_creature::CCreatureMgr::SetUser((CCreatureMgr *)(this + 0x6e8),*(CUser **)this);
  WongWork::CAvatarItemMgr::Reset((CAvatarItemMgr *)(this + 0x734));
  memset(this + 0x65c,0,0x28);
  *(undefined4 *)(this + 0x18) = 0;
  AvatarCoin::Set((AvatarCoin *)(this + 0x658),0);
  for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
    AvatarVisibleData::init((AvatarVisibleData *)(this + (local_10 + 0xd0) * 8 + 4));
  }
  return;
}
```
