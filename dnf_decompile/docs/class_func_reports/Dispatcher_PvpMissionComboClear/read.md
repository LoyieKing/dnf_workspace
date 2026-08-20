# read

`_ZN31Dispatcher_PvpMissionComboClear4readER9PacketBufR8MSG_BASE`

`Dispatcher_PvpMissionComboClear::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PvpMissionComboClear` | `0x081d59c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d59c6  _ZN31Dispatcher_PvpMissionComboClear4readER9PacketBufR8MSG_BASE
#           Dispatcher_PvpMissionComboClear::read(PacketBuf&, MSG_BASE&)
# range [0x081d59c6, 0x081d5a5d]
081d59c6 +0x00:  push   %ebp
081d59c7 +0x01:  mov    %esp,%ebp
081d59c9 +0x03:  sub    $0x28,%esp
081d59cc +0x06:  mov    0x10(%ebp),%eax
081d59cf +0x09:  mov    %eax,-0xc(%ebp)
081d59d2 +0x0c:  mov    -0xc(%ebp),%eax
081d59d5 +0x0f:  add    $0xd,%eax
081d59d8 +0x12:  mov    %eax,0x4(%esp)
081d59dc +0x16:  mov    0xc(%ebp),%eax
081d59df +0x19:  mov    %eax,(%esp)
081d59e2 +0x1c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081d59e7 +0x21:  xor    $0x1,%eax
081d59ea +0x24:  test   %al,%al
081d59ec +0x26:  je     081d5a14 <+0x4e>
081d59ee +0x28:  movl   $0x0,0xc(%esp)
081d59f6 +0x30:  movl   $0x0,0x8(%esp)
081d59fe +0x38:  movl   $&_ZZN31Dispatcher_PvpMissionComboClear4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d5a06 +0x40:  movl   $0x394e,(%esp)
081d5a0d +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5a12 +0x4c:  jmp    081d5a5b <+0x95>
081d5a14 +0x4e:  mov    -0xc(%ebp),%eax
081d5a17 +0x51:  add    $0xe,%eax
081d5a1a +0x54:  mov    %eax,0x4(%esp)
081d5a1e +0x58:  mov    0xc(%ebp),%eax
081d5a21 +0x5b:  mov    %eax,(%esp)
081d5a24 +0x5e:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081d5a29 +0x63:  xor    $0x1,%eax
081d5a2c +0x66:  test   %al,%al
081d5a2e +0x68:  je     081d5a56 <+0x90>
081d5a30 +0x6a:  movl   $0x0,0xc(%esp)
081d5a38 +0x72:  movl   $0x0,0x8(%esp)
081d5a40 +0x7a:  movl   $&_ZZN31Dispatcher_PvpMissionComboClear4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d5a48 +0x82:  movl   $0x3950,(%esp)
081d5a4f +0x89:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5a54 +0x8e:  jmp    081d5a5b <+0x95>
081d5a56 +0x90:  mov    $0x0,%eax
081d5a5b +0x95:  leave
081d5a5c +0x96:  ret
081d5a5d +0x97:  nop
```

## 反编译 C

```c
// Dispatcher_PvpMissionComboClear::read @ 0x81d59c6

/* Dispatcher_PvpMissionComboClear::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PvpMissionComboClear::read
          (Dispatcher_PvpMissionComboClear *this,PacketBuf *param_1,MSG_BASE *param_2)

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
      uVar2 = LineFunc(0x3950,
                       "virtual int Dispatcher_PvpMissionComboClear::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x394e,
                     "virtual int Dispatcher_PvpMissionComboClear::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```
