# IsInvalidMovableArea

`_ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii`

`CHackLog_InvalidAreaMove::IsInvalidMovableArea(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CHackLog_InvalidAreaMove` | `0x08285e2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285e2e  _ZN24CHackLog_InvalidAreaMove20IsInvalidMovableAreaEiiii
#           CHackLog_InvalidAreaMove::IsInvalidMovableArea(int, int, int, int)
# range [0x08285e2e, 0x08285efd]
08285e2e +0x00:  push   %ebp
08285e2f +0x01:  mov    %esp,%ebp
08285e31 +0x03:  sub    $0x18,%esp
08285e34 +0x06:  mov    0x14(%ebp),%eax
08285e37 +0x09:  mov    %eax,0xc(%esp)
08285e3b +0x0d:  mov    0x10(%ebp),%eax
08285e3e +0x10:  mov    %eax,0x8(%esp)
08285e42 +0x14:  mov    0xc(%ebp),%eax
08285e45 +0x17:  mov    %eax,0x4(%esp)
08285e49 +0x1b:  mov    0x8(%ebp),%eax
08285e4c +0x1e:  mov    %eax,(%esp)
08285e4f +0x21:  call   082861b6 <_GLOBAL__I__ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii+0x1c>  ; global constructors keyed to CHackLog_InvalidAreaMove::checkSeriaRoom(int, int)+0x1c
08285e54 +0x26:  xor    $0x1,%eax
08285e57 +0x29:  test   %al,%al
08285e59 +0x2b:  je     08285ee6 <+0xb8>
08285e5f +0x31:  mov    0x10(%ebp),%eax
08285e62 +0x34:  mov    %eax,0x4(%esp)
08285e66 +0x38:  mov    0x8(%ebp),%eax
08285e69 +0x3b:  mov    %eax,(%esp)
08285e6c +0x3e:  call   08286222 <_GLOBAL__I__ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii+0x88>  ; global constructors keyed to CHackLog_InvalidAreaMove::checkSeriaRoom(int, int)+0x88
08285e71 +0x43:  xor    $0x1,%eax
08285e74 +0x46:  test   %al,%al
08285e76 +0x48:  je     08285ee6 <+0xb8>
08285e78 +0x4a:  mov    0x10(%ebp),%eax
08285e7b +0x4d:  mov    %eax,0x4(%esp)
08285e7f +0x51:  mov    0x8(%ebp),%eax
08285e82 +0x54:  mov    %eax,(%esp)
08285e85 +0x57:  call   08286330 <_GLOBAL__I__ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii+0x196>  ; global constructors keyed to CHackLog_InvalidAreaMove::checkSeriaRoom(int, int)+0x196
08285e8a +0x5c:  xor    $0x1,%eax
08285e8d +0x5f:  test   %al,%al
08285e8f +0x61:  je     08285ee6 <+0xb8>
08285e91 +0x63:  mov    0x14(%ebp),%eax
08285e94 +0x66:  mov    %eax,0xc(%esp)
08285e98 +0x6a:  mov    0x10(%ebp),%eax
08285e9b +0x6d:  mov    %eax,0x8(%esp)
08285e9f +0x71:  mov    0xc(%ebp),%eax
08285ea2 +0x74:  mov    %eax,0x4(%esp)
08285ea6 +0x78:  mov    0x8(%ebp),%eax
08285ea9 +0x7b:  mov    %eax,(%esp)
08285eac +0x7e:  call   08286350 <_GLOBAL__I__ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii+0x1b6>  ; global constructors keyed to CHackLog_InvalidAreaMove::checkSeriaRoom(int, int)+0x1b6
08285eb1 +0x83:  xor    $0x1,%eax
08285eb4 +0x86:  test   %al,%al
08285eb6 +0x88:  je     08285ee6 <+0xb8>
08285eb8 +0x8a:  mov    0x14(%ebp),%eax
08285ebb +0x8d:  mov    %eax,0xc(%esp)
08285ebf +0x91:  mov    0x10(%ebp),%eax
08285ec2 +0x94:  mov    %eax,0x8(%esp)
08285ec6 +0x98:  mov    0xc(%ebp),%eax
08285ec9 +0x9b:  mov    %eax,0x4(%esp)
08285ecd +0x9f:  mov    0x8(%ebp),%eax
08285ed0 +0xa2:  mov    %eax,(%esp)
08285ed3 +0xa5:  call   08286272 <_GLOBAL__I__ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii+0xd8>  ; global constructors keyed to CHackLog_InvalidAreaMove::checkSeriaRoom(int, int)+0xd8
08285ed8 +0xaa:  xor    $0x1,%eax
08285edb +0xad:  test   %al,%al
08285edd +0xaf:  je     08285ee6 <+0xb8>
08285edf +0xb1:  mov    $0x1,%eax
08285ee4 +0xb6:  jmp    08285eeb <+0xbd>
08285ee6 +0xb8:  mov    $0x0,%eax
08285eeb +0xbd:  test   %al,%al
08285eed +0xbf:  je     08285ef6 <+0xc8>
08285eef +0xc1:  mov    $0x1,%eax
08285ef4 +0xc6:  jmp    08285efb <+0xcd>
08285ef6 +0xc8:  mov    $0x0,%eax
08285efb +0xcd:  leave
08285efc +0xce:  ret
08285efd +0xcf:  nop
```

## 反编译 C

```c
// CHackLog_InvalidAreaMove::IsInvalidMovableArea @ 0x8285e2e

/* CHackLog_InvalidAreaMove::IsInvalidMovableArea(int, int, int, int) */

undefined1
CHackLog_InvalidAreaMove::IsInvalidMovableArea(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = IsMovingBetweenWestCoastAndGent(param_1,param_2,param_3,param_4);
  if ((((cVar2 == '\x01') || (cVar2 = IsMovingAboutPowerWar(param_1,param_3), cVar2 == '\x01')) ||
      (cVar2 = IsMovingInGuildAgit(param_1,param_3), cVar2 == '\x01')) ||
     ((cVar2 = IsExceptionMove(param_1,param_2,param_3,param_4), cVar2 == '\x01' ||
      (cVar2 = IsMovingBetweenSeriaRoomAndGuildAgit(param_1,param_2,param_3,param_4),
      cVar2 == '\x01')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
