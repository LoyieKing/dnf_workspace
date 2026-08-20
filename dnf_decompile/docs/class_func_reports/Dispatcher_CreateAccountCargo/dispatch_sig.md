# dispatch_sig

`_ZN29Dispatcher_CreateAccountCargo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CreateAccountCargo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CreateAccountCargo` | `0x08224f7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08224f7c  _ZN29Dispatcher_CreateAccountCargo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CreateAccountCargo::dispatch_sig(CUser*, PacketBuf&)
# range [0x08224f7c, 0x08224faf]
08224f7c +0x00:  push   %ebp
08224f7d +0x01:  mov    %esp,%ebp
08224f7f +0x03:  sub    $0x18,%esp
08224f82 +0x06:  mov    0xc(%ebp),%eax
08224f85 +0x09:  mov    %eax,(%esp)
08224f88 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08224f8d +0x11:  cmp    $0x2,%eax
08224f90 +0x14:  setle  %al
08224f93 +0x17:  test   %al,%al
08224f95 +0x19:  je     08224f9e <+0x22>
08224f97 +0x1b:  mov    $0x0,%eax
08224f9c +0x20:  jmp    08224fae <+0x32>
08224f9e +0x22:  mov    0xc(%ebp),%eax
08224fa1 +0x25:  mov    %eax,(%esp)
08224fa4 +0x28:  call   0828ad72 <_ZN13CAccountCargo18CreateAccountCargoEP5CUser>  ; CAccountCargo::CreateAccountCargo(CUser*)
08224fa9 +0x2d:  mov    $0x0,%eax
08224fae +0x32:  leave
08224faf +0x33:  ret
```

## 反编译 C

```c
// Dispatcher_CreateAccountCargo::dispatch_sig @ 0x8224f7c

/* Dispatcher_CreateAccountCargo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CreateAccountCargo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    CAccountCargo::CreateAccountCargo((CUser *)param_2);
  }
  return 0;
}
```
