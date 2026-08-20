# read

`_ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE`

`Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeItemSeparate` | `0x081cbf24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cbf24  _ZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASE
#           Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)
# range [0x081cbf24, 0x081cc105]
081cbf24 +0x000:  push   %ebp
081cbf25 +0x001:  mov    %esp,%ebp
081cbf27 +0x003:  push   %edi
081cbf28 +0x004:  push   %ebx
081cbf29 +0x005:  sub    $0xa0,%esp
081cbf2f +0x00b:  mov    0x10(%ebp),%eax
081cbf32 +0x00e:  add    $0x1b,%eax
081cbf35 +0x011:  mov    %eax,0x4(%esp)
081cbf39 +0x015:  mov    0xc(%ebp),%eax
081cbf3c +0x018:  mov    %eax,(%esp)
081cbf3f +0x01b:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081cbf44 +0x020:  xor    $0x1,%eax
081cbf47 +0x023:  test   %al,%al
081cbf49 +0x025:  je     081cbf74 <+0x50>
081cbf4b +0x027:  movl   $0x0,0xc(%esp)
081cbf53 +0x02f:  movl   $0x0,0x8(%esp)
081cbf5b +0x037:  movl   $&_ZZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cbf63 +0x03f:  movl   $0x228e,(%esp)
081cbf6a +0x046:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cbf6f +0x04b:  jmp    081cc0fc <+0x1d8>
081cbf74 +0x050:  mov    0x10(%ebp),%eax
081cbf77 +0x053:  add    $0x1d,%eax
081cbf7a +0x056:  mov    %eax,0x4(%esp)
081cbf7e +0x05a:  mov    0xc(%ebp),%eax
081cbf81 +0x05d:  mov    %eax,(%esp)
081cbf84 +0x060:  call   0858d27e <_ZN9PacketBuf7get_intERm>  ; PacketBuf::get_int(unsigned long&)
081cbf89 +0x065:  xor    $0x1,%eax
081cbf8c +0x068:  test   %al,%al
081cbf8e +0x06a:  je     081cbfb9 <+0x95>
081cbf90 +0x06c:  movl   $0x0,0xc(%esp)
081cbf98 +0x074:  movl   $0x0,0x8(%esp)
081cbfa0 +0x07c:  movl   $&_ZZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cbfa8 +0x084:  movl   $0x2290,(%esp)
081cbfaf +0x08b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cbfb4 +0x090:  jmp    081cc0fc <+0x1d8>
081cbfb9 +0x095:  mov    0x10(%ebp),%eax
081cbfbc +0x098:  add    $0x23,%eax
081cbfbf +0x09b:  mov    %eax,0x4(%esp)
081cbfc3 +0x09f:  mov    0xc(%ebp),%eax
081cbfc6 +0x0a2:  mov    %eax,(%esp)
081cbfc9 +0x0a5:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081cbfce +0x0aa:  xor    $0x1,%eax
081cbfd1 +0x0ad:  test   %al,%al
081cbfd3 +0x0af:  je     081cbffe <+0xda>
081cbfd5 +0x0b1:  movl   $0x0,0xc(%esp)
081cbfdd +0x0b9:  movl   $0x0,0x8(%esp)
081cbfe5 +0x0c1:  movl   $&_ZZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cbfed +0x0c9:  movl   $0x2292,(%esp)
081cbff4 +0x0d0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cbff9 +0x0d5:  jmp    081cc0fc <+0x1d8>
081cbffe +0x0da:  movl   $0x80,-0xc(%ebp)
081cc005 +0x0e1:  movl   $0x0,-0x10(%ebp)
081cc00c +0x0e8:  lea    -0x91(%ebp),%edx
081cc012 +0x0ee:  mov    $0x81,%ebx
081cc017 +0x0f3:  mov    $0x0,%eax
081cc01c +0x0f8:  mov    %edx,%ecx
081cc01e +0x0fa:  and    $0x1,%ecx
081cc021 +0x0fd:  test   %ecx,%ecx
081cc023 +0x0ff:  je     081cc02d <+0x109>
081cc025 +0x101:  mov    %al,(%edx)
081cc027 +0x103:  add    $0x1,%edx
081cc02a +0x106:  sub    $0x1,%ebx
081cc02d +0x109:  mov    %edx,%ecx
081cc02f +0x10b:  and    $0x2,%ecx
081cc032 +0x10e:  test   %ecx,%ecx
081cc034 +0x110:  je     081cc03f <+0x11b>
081cc036 +0x112:  mov    %ax,(%edx)
081cc039 +0x115:  add    $0x2,%edx
081cc03c +0x118:  sub    $0x2,%ebx
081cc03f +0x11b:  mov    %ebx,%ecx
081cc041 +0x11d:  shr    $0x2,%ecx
081cc044 +0x120:  mov    %edx,%edi
081cc046 +0x122:  rep stos %eax,%es:(%edi)
081cc048 +0x124:  mov    %edi,%edx
081cc04a +0x126:  mov    %ebx,%ecx
081cc04c +0x128:  and    $0x2,%ecx
081cc04f +0x12b:  test   %ecx,%ecx
081cc051 +0x12d:  je     081cc059 <+0x135>
081cc053 +0x12f:  mov    %ax,(%edx)
081cc056 +0x132:  add    $0x2,%edx
081cc059 +0x135:  mov    %ebx,%ecx
081cc05b +0x137:  and    $0x1,%ecx
081cc05e +0x13a:  test   %ecx,%ecx
081cc060 +0x13c:  je     081cc067 <+0x143>
081cc062 +0x13e:  mov    %al,(%edx)
081cc064 +0x140:  add    $0x1,%edx
081cc067 +0x143:  lea    -0x10(%ebp),%eax
081cc06a +0x146:  mov    %eax,0x4(%esp)
081cc06e +0x14a:  mov    0xc(%ebp),%eax
081cc071 +0x14d:  mov    %eax,(%esp)
081cc074 +0x150:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081cc079 +0x155:  xor    $0x1,%eax
081cc07c +0x158:  test   %al,%al
081cc07e +0x15a:  je     081cc0a6 <+0x182>
081cc080 +0x15c:  movl   $0x0,0xc(%esp)
081cc088 +0x164:  movl   $0x0,0x8(%esp)
081cc090 +0x16c:  movl   $&_ZZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cc098 +0x174:  movl   $0x229a,(%esp)
081cc09f +0x17b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cc0a4 +0x180:  jmp    081cc0fc <+0x1d8>
081cc0a6 +0x182:  mov    -0x10(%ebp),%eax
081cc0a9 +0x185:  mov    0x10(%ebp),%edx
081cc0ac +0x188:  add    $0x28,%edx
081cc0af +0x18b:  mov    %eax,0xc(%esp)
081cc0b3 +0x18f:  movl   $0x81,0x8(%esp)
081cc0bb +0x197:  mov    %edx,0x4(%esp)
081cc0bf +0x19b:  mov    0xc(%ebp),%eax
081cc0c2 +0x19e:  mov    %eax,(%esp)
081cc0c5 +0x1a1:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cc0ca +0x1a6:  xor    $0x1,%eax
081cc0cd +0x1a9:  test   %al,%al
081cc0cf +0x1ab:  je     081cc0f7 <+0x1d3>
081cc0d1 +0x1ad:  movl   $0x0,0xc(%esp)
081cc0d9 +0x1b5:  movl   $0x0,0x8(%esp)
081cc0e1 +0x1bd:  movl   $&_ZZN30Dispatcher_UpgradeItemSeparate4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cc0e9 +0x1c5:  movl   $0x229d,(%esp)
081cc0f0 +0x1cc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cc0f5 +0x1d1:  jmp    081cc0fc <+0x1d8>
081cc0f7 +0x1d3:  mov    $0x0,%eax
081cc0fc +0x1d8:  add    $0xa0,%esp
081cc102 +0x1de:  pop    %ebx
081cc103 +0x1df:  pop    %edi
081cc104 +0x1e0:  pop    %ebp
081cc105 +0x1e1:  ret
```

## 反编译 C

```c
// Dispatcher_UpgradeItemSeparate::read @ 0x81cbf24

/* Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UpgradeItemSeparate::read
          (Dispatcher_UpgradeItemSeparate *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  undefined1 local_95;
  undefined4 local_94 [32];
  uint local_14 [2];
  
  bVar7 = 0;
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x1b));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0x1d));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x23));
      if (cVar1 == '\x01') {
        local_14[1] = 0x80;
        local_14[0] = 0;
        puVar4 = (undefined4 *)&local_95;
        uVar5 = 0x81;
        bVar6 = ((uint)puVar4 & 1) != 0;
        if (bVar6) {
          local_95 = 0;
          puVar4 = local_94;
          uVar5 = 0x80;
        }
        if (((uint)puVar4 & 2) != 0) {
          *(undefined2 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 2);
          uVar5 = uVar5 - 2;
        }
        for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        }
        if ((uVar5 & 2) != 0) {
          *(undefined2 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 2);
        }
        if (!bVar6) {
          *(undefined1 *)puVar4 = 0;
        }
        cVar1 = PacketBuf::get_int(param_1,local_14);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x28),0x81,local_14[0]);
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x229d,
                             "virtual int Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x229a,
                           "virtual int Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x2292,
                         "virtual int Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2290,
                       "virtual int Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x228e,
                     "virtual int Dispatcher_UpgradeItemSeparate::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
