# bind

`_ZN5nexon4cash9UDPSocket4bindEtb`

`nexon::cash::UDPSocket::bind(unsigned short, bool)`

| 类 | 地址 |
|---|---|
| `nexon::cash::UDPSocket` | `0x081aee82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081aee82  _ZN5nexon4cash9UDPSocket4bindEtb
#           nexon::cash::UDPSocket::bind(unsigned short, bool)
# range [0x081aee82, 0x081aefa1]
081aee82 +0x000:  push   %ebp
081aee83 +0x001:  mov    %esp,%ebp
081aee85 +0x003:  sub    $0x38,%esp
081aee88 +0x006:  mov    0xc(%ebp),%edx
081aee8b +0x009:  mov    0x10(%ebp),%eax
081aee8e +0x00c:  mov    %dx,-0x1c(%ebp)
081aee92 +0x010:  mov    %al,-0x20(%ebp)
081aee95 +0x013:  mov    0x8(%ebp),%eax
081aee98 +0x016:  movzwl -0x1c(%ebp),%edx
081aee9c +0x01a:  mov    %dx,0x14(%eax)
081aeea0 +0x01e:  mov    0x8(%ebp),%eax
081aeea3 +0x021:  add    $0x4,%eax
081aeea6 +0x024:  movl   $0x10,0x8(%esp)
081aeeae +0x02c:  movl   $0x0,0x4(%esp)
081aeeb6 +0x034:  mov    %eax,(%esp)
081aeeb9 +0x037:  call   0807dcc0 <_init+0x5b8>
081aeebe +0x03c:  mov    0x8(%ebp),%eax
081aeec1 +0x03f:  movw   $0x2,0x4(%eax)
081aeec7 +0x045:  movl   $0x0,(%esp)
081aeece +0x04c:  call   0807db10 <_init+0x408>
081aeed3 +0x051:  mov    0x8(%ebp),%edx
081aeed6 +0x054:  mov    %eax,0x8(%edx)
081aeed9 +0x057:  mov    0x8(%ebp),%eax
081aeedc +0x05a:  movzwl 0x14(%eax),%eax
081aeee0 +0x05e:  movzwl %ax,%eax
081aeee3 +0x061:  mov    %eax,(%esp)
081aeee6 +0x064:  call   0807e680 <_init+0xf78>
081aeeeb +0x069:  mov    0x8(%ebp),%edx
081aeeee +0x06c:  mov    %ax,0x6(%edx)
081aeef2 +0x070:  mov    0x8(%ebp),%eax
081aeef5 +0x073:  add    $0x4,%eax
081aeef8 +0x076:  mov    %eax,%edx
081aeefa +0x078:  mov    0x8(%ebp),%eax
081aeefd +0x07b:  mov    (%eax),%eax
081aeeff +0x07d:  movl   $0x10,0x8(%esp)
081aef07 +0x085:  mov    %edx,0x4(%esp)
081aef0b +0x089:  mov    %eax,(%esp)
081aef0e +0x08c:  call   0807e750 <_init+0x1048>
081aef13 +0x091:  test   %eax,%eax
081aef15 +0x093:  setne  %al
081aef18 +0x096:  test   %al,%al
081aef1a +0x098:  je     081aef89 <+0x107>
081aef1c +0x09a:  call   0807dd70 <_init+0x668>
081aef21 +0x09f:  mov    (%eax),%eax
081aef23 +0x0a1:  mov    %eax,-0xc(%ebp)
081aef26 +0x0a4:  mov    -0xc(%ebp),%eax
081aef29 +0x0a7:  cmp    $0x62,%eax
081aef2c +0x0aa:  je     081aef39 <+0xb7>
081aef2e +0x0ac:  cmp    $0x63,%eax
081aef31 +0x0af:  je     081aef4f <+0xcd>
081aef33 +0x0b1:  test   %eax,%eax
081aef35 +0x0b3:  je     081aef81 <+0xff>
081aef37 +0x0b5:  jmp    081aef5d <+0xdb>
081aef39 +0x0b7:  movzwl -0x1c(%ebp),%eax
081aef3d +0x0bb:  mov    %eax,0x4(%esp)
081aef41 +0x0bf:  movl   $"Port %d for receiving UDP is in use\n",(%esp)
081aef48 +0x0c6:  call   0807db60 <_init+0x458>
081aef4d +0x0cb:  jmp    081aef82 <+0x100>
081aef4f +0x0cd:  movl   $"Cannot assign requested address",(%esp)
081aef56 +0x0d4:  call   0807e570 <_init+0xe68>
081aef5b +0x0d9:  jmp    081aef82 <+0x100>
081aef5d +0x0db:  mov    -0xc(%ebp),%eax
081aef60 +0x0de:  mov    %eax,(%esp)
081aef63 +0x0e1:  call   0807d730 <_init+0x28>
081aef68 +0x0e6:  mov    %eax,0x8(%esp)
081aef6c +0x0ea:  mov    -0xc(%ebp),%eax
081aef6f +0x0ed:  mov    %eax,0x4(%esp)
081aef73 +0x0f1:  movl   $"Could not bind UDP receive port. Error= %d , strerror = %s\n",(%esp)
081aef7a +0x0f8:  call   0807db60 <_init+0x458>
081aef7f +0x0fd:  jmp    081aef82 <+0x100>
081aef81 +0x0ff:  nop
081aef82 +0x100:  mov    $0x0,%eax
081aef87 +0x105:  jmp    081aef9f <+0x11d>
081aef89 +0x107:  cmpb   $0x0,-0x20(%ebp)
081aef8d +0x10b:  je     081aef9a <+0x118>
081aef8f +0x10d:  mov    0x8(%ebp),%eax
081aef92 +0x110:  mov    %eax,(%esp)
081aef95 +0x113:  call   081aefa2 <_ZN5nexon4cash9UDPSocket14setOptNonBlockEv>  ; nexon::cash::UDPSocket::setOptNonBlock()
081aef9a +0x118:  mov    $0x1,%eax
081aef9f +0x11d:  leave
081aefa0 +0x11e:  ret
081aefa1 +0x11f:  nop
```

## 反编译 C

```c
// nexon::cash::UDPSocket::bind @ 0x81aee82

/* nexon::cash::UDPSocket::bind(unsigned short, bool) */

undefined4 __thiscall nexon::cash::UDPSocket::bind(UDPSocket *this,ushort param_1,bool param_2)

{
  uint16_t uVar1;
  uint32_t uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  *(ushort *)(this + 0x14) = param_1;
  memset(this + 4,0,0x10);
  *(undefined2 *)(this + 4) = 2;
  uVar2 = htonl(0);
  *(uint32_t *)(this + 8) = uVar2;
  uVar1 = htons(*(uint16_t *)(this + 0x14));
  *(uint16_t *)(this + 6) = uVar1;
  iVar3 = ::bind(*(int *)this,(sockaddr *)(this + 4),0x10);
  if (iVar3 == 0) {
    if (param_2) {
      setOptNonBlock(this);
    }
    uVar6 = 1;
  }
  else {
    piVar4 = __errno_location();
    iVar3 = *piVar4;
    if (iVar3 == 0x62) {
      printf("Port %d for receiving UDP is in use\n",(uint)param_1);
    }
    else if (iVar3 == 99) {
      puts("Cannot assign requested address");
    }
    else if (iVar3 != 0) {
      pcVar5 = strerror(iVar3);
      printf("Could not bind UDP receive port. Error= %d , strerror = %s\n",iVar3,pcVar5);
    }
    uVar6 = 0;
  }
  return uVar6;
}
```
