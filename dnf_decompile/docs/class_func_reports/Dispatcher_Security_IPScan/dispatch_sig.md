# dispatch_sig

`_ZN26Dispatcher_Security_IPScan12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Security_IPScan::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Security_IPScan` | `0x08223d96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08223d96  _ZN26Dispatcher_Security_IPScan12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Security_IPScan::dispatch_sig(CUser*, PacketBuf&)
# range [0x08223d96, 0x08223ddf]
08223d96 +0x00:  push   %ebp
08223d97 +0x01:  mov    %esp,%ebp
08223d99 +0x03:  sub    $0x18,%esp
08223d9c +0x06:  mov    0x10(%ebp),%eax
08223d9f +0x09:  mov    %eax,0x4(%esp)
08223da3 +0x0d:  mov    0xc(%ebp),%eax
08223da6 +0x10:  mov    %eax,(%esp)
08223da9 +0x13:  call   08274676 <_Z10_NS_IPScanP5CUserR9PacketBuf>  ; _NS_IPScan(CUser*, PacketBuf&)
08223dae +0x18:  cmp    $0x1,%eax
08223db1 +0x1b:  jne    08223dd9 <+0x43>
08223db3 +0x1d:  movl   $0x0,0xc(%esp)
08223dbb +0x25:  movl   $0x0,0x8(%esp)
08223dc3 +0x2d:  movl   $&_ZZN26Dispatcher_Security_IPScan12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223dcb +0x35:  movl   $0xde94,(%esp)
08223dd2 +0x3c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223dd7 +0x41:  jmp    08223dde <+0x48>
08223dd9 +0x43:  mov    $0x0,%eax
08223dde +0x48:  leave
08223ddf +0x49:  ret
```

## 反编译 C

```c
// Dispatcher_Security_IPScan::dispatch_sig @ 0x8223d96

/* Dispatcher_Security_IPScan::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_IPScan::dispatch_sig
          (Dispatcher_Security_IPScan *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_IPScan(param_1,param_2);
  if (iVar1 == 1) {
    uVar2 = LineFunc(0xde94,
                     "virtual int Dispatcher_Security_IPScan::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
