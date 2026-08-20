# read

`_ZN24Dispatcher_SelectStriker4readER9PacketBufR8MSG_BASE`

`Dispatcher_SelectStriker::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SelectStriker` | `0x081e3d32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e3d32  _ZN24Dispatcher_SelectStriker4readER9PacketBufR8MSG_BASE
#           Dispatcher_SelectStriker::read(PacketBuf&, MSG_BASE&)
# range [0x081e3d32, 0x081e3dc9]
081e3d32 +0x00:  push   %ebp
081e3d33 +0x01:  mov    %esp,%ebp
081e3d35 +0x03:  sub    $0x28,%esp
081e3d38 +0x06:  mov    0x10(%ebp),%eax
081e3d3b +0x09:  mov    %eax,-0xc(%ebp)
081e3d3e +0x0c:  mov    -0xc(%ebp),%eax
081e3d41 +0x0f:  add    $0xd,%eax
081e3d44 +0x12:  mov    %eax,0x4(%esp)
081e3d48 +0x16:  mov    0xc(%ebp),%eax
081e3d4b +0x19:  mov    %eax,(%esp)
081e3d4e +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081e3d53 +0x21:  xor    $0x1,%eax
081e3d56 +0x24:  test   %al,%al
081e3d58 +0x26:  je     081e3d80 <+0x4e>
081e3d5a +0x28:  movl   $0x0,0xc(%esp)
081e3d62 +0x30:  movl   $0x0,0x8(%esp)
081e3d6a +0x38:  movl   $&_ZZN24Dispatcher_SelectStriker4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e3d72 +0x40:  movl   $0x5b81,(%esp)
081e3d79 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e3d7e +0x4c:  jmp    081e3dc7 <+0x95>
081e3d80 +0x4e:  mov    -0xc(%ebp),%eax
081e3d83 +0x51:  add    $0xe,%eax
081e3d86 +0x54:  mov    %eax,0x4(%esp)
081e3d8a +0x58:  mov    0xc(%ebp),%eax
081e3d8d +0x5b:  mov    %eax,(%esp)
081e3d90 +0x5e:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081e3d95 +0x63:  xor    $0x1,%eax
081e3d98 +0x66:  test   %al,%al
081e3d9a +0x68:  je     081e3dc2 <+0x90>
081e3d9c +0x6a:  movl   $0x0,0xc(%esp)
081e3da4 +0x72:  movl   $0x0,0x8(%esp)
081e3dac +0x7a:  movl   $&_ZZN24Dispatcher_SelectStriker4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e3db4 +0x82:  movl   $0x5b84,(%esp)
081e3dbb +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e3dc0 +0x8e:  jmp    081e3dc7 <+0x95>
081e3dc2 +0x90:  mov    $0x0,%eax
081e3dc7 +0x95:  leave
081e3dc8 +0x96:  ret
081e3dc9 +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_SelectStriker::read @ 0x81e3d32

/* Dispatcher_SelectStriker::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SelectStriker::read(Dispatcher_SelectStriker *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x5b84,"virtual int Dispatcher_SelectStriker::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x5b81,"virtual int Dispatcher_SelectStriker::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```
