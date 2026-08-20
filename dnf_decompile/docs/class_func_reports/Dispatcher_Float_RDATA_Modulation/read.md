# read

`_ZN33Dispatcher_Float_RDATA_Modulation4readER9PacketBufR8MSG_BASE`

`Dispatcher_Float_RDATA_Modulation::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Float_RDATA_Modulation` | `0x08264a3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08264a3a  _ZN33Dispatcher_Float_RDATA_Modulation4readER9PacketBufR8MSG_BASE
#           Dispatcher_Float_RDATA_Modulation::read(PacketBuf&, MSG_BASE&)
# range [0x08264a3a, 0x08264acb]
08264a3a +0x00:  push   %ebp
08264a3b +0x01:  mov    %esp,%ebp
08264a3d +0x03:  sub    $0x18,%esp
08264a40 +0x06:  mov    0x10(%ebp),%eax
08264a43 +0x09:  add    $0x10,%eax
08264a46 +0x0c:  mov    %eax,0x4(%esp)
08264a4a +0x10:  mov    0xc(%ebp),%eax
08264a4d +0x13:  mov    %eax,(%esp)
08264a50 +0x16:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08264a55 +0x1b:  xor    $0x1,%eax
08264a58 +0x1e:  test   %al,%al
08264a5a +0x20:  je     08264a82 <+0x48>
08264a5c +0x22:  movl   $0x0,0xc(%esp)
08264a64 +0x2a:  movl   $0x0,0x8(%esp)
08264a6c +0x32:  movl   $&_ZZN33Dispatcher_Float_RDATA_Modulation4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08264a74 +0x3a:  movl   $0x582,(%esp)
08264a7b +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08264a80 +0x46:  jmp    08264ac9 <+0x8f>
08264a82 +0x48:  mov    0x10(%ebp),%eax
08264a85 +0x4b:  add    $0x14,%eax
08264a88 +0x4e:  mov    %eax,0x4(%esp)
08264a8c +0x52:  mov    0xc(%ebp),%eax
08264a8f +0x55:  mov    %eax,(%esp)
08264a92 +0x58:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08264a97 +0x5d:  xor    $0x1,%eax
08264a9a +0x60:  test   %al,%al
08264a9c +0x62:  je     08264ac4 <+0x8a>
08264a9e +0x64:  movl   $0x0,0xc(%esp)
08264aa6 +0x6c:  movl   $0x0,0x8(%esp)
08264aae +0x74:  movl   $&_ZZN33Dispatcher_Float_RDATA_Modulation4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08264ab6 +0x7c:  movl   $0x586,(%esp)
08264abd +0x83:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08264ac2 +0x88:  jmp    08264ac9 <+0x8f>
08264ac4 +0x8a:  mov    $0x0,%eax
08264ac9 +0x8f:  leave
08264aca +0x90:  ret
08264acb +0x91:  nop
```

## 反编译 C

```c
// Dispatcher_Float_RDATA_Modulation::read @ 0x8264a3a

/* Dispatcher_Float_RDATA_Modulation::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Float_RDATA_Modulation::read
          (Dispatcher_Float_RDATA_Modulation *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x14));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x586,
                       "virtual int Dispatcher_Float_RDATA_Modulation::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x582,
                     "virtual int Dispatcher_Float_RDATA_Modulation::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```
