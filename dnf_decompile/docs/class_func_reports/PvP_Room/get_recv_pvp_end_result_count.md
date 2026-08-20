# get_recv_pvp_end_result_count

`_ZNK8PvP_Room29get_recv_pvp_end_result_countEv`

`PvP_Room::get_recv_pvp_end_result_count() const`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc1c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc1c8  _ZNK8PvP_Room29get_recv_pvp_end_result_countEv
#           PvP_Room::get_recv_pvp_end_result_count() const
# range [0x085dc1c8, 0x085dc23b]
085dc1c8 +0x00:  push   %ebp
085dc1c9 +0x01:  mov    %esp,%ebp
085dc1cb +0x03:  sub    $0x18,%esp
085dc1ce +0x06:  movl   $0x0,-0x8(%ebp)
085dc1d5 +0x0d:  movl   $0x0,-0x4(%ebp)
085dc1dc +0x14:  jmp    085dc22b <+0x63>
085dc1de +0x16:  mov    -0x4(%ebp),%edx
085dc1e1 +0x19:  mov    0x8(%ebp),%eax
085dc1e4 +0x1c:  add    $0xc,%edx
085dc1e7 +0x1f:  mov    (%eax,%edx,4),%eax
085dc1ea +0x22:  test   %eax,%eax
085dc1ec +0x24:  je     085dc223 <+0x5b>
085dc1ee +0x26:  mov    -0x4(%ebp),%edx
085dc1f1 +0x29:  mov    0x8(%ebp),%eax
085dc1f4 +0x2c:  add    $0x14,%edx
085dc1f7 +0x2f:  mov    (%eax,%edx,4),%eax
085dc1fa +0x32:  cmp    $0xff,%eax
085dc1ff +0x37:  je     085dc226 <+0x5e>
085dc201 +0x39:  mov    0x8(%ebp),%eax
085dc204 +0x3c:  lea    0x5bc(%eax),%edx
085dc20a +0x42:  mov    -0x4(%ebp),%eax
085dc20d +0x45:  mov    %eax,0x4(%esp)
085dc211 +0x49:  mov    %edx,(%esp)
085dc214 +0x4c:  call   085d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>  ; PvpResultRecvFlag::IsRecv(int) const
085dc219 +0x51:  test   %al,%al
085dc21b +0x53:  je     085dc227 <+0x5f>
085dc21d +0x55:  addl   $0x1,-0x8(%ebp)
085dc221 +0x59:  jmp    085dc227 <+0x5f>
085dc223 +0x5b:  nop
085dc224 +0x5c:  jmp    085dc227 <+0x5f>
085dc226 +0x5e:  nop
085dc227 +0x5f:  addl   $0x1,-0x4(%ebp)
085dc22b +0x63:  cmpl   $0x7,-0x4(%ebp)
085dc22f +0x67:  setle  %al
085dc232 +0x6a:  test   %al,%al
085dc234 +0x6c:  jne    085dc1de <+0x16>
085dc236 +0x6e:  mov    -0x8(%ebp),%eax
085dc239 +0x71:  leave
085dc23a +0x72:  ret
085dc23b +0x73:  nop
```

## 反编译 C

```c
// PvP_Room::get_recv_pvp_end_result_count @ 0x85dc1c8

/* PvP_Room::get_recv_pvp_end_result_count() const */

int __thiscall PvP_Room::get_recv_pvp_end_result_count(PvP_Room *this)

{
  char cVar1;
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    if (((*(int *)(this + (local_8 + 0xc) * 4) != 0) &&
        (*(int *)(this + (local_8 + 0x14) * 4) != 0xff)) &&
       (cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5bc),local_8),
       cVar1 != '\0')) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
