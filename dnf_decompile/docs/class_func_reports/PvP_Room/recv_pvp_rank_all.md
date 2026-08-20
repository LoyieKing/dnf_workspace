# recv_pvp_rank_all

`_ZNK8PvP_Room17recv_pvp_rank_allEv`

`PvP_Room::recv_pvp_rank_all() const`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc4ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc4ba  _ZNK8PvP_Room17recv_pvp_rank_allEv
#           PvP_Room::recv_pvp_rank_all() const
# range [0x085dc4ba, 0x085dc52b]
085dc4ba +0x00:  push   %ebp
085dc4bb +0x01:  mov    %esp,%ebp
085dc4bd +0x03:  sub    $0x18,%esp
085dc4c0 +0x06:  movl   $0x0,-0x4(%ebp)
085dc4c7 +0x0d:  jmp    085dc51a <+0x60>
085dc4c9 +0x0f:  mov    -0x4(%ebp),%edx
085dc4cc +0x12:  mov    0x8(%ebp),%eax
085dc4cf +0x15:  add    $0xc,%edx
085dc4d2 +0x18:  mov    (%eax,%edx,4),%eax
085dc4d5 +0x1b:  test   %eax,%eax
085dc4d7 +0x1d:  je     085dc512 <+0x58>
085dc4d9 +0x1f:  mov    -0x4(%ebp),%edx
085dc4dc +0x22:  mov    0x8(%ebp),%eax
085dc4df +0x25:  add    $0x14,%edx
085dc4e2 +0x28:  mov    (%eax,%edx,4),%eax
085dc4e5 +0x2b:  cmp    $0xff,%eax
085dc4ea +0x30:  je     085dc515 <+0x5b>
085dc4ec +0x32:  mov    0x8(%ebp),%eax
085dc4ef +0x35:  lea    0x5b4(%eax),%edx
085dc4f5 +0x3b:  mov    -0x4(%ebp),%eax
085dc4f8 +0x3e:  mov    %eax,0x4(%esp)
085dc4fc +0x42:  mov    %edx,(%esp)
085dc4ff +0x45:  call   085d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>  ; PvpResultRecvFlag::IsRecv(int) const
085dc504 +0x4a:  xor    $0x1,%eax
085dc507 +0x4d:  test   %al,%al
085dc509 +0x4f:  je     085dc516 <+0x5c>
085dc50b +0x51:  mov    $0x0,%eax
085dc510 +0x56:  jmp    085dc52a <+0x70>
085dc512 +0x58:  nop
085dc513 +0x59:  jmp    085dc516 <+0x5c>
085dc515 +0x5b:  nop
085dc516 +0x5c:  addl   $0x1,-0x4(%ebp)
085dc51a +0x60:  cmpl   $0x7,-0x4(%ebp)
085dc51e +0x64:  setle  %al
085dc521 +0x67:  test   %al,%al
085dc523 +0x69:  jne    085dc4c9 <+0xf>
085dc525 +0x6b:  mov    $0x1,%eax
085dc52a +0x70:  leave
085dc52b +0x71:  ret
```

## 反编译 C

```c
// PvP_Room::recv_pvp_rank_all @ 0x85dc4ba

/* PvP_Room::recv_pvp_rank_all() const */

undefined4 __thiscall PvP_Room::recv_pvp_rank_all(PvP_Room *this)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (7 < local_8) {
      return 1;
    }
    if (((*(int *)(this + (local_8 + 0xc) * 4) != 0) &&
        (*(int *)(this + (local_8 + 0x14) * 4) != 0xff)) &&
       (cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5b4),local_8),
       cVar1 != '\x01')) break;
    local_8 = local_8 + 1;
  }
  return 0;
}
```
