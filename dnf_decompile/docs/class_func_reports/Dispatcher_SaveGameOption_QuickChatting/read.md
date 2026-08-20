# read

`_ZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASE`

`Dispatcher_SaveGameOption_QuickChatting::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveGameOption_QuickChatting` | `0x081cf0a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cf0a6  _ZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASE
#           Dispatcher_SaveGameOption_QuickChatting::read(PacketBuf&, MSG_BASE&)
# range [0x081cf0a6, 0x081cf1ab]
081cf0a6 +0x000:  push   %ebp
081cf0a7 +0x001:  mov    %esp,%ebp
081cf0a9 +0x003:  sub    $0x28,%esp
081cf0ac +0x006:  mov    0x10(%ebp),%eax
081cf0af +0x009:  mov    %eax,-0xc(%ebp)
081cf0b2 +0x00c:  mov    -0xc(%ebp),%eax
081cf0b5 +0x00f:  add    $0x11,%eax
081cf0b8 +0x012:  mov    %eax,0x4(%esp)
081cf0bc +0x016:  mov    0xc(%ebp),%eax
081cf0bf +0x019:  mov    %eax,(%esp)
081cf0c2 +0x01c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081cf0c7 +0x021:  xor    $0x1,%eax
081cf0ca +0x024:  test   %al,%al
081cf0cc +0x026:  je     081cf0f7 <+0x51>
081cf0ce +0x028:  movl   $0x0,0xc(%esp)
081cf0d6 +0x030:  movl   $0x0,0x8(%esp)
081cf0de +0x038:  movl   $&_ZZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf0e6 +0x040:  movl   $0x290a,(%esp)
081cf0ed +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf0f2 +0x04c:  jmp    081cf1a9 <+0x103>
081cf0f7 +0x051:  mov    -0xc(%ebp),%eax
081cf0fa +0x054:  add    $0xd,%eax
081cf0fd +0x057:  mov    %eax,0x4(%esp)
081cf101 +0x05b:  mov    0xc(%ebp),%eax
081cf104 +0x05e:  mov    %eax,(%esp)
081cf107 +0x061:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081cf10c +0x066:  xor    $0x1,%eax
081cf10f +0x069:  test   %al,%al
081cf111 +0x06b:  jne    081cf120 <+0x7a>
081cf113 +0x06d:  mov    -0xc(%ebp),%eax
081cf116 +0x070:  mov    0xd(%eax),%eax
081cf119 +0x073:  cmp    $0x12c,%eax
081cf11e +0x078:  jbe    081cf127 <+0x81>
081cf120 +0x07a:  mov    $0x1,%eax
081cf125 +0x07f:  jmp    081cf12c <+0x86>
081cf127 +0x081:  mov    $0x0,%eax
081cf12c +0x086:  test   %al,%al
081cf12e +0x088:  je     081cf156 <+0xb0>
081cf130 +0x08a:  movl   $0x0,0xc(%esp)
081cf138 +0x092:  movl   $0x0,0x8(%esp)
081cf140 +0x09a:  movl   $&_ZZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf148 +0x0a2:  movl   $0x290b,(%esp)
081cf14f +0x0a9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf154 +0x0ae:  jmp    081cf1a9 <+0x103>
081cf156 +0x0b0:  mov    -0xc(%ebp),%eax
081cf159 +0x0b3:  mov    0xd(%eax),%eax
081cf15c +0x0b6:  mov    %eax,%edx
081cf15e +0x0b8:  mov    -0xc(%ebp),%eax
081cf161 +0x0bb:  add    $0x12,%eax
081cf164 +0x0be:  mov    %edx,0x8(%esp)
081cf168 +0x0c2:  mov    %eax,0x4(%esp)
081cf16c +0x0c6:  mov    0xc(%ebp),%eax
081cf16f +0x0c9:  mov    %eax,(%esp)
081cf172 +0x0cc:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081cf177 +0x0d1:  xor    $0x1,%eax
081cf17a +0x0d4:  test   %al,%al
081cf17c +0x0d6:  je     081cf1a4 <+0xfe>
081cf17e +0x0d8:  movl   $0x0,0xc(%esp)
081cf186 +0x0e0:  movl   $0x0,0x8(%esp)
081cf18e +0x0e8:  movl   $&_ZZN39Dispatcher_SaveGameOption_QuickChatting4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf196 +0x0f0:  movl   $0x290c,(%esp)
081cf19d +0x0f7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf1a2 +0x0fc:  jmp    081cf1a9 <+0x103>
081cf1a4 +0x0fe:  mov    $0x0,%eax
081cf1a9 +0x103:  leave
081cf1aa +0x104:  ret
081cf1ab +0x105:  nop
```

## 反编译 C

```c
// Dispatcher_SaveGameOption_QuickChatting::read @ 0x81cf0a6

/* Dispatcher_SaveGameOption_QuickChatting::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveGameOption_QuickChatting::read
          (Dispatcher_SaveGameOption_QuickChatting *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x11));
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
    if ((cVar2 == '\x01') && (*(uint *)(param_2 + 0xd) < 0x12d)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = LineFunc(0x290b,
                       "virtual int Dispatcher_SaveGameOption_QuickChatting::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
    else {
      cVar2 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0x12),*(int *)(param_2 + 0xd));
      if (cVar2 == '\x01') {
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0x290c,
                         "virtual int Dispatcher_SaveGameOption_QuickChatting::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
  }
  else {
    uVar3 = LineFunc(0x290a,
                     "virtual int Dispatcher_SaveGameOption_QuickChatting::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar3;
}
```
