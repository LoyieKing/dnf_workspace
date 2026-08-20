# hasPCRoomPlayer

`_ZN6CParty15hasPCRoomPlayerEv`

`CParty::hasPCRoomPlayer()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b4a70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b4a70  _ZN6CParty15hasPCRoomPlayerEv
#           CParty::hasPCRoomPlayer()
# range [0x085b4a70, 0x085b4ae1]
085b4a70 +0x00:  push   %ebp
085b4a71 +0x01:  mov    %esp,%ebp
085b4a73 +0x03:  sub    $0x28,%esp
085b4a76 +0x06:  movl   $0x0,-0xc(%ebp)
085b4a7d +0x0d:  jmp    085b4acf <+0x5f>
085b4a7f +0x0f:  mov    -0xc(%ebp),%eax
085b4a82 +0x12:  mov    %eax,0x4(%esp)
085b4a86 +0x16:  mov    0x8(%ebp),%eax
085b4a89 +0x19:  mov    %eax,(%esp)
085b4a8c +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b4a91 +0x21:  xor    $0x1,%eax
085b4a94 +0x24:  test   %al,%al
085b4a96 +0x26:  jne    085b4aca <+0x5a>
085b4a98 +0x28:  mov    -0xc(%ebp),%edx
085b4a9b +0x2b:  mov    0x8(%ebp),%ecx
085b4a9e +0x2e:  mov    %edx,%eax
085b4aa0 +0x30:  add    %eax,%eax
085b4aa2 +0x32:  add    %edx,%eax
085b4aa4 +0x34:  shl    $0x3,%eax
085b4aa7 +0x37:  lea    (%ecx,%eax,1),%eax
085b4aaa +0x3a:  add    $0x78,%eax
085b4aad +0x3d:  mov    (%eax),%eax
085b4aaf +0x3f:  movl   $0xc,0x4(%esp)
085b4ab7 +0x47:  mov    %eax,(%esp)
085b4aba +0x4a:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
085b4abf +0x4f:  test   %al,%al
085b4ac1 +0x51:  je     085b4acb <+0x5b>
085b4ac3 +0x53:  mov    $0x1,%eax
085b4ac8 +0x58:  jmp    085b4adf <+0x6f>
085b4aca +0x5a:  nop
085b4acb +0x5b:  addl   $0x1,-0xc(%ebp)
085b4acf +0x5f:  cmpl   $0x3,-0xc(%ebp)
085b4ad3 +0x63:  setle  %al
085b4ad6 +0x66:  test   %al,%al
085b4ad8 +0x68:  jne    085b4a7f <+0xf>
085b4ada +0x6a:  mov    $0x0,%eax
085b4adf +0x6f:  leave
085b4ae0 +0x70:  ret
085b4ae1 +0x71:  nop
```

## 反编译 C

```c
// CParty::hasPCRoomPlayer @ 0x85b4a70

/* CParty::hasPCRoomPlayer() */

undefined4 __thiscall CParty::hasPCRoomPlayer(CParty *this)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return 0;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') &&
       (cVar1 = CUser::isAffectedPremium(*(CUser **)(this + local_10 * 0x18 + 0x78),0xc),
       cVar1 != '\0')) break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
