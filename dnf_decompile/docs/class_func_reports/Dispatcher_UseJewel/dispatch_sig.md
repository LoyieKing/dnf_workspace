# dispatch_sig

`_ZN19Dispatcher_UseJewel12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UseJewel::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseJewel` | `0x08217bd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08217bd6  _ZN19Dispatcher_UseJewel12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UseJewel::dispatch_sig(CUser*, PacketBuf&)
# range [0x08217bd6, 0x08217c05]
08217bd6 +0x00:  push   %ebp
08217bd7 +0x01:  mov    %esp,%ebp
08217bd9 +0x03:  sub    $0x288,%esp
08217bdf +0x09:  movl   $0x0,0xc(%esp)
08217be7 +0x11:  movl   $0x0,0x8(%esp)
08217bef +0x19:  movl   $&_ZZN19Dispatcher_UseJewel12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217bf7 +0x21:  movl   $0xc9e2,(%esp)
08217bfe +0x28:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217c03 +0x2d:  leave
08217c04 +0x2e:  ret
08217c05 +0x2f:  nop
```

## 反编译 C

```c
// Dispatcher_UseJewel::dispatch_sig @ 0x8217bd6

/* Dispatcher_UseJewel::dispatch_sig(CUser*, PacketBuf&) */

void Dispatcher_UseJewel::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0xc9e2,"virtual int Dispatcher_UseJewel::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}
```
