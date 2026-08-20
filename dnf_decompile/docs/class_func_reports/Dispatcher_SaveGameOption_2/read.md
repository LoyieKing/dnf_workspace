# read

`_ZN27Dispatcher_SaveGameOption_24readER9PacketBufR8MSG_BASE`

`Dispatcher_SaveGameOption_2::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveGameOption_2` | `0x081ceda4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ceda4  _ZN27Dispatcher_SaveGameOption_24readER9PacketBufR8MSG_BASE
#           Dispatcher_SaveGameOption_2::read(PacketBuf&, MSG_BASE&)
# range [0x081ceda4, 0x081cee63]
081ceda4 +0x00:  push   %ebp
081ceda5 +0x01:  mov    %esp,%ebp
081ceda7 +0x03:  sub    $0x28,%esp
081cedaa +0x06:  mov    0x10(%ebp),%eax
081cedad +0x09:  mov    %eax,-0xc(%ebp)
081cedb0 +0x0c:  mov    -0xc(%ebp),%eax
081cedb3 +0x0f:  add    $0xd,%eax
081cedb6 +0x12:  mov    %eax,0x4(%esp)
081cedba +0x16:  mov    0xc(%ebp),%eax
081cedbd +0x19:  mov    %eax,(%esp)
081cedc0 +0x1c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081cedc5 +0x21:  xor    $0x1,%eax
081cedc8 +0x24:  test   %al,%al
081cedca +0x26:  jne    081cedd9 <+0x35>
081cedcc +0x28:  mov    -0xc(%ebp),%eax
081cedcf +0x2b:  mov    0xd(%eax),%eax
081cedd2 +0x2e:  cmp    $0xbc,%eax
081cedd7 +0x33:  jbe    081cede0 <+0x3c>
081cedd9 +0x35:  mov    $0x1,%eax
081cedde +0x3a:  jmp    081cede5 <+0x41>
081cede0 +0x3c:  mov    $0x0,%eax
081cede5 +0x41:  test   %al,%al
081cede7 +0x43:  je     081cee0f <+0x6b>
081cede9 +0x45:  movl   $0x0,0xc(%esp)
081cedf1 +0x4d:  movl   $0x0,0x8(%esp)
081cedf9 +0x55:  movl   $&_ZZN27Dispatcher_SaveGameOption_24readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cee01 +0x5d:  movl   $0x28bc,(%esp)
081cee08 +0x64:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cee0d +0x69:  jmp    081cee62 <+0xbe>
081cee0f +0x6b:  mov    -0xc(%ebp),%eax
081cee12 +0x6e:  mov    0xd(%eax),%eax
081cee15 +0x71:  mov    %eax,%edx
081cee17 +0x73:  mov    -0xc(%ebp),%eax
081cee1a +0x76:  add    $0x11,%eax
081cee1d +0x79:  mov    %edx,0x8(%esp)
081cee21 +0x7d:  mov    %eax,0x4(%esp)
081cee25 +0x81:  mov    0xc(%ebp),%eax
081cee28 +0x84:  mov    %eax,(%esp)
081cee2b +0x87:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081cee30 +0x8c:  xor    $0x1,%eax
081cee33 +0x8f:  test   %al,%al
081cee35 +0x91:  je     081cee5d <+0xb9>
081cee37 +0x93:  movl   $0x0,0xc(%esp)
081cee3f +0x9b:  movl   $0x0,0x8(%esp)
081cee47 +0xa3:  movl   $&_ZZN27Dispatcher_SaveGameOption_24readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cee4f +0xab:  movl   $0x28bd,(%esp)
081cee56 +0xb2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cee5b +0xb7:  jmp    081cee62 <+0xbe>
081cee5d +0xb9:  mov    $0x0,%eax
081cee62 +0xbe:  leave
081cee63 +0xbf:  ret
```

## 反编译 C

```c
// Dispatcher_SaveGameOption_2::read @ 0x81ceda4

/* Dispatcher_SaveGameOption_2::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveGameOption_2::read
          (Dispatcher_SaveGameOption_2 *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if ((cVar2 == '\x01') && (*(uint *)(param_2 + 0xd) < 0xbd)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = LineFunc(0x28bc,"virtual int Dispatcher_SaveGameOption_2::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  else {
    cVar2 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0x11),*(int *)(param_2 + 0xd));
    if (cVar2 == '\x01') {
      uVar3 = 0;
    }
    else {
      uVar3 = LineFunc(0x28bd,"virtual int Dispatcher_SaveGameOption_2::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  return uVar3;
}
```
