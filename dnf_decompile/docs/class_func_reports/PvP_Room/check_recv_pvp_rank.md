# check_recv_pvp_rank

`_ZN8PvP_Room19check_recv_pvp_rankEv`

`PvP_Room::check_recv_pvp_rank()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc3ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc3ca  _ZN8PvP_Room19check_recv_pvp_rankEv
#           PvP_Room::check_recv_pvp_rank()
# range [0x085dc3ca, 0x085dc475]
085dc3ca +0x00:  push   %ebp
085dc3cb +0x01:  mov    %esp,%ebp
085dc3cd +0x03:  push   %ebx
085dc3ce +0x04:  sub    $0x24,%esp
085dc3d1 +0x07:  movb   $0x0,-0xd(%ebp)
085dc3d5 +0x0b:  movl   $0x0,-0xc(%ebp)
085dc3dc +0x12:  jmp    085dc45d <+0x93>
085dc3de +0x14:  mov    -0xc(%ebp),%edx
085dc3e1 +0x17:  mov    0x8(%ebp),%eax
085dc3e4 +0x1a:  add    $0xc,%edx
085dc3e7 +0x1d:  mov    (%eax,%edx,4),%eax
085dc3ea +0x20:  test   %eax,%eax
085dc3ec +0x22:  je     085dc455 <+0x8b>
085dc3ee +0x24:  mov    -0xc(%ebp),%edx
085dc3f1 +0x27:  mov    0x8(%ebp),%eax
085dc3f4 +0x2a:  add    $0x14,%edx
085dc3f7 +0x2d:  mov    (%eax,%edx,4),%eax
085dc3fa +0x30:  cmp    $0xff,%eax
085dc3ff +0x35:  je     085dc458 <+0x8e>
085dc401 +0x37:  mov    0x8(%ebp),%eax
085dc404 +0x3a:  lea    0x5b4(%eax),%edx
085dc40a +0x40:  mov    -0xc(%ebp),%eax
085dc40d +0x43:  mov    %eax,0x4(%esp)
085dc411 +0x47:  mov    %edx,(%esp)
085dc414 +0x4a:  call   085d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>  ; PvpResultRecvFlag::IsRecv(int) const
085dc419 +0x4f:  xor    $0x1,%eax
085dc41c +0x52:  test   %al,%al
085dc41e +0x54:  je     085dc459 <+0x8f>
085dc420 +0x56:  mov    0x8(%ebp),%eax
085dc423 +0x59:  movb   $0x0,0xc0(%eax)
085dc42a +0x60:  mov    -0xc(%ebp),%edx
085dc42d +0x63:  mov    0x8(%ebp),%eax
085dc430 +0x66:  add    $0xc,%edx
085dc433 +0x69:  mov    (%eax,%edx,4),%ebx
085dc436 +0x6c:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
085dc43b +0x71:  movl   $0x1,0x8(%esp)
085dc443 +0x79:  mov    %ebx,0x4(%esp)
085dc447 +0x7d:  mov    %eax,(%esp)
085dc44a +0x80:  call   08297eaa <_ZN12CGameManager11CheckOutPvpEP5CUserb>  ; CGameManager::CheckOutPvp(CUser*, bool)
085dc44f +0x85:  movb   $0x1,-0xd(%ebp)
085dc453 +0x89:  jmp    085dc459 <+0x8f>
085dc455 +0x8b:  nop
085dc456 +0x8c:  jmp    085dc459 <+0x8f>
085dc458 +0x8e:  nop
085dc459 +0x8f:  addl   $0x1,-0xc(%ebp)
085dc45d +0x93:  cmpl   $0x7,-0xc(%ebp)
085dc461 +0x97:  setle  %al
085dc464 +0x9a:  test   %al,%al
085dc466 +0x9c:  jne    085dc3de <+0x14>
085dc46c +0xa2:  movzbl -0xd(%ebp),%eax
085dc470 +0xa6:  add    $0x24,%esp
085dc473 +0xa9:  pop    %ebx
085dc474 +0xaa:  pop    %ebp
085dc475 +0xab:  ret
```

## 反编译 C

```c
// PvP_Room::check_recv_pvp_rank @ 0x85dc3ca

/* PvP_Room::check_recv_pvp_rank() */

undefined1 __thiscall PvP_Room::check_recv_pvp_rank(PvP_Room *this)

{
  CUser *pCVar1;
  char cVar2;
  CGameManager *this_00;
  undefined1 local_11;
  int local_10;
  
  local_11 = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (((*(int *)(this + (local_10 + 0xc) * 4) != 0) &&
        (*(int *)(this + (local_10 + 0x14) * 4) != 0xff)) &&
       (cVar2 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5b4),local_10),
       cVar2 != '\x01')) {
      this[0xc0] = (PvP_Room)0x0;
      pCVar1 = *(CUser **)(this + (local_10 + 0xc) * 4);
      this_00 = (CGameManager *)G_CGameManager();
      CGameManager::CheckOutPvp(this_00,pCVar1,true);
      local_11 = 1;
    }
  }
  return local_11;
}
```
