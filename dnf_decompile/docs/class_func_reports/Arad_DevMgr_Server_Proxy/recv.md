# recv

`_ZN24Arad_DevMgr_Server_Proxy4recvEv`

`Arad_DevMgr_Server_Proxy::recv()`

| 类 | 地址 |
|---|---|
| `Arad_DevMgr_Server_Proxy` | `0x0818de40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818de40  _ZN24Arad_DevMgr_Server_Proxy4recvEv
#           Arad_DevMgr_Server_Proxy::recv()
# range [0x0818de40, 0x0818ded1]
0818de40 +0x00:  push   %ebp
0818de41 +0x01:  mov    %esp,%ebp
0818de43 +0x03:  sub    $0x38,%esp
0818de46 +0x06:  mov    0x8(%ebp),%eax
0818de49 +0x09:  add    $0x8,%eax
0818de4c +0x0c:  mov    %eax,(%esp)
0818de4f +0x0f:  call   0818e174 <_GLOBAL__I__ZN24Arad_DevMgr_Server_ProxyC2ESsi+0x230>  ; global constructors keyed to Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x230
0818de54 +0x14:  mov    %eax,-0xc(%ebp)
0818de57 +0x17:  cmpl   $0x0,-0xc(%ebp)
0818de5b +0x1b:  jle    0818deb3 <+0x73>
0818de5d +0x1d:  mov    0x8(%ebp),%eax
0818de60 +0x20:  lea    0x8(%eax),%edx
0818de63 +0x23:  mov    -0xc(%ebp),%eax
0818de66 +0x26:  mov    %eax,0x4(%esp)
0818de6a +0x2a:  mov    %edx,(%esp)
0818de6d +0x2d:  call   0818e2c8 <_GLOBAL__I__ZN24Arad_DevMgr_Server_ProxyC2ESsi+0x384>  ; global constructors keyed to Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x384
0818de72 +0x32:  xor    $0x1,%eax
0818de75 +0x35:  test   %al,%al
0818de77 +0x37:  je     0818deac <+0x6c>
0818de79 +0x39:  movl   $"Monitor Recv Parsing Err!!!",0x10(%esp)
0818de81 +0x41:  movl   $0x34,0xc(%esp)
0818de89 +0x49:  movl   $&_ZZN24Arad_DevMgr_Server_Proxy4recvEvE12__FUNCTION__,0x8(%esp)
0818de91 +0x51:  movl   $"localjapan/Arad_DevMgr_Server_Proxy.cpp",0x4(%esp)
0818de99 +0x59:  movl   $0x1,(%esp)
0818dea0 +0x60:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818dea5 +0x65:  mov    $0x0,%eax
0818deaa +0x6a:  jmp    0818ded0 <+0x90>
0818deac +0x6c:  mov    $0x1,%eax
0818deb1 +0x71:  jmp    0818ded0 <+0x90>
0818deb3 +0x73:  cmpl   $0x0,-0xc(%ebp)
0818deb7 +0x77:  jg     0818decb <+0x8b>
0818deb9 +0x79:  mov    0x8(%ebp),%eax
0818debc +0x7c:  mov    %eax,(%esp)
0818debf +0x7f:  call   0818de2a <_ZN24Arad_DevMgr_Server_Proxy10disconnectEv>  ; Arad_DevMgr_Server_Proxy::disconnect()
0818dec4 +0x84:  mov    $0x0,%eax
0818dec9 +0x89:  jmp    0818ded0 <+0x90>
0818decb +0x8b:  mov    $0x1,%eax
0818ded0 +0x90:  leave
0818ded1 +0x91:  ret
```

## 反编译 C

```c
// Arad_DevMgr_Server_Proxy::recv @ 0x818de40

/* Arad_DevMgr_Server_Proxy::recv() */

undefined4 __thiscall Arad_DevMgr_Server_Proxy::recv(Arad_DevMgr_Server_Proxy *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CNetwork<6144,100000>::recv_packet((CNetwork<6144,100000> *)(this + 8));
  if (iVar2 < 1) {
    if (iVar2 < 1) {
      disconnect(this);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    cVar1 = CNetwork<6144,100000>::Parsing_ServerPacket((CNetwork<6144,100000> *)(this + 8),iVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"localjapan/Arad_DevMgr_Server_Proxy.cpp","recv",0x34,
                 "Monitor Recv Parsing Err!!!");
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
