# existSamePCRoomUser

`_ZN6CParty19existSamePCRoomUserEj`

`CParty::existSamePCRoomUser(unsigned int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b67ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b67ca  _ZN6CParty19existSamePCRoomUserEj
#           CParty::existSamePCRoomUser(unsigned int)
# range [0x085b67ca, 0x085b687b]
085b67ca +0x00:  push   %ebp
085b67cb +0x01:  mov    %esp,%ebp
085b67cd +0x03:  sub    $0x28,%esp
085b67d0 +0x06:  movl   $0x0,-0x10(%ebp)
085b67d7 +0x0d:  movl   $0x0,-0xc(%ebp)
085b67de +0x14:  jmp    085b6865 <+0x9b>
085b67e3 +0x19:  mov    -0xc(%ebp),%eax
085b67e6 +0x1c:  mov    %eax,0x4(%esp)
085b67ea +0x20:  mov    0x8(%ebp),%eax
085b67ed +0x23:  mov    %eax,(%esp)
085b67f0 +0x26:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b67f5 +0x2b:  test   %al,%al
085b67f7 +0x2d:  je     085b6861 <+0x97>
085b67f9 +0x2f:  mov    -0xc(%ebp),%edx
085b67fc +0x32:  mov    0x8(%ebp),%ecx
085b67ff +0x35:  mov    %edx,%eax
085b6801 +0x37:  add    %eax,%eax
085b6803 +0x39:  add    %edx,%eax
085b6805 +0x3b:  shl    $0x3,%eax
085b6808 +0x3e:  lea    (%ecx,%eax,1),%eax
085b680b +0x41:  add    $0x78,%eax
085b680e +0x44:  mov    (%eax),%eax
085b6810 +0x46:  mov    %eax,(%esp)
085b6813 +0x49:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
085b6818 +0x4e:  cmp    0xc(%ebp),%eax
085b681b +0x51:  jne    085b6847 <+0x7d>
085b681d +0x53:  mov    -0xc(%ebp),%edx
085b6820 +0x56:  mov    0x8(%ebp),%ecx
085b6823 +0x59:  mov    %edx,%eax
085b6825 +0x5b:  add    %eax,%eax
085b6827 +0x5d:  add    %edx,%eax
085b6829 +0x5f:  shl    $0x3,%eax
085b682c +0x62:  lea    (%ecx,%eax,1),%eax
085b682f +0x65:  add    $0x78,%eax
085b6832 +0x68:  mov    (%eax),%eax
085b6834 +0x6a:  mov    %eax,(%esp)
085b6837 +0x6d:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
085b683c +0x72:  test   %eax,%eax
085b683e +0x74:  je     085b6847 <+0x7d>
085b6840 +0x76:  mov    $0x1,%eax
085b6845 +0x7b:  jmp    085b684c <+0x82>
085b6847 +0x7d:  mov    $0x0,%eax
085b684c +0x82:  test   %al,%al
085b684e +0x84:  je     085b6861 <+0x97>
085b6850 +0x86:  addl   $0x1,-0x10(%ebp)
085b6854 +0x8a:  cmpl   $0x1,-0x10(%ebp)
085b6858 +0x8e:  jle    085b6861 <+0x97>
085b685a +0x90:  mov    $0x1,%eax
085b685f +0x95:  jmp    085b6879 <+0xaf>
085b6861 +0x97:  addl   $0x1,-0xc(%ebp)
085b6865 +0x9b:  cmpl   $0x3,-0xc(%ebp)
085b6869 +0x9f:  setle  %al
085b686c +0xa2:  test   %al,%al
085b686e +0xa4:  jne    085b67e3 <+0x19>
085b6874 +0xaa:  mov    $0x0,%eax
085b6879 +0xaf:  leave
085b687a +0xb0:  ret
085b687b +0xb1:  nop
```

## 反编译 C

```c
// CParty::existSamePCRoomUser @ 0x85b67ca

/* CParty::existSamePCRoomUser(unsigned int) */

undefined4 __thiscall CParty::existSamePCRoomUser(CParty *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = 0;
  do {
    if (3 < local_10) {
      return 0;
    }
    cVar2 = _checkValidUser(this,local_10);
    if (cVar2 != '\0') {
      uVar3 = CUser::GetPCRoomNo(*(CUser **)(this + local_10 * 0x18 + 0x78));
      if ((uVar3 == param_1) &&
         (iVar4 = CUser::GetPCRoomNo(*(CUser **)(this + local_10 * 0x18 + 0x78)), iVar4 != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && (local_14 = local_14 + 1, 1 < local_14)) {
        return 1;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
