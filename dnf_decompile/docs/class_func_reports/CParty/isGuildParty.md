# isGuildParty

`_ZN6CParty12isGuildPartyEv`

`CParty::isGuildParty()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b49d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b49d0  _ZN6CParty12isGuildPartyEv
#           CParty::isGuildParty()
# range [0x085b49d0, 0x085b4a6f]
085b49d0 +0x00:  push   %ebp
085b49d1 +0x01:  mov    %esp,%ebp
085b49d3 +0x03:  sub    $0x28,%esp
085b49d6 +0x06:  movb   $0x0,-0x15(%ebp)
085b49da +0x0a:  movl   $0xffffffff,-0x10(%ebp)
085b49e1 +0x11:  movl   $0x0,-0xc(%ebp)
085b49e8 +0x18:  jmp    085b4a5e <+0x8e>
085b49ea +0x1a:  mov    -0xc(%ebp),%eax
085b49ed +0x1d:  mov    %eax,0x4(%esp)
085b49f1 +0x21:  mov    0x8(%ebp),%eax
085b49f4 +0x24:  mov    %eax,(%esp)
085b49f7 +0x27:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b49fc +0x2c:  xor    $0x1,%eax
085b49ff +0x2f:  test   %al,%al
085b4a01 +0x31:  jne    085b4a59 <+0x89>
085b4a03 +0x33:  mov    -0xc(%ebp),%edx
085b4a06 +0x36:  mov    0x8(%ebp),%ecx
085b4a09 +0x39:  mov    %edx,%eax
085b4a0b +0x3b:  add    %eax,%eax
085b4a0d +0x3d:  add    %edx,%eax
085b4a0f +0x3f:  shl    $0x3,%eax
085b4a12 +0x42:  lea    (%ecx,%eax,1),%eax
085b4a15 +0x45:  add    $0x78,%eax
085b4a18 +0x48:  mov    (%eax),%eax
085b4a1a +0x4a:  mov    %eax,(%esp)
085b4a1d +0x4d:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085b4a22 +0x52:  mov    %eax,-0x14(%ebp)
085b4a25 +0x55:  cmpl   $0x0,-0x14(%ebp)
085b4a29 +0x59:  jne    085b4a32 <+0x62>
085b4a2b +0x5b:  mov    $0x0,%eax
085b4a30 +0x60:  jmp    085b4a6d <+0x9d>
085b4a32 +0x62:  mov    -0x14(%ebp),%eax
085b4a35 +0x65:  cmp    -0x10(%ebp),%eax
085b4a38 +0x68:  je     085b4a4d <+0x7d>
085b4a3a +0x6a:  cmpl   $0xffffffff,-0x10(%ebp)
085b4a3e +0x6e:  je     085b4a47 <+0x77>
085b4a40 +0x70:  mov    $0x0,%eax
085b4a45 +0x75:  jmp    085b4a6d <+0x9d>
085b4a47 +0x77:  movb   $0x1,-0x15(%ebp)
085b4a4b +0x7b:  jmp    085b4a51 <+0x81>
085b4a4d +0x7d:  movb   $0x1,-0x15(%ebp)
085b4a51 +0x81:  mov    -0x14(%ebp),%eax
085b4a54 +0x84:  mov    %eax,-0x10(%ebp)
085b4a57 +0x87:  jmp    085b4a5a <+0x8a>
085b4a59 +0x89:  nop
085b4a5a +0x8a:  addl   $0x1,-0xc(%ebp)
085b4a5e +0x8e:  cmpl   $0x3,-0xc(%ebp)
085b4a62 +0x92:  setle  %al
085b4a65 +0x95:  test   %al,%al
085b4a67 +0x97:  jne    085b49ea <+0x1a>
085b4a69 +0x99:  movzbl -0x15(%ebp),%eax
085b4a6d +0x9d:  leave
085b4a6e +0x9e:  ret
085b4a6f +0x9f:  nop
```

## 反编译 C

```c
// CParty::isGuildParty @ 0x85b49d0

/* CParty::isGuildParty() */

undefined1 __thiscall CParty::isGuildParty(CParty *this)

{
  char cVar1;
  int iVar2;
  undefined1 local_19;
  int local_14;
  int local_10;
  
  local_19 = 0;
  local_14 = -1;
  local_10 = 0;
  do {
    if (3 < local_10) {
      return local_19;
    }
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 == '\x01') {
      iVar2 = CUserCharacInfo::get_charac_guildkey
                        (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      if (iVar2 == 0) {
        return 0;
      }
      if ((iVar2 != local_14) && (local_14 != -1)) {
        return 0;
      }
      local_19 = 1;
      local_14 = iVar2;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
