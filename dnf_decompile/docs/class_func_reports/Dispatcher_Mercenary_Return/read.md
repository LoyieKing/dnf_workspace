# read

`_ZN27Dispatcher_Mercenary_Return4readER9PacketBufR8MSG_BASE`

`Dispatcher_Mercenary_Return::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Mercenary_Return` | `0x081dd904` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dd904  _ZN27Dispatcher_Mercenary_Return4readER9PacketBufR8MSG_BASE
#           Dispatcher_Mercenary_Return::read(PacketBuf&, MSG_BASE&)
# range [0x081dd904, 0x081dd99b]
081dd904 +0x00:  push   %ebp
081dd905 +0x01:  mov    %esp,%ebp
081dd907 +0x03:  sub    $0x28,%esp
081dd90a +0x06:  mov    0x10(%ebp),%eax
081dd90d +0x09:  mov    %eax,-0xc(%ebp)
081dd910 +0x0c:  mov    -0xc(%ebp),%eax
081dd913 +0x0f:  add    $0xd,%eax
081dd916 +0x12:  mov    %eax,0x4(%esp)
081dd91a +0x16:  mov    0xc(%ebp),%eax
081dd91d +0x19:  mov    %eax,(%esp)
081dd920 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081dd925 +0x21:  xor    $0x1,%eax
081dd928 +0x24:  test   %al,%al
081dd92a +0x26:  je     081dd952 <+0x4e>
081dd92c +0x28:  movl   $0x0,0xc(%esp)
081dd934 +0x30:  movl   $0x0,0x8(%esp)
081dd93c +0x38:  movl   $&_ZZN27Dispatcher_Mercenary_Return4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dd944 +0x40:  movl   $0x4e88,(%esp)
081dd94b +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dd950 +0x4c:  jmp    081dd999 <+0x95>
081dd952 +0x4e:  mov    -0xc(%ebp),%eax
081dd955 +0x51:  add    $0x10,%eax
081dd958 +0x54:  mov    %eax,0x4(%esp)
081dd95c +0x58:  mov    0xc(%ebp),%eax
081dd95f +0x5b:  mov    %eax,(%esp)
081dd962 +0x5e:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081dd967 +0x63:  xor    $0x1,%eax
081dd96a +0x66:  test   %al,%al
081dd96c +0x68:  je     081dd994 <+0x90>
081dd96e +0x6a:  movl   $0x0,0xc(%esp)
081dd976 +0x72:  movl   $0x0,0x8(%esp)
081dd97e +0x7a:  movl   $&_ZZN27Dispatcher_Mercenary_Return4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dd986 +0x82:  movl   $0x4e8a,(%esp)
081dd98d +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dd992 +0x8e:  jmp    081dd999 <+0x95>
081dd994 +0x90:  mov    $0x0,%eax
081dd999 +0x95:  leave
081dd99a +0x96:  ret
081dd99b +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_Mercenary_Return::read @ 0x81dd904

/* Dispatcher_Mercenary_Return::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Mercenary_Return::read
          (Dispatcher_Mercenary_Return *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x4e8a,"virtual int Dispatcher_Mercenary_Return::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x4e88,"virtual int Dispatcher_Mercenary_Return::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```
