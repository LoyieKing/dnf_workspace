# reset_teleport_data

`_ZN14CPartyTelePort19reset_teleport_dataEv`

`CPartyTelePort::reset_teleport_data()`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bc044` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bc044  _ZN14CPartyTelePort19reset_teleport_dataEv
#           CPartyTelePort::reset_teleport_data()
# range [0x085bc044, 0x085bc09f]
085bc044 +0x00:  push   %ebp
085bc045 +0x01:  mov    %esp,%ebp
085bc047 +0x03:  sub    $0x28,%esp
085bc04a +0x06:  movl   $0x0,-0xc(%ebp)
085bc051 +0x0d:  jmp    085bc071 <+0x2d>
085bc053 +0x0f:  movl   $0xffffffff,0x8(%esp)
085bc05b +0x17:  mov    -0xc(%ebp),%eax
085bc05e +0x1a:  mov    %eax,0x4(%esp)
085bc062 +0x1e:  mov    0x8(%ebp),%eax
085bc065 +0x21:  mov    %eax,(%esp)
085bc068 +0x24:  call   085bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>  ; CPartyTelePort::set_teleport_member_state(int, char)
085bc06d +0x29:  addl   $0x1,-0xc(%ebp)
085bc071 +0x2d:  cmpl   $0x3,-0xc(%ebp)
085bc075 +0x31:  setle  %al
085bc078 +0x34:  test   %al,%al
085bc07a +0x36:  jne    085bc053 <+0xf>
085bc07c +0x38:  mov    0x8(%ebp),%eax
085bc07f +0x3b:  add    $0x4,%eax
085bc082 +0x3e:  mov    %eax,(%esp)
085bc085 +0x41:  call   0822d764 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e0e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e0e
085bc08a +0x46:  movl   $0xffffffff,0x4(%esp)
085bc092 +0x4e:  mov    0x8(%ebp),%eax
085bc095 +0x51:  mov    %eax,(%esp)
085bc098 +0x54:  call   0822d7fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ea4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ea4
085bc09d +0x59:  leave
085bc09e +0x5a:  ret
085bc09f +0x5b:  nop
```

## 反编译 C

```c
// CPartyTelePort::reset_teleport_data @ 0x85bc044

/* CPartyTelePort::reset_teleport_data() */

void __thiscall CPartyTelePort::reset_teleport_data(CPartyTelePort *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    set_teleport_member_state(this,local_10,-1);
  }
  stPartyTelePort::reset((stPartyTelePort *)(this + 4));
  set_teleport_state(this,-1);
  return;
}
```
