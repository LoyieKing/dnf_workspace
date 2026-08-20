# read

`_ZN31Dispatcher_PrecheckSoloTeleport4readER9PacketBufR8MSG_BASE`

`Dispatcher_PrecheckSoloTeleport::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PrecheckSoloTeleport` | `0x081e1920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e1920  _ZN31Dispatcher_PrecheckSoloTeleport4readER9PacketBufR8MSG_BASE
#           Dispatcher_PrecheckSoloTeleport::read(PacketBuf&, MSG_BASE&)
# range [0x081e1920, 0x081e19c9]
081e1920 +0x00:  push   %ebp
081e1921 +0x01:  mov    %esp,%ebp
081e1923 +0x03:  sub    $0x28,%esp
081e1926 +0x06:  mov    0x10(%ebp),%eax
081e1929 +0x09:  mov    %eax,-0xc(%ebp)
081e192c +0x0c:  mov    -0xc(%ebp),%eax
081e192f +0x0f:  add    $0x2c,%eax
081e1932 +0x12:  mov    %eax,0x4(%esp)
081e1936 +0x16:  mov    0xc(%ebp),%eax
081e1939 +0x19:  mov    %eax,(%esp)
081e193c +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081e1941 +0x21:  xor    $0x1,%eax
081e1944 +0x24:  test   %al,%al
081e1946 +0x26:  je     081e196e <+0x4e>
081e1948 +0x28:  movl   $0x0,0xc(%esp)
081e1950 +0x30:  movl   $0x0,0x8(%esp)
081e1958 +0x38:  movl   $&_ZZN31Dispatcher_PrecheckSoloTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e1960 +0x40:  movl   $0x572d,(%esp)
081e1967 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e196c +0x4c:  jmp    081e19c7 <+0xa7>
081e196e +0x4e:  mov    -0xc(%ebp),%eax
081e1971 +0x51:  mov    0x2c(%eax),%eax
081e1974 +0x54:  mov    -0xc(%ebp),%edx
081e1977 +0x57:  add    $0xd,%edx
081e197a +0x5a:  mov    %eax,0xc(%esp)
081e197e +0x5e:  movl   $0x1e,0x8(%esp)
081e1986 +0x66:  mov    %edx,0x4(%esp)
081e198a +0x6a:  mov    0xc(%ebp),%eax
081e198d +0x6d:  mov    %eax,(%esp)
081e1990 +0x70:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081e1995 +0x75:  xor    $0x1,%eax
081e1998 +0x78:  test   %al,%al
081e199a +0x7a:  je     081e19c2 <+0xa2>
081e199c +0x7c:  movl   $0x0,0xc(%esp)
081e19a4 +0x84:  movl   $0x0,0x8(%esp)
081e19ac +0x8c:  movl   $&_ZZN31Dispatcher_PrecheckSoloTeleport4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e19b4 +0x94:  movl   $0x5730,(%esp)
081e19bb +0x9b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e19c0 +0xa0:  jmp    081e19c7 <+0xa7>
081e19c2 +0xa2:  mov    $0x0,%eax
081e19c7 +0xa7:  leave
081e19c8 +0xa8:  ret
081e19c9 +0xa9:  nop
```

## 反编译 C

```c
// Dispatcher_PrecheckSoloTeleport::read @ 0x81e1920

/* Dispatcher_PrecheckSoloTeleport::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PrecheckSoloTeleport::read
          (Dispatcher_PrecheckSoloTeleport *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x2c));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0xd),0x1e,*(int *)(param_2 + 0x2c));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x5730,
                       "virtual int Dispatcher_PrecheckSoloTeleport::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x572d,
                     "virtual int Dispatcher_PrecheckSoloTeleport::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```
