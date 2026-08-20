# dispatch_sig

`_ZN41Dispatcher_Security_NonClient_GetResponse12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Security_NonClient_GetResponse::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Security_NonClient_GetResponse` | `0x08224e64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08224e64  _ZN41Dispatcher_Security_NonClient_GetResponse12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Security_NonClient_GetResponse::dispatch_sig(CUser*, PacketBuf&)
# range [0x08224e64, 0x08224edb]
08224e64 +0x00:  push   %ebp
08224e65 +0x01:  mov    %esp,%ebp
08224e67 +0x03:  sub    $0x18,%esp
08224e6a +0x06:  mov    0x10(%ebp),%eax
08224e6d +0x09:  mov    %eax,0x4(%esp)
08224e71 +0x0d:  mov    0xc(%ebp),%eax
08224e74 +0x10:  mov    %eax,(%esp)
08224e77 +0x13:  call   08274cc3 <_Z25_NS_NonClient_GetResponseP5CUserR9PacketBuf>  ; _NS_NonClient_GetResponse(CUser*, PacketBuf&)
08224e7c +0x18:  cmp    $0x1,%eax
08224e7f +0x1b:  je     08224e88 <+0x24>
08224e81 +0x1d:  cmp    $0x2,%eax
08224e84 +0x20:  je     08224eae <+0x4a>
08224e86 +0x22:  jmp    08224ed4 <+0x70>
08224e88 +0x24:  movl   $0x0,0xc(%esp)
08224e90 +0x2c:  movl   $0x0,0x8(%esp)
08224e98 +0x34:  movl   $&_ZZN41Dispatcher_Security_NonClient_GetResponse12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224ea0 +0x3c:  movl   $0xdf88,(%esp)
08224ea7 +0x43:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224eac +0x48:  jmp    08224ed9 <+0x75>
08224eae +0x4a:  movl   $0x0,0xc(%esp)
08224eb6 +0x52:  movl   $0x0,0x8(%esp)
08224ebe +0x5a:  movl   $&_ZZN41Dispatcher_Security_NonClient_GetResponse12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224ec6 +0x62:  movl   $0xdf8a,(%esp)
08224ecd +0x69:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224ed2 +0x6e:  jmp    08224ed9 <+0x75>
08224ed4 +0x70:  mov    $0x0,%eax
08224ed9 +0x75:  leave
08224eda +0x76:  ret
08224edb +0x77:  nop
```

## 反编译 C

```c
// Dispatcher_Security_NonClient_GetResponse::dispatch_sig @ 0x8224e64

/* Dispatcher_Security_NonClient_GetResponse::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Security_NonClient_GetResponse::dispatch_sig
          (Dispatcher_Security_NonClient_GetResponse *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _NS_NonClient_GetResponse(param_1,param_2);
  if (iVar1 == 1) {
    uVar2 = LineFunc(0xdf88,
                     "virtual int Dispatcher_Security_NonClient_GetResponse::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else if (iVar1 == 2) {
    uVar2 = LineFunc(0xdf8a,
                     "virtual int Dispatcher_Security_NonClient_GetResponse::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
