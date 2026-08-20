# recv_pvp_end_result_all

`_ZNK8PvP_Room23recv_pvp_end_result_allEv`

`PvP_Room::recv_pvp_end_result_all() const`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc07e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc07e  _ZNK8PvP_Room23recv_pvp_end_result_allEv
#           PvP_Room::recv_pvp_end_result_all() const
# range [0x085dc07e, 0x085dc0ef]
085dc07e +0x00:  push   %ebp
085dc07f +0x01:  mov    %esp,%ebp
085dc081 +0x03:  sub    $0x18,%esp
085dc084 +0x06:  movl   $0x0,-0x4(%ebp)
085dc08b +0x0d:  jmp    085dc0de <+0x60>
085dc08d +0x0f:  mov    -0x4(%ebp),%edx
085dc090 +0x12:  mov    0x8(%ebp),%eax
085dc093 +0x15:  add    $0xc,%edx
085dc096 +0x18:  mov    (%eax,%edx,4),%eax
085dc099 +0x1b:  test   %eax,%eax
085dc09b +0x1d:  je     085dc0d6 <+0x58>
085dc09d +0x1f:  mov    -0x4(%ebp),%edx
085dc0a0 +0x22:  mov    0x8(%ebp),%eax
085dc0a3 +0x25:  add    $0x14,%edx
085dc0a6 +0x28:  mov    (%eax,%edx,4),%eax
085dc0a9 +0x2b:  cmp    $0xff,%eax
085dc0ae +0x30:  je     085dc0d9 <+0x5b>
085dc0b0 +0x32:  mov    0x8(%ebp),%eax
085dc0b3 +0x35:  lea    0x5bc(%eax),%edx
085dc0b9 +0x3b:  mov    -0x4(%ebp),%eax
085dc0bc +0x3e:  mov    %eax,0x4(%esp)
085dc0c0 +0x42:  mov    %edx,(%esp)
085dc0c3 +0x45:  call   085d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>  ; PvpResultRecvFlag::IsRecv(int) const
085dc0c8 +0x4a:  xor    $0x1,%eax
085dc0cb +0x4d:  test   %al,%al
085dc0cd +0x4f:  je     085dc0da <+0x5c>
085dc0cf +0x51:  mov    $0x0,%eax
085dc0d4 +0x56:  jmp    085dc0ee <+0x70>
085dc0d6 +0x58:  nop
085dc0d7 +0x59:  jmp    085dc0da <+0x5c>
085dc0d9 +0x5b:  nop
085dc0da +0x5c:  addl   $0x1,-0x4(%ebp)
085dc0de +0x60:  cmpl   $0x7,-0x4(%ebp)
085dc0e2 +0x64:  setle  %al
085dc0e5 +0x67:  test   %al,%al
085dc0e7 +0x69:  jne    085dc08d <+0xf>
085dc0e9 +0x6b:  mov    $0x1,%eax
085dc0ee +0x70:  leave
085dc0ef +0x71:  ret
```

## 反编译 C

```c
// PvP_Room::recv_pvp_end_result_all @ 0x85dc07e

/* PvP_Room::recv_pvp_end_result_all() const */

undefined4 __thiscall PvP_Room::recv_pvp_end_result_all(PvP_Room *this)

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
       (cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5bc),local_8),
       cVar1 != '\x01')) break;
    local_8 = local_8 + 1;
  }
  return 0;
}
```
