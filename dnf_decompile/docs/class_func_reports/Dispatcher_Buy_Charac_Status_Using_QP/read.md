# read

`_ZN37Dispatcher_Buy_Charac_Status_Using_QP4readER9PacketBufR8MSG_BASE`

`Dispatcher_Buy_Charac_Status_Using_QP::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Buy_Charac_Status_Using_QP` | `0x081d641c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d641c  _ZN37Dispatcher_Buy_Charac_Status_Using_QP4readER9PacketBufR8MSG_BASE
#           Dispatcher_Buy_Charac_Status_Using_QP::read(PacketBuf&, MSG_BASE&)
# range [0x081d641c, 0x081d64b3]
081d641c +0x00:  push   %ebp
081d641d +0x01:  mov    %esp,%ebp
081d641f +0x03:  sub    $0x28,%esp
081d6422 +0x06:  mov    0x10(%ebp),%eax
081d6425 +0x09:  mov    %eax,-0xc(%ebp)
081d6428 +0x0c:  mov    -0xc(%ebp),%eax
081d642b +0x0f:  add    $0xd,%eax
081d642e +0x12:  mov    %eax,0x4(%esp)
081d6432 +0x16:  mov    0xc(%ebp),%eax
081d6435 +0x19:  mov    %eax,(%esp)
081d6438 +0x1c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081d643d +0x21:  xor    $0x1,%eax
081d6440 +0x24:  test   %al,%al
081d6442 +0x26:  je     081d646a <+0x4e>
081d6444 +0x28:  movl   $0x0,0xc(%esp)
081d644c +0x30:  movl   $0x0,0x8(%esp)
081d6454 +0x38:  movl   $&_ZZN37Dispatcher_Buy_Charac_Status_Using_QP4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d645c +0x40:  movl   $0x3fb8,(%esp)
081d6463 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d6468 +0x4c:  jmp    081d64b1 <+0x95>
081d646a +0x4e:  mov    -0xc(%ebp),%eax
081d646d +0x51:  add    $0xe,%eax
081d6470 +0x54:  mov    %eax,0x4(%esp)
081d6474 +0x58:  mov    0xc(%ebp),%eax
081d6477 +0x5b:  mov    %eax,(%esp)
081d647a +0x5e:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081d647f +0x63:  xor    $0x1,%eax
081d6482 +0x66:  test   %al,%al
081d6484 +0x68:  je     081d64ac <+0x90>
081d6486 +0x6a:  movl   $0x0,0xc(%esp)
081d648e +0x72:  movl   $0x0,0x8(%esp)
081d6496 +0x7a:  movl   $&_ZZN37Dispatcher_Buy_Charac_Status_Using_QP4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d649e +0x82:  movl   $0x3fba,(%esp)
081d64a5 +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d64aa +0x8e:  jmp    081d64b1 <+0x95>
081d64ac +0x90:  mov    $0x0,%eax
081d64b1 +0x95:  leave
081d64b2 +0x96:  ret
081d64b3 +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_Buy_Charac_Status_Using_QP::read @ 0x81d641c

/* Dispatcher_Buy_Charac_Status_Using_QP::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Buy_Charac_Status_Using_QP::read
          (Dispatcher_Buy_Charac_Status_Using_QP *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x3fba,
                       "virtual int Dispatcher_Buy_Charac_Status_Using_QP::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x3fb8,
                     "virtual int Dispatcher_Buy_Charac_Status_Using_QP::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
