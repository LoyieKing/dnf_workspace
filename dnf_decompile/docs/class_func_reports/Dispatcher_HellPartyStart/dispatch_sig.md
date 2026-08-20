# dispatch_sig

`_ZN25Dispatcher_HellPartyStart12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_HellPartyStart::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_HellPartyStart` | `0x0821d9a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821d9a6  _ZN25Dispatcher_HellPartyStart12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_HellPartyStart::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821d9a6, 0x0821d9ed]
0821d9a6 +0x00:  push   %ebp
0821d9a7 +0x01:  mov    %esp,%ebp
0821d9a9 +0x03:  sub    $0x18,%esp
0821d9ac +0x06:  mov    0xc(%ebp),%eax
0821d9af +0x09:  mov    %eax,(%esp)
0821d9b2 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821d9b7 +0x11:  cmp    $0x5,%eax
0821d9ba +0x14:  setne  %al
0821d9bd +0x17:  test   %al,%al
0821d9bf +0x19:  je     0821d9e7 <+0x41>
0821d9c1 +0x1b:  movl   $0x0,0xc(%esp)
0821d9c9 +0x23:  movl   $0x0,0x8(%esp)
0821d9d1 +0x2b:  movl   $&_ZZN25Dispatcher_HellPartyStart12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821d9d9 +0x33:  movl   $0xd1bd,(%esp)
0821d9e0 +0x3a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821d9e5 +0x3f:  jmp    0821d9ec <+0x46>
0821d9e7 +0x41:  mov    $0x0,%eax
0821d9ec +0x46:  leave
0821d9ed +0x47:  ret
```

## 反编译 C

```c
// Dispatcher_HellPartyStart::dispatch_sig @ 0x821d9a6

/* Dispatcher_HellPartyStart::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_HellPartyStart::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 5) {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0xd1bd,
                     "virtual int Dispatcher_HellPartyStart::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
  return uVar2;
}
```
