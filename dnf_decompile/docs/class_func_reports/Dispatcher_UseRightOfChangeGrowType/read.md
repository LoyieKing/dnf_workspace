# read

`_ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE`

`Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseRightOfChangeGrowType` | `0x0825dbcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825dbcc  _ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE
#           Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)
# range [0x0825dbcc, 0x0825dc63]
0825dbcc +0x00:  push   %ebp
0825dbcd +0x01:  mov    %esp,%ebp
0825dbcf +0x03:  sub    $0x28,%esp
0825dbd2 +0x06:  mov    0x10(%ebp),%eax
0825dbd5 +0x09:  mov    %eax,-0xc(%ebp)
0825dbd8 +0x0c:  mov    -0xc(%ebp),%eax
0825dbdb +0x0f:  add    $0xd,%eax
0825dbde +0x12:  mov    %eax,0x4(%esp)
0825dbe2 +0x16:  mov    0xc(%ebp),%eax
0825dbe5 +0x19:  mov    %eax,(%esp)
0825dbe8 +0x1c:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0825dbed +0x21:  xor    $0x1,%eax
0825dbf0 +0x24:  test   %al,%al
0825dbf2 +0x26:  je     0825dc1a <+0x4e>
0825dbf4 +0x28:  movl   $0x0,0xc(%esp)
0825dbfc +0x30:  movl   $0x0,0x8(%esp)
0825dc04 +0x38:  movl   $&_ZZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825dc0c +0x40:  movl   $0x81,(%esp)
0825dc13 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825dc18 +0x4c:  jmp    0825dc61 <+0x95>
0825dc1a +0x4e:  mov    -0xc(%ebp),%eax
0825dc1d +0x51:  add    $0xf,%eax
0825dc20 +0x54:  mov    %eax,0x4(%esp)
0825dc24 +0x58:  mov    0xc(%ebp),%eax
0825dc27 +0x5b:  mov    %eax,(%esp)
0825dc2a +0x5e:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
0825dc2f +0x63:  xor    $0x1,%eax
0825dc32 +0x66:  test   %al,%al
0825dc34 +0x68:  je     0825dc5c <+0x90>
0825dc36 +0x6a:  movl   $0x0,0xc(%esp)
0825dc3e +0x72:  movl   $0x0,0x8(%esp)
0825dc46 +0x7a:  movl   $&_ZZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0825dc4e +0x82:  movl   $0x84,(%esp)
0825dc55 +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825dc5a +0x8e:  jmp    0825dc61 <+0x95>
0825dc5c +0x90:  mov    $0x0,%eax
0825dc61 +0x95:  leave
0825dc62 +0x96:  ret
0825dc63 +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_UseRightOfChangeGrowType::read @ 0x825dbcc

/* Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UseRightOfChangeGrowType::read
          (Dispatcher_UseRightOfChangeGrowType *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x84,
                       "virtual int Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x81,
                     "virtual int Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
