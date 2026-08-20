# isSamePCRoomParty

`_ZN6CParty17isSamePCRoomPartyEv`

`CParty::isSamePCRoomParty()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b687c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b687c  _ZN6CParty17isSamePCRoomPartyEv
#           CParty::isSamePCRoomParty()
# range [0x085b687c, 0x085b6909]
085b687c +0x00:  push   %ebp
085b687d +0x01:  mov    %esp,%ebp
085b687f +0x03:  sub    $0x28,%esp
085b6882 +0x06:  movl   $0x0,-0x14(%ebp)
085b6889 +0x0d:  movl   $0x0,-0x10(%ebp)
085b6890 +0x14:  jmp    085b68f8 <+0x7c>
085b6892 +0x16:  mov    -0x10(%ebp),%eax
085b6895 +0x19:  mov    %eax,0x4(%esp)
085b6899 +0x1d:  mov    0x8(%ebp),%eax
085b689c +0x20:  mov    %eax,(%esp)
085b689f +0x23:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b68a4 +0x28:  test   %al,%al
085b68a6 +0x2a:  je     085b68f4 <+0x78>
085b68a8 +0x2c:  mov    -0x10(%ebp),%edx
085b68ab +0x2f:  mov    0x8(%ebp),%ecx
085b68ae +0x32:  mov    %edx,%eax
085b68b0 +0x34:  add    %eax,%eax
085b68b2 +0x36:  add    %edx,%eax
085b68b4 +0x38:  shl    $0x3,%eax
085b68b7 +0x3b:  lea    (%ecx,%eax,1),%eax
085b68ba +0x3e:  add    $0x78,%eax
085b68bd +0x41:  mov    (%eax),%eax
085b68bf +0x43:  mov    %eax,(%esp)
085b68c2 +0x46:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
085b68c7 +0x4b:  mov    %eax,-0xc(%ebp)
085b68ca +0x4e:  cmpl   $0x0,-0xc(%ebp)
085b68ce +0x52:  jne    085b68d7 <+0x5b>
085b68d0 +0x54:  mov    $0x0,%eax
085b68d5 +0x59:  jmp    085b6908 <+0x8c>
085b68d7 +0x5b:  cmpl   $0x0,-0x14(%ebp)
085b68db +0x5f:  jne    085b68e5 <+0x69>
085b68dd +0x61:  mov    -0xc(%ebp),%eax
085b68e0 +0x64:  mov    %eax,-0x14(%ebp)
085b68e3 +0x67:  jmp    085b68f4 <+0x78>
085b68e5 +0x69:  mov    -0x14(%ebp),%eax
085b68e8 +0x6c:  cmp    -0xc(%ebp),%eax
085b68eb +0x6f:  je     085b68f4 <+0x78>
085b68ed +0x71:  mov    $0x0,%eax
085b68f2 +0x76:  jmp    085b6908 <+0x8c>
085b68f4 +0x78:  addl   $0x1,-0x10(%ebp)
085b68f8 +0x7c:  cmpl   $0x3,-0x10(%ebp)
085b68fc +0x80:  setle  %al
085b68ff +0x83:  test   %al,%al
085b6901 +0x85:  jne    085b6892 <+0x16>
085b6903 +0x87:  mov    $0x1,%eax
085b6908 +0x8c:  leave
085b6909 +0x8d:  ret
```

## 反编译 C

```c
// CParty::isSamePCRoomParty @ 0x85b687c

/* CParty::isSamePCRoomParty() */

undefined4 __thiscall CParty::isSamePCRoomParty(CParty *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 1;
    }
    cVar2 = _checkValidUser(this,local_14);
    iVar1 = local_18;
    if (cVar2 != '\0') {
      iVar3 = CUser::GetPCRoomNo(*(CUser **)(this + local_14 * 0x18 + 0x78));
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = iVar3;
      if ((local_18 != 0) && (iVar1 = local_18, local_18 != iVar3)) {
        return 0;
      }
    }
    local_18 = iVar1;
    local_14 = local_14 + 1;
  } while( true );
}
```
