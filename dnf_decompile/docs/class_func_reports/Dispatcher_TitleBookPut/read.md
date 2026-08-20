# read

`_ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE`

`Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TitleBookPut` | `0x081d75e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d75e8  _ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE
#           Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)
# range [0x081d75e8, 0x081d774d]
081d75e8 +0x000:  push   %ebp
081d75e9 +0x001:  mov    %esp,%ebp
081d75eb +0x003:  sub    $0x28,%esp
081d75ee +0x006:  mov    0x10(%ebp),%eax
081d75f1 +0x009:  mov    %eax,-0xc(%ebp)
081d75f4 +0x00c:  mov    -0xc(%ebp),%eax
081d75f7 +0x00f:  add    $0xd,%eax
081d75fa +0x012:  mov    %eax,0x4(%esp)
081d75fe +0x016:  mov    0xc(%ebp),%eax
081d7601 +0x019:  mov    %eax,(%esp)
081d7604 +0x01c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d7609 +0x021:  xor    $0x1,%eax
081d760c +0x024:  test   %al,%al
081d760e +0x026:  je     081d7639 <+0x51>
081d7610 +0x028:  movl   $0x0,0xc(%esp)
081d7618 +0x030:  movl   $0x0,0x8(%esp)
081d7620 +0x038:  movl   $&_ZZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d7628 +0x040:  movl   $0x41d4,(%esp)
081d762f +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7634 +0x04c:  jmp    081d774c <+0x164>
081d7639 +0x051:  mov    -0xc(%ebp),%eax
081d763c +0x054:  add    $0x11,%eax
081d763f +0x057:  mov    %eax,0x4(%esp)
081d7643 +0x05b:  mov    0xc(%ebp),%eax
081d7646 +0x05e:  mov    %eax,(%esp)
081d7649 +0x061:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d764e +0x066:  xor    $0x1,%eax
081d7651 +0x069:  test   %al,%al
081d7653 +0x06b:  je     081d767e <+0x96>
081d7655 +0x06d:  movl   $0x0,0xc(%esp)
081d765d +0x075:  movl   $0x0,0x8(%esp)
081d7665 +0x07d:  movl   $&_ZZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d766d +0x085:  movl   $0x41d6,(%esp)
081d7674 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7679 +0x091:  jmp    081d774c <+0x164>
081d767e +0x096:  mov    -0xc(%ebp),%eax
081d7681 +0x099:  add    $0x15,%eax
081d7684 +0x09c:  mov    %eax,0x4(%esp)
081d7688 +0x0a0:  mov    0xc(%ebp),%eax
081d768b +0x0a3:  mov    %eax,(%esp)
081d768e +0x0a6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d7693 +0x0ab:  xor    $0x1,%eax
081d7696 +0x0ae:  test   %al,%al
081d7698 +0x0b0:  je     081d76c3 <+0xdb>
081d769a +0x0b2:  movl   $0x0,0xc(%esp)
081d76a2 +0x0ba:  movl   $0x0,0x8(%esp)
081d76aa +0x0c2:  movl   $&_ZZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d76b2 +0x0ca:  movl   $0x41d8,(%esp)
081d76b9 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d76be +0x0d6:  jmp    081d774c <+0x164>
081d76c3 +0x0db:  mov    -0xc(%ebp),%eax
081d76c6 +0x0de:  add    $0x19,%eax
081d76c9 +0x0e1:  mov    %eax,0x4(%esp)
081d76cd +0x0e5:  mov    0xc(%ebp),%eax
081d76d0 +0x0e8:  mov    %eax,(%esp)
081d76d3 +0x0eb:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d76d8 +0x0f0:  xor    $0x1,%eax
081d76db +0x0f3:  test   %al,%al
081d76dd +0x0f5:  je     081d7705 <+0x11d>
081d76df +0x0f7:  movl   $0x0,0xc(%esp)
081d76e7 +0x0ff:  movl   $0x0,0x8(%esp)
081d76ef +0x107:  movl   $&_ZZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d76f7 +0x10f:  movl   $0x41da,(%esp)
081d76fe +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7703 +0x11b:  jmp    081d774c <+0x164>
081d7705 +0x11d:  mov    -0xc(%ebp),%eax
081d7708 +0x120:  add    $0x1d,%eax
081d770b +0x123:  mov    %eax,0x4(%esp)
081d770f +0x127:  mov    0xc(%ebp),%eax
081d7712 +0x12a:  mov    %eax,(%esp)
081d7715 +0x12d:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d771a +0x132:  xor    $0x1,%eax
081d771d +0x135:  test   %al,%al
081d771f +0x137:  je     081d7747 <+0x15f>
081d7721 +0x139:  movl   $0x0,0xc(%esp)
081d7729 +0x141:  movl   $0x0,0x8(%esp)
081d7731 +0x149:  movl   $&_ZZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d7739 +0x151:  movl   $0x41dc,(%esp)
081d7740 +0x158:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7745 +0x15d:  jmp    081d774c <+0x164>
081d7747 +0x15f:  mov    $0x0,%eax
081d774c +0x164:  leave
081d774d +0x165:  ret
```

## 反编译 C

```c
// Dispatcher_TitleBookPut::read @ 0x81d75e8

/* Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_TitleBookPut::read(Dispatcher_TitleBookPut *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x15));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x19));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x1d));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x41dc,
                             "virtual int Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)",0,0)
            ;
          }
        }
        else {
          uVar2 = LineFunc(0x41da,"virtual int Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x41d8,"virtual int Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x41d6,"virtual int Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x41d4,"virtual int Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
