# dispatch_sig

`_ZN21Dispatcher_RedeemList12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RedeemList::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RedeemList` | `0x0822621c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0822621c  _ZN21Dispatcher_RedeemList12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RedeemList::dispatch_sig(CUser*, PacketBuf&)
# range [0x0822621c, 0x0822624f]
0822621c +0x00:  push   %ebp
0822621d +0x01:  mov    %esp,%ebp
0822621f +0x03:  sub    $0x18,%esp
08226222 +0x06:  mov    0xc(%ebp),%eax
08226225 +0x09:  mov    %eax,(%esp)
08226228 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0822622d +0x11:  cmp    $0x2,%eax
08226230 +0x14:  setle  %al
08226233 +0x17:  test   %al,%al
08226235 +0x19:  je     0822623e <+0x22>
08226237 +0x1b:  mov    $0x0,%eax
0822623c +0x20:  jmp    0822624e <+0x32>
0822623e +0x22:  mov    0xc(%ebp),%eax
08226241 +0x25:  mov    %eax,(%esp)
08226244 +0x28:  call   086624f8 <_ZN5CUser15send_RedeemInfoEv>  ; CUser::send_RedeemInfo()
08226249 +0x2d:  mov    $0x0,%eax
0822624e +0x32:  leave
0822624f +0x33:  ret
```

## 反编译 C

```c
// Dispatcher_RedeemList::dispatch_sig @ 0x822621c

/* Dispatcher_RedeemList::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_RedeemList::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    CUser::send_RedeemInfo((CUser *)param_2);
  }
  return 0;
}
```
