# receive

`_ZN5yaSSL6Socket7receiveEPhji`

`yaSSL::Socket::receive(unsigned char*, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a1590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1590  _ZN5yaSSL6Socket7receiveEPhji
#           yaSSL::Socket::receive(unsigned char*, unsigned int, int)
# range [0x087a1590, 0x087a160e]
087a1590 +0x00:  push   %ebp
087a1591 +0x01:  mov    %esp,%ebp
087a1593 +0x03:  sub    $0x28,%esp
087a1596 +0x06:  mov    %edi,-0x4(%ebp)
087a1599 +0x09:  mov    0x14(%ebp),%eax
087a159c +0x0c:  mov    0x8(%ebp),%edi
087a159f +0x0f:  mov    %ebx,-0xc(%ebp)
087a15a2 +0x12:  mov    %esi,-0x8(%ebp)
087a15a5 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
087a15aa +0x1a:  add    $0xbcb5ee,%ebx
087a15b0 +0x20:  movb   $0x0,0x4(%edi)
087a15b4 +0x24:  mov    %eax,0xc(%esp)
087a15b8 +0x28:  mov    0x10(%ebp),%eax
087a15bb +0x2b:  mov    %eax,0x8(%esp)
087a15bf +0x2f:  mov    0xc(%ebp),%eax
087a15c2 +0x32:  mov    %eax,0x4(%esp)
087a15c6 +0x36:  mov    (%edi),%eax
087a15c8 +0x38:  mov    %eax,(%esp)
087a15cb +0x3b:  call   0807e240 <_init+0xb38>
087a15d0 +0x40:  cmp    $0xffffffff,%eax
087a15d3 +0x43:  mov    %eax,%esi
087a15d5 +0x45:  je     087a15f0 <+0x60>
087a15d7 +0x47:  test   %esi,%esi
087a15d9 +0x49:  mov    $0xffffffff,%eax
087a15de +0x4e:  je     087a15e2 <+0x52>
087a15e0 +0x50:  mov    %esi,%eax
087a15e2 +0x52:  mov    -0xc(%ebp),%ebx
087a15e5 +0x55:  mov    -0x8(%ebp),%esi
087a15e8 +0x58:  mov    -0x4(%ebp),%edi
087a15eb +0x5b:  mov    %ebp,%esp
087a15ed +0x5d:  pop    %ebp
087a15ee +0x5e:  ret
087a15ef +0x5f:  nop
087a15f0 +0x60:  call   087a1540 <_ZN5yaSSL6Socket13get_lastErrorEv>  ; yaSSL::Socket::get_lastError()
087a15f5 +0x65:  cmp    $0xb,%eax
087a15f8 +0x68:  je     087a1604 <+0x74>
087a15fa +0x6a:  call   087a1540 <_ZN5yaSSL6Socket13get_lastErrorEv>  ; yaSSL::Socket::get_lastError()
087a15ff +0x6f:  cmp    $0xb,%eax
087a1602 +0x72:  jne    087a15e0 <+0x50>
087a1604 +0x74:  movb   $0x1,0x4(%edi)
087a1608 +0x78:  xor    %eax,%eax
087a160a +0x7a:  movb   $0x1,0x5(%edi)
087a160e +0x7e:  jmp    087a15e2 <+0x52>
```

## 反编译 C

```c
// yaSSL::Socket::receive @ 0x87a1590

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Socket::receive(unsigned char*, unsigned int, int) */

ssize_t __thiscall yaSSL::Socket::receive(Socket *this,uchar *param_1,uint param_2,int param_3)

{
  ssize_t sVar1;
  int iVar2;
  
  this[4] = (Socket)0x0;
  sVar1 = recv(*(int *)this,param_1,param_2,param_3);
  if (sVar1 == -1) {
    iVar2 = get_lastError();
    if ((iVar2 == 0xb) || (iVar2 = get_lastError(), iVar2 == 0xb)) {
      this[4] = (Socket)0x1;
      sVar1 = 0;
      this[5] = (Socket)0x1;
    }
  }
  else if (sVar1 == 0) {
    return -1;
  }
  return sVar1;
}
```
