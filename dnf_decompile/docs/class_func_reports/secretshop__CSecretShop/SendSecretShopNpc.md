# SendSecretShopNpc

`_ZN10secretshop11CSecretShop17SendSecretShopNpcEP5CUseri`

`secretshop::CSecretShop::SendSecretShopNpc(CUser*, int)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShop` | `0x085fb2e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fb2e0  _ZN10secretshop11CSecretShop17SendSecretShopNpcEP5CUseri
#           secretshop::CSecretShop::SendSecretShopNpc(CUser*, int)
# range [0x085fb2e0, 0x085fb373]
085fb2e0 +0x00:  push   %ebp
085fb2e1 +0x01:  mov    %esp,%ebp
085fb2e3 +0x03:  push   %esi
085fb2e4 +0x04:  push   %ebx
085fb2e5 +0x05:  sub    $0x20,%esp
085fb2e8 +0x08:  lea    -0x14(%ebp),%eax
085fb2eb +0x0b:  mov    %eax,(%esp)
085fb2ee +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085fb2f3 +0x13:  movl   $0x114,0x8(%esp)
085fb2fb +0x1b:  movl   $0x0,0x4(%esp)
085fb303 +0x23:  lea    -0x14(%ebp),%eax
085fb306 +0x26:  mov    %eax,(%esp)
085fb309 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085fb30e +0x2e:  mov    0x10(%ebp),%eax
085fb311 +0x31:  mov    %eax,0x4(%esp)
085fb315 +0x35:  lea    -0x14(%ebp),%eax
085fb318 +0x38:  mov    %eax,(%esp)
085fb31b +0x3b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085fb320 +0x40:  movl   $0x1,0x4(%esp)
085fb328 +0x48:  lea    -0x14(%ebp),%eax
085fb32b +0x4b:  mov    %eax,(%esp)
085fb32e +0x4e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085fb333 +0x53:  lea    -0x14(%ebp),%eax
085fb336 +0x56:  mov    %eax,0x4(%esp)
085fb33a +0x5a:  mov    0xc(%ebp),%eax
085fb33d +0x5d:  mov    %eax,(%esp)
085fb340 +0x60:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085fb345 +0x65:  jmp    085fb362 <+0x82>
085fb347 +0x67:  mov    %edx,%ebx
085fb349 +0x69:  mov    %eax,%esi
085fb34b +0x6b:  lea    -0x14(%ebp),%eax
085fb34e +0x6e:  mov    %eax,(%esp)
085fb351 +0x71:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085fb356 +0x76:  mov    %esi,%eax
085fb358 +0x78:  mov    %ebx,%edx
085fb35a +0x7a:  mov    %eax,(%esp)
085fb35d +0x7d:  call   08ae3750 <_Unwind_Resume>
085fb362 +0x82:  lea    -0x14(%ebp),%eax
085fb365 +0x85:  mov    %eax,(%esp)
085fb368 +0x88:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085fb36d +0x8d:  add    $0x20,%esp
085fb370 +0x90:  pop    %ebx
085fb371 +0x91:  pop    %esi
085fb372 +0x92:  pop    %ebp
085fb373 +0x93:  ret
```

## 反编译 C

```c
// secretshop::CSecretShop::SendSecretShopNpc @ 0x85fb2e0

/* secretshop::CSecretShop::SendSecretShopNpc(CUser*, int) */

void __thiscall
secretshop::CSecretShop::SendSecretShopNpc(CSecretShop *this,CUser *param_1,int param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085fb309 to 085fb344 has its CatchHandler @ 085fb347 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x114);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
