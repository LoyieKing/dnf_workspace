# read

`_ZN23Dispatcher_ScanBotByDrv4readER9PacketBufR8MSG_BASE`

`Dispatcher_ScanBotByDrv::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ScanBotByDrv` | `0x082646ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082646ae  _ZN23Dispatcher_ScanBotByDrv4readER9PacketBufR8MSG_BASE
#           Dispatcher_ScanBotByDrv::read(PacketBuf&, MSG_BASE&)
# range [0x082646ae, 0x0826473f]
082646ae +0x00:  push   %ebp
082646af +0x01:  mov    %esp,%ebp
082646b1 +0x03:  sub    $0x18,%esp
082646b4 +0x06:  mov    0x10(%ebp),%eax
082646b7 +0x09:  add    $0xd,%eax
082646ba +0x0c:  mov    %eax,0x4(%esp)
082646be +0x10:  mov    0xc(%ebp),%eax
082646c1 +0x13:  mov    %eax,(%esp)
082646c4 +0x16:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082646c9 +0x1b:  xor    $0x1,%eax
082646cc +0x1e:  test   %al,%al
082646ce +0x20:  je     082646f6 <+0x48>
082646d0 +0x22:  movl   $0x0,0xc(%esp)
082646d8 +0x2a:  movl   $0x0,0x8(%esp)
082646e0 +0x32:  movl   $&_ZZN23Dispatcher_ScanBotByDrv4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
082646e8 +0x3a:  movl   $0x42c,(%esp)
082646ef +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082646f4 +0x46:  jmp    0826473d <+0x8f>
082646f6 +0x48:  mov    0x10(%ebp),%eax
082646f9 +0x4b:  add    $0x11,%eax
082646fc +0x4e:  mov    %eax,0x4(%esp)
08264700 +0x52:  mov    0xc(%ebp),%eax
08264703 +0x55:  mov    %eax,(%esp)
08264706 +0x58:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0826470b +0x5d:  xor    $0x1,%eax
0826470e +0x60:  test   %al,%al
08264710 +0x62:  je     08264738 <+0x8a>
08264712 +0x64:  movl   $0x0,0xc(%esp)
0826471a +0x6c:  movl   $0x0,0x8(%esp)
08264722 +0x74:  movl   $&_ZZN23Dispatcher_ScanBotByDrv4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0826472a +0x7c:  movl   $0x431,(%esp)
08264731 +0x83:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08264736 +0x88:  jmp    0826473d <+0x8f>
08264738 +0x8a:  mov    $0x0,%eax
0826473d +0x8f:  leave
0826473e +0x90:  ret
0826473f +0x91:  nop
```

## 反编译 C

```c
// Dispatcher_ScanBotByDrv::read @ 0x82646ae

/* Dispatcher_ScanBotByDrv::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ScanBotByDrv::read(Dispatcher_ScanBotByDrv *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x431,"virtual int Dispatcher_ScanBotByDrv::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x42c,"virtual int Dispatcher_ScanBotByDrv::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
