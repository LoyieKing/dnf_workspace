# dispatch_sig

`_ZN17Dispatcher_Redeem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Redeem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Redeem` | `0x08226250` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08226250  _ZN17Dispatcher_Redeem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Redeem::dispatch_sig(CUser*, PacketBuf&)
# range [0x08226250, 0x082262a1]
08226250 +0x00:  push   %ebp
08226251 +0x01:  mov    %esp,%ebp
08226253 +0x03:  sub    $0x28,%esp
08226256 +0x06:  mov    0xc(%ebp),%eax
08226259 +0x09:  mov    %eax,(%esp)
0822625c +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08226261 +0x11:  cmp    $0x2,%eax
08226264 +0x14:  setle  %al
08226267 +0x17:  test   %al,%al
08226269 +0x19:  je     08226272 <+0x22>
0822626b +0x1b:  mov    $0x0,%eax
08226270 +0x20:  jmp    0822629f <+0x4f>
08226272 +0x22:  lea    -0x9(%ebp),%eax
08226275 +0x25:  mov    %eax,0x4(%esp)
08226279 +0x29:  mov    0x10(%ebp),%eax
0822627c +0x2c:  mov    %eax,(%esp)
0822627f +0x2f:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08226284 +0x34:  movzbl -0x9(%ebp),%eax
08226288 +0x38:  movsbl %al,%eax
0822628b +0x3b:  mov    %eax,0x4(%esp)
0822628f +0x3f:  mov    0xc(%ebp),%eax
08226292 +0x42:  mov    %eax,(%esp)
08226295 +0x45:  call   08646df2 <_ZN5CUser11Redeem_ItemEi>  ; CUser::Redeem_Item(int)
0822629a +0x4a:  mov    $0x0,%eax
0822629f +0x4f:  leave
082262a0 +0x50:  ret
082262a1 +0x51:  nop
```

## 反编译 C

```c
// Dispatcher_Redeem::dispatch_sig @ 0x8226250

/* Dispatcher_Redeem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Redeem::dispatch_sig(Dispatcher_Redeem *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  char local_d [9];
  
  iVar1 = CUser::get_state(param_1);
  if (2 < iVar1) {
    PacketBuf::get_byte(param_2,local_d);
    CUser::Redeem_Item((int)param_1);
  }
  return 0;
}
```
