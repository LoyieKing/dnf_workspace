# send

`_ZN24Arad_DevMgr_Server_Proxy4sendEPci`

`Arad_DevMgr_Server_Proxy::send(char*, int)`

| 类 | 地址 |
|---|---|
| `Arad_DevMgr_Server_Proxy` | `0x0818ded2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ded2  _ZN24Arad_DevMgr_Server_Proxy4sendEPci
#           Arad_DevMgr_Server_Proxy::send(char*, int)
# range [0x0818ded2, 0x0818df03]
0818ded2 +0x00:  push   %ebp
0818ded3 +0x01:  mov    %esp,%ebp
0818ded5 +0x03:  sub    $0x18,%esp
0818ded8 +0x06:  mov    0x8(%ebp),%eax
0818dedb +0x09:  add    $0x8,%eax
0818dede +0x0c:  mov    %eax,(%esp)
0818dee1 +0x0f:  call   0818e4f4 <_GLOBAL__I__ZN24Arad_DevMgr_Server_ProxyC2ESsi+0x5b0>  ; global constructors keyed to Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x5b0
0818dee6 +0x14:  shr    $0x1f,%eax
0818dee9 +0x17:  test   %al,%al
0818deeb +0x19:  je     0818def4 <+0x22>
0818deed +0x1b:  mov    $0xffffffff,%eax
0818def2 +0x20:  jmp    0818df02 <+0x30>
0818def4 +0x22:  mov    0x8(%ebp),%eax
0818def7 +0x25:  add    $0x8,%eax
0818defa +0x28:  mov    %eax,(%esp)
0818defd +0x2b:  call   0818e7a0 <_GLOBAL__I__ZN24Arad_DevMgr_Server_ProxyC2ESsi+0x85c>  ; global constructors keyed to Arad_DevMgr_Server_Proxy::Arad_DevMgr_Server_Proxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x85c
0818df02 +0x30:  leave
0818df03 +0x31:  ret
```

## 反编译 C

```c
// Arad_DevMgr_Server_Proxy::send @ 0x818ded2

/* Arad_DevMgr_Server_Proxy::send(char*, int) */

undefined4 Arad_DevMgr_Server_Proxy::send(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CNetwork<6144,100000>::send_packet((CNetwork<6144,100000> *)(param_1 + 8));
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = CNetwork<6144,100000>::GetRemainSendSize((CNetwork<6144,100000> *)(param_1 + 8));
  }
  return uVar2;
}
```
