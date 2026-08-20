# get_recv_pvp_rank_count

`_ZN8PvP_Room23get_recv_pvp_rank_countEv`

`PvP_Room::get_recv_pvp_rank_count()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc2cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc2cc  _ZN8PvP_Room23get_recv_pvp_rank_countEv
#           PvP_Room::get_recv_pvp_rank_count()
# range [0x085dc2cc, 0x085dc33f]
085dc2cc +0x00:  push   %ebp
085dc2cd +0x01:  mov    %esp,%ebp
085dc2cf +0x03:  sub    $0x18,%esp
085dc2d2 +0x06:  movl   $0x0,-0x8(%ebp)
085dc2d9 +0x0d:  movl   $0x0,-0x4(%ebp)
085dc2e0 +0x14:  jmp    085dc32f <+0x63>
085dc2e2 +0x16:  mov    -0x4(%ebp),%edx
085dc2e5 +0x19:  mov    0x8(%ebp),%eax
085dc2e8 +0x1c:  add    $0xc,%edx
085dc2eb +0x1f:  mov    (%eax,%edx,4),%eax
085dc2ee +0x22:  test   %eax,%eax
085dc2f0 +0x24:  je     085dc327 <+0x5b>
085dc2f2 +0x26:  mov    -0x4(%ebp),%edx
085dc2f5 +0x29:  mov    0x8(%ebp),%eax
085dc2f8 +0x2c:  add    $0x14,%edx
085dc2fb +0x2f:  mov    (%eax,%edx,4),%eax
085dc2fe +0x32:  cmp    $0xff,%eax
085dc303 +0x37:  je     085dc32a <+0x5e>
085dc305 +0x39:  mov    0x8(%ebp),%eax
085dc308 +0x3c:  lea    0x5b4(%eax),%edx
085dc30e +0x42:  mov    -0x4(%ebp),%eax
085dc311 +0x45:  mov    %eax,0x4(%esp)
085dc315 +0x49:  mov    %edx,(%esp)
085dc318 +0x4c:  call   085d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>  ; PvpResultRecvFlag::IsRecv(int) const
085dc31d +0x51:  test   %al,%al
085dc31f +0x53:  je     085dc32b <+0x5f>
085dc321 +0x55:  addl   $0x1,-0x8(%ebp)
085dc325 +0x59:  jmp    085dc32b <+0x5f>
085dc327 +0x5b:  nop
085dc328 +0x5c:  jmp    085dc32b <+0x5f>
085dc32a +0x5e:  nop
085dc32b +0x5f:  addl   $0x1,-0x4(%ebp)
085dc32f +0x63:  cmpl   $0x7,-0x4(%ebp)
085dc333 +0x67:  setle  %al
085dc336 +0x6a:  test   %al,%al
085dc338 +0x6c:  jne    085dc2e2 <+0x16>
085dc33a +0x6e:  mov    -0x8(%ebp),%eax
085dc33d +0x71:  leave
085dc33e +0x72:  ret
085dc33f +0x73:  nop
```

## 反编译 C

```c
// PvP_Room::get_recv_pvp_rank_count @ 0x85dc2cc

/* PvP_Room::get_recv_pvp_rank_count() */

int __thiscall PvP_Room::get_recv_pvp_rank_count(PvP_Room *this)

{
  char cVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (((*(int *)(this + (local_8 + 0xc) * 4) != 0) &&
        (*(int *)(this + (local_8 + 0x14) * 4) != 0xff)) &&
       (cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5b4),local_8),
       cVar1 != '\0')) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
