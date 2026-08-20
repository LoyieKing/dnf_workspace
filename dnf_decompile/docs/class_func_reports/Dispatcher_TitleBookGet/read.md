# read

`_ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE`

`Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TitleBookGet` | `0x081d7974` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d7974  _ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE
#           Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)
# range [0x081d7974, 0x081d7ad9]
081d7974 +0x000:  push   %ebp
081d7975 +0x001:  mov    %esp,%ebp
081d7977 +0x003:  sub    $0x28,%esp
081d797a +0x006:  mov    0x10(%ebp),%eax
081d797d +0x009:  mov    %eax,-0xc(%ebp)
081d7980 +0x00c:  mov    -0xc(%ebp),%eax
081d7983 +0x00f:  add    $0xd,%eax
081d7986 +0x012:  mov    %eax,0x4(%esp)
081d798a +0x016:  mov    0xc(%ebp),%eax
081d798d +0x019:  mov    %eax,(%esp)
081d7990 +0x01c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d7995 +0x021:  xor    $0x1,%eax
081d7998 +0x024:  test   %al,%al
081d799a +0x026:  je     081d79c5 <+0x51>
081d799c +0x028:  movl   $0x0,0xc(%esp)
081d79a4 +0x030:  movl   $0x0,0x8(%esp)
081d79ac +0x038:  movl   $&_ZZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d79b4 +0x040:  movl   $0x420c,(%esp)
081d79bb +0x047:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d79c0 +0x04c:  jmp    081d7ad8 <+0x164>
081d79c5 +0x051:  mov    -0xc(%ebp),%eax
081d79c8 +0x054:  add    $0x11,%eax
081d79cb +0x057:  mov    %eax,0x4(%esp)
081d79cf +0x05b:  mov    0xc(%ebp),%eax
081d79d2 +0x05e:  mov    %eax,(%esp)
081d79d5 +0x061:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d79da +0x066:  xor    $0x1,%eax
081d79dd +0x069:  test   %al,%al
081d79df +0x06b:  je     081d7a0a <+0x96>
081d79e1 +0x06d:  movl   $0x0,0xc(%esp)
081d79e9 +0x075:  movl   $0x0,0x8(%esp)
081d79f1 +0x07d:  movl   $&_ZZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d79f9 +0x085:  movl   $0x420e,(%esp)
081d7a00 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7a05 +0x091:  jmp    081d7ad8 <+0x164>
081d7a0a +0x096:  mov    -0xc(%ebp),%eax
081d7a0d +0x099:  add    $0x15,%eax
081d7a10 +0x09c:  mov    %eax,0x4(%esp)
081d7a14 +0x0a0:  mov    0xc(%ebp),%eax
081d7a17 +0x0a3:  mov    %eax,(%esp)
081d7a1a +0x0a6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d7a1f +0x0ab:  xor    $0x1,%eax
081d7a22 +0x0ae:  test   %al,%al
081d7a24 +0x0b0:  je     081d7a4f <+0xdb>
081d7a26 +0x0b2:  movl   $0x0,0xc(%esp)
081d7a2e +0x0ba:  movl   $0x0,0x8(%esp)
081d7a36 +0x0c2:  movl   $&_ZZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d7a3e +0x0ca:  movl   $0x4210,(%esp)
081d7a45 +0x0d1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7a4a +0x0d6:  jmp    081d7ad8 <+0x164>
081d7a4f +0x0db:  mov    -0xc(%ebp),%eax
081d7a52 +0x0de:  add    $0x19,%eax
081d7a55 +0x0e1:  mov    %eax,0x4(%esp)
081d7a59 +0x0e5:  mov    0xc(%ebp),%eax
081d7a5c +0x0e8:  mov    %eax,(%esp)
081d7a5f +0x0eb:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d7a64 +0x0f0:  xor    $0x1,%eax
081d7a67 +0x0f3:  test   %al,%al
081d7a69 +0x0f5:  je     081d7a91 <+0x11d>
081d7a6b +0x0f7:  movl   $0x0,0xc(%esp)
081d7a73 +0x0ff:  movl   $0x0,0x8(%esp)
081d7a7b +0x107:  movl   $&_ZZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d7a83 +0x10f:  movl   $0x4212,(%esp)
081d7a8a +0x116:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7a8f +0x11b:  jmp    081d7ad8 <+0x164>
081d7a91 +0x11d:  mov    -0xc(%ebp),%eax
081d7a94 +0x120:  add    $0x1d,%eax
081d7a97 +0x123:  mov    %eax,0x4(%esp)
081d7a9b +0x127:  mov    0xc(%ebp),%eax
081d7a9e +0x12a:  mov    %eax,(%esp)
081d7aa1 +0x12d:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d7aa6 +0x132:  xor    $0x1,%eax
081d7aa9 +0x135:  test   %al,%al
081d7aab +0x137:  je     081d7ad3 <+0x15f>
081d7aad +0x139:  movl   $0x0,0xc(%esp)
081d7ab5 +0x141:  movl   $0x0,0x8(%esp)
081d7abd +0x149:  movl   $&_ZZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d7ac5 +0x151:  movl   $0x4214,(%esp)
081d7acc +0x158:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7ad1 +0x15d:  jmp    081d7ad8 <+0x164>
081d7ad3 +0x15f:  mov    $0x0,%eax
081d7ad8 +0x164:  leave
081d7ad9 +0x165:  ret
```

## 反编译 C

```c
// Dispatcher_TitleBookGet::read @ 0x81d7974

/* Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_TitleBookGet::read(Dispatcher_TitleBookGet *this,PacketBuf *param_1,MSG_BASE *param_2)

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
            uVar2 = LineFunc(0x4214,
                             "virtual int Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)",0,0)
            ;
          }
        }
        else {
          uVar2 = LineFunc(0x4212,"virtual int Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x4210,"virtual int Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x420e,"virtual int Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x420c,"virtual int Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
