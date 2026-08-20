# set_teleport_member_state

`_ZN14CPartyTelePort25set_teleport_member_stateEic`

`CPartyTelePort::set_teleport_member_state(int, char)`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bb91c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bb91c  _ZN14CPartyTelePort25set_teleport_member_stateEic
#           CPartyTelePort::set_teleport_member_state(int, char)
# range [0x085bb91c, 0x085bb96d]
085bb91c +0x00:  push   %ebp
085bb91d +0x01:  mov    %esp,%ebp
085bb91f +0x03:  sub    $0x28,%esp
085bb922 +0x06:  mov    0x10(%ebp),%eax
085bb925 +0x09:  mov    %al,-0xc(%ebp)
085bb928 +0x0c:  mov    0x8(%ebp),%eax
085bb92b +0x0f:  mov    (%eax),%eax
085bb92d +0x11:  test   %eax,%eax
085bb92f +0x13:  je     085bb964 <+0x48>
085bb931 +0x15:  cmpl   $0x0,0xc(%ebp)
085bb935 +0x19:  js     085bb967 <+0x4b>
085bb937 +0x1b:  cmpl   $0x3,0xc(%ebp)
085bb93b +0x1f:  jg     085bb96a <+0x4e>
085bb93d +0x21:  mov    0x8(%ebp),%eax
085bb940 +0x24:  mov    (%eax),%eax
085bb942 +0x26:  mov    %eax,(%esp)
085bb945 +0x29:  call   0822d91c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fc6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fc6
085bb94a +0x2e:  mov    %eax,%ecx
085bb94c +0x30:  mov    0xc(%ebp),%edx
085bb94f +0x33:  mov    %edx,%eax
085bb951 +0x35:  add    %eax,%eax
085bb953 +0x37:  add    %edx,%eax
085bb955 +0x39:  shl    $0x3,%eax
085bb958 +0x3c:  lea    (%ecx,%eax,1),%edx
085bb95b +0x3f:  movzbl -0xc(%ebp),%eax
085bb95f +0x43:  mov    %al,0x12(%edx)
085bb962 +0x46:  jmp    085bb96b <+0x4f>
085bb964 +0x48:  nop
085bb965 +0x49:  jmp    085bb96b <+0x4f>
085bb967 +0x4b:  nop
085bb968 +0x4c:  jmp    085bb96b <+0x4f>
085bb96a +0x4e:  nop
085bb96b +0x4f:  leave
085bb96c +0x50:  ret
085bb96d +0x51:  nop
```

## 反编译 C

```c
// CPartyTelePort::set_teleport_member_state @ 0x85bb91c

/* CPartyTelePort::set_teleport_member_state(int, char) */

void __thiscall
CPartyTelePort::set_teleport_member_state(CPartyTelePort *this,int param_1,char param_2)

{
  int iVar1;
  
  if (((*(int *)this != 0) && (-1 < param_1)) && (param_1 < 4)) {
    iVar1 = CParty::GetMember(*(CParty **)this);
    *(char *)(iVar1 + param_1 * 0x18 + 0x12) = param_2;
  }
  return;
}
```
