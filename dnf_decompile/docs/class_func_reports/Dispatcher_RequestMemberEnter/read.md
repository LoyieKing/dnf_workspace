# read

`_ZN29Dispatcher_RequestMemberEnter4readER9PacketBufR8MSG_BASE`

`Dispatcher_RequestMemberEnter::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestMemberEnter` | `0x081cb780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb780  _ZN29Dispatcher_RequestMemberEnter4readER9PacketBufR8MSG_BASE
#           Dispatcher_RequestMemberEnter::read(PacketBuf&, MSG_BASE&)
# range [0x081cb780, 0x081cb829]
081cb780 +0x00:  push   %ebp
081cb781 +0x01:  mov    %esp,%ebp
081cb783 +0x03:  sub    $0x28,%esp
081cb786 +0x06:  mov    0x10(%ebp),%eax
081cb789 +0x09:  mov    %eax,-0xc(%ebp)
081cb78c +0x0c:  mov    -0xc(%ebp),%eax
081cb78f +0x0f:  add    $0x10,%eax
081cb792 +0x12:  mov    %eax,0x4(%esp)
081cb796 +0x16:  mov    0xc(%ebp),%eax
081cb799 +0x19:  mov    %eax,(%esp)
081cb79c +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cb7a1 +0x21:  xor    $0x1,%eax
081cb7a4 +0x24:  test   %al,%al
081cb7a6 +0x26:  je     081cb7ce <+0x4e>
081cb7a8 +0x28:  movl   $0x0,0xc(%esp)
081cb7b0 +0x30:  movl   $0x0,0x8(%esp)
081cb7b8 +0x38:  movl   $&_ZZN29Dispatcher_RequestMemberEnter4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cb7c0 +0x40:  movl   $0x2169,(%esp)
081cb7c7 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cb7cc +0x4c:  jmp    081cb827 <+0xa7>
081cb7ce +0x4e:  mov    -0xc(%ebp),%eax
081cb7d1 +0x51:  mov    0x10(%eax),%eax
081cb7d4 +0x54:  mov    -0xc(%ebp),%edx
081cb7d7 +0x57:  add    $0x14,%edx
081cb7da +0x5a:  mov    %eax,0xc(%esp)
081cb7de +0x5e:  movl   $0x1e,0x8(%esp)
081cb7e6 +0x66:  mov    %edx,0x4(%esp)
081cb7ea +0x6a:  mov    0xc(%ebp),%eax
081cb7ed +0x6d:  mov    %eax,(%esp)
081cb7f0 +0x70:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cb7f5 +0x75:  xor    $0x1,%eax
081cb7f8 +0x78:  test   %al,%al
081cb7fa +0x7a:  je     081cb822 <+0xa2>
081cb7fc +0x7c:  movl   $0x0,0xc(%esp)
081cb804 +0x84:  movl   $0x0,0x8(%esp)
081cb80c +0x8c:  movl   $&_ZZN29Dispatcher_RequestMemberEnter4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cb814 +0x94:  movl   $0x216c,(%esp)
081cb81b +0x9b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cb820 +0xa0:  jmp    081cb827 <+0xa7>
081cb822 +0xa2:  mov    $0x0,%eax
081cb827 +0xa7:  leave
081cb828 +0xa8:  ret
081cb829 +0xa9:  nop
```

## 反编译 C

```c
// Dispatcher_RequestMemberEnter::read @ 0x81cb780

/* Dispatcher_RequestMemberEnter::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestMemberEnter::read
          (Dispatcher_RequestMemberEnter *this,PacketBuf *param_1,MSG_BASE *param_2)

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
      uVar2 = LineFunc(0x216c,
                       "virtual int Dispatcher_RequestMemberEnter::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x2169,"virtual int Dispatcher_RequestMemberEnter::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}
```
