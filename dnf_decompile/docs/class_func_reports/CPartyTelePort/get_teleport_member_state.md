# get_teleport_member_state

`_ZN14CPartyTelePort25get_teleport_member_stateEi`

`CPartyTelePort::get_teleport_member_state(int)`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bc252` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bc252  _ZN14CPartyTelePort25get_teleport_member_stateEi
#           CPartyTelePort::get_teleport_member_state(int)
# range [0x085bc252, 0x085bc2af]
085bc252 +0x00:  push   %ebp
085bc253 +0x01:  mov    %esp,%ebp
085bc255 +0x03:  sub    $0x18,%esp
085bc258 +0x06:  mov    0x8(%ebp),%eax
085bc25b +0x09:  mov    (%eax),%eax
085bc25d +0x0b:  test   %eax,%eax
085bc25f +0x0d:  jne    085bc268 <+0x16>
085bc261 +0x0f:  mov    $0xffffffff,%eax
085bc266 +0x14:  jmp    085bc2ad <+0x5b>
085bc268 +0x16:  cmpl   $0x0,0xc(%ebp)
085bc26c +0x1a:  js     085bc274 <+0x22>
085bc26e +0x1c:  cmpl   $0x3,0xc(%ebp)
085bc272 +0x20:  jle    085bc27b <+0x29>
085bc274 +0x22:  mov    $0xffffffff,%eax
085bc279 +0x27:  jmp    085bc2ad <+0x5b>
085bc27b +0x29:  mov    0x8(%ebp),%eax
085bc27e +0x2c:  mov    (%eax),%eax
085bc280 +0x2e:  test   %eax,%eax
085bc282 +0x30:  je     085bc2a8 <+0x56>
085bc284 +0x32:  mov    0x8(%ebp),%eax
085bc287 +0x35:  mov    (%eax),%eax
085bc289 +0x37:  mov    %eax,(%esp)
085bc28c +0x3a:  call   0822d91c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fc6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fc6
085bc291 +0x3f:  mov    %eax,%ecx
085bc293 +0x41:  mov    0xc(%ebp),%edx
085bc296 +0x44:  mov    %edx,%eax
085bc298 +0x46:  add    %eax,%eax
085bc29a +0x48:  add    %edx,%eax
085bc29c +0x4a:  shl    $0x3,%eax
085bc29f +0x4d:  lea    (%ecx,%eax,1),%eax
085bc2a2 +0x50:  movzbl 0x12(%eax),%eax
085bc2a6 +0x54:  jmp    085bc2ad <+0x5b>
085bc2a8 +0x56:  mov    $0xffffffff,%eax
085bc2ad +0x5b:  leave
085bc2ae +0x5c:  ret
085bc2af +0x5d:  nop
```

## 反编译 C

```c
// CPartyTelePort::get_teleport_member_state @ 0x85bc252

/* CPartyTelePort::get_teleport_member_state(int) */

uint __thiscall CPartyTelePort::get_teleport_member_state(CPartyTelePort *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)this == 0) {
    uVar1 = 0xffffffff;
  }
  else if ((param_1 < 0) || (3 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if (*(int *)this == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CParty::GetMember(*(CParty **)this);
    uVar1 = (uint)*(byte *)(iVar2 + param_1 * 0x18 + 0x12);
  }
  return uVar1;
}
```
