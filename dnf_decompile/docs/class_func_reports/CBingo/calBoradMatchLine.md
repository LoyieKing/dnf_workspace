# calBoradMatchLine

`_ZN6CBingo17calBoradMatchLineEi`

`CBingo::calBoradMatchLine(int)`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080cab5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cab5a  _ZN6CBingo17calBoradMatchLineEi
#           CBingo::calBoradMatchLine(int)
# range [0x080cab5a, 0x080cad4b]
080cab5a +0x000:  push   %ebp
080cab5b +0x001:  mov    %esp,%ebp
080cab5d +0x003:  push   %ebx
080cab5e +0x004:  sub    $0x64,%esp
080cab61 +0x007:  movl   $0x0,-0x28(%ebp)
080cab68 +0x00e:  movl   $0x5,-0x24(%ebp)
080cab6f +0x015:  mov    0xc(%ebp),%eax
080cab72 +0x018:  mov    %eax,0x4(%esp)
080cab76 +0x01c:  lea    -0x4c(%ebp),%eax
080cab79 +0x01f:  mov    %eax,(%esp)
080cab7c +0x022:  call   080ce99a <_GLOBAL__I__ZN10BingoEventC2Ev+0x37e7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x37e7
080cab81 +0x027:  movl   $0x0,-0x20(%ebp)
080cab88 +0x02e:  movl   $0x0,-0x1c(%ebp)
080cab8f +0x035:  movl   $0x0,-0x18(%ebp)
080cab96 +0x03c:  movl   $0x0,-0x14(%ebp)
080cab9d +0x043:  movl   $0x0,-0x10(%ebp)
080caba4 +0x04a:  jmp    080cad21 <+0x1c7>
080caba9 +0x04f:  movl   $0x0,-0x20(%ebp)
080cabb0 +0x056:  movl   $0x0,-0x1c(%ebp)
080cabb7 +0x05d:  movl   $0x0,-0xc(%ebp)
080cabbe +0x064:  jmp    080cac6d <+0x113>
080cabc3 +0x069:  mov    -0x10(%ebp),%edx
080cabc6 +0x06c:  mov    %edx,%eax
080cabc8 +0x06e:  shl    $0x2,%eax
080cabcb +0x071:  add    %edx,%eax
080cabcd +0x073:  add    -0xc(%ebp),%eax
080cabd0 +0x076:  mov    %eax,%edx
080cabd2 +0x078:  lea    -0x48(%ebp),%eax
080cabd5 +0x07b:  mov    %edx,0x8(%esp)
080cabd9 +0x07f:  lea    -0x4c(%ebp),%edx
080cabdc +0x082:  mov    %edx,0x4(%esp)
080cabe0 +0x086:  mov    %eax,(%esp)
080cabe3 +0x089:  call   080ce9c0 <_GLOBAL__I__ZN10BingoEventC2Ev+0x380d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x380d
080cabe8 +0x08e:  sub    $0x4,%esp
080cabeb +0x091:  lea    -0x48(%ebp),%eax
080cabee +0x094:  mov    %eax,(%esp)
080cabf1 +0x097:  call   080ce9f4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3841>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3841
080cabf6 +0x09c:  mov    %eax,%ebx
080cabf8 +0x09e:  lea    -0x48(%ebp),%eax
080cabfb +0x0a1:  mov    %eax,(%esp)
080cabfe +0x0a4:  call   080ce9ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x383b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x383b
080cac03 +0x0a9:  test   %bl,%bl
080cac05 +0x0ab:  je     080cac0b <+0xb1>
080cac07 +0x0ad:  addl   $0x1,-0x20(%ebp)
080cac0b +0x0b1:  mov    -0xc(%ebp),%edx
080cac0e +0x0b4:  mov    %edx,%eax
080cac10 +0x0b6:  shl    $0x2,%eax
080cac13 +0x0b9:  add    %edx,%eax
080cac15 +0x0bb:  add    -0x10(%ebp),%eax
080cac18 +0x0be:  mov    %eax,%edx
080cac1a +0x0c0:  lea    -0x40(%ebp),%eax
080cac1d +0x0c3:  mov    %edx,0x8(%esp)
080cac21 +0x0c7:  lea    -0x4c(%ebp),%edx
080cac24 +0x0ca:  mov    %edx,0x4(%esp)
080cac28 +0x0ce:  mov    %eax,(%esp)
080cac2b +0x0d1:  call   080ce9c0 <_GLOBAL__I__ZN10BingoEventC2Ev+0x380d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x380d
080cac30 +0x0d6:  sub    $0x4,%esp
080cac33 +0x0d9:  lea    -0x40(%ebp),%eax
080cac36 +0x0dc:  mov    %eax,(%esp)
080cac39 +0x0df:  call   080ce9f4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3841>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3841
080cac3e +0x0e4:  mov    %eax,%ebx
080cac40 +0x0e6:  lea    -0x40(%ebp),%eax
080cac43 +0x0e9:  mov    %eax,(%esp)
080cac46 +0x0ec:  call   080ce9ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x383b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x383b
080cac4b +0x0f1:  test   %bl,%bl
080cac4d +0x0f3:  je     080cac53 <+0xf9>
080cac4f +0x0f5:  addl   $0x1,-0x1c(%ebp)
080cac53 +0x0f9:  mov    -0xc(%ebp),%eax
080cac56 +0x0fc:  add    $0x1,%eax
080cac59 +0x0ff:  cmp    -0x20(%ebp),%eax
080cac5c +0x102:  jle    080cac69 <+0x10f>
080cac5e +0x104:  mov    -0xc(%ebp),%eax
080cac61 +0x107:  add    $0x1,%eax
080cac64 +0x10a:  cmp    -0x1c(%ebp),%eax
080cac67 +0x10d:  jg     080cac7e <+0x124>
080cac69 +0x10f:  addl   $0x1,-0xc(%ebp)
080cac6d +0x113:  cmpl   $0x4,-0xc(%ebp)
080cac71 +0x117:  setle  %al
080cac74 +0x11a:  test   %al,%al
080cac76 +0x11c:  jne    080cabc3 <+0x69>
080cac7c +0x122:  jmp    080cac7f <+0x125>
080cac7e +0x124:  nop
080cac7f +0x125:  cmpl   $0x5,-0x20(%ebp)
080cac83 +0x129:  jne    080cac89 <+0x12f>
080cac85 +0x12b:  addl   $0x1,-0x28(%ebp)
080cac89 +0x12f:  cmpl   $0x5,-0x1c(%ebp)
080cac8d +0x133:  jne    080cac93 <+0x139>
080cac8f +0x135:  addl   $0x1,-0x28(%ebp)
080cac93 +0x139:  mov    -0x10(%ebp),%edx
080cac96 +0x13c:  mov    %edx,%eax
080cac98 +0x13e:  add    %eax,%eax
080cac9a +0x140:  add    %edx,%eax
080cac9c +0x142:  add    %eax,%eax
080cac9e +0x144:  mov    %eax,%edx
080caca0 +0x146:  lea    -0x38(%ebp),%eax
080caca3 +0x149:  mov    %edx,0x8(%esp)
080caca7 +0x14d:  lea    -0x4c(%ebp),%edx
080cacaa +0x150:  mov    %edx,0x4(%esp)
080cacae +0x154:  mov    %eax,(%esp)
080cacb1 +0x157:  call   080ce9c0 <_GLOBAL__I__ZN10BingoEventC2Ev+0x380d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x380d
080cacb6 +0x15c:  sub    $0x4,%esp
080cacb9 +0x15f:  lea    -0x38(%ebp),%eax
080cacbc +0x162:  mov    %eax,(%esp)
080cacbf +0x165:  call   080ce9f4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3841>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3841
080cacc4 +0x16a:  mov    %eax,%ebx
080cacc6 +0x16c:  lea    -0x38(%ebp),%eax
080cacc9 +0x16f:  mov    %eax,(%esp)
080caccc +0x172:  call   080ce9ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x383b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x383b
080cacd1 +0x177:  test   %bl,%bl
080cacd3 +0x179:  je     080cacd9 <+0x17f>
080cacd5 +0x17b:  addl   $0x1,-0x18(%ebp)
080cacd9 +0x17f:  mov    -0x10(%ebp),%eax
080cacdc +0x182:  add    $0x1,%eax
080cacdf +0x185:  shl    $0x2,%eax
080cace2 +0x188:  mov    %eax,%edx
080cace4 +0x18a:  lea    -0x30(%ebp),%eax
080cace7 +0x18d:  mov    %edx,0x8(%esp)
080caceb +0x191:  lea    -0x4c(%ebp),%edx
080cacee +0x194:  mov    %edx,0x4(%esp)
080cacf2 +0x198:  mov    %eax,(%esp)
080cacf5 +0x19b:  call   080ce9c0 <_GLOBAL__I__ZN10BingoEventC2Ev+0x380d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x380d
080cacfa +0x1a0:  sub    $0x4,%esp
080cacfd +0x1a3:  lea    -0x30(%ebp),%eax
080cad00 +0x1a6:  mov    %eax,(%esp)
080cad03 +0x1a9:  call   080ce9f4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3841>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3841
080cad08 +0x1ae:  mov    %eax,%ebx
080cad0a +0x1b0:  lea    -0x30(%ebp),%eax
080cad0d +0x1b3:  mov    %eax,(%esp)
080cad10 +0x1b6:  call   080ce9ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x383b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x383b
080cad15 +0x1bb:  test   %bl,%bl
080cad17 +0x1bd:  je     080cad1d <+0x1c3>
080cad19 +0x1bf:  addl   $0x1,-0x14(%ebp)
080cad1d +0x1c3:  addl   $0x1,-0x10(%ebp)
080cad21 +0x1c7:  cmpl   $0x4,-0x10(%ebp)
080cad25 +0x1cb:  setle  %al
080cad28 +0x1ce:  test   %al,%al
080cad2a +0x1d0:  jne    080caba9 <+0x4f>
080cad30 +0x1d6:  cmpl   $0x5,-0x18(%ebp)
080cad34 +0x1da:  jne    080cad3a <+0x1e0>
080cad36 +0x1dc:  addl   $0x1,-0x28(%ebp)
080cad3a +0x1e0:  cmpl   $0x5,-0x14(%ebp)
080cad3e +0x1e4:  jne    080cad44 <+0x1ea>
080cad40 +0x1e6:  addl   $0x1,-0x28(%ebp)
080cad44 +0x1ea:  mov    -0x28(%ebp),%eax
080cad47 +0x1ed:  mov    -0x4(%ebp),%ebx
080cad4a +0x1f0:  leave
080cad4b +0x1f1:  ret
```

## 反编译 C

```c
// CBingo::calBoradMatchLine @ 0x80cab5a

/* CBingo::calBoradMatchLine(int) */

int __thiscall CBingo::calBoradMatchLine(CBingo *this,int param_1)

{
  bool bVar1;
  bitset<25u> local_50 [4];
  reference local_4c [8];
  reference local_44 [8];
  reference local_3c [8];
  reference local_34 [8];
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_2c = 0;
  local_28 = 5;
  std::bitset<25u>::bitset(local_50,param_1);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  do {
    if (4 < local_14) {
      if (local_1c == 5) {
        local_2c = local_2c + 1;
      }
      if (local_18 == 5) {
        local_2c = local_2c + 1;
      }
      return local_2c;
    }
    local_24 = 0;
    local_20 = 0;
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      std::bitset<25u>::operator[]((uint)local_4c);
      bVar1 = std::bitset::reference::operator_cast_to_bool(local_4c);
      std::bitset<25u>::reference::~reference((reference *)local_4c);
      if (bVar1) {
        local_24 = local_24 + 1;
      }
      std::bitset<25u>::operator[]((uint)local_44);
      bVar1 = std::bitset::reference::operator_cast_to_bool(local_44);
      std::bitset<25u>::reference::~reference((reference *)local_44);
      if (bVar1) {
        local_20 = local_20 + 1;
      }
      if ((local_24 < local_10 + 1) && (local_20 < local_10 + 1)) break;
    }
    if (local_24 == 5) {
      local_2c = local_2c + 1;
    }
    if (local_20 == 5) {
      local_2c = local_2c + 1;
    }
    std::bitset<25u>::operator[]((uint)local_3c);
    bVar1 = std::bitset::reference::operator_cast_to_bool(local_3c);
    std::bitset<25u>::reference::~reference((reference *)local_3c);
    if (bVar1) {
      local_1c = local_1c + 1;
    }
    std::bitset<25u>::operator[]((uint)local_34);
    bVar1 = std::bitset::reference::operator_cast_to_bool(local_34);
    std::bitset<25u>::reference::~reference((reference *)local_34);
    if (bVar1) {
      local_18 = local_18 + 1;
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
