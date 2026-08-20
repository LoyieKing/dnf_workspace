# dispatch_sig

`_ZN15DisPatcher_Cera12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_Cera::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_Cera` | `0x081fd360` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fd360  _ZN15DisPatcher_Cera12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_Cera::dispatch_sig(CUser*, PacketBuf&)
# range [0x081fd360, 0x081fd395]
081fd360 +0x00:  push   %ebp
081fd361 +0x01:  mov    %esp,%ebp
081fd363 +0x03:  sub    $0x18,%esp
081fd366 +0x06:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
081fd36b +0x0b:  mov    (%eax),%eax
081fd36d +0x0d:  add    $0x2c,%eax
081fd370 +0x10:  mov    (%eax),%ecx
081fd372 +0x12:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
081fd377 +0x17:  mov    0xc(%ebp),%edx
081fd37a +0x1a:  mov    %edx,0x4(%esp)
081fd37e +0x1e:  mov    %eax,(%esp)
081fd381 +0x21:  call   *%ecx
081fd383 +0x23:  mov    0xc(%ebp),%eax
081fd386 +0x26:  mov    %eax,(%esp)
081fd389 +0x29:  call   08650722 <_ZN5CUser11LoadMileageEv>  ; CUser::LoadMileage()
081fd38e +0x2e:  mov    $0x0,%eax
081fd393 +0x33:  leave
081fd394 +0x34:  ret
081fd395 +0x35:  nop
```

## 反编译 C

```c
// DisPatcher_Cera::dispatch_sig @ 0x81fd360

/* DisPatcher_Cera::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_Cera::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,param_2);
  CUser::LoadMileage((CUser *)param_2);
  return 0;
}
```
