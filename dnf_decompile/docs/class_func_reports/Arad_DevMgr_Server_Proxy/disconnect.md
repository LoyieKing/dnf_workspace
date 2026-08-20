# disconnect

`_ZN24Arad_DevMgr_Server_Proxy10disconnectEv`

`Arad_DevMgr_Server_Proxy::disconnect()`

| 类 | 地址 |
|---|---|
| `Arad_DevMgr_Server_Proxy` | `0x0818de2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818de2a  _ZN24Arad_DevMgr_Server_Proxy10disconnectEv
#           Arad_DevMgr_Server_Proxy::disconnect()
# range [0x0818de2a, 0x0818de3f]
0818de2a +0x00:  push   %ebp
0818de2b +0x01:  mov    %esp,%ebp
0818de2d +0x03:  sub    $0x18,%esp
0818de30 +0x06:  mov    0x8(%ebp),%eax
0818de33 +0x09:  add    $0x8,%eax
0818de36 +0x0c:  mov    %eax,(%esp)
0818de39 +0x0f:  call   0818e100 <_GLOBAL__I__ZN24Arad_DevMgr_Server_ProxyC2ESsi+0x1bc>  ; global constructors keyed to Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x1bc
0818de3e +0x14:  leave
0818de3f +0x15:  ret
```

## 反编译 C

```c
// Arad_DevMgr_Server_Proxy::disconnect @ 0x818de2a

/* Arad_DevMgr_Server_Proxy::disconnect() */

void __thiscall Arad_DevMgr_Server_Proxy::disconnect(Arad_DevMgr_Server_Proxy *this)

{
  CNetwork<6144,100000>::disconnect((CNetwork<6144,100000> *)(this + 8));
  return;
}
```
