# read

`_ZN23Dispatcher_MemberSecede4readER9PacketBufR8MSG_BASE`

`Dispatcher_MemberSecede::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MemberSecede` | `0x081cbb26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cbb26  _ZN23Dispatcher_MemberSecede4readER9PacketBufR8MSG_BASE
#           Dispatcher_MemberSecede::read(PacketBuf&, MSG_BASE&)
# range [0x081cbb26, 0x081cbbcf]
081cbb26 +0x00:  push   %ebp
081cbb27 +0x01:  mov    %esp,%ebp
081cbb29 +0x03:  sub    $0x28,%esp
081cbb2c +0x06:  mov    0x10(%ebp),%eax
081cbb2f +0x09:  mov    %eax,-0xc(%ebp)
081cbb32 +0x0c:  mov    -0xc(%ebp),%eax
081cbb35 +0x0f:  add    $0x10,%eax
081cbb38 +0x12:  mov    %eax,0x4(%esp)
081cbb3c +0x16:  mov    0xc(%ebp),%eax
081cbb3f +0x19:  mov    %eax,(%esp)
081cbb42 +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cbb47 +0x21:  xor    $0x1,%eax
081cbb4a +0x24:  test   %al,%al
081cbb4c +0x26:  je     081cbb74 <+0x4e>
081cbb4e +0x28:  movl   $0x0,0xc(%esp)
081cbb56 +0x30:  movl   $0x0,0x8(%esp)
081cbb5e +0x38:  movl   $&_ZZN23Dispatcher_MemberSecede4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cbb66 +0x40:  movl   $0x2209,(%esp)
081cbb6d +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cbb72 +0x4c:  jmp    081cbbcd <+0xa7>
081cbb74 +0x4e:  mov    -0xc(%ebp),%eax
081cbb77 +0x51:  mov    0x10(%eax),%eax
081cbb7a +0x54:  mov    -0xc(%ebp),%edx
081cbb7d +0x57:  add    $0x14,%edx
081cbb80 +0x5a:  mov    %eax,0xc(%esp)
081cbb84 +0x5e:  movl   $0x1e,0x8(%esp)
081cbb8c +0x66:  mov    %edx,0x4(%esp)
081cbb90 +0x6a:  mov    0xc(%ebp),%eax
081cbb93 +0x6d:  mov    %eax,(%esp)
081cbb96 +0x70:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cbb9b +0x75:  xor    $0x1,%eax
081cbb9e +0x78:  test   %al,%al
081cbba0 +0x7a:  je     081cbbc8 <+0xa2>
081cbba2 +0x7c:  movl   $0x0,0xc(%esp)
081cbbaa +0x84:  movl   $0x0,0x8(%esp)
081cbbb2 +0x8c:  movl   $&_ZZN23Dispatcher_MemberSecede4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cbbba +0x94:  movl   $0x220c,(%esp)
081cbbc1 +0x9b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cbbc6 +0xa0:  jmp    081cbbcd <+0xa7>
081cbbc8 +0xa2:  mov    $0x0,%eax
081cbbcd +0xa7:  leave
081cbbce +0xa8:  ret
081cbbcf +0xa9:  nop
```

## 反编译 C

```c
// Dispatcher_MemberSecede::read @ 0x81cbb26

/* Dispatcher_MemberSecede::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MemberSecede::read(Dispatcher_MemberSecede *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x10));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x14),0x1e,*(int *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x220c,"virtual int Dispatcher_MemberSecede::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x2209,"virtual int Dispatcher_MemberSecede::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
