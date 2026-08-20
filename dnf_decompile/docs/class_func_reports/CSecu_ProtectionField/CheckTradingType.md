# CheckTradingType

`_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION`

`CSecu_ProtectionField::CheckTradingType(CUser*, unsigned long, SECURITY_PROTCTION)`

| 类 | 地址 |
|---|---|
| `CSecu_ProtectionField` | `0x08288c46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08288c46  _ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION
#           CSecu_ProtectionField::CheckTradingType(CUser*, unsigned long, SECURITY_PROTCTION)
# range [0x08288c46, 0x08288dbb]
08288c46 +0x000:  push   %ebp
08288c47 +0x001:  mov    %esp,%ebp
08288c49 +0x003:  sub    $0x18,%esp
08288c4c +0x006:  cmpl   $0x0,0xc(%ebp)
08288c50 +0x00a:  jne    08288c5c <+0x16>
08288c52 +0x00c:  mov    $0x1,%eax
08288c57 +0x011:  jmp    08288dba <+0x174>
08288c5c +0x016:  mov    0x10(%ebp),%eax
08288c5f +0x019:  and    $0x1,%eax
08288c62 +0x01c:  test   %al,%al
08288c64 +0x01e:  je     08288c84 <+0x3e>
08288c66 +0x020:  movl   $0x1,0x4(%esp)
08288c6e +0x028:  mov    0xc(%ebp),%eax
08288c71 +0x02b:  mov    %eax,(%esp)
08288c74 +0x02e:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
08288c79 +0x033:  test   %al,%al
08288c7b +0x035:  je     08288c84 <+0x3e>
08288c7d +0x037:  mov    $0x1,%eax
08288c82 +0x03c:  jmp    08288c89 <+0x43>
08288c84 +0x03e:  mov    $0x0,%eax
08288c89 +0x043:  test   %al,%al
08288c8b +0x045:  je     08288c97 <+0x51>
08288c8d +0x047:  mov    $0x72,%eax
08288c92 +0x04c:  jmp    08288dba <+0x174>
08288c97 +0x051:  mov    0x10(%ebp),%eax
08288c9a +0x054:  and    $0x2,%eax
08288c9d +0x057:  test   %eax,%eax
08288c9f +0x059:  je     08288cbf <+0x79>
08288ca1 +0x05b:  movl   $0x2,0x4(%esp)
08288ca9 +0x063:  mov    0xc(%ebp),%eax
08288cac +0x066:  mov    %eax,(%esp)
08288caf +0x069:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
08288cb4 +0x06e:  test   %al,%al
08288cb6 +0x070:  je     08288cbf <+0x79>
08288cb8 +0x072:  mov    $0x1,%eax
08288cbd +0x077:  jmp    08288cc4 <+0x7e>
08288cbf +0x079:  mov    $0x0,%eax
08288cc4 +0x07e:  test   %al,%al
08288cc6 +0x080:  je     08288cd2 <+0x8c>
08288cc8 +0x082:  mov    $0x72,%eax
08288ccd +0x087:  jmp    08288dba <+0x174>
08288cd2 +0x08c:  mov    0x10(%ebp),%eax
08288cd5 +0x08f:  and    $0x4,%eax
08288cd8 +0x092:  test   %eax,%eax
08288cda +0x094:  je     08288cfa <+0xb4>
08288cdc +0x096:  movl   $0x4,0x4(%esp)
08288ce4 +0x09e:  mov    0xc(%ebp),%eax
08288ce7 +0x0a1:  mov    %eax,(%esp)
08288cea +0x0a4:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
08288cef +0x0a9:  test   %al,%al
08288cf1 +0x0ab:  je     08288cfa <+0xb4>
08288cf3 +0x0ad:  mov    $0x1,%eax
08288cf8 +0x0b2:  jmp    08288cff <+0xb9>
08288cfa +0x0b4:  mov    $0x0,%eax
08288cff +0x0b9:  test   %al,%al
08288d01 +0x0bb:  je     08288d0d <+0xc7>
08288d03 +0x0bd:  mov    $0x72,%eax
08288d08 +0x0c2:  jmp    08288dba <+0x174>
08288d0d +0x0c7:  mov    0x10(%ebp),%eax
08288d10 +0x0ca:  and    $0x8,%eax
08288d13 +0x0cd:  test   %eax,%eax
08288d15 +0x0cf:  je     08288d35 <+0xef>
08288d17 +0x0d1:  movl   $0x8,0x4(%esp)
08288d1f +0x0d9:  mov    0xc(%ebp),%eax
08288d22 +0x0dc:  mov    %eax,(%esp)
08288d25 +0x0df:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
08288d2a +0x0e4:  test   %al,%al
08288d2c +0x0e6:  je     08288d35 <+0xef>
08288d2e +0x0e8:  mov    $0x1,%eax
08288d33 +0x0ed:  jmp    08288d3a <+0xf4>
08288d35 +0x0ef:  mov    $0x0,%eax
08288d3a +0x0f4:  test   %al,%al
08288d3c +0x0f6:  je     08288d45 <+0xff>
08288d3e +0x0f8:  mov    $0x72,%eax
08288d43 +0x0fd:  jmp    08288dba <+0x174>
08288d45 +0x0ff:  mov    0x10(%ebp),%eax
08288d48 +0x102:  and    $0x20,%eax
08288d4b +0x105:  test   %eax,%eax
08288d4d +0x107:  je     08288d6d <+0x127>
08288d4f +0x109:  movl   $0x20,0x4(%esp)
08288d57 +0x111:  mov    0xc(%ebp),%eax
08288d5a +0x114:  mov    %eax,(%esp)
08288d5d +0x117:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
08288d62 +0x11c:  test   %al,%al
08288d64 +0x11e:  je     08288d6d <+0x127>
08288d66 +0x120:  mov    $0x1,%eax
08288d6b +0x125:  jmp    08288d72 <+0x12c>
08288d6d +0x127:  mov    $0x0,%eax
08288d72 +0x12c:  test   %al,%al
08288d74 +0x12e:  je     08288d7d <+0x137>
08288d76 +0x130:  mov    $0xe4,%eax
08288d7b +0x135:  jmp    08288dba <+0x174>
08288d7d +0x137:  mov    0x10(%ebp),%eax
08288d80 +0x13a:  and    $0x40,%eax
08288d83 +0x13d:  test   %eax,%eax
08288d85 +0x13f:  je     08288da5 <+0x15f>
08288d87 +0x141:  movl   $0x40,0x4(%esp)
08288d8f +0x149:  mov    0xc(%ebp),%eax
08288d92 +0x14c:  mov    %eax,(%esp)
08288d95 +0x14f:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
08288d9a +0x154:  test   %al,%al
08288d9c +0x156:  je     08288da5 <+0x15f>
08288d9e +0x158:  mov    $0x1,%eax
08288da3 +0x15d:  jmp    08288daa <+0x164>
08288da5 +0x15f:  mov    $0x0,%eax
08288daa +0x164:  test   %al,%al
08288dac +0x166:  je     08288db5 <+0x16f>
08288dae +0x168:  mov    $0x72,%eax
08288db3 +0x16d:  jmp    08288dba <+0x174>
08288db5 +0x16f:  mov    $0x0,%eax
08288dba +0x174:  leave
08288dbb +0x175:  ret
```

## 反编译 C

```c
// CSecu_ProtectionField::CheckTradingType @ 0x8288c46

/* CSecu_ProtectionField::CheckTradingType(CUser*, unsigned long, SECURITY_PROTCTION) */

undefined4 CSecu_ProtectionField::CheckTradingType(undefined4 param_1,CUser *param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (param_2 == (CUser *)0x0) {
    return 1;
  }
  if (((param_3 & 1) == 0) || (cVar2 = CUser::isTradePunishType(param_2,1), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0x72;
  }
  if (((param_3 & 2) == 0) || (cVar2 = CUser::isTradePunishType(param_2,2), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0x72;
  }
  if (((param_3 & 4) == 0) || (cVar2 = CUser::isTradePunishType(param_2,4), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    if (((param_3 & 8) == 0) || (cVar2 = CUser::isTradePunishType(param_2,8), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      if (((param_3 & 0x20) == 0) || (cVar2 = CUser::isTradePunishType(param_2,0x20), cVar2 == '\0')
         ) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        if (((param_3 & 0x40) == 0) ||
           (cVar2 = CUser::isTradePunishType(param_2,0x40), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar3 = 0x72;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      return 0xe4;
    }
    return 0x72;
  }
  return 0x72;
}
```
