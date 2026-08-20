# dispatch_sig

`_ZN30Dispatcher_UpgradeAccountCargo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UpgradeAccountCargo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeAccountCargo` | `0x08224fb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08224fb0  _ZN30Dispatcher_UpgradeAccountCargo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UpgradeAccountCargo::dispatch_sig(CUser*, PacketBuf&)
# range [0x08224fb0, 0x08224fe3]
08224fb0 +0x00:  push   %ebp
08224fb1 +0x01:  mov    %esp,%ebp
08224fb3 +0x03:  sub    $0x18,%esp
08224fb6 +0x06:  mov    0xc(%ebp),%eax
08224fb9 +0x09:  mov    %eax,(%esp)
08224fbc +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08224fc1 +0x11:  cmp    $0x2,%eax
08224fc4 +0x14:  setle  %al
08224fc7 +0x17:  test   %al,%al
08224fc9 +0x19:  je     08224fd2 <+0x22>
08224fcb +0x1b:  mov    $0x0,%eax
08224fd0 +0x20:  jmp    08224fe2 <+0x32>
08224fd2 +0x22:  mov    0xc(%ebp),%eax
08224fd5 +0x25:  mov    %eax,(%esp)
08224fd8 +0x28:  call   0828b0b2 <_ZN13CAccountCargo19UpgradeAccountCargoEP5CUser>  ; CAccountCargo::UpgradeAccountCargo(CUser*)
08224fdd +0x2d:  mov    $0x0,%eax
08224fe2 +0x32:  leave
08224fe3 +0x33:  ret
```

## 反编译 C

```c
// Dispatcher_UpgradeAccountCargo::dispatch_sig @ 0x8224fb0

/* Dispatcher_UpgradeAccountCargo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_UpgradeAccountCargo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    CAccountCargo::UpgradeAccountCargo((CUser *)param_2);
  }
  return 0;
}
```
