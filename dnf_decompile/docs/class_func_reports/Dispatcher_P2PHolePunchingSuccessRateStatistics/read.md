# read

`_ZN47Dispatcher_P2PHolePunchingSuccessRateStatistics4readER9PacketBufR8MSG_BASE`

`Dispatcher_P2PHolePunchingSuccessRateStatistics::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_P2PHolePunchingSuccessRateStatistics` | `0x0825feda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825feda  _ZN47Dispatcher_P2PHolePunchingSuccessRateStatistics4readER9PacketBufR8MSG_BASE
#           Dispatcher_P2PHolePunchingSuccessRateStatistics::read(PacketBuf&, MSG_BASE&)
# range [0x0825feda, 0x0825ffb5]
0825feda +0x00:  push   %ebp
0825fedb +0x01:  mov    %esp,%ebp
0825fedd +0x03:  sub    $0x28,%esp
0825fee0 +0x06:  mov    0x10(%ebp),%eax
0825fee3 +0x09:  mov    %eax,-0xc(%ebp)
0825fee6 +0x0c:  mov    -0xc(%ebp),%eax
0825fee9 +0x0f:  add    $0xd,%eax
0825feec +0x12:  mov    %eax,0x4(%esp)
0825fef0 +0x16:  mov    0xc(%ebp),%eax
0825fef3 +0x19:  mov    %eax,(%esp)
0825fef6 +0x1c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0825fefb +0x21:  xor    $0x1,%eax
0825fefe +0x24:  test   %al,%al
0825ff00 +0x26:  je     0825ff2b <+0x51>
0825ff02 +0x28:  movl   $0x0,0xc(%esp)
0825ff0a +0x30:  movl   $0x0,0x8(%esp)
0825ff12 +0x38:  movl   $&_ZZN47Dispatcher_P2PHolePunchingSuccessRateStatistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825ff1a +0x40:  movl   $0xb3d,(%esp)
0825ff21 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825ff26 +0x4c:  jmp    0825ffb4 <+0xda>
0825ff2b +0x51:  mov    -0xc(%ebp),%eax
0825ff2e +0x54:  add    $0xe,%eax
0825ff31 +0x57:  mov    %eax,0x4(%esp)
0825ff35 +0x5b:  mov    0xc(%ebp),%eax
0825ff38 +0x5e:  mov    %eax,(%esp)
0825ff3b +0x61:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0825ff40 +0x66:  xor    $0x1,%eax
0825ff43 +0x69:  test   %al,%al
0825ff45 +0x6b:  je     0825ff6d <+0x93>
0825ff47 +0x6d:  movl   $0x0,0xc(%esp)
0825ff4f +0x75:  movl   $0x0,0x8(%esp)
0825ff57 +0x7d:  movl   $&_ZZN47Dispatcher_P2PHolePunchingSuccessRateStatistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825ff5f +0x85:  movl   $0xb40,(%esp)
0825ff66 +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825ff6b +0x91:  jmp    0825ffb4 <+0xda>
0825ff6d +0x93:  mov    -0xc(%ebp),%eax
0825ff70 +0x96:  add    $0x12,%eax
0825ff73 +0x99:  mov    %eax,0x4(%esp)
0825ff77 +0x9d:  mov    0xc(%ebp),%eax
0825ff7a +0xa0:  mov    %eax,(%esp)
0825ff7d +0xa3:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0825ff82 +0xa8:  xor    $0x1,%eax
0825ff85 +0xab:  test   %al,%al
0825ff87 +0xad:  je     0825ffaf <+0xd5>
0825ff89 +0xaf:  movl   $0x0,0xc(%esp)
0825ff91 +0xb7:  movl   $0x0,0x8(%esp)
0825ff99 +0xbf:  movl   $&_ZZN47Dispatcher_P2PHolePunchingSuccessRateStatistics4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825ffa1 +0xc7:  movl   $0xb43,(%esp)
0825ffa8 +0xce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825ffad +0xd3:  jmp    0825ffb4 <+0xda>
0825ffaf +0xd5:  mov    $0x0,%eax
0825ffb4 +0xda:  leave
0825ffb5 +0xdb:  ret
```

## 反编译 C

```c
// Dispatcher_P2PHolePunchingSuccessRateStatistics::read @ 0x825feda

/* Dispatcher_P2PHolePunchingSuccessRateStatistics::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_P2PHolePunchingSuccessRateStatistics::read
          (Dispatcher_P2PHolePunchingSuccessRateStatistics *this,PacketBuf *param_1,
          MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0xb43,
                         "virtual int Dispatcher_P2PHolePunchingSuccessRateStatistics::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0xb40,
                       "virtual int Dispatcher_P2PHolePunchingSuccessRateStatistics::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xb3d,
                     "virtual int Dispatcher_P2PHolePunchingSuccessRateStatistics::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
