# read

`_ZN35Dispatcher_UpdateContractOfCubeInfo4readER9PacketBufR8MSG_BASE`

`Dispatcher_UpdateContractOfCubeInfo::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpdateContractOfCubeInfo` | `0x0825f868` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f868  _ZN35Dispatcher_UpdateContractOfCubeInfo4readER9PacketBufR8MSG_BASE
#           Dispatcher_UpdateContractOfCubeInfo::read(PacketBuf&, MSG_BASE&)
# range [0x0825f868, 0x0825f8ff]
0825f868 +0x00:  push   %ebp
0825f869 +0x01:  mov    %esp,%ebp
0825f86b +0x03:  sub    $0x28,%esp
0825f86e +0x06:  mov    0x10(%ebp),%eax
0825f871 +0x09:  mov    %eax,-0xc(%ebp)
0825f874 +0x0c:  mov    -0xc(%ebp),%eax
0825f877 +0x0f:  add    $0xd,%eax
0825f87a +0x12:  mov    %eax,0x4(%esp)
0825f87e +0x16:  mov    0xc(%ebp),%eax
0825f881 +0x19:  mov    %eax,(%esp)
0825f884 +0x1c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0825f889 +0x21:  xor    $0x1,%eax
0825f88c +0x24:  test   %al,%al
0825f88e +0x26:  je     0825f8b6 <+0x4e>
0825f890 +0x28:  movl   $0x0,0xc(%esp)
0825f898 +0x30:  movl   $0x0,0x8(%esp)
0825f8a0 +0x38:  movl   $&_ZZN35Dispatcher_UpdateContractOfCubeInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825f8a8 +0x40:  movl   $0x95e,(%esp)
0825f8af +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825f8b4 +0x4c:  jmp    0825f8fd <+0x95>
0825f8b6 +0x4e:  mov    -0xc(%ebp),%eax
0825f8b9 +0x51:  add    $0xe,%eax
0825f8bc +0x54:  mov    %eax,0x4(%esp)
0825f8c0 +0x58:  mov    0xc(%ebp),%eax
0825f8c3 +0x5b:  mov    %eax,(%esp)
0825f8c6 +0x5e:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0825f8cb +0x63:  xor    $0x1,%eax
0825f8ce +0x66:  test   %al,%al
0825f8d0 +0x68:  je     0825f8f8 <+0x90>
0825f8d2 +0x6a:  movl   $0x0,0xc(%esp)
0825f8da +0x72:  movl   $0x0,0x8(%esp)
0825f8e2 +0x7a:  movl   $&_ZZN35Dispatcher_UpdateContractOfCubeInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825f8ea +0x82:  movl   $0x961,(%esp)
0825f8f1 +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825f8f6 +0x8e:  jmp    0825f8fd <+0x95>
0825f8f8 +0x90:  mov    $0x0,%eax
0825f8fd +0x95:  leave
0825f8fe +0x96:  ret
0825f8ff +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_UpdateContractOfCubeInfo::read @ 0x825f868

/* Dispatcher_UpdateContractOfCubeInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UpdateContractOfCubeInfo::read
          (Dispatcher_UpdateContractOfCubeInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

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
      uVar2 = LineFunc(0x961,
                       "virtual int Dispatcher_UpdateContractOfCubeInfo::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x95e,
                     "virtual int Dispatcher_UpdateContractOfCubeInfo::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
